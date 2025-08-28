#include "TaleWorlds.Native.Split.h"

// 03_rendering_part472.c - 6 个函数

// 函数: void FUN_18051ecc6(longlong *param_1)
void FUN_18051ecc6(longlong *param_1)

{
  uint64_t *puVar1;
  uint uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int32_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  bool bVar16;
  char cVar17;
  byte extraout_var;
  ulonglong uVar18;
  ulonglong uVar19;
  uint *puVar20;
  longlong lVar21;
  uint64_t uVar22;
  longlong unaff_RBX;
  uint64_t *unaff_RBP;
  int *unaff_RSI;
  uint64_t unaff_RDI;
  int32_t uVar23;
  int iVar24;
  uint64_t *puVar25;
  longlong in_R11;
  bool in_ZF;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t uVar26;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  uint64_t in_stack_00000070;
  int8_t uStack0000000000000078;
  uint64_t uStack000000000000007c;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_RDI;
  if (in_ZF) {
LAB_18051ecef:
    bVar16 = true;
  }
  else {
    uVar18 = func_0x000180534e20(param_1,1);
    uVar19 = func_0x000180534e20(extraout_XMM0_Da,0);
    if (((uVar19 | uVar18) >> 0x18 & 1) != 0) goto LAB_18051ecef;
    bVar16 = false;
  }
  cVar17 = (**(code **)(*param_1 + 0x160))();
  if (cVar17 == '\0') goto FUN_18051f1a2;
  if (!bVar16) {
    uVar18 = func_0x000180534e20(*(uint64_t *)(unaff_RBX + 0x590),1);
    uVar19 = func_0x000180534e20(extraout_XMM0_Da_00,0);
    if (((uVar19 | uVar18) >> 0x18 & 1) != 0) {
      *(uint64_t *)(unaff_RBX + 0x610) = *(uint64_t *)(unaff_RBX + 0x49c);
      lVar21 = *(longlong *)(unaff_RBX + 0x738);
      *(int32_t *)(unaff_RBX + 0x618) = 0;
      uVar26 = *(int32_t *)(unaff_RBX + 0x614);
      uVar3 = *(int32_t *)(unaff_RBX + 0x618);
      uVar4 = *(int32_t *)(unaff_RBX + 0x61c);
      *(int32_t *)(lVar21 + 0x2c) = *(int32_t *)(unaff_RBX + 0x610);
      *(int32_t *)(lVar21 + 0x30) = uVar26;
      *(int32_t *)(lVar21 + 0x34) = uVar3;
      *(int32_t *)(lVar21 + 0x38) = uVar4;
    }
  }
  iVar24 = *unaff_RSI;
  lVar21 = *(longlong *)(unaff_RBX + 0x590);
  uVar18 = func_0x000180534e20(lVar21,iVar24);
  if ((uVar18 >> 0x1b & 1) != 0) {
    if (iVar24 == 1) {
      uVar18 = func_0x000180534e20(extraout_XMM0_Da_01,0);
      if ((uVar18 & 0x2000000000) == 0) {
LAB_18051edd6:
        lVar21 = *(longlong *)(unaff_RBX + 0x728);
        if ((*(byte *)(lVar21 + 0x5aa) & 0x14) == 0) {
          *(uint64_t *)(lVar21 + 0x504) = 0;
          *(uint64_t *)(lVar21 + 0x50c) = 0;
          lVar21 = *(longlong *)(unaff_RBX + 0x728);
          *(uint64_t *)(lVar21 + 0x514) = 0;
          *(uint64_t *)(lVar21 + 0x51c) = 0;
          lVar21 = *(longlong *)(unaff_RBX + 0x728);
          *(uint64_t *)(lVar21 + 0x544) = 0;
          *(uint64_t *)(lVar21 + 0x54c) = 0;
          puVar20 = (uint *)((longlong)*(char *)(*(longlong *)(unaff_RBX + 0x590) + 0xe3) * 0x100 +
                            *(longlong *)(*(longlong *)(unaff_RBX + 0x658) + 0x18));
          do {
            LOCK();
            uVar2 = *puVar20;
            *puVar20 = *puVar20 | 1;
            UNLOCK();
          } while ((uVar2 & 1) != 0);
          uVar22 = *(uint64_t *)(puVar20 + 3);
          uVar13 = *(uint64_t *)(puVar20 + 5);
          uVar14 = *(uint64_t *)(puVar20 + 7);
          unaff_RBP[10] = *(uint64_t *)(puVar20 + 1);
          unaff_RBP[0xb] = uVar22;
          unaff_RBP[0xc] = uVar13;
          unaff_RBP[0xd] = uVar14;
          *puVar20 = 0;
          lVar21 = *(longlong *)(unaff_RBX + 0x728);
          cVar17 = '\0';
          *(uint64_t *)(lVar21 + 0x4f4) = uVar13;
          *(uint64_t *)(lVar21 + 0x4fc) = uVar14;
          *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x564) = (float)_DAT_180c8ed38 * 1e-05;
          lVar21 = *(longlong *)(unaff_RBX + 0x658);
          if ('\0' < *(char *)(lVar21 + 0x20)) {
            do {
              lVar21 = (longlong)cVar17;
              cVar17 = cVar17 + '\x01';
              puVar1 = (uint64_t *)
                       (*(longlong *)(*(longlong *)(unaff_RBX + 0x658) + 0x18) + 0x30 +
                       lVar21 * 0x100);
              uVar22 = puVar1[1];
              puVar25 = (uint64_t *)(*(longlong *)(unaff_RBX + 0x728) + (lVar21 + 0xf) * 0x10);
              *puVar25 = *puVar1;
              puVar25[1] = uVar22;
              lVar21 = *(longlong *)(unaff_RBX + 0x658);
            } while (cVar17 < *(char *)(lVar21 + 0x20));
          }
          puVar20 = (uint *)((longlong)*(char *)(*(longlong *)(unaff_RBX + 0x590) + 0x25fb) * 0x100
                            + *(longlong *)(lVar21 + 0x18));
          do {
            LOCK();
            uVar2 = *puVar20;
            *puVar20 = *puVar20 | 1;
            UNLOCK();
          } while ((uVar2 & 1) != 0);
          uVar22 = *(uint64_t *)(puVar20 + 1);
          uVar13 = *(uint64_t *)(puVar20 + 3);
          uVar14 = *(uint64_t *)(puVar20 + 5);
          uVar15 = *(uint64_t *)(puVar20 + 7);
          unaff_RBP[0xe] = uVar22;
          unaff_RBP[0xf] = uVar13;
          unaff_RBP[0x10] = uVar14;
          unaff_RBP[0x11] = uVar15;
          *puVar20 = 0;
          lVar21 = *(longlong *)(unaff_RBX + 0x728);
          *(uint64_t *)(lVar21 + 0xc0) = uVar22;
          *(uint64_t *)(lVar21 + 200) = uVar13;
          *(uint64_t *)(lVar21 + 0xd0) = uVar14;
          *(uint64_t *)(lVar21 + 0xd8) = uVar15;
          puVar20 = (uint *)((longlong)*(char *)(*(longlong *)(unaff_RBX + 0x590) + 0x25fc) * 0x100
                            + *(longlong *)(*(longlong *)(unaff_RBX + 0x658) + 0x18));
          do {
            LOCK();
            uVar2 = *puVar20;
            *puVar20 = *puVar20 | 1;
            UNLOCK();
          } while ((uVar2 & 1) != 0);
          uVar2 = puVar20[1];
          uVar5 = puVar20[2];
          uVar6 = puVar20[3];
          uVar7 = puVar20[4];
          uVar8 = puVar20[5];
          uVar9 = puVar20[6];
          uVar10 = puVar20[7];
          uVar11 = puVar20[8];
          *(uint *)(unaff_RBP + 0x12) = uVar2;
          *(uint *)((longlong)unaff_RBP + 0x94) = uVar5;
          *(uint *)(unaff_RBP + 0x13) = uVar6;
          *(uint *)((longlong)unaff_RBP + 0x9c) = uVar7;
          *(uint *)(unaff_RBP + 0x14) = uVar8;
          *(uint *)((longlong)unaff_RBP + 0xa4) = uVar9;
          *(uint *)(unaff_RBP + 0x15) = uVar10;
          *(uint *)((longlong)unaff_RBP + 0xac) = uVar11;
          *puVar20 = 0;
          lVar21 = *(longlong *)(unaff_RBX + 0x728);
          uVar22 = 4;
          *(uint *)(lVar21 + 0xe0) = uVar8;
          *(uint *)(lVar21 + 0xe4) = uVar9;
          *(uint *)(lVar21 + 0xe8) = uVar10;
          *(uint *)(lVar21 + 0xec) = uVar11;
          if (*(int *)(unaff_RBX + 0x1fc) != 0) {
            uVar22 = 0x10;
          }
          uVar26 = FUN_180516bd0(uVar2,uVar22,0xc7d5);
          if ((*(longlong *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9f0) != 0) ||
             ((lVar21 = *(longlong *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e8), lVar21 != 0 &&
              (*(char *)((longlong)
                         *(int *)((longlong)*(int *)(lVar21 + 0xf0) * 0xa0 + 100 +
                                 *(longlong *)(lVar21 + 0xd0)) * 0x170 + 0x135 + _DAT_180c95ff0) !=
               '\0')))) {
            uVar22 = 8;
            if (*(int *)(unaff_RBX + 0x1fc) != 0) {
              uVar22 = 0x20;
            }
            FUN_180516bd0(uVar26,uVar22,0xc7d5);
          }
        }
      }
    }
    else if ((iVar24 == 0) &&
            ((uVar18 = func_0x000180534e20(extraout_XMM0_Da_01,0), (uVar18 & 0x2000000000) != 0 ||
             (*(int *)(lVar21 + 0x2498) == -1)))) goto LAB_18051edd6;
  }
  if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
    iVar24 = *unaff_RSI;
    lVar21 = *(longlong *)(unaff_RBX + 0x590);
    uVar18 = *(ulonglong *)(unaff_RSI + 2);
    uVar19 = func_0x000180534e20(lVar21,iVar24);
    if (((uVar19 | uVar18) >> 0xd & 1) == 0) {
      func_0x000180534e20();
      if (iVar24 == 0) {
        in_stack_00000040 = *(uint64_t *)(lVar21 + 0x2460);
        in_stack_00000048 = *(uint64_t *)(lVar21 + 0x2468);
        puVar25 = &stack0x00000030;
        uStack000000000000007c = 0xffffffffffffffff;
        *(int32_t *)((longlong)unaff_RBP + -0x4c) = 0;
        uVar23 = 9;
        *(int32_t *)((longlong)unaff_RBP + -0x44) = 0x3f800000;
        in_stack_00000030 = *(uint64_t *)(lVar21 + 0x2450);
        in_stack_00000038 = *(uint64_t *)(lVar21 + 0x2458);
        unaff_RBP[-0xb] = 0xffffffffffffffff;
        *(int8_t *)(unaff_RBP + -10) = 0xff;
        uStack0000000000000060 = *(int32_t *)(lVar21 + 0x2480);
        uStack0000000000000064 = *(int32_t *)(lVar21 + 0x2484);
        uStack0000000000000068 = *(int32_t *)(lVar21 + 0x2488);
        uStack000000000000006c = *(int32_t *)(lVar21 + 0x248c);
        *(int32_t *)((longlong)unaff_RBP + -0x5c) = 0xffffffff;
        *(uint64_t *)((longlong)unaff_RBP + -0x7c) = 0;
        in_stack_00000050 = *(uint64_t *)(lVar21 + 0x2470);
        in_stack_00000058 = *(uint64_t *)(lVar21 + 0x2478);
        *(uint64_t *)((longlong)unaff_RBP + -0x74) = 0;
        *(uint64_t *)((longlong)unaff_RBP + -0x6c) = 0;
        *(uint64_t *)((longlong)unaff_RBP + -100) = 0;
        in_stack_00000070 = *(uint64_t *)(lVar21 + 0x2490);
        *(int32_t *)(unaff_RBP + -9) = 0;
        uStack0000000000000078 = 1;
      }
      else {
        uVar22 = *(uint64_t *)(lVar21 + 0x24a8);
        uVar13 = *(uint64_t *)(lVar21 + 0x24b0);
        puVar25 = unaff_RBP + -8;
        *(uint64_t *)((longlong)unaff_RBP + 0xc) = 0xffffffffffffffff;
        *(int32_t *)((longlong)unaff_RBP + 0x44) = 0;
        uVar23 = 0;
        *(int32_t *)((longlong)unaff_RBP + 0x4c) = 0x3f800000;
        uVar14 = *(uint64_t *)(lVar21 + 0x2498);
        uVar15 = *(uint64_t *)(lVar21 + 0x24a0);
        unaff_RBP[7] = 0xffffffffffffffff;
        unaff_RBP[-6] = uVar22;
        unaff_RBP[-5] = uVar13;
        *(int8_t *)(unaff_RBP + 8) = 0xff;
        uVar26 = *(int32_t *)(lVar21 + 0x24c8);
        uVar3 = *(int32_t *)(lVar21 + 0x24cc);
        uVar4 = *(int32_t *)(lVar21 + 0x24d0);
        uVar12 = *(int32_t *)(lVar21 + 0x24d4);
        *(int32_t *)((longlong)unaff_RBP + 0x34) = 0xffffffff;
        unaff_RBP[-8] = uVar14;
        unaff_RBP[-7] = uVar15;
        *(uint64_t *)((longlong)unaff_RBP + 0x14) = 0;
        uVar22 = *(uint64_t *)(lVar21 + 0x24b8);
        uVar13 = *(uint64_t *)(lVar21 + 0x24c0);
        *(uint64_t *)((longlong)unaff_RBP + 0x1c) = 0;
        *(uint64_t *)((longlong)unaff_RBP + 0x24) = 0;
        unaff_RBP[-4] = uVar22;
        unaff_RBP[-3] = uVar13;
        *(uint64_t *)((longlong)unaff_RBP + 0x2c) = 0;
        *unaff_RBP = *(uint64_t *)(lVar21 + 0x24d8);
        *(int32_t *)(unaff_RBP + 9) = 0;
        *(int8_t *)(unaff_RBP + 1) = 1;
        *(int32_t *)(unaff_RBP + -2) = uVar26;
        *(int32_t *)((longlong)unaff_RBP + -0xc) = uVar3;
        *(int32_t *)(unaff_RBP + -1) = uVar4;
        *(int32_t *)((longlong)unaff_RBP + -4) = uVar12;
      }
      FUN_18055dcf0(&DAT_180c925a0,*(int32_t *)(unaff_RBX + 0x10),uVar23,puVar25,
                    (extraout_var | (byte)(uVar18 >> 0x10)) & 1);
    }
  }
