#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part057.c - 1 个函数

// 函数: void FUN_1800debc0(uint64_t param_1,int64_t param_2,char param_3)
void FUN_1800debc0(uint64_t param_1,int64_t param_2,char param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  code *pcVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int32_t uVar10;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar11;
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
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
  float fStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  int8_t auStack_128 [16];
  int8_t auStack_118 [16];
  int8_t auStack_108 [16];
  int8_t auStack_f8 [16];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint64_t extraout_XMM0_Qb;
  
  lVar8 = system_message_buffer;
  lVar9 = SYSTEM_STATE_MANAGER;
  lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
    fVar14 = *(float *)(SYSTEM_STATE_MANAGER + 0x1880);
  }
  else {
    fVar14 = 1.0;
  }
  *(float *)(lVar1 + 0x1520) = fVar14;
  *(float *)(lVar1 + 0x1524) = 1.0 / fVar14;
  uVar10 = 0;
  if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
    fVar14 = *(float *)(lVar9 + 0x2060);
  }
  else {
    fVar14 = 0.0;
  }
  *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d54) = fVar14 * 0.01;
  if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
    fVar14 = *(float *)(lVar9 + 0x1110);
  }
  else {
    fVar14 = 50.0;
  }
  *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1528) = fVar14 * 0.005 - 0.25;
  if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
    fVar14 = *(float *)(lVar9 + 0x1180);
    if (0.0 <= fVar14) goto LAB_1800dece7;
    fVar14 = 0.0;
  }
  else {
    fVar14 = 0.0;
LAB_1800dece7:
    if (1.0 <= fVar14) {
      fVar14 = 1.0;
    }
  }
  *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x17a0) = fVar14;
  if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
    fVar14 = *(float *)(lVar9 + 0x11f0);
    if (0.0 <= fVar14) goto LAB_1800ded07;
    fVar14 = 0.0;
  }
  else {
    fVar14 = 1.0;
LAB_1800ded07:
    if (1.0 <= fVar14) {
      fVar14 = 1.0;
    }
  }
  *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x17a4) = fVar14;
  lVar1 = *(int64_t *)(lVar8 + 0x1cd8);
  if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
    uVar10 = *(int32_t *)(lVar9 + 0x1260);
  }
  uVar10 = powf(param_1,uVar10);
  *(int32_t *)(lVar1 + 0x17b8) = uVar10;
  lVar1 = *(int64_t *)(param_2 + 0x11d00);
  *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1be0) =
       0.5 / (float)(int)*(float *)(param_2 + 0x11c20);
  *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1be4) =
       0.5 / (float)(int)*(float *)(param_2 + 0x11c24);
  *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1be8) = 1.0 / (float)*(int *)(param_2 + 0x3588);
  *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1bec) = 1.0 / (float)*(int *)(param_2 + 0x358c);
  auVar12._0_8_ = tanf(*(float *)(param_2 + 0x14c) * 0.5);
  auVar12._8_8_ = extraout_XMM0_Qb;
  auVar13._4_12_ = auVar12._4_12_;
  auVar13._0_4_ = (float)auVar12._0_8_ / *(float *)(param_2 + 0x150);
  fVar14 = (float)atanf(auVar13._0_8_);
  *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c68) = fVar14 + fVar14;
  FUN_180094120((float *)(param_2 + 0x12bc0),&fStack_188);
  auStack_128 = ZEXT416((uint)fStack_188);
  fStack_140 = fStack_188 * -1.0 + fStack_178 * -1.0 + fStack_168 + fStack_158;
  auStack_118 = ZEXT416((uint)fStack_140);
  fStack_13c = fStack_184 * -1.0 + fStack_174 * -1.0 + fStack_164 + fStack_154;
  fStack_138 = fStack_180 * -1.0 + fStack_170 * -1.0 + fStack_160 + fStack_150;
  fStack_148 = fStack_17c * -1.0 + fStack_16c * -1.0 + fStack_15c + fStack_14c;
  fStack_d8 = fStack_178 + fStack_188 * -1.0 + fStack_168 + fStack_158;
  auStack_f8 = ZEXT416((uint)fStack_d8);
  fStack_cc = fStack_16c + fStack_17c * -1.0 + fStack_15c + fStack_14c;
  fStack_d4 = fStack_174 + fStack_184 * -1.0 + fStack_164 + fStack_154;
  fStack_d0 = fStack_170 + fStack_180 * -1.0 + fStack_160 + fStack_150;
  fStack_e4 = fStack_184 + fStack_174 * -1.0 + fStack_164 + fStack_154;
  fStack_e8 = fStack_188 + fStack_178 * -1.0 + fStack_168 + fStack_158;
  auStack_108 = ZEXT416((uint)fStack_e8);
  fStack_e0 = fStack_180 + fStack_170 * -1.0 + fStack_160 + fStack_150;
  fStack_dc = fStack_17c + fStack_16c * -1.0 + fStack_15c + fStack_14c;
  fStack_158 = fStack_188 + fStack_178 + fStack_168 + fStack_158;
  fVar15 = 1.0 / fStack_148;
  fVar20 = 1.0 / fStack_cc;
  fStack_150 = fStack_180 + fStack_170 + fStack_160 + fStack_150;
  fVar14 = 1.0 / (fStack_17c + fStack_16c + fStack_15c + fStack_14c);
  fVar17 = 1.0 / fStack_dc;
  fVar18 = fVar14 * fStack_158;
  fVar25 = fStack_e8 * fVar17;
  fVar27 = fStack_e4 * fVar17;
  fVar17 = fStack_e0 * fVar17;
  fVar19 = (fStack_184 + fStack_174 + fStack_164 + fStack_154) * fVar14;
  fVar24 = (fStack_140 * fVar15 + fVar18) * 0.5;
  fVar14 = fStack_150 * fVar14;
  fVar26 = (fStack_13c * fVar15 + fVar19) * 0.5;
  fVar16 = (fStack_d4 * fVar20 + fVar19) * 0.5;
  fVar22 = (fStack_138 * fVar15 + fVar14) * 0.5;
  fVar15 = (fVar20 * fStack_d8 + fVar18) * 0.5;
  uVar11 = (uint64_t)(uint)fVar15;
  plVar2 = *(int64_t **)(param_2 + 0x3580);
  fVar20 = (fStack_d0 * fVar20 + fVar14) * 0.5;
  fStack_134 = fStack_148;
  if (plVar2 != (int64_t *)0x0) {
    if (*(code **)(*plVar2 + 0xb8) == (code *)&unknown_var_128_ptr) {
      lVar7 = plVar2[0xda];
    }
    else {
      lVar7 = (**(code **)(*plVar2 + 0xb8))(plVar2,fVar16,fVar20,fVar18,fStack_158,fStack_150);
      lVar8 = system_message_buffer;
      lVar9 = SYSTEM_STATE_MANAGER;
      uVar11 = extraout_XMM0_Qa;
    }
    if (lVar7 != 0) {
      pcVar3 = *(code **)(**(int64_t **)(param_2 + 0x3580) + 0xb8);
      if (pcVar3 != (code *)&unknown_var_128_ptr) {
        uVar11 = (*pcVar3)();
        lVar8 = system_message_buffer;
        lVar9 = SYSTEM_STATE_MANAGER;
      }
      *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d5c) = 0x41f00000;
      pcVar3 = *(code **)(**(int64_t **)(param_2 + 0x3580) + 0xb8);
      if (pcVar3 == (code *)&unknown_var_128_ptr) {
        lVar7 = (*(int64_t **)(param_2 + 0x3580))[0xda];
      }
      else {
        lVar7 = (*pcVar3)(uVar11);
        lVar8 = system_message_buffer;
        lVar9 = SYSTEM_STATE_MANAGER;
      }
      uVar5 = *(uint64_t *)(lVar7 + 0x3f44);
      lVar4 = *(int64_t *)(lVar8 + 0x1cd8);
      *(uint64_t *)(lVar4 + 0x1d70) = *(uint64_t *)(lVar7 + 0x3f3c);
      *(uint64_t *)(lVar4 + 0x1d78) = uVar5;
      pcVar3 = *(code **)(**(int64_t **)(param_2 + 0x3580) + 0xb8);
      if (pcVar3 == (code *)&unknown_var_128_ptr) {
        lVar7 = (*(int64_t **)(param_2 + 0x3580))[0xda];
      }
      else {
        lVar7 = (*pcVar3)();
        lVar8 = system_message_buffer;
        lVar9 = SYSTEM_STATE_MANAGER;
      }
      *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d7c) = *(int32_t *)(lVar7 + 0x3f38);
      goto LAB_1800df320;
    }
  }
  *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d5c) = 0x43960000;
  lVar7 = *(int64_t *)(lVar8 + 0x1cd8);
  *(uint64_t *)(lVar7 + 0x1d70) = 0;
  *(uint64_t *)(lVar7 + 0x1d78) = 0;
