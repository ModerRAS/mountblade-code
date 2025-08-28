#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part062.c - 1 个函数

// 函数: void FUN_1805b41b0(int64_t param_1,int64_t param_2,int32_t *param_3)
void FUN_1805b41b0(int64_t param_1,int64_t param_2,int32_t *param_3)

{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int iVar5;
  uint64_t uVar6;
  char cVar7;
  int64_t lVar8;
  uint uVar9;
  int64_t lVar10;
  uint *puVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int32_t uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int8_t auStack_128 [32];
  uint auStack_108 [4];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  int32_t uStack_ec;
  int64_t lStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  int32_t uStack_c4;
  uint64_t uStack_c0;
  uint auStack_b8 [4];
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int aiStack_90 [4];
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  uint64_t uStack_68;
  
  uStack_68 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_128;
  lStack_e8 = param_2;
  if (*(char *)(param_1 + 0x31) == '\0') {
    iVar12 = *(int *)(param_1 + 0x18);
    if ((iVar12 == 0) && (*(short *)(param_1 + 0x14) == 0)) {
      uVar16 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      *(int32_t *)(param_1 + 4) = *param_3;
      *(int32_t *)(param_1 + 8) = uVar16;
      *(int32_t *)(param_1 + 0xc) = uVar2;
      *(int32_t *)(param_1 + 0x10) = uVar3;
      *(uint64_t *)(param_1 + 0x14) = *(uint64_t *)(param_3 + 4);
      iVar12 = *(int *)(param_1 + 0x18);
    }
    if ((iVar12 != param_3[5]) || (*(short *)(param_1 + 0x14) != *(short *)(param_3 + 4))) {
      FUN_180062340(system_message_context,2);
      uVar16 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      *(int32_t *)(param_1 + 4) = *param_3;
      *(int32_t *)(param_1 + 8) = uVar16;
      *(int32_t *)(param_1 + 0xc) = uVar2;
      *(int32_t *)(param_1 + 0x10) = uVar3;
      *(uint64_t *)(param_1 + 0x14) = *(uint64_t *)(param_3 + 4);
    }
    if (((*(int64_t *)(param_1 + 0x58f8) == 0) || (system_system_memory == 0)) ||
       (iVar12 = *(int *)(*(int64_t *)(param_1 + 0x58f8) + 0x18), iVar12 < 0)) {
      uStack_d0 = 0;
    }
    else {
      uStack_d0 = system_system_memory + 0x30a0 + (int64_t)iVar12 * 0xa60;
    }
    uStack_d8 = 0;
    cVar7 = FUN_180646b50();
    uVar6 = uStack_d8;
    *(uint64_t *)(param_2 + 0x5a0) = uStack_d8;
    if ((cVar7 == '\0') || (cVar7 = FUN_1805f9ee0(), cVar7 == '\0')) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    bVar14 = false;
    if (!bVar13) goto LAB_1805b4456;
LAB_1805b42f8:
    if ((*(int *)(param_1 + 0x4b94) < *(int *)(param_1 + 0x4b88)) &&
       (lVar10 = *(int64_t *)(param_1 + 0x80 + (int64_t)(*(int *)(param_1 + 0x4b94) % 0x960) * 8),
       lVar10 != 0)) {
      bVar14 = true;
      *(int32_t *)(lVar10 + 0x5c4) = 0;
      bVar13 = true;
LAB_1805b4350:
      if (*(int *)(lVar10 + 0x5c8) <= *(int *)(lVar10 + 0x5c4)) goto LAB_1805b4445;
      if (bVar13) {
        auStack_108[0] = 0;
        cVar7 = FUN_18055f260(lVar10);
        if (cVar7 == '\0') goto LAB_1805b4442;
        if (auStack_108[0] != 0) {
          system_system_memory = lVar10;
          cVar7 = (**(code **)(system_system_data_memory + 0x140))
                            (*(int32_t *)(*(int64_t *)(param_1 + 0x58f8) + 0x4c));
          bVar13 = cVar7 != '\0';
          system_system_memory = 0;
LAB_1805b441a:
          if (!bVar13) goto LAB_1805b4445;
          goto LAB_1805b4350;
        }
        auStack_108[0] = 0xffff;
        cVar7 = FUN_18055f260(lVar10);
        bVar13 = cVar7 != '\0';
        if (3 < (ushort)auStack_108[0]) goto LAB_1805b4442;
        lVar8 = (uint64_t)(auStack_108[0] & 0xffff) * 0x10;
        if ((*(int64_t *)(&system_data_2c98 + lVar8) == 0) &&
           (*(int64_t *)(&system_data_2ca0 + lVar8) == 0)) goto LAB_1805b441a;
        if ((bVar13) && (cVar7 = (**(code **)(&system_data_2ca0 + lVar8))(), cVar7 != '\0')) {
          bVar13 = true;
          goto LAB_1805b4350;
        }
      }
LAB_1805b4442:
      bVar13 = false;
      goto LAB_1805b4445;
    }
    bVar14 = false;
    goto LAB_1805b44ee;
  }
  goto FUN_1805b5140;
LAB_1805b4445:
  FUN_1805fa2d0();
  if (bVar13) {
LAB_1805b44ee:
    bVar13 = true;
  }
  else {
LAB_1805b4456:
    bVar13 = false;
  }
  if ((!bVar14) || (!bVar13)) goto LAB_1805b4465;
  goto LAB_1805b42f8;
LAB_1805b4465:
  iVar12 = 0;
  uStack_c0 = 0;
  *(int *)(param_1 + 0x5980) = *(int *)(param_1 + 0x4b84) + -1;
  if ((bVar13) && (cVar7 = FUN_180646610(), cVar7 != '\0')) {
    uStack_e0 = 0;
    auStack_108[0] = 0;
    cVar7 = FUN_18055f260();
    if (auStack_108[0] == 0) {
      auStack_108[0] = 0;
      if ((cVar7 == '\0') || (cVar7 = FUN_18055f260(param_2), cVar7 == '\0')) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      lVar10 = (int64_t)(int)auStack_108[0] * 100;
      if (!bVar13) goto LAB_1805b453b;
    }
    else if ((cVar7 == '\0') || (cVar7 = FUN_180646610(), lVar10 = uStack_e0, cVar7 == '\0'))
    goto LAB_1805b453b;
    bVar13 = true;
    if (lVar10 < *(int64_t *)(param_1 + 0x28)) {
      lVar10 = *(int64_t *)(param_1 + 0x28);
    }
    *(int64_t *)(param_1 + 0x28) = lVar10;
  }
  else {
LAB_1805b453b:
    bVar13 = false;
  }
  bVar14 = false;
  if (bVar13) {
    auStack_108[0] = 0;
    cVar7 = FUN_18055f260(param_2,auStack_108);
    bVar14 = auStack_108[0] != 0;
    if (cVar7 == '\0') goto LAB_1805b456b;
    bVar13 = true;
  }
  else {
LAB_1805b456b:
    bVar13 = false;
  }
  iVar5 = (int)uStack_d8;
  if ((bVar14) && (bVar13)) {
    if ((uStack_d0 == 0) || (*(int *)(uStack_d0 + 0x568) != 1)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    auStack_108[0] = 0;
    cVar7 = FUN_18055f260(param_2,auStack_108);
    if (auStack_108[0] == 0) {
      if (((((cVar7 == '\0') || (cVar7 = FUN_180646700(param_2,&fStack_f8), cVar7 == '\0')) ||
           (cVar7 = FUN_180646700(param_2,&fStack_f4), cVar7 == '\0')) ||
          ((cVar7 = FUN_180646700(param_2,&fStack_f0), cVar7 == '\0' ||
           (cVar7 = FUN_180646700(param_2,&uStack_d0), cVar7 == '\0')))) ||
         ((cVar7 = FUN_180646700(param_2,(int64_t)&uStack_d0 + 4), cVar7 == '\0' ||
          (cVar7 = FUN_180646700(param_2,&uStack_c8), cVar7 == '\0')))) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if ((!bVar14) &&
         (((*(int *)(param_1 + 0x3c) < iVar5 ||
           ((iVar5 == *(int *)(param_1 + 0x3c) && (*(int *)(param_1 + 0x40) < uStack_d8._4_4_)))) &&
          (bVar13)))) {
        if (-100.0 <= fStack_f0) {
          fVar19 = fStack_f0;
          if (2521.0 <= fStack_f0) {
            fVar19 = 2521.0;
          }
        }
        else {
          fVar19 = -100.0;
        }
        if (-100.0 <= fStack_f4) {
          fVar20 = fStack_f4;
          if (10385.0 <= fStack_f4) {
            fVar20 = 10385.0;
          }
        }
        else {
          fVar20 = -100.0;
        }
        fVar18 = -100.0;
        if ((-100.0 <= fStack_f8) && (fVar18 = fStack_f8, 10385.0 <= fStack_f8)) {
          fVar18 = 10385.0;
        }
        *(int32_t *)(param_1 + 0x5910) = (int32_t)uStack_d0;
        *(int32_t *)(param_1 + 0x5914) = uStack_d0._4_4_;
        *(int32_t *)(param_1 + 0x5918) = uStack_c8;
        *(int32_t *)(param_1 + 0x591c) = uStack_c4;
        *(float *)(param_1 + 0x5900) = fVar18;
        *(float *)(param_1 + 0x5904) = fVar20;
        *(float *)(param_1 + 0x5908) = fVar19;
        *(int32_t *)(param_1 + 0x590c) = 0x7f7fffff;
        *(uint64_t *)(param_1 + 0x5920) = 0;
        *(int32_t *)(param_1 + 0x5930) = 0;
        *(uint64_t *)(param_1 + 0x5934) = 0xffffffffffffffff;
      }
      goto LAB_1805b52d7;
    }
    if ((((cVar7 != '\0') &&
         (cVar7 = FUN_180646700(param_2,&fStack_f8,&unknown_var_5376_ptr), cVar7 != '\0')) &&
        (cVar7 = FUN_180646700(param_2,&fStack_f4,&unknown_var_5376_ptr), cVar7 != '\0')) &&
       (cVar7 = FUN_180646700(param_2,&fStack_f0,&unknown_var_5392_ptr), cVar7 != '\0')) {
      uStack_e0 = 0;
      cVar7 = FUN_180646700(param_2,&uStack_e0,&unknown_var_5408_ptr);
      if ((cVar7 != '\0') &&
         (cVar7 = FUN_180646700(param_2,(int64_t)&uStack_e0 + 4,&unknown_var_5408_ptr), cVar7 != '\0')) {
        bVar13 = true;
        puVar11 = auStack_b8;
        do {
          if (9 < iVar12) {
            if (bVar13) {
              auStack_108[0] = 0;
              cVar7 = FUN_18055f260(param_2,auStack_108,&unknown_var_5344_ptr);
              param_2 = lStack_e8;
              bVar15 = auStack_108[0] != 0;
              if (cVar7 != '\0') {
                auStack_108[0] = 0;
                cVar7 = FUN_18055f260(lStack_e8,auStack_108,&unknown_var_5344_ptr);
                bVar13 = auStack_108[0] != 0;
                if (cVar7 != '\0') {
                  auStack_108[0] = 0xffffffff;
                  if ((bVar13) && (cVar7 = FUN_18055f260(param_2,auStack_108), cVar7 == '\0')) {
                    bVar13 = false;
                    goto LAB_1805b52d7;
                  }
                  lVar10 = uStack_d0;
                  uVar9 = auStack_108[0];
                  if ((iVar5 <= *(int *)(param_1 + 0x3c)) &&
                     ((iVar5 != *(int *)(param_1 + 0x3c) ||
                      (uStack_d8._4_4_ <= *(int *)(param_1 + 0x40))))) goto LAB_1805b52e7;
                  fVar19 = fStack_f8 * fStack_f8 + fStack_f4 * fStack_f4 + fStack_f0 * fStack_f0;
                  if ((fVar19 <= 0.999) || (1.001 <= fVar19)) {
                    if (fVar19 <= 1e-09) {
                      fStack_f4 = 1.0;
                      fStack_f8 = 0.0;
                      fStack_f0 = 0.0;
                    }
                    else {
                      fVar19 = 1.0 / SQRT(fVar19);
                      fStack_f4 = fStack_f4 * fVar19;
                      fStack_f0 = fStack_f0 * fVar19;
                      fStack_f8 = fStack_f8 * fVar19;
                    }
                  }
                  fVar19 = uStack_e0._4_4_ * uStack_e0._4_4_ + (float)uStack_e0 * (float)uStack_e0;
                  if (1.0 < fVar19) {
                    fVar19 = 1.0 / SQRT(fVar19);
                    uStack_e0 = CONCAT44(uStack_e0._4_4_ * fVar19,(float)uStack_e0 * fVar19);
                  }
                  if (bVar14) {
                    uVar4 = *(uint64_t *)(*(int64_t *)(uStack_d0 + 0x20) + 0x14);
                    *(uint64_t *)(param_1 + 0x5900) =
                         *(uint64_t *)(*(int64_t *)(uStack_d0 + 0x20) + 0xc);
                    *(uint64_t *)(param_1 + 0x5908) = uVar4;
                    fVar19 = *(float *)(param_1 + 0x5908);
                    if (-100.0 <= fVar19) {
                      if (2521.0 <= fVar19) {
                        fVar19 = 2521.0;
                      }
                    }
                    else {
                      fVar19 = -100.0;
                    }
                    fVar20 = *(float *)(param_1 + 0x5904);
                    if (-100.0 <= fVar20) {
                      if (10385.0 <= fVar20) {
                        fVar20 = 10385.0;
                      }
                    }
                    else {
                      fVar20 = -100.0;
                    }
                    fVar18 = *(float *)(param_1 + 0x5900);
                    fVar17 = -100.0;
                    if ((-100.0 <= fVar18) && (fVar17 = fVar18, 10385.0 <= fVar18)) {
                      fVar17 = 10385.0;
                    }
                    *(float *)(param_1 + 0x5900) = fVar17;
                    *(float *)(param_1 + 0x5904) = fVar20;
                    *(float *)(param_1 + 0x5908) = fVar19;
                    *(int32_t *)(param_1 + 0x590c) = 0x7f7fffff;
                    *(uint64_t *)(param_1 + 0x5920) =
                         *(uint64_t *)(*(int64_t *)(uStack_d0 + 0x20) + 0x1c);
                    fVar19 = *(float *)(param_1 + 0x5920);
                    fVar20 = -12.25;
                    if ((-12.25 <= fVar19) && (fVar20 = fVar19, 12.248505 <= fVar19)) {
                      fVar20 = 12.248505;
                    }
                    fVar19 = *(float *)(param_1 + 0x5924);
                    *(float *)(param_1 + 0x5920) = fVar20;
                    fVar20 = -26.7;
                    if ((-26.7 <= fVar19) && (fVar20 = fVar19, 80.09756 <= fVar19)) {
                      fVar20 = 80.09756;
                    }
                    *(float *)(param_1 + 0x5924) = fVar20;
                    *(int32_t *)(param_1 + 0x5930) =
                         *(int32_t *)(*(int64_t *)(uStack_d0 + 0x20) + 0x34);
                    *(uint64_t *)(param_1 + 0x5910) = CONCAT44(fStack_f4,fStack_f8);
                    *(uint64_t *)(param_1 + 0x5918) = CONCAT44(uStack_ec,fStack_f0);
                    *(int32_t *)(param_1 + 0x5934) = *(int32_t *)(uStack_d0 + 0x200);
                    *(int32_t *)(param_1 + 0x5938) = *(int32_t *)(uStack_d0 + 0x204);
                  }
                  bVar13 = true;
                  if (uStack_d0 == 0) goto LAB_1805b52d7;
                  uVar1 = *(uint *)(*(int64_t *)(param_1 + 0x58f8) + 0x20);
                  *(uint64_t *)(uStack_d0 + 0x49c) = CONCAT44(fStack_f4,fStack_f8);
                  *(uint64_t *)(uStack_d0 + 0x4a4) = CONCAT44(uStack_ec,fStack_f0);
                  uVar16 = atan2f(-fStack_f8,fStack_f4);
                  *(int32_t *)(lVar10 + 0x4ac) = uVar16;
                  *(int32_t *)(lVar10 + 0x4b0) = 0;
                  *(int64_t *)(lVar10 + 0x4cc) = uStack_e0;
                  *(bool *)(lVar10 + 0x4d4) = bVar15;
                  *(uint *)(lVar10 + 0x4c4) = *(uint *)(lVar10 + 0x4c4) | uVar1;
                  *(uint *)(lVar10 + 0x4c0) = uVar9;
                  if (*(int *)(param_1 + 0x3c) < (int)auStack_b8[0]) {
                    lVar8 = *(int64_t *)(lVar10 + 0x8e0);
                    iVar12 = *(int *)(lVar8 + 0x30);
                    if ((iVar12 == 0) ||
                       (*(int *)(lVar8 + 8 +
                                (int64_t)((*(int *)(lVar8 + 0x34) + -1 + iVar12) % 10) * 4) !=
                        aiStack_90[0])) {
                      *(int *)(lVar8 + 8 + (int64_t)((*(int *)(lVar8 + 0x34) + iVar12) % 10) * 4) =
                           aiStack_90[0];
                      if (*(int *)(lVar8 + 0x30) < 10) {
                        *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar8 + 0x34) = (*(int *)(lVar8 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(param_1 + 0x3c) < (int)auStack_b8[1]) {
                    lVar8 = *(int64_t *)(lVar10 + 0x8e0);
                    iVar12 = *(int *)(lVar8 + 0x30);
                    if ((iVar12 == 0) ||
                       (*(int *)(lVar8 + 8 +
                                (int64_t)((*(int *)(lVar8 + 0x34) + -1 + iVar12) % 10) * 4) !=
                        aiStack_90[1])) {
                      *(int *)(lVar8 + 8 + (int64_t)((*(int *)(lVar8 + 0x34) + iVar12) % 10) * 4) =
                           aiStack_90[1];
                      if (*(int *)(lVar8 + 0x30) < 10) {
                        *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar8 + 0x34) = (*(int *)(lVar8 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(param_1 + 0x3c) < (int)auStack_b8[2]) {
                    lVar8 = *(int64_t *)(lVar10 + 0x8e0);
                    iVar12 = *(int *)(lVar8 + 0x30);
                    if ((iVar12 == 0) ||
                       (*(int *)(lVar8 + 8 +
                                (int64_t)((*(int *)(lVar8 + 0x34) + -1 + iVar12) % 10) * 4) !=
                        aiStack_90[2])) {
                      *(int *)(lVar8 + 8 + (int64_t)((*(int *)(lVar8 + 0x34) + iVar12) % 10) * 4) =
                           aiStack_90[2];
                      if (*(int *)(lVar8 + 0x30) < 10) {
                        *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar8 + 0x34) = (*(int *)(lVar8 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(param_1 + 0x3c) < (int)auStack_b8[3]) {
                    lVar8 = *(int64_t *)(lVar10 + 0x8e0);
                    iVar12 = *(int *)(lVar8 + 0x30);
                    if ((iVar12 == 0) ||
                       (*(int *)(lVar8 + 8 +
                                (int64_t)((*(int *)(lVar8 + 0x34) + -1 + iVar12) % 10) * 4) !=
                        aiStack_90[3])) {
                      *(int *)(lVar8 + 8 + (int64_t)((*(int *)(lVar8 + 0x34) + iVar12) % 10) * 4) =
                           aiStack_90[3];
                      if (*(int *)(lVar8 + 0x30) < 10) {
                        *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar8 + 0x34) = (*(int *)(lVar8 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(param_1 + 0x3c) < iStack_a8) {
                    lVar8 = *(int64_t *)(lVar10 + 0x8e0);
                    iVar12 = *(int *)(lVar8 + 0x30);
                    if ((iVar12 == 0) ||
                       (*(int *)(lVar8 + 8 +
                                (int64_t)((*(int *)(lVar8 + 0x34) + -1 + iVar12) % 10) * 4) !=
                        iStack_80)) {
                      *(int *)(lVar8 + 8 + (int64_t)((*(int *)(lVar8 + 0x34) + iVar12) % 10) * 4) =
                           iStack_80;
                      if (*(int *)(lVar8 + 0x30) < 10) {
                        *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar8 + 0x34) = (*(int *)(lVar8 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(param_1 + 0x3c) < iStack_a4) {
                    lVar8 = *(int64_t *)(lVar10 + 0x8e0);
                    iVar12 = *(int *)(lVar8 + 0x30);
                    if ((iVar12 == 0) ||
                       (*(int *)(lVar8 + 8 +
                                (int64_t)((*(int *)(lVar8 + 0x34) + -1 + iVar12) % 10) * 4) !=
                        iStack_7c)) {
                      *(int *)(lVar8 + 8 + (int64_t)((*(int *)(lVar8 + 0x34) + iVar12) % 10) * 4) =
                           iStack_7c;
                      if (*(int *)(lVar8 + 0x30) < 10) {
                        *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar8 + 0x34) = (*(int *)(lVar8 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(param_1 + 0x3c) < iStack_a0) {
                    lVar8 = *(int64_t *)(lVar10 + 0x8e0);
                    iVar12 = *(int *)(lVar8 + 0x30);
                    if ((iVar12 == 0) ||
                       (*(int *)(lVar8 + 8 +
                                (int64_t)((*(int *)(lVar8 + 0x34) + -1 + iVar12) % 10) * 4) !=
                        iStack_78)) {
                      *(int *)(lVar8 + 8 + (int64_t)((*(int *)(lVar8 + 0x34) + iVar12) % 10) * 4) =
                           iStack_78;
                      if (*(int *)(lVar8 + 0x30) < 10) {
                        *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar8 + 0x34) = (*(int *)(lVar8 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(param_1 + 0x3c) < iStack_9c) {
                    lVar8 = *(int64_t *)(lVar10 + 0x8e0);
                    iVar12 = *(int *)(lVar8 + 0x30);
                    if ((iVar12 == 0) ||
                       (*(int *)(lVar8 + 8 +
                                (int64_t)((*(int *)(lVar8 + 0x34) + -1 + iVar12) % 10) * 4) !=
                        iStack_74)) {
                      *(int *)(lVar8 + 8 + (int64_t)((*(int *)(lVar8 + 0x34) + iVar12) % 10) * 4) =
                           iStack_74;
                      if (*(int *)(lVar8 + 0x30) < 10) {
                        *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar8 + 0x34) = (*(int *)(lVar8 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  if (*(int *)(param_1 + 0x3c) < iStack_98) {
                    lVar8 = *(int64_t *)(lVar10 + 0x8e0);
                    iVar12 = *(int *)(lVar8 + 0x30);
                    if ((iVar12 == 0) ||
                       (*(int *)(lVar8 + 8 +
                                (int64_t)((*(int *)(lVar8 + 0x34) + -1 + iVar12) % 10) * 4) !=
                        iStack_70)) {
                      *(int *)(lVar8 + 8 + (int64_t)((*(int *)(lVar8 + 0x34) + iVar12) % 10) * 4) =
                           iStack_70;
                      if (*(int *)(lVar8 + 0x30) < 10) {
                        *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
                      }
                      else {
                        *(int *)(lVar8 + 0x34) = (*(int *)(lVar8 + 0x34) + 1) % 10;
                      }
                    }
                  }
                  bVar13 = true;
                  param_2 = lStack_e8;
                  if (iStack_94 <= *(int *)(param_1 + 0x3c)) goto LAB_1805b52d7;
                  lVar10 = *(int64_t *)(lVar10 + 0x8e0);
                  iVar12 = *(int *)(lVar10 + 0x30);
                  if ((iVar12 != 0) &&
                     (*(int *)(lVar10 + 8 +
                              (int64_t)((*(int *)(lVar10 + 0x34) + -1 + iVar12) % 10) * 4) ==
                      iStack_6c)) goto LAB_1805b52d7;
                  *(int *)(lVar10 + 8 + (int64_t)((*(int *)(lVar10 + 0x34) + iVar12) % 10) * 4) =
                       iStack_6c;
                  if (*(int *)(lVar10 + 0x30) < 10) {
                    bVar13 = true;
                    *(int *)(lVar10 + 0x30) = *(int *)(lVar10 + 0x30) + 1;
                    goto LAB_1805b52d7;
                  }
                  *(int *)(lVar10 + 0x34) = (*(int *)(lVar10 + 0x34) + 1) % 10;
                  goto LAB_1805b52e7;
                }
              }
            }
            break;
          }
          if ((bVar13) &&
             (cVar7 = FUN_180646500(param_2,aiStack_90 + iVar12,&unknown_var_5424_ptr), cVar7 != '\0')) {
            auStack_108[0] = 0;
            cVar7 = FUN_180646a60(param_2,*(int32_t *)(param_1 + 0x3c),auStack_108);
            uVar9 = auStack_108[0];
            if (cVar7 == '\0') goto LAB_1805b46ce;
            bVar13 = true;
          }
          else {
            uVar9 = 0;
LAB_1805b46ce:
            bVar13 = false;
          }
          *puVar11 = uVar9;
          iVar12 = iVar12 + 1;
          puVar11 = puVar11 + 1;
        } while (bVar13);
      }
    }
    bVar14 = false;
LAB_1805b50ac:
    bVar13 = false;
  }
  else {
LAB_1805b52d7:
    bVar14 = false;
    if (!bVar13) goto LAB_1805b50ac;
LAB_1805b52e7:
    auStack_108[0] = 0;
    cVar7 = FUN_18055f260(param_2,auStack_108,&unknown_var_5344_ptr);
    bVar14 = auStack_108[0] != 0;
    if (cVar7 == '\0') goto LAB_1805b50ac;
    bVar13 = true;
  }
  if (bVar13) {
    if (bVar14) {
      cVar7 = FUN_1805b6170(param_1,param_2);
      if (cVar7 == '\0') {
        bVar13 = false;
        goto LAB_1805b5113;
      }
      bVar13 = true;
    }
    if ((*(int *)(param_1 + 0x3c) < iVar5) ||
       ((iVar5 == *(int *)(param_1 + 0x3c) && (*(int *)(param_1 + 0x40) < uStack_d8._4_4_)))) {
      *(uint64_t *)(param_1 + 0x5928) = uStack_c0;
      *(uint64_t *)(param_1 + 0x3c) = uVar6;
    }
  }
LAB_1805b5113:
  FUN_1805b3da0(param_1);
  if (bVar13) {
    *(uint64_t *)(param_1 + 0x20) = *(uint64_t *)(param_2 + 0x5a8);
  }
FUN_1805b5140:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_68 ^ (uint64_t)auStack_128);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




