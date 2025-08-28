#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part188.c - 3 个函数

// 函数: void FUN_1803786b0(longlong param_1,longlong param_2,int param_3,uint64_t param_4,char param_5)
void FUN_1803786b0(longlong param_1,longlong param_2,int param_3,uint64_t param_4,char param_5)

{
  longlong *plVar1;
  int32_t *puVar2;
  int iVar3;
  int iVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  int iVar9;
  longlong lVar10;
  uint64_t *puVar12;
  uint64_t *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  uint64_t *puVar19;
  uint64_t *puVar20;
  longlong lVar21;
  longlong lVar22;
  int iStackX_20;
  int iStack_a8;
  int *piStack_90;
  int *piStack_88;
  int *piStack_80;
  int32_t uStack_78;
  longlong lStack_70;
  longlong lStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  uint64_t uStack_50;
  int *piVar11;
  
  uStack_50 = 0xfffffffffffffffe;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x2148) + 0x3054);
  iStack_a8 = 0;
  if (0 < param_3) {
    do {
      iStackX_20 = 0;
      do {
        lVar14 = 0;
        if (iStackX_20 == iVar3) {
          lStack_70 = 0;
          lStack_68 = 0;
          uStack_60 = 0;
          uStack_58 = 3;
          FUN_180378550(0,&lStack_70,iStack_a8,iStackX_20);
          lVar21 = lStack_70;
          iVar9 = (int)(lStack_68 - lStack_70 >> 3);
          if (param_5 == '\0') {
            if (0 < iVar9) {
              do {
                lVar10 = **(longlong **)(lVar21 + lVar14 * 8);
                FUN_180380710(lVar10 + 0x80,*(uint64_t *)(lVar10 + 0x88),
                              *(uint64_t *)(lVar10 + 0xa8),*(uint64_t *)(lVar10 + 0xb0));
                lVar14 = lVar14 + 1;
              } while (lVar14 < iVar9);
            }
          }
          else if (0 < iVar9) {
            do {
              uVar15 = 0;
              plVar1 = *(longlong **)(lVar21 + lVar14 * 8);
              lVar10 = *plVar1;
              iVar4 = (int)((*(longlong *)(lVar10 + 0xb0) - *(longlong *)(lVar10 + 0xa8)) / 0x28);
              uVar16 = uVar15;
              if (0 < iVar4) {
                do {
                  FUN_18037e260(param_1 + 0x88,*plVar1,
                                *(longlong *)(lVar10 + 0xa8) + (longlong)(int)uVar16 * 0x28,
                                iStack_a8,*(int32_t *)(*(longlong *)(lVar10 + 0xd0) + uVar15 * 4)
                               );
                  uVar15 = uVar15 + 1;
                  uVar16 = (ulonglong)((int)uVar16 + 1);
                  lVar21 = lStack_70;
                } while ((longlong)uVar15 < (longlong)iVar4);
              }
              lVar14 = lVar14 + 1;
            } while (lVar14 < iVar9);
          }
          if (lVar21 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(lVar21);
          }
        }
        iStackX_20 = iStackX_20 + 1;
      } while (iStackX_20 < 4);
      iStack_a8 = iStack_a8 + 1;
    } while (iStack_a8 < param_3);
  }
  puVar19 = (uint64_t *)0x0;
  if (param_5 != '\0') {
    piStack_90 = (int *)0x0;
    piStack_88 = (int *)0x0;
    piStack_80 = (int *)0x0;
    uStack_78 = 3;
    plVar1 = (longlong *)(param_1 + 0x88);
    lVar14 = (*(longlong *)(param_1 + 0x90) - *plVar1) / 0x48;
    if (lVar14 != 0) {
      piStack_88 = (int *)FUN_18062b420(system_memory_pool_ptr,lVar14 * 4,3);
      piStack_80 = piStack_88 + lVar14;
    }
    piStack_90 = piStack_88;
    FUN_18037e4c0(plVar1,&piStack_90);
    puVar13 = (uint64_t *)((ulonglong)((longlong)piStack_88 + (3 - (longlong)piStack_90)) >> 2);
    if (piStack_88 < piStack_90) {
      puVar13 = puVar19;
    }
    piVar11 = piStack_90;
    puVar20 = puVar19;
    if (puVar13 != (uint64_t *)0x0) {
      do {
        lVar10 = (longlong)*piVar11;
        lVar14 = *plVar1;
        lVar21 = *(longlong *)(lVar14 + lVar10 * 0x48);
        puVar17 = *(uint64_t **)(lVar21 + 0x88);
        if (puVar17 < *(uint64_t **)(lVar21 + 0x90)) {
          *(uint64_t **)(lVar21 + 0x88) = puVar17 + 5;
          puVar18 = (uint64_t *)(lVar14 + 8 + lVar10 * 0x48);
          uVar8 = puVar18[1];
          *puVar17 = *puVar18;
          puVar17[1] = uVar8;
          puVar18 = (uint64_t *)(lVar14 + 0x18 + lVar10 * 0x48);
          uVar8 = puVar18[1];
          puVar17[2] = *puVar18;
          puVar17[3] = uVar8;
          puVar17[4] = *(uint64_t *)(lVar14 + 0x28 + lVar10 * 0x48);
        }
        else {
          puVar18 = *(uint64_t **)(lVar21 + 0x80);
          lVar22 = ((longlong)puVar17 - (longlong)puVar18) / 0x28;
          if (lVar22 == 0) {
            lVar22 = 1;
LAB_180378a14:
            puVar12 = (uint64_t *)
                      FUN_18062b420(system_memory_pool_ptr,lVar22 * 0x28,*(int8_t *)(lVar21 + 0x98));
            puVar17 = *(uint64_t **)(lVar21 + 0x88);
            puVar18 = *(uint64_t **)(lVar21 + 0x80);
          }
          else {
            lVar22 = lVar22 * 2;
            puVar12 = puVar19;
            if (lVar22 != 0) goto LAB_180378a14;
          }
          if (puVar18 != puVar17) {
                    // WARNING: Subroutine does not return
            memmove(puVar12,puVar18,(longlong)puVar17 - (longlong)puVar18);
          }
          puVar17 = (uint64_t *)(lVar14 + 8 + lVar10 * 0x48);
          uVar8 = puVar17[1];
          *puVar12 = *puVar17;
          puVar12[1] = uVar8;
          puVar2 = (int32_t *)(lVar14 + 0x18 + lVar10 * 0x48);
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          *(int32_t *)(puVar12 + 2) = *puVar2;
          *(int32_t *)((longlong)puVar12 + 0x14) = uVar5;
          *(int32_t *)(puVar12 + 3) = uVar6;
          *(int32_t *)((longlong)puVar12 + 0x1c) = uVar7;
          puVar12[4] = *(uint64_t *)(lVar14 + 0x28 + lVar10 * 0x48);
          if (*(longlong *)(lVar21 + 0x80) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(uint64_t **)(lVar21 + 0x80) = puVar12;
          *(uint64_t **)(lVar21 + 0x88) = puVar12 + 5;
          *(uint64_t **)(lVar21 + 0x90) = puVar12 + lVar22 * 5;
        }
        piVar11 = piVar11 + 1;
        puVar20 = (uint64_t *)((longlong)puVar20 + 1);
      } while (puVar20 != puVar13);
    }
    piVar11 = piStack_90;
    FUN_18037ecf0(plVar1);
    if (piVar11 != (int *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(piVar11);
    }
  }
  if (param_2 != 0) {
    *(int8_t *)(param_2 + 0x170) = 1;
    LOCK();
    *(int32_t *)(param_2 + 0x10) = 0;
    UNLOCK();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180378b60(longlong param_1,longlong param_2,int32_t param_3,int8_t param_4)
void FUN_180378b60(longlong param_1,longlong param_2,int32_t param_3,int8_t param_4)

{
  longlong lVar1;
  int iVar2;
  uint64_t uStackX_8;
  longlong lStackX_10;
  int32_t auStackX_18 [2];
  int aiStackX_20 [2];
  longlong alStack_a8 [3];
  int32_t uStack_90;
  longlong lStack_88;
  longlong *plStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  longlong *plStack_68;
  code *pcStack_58;
  code *pcStack_50;
  
  aiStackX_20[0] = CONCAT31(aiStackX_20[0]._1_3_,param_4);
  lStackX_10 = param_2;
  auStackX_18[0] = param_3;
  iVar2 = _Mtx_lock(param_1 + 0x2318);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  uStackX_8 = CONCAT44((float)*(int *)(lStackX_10 + 0x18) * *(float *)(lStackX_10 + 0x1c),
                       (float)*(int *)(lStackX_10 + 0x14) * *(float *)(lStackX_10 + 0x1c));
  *(uint64_t *)(param_1 + 0xa8) = uStackX_8;
  FUN_18037e900(param_1 + 0x88,auStackX_18[0]);
  iVar2 = _Mtx_unlock(param_1 + 0x2318);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x2148) + 0x3054);
  aiStackX_20[0] = 0;
  do {
    if (aiStackX_20[0] == iVar2) {
      alStack_a8[0] = 0;
      alStack_a8[1] = 0;
      alStack_a8[2] = 0;
      uStack_90 = 3;
      FUN_180378550(param_1,alStack_a8,auStackX_18[0],aiStackX_20[0]);
      lVar1 = alStack_a8[0];
      plStack_80 = &lStackX_10;
      uStack_78 = auStackX_18;
      uStack_70 = aiStackX_20;
      pcStack_58 = FUN_180380200;
      pcStack_50 = FUN_1803800d0;
      lStack_88 = param_1;
      plStack_68 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,0x20,8,system_allocation_flags);
      *plStack_68 = lStack_88;
      plStack_68[1] = (longlong)plStack_80;
      *(int32_t *)(plStack_68 + 2) = (int32_t)uStack_78;
      *(int32_t *)((longlong)plStack_68 + 0x14) = uStack_78._4_4_;
      *(int32_t *)(plStack_68 + 3) = (int32_t)uStack_70;
      *(int32_t *)((longlong)plStack_68 + 0x1c) = uStack_70._4_4_;
      FUN_18015b810();
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar1);
      }
    }
    aiStackX_20[0] = aiStackX_20[0] + 1;
  } while (aiStackX_20[0] < 4);
  if (lStackX_10 != 0) {
    *(int8_t *)(lStackX_10 + 0x170) = 1;
    LOCK();
    *(int32_t *)(lStackX_10 + 0x10) = 0;
    UNLOCK();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180379101)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180378d40(longlong param_1,longlong param_2)
