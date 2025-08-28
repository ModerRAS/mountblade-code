#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part361.c - 3 个函数
// 函数: void UISystem_64b38(void)
void UISystem_64b38(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int8_t auVar7 [16];
  int64_t unaff_RBX;
  uint64_t *unaff_RSI;
  int64_t unaff_RDI;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  int8_t in_XMM2 [16];
  int8_t auVar10 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM10_Db;
  float unaff_XMM10_Dc;
  float unaff_XMM10_Dd;
  float unaff_XMM12_Da;
  float fVar17;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  float fStack000000000000002c;
  uint64_t local_var_30;
  uint64_t local_var_38;
  int32_t local_buffer_40;
  int32_t local_buffer_44;
  int32_t local_buffer_48;
  int32_t local_buffer_4c;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  int32_t local_buffer_58;
  int32_t local_buffer_5c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  uint64_t local_buffer_80;
  fVar16 = unaff_XMM12_Da - unaff_XMM9_Da;
  fStack0000000000000060 = fVar16 * fStackX_20 + unaff_XMM9_Da * unaff_XMM10_Da;
  fStack0000000000000064 = fVar16 * fStackX_24 + unaff_XMM9_Da * unaff_XMM10_Db;
  fStack0000000000000068 = fVar16 * fStack0000000000000028 + unaff_XMM9_Da * unaff_XMM10_Dc;
  fStack000000000000006c = fVar16 * fStack000000000000002c + unaff_XMM9_Da * unaff_XMM10_Dd;
  fVar16 = fStack000000000000006c * fStack000000000000006c +
           fStack0000000000000060 * fStack0000000000000060;
  fVar8 = fStack0000000000000068 * fStack0000000000000068 +
          fStack0000000000000064 * fStack0000000000000064;
  fVar14 = fVar16 + fStack0000000000000064 * fStack0000000000000064 +
                    fStack0000000000000068 * fStack0000000000000068;
  fVar15 = fVar8 + fStack0000000000000060 * fStack0000000000000060 +
                   fStack000000000000006c * fStack000000000000006c;
  auVar10._4_4_ = fVar16 + fVar8 + 1.1754944e-38;
  auVar10._0_4_ = fVar8 + fVar16 + 1.1754944e-38;
  auVar10._8_4_ = fVar14 + 1.1754944e-38;
  auVar10._12_4_ = fVar15 + 1.1754944e-38;
  auVar10 = rsqrtps(in_XMM2,auVar10);
  fVar9 = auVar10._0_4_;
  fVar11 = auVar10._4_4_;
  fVar12 = auVar10._8_4_;
  fVar13 = auVar10._12_4_;
  fStack0000000000000060 =
       fStack0000000000000060 * (3.0 - fVar9 * fVar9 * (fVar8 + fVar16)) * fVar9 * 0.5;
  fStack0000000000000064 =
       fStack0000000000000064 * (3.0 - fVar11 * fVar11 * (fVar16 + fVar8)) * fVar11 * 0.5;
  fStack0000000000000068 = fStack0000000000000068 * (3.0 - fVar12 * fVar12 * fVar14) * fVar12 * 0.5;
  fStack000000000000006c = fStack000000000000006c * (3.0 - fVar13 * fVar13 * fVar15) * fVar13 * 0.5;
  fVar16 = fStack000000000000006c * fStack000000000000006c +
           fStack0000000000000060 * fStack0000000000000060;
  fVar8 = fStack0000000000000068 * fStack0000000000000068 +
          fStack0000000000000064 * fStack0000000000000064;
  fVar14 = fVar16 + fStack0000000000000064 * fStack0000000000000064 +
                    fStack0000000000000068 * fStack0000000000000068;
  fVar15 = fVar8 + fStack0000000000000060 * fStack0000000000000060 +
                   fStack000000000000006c * fStack000000000000006c;
  auVar7._4_4_ = fVar16 + fVar8 + 1.1754944e-38;
  auVar7._0_4_ = fVar8 + fVar16 + 1.1754944e-38;
  auVar7._8_4_ = fVar14 + 1.1754944e-38;
  auVar7._12_4_ = fVar15 + 1.1754944e-38;
  auVar10 = rsqrtps(auVar10,auVar7);
  fVar9 = auVar10._0_4_;
  fVar11 = auVar10._4_4_;
  fVar12 = auVar10._8_4_;
  fVar13 = auVar10._12_4_;
  fStack0000000000000060 =
       fStack0000000000000060 * (3.0 - fVar9 * fVar9 * (fVar8 + fVar16)) * fVar9 * 0.5;
  fStack0000000000000064 =
       fStack0000000000000064 * (3.0 - fVar11 * fVar11 * (fVar16 + fVar8)) * fVar11 * 0.5;
  fStack0000000000000068 = fStack0000000000000068 * (3.0 - fVar12 * fVar12 * fVar14) * fVar12 * 0.5;
  fStack000000000000006c = fStack000000000000006c * (3.0 - fVar13 * fVar13 * fVar15) * fVar13 * 0.5;
  SystemSecurityManager(&local_buffer_00000030,&local_buffer_00000060);
  fVar17 = unaff_XMM12_Da - unaff_XMM9_Da;
  fVar16 = *(float *)(unaff_RDI + 0x30);
  fVar8 = *(float *)(unaff_RDI + 0x34);
  fVar9 = *(float *)(unaff_RDI + 200);
  fVar11 = *(float *)(unaff_RBX + 0x30);
  fVar12 = *(float *)(unaff_RBX + 0xc0);
  fVar13 = *(float *)(unaff_RDI + 0x38);
  fVar14 = *(float *)(unaff_RDI + 0xc4);
  fVar15 = *(float *)(unaff_RBX + 0x34);
  fVar1 = *(float *)(unaff_RBX + 0x38);
  fVar2 = *(float *)(unaff_RDI + 0xc0);
  fVar3 = *(float *)(unaff_RDI + 0xcc);
  fVar4 = *(float *)(unaff_RBX + 0xc4);
  fVar5 = *(float *)(unaff_RBX + 200);
  fVar6 = *(float *)(unaff_RBX + 0xcc);
  *(int32_t *)((int64_t)unaff_RSI + 0x44) = 0x3f800000;
  *(int32_t *)(unaff_RSI + 9) = 0x3f800000;
  *(int32_t *)((int64_t)unaff_RSI + 0x4c) = 0x7f7fffff;
  *unaff_RSI = local_var_30;
  unaff_RSI[1] = local_var_38;
  *(int32_t *)(unaff_RSI + 2) = local_buffer_40;
  *(int32_t *)((int64_t)unaff_RSI + 0x14) = local_buffer_44;
  *(int32_t *)(unaff_RSI + 3) = local_buffer_48;
  *(int32_t *)((int64_t)unaff_RSI + 0x1c) = local_buffer_4c;
  *(float *)(unaff_RSI + 8) = fVar17 * fVar12 + unaff_XMM9_Da * fVar2;
  *(float *)((int64_t)unaff_RSI + 0x44) = unaff_XMM9_Da * fVar14 + fVar17 * fVar4;
  *(float *)(unaff_RSI + 9) = unaff_XMM9_Da * fVar9 + fVar17 * fVar5;
  *(float *)((int64_t)unaff_RSI + 0x4c) = fVar17 * fVar6 + unaff_XMM9_Da * fVar3;
  *(int32_t *)(unaff_RSI + 4) = local_buffer_50;
  *(int32_t *)((int64_t)unaff_RSI + 0x24) = local_buffer_54;
  *(int32_t *)(unaff_RSI + 5) = local_buffer_58;
  *(int32_t *)((int64_t)unaff_RSI + 0x2c) = local_buffer_5c;
  *(float *)(unaff_RSI + 6) = fVar17 * fVar11 + unaff_XMM9_Da * fVar16;
  *(float *)((int64_t)unaff_RSI + 0x34) = unaff_XMM9_Da * fVar8 + fVar17 * fVar15;
  *(float *)(unaff_RSI + 7) = unaff_XMM9_Da * fVar13 + fVar17 * fVar1;
  *(int32_t *)((int64_t)unaff_RSI + 0x3c) = 0x7f7fffff;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_80 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UISystem_64bac(void)
void UISystem_64bac(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int64_t unaff_RBX;
  uint64_t *unaff_RSI;
  int64_t unaff_RDI;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  int8_t in_XMM2 [16];
  int8_t auVar10 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_XMM6_Da;
  float unaff_XMM6_Db;
  float unaff_XMM6_Dc;
  float unaff_XMM6_Dd;
  float unaff_XMM9_Da;
  float unaff_XMM12_Da;
  float fVar16;
  uint64_t local_var_30;
  uint64_t local_var_38;
  int32_t local_buffer_40;
  int32_t local_buffer_44;
  int32_t local_buffer_48;
  int32_t local_buffer_4c;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  int32_t local_buffer_58;
  int32_t local_buffer_5c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  uint64_t local_buffer_80;
  fVar7 = unaff_XMM6_Dd * unaff_XMM6_Dd + unaff_XMM6_Da * unaff_XMM6_Da;
  fVar8 = unaff_XMM6_Dc * unaff_XMM6_Dc + unaff_XMM6_Db * unaff_XMM6_Db;
  fVar14 = fVar7 + unaff_XMM6_Db * unaff_XMM6_Db + unaff_XMM6_Dc * unaff_XMM6_Dc;
  fVar15 = fVar8 + unaff_XMM6_Da * unaff_XMM6_Da + unaff_XMM6_Dd * unaff_XMM6_Dd;
  auVar10._4_4_ = fVar7 + fVar8 + 1.1754944e-38;
  auVar10._0_4_ = fVar8 + fVar7 + 1.1754944e-38;
  auVar10._8_4_ = fVar14 + 1.1754944e-38;
  auVar10._12_4_ = fVar15 + 1.1754944e-38;
  auVar10 = rsqrtps(in_XMM2,auVar10);
  fVar9 = auVar10._0_4_;
  fVar11 = auVar10._4_4_;
  fVar12 = auVar10._8_4_;
  fVar13 = auVar10._12_4_;
  fStack0000000000000060 = unaff_XMM6_Da * (3.0 - fVar9 * fVar9 * (fVar8 + fVar7)) * fVar9 * 0.5;
  fStack0000000000000064 = unaff_XMM6_Db * (3.0 - fVar11 * fVar11 * (fVar7 + fVar8)) * fVar11 * 0.5;
  fStack0000000000000068 = unaff_XMM6_Dc * (3.0 - fVar12 * fVar12 * fVar14) * fVar12 * 0.5;
  fStack000000000000006c = unaff_XMM6_Dd * (3.0 - fVar13 * fVar13 * fVar15) * fVar13 * 0.5;
  SystemSecurityManager(&local_buffer_00000030,&local_buffer_00000060);
  fVar16 = unaff_XMM12_Da - unaff_XMM9_Da;
  fVar7 = *(float *)(unaff_RDI + 0x30);
  fVar8 = *(float *)(unaff_RDI + 0x34);
  fVar9 = *(float *)(unaff_RDI + 200);
  fVar11 = *(float *)(unaff_RBX + 0x30);
  fVar12 = *(float *)(unaff_RBX + 0xc0);
  fVar13 = *(float *)(unaff_RDI + 0x38);
  fVar14 = *(float *)(unaff_RDI + 0xc4);
  fVar15 = *(float *)(unaff_RBX + 0x34);
  fVar1 = *(float *)(unaff_RBX + 0x38);
  fVar2 = *(float *)(unaff_RDI + 0xc0);
  fVar3 = *(float *)(unaff_RDI + 0xcc);
  fVar4 = *(float *)(unaff_RBX + 0xc4);
  fVar5 = *(float *)(unaff_RBX + 200);
  fVar6 = *(float *)(unaff_RBX + 0xcc);
  *(int32_t *)((int64_t)unaff_RSI + 0x44) = 0x3f800000;
  *(int32_t *)(unaff_RSI + 9) = 0x3f800000;
  *(int32_t *)((int64_t)unaff_RSI + 0x4c) = 0x7f7fffff;
  *unaff_RSI = local_var_30;
  unaff_RSI[1] = local_var_38;
  *(int32_t *)(unaff_RSI + 2) = local_buffer_40;
  *(int32_t *)((int64_t)unaff_RSI + 0x14) = local_buffer_44;
  *(int32_t *)(unaff_RSI + 3) = local_buffer_48;
  *(int32_t *)((int64_t)unaff_RSI + 0x1c) = local_buffer_4c;
  *(float *)(unaff_RSI + 8) = fVar16 * fVar12 + unaff_XMM9_Da * fVar2;
  *(float *)((int64_t)unaff_RSI + 0x44) = unaff_XMM9_Da * fVar14 + fVar16 * fVar4;
  *(float *)(unaff_RSI + 9) = unaff_XMM9_Da * fVar9 + fVar16 * fVar5;
  *(float *)((int64_t)unaff_RSI + 0x4c) = fVar16 * fVar6 + unaff_XMM9_Da * fVar3;
  *(int32_t *)(unaff_RSI + 4) = local_buffer_50;
  *(int32_t *)((int64_t)unaff_RSI + 0x24) = local_buffer_54;
  *(int32_t *)(unaff_RSI + 5) = local_buffer_58;
  *(int32_t *)((int64_t)unaff_RSI + 0x2c) = local_buffer_5c;
  *(float *)(unaff_RSI + 6) = fVar16 * fVar11 + unaff_XMM9_Da * fVar7;
  *(float *)((int64_t)unaff_RSI + 0x34) = unaff_XMM9_Da * fVar8 + fVar16 * fVar15;
  *(float *)(unaff_RSI + 7) = unaff_XMM9_Da * fVar13 + fVar16 * fVar1;
  *(int32_t *)((int64_t)unaff_RSI + 0x3c) = 0x7f7fffff;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_80 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UISystem_64e90(uint64_t *param_1,uint64_t *param_2,int param_3)
void UISystem_64e90(uint64_t *param_1,uint64_t *param_2,int param_3)
{
  uint64_t uVar1;
  if (param_3 == 0) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar1;
    uVar1 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar1;
    uVar1 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar1;
  }
  else {
    if (param_3 == 1) {
      uVar1 = param_2[1];
      param_1[8] = *param_2;
      param_1[9] = uVar1;
      uVar1 = param_2[3];
      param_1[10] = param_2[2];
      param_1[0xb] = uVar1;
      uVar1 = param_2[5];
      param_1[0xc] = param_2[4];
      param_1[0xd] = uVar1;
      uVar1 = param_2[7];
      param_1[0xe] = param_2[6];
      param_1[0xf] = uVar1;
      *(float *)(param_1 + 0x16) =
           (*(float *)(param_1 + 6) - *(float *)(param_1 + 0xe)) + *(float *)(param_1 + 6);
      *(float *)((int64_t)param_1 + 0xb4) =
           (*(float *)((int64_t)param_1 + 0x34) - *(float *)((int64_t)param_1 + 0x74)) +
           *(float *)((int64_t)param_1 + 0x34);
      *(float *)(param_1 + 0x17) =
           (*(float *)(param_1 + 7) - *(float *)(param_1 + 0xf)) + *(float *)(param_1 + 7);
      *(int32_t *)((int64_t)param_1 + 0xbc) = 0x7f7fffff;
      return;
    }
    if (param_3 == 2) {
      uVar1 = param_2[1];
      param_1[0x10] = *param_2;
      param_1[0x11] = uVar1;
      uVar1 = param_2[3];
      param_1[0x12] = param_2[2];
      param_1[0x13] = uVar1;
      uVar1 = param_2[5];
      param_1[0x14] = param_2[4];
      param_1[0x15] = uVar1;
      uVar1 = param_2[7];
      param_1[0x16] = param_2[6];
      param_1[0x17] = uVar1;
      *(float *)(param_1 + 0xe) =
           (*(float *)(param_1 + 6) - *(float *)(param_1 + 0x16)) + *(float *)(param_1 + 6);
      *(float *)((int64_t)param_1 + 0x74) =
           (*(float *)((int64_t)param_1 + 0x34) - *(float *)((int64_t)param_1 + 0xb4)) +
           *(float *)((int64_t)param_1 + 0x34);
      *(float *)(param_1 + 0xf) =
           (*(float *)(param_1 + 7) - *(float *)(param_1 + 0x17)) + *(float *)(param_1 + 7);
      *(int32_t *)((int64_t)param_1 + 0x7c) = 0x7f7fffff;
      return;
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
UISystem_64ff0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  void *puVar4;
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &ui_system_data_1728_ptr;
  param_1[4] = 0;
  param_1[5] = _guard_check_icall;
  param_1[8] = 0;
  param_1[9] = _guard_check_icall;
  param_1[0xc] = 0;
  param_1[0xd] = _guard_check_icall;
  plVar1 = param_1 + 0xf;
  *plVar1 = (int64_t)&system_state_ptr;
  param_1[0x10] = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  *plVar1 = (int64_t)&memory_allocator_3480_ptr;
  param_1[0x10] = param_1 + 0x12;
  *(int32_t *)(param_1 + 0x11) = 0;
  *(int8_t *)(param_1 + 0x12) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(int32_t *)(param_1 + 0x1d) = 3;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(int32_t *)(param_1 + 0x22) = 3;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(int32_t *)(param_1 + 0x26) = 3;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  puVar2 = param_1 + 0x30;
  param_1[0x33] = 0;
  *(int32_t *)(param_1 + 0x35) = 3;
  *puVar2 = puVar2;
  param_1[0x31] = puVar2;
  param_1[0x32] = 0;
  *(int8_t *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x38] = &system_state_ptr;
  param_1[0x39] = 0;
  *(int32_t *)(param_1 + 0x3a) = 0;
  param_1[0x38] = &memory_allocator_3432_ptr;
  param_1[0x39] = param_1 + 0x3b;
  *(int32_t *)(param_1 + 0x3a) = 0;
  *(int8_t *)(param_1 + 0x3b) = 0;
  *(int32_t *)(param_1 + 0xe) = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&ui_system_data_1400_ptr,&system_state_ptr,param_4,0xfffffffffffffffe);
  param_1[0x37] = param_2;
  *(int32_t *)(param_1 + 0x1e) = 0;
  *(int32_t *)(param_1 + 0x36) = 0;
  UISystem_68810(param_1);
  *(int32_t *)(param_1 + 0x2e) = 0;
  *(int8_t *)((int64_t)param_1 + 0x1b4) = 1;
  lVar3 = render_system_data_config;
  *(int32_t *)(param_1 + 0x3a) = *(int32_t *)(render_system_data_config + 0x10);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(lVar3 + 8) != (void *)0x0) {
    puVar4 = *(void **)(lVar3 + 8);
  }
  strcpy_s(param_1[0x39],0x80,puVar4);
  *(int32_t *)((int64_t)param_1 + 0x174) = 0xffffffff;
  *(int8_t *)(param_1 + 0x2f) = 0xff;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * UISystem_65210(uint64_t *param_1,int64_t param_2,uint64_t param_3)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  void *puVar4;
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &ui_system_data_1728_ptr;
  param_1[4] = 0;
  param_1[5] = _guard_check_icall;
  param_1[8] = 0;
  param_1[9] = _guard_check_icall;
  param_1[0xc] = 0;
  param_1[0xd] = _guard_check_icall;
  plVar1 = param_1 + 0xf;
  *plVar1 = (int64_t)&system_state_ptr;
  param_1[0x10] = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  *plVar1 = (int64_t)&memory_allocator_3480_ptr;
  param_1[0x10] = param_1 + 0x12;
  *(int32_t *)(param_1 + 0x11) = 0;
  *(int8_t *)(param_1 + 0x12) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(int32_t *)(param_1 + 0x1d) = 3;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(int32_t *)(param_1 + 0x22) = 3;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(int32_t *)(param_1 + 0x26) = 3;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  puVar2 = param_1 + 0x30;
  param_1[0x33] = 0;
  *(int32_t *)(param_1 + 0x35) = 3;
  *puVar2 = puVar2;
  param_1[0x31] = puVar2;
  param_1[0x32] = 0;
  *(int8_t *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x38] = &system_state_ptr;
  param_1[0x39] = 0;
  *(int32_t *)(param_1 + 0x3a) = 0;
  param_1[0x38] = &memory_allocator_3432_ptr;
  param_1[0x39] = param_1 + 0x3b;
  *(int32_t *)(param_1 + 0x3a) = 0;
  *(int8_t *)(param_1 + 0x3b) = 0;
  *(int32_t *)(param_1 + 0xe) = 0;
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar4 = *(void **)(param_2 + 8);
  }
  (**(code **)(*plVar1 + 0x10))
            (plVar1,puVar4,*(code **)(*plVar1 + 0x10),&system_state_ptr,0xfffffffffffffffe);
  *(int32_t *)(param_1 + 0x1e) = 0;
  *(int32_t *)(param_1 + 0x36) = 0;
  param_1[0x37] = param_3;
  UISystem_68810(param_1);
  *(int32_t *)(param_1 + 0x2e) = 0;
  *(int8_t *)((int64_t)param_1 + 0x1b4) = 1;
  lVar3 = render_system_data_config;
  *(int32_t *)(param_1 + 0x3a) = *(int32_t *)(render_system_data_config + 0x10);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(lVar3 + 8) != (void *)0x0) {
    puVar4 = *(void **)(lVar3 + 8);
  }
  strcpy_s(param_1[0x39],0x80,puVar4);
  *(int32_t *)((int64_t)param_1 + 0x174) = 0xffffffff;
  *(int8_t *)(param_1 + 0x2f) = 0xff;
  return param_1;
}
float UISystem_65460(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  uint uVar9;
  uint64_t uVar10;
  uint uVar11;
  float fVar13;
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
  int iVar12;
  lVar1 = *(int64_t *)(param_1 + 0xd0);
  uVar10 = 0;
  fVar25 = 0.0;
  iVar12 = (int)(*(int64_t *)(param_1 + 0xd8) - lVar1 >> 3);
  uVar11 = iVar12 - 1;
  if (3 < uVar11) {
    plVar8 = (int64_t *)(lVar1 + 0x10);
    uVar9 = 2;
    uVar6 = (iVar12 - 5U >> 2) + 1;
    uVar7 = (uint64_t)uVar6;
    uVar10 = (uint64_t)(uVar6 * 4);
    do {
      lVar2 = plVar8[-2];
      lVar3 = *(int64_t *)(lVar1 + (uint64_t)(uVar9 - 1) * 8);
      fVar14 = *(float *)(lVar2 + 0x34) - *(float *)(lVar3 + 0x34);
      fVar24 = *(float *)(lVar2 + 0x30) - *(float *)(lVar3 + 0x30);
      fVar22 = *(float *)(lVar2 + 0x38) - *(float *)(lVar3 + 0x38);
      lVar2 = plVar8[-1];
      lVar3 = *(int64_t *)(lVar1 + (uint64_t)uVar9 * 8);
      lVar4 = *plVar8;
      fVar13 = *(float *)(lVar2 + 0x38) - *(float *)(lVar3 + 0x38);
      fVar23 = *(float *)(lVar2 + 0x34) - *(float *)(lVar3 + 0x34);
      lVar5 = *(int64_t *)(lVar1 + (uint64_t)(uVar9 + 1) * 8);
      fVar21 = *(float *)(lVar2 + 0x30) - *(float *)(lVar3 + 0x30);
      fVar20 = *(float *)(lVar4 + 0x34) - *(float *)(lVar5 + 0x34);
      fVar19 = *(float *)(lVar4 + 0x30) - *(float *)(lVar5 + 0x30);
      fVar17 = *(float *)(lVar4 + 0x38) - *(float *)(lVar5 + 0x38);
      lVar2 = plVar8[1];
      lVar3 = *(int64_t *)(lVar1 + (uint64_t)(uVar9 + 2) * 8);
      plVar8 = plVar8 + 4;
      uVar9 = uVar9 + 4;
      fVar18 = *(float *)(lVar2 + 0x34) - *(float *)(lVar3 + 0x34);
      fVar16 = *(float *)(lVar2 + 0x30) - *(float *)(lVar3 + 0x30);
      fVar15 = *(float *)(lVar2 + 0x38) - *(float *)(lVar3 + 0x38);
      fVar25 = SQRT(fVar24 * fVar24 + fVar14 * fVar14 + fVar22 * fVar22) + fVar25 +
               SQRT(fVar23 * fVar23 + fVar21 * fVar21 + fVar13 * fVar13) +
               SQRT(fVar20 * fVar20 + fVar19 * fVar19 + fVar17 * fVar17) +
               SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar15 * fVar15);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if ((uint)uVar10 < uVar11) {
    plVar8 = (int64_t *)(lVar1 + uVar10 * 8);
    do {
      lVar2 = *plVar8;
      uVar6 = (int)uVar10 + 1;
      uVar10 = (uint64_t)uVar6;
      plVar8 = plVar8 + 1;
      lVar3 = *(int64_t *)(lVar1 + uVar10 * 8);
      fVar15 = *(float *)(lVar2 + 0x34) - *(float *)(lVar3 + 0x34);
      fVar13 = *(float *)(lVar2 + 0x38) - *(float *)(lVar3 + 0x38);
      fVar14 = *(float *)(lVar2 + 0x30) - *(float *)(lVar3 + 0x30);
      fVar25 = fVar25 + SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13);
    } while (uVar6 < uVar11);
  }
  return fVar25;
}
float UISystem_65495(uint64_t param_1,uint64_t param_2,int param_3,uint param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint uVar5;
  int64_t in_RAX;
  uint64_t unaff_RBX;
  uint64_t uVar6;
  uint64_t unaff_RSI;
  int64_t *plVar7;
  uint uVar8;
  uint64_t unaff_RDI;
  uint64_t uVar9;
  int64_t in_R10;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int32_t unaff_XMM6_Da;
  float fVar16;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  float fVar17;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar18;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar19;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  float fVar20;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  float fVar21;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  float unaff_XMM12_Da;
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  plVar7 = (int64_t *)(in_R10 + 0x10);
  *(uint64_t *)(in_RAX + -8) = unaff_RDI;
  uVar8 = param_3 + 2;
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x28) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x24) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x20) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x1c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM10_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM11_Dd;
  uVar5 = (param_4 - 4 >> 2) + 1;
  uVar6 = (uint64_t)uVar5;
  uVar5 = uVar5 * 4;
  uVar9 = (uint64_t)uVar5;
  do {
    lVar1 = plVar7[-2];
    lVar2 = *(int64_t *)(in_R10 + (uint64_t)(uVar8 - 1) * 8);
    fVar11 = *(float *)(lVar1 + 0x34) - *(float *)(lVar2 + 0x34);
    fVar21 = *(float *)(lVar1 + 0x30) - *(float *)(lVar2 + 0x30);
    fVar19 = *(float *)(lVar1 + 0x38) - *(float *)(lVar2 + 0x38);
    lVar1 = plVar7[-1];
    lVar2 = *(int64_t *)(in_R10 + (uint64_t)uVar8 * 8);
    lVar3 = *plVar7;
    fVar10 = *(float *)(lVar1 + 0x38) - *(float *)(lVar2 + 0x38);
    fVar20 = *(float *)(lVar1 + 0x34) - *(float *)(lVar2 + 0x34);
    lVar4 = *(int64_t *)(in_R10 + (uint64_t)(uVar8 + 1) * 8);
    fVar18 = *(float *)(lVar1 + 0x30) - *(float *)(lVar2 + 0x30);
    fVar17 = *(float *)(lVar3 + 0x34) - *(float *)(lVar4 + 0x34);
    fVar16 = *(float *)(lVar3 + 0x30) - *(float *)(lVar4 + 0x30);
    fVar14 = *(float *)(lVar3 + 0x38) - *(float *)(lVar4 + 0x38);
    lVar1 = plVar7[1];
    lVar2 = *(int64_t *)(in_R10 + (uint64_t)(uVar8 + 2) * 8);
    plVar7 = plVar7 + 4;
    uVar8 = uVar8 + 4;
    fVar15 = *(float *)(lVar1 + 0x34) - *(float *)(lVar2 + 0x34);
    fVar13 = *(float *)(lVar1 + 0x30) - *(float *)(lVar2 + 0x30);
    fVar12 = *(float *)(lVar1 + 0x38) - *(float *)(lVar2 + 0x38);
    unaff_XMM12_Da =
         SQRT(fVar21 * fVar21 + fVar11 * fVar11 + fVar19 * fVar19) + unaff_XMM12_Da +
         SQRT(fVar20 * fVar20 + fVar18 * fVar18 + fVar10 * fVar10) +
         SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar14 * fVar14) +
         SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar12 * fVar12);
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  if (uVar5 < param_4) {
    plVar7 = (int64_t *)(in_R10 + uVar9 * 8);
    do {
      lVar1 = *plVar7;
      uVar5 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar5;
      plVar7 = plVar7 + 1;
      lVar2 = *(int64_t *)(in_R10 + uVar9 * 8);
      fVar12 = *(float *)(lVar1 + 0x34) - *(float *)(lVar2 + 0x34);
      fVar10 = *(float *)(lVar1 + 0x38) - *(float *)(lVar2 + 0x38);
      fVar11 = *(float *)(lVar1 + 0x30) - *(float *)(lVar2 + 0x30);
      unaff_XMM12_Da = unaff_XMM12_Da + SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10);
    } while (uVar5 < param_4);
  }
  return unaff_XMM12_Da;
}
float UISystem_65660(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  int64_t in_R10;
  int64_t *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_XMM12_Da;
  if ((uint)param_3 < param_4) {
    plVar4 = (int64_t *)(in_R10 + param_3 * 8);
    do {
      lVar1 = *plVar4;
      uVar3 = (int)param_3 + 1;
      param_3 = (uint64_t)uVar3;
      plVar4 = plVar4 + 1;
      lVar2 = *(int64_t *)(in_R10 + param_3 * 8);
      fVar7 = *(float *)(lVar1 + 0x34) - *(float *)(lVar2 + 0x34);
      fVar5 = *(float *)(lVar1 + 0x38) - *(float *)(lVar2 + 0x38);
      fVar6 = *(float *)(lVar1 + 0x30) - *(float *)(lVar2 + 0x30);
      unaff_XMM12_Da = unaff_XMM12_Da + SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
    } while (uVar3 < param_4);
  }
  return unaff_XMM12_Da;
}
uint64_t * UISystem_656d0(int64_t param_1,uint64_t *param_2,float param_3)
{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int iVar15;
  uint64_t uVar16;
  int64_t lVar17;
  uint64_t uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  fVar19 = (float)UISystem_65460();
  if (param_3 < fVar19) {
    plVar2 = *(int64_t **)(param_1 + 0xd0);
    uVar18 = 0;
    lVar3 = *plVar2;
    lVar4 = plVar2[1];
    lVar17 = *(int64_t *)(param_1 + 0xd8) - (int64_t)plVar2 >> 3;
    fVar24 = 0.0;
    fVar22 = *(float *)(lVar3 + 0x34) - *(float *)(lVar4 + 0x34);
    fVar20 = *(float *)(lVar3 + 0x30) - *(float *)(lVar4 + 0x30);
    fVar19 = *(float *)(lVar3 + 0x38) - *(float *)(lVar4 + 0x38);
    fVar19 = SQRT(fVar22 * fVar22 + fVar20 * fVar20 + fVar19 * fVar19);
    if (lVar17 != 1) {
      uVar16 = 1;
      do {
        iVar15 = (int)uVar16;
        if (param_3 <= fVar19) {
          lVar3 = plVar2[uVar18 & 0xffffffff];
          lVar4 = plVar2[uVar16];
          fVar22 = *(float *)(lVar3 + 0x34) - *(float *)(lVar4 + 0x34);
          fVar19 = *(float *)(lVar3 + 0x38) - *(float *)(lVar4 + 0x38);
          fVar20 = *(float *)(lVar3 + 0x30) - *(float *)(lVar4 + 0x30);
          UISystem_66610(param_1,param_2,
                        (param_3 - fVar24) /
                        SQRT(fVar22 * fVar22 + fVar20 * fVar20 + fVar19 * fVar19),
                        uVar18 & 0xffffffff);
          return param_2;
        }
        lVar3 = plVar2[uVar16];
        lVar4 = plVar2[iVar15 + 1];
        fVar22 = *(float *)(lVar3 + 0x30) - *(float *)(lVar4 + 0x30);
        fVar23 = *(float *)(lVar3 + 0x34) - *(float *)(lVar4 + 0x34);
        fVar20 = *(float *)(lVar3 + 0x38) - *(float *)(lVar4 + 0x38);
        uVar14 = uVar18 & 0xffffffff;
        uVar18 = (uint64_t)iVar15;
        uVar16 = (uint64_t)(iVar15 + 1);
        lVar4 = plVar2[uVar14];
        fVar21 = *(float *)(lVar4 + 0x30) - *(float *)(lVar3 + 0x30);
        fVar19 = fVar19 + SQRT(fVar23 * fVar23 + fVar22 * fVar22 + fVar20 * fVar20);
        fVar22 = *(float *)(lVar4 + 0x34) - *(float *)(lVar3 + 0x34);
        fVar20 = *(float *)(lVar4 + 0x38) - *(float *)(lVar3 + 0x38);
        fVar24 = fVar24 + SQRT(fVar22 * fVar22 + fVar21 * fVar21 + fVar20 * fVar20);
      } while (uVar18 < lVar17 - 1U);
    }
    puVar1 = (uint64_t *)plVar2[(int64_t)(int)lVar17 + -1];
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    uVar8 = puVar1[4];
    uVar9 = puVar1[5];
    uVar10 = puVar1[6];
    uVar11 = puVar1[7];
    uVar12 = puVar1[0x18];
    uVar13 = puVar1[0x19];
    *param_2 = *puVar1;
    param_2[1] = uVar5;
    param_2[2] = uVar6;
    param_2[3] = uVar7;
    param_2[4] = uVar8;
    param_2[5] = uVar9;
    param_2[6] = uVar10;
    param_2[7] = uVar11;
    param_2[8] = uVar12;
    param_2[9] = uVar13;
  }
  else {
    puVar1 = *(uint64_t **)
              (*(int64_t *)(param_1 + 0xd0) + -8 +
              (int64_t)(int)(*(int64_t *)(param_1 + 0xd8) - *(int64_t *)(param_1 + 0xd0) >> 3) *
              8);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    uVar8 = puVar1[4];
    uVar9 = puVar1[5];
    uVar10 = puVar1[6];
    uVar11 = puVar1[7];
    uVar12 = puVar1[0x18];
    uVar13 = puVar1[0x19];
    *param_2 = *puVar1;
    param_2[1] = uVar5;
    param_2[2] = uVar6;
    param_2[3] = uVar7;
    param_2[4] = uVar8;
    param_2[5] = uVar9;
    param_2[6] = uVar10;
    param_2[7] = uVar11;
    param_2[8] = uVar12;
    param_2[9] = uVar13;
  }
  return param_2;
}