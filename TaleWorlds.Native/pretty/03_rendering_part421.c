#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part421.c - 1 个函数

// 函数: void FUN_18049a360(int64_t param_1,char *param_2,int64_t param_3)
void FUN_18049a360(int64_t param_1,char *param_2,int64_t param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  ushort uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int8_t auVar6 [16];
  double dVar7;
  float fVar8;
  uint64_t uVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  char cVar15;
  uint uVar16;
  int64_t lVar17;
  uint64_t uVar18;
  float *pfVar19;
  int64_t lVar20;
  int64_t lVar21;
  int iVar22;
  int64_t lVar23;
  int64_t lVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int64_t lVar29;
  int64_t lVar30;
  float fVar31;
  float fVar32;
  float fVar36;
  float fVar37;
  int8_t auVar33 [16];
  int8_t auVar34 [16];
  int8_t auVar35 [16];
  float fVar38;
  float fVar40;
  float fVar41;
  int8_t auVar39 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  int8_t auStack_1c8 [32];
  int iStack_1a8;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  int64_t lStack_178;
  int64_t lStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  char *pcStack_150;
  int64_t lStack_148;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  int8_t auStack_118 [16];
  float afStack_108 [8];
  uint64_t uStack_e8;
  
  uStack_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1c8;
  lVar17 = (int64_t)*param_2;
  lVar4 = *(int64_t *)(param_1 + 8);
  lVar30 = *(int64_t *)(param_2 + 8);
  iStack_1a8 = 0;
  lStack_170 = param_3;
  pcStack_150 = param_2;
  lStack_148 = param_1;
  if (*(int64_t *)(param_2 + 0x10) - lVar30 >> 2 != 0) {
    lStack_178 = 0;
    do {
      cVar15 = *pcStack_150;
      iVar26 = *(int *)(lStack_178 + lVar30);
      fStack_198 = 1.0;
      fStack_194 = 0.0;
      fStack_190 = 0.0;
      fStack_18c = 0.0;
      fStack_188 = 0.0;
      fStack_184 = 0.0;
      fStack_180 = 0.0;
      fStack_17c = 1.0;
      if (-1 < cVar15) {
        lVar30 = *(int64_t *)(lStack_148 + 8);
        lVar20 = *(int64_t *)(lStack_170 + 0x140);
        fVar50 = (float)iVar26;
        fStack_15c = 3.4028235e+38;
        lVar21 = lStack_170;
        do {
          fVar45 = fStack_18c;
          fVar13 = fStack_190;
          fVar12 = fStack_194;
          fVar11 = fStack_198;
          lVar29 = (int64_t)cVar15;
          uVar3 = *(ushort *)(lVar30 + 0x10 + lVar29 * 0x48);
          pfVar19 = *(float **)(lVar30 + 8 + lVar29 * 0x48);
          iVar27 = uVar3 - 1;
          if (fVar50 < pfVar19[(uint64_t)uVar3 - 1]) {
            if (*pfVar19 <= fVar50) {
              if (((int)*pfVar19 == 0) && ((int)pfVar19[(uint64_t)uVar3 - 1] == iVar27)) {
                iVar25 = (int)fVar50;
                fVar49 = fVar50 - pfVar19[iVar25];
              }
              else {
                iVar25 = 0;
                if (0 < (int)(uVar3 - 2)) {
                  do {
                    iVar22 = iVar27 + iVar25 >> 1;
                    iVar14 = iVar22;
                    if (pfVar19[iVar22] <= fVar50) {
                      iVar14 = iVar27;
                      iVar25 = iVar22;
                    }
                    iVar27 = iVar14;
                  } while (iVar25 < iVar27 + -1);
                }
                fVar49 = (fVar50 - pfVar19[iVar25]) /
                         (pfVar19[(int64_t)iVar25 + 1] - pfVar19[iVar25]);
              }
            }
            else {
              fVar49 = 0.0;
              iVar25 = 0;
            }
          }
          else {
            fVar49 = 1.0;
            iVar25 = uVar3 - 2;
          }
          lVar23 = (int64_t)iVar25;
          if ((fVar50 - pfVar19[lVar23] <= -0.001) || (0.001 <= fVar50 - pfVar19[lVar23])) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          lVar5 = *(int64_t *)(lVar30 + lVar29 * 0x48);
          if (bVar10) {
            pfVar19 = (float *)(lVar5 + lVar23 * 0x10);
            fVar46 = *pfVar19;
            fVar47 = pfVar19[1];
            fVar48 = pfVar19[2];
            fVar49 = pfVar19[3];
          }
          else {
            lVar24 = lVar23 + 1;
            if (0.001 <= fVar49) {
              if (fVar49 <= 0.999) {
                pfVar19 = (float *)(lVar5 + lVar23 * 0x10);
                fVar46 = *pfVar19;
                fVar47 = pfVar19[1];
                fVar48 = pfVar19[2];
                fVar38 = pfVar19[3];
                pfVar19 = (float *)(lVar5 + lVar24 * 0x10);
                fVar36 = pfVar19[2] * fVar48;
                fVar37 = pfVar19[3] * fVar38;
                afStack_108[4] = -1.0;
                afStack_108[5] = -1.0;
                afStack_108[6] = -1.0;
                afStack_108[7] = -1.0;
                auVar35._0_4_ = fVar36 + *pfVar19 * fVar46;
                auVar35._4_4_ = fVar37 + pfVar19[1] * fVar47;
                auVar35._8_4_ = fVar36 + fVar36;
                auVar35._12_4_ = fVar37 + fVar37;
                auVar39._4_12_ = auVar35._4_12_;
                auVar39._0_4_ = auVar35._0_4_ + auVar35._4_4_;
                afStack_108[0] = 1.0;
                afStack_108[1] = 1.0;
                afStack_108[2] = 1.0;
                afStack_108[3] = 1.0;
                uVar28 = movmskps(iVar25 * 2,auVar39);
                uVar18 = (uint64_t)(uVar28 & 1);
                fVar36 = afStack_108[uVar18 * 4];
                fVar37 = afStack_108[uVar18 * 4 + 1];
                fVar40 = afStack_108[uVar18 * 4 + 2];
                fVar41 = afStack_108[uVar18 * 4 + 3];
                pfVar19 = (float *)(lVar5 + lVar24 * 0x10);
                fVar42 = *pfVar19;
                fVar43 = pfVar19[1];
                fVar44 = pfVar19[2];
                fVar8 = pfVar19[3];
                if (0.9995 < ABS(auVar39._0_4_)) {
                  fVar31 = 1.0 - fVar49;
                  fVar46 = fVar31 * fVar46 + fVar49 * fVar36 * fVar42;
                  fVar47 = fVar31 * fVar47 + fVar49 * fVar37 * fVar43;
                  fVar48 = fVar31 * fVar48 + fVar49 * fVar40 * fVar44;
                  fVar49 = fVar31 * fVar38 + fVar49 * fVar41 * fVar8;
                  fVar38 = fVar49 * fVar49 + fVar46 * fVar46;
                  fVar36 = fVar48 * fVar48 + fVar47 * fVar47;
                  fVar43 = fVar38 + fVar47 * fVar47 + fVar48 * fVar48;
                  fVar44 = fVar36 + fVar46 * fVar46 + fVar49 * fVar49;
                  auVar33._0_4_ = fVar36 + fVar38 + 1.1754944e-38;
                  auVar33._4_4_ = fVar38 + fVar36 + 1.1754944e-38;
                  auVar33._8_4_ = fVar43 + 1.1754944e-38;
                  auVar33._12_4_ = fVar44 + 1.1754944e-38;
                  auVar35 = rsqrtps(auVar39,auVar33);
                  fVar37 = auVar35._0_4_;
                  fVar40 = auVar35._4_4_;
                  fVar41 = auVar35._8_4_;
                  fVar42 = auVar35._12_4_;
                  fVar46 = fVar46 * (3.0 - fVar37 * fVar37 * (fVar36 + fVar38)) * fVar37 * 0.5;
                  fVar47 = fVar47 * (3.0 - fVar40 * fVar40 * (fVar38 + fVar36)) * fVar40 * 0.5;
                  fVar48 = fVar48 * (3.0 - fVar41 * fVar41 * fVar43) * fVar41 * 0.5;
                  fVar49 = fVar49 * (3.0 - fVar42 * fVar42 * fVar44) * fVar42 * 0.5;
                }
                else {
                  acosf();
                  fVar49 = (float)sinf();
                  fVar31 = (float)sinf();
                  fVar31 = fVar31 * (1.0 / fVar49);
                  fVar32 = (float)sinf();
                  fVar32 = fVar32 * (1.0 / fVar49);
                  fVar46 = fVar31 * fVar46 + fVar32 * fVar36 * fVar42;
                  fVar47 = fVar31 * fVar47 + fVar32 * fVar37 * fVar43;
                  fVar48 = fVar31 * fVar48 + fVar32 * fVar40 * fVar44;
                  fVar49 = fVar31 * fVar38 + fVar32 * fVar41 * fVar8;
                  lVar21 = lStack_170;
                }
              }
              else {
                pfVar19 = (float *)(lVar5 + lVar24 * 0x10);
                fVar46 = *pfVar19;
                fVar47 = pfVar19[1];
                fVar48 = pfVar19[2];
                fVar49 = pfVar19[3];
              }
            }
            else {
              pfVar19 = (float *)(lVar5 + lVar23 * 0x10);
              fVar46 = *pfVar19;
              fVar47 = pfVar19[1];
              fVar48 = pfVar19[2];
              fVar49 = pfVar19[3];
            }
          }
          pfVar19 = (float *)(lVar29 * 0x1b0 + 0x80 + lVar20);
          fVar38 = *pfVar19;
          fVar36 = pfVar19[1];
          fVar37 = pfVar19[2];
          fStack_11c = pfVar19[3];
          fStack_138 = fVar46;
          fStack_134 = fVar47;
          fStack_130 = fVar48;
          fStack_12c = fVar49;
          fStack_128 = fVar38;
          fStack_124 = fVar36;
          fStack_120 = fVar37;
          pfVar19 = (float *)FUN_1801c0fb0(&fStack_138,auStack_118,&fStack_188);
          fStack_17c = fStack_15c;
          fStack_188 = fVar38 + *pfVar19;
          fStack_184 = fVar36 + pfVar19[1];
          fStack_180 = fVar37 + pfVar19[2];
          cVar15 = *(char *)(lVar29 + 0x100 + lVar21);
          fStack_194 = fVar48 * fVar45 * 1.0 + fVar46 * fVar12 * 1.0 +
                       (fVar11 * fVar47 - fVar49 * fVar13);
          fStack_190 = fVar49 * fVar12 * 1.0 + fVar46 * fVar13 * 1.0 +
                       (fVar11 * fVar48 - fVar47 * fVar45);
          fStack_18c = fVar47 * fVar13 * 1.0 + fVar46 * fVar45 * 1.0 +
                       (fVar11 * fVar49 - fVar48 * fVar12);
          fStack_198 = fVar49 * fVar45 * -1.0 + fVar48 * fVar13 * -1.0 +
                       (fVar11 * fVar46 - fVar47 * fVar12);
          fStack_168 = fStack_188;
          fStack_164 = fStack_184;
          fStack_160 = fStack_180;
        } while (-1 < cVar15);
      }
      fVar13 = fStack_17c;
      fVar12 = fStack_180;
      fVar11 = fStack_184;
      fVar50 = fStack_188;
      auVar34._0_8_ = (double)fStack_190 * (double)fStack_190;
      auVar34._8_8_ = 0;
      dVar7 = (double)fStack_194 * (double)fStack_194 + auVar34._0_8_ +
              (double)fStack_18c * (double)fStack_18c + (double)fStack_198 * (double)fStack_198;
      if (dVar7 <= 1e-07) {
        fStack_194 = 0.0;
        fStack_190 = 0.0;
        fStack_18c = 0.0;
        fStack_198 = 1.0;
      }
      else {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = dVar7;
        auVar35 = sqrtpd(auVar34,auVar6);
        dVar7 = 1.0 / auVar35._0_8_;
        fStack_194 = (float)((double)fStack_194 * dVar7);
        fStack_190 = (float)((double)fStack_190 * dVar7);
        fStack_18c = (float)((double)fStack_18c * dVar7);
        fStack_198 = (float)((double)fStack_198 * dVar7);
      }
      uVar3 = *(ushort *)(lVar4 + 0x34 + lVar17 * 0x48);
      iVar27 = 0;
      lVar30 = 0;
      fVar45 = (float)iVar26;
      if (uVar3 != 0) {
        pfVar19 = *(float **)(lVar4 + 0x2c + lVar17 * 0x48);
        do {
          if (fVar45 < *pfVar19) break;
          iVar27 = iVar27 + 1;
          lVar30 = lVar30 + 1;
          pfVar19 = pfVar19 + 1;
        } while (iVar27 < (int)(uint)uVar3);
      }
      uVar28 = uVar3 + 1;
      lVar20 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)uVar28 * 4,4);
      lVar21 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)uVar28 << 4,4);
      if (0 < lVar30) {
        lVar29 = 0;
        lVar23 = lVar30;
        do {
          puVar1 = (uint64_t *)(lVar29 + *(int64_t *)(lVar4 + 0x24 + lVar17 * 0x48));
          uVar9 = puVar1[1];
          *(uint64_t *)(lVar29 + lVar21) = *puVar1;
          ((uint64_t *)(lVar29 + lVar21))[1] = uVar9;
          lVar23 = lVar23 + -1;
          lVar29 = lVar29 + 0x10;
        } while (lVar23 != 0);
      }
      if (iVar27 < (int)(uint)*(ushort *)(lVar4 + 0x34 + lVar17 * 0x48)) {
        lVar29 = lVar30 << 4;
        iVar26 = iVar27;
        do {
          iVar26 = iVar26 + 1;
          puVar2 = (uint64_t *)(lVar29 + *(int64_t *)(lVar4 + 0x24 + lVar17 * 0x48));
          uVar9 = puVar2[1];
          puVar1 = (uint64_t *)(lVar21 + lVar29 + 0x10);
          *puVar1 = *puVar2;
          puVar1[1] = uVar9;
          lVar29 = lVar29 + 0x10;
        } while (iVar26 < (int)(uint)*(ushort *)(lVar4 + 0x34 + lVar17 * 0x48));
      }
      puVar1 = (uint64_t *)(lVar21 + lVar30 * 0x10);
      *puVar1 = CONCAT44(fStack_194,fStack_198);
      puVar1[1] = CONCAT44(fStack_18c,fStack_190);
      if (0 < iVar27) {
                    // WARNING: Subroutine does not return
        memcpy(lVar20,*(uint64_t *)(lVar4 + 0x2c + lVar17 * 0x48),(int64_t)iVar27 << 2);
      }
      uVar16 = (uint)*(ushort *)(lVar4 + 0x34 + lVar17 * 0x48);
      if (iVar27 < (int)uVar16) {
                    // WARNING: Subroutine does not return
        memcpy(lVar20 + (int64_t)(iVar27 + 1) * 4,
               *(int64_t *)(lVar4 + 0x2c + lVar17 * 0x48) + (int64_t)iVar27 * 4,
               (int64_t)(int)(uVar16 - iVar27) << 2);
      }
      *(float *)(lVar20 + lVar30 * 4) = fVar45;
      if (*(int64_t *)(lVar4 + 0x2c + lVar17 * 0x48) != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(uint64_t *)(lVar4 + 0x2c + lVar17 * 0x48) = 0;
      if (*(int64_t *)(lVar4 + 0x24 + lVar17 * 0x48) != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(int64_t *)(lVar4 + 0x2c + lVar17 * 0x48) = lVar20;
      iVar26 = 0;
      *(int64_t *)(lVar4 + 0x24 + lVar17 * 0x48) = lVar21;
      lVar30 = 0;
      *(short *)(lVar4 + 0x34 + lVar17 * 0x48) = (short)uVar28;
      uVar3 = *(ushort *)(lVar4 + 0x46 + lVar17 * 0x48);
      if (uVar3 != 0) {
        pfVar19 = *(float **)(lVar4 + 0x3e + lVar17 * 0x48);
        do {
          if (fVar45 < *pfVar19) break;
          iVar26 = iVar26 + 1;
          lVar30 = lVar30 + 1;
          pfVar19 = pfVar19 + 1;
        } while (iVar26 < (int)(uint)uVar3);
      }
      uVar28 = uVar3 + 1;
      lVar20 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)uVar28 * 4,4);
      lVar21 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)uVar28 << 4,4);
      if (0 < lVar30) {
        lVar29 = 0;
        lVar23 = lVar30;
        do {
          puVar1 = (uint64_t *)(lVar29 + *(int64_t *)(lVar4 + 0x36 + lVar17 * 0x48));
          uVar9 = puVar1[1];
          *(uint64_t *)(lVar29 + lVar21) = *puVar1;
          ((uint64_t *)(lVar29 + lVar21))[1] = uVar9;
          lVar23 = lVar23 + -1;
          lVar29 = lVar29 + 0x10;
        } while (lVar23 != 0);
      }
      if (iVar26 < (int)(uint)*(ushort *)(lVar4 + 0x46 + lVar17 * 0x48)) {
        lVar29 = lVar30 << 4;
        iVar27 = iVar26;
        do {
          iVar27 = iVar27 + 1;
          puVar2 = (uint64_t *)(lVar29 + *(int64_t *)(lVar4 + 0x36 + lVar17 * 0x48));
          uVar9 = puVar2[1];
          puVar1 = (uint64_t *)(lVar21 + lVar29 + 0x10);
          *puVar1 = *puVar2;
          puVar1[1] = uVar9;
          lVar29 = lVar29 + 0x10;
        } while (iVar27 < (int)(uint)*(ushort *)(lVar4 + 0x46 + lVar17 * 0x48));
      }
      pfVar19 = (float *)(lVar21 + lVar30 * 0x10);
      *pfVar19 = fVar50;
      pfVar19[1] = fVar11;
      pfVar19[2] = fVar12;
      pfVar19[3] = fVar13;
      if (0 < iVar26) {
                    // WARNING: Subroutine does not return
        memcpy(lVar20,*(uint64_t *)(lVar4 + 0x3e + lVar17 * 0x48),(int64_t)iVar26 << 2);
      }
      uVar16 = (uint)*(ushort *)(lVar4 + 0x46 + lVar17 * 0x48);
      if (iVar26 < (int)uVar16) {
                    // WARNING: Subroutine does not return
        memcpy(lVar20 + (int64_t)(iVar26 + 1) * 4,
               *(int64_t *)(lVar4 + 0x3e + lVar17 * 0x48) + (int64_t)iVar26 * 4,
               (int64_t)(int)(uVar16 - iVar26) << 2);
      }
      *(float *)(lVar20 + lVar30 * 4) = fVar45;
      if (*(int64_t *)(lVar4 + 0x3e + lVar17 * 0x48) != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(uint64_t *)(lVar4 + 0x3e + lVar17 * 0x48) = 0;
      if (*(int64_t *)(lVar4 + 0x36 + lVar17 * 0x48) != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      iStack_1a8 = iStack_1a8 + 1;
      lStack_178 = lStack_178 + 4;
      *(int64_t *)(lVar4 + 0x3e + lVar17 * 0x48) = lVar20;
      *(int64_t *)(lVar4 + 0x36 + lVar17 * 0x48) = lVar21;
      *(short *)(lVar4 + 0x46 + lVar17 * 0x48) = (short)uVar28;
      lVar30 = *(int64_t *)(pcStack_150 + 8);
    } while ((uint64_t)(int64_t)iStack_1a8 <
             (uint64_t)(*(int64_t *)(pcStack_150 + 0x10) - lVar30 >> 2));
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_e8 ^ (uint64_t)auStack_1c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



