#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part064.c - 1 个函数

// 函数: void FUN_1805b42e8(float param_1)
void FUN_1805b42e8(float param_1)

{
  uint uVar1;
  uint64_t uVar2;
  int iVar3;
  char cVar4;
  int64_t lVar5;
  char in_CL;
  uint uVar6;
  int64_t lVar7;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  uint *puVar8;
  int iVar9;
  int64_t unaff_R12;
  char unaff_R13B;
  int64_t unaff_R14;
  bool bVar10;
  bool bVar11;
  bool bVar12;
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
  float extraout_XMM0_Da_17;
  float extraout_XMM0_Da_18;
  float extraout_XMM0_Da_19;
  float extraout_XMM0_Da_20;
  float extraout_XMM0_Da_21;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint auStackX_20 [2];
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  int32_t uStack000000000000003c;
  int64_t in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  int iStack0000000000000050;
  int iStack0000000000000054;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  uint64_t in_stack_00000068;
  uint uStack0000000000000070;
  int iStack0000000000000074;
  int iStack0000000000000078;
  int iStack000000000000007c;
  int32_t in_stack_000000d0;
  int32_t in_stack_000000d8;
  int32_t in_stack_000000e0;
  int32_t in_stack_000000e8;
  
  if (in_CL == '\0') goto LAB_1805b4456;
LAB_1805b42f8:
  if ((*(int *)(unaff_R14 + 0x4b94) < *(int *)(unaff_R14 + 0x4b88)) &&
     (lVar7 = *(int64_t *)(unaff_R14 + 0x80 + (int64_t)(*(int *)(unaff_R14 + 0x4b94) % 0x960) * 8)
     , lVar7 != 0)) {
    unaff_R13B = '\x01';
    *(int32_t *)(lVar7 + 0x5c4) = 0;
    bVar10 = true;
LAB_1805b4350:
    if (*(int *)(lVar7 + 0x5c8) <= *(int *)(lVar7 + 0x5c4)) goto LAB_1805b4445;
    if (bVar10) {
      auStackX_20[0] = 0;
      cVar4 = SystemSynchronizationProcessor(lVar7);
      if (cVar4 == '\0') goto LAB_1805b4442;
      if (auStackX_20[0] != 0) {
        system_system_memory = lVar7;
        cVar4 = (**(code **)(system_system_data_memory + 0x140))
                          (*(int32_t *)(*(int64_t *)(unaff_R14 + 0x58f8) + 0x4c));
        bVar10 = cVar4 != '\0';
        system_system_memory = 0;
LAB_1805b441a:
        if (!bVar10) goto LAB_1805b4445;
        goto LAB_1805b4350;
      }
      auStackX_20[0] = 0xffff;
      cVar4 = SystemSynchronizationProcessor(lVar7);
      bVar10 = cVar4 != '\0';
      if (3 < (ushort)auStackX_20[0]) goto LAB_1805b4442;
      lVar5 = (uint64_t)(auStackX_20[0] & 0xffff) * 0x10;
      if ((*(int64_t *)(&system_data_2c98 + lVar5) == 0) &&
         (*(int64_t *)(&system_data_2ca0 + lVar5) == 0)) goto LAB_1805b441a;
      if ((bVar10) && (cVar4 = (**(code **)(&system_data_2ca0 + lVar5))(), cVar4 != '\0')) {
        bVar10 = true;
        goto LAB_1805b4350;
      }
    }
LAB_1805b4442:
    bVar10 = false;
    goto LAB_1805b4445;
  }
  unaff_R13B = '\0';
  goto LAB_1805b44ee;
LAB_1805b4445:
  param_1 = (float)FUN_1805fa2d0();
  if (bVar10) {
LAB_1805b44ee:
    bVar10 = true;
  }
  else {
LAB_1805b4456:
    bVar10 = false;
  }
  if ((unaff_R13B == '\0') || (!bVar10)) goto LAB_1805b4465;
  goto LAB_1805b42f8;
LAB_1805b4465:
  iVar9 = 0;
  in_stack_00000068 = 0;
  *(int *)(unaff_R14 + 0x5980) = *(int *)(unaff_R14 + 0x4b84) + -1;
  if ((bVar10) && (cVar4 = FUN_180646610(), param_1 = extraout_XMM0_Da, cVar4 != '\0')) {
    _fStack0000000000000048 = 0;
    auStackX_20[0] = 0;
    cVar4 = SystemSynchronizationProcessor();
    param_1 = extraout_XMM0_Da_00;
    if (auStackX_20[0] == 0) {
      auStackX_20[0] = 0;
      if ((cVar4 == '\0') || (cVar4 = SystemSynchronizationProcessor(), param_1 = extraout_XMM0_Da_02, cVar4 == '\0')
         ) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      lVar7 = (int64_t)(int)auStackX_20[0] * 100;
      if (!bVar10) goto LAB_1805b453b;
    }
    else if ((cVar4 == '\0') ||
            (cVar4 = FUN_180646610(), lVar7 = _fStack0000000000000048, param_1 = extraout_XMM0_Da_01
            , cVar4 == '\0')) goto LAB_1805b453b;
    bVar10 = true;
    if (lVar7 < *(int64_t *)(unaff_R14 + 0x28)) {
      lVar7 = *(int64_t *)(unaff_R14 + 0x28);
    }
    *(int64_t *)(unaff_R14 + 0x28) = lVar7;
  }
  else {
LAB_1805b453b:
    bVar10 = false;
  }
  bVar11 = false;
  if (bVar10) {
    auStackX_20[0] = 0;
    cVar4 = SystemSynchronizationProcessor(param_1,auStackX_20);
    bVar11 = auStackX_20[0] != 0;
    param_1 = extraout_XMM0_Da_03;
    if (cVar4 == '\0') goto LAB_1805b456b;
    bVar10 = true;
  }
  else {
LAB_1805b456b:
    bVar10 = false;
  }
  iVar3 = iStack0000000000000050;
  if ((bVar11) && (bVar10)) {
    if ((CONCAT44(uStack000000000000005c,fStack0000000000000058) == 0) ||
       (*(int *)(CONCAT44(uStack000000000000005c,fStack0000000000000058) + 0x568) != 1)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    auStackX_20[0] = 0;
    cVar4 = SystemSynchronizationProcessor(param_1,auStackX_20);
    param_1 = extraout_XMM0_Da_04;
    if (auStackX_20[0] == 0) {
      if (((((cVar4 == '\0') ||
            (cVar4 = FUN_180646700(extraout_XMM0_Da_04,&stack0x00000030),
            param_1 = extraout_XMM0_Da_15, cVar4 == '\0')) ||
           (cVar4 = FUN_180646700(extraout_XMM0_Da_15,(int64_t)&stack0x00000030 + 4),
           param_1 = extraout_XMM0_Da_16, cVar4 == '\0')) ||
          ((cVar4 = FUN_180646700(extraout_XMM0_Da_16,&stack0x00000038),
           param_1 = extraout_XMM0_Da_17, cVar4 == '\0' ||
           (cVar4 = FUN_180646700(extraout_XMM0_Da_17,&stack0x00000058),
           param_1 = extraout_XMM0_Da_18, cVar4 == '\0')))) ||
         ((cVar4 = FUN_180646700(extraout_XMM0_Da_18,(int64_t)&stack0x00000058 + 4),
          param_1 = extraout_XMM0_Da_19, cVar4 == '\0' ||
          (cVar4 = FUN_180646700(extraout_XMM0_Da_19,&stack0x00000060),
          param_1 = extraout_XMM0_Da_20, cVar4 == '\0')))) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if ((!bVar11) &&
         (((*(int *)(unaff_R14 + 0x3c) < iVar3 ||
           ((iVar3 == *(int *)(unaff_R14 + 0x3c) &&
            (*(int *)(unaff_R14 + 0x40) < iStack0000000000000054)))) && (bVar10)))) {
        if (-100.0 <= fStack0000000000000038) {
          fVar15 = fStack0000000000000038;
          if (2521.0 <= fStack0000000000000038) {
            fVar15 = 2521.0;
          }
        }
        else {
          fVar15 = -100.0;
        }
        if (-100.0 <= fStack0000000000000034) {
          fVar16 = fStack0000000000000034;
          if (10385.0 <= fStack0000000000000034) {
            fVar16 = 10385.0;
          }
        }
        else {
          fVar16 = -100.0;
        }
        fVar14 = -100.0;
        if ((-100.0 <= fStack0000000000000030) &&
           (fVar14 = fStack0000000000000030, 10385.0 <= fStack0000000000000030)) {
          fVar14 = 10385.0;
        }
        *(float *)(unaff_R14 + 0x5910) = fStack0000000000000058;
        *(int32_t *)(unaff_R14 + 0x5914) = uStack000000000000005c;
        *(int32_t *)(unaff_R14 + 0x5918) = uStack0000000000000060;
        *(int32_t *)(unaff_R14 + 0x591c) = uStack0000000000000064;
        *(float *)(unaff_R14 + 0x5900) = fVar14;
        *(float *)(unaff_R14 + 0x5904) = fVar16;
        *(float *)(unaff_R14 + 0x5908) = fVar15;
        *(int32_t *)(unaff_R14 + 0x590c) = 0x7f7fffff;
        *(uint64_t *)(unaff_R14 + 0x5920) = 0;
        *(int32_t *)(unaff_R14 + 0x5930) = 0;
        *(uint64_t *)(unaff_R14 + 0x5934) = 0xffffffffffffffff;
        param_1 = fStack0000000000000058;
      }
      goto LAB_1805b52d7;
    }
    if ((((cVar4 != '\0') &&
         (cVar4 = FUN_180646700(extraout_XMM0_Da_04,&stack0x00000030,&unknown_var_5376_ptr),
         param_1 = extraout_XMM0_Da_05, cVar4 != '\0')) &&
        (cVar4 = FUN_180646700(extraout_XMM0_Da_05,(int64_t)&stack0x00000030 + 4,&unknown_var_5376_ptr),
        param_1 = extraout_XMM0_Da_06, cVar4 != '\0')) &&
       (cVar4 = FUN_180646700(extraout_XMM0_Da_06,&stack0x00000038,&unknown_var_5392_ptr),
       param_1 = extraout_XMM0_Da_07, cVar4 != '\0')) {
      _fStack0000000000000048 = 0;
      cVar4 = FUN_180646700(extraout_XMM0_Da_07,&stack0x00000048,&unknown_var_5408_ptr);
      param_1 = extraout_XMM0_Da_08;
      if ((cVar4 != '\0') &&
         (cVar4 = FUN_180646700(extraout_XMM0_Da_08,(int64_t)&stack0x00000048 + 4,&unknown_var_5408_ptr),
         param_1 = extraout_XMM0_Da_09, cVar4 != '\0')) {
        bVar10 = true;
        puVar8 = &stack0x00000070;
        do {
          if (9 < iVar9) {
            if (bVar10) {
              auStackX_20[0] = 0;
              cVar4 = SystemSynchronizationProcessor(param_1,auStackX_20,&unknown_var_5344_ptr);
              unaff_R12 = in_stack_00000040;
              bVar12 = auStackX_20[0] != 0;
              param_1 = extraout_XMM0_Da_12;
              if (cVar4 != '\0') {
                auStackX_20[0] = 0;
                cVar4 = SystemSynchronizationProcessor(in_stack_00000040,auStackX_20,&unknown_var_5344_ptr);
                bVar10 = auStackX_20[0] != 0;
                param_1 = extraout_XMM0_Da_13;
                if (cVar4 != '\0') {
                  auStackX_20[0] = 0xffffffff;
                  if ((bVar10) && (cVar4 = SystemSynchronizationProcessor(unaff_R12,auStackX_20), cVar4 == '\0')) {
                    bVar10 = false;
                    param_1 = extraout_XMM0_Da_14;
                    goto LAB_1805b52d7;
                  }
                  uVar6 = auStackX_20[0];
                  if ((iVar3 <= *(int *)(unaff_R14 + 0x3c)) &&
                     ((iVar3 != *(int *)(unaff_R14 + 0x3c) ||
                      (iStack0000000000000054 <= *(int *)(unaff_R14 + 0x40))))) goto LAB_1805b52e7;
                  fVar15 = fStack0000000000000030 * fStack0000000000000030 +
                           fStack0000000000000034 * fStack0000000000000034 +
                           fStack0000000000000038 * fStack0000000000000038;
                  if ((fVar15 <= 0.999) || (1.001 <= fVar15)) {
                    if (fVar15 <= 1e-09) {
                      fStack0000000000000034 = 1.0;
                      fStack0000000000000030 = 0.0;
                      fStack0000000000000038 = 0.0;
                    }
                    else {
                      fVar15 = 1.0 / SQRT(fVar15);
                      fStack0000000000000034 = fStack0000000000000034 * fVar15;
                      fStack0000000000000038 = fStack0000000000000038 * fVar15;
                      fStack0000000000000030 = fStack0000000000000030 * fVar15;
                    }
                  }
                  param_1 = fStack0000000000000048 * fStack0000000000000048;
                  fVar15 = fStack000000000000004c * fStack000000000000004c + param_1;
                  if (1.0 < fVar15) {
                    param_1 = SQRT(fVar15);
                    _fStack0000000000000048 =
                         CONCAT44(fStack000000000000004c * (1.0 / param_1),
                                  fStack0000000000000048 * (1.0 / param_1));
                  }
                  lVar7 = CONCAT44(uStack000000000000005c,fStack0000000000000058);
                  if (bVar11) {
                    uVar2 = *(uint64_t *)(*(int64_t *)(lVar7 + 0x20) + 0x14);
                    *(uint64_t *)(unaff_R14 + 0x5900) =
                         *(uint64_t *)(*(int64_t *)(lVar7 + 0x20) + 0xc);
                    *(uint64_t *)(unaff_R14 + 0x5908) = uVar2;
                    fVar15 = *(float *)(unaff_R14 + 0x5908);
                    if (-100.0 <= fVar15) {
                      if (2521.0 <= fVar15) {
                        fVar15 = 2521.0;
                      }
                    }
                    else {
                      fVar15 = -100.0;
                    }
                    fVar16 = *(float *)(unaff_R14 + 0x5904);
                    if (-100.0 <= fVar16) {
                      if (10385.0 <= fVar16) {
                        fVar16 = 10385.0;
                      }
                    }
                    else {
                      fVar16 = -100.0;
                    }
                    fVar14 = *(float *)(unaff_R14 + 0x5900);
                    fVar13 = -100.0;
                    if ((-100.0 <= fVar14) && (fVar13 = fVar14, 10385.0 <= fVar14)) {
                      fVar13 = 10385.0;
                    }
                    *(float *)(unaff_R14 + 0x5900) = fVar13;
                    *(float *)(unaff_R14 + 0x5904) = fVar16;
                    *(float *)(unaff_R14 + 0x5908) = fVar15;
                    *(int32_t *)(unaff_R14 + 0x590c) = 0x7f7fffff;
                    *(uint64_t *)(unaff_R14 + 0x5920) =
                         *(uint64_t *)(*(int64_t *)(lVar7 + 0x20) + 0x1c);
                    fVar15 = *(float *)(unaff_R14 + 0x5920);
                    fVar16 = -12.25;
                    if ((-12.25 <= fVar15) && (fVar16 = fVar15, 12.248505 <= fVar15)) {
                      fVar16 = 12.248505;
                    }
                    param_1 = *(float *)(unaff_R14 + 0x5924);
                    *(float *)(unaff_R14 + 0x5920) = fVar16;
                    fVar15 = -26.7;
                    if ((-26.7 <= param_1) && (fVar15 = param_1, 80.09756 <= param_1)) {
                      param_1 = 80.09756;
                      fVar15 = param_1;
                    }
                    *(float *)(unaff_R14 + 0x5924) = fVar15;
                    *(int32_t *)(unaff_R14 + 0x5930) =
                         *(int32_t *)(*(int64_t *)(lVar7 + 0x20) + 0x34);
                    *(uint64_t *)(unaff_R14 + 0x5910) =
                         CONCAT44(fStack0000000000000034,fStack0000000000000030);
                    *(uint64_t *)(unaff_R14 + 0x5918) =
                         CONCAT44(uStack000000000000003c,fStack0000000000000038);
                    *(int32_t *)(unaff_R14 + 0x5934) = *(int32_t *)(lVar7 + 0x200);
                    *(int32_t *)(unaff_R14 + 0x5938) = *(int32_t *)(lVar7 + 0x204);
                  }
                  bVar10 = true;
                  if (lVar7 == 0) goto LAB_1805b52d7;
                  uVar1 = *(uint *)(*(int64_t *)(unaff_R14 + 0x58f8) + 0x20);
                  *(uint64_t *)(lVar7 + 0x49c) =
                       CONCAT44(fStack0000000000000034,fStack0000000000000030);
                  *(uint64_t *)(lVar7 + 0x4a4) =
                       CONCAT44(uStack000000000000003c,fStack0000000000000038);
                  param_1 = (float)atan2f(-fStack0000000000000030,fStack0000000000000034);
                  *(float *)(lVar7 + 0x4ac) = param_1;
                  *(int32_t *)(lVar7 + 0x4b0) = 0;
                  *(int64_t *)(lVar7 + 0x4cc) = _fStack0000000000000048;
                  *(bool *)(lVar7 + 0x4d4) = bVar12;
                  *(uint *)(lVar7 + 0x4c4) = *(uint *)(lVar7 + 0x4c4) | uVar1;
                  *(uint *)(lVar7 + 0x4c0) = uVar6;
                  if (*(int *)(unaff_R14 + 0x3c) < (int)uStack0000000000000070) {
                    lVar5 = *(int64_t *)(lVar7 + 0x8e0);
                    iVar9 = *(int *)(lVar5 + 0x30);
                    if ((iVar9 == 0) ||
                       (*(int *)(lVar5 + 8 +
                                (int64_t)((*(int *)(lVar5 + 0x34) + -1 + iVar9) % 10) * 4) !=
                        *(int *)(unaff_RBP + -0x68))) {
                      *(int *)(lVar5 + 8 + (int64_t)((*(int *)(lVar5 + 0x34) + iVar9) % 10) * 4) =
                           *(int *)(unaff_RBP + -0x68);
                      if (*(int *)(lVar5 + 0x30) < 10) {
                        *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar5 + 0x34) = (*(int *)(lVar5 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(unaff_R14 + 0x3c) < iStack0000000000000074) {
                    lVar5 = *(int64_t *)(lVar7 + 0x8e0);
                    iVar9 = *(int *)(lVar5 + 0x30);
                    if ((iVar9 == 0) ||
                       (*(int *)(lVar5 + 8 +
                                (int64_t)((*(int *)(lVar5 + 0x34) + -1 + iVar9) % 10) * 4) !=
                        *(int *)(unaff_RBP + -100))) {
                      *(int *)(lVar5 + 8 + (int64_t)((*(int *)(lVar5 + 0x34) + iVar9) % 10) * 4) =
                           *(int *)(unaff_RBP + -100);
                      if (*(int *)(lVar5 + 0x30) < 10) {
                        *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar5 + 0x34) = (*(int *)(lVar5 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(unaff_R14 + 0x3c) < iStack0000000000000078) {
                    lVar5 = *(int64_t *)(lVar7 + 0x8e0);
                    iVar9 = *(int *)(lVar5 + 0x30);
                    if ((iVar9 == 0) ||
                       (*(int *)(lVar5 + 8 +
                                (int64_t)((*(int *)(lVar5 + 0x34) + -1 + iVar9) % 10) * 4) !=
                        *(int *)(unaff_RBP + -0x60))) {
                      *(int *)(lVar5 + 8 + (int64_t)((*(int *)(lVar5 + 0x34) + iVar9) % 10) * 4) =
                           *(int *)(unaff_RBP + -0x60);
                      if (*(int *)(lVar5 + 0x30) < 10) {
                        *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar5 + 0x34) = (*(int *)(lVar5 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(unaff_R14 + 0x3c) < iStack000000000000007c) {
                    lVar5 = *(int64_t *)(lVar7 + 0x8e0);
                    iVar9 = *(int *)(lVar5 + 0x30);
                    if ((iVar9 == 0) ||
                       (*(int *)(lVar5 + 8 +
                                (int64_t)((*(int *)(lVar5 + 0x34) + -1 + iVar9) % 10) * 4) !=
                        *(int *)(unaff_RBP + -0x5c))) {
                      *(int *)(lVar5 + 8 + (int64_t)((*(int *)(lVar5 + 0x34) + iVar9) % 10) * 4) =
                           *(int *)(unaff_RBP + -0x5c);
                      if (*(int *)(lVar5 + 0x30) < 10) {
                        *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar5 + 0x34) = (*(int *)(lVar5 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(unaff_R14 + 0x3c) < *(int *)(unaff_RBP + -0x80)) {
                    lVar5 = *(int64_t *)(lVar7 + 0x8e0);
                    iVar9 = *(int *)(lVar5 + 0x30);
                    if ((iVar9 == 0) ||
                       (*(int *)(lVar5 + 8 +
                                (int64_t)((*(int *)(lVar5 + 0x34) + -1 + iVar9) % 10) * 4) !=
                        *(int *)(unaff_RBP + -0x58))) {
                      *(int *)(lVar5 + 8 + (int64_t)((*(int *)(lVar5 + 0x34) + iVar9) % 10) * 4) =
                           *(int *)(unaff_RBP + -0x58);
                      if (*(int *)(lVar5 + 0x30) < 10) {
                        *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar5 + 0x34) = (*(int *)(lVar5 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(unaff_R14 + 0x3c) < *(int *)(unaff_RBP + -0x7c)) {
                    lVar5 = *(int64_t *)(lVar7 + 0x8e0);
                    iVar9 = *(int *)(lVar5 + 0x30);
                    if ((iVar9 == 0) ||
                       (*(int *)(lVar5 + 8 +
                                (int64_t)((*(int *)(lVar5 + 0x34) + -1 + iVar9) % 10) * 4) !=
                        *(int *)(unaff_RBP + -0x54))) {
                      *(int *)(lVar5 + 8 + (int64_t)((*(int *)(lVar5 + 0x34) + iVar9) % 10) * 4) =
                           *(int *)(unaff_RBP + -0x54);
                      if (*(int *)(lVar5 + 0x30) < 10) {
                        *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar5 + 0x34) = (*(int *)(lVar5 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(unaff_R14 + 0x3c) < *(int *)(unaff_RBP + -0x78)) {
                    lVar5 = *(int64_t *)(lVar7 + 0x8e0);
                    iVar9 = *(int *)(lVar5 + 0x30);
                    if ((iVar9 == 0) ||
                       (*(int *)(lVar5 + 8 +
                                (int64_t)((*(int *)(lVar5 + 0x34) + -1 + iVar9) % 10) * 4) !=
                        *(int *)(unaff_RBP + -0x50))) {
                      *(int *)(lVar5 + 8 + (int64_t)((*(int *)(lVar5 + 0x34) + iVar9) % 10) * 4) =
                           *(int *)(unaff_RBP + -0x50);
                      if (*(int *)(lVar5 + 0x30) < 10) {
                        *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar5 + 0x34) = (*(int *)(lVar5 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(unaff_R14 + 0x3c) < *(int *)(unaff_RBP + -0x74)) {
                    lVar5 = *(int64_t *)(lVar7 + 0x8e0);
                    iVar9 = *(int *)(lVar5 + 0x30);
                    if ((iVar9 == 0) ||
                       (*(int *)(lVar5 + 8 +
                                (int64_t)((*(int *)(lVar5 + 0x34) + -1 + iVar9) % 10) * 4) !=
                        *(int *)(unaff_RBP + -0x4c))) {
                      *(int *)(lVar5 + 8 + (int64_t)((*(int *)(lVar5 + 0x34) + iVar9) % 10) * 4) =
                           *(int *)(unaff_RBP + -0x4c);
                      if (*(int *)(lVar5 + 0x30) < 10) {
                        *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar5 + 0x34) = (*(int *)(lVar5 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(unaff_R14 + 0x3c) < *(int *)(unaff_RBP + -0x70)) {
                    lVar5 = *(int64_t *)(lVar7 + 0x8e0);
                    iVar9 = *(int *)(lVar5 + 0x30);
                    if ((iVar9 == 0) ||
                       (*(int *)(lVar5 + 8 +
                                (int64_t)((*(int *)(lVar5 + 0x34) + -1 + iVar9) % 10) * 4) !=
                        *(int *)(unaff_RBP + -0x48))) {
                      *(int *)(lVar5 + 8 + (int64_t)((*(int *)(lVar5 + 0x34) + iVar9) % 10) * 4) =
                           *(int *)(unaff_RBP + -0x48);
                      if (*(int *)(lVar5 + 0x30) < 10) {
                        *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar5 + 0x34) = (*(int *)(lVar5 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  bVar10 = true;
                  unaff_R12 = in_stack_00000040;
                  if (*(int *)(unaff_RBP + -0x6c) <= *(int *)(unaff_R14 + 0x3c)) goto LAB_1805b52d7;
                  lVar7 = *(int64_t *)(lVar7 + 0x8e0);
                  iVar9 = *(int *)(lVar7 + 0x30);
                  if ((iVar9 != 0) &&
                     (*(int *)(lVar7 + 8 +
                              (int64_t)((*(int *)(lVar7 + 0x34) + -1 + iVar9) % 10) * 4) ==
                      *(int *)(unaff_RBP + -0x44))) goto LAB_1805b52d7;
                  *(int *)(lVar7 + 8 + (int64_t)((*(int *)(lVar7 + 0x34) + iVar9) % 10) * 4) =
                       *(int *)(unaff_RBP + -0x44);
                  if (*(int *)(lVar7 + 0x30) < 10) {
                    bVar10 = true;
                    *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
                    goto LAB_1805b52d7;
                  }
                  *(int *)(lVar7 + 0x34) = (*(int *)(lVar7 + 0x34) + 1) % 10;
                  goto LAB_1805b52e7;
                }
              }
            }
            break;
          }
          if ((bVar10) &&
             (cVar4 = FUN_180646500(param_1,unaff_RBP + -0x68 + (int64_t)iVar9 * 4,&unknown_var_5424_ptr),
             param_1 = extraout_XMM0_Da_10, cVar4 != '\0')) {
            auStackX_20[0] = 0;
            cVar4 = FUN_180646a60(extraout_XMM0_Da_10,*(int32_t *)(unaff_R14 + 0x3c),auStackX_20)
            ;
            param_1 = extraout_XMM0_Da_11;
            uVar6 = auStackX_20[0];
            if (cVar4 == '\0') goto LAB_1805b46ce;
            bVar10 = true;
          }
          else {
            uVar6 = 0;
LAB_1805b46ce:
            bVar10 = false;
          }
          *puVar8 = uVar6;
          iVar9 = iVar9 + 1;
          puVar8 = puVar8 + 1;
        } while (bVar10);
      }
    }
    bVar11 = false;
LAB_1805b50ac:
    bVar10 = false;
  }
  else {
LAB_1805b52d7:
    bVar11 = false;
    if (!bVar10) goto LAB_1805b50ac;
LAB_1805b52e7:
    auStackX_20[0] = 0;
    cVar4 = SystemSynchronizationProcessor(unaff_R12,auStackX_20,&unknown_var_5344_ptr);
    bVar11 = auStackX_20[0] != 0;
    param_1 = extraout_XMM0_Da_21;
    if (cVar4 == '\0') goto LAB_1805b50ac;
    bVar10 = true;
  }
  if (bVar10) {
    if (bVar11) {
      cVar4 = FUN_1805b6170(param_1,unaff_R12);
      if (cVar4 == '\0') {
        bVar10 = false;
        goto LAB_1805b5113;
      }
      bVar10 = true;
    }
    if ((*(int *)(unaff_R14 + 0x3c) < iVar3) ||
       ((iVar3 == *(int *)(unaff_R14 + 0x3c) &&
        (*(int *)(unaff_R14 + 0x40) < iStack0000000000000054)))) {
      *(uint64_t *)(unaff_R14 + 0x5928) = in_stack_00000068;
      *(uint64_t *)(unaff_R14 + 0x3c) = unaff_RBX;
    }
  }
LAB_1805b5113:
  FUN_1805b3da0();
  if (bVar10) {
    *(uint64_t *)(unaff_R14 + 0x20) = *(uint64_t *)(unaff_R12 + 0x5a8);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x40) ^ (uint64_t)&stack0x00000000);
}






