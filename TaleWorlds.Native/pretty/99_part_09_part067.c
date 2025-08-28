/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part067.c - 12 个函数

// 函数: void FUN_1805e6940(int64_t param_1,uint64_t *param_2,float *param_3)
void FUN_1805e6940(int64_t param_1,uint64_t *param_2,float *param_3)

{
  uint *puVar1;
  int iVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  float *pfVar6;
  float *pfVar7;
  int64_t lVar8;
  int64_t lVar9;
  float fVar10;
  int8_t auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int8_t auStack_1a8 [40];
  uint64_t uStack_180;
  int32_t uStack_178;
  int32_t uStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  int32_t uStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_150;
  void *puStack_148;
  int32_t uStack_140;
  int32_t uStack_13c;
  int8_t uStack_138;
  uint64_t uStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int32_t uStack_11c;
  float fStack_118;
  float fStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  float fStack_108;
  float fStack_104;
  void **ppuStack_100;
  int64_t *aplStack_f8 [8];
  int iStack_b8;
  uint64_t uStack_a8;
  
  uStack_130 = 0xfffffffffffffffe;
  uStack_a8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1a8;
  *param_2 = 0xffffffffffffffff;
  lVar5 = **(int64_t **)(param_1 + 0x20);
  if (((*(uint *)(lVar5 + 0x56c) & 0x2000) != 0) && (-1 < *(int *)(lVar5 + 0x564))) {
    lVar9 = *(int64_t *)(lVar5 + 0x8d8);
    lVar8 = lVar9 + 0x30a0 + (int64_t)*(int *)(lVar5 + 0x564) * 0xa60;
    if (*(int *)(lVar8 + 0x568) == 1) goto LAB_1805e69f8;
  }
  lVar9 = *(int64_t *)(lVar5 + 0x8d8);
  lVar8 = lVar5;
LAB_1805e69f8:
  fVar14 = *(float *)(*(int64_t *)(lVar8 + 0x20) + 0x1d0) * 1.05;
  fVar15 = fVar14 + 0.05;
  fVar13 = *(float *)(*(int64_t *)(lVar8 + 0x20) + 0x84) * 0.6;
  if ((*param_3 == 0.0) && (param_3[1] == 0.0)) {
    puVar4 = (uint64_t *)FUN_180507e30(param_1,&uStack_180);
    uStack_180 = *puVar4;
    fStack_150 = (float)FUN_1805d8ed0(param_1);
    fStack_114 = uStack_180._4_4_;
    fStack_118 = (float)uStack_180;
  }
  else {
    fStack_114 = param_3[1] - *(float *)(param_1 + 0x30);
    fStack_118 = *param_3 - *(float *)(param_1 + 0x2c);
    uStack_180 = CONCAT44(fStack_114,fStack_118);
    fVar12 = fStack_114 * fStack_114 + fStack_118 * fStack_118;
    auVar11 = rsqrtss(ZEXT416((uint)(fStack_118 * fStack_118)),ZEXT416((uint)fVar12));
    fVar10 = auVar11._0_4_;
    fStack_150 = fVar10 * 0.5 * (3.0 - fVar12 * fVar10 * fVar10);
    fStack_118 = fStack_118 * fStack_150;
    fStack_114 = fStack_114 * fStack_150;
    fStack_150 = fStack_150 * fVar12;
  }
  if ((fVar13 <= 0.5) || (fStack_150 < 0.5)) {
    fStack_150 = 0.5;
  }
  else if (fVar13 <= fStack_150) {
    fStack_150 = fVar13;
  }
  fStack_168 = *(float *)(*(int64_t *)(lVar8 + 0x6d8) + 0x904) * 0.75 + *(float *)(param_1 + 0x34);
  fStack_16c = fStack_114 * fVar15 + *(float *)(param_1 + 0x30);
  fStack_170 = fStack_118 * fVar15 + *(float *)(param_1 + 0x2c);
  fStack_150 = fStack_150 - fVar15;
  uStack_178 = 0;
  uStack_174 = 0x7f7fffff;
  uStack_13c = 0xb081;
  uStack_140 = 2;
  uStack_138 = 0;
  puStack_148 = &memory_allocator_3488_ptr;
  uStack_164 = 0x7f7fffff;
  uStack_11c = 0x7f7fffff;
  uStack_110 = 0;
  uStack_10c = 0x7f7fffff;
  ppuStack_100 = &puStack_148;
  iStack_b8 = 0;
  plVar3 = *(int64_t **)(*(int64_t *)(*(int64_t *)(lVar9 + 0x18) + 0x28f8) + 0x318);
  fStack_128 = fStack_170;
  fStack_124 = fStack_16c;
  fStack_120 = fStack_168;
  fStack_108 = fStack_150;
  fStack_104 = fVar14;
  (**(code **)(*plVar3 + 0x148))(plVar3,&fStack_128,aplStack_f8,fStack_16c);
  if (0 < iStack_b8) {
    iVar2 = *(int *)(lVar5 + 0x564);
    (**(code **)(*aplStack_f8[0] + 0x180))(aplStack_f8[0],&fStack_170);
    pfVar7 = &fStack_160;
    if (fStack_158 <= fStack_168) {
      pfVar7 = &fStack_170;
    }
    pfVar6 = &fStack_170;
    if (fStack_158 <= fStack_168) {
      pfVar6 = &fStack_160;
    }
    fVar15 = pfVar7[2] - pfVar6[2];
    fVar14 = (pfVar7[1] - pfVar6[1]) * (pfVar7[1] - pfVar6[1]) +
             (*pfVar7 - *pfVar6) * (*pfVar7 - *pfVar6) + fVar15 * fVar15;
    auVar11 = rsqrtss(ZEXT416((uint)(fVar15 * fVar15)),ZEXT416((uint)fVar14));
    fVar13 = auVar11._0_4_;
    fVar15 = fVar13 * 0.5 * (3.0 - fVar14 * fVar13 * fVar13) * fVar15;
    if ((((0.2 <= fVar15) || (iVar2 < 0)) || ((*(byte *)(lVar8 + 0x56c) & 2) == 0)) ||
       ((*(float *)(*(int64_t *)(lVar8 + 0x20) + 0x20) <= *(float *)(lVar8 + 0x6b4) ||
        (lVar5 = (int64_t)*(int *)(lVar5 + 0x564) * 0x200,
        fVar13 = SQRT((float)*(int *)(lVar5 + 0x52eef4 + lVar9) /
                      *(float *)(lVar5 + 0x52eef8 + lVar9)) *
                 *(float *)(lVar5 + 0x52eefc + lVar9) * *(float *)(lVar5 + 0x52eef0 + lVar9),
        fVar13 * 0.050989192 * fVar13 <= pfVar7[2] - *(float *)(param_1 + 0x34))))) {
      if (0.8 < fVar15) {
        fVar13 = (fStack_15c + fStack_16c) * 0.5 - *(float *)(param_1 + 0x30);
        fVar14 = (fStack_170 + fStack_160) * 0.5 - *(float *)(param_1 + 0x2c);
        fVar14 = fVar14 * fVar14 + fVar13 * fVar13;
        fVar13 = (float)(fVar14 <= 1.1754944e-38) * 1.1754944e-38;
        fVar14 = fVar14 + fVar13;
        auVar11 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar14));
                    // WARNING: Subroutine does not return
        AdvancedSystemController(pfVar6,3.0 - fVar14 * auVar11._0_4_ * auVar11._0_4_);
      }
    }
    else {
      puVar1 = (uint *)(*(int64_t *)(param_1 + 0x20) + 0x13d0);
      *puVar1 = *puVar1 | 8;
    }
  }
  iStack_b8 = 0;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_a8 ^ (uint64_t)auStack_1a8);
}



