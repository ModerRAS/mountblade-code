#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part056_sub002_sub002.c - 1 个函数

// 函数: void FUN_1800796b0(int64_t param_1)
void FUN_1800796b0(int64_t param_1)

{
  int *piVar1;
  uint *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  float fVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int8_t auVar8 [16];
  bool bVar9;
  int *piVar10;
  int iVar11;
  int64_t lVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int64_t lVar17;
  float *pfVar18;
  uint uVar19;
  int *piVar20;
  int64_t lVar21;
  int64_t lVar22;
  int64_t lVar23;
  int64_t lVar24;
  int *piVar25;
  int *piVar26;
  int iVar27;
  uint64_t uVar28;
  int32_t *puVar29;
  uint64_t uVar30;
  int64_t lVar31;
  uint *puVar32;
  uint uVar33;
  int *piVar34;
  int8_t (*pauVar35) [16];
  uint64_t uVar36;
  int8_t (*pauVar37) [16];
  uint64_t uVar38;
  int64_t *plVar39;
  int64_t lVar40;
  uint64_t uVar41;
  int8_t (*pauVar42) [16];
  int64_t lVar43;
  bool bVar44;
  float fVar45;
  float fVar46;
  int8_t auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  int iStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  int *piStack_218;
  int *piStack_210;
  int *piStack_208;
  int32_t uStack_200;
  int *piStack_1f8;
  int *piStack_1f0;
  int iStack_1e8;
  int8_t (*pauStack_1e0) [16];
  uint64_t uStack_1d8;
  int64_t lStack_1d0;
  uint uStack_1c8;
  uint uStack_1c0;
  int32_t uStack_1bc;
  uint64_t uStack_1b8;
  int *piStack_1b0;
  int32_t uStack_1a8;
  uint64_t uStack_1a0;
  uint64_t uStack_198;
  int *piStack_190;
  int32_t uStack_188;
  uint64_t uStack_180;
  float fStack_178;
  float fStack_174;
  int64_t lStack_170;
  int64_t *plStack_168;
  int64_t *plStack_160;
  int32_t uStack_158;
  int8_t auStack_150 [16];
  uint64_t uStack_140;
  int32_t uStack_138;
  int32_t *puStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  int32_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  int32_t uStack_b0;
  
  uStack_110 = 0xfffffffffffffffe;
  piVar1 = (int *)(param_1 + 0x60);
  iVar27 = *piVar1;
  iVar11 = *(int *)(param_1 + 0x88);
  uVar28 = (uint64_t)iVar11;
  iStack_1e8 = *(int *)(param_1 + 0x10);
  puStack_130 = (int32_t *)0x0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 3;
  FUN_180080ca0(&puStack_130,uVar28);
  uVar41 = uVar28;
  puVar29 = puStack_130;
  if (0 < iVar11) {
    for (; uVar41 != 0; uVar41 = uVar41 - 1) {
      *puVar29 = 1;
      puVar29 = puVar29 + 1;
    }
  }
  auStack_150 = ZEXT816(0);
  uStack_140 = 0;
  uStack_138 = 3;
  lVar21 = (uint64_t)*(ushort *)(param_1 + 0xc0) + 1;
  if (lVar21 == 0) {
    lVar21 = 0;
    auStack_150 = ZEXT816(0) << 0x40;
  }
  else {
    FUN_180082290(auStack_150,lVar21);
    lVar21 = auStack_150._0_8_;
  }
  pauStack_1e0 = (int8_t (*) [16])(uint64_t)*(ushort *)(param_1 + 0xc0);
  lVar23 = -1;
  do {
    lVar31 = lVar23 + 1;
    lVar22 = lVar31 * 0x20;
    lVar17 = *(int64_t *)(lVar21 + 8 + lVar22);
    lVar24 = *(int64_t *)(lVar21 + lVar22);
    uVar41 = lVar17 - lVar24 >> 4;
    if (uVar41 < uVar28) {
      uVar30 = uVar28 - uVar41;
      if ((uint64_t)(*(int64_t *)(lVar21 + 0x10 + lVar22) - lVar17 >> 4) < uVar30) {
        if (uVar41 == 0) {
          uVar41 = 1;
        }
        else {
          uVar41 = uVar41 * 2;
        }
        if (uVar41 < uVar28) {
          uVar41 = uVar28;
        }
        if (uVar41 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = FUN_18062b420(system_memory_pool_ptr,uVar41 << 4,*(int8_t *)(lVar21 + 0x18 + lVar22))
          ;
          lVar17 = *(int64_t *)(lVar21 + 8 + lVar22);
          lVar24 = *(int64_t *)(lVar21 + lVar22);
        }
        if (lVar24 != lVar17) {
                    // WARNING: Subroutine does not return
          memmove(lVar12,lVar24,lVar17 - lVar24);
        }
        if (uVar30 != 0) {
                    // WARNING: Subroutine does not return
          memset(lVar12,0,uVar30 * 0x10);
        }
        if (*(int64_t *)(lVar21 + lVar22) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(int64_t *)(lVar21 + lVar22) = lVar12;
        *(int64_t *)(lVar21 + 8 + lVar22) = lVar12;
        *(uint64_t *)(lVar21 + 0x10 + lVar22) = uVar41 * 0x10 + lVar12;
      }
      else {
        if (uVar30 != 0) {
                    // WARNING: Subroutine does not return
          memset(lVar17,0,uVar30 * 0x10);
        }
        *(int64_t *)(lVar21 + 8 + lVar22) = lVar17;
      }
    }
    else {
      *(uint64_t *)(lVar21 + 8 + lVar22) = uVar28 * 0x10 + lVar24;
    }
    uVar36 = 0;
    uVar41 = uVar36;
    uVar30 = uVar36;
    uVar38 = uVar28;
    if (0 < (int64_t)uVar28) {
      do {
        lVar21 = *(int64_t *)(param_1 + 0x90);
        lVar24 = (int64_t)*(int *)(lVar21 + 8 + uVar41);
        lVar17 = (int64_t)*(int *)(lVar21 + 4 + uVar41) * 0x5c;
        if (lVar23 == -1) {
          lVar12 = *(int64_t *)(param_1 + 0x68);
          lVar40 = *(int64_t *)(param_1 + 0x18);
          lVar17 = (int64_t)*(int *)(lVar17 + lVar12);
          lVar21 = (int64_t)*(int *)((int64_t)*(int *)(lVar21 + uVar41) * 0x5c + lVar12);
          fVar48 = *(float *)(lVar40 + 8 + lVar21 * 0x10);
          fVar49 = *(float *)(lVar40 + 8 + lVar17 * 0x10) - fVar48;
          fVar5 = *(float *)(lVar40 + 4 + lVar21 * 0x10);
          fVar52 = *(float *)(lVar40 + 4 + lVar17 * 0x10);
          fVar51 = *(float *)(lVar40 + lVar21 * 0x10);
          lVar21 = (int64_t)*(int *)(lVar24 * 0x5c + lVar12);
          fVar48 = *(float *)(lVar40 + 8 + lVar21 * 0x10) - fVar48;
          fVar45 = *(float *)(lVar40 + 4 + lVar21 * 0x10);
          fVar46 = *(float *)(lVar40 + lVar17 * 0x10);
          fVar53 = *(float *)(lVar40 + lVar21 * 0x10);
        }
        else {
          lVar12 = *(int64_t *)(param_1 + 0x68);
          lVar40 = *(int64_t *)(lVar23 * 0x50 + *(int64_t *)(param_1 + 0xb0) + 8);
          lVar17 = (int64_t)*(int *)(lVar17 + lVar12);
          lVar21 = (int64_t)*(int *)((int64_t)*(int *)(lVar21 + uVar41) * 0x5c + lVar12);
          fVar48 = *(float *)(lVar40 + 8 + lVar21 * 0x10);
          fVar49 = *(float *)(lVar40 + 8 + lVar17 * 0x10) - fVar48;
          fVar5 = *(float *)(lVar40 + 4 + lVar21 * 0x10);
          fVar52 = *(float *)(lVar40 + 4 + lVar17 * 0x10);
          fVar51 = *(float *)(lVar40 + lVar21 * 0x10);
          lVar21 = (int64_t)*(int *)(lVar24 * 0x5c + lVar12);
          fVar48 = *(float *)(lVar40 + 8 + lVar21 * 0x10) - fVar48;
          fVar45 = *(float *)(lVar40 + 4 + lVar21 * 0x10);
          fVar46 = *(float *)(lVar40 + lVar17 * 0x10);
          fVar53 = *(float *)(lVar40 + lVar21 * 0x10);
        }
        fVar50 = (fVar46 - fVar51) * (fVar45 - fVar5) - (fVar52 - fVar5) * (fVar53 - fVar51);
        fVar51 = fVar49 * (fVar53 - fVar51) - fVar48 * (fVar46 - fVar51);
        fVar48 = fVar48 * (fVar52 - fVar5) - fVar49 * (fVar45 - fVar5);
        fStack_174 = SQRT(fVar51 * fVar51 + fVar48 * fVar48 + fVar50 * fVar50);
        if (fStack_174 <= 0.0) {
          fVar48 = 0.0;
          fVar51 = 0.0;
          fStack_178 = 1.0;
          fStack_174 = 1.0;
        }
        else {
          fStack_178 = 1.0 / fStack_174;
          fVar48 = fVar48 * fStack_178;
          fVar51 = fStack_178 * fVar51;
          fStack_178 = fStack_178 * fVar50;
        }
        uStack_180 = CONCAT44(fVar51,fVar48);
        pfVar18 = (float *)(*(int64_t *)(auStack_150._0_8_ + lVar22) + uVar30);
        *pfVar18 = fVar48;
        pfVar18[1] = fVar51;
        pfVar18[2] = fStack_178;
        pfVar18[3] = fStack_174;
        uVar38 = uVar38 - 1;
        uVar41 = uVar41 + 0xc;
        uVar30 = uVar30 + 0x10;
      } while (uVar38 != 0);
    }
    lVar21 = auStack_150._0_8_;
    lVar23 = lVar31;
  } while (lVar31 < (int64_t)pauStack_1e0);
  lStack_170 = 0;
  plStack_168 = (int64_t *)0x0;
  plStack_160 = (int64_t *)0x0;
  uStack_158 = 3;
  FUN_180081010(&lStack_170,(int64_t)iVar27);
  uVar41 = uVar36;
  uStackX_20 = uVar28;
  if (0 < (int64_t)uVar28) {
    do {
      lVar23 = lStack_170;
      piVar13 = (int *)0x0;
      lVar21 = *(int64_t *)(param_1 + 0x90);
      lVar31 = (uint64_t)*(uint *)(lVar21 + uVar36) * 0x20;
      piVar20 = *(int **)(lVar31 + 8 + lStack_170);
      iVar27 = (int)uVar41;
      if (piVar20 < *(int **)(lVar31 + 0x10 + lStack_170)) {
        *(int **)(lVar31 + 8 + lStack_170) = piVar20 + 1;
        *piVar20 = iVar27;
      }
      else {
        piVar15 = *(int **)(lVar31 + lStack_170);
        lVar17 = (int64_t)piVar20 - (int64_t)piVar15 >> 2;
        if (lVar17 == 0) {
          lVar17 = 1;
LAB_180079c12:
          piVar13 = (int *)FUN_18062b420(system_memory_pool_ptr,lVar17 * 4,
                                         *(int8_t *)(lVar31 + 0x18 + lStack_170));
          piVar20 = *(int **)(lVar31 + 8 + lVar23);
          piVar15 = *(int **)(lVar31 + lVar23);
        }
        else {
          lVar17 = lVar17 * 2;
          if (lVar17 != 0) goto LAB_180079c12;
        }
        if (piVar15 != piVar20) {
                    // WARNING: Subroutine does not return
          memmove(piVar13,piVar15,(int64_t)piVar20 - (int64_t)piVar15);
        }
        *piVar13 = iVar27;
        if (*(int64_t *)(lVar31 + lVar23) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(int **)(lVar31 + lVar23) = piVar13;
        *(int **)(lVar31 + 8 + lVar23) = piVar13 + 1;
        *(int **)(lVar31 + 0x10 + lVar23) = piVar13 + lVar17;
      }
      lVar23 = lStack_170;
      piVar13 = (int *)0x0;
      lVar31 = (uint64_t)*(uint *)(lVar21 + 4 + uVar36) * 0x20;
      piVar20 = *(int **)(lVar31 + 8 + lStack_170);
      if (piVar20 < *(int **)(lVar31 + 0x10 + lStack_170)) {
        *(int **)(lVar31 + 8 + lStack_170) = piVar20 + 1;
        *piVar20 = iVar27;
      }
      else {
        piVar15 = *(int **)(lVar31 + lStack_170);
        lVar17 = (int64_t)piVar20 - (int64_t)piVar15 >> 2;
        if (lVar17 == 0) {
          lVar17 = 1;
LAB_180079cd7:
          piVar13 = (int *)FUN_18062b420(system_memory_pool_ptr,lVar17 * 4,
                                         *(int8_t *)(lVar31 + 0x18 + lStack_170));
          piVar20 = *(int **)(lVar31 + 8 + lVar23);
          piVar15 = *(int **)(lVar31 + lVar23);
        }
        else {
          lVar17 = lVar17 * 2;
          if (lVar17 != 0) goto LAB_180079cd7;
        }
        if (piVar15 != piVar20) {
                    // WARNING: Subroutine does not return
          memmove(piVar13,piVar15,(int64_t)piVar20 - (int64_t)piVar15);
        }
        *piVar13 = iVar27;
        if (*(int64_t *)(lVar31 + lVar23) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(int **)(lVar31 + lVar23) = piVar13;
        *(int **)(lVar31 + 8 + lVar23) = piVar13 + 1;
        *(int **)(lVar31 + 0x10 + lVar23) = piVar13 + lVar17;
      }
      lVar23 = lStack_170;
      lVar21 = (uint64_t)*(uint *)(lVar21 + 8 + uVar36) * 0x20;
      piVar20 = *(int **)(lVar21 + 8 + lStack_170);
      if (piVar20 < *(int **)(lVar21 + 0x10 + lStack_170)) {
        *(int **)(lVar21 + 8 + lStack_170) = piVar20 + 1;
        *piVar20 = iVar27;
      }
      else {
        piVar13 = *(int **)(lVar21 + lStack_170);
        lVar31 = (int64_t)piVar20 - (int64_t)piVar13 >> 2;
        if (lVar31 == 0) {
          lVar31 = 1;
LAB_180079d9b:
          piVar15 = (int *)FUN_18062b420(system_memory_pool_ptr,lVar31 * 4,
                                         *(int8_t *)(lVar21 + 0x18 + lStack_170));
          piVar20 = *(int **)(lVar21 + 8 + lVar23);
          piVar13 = *(int **)(lVar21 + lVar23);
        }
        else {
          lVar31 = lVar31 * 2;
          if (lVar31 != 0) goto LAB_180079d9b;
          piVar15 = (int *)0x0;
        }
        if (piVar13 != piVar20) {
                    // WARNING: Subroutine does not return
          memmove(piVar15,piVar13,(int64_t)piVar20 - (int64_t)piVar13);
        }
        *piVar15 = iVar27;
        if (*(int64_t *)(lVar21 + lVar23) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(int **)(lVar21 + lVar23) = piVar15;
        *(int **)(lVar21 + 8 + lVar23) = piVar15 + 1;
        *(int **)(lVar21 + 0x10 + lVar23) = piVar15 + lVar31;
      }
      uVar36 = uVar36 + 0xc;
      uStackX_20 = uStackX_20 - 1;
      uVar41 = (uint64_t)(iVar27 + 1);
    } while (uStackX_20 != 0);
  }
  uVar19 = 0;
  uStackX_18 = 0;
  if (*piVar1 < 1) {
LAB_18007a5ac:
    FUN_180080fa0(&lStack_170);
    lVar21 = (int64_t)iStack_1e8;
    uStack_1d8 = (uint64_t)*(ushort *)(param_1 + 0xc0);
    uStackX_18 = -1;
    do {
      piStack_218 = (int *)0x0;
      piStack_210 = (int *)0x0;
      piStack_208 = (int *)0x0;
      uStack_200 = 3;
      if (lVar21 == 0) {
        FUN_180082880(0);
        piStack_210 = piStack_218;
      }
      else {
        FUN_1800824a0(&piStack_218,lVar21);
      }
      plVar39 = (int64_t *)((uStackX_18 + 1) * 0x20 + auStack_150._0_8_);
      lVar23 = 0;
      piStack_1f0 = (int *)0x0;
      if (0 < (int64_t)uVar28) {
        piStack_1f8 = (int *)0x0;
        do {
          lVar21 = 0;
          uStack_180 = *(int64_t *)(param_1 + 0x90) + (int64_t)piStack_1f8;
          uVar19 = puStack_130[(int64_t)piStack_1f0];
          if (uVar19 == 0) {
            do {
              if (uStackX_18 == -1) {
                lVar31 = (int64_t)*(int *)(uStack_180 + lVar21 * 4) * 0x5c +
                         *(int64_t *)(param_1 + 0x68);
                uVar6 = ((uint64_t *)(lVar23 + *plVar39))[1];
                *(uint64_t *)(lVar31 + 4) = *(uint64_t *)(lVar23 + *plVar39);
                *(uint64_t *)(lVar31 + 0xc) = uVar6;
                uVar6 = ((uint64_t *)(lVar23 + *plVar39))[1];
                *(uint64_t *)(lVar31 + 0x34) = *(uint64_t *)(lVar23 + *plVar39);
                *(uint64_t *)(lVar31 + 0x3c) = uVar6;
                fVar48 = *(float *)(lVar31 + 8);
                fVar52 = *(float *)(lVar31 + 4);
                fVar51 = *(float *)(lVar31 + 0xc);
                fVar45 = fVar51 * fVar51 + fVar52 * fVar52 + fVar48 * fVar48;
                auVar47 = rsqrtss(ZEXT416((uint)fVar45),ZEXT416((uint)fVar45));
                fVar46 = auVar47._0_4_;
                fVar45 = fVar46 * 0.5 * (3.0 - fVar45 * fVar46 * fVar46);
                *(float *)(lVar31 + 4) = fVar45 * fVar52;
                *(float *)(lVar31 + 8) = fVar45 * fVar48;
                *(float *)(lVar31 + 0xc) = fVar45 * fVar51;
                fVar48 = *(float *)(lVar31 + 0x38);
                fVar52 = *(float *)(lVar31 + 0x34);
                fVar51 = *(float *)(lVar31 + 0x3c);
                fVar45 = fVar51 * fVar51 + fVar52 * fVar52 + fVar48 * fVar48;
                auVar47 = rsqrtss(ZEXT416((uint)fVar45),ZEXT416((uint)fVar45));
                fVar46 = auVar47._0_4_;
                fVar45 = fVar46 * 0.5 * (3.0 - fVar45 * fVar46 * fVar46);
                *(float *)(lVar31 + 0x34) = fVar52 * fVar45;
                *(float *)(lVar31 + 0x38) = fVar48 * fVar45;
                *(float *)(lVar31 + 0x3c) = fVar51 * fVar45;
              }
              else {
                uVar6 = ((uint64_t *)(lVar23 + *plVar39))[1];
                puVar3 = (uint64_t *)
                         (*(int64_t *)(*(int64_t *)(param_1 + 0xb0) + 0x30 + uStackX_18 * 0x50) +
                         (int64_t)*(int *)(uStack_180 + lVar21 * 4) * 0x10);
                *puVar3 = *(uint64_t *)(lVar23 + *plVar39);
                puVar3[1] = uVar6;
                pfVar18 = (float *)((int64_t)*(int *)(uStack_180 + lVar21 * 4) * 0x10 +
                                   *(int64_t *)
                                    (*(int64_t *)(param_1 + 0xb0) + 0x30 + uStackX_18 * 0x50));
                fVar48 = pfVar18[1];
                fVar52 = *pfVar18;
                fVar51 = pfVar18[2];
                fVar45 = fVar51 * fVar51 + fVar52 * fVar52 + fVar48 * fVar48;
                auVar47 = rsqrtss(ZEXT416((uint)fVar45),ZEXT416((uint)fVar45));
                fVar46 = auVar47._0_4_;
                fVar45 = fVar46 * 0.5 * (3.0 - fVar45 * fVar46 * fVar46);
                *pfVar18 = fVar52 * fVar45;
                pfVar18[1] = fVar48 * fVar45;
                pfVar18[2] = fVar51 * fVar45;
              }
              lVar21 = lVar21 + 1;
            } while (lVar21 < 3);
          }
          else {
            lStack_1d0 = 0;
            do {
              piVar1 = piStack_218;
              lVar31 = 0;
              puVar32 = (uint *)((int64_t)*(int *)(uStack_180 + lStack_1d0 * 4) * 0x5c +
                                *(int64_t *)(param_1 + 0x68));
              bVar44 = false;
              lVar17 = (int64_t)
                       (int)((*(int64_t *)((int64_t)(piStack_218 + (uint64_t)*puVar32 * 8) + 8) -
                             *(int64_t *)(piStack_218 + (uint64_t)*puVar32 * 8)) / 0x14);
              lVar21 = lVar31;
              if (3 < lVar17) {
                lVar24 = (lVar17 - 4U >> 2) + 1;
                lVar21 = lVar24 * 4;
                do {
                  uVar33 = *puVar32;
                  if ((*(uint *)(*(int64_t *)(piStack_218 + (uint64_t)uVar33 * 8) + lVar31) &
                      uVar19) != 0) {
                    puVar2 = (uint *)(lVar31 + *(int64_t *)(piStack_218 + (uint64_t)uVar33 * 8));
                    *puVar2 = *puVar2 | uVar19;
                    lVar22 = *plVar39;
                    fVar48 = *(float *)(lVar23 + 8 + lVar22);
                    fVar52 = *(float *)(lVar23 + 4 + lVar22);
                    lVar12 = *(int64_t *)(piStack_218 + (uint64_t)*puVar32 * 8);
                    *(float *)(lVar12 + 4 + lVar31) =
                         *(float *)(lVar12 + 4 + lVar31) + *(float *)(lVar23 + lVar22);
                    *(float *)(lVar12 + 8 + lVar31) = fVar52 + *(float *)(lVar12 + 8 + lVar31);
                    *(float *)(lVar12 + 0xc + lVar31) = fVar48 + *(float *)(lVar12 + 0xc + lVar31);
                    bVar44 = true;
                    uVar33 = *puVar32;
                  }
                  if ((*(uint *)(*(int64_t *)(piStack_218 + (uint64_t)uVar33 * 8) + 0x14 + lVar31)
                      & uVar19) != 0) {
                    puVar2 = (uint *)(*(int64_t *)(piStack_218 + (uint64_t)uVar33 * 8) + 0x14 +
                                     lVar31);
                    *puVar2 = *puVar2 | uVar19;
                    lVar22 = *plVar39;
                    fVar48 = *(float *)(lVar23 + 8 + lVar22);
                    fVar52 = *(float *)(lVar23 + 4 + lVar22);
                    lVar12 = *(int64_t *)(piStack_218 + (uint64_t)*puVar32 * 8);
                    *(float *)(lVar12 + 0x18 + lVar31) =
                         *(float *)(lVar12 + 0x18 + lVar31) + *(float *)(lVar23 + lVar22);
                    *(float *)(lVar12 + 0x1c + lVar31) = fVar52 + *(float *)(lVar12 + 0x1c + lVar31)
                    ;
                    *(float *)(lVar12 + 0x20 + lVar31) = fVar48 + *(float *)(lVar12 + 0x20 + lVar31)
                    ;
                    bVar44 = true;
                    uVar33 = *puVar32;
                  }
                  if ((*(uint *)(*(int64_t *)(piStack_218 + (uint64_t)uVar33 * 8) + 0x28 + lVar31)
                      & uVar19) != 0) {
                    puVar2 = (uint *)(*(int64_t *)(piStack_218 + (uint64_t)uVar33 * 8) + 0x28 +
                                     lVar31);
                    *puVar2 = *puVar2 | uVar19;
                    lVar22 = *plVar39;
                    fVar48 = *(float *)(lVar23 + 8 + lVar22);
                    fVar52 = *(float *)(lVar23 + 4 + lVar22);
                    lVar12 = *(int64_t *)(piStack_218 + (uint64_t)*puVar32 * 8);
                    *(float *)(lVar12 + 0x2c + lVar31) =
                         *(float *)(lVar12 + 0x2c + lVar31) + *(float *)(lVar23 + lVar22);
                    *(float *)(lVar12 + 0x30 + lVar31) = fVar52 + *(float *)(lVar12 + 0x30 + lVar31)
                    ;
                    *(float *)(lVar12 + 0x34 + lVar31) = fVar48 + *(float *)(lVar12 + 0x34 + lVar31)
                    ;
                    bVar44 = true;
                  }
                  uVar33 = *(uint *)(lVar31 + 0x3c +
                                    *(int64_t *)(piStack_218 + (uint64_t)*puVar32 * 8));
                  if ((uVar19 & uVar33) != 0) {
                    *(uint *)(*(int64_t *)(piStack_218 + (uint64_t)*puVar32 * 8) + 0x3c + lVar31)
                         = uVar33 | uVar19;
                    lVar22 = *plVar39;
                    fVar48 = *(float *)(lVar23 + 8 + lVar22);
                    fVar52 = *(float *)(lVar23 + 4 + lVar22);
                    lVar12 = *(int64_t *)(piStack_218 + (uint64_t)*puVar32 * 8);
                    *(float *)(lVar12 + 0x40 + lVar31) =
                         *(float *)(lVar12 + 0x40 + lVar31) + *(float *)(lVar23 + lVar22);
                    *(float *)(lVar12 + 0x44 + lVar31) = fVar52 + *(float *)(lVar12 + 0x44 + lVar31)
                    ;
                    *(float *)(lVar12 + 0x48 + lVar31) = fVar48 + *(float *)(lVar12 + 0x48 + lVar31)
                    ;
                    bVar44 = true;
                  }
                  lVar31 = lVar31 + 0x50;
                  lVar24 = lVar24 + -1;
                } while (lVar24 != 0);
              }
              pauVar42 = (int8_t (*) [16])0x0;
              if (lVar21 < lVar17) {
                lVar31 = lVar21 * 0x14;
                lVar17 = lVar17 - lVar21;
                do {
                  uVar33 = *(uint *)(lVar31 + *(int64_t *)(piStack_218 + (uint64_t)*puVar32 * 8));
                  if ((uVar19 & uVar33) != 0) {
                    *(uint *)(lVar31 + *(int64_t *)(piStack_218 + (uint64_t)*puVar32 * 8)) =
                         uVar33 | uVar19;
                    lVar21 = *plVar39;
                    fVar48 = *(float *)(lVar23 + 8 + lVar21);
                    fVar52 = *(float *)(lVar23 + 4 + lVar21);
                    lVar24 = *(int64_t *)(piStack_218 + (uint64_t)*puVar32 * 8);
                    *(float *)(lVar31 + 4 + lVar24) =
                         *(float *)(lVar31 + 4 + lVar24) + *(float *)(lVar23 + lVar21);
                    *(float *)(lVar31 + 8 + lVar24) = fVar52 + *(float *)(lVar31 + 8 + lVar24);
                    *(float *)(lVar31 + 0xc + lVar24) = fVar48 + *(float *)(lVar31 + 0xc + lVar24);
                    bVar44 = true;
                  }
                  lVar31 = lVar31 + 0x14;
                  lVar17 = lVar17 + -1;
                } while (lVar17 != 0);
              }
              if (!bVar44) {
                lVar21 = *plVar39;
                uStack_1b8._4_4_ = *(int32_t *)(lVar23 + 8 + lVar21);
                uStack_1b8._0_4_ = *(int32_t *)(lVar23 + 4 + lVar21);
                uStack_1bc = *(int32_t *)(lVar23 + lVar21);
                uStack_1a0 = (int *)CONCAT44((int32_t)uStack_1b8,uStack_1bc);
                uStack_198 = (int *)CONCAT44(0x7f7fffff,uStack_1b8._4_4_);
                piStack_1b0 = (int *)CONCAT44(piStack_1b0._4_4_,0x7f7fffff);
                uVar41 = (uint64_t)*puVar32;
                pauVar37 = *(int8_t (**) [16])(piStack_218 + uVar41 * 8 + 2);
                uStack_1c0 = uVar19;
                if (pauVar37 < *(int8_t (**) [16])(piStack_218 + uVar41 * 8 + 4)) {
                  *(int8_t **)(piStack_218 + uVar41 * 8 + 2) = pauVar37[1] + 4;
                  auVar8._4_4_ = uStack_1bc;
                  auVar8._0_4_ = uVar19;
                  auVar8._8_4_ = (int32_t)uStack_1b8;
                  auVar8._12_4_ = uStack_1b8._4_4_;
                  *pauVar37 = auVar8;
                  *(int32_t *)pauVar37[1] = 0x7f7fffff;
                }
                else {
                  pauVar35 = *(int8_t (**) [16])(piStack_218 + uVar41 * 8);
                  lVar21 = ((int64_t)pauVar37 - (int64_t)pauVar35) / 0x14;
                  if (lVar21 == 0) {
                    uStackX_20 = 1;
LAB_18007ac04:
                    pauVar42 = (int8_t (*) [16])
                               FUN_18062b420(system_memory_pool_ptr,uStackX_20 * 0x14,
                                             (char)piStack_218[uVar41 * 8 + 6]);
                    pauVar37 = *(int8_t (**) [16])(piVar1 + uVar41 * 8 + 2);
                    pauVar35 = *(int8_t (**) [16])(piVar1 + uVar41 * 8);
                  }
                  else {
                    uStackX_20 = lVar21 * 2;
                    if (uStackX_20 != 0) goto LAB_18007ac04;
                  }
                  pauStack_1e0 = pauVar42;
                  if (pauVar35 != pauVar37) {
                    // WARNING: Subroutine does not return
                    memmove(pauVar42,pauVar35,(int64_t)pauVar37 - (int64_t)pauVar35);
                  }
                  auVar47._4_4_ = uStack_1bc;
                  auVar47._0_4_ = uStack_1c0;
                  auVar47._8_4_ = (int32_t)uStack_1b8;
                  auVar47._12_4_ = uStack_1b8._4_4_;
                  *pauVar42 = auVar47;
                  *(int32_t *)pauVar42[1] = piStack_1b0._0_4_;
                  if (*(int64_t *)(piVar1 + uVar41 * 8) != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  *(int8_t (**) [16])(piVar1 + uVar41 * 8) = pauVar42;
                  *(int8_t **)(piVar1 + uVar41 * 8 + 2) = pauVar42[1] + 4;
                  *(uint64_t *)(piVar1 + uVar41 * 8 + 4) = (int64_t)pauVar42 + uStackX_20 * 0x14;
                }
              }
              lStack_1d0 = lStack_1d0 + 1;
            } while (lStack_1d0 < 3);
          }
          piStack_1f0 = (int *)((int64_t)piStack_1f0 + 1);
          piStack_1f8 = piStack_1f8 + 3;
          lVar23 = lVar23 + 0x10;
        } while ((int64_t)piStack_1f0 < (int64_t)uVar28);
        lVar21 = (int64_t)iStack_1e8;
      }
      lVar17 = 0;
      lVar23 = lVar17;
      lVar31 = lVar21;
      if (0 < lVar21) {
        do {
          iVar27 = (int)((*(int64_t *)(lVar23 + 8 + (int64_t)piStack_218) -
                         *(int64_t *)(lVar23 + (int64_t)piStack_218)) / 0x14);
          lVar22 = (int64_t)iVar27;
          lVar24 = lVar17;
          if (0 < iVar27) {
            do {
              lVar12 = *(int64_t *)(lVar23 + (int64_t)piStack_218);
              fVar48 = *(float *)(lVar12 + 8 + lVar24);
              fVar52 = *(float *)(lVar12 + 4 + lVar24);
              fVar51 = *(float *)(lVar12 + 0xc + lVar24);
              fVar45 = fVar52 * fVar52 + fVar48 * fVar48 + fVar51 * fVar51;
              if (SQRT(fVar45) == 0.0) {
                *(int8_t (*) [16])(lVar12 + 4 + lVar24) = init_system_temp_memory;
              }
              else {
                auVar47 = rsqrtss(ZEXT416((uint)fVar45),ZEXT416((uint)fVar45));
                fVar46 = auVar47._0_4_;
                fVar45 = fVar46 * 0.5 * (3.0 - fVar45 * fVar46 * fVar46);
                *(float *)(lVar12 + 4 + lVar24) = fVar52 * fVar45;
                *(float *)(lVar12 + 8 + lVar24) = fVar45 * fVar48;
                *(float *)(lVar12 + 0xc + lVar24) = fVar51 * fVar45;
              }
              lVar22 = lVar22 + -1;
              lVar24 = lVar24 + 0x14;
            } while (lVar22 != 0);
          }
          lVar31 = lVar31 + -1;
          lVar23 = lVar23 + 0x20;
        } while (lVar31 != 0);
      }
      lVar23 = lVar17;
      if (0 < (int64_t)uVar28) {
        do {
          uVar19 = puStack_130[lVar23];
          if (uVar19 != 0) {
            lVar21 = *(int64_t *)(param_1 + 0x90);
            lVar12 = (int64_t)*(int *)(lVar17 + lVar21) * 0x5c;
            lVar22 = (int64_t)*(int *)(*(int64_t *)(param_1 + 0x68) + lVar12);
            lVar24 = 0;
            iVar27 = (int)((*(int64_t *)(piStack_218 + lVar22 * 8 + 2) -
                           *(int64_t *)(piStack_218 + lVar22 * 8)) / 0x14);
            lVar31 = -1;
            if (0 < iVar27) {
              puVar32 = *(uint **)(piStack_218 + lVar22 * 8);
              do {
                lVar31 = lVar24;
                if ((*puVar32 & uVar19) != 0) break;
                lVar24 = lVar24 + 1;
                puVar32 = puVar32 + 5;
                lVar31 = -1;
              } while (lVar24 < iVar27);
            }
            lVar24 = *(int64_t *)(piStack_218 + lVar22 * 8);
            puVar3 = (uint64_t *)(lVar24 + 4 + lVar31 * 0x14);
            uVar6 = *puVar3;
            uVar7 = puVar3[1];
            if (uStackX_18 == -1) {
              puVar3 = (uint64_t *)(*(int64_t *)(param_1 + 0x68) + 4 + lVar12);
              *puVar3 = uVar6;
              puVar3[1] = uVar7;
              puVar3 = (uint64_t *)(lVar24 + 4 + lVar31 * 0x14);
              uVar6 = puVar3[1];
              puVar4 = (uint64_t *)
                       ((int64_t)*(int *)(lVar17 + lVar21) * 0x5c + 0x34 +
                       *(int64_t *)(param_1 + 0x68));
              *puVar4 = *puVar3;
              puVar4[1] = uVar6;
            }
            else {
              puVar3 = (uint64_t *)
                       (*(int64_t *)(*(int64_t *)(param_1 + 0xb0) + 0x30 + uStackX_18 * 0x50) +
                       (int64_t)*(int *)(lVar17 + lVar21) * 0x10);
              *puVar3 = uVar6;
              puVar3[1] = uVar7;
            }
            lVar40 = (int64_t)*(int *)(lVar17 + 4 + lVar21);
            lVar12 = lVar40 * 0x5c;
            lVar22 = (int64_t)*(int *)(*(int64_t *)(param_1 + 0x68) + lVar12);
            lVar24 = 0;
            iVar27 = (int)((*(int64_t *)(piStack_218 + lVar22 * 8 + 2) -
                           *(int64_t *)(piStack_218 + lVar22 * 8)) / 0x14);
            lVar31 = -1;
            if (0 < iVar27) {
              puVar32 = *(uint **)(piStack_218 + lVar22 * 8);
              do {
                lVar31 = lVar24;
                if ((*puVar32 & uVar19) != 0) break;
                lVar24 = lVar24 + 1;
                puVar32 = puVar32 + 5;
                lVar31 = -1;
              } while (lVar24 < iVar27);
            }
            lVar24 = *(int64_t *)(piStack_218 + lVar22 * 8);
            puVar3 = (uint64_t *)(lVar24 + 4 + lVar31 * 0x14);
            uVar6 = *puVar3;
            uVar7 = puVar3[1];
            if (uStackX_18 == -1) {
              puVar3 = (uint64_t *)(*(int64_t *)(param_1 + 0x68) + 4 + lVar12);
              *puVar3 = uVar6;
              puVar3[1] = uVar7;
              puVar3 = (uint64_t *)(lVar24 + 4 + lVar31 * 0x14);
              uVar6 = puVar3[1];
              puVar4 = (uint64_t *)
                       ((int64_t)*(int *)(lVar17 + 4 + lVar21) * 0x5c + 0x34 +
                       *(int64_t *)(param_1 + 0x68));
              *puVar4 = *puVar3;
              puVar4[1] = uVar6;
            }
            else {
              puVar3 = (uint64_t *)
                       (*(int64_t *)(*(int64_t *)(param_1 + 0xb0) + 0x30 + uStackX_18 * 0x50) +
                       lVar40 * 0x10);
              *puVar3 = uVar6;
              puVar3[1] = uVar7;
            }
            lVar40 = (int64_t)*(int *)(lVar17 + 8 + lVar21);
            lVar43 = lVar40 * 0x5c;
            lVar12 = (int64_t)*(int *)(lVar43 + *(int64_t *)(param_1 + 0x68));
            lVar24 = 0;
            lVar22 = (int64_t)
                     (int)((*(int64_t *)(piStack_218 + lVar12 * 8 + 2) -
                           *(int64_t *)(piStack_218 + lVar12 * 8)) / 0x14);
            lVar31 = -1;
            if (0 < lVar22) {
              puVar32 = *(uint **)(piStack_218 + lVar12 * 8);
              do {
                lVar31 = lVar24;
                if ((*puVar32 & uVar19) != 0) break;
                lVar24 = lVar24 + 1;
                puVar32 = puVar32 + 5;
                lVar31 = -1;
              } while (lVar24 < lVar22);
            }
            lVar24 = *(int64_t *)(piStack_218 + lVar12 * 8);
            auVar47 = *(int8_t (*) [16])(lVar24 + 4 + lVar31 * 0x14);
            if (uStackX_18 == -1) {
              *(int8_t (*) [16])(lVar43 + 4 + *(int64_t *)(param_1 + 0x68)) = auVar47;
              puVar3 = (uint64_t *)(lVar24 + 4 + lVar31 * 0x14);
              uVar6 = puVar3[1];
              puVar4 = (uint64_t *)
                       ((int64_t)*(int *)(lVar17 + 8 + lVar21) * 0x5c + 0x34 +
                       *(int64_t *)(param_1 + 0x68));
              *puVar4 = *puVar3;
              puVar4[1] = uVar6;
            }
            else {
              *(int8_t (*) [16])
               (*(int64_t *)(*(int64_t *)(param_1 + 0xb0) + 0x30 + uStackX_18 * 0x50) +
               lVar40 * 0x10) = auVar47;
            }
          }
          lVar23 = lVar23 + 1;
          lVar17 = lVar17 + 0xc;
        } while (lVar23 < (int64_t)uVar28);
        lVar21 = (int64_t)iStack_1e8;
      }
      FUN_1800810b0(&piStack_218);
      uStackX_18 = uStackX_18 + 1;
      if ((int64_t)uStack_1d8 <= (int64_t)uStackX_18) {
        FUN_180080fa0(auStack_150);
        if (puStack_130 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puStack_130);
        }
        return;
      }
    } while( true );
  }
  lStack_1d0 = 0;
LAB_180079e40:
  pauVar42 = (int8_t (*) [16])(lStack_1d0 * 0x20);
  piVar20 = *(int **)(*pauVar42 + lStack_170);
  uVar41 = *(int64_t *)(*pauVar42 + lStack_170 + 8) - (int64_t)piVar20 >> 2;
  pauStack_1e0 = pauVar42;
  if (1 < uVar41) {
    bVar44 = true;
    uStack_1c8 = puStack_130[*piVar20];
    iVar27 = 1;
    uVar19 = uStack_1c8;
    piVar13 = piVar20;
    do {
      piVar13 = piVar13 + 1;
      if ((uVar19 & puStack_130[*piVar13]) == 0) {
        bVar44 = false;
        break;
      }
      uVar19 = uVar19 | puStack_130[*piVar13];
      iVar27 = iVar27 + 1;
    } while ((uint64_t)(int64_t)iVar27 < uVar41);
    uVar19 = (uint)uStackX_18;
    if (!bVar44) {
      uStack_1a0 = (int *)0x0;
      uStack_198 = (int *)0x0;
      piStack_190 = (int *)0x0;
      uStack_188 = 3;
      piVar14 = (int *)FUN_18062b420(system_memory_pool_ptr,4,CONCAT71((uint7)(uint3)(uStackX_18 >> 8),3));
      *piVar14 = *piVar20;
      piVar20 = piVar14 + 1;
      piStack_218 = (int *)0x0;
      piStack_210 = (int *)0x0;
      piVar13 = (int *)0x0;
      piStack_208 = (int *)0x0;
      uStack_200 = 3;
      iStackX_10 = 1;
      piStack_1f8 = *(int **)(*pauVar42 + lStack_170);
      piVar15 = piVar20;
      uStack_1a0 = piVar14;
      uStack_198 = piVar20;
      piStack_190 = piVar20;
      if (1 < (uint64_t)(*(int64_t *)(*pauVar42 + lStack_170 + 8) - (int64_t)piStack_1f8 >> 2)) {
        uStackX_20 = 4;
        piVar25 = (int *)0x0;
        do {
          piVar26 = piStack_210;
          piVar16 = (int *)0x0;
          if (piStack_210 < piVar13) {
            *piStack_210 = *(int *)(uStackX_20 + (int64_t)piStack_1f8);
            piVar16 = piVar25;
          }
          else {
            uStack_1d8 = (int64_t)piStack_210 - (int64_t)piVar25;
            if ((int64_t)uStack_1d8 >> 2 == 0) {
              piStack_1f0 = (int *)0x1;
LAB_180079fb3:
              piVar16 = (int *)FUN_18062b420(system_memory_pool_ptr,(int64_t)piStack_1f0 * 4,
                                             CONCAT71((int7)(uStackX_20 >> 8),3));
            }
            else {
              piStack_1f0 = (int *)(((int64_t)uStack_1d8 >> 2) * 2);
              if (piStack_1f0 != (int *)0x0) goto LAB_180079fb3;
            }
            if (piVar25 != piVar26) {
                    // WARNING: Subroutine does not return
              memmove(piVar16,piVar25,uStack_1d8);
            }
            *piVar16 = *(int *)(uStackX_20 + (int64_t)piStack_1f8);
            if (piVar25 != (int *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(piVar25);
            }
            piVar13 = piVar16 + (int64_t)piStack_1f0;
            pauVar42 = pauStack_1e0;
            piStack_218 = piVar16;
            piStack_208 = piVar13;
            piStack_210 = piVar16;
          }
          piStack_210 = piStack_210 + 1;
          iStackX_10 = iStackX_10 + 1;
          uStackX_20 = uStackX_20 + 4;
          piStack_1f8 = *(int **)(*pauVar42 + lStack_170);
          piVar25 = piVar16;
        } while ((uint64_t)(int64_t)iStackX_10 <
                 (uint64_t)(*(int64_t *)(*pauVar42 + lStack_170 + 8) - (int64_t)piStack_1f8 >> 2)
                );
      }
      do {
        piVar13 = (int *)0x0;
        uStack_1c0 = 0;
        uStack_1bc = 0;
        uStack_1b8 = (int *)0x0;
        piStack_1b0 = (int *)0x0;
        uStack_1a8 = 3;
        bVar44 = false;
        bVar9 = false;
        uVar33 = 0;
        uStack_180 = (int64_t)piStack_210 - (int64_t)piStack_218 >> 2;
        piVar26 = (int *)0x0;
        piVar25 = (int *)0x0;
        piVar16 = piVar25;
        piVar34 = piVar13;
        piVar10 = piStack_218;
        piStack_1f8 = piStack_210;
        if (uStack_180 != 0) {
          do {
            piStack_1f0 = piVar10;
            piVar16 = (int *)0x0;
            iVar27 = *piStack_1f0;
            if ((uStack_1c8 & puStack_130[iVar27]) == 0) {
              if (piVar26 < piVar13) {
                *piVar26 = iVar27;
                piVar16 = piVar25;
                uVar33 = (uint)piVar34;
              }
              else {
                uStack_1d8 = (int64_t)piVar26 - (int64_t)piVar25;
                if ((int64_t)uStack_1d8 >> 2 == 0) {
                  lVar21 = 1;
LAB_18007a203:
                  piVar16 = (int *)FUN_18062b420(system_memory_pool_ptr,lVar21 * 4,3);
                }
                else {
                  lVar21 = ((int64_t)uStack_1d8 >> 2) * 2;
                  if (lVar21 != 0) goto LAB_18007a203;
                }
                if (piVar25 != piVar26) {
                    // WARNING: Subroutine does not return
                  memmove(piVar16,piVar25,uStack_1d8);
                }
                *piVar16 = *piStack_1f0;
                if (piVar25 != (int *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900(piVar25);
                }
                uStack_1c0 = (uint)piVar16;
                uStack_1bc = (int32_t)((uint64_t)piVar16 >> 0x20);
                piVar13 = piVar16 + lVar21;
                piStack_1b0 = piVar13;
                piVar26 = piVar16;
              }
              piVar26 = piVar26 + 1;
              uStack_1b8 = piVar26;
              bVar44 = bVar9;
            }
            else {
              uStack_1c8 = uStack_1c8 | puStack_130[iVar27];
              if (piVar20 < piVar15) {
                uStack_198 = piVar20 + 1;
                *piVar20 = iVar27;
                piVar20 = uStack_198;
                piVar16 = piVar25;
                uVar33 = (uint)piVar34;
                bVar44 = true;
              }
              else {
                uStack_1d8 = (int64_t)piVar20 - (int64_t)piVar14;
                if ((int64_t)uStack_1d8 >> 2 == 0) {
                  lVar21 = 1;
LAB_18007a142:
                  piVar15 = (int *)FUN_18062b420(system_memory_pool_ptr,lVar21 * 4,3);
                }
                else {
                  lVar21 = ((int64_t)uStack_1d8 >> 2) * 2;
                  piVar15 = piVar16;
                  if (lVar21 != 0) goto LAB_18007a142;
                }
                if (piVar14 != piVar20) {
                    // WARNING: Subroutine does not return
                  memmove(piVar15,piVar14,uStack_1d8);
                }
                *piVar15 = *piStack_1f0;
                piVar20 = piVar15 + 1;
                if (piVar14 != (int *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900(piVar14);
                }
                piStack_190 = piVar15 + lVar21;
                piVar16 = piVar25;
                piVar13 = piStack_1b0;
                piVar14 = piVar15;
                uStack_1a0 = piVar15;
                uStack_198 = piVar20;
                bVar44 = true;
              }
            }
            uVar33 = uVar33 + 1;
            piStack_1f0 = piStack_1f0 + 1;
            piVar25 = piVar16;
            piVar34 = (int *)(uint64_t)uVar33;
            piVar10 = piStack_1f0;
            piVar15 = piStack_190;
            bVar9 = bVar44;
          } while ((uint64_t)(int64_t)(int)uVar33 < uStack_180);
        }
        plVar39 = plStack_168;
        uStack_1c0 = (uint)piStack_218;
        uStack_1bc = (int32_t)((uint64_t)piStack_218 >> 0x20);
        uStack_1b8._0_4_ = SUB84(piStack_1f8,0);
        uStack_1b8._4_4_ = (int32_t)((uint64_t)piStack_1f8 >> 0x20);
        piStack_1b0 = piStack_208;
        uStack_200 = 3;
        uStack_1a8 = 3;
        piStack_210 = piVar26;
        piStack_208 = piVar13;
        piStack_1f8 = piVar26;
        if ((((int64_t)piVar26 - (int64_t)piVar16 & 0xfffffffffffffffcU) == 0) || (!bVar44))
        goto LAB_18007a312;
        bVar44 = piStack_218 != (int *)0x0;
        piStack_218 = piVar16;
        if (bVar44) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      } while( true );
    }
  }
  goto LAB_18007a58b;
LAB_18007a312:
  if (piStack_218 != (int *)0x0) {
    piStack_218 = piVar16;
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  piVar13 = *(int **)(*pauStack_1e0 + lStack_170);
  piStack_218 = piVar16;
  if (((*(int64_t *)(*pauStack_1e0 + lStack_170 + 8) - (int64_t)piVar13 ^
       (int64_t)piVar20 - (int64_t)piVar14) & 0xfffffffffffffffcU) != 0) {
    *(int **)(*pauStack_1e0 + lStack_170) = piVar14;
    uStack_198 = *(int **)(*pauStack_1e0 + lStack_170 + 8);
    *(int **)(*pauStack_1e0 + lStack_170 + 8) = piVar20;
    piStack_190 = *(int **)(pauStack_1e0[1] + lStack_170);
    *(int **)(pauStack_1e0[1] + lStack_170) = piVar15;
    uStack_188 = *(int32_t *)(pauStack_1e0[1] + lStack_170 + 8);
    *(int32_t *)(pauStack_1e0[1] + lStack_170 + 8) = 3;
    uStack_1a0 = piVar13;
    if (plStack_168 < plStack_160) {
      uVar41 = (int64_t)piVar26 - (int64_t)piVar16;
      *(int32_t *)(plStack_168 + 3) = 3;
      if (uVar41 < 4) {
        lVar21 = 0;
        plStack_168 = plStack_168 + 4;
      }
      else {
        plStack_168 = plStack_168 + 4;
        lVar21 = FUN_18062b420(system_memory_pool_ptr,((int64_t)uVar41 >> 2) * 4,3);
      }
      *plVar39 = lVar21;
      plVar39[1] = lVar21;
      plVar39[2] = lVar21 + ((int64_t)uVar41 >> 2) * 4;
      if (piVar16 != piVar26) {
                    // WARNING: Subroutine does not return
        memmove(*plVar39,piVar16,uVar41);
      }
      plVar39[1] = *plVar39;
    }
    else {
      FUN_1800826b0(&lStack_170,&piStack_218);
      piVar26 = piStack_210;
      piVar16 = piStack_218;
    }
    lVar23 = lStack_1d0;
    iVar27 = *piVar1;
    lVar31 = lStack_1d0 * 0x5c;
    lVar21 = *(int64_t *)(param_1 + 0x68);
    uStack_108 = *(uint64_t *)(lVar31 + lVar21);
    uStack_100 = ((uint64_t *)(lVar31 + lVar21))[1];
    puVar3 = (uint64_t *)(lVar31 + 0x10 + lVar21);
    uStack_f8 = *puVar3;
    uStack_f0 = puVar3[1];
    puVar3 = (uint64_t *)(lVar31 + 0x20 + lVar21);
    uStack_e8 = *puVar3;
    uStack_e0 = puVar3[1];
    puVar3 = (uint64_t *)(lVar31 + 0x30 + lVar21);
    uStack_d8 = *puVar3;
    uStack_d0 = puVar3[1];
    puVar3 = (uint64_t *)(lVar31 + 0x40 + lVar21);
    uStack_c8 = *puVar3;
    uStack_c0 = puVar3[1];
    uStack_b8 = *(uint64_t *)(lVar31 + 0x50 + lVar21);
    uStack_b0 = *(int32_t *)(lVar31 + 0x58 + lVar21);
    FUN_180080c10(piVar1,&uStack_108);
    uVar38 = (int64_t)piVar26 - (int64_t)piVar16 >> 2;
    uVar30 = 0;
    piVar20 = piVar16;
    uVar41 = uVar30;
    if (uVar38 != 0) {
      do {
        lVar31 = (int64_t)*piVar20;
        lVar21 = *(int64_t *)(param_1 + 0x90);
        if (*(uint *)(lVar21 + lVar31 * 0xc) == (uint)uStackX_18) {
          *(int *)(lVar21 + lVar31 * 0xc) = iVar27;
        }
        if (*(uint *)(lVar21 + 4 + lVar31 * 0xc) == (uint)uStackX_18) {
          *(int *)(lVar21 + 4 + lVar31 * 0xc) = iVar27;
        }
        if (*(uint *)(lVar21 + 8 + lVar31 * 0xc) == (uint)uStackX_18) {
          *(int *)(lVar21 + 8 + lVar31 * 0xc) = iVar27;
        }
        uVar33 = (int)uVar41 + 1;
        piVar20 = piVar20 + 1;
        uVar41 = (uint64_t)uVar33;
      } while ((uint64_t)(int64_t)(int)uVar33 < uVar38);
    }
    uVar41 = uVar30;
    piVar14 = piVar13;
    if (*(short *)(param_1 + 0xc0) != 0) {
      do {
        lVar21 = uVar30 + *(int64_t *)(param_1 + 0xb0);
        lVar31 = *(int64_t *)(uVar30 + 0x30 + *(int64_t *)(param_1 + 0xb0));
        puVar3 = (uint64_t *)(lVar31 + lVar23 * 0x10);
        uVar6 = *puVar3;
        uVar7 = puVar3[1];
        iVar27 = *(int *)(lVar21 + 0x2c);
        iVar11 = *(int *)(lVar21 + 0x28);
        if (iVar27 <= iVar11) {
          if (iVar27 < 2) {
            *(int32_t *)(lVar21 + 0x2c) = 8;
          }
          else {
            *(int *)(lVar21 + 0x2c) = (iVar27 >> 1) + iVar27;
          }
          FUN_1800846d0(lVar21 + 0x28);
          iVar11 = *(int *)(lVar21 + 0x28);
          lVar31 = *(int64_t *)(lVar21 + 0x30);
        }
        puVar3 = (uint64_t *)(lVar31 + (int64_t)iVar11 * 0x10);
        *puVar3 = uVar6;
        puVar3[1] = uVar7;
        *(int *)(lVar21 + 0x28) = *(int *)(lVar21 + 0x28) + 1;
        uVar33 = (int)uVar41 + 1;
        uVar30 = uVar30 + 0x50;
        uVar41 = (uint64_t)uVar33;
      } while ((int)uVar33 < (int)(uint)*(ushort *)(param_1 + 0xc0));
    }
  }
  if (piVar16 != (int *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(piVar16);
  }
  if (piVar14 != (int *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(piVar14);
  }
LAB_18007a58b:
  uVar19 = uVar19 + 1;
  uStackX_18 = (uint64_t)uVar19;
  lStack_1d0 = lStack_1d0 + 1;
  if (*piVar1 <= (int)uVar19) goto LAB_18007a5ac;
  goto LAB_180079e40;
}







