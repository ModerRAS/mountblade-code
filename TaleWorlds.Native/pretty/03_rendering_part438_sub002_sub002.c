#include "TaleWorlds.Native.Split.h"

// 03_rendering_part438_sub002_sub002.c - 1 个函数

// 函数: void FUN_180508f50(longlong param_1,uint64_t *param_2,int param_3)
void FUN_180508f50(longlong param_1,uint64_t *param_2,int param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  uint64_t uVar15;
  uint64_t *puVar16;
  uint *puVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int8_t auStack_1f8 [44];
  int32_t uStack_1cc;
  int32_t uStack_1bc;
  int32_t uStack_1ac;
  int32_t uStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  uint uStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  int32_t uStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  int32_t uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int32_t uStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  int32_t uStack_10c;
  int8_t auStack_108 [48];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  ulonglong uStack_b8;
  
  uStack_b8 = _DAT_180bf00a8 ^ (ulonglong)auStack_1f8;
  lVar20 = *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9e8 + (longlong)param_3 * 8) + 0xf8);
  puVar17 = (uint *)((longlong)*(char *)(lVar20 + 0x88) * 0x100 +
                    *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18));
  do {
    LOCK();
    uVar1 = *puVar17;
    *puVar17 = *puVar17 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  fStack_198 = (float)puVar17[1];
  fStack_194 = (float)puVar17[2];
  fStack_190 = (float)puVar17[3];
  fStack_18c = (float)puVar17[4];
  fVar24 = (float)puVar17[5];
  fVar25 = (float)puVar17[6];
  fVar10 = (float)puVar17[7];
  uStack_17c = puVar17[8];
  *puVar17 = 0;
  lVar19 = *(longlong *)(param_1 + 0x6d8);
  lVar18 = *(longlong *)(lVar19 + 0x8a8);
  fStack_188 = fVar24;
  fStack_184 = fVar25;
  fStack_180 = fVar10;
  fStack_d8 = fStack_198;
  fStack_d4 = fStack_194;
  fStack_d0 = fStack_190;
  fStack_cc = fStack_18c;
  fStack_c8 = fVar24;
  fStack_c4 = fVar25;
  fStack_c0 = fVar10;
  uStack_bc = uStack_17c;
  FUN_18063b5f0(&fStack_178,&fStack_198);
  fVar2 = *(float *)(lVar20 + 0xa0);
  fVar21 = *(float *)(lVar20 + 0x9c);
  fVar3 = *(float *)(lVar20 + 0xa4);
  fVar4 = *(float *)(lVar20 + 0xc0);
  fVar5 = *(float *)(lVar18 + 0x80);
  fVar6 = *(float *)(lVar18 + 0x70);
  fVar7 = *(float *)(lVar18 + 0x84);
  fVar8 = *(float *)(lVar18 + 0x74);
  fStack_140 = *(float *)(lVar18 + 0x98);
  fVar22 = *(float *)(lVar20 + 0xac);
  fStack_198 = fVar2 * fStack_168 + fVar21 * fStack_178 + fVar3 * fStack_158;
  fStack_194 = fVar2 * fStack_164 + fVar21 * fStack_174 + fVar3 * fStack_154;
  fStack_190 = fVar2 * fStack_160 + fVar21 * fStack_170 + fVar3 * fStack_150;
  fStack_18c = fVar2 * fStack_15c + fVar21 * fStack_16c + fVar3 * fStack_14c;
  fVar2 = *(float *)(lVar20 + 0xb4);
  fVar21 = *(float *)(lVar20 + 0xb0);
  fVar3 = *(float *)(lVar20 + 0xbc);
  fStack_d8 = fVar21 * fStack_168 + fVar22 * fStack_178 + fVar2 * fStack_158;
  fStack_d4 = fVar21 * fStack_164 + fVar22 * fStack_174 + fVar2 * fStack_154;
  fStack_d0 = fVar21 * fStack_160 + fVar22 * fStack_170 + fVar2 * fStack_150;
  fStack_cc = fVar21 * fStack_15c + fVar22 * fStack_16c + fVar2 * fStack_14c;
  fVar2 = *(float *)(lVar20 + 0xc4);
  fVar21 = *(float *)(lVar20 + 0xcc);
  fVar22 = *(float *)(lVar20 + 0xd0);
  fVar26 = fVar4 * fStack_168 + fVar3 * fStack_178 + fVar2 * fStack_158;
  fVar27 = fVar4 * fStack_164 + fVar3 * fStack_174 + fVar2 * fStack_154;
  fVar9 = *(float *)(lVar20 + 0xd4);
  fVar24 = fVar22 * fStack_168 + fVar21 * fStack_178 + fVar9 * fStack_158 + fVar24;
  fVar25 = fVar22 * fStack_164 + fVar21 * fStack_174 + fVar9 * fStack_154 + fVar25;
  fVar23 = fVar6 * fVar24 + fVar5 * fVar25 + *(float *)(lVar18 + 0xa0);
  fVar21 = fStack_140 * (fVar22 * fStack_160 + fVar21 * fStack_170 + fVar9 * fStack_150 + fVar10) +
           *(float *)(lVar18 + 0xa8);
  fVar22 = fVar8 * fVar24 + fVar7 * fVar25 + *(float *)(lVar18 + 0xa4);
  uStack_1cc = 0x7f7fffff;
  uStack_19c = 0x7f7fffff;
  uStack_1ac = 0x7f7fffff;
  uStack_1bc = 0x7f7fffff;
  fStack_120 = fStack_140 * (fVar4 * fStack_160 + fVar3 * fStack_170 + fVar2 * fStack_150);
  fStack_128 = fVar6 * fVar26 + fVar5 * fVar27;
  fStack_124 = fVar8 * fVar26 + fVar7 * fVar27;
  fStack_130 = fStack_140 * fStack_d0;
  uStack_10c = 0x7f7fffff;
  fStack_138 = fVar6 * fStack_d8 + fVar5 * fStack_d4;
  fStack_134 = fVar8 * fStack_d8 + fVar7 * fStack_d4;
  fStack_148 = fVar6 * fStack_198 + fVar5 * fStack_194;
  fStack_140 = fStack_140 * fStack_190;
  fStack_144 = fVar8 * fStack_198 + fVar7 * fStack_194;
  uStack_13c = 0x7f7fffff;
  uStack_12c = 0x7f7fffff;
  uStack_11c = 0x7f7fffff;
  fStack_118 = fVar23;
  fStack_114 = fVar22;
  fStack_110 = fVar21;
  puVar16 = (uint64_t *)FUN_180535610(&fStack_148,auStack_108,*(int32_t *)(lVar19 + 0x8c0));
  uVar15 = puVar16[1];
  *param_2 = *puVar16;
  param_2[1] = uVar15;
  uVar11 = *(int32_t *)((longlong)puVar16 + 0x14);
  uVar12 = *(int32_t *)(puVar16 + 3);
  uVar13 = *(int32_t *)((longlong)puVar16 + 0x1c);
  *(int32_t *)(param_2 + 2) = *(int32_t *)(puVar16 + 2);
  *(int32_t *)((longlong)param_2 + 0x14) = uVar11;
  *(int32_t *)(param_2 + 3) = uVar12;
  *(int32_t *)((longlong)param_2 + 0x1c) = uVar13;
  uVar11 = *(int32_t *)(puVar16 + 4);
  uVar12 = *(int32_t *)((longlong)puVar16 + 0x24);
  uVar13 = *(int32_t *)(puVar16 + 5);
  uVar14 = *(int32_t *)((longlong)puVar16 + 0x2c);
  *(float *)(param_2 + 6) = fVar23;
  *(float *)((longlong)param_2 + 0x34) = fVar22;
  *(float *)(param_2 + 7) = fVar21;
  *(int32_t *)((longlong)param_2 + 0x3c) = 0x7f7fffff;
  *(int32_t *)(param_2 + 4) = uVar11;
  *(int32_t *)((longlong)param_2 + 0x24) = uVar12;
  *(int32_t *)(param_2 + 5) = uVar13;
  *(int32_t *)((longlong)param_2 + 0x2c) = uVar14;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_b8 ^ (ulonglong)auStack_1f8);
}



