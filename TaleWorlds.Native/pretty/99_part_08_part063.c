#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part063.c - 1 个函数

// 函数: void FUN_1805b41ef(int64_t param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4,
void FUN_1805b41ef(int64_t param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,int64_t param_8,
                  int64_t param_9,uint64_t param_10,int64_t param_11,uint64_t param_12,
                  uint64_t param_13,uint64_t param_14,uint64_t param_15)

{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int iVar6;
  uint64_t uVar7;
  char cVar8;
  int in_EAX;
  int64_t lVar9;
  uint uVar10;
  int64_t lVar11;
  int32_t *unaff_RBX;
  int64_t unaff_RBP;
  uint *puVar12;
  int iVar13;
  int64_t unaff_R12;
  int64_t unaff_R14;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar17;
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
  float extraout_XMM0_Da_17;
  float extraout_XMM0_Da_18;
  float extraout_XMM0_Da_19;
  float extraout_XMM0_Da_20;
  float extraout_XMM0_Da_21;
  float extraout_XMM0_Da_22;
  float extraout_XMM0_Da_23;
  float fVar18;
  float fVar19;
  float fVar20;
  uint auStackX_20 [2];
  int32_t in_stack_000000d0;
  int32_t in_stack_000000d8;
  int32_t in_stack_000000e0;
  int32_t in_stack_000000e8;
  
  if ((in_EAX == 0) && (*(short *)(param_1 + 0x14) == 0)) {
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *(int32_t *)(param_1 + 4) = *param_3;
    *(int32_t *)(param_1 + 8) = uVar2;
    *(int32_t *)(param_1 + 0xc) = uVar3;
    *(int32_t *)(param_1 + 0x10) = uVar4;
    *(uint64_t *)(param_1 + 0x14) = *(uint64_t *)(param_3 + 4);
    in_EAX = *(int *)(param_1 + 0x18);
  }
  if ((in_EAX != param_3[5]) || (*(short *)(param_1 + 0x14) != *(short *)(param_3 + 4))) {
    FUN_180062340(system_message_context,2);
    uVar2 = unaff_RBX[1];
    uVar3 = unaff_RBX[2];
    uVar4 = unaff_RBX[3];
    *(int32_t *)(unaff_R14 + 4) = *unaff_RBX;
    *(int32_t *)(unaff_R14 + 8) = uVar2;
    *(int32_t *)(unaff_R14 + 0xc) = uVar3;
    *(int32_t *)(unaff_R14 + 0x10) = uVar4;
    *(uint64_t *)(unaff_R14 + 0x14) = *(uint64_t *)(unaff_RBX + 4);
  }
  if (((*(int64_t *)(unaff_R14 + 0x58f8) == 0) || (system_system_config == 0)) ||
     (iVar13 = *(int *)(*(int64_t *)(unaff_R14 + 0x58f8) + 0x18), iVar13 < 0)) {
    param_11 = 0;
  }
  else {
    param_11 = system_system_config + 0x30a0 + (int64_t)iVar13 * 0xa60;
  }
  param_10 = 0;
  cVar8 = FUN_180646b50();
  uVar7 = param_10;
  *(uint64_t *)(unaff_R12 + 0x5a0) = param_10;
  fVar17 = extraout_XMM0_Da;
  if ((cVar8 == '\0') || (cVar8 = FUN_1805f9ee0(), fVar17 = extraout_XMM0_Da_00, cVar8 == '\0')) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  bVar15 = false;
  if (!bVar14) goto LAB_1805b4456;
LAB_1805b42f8:
  if ((*(int *)(unaff_R14 + 0x4b94) < *(int *)(unaff_R14 + 0x4b88)) &&
     (lVar11 = *(int64_t *)
                (unaff_R14 + 0x80 + (int64_t)(*(int *)(unaff_R14 + 0x4b94) % 0x960) * 8),
     lVar11 != 0)) {
    bVar15 = true;
    *(int32_t *)(lVar11 + 0x5c4) = 0;
    bVar14 = true;
LAB_1805b4350:
    if (*(int *)(lVar11 + 0x5c8) <= *(int *)(lVar11 + 0x5c4)) goto LAB_1805b4445;
    if (bVar14) {
      auStackX_20[0] = 0;
      cVar8 = SystemSynchronizationProcessor(lVar11);
      if (cVar8 == '\0') goto LAB_1805b4442;
      if (auStackX_20[0] != 0) {
        system_system_config = lVar11;
        cVar8 = (**(code **)(system_system_data_config + 0x140))
                          (*(int32_t *)(*(int64_t *)(unaff_R14 + 0x58f8) + 0x4c));
        bVar14 = cVar8 != '\0';
        system_system_config = 0;
LAB_1805b441a:
        if (!bVar14) goto LAB_1805b4445;
        goto LAB_1805b4350;
      }
      auStackX_20[0] = 0xffff;
      cVar8 = SystemSynchronizationProcessor(lVar11);
      bVar14 = cVar8 != '\0';
      if (3 < (ushort)auStackX_20[0]) goto LAB_1805b4442;
      lVar9 = (uint64_t)(auStackX_20[0] & 0xffff) * 0x10;
      if ((*(int64_t *)(&system_data_2c98 + lVar9) == 0) &&
         (*(int64_t *)(&system_data_2ca0 + lVar9) == 0)) goto LAB_1805b441a;
      if ((bVar14) && (cVar8 = (**(code **)(&system_data_2ca0 + lVar9))(), cVar8 != '\0')) {
        bVar14 = true;
        goto LAB_1805b4350;
      }
    }
LAB_1805b4442:
    bVar14 = false;
    goto LAB_1805b4445;
  }
  bVar15 = false;
  goto LAB_1805b44ee;
LAB_1805b4445:
  fVar17 = (float)FUN_1805fa2d0();
  if (bVar14) {
LAB_1805b44ee:
    bVar14 = true;
  }
  else {
LAB_1805b4456:
    bVar14 = false;
  }
  if ((!bVar15) || (!bVar14)) goto LAB_1805b4465;
  goto LAB_1805b42f8;
LAB_1805b4465:
  iVar13 = 0;
  param_13 = 0;
  *(int *)(unaff_R14 + 0x5980) = *(int *)(unaff_R14 + 0x4b84) + -1;
  if ((bVar14) && (cVar8 = FUN_180646610(), fVar17 = extraout_XMM0_Da_01, cVar8 != '\0')) {
    param_9 = 0;
    auStackX_20[0] = 0;
    cVar8 = SystemSynchronizationProcessor();
    fVar17 = extraout_XMM0_Da_02;
    if (auStackX_20[0] == 0) {
      auStackX_20[0] = 0;
      if ((cVar8 == '\0') || (cVar8 = SystemSynchronizationProcessor(), fVar17 = extraout_XMM0_Da_04, cVar8 == '\0'))
      {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      lVar11 = (int64_t)(int)auStackX_20[0] * 100;
      if (!bVar14) goto LAB_1805b453b;
    }
    else if ((cVar8 == '\0') ||
            (cVar8 = FUN_180646610(), lVar11 = param_9, fVar17 = extraout_XMM0_Da_03, cVar8 == '\0')
            ) goto LAB_1805b453b;
    bVar14 = true;
    if (lVar11 < *(int64_t *)(unaff_R14 + 0x28)) {
      lVar11 = *(int64_t *)(unaff_R14 + 0x28);
    }
    *(int64_t *)(unaff_R14 + 0x28) = lVar11;
  }
  else {
LAB_1805b453b:
    bVar14 = false;
  }
  bVar15 = false;
  if (bVar14) {
    auStackX_20[0] = 0;
    cVar8 = SystemSynchronizationProcessor(fVar17,auStackX_20);
    bVar15 = auStackX_20[0] != 0;
    fVar17 = extraout_XMM0_Da_05;
    if (cVar8 == '\0') goto LAB_1805b456b;
    bVar14 = true;
  }
  else {
LAB_1805b456b:
    bVar14 = false;
  }
  iVar6 = (int)param_10;
  if ((bVar15) && (bVar14)) {
    if ((param_11 == 0) || (*(int *)(param_11 + 0x568) != 1)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    auStackX_20[0] = 0;
    cVar8 = SystemSynchronizationProcessor(fVar17,auStackX_20);
    fVar17 = extraout_XMM0_Da_06;
    if (auStackX_20[0] == 0) {
      if (((((cVar8 == '\0') ||
            (cVar8 = FUN_180646700(extraout_XMM0_Da_06,&param_6), fVar17 = extraout_XMM0_Da_17,
            cVar8 == '\0')) ||
           (cVar8 = FUN_180646700(extraout_XMM0_Da_17,(int64_t)&param_6 + 4),
           fVar17 = extraout_XMM0_Da_18, cVar8 == '\0')) ||
          ((cVar8 = FUN_180646700(extraout_XMM0_Da_18,&param_7), fVar17 = extraout_XMM0_Da_19,
           cVar8 == '\0' ||
           (cVar8 = FUN_180646700(extraout_XMM0_Da_19,&param_11), fVar17 = extraout_XMM0_Da_20,
           cVar8 == '\0')))) ||
         ((cVar8 = FUN_180646700(extraout_XMM0_Da_20,(int64_t)&param_11 + 4),
          fVar17 = extraout_XMM0_Da_21, cVar8 == '\0' ||
          (cVar8 = FUN_180646700(extraout_XMM0_Da_21,&param_12), fVar17 = extraout_XMM0_Da_22,
          cVar8 == '\0')))) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if ((!bVar15) &&
         (((*(int *)(unaff_R14 + 0x3c) < iVar6 ||
           ((iVar6 == *(int *)(unaff_R14 + 0x3c) && (*(int *)(unaff_R14 + 0x40) < param_10._4_4_))))
          && (bVar14)))) {
        if (-100.0 <= (float)param_7) {
          fVar17 = (float)param_7;
          if (2521.0 <= (float)param_7) {
            fVar17 = 2521.0;
          }
        }
        else {
          fVar17 = -100.0;
        }
        if (-100.0 <= param_6._4_4_) {
          fVar18 = param_6._4_4_;
          if (10385.0 <= param_6._4_4_) {
            fVar18 = 10385.0;
          }
        }
        else {
          fVar18 = -100.0;
        }
        fVar20 = -100.0;
        if ((-100.0 <= (float)param_6) && (fVar20 = (float)param_6, 10385.0 <= (float)param_6)) {
          fVar20 = 10385.0;
        }
        *(float *)(unaff_R14 + 0x5910) = (float)param_11;
        *(int32_t *)(unaff_R14 + 0x5914) = param_11._4_4_;
        *(int32_t *)(unaff_R14 + 0x5918) = (int32_t)param_12;
        *(int32_t *)(unaff_R14 + 0x591c) = param_12._4_4_;
        *(float *)(unaff_R14 + 0x5900) = fVar20;
        *(float *)(unaff_R14 + 0x5904) = fVar18;
        *(float *)(unaff_R14 + 0x5908) = fVar17;
        *(int32_t *)(unaff_R14 + 0x590c) = 0x7f7fffff;
        *(uint64_t *)(unaff_R14 + 0x5920) = 0;
        *(int32_t *)(unaff_R14 + 0x5930) = 0;
        *(uint64_t *)(unaff_R14 + 0x5934) = 0xffffffffffffffff;
        fVar17 = (float)param_11;
      }
      goto LAB_1805b52d7;
    }
    if ((((cVar8 != '\0') &&
         (cVar8 = FUN_180646700(extraout_XMM0_Da_06,&param_6,&unknown_var_5376_ptr),
         fVar17 = extraout_XMM0_Da_07, cVar8 != '\0')) &&
        (cVar8 = FUN_180646700(extraout_XMM0_Da_07,(int64_t)&param_6 + 4,&unknown_var_5376_ptr),
        fVar17 = extraout_XMM0_Da_08, cVar8 != '\0')) &&
       (cVar8 = FUN_180646700(extraout_XMM0_Da_08,&param_7,&unknown_var_5392_ptr),
       fVar17 = extraout_XMM0_Da_09, cVar8 != '\0')) {
      param_9 = 0;
      cVar8 = FUN_180646700(extraout_XMM0_Da_09,&param_9,&unknown_var_5408_ptr);
      fVar17 = extraout_XMM0_Da_10;
      if ((cVar8 != '\0') &&
         (cVar8 = FUN_180646700(extraout_XMM0_Da_10,(int64_t)&param_9 + 4,&unknown_var_5408_ptr),
         fVar17 = extraout_XMM0_Da_11, cVar8 != '\0')) {
        bVar14 = true;
        puVar12 = (uint *)&param_14;
        do {
          if (9 < iVar13) {
            if (bVar14) {
              auStackX_20[0] = 0;
              cVar8 = SystemSynchronizationProcessor(fVar17,auStackX_20,&unknown_var_5344_ptr);
              unaff_R12 = param_8;
              bVar16 = auStackX_20[0] != 0;
              fVar17 = extraout_XMM0_Da_14;
              if (cVar8 != '\0') {
                auStackX_20[0] = 0;
                cVar8 = SystemSynchronizationProcessor(param_8,auStackX_20,&unknown_var_5344_ptr);
                bVar14 = auStackX_20[0] != 0;
                fVar17 = extraout_XMM0_Da_15;
                if (cVar8 != '\0') {
                  auStackX_20[0] = 0xffffffff;
                  if ((bVar14) && (cVar8 = SystemSynchronizationProcessor(unaff_R12,auStackX_20), cVar8 == '\0')) {
                    bVar14 = false;
                    fVar17 = extraout_XMM0_Da_16;
                    goto LAB_1805b52d7;
                  }
                  lVar11 = param_11;
                  uVar10 = auStackX_20[0];
                  if ((iVar6 <= *(int *)(unaff_R14 + 0x3c)) &&
                     ((iVar6 != *(int *)(unaff_R14 + 0x3c) ||
                      (param_10._4_4_ <= *(int *)(unaff_R14 + 0x40))))) goto LAB_1805b52e7;
                  fVar17 = (float)param_6 * (float)param_6 + param_6._4_4_ * param_6._4_4_ +
                           (float)param_7 * (float)param_7;
                  if ((fVar17 <= 0.999) || (1.001 <= fVar17)) {
                    if (fVar17 <= 1e-09) {
                      param_6._4_4_ = 1.0;
                      param_6._0_4_ = 0.0;
                      param_7._0_4_ = 0.0;
                    }
                    else {
                      fVar17 = 1.0 / SQRT(fVar17);
                      param_6._4_4_ = param_6._4_4_ * fVar17;
                      param_7._0_4_ = (float)param_7 * fVar17;
                      param_6._0_4_ = (float)param_6 * fVar17;
                    }
                  }
                  fVar17 = (float)param_9 * (float)param_9;
                  fVar18 = param_9._4_4_ * param_9._4_4_ + fVar17;
                  if (1.0 < fVar18) {
                    fVar17 = SQRT(fVar18);
                    param_9 = CONCAT44(param_9._4_4_ * (1.0 / fVar17),
                                       (float)param_9 * (1.0 / fVar17));
                  }
                  if (bVar15) {
                    uVar5 = *(uint64_t *)(*(int64_t *)(param_11 + 0x20) + 0x14);
                    *(uint64_t *)(unaff_R14 + 0x5900) =
                         *(uint64_t *)(*(int64_t *)(param_11 + 0x20) + 0xc);
                    *(uint64_t *)(unaff_R14 + 0x5908) = uVar5;
                    fVar17 = *(float *)(unaff_R14 + 0x5908);
                    if (-100.0 <= fVar17) {
                      if (2521.0 <= fVar17) {
                        fVar17 = 2521.0;
                      }
                    }
                    else {
                      fVar17 = -100.0;
                    }
                    fVar18 = *(float *)(unaff_R14 + 0x5904);
                    if (-100.0 <= fVar18) {
                      if (10385.0 <= fVar18) {
                        fVar18 = 10385.0;
                      }
                    }
                    else {
                      fVar18 = -100.0;
                    }
                    fVar20 = *(float *)(unaff_R14 + 0x5900);
                    fVar19 = -100.0;
                    if ((-100.0 <= fVar20) && (fVar19 = fVar20, 10385.0 <= fVar20)) {
                      fVar19 = 10385.0;
                    }
                    *(float *)(unaff_R14 + 0x5900) = fVar19;
                    *(float *)(unaff_R14 + 0x5904) = fVar18;
                    *(float *)(unaff_R14 + 0x5908) = fVar17;
                    *(int32_t *)(unaff_R14 + 0x590c) = 0x7f7fffff;
                    *(uint64_t *)(unaff_R14 + 0x5920) =
                         *(uint64_t *)(*(int64_t *)(param_11 + 0x20) + 0x1c);
                    fVar17 = *(float *)(unaff_R14 + 0x5920);
                    fVar18 = -12.25;
                    if ((-12.25 <= fVar17) && (fVar18 = fVar17, 12.248505 <= fVar17)) {
                      fVar18 = 12.248505;
                    }
                    fVar17 = *(float *)(unaff_R14 + 0x5924);
                    *(float *)(unaff_R14 + 0x5920) = fVar18;
                    fVar18 = -26.7;
                    if ((-26.7 <= fVar17) && (fVar18 = fVar17, 80.09756 <= fVar17)) {
                      fVar17 = 80.09756;
                      fVar18 = fVar17;
                    }
                    *(float *)(unaff_R14 + 0x5924) = fVar18;
                    *(int32_t *)(unaff_R14 + 0x5930) =
                         *(int32_t *)(*(int64_t *)(param_11 + 0x20) + 0x34);
                    *(uint64_t *)(unaff_R14 + 0x5910) = CONCAT44(param_6._4_4_,(float)param_6);
                    *(uint64_t *)(unaff_R14 + 0x5918) = CONCAT44(param_7._4_4_,(float)param_7);
                    *(int32_t *)(unaff_R14 + 0x5934) = *(int32_t *)(param_11 + 0x200);
                    *(int32_t *)(unaff_R14 + 0x5938) = *(int32_t *)(param_11 + 0x204);
                  }
                  bVar14 = true;
                  if (param_11 == 0) goto LAB_1805b52d7;
                  uVar1 = *(uint *)(*(int64_t *)(unaff_R14 + 0x58f8) + 0x20);
                  *(uint64_t *)(param_11 + 0x49c) = CONCAT44(param_6._4_4_,(float)param_6);
                  *(uint64_t *)(param_11 + 0x4a4) = CONCAT44(param_7._4_4_,(float)param_7);
                  fVar17 = (float)atan2f(-(float)param_6,param_6._4_4_);
                  *(float *)(lVar11 + 0x4ac) = fVar17;
                  *(int32_t *)(lVar11 + 0x4b0) = 0;
                  *(int64_t *)(lVar11 + 0x4cc) = param_9;
                  *(bool *)(lVar11 + 0x4d4) = bVar16;
                  *(uint *)(lVar11 + 0x4c4) = *(uint *)(lVar11 + 0x4c4) | uVar1;
                  *(uint *)(lVar11 + 0x4c0) = uVar10;
                  if (*(int *)(unaff_R14 + 0x3c) < (int)(uint)param_14) {
                    lVar9 = *(int64_t *)(lVar11 + 0x8e0);
                    iVar13 = *(int *)(lVar9 + 0x30);
                    if ((iVar13 == 0) ||
                       (*(int *)(lVar9 + 8 +
                                (int64_t)((*(int *)(lVar9 + 0x34) + -1 + iVar13) % 10) * 4) !=
                        *(int *)(unaff_RBP + -0x68))) {
                      *(int *)(lVar9 + 8 + (int64_t)((*(int *)(lVar9 + 0x34) + iVar13) % 10) * 4) =
                           *(int *)(unaff_RBP + -0x68);
                      if (*(int *)(lVar9 + 0x30) < 10) {
                        *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar9 + 0x34) = (*(int *)(lVar9 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(unaff_R14 + 0x3c) < param_14._4_4_) {
                    lVar9 = *(int64_t *)(lVar11 + 0x8e0);
                    iVar13 = *(int *)(lVar9 + 0x30);
                    if ((iVar13 == 0) ||
                       (*(int *)(lVar9 + 8 +
                                (int64_t)((*(int *)(lVar9 + 0x34) + -1 + iVar13) % 10) * 4) !=
                        *(int *)(unaff_RBP + -100))) {
                      *(int *)(lVar9 + 8 + (int64_t)((*(int *)(lVar9 + 0x34) + iVar13) % 10) * 4) =
                           *(int *)(unaff_RBP + -100);
                      if (*(int *)(lVar9 + 0x30) < 10) {
                        *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar9 + 0x34) = (*(int *)(lVar9 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(unaff_R14 + 0x3c) < (int)param_15) {
                    lVar9 = *(int64_t *)(lVar11 + 0x8e0);
                    iVar13 = *(int *)(lVar9 + 0x30);
                    if ((iVar13 == 0) ||
                       (*(int *)(lVar9 + 8 +
                                (int64_t)((*(int *)(lVar9 + 0x34) + -1 + iVar13) % 10) * 4) !=
                        *(int *)(unaff_RBP + -0x60))) {
                      *(int *)(lVar9 + 8 + (int64_t)((*(int *)(lVar9 + 0x34) + iVar13) % 10) * 4) =
                           *(int *)(unaff_RBP + -0x60);
                      if (*(int *)(lVar9 + 0x30) < 10) {
                        *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar9 + 0x34) = (*(int *)(lVar9 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(unaff_R14 + 0x3c) < param_15._4_4_) {
                    lVar9 = *(int64_t *)(lVar11 + 0x8e0);
                    iVar13 = *(int *)(lVar9 + 0x30);
                    if ((iVar13 == 0) ||
                       (*(int *)(lVar9 + 8 +
                                (int64_t)((*(int *)(lVar9 + 0x34) + -1 + iVar13) % 10) * 4) !=
                        *(int *)(unaff_RBP + -0x5c))) {
                      *(int *)(lVar9 + 8 + (int64_t)((*(int *)(lVar9 + 0x34) + iVar13) % 10) * 4) =
                           *(int *)(unaff_RBP + -0x5c);
                      if (*(int *)(lVar9 + 0x30) < 10) {
                        *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar9 + 0x34) = (*(int *)(lVar9 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(unaff_R14 + 0x3c) < *(int *)(unaff_RBP + -0x80)) {
                    lVar9 = *(int64_t *)(lVar11 + 0x8e0);
                    iVar13 = *(int *)(lVar9 + 0x30);
                    if ((iVar13 == 0) ||
                       (*(int *)(lVar9 + 8 +
                                (int64_t)((*(int *)(lVar9 + 0x34) + -1 + iVar13) % 10) * 4) !=
                        *(int *)(unaff_RBP + -0x58))) {
                      *(int *)(lVar9 + 8 + (int64_t)((*(int *)(lVar9 + 0x34) + iVar13) % 10) * 4) =
                           *(int *)(unaff_RBP + -0x58);
                      if (*(int *)(lVar9 + 0x30) < 10) {
                        *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar9 + 0x34) = (*(int *)(lVar9 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(unaff_R14 + 0x3c) < *(int *)(unaff_RBP + -0x7c)) {
                    lVar9 = *(int64_t *)(lVar11 + 0x8e0);
                    iVar13 = *(int *)(lVar9 + 0x30);
                    if ((iVar13 == 0) ||
                       (*(int *)(lVar9 + 8 +
                                (int64_t)((*(int *)(lVar9 + 0x34) + -1 + iVar13) % 10) * 4) !=
                        *(int *)(unaff_RBP + -0x54))) {
                      *(int *)(lVar9 + 8 + (int64_t)((*(int *)(lVar9 + 0x34) + iVar13) % 10) * 4) =
                           *(int *)(unaff_RBP + -0x54);
                      if (*(int *)(lVar9 + 0x30) < 10) {
                        *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar9 + 0x34) = (*(int *)(lVar9 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(unaff_R14 + 0x3c) < *(int *)(unaff_RBP + -0x78)) {
                    lVar9 = *(int64_t *)(lVar11 + 0x8e0);
                    iVar13 = *(int *)(lVar9 + 0x30);
                    if ((iVar13 == 0) ||
                       (*(int *)(lVar9 + 8 +
                                (int64_t)((*(int *)(lVar9 + 0x34) + -1 + iVar13) % 10) * 4) !=
                        *(int *)(unaff_RBP + -0x50))) {
                      *(int *)(lVar9 + 8 + (int64_t)((*(int *)(lVar9 + 0x34) + iVar13) % 10) * 4) =
                           *(int *)(unaff_RBP + -0x50);
                      if (*(int *)(lVar9 + 0x30) < 10) {
                        *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar9 + 0x34) = (*(int *)(lVar9 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(unaff_R14 + 0x3c) < *(int *)(unaff_RBP + -0x74)) {
                    lVar9 = *(int64_t *)(lVar11 + 0x8e0);
                    iVar13 = *(int *)(lVar9 + 0x30);
                    if ((iVar13 == 0) ||
                       (*(int *)(lVar9 + 8 +
                                (int64_t)((*(int *)(lVar9 + 0x34) + -1 + iVar13) % 10) * 4) !=
                        *(int *)(unaff_RBP + -0x4c))) {
                      *(int *)(lVar9 + 8 + (int64_t)((*(int *)(lVar9 + 0x34) + iVar13) % 10) * 4) =
                           *(int *)(unaff_RBP + -0x4c);
                      if (*(int *)(lVar9 + 0x30) < 10) {
                        *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar9 + 0x34) = (*(int *)(lVar9 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(unaff_R14 + 0x3c) < *(int *)(unaff_RBP + -0x70)) {
                    lVar9 = *(int64_t *)(lVar11 + 0x8e0);
                    iVar13 = *(int *)(lVar9 + 0x30);
                    if ((iVar13 == 0) ||
                       (*(int *)(lVar9 + 8 +
                                (int64_t)((*(int *)(lVar9 + 0x34) + -1 + iVar13) % 10) * 4) !=
                        *(int *)(unaff_RBP + -0x48))) {
                      *(int *)(lVar9 + 8 + (int64_t)((*(int *)(lVar9 + 0x34) + iVar13) % 10) * 4) =
                           *(int *)(unaff_RBP + -0x48);
                      if (*(int *)(lVar9 + 0x30) < 10) {
                        *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar9 + 0x34) = (*(int *)(lVar9 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  bVar14 = true;
                  unaff_R12 = param_8;
                  if (*(int *)(unaff_RBP + -0x6c) <= *(int *)(unaff_R14 + 0x3c)) goto LAB_1805b52d7;
                  lVar11 = *(int64_t *)(lVar11 + 0x8e0);
                  iVar13 = *(int *)(lVar11 + 0x30);
                  if ((iVar13 != 0) &&
                     (*(int *)(lVar11 + 8 +
                              (int64_t)((*(int *)(lVar11 + 0x34) + -1 + iVar13) % 10) * 4) ==
                      *(int *)(unaff_RBP + -0x44))) goto LAB_1805b52d7;
                  *(int *)(lVar11 + 8 + (int64_t)((*(int *)(lVar11 + 0x34) + iVar13) % 10) * 4) =
                       *(int *)(unaff_RBP + -0x44);
                  if (*(int *)(lVar11 + 0x30) < 10) {
                    bVar14 = true;
                    *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + 1;
                    goto LAB_1805b52d7;
                  }
                  *(int *)(lVar11 + 0x34) = (*(int *)(lVar11 + 0x34) + 1) % 10;
                  goto LAB_1805b52e7;
                }
              }
            }
            break;
          }
          if ((bVar14) &&
             (cVar8 = FUN_180646500(fVar17,unaff_RBP + -0x68 + (int64_t)iVar13 * 4,&unknown_var_5424_ptr),
             fVar17 = extraout_XMM0_Da_12, cVar8 != '\0')) {
            auStackX_20[0] = 0;
            cVar8 = FUN_180646a60(extraout_XMM0_Da_12,*(int32_t *)(unaff_R14 + 0x3c),auStackX_20)
            ;
            fVar17 = extraout_XMM0_Da_13;
            uVar10 = auStackX_20[0];
            if (cVar8 == '\0') goto LAB_1805b46ce;
            bVar14 = true;
          }
          else {
            uVar10 = 0;
LAB_1805b46ce:
            bVar14 = false;
          }
          *puVar12 = uVar10;
          iVar13 = iVar13 + 1;
          puVar12 = puVar12 + 1;
        } while (bVar14);
      }
    }
    bVar15 = false;
LAB_1805b50ac:
    bVar14 = false;
  }
  else {
LAB_1805b52d7:
    bVar15 = false;
    if (!bVar14) goto LAB_1805b50ac;
LAB_1805b52e7:
    auStackX_20[0] = 0;
    cVar8 = SystemSynchronizationProcessor(unaff_R12,auStackX_20,&unknown_var_5344_ptr);
    bVar15 = auStackX_20[0] != 0;
    fVar17 = extraout_XMM0_Da_23;
    if (cVar8 == '\0') goto LAB_1805b50ac;
    bVar14 = true;
  }
  if (bVar14) {
    if (bVar15) {
      cVar8 = FUN_1805b6170(fVar17,unaff_R12);
      if (cVar8 == '\0') {
        bVar14 = false;
        goto LAB_1805b5113;
      }
      bVar14 = true;
    }
    if ((*(int *)(unaff_R14 + 0x3c) < iVar6) ||
       ((iVar6 == *(int *)(unaff_R14 + 0x3c) && (*(int *)(unaff_R14 + 0x40) < param_10._4_4_)))) {
      *(uint64_t *)(unaff_R14 + 0x5928) = param_13;
      *(uint64_t *)(unaff_R14 + 0x3c) = uVar7;
    }
  }
LAB_1805b5113:
  FUN_1805b3da0();
  if (bVar14) {
    *(uint64_t *)(unaff_R14 + 0x20) = *(uint64_t *)(unaff_R12 + 0x5a8);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x40) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




