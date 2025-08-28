#include "TaleWorlds.Native.Split.h"

// 99_part_09_part071.c - 1 个函数

// 函数: void FUN_1805ea790(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,
void FUN_1805ea790(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,
                  char param_5,char param_6,char param_7,char param_8,char param_9,char param_10)

{
  longlong *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  char cVar15;
  int iVar16;
  float *pfVar17;
  uint64_t *puVar18;
  uint64_t uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong *plVar25;
  longlong *plVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  int32_t auStackX_8 [2];
  longlong lStackX_10;
  longlong lStackX_18;
  longlong *plStackX_20;
  char cStack_1d8;
  char cStack_1d7;
  char cStack_1d6;
  char cStack_1d5;
  char acStack_1d4 [4];
  int aiStack_1d0 [2];
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  int32_t uStack_148;
  float fStack_140;
  int32_t uStack_13c;
  int32_t uStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t auStack_120 [2];
  uint64_t uStack_118;
  uint64_t uStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  int32_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  
  uStack_c8 = 0xfffffffffffffffe;
  uVar23 = 0;
  uStack_148 = 0;
  plVar1 = *(longlong **)(param_3 + 0x210);
  lStackX_10 = param_2;
  lStackX_18 = param_3;
  plStackX_20 = param_4;
  FUN_1805ea4b0(param_1,param_4,param_3,acStack_1d4,auStackX_8,&cStack_1d8,&cStack_1d5);
  cStack_1d7 = '\0';
  lVar20 = *(longlong *)(param_3 + 0x10);
  fVar40 = 1.0 / SQRT(*(float *)(lVar20 + 0x70) * *(float *)(lVar20 + 0x70) +
                      *(float *)(lVar20 + 0x74) * *(float *)(lVar20 + 0x74) +
                      *(float *)(lVar20 + 0x78) * *(float *)(lVar20 + 0x78));
  cStack_1d6 = '\0';
  if (((char)param_1[10] < '\0') ||
     (((cStack_1d8 == '\0' || (param_1[0xc] == 0)) && (cStack_1d5 == '\0')))) {
    cStack_1d7 = '\x01';
    lVar20 = *param_1;
    cVar15 = func_0x00018023a100(lVar20 + 0x30);
    if (cVar15 == '\0') {
      *(uint64_t *)(lVar20 + 0x30) = 0x3f800000;
      *(uint64_t *)(lVar20 + 0x38) = 0;
      *(uint64_t *)(lVar20 + 0x40) = 0x3f80000000000000;
      *(uint64_t *)(lVar20 + 0x48) = 0;
      *(int32_t *)(lVar20 + 0x50) = 0;
      *(int32_t *)(lVar20 + 0x54) = 0;
      *(int32_t *)(lVar20 + 0x58) = 0x3f800000;
      *(int32_t *)(lVar20 + 0x5c) = 0;
      *(int32_t *)(lVar20 + 0x60) = 0;
      *(int32_t *)(lVar20 + 100) = 0;
      *(int32_t *)(lVar20 + 0x68) = 0;
      *(int32_t *)(lVar20 + 0x6c) = 0x3f800000;
      FUN_180254610(lVar20);
    }
    plVar25 = (longlong *)param_1[0xc];
    if (plVar25 != (longlong *)0x0) {
      if (*(code **)(*plVar25 + 0x130) == (code *)&UNK_180276a30) {
        iVar16 = (int)plVar25[0x42];
      }
      else {
        iVar16 = (**(code **)(*plVar25 + 0x130))();
      }
      if (iVar16 != 0) {
        uStack_128 = 0;
        (**(code **)(*(longlong *)param_1[0xc] + 0x128))((longlong *)param_1[0xc],&uStack_128);
      }
    }
    plVar25 = (longlong *)param_1[0xd];
    if (plVar25 != (longlong *)0x0) {
      if (*(code **)(*plVar25 + 0x130) == (code *)&UNK_180276a30) {
        iVar16 = (int)plVar25[0x42];
      }
      else {
        iVar16 = (**(code **)(*plVar25 + 0x130))();
      }
      if (iVar16 != 0) {
        uStack_124 = 0;
        (**(code **)(*(longlong *)param_1[0xd] + 0x128))((longlong *)param_1[0xd],&uStack_124);
      }
    }
    plVar25 = (longlong *)param_1[0xe];
    if (plVar25 != (longlong *)0x0) {
      if (*(code **)(*plVar25 + 0x130) == (code *)&UNK_180276a30) {
        iVar16 = (int)plVar25[0x42];
      }
      else {
        iVar16 = (**(code **)(*plVar25 + 0x130))();
      }
      if (iVar16 != 0) {
        auStack_120[0] = 0;
        (**(code **)(*(longlong *)param_1[0xe] + 0x128))((longlong *)param_1[0xe],auStack_120);
      }
    }
    plVar25 = (longlong *)param_1[0xf];
    if (plVar25 != (longlong *)0x0) {
      if (*(code **)(*plVar25 + 0x130) == (code *)&UNK_180276a30) {
        iVar16 = (int)plVar25[0x42];
      }
      else {
        iVar16 = (**(code **)(*plVar25 + 0x130))();
      }
      if (iVar16 != 0) {
        fStack_140 = 0.0;
        (**(code **)(*(longlong *)param_1[0xf] + 0x128))((longlong *)param_1[0xf],&fStack_140);
      }
    }
  }
  else {
    if (cStack_1d8 == '\0') {
      plVar25 = (longlong *)param_1[0xe];
      if (param_1[0xe] == 0) {
        plVar26 = (longlong *)0x0;
      }
      else {
        plVar26 = (longlong *)param_1[0xf];
      }
    }
    else {
      plVar25 = (longlong *)param_1[0xc];
      plVar26 = (longlong *)param_1[0xd];
    }
    fStack_188 = 1.0;
    if (param_6 == '\0') {
      fStack_188 = fVar40;
    }
    pfVar17 = (float *)(param_1 + 0x29);
    if (plVar25 == (longlong *)0x0) {
      pfVar17 = (float *)&system_data_02f0;
    }
    fStack_158 = *pfVar17;
    fStack_154 = pfVar17[1];
    fStack_150 = pfVar17[2];
    uStack_118._0_4_ = *pfVar17;
    uStack_118._4_4_ = pfVar17[1];
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    fStack_184 = 0.0;
    fStack_180 = 0.0;
    fStack_17c = 0.0;
    fStack_178 = 0.0;
    fStack_170 = 0.0;
    fStack_16c = 0.0;
    uStack_1c8 = 0;
    uStack_1c0 = (ulonglong)(uint)fStack_188;
    fStack_168 = 0.0;
    fStack_164 = 0.0;
    fStack_15c = 0.0;
    uStack_110 = CONCAT44(0x3f800000,pfVar17[2]);
    fStack_14c = 1.0;
    fStack_174 = fStack_188;
    fStack_160 = fStack_188;
    fStack_140 = fStack_188;
    if (plVar25 == (longlong *)0x0) {
      FUN_1804c31d0((longlong)*(int *)((longlong)param_1 + 0x16c) * 200 + _DAT_180c961b0,param_1 + 6
                    ,param_1 + 10);
      lVar20 = *(longlong *)(*param_1 + 0x260);
      if (lVar20 != 0) {
        lVar20 = *(longlong *)(lVar20 + 0x18) + -0xd0 + (longlong)*(char *)(lVar20 + 0x20) * 0x100;
        FUN_18063b5f0(&uStack_118);
        fVar35 = *(float *)(lVar20 + 0x10);
        fVar36 = *(float *)(lVar20 + 0x14);
        fVar32 = *(float *)(lVar20 + 0x18);
        fVar37 = fStack_108 * fStack_188;
        fVar38 = fStack_108 * fStack_184;
        fVar39 = fStack_108 * fStack_180;
        fStack_108 = fStack_108 * fStack_17c;
        fVar27 = fStack_f4 * fStack_178;
        fVar28 = fStack_f4 * fStack_174;
        fVar29 = fStack_f4 * fStack_170;
        fVar30 = fStack_f4 * fStack_16c;
        fVar41 = fStack_f8 * fStack_188;
        fVar42 = fStack_f8 * fStack_184;
        fVar43 = fStack_f8 * fStack_180;
        fVar44 = fStack_f8 * fStack_17c;
        fStack_158 = fVar35 * fStack_188 + fVar36 * fStack_178 + fVar32 * fStack_168 + fStack_158;
        fStack_154 = fVar35 * fStack_184 + fVar36 * fStack_174 + fVar32 * fStack_164 + fStack_154;
        fStack_150 = fVar35 * fStack_180 + fVar36 * fStack_170 + fVar32 * fStack_160 + fStack_150;
        fStack_14c = fVar35 * fStack_17c + fVar36 * fStack_16c + fVar32 * fStack_15c + fStack_14c;
        fStack_188 = (float)uStack_118 * fStack_188 + uStack_118._4_4_ * fStack_178 +
                     (float)uStack_110 * fStack_168;
        fStack_184 = (float)uStack_118 * fStack_184 + uStack_118._4_4_ * fStack_174 +
                     (float)uStack_110 * fStack_164;
        fStack_180 = (float)uStack_118 * fStack_180 + uStack_118._4_4_ * fStack_170 +
                     (float)uStack_110 * fStack_160;
        fStack_17c = (float)uStack_118 * fStack_17c + uStack_118._4_4_ * fStack_16c +
                     (float)uStack_110 * fStack_15c;
        fStack_178 = fVar37 + fStack_104 * fStack_178 + fStack_100 * fStack_168;
        fStack_174 = fVar38 + fStack_104 * fStack_174 + fStack_100 * fStack_164;
        fStack_170 = fVar39 + fStack_104 * fStack_170 + fStack_100 * fStack_160;
        fStack_16c = fStack_108 + fStack_104 * fStack_16c + fStack_100 * fStack_15c;
        fStack_168 = fVar41 + fVar27 + fStack_f0 * fStack_168;
        fStack_164 = fVar42 + fVar28 + fStack_f0 * fStack_164;
        fStack_160 = fVar43 + fVar29 + fStack_f0 * fStack_160;
        fStack_15c = fVar44 + fVar30 + fStack_f0 * fStack_15c;
      }
      fVar35 = *(float *)((longlong)param_1 + 0x14c);
      fVar36 = *(float *)(param_1 + 0x2a);
      fVar32 = *(float *)(param_1 + 0x29);
      uStack_118._0_4_ =
           fVar32 * fStack_188 + fVar35 * fStack_178 + fVar36 * fStack_168 + fStack_158;
      uStack_118._4_4_ =
           fVar32 * fStack_184 + fVar35 * fStack_174 + fVar36 * fStack_164 + fStack_154;
      fStack_150 = fVar32 * fStack_180 + fVar35 * fStack_170 + fVar36 * fStack_160 + fStack_150;
      fStack_14c = fVar32 * fStack_17c + fVar35 * fStack_16c + fVar36 * fStack_15c + fStack_14c;
      uStack_110 = CONCAT44(fStack_14c,fStack_150);
      plVar25 = (longlong *)param_1[0xb];
      cStack_1d6 = '\x01';
      fStack_158 = (float)uStack_118;
      fStack_154 = uStack_118._4_4_;
      if (param_6 == '\0') {
        fStack_158 = (float)uStack_118 * fVar40;
        fStack_154 = uStack_118._4_4_ * fVar40;
        fStack_150 = fStack_150 * fVar40;
      }
    }
    lVar20 = param_1[10];
    puVar18 = (uint64_t *)
              FUN_18022a890(lStackX_10,(char)lVar20,*(uint64_t *)(lStackX_18 + 0x208));
    uStack_118 = *puVar18;
    uStack_110 = puVar18[1];
    pfVar17 = (float *)(lStackX_10 + ((longlong)(char)lVar20 + 0x40) * 0x10);
    fStack_108 = *pfVar17;
    fStack_104 = pfVar17[1];
    fStack_100 = pfVar17[2];
    fStack_fc = pfVar17[3];
    lVar20 = FUN_180300bf0(&uStack_118,&uStack_1c8,param_1 + 6);
    FUN_18063b5f0(&uStack_118);
    uVar2 = *(int32_t *)(lVar20 + 0x10);
    uVar3 = *(int32_t *)(lVar20 + 0x14);
    uVar4 = *(int32_t *)(lVar20 + 0x18);
    uVar5 = *(int32_t *)(lVar20 + 0x1c);
    lVar20 = *param_1;
    *(float *)(lVar20 + 0x30) = (float)uStack_118;
    *(float *)(lVar20 + 0x34) = uStack_118._4_4_;
    *(float *)(lVar20 + 0x38) = (float)uStack_110;
    *(float *)(lVar20 + 0x3c) = uStack_110._4_4_;
    *(float *)(lVar20 + 0x40) = fStack_108;
    *(float *)(lVar20 + 0x44) = fStack_104;
    *(float *)(lVar20 + 0x48) = fStack_100;
    *(float *)(lVar20 + 0x4c) = fStack_fc;
    *(float *)(lVar20 + 0x50) = fStack_f8;
    *(float *)(lVar20 + 0x54) = fStack_f4;
    *(float *)(lVar20 + 0x58) = fStack_f0;
    *(float *)(lVar20 + 0x5c) = fStack_ec;
    *(int32_t *)(lVar20 + 0x60) = uVar2;
    *(int32_t *)(lVar20 + 100) = uVar3;
    *(int32_t *)(lVar20 + 0x68) = uVar4;
    *(int32_t *)(lVar20 + 0x6c) = uVar5;
    FUN_180254610();
    aiStack_1d0[0] = 0x21;
    if ((param_5 != '\0') &&
       (((cVar15 = (char)param_1[10], cVar15 == param_7 || (cVar15 == param_9)) ||
        ((cVar15 == param_10 || (cVar15 == param_8)))))) {
      aiStack_1d0[0] = 0x20;
    }
    iVar16 = (**(code **)(*plVar25 + 0x130))(plVar25);
    if (iVar16 != aiStack_1d0[0]) {
      (**(code **)(*plVar25 + 0x128))(plVar25,aiStack_1d0);
    }
    (**(code **)(*plVar25 + 0x150))(plVar25,&fStack_188);
    if (plVar26 != (longlong *)0x0) {
      iVar16 = (**(code **)(*plVar26 + 0x130))(plVar26);
      if (iVar16 != aiStack_1d0[0]) {
        (**(code **)(*plVar26 + 0x128))(plVar26,aiStack_1d0);
      }
      (**(code **)(*plVar26 + 0x150))(plVar26,&fStack_188);
    }
    if (cStack_1d8 == '\0') {
      plVar25 = (longlong *)param_1[0xc];
      plVar26 = (longlong *)param_1[0xd];
    }
    else {
      plVar25 = (longlong *)param_1[0xe];
      plVar26 = (longlong *)param_1[0xf];
    }
    if ((plVar25 != (longlong *)0x0) &&
       (iVar16 = (**(code **)(*plVar25 + 0x130))(plVar25), iVar16 != 0)) {
      uStack_130 = 0;
      (**(code **)(*plVar25 + 0x128))(plVar25,&uStack_130);
    }
    param_2 = lStackX_10;
    param_4 = plStackX_20;
    if ((plVar26 != (longlong *)0x0) &&
       (iVar16 = (**(code **)(*plVar26 + 0x130))(plVar26), param_2 = lStackX_10,
       param_4 = plStackX_20, iVar16 != 0)) {
      uStack_12c = 0;
      (**(code **)(*plVar26 + 0x128))(plVar26,&uStack_12c);
      param_2 = lStackX_10;
      param_4 = plStackX_20;
    }
  }
  if (acStack_1d4[0] == '\0') {
    if (cStack_1d6 == '\0') {
      if ((longlong *)param_1[0xb] == (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_180062300(_DAT_180c86928,&UNK_180a37618);
      }
      iVar16 = (**(code **)(*(longlong *)param_1[0xb] + 0x130))();
      if (iVar16 != 0) {
        auStackX_8[0] = 0;
        (**(code **)(*(longlong *)param_1[0xb] + 0x128))((longlong *)param_1[0xb],auStackX_8);
      }
    }
  }
  else {
    cVar15 = (char)auStackX_8[0];
    if ((char)auStackX_8[0] == '\0') {
      if (*(char *)((longlong)param_1 + 0x124) == '\0') {
        uStack_1c8 = *(uint64_t *)((longlong)param_1 + 0x9c);
        uStack_1c0 = *(uint64_t *)((longlong)param_1 + 0xa4);
        uStack_1b8 = *(uint64_t *)((longlong)param_1 + 0xac);
        uStack_1b0 = *(uint64_t *)((longlong)param_1 + 0xb4);
        fStack_1a8 = *(float *)((longlong)param_1 + 0xbc);
        fStack_1a4 = *(float *)(param_1 + 0x18);
        fStack_1a0 = *(float *)((longlong)param_1 + 0xc4);
        fStack_19c = (float)param_1[0x19];
        fVar35 = *(float *)((longlong)param_1 + 0xcc);
        fVar36 = *(float *)(param_1 + 0x1a);
        fVar32 = *(float *)((longlong)param_1 + 0xd4);
        fStack_18c = (float)param_1[0x1b];
        fStack_198 = fVar35;
        fStack_194 = fVar36;
        fStack_190 = fVar32;
        if (*(char *)((longlong)param_1 + 0x122) != '\0') {
          pfVar17 = (float *)FUN_18058d2b0(plVar1,&uStack_118);
          fVar35 = fStack_198 + *pfVar17;
          fVar36 = fStack_194 + pfVar17[1];
          fVar32 = fStack_190 + pfVar17[2];
        }
      }
      else {
        uStack_1c8 = *(uint64_t *)((longlong)param_1 + 0xdc);
        uStack_1c0 = *(uint64_t *)((longlong)param_1 + 0xe4);
        uStack_1b8 = *(uint64_t *)((longlong)param_1 + 0xec);
        uStack_1b0 = *(uint64_t *)((longlong)param_1 + 0xf4);
        fStack_1a8 = *(float *)((longlong)param_1 + 0xfc);
        fStack_1a4 = *(float *)(param_1 + 0x20);
        fStack_1a0 = *(float *)((longlong)param_1 + 0x104);
        fStack_19c = (float)param_1[0x21];
        fVar35 = *(float *)((longlong)param_1 + 0x10c);
        fVar36 = *(float *)(param_1 + 0x22);
        fVar32 = *(float *)((longlong)param_1 + 0x114);
        fStack_18c = (float)param_1[0x23];
        fStack_198 = fVar35;
        fStack_194 = fVar36;
        fStack_190 = fVar32;
      }
      fVar27 = fStack_1a0;
      if (param_6 == '\0') {
        fVar35 = fVar35 * fVar40;
        fVar36 = fVar36 * fVar40;
        fVar32 = fVar32 * fVar40;
      }
      cStack_1d8 = (char)param_1[0x11];
      uVar22 = uVar23;
      if (plVar1[0x495] != 0) {
        uVar22 = *(ulonglong *)(plVar1[0x495] + 0x1d0);
      }
      uVar21 = uVar22 & 0xffffffffffffff00;
      if ((char)plVar1[0x497] == '\0') {
        uVar21 = uVar22;
      }
      if (((uVar21 | plVar1[0x497]) & 0x200000000) != 0) {
        lVar20 = (**(code **)(*plVar1 + 0xb0))(plVar1,1);
        fStack_140 = (float)lVar20;
        uStack_13c = (int32_t)((ulonglong)lVar20 >> 0x20);
        plVar25 = (longlong *)(lVar20 + 0x198);
        uVar22 = uVar23;
        do {
          if (((longlong *)*plVar25 != (longlong *)0x0) &&
             (iVar16 = (**(code **)(*(longlong *)*plVar25 + 0x18))(), iVar16 == 5)) {
            uVar21 = *(ulonglong *)
                      (CONCAT44(uStack_13c,fStack_140) + 0x198 + (longlong)(int)uVar22 * 8);
            break;
          }
          uVar24 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar24;
          plVar25 = plVar25 + 1;
          uVar21 = uVar23;
        } while ((int)uVar24 < 2);
        fVar28 = (float)(**(code **)(*plVar1 + 0x90))(plVar1,1);
        param_2 = lStackX_10;
        if ((*(float *)(uVar21 + 8) <= fVar28) &&
           (fVar28 = (float)(**(code **)(*plVar1 + 0x90))(plVar1,1), param_2 = lStackX_10,
           fVar28 < *(float *)(uVar21 + 0xc))) {
          cStack_1d8 = *(char *)((longlong)plVar1 + 0x25fc);
          fVar28 = *(float *)(uVar21 + 0x10);
          fVar35 = fVar35 + fVar28 * fStack_1a8;
          fVar36 = fVar36 + fVar28 * fStack_1a4;
          fVar32 = fVar32 + fVar28 * fVar27;
        }
      }
      lVar20 = (longlong)cStack_1d8;
      uVar19 = FUN_18022a890(param_2,cStack_1d8,*(uint64_t *)(lStackX_18 + 0x208));
      FUN_18063b5f0(&uStack_118,uVar19);
      pfVar17 = (float *)(param_2 + (lVar20 + 0x40) * 0x10);
      fVar28 = (float)uStack_1c8 * (float)uStack_118 + uStack_1c8._4_4_ * fStack_108 +
               (float)uStack_1c0 * fStack_f8;
      fVar29 = (float)uStack_1c8 * uStack_118._4_4_ + uStack_1c8._4_4_ * fStack_104 +
               (float)uStack_1c0 * fStack_f4;
      fVar30 = (float)uStack_1c8 * (float)uStack_110 + uStack_1c8._4_4_ * fStack_100 +
               (float)uStack_1c0 * fStack_f0;
      fVar37 = (float)uStack_1c8 * uStack_110._4_4_ + uStack_1c8._4_4_ * fStack_fc +
               (float)uStack_1c0 * fStack_ec;
      fVar38 = (float)uStack_1b8 * (float)uStack_118 + uStack_1b8._4_4_ * fStack_108 +
               (float)uStack_1b0 * fStack_f8;
      fVar39 = (float)uStack_1b8 * uStack_118._4_4_ + uStack_1b8._4_4_ * fStack_104 +
               (float)uStack_1b0 * fStack_f4;
      fVar41 = (float)uStack_1b8 * (float)uStack_110 + uStack_1b8._4_4_ * fStack_100 +
               (float)uStack_1b0 * fStack_f0;
      fVar42 = (float)uStack_1b8 * uStack_110._4_4_ + uStack_1b8._4_4_ * fStack_fc +
               (float)uStack_1b0 * fStack_ec;
      fVar43 = fStack_1a8 * (float)uStack_118 + fStack_1a4 * fStack_108 + fVar27 * fStack_f8;
      fVar44 = fStack_1a8 * uStack_118._4_4_ + fStack_1a4 * fStack_104 + fVar27 * fStack_f4;
      fVar45 = fStack_1a8 * (float)uStack_110 + fStack_1a4 * fStack_100 + fVar27 * fStack_f0;
      fVar27 = fStack_1a8 * uStack_110._4_4_ + fStack_1a4 * fStack_fc + fVar27 * fStack_ec;
      fVar31 = fVar35 * (float)uStack_118 + fVar36 * fStack_108 + fVar32 * fStack_f8 + *pfVar17;
      fVar33 = fVar35 * uStack_118._4_4_ + fVar36 * fStack_104 + fVar32 * fStack_f4 + pfVar17[1];
      fVar34 = fVar35 * (float)uStack_110 + fVar36 * fStack_100 + fVar32 * fStack_f0 + pfVar17[2];
      fVar35 = fVar35 * uStack_110._4_4_ + fVar36 * fStack_fc + fVar32 * fStack_ec + pfVar17[3];
      uStack_1c8 = CONCAT44(fVar29,fVar28);
      uStack_1c0 = CONCAT44(fVar37,fVar30);
      uStack_1b8 = CONCAT44(fVar39,fVar38);
      uStack_1b0 = CONCAT44(fVar42,fVar41);
      fStack_1a8 = fVar43;
      fStack_1a4 = fVar44;
      fStack_1a0 = fVar45;
      fStack_19c = fVar27;
      fStack_198 = fVar31;
      fStack_194 = fVar33;
      fStack_190 = fVar34;
      fStack_18c = fVar35;
      if (plStackX_20 != (longlong *)0x0) {
        plVar1 = (longlong *)*plStackX_20;
        fStack_140 = SUB84(plVar1,0);
        uStack_13c = (int32_t)((ulonglong)plVar1 >> 0x20);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x28))(plVar1);
        }
        uStack_148 = 1;
        pfVar17 = (float *)FUN_180194940(plVar1 + 6,&uStack_118,&uStack_1c8);
        fVar28 = *pfVar17;
        fVar29 = pfVar17[1];
        uStack_1c8 = *(uint64_t *)pfVar17;
        fVar30 = pfVar17[2];
        fVar37 = pfVar17[3];
        uStack_1c0 = *(ulonglong *)(pfVar17 + 2);
        fVar38 = pfVar17[4];
        fVar39 = pfVar17[5];
        uStack_1b8 = *(uint64_t *)(pfVar17 + 4);
        fVar41 = pfVar17[6];
        fVar42 = pfVar17[7];
        uStack_1b0 = *(uint64_t *)(pfVar17 + 6);
        fVar43 = pfVar17[8];
        fVar44 = pfVar17[9];
        fVar45 = pfVar17[10];
        fVar27 = pfVar17[0xb];
        fVar31 = pfVar17[0xc];
        fVar33 = pfVar17[0xd];
        fVar34 = pfVar17[0xe];
        fVar35 = pfVar17[0xf];
        uStack_148 = 0;
        fStack_1a8 = fVar43;
        fStack_1a4 = fVar44;
        fStack_1a0 = fVar45;
        fStack_19c = fVar27;
        fStack_198 = fVar31;
        fStack_194 = fVar33;
        fStack_190 = fVar34;
        fStack_18c = fVar35;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1);
        }
      }
      cVar15 = (char)auStackX_8[0];
    }
    else {
      if (*(char *)((longlong)param_1 + 0x124) == '\0') {
        pfVar17 = (float *)(**(code **)(*(longlong *)param_4[0xb] + 0x158))();
        fVar35 = *(float *)((longlong)param_4 + 300);
        fVar36 = *(float *)(param_4 + 0x25);
        fVar32 = *(float *)(param_4 + 0x26);
        fVar31 = pfVar17[4] * fVar35 + *pfVar17 * fVar36 + pfVar17[8] * fVar32 + pfVar17[0xc];
        fVar33 = pfVar17[5] * fVar35 + pfVar17[1] * fVar36 + pfVar17[9] * fVar32 + pfVar17[0xd];
        fVar34 = pfVar17[6] * fVar35 + pfVar17[2] * fVar36 + pfVar17[10] * fVar32 + pfVar17[0xe];
        fVar35 = pfVar17[7] * fVar35 + pfVar17[3] * fVar36 + pfVar17[0xb] * fVar32 + pfVar17[0xf];
        pfVar17 = (float *)(**(code **)(*(longlong *)param_4[0xb] + 0x158))();
        fVar28 = *pfVar17;
        fVar29 = pfVar17[1];
        fVar30 = pfVar17[2];
        fVar37 = pfVar17[3];
        fVar38 = pfVar17[4];
        fVar39 = pfVar17[5];
        fVar41 = pfVar17[6];
        fVar42 = pfVar17[7];
        fVar43 = pfVar17[8];
        fVar44 = pfVar17[9];
        fVar45 = pfVar17[10];
        fVar27 = pfVar17[0xb];
      }
      else {
        pfVar17 = (float *)(**(code **)(*(longlong *)param_4[0xb] + 0x158))();
        fVar31 = *pfVar17;
        fVar33 = pfVar17[1];
        fVar34 = pfVar17[2];
        fVar6 = pfVar17[3];
        fVar7 = pfVar17[4];
        fVar8 = pfVar17[5];
        fVar9 = pfVar17[6];
        fVar10 = pfVar17[7];
        fVar11 = pfVar17[8];
        fVar12 = pfVar17[9];
        fVar13 = pfVar17[10];
        fVar14 = pfVar17[0xb];
        fVar35 = *(float *)(param_1 + 0x1c);
        fVar36 = *(float *)((longlong)param_1 + 0xdc);
        fVar32 = *(float *)((longlong)param_1 + 0xe4);
        fVar28 = fVar35 * fVar7 + fVar36 * fVar31 + fVar32 * fVar11;
        fVar29 = fVar35 * fVar8 + fVar36 * fVar33 + fVar32 * fVar12;
        fVar30 = fVar35 * fVar9 + fVar36 * fVar34 + fVar32 * fVar13;
        fVar37 = fVar35 * fVar10 + fVar36 * fVar6 + fVar32 * fVar14;
        fVar35 = *(float *)(param_1 + 0x1e);
        fVar36 = *(float *)((longlong)param_1 + 0xec);
        fVar32 = *(float *)((longlong)param_1 + 0xf4);
        fVar38 = fVar35 * fVar7 + fVar36 * fVar31 + fVar32 * fVar11;
        fVar39 = fVar35 * fVar8 + fVar36 * fVar33 + fVar32 * fVar12;
        fVar41 = fVar35 * fVar9 + fVar36 * fVar34 + fVar32 * fVar13;
        fVar42 = fVar35 * fVar10 + fVar36 * fVar6 + fVar32 * fVar14;
        fVar35 = *(float *)(param_1 + 0x20);
        fVar36 = *(float *)((longlong)param_1 + 0xfc);
        fVar32 = *(float *)((longlong)param_1 + 0x104);
        fVar43 = fVar35 * fVar7 + fVar36 * fVar31 + fVar32 * fVar11;
        fVar44 = fVar35 * fVar8 + fVar36 * fVar33 + fVar32 * fVar12;
        fVar45 = fVar35 * fVar9 + fVar36 * fVar34 + fVar32 * fVar13;
        fVar27 = fVar35 * fVar10 + fVar36 * fVar6 + fVar32 * fVar14;
        fVar35 = *(float *)(param_1 + 0x22);
        fVar36 = *(float *)((longlong)param_1 + 0x10c);
        fVar32 = *(float *)((longlong)param_1 + 0x114);
        fVar31 = fVar35 * fVar7 + fVar36 * fVar31 + fVar32 * fVar11 + pfVar17[0xc];
        fVar33 = fVar35 * fVar8 + fVar36 * fVar33 + fVar32 * fVar12 + pfVar17[0xd];
        fVar34 = fVar35 * fVar9 + fVar36 * fVar34 + fVar32 * fVar13 + pfVar17[0xe];
        fVar35 = fVar35 * fVar10 + fVar36 * fVar6 + fVar32 * fVar14 + pfVar17[0xf];
      }
      uStack_1c8 = CONCAT44(fVar29,fVar28);
      uStack_1c0 = CONCAT44(fVar37,fVar30);
      uStack_1b8 = CONCAT44(fVar39,fVar38);
      uStack_1b0 = CONCAT44(fVar42,fVar41);
      fStack_1a8 = fVar43;
      fStack_1a4 = fVar44;
      fStack_1a0 = fVar45;
      fStack_19c = fVar27;
      fStack_198 = fVar31;
      fStack_194 = fVar33;
      fStack_190 = fVar34;
      fStack_18c = fVar35;
    }
    fStack_188 = fVar28;
    fStack_184 = fVar29;
    fStack_180 = fVar30;
    fStack_17c = fVar37;
    fStack_178 = fVar38;
    fStack_174 = fVar39;
    fStack_170 = fVar41;
    fStack_16c = fVar42;
    fStack_168 = fVar43;
    fStack_164 = fVar44;
    fStack_160 = fVar45;
    fStack_15c = fVar27;
    fStack_158 = fVar31;
    fStack_154 = fVar33;
    fStack_150 = fVar34;
    fStack_14c = fVar35;
    if (cStack_1d7 == '\0') {
      lVar20 = *param_1;
      fVar35 = *(float *)(lVar20 + 0x30);
      fVar36 = *(float *)(lVar20 + 0x34);
      fVar32 = *(float *)(lVar20 + 0x38);
      fVar27 = *(float *)(lVar20 + 0x40);
      fVar28 = *(float *)(lVar20 + 0x44);
      fVar29 = *(float *)(lVar20 + 0x48);
      fVar30 = *(float *)(lVar20 + 0x50);
      fVar37 = *(float *)(lVar20 + 0x54);
      fVar38 = *(float *)(lVar20 + 0x58);
      fVar39 = *(float *)(lVar20 + 0x5c);
      fVar43 = fStack_194 - *(float *)(lVar20 + 100);
      fVar41 = fStack_198 - *(float *)(lVar20 + 0x60);
      fVar42 = fStack_190 - *(float *)(lVar20 + 0x68);
      fStack_188 = uStack_1c8._4_4_ * fVar36 + (float)uStack_1c8 * fVar35 +
                   (float)uStack_1c0 * fVar32;
      fStack_184 = uStack_1c8._4_4_ * fVar28 + (float)uStack_1c8 * fVar27 +
                   (float)uStack_1c0 * fVar29;
      fStack_180 = uStack_1c8._4_4_ * fVar37 + (float)uStack_1c8 * fVar30 +
                   (float)uStack_1c0 * fVar38;
      fStack_17c = uStack_1c8._4_4_ * fVar39 + (float)uStack_1c8 * fVar39 +
                   (float)uStack_1c0 * fVar39;
      fStack_178 = uStack_1b8._4_4_ * fVar36 + (float)uStack_1b8 * fVar35 +
                   (float)uStack_1b0 * fVar32;
      fStack_174 = uStack_1b8._4_4_ * fVar28 + (float)uStack_1b8 * fVar27 +
                   (float)uStack_1b0 * fVar29;
      fStack_170 = uStack_1b8._4_4_ * fVar37 + (float)uStack_1b8 * fVar30 +
                   (float)uStack_1b0 * fVar38;
      fStack_16c = uStack_1b8._4_4_ * fVar39 + (float)uStack_1b8 * fVar39 +
                   (float)uStack_1b0 * fVar39;
      fStack_168 = fStack_1a4 * fVar36 + fStack_1a8 * fVar35 + fStack_1a0 * fVar32;
      fStack_164 = fStack_1a4 * fVar28 + fStack_1a8 * fVar27 + fStack_1a0 * fVar29;
      fStack_160 = fStack_1a4 * fVar37 + fStack_1a8 * fVar30 + fStack_1a0 * fVar38;
      fStack_15c = fStack_1a4 * fVar39 + fStack_1a8 * fVar39 + fStack_1a0 * fVar39;
      fStack_158 = fVar43 * fVar36 + fVar41 * fVar35 + fVar42 * fVar32;
      fStack_154 = fVar43 * fVar28 + fVar41 * fVar27 + fVar42 * fVar29;
      fStack_150 = fVar43 * fVar37 + fVar41 * fVar30 + fVar42 * fVar38;
      fStack_14c = fVar43 * fVar39 + fVar41 * fVar39 + fVar42 * fVar39;
    }
    if ((cVar15 == '\0') && (param_6 == '\0')) {
      fStack_188 = fStack_188 * fVar40;
      fStack_184 = fStack_184 * fVar40;
      fStack_180 = fStack_180 * fVar40;
      fStack_178 = fStack_178 * fVar40;
      fStack_174 = fStack_174 * fVar40;
      fStack_170 = fStack_170 * fVar40;
      fStack_168 = fStack_168 * fVar40;
      fStack_164 = fStack_164 * fVar40;
      fStack_160 = fStack_160 * fVar40;
    }
    (**(code **)(*(longlong *)param_1[0xb] + 0x150))((longlong *)param_1[0xb],&fStack_188);
    iVar16 = (**(code **)(*(longlong *)param_1[0xb] + 0x130))();
    if (iVar16 != 0x21) {
      (**(code **)(*(longlong *)param_1[0xb] + 0x128))((longlong *)param_1[0xb],&UNK_1809f8a74);
    }
  }
  plVar1 = (longlong *)param_1[0x10];
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 0x130) == (code *)&UNK_180276a30) {
      iVar16 = (int)plVar1[0x42];
    }
    else {
      iVar16 = (**(code **)(*plVar1 + 0x130))();
    }
    if (iVar16 != 0) {
      auStackX_8[0] = 0;
      (**(code **)(*(longlong *)param_1[0x10] + 0x128))((longlong *)param_1[0x10],auStackX_8);
    }
  }
  FUN_1805ea350(param_1);
  if (param_1[1] != 0) {
    FUN_1805ea790(param_1[1],param_2,lStackX_18,param_1,param_5,param_6,param_7,param_8,param_9,
                  param_10);
  }
  uVar22 = uVar23;
  if (param_1[3] - param_1[2] >> 3 != 0) {
    do {
      FUN_1805ea790(*(uint64_t *)(param_1[2] + uVar23),param_2,*(uint64_t *)(*param_1 + 0x260),
                    param_1,param_5,param_6,param_7,param_8,param_9,param_10);
      uVar24 = (int)uVar22 + 1;
      uVar23 = uVar23 + 8;
      uVar22 = (ulonglong)uVar24;
    } while ((ulonglong)(longlong)(int)uVar24 < (ulonglong)(param_1[3] - param_1[2] >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




