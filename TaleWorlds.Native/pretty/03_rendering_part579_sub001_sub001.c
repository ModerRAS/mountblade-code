#include "TaleWorlds.Native.Split.h"

// 03_rendering_part579_sub001_sub001.c - 5 个函数

#include "TaleWorlds.Native.Split.h"

// 03_rendering_part579_sub001.c - 6 个函数

#include "TaleWorlds.Native.Split.h"

// 03_rendering_part579.c - 6 个函数



// 函数: void FUN_180585e40(longlong param_1,int param_2,undefined8 *param_3)
void FUN_180585e40(longlong param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uStack_210;
  undefined8 uStack_208;
  int iStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined1 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined2 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined2 uStack_144;
  undefined4 uStack_140;
  undefined2 uStack_13c;
  undefined1 uStack_13a;
  undefined4 uStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 uStack_118;
  undefined2 uStack_117;
  undefined1 uStack_115;
  undefined2 uStack_114;
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  undefined1 uStack_fa;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
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
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  iVar5 = 0;
  iVar7 = 0;
  uVar8 = 0;
  if (*(char *)(param_1 + 0x3d2) == '\0') {
    uStack_210 = *(undefined8 *)(param_1 + 0x8c);
    uStack_208 = *(undefined8 *)(param_1 + 0x94);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0xa0))
              (*(longlong **)(param_1 + 0xe8),&uStack_210);
  }
  if ((float)uStack_210 * (float)uStack_210 + uStack_210._4_4_ * uStack_210._4_4_ +
      (float)uStack_208 * (float)uStack_208 <= 16.0) {
    return;
  }
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0xff;
  uStack_1b0 = 0xffffffff;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0x3f800000;
  uStack_188 = 0;
  uStack_180 = 0x3f800000;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_154 = 1;
  uStack_144 = 0xff00;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_13a = 0;
  uStack_138 = 0;
  uStack_14c = 0x10;
  uStack_148 = *(undefined4 *)(param_1 + 0x2a0);
  puVar2 = (undefined8 *)FUN_180588680(param_1,0);
  uStack_190 = *puVar2;
  uStack_188 = puVar2[1];
  uStack_1a0 = *param_3;
  uStack_198 = param_3[1];
  uStack_144 = CONCAT11(uStack_144._1_1_,0xff);
  uStack_154 = CONCAT44(uStack_154._4_4_,1);
  uStack_1b4 = 0xff;
  lVar3 = *(longlong *)(param_1 + 0xf0);
  if (-1 < *(int *)(param_1 + 0x2a0)) {
    uStack_1b4 = *(undefined1 *)(*(longlong *)(lVar3 + 0xf8) + 0x88);
  }
  uStack_1b0 = *(undefined4 *)(param_1 + 0xc);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x18);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x60);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x8c);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x94);
  uStack_1c8 = *(undefined4 *)
                ((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x58 + *(longlong *)(lVar3 + 0xd0));
  uStack_1c0 = *(undefined8 *)
                ((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar3 + 0xd0));
  uStack_1b8 = *(undefined4 *)
                ((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x5c + *(longlong *)(lVar3 + 0xd0));
  uStack_1ac = *(undefined4 *)(lVar3 + 0xbc);
  uStack_1a8 = 1;
  uStack_140 = *(undefined4 *)
                ((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + *(longlong *)(lVar3 + 0xd0) + 0x98);
  iStack_200 = 0;
  uStack_180 = uStack_190;
  uStack_178 = uStack_188;
  if (-1 < *(int *)(param_1 + 0x2a0)) {
    iVar4 = *(int *)((longlong)*(int *)(param_1 + 0x2a0) * 0xa60 + 0x30b8 +
                    *(longlong *)(param_1 + 0x10));
    if ((iVar4 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x30))(iVar4);
    }
    uVar8 = 0;
    iStack_200 = iVar4;
  }
  iVar1 = iStack_200;
  lVar3 = *(longlong *)(param_1 + 0xf0);
  iVar4 = iRam00000000000000f0;
  if (lVar3 != 0) {
    iVar4 = *(int *)(lVar3 + 0xf0);
    lVar6 = *(longlong *)(lVar3 + 0xd0);
    if (*(int *)((longlong)iVar4 * 0xa0 + 0x5c + lVar6) == 0x13) goto LAB_180586134;
  }
  iVar5 = 1;
  lVar6 = *(longlong *)(lVar3 + 0xd0);
LAB_180586134:
  if (iVar5 == 0) {
    uStack_100 = *(undefined4 *)((longlong)iVar4 * 0xa0 + 0x9c + lVar6);
  }
  else {
    uStack_100 = *(undefined4 *)((longlong)iVar4 * 0xa0 + 0x98 + lVar6);
  }
  lVar3 = _DAT_180c8f008;
  func_0x0001805345e0(&uStack_118);
  uStack_117 = 0;
  uStack_114 = 0x100;
  uStack_110 = 0;
  uStack_f8 = 0xffffffffffffffff;
  uStack_f0 = 0;
  uStack_ec = 0xffc00000;
  uStack_e8 = 0xffc00000;
  uStack_e4 = 0xffc00000;
  uStack_e0 = 0xffc00000;
  uStack_d4 = 0xffc00000;
  uStack_d0 = 0xffc00000;
  uStack_cc = 0x7fc00000;
  uStack_c8 = 0x7fc00000;
  uStack_c4 = 0x7fc00000;
  uStack_c0 = 0x7fc00000;
  uStack_7c = 0x7fc00000;
  uStack_78 = 0x7fc00000;
  uStack_74 = 0x7fc00000;
  uStack_70 = 0x7fc00000;
  uStack_118 = 0;
  uStack_115 = 1;
  uStack_112 = 0;
  uStack_111 = *(undefined1 *)(param_1 + 0x3d1);
  uStack_10c = 1;
  uStack_108 = *(undefined4 *)(param_1 + 0xc);
  uStack_fc = (undefined1)uStack_144;
  uStack_fa = *(undefined1 *)(param_1 + 0x380);
  uStack_fb = 0xff;
  uStack_dc = *(undefined4 *)(param_1 + 0x288);
  uStack_d8 = *(undefined4 *)(param_1 + 0xc4);
  uStack_bc = 0x7fc00000;
  uStack_b8 = 0x7fc00000;
  uStack_b4 = 0x7fc00000;
  uStack_b0 = 0x7fc00000;
  uStack_ac = (undefined4)uStack_1a0;
  uStack_a8 = uStack_1a0._4_4_;
  uStack_a4 = (undefined4)uStack_198;
  uStack_a0 = uStack_198._4_4_;
  iStack_104 = iVar5;
  if (*(char *)(param_1 + 0x3d2) == '\0') {
    uStack_128 = *(undefined4 *)(param_1 + 0x8c);
    uStack_124 = *(undefined4 *)(param_1 + 0x90);
    uStack_120 = *(undefined4 *)(param_1 + 0x94);
    uStack_11c = *(undefined4 *)(param_1 + 0x98);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0xa0))
              (*(longlong **)(param_1 + 0xe8),&uStack_128);
    lVar3 = _DAT_180c8f008;
  }
  uStack_8c = *(undefined8 *)(param_1 + 0x18);
  uStack_84 = *(undefined8 *)(param_1 + 0x20);
  uStack_64 = (uint)uStack_188 ^ 0x80000000;
  uStack_6c = (uint)uStack_190 ^ 0x80000000;
  uStack_68 = uStack_190._4_4_ ^ 0x80000000;
  uStack_60 = 0x7f7fffff;
  iVar5 = iVar7;
  uStack_9c = uStack_128;
  uStack_98 = uStack_124;
  uStack_94 = uStack_120;
  uStack_90 = uStack_11c;
  if (-1 < param_2) {
    iVar5 = *(int *)((longlong)param_2 * 0xa60 + 0x30b8 + *(longlong *)(param_1 + 0x10));
    if ((iVar5 != 0) && (lVar3 != 0)) {
      (**(code **)(lVar3 + 0x30))(iVar5);
      lVar3 = _DAT_180c8f008;
    }
    uVar8 = 0;
  }
  if (-1 < *(int *)(param_1 + 0x2a0)) {
    iVar7 = *(int *)((longlong)*(int *)(param_1 + 0x2a0) * 0xa60 + 0x30b8 +
                    *(longlong *)(param_1 + 0x10));
    if ((iVar7 != 0) && (lVar3 != 0)) {
      (**(code **)(lVar3 + 0x30))(iVar7);
    }
    uVar8 = 0;
  }
  (**(code **)(_DAT_180c8ece0 + 0x208))
            (*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x98d928),&uStack_118,&uStack_1f8,iVar5
             ,iVar7,(byte)(*(ulonglong *)
                            ((longlong)*(int *)(*(longlong *)(param_1 + 0xf0) + 0xf0) * 0xa0 + 0x50
                            + *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0xd0)) >> 0xe) & 1,uVar8
            );
  if ((iVar7 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))(iVar7);
  }
  if ((iVar5 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))(iVar5);
  }
  if ((iVar1 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180586470(longlong param_1,undefined8 *param_2,undefined4 param_3,int param_4,char param_5)
void FUN_180586470(longlong param_1,undefined8 *param_2,undefined4 param_3,int param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  longlong *plVar8;
  longlong *plVar9;
  float *pfVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined1 auStack_378 [32];
  longlong **pplStack_358;
  undefined4 uStack_350;
  undefined4 uStack_348;
  undefined8 uStack_340;
  float fStack_338;
  undefined4 uStack_334;
  undefined4 uStack_324;
  undefined4 uStack_314;
  undefined4 uStack_304;
  uint uStack_300;
  uint uStack_2fc;
  uint uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  uint uStack_2cc;
  longlong *plStack_2c8;
  longlong *plStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  undefined4 uStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  undefined4 uStack_23c;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  undefined4 uStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  undefined4 uStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  undefined4 uStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined4 uStack_19c;
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [64];
  undefined1 auStack_148 [48];
  undefined8 uStack_118;
  undefined8 uStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint uStack_fc;
  ulonglong uStack_f8;
  
  uStack_228 = 0xfffffffffffffffe;
  uStack_f8 = _DAT_180bf00a8 ^ (ulonglong)auStack_378;
  fVar1 = *(float *)(_DAT_180c95fc8 + 0x20);
  uStack_348 = param_3;
  if ((0 < (int)fVar1) || (((_DAT_180c92514 - 2U & 0xfffffffc) == 0 && (_DAT_180c92514 != 4)))) {
    uStack_238 = *param_2;
    uStack_230 = param_2[1];
    pfVar10 = (float *)FUN_180588680(param_1,&fStack_278);
    fStack_338 = -pfVar10[2];
    fVar19 = -pfVar10[1];
    fVar20 = -*pfVar10;
    uStack_340 = (longlong *)CONCAT44(fVar19,fVar20);
    uStack_334 = 0x7f7fffff;
    uStack_23c = 0x7f7fffff;
    uStack_258 = 0;
    uStack_254 = 0;
    uStack_250 = 0x3f800000;
    uStack_24c = 0;
    fStack_268 = fStack_338 * 0.0 - fVar19 * 1.0;
    fStack_264 = fVar20 * 1.0 - fStack_338 * 0.0;
    fStack_260 = fVar19 * 0.0 - fVar20 * 0.0;
    auVar17._0_4_ = fStack_260 * fStack_260 + fStack_264 * fStack_264 + fStack_268 * fStack_268;
    auVar17._4_8_ = SUB128(ZEXT412(0x3f800000) << 0x40,4);
    auVar17._12_4_ = 0;
    auVar18 = rsqrtss(auVar17,ZEXT416((uint)auVar17._0_4_));
    fVar19 = auVar18._0_4_;
    fVar19 = fVar19 * 0.5 * (3.0 - auVar17._0_4_ * fVar19 * fVar19);
    fStack_268 = fStack_268 * fVar19;
    fStack_264 = fStack_264 * fVar19;
    fStack_260 = fStack_260 * fVar19;
    fStack_248 = fStack_264 * 1.0 - fStack_260 * 0.0;
    fStack_244 = fStack_260 * 0.0 - fStack_268 * 1.0;
    fStack_240 = fStack_268 * 0.0 - fStack_264 * 0.0;
    lVar14 = (longlong)param_4 * 0xa60;
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar16 = *(longlong *)(*(longlong *)(lVar14 + 0x3778 + lVar4) + 0x8a8);
    puVar13 = (uint *)((longlong)param_5 * 0x100 +
                      *(longlong *)(*(longlong *)(lVar14 + 0x36f8 + lVar4) + 0x18));
    do {
      LOCK();
      uVar12 = *puVar13;
      *puVar13 = *puVar13 | 1;
      UNLOCK();
    } while ((uVar12 & 1) != 0);
    uStack_2e8 = *(undefined8 *)(puVar13 + 1);
    uStack_2e0 = *(undefined8 *)(puVar13 + 3);
    fVar6 = (float)puVar13[5];
    fVar7 = (float)puVar13[6];
    fVar19 = (float)puVar13[7];
    uStack_2cc = puVar13[8];
    *puVar13 = 0;
    fStack_2d8 = fVar6;
    fStack_2d4 = fVar7;
    fStack_2d0 = fVar19;
    uStack_118 = uStack_2e8;
    uStack_110 = uStack_2e0;
    fStack_108 = fVar6;
    fStack_104 = fVar7;
    fStack_100 = fVar19;
    uStack_fc = uStack_2cc;
    FUN_18063b5f0(&fStack_2a8,&uStack_2e8);
    fStack_218 = *(float *)(lVar16 + 0x98);
    fStack_270 = fVar19 * fStack_218 + *(float *)(lVar16 + 0xa8);
    fVar19 = *(float *)(lVar16 + 0x84);
    fVar20 = *(float *)(lVar16 + 0x74);
    fStack_274 = fVar6 * fVar20 + fVar7 * fVar19 + *(float *)(lVar16 + 0xa4);
    fVar2 = *(float *)(lVar16 + 0x80);
    fVar3 = *(float *)(lVar16 + 0x70);
    fStack_278 = fVar6 * fVar3 + fVar7 * fVar2 + *(float *)(lVar16 + 0xa0);
    uStack_2e0 = CONCAT44(0x7f7fffff,(undefined4)uStack_2e0);
    uStack_26c = 0x7f7fffff;
    uStack_1e4 = 0x7f7fffff;
    fStack_1f8 = fStack_280 * fStack_218;
    fStack_1fc = fStack_288 * fVar20 + fStack_284 * fVar19;
    fStack_200 = fStack_288 * fVar3 + fStack_284 * fVar2;
    uStack_304 = 0x7f7fffff;
    fStack_208 = fStack_290 * fStack_218;
    fStack_20c = fStack_298 * fVar20 + fStack_294 * fVar19;
    fStack_210 = fStack_298 * fVar3 + fStack_294 * fVar2;
    uStack_314 = 0x7f7fffff;
    fStack_218 = fStack_2a0 * fStack_218;
    fStack_21c = fStack_2a8 * fVar20 + fStack_2a4 * fVar19;
    fStack_220 = fStack_2a8 * fVar3 + fStack_2a4 * fVar2;
    uStack_324 = 0x7f7fffff;
    uStack_214 = 0x7f7fffff;
    uStack_204 = 0x7f7fffff;
    uStack_1f4 = 0x7f7fffff;
    fStack_1f0 = fStack_278;
    fStack_1ec = fStack_274;
    fStack_1e8 = fStack_270;
    puVar11 = (undefined8 *)
              FUN_180535610(&fStack_220,auStack_148,
                            *(undefined4 *)(*(longlong *)(lVar14 + 0x3778 + lVar4) + 0x8c0));
    uStack_1d8 = *puVar11;
    uStack_1d0 = puVar11[1];
    uStack_1c8 = puVar11[2];
    uStack_1c0 = puVar11[3];
    uStack_1b8 = puVar11[4];
    uStack_1b0 = puVar11[5];
    fStack_1a8 = fStack_278;
    fStack_1a4 = fStack_274;
    fStack_1a0 = fStack_270;
    uStack_19c = uStack_26c;
    FUN_1802f5d10(&uStack_1d8,auStack_188,&fStack_268);
    uStack_350 = CONCAT31(uStack_350._1_3_,1);
    pplStack_358 = (longlong **)CONCAT71(pplStack_358._1_7_,param_5);
    FUN_1804ebef0(*(undefined8 *)(param_1 + 0x10),uStack_348,auStack_188,param_4);
    if (0 < (int)fVar1) {
      plStack_2c8 = (longlong *)0x0;
      plStack_2c0 = (longlong *)0x0;
      uStack_2b8 = 0;
      uStack_2b0 = 3;
      uStack_340 = *(longlong **)(*(longlong *)(lVar14 + 0x3778 + lVar4) + 0x8a8);
      if (uStack_340 != (longlong *)0x0) {
        (**(code **)(*uStack_340 + 0x28))();
      }
      FUN_1800b87c0(&plStack_2c8,&uStack_340);
      if (uStack_340 != (longlong *)0x0) {
        (**(code **)(*uStack_340 + 0x38))();
      }
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
      uVar12 = *(uint *)(lVar14 + 0x37e8 + lVar4);
      uVar12 = uVar12 << 0xd ^ uVar12;
      uVar12 = uVar12 ^ uVar12 >> 0x11;
      uVar12 = uVar12 ^ uVar12 << 5;
      *(uint *)(lVar14 + 0x37e8 + lVar4) = uVar12;
      puVar13 = (uint *)FUN_180588680(param_1,auStack_198);
      uStack_2f8 = puVar13[2] ^ 0x80000000;
      uStack_2fc = puVar13[1] ^ 0x80000000;
      uStack_300 = *puVar13 ^ 0x80000000;
      uStack_2f4 = 0x7f7fffff;
      uStack_350 = 0x3e800000;
      pplStack_358 = &plStack_2c8;
      FUN_18019fc10(uVar5,param_2,&uStack_300,(uVar12 - 1 & 7) + 2);
      plVar9 = plStack_2c0;
      plVar8 = plStack_2c8;
      for (plVar15 = plStack_2c8; plVar15 != plVar9; plVar15 = plVar15 + 1) {
        if ((longlong *)*plVar15 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar15 + 0x38))();
        }
      }
      if (plVar8 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar8);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_f8 ^ (ulonglong)auStack_378);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180586ae0(longlong param_1,float *param_2)
void FUN_180586ae0(longlong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  float fVar8;
  bool bVar9;
  char cVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_478 [32];
  undefined1 uStack_458;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  undefined4 uStack_43c;
  undefined8 uStack_438;
  float fStack_430;
  undefined4 uStack_42c;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  undefined4 uStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_3fc;
  undefined4 uStack_3ec;
  undefined4 uStack_3dc;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  undefined8 uStack_358;
  uint uStack_348;
  uint uStack_344;
  uint uStack_340;
  uint uStack_33c;
  float fStack_338;
  float fStack_334;
  float fStack_330;
  uint uStack_32c;
  uint uStack_328;
  uint uStack_324;
  uint uStack_320;
  uint uStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  uint uStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  undefined4 uStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  undefined4 uStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  undefined4 uStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  undefined4 uStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  undefined4 uStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  undefined4 uStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  undefined4 uStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  undefined4 uStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  undefined4 uStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  undefined4 uStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  undefined4 uStack_25c;
  undefined1 auStack_258 [16];
  float fStack_248;
  float fStack_244;
  float fStack_240;
  undefined4 uStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  undefined4 uStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  undefined4 uStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  uint uStack_20c;
  undefined1 auStack_208 [64];
  longlong alStack_1c8 [17];
  longlong alStack_140 [5];
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  ulonglong uStack_d8;
  
  uStack_358 = 0xfffffffffffffffe;
  uStack_d8 = _DAT_180bf00a8 ^ (ulonglong)auStack_478;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8);
  uStack_3d8 = *(undefined8 *)param_2;
  uStack_3d0 = *(undefined8 *)(param_2 + 2);
  fStack_3c8 = param_2[4];
  fStack_3c4 = param_2[5];
  fStack_3c0 = param_2[6];
  fStack_3bc = param_2[7];
  fStack_3b8 = param_2[8];
  pfVar11 = *(float **)(*(longlong *)(param_1 + 0x6d8) + 0x860);
  puVar4 = *(uint **)(*(longlong *)(param_1 + 0x658) + 0x18);
  do {
    LOCK();
    uVar1 = *puVar4;
    *puVar4 = *puVar4 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  uStack_348 = puVar4[1];
  uStack_344 = puVar4[2];
  uStack_340 = puVar4[3];
  uStack_33c = puVar4[4];
  fVar14 = (float)puVar4[5];
  fVar13 = (float)puVar4[6];
  fVar8 = (float)puVar4[7];
  uVar1 = puVar4[8];
  *puVar4 = 0;
  fStack_338 = fVar14;
  fStack_334 = fVar13;
  fStack_330 = fVar8;
  uStack_32c = uVar1;
  uStack_118 = uStack_348;
  uStack_114 = uStack_344;
  uStack_110 = uStack_340;
  uStack_10c = uStack_33c;
  fStack_108 = fVar14;
  fStack_104 = fVar13;
  fStack_100 = fVar8;
  uStack_fc = uVar1;
  FUN_18063b5f0(&fStack_288,&uStack_348);
  fStack_248 = fStack_288;
  fStack_244 = fStack_284;
  fStack_240 = fStack_280;
  uStack_23c = uStack_27c;
  fStack_238 = fStack_278;
  fStack_234 = fStack_274;
  fStack_230 = fStack_270;
  uStack_22c = uStack_26c;
  fStack_228 = fStack_268;
  fStack_224 = fStack_264;
  fStack_220 = fStack_260;
  uStack_21c = uStack_25c;
  fStack_420 = *(float *)(lVar3 + 0x98);
  fStack_430 = fVar8 * fStack_420 + *(float *)(lVar3 + 0xa8);
  fVar12 = *(float *)(lVar3 + 0x84);
  fVar18 = *(float *)(lVar3 + 0x74);
  fStack_2d4 = fVar14 * fVar18 + fVar13 * fVar12 + *(float *)(lVar3 + 0xa4);
  fVar17 = *(float *)(lVar3 + 0x80);
  fVar15 = *(float *)(lVar3 + 0x70);
  fStack_2d8 = fVar14 * fVar15 + fVar13 * fVar17 + *(float *)(lVar3 + 0xa0);
  uStack_438 = (longlong *)CONCAT44(fStack_2d4,fStack_2d8);
  uStack_42c = 0x7f7fffff;
  uStack_2cc = 0x7f7fffff;
  fStack_440 = fStack_260 * fStack_420;
  fStack_444 = fStack_268 * fVar18 + fStack_264 * fVar12;
  fStack_448 = fStack_268 * fVar15 + fStack_264 * fVar17;
  fStack_410 = fStack_270 * fStack_420;
  fStack_414 = fStack_278 * fVar18 + fStack_274 * fVar12;
  fStack_418 = fStack_278 * fVar15 + fStack_274 * fVar17;
  fStack_420 = fStack_280 * fStack_420;
  fStack_424 = fStack_288 * fVar18 + fStack_284 * fVar12;
  fStack_428 = fStack_288 * fVar15 + fStack_284 * fVar17;
  uStack_41c = 0x7f7fffff;
  uStack_40c = 0x7f7fffff;
  uStack_43c = 0x7f7fffff;
  uStack_2fc = 0x7f7fffff;
  uStack_2ec = 0x7f7fffff;
  uStack_2dc = 0x7f7fffff;
  fStack_308 = fStack_428;
  fStack_304 = fStack_424;
  fStack_300 = fStack_420;
  fStack_2f8 = fStack_418;
  fStack_2f4 = fStack_414;
  fStack_2f0 = fStack_410;
  fStack_2e8 = fStack_448;
  fStack_2e4 = fStack_444;
  fStack_2e0 = fStack_440;
  fStack_2d0 = fStack_430;
  fStack_218 = fVar14;
  fStack_214 = fVar13;
  fStack_210 = fVar8;
  uStack_20c = uVar1;
  fVar12 = (float)func_0x000180285a90(&fStack_308,0x3f800000);
  FUN_1805067a0(&uStack_3d8,&fStack_308);
  fStack_3b8 = param_2[8] / fVar12;
  fVar12 = (float)uStack_3d0;
  if (fStack_3c0 <= (float)uStack_3d0) {
    fVar12 = fStack_3c0;
  }
  fVar18 = uStack_3d8._4_4_;
  if (fStack_3c4 <= uStack_3d8._4_4_) {
    fVar18 = fStack_3c4;
  }
  fVar17 = (float)uStack_3d8;
  if (fStack_3c8 <= (float)uStack_3d8) {
    fVar17 = fStack_3c8;
  }
  fVar15 = (float)uStack_3d0;
  if ((float)uStack_3d0 <= fStack_3c0) {
    fVar15 = fStack_3c0;
  }
  fVar14 = uStack_3d8._4_4_;
  if (uStack_3d8._4_4_ <= fStack_3c4) {
    fVar14 = fStack_3c4;
  }
  fVar13 = (float)uStack_3d8;
  if ((float)uStack_3d8 <= fStack_3c8) {
    fVar13 = fStack_3c8;
  }
  if ((((fVar13 + fStack_3b8 < *pfVar11) ||
       (pfVar11[4] <= fVar17 - fStack_3b8 && fVar17 - fStack_3b8 != pfVar11[4])) ||
      (fVar14 + fStack_3b8 < pfVar11[1])) ||
     (((pfVar11[5] <= fVar18 - fStack_3b8 && fVar18 - fStack_3b8 != pfVar11[5] ||
       (fVar15 + fStack_3b8 < pfVar11[2])) ||
      (pfVar11[6] <= fVar12 - fStack_3b8 && fVar12 - fStack_3b8 != pfVar11[6])))) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((((*(uint *)(param_1 + 0x56c) & 0x4000) != 0) &&
      (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9f0), lVar5 != 0)) &&
     ((0 < *(int *)(lVar5 + 0x30) &&
      (((uVar6 = *(ulonglong *)
                  ((longlong)*(int *)(lVar5 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar5 + 0xd0)),
        (uVar6 >> 9 & 1) == 0 || (0 < *(short *)(lVar5 + 8))) && ((uVar6 >> 0x1c & 1) != 0)))))) {
    FUN_18050aea0(param_1);
    uVar7 = *(undefined8 *)(lVar5 + 0x40);
    FUN_180508f50(param_1,auStack_208,1);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x590) + 0x2498);
    if ((iVar2 == -1) || (*(int *)((longlong)iVar2 * 0x68 + 0x58 + _DAT_180c96150) != 2)) {
      uVar16 = 0x3d4ccccd;
    }
    else {
      uVar16 = *(undefined4 *)(param_1 + 0x3e0);
    }
    FUN_1804efc30(alStack_1c8,uVar7);
    FUN_1806593b0(alStack_1c8,uVar16);
    uStack_458 = 0;
    cVar10 = FUN_180658a60(alStack_1c8,auStack_208,param_2,auStack_258);
    if (cVar10 != '\0') {
      uStack_438 = alStack_140;
      if (alStack_140[0] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uStack_438 = alStack_1c8;
      if (alStack_1c8[0] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      goto LAB_180587319;
    }
    uStack_438 = alStack_140;
    if (alStack_140[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_438 = alStack_1c8;
    if (alStack_1c8[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if (bVar9) {
    FUN_18050aea0(param_1);
    puVar4 = *(uint **)(*(longlong *)(param_1 + 0x658) + 0x18);
    do {
      LOCK();
      uVar1 = *puVar4;
      *puVar4 = *puVar4 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    uStack_328 = puVar4[1];
    uStack_324 = puVar4[2];
    uStack_320 = puVar4[3];
    uStack_31c = puVar4[4];
    fVar14 = (float)puVar4[5];
    fVar13 = (float)puVar4[6];
    fVar8 = (float)puVar4[7];
    uStack_30c = puVar4[8];
    *puVar4 = 0;
    fStack_318 = fVar14;
    fStack_314 = fVar13;
    fStack_310 = fVar8;
    uStack_f8 = uStack_328;
    uStack_f4 = uStack_324;
    uStack_f0 = uStack_320;
    uStack_ec = uStack_31c;
    fStack_e8 = fVar14;
    fStack_e4 = fVar13;
    fStack_e0 = fVar8;
    uStack_dc = uStack_30c;
    FUN_18063b5f0(&fStack_388,&uStack_328);
    fVar12 = *(float *)(lVar3 + 0x80);
    fVar18 = *(float *)(lVar3 + 0x70);
    fStack_298 = fVar14 * fVar18 + fVar13 * fVar12 + *(float *)(lVar3 + 0xa0);
    fVar17 = *(float *)(lVar3 + 0x84);
    fVar15 = *(float *)(lVar3 + 0x74);
    fStack_294 = fVar14 * fVar15 + fVar13 * fVar17 + *(float *)(lVar3 + 0xa4);
    fStack_2c0 = *(float *)(lVar3 + 0x98);
    fStack_290 = fVar8 * fStack_2c0 + *(float *)(lVar3 + 0xa8);
    uStack_43c = 0x7f7fffff;
    uStack_28c = 0x7f7fffff;
    fStack_2a8 = fStack_368 * fVar18 + fStack_364 * fVar12;
    fStack_2a4 = fStack_368 * fVar15 + fStack_364 * fVar17;
    fStack_2a0 = fStack_360 * fStack_2c0;
    uStack_3dc = 0x7f7fffff;
    fStack_2b8 = fStack_378 * fVar18 + fStack_374 * fVar12;
    fStack_2b4 = fStack_378 * fVar15 + fStack_374 * fVar17;
    fStack_2b0 = fStack_370 * fStack_2c0;
    uStack_3ec = 0x7f7fffff;
    fStack_2c8 = fStack_388 * fVar18 + fStack_384 * fVar12;
    fStack_2c4 = fStack_388 * fVar15 + fStack_384 * fVar17;
    fStack_2c0 = fStack_2c0 * fStack_380;
    uStack_3fc = 0x7f7fffff;
    uStack_2bc = 0x7f7fffff;
    uStack_2ac = 0x7f7fffff;
    uStack_29c = 0x7f7fffff;
    fStack_3b0 = *param_2;
    fStack_3ac = param_2[1];
    fStack_3a8 = param_2[2];
    fStack_3a4 = param_2[3];
    fStack_3a0 = param_2[4];
    fStack_39c = param_2[5];
    fStack_398 = param_2[6];
    fStack_394 = param_2[7];
    fStack_390 = param_2[8];
    FUN_1805067a0(&fStack_3b0,&fStack_2c8);
    func_0x000180285a90(&fStack_2c8,0x3f800000);
  }
LAB_180587319:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_478);
}







// 函数: void FUN_180587380(longlong param_1,longlong param_2)
void FUN_180587380(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    **(undefined1 **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 0xb) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x0001805873b7. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(undefined8 *)(param_1 + 8),0xb);
    return;
  }
  FUN_180626f80(&UNK_18098bc48,0xb,param_2);
  *(undefined4 *)(param_1 + 0x10) = 0;
  **(undefined1 **)(param_1 + 8) = 0;
  return;
}