ulonglong FUN_180509380(longlong param_1,longlong param_2,longlong param_3,float *param_4,
                       uint64_t *param_5,int8_t param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong lVar15;
  ulonglong uVar16;
  char cVar17;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  int32_t uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  int32_t uStack_cc;
  float fStack_c8;
  
  cVar5 = *(char *)(param_2 + 1);
  cVar17 = '\0';
  uVar16 = *(ulonglong *)(param_1 + 0x6d8);
  lVar6 = *(longlong *)(uVar16 + 0x8a8);
  if ('\0' < cVar5) {
    do {
      lVar15 = (longlong)cVar17;
      uStack_dc = 0x7f7fffff;
      fVar1 = *(float *)(param_2 + 8 + lVar15 * 0x30);
      fVar2 = *(float *)(param_2 + 4 + lVar15 * 0x30);
      fVar3 = *(float *)(param_2 + 0x14 + lVar15 * 0x30);
      fVar4 = *(float *)(param_2 + 0x18 + lVar15 * 0x30);
      fStack_d8 = fVar3 * *(float *)(lVar6 + 0x70) + fVar4 * *(float *)(lVar6 + 0x80) +
                  *(float *)(lVar6 + 0xa0);
      fStack_d0 = *(float *)(lVar6 + 0x98) * *(float *)(param_2 + 0x1c + lVar15 * 0x30) +
                  *(float *)(lVar6 + 0xa8);
      fStack_e8 = fVar2 * *(float *)(lVar6 + 0x70) + fVar1 * *(float *)(lVar6 + 0x80) +
                  *(float *)(lVar6 + 0xa0);
      fStack_d4 = fVar3 * *(float *)(lVar6 + 0x74) + fVar4 * *(float *)(lVar6 + 0x84) +
                  *(float *)(lVar6 + 0xa4);
      fStack_e4 = fVar2 * *(float *)(lVar6 + 0x74) + fVar1 * *(float *)(lVar6 + 0x84) +
                  *(float *)(lVar6 + 0xa4);
      fStack_e0 = *(float *)(lVar6 + 0x98) * *(float *)(param_2 + 0xc + lVar15 * 0x30) +
                  *(float *)(lVar6 + 0xa8);
      uStack_cc = 0x7f7fffff;
      fStack_c8 = *(float *)(*(longlong *)(param_1 + 0x6d8) + 0x8c0) *
                  *(float *)(param_2 + 0x28 + lVar15 * 0x30);
      uVar16 = FUN_180658a60(param_3,param_4,&fStack_e8,&uStack_f8,param_6);
      if ((char)uVar16 != '\0') {
        *param_5 = uStack_f8;
        param_5[1] = uStack_f0;
        fVar4 = param_4[5];
        fVar7 = param_4[6];
        fVar8 = param_4[7];
        fVar1 = *(float *)(param_3 + 0x6c);
        fVar9 = param_4[1];
        fVar10 = param_4[2];
        fVar11 = param_4[3];
        fVar2 = *(float *)(param_3 + 0x68);
        fVar3 = *(float *)(param_3 + 0x70);
        fVar12 = param_4[9];
        fVar13 = param_4[10];
        fVar14 = param_4[0xb];
        *(float *)(param_5 + 2) = param_4[4] * fVar1 + *param_4 * fVar2 + param_4[8] * fVar3;
        *(float *)((longlong)param_5 + 0x14) = fVar4 * fVar1 + fVar9 * fVar2 + fVar12 * fVar3;
        *(float *)(param_5 + 3) = fVar7 * fVar1 + fVar10 * fVar2 + fVar13 * fVar3;
        *(float *)((longlong)param_5 + 0x1c) = fVar8 * fVar1 + fVar11 * fVar2 + fVar14 * fVar3;
        *(int8_t *)(param_5 + 4) = *(int8_t *)(param_2 + 0x30 + lVar15 * 0x30);
        return 1;
      }
      cVar17 = cVar17 + '\x01';
    } while (cVar17 < cVar5);
  }
  return uVar16 & 0xffffffffffffff00;
}



