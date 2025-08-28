#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
#define SystemInitializer System_Initializer2  // 系统初始化器
// 03_rendering_part487.c - 4 个函数
// 函数: void function_5288a0(int64_t param_1,int32_t *param_2,float *param_3,float *param_4)
void function_5288a0(int64_t param_1,int32_t *param_2,float *param_3,float *param_4)
{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  char cVar6;
  int64_t lVar7;
  int64_t lVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  uint *puVar12;
  int64_t lVar13;
  int64_t lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int8_t stack_array_148 [32];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  uint local_var_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  uint local_var_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  uint local_var_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  uint local_var_ac;
  uint64_t local_var_a8;
  local_var_a8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_148;
  lVar7 = *(int64_t *)(param_1 + 0x6d8);
  uVar9 = *(int32_t *)(lVar7 + 0x8e8);
  uVar10 = *(int32_t *)(lVar7 + 0x8ec);
  uVar11 = *(int32_t *)(lVar7 + 0x8f0);
  *param_2 = *(int32_t *)(lVar7 + 0x8e4);
  param_2[1] = uVar9;
  param_2[2] = uVar10;
  param_2[3] = uVar11;
  lVar7 = *(int64_t *)(param_1 + 0x658);
  lVar8 = *(int64_t *)(lVar7 + 0x208);
  lVar13 = *(int64_t *)
            (*(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8) + 0x260) + 0x210);
  cVar5 = *(char *)(lVar13 + 0xe5);
  cVar6 = *(char *)(lVar13 + 0xe4);
  if ((*(byte *)(lVar7 + 0xa8) & 1) == 0) {
    SystemCore_FileSystem(lVar7,*(int64_t *)(lVar7 + 0x10) + 0x70,0xbf800000);
  }
  lVar13 = (int64_t)cVar5;
  puVar12 = (uint *)(lVar13 * 0x100 + *(int64_t *)(lVar7 + 0x18));
  do {
    LOCK();
    uVar1 = *puVar12;
    *puVar12 = *puVar12 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  fStack_128 = (float)puVar12[1];
  fStack_124 = (float)puVar12[2];
  fStack_120 = (float)puVar12[3];
  fStack_11c = (float)puVar12[4];
  fStack_118 = (float)puVar12[5];
  fStack_114 = (float)puVar12[6];
  fStack_110 = (float)puVar12[7];
  local_var_10c = puVar12[8];
  *puVar12 = 0;
  lVar7 = *(int64_t *)(param_1 + 0x658);
  fStack_108 = fStack_128;
  fStack_104 = fStack_124;
  fStack_100 = fStack_120;
  fStack_fc = fStack_11c;
  fStack_f8 = fStack_118;
  fStack_f4 = fStack_114;
  fStack_f0 = fStack_110;
  local_var_ec = local_var_10c;
  fStack_e8 = fStack_128;
  fStack_e4 = fStack_124;
  fStack_e0 = fStack_120;
  fStack_dc = fStack_11c;
  fStack_d8 = fStack_118;
  fStack_d4 = fStack_114;
  fStack_d0 = fStack_110;
  local_var_cc = local_var_10c;
  if ((*(byte *)(lVar7 + 0xa8) & 1) == 0) {
    SystemCore_FileSystem(lVar7,*(int64_t *)(lVar7 + 0x10) + 0x70,0xbf800000);
  }
  lVar14 = (int64_t)cVar6;
  puVar12 = (uint *)(lVar14 * 0x100 + *(int64_t *)(lVar7 + 0x18));
  do {
    LOCK();
    uVar1 = *puVar12;
    *puVar12 = *puVar12 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  fStack_c8 = (float)puVar12[1];
  fStack_c4 = (float)puVar12[2];
  fStack_c0 = (float)puVar12[3];
  fStack_bc = (float)puVar12[4];
  fStack_b8 = (float)puVar12[5];
  fStack_b4 = (float)puVar12[6];
  fStack_b0 = (float)puVar12[7];
  local_var_ac = puVar12[8];
  *puVar12 = 0;
  lVar7 = *(int64_t *)(lVar8 + 0x140);
  lVar8 = *(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8);
  fVar16 = fStack_e0 * fStack_dc - fStack_e8 * fStack_e4;
  fVar18 = fStack_e4 * fStack_e4;
  fVar2 = *(float *)(lVar13 * 0x1b0 + 0x158 + lVar7);
  fVar19 = (fStack_e8 * fStack_e0 + fStack_e8 * fStack_e0 +
           fStack_e4 * fStack_dc + fStack_e4 * fStack_dc) * fVar2 + fStack_d8;
  fVar16 = (fVar16 + fVar16) * fVar2 + fStack_d4;
  fStack_e4 = fVar19 * *(float *)(lVar8 + 0x74) + fVar16 * *(float *)(lVar8 + 0x84) +
              *(float *)(lVar8 + 0xa4);
  fStack_e8 = fVar16 * *(float *)(lVar8 + 0x80) + fVar19 * *(float *)(lVar8 + 0x70) +
              *(float *)(lVar8 + 0xa0);
  fStack_e0 = ((1.0 - (fVar18 + fVar18 + fStack_e0 * fStack_e0 + fStack_e0 * fStack_e0)) * fVar2 +
              fStack_d0) * *(float *)(lVar8 + 0x98) + *(float *)(lVar8 + 0xa8);
  *param_3 = fStack_e8;
  param_3[1] = fStack_e4;
  param_3[2] = fStack_e0;
  param_3[3] = 3.4028235e+38;
  lVar8 = *(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8);
  fVar16 = fStack_c0 * fStack_bc - fStack_c8 * fStack_c4;
  fVar2 = *(float *)(lVar14 * 0x1b0 + 0x158 + lVar7);
  fStack_dc = 3.4028235e+38;
  fVar15 = fStack_b4 - (fVar16 + fVar16) * fVar2;
  fVar16 = *(float *)(lVar8 + 0x84);
  fVar17 = fStack_b8 -
           (fStack_c8 * fStack_c0 + fStack_c8 * fStack_c0 +
           fStack_c4 * fStack_bc + fStack_c4 * fStack_bc) * fVar2;
  fVar18 = *(float *)(lVar8 + 0x74);
  fVar19 = *(float *)(lVar8 + 0x98);
  fVar3 = *(float *)(lVar8 + 0xa4);
  fVar4 = *(float *)(lVar8 + 0xa8);
  *param_4 = fVar15 * *(float *)(lVar8 + 0x80) + fVar17 * *(float *)(lVar8 + 0x70) +
             *(float *)(lVar8 + 0xa0);
  param_4[1] = fVar17 * fVar18 + fVar15 * fVar16 + fVar3;
  param_4[2] = (fStack_b0 -
               (1.0 - (fStack_c4 * fStack_c4 + fStack_c4 * fStack_c4 +
                      fStack_c0 * fStack_c0 + fStack_c0 * fStack_c0)) * fVar2) * fVar19 + fVar4;
  param_4[3] = 3.4028235e+38;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_a8 ^ (uint64_t)stack_array_148);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_528c80(int64_t param_1,float param_2)
void function_528c80(int64_t param_1,float param_2)
{
  ushort *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int64_t *plVar5;
  char cVar6;
  int32_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  int32_t *puVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  int64_t lVar19;
  int8_t auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fStackX_8;
  float fStackX_c;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  int32_t local_var_1b8;
  void *plocal_var_1b0;
  int32_t *plocal_var_1a8;
  int32_t local_var_1a0;
  uint64_t local_var_198;
  int64_t lStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  uint64_t local_var_178;
  int8_t stack_array_170 [16];
  int64_t *plStack_160;
  uint64_t local_var_158;
  uint64_t local_var_148;
  int8_t stack_array_140 [16];
  int8_t stack_array_130 [240];
  local_var_178 = 0xfffffffffffffffe;
  uVar17 = 0;
  lVar19 = *(int64_t *)(param_1 + 0x6e0);
  if ((*(uint *)(lVar19 + 0x1484) >> 1 & 1) == 0) {
    fVar21 = *(float *)(lVar19 + 0x13d4) - param_2 * 0.1;
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
    *(float *)(lVar19 + 0x13d4) = fVar21;
    fVar21 = 0.0;
    fVar29 = 0.0;
    lVar19 = *(int64_t *)(param_1 + 0x8d8);
    uVar3 = *(uint *)(lVar19 + 0x52ed94);
    if (0 < (int)uVar3) {
      piVar15 = (int *)(lVar19 + 0x30b0);
      uVar16 = uVar17;
      do {
        if (-1 < *piVar15) goto LAB_180528d8a;
        uVar17 = (uint64_t)((int)uVar17 + 1);
        uVar16 = uVar16 + 1;
        piVar15 = piVar15 + 0x298;
      } while ((int64_t)uVar16 < (int64_t)(int)uVar3);
    }
    uVar17 = (uint64_t)uVar3;
LAB_180528d8a:
    uVar13 = (uint)uVar17;
    lVar8 = system_cache_buffer;
    while ((int)uVar13 < (int)uVar3) {
      lStack_190 = (int64_t)(int)uVar17;
      lVar19 = lVar19 + 0x30a0 + lStack_190 * 0xa60;
      uVar13 = *(uint *)(lVar19 + 0x568);
      if (((((5 < uVar13) || ((0x25U >> (uVar13 & 0x1f) & 1) == 0)) &&
           (*(int64_t *)(lVar19 + 0x6d8) != 0)) &&
          ((*(char *)(*(int64_t *)(lVar19 + 0x6d8) + 0x8be) != '\0' &&
           (uVar4 = *(uint *)(lVar19 + 0x56c), (uVar4 & 8) != 0)))) &&
         ((uVar13 != 1 ||
          (((*(uint *)(*(int64_t *)(lVar19 + 0x6e0) + 0x1484) >> 1 & 1) != 0 ||
           (cVar6 = SystemFunction_000180508270(param_1,lVar19), cVar6 != '\0')))))) {
        lVar10 = *(int64_t *)(lVar19 + 0x20);
        lVar9 = *(int64_t *)(param_1 + 0x20);
        fVar27 = *(float *)(lVar10 + 0x14) - *(float *)(lVar9 + 0x14);
        fVar24 = *(float *)(lVar10 + 0x10) - *(float *)(lVar9 + 0x10);
        fVar23 = *(float *)(lVar10 + 0xc) - *(float *)(lVar9 + 0xc);
        fVar25 = fVar23 * fVar23 + fVar24 * fVar24 + fVar27 * fVar27;
        auVar20 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
        fVar22 = auVar20._0_4_;
        fVar28 = fVar22 * 0.5 * (3.0 - fVar25 * fVar22 * fVar22);
        fVar22 = 20.0;
        if (*(int *)(lVar19 + 0x564) < 0) {
          if ((((uVar13 == 1) && ((uVar4 >> 0xb & 1) != 0)) &&
              (lVar9 = *(int64_t *)(lVar19 + 0x590), lVar9 != 0)) &&
             (((*(int *)(lVar9 + 0x8228) < 0 && (*(int *)(lVar9 + 0x8234) != 0)) &&
              (fVar22 = 5.0, *(int *)(lVar9 + 0x8234) == 3)))) {
            fVar22 = 1.25;
          }
        }
        else {
          fVar22 = 80.0;
        }
        fStackX_8 = (float)*(uint64_t *)(lVar10 + 0x1c);
        fStackX_c = (float)((uint64_t)*(uint64_t *)(lVar10 + 0x1c) >> 0x20);
        fVar26 = SQRT(fStackX_8 * fStackX_8 + fStackX_c * fStackX_c);
        fVar25 = 1.0 / (fVar28 * fVar25 * fVar28 * fVar25 + 16.0);
        fVar22 = fVar26 * fVar22 * fVar25;
        if (0.5 < fVar22) {
          fVar21 = fVar21 + fVar22;
        }
        fVar22 = fVar28 * fVar24 * *(float *)(param_1 + 0x4a0) +
                 fVar28 * fVar23 * *(float *)(param_1 + 0x49c) +
                 fVar28 * fVar27 * *(float *)(param_1 + 0x4a4);
        if (0.0 < fVar22) {
          fVar22 = fVar22 + 0.15;
          fVar22 = fVar22 * fVar22;
          if (*(int *)(lVar19 + 0x564) < 0) {
            if ((uVar13 != 1) ||
               ((((uVar4 >> 0xb & 1) != 0 && (*(int64_t *)(lVar19 + 0x590) != 0)) &&
                ((*(byte *)(*(int64_t *)(lVar19 + 0x590) + 0x3424) & 0x10) != 0)))) {
              fVar23 = 0.5;
              goto LAB_180529004;
            }
LAB_18052900d:
            if ((fStackX_8 == 0.0) && (fStackX_c == 0.0)) goto LAB_180529019;
          }
          else {
            fVar23 = 4.0;
LAB_180529004:
            fVar22 = fVar22 * fVar23;
            if (uVar13 == 1) goto LAB_18052900d;
LAB_180529019:
            fVar22 = fVar22 * 0.5;
          }
          fVar22 = fVar22 * (fVar25 * fVar26 * 125.0 + fVar25 * 500.0);
          if (0.5 < fVar22) {
            function_528530(param_1,stack_array_170,stack_array_140,&system_ptr_02f0);
            fVar23 = (float)function_51b450(lVar19,stack_array_170);
            fVar22 = fVar22 * fVar23;
            lVar8 = system_cache_buffer;
            if (0.5 < fVar22) {
              lVar8 = *(int64_t *)(param_1 + 0x660);
              fVar24 = SQRT(*(float *)(lVar8 + 0x30ec) * *(float *)(lVar8 + 0x30ec) +
                            *(float *)(lVar8 + 0x30f0) * *(float *)(lVar8 + 0x30f0) +
                            *(float *)(lVar8 + 0x30f4) * *(float *)(lVar8 + 0x30f4));
              function_528530(lVar19,&fStack_188,&plocal_var_1b0,&system_ptr_02f0);
              lVar8 = *(int64_t *)(param_1 + 0x660);
              fStack_1bc = fStack_180 + *(float *)(lVar8 + 0x3e14) * -500.0;
              fStack_1c0 = fStack_184 + *(float *)(lVar8 + 0x3e10) * -500.0;
              fStack_1c4 = fStack_188 - *(float *)(lVar8 + 0x3e0c) * 500.0;
              local_var_1b8 = 0x7f7fffff;
              fVar23 = (float)function_51b450(lVar19,&fStack_1c4);
              lVar8 = *(int64_t *)(param_1 + 0x660);
              if ((0.0 < fVar23) &&
                 (fVar24 = SQRT(*(float *)(lVar8 + 0x3e1c) * *(float *)(lVar8 + 0x3e1c) +
                                *(float *)(lVar8 + 0x3e20) * *(float *)(lVar8 + 0x3e20) +
                                *(float *)(lVar8 + 0x3e24) * *(float *)(lVar8 + 0x3e24)) * fVar23 +
                           fVar24, 1.0 <= fVar24)) {
                fVar24 = 1.0;
              }
              function_1c2360(lVar8 + 0x60830);
              plVar5 = plStack_160;
              uVar17 = local_var_158;
              uVar18 = local_var_148;
LAB_1805291c0:
              if (uVar17 != *(uint64_t *)(*(int64_t *)(param_1 + 0x660) + 0x60838)) {
                lVar8 = function_2e8fb0(uVar18);
                if (((lVar8 != 0) &&
                    (((*(float *)(lVar8 + 0xd4) != 0.0 || (*(float *)(lVar8 + 0xd8) != 0.0)) ||
                     (*(float *)(lVar8 + 0xdc) != 0.0)))) &&
                   (((lVar10 = *(int64_t *)(lVar19 + 0x20),
                     fVar27 = *(float *)(lVar10 + 0x10) - *(float *)(lVar8 + 0xb4),
                     fVar23 = *(float *)(lVar10 + 0xc) - *(float *)(lVar8 + 0xb0),
                     fVar25 = *(float *)(lVar10 + 0x14) - *(float *)(lVar8 + 0xb8),
                     fVar27 * fVar27 + fVar23 * fVar23 + fVar25 * fVar25 <
                     *(float *)(lVar8 + 0x34) * *(float *)(lVar8 + 0x34) &&
                     (fVar23 = (float)function_51b450(lVar19), 0.0 < fVar23)) &&
                    (fVar24 = SQRT(*(float *)(lVar8 + 0xd4) * *(float *)(lVar8 + 0xd4) +
                                   *(float *)(lVar8 + 0xd8) * *(float *)(lVar8 + 0xd8) +
                                   *(float *)(lVar8 + 0xdc) * *(float *)(lVar8 + 0xdc)) * fVar23 +
                              fVar24, 1.0 <= fVar24)))) {
                  fVar24 = 1.0;
                }
                lVar8 = *plVar5;
                do {
                  uVar17 = uVar17 + 1;
                  lVar9 = (uVar17 & 0xffffffff) * 0x10;
                  lVar10 = lVar9 + 8 + lVar8;
                  if ((*(uint64_t *)(lVar9 + lVar8) & 0xffffffff00000000) == 0) {
                    lVar10 = 0;
                  }
                  if (lVar10 != 0) {
                    uVar18 = *(uint64_t *)(lVar8 + 8 + (uVar17 & 0xffffffff) * 0x10);
                    break;
                  }
                } while (uVar17 != plVar5[1]);
                goto LAB_1805291c0;
              }
              fVar22 = fVar22 * fVar24;
              lVar8 = system_cache_buffer;
              if (0.5 < fVar22) {
                fVar29 = fVar29 + fVar22;
              }
            }
          }
        }
        fVar22 = fVar29 + fVar21;
        *(float *)(*(int64_t *)(param_1 + 0x6e0) + 0x13d4) =
             fVar22 * param_2 + *(float *)(*(int64_t *)(param_1 + 0x6e0) + 0x13d4);
        lVar10 = *(int64_t *)(param_1 + 0x6e0);
        if ((1.0 < *(float *)(lVar10 + 0x13d4) || *(float *)(lVar10 + 0x13d4) == 1.0) &&
           ((*(byte *)(lVar10 + 0x1484) & 1) == 0)) {
          *(uint *)(lVar10 + 0x1484) = *(uint *)(lVar10 + 0x1484) | 1;
          puVar11 = (uint64_t *)UltraHighFreq_MemoryManager1(lVar19,stack_array_130);
          lVar19 = *(int64_t *)(param_1 + 0x6e0);
          *(uint64_t *)(lVar19 + 0x13d8) = *puVar11;
          uVar18 = puVar11[4];
          *(uint64_t *)(lVar19 + 0x13f0) = puVar11[3];
          *(uint64_t *)(lVar19 + 0x13f8) = uVar18;
          uVar18 = puVar11[6];
          *(uint64_t *)(lVar19 + 0x1400) = puVar11[5];
          *(uint64_t *)(lVar19 + 0x1408) = uVar18;
          *(uint64_t *)(lVar19 + 0x13e0) = puVar11[1];
          *(uint64_t *)(lVar19 + 0x13e8) = puVar11[2];
          *(uint64_t *)(lVar19 + 0x1410) = puVar11[7];
          *(int32_t *)(lVar19 + 0x1418) = *(int32_t *)(puVar11 + 8);
          puVar1 = (ushort *)(*(int64_t *)(param_1 + 0x6e0) + 0x130);
          *puVar1 = *puVar1 | 0x200;
          function_5a43d0(param_1 + 0x28);
          lVar19 = render_system_data_memory;
          iVar14 = *(int *)(param_1 + 0x18);
          if ((iVar14 != 0) && (lVar8 != 0)) {
            (**(code **)(lVar8 + 0x30))(iVar14);
          }
          (**(code **)(lVar19 + 0x58))(iVar14,1);
          lVar8 = system_cache_buffer;
          if ((iVar14 != 0) && (system_cache_buffer != 0)) {
            (**(code **)(system_cache_buffer + 0x18))(iVar14);
            lVar8 = system_cache_buffer;
          }
        }
        lVar19 = *(int64_t *)(param_1 + 0x6e0);
        if ((0.0 < fVar22) || (*(int *)(lVar19 + 0x1484) != 0)) {
          lVar10 = *(int64_t *)(param_1 + 0x8d8);
          if ((-1 < *(int *)(lVar10 + 0x98d930)) &&
             (cVar6 = SystemFunction_000180508270(param_1,lVar10 + 0x30a0 +
                                                  (int64_t)*(int *)(lVar10 + 0x98d930) * 0xa60),
             cVar6 != '\0')) {
            uVar13 = *(byte *)(lVar19 + 0x1484) & 1;
            fVar23 = *(float *)(lVar10 + 0x98d27c);
            if (*(float *)(lVar10 + 0x98d27c) <= fVar22) {
              fVar23 = fVar22;
            }
            *(float *)(lVar10 + 0x98d27c) = fVar23;
            if ((int)uVar13 < (int)*(uint *)(lVar10 + 0x98d284)) {
              uVar13 = *(uint *)(lVar10 + 0x98d284);
            }
            *(uint *)(lVar10 + 0x98d284) = uVar13;
          }
        }
      }
      lVar19 = *(int64_t *)(param_1 + 0x8d8);
      uVar13 = (uint)*(short *)(lVar19 + 0x52dda0 + lStack_190 * 2);
      uVar17 = (uint64_t)uVar13;
    }
    lVar19 = *(int64_t *)(param_1 + 0x6e0);
    if (*(float *)(lVar19 + 0x13d4) < 2.0) {
      if ((*(float *)(lVar19 + 0x13d4) < 0.1) && ((*(byte *)(lVar19 + 0x1484) & 1) != 0)) {
        *(uint *)(lVar19 + 0x1484) = *(uint *)(lVar19 + 0x1484) & 0xfffffffe;
        lVar19 = render_system_data_memory;
        iVar14 = *(int *)(param_1 + 0x18);
        if ((iVar14 != 0) && (lVar8 != 0)) {
          (**(code **)(lVar8 + 0x30))(iVar14);
        }
        (**(code **)(lVar19 + 0x58))(iVar14,0);
        if ((iVar14 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x18))(iVar14);
        }
      }
    }
    else {
      if (0.0 < fVar29) {
        *(uint *)(lVar19 + 0x1484) = *(uint *)(lVar19 + 0x1484) & 0xfffffffe;
        puVar2 = (uint *)(*(int64_t *)(param_1 + 0x6e0) + 0x1484);
        *puVar2 = *puVar2 | 2;
        puVar1 = (ushort *)(*(int64_t *)(param_1 + 0x6e0) + 0x130);
        *puVar1 = *puVar1 | 0x200;
        *(int64_t *)(*(int64_t *)(param_1 + 0x6e0) + 0x1470) =
             *(int64_t *)
              (&system_error_code + (int64_t)*(int *)(*(int64_t *)(param_1 + 0x6e0) + 0x1478) * 8) +
             300000;
        *(int8_t *)(*(int64_t *)(param_1 + 0x738) + 0x180) = 1;
        lVar19 = render_system_data_memory;
        iVar14 = *(int *)(param_1 + 0x18);
        if ((iVar14 != 0) && (lVar8 != 0)) {
          (**(code **)(lVar8 + 0x30))(iVar14);
        }
        (**(code **)(lVar19 + 0x58))(iVar14,2);
        if ((iVar14 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x18))(iVar14);
        }
      }
      fVar21 = *(float *)(*(int64_t *)(param_1 + 0x6e0) + 0x13d4);
      if (3.0 <= fVar21) {
        fVar21 = 3.0;
      }
      *(float *)(*(int64_t *)(param_1 + 0x6e0) + 0x13d4) = fVar21;
    }
  }
  else {
    lVar8 = *(int64_t *)(param_1 + 0x8d8);
    if ((-1 < *(int *)(lVar8 + 0x98d930)) &&
       (cVar6 = SystemFunction_000180508270(param_1,lVar8 + 0x30a0 +
                                            (int64_t)*(int *)(lVar8 + 0x98d930) * 0xa60),
       cVar6 != '\0')) {
      fVar21 = *(float *)(lVar8 + 0x98d27c);
      if (fVar21 <= 2.0) {
        fVar21 = 2.0;
      }
      *(float *)(lVar8 + 0x98d27c) = fVar21;
      iVar14 = 2;
      if (2 < *(int *)(lVar8 + 0x98d284)) {
        iVar14 = *(int *)(lVar8 + 0x98d284);
      }
      *(int *)(lVar8 + 0x98d284) = iVar14;
      lVar19 = *(int64_t *)(param_1 + 0x6e0);
    }
    if (((*(uint *)(lVar19 + 0x1484) >> 1 & 1) != 0) &&
       (10.0 <= (float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(lVar19 + 0x1478) * 8) -
                       *(int64_t *)(lVar19 + 0x1470)) * 1e-05)) {
      if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8)
                   + 0x48) < render_system_config_memory) &&
         (SystemInitializer(&system_ptr_9f60), render_system_config_memory == -1)) {
        plocal_var_1b0 = &system_data_buffer_ptr;
        local_var_198 = 0;
        plocal_var_1a8 = (int32_t *)0x0;
        local_var_1a0 = 0;
        puVar12 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
        *(int8_t *)puVar12 = 0;
        plocal_var_1a8 = puVar12;
        uVar7 = CoreEngineSystemCleanup(puVar12);
        local_var_198 = CONCAT44(local_var_198._4_4_,uVar7);
        *puVar12 = 0x6c6c6559;
        *(int8_t *)(puVar12 + 1) = 0;
        local_var_1a0 = 4;
        render_system_config_memory = function_571e20(&system_ptr_60c0,&plocal_var_1b0);
        plocal_var_1b0 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar12);
      }
      function_508510(param_1,render_system_config_memory,0,0);
      lVar19 = *(int64_t *)(param_1 + 0x20);
      fStack_1c4 = *(float *)(lVar19 + 0xc);
      fStack_1c0 = *(float *)(lVar19 + 0x10);
      fStack_1bc = *(float *)(*(int64_t *)(param_1 + 0x6d8) + 0x904) + *(float *)(lVar19 + 0x14);
      local_var_1b8 = 0x7f7fffff;
      function_4f5d10(*(uint64_t *)(param_1 + 0x8d8),*(int32_t *)(param_1 + 0x10),&fStack_1c4,
                    0x40a00000);
      *(uint64_t *)(*(int64_t *)(param_1 + 0x6e0) + 0x1470) =
           *(uint64_t *)
            (&system_error_code + (int64_t)*(int *)(*(int64_t *)(param_1 + 0x6e0) + 0x1478) * 8);
    }
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x0001805086f1)
// WARNING: Removing unreachable block (ram,0x000180508705)
// WARNING: Removing unreachable block (ram,0x00018050870e)
// WARNING: Removing unreachable block (ram,0x000180508724)
// WARNING: Removing unreachable block (ram,0x000180508749)
// WARNING: Removing unreachable block (ram,0x000180508757)
// WARNING: Removing unreachable block (ram,0x00018050874e)
// WARNING: Removing unreachable block (ram,0x00018050875a)
// WARNING: Removing unreachable block (ram,0x000180508798)
// WARNING: Removing unreachable block (ram,0x0001805087b0)
// WARNING: Removing unreachable block (ram,0x0001805087c5)
// WARNING: Removing unreachable block (ram,0x0001805087da)
// WARNING: Removing unreachable block (ram,0x0001805087e5)
// WARNING: Removing unreachable block (ram,0x00018050880c)
// WARNING: Removing unreachable block (ram,0x000180508810)
// WARNING: Removing unreachable block (ram,0x000180508819)
// WARNING: Removing unreachable block (ram,0x000180508826)
// WARNING: Removing unreachable block (ram,0x00018050882b)
// WARNING: Removing unreachable block (ram,0x000180508830)
// WARNING: Removing unreachable block (ram,0x000180508836)
// WARNING: Removing unreachable block (ram,0x00018050887f)
// WARNING: Removing unreachable block (ram,0x000180508892)
// WARNING: Removing unreachable block (ram,0x00018050889e)
// WARNING: Removing unreachable block (ram,0x0001805088a8)
// WARNING: Removing unreachable block (ram,0x0001805088bb)
// WARNING: Removing unreachable block (ram,0x0001805086b2)
// WARNING: Removing unreachable block (ram,0x0001805086e0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_5298f0(int64_t param_1,int param_2,int param_3,int32_t param_4,int64_t param_5,
void function_5298f0(int64_t param_1,int param_2,int param_3,int32_t param_4,int64_t param_5,
                  uint64_t param_6,byte *param_7)
{
  byte *pbVar1;
  short sVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  bool bVar6;
  char cVar7;
  int32_t uVar8;
  uint uVar9;
  byte *pbVar10;
  uint64_t uVar11;
  int iVar12;
  int8_t *puVar13;
  int iVar14;
  int64_t lVar15;
  int64_t lVar16;
  float fVar17;
  int8_t auVar18 [16];
  float fVar19;
  float fVar20;
  uint local_var_fc8;
  lVar4 = *(int64_t *)(param_1 + 0x590);
  if (lVar4 == 0) {
    return;
  }
  lVar16 = *(int64_t *)(lVar4 + 0x2460 + (int64_t)param_2 * 0x48);
  lVar5 = *(int64_t *)(lVar4 + 0x2468 + (int64_t)param_2 * 0x48);
  if (lVar5 == 0) goto LAB_180529996;
  if ((*(int *)(lVar16 + 0x18c) == *(int *)(param_5 + 0x18c)) &&
     (*(int *)(lVar16 + 400) == *(int *)(param_5 + 400))) {
    iVar12 = *(int *)(lVar16 + 0x20);
    iVar14 = *(int *)(param_5 + 0x20);
    if (iVar12 == iVar14) {
      if (iVar12 != 0) {
        pbVar10 = *(byte **)(lVar16 + 0x18);
        lVar15 = *(int64_t *)(param_5 + 0x18) - (int64_t)pbVar10;
        do {
          pbVar1 = pbVar10 + lVar15;
          iVar14 = (uint)*pbVar10 - (uint)*pbVar1;
          if (iVar14 != 0) break;
          pbVar10 = pbVar10 + 1;
        } while (*pbVar1 != 0);
      }
    }
    else if (iVar12 != 0) goto LAB_180529993;
    if (iVar14 == 0) goto LAB_180529996;
  }
LAB_180529993:
  lVar16 = lVar5;
LAB_180529996:
  uVar11 = *(uint64_t *)(lVar16 + 0x1d0);
  if ((((uVar11 >> 0xb & 1) == 0) || (param_3 < 3)) && ((uVar11 >> 0x11 & 1) == 0)) {
    if ((uVar11 >> 0xc & 1) == 0) {
      sVar2 = *(short *)(lVar16 + 500);
      if ((*(short *)(lVar16 + 0x7c) == -1) || (1 < param_3)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((sVar2 != -1) && (!bVar6)) {
        if (*(char *)(param_1 + 0x70c) != '\0') {
          if (*(float *)(param_1 + 0x708) < 1.2) {
            return;
          }
          *(float *)(param_1 + 0x708) = *(float *)(param_1 + 0x708) - 1.2;
        }
        lVar4 = *(int64_t *)(param_1 + 0x6d8);
        puVar13 = (int8_t *)0x0;
        if (sVar2 < 0) {
          if (((*(int64_t **)(param_1 + 0x6e8) != (int64_t *)0x0) &&
              (cVar7 = (**(code **)(**(int64_t **)(param_1 + 0x6e8) + 0xd8))(), cVar7 != '\0')) &&
             (cVar7 = (**(code **)(**(int64_t **)(param_1 + 0x6e8) + 0x80))(), cVar7 != '\0')) {
            (**(code **)(**(int64_t **)(param_1 + 0x6e8) + 0x68))();
          }
        }
        else {
          if (((*(uint *)(param_1 + 0x56c) & 0x800) != 0) ||
             (fVar17 = *(float *)(render_system_data_memory + 0x1bc) - *(float *)(lVar4 + 0x8e8),
             fVar19 = *(float *)(render_system_data_memory + 0x1b8) - *(float *)(lVar4 + 0x8e4),
             fVar20 = *(float *)(render_system_data_memory + 0x1c0) - *(float *)(lVar4 + 0x8ec),
             fVar19 * fVar19 + fVar17 * fVar17 + fVar20 * fVar20 <= 100.0)) {
            puVar13 = &local_buffer_00000008;
          }
          cVar7 = function_544200(*(uint64_t *)(param_1 + 0x6d8),(int)sVar2,0,
                                (float *)(lVar4 + 0x8e4),puVar13,*(int32_t *)(param_1 + 0x648));
          if (cVar7 != '\0') {
            if (((*(int64_t **)(param_1 + 0x6e8) != (int64_t *)0x0) &&
                (cVar7 = (**(code **)(**(int64_t **)(param_1 + 0x6e8) + 0xd8))(), cVar7 != '\0'))
               && (cVar7 = (**(code **)(**(int64_t **)(param_1 + 0x6e8) + 0x80))(), cVar7 != '\0'))
            {
              (**(code **)(**(int64_t **)(param_1 + 0x6e8) + 0x68))();
            }
            plVar3 = *(int64_t **)(param_1 + 0x6e8);
            *(uint64_t *)(param_1 + 0x6e8) = 0;
            if (plVar3 != (int64_t *)0x0) {
              (**(code **)(*plVar3 + 0x38))();
            }
          }
        }
        return;
      }
    }
    else if ((*(short *)(lVar16 + 0x7c) == -1) || (1 < param_3)) {
      if ((param_2 == 1) && (uVar11 = SystemFunction_000180534e20(lVar4,0), (uVar11 >> 0xc & 1) != 0)) {
        return;
      }
      fVar20 = (float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0xa00) * 8) -
                      *(int64_t *)(param_1 + 0x9f8)) * 5e-06;
      if ((*(byte *)(param_1 + 0x9f0) == 0) || ((float)*(byte *)(param_1 + 0x9f0) < fVar20)) {
        uVar8 = function_52c030(param_1,7);
        if (*(int *)(param_1 + 0x568) == 1) {
          *(int8_t *)(param_1 + 0x9f0) = 0;
          return;
        }
        iVar12 = (int)fVar20;
        fVar17 = fVar20;
        if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar20)) {
          auVar18._4_4_ = fVar20;
          auVar18._0_4_ = fVar20;
          auVar18._8_8_ = 0;
          uVar9 = movmskps(uVar8,auVar18);
          fVar17 = (float)(int)(iVar12 + (uVar9 & 1 ^ 1));
        }
        if (fVar20 <= 0.0) {
          fVar17 = fVar17 - 1e-08;
        }
        else {
          fVar17 = fVar17 + 1e-08;
        }
        *(char *)(param_1 + 0x9f0) = (char)(int)fVar17;
      }
      return;
    }
    *param_7 = (byte)(uVar11 >> 0x1d) & 1 ^ 1;
    if ((uVar11 >> 0x1d & 1) != 0) {
      param_6 = 0;
    }
    function_4f83f0(*(uint64_t *)(param_1 + 0x8d8),(int)*(short *)(lVar16 + 0x7c),
                  *(int64_t *)(param_1 + 0x20) + 0xc,CONCAT71((int7)((uint64_t)lVar5 >> 8),1),
                  local_var_fc8 & 0xffffff00,*(int32_t *)(param_1 + 0x10),0xffffffff,
                  0,param_6,param_4);
  }
  return;
}
// 函数: void function_529ac0(void)
void function_529ac0(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address