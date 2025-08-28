#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part057_sub002_sub002.c - 1 个函数

// 函数: void FUN_1802335cb(void)
void FUN_1802335cb(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_R14;
  int64_t unaff_R15;
  
  iVar3 = 0;
  *(int32_t *)(*(int64_t *)(unaff_R15 + 8) + 0x88) = 0;
  iVar2 = *unaff_R14;
  if (0 < iVar2) {
    iVar1 = unaff_R14[1];
    do {
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          iVar4 = iVar4 + 1;
          FUN_180235410();
          FUN_180235410();
          iVar1 = unaff_R14[1];
        } while (iVar4 < iVar1);
        iVar2 = *unaff_R14;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  *(int16_t *)(unaff_R15 + 0x30) = 0x101;
  *(int8_t *)(unaff_R15 + 0x32) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180233690(int64_t param_1,int64_t param_2,int64_t param_3,float *param_4,
                      float param_5)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int32_t uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int64_t lVar13;
  uint64_t uVar14;
  float *pfVar15;
  int *piVar16;
  uint64_t uVar17;
  int iVar18;
  float *pfVar19;
  uint uVar20;
  int *piVar21;
  int *piVar22;
  uint uVar23;
  int iVar24;
  int64_t *plVar25;
  int64_t lVar26;
  int64_t lVar28;
  int64_t *plVar29;
  int64_t lVar30;
  int64_t lVar31;
  int8_t uVar32;
  int *piVar33;
  uint64_t uVar34;
  int *piVar35;
  char *pcVar36;
  uint64_t uVar37;
  int *piVar38;
  bool bVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  uint uStack_234;
  uint uStack_230;
  uint64_t uStack_228;
  uint64_t uStack_220;
  uint64_t uStack_218;
  int64_t lStack_208;
  int *piStack_200;
  int64_t lStack_1f8;
  int64_t *plStack_1f0;
  int64_t *plStack_1e8;
  int64_t *plStack_1e0;
  int32_t uStack_1d8;
  int32_t uStack_1d0;
  int *piStack_1c8;
  int64_t lStack_1c0;
  uint64_t uStack_1b8;
  int32_t uStack_1b0;
  int *piStack_1a8;
  int64_t lStack_1a0;
  int *piStack_198;
  uint64_t uStack_188;
  int64_t lStack_180;
  float *pfStack_178;
  int64_t lStack_170;
  uint64_t uStack_168;
  int32_t uStack_160;
  char *pcStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  int32_t uStack_140;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int64_t *plStack_128;
  int64_t lStack_120;
  int32_t uStack_118;
  int64_t lStack_110;
  int64_t lStack_108;
  int32_t uStack_100;
  int64_t lStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  int64_t lStack_c8;
  int64_t lStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  int8_t auStack_a8 [16];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  int *piVar27;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_1d0 = 0;
  plStack_1f0 = (int64_t *)0x0;
  plStack_1e8 = (int64_t *)0x0;
  plStack_1e0 = (int64_t *)0x0;
  uStack_1d8 = 3;
  FUN_1800e8140(&plStack_1f0,(int64_t)(*(int *)(*(int64_t *)(param_1 + 8) + 0x88) * 3));
  uStack_234 = 0;
  lVar13 = *(int64_t *)(param_1 + 8);
  plVar12 = plStack_1f0;
  if (0 < *(int *)(lVar13 + 0x88)) {
    lStack_208 = 0;
    plVar29 = plStack_1e0;
    do {
      plVar11 = plStack_1e8;
      plVar10 = (int64_t *)0x0;
      lVar26 = *(int64_t *)(lVar13 + 0x90);
      lVar13 = *(int64_t *)(lVar13 + 0x68);
      iVar18 = *(int *)((int64_t)*(int *)(lStack_208 + lVar26) * 0x5c + lVar13);
      iVar24 = *(int *)((int64_t)*(int *)(lStack_208 + 4 + lVar26) * 0x5c + lVar13);
      iVar4 = *(int *)((int64_t)*(int *)(lStack_208 + 8 + lVar26) * 0x5c + lVar13);
      iVar5 = iVar24;
      if (iVar24 < iVar18) {
        iVar5 = iVar18;
      }
      iVar9 = iVar24;
      if (iVar18 < iVar24) {
        iVar9 = iVar18;
      }
      uStack_218 = CONCAT44(iVar5,iVar9);
      iStack_138 = iVar18;
      iStack_134 = iVar24;
      iStack_130 = iVar4;
      if (plStack_1e8 < plVar29) {
        *plStack_1e8 = uStack_218;
        plVar10 = plVar12;
        uVar32 = (int8_t)uStack_1d8;
      }
      else {
        lStack_1f8 = (int64_t)plStack_1e8 - (int64_t)plVar12;
        if (lStack_1f8 >> 3 == 0) {
          piStack_200 = (int *)0x1;
LAB_1802337f5:
          plVar10 = (int64_t *)
                    FUN_18062b420(system_memory_pool_ptr,(int64_t)piStack_200 * 8,(int8_t)uStack_1d8);
        }
        else {
          piStack_200 = (int *)((lStack_1f8 >> 3) * 2);
          if (piStack_200 != (int *)0x0) goto LAB_1802337f5;
        }
        if (plVar12 != plVar11) {
                    // WARNING: Subroutine does not return
          memmove(plVar10,plVar12,lStack_1f8);
        }
        *plVar10 = uStack_218;
        if (plVar12 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar12);
        }
        plVar29 = plVar10 + (int64_t)piStack_200;
        uVar32 = (int8_t)uStack_1d8;
        plStack_1f0 = plVar10;
        plStack_1e0 = plVar29;
        plStack_1e8 = plVar10;
      }
      plVar12 = plStack_1e8 + 1;
      plVar11 = (int64_t *)0x0;
      iVar5 = iVar4;
      if (iVar4 < iVar24) {
        iVar5 = iVar24;
      }
      iVar9 = iVar4;
      if (iVar24 < iVar4) {
        iVar9 = iVar24;
      }
      uStack_220 = CONCAT44(iVar5,iVar9);
      if (plVar12 < plVar29) {
        plVar25 = plStack_1e8 + 2;
        *plVar12 = uStack_220;
        plVar11 = plVar10;
      }
      else {
        lStack_1f8 = (int64_t)plVar12 - (int64_t)plVar10;
        plStack_1e8 = plVar12;
        if (lStack_1f8 >> 3 == 0) {
          lVar13 = 1;
LAB_1802338cc:
          plVar11 = (int64_t *)FUN_18062b420(system_memory_pool_ptr,lVar13 * 8,uVar32);
        }
        else {
          lVar13 = (lStack_1f8 >> 3) * 2;
          if (lVar13 != 0) goto LAB_1802338cc;
        }
        if (plVar10 != plVar12) {
                    // WARNING: Subroutine does not return
          memmove(plVar11,plVar10,lStack_1f8);
        }
        *plVar11 = uStack_220;
        plVar25 = plVar11 + 1;
        if (plVar10 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar10);
        }
        plVar29 = plVar11 + lVar13;
        plStack_1f0 = plVar11;
        plStack_1e0 = plVar29;
      }
      iVar24 = iVar18;
      if (iVar18 < iVar4) {
        iVar24 = iVar4;
      }
      if (iVar4 < iVar18) {
        iVar18 = iVar4;
      }
      uStack_228 = CONCAT44(iVar24,iVar18);
      if (plVar25 < plVar29) {
        *plVar25 = uStack_228;
        plVar12 = plVar11;
      }
      else {
        lVar13 = (int64_t)plVar25 - (int64_t)plVar11 >> 3;
        plStack_1e8 = plVar25;
        if (lVar13 == 0) {
          lVar13 = 1;
LAB_18023398f:
          plVar12 = (int64_t *)FUN_18062b420(system_memory_pool_ptr,lVar13 * 8,(int8_t)uStack_1d8);
        }
        else {
          lVar13 = lVar13 * 2;
          if (lVar13 != 0) goto LAB_18023398f;
          plVar12 = (int64_t *)0x0;
        }
        if (plVar11 != plVar25) {
                    // WARNING: Subroutine does not return
          memmove(plVar12,plVar11,(int64_t)plVar25 - (int64_t)plVar11);
        }
        *plVar12 = uStack_228;
        if (plVar11 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar11);
        }
        plVar29 = plVar12 + lVar13;
        plStack_1f0 = plVar12;
        plStack_1e0 = plVar29;
        plVar25 = plVar12;
      }
      plStack_1e8 = plVar25 + 1;
      uStack_234 = uStack_234 + 1;
      lStack_208 = lStack_208 + 0xc;
      lVar13 = *(int64_t *)(param_1 + 8);
    } while ((int)uStack_234 < *(int *)(lVar13 + 0x88));
  }
  plVar29 = plStack_1e8;
  if (plVar12 != plStack_1e8) {
    iVar18 = 0;
    lVar26 = (int64_t)plStack_1e8 - (int64_t)plVar12 >> 3;
    for (lVar13 = lVar26; lVar13 != 0; lVar13 = lVar13 >> 1) {
      iVar18 = iVar18 + 1;
    }
    FUN_180239800(plVar12,plStack_1e8,(int64_t)(iVar18 + -1) * 2);
    if (lVar26 < 0x1d) {
      FUN_180239480(plVar12,plVar29);
    }
    else {
      plVar11 = plVar12 + 0x1c;
      FUN_180239480(plVar12,plVar11);
      if (plVar11 != plVar29) {
        plVar10 = plVar12 + 0x1b;
        do {
          lStack_208 = *plVar11;
          cVar7 = func_0x000180233670(&lStack_208,plVar10);
          plVar25 = plVar11;
          if (cVar7 != '\0') {
            do {
              *plVar25 = *(int64_t *)((int64_t)plVar25 + ((int64_t)plVar10 - (int64_t)plVar11));
              plVar25 = plVar25 + -1;
              cVar7 = func_0x000180233670(&lStack_208,
                                          (int64_t)plVar25 +
                                          ((int64_t)plVar10 - (int64_t)plVar11));
            } while (cVar7 != '\0');
          }
          *plVar25 = lStack_208;
          plVar11 = plVar11 + 1;
          plVar10 = plVar10 + 1;
        } while (plVar11 != plVar29);
      }
    }
  }
  pcStack_158 = (char *)0x0;
  uStack_150 = 0;
  uVar17 = 0;
  uStack_148 = 0;
  uStack_140 = 3;
  FUN_1800f6ad0(&pcStack_158,(int64_t)*(int *)(*(int64_t *)(param_1 + 8) + 0x10));
  pcVar36 = pcStack_158;
  uVar14 = uVar17;
  if (0 < *(int *)(*(int64_t *)(param_1 + 8) + 0x10)) {
    do {
      *pcVar36 = '\0';
      uVar20 = (int)uVar14 + 1;
      pcVar36 = pcVar36 + 1;
      uVar14 = (uint64_t)uVar20;
    } while ((int)uVar20 < *(int *)(*(int64_t *)(param_1 + 8) + 0x10));
  }
  lVar13 = (int64_t)plVar29 - (int64_t)plVar12 >> 3;
  uVar14 = uVar17;
  if (lVar13 != 1) {
    do {
      iVar18 = (int)uVar14;
      if (((int)*plVar12 == (int)plVar12[1]) &&
         (*(int *)((int64_t)plVar12 + 4) == *(int *)((int64_t)plVar12 + 0xc))) {
        iVar18 = iVar18 + 1;
        plVar12 = plVar12 + 1;
      }
      else {
        pcStack_158[(int)*plVar12] = '\x01';
        pcStack_158[*(int *)((int64_t)plVar12 + 4)] = '\x01';
      }
      uVar14 = (uint64_t)(iVar18 + 1U);
      plVar12 = plVar12 + 1;
    } while ((uint64_t)(int64_t)(int)(iVar18 + 1U) < lVar13 - 1U);
  }
  piStack_1c8 = (int *)0x0;
  lStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 3;
  FUN_180080ca0(&piStack_1c8,(int64_t)*(int *)(*(int64_t *)(param_1 + 8) + 0x10));
  uVar14 = lStack_1c0 - (int64_t)piStack_1c8 >> 2;
  if (uVar14 != 0) {
    piVar16 = piStack_1c8;
    for (lVar13 = (int64_t)(int)uVar14; lVar13 != 0; lVar13 = lVar13 + -1) {
      *piVar16 = -1;
      piVar16 = piVar16 + 1;
    }
  }
  pfStack_178 = (float *)0x0;
  lStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 3;
  FUN_180080ca0();
  lVar13 = lStack_170 - (int64_t)pfStack_178 >> 2;
  if (lVar13 != 0) {
    pfVar19 = pfStack_178;
    for (lVar13 = (int64_t)(int)lVar13; lVar13 != 0; lVar13 = lVar13 + -1) {
      *pfVar19 = 3.4028235e+38;
      pfVar19 = pfVar19 + 1;
    }
  }
  *(uint64_t *)(param_2 + 0x18) = 0;
  *(int32_t *)(param_2 + 0x28) = 3;
  *(int64_t *)param_2 = param_2;
  *(int64_t *)(param_2 + 8) = param_2;
  *(uint64_t *)(param_2 + 0x10) = 0;
  *(int8_t *)(param_2 + 0x18) = 0;
  *(uint64_t *)(param_2 + 0x20) = 0;
  uStack_1d0 = 1;
  uStack_100 = 0;
  lStack_108 = param_3;
  iVar18 = _Thrd_id();
  while( true ) {
    LOCK();
    cVar7 = *(char *)(param_3 + 0xec);
    bVar39 = cVar7 == '\0';
    if (bVar39) {
      *(char *)(param_3 + 0xec) = '\x01';
      cVar7 = '\0';
    }
    UNLOCK();
    if (bVar39) break;
    if (*(int *)(param_3 + 0xf0) == iVar18) goto LAB_180233c96;
    Sleep(0);
  }
  cVar7 = '\0';
