#include "TaleWorlds.Native.Split.h"

// 99_part_11_part028.c - 3 个函数

// 函数: void FUN_1806f88a0(int *param_1,float *param_2,int param_3,byte *param_4,int param_5,int param_6,
void FUN_1806f88a0(int *param_1,float *param_2,int param_3,byte *param_4,int param_5,int param_6,
                  uint64_t param_7,int32_t param_8,int32_t param_9,int32_t param_10,
                  int32_t param_11,uint64_t param_12,int32_t param_13)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  byte bVar19;
  float fVar20;
  int8_t auVar21 [16];
  float fVar22;
  float fVar23;
  ulonglong in_stack_fffffffffffffd28;
  uint uStack_298;
  int iStack_294;
  int iStack_290;
  int iStack_28c;
  longlong lStack_288;
  uint uStack_280;
  int iStack_27c;
  int iStack_278;
  int iStack_274;
  int iStack_270;
  byte *pbStack_260;
  int iStack_258;
  int iStack_248;
  int32_t uStack_240;
  float *pfStack_238;
  int iStack_230;
  int32_t uStack_22c;
  int32_t uStack_228;
  longlong lStack_220;
  uint64_t uStack_210;
  int8_t auStack_208 [56];
  byte *pbStack_1d0;
  int aiStack_1c8 [5];
  float fStack_1b4;
  int iStack_1ac;
  float fStack_1a8;
  int8_t auStack_188 [112];
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int aiStack_100 [2];
  ulonglong uStack_f8;
  
  uStack_f8 = _DAT_180bf00a8 ^ (ulonglong)&uStack_298;
  uVar13 = 0;
  uVar12 = 0;
  iStack_28c = param_5;
  if (0x4fc < param_5) {
    iStack_28c = 0x4fc;
  }
  uStack_240 = 0;
  iStack_294 = 0;
  uStack_280 = 0;
  uStack_228 = 0;
  uStack_22c = 0;
  uStack_298 = 0xffffffff;
  iStack_258 = -1;
  iStack_248 = 0;
  param_1[0x119d] = 0;
  iStack_270 = param_3;
  pbStack_260 = param_4;
  pfStack_238 = param_2;
  if (((param_3 < 1) || (iStack_28c < 1)) || ((iStack_28c == 1 && (param_1[0x24] == param_3 * 10))))
  goto LAB_1806fad6b;
  lStack_220 = (longlong)param_1[1] + (longlong)param_1;
  lStack_288 = (longlong)*param_1 + (longlong)param_1;
  if (param_1[0x1b] == 0x803) {
    iStack_27c = 0;
  }
  else {
    iStack_27c = param_1[0x1d];
  }
  if (param_1[0x2a] <= param_6) {
    param_6 = param_1[0x2a];
  }
  FUN_1807030d0(lStack_288,0x271f,&uStack_210);
  aiStack_1c8[0] = 0;
  if ((param_1[0xb] < 7) || (param_1[0x24] < 16000)) {
LAB_1806f8b76:
    param_1[0x23] = -1;
  }
  else {
    fVar20 = 0.0;
    fVar23 = 0.0;
    uVar7 = (ulonglong)(uint)(iStack_270 * param_1[0x1c]);
    pfVar5 = pfStack_238;
    if (0 < iStack_270 * param_1[0x1c]) {
      do {
        if (fVar20 <= *pfVar5) {
          fVar20 = *pfVar5;
        }
        if (*pfVar5 <= fVar23) {
          fVar23 = *pfVar5;
        }
        uVar7 = uVar7 - 1;
        pfVar5 = pfVar5 + 1;
      } while (uVar7 != 0);
    }
    fVar22 = -fVar23;
    if (-fVar23 <= fVar20) {
      fVar22 = fVar20;
    }
    if (1.0 / (float)(1 << ((byte)param_6 & 0x1f)) < fVar22) {
      uStack_298 = param_1[0x844];
      iStack_258 = param_1[0x845];
      in_stack_fffffffffffffd28 = CONCAT44((int)(in_stack_fffffffffffffd28 >> 0x20),iStack_270);
      FUN_180707950(param_1 + 0x2f,uStack_210,param_7,param_8,in_stack_fffffffffffffd28,param_9,
                    param_10,param_11,param_1[0x24],param_6,param_12,aiStack_1c8);
      pfVar5 = pfStack_238;
      iVar9 = iStack_270;
      if (0.1 < fStack_1a8) {
        iVar3 = param_1[0x1c] * iStack_270;
        fVar20 = (float)FUN_1807070a0(pfStack_238,pfStack_238,iVar3);
        fVar23 = (float)param_1[0x119b] * 0.999;
        if (fVar23 <= fVar20 / (float)iVar3) {
          iVar3 = param_1[0x1c];
          fVar23 = (float)FUN_1807070a0(pfVar5,pfVar5,iVar9 * iVar3);
          fVar23 = fVar23 / (float)(iVar9 * iVar3);
        }
        param_1[0x119b] = (int)fVar23;
      }
      goto LAB_1806f8b76;
    }
    iStack_248 = 1;
  }
  iVar9 = aiStack_1c8[0];
  param_1[0x1199] = 0;
  if (aiStack_1c8[0] != 0) {
    if (param_1[0x1f] == -1000) {
      fVar20 = (1.0 - fStack_1b4) * 100.0 + 0.5;
      auVar21._0_8_ = (double)fVar20;
      lVar8 = (longlong)fVar20;
      if ((lVar8 != -0x8000000000000000) && ((double)lVar8 != auVar21._0_8_)) {
        auVar21._8_8_ = auVar21._0_8_;
        uVar2 = movmskpd(0,auVar21);
        auVar21._0_8_ = (double)(longlong)(lVar8 - (ulonglong)(uVar2 & 1));
      }
      param_1[0x23] = (int)auVar21._0_8_;
    }
    iVar3 = 0x44f;
    if (iStack_1ac < 0xd) {
      param_1[0x1199] = 0x44d;
    }
    else if (iStack_1ac < 0xf) {
      param_1[0x1199] = 0x44e;
    }
    else {
      if (0x10 < iStack_1ac) {
        iVar3 = (0x12 < iStack_1ac) + 0x450;
      }
      param_1[0x1199] = iVar3;
    }
  }
  if ((param_1[0x1c] == 2) && (param_1[0x1e] != 1)) {
    fVar20 = (float)FUN_1806f71d0(pfStack_238,iStack_270,param_1[0x24],param_1 + 0xdd4);
  }
  else {
    fVar20 = 0.0;
  }
  iVar10 = iStack_28c;
  iVar14 = iStack_270;
  iVar3 = func_0x0001806fc260(param_1,iStack_270,iStack_28c);
  param_1[0x28] = iVar3;
  uVar7 = (longlong)param_1[0x24] / (longlong)iVar14;
  iStack_278 = (int)uVar7;
  if (param_1[0x25] == 0) {
    iVar14 = (param_1[0x24] * 0xc) / iVar14;
    iVar3 = (iVar14 / 2 + ((int)((iVar3 * 0xc >> 0x1f & 7U) + iVar3 * 0xc) >> 3)) / iVar14;
    if (iVar10 <= iVar3) {
      iVar3 = iVar10;
    }
    iVar10 = iVar3;
    iVar3 = (iVar10 * iVar14 * 8) / 0xc;
    param_1[0x28] = iVar3;
    iStack_28c = iVar10;
    if (iVar10 < 1) {
      iVar10 = 1;
      iStack_28c = iVar10;
    }
  }
  uVar7 = uVar7 & 0xffffffff;
  if (((iVar10 < 3) || (iVar3 < iStack_278 * 0x18)) ||
     ((iStack_278 < 0x32 && ((iStack_278 * iVar10 < 300 || (iVar3 < 0x960)))))) {
    iVar9 = param_1[0xdca];
    iVar3 = param_1[0xdce];
    if (param_1[0xdce] == 0) {
      iVar3 = 0x44d;
    }
    bVar19 = 0;
    if (iVar9 == 0) {
      iVar9 = 1000;
    }
    if (100 < iStack_278) {
      iVar9 = 0x3ea;
    }
    if (iStack_278 == 0x19) {
      bVar19 = 0;
      if (iVar9 != 1000) {
        uVar7 = 0x32;
        uVar12 = 1;
        bVar1 = 0;
        goto LAB_1806fac7d;
      }
LAB_1806fac82:
      if (0x44f < iVar3) {
        iVar3 = 0x44f;
      }
    }
    else {
      uVar12 = uVar13;
      bVar1 = 0;
      if (iStack_278 < 0x11) {
        if ((param_5 == 1) || ((iVar9 == 1000 && (iStack_278 != 10)))) {
          iVar9 = 1000;
          uVar12 = (uint)(iStack_278 < 0xd);
          uVar13 = 0x10;
          if (iStack_278 == 0xc) {
            uVar13 = 0x19;
          }
          uVar7 = (ulonglong)uVar13;
          goto LAB_1806fac82;
        }
        uVar7 = 0x32;
        uVar12 = 3;
        bVar1 = (byte)(0x32 / (longlong)iStack_278);
      }
LAB_1806fac7d:
      bVar19 = bVar1;
      if (iVar9 == 1000) goto LAB_1806fac82;
      if (iVar9 == 0x3ea) {
        if (iVar3 == 0x44e) {
          iVar3 = 0x44d;
        }
      }
      else if ((iVar9 == 0x3e9) && (iVar3 < 0x451)) {
        iVar3 = 0x450;
      }
    }
    bVar1 = func_0x0001806f86b0(iVar9,uVar7,iVar3,param_1[0xdc2]);
    iVar3 = (1 < uVar12) + 1;
    *pbStack_260 = bVar1 | (byte)uVar12;
    iVar9 = iVar3;
    if (iVar3 < iStack_28c) {
      iVar9 = iStack_28c;
    }
    if (uVar12 == 3) {
      pbStack_260[1] = bVar19;
    }
    if (param_1[0x25] == 0) {
      FUN_180706b30(pbStack_260,iVar3,iVar9);
    }
    goto LAB_1806fad6b;
  }
  iVar14 = param_1[0x1c];
  iStack_230 = iStack_278 * iVar10 * 8;
  in_stack_fffffffffffffd28 = in_stack_fffffffffffffd28 & 0xffffffff00000000;
  iVar3 = func_0x0001806f6f50(iVar3,iVar14,uVar7,param_1[0x25],in_stack_fffffffffffffd28,
                              param_1[0xb],param_1[10]);
  if (param_1[0x1f] == 0xbb9) {
    uVar2 = 0x7f;
  }
  else {
    uVar2 = uVar12;
    if (param_1[0x1f] != 0xbba) {
      if (param_1[0x23] < 0) {
        uVar2 = 0x30;
        if (param_1[0x1b] == 0x800) {
          uVar2 = 0x73;
        }
      }
      else {
        uVar11 = param_1[0x23] * 0x147 >> 8;
        uVar2 = uVar11;
        if ((param_1[0x1b] == 0x801) && (uVar2 = 0x73, (int)uVar11 < 0x73)) {
          uVar2 = uVar11;
        }
      }
    }
  }
  iVar10 = param_1[0x1e];
  if (((iVar10 == -1000) || (iVar14 != 2)) && (iVar10 = iVar14, iVar14 == 2)) {
    iVar10 = 23000;
    if (param_1[0xdc2] != 2) {
      iVar10 = 25000;
    }
    iVar10 = (iVar10 < iVar3) + 1;
  }
  param_1[0xdc2] = iVar10;
  iVar3 = param_1[0x24];
  iVar14 = param_1[10];
  iVar4 = func_0x0001806f6f50(param_1[0x28],iVar10,
                              (longlong)iVar3 / (longlong)iStack_270 & 0xffffffff,param_1[0x25],
                              in_stack_fffffffffffffd28 & 0xffffffff00000000,param_1[0xb],iVar14);
  iVar10 = iStack_270;
  iVar18 = 0x3ea;
  if (param_1[0x1b] == 0x803) {
LAB_1806f8fcd:
    param_1[0xdca] = 0x3ea;
    iVar15 = iVar18;
  }
  else {
    iVar15 = param_1[0x22];
    if (iVar15 == -1000) {
      iVar6 = 24000;
      if (param_1[0x1b] != 0x800) {
        iVar6 = 16000;
      }
      iVar6 = ((int)(((int)((1.0 - fVar20) * 64000.0 + fVar20 * 36000.0) + -16000) * uVar2 * uVar2)
              >> 0xe) + iVar6;
      if (param_1[0xdcb] == 0x3ea) {
        iVar6 = iVar6 + -4000;
      }
      else if (0 < param_1[0xdcb]) {
        iVar6 = iVar6 + 4000;
      }
      iVar15 = 1000;
      if (iVar6 <= iVar4) {
        iVar15 = 0x3ea;
      }
      param_1[0xdca] = iVar15;
      if ((param_1[0xc] != 0) && ((int)(0x80 - uVar2) >> 4 < iVar14)) {
        param_1[0xdca] = 1000;
        iVar15 = 1000;
      }
      if (((param_1[0x2e] == 0) || (iVar9 != 0)) || (iVar9 = 1, iStack_248 != 0)) {
        iVar9 = 0;
      }
      param_1[0xe] = iVar9;
      if ((iVar9 != 0) && (100 < (int)uVar2)) {
        param_1[0xdca] = 1000;
        iVar15 = 1000;
      }
      iVar9 = 6000;
      if (0x32 < iStack_278) {
        iVar9 = 9000;
      }
      if (iStack_28c < (iVar9 * iStack_270) / (iVar3 * 8)) {
        param_1[0xdca] = 0x3ea;
        iVar15 = iVar18;
      }
    }
    else {
      param_1[0xdca] = iVar15;
    }
    if ((iVar15 != 0x3ea) && (iStack_270 < iVar3 / 100)) goto LAB_1806f8fcd;
  }
  if (param_1[0x2c] != 0) {
    param_1[0xdca] = 0x3ea;
    iVar15 = iVar18;
  }
  iVar9 = param_1[0xdcb];
  iVar14 = iVar15;
  if (0 < iVar9) {
    if (iVar15 == 0x3ea) {
LAB_1806f9006:
      iVar14 = 0x3ea;
      if (iVar9 == 0x3ea) goto LAB_1806f9066;
    }
    else if (iVar9 != 0x3ea) {
      if (iVar15 != 0x3ea) goto LAB_1806f9066;
      goto LAB_1806f9006;
    }
    uVar13 = 1;
    uStack_280 = (uint)(iVar15 != 0x3ea);
    iVar14 = iVar15;
    if (iVar15 == 0x3ea) {
      if (iStack_270 < iVar3 / 100) {
        iVar14 = 0x3ea;
        uVar13 = uVar12;
      }
      else {
        param_1[0xdca] = iVar9;
        uStack_228 = 1;
        iVar14 = iVar9;
        uVar13 = 1;
      }
    }
  }
