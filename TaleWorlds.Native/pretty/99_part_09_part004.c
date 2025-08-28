/* 函数别名定义: SystemOutputManager */
#define SystemOutputManager SystemOutputManager
#include "SystemOutputManager0_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_09_part004.c - 3 个函数
// 函数: void NetworkSystem_bf290(int64_t *param_1,int32_t *param_2,float param_3)
void NetworkSystem_bf290(int64_t *param_1,int32_t *param_2,float param_3)
{
  int64_t *plVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_108 [32];
  void *plocal_var_e8;
  int32_t local_var_e0;
  int32_t local_var_dc;
  int8_t local_var_d8;
  int32_t local_var_d0;
  int32_t local_var_cc;
  int32_t local_var_c8;
  int32_t local_var_c4;
  int32_t local_var_c0;
  int32_t local_var_bc;
  int32_t local_var_b8;
  int32_t local_var_b4;
  int32_t local_var_b0;
  float fStack_ac;
  void **pplocal_var_a8;
  uint64_t local_var_a0;
  int64_t alStack_98 [8];
  int iStack_58;
  uint64_t local_var_48;
  local_var_a0 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_108;
  if ((float)param_2[8] < 5000.0) {
    if (param_3 <= 0.01) {
      iVar3 = UtilitiesSystem_19450(param_1 + 0x408);
      if (iVar3 == 4) {
        iStack_58 = 0;
        plocal_var_e8 = &processed_var_6432_ptr;
        local_var_dc = 0x31b789;
        local_var_e0 = 2;
        local_var_d8 = 0;
        local_var_d0 = *param_2;
        local_var_cc = param_2[1];
        local_var_c8 = param_2[2];
        local_var_c4 = param_2[3];
        local_var_c0 = param_2[4];
        local_var_bc = param_2[5];
        local_var_b8 = param_2[6];
        local_var_b4 = param_2[7];
        local_var_b0 = param_2[8];
        pplocal_var_a8 = &plocal_var_e8;
        fStack_ac = (float)CONCAT31(fStack_ac._1_3_,1);
        plVar1 = *(int64_t **)(*(int64_t *)(*(int64_t *)(*param_1 + 0x660) + 0x28f8) + 0x318);
        (**(code **)(*plVar1 + 0x118))(plVar1,&local_var_d0,alStack_98);
        if (iStack_58 != 0) {
          param_1[(int64_t)(int)param_1[0x412] + 0x408] = alStack_98[0];
          *(int *)(param_1 + 0x412) = ((int)param_1[0x412] + 1) % 10;
        }
        iStack_58 = 0;
      }
    }
    else {
      iVar3 = 0;
      do {
        plVar1 = (int64_t *)param_1[(int64_t)((((int)param_1[0x412] - iVar3) + 9) % 10) + 0x408];
        if (((plVar1 != (int64_t *)0x0) &&
            (((plVar1[2] == 0 || ((*(byte *)(plVar1[2] + 0x2e8) & 0xb) == 0xb)) &&
             ((*(uint *)(plVar1 + 3) & 0x31b789) == 0)))) &&
           (iVar2 = (**(code **)(*plVar1 + 0x168))(plVar1,param_2,param_3), iVar2 != 0))
        goto LAB_1805bf521;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 10);
      local_var_dc = 0x31b789;
      local_var_e0 = 2;
      local_var_d8 = 0;
      plocal_var_e8 = &memory_allocator_3392_ptr;
      local_var_d0 = *param_2;
      local_var_cc = param_2[1];
      local_var_c8 = param_2[2];
      local_var_c4 = param_2[3];
      local_var_c0 = param_2[4];
      local_var_bc = param_2[5];
      local_var_b8 = param_2[6];
      local_var_b4 = param_2[7];
      local_var_b0 = param_2[8];
      pplocal_var_a8 = &plocal_var_e8;
      iStack_58 = 0;
      plVar1 = *(int64_t **)(*(int64_t *)(*(int64_t *)(param_1[0x291] + 0x18) + 0x28f8) + 0x318);
      fStack_ac = param_3;
      (**(code **)(*plVar1 + 0x148))(plVar1,&local_var_d0,alStack_98);
      if (0 < iStack_58) {
        param_1[(int64_t)(int)param_1[0x412] + 0x408] = alStack_98[0];
        *(int *)(param_1 + 0x412) = ((int)param_1[0x412] + 1) % 10;
      }
      iStack_58 = 0;
    }
  }
LAB_1805bf521:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_108);
}
uint64_t NetworkSystem_bf5a0(int64_t param_1,int param_2)
{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  uVar2 = NetworkSystem_bf660();
  uVar5 = uVar2 & 0xffffffff;
  uVar4 = uVar2;
  if ((*(uint *)(param_1 + 0x209c) >> 0xb & 1) == 0) {
    if (*(char *)(param_1 + 0x21c0) == '\0') {
      iVar1 = *(int *)(param_1 + 0x14b8);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x21c8);
    }
    uVar4 = uVar5;
    if (-1 < iVar1) {
      if (*(int *)((int64_t)iVar1 * 0x3c + 0x1c4c + param_1) == param_2) {
        *(int *)((int64_t)iVar1 * 0x3c + 0x1c54 + param_1) = (int)uVar2;
        return uVar5;
      }
      uVar5 = 0;
      uVar6 = 0;
      if (0 < (int64_t)*(int *)(param_1 + 0x200c)) {
        piVar3 = (int *)(param_1 + 0x1c4c);
        uVar7 = uVar5;
        do {
          uVar6 = (uint)uVar7;
          if (*piVar3 == param_2) break;
          uVar6 = uVar6 + 1;
          uVar7 = (uint64_t)uVar6;
          uVar5 = uVar5 + 1;
          piVar3 = piVar3 + 0xf;
        } while ((int64_t)uVar5 < (int64_t)*(int *)(param_1 + 0x200c));
      }
      if ((int)uVar6 < *(int *)(param_1 + 0x200c)) {
        *(int *)((int64_t)(int)uVar6 * 0x3c + 0x1c54 + param_1) = (int)uVar2;
      }
    }
  }
  return uVar4;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
