#include "TaleWorlds.Native.Split.h"

// 99_part_03_part025.c - 2 个函数

// 函数: void FUN_1801e40a0(longlong param_1,longlong *param_2)
void FUN_1801e40a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  uint *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  char *pcVar17;
  int iVar18;
  char cVar19;
  uint *puVar20;
  longlong *plVar21;
  uint *puVar22;
  undefined *puVar23;
  int iVar24;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_1c8 [32];
  uint *puStack_1a8;
  uint *puStack_1a0;
  uint *puStack_198;
  undefined4 uStack_190;
  int iStack_188;
  longlong lStack_180;
  longlong *plStack_178;
  char cStack_168;
  byte bStack_167;
  uint uStack_164;
  uint *puStack_160;
  uint *puStack_158;
  longlong *plStack_150;
  undefined1 uStack_148;
  undefined *puStack_140;
  undefined1 *puStack_138;
  int iStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined1 *puStack_118;
  int iStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  int iStack_fc;
  uint auStack_f8 [2];
  longlong *plStack_f0;
  undefined *puStack_e8;
  longlong *plStack_e0;
  uint uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  longlong lStack_c0;
  uint *puStack_b8;
  undefined1 uStack_b0;
  uint uStack_a8;
  longlong *plStack_a0;
  uint *puStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  uint auStack_88 [2];
  longlong lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  ulonglong uStack_48;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_1c8;
  plVar21 = (longlong *)0x0;
  uStack_100 = 0;
  bStack_167 = *(byte *)((longlong)param_2 + 0x14);
  uStack_c8 = (undefined4)param_2[2];
  puStack_b8 = (uint *)param_2[1];
  iVar24 = *(int *)((longlong)param_2 + 0xa4);
  puStack_e8 = &UNK_180a3c3e0;
  uStack_d0 = 0;
  plStack_e0 = (longlong *)0x0;
  uStack_d8 = 0;
  lVar12 = param_2[4];
  plVar15 = plVar21;
  iStack_fc = iVar24;
  lStack_c0 = param_1;
  if (lVar12 != 0) {
    uVar7 = *(uint *)(lVar12 + 0x2c0);
    plVar15 = (longlong *)(ulonglong)uVar7;
    plVar8 = plVar21;
    if (*(longlong *)(lVar12 + 0x2b8) == 0) {
LAB_1801e4190:
      if (uVar7 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(plVar8,*(undefined8 *)(lVar12 + 0x2b8),plVar15);
      }
    }
    else if (uVar7 != 0) {
      iVar18 = uVar7 + 1;
      if ((int)(uVar7 + 1) < 0x10) {
        iVar18 = 0x10;
      }
      plVar8 = (longlong *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar18,0x13);
      *(undefined1 *)plVar8 = 0;
      plStack_e0 = plVar8;
      uVar5 = FUN_18064e990(plVar8);
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar5);
      goto LAB_1801e4190;
    }
    if (plVar8 != (longlong *)0x0) {
      *(undefined1 *)((longlong)plVar15 + (longlong)plVar8) = 0;
    }
    uStack_d0 = CONCAT44(*(undefined4 *)(lVar12 + 0x2cc),(undefined4)uStack_d0);
    uStack_d8 = uVar7;
  }
  lStack_80 = -1;
  uStack_78 = 0xffffffff;
  uStack_74 = CONCAT22(uStack_74._2_2_,0xffff);
  uVar7 = 0xffffffff;
  uStack_a8 = 0xffffffff;
  plStack_f0 = (longlong *)0x0;
  plStack_a0 = (longlong *)0x0;
  iVar18 = (int)plVar15;
  cVar19 = 0 < iVar18;
  pcVar2 = *(char **)(*param_2 + 0x18);
  cStack_168 = cVar19;
  if (iVar18 < 1) {
    pcVar17 = "";
    if (pcVar2 != (char *)0x0) {
      pcVar17 = pcVar2;
    }
    cVar1 = *pcVar17;
    uStack_60 = 0x1505;
    while (cVar1 != '\0') {
      pcVar17 = pcVar17 + 1;
      uStack_60 = uStack_60 * 0x21 + (int)cVar1;
      cVar1 = *pcVar17;
    }
    lVar12 = param_2[1];
    uStack_5c = (undefined4)((ulonglong)lVar12 >> 0x20);
    uStack_58 = (undefined4)lVar12;
    uStack_54 = (undefined4)param_2[2];
    uStack_50 = *(undefined2 *)((longlong)param_2 + 0x14);
    uStack_4e = *(undefined1 *)((longlong)param_2 + 0xa4);
    puVar20 = (uint *)FUN_1801c7390(lVar12,&puStack_98,&uStack_60);
    uVar7 = *puVar20;
    plVar21 = *(longlong **)(puVar20 + 2);
    puVar20[2] = 0;
    puVar20[3] = 0;
    plStack_150 = (longlong *)0x0;
    uVar5 = extraout_XMM0_Da;
    plStack_f0 = plVar21;
    uStack_a8 = uVar7;
    plStack_a0 = plVar21;
    if ((longlong *)CONCAT71(uStack_8f,uStack_90) != (longlong *)0x0) {
      uVar5 = (**(code **)(*(longlong *)CONCAT71(uStack_8f,uStack_90) + 0x38))();
    }
  }
  else {
    pcVar17 = "";
    if (pcVar2 != (char *)0x0) {
      pcVar17 = pcVar2;
    }
    cVar19 = *pcVar17;
    auStack_88[0] = 0x1505;
    while (cVar19 != '\0') {
      pcVar17 = pcVar17 + 1;
      auStack_88[0] = auStack_88[0] * 0x21 + (int)cVar19;
      cVar19 = *pcVar17;
    }
    lStack_80 = param_2[1];
    uStack_78 = (undefined4)param_2[2];
    uStack_74 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_70 = *(undefined1 *)((longlong)param_2 + 0xa4);
    uStack_6c = (undefined4)param_2[0x14];
    puVar20 = (uint *)(param_2[4] + 0x360);
    puStack_158 = (uint *)CONCAT71(puStack_158._1_7_,1);
    puStack_160 = puVar20;
    AcquireSRWLockShared(puVar20);
    FUN_1801e1020(param_2[4] + 0x328,&plStack_150,auStack_88);
    if (plStack_150 != (longlong *)(param_2[4] + 0x328)) {
      uVar7 = *(uint *)(plStack_150 + 8);
      uStack_a8 = uVar7;
    }
    uVar5 = ReleaseSRWLockShared(puVar20);
    cVar19 = cStack_168;
  }
  auStack_f8[0] = uVar7;
  if (uVar7 == 0xffffffff) {
LAB_1801e4866:
    if ((*(int *)(_DAT_180c86908 + 0x620) == 0) && (*(int *)(_DAT_180c86908 + 0x690) != 0)) {
      FUN_1801c7500(uVar5,param_2);
    }
    if (*(char *)(_DAT_180c86870 + 0x60) == '\0') {
      lStack_180 = *param_2;
      puVar23 = &DAT_18098bc73;
      if ((undefined *)param_2[0x11] != (undefined *)0x0) {
        puVar23 = (undefined *)param_2[0x11];
      }
      plStack_178 = param_2 + 5;
      uStack_190 = 0xffffffff;
      puStack_198 = &uStack_164;
      puStack_1a0 = puStack_b8;
      puStack_1a8 = (uint *)CONCAT44(puStack_1a8._4_4_,uStack_c8);
      iStack_188 = iVar24;
      lVar12 = FUN_1800a6420(_DAT_180c86938,param_2 + 0xc,puVar23,bStack_167);
      if (lVar12 != 0) {
        puStack_1a0 = auStack_88;
        puStack_1a8 = &uStack_60;
        FUN_1801e6150(param_1,param_2,lVar12,uStack_164);
      }
    }
    else {
      (**(code **)(*(longlong *)*_DAT_180c8aa08 + 0x40))((longlong *)*_DAT_180c8aa08,param_2);
    }
    goto LAB_1801e4b1f;
  }
  puVar20 = *(uint **)(param_1 + 8);
  if (cVar19 != '\0') {
    plVar21 = (longlong *)param_2[4];
  }
  plVar8 = plVar21 + (longlong)iVar24 * 0xe + 2;
  puVar22 = (uint *)(plVar21 + (longlong)iVar24 * 0xe + 0xe);
  puStack_158 = (uint *)CONCAT71(puStack_158._1_7_,1);
  puStack_160 = puVar22;
  AcquireSRWLockShared(puVar22);
  plVar11 = (longlong *)plVar21[(longlong)iVar24 * 0xe + 4];
  plVar16 = plVar8;
  if (plVar11 != (longlong *)0x0) {
    do {
      if ((int)plVar11[4] < (int)uVar7) {
        plVar9 = (longlong *)*plVar11;
      }
      else {
        plVar9 = (longlong *)plVar11[1];
        plVar16 = plVar11;
      }
      plVar11 = plVar9;
    } while (plVar9 != (longlong *)0x0);
    if ((((plVar16 != plVar8) && ((int)plVar16[4] <= (int)uVar7)) &&
        (lVar12 = plVar16[5], lVar12 != 0)) && (*(char *)(lVar12 + 0x81) != '\0')) {
      puVar13 = *(uint **)(lVar12 + 8);
      *(undefined8 *)(puVar20 + 6) = *(undefined8 *)(puVar13 + 6);
      *puVar20 = *puVar13;
      puVar20[1] = puVar13[1];
      puVar20[4] = puVar13[4];
      *(undefined8 *)(puVar20 + 10) = *(undefined8 *)(puVar13 + 10);
      puVar20[8] = puVar13[8];
      *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(puVar13 + 2);
      ReleaseSRWLockShared(puVar22);
      goto LAB_1801e4b1f;
    }
  }
  uVar5 = ReleaseSRWLockShared();
  puStack_160 = (uint *)0x0;
  if ((cStack_168 == '\0') && (plStack_f0 == (longlong *)_DAT_180c8aa08[10])) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  puStack_1a8 = (uint *)CONCAT71(puStack_1a8._1_7_,uVar4);
  FUN_1801c6b50(uVar5,&puStack_140,iStack_fc,uVar7);
  puVar13 = (uint *)0x0;
  if (cStack_168 != '\0') {
    puVar10 = (undefined1 *)0x0;
    puStack_120 = &UNK_180a3c3e0;
    plStack_150 = (longlong *)0x0;
    puStack_118 = (undefined1 *)0x0;
    iStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 1;
    if (plStack_e0 == (longlong *)0x0) {
LAB_1801e44e8:
      if (iVar18 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puVar10,plStack_e0,plVar15);
      }
    }
    else if (iVar18 != 0) {
      iVar6 = iVar18 + 1;
      if (iVar6 < 0x10) {
        iVar6 = 0x10;
      }
      puVar10 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar6,0x13);
      *puVar10 = 0;
      puStack_118 = puVar10;
      plStack_150 = (longlong *)FUN_18064e990(puVar10);
      uStack_108 = CONCAT44(uStack_108._4_4_,(int)plStack_150);
      goto LAB_1801e44e8;
    }
    if (puVar10 != (undefined1 *)0x0) {
      *(undefined1 *)((longlong)plVar15 + (longlong)puVar10) = 0;
    }
    uStack_108 = CONCAT44(uStack_d0._4_4_,(undefined4)uStack_108);
    iStack_110 = iVar18;
    if (0 < iStack_130) {
      uStack_164 = iVar18 + iStack_130;
      if (uStack_164 != 0) {
        uVar7 = uStack_164 + 1;
        if (puVar10 == (undefined1 *)0x0) {
          if ((int)uVar7 < 0x10) {
            uVar7 = 0x10;
          }
          puVar10 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar7,0x13);
          *puVar10 = 0;
        }
        else {
          if (uVar7 <= (uint)plStack_150) goto LAB_1801e458e;
          puStack_1a8 = (uint *)CONCAT71(puStack_1a8._1_7_,0x13);
          puVar10 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puVar10,uVar7,0x10);
        }
        puStack_118 = puVar10;
        plStack_150 = (longlong *)FUN_18064e990(puVar10);
        uStack_108 = CONCAT44(uStack_108._4_4_,(int)plStack_150);
      }
