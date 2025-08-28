/* 函数别名定义: SystemOutputManager */
#define SystemOutputManager SystemOutputManager
#include "SystemDataAdvancedValidator_definition.h"
#include "SystemOutputManager0_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_08_part044_sub002_sub002.c - 1 个函数
// 函数: void UISystem_InputHandler(int64_t param_1,int param_2,int64_t param_3,int8_t param_4)
void UISystem_InputHandler(int64_t param_1,int param_2,int64_t param_3,int8_t param_4)
{
  int32_t uVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int8_t uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  void *puVar9;
  int *piVar10;
  int64_t lVar11;
  float *pfVar12;
  int64_t lVar13;
  byte bVar14;
  uint *puVar15;
  uint64_t uVar16;
  int64_t lVar17;
  uint uVar18;
  int64_t lVar19;
  int64_t lVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int32_t uVar25;
  int8_t stack_array_558 [32];
  void *plocal_var_538;
  int64_t lStack_530;
  float fStack_528;
  char cStack_520;
  int iStack_518;
  int8_t local_var_514;
  uint64_t local_var_510;
  float fStack_508;
  int32_t local_var_504;
  uint64_t local_var_500;
  float fStack_4f8;
  int32_t local_var_4f4;
  float fStack_4e8;
  float fStack_4e4;
  float fStack_4e0;
  int32_t local_var_4dc;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  int32_t local_var_4cc;
  float fStack_4c8;
  float fStack_4c4;
  float fStack_4c0;
  int32_t local_var_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  int32_t local_var_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  int32_t local_var_49c;
  int32_t local_var_498;
  int iStack_494;
  uint64_t local_var_490;
  int32_t local_var_488;
  int32_t local_var_484;
  float fStack_480;
  int32_t local_var_47c;
  int32_t local_var_478;
  int32_t local_var_474;
  char cStack_470;
  int32_t local_var_46f;
  int32_t local_var_468;
  int iStack_464;
  uint64_t local_var_460;
  int32_t local_var_458;
  int32_t local_var_454;
  float fStack_450;
  int32_t local_var_44c;
  int32_t local_var_448;
  int32_t local_var_444;
  char cStack_440;
  int32_t local_var_43f;
  int32_t local_var_438;
  int32_t local_var_434;
  uint64_t local_var_430;
  float fStack_428;
  int32_t local_var_424;
  int32_t local_var_420;
  float fStack_41c;
  float fStack_418;
  int32_t local_var_414;
  char cStack_410;
  int8_t local_var_40f;
  int16_t local_var_40e;
  int8_t local_var_40c;
  int iStack_408;
  int iStack_404;
  uint64_t local_var_400;
  uint64_t local_var_3f8;
  uint64_t local_var_3f0;
  int32_t local_var_3e8;
  int32_t local_var_3e4;
  char cStack_3e0;
  int32_t local_var_3df;
  int32_t local_var_3d8;
  int32_t local_var_3d4;
  uint64_t local_var_3d0;
  int32_t local_var_3c8;
  uint64_t local_var_3c4;
  uint64_t local_var_3bc;
  int32_t local_var_3b4;
  int32_t local_var_3b0;
  int8_t local_var_3ac;
  int aiStack_3a8 [2];
  uint64_t local_var_3a0;
  uint64_t local_var_398;
  uint64_t local_var_390;
  int32_t local_var_388;
  int32_t local_var_384;
  char cStack_380;
  int32_t local_var_37f;
  int aiStack_378 [10];
  int8_t local_var_350;
  int32_t local_var_34f;
  int iStack_348;
  int32_t local_var_344;
  uint64_t local_var_340;
  int32_t local_var_338;
  int32_t local_var_334;
  int32_t local_var_330;
  int32_t local_var_32c;
  int32_t local_var_328;
  int32_t local_var_324;
  char cStack_320;
  int32_t local_var_31f;
  int32_t local_var_318;
  int iStack_314;
  uint64_t local_var_310;
  uint64_t local_var_308;
  uint64_t local_var_300;
  int32_t local_var_2f8;
  int32_t local_var_2f4;
  char cStack_2f0;
  int32_t local_var_2ef;
  int32_t local_var_2e8;
  int32_t local_var_2e4;
  uint64_t local_var_2e0;
  int32_t local_var_2d8;
  int32_t local_var_2d4;
  int32_t local_var_2d0;
  int32_t local_var_2cc;
  int32_t local_var_2c8;
  int32_t local_var_2c4;
  char cStack_2c0;
  int32_t local_var_2bf;
  int32_t local_var_2b8;
  int iStack_2b4;
  uint64_t local_var_2b0;
  int32_t local_var_2a8;
  float fStack_2a4;
  int32_t local_var_2a0;
  int32_t local_var_29c;
  int32_t local_var_298;
  int32_t local_var_294;
  char cStack_290;
  int32_t local_var_28f;
  int32_t local_var_288;
  int32_t local_var_284;
  uint64_t local_var_280;
  int32_t local_var_278;
  float fStack_274;
  int32_t local_var_270;
  int32_t local_var_26c;
  int32_t local_var_268;
  int32_t local_var_264;
  char cStack_260;
  int32_t local_var_25f;
  int32_t local_var_258;
  int32_t local_var_254;
  uint64_t local_var_250;
  int32_t local_var_248;
  int32_t local_var_244;
  int32_t local_var_240;
  int32_t local_var_23c;
  int32_t local_var_238;
  int32_t local_var_234;
  int8_t local_var_230;
  int32_t local_var_22f;
  int32_t local_var_228;
  int iStack_224;
  int32_t local_var_220;
  int32_t local_var_21c;
  int32_t local_var_218;
  int32_t local_var_214;
  int32_t local_var_210;
  int32_t local_var_20c;
  int32_t local_var_208;
  int32_t local_var_204;
  int16_t local_var_200;
  int32_t local_var_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  int32_t local_var_1ec;
  int32_t local_var_1e8;
  int32_t local_var_1e4;
  int32_t local_var_1e0;
  int32_t local_var_1dc;
  uint local_var_1d8;
  uint local_var_1d4;
  uint local_var_1d0;
  uint local_var_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  uint local_var_1bc;
  uint local_var_1b8;
  uint local_var_1b4;
  uint local_var_1b0;
  uint local_var_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  uint local_var_19c;
  uint64_t local_var_198;
  uint64_t local_var_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  uint local_var_17c;
  uint64_t local_var_178;
  uint64_t local_var_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  uint local_var_15c;
  int8_t stack_array_158 [16];
  int8_t stack_array_148 [16];
  int8_t stack_array_138 [16];
  int8_t stack_array_128 [16];
  uint64_t local_var_118;
  uint64_t local_var_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint local_var_fc;
  uint local_var_f8;
  uint local_var_f4;
  uint local_var_f0;
  uint local_var_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint local_var_dc;
  uint local_var_d8;
  uint local_var_d4;
  uint local_var_d0;
  uint local_var_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint local_var_bc;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  uint local_var_9c;
  uint64_t local_var_98;
  local_var_98 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_558;
  lVar13 = *(int64_t *)(param_1 + 0x108);
  lVar11 = 0;
  uVar18 = *(uint *)(lVar13 + 0x56c) & 0x4000;
  if (uVar18 != 0) {
    lVar11 = *(int64_t *)(*(int64_t *)(lVar13 + 0x8f8) + 0x9e8);
  }
  if (lVar11 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)((int64_t)*(int *)(lVar11 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar11 + 0xd0));
  }
  cVar5 = false;
  lVar20 = (int64_t)iVar7 * 0x170 + system_system_memory;
  if ((system_status_flag == 1) || (system_status_flag == 4)) {
    lVar17 = 1;
  }
  else {
    lVar17 = 0;
  }
  cVar6 = (char)lVar17;
  local_var_500 = lVar17 << 0x1f;
  iStack_518 = param_2;
  local_var_514 = param_4;
  local_var_510 = lVar20;
  switch(*(int32_t *)(param_3 + 0x4c)) {
  case 0:
  case 1:
    if (uVar18 == 0) {
      fStack_528 = *(float *)(lVar13 + 0x10);
      lStack_530 = CONCAT44(lStack_530._4_4_,*(int32_t *)(param_3 + 0x4c));
      plocal_var_538 = &rendering_buffer_2512_ptr;
      SystemConfigurationManager(system_message_context,0,0x80000000000,3);
    }
    piVar10 = (int *)PhysicsSystem_ForceCalculator(param_1,*(int32_t *)(param_3 + 0x50));
    if ((((lVar11 != 0) &&
         ((*(byte *)((int64_t)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar11 + 0xd0))
           >> 1 & 1) != 0)) || (piVar10 == (int *)0x0)) ||
       ((*piVar10 != *(int *)(param_3 + 0x50) || (piVar10[7] == -1)))) goto SystemCore_StateProcessor;
    *(int *)(param_1 + 0x48) = *(int *)(param_3 + 0x50);
    if ((cVar6 == '\0') || (*(int *)(*(int64_t *)(param_1 + 0x108) + 0x570) == 2)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    plocal_var_538 = (void *)CONCAT71(plocal_var_538._1_7_,uVar4);
    cVar5 = function_5b0d00(param_1 + 0x110,iStack_518,piVar10,*(int *)(param_3 + 0x4c) == 1);
    if (cVar5 == '\0') goto SystemCore_StateProcessor;
    if (cVar6 == '\0') {
      *(int **)(param_1 + 600) = piVar10;
      *(int32_t *)(param_1 + 0x284) = 0;
    }
    break;
  case 2:
  case 3:
  case 4:
    *(int32_t *)(param_1 + 0x27c) = 0xffffffff;
    if ((lVar11 != 0) &&
       ((*(byte *)((int64_t)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar11 + 0xd0))
         >> 1 & 1) != 0)) goto SystemCore_StateProcessor;
    if ((*(uint *)(lVar13 + 0x56c) & 0x4000) == 0) {
      fStack_528 = *(float *)(lVar13 + 0x10);
      lStack_530 = CONCAT44(lStack_530._4_4_,*(int32_t *)(param_3 + 0x4c));
      plocal_var_538 = &rendering_buffer_2512_ptr;
      SystemConfigurationManager(system_message_context,0,0x80000000000,3);
    }
    puVar9 = (void *)PhysicsSystem_ForceCalculator(param_1,*(int32_t *)(param_3 + 0x50));
    if (puVar9 == (void *)0x0) goto SystemCore_StateProcessor;
    iVar7 = *(int *)(param_3 + 0x4c);
    if (iVar7 == 3) {
      iVar8 = *(int *)(puVar9 + 0x34);
    }
    else {
      iVar8 = *(int *)(puVar9 + 0x30);
    }
    if (iVar8 == -1) goto SystemCore_StateProcessor;
    fStack_528 = (float)CONCAT31(fStack_528._1_3_,cVar6);
    lStack_530 = local_var_510;
    plocal_var_538 = puVar9;
    cVar5 = function_5b1210(param_1 + 0x110,iStack_518,iVar7 == 3,iVar7 == 4);
    if (cVar5 == '\0') goto SystemCore_StateProcessor;
    if (cVar6 == '\0') {
      *(int32_t *)(param_1 + 0x54) = 0xffff;
      *(int32_t *)(param_1 + 0x44) = 0x3f800000;
      *(uint64_t *)(param_1 + 0x4c) = 0xffffffffbf800000;
      *(int8_t *)(param_1 + 0x40) = 0;
      *(int32_t *)(param_1 + 0x88) = 0xf149f2ca;
      *(int32_t *)(param_1 + 200) = 0xf149f2ca;
      *(int8_t *)(param_1 + 0xd8) = 0xff;
      if ((*(int *)(param_3 + 0x4c) != 4) && (*(int *)(*(int64_t *)(param_1 + 0x108) + 0x564) < 0))
      {
        *(int32_t *)(param_1 + 0x44) = system_system_memory;
        *(int8_t *)(param_1 + 0x57) = 1;
      }
    }
    break;
  case 5:
    if (uVar18 == 0) {
      fStack_528 = *(float *)(lVar13 + 0x10);
      lStack_530 = CONCAT44(lStack_530._4_4_,5);
      plocal_var_538 = &rendering_buffer_2512_ptr;
      SystemConfigurationManager(system_message_context,0,0x80000000000,3);
    }
    lVar13 = function_5a0900(param_1,*(int32_t *)(param_3 + 0x50));
    if (((lVar13 == 0) || (*(int *)(lVar13 + 0xc) == -1)) ||
       (cVar5 = function_5a6bb0(param_1,lVar13), cVar5 == '\0')) goto SystemCore_StateProcessor;
    *(int64_t *)(param_1 + 0x260) = lVar13;
    *(int32_t *)(param_1 + 0x27c) = 0xffffffff;
    break;
  case 6:
    cVar5 = '\0';
    iVar7 = *(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x1c8) + 0x590) + 0x2450 +
                    (int64_t)param_2 * 0x48);
    if (iVar7 == -1) {
      bVar14 = 0xff;
    }
    else {
      bVar14 = *(byte *)((int64_t)iVar7 * 0x68 + 0x60 + system_system_memory);
    }
    aiStack_378[9] = 0x3ecccccd;
    local_var_34f = 0x10000;
    aiStack_378[1] = 0xffffffff;
    aiStack_378[4] = 0;
    aiStack_378[5] = 0;
    aiStack_378[6] = 0x3f800000;
    aiStack_378[7] = -0x41b33333;
    aiStack_378[8] = 0xbe4ccccd;
    if ((system_status_flag == 1) || (system_status_flag == 4)) {
      local_var_350 = 1;
    }
    else {
      local_var_350 = 0;
    }
    aiStack_378[0] = param_2;
    if ((bVar14 & 0xfd) == 0) {
      aiStack_378[2] = 0x200a;
      aiStack_378[3] = 0;
code_r0x0001805a5765:
      cVar5 = CoreSystemThreadManager(*(int64_t *)(param_1 + 0x1c8),aiStack_378);
      if (cVar5 != '\0') {
        *(int32_t *)(param_1 + 0x1d4) = 0;
      }
    }
    else if ((byte)(bVar14 - 3) < 2) {
      aiStack_378[2] = 0x203c;
      aiStack_378[3] = 0;
      goto code_r0x0001805a5765;
    }
    if (cVar5 == '\0') goto SystemCore_StateProcessor;
    *(uint64_t *)(param_1 + 600) = 0;
    *(uint64_t *)(param_1 + 0x268) = 0;
    if ((lVar11 != 0) &&
       ((*(byte *)((int64_t)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar11 + 0xd0))
         >> 1 & 1) != 0)) {
      *(int64_t *)(param_1 + 0x1f8) =
           *(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x200) * 8) + 40000;
    }
    break;
  case 7:
    iVar7 = *(int *)(*(int64_t *)(lVar13 + 0x590) + 0x2450 + (int64_t)param_2 * 0x48);
    if (iVar7 == -1) {
      cVar5 = -1;
    }
    else {
      cVar5 = *(char *)((int64_t)iVar7 * 0x68 + 0x60 + system_system_memory);
    }
    local_var_384 = 0x3ecccccd;
    local_var_37f = 0x10000;
    aiStack_3a8[1] = 0xffffffff;
    local_var_398 = 0;
    local_var_390 = 0xbe4ccccd3f800000;
    local_var_388 = 0xbe4ccccd;
    aiStack_3a8[0] = param_2;
    cStack_380 = cVar6;
    if (cVar5 == '\x05') {
      local_var_3a0 = local_var_500 | 0x200e;
    }
    else {
      if ((cVar5 != '\x06') ||
         ((float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x210) * 8) -
                 *(int64_t *)(param_1 + 0x208)) * 1e-05 < 0.0)) goto SystemCore_StateProcessor;
      local_var_3a0 = local_var_500 | 0x200f;
    }
    cVar5 = CoreSystemThreadManager(lVar13,aiStack_3a8);
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    if ((*(byte *)(lVar20 + 0x140) & 0x10) == 0) {
      if ((*(uint *)(param_1 + 0x27c) < 4) && (cVar6 == '\0')) {
        local_var_200 = 0xff;
        local_var_228 = 0;
        iStack_224 = *(uint *)(param_1 + 0x27c) + 4;
        local_var_1fc = 0;
        local_var_220 = 0;
        local_var_21c = 0;
        local_var_218 = 0;
        local_var_214 = 0;
        local_var_210 = 0;
        local_var_20c = 0;
        local_var_208 = 0;
        local_var_204 = 0;
        function_5a4590(param_1,&local_var_228);
      }
      lVar13 = PhysicsSystem_ForceCalculator(param_1,*(int32_t *)(param_3 + 0x50));
      iVar7 = iStack_518;
      if ((lVar13 != 0) && (*(int *)(lVar13 + 0x1c) != -1)) {
        plVar2 = *(int64_t **)(*(int64_t *)(param_1 + 0x108) + 0x590);
        iVar8 = (int)plVar2[(int64_t)iStack_518 * 9 + 0x48a];
        local_var_510 = CONCAT44(local_var_510._4_4_,iVar8);
        if ((cVar6 == '\0') ||
           ((iVar8 != -1 && (*(int *)((int64_t)iVar8 * 0x68 + 0x58 + system_system_memory) == 0x14)))) {
          fVar22 = (float)(**(code **)(*plVar2 + 0x90))(plVar2,iStack_518);
        }
        else {
          lVar17 = SystemCore_Initializer(&system_data_5f30,*(int32_t *)((int64_t)plVar2 + 0xac),
                                 *(int32_t *)(lVar13 + 0x34));
          fVar22 = (*(float *)(lVar17 + 0x188) - *(float *)(lVar17 + 0x1e8)) /
                   *(float *)(lVar17 + 0x188);
        }
        fStack_528 = 1.0;
        lStack_530 = CONCAT44(lStack_530._4_4_,fVar22);
        plocal_var_538 = (void *)
                      CONCAT71(plocal_var_538._1_7_,(int)local_var_510 == *(int *)(lVar13 + 0x30));
        cStack_520 = cVar6;
        cVar5 = function_5b1e30(param_1 + 0x110,iVar7,lVar13,lVar20);
        if ((((cVar5 != '\0') && (lVar11 != 0)) && (0 < *(int *)(lVar11 + 0x30))) &&
           (((*(uint *)((int64_t)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x50 +
                       *(int64_t *)(lVar11 + 0xd0)) >> 9 & 1) == 0 || (0 < *(short *)(lVar11 + 8)))
           )) {
          puVar15 = (uint *)((int64_t)*(char *)(*(int64_t *)(lVar11 + 0xf8) + 0x88) * 0x100 +
                            *(int64_t *)
                             (*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x658) + 0x18));
          do {
            LOCK();
            uVar18 = *puVar15;
            *puVar15 = *puVar15 | 1;
            UNLOCK();
          } while ((uVar18 & 1) != 0);
          local_var_198 = *(uint64_t *)(puVar15 + 1);
          local_var_190 = *(uint64_t *)(puVar15 + 3);
          fVar22 = (float)puVar15[5];
          fVar23 = (float)puVar15[6];
          fVar24 = (float)puVar15[7];
          local_var_17c = puVar15[8];
          *puVar15 = 0;
          lVar13 = *(int64_t *)(param_1 + 0x108);
          local_var_4cc = 0x7f7fffff;
          fStack_4d0 = 1.0 / *(float *)(*(int64_t *)(lVar13 + 0x6d8) + 0x8c0);
          lVar11 = *(int64_t *)(*(int64_t *)(lVar13 + 0x6d8) + 0x8a8);
          fStack_4d8 = fStack_4d0 * *(float *)(param_3 + 0x54);
          fStack_4d4 = fStack_4d0 * *(float *)(param_3 + 0x58);
          fStack_4d0 = fStack_4d0 * *(float *)(param_3 + 0x5c);
          fStack_188 = fVar22;
          fStack_184 = fVar23;
          fStack_180 = fVar24;
          local_var_118 = local_var_198;
          local_var_110 = local_var_190;
          fStack_108 = fVar22;
          fStack_104 = fVar23;
          fStack_100 = fVar24;
          local_var_fc = local_var_17c;
          pfVar12 = (float *)SystemFileHandler(&local_var_198,stack_array_128,&fStack_4d8);
          local_var_4f4 = 0x7f7fffff;
          fStack_4f8 = (fVar24 + pfVar12[2]) * *(float *)(lVar11 + 0x98) + *(float *)(lVar11 + 0xa8)
          ;
          local_var_500 = CONCAT44((fVar23 + pfVar12[1]) * *(float *)(lVar11 + 0x84) +
                                (fVar22 + *pfVar12) * *(float *)(lVar11 + 0x74) +
                                *(float *)(lVar11 + 0xa4),
                                (fVar23 + pfVar12[1]) * *(float *)(lVar11 + 0x80) +
                                (fVar22 + *pfVar12) * *(float *)(lVar11 + 0x70) +
                                *(float *)(lVar11 + 0xa0));
          if (*(char *)(param_3 + 0x80) == -1) {
            (**(code **)(**(int64_t **)(lVar13 + 0x590) + 0xf8))(*(int64_t **)(lVar13 + 0x590),1);
            function_515300(lVar13);
          }
          else {
            iVar7 = *(int *)(param_3 + 0x7c);
            lVar11 = *(int64_t *)(param_1 + 0x100);
            if (((-1 < iVar7) && (iVar7 < *(int *)(lVar11 + 0x52ed94))) &&
               ((-1 < *(short *)(lVar11 + 0x52dda0 + (int64_t)iVar7 * 2) &&
                ((lVar11 = *(int64_t *)((int64_t)iVar7 * 0xa60 + 0x3778 + lVar11), lVar11 != 0 &&
                 (*(char *)(lVar11 + 0x8be) != '\0')))))) {
              fStack_528 = (float)(**(code **)(**(int64_t **)(lVar13 + 0x590) + 0xf8))
                                            (*(int64_t **)(lVar13 + 0x590),1);
              fStack_528 = fStack_528 * 0.75;
              lStack_530 = CONCAT71(lStack_530._1_7_,*(int8_t *)(param_3 + 0x80));
              plocal_var_538 = (void *)CONCAT44(plocal_var_538._4_4_,*(int32_t *)(param_3 + 0x7c))
              ;
              function_514200(lVar13,0x80,&local_var_500);
            }
          }
        }
      }
      if (*(int *)(param_3 + 0x4c) != 8) {
        iVar7 = *(int *)(param_3 + 0x7c);
        lVar13 = *(int64_t *)(param_1 + 0x100);
        if (((-1 < iVar7) && (iVar7 < *(int *)(lVar13 + 0x52ed94))) &&
           (-1 < *(short *)(lVar13 + 0x52dda0 + (int64_t)iVar7 * 2))) {
          lVar11 = lVar13 + 0x30a0 + (int64_t)iVar7 * 0xa60;
          function_5a7550(lVar13,lVar11,*(int *)(param_3 + 0x4c),*(int32_t *)(param_3 + 0x84));
          if (*(int *)(param_3 + 0x4c) == 10) {
            *(int32_t *)(lVar11 + 0x1e8) = 0;
            *(uint64_t *)(lVar11 + 0x138) = *(uint64_t *)(lVar11 + 0x164);
            *(uint64_t *)(lVar11 + 0x140) = *(uint64_t *)(lVar11 + 0x16c);
            *(uint64_t *)(lVar11 + 0x148) = *(uint64_t *)(lVar11 + 0x174);
            *(uint64_t *)(lVar11 + 0x150) = *(uint64_t *)(lVar11 + 0x17c);
            *(uint64_t *)(lVar11 + 0x158) = *(uint64_t *)(lVar11 + 0x184);
            *(int32_t *)(lVar11 + 0x160) = *(int32_t *)(lVar11 + 0x18c);
            *(uint64_t *)(lVar11 + 400) = *(uint64_t *)(lVar11 + 0x1bc);
            *(uint64_t *)(lVar11 + 0x198) = *(uint64_t *)(lVar11 + 0x1c4);
            *(uint64_t *)(lVar11 + 0x1a0) = *(uint64_t *)(lVar11 + 0x1cc);
            *(uint64_t *)(lVar11 + 0x1a8) = *(uint64_t *)(lVar11 + 0x1d4);
            *(uint64_t *)(lVar11 + 0x1b0) = *(uint64_t *)(lVar11 + 0x1dc);
            *(int32_t *)(lVar11 + 0x1b8) = *(int32_t *)(lVar11 + 0x1e4);
          }
        }
      }
      break;
    }
    uVar4 = Function_ae66d806(lVar13);
    lVar11 = *(int64_t *)(*(int64_t *)(lVar13 + 0x8f8) + 0x9f0);
    if (lVar11 == 0) {
      uVar25 = 0xffffffff;
    }
    else {
      uVar25 = *(int32_t *)
                ((int64_t)*(int *)(lVar11 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar11 + 0xd0));
    }
    plocal_var_538 = (void *)CONCAT71(plocal_var_538._1_7_,uVar4);
    lVar11 = Timer_GetElapsed(local_var_510,9,*(uint *)(lVar13 + 0x564) >> 0x1f ^ 1,uVar25);
    if ((lVar11 != 0) && (*(int *)(lVar11 + 0x3c) != -1)) {
      local_var_308 = 0;
      local_var_300 = 0xbe4ccccd3f800000;
      local_var_2f8 = 0xbe4ccccd;
      local_var_2f4 = 0x3ecccccd;
      local_var_2ef = 0x10000;
      local_var_318 = 1;
      local_var_310 = local_var_500;
      iStack_314 = *(int *)(lVar11 + 0x3c);
      cStack_2f0 = cVar6;
      CoreSystemThreadManager(lVar13,&local_var_318);
    }
    goto code_r0x0001805a68bf;
  case 0xc:
    piVar10 = *(int **)(lVar13 + 0x8f8);
    iVar7 = *(int *)(lVar13 + 0x638);
    if ((*(uint *)((int64_t)*(int *)(*(int64_t *)(piVar10 + 0x27a) + 0xf0) * 0xa0 + 0x50 +
                  *(int64_t *)(*(int64_t *)(piVar10 + 0x27a) + 0xd0)) >> 8 & 1) == 0) {
      lVar20 = *(int64_t *)(piVar10 + 0x286);
      lVar19 = (int64_t)piVar10[0x278] * 0x1f8;
      lVar13 = (int64_t)*(int *)(lVar13 + 0x640);
      lVar17 = lVar13 * 0x1f8;
      iVar8 = *piVar10;
      Function_5218b2f7(*(uint64_t *)((int64_t)iVar8 * 0xa60 + 0x3778 + lVar20),
                          *(int32_t *)
                           ((int64_t)piVar10[lVar13 * 0x7e + 0x3e] * 0xa0 + 0x58 +
                           *(int64_t *)(piVar10 + lVar13 * 0x7e + 0x36)));
      cVar5 = function_58f540((int64_t)piVar10 + lVar19 + 8,(int64_t)piVar10 + lVar17 + 8);
      if (cVar5 != '\0') {
        function_544ac0(*(uint64_t *)((int64_t)iVar8 * 0xa60 + 0x3778 + lVar20));
      }
    }
    if (((*(int *)(*(int64_t *)(param_1 + 0x108) + 0x570) == 2) &&
        (lVar13 = *(int64_t *)(*(int64_t *)(param_1 + 0x100) + 0x87b300) -
                  *(int64_t *)(*(int64_t *)(param_1 + 0x100) + 0x87b2f8),
        lVar13 = SUB168(SEXT816(-0x53896e7bf53896e7) * SEXT816(lVar13),8) + lVar13,
        lVar13 >> 0xb != lVar13 >> 0x3f)) && (1 < iVar7)) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)*(short *)(lVar11 + 10);
    }
    lVar13 = *(int64_t *)(param_1 + 0x1c8);
    uVar25 = *(int32_t *)(lVar13 + 0x3b4);
    local_var_3c8 = 0;
    local_var_3b4 = 0x3ecccccd;
    local_var_3d0 = 0;
    local_var_3b0 = 0x1000000;
    local_var_3ac = 0;
    local_var_3d8 = 1;
    local_var_3c4 = 0x3f80000000000000;
    local_var_3bc = 0xbe4ccccdbe4ccccd;
    if (*(int64_t *)(param_1 + 600) == 0) {
      local_var_3d4 = 0xffffffff;
    }
    else {
      local_var_3d4 = *(int32_t *)(*(int64_t *)(param_1 + 600) + 0x50);
    }
    if (0 < iVar7) {
      do {
        iVar8 = SystemCacheManager(&system_data_5f30,
                              *(int32_t *)
                               (*(int64_t *)(*(int64_t *)(param_1 + 0x1c8) + 0x590) + 0xac),
                              local_var_3d4);
        iVar8 = *(int *)(system_system_memory + (int64_t)iVar8 * 4);
        lVar13 = 0;
        if (iVar8 != -1) {
          lVar13 = *(int64_t *)(system_system_memory + (int64_t)iVar8 * 8);
        }
        local_var_3d4 = *(int32_t *)(lVar13 + 0x1f0);
        iVar7 = iVar7 + -1;
      } while (0 < iVar7);
      lVar13 = *(int64_t *)(param_1 + 0x1c8);
    }
    local_var_3c4 = CONCAT44(uVar25,(int32_t)local_var_3c4);
    cVar5 = CoreSystemThreadManager(lVar13,&local_var_3d8);
    if (cVar5 != '\0') {
      *(int32_t *)(param_1 + 0x1d4) = 4;
    }
    goto SystemCore_StateProcessor;
  case 0xd:
    lVar20 = function_5a0900(param_1,*(int32_t *)(param_3 + 0x50));
    if (lVar20 == 0) goto SystemCore_StateProcessor;
    if (((*(int64_t *)(param_1 + 0x260) != 0) &&
        (iVar7 = *(int *)(*(int64_t *)(param_1 + 0x260) + 0x14), iVar7 != -1)) &&
       (lVar13 = SystemCore_Initializer(&system_data_5f30,*(int32_t *)(*(int64_t *)(lVar13 + 0x590) + 0xac),
                               iVar7), *(int *)(lVar13 + 0x1ec) != -1)) {
      lVar20 = *(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x590);
      iVar8 = *(int *)(lVar20 + 0x2498);
      if (((iVar8 != -1) && (0 < *(int *)((int64_t)iVar8 * 0x68 + 0x58 + system_system_memory))) &&
         (*(int *)((int64_t)iVar8 * 0x68 + 0x58 + system_system_memory) < 0xf)) {
        fStack_2a4 = *(float *)(lVar20 + 0x24d4);
        if ((*(uint *)(lVar13 + 0x1d0) >> 0x14 & 1) == 0) {
          fStack_2a4 = 0.05;
        }
        else if (cVar6 != '\0') {
          if (0.05 <= fStack_2a4) {
            if (0.95 <= fStack_2a4) {
              fStack_2a4 = 0.95;
            }
          }
          else {
            fStack_2a4 = 0.05;
          }
        }
        local_var_2a8 = 0;
        local_var_2a0 = 0x3f800000;
        local_var_29c = 0xbe4ccccd;
        local_var_298 = 0xbe4ccccd;
        local_var_294 = 0x3ecccccd;
        local_var_2b0 = local_var_500;
        local_var_28f = 0x10000;
        local_var_2b8 = 1;
        iStack_2b4 = iVar7;
        cStack_290 = cVar6;
        cVar5 = CoreSystemThreadManager(*(int64_t *)(param_1 + 0x108),&local_var_2b8);
        if ((cVar5 != '\0') && (lVar11 != 0)) {
          lVar13 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x8f8) + 0x9f0);
          if ((lVar13 == 0) ||
             ((*(uint *)((int64_t)*(int *)(lVar13 + 0xf0) * 0xa0 + 0x50 +
                        *(int64_t *)(lVar13 + 0xd0)) >> 0x1c & 1) == 0)) {
            puVar15 = (uint *)((int64_t)*(char *)(*(int64_t *)(lVar11 + 0xf8) + 0x88) * 0x100 +
                              *(int64_t *)
                               (*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x658) + 0x18));
            do {
              LOCK();
              uVar18 = *puVar15;
              *puVar15 = *puVar15 | 1;
              UNLOCK();
            } while ((uVar18 & 1) != 0);
            local_var_1b8 = puVar15[1];
            local_var_1b4 = puVar15[2];
            local_var_1b0 = puVar15[3];
            local_var_1ac = puVar15[4];
            fVar22 = (float)puVar15[5];
            fVar23 = (float)puVar15[6];
            fVar24 = (float)puVar15[7];
            local_var_19c = puVar15[8];
            *puVar15 = 0;
            lVar13 = *(int64_t *)(param_1 + 0x108);
            lVar11 = *(int64_t *)(*(int64_t *)(lVar13 + 0x6d8) + 0x8a8);
            fStack_1a8 = fVar22;
            fStack_1a4 = fVar23;
            fStack_1a0 = fVar24;
            local_var_f8 = local_var_1b8;
            local_var_f4 = local_var_1b4;
            local_var_f0 = local_var_1b0;
            local_var_ec = local_var_1ac;
            fStack_e8 = fVar22;
            fStack_e4 = fVar23;
            fStack_e0 = fVar24;
            local_var_dc = local_var_19c;
            pfVar12 = (float *)SystemFileHandler(&local_var_1b8,stack_array_138,param_3 + 0x54);
            local_var_4bc = 0x7f7fffff;
            fStack_4c0 = (fVar24 + pfVar12[2]) * *(float *)(lVar11 + 0x98) +
                         *(float *)(lVar11 + 0xa8);
            fStack_4c8 = (fVar23 + pfVar12[1]) * *(float *)(lVar11 + 0x80) +
                         (fVar22 + *pfVar12) * *(float *)(lVar11 + 0x70) + *(float *)(lVar11 + 0xa0)
            ;
            fStack_4c4 = (fVar23 + pfVar12[1]) * *(float *)(lVar11 + 0x84) +
                         (fVar22 + *pfVar12) * *(float *)(lVar11 + 0x74) + *(float *)(lVar11 + 0xa4)
            ;
            if (*(char *)(param_3 + 0x80) != -1) {
              iVar7 = *(int *)(param_3 + 0x7c);
              lVar11 = *(int64_t *)(param_1 + 0x100);
              if ((((-1 < iVar7) && (iVar7 < *(int *)(lVar11 + 0x52ed94))) &&
                  (-1 < *(short *)(lVar11 + 0x52dda0 + (int64_t)iVar7 * 2))) &&
                 ((lVar11 = *(int64_t *)((int64_t)iVar7 * 0xa60 + 0x3778 + lVar11), lVar11 != 0 &&
                  (*(char *)(lVar11 + 0x8be) != '\0')))) {
                fStack_528 = 0.1;
                lStack_530 = CONCAT71(lStack_530._1_7_,*(char *)(param_3 + 0x80));
                plocal_var_538 = (void *)CONCAT44(plocal_var_538._4_4_,iVar7);
                function_514200(lVar13,0x200,&fStack_4c8);
              }
            }
          }
        }
      }
    }
    goto code_r0x0001805a68bf;
  case 0xe:
    cVar5 = RenderingSystem_ConfigValidator0(param_1);
    if (cVar5 == '\0') {
      lVar13 = PhysicsSystem_ForceCalculator(param_1,*(int32_t *)(param_3 + 0x50));
      if ((lVar13 == 0) || (*(int *)(lVar13 + 0x1c) == -1)) goto SystemCore_StateProcessor;
      plVar2 = *(int64_t **)(*(int64_t *)(param_1 + 0x108) + 0x590);
      iVar7 = (int)plVar2[(int64_t)iStack_518 * 9 + 0x48a];
      local_var_510 = CONCAT44(local_var_510._4_4_,iVar7);
      if (*(int *)(lVar13 + 0x104) != 1) {
        uVar25 = (**(code **)(*plVar2 + 0x90))(plVar2,iStack_518);
        fStack_528 = 4.0;
        lStack_530 = CONCAT44(lStack_530._4_4_,uVar25);
        plocal_var_538 = (void *)
                      CONCAT71(plocal_var_538._1_7_,(int)local_var_510 == *(int *)(lVar13 + 0x30));
        cStack_520 = cVar6;
        cVar5 = function_5b1e30(param_1 + 0x110,iStack_518,lVar13,lVar20);
        if (cVar5 == '\0') goto SystemCore_StateProcessor;
        if (((lVar11 != 0) && (0 < *(int *)(lVar11 + 0x30))) &&
           (((*(uint *)((int64_t)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x50 +
                       *(int64_t *)(lVar11 + 0xd0)) >> 9 & 1) == 0 || (0 < *(short *)(lVar11 + 8)))
           )) {
          fVar22 = *(float *)(param_3 + 0x84);
          if ((0.0 < fVar22) &&
             ((float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x200) * 8) -
                     *(int64_t *)(param_1 + 0x1f8)) * -1e-05 < fVar22)) {
            *(int64_t *)(param_1 + 0x1f8) =
                 *(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x200) * 8) -
                 (int64_t)(fVar22 * -100000.0);
          }
          puVar15 = (uint *)((int64_t)*(char *)(*(int64_t *)(lVar11 + 0xf8) + 0x88) * 0x100 +
                            *(int64_t *)
                             (*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x658) + 0x18));
          do {
            LOCK();
            uVar18 = *puVar15;
            *puVar15 = *puVar15 | 1;
            UNLOCK();
          } while ((uVar18 & 1) != 0);
          local_var_178 = *(uint64_t *)(puVar15 + 1);
          local_var_170 = *(uint64_t *)(puVar15 + 3);
          fVar22 = (float)puVar15[5];
          fVar23 = (float)puVar15[6];
          fVar24 = (float)puVar15[7];
          local_var_15c = puVar15[8];
          *puVar15 = 0;
          lVar13 = *(int64_t *)(param_1 + 0x108);
          local_var_4dc = 0x7f7fffff;
          fStack_4e0 = 1.0 / *(float *)(*(int64_t *)(lVar13 + 0x6d8) + 0x8c0);
          lVar20 = *(int64_t *)(*(int64_t *)(lVar13 + 0x6d8) + 0x8a8);
          fStack_4e8 = fStack_4e0 * *(float *)(param_3 + 0x54);
          fStack_4e4 = fStack_4e0 * *(float *)(param_3 + 0x58);
          fStack_4e0 = fStack_4e0 * *(float *)(param_3 + 0x5c);
          fStack_168 = fVar22;
          fStack_164 = fVar23;
          fStack_160 = fVar24;
          local_var_b8 = local_var_178;
          local_var_b0 = local_var_170;
          fStack_a8 = fVar22;
          fStack_a4 = fVar23;
          fStack_a0 = fVar24;
          local_var_9c = local_var_15c;
          pfVar12 = (float *)SystemFileHandler(&local_var_178,stack_array_158,&fStack_4e8);
          local_var_504 = 0x7f7fffff;
          fStack_508 = (fVar24 + pfVar12[2]) * *(float *)(lVar20 + 0x98) + *(float *)(lVar20 + 0xa8)
          ;
          local_var_510 = CONCAT44((fVar23 + pfVar12[1]) * *(float *)(lVar20 + 0x84) +
                                (fVar22 + *pfVar12) * *(float *)(lVar20 + 0x74) +
                                *(float *)(lVar20 + 0xa4),
                                (fVar23 + pfVar12[1]) * *(float *)(lVar20 + 0x80) +
                                (fVar22 + *pfVar12) * *(float *)(lVar20 + 0x70) +
                                *(float *)(lVar20 + 0xa0));
          if (*(char *)(param_3 + 0x80) == -1) {
            (**(code **)(**(int64_t **)(lVar13 + 0x590) + 0xf8))(*(int64_t **)(lVar13 + 0x590),1);
            function_515300(lVar13);
          }
          else {
            iVar7 = *(int *)(param_3 + 0x7c);
            lVar20 = *(int64_t *)(param_1 + 0x100);
            if ((((iVar7 < 0) || (*(int *)(lVar20 + 0x52ed94) <= iVar7)) ||
                (*(short *)(lVar20 + 0x52dda0 + (int64_t)iVar7 * 2) < 0)) ||
               ((lVar20 = *(int64_t *)((int64_t)iVar7 * 0xa60 + 0x3778 + lVar20), lVar20 == 0 ||
                (*(char *)(lVar20 + 0x8be) == '\0')))) break;
            fStack_528 = (float)(**(code **)(**(int64_t **)(lVar13 + 0x590) + 0xf8))
                                          (*(int64_t **)(lVar13 + 0x590),1);
            fStack_528 = fStack_528 * 0.75;
            lStack_530 = CONCAT71(lStack_530._1_7_,*(int8_t *)(param_3 + 0x80));
            plocal_var_538 = (void *)CONCAT44(plocal_var_538._4_4_,*(int32_t *)(param_3 + 0x7c));
            function_514200(lVar13,0x80,&local_var_510);
          }
          if (*(int *)((int64_t)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x5c +
                      *(int64_t *)(lVar11 + 0xd0)) - 4U < 2) {
            *(int8_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x728) + 0x5ae) = 0;
          }
        }
        break;
      }
      iVar8 = *(int *)(param_3 + 0x7c);
      lVar20 = *(int64_t *)(param_1 + 0x100);
      if (((((iVar8 < 0) || (*(int *)(lVar20 + 0x52ed94) <= iVar8)) ||
           ((*(short *)(lVar20 + 0x52dda0 + (int64_t)iVar8 * 2) < 0 ||
            (((lVar20 = *(int64_t *)((int64_t)iVar8 * 0xa60 + 0x3778 + lVar20), lVar20 == 0 ||
              (*(char *)(lVar20 + 0x8be) == '\0')) || (iVar7 == -1)))))) ||
          ((iVar7 != *(int *)(lVar13 + 0x34) && (iVar7 != *(int *)(lVar13 + 0x30))))) ||
         (lVar11 == 0)) goto SystemCore_StateProcessor;
      if (((iVar7 != *(int *)(lVar13 + 0x34)) || (iVar8 = *(int *)(lVar13 + 0x44), iVar8 == -1)) &&
         (iVar8 = -1, iVar7 == *(int *)(lVar13 + 0x30))) {
        iVar8 = -1;
        if (*(int *)(lVar13 + 0x40) != -1) {
          iVar8 = *(int *)(lVar13 + 0x40);
        }
      }
      plVar2 = *(int64_t **)(*(int64_t *)(param_1 + 0x108) + 0x590);
      if (iVar8 == -1) {
        lVar13 = plVar2[0x495];
        if (lVar13 != 0) {
          fVar22 = *(float *)((int64_t)plVar2 + 0x24cc);
          if (fVar22 < 0.0) {
            fVar22 = *(float *)(lVar13 + 0x1e8);
          }
          if (((plVar2[0x497] | *(uint64_t *)(lVar13 + 0x1d0)) & 0x4000000000) == 0) {
            *(float *)((int64_t)plVar2 + 0x24cc) = fVar22 * 0.33333;
          }
        }
      }
      else {
        lVar13 = *plVar2;
        lVar20 = (**(code **)(lVar13 + 0xb0))(plVar2,iStack_518);
        fVar22 = *(float *)(lVar20 + 0x188);
        fVar24 = (float)(**(code **)(lVar13 + 0x90))(plVar2,iStack_518);
        lVar13 = SystemCore_Initializer(&system_data_5f30,
                               *(int32_t *)
                                (*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x590) + 0xac),iVar8
                              );
        fVar23 = *(float *)(lVar13 + 0x188);
        local_var_400 = local_var_500;
        local_var_3df = 0x10000;
        iStack_408 = iStack_518;
        local_var_3f8 = 0;
        local_var_3f0 = 0xbe4ccccd3f800000;
        local_var_3e8 = 0xbe4ccccd;
        local_var_3e4 = 0x3ecccccd;
        iStack_404 = iVar8;
        cStack_3e0 = cVar6;
        uVar25 = (**(code **)(**(int64_t **)(*(int64_t *)(param_1 + 0x108) + 0x590) + 0x80))();
        local_var_3f0 = CONCAT44(local_var_3f0._4_4_,uVar25);
        local_var_3f8 = CONCAT44(local_var_3f8._4_4_,(fVar24 * fVar22) / fVar23);
        CoreSystemThreadManager(*(uint64_t *)(param_1 + 0x108),&iStack_408);
      }
      puVar15 = (uint *)((int64_t)*(char *)(*(int64_t *)(lVar11 + 0xf8) + 0x88) * 0x100 +
                        *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x658) + 0x18))
      ;
      do {
        LOCK();
        uVar18 = *puVar15;
        *puVar15 = *puVar15 | 1;
        UNLOCK();
      } while ((uVar18 & 1) != 0);
      local_var_1d8 = puVar15[1];
      local_var_1d4 = puVar15[2];
      local_var_1d0 = puVar15[3];
      local_var_1cc = puVar15[4];
      fVar22 = (float)puVar15[5];
      fVar23 = (float)puVar15[6];
      fVar24 = (float)puVar15[7];
      local_var_1bc = puVar15[8];
      *puVar15 = 0;
      lVar13 = *(int64_t *)(param_1 + 0x108);
      lVar11 = *(int64_t *)(*(int64_t *)(lVar13 + 0x6d8) + 0x8a8);
      fStack_1c8 = fVar22;
      fStack_1c4 = fVar23;
      fStack_1c0 = fVar24;
      local_var_d8 = local_var_1d8;
      local_var_d4 = local_var_1d4;
      local_var_d0 = local_var_1d0;
      local_var_cc = local_var_1cc;
      fStack_c8 = fVar22;
      fStack_c4 = fVar23;
      fStack_c0 = fVar24;
      local_var_bc = local_var_1bc;
      pfVar12 = (float *)SystemFileHandler(&local_var_1d8,stack_array_148,param_3 + 0x54);
      local_var_4ac = 0x7f7fffff;
      fStack_4b0 = (fVar24 + pfVar12[2]) * *(float *)(lVar11 + 0x98) + *(float *)(lVar11 + 0xa8);
      fStack_4b8 = (fVar23 + pfVar12[1]) * *(float *)(lVar11 + 0x80) +
                   (fVar22 + *pfVar12) * *(float *)(lVar11 + 0x70) + *(float *)(lVar11 + 0xa0);
      fStack_4b4 = (fVar23 + pfVar12[1]) * *(float *)(lVar11 + 0x84) +
                   (fVar22 + *pfVar12) * *(float *)(lVar11 + 0x74) + *(float *)(lVar11 + 0xa4);
      fStack_528 = (float)(**(code **)(**(int64_t **)(lVar13 + 0x590) + 0xb8))
                                    (*(int64_t **)(lVar13 + 0x590),1);
      lStack_530 = CONCAT71(lStack_530._1_7_,*(int8_t *)(param_3 + 0x80));
      plocal_var_538 = (void *)CONCAT44(plocal_var_538._4_4_,*(int32_t *)(param_3 + 0x7c));
      function_514200(lVar13,0x40,&fStack_4b8);
    }
    else {
      function_5b1d30(param_1 + 0x110);
      *(uint64_t *)(param_1 + 600) = 0;
      *(uint64_t *)(param_1 + 0x268) = 0;
    }
    goto code_r0x0001805a68bf;
  case 0xf:
    local_var_1e8 = *(int32_t *)(param_3 + 100);
    local_var_1e4 = *(int32_t *)(param_3 + 0x68);
    local_var_1e0 = *(int32_t *)(param_3 + 0x6c);
    local_var_1dc = *(int32_t *)(param_3 + 0x70);
    function_512b80(lVar13,param_3 + 0x54,&local_var_1e8);
    fStack_274 = *(float *)(*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x590) + 0x24d4);
    if (cVar6 != '\0') {
      if (0.05 <= fStack_274) {
        if (0.95 <= fStack_274) {
          fStack_274 = 0.95;
        }
      }
      else {
        fStack_274 = 0.05;
      }
    }
    local_var_284 = *(int32_t *)(param_3 + 0x74);
    local_var_280 = local_var_500;
    local_var_278 = 0;
    local_var_270 = 0x3f800000;
    local_var_26c = 0xbe4ccccd;
    local_var_268 = 0xbe4ccccd;
    local_var_264 = 0x3ecccccd;
    local_var_25f = 0x10000;
    local_var_288 = 1;
    cStack_260 = cVar6;
    CoreSystemThreadManager(*(int64_t *)(param_1 + 0x108),&local_var_288);
    goto code_r0x0001805a68bf;
  case 0x10:
    local_var_510 = function_58b980(*(uint64_t *)(lVar13 + 0x590),*(int32_t *)(param_3 + 0x74));
    uVar3 = local_var_500;
    iVar7 = iStack_518;
    local_var_344 = *(int32_t *)(param_3 + 0x74);
    local_var_338 = 0;
    local_var_334 = 0;
    local_var_330 = 0x3f800000;
    local_var_32c = 0xbe4ccccd;
    local_var_328 = 0xbe4ccccd;
    local_var_324 = 0x3ecccccd;
    local_var_31f = 0x10000;
    iStack_348 = iStack_518;
    local_var_340 = local_var_500;
    cStack_320 = cVar6;
    cVar5 = CoreSystemThreadManager(*(uint64_t *)(param_1 + 0x108),&iStack_348);
    if (cVar5 == '\0') goto SystemCore_StateProcessor;
    if (iVar7 == 1) {
      function_5a3a20(param_1);
    }
    else if (*(int *)(param_1 + 0x1d4) == 7) {
      if (lVar11 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int64_t)*(int *)(lVar11 + 0xf0) * 0xa0 + 100 +
                        *(int64_t *)(lVar11 + 0xd0));
      }
      function_5a79c0(param_1,(int64_t)iVar7 * 0x170 + system_system_memory);
    }
    else {
      local_var_2e0 = uVar3 | 0x4b;
      local_var_2e4 = 0xffffffff;
      local_var_2d8 = 0;
      local_var_2d4 = 0;
      local_var_2d0 = 0x3f800000;
      local_var_2cc = 0xbe4ccccd;
      local_var_2c8 = 0xbe4ccccd;
      local_var_2c4 = 0x3ecccccd;
      local_var_2bf = 0x10000;
      local_var_2e8 = 1;
      cStack_2c0 = cVar6;
      CoreSystemThreadManager(*(uint64_t *)(param_1 + 0x108),&local_var_2e8);
      function_5a3a20(param_1);
    }
    lVar13 = *(int64_t *)(param_1 + 0x108);
    if ((*(int *)(lVar13 + 0x570) == 2) ||
       (*(int *)(lVar13 + 0x560) == *(int *)(*(int64_t *)(param_1 + 0x100) + 0x98d930))) {
      fVar22 = 0.2;
    }
    else {
      fVar22 = 0.0;
    }
    *(float *)(*(int64_t *)(lVar13 + 0x20) + 0x144) = -*(float *)(local_var_510 + 0x60) - fVar22;
    break;
  case 0x11:
    uVar25 = *(int32_t *)(param_3 + 0x74);
    uVar1 = *(int32_t *)(param_3 + 0x50);
    iVar7 = SystemCacheManager(&system_data_5f30,
                          *(int32_t *)
                           (*(int64_t *)(*(int64_t *)(param_1 + 0x1c8) + 0x590) + 0xac),uVar25);
    iVar7 = *(int *)(system_system_memory + (int64_t)iVar7 * 4);
    if (iVar7 == -1) {
      lVar13 = 0;
    }
    else {
      lVar13 = *(int64_t *)(system_system_memory + (int64_t)iVar7 * 8);
    }
    fVar22 = *(float *)(lVar13 + 0x188);
    plVar2 = *(int64_t **)(*(int64_t *)(param_1 + 0x1c8) + 0x590);
    fVar23 = (float)(**(code **)(*plVar2 + 0x90))(plVar2,uVar1);
    fStack_428 = (1.0 - fVar23) - *(float *)(lVar13 + 0x1e4) / fVar22;
    if (fStack_428 <= 0.0) {
      fStack_428 = 0.0;
    }
    fStack_418 = (1.0 - fStack_428) * fVar22;
    fStack_41c = fStack_418 - fVar23 * fVar22;
    local_var_430 = 0;
    local_var_424 = 0;
    local_var_420 = 0x3f800000;
    fStack_418 = fStack_418 - fStack_41c;
    local_var_40e = 0x100;
    local_var_40c = 0;
    if (*(float *)(lVar13 + 0x1e8) <= fStack_418) {
      fStack_418 = *(float *)(lVar13 + 0x1e8);
    }
    local_var_414 = 0x3e99999a;
    local_var_40f = 1;
    if (fStack_418 <= 0.0) {
      fStack_418 = 0.0;
    }
    local_var_438 = uVar1;
    local_var_434 = uVar25;
    cStack_410 = cVar6;
    cVar5 = CoreSystemThreadManager(*(uint64_t *)(param_1 + 0x1c8),&local_var_438);
    lVar13 = *(int64_t *)(param_1 + 0x100);
    iVar7 = *(int *)(param_3 + 0x7c);
    if (((-1 < iVar7) && (iVar7 < *(int *)(lVar13 + 0x52ed94))) &&
       (-1 < *(short *)(lVar13 + 0x52dda0 + (int64_t)iVar7 * 2))) {
      function_5a7550(lVar13,lVar13 + 0x30a0 + (int64_t)iVar7 * 0xa60,*(int32_t *)(param_3 + 0x4c)
                    ,*(int32_t *)(param_3 + 0x84));
    }
    break;
  case 0x12:
    iVar7 = *(int *)(param_3 + 0x74);
    iVar8 = *(int *)(param_3 + 0x7c);
    iVar21 = 0;
    if (iVar7 < 0) {
      iVar7 = *(int *)(param_3 + 0x78);
      if (-1 < iVar7) {
        iVar21 = *(int *)((int64_t)iVar7 * 0x68 + 0x58 + system_system_memory);
        local_var_484 = 0;
        local_var_47c = 0xbe4ccccd;
        local_var_478 = 0xbe4ccccd;
        local_var_474 = 0x3ecccccd;
        local_var_46f = 0x10000;
        local_var_498 = 1;
        if (iVar8 == 0) {
          fStack_480 = 1.0;
        }
        else {
          fStack_480 = 0.66;
        }
        fStack_480 = fStack_480 * *(float *)(param_3 + 0x8c);
        if (iVar8 == 0) {
          local_var_488 = 0;
        }
        else {
          local_var_488 = 0x3f000000;
        }
        iStack_494 = iVar7;
        local_var_490 = local_var_500;
        cStack_470 = cVar6;
        cVar6 = CoreSystemThreadManager(lVar13,&local_var_498);
        if (cVar6 != '\0') {
          cVar5 = true;
          *(int32_t *)(param_3 + 0x78) =
               *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x590) + 0x2498);
          lVar13 = *(int64_t *)(param_1 + 0x108);
          uVar16 = *(uint64_t *)(lVar13 + 0x590);
          iVar7 = Function_ff5ee898(uVar16,0);
          if ((0x1b < iVar7) && (iVar7 = Function_ff5ee898(uVar16,0), iVar7 < 0x1f)) {
            local_var_258 = 0;
            local_var_238 = 0xbe4ccccd;
            local_var_254 = 0xffffffff;
            local_var_248 = 0;
            local_var_244 = 0;
            local_var_240 = 0x3f800000;
            local_var_23c = 0xbe4ccccd;
            local_var_234 = 0x3ecccccd;
            local_var_22f = 0x10000;
            local_var_230 = 1;
            local_var_250 = 0x2000;
            CoreSystemThreadManager(lVar13,&local_var_258);
          }
        }
        iVar7 = 0;
        lVar13 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x8f8) + 0x9e8);
        if (lVar13 != 0) {
          iVar7 = *(int *)((int64_t)*(int *)(lVar13 + 0xf0) * 0xa0 + 100 +
                          *(int64_t *)(lVar13 + 0xd0));
        }
        function_5b1d30(param_1 + 0x110,(int64_t)iVar7 * 0x170 + system_system_memory);
        uVar25 = *(int32_t *)(param_3 + 0x78);
        goto code_r0x0001805a66b7;
      }
      cVar5 = true;
    }
    else {
      iVar21 = *(int *)((int64_t)iVar7 * 0x68 + 0x58 + system_system_memory);
      local_var_444 = 0x3ecccccd;
      local_var_454 = 0;
      local_var_44c = 0xbe4ccccd;
      local_var_448 = 0xbe4ccccd;
      local_var_43f = 0x10000;
      local_var_468 = 0;
      if (iVar8 == 0) {
        fStack_450 = 1.0;
      }
      else {
        fStack_450 = 0.66;
      }
      fStack_450 = fStack_450 * *(float *)(param_3 + 0x8c);
      if (iVar8 == 0) {
        local_var_458 = 0;
      }
      else {
        local_var_458 = 0x3f000000;
      }
      iStack_464 = iVar7;
      local_var_460 = local_var_500;
      cStack_440 = cVar6;
      cVar5 = CoreSystemThreadManager(lVar13,&local_var_468);
      cVar5 = cVar5 != '\0';
      if ((bool)cVar5) {
        *(int32_t *)(param_3 + 0x74) =
             *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x590) + 0x2450);
      }
      lVar13 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x8f8) + 0x9e8);
      if (lVar13 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int64_t)*(int *)(lVar13 + 0xf0) * 0xa0 + 100 +
                        *(int64_t *)(lVar13 + 0xd0));
      }
      function_5b1d30(param_1 + 0x110,(int64_t)iVar7 * 0x170 + system_system_memory);
      uVar25 = *(int32_t *)(param_3 + 0x74);
