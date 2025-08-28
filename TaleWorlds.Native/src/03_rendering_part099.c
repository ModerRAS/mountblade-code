#include "TaleWorlds.Native.Split.h"

// 03_rendering_part099.c - 2 个函数

// 函数: void FUN_1803269f0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
void FUN_1803269f0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  longlong param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  undefined4 uVar26;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined1 auStack_168 [32];
  undefined8 uStack_148;
  char cStack_128;
  char cStack_127;
  char cStack_126;
  longlong *plStack_120;
  longlong *plStack_118;
  undefined4 uStack_110;
  undefined *puStack_108;
  longlong lStack_100;
  ulonglong uStack_f8;
  longlong *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *plStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  longlong lStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  lStack_c0 = param_5;
  uStack_110 = 0;
  uVar18 = param_4 >> 1;
  uVar24 = *(uint *)(param_1 + 0x5c);
  if (((uVar24 & 8) != 0) || (cStack_128 = '\0', (uVar18 & 1) != 0)) {
    cStack_128 = '\x01';
  }
  if (((uVar24 & 0x20) != 0) || (cStack_126 = '\0', (uVar18 & 1) != 0)) {
    cStack_126 = '\x01';
  }
  if (((char)uVar24 < '\0') || (cStack_127 = '\0', (uVar18 & 1) != 0)) {
    cStack_127 = '\x01';
  }
  if (((uVar24 & 4) == 0) && ((uVar18 & 1) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (((uVar24 >> 9 & 1) == 0) && ((uVar18 & 1) == 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (((param_4 >> 2 & 1) == 0) && (bVar9)) {
    puStack_108 = *(undefined **)(param_1 + 0xd0);
    lStack_100 = *(longlong *)(param_1 + 0xd8);
    uStack_f8 = *(ulonglong *)(param_1 + 0xe0);
    plStack_f0 = *(longlong **)(param_1 + 0xe8);
    uStack_e8 = *(undefined8 *)(param_1 + 0xf0);
    uStack_e0 = *(undefined8 *)(param_1 + 0xf8);
    uStack_d8 = *(undefined4 *)(param_1 + 0x100);
    uStack_d4 = *(undefined4 *)(param_1 + 0x104);
    uStack_d0 = *(undefined4 *)(param_1 + 0x108);
    uStack_cc = *(undefined4 *)(param_1 + 0x10c);
    if (param_5 != 0) {
      uStack_148 = CONCAT44(uStack_148._4_4_,
                            1.0 - (*(float *)(param_2 + 0x13c) - *(float *)(param_2 + 0x144)) /
                                  *(float *)(param_2 + 0x13c));
      puVar14 = (undefined8 *)
                FUN_1803310f0(uVar24,&puStack_a8,(undefined8 *)(param_1 + 0xd0),param_5 + 0xd0);
      puStack_108 = (undefined *)*puVar14;
      lStack_100 = puVar14[1];
      uStack_f8 = puVar14[2];
      plStack_f0 = (longlong *)puVar14[3];
      uStack_e8 = puVar14[4];
      uStack_e0 = puVar14[5];
      uStack_d8 = *(undefined4 *)(puVar14 + 6);
      uStack_d4 = *(undefined4 *)((longlong)puVar14 + 0x34);
      uStack_d0 = *(undefined4 *)(puVar14 + 7);
      uStack_cc = *(undefined4 *)((longlong)puVar14 + 0x3c);
    }
    *(undefined4 *)(param_3 + 0x270) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_3 + 0x100) = *(undefined4 *)(param_1 + 0x60);
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_3 + 0x238) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_3 + 0x240) = uVar3;
    uVar26 = *(undefined4 *)(param_1 + 0x94);
    uVar22 = *(undefined4 *)(param_1 + 0x98);
    uVar21 = *(undefined4 *)(param_1 + 0x9c);
    *(undefined4 *)(param_3 + 0x248) = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(param_3 + 0x24c) = uVar26;
    *(undefined4 *)(param_3 + 0x250) = uVar22;
    *(undefined4 *)(param_3 + 0x254) = uVar21;
    FUN_180075630(param_3);
    *(undefined1 *)(param_3 + 0xff) = 0;
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_3 + 0x2a8) = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_3 + 0x2b0) = uVar3;
    uVar26 = *(undefined4 *)(param_1 + 0xb4);
    uVar22 = *(undefined4 *)(param_1 + 0xb8);
    uVar21 = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_3 + 0x2b8) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)(param_3 + 700) = uVar26;
    *(undefined4 *)(param_3 + 0x2c0) = uVar22;
    *(undefined4 *)(param_3 + 0x2c4) = uVar21;
  }
  if ((param_4 >> 2 & 1) != 0) goto LAB_180327215;
  if ((bVar10) && (0 < (int)(*(longlong *)(param_1 + 0x138) - *(longlong *)(param_1 + 0x130) >> 3)))
  {
    if (*(longlong *)(param_3 + 0x2d0) == 0) {
      FUN_1806279c0(&puStack_108,param_3 + 0x10);
      while ((0 < (int)(uint)uStack_f8 && (lVar15 = strstr(lStack_100,&DAT_180a0ff10), lVar15 != 0))
            ) {
        iVar25 = 6;
        iVar13 = (int)lVar15 - (int)lStack_100;
        if ((uint)uStack_f8 < iVar13 + 6U) {
          iVar25 = (uint)uStack_f8 - iVar13;
        }
        uVar24 = iVar13 + iVar25;
        if (uVar24 < (uint)uStack_f8) {
          lVar15 = (longlong)(int)uVar24;
          do {
            *(undefined1 *)((lVar15 - iVar25) + lStack_100) = *(undefined1 *)(lVar15 + lStack_100);
            uVar24 = uVar24 + 1;
            lVar15 = lVar15 + 1;
          } while (uVar24 < (uint)uStack_f8);
        }
        uVar24 = (uint)uStack_f8 - iVar25;
        uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar24);
        *(undefined1 *)((ulonglong)uVar24 + lStack_100) = 0;
      }
      uVar26 = FUN_1800b33d0(_DAT_180c86930,&plStack_118,&puStack_108);
      uStack_110 = 1;
      if (plStack_118 == (longlong *)0x0) {
        if (((uint)uStack_f8 == 0xb) && (iVar13 = strcmp(lStack_100,&UNK_180a03008), iVar13 == 0)) {
          uVar26 = FUN_180626ee0(&UNK_180a02a80,&UNK_180a03008);
        }
        else {
          puVar14 = (undefined8 *)FUN_1800befa0(_DAT_180c86898,&plStack_c8);
          plVar16 = (longlong *)*puVar14;
          *puVar14 = 0;
          plStack_120 = plStack_118;
          uVar26 = extraout_XMM0_Da_00;
          if (plStack_118 != (longlong *)0x0) {
            lVar15 = *plStack_118;
            plStack_118 = plVar16;
            uVar26 = (**(code **)(lVar15 + 0x38))();
            plVar16 = plStack_118;
          }
          plStack_118 = plVar16;
          if (plStack_c8 != (longlong *)0x0) {
            uVar26 = (**(code **)(*plStack_c8 + 0x38))();
          }
        }
      }
      lVar15 = 0;
      uStack_110 = 0;
      if (plStack_118 != (longlong *)0x0) {
        uVar26 = (**(code **)(*plStack_118 + 0x38))();
      }
      puStack_108 = &UNK_180a3c3e0;
      if (lStack_100 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_100 = 0;
      plStack_f0 = (longlong *)((ulonglong)plStack_f0 & 0xffffffff00000000);
      puStack_108 = &UNK_18098bcb0;
      if (*(int *)(param_1 + 0x198) == -1) {
LAB_180326da7:
        lVar17 = FUN_1801efdb0(uVar26,param_3);
        if ((lVar17 == 0) || (*(int *)(lVar17 + 0x18) == 0)) {
LAB_180326e7a:
          uVar22 = plStack_120._0_4_;
          uVar21 = plStack_120._0_4_;
          uVar26 = plStack_120._0_4_;
        }
        else {
          uVar22 = *(undefined4 *)(lVar17 + 0x24);
          uVar21 = *(undefined4 *)(lVar17 + 0x28);
          uVar26 = *(undefined4 *)(lVar17 + 0x2c);
        }
      }
      else {
        plStack_120 = (longlong *)CONCAT44(plStack_120._4_4_,*(int *)(param_1 + 0x198));
        plVar16 = (longlong *)FUN_18033a740(param_2 + 0xb18,&plStack_120);
        plVar16 = (longlong *)*plVar16;
        lVar15 = *plVar16;
        lVar17 = plVar16[0xe];
        if ((int)lVar17 != -1) {
          lVar19 = param_2 + 0xb78;
          lStack_b0 = lVar19;
          iVar13 = _Mtx_lock(lVar19);
          if (iVar13 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar13);
          }
          plStack_120 = (longlong *)CONCAT44(plStack_120._4_4_,(int)lVar17);
          FUN_18033a740(param_2 + 0xb48,&plStack_120);
          iVar13 = _Mtx_unlock(lVar19);
          uVar26 = extraout_XMM0_Da;
          if (iVar13 != 0) {
            uVar26 = __Throw_C_error_std__YAXH_Z(iVar13);
          }
          goto LAB_180326da7;
        }
        uStack_148 = 0;
        plVar16 = (longlong *)FUN_1800b32c0(_DAT_180c86930,&plStack_120,plVar16 + 10,0);
        lVar17 = *plVar16;
        uVar26 = extraout_XMM0_Da_01;
        if (plStack_120 != (longlong *)0x0) {
          uVar26 = (**(code **)(*plStack_120 + 0x38))();
        }
        if (lVar17 == 0) goto LAB_180326da7;
        cVar11 = FUN_1801ef300(uVar26,param_3,lVar17);
        if (cVar11 == '\0') {
          FUN_180626f80(&UNK_180a0fec0);
          goto LAB_180326e7a;
        }
        lVar19 = FUN_1801ef620(extraout_XMM0_Da_02,param_3,lVar17);
        uVar26 = *(undefined4 *)(lVar19 + 0x2c);
        lVar17 = FUN_1801efdb0(extraout_XMM0_Da_03,lVar17);
        uVar22 = *(undefined4 *)(lVar17 + 0x24);
        uVar21 = *(undefined4 *)(lVar17 + 0x28);
      }
      *(uint *)(param_3 + 0x100) = *(uint *)(param_3 + 0x100) | 0x800;
      *(byte *)(param_3 + 0xfe) = *(byte *)(param_3 + 0xfe) & 0xf7;
      bVar12 = 0;
      if (lVar15 == 0) {
        bVar12 = 8;
      }
      *(byte *)(param_3 + 0xfe) = *(byte *)(param_3 + 0xfe) | bVar12;
      *(undefined4 *)(param_3 + 0x108) = uVar26;
      *(undefined4 *)(param_3 + 0x10c) = uVar22;
      *(undefined4 *)(param_3 + 0x110) = uVar21;
      puVar14 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,3);
      *puVar14 = 0;
      *(undefined4 *)(puVar14 + 1) = 0;
      *(undefined4 *)((longlong)puVar14 + 0xc) = 0xffffffff;
      puVar14[2] = 0;
      *(undefined4 *)(puVar14 + 3) = 0;
      *(undefined8 **)(param_3 + 0x2d0) = puVar14;
      param_5 = lStack_c0;
    }
    FUN_180325930(param_2,param_3,param_1 + 0x130,param_1 + 0xc0);
  }
  if (cStack_128 != '\0') {
    uVar24 = *(uint *)(param_1 + 0x6c);
    if (uVar24 != 0) {
      for (puVar20 = *(uint **)(*(longlong *)(param_2 + 0xaf0) +
                               ((ulonglong)uVar24 % (ulonglong)*(uint *)(param_2 + 0xaf8)) * 8);
          puVar20 != (uint *)0x0; puVar20 = *(uint **)(puVar20 + 4)) {
        if (uVar24 == *puVar20) goto LAB_180326f61;
      }
      puVar20 = *(uint **)(*(longlong *)(param_2 + 0xaf0) + *(longlong *)(param_2 + 0xaf8) * 8);
LAB_180326f61:
      uVar3 = *(undefined8 *)(puVar20 + 2);
      if (*(longlong *)(*(longlong *)(param_3 + 0x1b8) + 0x3b8) != 0) {
        FUN_18022cb40(*(longlong *)(param_3 + 0x1b8),&plStack_118);
        plVar16 = plStack_118;
        puStack_a8 = &UNK_1809fcc58;
        puStack_a0 = auStack_90;
        auStack_90[0] = 0;
        uStack_98 = 0x14;
        strcpy_s(auStack_90,0x40,&DAT_180a0d5b8);
        uVar18 = FUN_180240430(plVar16[0x3c],&puStack_a8,1);
        plVar16[0x28] = plVar16[0x28] | uVar18;
        FUN_18022dd60(plVar16);
        *(undefined2 *)(plVar16 + 0x78) = 0xffff;
        puStack_a8 = &UNK_18098bcb0;
        FUN_18022cd30(plStack_118,1,uVar3);
        FUN_180076910(param_3);
        if (plStack_118 != (longlong *)0x0) {
          (**(code **)(*plStack_118 + 0x38))();
        }
      }
    }
  }
  uVar18 = 0;
  if (cStack_127 != '\0') {
    if (*(int *)(*(longlong *)(param_3 + 600) + 0x1c) != *(int *)(param_1 + 0x7c)) {
      *(int *)(*(longlong *)(param_3 + 600) + 0x1c) = *(int *)(param_1 + 0x7c);
      FUN_18007e990(param_3,*(int *)(*(longlong *)(param_3 + 600) + 0x1c) +
                            *(int *)(*(longlong *)(param_3 + 600) + 0x18));
    }
    iVar13 = *(int *)(param_1 + 0x78);
    if ((iVar13 != 0) && (*(int *)(*(longlong *)(param_3 + 600) + 0x18) != (int)(char)iVar13)) {
      FUN_18007e880(param_3,iVar13,*(undefined8 *)(param_1 + 0x170));
    }
    uVar24 = *(uint *)(param_1 + 0x74);
    if (uVar24 != 0) {
      lVar15 = **(longlong **)(param_3 + 600);
      if ((param_5 == 0) || (*(uint *)(param_5 + 0x74) != uVar24)) {
                    // WARNING: Subroutine does not return
        memcpy(lVar15,*(undefined8 *)(param_1 + 0x150),(ulonglong)uVar24 << 6);
      }
      uVar23 = uVar18;
      if (uVar24 != 0) {
        do {
          lVar17 = *(longlong *)(param_1 + 0x150);
          puVar1 = (undefined4 *)(lVar17 + uVar18);
          uVar26 = puVar1[1];
          uVar22 = puVar1[2];
          uVar21 = puVar1[3];
          puVar14 = (undefined8 *)(lVar17 + 0x10 + uVar18);
          uVar3 = *puVar14;
          uVar4 = puVar14[1];
          puVar14 = (undefined8 *)(lVar17 + 0x20 + uVar18);
          uVar5 = *puVar14;
          uVar6 = puVar14[1];
          puVar14 = (undefined8 *)(lVar17 + 0x30 + uVar18);
          uVar7 = *puVar14;
          uVar8 = puVar14[1];
          puVar2 = (undefined4 *)(uVar18 + lVar15);
          *puVar2 = *puVar1;
          puVar2[1] = uVar26;
          puVar2[2] = uVar22;
          puVar2[3] = uVar21;
          puVar14 = (undefined8 *)(uVar18 + 0x10 + lVar15);
          *puVar14 = uVar3;
          puVar14[1] = uVar4;
          puVar14 = (undefined8 *)(uVar18 + 0x20 + lVar15);
          *puVar14 = uVar5;
          puVar14[1] = uVar6;
          puVar14 = (undefined8 *)(uVar18 + 0x30 + lVar15);
          *puVar14 = uVar7;
          puVar14[1] = uVar8;
          uVar24 = (int)uVar23 + 1;
          uVar18 = uVar18 + 0x40;
          uVar23 = (ulonglong)uVar24;
        } while (uVar24 < *(uint *)(param_1 + 0x74));
      }
    }
  }
  if (cStack_126 != '\0') {
    uVar24 = *(uint *)(param_1 + 0x70);
    if (uVar24 != 0) {
      for (puVar20 = *(uint **)(*(longlong *)(param_2 + 0xb50) +
                               ((ulonglong)uVar24 % (ulonglong)*(uint *)(param_2 + 0xb58)) * 8);
          puVar20 != (uint *)0x0; puVar20 = *(uint **)(puVar20 + 4)) {
        if (uVar24 == *puVar20) goto LAB_180327199;
      }
      puVar20 = *(uint **)(*(longlong *)(param_2 + 0xb50) + *(longlong *)(param_2 + 0xb58) * 8);
LAB_180327199:
      plVar16 = *(longlong **)(*(longlong *)(puVar20 + 2) + 8);
      lStack_c0 = 0;
      plStack_f0 = (longlong *)0x0;
      puStack_108 = (undefined *)((ulonglong)puStack_108 & 0xffffffffffffff00);
      uStack_f8 = uStack_f8 & 0xffffffff00000000;
      lStack_100 = param_3;
      FUN_18007f4c0(&puStack_108);
      if (plVar16 != (longlong *)0x0) {
        plStack_c8 = plVar16;
        (**(code **)(*plVar16 + 0x28))(plVar16);
      }
      plStack_c8 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        lVar15 = *plStack_f0;
        plStack_f0 = plVar16;
        (**(code **)(lVar15 + 0x38))();
        plVar16 = plStack_f0;
      }
      plStack_f0 = plVar16;
      FUN_18007f6a0(&puStack_108);
      if (plStack_f0 != (longlong *)0x0) {
        (**(code **)(*plStack_f0 + 0x38))();
      }
    }
  }