LAB_1801e458e:
                    // WARNING: Subroutine does not return
      memcpy((undefined1 *)((longlong)plVar15 + (longlong)puVar10),puStack_138,
             (longlong)(iStack_130 + 1));
    }
    if (puStack_138 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_128 = CONCAT44(uStack_d0._4_4_,(uint)plStack_150);
    iStack_110 = 0;
    uStack_100 = 0;
    puStack_118 = (undefined1 *)0x0;
    uStack_108 = 0;
    puStack_120 = &UNK_18098bcb0;
    puVar13 = puStack_160;
    puStack_138 = puVar10;
    iStack_130 = iVar18;
  }
  puStack_158 = (uint *)CONCAT71(puStack_158._1_7_,1);
  puStack_160 = puVar22;
  AcquireSRWLockShared(puVar22);
  plVar15 = plVar21 + (longlong)iVar24 * 0xe + 8;
  plVar11 = plVar15;
  plVar16 = (longlong *)plVar21[(longlong)iVar24 * 0xe + 10];
  if ((longlong *)plVar21[(longlong)iVar24 * 0xe + 10] == (longlong *)0x0) {
LAB_1801e4658:
    plVar11 = plVar15;
  }
  else {
    do {
      if ((int)plVar16[4] < (int)uVar7) {
        plVar9 = (longlong *)*plVar16;
      }
      else {
        plVar9 = (longlong *)plVar16[1];
        plVar11 = plVar16;
      }
      plVar16 = plVar9;
    } while (plVar9 != (longlong *)0x0);
    if ((plVar11 == plVar15) || ((int)uVar7 < (int)plVar11[4])) goto LAB_1801e4658;
  }
  if (plVar11 != plVar15) {
    puVar13 = (uint *)plVar11[5];
  }
  uVar5 = ReleaseSRWLockShared(puVar22);
  if (puVar13 == (uint *)0x0) {
    lVar12 = FUN_1801c6d60(uVar5,&puStack_140,&uStack_164);
    plVar15 = plStack_f0;
    if (lVar12 == 0) {
      uStack_148 = 0;
      if (cStack_168 == '\0') {
        plVar21 = plStack_f0 + 0x6c;
        plStack_150 = plVar21;
        AcquireSRWLockExclusive(plVar21);
        uStack_148 = 1;
        puVar20 = (uint *)plVar15[99];
        FUN_1801e6940(puVar20,&puStack_160,&uStack_60);
        puVar22 = puStack_160;
        if (puStack_160 != puVar20) {
          *(longlong *)(puVar20 + 8) = *(longlong *)(puVar20 + 8) + -1;
          func_0x00018066bd70(puStack_160);
          FUN_18066ba00(puVar22,puVar20);
        }
      }
      else {
        plVar21 = (longlong *)(param_2[4] + 0x360);
        plStack_150 = plVar21;
        AcquireSRWLockExclusive(plVar21);
        uStack_148 = 1;
        lVar12 = param_2[4];
        puVar22 = (uint *)(lVar12 + 0x328);
        FUN_1801e1020(puVar22,&puStack_160,auStack_88);
        puVar20 = puStack_160;
        if (puStack_160 != puVar22) {
          plVar15 = (longlong *)(lVar12 + 0x348);
          *plVar15 = *plVar15 + -1;
          func_0x00018066bd70(puStack_160);
          FUN_18066ba00(puVar20,puVar22);
          if (puVar20 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar20);
          }
        }
      }
      uVar5 = ReleaseSRWLockExclusive(plVar21);
      puStack_140 = &UNK_180a3c3e0;
      if (puStack_138 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_138 = (undefined1 *)0x0;
      uStack_128 = uStack_128 & 0xffffffff00000000;
      puStack_140 = &UNK_18098bcb0;
      param_1 = lStack_c0;
      iVar24 = iStack_fc;
      goto LAB_1801e4866;
    }
    *puVar20 = uVar7;
    puVar13 = (uint *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,3);
    puVar13[5] = (uint)bStack_167;
    *(longlong *)puVar13 = lVar12;
    puVar13[4] = uStack_164;
    puVar13[6] = uVar7;
    uStack_b0 = 0;
    puStack_b8 = puVar22;
    AcquireSRWLockExclusive(puVar22);
    uStack_b0 = 1;
    puStack_160 = (uint *)CONCAT44(puStack_160._4_4_,uVar7);
    puStack_158 = puVar13;
    FUN_1801e8ce0(plVar21 + (longlong)iVar24 * 0xe + 8,&puStack_98,&puStack_160);
    uVar5 = ReleaseSRWLockExclusive(puVar22);
  }
  lVar3 = lStack_c0;
  puVar20[4] = puVar13[4];
  lVar12 = *(longlong *)puVar13;
  *(longlong *)(puVar20 + 2) = lVar12;
  *puVar20 = uVar7;
  if (lVar12 == 0) {
    lVar12 = FUN_1801c70b0(uVar5,puVar13,param_2[4],plStack_f0);
    uStack_90 = 1;
    puStack_98 = puVar22;
    AcquireSRWLockShared(puVar22);
    plVar15 = (longlong *)plVar21[(longlong)iVar24 * 0xe + 4];
    plVar11 = plVar8;
    if ((longlong *)plVar21[(longlong)iVar24 * 0xe + 4] == (longlong *)0x0) {
LAB_1801e48c6:
      plVar11 = plVar8;
    }
    else {
      do {
        if ((int)plVar15[4] < (int)uVar7) {
          plVar16 = (longlong *)*plVar15;
        }
        else {
          plVar16 = (longlong *)plVar15[1];
          plVar11 = plVar15;
        }
        plVar15 = plVar16;
      } while (plVar16 != (longlong *)0x0);
      if ((plVar11 == plVar8) || ((int)uVar7 < (int)plVar11[4])) goto LAB_1801e48c6;
    }
    if (plVar11 != plVar8) {
      puVar13 = *(uint **)(plVar11[5] + 8);
      *(undefined8 *)(puVar20 + 6) = *(undefined8 *)(puVar13 + 6);
      *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(puVar13 + 2);
      *puVar20 = *puVar13;
      puVar20[1] = puVar13[1];
      puVar20[4] = puVar13[4];
      *(undefined8 *)(puVar20 + 10) = *(undefined8 *)(puVar13 + 10);
      puVar20[8] = puVar13[8];
    }
    ReleaseSRWLockShared(puVar22);
    lVar3 = lStack_c0;
    if (plVar11 == plVar8) {
      FUN_1801de690(_DAT_180c8aa08,lStack_c0,*(undefined4 *)((longlong)param_2 + 0xa4),lVar12);
      puStack_158 = (uint *)((ulonglong)puStack_158 & 0xffffffffffffff00);
      puStack_160 = puVar22;
      AcquireSRWLockExclusive(puVar22);
      puStack_158 = (uint *)CONCAT71(puStack_158._1_7_,1);
      plVar15 = plVar8;
      plVar21 = (longlong *)plVar21[(longlong)iVar24 * 0xe + 4];
      while (plVar21 != (longlong *)0x0) {
        if ((int)plVar21[4] < (int)uVar7) {
          plVar21 = (longlong *)*plVar21;
        }
        else {
          plVar15 = plVar21;
          plVar21 = (longlong *)plVar21[1];
        }
      }
      if ((plVar15 == plVar8) || ((int)uVar7 < (int)plVar15[4])) {
        puStack_1a8 = auStack_f8;
        puVar14 = (undefined8 *)FUN_180179aa0(plVar8,&puStack_b8);
        plVar15 = (longlong *)*puVar14;
      }
      plVar15[5] = lVar3;
      ReleaseSRWLockExclusive(puVar22);
    }
    if (lVar12 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar12);
    }
  }
  else {
    FUN_1801de690(_DAT_180c8aa08,lStack_c0,*(undefined4 *)((longlong)param_2 + 0xa4));
    puStack_158 = (uint *)((ulonglong)puStack_158 & 0xffffffffffffff00);
    puStack_160 = puVar22;
    AcquireSRWLockExclusive(puVar22);
    puStack_158 = (uint *)CONCAT71(puStack_158._1_7_,1);
    plVar15 = plVar8;
    plVar21 = (longlong *)plVar21[(longlong)iVar24 * 0xe + 4];
    while (plVar21 != (longlong *)0x0) {
      if ((int)plVar21[4] < (int)uVar7) {
        plVar21 = (longlong *)*plVar21;
      }
      else {
        plVar15 = plVar21;
        plVar21 = (longlong *)plVar21[1];
      }
    }
    if ((plVar15 == plVar8) || ((int)uVar7 < (int)plVar15[4])) {
      puStack_1a8 = auStack_f8;
      puVar14 = (undefined8 *)FUN_180179aa0(plVar8,&puStack_b8);
      plVar15 = (longlong *)*puVar14;
    }
    plVar15[5] = lVar3;
    ReleaseSRWLockExclusive(puVar22);
  }
  puStack_140 = &UNK_180a3c3e0;
  if (puStack_138 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_138 = (undefined1 *)0x0;
  uStack_128 = uStack_128 & 0xffffffff00000000;
  puStack_140 = &UNK_18098bcb0;
LAB_1801e4b1f:
  if (plStack_f0 != (longlong *)0x0) {
    (**(code **)(*plStack_f0 + 0x38))();
  }
  puStack_e8 = &UNK_180a3c3e0;
  if (plStack_e0 == (longlong *)0x0) {
    plStack_e0 = (longlong *)0x0;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    puStack_e8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1c8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plStack_e0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801e4b90(longlong *param_1,longlong param_2,longlong param_3,int param_4,
void FUN_1801e4b90(longlong *param_1,longlong param_2,longlong param_3,int param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  longlong lVar16;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong lStackX_18;
  int iStackX_20;
  undefined **ppuVar17;
  undefined *puStack_110;
  undefined1 *puStack_108;
  uint uStack_100;
  undefined8 uStack_f8;
  int iStack_f0;
  longlong **pplStack_e8;
  longlong *plStack_e0;
  longlong lStack_d8;
  undefined *puStack_d0;
  longlong lStack_c8;
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined1 uStack_98;
  undefined *puStack_90;
  longlong lStack_88;
  undefined4 uStack_78;
  undefined *puStack_70;
  longlong lStack_68;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  lStackX_18 = param_3;
  iStackX_20 = param_4;
  FUN_180627ae0(&puStack_70,param_2 + 0x60);
  FUN_180627ae0(&puStack_90,param_2 + 0x80);
  pplStackX_10 = (longlong **)CONCAT44(pplStackX_10._4_4_,(uint)*(ushort *)(param_2 + 0x14));
  plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,*(int *)(param_2 + 0xa4));
  puVar11 = (undefined1 *)0x0;
  puStack_110 = &UNK_180a3c3e0;
  uStack_f8 = 0;
  puStack_108 = (undefined1 *)0x0;
  uStack_100 = 0;
  lVar16 = *(longlong *)(param_2 + 0x20);
  if ((lVar16 == 0) &&
     (lVar16 = *(longlong *)(param_2 + 0x58), iVar9 = *(int *)(param_2 + 0xa4), lVar16 == 0))
  goto LAB_1801e4cc4;
  uVar2 = *(uint *)(lVar16 + 0x2c0);
  if (*(longlong *)(lVar16 + 0x2b8) == 0) {
LAB_1801e4c8e:
    if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar11,*(undefined8 *)(lVar16 + 0x2b8),(ulonglong)uVar2);
    }
  }
  else if (uVar2 != 0) {
    iVar9 = uVar2 + 1;
    if ((int)(uVar2 + 1) < 0x10) {
      iVar9 = 0x10;
    }
    puVar11 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar9,0x13);
    *puVar11 = 0;
    puStack_108 = puVar11;
    uVar8 = FUN_18064e990(puVar11);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar8);
    goto LAB_1801e4c8e;
  }
  if (puVar11 != (undefined1 *)0x0) {
    puVar11[uVar2] = 0;
  }
  uStack_f8 = CONCAT44(*(undefined4 *)(lVar16 + 0x2cc),(undefined4)uStack_f8);
  iVar9 = (int)plStackX_8;
  uStack_100 = uVar2;
