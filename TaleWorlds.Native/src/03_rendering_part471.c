#include "TaleWorlds.Native.Split.h"

// 03_rendering_part471.c - 3 个函数

// 函数: void FUN_18051ebd0(undefined8 param_1,undefined4 param_2,undefined4 *param_3)
void FUN_18051ebd0(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 uStack_c;
  
  uStack_34 = *param_3;
  uStack_28 = param_3[10];
  uStack_24 = param_3[0xf];
  uStack_30 = *(ulonglong *)(param_3 + 8) | 0x80000000;
  uStack_20 = param_3[0xb];
  uStack_1c = param_3[0xc];
  uStack_18 = param_3[0xd];
  uStack_14 = param_3[0xe];
  uStack_f = *(undefined1 *)(param_3 + 0x10);
  uStack_d = *(undefined1 *)((longlong)param_3 + 0x41);
  uStack_10 = 1;
  uStack_e = 1;
  uStack_c = 0;
  uStack_38 = param_2;
  FUN_18051ec50(uStack_20,&uStack_38);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18051ec50(undefined4 param_1,int *param_2)
void FUN_18051ec50(undefined4 param_1,int *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  byte extraout_var;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong in_RCX;
  longlong *plVar9;
  uint *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined1 auStack_1e8 [32];
  byte bStack_1c8;
  undefined1 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined8 uStack_154;
  undefined8 uStack_14c;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_1e8;
  if ((((*(longlong *)(in_RCX + 0x6d8) == 0) ||
       (*(char *)(*(longlong *)(in_RCX + 0x6d8) + 0x8be) == '\0')) ||
      (plVar9 = *(longlong **)(in_RCX + 0x590), plVar9 == (longlong *)0x0)) ||
     (*(longlong *)(in_RCX + 0x658) == 0)) goto LAB_18051f1ba;
  if (*(int *)(in_RCX + 0x5f8) == 2) {
LAB_18051ecef:
    bVar5 = true;
  }
  else {
    uVar7 = func_0x000180534e20(plVar9,1);
    uVar8 = func_0x000180534e20(extraout_XMM0_Da,0);
    param_1 = extraout_XMM0_Da_00;
    if (((uVar8 | uVar7) >> 0x18 & 1) != 0) goto LAB_18051ecef;
    bVar5 = false;
  }
  cVar6 = (**(code **)(*plVar9 + 0x160))(param_1,param_2);
  if (cVar6 == '\0') goto LAB_18051f1ba;
  if (!bVar5) {
    uVar7 = func_0x000180534e20(*(undefined8 *)(in_RCX + 0x590),1);
    uVar8 = func_0x000180534e20(extraout_XMM0_Da_01,0);
    if (((uVar8 | uVar7) >> 0x18 & 1) != 0) {
      *(undefined8 *)(in_RCX + 0x610) = *(undefined8 *)(in_RCX + 0x49c);
      lVar11 = *(longlong *)(in_RCX + 0x738);
      *(undefined4 *)(in_RCX + 0x618) = 0;
      uVar13 = *(undefined4 *)(in_RCX + 0x614);
      uVar3 = *(undefined4 *)(in_RCX + 0x618);
      uVar4 = *(undefined4 *)(in_RCX + 0x61c);
      *(undefined4 *)(lVar11 + 0x2c) = *(undefined4 *)(in_RCX + 0x610);
      *(undefined4 *)(lVar11 + 0x30) = uVar13;
      *(undefined4 *)(lVar11 + 0x34) = uVar3;
      *(undefined4 *)(lVar11 + 0x38) = uVar4;
    }
  }
  iVar14 = *param_2;
  lVar11 = *(longlong *)(in_RCX + 0x590);
  uVar7 = func_0x000180534e20(lVar11,iVar14);
  if ((uVar7 >> 0x1b & 1) != 0) {
    if (iVar14 == 1) {
      uVar7 = func_0x000180534e20(extraout_XMM0_Da_02,0);
      if ((uVar7 & 0x2000000000) == 0) {
LAB_18051edd6:
        lVar11 = *(longlong *)(in_RCX + 0x728);
        if ((*(byte *)(lVar11 + 0x5aa) & 0x14) == 0) {
          *(undefined8 *)(lVar11 + 0x504) = 0;
          *(undefined8 *)(lVar11 + 0x50c) = 0;
          lVar11 = *(longlong *)(in_RCX + 0x728);
          *(undefined8 *)(lVar11 + 0x514) = 0;
          *(undefined8 *)(lVar11 + 0x51c) = 0;
          lVar11 = *(longlong *)(in_RCX + 0x728);
          *(undefined8 *)(lVar11 + 0x544) = 0;
          *(undefined8 *)(lVar11 + 0x54c) = 0;
          puVar10 = (uint *)((longlong)*(char *)(*(longlong *)(in_RCX + 0x590) + 0xe3) * 0x100 +
                            *(longlong *)(*(longlong *)(in_RCX + 0x658) + 0x18));
          do {
            LOCK();
            uVar2 = *puVar10;
            *puVar10 = *puVar10 | 1;
            UNLOCK();
          } while ((uVar2 & 1) != 0);
          uStack_98 = *(undefined8 *)(puVar10 + 1);
          uStack_90 = *(undefined8 *)(puVar10 + 3);
          uStack_88 = *(undefined8 *)(puVar10 + 5);
          uStack_80 = *(undefined8 *)(puVar10 + 7);
          *puVar10 = 0;
          lVar11 = *(longlong *)(in_RCX + 0x728);
          cVar6 = '\0';
          *(undefined8 *)(lVar11 + 0x4f4) = uStack_88;
          *(undefined8 *)(lVar11 + 0x4fc) = uStack_80;
          *(float *)(*(longlong *)(in_RCX + 0x728) + 0x564) = (float)_DAT_180c8ed38 * 1e-05;
          lVar11 = *(longlong *)(in_RCX + 0x658);
          if ('\0' < *(char *)(lVar11 + 0x20)) {
            do {
              lVar11 = (longlong)cVar6;
              cVar6 = cVar6 + '\x01';
              puVar1 = (undefined8 *)
                       (*(longlong *)(*(longlong *)(in_RCX + 0x658) + 0x18) + 0x30 + lVar11 * 0x100)
              ;
              uVar12 = puVar1[1];
              puVar15 = (undefined8 *)(*(longlong *)(in_RCX + 0x728) + (lVar11 + 0xf) * 0x10);
              *puVar15 = *puVar1;
              puVar15[1] = uVar12;
              lVar11 = *(longlong *)(in_RCX + 0x658);
            } while (cVar6 < *(char *)(lVar11 + 0x20));
          }
          puVar10 = (uint *)((longlong)*(char *)(*(longlong *)(in_RCX + 0x590) + 0x25fb) * 0x100 +
                            *(longlong *)(lVar11 + 0x18));
          do {
            LOCK();
            uVar2 = *puVar10;
            *puVar10 = *puVar10 | 1;
            UNLOCK();
          } while ((uVar2 & 1) != 0);
          uStack_78 = *(undefined8 *)(puVar10 + 1);
          uStack_70 = *(undefined8 *)(puVar10 + 3);
          uStack_68 = *(undefined8 *)(puVar10 + 5);
          uStack_60 = *(undefined8 *)(puVar10 + 7);
          *puVar10 = 0;
          lVar11 = *(longlong *)(in_RCX + 0x728);
          *(undefined8 *)(lVar11 + 0xc0) = uStack_78;
          *(undefined8 *)(lVar11 + 200) = uStack_70;
          *(undefined8 *)(lVar11 + 0xd0) = uStack_68;
          *(undefined8 *)(lVar11 + 0xd8) = uStack_60;
          puVar10 = (uint *)((longlong)*(char *)(*(longlong *)(in_RCX + 0x590) + 0x25fc) * 0x100 +
                            *(longlong *)(*(longlong *)(in_RCX + 0x658) + 0x18));
          do {
            LOCK();
            uVar2 = *puVar10;
            *puVar10 = *puVar10 | 1;
            UNLOCK();
          } while ((uVar2 & 1) != 0);
          uStack_58 = puVar10[1];
          uStack_54 = puVar10[2];
          uStack_50 = puVar10[3];
          uStack_4c = puVar10[4];
          uStack_48 = puVar10[5];
          uStack_44 = puVar10[6];
          uStack_40 = puVar10[7];
          uStack_3c = puVar10[8];
          *puVar10 = 0;
          lVar11 = *(longlong *)(in_RCX + 0x728);
          uVar12 = 4;
          *(uint *)(lVar11 + 0xe0) = uStack_48;
          *(uint *)(lVar11 + 0xe4) = uStack_44;
          *(uint *)(lVar11 + 0xe8) = uStack_40;
          *(uint *)(lVar11 + 0xec) = uStack_3c;
          if (*(int *)(in_RCX + 0x1fc) != 0) {
            uVar12 = 0x10;
          }
          FUN_180516bd0(in_RCX,uVar12,0xc7d5);
          if ((*(longlong *)(*(longlong *)(in_RCX + 0x8f8) + 0x9f0) != 0) ||
             ((lVar11 = *(longlong *)(*(longlong *)(in_RCX + 0x8f8) + 0x9e8), lVar11 != 0 &&
              (*(char *)((longlong)
                         *(int *)((longlong)*(int *)(lVar11 + 0xf0) * 0xa0 + 100 +
                                 *(longlong *)(lVar11 + 0xd0)) * 0x170 + 0x135 + _DAT_180c95ff0) !=
               '\0')))) {
            uVar12 = 8;
            if (*(int *)(in_RCX + 0x1fc) != 0) {
              uVar12 = 0x20;
            }
            FUN_180516bd0(in_RCX,uVar12,0xc7d5);
          }
        }
      }
    }
    else if ((iVar14 == 0) &&
            ((uVar7 = func_0x000180534e20(extraout_XMM0_Da_02,0), (uVar7 & 0x2000000000) != 0 ||
             (*(int *)(lVar11 + 0x2498) == -1)))) goto LAB_18051edd6;
  }
  if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
    iVar14 = *param_2;
    lVar11 = *(longlong *)(in_RCX + 0x590);
    uVar7 = *(ulonglong *)(param_2 + 2);
    uVar8 = func_0x000180534e20(lVar11,iVar14);
    if (((uVar8 | uVar7) >> 0xd & 1) == 0) {
      func_0x000180534e20();
      uStack_1c0 = 0;
      bStack_1c8 = (extraout_var | (byte)(uVar7 >> 0x10)) & 1;
      if (iVar14 == 0) {
        uStack_1a8 = *(undefined8 *)(lVar11 + 0x2460);
        uStack_1a0 = *(undefined8 *)(lVar11 + 0x2468);
        puVar15 = &uStack_1b8;
        uStack_16c = 0xffffffffffffffff;
        uStack_134 = 0;
        uVar13 = 9;
        uStack_12c = 0x3f800000;
        uStack_1b8 = *(undefined8 *)(lVar11 + 0x2450);
        uStack_1b0 = *(undefined8 *)(lVar11 + 0x2458);
        uStack_140 = 0xffffffffffffffff;
        uStack_138 = 0xff;
        uStack_188 = *(undefined4 *)(lVar11 + 0x2480);
        uStack_184 = *(undefined4 *)(lVar11 + 0x2484);
        uStack_180 = *(undefined4 *)(lVar11 + 0x2488);
        uStack_17c = *(undefined4 *)(lVar11 + 0x248c);
        uStack_144 = 0xffffffff;
        uStack_164 = 0;
        uStack_198 = *(undefined8 *)(lVar11 + 0x2470);
        uStack_190 = *(undefined8 *)(lVar11 + 0x2478);
        uStack_15c = 0;
        uStack_154 = 0;
        uStack_14c = 0;
        uStack_178 = *(undefined8 *)(lVar11 + 0x2490);
        uStack_130 = 0;
        uStack_170 = 1;
      }
      else {
        uStack_118 = *(undefined8 *)(lVar11 + 0x24a8);
        uStack_110 = *(undefined8 *)(lVar11 + 0x24b0);
        puVar15 = &uStack_128;
        uStack_dc = 0xffffffffffffffff;
        uStack_a4 = 0;
        uVar13 = 0;
        uStack_9c = 0x3f800000;
        uStack_128 = *(undefined8 *)(lVar11 + 0x2498);
        uStack_120 = *(undefined8 *)(lVar11 + 0x24a0);
        uStack_b0 = 0xffffffffffffffff;
        uStack_a8 = 0xff;
        uStack_f8 = *(undefined4 *)(lVar11 + 0x24c8);
        uStack_f4 = *(undefined4 *)(lVar11 + 0x24cc);
        uStack_f0 = *(undefined4 *)(lVar11 + 0x24d0);
        uStack_ec = *(undefined4 *)(lVar11 + 0x24d4);
        uStack_b4 = 0xffffffff;
        uStack_d4 = 0;
        uStack_108 = *(undefined8 *)(lVar11 + 0x24b8);
        uStack_100 = *(undefined8 *)(lVar11 + 0x24c0);
        uStack_cc = 0;
        uStack_c4 = 0;
        uStack_bc = 0;
        uStack_e8 = *(undefined8 *)(lVar11 + 0x24d8);
        uStack_a0 = 0;
        uStack_e0 = 1;
      }
      FUN_18055dcf0(&DAT_180c925a0,*(undefined4 *)(in_RCX + 0x10),uVar13,puVar15);
    }
  }
LAB_18051f1ba:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18051ec9f(longlong *param_1)
void FUN_18051ec9f(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  char cVar17;
  byte extraout_var;
  ulonglong uVar18;
  ulonglong uVar19;
  uint *puVar20;
  longlong lVar21;
  undefined8 uVar22;
  longlong unaff_RBX;
  undefined8 *unaff_RBP;
  int *unaff_RSI;
  undefined8 unaff_RDI;
  undefined4 uVar23;
  int iVar24;
  undefined8 *puVar25;
  longlong in_R11;
  undefined8 unaff_R14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar26;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined1 uStack0000000000000078;
  undefined8 uStack000000000000007c;
  
  *(undefined8 *)(in_R11 + -0x20) = unaff_R14;
  if ((param_1 == (longlong *)0x0) || (*(longlong *)(unaff_RBX + 0x658) == 0)) goto FUN_18051f1aa;
  iVar24 = *(int *)(unaff_RBX + 0x5f8);
  *(undefined8 *)(in_R11 + 0x18) = unaff_RDI;
  if (iVar24 == 2) {
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
  if (cVar17 == '\0') goto FUN_18051f1aa;
  if (!bVar16) {
    uVar18 = func_0x000180534e20(*(undefined8 *)(unaff_RBX + 0x590),1);
    uVar19 = func_0x000180534e20(extraout_XMM0_Da_00,0);
    if (((uVar19 | uVar18) >> 0x18 & 1) != 0) {
      *(undefined8 *)(unaff_RBX + 0x610) = *(undefined8 *)(unaff_RBX + 0x49c);
      lVar21 = *(longlong *)(unaff_RBX + 0x738);
      *(undefined4 *)(unaff_RBX + 0x618) = 0;
      uVar26 = *(undefined4 *)(unaff_RBX + 0x614);
      uVar3 = *(undefined4 *)(unaff_RBX + 0x618);
      uVar4 = *(undefined4 *)(unaff_RBX + 0x61c);
      *(undefined4 *)(lVar21 + 0x2c) = *(undefined4 *)(unaff_RBX + 0x610);
      *(undefined4 *)(lVar21 + 0x30) = uVar26;
      *(undefined4 *)(lVar21 + 0x34) = uVar3;
      *(undefined4 *)(lVar21 + 0x38) = uVar4;
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
          *(undefined8 *)(lVar21 + 0x504) = 0;
          *(undefined8 *)(lVar21 + 0x50c) = 0;
          lVar21 = *(longlong *)(unaff_RBX + 0x728);
          *(undefined8 *)(lVar21 + 0x514) = 0;
          *(undefined8 *)(lVar21 + 0x51c) = 0;
          lVar21 = *(longlong *)(unaff_RBX + 0x728);
          *(undefined8 *)(lVar21 + 0x544) = 0;
          *(undefined8 *)(lVar21 + 0x54c) = 0;
          puVar20 = (uint *)((longlong)*(char *)(*(longlong *)(unaff_RBX + 0x590) + 0xe3) * 0x100 +
                            *(longlong *)(*(longlong *)(unaff_RBX + 0x658) + 0x18));
          do {
            LOCK();
            uVar2 = *puVar20;
            *puVar20 = *puVar20 | 1;
            UNLOCK();
          } while ((uVar2 & 1) != 0);
          uVar22 = *(undefined8 *)(puVar20 + 3);
          uVar13 = *(undefined8 *)(puVar20 + 5);
          uVar14 = *(undefined8 *)(puVar20 + 7);
          unaff_RBP[10] = *(undefined8 *)(puVar20 + 1);
          unaff_RBP[0xb] = uVar22;
          unaff_RBP[0xc] = uVar13;
          unaff_RBP[0xd] = uVar14;
          *puVar20 = 0;
          lVar21 = *(longlong *)(unaff_RBX + 0x728);
          cVar17 = '\0';
          *(undefined8 *)(lVar21 + 0x4f4) = uVar13;
          *(undefined8 *)(lVar21 + 0x4fc) = uVar14;
          *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x564) = (float)_DAT_180c8ed38 * 1e-05;
          lVar21 = *(longlong *)(unaff_RBX + 0x658);
          if ('\0' < *(char *)(lVar21 + 0x20)) {
            do {
              lVar21 = (longlong)cVar17;
              cVar17 = cVar17 + '\x01';
              puVar1 = (undefined8 *)
                       (*(longlong *)(*(longlong *)(unaff_RBX + 0x658) + 0x18) + 0x30 +
                       lVar21 * 0x100);
              uVar22 = puVar1[1];
              puVar25 = (undefined8 *)(*(longlong *)(unaff_RBX + 0x728) + (lVar21 + 0xf) * 0x10);
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
          uVar22 = *(undefined8 *)(puVar20 + 1);
          uVar13 = *(undefined8 *)(puVar20 + 3);
          uVar14 = *(undefined8 *)(puVar20 + 5);
          uVar15 = *(undefined8 *)(puVar20 + 7);
          unaff_RBP[0xe] = uVar22;
          unaff_RBP[0xf] = uVar13;
          unaff_RBP[0x10] = uVar14;
          unaff_RBP[0x11] = uVar15;
          *puVar20 = 0;
          lVar21 = *(longlong *)(unaff_RBX + 0x728);
          *(undefined8 *)(lVar21 + 0xc0) = uVar22;
          *(undefined8 *)(lVar21 + 200) = uVar13;
          *(undefined8 *)(lVar21 + 0xd0) = uVar14;
          *(undefined8 *)(lVar21 + 0xd8) = uVar15;
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
        in_stack_00000040 = *(undefined8 *)(lVar21 + 0x2460);
        in_stack_00000048 = *(undefined8 *)(lVar21 + 0x2468);
        puVar25 = &stack0x00000030;
        uStack000000000000007c = 0xffffffffffffffff;
        *(undefined4 *)((longlong)unaff_RBP + -0x4c) = 0;
        uVar23 = 9;
        *(undefined4 *)((longlong)unaff_RBP + -0x44) = 0x3f800000;
        in_stack_00000030 = *(undefined8 *)(lVar21 + 0x2450);
        in_stack_00000038 = *(undefined8 *)(lVar21 + 0x2458);
        unaff_RBP[-0xb] = 0xffffffffffffffff;
        *(undefined1 *)(unaff_RBP + -10) = 0xff;
        uStack0000000000000060 = *(undefined4 *)(lVar21 + 0x2480);
        uStack0000000000000064 = *(undefined4 *)(lVar21 + 0x2484);
        uStack0000000000000068 = *(undefined4 *)(lVar21 + 0x2488);
        uStack000000000000006c = *(undefined4 *)(lVar21 + 0x248c);
        *(undefined4 *)((longlong)unaff_RBP + -0x5c) = 0xffffffff;
        *(undefined8 *)((longlong)unaff_RBP + -0x7c) = 0;
        in_stack_00000050 = *(undefined8 *)(lVar21 + 0x2470);
        in_stack_00000058 = *(undefined8 *)(lVar21 + 0x2478);
        *(undefined8 *)((longlong)unaff_RBP + -0x74) = 0;
        *(undefined8 *)((longlong)unaff_RBP + -0x6c) = 0;
        *(undefined8 *)((longlong)unaff_RBP + -100) = 0;
        in_stack_00000070 = *(undefined8 *)(lVar21 + 0x2490);
        *(undefined4 *)(unaff_RBP + -9) = 0;
        uStack0000000000000078 = 1;
      }
      else {
        uVar22 = *(undefined8 *)(lVar21 + 0x24a8);
        uVar13 = *(undefined8 *)(lVar21 + 0x24b0);
        puVar25 = unaff_RBP + -8;
        *(undefined8 *)((longlong)unaff_RBP + 0xc) = 0xffffffffffffffff;
        *(undefined4 *)((longlong)unaff_RBP + 0x44) = 0;
        uVar23 = 0;
        *(undefined4 *)((longlong)unaff_RBP + 0x4c) = 0x3f800000;
        uVar14 = *(undefined8 *)(lVar21 + 0x2498);
        uVar15 = *(undefined8 *)(lVar21 + 0x24a0);
        unaff_RBP[7] = 0xffffffffffffffff;
        unaff_RBP[-6] = uVar22;
        unaff_RBP[-5] = uVar13;
        *(undefined1 *)(unaff_RBP + 8) = 0xff;
        uVar26 = *(undefined4 *)(lVar21 + 0x24c8);
        uVar3 = *(undefined4 *)(lVar21 + 0x24cc);
        uVar4 = *(undefined4 *)(lVar21 + 0x24d0);
        uVar12 = *(undefined4 *)(lVar21 + 0x24d4);
        *(undefined4 *)((longlong)unaff_RBP + 0x34) = 0xffffffff;
        unaff_RBP[-8] = uVar14;
        unaff_RBP[-7] = uVar15;
        *(undefined8 *)((longlong)unaff_RBP + 0x14) = 0;
        uVar22 = *(undefined8 *)(lVar21 + 0x24b8);
        uVar13 = *(undefined8 *)(lVar21 + 0x24c0);
        *(undefined8 *)((longlong)unaff_RBP + 0x1c) = 0;
        *(undefined8 *)((longlong)unaff_RBP + 0x24) = 0;
        unaff_RBP[-4] = uVar22;
        unaff_RBP[-3] = uVar13;
        *(undefined8 *)((longlong)unaff_RBP + 0x2c) = 0;
        *unaff_RBP = *(undefined8 *)(lVar21 + 0x24d8);
        *(undefined4 *)(unaff_RBP + 9) = 0;
        *(undefined1 *)(unaff_RBP + 1) = 1;
        *(undefined4 *)(unaff_RBP + -2) = uVar26;
        *(undefined4 *)((longlong)unaff_RBP + -0xc) = uVar3;
        *(undefined4 *)(unaff_RBP + -1) = uVar4;
        *(undefined4 *)((longlong)unaff_RBP + -4) = uVar12;
      }
      FUN_18055dcf0(&DAT_180c925a0,*(undefined4 *)(unaff_RBX + 0x10),uVar23,puVar25,
                    (extraout_var | (byte)(uVar18 >> 0x10)) & 1);
    }
  }
FUN_18051f1aa:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[0x16] ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



