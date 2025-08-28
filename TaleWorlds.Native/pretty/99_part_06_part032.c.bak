#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part032.c - 3 个函数

// 函数: void FUN_1803c3f70(uint64_t *param_1,uint param_2,int param_3)
void FUN_1803c3f70(uint64_t *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  int8_t auStack_1f8 [48];
  int32_t uStack_1c8;
  int iStack_1b8;
  ushort *puStack_1b0;
  float *pfStack_1a8;
  float *pfStack_1a0;
  longlong lStack_198;
  int iStack_190;
  uint uStack_18c;
  int iStack_188;
  int *piStack_180;
  longlong lStack_178;
  longlong lStack_170;
  ulonglong uStack_168;
  longlong lStack_160;
  longlong lStack_158;
  uint64_t *puStack_150;
  longlong *plStack_148;
  uint64_t uStack_140;
  longlong lStack_138;
  uint64_t uStack_130;
  int16_t uStack_128;
  int8_t uStack_126;
  uint64_t uStack_124;
  uint64_t uStack_11c;
  uint64_t uStack_114;
  uint64_t uStack_10c;
  uint64_t uStack_104;
  uint64_t uStack_fc;
  uint64_t uStack_f4;
  uint64_t uStack_ec;
  uint64_t uStack_e4;
  int32_t uStack_dc;
  int16_t uStack_d8;
  int32_t uStack_d6;
  int8_t uStack_d2;
  longlong lStack_c8;
  uint64_t uStack_c0;
  int16_t uStack_b8;
  int8_t uStack_b6;
  uint64_t uStack_b4;
  uint64_t uStack_ac;
  uint64_t uStack_a4;
  uint64_t uStack_9c;
  uint64_t uStack_94;
  uint64_t uStack_8c;
  uint64_t uStack_84;
  uint64_t uStack_7c;
  uint64_t uStack_74;
  int32_t uStack_6c;
  int16_t uStack_68;
  int32_t uStack_66;
  int8_t uStack_62;
  ulonglong uStack_58;
  ulonglong uVar8;
  
  uStack_140 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1f8;
  uVar17 = (ulonglong)(int)param_2;
  uStack_18c = param_2;
  iStack_188 = param_3;
  puStack_150 = param_1;
  if ((int)param_2 < param_3) {
    lStack_160 = uVar17 * 0x90;
    uStack_168 = uVar17;
    do {
      iVar13 = (int)uVar17;
      lStack_198 = lStack_160 + *(longlong *)*param_1;
      if (*(char *)(uStack_168 + *(longlong *)(param_1[1] + 0x60)) != '\0') {
        uVar14 = 0;
        uVar16 = uVar14;
        do {
          lStack_c8 = 0;
          uStack_c0 = 0;
          uStack_b8 = 0;
          uStack_66 = 0;
          uStack_74 = 0;
          uStack_6c = 0;
          uStack_68 = 0;
          uStack_62 = 0;
          uStack_b4 = 0;
          uStack_ac = 0;
          uStack_a4 = 0;
          uStack_9c = 0;
          uStack_94 = 0;
          uStack_8c = 0;
          uStack_84 = 0;
          uStack_7c = 0;
          uStack_b6 = 0x21;
          uStack_1c8 = 0xc;
          FUN_1802a7bf0(*(uint64_t *)(lStack_198 + 0x30 + uVar14 * 8));
          uVar8 = 0;
          lVar15 = param_1[1];
          lVar10 = *(longlong *)(lVar15 + 8);
          uVar12 = uVar8;
          if (0 < *(int *)(lVar10 + 0x1e4)) {
            do {
              iVar11 = 0;
              if (0 < *(int *)(lVar10 + 0x1e8)) {
                do {
                  iVar9 = (*(int *)(lVar10 + 0x1e4) * iVar11 + (int)uVar8) *
                          *(int *)(lVar10 + 0x1ec) + iVar13;
                  lVar10 = *(longlong *)(lVar15 + 0x30);
                  for (piVar4 = *(int **)(lVar10 + ((ulonglong)(longlong)iVar9 %
                                                   (ulonglong)*(uint *)(lVar15 + 0x38)) * 8);
                      piVar4 != (int *)0x0; piVar4 = *(int **)(piVar4 + 2)) {
                    if (iVar9 == *piVar4) {
                      lVar2 = *(longlong *)(lVar15 + 0x38);
                      goto LAB_1803c412e;
                    }
                  }
                  lVar2 = *(longlong *)(lVar15 + 0x38);
                  piVar4 = *(int **)(lVar10 + lVar2 * 8);
LAB_1803c412e:
                  if (piVar4 != *(int **)(lVar10 + lVar2 * 8)) {
                    *(float *)(((longlong)(piVar4[1] * 7 + (int)uVar16) + 1) * 0x10 +
                               *(longlong *)(*(longlong *)(*(longlong *)(lVar15 + 8) + 0x70) + 0x10)
                              + 0xc) =
                         (float)*(ushort *)(lStack_c8 + uVar12 * 2) * *(float *)param_1[2];
                  }
                  uVar12 = uVar12 + 1;
                  iVar11 = iVar11 + 1;
                  lVar10 = *(longlong *)(lVar15 + 8);
                } while (iVar11 < *(int *)(lVar10 + 0x1e8));
              }
              uVar7 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar7;
            } while ((int)uVar7 < *(int *)(lVar10 + 0x1e4));
          }
          lVar15 = 0;
          if (uStack_b8._1_1_ == '\0') {
            if (((char)uStack_b8 == '\0') && (lStack_c8 != 0)) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(lStack_c8);
            }
            lStack_c8 = 0;
            uStack_c0 = 0;
            uStack_b8 = 0;
          }
          uVar16 = (ulonglong)((int)uVar16 + 1);
          uVar14 = uVar14 + 1;
        } while ((longlong)uVar14 < 6);
        lVar10 = lStack_198 + 0x60;
        do {
          lStack_138 = 0;
          uStack_130 = 0;
          uStack_128 = 0;
          uStack_126 = 3;
          uStack_d6 = 0;
          uStack_e4 = 0;
          uStack_dc = 0;
          uStack_d8 = 0;
          uStack_d2 = 0;
          uStack_124 = 0;
          uStack_11c = 0;
          uStack_114 = 0;
          uStack_10c = 0;
          uStack_104 = 0;
          uStack_fc = 0;
          uStack_f4 = 0;
          uStack_ec = 0;
          uStack_1c8 = 0xc;
          lStack_170 = lVar10;
          FUN_1802a7bf0(*(uint64_t *)(lVar10 + 0x18));
          iStack_1b8 = 0;
          lVar2 = param_1[1];
          plStack_148 = (longlong *)(lVar2 + 8);
          if (0 < *(int *)(*plStack_148 + 0x1e8)) {
            do {
              iVar13 = 0;
              iStack_190 = 0;
              lVar3 = *(longlong *)(lVar2 + 8);
              if (0 < *(int *)(lVar3 + 0x1e4)) {
                do {
                  iVar11 = (*(int *)(lVar3 + 0x1e4) * iStack_1b8 + iStack_190) *
                           *(int *)(lVar3 + 0x1ec) + (int)uVar17;
                  lVar10 = *(longlong *)(lVar2 + 0x30);
                  for (piVar4 = *(int **)(lVar10 + ((ulonglong)(longlong)iVar11 %
                                                   (ulonglong)*(uint *)(lVar2 + 0x38)) * 8);
                      piVar4 != (int *)0x0; piVar4 = *(int **)(piVar4 + 2)) {
                    if (iVar11 == *piVar4) {
                      lVar3 = *(longlong *)(lVar2 + 0x38);
                      goto LAB_1803c42ee;
                    }
                  }
                  lVar3 = *(longlong *)(lVar2 + 0x38);
                  piVar4 = *(int **)(lVar10 + lVar3 * 8);
LAB_1803c42ee:
                  if (piVar4 != *(int **)(lVar10 + lVar3 * 8)) {
                    iVar9 = piVar4[1];
                    piStack_180 = (int *)param_1[3];
                    puStack_1b0 = (ushort *)param_1[5];
                    pfStack_1a8 = (float *)param_1[6];
                    pfStack_1a0 = (float *)param_1[4];
                    lVar3 = param_1[1];
                    lVar5 = (longlong)iVar9 * 7;
                    lStack_158 = lVar5 + 6;
                    iVar11 = iStack_1b8 * 4;
                    lStack_198 = 0x90;
                    lVar10 = lVar15 + 0x90;
                    do {
                      lVar1 = *(longlong *)(lVar3 + 8);
                      fVar18 = (((float)*(ushort *)
                                         (lStack_138 +
                                         (longlong)(iVar11 * *piStack_180 + iVar13) * 2) /
                                (float)*puStack_1b0) * *pfStack_1a8 + *pfStack_1a0) *
                               *(float *)(lVar1 + lVar10);
                      if (fVar18 <= 0.0) {
                        fVar18 = 0.0;
                      }
                      lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x70) + 0x10) +
                              (longlong)iVar9 * 0x70;
                      *(float *)(lVar6 + 0x10 + lVar15) =
                           (fVar18 + fVar18) * *(float *)(lVar1 + 0x1b0) +
                           *(float *)(lVar6 + 0x10 + lVar15);
                      lVar1 = *(longlong *)(lVar3 + 8);
                      lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x70) + 0x10) + (lVar5 + 2) * 0x10
                      ;
                      fVar18 = (((float)*(ushort *)
                                         (lStack_138 + 2 +
                                         (longlong)(iVar11 * *piStack_180 + iVar13) * 2) /
                                (float)*puStack_1b0) * *pfStack_1a8 + *pfStack_1a0) *
                               *(float *)(lVar1 + lVar10);
                      if (fVar18 <= 0.0) {
                        fVar18 = 0.0;
                      }
                      *(float *)(lVar6 + lVar15) =
                           (fVar18 + fVar18) * *(float *)(lVar1 + 0x1b0) +
                           *(float *)(lVar6 + lVar15);
                      lVar1 = *(longlong *)(lVar3 + 8);
                      lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x70) + 0x10) + (lVar5 + 3) * 0x10
                      ;
                      fVar18 = (((float)*(ushort *)
                                         (lStack_138 + 4 +
                                         (longlong)(iVar11 * *piStack_180 + iVar13) * 2) /
                                (float)*puStack_1b0) * *pfStack_1a8 + *pfStack_1a0) *
                               *(float *)(lVar1 + lVar10);
                      if (fVar18 <= 0.0) {
                        fVar18 = 0.0;
                      }
                      *(float *)(lVar6 + lVar15) =
                           (fVar18 + fVar18) * *(float *)(lVar1 + 0x1b0) +
                           *(float *)(lVar6 + lVar15);
                      lVar1 = *(longlong *)(lVar3 + 8);
                      lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x70) + 0x10) + (lVar5 + 4) * 0x10
                      ;
                      fVar18 = (((float)*(ushort *)
                                         (lStack_138 + 6 +
                                         (longlong)(iVar11 * *piStack_180 + iVar13) * 2) /
                                (float)*puStack_1b0) * *pfStack_1a8 + *pfStack_1a0) *
                               *(float *)(lVar1 + lVar10);
                      if (fVar18 <= 0.0) {
                        fVar18 = 0.0;
                      }
                      *(float *)(lVar6 + lVar15) =
                           (fVar18 + fVar18) * *(float *)(lVar1 + 0x1b0) +
                           *(float *)(lVar6 + lVar15);
                      lVar1 = *(longlong *)(lVar3 + 8);
                      lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x70) + 0x10) + (lVar5 + 5) * 0x10
                      ;
                      fVar18 = (((float)*(ushort *)
                                         (lStack_138 + 8 +
                                         (longlong)(iVar11 * *piStack_180 + iVar13) * 2) /
                                (float)*puStack_1b0) * *pfStack_1a8 + *pfStack_1a0) *
                               *(float *)(lVar1 + lVar10);
                      if (fVar18 <= 0.0) {
                        fVar18 = 0.0;
                      }
                      *(float *)(lVar6 + lVar15) =
                           (fVar18 + fVar18) * *(float *)(lVar1 + 0x1b0) +
                           *(float *)(lVar6 + lVar15);
                      fVar19 = ((float)*(ushort *)
                                        (lStack_138 + 10 +
                                        (longlong)(iVar11 * *piStack_180 + iVar13) * 2) /
                               (float)*puStack_1b0) * *pfStack_1a8 + *pfStack_1a0;
                      lVar1 = *(longlong *)(lVar3 + 8);
                      lVar6 = lStack_158 * 0x10 + *(longlong *)(*(longlong *)(lVar1 + 0x70) + 0x10);
                      fVar18 = fVar19 * *(float *)(lStack_198 + lVar1 + lVar15);
                      if (fVar18 <= 0.0) {
                        fVar18 = 0.0;
                      }
                      fVar19 = fVar19 * *(float *)(lStack_198 + lVar1 + lVar15);
                      if (fVar19 <= 0.0) {
                        fVar19 = 0.0;
                      }
                      *(float *)(lVar6 + lVar15) =
                           (fVar19 + fVar18) * *(float *)(lVar1 + 0x1b0) +
                           *(float *)(lVar6 + lVar15);
                      iVar11 = iVar11 + 1;
                      lVar10 = lVar10 + 0x10;
                      lStack_198 = lStack_198 + 0x10;
                    } while (lStack_198 < 0xd0);
                    uVar17 = (ulonglong)uStack_18c;
                    param_1 = puStack_150;
                  }
                  iStack_190 = iStack_190 + 1;
                  iVar13 = iVar13 + 6;
                  lVar3 = *plStack_148;
                } while (iStack_190 < *(int *)(lVar3 + 0x1e4));
                lVar2 = param_1[1];
              }
              iStack_1b8 = iStack_1b8 + 1;
              lVar10 = lStack_170;
              lStack_178 = lVar2;
            } while (iStack_1b8 < *(int *)(lVar3 + 0x1e8));
          }
          iVar13 = (int)uVar17;
          if (uStack_128._1_1_ == '\0') {
            if (((char)uStack_128 == '\0') && (lStack_138 != 0)) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(lStack_138);
            }
            lStack_138 = 0;
            uStack_130 = 0;
            uStack_128 = 0;
          }
          lVar10 = lVar10 + 8;
          lVar15 = lVar15 + 4;
          lStack_170 = lVar10;
        } while (lVar15 < 0xc);
      }
      uStack_18c = iVar13 + 1;
      uVar17 = (ulonglong)uStack_18c;
      uStack_168 = uStack_168 + 1;
      lStack_160 = lStack_160 + 0x90;
    } while ((int)uStack_18c < iStack_188);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_1f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803c4780(longlong param_1,longlong *param_2)
