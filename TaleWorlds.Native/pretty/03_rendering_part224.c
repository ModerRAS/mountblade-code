#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part224.c - 2 个函数
// 函数: void function_3944c0(uint64_t param_1,int64_t param_2,int64_t param_3,float *param_4,
void function_3944c0(uint64_t param_1,int64_t param_2,int64_t param_3,float *param_4,
                  float *param_5)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  int64_t lVar6;
  char cVar7;
  ushort uVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  int64_t local_var_48;
  uint64_t local_buffer_50;
  int64_t *local_buffer_58;
  int8_t stack_array_198 [112];
  float fStack_128;
  float fStack_124;
  uint64_t local_var_120;
  uint64_t local_var_118;
  int64_t lStack_110;
  uint64_t local_var_108;
  float *pfStack_100;
  uint64_t local_var_f8;
  int8_t stack_array_e8 [80];
  uint64_t local_var_98;
  local_var_98 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_198;
  uVar11 = 0;
  pfStack_100 = param_5;
  local_var_f8 = local_buffer_50;
  if (local_buffer_58 != (int64_t *)0x0) {
    *local_buffer_58 = 0;
  }
  if (param_2 == 0) goto LAB_1803946d7;
  fVar1 = *param_5;
  fVar2 = param_5[1];
  fVar3 = *param_4;
  fVar4 = param_4[1];
  fStack_128 = fVar1 + fVar3;
  fStack_124 = fVar2 + fVar4;
  cVar7 = SystemCore_PerformanceMonitor(param_2,&fStack_128);
  if (param_2 != param_3) {
    if (param_3 == 0) {
      if (cVar7 == '\0') {
LAB_18039466d:
        if (1e-05 <= fVar2 * fVar2 + fVar1 * fVar1) {
          if (local_var_48 != 0) {
            SystemFunction_000180396690(local_var_48);
          }
// WARNING: Subroutine does not return
          memset(stack_array_e8,0,0x50);
        }
        bVar5 = *(byte *)(param_2 + 0xa8);
        uVar9 = uVar11 & 0xffffffff;
        if (bVar5 != 0) {
          plVar10 = (int64_t *)(param_2 + 0xb0);
          do {
            lVar6 = *plVar10;
            if ((lVar6 != 0) &&
               (fStack_128 = fVar1 + fVar3, fStack_124 = fVar2 + fVar4,
               cVar7 = SystemCore_PerformanceMonitor(lVar6,&fStack_128), cVar7 != '\0')) {
              if (local_var_48 != 0) {
                SystemFunction_000180396690(local_var_48);
                fStack_128 = *param_4 + *pfStack_100;
                fStack_124 = param_4[1] + pfStack_100[1];
                local_var_120 = CONCAT44(fStack_124,fStack_128);
                local_var_118 = *(uint64_t *)(param_2 + 0x60 + (int64_t)(int)uVar9 * 8);
                local_var_108 = (uint64_t)(*(ushort *)(lVar6 + 0x124) & 0x7fff) | 0x8000;
                lStack_110 = lVar6;
                function_3966c0(local_var_48,&local_var_120);
              }
              if (local_buffer_58 != (int64_t *)0x0) {
                *local_buffer_58 = lVar6;
              }
              break;
            }
            uVar9 = (uint64_t)((int)uVar9 + 1);
            uVar11 = uVar11 + 1;
            plVar10 = plVar10 + 1;
          } while ((int64_t)uVar11 < (int64_t)(uint64_t)bVar5);
        }
        goto LAB_1803946d7;
      }
    }
    else if ((cVar7 == '\0') || (1e-05 <= fVar2 * fVar2 + fVar1 * fVar1)) goto LAB_18039466d;
  }
  if (local_var_48 != 0) {
    if (*(char *)(local_var_48 + 0x1024) == (char)uVar11) {
      *(uint64_t *)(local_var_48 + 0x1008) = *(uint64_t *)(local_var_48 + 0x1000);
      *(int8_t *)(local_var_48 + 0x1024) = 1;
    }
    *(int *)(local_var_48 + 0x1020) = (int)uVar11;
    fStack_128 = *param_4 + *param_5;
    fStack_124 = param_4[1] + param_5[1];
    local_var_120 = CONCAT44(fStack_124,fStack_128);
    uVar8 = *(ushort *)(param_2 + 0x124) & 0x7fff;
    if ((char)(uVar11 >> 8) < '\0') {
      uVar8 = uVar8 | 0x8000;
    }
    local_var_108._2_6_ = (uint8_t)(uVar11 >> 0x10);
    local_var_108 = CONCAT62(local_var_108._2_6_,uVar8) | 0x8000;
    local_var_118 = uVar11;
    lStack_110 = param_2;
    function_3966c0(local_var_48,&local_var_120);
  }
  if (local_buffer_58 != (int64_t *)0x0) {
    *local_buffer_58 = param_2;
  }
