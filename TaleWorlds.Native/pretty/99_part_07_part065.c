#include "TaleWorlds.Native.Split.h"

// 99_part_07_part065.c - 6 个函数

// 函数: void FUN_1804d753c(ulonglong param_1,int param_2,longlong param_3,ulonglong param_4)
void FUN_1804d753c(ulonglong param_1,int param_2,longlong param_3,ulonglong param_4)

{
  float *pfVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
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
  longlong in_RAX;
  longlong lVar22;
  uint uVar23;
  uint64_t unaff_RBX;
  longlong lVar24;
  ulonglong uVar25;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar26;
  longlong in_R10;
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
  uint64_t uStack0000000000000030;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_R12;
  *(uint64_t *)(in_RAX + 0x20) = unaff_R15;
  lVar24 = (param_4 & (longlong)param_2) * 0xd8;
  lVar6 = *(longlong *)(in_R10 + (longlong)(param_2 >> 10) * 8);
  iVar4 = *(int *)(lVar6 + 0x24 + lVar24);
  lVar7 = *(longlong *)(param_3 + (longlong)(iVar4 >> 10) * 8);
  uVar23 = *(uint *)(lVar6 + 0x1c + lVar24);
  if ((uVar23 != 0xffffffff) && (lVar8 = *(longlong *)(lVar6 + 0x98 + lVar24), lVar8 != 0)) {
    uVar5 = *(uint *)(lVar6 + 0x18 + lVar24);
    uVar25 = 0;
    lVar22 = (longlong)(int)(*(uint *)(unaff_RSI + 0x6b8) & uVar23);
    uStack0000000000000030 = 0;
    lVar6 = *(longlong *)(*(longlong *)(unaff_RSI + 0x698) + (longlong)((int)uVar23 >> 10) * 8);
    lVar24 = *(longlong *)(unaff_RSI + 0x488);
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
    lVar22 = (longlong)(int)(uVar23 & uVar5);
    *(int32_t *)(unaff_RBP + -0x39) = uVar3;
    *(int32_t *)(unaff_RBP + -0x59) = 0;
    *(int16_t *)(unaff_RBP + -0x55) = 0x400;
    *(uint64_t *)(unaff_RBP + -0x51) = 0;
    lVar6 = *(longlong *)(lVar24 + (longlong)((int)uVar5 >> 10) * 8);
    lVar24 = *(longlong *)(unaff_RSI + 8);
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
    lVar6 = *(longlong *)(unaff_RSI + 0x10);
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
        if (((*(ushort *)(lVar7 + 8 + (param_1 & (longlong)iVar4) * 0xc) &
             1 << ((byte)uVar25 & 0x1f)) != 0) &&
           (1 < *(int *)(*(longlong *)(uVar26 + lVar24) + 0x178))) {
          FUN_180077750(lVar8,*(longlong *)(uVar26 + lVar24),unaff_RBP + -0x19,0,&stack0x00000030);
        }
        lVar24 = *(longlong *)(unaff_RSI + 8);
        uVar23 = (int)uVar25 + 1;
        uVar25 = (ulonglong)uVar23;
        uVar26 = uVar26 + 8;
      } while ((ulonglong)(longlong)(int)uVar23 <
               (ulonglong)(*(longlong *)(unaff_RSI + 0x10) - lVar24 >> 3));
    }
  }
  return;
}






// 函数: void FUN_1804d7588(void)
void FUN_1804d7588(void)

{
  float *pfVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
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
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  longlong unaff_RBX;
  ulonglong uVar24;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong in_R9;
  longlong in_R10;
  longlong unaff_R12;
  longlong unaff_R15;
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
  uint64_t uStack0000000000000030;
  
  lVar5 = *(longlong *)(in_R10 + 0x98 + unaff_RBX);
  if (lVar5 != 0) {
    uVar23 = *(uint *)(in_R10 + 0x18 + unaff_RBX);
    uVar24 = 0;
    uVar20 = (longlong)*(int *)(unaff_RSI + 0x6b8) & in_R9;
    uStack0000000000000030 = 0;
    lVar6 = *(longlong *)(*(longlong *)(unaff_RSI + 0x698) + (longlong)((int)in_R9 >> 10) * 8);
    lVar22 = *(longlong *)(unaff_RSI + 0x488);
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
    lVar21 = (longlong)(int)(uVar4 & uVar23);
    *(int32_t *)(unaff_RBP + -0x39) = uVar3;
    *(int32_t *)(unaff_RBP + -0x59) = 0;
    *(int16_t *)(unaff_RBP + -0x55) = 0x400;
    *(uint64_t *)(unaff_RBP + -0x51) = 0;
    lVar6 = *(longlong *)(lVar22 + (longlong)((int)uVar23 >> 10) * 8);
    lVar22 = *(longlong *)(unaff_RSI + 8);
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
    lVar6 = *(longlong *)(unaff_RSI + 0x10);
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
           (1 < *(int *)(*(longlong *)(uVar20 + lVar22) + 0x178))) {
          FUN_180077750(lVar5,*(longlong *)(uVar20 + lVar22),unaff_RBP + -0x19,0,&stack0x00000030);
        }
        lVar22 = *(longlong *)(unaff_RSI + 8);
        uVar23 = (int)uVar24 + 1;
        uVar24 = (ulonglong)uVar23;
        uVar20 = uVar20 + 8;
      } while ((ulonglong)(longlong)(int)uVar23 <
               (ulonglong)(*(longlong *)(unaff_RSI + 0x10) - lVar22 >> 3));
    }
  }
  return;
}