FUN_18051f1a2:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[0x16] ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18051ed11(void)
void FUN_18051ed11(void)

{
  uint64_t *puVar1;
  uint uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int32_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  byte extraout_var;
  ulonglong uVar16;
  ulonglong uVar17;
  uint *puVar18;
  longlong lVar19;
  uint64_t uVar20;
  longlong unaff_RBX;
  uint64_t *unaff_RBP;
  int *unaff_RSI;
  char unaff_DIL;
  char cVar21;
  int32_t uVar22;
  int iVar23;
  uint64_t *puVar24;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t uVar25;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  uint64_t in_stack_00000070;
  int8_t uStack0000000000000078;
  uint64_t uStack000000000000007c;
  
  if (unaff_DIL == '\0') {
    uVar16 = func_0x000180534e20(*(uint64_t *)(unaff_RBX + 0x590),1);
    uVar17 = func_0x000180534e20(extraout_XMM0_Da,0);
    if (((uVar17 | uVar16) >> 0x18 & 1) != 0) {
      *(uint64_t *)(unaff_RBX + 0x610) = *(uint64_t *)(unaff_RBX + 0x49c);
      lVar19 = *(longlong *)(unaff_RBX + 0x738);
      *(int32_t *)(unaff_RBX + 0x618) = 0;
      uVar25 = *(int32_t *)(unaff_RBX + 0x614);
      uVar3 = *(int32_t *)(unaff_RBX + 0x618);
      uVar4 = *(int32_t *)(unaff_RBX + 0x61c);
      *(int32_t *)(lVar19 + 0x2c) = *(int32_t *)(unaff_RBX + 0x610);
      *(int32_t *)(lVar19 + 0x30) = uVar25;
      *(int32_t *)(lVar19 + 0x34) = uVar3;
      *(int32_t *)(lVar19 + 0x38) = uVar4;
    }
  }
  iVar23 = *unaff_RSI;
  lVar19 = *(longlong *)(unaff_RBX + 0x590);
  uVar16 = func_0x000180534e20(lVar19,iVar23);
  if ((uVar16 >> 0x1b & 1) != 0) {
    if (iVar23 == 1) {
      uVar16 = func_0x000180534e20(extraout_XMM0_Da_00,0);
      if ((uVar16 & 0x2000000000) != 0) goto LAB_18051f007;
    }
    else if ((iVar23 != 0) ||
            ((uVar16 = func_0x000180534e20(extraout_XMM0_Da_00,0), (uVar16 & 0x2000000000) == 0 &&
             (*(int *)(lVar19 + 0x2498) != -1)))) goto LAB_18051f007;
    lVar19 = *(longlong *)(unaff_RBX + 0x728);
    if ((*(byte *)(lVar19 + 0x5aa) & 0x14) == 0) {
      *(uint64_t *)(lVar19 + 0x504) = 0;
      *(uint64_t *)(lVar19 + 0x50c) = 0;
      lVar19 = *(longlong *)(unaff_RBX + 0x728);
      *(uint64_t *)(lVar19 + 0x514) = 0;
      *(uint64_t *)(lVar19 + 0x51c) = 0;
      lVar19 = *(longlong *)(unaff_RBX + 0x728);
      *(uint64_t *)(lVar19 + 0x544) = 0;
      *(uint64_t *)(lVar19 + 0x54c) = 0;
      puVar18 = (uint *)((longlong)*(char *)(*(longlong *)(unaff_RBX + 0x590) + 0xe3) * 0x100 +
                        *(longlong *)(*(longlong *)(unaff_RBX + 0x658) + 0x18));
      do {
        LOCK();
        uVar2 = *puVar18;
        *puVar18 = *puVar18 | 1;
        UNLOCK();
      } while ((uVar2 & 1) != 0);
      uVar20 = *(uint64_t *)(puVar18 + 3);
      uVar13 = *(uint64_t *)(puVar18 + 5);
      uVar14 = *(uint64_t *)(puVar18 + 7);
      unaff_RBP[10] = *(uint64_t *)(puVar18 + 1);
      unaff_RBP[0xb] = uVar20;
      unaff_RBP[0xc] = uVar13;
      unaff_RBP[0xd] = uVar14;
      *puVar18 = 0;
      lVar19 = *(longlong *)(unaff_RBX + 0x728);
      cVar21 = '\0';
      *(uint64_t *)(lVar19 + 0x4f4) = uVar13;
      *(uint64_t *)(lVar19 + 0x4fc) = uVar14;
      *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x564) = (float)_DAT_180c8ed38 * 1e-05;
      lVar19 = *(longlong *)(unaff_RBX + 0x658);
      if ('\0' < *(char *)(lVar19 + 0x20)) {
        do {
          lVar19 = (longlong)cVar21;
          cVar21 = cVar21 + '\x01';
          puVar1 = (uint64_t *)
                   (*(longlong *)(*(longlong *)(unaff_RBX + 0x658) + 0x18) + 0x30 + lVar19 * 0x100);
          uVar20 = puVar1[1];
          puVar24 = (uint64_t *)(*(longlong *)(unaff_RBX + 0x728) + (lVar19 + 0xf) * 0x10);
          *puVar24 = *puVar1;
          puVar24[1] = uVar20;
          lVar19 = *(longlong *)(unaff_RBX + 0x658);
        } while (cVar21 < *(char *)(lVar19 + 0x20));
      }
      puVar18 = (uint *)((longlong)*(char *)(*(longlong *)(unaff_RBX + 0x590) + 0x25fb) * 0x100 +
                        *(longlong *)(lVar19 + 0x18));
      do {
        LOCK();
        uVar2 = *puVar18;
        *puVar18 = *puVar18 | 1;
        UNLOCK();
      } while ((uVar2 & 1) != 0);
      uVar20 = *(uint64_t *)(puVar18 + 1);
      uVar13 = *(uint64_t *)(puVar18 + 3);
      uVar14 = *(uint64_t *)(puVar18 + 5);
      uVar15 = *(uint64_t *)(puVar18 + 7);
      unaff_RBP[0xe] = uVar20;
      unaff_RBP[0xf] = uVar13;
      unaff_RBP[0x10] = uVar14;
      unaff_RBP[0x11] = uVar15;
      *puVar18 = 0;
      lVar19 = *(longlong *)(unaff_RBX + 0x728);
      *(uint64_t *)(lVar19 + 0xc0) = uVar20;
      *(uint64_t *)(lVar19 + 200) = uVar13;
      *(uint64_t *)(lVar19 + 0xd0) = uVar14;
      *(uint64_t *)(lVar19 + 0xd8) = uVar15;
      puVar18 = (uint *)((longlong)*(char *)(*(longlong *)(unaff_RBX + 0x590) + 0x25fc) * 0x100 +
                        *(longlong *)(*(longlong *)(unaff_RBX + 0x658) + 0x18));
      do {
        LOCK();
        uVar2 = *puVar18;
        *puVar18 = *puVar18 | 1;
        UNLOCK();
      } while ((uVar2 & 1) != 0);
      uVar2 = puVar18[1];
      uVar5 = puVar18[2];
      uVar6 = puVar18[3];
      uVar7 = puVar18[4];
      uVar8 = puVar18[5];
      uVar9 = puVar18[6];
      uVar10 = puVar18[7];
      uVar11 = puVar18[8];
      *(uint *)(unaff_RBP + 0x12) = uVar2;
      *(uint *)((longlong)unaff_RBP + 0x94) = uVar5;
      *(uint *)(unaff_RBP + 0x13) = uVar6;
      *(uint *)((longlong)unaff_RBP + 0x9c) = uVar7;
      *(uint *)(unaff_RBP + 0x14) = uVar8;
      *(uint *)((longlong)unaff_RBP + 0xa4) = uVar9;
      *(uint *)(unaff_RBP + 0x15) = uVar10;
      *(uint *)((longlong)unaff_RBP + 0xac) = uVar11;
      *puVar18 = 0;
      lVar19 = *(longlong *)(unaff_RBX + 0x728);
      uVar20 = 4;
      *(uint *)(lVar19 + 0xe0) = uVar8;
      *(uint *)(lVar19 + 0xe4) = uVar9;
      *(uint *)(lVar19 + 0xe8) = uVar10;
      *(uint *)(lVar19 + 0xec) = uVar11;
      if (*(int *)(unaff_RBX + 0x1fc) != 0) {
        uVar20 = 0x10;
      }
      uVar25 = FUN_180516bd0(uVar2,uVar20,0xc7d5);
      if ((*(longlong *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9f0) != 0) ||
         ((lVar19 = *(longlong *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e8), lVar19 != 0 &&
          (*(char *)((longlong)
                     *(int *)((longlong)*(int *)(lVar19 + 0xf0) * 0xa0 + 100 +
                             *(longlong *)(lVar19 + 0xd0)) * 0x170 + 0x135 + _DAT_180c95ff0) != '\0'
          )))) {
        uVar20 = 8;
        if (*(int *)(unaff_RBX + 0x1fc) != 0) {
          uVar20 = 0x20;
        }
        FUN_180516bd0(uVar25,uVar20,0xc7d5);
      }
    }
  }
