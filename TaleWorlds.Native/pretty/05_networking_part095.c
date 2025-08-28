#include "TaleWorlds.Native.Split.h"

// 05_networking_part095.c - 3 个函数

// 函数: void FUN_1808975e0(longlong param_1,longlong param_2)
void FUN_1808975e0(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  float fVar13;
  longlong lVar14;
  float *pfVar15;
  undefined8 *puVar16;
  undefined1 auStack_1e8 [32];
  undefined4 uStack_1c8;
  char acStack_1c4 [4];
  undefined *puStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  float fStack_19c;
  float afStack_198 [2];
  undefined8 *puStack_190;
  longlong lStack_188;
  longlong lStack_180;
  undefined *puStack_178;
  undefined4 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_160;
  undefined *puStack_158;
  undefined4 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined *puStack_108;
  undefined4 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [136];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_1e8;
  lVar2 = *(longlong *)(param_2 + 0x80);
  lVar14 = 0;
  uStack_1c8 = 0;
  lVar8 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar8 = lVar14;
  }
  lStack_180 = param_2;
  iVar6 = func_0x00018088c500(lVar8,&uStack_1c8);
  if (iVar6 == 0) {
    puVar16 = (undefined8 *)(param_2 + 8);
    uStack_1a0 = 0;
    puStack_190 = puVar16;
    lVar8 = (*(code *)**(undefined8 **)(param_2 + 8))(puVar16);
    iVar6 = func_0x00018088c500(*(undefined8 *)(lVar8 + 0xd0),&uStack_1a0);
    if (iVar6 == 0) {
      uStack_170 = 0;
      puStack_178 = &UNK_1809832b8;
      uStack_160 = uStack_1c8;
      uStack_168 = uStack_1a0;
      iVar6 = FUN_180897520(param_1,&puStack_178);
      if (iVar6 == 0) {
        lStack_188 = (longlong)*(int *)(lVar2 + 0x28);
        lVar8 = lVar14;
        if (0 < lStack_188) {
          do {
            lVar9 = *(longlong *)(lVar2 + 0x20);
            lVar3 = *(longlong *)(lVar14 + 0x10 + lVar9);
            lVar4 = *(longlong *)(lVar14 + 8 + lVar9);
            cVar5 = func_0x000180894c50(lVar3,1);
            puVar16 = puStack_190;
            if ((cVar5 == '\0') && (*(float *)(lVar3 + 0x4c) != *(float *)(lVar4 + 0x28))) {
              uStack_f0 = *(undefined4 *)(lVar14 + 4 + lVar9);
              puStack_108 = &UNK_180984038;
              uStack_f8 = uStack_1c8;
              uStack_100 = 0;
              lVar9 = (**(code **)*puStack_190)(puStack_190);
              uStack_e8 = *(undefined8 *)(*(longlong *)(lVar9 + 0x90) + lVar8 * 8);
              uStack_ec = 0;
              if (*(int *)(lVar3 + 0x58) < 1) {
                puVar12 = &DAT_18098bc73;
              }
              else {
                puVar12 = *(undefined **)(lVar3 + 0x50);
              }
              func_0x00018076b450(auStack_e0,puVar12,0x80);
              iVar6 = FUN_180897520(param_1,&puStack_108);
              if (iVar6 != 0) goto FUN_180897b16;
            }
            lVar8 = lVar8 + 1;
            lVar14 = lVar14 + 0x18;
            param_2 = lStack_180;
          } while (lVar8 < lStack_188);
        }
        uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 800);
        uVar10 = (**(code **)*puVar16)(puVar16);
        iVar6 = FUN_1808479d0(uVar10,uVar11,acStack_1c4);
        if (iVar6 == 0) {
          if (acStack_1c4[0] != '\0') {
            uVar11 = func_0x00018085fa80();
            iVar6 = memcmp(lVar2 + 0x38,uVar11,0x30);
            if (iVar6 != 0) {
              uStack_140 = *(undefined8 *)(lVar2 + 0x38);
              uStack_138 = *(undefined8 *)(lVar2 + 0x40);
              uStack_130 = *(undefined4 *)(lVar2 + 0x48);
              uStack_12c = *(undefined4 *)(lVar2 + 0x4c);
              uStack_128 = *(undefined4 *)(lVar2 + 0x50);
              uStack_124 = *(undefined4 *)(lVar2 + 0x54);
              puStack_158 = &UNK_180983840;
              uStack_150 = 0;
              uStack_120 = *(undefined4 *)(lVar2 + 0x58);
              uStack_11c = *(undefined4 *)(lVar2 + 0x5c);
              uStack_118 = *(undefined4 *)(lVar2 + 0x60);
              uStack_114 = *(undefined4 *)(lVar2 + 100);
              uStack_148 = uStack_1c8;
              iVar6 = FUN_180897520(param_1,&puStack_158);
              if (iVar6 != 0) goto FUN_180897b16;
            }
          }
          iVar6 = FUN_1808682e0(lVar2,&fStack_19c,0);
          if (iVar6 == 0) {
            if (fStack_19c != 1.0) {
              fStack_1a8 = fStack_19c;
              puStack_1c0 = &UNK_180983738;
              uStack_1b0 = uStack_1c8;
              uStack_1b8 = 0;
              iVar6 = FUN_180897520(param_1,&puStack_1c0);
              if (iVar6 != 0) goto FUN_180897b16;
            }
            iVar6 = FUN_180868270(lVar2,afStack_198,0);
            if (iVar6 == 0) {
              if (afStack_198[0] != 1.0) {
                fStack_1a8 = afStack_198[0];
                puStack_1c0 = &UNK_1809837c0;
                uStack_1b0 = uStack_1c8;
                uStack_1b8 = 0;
                iVar6 = FUN_180897520(param_1,&puStack_1c0);
                if (iVar6 != 0) goto FUN_180897b16;
              }
              fVar13 = 0.0;
              pfVar15 = (float *)(lVar2 + 0x94);
              do {
                if (*pfVar15 != 0.0) {
                  uStack_1b0 = uStack_1c8;
                  uStack_1b8 = 0;
                  puStack_1c0 = &UNK_1809839d8;
                  fStack_1a8 = fVar13;
                  fStack_1a4 = *pfVar15;
                  iVar6 = FUN_180897520(param_1,&puStack_1c0);
                  if (iVar6 != 0) goto FUN_180897b16;
                }
                fVar13 = (float)((int)fVar13 + 1);
                pfVar15 = pfVar15 + 1;
              } while ((int)fVar13 < 4);
              pfVar15 = (float *)&UNK_1809850f8;
              fVar13 = 0.0;
              do {
                fVar1 = *(float *)(lVar2 + -0x180985054 + (longlong)pfVar15);
                if (fVar1 != *pfVar15) {
                  uStack_1b0 = uStack_1c8;
                  uStack_1b8 = 0;
                  puStack_1c0 = &UNK_180983950;
                  fStack_1a8 = fVar13;
                  fStack_1a4 = fVar1;
                  iVar6 = FUN_180897520(param_1,&puStack_1c0);
                  if (iVar6 != 0) goto FUN_180897b16;
                }
                fVar13 = (float)((int)fVar13 + 1);
                pfVar15 = pfVar15 + 1;
              } while ((int)fVar13 < 6);
              uVar7 = func_0x000180855b70(param_2 + 200);
              if ((float)(uVar7 / 0x30) != 0.0) {
                puStack_1c0 = &UNK_180983be8;
                uStack_1b0 = uStack_1c8;
                uStack_1b8 = 0;
                fStack_1a8 = (float)(uVar7 / 0x30);
                iVar6 = FUN_180897520(param_1,&puStack_1c0);
                if (iVar6 != 0) goto FUN_180897b16;
              }
              if ((*(uint *)(param_2 + 0x2d8) >> 1 & 1) != 0) {
                uStack_1b8 = 0;
                puStack_1c0 = &UNK_180983a60;
                uStack_1b0 = uStack_1c8;
                fStack_1a8 = (float)CONCAT31(fStack_1a8._1_3_,1);
                iVar6 = FUN_180897520(param_1,&puStack_1c0);
                if (iVar6 != 0) goto FUN_180897b16;
              }
              iVar6 = FUN_1808605e0(param_2);
              if (iVar6 != 2) {
                uStack_1b8 = 0;
                puStack_1c0 = &UNK_180983ae8;
                uStack_1b0 = uStack_1c8;
                iVar6 = FUN_180897520(param_1,&puStack_1c0);
                if (iVar6 != 0) goto FUN_180897b16;
              }
              iVar6 = FUN_1808605e0(param_2);
              if (iVar6 == 4) {
                uStack_1b8 = 0;
                puStack_1c0 = &UNK_180983b68;
                uStack_1b0 = uStack_1c8;
                fStack_1a8 = 0.0;
                iVar6 = FUN_180897520(param_1,&puStack_1c0);
                if (iVar6 != 0) goto FUN_180897b16;
              }
              if ((*(uint *)(param_2 + 0x2d8) >> 3 & 1) != 0) {
                uStack_1b8 = 0;
                puStack_1c0 = &UNK_180983cf8;
                uStack_1b0 = uStack_1c8;
                FUN_180897520(param_1,&puStack_1c0);
              }
            }
          }
        }
      }
    }
  }
