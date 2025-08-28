#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_06_part045.c - 4 个函数
// 函数: void RenderingSystem_d64f0(int64_t *param_1,int param_2,int param_3)
void RenderingSystem_d64f0(int64_t *param_1,int param_2,int param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  int64_t lVar8;
  int64_t lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  char cVar19;
  int iVar20;
  int *piVar21;
  int64_t *plVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  bool bVar25;
  float fVar26;
  int8_t stack_array_268 [32];
  uint64_t *plocal_var_248;
  int iStack_238;
  int iStack_234;
  char acStack_230 [4];
  uint local_var_22c;
  uint64_t local_var_228;
  int32_t local_var_220;
  int16_t local_var_21c;
  uint64_t local_var_218;
  uint64_t local_var_210;
  int32_t local_var_208;
  int8_t local_var_204;
  int32_t local_var_200;
  uint64_t local_var_1fc;
  int16_t local_var_1f4;
  uint64_t local_var_1f0;
  int32_t local_var_1e8;
  uint64_t local_var_1e0;
  int32_t local_var_1d8;
  int8_t local_var_1d4;
  uint64_t local_var_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int32_t local_var_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int32_t local_var_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  int32_t local_var_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  int32_t local_var_17c;
  int32_t local_var_178;
  int32_t local_var_174;
  int32_t local_var_170;
  int32_t local_var_16c;
  int32_t local_var_168;
  int32_t local_var_164;
  int32_t local_var_160;
  int32_t local_var_15c;
  int32_t local_var_158;
  int32_t local_var_154;
  int32_t local_var_150;
  int32_t local_var_14c;
  int32_t local_var_148;
  int32_t local_var_144;
  int32_t local_var_140;
  int32_t local_var_13c;
  int32_t local_var_138;
  int32_t local_var_134;
  int32_t local_var_130;
  int32_t local_var_12c;
  int32_t local_var_128;
  int32_t local_var_124;
  int32_t local_var_120;
  int32_t local_var_11c;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  int32_t local_var_104;
  int32_t local_var_100;
  int32_t local_var_fc;
  int32_t local_var_f8;
  int32_t local_var_f4;
  int32_t local_var_f0;
  int32_t local_var_ec;
  int32_t local_var_e8;
  int32_t local_var_e4;
  int32_t local_var_e0;
  int32_t local_var_dc;
  int32_t local_var_d8;
  int32_t local_var_d4;
  int32_t local_var_d0;
  int32_t local_var_cc;
  uint64_t local_var_c8;
  uint64_t local_var_b8;
  if (param_3 <= param_2) {
    return;
  }
  local_var_b8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_268;
  do {
    lVar8 = *(int64_t *)(*param_1 + 0x68);
    iStack_234 = param_2 / *(int *)(lVar8 + 0x14);
    iStack_238 = param_2 % *(int *)(lVar8 + 0x14);
    uVar24 = (uint64_t)(iStack_238 * 1000 + iStack_234);
    uVar23 = uVar24 % (uint64_t)*(uint *)(lVar8 + 0x48);
    for (piVar21 = *(int **)(*(int64_t *)(lVar8 + 0x40) + uVar23 * 8); piVar21 != (int *)0x0;
        piVar21 = *(int **)(piVar21 + 4)) {
      if ((iStack_238 == *piVar21) && (iStack_234 == piVar21[1])) goto LAB_1803d6689;
    }
    plocal_var_248 = (uint64_t *)CONCAT44(plocal_var_248._4_4_,1);
    RenderingShaderProcessor0(lVar8 + 0x58,acStack_230,(uint64_t)*(uint *)(lVar8 + 0x48),
                  *(int32_t *)(lVar8 + 0x50));
    piVar21 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(lVar8 + 100));
    *(uint64_t *)piVar21 = CONCAT44(iStack_234,iStack_238);
    piVar21[2] = 0;
    piVar21[3] = 0;
    piVar21[4] = 0;
    piVar21[5] = 0;
    if (acStack_230[0] != '\0') {
      uVar23 = uVar24 % (uint64_t)local_var_22c;
      RenderingSystem_b94a0(lVar8 + 0x38,local_var_22c);
    }
    *(uint64_t *)(piVar21 + 4) = *(uint64_t *)(*(int64_t *)(lVar8 + 0x40) + uVar23 * 8);
    *(int **)(*(int64_t *)(lVar8 + 0x40) + uVar23 * 8) = piVar21;
    *(int64_t *)(lVar8 + 0x50) = *(int64_t *)(lVar8 + 0x50) + 1;
LAB_1803d6689:
    lVar8 = *(int64_t *)(piVar21 + 2);
    if (lVar8 != 0) {
      fVar1 = *(float *)(lVar8 + 0xc4);
      fVar10 = *(float *)(lVar8 + 0x80);
      fVar11 = *(float *)(lVar8 + 0x84);
      fVar12 = *(float *)(lVar8 + 0x88);
      local_var_228 = 0;
      fVar13 = *(float *)(lVar8 + 0x90);
      fVar14 = *(float *)(lVar8 + 0x94);
      fVar15 = *(float *)(lVar8 + 0x98);
      local_var_220 = 0xffffffff;
      fVar16 = *(float *)(lVar8 + 0xa0);
      fVar17 = *(float *)(lVar8 + 0xa4);
      fVar18 = *(float *)(lVar8 + 0xa8);
      local_var_21c = 0xff00;
      fVar26 = *(float *)(lVar8 + 0xc0);
      fVar2 = *(float *)(lVar8 + 200);
      fVar3 = *(float *)(lVar8 + 0xd4);
      fVar4 = *(float *)(lVar8 + 0xe4);
      fVar5 = *(float *)(lVar8 + 0xf4);
      local_var_218 = 0;
      local_var_210 = 0xffffffffffffffff;
      local_var_208 = 0xffffffff;
      local_var_204 = 0xff;
      local_var_200 = 0xffffffff;
      local_var_1fc = 0;
      fVar6 = *(float *)(lVar8 + 0xd0);
      local_var_1f4 = 0x400;
      fStack_1b8 = fVar1 * fVar13 + fVar26 * fVar10 + fVar2 * fVar16;
      fStack_1b4 = fVar1 * fVar14 + fVar26 * fVar11 + fVar2 * fVar17;
      fStack_1b0 = fVar1 * fVar15 + fVar26 * fVar12 + fVar2 * fVar18;
      local_var_1f0 = 0;
      fVar1 = *(float *)(lVar8 + 0xd8);
      local_var_1e8 = 0;
      fVar26 = *(float *)(lVar8 + 0xe0);
      local_var_1e0 = 0;
      fStack_1a8 = fVar3 * fVar13 + fVar6 * fVar10 + fVar1 * fVar16;
      fStack_1a4 = fVar3 * fVar14 + fVar6 * fVar11 + fVar1 * fVar17;
      fStack_1a0 = fVar3 * fVar15 + fVar6 * fVar12 + fVar1 * fVar18;
      fVar1 = *(float *)(lVar8 + 0xe8);
      local_var_1d8 = 0;
      fVar2 = *(float *)(lVar8 + 0xf0);
      local_var_1d4 = 0;
      fStack_198 = fVar4 * fVar13 + fVar26 * fVar10 + fVar1 * fVar16;
      fStack_194 = fVar4 * fVar14 + fVar26 * fVar11 + fVar1 * fVar17;
      fStack_190 = fVar4 * fVar15 + fVar26 * fVar12 + fVar1 * fVar18;
      fVar1 = *(float *)(lVar8 + 0xf8);
      local_var_1c0 = 0;
      local_var_1ac = 0;
      local_var_19c = 0;
      local_var_18c = 0;
      local_var_c8 = 0;
      local_var_148 = 0;
      local_var_144 = 0;
      local_var_140 = 0;
      local_var_13c = 0;
      fStack_188 = fVar5 * fVar13 + fVar2 * fVar10 + fVar1 * fVar16 + *(float *)(lVar8 + 0xb0);
      fStack_184 = fVar5 * fVar14 + fVar2 * fVar11 + fVar1 * fVar17 + *(float *)(lVar8 + 0xb4);
      fStack_180 = fVar5 * fVar15 + fVar2 * fVar12 + fVar1 * fVar18 + *(float *)(lVar8 + 0xb8);
      local_var_178 = 0;
      local_var_174 = 0;
      local_var_170 = 0;
      local_var_16c = 0x7f7fffff;
      local_var_168 = 0;
      local_var_164 = 0;
      local_var_160 = 0;
      local_var_15c = 0x7f7fffff;
      local_var_158 = 0;
      local_var_154 = 0;
      local_var_150 = 0;
      local_var_14c = 0x7f7fffff;
      local_var_17c = 0x3f800000;
      local_var_138 = 0;
      local_var_134 = 0;
      local_var_130 = 0;
      local_var_12c = 0;
      local_var_128 = 0;
      local_var_124 = 0;
      local_var_120 = 0;
      local_var_11c = 0;
      local_var_118 = 0;
      local_var_114 = 0;
      local_var_110 = 0;
      local_var_10c = 0;
      local_var_108 = 0;
      local_var_104 = 0;
      local_var_100 = 0;
      local_var_fc = 0;
      local_var_f8 = 0;
      local_var_f4 = 0;
      local_var_f0 = 0;
      local_var_ec = 0;
      local_var_e8 = 0;
      local_var_e4 = 0;
      local_var_e0 = 0;
      local_var_dc = 0;
      local_var_d8 = 0;
      local_var_d4 = 0;
      local_var_d0 = 0;
      local_var_cc = 0;
      UltraHighFreq_DataProcessor1(&local_var_178,lVar8 + 0x100,&fStack_1b8);
      plVar22 = (int64_t *)param_1[3];
      lVar9 = *(int64_t *)param_1[2];
      bVar7 = *(byte *)(*plVar22 + 0x1bd8);
      fVar1 = (float)local_var_c8;
      fVar26 = local_var_c8._4_4_;
      if (local_var_c8._4_4_ <= 0.0) {
        fVar26 = (float)local_var_c8;
      }
      if (10.0 <= fVar26) {
        if ((float)local_var_c8 <= 2.0) {
          cVar19 = Function_5acbfcdf(param_1[1],&local_var_158,(float)local_var_c8);
          bVar25 = cVar19 == '\0';
        }
        else {
          iVar20 = UtilitiesSystem_3c930(param_1[1],&local_var_178);
          bVar25 = iVar20 == 0;
        }
        if (!bVar25) {
          if ((bVar7 & 2) != 0) {
            plVar22 = *(int64_t **)(lVar9 + 0x29a8);
            if (((plVar22 != (int64_t *)0x0) && (fVar1 <= 100.0)) &&
               (cVar19 = (**(code **)(*plVar22 + 0x30))(plVar22,&local_var_178,0), cVar19 == '\0'))
            goto LAB_1803d6924;
            plVar22 = (int64_t *)param_1[3];
          }
          plocal_var_248 = &local_var_228;
          RenderingSystem_d7f00(*param_1,*plVar22,&fStack_1b8,(float *)(lVar8 + 0x80));
        }
      }
    }
LAB_1803d6924:
    param_2 = param_2 + 1;
    if (param_3 <= param_2) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_b8 ^ (uint64_t)stack_array_268);
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_d6522(int64_t *param_1,int param_2,int param_3)
void RenderingSystem_d6522(int64_t *param_1,int param_2,int param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  int64_t lVar10;
  int64_t lVar11;
  float fVar12;
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
  char cVar25;
  int iVar26;
  int *piVar27;
  uint64_t unaff_RBX;
  int64_t *plVar28;
  int32_t *unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t uVar29;
  uint64_t unaff_RDI;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t uVar30;
  bool bVar31;
  float fVar32;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  int iStack0000000000000030;
  int iStack0000000000000034;
  char cStack0000000000000038;
  uint local_buffer_3c;
  uint64_t local_var_40;
  int32_t local_buffer_48;
  int16_t local_buffer_4c;
  uint64_t local_buffer_50;
  uint64_t local_buffer_58;
  int32_t local_buffer_60;
  int8_t local_buffer_64;
  int32_t local_buffer_68;
  uint64_t local_buffer_6c;
  int16_t local_buffer_74;
  uint64_t local_buffer_78;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RSI;
  *(uint64_t *)(in_R11 + 0x20) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM11_Dd;
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM12_Dd;
  *(int32_t *)(in_R11 + -0xa8) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0xa4) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0xa0) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0x9c) = unaff_XMM13_Dd;
  do {
    lVar10 = *(int64_t *)(*param_1 + 0x68);
    iStack0000000000000034 = param_2 / *(int *)(lVar10 + 0x14);
    iStack0000000000000030 = param_2 % *(int *)(lVar10 + 0x14);
    uVar30 = (uint64_t)(iStack0000000000000030 * 1000 + iStack0000000000000034);
    uVar29 = uVar30 % (uint64_t)*(uint *)(lVar10 + 0x48);
    for (piVar27 = *(int **)(*(int64_t *)(lVar10 + 0x40) + uVar29 * 8); piVar27 != (int *)0x0;
        piVar27 = *(int **)(piVar27 + 4)) {
      if ((iStack0000000000000030 == *piVar27) && (iStack0000000000000034 == piVar27[1]))
      goto LAB_1803d6689;
    }
    RenderingShaderProcessor0(lVar10 + 0x58,&local_buffer_00000038,(uint64_t)*(uint *)(lVar10 + 0x48),
                  *(int32_t *)(lVar10 + 0x50),1);
    piVar27 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(lVar10 + 100));
    *(uint64_t *)piVar27 = CONCAT44(iStack0000000000000034,iStack0000000000000030);
    piVar27[2] = 0;
    piVar27[3] = 0;
    piVar27[4] = 0;
    piVar27[5] = 0;
    if (cStack0000000000000038 != '\0') {
      uVar29 = uVar30 % (uint64_t)local_buffer_3c;
      RenderingSystem_b94a0(lVar10 + 0x38,local_buffer_3c);
    }
    *(uint64_t *)(piVar27 + 4) = *(uint64_t *)(*(int64_t *)(lVar10 + 0x40) + uVar29 * 8);
    *(int **)(*(int64_t *)(lVar10 + 0x40) + uVar29 * 8) = piVar27;
    *(int64_t *)(lVar10 + 0x50) = *(int64_t *)(lVar10 + 0x50) + 1;