void FUN_1803c4780(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int8_t auStack_248 [32];
  uint64_t uStack_228;
  longlong **pplStack_220;
  int16_t auStack_218 [4];
  longlong *plStack_210;
  longlong *plStack_208;
  longlong *plStack_200;
  int32_t uStack_1f8;
  int32_t uStack_1f0;
  int32_t uStack_1ec;
  int32_t uStack_1e8;
  float fStack_1e4;
  longlong lStack_1e0;
  longlong lStack_1d8;
  longlong **pplStack_1d0;
  int32_t *puStack_1c8;
  int32_t *puStack_1c0;
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  float *pfStack_1a8;
  longlong *aplStack_1a0 [2];
  code *pcStack_190;
  void *puStack_188;
  uint64_t uStack_180;
  longlong **pplStack_178;
  longlong alStack_168 [18];
  ulonglong auStack_d8 [18];
  ulonglong uStack_48;
  
  uStack_180 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_248;
  uStack_1f0 = *(int32_t *)(*(longlong *)(param_1 + 8) + 0x1e4);
  uStack_1ec = *(int32_t *)(*(longlong *)(param_1 + 8) + 0x1e8);
  fStack_1e4 = *(float *)param_2[1];
  param_2[1] = (longlong)((float *)param_2[1] + 2);
  uStack_1e8 = 0;
  auStack_218[0] = (int16_t)(int)(fStack_1e4 * 1999.9999);
  iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x1ec);
  lVar14 = (longlong)iVar2;
  plStack_210 = (longlong *)0x0;
  plStack_208 = (longlong *)0x0;
  plStack_200 = (longlong *)0x0;
  uStack_1f8 = 3;
  lStack_1e0 = param_1;
  if (lVar14 != 0) {
    if (iVar2 == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)FUN_18062b420(system_memory_pool_ptr,lVar14 * 0x120,3);
    }
    if (plStack_210 != plStack_208) {
                    // WARNING: Subroutine does not return
      memmove(plVar6,plStack_210,(longlong)plStack_208 - (longlong)plStack_210);
    }
    if (plStack_210 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plStack_210);
    }
    plStack_200 = plVar6 + lVar14 * 0x24;
    plStack_208 = plVar6;
  }
  iVar13 = 0;
  plStack_210 = plStack_208;
  if (0 < iVar2) {
    do {
      lVar14 = 0;
      do {
        lVar12 = 0;
        do {
          uVar11 = (ulonglong)*(uint *)param_2[1];
          puVar10 = (uint *)param_2[1] + 1;
          param_2[1] = (longlong)puVar10;
          lVar1 = lVar12 + lVar14 * 3;
          alStack_168[lVar1] = (longlong)puVar10;
          auStack_d8[lVar1] = uVar11;
          if (((lVar12 != 2) || (lVar14 != 5)) || (iVar13 != iVar2 + -1)) {
            if ((ulonglong)((param_2[2] - (longlong)puVar10) + *param_2) <= uVar11) {
              System_BufferManager(param_2,(longlong)puVar10 + (uVar11 - *param_2));
              puVar10 = (uint *)param_2[1];
            }
            param_2[1] = (longlong)puVar10 + uVar11;
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < 3);
        lVar14 = lVar14 + 1;
      } while (lVar14 < 6);
      if (plStack_208 < plStack_200) {
        lVar14 = 2;
        plVar6 = alStack_168;
        plVar5 = plStack_208;
        do {
          plVar8 = plVar5;
          plVar7 = plVar6;
          lVar12 = plVar7[1];
          *plVar8 = *plVar7;
          plVar8[1] = lVar12;
          lVar12 = plVar7[3];
          plVar8[2] = plVar7[2];
          plVar8[3] = lVar12;
          lVar12 = plVar7[5];
          plVar8[4] = plVar7[4];
          plVar8[5] = lVar12;
          lVar12 = plVar7[7];
          plVar8[6] = plVar7[6];
          plVar8[7] = lVar12;
          lVar12 = plVar7[9];
          plVar8[8] = plVar7[8];
          plVar8[9] = lVar12;
          lVar12 = plVar7[0xb];
          plVar8[10] = plVar7[10];
          plVar8[0xb] = lVar12;
          lVar12 = plVar7[0xd];
          plVar8[0xc] = plVar7[0xc];
          plVar8[0xd] = lVar12;
          lVar12 = plVar7[0xf];
          plVar8[0xe] = plVar7[0xe];
          plVar8[0xf] = lVar12;
          lVar14 = lVar14 + -1;
          plVar6 = plVar7 + 0x10;
          plVar5 = plVar8 + 0x10;
        } while (lVar14 != 0);
        uVar3 = *(int32_t *)((longlong)plVar7 + 0x84);
        lVar14 = plVar7[0x11];
        uVar4 = *(int32_t *)((longlong)plVar7 + 0x8c);
        *(int *)(plVar8 + 0x10) = (int)plVar7[0x10];
        *(int32_t *)((longlong)plVar8 + 0x84) = uVar3;
        *(int *)(plVar8 + 0x11) = (int)lVar14;
        *(int32_t *)((longlong)plVar8 + 0x8c) = uVar4;
        lVar14 = plVar7[0x13];
        plVar8[0x12] = plVar7[0x12];
        plVar8[0x13] = lVar14;
        plVar6 = plStack_208;
      }
      else {
        lVar14 = ((longlong)plStack_208 - (longlong)plStack_210) / 0x120;
        if (lVar14 == 0) {
          lVar14 = 1;
LAB_1803c4a70:
          plVar6 = (longlong *)FUN_18062b420(system_memory_pool_ptr,lVar14 * 0x120,(int8_t)uStack_1f8);
        }
        else {
          lVar14 = lVar14 * 2;
          if (lVar14 != 0) goto LAB_1803c4a70;
          plVar6 = (longlong *)0x0;
        }
        if (plStack_210 != plStack_208) {
                    // WARNING: Subroutine does not return
          memmove(plVar6,plStack_210,(longlong)plStack_208 - (longlong)plStack_210);
        }
        lVar12 = 2;
        plVar5 = plVar6;
        plVar7 = alStack_168;
        do {
          plVar9 = plVar7;
          plVar8 = plVar5;
          lVar1 = plVar9[1];
          *plVar8 = *plVar9;
          plVar8[1] = lVar1;
          lVar1 = plVar9[3];
          plVar8[2] = plVar9[2];
          plVar8[3] = lVar1;
          lVar1 = plVar9[5];
          plVar8[4] = plVar9[4];
          plVar8[5] = lVar1;
          lVar1 = plVar9[7];
          plVar8[6] = plVar9[6];
          plVar8[7] = lVar1;
          lVar1 = plVar9[9];
          plVar8[8] = plVar9[8];
          plVar8[9] = lVar1;
          lVar1 = plVar9[0xb];
          plVar8[10] = plVar9[10];
          plVar8[0xb] = lVar1;
          lVar1 = plVar9[0xd];
          plVar8[0xc] = plVar9[0xc];
          plVar8[0xd] = lVar1;
          lVar1 = plVar9[0xf];
          plVar8[0xe] = plVar9[0xe];
          plVar8[0xf] = lVar1;
          lVar12 = lVar12 + -1;
          plVar5 = plVar8 + 0x10;
          plVar7 = plVar9 + 0x10;
        } while (lVar12 != 0);
        uVar3 = *(int32_t *)((longlong)plVar9 + 0x84);
        lVar12 = plVar9[0x11];
        uVar4 = *(int32_t *)((longlong)plVar9 + 0x8c);
        *(int *)(plVar8 + 0x10) = (int)plVar9[0x10];
        *(int32_t *)((longlong)plVar8 + 0x84) = uVar3;
        *(int *)(plVar8 + 0x11) = (int)lVar12;
        *(int32_t *)((longlong)plVar8 + 0x8c) = uVar4;
        uVar3 = *(int32_t *)((longlong)plVar9 + 0x94);
        lVar12 = plVar9[0x13];
        uVar4 = *(int32_t *)((longlong)plVar9 + 0x9c);
        *(int *)(plVar8 + 0x12) = (int)plVar9[0x12];
        *(int32_t *)((longlong)plVar8 + 0x94) = uVar3;
        *(int *)(plVar8 + 0x13) = (int)lVar12;
        *(int32_t *)((longlong)plVar8 + 0x9c) = uVar4;
        if (plStack_210 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plStack_200 = plVar6 + lVar14 * 0x24;
        plStack_210 = plVar6;
      }
      plStack_208 = plVar6 + 0x24;
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar2);
  }
  pplStack_178 = aplStack_1a0;
  lStack_1d8 = lStack_1e0;
  pplStack_1d0 = &plStack_210;
  puStack_1c8 = &uStack_1f0;
  puStack_1c0 = &uStack_1ec;
  uStack_1b8 = &uStack_1e8;
  uStack_1b0 = auStack_218;
  pfStack_1a8 = &fStack_1e4;
  pcStack_190 = FUN_1803c5480;
  puStack_188 = &unknown_var_4720_ptr;
  aplStack_1a0[0] = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,0x38,8,system_allocation_flags);
  *aplStack_1a0[0] = lStack_1d8;
  aplStack_1a0[0][1] = (longlong)pplStack_1d0;
  aplStack_1a0[0][2] = (longlong)puStack_1c8;
  aplStack_1a0[0][3] = (longlong)puStack_1c0;
  *(int32_t *)(aplStack_1a0[0] + 4) = (int32_t)uStack_1b8;
  *(int32_t *)((longlong)aplStack_1a0[0] + 0x24) = uStack_1b8._4_4_;
  *(int32_t *)(aplStack_1a0[0] + 5) = (int32_t)uStack_1b0;
  *(int32_t *)((longlong)aplStack_1a0[0] + 0x2c) = uStack_1b0._4_4_;
  aplStack_1a0[0][6] = (longlong)pfStack_1a8;
  pplStack_220 = aplStack_1a0;
  uStack_228 = 0xffffffffffffffff;
  FUN_18015b810((int32_t)uStack_1b8,0,iVar2,1);
  if (plStack_210 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_248);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803c4c90(longlong *param_1,uint param_2,int param_3)
void FUN_1803c4c90(longlong *param_1,uint param_2,int param_3)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int8_t auStack_148 [48];
  int32_t uStack_118;
  uint uStack_108;
  int iStack_104;
  int32_t *puStack_100;
  longlong lStack_f8;
  ulonglong uStack_f0;
  longlong lStack_e8;
  uint64_t uStack_e0;
  longlong alStack_d8 [2];
  int16_t uStack_c8;
  int8_t uStack_c6;
  uint64_t uStack_c4;
  uint64_t uStack_bc;
  uint64_t uStack_b4;
  uint64_t uStack_ac;
  uint64_t uStack_a4;
  uint64_t uStack_9c;
  uint64_t uStack_94;
  uint64_t uStack_8c;
  uint64_t uStack_84;
  int32_t uStack_7c;
  int16_t uStack_78;
  int32_t uStack_76;
  int8_t uStack_72;
  ulonglong uStack_68;
  ulonglong uVar11;
  
  uStack_e0 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_148;
  uVar10 = (ulonglong)(int)param_2;
  uStack_108 = param_2;
  iStack_104 = param_3;
  if ((int)param_2 < param_3) {
    lStack_e8 = uVar10 * 0x120;
    uStack_f0 = uVar10;
    do {
      iVar14 = 0;
      uVar9 = (uint)uVar10;
      if (*(char *)(uStack_f0 + *(longlong *)(*param_1 + 0x60)) != '\0') {
        fVar1 = *(float *)(*(longlong *)(*(longlong *)(*param_1 + 8) + 0x88) + 0x4b8);
        puStack_100 = (int32_t *)(*(longlong *)param_1[1] + 0x90 + lStack_e8);
        lStack_f8 = 6;
        do {
          lVar15 = 0;
          do {
            alStack_d8[0] = 0;
            alStack_d8[1] = 0;
            uStack_c8 = 0;
            uStack_76 = 0;
            uStack_84 = 0;
            uStack_7c = 0;
            uStack_78 = 0;
            uStack_72 = 0;
            uStack_c4 = 0;
            uStack_bc = 0;
            uStack_b4 = 0;
            uStack_ac = 0;
            uStack_a4 = 0;
            uStack_9c = 0;
            uStack_94 = 0;
            uStack_8c = 0;
            uStack_c6 = 0x21;
            uStack_118 = 0xc;
            FUN_1802a7bf0(*(uint64_t *)(puStack_100 + -0x24),*puStack_100,alStack_d8);
            piVar2 = (int *)param_1[3];
            piVar3 = (int *)param_1[2];
            iVar13 = *piVar2;
            iVar6 = *piVar3;
            iVar12 = iVar6 * iVar13 * (int)uVar10;
            uVar11 = 0;
            uVar10 = uVar11;
            if (0 < iVar13) {
              do {
                iVar13 = 0;
                if (0 < iVar6) {
                  lVar4 = *param_1;
                  do {
                    lVar8 = *(longlong *)(lVar4 + 0x30);
                    for (piVar7 = *(int **)(lVar8 + ((ulonglong)(longlong)iVar12 %
                                                    (ulonglong)*(uint *)(lVar4 + 0x38)) * 8);
                        piVar7 != (int *)0x0; piVar7 = *(int **)(piVar7 + 2)) {
                      if (iVar12 == *piVar7) {
                        lVar5 = *(longlong *)(lVar4 + 0x38);
                        goto LAB_1803c4e4a;
                      }
                    }
                    lVar5 = *(longlong *)(lVar4 + 0x38);
                    piVar7 = *(int **)(lVar8 + lVar5 * 8);
LAB_1803c4e4a:
                    if (piVar7 != *(int **)(lVar8 + lVar5 * 8)) {
                      lVar8 = ((longlong)(piVar7[1] * 7 + iVar14) + 1) * 0x10 +
                              *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 8) + 0x70) + 0x10);
                      *(float *)(lVar15 + lVar8) =
                           (((float)*(ushort *)(alStack_d8[0] + uVar10 * 2) /
                            (float)*(ushort *)param_1[5]) * *(float *)param_1[6] +
                           *(float *)param_1[4]) * fVar1 * 0.3 + *(float *)(lVar15 + lVar8);
                    }
                    uVar10 = uVar10 + 1;
                    iVar12 = iVar12 + 1;
                    iVar13 = iVar13 + 1;
                    iVar6 = *piVar3;
                  } while (iVar13 < iVar6);
                }
                uVar9 = (int)uVar11 + 1;
                uVar11 = (ulonglong)uVar9;
              } while ((int)uVar9 < *piVar2);
            }
            if (uStack_c8._1_1_ == '\0') {
              if (((char)uStack_c8 == '\0') && (alStack_d8[0] != 0)) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(alStack_d8[0]);
              }
              alStack_d8[0] = 0;
              alStack_d8[1] = 0;
              uStack_c8 = 0;
            }
            puStack_100 = puStack_100 + 2;
            lVar15 = lVar15 + 4;
            uVar10 = (ulonglong)uStack_108;
          } while (lVar15 < 0xc);
          iVar14 = iVar14 + 1;
          lStack_f8 = lStack_f8 + -1;
        } while (lStack_f8 != 0);
        lStack_f8 = 0;
        uVar9 = uStack_108;
      }
      uStack_108 = uVar9 + 1;
      uVar10 = (ulonglong)uStack_108;
      uStack_f0 = uStack_f0 + 1;
      lStack_e8 = lStack_e8 + 0x120;
    } while ((int)uStack_108 < iStack_104);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_148);
}