LAB_1806f9066:
  uVar11 = uVar12;
  if ((((param_1[0xdc2] == 1) && (param_1[0xdcc] == 2)) && (param_1[0x11] == 0)) &&
     ((iVar14 != 0x3ea && (iVar9 != 0x3ea)))) {
    param_1[0xdc2] = 2;
    uVar11 = 1;
  }
  param_1[0x11] = uVar11;
  iVar9 = param_1[0xdca];
  iStack_274 = func_0x0001806f6f50(param_1[0x28],param_1[0xdc2],
                                   (longlong)param_1[0x24] / (longlong)iStack_270 & 0xffffffff,
                                   param_1[0x25],iVar9,param_1[0xb],param_1[10]);
  if (iVar9 == 0x3ea) {
LAB_1806f9135:
    iVar9 = 0x451;
    if ((param_1[0x1c] == 2) && (param_1[0x1e] != 1)) {
      piVar16 = (int *)&UNK_18094ecb0;
      piVar17 = (int *)&UNK_18094ecd0;
    }
    else {
      piVar16 = (int *)&UNK_18094ec70;
      piVar17 = (int *)&UNK_18094ec90;
    }
    iStack_118 = ((int)((*piVar16 - *piVar17) * uVar2 * uVar2) >> 0xe) + *piVar17;
    iStack_114 = ((int)((piVar16[1] - piVar17[1]) * uVar2 * uVar2) >> 0xe) + piVar17[1];
    iStack_110 = ((int)((piVar16[2] - piVar17[2]) * uVar2 * uVar2) >> 0xe) + piVar17[2];
    iStack_10c = ((int)((piVar16[3] - piVar17[3]) * uVar2 * uVar2) >> 0xe) + piVar17[3];
    iStack_108 = ((int)((piVar16[4] - piVar17[4]) * uVar2 * uVar2) >> 0xe) + piVar17[4];
    iStack_104 = ((int)((piVar16[5] - piVar17[5]) * uVar2 * uVar2) >> 0xe) + piVar17[5];
    aiStack_100[0] = ((int)((piVar16[6] - piVar17[6]) * uVar2 * uVar2) >> 0xe) + piVar17[6];
    lVar8 = 0x451;
    aiStack_100[1] = ((int)((piVar16[7] - piVar17[7]) * uVar2 * uVar2) >> 0xe) + piVar17[7];
    piVar16 = aiStack_100 + 1;
    do {
      iVar3 = piVar16[-1];
      if (param_1[0xdd1] == 0) {
        if (param_1[0xdcf] < iVar9) {
          iVar3 = iVar3 + *piVar16;
        }
        else {
          iVar3 = iVar3 - *piVar16;
        }
      }
      if (iVar3 <= iStack_274) break;
      iVar9 = iVar9 + -1;
      lVar8 = lVar8 + -1;
      piVar16 = piVar16 + -2;
    } while (0x44d < lVar8);
    param_1[0xdcf] = iVar9;
    param_1[0xdce] = iVar9;
    if (((param_1[0xdd1] == 0) && (param_1[0xdca] != 0x3ea)) && (param_1[0x16] == 0)) {
      if (0x44f < iVar9) {
        iVar9 = 0x44f;
      }
      param_1[0xdce] = iVar9;
    }
  }
  else {
    if (param_1[0xdcb] == 0x3ea) {
      FUN_1807069e0(lStack_220,param_1[0x2d],auStack_188);
      iVar9 = param_1[0xdca];
      uStack_240 = 1;
    }
    if (((iVar9 == 0x3ea) || (param_1[0xdd1] != 0)) || (param_1[0x15] != 0)) goto LAB_1806f9135;
  }
  iVar9 = param_1[0x21];
  iVar3 = param_1[0xdce];
  if (iVar9 < param_1[0xdce]) {
    param_1[0xdce] = iVar9;
    iVar3 = iVar9;
  }
  iVar9 = param_1[0x20];
  if (iVar9 != -1000) {
    param_1[0xdce] = iVar9;
    iVar3 = iVar9;
  }
  iVar14 = param_1[0xdca];
  if ((iVar14 != 0x3ea) && (iStack_230 < 15000)) {
    iVar4 = 0x44f;
    if (iVar3 < 0x44f) {
      iVar4 = iVar3;
    }
    iVar3 = iVar4;
    param_1[0xdce] = iVar3;
  }
  iVar4 = param_1[0x24];
  if ((iVar4 < 0x5dc1) && (0x450 < iVar3)) {
    param_1[0xdce] = 0x450;
    iVar3 = 0x450;
  }
  if ((iVar4 < 0x3e81) && (0x44f < iVar3)) {
    param_1[0xdce] = 0x44f;
    iVar3 = 0x44f;
  }
  if ((iVar4 < 0x2ee1) && (0x44e < iVar3)) {
    param_1[0xdce] = 0x44e;
    iVar3 = 0x44e;
  }
  if ((iVar4 < 0x1f41) && (0x44d < iVar3)) {
    param_1[0xdce] = 0x44d;
    iVar3 = 0x44d;
  }
  iVar4 = param_1[0x1199];
  if ((iVar4 != 0) && (iVar9 == -1000)) {
    iVar9 = param_1[0xdc2];
    if ((iVar9 * 18000 < iStack_274) || (iVar14 != 0x3ea)) {
      if ((iVar9 * 24000 < iStack_274) || (iVar14 != 0x3ea)) {
        if (iVar9 * 30000 < iStack_274) {
          iVar9 = (iVar9 * 44000 < iStack_274) + 0x450;
        }
        else {
          iVar9 = 0x44f;
        }
      }
      else {
        iVar9 = 0x44e;
      }
    }
    else {
      iVar9 = 0x44d;
    }
    if (iVar4 <= iVar9) {
      iVar4 = iVar9;
    }
    param_1[0x1199] = iVar4;
    iVar3 = param_1[0xdce];
    if (iVar4 <= param_1[0xdce]) {
      iVar3 = iVar4;
    }
    param_1[0xdce] = iVar3;
  }
  uVar2 = uVar12;
  if (((param_1[0xc] != 0) && (iVar9 = param_1[10], iVar9 != 0)) && (iVar14 != 0x3ea)) {
    iVar14 = 0x19;
    if (iVar9 < 0x19) {
      iVar14 = iVar9;
    }
    iVar4 = iVar3;
    while( true ) {
      iVar18 = *(int *)(&UNK_18094ecf0 + (longlong)(iVar4 * 2 + -0x89a) * 4) -
               *(int *)(&UNK_18094ca8c + (longlong)(iVar4 * 2) * 4);
      if (param_1[0xd] != 1) {
        iVar18 = *(int *)(&UNK_18094ecf0 + (longlong)(iVar4 * 2 + -0x89a) * 4);
      }
      iVar15 = *(int *)(&UNK_18094ca8c + (longlong)(iVar4 * 2) * 4) + iVar18;
      if (param_1[0xd] != 0) {
        iVar15 = iVar18;
      }
      if ((int)((ulonglong)((longlong)(iVar15 * (0x7d - iVar14)) * 0x28f) >> 0x10) < iStack_274) {
        uVar2 = 1;
        goto LAB_1806f94f2;
      }
      if (iVar9 < 6) goto LAB_1806f94f2;
      if (iVar4 < 0x44e) break;
      iVar4 = iVar4 + -1;
      param_1[0xdce] = iVar4;
    }
    param_1[0xdce] = iVar3;
  }
