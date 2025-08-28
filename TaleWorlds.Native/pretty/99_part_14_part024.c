#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_14_part024.c - 2 个函数
// 函数: void function_8fea60(uint64_t param_1,uint64_t param_2)
void function_8fea60(uint64_t param_1,uint64_t param_2)
{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int8_t auVar5 [12];
  int8_t auVar6 [12];
  uint uVar7;
  uint uVar8;
  uint64_t uVar9;
  int iVar10;
  float fVar12;
  int iVar13;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  int8_t auVar11 [16];
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  int8_t auVar14 [16];
  float fVar15;
  float fVar16;
  int8_t auVar17 [16];
  int8_t auVar18 [16];
  double dVar19;
  int8_t unaff_XMM8 [16];
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  float fVar22;
  float fVar23;
  int8_t unaff_XMM10 [16];
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  uint uVar26;
  double dVar27;
  int8_t auVar28 [16];
  double dVar30;
  double dVar31;
  int8_t auVar29 [16];
  float fVar33;
  int8_t auVar32 [16];
  double dVar34;
  int8_t auVar36 [16];
  double dVar35;
  double dVar38;
  double dVar39;
  int8_t auVar37 [16];
  float afStack_100 [16];
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  fVar33 = (float)((uint64_t)param_2 >> 0x20);
  afStack_100[0] = (float)param_2;
  fVar12 = (float)((uint64_t)param_1 >> 0x20);
  dVar19 = (double)(float)param_1;
  dVar4 = (double)fVar12;
  uVar8 = (uint)((uint64_t)dVar4 >> 0x20);
  uVar26 = (uint)((uint64_t)(double)in_XMM0_Dd >> 0x20);
  auVar28._0_8_ = (uint64_t)(double)in_XMM0_Dc & 0xfffffffffffff;
  auVar28._8_4_ = SUB84((double)in_XMM0_Dd,0);
  auVar28._12_4_ = uVar26 & 0xfffff;
  auVar36._0_8_ = (uint64_t)dVar19 & 0xfffffffffffff;
  auVar36._8_4_ = SUB84(dVar4,0);
  auVar36._12_4_ = uVar8 & 0xfffff;
  dVar34 = SUB168(auVar36 | system_system_memory,0);
  fVar15 = (float)dVar34;
  dVar38 = SUB168(auVar36 | system_system_memory,8);
  fVar16 = (float)dVar38;
  dVar27 = SUB168(auVar28 | system_system_memory,0);
  fVar22 = (float)dVar27;
  dVar30 = SUB168(auVar28 | system_system_memory,8);
  fVar23 = (float)dVar30;
  auVar20._4_4_ = fVar16;
  auVar20._0_4_ = fVar15;
  auVar20._8_4_ = fVar15;
  auVar20._12_4_ = fVar16;
  auVar20 = rcpps(unaff_XMM8,auVar20);
  auVar24._4_4_ = fVar23;
  auVar24._0_4_ = fVar22;
  auVar24._8_4_ = fVar22;
  auVar24._12_4_ = fVar23;
  auVar24 = rcpps(unaff_XMM10,auVar24);
  dVar4 = ((double)auVar20._0_4_ + 6755399441055744.0) - 6755399441055744.0;
  dVar1 = ((double)auVar20._4_4_ + 6755399441055744.0) - 6755399441055744.0;
  dVar2 = ((double)auVar24._0_4_ + 6755399441055744.0) - 6755399441055744.0;
  dVar3 = ((double)auVar24._4_4_ + 6755399441055744.0) - 6755399441055744.0;
  uVar7 = (uint)((uint64_t)dVar4 >> 0x28);
  dVar34 = dVar34 * dVar4 - 1.0;
  dVar38 = dVar38 * dVar1 - 1.0;
  dVar27 = dVar27 * dVar2 - 1.0;
  dVar30 = dVar30 * dVar3 - 1.0;
  auVar5._4_8_ = 0;
  auVar5._0_4_ = (uint)(-(uint64_t)(724.0 < dVar4) >> 0x20) & 0x408ff800;
  auVar25._0_12_ = auVar5 << 0x20;
  auVar25._12_4_ = (uint)(-(uint64_t)(724.0 < dVar1) >> 0x20) & 0x408ff800;
  auVar6._4_8_ = 0;
  auVar6._0_4_ = (uint)(-(uint64_t)(724.0 < dVar2) >> 0x20) & 0x408ff800;
  auVar17._0_12_ = auVar6 << 0x20;
  auVar17._12_4_ = (uint)(-(uint64_t)(724.0 < dVar3) >> 0x20) & 0x408ff800;
  auVar18._8_4_ = SUB84(dVar30,0);
  auVar18._0_8_ = dVar27;
  auVar18._12_4_ = (int)((uint64_t)dVar30 >> 0x20);
  dVar35 = (dVar34 + (dVar34 * 0.33333333333308374 + -0.49999999999988803) * dVar34 * dVar34 +
            *(double *)(&processed_var_9296_ptr + (int)uVar7) +
           ((double)(uint)((uint64_t)dVar19 >> 0x34) - SUB168(auVar25 | system_system_memory,0)) *
           0.6931471805599453) * (double)afStack_100[0];
  dVar39 = (dVar38 + (dVar38 * 0.33333333333308374 + -0.49999999999988803) * dVar38 * dVar38 +
            *(double *)(&processed_var_9296_ptr + (int)(uint)((uint64_t)dVar1 >> 0x28)) +
           ((double)(uVar8 >> 0x14) - SUB168(auVar25 | system_system_memory,8)) * 0.6931471805599453) *
           (double)fVar33;
  dVar38 = (dVar27 + (dVar27 * 0.33333333333308374 + -0.49999999999988803) * dVar27 * dVar27 +
            *(double *)(&processed_var_9296_ptr + (int)(uint)((uint64_t)dVar2 >> 0x28)) +
           ((double)(uint)((uint64_t)(double)in_XMM0_Dc >> 0x34) -
           SUB168(auVar17 | system_system_memory,0)) * 0.6931471805599453) * (double)in_XMM1_Dc;
  dVar31 = (dVar30 + (dVar30 * 0.33333333333308374 + -0.49999999999988803) * auVar18._8_8_ * dVar30
            + *(double *)(&processed_var_9296_ptr + (int)(uint)((uint64_t)dVar3 >> 0x28)) +
           ((double)(uVar26 >> 0x14) - SUB168(auVar17 | system_system_memory,8)) * 0.6931471805599453) *
           (double)in_XMM1_Dd;
  dVar30 = dVar35 * 2954.639443740597;
  dVar34 = dVar39 * 2954.639443740597;
  dVar2 = dVar38 * 2954.639443740597;
  dVar3 = dVar31 * 2954.639443740597;
  auVar21._8_4_ = SUB84(dVar34,0);
  auVar21._0_8_ = dVar30;
  auVar21._12_4_ = (int)((uint64_t)dVar34 >> 0x20);
  dVar19 = (dVar30 - 0.5) + 6755399441055744.0;
  dVar27 = (auVar21._8_8_ - 0.5) + 6755399441055744.0;
  dVar4 = (dVar2 - 0.5) + 6755399441055744.0;
  dVar1 = (dVar3 - 0.5) + 6755399441055744.0;
  iVar10 = (int)(float)param_1 + 0x7f800000;
  iVar13 = (int)fVar12 + 0x7f800000;
  fVar33 = ABS(fVar33);
  auVar14._0_4_ = -(uint)(-0x1000001 < iVar10);
  auVar14._4_4_ = -(uint)(-0x1000001 < iVar13);
  auVar14._8_4_ = -(uint)(-0x1000001 < (int)in_XMM0_Dc + 0x7f800000);
  auVar14._12_4_ = -(uint)(-0x1000001 < (int)in_XMM0_Dd + 0x7f800000);
  auVar11._0_4_ = -(uint)(iVar10 == -0x1000001);
  auVar11._4_4_ = -(uint)(iVar13 == -0x1000001);
  auVar11._8_4_ = -(uint)((int)in_XMM0_Dc + 0x7f800000 == -0x1000001);
  auVar11._12_4_ = -(uint)((int)in_XMM0_Dd + 0x7f800000 == -0x1000001);
  auVar29._0_4_ = -(uint)(0x7f800000 < (uint)ABS(afStack_100[0]));
  auVar29._4_4_ = -(uint)(0x7f800000 < (uint)fVar33);
  auVar29._8_4_ = -(uint)(0x7f800000 < (uint)ABS(in_XMM1_Dc));
  auVar29._12_4_ = -(uint)(0x7f800000 < (uint)ABS(in_XMM1_Dd));
  auVar32._0_4_ = -(uint)(ABS(afStack_100[0]) == INFINITY);
  auVar32._4_4_ = -(uint)(fVar33 == INFINITY);
  auVar32._8_4_ = -(uint)(ABS(in_XMM1_Dc) == INFINITY);
  auVar32._12_4_ = -(uint)(ABS(in_XMM1_Dd) == INFINITY);
  auVar37._0_4_ = -(uint)(0x4059fe36 < ((uint)((uint64_t)dVar35 >> 0x20) & 0x7fffffff));
  auVar37._4_4_ = -(uint)(0x4059fe36 < ((uint)((uint64_t)dVar39 >> 0x20) & 0x7fffffff));
  auVar37._8_4_ = -(uint)(0x4059fe36 < ((uint)((uint64_t)dVar38 >> 0x20) & 0x7fffffff));
  auVar37._12_4_ = -(uint)(0x4059fe36 < ((uint)((uint64_t)dVar31 >> 0x20) & 0x7fffffff));
  uVar7 = movmskps(uVar7,auVar14 | auVar11 | auVar29 | auVar32 | auVar37);
  local_var_c0 = CONCAT44((float)(double)((int64_t)
                                       ((dVar34 - (dVar27 - 6755399441055744.0)) *
                                        0.00033850805268231294 *
                                        *(double *)
                                         (&ui_system_data_1616_ptr + (uint64_t)(SUB82(dVar27,0) & 0x7ff) * 8)
                                       + *(double *)
                                          (&ui_system_data_1616_ptr + (uint64_t)(SUB82(dVar27,0) & 0x7ff) * 8
                                          )) + (((uint64_t)dVar27 >> 0xb) << 0x34)),
                       (float)(double)((int64_t)
                                       ((dVar30 - (dVar19 - 6755399441055744.0)) *
                                        0.00033850805268231294 *
                                        *(double *)
                                         (&ui_system_data_1616_ptr + ((SUB84(dVar19,0) & 0x7ff) << 3)) +
                                       *(double *)
                                        (&ui_system_data_1616_ptr + ((SUB84(dVar19,0) & 0x7ff) << 3))) +
                                      (((uint64_t)dVar19 >> 0xb) << 0x34)));
  local_var_b8 = CONCAT44((float)(double)((int64_t)
                                       ((dVar3 - (dVar1 - 6755399441055744.0)) *
                                        0.00033850805268231294 *
                                        *(double *)
                                         (&ui_system_data_1616_ptr + (uint64_t)(SUB82(dVar1,0) & 0x7ff) * 8)
                                       + *(double *)
                                          (&ui_system_data_1616_ptr + (uint64_t)(SUB82(dVar1,0) & 0x7ff) * 8)
                                       ) + (((uint64_t)dVar1 >> 0xb) << 0x34)),
                       (float)(double)((int64_t)
                                       ((dVar2 - (dVar4 - 6755399441055744.0)) *
                                        0.00033850805268231294 *
                                        *(double *)
                                         (&ui_system_data_1616_ptr + ((SUB84(dVar4,0) & 0x7ff) << 3)) +
                                       *(double *)(&ui_system_data_1616_ptr + ((SUB84(dVar4,0) & 0x7ff) << 3))
                                       ) + (((uint64_t)dVar4 >> 0xb) << 0x34)));
  if ((uVar7 != 0) && (uVar7 != 0)) {
    uVar9 = 0;
    do {
      if ((1 << ((byte)uVar9 & 0x1f) & uVar7) != 0) {
        function_8fef70(afStack_100 + (uVar9 - 0x10),afStack_100 + uVar9,
                      (int64_t)&local_var_c0 + uVar9 * 4);
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar8;
    } while ((int)uVar8 < 0x20);
  }
  return;
}
uint64_t function_8fef70(float *param_1,float *param_2,float *param_3)
{
  float fVar1;
  uint64_t uVar2;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  uint uVar10;
  uint64_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int32_t local_var_90;
  int32_t local_var_8c;
  float fStack_88;
  byte bStack_81;
  int32_t local_var_80;
  int32_t local_var_7c;
  uint64_t uVar3;
  uVar3 = 0;
  uVar2 = 0;
  fVar1 = *param_1;
  fVar18 = *param_2;
  local_var_7c = *param_2;
  local_var_90 = *param_1;
  local_var_8c = fVar1;
  if (fVar1 == 0.0) {
    local_var_90 = fVar1 + fVar1;
    local_var_8c = local_var_90;
  }
  fVar19 = fVar18;
  if (fVar18 == 0.0) {
    local_var_7c = fVar18 + fVar18;
    fVar19 = local_var_7c;
  }
  bVar15 = ((uint)local_var_90 & 0x7fffff) != 0;
  fVar9 = ABS(fVar19);
  bVar16 = ((uint)local_var_7c & 0x7fffff) != 0;
  uVar7 = ((uint)local_var_7c >> 0x10 & 0x7f80) >> 7;
  bVar17 = uVar7 != 0xff;
  uVar14 = ((uint)local_var_90 >> 0x10 & 0x7f80) >> 7;
  uVar4 = (uint)local_var_90 >> 0x1f;
  if ((int)fVar9 + 0xc0800000U < 0x40000000) {
    if (0x4b7fffff < (uint)fVar9) {
      uVar12 = 2;
      goto LAB_1808ff0ae;
    }
    uVar10 = (int)fVar9 << ((byte)(((uint)fVar19 & 0x7f800000) + 0x800000 >> 0x17) & 0x1f);
    if ((uVar10 & 0x7fffff) == 0) {
      uVar12 = 2;
      if ((uVar10 & 0xffffff) == 0x800000) {
        uVar12 = 1;
      }
      goto LAB_1808ff0ae;
    }
  }
  uVar12 = 0;
LAB_1808ff0ae:
  if (((((int)local_var_90 < 0) || (uVar14 != 0x7f)) || (bVar15)) &&
     ((((uint)local_var_7c & 0x7f800000) != 0 || (bVar16)))) {
    if ((bVar15 && uVar14 == 0xff) || (bVar16 && !bVar17)) {
      *param_3 = fVar1 + fVar18;
    }
    else if (local_var_8c == 0.0) {
      if ((int)local_var_7c < 0) {
        uVar2 = 1;
        *param_3 = *(float *)(&processed_var_9996_ptr + (uint64_t)(uVar12 & uVar4) * 4) /
                   (local_var_8c * local_var_8c);
      }
      else {
        *param_3 = *(float *)(&processed_var_9996_ptr + (uint64_t)(uVar12 & uVar4) * 4) *
                   local_var_8c * local_var_8c;
      }
    }
    else if ((local_var_8c != -1.0) || ((uVar12 == 0 && (bVar17)))) {
      if ((uVar14 == 0xff) || (!bVar17)) {
        if (uVar14 < 0x7f) {
          if ((int)local_var_7c < 0) {
            *param_3 = fVar19 * fVar19;
          }
          else {
            *param_3 = 0.0;
          }
        }
        else if ((int)local_var_7c < 0) {
          *param_3 = *(float *)(&rendering_buffer_24_ptr + (uint64_t)(uVar12 & uVar4) * 4);
        }
        else {
          *param_3 = fVar19 * local_var_8c * local_var_8c *
                     *(float *)(&processed_var_9996_ptr + (uint64_t)(uVar12 & uVar4) * 4);
        }
      }
      else if ((0.0 < local_var_8c) || (uVar12 != 0)) {
        local_var_8c = ABS(local_var_8c);
        fVar1 = *(float *)(&processed_var_9996_ptr + (uint64_t)(uVar12 & uVar4) * 4);
        iVar5 = 0;
        if (((uint)local_var_90 & 0x7f800000) == 0) {
          iVar5 = -0x40;
          local_var_8c = local_var_8c * 1.8446744e+19;
        }
        fStack_88 = (float)((uint)local_var_8c & 0x807fffff | 0x3f800000);
        uVar14 = ((uint)local_var_8c & 0x780000) + 0x80000 >> 0x14;
        uVar11 = (uint64_t)(uVar14 * 2);
        fVar24 = (float)(((int)(((((uint)local_var_8c >> 0x10 & 0x7f80) >> 7) << 0x17 |
                                (uint)local_var_8c & 0x7fffff) + 0xc0c80000) >> 0x17) + iVar5);
        fVar21 = fStack_88 * *(float *)(&processed_var_8512_ptr + (uint64_t)uVar14 * 4);
        fVar25 = *(float *)(&processed_var_8548_ptr + uVar11 * 4) + fVar24;
        uVar4 = ((uint)fVar21 & 0x1e0000) + 0x20000 >> 0x12;
        uVar6 = (uint64_t)(uVar4 * 2);
        fVar21 = fVar21 * *(float *)(&processed_var_8620_ptr + (uint64_t)uVar4 * 4);
        fVar20 = fVar25 + *(float *)(&processed_var_8656_ptr + uVar6 * 4);
        uVar12 = ((uint)fVar21 & 0x7c000) + 0x4000 >> 0xf;
        uVar13 = (uint64_t)(uVar12 * 2);
        fVar26 = fVar20 + *(float *)(&processed_var_8796_ptr + uVar13 * 4);
        fVar23 = *(float *)(&processed_var_8512_ptr + (uint64_t)uVar14 * 4) *
                 *(float *)(&processed_var_8620_ptr + (uint64_t)uVar4 * 4) *
                 *(float *)(&processed_var_8728_ptr + (uint64_t)uVar12 * 4);
        fVar21 = fVar21 * *(float *)(&processed_var_8728_ptr + (uint64_t)uVar12 * 4);
        fVar18 = fVar21 - 1.4414063;
        fVar19 = fStack_88 * 4097.0 - (fStack_88 * 4097.0 - fStack_88);
        fVar9 = fVar23 * 4097.0 - (fVar23 * 4097.0 - fVar23);
        fVar22 = fVar18 + fVar26;
        fVar19 = (fStack_88 - fVar19) * (fVar23 - fVar9) +
                 (fVar19 * fVar9 - fVar21) + fVar9 * (fStack_88 - fVar19) +
                 fVar19 * (fVar23 - fVar9);
        uVar7 = uVar7 + (((uint)fVar22 >> 0x10 & 0x7f80) >> 7);
        if (uVar7 < 0x109) {
          if (uVar7 < 0xc1) {
            *param_3 = fVar1 * 1.0;
            uVar2 = uVar3;
          }
          else {
            fVar9 = fVar18 + fVar19;
            fVar21 = *(float *)(&processed_var_8548_ptr + uVar11 * 4) + (fVar24 - fVar25) +
                     (fVar25 - fVar20) + *(float *)(&processed_var_8656_ptr + uVar6 * 4) +
                     (fVar20 - fVar26) + *(float *)(&processed_var_8796_ptr + uVar13 * 4) +
                     *(float *)(&processed_var_8552_ptr + uVar11 * 4) +
                     *(float *)(&processed_var_8660_ptr + uVar6 * 4) +
                     *(float *)(&processed_var_8800_ptr + uVar13 * 4) + fVar19 + (fVar26 - fVar22) + fVar18;
            fVar9 = (((fVar9 * -0.083554514 + 0.16058125) * fVar9 + -0.34719363) * fVar9 +
                    0.0008941205) * fVar9;
            fVar18 = fVar22 + fVar9;
            fVar24 = fVar21 + fVar18;
            fVar20 = fVar24 * 4097.0 - (fVar24 * 4097.0 - fVar24);
            fVar23 = local_var_7c * 4097.0 - (local_var_7c * 4097.0 - local_var_7c);
            fVar19 = fVar23 * fVar20 + 98304.0;
            uVar6 = (uint64_t)(((uint)fVar19 & 0x7f) * 2);
            fVar9 = ((fVar18 - fVar24) + fVar21 + (fVar22 - fVar18) + fVar9) * local_var_7c +
                    (local_var_7c - fVar23) * (fVar24 - fVar20) + fVar23 * (fVar24 - fVar20) +
                    fVar20 * (local_var_7c - fVar23) + (fVar23 * fVar20 - (fVar19 - 98304.0));
            fVar18 = *(float *)(&processed_var_8932_ptr + uVar6 * 4);
            iVar8 = ((int)fVar19 << 10) >> 0x11;
            fVar19 = ((fVar9 * 0.05550411 + 0.2402265) * fVar9 + 0.6931472) * fVar9 * fVar18 +
                     *(float *)(&processed_var_8936_ptr + uVar6 * 4);
            fVar9 = fVar19 + fVar18;
            local_var_8c._2_2_ = (ushort)((uint)fVar9 >> 0x10);
            iVar5 = (((local_var_8c._2_2_ & 0x7f80) >> 7) - 0x7f) + iVar8;
            if (iVar5 < 0x80) {
              if (iVar5 < -0x7e) {
                if (iVar5 < -0x88) {
                  if (iVar5 < -0x9f) {
                    *param_3 = fVar1 * 0.0;
                  }
                  else {
                    local_var_90 = (float)((iVar8 + 0xbfU & 0xff) << 0x17);
                    *param_3 = fVar1 * 5.421011e-20 * fVar9 * local_var_90 + 0.0;
                  }
                }
                else {
                  fVar20 = fVar9 * 4097.0 - (fVar9 * 4097.0 - fVar9);
                  local_var_90 = (float)((iVar8 + 0xbfU & 0xff) << 0x17);
                  *param_3 = fVar1 * (fVar20 * local_var_90 * 5.421011e-20 +
                                      ((fVar18 - fVar9) + fVar19 + (fVar9 - fVar20)) * local_var_90 *
                                      5.421011e-20 + 0.0);
                  uVar2 = uVar3;
                }
              }
              else {
                local_var_8c = (float)CONCAT22(local_var_8c._2_2_ & 0x807f |
                                            (ushort)((iVar5 + 0x7fU & 0xff) << 7),SUB42(fVar9,0));
                *param_3 = local_var_8c * fVar1;
                uVar2 = uVar3;
              }
            }
            else {
              *param_3 = fVar1 * INFINITY;
            }
          }
        }
        else {
          local_var_90._3_1_ = (byte)((uint)fVar22 >> 0x18);
          *param_3 = *(float *)(&processed_var_9984_ptr +
                               (uint64_t)(byte)((local_var_7c._3_1_ ^ local_var_90._3_1_) >> 7) * 4) *
                     *(float *)(&processed_var_9984_ptr +
                               (uint64_t)(byte)((local_var_7c._3_1_ ^ local_var_90._3_1_) >> 7) * 4) *
                     fVar1;
        }
      }
      else {
        uVar2 = 1;
        *param_3 = -NAN;
      }
    }
    else {
      *param_3 = *(float *)(&processed_var_9996_ptr + (uint64_t)(uVar12 & 1) * 4);
    }
  }
  else {
    bStack_81 = (byte)((uint)(local_var_8c + fVar19) >> 0x18);
    local_var_80 = (float)CONCAT13(bStack_81 & 0x80 | 0x3f,0x800000);
    *param_3 = local_var_80 * local_var_80;
  }
  return uVar2;
}
void __Xlength_error_std__YAXPEBD_Z(void)
{
// WARNING: Could not recover jumptable at 0x0001808ffb10. Too many branches
// WARNING: Treating indirect jump as call
  __Xlength_error_std__YAXPEBD_Z();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8ffb1c(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_8ffb1c(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  while (puVar1 = system_system_data_memory, system_system_data_memory != (uint64_t *)0x0) {
    system_system_data_memory = (uint64_t *)*system_system_data_memory;
    lVar2 = _guard_dispatch_icall();
    if (lVar2 != 0) {
      _guard_dispatch_icall(lVar2,1,param_3,param_4,uVar3);
    }
    free(puVar1,0x10);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address