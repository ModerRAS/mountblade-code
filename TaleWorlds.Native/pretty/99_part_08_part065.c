#include "TaleWorlds.Native.Split.h"

// 99_part_08_part065.c - 6 个函数

// 函数: void FUN_1805b4573(float param_1,uint64_t param_2,char param_3,uint64_t param_4,
void FUN_1805b4573(float param_1,uint64_t param_2,char param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,longlong param_8,
                  ulonglong param_9,uint64_t param_10,longlong param_11,uint64_t param_12,
                  uint64_t param_13,uint64_t param_14,uint64_t param_15)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t uVar4;
  char cVar5;
  char in_CL;
  int iVar6;
  uint64_t unaff_RBX;
  longlong unaff_RBP;
  int *piVar7;
  int iVar8;
  ulonglong unaff_RDI;
  longlong unaff_R12;
  int unaff_R13D;
  longlong unaff_R14;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  float extraout_XMM0_Da_11;
  float extraout_XMM0_Da_12;
  float extraout_XMM0_Da_13;
  float extraout_XMM0_Da_14;
  float extraout_XMM0_Da_15;
  float extraout_XMM0_Da_16;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int aiStackX_20 [2];
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  if ((in_CL == '\0') || (param_3 == '\0')) {
LAB_1805b52d7:
    bVar11 = false;
    if (param_3 == '\0') goto LAB_1805b50ac;
LAB_1805b52e7:
    aiStackX_20[0] = 0;
    cVar5 = FUN_18055f260(unaff_R12,aiStackX_20,&UNK_1809fac90);
    bVar11 = aiStackX_20[0] != 0;
    param_1 = extraout_XMM0_Da_16;
    if (cVar5 == '\0') goto LAB_1805b50ac;
    bVar9 = true;
  }
  else {
    if ((param_11 == 0) || (*(int *)(param_11 + 0x568) != 1)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    iVar8 = (int)unaff_RDI;
    aiStackX_20[0] = iVar8;
    cVar5 = FUN_18055f260(param_1,aiStackX_20);
    param_1 = extraout_XMM0_Da;
    if (aiStackX_20[0] == iVar8) {
      if (((((cVar5 == '\0') ||
            (cVar5 = FUN_180646700(extraout_XMM0_Da,&param_6), param_1 = extraout_XMM0_Da_10,
            cVar5 == '\0')) ||
           (cVar5 = FUN_180646700(extraout_XMM0_Da_10,(longlong)&param_6 + 4),
           param_1 = extraout_XMM0_Da_11, cVar5 == '\0')) ||
          ((cVar5 = FUN_180646700(extraout_XMM0_Da_11,&param_7), param_1 = extraout_XMM0_Da_12,
           cVar5 == '\0' ||
           (cVar5 = FUN_180646700(extraout_XMM0_Da_12,&param_11), param_1 = extraout_XMM0_Da_13,
           cVar5 == '\0')))) ||
         ((cVar5 = FUN_180646700(extraout_XMM0_Da_13,(longlong)&param_11 + 4),
          param_1 = extraout_XMM0_Da_14, cVar5 == '\0' ||
          (cVar5 = FUN_180646700(extraout_XMM0_Da_14,&param_12), param_1 = extraout_XMM0_Da_15,
          cVar5 == '\0')))) {
        param_3 = '\0';
      }
      else {
        param_3 = '\x01';
      }
      if ((!bVar11) &&
         (((*(int *)(unaff_R14 + 0x3c) < unaff_R13D ||
           ((unaff_R13D == *(int *)(unaff_R14 + 0x3c) &&
            (*(int *)(unaff_R14 + 0x40) < param_10._4_4_)))) && (param_3 != '\0')))) {
        if (-100.0 <= (float)param_7) {
          fVar14 = (float)param_7;
          if (2521.0 <= (float)param_7) {
            fVar14 = 2521.0;
          }
        }
        else {
          fVar14 = -100.0;
        }
        if (-100.0 <= param_6._4_4_) {
          fVar15 = param_6._4_4_;
          if (10385.0 <= param_6._4_4_) {
            fVar15 = 10385.0;
          }
        }
        else {
          fVar15 = -100.0;
        }
        fVar13 = -100.0;
        if ((-100.0 <= (float)param_6) && (fVar13 = (float)param_6, 10385.0 <= (float)param_6)) {
          fVar13 = 10385.0;
        }
        *(float *)(unaff_R14 + 0x5910) = (float)param_11;
        *(int32_t *)(unaff_R14 + 0x5914) = param_11._4_4_;
        *(int32_t *)(unaff_R14 + 0x5918) = (int32_t)param_12;
        *(int32_t *)(unaff_R14 + 0x591c) = param_12._4_4_;
        *(float *)(unaff_R14 + 0x5900) = fVar13;
        *(float *)(unaff_R14 + 0x5904) = fVar15;
        *(float *)(unaff_R14 + 0x5908) = fVar14;
        *(int32_t *)(unaff_R14 + 0x590c) = 0x7f7fffff;
        *(uint64_t *)(unaff_R14 + 0x5920) = 0;
        *(int *)(unaff_R14 + 0x5930) = iVar8;
        *(uint64_t *)(unaff_R14 + 0x5934) = 0xffffffffffffffff;
        param_1 = (float)param_11;
      }
      goto LAB_1805b52d7;
    }
    if ((((cVar5 != '\0') &&
         (cVar5 = FUN_180646700(extraout_XMM0_Da,&param_6,&UNK_1809facb0),
         param_1 = extraout_XMM0_Da_00, cVar5 != '\0')) &&
        (cVar5 = FUN_180646700(extraout_XMM0_Da_00,(longlong)&param_6 + 4,&UNK_1809facb0),
        param_1 = extraout_XMM0_Da_01, cVar5 != '\0')) &&
       (((cVar5 = FUN_180646700(extraout_XMM0_Da_01,&param_7,&UNK_1809facc0),
         param_1 = extraout_XMM0_Da_02, cVar5 != '\0' &&
         (_fStack0000000000000048 = unaff_RDI,
         cVar5 = FUN_180646700(extraout_XMM0_Da_02,&stack0x00000048,&UNK_1809facd0),
         param_1 = extraout_XMM0_Da_03, cVar5 != '\0')) &&
        (cVar5 = FUN_180646700(extraout_XMM0_Da_03,(longlong)&stack0x00000048 + 4,&UNK_1809facd0),
        param_1 = extraout_XMM0_Da_04, cVar5 != '\0')))) {
      bVar9 = true;
      piVar7 = (int *)&param_14;
      do {
        iVar8 = (int)unaff_RDI;
        if (9 < iVar8) {
          if (bVar9) {
            aiStackX_20[0] = 0;
            cVar5 = FUN_18055f260(param_1,aiStackX_20,&UNK_1809fac90);
            unaff_R12 = param_8;
            bVar9 = aiStackX_20[0] != 0;
            param_1 = extraout_XMM0_Da_07;
            if (cVar5 != '\0') {
              aiStackX_20[0] = 0;
              cVar5 = FUN_18055f260(param_8,aiStackX_20,&UNK_1809fac90);
              bVar10 = aiStackX_20[0] != 0;
              param_1 = extraout_XMM0_Da_08;
              if (cVar5 != '\0') {
                aiStackX_20[0] = -1;
                if ((bVar10) && (cVar5 = FUN_18055f260(unaff_R12,aiStackX_20), cVar5 == '\0')) {
                  param_3 = '\0';
                  param_1 = extraout_XMM0_Da_09;
                  goto LAB_1805b52d7;
                }
                iVar8 = aiStackX_20[0];
                if ((unaff_R13D <= *(int *)(unaff_R14 + 0x3c)) &&
                   ((unaff_R13D != *(int *)(unaff_R14 + 0x3c) ||
                    (param_10._4_4_ <= *(int *)(unaff_R14 + 0x40))))) goto LAB_1805b52e7;
                fVar14 = (float)param_6 * (float)param_6 + param_6._4_4_ * param_6._4_4_ +
                         (float)param_7 * (float)param_7;
                if ((fVar14 <= 0.999) || (1.001 <= fVar14)) {
                  if (fVar14 <= 1e-09) {
                    param_6._4_4_ = 1.0;
                    param_6._0_4_ = 0.0;
                    param_7._0_4_ = 0.0;
                  }
                  else {
                    fVar14 = 1.0 / SQRT(fVar14);
                    param_6._4_4_ = param_6._4_4_ * fVar14;
                    param_7._0_4_ = (float)param_7 * fVar14;
                    param_6._0_4_ = (float)param_6 * fVar14;
                  }
                }
                param_1 = fStack0000000000000048 * fStack0000000000000048;
                fVar14 = fStack000000000000004c * fStack000000000000004c + param_1;
                if (1.0 < fVar14) {
                  param_1 = SQRT(fVar14);
                  _fStack0000000000000048 =
                       CONCAT44(fStack000000000000004c * (1.0 / param_1),
                                fStack0000000000000048 * (1.0 / param_1));
                }
                lVar3 = CONCAT44(param_11._4_4_,(float)param_11);
                if (bVar11) {
                  uVar4 = *(uint64_t *)(*(longlong *)(lVar3 + 0x20) + 0x14);
                  *(uint64_t *)(unaff_R14 + 0x5900) =
                       *(uint64_t *)(*(longlong *)(lVar3 + 0x20) + 0xc);
                  *(uint64_t *)(unaff_R14 + 0x5908) = uVar4;
                  fVar14 = *(float *)(unaff_R14 + 0x5908);
                  if (-100.0 <= fVar14) {
                    if (2521.0 <= fVar14) {
                      fVar14 = 2521.0;
                    }
                  }
                  else {
                    fVar14 = -100.0;
                  }
                  fVar15 = *(float *)(unaff_R14 + 0x5904);
                  if (-100.0 <= fVar15) {
                    if (10385.0 <= fVar15) {
                      fVar15 = 10385.0;
                    }
                  }
                  else {
                    fVar15 = -100.0;
                  }
                  fVar13 = *(float *)(unaff_R14 + 0x5900);
                  fVar12 = -100.0;
                  if ((-100.0 <= fVar13) && (fVar12 = fVar13, 10385.0 <= fVar13)) {
                    fVar12 = 10385.0;
                  }
                  *(float *)(unaff_R14 + 0x5900) = fVar12;
                  *(float *)(unaff_R14 + 0x5904) = fVar15;
                  *(float *)(unaff_R14 + 0x5908) = fVar14;
                  *(int32_t *)(unaff_R14 + 0x590c) = 0x7f7fffff;
                  *(uint64_t *)(unaff_R14 + 0x5920) =
                       *(uint64_t *)(*(longlong *)(lVar3 + 0x20) + 0x1c);
                  fVar14 = *(float *)(unaff_R14 + 0x5920);
                  fVar15 = -12.25;
                  if ((-12.25 <= fVar14) && (fVar15 = fVar14, 12.248505 <= fVar14)) {
                    fVar15 = 12.248505;
                  }
                  param_1 = *(float *)(unaff_R14 + 0x5924);
                  *(float *)(unaff_R14 + 0x5920) = fVar15;
                  fVar14 = -26.7;
                  if ((-26.7 <= param_1) && (fVar14 = param_1, 80.09756 <= param_1)) {
                    param_1 = 80.09756;
                    fVar14 = param_1;
                  }
                  *(float *)(unaff_R14 + 0x5924) = fVar14;
                  *(int32_t *)(unaff_R14 + 0x5930) =
                       *(int32_t *)(*(longlong *)(lVar3 + 0x20) + 0x34);
                  *(ulonglong *)(unaff_R14 + 0x5910) = CONCAT44(param_6._4_4_,(float)param_6);
                  *(ulonglong *)(unaff_R14 + 0x5918) = CONCAT44(param_7._4_4_,(float)param_7);
                  *(int32_t *)(unaff_R14 + 0x5934) = *(int32_t *)(lVar3 + 0x200);
                  *(int32_t *)(unaff_R14 + 0x5938) = *(int32_t *)(lVar3 + 0x204);
                }
                param_3 = '\x01';
                if (lVar3 == 0) goto LAB_1805b52d7;
                uVar1 = *(uint *)(*(longlong *)(unaff_R14 + 0x58f8) + 0x20);
                *(ulonglong *)(lVar3 + 0x49c) = CONCAT44(param_6._4_4_,(float)param_6);
                *(ulonglong *)(lVar3 + 0x4a4) = CONCAT44(param_7._4_4_,(float)param_7);
                param_1 = (float)atan2f(-(float)param_6,param_6._4_4_);
                *(float *)(lVar3 + 0x4ac) = param_1;
                *(int32_t *)(lVar3 + 0x4b0) = 0;
                *(ulonglong *)(lVar3 + 0x4cc) = _fStack0000000000000048;
                *(bool *)(lVar3 + 0x4d4) = bVar9;
                *(uint *)(lVar3 + 0x4c4) = *(uint *)(lVar3 + 0x4c4) | uVar1;
                *(int *)(lVar3 + 0x4c0) = iVar8;
                if (*(int *)(unaff_R14 + 0x3c) < (int)param_14) {
                  lVar2 = *(longlong *)(lVar3 + 0x8e0);
                  iVar8 = *(int *)(lVar2 + 0x30);
                  if ((iVar8 == 0) ||
                     (*(int *)(lVar2 + 8 +
                              (longlong)((*(int *)(lVar2 + 0x34) + -1 + iVar8) % 10) * 4) !=
                      *(int *)(unaff_RBP + -0x68))) {
                    *(int *)(lVar2 + 8 + (longlong)((*(int *)(lVar2 + 0x34) + iVar8) % 10) * 4) =
                         *(int *)(unaff_RBP + -0x68);
                    if (*(int *)(lVar2 + 0x30) < 10) {
                      *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
                    }
                    else {
                      *(int *)(lVar2 + 0x34) = (*(int *)(lVar2 + 0x34) + 1) % 10;
                    }
                  }
                }
                if (*(int *)(unaff_R14 + 0x3c) < param_14._4_4_) {
                  lVar2 = *(longlong *)(lVar3 + 0x8e0);
                  iVar8 = *(int *)(lVar2 + 0x30);
                  if ((iVar8 == 0) ||
                     (*(int *)(lVar2 + 8 +
                              (longlong)((*(int *)(lVar2 + 0x34) + -1 + iVar8) % 10) * 4) !=
                      *(int *)(unaff_RBP + -100))) {
                    *(int *)(lVar2 + 8 + (longlong)((*(int *)(lVar2 + 0x34) + iVar8) % 10) * 4) =
                         *(int *)(unaff_RBP + -100);
                    if (*(int *)(lVar2 + 0x30) < 10) {
                      *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
                    }
                    else {
                      *(int *)(lVar2 + 0x34) = (*(int *)(lVar2 + 0x34) + 1) % 10;
                    }
                  }
                }
                if (*(int *)(unaff_R14 + 0x3c) < (int)param_15) {
                  lVar2 = *(longlong *)(lVar3 + 0x8e0);
                  iVar8 = *(int *)(lVar2 + 0x30);
                  if ((iVar8 == 0) ||
                     (*(int *)(lVar2 + 8 +
                              (longlong)((*(int *)(lVar2 + 0x34) + -1 + iVar8) % 10) * 4) !=
                      *(int *)(unaff_RBP + -0x60))) {
                    *(int *)(lVar2 + 8 + (longlong)((*(int *)(lVar2 + 0x34) + iVar8) % 10) * 4) =
                         *(int *)(unaff_RBP + -0x60);
                    if (*(int *)(lVar2 + 0x30) < 10) {
                      *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
                    }
                    else {
                      *(int *)(lVar2 + 0x34) = (*(int *)(lVar2 + 0x34) + 1) % 10;
                    }
                  }
                }
                if (*(int *)(unaff_R14 + 0x3c) < param_15._4_4_) {
                  lVar2 = *(longlong *)(lVar3 + 0x8e0);
                  iVar8 = *(int *)(lVar2 + 0x30);
                  if ((iVar8 == 0) ||
                     (*(int *)(lVar2 + 8 +
                              (longlong)((*(int *)(lVar2 + 0x34) + -1 + iVar8) % 10) * 4) !=
                      *(int *)(unaff_RBP + -0x5c))) {
                    *(int *)(lVar2 + 8 + (longlong)((*(int *)(lVar2 + 0x34) + iVar8) % 10) * 4) =
                         *(int *)(unaff_RBP + -0x5c);
                    if (*(int *)(lVar2 + 0x30) < 10) {
                      *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
                    }
                    else {
                      *(int *)(lVar2 + 0x34) = (*(int *)(lVar2 + 0x34) + 1) % 10;
                    }
                  }
                }
                if (*(int *)(unaff_R14 + 0x3c) < *(int *)(unaff_RBP + -0x80)) {
                  lVar2 = *(longlong *)(lVar3 + 0x8e0);
                  iVar8 = *(int *)(lVar2 + 0x30);
                  if ((iVar8 == 0) ||
                     (*(int *)(lVar2 + 8 +
                              (longlong)((*(int *)(lVar2 + 0x34) + -1 + iVar8) % 10) * 4) !=
                      *(int *)(unaff_RBP + -0x58))) {
                    *(int *)(lVar2 + 8 + (longlong)((*(int *)(lVar2 + 0x34) + iVar8) % 10) * 4) =
                         *(int *)(unaff_RBP + -0x58);
                    if (*(int *)(lVar2 + 0x30) < 10) {
                      *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
                    }
                    else {
                      *(int *)(lVar2 + 0x34) = (*(int *)(lVar2 + 0x34) + 1) % 10;
                    }
                  }
                }
                if (*(int *)(unaff_R14 + 0x3c) < *(int *)(unaff_RBP + -0x7c)) {
                  lVar2 = *(longlong *)(lVar3 + 0x8e0);
                  iVar8 = *(int *)(lVar2 + 0x30);
                  if ((iVar8 == 0) ||
                     (*(int *)(lVar2 + 8 +
                              (longlong)((*(int *)(lVar2 + 0x34) + -1 + iVar8) % 10) * 4) !=
                      *(int *)(unaff_RBP + -0x54))) {
                    *(int *)(lVar2 + 8 + (longlong)((*(int *)(lVar2 + 0x34) + iVar8) % 10) * 4) =
                         *(int *)(unaff_RBP + -0x54);
                    if (*(int *)(lVar2 + 0x30) < 10) {
                      *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
                    }
                    else {
                      *(int *)(lVar2 + 0x34) = (*(int *)(lVar2 + 0x34) + 1) % 10;
                    }
                  }
                }
                if (*(int *)(unaff_R14 + 0x3c) < *(int *)(unaff_RBP + -0x78)) {
                  lVar2 = *(longlong *)(lVar3 + 0x8e0);
                  iVar8 = *(int *)(lVar2 + 0x30);
                  if ((iVar8 == 0) ||
                     (*(int *)(lVar2 + 8 +
                              (longlong)((*(int *)(lVar2 + 0x34) + -1 + iVar8) % 10) * 4) !=
                      *(int *)(unaff_RBP + -0x50))) {
                    *(int *)(lVar2 + 8 + (longlong)((*(int *)(lVar2 + 0x34) + iVar8) % 10) * 4) =
                         *(int *)(unaff_RBP + -0x50);
                    if (*(int *)(lVar2 + 0x30) < 10) {
                      *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
                    }
                    else {
                      *(int *)(lVar2 + 0x34) = (*(int *)(lVar2 + 0x34) + 1) % 10;
                    }
                  }
                }
                if (*(int *)(unaff_R14 + 0x3c) < *(int *)(unaff_RBP + -0x74)) {
                  lVar2 = *(longlong *)(lVar3 + 0x8e0);
                  iVar8 = *(int *)(lVar2 + 0x30);
                  if ((iVar8 == 0) ||
                     (*(int *)(lVar2 + 8 +
                              (longlong)((*(int *)(lVar2 + 0x34) + -1 + iVar8) % 10) * 4) !=
                      *(int *)(unaff_RBP + -0x4c))) {
                    *(int *)(lVar2 + 8 + (longlong)((*(int *)(lVar2 + 0x34) + iVar8) % 10) * 4) =
                         *(int *)(unaff_RBP + -0x4c);
                    if (*(int *)(lVar2 + 0x30) < 10) {
                      *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
                    }
                    else {
                      *(int *)(lVar2 + 0x34) = (*(int *)(lVar2 + 0x34) + 1) % 10;
                    }
                  }
                }
                if (*(int *)(unaff_R14 + 0x3c) < *(int *)(unaff_RBP + -0x70)) {
                  lVar2 = *(longlong *)(lVar3 + 0x8e0);
                  iVar8 = *(int *)(lVar2 + 0x30);
                  if ((iVar8 == 0) ||
                     (*(int *)(lVar2 + 8 +
                              (longlong)((*(int *)(lVar2 + 0x34) + -1 + iVar8) % 10) * 4) !=
                      *(int *)(unaff_RBP + -0x48))) {
                    *(int *)(lVar2 + 8 + (longlong)((*(int *)(lVar2 + 0x34) + iVar8) % 10) * 4) =
                         *(int *)(unaff_RBP + -0x48);
                    if (*(int *)(lVar2 + 0x30) < 10) {
                      *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
                    }
                    else {
                      *(int *)(lVar2 + 0x34) = (*(int *)(lVar2 + 0x34) + 1) % 10;
                    }
                  }
                }
                param_3 = '\x01';
                unaff_R12 = param_8;
                if (*(int *)(unaff_RBP + -0x6c) <= *(int *)(unaff_R14 + 0x3c)) goto LAB_1805b52d7;
                lVar3 = *(longlong *)(lVar3 + 0x8e0);
                iVar8 = *(int *)(lVar3 + 0x30);
                if ((iVar8 != 0) &&
                   (*(int *)(lVar3 + 8 + (longlong)((*(int *)(lVar3 + 0x34) + -1 + iVar8) % 10) * 4)
                    == *(int *)(unaff_RBP + -0x44))) goto LAB_1805b52d7;
                *(int *)(lVar3 + 8 + (longlong)((*(int *)(lVar3 + 0x34) + iVar8) % 10) * 4) =
                     *(int *)(unaff_RBP + -0x44);
                if (*(int *)(lVar3 + 0x30) < 10) {
                  param_3 = '\x01';
                  *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
                  goto LAB_1805b52d7;
                }
                *(int *)(lVar3 + 0x34) = (*(int *)(lVar3 + 0x34) + 1) % 10;
                goto LAB_1805b52e7;
              }
            }
          }
          break;
        }
        if ((bVar9) &&
           (cVar5 = FUN_180646500(param_1,unaff_RBP + -0x68 + (longlong)iVar8 * 4,&UNK_1809face0),
           param_1 = extraout_XMM0_Da_05, cVar5 != '\0')) {
          aiStackX_20[0] = 0;
          cVar5 = FUN_180646a60(extraout_XMM0_Da_05,*(int32_t *)(unaff_R14 + 0x3c),aiStackX_20);
          param_1 = extraout_XMM0_Da_06;
          iVar6 = aiStackX_20[0];
          if (cVar5 == '\0') goto LAB_1805b46ce;
          bVar9 = true;
        }
        else {
          iVar6 = 0;
LAB_1805b46ce:
          bVar9 = false;
        }
        *piVar7 = iVar6;
        unaff_RDI = (ulonglong)(iVar8 + 1);
        piVar7 = piVar7 + 1;
      } while (bVar9);
    }
    bVar11 = false;
LAB_1805b50ac:
    bVar9 = false;
  }
  if (bVar9) {
    if (bVar11) {
      cVar5 = FUN_1805b6170(param_1,unaff_R12);
      if (cVar5 == '\0') {
        bVar9 = false;
        goto LAB_1805b5113;
      }
      bVar9 = true;
    }
    if ((*(int *)(unaff_R14 + 0x3c) < unaff_R13D) ||
       ((unaff_R13D == *(int *)(unaff_R14 + 0x3c) && (*(int *)(unaff_R14 + 0x40) < param_10._4_4_)))
       ) {
      *(uint64_t *)(unaff_R14 + 0x5928) = param_13;
      *(uint64_t *)(unaff_R14 + 0x3c) = unaff_RBX;
    }
  }
LAB_1805b5113:
  FUN_1805b3da0();
  if (bVar9) {
    *(uint64_t *)(unaff_R14 + 0x20) = *(uint64_t *)(unaff_R12 + 0x5a8);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x40) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1805b50d4(char param_1)
void FUN_1805b50d4(char param_1)

{
  char cVar1;
  uint64_t unaff_RBX;
  longlong unaff_RBP;
  char unaff_DIL;
  longlong unaff_R12;
  int unaff_R13D;
  longlong unaff_R14;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000068;
  
  if (param_1 != '\0') {
    cVar1 = FUN_1805b6170();
    if (cVar1 == '\0') {
      unaff_DIL = '\0';
      goto LAB_1805b5113;
    }
    unaff_DIL = '\x01';
  }
  if ((*(int *)(unaff_R14 + 0x3c) < unaff_R13D) ||
     ((unaff_R13D == *(int *)(unaff_R14 + 0x3c) &&
      (*(int *)(unaff_R14 + 0x40) < in_stack_00000050._4_4_)))) {
    *(uint64_t *)(unaff_R14 + 0x5928) = in_stack_00000068;
    *(uint64_t *)(unaff_R14 + 0x3c) = unaff_RBX;
  }
LAB_1805b5113:
  FUN_1805b3da0();
  if (unaff_DIL != '\0') {
    *(uint64_t *)(unaff_R14 + 0x20) = *(uint64_t *)(unaff_R12 + 0x5a8);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x40) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1805b5128(void)
void FUN_1805b5128(void)

{
  longlong unaff_RBP;
  longlong unaff_R12;
  longlong unaff_R14;
  
  *(uint64_t *)(unaff_R14 + 0x20) = *(uint64_t *)(unaff_R12 + 0x5a8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x40) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1805b5140(void)
void FUN_1805b5140(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x40) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1805b515a(int32_t param_1)
void FUN_1805b515a(int32_t param_1)

{
  bool bVar1;
  char in_AL;
  char cVar2;
  uint64_t unaff_RBX;
  longlong unaff_RBP;
  int32_t unaff_EDI;
  longlong unaff_R12;
  int unaff_R13D;
  longlong unaff_R14;
  char unaff_R15B;
  bool bVar3;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  float fVar4;
  float fVar5;
  int aiStackX_20 [2];
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  uint64_t in_stack_00000050;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  uint64_t in_stack_00000068;
  
  if (in_AL == '\0') {
LAB_1805b51f7:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_180646700(param_1,&stack0x00000030);
    param_1 = extraout_XMM0_Da;
    if (cVar2 == '\0') goto LAB_1805b51f7;
    cVar2 = FUN_180646700(extraout_XMM0_Da,(longlong)&stack0x00000030 + 4);
    param_1 = extraout_XMM0_Da_00;
    if (cVar2 == '\0') goto LAB_1805b51f7;
    cVar2 = FUN_180646700(extraout_XMM0_Da_00,&stack0x00000038);
    param_1 = extraout_XMM0_Da_01;
    if (cVar2 == '\0') goto LAB_1805b51f7;
    cVar2 = FUN_180646700(extraout_XMM0_Da_01,&stack0x00000058);
    param_1 = extraout_XMM0_Da_02;
    if (cVar2 == '\0') goto LAB_1805b51f7;
    cVar2 = FUN_180646700(extraout_XMM0_Da_02,(longlong)&stack0x00000058 + 4);
    param_1 = extraout_XMM0_Da_03;
    if (cVar2 == '\0') goto LAB_1805b51f7;
    cVar2 = FUN_180646700(extraout_XMM0_Da_03,&stack0x00000060);
    param_1 = extraout_XMM0_Da_04;
    if (cVar2 == '\0') goto LAB_1805b51f7;
    bVar1 = true;
  }
  if ((unaff_R15B == '\0') &&
     (((*(int *)(unaff_R14 + 0x3c) < unaff_R13D ||
       ((unaff_R13D == *(int *)(unaff_R14 + 0x3c) &&
        (*(int *)(unaff_R14 + 0x40) < in_stack_00000050._4_4_)))) && (bVar1)))) {
    if (-100.0 <= in_stack_00000038) {
      fVar5 = in_stack_00000038;
      if (2521.0 <= in_stack_00000038) {
        fVar5 = 2521.0;
      }
    }
    else {
      fVar5 = -100.0;
    }
    if (-100.0 <= fStack0000000000000034) {
      if (10385.0 <= fStack0000000000000034) {
        fStack0000000000000034 = 10385.0;
      }
    }
    else {
      fStack0000000000000034 = -100.0;
    }
    fVar4 = -100.0;
    if ((-100.0 <= fStack0000000000000030) &&
       (fVar4 = fStack0000000000000030, 10385.0 <= fStack0000000000000030)) {
      fVar4 = 10385.0;
    }
    *(int32_t *)(unaff_R14 + 0x5910) = uStack0000000000000058;
    *(int32_t *)(unaff_R14 + 0x5914) = uStack000000000000005c;
    *(int32_t *)(unaff_R14 + 0x5918) = uStack0000000000000060;
    *(int32_t *)(unaff_R14 + 0x591c) = uStack0000000000000064;
    *(float *)(unaff_R14 + 0x5900) = fVar4;
    *(float *)(unaff_R14 + 0x5904) = fStack0000000000000034;
    *(float *)(unaff_R14 + 0x5908) = fVar5;
    *(int32_t *)(unaff_R14 + 0x590c) = 0x7f7fffff;
    *(uint64_t *)(unaff_R14 + 0x5920) = 0;
    *(int32_t *)(unaff_R14 + 0x5930) = unaff_EDI;
    *(uint64_t *)(unaff_R14 + 0x5934) = 0xffffffffffffffff;
    param_1 = uStack0000000000000058;
  }
  bVar3 = false;
  if (bVar1) {
    aiStackX_20[0] = 0;
    cVar2 = FUN_18055f260(param_1,aiStackX_20,&UNK_1809fac90);
    bVar3 = aiStackX_20[0] != 0;
    if (cVar2 == '\0') goto LAB_1805b50ac;
    bVar1 = true;
  }
  else {
LAB_1805b50ac:
    bVar1 = false;
  }
  if (bVar1) {
    if (bVar3) {
      cVar2 = FUN_1805b6170();
      if (cVar2 == '\0') {
        bVar1 = false;
        goto LAB_1805b5113;
      }
      bVar1 = true;
    }
    if ((*(int *)(unaff_R14 + 0x3c) < unaff_R13D) ||
       ((unaff_R13D == *(int *)(unaff_R14 + 0x3c) &&
        (*(int *)(unaff_R14 + 0x40) < in_stack_00000050._4_4_)))) {
      *(uint64_t *)(unaff_R14 + 0x5928) = in_stack_00000068;
      *(uint64_t *)(unaff_R14 + 0x3c) = unaff_RBX;
    }
  }
LAB_1805b5113:
  FUN_1805b3da0();
  if (bVar1) {
    *(uint64_t *)(unaff_R14 + 0x20) = *(uint64_t *)(unaff_R12 + 0x5a8);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x40) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Removing unreachable block (ram,0x0001805b5128)




// 函数: void FUN_1805b531b(void)
void FUN_1805b531b(void)

{
  longlong unaff_RBP;
  
  FUN_1805b3da0();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x40) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




