#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part357.c - 8 个函数
// 函数: void UISystem_5fc60(int64_t param_1)
void UISystem_5fc60(int64_t param_1)
{
  uint64_t uVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int iVar6;
  int64_t lVar7;
  int32_t uVar8;
  int8_t stack_array_188 [32];
  int32_t local_var_168;
  int32_t local_var_160;
  int32_t local_var_158;
  int32_t local_var_150;
  int iStack_148;
  int64_t *plStack_140;
  int8_t local_var_138;
  int32_t local_var_130;
  int32_t local_var_128;
  int64_t *plStack_120;
  int64_t *plStack_118;
  int64_t *plStack_110;
  uint64_t local_var_108;
  void *plocal_var_f8;
  int8_t *plocal_var_f0;
  int32_t local_var_e8;
  int8_t stack_array_e0 [72];
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  int32_t local_var_84;
  int8_t local_var_80;
  uint8_t local_var_7f;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uVar1 = render_system_data_memory;
  local_var_108 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  lVar7 = 0;
  local_var_128 = 0;
  iVar2 = (int)(*(int64_t *)(param_1 + 0x20) - *(int64_t *)(param_1 + 0x18) >> 4);
  iVar6 = iVar2 * 0x60;
  plocal_var_f8 = &memory_allocator_3480_ptr;
  plocal_var_f0 = stack_array_e0;
  stack_array_e0[0] = 0;
  local_var_e8 = 0x1c;
  uVar8 = strcpy_s(stack_array_e0,0x40,&system_data_fc60);
  CoreEngine_2037E0(uVar8,iVar6,&plocal_var_f8);
  plocal_var_f8 = &system_state_ptr;
  lVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,iVar6,0x10,3);
  UISystem_62cc0(uVar1,&plStack_120);
  plStack_120[2] = lVar4;
  *(int *)(plStack_120 + 3) = iVar6;
  *(int *)((int64_t)plStack_120 + 0x1c) = iVar6;
  *(int8_t *)(plStack_120 + 4) = 0;
  local_var_128 = 1;
  lVar4 = (int64_t)iVar2;
  if (0 < iVar2) {
    do {
      iVar6 = (int)*(float *)(lVar7 + 0xc + *(int64_t *)(param_1 + 0x18));
      UISystem_62760(param_1,iVar6,&plocal_var_98);
      puVar5 = (uint64_t *)((int64_t)iVar6 * 0x60 + plStack_120[2]);
      *puVar5 = plocal_var_98;
      puVar5[1] = plocal_var_90;
      puVar5[2] = CONCAT44(local_var_84,local_var_88);
      puVar5[3] = CONCAT71(local_var_7f,local_var_80);
      puVar5[4] = local_var_78;
      puVar5[5] = local_var_70;
      puVar5[6] = local_var_68;
      puVar5[7] = local_var_60;
      *(int32_t *)(puVar5 + 8) = local_var_58;
      *(int32_t *)((int64_t)puVar5 + 0x44) = local_var_54;
      *(int32_t *)(puVar5 + 9) = local_var_50;
      *(int32_t *)((int64_t)puVar5 + 0x4c) = local_var_4c;
      puVar5[10] = local_var_48;
      puVar5[0xb] = local_var_40;
      lVar7 = lVar7 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  plVar3 = plStack_120;
  plocal_var_98 = &memory_allocator_3480_ptr;
  plocal_var_90 = &local_var_80;
  local_var_80 = 0;
  local_var_88 = 0x19;
  strcpy_s(&local_var_80,0x40,&ui_system_data_1008_ptr);
  lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x88);
  local_var_130 = 1;
  local_var_138 = 1;
  plStack_140 = plVar3;
  local_var_150 = 0x60;
  local_var_158 = 0;
  local_var_160 = 1;
  local_var_168 = 0x41;
  iStack_148 = iVar2;
  puVar5 = (uint64_t *)SystemCore_ConfigManager(lVar7,&plStack_110,*(int32_t *)(lVar7 + 0xa0),&plocal_var_98)
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
  plocal_var_98 = &system_state_ptr;
  local_var_128 = 0;
  if (plStack_120 != (int64_t *)0x0) {
    (**(code **)(*plStack_120 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_188);
}
// 函数: void UISystem_5ff20(int64_t *param_1)
void UISystem_5ff20(int64_t *param_1)
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
// 函数: void UISystem_5ff3b(void)
void UISystem_5ff3b(void)
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
// 函数: void UISystem_5ff5b(void)
void UISystem_5ff5b(void)
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
// 函数: void UISystem_5ff97(void)
void UISystem_5ff97(void)
{
  int64_t unaff_R14;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(unaff_R14 + -0x10);
}
// 函数: void UISystem_5ffbc(uint64_t *param_1)
void UISystem_5ffbc(uint64_t *param_1)
{
  uint64_t unaff_RDI;
  *param_1 = unaff_RDI;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_5ffd0(int64_t param_1)
void UISystem_5ffd0(int64_t param_1)
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
  int8_t stack_array_4e8 [32];
  int8_t *plocal_var_4c8;
  int32_t local_var_4c0;
  int32_t local_var_4b8;
  int32_t local_var_4b0;
  int32_t local_var_4a8;
  int64_t *plStack_4a0;
  int8_t local_var_498;
  int32_t local_var_490;
  int64_t *plStack_488;
  float fStack_480;
  int64_t *plStack_478;
  int64_t *plStack_470;
  int64_t *plStack_468;
  int64_t *plStack_460;
  int64_t *plStack_458;
  int64_t lStack_450;
  int8_t *plocal_var_448;
  float fStack_440;
  int32_t local_var_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  int32_t local_var_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  int32_t local_var_40c;
  int8_t *plocal_var_400;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  uint64_t local_var_3e8;
  uint64_t local_var_3d8;
  uint64_t local_var_3d0;
  uint64_t local_var_3c8;
  uint64_t local_var_3c0;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  int32_t local_var_3ac;
  uint64_t local_var_3a8;
  uint64_t local_var_3a0;
  int8_t stack_array_398 [12];
  int32_t local_var_38c;
  int32_t local_var_37c;
  int32_t local_var_36c;
  int32_t local_var_35c;
  uint64_t local_var_358;
  uint64_t local_var_350;
  uint64_t local_var_348;
  uint64_t local_var_340;
  uint64_t local_var_338;
  uint64_t local_var_330;
  int32_t local_var_328;
  int32_t local_var_324;
  int32_t local_var_320;
  int32_t local_var_31c;
  int8_t stack_array_318 [16];
  void *plocal_var_308;
  uint64_t *plocal_var_300;
  uint64_t local_var_2f8;
  uint64_t local_var_2f0;
  uint64_t local_var_2e8;
  uint64_t local_var_2e0;
  uint64_t local_var_2d8;
  uint64_t local_var_2d0;
  void *plocal_var_2c8;
  int8_t *plocal_var_2c0;
  int32_t local_var_2b8;
  int8_t stack_array_2b0 [72];
  int8_t stack_array_268 [80];
  uint64_t local_var_218;
  uint64_t local_var_210;
  uint64_t local_var_1f8;
  uint64_t local_var_1f0;
  uint64_t local_var_1d8;
  uint64_t local_var_1d0;
  uint64_t local_var_1b8;
  uint64_t local_var_1b0;
  uint64_t local_var_1a8;
  uint64_t local_var_1a0;
  uint64_t local_var_198;
  uint64_t local_var_190;
  uint64_t local_var_188;
  uint64_t local_var_180;
  int32_t local_var_178;
  int32_t local_var_174;
  int32_t local_var_170;
  int32_t local_var_16c;
  int8_t local_var_168;
  int32_t local_var_164;
  int32_t local_var_160;
  int32_t local_var_15c;
  int32_t local_var_158;
  int32_t local_var_154;
  uint64_t local_var_150;
  int32_t local_var_148;
  int8_t local_var_144;
  uint64_t local_var_140;
  uint64_t local_var_138;
  int8_t stack_array_128 [4];
  int8_t stack_array_124 [92];
  uint64_t local_var_c8;
  local_var_3e8 = 0xfffffffffffffffe;
  local_var_c8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_4e8;
  plVar14 = (int64_t *)(*(int64_t *)(param_1 + 0x20) - *(int64_t *)(param_1 + 0x18) >> 4);
  plStack_488 = plVar14;
  uVar20 = RenderingSystem_1efb0(param_1,&plStack_460,(uint64_t)plVar14 & 0xffffffff);
  plVar9 = (int64_t *)plStack_460[2];
  plStack_478 = plVar9;
  uVar20 = UISystem_629b0(uVar20,&plStack_468,(uint64_t)plVar14 & 0xffffffff);
  UISystem_62ae0(uVar20,&plStack_470,(uint64_t)plVar14 & 0xffffffff);
  fStack_480 = 0.0;
  plStack_458 = (int64_t *)(int64_t)(int)plVar14;
  if (0 < (int)plVar14) {
    lStack_450 = 0;
    fStack_438 = 1.0;
    fStack_434 = 1.0;
    fStack_42c = 1.0;
    local_var_40c = 0x7f7fffff;
    local_var_41c = 0x3f800000;
    do {
      lVar15 = lStack_450;
      iVar18 = 0;
      pfVar16 = (float *)(*(int64_t *)(param_1 + 0x18) + lStack_450 * 0x10);
      fVar1 = *pfVar16;
      fVar2 = pfVar16[1];
      uVar5 = *(uint64_t *)pfVar16;
      plocal_var_448 = *(int8_t **)pfVar16;
      fVar3 = pfVar16[2];
      fVar4 = pfVar16[3];
      local_var_43c = 0x3f800000;
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
      UISystem_62760(param_1,(int)fVar4,stack_array_128);
      puVar7 = (uint64_t *)(lVar17 + 0x60);
      puVar19 = (int32_t *)(lVar17 + 8);
      plocal_var_400 = stack_array_128 + -lVar17;
      plocal_var_448 = stack_array_124 + -lVar17;
      uVar20 = CONCAT44(local_var_41c,fVar3);
      fStack_428 = fVar1;
      fStack_424 = fVar2;
      fStack_420 = fVar3;
      do {
        puVar19[-2] = *(int32_t *)((int64_t)puVar19 + (int64_t)plocal_var_400);
        puVar19[-1] = *(int32_t *)((int64_t)puVar19 + (int64_t)plocal_var_448);
        *puVar19 = *(int32_t *)(plocal_var_400 + -8 + (int64_t)puVar19);
        puVar19[1] = *(int32_t *)(plocal_var_448 + -8 + (int64_t)puVar19);
        puVar10 = stack_array_268;
        lVar17 = 6;
        do {
          Function_3e2a2a4f(puVar10);
          puVar10 = puVar10 + 0x20;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        local_var_1a8 = 0x3f800000;
        local_var_1a0 = 0;
        local_var_198 = 0x3f80000000000000;
        local_var_190 = 0;
        local_var_188 = 0;
        local_var_180 = 0x3f800000;
        local_var_178 = 0;
        local_var_174 = 0;
        local_var_170 = 0;
        local_var_16c = 0x3f800000;
        local_var_168 = 1;
        local_var_164 = 0xbf800000;
        local_var_160 = 0x3f800000;
        local_var_158 = 0xbf800000;
        local_var_15c = 0x3f800000;
        local_var_154 = 0x3f800000;
        local_var_150 = 0x447a0000;
        local_var_148 = 0x3f800000;
        uVar21 = DataStructure_864f0(stack_array_268);
        local_var_144 = 0;
        local_var_140 = 0;
        local_var_138 = 0x7f7fffff00000000;
        plocal_var_4c8 = stack_array_318;
        RenderingSystem_1c410(uVar21,iVar18,&fStack_3f8,&local_var_3d8);
        fStack_410 = fVar3 + fStack_3f0;
        fStack_414 = fVar2 + fStack_3f4;
        fStack_418 = fVar1 + fStack_3f8;
        local_var_3c8 = local_var_3d8;
        local_var_3c0 = local_var_3d0;
        local_var_3ac = local_var_40c;
        fStack_3b8 = fStack_418;
        fStack_3b4 = fStack_414;
        fStack_3b0 = fStack_410;
        local_var_3a8 = uVar5;
        local_var_3a0 = uVar20;
        DataStructure_87020(stack_array_268,&local_var_3a8,&fStack_3b8,&local_var_3c8);
        local_var_148 = 0x3f800000;
        local_var_168 = 1;
        local_var_154 = 0x3c23d70a;
        local_var_150 = 0x3fc90fdb41200000;
        local_var_164 = 0xbc23d70a;
        local_var_160 = 0x3c23d70a;
        local_var_158 = 0xbc23d70a;
        local_var_15c = 0x3c23d70a;
        DataStructure_864f0(stack_array_268);
        DataStructure_87b30(&local_var_1a8,stack_array_398);
        local_var_38c = 0;
        local_var_37c = 0;
        local_var_36c = 0;
        local_var_35c = 0x3f800000;
        uVar21 = DataStructure_86010(stack_array_268,&plocal_var_2c8,0);
        ErrorRecoverySystem(stack_array_398,&local_var_358,uVar21);
        *puVar7 = local_var_358;
        puVar7[1] = local_var_350;
        puVar7[2] = local_var_348;
        puVar7[3] = local_var_340;
        puVar7[4] = local_var_338;
        puVar7[5] = local_var_330;
        *(int32_t *)(puVar7 + 6) = local_var_328;
        *(int32_t *)((int64_t)puVar7 + 0x34) = local_var_324;
        *(int32_t *)(puVar7 + 7) = local_var_320;
        *(int32_t *)((int64_t)puVar7 + 0x3c) = local_var_31c;
        if (lVar15 == 0) {
          plocal_var_308 = (void *)0x0;
          plocal_var_300 = (uint64_t *)0x0;
          local_var_2f8 = 0;
          local_var_2f0 = 0;
          local_var_2e8 = 0;
          local_var_2e0 = 0;
          local_var_2d8 = 0;
          local_var_2d0 = 0;
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
            *puVar6 = plocal_var_308;
            puVar6[1] = plocal_var_300;
            puVar6[2] = local_var_2f8;
            puVar6[3] = local_var_2f0;
            puVar6[4] = local_var_2e8;
            puVar6[5] = local_var_2e0;
            *(int32_t *)(puVar6 + 6) = (int32_t)local_var_2d8;
            *(int32_t *)((int64_t)puVar6 + 0x34) = local_var_2d8._4_4_;
            *(int32_t *)(puVar6 + 7) = (int32_t)local_var_2d0;
            *(int32_t *)((int64_t)puVar6 + 0x3c) = local_var_2d0._4_4_;
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
          *puVar11 = local_var_218;
          puVar11[1] = local_var_210;
          puVar11 = (uint64_t *)((uVar12 - 0x30) + lVar17);
          *puVar11 = local_var_1f8;
          puVar11[1] = local_var_1f0;
          puVar11 = (uint64_t *)((uVar12 - 0x20) + lVar17);
          *puVar11 = local_var_1d8;
          puVar11[1] = local_var_1d0;
          puVar11 = (uint64_t *)((uVar12 - 0x10) + lVar17);
          *puVar11 = local_var_1b8;
          puVar11[1] = local_var_1b0;
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
  plocal_var_308 = &processed_var_672_ptr;
  plocal_var_300 = &local_var_2f0;
  local_var_2f0 = local_var_2f0 & 0xffffffffffffff00;
  local_var_2f8 = CONCAT44((int)((uint64_t)local_var_2f8 >> 0x20),0x1b);
  strcpy_s(&local_var_2f0,0x20,&ui_system_data_1040_ptr);
  lVar15 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x88);
  local_var_490 = 1;
  local_var_498 = 1;
  plStack_4a0 = plVar9;
  uVar13 = SUB84(plVar14,0);
  local_var_4b0 = 0x70;
  local_var_4b8 = 0;
  local_var_4c0 = 1;
  plocal_var_4c8 = (int8_t *)CONCAT44(plocal_var_4c8._4_4_,0x41);
  local_var_4a8 = uVar13;
  puVar7 = (uint64_t *)
           SystemCore_ConfigManager(lVar15,&plStack_478,*(int32_t *)(lVar15 + 0xa0),&plocal_var_308);
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
  plocal_var_308 = &system_state_ptr;
  plocal_var_2c8 = &memory_allocator_3480_ptr;
  plocal_var_2c0 = stack_array_2b0;
  stack_array_2b0[0] = 0;
  local_var_2b8 = 0x22;
  strcpy_s(stack_array_2b0,0x40,&ui_system_data_1072_ptr);
  lVar15 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x88);
  local_var_490 = 1;
  local_var_498 = 1;
  plStack_4a0 = plVar9;
  local_var_4b0 = 0x1e0;
  local_var_4b8 = 0;
  local_var_4c0 = 1;
  plocal_var_4c8 = (int8_t *)CONCAT44(plocal_var_4c8._4_4_,0x41);
  local_var_4a8 = uVar13;
  puVar7 = (uint64_t *)
           SystemCore_ConfigManager(lVar15,&plStack_458,*(int32_t *)(lVar15 + 0xa0),&plocal_var_2c8);
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
  plocal_var_2c8 = &system_state_ptr;
  plocal_var_308 = &processed_var_672_ptr;
  plocal_var_300 = &local_var_2f0;
  local_var_2f0 = local_var_2f0 & 0xffffffffffffff00;
  local_var_2f8 = CONCAT44((int)((uint64_t)local_var_2f8 >> 0x20),0x1e);
  strcpy_s(&local_var_2f0,0x20,&ui_system_data_1112_ptr);
  lVar15 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x88);
  local_var_490 = 1;
  local_var_498 = 1;
  plStack_4a0 = plVar9;
  local_var_4b0 = 0x10;
  local_var_4b8 = 0x21;
  local_var_4c0 = 1;
  plocal_var_4c8 = (int8_t *)CONCAT44(plocal_var_4c8._4_4_,1);
  local_var_4a8 = uVar13;
  puVar7 = (uint64_t *)
           SystemCore_ConfigManager(lVar15,&plStack_478,*(int32_t *)(lVar15 + 0xa0),&plocal_var_308);
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
  plocal_var_308 = &system_state_ptr;
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
  SystemSecurityChecker(local_var_c8 ^ (uint64_t)stack_array_4e8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_60970(int64_t param_1,uint64_t param_2)
void UISystem_60970(int64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
  int32_t *puVar2;
  void *puVar3;
  int8_t stack_array_308 [48];
  int32_t *plocal_var_2d8;
  int iStack_2d0;
  uint64_t local_var_2c8;
  int64_t *plStack_250;
  int64_t *plStack_248;
  uint64_t local_var_f8;
  void *plocal_var_e8;
  void *plocal_var_e0;
  int32_t local_var_d8;
  uint8_t stack_array_d0 [136];
  uint64_t local_var_48;
  local_var_f8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_308;
  local_var_2c8 = param_2;
  if ((*(int64_t *)(param_1 + 0x58) - *(int64_t *)(param_1 + 0x50) & 0xffffffffffffffc0U) != 0) {
    plocal_var_2d8 = (int32_t *)GenericFunction_1800daa50();
    plocal_var_e8 = &memory_allocator_3432_ptr;
    plocal_var_e0 = stack_array_d0;
    stack_array_d0[0] = 0;
    local_var_d8 = 0x28;
    strcpy_s(stack_array_d0,0x80,&ui_system_data_1144_ptr);
    puVar3 = &system_buffer_ptr;
    if (plocal_var_e0 != (void *)0x0) {
      puVar3 = plocal_var_e0;
    }
    (**(code **)(*(int64_t *)(plocal_var_2d8 + 0xd48) + 0x10))(plocal_var_2d8 + 0xd48,puVar3);
    plocal_var_e8 = &system_state_ptr;
    *plocal_var_2d8 = 0x20;
    *(int8_t *)((int64_t)plocal_var_2d8 + 0x9a0d) = 1;
    plocal_var_2d8[0x4706] = 0;
    plocal_var_2d8[0x4707] = 0;
    plocal_var_2d8[0x4708] = (float)*(int *)(param_1 + 0x74);
    plocal_var_2d8[0x4709] = (float)*(int *)(param_1 + 0x78);
    plocal_var_2d8[0x470a] = 0;
    plocal_var_2d8[0x470b] = 0x3f800000;
    *(uint64_t *)(plocal_var_2d8 + 0x3c) = 0x3f800000;
    *(uint64_t *)(plocal_var_2d8 + 0x3e) = 0;
    *(uint64_t *)(plocal_var_2d8 + 0x40) = 0x3f80000000000000;
    *(uint64_t *)(plocal_var_2d8 + 0x42) = 0;
    *(uint64_t *)(plocal_var_2d8 + 0x44) = 0;
    *(uint64_t *)(plocal_var_2d8 + 0x46) = 0x3f800000;
    *(uint64_t *)(plocal_var_2d8 + 0x48) = 0;
    *(uint64_t *)(plocal_var_2d8 + 0x4a) = 0x3f80000000000000;
    DataStructure_864f0();
    *(int8_t *)(plocal_var_2d8 + 8) = 1;
    plocal_var_2d8[0x268b] = 0xffffffff;
    plocal_var_2d8[1] = 0x10100;
    if (*(char *)(param_1 + 0xa8) != '\0') {
      plocal_var_2d8[1] = plocal_var_2d8[1] | 2;
      *(int8_t *)(param_1 + 0xa8) = 0;
    }
    plocal_var_2d8[0x473c] = render_system_control_memory;
    *(int8_t *)((int64_t)plocal_var_2d8 + 0x11c37) = 0;
    GenericFunction_1801be080(plocal_var_2d8 + 2,system_parameter_buffer + 0x13c8);
    *(int8_t *)(plocal_var_2d8 + 0x25c4) = 3;
    plStack_250 = *(int64_t **)(plocal_var_2d8 + 0x25a4);
    *(uint64_t *)(plocal_var_2d8 + 0x25a4) = 0;
    if (plStack_250 != (int64_t *)0x0) {
      (**(code **)(*plStack_250 + 0x38))();
    }
    puVar2 = plocal_var_2d8;
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
    plocal_var_2d8[0x6e] = 0x208782;
    iStack_2d0 = UISystem_617c0(param_1);
    RenderingSystem_873f0(plocal_var_2d8 + 0x263e,(int64_t)iStack_2d0);
// WARNING: Subroutine does not return
    memset(*(uint64_t *)(plocal_var_2d8 + 0x263e),0,(int64_t)iStack_2d0 << 2);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_308);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address