LAB_1806f94f2:
  param_1[0xd] = uVar2;
  FUN_1807030d0(lStack_288,0xfc4,param_6);
  iVar9 = param_1[0xdca];
  if ((iVar9 == 0x3ea) && (param_1[0xdce] == 0x44e)) {
    param_1[0xdce] = 0x44f;
  }
  if (param_1[0x2c] == 0) {
    iStack_290 = param_1[0xdce];
  }
  else {
    iStack_290 = 0x44d;
    param_1[0xdce] = 0x44d;
  }
  if ((iVar9 == 1000) && (0x44f < iStack_290)) {
    param_1[0xdca] = 0x3e9;
    iVar9 = 0x3e9;
  }
  if ((iVar9 == 0x3e9) && (iStack_290 < 0x450)) {
    param_1[0xdca] = 1000;
    iVar9 = 1000;
  }
  iVar3 = param_1[0x24];
  iVar14 = iVar3 / 0x32;
  if ((iVar10 <= iVar14) || (iVar9 == 1000)) {
    iVar4 = (iVar3 * 3) / 0x32;
    if (iVar10 <= iVar4) {
      if (param_1[0xdd0] != 0) {
        param_1[0xdd0] = 0;
        uVar13 = 1;
        uStack_280 = 1;
        uStack_240 = 1;
      }
      uVar2 = uVar12;
      if (iVar9 != 0x3ea) {
        uVar2 = uVar13;
      }
      uStack_298 = uVar2;
      if ((uVar2 != 0) &&
         (iStack_294 = FUN_1806f7040(iStack_28c,param_1[0x28],iStack_278,param_1[0xdc2]),
         uStack_298 = uVar2, iStack_294 == 0)) {
        uStack_298 = uVar12;
      }
      iVar9 = iStack_270;
      pbStack_260 = pbStack_260 + 1;
      pbStack_1d0 = pbStack_260;
      func_0x000180705500(auStack_208,pbStack_260,iStack_28c + -1);
                    // WARNING: Subroutine does not return
      FUN_1808fd200((longlong)(param_1[0x1c] * (iVar9 + iStack_27c)) * 4,param_1[0x1c],
                    0xffffffffffffff0);
    }
    if (iVar9 == 1000) {
      if (iVar10 == (iVar3 * 2) / 0x19) {
        iVar14 = iVar3 / 0x19;
      }
      else if (iVar10 == (iVar3 * 3) / 0x19) {
        iVar14 = iVar4;
      }
    }
  }
  if (uStack_298 != 0xffffffff) {
    param_1[0x844] = uStack_298;
    param_1[0x845] = iStack_258;
  }
  FUN_1806f7de0(param_1,pfStack_238,(longlong)iVar10 / (longlong)iVar14 & 0xffffffff,iVar14,
                pbStack_260,param_5,uStack_228,param_6,param_13);