char NetworkSystem_bf660(int64_t *param_1,int param_2,int64_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int32_t uVar5;
  char cVar6;
  int iVar7;
  int64_t lVar8;
  float *pfVar9;
  int64_t lVar10;
  int64_t lVar11;
  float fVar12;
  int8_t auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  int32_t local_var_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  int32_t local_var_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  int32_t local_var_13c;
  uint64_t local_var_138;
  float fStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int32_t local_var_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  int32_t local_var_10c;
  float fStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  int32_t local_var_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  int32_t local_var_e4;
  float fStack_e0;
  lVar8 = *param_1;
  lVar10 = 0;
  lVar1 = param_1[0x291];
  lVar11 = (int64_t)param_2 * 0xa60;
  if ((*(int *)(lVar8 + 0x564) != -1) || (cVar6 = SystemFunction_000180522f60(lVar8), cVar6 != '\0')) {
    lVar2 = *(int64_t *)(lVar11 + 0x30c0 + lVar1);
    lVar3 = *(int64_t *)(lVar8 + 0x20);
    fVar12 = (float)atan2f(*(float *)(lVar3 + 0xc) - *(float *)(lVar2 + 0xc),
                           *(float *)(lVar2 + 0x10) - *(float *)(lVar3 + 0x10));
    fVar12 = fVar12 - *(float *)(lVar3 + 0x34);
    if (fVar12 <= 3.1415927) {
      if (fVar12 < -3.1415927) {
        fVar12 = fVar12 + 6.2831855;
      }
    }
    else {
      fVar12 = fVar12 + -6.2831855;
    }
    lVar8 = PhysicsSystem_ForceCalculator(lVar8 + 0x28,9);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x1c) != -1)) {
      iVar7 = SystemCacheManager(&system_data_5f30,*(int32_t *)(*(int64_t *)(*param_1 + 0x590) + 0xac));
      iVar7 = *(int *)(system_system_memory + (int64_t)iVar7 * 4);
      if (iVar7 != -1) {
        lVar10 = *(int64_t *)(system_system_memory + (int64_t)iVar7 * 8);
      }
      lVar8 = (int64_t)*(short *)(lVar10 + 0x7e) * 0x68 + system_system_memory;
      if (*(int *)(*param_1 + 0x564) == -1) {
        fVar22 = *(float *)(lVar8 + 0x58);
        fVar15 = *(float *)(lVar8 + 0x54);
      }
      else {
        fVar22 = *(float *)(lVar8 + 0x44);
        fVar15 = *(float *)(lVar8 + 0x40);
      }
      if ((fVar12 < fVar22) || (fVar15 <= fVar12)) {
        return '\x05';
      }
    }
  }
  if ((char)param_1[0x438] == '\0') {
    iVar7 = *(int *)((int64_t)param_1 + 0x14b4);
  }
  else {
    iVar7 = *(int *)((int64_t)param_1 + 0x21c4);
  }
  if (iVar7 < 0) {
LAB_1805bf88b:
    pfVar9 = (float *)(*(int64_t *)(lVar11 + 0x3778 + lVar1) + 0x8c4);
  }
  else {
    lVar8 = *(int64_t *)((int64_t)iVar7 * 0xa60 + 0x3778 + param_1[0x291]);
    if ((lVar8 == 0) || (*(char *)(lVar8 + 0x8be) == '\0')) goto LAB_1805bf88b;
    if ((char)param_1[0x438] == '\0') {
      iVar7 = *(int *)((int64_t)param_1 + 0x14b4);
    }
    else {
      iVar7 = *(int *)((int64_t)param_1 + 0x21c4);
    }
    if ((*(int *)((int64_t)iVar7 * 0xa60 + 0x30b0 + param_1[0x291]) !=
         *(int *)(lVar11 + 0x30b0 + lVar1)) ||
       (((pfVar9 = (float *)(param_1 + 0x270), *pfVar9 == 0.0 &&
         (*(float *)((int64_t)param_1 + 0x1384) == 0.0)) && (*(float *)(param_1 + 0x271) == 0.0))))
    goto LAB_1805bf88b;
  }
  NetworkSystem_0a660(*param_1,&fStack_168);
  fVar15 = fStack_160;
  fVar22 = fStack_164;
  fVar12 = fStack_168;
  fVar16 = *pfVar9 - fStack_168;
  fVar17 = pfVar9[1] - fStack_164;
  fVar19 = pfVar9[2] - fStack_160;
  local_var_14c = 0x7f7fffff;
  fVar14 = fVar17 * fVar17 + fVar16 * fVar16 + fVar19 * fVar19;
  auVar13 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
  fVar21 = auVar13._0_4_;
  fVar21 = fVar21 * 0.5 * (3.0 - fVar14 * fVar21 * fVar21);
  fVar14 = fVar21 * fVar14;
  fStack_158 = fVar21 * fVar16;
  fStack_154 = fVar21 * fVar17;
  fStack_150 = fVar21 * fVar19;
  cVar6 = NetworkSystem_c0080(param_1,&fStack_168,&fStack_158,fVar14,*(int32_t *)(param_3 + 0x14));
  if (*(float *)(param_3 + 0x18) <= fVar14) {
    if (cVar6 == '\0') {
      fVar18 = *(float *)(*(int64_t *)(*param_1 + 0x20) + 0x1d0);
      local_var_11c = 0x7f7fffff;
      fStack_128 = fVar12 - fVar21 * fVar16 * fVar18;
      fStack_124 = fVar22 - fVar21 * fVar17 * fVar18;
      fStack_120 = fVar15 - fVar21 * fVar19 * fVar18;
      fStack_118 = fStack_158;
      fStack_114 = fStack_154;
      fStack_110 = fStack_150;
      local_var_10c = local_var_14c;
      fStack_108 = fVar14;
      iVar7 = NetworkSystem_bf290(param_1,&fStack_128);
      if (iVar7 == 4) {
        return '\x03';
      }
      return (iVar7 == 3) + '\x01';
    }
  }
  else {
    lVar10 = *(int64_t *)(*param_1 + 0x8f8) + (int64_t)*(int *)(param_3 + 0x20) * 0x1f8 + 8;
    NetworkSystem_279f0(*param_1,&fStack_168,*(uint64_t *)(param_3 + 8),lVar10);
    lVar8 = *param_1;
    fVar12 = *(float *)(*(int64_t *)(lVar8 + 0x590) + 0x258c);
    fVar22 = *(float *)(*(int64_t *)(lVar8 + 0x590) + 0x2588);
    fStack_148 = fVar12 * *(float *)(lVar8 + 0x530) + fVar22 * *(float *)(lVar8 + 0x520);
    fStack_144 = fVar22 * *(float *)(lVar8 + 0x524) + fVar12 * *(float *)(lVar8 + 0x534);
    local_var_138 = CONCAT44(fStack_154,fStack_158);
    fVar12 = fStack_144 * fStack_144 + fStack_148 * fStack_148;
    auVar13 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar22 = auVar13._0_4_;
    fVar15 = fVar22 * 0.5 * (3.0 - fVar12 * fVar22 * fVar22);
    fVar21 = fStack_148 * fVar15;
    fVar12 = fStack_154 * fStack_154 + fStack_158 * fStack_158;
    fVar15 = fStack_144 * fVar15;
    auVar13 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar22 = auVar13._0_4_;
    fVar12 = fVar22 * 0.5 * (3.0 - fVar12 * fVar22 * fVar22);
    fVar14 = fStack_158 * fVar12;
    fVar12 = fStack_154 * fVar12;
    fVar22 = fVar12 * fVar15 + fVar14 * fVar21;
    if (fVar22 <= -1.0) {
      fVar22 = -1.0;
    }
    fVar16 = fStack_168;
    fVar17 = fStack_164;
    if (fVar22 < 0.999) {
      uVar4 = *(uint64_t *)(*(int64_t *)(lVar8 + 0x6d8) + 0x8e4);
      local_var_138._0_4_ = (float)uVar4;
      fVar16 = (float)local_var_138;
      local_var_138._4_4_ = (float)((uint64_t)uVar4 >> 0x20);
      fVar17 = local_var_138._4_4_;
      fVar18 = fStack_168 - (float)local_var_138;
      fVar20 = fStack_164 - local_var_138._4_4_;
      local_var_138 = uVar4;
      acosf(fVar22);
      fVar19 = (float)sinf();
      if (0.0 <= fVar12 * fVar21 - fVar14 * fVar15) {
        fVar12 = fVar19 * fVar18 + fVar20 * fVar22;
        fVar22 = fVar18 * fVar22 - fVar19 * fVar20;
      }
      else {
        fVar12 = fVar20 * fVar22 - fVar19 * fVar18;
        fVar22 = fVar19 * fVar20 + fVar18 * fVar22;
      }
      fVar16 = fVar22 + fVar16;
      fVar17 = fVar12 + fVar17;
    }
    fVar15 = *pfVar9 - fVar16;
    fVar21 = pfVar9[1] - fVar17;
    fVar22 = pfVar9[2] - fStack_160;
    local_var_14c = 0x7f7fffff;
    fStack_158 = fVar15;
    fStack_154 = fVar21;
    fStack_150 = fVar22;
    lVar8 = NetworkSystem_a6ff0(&fStack_148,*(int32_t *)(param_3 + 0x14),&fStack_158,
                          *(int32_t *)(param_3 + 0x10));
    fVar12 = fStack_150;
    uVar5 = local_var_15c;
    fStack_130 = *(float *)(lVar8 + 8);
    if (fStack_130 <= 0.0) {
      fVar14 = -1.0;
    }
    else {
      fVar14 = fStack_130 / fStack_150;
    }
    if ((cVar6 == '\0') || (0.5 <= fStack_150)) {
      fVar20 = fVar21 * fVar21 + fVar15 * fVar15 + fVar22 * fVar22;
      auVar13 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
      fVar18 = auVar13._0_4_;
      fVar19 = *(float *)(*(int64_t *)(*param_1 + 0x20) + 0x1d0);
      fStack_e0 = fVar18 * 0.5 * (3.0 - fVar20 * fVar18 * fVar18);
      fStack_148 = fVar15 * fStack_e0;
      fStack_144 = fStack_e0 * fVar21;
      fStack_140 = fStack_e0 * fVar22;
      fVar16 = fVar16 - fStack_148 * fVar19;
      fVar17 = fVar17 - fStack_144 * fVar19;
      fStack_e0 = fStack_e0 * fVar20;
      fVar22 = fStack_160 - fStack_140 * fVar19;
      local_var_f4 = local_var_15c;
      local_var_13c = 0x7f7fffff;
      local_var_e4 = 0x7f7fffff;
      fStack_100 = fVar16;
      fStack_fc = fVar17;
      fStack_f8 = fVar22;
      fStack_f0 = fStack_148;
      fStack_ec = fStack_144;
      fStack_e8 = fStack_140;
      SystemFunction_0001805d8e60(lVar10);
      iVar7 = NetworkSystem_bf290(param_1,&fStack_100);
      if (iVar7 != 4) {
LAB_1805bff74:
        return (iVar7 == 3) + '\x01';
      }
      if (0.0 < fVar14) {
        local_var_13c = 0x7f7fffff;
        local_var_15c = 0x7f7fffff;
        fStack_148 = fStack_158 * fVar14 + fVar16;
        fStack_144 = fStack_154 * fVar14 + fVar17;
        fStack_140 = fVar12 * fVar14 + fVar22;
        fStack_168 = *pfVar9 - fStack_148;
        fStack_164 = pfVar9[1] - fStack_144;
        fStack_160 = pfVar9[2] - fStack_140;
        fVar12 = (float)UtilitiesSystem_CryptoHandler(&fStack_168);
        if ((*(float *)(*(int64_t *)(lVar11 + 0x30c0 + lVar1) + 0x1d0) * 0.5 < fVar12) &&
           (cVar6 = NetworkSystem_c0080(param_1,&fStack_148,&fStack_168,fVar12,
                                  *(int32_t *)(param_3 + 0x14)), cVar6 != '\0')) {
          return '\x04';
        }
        fStack_118 = fStack_158;
        fStack_114 = fStack_154;
        fStack_110 = fStack_150;
        local_var_10c = local_var_14c;
        local_var_11c = uVar5;
        fStack_128 = fVar16;
        fStack_124 = fVar17;
        fStack_120 = fVar22;
        fStack_108 = fVar14;
        iVar7 = NetworkSystem_bf290(param_1,&fStack_128);
        if (iVar7 != 4) goto LAB_1805bff74;
      }
      return '\x03';
    }
  }
  return '\x04';
}
int NetworkSystem_bf7bc(uint64_t param_1,char param_2)
{
  int32_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  float *pfVar7;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint8_t uVar8;
  int64_t *unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  uint64_t *puVar9;
  int64_t unaff_R15;
  float extraout_XMM0_Da;
  float fVar10;
  int8_t auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  int32_t local_buffer_3c;
  float local_var_40;
  float fStack0000000000000044;
  float local_var_48;
  int32_t local_buffer_4c;
  float local_buffer_50;
  float fStack0000000000000054;
  float local_buffer_58;
  int32_t local_buffer_5c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float local_buffer_68;
  float local_buffer_70;
  float fStack0000000000000074;
  float local_buffer_78;
  int32_t local_buffer_7c;
  if (param_2 == '\0') {
    iVar5 = *(int *)((int64_t)unaff_RDI + 0x14b4);
  }
  else {
    iVar5 = *(int *)((int64_t)unaff_RDI + 0x21c4);
  }
  if (iVar5 < 0) {
LAB_1805bf88b:
    pfVar7 = (float *)(*(int64_t *)(unaff_R15 + 0x3778 + unaff_R12) + 0x8c4);
  }
  else {
    lVar6 = *(int64_t *)((int64_t)iVar5 * 0xa60 + 0x3778 + unaff_RDI[0x291]);
    if ((lVar6 == 0) || (*(char *)(lVar6 + 0x8be) == (char)unaff_RSI)) goto LAB_1805bf88b;
    if (param_2 == '\0') {
      iVar5 = *(int *)((int64_t)unaff_RDI + 0x14b4);
    }
    else {
      iVar5 = *(int *)((int64_t)unaff_RDI + 0x21c4);
    }
    if ((*(int *)((int64_t)iVar5 * 0xa60 + 0x30b0 + unaff_RDI[0x291]) !=
         *(int *)(unaff_R15 + 0x30b0 + unaff_R12)) ||
       (((pfVar7 = (float *)(unaff_RDI + 0x270), *pfVar7 == 0.0 &&
         (*(float *)((int64_t)unaff_RDI + 0x1384) == 0.0)) &&
        (*(float *)(unaff_RDI + 0x271) == 0.0)))) goto LAB_1805bf88b;
  }
  NetworkSystem_0a660(*unaff_RDI,&local_buffer_00000030);
  fVar13 = fStack0000000000000038;
  fVar10 = fStack0000000000000034;
  fVar15 = fStack0000000000000030;
  fVar14 = *pfVar7 - fStack0000000000000030;
  fVar16 = pfVar7[1] - fStack0000000000000034;
  fVar18 = pfVar7[2] - fStack0000000000000038;
  local_buffer_4c = 0x7f7fffff;
  fVar12 = fVar16 * fVar16 + fVar14 * fVar14 + fVar18 * fVar18;
  auVar11 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
  fVar17 = auVar11._0_4_;
  fVar20 = fVar17 * 0.5 * (3.0 - fVar12 * fVar17 * fVar17);
  fVar12 = fVar20 * fVar12;
  local_var_40 = fVar20 * fVar14;
  fStack0000000000000044 = fVar20 * fVar16;
  local_var_48 = fVar20 * fVar18;
  cVar4 = NetworkSystem_c0080(*(int32_t *)(unaff_R13 + 0x14),&local_buffer_00000030,&local_buffer_00000040,fVar12,
                        *(int32_t *)(unaff_R13 + 0x14));
  fVar17 = *(float *)(unaff_R13 + 0x18);
  *(char *)(unaff_RBP + 0xa8) = cVar4;
  uVar8 = (uint8_t)((uint64_t)unaff_RSI >> 8);
  if (fVar17 <= fVar12) {
    if (cVar4 == '\0') {
      fVar17 = *(float *)(*(int64_t *)(*unaff_RDI + 0x20) + 0x1d0);
      local_buffer_7c = 0x7f7fffff;
      local_buffer_70 = fVar15 - fVar20 * fVar14 * fVar17;
      fStack0000000000000074 = fVar10 - fVar20 * fVar16 * fVar17;
      *(float *)(unaff_RBP + -0x70) = fVar12;
      local_buffer_78 = fVar13 - fVar20 * fVar18 * fVar17;
      *(float *)(unaff_RBP + -0x80) = local_var_40;
      *(float *)(unaff_RBP + -0x7c) = fStack0000000000000044;
      *(float *)(unaff_RBP + -0x78) = local_var_48;
      *(int32_t *)(unaff_RBP + -0x74) = local_buffer_4c;
      iVar5 = NetworkSystem_bf290(local_var_40,&local_buffer_00000070);
      if (iVar5 == 4) {
        return 3;
      }
      return (int)CONCAT71(uVar8,iVar5 == 3) + 1;
    }
  }
  else {
    puVar9 = (uint64_t *)
             (*(int64_t *)(*unaff_RDI + 0x8f8) + (int64_t)*(int *)(unaff_R13 + 0x20) * 0x1f8 + 8);
    NetworkSystem_279f0(*unaff_RDI,&local_buffer_00000030,*(uint64_t *)(unaff_R13 + 8),puVar9);
    lVar6 = *unaff_RDI;
    fVar17 = *(float *)(*(int64_t *)(lVar6 + 0x590) + 0x258c);
    fVar15 = *(float *)(*(int64_t *)(lVar6 + 0x590) + 0x2588);
    local_buffer_50 = fVar17 * *(float *)(lVar6 + 0x530) + fVar15 * *(float *)(lVar6 + 0x520);
    fStack0000000000000054 = fVar15 * *(float *)(lVar6 + 0x524) + fVar17 * *(float *)(lVar6 + 0x534)
    ;
    *(uint64_t *)(unaff_RBP + 0xa0) = CONCAT44(fStack0000000000000054,local_buffer_50);
    fVar17 = *(float *)(unaff_RBP + 0xa0);
    fVar15 = *(float *)(unaff_RBP + 0xa4);
    _fStack0000000000000060 = CONCAT44(fStack0000000000000044,local_var_40);
    fVar10 = fVar15 * fVar15 + fVar17 * fVar17;
    auVar11 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
    fVar13 = auVar11._0_4_;
    fVar13 = fVar13 * 0.5 * (3.0 - fVar10 * fVar13 * fVar13);
    fVar17 = fVar17 * fVar13;
    fVar10 = fStack0000000000000044 * fStack0000000000000044 + local_var_40 * local_var_40
    ;
    fVar15 = fVar15 * fVar13;
    *(float *)(unaff_RBP + 0xa0) = fVar17;
    *(float *)(unaff_RBP + 0xb8) = fVar15;
    auVar11 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
    fVar13 = auVar11._0_4_;
    fVar10 = fVar13 * 0.5 * (3.0 - fVar10 * fVar13 * fVar13);
    fVar13 = local_var_40 * fVar10;
    fVar10 = fStack0000000000000044 * fVar10;
    fVar17 = fVar10 * fVar15 + fVar13 * fVar17;
    if (fVar17 <= -1.0) {
      fVar17 = -1.0;
    }
    fVar15 = fStack0000000000000030;
    fVar12 = fStack0000000000000034;
    if (fVar17 < 0.999) {
      uVar3 = *(uint64_t *)(*(int64_t *)(lVar6 + 0x6d8) + 0x8e4);
      fStack0000000000000060 = (float)uVar3;
      fVar14 = fStack0000000000000060;
      fStack0000000000000064 = (float)((uint64_t)uVar3 >> 0x20);
      fVar16 = fStack0000000000000064;
      fVar20 = fStack0000000000000030 - fStack0000000000000060;
      fVar19 = fStack0000000000000034 - fStack0000000000000064;
      _fStack0000000000000060 = uVar3;
      acosf(fVar17);
      fVar15 = *(float *)(unaff_RBP + 0xa0);
      fVar12 = *(float *)(unaff_RBP + 0xb8);
      fVar18 = (float)sinf();
      if (0.0 <= fVar10 * fVar15 - fVar13 * fVar12) {
        fVar10 = fVar18 * fVar20 + fVar19 * fVar17;
        fVar17 = fVar20 * fVar17 - fVar18 * fVar19;
      }
      else {
        fVar10 = fVar19 * fVar17 - fVar18 * fVar20;
        fVar17 = fVar18 * fVar19 + fVar20 * fVar17;
      }
      fVar15 = fVar17 + fVar14;
      fVar12 = fVar10 + fVar16;
    }
    fVar17 = fStack0000000000000038;
    fVar14 = *pfVar7 - fVar15;
    fVar16 = pfVar7[1] - fVar12;
    uVar1 = *(int32_t *)(unaff_R13 + 0x10);
    fVar13 = pfVar7[2] - fStack0000000000000038;
    uVar2 = *(int32_t *)(unaff_R13 + 0x14);
    local_buffer_4c = 0x7f7fffff;
    *(float *)(unaff_RBP + 0xa0) = fVar13;
    local_var_40 = fVar14;
    fStack0000000000000044 = fVar16;
    local_var_48 = fVar13;
    lVar6 = NetworkSystem_a6ff0(&local_buffer_00000050,uVar2,&local_buffer_00000040,uVar1);
    fVar10 = local_var_48;
    uVar1 = local_buffer_3c;
    local_buffer_68 = *(float *)(lVar6 + 8);
    if (local_buffer_68 <= 0.0) {
      fVar18 = -1.0;
    }
    else {
      fVar18 = local_buffer_68 / local_var_48;
    }
    if ((*(char *)(unaff_RBP + 0xa8) == (char)unaff_RSI) || (0.5 <= local_var_48)) {
      fVar19 = fVar16 * fVar16 + fVar14 * fVar14 + fVar13 * fVar13;
      auVar11 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
      fVar20 = auVar11._0_4_;
      fVar13 = *(float *)(*(int64_t *)(*unaff_RDI + 0x20) + 0x1d0);
      fVar20 = fVar20 * 0.5 * (3.0 - fVar19 * fVar20 * fVar20);
      local_buffer_50 = fVar14 * fVar20;
      fStack0000000000000054 = fVar20 * fVar16;
      local_buffer_58 = fVar20 * *(float *)(unaff_RBP + 0xa0);
      fVar15 = fVar15 - local_buffer_50 * fVar13;
      fVar12 = fVar12 - fStack0000000000000054 * fVar13;
      *(float *)(unaff_RBP + -0x68) = fVar15;
      fVar17 = fVar17 - local_buffer_58 * fVar13;
      *(int32_t *)(unaff_RBP + -0x5c) = local_buffer_3c;
      *(float *)(unaff_RBP + -100) = fVar12;
      local_buffer_5c = 0x7f7fffff;
      *(float *)(unaff_RBP + -0x58) = local_buffer_50;
      *(float *)(unaff_RBP + -0x54) = fStack0000000000000054;
      *(float *)(unaff_RBP + -0x50) = local_buffer_58;
      *(int32_t *)(unaff_RBP + -0x4c) = 0x7f7fffff;
      *(float *)(unaff_RBP + -0x60) = fVar17;
      *(float *)(unaff_RBP + -0x48) = fVar20 * fVar19;
      iVar5 = SystemFunction_0001805d8e60(puVar9);
      if ((*(uint *)((int64_t)iVar5 * 0xa0 + 0x50 + puVar9[0x1a]) >> 8 & 1) == 0) {
        puVar9 = (uint64_t *)*puVar9;
      }
      fVar13 = extraout_XMM0_Da;
      if (((puVar9 != (uint64_t *)0x0) &&
          ((*(uint *)((int64_t)*(int *)(puVar9 + 0x1e) * 0xa0 + 0x50 + puVar9[0x1a]) >> 0x1d & 1)
           != 0)) && (puVar9[7] != 0)) {
        lVar6 = *(int64_t *)(puVar9[7] + 0xb8);
        fVar13 = *(float *)(lVar6 + 0x108) - *(float *)(lVar6 + 0xf8);
      }
      iVar5 = NetworkSystem_bf290(fVar13,unaff_RBP + -0x68);
      if (iVar5 != 4) {
LAB_1805bff74:
        return (int)CONCAT71(uVar8,iVar5 == 3) + 1;
      }
      if (0.0 < fVar18) {
        local_buffer_5c = 0x7f7fffff;
        local_buffer_3c = 0x7f7fffff;
        local_buffer_50 = local_var_40 * fVar18 + fVar15;
        fStack0000000000000054 = fStack0000000000000044 * fVar18 + fVar12;
        local_buffer_58 = fVar10 * fVar18 + fVar17;
        fStack0000000000000030 = *pfVar7 - local_buffer_50;
        fStack0000000000000034 = pfVar7[1] - fStack0000000000000054;
        fStack0000000000000038 = pfVar7[2] - local_buffer_58;
        fVar10 = (float)UtilitiesSystem_CryptoHandler(&local_buffer_00000030);
        if ((*(float *)(*(int64_t *)(unaff_R15 + 0x30c0 + unaff_R12) + 0x1d0) * 0.5 < fVar10) &&
           (cVar4 = NetworkSystem_c0080(fVar10,&local_buffer_00000050,&local_buffer_00000030,fVar10,
                                  *(int32_t *)(unaff_R13 + 0x14)), cVar4 != '\0')) {
          return 4;
        }
        *(float *)(unaff_RBP + -0x80) = local_var_40;
        *(float *)(unaff_RBP + -0x7c) = fStack0000000000000044;
        *(float *)(unaff_RBP + -0x78) = local_var_48;
        *(int32_t *)(unaff_RBP + -0x74) = local_buffer_4c;
        local_buffer_7c = uVar1;
        *(float *)(unaff_RBP + -0x70) = fVar18;
        local_buffer_70 = fVar15;
        fStack0000000000000074 = fVar12;
        local_buffer_78 = fVar17;
        iVar5 = NetworkSystem_bf290(local_var_40,&local_buffer_00000070);
        if (iVar5 != 4) goto LAB_1805bff74;
      }
      return 3;
    }
  }
  return 4;
}
// 函数: void NetworkSystem_c005d(void)
void NetworkSystem_c005d(void)
{
  return;
}
uint64_t
NetworkSystem_c0080(int64_t *param_1,float *param_2,float *param_3,float param_4,float param_5)
{
  char cVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int8_t astack_special_x_20 [8];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int32_t local_var_ac;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  int8_t stack_array_98 [128];
  fVar5 = 0.27;
  fVar6 = param_4 - 0.27;
  fStack_b8 = *param_3 * 0.27 + *param_2;
  fStack_b4 = param_3[1] * 0.27 + param_2[1];
  fVar8 = param_5 * 0.35;
  iVar4 = 1 - (int)((fVar6 / param_5) * -2.857143);
  local_var_a8 = CONCAT44(fStack_b4,fStack_b8);
  fStack_b0 = param_3[2] * 0.27 + param_2[2];
  local_var_a0 = CONCAT44(0x7f7fffff,fStack_b0);
  if (1 < iVar4) {
    param_4 = fVar8;
  }
  iVar3 = 0;
  local_var_ac = 0x7f7fffff;
  fStack_b8 = *param_3 * param_4 + fStack_b8;
  fStack_b4 = param_3[1] * param_4 + fStack_b4;
  fStack_b0 = param_3[2] * param_4 + fStack_b0;
  if (0 < iVar4) {
    do {
      lVar2 = (**(code **)(**(int64_t **)(param_1[0x291] + 0x98d250) + 0x28))
                        (*(int64_t **)(param_1[0x291] + 0x98d250),&local_var_a8,&fStack_b8,fVar5,
                         *(int32_t *)(*param_1 + 0x10),astack_special_x_20,&param_5,stack_array_98);
      if ((lVar2 != 0) && (cVar1 = SystemFunction_000180508390(lVar2,*param_1), cVar1 != '\0')) {
        return 1;
      }
      local_var_a8 = CONCAT44(fStack_b4,fStack_b8);
      local_var_a0 = CONCAT44(local_var_ac,fStack_b0);
      if (fVar6 <= 0.0) {
        return 0;
      }
      if (fVar6 <= fVar8) {
        fVar7 = -1.0;
      }
      else {
        fVar7 = fVar6 - fVar8;
        fVar6 = fVar8;
      }
      fStack_b8 = fStack_b8 + *param_3 * fVar6;
      iVar3 = iVar3 + 1;
      fVar5 = fVar5 + 0.15;
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      fStack_b4 = fStack_b4 + param_3[1] * fVar6;
      fStack_b0 = fStack_b0 + param_3[2] * fVar6;
      fVar6 = fVar7;
    } while (iVar3 < iVar4);
  }
  return 0;
}
uint64_t NetworkSystem_c0199(void)
{
  char cVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  float *unaff_RDI;
  int unaff_R14D;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  int64_t lStack0000000000000028;
  int64_t lStack0000000000000030;
  int64_t lStack0000000000000038;
  do {
    lStack0000000000000038 = unaff_RBP + -0x41;
    lStack0000000000000030 = unaff_RBP + 0x7f;
    lStack0000000000000028 = unaff_RBP + 0x77;
    lVar2 = (**(code **)(**(int64_t **)(unaff_RSI[0x291] + 0x98d250) + 0x28))
                      (*(int64_t **)(unaff_RSI[0x291] + 0x98d250),unaff_RBP + -0x51,
                       unaff_RBP + -0x61,unaff_XMM6_Da,*(int32_t *)(*unaff_RSI + 0x10));
    if ((lVar2 != 0) && (cVar1 = SystemFunction_000180508390(lVar2,*unaff_RSI), cVar1 != '\0')) {
      return 1;
    }
    *(uint64_t *)(unaff_RBP + -0x51) = *(uint64_t *)(unaff_RBP + -0x61);
    *(uint64_t *)(unaff_RBP + -0x49) = *(uint64_t *)(unaff_RBP + -0x59);
    if (unaff_XMM7_Da <= unaff_XMM9_Da) {
      return 0;
    }
    if (unaff_XMM7_Da <= unaff_XMM8_Da) {
      fVar3 = *unaff_RDI * unaff_XMM7_Da;
      fVar4 = unaff_RDI[1] * unaff_XMM7_Da;
      fVar5 = unaff_RDI[2] * unaff_XMM7_Da;
      unaff_XMM7_Da = -1.0;
    }
    else {
      unaff_XMM7_Da = unaff_XMM7_Da - unaff_XMM8_Da;
      fVar3 = *unaff_RDI * unaff_XMM8_Da;
      fVar4 = unaff_RDI[1] * unaff_XMM8_Da;
      fVar5 = unaff_RDI[2] * unaff_XMM8_Da;
    }
    unaff_EBX = unaff_EBX + 1;
    unaff_XMM6_Da = unaff_XMM6_Da + unaff_XMM10_Da;
    *(float *)(unaff_RBP + -0x61) = *(float *)(unaff_RBP + -0x61) + fVar3;
    if (1.0 <= unaff_XMM6_Da) {
      unaff_XMM6_Da = 1.0;
    }
    *(float *)(unaff_RBP + -0x5d) = *(float *)(unaff_RBP + -0x5d) + fVar4;
    *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RBP + -0x59) + fVar5;
  } while (unaff_EBX < unaff_R14D);
  return 0;
}
// 函数: void NetworkSystem_c02b9(void)
void NetworkSystem_c02b9(void)
{
  return;
}
int8_t NetworkSystem_c02ea(void)
{
  return 1;
}
int8_t thunk_NetworkSystem_c02b9(void)
{
  return 0;
}