LAB_180327215:
  *(byte *)(param_3 + 0xfd) = *(byte *)(param_3 + 0xfd) | 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_168);
}



bool FUN_180327250(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  
  bVar5 = *(int *)(param_1 + 100) != *(int *)(param_2 + 100);
  if (bVar5) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 4;
  }
  bVar6 = *(int *)(param_1 + 0x60) != *(int *)(param_2 + 0x60);
  if (bVar6) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 4;
  }
  fVar7 = 0.0001;
  cVar2 = func_0x000180285f10(param_1 + 0xd0,param_2 + 0xd0);
  if (cVar2 == '\0') {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 4;
  }
  bVar5 = cVar2 == '\0' || (bVar6 || bVar5);
  if (((fVar7 <= ABS(*(float *)(param_1 + 0x80) - *(float *)(param_2 + 0x80))) ||
      (fVar7 <= ABS(*(float *)(param_1 + 0x84) - *(float *)(param_2 + 0x84)))) ||
     (fVar7 <= ABS(*(float *)(param_1 + 0x88) - *(float *)(param_2 + 0x88)))) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 4;
    bVar5 = true;
  }
  if (((fVar7 <= ABS(*(float *)(param_1 + 0x90) - *(float *)(param_2 + 0x90))) ||
      (fVar7 <= ABS(*(float *)(param_1 + 0x94) - *(float *)(param_2 + 0x94)))) ||
     (fVar7 <= ABS(*(float *)(param_1 + 0x98) - *(float *)(param_2 + 0x98)))) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 4;
    bVar5 = true;
  }
  if (((fVar7 <= ABS(*(float *)(param_1 + 0xa0) - *(float *)(param_2 + 0xa0))) ||
      (fVar7 <= ABS(*(float *)(param_1 + 0xa4) - *(float *)(param_2 + 0xa4)))) ||
     (fVar7 <= ABS(*(float *)(param_1 + 0xa8) - *(float *)(param_2 + 0xa8)))) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 4;
    bVar5 = true;
  }
  if (((fVar7 <= ABS(*(float *)(param_1 + 0xb0) - *(float *)(param_2 + 0xb0))) ||
      (fVar7 <= ABS(*(float *)(param_1 + 0xb4) - *(float *)(param_2 + 0xb4)))) ||
     (fVar7 <= ABS(*(float *)(param_1 + 0xb8) - *(float *)(param_2 + 0xb8)))) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 4;
    bVar5 = true;
  }
  if (((fVar7 <= ABS(*(float *)(param_1 + 0xc0) - *(float *)(param_2 + 0xc0))) ||
      (fVar7 <= ABS(*(float *)(param_1 + 0xc4) - *(float *)(param_2 + 0xc4)))) ||
     (fVar7 <= ABS(*(float *)(param_1 + 200) - *(float *)(param_2 + 200)))) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 4;
    bVar5 = true;
  }
  if (*(int *)(param_1 + 0x6c) != *(int *)(param_2 + 0x6c)) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 8;
    bVar5 = true;
  }
  if (*(int *)(param_1 + 0x68) != *(int *)(param_2 + 0x68)) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 8;
    bVar5 = true;
  }
  if (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70)) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x20;
    bVar5 = true;
  }
  uVar1 = *(uint *)(param_1 + 0x74);
  if (uVar1 != *(uint *)(param_2 + 0x74)) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x80;
    bVar5 = true;
  }
  iVar4 = *(int *)(param_1 + 0x78);
  if (iVar4 != *(int *)(param_2 + 0x78)) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x80;
    bVar5 = true;
  }
  if (*(int *)(param_1 + 0x7c) != *(int *)(param_2 + 0x7c)) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x80;
    bVar5 = true;
  }
  if ((uVar1 == *(uint *)(param_2 + 0x74)) &&
     (iVar3 = memcmp(*(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_2 + 0x150),
                     (ulonglong)uVar1 << 6), iVar3 != 0)) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x80;
    bVar5 = true;
  }
  if ((iVar4 == *(int *)(param_2 + 0x78)) &&
     (iVar4 = memcmp(*(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_2 + 0x170),iVar4),
     iVar4 != 0)) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x80;
    bVar5 = true;
  }
  if ((*(uint *)(param_2 + 0x60) & 0x800) != 0) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x200;
    bVar5 = true;
  }
  return bVar5;
}





// 函数: void FUN_180327540(undefined4 *param_1)
void FUN_180327540(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x3f800000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 3) = 0x3f800000;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 7) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0x3f80000000000000;
  param_1[0x18] = 0;
  **(undefined1 **)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