LAB_1803d6689:
    lVar10 = *(int64_t *)(piVar27 + 2);
    if (lVar10 != 0) {
      fVar1 = *(float *)(lVar10 + 0xc4);
      fVar12 = *(float *)(lVar10 + 0x80);
      fVar13 = *(float *)(lVar10 + 0x84);
      fVar14 = *(float *)(lVar10 + 0x88);
      fVar15 = *(float *)(lVar10 + 0x8c);
      local_var_40 = 0;
      fVar16 = *(float *)(lVar10 + 0x90);
      fVar17 = *(float *)(lVar10 + 0x94);
      fVar18 = *(float *)(lVar10 + 0x98);
      fVar19 = *(float *)(lVar10 + 0x9c);
      local_buffer_48 = 0xffffffff;
      fVar20 = *(float *)(lVar10 + 0xa0);
      fVar21 = *(float *)(lVar10 + 0xa4);
      fVar22 = *(float *)(lVar10 + 0xa8);
      fVar23 = *(float *)(lVar10 + 0xac);
      local_buffer_4c = 0xff00;
      fVar32 = *(float *)(lVar10 + 0xc0);
      fVar2 = *(float *)(lVar10 + 200);
      fVar3 = *(float *)(lVar10 + 0xd4);
      fVar4 = *(float *)(lVar10 + 0xe4);
      fVar5 = *(float *)(lVar10 + 0xf4);
      local_buffer_50 = 0;
      local_buffer_58 = 0xffffffffffffffff;
      local_buffer_60 = 0xffffffff;
      local_buffer_64 = 0xff;
      local_buffer_68 = 0xffffffff;
      local_buffer_6c = 0;
      fVar6 = *(float *)(lVar10 + 0xd0);
      local_buffer_74 = 0x400;
      local_buffer_78 = 0;
      fVar7 = *(float *)(lVar10 + 0xd8);
      unaff_RBP[-0x20] = 0;
      fVar8 = *(float *)(lVar10 + 0xe0);
      *(uint64_t *)(unaff_RBP + -0x1e) = 0;
      unaff_RBP[-0x14] = fVar1 * fVar16 + fVar32 * fVar12 + fVar2 * fVar20;
      unaff_RBP[-0x13] = fVar1 * fVar17 + fVar32 * fVar13 + fVar2 * fVar21;
      unaff_RBP[-0x12] = fVar1 * fVar18 + fVar32 * fVar14 + fVar2 * fVar22;
      unaff_RBP[-0x11] = fVar1 * fVar19 + fVar32 * fVar15 + fVar2 * fVar23;
      fVar1 = *(float *)(lVar10 + 0xe8);
      unaff_RBP[-0x1c] = 0;
      fVar32 = *(float *)(lVar10 + 0xf0);
      *(int8_t *)(unaff_RBP + -0x1b) = 0;
      unaff_RBP[-0x10] = fVar3 * fVar16 + fVar6 * fVar12 + fVar7 * fVar20;
      unaff_RBP[-0xf] = fVar3 * fVar17 + fVar6 * fVar13 + fVar7 * fVar21;
      unaff_RBP[-0xe] = fVar3 * fVar18 + fVar6 * fVar14 + fVar7 * fVar22;
      unaff_RBP[-0xd] = fVar3 * fVar19 + fVar6 * fVar15 + fVar7 * fVar23;
      fVar2 = *(float *)(lVar10 + 0xf8);
      *(uint64_t *)(unaff_RBP + -0x16) = 0;
      fVar3 = *(float *)(lVar10 + 0xb0);
      fVar6 = *(float *)(lVar10 + 0xb4);
      fVar7 = *(float *)(lVar10 + 0xb8);
      fVar24 = *(float *)(lVar10 + 0xbc);
      unaff_RBP[-0x11] = 0;
      unaff_RBP[-0xc] = fVar4 * fVar16 + fVar8 * fVar12 + fVar1 * fVar20;
      unaff_RBP[-0xb] = fVar4 * fVar17 + fVar8 * fVar13 + fVar1 * fVar21;
      unaff_RBP[-10] = fVar4 * fVar18 + fVar8 * fVar14 + fVar1 * fVar22;
      unaff_RBP[-9] = fVar4 * fVar19 + fVar8 * fVar15 + fVar1 * fVar23;
      unaff_RBP[-0xd] = 0;
      unaff_RBP[-9] = 0;
      *(uint64_t *)(unaff_RBP + 0x28) = 0;
      unaff_RBP[8] = 0;
      unaff_RBP[9] = 0;
      unaff_RBP[10] = 0;
      unaff_RBP[0xb] = 0;
      unaff_RBP[-4] = 0;
      unaff_RBP[-3] = 0;
      unaff_RBP[-2] = 0;
      unaff_RBP[-1] = 0x7f7fffff;
      *unaff_RBP = 0;
      unaff_RBP[1] = 0;
      unaff_RBP[2] = 0;
      unaff_RBP[3] = 0x7f7fffff;
      unaff_RBP[4] = 0;
      unaff_RBP[5] = 0;
      unaff_RBP[6] = 0;
      unaff_RBP[7] = 0x7f7fffff;
      unaff_RBP[-8] = fVar5 * fVar16 + fVar32 * fVar12 + fVar2 * fVar20 + fVar3;
      unaff_RBP[-7] = fVar5 * fVar17 + fVar32 * fVar13 + fVar2 * fVar21 + fVar6;
      unaff_RBP[-6] = fVar5 * fVar18 + fVar32 * fVar14 + fVar2 * fVar22 + fVar7;
      unaff_RBP[-5] = fVar5 * fVar19 + fVar32 * fVar15 + fVar2 * fVar23 + fVar24;
      unaff_RBP[-5] = 0x3f800000;
      unaff_RBP[0xc] = 0;
      unaff_RBP[0xd] = 0;
      unaff_RBP[0xe] = 0;
      unaff_RBP[0xf] = 0;
      unaff_RBP[0x10] = 0;
      unaff_RBP[0x11] = 0;
      unaff_RBP[0x12] = 0;
      unaff_RBP[0x13] = 0;
      unaff_RBP[0x14] = 0;
      unaff_RBP[0x15] = 0;
      unaff_RBP[0x16] = 0;
      unaff_RBP[0x17] = 0;
      unaff_RBP[0x18] = 0;
      unaff_RBP[0x19] = 0;
      unaff_RBP[0x1a] = 0;
      unaff_RBP[0x1b] = 0;
      unaff_RBP[0x1c] = 0;
      unaff_RBP[0x1d] = 0;
      unaff_RBP[0x1e] = 0;
      unaff_RBP[0x1f] = 0;
      unaff_RBP[0x20] = 0;
      unaff_RBP[0x21] = 0;
      unaff_RBP[0x22] = 0;
      unaff_RBP[0x23] = 0;
      unaff_RBP[0x24] = 0;
      unaff_RBP[0x25] = 0;
      unaff_RBP[0x26] = 0;
      unaff_RBP[0x27] = 0;
      UltraHighFreq_DataProcessor1(unaff_RBP + -4,lVar10 + 0x100,unaff_RBP + -0x14);
      plVar28 = (int64_t *)param_1[3];
      lVar11 = *(int64_t *)param_1[2];
      bVar9 = *(byte *)(*plVar28 + 0x1bd8);
      fVar1 = (float)unaff_RBP[0x28];
      fVar32 = (float)unaff_RBP[0x29];
      if ((float)unaff_RBP[0x29] <= 0.0) {
        fVar32 = fVar1;
      }
      if (10.0 <= fVar32) {
        if (fVar1 <= 2.0) {
          cVar25 = Function_5acbfcdf(param_1[1],unaff_RBP + 4,fVar1);
          bVar31 = cVar25 == '\0';
        }
        else {
          iVar26 = UtilitiesSystem_3c930(param_1[1],unaff_RBP + -4);
          bVar31 = iVar26 == 0;
        }
        if (!bVar31) {
          if ((bVar9 & 2) != 0) {
            plVar28 = *(int64_t **)(lVar11 + 0x29a8);
            if (((plVar28 != (int64_t *)0x0) && (fVar1 <= 100.0)) &&
               (cVar25 = (**(code **)(*plVar28 + 0x30))(plVar28,unaff_RBP + -4,0), cVar25 == '\0'))
            goto LAB_1803d6924;
            plVar28 = (int64_t *)param_1[3];
          }
          RenderingSystem_d7f00(*param_1,*plVar28,unaff_RBP + -0x14,(float *)(lVar10 + 0x80),
                        &local_buffer_00000040);
        }
      }
    }
