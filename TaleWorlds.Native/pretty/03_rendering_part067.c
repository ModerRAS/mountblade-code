#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part067.c - 9 个函数

// 函数: void FUN_1803048f0(int64_t param_1,int64_t param_2)
void FUN_1803048f0(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar2 = *(int64_t *)(param_1 + 0x60ba0);
  lVar1 = param_1 + 0x60b98;
  if (lVar2 != lVar1) {
    do {
      if (*(int64_t *)(lVar2 + 0x20) == param_2) break;
      lVar2 = func_0x00018066bd70(lVar2);
    } while (lVar2 != lVar1);
    if (lVar2 != lVar1) {
      *(int64_t *)(param_1 + 0x60bb8) = *(int64_t *)(param_1 + 0x60bb8) + -1;
      func_0x00018066bd70(lVar2);
      FUN_18066ba00(lVar2,lVar1);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
    }
  }
  return;
}



uint64_t *
FUN_180304970(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0xf;
  strcpy_s(param_2[1],0x80,&unknown_var_5704_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803049f0(uint64_t *param_1)
void FUN_1803049f0(uint64_t *param_1)

{
  int64_t *plVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  void *puStack_208;
  uint64_t *puStack_200;
  int32_t uStack_1f8;
  uint64_t uStack_1f0;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar3 = param_1;
  FUN_1803456e0();
  *puVar3 = &unknown_var_3352_ptr;
  FUN_180094c20(puVar3 + 0xe);
  param_1[0x36] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  plVar1 = (int64_t *)param_1[0x36];
  param_1[0x36] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  param_1[0x37] = 0x404e000000000000;
  *(int32_t *)(param_1 + 0x38) = 0x100;
  *(int32_t *)(param_1 + 0x39) = 0x100;
  *(int32_t *)((int64_t)param_1 + 0x1c4) = 0x100;
  param_1[0x3a] = 0x3f847ae147ae147b;
  param_1[0x3b] = 0x408f400000000000;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(int16_t *)(param_1 + 0x42) = 0;
  *(int32_t *)(param_1 + 0x3c) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x1e4) = 0;
  *(int32_t *)(param_1 + 0x3d) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x1ec) = 0x3f800000;
  *(int8_t *)(param_1 + 0x3e) = 0;
  puStack_208 = &system_data_buffer_ptr;
  uStack_1f0 = 0;
  puStack_200 = (uint64_t *)0x0;
  uStack_1f8 = 0;
  puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_200 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  uStack_1f0 = CONCAT44(uStack_1f0._4_4_,uVar2);
  *puVar3 = 0x7267654428564f46;
  *(int32_t *)(puVar3 + 1) = 0x29736565;
  *(int8_t *)((int64_t)puVar3 + 0xc) = 0;
  uStack_1f8 = 0xc;
  FUN_1803460a0(param_1,&puStack_208,param_1 + 0x37,1);
  puStack_208 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



uint64_t * FUN_180305410(uint64_t *param_1,uint64_t param_2)

{
  int64_t *plVar1;
  
  *param_1 = &unknown_var_3352_ptr;
  plVar1 = (int64_t *)param_1[0x36];
  param_1[0x36] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if ((int64_t *)param_1[0x44] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x44] + 0x38))();
  }
  if ((int64_t *)param_1[0x43] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x43] + 0x38))();
  }
  if ((int64_t *)param_1[0x36] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x36] + 0x38))();
  }
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x230);
  }
  return param_1;
}





// 函数: void FUN_1803054e0(int64_t param_1)
void FUN_1803054e0(int64_t param_1)