uint64_t FUN_180509620(longlong param_1,longlong param_2,int32_t *param_3,uint64_t param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  float fStack_18;
  
  uStack_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  cVar1 = *(char *)(param_2 + 1);
  uStack_28 = param_3[4];
  uStack_24 = param_3[5];
  uStack_20 = param_3[6];
  uStack_1c = param_3[7];
  fStack_18 = (float)param_3[8];
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) + 0x70;
  FUN_1805353a0(&uStack_38,lVar4);
  cVar3 = '\0';
  fStack_18 = (float)param_3[8] / *(float *)(*(longlong *)(param_1 + 0x6d8) + 0x8c0);
  if ('\0' < cVar1) {
    do {
      cVar2 = FUN_180531700((longlong)cVar3 * 0x30,param_2 + 4 + (longlong)cVar3 * 0x30,&uStack_38,
                            param_4,lVar4);
      if (cVar2 != '\0') {
        return 1;
      }
      cVar3 = cVar3 + '\x01';
    } while (cVar3 < cVar1);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180509710(longlong param_1,longlong param_2,float *param_3,float *param_4,float param_5,
             float *param_6,uint64_t param_7,byte param_8,float *param_9,int8_t *param_10)

{
  float fVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  int8_t uStack_d0;
  int32_t uStack_cc;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int32_t uStack_ac;
  float fStack_a8;
  
  fVar9 = -1.0;
  fVar7 = param_5 + 1.0;
  *param_10 = 0;
  *param_9 = -1.0;
  param_5 = param_3[8] + param_5;
  fStack_b8 = fVar7 * *param_6 + *param_3;
  fVar1 = *(float *)(&system_data_64f0 + (ulonglong)param_8 * 4);
  fStack_b4 = fVar7 * param_6[1] + param_3[1];
  fStack_b0 = fVar7 * param_6[2] + param_3[2];
  fVar8 = param_3[8] * _DAT_180c964f8;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) + 0x70;
  uStack_c8 = *(uint64_t *)param_3;
  uStack_c0 = *(uint64_t *)(param_3 + 2);
  fStack_108 = param_3[4];
  fStack_104 = param_3[5];
  fStack_100 = param_3[6];
  fStack_fc = param_3[7];
  fVar7 = *(float *)(*(longlong *)(param_1 + 0x6d8) + 0x8c0);
  uStack_ac = 0x7f7fffff;
  lVar5 = param_2;
  fStack_f8 = fVar8;
  fStack_a8 = fVar8;
  FUN_1805353a0(&uStack_c8,lVar6);
  fStack_118 = *param_3;
  fStack_114 = param_3[1];
  fStack_110 = param_3[2];
  fStack_10c = param_3[3];
  fStack_f8 = param_3[8];
  fStack_108 = param_3[4];
  fStack_104 = param_3[5];
  fStack_100 = param_3[6];
  fStack_fc = param_3[7];
  fVar7 = 1.0 / fVar7;
  fStack_a8 = fVar8 * fVar7;
  fVar8 = (float)FUN_1805353a0(&fStack_118,lVar6);
  fStack_f8 = fVar7 * param_3[8];
  cVar4 = '\0';
  cVar2 = *(char *)(lVar5 + 1);
  if ('\0' < cVar2) {
    do {
      uStack_d0 = 0xff;
      uStack_cc = 0x7f7fffff;
      lVar5 = (longlong)cVar4 * 0x30 + lVar5;
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      cVar3 = FUN_180531700(fVar8,lVar5 + 4,&uStack_c8,&uStack_f0,lVar6);
      fVar8 = extraout_XMM0_Da;
      if (cVar3 != '\0') {
        fVar8 = (uStack_f0._4_4_ - param_3[1]) * param_6[1];
        fVar7 = ((float)uStack_f0 - *param_3) * *param_6 + fVar8 +
                ((float)uStack_e8 - param_3[2]) * param_6[2];
        if (fVar7 < param_5) {
          cVar3 = FUN_180531700(fVar8,lVar5 + 4,&fStack_118,param_4,lVar6);
          fVar8 = extraout_XMM0_Da_00;
          if (cVar3 != '\0') {
            *param_10 = param_5 - fVar1 <=
                        (param_4[1] - param_3[1]) * param_6[1] + (*param_4 - *param_3) * *param_6 +
                        (param_4[2] - param_3[2]) * param_6[2];
            return 1;
          }
        }
        else if ((fVar9 < 0.0) || (fVar7 < fVar9)) {
          fVar9 = fVar7;
        }
      }
      cVar4 = cVar4 + '\x01';
      lVar5 = param_2;
    } while (cVar4 < cVar2);
  }
  *param_9 = fVar9;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18050977b(longlong param_1,longlong param_2,float *param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  char cVar9;
  longlong in_RAX;
  char cVar10;
  longlong unaff_RBP;
  float *unaff_RSI;
  float *unaff_RDI;
  float *unaff_R12;
  longlong lVar11;
  float fVar12;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar13;
  float in_XMM3_Da;
  float in_XMM5_Da;
  int32_t unaff_XMM7_Da;
  float fVar14;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar15;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  float unaff_XMM10_Da;
  float fVar16;
  int32_t uStack000000000000003c;
  float in_stack_00000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  uint64_t in_stack_00000078;
  
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM9_Dd;
  in_XMM3_Da = in_XMM3_Da + 1.0;
  uStack000000000000003c = 0x7f7fffff;
  **(int8_t **)(unaff_RBP + 0xa8) = 0;
  **(int32_t **)(unaff_RBP + 0xa0) = 0xbf800000;
  fVar12 = *unaff_RSI;
  fVar13 = unaff_RSI[1];
  fVar16 = param_3[8] + in_XMM5_Da;
  fVar1 = *param_3;
  fVar2 = *(float *)(param_2 + (ulonglong)*(byte *)(unaff_RBP + 0x98) * 4);
  fVar3 = unaff_RSI[2];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar14 = param_3[8] * _DAT_180c964f8;
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) + 0x70;
  uVar7 = *(uint64_t *)param_3;
  uVar8 = *(uint64_t *)(param_3 + 2);
  fStack0000000000000050 = param_3[4];
  fStack0000000000000054 = param_3[5];
  fStack0000000000000058 = param_3[6];
  fStack000000000000005c = param_3[7];
  fVar15 = *(float *)(*(longlong *)(param_1 + 0x6d8) + 0x8c0);
  *(float *)(unaff_RBP + -0x50) = fVar14;
  *(float *)(unaff_RBP + -0x60) = in_XMM3_Da * fVar12 + fVar1;
  *(float *)(unaff_RBP + -0x5c) = in_XMM3_Da * fVar13 + fVar4;
  *(float *)(unaff_RBP + -0x58) = in_XMM3_Da * fVar3 + fVar5;
  *(int32_t *)(unaff_RBP + -0x54) = 0x7f7fffff;
  *(uint64_t *)(unaff_RBP + -0x70) = uVar7;
  *(uint64_t *)(unaff_RBP + -0x68) = uVar8;
  fStack0000000000000060 = fVar14;
  FUN_1805353a0(unaff_RBP + -0x70,lVar11);
  in_stack_00000040 = *unaff_RDI;
  fStack0000000000000044 = unaff_RDI[1];
  in_stack_00000048 = unaff_RDI[2];
  fStack000000000000004c = unaff_RDI[3];
  fStack0000000000000060 = unaff_RDI[8];
  fStack0000000000000050 = unaff_RDI[4];
  fStack0000000000000054 = unaff_RDI[5];
  fStack0000000000000058 = unaff_RDI[6];
  fStack000000000000005c = unaff_RDI[7];
  fVar15 = 1.0 / fVar15;
  *(float *)(unaff_RBP + -0x50) = fVar14 * fVar15;
  fVar12 = (float)FUN_1805353a0(&stack0x00000040,lVar11);
  fStack0000000000000060 = fVar15 * unaff_RDI[8];
  cVar10 = '\0';
  cVar6 = *(char *)(param_4 + 1);
  if ('\0' < cVar6) {
    while( true ) {
      *(int8_t *)(unaff_RBP + -0x78) = 0xff;
      *(int32_t *)(unaff_RBP + -0x74) = 0x7f7fffff;
      param_4 = (longlong)cVar10 * 0x30 + param_4;
      _fStack0000000000000068 = 0;
      _fStack0000000000000070 = 0;
      in_stack_00000078 = 0;
      *(uint64_t *)(unaff_RBP + -0x80) = 0;
      cVar9 = FUN_180531700(fVar12,param_4 + 4,unaff_RBP + -0x70,&stack0x00000068,lVar11);
      fVar12 = extraout_XMM0_Da;
      if (cVar9 != '\0') {
        fVar12 = (fStack000000000000006c - unaff_RDI[1]) * unaff_RSI[1];
        fVar13 = (fStack0000000000000068 - *unaff_RDI) * *unaff_RSI + fVar12 +
                 (fStack0000000000000070 - unaff_RDI[2]) * unaff_RSI[2];
        if (fVar13 < fVar16) {
          cVar9 = FUN_180531700(fVar12,param_4 + 4,&stack0x00000040);
          fVar12 = extraout_XMM0_Da_00;
          if (cVar9 != '\0') {
            *(bool *)*(uint64_t *)(unaff_RBP + 0xa8) =
                 fVar16 - fVar2 <=
                 (unaff_R12[1] - unaff_RDI[1]) * unaff_RSI[1] +
                 (*unaff_R12 - *unaff_RDI) * *unaff_RSI +
                 (unaff_R12[2] - unaff_RDI[2]) * unaff_RSI[2];
            return 1;
          }
        }
        else if ((unaff_XMM10_Da < 0.0) || (fVar13 < unaff_XMM10_Da)) {
          unaff_XMM10_Da = fVar13;
        }
      }
      cVar10 = cVar10 + '\x01';
      if (cVar6 <= cVar10) break;
      param_4 = *(longlong *)(unaff_RBP + 0x68);
    }
  }
  **(float **)(unaff_RBP + 0xa0) = unaff_XMM10_Da;
  return 0;
}