void FUN_180378d40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint64_t *puVar2;
  char cVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint64_t *puVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iStackX_18;
  int aiStackX_20 [2];
  longlong *plStack_270;
  int32_t **ppuStack_268;
  longlong lStack_260;
  longlong lStack_258;
  longlong lStack_250;
  longlong *plStack_248;
  longlong lStack_240;
  int32_t uStack_238;
  int32_t uStack_234;
  int32_t uStack_230;
  int32_t uStack_22c;
  longlong *plStack_228;
  int32_t *puStack_220;
  longlong lStack_218;
  int32_t uStack_210;
  ulonglong uStack_208;
  uint64_t uStack_200;
  uint64_t uStack_1f8;
  int32_t uStack_1f0;
  int32_t uStack_1ec;
  int32_t uStack_1e8;
  int32_t uStack_1e4;
  int32_t uStack_1e0;
  int32_t uStack_1dc;
  int32_t uStack_1d8;
  int32_t uStack_1c8;
  int32_t uStack_1c4;
  int32_t uStack_1c0;
  int32_t uStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int32_t uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  int32_t uStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  int32_t uStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  int32_t uStack_16c;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  longlong *plStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  int32_t uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int32_t uStack_11c;
  int *apiStack_118 [2];
  void *puStack_108;
  void *puStack_100;
  uint64_t uStack_f8;
  
  uStack_f8 = 0xfffffffffffffffe;
  lVar16 = (longlong)*(int *)(param_2 + 0x3054);
  plVar18 = (longlong *)((lVar16 + 0x10b) * 0x20 + param_1);
  iStackX_18 = 0;
  lVar9 = *plVar18;
  if (plVar18[1] - lVar9 >> 3 != 0) {
    lStack_240 = 0;
    lStack_260 = lVar16;
    plStack_248 = plVar18;
    do {
      lVar9 = **(longlong **)(lStack_240 + lVar9);
      if (lVar9 != 0) {
        iVar7 = *(int *)(lVar9 + 0x50);
        if (iVar7 != -1) {
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          else {
            lVar10 = *(longlong *)(render_system_data_memory + 0xd0) - *(longlong *)(render_system_data_memory + 200) >> 3
            ;
            if (iVar7 == lVar10) {
              iVar7 = (int)lVar10 + -1;
            }
          }
          lVar10 = *(longlong *)
                    (*(longlong *)(*(longlong *)(render_system_data_memory + 200) + (longlong)iVar7 * 8) + 0x68
                    + lVar16 * 8);
          uVar8 = 0;
          uVar17 = *(longlong *)(lVar10 + 0x10) - *(longlong *)(lVar10 + 8) >> 3;
LAB_180378e96:
          lVar16 = lStack_260;
          if (uVar8 < (uint)uVar17) {
            if (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar10 + 8) + ((ulonglong)uVar8 % uVar17) * 8) + 0x38)
                == 0) goto code_r0x000180378eb1;
            if (*(char *)(lVar9 + 0x141) == '\0') {
              iVar7 = (int)((*(longlong *)(lVar9 + 0x88) - *(longlong *)(lVar9 + 0x80)) / 0x28);
            }
            else {
              iVar7 = *(int *)(lVar9 + 0x148);
            }
            aiStackX_20[0] = 0;
            iVar14 = 0;
            lVar16 = (longlong)iVar7;
            lStack_250 = lVar16;
            if (0 < iVar7) {
              lVar11 = 0;
              do {
                lVar15 = *(longlong *)(lVar9 + 0x80);
                lVar1 = *(longlong *)
                         (*(longlong *)
                           (*(longlong *)(lVar10 + 8) +
                           ((ulonglong)(uint)(int)*(char *)(lVar11 + 0x20 + lVar15) %
                           (ulonglong)
                           (*(longlong *)(lVar10 + 0x10) - *(longlong *)(lVar10 + 8) >> 3)) * 8) +
                         0x38);
                uStack_1c0 = *(int32_t *)(lVar11 + 8 + lVar15);
                uStack_1c4 = *(int32_t *)(lVar11 + 4 + lVar15);
                uStack_1c8 = *(int32_t *)(lVar11 + lVar15);
                uStack_1bc = 0x7f7fffff;
                if ((lVar1 != 0) && (cVar3 = FUN_1801b5f00(param_2), cVar3 != '\0')) {
                  iVar14 = iVar14 + 1;
                  ppuStack_268 = apiStack_118;
                  puStack_108 = &unknown_var_1104_ptr;
                  puStack_100 = &unknown_var_3488_ptr;
                  apiStack_118[0] = aiStackX_20;
                  FUN_180149bd0(lVar1);
                }
                lVar11 = lVar11 + 0x28;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
            while (uVar4 = system_context_ptr, iVar14 != aiStackX_20[0]) {
              lVar16 = FUN_18005e890(system_context_ptr);
              if (lVar16 != 0) {
                plVar18 = (longlong *)FUN_18005e890(uVar4);
                (**(code **)(*plVar18 + 0x20))(plVar18);
              }
            }
            lVar16 = lStack_260;
            plVar18 = plStack_248;
            if (0 < lStack_250) {
              lVar11 = 0;
              lVar16 = lStack_250;
              do {
                lVar15 = *(longlong *)(lVar9 + 0x80);
                plVar18 = *(longlong **)
                           (*(longlong *)
                             (*(longlong *)(lVar10 + 8) +
                             ((ulonglong)(uint)(int)*(char *)(lVar11 + 0x20 + lVar15) %
                             (ulonglong)
                             (*(longlong *)(lVar10 + 0x10) - *(longlong *)(lVar10 + 8) >> 3)) * 8) +
                           0x38);
                uStack_230 = *(int32_t *)(lVar11 + 8 + lVar15);
                uStack_234 = *(int32_t *)(lVar11 + 4 + lVar15);
                uStack_238 = *(int32_t *)(lVar11 + lVar15);
                uStack_22c = 0x7f7fffff;
                if ((plVar18 != (longlong *)0x0) &&
                   (lStack_258 = lVar16, cVar3 = FUN_1801b5f00(param_2), cVar3 != '\0')) {
                  ppuStack_268 = &puStack_220;
                  uStack_158 = 0;
                  uStack_208 = 0;
                  uStack_210 = 0;
                  lStack_218 = 0;
                  puStack_220 = (int32_t *)&system_data_buffer_ptr;
                  plStack_228 = (longlong *)0x0;
                  uStack_200 = 0x3f8000003f800000;
                  uStack_1f8 = 0x7f7fffff3f800000;
                  uStack_1f0 = 0;
                  uStack_1ec = 0x3f800000;
                  uStack_1e8 = 0;
                  uStack_1e4 = 0;
                  uStack_1e0 = 0;
                  uStack_1dc = 0;
                  uStack_1d8 = 0xffffffff;
                  plStack_150 = plVar18;
                  (**(code **)(*plVar18 + 0x28))(plVar18);
                  plStack_150 = plStack_228;
                  if (plStack_228 != (longlong *)0x0) {
                    lVar1 = *plStack_228;
                    plStack_228 = plVar18;
                    (**(code **)(lVar1 + 0x38))();
                    plVar18 = plStack_228;
                  }
                  plStack_228 = plVar18;
                  uStack_1f0 = 0x4000000;
                  uVar17 = *(ulonglong *)(lVar11 + 0x10 + lVar15);
                  fVar19 = (float)func_0x0001800adf40(uVar17 & 0xffff);
                  fVar20 = (float)func_0x0001800adf40(uVar17 >> 0x10);
                  fVar21 = (float)func_0x0001800adf40(uVar17 >> 0x20);
                  fVar22 = (float)func_0x0001800adf40(uVar17 >> 0x30);
                  fVar23 = fVar21 + fVar21;
                  fVar24 = fVar22 + fVar22;
                  fVar25 = (fVar20 + fVar20) * fVar20;
                  fStack_124 = fVar19 * (fVar20 + fVar20);
                  fStack_148 = 1.0 - (fVar24 * fVar22 + fVar23 * fVar21);
                  fStack_144 = fVar19 * fVar24 + fVar23 * fVar20;
                  fStack_140 = fVar24 * fVar20 - fVar19 * fVar23;
                  fStack_138 = fVar23 * fVar20 - fVar19 * fVar24;
                  fStack_134 = 1.0 - (fVar24 * fVar22 + fVar25);
                  fStack_130 = fStack_124 + fVar24 * fVar21;
                  fStack_128 = fVar19 * fVar23 + fVar24 * fVar20;
                  fStack_124 = fVar24 * fVar21 - fStack_124;
                  fStack_120 = 1.0 - (fVar23 * fVar21 + fVar25);
                  uStack_16c = uStack_11c;
                  fStack_1b0 = -fStack_140;
                  fStack_1b4 = -fStack_144;
                  fStack_1b8 = -fStack_148;
                  uStack_1ac = 0x7f7fffff;
                  uStack_17c = 0x7f7fffff;
                  uStack_18c = uStack_12c;
                  fStack_170 = *(float *)(lVar11 + 0x18 + lVar15);
                  fStack_198 = fStack_138 * fStack_170;
                  fStack_194 = fStack_134 * fStack_170;
                  fStack_190 = fStack_130 * fStack_170;
                  fStack_188 = fStack_1b8 * fStack_170;
                  fStack_184 = fStack_1b4 * fStack_170;
                  fStack_180 = fStack_1b0 * fStack_170;
                  fStack_178 = fStack_128 * fStack_170;
                  fStack_174 = fStack_124 * fStack_170;
                  fStack_170 = fStack_120 * fStack_170;
                  uStack_168 = CONCAT44(uStack_234,uStack_238);
                  uStack_160 = CONCAT44(uStack_22c,uStack_230);
                  fStack_1a8 = SQRT(fStack_174 * fStack_174 + fStack_178 * fStack_178 +
                                    fStack_170 * fStack_170);
                  uStack_200 = CONCAT44(fStack_1a8,fStack_1a8);
                  uStack_1f8 = CONCAT44(fStack_1a8,fStack_1a8);
                  fStack_1a4 = fStack_1a8;
                  fStack_1a0 = fStack_1a8;
                  fStack_19c = fStack_1a8;
                  uVar4 = (**(code **)(**(longlong **)(param_2 + 0x318) + 0x50))
                                    (*(longlong **)(param_2 + 0x318),&plStack_228);
                  (**(code **)(**(longlong **)(param_2 + 0x318) + 200))
                            (*(longlong **)(param_2 + 0x318),&plStack_270,&plStack_228,uVar4,
                             &fStack_198);
                  puVar5 = *(uint64_t **)(param_1 + 0x20d8);
                  if (puVar5 < *(uint64_t **)(param_1 + 0x20e0)) {
                    *(uint64_t **)(param_1 + 0x20d8) = puVar5 + 1;
                    *puVar5 = plStack_270;
                    if (plStack_270 != (longlong *)0x0) {
                      (**(code **)(*plStack_270 + 0x28))();
                    }
                  }
                  else {
                    puVar6 = *(uint64_t **)(param_1 + 0x20d0);
                    lVar16 = (longlong)puVar5 - (longlong)puVar6 >> 3;
                    if (lVar16 == 0) {
                      lVar16 = 1;
LAB_180379446:
                      puVar5 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,lVar16 * 8);
                      puVar6 = *(uint64_t **)(param_1 + 0x20d0);
                    }
                    else {
                      lVar16 = lVar16 * 2;
                      if (lVar16 != 0) goto LAB_180379446;
                      puVar5 = (uint64_t *)0x0;
                    }
                    puVar2 = *(uint64_t **)(param_1 + 0x20d8);
                    puVar12 = puVar5;
                    for (; puVar6 != puVar2; puVar6 = puVar6 + 1) {
                      *puVar12 = *puVar6;
                      *puVar6 = 0;
                      puVar12 = puVar12 + 1;
                    }
                    *puVar12 = plStack_270;
                    if (plStack_270 != (longlong *)0x0) {
                      (**(code **)(*plStack_270 + 0x28))();
                    }
                    ppuStack_268 = (int32_t **)(puVar12 + 1);
                    plVar18 = *(longlong **)(param_1 + 0x20d8);
                    plVar13 = *(longlong **)(param_1 + 0x20d0);
                    if (plVar13 != plVar18) {
                      do {
                        if ((longlong *)*plVar13 != (longlong *)0x0) {
                          (**(code **)(*(longlong *)*plVar13 + 0x38))();
                        }
                        plVar13 = plVar13 + 1;
                      } while (plVar13 != plVar18);
                      plVar13 = *(longlong **)(param_1 + 0x20d0);
                    }
                    if (plVar13 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
                      FUN_18064e900(plVar13);
                    }
                    *(uint64_t **)(param_1 + 0x20d0) = puVar5;
                    *(int32_t ***)(param_1 + 0x20d8) = ppuStack_268;
                    *(uint64_t **)(param_1 + 0x20e0) = puVar5 + lVar16;
                    lVar16 = lStack_258;
                  }
                  if (plStack_270 != (longlong *)0x0) {
                    (**(code **)(*plStack_270 + 0x38))();
                  }
                  ppuStack_268 = &puStack_220;
                  puStack_220 = (int32_t *)&system_data_buffer_ptr;
                  if (lStack_218 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  lStack_218 = 0;
                  uStack_208 = uStack_208 & 0xffffffff00000000;
                  puStack_220 = (int32_t *)&system_state_ptr;
                  if (plStack_228 != (longlong *)0x0) {
                    (**(code **)(*plStack_228 + 0x38))();
                  }
                }
                lVar11 = lVar11 + 0x28;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
              lVar15 = 0;
              lStack_258 = 0;
              lVar11 = lStack_250;
              do {
                lVar16 = *(longlong *)
                          (*(longlong *)
                            (*(longlong *)(lVar10 + 8) +
                            ((ulonglong)
                             (uint)(int)*(char *)(lVar15 + 0x20 + *(longlong *)(lVar9 + 0x80)) %
                            (ulonglong)
                            (*(longlong *)(lVar10 + 0x10) - *(longlong *)(lVar10 + 8) >> 3)) * 8) +
                          0x38);
                if (lVar16 != 0) {
                  *(int32_t *)(lVar16 + 0x128) = 0;
                  FUN_18014e690(*(uint64_t *)(lVar16 + 0xc0));
                  *(uint64_t *)(lVar16 + 0xc0) = 0;
                }
                lVar15 = lVar15 + 0x28;
                lVar11 = lVar11 + -1;
                lVar16 = lStack_260;
                plVar18 = plStack_248;
              } while (lVar11 != 0);
            }
          }
        }
      }
      iStackX_18 = iStackX_18 + 1;
      lStack_240 = lStack_240 + 8;
      lVar9 = *plVar18;
    } while ((ulonglong)(longlong)iStackX_18 < (ulonglong)(plVar18[1] - lVar9 >> 3));
  }
  return;
