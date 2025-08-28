#include "TaleWorlds.Native.Split.h"

// 99_part_03_part093.c - 1 个函数

// 函数: void FUN_180250050(undefined8 *param_1,int param_2,int param_3)
void FUN_180250050(undefined8 *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  longlong in_stack_ffffffffffffff00;
  undefined4 uVar23;
  undefined4 *in_stack_ffffffffffffff08;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  uint uStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  uint *puStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  
  lStack_90 = (longlong)param_3;
  lStack_b8 = (longlong)param_2;
  if (lStack_b8 < lStack_90) {
    do {
      lVar12 = param_1[1];
      lVar15 = (longlong)*(int *)(*(longlong *)*param_1 + lStack_b8 * 4);
      lVar19 = lVar15 * 0x420 + *(longlong *)(lVar12 + 0x78);
      lStack_a8 = *(longlong *)(lVar19 + 0x370);
      uVar18 = *(uint *)(lVar19 + 0xe4) & **(uint **)param_1[2];
      bVar21 = uVar18 != 0;
      if (*(char *)param_1[3] != '\0') {
        if (((((uint)(int)*(char *)((longlong)
                                    *(int *)(*(longlong *)(lVar12 + 0x38) + 4 + lVar15 * 0xc) +
                                   *(longlong *)(lVar12 + 0xd8)) >> 5 & 1) == 0) &&
            ((*(uint *)(lStack_a8 + 0x138) & 0x2000010c) == 0)) &&
           ((*(char *)(lStack_a8 + 0x13c) == '\x06' ||
            ((*(char *)(lStack_a8 + 0x13c) == '\0' ||
             ((*(uint *)(lStack_a8 + 0x138) >> 0x12 & 1) != 0)))))) {
          bVar21 = true;
        }
        else {
          bVar21 = false;
        }
        if ((uVar18 == 0) || (!bVar21)) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
        }
      }
      uVar18 = *(uint *)(lVar19 + 0xd8 + (longlong)*(int *)param_1[4] * 4);
      if (bVar21) {
        uStack_c0 = uVar18;
        puVar8 = (undefined8 *)FUN_1800dae20();
        puStack_d0 = puVar8;
        FUN_180250be0(puVar8,(undefined8 *)(lVar19 + 0xf0));
        puStack_a0 = (uint *)(puVar8 + 0x5c);
        *puStack_a0 = *puStack_a0 | 0x88000;
        if (*(int *)(*(longlong *)param_1[2] + 8) == -1) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(uint *)(*(longlong *)param_1[2] + 0x18);
        }
        if ((uVar7 & 1) != 0) {
          puVar14 = puVar8;
          for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
            *puVar14 = 0;
            puVar14 = puVar14 + 1;
          }
          if ((((*(ulonglong *)(lStack_a8 + 0x140) &
                *(ulonglong *)(*(longlong *)(lStack_a8 + 0x1e0) + 0x1580)) != 0) &&
              (0.0 < *(float *)(lStack_a8 + 600))) ||
             ((*(char *)(lStack_a8 + 0x13c) != '\x06' && (*(char *)(lStack_a8 + 0x13c) != '\0')))) {
            if ((*(byte *)(lVar19 + 0x170) & 1) == 0) {
              uVar11 = *(undefined8 *)(lVar19 + 0xf0);
            }
            else {
              uVar11 = 0;
            }
            *puVar8 = uVar11;
          }
        }
        if (*(char *)param_1[5] != '\0') {
          uStack_b0 = 1;
          lVar12 = *(longlong *)param_1[6] +
                   (longlong)*(int *)(*(longlong *)param_1[7] + lStack_b8 * 4) * 0x10;
          puVar8[0x54] = lVar12;
          *(undefined4 *)(lVar12 + 8) =
               *(undefined4 *)(*(longlong *)(param_1[1] + 0x38) + 4 + lVar15 * 0xc);
          puVar14 = (undefined8 *)puVar8[0x54];
          (**(code **)(**(longlong **)(_DAT_180c86938 + 0x1d78) + 0xc0))
                    (*(longlong **)(_DAT_180c86938 + 0x1d78),&uStack_b0,&uStack_98);
          *puVar14 = uStack_98;
        }
        if ((*(char *)(*(longlong *)param_1[2] + 0x20) != '\0') ||
           (*(char *)(*(longlong *)param_1[2] + 0x21) != '\0')) {
          *puStack_a0 = *puStack_a0 | 0x40;
          plVar1 = puVar8 + 0x3b;
          plVar16 = (longlong *)(lVar15 * 0x20 + *(longlong *)(*(longlong *)param_1[2] + 0x9918));
          if (plVar1 != plVar16) {
            lVar12 = plVar16[1];
            lVar15 = *plVar16;
            lVar9 = *plVar1;
            lVar13 = lVar12 - lVar15;
            uVar20 = lVar13 >> 2;
            if ((ulonglong)(puVar8[0x3d] - lVar9 >> 2) < uVar20) {
              if (uVar20 == 0) {
                lVar9 = 0;
              }
              else {
                lVar9 = FUN_18062b420(_DAT_180c8ed18,uVar20 * 4,*(undefined1 *)(puVar8 + 0x3e));
              }
              if (lVar15 != lVar12) {
                    // WARNING: Subroutine does not return
                memmove(lVar9,lVar15,lVar13);
              }
              if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              *plVar1 = lVar9;
              lVar9 = uVar20 * 4 + lVar9;
              puVar8[0x3c] = lVar9;
              puVar8[0x3d] = lVar9;
              uVar18 = uStack_c0;
            }
            else {
              lVar4 = puVar8[0x3c];
              uVar10 = lVar4 - lVar9 >> 2;
              if (uVar10 < uVar20) {
                lVar13 = lVar15 + uVar10 * 4;
                if (lVar15 != lVar13) {
                    // WARNING: Subroutine does not return
                  memmove(lVar9,lVar15);
                }
                if (lVar13 != lVar12) {
                    // WARNING: Subroutine does not return
                  memmove(lVar4,lVar13,lVar12 - lVar13);
                }
                puVar8[0x3c] = lVar4;
              }
              else {
                if (lVar15 != lVar12) {
                    // WARNING: Subroutine does not return
                  memmove(lVar9,lVar15,lVar13);
                }
                puVar8[0x3c] = lVar9;
              }
            }
          }
          if (*_DAT_180c8a9d8 != '\0') {
            LOCK();
            *(int *)(_DAT_180c8a9d8 + 0x88) = *(int *)(_DAT_180c8a9d8 + 0x88) + 1;
            UNLOCK();
            LOCK();
            *(int *)(_DAT_180c8a9d8 + 0x84) =
                 *(int *)(_DAT_180c8a9d8 + 0x84) +
                 (int)(puVar8[0x3c] - *plVar1 >> 2) * *(int *)(lVar19 + 0x3d4);
            UNLOCK();
            LOCK();
            *(int *)(_DAT_180c8a9d8 + 0x80) =
                 *(int *)(_DAT_180c8a9d8 + 0x80) + (int)(puVar8[0x3c] - *plVar1 >> 2);
            UNLOCK();
            puVar8 = puStack_d0;
          }
        }
        lVar12 = lStack_a8;
        if (lStack_a8 != 0) {
          uVar22 = FUN_1802dccd0(puVar8,*(undefined8 *)param_1[2]);
          uVar23 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
          puStack_c8 = puVar8;
          if ((uVar18 & 0x10) != 0) {
            if (uVar18 != 0x10) {
              puStack_c8 = (undefined8 *)FUN_1800dae20();
              FUN_180250be0(puStack_c8,puVar8);
            }
            lVar13 = _DAT_180c86890;
            lVar15 = *(longlong *)param_1[2];
            uStack_7c = CONCAT22(uStack_7c._2_2_,(ushort)*(byte *)((longlong)puVar8 + 0xc1));
            uVar11 = puVar8[0x41];
            uStack_80 = *(uint *)(lVar15 + 0x1bc) & *(uint *)((longlong)puVar8 + 0x314);
            *(uint *)((longlong)puVar8 + 0x314) = uStack_80;
            iVar3 = *(int *)(lVar13 + 0x13e0);
            lVar9 = *(longlong *)(*(longlong *)(lVar12 + 0x1e0) + 0x1678 + (longlong)iVar3 * 8);
            if ((lVar9 == 0) && (iVar3 - 4U < 2)) {
              lVar9 = *(longlong *)(lVar13 + 0x13e8);
            }
            uStack_88._0_4_ = (undefined4)uVar11;
            uStack_88._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
            in_stack_ffffffffffffff08 = &uStack_68;
            uStack_68 = (undefined4)uStack_88;
            uStack_64 = uStack_88._4_4_;
            uStack_5c = uStack_7c;
            in_stack_ffffffffffffff00 = CONCAT44(uVar23,3);
            uStack_88 = uVar11;
            uStack_60 = uStack_80;
            uVar11 = FUN_1800d6020(uStack_80,lVar15,(longlong)iVar3,lVar19 + 0x18,lVar9,
                                   in_stack_ffffffffffffff00,in_stack_ffffffffffffff08);
            puVar8[0x11] = uVar11;
            FUN_1800df980(extraout_XMM0_Da,puVar8,lVar15);
            lVar15 = *(longlong *)param_1[2];
            LOCK();
            puVar2 = (uint *)(lVar15 + 0x1d90);
            uVar7 = *puVar2;
            *puVar2 = *puVar2 + 1;
            UNLOCK();
            uVar17 = uVar7 >> 0xb;
            uVar22 = FUN_1800e8060(lVar15 + 0x1d90,(ulonglong)uVar17);
            puVar14 = (undefined8 *)
                      (*(longlong *)(lVar15 + 0x1d98 + (ulonglong)uVar17 * 8) +
                      (ulonglong)(uVar7 + uVar17 * -0x800) * 0x18);
            uVar11 = puVar8[0x40];
            *puVar14 = puVar8[0x3f];
            puVar14[1] = uVar11;
            puVar14[2] = puStack_d0;
            puVar8 = puStack_d0;
          }
          puVar14 = puStack_c8;
          if ((uVar18 >> 0xe & 1) != 0) {
            uStack_70 = *(uint *)((longlong)puVar8 + 0x314) & 0xfeffffff;
            *(uint *)((longlong)puVar8 + 0x314) = uStack_70;
            lVar13 = _DAT_180c86890;
            lVar15 = *(longlong *)param_1[2];
            uStack_6c = CONCAT22(uStack_6c._2_2_,(ushort)*(byte *)((longlong)puVar8 + 0xc1));
            uVar11 = puVar8[0x41];
            uStack_70 = *(uint *)(lVar15 + 0x1bc) & uStack_70;
            *(uint *)((longlong)puVar8 + 0x314) = uStack_70;
            iVar3 = *(int *)(lVar13 + 0x13e0);
            lVar9 = *(longlong *)(*(longlong *)(lVar12 + 0x1e0) + 0x1678 + (longlong)iVar3 * 8);
            if ((lVar9 == 0) && (iVar3 - 4U < 2)) {
              lVar9 = *(longlong *)(lVar13 + 0x13e8);
            }
            uStack_78._0_4_ = (undefined4)uVar11;
            uStack_78._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
            in_stack_ffffffffffffff08 = &uStack_58;
            uStack_58 = (undefined4)uStack_78;
            uStack_54 = uStack_78._4_4_;
            uStack_4c = uStack_6c;
            in_stack_ffffffffffffff00 =
                 CONCAT44((int)((ulonglong)in_stack_ffffffffffffff00 >> 0x20),4);
            uStack_78 = uVar11;
            uStack_50 = uStack_70;
            uVar11 = FUN_1800d6020(uStack_70,lVar15,(longlong)iVar3,lVar19 + 0x18,lVar9,
                                   in_stack_ffffffffffffff00,in_stack_ffffffffffffff08);
            puVar8[0x11] = uVar11;
            FUN_1800df980(extraout_XMM0_Da_00,puVar8,lVar15);
            *(byte *)(puVar8 + 0x18) = *(byte *)(_DAT_180c86870 + 0x224) & 1 | 10;
            uVar22 = FUN_18024cf70(*(longlong *)param_1[2] + 0x2358,puVar8 + 0x3f,puVar8 + 0x40,
                                   &puStack_d0);
          }
          if ((uVar18 & 0x20) != 0) {
            uVar7 = *(uint *)((longlong)puVar14 + 0x314);
            in_stack_ffffffffffffff08 =
                 (undefined4 *)((ulonglong)in_stack_ffffffffffffff08 & 0xffffffffffffff00);
            lVar15 = *(longlong *)param_1[2];
            *(uint *)((longlong)puVar14 + 0x314) = *(uint *)(lVar15 + 0x1c4) & uVar7;
            in_stack_ffffffffffffff00 = lVar19 + 0x18;
            cVar5 = FUN_1800d6260(uVar22,lVar15,puVar14,0,lVar12,in_stack_ffffffffffffff00,
                                  in_stack_ffffffffffffff08);
            if (cVar5 == '\0') {
              FUN_1800df980(extraout_XMM0_Da_01,puVar14,lVar15);
              uVar22 = FUN_18024cf70(*(longlong *)param_1[2] + 0x1eb8,puVar14 + 0x3f,puVar14 + 0x40,
                                     &puStack_c8);
            }
            else {
              *(uint *)((longlong)puVar14 + 0x314) = uVar7;
              uVar22 = extraout_XMM0_Da_01;
            }
          }
          if ((uVar18 & 0x40) != 0) {
            *(uint *)((longlong)puVar14 + 0x314) = *(uint *)((longlong)puVar14 + 0x314) & 0xffffffcf
            ;
            uVar7 = *(uint *)((longlong)puVar14 + 0x314);
            in_stack_ffffffffffffff08 =
                 (undefined4 *)((ulonglong)in_stack_ffffffffffffff08 & 0xffffffffffffff00);
            lVar15 = *(longlong *)param_1[2];
            *(uint *)((longlong)puVar14 + 0x314) = *(uint *)(lVar15 + 0x1c4) & uVar7;
            in_stack_ffffffffffffff00 = lVar19 + 0x18;
            cVar5 = FUN_1800d6260(uVar22,lVar15,puVar14,0,lVar12,in_stack_ffffffffffffff00,
                                  in_stack_ffffffffffffff08);
            if (cVar5 == '\0') {
              FUN_1800df980(extraout_XMM0_Da_02,puVar14,lVar15);
              uVar22 = FUN_18024cf70(*(longlong *)param_1[2] + 0x2230,puVar14 + 0x3f,puVar14 + 0x40,
                                     &puStack_c8);
            }
            else {
              *(uint *)((longlong)puVar14 + 0x314) = uVar7;
              uVar22 = extraout_XMM0_Da_02;
            }
          }
          if ((uVar18 >> 8 & 1) != 0) {
            uVar7 = *(uint *)((longlong)puVar14 + 0x314);
            in_stack_ffffffffffffff08 =
                 (undefined4 *)((ulonglong)in_stack_ffffffffffffff08 & 0xffffffffffffff00);
            lVar15 = *(longlong *)param_1[2];
            *(uint *)((longlong)puVar14 + 0x314) = *(uint *)(lVar15 + 0x1c4) & uVar7;
            in_stack_ffffffffffffff00 = lVar19 + 0x18;
            cVar5 = FUN_1800d6260(uVar22,lVar15,puVar14,0,lVar12,in_stack_ffffffffffffff00,
                                  in_stack_ffffffffffffff08);
            if (cVar5 == '\0') {
              FUN_1800df980(extraout_XMM0_Da_03,puVar14,lVar15);
              uVar22 = FUN_18024cf70(*(longlong *)param_1[2] + 0x26d0,puVar14 + 0x3f,puVar14 + 0x40,
                                     &puStack_c8);
            }
            else {
              *(uint *)((longlong)puVar14 + 0x314) = uVar7;
              uVar22 = extraout_XMM0_Da_03;
            }
          }
          if ((uVar18 >> 9 & 1) != 0) {
            uVar7 = *(uint *)((longlong)puVar8 + 0x314);
            in_stack_ffffffffffffff08 =
                 (undefined4 *)((ulonglong)in_stack_ffffffffffffff08 & 0xffffffffffffff00);
            lVar15 = *(longlong *)param_1[2];
            *(uint *)((longlong)puVar8 + 0x314) = *(uint *)(lVar15 + 0x1c4) & uVar7;
            in_stack_ffffffffffffff00 = lVar19 + 0x18;
            cVar5 = FUN_1800d6260(uVar22,lVar15,puVar8,0,lVar12,in_stack_ffffffffffffff00,
                                  in_stack_ffffffffffffff08);
            if (cVar5 == '\0') {
              FUN_1800df980(extraout_XMM0_Da_04,puVar8,lVar15);
              uVar22 = FUN_18024cf70(*(longlong *)param_1[2] + 0x25a8,puVar8 + 0x3f,puVar8 + 0x40,
                                     &puStack_d0);
            }
            else {
              *(uint *)((longlong)puVar8 + 0x314) = uVar7;
              uVar22 = extraout_XMM0_Da_04;
            }
          }
          if (((uVar18 >> 10 & 1) != 0) &&
             (lVar15 = *(longlong *)param_1[2], *(char *)(lVar15 + 0x9a31) != '\0')) {
            uVar7 = *(uint *)((longlong)puVar8 + 0x314);
            in_stack_ffffffffffffff08 =
                 (undefined4 *)((ulonglong)in_stack_ffffffffffffff08 & 0xffffffffffffff00);
            *(uint *)((longlong)puVar8 + 0x314) = *(uint *)(lVar15 + 0x1bc) & uVar7;
            in_stack_ffffffffffffff00 = lVar19 + 0x18;
            cVar5 = FUN_1800d6260(uVar22,lVar15,puVar8,1,lVar12,in_stack_ffffffffffffff00,
                                  in_stack_ffffffffffffff08);
            if (cVar5 == '\0') {
              FUN_1800df980(extraout_XMM0_Da_05,puVar8,lVar15);
              uVar22 = FUN_18024cf70(*(longlong *)param_1[2] + 0x1fe0,puVar8 + 0x3f,puVar8 + 0x40,
                                     &puStack_d0);
            }
            else {
              *(uint *)((longlong)puVar8 + 0x314) = uVar7;
              uVar22 = extraout_XMM0_Da_05;
            }
          }
          if (((uVar18 >> 0xb & 1) != 0) &&
             (lVar15 = *(longlong *)param_1[2], *(char *)(lVar15 + 0x9a31) != '\0')) {
            uVar7 = *(uint *)((longlong)puVar8 + 0x314);
            in_stack_ffffffffffffff08 =
                 (undefined4 *)((ulonglong)in_stack_ffffffffffffff08 & 0xffffffffffffff00);
            *(uint *)((longlong)puVar8 + 0x314) = *(uint *)(lVar15 + 0x1c4) & uVar7;
            in_stack_ffffffffffffff00 = lVar19 + 0x18;
            cVar5 = FUN_1800d6260(uVar22,lVar15,puVar8,0,lVar12,in_stack_ffffffffffffff00,
                                  in_stack_ffffffffffffff08);
            if (cVar5 == '\0') {
              FUN_1800df980(extraout_XMM0_Da_06,puVar8,lVar15);
              uVar22 = FUN_18024cf70(*(longlong *)param_1[2] + 0x2920,puVar8 + 0x3f,puVar8 + 0x40,
                                     &puStack_d0);
            }
            else {
              *(uint *)((longlong)puVar8 + 0x314) = uVar7;
              uVar22 = extraout_XMM0_Da_06;
            }
          }
          if ((uVar18 >> 0xc & 1) != 0) {
            *(undefined1 *)(puVar8 + 0x18) = 1;
            *puStack_a0 = *puStack_a0 | 0x1000;
            *(undefined2 *)(puVar8 + 0x12) = 0x100;
            lVar15 = *(longlong *)param_1[2];
            if (((((*(byte *)(lVar15 + 0x1bd8) & 0x20) == 0) &&
                 ((*(byte *)(lVar15 + 0x1bd9) & 2) == 0)) || (*(int *)(_DAT_180c8a9c8 + 0xa10) == 0)
                ) || (*(char *)(lVar15 + 0x130) == '\0')) {
              bVar21 = false;
            }
            else {
              bVar21 = true;
            }
            in_stack_ffffffffffffff08 =
                 (undefined4 *)((ulonglong)in_stack_ffffffffffffff08 & 0xffffffffffffff00);
            uVar6 = 3;
            if (bVar21) {
              uVar6 = 6;
            }
            *(undefined1 *)((longlong)puVar8 + 0x92) = uVar6;
            uVar7 = *(uint *)((longlong)puVar8 + 0x314);
            lVar15 = *(longlong *)param_1[2];
            *(uint *)((longlong)puVar8 + 0x314) = *(uint *)(lVar15 + 0x1c4) & uVar7;
            in_stack_ffffffffffffff00 = lVar19 + 0x18;
            cVar5 = FUN_1800d6260(6,lVar15,puVar8,0,lVar12,in_stack_ffffffffffffff00,
                                  in_stack_ffffffffffffff08);
            if (cVar5 == '\0') {
              FUN_1800df980(extraout_XMM0_Da_07,puVar8,lVar15);
              uVar22 = FUN_18024cf70(*(longlong *)param_1[2] + 0x26d0,puVar8 + 0x3f,puVar8 + 0x40,
                                     &puStack_d0);
            }
            else {
              *(uint *)((longlong)puVar8 + 0x314) = uVar7;
              uVar22 = extraout_XMM0_Da_07;
            }
          }
          if ((uVar18 >> 0xd & 1) != 0) {
            *(undefined1 *)((longlong)puVar8 + 0xc1) = 10;
            uVar18 = *(uint *)((longlong)puVar8 + 0x314);
            in_stack_ffffffffffffff08 =
                 (undefined4 *)((ulonglong)in_stack_ffffffffffffff08 & 0xffffffffffffff00);
            lVar15 = *(longlong *)param_1[2];
            *(uint *)((longlong)puVar8 + 0x314) = *(uint *)(lVar15 + 0x1bc) & uVar18;
            in_stack_ffffffffffffff00 = lVar19 + 0x18;
            cVar5 = FUN_1800d6260(uVar22,lVar15,puVar8,1,lVar12,in_stack_ffffffffffffff00,
                                  in_stack_ffffffffffffff08);
            if (cVar5 == '\0') {
              FUN_1800df980(extraout_XMM0_Da_08,puVar8,lVar15);
              FUN_18024cf70(*(longlong *)param_1[2] + 0x3138,puVar8 + 0x3f,puVar8 + 0x40,&puStack_d0
                           );
            }
            else {
              *(uint *)((longlong)puVar8 + 0x314) = uVar18;
            }
          }
        }
      }
      lStack_b8 = lStack_b8 + 1;
    } while (lStack_b8 < lStack_90);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