uint64_t FUN_1805098d1(float param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  char cVar1;
  char unaff_BL;
  longlong unaff_RBP;
  float *unaff_RSI;
  float *unaff_RDI;
  float *unaff_R12;
  char unaff_R13B;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar2;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  uint64_t uStack0000000000000078;
  
  while( true ) {
    *(int8_t *)(unaff_RBP + -0x78) = 0xff;
    *(int32_t *)(unaff_RBP + -0x74) = 0x7f7fffff;
    param_4 = (longlong)unaff_BL * 0x30 + param_4;
    _fStack0000000000000068 = 0;
    _fStack0000000000000070 = 0;
    uStack0000000000000078 = 0;
    *(uint64_t *)(unaff_RBP + -0x80) = 0;
    cVar1 = FUN_180531700(param_1,param_4 + 4,unaff_RBP + -0x70,&stack0x00000068);
    param_1 = extraout_XMM0_Da;
    if (cVar1 != '\0') {
      param_1 = (fStack000000000000006c - unaff_RDI[1]) * unaff_RSI[1];
      fVar2 = (fStack0000000000000068 - *unaff_RDI) * *unaff_RSI + param_1 +
              (fStack0000000000000070 - unaff_RDI[2]) * unaff_RSI[2];
      if (fVar2 < unaff_XMM11_Da) {
        cVar1 = FUN_180531700(param_1,param_4 + 4,&stack0x00000040);
        param_1 = extraout_XMM0_Da_00;
        if (cVar1 != '\0') {
          *(bool *)*(uint64_t *)(unaff_RBP + 0xa8) =
               unaff_XMM11_Da - unaff_XMM12_Da <=
               (unaff_R12[1] - unaff_RDI[1]) * unaff_RSI[1] + (*unaff_R12 - *unaff_RDI) * *unaff_RSI
               + (unaff_R12[2] - unaff_RDI[2]) * unaff_RSI[2];
          return 1;
        }
      }
      else if ((unaff_XMM10_Da < 0.0) || (fVar2 < unaff_XMM10_Da)) {
        unaff_XMM10_Da = fVar2;
      }
    }
    unaff_BL = unaff_BL + '\x01';
    if (unaff_R13B <= unaff_BL) break;
    param_4 = *(longlong *)(unaff_RBP + 0x68);
  }
  **(float **)(unaff_RBP + 0xa0) = unaff_XMM10_Da;
  return 0;
}



