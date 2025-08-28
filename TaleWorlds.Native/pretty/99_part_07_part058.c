#include "TaleWorlds.Native.Split.h"

// 99_part_07_part058.c - 2 个函数

// 函数: void FUN_1804d2fd0(longlong *param_1,longlong param_2)
void FUN_1804d2fd0(longlong *param_1,longlong param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint64_t *puVar9;
  longlong lVar10;
  uint *puVar11;
  uint uVar12;
  longlong lVar13;
  uint *puVar14;
  int32_t uVar15;
  int32_t extraout_XMM0_Da;
  int8_t auStack_218 [32];
  uint64_t uStack_1f8;
  longlong **pplStack_1f0;
  longlong *aplStack_1e8 [2];
  code *pcStack_1d8;
  code *pcStack_1d0;
  longlong alStack_1c8 [3];
  longlong **pplStack_1b0;
  longlong *plStack_1a8;
  longlong *plStack_1a0;
  uint64_t uStack_198;
  uint64_t uStack_190;
  longlong *plStack_188;
  uint64_t uStack_180;
  uint64_t auStack_178 [34];
  float fStack_64;
  float fStack_60;
  ulonglong uStack_38;
  
  uStack_180 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_218;
  lVar13 = 2;
  puVar4 = (uint64_t *)(param_2 + 0x30);
  puVar5 = auStack_178;
  do {
    puVar9 = puVar5;
    puVar6 = puVar4;
    uVar3 = puVar6[1];
    *puVar9 = *puVar6;
    puVar9[1] = uVar3;
    uVar3 = puVar6[3];
    puVar9[2] = puVar6[2];
    puVar9[3] = uVar3;
    uVar3 = puVar6[5];
    puVar9[4] = puVar6[4];
    puVar9[5] = uVar3;
    uVar3 = puVar6[7];
    puVar9[6] = puVar6[6];
    puVar9[7] = uVar3;
    uVar3 = puVar6[9];
    puVar9[8] = puVar6[8];
    puVar9[9] = uVar3;
    uVar3 = puVar6[0xb];
    puVar9[10] = puVar6[10];
    puVar9[0xb] = uVar3;
    uVar3 = puVar6[0xd];
    puVar9[0xc] = puVar6[0xc];
    puVar9[0xd] = uVar3;
    uVar3 = puVar6[0xf];
    puVar9[0xe] = puVar6[0xe];
    puVar9[0xf] = uVar3;
    lVar13 = lVar13 + -1;
    puVar4 = puVar6 + 0x10;
    puVar5 = puVar9 + 0x10;
  } while (lVar13 != 0);
  uVar3 = puVar6[0x11];
  puVar9[0x10] = puVar6[0x10];
  puVar9[0x11] = uVar3;
  uVar3 = puVar6[0x13];
  puVar9[0x12] = puVar6[0x12];
  puVar9[0x13] = uVar3;
  uVar3 = puVar6[0x15];
  puVar9[0x14] = puVar6[0x14];
  puVar9[0x15] = uVar3;
  uVar15 = *(int32_t *)((longlong)puVar6 + 0xb4);
  uVar1 = *(int32_t *)(puVar6 + 0x17);
  uVar2 = *(int32_t *)((longlong)puVar6 + 0xbc);
  *(int32_t *)(puVar9 + 0x16) = *(int32_t *)(puVar6 + 0x16);
  *(int32_t *)((longlong)puVar9 + 0xb4) = uVar15;
  *(int32_t *)(puVar9 + 0x17) = uVar1;
  *(int32_t *)((longlong)puVar9 + 0xbc) = uVar2;
  fStack_60 = *(float *)(param_2 + 0x995c) * 150.0 + fStack_64;
  alStack_1c8[0] = param_2;
  FUN_1802864f0(auStack_178);
  puVar14 = (uint *)0x0;
  alStack_1c8[2] = 0;
  alStack_1c8[1] = 0;
  pplStack_1b0 = aplStack_1e8;
  plStack_1a0 = alStack_1c8;
  uStack_198 = alStack_1c8 + 1;
  uStack_190 = auStack_178;
  plStack_188 = alStack_1c8 + 2;
  pcStack_1d8 = FUN_1804df640;
  pcStack_1d0 = (code *)&UNK_1804df630;
  plStack_1a8 = param_1;
  aplStack_1e8[0] = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,(int)lVar13 + 0x28,8,system_allocation_flags);
  *aplStack_1e8[0] = (longlong)plStack_1a8;
  aplStack_1e8[0][1] = (longlong)plStack_1a0;
  *(int32_t *)(aplStack_1e8[0] + 2) = (int32_t)uStack_198;
  *(int32_t *)((longlong)aplStack_1e8[0] + 0x14) = uStack_198._4_4_;
  *(int32_t *)(aplStack_1e8[0] + 3) = (int32_t)uStack_190;
  *(int32_t *)((longlong)aplStack_1e8[0] + 0x1c) = uStack_190._4_4_;
  aplStack_1e8[0][4] = (longlong)plStack_188;
  pplStack_1f0 = aplStack_1e8;
  uStack_1f8 = 0xffffffffffffffff;
  uVar15 = FUN_18015b810((int)plStack_188,0,*(int32_t *)((longlong)param_1 + 0x2c3c),0x40);
  uVar12 = 0;
  if (0 < *(int *)((longlong)param_1 + 0x2c3c)) {
    puVar7 = puVar14;
    if (*(int *)((longlong)param_1 + 0x2c3c) < 1) goto LAB_1804d32bc;
    do {
      uVar12 = (uint)puVar7;
      lVar13 = *(longlong *)(param_1[0x58d] + (longlong)((int)uVar12 >> 10) * 8);
      lVar10 = (longlong)(int)(*(uint *)(param_1 + 0x591) & uVar12) * 0x68;
      puVar7 = (uint *)(lVar10 + 8 + lVar13);
      if (*(int *)(lVar13 + lVar10) == -1) {
        puVar7 = puVar14;
      }
      if ((puVar7 != (uint *)0x0) &&
         (*(char *)(*(longlong *)(param_1[0x7f] + (longlong)((int)uVar12 >> 10) * 8) + 8 +
                   (longlong)(int)(*(uint *)(param_1 + 0x83) & uVar12) * 0xc) != '\0')) {
        puVar7 = (uint *)param_1[0x85];
        if (puVar7 < (uint *)param_1[0x86]) {
          param_1[0x85] = (longlong)(puVar7 + 1);
          *puVar7 = uVar12;
        }
        else {
          puVar11 = (uint *)param_1[0x84];
          lVar13 = (longlong)puVar7 - (longlong)puVar11 >> 2;
          if (lVar13 == 0) {
            lVar13 = 1;
LAB_1804d3239:
            puVar8 = (uint *)FUN_18062b420(_DAT_180c8ed18,lVar13 * 4,(char)param_1[0x87]);
            puVar7 = (uint *)param_1[0x85];
            puVar11 = (uint *)param_1[0x84];
            uVar15 = extraout_XMM0_Da;
          }
          else {
            lVar13 = lVar13 * 2;
            puVar8 = puVar14;
            if (lVar13 != 0) goto LAB_1804d3239;
          }
          if (puVar11 != puVar7) {
                    // WARNING: Subroutine does not return
            memmove(puVar8,puVar11,(longlong)puVar7 - (longlong)puVar11);
          }
          *puVar8 = uVar12;
          if (param_1[0x84] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          param_1[0x84] = (longlong)puVar8;
          param_1[0x85] = (longlong)(puVar8 + 1);
          param_1[0x86] = (longlong)(puVar8 + lVar13);
        }
        *(int *)(param_1 + 0x5a3) = (int)param_1[0x5a3] + 1;
      }
LAB_1804d32bc:
      puVar7 = (uint *)(ulonglong)(uVar12 + 1);
    } while ((int)(uVar12 + 1) < *(int *)((longlong)param_1 + 0x2c3c));
  }
  pplStack_1b0 = aplStack_1e8;
  pcStack_1d8 = (code *)&UNK_1804df5f0;
  pcStack_1d0 = FUN_1804df470;
  pplStack_1f0 = aplStack_1e8;
  uStack_1f8 = 0xffffffffffffffff;
  aplStack_1e8[0] = param_1;
  FUN_18015b810(uVar15,0,(int)param_1[0x5a3],0x40);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_218);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804d3350(longlong *param_1,uint param_2,int param_3)