uint64_t FUN_1805e6fe0(uint64_t param_1,uint64_t param_2)

{
  if ((param_2 & 1) != 0) {
    free(param_1,0x18);
  }
  return param_1;
}



uint64_t * FUN_1805e7010(int64_t param_1,uint64_t *param_2,uint64_t *param_3)

{
  int64_t *plVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  *param_2 = 0xffffffffffffffff;
  plVar1 = *(int64_t **)(param_1 + 0x20);
  *param_3 = 0;
  lVar4 = *plVar1;
  if ((((*(int *)(lVar4 + 0x5f8) == 0) && (*(int64_t *)(lVar4 + 0x9d8) != 0)) &&
      ((*(byte *)(*(int64_t *)(lVar4 + 0x9d8) + 0x139) & 4) == 0)) &&
     (cVar2 = func_0x000180522f60(lVar4), cVar2 == '\0')) {
    if (((*(uint *)(lVar4 + 0x56c) & 0x2000) != 0) && (-1 < *(int *)(lVar4 + 0x564))) {
      lVar3 = (int64_t)*(int *)(lVar4 + 0x564) * 0xa60;
      if (*(int *)(lVar3 + 0x3608 + *(int64_t *)(lVar4 + 0x8d8)) == 1) {
        lVar4 = *(int64_t *)(lVar4 + 0x8d8) + 0x30a0 + lVar3;
      }
    }
                    // WARNING: Subroutine does not return
    AdvancedSystemController(*(int32_t *)(*(int64_t *)(lVar4 + 0x20) + 0x34));
  }
  return param_2;
}