bool FUN_180509a30(longlong param_1,longlong param_2,float *param_3,uint64_t *param_4,
                  float *param_5,float param_6,float *param_7)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  longlong lVar9;
  char cVar10;
  longlong lVar11;
  uint64_t *puVar12;
  float *pfVar13;
  ulonglong uVar14;
  byte bVar15;
  float fVar16;
  float fVar17;
  float extraout_XMM0_Da;
  float fVar18;
  int8_t auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  char cStackX_8;
  byte bStackX_10;
  int iStack_144;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  float fStack_120;
  int32_t uStack_11c;
  longlong lStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  int32_t uStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  int32_t uStack_d4;
  
  uStack_140 = *(uint64_t *)param_3;
  uStack_138 = *(uint64_t *)(param_3 + 2);
  uStack_130 = *(uint64_t *)(param_3 + 4);
  uStack_128 = *(uint64_t *)(param_3 + 6);
  lVar9 = *(longlong *)(param_1 + 0x6d8);
  lVar5 = *(longlong *)(lVar9 + 0x850);
  lVar11 = *(longlong *)(lVar9 + 0x8a8) + 0x70;
  fVar24 = *(float *)(lVar9 + 0x8c0);
  fStack_120 = param_3[8];
  puVar12 = param_4;
  pfVar13 = param_3;
  lStack_118 = lVar11;
  FUN_1805353a0(&uStack_140,lVar11);
  cVar10 = '\0';
  cVar3 = *(char *)(param_2 + 1);
  cStackX_8 = -1;
  fVar24 = 1.0 / fVar24;
  fStack_120 = fVar24 * pfVar13[8];
  if ('\0' < cVar3) {
    do {
      lVar9 = (longlong)cVar10;
      puVar1 = (uint64_t *)(param_2 + 4 + lVar9 * 0x30);
      uStack_110 = *puVar1;
      uStack_108 = puVar1[1];
      bVar15 = *(byte *)(lVar5 + 0x2e + lVar9 * 0x30);
      puVar2 = (int32_t *)(param_2 + 0x14 + lVar9 * 0x30);
      fStack_100 = (float)*puVar2;
      fStack_fc = (float)puVar2[1];
      fStack_f8 = (float)puVar2[2];
      uStack_f4 = puVar2[3];
      pfVar13 = (float *)(param_2 + 0x24 + lVar9 * 0x30);
      fVar16 = *pfVar13;
      fStack_ec = pfVar13[1];
      fStack_e4 = pfVar13[3];
      fStack_f0 = fVar16;
      fStack_e8 = pfVar13[2];
      if ((bVar15 & 4) != 0) {
        fStack_f0 = fVar16 * fVar24;
        fStack_ec = fStack_ec * fVar24;
        fVar16 = pfVar13[2] * fVar24;
        fStack_e8 = fVar16;
      }
      cVar8 = FUN_180531dc0(fVar16,&uStack_110,&uStack_140,puVar12,lVar11);
      if (cVar8 != '\0') {
        bStackX_10 = *(byte *)(lVar5 + 0x2d + lVar9 * 0x30);
        uVar14 = (ulonglong)bStackX_10;
        cStackX_8 = *(char *)(lVar5 + 0x2c + lVar9 * 0x30);
        bVar15 = bVar15 >> 1 & 1;
        if (bVar15 != 0) {
          fVar16 = *param_7;
          fVar6 = param_7[1];
          fVar7 = param_7[2];
          iStack_144 = 1;
          fVar21 = fVar6 * fVar6 + fVar16 * fVar16 + fVar7 * fVar7;
          auVar19 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
          fVar25 = auVar19._0_4_;
          fVar25 = fVar25 * 0.5 * (3.0 - fVar21 * fVar25 * fVar25);
          goto LAB_180509ca5;
        }
        break;
      }
      cVar10 = cVar10 + '\x01';
      lVar11 = lStack_118;
      puVar12 = param_4;
    } while (cVar10 < cVar3);
  }
  goto FUN_180509ef0;