LAB_180233c96:
  LOCK();
  *(int *)(param_3 + 0xe8) = *(int *)(param_3 + 0xe8) + 1;
  UNLOCK();
  FUN_18007eb80(param_3);
  if (cVar7 == '\0') {
    LOCK();
    *(int8_t *)(param_3 + 0xec) = 0;
    UNLOCK();
  }
  lVar13 = *(int64_t *)(param_3 + 0x210);
  lVar31 = lVar13;
  lStack_f8 = lVar13;
  cVar7 = func_0x00018023a100(param_4);
  uStack_234 = 0;
  lVar26 = *(int64_t *)(param_1 + 8);
  if (0 < *(int *)(lVar26 + 0x10)) {
    pfVar19 = pfStack_178;
    lVar28 = lVar26;
    uVar34 = uVar17;
    pcVar36 = pcStack_158;
    uVar37 = uVar17;
    do {
      uVar20 = (uint)uVar37;
      if ((*pcVar36 != '\0') && (iVar18 = 0, 0 < *(int *)(lVar31 + 0x10))) {
        lVar30 = 0;
        do {
          if (cVar7 == '\0') {
            lVar31 = *(int64_t *)(lVar28 + 0x18);
            fVar40 = *(float *)(uVar34 + 4 + lVar31);
            fVar41 = *(float *)(uVar34 + 8 + lVar31);
            fVar42 = *(float *)(uVar34 + lVar31);
            fStack_d8 = fVar42 * *param_4 + fVar40 * param_4[4] + fVar41 * param_4[8] + param_4[0xc]
            ;
            fStack_d4 = fVar42 * param_4[1] + fVar40 * param_4[5] + fVar41 * param_4[9] +
                        param_4[0xd];
            fStack_d0 = fVar42 * param_4[2] + fVar40 * param_4[6] + fVar41 * param_4[10] +
                        param_4[0xe];
            fStack_cc = fVar42 * param_4[3] + fVar40 * param_4[7] + fVar41 * param_4[0xb] +
                        param_4[0xf];
            pfVar15 = &fStack_d8;
          }
          else {
            puVar1 = (uint64_t *)(*(int64_t *)(lVar26 + 0x18) + uVar34);
            uStack_e8 = *puVar1;
            uStack_e0 = puVar1[1];
            pfVar15 = (float *)&uStack_e8;
            lVar28 = lVar26;
          }
          lVar31 = *(int64_t *)(lVar13 + 0x18);
          fVar41 = pfVar15[2] - *(float *)(lVar30 + 8 + lVar31);
          fVar40 = pfVar15[1] - *(float *)(lVar30 + 4 + lVar31);
          fVar42 = *pfVar15 - *(float *)(lVar30 + lVar31);
          fVar40 = fVar42 * fVar42 + fVar40 * fVar40 + fVar41 * fVar41;
          if (fVar40 < param_5) {
            if (*pfVar19 == 3.4028235e+38) {
              uVar17 = (uint64_t)((int)uVar17 + 1);
            }
            if (fVar40 < *pfVar19) {
              *pfVar19 = fVar40;
              *(int *)(((int64_t)piStack_1c8 - (int64_t)pfStack_178) + (int64_t)pfVar19) = iVar18
              ;
              lVar28 = *(int64_t *)(param_1 + 8);
              lVar26 = lVar28;
            }
          }
          iVar18 = iVar18 + 1;
          lVar30 = lVar30 + 0x10;
          lVar31 = lVar13;
          uVar20 = uStack_234;
        } while (iVar18 < *(int *)(lVar13 + 0x10));
      }
      uStack_234 = uVar20 + 1;
      uVar37 = (uint64_t)uStack_234;
      pcVar36 = pcVar36 + 1;
      uVar34 = uVar34 + 0x10;
      pfVar19 = pfVar19 + 1;
    } while ((int)uStack_234 < *(int *)(lVar28 + 0x10));
    if (0 < (int)uVar17) {
      uVar17 = 0;
      uStack_230 = 0;
      if (uVar14 != 0) {
        lStack_1f8 = 0;
        uStack_228 = 0;
        uStack_218 = 0;
        piVar16 = piStack_1c8;
        piVar35 = piStack_1c8;
        uVar34 = uVar17;
        do {
          lVar26 = lStack_1f8;
          uVar20 = (uint)uVar34;
          if (*piVar35 != -1) {
            piStack_200 = piVar35;
            FUN_18005c930(param_2,auStack_a8,piVar16 + uVar17);
            piVar22 = (int *)0x0;
            piVar33 = (int *)0xffffffff;
            iVar18 = -1;
            piVar16 = piStack_1c8;
            if (0 < *(int *)(lVar13 + 0x60)) {
              lVar31 = (int64_t)*piVar35;
              piVar21 = *(int **)(lVar13 + 0x68);
              pfVar19 = (float *)(piVar21 + 2);
              piVar27 = piVar22;
              piVar38 = piVar22;
              do {
                piStack_198 = piVar38;
                iVar24 = iVar18;
                if ((*piVar21 == *piVar35) &&
                   (piStack_198 = piVar21, iVar24 = (int)piVar27,
                   (pfVar19[5] * *pfVar19 - pfVar19[1] * pfVar19[4]) * pfVar19[7] +
                   (pfVar19[3] * pfVar19[1] - pfVar19[-1] * pfVar19[5]) * pfVar19[8] +
                   (pfVar19[-1] * pfVar19[4] - pfVar19[3] * *pfVar19) * pfVar19[9] < 0.0)) {
                  piVar22 = piVar21;
                  piVar33 = piVar27;
                  piStack_198 = piVar38;
                  iVar24 = iVar18;
                }
                iVar18 = iVar24;
                uVar23 = (int)piVar27 + 1;
                piVar27 = (int *)(uint64_t)uVar23;
                piVar21 = piVar21 + 0x17;
                pfVar19 = pfVar19 + 0x17;
                piVar38 = piStack_198;
              } while ((int)uVar23 < *(int *)(lVar13 + 0x60));
              piStack_1a8 = piVar22;
              if ((piVar22 != (int *)0x0) || (piStack_198 != (int *)0x0)) {
                plVar12 = (int64_t *)(*(int64_t *)(lVar13 + 0x18) + lVar31 * 0x10);
                lVar28 = *plVar12;
                lStack_180 = plVar12[1];
                if (cVar7 == '\0') {
                  fVar41 = (float)lStack_180 - param_4[0xe];
                  uStack_188._4_4_ = (float)((uint64_t)lVar28 >> 0x20);
                  uStack_188._4_4_ = uStack_188._4_4_ - param_4[0xd];
                  uStack_188._0_4_ = (float)lVar28;
                  uStack_188._0_4_ = (float)uStack_188 - param_4[0xc];
                  fVar40 = param_4[0xb];
                  fStack_b8 = (float)uStack_188 * *param_4 + uStack_188._4_4_ * param_4[1] +
                              fVar41 * param_4[2];
                  fStack_b4 = (float)uStack_188 * param_4[4] + uStack_188._4_4_ * param_4[5] +
                              fVar41 * param_4[6];
                  fStack_b0 = (float)uStack_188 * param_4[8] + uStack_188._4_4_ * param_4[9] +
                              fVar41 * param_4[10];
                  fStack_ac = (float)uStack_188 * fVar40 + uStack_188._4_4_ * fVar40 +
                              fVar41 * fVar40;
                  pfVar19 = &fStack_b8;
                }
                else {
                  lStack_c8 = lVar28;
                  lStack_c0 = lStack_180;
                  pfVar19 = (float *)&lStack_c8;
                }
                lVar30 = *(int64_t *)(pfVar19 + 2);
                plVar12 = (int64_t *)(lVar26 + *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x18));
                *plVar12 = *(int64_t *)pfVar19;
                plVar12[1] = lVar30;
                lVar30 = *(int64_t *)(lVar13 + 0xd0);
                *(int32_t *)(uStack_218 + *(int64_t *)(*(int64_t *)(param_1 + 8) + 0xd0)) =
                     *(int32_t *)(lVar30 + lVar31 * 0x14);
                *(int8_t *)
                 (*(int64_t *)(*(int64_t *)(param_1 + 8) + 0xd0) + 0x10 + uStack_228) =
                     *(int8_t *)(lVar30 + 0x10 + lVar31 * 0x14);
                lVar30 = *(int64_t *)(lVar13 + 0xd0);
                *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 8) + 0xd0) + 4 + uStack_218) =
                     *(int32_t *)(lVar30 + 4 + lVar31 * 0x14);
                *(int8_t *)
                 (*(int64_t *)(*(int64_t *)(param_1 + 8) + 0xd0) + 0x11 + uStack_228) =
                     *(int8_t *)(lVar30 + 0x11 + lVar31 * 0x14);
                lVar30 = *(int64_t *)(lVar13 + 0xd0);
                *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 8) + 0xd0) + 8 + uStack_218) =
                     *(int32_t *)(lVar30 + 8 + lVar31 * 0x14);
                *(int8_t *)
                 (*(int64_t *)(*(int64_t *)(param_1 + 8) + 0xd0) + 0x12 + uStack_228) =
                     *(int8_t *)(lVar30 + 0x12 + lVar31 * 0x14);
                lVar30 = *(int64_t *)(lVar13 + 0xd0);
                *(int32_t *)(uStack_218 + 0xc + *(int64_t *)(*(int64_t *)(param_1 + 8) + 0xd0))
                     = *(int32_t *)(lVar30 + 0xc + lVar31 * 0x14);
                *(int8_t *)
                 (*(int64_t *)(*(int64_t *)(param_1 + 8) + 0xd0) + 0x13 + uStack_228) =
                     *(int8_t *)(lVar30 + 0x13 + lVar31 * 0x14);
                iVar24 = 0;
                lVar31 = *(int64_t *)(param_1 + 8);
                if (*(short *)(lVar31 + 0xc0) != 0) {
                  lVar30 = 0;
                  do {
                    fVar40 = pfVar19[1];
                    fVar41 = pfVar19[2];
                    fVar42 = pfVar19[3];
                    pfVar15 = (float *)(*(int64_t *)
                                         (lVar30 + 8 +
                                         *(int64_t *)(*(int64_t *)(param_1 + 8) + 0xb0)) + lVar26)
                    ;
                    *pfVar15 = *pfVar19;
                    pfVar15[1] = fVar40;
                    pfVar15[2] = fVar41;
                    pfVar15[3] = fVar42;
                    iVar24 = iVar24 + 1;
                    lVar30 = lVar30 + 0x50;
                    lVar31 = *(int64_t *)(param_1 + 8);
                  } while (iVar24 < (int)(uint)*(ushort *)(lVar31 + 0xc0));
                }
                uVar17 = 0;
                uStack_234 = 0;
                piVar35 = piStack_200;
                uVar20 = uStack_230;
                uStack_188 = lVar28;
                if (0 < *(int *)(lVar31 + 0x60)) {
                  uStack_188 = (int64_t)(int)piVar33;
                  lVar28 = (int64_t)iVar18;
                  uVar34 = uVar17;
                  lStack_1a0 = lVar28;
                  do {
                    uVar23 = (uint)uVar17;
                    lVar26 = *(int64_t *)(lVar31 + 0x68);
                    if (*(uint *)(uVar34 + lVar26) == uStack_230) {
                      fVar40 = *(float *)(uVar34 + 4 + lVar26);
                      fVar41 = *(float *)(uVar34 + 0x14 + lVar26);
                      fVar42 = *(float *)(uVar34 + 0xc + lVar26);
                      fVar3 = *(float *)(uVar34 + 0x1c + lVar26);
                      piVar16 = piVar22;
                      lVar31 = uStack_188;
                      if ((piStack_198 != (int *)0x0) &&
                         ((0.0 <= (fVar3 * *(float *)(uVar34 + 8 + lVar26) -
                                  fVar42 * *(float *)(uVar34 + 0x18 + lVar26)) *
                                  *(float *)(uVar34 + 0x24 + lVar26) +
                                  (fVar42 * fVar41 - fVar3 * fVar40) *
                                  *(float *)(uVar34 + 0x28 + lVar26) +
                                  (fVar40 * *(float *)(uVar34 + 0x18 + lVar26) -
                                  fVar41 * *(float *)(uVar34 + 8 + lVar26)) *
                                  *(float *)(uVar34 + 0x2c + lVar26) || (piVar22 == (int *)0x0)))) {
                        piVar16 = piStack_198;
                        lVar31 = lVar28;
                      }
                      if (cVar7 == '\0') {
                        fVar3 = param_4[0xb];
                        fVar40 = (float)piVar16[2];
                        fVar41 = (float)piVar16[3];
                        fVar42 = (float)piVar16[1];
                        fStack_98 = fVar42 * *param_4 + fVar40 * param_4[1] + fVar41 * param_4[2];
                        fStack_94 = fVar42 * param_4[4] + fVar40 * param_4[5] + fVar41 * param_4[6];
                        fStack_90 = fVar42 * param_4[8] + fVar40 * param_4[9] + fVar41 * param_4[10]
                        ;
                        fStack_8c = fVar42 * fVar3 + fVar40 * fVar3 + fVar41 * fVar3;
                        pfVar19 = (float *)(uVar34 + 0x34 + lVar26);
                        *pfVar19 = fStack_98;
                        pfVar19[1] = fStack_94;
                        pfVar19[2] = fStack_90;
                        pfVar19[3] = fStack_8c;
                        pfVar19 = (float *)(uVar34 + 4 + lVar26);
                        *pfVar19 = fStack_98;
                        pfVar19[1] = fStack_94;
                        pfVar19[2] = fStack_90;
                        pfVar19[3] = fStack_8c;
                      }
                      else {
                        iVar18 = piVar16[1];
                        iVar24 = piVar16[2];
                        iVar4 = piVar16[3];
                        iVar5 = piVar16[4];
                        piVar35 = (int *)(uVar34 + 0x34 + lVar26);
                        *piVar35 = iVar18;
                        piVar35[1] = iVar24;
                        piVar35[2] = iVar4;
                        piVar35[3] = iVar5;
                        piVar35 = (int *)(uVar34 + 4 + lVar26);
                        *piVar35 = iVar18;
                        piVar35[1] = iVar24;
                        piVar35[2] = iVar4;
                        piVar35[3] = iVar5;
                      }
                      *(int32_t *)(uVar34 + 0x58 + lVar26) = 0xbaddad;
                      piVar16[0x16] = 0xbaddad;
                      lVar30 = param_3;
                      if (*(int64_t *)(param_3 + 0x1b0) != 0) {
                        lVar30 = func_0x000180085e10();
                        uVar23 = uStack_234;
                      }
                      lVar28 = lStack_1a0;
                      if (0 < *(int *)(lVar30 + 0x204)) {
                        uVar6 = 0;
                        lVar28 = FUN_180085900(param_3);
                        uStack_118 = uVar6;
                        lStack_120 = lVar28;
                        iVar18 = _Thrd_id();
                        while( true ) {
                          LOCK();
                          cVar8 = *(char *)(lVar28 + 0xec);
                          bVar39 = cVar8 == '\0';
                          if (bVar39) {
                            *(char *)(lVar28 + 0xec) = '\x01';
                            cVar8 = '\0';
                          }
                          UNLOCK();
                          if (bVar39) break;
                          if (*(int *)(lVar28 + 0xf0) == iVar18) goto LAB_18023438a;
                          Sleep(0);
                        }
                        cVar8 = '\0';
LAB_18023438a:
                        LOCK();
                        *(int *)(lVar28 + 0xe8) = *(int *)(lVar28 + 0xe8) + 1;
                        UNLOCK();
                        FUN_18007eb80(lVar28,0);
                        if (cVar8 == '\0') {
                          LOCK();
                          *(int8_t *)(lVar28 + 0xec) = 0;
                          UNLOCK();
                        }
                        lStack_110 = *(int64_t *)(lVar28 + 0x210);
                        lVar30 = (int64_t)
                                 *(int *)(lVar31 * 0x5c + *(int64_t *)(lStack_110 + 0x68));
                        lVar31 = *(int64_t *)(lStack_110 + 0xd0);
                        puVar2 = (int32_t *)
                                 (*(int64_t *)(*(int64_t *)(param_1 + 8) + 0xd0) +
                                 (int64_t)*(int *)(uVar34 + lVar26) * 0x14);
                        *(int8_t *)(puVar2 + 4) = *(int8_t *)(lVar31 + 0x10 + lVar30 * 0x14)
                        ;
                        *puVar2 = *(int32_t *)(lVar31 + lVar30 * 0x14);
                        *(int8_t *)((int64_t)puVar2 + 0x11) =
                             *(int8_t *)(lVar31 + 0x11 + lVar30 * 0x14);
                        puVar2[1] = *(int32_t *)(lVar31 + 4 + lVar30 * 0x14);
                        *(int8_t *)((int64_t)puVar2 + 0x12) =
                             *(int8_t *)(lVar31 + 0x12 + lVar30 * 0x14);
                        puVar2[2] = *(int32_t *)(lVar31 + 8 + lVar30 * 0x14);
                        *(int8_t *)((int64_t)puVar2 + 0x13) =
                             *(int8_t *)(lVar31 + 0x13 + lVar30 * 0x14);
                        puVar2[3] = *(int32_t *)(lVar31 + 0xc + lVar30 * 0x14);
                        func_0x000180078440();
                        while( true ) {
                          LOCK();
                          cVar8 = *(char *)(lVar28 + 0xec);
                          bVar39 = cVar8 == '\0';
                          if (bVar39) {
                            *(char *)(lVar28 + 0xec) = '\x01';
                            cVar8 = '\0';
                          }
                          UNLOCK();
                          if (bVar39) break;
                          iVar18 = _Thrd_id();
                          if ((*(int *)(lVar28 + 0xf0) == iVar18) || (*(int *)(lVar28 + 0xf0) != 0))
                          goto LAB_18023446f;
                          Sleep();
                        }
                        cVar8 = '\0';
LAB_18023446f:
                        LOCK();
                        piVar16 = (int *)(lVar28 + 0xe8);
                        iVar18 = *piVar16;
                        *piVar16 = *piVar16 + -1;
                        UNLOCK();
                        if (cVar8 == '\0') {
                          if ((((iVar18 == 1) && (*(int64_t *)(lVar28 + 0x210) != 0)) &&
                              (FUN_1800791a0(lVar28), *(char *)(lVar28 + 0xfc) == '\0')) &&
                             ((*(char *)(lVar28 + 0xf4) == '\0' &&
                              (((*(byte *)(lVar28 + 0xfd) & 0x20) == 0 ||
                               ((*(byte *)(lVar28 + 0xfe) & 1) == 0)))))) {
                            plStack_128 = *(int64_t **)(lVar28 + 0x210);
                            *(uint64_t *)(lVar28 + 0x210) = 0;
                            if (plStack_128 != (int64_t *)0x0) {
                              (**(code **)(*plStack_128 + 0x38))();
                            }
                          }
                          LOCK();
                          *(int8_t *)(lVar28 + 0xec) = 0;
                          UNLOCK();
                        }
                        lStack_120 = 0;
                        piVar22 = piStack_1a8;
                        lVar28 = lStack_1a0;
                        uVar23 = uStack_234;
                      }
                    }
                    uStack_234 = uVar23 + 1;
                    uVar17 = (uint64_t)uStack_234;
                    uVar34 = uVar34 + 0x5c;
                    lVar31 = *(int64_t *)(param_1 + 8);
                    piVar16 = piStack_1c8;
                    lVar26 = lStack_1f8;
                    piVar35 = piStack_200;
                  } while ((int)uStack_234 < *(int *)(lVar31 + 0x60));
                }
              }
            }
          }
          uStack_230 = uVar20 + 1;
          uVar34 = (uint64_t)uStack_230;
          piVar35 = piVar35 + 1;
          uStack_218 = uStack_218 + 0x14;
          uStack_228 = uStack_228 + 0x14;
          lStack_1f8 = lVar26 + 0x10;
          uVar17 = (uint64_t)(int)uStack_230;
          piStack_200 = piVar35;
        } while (uVar17 < uVar14);
      }
      *(int8_t *)(param_1 + 0x30) = 1;
    }
  }
  pcVar36 = pcStack_158;
  pfVar19 = pfStack_178;
  FUN_18007f840(&lStack_108);
  if (pfVar19 != (float *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(pfVar19);
  }
  if (piStack_1c8 != (int *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(piStack_1c8);
  }
  if (pcVar36 != (char *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(pcVar36);
  }
  if (plStack_1f0 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return param_2;
}