// 函数: void FUN_1805e7084(void)
void FUN_1805e7084(void)

{
  int64_t lVar1;
  int64_t in_R9;
  bool in_ZF;
  
  if ((!in_ZF) && (-1 < *(int *)(in_R9 + 0x564))) {
    lVar1 = (int64_t)*(int *)(in_R9 + 0x564) * 0xa60;
    if (*(int *)(lVar1 + 0x3608 + *(int64_t *)(in_R9 + 0x8d8)) == 1) {
      in_R9 = *(int64_t *)(in_R9 + 0x8d8) + 0x30a0 + lVar1;
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemController(*(int32_t *)(*(int64_t *)(in_R9 + 0x20) + 0x34));
}






// 函数: void FUN_1805e712e(void)
void FUN_1805e712e(void)

{
  int64_t lVar1;
  uint64_t *puVar2;
  char cVar3;
  float *pfVar4;
  int64_t unaff_RBX;
  int iVar5;
  int64_t *unaff_RSI;
  uint64_t *puVar6;
  int64_t *in_R10;
  float *pfVar7;
  float *pfVar8;
  int64_t *unaff_R13;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int8_t auVar13 [16];
  float in_XMM3_Da;
  float fVar14;
  float unaff_XMM9_Da;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  int64_t *in_stack_00000060;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float fStack0000000000000168;
  float fStack000000000000016c;
  int64_t *in_stack_00000170;
  float fStack0000000000000178;
  float fStack000000000000017c;
  
  do {
    lVar1 = *unaff_R13;
    if ((((*(byte *)(lVar1 + 0x139) & 1) != 0) &&
        (ABS(*(float *)(lVar1 + 0xf0) - *(float *)(unaff_RBX + 0x34)) < in_XMM3_Da)) &&
       (fVar12 = *(float *)(unaff_RBX + 0x2c) - *(float *)(lVar1 + 0xe8),
       fVar10 = *(float *)(unaff_RBX + 0x30) - *(float *)(lVar1 + 0xec),
       fVar9 = unaff_XMM9_Da * in_XMM3_Da + 1.0 + *(float *)(unaff_R13 + 1),
       fVar12 * fVar12 + fVar10 * fVar10 < fVar9 * fVar9)) {
      cVar3 = SystemCore_PerformanceMonitor(lVar1,unaff_RBX + 0x2c);
      if (cVar3 == '\0') {
        iVar5 = 0;
        if (*(char *)(lVar1 + 0xa8) != '\0') {
          puVar6 = (uint64_t *)(lVar1 + 0x60);
          do {
            puVar2 = (uint64_t *)*puVar6;
            pfVar7 = (float *)*puVar2;
            pfVar8 = (float *)puVar2[1];
            if (*(char *)(puVar2 + 4) == '\x01') {
              fVar9 = *(float *)(unaff_RBX + 0x30);
              fVar10 = *(float *)(unaff_RBX + 0x2c);
              if ((fVar9 - pfVar7[1]) * (*pfVar8 - *pfVar7) -
                  (pfVar8[1] - pfVar7[1]) * (fVar10 - *pfVar7) < 0.0) {
                fVar12 = (float)FUN_18038a130(pfVar7,pfVar8,unaff_RBX + 0x2c);
                fVar11 = unaff_XMM9_Da * unaff_XMM9_Da * 4.0;
                if (fVar12 < fVar11) {
                  cVar3 = *(char *)(unaff_RBX + 0x1144);
                  if ((cVar3 != '\0') ||
                     ((*(uint *)(*(int64_t *)(unaff_RBX + 0x20) + 0x1484) >> 3 & 1) != 0)) {
                    fVar12 = (float)FUN_18038a130(pfVar7,fVar11,unaff_RBX + 0x60);
                    if (cVar3 == '\0') {
                      if ((*(uint *)(unaff_RBX + 0x28) & 2) == 0) {
                        fStack0000000000000178 =
                             *(float *)(unaff_RBX + 0x60) - *(float *)(unaff_RBX + 0x2c);
                        fStack000000000000017c =
                             *(float *)(unaff_RBX + 100) - *(float *)(unaff_RBX + 0x30);
                        *(uint *)(unaff_RBX + 0x28) = *(uint *)(unaff_RBX + 0x28) | 2;
                        *(uint64_t *)(unaff_RBX + 0xa8) =
                             CONCAT44(fStack000000000000017c,fStack0000000000000178);
                      }
                      _fStack0000000000000160 = *(uint64_t *)(unaff_RBX + 0xa8);
                    }
                    else {
                      pfVar4 = (float *)func_0x000180507bb0();
                      fStack0000000000000168 = *pfVar4 - fVar10;
                      fStack000000000000016c = pfVar4[1] - fVar9;
                      _fStack0000000000000160 =
                           CONCAT44(fStack000000000000016c,fStack0000000000000168);
                    }
                    fVar9 = (float)func_0x0001805b7780(*(uint64_t *)(unaff_RBX + 0x20));
                    fVar10 = (float)func_0x0001805b7780(*(uint64_t *)(unaff_RBX + 0x20));
                    if (fVar12 < fVar9 * fVar10 * 9.0) {
                      pfVar4 = (float *)FUN_18038a230(&stack0x00000068,pfVar7,pfVar8,
                                                      unaff_RBX + 0x60);
                      fVar14 = pfVar8[1] - pfVar7[1];
                      fVar11 = -(*pfVar8 - *pfVar7);
                      fVar9 = fVar11 * fVar11 + fVar14 * fVar14;
                      auVar13 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
                      fVar10 = auVar13._0_4_;
                      fVar9 = fVar10 * 0.5 * (3.0 - fVar9 * fVar10 * fVar10);
                      if ((0.0 < (*(float *)(unaff_RBX + 100) - pfVar4[1]) * fVar11 * fVar9 +
                                 (*(float *)(unaff_RBX + 0x60) - *pfVar4) * fVar14 * fVar9) &&
                         (fStack0000000000000040 = *pfVar8 - *pfVar7,
                         fStack0000000000000044 = fVar14,
                         cVar3 = FUN_180397470(pfVar7,&stack0x00000040,unaff_RBX + 0x2c,
                                               &stack0x00000160,0), cVar3 == '\0')) {
                        fStack0000000000000048 = fStack0000000000000160 * 10.0;
                        fStack000000000000004c = fStack0000000000000164 * 10.0;
                        fStack0000000000000050 = *pfVar8 - *pfVar7;
                        fStack0000000000000054 = pfVar8[1] - pfVar7[1];
                        cVar3 = FUN_180397470(pfVar7,&stack0x00000050,unaff_RBX + 0x2c,
                                              &stack0x00000048,0);
                        if (cVar3 == '\0') {
                          fVar9 = (float)func_0x0001805b7780(*(uint64_t *)(unaff_RBX + 0x20));
                          fVar10 = (float)func_0x0001805b7780(*(uint64_t *)(unaff_RBX + 0x20));
                          if (fVar9 * fVar10 * 2.25 <= fVar12) goto LAB_1805e754f;
                        }
                        goto LAB_1805e7580;
                      }
                    }
                  }
LAB_1805e754f:
                  FUN_1805e7760();
                }
              }
            }
LAB_1805e7580:
            iVar5 = iVar5 + 1;
            puVar6 = puVar6 + 1;
            unaff_RSI = in_stack_00000170;
            in_R10 = in_stack_00000060;
          } while (iVar5 < (int)(uint)*(byte *)(lVar1 + 0xa8));
        }
      }
      else {
        *unaff_RSI = lVar1;
      }
      in_XMM3_Da = 1.5;
    }
    unaff_R13 = unaff_R13 + 2;
    if (unaff_R13 == in_R10) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1805e761f(void)
void FUN_1805e761f(void)

{
  return;
}






// 函数: void FUN_1805e7644(void)
void FUN_1805e7644(void)

{
  return;
}






// 函数: void FUN_1805e7649(void)
void FUN_1805e7649(void)

{
  return;
}






// 函数: void FUN_1805e7660(uint64_t param_1,uint64_t *param_2,float *param_3,float *param_4,float param_5
void FUN_1805e7660(uint64_t param_1,uint64_t *param_2,float *param_3,float *param_4,float param_5
                  ,float param_6,char param_7)

{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  param_5 = param_5 / param_6;
  if (0.0 <= param_5) {
    if (1.0 <= param_5) {
      param_5 = 1.0;
    }
  }
  else {
    param_5 = 0.0;
  }
  fVar10 = (float)asinf(param_5);
  fVar10 = fVar10 * 10.185916;
  if (fVar10 <= 0.0) {
    fVar10 = fVar10 - 0.9999999;
  }
  fVar11 = (float)atan2f(*param_3 * param_4[1] - *param_4 * param_3[1],
                         *param_3 * *param_4 + param_4[1] * param_3[1]);
  uVar4 = 0x40U - (int)(fVar11 * 10.185916) & 0x8000003f;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
  }
  uVar5 = uVar4 + ((int)fVar10 >> 1);
  uVar4 = uVar4 - ((int)fVar10 >> 1);
  uVar6 = uVar5 - 0x40;
  if ((int)uVar5 < 0x40) {
    uVar6 = uVar5;
  }
  uVar5 = uVar4 + 0x40;
  if (-1 < (int)uVar4) {
    uVar5 = uVar4;
  }
  uVar8 = 0;
  if ((int)uVar6 < (int)uVar5) {
    iVar9 = (uVar6 - uVar5) + 0x40;
    if (param_7 != '\0') {
      uVar7 = *param_2;
      for (; ((uVar7 | 1L << ((int64_t)(int)(uVar5 + 0x3f & 0x8000003f) & 0x3fU)) != uVar7 &&
             (0 < iVar9)); iVar9 = iVar9 + -1) {
        uVar5 = uVar5 + 1 & 0x8000003f;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xffffffc0) + 1;
        }
      }
      for (; ((uVar7 | 1L << ((int64_t)(int)(uVar6 + 1 & 0x8000003f) & 0x3fU)) != uVar7 &&
             (0 < iVar9)); iVar9 = iVar9 + -1) {
        uVar6 = uVar6 - 1 & 0x8000003f;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xffffffc0) + 1;
        }
      }
    }
    uVar7 = uVar8;
    if (0 < iVar9) {
      do {
        iVar1 = (int)uVar8;
        uVar4 = iVar1 + 1;
        uVar8 = (uint64_t)uVar4;
        uVar7 = uVar7 | 1L << ((int64_t)(int)(iVar1 + uVar5 & 0x8000003f) & 0x3fU);
      } while ((int)uVar4 < iVar9);
      *param_2 = *param_2 & ~uVar7;
      return;
    }
  }
  else {
    if (param_7 != '\0') {
      uVar7 = *param_2;
      uVar4 = uVar5 + 0x3f;
      for (; ((uVar7 | 1L << ((int64_t)(int)(uVar4 & 0x8000003f) & 0x3fU)) != uVar7 &&
             ((int)uVar5 <= (int)uVar6)); uVar5 = uVar5 + 1) {
        uVar4 = uVar5 + 0x40;
      }
      uVar2 = uVar6;
      uVar4 = uVar6 + 1;
      while (uVar6 = uVar2, (uVar7 | 1L << ((int64_t)(int)(uVar4 & 0x8000003f) & 0x3fU)) != uVar7)
      {
        if ((int)uVar6 < (int)uVar5) goto LAB_1805e7d1d;
        uVar2 = uVar6 - 1;
        uVar4 = uVar6;
      }
    }
    if ((int)uVar5 <= (int)uVar6) {
      uVar7 = (uint64_t)(int)uVar5;
      uVar3 = (uint64_t)((uVar6 - uVar5) + 1);
      do {
        uVar8 = uVar8 | 1L << (uVar7 & 0x3f);
        uVar7 = uVar7 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
LAB_1805e7d1d:
  *param_2 = *param_2 & ~uVar8;
  return;
}






// 函数: void FUN_1805e7760(int64_t param_1,uint64_t param_2,float *param_3,float *param_4,float *param_5,
void FUN_1805e7760(int64_t param_1,uint64_t param_2,float *param_3,float *param_4,float *param_5,
                  int8_t param_6,float param_7)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int8_t auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_98;
  float fStack_94;
  uint64_t uStack_90;
  
  fStack_98 = 0.0;
  fStack_94 = 0.0;
  uStack_90._0_4_ = 0.0;
  uStack_90._4_4_ = 0.0;
  if (param_7 < 1e+30) {
    uVar3 = *(uint64_t *)param_4;
    fVar8 = *param_4;
    fVar12 = *param_5 - fVar8;
    fVar9 = param_4[1];
    fVar13 = param_5[1] - fVar9;
    fStack_98 = (float)uVar3;
    fStack_94 = (float)((uint64_t)uVar3 >> 0x20);
    uStack_90._4_4_ = (float)((uint64_t)*(uint64_t *)(param_1 + 0x2c) >> 0x20);
    fStack_94 = fStack_94 - uStack_90._4_4_;
    uStack_90._0_4_ = (float)*(uint64_t *)(param_1 + 0x2c);
    fStack_98 = fStack_98 - (float)uStack_90;
    fVar15 = fVar12 * fVar12 + fVar13 * fVar13;
    fVar14 = fStack_98 * fVar12 + fStack_98 * fVar12 + fStack_94 * fVar13 + fStack_94 * fVar13;
    fVar7 = fVar14 * fVar14 -
            ((fStack_94 * fStack_94 + fStack_98 * fStack_98) - param_7 * param_7) * fVar15 * 4.0;
    if (fVar7 < 0.0) {
      return;
    }
    fVar7 = SQRT(fVar7);
    fVar15 = 0.5 / fVar15;
    fVar10 = (-fVar14 - fVar7) * fVar15;
    fVar15 = (fVar7 - fVar14) * fVar15;
    if (fVar15 < 0.0) {
      return;
    }
    if (1.0 < fVar10) {
      return;
    }
    if (0.0 < fVar10) {
      uStack_90 = CONCAT44(fVar13 * fVar10 + fVar9,fVar12 * fVar10 + fVar8);
      uVar3 = uStack_90;
    }
    if (fVar15 < 1.0) {
      uStack_90 = CONCAT44(fVar13 * fVar15 + fVar9,fVar12 * fVar15 + fVar8);
      uVar4 = uStack_90;
    }
    else {
      uVar4 = *(uint64_t *)param_5;
    }
    fStack_94 = (float)((uint64_t)uVar3 >> 0x20);
    fStack_98 = (float)uVar3;
    uStack_90._4_4_ = (float)((uint64_t)uVar4 >> 0x20);
    uStack_90._0_4_ = (float)uVar4;
  }
  fStack_94 = fStack_94 - *(float *)(param_1 + 0x30);
  fStack_98 = fStack_98 - *(float *)(param_1 + 0x2c);
  uStack_90._0_4_ = (float)uStack_90 - *(float *)(param_1 + 0x2c);
  uStack_90._4_4_ = uStack_90._4_4_ - *(float *)(param_1 + 0x30);
  fVar8 = param_3[1];
  fVar9 = fStack_94 * fStack_94 + fStack_98 * fStack_98;
  auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
  fVar7 = auVar11._0_4_;
  fVar12 = fVar7 * 0.5 * (3.0 - fVar9 * fVar7 * fVar7);
  fStack_94 = fVar12 * fStack_94;
  fVar7 = uStack_90._4_4_ * uStack_90._4_4_ + (float)uStack_90 * (float)uStack_90;
  fVar12 = fVar12 * fStack_98;
  fVar9 = *param_3;
  auVar11 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
  fVar15 = auVar11._0_4_;
  fVar15 = fVar15 * 0.5 * (3.0 - fVar7 * fVar15 * fVar15);
  uStack_90._4_4_ = fVar15 * uStack_90._4_4_;
  fVar15 = fVar15 * (float)uStack_90;
  fVar7 = (float)atan2f(fVar9 * fStack_94 - fVar8 * fVar12,fVar8 * fStack_94 + fVar9 * fVar12);
  uVar6 = 0x40U - (int)(fVar7 * 10.185916) & 0x8000003f;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xffffffc0) + 1;
  }
  fVar8 = (float)atan2f(fVar9 * uStack_90._4_4_ - fVar8 * fVar15,
                        fVar8 * uStack_90._4_4_ + fVar9 * fVar15);
  uVar5 = 0x40U - (int)(fVar8 * 10.185916) & 0x8000003f;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffffffc0) + 1;
  }
  uVar2 = (uVar5 - uVar6) + 0x40 & 0x8000003f;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
  }
  uVar1 = uVar6;
  if (0x20 < (int)uVar2) {
    uVar1 = uVar5;
    uVar5 = uVar6;
  }
  FUN_1805e7b40(param_2,uVar1,uVar5,param_6);
  return;
}






