#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part222.c - 1 个函数

// 函数: void FUN_180392600(void)
void FUN_180392600(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180392a30(int64_t param_1,int64_t param_2,int64_t param_3,float *param_4,float *param_5,
             float param_6,int64_t param_7,int param_8,float param_9,float param_10,
             uint64_t param_11,float param_12)

{
  float *pfVar1;
  int64_t **pplVar2;
  int32_t uVar3;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  int32_t *puVar9;
  int64_t *plVar10;
  int64_t **pplVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  int64_t lVar19;
  int iVar20;
  int64_t *plVar21;
  bool bVar22;
  int32_t uVar23;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  float fVar24;
  float fVar25;
  int8_t auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  uint64_t in_stack_fffffffffffffde0;
  uint64_t uStack_1e8;
  int64_t *plStack_1e0;
  int64_t *plStack_1d8;
  int64_t *plStack_1d0;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  int iStack_1b8;
  uint64_t *puStack_1b0;
  int iStack_1a8;
  uint64_t uStack_1a0;
  int64_t *plStack_198;
  int64_t lStack_190;
  int64_t lStack_188;
  uint64_t uStack_180;
  float fStack_178;
  float fStack_174;
  uint64_t uStack_170;
  int32_t uStack_168;
  int iStack_164;
  int64_t lStack_160;
  uint64_t uStack_158;
  float fStack_150;
  float fStack_14c;
  uint64_t uStack_148;
  float fStack_140;
  float fStack_13c;
  int64_t **pplStack_138;
  uint64_t uStack_130;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  float fStack_11c;
  int64_t lStack_118;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  int32_t uStack_104;
  int32_t uStack_100;
  int32_t uStack_fc;
  int32_t uStack_f8;
  int32_t uStack_f4;
  
  uStack_130 = 0xfffffffffffffffe;
  if ((param_3 == 0) || (*(int *)(param_2 + 0x128) != *(int *)(param_3 + 0x128))) {
    if (param_7 != 0) {
      if (*(char *)(param_7 + 0x1024) == '\0') {
        *(uint64_t *)(param_7 + 0x1008) = *(uint64_t *)(param_7 + 0x1000);
        *(int8_t *)(param_7 + 0x1024) = 1;
      }
      *(int32_t *)(param_7 + 0x1020) = 0;
    }
    return 0;
  }
  fStack_14c = param_5[1] - param_4[1];
  fStack_150 = *param_5 - *param_4;
  cVar7 = FUN_1803944c0(param_6,fStack_14c,param_3,param_4,&fStack_150,
                        in_stack_fffffffffffffde0 & 0xffffffffffffff00,param_6,1,param_7,param_11,0)
  ;
  if (cVar7 != '\0') {
    if (param_7 != 0) {
      cVar7 = *(char *)(param_7 + 0x1024);
      if (cVar7 == '\0') {
        iVar20 = (int)(*(int64_t *)(param_7 + 0x1008) - *(int64_t *)(param_7 + 0x1000) >> 5);
      }
      else {
        iVar20 = *(int *)(param_7 + 0x1020);
      }
      lVar19 = param_7;
      if (cVar7 == '\0') {
        lVar19 = *(int64_t *)(param_7 + 0x1000);
      }
      puVar9 = (int32_t *)((int64_t)(iVar20 + -1) * 0x20 + lVar19);
      uStack_110 = *puVar9;
      uStack_10c = puVar9[1];
      uStack_108 = puVar9[2];
      uStack_104 = puVar9[3];
      uStack_100 = puVar9[4];
      uStack_fc = puVar9[5];
      uStack_f8 = puVar9[6];
      uStack_f4 = puVar9[7];
      if (cVar7 == '\0') {
        *(uint64_t *)(param_7 + 0x1008) = *(uint64_t *)(param_7 + 0x1000);
        *(int8_t *)(param_7 + 0x1024) = 1;
      }
      *(int32_t *)(param_7 + 0x1020) = 0;
      FUN_1803966c0(param_7,&uStack_110);
    }
    return 1;
  }
  iStack_164 = FUN_1803965f0(param_1);
  lVar19 = (int64_t)iStack_164;
  uStack_1c0 = 0;
  uStack_158 = &plStack_1e0;
  plStack_1e0 = (int64_t *)0x0;
  plStack_1d8 = (int64_t *)0x0;
  plStack_1d0 = (int64_t *)0x0;
  uStack_1c8 = 3;
  FUN_18038de80(param_1,iStack_164);
  fStack_174 = SQRT((*param_5 - *param_4) * (*param_5 - *param_4) +
                    (param_5[1] - param_4[1]) * (param_5[1] - param_4[1]));
  *(int *)(param_2 + 0x40 + lVar19 * 4) = *(int *)(param_1 + 0x558 + lVar19 * 4) + 1;
  *(int64_t *)(param_2 + lVar19 * 8) = param_2;
  fVar32 = 0.0;
  fStack_178 = 0.0;
  uStack_170 = *(int64_t *)param_4;
  uStack_180 = param_2;
  if (plStack_1d8 < plStack_1d0) {
    uStack_180._0_4_ = (int32_t)param_2;
    uStack_180._4_4_ = (int32_t)((uint64_t)param_2 >> 0x20);
    *(int32_t *)plStack_1d8 = (int32_t)uStack_180;
    *(int32_t *)((int64_t)plStack_1d8 + 4) = uStack_180._4_4_;
    *(int32_t *)(plStack_1d8 + 1) = 0;
    *(float *)((int64_t)plStack_1d8 + 0xc) = fStack_174;
    plStack_1d8[2] = uStack_170;
    plVar10 = plStack_1d8;
    goto LAB_180392dfa;
  }
  lVar12 = ((int64_t)plStack_1d8 - (int64_t)plStack_1e0) / 0x18;
  if (lVar12 == 0) {
    lVar12 = 1;
LAB_180392d30:
    plVar10 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 0x18,uStack_1c8 & 0xff);
  }
  else {
    lVar12 = lVar12 * 2;
    if (lVar12 != 0) goto LAB_180392d30;
    plVar10 = (int64_t *)0x0;
  }
  if (plStack_1e0 != plStack_1d8) {
                    // WARNING: Subroutine does not return
    memmove(plVar10,plStack_1e0,(int64_t)plStack_1d8 - (int64_t)plStack_1e0);
  }
  *(int32_t *)plVar10 = (int32_t)uStack_180;
  *(int32_t *)((int64_t)plVar10 + 4) = uStack_180._4_4_;
  *(float *)(plVar10 + 1) = fStack_178;
  *(float *)((int64_t)plVar10 + 0xc) = fStack_174;
  plVar10[2] = uStack_170;
  if (plStack_1e0 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plStack_1d0 = plVar10 + lVar12 * 3;
  plStack_1e0 = plVar10;
LAB_180392dfa:
  plStack_1d8 = plVar10 + 3;
  lVar17 = 0x2aaaaaaaaaaaaaab;
  lVar12 = param_1;
  uVar23 = FUN_180397230(plStack_1e0,plStack_1d8,uStack_1c0 & 0xff);
  uStack_168 = *(int32_t *)(*(int64_t *)(lVar12 + 0x528) + 0x60300);
  iVar8 = *(int *)(param_3 + 0x40 + lVar19 * 4);
  iVar20 = *(int *)(lVar12 + 0x558 + lVar19 * 4);
  if (iVar8 <= iVar20) {
    do {
      if ((plStack_1e0 == plStack_1d8) || (param_10 <= fVar32)) {
        if (iVar8 <= iVar20) {
          uVar14 = 0;
          if (param_7 != 0) {
            func_0x000180396690(param_7);
          }
          goto LAB_180393532;
        }
        break;
      }
      uVar23 = *(int32_t *)((int64_t)plStack_1e0 + 4);
      lVar4 = *plStack_1e0;
      fStack_178 = *(float *)(plStack_1e0 + 1);
      fStack_174 = *(float *)((int64_t)plStack_1e0 + 0xc);
      uStack_170 = plStack_1e0[2];
      uStack_128 = (int32_t)plStack_1d8[-3];
      uStack_124 = *(int32_t *)((int64_t)plStack_1d8 + -0x14);
      uStack_120 = (int32_t)plStack_1d8[-2];
      fStack_11c = *(float *)((int64_t)plStack_1d8 + -0xc);
      lStack_118 = plStack_1d8[-1];
      *(int *)(plStack_1d8 + -3) = (int)*plStack_1e0;
      *(int32_t *)((int64_t)plStack_1d8 + -0x14) = uVar23;
      *(float *)(plStack_1d8 + -2) = fStack_178;
      *(float *)((int64_t)plStack_1d8 + -0xc) = fStack_174;
      plStack_1d8[-1] = plStack_1e0[2];
      lVar12 = SUB168(SEXT816(lVar17) * SEXT816((int64_t)plStack_1d8 - (int64_t)plStack_1e0),8);
      lVar18 = (-1 - (lVar12 >> 0x3f)) + (lVar12 >> 2);
      lVar12 = 0;
      lVar17 = 2;
      bVar22 = lVar18 == 2;
      lVar16 = lVar12;
      if (2 < lVar18) {
        do {
          fVar32 = *(float *)((int64_t)plStack_1e0 + lVar17 * 0x18 + 0xc);
          pfVar1 = (float *)((int64_t)plStack_1e0 + lVar17 * 0x18 + -0xc);
          lVar12 = lVar17 + -1;
          if (fVar32 < *pfVar1 || fVar32 == *pfVar1) {
            lVar12 = lVar17;
          }
          plVar10 = plStack_1e0 + lVar12 * 3;
          uVar23 = *(int32_t *)((int64_t)plVar10 + 4);
          lVar17 = plVar10[1];
          uVar3 = *(int32_t *)((int64_t)plVar10 + 0xc);
          plVar21 = plStack_1e0 + lVar16 * 3;
          *(int *)plVar21 = (int)*plVar10;
          *(int32_t *)((int64_t)plVar21 + 4) = uVar23;
          *(int *)(plVar21 + 1) = (int)lVar17;
          *(int32_t *)((int64_t)plVar21 + 0xc) = uVar3;
          plStack_1e0[lVar16 * 3 + 2] = plStack_1e0[lVar12 * 3 + 2];
          lVar17 = lVar12 * 2 + 2;
          bVar22 = lVar17 == lVar18;
          lVar16 = lVar12;
        } while (lVar17 < lVar18);
      }
      if (bVar22) {
        plVar21 = plStack_1e0 + lVar17 * 3 + -3;
        uVar23 = *(int32_t *)((int64_t)plVar21 + 4);
        lVar16 = plVar21[1];
        uVar3 = *(int32_t *)((int64_t)plVar21 + 0xc);
        plVar10 = plStack_1e0 + lVar12 * 3;
        *(int *)plVar10 = (int)*plVar21;
        *(int32_t *)((int64_t)plVar10 + 4) = uVar23;
        *(int *)(plVar10 + 1) = (int)lVar16;
        *(int32_t *)((int64_t)plVar10 + 0xc) = uVar3;
        plStack_1e0[lVar12 * 3 + 2] = plStack_1e0[lVar17 * 3 + -1];
        lVar12 = lVar17 + -1;
      }
      while ((0 < lVar12 &&
             (lVar17 = lVar12 + -1 >> 1,
             fStack_11c < *(float *)((int64_t)plStack_1e0 + lVar17 * 0x18 + 0xc)))) {
        plVar10 = plStack_1e0 + lVar17 * 3;
        uVar23 = *(int32_t *)((int64_t)plVar10 + 4);
        lVar16 = plVar10[1];
        uVar3 = *(int32_t *)((int64_t)plVar10 + 0xc);
        plVar21 = plStack_1e0 + lVar12 * 3;
        *(int *)plVar21 = (int)*plVar10;
        *(int32_t *)((int64_t)plVar21 + 4) = uVar23;
        *(int *)(plVar21 + 1) = (int)lVar16;
        *(int32_t *)((int64_t)plVar21 + 0xc) = uVar3;
        plStack_1e0[lVar12 * 3 + 2] = plStack_1e0[lVar17 * 3 + 2];
        lVar12 = lVar17;
      }
      plVar10 = plStack_1e0 + lVar12 * 3;
      *(int32_t *)plVar10 = uStack_128;
      *(int32_t *)((int64_t)plVar10 + 4) = uStack_124;
      *(int32_t *)(plVar10 + 1) = uStack_120;
      *(float *)((int64_t)plVar10 + 0xc) = fStack_11c;
      plStack_1e0[lVar12 * 3 + 2] = lStack_118;
      plVar21 = plStack_1d8 + -3;
      iVar20 = 0;
      iStack_1b8 = 0;
      lVar12 = 0;
      lStack_160 = 0;
      iStack_1a8 = 0;
      plStack_1d8 = plVar21;
      uStack_180 = lVar4;
      iVar8 = func_0x00018038b420(lVar4);
      fVar32 = fStack_178;
      lVar16 = (int64_t)iVar8;
      lVar17 = 0;
      lStack_190 = 0;
      puStack_1b0 = (uint64_t *)(lVar4 + 0x60);
      plVar10 = (int64_t *)(lVar4 + 0xb0);
      fVar6 = uStack_170._4_4_;
      fVar5 = (float)uStack_170;
      lVar18 = param_1;
      uVar23 = extraout_XMM0_Da;
      plStack_198 = plVar10;
      lStack_188 = lVar16;
      while( true ) {
        while (puVar13 = (uint64_t *)0x0, iVar20 < (int)(uint)*(byte *)(lVar4 + 0xa8)) {
          if (lVar12 != lVar16) {
            lVar15 = *plVar10;
            if (lVar15 != 0) {
              puVar13 = (uint64_t *)*puStack_1b0;
            }
            iVar20 = iVar20 + 1;
            lVar12 = lVar12 + 1;
            plVar10 = plVar10 + 1;
            puStack_1b0 = puStack_1b0 + 1;
            iStack_1b8 = iVar20;
            plStack_198 = plVar10;
            lStack_160 = lVar12;
            goto LAB_1803930a3;
          }
          lVar12 = lVar12 + 1;
          plVar10 = plVar10 + 1;
          puStack_1b0 = puStack_1b0 + 1;
          iVar20 = iVar20 + 1;
          iStack_1b8 = iVar20;
          plStack_198 = plVar10;
          lStack_160 = lVar12;
        }
        if ((uint64_t)(*(int64_t *)(lVar4 + 0x100) - *(int64_t *)(lVar4 + 0xf8) >> 3) <=
            (uint64_t)(int64_t)iStack_1a8) break;
        lVar15 = *(int64_t *)(*(int64_t *)(lVar4 + 0xf8) + lVar17);
        if (lVar15 != 0) {
          if ((*(byte *)(lVar4 + 0x139) & 4) == 0) {
            puVar13 = *(uint64_t **)(lVar15 + 0x118);
          }
          else {
            puVar13 = *(uint64_t **)(lVar4 + 0x118);
          }
        }
        iStack_1a8 = iStack_1a8 + 1;
        lVar17 = lVar17 + 8;
        lVar16 = lStack_188;
        lStack_190 = lVar17;
LAB_1803930a3:
        if ((((puVar13 != (uint64_t *)0x0) && (lVar15 != 0)) &&
            (cVar7 = FUN_18038acd0(lVar15,param_11,puVar13,uStack_168), plVar10 = plStack_198,
            lVar17 = lStack_190, lVar16 = lStack_188, lVar18 = param_1, uVar23 = extraout_XMM0_Da_00
            , cVar7 != '\0')) &&
           (*(int *)(lVar15 + 0x40 + lVar19 * 4) <= *(int *)(param_1 + 0x558 + lVar19 * 4))) {
          pplVar2 = *(int64_t ***)*puVar13;
          plVar10 = (int64_t *)puVar13[1];
          pplVar11 = (int64_t **)*plVar10;
          uStack_1e8._0_4_ = SUB84(pplVar11,0);
          uStack_1a0._0_4_ = SUB84(pplVar2,0);
          fVar28 = (float)uStack_1e8 - (float)uStack_1a0;
          uStack_1e8._4_4_ = (float)((uint64_t)pplVar11 >> 0x20);
          uStack_1a0._4_4_ = (float)((uint64_t)pplVar2 >> 0x20);
          fVar27 = uStack_1e8._4_4_ - uStack_1a0._4_4_;
          fVar29 = fVar27 * fVar27 + fVar28 * fVar28;
          auVar26 = rsqrtss(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29));
          fVar30 = auVar26._0_4_;
          fVar30 = fVar30 * 0.5 * (3.0 - fVar29 * fVar30 * fVar30);
          fVar28 = fVar30 * fVar28;
          fVar27 = fVar30 * fVar27;
          fVar30 = fVar30 * fVar29;
          cVar7 = *(char *)((int64_t)*puVar13 + 0xc);
          if ((cVar7 == '\0') || (*(char *)((int64_t)plVar10 + 0xc) == '\0')) {
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          fVar29 = (float)uStack_1a0;
          fVar31 = uStack_1a0._4_4_;
          if (*(char *)(*(int64_t *)(param_1 + 0x528) + 0x48) != '\0') {
            if (bVar22) {
              fVar24 = 0.49;
            }
            else {
              fVar24 = 0.99;
            }
            fVar25 = fVar24 * fVar30;
            if (param_6 <= fVar24 * fVar30) {
              fVar25 = param_6;
            }
            if (0.0 < fVar25) {
              if (cVar7 != '\0') {
                fVar29 = (float)uStack_1a0 + fVar28 * fVar25;
                fVar31 = uStack_1a0._4_4_ + fVar27 * fVar25;
                uStack_1a0 = (int64_t **)CONCAT44(fVar31,fVar29);
                fVar30 = fVar30 - fVar25;
                pplVar2 = uStack_1a0;
              }
              uStack_1a0 = pplVar2;
              pplVar2 = uStack_1a0;
              if (*(char *)((int64_t)plVar10 + 0xc) != '\0') {
                uStack_1e8 = (int64_t **)
                             CONCAT44(uStack_1e8._4_4_ - fVar27 * fVar25,
                                      (float)uStack_1e8 - fVar28 * fVar25);
                fVar30 = fVar30 - fVar25;
                pplVar11 = uStack_1e8;
              }
            }
          }
          uStack_1a0 = pplVar2;
          fVar24 = (fVar6 - fVar31) * fVar27 + (fVar5 - fVar29) * fVar28;
          pplStack_138 = uStack_1a0;
          if ((0.0 <= fVar24) && (pplStack_138 = pplVar11, fVar24 <= fVar30)) {
            uStack_158 = (int64_t **)CONCAT44(fVar27 * fVar24 + fVar31,fVar28 * fVar24 + fVar29);
            pplStack_138 = uStack_158;
          }
          uStack_1e8._0_4_ = SUB84(pplStack_138,0);
          fVar27 = fVar5 - (float)uStack_1e8;
          uStack_1e8._4_4_ = (float)((uint64_t)pplStack_138 >> 0x20);
          fVar28 = fVar6 - uStack_1e8._4_4_;
          fVar30 = param_9;
          if (*(int *)(lVar4 + 0x130) != param_8) {
            fVar30 = *(float *)(lVar4 + 0x120);
          }
          fVar29 = param_9;
          if (*(int *)(lVar15 + 0x130) != param_8) {
            fVar29 = *(float *)(lVar15 + 0x120);
          }
          fStack_140 = SQRT(fVar28 * fVar28 + fVar27 * fVar27) + fVar32 +
                       (fVar29 + fVar30) * 0.5 * param_12;
          fStack_13c = SQRT((param_5[1] - uStack_1e8._4_4_) * (param_5[1] - uStack_1e8._4_4_) +
                            (*param_5 - (float)uStack_1e8) * (*param_5 - (float)uStack_1e8)) +
                       fStack_140;
          uStack_148 = lVar15;
          if (plVar21 < plStack_1d0) {
            uStack_148._0_4_ = (int32_t)lVar15;
            uStack_148._4_4_ = (int32_t)((uint64_t)lVar15 >> 0x20);
            *(int32_t *)plVar21 = (int32_t)uStack_148;
            *(int32_t *)((int64_t)plVar21 + 4) = uStack_148._4_4_;
            *(float *)(plVar21 + 1) = fStack_140;
            *(float *)((int64_t)plVar21 + 0xc) = fStack_13c;
            plVar21[2] = (int64_t)pplStack_138;
            plVar10 = plVar21;
          }
          else {
            lVar12 = ((int64_t)plVar21 - (int64_t)plStack_1e0) / 0x18;
            if (lVar12 == 0) {
              lVar12 = 1;
LAB_1803933ce:
              plVar10 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 0x18,uStack_1c8 & 0xff);
              plVar21 = plStack_1d8;
            }
            else {
              lVar12 = lVar12 * 2;
              if (lVar12 != 0) goto LAB_1803933ce;
              plVar10 = (int64_t *)0x0;
            }
            if (plStack_1e0 != plVar21) {
                    // WARNING: Subroutine does not return
              memmove(plVar10,plStack_1e0,(int64_t)plVar21 - (int64_t)plStack_1e0);
            }
            *(int32_t *)plVar10 = (int32_t)uStack_148;
            *(int32_t *)((int64_t)plVar10 + 4) = uStack_148._4_4_;
            *(float *)(plVar10 + 1) = fStack_140;
            *(float *)((int64_t)plVar10 + 0xc) = fStack_13c;
            plVar10[2] = (int64_t)pplStack_138;
            if (plStack_1e0 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            plStack_1d0 = plVar10 + lVar12 * 3;
            lVar12 = lStack_160;
            plStack_1e0 = plVar10;
          }
          plStack_1d8 = plVar10 + 3;
          uVar23 = FUN_180397230(plStack_1e0,plStack_1d8,uStack_1c0 & 0xff);
          *(int64_t *)(lVar15 + lVar19 * 8) = lVar4;
          *(int *)(lVar15 + 0x40 + lVar19 * 4) = *(int *)(lVar18 + 0x558 + lVar19 * 4) + 1;
          plVar10 = plStack_198;
          lVar17 = lStack_190;
          lVar16 = lStack_188;
          plVar21 = plStack_1d8;
          iVar20 = iStack_1b8;
        }
      }
      *(int *)(lVar4 + 0x40 + lVar19 * 4) = *(int *)(lVar18 + 0x558 + lVar19 * 4) + 2;
      iVar8 = *(int *)(param_3 + 0x40 + lVar19 * 4);
      iVar20 = *(int *)(lVar18 + 0x558 + lVar19 * 4);
      lVar17 = 0x2aaaaaaaaaaaaaab;
    } while (iVar8 <= iVar20);
  }
  uVar14 = 1;
  if (param_7 != 0) {
    FUN_18038e430(uVar23,iStack_164,param_2,param_3,param_4,param_5,param_7);
  }
LAB_180393532:
  *(int32_t *)(param_1 + 0x578 + lVar19 * 4) = 0;
  if (plStack_1e0 == (int64_t *)0x0) {
    return uVar14;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





