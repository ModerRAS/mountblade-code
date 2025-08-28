#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part357.c - 8 个函数

// 函数: void FUN_18045fc60(int64_t param_1)
void FUN_18045fc60(int64_t param_1)

{
  uint64_t uVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int iVar6;
  int64_t lVar7;
  int32_t uVar8;
  int8_t auStack_188 [32];
  int32_t uStack_168;
  int32_t uStack_160;
  int32_t uStack_158;
  int32_t uStack_150;
  int iStack_148;
  int64_t *plStack_140;
  int8_t uStack_138;
  int32_t uStack_130;
  int32_t uStack_128;
  int64_t *plStack_120;
  int64_t *plStack_118;
  int64_t *plStack_110;
  uint64_t uStack_108;
  void *puStack_f8;
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int8_t auStack_e0 [72];
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int32_t uStack_84;
  int8_t uStack_80;
  uint8_t uStack_7f;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  
  uVar1 = render_system_data_memory;
  uStack_108 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  lVar7 = 0;
  uStack_128 = 0;
  iVar2 = (int)(*(int64_t *)(param_1 + 0x20) - *(int64_t *)(param_1 + 0x18) >> 4);
  iVar6 = iVar2 * 0x60;
  puStack_f8 = &memory_allocator_3480_ptr;
  puStack_f0 = auStack_e0;
  auStack_e0[0] = 0;
  uStack_e8 = 0x1c;
  uVar8 = strcpy_s(auStack_e0,0x40,&system_data_fc60);
  FUN_1802037e0(uVar8,iVar6,&puStack_f8);
  puStack_f8 = &system_state_ptr;
  lVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,iVar6,0x10,3);
  FUN_180462cc0(uVar1,&plStack_120);
  plStack_120[2] = lVar4;
  *(int *)(plStack_120 + 3) = iVar6;
  *(int *)((int64_t)plStack_120 + 0x1c) = iVar6;
  *(int8_t *)(plStack_120 + 4) = 0;
  uStack_128 = 1;
  lVar4 = (int64_t)iVar2;
  if (0 < iVar2) {
    do {
      iVar6 = (int)*(float *)(lVar7 + 0xc + *(int64_t *)(param_1 + 0x18));
      FUN_180462760(param_1,iVar6,&puStack_98);
      puVar5 = (uint64_t *)((int64_t)iVar6 * 0x60 + plStack_120[2]);
      *puVar5 = puStack_98;
      puVar5[1] = puStack_90;
      puVar5[2] = CONCAT44(uStack_84,uStack_88);
      puVar5[3] = CONCAT71(uStack_7f,uStack_80);
      puVar5[4] = uStack_78;
      puVar5[5] = uStack_70;
      puVar5[6] = uStack_68;
      puVar5[7] = uStack_60;
      *(int32_t *)(puVar5 + 8) = uStack_58;
      *(int32_t *)((int64_t)puVar5 + 0x44) = uStack_54;
      *(int32_t *)(puVar5 + 9) = uStack_50;
      *(int32_t *)((int64_t)puVar5 + 0x4c) = uStack_4c;
      puVar5[10] = uStack_48;
      puVar5[0xb] = uStack_40;
      lVar7 = lVar7 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  plVar3 = plStack_120;
  puStack_98 = &memory_allocator_3480_ptr;
  puStack_90 = &uStack_80;
  uStack_80 = 0;
  uStack_88 = 0x19;
  strcpy_s(&uStack_80,0x40,&ui_system_data_1008_ptr);
  lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x88);
  uStack_130 = 1;
  uStack_138 = 1;
  plStack_140 = plVar3;
  uStack_150 = 0x60;
  uStack_158 = 0;
  uStack_160 = 1;
  uStack_168 = 0x41;
  iStack_148 = iVar2;
  puVar5 = (uint64_t *)FUN_1800b0a10(lVar7,&plStack_110,*(int32_t *)(lVar7 + 0xa0),&puStack_98)
  ;
  lVar7 = *(int64_t *)(param_1 + 8);
  uVar1 = *puVar5;
  *puVar5 = 0;
  plStack_118 = *(int64_t **)(lVar7 + 0x1d8);
  *(uint64_t *)(lVar7 + 0x1d8) = uVar1;
  if (plStack_118 != (int64_t *)0x0) {
    (**(code **)(*plStack_118 + 0x38))();
  }
  if (plStack_110 != (int64_t *)0x0) {
    (**(code **)(*plStack_110 + 0x38))();
  }
  puStack_98 = &system_state_ptr;
  uStack_128 = 0;
  if (plStack_120 != (int64_t *)0x0) {
    (**(code **)(*plStack_120 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_188);
}





// 函数: void FUN_18045ff20(int64_t *param_1)
void FUN_18045ff20(int64_t *param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  lVar1 = *param_1;
  uVar4 = 0;
  if (lVar1 == 0) {
    *param_1 = 0;
    return;
  }
  uVar2 = *(uint64_t *)(lVar1 + -0x10);
  uVar3 = uVar2 >> 0x20;
  if ((int)(uVar2 >> 0x20) != 0) {
    do {
      if (*(int64_t *)(uVar4 + lVar1) != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(uint64_t *)(uVar4 + lVar1) = 0;
      uVar3 = uVar3 - 1;
      uVar4 = (uint64_t)(uint)((int)uVar4 + (int)uVar2);
    } while (uVar3 != 0);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar1 + -0x10);
}





// 函数: void FUN_18045ff3b(void)
void FUN_18045ff3b(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint uVar3;
  uint unaff_EDI;
  int32_t unaff_0000003c;
  int64_t unaff_R14;
  
  uVar1 = *(uint64_t *)(unaff_R14 + -0x10);
  uVar2 = uVar1 >> 0x20;
  uVar3 = unaff_EDI;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      if (*(int64_t *)((uint64_t)uVar3 + unaff_R14) != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(uint64_t *)((uint64_t)uVar3 + unaff_R14) = CONCAT44(unaff_0000003c,unaff_EDI);
      uVar2 = uVar2 - 1;
      uVar3 = uVar3 + (int)uVar1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(unaff_R14 + -0x10);
}





// 函数: void FUN_18045ff5b(void)
void FUN_18045ff5b(void)

{
  int64_t in_RAX;
  uint unaff_EBX;
  uint64_t uVar1;
  uint64_t unaff_RDI;
  int unaff_R12D;
  int64_t unaff_R14;
  
  do {
    uVar1 = (uint64_t)unaff_EBX;
    if (*(int64_t *)(uVar1 + unaff_R14) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    unaff_EBX = unaff_EBX + unaff_R12D;
    *(uint64_t *)(uVar1 + unaff_R14) = unaff_RDI;
    in_RAX = in_RAX + -1;
  } while (in_RAX != 0);
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(unaff_R14 + -0x10);
}





// 函数: void FUN_18045ff97(void)
void FUN_18045ff97(void)

{
  int64_t unaff_R14;
  
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(unaff_R14 + -0x10);
}





// 函数: void FUN_18045ffbc(uint64_t *param_1)
void FUN_18045ffbc(uint64_t *param_1)

{
  uint64_t unaff_RDI;
  
  *param_1 = unaff_RDI;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045ffd0(int64_t param_1)
void FUN_18045ffd0(int64_t param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t *plVar9;
  int8_t *puVar10;
  uint64_t *puVar11;
  uint64_t uVar12;
  int32_t uVar13;
  int64_t *plVar14;
  int64_t lVar15;
  float *pfVar16;
  int64_t lVar17;
  int iVar18;
  int32_t *puVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  int8_t auStack_4e8 [32];
  int8_t *puStack_4c8;
  int32_t uStack_4c0;
  int32_t uStack_4b8;
  int32_t uStack_4b0;
  int32_t uStack_4a8;
  int64_t *plStack_4a0;
  int8_t uStack_498;
  int32_t uStack_490;
  int64_t *plStack_488;
  float fStack_480;
  int64_t *plStack_478;
  int64_t *plStack_470;
  int64_t *plStack_468;
  int64_t *plStack_460;
  int64_t *plStack_458;
  int64_t lStack_450;
  int8_t *puStack_448;
  float fStack_440;
  int32_t uStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  int32_t uStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  int32_t uStack_40c;
  int8_t *puStack_400;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  uint64_t uStack_3e8;
  uint64_t uStack_3d8;
  uint64_t uStack_3d0;
  uint64_t uStack_3c8;
  uint64_t uStack_3c0;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  int32_t uStack_3ac;
  uint64_t uStack_3a8;
  uint64_t uStack_3a0;
  int8_t auStack_398 [12];
  int32_t uStack_38c;
  int32_t uStack_37c;
  int32_t uStack_36c;
  int32_t uStack_35c;
  uint64_t uStack_358;
  uint64_t uStack_350;
  uint64_t uStack_348;
  uint64_t uStack_340;
  uint64_t uStack_338;
  uint64_t uStack_330;
  int32_t uStack_328;
  int32_t uStack_324;
  int32_t uStack_320;
  int32_t uStack_31c;
  int8_t auStack_318 [16];
  void *puStack_308;
  uint64_t *puStack_300;
  uint64_t uStack_2f8;
  uint64_t uStack_2f0;
  uint64_t uStack_2e8;
  uint64_t uStack_2e0;
  uint64_t uStack_2d8;
  uint64_t uStack_2d0;
  void *puStack_2c8;
  int8_t *puStack_2c0;
  int32_t uStack_2b8;
  int8_t auStack_2b0 [72];
  int8_t auStack_268 [80];
  uint64_t uStack_218;
  uint64_t uStack_210;
  uint64_t uStack_1f8;
  uint64_t uStack_1f0;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
  uint64_t uStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  int32_t uStack_178;
  int32_t uStack_174;
  int32_t uStack_170;
  int32_t uStack_16c;
  int8_t uStack_168;
  int32_t uStack_164;
  int32_t uStack_160;
  int32_t uStack_15c;
  int32_t uStack_158;
  int32_t uStack_154;
  uint64_t uStack_150;
  int32_t uStack_148;
  int8_t uStack_144;
  uint64_t uStack_140;
  uint64_t uStack_138;
  int8_t auStack_128 [4];
  int8_t auStack_124 [92];
  uint64_t uStack_c8;
  
  uStack_3e8 = 0xfffffffffffffffe;
  uStack_c8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_4e8;
  plVar14 = (int64_t *)(*(int64_t *)(param_1 + 0x20) - *(int64_t *)(param_1 + 0x18) >> 4);
  plStack_488 = plVar14;
  uVar20 = FUN_18031efb0(param_1,&plStack_460,(uint64_t)plVar14 & 0xffffffff);
  plVar9 = (int64_t *)plStack_460[2];
  plStack_478 = plVar9;
  uVar20 = FUN_1804629b0(uVar20,&plStack_468,(uint64_t)plVar14 & 0xffffffff);
  FUN_180462ae0(uVar20,&plStack_470,(uint64_t)plVar14 & 0xffffffff);
  fStack_480 = 0.0;
  plStack_458 = (int64_t *)(int64_t)(int)plVar14;
  if (0 < (int)plVar14) {
    lStack_450 = 0;
    fStack_438 = 1.0;
    fStack_434 = 1.0;
    fStack_42c = 1.0;
    uStack_40c = 0x7f7fffff;
    uStack_41c = 0x3f800000;
    do {
      lVar15 = lStack_450;
      iVar18 = 0;
      pfVar16 = (float *)(*(int64_t *)(param_1 + 0x18) + lStack_450 * 0x10);
      fVar1 = *pfVar16;
      fVar2 = pfVar16[1];
      uVar5 = *(uint64_t *)pfVar16;
      puStack_448 = *(int8_t **)pfVar16;
      fVar3 = pfVar16[2];
      fVar4 = pfVar16[3];
      uStack_43c = 0x3f800000;
      pfVar16 = (float *)(plVar9 + lStack_450 * 2);
      *pfVar16 = fVar1;
      pfVar16[1] = fVar2;
      pfVar16[2] = fVar3;
      pfVar16[3] = 1.0;
      pfVar16 = (float *)(lStack_450 * 0x70 + plStack_468[2]);
      lVar17 = lStack_450 * 0x1e0 + plStack_470[2];
      *pfVar16 = fVar1;
      pfVar16[1] = fVar2;
      pfVar16[2] = fVar3;
      pfVar16[3] = 1.0;
      pfVar16[4] = 1.0;
      pfVar16[5] = 1.0;
      pfVar16[6] = 1.0;
      pfVar16[7] = 1.0;
      pfVar16[8] = 1.0;
      pfVar16[9] = 1.0;
      pfVar16[10] = 1.0;
      pfVar16[0xb] = 1.0;
      pfVar16[0xc] = 0.0;
      pfVar16[0xd] = 1.0;
      pfVar16[0xe] = 1.0;
      pfVar16[0xf] = 1.0;
      fStack_430 = (float)(int)fStack_480;
      pfVar16[0x10] = fStack_438;
      pfVar16[0x11] = fStack_434;
      pfVar16[0x12] = fStack_430;
      pfVar16[0x13] = fStack_42c;
      pfVar16[0x14] = 1.0;
      pfVar16[0x15] = 1.0;
      pfVar16[0x16] = 1.0;
      pfVar16[0x17] = 1.0;
      pfVar16[0x18] = fStack_480;
      fStack_440 = fVar3;
      FUN_180462760(param_1,(int)fVar4,auStack_128);
      puVar7 = (uint64_t *)(lVar17 + 0x60);
      puVar19 = (int32_t *)(lVar17 + 8);
      puStack_400 = auStack_128 + -lVar17;
      puStack_448 = auStack_124 + -lVar17;
      uVar20 = CONCAT44(uStack_41c,fVar3);
      fStack_428 = fVar1;
      fStack_424 = fVar2;
      fStack_420 = fVar3;
      do {
        puVar19[-2] = *(int32_t *)((int64_t)puVar19 + (int64_t)puStack_400);
        puVar19[-1] = *(int32_t *)((int64_t)puVar19 + (int64_t)puStack_448);
        *puVar19 = *(int32_t *)(puStack_400 + -8 + (int64_t)puVar19);
        puVar19[1] = *(int32_t *)(puStack_448 + -8 + (int64_t)puVar19);
        puVar10 = auStack_268;
        lVar17 = 6;
        do {
          func_0x000180074f10(puVar10);
          puVar10 = puVar10 + 0x20;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        uStack_1a8 = 0x3f800000;
        uStack_1a0 = 0;
        uStack_198 = 0x3f80000000000000;
        uStack_190 = 0;
        uStack_188 = 0;
        uStack_180 = 0x3f800000;
        uStack_178 = 0;
        uStack_174 = 0;
        uStack_170 = 0;
        uStack_16c = 0x3f800000;
        uStack_168 = 1;
        uStack_164 = 0xbf800000;
        uStack_160 = 0x3f800000;
        uStack_158 = 0xbf800000;
        uStack_15c = 0x3f800000;
        uStack_154 = 0x3f800000;
        uStack_150 = 0x447a0000;
        uStack_148 = 0x3f800000;
        uVar21 = FUN_1802864f0(auStack_268);
        uStack_144 = 0;
        uStack_140 = 0;
        uStack_138 = 0x7f7fffff00000000;
        puStack_4c8 = auStack_318;
        FUN_18031c410(uVar21,iVar18,&fStack_3f8,&uStack_3d8);
        fStack_410 = fVar3 + fStack_3f0;
        fStack_414 = fVar2 + fStack_3f4;
        fStack_418 = fVar1 + fStack_3f8;
        uStack_3c8 = uStack_3d8;
        uStack_3c0 = uStack_3d0;
        uStack_3ac = uStack_40c;
        fStack_3b8 = fStack_418;
        fStack_3b4 = fStack_414;
        fStack_3b0 = fStack_410;
        uStack_3a8 = uVar5;
        uStack_3a0 = uVar20;
        FUN_180287020(auStack_268,&uStack_3a8,&fStack_3b8,&uStack_3c8);
        uStack_148 = 0x3f800000;
        uStack_168 = 1;
        uStack_154 = 0x3c23d70a;
        uStack_150 = 0x3fc90fdb41200000;
        uStack_164 = 0xbc23d70a;
        uStack_160 = 0x3c23d70a;
        uStack_158 = 0xbc23d70a;
        uStack_15c = 0x3c23d70a;
        FUN_1802864f0(auStack_268);
        FUN_180287b30(&uStack_1a8,auStack_398);
        uStack_38c = 0;
        uStack_37c = 0;
        uStack_36c = 0;
        uStack_35c = 0x3f800000;
        uVar21 = FUN_180286010(auStack_268,&puStack_2c8,0);
        FUN_1800946d0(auStack_398,&uStack_358,uVar21);
        *puVar7 = uStack_358;
        puVar7[1] = uStack_350;
        puVar7[2] = uStack_348;
        puVar7[3] = uStack_340;
        puVar7[4] = uStack_338;
        puVar7[5] = uStack_330;
        *(int32_t *)(puVar7 + 6) = uStack_328;
        *(int32_t *)((int64_t)puVar7 + 0x34) = uStack_324;
        *(int32_t *)(puVar7 + 7) = uStack_320;
        *(int32_t *)((int64_t)puVar7 + 0x3c) = uStack_31c;
        if (lVar15 == 0) {
          puStack_308 = (void *)0x0;
          puStack_300 = (uint64_t *)0x0;
          uStack_2f8 = 0;
          uStack_2f0 = 0;
          uStack_2e8 = 0;
          uStack_2e0 = 0;
          uStack_2d8 = 0;
          uStack_2d0 = 0;
          puVar11 = *(uint64_t **)(param_1 + 0x58);
          if (puVar11 < *(uint64_t **)(param_1 + 0x60)) {
            *(uint64_t **)(param_1 + 0x58) = puVar11 + 8;
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
            puVar11[3] = 0;
            puVar11[4] = 0;
            puVar11[5] = 0;
            puVar11[6] = 0;
            puVar11[7] = 0;
            puVar11 = *(uint64_t **)(param_1 + 0x58);
          }
          else {
            puVar8 = *(uint64_t **)(param_1 + 0x50);
            lVar15 = (int64_t)puVar11 - (int64_t)puVar8 >> 6;
            if (lVar15 == 0) {
              lVar15 = 1;
LAB_1804604cc:
              puVar6 = (uint64_t *)
                       CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar15 << 6,*(int8_t *)(param_1 + 0x68));
              puVar11 = *(uint64_t **)(param_1 + 0x58);
              puVar8 = *(uint64_t **)(param_1 + 0x50);
            }
            else {
              lVar15 = lVar15 * 2;
              if (lVar15 != 0) goto LAB_1804604cc;
              puVar6 = (uint64_t *)0x0;
            }
            if (puVar8 != puVar11) {
                    // WARNING: Subroutine does not return
              memmove(puVar6,puVar8,(int64_t)puVar11 - (int64_t)puVar8);
            }
            *puVar6 = puStack_308;
            puVar6[1] = puStack_300;
            puVar6[2] = uStack_2f8;
            puVar6[3] = uStack_2f0;
            puVar6[4] = uStack_2e8;
            puVar6[5] = uStack_2e0;
            *(int32_t *)(puVar6 + 6) = (int32_t)uStack_2d8;
            *(int32_t *)((int64_t)puVar6 + 0x34) = uStack_2d8._4_4_;
            *(int32_t *)(puVar6 + 7) = (int32_t)uStack_2d0;
            *(int32_t *)((int64_t)puVar6 + 0x3c) = uStack_2d0._4_4_;
            puVar11 = puVar6 + 8;
            if (*(int64_t *)(param_1 + 0x50) != 0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            *(uint64_t **)(param_1 + 0x50) = puVar6;
            *(uint64_t **)(param_1 + 0x58) = puVar11;
            *(uint64_t **)(param_1 + 0x60) = puVar6 + lVar15 * 8;
            lVar15 = lStack_450;
          }
          lVar17 = *(int64_t *)(param_1 + 0x50);
          uVar12 = (int64_t)puVar11 - lVar17 & 0xffffffffffffffc0;
          puVar11 = (uint64_t *)((uVar12 - 0x40) + lVar17);
          *puVar11 = uStack_218;
          puVar11[1] = uStack_210;
          puVar11 = (uint64_t *)((uVar12 - 0x30) + lVar17);
          *puVar11 = uStack_1f8;
          puVar11[1] = uStack_1f0;
          puVar11 = (uint64_t *)((uVar12 - 0x20) + lVar17);
          *puVar11 = uStack_1d8;
          puVar11[1] = uStack_1d0;
          puVar11 = (uint64_t *)((uVar12 - 0x10) + lVar17);
          *puVar11 = uStack_1b8;
          puVar11[1] = uStack_1b0;
        }
        iVar18 = iVar18 + 1;
        puVar19 = puVar19 + 4;
        puVar7 = puVar7 + 8;
      } while (iVar18 < 6);
      fStack_480 = (float)((int)fStack_480 + 1);
      lStack_450 = lVar15 + 1;
      plVar9 = plStack_478;
      plVar14 = plStack_488;
    } while (lStack_450 < (int64_t)plStack_458);
  }
  plVar9 = plStack_468;
  puStack_308 = &processed_var_672_ptr;
  puStack_300 = &uStack_2f0;
  uStack_2f0 = uStack_2f0 & 0xffffffffffffff00;
  uStack_2f8 = CONCAT44((int)((uint64_t)uStack_2f8 >> 0x20),0x1b);
  strcpy_s(&uStack_2f0,0x20,&ui_system_data_1040_ptr);
  lVar15 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x88);
  uStack_490 = 1;
  uStack_498 = 1;
  plStack_4a0 = plVar9;
  uVar13 = SUB84(plVar14,0);
  uStack_4b0 = 0x70;
  uStack_4b8 = 0;
  uStack_4c0 = 1;
  puStack_4c8 = (int8_t *)CONCAT44(puStack_4c8._4_4_,0x41);
  uStack_4a8 = uVar13;
  puVar7 = (uint64_t *)
           FUN_1800b0a10(lVar15,&plStack_478,*(int32_t *)(lVar15 + 0xa0),&puStack_308);
  uVar20 = *puVar7;
  *puVar7 = 0;
  plStack_488 = *(int64_t **)(param_1 + 0x38);
  *(uint64_t *)(param_1 + 0x38) = uVar20;
  if (plStack_488 != (int64_t *)0x0) {
    (**(code **)(*plStack_488 + 0x38))();
  }
  if (plStack_478 != (int64_t *)0x0) {
    (**(code **)(*plStack_478 + 0x38))();
  }
  plVar9 = plStack_470;
  puStack_308 = &system_state_ptr;
  puStack_2c8 = &memory_allocator_3480_ptr;
  puStack_2c0 = auStack_2b0;
  auStack_2b0[0] = 0;
  uStack_2b8 = 0x22;
  strcpy_s(auStack_2b0,0x40,&ui_system_data_1072_ptr);
  lVar15 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x88);
  uStack_490 = 1;
  uStack_498 = 1;
  plStack_4a0 = plVar9;
  uStack_4b0 = 0x1e0;
  uStack_4b8 = 0;
  uStack_4c0 = 1;
  puStack_4c8 = (int8_t *)CONCAT44(puStack_4c8._4_4_,0x41);
  uStack_4a8 = uVar13;
  puVar7 = (uint64_t *)
           FUN_1800b0a10(lVar15,&plStack_458,*(int32_t *)(lVar15 + 0xa0),&puStack_2c8);
  uVar20 = *puVar7;
  *puVar7 = 0;
  plStack_488 = *(int64_t **)(param_1 + 0x40);
  *(uint64_t *)(param_1 + 0x40) = uVar20;
  if (plStack_488 != (int64_t *)0x0) {
    (**(code **)(*plStack_488 + 0x38))();
  }
  if (plStack_458 != (int64_t *)0x0) {
    (**(code **)(*plStack_458 + 0x38))();
  }
  plVar9 = plStack_460;
  puStack_2c8 = &system_state_ptr;
  puStack_308 = &processed_var_672_ptr;
  puStack_300 = &uStack_2f0;
  uStack_2f0 = uStack_2f0 & 0xffffffffffffff00;
  uStack_2f8 = CONCAT44((int)((uint64_t)uStack_2f8 >> 0x20),0x1e);
  strcpy_s(&uStack_2f0,0x20,&ui_system_data_1112_ptr);
  lVar15 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x88);
  uStack_490 = 1;
  uStack_498 = 1;
  plStack_4a0 = plVar9;
  uStack_4b0 = 0x10;
  uStack_4b8 = 0x21;
  uStack_4c0 = 1;
  puStack_4c8 = (int8_t *)CONCAT44(puStack_4c8._4_4_,1);
  uStack_4a8 = uVar13;
  puVar7 = (uint64_t *)
           FUN_1800b0a10(lVar15,&plStack_478,*(int32_t *)(lVar15 + 0xa0),&puStack_308);
  uVar20 = *puVar7;
  *puVar7 = 0;
  plStack_488 = *(int64_t **)(param_1 + 0x48);
  *(uint64_t *)(param_1 + 0x48) = uVar20;
  if (plStack_488 != (int64_t *)0x0) {
    (**(code **)(*plStack_488 + 0x38))();
  }
  if (plStack_478 != (int64_t *)0x0) {
    (**(code **)(*plStack_478 + 0x38))();
  }
  puStack_308 = &system_state_ptr;
  if (plStack_470 != (int64_t *)0x0) {
    (**(code **)(*plStack_470 + 0x38))();
  }
  if (plStack_468 != (int64_t *)0x0) {
    (**(code **)(*plStack_468 + 0x38))();
  }
  if (plStack_460 != (int64_t *)0x0) {
    (**(code **)(*plStack_460 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_c8 ^ (uint64_t)auStack_4e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180460970(int64_t param_1,uint64_t param_2)
void FUN_180460970(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int32_t *puVar2;
  void *puVar3;
  int8_t auStack_308 [48];
  int32_t *puStack_2d8;
  int iStack_2d0;
  uint64_t uStack_2c8;
  int64_t *plStack_250;
  int64_t *plStack_248;
  uint64_t uStack_f8;
  void *puStack_e8;
  void *puStack_e0;
  int32_t uStack_d8;
  uint8_t auStack_d0 [136];
  uint64_t uStack_48;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_308;
  uStack_2c8 = param_2;
  if ((*(int64_t *)(param_1 + 0x58) - *(int64_t *)(param_1 + 0x50) & 0xffffffffffffffc0U) != 0) {
    puStack_2d8 = (int32_t *)FUN_1800daa50();
    puStack_e8 = &memory_allocator_3432_ptr;
    puStack_e0 = auStack_d0;
    auStack_d0[0] = 0;
    uStack_d8 = 0x28;
    strcpy_s(auStack_d0,0x80,&ui_system_data_1144_ptr);
    puVar3 = &system_buffer_ptr;
    if (puStack_e0 != (void *)0x0) {
      puVar3 = puStack_e0;
    }
    (**(code **)(*(int64_t *)(puStack_2d8 + 0xd48) + 0x10))(puStack_2d8 + 0xd48,puVar3);
    puStack_e8 = &system_state_ptr;
    *puStack_2d8 = 0x20;
    *(int8_t *)((int64_t)puStack_2d8 + 0x9a0d) = 1;
    puStack_2d8[0x4706] = 0;
    puStack_2d8[0x4707] = 0;
    puStack_2d8[0x4708] = (float)*(int *)(param_1 + 0x74);
    puStack_2d8[0x4709] = (float)*(int *)(param_1 + 0x78);
    puStack_2d8[0x470a] = 0;
    puStack_2d8[0x470b] = 0x3f800000;
    *(uint64_t *)(puStack_2d8 + 0x3c) = 0x3f800000;
    *(uint64_t *)(puStack_2d8 + 0x3e) = 0;
    *(uint64_t *)(puStack_2d8 + 0x40) = 0x3f80000000000000;
    *(uint64_t *)(puStack_2d8 + 0x42) = 0;
    *(uint64_t *)(puStack_2d8 + 0x44) = 0;
    *(uint64_t *)(puStack_2d8 + 0x46) = 0x3f800000;
    *(uint64_t *)(puStack_2d8 + 0x48) = 0;
    *(uint64_t *)(puStack_2d8 + 0x4a) = 0x3f80000000000000;
    FUN_1802864f0();
    *(int8_t *)(puStack_2d8 + 8) = 1;
    puStack_2d8[0x268b] = 0xffffffff;
    puStack_2d8[1] = 0x10100;
    if (*(char *)(param_1 + 0xa8) != '\0') {
      puStack_2d8[1] = puStack_2d8[1] | 2;
      *(int8_t *)(param_1 + 0xa8) = 0;
    }
    puStack_2d8[0x473c] = render_system_control_memory;
    *(int8_t *)((int64_t)puStack_2d8 + 0x11c37) = 0;
    FUN_1801be080(puStack_2d8 + 2,system_parameter_buffer + 0x13c8);
    *(int8_t *)(puStack_2d8 + 0x25c4) = 3;
    plStack_250 = *(int64_t **)(puStack_2d8 + 0x25a4);
    *(uint64_t *)(puStack_2d8 + 0x25a4) = 0;
    if (plStack_250 != (int64_t *)0x0) {
      (**(code **)(*plStack_250 + 0x38))();
    }
    puVar2 = puStack_2d8;
    plVar1 = *(int64_t **)(param_1 + 0x10);
    if (plVar1 != (int64_t *)0x0) {
      plStack_248 = plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plStack_248 = *(int64_t **)(puVar2 + 0x25aa);
    *(int64_t **)(puVar2 + 0x25aa) = plVar1;
    if (plStack_248 != (int64_t *)0x0) {
      (**(code **)(*plStack_248 + 0x38))();
    }
    puStack_2d8[0x6e] = 0x208782;
    iStack_2d0 = FUN_1804617c0(param_1);
    FUN_1803873f0(puStack_2d8 + 0x263e,(int64_t)iStack_2d0);
                    // WARNING: Subroutine does not return
    memset(*(uint64_t *)(puStack_2d8 + 0x263e),0,(int64_t)iStack_2d0 << 2);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_308);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



