#include "TaleWorlds.Native.Split.h"

// 03_rendering_part036.c - 1 个函数

// 函数: void FUN_180288040(undefined8 *param_1)
void FUN_180288040(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_1e8 [32];
  uint uStack_1c8;
  longlong *plStack_1c0;
  longlong *plStack_1b8;
  longlong *plStack_1b0;
  longlong *plStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  longlong *plStack_190;
  longlong *plStack_188;
  undefined *puStack_180;
  longlong lStack_178;
  undefined4 uStack_168;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined2 uStack_148;
  undefined1 uStack_146;
  undefined4 uStack_144;
  undefined1 uStack_140;
  undefined8 uStack_138;
  longlong alStack_130 [3];
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  longlong alStack_d0 [3];
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_108 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_1e8;
  uStack_1c8 = 0;
  puStack_100 = param_1;
  FUN_180244190();
  *param_1 = &UNK_180a16dc0;
  plVar1 = param_1 + 0x1f;
  *plVar1 = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 3;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  plVar9 = param_1 + 0x27;
  *plVar9 = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 3;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 1;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  uVar6 = _DAT_180c86930;
  puStack_f8 = &UNK_1809fcc58;
  puStack_f0 = auStack_e0;
  auStack_e0[0] = 0;
  uStack_e8 = 0x23;
  plStack_1a8 = plVar9;
  strcpy_s(auStack_e0,0x40,&UNK_180a16c68);
  FUN_1800b30d0(uVar6,&plStack_1b0,&puStack_f8,1);
  uStack_1c8 = 1;
  puStack_f8 = &UNK_18098bcb0;
  uVar12 = FUN_18022cb40(plStack_1b0,&plStack_1b8);
  uVar10 = 0;
  uStack_1c8 = 0;
  if (plStack_1b0 != (longlong *)0x0) {
    uVar12 = (**(code **)(*plStack_1b0 + 0x38))();
  }
  puVar2 = (undefined8 *)FUN_1800bf050(uVar12,&plStack_188);
  puVar2 = (undefined8 *)FUN_1800763c0(*puVar2,&plStack_190);
  uVar6 = *puVar2;
  *puVar2 = 0;
  plStack_1c0 = (longlong *)param_1[0x24];
  param_1[0x24] = uVar6;
  if (plStack_1c0 != (longlong *)0x0) {
    (**(code **)(*plStack_1c0 + 0x38))();
  }
  if (plStack_190 != (longlong *)0x0) {
    (**(code **)(*plStack_190 + 0x38))();
  }
  if (plStack_188 != (longlong *)0x0) {
    (**(code **)(*plStack_188 + 0x38))();
  }
  if ((param_1[0x24] != 0) && (plStack_1b8 != (longlong *)0x0)) {
    FUN_180288f30(param_1,&plStack_1b0);
    *(uint *)(plStack_1b0 + 0x65) = *(uint *)(plStack_1b0 + 0x65) | 0x20000000;
    if (plStack_1b0 != (longlong *)0x0) {
      FUN_18022cd30(plStack_1b8,0);
    }
    *(uint *)(plStack_1b8 + 0x27) = *(uint *)(plStack_1b8 + 0x27) | 0x20;
    FUN_180076910(param_1[0x24],&plStack_1b8);
    plVar9 = (longlong *)(param_1[0x28] - *plVar9 >> 5);
    iStack_198 = 0;
    plStack_1a8 = plVar9;
    if (0 < (int)plVar9) {
      do {
        iVar7 = iStack_198;
        puVar3 = (undefined8 *)0x0;
        FUN_180627ae0(&puStack_180,(longlong)iStack_198 * 0x20 + param_1[0x27]);
        FUN_1800b08e0(_DAT_180c86930,&plStack_1c0,&puStack_180,1);
        *(uint *)(plStack_1c0 + 0x65) = *(uint *)(plStack_1c0 + 0x65) | 0x20000000;
        puVar2 = (undefined8 *)param_1[0x20];
        if (puVar2 < (undefined8 *)param_1[0x21]) {
          param_1[0x20] = puVar2 + 1;
          *puVar2 = plStack_1c0;
          if (plStack_1c0 != (longlong *)0x0) {
            (**(code **)(*plStack_1c0 + 0x28))(plStack_1c0);
          }
        }
        else {
          puVar4 = (undefined8 *)*plVar1;
          lVar5 = (longlong)puVar2 - (longlong)puVar4 >> 3;
          if (lVar5 == 0) {
            lVar5 = 1;
LAB_18028834f:
            puVar3 = (undefined8 *)
                     FUN_18062b420(_DAT_180c8ed18,lVar5 * 8,*(undefined1 *)(param_1 + 0x22));
            puVar2 = (undefined8 *)param_1[0x20];
            puVar4 = (undefined8 *)*plVar1;
            puVar11 = puVar3;
          }
          else {
            lVar5 = lVar5 * 2;
            puVar11 = puVar3;
            if (lVar5 != 0) goto LAB_18028834f;
          }
          for (; puVar4 != puVar2; puVar4 = puVar4 + 1) {
            *puVar3 = *puVar4;
            *puVar4 = 0;
            puVar3 = puVar3 + 1;
          }
          *puVar3 = plStack_1c0;
          if (plStack_1c0 != (longlong *)0x0) {
            (**(code **)(*plStack_1c0 + 0x28))(plStack_1c0);
          }
          plVar9 = (longlong *)param_1[0x20];
          plVar8 = (longlong *)*plVar1;
          if (plVar8 != plVar9) {
            do {
              if ((longlong *)*plVar8 != (longlong *)0x0) {
                (**(code **)(*(longlong *)*plVar8 + 0x38))();
              }
              plVar8 = plVar8 + 1;
            } while (plVar8 != plVar9);
            plVar8 = (longlong *)*plVar1;
          }
          if (plVar8 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(plVar8);
          }
          *plVar1 = (longlong)puVar11;
          param_1[0x20] = puVar3 + 1;
          param_1[0x21] = puVar11 + lVar5;
          plVar9 = plStack_1a8;
          iVar7 = iStack_198;
        }
        if (iVar7 == 0) {
          if (plStack_1c0 != (longlong *)0x0) {
            uVar6 = 0;
LAB_18028843a:
            FUN_18022cd30(*(undefined8 *)(param_1[0x24] + 0x1b8),uVar6);
          }
        }
        else if ((iVar7 == 1) && (plStack_1c0 != (longlong *)0x0)) {
          uVar6 = 1;
          goto LAB_18028843a;
        }
        if (((int)plVar9 == 1) && (plStack_1c0 != (longlong *)0x0)) {
          FUN_18022cd30(*(undefined8 *)(param_1[0x24] + 0x1b8),(ulonglong)plVar9 & 0xffffffff);
        }
        if (plStack_1c0 != (longlong *)0x0) {
          (**(code **)(*plStack_1c0 + 0x38))();
        }
        puStack_180 = &UNK_180a3c3e0;
        if (lStack_178 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_178 = 0;
        uStack_168 = 0;
        puStack_180 = &UNK_18098bcb0;
        iStack_198 = iVar7 + 1;
        uVar10 = uStack_1c8;
      } while (iStack_198 < (int)plVar9);
    }
    puStack_f8 = (undefined *)0x0;
    puStack_f0 = (undefined1 *)0xffffffff00000000;
    uStack_e8 = CONCAT13(uStack_e8._3_1_,1);
    uStack_e4 = 0xffffffff;
    auStack_e0[0] = 1;
    uStack_d8 = 0;
    plStack_1a8 = alStack_d0;
    alStack_d0[0] = 0;
    alStack_d0[1] = 0;
    alStack_d0[2] = 0;
    uStack_b8 = 3;
    uStack_b0 = 0;
    FUN_180076c50(param_1[0x24],&puStack_f8);
    plStack_1a8 = alStack_d0;
    if (alStack_d0[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (plStack_1b0 != (longlong *)0x0) {
      (**(code **)(*plStack_1b0 + 0x38))();
    }
  }
  uVar6 = _DAT_180c86930;
  puStack_98 = &UNK_1809fcc58;
  puStack_90 = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 0xb;
  strcpy_s(auStack_80,0x40,&UNK_180a16c28);
  FUN_1800b30d0(uVar6,&plStack_1c0,&puStack_98,1);
  uStack_1c8 = uVar10 & 0xffffffef | 8;
  puStack_98 = &UNK_18098bcb0;
  puVar2 = (undefined8 *)FUN_18022cb40(plStack_1c0,&iStack_198);
  plVar1 = (longlong *)*puVar2;
  *puVar2 = 0;
  plStack_1a8 = plStack_1b8;
  uVar12 = extraout_XMM0_Da;
  if (plStack_1b8 != (longlong *)0x0) {
    lVar5 = *plStack_1b8;
    plStack_1b8 = plVar1;
    uVar12 = (**(code **)(lVar5 + 0x38))();
    plVar1 = plStack_1b8;
  }
  plStack_1b8 = plVar1;
  if ((longlong *)CONCAT44(uStack_194,iStack_198) != (longlong *)0x0) {
    uVar12 = (**(code **)(*(longlong *)CONCAT44(uStack_194,iStack_198) + 0x38))();
  }
  uStack_1c8 = uVar10 & 0xffffffe7;
  if (plStack_1c0 != (longlong *)0x0) {
    uVar12 = (**(code **)(*plStack_1c0 + 0x38))();
  }
  puVar2 = (undefined8 *)FUN_1800bf6c0(uVar12,&plStack_190);
  puVar2 = (undefined8 *)FUN_1800763c0(*puVar2,&plStack_188);
  uVar6 = *puVar2;
  *puVar2 = 0;
  plStack_1a8 = (longlong *)param_1[0x25];
  param_1[0x25] = uVar6;
  if (plStack_1a8 != (longlong *)0x0) {
    (**(code **)(*plStack_1a8 + 0x38))();
  }
  if (plStack_188 != (longlong *)0x0) {
    (**(code **)(*plStack_188 + 0x38))();
  }
  if (plStack_190 != (longlong *)0x0) {
    (**(code **)(*plStack_190 + 0x38))();
  }
  FUN_180076910(param_1[0x25],&plStack_1b8);
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_14c = 0xffffffff;
  uStack_148 = 1;
  uStack_146 = 0;
  uStack_144 = 0xffffffff;
  uStack_140 = 1;
  uStack_138 = 0;
  plStack_1a8 = alStack_130;
  alStack_130[0] = 0;
  alStack_130[1] = 0;
  alStack_130[2] = 0;
  uStack_118 = 3;
  uStack_110 = 0;
  FUN_180076c50(param_1[0x25],&uStack_158);
  plStack_1a8 = (longlong *)0x3dcccccd00000000;
  uStack_1a0 = 0;
  uStack_19c = 0x7f7fffff;
  FUN_1800c12e0(param_1[0x25],&plStack_1a8);
  FUN_1800b6620();
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0xc0a00000;
  plStack_1a8 = alStack_130;
  if (alStack_130[0] == 0) {
    if (plStack_1b8 != (longlong *)0x0) {
      (**(code **)(*plStack_1b8 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1e8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



undefined8 * FUN_180288790(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = &UNK_180a16dc0;
  plVar1 = (longlong *)param_1[0x25];
  param_1[0x25] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (longlong *)param_1[0x24];
  param_1[0x24] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  FUN_18005d580();
  if ((longlong *)param_1[0x25] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x25] + 0x38))();
  }
  if ((longlong *)param_1[0x24] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x24] + 0x38))();
  }
  FUN_180057830();
  FUN_180244780(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x160);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180288880(longlong param_1,longlong param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  byte bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined2 uStack_208;
  undefined1 uStack_206;
  undefined4 uStack_204;
  undefined1 uStack_200;
  undefined8 uStack_1f8;
  longlong lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined2 uStack_1b8;
  undefined1 uStack_1b6;
  undefined4 uStack_1b4;
  undefined1 uStack_1b0;
  undefined8 uStack_1a8;
  longlong lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined2 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined2 uStack_144;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined1 uStack_124;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uStack_108 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x11c) != '\0') {
    *(undefined1 *)(param_1 + 0x11c) = 0;
    *(float *)(param_1 + 0x15c) = (float)_DAT_180c8ed30 * 1e-05;
  }
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_180289f50();
  }
  uStack_1c8 = 0;
  bVar19 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0xffffffff;
  uStack_1b8 = 1;
  uStack_1b6 = 0;
  uStack_1b4 = 0xffffffff;
  uStack_1b0 = 1;
  uStack_1a8 = 0;
  lStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 3;
  uStack_180 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_20c = 0xffffffff;
  uStack_208 = 1;
  uStack_206 = 0;
  uStack_204 = 0xffffffff;
  uStack_200 = 1;
  uStack_1f8 = 0;
  lStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 3;
  uStack_1d0 = 0;
  FUN_180076c50(*(undefined8 *)(param_1 + 0x120),&uStack_1c8);
  FUN_180076c50(*(undefined8 *)(param_1 + 0x128),&uStack_218);
  FUN_1800b6620();
  lVar15 = FUN_1800daa50();
  FUN_180094b30(lVar15,&DAT_180a16c50);
  plVar4 = *(longlong **)(_DAT_180c86938 + 0x121e0);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  plVar5 = *(longlong **)(lVar15 + 0x9690);
  *(longlong **)(lVar15 + 0x9690) = plVar4;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x38))();
  }
  plVar4 = *(longlong **)(lVar15 + 0x96a8);
  *(undefined8 *)(lVar15 + 0x96a8) = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  uVar8 = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)(lVar15 + 0x11c18) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)(lVar15 + 0x11c20) = uVar8;
  *(undefined8 *)(lVar15 + 0x11c28) = *(undefined8 *)(param_1 + 0x2c);
  lVar9 = _DAT_180c86950;
  fVar2 = *(float *)(_DAT_180c86950 + 0x17ec);
  fVar20 = fVar2 / *(float *)(_DAT_180c86950 + 0x17f0);
  fVar22 = 0.0;
  fVar21 = 1.0;
  fVar24 = 0.0;
  fVar23 = 1.0;
  if (fVar20 <= 1.7777778) {
    fVar20 = 0.5625 / (1.0 / fVar20);
    fVar23 = (fVar20 + 1.0) * 0.5;
    fVar24 = (1.0 - fVar20) * 0.5;
  }
  else {
    fVar21 = (1.7777778 / fVar20 + 1.0) * 0.5;
    fVar22 = (1.0 - 1.7777778 / fVar20) * 0.5;
  }
  fVar20 = *(float *)(_DAT_180c86950 + 0x17f0);
  fVar24 = fVar24 * *(float *)(_DAT_180c86950 + 0x17f0);
  *(float *)(lVar15 + 0x11c18) = fVar22 * fVar2;
  *(float *)(lVar15 + 0x11c1c) = fVar24;
  *(float *)(lVar15 + 0x11c20) = fVar21 * fVar2 - fVar22 * fVar2;
  *(float *)(lVar15 + 0x11c24) = fVar23 * fVar20 - fVar24;
  *(undefined4 *)(lVar15 + 0x11cf0) = 0x1000000;
  *(undefined2 *)(lVar15 + 0x11c36) = 0x100;
  *(undefined1 *)(lVar15 + 0x9a31) = 0;
  uVar13 = *(uint *)(param_1 + 0xcc);
  *(uint *)(lVar15 + 4) = uVar13 | 0x10010082;
  if (*(char *)(param_1 + 0xf0) == '\0') {
    uVar13 = uVar13 | 0x10010083;
  }
  else {
    uVar13 = uVar13 & 0xfffffffe | 0x10010082;
  }
  *(uint *)(lVar15 + 4) = uVar13;
  *(float *)(lVar15 + 0x124e4) = (float)(_DAT_180c8ed30 % 1000000000) * 1e-05;
  lVar18 = 2;
  puVar10 = (undefined8 *)(lVar9 + 0x16a0);
  puVar11 = (undefined8 *)(lVar15 + 0x30);
  do {
    puVar17 = puVar11;
    puVar16 = puVar10;
    uVar8 = puVar16[1];
    *puVar17 = *puVar16;
    puVar17[1] = uVar8;
    uVar8 = puVar16[3];
    puVar17[2] = puVar16[2];
    puVar17[3] = uVar8;
    uVar8 = puVar16[5];
    puVar17[4] = puVar16[4];
    puVar17[5] = uVar8;
    uVar8 = puVar16[7];
    puVar17[6] = puVar16[6];
    puVar17[7] = uVar8;
    uVar8 = puVar16[9];
    puVar17[8] = puVar16[8];
    puVar17[9] = uVar8;
    uVar8 = puVar16[0xb];
    puVar17[10] = puVar16[10];
    puVar17[0xb] = uVar8;
    uVar8 = puVar16[0xd];
    puVar17[0xc] = puVar16[0xc];
    puVar17[0xd] = uVar8;
    uVar8 = puVar16[0xf];
    puVar17[0xe] = puVar16[0xe];
    puVar17[0xf] = uVar8;
    lVar18 = lVar18 + -1;
    puVar10 = puVar16 + 0x10;
    puVar11 = puVar17 + 0x10;
  } while (lVar18 != 0);
  uVar8 = puVar16[0x11];
  puVar17[0x10] = puVar16[0x10];
  puVar17[0x11] = uVar8;
  uVar8 = puVar16[0x13];
  puVar17[0x12] = puVar16[0x12];
  puVar17[0x13] = uVar8;
  uVar14 = *(undefined4 *)((longlong)puVar16 + 0xa4);
  uVar6 = *(undefined4 *)(puVar16 + 0x15);
  uVar7 = *(undefined4 *)((longlong)puVar16 + 0xac);
  *(undefined4 *)(puVar17 + 0x14) = *(undefined4 *)(puVar16 + 0x14);
  *(undefined4 *)((longlong)puVar17 + 0xa4) = uVar14;
  *(undefined4 *)(puVar17 + 0x15) = uVar6;
  *(undefined4 *)((longlong)puVar17 + 0xac) = uVar7;
  uVar14 = *(undefined4 *)((longlong)puVar16 + 0xb4);
  uVar6 = *(undefined4 *)(puVar16 + 0x17);
  uVar7 = *(undefined4 *)((longlong)puVar16 + 0xbc);
  *(undefined4 *)(puVar17 + 0x16) = *(undefined4 *)(puVar16 + 0x16);
  *(undefined4 *)((longlong)puVar17 + 0xb4) = uVar14;
  *(undefined4 *)(puVar17 + 0x17) = uVar6;
  *(undefined4 *)((longlong)puVar17 + 0xbc) = uVar7;
  FUN_18024b8d0(lVar15);
  if (*(char *)(param_1 + 0xdc) != '\0') {
    *(uint *)(lVar15 + 4) = *(uint *)(lVar15 + 4) | 0x40000;
  }
  *(undefined4 *)(lVar15 + 0x9a2c) = 10000;
  uStack_b8 = 0x3f800000;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0x3f800000;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0x3f800000;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_80 = 0x3f80000000000000;
  uStack_f8 = 0x3d377777;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0x3da314dc;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0x3f800000;
  uStack_cc = 0;
  uStack_c8 = 0x3f5c28f6;
  uStack_c4 = 0x3e000000;
  uStack_c0 = 0;
  uStack_bc = 0x7f7fffff;
  *(undefined1 *)(lVar15 + 0x1c60) = 1;
  uStack_78 = uStack_f8;
  uStack_74 = uStack_f4;
  uStack_70 = uStack_f0;
  uStack_6c = uStack_ec;
  uStack_68 = uStack_e8;
  uStack_64 = uStack_e4;
  uStack_60 = uStack_e0;
  uStack_5c = uStack_dc;
  uStack_58 = uStack_d8;
  uStack_54 = uStack_d4;
  uStack_50 = uStack_d0;
  uStack_4c = uStack_cc;
  uVar12 = func_0x0001800e2bf0(_DAT_180c86890,lVar15);
  *(undefined1 *)(lVar15 + 0x1c61) = uVar12;
  if (*(int *)(lVar15 + 8) != -1) {
    bVar19 = (byte)*(undefined4 *)(lVar15 + 0x18);
  }
  *(byte *)(lVar15 + 0x1c62) = bVar19 & 1;
  uVar14 = func_0x00018024c420(lVar15);
  *(undefined4 *)(lVar15 + 0x1c64) = uVar14;
  uStack_178 = 0;
  uStack_170 = 0xffffffff;
  uStack_16c = 0xff00;
  uStack_168 = 0;
  uStack_160 = 0xffffffffffffffff;
  uStack_158 = 0xffffffff;
  uStack_154 = 0xff;
  uStack_150 = 0xffffffff;
  uStack_14c = 0;
  uStack_144 = 0x400;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_110 = 0;
  if (*(char *)(param_1 + 0xf0) == '\0') {
    FUN_180077750(*(undefined8 *)(param_1 + 0x120),lVar15,&uStack_b8,0,&uStack_178);
  }
  FUN_180077750(*(undefined8 *)(param_1 + 0x128),lVar15,&uStack_f8,0,&uStack_178);
  LOCK();
  piVar1 = (int *)(param_2 + 0x11a48);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  *(longlong *)(param_2 + 0x9a48 + (longlong)iVar3 * 8) = lVar15;
  uVar14 = *(undefined4 *)(param_2 + 0x9a38);
  uVar6 = *(undefined4 *)(param_2 + 0x9a3c);
  uVar7 = *(undefined4 *)(param_2 + 0x9a40);
  *(undefined4 *)(lVar15 + 0x9a34) = *(undefined4 *)(param_2 + 0x9a34);
  *(undefined4 *)(lVar15 + 0x9a38) = uVar14;
  *(undefined4 *)(lVar15 + 0x9a3c) = uVar6;
  *(undefined4 *)(lVar15 + 0x9a40) = uVar7;
  if (lStack_1f0 == 0) {
    if (lStack_1a0 == 0) {
      return lVar15;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



undefined8 *
FUN_180288e60(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0x16,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (undefined8 *)param_2[1];
  *puVar1 = 0x6964616f4c6c6772;
  puVar1[1] = 0x65657263735f676e;
  *(undefined4 *)(puVar1 + 2) = 0x69765f6e;
  *(undefined2 *)((longlong)puVar1 + 0x14) = 0x7765;
  *(undefined1 *)((longlong)puVar1 + 0x16) = 0;
  *(undefined4 *)(param_2 + 2) = 0x16;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180288f00(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  FUN_180077040(*(undefined8 *)(param_1 + 0x120));
  lVar4 = *(longlong *)(param_1 + 0x128);
  if (*(longlong *)(lVar4 + 0x1b8) != 0) {
    lVar7 = 0xb8;
    lVar6 = _DAT_180c86870;
    do {
      lVar3 = *(longlong *)(lVar7 + *(longlong *)(lVar4 + 0x1b8));
      if ((((lVar3 != 0) && (*(longlong *)(*(longlong *)(lVar4 + 0x1b8) + 0x328 + lVar7) == 0)) &&
          ((*(uint *)(lVar3 + 0x328) & 0x20000000) == 0)) && (*(longlong *)(lVar3 + 0x370) == 0)) {
        if (*(longlong *)(lVar3 + 0x1d8) == 0) {
          FUN_18023b050(lVar3,0);
          lVar6 = _DAT_180c86870;
          piVar1 = (int *)(*(longlong *)(lVar7 + *(longlong *)(lVar4 + 0x1b8)) + 0x3a8);
          *piVar1 = *piVar1 + 1;
        }
        else if (lVar6 != 0) {
          *(longlong *)(lVar3 + 0x340) = (longlong)*(int *)(lVar6 + 0x224);
        }
      }
      lVar7 = lVar7 + 8;
    } while (lVar7 < 0x138);
  }
  bVar2 = *(byte *)(lVar4 + 0xf9);
  if (bVar2 != 0) {
    if (*(longlong *)(lVar4 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 *)(lVar4 + 0x1d8) = 0;
    LOCK();
    bVar2 = *(byte *)(lVar4 + 0xf9);
    *(byte *)(lVar4 + 0xf9) = 0;
    UNLOCK();
  }
  uVar5 = (ulonglong)bVar2;
  if (*(longlong *)(lVar4 + 0x1e8) != 0) {
    FUN_180080060();
    uVar5 = *(ulonglong *)(lVar4 + 0x1f0);
    *(undefined8 *)(lVar4 + 0x1e8) = 0;
    if (uVar5 != 0) {
      *(byte *)(uVar5 + 0xfe) = *(byte *)(uVar5 + 0xfe) & 0xfb;
    }
  }
  return uVar5;
}



// WARNING: Removing unreachable block (ram,0x000180289429)
// WARNING: Removing unreachable block (ram,0x00018028942e)
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