LAB_1806fad6b:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_f8 ^ (ulonglong)&uStack_298);
}



longlong FUN_1806fade0(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  uint auStackX_8 [2];
  
  if (((((param_1 == 48000) || (param_1 == 24000)) || (param_1 == 16000)) ||
      ((param_1 == 12000 || (param_1 == 8000)))) &&
     ((param_2 - 1U < 2 && (((param_3 - 0x800U & 0xfffffffc) == 0 && (param_3 != 0x802)))))) {
    if ((param_2 - 1U < 2) && (iVar1 = func_0x0001807069d0(auStackX_8), iVar1 == 0)) {
      auStackX_8[0] = auStackX_8[0] + 7 & 0xfffffff8;
      iVar1 = FUN_180700c10(param_2);
      iVar1 = iVar1 + auStackX_8[0] + 0x4678;
    }
    else {
      iVar1 = 0;
    }
    lVar2 = malloc((longlong)iVar1);
    if (lVar2 != 0) {
      iVar1 = FUN_1806fb640(lVar2,param_1,param_2,param_3);
      if (param_4 != (int *)0x0) {
        *param_4 = iVar1;
      }
      if (iVar1 == 0) {
        return lVar2;
      }
      free(lVar2);
      return 0;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = -7;
    }
  }
  else if (param_4 != (int *)0x0) {
    *param_4 = -1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806faf00(int *param_1,int param_2,int *param_3)
void FUN_1806faf00(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uStackX_18;
  int8_t auStack_c8 [144];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  lVar2 = (longlong)*param_1 + (longlong)param_1;
  uStackX_18 = (uint)param_3;
  if (0x271f < param_2) {
    if (param_2 == 0x2728) {
      param_1[0x2c] = uStackX_18;
      FUN_1807030d0(lVar2,0x2728);
      goto LAB_1806fb54e;
    }
    if (param_2 == 0x272a) {
      *(int **)(param_1 + 0xdd2) = param_3;
      FUN_1807030d0(lVar2,0x272a);
      goto LAB_1806fb54e;
    }
    if (param_2 == 0x2afa) {
      if ((uStackX_18 - 1000 < 3) || (uStackX_18 == 0xfffffc18)) {
        param_1[0x22] = uStackX_18;
      }
      goto LAB_1806fb54e;
    }
    if (param_2 == 0x2b0a) {
      if (uStackX_18 + 1 < 0x66) {
        param_1[0x23] = uStackX_18;
      }
      goto LAB_1806fb54e;
    }
    if (param_2 == 0x2b0b) {
      if (param_3 != (int *)0x0) {
        *param_3 = param_1[0x23];
      }
      goto LAB_1806fb54e;
    }
LAB_1806fb4c6:
    goto LAB_1806fb54e;
  }
  if (param_2 == 0x271f) {
    if (param_3 != (int *)0x0) {
      FUN_1807030d0(lVar2,0x271f);
    }
    goto LAB_1806fb54e;
  }
  switch(param_2) {
  case 4000:
    if ((((uStackX_18 - 0x800 & 0xfffffffc) == 0) && (uStackX_18 != 0x802)) &&
       ((param_1[0xdd1] != 0 || (param_1[0x1b] == uStackX_18)))) {
      param_1[0x1b] = uStackX_18;
      param_1[0x30] = uStackX_18;
    }
    break;
  case 0xfa1:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0x1b];
    }
    break;
  case 0xfa2:
    if ((uStackX_18 != 0xfffffc18) && (uStackX_18 != 0xffffffff)) {
      if ((int)uStackX_18 < 1) break;
      if ((int)uStackX_18 < 0x1f5) {
        param_1[0x29] = 500;
        break;
      }
      if (param_1[0x1c] * 300000 < (int)uStackX_18) {
        uStackX_18 = param_1[0x1c] * 300000;
      }
    }
    param_1[0x29] = uStackX_18;
    break;
  case 0xfa3:
    if (param_3 != (int *)0x0) {
      iVar1 = func_0x0001806fc260(param_1,param_1[0xdcd],0x4fc);
      *param_3 = iVar1;
    }
    break;
  case 0xfa4:
    if (4 < uStackX_18 - 0x44d) break;
    param_1[0x21] = uStackX_18;
    goto code_r0x0001806fb088;
  case 0xfa5:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0x21];
    }
    break;
  case 0xfa6:
    if (uStackX_18 < 2) {
      param_1[0x25] = uStackX_18;
      param_1[0xf] = 1 - uStackX_18;
    }
    break;
  case 0xfa7:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0x25];
    }
    break;
  case 0xfa8:
    if ((4 < uStackX_18 - 0x44d) && (uStackX_18 != 0xfffffc18)) break;
    param_1[0x20] = uStackX_18;