LAB_1803946d7:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_98 ^ (uint64_t)stack_array_198);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_394850(int64_t param_1,int64_t param_2,int64_t param_3,float *param_4,float *param_5,
void function_394850(int64_t param_1,int64_t param_2,int64_t param_3,float *param_4,float *param_5,
                  char param_6,float param_7,char param_8,int64_t param_9,uint64_t *param_10,
                  int param_11,char param_12,uint64_t param_13,int64_t *param_14)
{
  int32_t *puVar1;
  byte bVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  uint64_t uVar16;
  int iVar17;
  uint64_t uVar18;
  int64_t *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int8_t auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int8_t stack_array_298 [32];
  float *pfStack_278;
  char cStack_270;
  float fStack_268;
  char cStack_260;
  int64_t lStack_258;
  uint64_t *plocal_var_250;
  int iStack_248;
  char cStack_240;
  uint64_t local_var_238;
  int64_t *plStack_230;
  char cStack_228;
  int iStack_224;
  uint local_var_220;
  int64_t *plStack_218;
  uint64_t local_var_210;
  uint64_t local_var_208;
  uint64_t *plocal_var_200;
  int iStack_1f8;
  int iStack_1f4;
  int64_t *plStack_1f0;
  int64_t lStack_1e8;
  uint64_t local_var_1e0;
  uint64_t local_var_1d8;
  uint64_t local_var_1d0;
  float *pfStack_1c8;
  float *pfStack_1c0;
  uint64_t local_var_1b8;
  int32_t local_var_1b0;
  int64_t lStack_1a8;
  int64_t *plStack_1a0;
  uint64_t *plocal_var_198;
  uint64_t local_var_190;
  float fStack_188;
  float fStack_184;
  int64_t lStack_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  int64_t lStack_168;
  ushort local_var_160;
  int32_t local_var_15e;
  int16_t local_var_15a;
  int64_t lStack_158;
  float *pfStack_150;
  uint64_t stack_array_148 [4];
  uint64_t local_var_128;
  uint64_t local_var_120;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  int32_t local_var_104;
  int32_t local_var_100;
  int32_t local_var_fc;
  uint64_t local_var_f8;
  local_var_f8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_298;
  lStack_158 = (int64_t)param_11;
  local_var_190 = param_13;
  pfStack_1c8 = param_5;
  plocal_var_198 = param_10;
  iStack_1f4 = param_11;
  plStack_1a0 = param_14;
  if (param_14 != (int64_t *)0x0) {
    *param_14 = param_2;
  }
  if ((param_12 == '\0') && (param_2 == param_3)) {
    cStack_228 = '\x01';
  }
  else {
    cStack_228 = '\0';
  }
  uVar14 = 0;
  local_var_220 = 0;
  iStack_1f8 = 0;
  if (param_9 == 0) {
    local_var_1b8 = local_var_1b8 & 0xffffffff00000000;
  }
  else if (*(char *)(param_9 + 0x1024) == '\0') {
    local_var_1b8 = *(int64_t *)(param_9 + 0x1008) - *(int64_t *)(param_9 + 0x1000) >> 5;
  }
  else {
    local_var_1b8 = (uint64_t)*(uint *)(param_9 + 0x1020);
  }
  local_var_1b0 = *(int32_t *)(*(int64_t *)(param_1 + 0x528) + 0x60300);
  lStack_1e8 = param_3;
  pfStack_1c0 = param_4;
  lStack_180 = param_1;
  iVar8 = SystemFunction_00018038b420(param_2);
  plocal_var_200 = (uint64_t *)(param_2 + 0x60);
  fVar21 = 1.0;
  plStack_1f0 = (int64_t *)(param_2 + 0xb0);
  local_var_210 = (uint64_t)iVar8;
  plStack_218 = (int64_t *)(param_2 + 0x80);
  local_var_208 = 0;
  lStack_1a8 = 0;
  iStack_224 = 1;
  puVar15 = plocal_var_200;
  uVar16 = local_var_210;
  uVar18 = uVar14;
  plVar19 = plStack_1f0;
  cVar7 = cStack_228;
  iVar8 = 1;
LAB_180394a30:
  do {
    do {
      bVar2 = *(byte *)(param_2 + 0xa8);
      plVar13 = (int64_t *)0x0;
      bVar5 = false;
      iVar17 = (int)uVar14;
      if ((int)(uint)bVar2 <= iVar17) {
        if ((uint64_t)(int64_t)iStack_1f8 <
            (uint64_t)(*(int64_t *)(param_2 + 0x100) - *(int64_t *)(param_2 + 0xf8) >> 3)) {
          lVar9 = *(int64_t *)(*(int64_t *)(param_2 + 0xf8) + lStack_1a8);
          if ((*(byte *)(param_2 + 0x139) & 4) == 0) {
            plVar12 = *(int64_t **)(lVar9 + 0x118);
          }
          else {
            plVar12 = *(int64_t **)(param_2 + 0x118);
            if (((plVar12 == (int64_t *)0x0) || ((*(byte *)(lVar9 + 0x139) & 4) != 0)) &&
               (lVar10 = 0, plVar12 = plVar13, iVar8 = iStack_224, (uint64_t)bVar2 != 0)) {
              puVar11 = (uint64_t *)(param_2 + 0x60);
              do {
                plVar12 = (int64_t *)*puVar11;
                if (((char)plVar12[4] == '\x02') && ((plVar12[2] == lVar9 || (plVar12[3] == lVar9)))
                   ) break;
                lVar10 = lVar10 + 1;
                puVar11 = puVar11 + 1;
                plVar12 = plVar13;
              } while (lVar10 < (int64_t)(uint64_t)bVar2);
            }
          }
          local_var_1e0 = (float *)plVar12[1];
          iStack_1f8 = iStack_1f8 + 1;
          lStack_1a8 = lStack_1a8 + 8;
          bVar5 = true;
          plVar13 = plVar12;
          goto LAB_180394b77;
        }
        goto LAB_1803951d6;
      }
      if (uVar18 == uVar16) {
        local_var_220 = iVar17 + 1;
        uVar14 = (uint64_t)local_var_220;
        iStack_224 = iVar8 + 1;
        local_var_208 = uVar18 + 1;
        plStack_1f0 = plVar19 + 1;
        plocal_var_200 = puVar15 + 1;
        plStack_218 = plStack_218 + 1;
        puVar15 = plocal_var_200;
        uVar18 = local_var_208;
        plVar19 = plStack_1f0;
        iVar8 = iStack_224;
        goto LAB_180394a30;
      }
      lVar9 = *plVar19;
      if ((lVar9 != 0) || (cVar7 != '\0')) {
        plVar13 = (int64_t *)*puVar15;
      }
      local_var_220 = iVar17 + 1;
      uVar14 = (uint64_t)local_var_220;
      uVar18 = uVar18 + 1;
      plVar19 = plVar19 + 1;
      puVar15 = puVar15 + 1;
      iStack_224 = iStack_224 + 1;
      local_var_1e0 = *(float **)(param_2 + 0x80 + (int64_t)(iVar8 % (int)(uint)bVar2) * 8);
      plVar12 = plStack_218;
      plStack_218 = plStack_218 + 1;
      local_var_208 = uVar18;
      plocal_var_200 = puVar15;
      plStack_1f0 = plVar19;
      iVar8 = iStack_224;
LAB_180394b77:
      pfStack_150 = (float *)*plVar12;
      uVar16 = local_var_210;
      cVar7 = cStack_228;
    } while ((lVar9 == 0) && (cStack_228 == '\0'));
    lVar9 = 0;
    do {
      if ((int64_t *)param_10[lVar9] == plVar13) goto LAB_180394a30;
      lVar9 = lVar9 + 1;
    } while (lVar9 < 10);
  } while ((((!bVar5) && (param_12 == '\0')) && (cStack_228 == '\0')) &&
          (*(byte *)(plVar13 + 4) < 2));
  lVar9 = plVar13[2];
  if (!bVar5) {
    if ((param_12 == '\0') && (cStack_228 == '\0')) {
      if (lVar9 == param_2) {
LAB_180394c11:
        lVar9 = plVar13[3];
      }
    }
    else if (lVar9 != param_2) goto LAB_180394c11;
  }
  puVar15 = (uint64_t *)plVar13[1];
  uVar3 = *(uint64_t *)*plVar13;
  uVar4 = *puVar15;
  local_var_1d8._0_4_ = (float)uVar3;
  local_var_1d8._4_4_ = (float)((uint64_t)uVar3 >> 0x20);
  local_var_1d0._0_4_ = (float)uVar4;
  local_var_1d0._4_4_ = (float)((uint64_t)uVar4 >> 0x20);
  fVar24 = (float)local_var_1d0;
  fVar20 = local_var_1d0._4_4_;
  fVar22 = (float)local_var_1d8;
  fVar25 = local_var_1d8._4_4_;
  if ((param_6 == '\0') &&
     ((cVar7 = *(char *)(*plVar13 + 0xc), cVar7 != '\0' ||
      (*(char *)((int64_t)puVar15 + 0xc) != '\0')))) {
    fVar28 = (float)local_var_1d8 - (float)local_var_1d0;
    fVar27 = local_var_1d8._4_4_ - local_var_1d0._4_4_;
    fVar25 = fVar27 * fVar27 + fVar28 * fVar28;
    auVar23 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
    fVar22 = auVar23._0_4_;
    fVar21 = param_7;
    if (param_7 <= 0.4) {
      fVar21 = 0.4;
    }
    fVar29 = fVar22 * 0.5 * (3.0 - fVar25 * fVar22 * fVar22);
    fVar30 = fVar29 * fVar25 * 0.4;
    if (fVar21 <= fVar30) {
      fVar30 = fVar21;
    }
    if (cVar7 != '\0') {
      local_var_1d8._0_4_ = (float)local_var_1d8 - fVar29 * fVar28 * fVar30;
      local_var_1d8._4_4_ = local_var_1d8._4_4_ - fVar29 * fVar27 * fVar30;
    }
    fVar21 = 1.0;
    fVar22 = (float)local_var_1d8;
    fVar25 = local_var_1d8._4_4_;
    if (*(char *)((int64_t)puVar15 + 0xc) != '\0') {
      fVar24 = (float)local_var_1d0 + fVar30 * fVar29 * fVar28;
      fVar20 = local_var_1d0._4_4_ + fVar29 * fVar27 * fVar30;
    }
  }
  local_var_1d8 = uVar3;
  local_var_1d0 = uVar4;
  cVar6 = function_38acd0(lVar9,local_var_190,plVar13,local_var_1b0);
  uVar14 = (uint64_t)local_var_220;
  puVar15 = plocal_var_200;
  uVar16 = local_var_210;
  uVar18 = local_var_208;
  cVar7 = cStack_228;
  iVar8 = iStack_224;
  if (cVar6 == '\0') goto LAB_180394a30;
  fVar27 = pfStack_1c8[1];
  fVar28 = *pfStack_1c8;
  fVar30 = fVar27 * (fVar24 - fVar22) - fVar28 * (fVar20 - fVar25);
  if (fVar30 == 0.0) goto LAB_180394a30;
  fVar21 = fVar21 / fVar30;
  fVar29 = *pfStack_1c0 - fVar22;
  fVar30 = pfStack_1c0[1] - fVar25;
  fVar26 = (fVar29 * fVar27 - fVar30 * fVar28) * fVar21;
  fVar24 = (fVar29 * (fVar20 - fVar25) - fVar30 * (fVar24 - fVar22)) * fVar21;
  fVar21 = 1.0;
  if ((((fVar26 < -0.001) || (1.001 < fVar26)) || (fVar24 < -0.001)) || (1.001 < fVar24))
  goto LAB_180394a30;
  fVar20 = fVar24;
  if (fVar26 <= fVar24) {
    fVar20 = fVar26;
  }
  if (1.0 < fVar20) goto LAB_180394a30;
  if (fVar24 <= fVar26) {
    fVar24 = fVar26;
  }
  if (fVar24 < 0.0) goto LAB_180394a30;
  stack_array_148[0] = *param_10;
  stack_array_148[1] = param_10[1];
  stack_array_148[2] = param_10[2];
  stack_array_148[3] = param_10[3];
  fStack_188 = *pfStack_1c0 + fVar28;
  local_var_128 = param_10[4];
  local_var_120 = param_10[5];
  fStack_184 = pfStack_1c0[1] + fVar27;
  local_var_118 = *(int32_t *)(param_10 + 6);
  local_var_114 = *(int32_t *)((int64_t)param_10 + 0x34);
  local_var_110 = *(int32_t *)(param_10 + 7);
  local_var_10c = *(int32_t *)((int64_t)param_10 + 0x3c);
  local_var_108 = *(int32_t *)(param_10 + 8);
  local_var_104 = *(int32_t *)((int64_t)param_10 + 0x44);
  local_var_100 = *(int32_t *)(param_10 + 9);
  local_var_fc = *(int32_t *)((int64_t)param_10 + 0x4c);
  stack_array_148[lStack_158] = plVar13;
  cVar7 = SystemCore_PerformanceMonitor(lVar9,&fStack_188);
  if (((cVar7 == '\0') || (lStack_1e8 != 0)) && (lVar9 != lStack_1e8)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  if (((param_8 != '\0') && (cVar6 == '\0')) && (0.0 < *(float *)(lVar9 + 0x120))) {
LAB_180394a10:
    fVar21 = 1.0;
    puVar15 = plocal_var_200;
    uVar16 = local_var_210;
    param_10 = plocal_var_198;
    plVar19 = plStack_1f0;
    cVar7 = cStack_228;
    iVar8 = iStack_224;
    goto LAB_180394a30;
  }
  if (!bVar5) {
    if ((param_12 != '\0') && (cVar6 == '\0')) {
      fVar27 = -fVar27;
      fVar28 = -fVar28;
    }
    uVar14 = (uint64_t)local_var_220;
    uVar18 = local_var_208;
    if (0.0001 < (pfStack_150[1] - local_var_1e0[1]) * fVar28 + (*local_var_1e0 - *pfStack_150) * fVar27)
    goto LAB_180394a10;
  }
  if (plStack_1a0 != (int64_t *)0x0) {
    *plStack_1a0 = lVar9;
  }
  if (param_9 != 0) {
    local_var_15e = 0;
    local_var_15a = 0;
    local_var_160 = *(ushort *)(lVar9 + 0x124) | 0x8000;
    local_var_178 = 0;
    local_var_170 = plVar13;
    lStack_168 = lVar9;
    if (*(char *)(param_9 + 0x1024) != '\0') {
      if (*(int *)(param_9 + 0x1020) + 1 < 0x81) {
        local_var_170._0_4_ = SUB84(plVar13,0);
        local_var_170._4_4_ = (int32_t)((uint64_t)plVar13 >> 0x20);
        lVar10 = (int64_t)*(int *)(param_9 + 0x1020) * 0x20;
        puVar1 = (int32_t *)(lVar10 + param_9);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = (int32_t)local_var_170;
        puVar1[3] = local_var_170._4_4_;
        plVar19 = (int64_t *)(lVar10 + 0x10 + param_9);
        *plVar19 = lVar9;
        plVar19[1] = (uint64_t)local_var_160;
        *(int *)(param_9 + 0x1020) = *(int *)(param_9 + 0x1020) + 1;
        goto LAB_180394fe7;
      }
      function_396b10(param_9);
    }
    function_396dd0(param_9 + 0x1000,&local_var_178);
  }
LAB_180394fe7:
  if (cVar6 != '\0') {
    if (param_9 != 0) {
      local_var_1e0 = (float *)CONCAT44(pfStack_1c8[1] + pfStack_1c0[1],*pfStack_1c8 + *pfStack_1c0);
      if (*(char *)(param_9 + 0x1024) == '\0') {
        iVar8 = (int)(*(int64_t *)(param_9 + 0x1008) - *(int64_t *)(param_9 + 0x1000) >> 5);
      }
      else {
        iVar8 = *(int *)(param_9 + 0x1020);
      }
      lVar9 = param_9;
      if (*(char *)(param_9 + 0x1024) == '\0') {
        lVar9 = *(int64_t *)(param_9 + 0x1000);
      }
      *(float **)(lVar9 + -0x20 + (int64_t)iVar8 * 0x20) = local_var_1e0;
    }
    if ((cStack_228 == '\0') && (cVar7 == '\0')) {
      iStack_248 = (iStack_1f4 + 1) % 10;
      local_var_238 = local_var_190;
      plocal_var_250 = stack_array_148;
      lStack_258 = param_9;
      cStack_260 = param_8;
      fStack_268 = param_7;
      cStack_270 = param_6;
      pfStack_278 = pfStack_1c8;
      cStack_240 = cVar7;
      plStack_230 = plStack_1a0;
      cVar7 = function_394850(lStack_180,lStack_1e8,lStack_1e8,pfStack_1c0);
      if (cVar7 == '\0') {
LAB_1803951d6:
        if (param_9 != 0) {
          function_3967f0(param_9,local_var_1b8 & 0xffffffff);
        }
      }
    }
LAB_1803951e8:
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_f8 ^ (uint64_t)stack_array_298);
  }
  iStack_248 = (iStack_1f4 + 1) % 10;
  local_var_238 = local_var_190;
  plocal_var_250 = stack_array_148;
  lStack_258 = param_9;
  cStack_260 = param_8;
  fStack_268 = param_7;
  cStack_270 = param_6;
  pfStack_278 = pfStack_1c8;
  cStack_240 = cVar6;
  plStack_230 = plStack_1a0;
  cVar7 = function_394850(lStack_180,lVar9,lStack_1e8,pfStack_1c0);
  if (cVar7 != '\0') goto LAB_1803951e8;
  fVar21 = 1.0;
  uVar14 = (uint64_t)local_var_220;
  puVar15 = plocal_var_200;
  uVar16 = local_var_210;
  uVar18 = local_var_208;
  param_10 = plocal_var_198;
  plVar19 = plStack_1f0;
  cVar7 = cStack_228;
  iVar8 = iStack_224;
  goto LAB_180394a30;
}