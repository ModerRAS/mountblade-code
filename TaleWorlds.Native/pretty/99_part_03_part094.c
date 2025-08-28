#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part094.c - 2 个函数

// 函数: void FUN_18025007c(longlong param_1)
void FUN_18025007c(longlong param_1)

{
  int iVar1;
  char *pcVar2;
  longlong *plVar3;
  char cVar4;
  int8_t uVar5;
  uint64_t *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint64_t unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  longlong lVar15;
  longlong *plVar16;
  uint64_t unaff_RDI;
  uint *puVar17;
  uint uVar18;
  longlong in_R11;
  longlong lVar19;
  uint64_t unaff_R12;
  ulonglong uVar20;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t *unaff_R15;
  bool bVar21;
  int32_t uVar22;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  longlong lStack0000000000000050;
  uint64_t *in_stack_00000058;
  uint64_t *in_stack_00000060;
  uint uStack0000000000000068;
  longlong in_stack_00000070;
  uint64_t in_stack_00000078;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R13;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM6_Dd;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R14;
  do {
    lVar14 = unaff_R15[1];
    lVar13 = *(longlong *)(lVar14 + 0x38);
    lVar15 = (longlong)*(int *)(*(longlong *)*unaff_R15 + param_1 * 4);
    lVar19 = lVar15 * 0x420 + *(longlong *)(lVar14 + 0x78);
    pcVar2 = (char *)unaff_R15[3];
    lVar7 = *(longlong *)(lVar19 + 0x370);
    uVar18 = *(uint *)(lVar19 + 0xe4) & **(uint **)unaff_R15[2];
    bVar21 = uVar18 != 0;
    *(longlong *)(unaff_RBP + -0x80) = lVar7;
    if (*pcVar2 != '\0') {
      if (((((uint)(int)*(char *)((longlong)*(int *)(lVar13 + 4 + lVar15 * 0xc) +
                                 *(longlong *)(lVar14 + 0xd8)) >> 5 & 1) == 0) &&
          ((*(uint *)(lVar7 + 0x138) & 0x2000010c) == 0)) &&
         ((*(char *)(lVar7 + 0x13c) == '\x06' ||
          ((*(char *)(lVar7 + 0x13c) == '\0' || ((*(uint *)(lVar7 + 0x138) >> 0x12 & 1) != 0)))))) {
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
    uVar18 = *(uint *)(lVar19 + 0xd8 + (longlong)*(int *)unaff_R15[4] * 4);
    if (bVar21) {
      lStack0000000000000050 = lVar19;
      uStack0000000000000068 = uVar18;
      puVar6 = (uint64_t *)FUN_1800dae20();
      in_stack_00000058 = puVar6;
      FUN_180250be0(puVar6,(uint64_t *)(lVar19 + 0xf0));
      puVar17 = (uint *)(puVar6 + 0x5c);
      *puVar17 = *puVar17 | 0x88000;
      plVar3 = (longlong *)unaff_R15[2];
      *(uint **)(unaff_RBP + -0x78) = puVar17;
      if (*(int *)(*plVar3 + 8) == -1) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(*plVar3 + 0x18);
      }
      if ((uVar12 & 1) != 0) {
        lVar14 = *(longlong *)(unaff_RBP + -0x80);
        puVar9 = puVar6;
        for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        if ((((*(ulonglong *)(lVar14 + 0x140) &
              *(ulonglong *)(*(longlong *)(lVar14 + 0x1e0) + 0x1580)) != 0) &&
            (0.0 < *(float *)(lVar14 + 600))) ||
           ((*(char *)(lVar14 + 0x13c) != '\x06' && (*(char *)(lVar14 + 0x13c) != '\0')))) {
          if ((*(byte *)(lVar19 + 0x170) & 1) == 0) {
            uVar10 = *(uint64_t *)(lVar19 + 0xf0);
          }
          else {
            uVar10 = 0;
          }
          *puVar6 = uVar10;
        }
      }
      if (*(char *)unaff_R15[5] != '\0') {
        in_stack_00000078 = 1;
        lVar14 = *(longlong *)unaff_R15[6] +
                 (longlong)*(int *)(*(longlong *)unaff_R15[7] + in_stack_00000070 * 4) * 0x10;
        puVar6[0x54] = lVar14;
        *(int32_t *)(lVar14 + 8) =
             *(int32_t *)(*(longlong *)(unaff_R15[1] + 0x38) + 4 + lVar15 * 0xc);
        puVar9 = (uint64_t *)puVar6[0x54];
        (**(code **)(**(longlong **)(_DAT_180c86938 + 0x1d78) + 0xc0))
                  (*(longlong **)(_DAT_180c86938 + 0x1d78),&stack0x00000078,unaff_RBP + -0x70);
        puVar17 = *(uint **)(unaff_RBP + -0x78);
        *puVar9 = *(uint64_t *)(unaff_RBP + -0x70);
      }
      if ((*(char *)(*(longlong *)unaff_R15[2] + 0x20) != '\0') ||
         (*(char *)(*(longlong *)unaff_R15[2] + 0x21) != '\0')) {
        *puVar17 = *puVar17 | 0x40;
        plVar3 = puVar6 + 0x3b;
        plVar16 = (longlong *)(lVar15 * 0x20 + *(longlong *)(*(longlong *)unaff_R15[2] + 0x9918));
        if (plVar3 != plVar16) {
          lVar14 = plVar16[1];
          lVar13 = *plVar16;
          lVar7 = *plVar3;
          lVar19 = lVar14 - lVar13;
          lVar15 = puVar6[0x3d];
          uVar20 = lVar19 >> 2;
          *(longlong *)(unaff_RBP + 0x48) = lVar19;
          if ((ulonglong)(lVar15 - lVar7 >> 2) < uVar20) {
            if (uVar20 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = FUN_18062b420(_DAT_180c8ed18,uVar20 * 4,*(int8_t *)(puVar6 + 0x3e));
              lVar19 = *(longlong *)(unaff_RBP + 0x48);
            }
            if (lVar13 != lVar14) {
                    // WARNING: Subroutine does not return
              memmove(lVar7,lVar13,lVar19);
            }
            if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *plVar3 = lVar7;
            lVar7 = uVar20 * 4 + lVar7;
            puVar6[0x3c] = lVar7;
            puVar6[0x3d] = lVar7;
            uVar18 = uStack0000000000000068;
          }
          else {
            lVar15 = puVar6[0x3c];
            uVar8 = lVar15 - lVar7 >> 2;
            if (uVar8 < uVar20) {
              lVar19 = lVar13 + uVar8 * 4;
              if (lVar13 != lVar19) {
                    // WARNING: Subroutine does not return
                memmove(lVar7,lVar13);
              }
              if (lVar19 != lVar14) {
                    // WARNING: Subroutine does not return
                memmove(lVar15,lVar19,lVar14 - lVar19);
              }
              puVar6[0x3c] = lVar15;
            }
            else {
              if (lVar13 != lVar14) {
                    // WARNING: Subroutine does not return
                memmove(lVar7,lVar13,lVar19);
              }
              puVar6[0x3c] = lVar7;
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
               (int)(puVar6[0x3c] - *plVar3 >> 2) * *(int *)(lStack0000000000000050 + 0x3d4);
          UNLOCK();
          LOCK();
          *(int *)(_DAT_180c8a9d8 + 0x80) =
               *(int *)(_DAT_180c8a9d8 + 0x80) + (int)(puVar6[0x3c] - *plVar3 >> 2);
          UNLOCK();
          puVar6 = in_stack_00000058;
        }
      }
      lVar13 = lStack0000000000000050;
      lVar14 = *(longlong *)(unaff_RBP + -0x80);
      if (lVar14 != 0) {
        uVar22 = FUN_1802dccd0(puVar6,*(uint64_t *)unaff_R15[2]);
        puVar9 = puVar6;
        in_stack_00000060 = puVar6;
        if ((uVar18 & 0x10) != 0) {
          if (uVar18 != 0x10) {
            puVar9 = (uint64_t *)FUN_1800dae20();
            in_stack_00000060 = puVar9;
            FUN_180250be0(puVar9,puVar6);
          }
          lVar19 = _DAT_180c86890;
          uVar12 = *(uint *)((longlong)puVar6 + 0x314);
          lVar7 = *(longlong *)unaff_R15[2];
          *(ushort *)(unaff_RBP + -0x54) = (ushort)*(byte *)((longlong)puVar6 + 0xc1);
          *(uint64_t *)(unaff_RBP + -0x60) = puVar6[0x41];
          uVar11 = *(uint *)(lVar7 + 0x1bc) & uVar12;
          *(int8_t *)(unaff_RBP + 0x38) = 0;
          *(uint *)((longlong)puVar6 + 0x314) = uVar11;
          iVar1 = *(int *)(lVar19 + 0x13e0);
          lVar15 = *(longlong *)(lVar14 + 0x1e0);
          *(uint *)(unaff_RBP + -0x58) = uVar11;
          lVar15 = *(longlong *)(lVar15 + 0x1678 + (longlong)iVar1 * 8);
          if ((lVar15 == 0) && (iVar1 - 4U < 2)) {
            lVar15 = *(longlong *)(lVar19 + 0x13e8);
          }
          *(int32_t *)(unaff_RBP + -0x40) = *(int32_t *)(unaff_RBP + -0x60);
          *(int32_t *)(unaff_RBP + -0x3c) = *(int32_t *)(unaff_RBP + -0x5c);
          *(int32_t *)(unaff_RBP + -0x38) = *(int32_t *)(unaff_RBP + -0x58);
          *(int32_t *)(unaff_RBP + -0x34) = *(int32_t *)(unaff_RBP + -0x54);
          uVar10 = FUN_1800d6020(uVar11,lVar7,(longlong)iVar1,lVar13 + 0x18,lVar15);
          cVar4 = *(char *)(unaff_RBP + 0x38);
          puVar6[0x11] = uVar10;
          if (cVar4 == '\0') {
            FUN_1800df980(extraout_XMM0_Da,puVar6,lVar7);
            lVar13 = *(longlong *)unaff_R15[2];
            LOCK();
            puVar17 = (uint *)(lVar13 + 0x1d90);
            uVar12 = *puVar17;
            *puVar17 = *puVar17 + 1;
            UNLOCK();
            uVar11 = uVar12 >> 0xb;
            uVar22 = FUN_1800e8060(lVar13 + 0x1d90,(ulonglong)uVar11);
            puVar9 = (uint64_t *)
                     (*(longlong *)(lVar13 + 0x1d98 + (ulonglong)uVar11 * 8) +
                     (ulonglong)(uVar12 + uVar11 * -0x800) * 0x18);
            uVar10 = puVar6[0x40];
            *puVar9 = puVar6[0x3f];
            puVar9[1] = uVar10;
            puVar9[2] = in_stack_00000058;
            puVar9 = in_stack_00000060;
            puVar6 = in_stack_00000058;
          }
          else {
            *(uint *)((longlong)puVar6 + 0x314) = uVar12;
            uVar22 = extraout_XMM0_Da;
          }
        }
        if ((uVar18 >> 0xe & 1) != 0) {
          uVar11 = *(uint *)((longlong)puVar6 + 0x314) & 0xfeffffff;
          *(uint *)((longlong)puVar6 + 0x314) = uVar11;
          lVar15 = _DAT_180c86890;
          plVar3 = (longlong *)unaff_R15[2];
          *(int8_t *)(unaff_RBP + 0x40) = 0;
          lVar13 = *plVar3;
          *(ushort *)(unaff_RBP + -0x44) = (ushort)*(byte *)((longlong)puVar6 + 0xc1);
          uVar12 = *(uint *)(lVar13 + 0x1bc) & uVar11;
          *(uint64_t *)(unaff_RBP + -0x50) = puVar6[0x41];
          *(uint *)((longlong)puVar6 + 0x314) = uVar12;
          iVar1 = *(int *)(lVar15 + 0x13e0);
          lVar7 = *(longlong *)(lVar14 + 0x1e0);
          *(uint *)(unaff_RBP + -0x48) = uVar12;
          lVar7 = *(longlong *)(lVar7 + 0x1678 + (longlong)iVar1 * 8);
          if ((lVar7 == 0) && (iVar1 - 4U < 2)) {
            lVar7 = *(longlong *)(lVar15 + 0x13e8);
          }
          *(int32_t *)(unaff_RBP + -0x30) = *(int32_t *)(unaff_RBP + -0x50);
          *(int32_t *)(unaff_RBP + -0x2c) = *(int32_t *)(unaff_RBP + -0x4c);
          *(int32_t *)(unaff_RBP + -0x28) = *(int32_t *)(unaff_RBP + -0x48);
          *(int32_t *)(unaff_RBP + -0x24) = *(int32_t *)(unaff_RBP + -0x44);
          uVar10 = FUN_1800d6020(uVar12,lVar13,(longlong)iVar1,lStack0000000000000050 + 0x18,lVar7);
          cVar4 = *(char *)(unaff_RBP + 0x40);
          puVar6[0x11] = uVar10;
          if (cVar4 == '\0') {
            FUN_1800df980(extraout_XMM0_Da_00,puVar6,lVar13);
            *(byte *)(puVar6 + 0x18) = *(byte *)(_DAT_180c86870 + 0x224) & 1 | 10;
            uVar22 = FUN_18024cf70(*(longlong *)unaff_R15[2] + 0x2358,puVar6 + 0x3f,puVar6 + 0x40,
                                   &stack0x00000058);
          }
          else {
            *(uint *)((longlong)puVar6 + 0x314) = uVar11;
            uVar22 = extraout_XMM0_Da_00;
          }
        }
        if ((uVar18 & 0x20) != 0) {
          uVar12 = *(uint *)((longlong)puVar9 + 0x314);
          lVar13 = *(longlong *)unaff_R15[2];
          *(uint *)((longlong)puVar9 + 0x314) = *(uint *)(lVar13 + 0x1c4) & uVar12;
          cVar4 = FUN_1800d6260(uVar22,lVar13,puVar9,0,lVar14);
          if (cVar4 == '\0') {
            FUN_1800df980(extraout_XMM0_Da_01,puVar9,lVar13);
            uVar22 = FUN_18024cf70(*(longlong *)unaff_R15[2] + 0x1eb8,puVar9 + 0x3f,puVar9 + 0x40,
                                   &stack0x00000060);
          }
          else {
            *(uint *)((longlong)puVar9 + 0x314) = uVar12;
            uVar22 = extraout_XMM0_Da_01;
          }
        }
        if ((uVar18 & 0x40) != 0) {
          *(uint *)((longlong)puVar9 + 0x314) = *(uint *)((longlong)puVar9 + 0x314) & 0xffffffcf;
          uVar12 = *(uint *)((longlong)puVar9 + 0x314);
          lVar13 = *(longlong *)unaff_R15[2];
          *(uint *)((longlong)puVar9 + 0x314) = *(uint *)(lVar13 + 0x1c4) & uVar12;
          cVar4 = FUN_1800d6260(uVar22,lVar13,puVar9,0,lVar14);
          if (cVar4 == '\0') {
            FUN_1800df980(extraout_XMM0_Da_02,puVar9,lVar13);
            uVar22 = FUN_18024cf70(*(longlong *)unaff_R15[2] + 0x2230,puVar9 + 0x3f,puVar9 + 0x40,
                                   &stack0x00000060);
          }
          else {
            *(uint *)((longlong)puVar9 + 0x314) = uVar12;
            uVar22 = extraout_XMM0_Da_02;
          }
        }
        if ((uVar18 >> 8 & 1) != 0) {
          uVar12 = *(uint *)((longlong)puVar9 + 0x314);
          lVar13 = *(longlong *)unaff_R15[2];
          *(uint *)((longlong)puVar9 + 0x314) = *(uint *)(lVar13 + 0x1c4) & uVar12;
          cVar4 = FUN_1800d6260(uVar22,lVar13,puVar9,0,lVar14);
          if (cVar4 == '\0') {
            FUN_1800df980(extraout_XMM0_Da_03,puVar9,lVar13);
            uVar22 = FUN_18024cf70(*(longlong *)unaff_R15[2] + 0x26d0,puVar9 + 0x3f,puVar9 + 0x40,
                                   &stack0x00000060);
          }
          else {
            *(uint *)((longlong)puVar9 + 0x314) = uVar12;
            uVar22 = extraout_XMM0_Da_03;
          }
        }
        if ((uVar18 >> 9 & 1) != 0) {
          uVar12 = *(uint *)((longlong)puVar6 + 0x314);
          lVar13 = *(longlong *)unaff_R15[2];
          *(uint *)((longlong)puVar6 + 0x314) = *(uint *)(lVar13 + 0x1c4) & uVar12;
          cVar4 = FUN_1800d6260(uVar22,lVar13,puVar6,0,lVar14);
          if (cVar4 == '\0') {
            FUN_1800df980(extraout_XMM0_Da_04,puVar6,lVar13);
            uVar22 = FUN_18024cf70(*(longlong *)unaff_R15[2] + 0x25a8,puVar6 + 0x3f,puVar6 + 0x40,
                                   &stack0x00000058);
          }
          else {
            *(uint *)((longlong)puVar6 + 0x314) = uVar12;
            uVar22 = extraout_XMM0_Da_04;
          }
        }
        if (((uVar18 >> 10 & 1) != 0) &&
           (lVar13 = *(longlong *)unaff_R15[2], *(char *)(lVar13 + 0x9a31) != '\0')) {
          uVar12 = *(uint *)((longlong)puVar6 + 0x314);
          *(uint *)((longlong)puVar6 + 0x314) = *(uint *)(lVar13 + 0x1bc) & uVar12;
          cVar4 = FUN_1800d6260(uVar22,lVar13,puVar6,1,lVar14);
          if (cVar4 == '\0') {
            FUN_1800df980(extraout_XMM0_Da_05,puVar6,lVar13);
            uVar22 = FUN_18024cf70(*(longlong *)unaff_R15[2] + 0x1fe0,puVar6 + 0x3f,puVar6 + 0x40,
                                   &stack0x00000058);
          }
          else {
            *(uint *)((longlong)puVar6 + 0x314) = uVar12;
            uVar22 = extraout_XMM0_Da_05;
          }
        }
        if (((uVar18 >> 0xb & 1) != 0) &&
           (lVar13 = *(longlong *)unaff_R15[2], *(char *)(lVar13 + 0x9a31) != '\0')) {
          uVar12 = *(uint *)((longlong)puVar6 + 0x314);
          *(uint *)((longlong)puVar6 + 0x314) = *(uint *)(lVar13 + 0x1c4) & uVar12;
          cVar4 = FUN_1800d6260(uVar22,lVar13,puVar6,0,lVar14);
          if (cVar4 == '\0') {
            FUN_1800df980(extraout_XMM0_Da_06,puVar6,lVar13);
            uVar22 = FUN_18024cf70(*(longlong *)unaff_R15[2] + 0x2920,puVar6 + 0x3f,puVar6 + 0x40,
                                   &stack0x00000058);
          }
          else {
            *(uint *)((longlong)puVar6 + 0x314) = uVar12;
            uVar22 = extraout_XMM0_Da_06;
          }
        }
        if ((uVar18 >> 0xc & 1) != 0) {
          puVar17 = *(uint **)(unaff_RBP + -0x78);
          *(int8_t *)(puVar6 + 0x18) = 1;
          *puVar17 = *puVar17 | 0x1000;
          *(int16_t *)(puVar6 + 0x12) = 0x100;
          lVar13 = *(longlong *)unaff_R15[2];
          if (((((*(byte *)(lVar13 + 0x1bd8) & 0x20) == 0) &&
               ((*(byte *)(lVar13 + 0x1bd9) & 2) == 0)) || (*(int *)(_DAT_180c8a9c8 + 0xa10) == 0))
             || (*(char *)(lVar13 + 0x130) == '\0')) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          uVar5 = 3;
          if (bVar21) {
            uVar5 = 6;
          }
          *(int8_t *)((longlong)puVar6 + 0x92) = uVar5;
          uVar12 = *(uint *)((longlong)puVar6 + 0x314);
          lVar13 = *(longlong *)unaff_R15[2];
          *(uint *)((longlong)puVar6 + 0x314) = *(uint *)(lVar13 + 0x1c4) & uVar12;
          cVar4 = FUN_1800d6260(6,lVar13,puVar6,0,lVar14);
          if (cVar4 == '\0') {
            FUN_1800df980(extraout_XMM0_Da_07,puVar6,lVar13);
            uVar22 = FUN_18024cf70(*(longlong *)unaff_R15[2] + 0x26d0,puVar6 + 0x3f,puVar6 + 0x40,
                                   &stack0x00000058);
          }
          else {
            *(uint *)((longlong)puVar6 + 0x314) = uVar12;
            uVar22 = extraout_XMM0_Da_07;
          }
        }
        if ((uVar18 >> 0xd & 1) != 0) {
          *(int8_t *)((longlong)puVar6 + 0xc1) = 10;
          uVar18 = *(uint *)((longlong)puVar6 + 0x314);
          lVar13 = *(longlong *)unaff_R15[2];
          *(uint *)((longlong)puVar6 + 0x314) = *(uint *)(lVar13 + 0x1bc) & uVar18;
          cVar4 = FUN_1800d6260(uVar22,lVar13,puVar6,1,lVar14);
          if (cVar4 == '\0') {
            FUN_1800df980(extraout_XMM0_Da_08,puVar6,lVar13);
            FUN_18024cf70(*(longlong *)unaff_R15[2] + 0x3138,puVar6 + 0x3f,puVar6 + 0x40,
                          &stack0x00000058);
          }
          else {
            *(uint *)((longlong)puVar6 + 0x314) = uVar18;
          }
        }
      }
    }
    param_1 = in_stack_00000070 + 1;
    in_stack_00000070 = param_1;
    if (*(longlong *)(unaff_RBP + -0x68) <= param_1) {
      return;
    }
  } while( true );
}






// 函数: void FUN_180250bc6(void)
void FUN_180250bc6(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180250be0(uint64_t *param_1,uint64_t *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint64_t uVar15;
  
  uVar15 = 0xfffffffffffffffe;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  *(int32_t *)(param_1 + 0x10) = *(int32_t *)(param_2 + 0x10);
  uVar10 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar10;
  uVar10 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = uVar10;
  uVar10 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar10;
  uVar10 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = uVar10;
  uVar10 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = uVar10;
  uVar10 = param_2[0x1c];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = uVar10;
  uVar10 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = uVar10;
  uVar10 = param_2[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = uVar10;
  uVar10 = param_2[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = uVar10;
  uVar10 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = uVar10;
  uVar10 = param_2[0x26];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = uVar10;
  uVar10 = param_2[0x28];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = uVar10;
  uVar10 = param_2[0x2a];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = uVar10;
  uVar10 = param_2[0x2c];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = uVar10;
  uVar10 = param_2[0x2e];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = uVar10;
  uVar10 = param_2[0x30];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = uVar10;
  uVar10 = param_2[0x32];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = uVar10;
  uVar7 = *(int32_t *)((longlong)param_2 + 0x19c);
  uVar8 = *(int32_t *)(param_2 + 0x34);
  uVar9 = *(int32_t *)((longlong)param_2 + 0x1a4);
  *(int32_t *)(param_1 + 0x33) = *(int32_t *)(param_2 + 0x33);
  *(int32_t *)((longlong)param_1 + 0x19c) = uVar7;
  *(int32_t *)(param_1 + 0x34) = uVar8;
  *(int32_t *)((longlong)param_1 + 0x1a4) = uVar9;
  uVar7 = *(int32_t *)((longlong)param_2 + 0x1ac);
  uVar8 = *(int32_t *)(param_2 + 0x36);
  uVar9 = *(int32_t *)((longlong)param_2 + 0x1b4);
  *(int32_t *)(param_1 + 0x35) = *(int32_t *)(param_2 + 0x35);
  *(int32_t *)((longlong)param_1 + 0x1ac) = uVar7;
  *(int32_t *)(param_1 + 0x36) = uVar8;
  *(int32_t *)((longlong)param_1 + 0x1b4) = uVar9;
  plVar2 = (longlong *)param_2[0x37];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = (longlong *)param_1[0x37];
  param_1[0x37] = plVar2;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  param_1[0x38] = param_2[0x38];
  *(int32_t *)(param_1 + 0x39) = *(int32_t *)(param_2 + 0x39);
  *(int32_t *)((longlong)param_1 + 0x1cc) = *(int32_t *)((longlong)param_2 + 0x1cc);
  *(int32_t *)(param_1 + 0x3a) = *(int32_t *)(param_2 + 0x3a);
  *(int8_t *)((longlong)param_1 + 0x1d4) = *(int8_t *)((longlong)param_2 + 0x1d4);
  plVar2 = param_1 + 0x3b;
  if (plVar2 != param_2 + 0x3b) {
    lVar4 = param_2[0x3c];
    lVar5 = param_2[0x3b];
    lVar13 = lVar4 - lVar5;
    uVar14 = lVar13 >> 2;
    lVar11 = *plVar2;
    if ((ulonglong)(param_1[0x3d] - lVar11 >> 2) < uVar14) {
      if (uVar14 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = FUN_18062b420(_DAT_180c8ed18,uVar14 * 4,*(int8_t *)(param_1 + 0x3e));
      }
      if (lVar5 != lVar4) {
                    // WARNING: Subroutine does not return
        memmove(lVar11,lVar5,lVar13);
      }
      if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *plVar2 = lVar11;
      lVar11 = uVar14 * 4 + lVar11;
      param_1[0x3c] = lVar11;
      param_1[0x3d] = lVar11;
    }
    else {
      lVar6 = param_1[0x3c];
      uVar12 = lVar6 - lVar11 >> 2;
      if (uVar12 < uVar14) {
        lVar1 = uVar12 * 4;
        lVar13 = lVar1 + lVar5;
        if (lVar5 != lVar13) {
                    // WARNING: Subroutine does not return
          memmove(lVar11,lVar5,lVar1,lVar6,uVar15);
        }
        if (lVar13 != lVar4) {
                    // WARNING: Subroutine does not return
          memmove(lVar6,lVar13,lVar4 - lVar13,lVar6,uVar15);
        }
        param_1[0x3c] = lVar6;
      }
      else {
        if (lVar5 != lVar4) {
                    // WARNING: Subroutine does not return
          memmove(lVar11,lVar5,lVar13,lVar6,uVar15);
        }
        param_1[0x3c] = lVar11;
      }
    }
  }
  param_1[0x3f] = param_2[0x3f];
  param_1[0x40] = param_2[0x40];
  param_1[0x41] = param_2[0x41];
  uVar10 = param_2[0x43];
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = uVar10;
  uVar10 = param_2[0x45];
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = uVar10;
  uVar10 = param_2[0x47];
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = uVar10;
  uVar10 = param_2[0x49];
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = uVar10;
  uVar10 = param_2[0x4b];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x4b] = uVar10;
  uVar10 = param_2[0x4d];
  param_1[0x4c] = param_2[0x4c];
  param_1[0x4d] = uVar10;
  uVar10 = param_2[0x4f];
  param_1[0x4e] = param_2[0x4e];
  param_1[0x4f] = uVar10;
  param_1[0x50] = param_2[0x50];
  param_1[0x51] = param_2[0x51];
  param_1[0x52] = param_2[0x52];
  param_1[0x53] = param_2[0x53];
  param_1[0x54] = param_2[0x54];
  uVar10 = param_2[0x56];
  param_1[0x55] = param_2[0x55];
  param_1[0x56] = uVar10;
  param_1[0x57] = param_2[0x57];
  param_1[0x58] = param_2[0x58];
  param_1[0x59] = param_2[0x59];
  *(int32_t *)(param_1 + 0x5a) = *(int32_t *)(param_2 + 0x5a);
  *(int32_t *)(param_1 + 0x5a) = *(int32_t *)(param_2 + 0x5a);
  *(int32_t *)((longlong)param_1 + 0x2d4) = *(int32_t *)((longlong)param_2 + 0x2d4);
  *(int32_t *)(param_1 + 0x5b) = *(int32_t *)(param_2 + 0x5b);
  *(int32_t *)((longlong)param_1 + 0x2dc) = *(int32_t *)((longlong)param_2 + 0x2dc);
  *(int32_t *)(param_1 + 0x5c) = *(int32_t *)(param_2 + 0x5c);
  *(int32_t *)((longlong)param_1 + 0x2e4) = *(int32_t *)((longlong)param_2 + 0x2e4);
  *(int32_t *)(param_1 + 0x5d) = *(int32_t *)(param_2 + 0x5d);
  *(int32_t *)((longlong)param_1 + 0x2ec) = *(int32_t *)((longlong)param_2 + 0x2ec);
  *(int32_t *)(param_1 + 0x5e) = *(int32_t *)(param_2 + 0x5e);
  *(int32_t *)((longlong)param_1 + 0x2f4) = *(int32_t *)((longlong)param_2 + 0x2f4);
  *(int32_t *)(param_1 + 0x5f) = *(int32_t *)(param_2 + 0x5f);
  *(int32_t *)((longlong)param_1 + 0x2fc) = *(int32_t *)((longlong)param_2 + 0x2fc);
  *(int32_t *)(param_1 + 0x60) = *(int32_t *)(param_2 + 0x60);
  *(int32_t *)((longlong)param_1 + 0x304) = *(int32_t *)((longlong)param_2 + 0x304);
  *(int32_t *)(param_1 + 0x61) = *(int32_t *)(param_2 + 0x61);
  *(int32_t *)((longlong)param_1 + 0x30c) = *(int32_t *)((longlong)param_2 + 0x30c);
  *(int32_t *)(param_1 + 0x62) = *(int32_t *)(param_2 + 0x62);
  *(int32_t *)((longlong)param_1 + 0x314) = *(int32_t *)((longlong)param_2 + 0x314);
  *(int32_t *)(param_1 + 99) = *(int32_t *)(param_2 + 99);
  *(int32_t *)((longlong)param_1 + 0x31c) = *(int32_t *)((longlong)param_2 + 0x31c);
  *(int8_t *)(param_1 + 100) = *(int8_t *)(param_2 + 100);
  *(int8_t *)((longlong)param_1 + 0x321) = *(int8_t *)((longlong)param_2 + 0x321);
  *(int8_t *)((longlong)param_1 + 0x322) = *(int8_t *)((longlong)param_2 + 0x322);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000180251fe0)
// WARNING: Removing unreachable block (ram,0x000180252001)
// WARNING: Removing unreachable block (ram,0x000180251fe9)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




