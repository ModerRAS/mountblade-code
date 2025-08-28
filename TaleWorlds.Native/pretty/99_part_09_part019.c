#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part019.c - 1 个函数

// 函数: void FUN_1805c63f0(longlong *param_1,uint64_t *param_2,int8_t *param_3)
void FUN_1805c63f0(longlong *param_1,uint64_t *param_2,int8_t *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  int8_t auVar4 [12];
  uint64_t uVar5;
  uint64_t uVar6;
  int8_t auVar7 [12];
  char cVar8;
  uint64_t *puVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  int8_t auVar21 [12];
  int8_t auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int8_t auStack_288 [32];
  int8_t auStack_268 [8];
  int32_t uStack_260;
  int32_t uStack_25c;
  uint64_t uStack_258;
  uint64_t *puStack_250;
  uint64_t uStack_248;
  float fStack_240;
  float fStack_23c;
  int32_t uStack_238;
  int32_t uStack_234;
  float fStack_230;
  float fStack_22c;
  int32_t uStack_228;
  int32_t uStack_224;
  int32_t uStack_220;
  uint64_t uStack_218;
  uint64_t uStack_200;
  uint64_t uStack_1f8;
  float fStack_1f0;
  int32_t uStack_1ec;
  int32_t uStack_1e8;
  int32_t uStack_1e4;
  uint64_t uStack_1e0;
  int32_t uStack_1d8;
  void *puStack_1c8;
  int32_t uStack_1c0;
  int32_t uStack_1bc;
  int8_t uStack_1b8;
  longlong *plStack_1b0;
  uint64_t uStack_1a8;
  float fStack_198;
  float fStack_194;
  int32_t uStack_190;
  int32_t uStack_18c;
  int8_t auStack_188 [16];
  int8_t auStack_178 [16];
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  float fStack_140;
  float fStack_13c;
  int32_t uStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  void **ppuStack_128;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  int32_t uStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  int32_t uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  uint64_t uStack_e0;
  int iStack_d8;
  ulonglong uStack_c8;
  
  uStack_1a8 = 0xfffffffffffffffe;
  uStack_c8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_288;
  *param_3 = 1;
  lVar16 = param_1[0x41e];
  if (lVar16 == 0) {
    lVar16 = *param_1;
    uVar11 = *(ulonglong *)(lVar16 + 0x9d8);
    lVar17 = *(longlong *)(lVar16 + 0x20);
    if ((uVar11 != 0) && (cVar8 = FUN_18038d0a0(uVar11,lVar17 + 0xc), cVar8 != '\0'))
    goto LAB_1805c70c1;
    uVar18 = 0;
  }
  else {
    lVar17 = *(longlong *)(lVar16 + 0xa8);
    param_1[0x41f] = *(longlong *)(lVar16 + 0xa0);
    param_1[0x420] = lVar17;
    uStack_118 = *(uint64_t *)(param_1[0x291] + 0x18);
    fVar27 = 0.0;
    uStack_e0 = 0;
    uStack_100 = (int32_t)*(uint64_t *)(lVar16 + 0xa0);
    fStack_fc = (float)((ulonglong)*(uint64_t *)(lVar16 + 0xa0) >> 0x20);
    fStack_f8 = (float)*(uint64_t *)(lVar16 + 0xa8);
    fStack_f4 = (float)((ulonglong)*(uint64_t *)(lVar16 + 0xa8) >> 0x20);
    uStack_f0 = 0;
    fStack_ec = 0.0;
    fStack_e8 = 0.0;
    fStack_e4 = 0.0;
    uStack_110 = 0;
    uStack_108 = 0;
    puVar9 = (uint64_t *)FUN_1803975b0();
    uStack_e0 = *puVar9;
    uVar18 = 0;
    iStack_d8 = 0;
    FUN_180487c70(&uStack_118,3);
    *param_2 = uStack_118;
    param_2[3] = CONCAT44(fStack_fc,uStack_100);
    param_2[4] = CONCAT44(fStack_f4,fStack_f8);
    param_2[5] = CONCAT44(fStack_ec,uStack_f0);
    param_2[6] = CONCAT44(fStack_e4,fStack_e8);
    param_2[1] = uStack_110;
    param_2[2] = uStack_108;
    param_2[7] = uStack_e0;
    *(int *)(param_2 + 8) = iStack_d8;
    uVar11 = param_1[0x41e];
    lVar16 = *(longlong *)(uVar11 + 0x28);
    fVar19 = *(float *)(lVar16 + 0x10c) - *(float *)(lVar16 + 0xfc);
    fVar23 = *(float *)(lVar16 + 0x108) - *(float *)(lVar16 + 0xf8);
    if (fVar23 <= fVar19) {
      fVar23 = fVar19;
    }
    if ((*(uint *)(param_1 + 2) >> 0x19 & 1) == 0) {
      *(int32_t *)((longlong)param_1 + 0xb4) = *(int32_t *)(*(longlong *)param_1[1] + 0x7dc);
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x2000000;
    }
    fVar23 = *(float *)((longlong)param_1 + 0xb4) * 3.0 + fVar23;
    uStack_248 = *(longlong **)(*param_1 + 0x20);
    uVar5 = *(uint64_t *)((longlong)uStack_248 + 0xc);
    puStack_250 = *(uint64_t **)((longlong)uStack_248 + 0x14);
    fVar19 = 0.0;
    if ((int)param_1[0x421] != -1) {
      lVar16 = param_1[0x291];
      puStack_250 = (uint64_t *)
                    (*(longlong *)(lVar16 + 0x98d2a8) +
                    (uVar11 % (ulonglong)*(uint *)(lVar16 + 0x98d2b0)) * 8);
      auStack_268 = (int8_t  [8])puStack_250;
      for (uStack_258 = (ulonglong *)*puStack_250; uStack_258 != (ulonglong *)0x0;
          uStack_258 = (ulonglong *)uStack_258[3]) {
        if (uVar11 == *uStack_258) goto LAB_1805c6622;
      }
      puStack_250 = (uint64_t *)
                    (*(longlong *)(lVar16 + 0x98d2a8) + *(longlong *)(lVar16 + 0x98d2b0) * 8);
      uStack_258 = (ulonglong *)*puStack_250;
LAB_1805c6622:
                    // WARNING: Subroutine does not return
      FUN_1808fd400(puStack_250,
                    ((float)(int)param_1[0x421] * 6.2831855) / (float)(int)uStack_258[2] - 3.1415927
                   );
    }
    uStack_258._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
    uStack_258._0_4_ = (float)uVar5;
    fVar20 = *(float *)(param_1[0x41e] + 0xa4) - uStack_258._4_4_;
    fVar24 = *(float *)(param_1[0x41e] + 0xa0) - (float)uStack_258;
    uVar10 = *(uint *)(param_1 + 2);
    if ((uVar10 & 0x20) == 0) {
      param_1[0x15] = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
      uVar10 = uVar10 | 0x20;
      *(uint *)(param_1 + 2) = uVar10;
    }
    lVar16 = param_1[0x15];
    uStack_258 = (ulonglong *)uVar5;
    if (lVar16 != 0) {
      if ((uVar10 & 0x20) == 0) {
        param_1[0x15] = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
        uVar10 = uVar10 | 0x20;
        *(uint *)(param_1 + 2) = uVar10;
        lVar16 = param_1[0x15];
      }
      if (((*(byte *)((longlong)*(int *)(lVar16 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar16 + 0xd0)
                     ) & 1) != 0) && (fVar24 * fVar24 + fVar20 * fVar20 <= fVar23 * fVar23)) {
        func_0x0001805b7050(param_1 + 1);
        uStack_248 = (longlong *)0x0;
        lVar16 = param_1[0x41e];
        plVar1 = *(longlong **)(lVar16 + 0x1c0);
        plVar15 = plVar1;
        plVar2 = uStack_248;
        if (*(longlong *)(lVar16 + 0x1c8) - (longlong)plVar1 >> 3 != 0) {
          do {
            if (*(longlong *)(*plVar15 + 0x110) != 0) {
              plVar2 = (longlong *)plVar1[(int)uVar18];
              if (plVar2 != (longlong *)0x0) {
                auStack_268 = (int8_t  [8])plVar2;
                (**(code **)(*plVar2 + 0x28))(plVar2);
              }
              break;
            }
            uVar10 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar10;
            plVar15 = plVar15 + 1;
          } while ((ulonglong)(longlong)(int)uVar10 <
                   (ulonglong)(*(longlong *)(lVar16 + 0x1c8) - (longlong)plVar1 >> 3));
        }
        uStack_248 = plVar2;
        plVar2 = uStack_248;
        plVar1 = (longlong *)param_1[0x41e];
        if (plVar1 != (longlong *)0x0) {
          auStack_268 = (int8_t  [8])plVar1;
          (**(code **)(*plVar1 + 0x28))(plVar1);
        }
        uStack_248 = plVar1;
        auStack_268 = (int8_t  [8])plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2);
        }
        bVar3 = false;
        if (plVar1 == (longlong *)0x0) {
LAB_1805c6da5:
          fVar23 = *(float *)((longlong)param_2 + 0x1c);
          fVar24 = fVar23 - *(float *)(*(longlong *)(*param_1 + 0x20) + 0x10);
          fVar19 = *(float *)(param_2 + 3);
          fVar25 = fVar19 - *(float *)(*(longlong *)(*param_1 + 0x20) + 0xc);
          fVar20 = fVar25 * fVar25 + fVar24 * fVar24;
          auVar22 = rsqrtss(ZEXT416((uint)(fVar24 * fVar24)),ZEXT416((uint)fVar20));
          fVar27 = auVar22._0_4_;
          fVar27 = fVar27 * 0.5 * (3.0 - fVar20 * fVar27 * fVar27);
          if ((*(uint *)(param_1 + 2) >> 0x1a & 1) == 0) {
            *(int32_t *)(param_1 + 0x17) = *(int32_t *)(*(longlong *)param_1[1] + 0x7e0);
            *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x4000000;
            fVar23 = *(float *)((longlong)param_2 + 0x1c);
            fVar19 = *(float *)(param_2 + 3);
          }
          auStack_268._4_4_ = fVar23 - *(float *)(param_1 + 0x17) * fVar27 * fVar24 * 0.5;
          auStack_268._0_4_ = fVar19 - *(float *)(param_1 + 0x17) * fVar25 * fVar27 * 0.5;
          if ((fVar19 != (float)auStack_268._0_4_) || (fVar23 != (float)auStack_268._4_4_)) {
            if (*(int *)(param_2 + 8) != 0) {
              *(int32_t *)(param_2 + 8) = 0;
            }
            param_2[3] = auStack_268;
          }
        }
        else {
          lVar16 = *(longlong *)(*param_1 + 0x6d8);
          fVar24 = *(float *)((longlong)plVar1 + 0xa4) - *(float *)(lVar16 + 0x8c8);
          fVar26 = *(float *)(plVar1 + 0x14) - *(float *)(lVar16 + 0x8c4);
          fVar20 = fVar26 * fVar26 + fVar24 * fVar24;
          auVar22 = rsqrtss(ZEXT416((uint)(fVar24 * fVar24)),ZEXT416((uint)fVar20));
          fVar23 = auVar22._0_4_;
          fVar23 = fVar23 * 0.5 * (3.0 - fVar20 * fVar23 * fVar23);
          fVar26 = fVar26 * fVar23;
          fVar24 = fVar23 * fVar24;
          fVar25 = *(float *)(*param_1 + 0x7dc) * 0.8;
          fStack_230 = (float)func_0x0001805b7780(param_1);
          fStack_230 = fStack_230 + fVar23 * fVar20;
          fStack_22c = fVar24 * fStack_230;
          fStack_230 = fVar26 * fStack_230;
          lVar16 = *(longlong *)(*param_1 + 0x6d8);
          uStack_238 = *(int32_t *)(lVar16 + 0x8cc);
          fStack_23c = *(float *)(lVar16 + 0x8c8) - fVar24 * fVar25;
          fStack_240 = *(float *)(lVar16 + 0x8c4) - fVar26 * fVar25;
          auStack_268._4_4_ = fStack_23c;
          auStack_268._0_4_ = fStack_240;
          uStack_260 = uStack_238;
          uStack_25c = 0x7f7fffff;
          uStack_234 = 0x7f7fffff;
          uStack_258 = (ulonglong *)CONCAT44(fStack_22c,fStack_230);
          puStack_250 = (uint64_t *)0x7f7fffff00000000;
          uStack_228 = 0;
          uStack_224 = 0x7f7fffff;
          uStack_220 = 0x47c35000;
          func_0x00018023a1e0(&fStack_230);
          auStack_178._0_4_ = func_0x0001805b7780(param_1);
          fStack_1f0 = fVar24 * 0.1;
          fStack_198 = fVar26 * 0.1;
          puStack_250 = (uint64_t *)0x7f7fffff00000000;
          auVar7._4_8_ = 0;
          auVar7._0_4_ = -fVar25;
          _auStack_268 = auVar7 << 0x40;
          uStack_25c = 0x7f7fffff;
          uStack_1f8 = CONCAT44(fStack_198,(int32_t)uStack_1f8);
          uStack_1ec = 0;
          uStack_1e8 = 0x7f7fffff;
          uStack_1e4 = 0;
          uStack_1e0 = auStack_268._4_8_;
          uStack_1d8 = 0x7f7fffff;
          uStack_1c0 = 2;
          uStack_1b8 = 0;
          puStack_1c8 = &unknown_var_3360_ptr;
          uStack_1bc = 0x71b789;
          iStack_d8 = 0;
          uStack_190 = 0;
          uStack_18c = 0x7f7fffff;
          auVar4._4_8_ = auStack_268._8_8_;
          auVar4._0_4_ = fStack_198;
          auVar21._0_8_ = auVar4._0_8_ << 0x20;
          auVar21._8_4_ = fStack_1f0;
          auStack_178._4_8_ = auVar21._4_8_;
          auStack_178._12_4_ = 0;
          uStack_168 = 0x7f7fffff;
          uStack_160 = uStack_1e0;
          uStack_158 = CONCAT44(auStack_178._0_4_,0x7f7fffff);
          uStack_150 = CONCAT44(fStack_23c,fStack_240);
          uStack_148 = CONCAT44(uStack_234,uStack_238);
          fStack_140 = fStack_230;
          fStack_13c = fStack_22c;
          uStack_138 = uStack_228;
          uStack_134 = uStack_224;
          uStack_130 = uStack_220;
          ppuStack_128 = &puStack_1c8;
          plVar2 = *(longlong **)
                    (*(longlong *)(*(longlong *)(param_1[0x291] + 0x18) + 0x28f8) + 0x318);
          plStack_1b0 = plVar1;
          fStack_194 = fStack_1f0;
          auStack_188 = _auStack_268;
          (**(code **)(*plVar2 + 0x140))(plVar2,&fStack_198,&uStack_118);
          if (0 < iStack_d8) {
            if ((int)param_1[0x421] == -1) {
              if (0.85 <= fStack_e4) {
                fVar20 = -fStack_22c;
                fVar27 = -fStack_230;
                fVar19 = fVar20 * fVar20 + fVar27 * fVar27;
                auVar22 = rsqrtss(ZEXT416((uint)(fVar27 * fVar27)),ZEXT416((uint)fVar19));
                fVar23 = auVar22._0_4_;
                fVar19 = fVar23 * 0.5 * (3.0 - fVar19 * fVar23 * fVar23);
                fVar27 = fVar19 * fVar27;
                fVar19 = fVar19 * fVar20;
              }
              else {
                fVar19 = fStack_e8 * fStack_e8 + fStack_ec * fStack_ec;
                auVar22 = rsqrtss(ZEXT416((uint)(fStack_ec * fStack_ec)),ZEXT416((uint)fVar19));
                fVar23 = auVar22._0_4_;
                fVar19 = fVar23 * 0.5 * (3.0 - fVar19 * fVar23 * fVar23);
                fVar27 = fStack_ec * fVar19;
                fVar19 = fStack_e8 * fVar19;
              }
            }
            lVar16 = *(longlong *)(*param_1 + 0x20);
            fVar23 = fStack_f8 - *(float *)(lVar16 + 0x10);
            fVar20 = fStack_fc - *(float *)(lVar16 + 0xc);
            fVar24 = (fStack_f4 - *(float *)(lVar16 + 0x14)) -
                     *(float *)(*(longlong *)(*param_1 + 0x6d8) + 0x908);
            fVar20 = fVar20 * fVar20 + fVar23 * fVar23 + fVar24 * fVar24;
            auVar22 = rsqrtss(ZEXT416((uint)(fVar24 * fVar24)),ZEXT416((uint)fVar20));
            fVar23 = auVar22._0_4_;
            param_1[0x41f] = CONCAT44(fStack_f8,fStack_fc);
            param_1[0x420] = CONCAT44(uStack_f0,fStack_f4);
            if ((*(uint *)(param_1 + 2) >> 0x1a & 1) == 0) {
              *(int32_t *)(param_1 + 0x17) = *(int32_t *)(*(longlong *)param_1[1] + 0x7e0);
              *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x4000000;
            }
            fVar23 = 1.0 - ABS(fVar23 * 0.5 * (3.0 - fVar20 * fVar23 * fVar23) * fVar24);
            auStack_268._4_4_ = fStack_f8 + *(float *)(param_1 + 0x17) * fVar19 * 0.5 * fVar23;
            auStack_268._0_4_ = *(float *)(param_1 + 0x17) * fVar27 * fVar23 * 0.5 + fStack_fc;
            if (((float)auStack_268._0_4_ != *(float *)(param_2 + 3)) ||
               ((float)auStack_268._4_4_ != *(float *)((longlong)param_2 + 0x1c))) {
              if (*(int *)(param_2 + 8) != 0) {
                *(int32_t *)(param_2 + 8) = 0;
              }
              param_2[3] = auStack_268;
            }
            bVar3 = true;
          }
          iStack_d8 = 0;
          if (!bVar3) goto LAB_1805c6da5;
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1);
        }
        goto LAB_1805c7137;
      }
    }
    fVar23 = *(float *)(param_2 + 3);
    fVar27 = fVar23 - *(float *)(*(longlong *)(*param_1 + 0x20) + 0xc);
    fVar19 = *(float *)((longlong)param_2 + 0x1c);
    fVar20 = fVar19 - *(float *)(*(longlong *)(*param_1 + 0x20) + 0x10);
    fVar24 = fVar27 * fVar27 + fVar20 * fVar20;
    auVar22 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
    fVar25 = auVar22._0_4_;
    fVar24 = fVar25 * 0.5 * (3.0 - fVar24 * fVar25 * fVar25);
    fVar27 = fVar27 * fVar24;
    fVar20 = fVar20 * fVar24;
    if ((uVar10 >> 0x1a & 1) == 0) {
      *(int32_t *)(param_1 + 0x17) = *(int32_t *)(*(longlong *)param_1[1] + 0x7e0);
      *(uint *)(param_1 + 2) = uVar10 | 0x4000000;
      fVar23 = *(float *)(param_2 + 3);
      fVar19 = *(float *)((longlong)param_2 + 0x1c);
    }
    fVar26 = *(float *)(param_1 + 0x17) * 0.5;
    fVar24 = fVar23 - fVar26 * fVar27;
    fVar25 = fVar19 - fVar26 * fVar20;
    uStack_248 = (longlong *)CONCAT44(fVar25,fVar24);
    if ((fVar23 != fVar24) || (fVar19 != fVar25)) {
      if (*(int *)(param_2 + 8) != 0) {
        *(int32_t *)(param_2 + 8) = 0;
      }
      param_2[3] = uStack_248;
    }
    iVar13 = 1;
    iVar12 = 1;
    do {
      fVar23 = *(float *)(param_2 + 3) - fVar26 * fVar27 * (float)iVar13;
      fVar19 = *(float *)((longlong)param_2 + 0x1c) - fVar26 * fVar20 * (float)iVar13;
      uStack_248 = (longlong *)CONCAT44(fVar19,fVar23);
      if ((*(float *)(param_2 + 3) != fVar23) || (*(float *)((longlong)param_2 + 0x1c) != fVar19)) {
        if (*(int *)(param_2 + 8) != 0) {
          *(int32_t *)(param_2 + 8) = 0;
        }
        param_2[3] = uStack_248;
      }
      if (*(longlong *)(*param_1 + 0x9d8) == 0) goto LAB_1805c7137;
      FUN_180487c70(param_2,2);
      if ((1 < *(int *)(param_2 + 8)) && (param_2[1] != 0)) {
        FUN_180487c70(param_2,2);
        uVar11 = uVar18;
        if (1 < *(int *)(param_2 + 8)) {
          uVar11 = param_2[1];
        }
        if (*(int *)(uVar11 + 0x128) == *(int *)(*(longlong *)(*param_1 + 0x9d8) + 0x128))
        goto LAB_1805c7137;
      }
      iVar14 = iVar13 + 1;
      bVar3 = 4 < iVar13;
      fVar23 = fVar20;
      iVar13 = iVar14;
      if ((bVar3) && (iVar14 = iVar12 + 1, bVar3 = iVar12 < 4, iVar12 = iVar14, bVar3)) {
        iVar13 = 1;
        fVar23 = -fVar27;
        fVar27 = fVar20;
      }
      fVar20 = fVar23;
    } while (iVar12 < 4);
    lVar16 = *param_1;
    uVar11 = *(ulonglong *)(lVar16 + 0x9d8);
    lVar17 = *(longlong *)(lVar16 + 0x20);
    if ((uVar11 != 0) && (cVar8 = FUN_18038d0a0(uVar11,lVar17 + 0xc), cVar8 != '\0')) {
LAB_1805c70c1:
      uVar18 = uVar11;
    }
  }
  uStack_1e0 = 0;
  uStack_218 = *(uint64_t *)(*(longlong *)(lVar16 + 0x8d8) + 0x18);
  uStack_200 = *(uint64_t *)(lVar17 + 0xc);
  uStack_1f8 = *(uint64_t *)(lVar17 + 0x14);
  uVar5 = *(uint64_t *)(lVar17 + 0xb0);
  uVar6 = *(uint64_t *)(lVar17 + 0xb8);
  *(int32_t *)(param_2 + 8) = 3;
  param_2[7] = uStack_200;
  param_2[2] = uVar11;
  param_2[1] = uVar18;
  param_2[5] = uVar5;
  param_2[6] = uVar6;
  param_2[3] = uStack_200;
  param_2[4] = uStack_1f8;
  *param_2 = uStack_218;
LAB_1805c7137:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_c8 ^ (ulonglong)auStack_288);
}






