#include "TaleWorlds.Native.Split.h"

// 03_rendering_part224.c - 2 个函数

// 函数: void FUN_1803944c0(uint64_t param_1,longlong param_2,longlong param_3,float *param_4,
void FUN_1803944c0(uint64_t param_1,longlong param_2,longlong param_3,float *param_4,
                  float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  longlong lVar6;
  char cVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong in_stack_00000048;
  uint64_t in_stack_00000050;
  longlong *in_stack_00000058;
  int8_t auStack_198 [112];
  float fStack_128;
  float fStack_124;
  uint64_t uStack_120;
  ulonglong uStack_118;
  longlong lStack_110;
  ulonglong uStack_108;
  float *pfStack_100;
  uint64_t uStack_f8;
  int8_t auStack_e8 [80];
  ulonglong uStack_98;
  
  uStack_98 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  uVar11 = 0;
  pfStack_100 = param_5;
  uStack_f8 = in_stack_00000050;
  if (in_stack_00000058 != (longlong *)0x0) {
    *in_stack_00000058 = 0;
  }
  if (param_2 == 0) goto LAB_1803946d7;
  fVar1 = *param_5;
  fVar2 = param_5[1];
  fVar3 = *param_4;
  fVar4 = param_4[1];
  fStack_128 = fVar1 + fVar3;
  fStack_124 = fVar2 + fVar4;
  cVar7 = FUN_18038d0a0(param_2,&fStack_128);
  if (param_2 != param_3) {
    if (param_3 == 0) {
      if (cVar7 == '\0') {
LAB_18039466d:
        if (1e-05 <= fVar2 * fVar2 + fVar1 * fVar1) {
          if (in_stack_00000048 != 0) {
            func_0x000180396690(in_stack_00000048);
          }
                    // WARNING: Subroutine does not return
          memset(auStack_e8,0,0x50);
        }
        bVar5 = *(byte *)(param_2 + 0xa8);
        uVar9 = uVar11 & 0xffffffff;
        if (bVar5 != 0) {
          plVar10 = (longlong *)(param_2 + 0xb0);
          do {
            lVar6 = *plVar10;
            if ((lVar6 != 0) &&
               (fStack_128 = fVar1 + fVar3, fStack_124 = fVar2 + fVar4,
               cVar7 = FUN_18038d0a0(lVar6,&fStack_128), cVar7 != '\0')) {
              if (in_stack_00000048 != 0) {
                func_0x000180396690(in_stack_00000048);
                fStack_128 = *param_4 + *pfStack_100;
                fStack_124 = param_4[1] + pfStack_100[1];
                uStack_120 = CONCAT44(fStack_124,fStack_128);
                uStack_118 = *(ulonglong *)(param_2 + 0x60 + (longlong)(int)uVar9 * 8);
                uStack_108 = (ulonglong)(*(ushort *)(lVar6 + 0x124) & 0x7fff) | 0x8000;
                lStack_110 = lVar6;
                FUN_1803966c0(in_stack_00000048,&uStack_120);
              }
              if (in_stack_00000058 != (longlong *)0x0) {
                *in_stack_00000058 = lVar6;
              }
              break;
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
            uVar11 = uVar11 + 1;
            plVar10 = plVar10 + 1;
          } while ((longlong)uVar11 < (longlong)(ulonglong)bVar5);
        }
        goto LAB_1803946d7;
      }
    }
    else if ((cVar7 == '\0') || (1e-05 <= fVar2 * fVar2 + fVar1 * fVar1)) goto LAB_18039466d;
  }
  if (in_stack_00000048 != 0) {
    if (*(char *)(in_stack_00000048 + 0x1024) == (char)uVar11) {
      *(uint64_t *)(in_stack_00000048 + 0x1008) = *(uint64_t *)(in_stack_00000048 + 0x1000);
      *(int8_t *)(in_stack_00000048 + 0x1024) = 1;
    }
    *(int *)(in_stack_00000048 + 0x1020) = (int)uVar11;
    fStack_128 = *param_4 + *param_5;
    fStack_124 = param_4[1] + param_5[1];
    uStack_120 = CONCAT44(fStack_124,fStack_128);
    uVar8 = *(ushort *)(param_2 + 0x124) & 0x7fff;
    if ((char)(uVar11 >> 8) < '\0') {
      uVar8 = uVar8 | 0x8000;
    }
    uStack_108._2_6_ = (undefined6)(uVar11 >> 0x10);
    uStack_108 = CONCAT62(uStack_108._2_6_,uVar8) | 0x8000;
    uStack_118 = uVar11;
    lStack_110 = param_2;
    FUN_1803966c0(in_stack_00000048,&uStack_120);
  }
  if (in_stack_00000058 != (longlong *)0x0) {
    *in_stack_00000058 = param_2;
  }
LAB_1803946d7:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_98 ^ (ulonglong)auStack_198);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180394850(longlong param_1,longlong param_2,longlong param_3,float *param_4,float *param_5,
void FUN_180394850(longlong param_1,longlong param_2,longlong param_3,float *param_4,float *param_5,
                  char param_6,float param_7,char param_8,longlong param_9,uint64_t *param_10,
                  int param_11,char param_12,uint64_t param_13,longlong *param_14)

{
  int32_t *puVar1;
  byte bVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint64_t *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint64_t *puVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong *plVar19;
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
  int8_t auStack_298 [32];
  float *pfStack_278;
  char cStack_270;
  float fStack_268;
  char cStack_260;
  longlong lStack_258;
  uint64_t *puStack_250;
  int iStack_248;
  char cStack_240;
  uint64_t uStack_238;
  longlong *plStack_230;
  char cStack_228;
  int iStack_224;
  uint uStack_220;
  longlong *plStack_218;
  ulonglong uStack_210;
  ulonglong uStack_208;
  uint64_t *puStack_200;
  int iStack_1f8;
  int iStack_1f4;
  longlong *plStack_1f0;
  longlong lStack_1e8;
  uint64_t uStack_1e0;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  float *pfStack_1c8;
  float *pfStack_1c0;
  ulonglong uStack_1b8;
  int32_t uStack_1b0;
  longlong lStack_1a8;
  longlong *plStack_1a0;
  uint64_t *puStack_198;
  uint64_t uStack_190;
  float fStack_188;
  float fStack_184;
  longlong lStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  longlong lStack_168;
  ushort uStack_160;
  int32_t uStack_15e;
  int16_t uStack_15a;
  longlong lStack_158;
  float *pfStack_150;
  uint64_t auStack_148 [4];
  uint64_t uStack_128;
  uint64_t uStack_120;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  int32_t uStack_104;
  int32_t uStack_100;
  int32_t uStack_fc;
  ulonglong uStack_f8;
  
  uStack_f8 = _DAT_180bf00a8 ^ (ulonglong)auStack_298;
  lStack_158 = (longlong)param_11;
  uStack_190 = param_13;
  pfStack_1c8 = param_5;
  puStack_198 = param_10;
  iStack_1f4 = param_11;
  plStack_1a0 = param_14;
  if (param_14 != (longlong *)0x0) {
    *param_14 = param_2;
  }
  if ((param_12 == '\0') && (param_2 == param_3)) {
    cStack_228 = '\x01';
  }
  else {
    cStack_228 = '\0';
  }
  uVar14 = 0;
  uStack_220 = 0;
  iStack_1f8 = 0;
  if (param_9 == 0) {
    uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
  }
  else if (*(char *)(param_9 + 0x1024) == '\0') {
    uStack_1b8 = *(longlong *)(param_9 + 0x1008) - *(longlong *)(param_9 + 0x1000) >> 5;
  }
  else {
    uStack_1b8 = (ulonglong)*(uint *)(param_9 + 0x1020);
  }
  uStack_1b0 = *(int32_t *)(*(longlong *)(param_1 + 0x528) + 0x60300);
  lStack_1e8 = param_3;
  pfStack_1c0 = param_4;
  lStack_180 = param_1;
  iVar8 = func_0x00018038b420(param_2);
  puStack_200 = (uint64_t *)(param_2 + 0x60);
  fVar21 = 1.0;
  plStack_1f0 = (longlong *)(param_2 + 0xb0);
  uStack_210 = (ulonglong)iVar8;
  plStack_218 = (longlong *)(param_2 + 0x80);
  uStack_208 = 0;
  lStack_1a8 = 0;
  iStack_224 = 1;
  puVar15 = puStack_200;
  uVar16 = uStack_210;
  uVar18 = uVar14;
  plVar19 = plStack_1f0;
  cVar7 = cStack_228;
  iVar8 = 1;
LAB_180394a30:
  do {
    do {
      bVar2 = *(byte *)(param_2 + 0xa8);
      plVar13 = (longlong *)0x0;
      bVar5 = false;
      iVar17 = (int)uVar14;
      if ((int)(uint)bVar2 <= iVar17) {
        if ((ulonglong)(longlong)iStack_1f8 <
            (ulonglong)(*(longlong *)(param_2 + 0x100) - *(longlong *)(param_2 + 0xf8) >> 3)) {
          lVar9 = *(longlong *)(*(longlong *)(param_2 + 0xf8) + lStack_1a8);
          if ((*(byte *)(param_2 + 0x139) & 4) == 0) {
            plVar12 = *(longlong **)(lVar9 + 0x118);
          }
          else {
            plVar12 = *(longlong **)(param_2 + 0x118);
            if (((plVar12 == (longlong *)0x0) || ((*(byte *)(lVar9 + 0x139) & 4) != 0)) &&
               (lVar10 = 0, plVar12 = plVar13, iVar8 = iStack_224, (ulonglong)bVar2 != 0)) {
              puVar11 = (uint64_t *)(param_2 + 0x60);
              do {
                plVar12 = (longlong *)*puVar11;
                if (((char)plVar12[4] == '\x02') && ((plVar12[2] == lVar9 || (plVar12[3] == lVar9)))
                   ) break;
                lVar10 = lVar10 + 1;
                puVar11 = puVar11 + 1;
                plVar12 = plVar13;
              } while (lVar10 < (longlong)(ulonglong)bVar2);
            }
          }
          uStack_1e0 = (float *)plVar12[1];
          iStack_1f8 = iStack_1f8 + 1;
          lStack_1a8 = lStack_1a8 + 8;
          bVar5 = true;
          plVar13 = plVar12;
          goto LAB_180394b77;
        }
        goto LAB_1803951d6;
      }
      if (uVar18 == uVar16) {
        uStack_220 = iVar17 + 1;
        uVar14 = (ulonglong)uStack_220;
        iStack_224 = iVar8 + 1;
        uStack_208 = uVar18 + 1;
        plStack_1f0 = plVar19 + 1;
        puStack_200 = puVar15 + 1;
        plStack_218 = plStack_218 + 1;
        puVar15 = puStack_200;
        uVar18 = uStack_208;
        plVar19 = plStack_1f0;
        iVar8 = iStack_224;
        goto LAB_180394a30;
      }
      lVar9 = *plVar19;
      if ((lVar9 != 0) || (cVar7 != '\0')) {
        plVar13 = (longlong *)*puVar15;
      }
      uStack_220 = iVar17 + 1;
      uVar14 = (ulonglong)uStack_220;
      uVar18 = uVar18 + 1;
      plVar19 = plVar19 + 1;
      puVar15 = puVar15 + 1;
      iStack_224 = iStack_224 + 1;
      uStack_1e0 = *(float **)(param_2 + 0x80 + (longlong)(iVar8 % (int)(uint)bVar2) * 8);
      plVar12 = plStack_218;
      plStack_218 = plStack_218 + 1;
      uStack_208 = uVar18;
      puStack_200 = puVar15;
      plStack_1f0 = plVar19;
      iVar8 = iStack_224;
LAB_180394b77:
      pfStack_150 = (float *)*plVar12;
      uVar16 = uStack_210;
      cVar7 = cStack_228;
    } while ((lVar9 == 0) && (cStack_228 == '\0'));
    lVar9 = 0;
    do {
      if ((longlong *)param_10[lVar9] == plVar13) goto LAB_180394a30;
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
  uStack_1d8._0_4_ = (float)uVar3;
  uStack_1d8._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  uStack_1d0._0_4_ = (float)uVar4;
  uStack_1d0._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
  fVar24 = (float)uStack_1d0;
  fVar20 = uStack_1d0._4_4_;
  fVar22 = (float)uStack_1d8;
  fVar25 = uStack_1d8._4_4_;
  if ((param_6 == '\0') &&
     ((cVar7 = *(char *)(*plVar13 + 0xc), cVar7 != '\0' ||
      (*(char *)((longlong)puVar15 + 0xc) != '\0')))) {
    fVar28 = (float)uStack_1d8 - (float)uStack_1d0;
    fVar27 = uStack_1d8._4_4_ - uStack_1d0._4_4_;
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
      uStack_1d8._0_4_ = (float)uStack_1d8 - fVar29 * fVar28 * fVar30;
      uStack_1d8._4_4_ = uStack_1d8._4_4_ - fVar29 * fVar27 * fVar30;
    }
    fVar21 = 1.0;
    fVar22 = (float)uStack_1d8;
    fVar25 = uStack_1d8._4_4_;
    if (*(char *)((longlong)puVar15 + 0xc) != '\0') {
      fVar24 = (float)uStack_1d0 + fVar30 * fVar29 * fVar28;
      fVar20 = uStack_1d0._4_4_ + fVar29 * fVar27 * fVar30;
    }
  }
  uStack_1d8 = uVar3;
  uStack_1d0 = uVar4;
  cVar6 = FUN_18038acd0(lVar9,uStack_190,plVar13,uStack_1b0);
  uVar14 = (ulonglong)uStack_220;
  puVar15 = puStack_200;
  uVar16 = uStack_210;
  uVar18 = uStack_208;
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
  auStack_148[0] = *param_10;
  auStack_148[1] = param_10[1];
  auStack_148[2] = param_10[2];
  auStack_148[3] = param_10[3];
  fStack_188 = *pfStack_1c0 + fVar28;
  uStack_128 = param_10[4];
  uStack_120 = param_10[5];
  fStack_184 = pfStack_1c0[1] + fVar27;
  uStack_118 = *(int32_t *)(param_10 + 6);
  uStack_114 = *(int32_t *)((longlong)param_10 + 0x34);
  uStack_110 = *(int32_t *)(param_10 + 7);
  uStack_10c = *(int32_t *)((longlong)param_10 + 0x3c);
  uStack_108 = *(int32_t *)(param_10 + 8);
  uStack_104 = *(int32_t *)((longlong)param_10 + 0x44);
  uStack_100 = *(int32_t *)(param_10 + 9);
  uStack_fc = *(int32_t *)((longlong)param_10 + 0x4c);
  auStack_148[lStack_158] = plVar13;
  cVar7 = FUN_18038d0a0(lVar9,&fStack_188);
  if (((cVar7 == '\0') || (lStack_1e8 != 0)) && (lVar9 != lStack_1e8)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  if (((param_8 != '\0') && (cVar6 == '\0')) && (0.0 < *(float *)(lVar9 + 0x120))) {
LAB_180394a10:
    fVar21 = 1.0;
    puVar15 = puStack_200;
    uVar16 = uStack_210;
    param_10 = puStack_198;
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
    uVar14 = (ulonglong)uStack_220;
    uVar18 = uStack_208;
    if (0.0001 < (pfStack_150[1] - uStack_1e0[1]) * fVar28 + (*uStack_1e0 - *pfStack_150) * fVar27)
    goto LAB_180394a10;
  }
  if (plStack_1a0 != (longlong *)0x0) {
    *plStack_1a0 = lVar9;
  }
  if (param_9 != 0) {
    uStack_15e = 0;
    uStack_15a = 0;
    uStack_160 = *(ushort *)(lVar9 + 0x124) | 0x8000;
    uStack_178 = 0;
    uStack_170 = plVar13;
    lStack_168 = lVar9;
    if (*(char *)(param_9 + 0x1024) != '\0') {
      if (*(int *)(param_9 + 0x1020) + 1 < 0x81) {
        uStack_170._0_4_ = SUB84(plVar13,0);
        uStack_170._4_4_ = (int32_t)((ulonglong)plVar13 >> 0x20);
        lVar10 = (longlong)*(int *)(param_9 + 0x1020) * 0x20;
        puVar1 = (int32_t *)(lVar10 + param_9);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = (int32_t)uStack_170;
        puVar1[3] = uStack_170._4_4_;
        plVar19 = (longlong *)(lVar10 + 0x10 + param_9);
        *plVar19 = lVar9;
        plVar19[1] = (ulonglong)uStack_160;
        *(int *)(param_9 + 0x1020) = *(int *)(param_9 + 0x1020) + 1;
        goto LAB_180394fe7;
      }
      FUN_180396b10(param_9);
    }
    FUN_180396dd0(param_9 + 0x1000,&uStack_178);
  }
LAB_180394fe7:
  if (cVar6 != '\0') {
    if (param_9 != 0) {
      uStack_1e0 = (float *)CONCAT44(pfStack_1c8[1] + pfStack_1c0[1],*pfStack_1c8 + *pfStack_1c0);
      if (*(char *)(param_9 + 0x1024) == '\0') {
        iVar8 = (int)(*(longlong *)(param_9 + 0x1008) - *(longlong *)(param_9 + 0x1000) >> 5);
      }
      else {
        iVar8 = *(int *)(param_9 + 0x1020);
      }
      lVar9 = param_9;
      if (*(char *)(param_9 + 0x1024) == '\0') {
        lVar9 = *(longlong *)(param_9 + 0x1000);
      }
      *(float **)(lVar9 + -0x20 + (longlong)iVar8 * 0x20) = uStack_1e0;
    }
    if ((cStack_228 == '\0') && (cVar7 == '\0')) {
      iStack_248 = (iStack_1f4 + 1) % 10;
      uStack_238 = uStack_190;
      puStack_250 = auStack_148;
      lStack_258 = param_9;
      cStack_260 = param_8;
      fStack_268 = param_7;
      cStack_270 = param_6;
      pfStack_278 = pfStack_1c8;
      cStack_240 = cVar7;
      plStack_230 = plStack_1a0;
      cVar7 = FUN_180394850(lStack_180,lStack_1e8,lStack_1e8,pfStack_1c0);
      if (cVar7 == '\0') {
LAB_1803951d6:
        if (param_9 != 0) {
          FUN_1803967f0(param_9,uStack_1b8 & 0xffffffff);
        }
      }
    }
LAB_1803951e8:
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_f8 ^ (ulonglong)auStack_298);
  }
  iStack_248 = (iStack_1f4 + 1) % 10;
  uStack_238 = uStack_190;
  puStack_250 = auStack_148;
  lStack_258 = param_9;
  cStack_260 = param_8;
  fStack_268 = param_7;
  cStack_270 = param_6;
  pfStack_278 = pfStack_1c8;
  cStack_240 = cVar6;
  plStack_230 = plStack_1a0;
  cVar7 = FUN_180394850(lStack_180,lVar9,lStack_1e8,pfStack_1c0);
  if (cVar7 != '\0') goto LAB_1803951e8;
  fVar21 = 1.0;
  uVar14 = (ulonglong)uStack_220;
  puVar15 = puStack_200;
  uVar16 = uStack_210;
  uVar18 = uStack_208;
  param_10 = puStack_198;
  plVar19 = plStack_1f0;
  cVar7 = cStack_228;
  iVar8 = iStack_224;
  goto LAB_180394a30;
}