LAB_18051f007:
  if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
    iVar23 = *unaff_RSI;
    lVar19 = *(longlong *)(unaff_RBX + 0x590);
    uVar16 = *(ulonglong *)(unaff_RSI + 2);
    uVar17 = func_0x000180534e20(lVar19,iVar23);
    if (((uVar17 | uVar16) >> 0xd & 1) == 0) {
      func_0x000180534e20();
      if (iVar23 == 0) {
        in_stack_00000040 = *(uint64_t *)(lVar19 + 0x2460);
        in_stack_00000048 = *(uint64_t *)(lVar19 + 0x2468);
        puVar24 = &stack0x00000030;
        uStack000000000000007c = 0xffffffffffffffff;
        *(int32_t *)((longlong)unaff_RBP + -0x4c) = 0;
        uVar22 = 9;
        *(int32_t *)((longlong)unaff_RBP + -0x44) = 0x3f800000;
        in_stack_00000030 = *(uint64_t *)(lVar19 + 0x2450);
        in_stack_00000038 = *(uint64_t *)(lVar19 + 0x2458);
        unaff_RBP[-0xb] = 0xffffffffffffffff;
        *(int8_t *)(unaff_RBP + -10) = 0xff;
        uStack0000000000000060 = *(int32_t *)(lVar19 + 0x2480);
        uStack0000000000000064 = *(int32_t *)(lVar19 + 0x2484);
        uStack0000000000000068 = *(int32_t *)(lVar19 + 0x2488);
        uStack000000000000006c = *(int32_t *)(lVar19 + 0x248c);
        *(int32_t *)((longlong)unaff_RBP + -0x5c) = 0xffffffff;
        *(uint64_t *)((longlong)unaff_RBP + -0x7c) = 0;
        in_stack_00000050 = *(uint64_t *)(lVar19 + 0x2470);
        in_stack_00000058 = *(uint64_t *)(lVar19 + 0x2478);
        *(uint64_t *)((longlong)unaff_RBP + -0x74) = 0;
        *(uint64_t *)((longlong)unaff_RBP + -0x6c) = 0;
        *(uint64_t *)((longlong)unaff_RBP + -100) = 0;
        in_stack_00000070 = *(uint64_t *)(lVar19 + 0x2490);
        *(int32_t *)(unaff_RBP + -9) = 0;
        uStack0000000000000078 = 1;
      }
      else {
        uVar20 = *(uint64_t *)(lVar19 + 0x24a8);
        uVar13 = *(uint64_t *)(lVar19 + 0x24b0);
        puVar24 = unaff_RBP + -8;
        *(uint64_t *)((longlong)unaff_RBP + 0xc) = 0xffffffffffffffff;
        *(int32_t *)((longlong)unaff_RBP + 0x44) = 0;
        uVar22 = 0;
        *(int32_t *)((longlong)unaff_RBP + 0x4c) = 0x3f800000;
        uVar14 = *(uint64_t *)(lVar19 + 0x2498);
        uVar15 = *(uint64_t *)(lVar19 + 0x24a0);
        unaff_RBP[7] = 0xffffffffffffffff;
        unaff_RBP[-6] = uVar20;
        unaff_RBP[-5] = uVar13;
        *(int8_t *)(unaff_RBP + 8) = 0xff;
        uVar25 = *(int32_t *)(lVar19 + 0x24c8);
        uVar3 = *(int32_t *)(lVar19 + 0x24cc);
        uVar4 = *(int32_t *)(lVar19 + 0x24d0);
        uVar12 = *(int32_t *)(lVar19 + 0x24d4);
        *(int32_t *)((longlong)unaff_RBP + 0x34) = 0xffffffff;
        unaff_RBP[-8] = uVar14;
        unaff_RBP[-7] = uVar15;
        *(uint64_t *)((longlong)unaff_RBP + 0x14) = 0;
        uVar20 = *(uint64_t *)(lVar19 + 0x24b8);
        uVar13 = *(uint64_t *)(lVar19 + 0x24c0);
        *(uint64_t *)((longlong)unaff_RBP + 0x1c) = 0;
        *(uint64_t *)((longlong)unaff_RBP + 0x24) = 0;
        unaff_RBP[-4] = uVar20;
        unaff_RBP[-3] = uVar13;
        *(uint64_t *)((longlong)unaff_RBP + 0x2c) = 0;
        *unaff_RBP = *(uint64_t *)(lVar19 + 0x24d8);
        *(int32_t *)(unaff_RBP + 9) = 0;
        *(int8_t *)(unaff_RBP + 1) = 1;
        *(int32_t *)(unaff_RBP + -2) = uVar25;
        *(int32_t *)((longlong)unaff_RBP + -0xc) = uVar3;
        *(int32_t *)(unaff_RBP + -1) = uVar4;
        *(int32_t *)((longlong)unaff_RBP + -4) = uVar12;
      }
      FUN_18055dcf0(&DAT_180c925a0,*(int32_t *)(unaff_RBX + 0x10),uVar22,puVar24,
                    (extraout_var | (byte)(uVar16 >> 0x10)) & 1);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[0x16] ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18051f1a2(void)
void FUN_18051f1a2(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xb0) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18051f1aa(void)
void FUN_18051f1aa(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xb0) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18051f1b8(void)
void FUN_18051f1b8(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xb0) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18051f1e0(longlong param_1,float *param_2)
void FUN_18051f1e0(longlong param_1,float *param_2)

{
  float fVar1;
  longlong lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  longlong lStack_78;
  uint64_t uStack_70;
  float fStack_68;
  char cStack_64;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar7 = *(longlong *)(param_1 + 0x590);
  if (lVar7 != 0) {
    if (*(longlong *)(lVar7 + 0x2460) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x2460) + 0x1d0);
    }
    if (((*(ulonglong *)(lVar7 + 0x2470) | uVar8) >> 9 & 1) == 0) {
      if (*(longlong *)(lVar7 + 0x24a8) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x24a8) + 0x1d0);
      }
      if (((*(ulonglong *)(lVar7 + 0x24b8) | uVar8) >> 9 & 1) == 0) {
        uStack_88 = 0;
        uStack_80 = 0x7f7fffff3f800000;
        cStack_64 = '\0';
        fStack_68 = 0.0;
        lStack_78 = 0;
        uStack_70 = 0;
        FUN_180593b40(lVar2,*(uint64_t *)(*(longlong *)(param_1 + 0x8d8) + 0x18),&fStack_98,
                      param_2,*(int *)(param_1 + 0x568) != 1,
                      (byte)((uint)*(int32_t *)(param_1 + 0x56c) >> 8) & 1);
        if (cStack_64 == '\x02') {
          uVar6 = *(uint *)(lStack_78 + 0x18);
        }
        else {
          uVar6 = 0;
        }
        if ((((uVar6 & 0x40) != 0) && (0.2 < (float)uStack_80)) &&
           (lVar7 = lStack_78, fVar12 = (float)uStack_80, cVar5 = func_0x000180522f60(param_1),
           cVar5 != '\0')) {
          if (lVar7 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = *(longlong *)(lVar7 + 0x10);
          }
          if (*(float *)(lVar7 + 0x88) <= 0.0 && *(float *)(lVar7 + 0x88) != 0.0) {
            fVar10 = *(float *)(*(longlong *)(param_1 + 0x5f0) + 0x80) * 10.0;
            fVar11 = *(float *)(*(longlong *)(param_1 + 0x5f0) + 0x84) * 10.0;
            fVar1 = param_2[2];
            fVar14 = *param_2 - fVar10;
            fVar15 = param_2[1] - fVar11;
            fVar13 = (*param_2 + fVar10) - fVar14;
            fVar10 = (param_2[1] + fVar11) - fVar15;
            fVar12 = ((fStack_94 - fVar15) * uStack_88._4_4_ +
                      (fStack_98 - fVar14) * (float)uStack_88 + (fStack_90 - fVar1) * fVar12) /
                     (uStack_88._4_4_ * fVar10 + (float)uStack_88 * fVar13 +
                     (fVar1 - fVar1) * fVar12);
            *param_2 = fVar12 * fVar13 + fVar14;
            param_2[1] = fVar12 * fVar10 + fVar15;
            param_2[2] = (fVar1 - fVar1) * fVar12 + fVar1;
            param_2[3] = 3.4028235e+38;
            goto FUN_18051f4c1;
          }
        }
        fVar12 = param_2[2];
        if ((fVar12 <= fStack_68) ||
           (((*(byte *)(lVar2 + 0x40) & 1) != 0 &&
            ((cVar5 = func_0x000180522f60(param_1), cVar5 != '\0' ||
             (fVar12 - fStack_68 < 0.01999672)))))) {
          param_2[2] = fStack_68;
        }
      }
    }
  }
