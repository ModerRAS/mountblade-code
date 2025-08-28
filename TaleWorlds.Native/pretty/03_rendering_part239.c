#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part239.c - 2 个函数

// 函数: void FUN_1804013a0(longlong param_1,uint64_t param_2,longlong param_3,int32_t param_4,
void FUN_1804013a0(longlong param_1,uint64_t param_2,longlong param_3,int32_t param_4,
                  int32_t param_5)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int32_t uVar7;
  uint64_t *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong **pplVar11;
  longlong **pplVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  void *puVar16;
  longlong **pplVar17;
  longlong *plVar18;
  uint64_t *puVar19;
  uint64_t uVar20;
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int32_t uVar23;
  int32_t uVar24;
  int8_t auStack_278 [32];
  uint64_t uStack_258;
  char acStack_248 [8];
  longlong **pplStack_240;
  longlong *aplStack_238 [2];
  longlong *plStack_228;
  uint64_t uStack_220;
  uint64_t uStack_218;
  int32_t uStack_210;
  longlong *plStack_208;
  longlong *plStack_200;
  longlong lStack_1f8;
  int32_t uStack_1f0;
  ulonglong uStack_1e8;
  uint64_t uStack_1e0;
  uint64_t uStack_1d8;
  longlong *plStack_1d0;
  int32_t auStack_1c8 [2];
  longlong *plStack_1c0;
  longlong *plStack_1b8;
  longlong *plStack_1b0;
  uint64_t uStack_1a8;
  int32_t uStack_1a0;
  longlong *plStack_198;
  longlong *plStack_190;
  longlong lStack_188;
  int32_t uStack_180;
  ulonglong uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  longlong *plStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  int iStack_148;
  int32_t uStack_144;
  uint64_t uStack_140;
  uint64_t uStack_138;
  int32_t uStack_130;
  int32_t uStack_12c;
  uint64_t uStack_128;
  longlong *plStack_120;
  ulonglong *puStack_118;
  uint64_t uStack_110;
  ulonglong auStack_108 [2];
  int8_t auStack_f8 [32];
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  longlong *plStack_c8;
  longlong *plStack_b8;
  int8_t *puStack_b0;
  int32_t uStack_a8;
  int8_t auStack_a0 [72];
  ulonglong uStack_58;
  
  uStack_158 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_278;
  puVar16 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    puVar16 = *(void **)(param_1 + 0x18);
  }
  pplStack_240 = &plStack_b8;
  pplVar12 = (longlong **)0x0;
  plStack_b8 = (longlong *)&unknown_var_3480_ptr;
  puStack_b0 = auStack_a0;
  uStack_a8 = 0;
  auStack_a0[0] = 0;
  auStack_1c8[0] = param_4;
  if (puVar16 != (void *)0x0) {
    FUN_180049bf0(&plStack_b8);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&plStack_b8);
  }
  uStack_140 = &unknown_var_3456_ptr;
  uStack_128 = 0;
  uStack_138 = (uint64_t *)0x0;
  uStack_130 = 0;
  puVar8 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  uStack_138 = puVar8;
  uVar6 = FUN_18064e990(puVar8);
  *puVar8 = 0x6f4e786674736f70;
  *(int32_t *)(puVar8 + 1) = 0x3a3a6564;
  *(int8_t *)((longlong)puVar8 + 0xc) = 0;
  uStack_130 = 0xc;
  iVar14 = *(int *)(param_1 + 0x20);
  uStack_128._0_4_ = uVar6;
  if (0 < iVar14) {
    if ((iVar14 != -0xc) && (uVar6 < iVar14 + 0xdU)) {
      uStack_258 = CONCAT71(uStack_258._1_7_,0x13);
      puVar8 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar8,iVar14 + 0xdU,0x10);
      uStack_138 = puVar8;
      uStack_128._0_4_ = FUN_18064e990(puVar8);
      iVar14 = *(int *)(param_1 + 0x20);
    }
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((longlong)puVar8 + 0xc),*(uint64_t *)(param_1 + 0x18),
           (longlong)(iVar14 + 1));
  }
  puVar19 = (uint64_t *)&system_buffer_ptr;
  if (puVar8 != (uint64_t *)0x0) {
    puVar19 = puVar8;
  }
  FUN_1802c22a0(acStack_248,puVar19);
  lVar15 = _DAT_180c86938;
  *(uint64_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83b8) = 0;
  *(uint64_t *)(*(longlong *)(lVar15 + 0x1cd8) + 0x83c0) = 0;
  *(uint64_t *)(*(longlong *)(lVar15 + 0x1cd8) + 0x83c8) = 0;
  *(uint64_t *)(*(longlong *)(lVar15 + 0x1cd8) + 0x83d0) = 0;
  uVar20 = FUN_18029de40(*(uint64_t *)(lVar15 + 0x1cd8),4);
  uStack_150 = (longlong *)0x0;
  iStack_148 = 0;
  uStack_144._0_2_ = 0;
  FUN_18009e9e0(uVar20,aplStack_238,&unknown_var_2736_ptr);
  iVar14 = iStack_148;
  plStack_198 = (longlong *)0x0;
  plStack_190 = (longlong *)&unknown_var_3456_ptr;
  uStack_178 = 0;
  lStack_188 = 0;
  uStack_180 = 0;
  plStack_160 = (longlong *)0x0;
  plStack_1b8 = aplStack_238[0];
  uVar23 = (int32_t)uStack_150;
  uVar24 = uStack_150._4_4_;
  uVar7 = CONCAT22(uStack_144._2_2_,(int16_t)uStack_144);
  plStack_1b0 = uStack_150;
  uStack_1a8 = CONCAT44(uVar7,iStack_148);
  uStack_1a0 = 2;
  uStack_170 = 0;
  uStack_168 = 0;
  lVar15 = aplStack_238[0][0x2b7];
  pplStack_240 = &plStack_120;
  plStack_120 = aplStack_238[0];
  uStack_110 = uStack_1a8;
  auStack_108[0] = CONCAT44(auStack_108[0]._4_4_,2);
  auStack_108[1] = 0;
  puStack_118 = (ulonglong *)plStack_1b0;
  FUN_180627ae0(auStack_f8,&plStack_190);
  uStack_d8 = uStack_170;
  uStack_d0 = uStack_168;
  plStack_c8 = plStack_160;
  if (plStack_160 != (longlong *)0x0) {
    (**(code **)(*plStack_160 + 0x28))();
  }
  lVar9 = FUN_180299eb0(lVar15,param_3,&plStack_120,acStack_248);
  lVar15 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  if ((lVar9 != 0) && (*(longlong *)(lVar15 + 0x82a0) != (longlong)**(int **)(lVar9 + 0x10))) {
    (**(code **)(**(longlong **)(lVar15 + 0x8400) + 0x228))
              (*(longlong **)(lVar15 + 0x8400),*(uint64_t *)(*(int **)(lVar9 + 0x10) + 6),0,0);
    *(longlong *)(lVar15 + 0x82a0) = (longlong)**(int **)(lVar9 + 0x10);
  }
  lVar15 = *(longlong *)(_DAT_180c86938 + 0x1c70);
  plVar10 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  pcVar3 = *(code **)(*plVar10 + 0x238);
  *(int32_t *)(lVar15 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
  (*pcVar3)(plVar10,0,1,lVar15 + 0x10);
  lVar15 = *(longlong *)(_DAT_180c86938 + 0x1c88);
  plVar10 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  pcVar3 = *(code **)(*plVar10 + 0x238);
  *(int32_t *)(lVar15 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
  (*pcVar3)(plVar10,2,1,lVar15 + 0x10);
  lVar15 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  lVar9 = *(longlong *)(param_1 + 0x468);
  pplStack_240 = pplVar12;
  if (lVar9 != 0) {
    *(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
    pplStack_240 = *(longlong ***)(lVar9 + 0x20);
  }
  plVar10 = *(longlong **)(lVar15 + 0x8400);
  uStack_258 = 0;
  (**(code **)(*plVar10 + 0x220))(plVar10,1,1,&pplStack_240);
  plVar10 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  uVar20 = (**(code **)(*plVar10 + 0x148))(plVar10,1,1,1);
  FUN_18009e9e0(uVar20,&plStack_1c0,&unknown_var_2712_ptr);
  plVar10 = plStack_1c0;
  if (*(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1750) != 0.0) {
    plStack_120 = (longlong *)&unknown_var_672_ptr;
    puStack_118 = auStack_108;
    auStack_108[0] = auStack_108[0] & 0xffffffffffffff00;
    uStack_110 = CONCAT44((int)(uStack_110 >> 0x20),0x10);
    strcpy_s(auStack_108,0x20,&unknown_var_2856_ptr);
    plVar10 = (longlong *)FUN_180240430(plVar10,&plStack_120,1);
    uStack_150._0_4_ = SUB84(plVar10,0);
    uStack_150._4_4_ = (int32_t)((ulonglong)plVar10 >> 0x20);
    uVar7 = CONCAT22(uStack_144._2_2_,(int16_t)uStack_144);
    uVar23 = (int32_t)uStack_150;
    uVar24 = uStack_150._4_4_;
    iVar14 = iStack_148;
    uStack_150 = plVar10;
  }
  plStack_208 = (longlong *)0x0;
  plStack_200 = (longlong *)&unknown_var_3456_ptr;
  uStack_1e8 = 0;
  lStack_1f8 = 0;
  uStack_1f0 = 0;
  plStack_1d0 = (longlong *)0x0;
  plStack_228 = plStack_1c0;
  uStack_220 = (longlong *)CONCAT44(uVar24,uVar23);
  uStack_218 = CONCAT44(uVar7,iVar14);
  uStack_210 = 2;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  lVar15 = plStack_1c0[0x2b7];
  pplStack_240 = &plStack_120;
  plStack_120 = plStack_1c0;
  puStack_118 = (ulonglong *)uStack_220;
  uStack_110 = uStack_218;
  auStack_108[0] = CONCAT44(auStack_108[0]._4_4_,2);
  auStack_108[1] = 0;
  FUN_180627ae0(auStack_f8,&plStack_200);
  uStack_d8 = uStack_1e0;
  uStack_d0 = uStack_1d8;
  plStack_c8 = plStack_1d0;
  if (plStack_1d0 != (longlong *)0x0) {
    (**(code **)(*plStack_1d0 + 0x28))();
  }
  lVar9 = FUN_180299eb0(lVar15,param_3,&plStack_120,acStack_248);
  lVar15 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  if ((lVar9 != 0) && (*(longlong *)(lVar15 + 0x82a0) != (longlong)**(int **)(lVar9 + 0x10))) {
    (**(code **)(**(longlong **)(lVar15 + 0x8400) + 0x228))
              (*(longlong **)(lVar15 + 0x8400),*(uint64_t *)(*(int **)(lVar9 + 0x10) + 6),0,0);
    *(longlong *)(lVar15 + 0x82a0) = (longlong)**(int **)(lVar9 + 0x10);
  }
  lVar15 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  lVar9 = *(longlong *)(param_1 + 0x468);
  pplStack_240 = pplVar12;
  if (lVar9 != 0) {
    *(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
    pplStack_240 = *(longlong ***)(lVar9 + 0x20);
  }
  plVar10 = *(longlong **)(lVar15 + 0x8400);
  uStack_258 = 0;
  (**(code **)(*plVar10 + 0x220))(plVar10,1,1,&pplStack_240);
  lVar9 = _DAT_180c86938;
  lVar15 = _DAT_180c86890;
  if (*(char *)(_DAT_180c86890 + 0x12f8) == '\x01') {
    *(int32_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1c78) =
         *(int32_t *)(_DAT_180c86890 + 0x1304);
    *(int32_t *)(*(longlong *)(lVar9 + 0x1cd8) + 0x1c7c) = *(int32_t *)(lVar15 + 0x12fc);
    *(int32_t *)(*(longlong *)(lVar9 + 0x1cd8) + 0x1c74) = *(int32_t *)(lVar15 + 0x1300);
    *(int32_t *)(*(longlong *)(lVar9 + 0x1cd8) + 0x1bfc) = *(int32_t *)(lVar15 + 0x1308);
    *(int32_t *)(*(longlong *)(lVar9 + 0x1cd8) + 0x1c60) = *(int32_t *)(lVar15 + 0x1318);
    *(int32_t *)(*(longlong *)(lVar9 + 0x1cd8) + 0x1c64) = *(int32_t *)(lVar15 + 0x131c);
  }
  *(uint64_t *)(*(longlong *)(lVar9 + 0x1cd8) + 0x1df0) = *(uint64_t *)(param_3 + 0x35a8);
  *(uint64_t *)(*(longlong *)(lVar9 + 0x1cd8) + 0x1df8) = *(uint64_t *)(param_3 + 0x35b0);
  *(float *)(*(longlong *)(lVar9 + 0x1cd8) + 0x1be0) = 0.5 / *(float *)(param_3 + 0x11c20);
  *(float *)(*(longlong *)(lVar9 + 0x1cd8) + 0x1be4) = 0.5 / *(float *)(param_3 + 0x11c24);
  *(float *)(*(longlong *)(lVar9 + 0x1cd8) + 0x1be8) =
       1.0 / (float)*(ushort *)(*(longlong *)(param_1 + 0x140) + 0x32c);
  *(float *)(*(longlong *)(lVar9 + 0x1cd8) + 0x1bec) =
       1.0 / (float)*(ushort *)(*(longlong *)(param_1 + 0x140) + 0x32e);
  FUN_18029fc10(*(longlong *)(lVar9 + 0x1cd8),*(uint64_t *)(lVar9 + 0x1c88),
                *(longlong *)(lVar9 + 0x1cd8) + 0x1be0,0x230);
  lVar15 = *(longlong *)(_DAT_180c86938 + 0x1c88);
  plVar10 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  pcVar3 = *(code **)(*plVar10 + 0x238);
  *(int32_t *)(lVar15 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
  (*pcVar3)(plVar10,2,1,lVar15 + 0x10);
  plVar10 = (longlong *)(param_1 + 0x138);
  pplVar17 = pplVar12;
  plVar13 = plVar10;
  do {
    if (*plVar13 != 0) {
      uStack_258 = CONCAT44(uStack_258._4_4_,0xffffffff);
      FUN_18029d150(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),pplVar17,*plVar13,0x20);
    }
    uVar6 = (int)pplVar17 + 1;
    pplVar17 = (longlong **)(ulonglong)uVar6;
    plVar13 = plVar13 + 1;
  } while ((int)uVar6 < 0x10);
  lVar15 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  pplVar11 = (longlong **)(longlong)(1 - *(int *)(param_1 + 0x460));
  pplVar17 = pplVar12;
  if ((((*(longlong *)(param_1 + 0x450 + (longlong)pplVar11 * 8) != 0) &&
       (pplVar11 = (longlong **)FUN_18023a940(), pplVar11 != (longlong **)0x0)) &&
      (pplVar17 = pplVar11, pplVar11[1] == (longlong *)0x0)) && (pplVar11[2] == (longlong *)0x0)) {
    pplVar17 = (longlong **)0x0;
  }
  uVar6 = (uint)pplVar11;
  if ((((*(longlong ***)(lVar15 + 0x8448) != pplVar17) || (*(int *)(lVar15 + 0x8840) != -1)) ||
      (*(int *)(lVar15 + 0x8a40) != 0x20)) &&
     (((pplVar17 == (longlong **)0x0 || (pplVar17[1] != (longlong *)0x0)) ||
      (pplVar17[2] != (longlong *)0x0)))) {
    if (pplVar17 != (longlong **)0x0) {
      pplVar12 = (longlong **)pplVar17[2];
    }
    pplStack_240 = pplVar12;
    uVar6 = (**(code **)(**(longlong **)(lVar15 + 0x8400) + 0x218))
                      (*(longlong **)(lVar15 + 0x8400),2,1,&pplStack_240);
    *(longlong ***)(lVar15 + 0x8448) = pplVar17;
    *(int32_t *)(lVar15 + 0x8840) = 0xffffffff;
    *(int32_t *)(lVar15 + 0x8a40) = 0x20;
    *(int *)(lVar15 + 0x82b4) = *(int *)(lVar15 + 0x82b4) + 1;
  }
  auVar21._0_4_ = *(float *)(param_3 + 0x11c20) * 0.03125;
  iVar14 = (int)auVar21._0_4_;
  if ((iVar14 != -0x80000000) && ((float)iVar14 != auVar21._0_4_)) {
    auVar21._4_4_ = auVar21._0_4_;
    auVar21._8_8_ = 0;
    uVar6 = movmskps(uVar6,auVar21);
    uVar6 = uVar6 & 1 ^ 1;
    auVar21._0_4_ = (float)(int)(iVar14 + uVar6);
  }
  auVar22._0_4_ = *(float *)(param_3 + 0x11c24) * 0.03125;
  iVar14 = (int)auVar22._0_4_;
  if ((iVar14 != -0x80000000) && ((float)iVar14 != auVar22._0_4_)) {
    auVar22._4_4_ = auVar22._0_4_;
    auVar22._8_8_ = 0;
    uVar6 = movmskps(uVar6,auVar22);
    auVar22._0_4_ = (float)(int)(iVar14 + (uVar6 & 1 ^ 1));
  }
  plVar13 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  (**(code **)(*plVar13 + 0x148))
            (plVar13,(longlong)auVar21._0_4_ & 0xffffffff,(longlong)auVar22._0_4_,1);
  if (plStack_1d0 != (longlong *)0x0) {
    (**(code **)(*plStack_1d0 + 0x38))();
  }
  pplStack_240 = &plStack_200;
  plStack_200 = (longlong *)&unknown_var_3456_ptr;
  if (lStack_1f8 == 0) {
    lStack_1f8 = 0;
    uStack_1e8 = uStack_1e8 & 0xffffffff00000000;
    plStack_200 = (longlong *)&unknown_var_720_ptr;
    if (plStack_208 != (longlong *)0x0) {
      (**(code **)(*plStack_208 + 0x38))();
    }
    if (plStack_1c0 != (longlong *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if (plStack_160 != (longlong *)0x0) {
      (**(code **)(*plStack_160 + 0x38))();
    }
    pplStack_240 = &plStack_190;
    plStack_190 = (longlong *)&unknown_var_3456_ptr;
    if (lStack_188 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_188 = 0;
    uStack_178 = uStack_178 & 0xffffffff00000000;
    plStack_190 = (longlong *)&unknown_var_720_ptr;
    if (plStack_198 != (longlong *)0x0) {
      (**(code **)(*plStack_198 + 0x38))();
    }
    if (aplStack_238[0] != (longlong *)0x0) {
      (**(code **)(*aplStack_238[0] + 0x38))();
    }
    _DAT_180c8695c = _DAT_180c8695c + -1;
    (**(code **)(*_DAT_180c86968 + 0x20))();
    uStack_140 = &unknown_var_3456_ptr;
    if (puVar8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar8);
    }
    uStack_138 = (uint64_t *)0x0;
    uStack_128 = (ulonglong)uStack_128._4_4_ << 0x20;
    uStack_140 = &unknown_var_720_ptr;
    plStack_120 = (longlong *)&unknown_var_3456_ptr;
    auStack_108[0] = 0;
    puStack_118 = (ulonglong *)0x0;
    uStack_110 = uStack_110 & 0xffffffff00000000;
    puVar8 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x1a,0x13);
    *(int8_t *)puVar8 = 0;
    puStack_118 = puVar8;
    uVar7 = FUN_18064e990(puVar8);
    auStack_108[0] = CONCAT44(auStack_108[0]._4_4_,uVar7);
    *puVar8 = 0x6f4e786674736f70;
    puVar8[1] = 0x6f7475613a3a6564;
    puVar8[2] = 0x7275736f7078655f;
    *(int16_t *)(puVar8 + 3) = 0x65;
    uStack_110 = CONCAT44(uStack_110._4_4_,0x19);
    FUN_1802c22a0(acStack_248,puVar8);
    lVar15 = _DAT_180c86870;
    if (*(int *)(param_1 + 0x48) < 1) {
      lVar9 = *(longlong *)(param_1 + 0x428);
      if ((lVar9 == 0) || (plVar13 = *(longlong **)(lVar9 + 0x1d8), plVar13 == (longlong *)0x0)) {
        plVar13 = (longlong *)0x0;
      }
      else if (_DAT_180c86870 != 0) {
        *(longlong *)(lVar9 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
      }
      lVar9 = *(longlong *)(param_1 + 0x448);
      if ((lVar9 == 0) || (plVar18 = *(longlong **)(lVar9 + 0x1e0), plVar18 == (longlong *)0x0)) {
        plVar18 = (longlong *)0x0;
      }
      else if (lVar15 != 0) {
        *(longlong *)(lVar9 + 0x340) = (longlong)*(int *)(lVar15 + 0x224);
      }
      plVar4 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
      if ((plVar13 != (longlong *)0x0) && (*plVar13 != 0)) {
        (**(code **)(*plVar4 + 0x70))(plVar4,*plVar13,1);
      }
      lVar15 = _DAT_180c86938;
      plVar4[0x1077] = (longlong)plVar13;
      plVar13 = *(longlong **)(lVar15 + 0x1cd8);
      if ((plVar18 != (longlong *)0x0) && (*plVar18 != 0)) {
        (**(code **)(*plVar13 + 0x70))(plVar13,*plVar18,2);
        lVar15 = _DAT_180c86938;
      }
      plVar13[0x107e] = (longlong)plVar18;
      FUN_18029de40(*(uint64_t *)(lVar15 + 0x1cd8),1);
      dVar1 = *(double *)(param_1 + 0x58);
      dVar2 = *(double *)(param_1 + 0x60);
      lVar15 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      uStack_140 = (void *)
                   CONCAT44((float)(int)*(float *)(param_3 + 0x11c1c),
                            (float)(int)*(float *)(param_3 + 0x11c18));
      uStack_138 = (uint64_t *)CONCAT44((float)dVar2,(float)dVar1);
      uStack_130 = 0;
      uStack_12c = 0x3f800000;
      plVar13 = *(longlong **)(lVar15 + 0x8400);
      (**(code **)(*plVar13 + 0x160))(plVar13,1,&uStack_140);
      uStack_150 = (longlong *)0x0;
      plVar13 = *(longlong **)(lVar15 + 0x8400);
      iStack_148 = (int)dVar1;
      uStack_144 = (int)dVar2;
      (**(code **)(*plVar13 + 0x168))(plVar13,1,&uStack_150);
      lVar9 = _DAT_180c86938;
      lVar15 = _DAT_180c86890;
      if (*(char *)(_DAT_180c86890 + 0x12f8) == '\x01') {
        *(int32_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1c78) =
             *(int32_t *)(_DAT_180c86890 + 0x1304);
        *(int32_t *)(*(longlong *)(lVar9 + 0x1cd8) + 0x1c7c) = *(int32_t *)(lVar15 + 0x12fc);
        *(int32_t *)(*(longlong *)(lVar9 + 0x1cd8) + 0x1c74) = *(int32_t *)(lVar15 + 0x1300);
        *(int32_t *)(*(longlong *)(lVar9 + 0x1cd8) + 0x1bfc) = *(int32_t *)(lVar15 + 0x1308);
        *(int32_t *)(*(longlong *)(lVar9 + 0x1cd8) + 0x1c60) = *(int32_t *)(lVar15 + 0x1318);
        *(int32_t *)(*(longlong *)(lVar9 + 0x1cd8) + 0x1c64) = *(int32_t *)(lVar15 + 0x131c);
      }
      FUN_18029fc10(*(longlong *)(lVar9 + 0x1cd8),*(uint64_t *)(lVar9 + 0x1c88),
                    *(longlong *)(lVar9 + 0x1cd8) + 0x1be0,0x230);
      plVar13 = (longlong *)0x0;
      aplStack_238[0] = (longlong *)0x0;
      uStack_258 = CONCAT44(uStack_258._4_4_,param_5);
      FUN_1801f7d20(param_1,param_3,auStack_1c8,aplStack_238);
      uStack_150 = aplStack_238[0];
      iStack_148 = auStack_1c8[0];
      uStack_144._0_2_ = 4;
      plStack_228 = *(longlong **)(param_1 + 0x30);
      plStack_208 = (longlong *)0x0;
      plStack_200 = (longlong *)&unknown_var_3456_ptr;
      uStack_1e8 = 0;
      lStack_1f8 = 0;
      uStack_1f0 = 0;
      plStack_1d0 = (longlong *)0x0;
      uStack_218 = CONCAT26(uStack_144._2_2_,CONCAT24(4,auStack_1c8[0]));
      uStack_220 = aplStack_238[0];
      uStack_210 = 2;
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uVar20 = *(uint64_t *)(*(longlong *)(param_1 + 0x30) + 0x15b8);
      pplStack_240 = &plStack_1b8;
      plStack_1b0 = aplStack_238[0];
      uStack_1a0 = 2;
      plStack_198 = (longlong *)0x0;
      plStack_1b8 = plStack_228;
      uStack_1a8 = uStack_218;
      FUN_180627ae0(&plStack_190,&plStack_200);
      uStack_170 = uStack_1e0;
      uStack_168 = uStack_1d8;
      plStack_160 = plStack_1d0;
      if (plStack_1d0 != (longlong *)0x0) {
        (**(code **)(*plStack_1d0 + 0x28))();
      }
      uVar20 = FUN_180299eb0(uVar20,param_3,&plStack_1b8,acStack_248);
      if (acStack_248[0] == '\0') {
        *(uint64_t *)(param_1 + 0xf8) = uVar20;
        *(int32_t *)(param_1 + 0x134) = 1;
        *(int32_t *)(param_1 + 0x114) = *(int32_t *)(*(longlong *)(param_1 + 0x428) + 0x324);
        plVar18 = plVar13;
        do {
          if (*plVar10 != 0) {
            uStack_258 = CONCAT44(uStack_258._4_4_,0xffffffff);
            FUN_18029d150(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),plVar18,*plVar10,0x10);
          }
          uVar6 = (int)plVar18 + 1;
          plVar18 = (longlong *)(ulonglong)uVar6;
          plVar10 = plVar10 + 1;
        } while ((int)uVar6 < 0x10);
        pplStack_240 = (longlong **)0x0;
        plVar10 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
        uStack_258 = 0;
        (**(code **)(*plVar10 + 0x220))(plVar10,1,1,&pplStack_240);
        lVar5 = _DAT_180c86870;
        lVar15 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
        lVar9 = *(longlong *)(param_1 + 0x468);
        if ((lVar9 != 0) &&
           (*(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224), lVar9 != -0x10
           )) {
          *(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(lVar5 + 0x224);
          plVar13 = *(longlong **)(lVar9 + 0x18);
        }
        plVar10 = *(longlong **)(lVar15 + 0x8400);
        aplStack_238[0] = plVar13;
        (**(code **)(*plVar10 + 0x40))(plVar10,10,1,aplStack_238);
        FUN_18029d000(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),4);
        FUN_18029cdd0(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),param_1 + 0xf8);
        lVar15 = _DAT_180c86938;
        lVar9 = strnlen(&system_data_6f50,0x3f);
        strncpy(lVar15 + 0x1ce0,&system_data_6f50,lVar9);
        *(int8_t *)(lVar15 + 0x1ce0 + lVar9) = 0;
        FUN_18029e110(*(uint64_t *)(_DAT_180c86938 + 0x1cd8));
        pplStack_240 = (longlong **)0x0;
        plVar10 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
        (**(code **)(*plVar10 + 0x40))(plVar10,10,1,&pplStack_240);
        if (plStack_1d0 != (longlong *)0x0) {
          (**(code **)(*plStack_1d0 + 0x38))();
        }
        pplStack_240 = &plStack_200;
        plStack_200 = (longlong *)&unknown_var_3456_ptr;
        if (lStack_1f8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_1f8 = 0;
        uStack_1e8 = uStack_1e8 & 0xffffffff00000000;
        plStack_200 = (longlong *)&unknown_var_720_ptr;
        if (plStack_208 != (longlong *)0x0) {
          (**(code **)(*plStack_208 + 0x38))();
        }
        _DAT_180c8695c = _DAT_180c8695c + -1;
        (**(code **)(*_DAT_180c86968 + 0x20))();
        plStack_120 = (longlong *)&unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar8);
      }
      if (plStack_1d0 != (longlong *)0x0) {
        (**(code **)(*plStack_1d0 + 0x38))();
      }
      pplStack_240 = &plStack_200;
      plStack_200 = (longlong *)&unknown_var_3456_ptr;
      if (lStack_1f8 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_1f8 = 0;
      uStack_1e8 = uStack_1e8 & 0xffffffff00000000;
      plStack_200 = (longlong *)&unknown_var_720_ptr;
      if (plStack_208 != (longlong *)0x0) {
        (**(code **)(*plStack_208 + 0x38))();
      }
    }
    else {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
    }
    _DAT_180c8695c = _DAT_180c8695c + -1;
    (**(code **)(*_DAT_180c86968 + 0x20))();
    plStack_120 = (longlong *)&unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



uint64_t *
FUN_180402690(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_6512_ptr;
  FUN_1801f9920();
  if ((param_2 & 1) != 0) {
    free(param_1,0x450,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804026e0(longlong param_1,longlong param_2)
void FUN_1804026e0(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t auStack_1e8 [32];
  longlong *plStack_1c8;
  longlong *plStack_1c0;
  longlong *plStack_1b8;
  int32_t uStack_1b0;
  int32_t uStack_1ac;
  int32_t uStack_1a8;
  int32_t uStack_1a4;
  int32_t uStack_1a0;
  int32_t uStack_19c;
  int32_t uStack_198;
  int32_t uStack_194;
  int32_t uStack_190;
  int8_t uStack_18c;
  uint64_t uStack_18b;
  int32_t uStack_180;
  int8_t uStack_17c;
  uint64_t uStack_178;
  void *puStack_168;
  int8_t *puStack_160;
  int32_t uStack_158;
  int8_t auStack_150 [136];
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [136];
  ulonglong uStack_28;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1e8;
  FUN_1801f9270();
  uStack_1a8 = 1;
  uStack_1a4 = 1;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  uStack_190 = 0x3f800000;
  uStack_18b = 1;
  uStack_18c = 0;
  uStack_180 = 0xffffffff;
  uStack_17c = 0;
  if (*(char *)(param_1 + 0x4c) != '\0') {
    uStack_1b0 = (int32_t)
                 (longlong)((float)*(double *)(param_1 + 0x58) * *(float *)(param_2 + 0x11c20));
    uStack_1ac = (int32_t)
                 (longlong)((float)*(double *)(param_1 + 0x60) * *(float *)(param_2 + 0x11c24));
    uStack_1a0 = 0x26;
    puStack_168 = &unknown_var_3432_ptr;
    puStack_160 = auStack_150;
    auStack_150[0] = 0;
    uStack_158 = 0xf;
    strcpy_s(auStack_150,0x80,&unknown_var_6416_ptr);
    puVar2 = (uint64_t *)FUN_1800b1230(_DAT_180c86930,&plStack_1c0,&puStack_168,&uStack_1b0);
    uVar1 = *puVar2;
    *puVar2 = 0;
    plStack_1c8 = *(longlong **)(param_1 + 0x428);
    *(uint64_t *)(param_1 + 0x428) = uVar1;
    if (plStack_1c8 != (longlong *)0x0) {
      (**(code **)(*plStack_1c8 + 0x38))();
    }
    if (plStack_1c0 != (longlong *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    puStack_168 = &unknown_var_720_ptr;
    uStack_1a0 = 0x26;
    puStack_c8 = &unknown_var_3432_ptr;
    puStack_c0 = auStack_b0;
    auStack_b0[0] = 0;
    uStack_b8 = 0xe;
    strcpy_s(auStack_b0,0x80,&unknown_var_6432_ptr);
    puVar2 = (uint64_t *)FUN_1800b1230(_DAT_180c86930,&plStack_1b8,&puStack_c8,&uStack_1b0);
    uVar1 = *puVar2;
    *puVar2 = 0;
    plStack_1c8 = *(longlong **)(param_1 + 0x430);
    *(uint64_t *)(param_1 + 0x430) = uVar1;
    if (plStack_1c8 != (longlong *)0x0) {
      (**(code **)(*plStack_1c8 + 0x38))();
    }
    if (plStack_1b8 != (longlong *)0x0) {
      (**(code **)(*plStack_1b8 + 0x38))();
    }
    puStack_c8 = &unknown_var_720_ptr;
    uStack_1a0 = 0x26;
    puStack_168 = &unknown_var_3432_ptr;
    puStack_160 = auStack_150;
    auStack_150[0] = 0;
    uStack_158 = 0xe;
    strcpy_s(auStack_150,0x80,&unknown_var_6448_ptr);
    puVar2 = (uint64_t *)FUN_1800b1230(_DAT_180c86930,&plStack_1c8,&puStack_168,&uStack_1b0);
    uVar1 = *puVar2;
    *puVar2 = 0;
    plStack_1c0 = *(longlong **)(param_1 + 0x438);
    *(uint64_t *)(param_1 + 0x438) = uVar1;
    if (plStack_1c0 != (longlong *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if (plStack_1c8 != (longlong *)0x0) {
      (**(code **)(*plStack_1c8 + 0x38))();
    }
    puStack_168 = &unknown_var_720_ptr;
    uStack_1a0 = 0x26;
    puStack_c8 = &unknown_var_3432_ptr;
    puStack_c0 = auStack_b0;
    auStack_b0[0] = 0;
    uStack_b8 = 0xd;
    strcpy_s(auStack_b0,0x80,&unknown_var_6464_ptr);
    puVar2 = (uint64_t *)FUN_1800b1230(_DAT_180c86930,&plStack_1c0,&puStack_c8,&uStack_1b0);
    uVar1 = *puVar2;
    *puVar2 = 0;
    plStack_1b8 = *(longlong **)(param_1 + 0x440);
    *(uint64_t *)(param_1 + 0x440) = uVar1;
    if (plStack_1b8 != (longlong *)0x0) {
      (**(code **)(*plStack_1b8 + 0x38))();
    }
    if (plStack_1c0 != (longlong *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    puStack_c8 = &unknown_var_720_ptr;
  }
  plStack_1b8 = *(longlong **)(param_1 + 0x448);
  *(uint64_t *)(param_1 + 0x448) = 0;
  if (plStack_1b8 != (longlong *)0x0) {
    (**(code **)(*plStack_1b8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_1e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