LAB_1803d6924:
    param_2 = param_2 + 1;
    if (param_3 <= param_2) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x2c) ^ (uint64_t)&local_buffer_00000000);
    }
  } while( true );
}
// 函数: void RenderingSystem_d69b9(void)
void RenderingSystem_d69b9(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_d69c0(int64_t *param_1,int param_2,int param_3)
void RenderingSystem_d69c0(int64_t *param_1,int param_2,int param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  int64_t lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  char cVar18;
  int iVar19;
  int *piVar20;
  uint64_t uVar21;
  uint uVar22;
  uint64_t uVar23;
  int64_t lVar24;
  int64_t lVar25;
  int64_t *plVar26;
  uint64_t uVar27;
  float fVar28;
  int8_t stack_array_298 [32];
  uint64_t *plocal_var_278;
  int iStack_268;
  int iStack_264;
  int iStack_260;
  int iStack_25c;
  char acStack_258 [4];
  uint local_var_254;
  int64_t lStack_250;
  uint64_t local_var_248;
  int32_t local_var_240;
  int16_t local_var_23c;
  uint64_t local_var_238;
  uint64_t local_var_230;
  int32_t local_var_228;
  int8_t local_var_224;
  int32_t local_var_220;
  uint64_t local_var_21c;
  int16_t local_var_214;
  uint64_t local_var_210;
  int32_t local_var_208;
  uint64_t local_var_200;
  int32_t local_var_1f8;
  int8_t local_var_1f4;
  uint64_t local_var_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  int32_t local_var_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  int32_t local_var_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int32_t local_var_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int32_t local_var_19c;
  int32_t local_var_198;
  int32_t local_var_194;
  int32_t local_var_190;
  int32_t local_var_18c;
  uint64_t local_var_188;
  uint64_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  int32_t local_var_168;
  int32_t local_var_164;
  int32_t local_var_160;
  int32_t local_var_15c;
  int32_t local_var_158;
  int32_t local_var_154;
  int32_t local_var_150;
  int32_t local_var_14c;
  int32_t local_var_148;
  int32_t local_var_144;
  int32_t local_var_140;
  int32_t local_var_13c;
  int32_t local_var_138;
  int32_t local_var_134;
  int32_t local_var_130;
  int32_t local_var_12c;
  int32_t local_var_128;
  int32_t local_var_124;
  int32_t local_var_120;
  int32_t local_var_11c;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  int32_t local_var_104;
  int32_t local_var_100;
  int32_t local_var_fc;
  int32_t local_var_f8;
  int32_t local_var_f4;
  int32_t local_var_f0;
  int32_t local_var_ec;
  uint64_t local_var_e8;
  uint64_t local_var_d8;
  if (param_3 <= param_2) {
    return;
  }
  local_var_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_298;
  iStack_268 = param_2;
  iStack_264 = param_3;
  do {
    uVar21 = 0;
    lVar8 = *(int64_t *)(*param_1 + 0x68);
    iStack_25c = iStack_268 / *(int *)(lVar8 + 0x14);
    iStack_260 = iStack_268 % *(int *)(lVar8 + 0x14);
    uVar27 = (uint64_t)(iStack_260 * 1000 + iStack_25c);
    uVar23 = uVar27 % (uint64_t)*(uint *)(lVar8 + 0x48);
    for (piVar20 = *(int **)(*(int64_t *)(lVar8 + 0x40) + uVar23 * 8); piVar20 != (int *)0x0;
        piVar20 = *(int **)(piVar20 + 4)) {
      if ((iStack_260 == *piVar20) && (iStack_25c == piVar20[1])) goto LAB_1803d6b64;
    }
    plocal_var_278 = (uint64_t *)CONCAT44(plocal_var_278._4_4_,1);
    RenderingShaderProcessor0(lVar8 + 0x58,acStack_258,(uint64_t)*(uint *)(lVar8 + 0x48),
                  *(int32_t *)(lVar8 + 0x50));
    piVar20 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(lVar8 + 100));
    *(uint64_t *)piVar20 = CONCAT44(iStack_25c,iStack_260);
    piVar20[2] = 0;
    piVar20[3] = 0;
    piVar20[4] = 0;
    piVar20[5] = 0;
    if (acStack_258[0] != '\0') {
      uVar23 = uVar27 % (uint64_t)local_var_254;
      RenderingSystem_b94a0(lVar8 + 0x38,local_var_254);
    }
    *(uint64_t *)(piVar20 + 4) = *(uint64_t *)(*(int64_t *)(lVar8 + 0x40) + uVar23 * 8);
    *(int **)(*(int64_t *)(lVar8 + 0x40) + uVar23 * 8) = piVar20;
    *(int64_t *)(lVar8 + 0x50) = *(int64_t *)(lVar8 + 0x50) + 1;
LAB_1803d6b64:
    lVar8 = *(int64_t *)(piVar20 + 2);
    if ((lVar8 != 0) && (uVar23 = uVar21, 0 < *(int *)param_1[1])) {
      do {
        fVar9 = *(float *)(lVar8 + 0x80);
        fVar10 = *(float *)(lVar8 + 0x84);
        fVar11 = *(float *)(lVar8 + 0x88);
        plVar26 = (int64_t *)param_1[2];
        fVar12 = *(float *)(lVar8 + 0x90);
        fVar13 = *(float *)(lVar8 + 0x94);
        fVar14 = *(float *)(lVar8 + 0x98);
        local_var_248 = 0;
        fVar15 = *(float *)(lVar8 + 0xa0);
        fVar16 = *(float *)(lVar8 + 0xa4);
        fVar17 = *(float *)(lVar8 + 0xa8);
        fVar1 = *(float *)(lVar8 + 0xc4);
        fVar28 = *(float *)(lVar8 + 0xc0);
        fVar2 = *(float *)(lVar8 + 200);
        lVar24 = *(int64_t *)(uVar21 + *plVar26);
        fVar3 = *(float *)(lVar8 + 0xd0);
        fVar4 = *(float *)(lVar8 + 0xe4);
        fVar5 = *(float *)(lVar8 + 0xf0);
        local_var_240 = 0xffffffff;
        local_var_23c = 0xff00;
        local_var_238 = 0;
        local_var_230 = 0xffffffffffffffff;
        local_var_228 = 0xffffffff;
        local_var_224 = 0xff;
        fVar6 = *(float *)(lVar8 + 0xd4);
        local_var_220 = 0xffffffff;
        fStack_1d8 = fVar1 * fVar12 + fVar28 * fVar9 + fVar2 * fVar15;
        fStack_1d4 = fVar1 * fVar13 + fVar28 * fVar10 + fVar2 * fVar16;
        fStack_1d0 = fVar1 * fVar14 + fVar28 * fVar11 + fVar2 * fVar17;
        local_var_21c = 0;
        fVar1 = *(float *)(lVar8 + 0xd8);
        local_var_214 = 0x400;
        fVar28 = *(float *)(lVar8 + 0xe0);
        local_var_210 = 0;
        fStack_1c8 = fVar3 * fVar9 + fVar6 * fVar12 + fVar1 * fVar15;
        fStack_1c4 = fVar3 * fVar10 + fVar6 * fVar13 + fVar1 * fVar16;
        fStack_1c0 = fVar3 * fVar11 + fVar6 * fVar14 + fVar1 * fVar17;
        fVar1 = *(float *)(lVar8 + 0xe8);
        local_var_208 = 0;
        fVar2 = *(float *)(lVar8 + 0xf4);
        local_var_200 = 0;
        fStack_1b8 = fVar4 * fVar12 + fVar28 * fVar9 + fVar1 * fVar15;
        fStack_1b4 = fVar4 * fVar13 + fVar28 * fVar10 + fVar1 * fVar16;
        fStack_1b0 = fVar4 * fVar14 + fVar28 * fVar11 + fVar1 * fVar17;
        fVar1 = *(float *)(lVar8 + 0xf8);
        local_var_1f8 = 0;
        local_var_1f4 = 0;
        local_var_1e0 = 0;
        local_var_1cc = 0;
        local_var_1bc = 0;
        local_var_1ac = 0;
        local_var_188 = 0;
        local_var_180 = 0x7f7fffff00000000;
        fStack_1a8 = fVar5 * fVar9 + fVar2 * fVar12 + fVar1 * fVar15 + *(float *)(lVar8 + 0xb0);
        fStack_1a4 = fVar5 * fVar10 + fVar2 * fVar13 + fVar1 * fVar16 + *(float *)(lVar8 + 0xb4);
        fStack_1a0 = fVar5 * fVar11 + fVar2 * fVar14 + fVar1 * fVar17 + *(float *)(lVar8 + 0xb8);
        local_var_178 = 0;
        local_var_170 = 0x7f7fffff00000000;
        local_var_198 = 0;
        local_var_194 = 0;
        local_var_190 = 0;
        local_var_18c = 0x7f7fffff;
        local_var_e8 = 0;
        local_var_19c = 0x3f800000;
        local_var_168 = 0;
        local_var_164 = 0;
        local_var_160 = 0;
        local_var_15c = 0;
        local_var_158 = 0;
        local_var_154 = 0;
        local_var_150 = 0;
        local_var_14c = 0;
        local_var_148 = 0;
        local_var_144 = 0;
        local_var_140 = 0;
        local_var_13c = 0;
        local_var_138 = 0;
        local_var_134 = 0;
        local_var_130 = 0;
        local_var_12c = 0;
        local_var_128 = 0;
        local_var_124 = 0;
        local_var_120 = 0;
        local_var_11c = 0;
        local_var_118 = 0;
        local_var_114 = 0;
        local_var_110 = 0;
        local_var_10c = 0;
        local_var_108 = 0;
        local_var_104 = 0;
        local_var_100 = 0;
        local_var_fc = 0;
        local_var_f8 = 0;
        local_var_f4 = 0;
        local_var_f0 = 0;
        local_var_ec = 0;
        UltraHighFreq_DataProcessor1(&local_var_198,lVar8 + 0x100,&fStack_1d8,lVar24);
        lVar25 = *(int64_t *)param_1[3];
        bVar7 = *(byte *)(*(int64_t *)(uVar21 + *plVar26) + 0x1bd8);
        fVar1 = (float)local_var_e8;
        fVar28 = local_var_e8._4_4_;
        if (local_var_e8._4_4_ <= 0.0) {
          fVar28 = (float)local_var_e8;
        }
        lStack_250 = lVar25;
        if (10.0 <= fVar28) {
          if ((float)local_var_e8 <= 2.0) {
            cVar18 = Function_5acbfcdf(lVar24 + 0x30,&local_var_178,(float)local_var_e8);
            if (cVar18 != '\0') goto LAB_1803d6e09;
          }
          else {
            iVar19 = UtilitiesSystem_3c930(lVar24 + 0x30,&local_var_198);
            lVar25 = lStack_250;
            if (iVar19 != 0) {
LAB_1803d6e09:
              if ((bVar7 & 2) != 0) {
                plVar26 = *(int64_t **)(lVar25 + 0x29a8);
                if (((plVar26 != (int64_t *)0x0) && (fVar1 <= 100.0)) &&
                   (cVar18 = (**(code **)(*plVar26 + 0x30))(plVar26,&local_var_198,0), cVar18 == '\0'))
                goto LAB_1803d6e62;
                plVar26 = (int64_t *)param_1[2];
              }
              plocal_var_278 = &local_var_248;
              RenderingSystem_d7f00(*param_1,*(uint64_t *)(uVar21 + *plVar26),&fStack_1d8,lVar8 + 0x80);
            }
          }
        }
LAB_1803d6e62:
        uVar22 = (int)uVar23 + 1;
        uVar21 = uVar21 + 8;
        uVar23 = (uint64_t)uVar22;
      } while ((int)uVar22 < *(int *)param_1[1]);
    }
    iStack_268 = iStack_268 + 1;
    if (iStack_264 <= iStack_268) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_d8 ^ (uint64_t)stack_array_298);
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address