uint64_t *
FUN_1803c4fa0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_2968_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
FUN_1803c4ff0(longlong param_1,uint64_t *param_2,uint64_t param_3,int *param_4,ulonglong param_5
             )

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int *piVar5;
  
  uVar3 = param_5 % (ulonglong)*(uint *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  piVar5 = *(int **)(lVar1 + uVar3 * 8);
  if (piVar5 != (int *)0x0) {
    do {
      if (*param_4 == *piVar5) {
        *param_2 = piVar5;
        param_2[1] = lVar1 + uVar3 * 8;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      piVar5 = *(int **)(piVar5 + 2);
    } while (piVar5 != (int *)0x0);
  }
  FUN_18066c220(param_1 + 0x20,&param_5,(ulonglong)*(uint *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  plVar2 = *(longlong **)(param_1 + 0x30);
  uVar4 = (longlong)(int)plVar2[2] + 0xfU & 0xfffffffffffffff0;
  piVar5 = (int *)(*plVar2 + uVar4);
  *(int *)(plVar2 + 2) = (int)uVar4 + 0x10;
  *piVar5 = *param_4;
  piVar5[1] = 0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  if ((char)param_5 != '\0') {
    plVar2 = *(longlong **)(param_1 + 0x30);
    uVar3 = (longlong)(int)plVar2[2] + 7U & 0xfffffffffffffff8;
    *(uint *)(plVar2 + 2) = (int)uVar3 + (param_5._4_4_ + 1) * 8;
                    // WARNING: Subroutine does not return
    memset(*plVar2 + uVar3,0,(ulonglong)param_5._4_4_ * 8);
  }
  *(uint64_t *)(piVar5 + 2) = *(uint64_t *)(*(longlong *)(param_1 + 8) + uVar3 * 8);
  *(int **)(*(longlong *)(param_1 + 8) + uVar3 * 8) = piVar5;
  lVar1 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
  *param_2 = piVar5;
  param_2[1] = lVar1 + uVar3 * 8;
  *(int8_t *)(param_2 + 2) = 1;
  return param_2;
}






