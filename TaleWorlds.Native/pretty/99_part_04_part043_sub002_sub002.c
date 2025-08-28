#include "TaleWorlds.Native.Split.h"

// 99_part_04_part043_sub002_sub002.c - 1 个函数

// 函数: void FUN_1802aecf0(longlong param_1,float param_2,longlong param_3,uint64_t *param_4,float param_5
void FUN_1802aecf0(longlong param_1,float param_2,longlong param_3,uint64_t *param_4,float param_5
                  )

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  int32_t uVar11;
  int32_t uVar12;
  uint uVar13;
  uint uVar14;
  int32_t uVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint64_t *puVar21;
  longlong lVar22;
  short sVar23;
  longlong lVar24;
  uint uVar25;
  float fVar26;
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
  float fVar42;
  float fVar43;
  float fVar44;
  int8_t auVar41 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  uint64_t uStack_248;
  uint64_t uStack_240;
  uint uStack_238;
  uint64_t uStack_230;
  uint64_t uStack_228;
  float fStack_220;
  ulonglong uStack_218;
  int aiStack_210 [2];
  uint64_t uStack_208;
  int32_t uStack_200;
  float fStack_1fc;
  float fStack_1f8;
  uint auStack_1f0 [2];
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  int32_t uStack_1dc;
  uint auStack_1d8 [2];
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  int32_t uStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  int32_t uStack_1b4;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
  uint64_t uStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  uint64_t uStack_150;
  int8_t auStack_148 [16];
  int8_t auStack_138 [16];
  int8_t auStack_128 [16];
  int8_t auStack_118 [48];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  
  uStack_150 = 0xfffffffffffffffe;
  uStack_200 = 0;
  lVar24 = *(longlong *)(param_1 + 0x18);
  bVar9 = *(float *)(lVar24 + 0x84) == 0.0;
  fVar27 = *(float *)(lVar24 + 0x6cc);
  auStack_1d8[0] = *(uint *)(lVar24 + 0x68);
  uVar14 = auStack_1d8[0] & 1;
  uVar10 = auStack_1d8[0] & 1;
  uVar13 = auStack_1d8[0] & 1;
  fVar55 = (float)(auStack_1d8[0] >> 9 & 0xffffff01);
  uVar25 = auStack_1d8[0] >> 1;
  lStack_168 = (*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30)) / 0x88;
  uStack_238 = 0;
  fStack_220 = fVar55;
  if ((auStack_1d8[0] >> 0x15 & 1) == 0) {
    uStack_1a8 = *param_4;
    uStack_1a0 = param_4[1];
    uStack_198 = param_4[2];
    uStack_190 = param_4[3];
    uStack_188 = param_4[4];
    uStack_180 = param_4[5];
    uStack_178._0_4_ = *(float *)(param_4 + 6);
    uStack_178._4_4_ = *(float *)((longlong)param_4 + 0x34);
    uStack_170._0_4_ = *(float *)(param_4 + 7);
    uStack_170._4_4_ = *(float *)((longlong)param_4 + 0x3c);
    FUN_1802bfe50(&uStack_1a8);
    lVar24 = *(longlong *)(param_1 + 0x18);
    fVar28 = *(float *)(lVar24 + 0xfd8);
    fVar54 = *(float *)(lVar24 + 0xfdc);
    fVar56 = *(float *)(lVar24 + 0xfd4);
    fVar53 = *(float *)(lVar24 + 0xfe8);
    fVar3 = *(float *)(lVar24 + 0xfec);
    fVar52 = *(float *)(lVar24 + 0xfe4);
    fVar49 = fVar52 * (float)uStack_1a8;
    fVar50 = fVar52 * uStack_1a8._4_4_;
    fVar51 = fVar52 * (float)uStack_1a0;
    fVar52 = fVar52 * uStack_1a0._4_4_;
    fVar38 = *(float *)(lVar24 + 0xff8);
    fVar32 = fVar38 * (float)uStack_198;
    fVar34 = fVar38 * uStack_198._4_4_;
    fVar36 = fVar38 * (float)uStack_190;
    fVar38 = fVar38 * uStack_190._4_4_;
    fVar4 = *(float *)(lVar24 + 0xffc);
    fVar48 = *(float *)(lVar24 + 0xff4);
    fVar45 = fVar48 * (float)uStack_1a8;
    fVar46 = fVar48 * uStack_1a8._4_4_;
    fVar47 = fVar48 * (float)uStack_1a0;
    fVar48 = fVar48 * uStack_1a0._4_4_;
    fVar39 = *(float *)(lVar24 + 0x1008);
    fVar33 = fVar39 * (float)uStack_198;
    fVar35 = fVar39 * uStack_198._4_4_;
    fVar37 = fVar39 * (float)uStack_190;
    fVar39 = fVar39 * uStack_190._4_4_;
    fVar31 = *(float *)(lVar24 + 0x100c);
    fVar26 = fVar31 * (float)uStack_188;
    fVar29 = fVar31 * uStack_188._4_4_;
    fVar30 = fVar31 * (float)uStack_180;
    fVar31 = fVar31 * uStack_180._4_4_;
    fVar44 = *(float *)(lVar24 + 0x1004);
    fVar40 = fVar44 * (float)uStack_1a8;
    fVar42 = fVar44 * uStack_1a8._4_4_;
    fVar43 = fVar44 * (float)uStack_1a0;
    fVar44 = fVar44 * uStack_1a0._4_4_;
    uStack_1a8 = CONCAT44(fVar56 * uStack_1a8._4_4_ + fVar28 * uStack_198._4_4_ +
                          fVar54 * uStack_188._4_4_,
                          fVar56 * (float)uStack_1a8 + fVar28 * (float)uStack_198 +
                          fVar54 * (float)uStack_188);
    uStack_1a0 = CONCAT44(fVar56 * uStack_1a0._4_4_ + fVar28 * uStack_190._4_4_ +
                          fVar54 * uStack_180._4_4_,
                          fVar56 * (float)uStack_1a0 + fVar28 * (float)uStack_190 +
                          fVar54 * (float)uStack_180);
    uStack_198 = CONCAT44(fVar50 + fVar53 * uStack_198._4_4_ + fVar3 * uStack_188._4_4_,
                          fVar49 + fVar53 * (float)uStack_198 + fVar3 * (float)uStack_188);
    uStack_190 = CONCAT44(fVar52 + fVar53 * uStack_190._4_4_ + fVar3 * uStack_180._4_4_,
                          fVar51 + fVar53 * (float)uStack_190 + fVar3 * (float)uStack_180);
    uStack_188 = CONCAT44(fVar46 + fVar34 + fVar4 * uStack_188._4_4_,
                          fVar45 + fVar32 + fVar4 * (float)uStack_188);
    uStack_180 = CONCAT44(fVar48 + fVar38 + fVar4 * uStack_180._4_4_,
                          fVar47 + fVar36 + fVar4 * (float)uStack_180);
    uStack_178 = CONCAT44(fVar42 + fVar35 + fVar29 + uStack_178._4_4_,
                          fVar40 + fVar33 + fVar26 + (float)uStack_178);
    uStack_170 = CONCAT44(fVar44 + fVar39 + fVar31 + uStack_170._4_4_,
                          fVar43 + fVar37 + fVar30 + (float)uStack_170);
  }
  else {
    uStack_1a8 = *(uint64_t *)(lVar24 + 0xfd4);
    uStack_1a0 = *(uint64_t *)(lVar24 + 0xfdc);
    uStack_198 = *(uint64_t *)(lVar24 + 0xfe4);
    uStack_190 = *(uint64_t *)(lVar24 + 0xfec);
    uStack_188 = *(uint64_t *)(lVar24 + 0xff4);
    uStack_180 = *(uint64_t *)(lVar24 + 0xffc);
    uStack_178 = *(uint64_t *)(lVar24 + 0x1004);
    uStack_170 = *(uint64_t *)(lVar24 + 0x100c);
  }
  lVar24 = *(longlong *)(param_1 + 0x20);
  uVar7 = param_4[1];
  *(uint64_t *)(lVar24 + 0xb0) = *param_4;
  *(uint64_t *)(lVar24 + 0xb8) = uVar7;
  uVar7 = param_4[3];
  *(uint64_t *)(lVar24 + 0xc0) = param_4[2];
  *(uint64_t *)(lVar24 + 200) = uVar7;
  uVar7 = param_4[5];
  *(uint64_t *)(lVar24 + 0xd0) = param_4[4];
  *(uint64_t *)(lVar24 + 0xd8) = uVar7;
  uVar15 = *(int32_t *)((longlong)param_4 + 0x34);
  uVar11 = *(int32_t *)(param_4 + 7);
  uVar12 = *(int32_t *)((longlong)param_4 + 0x3c);
  *(int32_t *)(lVar24 + 0xe0) = *(int32_t *)(param_4 + 6);
  *(int32_t *)(lVar24 + 0xe4) = uVar15;
  *(int32_t *)(lVar24 + 0xe8) = uVar11;
  *(int32_t *)(lVar24 + 0xec) = uVar12;
  if ((uVar25 & 1) == 0) {
    if (bVar9) {
      param_5 = fVar27 * param_5;
      if (uVar14 == 0) {
        if (param_5 <= 0.0) {
          if (*(char *)(param_1 + 1) != '\0') {
            *(int8_t *)(param_1 + 1) = 0;
            FUN_1802b0770(param_1);
          }
        }
        else if (*(char *)(param_1 + 1) == '\0') {
          *(int8_t *)(param_1 + 1) = 1;
          FUN_1802b0670(param_1);
        }
      }
    }
    else {
      lVar24 = *(longlong *)(param_1 + 0x18);
      fVar54 = *(float *)(param_1 + 0x14);
      fVar28 = *(float *)(param_1 + 4);
      if (fVar54 + *(float *)(lVar24 + 0x84) < fVar28) {
        if (*(char *)(param_1 + 1) != '\0') {
          *(int8_t *)(param_1 + 1) = 0;
          FUN_1802b0770(param_1);
        }
        func_0x0001802b05b0(param_1);
        return;
      }
      if (*(char *)(param_1 + 1) == '\0') {
        *(int8_t *)(param_1 + 1) = 1;
        func_0x0001802b0640(param_1);
        FUN_1802b0670(param_1);
        lVar24 = *(longlong *)(param_1 + 0x18);
        fVar28 = *(float *)(param_1 + 4);
        fVar54 = *(float *)(param_1 + 0x14);
      }
      fVar28 = (float)func_0x0001802b6b90(lVar24 + 0x6d0,
                                          (fVar28 - fVar54) / *(float *)(lVar24 + 0x84));
      param_5 = fVar27 * fVar28 * param_5;
    }
  }
  else {
    lVar24 = *(longlong *)(param_1 + 0x18);
    uVar14 = func_0x0001800ba030(param_1 + 0x60);
    param_5 = ((((float)uVar14 * 2.3283064e-10 + (float)uVar14 * 2.3283064e-10) - 1.0) *
               *(float *)(lVar24 + 0x6c8) + *(float *)(lVar24 + 0x6cc)) * param_5;
    if (1.0 <= param_5) {
      func_0x0001802b0640(param_1);
    }
  }
  if (param_5 != 0.0) {
    plVar18 = (longlong *)FUN_1800f8fc0(*(uint64_t *)(param_1 + 0x18),&uStack_218);
    lVar24 = *plVar18;
    lStack_160 = lVar24;
    FUN_180045af0(&uStack_218);
    lVar22 = *(longlong *)(param_1 + 0x20);
    aiStack_210[0] = *(int *)(*(longlong *)(param_1 + 0x18) + 0x108);
    if ((*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) != *(longlong *)(lVar22 + 0x120)) ||
       (*(longlong *)(lVar22 + 0x118) != lVar24)) {
      *(longlong *)(lVar22 + 0x118) = lVar24;
      *(uint64_t *)(*(longlong *)(param_1 + 0x20) + 0x120) =
           *(uint64_t *)(*(longlong *)(param_1 + 0x18) + 0x10);
      FUN_180056f10(*(longlong *)(param_1 + 0x20) + 0x128,0);
      *(uint64_t *)(*(longlong *)(param_1 + 0x20) + 0x138) =
           *(uint64_t *)(*(longlong *)(param_1 + 0x20) + 0x130);
      *(uint64_t *)(*(longlong *)(param_1 + 0x20) + 0x60) =
           *(uint64_t *)(*(longlong *)(param_1 + 0x20) + 0x58);
      if (lVar24 != 0) {
        plVar18 = (longlong *)FUN_1802759e0(lVar24,auStack_1f0,1);
        lVar22 = *(longlong *)(param_1 + 0x20);
        uStack_208 = (longlong *)*plVar18;
        *plVar18 = 0;
        func_0x0001800865f0(&uStack_208,lVar22 + 0x128);
        FUN_180045af0(&uStack_208);
        FUN_180045af0(auStack_1f0);
        uVar19 = (ulonglong)(int)(*(longlong *)(lVar24 + 0x40) - *(longlong *)(lVar24 + 0x38) >> 4);
        uStack_218 = uVar19;
        if (0 < (longlong)uVar19) {
          lVar24 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x120) != 0) {
              uVar7 = *(uint64_t *)
                       (lVar24 + *(longlong *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x128) + 0x38));
              uStack_208 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x10);
              if (uStack_208 != (longlong *)0x0) {
                (**(code **)(*uStack_208 + 0x28))();
              }
              FUN_180076910(uVar7,&uStack_208);
              FUN_180045af0(&uStack_208);
            }
            lVar24 = lVar24 + 0x10;
            uVar19 = uVar19 - 1;
            fVar55 = fStack_220;
          } while (uVar19 != 0);
        }
        func_0x0001802b6fd0(*(longlong *)(param_1 + 0x20) + 0x130,uStack_218);
      }
    }
    fStack_1c8 = *(float *)(param_4 + 7) - *(float *)(param_3 + 0x38);
    fStack_1cc = *(float *)((longlong)param_4 + 0x34) - *(float *)(param_3 + 0x34);
    fStack_1d0 = *(float *)(param_4 + 6) - *(float *)(param_3 + 0x30);
    uStack_1c4 = 0x7f7fffff;
    FUN_180194940(param_3,auStack_118,param_4);
    fStack_1c0 = 1.0 / param_2;
    fStack_1b8 = fStack_1c8 * fStack_1c0;
    fStack_1bc = fStack_1cc * fStack_1c0;
    fStack_1c0 = fStack_1c0 * fStack_1d0;
    uStack_1b4 = 0x7f7fffff;
    fVar27 = (float)func_0x000180084f70(&fStack_1c0);
    fStack_220 = 0.0;
    if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x68) & 0x20) != 0) {
      fStack_220 = fVar27 * *(float *)(*(longlong *)(param_1 + 0x18) + 0x90);
    }
    fVar28 = (float)func_0x000180084f70(&fStack_1d0);
    if (uVar10 == 0) {
      if ((uVar25 & 1) == 0) {
        if ((SUB41(fVar55,0) == '\0') ||
           (pfVar1 = (float *)(*(longlong *)(param_1 + 0x18) + 0xd0),
           fVar27 < *pfVar1 || fVar27 == *pfVar1)) {
          fVar27 = param_5 * param_2 + *(float *)(param_1 + 8);
          uStack_238 = (uint)fVar27;
          *(float *)(param_1 + 8) = fVar27 - (float)(int)uStack_238;
          uVar14 = uStack_238;
        }
        else {
          uStack_238 = 0;
          uVar14 = 0;
        }
      }
      else {
        uStack_238 = (int)param_5;
        func_0x0001802b05b0(param_1);
        uVar14 = (int)param_5;
      }
    }
    else {
      pfVar1 = (float *)(*(longlong *)(param_1 + 0x18) + 0xd0);
      if (fVar27 < *pfVar1 || fVar27 == *pfVar1) {
        uVar14 = uStack_238;
        if (*(char *)(param_1 + 1) == '\x01') {
          *(int8_t *)(param_1 + 1) = 0;
          FUN_1802b0770(param_1);
          uVar14 = uStack_238;
        }
      }
      else {
        if (*(char *)(param_1 + 1) == '\0') {
          *(int8_t *)(param_1 + 1) = 1;
          FUN_1802b0670(param_1);
        }
        fVar27 = fVar28 * param_5 + *(float *)(param_1 + 8);
        uStack_238 = (uint)fVar27;
        *(float *)(param_1 + 8) = fVar27 - (float)(int)uStack_238;
        uVar14 = uStack_238;
      }
    }
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x1074);
    if (iVar5 != 0) {
      uVar25 = iVar5 - (int)((*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x60) -
                             *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x58)) / 0x70);
      uVar10 = uVar14;
      if ((int)uVar25 < (int)uVar14) {
        uVar10 = uVar25;
      }
      uVar14 = 0;
      uStack_238 = 0;
      if (0 < (int)uVar10) {
        uVar14 = uVar10;
        uStack_238 = uVar10;
      }
    }
    lVar24 = *(longlong *)(param_1 + 0x50);
    uStack_208 = (longlong *)
                 (CONCAT44(uStack_208._4_4_,*(int32_t *)(lVar24 + 0x430)) ^ 0x80000000);
    fStack_1f8 = -*(float *)(lVar24 + 0x42c);
    fStack_1fc = -*(float *)(lVar24 + 0x428);
    plVar18 = (longlong *)FUN_1800f8fc0(*(longlong *)(param_1 + 0x18),auStack_1f0);
    if (*plVar18 == 0) {
      uVar19 = 0;
    }
    else {
      plVar18 = (longlong *)FUN_1800f8fc0(*(uint64_t *)(param_1 + 0x18),&uStack_218);
      uVar19 = *(longlong *)(*plVar18 + 0x40) - *(longlong *)(*plVar18 + 0x38) >> 4;
      uStack_200 = 0;
      FUN_180045af0(&uStack_218);
    }
    FUN_180045af0(auStack_1f0);
    uVar10 = auStack_1d8[0];
    iVar5 = aiStack_210[0];
    lStack_158 = (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x60) -
                 *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x58)) / 0x70;
    if (0 < (int)uVar14) {
      auStack_1f0[0] = auStack_1d8[0] & 0x10;
      uVar25 = auStack_1d8[0] & 0x10000000;
      uStack_218 = (ulonglong)uVar14;
      do {
        FUN_1802b8b50(*(longlong *)(param_1 + 0x20) + 0x58);
        lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x60);
        if (lStack_168 != 0) {
          uVar15 = func_0x0001802b09a0(param_1);
          *(int32_t *)(lVar24 + -0x18) = uVar15;
        }
        plVar18 = (longlong *)FUN_1800f8fc0(*(uint64_t *)(param_1 + 0x18));
        lVar22 = *plVar18;
        FUN_180045af0(auStack_1d8);
        if (lVar22 == 0) {
          *(int16_t *)(lVar24 + -0x40) = 0xffff;
        }
        else {
          if ((*(uint *)(*(longlong *)(param_1 + 0x18) + 0x68) & 0x40000) == 0) {
            sVar23 = (short)((ulonglong)*(uint *)(param_1 + 0xc) % (uVar19 & 0xffffffff));
            *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) + 1;
          }
          else {
            uVar20 = func_0x0001800ba030(param_1 + 0x60);
            sVar23 = (short)((uVar20 & 0xffffffff) % (uVar19 & 0xffffffff));
          }
          *(short *)(lVar24 + -0x40) = sVar23;
          piVar2 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x130) +
                          (longlong)sVar23 * 0xc);
          *piVar2 = *piVar2 + 1;
        }
        if (auStack_1f0[0] == 0) {
          if ((uVar10 >> 0xb & 1) != 0) {
            uVar14 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0xfcc);
            uVar20 = func_0x0001800ba030(param_1 + 0x60);
            *(short *)(lVar24 + -0x3e) = (short)((uVar20 & 0xffffffff) % (ulonglong)uVar14);
          }
        }
        else {
          lVar22 = *(longlong *)(param_1 + 0x18);
          uVar14 = func_0x0001800ba030(param_1 + 0x60);
          *(short *)(lVar24 + -0x3e) =
               (short)(int)(((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0xbd8) +
                           *(float *)(lVar22 + 0xbdc));
        }
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xbec);
        if (iVar6 == 1) {
          uVar14 = func_0x0001800ba030(param_1 + 0x60);
          fVar56 = (float)uVar14 * 2.3283064e-10 - 0.5;
          uVar14 = func_0x0001800ba030(param_1 + 0x60);
          fVar54 = (float)uVar14 * 2.3283064e-10 - 0.5;
          uVar14 = func_0x0001800ba030(param_1 + 0x60);
          fVar28 = (float)uVar14 * 2.3283064e-10 - 0.5;
          fVar27 = fVar54 * fVar54 + fVar56 * fVar56 + fVar28 * fVar28;
          auVar41 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
          fVar55 = auVar41._0_4_;
          fVar27 = fVar55 * 0.5 * (3.0 - fVar27 * fVar55 * fVar55);
          lVar22 = *(longlong *)(param_1 + 0x18);
          if ((*(byte *)(lVar22 + 0x21) & 4) == 0) {
            uVar14 = func_0x0001800ba030(param_1 + 0x60);
            fVar55 = SQRT((float)uVar14 * 2.3283064e-10);
            lVar22 = *(longlong *)(param_1 + 0x18);
            uStack_228._0_4_ = *(float *)(lVar22 + 0xf7c);
            uStack_230._0_4_ = fVar55 * fVar27 * fVar56 * (float)uStack_228;
            uStack_230._4_4_ = fVar55 * fVar27 * fVar54 * (float)uStack_228;
            uStack_228._0_4_ = fVar55 * fVar27 * fVar28 * (float)uStack_228;
          }
          else {
            fVar55 = *(float *)(lVar22 + 0xf8c) / *(float *)(lVar22 + 0xf7c);
            fVar55 = fVar55 * fVar55;
            uVar14 = func_0x0001800ba030(param_1 + 0x60);
            lVar22 = *(longlong *)(param_1 + 0x18);
            uStack_228._0_4_ =
                 SQRT((float)uVar14 * 2.3283064e-10 * (1.0 - fVar55) + fVar55) *
                 *(float *)(lVar22 + 0xf7c);
            uStack_230._0_4_ = (float)uStack_228 * fVar27 * fVar56;
            uStack_230._4_4_ = (float)uStack_228 * fVar27 * fVar54;
            uStack_228._0_4_ = (float)uStack_228 * fVar27 * fVar28;
          }
        }
        else if (iVar6 == 2) {
          uVar14 = func_0x0001800ba030(param_1 + 0x60);
          fVar54 = (float)uVar14 * 2.3283064e-10 - 0.5;
          uVar14 = func_0x0001800ba030(param_1 + 0x60);
          fVar28 = (float)uVar14 * 2.3283064e-10 - 0.5;
          fVar27 = fVar28 * fVar28 + fVar54 * fVar54;
          auVar41 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
          fVar55 = auVar41._0_4_;
          fVar27 = fVar55 * 0.5 * (3.0 - fVar27 * fVar55 * fVar55);
          fVar54 = fVar27 * fVar54;
          fVar27 = fVar27 * fVar28;
          lVar22 = *(longlong *)(param_1 + 0x18);
          if ((*(byte *)(lVar22 + 0x21) & 4) == 0) {
            uVar14 = func_0x0001800ba030(param_1 + 0x60);
            lVar22 = *(longlong *)(param_1 + 0x18);
            uStack_230._0_4_ =
                 SQRT((float)uVar14 * 2.3283064e-10) * fVar54 * *(float *)(lVar22 + 0xf7c);
            uStack_230._4_4_ =
                 SQRT((float)uVar14 * 2.3283064e-10) * fVar27 * *(float *)(lVar22 + 0xf7c);
          }
          else {
            fVar55 = *(float *)(lVar22 + 0xf8c) / *(float *)(lVar22 + 0xf7c);
            fVar55 = fVar55 * fVar55;
            uVar14 = func_0x0001800ba030(param_1 + 0x60);
            lVar22 = *(longlong *)(param_1 + 0x18);
            uStack_230._4_4_ =
                 SQRT((float)uVar14 * 2.3283064e-10 * (1.0 - fVar55) + fVar55) *
                 *(float *)(lVar22 + 0xf7c);
            uStack_230._0_4_ = uStack_230._4_4_ * fVar54;
            uStack_230._4_4_ = uStack_230._4_4_ * fVar27;
          }
          uStack_228._0_4_ = 0.0;
        }
        else {
          uVar14 = func_0x0001800ba030(param_1 + 0x60);
          uVar16 = func_0x0001800ba030(param_1 + 0x60);
          uVar17 = func_0x0001800ba030(param_1 + 0x60);
          lVar22 = *(longlong *)(param_1 + 0x18);
          uStack_230._0_4_ = ((float)uVar14 * 2.3283064e-10 - 0.5) * *(float *)(lVar22 + 0xf70);
          uStack_230._4_4_ = ((float)uVar16 * 2.3283064e-10 - 0.5) * *(float *)(lVar22 + 0xf74);
          uStack_228._0_4_ = ((float)uVar17 * 2.3283064e-10 - 0.5) * *(float *)(lVar22 + 0xf78);
        }
        uStack_228._4_4_ = 0x7f7fffff;
        if (uVar13 != 0) {
          uVar14 = func_0x0001800ba030(param_1 + 0x60);
          fVar27 = (float)uVar14 * 2.3283064e-10;
          uStack_230._0_4_ = (float)uStack_230 + fVar27 * fStack_e8;
          uStack_230._4_4_ = uStack_230._4_4_ + fVar27 * fStack_e4;
          uStack_228._0_4_ = (float)uStack_228 + fVar27 * fStack_e0;
          lVar22 = *(longlong *)(param_1 + 0x18);
        }
        if (iVar5 == 1) {
          fVar27 = (float)cosf(*(float *)(lVar22 + 200) * 0.008726646);
          uVar14 = func_0x0001800ba030(param_1 + 0x60);
          fVar27 = (float)uVar14 * 2.3283064e-10 * (1.0 - fVar27) + fVar27;
          func_0x0001800ba030(1.0 - fVar27 * fVar27);
                    // WARNING: Subroutine does not return
          FUN_1808fd400();
        }
        uVar14 = func_0x0001800ba030(param_1 + 0x60);
        uStack_248 = CONCAT44(uStack_248._4_4_,
                              ((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0x780) +
                              *(float *)(lVar22 + 0x784));
        lVar22 = *(longlong *)(param_1 + 0x18);
        uVar14 = func_0x0001800ba030(param_1 + 0x60);
        uStack_248 = CONCAT44(((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0x838) +
                              *(float *)(lVar22 + 0x83c),(float)uStack_248);
        lVar22 = *(longlong *)(param_1 + 0x18);
        uVar14 = func_0x0001800ba030(param_1 + 0x60);
        uStack_240 = CONCAT44(uStack_240._4_4_,
                              ((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0x8f0) +
                              *(float *)(lVar22 + 0x8f4));
        if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x68) & 4) != 0) {
          puVar21 = (uint64_t *)func_0x0001801503a0(&uStack_1a8,auStack_148,&uStack_248);
          uStack_248 = *puVar21;
          uStack_240 = puVar21[1];
        }
        puVar21 = (uint64_t *)func_0x0001800f8f10(&uStack_1a8,auStack_138,&uStack_230);
        uStack_230 = *puVar21;
        uStack_228 = puVar21[1];
        lVar22 = *(longlong *)(param_1 + 0x18);
        uVar14 = func_0x0001800ba030(param_1 + 0x60);
        fVar27 = ((float)uVar14 * 8.127323e-12 - 0.017453292) * *(float *)(lVar22 + 0x9a8) +
                 *(float *)(lVar22 + 0x9ac) * 0.017453292;
        lVar22 = *(longlong *)(param_1 + 0x18);
        if (((*(byte *)(lVar22 + 0x21) & 2) == 0) && (uVar25 == 0)) {
          fVar55 = (float)uStack_240;
          fVar28 = uStack_248._4_4_;
          fVar54 = (float)uStack_248;
        }
        else {
          fStack_1e8 = (float)uStack_230 - (float)uStack_178;
          fStack_1e4 = uStack_230._4_4_ - uStack_178._4_4_;
          fStack_1e0 = (float)uStack_228 - (float)uStack_170;
          uStack_1dc = 0x7f7fffff;
          FUN_1801c24a0(&fStack_1e8);
          lVar22 = *(longlong *)(param_1 + 0x18);
          if ((*(byte *)(lVar22 + 0x21) & 2) == 0) {
            fVar55 = (float)uStack_240;
            fVar28 = uStack_248._4_4_;
            fVar54 = (float)uStack_248;
          }
          else {
            uVar14 = func_0x0001800ba030(param_1 + 0x60);
            fVar55 = ((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0xbe0) +
                     *(float *)(lVar22 + 0xbe4);
            fVar54 = (float)uStack_248 + fVar55 * fStack_1e8;
            fVar28 = uStack_248._4_4_ + fVar55 * fStack_1e4;
            uStack_248 = CONCAT44(fVar28,fVar54);
            fVar55 = (float)uStack_240 + fVar55 * fStack_1e0;
            uStack_240 = CONCAT44(uStack_240._4_4_,fVar55);
            lVar22 = *(longlong *)(param_1 + 0x18);
          }
          if (uVar25 != 0) {
            fVar56 = 1.0 - ABS(fStack_1f8 * fStack_1e4 + fStack_1fc * fStack_1e8 +
                               (float)uStack_208 * fStack_1e0);
            if (fStack_1fc * fStack_1e4 - fStack_1f8 * fStack_1e8 <= 0.0) {
              fVar27 = -(fVar56 * fVar27);
            }
            else {
              fVar27 = fVar27 * fVar56;
            }
          }
        }
        if ((iVar5 != 1) && (*(float *)(lVar22 + 0x98) != 0.0)) {
          fVar56 = fVar28 * fVar28 + fVar54 * fVar54 + fVar55 * fVar55;
          auVar41 = rsqrtss(ZEXT416((uint)fVar56),ZEXT416((uint)fVar56));
          fVar53 = auVar41._0_4_;
          fVar56 = fVar53 * 0.5 * (3.0 - fVar56 * fVar53 * fVar53);
          uStack_248 = CONCAT44(fVar28 * fVar56 * *(float *)(lVar22 + 0x98),
                                fVar54 * fVar56 * *(float *)(lVar22 + 0x98));
          uStack_240 = CONCAT44((int)((ulonglong)uStack_240 >> 0x20),
                                fVar55 * fVar56 * *(float *)(lVar22 + 0x98));
        }
        *(int32_t *)(lVar24 + -0x4c) = 0;
        lVar22 = *(longlong *)(param_1 + 0x18);
        uVar14 = func_0x0001800ba030(param_1 + 0x60);
        fVar55 = ((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0x4a8) +
                 *(float *)(lVar22 + 0x4ac);
        if (fVar55 <= 0.0) {
          fVar55 = 0.0;
        }
        *(float *)(lVar24 + -0x50) = fVar55;
        lVar22 = *(longlong *)(param_1 + 0x18);
        uVar14 = func_0x0001800ba030(param_1 + 0x60);
        *(float *)(lVar24 + -0x48) =
             ((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0x560) +
             *(float *)(lVar22 + 0x564) + fStack_220;
        lVar22 = *(longlong *)(param_1 + 0x18);
        uVar14 = func_0x0001800ba030(param_1 + 0x60);
        *(float *)(lVar24 + -0x28) =
             ((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0x338) +
             *(float *)(lVar22 + 0x33c);
        lVar22 = *(longlong *)(param_1 + 0x18);
        uVar14 = func_0x0001800ba030(param_1 + 0x60);
        *(float *)(lVar24 + -0x30) =
             ((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0xa60) +
             *(float *)(lVar22 + 0xa64);
        lVar22 = *(longlong *)(param_1 + 0x18);
        uVar14 = func_0x0001800ba030(param_1 + 0x60);
        *(float *)(lVar24 + -100) =
             ((float)uVar14 * 8.127323e-12 - 0.017453292) * *(float *)(lVar22 + 0xbd0) +
             *(float *)(lVar22 + 0xbd4) * 0.017453292;
        lVar22 = *(longlong *)(param_1 + 0x18);
        uVar14 = func_0x0001800ba030(param_1 + 0x60);
        *(float *)(lVar24 + -0x24) =
             ((float)uVar14 * 4.656613e-10 - 1.0) * *(float *)(lVar22 + 0x110) +
             *(float *)(lVar22 + 0x114);
        if (!bVar9) {
          fVar28 = (*(float *)(param_1 + 4) - *(float *)(param_1 + 0x14)) /
                   *(float *)(*(longlong *)(param_1 + 0x18) + 0x84);
          fVar55 = (float)func_0x0001802b6b90(*(longlong *)(param_1 + 0x18) + 0x4b0,fVar28);
          *(float *)(lVar24 + -0x50) = fVar55 * *(float *)(lVar24 + -0x50);
          fVar55 = (float)func_0x0001802b6b90(*(longlong *)(param_1 + 0x18) + 0x568,fVar28);
          *(float *)(lVar24 + -0x48) = fVar55 * *(float *)(lVar24 + -0x48);
          if (iVar5 == 1) {
            fVar55 = (float)func_0x0001802b6b90(*(longlong *)(param_1 + 0x18) + 0x288,fVar28);
            uStack_248 = CONCAT44(uStack_248._4_4_ * fVar55,(float)uStack_248 * fVar55);
            uStack_240 = CONCAT44(uStack_240._4_4_,(float)uStack_240 * fVar55);
          }
          else {
            fVar55 = (float)func_0x0001802b6b90(*(longlong *)(param_1 + 0x18) + 0x788,fVar28);
            uStack_248._0_4_ = (float)uStack_248 * fVar55;
            fVar55 = (float)func_0x0001802b6b90(*(longlong *)(param_1 + 0x18) + 0x840,fVar28);
            uStack_248 = CONCAT44(uStack_248._4_4_ * fVar55,(float)uStack_248);
            fVar55 = (float)func_0x0001802b6b90(*(longlong *)(param_1 + 0x18) + 0x8f8,fVar28);
            uStack_240 = CONCAT44(uStack_240._4_4_,(float)uStack_240 * fVar55);
          }
          fVar55 = (float)func_0x0001802b6b90(*(longlong *)(param_1 + 0x18) + 0x9b0,fVar28);
          fVar27 = fVar27 * fVar55;
        }
        lVar22 = *(longlong *)(param_1 + 0x18);
        fVar55 = *(float *)(lVar22 + 0x94);
        fVar28 = fStack_1c0 * fVar55 + (float)uStack_248;
        uStack_248._4_4_ = fStack_1bc * fVar55 + uStack_248._4_4_;
        uStack_248 = CONCAT44(uStack_248._4_4_,fVar28);
        fVar55 = fVar55 * fStack_1b8 + (float)uStack_240;
        uStack_240 = CONCAT44(uStack_240._4_4_,fVar55);
        if ((iVar5 != 1) && (0.0 < *(float *)(lVar22 + 0xfc0))) {
          fVar53 = fVar28 * fVar28 + uStack_248._4_4_ * uStack_248._4_4_ + fVar55 * fVar55;
          auVar41 = rsqrtss(ZEXT416((uint)fVar53),ZEXT416((uint)fVar53));
          fVar54 = auVar41._0_4_;
          fVar56 = fVar54 * 0.5 * (3.0 - fVar53 * fVar54 * fVar54);
          fVar54 = fVar56 * fVar53;
          if (*(float *)(lVar22 + 0xfc0) <= fVar56 * fVar53) {
            fVar54 = *(float *)(lVar22 + 0xfc0);
          }
          uStack_248 = CONCAT44(fVar56 * uStack_248._4_4_ * fVar54,fVar54 * fVar56 * fVar28);
          uStack_240 = CONCAT44(uStack_240._4_4_,fVar56 * fVar55 * fVar54);
        }
        *(float *)(lVar24 + -0x70) = (float)uStack_230;
        *(float *)(lVar24 + -0x6c) = uStack_230._4_4_;
        *(float *)(lVar24 + -0x68) = (float)uStack_228;
        lVar22 = *(longlong *)(param_1 + 0x18);
        if ((*(uint *)(lVar22 + 0x68) & 0x100) != 0) {
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x2908);
          if ((lVar8 != 0) && (*(char *)(*(longlong *)(param_1 + 0x50) + 0x2960) != '\0')) {
            fVar55 = (float)FUN_1803a56a0(lVar8,lVar24 + -0x70,0);
            *(float *)(lVar24 + -0x68) = fVar55 + *(float *)(lVar24 + -0x48);
            lVar22 = *(longlong *)(param_1 + 0x18);
          }
        }
        if (*(int *)(lVar22 + 0x10c) == 0) {
          *(int32_t *)(lVar24 + -0x2c) = 0xffffffff;
        }
        else {
          if (((*(uint *)(lVar22 + 0x68) & 0x10000) != 0) &&
             (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x60b80), lVar8 != 0)) {
            *(uint *)(lVar24 + -4) =
                 (int)((*(float *)(lVar24 + -0x70) / *(float *)(lVar8 + 0x20)) * 65535.0) << 0x10 |
                 (int)((*(float *)(lVar24 + -0x6c) / *(float *)(lVar8 + 0x24)) * 65535.0) & 0xffffU;
            lVar22 = *(longlong *)(param_1 + 0x18);
          }
          uVar14 = func_0x0001800ba030(param_1 + 0x60);
          lVar22 = func_0x0001802bfbb0(lVar22 + 0xbf0,auStack_128,(float)uVar14 * 2.3283064e-10);
          func_0x00018018c0e0(aiStack_210,*(int32_t *)(lVar22 + 0xc));
          *(int *)(lVar24 + -0x2c) = aiStack_210[0];
        }
        *(int32_t *)(lVar24 + -0x10) = *(int32_t *)(*(longlong *)(param_1 + 0x18) + 0xfb0);
        *(int32_t *)(lVar24 + -0xc) = *(int32_t *)(*(longlong *)(param_1 + 0x18) + 0xfb4);
        *(int32_t *)(lVar24 + -8) = *(int32_t *)(*(longlong *)(param_1 + 0x18) + 0xfb8);
        if (((*(int *)(*(longlong *)(param_1 + 0x18) + 0xbe8) == 0) || (lStack_160 != 0)) &&
           ((uVar10 >> 0x13 & 1) == 0)) {
          uVar14 = func_0x0001800ba030(param_1 + 0x60);
          fVar53 = ((float)uVar14 * 2.3283064e-10 + (float)uVar14 * 2.3283064e-10) - 1.0;
          uVar14 = func_0x0001800ba030(param_1 + 0x60);
          fVar56 = ((float)uVar14 * 2.3283064e-10 + (float)uVar14 * 2.3283064e-10) - 1.0;
          uVar14 = func_0x0001800ba030(param_1 + 0x60);
          fVar54 = ((float)uVar14 * 2.3283064e-10 + (float)uVar14 * 2.3283064e-10) - 1.0;
          fVar55 = fVar56 * fVar56 + fVar53 * fVar53 + fVar54 * fVar54;
          auVar41 = rsqrtss(ZEXT416((uint)fVar55),ZEXT416((uint)fVar55));
          fVar28 = auVar41._0_4_;
          fVar55 = fVar28 * 0.5 * (3.0 - fVar55 * fVar28 * fVar28);
          *(float *)(lVar24 + -0x3c) = fVar55 * fVar53;
          *(float *)(lVar24 + -0x38) = fVar55 * fVar56;
          *(float *)(lVar24 + -0x34) = fVar55 * fVar54;
        }
        *(float *)(lVar24 + -0x60) = *(float *)(lVar24 + -0x70) - (float)uStack_248 * 0.016666668;
        *(float *)(lVar24 + -0x5c) = *(float *)(lVar24 + -0x6c) - uStack_248._4_4_ * 0.016666668;
        *(float *)(lVar24 + -0x58) = *(float *)(lVar24 + -0x68) - (float)uStack_240 * 0.016666668;
        *(float *)(lVar24 + -0x54) = *(float *)(lVar24 + -100) - fVar27 * 0.016666668;
        uStack_218 = uStack_218 - 1;
      } while (uStack_218 != 0);
      if (0 < (int)uStack_238) {
        FUN_1802b07c0(param_1,(longlong)(int)lStack_158 * 0x70 +
                              *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x58),uStack_238);
      }
    }
  }
  plVar18 = *(longlong **)(param_1 + 0x58);
  if (plVar18 != (longlong *)0x0) {
    (**(code **)(*plVar18 + 0xa8))(plVar18,&uStack_178);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