{
  int64_t *plVar1;
  
  plVar1 = *(int64_t **)(param_1 + 0x1b0);
  if (plVar1 != (int64_t *)0x0) {
    *(int8_t *)((int64_t)plVar1 + 0xdd) = 0;
    (**(code **)(*plVar1 + 0xc0))();
  }
  plVar1 = *(int64_t **)(param_1 + 0x1b0);
  *(uint64_t *)(param_1 + 0x1b0) = 0;
  if (plVar1 != (int64_t *)0x0) {
                    // WARNING: Could not recover jumptable at 0x000180305535. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0x38))();
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180305540(int64_t param_1)
void FUN_180305540(int64_t param_1)

{
  int8_t auStack_128 [32];
  int64_t *plStack_108;
  int32_t uStack_100;
  int32_t uStack_fc;
  int32_t uStack_f8;
  int32_t uStack_f4;
  int32_t uStack_f0;
  int32_t uStack_ec;
  int32_t uStack_e8;
  int32_t uStack_e4;
  int32_t uStack_e0;
  int8_t uStack_dc;
  uint64_t uStack_db;
  int32_t uStack_d0;
  int8_t uStack_cc;
  uint64_t uStack_c8;
  void *puStack_b8;
  int8_t *puStack_b0;
  int32_t uStack_a8;
  int8_t auStack_a0 [136];
  uint64_t uStack_18;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_128;
  if (*(char *)(*(int64_t *)(param_1 + 0x18) + 0x2e5) != '\0') {
    FUN_180305a80();
    if (*(int64_t *)(param_1 + 0x1b0) != 0) {
      uStack_f8 = 1;
      uStack_f4 = 1;
      uStack_ec = 0;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0x3f800000;
      uStack_db = 1;
      uStack_dc = 0;
      uStack_d0 = 0xffffffff;
      uStack_cc = 0;
      uStack_100 = *(int32_t *)(param_1 + 0x1c0);
      uStack_fc = *(int32_t *)(param_1 + 0x1c4);
      uStack_f0 = 1;
      puStack_b8 = &unknown_var_3432_ptr;
      puStack_b0 = auStack_a0;
      auStack_a0[0] = 0;
      uStack_a8 = 0xc;
      strcpy_s(auStack_a0,0x80,&unknown_var_3312_ptr);
      FUN_1800b1230(system_resource_state,&plStack_108,&puStack_b8,&uStack_100);
      puStack_b8 = &system_state_ptr;
      (**(code **)(**(int64_t **)(param_1 + 0x1b0) + 0x68))
                (*(int64_t **)(param_1 + 0x1b0),plStack_108);
      FUN_18022cd30(*(uint64_t *)(*(int64_t *)(param_1 + 0x220) + 0x1b8),0,plStack_108);
      if (plStack_108 != (int64_t *)0x0) {
        (**(code **)(*plStack_108 + 0x38))();
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_128);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803056c0(int64_t param_1,int64_t param_2)
void FUN_1803056c0(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  void **ppuVar6;
  uint64_t *puVar7;
  uint uVar8;
  uint uVar9;
  int8_t auStack_188 [32];
  void *puStack_168;
  int64_t lStack_160;
  uint uStack_158;
  int32_t uStack_150;
  void **appuStack_148 [2];
  void ***pppuStack_138;
  uint64_t uStack_130;
  void **ppuStack_128;
  void *puStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  int8_t auStack_100 [128];
  int32_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  uint64_t uStack_38;
  
  uStack_130 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  if (*(char *)(*(int64_t *)(param_1 + 0x18) + 0x2e5) != '\0') {
    iVar4 = *(int *)(param_2 + 0x10);
    if ((iVar4 != 0x18) && (iVar4 == 0x10)) {
      iVar3 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_98c8);
      if (iVar3 == 0) {
        FUN_180305a80(param_1);
        iVar4 = *(int *)(param_2 + 0x10);
      }
    }
    if (iVar4 == 0xd) {
      iVar3 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_98b8);
      if ((iVar3 == 0) && (*(int64_t *)(param_1 + 0x1b0) != 0)) {
        *(int8_t *)(*(int64_t *)(param_1 + 0x1b0) + 0x100) = *(int8_t *)(param_1 + 0x1f0);
        iVar4 = *(int *)(param_2 + 0x10);
      }
    }
    if ((iVar4 != 0xc) && (iVar4 == 10)) {
      iVar4 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_9928);
      if ((iVar4 == 0) && (*(int64_t *)(param_1 + 0x1b0) != 0)) {
        FUN_1800ba9c0(&puStack_168);
        uVar8 = uStack_158 + 0xd;
        FUN_1806277c0(&puStack_168,uVar8);
        puVar7 = (uint64_t *)((uint64_t)uStack_158 + lStack_160);
        *puVar7 = 0x74726f5074736554;
        *(int32_t *)(puVar7 + 1) = 0x74696172;
        *(int16_t *)((int64_t)puVar7 + 0xc) = 0x73;
        uStack_158 = uVar8;
        cVar2 = FUN_180624a00(&puStack_168);
        if (cVar2 == '\0') {
          FUN_180624910(&puStack_168);
        }
        uVar8 = uStack_158;
        uVar9 = uStack_158 + 1;
        FUN_1806277c0(&puStack_168,uVar9);
        *(int16_t *)((uint64_t)uStack_158 + lStack_160) = 0x2f;
        lVar1 = *(int64_t *)(param_1 + 0x18);
        uStack_158 = uVar9;
        if (0 < *(int *)(lVar1 + 0x298)) {
          FUN_1806277c0(&puStack_168,uVar9 + *(int *)(lVar1 + 0x298));
                    // WARNING: Subroutine does not return
          memcpy((uint64_t)uStack_158 + lStack_160,*(uint64_t *)(lVar1 + 0x290),
                 (int64_t)(*(int *)(lVar1 + 0x298) + 1));
        }
        FUN_1806277c0(&puStack_168,uVar8 + 5);
        *(int32_t *)((uint64_t)uStack_158 + lStack_160) = 0x676e702e;
        *(int8_t *)((int32_t *)((uint64_t)uStack_158 + lStack_160) + 1) = 0;
        appuStack_148[0] = &puStack_118;
        puStack_118 = &unknown_var_3432_ptr;
        puStack_110 = auStack_100;
        uStack_108 = 0;
        auStack_100[0] = 0;
        uStack_80 = 0x2d;
        uStack_68 = 3;
        uStack_158 = uVar8 + 5;
        uVar5 = FUN_18062b1e0(system_memory_pool_ptr,0x20,8,3);
        uStack_70 = FUN_180627ae0(uVar5,&puStack_168);
        puVar7 = (uint64_t *)(**(code **)(**(int64_t **)(param_1 + 0x1b0) + 0x60))();
        if ((void *)*puVar7 == &unknown_var_8720_ptr) {
          LOCK();
          *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
          UNLOCK();
        }
        else {
          (**(code **)((void *)*puVar7 + 0x28))(puVar7);
        }
        uStack_78 = (**(code **)(**(int64_t **)(param_1 + 0x1b0) + 0x60))();
        uVar5 = FUN_18062b1e0(system_memory_pool_ptr,0x100,8,3);
        ppuVar6 = (void **)FUN_18005ce30(uVar5,&puStack_118);
        ppuStack_128 = ppuVar6;
        if (ppuVar6 != (void **)0x0) {
          (**(code **)(*ppuVar6 + 0x28))(ppuVar6);
        }
        uVar5 = system_context_ptr;
        pppuStack_138 = appuStack_148;
        appuStack_148[0] = ppuVar6;
        if (ppuVar6 != (void **)0x0) {
          (**(code **)(*ppuVar6 + 0x28))(ppuVar6);
        }
        FUN_18005e370(uVar5,appuStack_148);
        if (ppuVar6 != (void **)0x0) {
          (**(code **)(*ppuVar6 + 0x38))(ppuVar6);
        }
        pppuStack_138 = (void ***)&puStack_118;
        puStack_118 = &system_state_ptr;
        puStack_168 = &system_data_buffer_ptr;
        if (lStack_160 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_160 = 0;
        uStack_150 = 0;
        puStack_168 = &system_state_ptr;
      }
    }
    iVar4 = 0x80;
    if (0x80 < *(int *)(param_1 + 0x1c0)) {
      iVar4 = *(int *)(param_1 + 0x1c0);
    }
    iVar3 = 0x800;
    if (iVar4 < 0x800) {
      iVar3 = iVar4;
    }
    *(int *)(param_1 + 0x1c0) = iVar3;
    iVar4 = 0x80;
    if (0x80 < *(int *)(param_1 + 0x1c4)) {
      iVar4 = *(int *)(param_1 + 0x1c4);
    }
    iVar3 = 0x800;
    if (iVar4 < 0x800) {
      iVar3 = iVar4;
    }
    *(int *)(param_1 + 0x1c4) = iVar3;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_188);
}





// 函数: void FUN_180305a80(int64_t param_1)
void FUN_180305a80(int64_t param_1)

{
  uint *puVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint uVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  float fVar22;
  uint64_t extraout_XMM0_Qb;
  
  lVar12 = *(int64_t *)(param_1 + 0x18);
  lVar2 = *(int64_t *)(lVar12 + 0x20);
  if (lVar2 != 0) {
    uVar6 = *(uint64_t *)(lVar12 + 0x78);
    *(uint64_t *)(param_1 + 0x130) = *(uint64_t *)(lVar12 + 0x70);
    *(uint64_t *)(param_1 + 0x138) = uVar6;
    uVar6 = *(uint64_t *)(lVar12 + 0x88);
    *(uint64_t *)(param_1 + 0x140) = *(uint64_t *)(lVar12 + 0x80);
    *(uint64_t *)(param_1 + 0x148) = uVar6;
    uVar6 = *(uint64_t *)(lVar12 + 0x98);
    *(uint64_t *)(param_1 + 0x150) = *(uint64_t *)(lVar12 + 0x90);
    *(uint64_t *)(param_1 + 0x158) = uVar6;
    uVar3 = *(int32_t *)(lVar12 + 0xa4);
    uVar4 = *(int32_t *)(lVar12 + 0xa8);
    uVar5 = *(int32_t *)(lVar12 + 0xac);
    *(int32_t *)(param_1 + 0x160) = *(int32_t *)(lVar12 + 0xa0);
    *(int32_t *)(param_1 + 0x164) = uVar3;
    *(int32_t *)(param_1 + 0x168) = uVar4;
    *(int32_t *)(param_1 + 0x16c) = uVar5;
    FUN_1802864f0(param_1 + 0x70);
    fVar22 = (float)*(int *)(param_1 + 0x1c0) / (float)*(int *)(param_1 + 0x1c4);
    auVar20._0_8_ = tanf((float)(*(double *)(param_1 + 0x1b8) * 0.017453293005625408) * 0.5);
    auVar20._8_8_ = extraout_XMM0_Qb;
    auVar21._4_12_ = auVar20._4_12_;
    auVar21._0_4_ = (float)auVar20._0_8_ * fVar22;
    fVar17 = (float)atanf(auVar21._0_8_);
    FUN_180286e40(param_1 + 0x70,fVar17 + fVar17,fVar22,(float)*(double *)(param_1 + 0x1d0),
                  (float)*(double *)(param_1 + 0x1d8));
    *(float *)(lVar2 + 0x3f58) = (float)*(double *)(param_1 + 0x1f8);
    *(float *)(lVar2 + 0x3f54) = (float)*(double *)(param_1 + 0x200);
    *(float *)(lVar2 + 0x3f5c) = (float)*(double *)(param_1 + 0x208);
  }
  if (*(int64_t *)(param_1 + 0x1b0) != 0) {
    lVar12 = 2;
    puVar7 = (uint64_t *)(*(int64_t *)(param_1 + 0x1b0) + 0x6e0);
    puVar8 = (uint64_t *)(param_1 + 0x70);
    do {
      puVar11 = puVar8;
      puVar9 = puVar7;
      uVar6 = puVar11[1];
      puVar8 = puVar11 + 0x10;
      *puVar9 = *puVar11;
      puVar9[1] = uVar6;
      uVar6 = puVar11[3];
      puVar9[2] = puVar11[2];
      puVar9[3] = uVar6;
      uVar6 = puVar11[5];
      puVar9[4] = puVar11[4];
      puVar9[5] = uVar6;
      uVar6 = puVar11[7];
      puVar9[6] = puVar11[6];
      puVar9[7] = uVar6;
      uVar6 = puVar11[9];
      puVar9[8] = puVar11[8];
      puVar9[9] = uVar6;
      uVar6 = puVar11[0xb];
      puVar9[10] = puVar11[10];
      puVar9[0xb] = uVar6;
      uVar6 = puVar11[0xd];
      puVar9[0xc] = puVar11[0xc];
      puVar9[0xd] = uVar6;
      uVar6 = puVar11[0xf];
      puVar9[0xe] = puVar11[0xe];
      puVar9[0xf] = uVar6;
      lVar12 = lVar12 + -1;
      puVar7 = puVar9 + 0x10;
    } while (lVar12 != 0);
    uVar6 = puVar11[0x11];
    puVar9[0x10] = *puVar8;
    puVar9[0x11] = uVar6;
    uVar6 = puVar11[0x13];
    puVar9[0x12] = puVar11[0x12];
    puVar9[0x13] = uVar6;
    uVar6 = puVar11[0x15];
    puVar9[0x14] = puVar11[0x14];
    puVar9[0x15] = uVar6;
    uVar6 = puVar11[0x17];
    puVar9[0x16] = puVar11[0x16];
    puVar9[0x17] = uVar6;
    fVar17 = *(float *)(param_1 + 0x1ec);
    fVar22 = (float)powf(puVar8,0x400ccccd);
    fVar18 = (float)powf();
    fVar19 = (float)powf();
    uVar14 = (uint)(int64_t)(fVar17 * 256.0);
    uVar16 = 0xff;
    if (uVar14 < 0xff) {
      uVar16 = uVar14;
    }
    uVar13 = (uint)(int64_t)(fVar22 * 256.0);
    uVar14 = 0xff;
    if (uVar13 < 0xff) {
      uVar14 = uVar13;
    }
    uVar15 = (uint)(int64_t)(fVar18 * 256.0);
    uVar13 = 0xff;
    if (uVar15 < 0xff) {
      uVar13 = uVar15;
    }
    uVar10 = (uint)(int64_t)(fVar19 * 256.0);
    uVar15 = 0xff;
    if (uVar10 < 0xff) {
      uVar15 = uVar10;
    }
    *(uint *)(*(int64_t *)(param_1 + 0x1b0) + 0xd0) =
         ((uVar16 << 8 | uVar14) << 8 | uVar13) << 8 | uVar15;
    puVar1 = (uint *)(*(int64_t *)(param_1 + 0x1b0) + 0xcc);
    *puVar1 = *puVar1 | 1;
    puVar1 = (uint *)(*(int64_t *)(param_1 + 0x1b0) + 0xcc);
    *puVar1 = *puVar1 | 2;
    *(int8_t *)(*(int64_t *)(param_1 + 0x1b0) + 0xe8) = 1;
    *(int8_t *)(*(int64_t *)(param_1 + 0x1b0) + 0xdc) = 0;
  }
  return;
}





// 函数: void FUN_180305ba7(void)
void FUN_180305ba7(void)

{
  uint *puVar1;
  float fVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t in_RAX;
  uint64_t *puVar6;
  uint uVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  uint uVar10;
  int64_t unaff_RBP;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar9 = 2;
  puVar4 = (uint64_t *)(in_RAX + 0x6e0);
  puVar5 = (uint64_t *)(unaff_RBP + 0x70);
  do {
    puVar8 = puVar5;
    puVar6 = puVar4;
    uVar3 = puVar8[1];
    *puVar6 = *puVar8;
    puVar6[1] = uVar3;
    uVar3 = puVar8[3];
    puVar6[2] = puVar8[2];
    puVar6[3] = uVar3;
    uVar3 = puVar8[5];
    puVar6[4] = puVar8[4];
    puVar6[5] = uVar3;
    uVar3 = puVar8[7];
    puVar6[6] = puVar8[6];
    puVar6[7] = uVar3;
    uVar3 = puVar8[9];
    puVar6[8] = puVar8[8];
    puVar6[9] = uVar3;
    uVar3 = puVar8[0xb];
    puVar6[10] = puVar8[10];
    puVar6[0xb] = uVar3;
    uVar3 = puVar8[0xd];
    puVar6[0xc] = puVar8[0xc];
    puVar6[0xd] = uVar3;
    uVar3 = puVar8[0xf];
    puVar6[0xe] = puVar8[0xe];
    puVar6[0xf] = uVar3;
    lVar9 = lVar9 + -1;
    puVar4 = puVar6 + 0x10;
    puVar5 = puVar8 + 0x10;
  } while (lVar9 != 0);
  uVar3 = puVar8[0x11];
  puVar6[0x10] = puVar8[0x10];
  puVar6[0x11] = uVar3;
  uVar3 = puVar8[0x13];
  puVar6[0x12] = puVar8[0x12];
  puVar6[0x13] = uVar3;
  uVar3 = puVar8[0x15];
  puVar6[0x14] = puVar8[0x14];
  puVar6[0x15] = uVar3;
  uVar3 = puVar8[0x17];
  puVar6[0x16] = puVar8[0x16];
  puVar6[0x17] = uVar3;
  fVar2 = *(float *)(unaff_RBP + 0x1ec);
  fVar14 = (float)powf(*(int32_t *)(unaff_RBP + 0x1e0),0x400ccccd);
  fVar15 = (float)powf(*(int32_t *)(unaff_RBP + 0x1e4),0x400ccccd);
  fVar16 = (float)powf(*(int32_t *)(unaff_RBP + 0x1e8),0x400ccccd);
  uVar11 = (uint)(int64_t)(fVar2 * 256.0);
  uVar13 = 0xff;
  if (uVar11 < 0xff) {
    uVar13 = uVar11;
  }
  uVar10 = (uint)(int64_t)(fVar14 * 256.0);
  uVar11 = 0xff;
  if (uVar10 < 0xff) {
    uVar11 = uVar10;
  }
  uVar12 = (uint)(int64_t)(fVar15 * 256.0);
  uVar10 = 0xff;
  if (uVar12 < 0xff) {
    uVar10 = uVar12;
  }
  uVar7 = (uint)(int64_t)(fVar16 * 256.0);
  uVar12 = 0xff;
  if (uVar7 < 0xff) {
    uVar12 = uVar7;
  }
  *(uint *)(*(int64_t *)(unaff_RBP + 0x1b0) + 0xd0) =
       ((uVar13 << 8 | uVar11) << 8 | uVar10) << 8 | uVar12;
  puVar1 = (uint *)(*(int64_t *)(unaff_RBP + 0x1b0) + 0xcc);
  *puVar1 = *puVar1 | 1;
  puVar1 = (uint *)(*(int64_t *)(unaff_RBP + 0x1b0) + 0xcc);
  *puVar1 = *puVar1 | 2;
  *(int8_t *)(*(int64_t *)(unaff_RBP + 0x1b0) + 0xe8) = 1;
  *(int8_t *)(*(int64_t *)(unaff_RBP + 0x1b0) + 0xdc) = 0;
  return;
}





// 函数: void FUN_180305d23(void)
void FUN_180305d23(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180305d40(int64_t param_1)
void FUN_180305d40(int64_t param_1)

{
  int64_t lVar1;
  int32_t uVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint uVar9;
  uint64_t uVar10;
  int8_t auStack_1d8 [32];
  uint64_t uStack_1b8;
  int32_t uStack_1b0;
  void *puStack_1a8;
  uint64_t *puStack_1a0;
  int32_t uStack_198;
  int32_t uStack_194;
  uint64_t uStack_190;
  int32_t uStack_188;
  int32_t uStack_184;
  int32_t uStack_180;
  int32_t uStack_17c;
  int32_t uStack_178;
  uint64_t uStack_170;
  float fStack_168;
  int32_t uStack_164;
  int64_t *plStack_160;
  int64_t *plStack_158;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  int32_t uStack_104;
  int32_t uStack_100;
  int32_t uStack_fc;
  int8_t auStack_f8 [128];
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  uint64_t uStack_40;
  
  uStack_140 = 0xfffffffffffffffe;
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1d8;
  if (*(char *)(param_1 + 0xa4) != '\0') {
    FUN_1802f1cd0(*(uint64_t *)(param_1 + 0x18),&plStack_160);
    uStack_78 = 0x4cbebc204cbebc20;
    uStack_70 = 0x7f7fffff4cbebc20;
    uStack_68 = 0xccbebc20ccbebc20;
    uStack_60 = 0x7f7fffffccbebc20;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0x7f7fffff;
    uVar6 = 0;
    uVar10 = uVar6;
    if ((int64_t)plStack_158 - (int64_t)plStack_160 >> 3 != 0) {
      do {
        puVar4 = (uint64_t *)
                 (**(code **)(**(int64_t **)(uVar6 + (int64_t)plStack_160) + 0x198))();
        puStack_1a8 = (void *)*puVar4;
        puStack_1a0 = (uint64_t *)puVar4[1];
        uStack_198 = *(int32_t *)(puVar4 + 2);
        uStack_194 = *(int32_t *)((int64_t)puVar4 + 0x14);
        uStack_190 = puVar4[3];
        uStack_188 = *(int32_t *)(puVar4 + 4);
        uStack_184 = *(int32_t *)((int64_t)puVar4 + 0x24);
        uStack_180 = *(int32_t *)(puVar4 + 5);
        uStack_17c = *(int32_t *)((int64_t)puVar4 + 0x2c);
        uStack_178 = *(int32_t *)(puVar4 + 6);
        uVar5 = (**(code **)(**(int64_t **)(uVar6 + (int64_t)plStack_160) + 0x158))();
        FUN_18063a240(&uStack_78,&puStack_1a8,uVar5);
        uVar9 = (int)uVar10 + 1;
        uVar6 = uVar6 + 8;
        uVar10 = (uint64_t)uVar9;
      } while ((uint64_t)(int64_t)(int)uVar9 <
               (uint64_t)((int64_t)plStack_158 - (int64_t)plStack_160 >> 3));
    }
    puVar4 = (uint64_t *)
             FUN_18063aab0(&uStack_78,&uStack_138,*(int64_t *)(param_1 + 0x18) + 0x70);
    uStack_78 = *puVar4;
    uStack_70 = puVar4[1];
    uStack_68 = puVar4[2];
    uStack_60 = puVar4[3];
    uStack_58 = *(int32_t *)(puVar4 + 4);
    uStack_54 = *(int32_t *)((int64_t)puVar4 + 0x24);
    uStack_50 = *(int32_t *)(puVar4 + 5);
    uStack_4c = *(int32_t *)((int64_t)puVar4 + 0x2c);
    uStack_48 = *(int32_t *)(puVar4 + 6);
    FUN_1800b9f60(&uStack_78);
    *(uint64_t *)(param_1 + 0x70) = uStack_78;
    *(uint64_t *)(param_1 + 0x78) = uStack_70;
    *(int32_t *)(param_1 + 0x80) = (int32_t)uStack_68;
    *(int32_t *)(param_1 + 0x84) = uStack_68._4_4_;
    *(int32_t *)(param_1 + 0x88) = (int32_t)uStack_60;
    *(int32_t *)(param_1 + 0x8c) = uStack_60._4_4_;
    *(int32_t *)(param_1 + 0x90) = uStack_58;
    *(int32_t *)(param_1 + 0x94) = uStack_54;
    *(int32_t *)(param_1 + 0x98) = uStack_50;
    *(int32_t *)(param_1 + 0x9c) = uStack_4c;
    *(int32_t *)(param_1 + 0xa0) = uStack_48;
    puStack_1a8 = &system_data_buffer_ptr;
    uStack_190 = 0;
    puStack_1a0 = (uint64_t *)0x0;
    uStack_198 = 0;
    puVar4 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar4 = 0;
    puStack_1a0 = puVar4;
    uVar9 = FUN_18064e990(puVar4);
    *puVar4 = 0x3d20737569646152;
    *(int16_t *)(puVar4 + 1) = 0x20;
    uStack_198 = 9;
    uStack_190._0_4_ = uVar9;
    FUN_180626eb0(&uStack_78,0x20,&system_data_6430,(double)*(float *)(param_1 + 0xa0));
    lVar1 = -1;
    do {
      lVar7 = lVar1;
      lVar1 = lVar7 + 1;
    } while (*(char *)((int64_t)&uStack_78 + lVar7 + 1) != '\0');
    if (0 < (int)(lVar7 + 1)) {
      iVar3 = (int)lVar7;
      if ((iVar3 != -10) && (uVar9 < iVar3 + 0xbU)) {
        uStack_1b8 = CONCAT71(uStack_1b8._1_7_,0x13);
        puVar4 = (uint64_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar4,iVar3 + 0xbU,0x10);
        puStack_1a0 = puVar4;
        uStack_190._0_4_ = FUN_18064e990(puVar4);
      }
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((int64_t)puVar4 + 9),&uStack_78,(int64_t)(iVar3 + 2));
    }
    lVar1 = *(int64_t *)(param_1 + 0x18);
    fStack_168 = *(float *)(lVar1 + 0x68) + 0.5;
    uStack_170 = CONCAT44(*(float *)(lVar1 + 100) + 0.5,*(float *)(lVar1 + 0x60) + 0.5);
    uStack_164 = 0x7f7fffff;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    FUN_180632d00(render_system_data_memory,&uStack_170,&puStack_1a8,render_system_control_memory);
    lVar1 = render_system_data_memory;
    uVar2 = render_system_control_memory;
    uStack_138 = 0x3f800000;
    uStack_130 = 0;
    uStack_128 = 0x3f80000000000000;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0x3f800000;
    uStack_10c = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0x3f800000;
    if (*(char *)(render_system_data_memory + 0x50) != '\0') {
      uStack_170 = render_system_data_memory;
      iVar3 = _Mtx_lock(render_system_data_memory);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      func_0x000180632b30(auStack_f8,param_1 + 0x70,param_1 + 0x80,&uStack_138);
      uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
      FUN_180633220(lVar1,auStack_f8,uVar2,0);
      iVar3 = _Mtx_unlock(lVar1);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
    }
    puStack_1a8 = &system_data_buffer_ptr;
    if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar4);
    }
    puStack_1a0 = (uint64_t *)0x0;
    uStack_190 = (uint64_t)uStack_190._4_4_ << 0x20;
    puStack_1a8 = &system_state_ptr;
    for (plVar8 = plStack_160; plVar8 != plStack_158; plVar8 = plVar8 + 1) {
      if ((int64_t *)*plVar8 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar8 + 0x38))();
      }
    }
    if (plStack_160 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (uint64_t)auStack_1d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