code_r0x0001806fb088:
    if (uStackX_18 == 0x44d) {
      param_1[5] = 8000;
    }
    else {
      iVar1 = 16000;
      if (uStackX_18 == 0x44e) {
        iVar1 = 12000;
      }
      param_1[5] = iVar1;
    }
    break;
  case 0xfa9:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0xdce];
    }
    break;
  case 0xfaa:
    if (uStackX_18 < 0xb) {
      param_1[0xb] = uStackX_18;
      FUN_1807030d0(lVar2,0xfaa);
    }
    break;
  case 0xfab:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0xb];
    }
    break;
  case 0xfac:
    if (uStackX_18 < 2) {
      param_1[0xc] = uStackX_18;
    }
    break;
  case 0xfad:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0xc];
    }
    break;
  case 0xfae:
    if (uStackX_18 < 0x65) {
      param_1[10] = uStackX_18;
      FUN_1807030d0(lVar2,0xfae);
    }
    break;
  case 0xfaf:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[10];
    }
    break;
  case 0xfb0:
    if (uStackX_18 < 2) {
      param_1[0x2e] = uStackX_18;
    }
    break;
  case 0xfb1:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0x2e];
    }
    break;
  default:
    goto LAB_1806fb4c6;
  case 0xfb4:
    if (uStackX_18 < 2) {
      param_1[0x26] = uStackX_18;
    }
    break;
  case 0xfb5:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0x26];
    }
    break;
  case 0xfb6:
    if (((0 < (int)uStackX_18) && ((int)uStackX_18 <= param_1[0x1c])) || (uStackX_18 == 0xfffffc18))
    {
      param_1[0x1e] = uStackX_18;
    }
    break;
  case 0xfb7:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0x1e];
    }
    break;
  case 0xfb8:
    if ((uStackX_18 == 0xfffffc18) || (uStackX_18 - 0xbb9 < 2)) {
      param_1[0x1f] = uStackX_18;
    }
    break;
  case 0xfb9:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0x1f];
    }
    break;
  case 0xfbb:
    if (param_3 != (int *)0x0) {
      iVar1 = param_1[0x24];
      *param_3 = iVar1 / 400;
      if (param_1[0x1b] != 0x803) {
        *param_3 = param_1[0x1d] + iVar1 / 400;
      }
    }
    break;
  case 0xfbc:
    FUN_18070b660(param_1 + 0x2f);
                    // WARNING: Subroutine does not return
    memset(param_1 + 0xdc2,0,(longlong)param_1 + (0x4678 - (longlong)(param_1 + 0xdc2)));
  case 0xfbd:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0x24];
    }
    break;
  case 0xfbf:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0x119d];
    }
    break;
  case 0xfc4:
    if (uStackX_18 - 8 < 0x11) {
      param_1[0x2a] = uStackX_18;
    }
    break;
  case 0xfc5:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0x2a];
    }
    break;
  case 0xfc8:
    if (uStackX_18 - 5000 < 10) {
      param_1[0x27] = uStackX_18;
      FUN_1807030d0(lVar2,0xfc8);
    }
    break;
  case 0xfc9:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0x27];
    }
    break;
  case 0xfca:
    if (uStackX_18 < 2) {
      param_1[0x13] = uStackX_18;
    }
    break;
  case 0xfcb:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0x13];
    }
    break;
  case 0xfce:
    if (uStackX_18 < 2) {
      FUN_1807030d0(lVar2,0xfce);
    }
    break;
  case 0xfcf:
    if (param_3 != (int *)0x0) {
      FUN_1807030d0(lVar2,0xfcf);
    }
  }
LAB_1806fb54e:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_c8);
}






// 函数: void FUN_1806fb3c8(void)
void FUN_1806fb3c8(void)

{
  longlong unaff_RSI;
  
  FUN_18070b660(unaff_RSI + 0xbc);
                    // WARNING: Subroutine does not return
  memset(unaff_RSI + 0x3708,0,(unaff_RSI - (unaff_RSI + 0x3708)) + 0x4678);
}






