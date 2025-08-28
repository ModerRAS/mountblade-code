#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part012.c - 3 个函数

// 函数: void FUN_1800efac0(uint64_t param_1,int64_t param_2)
void FUN_1800efac0(uint64_t param_1,int64_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint uVar12;
  int64_t lVar13;
  uint *puVar14;
  uint uVar15;
  uint64_t uVar16;
  uint uVar17;
  int iVar19;
  uint64_t *puVar20;
  uint64_t uVar21;
  uint uVar22;
  bool bVar24;
  int8_t auStack_208 [32];
  uint64_t uStack_1e8;
  uint uStack_1d8;
  uint uStack_1d4;
  int8_t auStack_1d0 [4];
  uint uStack_1cc;
  int iStack_1c8;
  uint uStack_1c4;
  int64_t lStack_1c0;
  void **ppuStack_1b8;
  uint64_t uStack_1b0;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
  uint64_t uStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  int64_t *plStack_128;
  int64_t *plStack_120;
  int64_t *plStack_118;
  int64_t *plStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t auStack_f8 [2];
  int64_t *plStack_e8;
  int64_t *plStack_e0;
  int64_t *plStack_d8;
  int64_t *plStack_d0;
  uint64_t uStack_c8;
  int64_t lStack_c0;
  int8_t uStack_b8;
  int64_t lStack_b0;
  int8_t uStack_a8;
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  uint64_t uStack_38;
  uint64_t uVar18;
  uint64_t uVar23;
  
  lVar10 = system_system_data_memory;
  auStack_f8[1] = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_208;
  iVar19 = *(int *)(param_2 + 0x3260);
  uVar16 = 0;
  iStack_1c8 = iVar19;
  lStack_1c0 = param_2;
  if (0 < iVar19) {
    FUN_1802c22a0(auStack_1d0,&unknown_var_5584_ptr);
    ppuStack_1b8 = &puStack_98;
    puStack_98 = &unknown_var_3480_ptr;
    puStack_90 = auStack_80;
    uStack_88 = 0;
    auStack_80[0] = 0;
    FUN_180049bf0(&puStack_98,&unknown_var_5584_ptr);
    FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_98);
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x418);
    auStack_f8[0] = uVar16;
    if (lVar11 != 0) {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      auStack_f8[0] = *(uint64_t *)(lVar11 + 0x20);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    uStack_1e8 = 0;
    (**(code **)(*plVar3 + 0x220))(plVar3,1,1,auStack_f8);
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x410);
    uStack_1b0 = uVar16;
    if (lVar11 != 0) {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      uStack_1b0 = *(uint64_t *)(lVar11 + 0x20);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    uStack_1e8 = 0;
    (**(code **)(*plVar3 + 0x220))(plVar3,2,1,&uStack_1b0);
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x420);
    uStack_1a8 = uVar16;
    if (lVar11 != 0) {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      uStack_1a8 = *(uint64_t *)(lVar11 + 0x20);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    uStack_1e8 = 0;
    (**(code **)(*plVar3 + 0x220))(plVar3,5,1,&uStack_1a8);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x3b0);
    uStack_1a0 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      uStack_1a0 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,0,1,&uStack_1a0);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x3a8);
    uStack_198 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      uStack_198 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,1,1,&uStack_198);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x3c8);
    uStack_190 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      uStack_190 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,2,1,&uStack_190);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 1000);
    uStack_188 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      uStack_188 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,3,1,&uStack_188);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x3d0);
    uStack_180 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      uStack_180 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,4,1,&uStack_180);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x3b8);
    uStack_178 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      uStack_178 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,5,1,&uStack_178);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x400);
    uStack_170 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      uStack_170 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,8,1,&uStack_170);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x3c0);
    uStack_168 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      uStack_168 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,0xc,1,&uStack_168);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x3d8);
    uStack_160 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      uStack_160 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,0xd,1,&uStack_160);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x408);
    uStack_158 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      uStack_158 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,0xe,1,&uStack_158);
    plVar3 = *(int64_t **)(system_parameter_buffer + 0xe88);
    plStack_110 = plVar3;
    plStack_e8 = plVar3;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plStack_118 = *(int64_t **)(system_parameter_buffer + 0xec8);
    plStack_e0 = plStack_118;
    if (plStack_118 != (int64_t *)0x0) {
      (**(code **)(*plStack_118 + 0x28))();
    }
    plStack_120 = *(int64_t **)(system_parameter_buffer + 0xe98);
    plStack_d8 = plStack_120;
    if (plStack_120 != (int64_t *)0x0) {
      (**(code **)(*plStack_120 + 0x28))();
    }
    plVar4 = *(int64_t **)(system_parameter_buffer + 0xe80);
    plStack_128 = plVar4;
    plStack_d0 = plVar4;
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    lVar11 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_150 = uVar16;
    if ((plVar4 != (int64_t *)0x0) &&
       (*(int32_t *)((int64_t)plVar4 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224),
       plVar4 != (int64_t *)0xfffffffffffffff0)) {
      *(int32_t *)((int64_t)plVar4 + 0x16c) = *(int32_t *)(lVar11 + 0x224);
      uStack_150 = plVar4[3];
    }
    plVar4 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar4 + 0x218))(plVar4,6,1,&uStack_150);
    lVar11 = system_main_module_state;
    uStack_c8 = 0;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_148 = uVar16;
    if ((plVar3 != (int64_t *)0x0) &&
       (*(int32_t *)((int64_t)plVar3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224),
       plVar3 != (int64_t *)0xfffffffffffffff0)) {
      *(int32_t *)((int64_t)plVar3 + 0x16c) = *(int32_t *)(lVar11 + 0x224);
      uStack_148 = plVar3[3];
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,7,1,&uStack_148);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x3f8);
    uStack_140 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      uStack_140 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,9,1,&uStack_140);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x3f0);
    uStack_138 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      uStack_138 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,10,1,&uStack_138);
    lVar13 = system_main_module_state;
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar11 = *(int64_t *)(lVar10 + 0x468);
    uStack_130 = uVar16;
    if ((lVar11 != 0) &&
       (*(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar11 != -0x10))
    {
      *(int32_t *)(lVar11 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
      uStack_130 = *(uint64_t *)(lVar11 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,0xb,1,&uStack_130);
    uStack_1d8 = **(uint **)(param_2 + 0x3268);
    uStack_1d4 = 0;
    uVar15 = uStack_1d8;
LAB_1800f03c0:
    do {
      uStack_1c4 = uVar15;
      uVar18 = 0;
      uStack_1cc = 0;
      bVar24 = (int)uVar16 == iVar19;
      uVar15 = uStack_1c4;
      if ((int)uVar16 < iVar19) {
        puVar20 = (uint64_t *)(lVar10 + 0x4a0);
        uVar21 = uVar18;
        uVar23 = uVar16;
        uVar12 = uStack_1c4;
        do {
          uVar17 = (uint)uVar18;
          uVar1 = uStack_1d8;
          uVar15 = uVar12;
          if (0x3f < (int64_t)uVar21) break;
          puVar14 = (uint *)(*(int64_t *)(param_2 + 0x3268 + (uVar23 >> 0xb) * 8) +
                            (uint64_t)(uint)((int)uVar23 + (int)(uVar23 >> 0xb) * -0x800) * 0x10);
          uVar1 = *puVar14;
          param_2 = lStack_1c0;
          uVar15 = uVar1;
          if (uVar1 != uVar12) break;
          uStack_1d4 = (int)uVar16 + 1;
          lVar2 = *(int64_t *)(puVar14 + 2);
          uVar5 = *(uint64_t *)(lVar2 + 0x4c);
          *puVar20 = *(uint64_t *)(lVar2 + 0x44);
          puVar20[1] = uVar5;
          uVar5 = *(uint64_t *)(lVar2 + 0x5c);
          puVar20[2] = *(uint64_t *)(lVar2 + 0x54);
          puVar20[3] = uVar5;
          uVar5 = *(uint64_t *)(lVar2 + 0x6c);
          puVar20[4] = *(uint64_t *)(lVar2 + 100);
          puVar20[5] = uVar5;
          uVar5 = *(uint64_t *)(lVar2 + 0x7c);
          puVar20[6] = *(uint64_t *)(lVar2 + 0x74);
          puVar20[7] = uVar5;
          uVar5 = *(uint64_t *)(lVar2 + 0x8c);
          puVar20[8] = *(uint64_t *)(lVar2 + 0x84);
          puVar20[9] = uVar5;
          uVar5 = *(uint64_t *)(lVar2 + 0x9c);
          puVar20[10] = *(uint64_t *)(lVar2 + 0x94);
          puVar20[0xb] = uVar5;
          uVar5 = *(uint64_t *)(lVar2 + 0xac);
          puVar20[0xc] = *(uint64_t *)(lVar2 + 0xa4);
          puVar20[0xd] = uVar5;
          uVar5 = *(uint64_t *)(lVar2 + 0xbc);
          puVar20[0xe] = *(uint64_t *)(lVar2 + 0xb4);
          puVar20[0xf] = uVar5;
          uVar5 = *(uint64_t *)(lVar2 + 0xcc);
          puVar20[0x10] = *(uint64_t *)(lVar2 + 0xc4);
          puVar20[0x11] = uVar5;
          uVar7 = *(int32_t *)(lVar2 + 0xd8);
          uVar8 = *(int32_t *)(lVar2 + 0xdc);
          uVar9 = *(int32_t *)(lVar2 + 0xe0);
          *(int32_t *)(puVar20 + 0x12) = *(int32_t *)(lVar2 + 0xd4);
          *(int32_t *)((int64_t)puVar20 + 0x94) = uVar7;
          *(int32_t *)(puVar20 + 0x13) = uVar8;
          *(int32_t *)((int64_t)puVar20 + 0x9c) = uVar9;
          uVar7 = *(int32_t *)(lVar2 + 0xe8);
          uVar8 = *(int32_t *)(lVar2 + 0xec);
          uVar9 = *(int32_t *)(lVar2 + 0xf0);
          *(int32_t *)(puVar20 + 0x14) = *(int32_t *)(lVar2 + 0xe4);
          *(int32_t *)((int64_t)puVar20 + 0xa4) = uVar7;
          *(int32_t *)(puVar20 + 0x15) = uVar8;
          *(int32_t *)((int64_t)puVar20 + 0xac) = uVar9;
          *(int32_t *)((int64_t)puVar20 + 4) = 0x3f000000;
          *(int32_t *)(puVar20 + 1) = 0x3f000000;
          *(int32_t *)puVar20 = 0x3f000000;
          iVar19 = *(int *)(*(int64_t *)(puVar14 + 2) + 0xf4);
          uStack_b8 = 1;
          lStack_c0 = lVar10 + 0x2b8;
          AcquireSRWLockShared(lVar10 + 0x2b8);
          lVar11 = *(int64_t *)(*(int64_t *)(lVar10 + 0x140) + (int64_t)iVar19 * 8);
          ReleaseSRWLockShared(lVar10 + 0x2b8);
          iVar19 = *(int *)(*(int64_t *)(puVar14 + 2) + 0xf8);
          lVar2 = lVar10 + 0x2b8;
          uStack_a8 = 1;
          lStack_b0 = lVar2;
          AcquireSRWLockShared(lVar2);
          lVar13 = (int64_t)iVar19 * 0x10 + *(int64_t *)(lVar10 + 0x1a0);
          ReleaseSRWLockShared(lVar2);
          *(int32_t *)(puVar20 + 0x16) = *(int32_t *)(lVar11 + 0x118);
          *(int32_t *)((int64_t)puVar20 + 0xb4) = *(int32_t *)(lVar11 + 0x11c);
          *(int32_t *)(puVar20 + 0x17) = *(int32_t *)(lVar11 + 0x120);
          *(int32_t *)((int64_t)puVar20 + 0xbc) = *(int32_t *)(lVar11 + 0x124);
          *(int32_t *)(puVar20 + 0x18) = *(int32_t *)(lVar11 + 0x128);
          *(int32_t *)((int64_t)puVar20 + 0xc4) = *(int32_t *)(lVar11 + 300);
          *(int32_t *)(puVar20 + 0x19) = *(int32_t *)(lVar11 + 0x138);
          *(int32_t *)((int64_t)puVar20 + 0xcc) = *(int32_t *)(lVar11 + 0x13c);
          *(int32_t *)(puVar20 + 0x1a) = *(int32_t *)(lVar11 + 0x140);
          *(int32_t *)((int64_t)puVar20 + 0xd4) = *(int32_t *)(lVar11 + 0x144);
          *(int32_t *)(puVar20 + 0x1b) = *(int32_t *)(lVar11 + 0x148);
          *(int *)((int64_t)puVar20 + 0xdc) = *(int *)(lVar13 + 4) * 2;
          *(int32_t *)(puVar20 + 0x1c) = *(int32_t *)(lVar13 + 4);
          uVar17 = uStack_1cc + 1;
          uVar18 = (uint64_t)uVar17;
          uVar21 = uVar21 + 1;
          puVar20 = puVar20 + 0x1e;
          uVar22 = (int)uVar23 + 1;
          uVar23 = (uint64_t)uVar22;
          uVar16 = (uint64_t)uStack_1d4;
          param_2 = lStack_1c0;
          uVar1 = uStack_1d8;
          uStack_1cc = uVar17;
          uVar12 = uStack_1d8;
          uVar15 = uStack_1d8;
        } while ((int)uVar22 < iStack_1c8);
        uStack_1d8 = uVar1;
        if (0 < (int)uVar17) {
          uVar12 = uStack_1c4 >> 10 & 1;
          uVar15 = uVar12 | 0x10;
          if ((uStack_1c4 >> 9 & 1) == 0) {
            uVar15 = uVar12;
          }
          uVar12 = uVar15 | 0x20;
          if ((uStack_1c4 >> 0xb & 1) == 0) {
            uVar12 = uVar15;
          }
          uVar15 = uVar12 | 0x40;
          if ((uStack_1c4 >> 0xc & 1) == 0) {
            uVar15 = uVar12;
          }
          lVar11 = FUN_1800f0cb0(lVar10,uVar15);
          lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
          if ((lVar11 != 0) &&
             (*(int64_t *)(lVar2 + 0x82a0) != (int64_t)**(int **)(lVar11 + 0x10))) {
            (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0x228))
                      (*(int64_t **)(lVar2 + 0x8400),*(uint64_t *)(*(int **)(lVar11 + 0x10) + 6),
                       0,0);
            *(int64_t *)(lVar2 + 0x82a0) = (int64_t)**(int **)(lVar11 + 0x10);
          }
          uVar5 = *(uint64_t *)(system_message_buffer + 0x1cd8);
          uVar6 = *(uint64_t *)(lVar10 + 0x40a0);
          FUN_18029fc10(uVar5,uVar6,lVar10 + 0x4a0,0x3c00);
          FUN_18029dca0(uVar5,0xb,0x20,uVar6);
          plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
          (**(code **)(*plVar3 + 0x148))(plVar3,uStack_1cc,1);
          uVar16 = (uint64_t)uStack_1d4;
          iVar19 = iStack_1c8;
          uVar15 = uStack_1d8;
          goto LAB_1800f03c0;
        }
        bVar24 = (int)uVar16 == iStack_1c8;
        iVar19 = iStack_1c8;
      }
    } while (!bVar24);
    if (plStack_128 != (int64_t *)0x0) {
      (**(code **)(*plStack_128 + 0x38))();
    }
    if (plStack_120 != (int64_t *)0x0) {
      (**(code **)(*plStack_120 + 0x38))();
    }
    if (plStack_118 != (int64_t *)0x0) {
      (**(code **)(*plStack_118 + 0x38))();
    }
    if (plStack_110 != (int64_t *)0x0) {
      (**(code **)(*plStack_110 + 0x38))();
    }
    FUN_1802c2ac0(&puStack_98);
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
  }
  uStack_108 = 0;
  plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  uStack_1e8 = 0;
  (**(code **)(*plVar3 + 0x220))(plVar3,1,1,&uStack_108);
  uStack_100 = 0;
  plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  uStack_1e8 = 0;
  (**(code **)(*plVar3 + 0x220))(plVar3,2,1,&uStack_100);
  ppuStack_1b8 = (void **)0x0;
  plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  uStack_1e8 = 0;
  (**(code **)(*plVar3 + 0x220))(plVar3,5,1,&ppuStack_1b8);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_208);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800f08a0(void)
