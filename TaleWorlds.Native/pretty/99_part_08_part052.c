#include "TaleWorlds.Native.Split.h"

// 99_part_08_part052.c - 5 个函数

// 函数: void FUN_1805ad200(longlong *param_1)
void FUN_1805ad200(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  char cVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int8_t auStack_d48 [32];
  longlong lStack_d28;
  float *pfStack_d20;
  float *pfStack_d18;
  float *pfStack_d10;
  float fStack_d08;
  float fStack_d04;
  float afStack_d00 [5];
  int32_t uStack_cec;
  float fStack_ce8;
  float fStack_ce4;
  float fStack_ce0;
  int32_t uStack_cdc;
  float fStack_cd8;
  float fStack_cd4;
  float fStack_cd0;
  int32_t uStack_ccc;
  float fStack_cc8;
  int8_t uStack_cb8;
  char cStack_cb7;
  longlong lStack_b0;
  ulonglong uStack_a8;
  
  uStack_a8 = _DAT_180bf00a8 ^ (ulonglong)auStack_d48;
  lStack_b0 = *param_1;
  lVar6 = param_1[1];
  uStack_cb8 = 0;
  if ((*(float *)(lVar6 + 0xf0) <= -1e+30) || (-1e+30 < *(float *)(lVar6 + 0xb0))) {
    if (((*(int *)(lStack_b0 + 0x10) < 0) ||
        (((*(int *)(lVar6 + 0x10) < 0 || (*(longlong *)(lStack_b0 + 0x6d8) == 0)) ||
         (*(char *)(*(longlong *)(lStack_b0 + 0x6d8) + 0x8be) == '\0')))) ||
       ((*(longlong *)(lVar6 + 0x658) == 0 || (*(char *)(lVar6 + 0x100) == -1)))) {
      *(byte *)((longlong)param_1 + 0x41) = *(byte *)((longlong)param_1 + 0x41) & 0xdf;
    }
    else {
      bVar5 = *(byte *)((longlong)param_1 + 0x41);
      *(byte *)((longlong)param_1 + 0x41) = bVar5 & 0xfd;
      lVar7 = *(longlong *)(*(longlong *)(lStack_b0 + 0x6d8) + 0x8a8);
      if (lVar6 == 0) {
        fVar14 = 0.15;
        afStack_d00[0] = 0.0;
        fStack_d08 = 0.1;
      }
      else {
        pfStack_d10 = &fStack_d08;
        pfStack_d18 = &fStack_d04;
        pfStack_d20 = afStack_d00;
        lStack_d28 = CONCAT71(lStack_d28._1_7_,1);
        FUN_18052fc60(lVar6,~(bVar5 >> 3) & 1,0,0);
        fVar14 = fStack_d04;
      }
      fVar1 = *(float *)(lVar6 + 0xf0);
      fVar2 = *(float *)(lVar6 + 0xf4);
      fVar3 = *(float *)(lVar6 + 0xe0);
      fVar4 = *(float *)(lVar6 + 0xe4);
      uStack_cec = 0x7f7fffff;
      fVar13 = *(float *)(lVar6 + 0xe8) * afStack_d00[0] + *(float *)(lVar6 + 0xf8);
      fVar12 = *(float *)(lVar6 + 0xe8) * fVar14 + *(float *)(lVar6 + 0xf8);
      fVar11 = fVar13;
      if (fVar13 <= fVar12) {
        fVar11 = fVar12;
      }
      fVar10 = fVar13;
      if (fVar12 <= fVar13) {
        fVar10 = fVar12;
      }
      FUN_1805afe90(&uStack_cb8,fVar10 - fStack_d08,fVar11 + fStack_d08);
      uStack_cdc = 0x7f7fffff;
      uStack_ccc = uStack_cec;
      fStack_ce8 = fVar3 * fVar14 + fVar1;
      fStack_ce4 = fVar4 * fVar14 + fVar2;
      fStack_ce0 = fVar12;
      fStack_cd8 = fVar3 * afStack_d00[0] + fVar1;
      fStack_cd4 = fVar4 * afStack_d00[0] + fVar2;
      fStack_cd0 = fVar13;
      FUN_1805353a0(&fStack_ce8,lVar7 + 0x70);
      cVar9 = '\0';
      fStack_cc8 = fStack_d08 / *(float *)(*(longlong *)(*param_1 + 0x6d8) + 0x8c0);
      if ('\0' < cStack_cb7) {
        pfVar8 = (float *)(param_1 + 0xe);
        do {
          if (*(char *)pfVar8 != '\x02') {
            pfStack_d20 = (float *)CONCAT44(pfStack_d20._4_4_,fVar14);
            lStack_d28 = lVar6 + 0x28;
            pfStack_d18 = pfVar8;
            FUN_1805abd60(param_1,&uStack_cb8,&fStack_ce8,cVar9);
          }
          cVar9 = cVar9 + '\x01';
          pfVar8 = (float *)((longlong)pfVar8 + 1);
        } while (cVar9 < cStack_cb7);
      }
    }
  }
  FUN_1805ad560(param_1,&uStack_cb8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_a8 ^ (ulonglong)auStack_d48);
}






