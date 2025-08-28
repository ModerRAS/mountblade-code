#include "TaleWorlds.Native.Split.h"

// 99_part_02_part038.c - 2 个函数

// 函数: void FUN_1801acb30(longlong param_1,longlong *param_2,uint64_t param_3,char param_4)
void FUN_1801acb30(longlong param_1,longlong *param_2,uint64_t param_3,char param_4)

{
  uint *puVar1;
  float fVar2;
  int32_t uVar3;
  uint64_t uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint64_t *puVar15;
  int8_t auStack_298 [32];
  int8_t uStack_278;
  char cStack_268;
  uint64_t uStack_260;
  int32_t uStack_258;
  void *puStack_250;
  uint64_t *puStack_248;
  int32_t uStack_240;
  uint64_t uStack_238;
  void *puStack_230;
  uint64_t *puStack_228;
  int32_t uStack_220;
  uint64_t uStack_218;
  longlong *aplStack_210 [2];
  int32_t uStack_200;
  int32_t uStack_1fc;
  int32_t uStack_1f8;
  int32_t uStack_1f4;
  int32_t uStack_1f0;
  uint64_t uStack_1ec;
  uint64_t uStack_1e4;
  int8_t uStack_1dc;
  uint64_t uStack_1db;
  int32_t uStack_1d0;
  int8_t uStack_1cc;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  code *pcStack_1b8;
  code *pcStack_1b0;
  longlong *plStack_1a8;
  longlong *plStack_1a0;
  longlong *plStack_198;
  longlong *plStack_190;
  longlong *plStack_188;
  longlong *plStack_180;
  longlong *plStack_178;
  longlong *plStack_170;
  longlong *plStack_168;
  longlong *plStack_160;
  longlong *plStack_158;
  longlong *plStack_150;
  longlong *plStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  longlong *plStack_130;
  longlong *plStack_128;
  longlong *plStack_120;
  longlong *plStack_118;
  longlong *plStack_110;
  longlong *plStack_108;
  longlong *plStack_100;
  uint64_t uStack_f8;
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_298;
  plVar14 = (longlong *)0x0;
  uStack_258 = 0;
  cStack_268 = param_4;
  if ((((*(char *)(param_1 + 0x2a63) != '\0') && (*(char *)((longlong)param_2 + 0x10d) == '\0')) &&
      ((int)param_2[0x22] != 0)) && (lVar8 = FUN_180244ff0(param_2[0x23]), lVar8 != 0)) {
    uVar3 = *(int32_t *)(param_2[0x23] + 0x3590);
    uStack_260 = (longlong *)CONCAT44(uStack_260._4_4_,*(int32_t *)(param_2[0x23] + 0x3594));
    puStack_230 = &UNK_180a3c3e0;
    uStack_218 = 0;
    puStack_228 = (uint64_t *)0x0;
    uStack_220 = 0;
    puVar9 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar9 = 0;
    puStack_228 = puVar9;
    uVar6 = FUN_18064e990(puVar9);
    *puVar9 = 0x5f72756f746e6f63;
    *(int32_t *)(puVar9 + 1) = 0x725f6372;
    *(int16_t *)((longlong)puVar9 + 0xc) = 0x5f74;
    *(int8_t *)((longlong)puVar9 + 0xe) = 0;
    uStack_220 = 0xe;
    iVar7 = *(int *)(param_1 + 0x4e8);
    uStack_218._0_4_ = uVar6;
    if (0 < iVar7) {
      if ((iVar7 != -0xe) && (uVar6 < iVar7 + 0xfU)) {
        uStack_278 = 0x13;
        puVar9 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar9,iVar7 + 0xfU,0x10);
        puStack_228 = puVar9;
        uStack_218._0_4_ = FUN_18064e990(puVar9);
        iVar7 = *(int *)(param_1 + 0x4e8);
      }
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((longlong)puVar9 + 0xe),*(uint64_t *)(param_1 + 0x4e0),
             (longlong)(iVar7 + 1));
    }
    puStack_250 = &UNK_180a3c3e0;
    uStack_238 = 0;
    puStack_248 = (uint64_t *)0x0;
    uStack_240 = 0;
    puVar10 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar10 = 0;
    puStack_248 = puVar10;
    uVar6 = FUN_18064e990(puVar10);
    *puVar10 = 0x5f72756f746e6f63;
    *(int32_t *)(puVar10 + 1) = 0x645f6372;
    *(int16_t *)((longlong)puVar10 + 0xc) = 0x5f73;
    *(int8_t *)((longlong)puVar10 + 0xe) = 0;
    uStack_240 = 0xe;
    iVar7 = *(int *)(param_1 + 0x4e8);
    uStack_238._0_4_ = uVar6;
    if (0 < iVar7) {
      if ((iVar7 != -0xe) && (uVar6 < iVar7 + 0xfU)) {
        uStack_278 = 0x13;
        puVar10 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar10,iVar7 + 0xfU,0x10);
        puStack_248 = puVar10;
        uStack_238._0_4_ = FUN_18064e990(puVar10);
        iVar7 = *(int *)(param_1 + 0x4e8);
      }
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((longlong)puVar10 + 0xe),*(uint64_t *)(param_1 + 0x4e0),
             (longlong)(iVar7 + 1));
    }
    uStack_1f8 = 1;
    uStack_1f4 = 1;
    uStack_1db = 1;
    uStack_1dc = 0;
    uStack_1cc = 0;
    uStack_1fc = (int32_t)uStack_260;
    uStack_1f0 = 7;
    uStack_1ec = 0;
    uStack_1e4 = 0;
    uStack_200 = uVar3;
    if (*(code **)(*param_2 + 0xb8) == (code *)&UNK_1802426a0) {
      lVar8 = param_2[0xda];
    }
    else {
      lVar8 = (**(code **)(*param_2 + 0xb8))(param_2);
    }
    uStack_1d0 = *(int32_t *)(lVar8 + 0xa0);
    puStack_e8 = &UNK_1809fcc28;
    puStack_e0 = auStack_d0;
    auStack_d0[0] = 0;
    uStack_d8 = 0xe;
    puVar15 = (uint64_t *)&DAT_18098bc73;
    if (puVar9 != (uint64_t *)0x0) {
      puVar15 = puVar9;
    }
    strcpy_s(auStack_d0,0x80,puVar15);
    lVar8 = param_2[0xc6];
    if (((lVar8 == 0) || (cVar5 = func_0x0001800ba3b0(lVar8 + 0x108,&uStack_200), cVar5 == '\0')) ||
       (puVar9 = puStack_228, puVar10 = puStack_248, *(int *)(lVar8 + 0x380) == 0)) {
      plVar11 = (longlong *)FUN_1800b1230(_DAT_180c86930,aplStack_210,&puStack_e8,&uStack_200);
      lVar8 = *plVar11;
      *plVar11 = 0;
      uStack_260 = (longlong *)param_2[0xc6];
      param_2[0xc6] = lVar8;
      if (uStack_260 != (longlong *)0x0) {
        (**(code **)(*uStack_260 + 0x38))();
      }
      if (aplStack_210[0] != (longlong *)0x0) {
        (**(code **)(*aplStack_210[0] + 0x38))();
      }
    }
    _Thrd_id();
    puStack_e8 = &UNK_18098bcb0;
    puStack_250 = &UNK_180a3c3e0;
    if (puVar10 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar10);
    }
    puStack_248 = (uint64_t *)0x0;
    uStack_238 = (ulonglong)uStack_238._4_4_ << 0x20;
    puStack_250 = &UNK_18098bcb0;
    puStack_230 = &UNK_180a3c3e0;
    if (puVar9 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar9);
    }
    puStack_228 = (uint64_t *)0x0;
    uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
    puStack_230 = &UNK_18098bcb0;
    param_4 = cStack_268;
  }
  if (*(int *)(param_1 + 0x36a8) != *(int *)(param_1 + 0x3358)) {
    FUN_18018d8f0(param_1 + 0x3368,param_1 + 0x3018);
  }
  FUN_1801b51a0(param_1);
  if (*(longlong *)(param_1 + 0x60b80) != 0) {
    FUN_1803b8390();
  }
  *(longlong *)(param_1 + 14000) = param_1 + 0x3368;
  fVar2 = *(float *)(param_1 + 0x3418);
  *(float *)(param_1 + 0x3e1c) = fVar2 * *(float *)(param_1 + 0x342c);
  *(float *)(param_1 + 0x3e20) = fVar2 * *(float *)(param_1 + 0x3430);
  *(float *)(param_1 + 0x3e24) = fVar2 * *(float *)(param_1 + 0x3434);
  *(int32_t *)(param_1 + 0x3e28) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x36b8) = *(int32_t *)(param_1 + 0x4b4);
  if (*(int *)(param_1 + 0x498) < 1) {
    plStack_1a0 = *(longlong **)(param_1 + 0x3878);
    *(uint64_t *)(param_1 + 0x3878) = 0;
    plStack_198 = plStack_1a0;
  }
  else {
    puVar9 = (uint64_t *)FUN_1800b08e0(_DAT_180c86930,&plStack_1a0,param_1 + 0x488,0);
    uVar4 = *puVar9;
    *puVar9 = 0;
    plStack_1a8 = *(longlong **)(param_1 + 0x3878);
    *(uint64_t *)(param_1 + 0x3878) = uVar4;
    if (plStack_1a8 != (longlong *)0x0) {
      (**(code **)(*plStack_1a8 + 0x38))();
    }
  }
  if (plStack_1a0 != (longlong *)0x0) {
    (**(code **)(*plStack_1a0 + 0x38))();
  }
  if (param_4 == '\0') {
    if (((param_2[0xb1] == 0) || (*(char *)(param_2[0xb1] + 0x28b8) == '\0')) &&
       (0 < (int)param_2[0xac])) {
      plVar11 = (longlong *)param_2[0xae];
    }
    else {
      plVar11 = (longlong *)FUN_1800bdfe0();
    }
    if (plVar11 != (longlong *)0x0) {
      plStack_188 = plVar11;
      (**(code **)(*plVar11 + 0x28))(plVar11);
    }
    plVar13 = *(longlong **)(param_1 + 0x36c0);
    *(longlong **)(param_1 + 0x36c0) = plVar11;
    plStack_188 = plVar13;
  }
  else {
    plVar13 = *(longlong **)(param_1 + 0x36c0);
    *(uint64_t *)(param_1 + 0x36c0) = 0;
    plStack_190 = plVar13;
  }
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x38))();
  }
  if (((int)param_2[0xac] < 2) || (plVar11 = (longlong *)param_2[0xaf], plVar11 == (longlong *)0x0))
  {
    plVar11 = (longlong *)FUN_1800bdfe0();
  }
  if (plVar11 != (longlong *)0x0) {
    plStack_180 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plStack_180 = *(longlong **)(param_1 + 0x3890);
  *(longlong **)(param_1 + 0x3890) = plVar11;
  if (plStack_180 != (longlong *)0x0) {
    (**(code **)(*plStack_180 + 0x38))();
  }
  lVar8 = *(longlong *)(param_1 + 0x60b80);
  plVar11 = plVar14;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == 9)) {
    plVar11 = *(longlong **)(lVar8 + 0x120);
  }
  if (plVar11 != (longlong *)0x0) {
    plStack_178 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plStack_178 = *(longlong **)(param_1 + 0x3da0);
  *(longlong **)(param_1 + 0x3da0) = plVar11;
  if (plStack_178 != (longlong *)0x0) {
    (**(code **)(*plStack_178 + 0x38))();
  }
  lVar8 = *(longlong *)(param_1 + 0x60b80);
  plVar11 = plVar14;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == 9)) {
    plVar11 = *(longlong **)(lVar8 + 0x130);
  }
  if (plVar11 != (longlong *)0x0) {
    plStack_170 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plStack_170 = *(longlong **)(param_1 + 0x3db0);
  *(longlong **)(param_1 + 0x3db0) = plVar11;
  if (plStack_170 != (longlong *)0x0) {
    (**(code **)(*plStack_170 + 0x38))();
  }
  lVar8 = *(longlong *)(param_1 + 0x60b80);
  plVar11 = plVar14;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == 9)) {
    plVar11 = *(longlong **)(lVar8 + 0x128);
  }
  if (plVar11 != (longlong *)0x0) {
    plStack_168 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plStack_168 = *(longlong **)(param_1 + 0x3da8);
  *(longlong **)(param_1 + 0x3da8) = plVar11;
  if (plStack_168 != (longlong *)0x0) {
    (**(code **)(*plStack_168 + 0x38))();
  }
  lVar8 = *(longlong *)(param_1 + 0x60b80);
  if (lVar8 == 0) {
    plVar11 = (longlong *)FUN_1800be610();
  }
  else {
    plVar11 = plVar14;
    if (*(int *)(lVar8 + 0x10) == 9) {
      plVar11 = *(longlong **)(lVar8 + 0x160);
    }
  }
  if (plVar11 != (longlong *)0x0) {
    plStack_160 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plStack_160 = *(longlong **)(param_1 + 0x3db8);
  *(longlong **)(param_1 + 0x3db8) = plVar11;
  if (plStack_160 != (longlong *)0x0) {
    (**(code **)(*plStack_160 + 0x38))();
  }
  lVar8 = *(longlong *)(param_1 + 0x60b80);
  if (lVar8 == 0) {
    plVar11 = (longlong *)FUN_1800be610();
  }
  else {
    if (*(char *)(*(longlong *)(lVar8 + 0x68) + 0x28b8) == '\0') {
      if (*(int *)(lVar8 + 0x10) == 9) {
        plVar11 = *(longlong **)(lVar8 + 0x168);
        goto LAB_1801ad30f;
      }
    }
    else if (*(int *)(lVar8 + 0x10) == 9) {
      plStack_158 = *(longlong **)(lVar8 + 0x168);
      *(uint64_t *)(lVar8 + 0x168) = 0;
      if (plStack_158 != (longlong *)0x0) {
        (**(code **)(*plStack_158 + 0x38))();
      }
    }
    plVar11 = (longlong *)FUN_1800bdfe0();
  }
LAB_1801ad30f:
  if (plVar11 != (longlong *)0x0) {
    plStack_150 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plStack_150 = *(longlong **)(param_1 + 0x3dc0);
  *(longlong **)(param_1 + 0x3dc0) = plVar11;
  if (plStack_150 != (longlong *)0x0) {
    (**(code **)(*plStack_150 + 0x38))();
  }
  plStack_148 = *(longlong **)(param_1 + 0x3dc8);
  *(uint64_t *)(param_1 + 0x3dc8) = 0;
  if (plStack_148 != (longlong *)0x0) {
    (**(code **)(*plStack_148 + 0x38))();
  }
  if (*(longlong *)(param_1 + 0x60b80) == 0) {
    plVar11 = (longlong *)FUN_1800be7e0();
  }
  else {
    plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x60b80) + 0x1c8);
  }
  if (plVar11 != (longlong *)0x0) {
    plStack_140 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plStack_140 = *(longlong **)(param_1 + 0x3de0);
  *(longlong **)(param_1 + 0x3de0) = plVar11;
  if (plStack_140 != (longlong *)0x0) {
    (**(code **)(*plStack_140 + 0x38))();
  }
  plVar11 = plVar14;
  if (*(longlong *)(param_1 + 0x60b80) != 0) {
    plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x60b80) + 0x1d0);
  }
  if (plVar11 != (longlong *)0x0) {
    plStack_138 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plStack_138 = *(longlong **)(param_1 + 0x3de8);
  *(longlong **)(param_1 + 0x3de8) = plVar11;
  if (plStack_138 != (longlong *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  plVar11 = plVar14;
  if (*(longlong *)(param_1 + 0x60b80) != 0) {
    plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x60b80) + 0x1d8);
  }
  if (plVar11 != (longlong *)0x0) {
    plStack_130 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plStack_130 = *(longlong **)(param_1 + 0x3df0);
  *(longlong **)(param_1 + 0x3df0) = plVar11;
  if (plStack_130 != (longlong *)0x0) {
    (**(code **)(*plStack_130 + 0x38))();
  }
  if (*(longlong *)(param_1 + 0x60b80) != 0) {
    plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x60b80) + 0x1e0);
  }
  if (plVar14 != (longlong *)0x0) {
    plStack_128 = plVar14;
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  plStack_128 = *(longlong **)(param_1 + 0x3df8);
  *(longlong **)(param_1 + 0x3df8) = plVar14;
  if (plStack_128 != (longlong *)0x0) {
    (**(code **)(*plStack_128 + 0x38))();
  }
  plVar14 = (longlong *)param_2[0xc6];
  if (plVar14 != (longlong *)0x0) {
    plStack_120 = plVar14;
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  plStack_120 = *(longlong **)(param_1 + 0x3e48);
  *(longlong **)(param_1 + 0x3e48) = plVar14;
  if (plStack_120 != (longlong *)0x0) {
    (**(code **)(*plStack_120 + 0x38))();
  }
  *(int *)(param_1 + 0x3870) = (int)param_2[0xb0];
  *(int32_t *)(param_1 + 0x3e44) = *(int32_t *)(param_1 + 0x3ec4);
  *(int32_t *)(param_1 + 0x3e00) = *(int32_t *)(_DAT_180c86870 + 0x224);
  *(int32_t *)(param_1 + 0x3e54) = *(int32_t *)(param_1 + 0x30d4);
  *(int32_t *)(param_1 + 0x3e50) = *(int32_t *)(param_1 + 0x4cc);
  lVar8 = *(longlong *)(param_1 + 0x328);
  if (lVar8 != 0) {
    lVar12 = *(longlong *)(lVar8 + 0x1c48);
    if (lVar12 == 0) {
      puVar9 = (uint64_t *)FUN_1800b08e0(_DAT_180c86930,&plStack_110,lVar8 + 0x1c00,1);
      uStack_258 = 2;
      uVar4 = *puVar9;
      *puVar9 = 0;
      plStack_118 = *(longlong **)(lVar8 + 0x1c48);
      *(uint64_t *)(lVar8 + 0x1c48) = uVar4;
      if (plStack_118 != (longlong *)0x0) {
        (**(code **)(*plStack_118 + 0x38))();
      }
      uStack_258 = 0;
      if (plStack_110 != (longlong *)0x0) {
        (**(code **)(*plStack_110 + 0x38))();
      }
      puVar1 = (uint *)(*(longlong *)(lVar8 + 0x1c48) + 0x328);
      *puVar1 = *puVar1 | 0x20000000;
      lVar12 = *(longlong *)(lVar8 + 0x1c48);
    }
    if (*(int *)(lVar12 + 0x380) != 2) {
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      pcStack_1b8 = (code *)0x0;
      pcStack_1b0 = _guard_check_icall;
      FUN_18023c450(*(uint64_t *)(lVar8 + 0x1c48),0,0,&uStack_1c8);
      if (pcStack_1b8 != (code *)0x0) {
        (*pcStack_1b8)(&uStack_1c8,0,0);
      }
    }
    plVar14 = *(longlong **)(lVar8 + 0x1c48);
    if (plVar14 != (longlong *)0x0) {
      plStack_108 = plVar14;
      (**(code **)(*plVar14 + 0x28))(plVar14);
    }
    plStack_108 = *(longlong **)(param_1 + 0x3dd0);
    *(longlong **)(param_1 + 0x3dd0) = plVar14;
    if (plStack_108 != (longlong *)0x0) {
      (**(code **)(*plStack_108 + 0x38))();
    }
    lVar8 = *(longlong *)(param_1 + 0x328);
    if (((*(float *)(lVar8 + 0x1c3c) == 0.0) && (*(float *)(lVar8 + 0x1c40) == 0.0)) &&
       (lVar12 = *(longlong *)(lVar8 + 0x1c48), lVar12 != 0)) {
      uStack_260 = (longlong *)
                   CONCAT44((float)*(ushort *)(lVar12 + 0x32e),(float)*(ushort *)(lVar12 + 0x32c));
      *(longlong **)(lVar8 + 0x1c3c) = uStack_260;
    }
    *(uint64_t *)(param_1 + 0x3dd8) = *(uint64_t *)(lVar8 + 0x1c3c);
  }
  plVar14 = (longlong *)param_2[0xc9];
  if (plVar14 != (longlong *)0x0) {
    plStack_100 = plVar14;
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  plStack_100 = *(longlong **)(param_1 + 0x3880);
  *(longlong **)(param_1 + 0x3880) = plVar14;
  if (plStack_100 != (longlong *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_298);
}



// WARNING: Removing unreachable block (ram,0x0001801ae05e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ad720(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801ad720(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  longlong lVar2;
  uint64_t *puVar3;
  bool bVar4;
  bool bVar5;
  int32_t uVar6;
  void *puVar7;
  uint64_t uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int32_t *puVar13;
  longlong *plVar14;
  undefined7 uVar15;
  float fVar16;
  float fVar17;
  int8_t auStack_128 [48];
  uint64_t uStack_f8;
  int32_t uStack_f0;
  int32_t uStack_ec;
  longlong *plStack_e8;
  longlong *plStack_e0;
  longlong *plStack_d8;
  int32_t uStack_d0;
  longlong *plStack_c8;
  longlong *plStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_a8;
  void **ppuStack_a0;
  uint64_t uStack_98;
  void *puStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  int32_t uStack_7c;
  float fStack_78;
  float fStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  ulonglong uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_128;
  bVar4 = false;
  uStack_d0 = 0;
  if (*(longlong *)(param_1 + 0x60b80) != 0) {
    uVar15 = (undefined7)((ulonglong)param_4 >> 8);
    if (*(int *)(param_1 + 0x60920) < 1) {
      FUN_1802e9fa0(*(uint64_t *)(param_1 + 0x8208),1,1);
    }
    else {
      FUN_1800c48e0(param_1,&plStack_d8,param_1 + 0x60910);
      uStack_f8 = (longlong **)CONCAT44(uStack_f8._4_4_,(float)uStack_f8);
      if ((plStack_d8 != (longlong *)0x0) &&
         (uStack_f8 = (longlong **)CONCAT44(uStack_f8._4_4_,(float)uStack_f8),
         plStack_d8[8] - plStack_d8[7] >> 4 != 0)) {
        puVar7 = (void *)FUN_180275820();
        uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,CONCAT71(uVar15,3));
        uStack_f8 = (longlong **)&uStack_a8;
        uStack_98 = &UNK_1801bbce0;
        puStack_90 = &UNK_1801bbcd0;
        uStack_a8 = puVar7;
        plVar9 = (longlong *)FUN_18006b640(uVar8,&uStack_a8);
        plStack_e8 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x28))(plVar9);
        }
        plVar9[3] = -2;
        uVar8 = _DAT_180c82868;
        uStack_f8 = &plStack_e0;
        plStack_e0 = plVar9;
        (**(code **)(*plVar9 + 0x28))(plVar9);
        FUN_18005e110(uVar8,&plStack_e0);
        plVar14 = (longlong *)plStack_d8[7];
        if (plVar14 < (longlong *)plStack_d8[8]) {
          do {
            *(int32_t *)(*plVar14 + 0x104) = 0;
            plVar14 = plVar14 + 2;
          } while (plVar14 < (longlong *)plStack_d8[8]);
        }
        FUN_180276f30(plStack_d8,(longlong)plStack_d8 + 0x214,1);
        FUN_1802e9fa0(*(uint64_t *)(param_1 + 0x8208),1,1);
        uVar8 = *(uint64_t *)(param_1 + 0x8208);
        uStack_f8 = &plStack_e0;
        plStack_e0 = plStack_d8;
        if (plStack_d8 != (longlong *)0x0) {
          (**(code **)(*plStack_d8 + 0x28))();
        }
        FUN_1800ee890(uVar8,&plStack_e0,1);
        func_0x0001802eeba0(*(uint64_t *)(param_1 + 0x8208));
        lVar10 = *(longlong *)(param_1 + 0x8208);
        uVar1 = *(uint *)(lVar10 + 0x2ac);
        *(uint *)(lVar10 + 0x2ac) = uVar1 | 0x40000000;
        FUN_1802ee810(lVar10,uVar1);
        FUN_1802ee990(lVar10,uVar1);
        plStack_e0 = (longlong *)CONCAT44(plStack_e0._4_4_,1);
        (**(code **)(*plStack_d8 + 0x128))(plStack_d8,&plStack_e0);
        (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      if (plStack_d8 != (longlong *)0x0) {
        (**(code **)(*plStack_d8 + 0x38))();
      }
    }
  }
  if (*(int *)(param_1 + 0x60920) < 1) goto LAB_1801ae165;
  plVar9 = (longlong *)FUN_1802ed2b0(*(uint64_t *)(param_1 + 0x8208),&plStack_c0,0,0);
  lVar10 = *plVar9;
  if (plStack_c0 != (longlong *)0x0) {
    (**(code **)(*plStack_c0 + 0x38))();
  }
  if (lVar10 != 0) {
    uStack_7c = 0;
    fStack_80 = *(float *)(param_1 + 0x60930);
    lVar2 = *(longlong *)(param_1 + 0x60b80);
    fVar17 = (float)*(int *)(lVar2 + 0x18) * *(float *)(lVar2 + 0x1c);
    fVar16 = (float)*(int *)(lVar2 + 0x14) * *(float *)(lVar2 + 0x1c);
    uStack_a8 = (void *)CONCAT44(fVar16 * 0.0,fVar16 * 1.0);
    ppuStack_a0 = (void **)(ulonglong)(uint)(fVar16 * 0.0);
    uStack_98 = (void *)CONCAT44(fVar17 * 1.0,fVar17 * 0.0);
    puStack_90 = (void *)(ulonglong)(uint)(fVar17 * 0.0);
    fStack_88 = fStack_80 * 0.0;
    fStack_84 = fStack_80 * 0.0;
    fStack_80 = fStack_80 * 1.0;
    uStack_f8._4_4_ = fVar17 * 0.5;
    uStack_f8._0_4_ = fVar16 * 0.5;
    uStack_f0 = 0;
    uStack_ec = 0x7f7fffff;
    uStack_70 = 0;
    uStack_6c = 0x7f7fffff;
    fStack_78 = (float)uStack_f8;
    fStack_74 = uStack_f8._4_4_;
    FUN_1802ea790(*(uint64_t *)(param_1 + 0x8208),&uStack_a8);
    FUN_180276f30(lVar10,lVar10 + 0x214,1);
  }
  puVar3 = *(uint64_t **)(*(longlong *)(param_1 + 0x8208) + 0xf0);
  if (*(longlong *)(*(longlong *)(param_1 + 0x8208) + 0xf8) - (longlong)puVar3 >> 3 == 0) {
    lVar10 = 0;
LAB_1801adb86:
    bVar5 = false;
  }
  else {
    lVar10 = (**(code **)(*(longlong *)*puVar3 + 0x178))();
    bVar4 = false;
    if (lVar10 == 0) goto LAB_1801adb86;
    lVar2 = *(longlong *)(lVar10 + 0x1b8);
    uStack_a8 = &UNK_1809fcc58;
    ppuStack_a0 = &puStack_90;
    puStack_90 = (void *)((ulonglong)puStack_90 & 0xffffffffffffff00);
    uStack_98 = (void *)CONCAT44((int)((ulonglong)uStack_98 >> 0x20),0x16);
    strcpy_s(&puStack_90,0x40,&UNK_180a0b978);
    bVar4 = true;
    uStack_d0 = 1;
    uVar11 = FUN_180240430(*(uint64_t *)(lVar2 + 0x1e0),&uStack_a8,0);
    if ((*(ulonglong *)(lVar2 + 0x140) & uVar11) == 0) goto LAB_1801adb86;
    bVar5 = true;
  }
  if (bVar4) {
    uStack_d0 = 0;
    uStack_a8 = &UNK_18098bcb0;
  }
  if (bVar5) {
    plVar9 = *(longlong **)(lVar10 + 0x1b8);
    plStack_c8 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9);
    }
    plVar12 = (longlong *)FUN_18022cb40(plVar9,&uStack_f8);
    plVar14 = (longlong *)*plVar12;
    *plVar12 = 0;
    plStack_e8 = plVar9;
    plStack_c8 = plVar14;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    if (uStack_f8 != (longlong **)0x0) {
      (*(code *)(*uStack_f8)[7])();
    }
    FUN_180076910(lVar10,&plStack_c8);
    plVar9 = (longlong *)FUN_1800b08e0(_DAT_180c86930,&uStack_f8,param_1 + 0x60938,0);
    lVar10 = *plVar9;
    if (uStack_f8 != (longlong **)0x0) {
      (*(code *)(*uStack_f8)[7])();
    }
    if (lVar10 != 0) {
      uStack_a8 = &UNK_180a3c3e0;
      puStack_90 = (void *)0x0;
      ppuStack_a0 = (void **)0x0;
      uStack_98 = (void *)((ulonglong)uStack_98 & 0xffffffff00000000);
      puVar13 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x1d,0x13);
      *(int8_t *)puVar13 = 0;
      ppuStack_a0 = (void **)puVar13;
      uVar6 = FUN_18064e990(puVar13);
      puStack_90 = (void *)CONCAT44(puStack_90._4_4_,uVar6);
      *puVar13 = 0x6574756f;
      puVar13[1] = 0x656d5f72;
      puVar13[2] = 0x645f6873;
      puVar13[3] = 0x75666669;
      *(uint64_t *)(puVar13 + 4) = 0x75747865745f6573;
      puVar13[6] = 0x315f6572;
      *(int8_t *)(puVar13 + 7) = 0;
      uStack_98 = (void *)CONCAT44(uStack_98._4_4_,0x1c);
      FUN_18022d770(plVar14,&uStack_a8,lVar10);
      uStack_a8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar13);
    }
    plVar9 = (longlong *)FUN_1800b08e0(_DAT_180c86930,&plStack_e8,param_1 + 0x60958,0);
    lVar10 = *plVar9;
    if (plStack_e8 != (longlong *)0x0) {
      (**(code **)(*plStack_e8 + 0x38))();
    }
    if (lVar10 != 0) {
      uStack_a8 = &UNK_180a3c3e0;
      puStack_90 = (void *)0x0;
      ppuStack_a0 = (void **)0x0;
      uStack_98 = (void *)((ulonglong)uStack_98 & 0xffffffff00000000);
      puVar13 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x1d,0x13);
      *(int8_t *)puVar13 = 0;
      ppuStack_a0 = (void **)puVar13;
      uVar6 = FUN_18064e990(puVar13);
      puStack_90 = (void *)CONCAT44(puStack_90._4_4_,uVar6);
      *puVar13 = 0x6574756f;
      puVar13[1] = 0x656d5f72;
      puVar13[2] = 0x645f6873;
      puVar13[3] = 0x75666669;
      *(uint64_t *)(puVar13 + 4) = 0x75747865745f6573;
      puVar13[6] = 0x325f6572;
      *(int8_t *)(puVar13 + 7) = 0;
      uStack_98 = (void *)CONCAT44(uStack_98._4_4_,0x1c);
      FUN_18022d770(plVar14,&uStack_a8,lVar10);
      uStack_a8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar13);
    }
    plVar9 = (longlong *)FUN_1800b08e0(_DAT_180c86930,&uStack_f8,param_1 + 0x60978,0);
    lVar10 = *plVar9;
    if (uStack_f8 != (longlong **)0x0) {
      (*(code *)(*uStack_f8)[7])();
    }
    if (lVar10 != 0) {
      uStack_a8 = &UNK_180a3c3e0;
      puStack_90 = (void *)0x0;
      ppuStack_a0 = (void **)0x0;
      uStack_98 = (void *)((ulonglong)uStack_98 & 0xffffffff00000000);
      puVar13 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x1d,0x13);
      *(int8_t *)puVar13 = 0;
      ppuStack_a0 = (void **)puVar13;
      uVar6 = FUN_18064e990(puVar13);
      puStack_90 = (void *)CONCAT44(puStack_90._4_4_,uVar6);
      *puVar13 = 0x6574756f;
      puVar13[1] = 0x656d5f72;
      puVar13[2] = 0x645f6873;
      puVar13[3] = 0x75666669;
      *(uint64_t *)(puVar13 + 4) = 0x75747865745f6573;
      puVar13[6] = 0x335f6572;
      *(int8_t *)(puVar13 + 7) = 0;
      uStack_98 = (void *)CONCAT44(uStack_98._4_4_,0x1c);
      FUN_18022d770(plVar14,&uStack_a8,lVar10);
      uStack_a8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar13);
    }
    plVar9 = (longlong *)FUN_1800b08e0(_DAT_180c86930,&plStack_e8,param_1 + 0x60998,0);
    lVar10 = *plVar9;
    if (plStack_e8 != (longlong *)0x0) {
      (**(code **)(*plStack_e8 + 0x38))();
    }
    if (lVar10 != 0) {
      uStack_a8 = &UNK_180a3c3e0;
      puStack_90 = (void *)0x0;
      ppuStack_a0 = (void **)0x0;
      uStack_98 = (void *)((ulonglong)uStack_98 & 0xffffffff00000000);
      puVar13 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x1b,0x13);
      *(int8_t *)puVar13 = 0;
      ppuStack_a0 = (void **)puVar13;
      uVar6 = FUN_18064e990(puVar13);
      puStack_90 = (void *)CONCAT44(puStack_90._4_4_,uVar6);
      *puVar13 = 0x6574756f;
      puVar13[1] = 0x656d5f72;
      puVar13[2] = 0x615f6873;
      puVar13[3] = 0x6d616572;
      *(uint64_t *)(puVar13 + 4) = 0x75747865745f7061;
      *(int16_t *)(puVar13 + 6) = 0x6572;
      *(int8_t *)((longlong)puVar13 + 0x1a) = 0;
      uStack_98 = (void *)CONCAT44(uStack_98._4_4_,0x1a);
      FUN_18022d770(plVar14,&uStack_a8,lVar10);
      uStack_a8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar13);
    }
    plVar9 = (longlong *)FUN_1800b08e0(_DAT_180c86930,&uStack_f8,param_1 + 0x609b8,0);
    lVar10 = *plVar9;
    if (uStack_f8 != (longlong **)0x0) {
      (*(code *)(*uStack_f8)[7])();
    }
    if (lVar10 != 0) {
      uStack_a8 = &UNK_180a3c3e0;
      puStack_90 = (void *)0x0;
      ppuStack_a0 = (void **)0x0;
      uStack_98 = (void *)((ulonglong)uStack_98 & 0xffffffff00000000);
      puVar13 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x11,0x13);
      *(int8_t *)puVar13 = 0;
      ppuStack_a0 = (void **)puVar13;
      uVar6 = FUN_18064e990(puVar13);
      puStack_90 = (void *)CONCAT44(puStack_90._4_4_,uVar6);
      *puVar13 = 0x616c7073;
      puVar13[1] = 0x70616d74;
      puVar13[2] = 0x7865745f;
      puVar13[3] = 0x65727574;
      *(int8_t *)(puVar13 + 4) = 0;
      uStack_98 = (void *)CONCAT44(uStack_98._4_4_,0x10);
      FUN_18022d770(plVar14,&uStack_a8,lVar10);
      uStack_a8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar13);
    }
    FUN_1800b08e0(_DAT_180c86930,&plStack_e8,param_1 + 0x609d8,0);
    if (plStack_e8 != (longlong *)0x0) {
      (**(code **)(*plStack_e8 + 0x38))();
    }
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x38))(plVar14);
    }
  }
  puVar3 = *(uint64_t **)(*(longlong *)(param_1 + 0x8208) + 0xf0);
  if (*(longlong *)(*(longlong *)(param_1 + 0x8208) + 0xf8) - (longlong)puVar3 >> 3 != 0) {
    lVar10 = (**(code **)(*(longlong *)*puVar3 + 0x178))();
    if (lVar10 != 0) {
      lVar2 = *(longlong *)(lVar10 + 0x1b8);
      uStack_a8 = &UNK_1809fcc58;
      ppuStack_a0 = &puStack_90;
      puStack_90 = (void *)((ulonglong)puStack_90 & 0xffffffffffffff00);
      uStack_98 = (void *)CONCAT44((int)((ulonglong)uStack_98 >> 0x20),0x16);
      strcpy_s(&puStack_90,0x40,&UNK_180a0b978);
      uVar11 = FUN_180240430(*(uint64_t *)(lVar2 + 0x1e0),&uStack_a8,0);
      uStack_a8 = &UNK_18098bcb0;
      if ((uVar11 & *(ulonglong *)(lVar2 + 0x140)) != 0) {
        uVar11 = *(ulonglong *)(param_1 + 0x609f8);
        uVar8 = *(uint64_t *)(param_1 + 0x60a00);
        *(ulonglong *)(lVar10 + 0x2a8) = uVar11;
        *(uint64_t *)(lVar10 + 0x2b0) = uVar8;
        uStack_f8 = (longlong **)(uVar11 & 0xffffffff);
        uStack_f0 = 0;
        uStack_ec = 0;
        *(int32_t *)(lVar10 + 0x2b8) = *(int32_t *)(param_1 + 0x60a08);
        *(int32_t *)(lVar10 + 700) = 0;
        *(int32_t *)(lVar10 + 0x2c0) = 0;
        *(int32_t *)(lVar10 + 0x2c4) = 0;
      }
    }
  }
LAB_1801ae165:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_128);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