LAB_180509ca5:
  do {
    if (3 < iStack_144) break;
    fVar18 = param_3[8];
    fVar17 = (float)iStack_144 * ((fVar25 * fVar21) / param_6) * 0.3;
    fVar20 = (float)iStack_144 * 0.3;
    fVar23 = fVar16 * fVar25 * fVar17 + *param_3;
    fVar22 = fVar6 * fVar25 * fVar17 + param_3[1];
    fStack_fc = fVar20 * param_5[1] + param_3[5];
    fStack_100 = fVar20 * *param_5 + param_3[4];
    fVar17 = fVar7 * fVar25 * fVar17 + param_3[2];
    fStack_f8 = fVar20 * param_5[2] + param_3[6];
    uStack_140 = CONCAT44(fVar22,fVar23);
    uStack_138 = CONCAT44(0x7f7fffff,fVar17);
    uStack_110 = CONCAT44(fVar22,fVar23);
    uStack_108 = CONCAT44(0x7f7fffff,fVar17);
    uStack_d4 = 0x7f7fffff;
    uStack_f4 = 0x7f7fffff;
    lVar9 = lStack_118;
    fStack_120 = fVar18;
    fStack_f0 = fVar18;
    fStack_e0 = fStack_100;
    fStack_dc = fStack_fc;
    fStack_d8 = fStack_f8;
    fVar17 = (float)FUN_1805353a0(&uStack_110,fStack_fc);
    fStack_f0 = fVar18 * fVar24;
    cVar10 = '\0';
    do {
      lVar11 = (longlong)cVar10 * 0x30;
      bVar4 = *(byte *)(lVar11 + 0x2d + lVar5);
      if ((char)bVar4 <= (char)uVar14) break;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      fStack_120 = (float)CONCAT31(fStack_120._1_3_,0xff);
      uStack_11c = 0x7f7fffff;
      cVar8 = FUN_180531dc0(fVar17,param_2 + 4 + lVar11,&uStack_110,&uStack_140,lVar9);
      fVar17 = extraout_XMM0_Da;
      if (cVar8 != '\0') {
        cVar8 = *(char *)(lVar11 + 0x2c + lVar5);
        fVar18 = (float)func_0x000180527130(param_1,cVar8);
        fVar17 = (float)func_0x000180527130(param_1,cStackX_8);
        if (fVar17 <= fVar18) {
          uVar14 = (ulonglong)bVar4;
          bVar15 = *(byte *)(lVar11 + 0x2e + lVar5);
          *param_4 = uStack_140;
          param_4[1] = uStack_138;
          bVar15 = bVar15 >> 1 & 1;
          param_4[2] = uStack_130;
          param_4[3] = uStack_128;
          param_4[4] = CONCAT44(uStack_11c,fStack_120);
          cStackX_8 = cVar8;
          bStackX_10 = bVar4;
          break;
        }
      }
      cVar10 = cVar10 + '\x01';
      uVar14 = (ulonglong)bStackX_10;
      lVar9 = lStack_118;
    } while (cVar10 < cVar3);
    iStack_144 = iStack_144 + 1;
  } while (bVar15 != 0);
FUN_180509ef0:
  return cStackX_8 != -1;
}



bool FUN_180509aed(void)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  float *pfVar3;
  byte bVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  char cVar10;
  longlong lVar11;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char unaff_DIL;
  uint64_t in_R9;
  uint64_t uVar12;
  int8_t uVar13;
  uint64_t in_R10;
  ulonglong uVar14;
  longlong unaff_R13;
  char unaff_R14B;
  byte bVar15;
  float fVar16;
  float fVar17;
  float extraout_XMM0_Da;
  float fVar18;
  int8_t auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float unaff_XMM8_Da;
  float fVar24;
  char in_stack_00000030;
  int iStack0000000000000034;
  uint64_t in_stack_00000038;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  uint64_t in_stack_00000060;
  uint64_t uStack0000000000000068;
  uint64_t uStack0000000000000070;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  int32_t uStack0000000000000084;
  int32_t in_stack_000000b0;
  int32_t in_stack_000000b8;
  int32_t in_stack_000000c0;
  int32_t in_stack_000000c8;
  int32_t in_stack_000000d0;
  int32_t in_stack_000000d8;
  int32_t in_stack_000000e0;
  int32_t in_stack_000000e8;
  int32_t in_stack_000000f0;
  int32_t in_stack_000000f8;
  int32_t in_stack_00000110;
  int32_t in_stack_00000118;
  
  do {
    lVar11 = (longlong)unaff_DIL;
    puVar1 = (uint64_t *)(unaff_R13 + 4 + lVar11 * 0x30);
    uStack0000000000000068 = *puVar1;
    uStack0000000000000070 = puVar1[1];
    bVar15 = *(byte *)(unaff_RSI + 0x2e + lVar11 * 0x30);
    puVar2 = (int32_t *)(unaff_R13 + 0x14 + lVar11 * 0x30);
    fStack0000000000000078 = (float)*puVar2;
    fStack000000000000007c = (float)puVar2[1];
    fStack0000000000000080 = (float)puVar2[2];
    uStack0000000000000084 = puVar2[3];
    pfVar3 = (float *)(unaff_R13 + 0x24 + lVar11 * 0x30);
    fVar16 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar7 = pfVar3[2];
    fVar8 = pfVar3[3];
    *(float *)(unaff_RBP + -0x78) = fVar16;
    *(float *)(unaff_RBP + -0x74) = fVar6;
    *(float *)(unaff_RBP + -0x70) = fVar7;
    *(float *)(unaff_RBP + -0x6c) = fVar8;
    if ((bVar15 & 4) != 0) {
      *(float *)(unaff_RBP + -0x78) = *(float *)(unaff_RBP + -0x78) * unaff_XMM8_Da;
      fVar16 = *(float *)(unaff_RBP + -0x70) * unaff_XMM8_Da;
      *(float *)(unaff_RBP + -0x74) = *(float *)(unaff_RBP + -0x74) * unaff_XMM8_Da;
      *(float *)(unaff_RBP + -0x70) = fVar16;
    }
    cVar9 = FUN_180531dc0(fVar16,&stack0x00000068,&stack0x00000038,in_R10,in_R9);
    if (cVar9 != '\0') {
      bVar4 = *(byte *)(unaff_RSI + 0x2d + lVar11 * 0x30);
      uVar14 = (ulonglong)bVar4;
      uVar13 = *(int8_t *)(unaff_RSI + 0x2c + lVar11 * 0x30);
      *(byte *)(unaff_RBP + 0x88) = bVar4;
      *(int8_t *)(unaff_RBP + 0x80) = uVar13;
      bVar15 = bVar15 >> 1 & 1;
      if (bVar15 != 0) {
        pfVar3 = *(float **)(unaff_RBP + 0xb0);
        fVar6 = *pfVar3;
        fVar7 = pfVar3[1];
        fVar8 = pfVar3[2];
        iStack0000000000000034 = 1;
        fVar21 = fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8;
        auVar19 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
        fVar16 = auVar19._0_4_;
        fVar24 = fVar16 * 0.5 * (3.0 - fVar21 * fVar16 * fVar16);
        fVar16 = *(float *)(unaff_RBP + 0xa8);
        goto LAB_180509ca5;
      }
      break;
    }
    unaff_DIL = unaff_DIL + '\x01';
    in_R10 = *(uint64_t *)(unaff_RBP + 0x98);
    in_R9 = in_stack_00000060;
  } while (unaff_DIL < unaff_R14B);
  goto FUN_180509ee0;
