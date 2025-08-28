#include "TaleWorlds.Native.Split.h"
// 99_part_07_part065.c - 6 个函数
// 函数: void function_4d753c(uint64_t param_1,int param_2,int64_t param_3,uint64_t param_4)
void function_4d753c(uint64_t param_1,int param_2,int64_t param_3,uint64_t param_4)
{
  float *pfVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
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
  float fVar18;
  float fVar19;
  float fVar20;
  uint64_t uVar21;
  int64_t in_RAX;
  int64_t lVar22;
  uint uVar23;
  uint64_t unaff_RBX;
  int64_t lVar24;
  uint64_t uVar25;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t uVar26;
  int64_t in_R10;
  uint64_t unaff_R12;
  uint64_t unaff_R15;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  uint64_t local_var_30;
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_R12;
  *(uint64_t *)(in_RAX + 0x20) = unaff_R15;
  lVar24 = (param_4 & (int64_t)param_2) * 0xd8;
  lVar6 = *(int64_t *)(in_R10 + (int64_t)(param_2 >> 10) * 8);
  iVar4 = *(int *)(lVar6 + 0x24 + lVar24);
  lVar7 = *(int64_t *)(param_3 + (int64_t)(iVar4 >> 10) * 8);
  uVar23 = *(uint *)(lVar6 + 0x1c + lVar24);
  if ((uVar23 != 0xffffffff) && (lVar8 = *(int64_t *)(lVar6 + 0x98 + lVar24), lVar8 != 0)) {
    uVar5 = *(uint *)(lVar6 + 0x18 + lVar24);
    uVar25 = 0;
    lVar22 = (int64_t)(int)(*(uint *)(unaff_RSI + 0x6b8) & uVar23);
    local_var_30 = 0;
    lVar6 = *(int64_t *)(*(int64_t *)(unaff_RSI + 0x698) + (int64_t)((int)uVar23 >> 10) * 8);
    lVar24 = *(int64_t *)(unaff_RSI + 0x488);
    *(int16_t *)(unaff_RBP + -0x7d) = 0xff01;
    *(uint64_t *)(unaff_RBP + -0x79) = 0;
    uVar3 = *(int32_t *)(lVar6 + 0x28 + lVar22 * 0x30);
    *(int32_t *)(unaff_RBP + -0x71) = *(int32_t *)(lVar6 + 0x1c + lVar22 * 0x30);
    *(int32_t *)(unaff_RBP + -0x6d) = *(int32_t *)(lVar6 + 0x18 + lVar22 * 0x30);
    *(int32_t *)(unaff_RBP + -0x69) = *(int32_t *)(lVar6 + 0x14 + lVar22 * 0x30);
    *(int8_t *)(unaff_RBP + -0x65) = *(int8_t *)(lVar6 + 0x10 + lVar22 * 0x30);
    *(int32_t *)(unaff_RBP + -0x5d) = *(int32_t *)(lVar6 + 0x20 + lVar22 * 0x30);
    uVar23 = *(uint *)(unaff_RSI + 0x4a8);
    *(int32_t *)(unaff_RBP + -0x61) = *(int32_t *)(lVar6 + 0x24 + lVar22 * 0x30);
    lVar22 = (int64_t)(int)(uVar23 & uVar5);
    *(int32_t *)(unaff_RBP + -0x39) = uVar3;
    *(int32_t *)(unaff_RBP + -0x59) = 0;
    *(int16_t *)(unaff_RBP + -0x55) = 0x400;
    *(uint64_t *)(unaff_RBP + -0x51) = 0;
    lVar6 = *(int64_t *)(lVar24 + (int64_t)((int)uVar5 >> 10) * 8);
    lVar24 = *(int64_t *)(unaff_RSI + 8);
    *(int32_t *)(unaff_RBP + -0x49) = 0;
    *(uint64_t *)(unaff_RBP + -0x41) = 0;
    pfVar1 = (float *)(lVar6 + 0x28 + lVar22 * 0x48);
    fVar9 = *pfVar1;
    fVar10 = pfVar1[1];
    fVar11 = pfVar1[2];
    fVar12 = pfVar1[3];
    *(int8_t *)(unaff_RBP + -0x35) = 0;
    pfVar1 = (float *)(lVar6 + 8 + lVar22 * 0x48);
    fVar13 = *pfVar1;
    fVar14 = pfVar1[1];
    fVar15 = pfVar1[2];
    fVar16 = pfVar1[3];
    *(uint64_t *)(unaff_RBP + -0x21) = 0;
    pfVar1 = (float *)(lVar6 + 0x18 + lVar22 * 0x48);
    fVar17 = *pfVar1;
    fVar18 = pfVar1[1];
    fVar19 = pfVar1[2];
    fVar20 = pfVar1[3];
    puVar2 = (uint64_t *)(lVar6 + 0x38 + lVar22 * 0x48);
    uVar21 = puVar2[1];
    lVar6 = *(int64_t *)(unaff_RSI + 0x10);
    fVar35 = fVar13 * 0.0;
    fVar36 = fVar14 * 0.0;
    fVar37 = fVar15 * 0.0;
    fVar38 = fVar16 * 0.0;
    *(uint64_t *)(unaff_RBP + 0x17) = *puVar2;
    *(uint64_t *)(unaff_RBP + 0x1f) = uVar21;
    fVar27 = fVar9 * 0.0;
    fVar28 = fVar10 * 0.0;
    fVar29 = fVar11 * 0.0;
    fVar30 = fVar12 * 0.0;
    fVar31 = fVar17 * 0.0;
    fVar32 = fVar18 * 0.0;
    fVar33 = fVar19 * 0.0;
    fVar34 = fVar20 * 0.0;
    *(float *)(unaff_RBP + -0x19) = fVar13 * 1.3 + fVar31 + fVar27;
    *(float *)(unaff_RBP + -0x15) = fVar14 * 1.3 + fVar32 + fVar28;
    *(float *)(unaff_RBP + -0x11) = fVar15 * 1.3 + fVar33 + fVar29;
    *(float *)(unaff_RBP + -0xd) = fVar16 * 1.3 + fVar34 + fVar30;
    *(float *)(unaff_RBP + -9) = fVar17 * 1.3 + fVar35 + fVar27;
    *(float *)(unaff_RBP + -5) = fVar18 * 1.3 + fVar36 + fVar28;
    *(float *)(unaff_RBP + -1) = fVar19 * 1.3 + fVar37 + fVar29;
    *(float *)(unaff_RBP + 3) = fVar20 * 1.3 + fVar38 + fVar30;
    *(float *)(unaff_RBP + 7) = fVar9 * 1.0 + fVar35 + fVar31;
    *(float *)(unaff_RBP + 0xb) = fVar10 * 1.0 + fVar36 + fVar32;
    *(float *)(unaff_RBP + 0xf) = fVar11 * 1.0 + fVar37 + fVar33;
    *(float *)(unaff_RBP + 0x13) = fVar12 * 1.0 + fVar38 + fVar34;
    uVar26 = uVar25;
    if (lVar6 - lVar24 >> 3 != 0) {
      do {
        if (((*(ushort *)(lVar7 + 8 + (param_1 & (int64_t)iVar4) * 0xc) &
             1 << ((byte)uVar25 & 0x1f)) != 0) &&
           (1 < *(int *)(*(int64_t *)(uVar26 + lVar24) + 0x178))) {
          SystemHealthMonitor(lVar8,*(int64_t *)(uVar26 + lVar24),unaff_RBP + -0x19,0,&local_buffer_00000030);
        }
        lVar24 = *(int64_t *)(unaff_RSI + 8);
        uVar23 = (int)uVar25 + 1;
        uVar25 = (uint64_t)uVar23;
        uVar26 = uVar26 + 8;
      } while ((uint64_t)(int64_t)(int)uVar23 <
               (uint64_t)(*(int64_t *)(unaff_RSI + 0x10) - lVar24 >> 3));
    }
  }
  return;
}
// 函数: void function_4d7588(void)
void function_4d7588(void)
{
  float *pfVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  int64_t lVar21;
  int64_t lVar22;
  uint uVar23;
  int64_t unaff_RBX;
  uint64_t uVar24;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t in_R9;
  int64_t in_R10;
  int64_t unaff_R12;
  int64_t unaff_R15;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint64_t local_var_30;
  lVar5 = *(int64_t *)(in_R10 + 0x98 + unaff_RBX);
  if (lVar5 != 0) {
    uVar23 = *(uint *)(in_R10 + 0x18 + unaff_RBX);
    uVar24 = 0;
    uVar20 = (int64_t)*(int *)(unaff_RSI + 0x6b8) & in_R9;
    local_var_30 = 0;
    lVar6 = *(int64_t *)(*(int64_t *)(unaff_RSI + 0x698) + (int64_t)((int)in_R9 >> 10) * 8);
    lVar22 = *(int64_t *)(unaff_RSI + 0x488);
    *(int16_t *)(unaff_RBP + -0x7d) = 0xff01;
    *(uint64_t *)(unaff_RBP + -0x79) = 0;
    uVar3 = *(int32_t *)(lVar6 + 0x28 + uVar20 * 0x30);
    *(int32_t *)(unaff_RBP + -0x71) = *(int32_t *)(lVar6 + 0x1c + uVar20 * 0x30);
    *(int32_t *)(unaff_RBP + -0x6d) = *(int32_t *)(lVar6 + 0x18 + uVar20 * 0x30);
    *(int32_t *)(unaff_RBP + -0x69) = *(int32_t *)(lVar6 + 0x14 + uVar20 * 0x30);
    *(int8_t *)(unaff_RBP + -0x65) = *(int8_t *)(lVar6 + 0x10 + uVar20 * 0x30);
    *(int32_t *)(unaff_RBP + -0x5d) = *(int32_t *)(lVar6 + 0x20 + uVar20 * 0x30);
    uVar4 = *(uint *)(unaff_RSI + 0x4a8);
    *(int32_t *)(unaff_RBP + -0x61) = *(int32_t *)(lVar6 + 0x24 + uVar20 * 0x30);
    lVar21 = (int64_t)(int)(uVar4 & uVar23);
    *(int32_t *)(unaff_RBP + -0x39) = uVar3;
    *(int32_t *)(unaff_RBP + -0x59) = 0;
    *(int16_t *)(unaff_RBP + -0x55) = 0x400;
    *(uint64_t *)(unaff_RBP + -0x51) = 0;
    lVar6 = *(int64_t *)(lVar22 + (int64_t)((int)uVar23 >> 10) * 8);
    lVar22 = *(int64_t *)(unaff_RSI + 8);
    *(int32_t *)(unaff_RBP + -0x49) = 0;
    *(uint64_t *)(unaff_RBP + -0x41) = 0;
    pfVar1 = (float *)(lVar6 + 0x28 + lVar21 * 0x48);
    fVar7 = *pfVar1;
    fVar8 = pfVar1[1];
    fVar9 = pfVar1[2];
    fVar10 = pfVar1[3];
    *(int8_t *)(unaff_RBP + -0x35) = 0;
    pfVar1 = (float *)(lVar6 + 8 + lVar21 * 0x48);
    fVar11 = *pfVar1;
    fVar12 = pfVar1[1];
    fVar13 = pfVar1[2];
    fVar14 = pfVar1[3];
    *(uint64_t *)(unaff_RBP + -0x21) = 0;
    pfVar1 = (float *)(lVar6 + 0x18 + lVar21 * 0x48);
    fVar15 = *pfVar1;
    fVar16 = pfVar1[1];
    fVar17 = pfVar1[2];
    fVar18 = pfVar1[3];
    puVar2 = (uint64_t *)(lVar6 + 0x38 + lVar21 * 0x48);
    uVar19 = puVar2[1];
    lVar6 = *(int64_t *)(unaff_RSI + 0x10);
    fVar33 = fVar11 * 0.0;
    fVar34 = fVar12 * 0.0;
    fVar35 = fVar13 * 0.0;
    fVar36 = fVar14 * 0.0;
    *(uint64_t *)(unaff_RBP + 0x17) = *puVar2;
    *(uint64_t *)(unaff_RBP + 0x1f) = uVar19;
    fVar25 = fVar7 * 0.0;
    fVar26 = fVar8 * 0.0;
    fVar27 = fVar9 * 0.0;
    fVar28 = fVar10 * 0.0;
    fVar29 = fVar15 * 0.0;
    fVar30 = fVar16 * 0.0;
    fVar31 = fVar17 * 0.0;
    fVar32 = fVar18 * 0.0;
    *(float *)(unaff_RBP + -0x19) = fVar11 * 1.3 + fVar29 + fVar25;
    *(float *)(unaff_RBP + -0x15) = fVar12 * 1.3 + fVar30 + fVar26;
    *(float *)(unaff_RBP + -0x11) = fVar13 * 1.3 + fVar31 + fVar27;
    *(float *)(unaff_RBP + -0xd) = fVar14 * 1.3 + fVar32 + fVar28;
    *(float *)(unaff_RBP + -9) = fVar15 * 1.3 + fVar33 + fVar25;
    *(float *)(unaff_RBP + -5) = fVar16 * 1.3 + fVar34 + fVar26;
    *(float *)(unaff_RBP + -1) = fVar17 * 1.3 + fVar35 + fVar27;
    *(float *)(unaff_RBP + 3) = fVar18 * 1.3 + fVar36 + fVar28;
    *(float *)(unaff_RBP + 7) = fVar7 * 1.0 + fVar33 + fVar29;
    *(float *)(unaff_RBP + 0xb) = fVar8 * 1.0 + fVar34 + fVar30;
    *(float *)(unaff_RBP + 0xf) = fVar9 * 1.0 + fVar35 + fVar31;
    *(float *)(unaff_RBP + 0x13) = fVar10 * 1.0 + fVar36 + fVar32;
    uVar20 = uVar24;
    if (lVar6 - lVar22 >> 3 != 0) {
      do {
        if (((*(ushort *)(unaff_R12 + 8 + unaff_R15 * 4) & 1 << ((byte)uVar24 & 0x1f)) != 0) &&
           (1 < *(int *)(*(int64_t *)(uVar20 + lVar22) + 0x178))) {
          SystemHealthMonitor(lVar5,*(int64_t *)(uVar20 + lVar22),unaff_RBP + -0x19,0,&local_buffer_00000030);
        }
        lVar22 = *(int64_t *)(unaff_RSI + 8);
        uVar23 = (int)uVar24 + 1;
        uVar24 = (uint64_t)uVar23;
        uVar20 = uVar20 + 8;
      } while ((uint64_t)(int64_t)(int)uVar23 <
               (uint64_t)(*(int64_t *)(unaff_RSI + 0x10) - lVar22 >> 3));
    }
  }
  return;
}
// 函数: void function_4d75cf(int64_t param_1,int64_t param_2,int64_t param_3)
void function_4d75cf(int64_t param_1,int64_t param_2,int64_t param_3)
{
  float *pfVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int iVar4;
  int64_t lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  int64_t lVar19;
  uint uVar20;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int in_R10D;
  int32_t in_register_00000094;
  int64_t unaff_R12;
  int64_t unaff_R15;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint64_t in_XMM1_Qa;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float in_XMM4_Da;
  float fVar26;
  float in_XMM4_Db;
  float fVar27;
  float in_XMM4_Dc;
  float fVar28;
  float in_XMM4_Dd;
  float fVar29;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  lVar5 = *(int64_t *)(param_2 + param_3 * 8);
  lVar19 = *(int64_t *)(unaff_RSI + 0x488);
  *(int16_t *)(unaff_RBP + -0x7d) = 0xff01;
  *(uint64_t *)(unaff_RBP + -0x79) = unaff_RBX;
  uVar3 = *(int32_t *)(lVar5 + 0x28 + param_1 * 0x30);
  *(int32_t *)(unaff_RBP + -0x71) = *(int32_t *)(lVar5 + 0x1c + param_1 * 0x30);
  *(int32_t *)(unaff_RBP + -0x6d) = *(int32_t *)(lVar5 + 0x18 + param_1 * 0x30);
  *(int32_t *)(unaff_RBP + -0x69) = *(int32_t *)(lVar5 + 0x14 + param_1 * 0x30);
  *(int8_t *)(unaff_RBP + -0x65) = *(int8_t *)(lVar5 + 0x10 + param_1 * 0x30);
  *(int32_t *)(unaff_RBP + -0x5d) = *(int32_t *)(lVar5 + 0x20 + param_1 * 0x30);
  iVar4 = *(int *)(unaff_RSI + 0x4a8);
  *(int32_t *)(unaff_RBP + -0x61) = *(int32_t *)(lVar5 + 0x24 + param_1 * 0x30);
  uVar18 = (int64_t)iVar4 & CONCAT44(in_register_00000094,in_R10D);
  *(int32_t *)(unaff_RBP + -0x39) = uVar3;
  *(int *)(unaff_RBP + -0x59) = (int)unaff_RBX;
  *(int16_t *)(unaff_RBP + -0x55) = 0x400;
  *(uint64_t *)(unaff_RBP + -0x51) = unaff_RBX;
  lVar5 = *(int64_t *)(lVar19 + (int64_t)(in_R10D >> 10) * 8);
  lVar19 = *(int64_t *)(unaff_RSI + 8);
  *(int *)(unaff_RBP + -0x49) = (int)unaff_RBX;
  *(uint64_t *)(unaff_RBP + -0x41) = unaff_RBX;
  pfVar1 = (float *)(lVar5 + 0x28 + uVar18 * 0x48);
  fVar22 = *pfVar1;
  fVar6 = pfVar1[1];
  fVar7 = pfVar1[2];
  fVar8 = pfVar1[3];
  *(char *)(unaff_RBP + -0x35) = (char)unaff_RBX;
  pfVar1 = (float *)(lVar5 + 8 + uVar18 * 0x48);
  fVar9 = *pfVar1;
  fVar10 = pfVar1[1];
  fVar11 = pfVar1[2];
  fVar12 = pfVar1[3];
  *(uint64_t *)(unaff_RBP + -0x21) = unaff_RBX;
  pfVar1 = (float *)(lVar5 + 0x18 + uVar18 * 0x48);
  fVar13 = *pfVar1;
  fVar14 = pfVar1[1];
  fVar15 = pfVar1[2];
  fVar16 = pfVar1[3];
  puVar2 = (uint64_t *)(lVar5 + 0x38 + uVar18 * 0x48);
  uVar17 = puVar2[1];
  lVar5 = *(int64_t *)(unaff_RSI + 0x10);
  fVar30 = fVar9 * 0.0;
  fVar31 = fVar10 * 0.0;
  fVar32 = fVar11 * 0.0;
  fVar33 = fVar12 * 0.0;
  *(uint64_t *)(unaff_RBP + 0x17) = *puVar2;
  *(uint64_t *)(unaff_RBP + 0x1f) = uVar17;
  fVar21 = fVar22 * 0.0;
  fVar23 = fVar6 * 0.0;
  fVar24 = fVar7 * 0.0;
  fVar25 = fVar8 * 0.0;
  fVar26 = in_XMM4_Da * fVar13;
  fVar27 = in_XMM4_Db * fVar14;
  fVar28 = in_XMM4_Dc * fVar15;
  fVar29 = in_XMM4_Dd * fVar16;
  *(float *)(unaff_RBP + -0x19) = (float)in_XMM1_Qa * fVar9 + fVar26 + fVar21;
  *(float *)(unaff_RBP + -0x15) = (float)((uint64_t)in_XMM1_Qa >> 0x20) * fVar10 + fVar27 + fVar23;
  *(float *)(unaff_RBP + -0x11) = in_XMM1_Dc * fVar11 + fVar28 + fVar24;
  *(float *)(unaff_RBP + -0xd) = in_XMM1_Dd * fVar12 + fVar29 + fVar25;
  *(float *)(unaff_RBP + -9) = in_XMM5_Da * fVar13 + fVar30 + fVar21;
  *(float *)(unaff_RBP + -5) = in_XMM5_Db * fVar14 + fVar31 + fVar23;
  *(float *)(unaff_RBP + -1) = in_XMM5_Dc * fVar15 + fVar32 + fVar24;
  *(float *)(unaff_RBP + 3) = in_XMM5_Dd * fVar16 + fVar33 + fVar25;
  fVar22 = fVar22 * 1.0 + fVar30 + fVar26;
  *(float *)(unaff_RBP + 7) = fVar22;
  *(float *)(unaff_RBP + 0xb) = fVar6 * 1.0 + fVar31 + fVar27;
  *(float *)(unaff_RBP + 0xf) = fVar7 * 1.0 + fVar32 + fVar28;
  *(float *)(unaff_RBP + 0x13) = fVar8 * 1.0 + fVar33 + fVar29;
  if (lVar5 - lVar19 >> 3 != 0) {
    uVar18 = unaff_RBX & 0xffffffff;
    do {
      if (((*(ushort *)(unaff_R12 + 8 + unaff_R15 * 4) & 1 << ((byte)unaff_RBX & 0x1f)) != 0) &&
         (1 < *(int *)(*(int64_t *)(uVar18 + lVar19) + 0x178))) {
        fVar22 = (float)SystemHealthMonitor(fVar22,*(int64_t *)(uVar18 + lVar19),unaff_RBP + -0x19,0,
                                      &local_buffer_00000030);
      }
      lVar19 = *(int64_t *)(unaff_RSI + 8);
      uVar20 = (int)unaff_RBX + 1;
      unaff_RBX = (uint64_t)uVar20;
      uVar18 = uVar18 + 8;
    } while ((uint64_t)(int64_t)(int)uVar20 <
             (uint64_t)(*(int64_t *)(unaff_RSI + 0x10) - lVar19 >> 3));
  }
  return;
}
// 函数: void function_4d76f4(uint64_t param_1,int64_t param_2)
void function_4d76f4(uint64_t param_1,int64_t param_2)
{
  uint unaff_EBX;
  int64_t unaff_RSI;
  uint64_t uVar1;
  int64_t unaff_R12;
  int64_t unaff_R15;
  uVar1 = (uint64_t)unaff_EBX;
  do {
    if (((*(ushort *)(unaff_R12 + 8 + unaff_R15 * 4) & 1 << ((byte)unaff_EBX & 0x1f)) != 0) &&
       (1 < *(int *)(*(int64_t *)(uVar1 + param_2) + 0x178))) {
      SystemHealthMonitor();
    }
    param_2 = *(int64_t *)(unaff_RSI + 8);
    unaff_EBX = unaff_EBX + 1;
    uVar1 = uVar1 + 8;
  } while ((uint64_t)(int64_t)(int)unaff_EBX <
           (uint64_t)(*(int64_t *)(unaff_RSI + 0x10) - param_2 >> 3));
  return;
}
// 函数: void function_4d775d(void)
void function_4d775d(void)
{
  return;
}
// 函数: void function_4d777f(void)
void function_4d777f(void)
{
  return;
}