FUN_180897b16:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_1e8);
}





// 函数: void FUN_180897644(void)
void FUN_180897644(void)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  undefined8 *in_RAX;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  float fVar19;
  ulonglong uVar20;
  float *pfVar21;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  undefined8 *puVar22;
  float unaff_R13D;
  longlong unaff_R14;
  ulonglong uVar23;
  longlong unaff_R15;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Dc;
  undefined4 uStackX_20;
  char acStackX_24 [4];
  undefined *in_stack_00000028;
  float in_stack_00000030;
  undefined4 in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  undefined8 *puStack0000000000000058;
  longlong in_stack_00000060;
  longlong in_stack_00000068;
  undefined *in_stack_00000070;
  float in_stack_00000078;
  undefined4 in_stack_000001a0;
  undefined4 in_stack_000001a8;
  
  puVar22 = (undefined8 *)(unaff_R14 + 8);
  fStack0000000000000048 = unaff_R13D;
  puStack0000000000000058 = puVar22;
  lVar15 = (*(code *)*in_RAX)(puVar22);
  iVar13 = func_0x00018088c500(*(undefined8 *)(lVar15 + 0xd0),&stack0x00000048);
  if (iVar13 == 0) {
    in_stack_00000070 = &UNK_1809832b8;
    *(undefined4 *)(unaff_RBP + -0xf) = uStackX_20;
    *(float *)(unaff_RBP + -0x10) = fStack0000000000000048;
    in_stack_00000078 = unaff_R13D;
    iVar13 = FUN_180897520(extraout_XMM0_Da,&stack0x00000070);
    if (iVar13 == 0) {
      in_stack_00000060 = (longlong)*(int *)(unaff_R15 + 0x28);
      if (0 < in_stack_00000060) {
        uVar23 = (ulonglong)(uint)unaff_R13D;
        uVar20 = (ulonglong)(uint)unaff_R13D;
        do {
          lVar15 = *(longlong *)(unaff_R15 + 0x20);
          lVar2 = *(longlong *)(uVar20 + 0x10 + lVar15);
          lVar3 = *(longlong *)(uVar20 + 8 + lVar15);
          cVar12 = func_0x000180894c50(lVar2,1);
          puVar22 = puStack0000000000000058;
          if ((cVar12 == '\0') && (*(float *)(lVar2 + 0x4c) != *(float *)(lVar3 + 0x28))) {
            uVar24 = *(undefined4 *)(uVar20 + 4 + lVar15);
            unaff_RBP[-4] = &UNK_180984038;
            *(undefined4 *)(unaff_RBP + -2) = uStackX_20;
            puVar4 = (undefined8 *)*puStack0000000000000058;
            *(undefined4 *)(unaff_RBP + -1) = uVar24;
            *(undefined4 *)(unaff_RBP + -3) = 0;
            lVar15 = (*(code *)*puVar4)(puStack0000000000000058);
            *unaff_RBP = *(undefined8 *)(*(longlong *)(lVar15 + 0x90) + uVar23 * 8);
            *(undefined1 *)((longlong)unaff_RBP + -4) = 0;
            if (*(int *)(lVar2 + 0x58) < 1) {
              puVar18 = &DAT_18098bc73;
            }
            else {
              puVar18 = *(undefined **)(lVar2 + 0x50);
            }
            uVar24 = func_0x00018076b450(unaff_RBP + 1,puVar18,0x80);
            iVar13 = FUN_180897520(uVar24,unaff_RBP + -4);
            if (iVar13 != 0) goto FUN_180897b0e;
          }
          unaff_R13D = 0.0;
          uVar23 = uVar23 + 1;
          uVar20 = uVar20 + 0x18;
          unaff_R14 = in_stack_00000068;
        } while ((longlong)uVar23 < in_stack_00000060);
      }
      uVar17 = *(undefined8 *)(*(longlong *)(unaff_RSI + 8) + 800);
      uVar16 = (**(code **)*puVar22)(puVar22);
      iVar13 = FUN_1808479d0(uVar16,uVar17,acStackX_24);
      if (iVar13 == 0) {
        uVar24 = extraout_XMM0_Da_00;
        if (acStackX_24[0] != '\0') {
          uVar17 = func_0x00018085fa80();
          iVar13 = memcmp(unaff_R15 + 0x38,uVar17,0x30);
          uVar24 = extraout_XMM0_Da_01;
          if (iVar13 != 0) {
            uVar17 = *(undefined8 *)(unaff_R15 + 0x38);
            uVar16 = *(undefined8 *)(unaff_R15 + 0x40);
            uVar24 = *(undefined4 *)(unaff_R15 + 0x48);
            uVar5 = *(undefined4 *)(unaff_R15 + 0x4c);
            uVar6 = *(undefined4 *)(unaff_R15 + 0x50);
            uVar7 = *(undefined4 *)(unaff_R15 + 0x54);
            unaff_RBP[-0xe] = &UNK_180983840;
            unaff_RBP[-0xb] = uVar17;
            unaff_RBP[-10] = uVar16;
            *(float *)(unaff_RBP + -0xd) = unaff_R13D;
            uVar8 = *(undefined4 *)(unaff_R15 + 0x58);
            uVar9 = *(undefined4 *)(unaff_R15 + 0x5c);
            uVar10 = *(undefined4 *)(unaff_R15 + 0x60);
            uVar11 = *(undefined4 *)(unaff_R15 + 100);
            *(undefined4 *)(unaff_RBP + -0xc) = uStackX_20;
            *(undefined4 *)(unaff_RBP + -9) = uVar24;
            *(undefined4 *)((longlong)unaff_RBP + -0x44) = uVar5;
            *(undefined4 *)(unaff_RBP + -8) = uVar6;
            *(undefined4 *)((longlong)unaff_RBP + -0x3c) = uVar7;
            *(undefined4 *)(unaff_RBP + -7) = uVar8;
            *(undefined4 *)((longlong)unaff_RBP + -0x34) = uVar9;
            *(undefined4 *)(unaff_RBP + -6) = uVar10;
            *(undefined4 *)((longlong)unaff_RBP + -0x2c) = uVar11;
            iVar13 = FUN_180897520(uVar8,unaff_RBP + -0xe);
            uVar24 = extraout_XMM0_Da_02;
            if (iVar13 != 0) goto FUN_180897b0e;
          }
        }
        iVar13 = FUN_1808682e0(uVar24,(longlong)&stack0x00000048 + 4,0);
        if (iVar13 == 0) {
          in_stack_000001a0 = unaff_XMM6_Da;
          in_stack_000001a8 = unaff_XMM6_Dc;
          if (fStack000000000000004c != 1.0) {
            fStack0000000000000040 = fStack000000000000004c;
            in_stack_00000028 = &UNK_180983738;
            in_stack_00000038 = uStackX_20;
            in_stack_00000030 = unaff_R13D;
            iVar13 = FUN_180897520(fStack000000000000004c,&stack0x00000028);
            fStack000000000000004c = extraout_XMM0_Da_03;
            if (iVar13 != 0) goto FUN_180897b0e;
          }
          iVar13 = FUN_180868270(fStack000000000000004c,&stack0x00000050,0);
          if (iVar13 == 0) {
            if (in_stack_00000050 != 1.0) {
              fStack0000000000000040 = in_stack_00000050;
              in_stack_00000028 = &UNK_1809837c0;
              in_stack_00000038 = uStackX_20;
              in_stack_00000030 = unaff_R13D;
              iVar13 = FUN_180897520(in_stack_00000050,&stack0x00000028);
              if (iVar13 != 0) goto FUN_180897b0e;
            }
            pfVar21 = (float *)(unaff_R15 + 0x94);
            fVar19 = unaff_R13D;
            do {
              fVar1 = *pfVar21;
              if (fVar1 != 0.0) {
                in_stack_00000038 = uStackX_20;
                in_stack_00000028 = &UNK_1809839d8;
                in_stack_00000030 = unaff_R13D;
                fStack0000000000000040 = fVar19;
                fStack0000000000000044 = fVar1;
                iVar13 = FUN_180897520(fVar1,&stack0x00000028);
                if (iVar13 != 0) goto FUN_180897b0e;
              }
              fVar19 = (float)((int)fVar19 + 1);
              pfVar21 = pfVar21 + 1;
            } while ((int)fVar19 < 4);
            pfVar21 = (float *)&UNK_1809850f8;
            fVar19 = unaff_R13D;
            do {
              fVar1 = *(float *)(unaff_R15 + -0x180985054 + (longlong)pfVar21);
              if (fVar1 != *pfVar21) {
                in_stack_00000038 = uStackX_20;
                in_stack_00000028 = &UNK_180983950;
                in_stack_00000030 = unaff_R13D;
                fStack0000000000000040 = fVar19;
                fStack0000000000000044 = fVar1;
                iVar13 = FUN_180897520(fVar1,&stack0x00000028);
                if (iVar13 != 0) goto FUN_180897b0e;
              }
              fVar19 = (float)((int)fVar19 + 1);
              pfVar21 = pfVar21 + 1;
            } while ((int)fVar19 < 6);
            uVar14 = func_0x000180855b70(unaff_R14 + 200);
            uVar24 = extraout_XMM0_Da_04;
            if ((float)(uVar14 / 0x30) != 0.0) {
              in_stack_00000028 = &UNK_180983be8;
              in_stack_00000038 = uStackX_20;
              in_stack_00000030 = unaff_R13D;
              fStack0000000000000040 = (float)(uVar14 / 0x30);
              iVar13 = FUN_180897520(extraout_XMM0_Da_04,&stack0x00000028);
              uVar24 = extraout_XMM0_Da_05;
              if (iVar13 != 0) goto FUN_180897b0e;
            }
            if ((*(uint *)(unaff_R14 + 0x2d8) >> 1 & 1) != 0) {
              in_stack_00000028 = &UNK_180983a60;
              in_stack_00000038 = uStackX_20;
              fStack0000000000000040 = (float)CONCAT31(fStack0000000000000040._1_3_,1);
              in_stack_00000030 = unaff_R13D;
              iVar13 = FUN_180897520(uVar24,&stack0x00000028);
              if (iVar13 != 0) goto FUN_180897b0e;
            }
            iVar13 = FUN_1808605e0(unaff_R14);
            if (iVar13 != 2) {
              in_stack_00000028 = &UNK_180983ae8;
              in_stack_00000038 = uStackX_20;
              in_stack_00000030 = unaff_R13D;
              iVar13 = FUN_180897520(extraout_XMM0_Da_06,&stack0x00000028);
              if (iVar13 != 0) goto FUN_180897b0e;
            }
            iVar13 = FUN_1808605e0(unaff_R14);
            uVar24 = extraout_XMM0_Da_07;
            if (iVar13 == 4) {
              in_stack_00000028 = &UNK_180983b68;
              in_stack_00000038 = uStackX_20;
              in_stack_00000030 = unaff_R13D;
              fStack0000000000000040 = unaff_R13D;
              iVar13 = FUN_180897520(extraout_XMM0_Da_07,&stack0x00000028);
              uVar24 = extraout_XMM0_Da_08;
              if (iVar13 != 0) goto FUN_180897b0e;
            }
            if ((*(uint *)(unaff_R14 + 0x2d8) >> 3 & 1) != 0) {
              in_stack_00000028 = &UNK_180983cf8;
              in_stack_00000038 = uStackX_20;
              in_stack_00000030 = unaff_R13D;
              FUN_180897520(uVar24,&stack0x00000028);
            }
          }
        }
      }
    }
  }