// 函数: void FUN_1805e796a(float param_1,uint64_t param_2,float *param_3)
void FUN_1805e796a(float param_1,uint64_t param_2,float *param_3)

{
  int8_t auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  int32_t uVar8;
  int32_t in_XMM1_Dc;
  int32_t in_XMM1_Dd;
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  float unaff_XMM7_Da;
  float fVar12;
  float fVar13;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar14;
  float fVar15;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int8_t in_stack_000000f8;
  
  uVar8 = (int32_t)((uint64_t)param_2 >> 0x20);
  fVar6 = (float)param_2 + param_1 * unaff_XMM8_Da;
  auVar9._4_4_ = uVar8;
  auVar9._0_4_ = fVar6;
  auVar9._8_4_ = in_XMM1_Dc;
  auVar9._12_4_ = in_XMM1_Dd;
  auVar10._4_4_ = uVar8;
  auVar10._0_4_ = fVar6;
  auVar10._8_4_ = in_XMM1_Dc;
  auVar10._12_4_ = in_XMM1_Dd;
  auVar10 = rsqrtss(auVar9,auVar10);
  fVar7 = auVar10._0_4_;
  fVar12 = unaff_XMM7_Da * fVar7 * (3.0 - fVar6 * fVar7 * fVar7);
  fVar13 = fVar12 * unaff_XMM10_Da;
  fVar7 = unaff_XMM12_Da * unaff_XMM12_Da + unaff_XMM11_Da * unaff_XMM11_Da;
  fVar12 = fVar12 * unaff_XMM8_Da;
  fVar6 = *param_3;
  auVar11._4_4_ = unaff_XMM12_Db;
  auVar11._0_4_ = fVar7;
  auVar11._8_4_ = unaff_XMM12_Dc;
  auVar11._12_4_ = unaff_XMM12_Dd;
  auVar1._4_4_ = unaff_XMM12_Db;
  auVar1._0_4_ = fVar7;
  auVar1._8_4_ = unaff_XMM12_Dc;
  auVar1._12_4_ = unaff_XMM12_Dd;
  auVar10 = rsqrtss(auVar11,auVar1);
  fVar14 = auVar10._0_4_;
  fVar14 = fVar14 * 0.5 * (3.0 - fVar7 * fVar14 * fVar14);
  fVar15 = fVar14 * unaff_XMM12_Da;
  fVar14 = fVar14 * unaff_XMM11_Da;
  fVar7 = (float)atan2f(fVar6 * fVar13 - unaff_XMM9_Da * fVar12,
                        unaff_XMM9_Da * fVar13 + fVar6 * fVar12);
  uVar5 = 0x40U - (int)(fVar7 * 10.185916) & 0x8000003f;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffffffc0) + 1;
  }
  fVar6 = (float)atan2f(fVar6 * fVar15 - unaff_XMM9_Da * fVar14,
                        unaff_XMM9_Da * fVar15 + fVar6 * fVar14);
  uVar4 = 0x40U - (int)(fVar6 * 10.185916) & 0x8000003f;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
  }
  uVar3 = (uVar4 - uVar5) + 0x40 & 0x8000003f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffffc0) + 1;
  }
  uVar2 = uVar5;
  if (0x20 < (int)uVar3) {
    uVar2 = uVar4;
    uVar4 = uVar5;
  }
  FUN_1805e7b40(fVar6 * 10.185916,uVar2,uVar4,in_stack_000000f8);
  return;
}






