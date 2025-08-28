#include "TaleWorlds.Native.Split.h"

// 99_part_08_part014.c - 2 个函数

// 函数: void FUN_1804eced9(void)
void FUN_1804eced9(void)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  int iVar11;
  longlong in_RAX;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined8 unaff_RBX;
  undefined8 *puVar18;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  uint uVar19;
  longlong lVar20;
  longlong in_R11;
  undefined8 unaff_R13;
  char in_SF;
  char in_OF;
  undefined4 uVar21;
  undefined8 in_stack_00000040;
  longlong in_stack_00000048;
  uint uStack0000000000000050;
  undefined4 uStack0000000000000054;
  longlong in_stack_00000058;
  
  *(undefined8 *)(in_R11 + -0x18) = unaff_RSI;
  if (in_OF == in_SF) {
    lVar12 = in_RAX * 0xa60;
    lVar15 = *(longlong *)(lVar12 + 0x3778 + unaff_RDI);
    if (((lVar15 != 0) && (*(char *)(lVar15 + 0x8be) != '\0')) &&
       (*(longlong *)(lVar12 + 0x3630 + unaff_RDI) != 0)) {
      *(undefined8 *)(in_R11 + 0x20) = unaff_RBX;
      lVar7 = _DAT_180c92590;
      *(undefined8 *)(in_R11 + -0x28) = unaff_R13;
      lVar12 = unaff_RDI + 0x30a0 + lVar12;
      lVar15 = *(longlong *)(lVar7 + 0x4c4d0);
      *(undefined4 *)(lVar12 + 0x200) = *(undefined4 *)(lVar7 + 0x4c4dc);
      *(undefined4 *)(lVar12 + 0x204) = *(undefined4 *)(lVar7 + 0x4c4e0);
      if (*(int *)(lVar12 + 0x5f8) == 0) {
        iVar11 = func_0x0001804e1880();
        if (iVar11 < *(int *)(unaff_RDI + 0x52ed94)) {
          do {
            puVar2 = (uint *)((longlong)iVar11 * 0x240 + 0x74eb98 + unaff_RDI);
            *puVar2 = *puVar2 & 0xfffffffe;
            iVar11 = (int)*(short *)(unaff_RDI + 0x52dda0 + (longlong)iVar11 * 2);
          } while (iVar11 < *(int *)(unaff_RDI + 0x52ed94));
        }
        if (*(int *)(unaff_RDI + 0x8fd224) != 0) {
          lVar1 = unaff_RDI + 0x87d220;
          uVar19 = *(int *)(unaff_RDI + 0x8fd224) + *(uint *)(unaff_RDI + 0x8fd220) & 0x800003ff;
          if ((int)uVar19 < 0) {
            uVar19 = (uVar19 - 1 | 0xfffffc00) + 1;
          }
          uVar17 = uVar19 + 0x3ff & 0x800003ff;
          if ((int)uVar17 < 0) {
            uVar17 = (uVar17 - 1 | 0xfffffc00) + 1;
          }
          uVar14 = *(int *)(unaff_RDI + 0x98d22c) + *(int *)(unaff_RDI + 0x98d228) & 0x800003ff;
          if ((int)uVar14 < 0) {
            uVar14 = (uVar14 - 1 | 0xfffffc00) + 1;
          }
          uVar14 = uVar14 + 0x3ff & 0x800003ff;
          uStack0000000000000050 = uVar17;
          if ((int)uVar14 < 0) {
            uVar14 = (uVar14 - 1 | 0xfffffc00) + 1;
          }
          while ((uStack0000000000000050 != *(uint *)(unaff_RDI + 0x8fd220) &&
                 (lVar15 < *(longlong *)
                            ((longlong)(int)uStack0000000000000050 * 0x200 + 0x10 + lVar1)))) {
            uStack0000000000000050 = uStack0000000000000050 + 0x3ff & 0x800003ff;
            if ((int)uStack0000000000000050 < 0) {
              uStack0000000000000050 = (uStack0000000000000050 - 1 | 0xfffffc00) + 1;
            }
            uVar14 = uVar14 + 0x3ff & 0x800003ff;
            if ((int)uVar14 < 0) {
              uVar14 = (uVar14 - 1 | 0xfffffc00) + 1;
            }
          }
          if ((*(int *)(lVar12 + 0x10) ==
               *(int *)((longlong)(int)uStack0000000000000050 * 0x200 + 0x1c + lVar1)) &&
             (*(longlong *)((longlong)(int)uStack0000000000000050 * 0x200 + 0x10 + lVar1) == lVar15)
             ) {
            while ((uStack0000000000000050 != uVar19 &&
                   (*(int *)((longlong)(int)uStack0000000000000050 * 0x200 + 0x28 + lVar1) != 0))) {
              uStack0000000000000050 = uStack0000000000000050 + 1 & 0x800003ff;
              if ((int)uStack0000000000000050 < 0) {
                uStack0000000000000050 = (uStack0000000000000050 - 1 | 0xfffffc00) + 1;
              }
              uVar14 = uVar14 + 1 & 0x800003ff;
              if ((int)uVar14 < 0) {
                uVar14 = (uVar14 - 1 | 0xfffffc00) + 1;
              }
            }
            if (uStack0000000000000050 != uVar19) {
              lVar20 = 4;
              lVar15 = 4;
              puVar8 = (undefined8 *)&stack0x00000060;
              puVar9 = (undefined8 *)((longlong)(int)uVar14 * 0x240 + unaff_RDI + 0x8fd228);
              do {
                puVar13 = puVar9;
                puVar18 = puVar8;
                uVar3 = puVar13[1];
                uVar4 = puVar13[2];
                uVar5 = puVar13[3];
                *puVar18 = *puVar13;
                puVar18[1] = uVar3;
                uVar3 = puVar13[4];
                uVar6 = puVar13[5];
                puVar18[2] = uVar4;
                puVar18[3] = uVar5;
                uVar4 = puVar13[6];
                uVar5 = puVar13[7];
                puVar18[4] = uVar3;
                puVar18[5] = uVar6;
                uVar3 = puVar13[8];
                uVar6 = puVar13[9];
                puVar18[6] = uVar4;
                puVar18[7] = uVar5;
                uVar4 = puVar13[10];
                uVar5 = puVar13[0xb];
                puVar18[8] = uVar3;
                puVar18[9] = uVar6;
                uVar3 = puVar13[0xc];
                uVar6 = puVar13[0xd];
                puVar18[10] = uVar4;
                puVar18[0xb] = uVar5;
                uVar4 = puVar13[0xe];
                uVar5 = puVar13[0xf];
                puVar18[0xc] = uVar3;
                puVar18[0xd] = uVar6;
                puVar18[0xe] = uVar4;
                puVar18[0xf] = uVar5;
                lVar15 = lVar15 + -1;
                puVar8 = puVar18 + 0x10;
                puVar9 = puVar13 + 0x10;
              } while (lVar15 != 0);
              uVar3 = puVar13[0x11];
              uVar4 = puVar13[0x12];
              uVar5 = puVar13[0x13];
              puVar18[0x10] = puVar13[0x10];
              puVar18[0x11] = uVar3;
              uVar3 = puVar13[0x14];
              uVar6 = puVar13[0x15];
              puVar18[0x12] = uVar4;
              puVar18[0x13] = uVar5;
              uVar4 = puVar13[0x16];
              uVar5 = puVar13[0x17];
              puVar18[0x14] = uVar3;
              puVar18[0x15] = uVar6;
              puVar18[0x16] = uVar4;
              puVar18[0x17] = uVar5;
              puVar18 = (undefined8 *)(unaff_RDI + 0x74eb90 + in_RAX * 0x240);
              puVar8 = puVar18;
              puVar9 = (undefined8 *)&stack0x00000060;
              do {
                puVar16 = puVar9;
                puVar13 = puVar8;
                uVar3 = puVar16[1];
                uVar4 = puVar16[2];
                uVar5 = puVar16[3];
                *puVar13 = *puVar16;
                puVar13[1] = uVar3;
                uVar3 = puVar16[4];
                uVar6 = puVar16[5];
                puVar13[2] = uVar4;
                puVar13[3] = uVar5;
                uVar4 = puVar16[6];
                uVar5 = puVar16[7];
                puVar13[4] = uVar3;
                puVar13[5] = uVar6;
                uVar3 = puVar16[8];
                uVar6 = puVar16[9];
                puVar13[6] = uVar4;
                puVar13[7] = uVar5;
                uVar4 = puVar16[10];
                uVar5 = puVar16[0xb];
                puVar13[8] = uVar3;
                puVar13[9] = uVar6;
                uVar3 = puVar16[0xc];
                uVar6 = puVar16[0xd];
                puVar13[10] = uVar4;
                puVar13[0xb] = uVar5;
                uVar4 = puVar16[0xe];
                uVar5 = puVar16[0xf];
                puVar13[0xc] = uVar3;
                puVar13[0xd] = uVar6;
                puVar13[0xe] = uVar4;
                puVar13[0xf] = uVar5;
                lVar20 = lVar20 + -1;
                puVar8 = puVar13 + 0x10;
                puVar9 = puVar16 + 0x10;
              } while (lVar20 != 0);
              uVar3 = puVar16[0x11];
              uVar4 = puVar16[0x12];
              uVar5 = puVar16[0x13];
              puVar13[0x10] = puVar16[0x10];
              puVar13[0x11] = uVar3;
              uVar3 = puVar16[0x14];
              uVar6 = puVar16[0x15];
              puVar13[0x12] = uVar4;
              puVar13[0x13] = uVar5;
              uVar4 = puVar16[0x16];
              uVar5 = puVar16[0x17];
              puVar13[0x14] = uVar3;
              puVar13[0x15] = uVar6;
              puVar13[0x16] = uVar4;
              puVar13[0x17] = uVar5;
              uVar3 = *(undefined8 *)(lVar7 + 0x4c4b0);
              uVar19 = *(uint *)((longlong)(int)uStack0000000000000050 * 0x200 + 0x24 + lVar1);
              *(undefined8 *)((longlong)puVar18 + 0xc) = *(undefined8 *)(lVar7 + 0x4c4a8);
              *(undefined8 *)((longlong)puVar18 + 0x14) = uVar3;
              *(undefined8 *)((longlong)puVar18 + 0x1c) = *(undefined8 *)(lVar7 + 0x4c4c8);
              if ((uVar19 >> 0xb & 1) == 0) {
                *(undefined4 *)((longlong)puVar18 + 0x34) = *(undefined4 *)(lVar7 + 0x4c4d8);
              }
              in_stack_00000040 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
              uVar19 = uStack0000000000000050;
              in_stack_00000048 = lVar1;
              in_stack_00000058 = lVar1;
              while( true ) {
                uVar17 = *(int *)(unaff_RDI + 0x8fd220) + *(int *)(unaff_RDI + 0x8fd224) &
                         0x800003ff;
                if ((int)uVar17 < 0) {
                  uVar17 = (uVar17 - 1 | 0xfffffc00) + 1;
                }
                if (uVar19 == uVar17) break;
                lVar15 = (longlong)(int)uVar19 * 0x200 + lVar1;
                uVar21 = func_0x000180598ed0(puVar18,*(undefined4 *)(lVar15 + 0x18));
                if ((*(uint *)(lVar15 + 0x24) & 0x800) != 0) {
                  FUN_1805984e0(uVar21,*(undefined4 *)(lVar15 + 0x18),lVar15);
                }
                FUN_180598f80(puVar18);
                FUN_180590fc0(puVar18);
                FUN_180593ce0(puVar18,*(undefined4 *)(lVar15 + 0x18));
                uVar21 = *(undefined4 *)(lVar15 + 0x18);
                if ((_DAT_180c92514 == 0) || (_DAT_180c92514 == 5)) {
                  uVar10 = 1;
                }
                else {
                  uVar10 = 0;
                }
                *(undefined1 *)(unaff_RDI + 0x87d208) = uVar10;
                if ((_DAT_180c92514 == 1) || (_DAT_180c92514 == 4)) {
                  uVar10 = 1;
                }
                else {
                  uVar10 = 0;
                }
                *(undefined1 *)(unaff_RDI + 0x87d209) = uVar10;
                FUN_1805a7cb0(unaff_RDI + 0x87bd80,uVar21);
                FUN_1805a9bc0(unaff_RDI + 0x87bd80);
                FUN_180592060(puVar18,*(undefined4 *)(lVar15 + 0x18));
                uVar19 = uVar19 + 1 & 0x800003ff;
                if ((int)uVar19 < 0) {
                  uVar19 = (uVar19 - 1 | 0xfffffc00) + 1;
                }
              }
              in_stack_00000040 = *(undefined8 *)((longlong)puVar18 + 0xc);
              in_stack_00000048 = *(undefined8 *)((longlong)puVar18 + 0x14);
              FUN_18051f1e0(lVar12,&stack0x00000040);
              uVar19 = uVar19 + 0x3ff & 0x800003ff;
              if ((int)uVar19 < 0) {
                uVar19 = (uVar19 - 1 | 0xfffffc00) + 1;
              }
              if (*(int *)((longlong)(int)uVar19 * 0x200 + 0x28 + lVar1) == 0) {
                *(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0x1c) =
                     *(undefined8 *)((longlong)puVar18 + 0x1c);
              }
              if ((*(uint *)((longlong)(int)uVar19 * 0x200 + 0x24 + lVar1) & 0x800) == 0) {
                func_0x000180598e50(*(undefined8 *)(lVar12 + 0x20),
                                    *(undefined4 *)((longlong)puVar18 + 0x34));
              }
              if (-1 < *(int *)(lVar12 + 0x560)) {
                func_0x00018051a670((longlong)*(int *)(lVar12 + 0x560) * 0xa60 + 0x30a0 + unaff_RDI)
                ;
              }
            }
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ecf1a(void)
void FUN_1804ecf1a(void)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  int iVar11;
  longlong in_RAX;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 unaff_RBX;
  undefined8 *puVar17;
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint uVar18;
  longlong lVar19;
  longlong in_R11;
  undefined8 unaff_R13;
  longlong lVar20;
  undefined4 uVar21;
  undefined8 in_stack_00000040;
  longlong in_stack_00000048;
  uint uStack0000000000000050;
  undefined4 uStack0000000000000054;
  longlong in_stack_00000058;
  
  *(undefined8 *)(in_R11 + 0x20) = unaff_RBX;
  lVar7 = _DAT_180c92590;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R13;
  lVar20 = unaff_RDI + 0x30a0 + in_RAX;
  lVar14 = *(longlong *)(lVar7 + 0x4c4d0);
  *(undefined4 *)(lVar20 + 0x200) = *(undefined4 *)(lVar7 + 0x4c4dc);
  *(undefined4 *)(lVar20 + 0x204) = *(undefined4 *)(lVar7 + 0x4c4e0);
  if (*(int *)(lVar20 + 0x5f8) == 0) {
    iVar11 = func_0x0001804e1880();
    if (iVar11 < *(int *)(unaff_RDI + 0x52ed94)) {
      do {
        puVar2 = (uint *)((longlong)iVar11 * 0x240 + 0x74eb98 + unaff_RDI);
        *puVar2 = *puVar2 & 0xfffffffe;
        iVar11 = (int)*(short *)(unaff_RDI + 0x52dda0 + (longlong)iVar11 * 2);
      } while (iVar11 < *(int *)(unaff_RDI + 0x52ed94));
    }
    if (*(int *)(unaff_RDI + 0x8fd224) != 0) {
      lVar1 = unaff_RDI + 0x87d220;
      uVar18 = *(int *)(unaff_RDI + 0x8fd224) + *(uint *)(unaff_RDI + 0x8fd220) & 0x800003ff;
      if ((int)uVar18 < 0) {
        uVar18 = (uVar18 - 1 | 0xfffffc00) + 1;
      }
      uVar16 = uVar18 + 0x3ff & 0x800003ff;
      if ((int)uVar16 < 0) {
        uVar16 = (uVar16 - 1 | 0xfffffc00) + 1;
      }
      uVar13 = *(int *)(unaff_RDI + 0x98d22c) + *(int *)(unaff_RDI + 0x98d228) & 0x800003ff;
      if ((int)uVar13 < 0) {
        uVar13 = (uVar13 - 1 | 0xfffffc00) + 1;
      }
      uVar13 = uVar13 + 0x3ff & 0x800003ff;
      uStack0000000000000050 = uVar16;
      if ((int)uVar13 < 0) {
        uVar13 = (uVar13 - 1 | 0xfffffc00) + 1;
      }
      while ((uStack0000000000000050 != *(uint *)(unaff_RDI + 0x8fd220) &&
             (lVar14 < *(longlong *)((longlong)(int)uStack0000000000000050 * 0x200 + 0x10 + lVar1)))
            ) {
        uStack0000000000000050 = uStack0000000000000050 + 0x3ff & 0x800003ff;
        if ((int)uStack0000000000000050 < 0) {
          uStack0000000000000050 = (uStack0000000000000050 - 1 | 0xfffffc00) + 1;
        }
        uVar13 = uVar13 + 0x3ff & 0x800003ff;
        if ((int)uVar13 < 0) {
          uVar13 = (uVar13 - 1 | 0xfffffc00) + 1;
        }
      }
      if ((*(int *)(lVar20 + 0x10) ==
           *(int *)((longlong)(int)uStack0000000000000050 * 0x200 + 0x1c + lVar1)) &&
         (*(longlong *)((longlong)(int)uStack0000000000000050 * 0x200 + 0x10 + lVar1) == lVar14)) {
        while ((uStack0000000000000050 != uVar18 &&
               (*(int *)((longlong)(int)uStack0000000000000050 * 0x200 + 0x28 + lVar1) != 0))) {
          uStack0000000000000050 = uStack0000000000000050 + 1 & 0x800003ff;
          if ((int)uStack0000000000000050 < 0) {
            uStack0000000000000050 = (uStack0000000000000050 - 1 | 0xfffffc00) + 1;
          }
          uVar13 = uVar13 + 1 & 0x800003ff;
          if ((int)uVar13 < 0) {
            uVar13 = (uVar13 - 1 | 0xfffffc00) + 1;
          }
        }
        if (uStack0000000000000050 != uVar18) {
          lVar19 = 4;
          lVar14 = 4;
          puVar8 = (undefined8 *)&stack0x00000060;
          puVar9 = (undefined8 *)((longlong)(int)uVar13 * 0x240 + unaff_RDI + 0x8fd228);
          do {
            puVar12 = puVar9;
            puVar17 = puVar8;
            uVar3 = puVar12[1];
            uVar4 = puVar12[2];
            uVar5 = puVar12[3];
            *puVar17 = *puVar12;
            puVar17[1] = uVar3;
            uVar3 = puVar12[4];
            uVar6 = puVar12[5];
            puVar17[2] = uVar4;
            puVar17[3] = uVar5;
            uVar4 = puVar12[6];
            uVar5 = puVar12[7];
            puVar17[4] = uVar3;
            puVar17[5] = uVar6;
            uVar3 = puVar12[8];
            uVar6 = puVar12[9];
            puVar17[6] = uVar4;
            puVar17[7] = uVar5;
            uVar4 = puVar12[10];
            uVar5 = puVar12[0xb];
            puVar17[8] = uVar3;
            puVar17[9] = uVar6;
            uVar3 = puVar12[0xc];
            uVar6 = puVar12[0xd];
            puVar17[10] = uVar4;
            puVar17[0xb] = uVar5;
            uVar4 = puVar12[0xe];
            uVar5 = puVar12[0xf];
            puVar17[0xc] = uVar3;
            puVar17[0xd] = uVar6;
            puVar17[0xe] = uVar4;
            puVar17[0xf] = uVar5;
            lVar14 = lVar14 + -1;
            puVar8 = puVar17 + 0x10;
            puVar9 = puVar12 + 0x10;
          } while (lVar14 != 0);
          uVar3 = puVar12[0x11];
          uVar4 = puVar12[0x12];
          uVar5 = puVar12[0x13];
          puVar17[0x10] = puVar12[0x10];
          puVar17[0x11] = uVar3;
          uVar3 = puVar12[0x14];
          uVar6 = puVar12[0x15];
          puVar17[0x12] = uVar4;
          puVar17[0x13] = uVar5;
          uVar4 = puVar12[0x16];
          uVar5 = puVar12[0x17];
          puVar17[0x14] = uVar3;
          puVar17[0x15] = uVar6;
          puVar17[0x16] = uVar4;
          puVar17[0x17] = uVar5;
          puVar17 = (undefined8 *)(unaff_RDI + 0x74eb90 + unaff_RSI * 0x240);
          puVar8 = puVar17;
          puVar9 = (undefined8 *)&stack0x00000060;
          do {
            puVar15 = puVar9;
            puVar12 = puVar8;
            uVar3 = puVar15[1];
            uVar4 = puVar15[2];
            uVar5 = puVar15[3];
            *puVar12 = *puVar15;
            puVar12[1] = uVar3;
            uVar3 = puVar15[4];
            uVar6 = puVar15[5];
            puVar12[2] = uVar4;
            puVar12[3] = uVar5;
            uVar4 = puVar15[6];
            uVar5 = puVar15[7];
            puVar12[4] = uVar3;
            puVar12[5] = uVar6;
            uVar3 = puVar15[8];
            uVar6 = puVar15[9];
            puVar12[6] = uVar4;
            puVar12[7] = uVar5;
            uVar4 = puVar15[10];
            uVar5 = puVar15[0xb];
            puVar12[8] = uVar3;
            puVar12[9] = uVar6;
            uVar3 = puVar15[0xc];
            uVar6 = puVar15[0xd];
            puVar12[10] = uVar4;
            puVar12[0xb] = uVar5;
            uVar4 = puVar15[0xe];
            uVar5 = puVar15[0xf];
            puVar12[0xc] = uVar3;
            puVar12[0xd] = uVar6;
            puVar12[0xe] = uVar4;
            puVar12[0xf] = uVar5;
            lVar19 = lVar19 + -1;
            puVar8 = puVar12 + 0x10;
            puVar9 = puVar15 + 0x10;
          } while (lVar19 != 0);
          uVar3 = puVar15[0x11];
          uVar4 = puVar15[0x12];
          uVar5 = puVar15[0x13];
          puVar12[0x10] = puVar15[0x10];
          puVar12[0x11] = uVar3;
          uVar3 = puVar15[0x14];
          uVar6 = puVar15[0x15];
          puVar12[0x12] = uVar4;
          puVar12[0x13] = uVar5;
          uVar4 = puVar15[0x16];
          uVar5 = puVar15[0x17];
          puVar12[0x14] = uVar3;
          puVar12[0x15] = uVar6;
          puVar12[0x16] = uVar4;
          puVar12[0x17] = uVar5;
          uVar3 = *(undefined8 *)(lVar7 + 0x4c4b0);
          uVar18 = *(uint *)((longlong)(int)uStack0000000000000050 * 0x200 + 0x24 + lVar1);
          *(undefined8 *)((longlong)puVar17 + 0xc) = *(undefined8 *)(lVar7 + 0x4c4a8);
          *(undefined8 *)((longlong)puVar17 + 0x14) = uVar3;
          *(undefined8 *)((longlong)puVar17 + 0x1c) = *(undefined8 *)(lVar7 + 0x4c4c8);
          if ((uVar18 >> 0xb & 1) == 0) {
            *(undefined4 *)((longlong)puVar17 + 0x34) = *(undefined4 *)(lVar7 + 0x4c4d8);
          }
          in_stack_00000040 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
          uVar18 = uStack0000000000000050;
          in_stack_00000048 = lVar1;
          in_stack_00000058 = lVar1;
          while( true ) {
            uVar16 = *(int *)(unaff_RDI + 0x8fd220) + *(int *)(unaff_RDI + 0x8fd224) & 0x800003ff;
            if ((int)uVar16 < 0) {
              uVar16 = (uVar16 - 1 | 0xfffffc00) + 1;
            }
            if (uVar18 == uVar16) break;
            lVar14 = (longlong)(int)uVar18 * 0x200 + lVar1;
            uVar21 = func_0x000180598ed0(puVar17,*(undefined4 *)(lVar14 + 0x18));
            if ((*(uint *)(lVar14 + 0x24) & 0x800) != 0) {
              FUN_1805984e0(uVar21,*(undefined4 *)(lVar14 + 0x18),lVar14);
            }
            FUN_180598f80(puVar17);
            FUN_180590fc0(puVar17);
            FUN_180593ce0(puVar17,*(undefined4 *)(lVar14 + 0x18));
            uVar21 = *(undefined4 *)(lVar14 + 0x18);
            if ((_DAT_180c92514 == 0) || (_DAT_180c92514 == 5)) {
              uVar10 = 1;
            }
            else {
              uVar10 = 0;
            }
            *(undefined1 *)(unaff_RDI + 0x87d208) = uVar10;
            if ((_DAT_180c92514 == 1) || (_DAT_180c92514 == 4)) {
              uVar10 = 1;
            }
            else {
              uVar10 = 0;
            }
            *(undefined1 *)(unaff_RDI + 0x87d209) = uVar10;
            FUN_1805a7cb0(unaff_RDI + 0x87bd80,uVar21);
            FUN_1805a9bc0(unaff_RDI + 0x87bd80);
            FUN_180592060(puVar17,*(undefined4 *)(lVar14 + 0x18));
            uVar18 = uVar18 + 1 & 0x800003ff;
            if ((int)uVar18 < 0) {
              uVar18 = (uVar18 - 1 | 0xfffffc00) + 1;
            }
          }
          in_stack_00000040 = *(undefined8 *)((longlong)puVar17 + 0xc);
          in_stack_00000048 = *(undefined8 *)((longlong)puVar17 + 0x14);
          FUN_18051f1e0(lVar20,&stack0x00000040);
          uVar18 = uVar18 + 0x3ff & 0x800003ff;
          if ((int)uVar18 < 0) {
            uVar18 = (uVar18 - 1 | 0xfffffc00) + 1;
          }
          if (*(int *)((longlong)(int)uVar18 * 0x200 + 0x28 + lVar1) == 0) {
            *(undefined8 *)(*(longlong *)(lVar20 + 0x20) + 0x1c) =
                 *(undefined8 *)((longlong)puVar17 + 0x1c);
          }
          if ((*(uint *)((longlong)(int)uVar18 * 0x200 + 0x24 + lVar1) & 0x800) == 0) {
            func_0x000180598e50(*(undefined8 *)(lVar20 + 0x20),
                                *(undefined4 *)((longlong)puVar17 + 0x34));
          }
          if (-1 < *(int *)(lVar20 + 0x560)) {
            func_0x00018051a670((longlong)*(int *)(lVar20 + 0x560) * 0xa60 + 0x30a0 + unaff_RDI);
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




