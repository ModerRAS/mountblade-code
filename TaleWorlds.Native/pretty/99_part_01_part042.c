/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore


#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part042.c - 5 个函数

// 函数: void FUN_1800cbd80(uint64_t param_1,int64_t param_2)
void FUN_1800cbd80(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lStackX_8;
  
  lVar4 = system_main_module_state;
  if (((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0) &&
     ((((*(int *)(param_2 + 0x9a34) != 0 || (*(int *)(param_2 + 0x124bc) != 0)) ||
       (*(int *)(param_2 + 0x124b8) != 0)) || (*(int *)(param_2 + 0x124c0) != 0)))) {
    lVar6 = 0;
    lVar1 = *(int64_t *)(param_2 + 0x9730);
    lVar5 = *(int64_t *)(param_2 + 0x9728);
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lStackX_8 = lVar6;
    if ((lVar1 != 0) &&
       (*(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar1 != -0x10)) {
      *(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(lVar4 + 0x224);
      lStackX_8 = *(int64_t *)(lVar1 + 0x18);
    }
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x40))(plVar3,0x49,1,&lStackX_8);
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,0x49,1,&lStackX_8);
    lVar4 = system_main_module_state;
    if (lVar5 == 0) {
      lVar5 = lVar6;
    }
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if ((lVar5 != 0) &&
       (*(int32_t *)(lVar5 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar5 != -0x10)) {
      lVar6 = *(int64_t *)(lVar5 + 0x18);
      *(int32_t *)(lVar5 + 0x16c) = *(int32_t *)(lVar4 + 0x224);
    }
    plVar3 = *(int64_t **)(lVar1 + 0x8400);
    lStackX_8 = lVar6;
    (**(code **)(*plVar3 + 0x40))(plVar3,0x4c,1,&lStackX_8);
    plVar3 = *(int64_t **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x218))(plVar3,0x4c,1,&lStackX_8);
    return;
  }
  lStackX_8 = 0;
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  plVar3 = *(int64_t **)(lVar4 + 0x8400);
  (**(code **)(*plVar3 + 0x40))(plVar3,0x49,1,&lStackX_8);
  plVar3 = *(int64_t **)(lVar4 + 0x8400);
  (**(code **)(*plVar3 + 0x218))(plVar3,0x49,1,&lStackX_8);
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  lStackX_8 = 0;
  plVar3 = *(int64_t **)(lVar4 + 0x8400);
  (**(code **)(*plVar3 + 0x40))(plVar3,0x4c,1,&lStackX_8);
  plVar3 = *(int64_t **)(lVar4 + 0x8400);
  (**(code **)(*plVar3 + 0x218))(plVar3,0x4c,1,&lStackX_8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800cbddb(int64_t param_1)
void FUN_1800cbddb(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int64_t lStack0000000000000030;
  
  lVar3 = system_main_module_state;
  lVar1 = *(int64_t *)(in_RAX + 0x1cd8);
  lStack0000000000000030 = unaff_RDI;
  if ((param_1 != 0) &&
     (*(int32_t *)(param_1 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), param_1 != -0x10))
  {
    *(int32_t *)(param_1 + 0x16c) = *(int32_t *)(lVar3 + 0x224);
    lStack0000000000000030 = *(int64_t *)(param_1 + 0x18);
  }
  plVar2 = *(int64_t **)(lVar1 + 0x8400);
  (**(code **)(*plVar2 + 0x40))(plVar2,0x49,1,&stack0x00000030);
  plVar2 = *(int64_t **)(lVar1 + 0x8400);
  (**(code **)(*plVar2 + 0x218))(plVar2,0x49,1,&stack0x00000030);
  lVar1 = system_main_module_state;
  if (unaff_RBX == 0) {
    unaff_RBX = unaff_RDI;
  }
  lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if ((unaff_RBX != 0) &&
     (*(int32_t *)(unaff_RBX + 0x16c) = *(int32_t *)(system_main_module_state + 0x224),
     unaff_RBX != -0x10)) {
    unaff_RDI = *(int64_t *)(unaff_RBX + 0x18);
    *(int32_t *)(unaff_RBX + 0x16c) = *(int32_t *)(lVar1 + 0x224);
  }
  plVar2 = *(int64_t **)(lVar3 + 0x8400);
  lStack0000000000000030 = unaff_RDI;
  (**(code **)(*plVar2 + 0x40))(plVar2,0x4c,1,&stack0x00000030);
  plVar2 = *(int64_t **)(lVar3 + 0x8400);
  (**(code **)(*plVar2 + 0x218))(plVar2,0x4c,1,&stack0x00000030);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800cbeef(void)
void FUN_1800cbeef(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uStack0000000000000030;
  
  uStack0000000000000030 = 0;
  lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
  plVar2 = *(int64_t **)(lVar1 + 0x8400);
  (**(code **)(*plVar2 + 0x40))(plVar2,0x49,1,&stack0x00000030);
  plVar2 = *(int64_t **)(lVar1 + 0x8400);
  (**(code **)(*plVar2 + 0x218))(plVar2,0x49,1,&stack0x00000030);
  lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
  uStack0000000000000030 = 0;
  plVar2 = *(int64_t **)(lVar1 + 0x8400);
  (**(code **)(*plVar2 + 0x40))(plVar2,0x4c,1,&stack0x00000030);
  plVar2 = *(int64_t **)(lVar1 + 0x8400);
  (**(code **)(*plVar2 + 0x218))(plVar2,0x4c,1,&stack0x00000030);
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800ccf05)
// WARNING: Removing unreachable block (ram,0x0001800cccf1)
// WARNING: Removing unreachable block (ram,0x0001800ccbbf)
// WARNING: Removing unreachable block (ram,0x0001800cc956)
// WARNING: Removing unreachable block (ram,0x0001800cc7fc)
// WARNING: Removing unreachable block (ram,0x0001800cd050)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800cbf90(int64_t param_1,int64_t param_2)
void FUN_1800cbf90(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int iVar12;
  int64_t lVar13;
  int64_t *plVar14;
  int iVar15;
  int64_t lVar16;
  int32_t uVar17;
  uint64_t uVar18;
  uint64_t extraout_XMM0_Qa;
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int32_t uVar21;
  int8_t auStack_218 [32];
  int32_t uStack_1f8;
  int32_t uStack_1e8;
  int64_t *plStack_1e0;
  int64_t lStack_1d8;
  int64_t lStack_1d0;
  int64_t *plStack_1c8;
  int64_t *plStack_1c0;
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  uint64_t uStack_1a8;
  code *pcStack_1a0;
  code *pcStack_198;
  int64_t lStack_190;
  int64_t lStack_188;
  int64_t lStack_180;
  int64_t lStack_178;
  int64_t lStack_170;
  int64_t lStack_168;
  int64_t lStack_160;
  int64_t lStack_158;
  int64_t *plStack_150;
  int64_t lStack_148;
  int64_t lStack_140;
  int64_t *plStack_138;
  int64_t *plStack_130;
  int64_t *plStack_128;
  int64_t *plStack_120;
  int64_t *plStack_118;
  int64_t lStack_110;
  int64_t lStack_108;
  int64_t *plStack_100;
  int64_t *plStack_f8;
  int64_t *plStack_f0;
  int64_t *plStack_e8;
  int64_t *plStack_e0;
  int64_t *plStack_d8;
  int64_t *plStack_d0;
  uint64_t uStack_c8;
  int64_t *plStack_c0;
  void *puStack_b8;
  int8_t *puStack_b0;
  int32_t uStack_a8;
  int8_t auStack_a0 [72];
  uint64_t uStack_58;
  
  lVar11 = system_message_buffer;
  cVar8 = system_debug_flag;
  uStack_c8 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_218;
  lVar16 = 0;
  uStack_1e8 = 0;
  *(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x17ac) = (float)(system_debug_flag == '\0');
  uVar21 = 0x3f800000;
  *(float *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x14e0) = 1.0 / *(float *)(param_2 + 0x124c8);
  *(float *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x14e4) = 1.0 / *(float *)(param_2 + 0x124cc);
  if ((*(char *)(param_2 + 0x11cf4) == '\0') || (*(int64_t *)(param_2 + 0x123f0) == 0)) {
    *(int32_t *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x14e8) = 0x3f800000;
    *(int32_t *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x14ec) = 0x3f800000;
  }
  else {
    *(float *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x14e8) =
         1.0 / (float)*(ushort *)(*(int64_t *)(param_2 + 0x123f0) + 0x32c);
    *(float *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x14ec) =
         1.0 / (float)*(ushort *)(*(int64_t *)(param_2 + 0x123f0) + 0x32e);
  }
  *(int32_t *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x14f0) = *(int32_t *)(param_2 + 0x11ccc);
  *(int32_t *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x14f4) = *(int32_t *)(param_2 + 0x11cd0);
  *(float *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x14f8) =
       SQRT(*(float *)(param_2 + 0x11ccc) * *(float *)(param_2 + 0x11ccc) +
            *(float *)(param_2 + 0x11cd0) * *(float *)(param_2 + 0x11cd0));
  *(int32_t *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x14fc) = 0;
  *(int32_t *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x15c8) = 0x3f800000;
  uVar18 = *(uint64_t *)(param_2 + 0x11cdc);
  lVar13 = *(int64_t *)(lVar11 + 0x1cd8);
  *(uint64_t *)(lVar13 + 0x1500) = *(uint64_t *)(param_2 + 0x11cd4);
  *(uint64_t *)(lVar13 + 0x1508) = uVar18;
  if (*(int64_t *)(param_2 + 0x9700) != 0) {
    *(float *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x1754) =
         (float)*(ushort *)(*(int64_t *)(param_2 + 0x9700) + 0x32c);
    *(float *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x1758) =
         (float)*(ushort *)(*(int64_t *)(param_2 + 0x9700) + 0x32e);
  }
  if (cVar8 == '\0') {
    uVar17 = *(int32_t *)(param_2 + 0x124e4);
  }
  else {
    uVar17 = 0;
  }
  *(int32_t *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x15b0) = uVar17;
  *(int32_t *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x15bc) = *(int32_t *)(param_2 + 0x9a40);
  lVar13 = 0x1530;
  do {
    puVar1 = (uint64_t *)(*(int64_t *)(lVar11 + 0x1cd8) + lVar13);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar13 = lVar13 + 0x10;
  } while (lVar13 < 0x15b0);
  uVar17 = *(int32_t *)(param_2 + 0x11ce8);
  plStack_1c0 = *(int64_t **)(param_2 + 0x11ce4);
  lVar13 = *(int64_t *)(lVar11 + 0x1cd8);
  uStack_1b8 = 0;
  *(int32_t *)(lVar13 + 0x1660) = *(int32_t *)(param_2 + 0x11ce4);
  *(int32_t *)(lVar13 + 0x1664) = uVar17;
  *(int32_t *)(lVar13 + 0x1668) = 0;
  *(int32_t *)(lVar13 + 0x166c) = 0;
  lVar10 = SYSTEM_STATE_MANAGER;
  lVar13 = *(int64_t *)(lVar11 + 0x1cd8);
  if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
    auVar19._0_4_ = *(float *)(SYSTEM_STATE_MANAGER + 0x1880);
  }
  else {
    auVar19._0_4_ = 1.0;
  }
  *(float *)(lVar13 + 0x1520) = auVar19._0_4_;
  *(float *)(lVar13 + 0x1524) = 1.0 / auVar19._0_4_;
  if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
    auVar19._0_4_ = *(float *)(lVar10 + 0x1110);
  }
  else {
    auVar19._0_4_ = 50.0;
  }
  *(float *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x1528) = auVar19._0_4_ * 0.005 - 0.25;
  if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
    auVar19._0_4_ = *(float *)(lVar10 + 0x1180);
    if (0.0 <= auVar19._0_4_) goto LAB_1800cc2d6;
    auVar19._0_4_ = 0.0;
  }
  else {
    auVar19._0_4_ = 0.0;
LAB_1800cc2d6:
    if (1.0 <= auVar19._0_4_) {
      auVar19._0_4_ = 1.0;
    }
  }
  *(float *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x17a0) = auVar19._0_4_;
  if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
    auVar19._0_4_ = *(float *)(lVar10 + 0x11f0);
    if (0.0 <= auVar19._0_4_) goto LAB_1800cc2f2;
    auVar19._0_4_ = 0.0;
  }
  else {
    auVar19._0_4_ = 1.0;
LAB_1800cc2f2:
    if (1.0 <= auVar19._0_4_) {
      auVar19._0_4_ = 1.0;
    }
  }
  *(float *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x17a4) = auVar19._0_4_;
  lVar13 = *(int64_t *)(lVar11 + 0x1cd8);
  uVar17 = powf();
  *(int32_t *)(lVar13 + 0x17b8) = uVar17;
  if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
    auVar19._0_4_ = *(float *)(lVar10 + 0x2060);
  }
  else {
    auVar19._0_4_ = 0.0;
  }
  *(float *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x1d54) = auVar19._0_4_ * 0.01;
  if ((*(int *)(lVar10 + 0xbd0) < 1) || (*(int64_t *)(param_2 + 0x97a0) == 0)) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0x3f800000;
  }
  *(int32_t *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x17a8) = uVar17;
  plVar2 = *(int64_t **)(param_1 + 0xe88);
  plStack_c0 = plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plStack_118 = *(int64_t **)(param_1 + 0xec8);
  plStack_100 = plStack_118;
  if (plStack_118 != (int64_t *)0x0) {
    (**(code **)(*plStack_118 + 0x28))();
  }
  plVar14 = *(int64_t **)(param_1 + 0xe98);
  plStack_120 = plVar14;
  plStack_f8 = plVar14;
  if (plVar14 != (int64_t *)0x0) {
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  plStack_128 = *(int64_t **)(param_1 + 0xe80);
  plStack_f0 = plStack_128;
  if (plStack_128 != (int64_t *)0x0) {
    (**(code **)(*plStack_128 + 0x28))();
  }
  plStack_130 = *(int64_t **)(param_1 + 0xe90);
  plStack_e8 = plStack_130;
  if (plStack_130 != (int64_t *)0x0) {
    (**(code **)(*plStack_130 + 0x28))();
  }
  plVar3 = *(int64_t **)(param_1 + 0xea8);
  plStack_e0 = plVar3;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plStack_1c8 = *(int64_t **)(param_1 + 0xea0);
  plStack_d8 = plStack_1c8;
  if (plStack_1c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c8 + 0x28))();
  }
  plVar4 = *(int64_t **)(param_1 + 0xeb0);
  plStack_138 = plVar4;
  plStack_d0 = plVar4;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  plVar5 = *(int64_t **)(param_1 + 0xeb8);
  plStack_1c0 = plVar5;
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  lVar13 = system_main_module_state;
  lVar11 = *(int64_t *)(system_message_buffer + 0x1cd8);
  lStack_110 = lVar16;
  if ((plVar2 != (int64_t *)0x0) &&
     (*(int32_t *)((int64_t)plVar2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224),
     plVar2 != (int64_t *)0xfffffffffffffff0)) {
    *(int32_t *)((int64_t)plVar2 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
    lStack_110 = plVar2[3];
  }
  plVar6 = *(int64_t **)(lVar11 + 0x8400);
  (**(code **)(*plVar6 + 200))(plVar6,0x44,1,&lStack_110);
  lVar13 = system_main_module_state;
  lVar11 = *(int64_t *)(system_message_buffer + 0x1cd8);
  lStack_108 = lVar16;
  if ((plVar14 != (int64_t *)0x0) &&
     (*(int32_t *)((int64_t)plVar14 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224),
     plVar14 != (int64_t *)0xfffffffffffffff0)) {
    *(int32_t *)((int64_t)plVar14 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
    lStack_108 = plVar14[3];
  }
  plVar14 = *(int64_t **)(lVar11 + 0x8400);
  (**(code **)(*plVar14 + 200))(plVar14,0x43,1,&lStack_108);
  lVar13 = system_main_module_state;
  lVar11 = *(int64_t *)(system_message_buffer + 0x1cd8);
  lStack_190 = lVar16;
  if ((plVar3 != (int64_t *)0x0) &&
     (*(int32_t *)((int64_t)plVar3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224),
     plVar3 != (int64_t *)0xfffffffffffffff0)) {
    *(int32_t *)((int64_t)plVar3 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
    lStack_190 = plVar3[3];
  }
  plVar14 = *(int64_t **)(lVar11 + 0x8400);
  (**(code **)(*plVar14 + 200))(plVar14,0x45,1,&lStack_190);
  lVar11 = system_main_module_state;
  if ((plStack_1c8 == (int64_t *)0x0) ||
     (*(int32_t *)((int64_t)plStack_1c8 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224),
     plStack_1c8[2] == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
  plVar14 = plStack_1c8;
  if (!bVar7) {
    plVar14 = plVar3;
  }
  lStack_188 = lVar16;
  if ((plVar14 != (int64_t *)0x0) &&
     (*(int32_t *)((int64_t)plVar14 + 0x16c) = *(int32_t *)(lVar11 + 0x224),
     plVar14 != (int64_t *)0xfffffffffffffff0)) {
    *(int32_t *)((int64_t)plVar14 + 0x16c) = *(int32_t *)(lVar11 + 0x224);
    lStack_188 = plVar14[3];
  }
  plVar14 = *(int64_t **)(lVar13 + 0x8400);
  (**(code **)(*plVar14 + 200))(plVar14,0x48,1,&lStack_188);
  lVar13 = system_main_module_state;
  lVar11 = *(int64_t *)(system_message_buffer + 0x1cd8);
  lStack_180 = lVar16;
  if ((plVar4 != (int64_t *)0x0) &&
     (*(int32_t *)((int64_t)plVar4 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224),
     plVar4 != (int64_t *)0xfffffffffffffff0)) {
    *(int32_t *)((int64_t)plVar4 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
    lStack_180 = plVar4[3];
  }
  plVar14 = *(int64_t **)(lVar11 + 0x8400);
  (**(code **)(*plVar14 + 200))(plVar14,0x46,1,&lStack_180);
  lVar13 = system_main_module_state;
  lVar11 = *(int64_t *)(system_message_buffer + 0x1cd8);
  lStack_178 = lVar16;
  if ((plVar5 != (int64_t *)0x0) &&
     (*(int32_t *)((int64_t)plVar5 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224),
     plVar5 != (int64_t *)0xfffffffffffffff0)) {
    *(int32_t *)((int64_t)plVar5 + 0x16c) = *(int32_t *)(lVar13 + 0x224);
    lStack_178 = plVar5[3];
  }
  plVar14 = *(int64_t **)(lVar11 + 0x8400);
  (**(code **)(*plVar14 + 200))(plVar14,0x47,1,&lStack_178);
  lVar10 = system_main_module_state;
  lVar11 = *(int64_t *)(system_message_buffer + 0x1cd8);
  lVar13 = *(int64_t *)(param_2 + 0x98b0);
  lStack_1d8 = lVar16;
  if ((lVar13 != 0) &&
     (*(int32_t *)(lVar13 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar13 != -0x10)) {
    *(int32_t *)(lVar13 + 0x16c) = *(int32_t *)(lVar10 + 0x224);
    lStack_1d8 = *(int64_t *)(lVar13 + 0x18);
  }
  plVar14 = *(int64_t **)(lVar11 + 0x8400);
  (**(code **)(*plVar14 + 200))(plVar14,0x4a,1,&lStack_1d8);
  plVar14 = *(int64_t **)(lVar11 + 0x8400);
  (**(code **)(*plVar14 + 0x40))(plVar14,0x4a,1,&lStack_1d8);
  lVar11 = *(int64_t *)(system_message_buffer + 0x1cd8);
  lVar13 = lVar16;
  if ((((*(int64_t *)(param_2 + 0x9700) != 0) && (lVar10 = FUN_18023a940(), lVar10 != 0)) &&
      (lVar13 = lVar10, *(int64_t *)(lVar10 + 8) == 0)) && (*(int64_t *)(lVar10 + 0x10) == 0)) {
    lVar13 = 0;
  }
  if ((((*(int64_t *)(lVar11 + 0x8538) != lVar13) || (*(int *)(lVar11 + 35000) != -1)) ||
      (*(int *)(lVar11 + 0x8ab8) != 0x10)) &&
     (((lVar13 == 0 || (*(int64_t *)(lVar13 + 8) != 0)) || (*(int64_t *)(lVar13 + 0x10) != 0)))) {
    lStack_170 = lVar16;
    if (lVar13 != 0) {
      lStack_170 = *(int64_t *)(lVar13 + 0x10);
    }
    (**(code **)(**(int64_t **)(lVar11 + 0x8400) + 0x40))
              (*(int64_t **)(lVar11 + 0x8400),0x20,1,&lStack_170);
    *(int64_t *)(lVar11 + 0x8538) = lVar13;
    *(int32_t *)(lVar11 + 35000) = 0xffffffff;
    *(int32_t *)(lVar11 + 0x8ab8) = 0x10;
    *(int *)(lVar11 + 0x82b4) = *(int *)(lVar11 + 0x82b4) + 1;
  }
  lVar10 = system_main_module_state;
  lVar11 = *(int64_t *)(system_message_buffer + 0x1cd8);
  lVar13 = *(int64_t *)(param_2 + 0x98b8);
  lStack_1d0 = lVar16;
  if ((lVar13 != 0) &&
     (*(int32_t *)(lVar13 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar13 != -0x10)) {
    *(int32_t *)(lVar13 + 0x16c) = *(int32_t *)(lVar10 + 0x224);
    lStack_1d0 = *(int64_t *)(lVar13 + 0x18);
  }
  plVar14 = *(int64_t **)(lVar11 + 0x8400);
  (**(code **)(*plVar14 + 200))(plVar14,0x4b,1,&lStack_1d0);
  plVar14 = *(int64_t **)(lVar11 + 0x8400);
  uVar18 = (**(code **)(*plVar14 + 0x40))(plVar14,0x4b,1,&lStack_1d0);
  if (*(int64_t *)(param_2 + 0x9708) != 0) {
    lVar11 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar10 = FUN_18023a940();
    lVar13 = lVar16;
    if (((lVar10 != 0) && (lVar13 = lVar10, *(int64_t *)(lVar10 + 8) == 0)) &&
       (*(int64_t *)(lVar10 + 0x10) == 0)) {
      lVar13 = 0;
    }
    uVar18 = extraout_XMM0_Qa;
    if ((((*(int64_t *)(lVar11 + 0x8640) != lVar13) || (*(int *)(lVar11 + 0x893c) != -1)) ||
        (*(int *)(lVar11 + 0x8b3c) != 0x10)) &&
       (((lVar13 == 0 || (*(int64_t *)(lVar13 + 8) != 0)) || (*(int64_t *)(lVar13 + 0x10) != 0))))
    {
      lStack_168 = lVar16;
      if (lVar13 != 0) {
        lStack_168 = *(int64_t *)(lVar13 + 0x10);
      }
      uVar18 = (**(code **)(**(int64_t **)(lVar11 + 0x8400) + 0x40))
                         (*(int64_t **)(lVar11 + 0x8400),0x41,1,&lStack_168);
      *(int64_t *)(lVar11 + 0x8640) = lVar13;
      *(int32_t *)(lVar11 + 0x893c) = 0xffffffff;
      *(int32_t *)(lVar11 + 0x8b3c) = 0x10;
      *(int *)(lVar11 + 0x82b4) = *(int *)(lVar11 + 0x82b4) + 1;
    }
  }
  uVar18 = FUN_1800cd1b0(uVar18,param_2);
  uVar9 = FUN_1800cbd80(uVar18,param_2);
  lVar11 = system_message_buffer;
  auVar19._0_4_ = *(float *)(param_2 + 0x11c20) * 0.0625;
  iVar12 = (int)auVar19._0_4_;
  if ((iVar12 != -0x80000000) && ((float)iVar12 != auVar19._0_4_)) {
    auVar19._4_4_ = auVar19._0_4_;
    auVar19._8_8_ = 0;
    uVar9 = movmskps(uVar9,auVar19);
    uVar9 = uVar9 & 1 ^ 1;
    auVar19._0_4_ = (float)(int)(iVar12 + uVar9);
  }
  auVar20._0_4_ = *(float *)(param_2 + 0x11c24) * 0.0625;
  iVar12 = (int)auVar20._0_4_;
  if ((iVar12 != -0x80000000) && ((float)iVar12 != auVar20._0_4_)) {
    auVar20._4_4_ = auVar20._0_4_;
    auVar20._8_8_ = 0;
    uVar9 = movmskps(uVar9,auVar20);
    auVar20._0_4_ = (float)(int)(iVar12 + (uVar9 & 1 ^ 1));
  }
  iVar15 = (int)(int64_t)auVar19._0_4_ * (int)(int64_t)auVar20._0_4_;
  iVar12 = *(int *)(param_2 + 0x11c30);
  if (((*(int64_t *)(param_2 + 0x9738) == 0) || (*(int64_t *)(param_2 + 0x9740) == 0)) ||
     (*(int64_t *)(param_2 + 0x9748) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((*(int *)(param_2 + 0x124bc) == 0) || (iVar15 != iVar12)) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0x3f800000;
  }
  *(int32_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1490) = uVar17;
  if ((*(int *)(param_2 + 0x124c0) == 0) || (iVar15 != iVar12)) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0x3f800000;
  }
  *(int32_t *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x17bc) = uVar17;
  if (((*(int *)(param_2 + 0x124b8) == 0) || (iVar15 != iVar12)) || (!bVar7)) {
    uVar21 = 0;
  }
  *(int32_t *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x1774) = uVar21;
  *(uint64_t *)(*(int64_t *)(lVar11 + 0x1cd8) + 0x1778) = *(uint64_t *)(param_2 + 0x12428);
  lVar13 = *(int64_t *)(param_2 + 0x99c0);
  if (((lVar13 == 0) ||
      ((uint64_t)(*(int64_t *)(lVar13 + 0x58) - *(int64_t *)(lVar13 + 0x50) >> 3) < 2)) ||
     (lVar13 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar13 + 0x58) + -8) + 0x428), lVar13 == 0)
     ) {
    lVar11 = *(int64_t *)(lVar11 + 0x1cd8);
    lVar10 = FUN_1800bdc80();
    lVar13 = lVar16;
    if (((lVar10 != 0) && (lVar10 = FUN_18023a940(), lVar10 != 0)) &&
       ((lVar13 = lVar10, *(int64_t *)(lVar10 + 8) == 0 && (*(int64_t *)(lVar10 + 0x10) == 0)))) {
      lVar13 = 0;
    }
    if ((((*(int64_t *)(lVar11 + 0x84f8) != lVar13) || (*(int *)(lVar11 + 0x8898) != -1)) ||
        (*(int *)(lVar11 + 0x8a98) != 0x10)) &&
       (((lVar13 == 0 || (*(int64_t *)(lVar13 + 8) != 0)) || (*(int64_t *)(lVar13 + 0x10) != 0))))
    {
      lStack_160 = lVar16;
      if (lVar13 != 0) {
        lStack_160 = *(int64_t *)(lVar13 + 0x10);
      }
      (**(code **)(**(int64_t **)(lVar11 + 0x8400) + 0x40))
                (*(int64_t **)(lVar11 + 0x8400),0x18,1,&lStack_160);
      *(int64_t *)(lVar11 + 0x84f8) = lVar13;
      *(int32_t *)(lVar11 + 0x8898) = 0xffffffff;
      *(int32_t *)(lVar11 + 0x8a98) = 0x10;
      *(int *)(lVar11 + 0x82b4) = *(int *)(lVar11 + 0x82b4) + 1;
    }
  }
  else {
    uStack_1f8 = 0xffffffff;
    RenderingEngineCore0(*(uint64_t *)(lVar11 + 0x1cd8),0x18,lVar13,0x10);
  }
  lVar11 = *(int64_t *)(param_2 + 0x99c8);
  if (((lVar11 == 0) || (*(int64_t *)(lVar11 + 0x58) - *(int64_t *)(lVar11 + 0x50) >> 3 == 0)) ||
     ((lVar11 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar11 + 0x58) + -8) + 0x428), lVar11 == 0
      || (*(int64_t *)(param_2 + 0x9688) == 0)))) {
    lVar11 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar10 = FUN_1800bd5c0();
    lVar13 = lVar16;
    if ((((lVar10 != 0) && (lVar10 = FUN_18023a940(), lVar10 != 0)) &&
        (lVar13 = lVar10, *(int64_t *)(lVar10 + 8) == 0)) && (*(int64_t *)(lVar10 + 0x10) == 0)) {
      lVar13 = 0;
    }
    if ((((*(int64_t *)(lVar11 + 0x8510) != lVar13) || (*(int *)(lVar11 + 0x88a4) != -1)) ||
        (*(int *)(lVar11 + 0x8aa4) != 0x10)) &&
       (((lVar13 == 0 || (*(int64_t *)(lVar13 + 8) != 0)) || (*(int64_t *)(lVar13 + 0x10) != 0))))
    {
      lStack_158 = lVar16;
      if (lVar13 != 0) {
        lStack_158 = *(int64_t *)(lVar13 + 0x10);
      }
      (**(code **)(**(int64_t **)(lVar11 + 0x8400) + 0x40))
                (*(int64_t **)(lVar11 + 0x8400),0x1b,1,&lStack_158);
      *(int64_t *)(lVar11 + 0x8510) = lVar13;
      *(int32_t *)(lVar11 + 0x88a4) = 0xffffffff;
      *(int32_t *)(lVar11 + 0x8aa4) = 0x10;
      *(int *)(lVar11 + 0x82b4) = *(int *)(lVar11 + 0x82b4) + 1;
    }
  }
  else {
    uStack_1f8 = 0xffffffff;
    RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x1b,lVar11,0x10);
  }
  uVar18 = system_resource_state;
  lVar11 = system_system_data_memory;
  if (*(int64_t *)(system_system_data_memory + 0xc0) == 0) {
    puStack_b8 = &memory_allocator_3480_ptr;
    puStack_b0 = auStack_a0;
    auStack_a0[0] = 0;
    uStack_a8 = 0xd;
    strcpy_s(auStack_a0,0x40,&render_data_ptr);
    FUN_1800b08e0(uVar18,&plStack_1e0,&puStack_b8,0);
    plVar14 = plStack_1e0;
    uStack_1e8 = 1;
    puStack_b8 = &system_state_ptr;
    plStack_1e0 = (int64_t *)0x0;
    plStack_150 = *(int64_t **)(lVar11 + 0xc0);
    *(int64_t **)(lVar11 + 0xc0) = plVar14;
    if (plStack_150 != (int64_t *)0x0) {
      (**(code **)(*plStack_150 + 0x38))();
    }
    uStack_1e8 = 0;
    if (plStack_1e0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1e0 + 0x38))();
    }
  }
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  pcStack_1a0 = (code *)0x0;
  pcStack_198 = _guard_check_icall;
  FUN_18023c450(*(uint64_t *)(lVar11 + 0xc0),0,*(int32_t *)(lVar11 + 0x468),&uStack_1b0);
  if (pcStack_1a0 != (code *)0x0) {
    (*pcStack_1a0)(&uStack_1b0,0,0);
  }
  lVar11 = *(int64_t *)(lVar11 + 0xc0);
  lVar13 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (*(char *)(lVar11 + 900) == '\0') {
    lVar11 = FUN_1800bd5c0();
  }
  lVar10 = lVar16;
  if ((((lVar11 != 0) && (lVar11 = FUN_18023a940(), lVar11 != 0)) &&
      (lVar10 = lVar11, *(int64_t *)(lVar11 + 8) == 0)) && (*(int64_t *)(lVar11 + 0x10) == 0)) {
    lVar10 = 0;
  }
  if ((((*(int64_t *)(lVar13 + 0x8520) != lVar10) || (*(int *)(lVar13 + 0x88ac) != -1)) ||
      (*(int *)(lVar13 + 0x8aac) != 0x10)) &&
     (((lVar10 == 0 || (*(int64_t *)(lVar10 + 8) != 0)) || (*(int64_t *)(lVar10 + 0x10) != 0)))) {
    lStack_148 = lVar16;
    if (lVar10 != 0) {
      lStack_148 = *(int64_t *)(lVar10 + 0x10);
    }
    (**(code **)(**(int64_t **)(lVar13 + 0x8400) + 0x40))
              (*(int64_t **)(lVar13 + 0x8400),0x1d,1,&lStack_148);
    *(int64_t *)(lVar13 + 0x8520) = lVar10;
    *(int32_t *)(lVar13 + 0x88ac) = 0xffffffff;
    *(int32_t *)(lVar13 + 0x8aac) = 0x10;
    *(int *)(lVar13 + 0x82b4) = *(int *)(lVar13 + 0x82b4) + 1;
  }
  lVar11 = *(int64_t *)(param_2 + 0x99d0);
  if ((((lVar11 == 0) || (*(int64_t *)(lVar11 + 0x58) - *(int64_t *)(lVar11 + 0x50) >> 3 == 0)) ||
      (lVar11 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar11 + 0x58) + -8) + 0x428), lVar11 == 0
      )) || (*(int *)(SYSTEM_STATE_MANAGER + 0xc40) == 0)) {
    lVar13 = FUN_1800be610();
    lVar11 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (*(char *)(lVar13 + 900) == '\0') {
      lVar13 = FUN_1800bd5c0();
    }
    lVar10 = lVar16;
    if (((lVar13 != 0) && (lVar13 = FUN_18023a940(), lVar13 != 0)) &&
       ((lVar10 = lVar13, *(int64_t *)(lVar13 + 8) == 0 && (*(int64_t *)(lVar13 + 0x10) == 0)))) {
      lVar10 = 0;
    }
    if (((*(int64_t *)(lVar11 + 0x8508) != lVar10) || (*(int *)(lVar11 + 0x88a0) != -1)) ||
       (*(int *)(lVar11 + 0x8aa0) != 0x10)) {
      if (lVar10 != 0) {
        if ((*(int64_t *)(lVar10 + 8) == 0) && (*(int64_t *)(lVar10 + 0x10) == 0))
        goto LAB_1800cd0dc;
        if (lVar10 != 0) {
          lVar16 = *(int64_t *)(lVar10 + 0x10);
        }
      }
      lStack_140 = lVar16;
      (**(code **)(**(int64_t **)(lVar11 + 0x8400) + 0x40))
                (*(int64_t **)(lVar11 + 0x8400),0x1a,1,&lStack_140);
      *(int64_t *)(lVar11 + 0x8508) = lVar10;
      *(int32_t *)(lVar11 + 0x88a0) = 0xffffffff;
      *(int32_t *)(lVar11 + 0x8aa0) = 0x10;
      *(int *)(lVar11 + 0x82b4) = *(int *)(lVar11 + 0x82b4) + 1;
    }
  }
  else {
    uStack_1f8 = 0xffffffff;
    RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x1a,lVar11,0x10);
  }
