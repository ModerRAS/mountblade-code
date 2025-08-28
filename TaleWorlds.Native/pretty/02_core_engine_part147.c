#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part147.c - 2 个函数

// 函数: void FUN_1801376c9(float param_1,byte param_2,int param_3)
void FUN_1801376c9(float param_1,byte param_2,int param_3)

{
  float *pfVar1;
  uint64_t *puVar2;
  longlong lVar3;
  int32_t *puVar4;
  uint64_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  float fVar8;
  bool bVar9;
  byte in_AL;
  char cVar10;
  int iVar11;
  int32_t uVar12;
  longlong lVar13;
  longlong lVar14;
  byte in_CL;
  int16_t uVar15;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar16;
  int32_t *unaff_RDI;
  int16_t uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong unaff_R13;
  ulonglong unaff_R14;
  uint64_t *puVar20;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  in_CL = in_CL & 0x7f;
  *(char *)(unaff_RBP + -0x68) = (char)unaff_R14;
  *(byte *)(unaff_RDI + 0x28) = in_CL;
  iVar11 = (int)unaff_R14;
  if ((in_AL & 0x10) == 0) {
    uVar19 = unaff_R14 & 0xffffffff;
    *(byte *)((longlong)unaff_RDI + 0xa1) = 0 < param_3 | param_2 & 0xfe;
    uVar16 = unaff_R14;
    if (0 < param_3) {
      do {
        uVar18 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar18;
        lVar3 = *(longlong *)(uVar16 + *(longlong *)(unaff_RDI + 10));
        *(byte *)(lVar3 + 0x432) = 1 < (int)unaff_RDI[8] | *(byte *)(lVar3 + 0x432) & 0xfe;
        in_CL = *(char *)(lVar3 + 0xb7) << 7 | *(byte *)(unaff_RDI + 0x28);
        *(byte *)(unaff_RDI + 0x28) = in_CL;
        uVar16 = uVar16 + 8;
      } while ((int)uVar18 < (int)unaff_RDI[8]);
    }
    if (*(longlong *)(unaff_RDI + 2) == 0) {
      uVar16 = unaff_R14;
      if ((in_CL & 4) != 0) {
        if (((in_CL & 1) == 0) || ((int)unaff_RDI[8] <= iVar11)) {
          if (*(ulonglong *)(unaff_RDI + 0x1a) == unaff_R14) {
            *(uint64_t *)(unaff_RBX + 0x1bf4) = *(uint64_t *)(unaff_RDI + 0xe);
            *(ulonglong *)(unaff_RBX + 0x1bfc) = unaff_R14;
            *(int32_t *)(unaff_RBX + 0x1bd0) = 1;
            *(int8_t *)(unaff_RBX + 0x1c14) = 1;
            *(uint64_t *)(unaff_RBX + 0x1c04) = *(uint64_t *)(unaff_RDI + 0x10);
            *(int32_t *)(unaff_RBX + 0x1bd4) = 1;
          }
        }
        else {
          lVar3 = **(longlong **)(unaff_RDI + 10);
          *(uint64_t *)(unaff_RBX + 0x1bf4) = *(uint64_t *)(lVar3 + 0x40);
          *(ulonglong *)(unaff_RBX + 0x1bfc) = unaff_R14;
          *(int32_t *)(unaff_RBX + 0x1bd0) = 1;
          *(int8_t *)(unaff_RBX + 0x1c14) = 1;
          *(uint64_t *)(unaff_RBX + 0x1c04) = *(uint64_t *)(lVar3 + 0x50);
          *(int32_t *)(unaff_RBX + 0x1bd4) = 1;
          *(int8_t *)(unaff_RBX + 0x1c15) = *(int8_t *)(lVar3 + 0xb2);
          *(int32_t *)(unaff_RBX + 0x1bdc) = 1;
        }
        if (((*(byte *)(unaff_RDI + 0x28) & 2) != 0) && (iVar11 < (int)unaff_RDI[8])) {
          uVar12 = *(int32_t *)(**(longlong **)(unaff_RDI + 10) + 0x30);
          *(int32_t *)(unaff_RBX + 0x1bec) = 1;
          *(int32_t *)(unaff_RBX + 0x1c3c) = uVar12;
        }
        uVar12 = unaff_RDI[0x16];
        uVar6 = unaff_RDI[0x17];
        uVar7 = unaff_RDI[0x18];
        *(int32_t *)(unaff_RBX + 0x1c44) = unaff_RDI[0x15];
        *(int32_t *)(unaff_RBX + 0x1c48) = uVar12;
        *(int32_t *)(unaff_RBX + 0x1c4c) = uVar6;
        *(int32_t *)(unaff_RBX + 0x1c50) = uVar7;
        *(int32_t *)(unaff_RBX + 0x1c54) = unaff_RDI[0x19];
        FUN_180121200(unaff_RBP + -0x19,0x14,&UNK_180a06578,*unaff_RDI);
        lVar3 = _DAT_180c8a9b0;
        *(int32_t *)(unaff_RBP + -0x59) = 1;
        uVar12 = *(int32_t *)(lVar3 + 0x1630);
        *(int32_t *)(unaff_RBP + -0x55) = *(int32_t *)(lVar3 + 0x162c);
        *(int32_t *)(unaff_RBP + -0x51) = uVar12;
        FUN_18013e000(lVar3 + 0x1b90,unaff_RBP + -0x59);
        *(ulonglong *)(lVar3 + 0x162c) = unaff_R14;
        FUN_1801299b0(unaff_RBP + -0x19,0,0x20081139);
        unaff_RBX = _DAT_180c8a9b0;
        lVar13 = (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b90);
        lVar3 = *(longlong *)(_DAT_180c8a9b0 + 0x1b98);
        lVar14 = (longlong)*(int *)(lVar3 + -0xc + lVar13 * 0xc);
        uVar16 = (ulonglong)*(uint *)(&UNK_18098d188 + lVar14 * 0xc);
        if (*(int *)(&UNK_18098d180 + lVar14 * 0xc) == 4) {
          if (*(int *)(&UNK_18098d184 + lVar14 * 0xc) == 1) {
            *(int32_t *)(uVar16 + 0x1628 + _DAT_180c8a9b0) =
                 *(int32_t *)(lVar3 + -8 + lVar13 * 0xc);
          }
          else if (*(int *)(&UNK_18098d184 + lVar14 * 0xc) == 2) {
            *(int32_t *)(uVar16 + 0x1628 + _DAT_180c8a9b0) =
                 *(int32_t *)(lVar3 + -8 + lVar13 * 0xc);
            *(int32_t *)(uVar16 + 0x162c + unaff_RBX) =
                 *(int32_t *)(lVar3 + -4 + lVar13 * 0xc);
          }
        }
        *(int *)(unaff_RBX + 0x1b90) = *(int *)(unaff_RBX + 0x1b90) + -1;
        uVar16 = *(ulonglong *)(unaff_R13 + 0x1af8);
        *(ulonglong *)(unaff_RDI + 0x1a) = uVar16;
        *(int8_t *)(unaff_RBP + -0x68) = 1;
        *(uint64_t *)(uVar16 + 0x100) = *(uint64_t *)(uVar16 + 0x40);
        *(int32_t **)(uVar16 + 0x410) = unaff_RDI;
        *(uint64_t *)(unaff_RDI + 0xe) = *(uint64_t *)(uVar16 + 0x40);
        param_1 = (float)*(uint64_t *)(uVar16 + 0x48);
        *(uint64_t *)(unaff_RDI + 0x10) = *(uint64_t *)(uVar16 + 0x48);
      }
    }
    else {
      uVar16 = *(ulonglong *)(*(longlong *)(unaff_RDI + 2) + 0x68);
      *(ulonglong *)(unaff_RDI + 0x1a) = uVar16;
    }
    *(byte *)(unaff_RDI + 0x28) = *(byte *)(unaff_RDI + 0x28) & 0xfc;
    if (((*(byte *)((longlong)unaff_RDI + 0xa1) & 8) != 0) && (*(longlong *)(unaff_RDI + 0x1a) != 0)
       ) {
      param_1 = (float)FUN_180137370();
    }
  }
  else {
    uVar16 = *(ulonglong *)(unaff_RDI + 0x1a);
    *(byte *)((longlong)unaff_RDI + 0xa1) = param_2 | 1;
  }
  if (*(ulonglong *)(unaff_RDI + 2) == unaff_R14) {
    if (*(longlong *)(unaff_R13 + 0x1c98) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(unaff_R13 + 0x1c98) + 0x3a8);
      puVar4 = *(int32_t **)(lVar3 + 0x408);
      if ((puVar4 != (int32_t *)0x0) && (*(ulonglong *)(lVar3 + 0x398) == uVar16)) {
        unaff_RDI[0x25] = *puVar4;
      }
    }
    if ((uVar16 == 0) || ((*(byte *)(unaff_RDI + 1) & 0x40) == 0)) goto LAB_180137a81;
    uVar5 = *(uint64_t *)(uVar16 + 0x2e8);
    *(int8_t *)(unaff_RBP + -0x69) = 1;
    param_1 = (float)FUN_180291cf0(uVar5,2);
    unaff_RBX = _DAT_180c8a9b0;
    puVar20 = *(uint64_t **)(uVar16 + 0x2e8);
    if (*(int *)(puVar20 + 0x12) != 1) {
      uVar5 = puVar20[1];
      puVar2 = (uint64_t *)((longlong)*(int *)(puVar20 + 0x12) * 0x20 + puVar20[0x14]);
      *puVar2 = *puVar20;
      puVar2[1] = uVar5;
      uVar5 = puVar20[3];
      puVar2 = (uint64_t *)((longlong)*(int *)(puVar20 + 0x12) * 0x20 + 0x10 + puVar20[0x14]);
      *puVar2 = puVar20[2];
      puVar2[1] = uVar5;
      lVar3 = puVar20[0x14];
      *(int32_t *)(puVar20 + 0x12) = 1;
      uVar5 = *(uint64_t *)(lVar3 + 0x28);
      *puVar20 = *(uint64_t *)(lVar3 + 0x20);
      puVar20[1] = uVar5;
      param_1 = *(float *)(lVar3 + 0x30);
      uVar12 = *(int32_t *)(lVar3 + 0x34);
      uVar6 = *(int32_t *)(lVar3 + 0x38);
      uVar7 = *(int32_t *)(lVar3 + 0x3c);
      *(float *)(puVar20 + 2) = param_1;
      *(int32_t *)((longlong)puVar20 + 0x14) = uVar12;
      *(int32_t *)(puVar20 + 3) = uVar6;
      *(int32_t *)((longlong)puVar20 + 0x1c) = uVar7;
      puVar20[0xb] = puVar20[3] + (longlong)*(int *)(puVar20 + 2) * 2;
    }
  }
  else {
LAB_180137a81:
    *(char *)(unaff_RBP + -0x69) = (char)unaff_R14;
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x1e);
  if ((((*(ulonglong *)(unaff_RDI + 2) == unaff_R14) && (uVar16 != 0)) &&
      ((*(byte *)(unaff_RDI + 1) & 0x40) != 0)) &&
     (((lVar3 != 0 && (*(ulonglong *)(lVar3 + 0x10) == unaff_R14)) &&
      (*(int *)(lVar3 + 0x20) == iVar11)))) {
    puVar20 = (uint64_t *)(unaff_RBX + 0x1de0);
    bVar9 = true;
    if (*(char *)(unaff_RBX + 0x1dd0) == '\0') {
      puVar20 = (uint64_t *)0x0;
    }
    if (((puVar20 == (uint64_t *)0x0) || (*(int *)((longlong)puVar20 + 0x14) == -1)) ||
       ((iVar11 = strcmp(&UNK_180a06400,puVar20 + 3), param_1 = extraout_XMM0_Da, iVar11 != 0 ||
        (cVar10 = FUN_180138ed0(uVar16,*(uint64_t *)*puVar20), param_1 = extraout_XMM0_Da_00,
        cVar10 == '\0')))) {
      fVar26 = *(float *)(lVar3 + 0x38) - -4.0;
      fVar25 = *(float *)(lVar3 + 0x3c) - -4.0;
      fVar23 = (*(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0x40)) - 4.0;
      fVar22 = (*(float *)(lVar3 + 0x3c) + *(float *)(lVar3 + 0x44)) - 4.0;
      if ((fVar26 <= fVar23) && (fVar25 <= fVar22)) {
        lVar13 = *(longlong *)(uVar16 + 0x398);
        param_1 = fVar26 - *(float *)(uVar16 + 0x40);
        uVar15 = (int16_t)(int)(fVar22 - fVar25);
        *(int16_t *)(unaff_RBP + -0x57) = uVar15;
        fVar22 = *(float *)(uVar16 + 0x44);
        uVar17 = (int16_t)(int)(fVar23 - fVar26);
        *(int16_t *)(unaff_RBP + -0x59) = uVar17;
        *(int32_t *)(uVar16 + 0x268) = *(int32_t *)(unaff_RBP + -0x59);
        *(short *)(unaff_RBP + -0x59) = (short)(int)param_1;
        *(short *)(unaff_RBP + -0x57) = (short)(int)(fVar25 - fVar22);
        *(int32_t *)(uVar16 + 0x26c) = *(int32_t *)(unaff_RBP + -0x59);
        fVar22 = *(float *)(lVar13 + 0x40);
        fVar23 = *(float *)(lVar13 + 0x44);
        *(int16_t *)(unaff_RBP + -0x59) = uVar17;
        *(int16_t *)(unaff_RBP + -0x57) = uVar15;
        *(int32_t *)(lVar13 + 0x268) = *(int32_t *)(unaff_RBP + -0x59);
        *(short *)(unaff_RBP + -0x59) = (short)(int)(fVar26 - fVar22);
        *(short *)(unaff_RBP + -0x57) = (short)(int)(fVar25 - fVar23);
        *(int32_t *)(lVar13 + 0x26c) = *(int32_t *)(unaff_RBP + -0x59);
      }
    }
    unaff_R14 = 0;
  }
  else {
    bVar9 = false;
  }
  if (*(longlong *)(unaff_RDI + 2) == 0) {
    if (uVar16 == 0) goto LAB_180137cc2;
    FUN_18013a5e0(param_1,*(uint64_t *)(uVar16 + 0x40),*(uint64_t *)(uVar16 + 0x48));
    param_1 = (float)FUN_18013a920();
    unaff_RBX = _DAT_180c8a9b0;
  }
  if ((((uVar16 != 0) && (*(longlong *)(unaff_RDI + 4) == 0)) && (unaff_RDI[8] == 0)) &&
     (((*(byte *)(unaff_RDI + 0x28) & 4) != 0 && ((*(byte *)(unaff_RDI + 1) & 0x40) == 0)))) {
    uVar12 = *(int32_t *)(unaff_RBX + 0x193c);
    uVar6 = *(int32_t *)(unaff_RBX + 0x1940);
    fVar26 = *(float *)(unaff_RBX + 0x1944);
    fVar22 = (float)unaff_RDI[0xf];
    fVar23 = (float)unaff_RDI[0x11];
    *(int32_t *)(unaff_RBP + -0x29) = *(int32_t *)(unaff_RBX + 0x1938);
    *(int32_t *)(unaff_RBP + -0x25) = uVar12;
    *(int32_t *)(unaff_RBP + -0x21) = uVar6;
    *(float *)(unaff_RBP + -0x1d) = fVar26;
    fVar25 = *(float *)(unaff_RBX + 0x1628);
    *(float *)(unaff_RBP + -0x55) = fVar22 + fVar23;
    *(float *)(unaff_RBP + -0x1d) = fVar26 * fVar25;
    *(float *)(unaff_RBP + -0x59) = (float)unaff_RDI[0xe] + (float)unaff_RDI[0x10];
    uVar12 = func_0x000180121e20(unaff_RBP + -0x29);
    param_1 = (float)FUN_180293f50(*(uint64_t *)(uVar16 + 0x2e8),unaff_RDI + 0xe,unaff_RBP + -0x59
                                   ,uVar12,0);
    unaff_RBX = _DAT_180c8a9b0;
  }