LAB_1801e4cc4:
  lStack_d8 = *(longlong *)(param_2 + 0x20);
  puStack_d0 = *(undefined **)(param_2 + 0x58);
  if (lStack_d8 == 0) {
    puVar15 = puStack_d0;
    if (puStack_d0 == (undefined *)0x0) {
      puVar15 = *(undefined **)(_DAT_180c8aa08 + 0x50);
    }
    puVar15 = puVar15 + (longlong)iVar9 * 0x70;
  }
  else {
    puVar15 = (undefined *)((longlong)iVar9 * 0x70 + lStack_d8);
  }
  puVar1 = (undefined8 *)(puVar15 + 0x10);
  piVar3 = (int *)*param_1;
  puStack_b0 = puVar15 + 0x70;
  uStack_a8 = 0;
  AcquireSRWLockExclusive(puStack_b0);
  uStack_a8 = 1;
  puVar12 = *(undefined **)(puVar15 + 0x48);
  do {
    if (puVar12 == puVar15 + 0x40) {
      ReleaseSRWLockExclusive(puVar15 + 0x70);
      iVar9 = iStackX_20;
      *(longlong *)(piVar3 + 2) = lStackX_18;
      piVar3[4] = iStackX_20;
      iVar10 = FUN_1801eb880(puVar1);
      *piVar3 = iVar10;
      iStack_f0 = iVar10;
      cVar6 = FUN_1801de690(_DAT_180c8aa08,param_1,*(undefined4 *)(param_2 + 0xa4),lStackX_18);
      if (cVar6 == '\0') {
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[4] = 0;
      }
      else {
        puStack_a0 = puVar15 + 0x70;
        uStack_98 = 0;
        AcquireSRWLockExclusive(puStack_a0);
        uStack_98 = 1;
        puVar13 = puVar1;
        puVar14 = *(undefined8 **)(puVar15 + 0x20);
        while (puVar14 != (undefined8 *)0x0) {
          if (*(int *)(puVar14 + 4) < iVar10) {
            puVar14 = (undefined8 *)*puVar14;
          }
          else {
            puVar13 = puVar14;
            puVar14 = (undefined8 *)puVar14[1];
          }
        }
        if ((puVar13 == puVar1) || (iVar10 < *(int *)(puVar13 + 4))) {
          puVar13 = (undefined8 *)FUN_180179aa0(puVar1,&pplStack_e8);
          puVar13 = (undefined8 *)*puVar13;
        }
        puVar13[5] = param_1;
        if ((lStack_d8 == 0) && (puStack_d0 == (undefined *)0x0)) {
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
        }
        FUN_1801c6b50(param_1,&puStack_d0,(ulonglong)plStackX_8 & 0xffffffff,iVar10,uVar7);
        lVar16 = lStackX_18;
        ppuVar17 = &puStack_110;
        FUN_1801c5940();
        puStack_d0 = &UNK_180a3c3e0;
        if (lStack_c8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_c8 = 0;
        uStack_b8 = 0;
        puStack_d0 = &UNK_18098bcb0;
        if (*(longlong *)(param_2 + 0x20) == 0) {
          plVar4 = *(longlong **)(param_2 + 0x58);
          if (plVar4 == (longlong *)0x0) {
            FUN_1801c5d30(0,param_5,*piVar3,0,ppuVar17);
          }
          else {
            pplStack_e8 = &plStackX_8;
            plStackX_8 = plVar4;
            (**(code **)(*plVar4 + 0x28))();
            FUN_1801c5e10();
          }
        }
        else {
          FUN_1801c5f20(0,param_6,*piVar3);
        }
        plStack_e0 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,3);
        *(int *)((longlong)plStack_e0 + 0x14) = (int)pplStackX_10;
        *plStack_e0 = lVar16;
        *(int *)(plStack_e0 + 2) = iVar9;
        *(int *)(plStack_e0 + 3) = iVar10;
        pplStack_e8 = (longlong **)CONCAT44(pplStack_e8._4_4_,iVar10);
        FUN_1801e8ce0(puVar15 + 0x40,&puStack_d0,&pplStack_e8);
LAB_1801e5075:
        ReleaseSRWLockExclusive(puStack_b0);
      }
      puStack_110 = &UNK_180a3c3e0;
      if (puVar11 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar11);
      }
      puStack_108 = (undefined1 *)0x0;
      uStack_f8 = uStack_f8 & 0xffffffff00000000;
      puStack_110 = &UNK_18098bcb0;
      puStack_90 = &UNK_180a3c3e0;
      if (lStack_88 == 0) {
        lStack_88 = 0;
        uStack_78 = 0;
        puStack_90 = &UNK_18098bcb0;
        puStack_70 = &UNK_180a3c3e0;
        if (lStack_68 == 0) {
          return;
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    plVar4 = *(longlong **)(puVar12 + 0x28);
    if (((((int)pplStackX_10 == *(int *)((longlong)plVar4 + 0x14)) && ((int)plVar4[2] == iStackX_20)
         ) && (*plVar4 != 0)) &&
       (iVar9 = memcmp(lStackX_18,*plVar4,(longlong)iStackX_20), iVar9 == 0)) {
      if (lStackX_18 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lStackX_18);
      }
      *piVar3 = (int)plVar4[3];
      if (lStack_d8 == 0) {
        if (puStack_d0 == (undefined *)0x0) {
          FUN_1801c5d30();
        }
        else {
          pplStackX_10 = &plStackX_8;
          plStackX_8 = *(longlong **)(param_2 + 0x58);
          if (plStackX_8 != (longlong *)0x0) {
            (**(code **)(*plStackX_8 + 0x28))();
          }
          FUN_1801c5e10();
        }
      }
      else {
        FUN_1801c5f20();
      }
      *(longlong *)(piVar3 + 2) = *plVar4;
      piVar3[4] = (int)plVar4[2];
      puVar14 = *(undefined8 **)(puVar15 + 0x20);
      if (puVar14 == (undefined8 *)0x0) goto LAB_1801e4e29;
      puVar13 = puVar1;
      do {
        if (*(int *)(puVar14 + 4) < (int)plVar4[3]) {
          puVar14 = (undefined8 *)*puVar14;
        }
        else {
          puVar13 = puVar14;
          puVar14 = (undefined8 *)puVar14[1];
        }
      } while (puVar14 != (undefined8 *)0x0);
      if ((puVar13 == puVar1) || ((int)plVar4[3] < *(int *)(puVar13 + 4))) {
LAB_1801e4e29:
        puVar13 = puVar1;
      }
      if (((puVar13 == puVar1) || (plVar5 = (longlong *)puVar13[5], plVar5 == (longlong *)0x0)) ||
         (*(char *)((longlong)plVar5 + 0x81) == '\0')) {
        FUN_1801de690(_DAT_180c8aa08,param_1,*(undefined4 *)(param_2 + 0xa4),*plVar4);
        pplStack_e8 = (longlong **)CONCAT44(pplStack_e8._4_4_,(int)plVar4[3]);
        plStack_e0 = param_1;
        FUN_1801e8ce0(puVar1,&puStack_a0,&pplStack_e8);
      }
      else {
        *(undefined8 *)(piVar3 + 6) = *(undefined8 *)(*plVar5 + 0x18);
        *(undefined8 *)(piVar3 + 10) = *(undefined8 *)(*(longlong *)puVar13[5] + 0x28);
      }
      goto LAB_1801e5075;
    }
    puVar12 = (undefined *)func_0x00018066bd70(puVar12);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