void FUN_1800f08a0(void)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int8_t auStack_1e8 [32];
  int32_t uStack_1c8;
  int32_t uStack_1c0;
  int32_t uStack_1b8;
  int32_t uStack_1b0;
  int32_t uStack_1a8;
  uint64_t uStack_1a0;
  int8_t uStack_198;
  int32_t uStack_190;
  int64_t *plStack_188;
  int64_t *plStack_180;
  int64_t *plStack_178;
  uint64_t uStack_170;
  void *puStack_168;
  int8_t *puStack_160;
  int32_t uStack_158;
  int8_t auStack_150 [40];
  void *puStack_128;
  int8_t *puStack_120;
  int32_t uStack_118;
  int8_t auStack_110 [72];
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [32];
  void *puStack_90;
  int8_t *puStack_88;
  int32_t uStack_80;
  int8_t auStack_78 [32];
  void *puStack_58;
  int8_t *puStack_50;
  int32_t uStack_48;
  int8_t auStack_40 [32];
  uint64_t uStack_20;
  
  lVar1 = system_system_data_memory;
  uStack_170 = 0xfffffffffffffffe;
  uStack_20 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1e8;
  puStack_168 = &unknown_var_672_ptr;
  puStack_160 = auStack_150;
  auStack_150[0] = 0;
  uStack_158 = 0xe;
  strcpy_s(auStack_150,0x20,&unknown_var_5568_ptr);
  uStack_190 = 1;
  uStack_198 = 1;
  uStack_1a0 = 0;
  uStack_1a8 = 0x40;
  uStack_1b0 = 0xf0;
  uStack_1b8 = 0;
  uStack_1c0 = 3;
  uStack_1c8 = 0x220;
  puVar2 = (uint64_t *)FUN_1800b0a10();
  uVar3 = *puVar2;
  *puVar2 = 0;
  plStack_188 = *(int64_t **)(lVar1 + 0x40a0);
  *(uint64_t *)(lVar1 + 0x40a0) = uVar3;
  if (plStack_188 != (int64_t *)0x0) {
    (**(code **)(*plStack_188 + 0x38))();
  }
  if (plStack_178 != (int64_t *)0x0) {
    (**(code **)(*plStack_178 + 0x38))();
  }
  puStack_168 = &system_state_ptr;
  puVar2 = (uint64_t *)FUN_18009e9e0();
  uVar3 = *puVar2;
  *puVar2 = 0;
  plStack_188 = *(int64_t **)(lVar1 + 0x40b0);
  *(uint64_t *)(lVar1 + 0x40b0) = uVar3;
  if (plStack_188 != (int64_t *)0x0) {
    (**(code **)(*plStack_188 + 0x38))();
  }
  if (plStack_180 != (int64_t *)0x0) {
    (**(code **)(*plStack_180 + 0x38))();
  }
  uVar3 = *(uint64_t *)(lVar1 + 0x40b0);
  puStack_168 = &unknown_var_672_ptr;
  puStack_160 = auStack_150;
  auStack_150[0] = 0;
  uStack_158 = 0xc;
  strcpy_s(auStack_150,0x20,&unknown_var_5624_ptr);
  uVar3 = FUN_180240430(uVar3,&puStack_168,1);
  *(uint64_t *)(lVar1 + 0x40b8) = uVar3;
  puStack_168 = &system_state_ptr;
  uVar3 = *(uint64_t *)(lVar1 + 0x40b0);
  puStack_c8 = &unknown_var_672_ptr;
  puStack_c0 = auStack_b0;
  auStack_b0[0] = 0;
  uStack_b8 = 0xd;
  strcpy_s(auStack_b0,0x20,&unknown_var_5608_ptr);
  uVar3 = FUN_180240430(uVar3,&puStack_c8,1);
  *(uint64_t *)(lVar1 + 0x40c8) = uVar3;
  puStack_c8 = &system_state_ptr;
  uVar3 = *(uint64_t *)(lVar1 + 0x40b0);
  puStack_90 = &unknown_var_672_ptr;
  puStack_88 = auStack_78;
  auStack_78[0] = 0;
  uStack_80 = 0x11;
  strcpy_s(auStack_78,0x20,&unknown_var_5664_ptr);
  uVar3 = FUN_180240430(uVar3,&puStack_90,1);
  *(uint64_t *)(lVar1 + 0x40d0) = uVar3;
  puStack_90 = &system_state_ptr;
  uVar3 = *(uint64_t *)(lVar1 + 0x40b0);
  puStack_128 = &unknown_var_672_ptr;
  puStack_120 = auStack_110;
  auStack_110[0] = 0;
  uStack_118 = 0x12;
  strcpy_s(auStack_110,0x20,&unknown_var_5640_ptr);
  uVar3 = FUN_180240430(uVar3,&puStack_128,1);
  *(uint64_t *)(lVar1 + 0x40d8) = uVar3;
  puStack_128 = &system_state_ptr;
  uVar3 = *(uint64_t *)(lVar1 + 0x40b0);
  puStack_58 = &unknown_var_672_ptr;
  puStack_50 = auStack_40;
  auStack_40[0] = 0;
  uStack_48 = 0x19;
  strcpy_s(auStack_40,0x20,&unknown_var_5704_ptr);
  uVar3 = FUN_180240430(uVar3,&puStack_58,1);
  *(uint64_t *)(lVar1 + 0x40c0) = uVar3;
  puStack_58 = &system_state_ptr;
  puVar2 = (uint64_t *)FUN_18009e9e0();
  uVar3 = *puVar2;
  puStack_128 = &unknown_var_3480_ptr;
  puStack_120 = auStack_110;
  auStack_110[0] = 0;
  uStack_118 = 0x1b;
  strcpy_s(auStack_110,0x40,&system_data_4a78);
  uVar3 = FUN_180240430(uVar3,&puStack_128,1);
  *(uint64_t *)(lVar1 + 0x300) = uVar3;
  puStack_128 = &system_state_ptr;
  if (plStack_180 != (int64_t *)0x0) {
    (**(code **)(*plStack_180 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_20 ^ (uint64_t)auStack_1e8);
}



// WARNING: Removing unreachable block (ram,0x0001800f0e4c)

uint64_t FUN_1800f0cb0(int64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  int8_t auStackX_10 [8];
  int32_t uStack_f0;
  int32_t uStack_ec;
  int32_t uStack_e4;
  void *puStack_d0;
  int64_t lStack_c8;
  int32_t uStack_c0;
  uint64_t uStack_b8;
  int32_t uStack_b0;
  int32_t uStack_ac;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int64_t *plStack_a0;
  uint64_t uStack_98;
  int32_t uStack_90;
  int16_t uStack_8c;
  ushort uStack_8a;
  uint64_t uStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  uint64_t uStack_60;
  int8_t auStack_58 [32];
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  int64_t *plStack_28;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_98 = 0;
  if ((param_2 & 1) != 0) {
    uStack_98 = *(uint64_t *)(param_1 + 0x40b8);
  }
  if ((param_2 & 2) != 0) {
    uStack_98 = uStack_98 | *(uint64_t *)(param_1 + 0x40c8);
  }
  if ((param_2 & 0x10) != 0) {
    uStack_98 = uStack_98 | *(uint64_t *)(param_1 + 0x40d0);
  }
  if ((param_2 & 0x20) != 0) {
    uStack_98 = uStack_98 | *(uint64_t *)(param_1 + 0x40d8);
  }
  if ((param_2 & 0x40) != 0) {
    uStack_98 = uStack_98 | *(uint64_t *)(param_1 + 0x40c0);
  }
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_80 = *(uint64_t *)(param_1 + 0x40b0);
  puStack_d0 = &system_data_buffer_ptr;
  uStack_b8 = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  plStack_a0 = (int64_t *)0x0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uVar1 = *(uint64_t *)(*(int64_t *)(param_1 + 0x40b0) + 0x15b8);
  uStack_f0 = (int32_t)uStack_98;
  uStack_ec = (int32_t)(uStack_98 >> 0x20);
  uStack_e4 = (int32_t)(((uint64_t)uStack_8a << 0x30) >> 0x20);
  uStack_78 = uStack_f0;
  uStack_74 = uStack_ec;
  uStack_70 = 0;
  uStack_6c = uStack_e4;
  uStack_68 = 2;
  uStack_60 = 0;
  CoreEngineDataTransformer(auStack_58,&puStack_d0);
  uStack_38 = uStack_b0;
  uStack_34 = uStack_ac;
  uStack_30 = uStack_a8;
  uStack_2c = uStack_a4;
  plStack_28 = plStack_a0;
  if (plStack_a0 != (int64_t *)0x0) {
    (**(code **)(*plStack_a0 + 0x28))();
  }
  uVar1 = FUN_180299eb0(uVar1,0,&uStack_80,auStackX_10);
  if (plStack_a0 != (int64_t *)0x0) {
    (**(code **)(*plStack_a0 + 0x38))();
  }
  puStack_d0 = &system_data_buffer_ptr;
  if (lStack_c8 == 0) {
    return uVar1;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






// 函数: void FUN_1800f0e70(void)
void FUN_1800f0e70(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