// 函数: void FUN_1805ad2c7(longlong param_1,ulonglong param_2)
void FUN_1805ad2c7(longlong param_1,ulonglong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  longlong lVar6;
  longlong in_RAX;
  byte bVar7;
  longlong *plVar8;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  char cVar9;
  longlong unaff_R14;
  int32_t uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  int32_t uStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  int32_t uStack000000000000006c;
  float in_stack_00000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  int32_t uStack000000000000007c;
  
  bVar7 = (byte)(param_2 & 0xfffffffffffffffd);
  *(byte *)((longlong)unaff_RSI + 0x41) = bVar7;
  lVar6 = *(longlong *)(*(longlong *)(in_RAX + 0x6d8) + 0x8a8);
  if (param_1 == 0) {
    fStack0000000000000044 = 0.15;
    in_stack_00000048 = 0.0;
    fStack0000000000000040 = 0.1;
  }
  else {
    FUN_18052fc60(param_1,CONCAT71((int7)((param_2 & 0xfffffffffffffffd) >> 8),~(bVar7 >> 3)) &
                          0xffffffffffffff01,0,0,1);
  }
  fVar1 = *(float *)(unaff_R14 + 200);
  fVar2 = *(float *)(unaff_R14 + 0xcc);
  fVar3 = *(float *)(unaff_R14 + 0xb8);
  fVar4 = *(float *)(unaff_R14 + 0xbc);
  uStack000000000000005c = 0x7f7fffff;
  fVar14 = *(float *)(unaff_R14 + 0xc0) * in_stack_00000048 + *(float *)(unaff_R14 + 0xd0);
  fVar13 = *(float *)(unaff_R14 + 0xc0) * fStack0000000000000044 + *(float *)(unaff_R14 + 0xd0);
  fVar12 = fVar14;
  if (fVar14 <= fVar13) {
    fVar12 = fVar13;
  }
  fVar11 = fVar14;
  if (fVar13 <= fVar14) {
    fVar11 = fVar13;
  }
  FUN_1805afe90(unaff_RBP + -0x70,fVar11 - fStack0000000000000040,fVar12 + fStack0000000000000040);
  uStack000000000000006c = 0x7f7fffff;
  uStack000000000000007c = uStack000000000000005c;
  in_stack_00000060 = fVar3 * fStack0000000000000044 + fVar1;
  fStack0000000000000064 = fVar4 * fStack0000000000000044 + fVar2;
  in_stack_00000068 = fVar13;
  in_stack_00000070 = fVar3 * in_stack_00000048 + fVar1;
  fStack0000000000000074 = fVar4 * in_stack_00000048 + fVar2;
  in_stack_00000078 = fVar14;
  uVar10 = FUN_1805353a0(&stack0x00000060,lVar6 + 0x70);
  cVar9 = '\0';
  cVar5 = *(char *)(unaff_RBP + -0x6f);
  *(float *)(unaff_RBP + -0x80) =
       fStack0000000000000040 / *(float *)(*(longlong *)(*unaff_RSI + 0x6d8) + 0x8c0);
  if ('\0' < cVar5) {
    plVar8 = unaff_RSI + 0xe;
    do {
      if ((char)*plVar8 != '\x02') {
        uVar10 = FUN_1805abd60(uVar10,unaff_RBP + -0x70,&stack0x00000060,cVar9);
      }
      cVar9 = cVar9 + '\x01';
      plVar8 = (longlong *)((longlong)plVar8 + 1);
    } while (cVar9 < cVar5);
  }
  FUN_1805ad560(uVar10,unaff_RBP + -0x70);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xba0) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1805ad4d6(void)