LAB_180509ca5:
  do {
    if (3 < iStack0000000000000034) break;
    pfVar3 = *(float **)(unaff_RBP + 0xa0);
    pfVar5 = *(float **)(unaff_RBP + 0x90);
    *(int32_t *)(unaff_RBP + -0x5c) = 0x7f7fffff;
    uStack0000000000000084 = *(int32_t *)(unaff_RBP + -0x5c);
    fVar18 = pfVar5[8];
    fVar17 = (float)iStack0000000000000034 * ((fVar24 * fVar21) / fVar16) * 0.3;
    fVar20 = (float)iStack0000000000000034 * 0.3;
    fVar23 = fVar6 * fVar24 * fVar17 + *pfVar5;
    fVar22 = fVar7 * fVar24 * fVar17 + pfVar5[1];
    fStack000000000000007c = fVar20 * pfVar3[1] + pfVar5[5];
    fStack0000000000000078 = fVar20 * *pfVar3 + pfVar5[4];
    fVar17 = fVar8 * fVar24 * fVar17 + pfVar5[2];
    fStack0000000000000080 = fVar20 * pfVar3[2] + pfVar5[6];
    *(float *)(unaff_RBP + -0x78) = fVar18;
    in_stack_00000038 = CONCAT44(fVar22,fVar23);
    in_stack_00000040 = CONCAT44(0x7f7fffff,fVar17);
    uStack0000000000000068 = CONCAT44(fVar22,fVar23);
    uStack0000000000000070 = CONCAT44(0x7f7fffff,fVar17);
    *(float *)(unaff_RBP + -0x68) = fStack0000000000000078;
    *(float *)(unaff_RBP + -100) = fStack000000000000007c;
    *(float *)(unaff_RBP + -0x60) = fStack0000000000000080;
    *(int32_t *)(unaff_RBP + -0x5c) = uStack0000000000000084;
    uVar12 = in_stack_00000060;
    fStack0000000000000058 = fVar18;
    fVar17 = (float)FUN_1805353a0(&stack0x00000068,fStack000000000000007c);
    cVar9 = '\0';
    *(float *)(unaff_RBP + -0x78) = fVar18 * unaff_XMM8_Da;
    do {
      lVar11 = (longlong)cVar9 * 0x30;
      bVar4 = *(byte *)(lVar11 + 0x2d + unaff_RSI);
      if ((char)bVar4 <= (char)uVar14) break;
      in_stack_00000038 = 0;
      in_stack_00000040 = 0;
      in_stack_00000048 = 0;
      in_stack_00000050 = 0;
      fStack0000000000000058 = (float)CONCAT31(fStack0000000000000058._1_3_,0xff);
      uStack000000000000005c = 0x7f7fffff;
      cVar10 = FUN_180531dc0(fVar17,unaff_R13 + 4 + lVar11,&stack0x00000068,&stack0x00000038,uVar12)
      ;
      fVar17 = extraout_XMM0_Da;
      if (cVar10 != '\0') {
        uVar13 = *(int8_t *)(lVar11 + 0x2c + unaff_RSI);
        fVar18 = (float)func_0x000180527130(extraout_XMM0_Da,uVar13);
        fVar17 = (float)func_0x000180527130(fVar18,*(int8_t *)(unaff_RBP + 0x80));
        if (fVar17 <= fVar18) {
          puVar1 = *(uint64_t **)(unaff_RBP + 0x98);
          uVar14 = (ulonglong)bVar4;
          bVar15 = *(byte *)(lVar11 + 0x2e + unaff_RSI);
          *puVar1 = in_stack_00000038;
          puVar1[1] = in_stack_00000040;
          bVar15 = bVar15 >> 1 & 1;
          *(byte *)(unaff_RBP + 0x88) = bVar4;
          puVar1[2] = in_stack_00000048;
          puVar1[3] = in_stack_00000050;
          *(int8_t *)(unaff_RBP + 0x80) = uVar13;
          puVar1[4] = CONCAT44(uStack000000000000005c,fStack0000000000000058);
          break;
        }
      }
      cVar9 = cVar9 + '\x01';
      uVar14 = (ulonglong)*(byte *)(unaff_RBP + 0x88);
      uVar12 = in_stack_00000060;
    } while (cVar9 < in_stack_00000030);
    iStack0000000000000034 = iStack0000000000000034 + 1;
  } while (bVar15 != 0);
FUN_180509ee0:
  return *(char *)(unaff_RBP + 0x80) != -1;
}



uint64_t FUN_180509bcd(void)

