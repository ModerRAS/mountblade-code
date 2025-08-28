/* SystemController - SystemPhysicsEngine 的语义化别名 */
#define SystemController SystemPhysicsEngine
#include "TaleWorlds.Native.Split.h"
// 99_part_09_part061.c - 2 个函数
// 函数: void NetworkSystem_df120(int64_t param_1)
void NetworkSystem_df120(int64_t param_1)
{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  char cVar4;
  int iVar5;
  int32_t uVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  float *pfVar9;
  int64_t lVar10;
  int iVar11;
  uint64_t uVar12;
  int64_t lVar13;
  float *pfVar14;
  int64_t lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int8_t auVar21 [16];
  float fVar22;
  int32_t astack_special_x_18 [2];
  uint64_t stack_special_x_20;
  uint64_t **ppuVar23;
  uint64_t local_var_228;
  float fStack_218;
  float fStack_214;
  int64_t lStack_210;
  int32_t local_var_208;
  int64_t lStack_200;
  int64_t lStack_1f8;
  float fStack_1f0;
  float fStack_1ec;
  uint64_t local_var_1e8;
  uint64_t *plocal_var_1e0;
  float *pfStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  int64_t lStack_1c0;
  int64_t lStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  int32_t local_var_194;
  uint64_t local_var_188;
  uint64_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  uint64_t local_var_168;
  uint64_t local_var_160;
  uint64_t local_var_158;
  uint64_t local_var_150;
  int32_t local_var_148;
  int8_t stack_array_138 [8];
  int8_t stack_array_130 [8];
  int8_t stack_array_128 [8];
  int8_t stack_array_120 [8];
  int8_t stack_array_118 [32];
  int8_t stack_array_f8 [184];
  lVar7 = **(int64_t **)(param_1 + 0x20);
  lVar13 = lVar7;
  if (((*(uint *)(lVar7 + 0x56c) & 0x2000) != 0) && (-1 < *(int *)(lVar7 + 0x564))) {
    lVar10 = (int64_t)*(int *)(lVar7 + 0x564) * 0xa60;
    if (*(int *)(lVar10 + 0x3608 + *(int64_t *)(lVar7 + 0x8d8)) == 1) {
      lVar13 = *(int64_t *)(lVar7 + 0x8d8) + 0x30a0 + lVar10;
    }
  }
  lVar10 = param_1 + 0x28;
  fVar17 = *(float *)(param_1 + 0x1c) * 1.1;
  pfVar14 = (float *)(*(int64_t *)(lVar13 + 0x20) + 0xc);
  if (1.0 <= fVar17) {
    fVar17 = 1.0;
  }
  local_var_208 = 0;
  *(float *)(param_1 + 0x1c) = fVar17;
  lStack_200 = lVar13;
  lStack_1f8 = lVar7;
  pfStack_1d8 = pfVar14;
  fVar17 = (float)SystemFunction_000180507a40();
  if ((fVar17 < *(float *)(lVar10 + 0x68) || fVar17 == *(float *)(lVar10 + 0x68)) ||
     (cVar4 = SystemFunction_000180522f60(lVar7), cVar4 != '\0')) {
    if (*(int *)(param_1 + 0x98) != 0) {
      *(int32_t *)(param_1 + 0x98) = 0;
      if (*(int64_t *)(lVar7 + 0x738) != 0) {
        *(int32_t *)(*(int64_t *)(lVar7 + 0x738) + 0x19c) = 0;
      }
    }
    return;
  }
  lVar10 = *(int64_t *)(lVar7 + 0x8d8);
  iVar1 = *(int *)(lVar7 + 0x5f8);
  lStack_1c0 = lVar10;
  if (iVar1 == 0) {
    NetworkSystem_e0720(param_1);
    if ((*(float *)(param_1 + 0x11a0) == 0.0) &&
       (((lVar7 = *(int64_t *)(lStack_1f8 + 0x20), *(float *)(lVar7 + 0x24) != 0.0 ||
         (*(float *)(lVar7 + 0x28) != 0.0)) || (*(float *)(lVar7 + 0x2c) != 0.0)))) {
// WARNING: Subroutine does not return
      AdvancedSystemController(*(int32_t *)(lVar7 + 0x34));
    }
    lVar7 = lStack_1f8;
    lVar13 = lStack_200;
    pfVar14 = pfStack_1d8;
    if (*(float *)(param_1 + 0x11a0) == 1.0) {
      *(uint64_t *)(param_1 + 0xd8) = 0xffffffffffffffff;
    }
  }
  if (*(char *)(param_1 + 0x1147) == '\0') {
    if (((*(int *)(lVar7 + 0x5f8) == 0) &&
        ((*(byte *)(*(int64_t *)(lVar13 + 0x20) + 0x40) & 1) != 0)) &&
       (cVar4 = SystemFunction_000180522f60(lVar13), cVar4 == '\0')) {
      NetworkSystem_e6940(param_1,stack_array_138,&system_data_f0c8);
      NetworkSystem_e5240(param_1,stack_array_130);
      goto LAB_1805df643;
    }
  }
  else {
    iVar11 = *(int *)(param_1 + 0x1140);
    lVar7 = param_1 + 0x118;
    uVar12 = (uint64_t)*(byte *)(param_1 + 0x113c);
    while( true ) {
      if ((char)uVar12 == '\0') {
        iVar5 = (int)(*(int64_t *)(param_1 + 0x1120) - *(int64_t *)(param_1 + 0x1118) >> 5);
      }
      else {
        iVar5 = *(int *)(param_1 + 0x1138);
      }
      if (iVar5 <= iVar11) goto LAB_1805df623;
      lVar13 = lVar7;
      if ((char)uVar12 == '\0') {
        lVar13 = *(int64_t *)(param_1 + 0x1118);
      }
      lVar13 = *(int64_t *)(lVar13 + 0x10 + (int64_t)iVar11 * 0x20);
      if (((lVar13 != 0) && ((*(byte *)(lVar13 + 0x139) & 4) != 0)) &&
         (cVar4 = SystemFunction_00018038b3c0(lVar13), cVar4 != '\0')) break;
      iVar11 = iVar11 + 1;
    }
    fVar18 = pfVar14[1] - *(float *)(lVar13 + 0xec);
    fVar19 = *pfVar14 - *(float *)(lVar13 + 0xe8);
    bVar16 = *(char *)(*(int64_t *)(lVar13 + 0x60) + 0x20) != '\x02';
    fVar17 = pfVar14[2] - *(float *)(lVar13 + 0xf0);
    lVar7 = 0x60;
    if (bVar16) {
      lVar7 = 0x68;
    }
    pfVar14 = (float *)**(uint64_t **)(lVar7 + lVar13);
    pfVar9 = (float *)(*(uint64_t **)(lVar7 + lVar13))[1];
    lVar7 = 0x70;
    if (bVar16) {
      lVar7 = 0x78;
    }
    pfVar2 = (float *)**(uint64_t **)(lVar7 + lVar13);
    pfVar3 = (float *)(*(uint64_t **)(lVar7 + lVar13))[1];
    fVar22 = (pfVar2[1] + pfVar3[1]) * 0.5 - (pfVar14[1] + pfVar9[1]) * 0.5;
    fVar20 = (*pfVar3 + *pfVar2) * 0.5 - (*pfVar9 + *pfVar14) * 0.5;
    if (fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17 <
        (fVar20 * fVar20 + fVar22 * fVar22) * 9.0) {
      fStack_214 = (float)((uint64_t)*(uint64_t *)(lVar13 + 0xd0) >> 0x20);
      fStack_218 = (float)*(uint64_t *)(lVar13 + 0xd0);
      fVar17 = fStack_214 * fStack_214 + fStack_218 * fStack_218;
      auVar21 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
      fVar20 = auVar21._0_4_;
      fVar22 = fVar20 * 0.5 * (3.0 - fVar17 * fVar20 * fVar20);
      fVar17 = fVar18 * fVar18 + fVar19 * fVar19;
      auVar21 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
      fVar20 = auVar21._0_4_;
      fVar17 = fVar20 * 0.5 * (3.0 - fVar17 * fVar20 * fVar20);
      fStack_1d0 = fVar19;
      fStack_1cc = fVar18;
      if (0.5 < fVar18 * fVar17 * fStack_214 * fVar22 + fVar19 * fVar17 * fStack_218 * fVar22)
      goto LAB_1805dfa06;
    }
LAB_1805df623:
    if (iVar1 != 0) goto LAB_1805dfa06;
    NetworkSystem_e5240(param_1,stack_array_128);
    lVar10 = lStack_1c0;
LAB_1805df643:
    local_var_208 = 0;
  }
  if ((((iVar1 == 0) && (NetworkSystem_e7010(param_1,stack_array_120,&lStack_210), lStack_210 != 0)) &&
      (cVar4 = SystemFunction_000180522f60(lStack_1f8), cVar4 == '\0')) &&
     (*(char *)(param_1 + 0x1147) == '\0')) {
    lVar7 = *(int64_t *)(lVar10 + 0x18);
    lVar15 = lVar7 + 0x2a68;
    lVar13 = *(int64_t *)(lStack_200 + 0x20);
    fStack_1a0 = *(float *)(lVar13 + 0x24) * 0.2 + *(float *)(param_1 + 0x2c);
    fStack_19c = *(float *)(lVar13 + 0x28) * 0.2 + *(float *)(param_1 + 0x30);
    fStack_198 = *(float *)(lVar13 + 0x2c) * 0.2 + *(float *)(param_1 + 0x34);
    local_var_194 = 0x7f7fffff;
    uVar6 = RenderingSystem_965f0(lVar15);
    stack_special_x_20 = CONCAT44(stack_special_x_20._4_4_,uVar6);
    RenderingSystem_8de80(lVar15,uVar6);
    ppuVar23 = &plocal_var_1e0;
    lVar13 = (int64_t)(int)(float)stack_special_x_20;
    local_var_228 = 0;
    astack_special_x_18[0] = 0x7149f2ca;
    plocal_var_1e0 = (uint64_t *)0x0;
    RenderingSystem_95c50(lVar15,&fStack_1a0,lStack_210,stack_special_x_20 & 0xffffffff,astack_special_x_18,ppuVar23);
    if (plocal_var_1e0 != (uint64_t *)0x0) {
      puVar8 = (uint64_t *)RenderingSystem_8a230(stack_array_118,*plocal_var_1e0,plocal_var_1e0[1],&fStack_1a0);
      local_var_228 = *puVar8;
    }
    pfVar14 = pfStack_1d8;
    *(int32_t *)(lVar7 + 0x2fe0 + lVar13 * 4) = 0;
    if ((((float)local_var_228 != 0.0) || (local_var_228._4_4_ != 0.0)) &&
       (((float)local_var_228 != *(float *)(param_1 + 0x2c) ||
        (local_var_228._4_4_ != *(float *)(param_1 + 0x30))))) {
      fStack_1f0 = (float)local_var_228 - *pfStack_1d8;
      fStack_1ec = local_var_228._4_4_ - pfStack_1d8[1];
      local_var_1e8 = CONCAT44(fStack_1ec,fStack_1f0);
      fVar19 = fStack_1ec * fStack_1ec + fStack_1f0 * fStack_1f0;
      auVar21 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
      fVar20 = auVar21._0_4_;
      fVar17 = *(float *)(*(int64_t *)(lStack_200 + 0x20) + 0x90) * 0.5;
      fVar18 = *(float *)(param_1 + 0x90) * 1.212;
      if (fVar17 <= fVar18) {
        fVar17 = fVar18;
      }
      fVar18 = fVar20 * 0.5 * (3.0 - fVar19 * fVar20 * fVar20);
      stack_special_x_20 = CONCAT44(fVar18 * fStack_1ec * fVar17,fVar18 * fStack_1f0 * fVar17);
      cVar4 = RenderingSystem_944c0(*(int64_t *)(lVar10 + 0x18) + 0x2a68,
                            *(uint64_t *)(**(int64_t **)(param_1 + 0x20) + 0x9d8),0,pfStack_1d8,
                            &stack_special_x_20,(uint64_t)ppuVar23 & 0xffffffffffffff00,
                            *(int32_t *)(*(int64_t *)(lStack_200 + 0x20) + 0x1d0),0,0,0,
                            &lStack_1a8);
      if (cVar4 == '\0') {
        if (lStack_1a8 != 0) {
          pfVar9 = (float *)RenderingSystem_8bc40(lStack_1a8,stack_array_f8,pfVar14,&stack_special_x_20);
          fVar17 = *pfVar9 - *pfVar14;
          fVar18 = pfVar9[1] - pfVar14[1];
          stack_special_x_20 = CONCAT44(fVar18,fVar17);
          if (*(float *)(param_1 + 0x90) * *(float *)(param_1 + 0x90) * 1.4689441 <
              fVar18 * fVar18 + fVar17 * fVar17) {
            *(uint64_t *)(param_1 + 0x3c) = CONCAT44(pfVar14[1] + fVar18,*pfVar14 + fVar17);
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffd0f;
          }
        }
      }
      else {
        *(uint64_t *)(param_1 + 0x3c) =
             CONCAT44(stack_special_x_20._4_4_ + pfVar14[1],(float)stack_special_x_20 + *pfVar14);
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffd0f;
      }
    }
  }
LAB_1805dfa06:
  local_var_170 = 0;
  local_var_168 = 0;
  local_var_150 = 0;
  local_var_160 = 0;
  local_var_158 = 0;
  local_var_188 = 0;
  local_var_180 = 0;
  local_var_178 = 0;
  local_var_148 = 0;
// WARNING: Subroutine does not return
  AdvancedSystemController(*(int32_t *)(*(int64_t *)(lStack_200 + 0x20) + 0x34));
}
// 函数: void NetworkSystem_df13b(void)
void NetworkSystem_df13b(void)
{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  char cVar4;
  int iVar5;
  int64_t *in_RAX;
  int64_t lVar6;
  uint64_t *puVar7;
  float *pfVar8;
  int64_t lVar9;
  uint64_t *unaff_RBP;
  int iVar10;
  uint64_t uVar11;
  int64_t lVar12;
  float *pfVar13;
  int64_t unaff_R12;
  int64_t lVar14;
  bool bVar15;
  float fVar16;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  int32_t uVar17;
  float extraout_XMM0_Da_01;
  float fVar18;
  float fVar19;
  float fVar20;
  int8_t auVar21 [16];
  float fVar22;
  float fVar23;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  int64_t local_buffer_78;
  int32_t local_var_1e0;
  int32_t local_var_1e8;
  int32_t local_var_1f0;
  int32_t local_var_1f8;
  int32_t local_var_200;
  int32_t local_var_208;
  int32_t local_var_210;
  int32_t local_var_218;
  lVar6 = *in_RAX;
  unaff_RBP[-0xe] = lVar6;
  lVar12 = lVar6;
  if (((*(uint *)(lVar6 + 0x56c) & 0x2000) != 0) && (-1 < *(int *)(lVar6 + 0x564))) {
    lVar9 = (int64_t)*(int *)(lVar6 + 0x564) * 0xa60;
    if (*(int *)(lVar9 + 0x3608 + *(int64_t *)(lVar6 + 0x8d8)) == 1) {
      lVar12 = *(int64_t *)(lVar6 + 0x8d8) + 0x30a0 + lVar9;
    }
  }
  lVar9 = unaff_R12 + 0x28;
  fVar16 = *(float *)(unaff_R12 + 0x1c) * 1.1;
  pfVar13 = (float *)(*(int64_t *)(lVar12 + 0x20) + 0xc);
  unaff_RBP[-0xf] = lVar12;
  unaff_RBP[-10] = pfVar13;
  if (1.0 <= fVar16) {
    fVar16 = 1.0;
  }
  *(int8_t *)(unaff_RBP + 0x33) = 0;
  *(int32_t *)(unaff_RBP + -0x10) = 0;
  *(int32_t *)(unaff_RBP + 0x32) = 0;
  *(float *)(unaff_R12 + 0x1c) = fVar16;
  fVar16 = (float)SystemFunction_000180507a40();
  if ((fVar16 < *(float *)(lVar9 + 0x68) || fVar16 == *(float *)(lVar9 + 0x68)) ||
     (cVar4 = SystemFunction_000180522f60(lVar6), cVar4 != '\0')) {
    if (*(int *)(unaff_R12 + 0x98) != 0) {
      *(int32_t *)(unaff_R12 + 0x98) = 0;
      if (*(int64_t *)(lVar6 + 0x738) != 0) {
        *(int32_t *)(*(int64_t *)(lVar6 + 0x738) + 0x19c) = 0;
      }
    }
    return;
  }
  lVar9 = *(int64_t *)(lVar6 + 0x8d8);
  iVar1 = *(int *)(lVar6 + 0x5f8);
  unaff_RBP[-7] = lVar9;
  fVar16 = extraout_XMM0_Da;
  if (iVar1 == 0) {
    NetworkSystem_e0720();
    fVar16 = *(float *)(unaff_R12 + 0x11a0);
    lVar6 = unaff_RBP[-0xe];
    if ((fVar16 == 0.0) &&
       (((lVar12 = *(int64_t *)(lVar6 + 0x20), *(float *)(lVar12 + 0x24) != 0.0 ||
         (*(float *)(lVar12 + 0x28) != 0.0)) || (*(float *)(lVar12 + 0x2c) != 0.0)))) {
// WARNING: Subroutine does not return
      AdvancedSystemController(*(int32_t *)(lVar12 + 0x34));
    }
    if (fVar16 == 1.0) {
      *(uint64_t *)(unaff_R12 + 0xd8) = 0xffffffffffffffff;
    }
    pfVar13 = (float *)unaff_RBP[-10];
    lVar12 = unaff_RBP[-0xf];
  }
  if (*(char *)(unaff_R12 + 0x1147) == '\0') {
    if (((*(int *)(lVar6 + 0x5f8) == 0) &&
        ((*(byte *)(*(int64_t *)(lVar12 + 0x20) + 0x40) & 1) != 0)) &&
       (cVar4 = SystemFunction_000180522f60(lVar12), fVar16 = extraout_XMM0_Da_00, cVar4 == '\0')) {
      uVar17 = NetworkSystem_e6940(extraout_XMM0_Da_00,unaff_RBP + 10,&system_data_f0c8);
      fVar16 = (float)NetworkSystem_e5240(uVar17,unaff_RBP + 0xb);
      goto LAB_1805df643;
    }
  }
  else {
    iVar10 = *(int *)(unaff_R12 + 0x1140);
    lVar6 = unaff_R12 + 0x118;
    uVar11 = (uint64_t)*(byte *)(unaff_R12 + 0x113c);
    while( true ) {
      if ((char)uVar11 == '\0') {
        iVar5 = (int)(*(int64_t *)(unaff_R12 + 0x1120) - *(int64_t *)(unaff_R12 + 0x1118) >> 5);
      }
      else {
        iVar5 = *(int *)(unaff_R12 + 0x1138);
      }
      if (iVar5 <= iVar10) goto LAB_1805df623;
      lVar12 = lVar6;
      if ((char)uVar11 == '\0') {
        lVar12 = *(int64_t *)(unaff_R12 + 0x1118);
      }
      lVar12 = *(int64_t *)(lVar12 + 0x10 + (int64_t)iVar10 * 0x20);
      if (((lVar12 != 0) && ((*(byte *)(lVar12 + 0x139) & 4) != 0)) &&
         (cVar4 = SystemFunction_00018038b3c0(lVar12), fVar16 = extraout_XMM0_Da_01, cVar4 != '\0')) break;
      iVar10 = iVar10 + 1;
    }
    fVar20 = pfVar13[1] - *(float *)(lVar12 + 0xec);
    fVar18 = *pfVar13 - *(float *)(lVar12 + 0xe8);
    bVar15 = *(char *)(*(int64_t *)(lVar12 + 0x60) + 0x20) != '\x02';
    fVar22 = pfVar13[2] - *(float *)(lVar12 + 0xf0);
    lVar6 = 0x60;
    if (bVar15) {
      lVar6 = 0x68;
    }
    pfVar13 = (float *)**(uint64_t **)(lVar6 + lVar12);
    pfVar8 = (float *)(*(uint64_t **)(lVar6 + lVar12))[1];
    lVar6 = 0x70;
    if (bVar15) {
      lVar6 = 0x78;
    }
    pfVar2 = (float *)**(uint64_t **)(lVar6 + lVar12);
    pfVar3 = (float *)(*(uint64_t **)(lVar6 + lVar12))[1];
    fVar23 = (pfVar2[1] + pfVar3[1]) * 0.5 - (pfVar13[1] + pfVar8[1]) * 0.5;
    fVar19 = (*pfVar3 + *pfVar2) * 0.5 - (*pfVar8 + *pfVar13) * 0.5;
    fVar16 = fVar20 * fVar20;
    if (fVar18 * fVar18 + fVar16 + fVar22 * fVar22 < (fVar19 * fVar19 + fVar23 * fVar23) * 9.0) {
      fStack0000000000000074 = (float)((uint64_t)*(uint64_t *)(lVar12 + 0xd0) >> 0x20);
      fStack0000000000000070 = (float)*(uint64_t *)(lVar12 + 0xd0);
      *(float *)(unaff_RBP + -9) = fVar18;
      *(float *)((int64_t)unaff_RBP + -0x44) = fVar20;
      fVar16 = fStack0000000000000074 * fStack0000000000000074 +
               fStack0000000000000070 * fStack0000000000000070;
      fStack000000000000006c = (float)((uint64_t)unaff_RBP[-9] >> 0x20);
      fStack0000000000000068 = (float)unaff_RBP[-9];
      auVar21 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
      fVar22 = auVar21._0_4_;
      fVar18 = fVar22 * 0.5 * (3.0 - fVar16 * fVar22 * fVar22);
      fVar22 = fStack000000000000006c * fStack000000000000006c +
               fStack0000000000000068 * fStack0000000000000068;
      auVar21 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
      fVar20 = auVar21._0_4_;
      fVar16 = fVar20 * fVar20;
      fVar22 = fVar20 * 0.5 * (3.0 - fVar22 * fVar16);
      if (0.5 < fStack000000000000006c * fVar22 * fStack0000000000000074 * fVar18 +
                fStack0000000000000068 * fVar22 * fStack0000000000000070 * fVar18)
      goto LAB_1805dfa06;
    }
LAB_1805df623:
    if (iVar1 != 0) goto LAB_1805dfa06;
    fVar16 = (float)NetworkSystem_e5240(fVar16,unaff_RBP + 0xc);
    lVar9 = unaff_RBP[-7];
LAB_1805df643:
    *(int32_t *)(unaff_RBP + -0x10) = *(int32_t *)(unaff_RBP + 0x32);
  }
  if ((((iVar1 == 0) &&
       (NetworkSystem_e7010(fVar16,unaff_RBP + 0xd,&local_buffer_00000078), local_buffer_78 != 0)) &&
      (cVar4 = SystemFunction_000180522f60(unaff_RBP[-0xe]), cVar4 == '\0')) &&
     (*(char *)(unaff_R12 + 0x1147) == '\0')) {
    lVar6 = *(int64_t *)(lVar9 + 0x18);
    lVar14 = lVar6 + 0x2a68;
    lVar12 = *(int64_t *)(unaff_RBP[-0xf] + 0x20);
    fVar16 = *(float *)(lVar12 + 0x28);
    fVar22 = *(float *)(lVar12 + 0x2c);
    fVar20 = *(float *)(unaff_R12 + 0x30);
    fVar18 = *(float *)(unaff_R12 + 0x34);
    *(float *)(unaff_RBP + -3) = *(float *)(lVar12 + 0x24) * 0.2 + *(float *)(unaff_R12 + 0x2c);
    *(int32_t *)((int64_t)unaff_RBP + -0xc) = 0x7f7fffff;
    *(float *)((int64_t)unaff_RBP + -0x14) = fVar16 * 0.2 + fVar20;
    *(float *)(unaff_RBP + -2) = fVar22 * 0.2 + fVar18;
    uVar17 = RenderingSystem_965f0(lVar14);
    *(int32_t *)(unaff_RBP + 0x35) = uVar17;
    RenderingSystem_8de80(lVar14,uVar17);
    lVar12 = (int64_t)*(int *)(unaff_RBP + 0x35);
    _fStack0000000000000060 = 0;
    *(int32_t *)(unaff_RBP + 0x34) = 0x7149f2ca;
    unaff_RBP[-0xb] = 0;
    RenderingSystem_95c50(lVar14,unaff_RBP + -3,local_buffer_78,*(int *)(unaff_RBP + 0x35),
                  unaff_RBP + 0x34);
    puVar7 = (uint64_t *)unaff_RBP[-0xb];
    if (puVar7 != (uint64_t *)0x0) {
      puVar7 = (uint64_t *)RenderingSystem_8a230(unaff_RBP + 0xe,*puVar7,puVar7[1],unaff_RBP + -3);
      _fStack0000000000000060 = *puVar7;
    }
    *(int32_t *)(lVar6 + 0x2fe0 + lVar12 * 4) = 0;
    if (((fStack0000000000000060 != 0.0) || (fStack0000000000000064 != 0.0)) &&
       ((fStack0000000000000060 != *(float *)(unaff_R12 + 0x2c) ||
        (fStack0000000000000064 != *(float *)(unaff_R12 + 0x30))))) {
      pfVar13 = (float *)unaff_RBP[-10];
      lVar6 = *(int64_t *)(lVar9 + 0x18);
      fVar16 = pfVar13[1];
      *(float *)(unaff_RBP + -0xd) = fStack0000000000000060 - *pfVar13;
      *(float *)((int64_t)unaff_RBP + -100) = fStack0000000000000064 - fVar16;
      unaff_RBP[-0xc] = unaff_RBP[-0xd];
      fVar16 = *(float *)(unaff_RBP + -0xc);
      fVar22 = *(float *)((int64_t)unaff_RBP + -0x5c);
      fVar19 = fVar22 * fVar22 + fVar16 * fVar16;
      auVar21 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
      fVar23 = auVar21._0_4_;
      fVar20 = *(float *)(*(int64_t *)(unaff_RBP[-0xf] + 0x20) + 0x90) * 0.5;
      fVar18 = *(float *)(unaff_R12 + 0x90) * 1.212;
      if (fVar20 <= fVar18) {
        fVar20 = fVar18;
      }
      fVar18 = fVar23 * 0.5 * (3.0 - fVar19 * fVar23 * fVar23);
      *(float *)((int64_t)unaff_RBP + 0x1ac) = fVar18 * fVar22 * fVar20;
      *(float *)(unaff_RBP + 0x35) = fVar18 * fVar16 * fVar20;
      cVar4 = RenderingSystem_944c0(lVar6 + 0x2a68,
                            *(uint64_t *)(**(int64_t **)(unaff_R12 + 0x20) + 0x9d8),0,pfVar13,
                            unaff_RBP + 0x35);
      if (cVar4 == '\0') {
        if (unaff_RBP[-4] != 0) {
          pfVar8 = (float *)RenderingSystem_8bc40(unaff_RBP[-4],unaff_RBP + 0x12,pfVar13,unaff_RBP + 0x35);
          fVar16 = *pfVar13;
          fVar22 = pfVar13[1];
          fVar20 = *(float *)(unaff_R12 + 0x90);
          fVar18 = *pfVar8;
          *(float *)((int64_t)unaff_RBP + 0x194) = pfVar8[1] - fVar22;
          *(float *)(unaff_RBP + 0x32) = fVar18 - fVar16;
          unaff_RBP[0x35] = unaff_RBP[0x32];
          fVar18 = *(float *)((int64_t)unaff_RBP + 0x1ac);
          fVar19 = *(float *)(unaff_RBP + 0x35);
          if (fVar20 * fVar20 * 1.4689441 < fVar18 * fVar18 + fVar19 * fVar19) {
            *(int8_t *)(unaff_RBP + 0x33) = 1;
            *(float *)(unaff_RBP + 0x32) = fVar16 + fVar19;
            *(float *)((int64_t)unaff_RBP + 0x194) = fVar22 + fVar18;
            *(uint64_t *)(unaff_R12 + 0x3c) = unaff_RBP[0x32];
            *(uint *)(unaff_R12 + 0x28) = *(uint *)(unaff_R12 + 0x28) & 0xfffffd0f;
          }
        }
      }
      else {
        fVar16 = *pfVar13;
        fVar22 = pfVar13[1];
        *(int8_t *)(unaff_RBP + 0x33) = 1;
        *(float *)(unaff_RBP + 0x32) = *(float *)(unaff_RBP + 0x35) + fVar16;
        *(float *)((int64_t)unaff_RBP + 0x194) = *(float *)((int64_t)unaff_RBP + 0x1ac) + fVar22;
        *(uint64_t *)(unaff_R12 + 0x3c) = unaff_RBP[0x32];
        *(uint *)(unaff_R12 + 0x28) = *(uint *)(unaff_R12 + 0x28) & 0xfffffd0f;
      }
    }
  }
LAB_1805dfa06:
  *(int8_t *)(unaff_RBP + 0x32) = 0;
  unaff_RBP[3] = 0;
  unaff_RBP[4] = 0;
  unaff_RBP[7] = unaff_RBP[3];
  unaff_RBP[5] = 0;
  unaff_RBP[6] = 0;
  *unaff_RBP = 0;
  unaff_RBP[1] = 0;
  lVar6 = *(int64_t *)(unaff_RBP[-0xf] + 0x20);
  unaff_RBP[2] = 0;
  *(int32_t *)(unaff_RBP + 8) = 0;
// WARNING: Subroutine does not return
  AdvancedSystemController(*(int32_t *)(lVar6 + 0x34));
}