// 函数: void FUN_1804d75cf(longlong param_1,longlong param_2,longlong param_3)
void FUN_1804d75cf(longlong param_1,longlong param_2,longlong param_3)

{
  float *pfVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int iVar4;
  longlong lVar5;
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
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int in_R10D;
  int32_t in_register_00000094;
  longlong unaff_R12;
  longlong unaff_R15;
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
  
  lVar5 = *(longlong *)(param_2 + param_3 * 8);
  lVar19 = *(longlong *)(unaff_RSI + 0x488);
  *(int16_t *)(unaff_RBP + -0x7d) = 0xff01;
  *(ulonglong *)(unaff_RBP + -0x79) = unaff_RBX;
  uVar3 = *(int32_t *)(lVar5 + 0x28 + param_1 * 0x30);
  *(int32_t *)(unaff_RBP + -0x71) = *(int32_t *)(lVar5 + 0x1c + param_1 * 0x30);
  *(int32_t *)(unaff_RBP + -0x6d) = *(int32_t *)(lVar5 + 0x18 + param_1 * 0x30);
  *(int32_t *)(unaff_RBP + -0x69) = *(int32_t *)(lVar5 + 0x14 + param_1 * 0x30);
  *(int8_t *)(unaff_RBP + -0x65) = *(int8_t *)(lVar5 + 0x10 + param_1 * 0x30);
  *(int32_t *)(unaff_RBP + -0x5d) = *(int32_t *)(lVar5 + 0x20 + param_1 * 0x30);
  iVar4 = *(int *)(unaff_RSI + 0x4a8);
  *(int32_t *)(unaff_RBP + -0x61) = *(int32_t *)(lVar5 + 0x24 + param_1 * 0x30);
  uVar18 = (longlong)iVar4 & CONCAT44(in_register_00000094,in_R10D);
  *(int32_t *)(unaff_RBP + -0x39) = uVar3;
  *(int *)(unaff_RBP + -0x59) = (int)unaff_RBX;
  *(int16_t *)(unaff_RBP + -0x55) = 0x400;
  *(ulonglong *)(unaff_RBP + -0x51) = unaff_RBX;
  lVar5 = *(longlong *)(lVar19 + (longlong)(in_R10D >> 10) * 8);
  lVar19 = *(longlong *)(unaff_RSI + 8);
  *(int *)(unaff_RBP + -0x49) = (int)unaff_RBX;
  *(ulonglong *)(unaff_RBP + -0x41) = unaff_RBX;
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
  *(ulonglong *)(unaff_RBP + -0x21) = unaff_RBX;
  pfVar1 = (float *)(lVar5 + 0x18 + uVar18 * 0x48);
  fVar13 = *pfVar1;
  fVar14 = pfVar1[1];
  fVar15 = pfVar1[2];
  fVar16 = pfVar1[3];
  puVar2 = (uint64_t *)(lVar5 + 0x38 + uVar18 * 0x48);
  uVar17 = puVar2[1];
  lVar5 = *(longlong *)(unaff_RSI + 0x10);
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
  *(float *)(unaff_RBP + -0x15) = (float)((ulonglong)in_XMM1_Qa >> 0x20) * fVar10 + fVar27 + fVar23;
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
         (1 < *(int *)(*(longlong *)(uVar18 + lVar19) + 0x178))) {
        fVar22 = (float)FUN_180077750(fVar22,*(longlong *)(uVar18 + lVar19),unaff_RBP + -0x19,0,
                                      &stack0x00000030);
      }
      lVar19 = *(longlong *)(unaff_RSI + 8);
      uVar20 = (int)unaff_RBX + 1;
      unaff_RBX = (ulonglong)uVar20;
      uVar18 = uVar18 + 8;
    } while ((ulonglong)(longlong)(int)uVar20 <
             (ulonglong)(*(longlong *)(unaff_RSI + 0x10) - lVar19 >> 3));
  }
  return;
}






// 函数: void FUN_1804d76f4(uint64_t param_1,longlong param_2)
void FUN_1804d76f4(uint64_t param_1,longlong param_2)

{
  uint unaff_EBX;
  longlong unaff_RSI;
  ulonglong uVar1;
  longlong unaff_R12;
  longlong unaff_R15;
  
  uVar1 = (ulonglong)unaff_EBX;
  do {
    if (((*(ushort *)(unaff_R12 + 8 + unaff_R15 * 4) & 1 << ((byte)unaff_EBX & 0x1f)) != 0) &&
       (1 < *(int *)(*(longlong *)(uVar1 + param_2) + 0x178))) {
      FUN_180077750();
    }
    param_2 = *(longlong *)(unaff_RSI + 8);
    unaff_EBX = unaff_EBX + 1;
    uVar1 = uVar1 + 8;
  } while ((ulonglong)(longlong)(int)unaff_EBX <
           (ulonglong)(*(longlong *)(unaff_RSI + 0x10) - param_2 >> 3));
  return;
}






// 函数: void FUN_1804d775d(void)
void FUN_1804d775d(void)

{
  return;
}






// 函数: void FUN_1804d777f(void)
void FUN_1804d777f(void)

{
  return;
}