FUN_18051f4c1:
  fVar12 = *(float *)(lVar2 + 0x10);
  fVar1 = *(float *)(lVar2 + 0x14);
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  *(float *)(param_1 + 0x988) = (*(float *)(lVar2 + 0xc) - *param_2) + *(float *)(param_1 + 0x988);
  uVar3 = *(uint64_t *)param_2;
  uVar4 = *(uint64_t *)(param_2 + 2);
  *(float *)(param_1 + 0x98c) = (fVar12 - fVar10) + *(float *)(param_1 + 0x98c);
  *(float *)(param_1 + 0x990) = (fVar1 - fVar11) + *(float *)(param_1 + 0x990);
  *(uint64_t *)(lVar2 + 0xc) = uVar3;
  *(uint64_t *)(lVar2 + 0x14) = uVar4;
  if (-1 < *(int *)(param_1 + 0x560)) {
    lVar2 = *(longlong *)(param_1 + 0x8d8);
    lVar9 = (longlong)*(int *)(param_1 + 0x560) * 0xa60;
    lVar7 = *(longlong *)(lVar9 + 0x30c0 + lVar2);
    *(uint64_t *)(lVar7 + 0xc) = uVar3;
    *(uint64_t *)(lVar7 + 0x14) = uVar4;
    *(uint64_t *)(lVar9 + 0x3a28 + lVar2) = 0;
    *(uint64_t *)(lVar9 + 0x3a30 + lVar2) = 0;
    *(int32_t *)(lVar9 + 0x3a38 + lVar2) = 0;
  }
  return;
}