FUN_180897b0e:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[0x12] ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1808976b0(void)
void FUN_1808976b0(void)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  longlong in_RAX;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  float fVar19;
  ulonglong uVar20;
  float *pfVar21;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  undefined8 *unaff_R12;
  float unaff_R13D;
  longlong unaff_R14;
  ulonglong uVar22;
  longlong unaff_R15;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Dc;
  undefined4 uStackX_20;
  char acStackX_24 [4];
  undefined *in_stack_00000028;
  float in_stack_00000030;
  undefined4 in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  undefined8 in_stack_00000048;
  float in_stack_00000050;
  undefined8 *in_stack_00000058;
  longlong lStack0000000000000060;
  longlong in_stack_00000068;
  undefined4 in_stack_000001a0;
  undefined4 in_stack_000001a8;
  
  if (0 < in_RAX) {
    uVar22 = (ulonglong)(uint)unaff_R13D;
    uVar20 = (ulonglong)(uint)unaff_R13D;
    lStack0000000000000060 = in_RAX;
    do {
      lVar15 = *(longlong *)(unaff_R15 + 0x20);
      lVar2 = *(longlong *)(uVar20 + 0x10 + lVar15);
      lVar3 = *(longlong *)(uVar20 + 8 + lVar15);
      cVar12 = func_0x000180894c50(lVar2,1);
      unaff_R12 = in_stack_00000058;
      if ((cVar12 == '\0') && (*(float *)(lVar2 + 0x4c) != *(float *)(lVar3 + 0x28))) {
        uVar23 = *(undefined4 *)(uVar20 + 4 + lVar15);
        unaff_RBP[-4] = &UNK_180984038;
        *(undefined4 *)(unaff_RBP + -2) = uStackX_20;
        puVar4 = (undefined8 *)*in_stack_00000058;
        *(undefined4 *)(unaff_RBP + -1) = uVar23;
        *(undefined4 *)(unaff_RBP + -3) = 0;
        lVar15 = (*(code *)*puVar4)(in_stack_00000058);
        *unaff_RBP = *(undefined8 *)(*(longlong *)(lVar15 + 0x90) + uVar22 * 8);
        *(undefined1 *)((longlong)unaff_RBP + -4) = 0;
        if (*(int *)(lVar2 + 0x58) < 1) {
          puVar18 = &DAT_18098bc73;
        }
        else {
          puVar18 = *(undefined **)(lVar2 + 0x50);
        }
        uVar23 = func_0x00018076b450(unaff_RBP + 1,puVar18,0x80);
        iVar13 = FUN_180897520(uVar23,unaff_RBP + -4);
        if (iVar13 != 0) goto FUN_180897afe;
      }
      unaff_R13D = 0.0;
      uVar22 = uVar22 + 1;
      uVar20 = uVar20 + 0x18;
      unaff_R14 = in_stack_00000068;
    } while ((longlong)uVar22 < lStack0000000000000060);
  }
  uVar17 = *(undefined8 *)(*(longlong *)(unaff_RSI + 8) + 800);
  uVar16 = (**(code **)*unaff_R12)(unaff_R12);
  iVar13 = FUN_1808479d0(uVar16,uVar17,acStackX_24);
  if (iVar13 == 0) {
    uVar23 = extraout_XMM0_Da;
    if (acStackX_24[0] != '\0') {
      uVar17 = func_0x00018085fa80();
      iVar13 = memcmp(unaff_R15 + 0x38,uVar17,0x30);
      uVar23 = extraout_XMM0_Da_00;
      if (iVar13 != 0) {
        uVar17 = *(undefined8 *)(unaff_R15 + 0x38);
        uVar16 = *(undefined8 *)(unaff_R15 + 0x40);
        uVar23 = *(undefined4 *)(unaff_R15 + 0x48);
        uVar5 = *(undefined4 *)(unaff_R15 + 0x4c);
        uVar6 = *(undefined4 *)(unaff_R15 + 0x50);
        uVar7 = *(undefined4 *)(unaff_R15 + 0x54);
        unaff_RBP[-0xe] = &UNK_180983840;
        unaff_RBP[-0xb] = uVar17;
        unaff_RBP[-10] = uVar16;
        *(float *)(unaff_RBP + -0xd) = unaff_R13D;
        uVar8 = *(undefined4 *)(unaff_R15 + 0x58);
        uVar9 = *(undefined4 *)(unaff_R15 + 0x5c);
        uVar10 = *(undefined4 *)(unaff_R15 + 0x60);
        uVar11 = *(undefined4 *)(unaff_R15 + 100);
        *(undefined4 *)(unaff_RBP + -0xc) = uStackX_20;
        *(undefined4 *)(unaff_RBP + -9) = uVar23;
        *(undefined4 *)((longlong)unaff_RBP + -0x44) = uVar5;
        *(undefined4 *)(unaff_RBP + -8) = uVar6;
        *(undefined4 *)((longlong)unaff_RBP + -0x3c) = uVar7;
        *(undefined4 *)(unaff_RBP + -7) = uVar8;
        *(undefined4 *)((longlong)unaff_RBP + -0x34) = uVar9;
        *(undefined4 *)(unaff_RBP + -6) = uVar10;
        *(undefined4 *)((longlong)unaff_RBP + -0x2c) = uVar11;
        iVar13 = FUN_180897520(uVar8,unaff_RBP + -0xe);
        uVar23 = extraout_XMM0_Da_01;
        if (iVar13 != 0) goto FUN_180897afe;
      }
    }
    iVar13 = FUN_1808682e0(uVar23,(longlong)&stack0x00000048 + 4,0);
    if (iVar13 == 0) {
      in_stack_000001a0 = unaff_XMM6_Da;
      in_stack_000001a8 = unaff_XMM6_Dc;
      if (in_stack_00000048._4_4_ != 1.0) {
        fStack0000000000000040 = in_stack_00000048._4_4_;
        in_stack_00000028 = &UNK_180983738;
        in_stack_00000038 = uStackX_20;
        in_stack_00000030 = unaff_R13D;
        iVar13 = FUN_180897520(in_stack_00000048._4_4_,&stack0x00000028);
        in_stack_00000048._4_4_ = extraout_XMM0_Da_02;
        if (iVar13 != 0) goto FUN_180897afe;
      }
      iVar13 = FUN_180868270(in_stack_00000048._4_4_,&stack0x00000050,0);
      if (iVar13 == 0) {
        if (in_stack_00000050 != 1.0) {
          fStack0000000000000040 = in_stack_00000050;
          in_stack_00000028 = &UNK_1809837c0;
          in_stack_00000038 = uStackX_20;
          in_stack_00000030 = unaff_R13D;
          iVar13 = FUN_180897520(in_stack_00000050,&stack0x00000028);
          if (iVar13 != 0) goto FUN_180897afe;
        }
        pfVar21 = (float *)(unaff_R15 + 0x94);
        fVar19 = unaff_R13D;
        do {
          fVar1 = *pfVar21;
          if (fVar1 != 0.0) {
            in_stack_00000038 = uStackX_20;
            in_stack_00000028 = &UNK_1809839d8;
            in_stack_00000030 = unaff_R13D;
            fStack0000000000000040 = fVar19;
            fStack0000000000000044 = fVar1;
            iVar13 = FUN_180897520(fVar1,&stack0x00000028);
            if (iVar13 != 0) goto FUN_180897afe;
          }
          fVar19 = (float)((int)fVar19 + 1);
          pfVar21 = pfVar21 + 1;
        } while ((int)fVar19 < 4);
        pfVar21 = (float *)&UNK_1809850f8;
        fVar19 = unaff_R13D;
        do {
          fVar1 = *(float *)(unaff_R15 + -0x180985054 + (longlong)pfVar21);
          if (fVar1 != *pfVar21) {
            in_stack_00000038 = uStackX_20;
            in_stack_00000028 = &UNK_180983950;
            in_stack_00000030 = unaff_R13D;
            fStack0000000000000040 = fVar19;
            fStack0000000000000044 = fVar1;
            iVar13 = FUN_180897520(fVar1,&stack0x00000028);
            if (iVar13 != 0) goto FUN_180897afe;
          }
          fVar19 = (float)((int)fVar19 + 1);
          pfVar21 = pfVar21 + 1;
        } while ((int)fVar19 < 6);
        uVar14 = func_0x000180855b70(unaff_R14 + 200);
        uVar23 = extraout_XMM0_Da_03;
        if ((float)(uVar14 / 0x30) != 0.0) {
          in_stack_00000028 = &UNK_180983be8;
          in_stack_00000038 = uStackX_20;
          in_stack_00000030 = unaff_R13D;
          fStack0000000000000040 = (float)(uVar14 / 0x30);
          iVar13 = FUN_180897520(extraout_XMM0_Da_03,&stack0x00000028);
          uVar23 = extraout_XMM0_Da_04;
          if (iVar13 != 0) goto FUN_180897afe;
        }
        if ((*(uint *)(unaff_R14 + 0x2d8) >> 1 & 1) != 0) {
          in_stack_00000028 = &UNK_180983a60;
          in_stack_00000038 = uStackX_20;
          fStack0000000000000040 = (float)CONCAT31(fStack0000000000000040._1_3_,1);
          in_stack_00000030 = unaff_R13D;
          iVar13 = FUN_180897520(uVar23,&stack0x00000028);
          if (iVar13 != 0) goto FUN_180897afe;
        }
        iVar13 = FUN_1808605e0(unaff_R14);
        if (iVar13 != 2) {
          in_stack_00000028 = &UNK_180983ae8;
          in_stack_00000038 = uStackX_20;
          in_stack_00000030 = unaff_R13D;
          iVar13 = FUN_180897520(extraout_XMM0_Da_05,&stack0x00000028);
          if (iVar13 != 0) goto FUN_180897afe;
        }
        iVar13 = FUN_1808605e0(unaff_R14);
        uVar23 = extraout_XMM0_Da_06;
        if (iVar13 == 4) {
          in_stack_00000028 = &UNK_180983b68;
          in_stack_00000038 = uStackX_20;
          in_stack_00000030 = unaff_R13D;
          fStack0000000000000040 = unaff_R13D;
          iVar13 = FUN_180897520(extraout_XMM0_Da_06,&stack0x00000028);
          uVar23 = extraout_XMM0_Da_07;
          if (iVar13 != 0) goto FUN_180897afe;
        }
        if ((*(uint *)(unaff_R14 + 0x2d8) >> 3 & 1) != 0) {
          in_stack_00000028 = &UNK_180983cf8;
          in_stack_00000038 = uStackX_20;
          in_stack_00000030 = unaff_R13D;
          FUN_180897520(uVar23,&stack0x00000028);
        }
      }
    }
  }
FUN_180897afe:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[0x12] ^ (ulonglong)&stack0x00000000);
}