// 函数: void FUN_1805e797f(float param_1,uint64_t param_2,float *param_3)
void FUN_1805e797f(float param_1,uint64_t param_2,float *param_3)

{
  int8_t auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  int32_t uVar8;
  int32_t in_XMM1_Dc;
  int32_t in_XMM1_Dd;
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  float unaff_XMM7_Da;
  float fVar12;
  float fVar13;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar14;
  float fVar15;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int8_t in_stack_000000f8;
  
  uVar8 = (int32_t)((uint64_t)param_2 >> 0x20);
  param_1 = (float)param_2 + param_1;
  auVar9._4_4_ = uVar8;
  auVar9._0_4_ = param_1;
  auVar9._8_4_ = in_XMM1_Dc;
  auVar9._12_4_ = in_XMM1_Dd;
  auVar10._4_4_ = uVar8;
  auVar10._0_4_ = param_1;
  auVar10._8_4_ = in_XMM1_Dc;
  auVar10._12_4_ = in_XMM1_Dd;
  auVar10 = rsqrtss(auVar9,auVar10);
  fVar6 = auVar10._0_4_;
  fVar12 = unaff_XMM7_Da * fVar6 * (3.0 - param_1 * fVar6 * fVar6);
  fVar13 = fVar12 * unaff_XMM10_Da;
  fVar7 = unaff_XMM12_Da * unaff_XMM12_Da + unaff_XMM11_Da * unaff_XMM11_Da;
  fVar12 = fVar12 * unaff_XMM8_Da;
  fVar6 = *param_3;
  auVar11._4_4_ = unaff_XMM12_Db;
  auVar11._0_4_ = fVar7;
  auVar11._8_4_ = unaff_XMM12_Dc;
  auVar11._12_4_ = unaff_XMM12_Dd;
  auVar1._4_4_ = unaff_XMM12_Db;
  auVar1._0_4_ = fVar7;
  auVar1._8_4_ = unaff_XMM12_Dc;
  auVar1._12_4_ = unaff_XMM12_Dd;
  auVar10 = rsqrtss(auVar11,auVar1);
  fVar14 = auVar10._0_4_;
  fVar14 = fVar14 * 0.5 * (3.0 - fVar7 * fVar14 * fVar14);
  fVar15 = fVar14 * unaff_XMM12_Da;
  fVar14 = fVar14 * unaff_XMM11_Da;
  fVar7 = (float)atan2f(fVar6 * fVar13 - unaff_XMM9_Da * fVar12,
                        unaff_XMM9_Da * fVar13 + fVar6 * fVar12);
  uVar5 = 0x40U - (int)(fVar7 * 10.185916) & 0x8000003f;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffffffc0) + 1;
  }
  fVar6 = (float)atan2f(fVar6 * fVar15 - unaff_XMM9_Da * fVar14,
                        unaff_XMM9_Da * fVar15 + fVar6 * fVar14);
  uVar4 = 0x40U - (int)(fVar6 * 10.185916) & 0x8000003f;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
  }
  uVar3 = (uVar4 - uVar5) + 0x40 & 0x8000003f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffffc0) + 1;
  }
  uVar2 = uVar5;
  if (0x20 < (int)uVar3) {
    uVar2 = uVar4;
    uVar4 = uVar5;
  }
  FUN_1805e7b40(fVar6 * 10.185916,uVar2,uVar4,in_stack_000000f8);
  return;
}






// 函数: void FUN_1805e7ab4(void)
void FUN_1805e7ab4(void)

{
  FUN_1805e7b40();
  return;
}






// 函数: void FUN_1805e7b02(void)
void FUN_1805e7b02(void)

{
  return;
}






