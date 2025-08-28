/* SystemController - SystemPhysicsEngine 的语义化别名 */
#define SystemController SystemPhysicsEngine
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_09_part019.c - 1 个函数
// 函数: void function_5c63f0(int64_t *param_1,uint64_t *param_2,int8_t *param_3)
void function_5c63f0(int64_t *param_1,uint64_t *param_2,int8_t *param_3)
{
  int64_t *plVar1;
  int64_t *plVar2;
  bool bVar3;
  int8_t auVar4 [12];
  uint64_t uVar5;
  uint64_t uVar6;
  int8_t auVar7 [12];
  char cVar8;
  uint64_t *puVar9;
  uint uVar10;
  uint64_t uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int64_t *plVar15;
  int64_t lVar16;
  int64_t lVar17;
  uint64_t uVar18;
  float fVar19;
  float fVar20;
  int8_t auVar21 [12];
  int8_t auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int8_t stack_array_288 [32];
  int8_t stack_array_268 [8];
  int32_t local_var_260;
  int32_t local_var_25c;
  uint64_t local_var_258;
  uint64_t *plocal_var_250;
  uint64_t local_var_248;
  float fStack_240;
  float fStack_23c;
  int32_t local_var_238;
  int32_t local_var_234;
  float fStack_230;
  float fStack_22c;
  int32_t local_var_228;
  int32_t local_var_224;
  int32_t local_var_220;
  uint64_t local_var_218;
  uint64_t local_var_200;
  uint64_t local_var_1f8;
  float fStack_1f0;
  int32_t local_var_1ec;
  int32_t local_var_1e8;
  int32_t local_var_1e4;
  uint64_t local_var_1e0;
  int32_t local_var_1d8;
  void *plocal_var_1c8;
  int32_t local_var_1c0;
  int32_t local_var_1bc;
  int8_t local_var_1b8;
  int64_t *plStack_1b0;
  uint64_t local_var_1a8;
  float fStack_198;
  float fStack_194;
  int32_t local_var_190;
  int32_t local_var_18c;
  int8_t stack_array_188 [16];
  int8_t stack_array_178 [16];
  uint64_t local_var_168;
  uint64_t local_var_160;
  uint64_t local_var_158;
  uint64_t local_var_150;
  uint64_t local_var_148;
  float fStack_140;
  float fStack_13c;
  int32_t local_var_138;
  int32_t local_var_134;
  int32_t local_var_130;
  void **pplocal_var_128;
  uint64_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_108;
  int32_t local_var_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  int32_t local_var_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  uint64_t local_var_e0;
  int iStack_d8;
  uint64_t local_var_c8;
  local_var_1a8 = 0xfffffffffffffffe;
  local_var_c8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_288;
  *param_3 = 1;
  lVar16 = param_1[0x41e];
  if (lVar16 == 0) {
    lVar16 = *param_1;
    uVar11 = *(uint64_t *)(lVar16 + 0x9d8);
    lVar17 = *(int64_t *)(lVar16 + 0x20);
    if ((uVar11 != 0) && (cVar8 = SystemCore_PerformanceMonitor(uVar11,lVar17 + 0xc), cVar8 != '\0'))
    goto LAB_1805c70c1;
    uVar18 = 0;
  }
  else {
    lVar17 = *(int64_t *)(lVar16 + 0xa8);
    param_1[0x41f] = *(int64_t *)(lVar16 + 0xa0);
    param_1[0x420] = lVar17;
    local_var_118 = *(uint64_t *)(param_1[0x291] + 0x18);
    fVar27 = 0.0;
    local_var_e0 = 0;
    local_var_100 = (int32_t)*(uint64_t *)(lVar16 + 0xa0);
    fStack_fc = (float)((uint64_t)*(uint64_t *)(lVar16 + 0xa0) >> 0x20);
    fStack_f8 = (float)*(uint64_t *)(lVar16 + 0xa8);
    fStack_f4 = (float)((uint64_t)*(uint64_t *)(lVar16 + 0xa8) >> 0x20);
    local_var_f0 = 0;
    fStack_ec = 0.0;
    fStack_e8 = 0.0;
    fStack_e4 = 0.0;
    local_var_110 = 0;
    local_var_108 = 0;
    puVar9 = (uint64_t *)function_3975b0();
    local_var_e0 = *puVar9;
    uVar18 = 0;
    iStack_d8 = 0;
    SystemCore_Validator(&local_var_118,3);
    *param_2 = local_var_118;
    param_2[3] = CONCAT44(fStack_fc,local_var_100);
    param_2[4] = CONCAT44(fStack_f4,fStack_f8);
    param_2[5] = CONCAT44(fStack_ec,local_var_f0);
    param_2[6] = CONCAT44(fStack_e4,fStack_e8);
    param_2[1] = local_var_110;
    param_2[2] = local_var_108;
    param_2[7] = local_var_e0;
    *(int *)(param_2 + 8) = iStack_d8;
    uVar11 = param_1[0x41e];
    lVar16 = *(int64_t *)(uVar11 + 0x28);
    fVar19 = *(float *)(lVar16 + 0x10c) - *(float *)(lVar16 + 0xfc);
    fVar23 = *(float *)(lVar16 + 0x108) - *(float *)(lVar16 + 0xf8);
    if (fVar23 <= fVar19) {
      fVar23 = fVar19;
    }
    if ((*(uint *)(param_1 + 2) >> 0x19 & 1) == 0) {
      *(int32_t *)((int64_t)param_1 + 0xb4) = *(int32_t *)(*(int64_t *)param_1[1] + 0x7dc);
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x2000000;
    }
    fVar23 = *(float *)((int64_t)param_1 + 0xb4) * 3.0 + fVar23;
    local_var_248 = *(int64_t **)(*param_1 + 0x20);
    uVar5 = *(uint64_t *)((int64_t)local_var_248 + 0xc);
    plocal_var_250 = *(uint64_t **)((int64_t)local_var_248 + 0x14);
    fVar19 = 0.0;
    if ((int)param_1[0x421] != -1) {
      lVar16 = param_1[0x291];
      plocal_var_250 = (uint64_t *)
                    (*(int64_t *)(lVar16 + 0x98d2a8) +
                    (uVar11 % (uint64_t)*(uint *)(lVar16 + 0x98d2b0)) * 8);
      stack_array_268 = (int8_t  [8])plocal_var_250;
      for (local_var_258 = (uint64_t *)*plocal_var_250; local_var_258 != (uint64_t *)0x0;
          local_var_258 = (uint64_t *)local_var_258[3]) {
        if (uVar11 == *local_var_258) goto LAB_1805c6622;
      }
      plocal_var_250 = (uint64_t *)
                    (*(int64_t *)(lVar16 + 0x98d2a8) + *(int64_t *)(lVar16 + 0x98d2b0) * 8);
      local_var_258 = (uint64_t *)*plocal_var_250;
LAB_1805c6622:
// WARNING: Subroutine does not return
      AdvancedSystemController(plocal_var_250,
                    ((float)(int)param_1[0x421] * 6.2831855) / (float)(int)local_var_258[2] - 3.1415927
                   );
    }
    local_var_258._4_4_ = (float)((uint64_t)uVar5 >> 0x20);
    local_var_258._0_4_ = (float)uVar5;
    fVar20 = *(float *)(param_1[0x41e] + 0xa4) - local_var_258._4_4_;
    fVar24 = *(float *)(param_1[0x41e] + 0xa0) - (float)local_var_258;
    uVar10 = *(uint *)(param_1 + 2);
    if ((uVar10 & 0x20) == 0) {
      param_1[0x15] = *(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
      uVar10 = uVar10 | 0x20;
      *(uint *)(param_1 + 2) = uVar10;
    }
    lVar16 = param_1[0x15];
    local_var_258 = (uint64_t *)uVar5;
    if (lVar16 != 0) {
      if ((uVar10 & 0x20) == 0) {
        param_1[0x15] = *(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
        uVar10 = uVar10 | 0x20;
        *(uint *)(param_1 + 2) = uVar10;
        lVar16 = param_1[0x15];
      }
      if (((*(byte *)((int64_t)*(int *)(lVar16 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar16 + 0xd0)
                     ) & 1) != 0) && (fVar24 * fVar24 + fVar20 * fVar20 <= fVar23 * fVar23)) {
        SystemFunction_0001805b7050(param_1 + 1);
        local_var_248 = (int64_t *)0x0;
        lVar16 = param_1[0x41e];
        plVar1 = *(int64_t **)(lVar16 + 0x1c0);
        plVar15 = plVar1;
        plVar2 = local_var_248;
        if (*(int64_t *)(lVar16 + 0x1c8) - (int64_t)plVar1 >> 3 != 0) {
          do {
            if (*(int64_t *)(*plVar15 + 0x110) != 0) {
              plVar2 = (int64_t *)plVar1[(int)uVar18];
              if (plVar2 != (int64_t *)0x0) {
                stack_array_268 = (int8_t  [8])plVar2;
                (**(code **)(*plVar2 + 0x28))(plVar2);
              }
              break;
            }
            uVar10 = (int)uVar18 + 1;
            uVar18 = (uint64_t)uVar10;
            plVar15 = plVar15 + 1;
          } while ((uint64_t)(int64_t)(int)uVar10 <
                   (uint64_t)(*(int64_t *)(lVar16 + 0x1c8) - (int64_t)plVar1 >> 3));
        }
        local_var_248 = plVar2;
        plVar2 = local_var_248;
        plVar1 = (int64_t *)param_1[0x41e];
        if (plVar1 != (int64_t *)0x0) {
          stack_array_268 = (int8_t  [8])plVar1;
          (**(code **)(*plVar1 + 0x28))(plVar1);
        }
        local_var_248 = plVar1;
        stack_array_268 = (int8_t  [8])plVar2;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2);
        }
        bVar3 = false;
        if (plVar1 == (int64_t *)0x0) {
LAB_1805c6da5:
          fVar23 = *(float *)((int64_t)param_2 + 0x1c);
          fVar24 = fVar23 - *(float *)(*(int64_t *)(*param_1 + 0x20) + 0x10);
          fVar19 = *(float *)(param_2 + 3);
          fVar25 = fVar19 - *(float *)(*(int64_t *)(*param_1 + 0x20) + 0xc);
          fVar20 = fVar25 * fVar25 + fVar24 * fVar24;
          auVar22 = rsqrtss(ZEXT416((uint)(fVar24 * fVar24)),ZEXT416((uint)fVar20));
          fVar27 = auVar22._0_4_;
          fVar27 = fVar27 * 0.5 * (3.0 - fVar20 * fVar27 * fVar27);
          if ((*(uint *)(param_1 + 2) >> 0x1a & 1) == 0) {
            *(int32_t *)(param_1 + 0x17) = *(int32_t *)(*(int64_t *)param_1[1] + 0x7e0);
            *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x4000000;
            fVar23 = *(float *)((int64_t)param_2 + 0x1c);
            fVar19 = *(float *)(param_2 + 3);
          }
          stack_array_268._4_4_ = fVar23 - *(float *)(param_1 + 0x17) * fVar27 * fVar24 * 0.5;
          stack_array_268._0_4_ = fVar19 - *(float *)(param_1 + 0x17) * fVar25 * fVar27 * 0.5;
          if ((fVar19 != (float)stack_array_268._0_4_) || (fVar23 != (float)stack_array_268._4_4_)) {
            if (*(int *)(param_2 + 8) != 0) {
              *(int32_t *)(param_2 + 8) = 0;
            }
            param_2[3] = stack_array_268;
          }
        }
        else {
          lVar16 = *(int64_t *)(*param_1 + 0x6d8);
          fVar24 = *(float *)((int64_t)plVar1 + 0xa4) - *(float *)(lVar16 + 0x8c8);
          fVar26 = *(float *)(plVar1 + 0x14) - *(float *)(lVar16 + 0x8c4);
          fVar20 = fVar26 * fVar26 + fVar24 * fVar24;
          auVar22 = rsqrtss(ZEXT416((uint)(fVar24 * fVar24)),ZEXT416((uint)fVar20));
          fVar23 = auVar22._0_4_;
          fVar23 = fVar23 * 0.5 * (3.0 - fVar20 * fVar23 * fVar23);
          fVar26 = fVar26 * fVar23;
          fVar24 = fVar23 * fVar24;
          fVar25 = *(float *)(*param_1 + 0x7dc) * 0.8;
          fStack_230 = (float)SystemFunction_0001805b7780(param_1);
          fStack_230 = fStack_230 + fVar23 * fVar20;
          fStack_22c = fVar24 * fStack_230;
          fStack_230 = fVar26 * fStack_230;
          lVar16 = *(int64_t *)(*param_1 + 0x6d8);
          local_var_238 = *(int32_t *)(lVar16 + 0x8cc);
          fStack_23c = *(float *)(lVar16 + 0x8c8) - fVar24 * fVar25;
          fStack_240 = *(float *)(lVar16 + 0x8c4) - fVar26 * fVar25;
          stack_array_268._4_4_ = fStack_23c;
          stack_array_268._0_4_ = fStack_240;
          local_var_260 = local_var_238;
          local_var_25c = 0x7f7fffff;
          local_var_234 = 0x7f7fffff;
          local_var_258 = (uint64_t *)CONCAT44(fStack_22c,fStack_230);
          plocal_var_250 = (uint64_t *)0x7f7fffff00000000;
          local_var_228 = 0;
          local_var_224 = 0x7f7fffff;
          local_var_220 = 0x47c35000;
          SystemFunction_00018023a1e0(&fStack_230);
          stack_array_178._0_4_ = SystemFunction_0001805b7780(param_1);
          fStack_1f0 = fVar24 * 0.1;
          fStack_198 = fVar26 * 0.1;
          plocal_var_250 = (uint64_t *)0x7f7fffff00000000;
          auVar7._4_8_ = 0;
          auVar7._0_4_ = -fVar25;
          _stack_array_268 = auVar7 << 0x40;
          local_var_25c = 0x7f7fffff;
          local_var_1f8 = CONCAT44(fStack_198,(int32_t)local_var_1f8);
          local_var_1ec = 0;
          local_var_1e8 = 0x7f7fffff;
          local_var_1e4 = 0;
          local_var_1e0 = stack_array_268._4_8_;
          local_var_1d8 = 0x7f7fffff;
          local_var_1c0 = 2;
          local_var_1b8 = 0;
          plocal_var_1c8 = &memory_allocator_3360_ptr;
          local_var_1bc = 0x71b789;
          iStack_d8 = 0;
          local_var_190 = 0;
          local_var_18c = 0x7f7fffff;
          auVar4._4_8_ = stack_array_268._8_8_;
          auVar4._0_4_ = fStack_198;
          auVar21._0_8_ = auVar4._0_8_ << 0x20;
          auVar21._8_4_ = fStack_1f0;
          stack_array_178._4_8_ = auVar21._4_8_;
          stack_array_178._12_4_ = 0;
          local_var_168 = 0x7f7fffff;
          local_var_160 = local_var_1e0;
          local_var_158 = CONCAT44(stack_array_178._0_4_,0x7f7fffff);
          local_var_150 = CONCAT44(fStack_23c,fStack_240);
          local_var_148 = CONCAT44(local_var_234,local_var_238);
          fStack_140 = fStack_230;
          fStack_13c = fStack_22c;
          local_var_138 = local_var_228;
          local_var_134 = local_var_224;
          local_var_130 = local_var_220;
          pplocal_var_128 = &plocal_var_1c8;
          plVar2 = *(int64_t **)
                    (*(int64_t *)(*(int64_t *)(param_1[0x291] + 0x18) + 0x28f8) + 0x318);
          plStack_1b0 = plVar1;
          fStack_194 = fStack_1f0;
          stack_array_188 = _stack_array_268;
          (**(code **)(*plVar2 + 0x140))(plVar2,&fStack_198,&local_var_118);
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
            lVar16 = *(int64_t *)(*param_1 + 0x20);
            fVar23 = fStack_f8 - *(float *)(lVar16 + 0x10);
            fVar20 = fStack_fc - *(float *)(lVar16 + 0xc);
            fVar24 = (fStack_f4 - *(float *)(lVar16 + 0x14)) -
                     *(float *)(*(int64_t *)(*param_1 + 0x6d8) + 0x908);
            fVar20 = fVar20 * fVar20 + fVar23 * fVar23 + fVar24 * fVar24;
            auVar22 = rsqrtss(ZEXT416((uint)(fVar24 * fVar24)),ZEXT416((uint)fVar20));
            fVar23 = auVar22._0_4_;
            param_1[0x41f] = CONCAT44(fStack_f8,fStack_fc);
            param_1[0x420] = CONCAT44(local_var_f0,fStack_f4);
            if ((*(uint *)(param_1 + 2) >> 0x1a & 1) == 0) {
              *(int32_t *)(param_1 + 0x17) = *(int32_t *)(*(int64_t *)param_1[1] + 0x7e0);
              *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x4000000;
            }
            fVar23 = 1.0 - ABS(fVar23 * 0.5 * (3.0 - fVar20 * fVar23 * fVar23) * fVar24);
            stack_array_268._4_4_ = fStack_f8 + *(float *)(param_1 + 0x17) * fVar19 * 0.5 * fVar23;
            stack_array_268._0_4_ = *(float *)(param_1 + 0x17) * fVar27 * fVar23 * 0.5 + fStack_fc;
            if (((float)stack_array_268._0_4_ != *(float *)(param_2 + 3)) ||
               ((float)stack_array_268._4_4_ != *(float *)((int64_t)param_2 + 0x1c))) {
              if (*(int *)(param_2 + 8) != 0) {
                *(int32_t *)(param_2 + 8) = 0;
              }
              param_2[3] = stack_array_268;
            }
            bVar3 = true;
          }
          iStack_d8 = 0;
          if (!bVar3) goto LAB_1805c6da5;
        }
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1);
        }
        goto LAB_1805c7137;
      }
    }
    fVar23 = *(float *)(param_2 + 3);
    fVar27 = fVar23 - *(float *)(*(int64_t *)(*param_1 + 0x20) + 0xc);
    fVar19 = *(float *)((int64_t)param_2 + 0x1c);
    fVar20 = fVar19 - *(float *)(*(int64_t *)(*param_1 + 0x20) + 0x10);
    fVar24 = fVar27 * fVar27 + fVar20 * fVar20;
    auVar22 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
    fVar25 = auVar22._0_4_;
    fVar24 = fVar25 * 0.5 * (3.0 - fVar24 * fVar25 * fVar25);
    fVar27 = fVar27 * fVar24;
    fVar20 = fVar20 * fVar24;
    if ((uVar10 >> 0x1a & 1) == 0) {
      *(int32_t *)(param_1 + 0x17) = *(int32_t *)(*(int64_t *)param_1[1] + 0x7e0);
      *(uint *)(param_1 + 2) = uVar10 | 0x4000000;
      fVar23 = *(float *)(param_2 + 3);
      fVar19 = *(float *)((int64_t)param_2 + 0x1c);
    }
    fVar26 = *(float *)(param_1 + 0x17) * 0.5;
    fVar24 = fVar23 - fVar26 * fVar27;
    fVar25 = fVar19 - fVar26 * fVar20;
    local_var_248 = (int64_t *)CONCAT44(fVar25,fVar24);
    if ((fVar23 != fVar24) || (fVar19 != fVar25)) {
      if (*(int *)(param_2 + 8) != 0) {
        *(int32_t *)(param_2 + 8) = 0;
      }
      param_2[3] = local_var_248;
    }
    iVar13 = 1;
    iVar12 = 1;
    do {
      fVar23 = *(float *)(param_2 + 3) - fVar26 * fVar27 * (float)iVar13;
      fVar19 = *(float *)((int64_t)param_2 + 0x1c) - fVar26 * fVar20 * (float)iVar13;
      local_var_248 = (int64_t *)CONCAT44(fVar19,fVar23);
      if ((*(float *)(param_2 + 3) != fVar23) || (*(float *)((int64_t)param_2 + 0x1c) != fVar19)) {
        if (*(int *)(param_2 + 8) != 0) {
          *(int32_t *)(param_2 + 8) = 0;
        }
        param_2[3] = local_var_248;
      }
      if (*(int64_t *)(*param_1 + 0x9d8) == 0) goto LAB_1805c7137;
      SystemCore_Validator(param_2,2);
      if ((1 < *(int *)(param_2 + 8)) && (param_2[1] != 0)) {
        SystemCore_Validator(param_2,2);
        uVar11 = uVar18;
        if (1 < *(int *)(param_2 + 8)) {
          uVar11 = param_2[1];
        }
        if (*(int *)(uVar11 + 0x128) == *(int *)(*(int64_t *)(*param_1 + 0x9d8) + 0x128))
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
    uVar11 = *(uint64_t *)(lVar16 + 0x9d8);
    lVar17 = *(int64_t *)(lVar16 + 0x20);
    if ((uVar11 != 0) && (cVar8 = SystemCore_PerformanceMonitor(uVar11,lVar17 + 0xc), cVar8 != '\0')) {
LAB_1805c70c1:
      uVar18 = uVar11;
    }
  }
  local_var_1e0 = 0;
  local_var_218 = *(uint64_t *)(*(int64_t *)(lVar16 + 0x8d8) + 0x18);
  local_var_200 = *(uint64_t *)(lVar17 + 0xc);
  local_var_1f8 = *(uint64_t *)(lVar17 + 0x14);
  uVar5 = *(uint64_t *)(lVar17 + 0xb0);
  uVar6 = *(uint64_t *)(lVar17 + 0xb8);
  *(int32_t *)(param_2 + 8) = 3;
  param_2[7] = local_var_200;
  param_2[2] = uVar11;
  param_2[1] = uVar18;
  param_2[5] = uVar5;
  param_2[6] = uVar6;
  param_2[3] = local_var_200;
  param_2[4] = local_var_1f8;
  *param_2 = local_var_218;
LAB_1805c7137:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_c8 ^ (uint64_t)stack_array_288);
}