LAB_1800df320:
  lVar7 = *(int64_t *)(lVar8 + 0x1cd8);
  *(float *)(lVar7 + 0x1c30) = (fVar25 + fVar18) * 0.5 - fVar24;
  *(float *)(lVar7 + 0x1c34) = (fVar27 + fVar19) * 0.5 - fVar26;
  *(float *)(lVar7 + 0x1c38) = (fVar17 + fVar14) * 0.5 - fVar22;
  *(int32_t *)(lVar7 + 0x1c3c) = 0x7f7fffff;
  lVar7 = *(int64_t *)(lVar8 + 0x1cd8);
  *(float *)(lVar7 + 0x1c40) = fVar24 - fVar15;
  *(float *)(lVar7 + 0x1c44) = fVar26 - fVar16;
  *(float *)(lVar7 + 0x1c48) = fVar22 - fVar20;
  *(int32_t *)(lVar7 + 0x1c4c) = 0x7f7fffff;
  if (param_3 != '\0') {
    lVar7 = *(int64_t *)(lVar8 + 0x1cd8);
    fVar14 = *(float *)(lVar7 + 0x1120);
    fVar15 = *(float *)(lVar7 + 0x1124);
    fVar16 = *(float *)(lVar7 + 0x1128);
    fVar27 = *(float *)(param_2 + 0x120) - fVar14 * 1e+07;
    fVar21 = *(float *)(param_2 + 0x124) - fVar15 * 1e+07;
    fVar23 = *(float *)(param_2 + 0x128) - fVar16 * 1e+07;
    fVar17 = *(float *)(param_2 + 0x12bd4);
    fVar20 = *(float *)(param_2 + 0x12bc4);
    fVar18 = *(float *)(param_2 + 0x12be4);
    fVar19 = *(float *)(param_2 + 0x114);
    fVar22 = *(float *)(param_2 + 0x118);
    fVar26 = 1.0 / (fVar21 * *(float *)(param_2 + 0x12bdc) + fVar27 * *(float *)(param_2 + 0x12bcc)
                    + fVar23 * *(float *)(param_2 + 0x12bec) + *(float *)(param_2 + 0x12bfc));
    fVar24 = *(float *)(param_2 + 0x12bf4);
    fVar25 = *(float *)(param_2 + 0x110);
    *(float *)(lVar7 + 0x1c08) =
         ((fVar21 * *(float *)(param_2 + 0x12bd0) + fVar27 * *(float *)(param_2 + 0x12bc0) +
           fVar23 * *(float *)(param_2 + 0x12be0) + *(float *)(param_2 + 0x12bf0)) * fVar26 + 1.0) *
         0.5;
    *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c0c) =
         0.5 - (fVar21 * fVar17 + fVar27 * fVar20 + fVar23 * fVar18 + fVar24) * fVar26 * 0.5;
    *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c04) =
         -(fVar25 * fVar14 + fVar19 * fVar15 + fVar22 * fVar16);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c00) = *(int32_t *)(lVar1 + 0x1dc);
  }
  if (lVar1 != 0) {
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c6c) = *(int32_t *)(lVar1 + 0x180);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1bfc) = *(int32_t *)(lVar1 + 0x1d8);
    lVar7 = *(int64_t *)(lVar8 + 0x1cd8);
    *(int32_t *)(lVar7 + 0x1c10) = *(int32_t *)(lVar1 + 0x1e8);
    fVar14 = *(float *)(lVar9 + 0x1260);
    fVar15 = *(float *)(lVar1 + 0x1ec);
    if (fVar14 <= 0.0) {
      fVar16 = fVar15;
      if ((fVar14 < 0.0) && (fVar16 = *(float *)(lVar1 + 0x1f0) + fVar14, fVar15 <= fVar16)) {
        fVar16 = fVar15;
      }
    }
    else {
      fVar16 = fVar15 + fVar14;
    }
    uVar10 = powf(lVar7,fVar16);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c18) = uVar10;
    uVar10 = powf();
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c1c) = uVar10;
    uVar10 = powf();
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d58) = uVar10;
    uVar10 = powf();
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c14) = uVar10;
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c20) = *(int32_t *)(lVar1 + 0x1f8);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c24) = *(int32_t *)(lVar1 + 0x1fc);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c28) = *(int32_t *)(lVar1 + 0x200);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1ce8) = *(int32_t *)(lVar1 + 0x208);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1cec) = *(int32_t *)(lVar1 + 0x20c);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d34) = *(int32_t *)(lVar1 + 0x210);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d30) = *(int32_t *)(lVar1 + 0x218);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d2c) = *(int32_t *)(lVar1 + 0x214);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d18) = *(int32_t *)(lVar1 + 0x21c);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d1c) = *(int32_t *)(lVar1 + 0x220);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d20) = *(int32_t *)(lVar1 + 0x224);
    *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d24) = (float)*(int *)(lVar1 + 0x228);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d28) = *(int32_t *)(lVar1 + 0x22c);
    *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d14) = (float)*(int *)(lVar1 + 0x230);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d10) = *(int32_t *)(lVar1 + 0x234);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1cf0) = *(int32_t *)(lVar1 + 0x288);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1cfc) = *(int32_t *)(lVar1 + 0x28c);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1ce0) = *(int32_t *)(param_2 + 0x180);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1ce4) = *(int32_t *)(lVar1 + 0x294);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1cf4) = *(int32_t *)(lVar1 + 0x290);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1cf8) = *(int32_t *)(lVar1 + 0x298);
    lVar9 = *(int64_t *)(lVar8 + 0x1cd8);
    uVar5 = *(uint64_t *)(lVar1 + 0x2a4);
    *(uint64_t *)(lVar9 + 0x1d00) = *(uint64_t *)(lVar1 + 0x29c);
    *(uint64_t *)(lVar9 + 0x1d08) = uVar5;
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d38) = *(int32_t *)(lVar1 + 0x2ac);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d3c) = *(int32_t *)(lVar1 + 0x2b0);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d50) = *(int32_t *)(lVar1 + 0x2b4);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d40) = *(int32_t *)(lVar1 + 0x2b8);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d44) = *(int32_t *)(lVar1 + 700);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d48) = *(int32_t *)(lVar1 + 0x2c0);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d4c) = *(int32_t *)(lVar1 + 0x2c4);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c60) = *(int32_t *)(lVar1 + 0x2c8);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c64) = *(int32_t *)(lVar1 + 0x2cc);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1c8c) = *(int32_t *)(lVar1 + 0x204);
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d88) = *(int32_t *)(lVar1 + 0x98);
    uVar6 = *(uint *)(param_2 + 0x12450) & 0x800000ff;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
    }
    *(float *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d84) = (float)(int)uVar6;
    *(int32_t *)(*(int64_t *)(lVar8 + 0x1cd8) + 0x1d8c) = *(int32_t *)(param_2 + 0x11cec);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