code_r0x000180378eb1:
  uVar8 = uVar8 + 1;
  goto LAB_180378e96;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1803796b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  
  iVar7 = 0;
  iVar9 = 0;
  lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x2148) + 0x3054);
  plVar10 = (longlong *)((lVar8 + 0x10b) * 0x20 + param_1);
  lVar2 = *plVar10;
  if (plVar10[1] - lVar2 >> 3 != 0) {
    lVar11 = 0;
    do {
      if (**(longlong **)(lVar11 + lVar2) != 0) {
        iVar5 = *(int *)(**(longlong **)(lVar11 + lVar2) + 0x50);
        if (-1 < iVar5) {
          lVar3 = *(longlong *)(render_system_data_memory + 0xd0) - *(longlong *)(render_system_data_memory + 200) >> 3;
          if (iVar5 == lVar3) {
            iVar5 = (int)lVar3 + -1;
          }
          lVar3 = *(longlong *)
                   (*(longlong *)(*(longlong *)(render_system_data_memory + 200) + (longlong)iVar5 * 8) + 0x68
                   + lVar8 * 8);
          uVar4 = *(longlong *)(lVar3 + 0x10) - *(longlong *)(lVar3 + 8) >> 3;
          if ((int)uVar4 != 0) {
            uVar6 = 0;
            uVar4 = uVar4 & 0xffffffff;
            do {
              plVar1 = *(longlong **)
                        (*(longlong *)
                          (*(longlong *)(lVar3 + 8) +
                          (uVar6 % (ulonglong)
                                   (*(longlong *)(lVar3 + 0x10) - *(longlong *)(lVar3 + 8) >> 3)) *
                          8) + 0x28);
              if (plVar1 != (longlong *)0x0) {
                iVar5 = (**(code **)(*plVar1 + 0x1a8))();
                iVar7 = iVar7 + iVar5;
              }
              uVar6 = uVar6 + 1;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
            lVar2 = *plVar10;
          }
        }
      }
      iVar9 = iVar9 + 1;
      lVar11 = lVar11 + 8;
    } while ((ulonglong)(longlong)iVar9 < (ulonglong)(plVar10[1] - lVar2 >> 3));
  }
  return iVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1803796fc(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  int unaff_ESI;
  longlong in_R10;
  int unaff_R12D;
  longlong *unaff_R14;
  longlong lVar6;
  longlong in_stack_00000050;
  
  lVar6 = 0;
  do {
    if (**(longlong **)(lVar6 + param_3) != 0) {
      iVar4 = *(int *)(**(longlong **)(lVar6 + param_3) + 0x50);
      if (-1 < iVar4) {
        lVar2 = *(longlong *)(render_system_data_memory + 0xd0) - *(longlong *)(render_system_data_memory + 200) >> 3;
        if (iVar4 == lVar2) {
          iVar4 = (int)lVar2 + -1;
        }
        lVar2 = *(longlong *)
                 (*(longlong *)(*(longlong *)(render_system_data_memory + 200) + (longlong)iVar4 * 8) + 0x68 +
                 in_R10 * 8);
        uVar3 = *(longlong *)(lVar2 + 0x10) - *(longlong *)(lVar2 + 8) >> 3;
        if ((int)uVar3 != 0) {
          uVar5 = 0;
          uVar3 = uVar3 & 0xffffffff;
          do {
            plVar1 = *(longlong **)
                      (*(longlong *)
                        (*(longlong *)(lVar2 + 8) +
                        (uVar5 % (ulonglong)
                                 (*(longlong *)(lVar2 + 0x10) - *(longlong *)(lVar2 + 8) >> 3)) * 8)
                      + 0x28);
            if (plVar1 != (longlong *)0x0) {
              iVar4 = (**(code **)(*plVar1 + 0x1a8))();
              unaff_ESI = unaff_ESI + iVar4;
            }
            uVar5 = uVar5 + 1;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
          param_3 = *unaff_R14;
          in_R10 = in_stack_00000050;
        }
      }
    }
    unaff_R12D = unaff_R12D + 1;
    lVar6 = lVar6 + 8;
  } while ((ulonglong)(longlong)unaff_R12D < (ulonglong)(unaff_R14[1] - param_3 >> 3));
  return unaff_ESI;
}



int32_t FUN_1803797f8(void)

{
  int32_t unaff_ESI;
  
  return unaff_ESI;
}



// WARNING: Removing unreachable block (ram,0x000180379ee3)
// WARNING: Removing unreachable block (ram,0x000180379ee7)
// WARNING: Removing unreachable block (ram,0x000180379ef6)
// WARNING: Removing unreachable block (ram,0x000180379ef0)
// WARNING: Removing unreachable block (ram,0x000180379efd)
// WARNING: Removing unreachable block (ram,0x000180379f05)
// WARNING: Removing unreachable block (ram,0x000180379f0f)
// WARNING: Removing unreachable block (ram,0x000180379f15)
// WARNING: Removing unreachable block (ram,0x000180379dc3)
// WARNING: Removing unreachable block (ram,0x000180379dc7)
// WARNING: Removing unreachable block (ram,0x000180379dd6)
// WARNING: Removing unreachable block (ram,0x000180379dd0)
// WARNING: Removing unreachable block (ram,0x000180379ddd)
// WARNING: Removing unreachable block (ram,0x000180379de5)
// WARNING: Removing unreachable block (ram,0x000180379def)
// WARNING: Removing unreachable block (ram,0x000180379df5)
// WARNING: Removing unreachable block (ram,0x000180379e53)
// WARNING: Removing unreachable block (ram,0x000180379e57)
// WARNING: Removing unreachable block (ram,0x000180379e66)
// WARNING: Removing unreachable block (ram,0x000180379e60)
// WARNING: Removing unreachable block (ram,0x000180379e6d)
// WARNING: Removing unreachable block (ram,0x000180379e75)
// WARNING: Removing unreachable block (ram,0x000180379e7f)
// WARNING: Removing unreachable block (ram,0x000180379e85)
// WARNING: Removing unreachable block (ram,0x000180379f73)
// WARNING: Removing unreachable block (ram,0x000180379f77)
// WARNING: Removing unreachable block (ram,0x000180379f86)
// WARNING: Removing unreachable block (ram,0x000180379f80)
// WARNING: Removing unreachable block (ram,0x000180379f8d)
// WARNING: Removing unreachable block (ram,0x000180379f95)
// WARNING: Removing unreachable block (ram,0x000180379f9f)
// WARNING: Removing unreachable block (ram,0x000180379fa5)
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