{
  byte bVar1;
  byte bVar2;
  float *pfVar3;
  float *pfVar4;
  uint64_t *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  float *in_RAX;
  ulonglong uVar10;
  longlong lVar11;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char cVar12;
  uint64_t uVar13;
  int8_t uVar14;
  ulonglong in_R11;
  longlong unaff_R13;
  byte unaff_R15B;
  float fVar15;
  float extraout_XMM0_Da;
  float fVar16;
  float fVar17;
  int8_t auVar18 [16];
  float fVar19;
  int8_t in_XMM3 [16];
  int8_t auVar20 [16];
  float fVar21;
  float unaff_XMM8_Da;
  float fVar22;
  char in_stack_00000030;
  uint uStack0000000000000034;
  uint64_t uStack0000000000000038;
  uint64_t uStack0000000000000040;
  uint64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  uint64_t in_stack_00000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  int32_t uStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  int32_t uStack0000000000000084;
  
  fVar6 = *in_RAX;
  fVar7 = in_RAX[1];
  fVar8 = in_RAX[2];
  uVar10 = 1;
  uStack0000000000000034 = 1;
  fVar21 = fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8;
  auVar20._4_12_ = in_XMM3._4_12_;
  auVar20._0_4_ = fVar21;
  auVar18._4_4_ = in_XMM3._4_4_;
  auVar18._0_4_ = fVar21;
  auVar18._8_4_ = in_XMM3._8_4_;
  auVar18._12_4_ = in_XMM3._12_4_;
  auVar18 = rsqrtss(auVar18,auVar20);
  fVar17 = auVar18._0_4_;
  fVar22 = fVar17 * 0.5 * (3.0 - fVar21 * fVar17 * fVar17);
  fVar17 = *(float *)(unaff_RBP + 0xa8);
  do {
    if (3 < (int)uVar10) break;
    pfVar3 = *(float **)(unaff_RBP + 0xa0);
    pfVar4 = *(float **)(unaff_RBP + 0x90);
    fVar19 = (float)(int)uVar10;
    *(int32_t *)(unaff_RBP + -0x5c) = 0x7f7fffff;
    uStack0000000000000084 = *(int32_t *)(unaff_RBP + -0x5c);
    fVar16 = pfVar4[8];
    fVar15 = fVar19 * ((fVar22 * fVar21) / fVar17) * 0.3;
    fVar19 = fVar19 * 0.3;
    fStack0000000000000068 = fVar6 * fVar22 * fVar15 + *pfVar4;
    fStack000000000000006c = fVar7 * fVar22 * fVar15 + pfVar4[1];
    fStack000000000000007c = fVar19 * pfVar3[1] + pfVar4[5];
    fStack0000000000000078 = fVar19 * *pfVar3 + pfVar4[4];
    fStack0000000000000070 = fVar8 * fVar22 * fVar15 + pfVar4[2];
    fStack0000000000000080 = fVar19 * pfVar3[2] + pfVar4[6];
    *(float *)(unaff_RBP + -0x78) = fVar16;
    uStack0000000000000038 = CONCAT44(fStack000000000000006c,fStack0000000000000068);
    uStack0000000000000040 = CONCAT44(0x7f7fffff,fStack0000000000000070);
    uStack0000000000000074 = 0x7f7fffff;
    *(float *)(unaff_RBP + -0x68) = fStack0000000000000078;
    *(float *)(unaff_RBP + -100) = fStack000000000000007c;
    *(float *)(unaff_RBP + -0x60) = fStack0000000000000080;
    *(int32_t *)(unaff_RBP + -0x5c) = uStack0000000000000084;
    uVar13 = in_stack_00000060;
    fStack0000000000000058 = fVar16;
    fVar15 = (float)FUN_1805353a0(&stack0x00000068,in_stack_00000060);
    cVar12 = '\0';
    *(float *)(unaff_RBP + -0x78) = fVar16 * unaff_XMM8_Da;
    do {
      lVar11 = (longlong)cVar12 * 0x30;
      bVar1 = *(byte *)(lVar11 + 0x2d + unaff_RSI);
      if ((char)bVar1 <= (char)in_R11) break;
      uStack0000000000000038 = 0;
      uStack0000000000000040 = 0;
      in_stack_00000048 = 0;
      in_stack_00000050 = 0;
      fStack0000000000000058 = (float)CONCAT31(fStack0000000000000058._1_3_,0xff);
      uStack000000000000005c = 0x7f7fffff;
      cVar9 = FUN_180531dc0(fVar15,unaff_R13 + 4 + lVar11,&stack0x00000068,&stack0x00000038,uVar13);
      fVar15 = extraout_XMM0_Da;
      if (cVar9 != '\0') {
        uVar14 = *(int8_t *)(lVar11 + 0x2c + unaff_RSI);
        fVar16 = (float)func_0x000180527130(extraout_XMM0_Da,uVar14);
        fVar15 = (float)func_0x000180527130(fVar16,*(int8_t *)(unaff_RBP + 0x80));
        if (fVar15 <= fVar16) {
          puVar5 = *(uint64_t **)(unaff_RBP + 0x98);
          in_R11 = (ulonglong)bVar1;
          bVar2 = *(byte *)(lVar11 + 0x2e + unaff_RSI);
          *puVar5 = uStack0000000000000038;
          puVar5[1] = uStack0000000000000040;
          unaff_R15B = bVar2 >> 1 & 1;
          *(byte *)(unaff_RBP + 0x88) = bVar1;
          puVar5[2] = in_stack_00000048;
          puVar5[3] = in_stack_00000050;
          *(int8_t *)(unaff_RBP + 0x80) = uVar14;
          puVar5[4] = CONCAT44(uStack000000000000005c,fStack0000000000000058);
          break;
        }
      }
      cVar12 = cVar12 + '\x01';
      in_R11 = (ulonglong)*(byte *)(unaff_RBP + 0x88);
      uVar13 = in_stack_00000060;
    } while (cVar12 < in_stack_00000030);
    uStack0000000000000034 = uStack0000000000000034 + 1;
    uVar10 = (ulonglong)uStack0000000000000034;
  } while (unaff_R15B != 0);
  return CONCAT71((int7)(uVar10 >> 8),*(char *)(unaff_RBP + 0x80) != -1);
}



bool FUN_180509ee0(void)

{
  longlong unaff_RBP;
  
  return *(char *)(unaff_RBP + 0x80) != -1;
}



bool FUN_180509ef0(void)

{
  longlong unaff_RBP;
  
  return *(char *)(unaff_RBP + 0x80) != -1;
}







