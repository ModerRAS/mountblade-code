#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part042.c - 9 个函数
// 函数: void DataStructure_8d680(int64_t param_1,int32_t param_2,uint64_t param_3)
void DataStructure_8d680(int64_t param_1,int32_t param_2,uint64_t param_3)
{
  int8_t auVar1 [16];
  byte bVar2;
  uint64_t uVar3;
  int8_t uVar4;
  char cVar5;
  int8_t uVar6;
  int8_t uVar7;
  int8_t uVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  int8_t (*pauVar12) [16];
  uint64_t *puVar13;
  int *piVar14;
  int64_t lVar15;
  uint uVar16;
  uint64_t uVar17;
  float *pfVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int64_t lVar22;
  uint64_t uVar23;
  uint uVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int8_t stack_array_308 [32];
  float fStack_2e8;
  float fStack_2e0;
  float fStack_2d8;
  int iStack_2c8;
  int8_t stack_array_2b8 [16];
  int iStack_2a8;
  uint local_var_2a4;
  int iStack_2a0;
  int iStack_29c;
  int32_t local_var_298;
  int64_t lStack_290;
  int8_t stack_array_288 [16];
  int8_t stack_array_278 [16];
  int8_t stack_array_268 [16];
  int8_t stack_array_258 [12];
  float afStack_24c [4];
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  uint64_t local_var_188;
  uint stack_array_180 [38];
  uint64_t local_var_e8;
  local_var_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_308;
  iStack_29c = 0;
  stack_array_278._0_8_ = *(uint64_t *)(param_1 + 0x70);
  stack_array_278._8_8_ = *(uint64_t *)(param_1 + 0x78);
  stack_array_288 = *(int8_t (*) [16])(param_1 + 0x50);
  local_var_2a4 = 1;
  iStack_2a8 = 0;
  iStack_2a0 = 0;
  local_var_298 = param_2;
  lStack_290 = param_1;
  pauVar12 = (int8_t (*) [16])DataStructure_8b4c0(stack_array_2b8,stack_array_288,param_2);
  uVar23 = 0;
  stack_array_2b8._8_4_ = SUB124(*(int8_t (*) [12])*pauVar12,8);
  fVar26 = fStack_228;
  fVar28 = afStack_24c[1];
  fVar29 = afStack_24c[3];
  fVar30 = fStack_23c;
  fVar31 = afStack_24c[2];
  fVar32 = fStack_230;
  fVar33 = fStack_234;
  fVar34 = fStack_238;
  iVar25 = 0;
  uVar16 = stack_array_2b8._8_4_;
  uVar19 = 0;
  stack_array_2b8 = *pauVar12;
LAB_18028d788:
  uVar21 = uVar19;
  lVar15 = lStack_290;
  uVar10 = stack_array_2b8._12_4_;
  if ((int)uVar10 <= (int)uVar16) {
code_r0x00018028d98f:
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_e8 ^ (uint64_t)stack_array_308);
  }
  uVar3 = stack_array_2b8._0_8_;
  uVar19 = (uint)uVar23;
  uVar17 = uVar23 & 0xffffffff;
  uVar24 = uVar16 + 1;
  iStack_2c8 = 1;
  lVar22 = (int64_t)(int)uVar24;
  stack_array_2b8._8_4_ = uVar24;
  stack_array_2b8._12_4_ = uVar10;
  bVar2 = *(byte *)((int64_t)(int)uVar16 + stack_array_2b8._0_8_);
  switch(bVar2) {
  case 1:
  case 3:
  case 0x12:
  case 0x17:
    iStack_2a8 = iStack_2a8 + (int)uVar21 / 2;
    uVar16 = uVar24;
    goto LAB_18028d788;
  default:
    if (bVar2 == 0xff) {
      if ((int)uVar24 < (int)uVar10) {
        uVar24 = uVar16 + 2;
        uVar4 = *(int8_t *)(lVar22 + stack_array_2b8._0_8_);
        stack_array_2b8._8_4_ = uVar24;
      }
      else {
        uVar4 = 0;
      }
      if ((int)uVar24 < (int)uVar10) {
        lVar15 = (int64_t)(int)uVar24;
        uVar24 = uVar24 + 1;
        stack_array_2b8._8_4_ = uVar24;
        uVar6 = *(int8_t *)(lVar15 + uVar3);
      }
      else {
        uVar6 = 0;
      }
      if ((int)uVar24 < (int)uVar10) {
        lVar15 = (int64_t)(int)uVar24;
        uVar24 = uVar24 + 1;
        stack_array_2b8._8_4_ = uVar24;
        uVar7 = *(int8_t *)(lVar15 + uVar3);
      }
      else {
        uVar7 = 0;
      }
      if ((int)uVar24 < (int)uVar10) {
        lVar15 = (int64_t)(int)uVar24;
        uVar24 = uVar24 + 1;
        stack_array_2b8._8_4_ = uVar24;
        uVar8 = *(int8_t *)(lVar15 + uVar3);
      }
      else {
        uVar8 = 0;
      }
      fVar26 = (float)CONCAT31(CONCAT21(CONCAT11(uVar4,uVar6),uVar7),uVar8) * 1.5258789e-05;
      uVar16 = uVar24;
    }
    else {
      if ((bVar2 != 0x1c) && (0xde < bVar2 - 0x20)) goto code_r0x00018028d98f;
      if ((int)uVar10 < (int)uVar16) {
LAB_18028e1e4:
        stack_array_2b8._8_4_ = uVar10;
      }
      else {
        stack_array_2b8._8_4_ = uVar16;
        if ((int)uVar16 < 0) goto LAB_18028e1e4;
      }
      sVar9 = Function_badb525c(stack_array_2b8);
      uVar23 = 0;
      fVar26 = (float)(int)sVar9;
      uVar16 = stack_array_2b8._8_4_;
    }
    if (0x2f < (int)uVar21) goto code_r0x00018028d98f;
    afStack_24c[(int64_t)(int)uVar21 + 1] = fVar26;
    fVar26 = fStack_228;
    fVar28 = afStack_24c[1];
    fVar29 = afStack_24c[3];
    fVar30 = fStack_23c;
    fVar31 = afStack_24c[2];
    fVar32 = fStack_230;
    fVar33 = fStack_234;
    fVar34 = fStack_238;
    uVar19 = (uint)uVar23;
    if ((uint)uVar23 == 0) {
      uVar19 = uVar21 + 1;
    }
    goto LAB_18028d788;
  case 4:
    local_var_2a4 = uVar19;
    if ((int)uVar21 < 1) goto code_r0x00018028d98f;
    DataStructure_8d290(param_3,0x180000000,afStack_24c[(int)uVar21]);
    uVar23 = 0;
    uVar16 = uVar24;
    uVar19 = 0;
    if (iStack_2c8 == 0) {
      uVar19 = uVar21;
    }
    goto LAB_18028d788;
  case 5:
    if ((int)uVar21 < 2) goto code_r0x00018028d98f;
    if (1 < (int)uVar21) {
      iVar20 = 1;
      do {
        Function_37c04fe3(param_3);
        iVar20 = iVar20 + 2;
      } while (iVar20 < (int)uVar21);
      uVar23 = 0;
      uVar16 = uVar24;
      uVar19 = 0;
      if (iStack_2c8 == 0) {
        uVar19 = uVar21;
      }
      goto LAB_18028d788;
    }
    break;
  case 6:
    if ((int)uVar21 < 1) goto code_r0x00018028d98f;
    while ((int)uVar17 < (int)uVar21) {
      Function_37c04fe3(param_3);
      uVar19 = (int)uVar17 + 1;
code_r0x00018028da18:
      if ((int)uVar21 <= (int)uVar19) break;
      Function_37c04fe3(param_3);
      uVar17 = (uint64_t)(uVar19 + 1);
    }
    break;
  case 7:
    if (0 < (int)uVar21) goto code_r0x00018028da18;
    goto code_r0x00018028d98f;
  case 8:
    if ((int)uVar21 < 6) goto code_r0x00018028d98f;
    if (5 < (int)uVar21) {
      iVar20 = 5;
      pfVar18 = afStack_24c + 5;
      do {
        fStack_2d8 = pfVar18[1];
        fStack_2e0 = *pfVar18;
        fStack_2e8 = pfVar18[-1];
        DataStructure_8d400(param_3);
        iVar20 = iVar20 + 6;
        pfVar18 = pfVar18 + 6;
      } while (iVar20 < (int)uVar21);
      uVar23 = 0;
      uVar16 = uVar24;
      uVar19 = 0;
      if (iStack_2c8 == 0) {
        uVar19 = uVar21;
      }
      goto LAB_18028d788;
    }
    break;
  case 10:
    if (iStack_29c == 0) {
      if (*(int *)(lStack_290 + 0x9c) != 0) {
        puVar13 = (uint64_t *)DataStructure_8d4a0(stack_array_268,lStack_290,local_var_298);
        uVar23 = 0;
        stack_array_278._0_8_ = *puVar13;
        stack_array_278._8_8_ = puVar13[1];
      }
      iStack_29c = 1;
    }
    goto code_r0x00018028ddc9;
  case 0xb:
    if (iVar25 < 1) goto code_r0x00018028d98f;
    iStack_2a0 = iVar25 + -1;
    lVar15 = (int64_t)iStack_2a0;
    if (uVar19 == 0) {
      uVar19 = uVar21;
    }
    stack_array_2b8._4_4_ = stack_array_180[lVar15 * 4 + -1];
    stack_array_2b8._0_4_ = *(int32_t *)(&local_var_188 + lVar15 * 2);
    stack_array_2b8._8_4_ = stack_array_180[lVar15 * 4];
    stack_array_2b8._12_4_ = stack_array_180[lVar15 * 4 + 1];
    iVar25 = iStack_2a0;
    uVar16 = stack_array_180[lVar15 * 4];
    goto LAB_18028d788;
  case 0xc:
    if ((int)uVar24 < (int)uVar10) {
      uVar24 = uVar16 + 2;
      cVar5 = *(char *)(lVar22 + stack_array_2b8._0_8_);
      stack_array_2b8._8_4_ = uVar24;
    }
    else {
      cVar5 = '\0';
    }
    uVar16 = uVar24;
    if (cVar5 == '\"') {
      if ((int)uVar21 < 7) goto code_r0x00018028d98f;
      fStack_2d8 = 0.0;
      DataStructure_8d400(param_3,0x180000000,0,fVar31);
      fStack_2d8 = 0.0;
      fStack_2e8 = -fVar29;
      fStack_2e0 = fVar32;
      DataStructure_8d400(param_3);
      uVar23 = 0;
      uVar19 = 0;
      if (iStack_2c8 == 0) {
        uVar19 = uVar21;
      }
      goto LAB_18028d788;
    }
    if (cVar5 == '#') {
      if ((int)uVar21 < 0xd) goto code_r0x00018028d98f;
      DataStructure_8d400(param_3,0x180000000,fVar31,fVar29);
      fStack_2d8 = fStack_21c;
      fStack_2e0 = fStack_220;
    }
    else {
      if (cVar5 == '$') {
        if ((int)uVar21 < 9) goto code_r0x00018028d98f;
        fStack_2d8 = 0.0;
        DataStructure_8d400(param_3,0x180000000,fVar31,fVar29);
        fStack_2d8 = -(fVar30 + fVar31 + fStack_22c);
        fStack_2e8 = fStack_22c;
        fStack_2e0 = fVar26;
        DataStructure_8d400(param_3);
        uVar23 = 0;
        uVar19 = 0;
        if (iStack_2c8 == 0) {
          uVar19 = uVar21;
        }
        goto LAB_18028d788;
      }
      if ((cVar5 != '%') || ((int)uVar21 < 0xb)) goto code_r0x00018028d98f;
      fVar26 = fVar29 + fVar28 + fVar34 + fVar32 + fStack_228;
      fVar27 = fVar30 + fVar31 + fVar33 + fStack_22c + fStack_224;
      if (ABS(fVar26) <= ABS(fVar27)) {
        fVar26 = -fVar26;
        fVar27 = fStack_220;
      }
      else {
        fVar27 = -fVar27;
        fVar26 = fStack_220;
      }
      DataStructure_8d400(param_3,0x180000000,fVar31,fVar29);
      fStack_2e0 = fVar26;
      fStack_2d8 = fVar27;
    }
    fStack_2e8 = fStack_224;
    fVar26 = fStack_228;
    DataStructure_8d400(param_3);
    uVar23 = 0;
    uVar19 = 0;
    if (iStack_2c8 == 0) {
      uVar19 = uVar21;
    }
    goto LAB_18028d788;
  case 0xe:
    Function_c2c07e56(param_3);
    goto code_r0x00018028d98f;
  case 0x13:
  case 0x14:
    if (local_var_2a4 != 0) {
      iStack_2a8 = iStack_2a8 + (int)uVar21 / 2;
    }
    stack_array_2b8._8_4_ = ((int)((iStack_2a8 + 7 >> 0x1f & 7U) + iStack_2a8 + 7) >> 3) + uVar24;
    if (((int)uVar10 < (int)stack_array_2b8._8_4_) || ((int)stack_array_2b8._8_4_ < 0)) {
      stack_array_2b8._8_4_ = uVar10;
      uVar16 = uVar10;
      local_var_2a4 = uVar19;
    }
    else {
      uVar16 = stack_array_2b8._8_4_;
      local_var_2a4 = uVar19;
    }
    goto LAB_18028d788;
  case 0x15:
    local_var_2a4 = uVar19;
    if ((int)uVar21 < 2) goto code_r0x00018028d98f;
    DataStructure_8d290(param_3,0x180000000,afStack_24c[(int)uVar21]);
    uVar23 = 0;
    uVar16 = uVar24;
    uVar19 = 0;
    if (iStack_2c8 == 0) {
      uVar19 = uVar21;
    }
    goto LAB_18028d788;
  case 0x16:
    local_var_2a4 = uVar19;
    if ((int)uVar21 < 1) goto code_r0x00018028d98f;
    DataStructure_8d290(param_3,0x180000000,0);
    uVar23 = 0;
    uVar16 = uVar24;
    uVar19 = 0;
    if (iStack_2c8 == 0) {
      uVar19 = uVar21;
    }
    goto LAB_18028d788;
  case 0x18:
    if ((int)uVar21 < 8) goto code_r0x00018028d98f;
    if (5 < (int)(uVar21 - 2)) {
      iVar25 = 5;
      pfVar18 = afStack_24c + 5;
      do {
        fStack_2d8 = pfVar18[1];
        fStack_2e0 = *pfVar18;
        fStack_2e8 = pfVar18[-1];
        DataStructure_8d400(param_3);
        uVar19 = (int)uVar17 + 6;
        uVar17 = (uint64_t)uVar19;
        pfVar18 = pfVar18 + 6;
        iVar25 = iVar25 + 6;
      } while (iVar25 < (int)(uVar21 - 2));
      uVar23 = 0;
    }
    if ((int)uVar21 <= (int)(uVar19 + 1)) goto code_r0x00018028d98f;
    Function_37c04fe3(param_3);
    iVar25 = iStack_2a0;
    uVar16 = uVar24;
    uVar19 = (uint)uVar23;
    if (iStack_2c8 == 0) {
      uVar19 = uVar21;
    }
    goto LAB_18028d788;
  case 0x19:
    if ((int)uVar21 < 8) goto code_r0x00018028d98f;
    if (1 < (int)(uVar21 - 6)) {
      iVar20 = 1;
      do {
        Function_37c04fe3(param_3);
        uVar19 = (int)uVar17 + 2;
        uVar17 = (uint64_t)uVar19;
        iVar20 = iVar20 + 2;
      } while (iVar20 < (int)(uVar21 - 6));
    }
    if ((int)uVar21 <= (int)(uVar19 + 5)) goto code_r0x00018028d98f;
    fStack_2d8 = afStack_24c[(int64_t)(int)uVar19 + 6];
    fStack_2e0 = afStack_24c[(int64_t)(int)uVar19 + 5];
    fStack_2e8 = afStack_24c[(int64_t)(int)uVar19 + 4];
    DataStructure_8d400(param_3);
    uVar23 = 0;
    uVar16 = uVar24;
    uVar19 = 0;
    if (iStack_2c8 == 0) {
      uVar19 = uVar21;
    }
    goto LAB_18028d788;
  case 0x1a:
  case 0x1b:
    if ((int)uVar21 < 4) goto code_r0x00018028d98f;
    iVar20 = (uVar21 & 1) + 3;
    if ((int)uVar21 <= iVar20) break;
    pfVar18 = afStack_24c + (uint64_t)(uVar21 & 1) + 3;
    do {
      fStack_2d8 = pfVar18[1];
      fStack_2e8 = *pfVar18;
      if (bVar2 == 0x1b) {
        fStack_2e0 = fStack_2d8;
        fStack_2d8 = 0.0;
      }
      else {
        fStack_2e0 = 0.0;
      }
      DataStructure_8d400(param_3);
      iVar20 = iVar20 + 4;
      pfVar18 = pfVar18 + 4;
    } while (iVar20 < (int)uVar21);
    uVar23 = 0;
    uVar16 = uVar24;
    uVar19 = 0;
    if (iStack_2c8 == 0) {
      uVar19 = uVar21;
    }
    goto LAB_18028d788;
  case 0x1d:
code_r0x00018028ddc9:
    if (((int)uVar21 < 1) || (9 < iVar25)) goto code_r0x00018028d98f;
    lVar22 = (int64_t)iVar25;
    iVar25 = iVar25 + 1;
    (&local_var_188)[lVar22 * 2] = stack_array_2b8._0_8_;
    *(uint64_t *)(stack_array_180 + lVar22 * 4) = stack_array_2b8._8_8_;
    pauVar12 = &stack_array_278;
    if (bVar2 != 10) {
      pauVar12 = (int8_t (*) [16])(lVar15 + 0x60);
    }
    auVar1 = *pauVar12;
    stack_array_2b8._0_8_ = auVar1._0_8_;
    stack_array_2b8._12_4_ = auVar1._12_4_;
    iVar20 = (int)uVar23;
    stack_array_2b8._8_4_ = stack_array_2b8._12_4_;
    if (-1 < auVar1._8_8_) {
      stack_array_2b8._8_4_ = iVar20;
    }
    if ((int)stack_array_2b8._8_4_ < (int)stack_array_2b8._12_4_) {
      lVar15 = (int64_t)(int)stack_array_2b8._8_4_;
      stack_array_2b8._8_4_ = stack_array_2b8._8_4_ + 1;
      uVar4 = *(int8_t *)(lVar15 + stack_array_2b8._0_8_);
    }
    else {
      uVar4 = 0;
    }
    if ((int)stack_array_2b8._8_4_ < (int)stack_array_2b8._12_4_) {
      lVar15 = (int64_t)(int)stack_array_2b8._8_4_;
      stack_array_2b8._8_4_ = stack_array_2b8._8_4_ + 1;
      uVar6 = *(int8_t *)(lVar15 + stack_array_2b8._0_8_);
    }
    else {
      uVar6 = 0;
    }
    uVar16 = (uint)CONCAT11(uVar4,uVar6);
    if (uVar16 < 0x846c) {
      iVar11 = 0x6b;
      if (0x4d7 < uVar16) {
        iVar11 = 0x46b;
      }
    }
    else {
      iVar11 = 0x8000;
    }
    iStack_2a0 = iVar25;
    if (((int)afStack_24c[(int64_t)(int)(uVar21 - 1) + 1] + iVar11 < 0) ||
       ((int)uVar16 <= (int)afStack_24c[(int64_t)(int)(uVar21 - 1) + 1] + iVar11)) {
      stack_array_288._8_8_ = 0;
      stack_array_288._0_8_ = uVar23;
      auVar1 = stack_array_288;
      stack_array_288._4_4_ = (int32_t)(uVar23 >> 0x20);
      stack_array_288._8_4_ = 0;
      stack_array_288._12_4_ = 0;
      stack_array_2b8._4_4_ = stack_array_288._4_4_;
      stack_array_2b8._8_4_ = stack_array_288._8_4_;
      stack_array_2b8._12_4_ = stack_array_288._12_4_;
      stack_array_288 = auVar1;
    }
    else {
      piVar14 = (int *)DataStructure_8b4c0(stack_array_258,stack_array_2b8);
      uVar23 = 0;
      iVar20 = *piVar14;
      stack_array_2b8._4_4_ = piVar14[1];
      stack_array_2b8._8_4_ = piVar14[2];
      stack_array_2b8._12_4_ = piVar14[3];
    }
    stack_array_2b8._0_4_ = iVar20;
    if (stack_array_2b8._12_4_ == 0) goto code_r0x00018028d98f;
    stack_array_2b8._8_4_ = (int32_t)uVar23;
    uVar16 = stack_array_2b8._8_4_;
    uVar19 = stack_array_2b8._8_4_;
    if (stack_array_2b8._8_4_ == 0) {
      uVar19 = uVar21 - 1;
    }
    goto LAB_18028d788;
  case 0x1e:
    if ((int)uVar21 < 4) goto code_r0x00018028d98f;
    while (iVar20 = (int)uVar17, iVar20 + 3 < (int)uVar21) {
      uVar19 = iVar20 + 4;
      if (uVar21 - iVar20 == 5) {
        fStack_2d8 = afStack_24c[(int64_t)(int)uVar19 + 1];
      }
      else {
        fStack_2d8 = 0.0;
      }
      fStack_2e8 = afStack_24c[(int64_t)iVar20 + 3];
      fStack_2e0 = afStack_24c[(int64_t)iVar20 + 4];
      DataStructure_8d400(param_3);
code_r0x00018028daae:
      if ((int)uVar21 <= (int)(uVar19 + 3)) break;
      fStack_2d8 = afStack_24c[(int64_t)(int)uVar19 + 4];
      if (uVar21 - uVar19 == 5) {
        fStack_2e0 = afStack_24c[(int64_t)(int)(uVar19 + 4) + 1];
      }
      else {
        fStack_2e0 = 0.0;
      }
      fStack_2e8 = afStack_24c[(int64_t)(int)uVar19 + 3];
      DataStructure_8d400(param_3);
      uVar17 = (uint64_t)(uVar19 + 4);
    }
    uVar23 = 0;
    break;
  case 0x1f:
    if (3 < (int)uVar21) goto code_r0x00018028daae;
    goto code_r0x00018028d98f;
  }
  uVar16 = uVar24;
  uVar19 = (uint)uVar23;
  if (iStack_2c8 == 0) {
    uVar19 = uVar21;
  }
  goto LAB_18028d788;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t DataStructure_8e390(uint64_t param_1,int32_t param_2,uint64_t *param_3)
{
  int iVar1;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  int iStack_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  int32_t local_var_10;
  local_var_78 = 1;
  local_var_50 = 0;
  iStack_48 = 0;
  local_var_40 = 0;
  local_var_10 = 0;
  local_var_70 = 0;
  local_var_68 = 0;
  local_var_60 = 0;
  local_var_58 = 0;
  local_var_38 = 0;
  local_var_30 = 0;
  local_var_28 = 0;
  local_var_20 = 0;
  iVar1 = DataStructure_8d680(0,0,&local_var_78);
  if (iVar1 != 0) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    local_var_18 = Function_a18dbc9a((int64_t)iStack_48 * 0xe,SYSTEM_DATA_MANAGER_B);
    *param_3 = local_var_18;
    iVar1 = DataStructure_8d680(param_1,param_2,&local_var_40);
    if (iVar1 != 0) {
      return local_var_10;
    }
  }
  *param_3 = 0;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t DataStructure_8e460(int64_t param_1,int32_t param_2,uint64_t *param_3)
{
  int iVar1;
  uint64_t uVar2;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  int iStack_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  uint local_var_10;
  if (*(int *)(param_1 + 0x4c) == 0) {
    uVar2 = DataStructure_8c3e0();
  }
  else {
    uVar2 = 0;
    local_var_78 = 1;
    local_var_50 = 0;
    iStack_48 = 0;
    local_var_40 = 0;
    local_var_10 = 0;
    local_var_70 = 0;
    local_var_68 = 0;
    local_var_60 = 0;
    local_var_58 = 0;
    local_var_38 = 0;
    local_var_30 = 0;
    local_var_28 = 0;
    local_var_20 = 0;
    iVar1 = DataStructure_8d680(0,0,&local_var_78);
    if (iVar1 != 0) {
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      }
      local_var_18 = Function_a18dbc9a((int64_t)iStack_48 * 0xe,SYSTEM_DATA_MANAGER_B);
      *param_3 = local_var_18;
      iVar1 = DataStructure_8d680(param_1,param_2,&local_var_40);
      if (iVar1 != 0) {
        return (uint64_t)local_var_10;
      }
    }
    *param_3 = 0;
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t
DataStructure_8e48d(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  int32_t unaff_EBP;
  uint64_t *unaff_RSI;
  uint64_t in_XMM0_Qa;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar2;
  uint64_t local_buffer_28;
  uint64_t local_buffer_38;
  uint64_t local_buffer_40;
  uint64_t local_buffer_48;
  int iStack0000000000000050;
  uint64_t local_buffer_58;
  uint64_t local_buffer_60;
  uint64_t local_buffer_70;
  uint64_t local_buffer_78;
  uint64_t local_buffer_80;
  int32_t local_buffer_88;
  uVar2 = 1;
  local_buffer_48 = 0;
  iStack0000000000000050 = 0;
  local_buffer_58 = 0;
  local_buffer_88 = 0;
  local_buffer_38 = 0;
  local_buffer_40 = 0;
  local_buffer_70 = 0;
  local_buffer_78 = 0;
  local_buffer_28 = in_XMM0_Qa;
  local_buffer_60 = in_XMM0_Qa;
  iVar1 = DataStructure_8d680(param_1,0,&local_buffer_00000020,param_4,1);
  if (iVar1 != 0) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    local_buffer_80 = Function_a18dbc9a((int64_t)iStack0000000000000050 * 0xe,SYSTEM_DATA_MANAGER_B);
    *unaff_RSI = local_buffer_80;
    iVar1 = DataStructure_8d680(extraout_XMM0_Qa,unaff_EBP,&local_buffer_00000058,param_4,uVar2);
    if (iVar1 != 0) {
      return local_buffer_88;
    }
  }
  *unaff_RSI = 0;
  return 0;
}
// 函数: void DataStructure_8e537(void)
void DataStructure_8e537(void)
{
  return;
}
// 函数: void SystemCore_ProcessEvents(int64_t param_1,int param_2,int64_t param_3,float param_4,float param_5,
void SystemCore_ProcessEvents(int64_t param_1,int param_2,int64_t param_3,float param_4,float param_5,
                  float param_6,float param_7)
{
  float fVar1;
  float fVar2;
  if (((param_5 != param_7) && (fVar2 = *(float *)(param_3 + 0x1c), param_5 <= fVar2)) &&
     (fVar1 = *(float *)(param_3 + 0x18), fVar1 <= param_7)) {
    if (param_5 < fVar1) {
      param_4 = param_4 + ((fVar1 - param_5) * (param_6 - param_4)) / (param_7 - param_5);
      param_5 = fVar1;
    }
    if (fVar2 < param_7) {
      param_6 = param_6 + ((fVar2 - param_7) * (param_6 - param_4)) / (param_7 - param_5);
      param_7 = fVar2;
    }
    fVar2 = (float)param_2;
    if ((param_4 <= fVar2) && (param_6 <= fVar2)) {
      *(float *)(param_1 + (int64_t)param_2 * 4) =
           (param_7 - param_5) * *(float *)(param_3 + 0x14) +
           *(float *)(param_1 + (int64_t)param_2 * 4);
      return;
    }
    if ((param_4 < (float)(param_2 + 1)) || (param_6 < (float)(param_2 + 1))) {
      *(float *)(param_1 + (int64_t)param_2 * 4) =
           (1.0 - ((param_4 - fVar2) + (param_6 - fVar2)) * 0.5) *
           (param_7 - param_5) * *(float *)(param_3 + 0x14) +
           *(float *)(param_1 + (int64_t)param_2 * 4);
    }
  }
  return;
}
// 函数: void DataStructure_8e569(int64_t param_1,int param_2,int64_t param_3,float param_4)
void DataStructure_8e569(int64_t param_1,int param_2,int64_t param_3,float param_4)
{
  float fVar1;
  float fVar2;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float local_buffer_68;
  fVar2 = *(float *)(param_3 + 0x1c);
  if ((in_XMM5_Da <= fVar2) && (fVar1 = *(float *)(param_3 + 0x18), fVar1 <= in_XMM4_Da)) {
    if (in_XMM5_Da < fVar1) {
      param_4 = param_4 + ((fVar1 - in_XMM5_Da) * (local_buffer_68 - param_4)) /
                          (in_XMM4_Da - in_XMM5_Da);
      in_XMM5_Da = fVar1;
    }
    if (fVar2 < in_XMM4_Da) {
      local_buffer_68 =
           local_buffer_68 +
           ((fVar2 - in_XMM4_Da) * (local_buffer_68 - param_4)) / (in_XMM4_Da - in_XMM5_Da);
      in_XMM4_Da = fVar2;
    }
    fVar2 = (float)param_2;
    if ((param_4 <= fVar2) && (local_buffer_68 <= fVar2)) {
      *(float *)(param_1 + (int64_t)param_2 * 4) =
           (in_XMM4_Da - in_XMM5_Da) * *(float *)(param_3 + 0x14) +
           *(float *)(param_1 + (int64_t)param_2 * 4);
      return;
    }
    if ((param_4 < (float)(param_2 + 1)) || (local_buffer_68 < (float)(param_2 + 1))) {
      *(float *)(param_1 + (int64_t)param_2 * 4) =
           (1.0 - ((param_4 - fVar2) + (local_buffer_68 - fVar2)) * 0.5) *
           (in_XMM4_Da - in_XMM5_Da) * *(float *)(param_3 + 0x14) +
           *(float *)(param_1 + (int64_t)param_2 * 4);
    }
  }
  return;
}
// 函数: void DataStructure_8e62b(int64_t param_1,int param_2,int64_t param_3,float param_4)
void DataStructure_8e62b(int64_t param_1,int param_2,int64_t param_3,float param_4)
{
  float in_XMM0_Da;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  if ((param_4 < (float)(param_2 + 1)) || (unaff_XMM6_Da < (float)(param_2 + 1))) {
    *(float *)(param_1 + (int64_t)param_2 * 4) =
         (1.0 - ((param_4 - in_XMM0_Da) + (unaff_XMM6_Da - in_XMM0_Da)) * 0.5) *
         (in_XMM4_Da - in_XMM5_Da) * *(float *)(param_3 + 0x14) +
         *(float *)(param_1 + (int64_t)param_2 * 4);
  }
  return;
}
// 函数: void DataStructure_8e67f(void)
void DataStructure_8e67f(void)
{
  return;
}
// 函数: void DataStructure_8e684(void)
void DataStructure_8e684(void)
{
  return;
}
// 函数: void DataStructure_8e689(void)
void DataStructure_8e689(void)
{
  return;
}
// 函数: void DataStructure_8e690(int64_t param_1,int64_t param_2,int param_3,int64_t *param_4,float param_5)
void DataStructure_8e690(int64_t param_1,int64_t param_2,int param_3,int64_t *param_4,float param_5)
{
  int64_t lVar1;
  float *pfVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int iVar7;
  uint uVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint64_t uVar9;
  if (param_4 != (int64_t *)0x0) {
    fVar21 = param_5 + 1.0;
    do {
      fVar16 = *(float *)((int64_t)param_4 + 0xc);
      fVar11 = *(float *)(param_4 + 1);
      if (fVar16 == 0.0) {
        if (fVar11 < (float)param_3) {
          if (fVar11 < 0.0) {
            SystemCore_ProcessEvents(param_2 + -4,0,param_4,fVar11,param_5,fVar11,fVar21);
          }
          else {
            SystemCore_ProcessEvents(param_1,(int)fVar11,param_4,fVar11,param_5,fVar11,fVar21);
            SystemCore_ProcessEvents(param_2 + -4);
          }
        }
      }
      else {
        fVar17 = *(float *)(param_4 + 3);
        fVar19 = *(float *)(param_4 + 2);
        fVar20 = fVar16 + fVar11;
        fVar15 = fVar11;
        fVar18 = param_5;
        if (param_5 < fVar17) {
          fVar15 = (fVar17 - param_5) * fVar16 + fVar11;
          fVar18 = fVar17;
        }
        fVar17 = *(float *)((int64_t)param_4 + 0x1c);
        fVar14 = fVar20;
        fVar10 = fVar21;
        if (fVar17 < fVar21) {
          fVar14 = (fVar17 - param_5) * fVar16 + fVar11;
          fVar10 = fVar17;
        }
        if ((((fVar15 < 0.0) || (fVar14 < 0.0)) || ((float)param_3 <= fVar15)) ||
           ((float)param_3 <= fVar14)) {
          uVar5 = 0;
          if (0 < param_3) {
            do {
              uVar8 = (int)uVar5 + 1;
              uVar9 = (uint64_t)uVar8;
              fVar15 = (float)(int)uVar5;
              fVar17 = (float)(int)uVar8;
              fVar18 = (fVar15 - fVar11) * (1.0 / fVar16) + param_5;
              fVar19 = (fVar17 - fVar11) * (1.0 / fVar16) + param_5;
              if ((fVar15 <= fVar11) || (fVar20 <= fVar17)) {
                if ((fVar15 <= fVar20) || (fVar11 <= fVar17)) {
                  if (((fVar11 < fVar15) && (fVar15 < fVar20)) ||
                     ((fVar20 < fVar15 && (fVar15 < fVar11)))) {
                    SystemCore_ProcessEvents(param_1,uVar5,param_4,fVar11,param_5,fVar15,fVar18);
                  }
                  else if ((fVar17 <= fVar11) || (fVar20 <= fVar17)) {
                    if ((fVar20 < fVar17) && (fVar17 < fVar11)) {
                      SystemCore_ProcessEvents(param_1,uVar5,param_4,fVar11,param_5,fVar17,fVar19);
                    }
                  }
                  else {
                    SystemCore_ProcessEvents(param_1,uVar5,param_4,fVar11,param_5,fVar17,fVar19);
                  }
                }
                else {
                  SystemCore_ProcessEvents(param_1,uVar5,param_4,fVar11,param_5,fVar17,fVar19);
                  SystemCore_ProcessEvents();
                }
              }
              else {
                SystemCore_ProcessEvents(param_1,uVar5,param_4,fVar11,param_5,fVar15,fVar18);
                SystemCore_ProcessEvents();
              }
              SystemCore_ProcessEvents(param_1);
              uVar5 = uVar9 & 0xffffffff;
            } while ((int)uVar9 < param_3);
          }
        }
        else {
          iVar3 = (int)fVar15;
          if (iVar3 == (int)fVar14) {
            lVar1 = (int64_t)iVar3;
            *(float *)(param_1 + lVar1 * 4) =
                 (1.0 - ((fVar14 - (float)iVar3) + (fVar15 - (float)iVar3)) * 0.5) *
                 *(float *)((int64_t)param_4 + 0x14) * (fVar10 - fVar18) +
                 *(float *)(param_1 + lVar1 * 4);
            *(float *)(param_2 + lVar1 * 4) =
                 (fVar10 - fVar18) * *(float *)((int64_t)param_4 + 0x14) +
                 *(float *)(param_2 + lVar1 * 4);
          }
          else {
            fVar16 = fVar15;
            if (fVar14 < fVar15) {
              fVar19 = -fVar19;
              fVar16 = fVar10 - param_5;
              fVar10 = fVar21 - (fVar18 - param_5);
              fVar18 = fVar21 - fVar16;
              fVar16 = fVar14;
              fVar14 = fVar15;
              fVar11 = fVar20;
            }
            iVar7 = (int)fVar16;
            iVar3 = (int)fVar14;
            lVar1 = (int64_t)(iVar7 + 1);
            lVar6 = (int64_t)iVar3;
            fVar17 = *(float *)((int64_t)param_4 + 0x14);
            fVar15 = fVar17 * fVar19;
            fVar20 = ((float)(iVar7 + 1) - fVar11) * fVar19 + param_5;
            fVar11 = (fVar20 - fVar18) * fVar17;
            *(float *)(param_1 + (int64_t)iVar7 * 4) =
                 (0.5 - (fVar16 - (float)iVar7) * 0.5) * fVar11 +
                 *(float *)(param_1 + (int64_t)iVar7 * 4);
            if (lVar1 < lVar6) {
              if (3 < lVar6 - lVar1) {
                pfVar2 = (float *)(param_1 + 8 + lVar1 * 4);
                lVar4 = ((lVar6 - lVar1) - 4U >> 2) + 1;
                fVar16 = fVar15 * 0.5;
                lVar1 = lVar1 + lVar4 * 4;
                do {
                  pfVar2[-2] = fVar16 + fVar11 + pfVar2[-2];
                  fVar12 = fVar11 + fVar15 + fVar15;
                  fVar13 = fVar12 + fVar15;
                  pfVar2[-1] = fVar16 + fVar11 + fVar15 + pfVar2[-1];
                  fVar11 = fVar13 + fVar15;
                  *pfVar2 = fVar16 + fVar12 + *pfVar2;
                  pfVar2[1] = fVar16 + fVar13 + pfVar2[1];
                  pfVar2 = pfVar2 + 4;
                  lVar4 = lVar4 + -1;
                } while (lVar4 != 0);
              }
              if (lVar1 < lVar6) {
                do {
                  fVar16 = fVar15 * 0.5 + fVar11;
                  fVar11 = fVar11 + fVar15;
                  *(float *)(param_1 + lVar1 * 4) = fVar16 + *(float *)(param_1 + lVar1 * 4);
                  lVar1 = lVar1 + 1;
                } while (lVar1 < lVar6);
              }
            }
            *(float *)(param_1 + lVar6 * 4) =
                 (fVar10 - ((float)((iVar3 - iVar7) + -1) * fVar19 + fVar20)) *
                 (1.0 - (fVar14 - (float)iVar3) * 0.5) * fVar17 + fVar11 +
                 *(float *)(param_1 + lVar6 * 4);
            *(float *)(param_2 + lVar6 * 4) =
                 (fVar10 - fVar18) * fVar17 + *(float *)(param_2 + lVar6 * 4);
          }
        }
      }
      param_4 = (int64_t *)*param_4;
    } while (param_4 != (int64_t *)0x0);
  }
  return;
}