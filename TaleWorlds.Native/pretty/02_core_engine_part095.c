#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part095.c - 2 个函数

// 函数: void FUN_18011a0a0(uint64_t param_1,char *param_2,uint64_t param_3,uint64_t param_4,
void FUN_18011a0a0(uint64_t param_1,char *param_2,uint64_t param_3,uint64_t param_4,
                  int param_5,int param_6,char *param_7,float param_8,float param_9,
                  uint64_t param_10)

{
  float *pfVar1;
  int64_t lVar2;
  uint64_t uVar3;
  bool bVar4;
  uint64_t uVar5;
  char cVar6;
  int32_t uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  uint64_t in_stack_fffffffffffffe88;
  int32_t uVar24;
  double dVar23;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  int iStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  int64_t lStack_130;
  float fStack_128;
  float fStack_124;
  uint64_t uStack_120;
  int64_t lStack_118;
  uint64_t uStack_110;
  float fStack_108;
  float fStack_104;
  int8_t auStack_f8 [16];
  
  lVar12 = SYSTEM_DATA_MANAGER_A;
  lStack_130 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lStack_118 = *(int64_t *)(lVar12 + 0x1af8);
  if (*(char *)(lStack_118 + 0xb4) == '\0') {
    pcVar8 = param_2;
    if (param_2 != (char *)0xffffffffffffffff) {
      while (*pcVar8 != '\0') {
        if (((*pcVar8 == '#') && (pcVar8[1] == '#')) ||
           (pcVar8 = pcVar8 + 1, pcVar8 == (char *)0xffffffffffffffff)) break;
      }
    }
    pfVar1 = *(float **)(lVar12 + 0x19f0);
    iVar9 = 0;
    fVar18 = *(float *)(lVar12 + 0x19f8);
    uStackX_18 = param_3;
    uStackX_20 = param_4;
    if (param_2 == pcVar8) {
      fVar16 = 0.0;
    }
    else {
      in_stack_fffffffffffffe88 =
           CONCAT44((int)((uint64_t)in_stack_fffffffffffffe88 >> 0x20),0xbf800000);
      FUN_180297340(pfVar1,&uStackX_18,fVar18,0x7f7fffff,in_stack_fffffffffffffe88,param_2,pcVar8,0)
      ;
      fVar16 = (float)uStackX_18;
      if (0.0 < (float)uStackX_18) {
        fVar16 = (float)uStackX_18 - fVar18 / *pfVar1;
      }
      fVar16 = (float)(int)(fVar16 + 0.95);
      fVar18 = uStackX_18._4_4_;
    }
    lVar15 = lStack_118;
    fStack_134 = fVar16;
    if ((float)param_10 == 0.0) {
      param_10._0_4_ = (float)func_0x00018012d6a0();
    }
    if (param_10._4_4_ == 0.0) {
      param_10._4_4_ = *(float *)(lVar12 + 0x1660) + *(float *)(lVar12 + 0x1660) + fVar18;
    }
    pfVar1 = (float *)(lVar15 + 0x100);
    fVar18 = *pfVar1;
    fVar21 = *(float *)(lVar15 + 0x104);
    fVar20 = *pfVar1;
    uVar24 = *(int32_t *)(lVar15 + 0x104);
    uVar3 = *(uint64_t *)pfVar1;
    uVar11 = *(uint64_t *)pfVar1;
    fStack_108 = fVar18 + (float)param_10;
    param_10._4_4_ = fVar21 + param_10._4_4_;
    auStack_f8 = ZEXT416((uint)fVar18);
    fVar19 = fVar18 + *(float *)(lVar12 + 0x165c);
    fVar22 = fStack_108 - *(float *)(lVar12 + 0x165c);
    fStack_144 = fVar21 + *(float *)(lVar12 + 0x1660);
    fStack_148 = param_10._4_4_ - *(float *)(lVar12 + 0x1660);
    uStackX_18 = CONCAT44(uStackX_18._4_4_,fVar22);
    uStack_120 = CONCAT44(fStack_148,fVar22);
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    else {
      fVar16 = fVar16 + *(float *)(lVar12 + 0x1674);
    }
    fVar16 = fStack_108 + fVar16;
    fStack_154 = param_10._4_4_ - fVar21;
    fStack_158 = fVar16 - fVar18;
    fStack_138 = fVar21;
    fStack_128 = fVar19;
    fStack_124 = fStack_144;
    fStack_104 = param_10._4_4_;
    func_0x000180124080(&fStack_158,*(int32_t *)(lVar12 + 0x1660));
    lVar15 = *(int64_t *)(lVar12 + 0x1af8);
    *(uint64_t *)(lVar15 + 0x144) = 0;
    *(float *)(lVar15 + 0x14c) = fVar20;
    *(int32_t *)(lVar15 + 0x150) = uVar24;
    *(float *)(lVar15 + 0x154) = fVar16;
    *(float *)(lVar15 + 0x158) = param_10._4_4_;
    lVar2 = *(int64_t *)(lVar12 + 0x1af8);
    if ((((*(float *)(lVar2 + 0x22c) <= param_10._4_4_ &&
           param_10._4_4_ != *(float *)(lVar2 + 0x22c)) && (fVar21 < *(float *)(lVar2 + 0x234))) &&
        ((*(float *)(lVar2 + 0x228) <= fVar16 && fVar16 != *(float *)(lVar2 + 0x228) &&
         (fVar18 < *(float *)(lVar2 + 0x230))))) || (*(char *)(lVar12 + 0x2e38) != '\0')) {
      fStack_158 = fVar20;
      fStack_154 = (float)uVar24;
      fStack_150 = fVar16;
      fStack_14c = param_10._4_4_;
      cVar6 = FUN_180128040(&fStack_158,&fStack_150,1);
      if (cVar6 != '\0') {
        *(uint *)(lVar15 + 0x148) = *(uint *)(lVar15 + 0x148) | 1;
      }
      if (((*(int *)(lVar12 + 0x1b18) == 0) || (*(char *)(lVar12 + 0x1b1c) != '\0')) &&
         (((lVar15 = *(int64_t *)(lVar12 + 0x1af8), *(int64_t *)(lVar12 + 0x1b00) == lVar15 &&
           ((((*(int *)(lVar12 + 0x1b2c) == 0 || (*(char *)(lVar12 + 0x1b3d) != '\0')) &&
             (cVar6 = FUN_180128040(&fStack_128,&uStack_120), cVar6 != '\0')) &&
            ((*(char *)(lVar12 + 0x1d07) == '\0' &&
             (cVar6 = func_0x000180124000(lVar15,0), cVar6 != '\0')))))) &&
          ((*(byte *)(lVar15 + 0x1a8) & 4) == 0)))) {
        *(int32_t *)(lVar12 + 0x1b18) = 0;
        bVar4 = true;
        *(int8_t *)(lVar12 + 0x1b1c) = 0;
      }
      else {
        bVar4 = false;
      }
      uVar5 = uStackX_20;
      uVar24 = (int32_t)((uint64_t)in_stack_fffffffffffffe88 >> 0x20);
      lVar15 = lVar12;
      if ((param_8 == 3.4028235e+38) || (param_9 == 3.4028235e+38)) {
        fVar16 = -3.4028235e+38;
        fVar20 = 3.4028235e+38;
        if (0 < param_5) {
          do {
            fVar17 = (float)func_0x00018011a9b0(uVar5,iVar9);
            uVar24 = (int32_t)((uint64_t)in_stack_fffffffffffffe88 >> 0x20);
            if (fVar17 <= fVar20) {
              fVar20 = fVar17;
            }
            if (fVar16 < fVar17) {
              fVar16 = fVar17;
            }
            iVar9 = iVar9 + 1;
            lVar12 = SYSTEM_DATA_MANAGER_A;
            lVar15 = lStack_130;
          } while (iVar9 < param_5);
        }
        if (param_8 == 3.4028235e+38) {
          param_8 = fVar20;
        }
        if (param_9 == 3.4028235e+38) {
          param_9 = fVar16;
        }
      }
      fStack_158 = *(float *)(lVar12 + 0x1738);
      fStack_154 = *(float *)(lVar12 + 0x173c);
      fStack_150 = *(float *)(lVar12 + 0x1740);
      fStack_14c = *(float *)(lVar12 + 0x1744) * *(float *)(lVar12 + 0x1628);
      uVar7 = func_0x000180121e20(&fStack_158);
      dVar23 = (double)CONCAT44(uVar24,*(int32_t *)(lVar15 + 0x1664));
      uStack_110 = uVar3;
      FUN_180122960(uVar11,CONCAT44(fStack_104,fStack_108),uVar7,1,dVar23);
      lVar12 = SYSTEM_DATA_MANAGER_A;
      if (0 < param_5) {
        iStack_140 = -1;
        iVar9 = param_5;
        if ((int)(float)param_10 < param_5) {
          iVar9 = (int)(float)param_10;
        }
        uVar13 = iVar9 - 1;
        uVar14 = (uint64_t)uVar13;
        uVar11 = uStackX_20;
        if (bVar4) {
          fVar18 = (*(float *)(lVar15 + 0x118) - fVar19) / (fVar22 - fVar19);
          if (0.0 <= fVar18) {
            if (0.9999 <= fVar18) {
              fVar18 = 0.9999;
            }
          }
          else {
            fVar18 = 0.0;
          }
          iVar9 = (int)((float)(param_5 + -1) * fVar18);
          iStack_140 = iVar9;
          fVar18 = (float)func_0x00018011a9b0(uStackX_20,
                                              (int64_t)(iVar9 + param_6) % (int64_t)param_5 &
                                              0xffffffff);
          uVar11 = uStackX_20;
          fVar16 = (float)func_0x00018011a9b0(uStackX_20,
                                              (int64_t)(iVar9 + param_6 + 1) % (int64_t)param_5 &
                                              0xffffffff);
          dVar23 = (double)fVar16;
          FUN_18012ea30(&rendering_buffer_2256_ptr,iVar9,(double)fVar18,iVar9 + 1,dVar23);
        }
        if (param_8 == param_9) {
          fVar18 = 0.0;
        }
        else {
          fVar18 = 1.0 / (param_9 - param_8);
        }
        fVar21 = 0.0;
        fVar16 = (float)func_0x00018011a9b0(uVar11,(int64_t)param_6 % (int64_t)param_5 &
                                                   0xffffffff);
        lVar12 = SYSTEM_DATA_MANAGER_A;
        fVar16 = (fVar16 - param_8) * fVar18;
        if (0.0 <= fVar16) {
          if (1.0 <= fVar16) {
            fVar16 = 1.0;
          }
        }
        else {
          fVar16 = 0.0;
        }
        fStack_13c = 0.0;
        fVar16 = 1.0 - fVar16;
        fStack_158 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1948);
        fStack_154 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x194c);
        fStack_150 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1950);
        fVar20 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
        fStack_14c = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1954) * fVar20;
        fStack_128 = (float)func_0x000180121e20(&fStack_158);
        fStack_158 = *(float *)(lVar12 + 0x1958);
        fStack_154 = *(float *)(lVar12 + 0x195c);
        fStack_150 = *(float *)(lVar12 + 0x1960);
        fStack_14c = *(float *)(lVar12 + 0x1964) * fVar20;
        fVar22 = (float)func_0x000180121e20(&fStack_158);
        fVar20 = fStack_128;
        iVar9 = iStack_140;
        if (0 < (int)uVar13) {
          fStack_148 = fStack_148 - fStack_144;
          uStackX_18 = CONCAT44(uStackX_18._4_4_,(float)uStackX_18 - fVar19);
          do {
            uVar24 = (int32_t)((uint64_t)dVar23 >> 0x20);
            fVar17 = (float)(param_5 + -1) * fVar21;
            fVar21 = fVar21 + 1.0 / (float)(int)uVar13;
            iVar10 = (int)(fVar17 + 0.5);
            fVar17 = (float)func_0x00018011a9b0(uStackX_20,
                                                (int64_t)(iVar10 + param_6 + 1) % (int64_t)param_5
                                                & 0xffffffff);
            fVar17 = (fVar17 - param_8) * fVar18;
            if (0.0 <= fVar17) {
              if (1.0 <= fVar17) {
                fVar17 = 1.0;
              }
            }
            else {
              fVar17 = 0.0;
            }
            fStack_124 = fStack_148 * fVar16;
            dVar23 = (double)CONCAT44(uVar24,0x3f800000);
            fVar16 = 1.0 - fVar17;
            fStack_124 = fStack_124 + fStack_144;
            fVar17 = fVar20;
            if (iVar9 == iVar10) {
              fVar17 = fVar22;
            }
            fStack_128 = (float)uStackX_18 * fStack_13c + fVar19;
            fStack_154 = fStack_148 * fVar16 + fStack_144;
            fStack_158 = (float)uStackX_18 * fVar21 + fVar19;
            FUN_180293d20(*(uint64_t *)(lStack_118 + 0x2e8),&fStack_128,&fStack_158,fVar17,dVar23)
            ;
            uVar14 = uVar14 - 1;
            lVar12 = SYSTEM_DATA_MANAGER_A;
            lVar15 = lStack_130;
            fStack_13c = fVar21;
          } while (uVar14 != 0);
        }
        fVar21 = fStack_138;
        fVar18 = (float)auStack_f8._0_4_;
      }
      if (param_7 != (char *)0x0) {
        lStack_130 = 0x3f000000;
        uStackX_18 = CONCAT44(fVar21 + *(float *)(lVar15 + 0x1660),fVar18);
        pcVar8 = param_7;
        if (param_7 != (char *)0xffffffffffffffff) {
          while (*pcVar8 != '\0') {
            if (((*pcVar8 == '#') && (pcVar8[1] == '#')) ||
               (pcVar8 = pcVar8 + 1, pcVar8 == (char *)0xffffffffffffffff)) break;
          }
        }
        if (((int)pcVar8 != (int)param_7) &&
           (FUN_1801224c0(*(uint64_t *)(*(int64_t *)(lVar12 + 0x1af8) + 0x2e8),&uStackX_18,
                          &fStack_108,param_7,pcVar8,0,&lStack_130,0),
           *(char *)(lVar12 + 0x2e38) != '\0')) {
          FUN_18013c800(&uStackX_18,param_7,pcVar8);
        }
      }
      if (0.0 < fStack_134) {
        FUN_180122320(CONCAT44(fStack_144,fStack_108 + *(float *)(lVar15 + 0x1674)),param_2,0,1);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18011a0fe(uint64_t param_1,char *param_2,uint64_t param_3,int64_t param_4)
void FUN_18011a0fe(uint64_t param_1,char *param_2,uint64_t param_3,int64_t param_4)

{
  int iVar1;
  float *pfVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  bool bVar6;
  char cVar7;
  int32_t uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  uint64_t unaff_RBX;
  uint64_t uVar12;
  char *pcVar13;
  int64_t unaff_RBP;
  int iVar14;
  int64_t lVar15;
  uint uVar16;
  int64_t unaff_RDI;
  uint64_t uVar17;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  int64_t unaff_R15;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int32_t unaff_XMM6_Da;
  float fVar23;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar24;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM13_Da;
  float fVar25;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  float fVar26;
  uint64_t unaff_XMM14_Qa;
  uint64_t unaff_XMM14_Qb;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Db;
  int32_t unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  uint64_t in_stack_00000020;
  int32_t uVar28;
  double dVar27;
  float in_stack_00000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  float fStack0000000000000054;
  int iStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  int64_t in_stack_00000068;
  float in_stack_00000070;
  float fStack0000000000000074;
  uint64_t in_stack_00000078;
  int32_t in_stack_000000e0;
  int32_t in_stack_000000e8;
  int32_t in_stack_00000110;
  int32_t in_stack_00000118;
  
  *(uint64_t *)(in_R11 + -0x28) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R13;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0xa8) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0xa4) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0xa0) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x9c) = unaff_XMM11_Dd;
  *(int32_t *)(in_R11 + -200) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0xc4) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0xc0) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0xbc) = unaff_XMM13_Dd;
  *(uint64_t *)(in_R11 + -0xd8) = unaff_XMM14_Qa;
  *(uint64_t *)(in_R11 + -0xd0) = unaff_XMM14_Qb;
  *(int32_t *)(in_R11 + -0xe8) = unaff_XMM15_Da;
  *(int32_t *)(in_R11 + -0xe4) = unaff_XMM15_Db;
  *(int32_t *)(in_R11 + -0xe0) = unaff_XMM15_Dc;
  *(int32_t *)(in_R11 + -0xdc) = unaff_XMM15_Dd;
  pcVar9 = param_2;
  if (param_2 != (char *)0xffffffffffffffff) {
    while (*pcVar9 != '\0') {
      if (((*pcVar9 == '#') && (pcVar9[1] == '#')) ||
         (pcVar9 = pcVar9 + 1, pcVar9 == (char *)0xffffffffffffffff)) break;
    }
  }
  pfVar2 = *(float **)(unaff_RDI + 0x19f0);
  iVar10 = 0;
  fVar21 = *(float *)(unaff_RDI + 0x19f8);
  if (param_2 == pcVar9) {
    fVar19 = 0.0;
  }
  else {
    in_stack_00000020 = CONCAT44((int)((uint64_t)in_stack_00000020 >> 0x20),0xbf800000);
    FUN_180297340(pfVar2,unaff_RBP + 0xb0,fVar21,0x7f7fffff,in_stack_00000020);
    fVar19 = *(float *)(unaff_RBP + 0xb0);
    if (0.0 < fVar19) {
      fVar19 = fVar19 - fVar21 / *pfVar2;
    }
    fVar21 = *(float *)(unaff_RBP + 0xb4);
    param_4 = *(int64_t *)(unaff_RBP + -0x80);
    fVar19 = (float)(int)(fVar19 + 0.95);
  }
  fVar18 = *(float *)(unaff_RBP + 0xe8);
  fStack0000000000000064 = fVar19;
  if (fVar18 == 0.0) {
    fVar18 = (float)func_0x00018012d6a0();
  }
  fVar20 = *(float *)(unaff_RBP + 0xec);
  if (fVar20 == 0.0) {
    fVar20 = *(float *)(unaff_RDI + 0x1660) + *(float *)(unaff_RDI + 0x1660) + fVar21;
  }
  pfVar2 = (float *)(param_4 + 0x100);
  fVar21 = *pfVar2;
  fVar25 = *(float *)(param_4 + 0x104);
  fVar23 = *pfVar2;
  uVar28 = *(int32_t *)(param_4 + 0x104);
  uVar5 = *(uint64_t *)pfVar2;
  uVar12 = *(uint64_t *)pfVar2;
  in_stack_00000050 = *(float *)(unaff_RDI + 0x1660);
  fVar22 = fVar21 + fVar18;
  fVar20 = fVar25 + fVar20;
  *(int8_t (*) [16])(unaff_RBP + -0x60) = ZEXT416((uint)fVar21);
  fVar26 = *(float *)(unaff_RDI + 0x165c);
  fVar24 = fVar21 + fVar26;
  *(float *)(unaff_RBP + -0x70) = fVar22;
  fVar26 = fVar22 - fVar26;
  fStack0000000000000054 = fVar25 + in_stack_00000050;
  *(float *)(unaff_RBP + -0x6c) = fVar20;
  in_stack_00000050 = fVar20 - in_stack_00000050;
  *(float *)(unaff_RBP + 0xa0) = fVar24;
  *(float *)(unaff_RBP + 0xb0) = fVar26;
  in_stack_00000078 = CONCAT44(in_stack_00000050,fVar26);
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  else {
    fVar19 = fVar19 + *(float *)(unaff_RDI + 0x1674);
  }
  fVar22 = fVar22 + fVar19;
  fStack0000000000000044 = fVar20 - fVar25;
  in_stack_00000040 = fVar22 - fVar21;
  in_stack_00000060 = fVar25;
  in_stack_00000070 = fVar24;
  fStack0000000000000074 = fStack0000000000000054;
  func_0x000180124080(&stack0x00000040,*(int32_t *)(unaff_RDI + 0x1660));
  lVar15 = *(int64_t *)(unaff_RDI + 0x1af8);
  *(uint64_t *)(lVar15 + 0x144) = 0;
  *(float *)(lVar15 + 0x14c) = fVar23;
  *(int32_t *)(lVar15 + 0x150) = uVar28;
  *(float *)(lVar15 + 0x154) = fVar22;
  *(float *)(lVar15 + 0x158) = fVar20;
  lVar3 = *(int64_t *)(unaff_RDI + 0x1af8);
  if ((((*(float *)(lVar3 + 0x22c) <= fVar20 && fVar20 != *(float *)(lVar3 + 0x22c)) &&
       (fVar25 < *(float *)(lVar3 + 0x234))) &&
      ((*(float *)(lVar3 + 0x228) <= fVar22 && fVar22 != *(float *)(lVar3 + 0x228) &&
       (fVar21 < *(float *)(lVar3 + 0x230))))) || (*(char *)(unaff_RDI + 0x2e38) != '\0')) {
    in_stack_00000040 = fVar23;
    fStack0000000000000044 = (float)uVar28;
    in_stack_00000048 = fVar22;
    fStack000000000000004c = fVar20;
    cVar7 = FUN_180128040(&stack0x00000040,&stack0x00000048,1);
    if (cVar7 != '\0') {
      *(uint *)(lVar15 + 0x148) = *(uint *)(lVar15 + 0x148) | 1;
    }
    if (((*(int *)(unaff_RDI + 0x1b18) == 0) || (*(char *)(unaff_RDI + 0x1b1c) != '\0')) &&
       (((lVar15 = *(int64_t *)(unaff_RDI + 0x1af8), *(int64_t *)(unaff_RDI + 0x1b00) == lVar15 &&
         ((((*(int *)(unaff_RDI + 0x1b2c) == 0 || (*(char *)(unaff_RDI + 0x1b3d) != '\0')) &&
           (cVar7 = FUN_180128040(&stack0x00000070,&stack0x00000078), cVar7 != '\0')) &&
          ((*(char *)(unaff_RDI + 0x1d07) == '\0' &&
           (cVar7 = func_0x000180124000(lVar15,0), cVar7 != '\0')))))) &&
        ((*(byte *)(lVar15 + 0x1a8) & 4) == 0)))) {
      *(int32_t *)(unaff_RDI + 0x1b18) = 0;
      bVar6 = true;
      *(int8_t *)(unaff_RDI + 0x1b1c) = 0;
    }
    else {
      bVar6 = false;
    }
    uVar28 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
    fVar19 = *(float *)(unaff_RBP + 0xd8);
    iVar1 = *(int *)(unaff_RBP + 0xc0);
    fVar20 = *(float *)(unaff_RBP + 0xe0);
    if ((fVar19 == 3.4028235e+38) || (fVar20 == 3.4028235e+38)) {
      fVar23 = -3.4028235e+38;
      fVar24 = 3.4028235e+38;
      if (0 < iVar1) {
        uVar4 = *(uint64_t *)(unaff_RBP + 0xb8);
        do {
          fVar22 = (float)func_0x00018011a9b0(uVar4,iVar10);
          uVar28 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
          if (fVar22 <= fVar24) {
            fVar24 = fVar22;
          }
          if (fVar23 < fVar22) {
            fVar23 = fVar22;
          }
          iVar10 = iVar10 + 1;
          unaff_RDI = SYSTEM_DATA_MANAGER_A;
          unaff_R15 = in_stack_00000068;
        } while (iVar10 < iVar1);
      }
      if (fVar19 == 3.4028235e+38) {
        fVar19 = fVar24;
      }
      fVar24 = *(float *)(unaff_RBP + 0xa0);
      if (fVar20 == 3.4028235e+38) {
        fVar20 = fVar23;
      }
    }
    in_stack_00000040 = *(float *)(unaff_RDI + 0x1738);
    fStack0000000000000044 = *(float *)(unaff_RDI + 0x173c);
    in_stack_00000048 = *(float *)(unaff_RDI + 0x1740);
    fStack000000000000004c = *(float *)(unaff_RDI + 0x1744) * *(float *)(unaff_RDI + 0x1628);
    uVar8 = func_0x000180121e20(&stack0x00000040);
    dVar27 = (double)CONCAT44(uVar28,*(int32_t *)(unaff_R15 + 0x1664));
    *(uint64_t *)(unaff_RBP + -0x78) = uVar5;
    FUN_180122960(uVar12,*(uint64_t *)(unaff_RBP + -0x70),uVar8,1,dVar27);
    lVar15 = SYSTEM_DATA_MANAGER_A;
    if (0 < iVar1) {
      iVar10 = *(int *)(unaff_RBP + 200);
      iStack0000000000000058 = -1;
      iVar14 = iVar1;
      if ((int)fVar18 < iVar1) {
        iVar14 = (int)fVar18;
      }
      uVar16 = iVar14 - 1;
      uVar17 = (uint64_t)uVar16;
      if (bVar6) {
        fVar21 = (*(float *)(unaff_R15 + 0x118) - fVar24) / (fVar26 - fVar24);
        if (0.0 <= fVar21) {
          if (0.9999 <= fVar21) {
            fVar21 = 0.9999;
          }
        }
        else {
          fVar21 = 0.0;
        }
        iVar14 = (int)((float)(iVar1 + -1) * fVar21);
        iStack0000000000000058 = iVar14;
        fVar21 = (float)func_0x00018011a9b0(*(uint64_t *)(unaff_RBP + 0xb8),
                                            (int64_t)(iVar14 + iVar10) % (int64_t)iVar1 &
                                            0xffffffff);
        uVar12 = *(uint64_t *)(unaff_RBP + 0xb8);
        fVar18 = (float)func_0x00018011a9b0(uVar12,(int64_t)(iVar14 + iVar10 + 1) % (int64_t)iVar1
                                                   & 0xffffffff);
        dVar27 = (double)fVar18;
        FUN_18012ea30(&rendering_buffer_2256_ptr,iVar14,(double)fVar21,iVar14 + 1,dVar27);
      }
      else {
        uVar12 = *(uint64_t *)(unaff_RBP + 0xb8);
      }
      if (fVar19 == fVar20) {
        fVar21 = 0.0;
      }
      else {
        fVar21 = 1.0 / (fVar20 - fVar19);
      }
      fVar20 = 0.0;
      fVar18 = (float)func_0x00018011a9b0(uVar12,(int64_t)iVar10 % (int64_t)iVar1 & 0xffffffff);
      lVar15 = SYSTEM_DATA_MANAGER_A;
      fVar18 = (fVar18 - fVar19) * fVar21;
      if (0.0 <= fVar18) {
        if (1.0 <= fVar18) {
          fVar18 = 1.0;
        }
      }
      else {
        fVar18 = 0.0;
      }
      fStack000000000000005c = 0.0;
      fVar18 = 1.0 - fVar18;
      in_stack_00000040 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1948);
      fStack0000000000000044 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x194c);
      in_stack_00000048 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1950);
      fVar25 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
      fStack000000000000004c = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1954) * fVar25;
      in_stack_00000070 = (float)func_0x000180121e20(&stack0x00000040);
      in_stack_00000040 = *(float *)(lVar15 + 0x1958);
      fStack0000000000000044 = *(float *)(lVar15 + 0x195c);
      in_stack_00000048 = *(float *)(lVar15 + 0x1960);
      fStack000000000000004c = *(float *)(lVar15 + 0x1964) * fVar25;
      fVar26 = (float)func_0x000180121e20(&stack0x00000040);
      fVar25 = in_stack_00000070;
      iVar14 = iStack0000000000000058;
      if (0 < (int)uVar16) {
        in_stack_00000050 = in_stack_00000050 - fStack0000000000000054;
        *(float *)(unaff_RBP + 0xb0) = *(float *)(unaff_RBP + 0xb0) - *(float *)(unaff_RBP + 0xa0);
        do {
          uVar28 = (int32_t)((uint64_t)dVar27 >> 0x20);
          fVar24 = (float)(iVar1 + -1) * fVar20;
          fVar20 = fVar20 + 1.0 / (float)(int)uVar16;
          iVar11 = (int)(fVar24 + 0.5);
          fVar24 = (float)func_0x00018011a9b0(*(uint64_t *)(unaff_RBP + 0xb8),
                                              (int64_t)(iVar11 + iVar10 + 1) % (int64_t)iVar1 &
                                              0xffffffff);
          fVar24 = (fVar24 - fVar19) * fVar21;
          if (0.0 <= fVar24) {
            if (1.0 <= fVar24) {
              fVar24 = 1.0;
            }
          }
          else {
            fVar24 = 0.0;
          }
          fStack0000000000000074 = in_stack_00000050 * fVar18;
          dVar27 = (double)CONCAT44(uVar28,0x3f800000);
          fVar18 = 1.0 - fVar24;
          fStack0000000000000074 = fStack0000000000000074 + fStack0000000000000054;
          fVar24 = fVar25;
          if (iVar14 == iVar11) {
            fVar24 = fVar26;
          }
          in_stack_00000070 =
               *(float *)(unaff_RBP + 0xb0) * fStack000000000000005c + *(float *)(unaff_RBP + 0xa0);
          fStack0000000000000044 = in_stack_00000050 * fVar18 + fStack0000000000000054;
          in_stack_00000040 = *(float *)(unaff_RBP + 0xb0) * fVar20 + *(float *)(unaff_RBP + 0xa0);
          FUN_180293d20(*(uint64_t *)(*(int64_t *)(unaff_RBP + -0x80) + 0x2e8),&stack0x00000070,
                        &stack0x00000040,fVar24,dVar27);
          uVar17 = uVar17 - 1;
          lVar15 = SYSTEM_DATA_MANAGER_A;
          unaff_R15 = in_stack_00000068;
          fStack000000000000005c = fVar20;
        } while (uVar17 != 0);
      }
      unaff_R12 = *(uint64_t *)(unaff_RBP + 0xa8);
      fVar21 = *(float *)(unaff_RBP + -0x60);
      fVar25 = in_stack_00000060;
    }
    pcVar9 = *(char **)(unaff_RBP + 0xd0);
    if (pcVar9 != (char *)0x0) {
      *(float *)(unaff_RBP + 0xb0) = fVar21;
      in_stack_00000068 = 0x3f000000;
      *(float *)(unaff_RBP + 0xb4) = fVar25 + *(float *)(unaff_R15 + 0x1660);
      pcVar13 = pcVar9;
      if (pcVar9 != (char *)0xffffffffffffffff) {
        while (*pcVar13 != '\0') {
          if (((*pcVar13 == '#') && (pcVar13[1] == '#')) ||
             (pcVar13 = pcVar13 + 1, pcVar13 == (char *)0xffffffffffffffff)) break;
        }
      }
      if (((int)pcVar13 != (int)pcVar9) &&
         (FUN_1801224c0(*(uint64_t *)(*(int64_t *)(lVar15 + 0x1af8) + 0x2e8),unaff_RBP + 0xb0,
                        unaff_RBP + -0x70,pcVar9,pcVar13), *(char *)(lVar15 + 0x2e38) != '\0')) {
        FUN_18013c800(unaff_RBP + 0xb0,pcVar9,pcVar13);
      }
    }
    if (0.0 < fStack0000000000000064) {
      FUN_180122320(CONCAT44(fStack0000000000000054,
                             *(float *)(unaff_RBP + -0x70) + *(float *)(unaff_R15 + 0x1674)),
                    unaff_R12,0,1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