void FUN_1804d3350(longlong *param_1,uint param_2,int param_3)

{
  uint uVar1;
  float *pfVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  char cVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  int iVar12;
  int *piVar13;
  bool bVar14;
  int8_t uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  float fVar22;
  int8_t auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  int8_t auStack_1c8 [32];
  int8_t uStack_1a8;
  uint uStack_1a4;
  int iStack_1a0;
  uint64_t uStack_198;
  uint64_t uStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  int32_t uStack_17c;
  uint64_t uStack_178;
  uint64_t uStack_170;
  float fStack_168;
  float fStack_164;
  uint64_t uStack_160;
  float afStack_158 [4];
  float fStack_148;
  int32_t uStack_144;
  int32_t uStack_140;
  int32_t uStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  float fStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  float fStack_108;
  int32_t uStack_104;
  int32_t uStack_100;
  int32_t uStack_f8;
  int32_t uStack_f4;
  int32_t uStack_f0;
  ulonglong uStack_e8;
  
  uStack_e8 = _DAT_180bf00a8 ^ (ulonglong)auStack_1c8;
  uVar19 = (ulonglong)(int)param_2;
  uVar21 = uVar19;
  uStack_1a4 = param_2;
  iStack_1a0 = param_3;
  if ((int)param_2 < param_3) {
    do {
      piVar13 = (int *)0x0;
      lVar11 = *param_1;
      uVar18 = (uint)uVar19;
      if ((int)uVar18 < *(int *)(lVar11 + 0x2c3c)) {
        lVar17 = (longlong)((int)uVar18 >> 10);
        piVar8 = (int *)(((longlong)*(int *)(lVar11 + 0x2c88) & uVar21) * 0x68 +
                        *(longlong *)(*(longlong *)(lVar11 + 0x2c68) + lVar17 * 8));
        piVar6 = piVar8 + 2;
        if (*piVar8 == -1) {
          piVar6 = piVar13;
        }
        if (piVar6 != (int *)0x0) {
          uVar15 = 0;
          uStack_1a8 = 0;
          if (*(longlong *)(lVar11 + 0x10) - *(longlong *)(lVar11 + 8) >> 3 != 0) {
            uVar20 = 0;
            uVar19 = uVar20;
            do {
              uVar18 = *(uint *)(((longlong)*(int *)(lVar11 + 0x2c88) & uVar21) * 0x68 + 0x14 +
                                *(longlong *)(*(longlong *)(lVar11 + 0x2c68) + lVar17 * 8));
              iVar12 = (int)piVar13;
              if (uVar18 != 0xffffffff) {
                cVar5 = FUN_1804d2a50(lVar11,*(uint64_t *)param_1[1],piVar13,uVar18);
                lVar11 = *param_1;
                if ((cVar5 == '\0') && (*(char *)(lVar11 + 0x2b50) == '\0')) {
                  bVar14 = false;
                }
                else {
                  bVar14 = true;
                }
                lVar16 = (longlong)((int)uVar18 >> 10);
                if (iVar12 == 0) {
                  *(int16_t *)
                   (*(longlong *)(*(longlong *)(lVar11 + 0x3a0) + lVar16 * 8) + 8 +
                   (longlong)(int)(*(uint *)(lVar11 + 0x3c0) & uVar18) * 0xc) = 0;
                }
                uVar15 = uStack_1a8;
                if (bVar14) {
                  LOCK();
                  *(longlong *)param_1[2] = *(longlong *)param_1[2] + 1;
                  UNLOCK();
                  uVar4 = uStack_198;
                  if (iVar12 != 0) {
                    lVar11 = *param_1;
                    lVar7 = *(longlong *)(*(longlong *)(lVar11 + 8) + uVar19 * 8);
                    uVar3 = *(uint64_t *)(lVar7 + 0x120);
                    uStack_170 = *(uint64_t *)(lVar7 + 0x128);
                    uVar1 = *(uint *)(*(longlong *)(*(longlong *)(lVar11 + 11000) + lVar16 * 8) +
                                      0x20 + (longlong)(int)(*(uint *)(lVar11 + 0x2b18) & uVar18) *
                                             0xd8);
                    pfVar2 = (float *)param_1[3];
                    lVar7 = *(longlong *)
                             (*(longlong *)(lVar11 + 0x4e0) + (longlong)((int)uVar1 >> 10) * 8);
                    bVar14 = true;
                    lVar11 = (longlong)(int)(*(uint *)(lVar11 + 0x500) & uVar1) * 0xc0;
                    pfVar9 = pfVar2 + 6;
                    uVar19 = uVar20;
                    do {
                      uStack_178 = uVar3;
                      if (!bVar14) goto LAB_1804d35e6;
                      bVar14 = -*(float *)(lVar7 + 0xb8 + lVar11) <=
                               (*(float *)(lVar7 + 0x28 + lVar11) - pfVar9[-6]) * pfVar9[-2] +
                               (*(float *)(lVar7 + 0x2c + lVar11) - pfVar9[-5]) * pfVar9[-1] +
                               (*(float *)(lVar7 + 0x30 + lVar11) - pfVar9[-4]) * *pfVar9;
                      uVar19 = uVar19 + 1;
                      pfVar9 = pfVar9 + 8;
                    } while ((longlong)uVar19 < 6);
                    if (!bVar14) {
LAB_1804d35e6:
                      fStack_188 = *(float *)(lVar7 + 8 + lVar11);
                      pfVar9 = &fStack_168;
                      fStack_164 = *(float *)(lVar7 + 0xc + lVar11);
                      uStack_160._0_4_ = *(int32_t *)(lVar7 + 0x10 + lVar11);
                      afStack_158[0] = *(float *)(lVar7 + 0x18 + lVar11);
                      afStack_158[1] = *(float *)(lVar7 + 0x1c + lVar11);
                      afStack_158[2] = *(float *)(lVar7 + 0x20 + lVar11);
                      fStack_168 = fStack_188;
                      fStack_148 = fStack_188;
                      uStack_144 = afStack_158[1];
                      uStack_140 = (int32_t)uStack_160;
                      uStack_138 = afStack_158[0];
                      uStack_134 = afStack_158[1];
                      uStack_130 = (int32_t)uStack_160;
                      fStack_128 = fStack_188;
                      uStack_124 = fStack_164;
                      uStack_120 = afStack_158[2];
                      uStack_118 = afStack_158[0];
                      uStack_114 = fStack_164;
                      uStack_110 = afStack_158[2];
                      fStack_108 = fStack_188;
                      uStack_104 = afStack_158[1];
                      uStack_100 = afStack_158[2];
                      uStack_f8 = afStack_158[0];
                      uStack_f4 = fStack_164;
                      uStack_f0 = (int32_t)uStack_160;
                      uStack_17c = 0x7f7fffff;
                      uVar19 = uVar20;
                      while( true ) {
                        uStack_178._0_4_ = (float)uVar3;
                        fStack_188 = fStack_188 - (float)uStack_178;
                        pfVar10 = pfVar2 + 0x16;
                        uStack_178._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
                        fStack_184 = pfVar9[1] - uStack_178._4_4_;
                        lVar11 = 2;
                        fStack_180 = pfVar9[2] - (float)uStack_170;
                        fVar22 = fStack_188 * fStack_188 + fStack_184 * fStack_184 +
                                 fStack_180 * fStack_180;
                        auVar23 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
                        fVar26 = auVar23._0_4_;
                        fVar22 = fVar26 * 0.5 * (3.0 - fVar22 * fVar26 * fVar26);
                        uVar4 = *(uint64_t *)pfVar9;
                        uStack_190 = *(uint64_t *)(pfVar9 + 2);
                        uStack_198._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
                        uStack_198._0_4_ = (float)uVar4;
                        do {
                          fVar26 = ((pfVar10[-6] - (float)uStack_198) * pfVar10[-2] +
                                    (pfVar10[-5] - uStack_198._4_4_) * pfVar10[-1] +
                                   (pfVar10[-4] - (float)uStack_190) * *pfVar10) /
                                   (fStack_188 * fVar22 * pfVar10[-2] +
                                    fStack_184 * fVar22 * pfVar10[-1] +
                                   fStack_180 * fVar22 * *pfVar10);
                          if (0.0 <= fVar26) {
                            fVar25 = fStack_188 * fVar22 * fVar26 + (float)uStack_198;
                            fVar24 = fStack_184 * fVar22 * fVar26 + uStack_198._4_4_;
                            fVar26 = fStack_180 * fVar22 * fVar26 + (float)uStack_190;
                            if ((0.0 <= (fVar24 - pfVar2[1]) * pfVar2[5] +
                                        (fVar25 - *pfVar2) * pfVar2[4] +
                                        (fVar26 - pfVar2[2]) * pfVar2[6]) &&
                               (0.0 <= (fVar24 - pfVar2[9]) * pfVar2[0xd] +
                                       (fVar25 - pfVar2[8]) * pfVar2[0xc] +
                                       (fVar26 - pfVar2[10]) * pfVar2[0xe])) goto LAB_1804d3891;
                          }
                          lVar11 = lVar11 + 1;
                          pfVar10 = pfVar10 + 8;
                        } while (lVar11 < 6);
                        uVar19 = uVar19 + 1;
                        pfVar9 = pfVar9 + 4;
                        uStack_198 = uVar4;
                        if (7 < (longlong)uVar19) break;
                        fStack_188 = *pfVar9;
                      }
                      goto LAB_1804d38db;
                    }
                  }
LAB_1804d3891:
                  uStack_198 = uVar4;
                  LOCK();
                  *(longlong *)param_1[4] = *(longlong *)param_1[4] + 1;
                  UNLOCK();
                  uStack_1a8 = 1;
                  lVar7 = (longlong)(int)(*(uint *)(*param_1 + 0x3c0) & uVar18);
                  lVar11 = *(longlong *)(*(longlong *)(*param_1 + 0x3a0) + lVar16 * 8);
                  *(ushort *)(lVar11 + 8 + lVar7 * 0xc) =
                       *(ushort *)(lVar11 + 8 + lVar7 * 0xc) | 1 << ((ushort)piVar13 & 0xf);
                  uVar15 = 1;
                }
              }
LAB_1804d38db:
              lVar11 = *param_1;
              piVar13 = (int *)(ulonglong)(iVar12 + 1U);
              uVar19 = (ulonglong)(int)(iVar12 + 1U);
              uVar18 = uStack_1a4;
              param_3 = iStack_1a0;
            } while (uVar19 < (ulonglong)
                              (*(longlong *)(lVar11 + 0x10) - *(longlong *)(lVar11 + 8) >> 3));
          }
          *(int8_t *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x3f8) + lVar17 * 8) + 8 +
           ((longlong)*(int *)(lVar11 + 0x418) & uVar21) * 0xc) = uVar15;
        }
      }
      uStack_1a4 = uVar18 + 1;
      uVar19 = (ulonglong)uStack_1a4;
      uVar21 = uVar21 + 1;
    } while ((int)uStack_1a4 < param_3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_1c8);
}