code_r0x0001805a66b7:
      lVar13 = SystemCore_Initializer(&system_data_5f30,
                             *(int32_t *)
                              (*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x590) + 0xac),uVar25)
      ;
      function_5a0af0(param_1,(*(float *)(lVar13 + 0x188) - *(float *)(lVar13 + 0x1e8)) +
                            system_system_memory,0);
      if ((bool)cVar5 == false) goto SystemCore_StateProcessor;
      if (iVar21 == 0x32) break;
    }
    fVar22 = *(float *)(param_3 + 100);
    if ((((fVar22 != 0.0) || (*(float *)(param_3 + 0x68) != 0.0)) ||
        (*(float *)(param_3 + 0x6c) != 0.0)) && (-1 < *(char *)(param_3 + 0x80))) {
      uVar25 = system_system_memory;
      if (((iVar21 != 0x2f) && (uVar25 = system_system_memory, iVar21 != 0x30)) &&
         (uVar25 = system_system_memory, iVar21 != 0x31)) {
        uVar25 = system_system_memory;
      }
      local_var_4dc = 0x7f7fffff;
      plocal_var_538 = (void *)CONCAT44(plocal_var_538._4_4_,uVar25);
      local_var_49c = 0x7f7fffff;
      lVar13 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x6d8) + 0x8a8);
      fStack_1f8 = *(float *)(lVar13 + 0x70) * fVar22 +
                   *(float *)(lVar13 + 0x80) * *(float *)(param_3 + 0x68);
      fStack_4a8 = *(float *)(lVar13 + 0x70) * *(float *)(param_3 + 0x54) +
                   *(float *)(lVar13 + 0x80) * *(float *)(param_3 + 0x58) +
                   *(float *)(lVar13 + 0xa0);
      fStack_1f4 = *(float *)(lVar13 + 0x74) * fVar22 +
                   *(float *)(lVar13 + 0x84) * *(float *)(param_3 + 0x68);
      fStack_1f0 = *(float *)(lVar13 + 0x98) * *(float *)(param_3 + 0x6c);
      fStack_4a0 = *(float *)(lVar13 + 0x98) * *(float *)(param_3 + 0x5c) +
                   *(float *)(lVar13 + 0xa8);
      fStack_4a4 = *(float *)(lVar13 + 0x74) * *(float *)(param_3 + 0x54) +
                   *(float *)(lVar13 + 0x84) * *(float *)(param_3 + 0x58) +
                   *(float *)(lVar13 + 0xa4);
      local_var_1ec = 0x7f7fffff;
      function_5131d0(*(int64_t *)(param_1 + 0x108),&fStack_4a8,&fStack_1f8);
    }
    break;
  default:
    goto SystemCore_StateProcessor;
  }
  if (cVar5 != '\0') {
code_r0x0001805a68bf:
    if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
      uVar16 = 9;
      if (iStack_518 == 1) {
        uVar16 = 0;
      }
      lStack_530 = CONCAT71(lStack_530._1_7_,1);
      plocal_var_538 = (void *)CONCAT71(plocal_var_538._1_7_,local_var_514);
      function_55dcf0(&system_data_25a0,*(int32_t *)(*(int64_t *)(param_1 + 0x108) + 0x10),uVar16,
                    param_3);
    }
  }
SystemCore_StateProcessor:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_98 ^ (uint64_t)stack_array_558);
}