LAB_1800cd0dc:
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  if (plStack_138 != (int64_t *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  if (plStack_1c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c8 + 0x38))();
  }
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  if (plStack_130 != (int64_t *)0x0) {
    (**(code **)(*plStack_130 + 0x38))();
  }
  if (plStack_128 != (int64_t *)0x0) {
    (**(code **)(*plStack_128 + 0x38))();
  }
  if (plStack_120 != (int64_t *)0x0) {
    (**(code **)(*plStack_120 + 0x38))();
  }
  if (plStack_118 != (int64_t *)0x0) {
    (**(code **)(*plStack_118 + 0x38))();
  }
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_218);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800cd1b0(uint64_t param_1,int64_t param_2,byte param_3)
void FUN_1800cd1b0(uint64_t param_1,int64_t param_2,byte param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int iVar5;
  uint64_t uVar6;
  
  lVar3 = system_main_module_state;
  uVar4 = 0;
  lVar1 = *(int64_t *)(param_2 + 0x97a0);
  uVar2 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  iVar5 = (uint)param_3 * 0x20 + 0x10;
  uVar6 = uVar4;
  if ((lVar1 != 0) &&
     (*(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar1 != -0x10)) {
    *(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(lVar3 + 0x224);
    uVar6 = *(uint64_t *)(lVar1 + 0x18);
  }
  FUN_18029fb10(uVar2,0x58,uVar6,iVar5);
  lVar3 = system_main_module_state;
  lVar1 = *(int64_t *)(param_2 + 0x97a8);
  uVar2 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  uVar6 = uVar4;
  if ((lVar1 != 0) &&
     (*(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar1 != -0x10)) {
    *(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(lVar3 + 0x224);
    uVar6 = *(uint64_t *)(lVar1 + 0x18);
  }
  FUN_18029fb10(uVar2,0x59,uVar6,iVar5);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x38,*(uint64_t *)(param_2 + 0x97b8),
                iVar5,0xffffffff);
  lVar3 = system_main_module_state;
  lVar1 = *(int64_t *)(param_2 + 0x97b0);
  uVar2 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  if ((lVar1 != 0) &&
     (*(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar1 != -0x10)) {
    uVar4 = *(uint64_t *)(lVar1 + 0x18);
    *(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(lVar3 + 0x224);
  }
  FUN_18029fb10(uVar2,0x57,uVar4,iVar5);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x37,*(uint64_t *)(param_2 + 0x97c0),
                iVar5,0xffffffff);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