LAB_180137cc2:
  if ((*(char *)(unaff_RBP + -0x69) != '\0') && ((*(byte *)(unaff_RDI + 0x28) & 4) != 0)) {
    func_0x000180292160(*(uint64_t *)(uVar16 + 0x2e8),0);
    uVar12 = *(int32_t *)(unaff_RBX + 0x16ec);
    uVar6 = *(int32_t *)(unaff_RBX + 0x16f0);
    fVar22 = *(float *)(unaff_RBX + 0x16f4);
    *(int32_t *)(unaff_RBP + -0x29) = *(int32_t *)(unaff_RBX + 0x16e8);
    *(int32_t *)(unaff_RBP + -0x25) = uVar12;
    *(int32_t *)(unaff_RBP + -0x21) = uVar6;
    *(float *)(unaff_RBP + -0x1d) = fVar22;
    *(float *)(unaff_RBP + -0x1d) = fVar22 * *(float *)(unaff_RBX + 0x1628);
    if (bVar9) {
      pfVar1 = (float *)(lVar3 + 0x38);
      fVar8 = *pfVar1;
      uVar6 = *(int32_t *)(lVar3 + 0x3c);
      uVar12 = *(int32_t *)(lVar3 + 0x3c);
      fVar22 = (float)unaff_RDI[0xf];
      fVar21 = *pfVar1 + *(float *)(lVar3 + 0x40);
      fVar24 = *(float *)(lVar3 + 0x3c) + *(float *)(lVar3 + 0x44);
      fVar23 = (float)unaff_RDI[0xe];
      fVar25 = (float)unaff_RDI[0x11];
      fVar26 = (float)unaff_RDI[0x10];
      *(float *)(unaff_RBP + -0x49) = *pfVar1;
      *(int32_t *)(unaff_RBP + -0x45) = uVar12;
      *(float *)(unaff_RBP + -0x41) = fVar21;
      *(float *)(unaff_RBP + -0x3d) = fVar24;
      *(float *)(unaff_RBP + -0x59) = fVar8;
      *(int32_t *)(unaff_RBP + -0x55) = uVar6;
      *(float *)(unaff_RBP + -0x51) = fVar21;
      *(float *)(unaff_RBP + -0x4d) = fVar24;
      *(float *)(unaff_RBP + -0x59) = fVar23;
      *(float *)(unaff_RBP + -0x55) = fVar22;
      *(float *)(unaff_RBP + -0x51) = fVar23 + fVar26;
      *(float *)(unaff_RBP + -0x4d) = fVar22 + fVar25;
      *(float *)(unaff_RBP + -0x59) = fVar23;
      *(float *)(unaff_RBP + -0x55) = fVar22;
      *(float *)(unaff_RBP + -0x51) = fVar23 + fVar26;
      *(float *)(unaff_RBP + -0x4d) = fVar22 + fVar25;
      uVar12 = func_0x000180121e20(unaff_RBP + -0x29);
      FUN_180298890(*(uint64_t *)(uVar16 + 0x2e8),unaff_RBP + -0x59,unaff_RBP + -0x49,uVar12,0);
    }
    else {
      fVar22 = (float)unaff_RDI[0xf];
      fVar23 = (float)unaff_RDI[0x11];
      *(float *)(unaff_RBP + -0x59) = (float)unaff_RDI[0xe] + (float)unaff_RDI[0x10];
      *(float *)(unaff_RBP + -0x55) = fVar22 + fVar23;
      uVar12 = func_0x000180121e20(unaff_RBP + -0x29);
      FUN_180293f50(*(uint64_t *)(uVar16 + 0x2e8),unaff_RDI + 0xe,unaff_RBP + -0x59,uVar12,0);
    }
    param_1 = (float)FUN_180291f60(*(uint64_t *)(uVar16 + 0x2e8));
  }
  if ((uVar16 == 0) || ((int)unaff_RDI[8] < 1)) {
    *(byte *)((longlong)unaff_RDI + 0xa1) = *(byte *)((longlong)unaff_RDI + 0xa1) & 0xfd;
    *(byte *)(unaff_RDI + 0x28) = *(byte *)(unaff_RDI + 0x28) & 0xf7;
    unaff_RDI[0x27] = (int)unaff_R14;
    if (0 < (int)unaff_RDI[8]) {
      unaff_RDI[0x26] = *(int32_t *)(**(longlong **)(unaff_RDI + 10) + 8);
    }
  }
  else {
    FUN_180137f90(param_1,uVar16);
    if (*(int *)(*(longlong *)(unaff_RDI + 0xc) + 0x14) != 0) {
      unaff_RDI[0x26] = *(int *)(*(longlong *)(unaff_RDI + 0xc) + 0x14);
    }
  }
  if ((((uVar16 != 0) && ((*(byte *)(unaff_RDI + 0x28) & 4) != 0)) &&
      (*(longlong *)(unaff_RDI + 2) == 0)) &&
     ((*(longlong *)(unaff_R13 + 0x1b78) == 0 ||
      (*(ulonglong *)(*(longlong *)(unaff_R13 + 0x1b78) + 0x3a0) != uVar16)))) {
    FUN_18013baf0(uVar16);
  }
  unaff_RDI[0x23] = *(int32_t *)(unaff_R13 + 0x1a90);
  if (uVar16 != 0) {
    if (*(longlong *)(unaff_RDI + 4) != 0) {
      FUN_1801373f0();
    }
    if (*(longlong *)(unaff_RDI + 6) != 0) {
      FUN_1801373f0();
    }
    if (*(char *)(unaff_RBP + -0x68) != '\0') {
      FUN_18012cfe0();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -1) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801376d4(float param_1,byte param_2,int param_3)
void FUN_1801376d4(float param_1,byte param_2,int param_3)

{
  float *pfVar1;
  uint64_t *puVar2;
  longlong lVar3;
  int32_t *puVar4;
  uint64_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  float fVar8;
  bool bVar9;
  byte in_AL;
  char cVar10;
  int iVar11;
  int32_t uVar12;
  longlong lVar13;
  longlong lVar14;
  byte in_CL;
  int16_t uVar15;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar16;
  int32_t *unaff_RDI;
  int16_t uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong unaff_R13;
  ulonglong unaff_R14;
  uint64_t *puVar20;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  *(char *)(unaff_RBP + -0x68) = (char)unaff_R14;
  *(byte *)(unaff_RDI + 0x28) = in_CL;
  iVar11 = (int)unaff_R14;
  if ((in_AL & 0x10) == 0) {
    uVar19 = unaff_R14 & 0xffffffff;
    *(byte *)((longlong)unaff_RDI + 0xa1) = 0 < param_3 | param_2 & 0xfe;
    uVar16 = unaff_R14;
    if (0 < param_3) {
      do {
        uVar18 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar18;
        lVar3 = *(longlong *)(uVar16 + *(longlong *)(unaff_RDI + 10));
        *(byte *)(lVar3 + 0x432) = 1 < (int)unaff_RDI[8] | *(byte *)(lVar3 + 0x432) & 0xfe;
        in_CL = *(char *)(lVar3 + 0xb7) << 7 | *(byte *)(unaff_RDI + 0x28);
        *(byte *)(unaff_RDI + 0x28) = in_CL;
        uVar16 = uVar16 + 8;
      } while ((int)uVar18 < (int)unaff_RDI[8]);
    }
    if (*(longlong *)(unaff_RDI + 2) == 0) {
      uVar16 = unaff_R14;
      if ((in_CL & 4) != 0) {
        if (((in_CL & 1) == 0) || ((int)unaff_RDI[8] <= iVar11)) {
          if (*(ulonglong *)(unaff_RDI + 0x1a) == unaff_R14) {
            *(uint64_t *)(unaff_RBX + 0x1bf4) = *(uint64_t *)(unaff_RDI + 0xe);
            *(ulonglong *)(unaff_RBX + 0x1bfc) = unaff_R14;
            *(int32_t *)(unaff_RBX + 0x1bd0) = 1;
            *(int8_t *)(unaff_RBX + 0x1c14) = 1;
            *(uint64_t *)(unaff_RBX + 0x1c04) = *(uint64_t *)(unaff_RDI + 0x10);
            *(int32_t *)(unaff_RBX + 0x1bd4) = 1;
          }
        }
        else {
          lVar3 = **(longlong **)(unaff_RDI + 10);
          *(uint64_t *)(unaff_RBX + 0x1bf4) = *(uint64_t *)(lVar3 + 0x40);
          *(ulonglong *)(unaff_RBX + 0x1bfc) = unaff_R14;
          *(int32_t *)(unaff_RBX + 0x1bd0) = 1;
          *(int8_t *)(unaff_RBX + 0x1c14) = 1;
          *(uint64_t *)(unaff_RBX + 0x1c04) = *(uint64_t *)(lVar3 + 0x50);
          *(int32_t *)(unaff_RBX + 0x1bd4) = 1;
          *(int8_t *)(unaff_RBX + 0x1c15) = *(int8_t *)(lVar3 + 0xb2);
          *(int32_t *)(unaff_RBX + 0x1bdc) = 1;
        }
        if (((*(byte *)(unaff_RDI + 0x28) & 2) != 0) && (iVar11 < (int)unaff_RDI[8])) {
          uVar12 = *(int32_t *)(**(longlong **)(unaff_RDI + 10) + 0x30);
          *(int32_t *)(unaff_RBX + 0x1bec) = 1;
          *(int32_t *)(unaff_RBX + 0x1c3c) = uVar12;
        }
        uVar12 = unaff_RDI[0x16];
        uVar6 = unaff_RDI[0x17];
        uVar7 = unaff_RDI[0x18];
        *(int32_t *)(unaff_RBX + 0x1c44) = unaff_RDI[0x15];
        *(int32_t *)(unaff_RBX + 0x1c48) = uVar12;
        *(int32_t *)(unaff_RBX + 0x1c4c) = uVar6;
        *(int32_t *)(unaff_RBX + 0x1c50) = uVar7;
        *(int32_t *)(unaff_RBX + 0x1c54) = unaff_RDI[0x19];
        FUN_180121200(unaff_RBP + -0x19,0x14,&UNK_180a06578,*unaff_RDI);
        lVar3 = _DAT_180c8a9b0;
        *(int32_t *)(unaff_RBP + -0x59) = 1;
        uVar12 = *(int32_t *)(lVar3 + 0x1630);
        *(int32_t *)(unaff_RBP + -0x55) = *(int32_t *)(lVar3 + 0x162c);
        *(int32_t *)(unaff_RBP + -0x51) = uVar12;
        FUN_18013e000(lVar3 + 0x1b90,unaff_RBP + -0x59);
        *(ulonglong *)(lVar3 + 0x162c) = unaff_R14;
        FUN_1801299b0(unaff_RBP + -0x19,0,0x20081139);
        unaff_RBX = _DAT_180c8a9b0;
        lVar13 = (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b90);
        lVar3 = *(longlong *)(_DAT_180c8a9b0 + 0x1b98);
        lVar14 = (longlong)*(int *)(lVar3 + -0xc + lVar13 * 0xc);
        uVar16 = (ulonglong)*(uint *)(&UNK_18098d188 + lVar14 * 0xc);
        if (*(int *)(&UNK_18098d180 + lVar14 * 0xc) == 4) {
          if (*(int *)(&UNK_18098d184 + lVar14 * 0xc) == 1) {
            *(int32_t *)(uVar16 + 0x1628 + _DAT_180c8a9b0) =
                 *(int32_t *)(lVar3 + -8 + lVar13 * 0xc);
          }
          else if (*(int *)(&UNK_18098d184 + lVar14 * 0xc) == 2) {
            *(int32_t *)(uVar16 + 0x1628 + _DAT_180c8a9b0) =
                 *(int32_t *)(lVar3 + -8 + lVar13 * 0xc);
            *(int32_t *)(uVar16 + 0x162c + unaff_RBX) =
                 *(int32_t *)(lVar3 + -4 + lVar13 * 0xc);
          }
        }
        *(int *)(unaff_RBX + 0x1b90) = *(int *)(unaff_RBX + 0x1b90) + -1;
        uVar16 = *(ulonglong *)(unaff_R13 + 0x1af8);
        *(ulonglong *)(unaff_RDI + 0x1a) = uVar16;
        *(int8_t *)(unaff_RBP + -0x68) = 1;
        *(uint64_t *)(uVar16 + 0x100) = *(uint64_t *)(uVar16 + 0x40);
        *(int32_t **)(uVar16 + 0x410) = unaff_RDI;
        *(uint64_t *)(unaff_RDI + 0xe) = *(uint64_t *)(uVar16 + 0x40);
        param_1 = (float)*(uint64_t *)(uVar16 + 0x48);
        *(uint64_t *)(unaff_RDI + 0x10) = *(uint64_t *)(uVar16 + 0x48);
      }
    }
    else {
      uVar16 = *(ulonglong *)(*(longlong *)(unaff_RDI + 2) + 0x68);
      *(ulonglong *)(unaff_RDI + 0x1a) = uVar16;
    }
    *(byte *)(unaff_RDI + 0x28) = *(byte *)(unaff_RDI + 0x28) & 0xfc;
    if (((*(byte *)((longlong)unaff_RDI + 0xa1) & 8) != 0) && (*(longlong *)(unaff_RDI + 0x1a) != 0)
       ) {
      param_1 = (float)FUN_180137370();
    }
  }
  else {
    uVar16 = *(ulonglong *)(unaff_RDI + 0x1a);
    *(byte *)((longlong)unaff_RDI + 0xa1) = param_2 | 1;
  }
  if (*(ulonglong *)(unaff_RDI + 2) == unaff_R14) {
    if (*(longlong *)(unaff_R13 + 0x1c98) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(unaff_R13 + 0x1c98) + 0x3a8);
      puVar4 = *(int32_t **)(lVar3 + 0x408);
      if ((puVar4 != (int32_t *)0x0) && (*(ulonglong *)(lVar3 + 0x398) == uVar16)) {
        unaff_RDI[0x25] = *puVar4;
      }
    }
    if ((uVar16 == 0) || ((*(byte *)(unaff_RDI + 1) & 0x40) == 0)) goto LAB_180137a81;
    uVar5 = *(uint64_t *)(uVar16 + 0x2e8);
    *(int8_t *)(unaff_RBP + -0x69) = 1;
    param_1 = (float)FUN_180291cf0(uVar5,2);
    unaff_RBX = _DAT_180c8a9b0;
    puVar20 = *(uint64_t **)(uVar16 + 0x2e8);
    if (*(int *)(puVar20 + 0x12) != 1) {
      uVar5 = puVar20[1];
      puVar2 = (uint64_t *)((longlong)*(int *)(puVar20 + 0x12) * 0x20 + puVar20[0x14]);
      *puVar2 = *puVar20;
      puVar2[1] = uVar5;
      uVar5 = puVar20[3];
      puVar2 = (uint64_t *)((longlong)*(int *)(puVar20 + 0x12) * 0x20 + 0x10 + puVar20[0x14]);
      *puVar2 = puVar20[2];
      puVar2[1] = uVar5;
      lVar3 = puVar20[0x14];
      *(int32_t *)(puVar20 + 0x12) = 1;
      uVar5 = *(uint64_t *)(lVar3 + 0x28);
      *puVar20 = *(uint64_t *)(lVar3 + 0x20);
      puVar20[1] = uVar5;
      param_1 = *(float *)(lVar3 + 0x30);
      uVar12 = *(int32_t *)(lVar3 + 0x34);
      uVar6 = *(int32_t *)(lVar3 + 0x38);
      uVar7 = *(int32_t *)(lVar3 + 0x3c);
      *(float *)(puVar20 + 2) = param_1;
      *(int32_t *)((longlong)puVar20 + 0x14) = uVar12;
      *(int32_t *)(puVar20 + 3) = uVar6;
      *(int32_t *)((longlong)puVar20 + 0x1c) = uVar7;
      puVar20[0xb] = puVar20[3] + (longlong)*(int *)(puVar20 + 2) * 2;
    }
  }
  else {
LAB_180137a81:
    *(char *)(unaff_RBP + -0x69) = (char)unaff_R14;
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x1e);
  if ((((*(ulonglong *)(unaff_RDI + 2) == unaff_R14) && (uVar16 != 0)) &&
      ((*(byte *)(unaff_RDI + 1) & 0x40) != 0)) &&
     (((lVar3 != 0 && (*(ulonglong *)(lVar3 + 0x10) == unaff_R14)) &&
      (*(int *)(lVar3 + 0x20) == iVar11)))) {
    puVar20 = (uint64_t *)(unaff_RBX + 0x1de0);
    bVar9 = true;
    if (*(char *)(unaff_RBX + 0x1dd0) == '\0') {
      puVar20 = (uint64_t *)0x0;
    }
    if (((puVar20 == (uint64_t *)0x0) || (*(int *)((longlong)puVar20 + 0x14) == -1)) ||
       ((iVar11 = strcmp(&UNK_180a06400,puVar20 + 3), param_1 = extraout_XMM0_Da, iVar11 != 0 ||
        (cVar10 = FUN_180138ed0(uVar16,*(uint64_t *)*puVar20), param_1 = extraout_XMM0_Da_00,
        cVar10 == '\0')))) {
      fVar26 = *(float *)(lVar3 + 0x38) - -4.0;
      fVar25 = *(float *)(lVar3 + 0x3c) - -4.0;
      fVar23 = (*(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0x40)) - 4.0;
      fVar22 = (*(float *)(lVar3 + 0x3c) + *(float *)(lVar3 + 0x44)) - 4.0;
      if ((fVar26 <= fVar23) && (fVar25 <= fVar22)) {
        lVar13 = *(longlong *)(uVar16 + 0x398);
        param_1 = fVar26 - *(float *)(uVar16 + 0x40);
        uVar15 = (int16_t)(int)(fVar22 - fVar25);
        *(int16_t *)(unaff_RBP + -0x57) = uVar15;
        fVar22 = *(float *)(uVar16 + 0x44);
        uVar17 = (int16_t)(int)(fVar23 - fVar26);
        *(int16_t *)(unaff_RBP + -0x59) = uVar17;
        *(int32_t *)(uVar16 + 0x268) = *(int32_t *)(unaff_RBP + -0x59);
        *(short *)(unaff_RBP + -0x59) = (short)(int)param_1;
        *(short *)(unaff_RBP + -0x57) = (short)(int)(fVar25 - fVar22);
        *(int32_t *)(uVar16 + 0x26c) = *(int32_t *)(unaff_RBP + -0x59);
        fVar22 = *(float *)(lVar13 + 0x40);
        fVar23 = *(float *)(lVar13 + 0x44);
        *(int16_t *)(unaff_RBP + -0x59) = uVar17;
        *(int16_t *)(unaff_RBP + -0x57) = uVar15;
        *(int32_t *)(lVar13 + 0x268) = *(int32_t *)(unaff_RBP + -0x59);
        *(short *)(unaff_RBP + -0x59) = (short)(int)(fVar26 - fVar22);
        *(short *)(unaff_RBP + -0x57) = (short)(int)(fVar25 - fVar23);
        *(int32_t *)(lVar13 + 0x26c) = *(int32_t *)(unaff_RBP + -0x59);
      }
    }
    unaff_R14 = 0;
  }
  else {
    bVar9 = false;
  }
  if (*(longlong *)(unaff_RDI + 2) == 0) {
    if (uVar16 == 0) goto LAB_180137cc2;
    FUN_18013a5e0(param_1,*(uint64_t *)(uVar16 + 0x40),*(uint64_t *)(uVar16 + 0x48));
    param_1 = (float)FUN_18013a920();
    unaff_RBX = _DAT_180c8a9b0;
  }
  if ((((uVar16 != 0) && (*(longlong *)(unaff_RDI + 4) == 0)) && (unaff_RDI[8] == 0)) &&
     (((*(byte *)(unaff_RDI + 0x28) & 4) != 0 && ((*(byte *)(unaff_RDI + 1) & 0x40) == 0)))) {
    uVar12 = *(int32_t *)(unaff_RBX + 0x193c);
    uVar6 = *(int32_t *)(unaff_RBX + 0x1940);
    fVar26 = *(float *)(unaff_RBX + 0x1944);
    fVar22 = (float)unaff_RDI[0xf];
    fVar23 = (float)unaff_RDI[0x11];
    *(int32_t *)(unaff_RBP + -0x29) = *(int32_t *)(unaff_RBX + 0x1938);
    *(int32_t *)(unaff_RBP + -0x25) = uVar12;
    *(int32_t *)(unaff_RBP + -0x21) = uVar6;
    *(float *)(unaff_RBP + -0x1d) = fVar26;
    fVar25 = *(float *)(unaff_RBX + 0x1628);
    *(float *)(unaff_RBP + -0x55) = fVar22 + fVar23;
    *(float *)(unaff_RBP + -0x1d) = fVar26 * fVar25;
    *(float *)(unaff_RBP + -0x59) = (float)unaff_RDI[0xe] + (float)unaff_RDI[0x10];
    uVar12 = func_0x000180121e20(unaff_RBP + -0x29);
    param_1 = (float)FUN_180293f50(*(uint64_t *)(uVar16 + 0x2e8),unaff_RDI + 0xe,unaff_RBP + -0x59
                                   ,uVar12,0);
    unaff_RBX = _DAT_180c8a9b0;
  }
LAB_180137cc2:
  if ((*(char *)(unaff_RBP + -0x69) != '\0') && ((*(byte *)(unaff_RDI + 0x28) & 4) != 0)) {
    func_0x000180292160(*(uint64_t *)(uVar16 + 0x2e8),0);
    uVar12 = *(int32_t *)(unaff_RBX + 0x16ec);
    uVar6 = *(int32_t *)(unaff_RBX + 0x16f0);
    fVar22 = *(float *)(unaff_RBX + 0x16f4);
    *(int32_t *)(unaff_RBP + -0x29) = *(int32_t *)(unaff_RBX + 0x16e8);
    *(int32_t *)(unaff_RBP + -0x25) = uVar12;
    *(int32_t *)(unaff_RBP + -0x21) = uVar6;
    *(float *)(unaff_RBP + -0x1d) = fVar22;
    *(float *)(unaff_RBP + -0x1d) = fVar22 * *(float *)(unaff_RBX + 0x1628);
    if (bVar9) {
      pfVar1 = (float *)(lVar3 + 0x38);
      fVar8 = *pfVar1;
      uVar6 = *(int32_t *)(lVar3 + 0x3c);
      uVar12 = *(int32_t *)(lVar3 + 0x3c);
      fVar22 = (float)unaff_RDI[0xf];
      fVar21 = *pfVar1 + *(float *)(lVar3 + 0x40);
      fVar24 = *(float *)(lVar3 + 0x3c) + *(float *)(lVar3 + 0x44);
      fVar23 = (float)unaff_RDI[0xe];
      fVar25 = (float)unaff_RDI[0x11];
      fVar26 = (float)unaff_RDI[0x10];
      *(float *)(unaff_RBP + -0x49) = *pfVar1;
      *(int32_t *)(unaff_RBP + -0x45) = uVar12;
      *(float *)(unaff_RBP + -0x41) = fVar21;
      *(float *)(unaff_RBP + -0x3d) = fVar24;
      *(float *)(unaff_RBP + -0x59) = fVar8;
      *(int32_t *)(unaff_RBP + -0x55) = uVar6;
      *(float *)(unaff_RBP + -0x51) = fVar21;
      *(float *)(unaff_RBP + -0x4d) = fVar24;
      *(float *)(unaff_RBP + -0x59) = fVar23;
      *(float *)(unaff_RBP + -0x55) = fVar22;
      *(float *)(unaff_RBP + -0x51) = fVar23 + fVar26;
      *(float *)(unaff_RBP + -0x4d) = fVar22 + fVar25;
      *(float *)(unaff_RBP + -0x59) = fVar23;
      *(float *)(unaff_RBP + -0x55) = fVar22;
      *(float *)(unaff_RBP + -0x51) = fVar23 + fVar26;
      *(float *)(unaff_RBP + -0x4d) = fVar22 + fVar25;
      uVar12 = func_0x000180121e20(unaff_RBP + -0x29);
      FUN_180298890(*(uint64_t *)(uVar16 + 0x2e8),unaff_RBP + -0x59,unaff_RBP + -0x49,uVar12,0);
    }
    else {
      fVar22 = (float)unaff_RDI[0xf];
      fVar23 = (float)unaff_RDI[0x11];
      *(float *)(unaff_RBP + -0x59) = (float)unaff_RDI[0xe] + (float)unaff_RDI[0x10];
      *(float *)(unaff_RBP + -0x55) = fVar22 + fVar23;
      uVar12 = func_0x000180121e20(unaff_RBP + -0x29);
      FUN_180293f50(*(uint64_t *)(uVar16 + 0x2e8),unaff_RDI + 0xe,unaff_RBP + -0x59,uVar12,0);
    }
    param_1 = (float)FUN_180291f60(*(uint64_t *)(uVar16 + 0x2e8));
  }
  if ((uVar16 == 0) || ((int)unaff_RDI[8] < 1)) {
    *(byte *)((longlong)unaff_RDI + 0xa1) = *(byte *)((longlong)unaff_RDI + 0xa1) & 0xfd;
    *(byte *)(unaff_RDI + 0x28) = *(byte *)(unaff_RDI + 0x28) & 0xf7;
    unaff_RDI[0x27] = (int)unaff_R14;
    if (0 < (int)unaff_RDI[8]) {
      unaff_RDI[0x26] = *(int32_t *)(**(longlong **)(unaff_RDI + 10) + 8);
    }
  }
  else {
    FUN_180137f90(param_1,uVar16);
    if (*(int *)(*(longlong *)(unaff_RDI + 0xc) + 0x14) != 0) {
      unaff_RDI[0x26] = *(int *)(*(longlong *)(unaff_RDI + 0xc) + 0x14);
    }
  }
  if ((((uVar16 != 0) && ((*(byte *)(unaff_RDI + 0x28) & 4) != 0)) &&
      (*(longlong *)(unaff_RDI + 2) == 0)) &&
     ((*(longlong *)(unaff_R13 + 0x1b78) == 0 ||
      (*(ulonglong *)(*(longlong *)(unaff_R13 + 0x1b78) + 0x3a0) != uVar16)))) {
    FUN_18013baf0(uVar16);
  }
  unaff_RDI[0x23] = *(int32_t *)(unaff_R13 + 0x1a90);
  if (uVar16 != 0) {
    if (*(longlong *)(unaff_RDI + 4) != 0) {
      FUN_1801373f0();
    }
    if (*(longlong *)(unaff_RDI + 6) != 0) {
      FUN_1801373f0();
    }
    if (*(char *)(unaff_RBP + -0x68) != '\0') {
      FUN_18012cfe0();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -1) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