void FUN_1805ad4d6(void)

{
  char *pcVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char unaff_DIL;
  char unaff_R15B;
  
  pcVar1 = (char *)(unaff_RSI + 0x70);
  do {
    if (*pcVar1 != '\x02') {
      FUN_1805abd60();
    }
    unaff_DIL = unaff_DIL + '\x01';
    pcVar1 = pcVar1 + 1;
  } while (unaff_DIL < unaff_R15B);
  FUN_1805ad560();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xba0) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ad560(longlong *param_1,char *param_2)
void FUN_1805ad560(longlong *param_1,char *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  int8_t auVar15 [16];
  int8_t auStack_2c8 [32];
  float *pfStack_2a8;
  float *pfStack_2a0;
  int32_t uStack_298;
  longlong *plStack_290;
  uint64_t uStack_288;
  int32_t uStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  int32_t uStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  int32_t uStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  int32_t uStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  int32_t uStack_22c;
  int32_t uStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  int32_t uStack_20c;
  uint uStack_208;
  uint uStack_204;
  uint uStack_200;
  uint uStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  uint uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  int32_t uStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  int32_t uStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  int32_t uStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int32_t uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int32_t uStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  int32_t uStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  int32_t uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  uint uStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  int32_t uStack_14c;
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
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint uStack_fc;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  ulonglong uStack_d8;
  
  uStack_d8 = _DAT_180bf00a8 ^ (ulonglong)auStack_2c8;
  if ((*(byte *)((longlong)param_1 + 0x41) & 1) == 0) {
    *(byte *)((longlong)param_1 + 0x41) = *(byte *)((longlong)param_1 + 0x41) | 1;
    lVar5 = *param_1;
    if ((((-1 < *(int *)(lVar5 + 0x10)) && (-1 < *(int *)(param_1[1] + 0x10))) &&
        (lVar12 = *(longlong *)(lVar5 + 0x6d8), lVar12 != 0)) &&
       ((*(char *)(lVar12 + 0x8be) != '\0' && (*(longlong *)(param_1[1] + 0x658) != 0)))) {
      lVar12 = *(longlong *)(lVar12 + 0x8a8);
      puVar10 = (uint *)((longlong)(char)param_1[8] * 0x100 +
                        *(longlong *)(*(longlong *)(lVar5 + 0x658) + 0x18));
      do {
        LOCK();
        uVar1 = *puVar10;
        *puVar10 = *puVar10 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      uStack_208 = puVar10[1];
      uStack_204 = puVar10[2];
      uStack_200 = puVar10[3];
      uStack_1fc = puVar10[4];
      fVar6 = (float)puVar10[5];
      fVar7 = (float)puVar10[6];
      fVar8 = (float)puVar10[7];
      uVar1 = puVar10[8];
      plVar11 = (longlong *)0x0;
      *puVar10 = 0;
      fStack_1f8 = fVar6;
      fStack_1f4 = fVar7;
      fStack_1f0 = fVar8;
      uStack_1ec = uVar1;
      uStack_178 = uStack_208;
      uStack_174 = uStack_204;
      uStack_170 = uStack_200;
      uStack_16c = uStack_1fc;
      fStack_168 = fVar6;
      fStack_164 = fVar7;
      fStack_160 = fVar8;
      uStack_15c = uVar1;
      uStack_118 = uStack_208;
      uStack_114 = uStack_204;
      uStack_110 = uStack_200;
      uStack_10c = uStack_1fc;
      fStack_108 = fVar6;
      fStack_104 = fVar7;
      fStack_100 = fVar8;
      uStack_fc = uVar1;
      FUN_18063b5f0(&fStack_1e8,&uStack_208);
      fVar13 = *(float *)(lVar12 + 0x70);
      fVar14 = *(float *)(lVar12 + 0x80);
      fVar2 = *(float *)(lVar12 + 0x84);
      fVar3 = *(float *)(lVar12 + 0x74);
      fStack_250 = *(float *)(lVar12 + 0x98);
      fStack_138 = fStack_1c8;
      fStack_134 = fStack_1c4;
      fStack_130 = fStack_1c0;
      uStack_12c = uStack_1bc;
      fStack_218 = fVar6 * fVar13 + fVar7 * fVar14 + *(float *)(lVar12 + 0xa0);
      fStack_214 = fVar6 * fVar3 + fVar7 * fVar2 + *(float *)(lVar12 + 0xa4);
      fStack_210 = fVar8 * fStack_250 + *(float *)(lVar12 + 0xa8);
      fStack_148 = fStack_1d8;
      fStack_144 = fStack_1d4;
      fStack_140 = fStack_1d0;
      uStack_13c = uStack_1cc;
      uStack_20c = 0x7f7fffff;
      uStack_17c = 0x7f7fffff;
      fStack_234 = fStack_1c8 * fVar3 + fStack_1c4 * fVar2;
      fStack_230 = fStack_1c0 * fStack_250;
      fStack_238 = fStack_1c8 * fVar13 + fStack_1c4 * fVar14;
      fStack_244 = fStack_1d8 * fVar3 + fStack_1d4 * fVar2;
      fStack_240 = fStack_1d0 * fStack_250;
      fStack_248 = fStack_1d8 * fVar13 + fStack_1d4 * fVar14;
      fStack_158 = fStack_1e8;
      fStack_154 = fStack_1e4;
      fStack_150 = fStack_1e0;
      uStack_14c = uStack_1dc;
      fStack_258 = fStack_1e8 * fVar13 + fStack_1e4 * fVar14;
      fStack_254 = fStack_1e8 * fVar3 + fStack_1e4 * fVar2;
      fStack_250 = fStack_1e0 * fStack_250;
      uStack_23c = 0x7f7fffff;
      uStack_19c = 0x7f7fffff;
      uStack_1ac = 0x7f7fffff;
      fVar13 = *(float *)((longlong)param_1 + 0x34);
      fVar14 = *(float *)(param_1 + 6);
      uStack_24c = 0x7f7fffff;
      fVar2 = *(float *)(param_1 + 7);
      uStack_18c = 0x7f7fffff;
      uStack_22c = 0x7f7fffff;
      fStack_278 = fVar13 * fStack_248 + fStack_258 * fVar14 + fVar2 * fStack_238 + fStack_218;
      fStack_274 = fVar13 * fStack_244 + fStack_254 * fVar14 + fVar2 * fStack_234 + fStack_214;
      fStack_270 = fVar13 * fStack_240 + fStack_250 * fVar14 + fVar2 * fStack_230 + fStack_210;
      fStack_26c = fVar13 * 3.4028235e+38 + fVar14 * 3.4028235e+38 + fVar2 * 3.4028235e+38 +
                   3.4028235e+38;
      fStack_1b8 = fStack_258;
      fStack_1b4 = fStack_254;
      fStack_1b0 = fStack_250;
      fStack_1a8 = fStack_248;
      fStack_1a4 = fStack_244;
      fStack_1a0 = fStack_240;
      fStack_198 = fStack_238;
      fStack_194 = fStack_234;
      fStack_190 = fStack_230;
      fStack_188 = fStack_218;
      fStack_184 = fStack_214;
      fStack_180 = fStack_210;
      fStack_128 = fVar6;
      fStack_124 = fVar7;
      fStack_120 = fVar8;
      uStack_11c = uVar1;
      cVar9 = FUN_180527720(param_1[1],*(byte *)((longlong)param_1 + 0x41) >> 4 & 1);
      puVar10 = (uint *)((longlong)cVar9 * 0x100 +
                        *(longlong *)(*(longlong *)(param_1[1] + 0x658) + 0x18));
      do {
        LOCK();
        uVar1 = *puVar10;
        *puVar10 = *puVar10 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      uStack_f8 = *(uint64_t *)(puVar10 + 1);
      uStack_f0 = *(uint64_t *)(puVar10 + 3);
      fStack_e8 = (float)puVar10[5];
      fStack_e4 = (float)puVar10[6];
      fStack_e0 = (float)puVar10[7];
      uStack_dc = puVar10[8];
      fStack_268 = fStack_e8 - fStack_278;
      *puVar10 = 0;
      bVar4 = *(byte *)(param_1 + 5);
      uStack_21c = 0x7f7fffff;
      fStack_264 = fStack_e4 - fStack_274;
      fStack_260 = fStack_e0 - fStack_270;
      uStack_25c = 0x7f7fffff;
      fVar13 = fStack_268 * fStack_268 + fStack_264 * fStack_264 + fStack_260 * fStack_260;
      auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
      fVar14 = auVar15._0_4_;
      fVar13 = fVar14 * 0.5 * (3.0 - fVar13 * fVar14 * fVar14);
      fStack_268 = fStack_268 * fVar13;
      fStack_264 = fStack_264 * fVar13;
      fStack_260 = fStack_260 * fVar13;
      if ((bVar4 & 1) != 0) {
        plVar11 = param_1 + 9;
        FUN_1805ab6a0(plVar11,*param_1);
      }
      lVar5 = *param_1;
      if (*(int *)(lVar5 + 0x568) != 1) {
        uStack_298 = *(int32_t *)(lVar5 + 0x10);
        uStack_280 = 0;
        uStack_288 = 0;
        plStack_290 = (longlong *)0x0;
        pfStack_2a0 = (float *)CONCAT44(pfStack_2a0._4_4_,*(int32_t *)(param_1[1] + 0x10));
        pfStack_2a8 = (float *)((ulonglong)pfStack_2a8 & 0xffffffffffffff00);
        FUN_1804f83f0(*(uint64_t *)(lVar5 + 0x8d8),_DAT_180c96130,&fStack_278,1);
      }
      uStack_298 = CONCAT31(uStack_298._1_3_,(char)param_1[8]);
      pfStack_2a0 = &fStack_1b8;
      pfStack_2a8 = &fStack_268;
      plStack_290 = plVar11;
      FUN_1805ac830(param_1,param_1[2],bVar4 & 1,&fStack_278);
      if (*param_2 == '\0') {
        FUN_1805afe90(param_2,0xff7fffff);
      }
      cVar9 = '\0';
      if ('\0' < param_2[1]) {
        do {
          if (param_2[((longlong)cVar9 + 1) * 0x30] == (char)param_1[8]) {
            *(int8_t *)((longlong)param_1 + (longlong)cVar9 + 0x70) = 1;
            break;
          }
          cVar9 = cVar9 + '\x01';
        } while (cVar9 < param_2[1]);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_2c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ad5f5(uint64_t param_1,longlong param_2,longlong param_3)
void FUN_1805ad5f5(uint64_t param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  float fVar2;
  byte bVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint64_t uVar9;
  char cVar10;
  longlong in_RAX;
  uint *puVar11;
  longlong *unaff_RBX;
  float *unaff_RBP;
  uint64_t unaff_RSI;
  char *unaff_RDI;
  longlong in_R11;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar12;
  float fVar13;
  int32_t uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int8_t auVar18 [16];
  float fVar19;
  float fVar20;
  int32_t unaff_XMM6_Da;
  float fVar21;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  float fVar22;
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
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Db;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM14_Dd;
  int32_t unaff_XMM15_Da;
  float fVar23;
  int32_t unaff_XMM15_Db;
  int32_t unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  ulonglong in_stack_00000020;
  float in_stack_00000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  float in_stack_00000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  int32_t uStack000000000000007c;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
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
  puVar11 = (uint *)(param_2 * 0x100 + *(longlong *)(in_RAX + 0x18));
  *(int32_t *)(in_R11 + -0xb8) = unaff_XMM14_Da;
  *(int32_t *)(in_R11 + -0xb4) = unaff_XMM14_Db;
  *(int32_t *)(in_R11 + -0xb0) = unaff_XMM14_Dc;
  *(int32_t *)(in_R11 + -0xac) = unaff_XMM14_Dd;
  *(int32_t *)(in_R11 + -200) = unaff_XMM15_Da;
  *(int32_t *)(in_R11 + -0xc4) = unaff_XMM15_Db;
  *(int32_t *)(in_R11 + -0xc0) = unaff_XMM15_Dc;
  *(int32_t *)(in_R11 + -0xbc) = unaff_XMM15_Dd;
  do {
    LOCK();
    uVar1 = *puVar11;
    *puVar11 = *puVar11 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  fVar15 = (float)puVar11[1];
  fVar13 = (float)puVar11[2];
  fVar17 = (float)puVar11[3];
  fVar2 = (float)puVar11[4];
  fVar12 = (float)puVar11[5];
  fVar21 = (float)puVar11[6];
  fVar19 = (float)puVar11[7];
  fVar20 = (float)puVar11[8];
  unaff_RBP[0x2c] = fVar15;
  unaff_RBP[0x2d] = fVar13;
  unaff_RBP[0x2e] = fVar17;
  unaff_RBP[0x2f] = fVar2;
  unaff_RBP[0x30] = fVar12;
  unaff_RBP[0x31] = fVar21;
  unaff_RBP[0x32] = fVar19;
  unaff_RBP[0x33] = fVar20;
  unaff_RBP[0x14] = fVar15;
  unaff_RBP[0x15] = fVar13;
  unaff_RBP[0x16] = fVar17;
  unaff_RBP[0x17] = fVar2;
  *puVar11 = 0;
  unaff_RBP[0x18] = fVar12;
  unaff_RBP[0x19] = fVar21;
  unaff_RBP[0x1a] = fVar19;
  unaff_RBP[0x1b] = fVar20;
  unaff_RBP[-0x10] = fVar15;
  unaff_RBP[-0xf] = fVar13;
  unaff_RBP[-0xe] = fVar17;
  unaff_RBP[-0xd] = fVar2;
  unaff_RBP[-0xc] = fVar12;
  unaff_RBP[-0xb] = fVar21;
  unaff_RBP[-10] = fVar19;
  unaff_RBP[-9] = fVar20;
  FUN_18063b5f0(unaff_RBP + -8,unaff_RBP + -0x10);
  fVar22 = *unaff_RBP;
  fVar23 = unaff_RBP[1];
  fVar5 = unaff_RBP[-4];
  fVar6 = unaff_RBP[-3];
  unaff_RBP[-0x19] = 3.4028235e+38;
  fVar15 = *(float *)(param_3 + 0x70);
  fVar13 = *(float *)(param_3 + 0x80);
  fVar17 = *(float *)(param_3 + 0x84);
  fVar2 = *(float *)(param_3 + 0x74);
  in_stack_00000078 = *(float *)(param_3 + 0x98);
  fVar7 = unaff_RBP[-8];
  fVar8 = unaff_RBP[-7];
  unaff_RBP[-0x1d] = 3.4028235e+38;
  unaff_RBP[0x24] = fVar22;
  unaff_RBP[0x25] = fVar23;
  unaff_RBP[0x26] = unaff_RBP[2];
  unaff_RBP[0x27] = unaff_RBP[3];
  fVar16 = fVar12 * fVar15 + fVar21 * fVar13 + *(float *)(param_3 + 0xa0);
  unaff_RBP[0x28] = fVar12;
  unaff_RBP[0x29] = fVar21;
  unaff_RBP[0x2a] = fVar19;
  unaff_RBP[0x2b] = fVar20;
  fVar12 = fVar12 * fVar2 + fVar21 * fVar17 + *(float *)(param_3 + 0xa4);
  fVar21 = fVar19 * in_stack_00000078 + *(float *)(param_3 + 0xa8);
  unaff_RBP[0x20] = fVar5;
  unaff_RBP[0x21] = fVar6;
  unaff_RBP[0x22] = unaff_RBP[-2];
  unaff_RBP[0x23] = unaff_RBP[-1];
  unaff_RBP[-0x14] = fVar16;
  unaff_RBP[-0x13] = fVar12;
  unaff_RBP[-0x12] = fVar21;
  unaff_RBP[-0x11] = 3.4028235e+38;
  unaff_RBP[0x10] = fVar16;
  unaff_RBP[0x11] = fVar12;
  unaff_RBP[0x12] = fVar21;
  unaff_RBP[0x13] = 3.4028235e+38;
  fVar16 = fVar22 * fVar2 + fVar23 * fVar17;
  fVar21 = unaff_RBP[2] * in_stack_00000078;
  fVar22 = fVar22 * fVar15 + fVar23 * fVar13;
  fVar19 = fVar5 * fVar2 + fVar6 * fVar17;
  fVar23 = unaff_RBP[-2] * in_stack_00000078;
  fVar20 = fVar5 * fVar15 + fVar6 * fVar13;
  unaff_RBP[0x1c] = fVar7;
  unaff_RBP[0x1d] = fVar8;
  unaff_RBP[0x1e] = unaff_RBP[-6];
  unaff_RBP[0x1f] = unaff_RBP[-5];
  bVar3 = *(byte *)((longlong)unaff_RBX + 0x41);
  lVar4 = unaff_RBX[1];
  in_stack_00000070 = fVar7 * fVar15 + fVar8 * fVar13;
  fVar12 = unaff_RBP[-0x1d];
  fStack0000000000000074 = fVar7 * fVar2 + fVar8 * fVar17;
  in_stack_00000078 = unaff_RBP[-6] * in_stack_00000078;
  fVar2 = unaff_RBP[-0x19];
  unaff_RBP[-0x20] = fVar20;
  unaff_RBP[-0x1f] = fVar19;
  unaff_RBP[-0x1e] = fVar23;
  unaff_RBP[-0x1d] = fVar12;
  unaff_RBP[8] = fVar20;
  unaff_RBP[9] = fVar19;
  unaff_RBP[10] = fVar23;
  unaff_RBP[0xb] = fVar12;
  unaff_RBP[4] = in_stack_00000070;
  unaff_RBP[5] = fStack0000000000000074;
  unaff_RBP[6] = in_stack_00000078;
  unaff_RBP[7] = 3.4028235e+38;
  fVar15 = *(float *)((longlong)unaff_RBX + 0x34);
  fVar13 = *(float *)(unaff_RBX + 6);
  uStack000000000000007c = 0x7f7fffff;
  fVar17 = *(float *)(unaff_RBX + 7);
  unaff_RBP[0xc] = fVar22;
  unaff_RBP[0xd] = fVar16;
  unaff_RBP[0xe] = fVar21;
  unaff_RBP[0xf] = fVar2;
  unaff_RBP[-0x1c] = fVar22;
  unaff_RBP[-0x1b] = fVar16;
  unaff_RBP[-0x1a] = fVar21;
  unaff_RBP[-0x19] = fVar2;
  in_stack_00000050 =
       fVar15 * fVar20 + in_stack_00000070 * fVar13 + fVar17 * fVar22 + unaff_RBP[-0x14];
  fStack0000000000000054 =
       fVar15 * fVar19 + fStack0000000000000074 * fVar13 + fVar17 * fVar16 + unaff_RBP[-0x13];
  in_stack_00000058 =
       fVar15 * fVar23 + in_stack_00000078 * fVar13 + fVar17 * fVar21 + unaff_RBP[-0x12];
  fStack000000000000005c =
       fVar15 * fVar12 + fVar13 * 3.4028235e+38 + fVar17 * fVar2 + unaff_RBP[-0x11];
  cVar10 = FUN_180527720(lVar4,bVar3 >> 4 & 1);
  puVar11 = (uint *)((longlong)cVar10 * 0x100 +
                    *(longlong *)(*(longlong *)(unaff_RBX[1] + 0x658) + 0x18));
  do {
    LOCK();
    uVar1 = *puVar11;
    *puVar11 = *puVar11 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  uVar9 = *(uint64_t *)(puVar11 + 3);
  in_stack_00000060 = (float)puVar11[5];
  fVar15 = (float)puVar11[6];
  in_stack_00000068 = (float)puVar11[7];
  fVar13 = (float)puVar11[8];
  *(uint64_t *)(unaff_RBP + 0x34) = *(uint64_t *)(puVar11 + 1);
  *(uint64_t *)(unaff_RBP + 0x36) = uVar9;
  unaff_RBP[0x38] = in_stack_00000060;
  unaff_RBP[0x39] = fVar15;
  unaff_RBP[0x3a] = in_stack_00000068;
  unaff_RBP[0x3b] = fVar13;
  in_stack_00000060 = in_stack_00000060 - in_stack_00000050;
  *puVar11 = 0;
  bVar3 = *(byte *)(unaff_RBX + 5);
  unaff_RBP[-0x15] = 3.4028235e+38;
  fStack000000000000006c = unaff_RBP[-0x15];
  fVar15 = fVar15 - fStack0000000000000054;
  in_stack_00000068 = in_stack_00000068 - in_stack_00000058;
  fVar13 = in_stack_00000060 * in_stack_00000060 + fVar15 * fVar15 +
           in_stack_00000068 * in_stack_00000068;
  auVar18 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
  fVar17 = auVar18._0_4_;
  fVar13 = fVar17 * 0.5 * (3.0 - fVar13 * fVar17 * fVar17);
  in_stack_00000060 = in_stack_00000060 * fVar13;
  fVar15 = fVar15 * fVar13;
  in_stack_00000068 = in_stack_00000068 * fVar13;
  fStack0000000000000064 = fVar15;
  if ((bVar3 & 1) != 0) {
    fVar15 = (float)FUN_1805ab6a0(unaff_RBX + 9,*unaff_RBX);
  }
  if (*(int *)(*unaff_RBX + 0x568) != 1) {
    fVar15 = (float)FUN_1804f83f0(*(uint64_t *)(*unaff_RBX + 0x8d8),_DAT_180c96130,
                                  &stack0x00000050,1,in_stack_00000020 & 0xffffffffffffff00);
  }
  uVar14 = FUN_1805ac830(fVar15,unaff_RBX[2],bVar3 & 1,&stack0x00000050,&stack0x00000060);
  if (*unaff_RDI == '\0') {
    FUN_1805afe90(uVar14,0xff7fffff);
  }
  cVar10 = '\0';
  if ('\0' < unaff_RDI[1]) {
    do {
      if (unaff_RDI[((longlong)cVar10 + 1) * 0x30] == (char)unaff_RBX[8]) {
        *(int8_t *)((longlong)unaff_RBX + (longlong)cVar10 + 0x70) = 1;
        break;
      }
      cVar10 = cVar10 + '\x01';
    } while (cVar10 < unaff_RDI[1]);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x3c) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




