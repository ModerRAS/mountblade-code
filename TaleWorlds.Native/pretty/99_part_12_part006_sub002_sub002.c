#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part006_sub002_sub002.c - 1 个函数

// 函数: void FUN_1807cb540(int64_t param_1,uint param_2,int64_t param_3)
void FUN_1807cb540(int64_t param_1,uint param_2,int64_t param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  int32_t *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte bVar15;
  int64_t *plVar16;
  uint uVar17;
  uint uVar19;
  int iVar20;
  bool bVar22;
  bool bVar23;
  int8_t auStack_518 [32];
  uint64_t uStack_4f8;
  int32_t uStack_4f0;
  int32_t uStack_4ec;
  uint64_t uStack_4e8;
  byte abStack_4d8 [4];
  ushort auStack_4d4 [2];
  ushort auStack_4d0 [2];
  char cStack_4cc;
  byte abStack_4cb [3];
  int iStack_4c8;
  ushort auStack_4c4 [2];
  short asStack_4c0 [4];
  int iStack_4b8;
  int32_t uStack_4b4;
  int64_t lStack_4b0;
  uint64_t uStack_4a8;
  int iStack_4a0;
  int aiStack_49c [2];
  int32_t uStack_494;
  uint uStack_490;
  int64_t lStack_480;
  int8_t auStack_478 [4];
  int8_t auStack_474 [20];
  int64_t lStack_460;
  uint64_t uStack_458;
  void *puStack_450;
  uint64_t uStack_448;
  uint64_t uStack_440;
  uint64_t uStack_438;
  uint64_t uStack_430;
  uint64_t uStack_428;
  uint64_t uStack_420;
  int8_t auStack_258 [32];
  int8_t auStack_238 [256];
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  int64_t *plVar18;
  int64_t *plVar21;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_518;
  auStack_4d0[0] = 0;
  uStack_490 = param_2;
  lStack_460 = param_3;
  if ((*(uint *)(*(int64_t *)(param_1 + 0x170) + 0x194) & 1) != 0) {
    *(int32_t *)(param_1 + 0x28) = 0x10;
    *(uint64_t *)(param_1 + 0x120) = 0;
    *(uint64_t *)(param_1 + 0x128) = 0;
    *(uint64_t *)(param_1 + 0x130) = 0;
    *(uint64_t *)(param_1 + 0x148) = 0;
    *(uint64_t *)(param_1 + 0x138) = 0;
    *(uint64_t *)(param_1 + 0x168) = 0;
    *(int32_t *)(param_1 + 0x18) = 0;
    *(uint64_t *)(param_1 + 8) = 0;
    iVar3 = (**(code **)(**(int64_t **)(param_1 + 0x170) + 0x10))
                      (*(int64_t **)(param_1 + 0x170),&uStack_494);
    if ((iVar3 == 0) && (iVar3 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),0,0), iVar3 == 0)) {
      uStack_4f8 = 0;
      iVar3 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),auStack_238,1,0x11);
      if ((iVar3 == 0) && (iVar3 = func_0x00018076b6b0(auStack_238,&unknown_var_8504_ptr,0x11), iVar3 == 0)
         ) {
        plVar16 = (int64_t *)(param_1 + 0x3d0);
        uStack_4f8 = 0;
        *plVar16 = 0;
        *(uint64_t *)(param_1 + 0x3d8) = 0;
        *(uint64_t *)(param_1 + 0x3e0) = 0;
        *(uint64_t *)(param_1 + 1000) = 0;
        *(uint64_t *)(param_1 + 0x3f0) = 0;
        *(uint64_t *)(param_1 + 0x3f8) = 0;
        *(uint64_t *)(param_1 + 0x400) = 0;
        *(uint64_t *)(param_1 + 0x408) = 0;
        *(uint64_t *)(param_1 + 0x410) = 0;
        *(uint64_t *)(param_1 + 0x418) = 0;
        *(uint64_t *)(param_1 + 0x420) = 0;
        *(uint64_t *)(param_1 + 0x428) = 0;
        *(uint64_t *)(param_1 + 0x430) = 0;
        *(uint64_t *)(param_1 + 0x438) = 0;
        *(uint64_t *)(param_1 + 0x440) = 0;
        *(uint64_t *)(param_1 + 0x448) = 0;
        *(uint64_t *)(param_1 + 0x450) = 0;
        *(uint64_t *)(param_1 + 0x458) = 0;
        *(uint64_t *)(param_1 + 0x460) = 0;
        *(uint64_t *)(param_1 + 0x468) = 0;
        *(uint64_t *)(param_1 + 0x470) = 0;
        *(uint64_t *)(param_1 + 0x478) = 0;
        *(uint64_t *)(param_1 + 0x480) = 0;
        *(uint64_t *)(param_1 + 0x488) = 0;
        *(uint64_t *)(param_1 + 0x490) = 0;
        *(uint64_t *)(param_1 + 0x498) = 0;
        *(uint64_t *)(param_1 + 0x4a0) = 0;
        *(uint64_t *)(param_1 + 0x4a8) = 0;
        *(uint64_t *)(param_1 + 0x4b0) = 0;
        *(uint64_t *)(param_1 + 0x4b8) = 0;
        *(uint64_t *)(param_1 + 0x4c0) = 0;
        *(uint64_t *)(param_1 + 0x4c8) = 0;
        *(uint64_t *)(param_1 + 0x4d0) = 0;
        *(uint64_t *)(param_1 + 0x4d8) = 0;
        *(uint64_t *)(param_1 + 0x4e0) = 0;
        *(uint64_t *)(param_1 + 0x4e8) = 0;
        *(uint64_t *)(param_1 + 0x4f0) = 0;
        *(uint64_t *)(param_1 + 0x4f8) = 0;
        *(uint64_t *)(param_1 + 0x500) = 0;
        *(uint64_t *)(param_1 + 0x508) = 0;
        *(uint64_t *)(param_1 + 0x510) = 0;
        *(uint64_t *)(param_1 + 0x518) = 0;
        *(uint64_t *)(param_1 + 0x520) = 0;
        *(uint64_t *)(param_1 + 0x528) = 0;
        *(uint64_t *)(param_1 + 0x530) = 0;
        *(uint64_t *)(param_1 + 0x538) = 0;
        *(uint64_t *)(param_1 + 0x540) = 0;
        *(uint64_t *)(param_1 + 0x548) = 0;
        *(uint64_t *)(param_1 + 0x550) = 0;
        *(uint64_t *)(param_1 + 0x558) = 0;
        *(uint64_t *)(param_1 + 0x560) = 0;
        *(uint64_t *)(param_1 + 0x568) = 0;
        *(uint64_t *)(param_1 + 0x570) = 0;
        *(uint64_t *)(param_1 + 0x578) = 0;
        *(uint64_t *)(param_1 + 0x580) = 0;
        *(uint64_t *)(param_1 + 0x588) = 0;
        *(uint64_t *)(param_1 + 0x590) = 0;
        *(uint64_t *)(param_1 + 0x598) = 0;
        *(uint64_t *)(param_1 + 0x5a0) = 0;
        *(uint64_t *)(param_1 + 0x5a8) = 0;
        *(uint64_t *)(param_1 + 0x5b0) = 0;
        *(uint64_t *)(param_1 + 0x5b8) = 0;
        *(uint64_t *)(param_1 + 0x5c0) = 0;
        *(uint64_t *)(param_1 + 0x5c8) = 0;
        *(uint64_t *)(param_1 + 0x278) = 0;
        *(int32_t *)(param_1 + 0xbd8) = 0x3f800000;
        *(int32_t *)(param_1 + 0xbd4) = 0x3f800000;
        *(int32_t *)(param_1 + 0x860) = 6;
        *(int32_t *)(param_1 + 0x864) = 0x7d;
        *(int8_t *)(param_1 + 0x8e8) = 0x40;
        *(int32_t *)(param_1 + 0x8f0) = 0;
        *(int32_t *)(param_1 + 0xbd0) = 0;
        *(int32_t *)(param_1 + 0x8fc) = 0;
        iVar3 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),param_1 + 0x178,1,0x14);
        if ((((iVar3 == 0) &&
             (iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),&cStack_4cc), iVar3 == 0)) &&
            (cStack_4cc == '\x1a')) &&
           (iVar3 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),0x3c,0), iVar3 == 0)) {
          uStack_4f8 = 0;
          iVar3 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),&iStack_4a0,4,1);
          if (((iVar3 == 0) &&
              (iVar3 = FUN_180769b00(*(uint64_t *)(param_1 + 0x170),param_1 + 0x8ec), iVar3 == 0))
             && (iVar3 = FUN_180769b00(*(uint64_t *)(param_1 + 0x170),param_1 + 0xbd0), iVar3 == 0
                )) {
            piVar2 = (int *)(param_1 + 0x3c8);
            iVar3 = FUN_180769b00(*(uint64_t *)(param_1 + 0x170),piVar2);
            if (((iVar3 == 0) &&
                (iVar3 = FUN_180769ac0(*(uint64_t *)(param_1 + 0x170),auStack_4d0), iVar3 == 0))
               && ((iVar3 = FUN_180769b00(*(uint64_t *)(param_1 + 0x170),param_1 + 0x8f8),
                   iVar3 == 0 &&
                   (((iVar3 = FUN_180769ac0(*(uint64_t *)(param_1 + 0x170),param_1 + 0xbe6),
                     iVar3 == 0 &&
                     (iVar3 = FUN_180769b00(*(uint64_t *)(param_1 + 0x170),param_1 + 0x860),
                     iVar3 == 0)) &&
                    (iVar3 = FUN_180769b40(*(uint64_t *)(param_1 + 0x170),param_1 + 0x864),
                    iVar3 == 0)))))) {
              pbVar13 = (byte *)(param_1 + 0x290);
              plVar18 = (int64_t *)0x0;
              uVar17 = 0;
              uStack_4f8 = 0;
              iVar3 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),pbVar13,1,0x100);
              if (iVar3 == 0) {
                uStack_4e8 = uStack_4e8 & 0xffffffffffffff00;
                _uStack_4f0 = CONCAT44(uStack_4ec,1);
                uStack_4f8 = CONCAT44(uStack_4f8._4_4_,4);
                iVar3 = FUN_180772fe0(param_1,9,&unknown_var_5832_ptr,piVar2);
                if (iVar3 == 0) {
                  plVar21 = plVar18;
                  if (0 < *piVar2) {
                    do {
                      uStack_4f8 = uStack_4f8 & 0xffffffff00000000;
                      plVar4 = (int64_t *)
                               SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x130,
                                             &unknown_var_8528_ptr,0x90b);
                      plVar5 = plVar18;
                      if (plVar4 != (int64_t *)0x0) {
                        plVar5 = plVar4 + 1;
                        plVar4[3] = 0;
                        plVar4[2] = (int64_t)plVar5;
                        *plVar5 = (int64_t)plVar5;
                        plVar5 = plVar4;
                      }
                      *plVar16 = (int64_t)plVar5;
                      if (plVar5 == (int64_t *)0x0) goto FUN_1807cc6a5;
                      uVar19 = (int)plVar21 + 1;
                      plVar21 = (int64_t *)(uint64_t)uVar19;
                      *plVar5 = param_1;
                      plVar16 = plVar16 + 1;
                    } while ((int)uVar19 < *piVar2);
                  }
                  iVar3 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),iStack_4a0 + 0x3c,0);
                  if (iVar3 == 0) {
                    *(int32_t *)(param_1 + 0x8f0) = 0;
                    if (0 < (int)*(uint *)(param_1 + 0x8ec)) {
                      uVar10 = (uint64_t)*(uint *)(param_1 + 0x8ec);
                      do {
                        bVar15 = *pbVar13;
                        if ((bVar15 < 0xfe) && (*(int *)(param_1 + 0x8f0) <= (int)(uint)bVar15)) {
                          *(uint *)(param_1 + 0x8f0) = bVar15 + 1;
                        }
                        pbVar13 = pbVar13 + 1;
                        uVar10 = uVar10 - 1;
                      } while (uVar10 != 0);
                      uVar17 = *(uint *)(param_1 + 0x8f0);
                    }
                    uStack_4f8 = uStack_4f8 & 0xffffffff00000000;
                    if ((int)uVar17 <= (int)(uint)auStack_4d0[0]) {
                      uVar17 = (uint)auStack_4d0[0];
                    }
                    *(uint *)(param_1 + 0x8f4) = uVar17;
                    lVar6 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar17 << 4,
                                          &unknown_var_8528_ptr,0x92b);
                    *(int64_t *)(param_1 + 0x278) = lVar6;
                    if (lVar6 != 0) {
                      plVar16 = plVar18;
                      if (auStack_4d0[0] != 0) {
                        do {
                          iVar20 = 0;
                          lVar6 = *(int64_t *)(param_1 + 0x278);
                          uStack_4f8 = 0;
                          iVar3 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),auStack_478,4);
                          if (((iVar3 != 0) ||
                              (iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),0), iVar3 != 0
                              )) || ((iVar3 = FUN_180769ac0(*(uint64_t *)(param_1 + 0x170),
                                                            auStack_4c4), iVar3 != 0 ||
                                     (iVar3 = FUN_180769ac0(*(uint64_t *)(param_1 + 0x170),
                                                            asStack_4c0), iVar3 != 0))))
                          goto FUN_1807cc6a5;
                          *(uint *)((int64_t)plVar16 + lVar6) = (uint)auStack_4c4[0];
                          uStack_4f8 = uStack_4f8 & 0xffffffff00000000;
                          pbVar13 = (byte *)SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                                          (uint)auStack_4c4[0] *
                                                          *(int *)(param_1 + 0x3c8) * 5,
                                                          &unknown_var_8528_ptr,0x95e);
                          *(byte **)((int64_t)plVar16 + lVar6 + 8) = pbVar13;
                          if (pbVar13 == (byte *)0x0) goto FUN_1807cc6a5;
                          if ((asStack_4c0[0] != 0) &&
                             (0 < *(int *)((int64_t)plVar16 + lVar6) * *(int *)(param_1 + 0x3c8)))
                          {
                            pbVar14 = pbVar13 + 3;
                            do {
                              iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),abStack_4d8);
                              if (iVar3 != 0) goto FUN_1807cc6a5;
                              if ((char)abStack_4d8[0] < '\0') {
                                if ((((((abStack_4d8[0] & 1) != 0) &&
                                      (iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                             pbVar13), iVar3 != 0)) ||
                                     (((abStack_4d8[0] & 2) != 0 &&
                                      (iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                             pbVar14 + -2), iVar3 != 0)))) ||
                                    (((abStack_4d8[0] & 4) != 0 &&
                                     (iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                            pbVar14 + -1), iVar3 != 0)))) ||
                                   (((abStack_4d8[0] & 8) != 0 &&
                                    (iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),pbVar14)
                                    , iVar3 != 0)))) goto FUN_1807cc6a5;
                                if ((abStack_4d8[0] & 0x10) != 0) goto LAB_1807cbd3d;
                              }
                              else {
                                if (abStack_4d8[0] != 0) {
                                  *pbVar13 = abStack_4d8[0];
                                }
                                iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),pbVar14 + -2)
                                ;
                                if (((iVar3 != 0) ||
                                    (iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                           pbVar14 + -1), iVar3 != 0)) ||
                                   (iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),pbVar14),
                                   iVar3 != 0)) goto FUN_1807cc6a5;
LAB_1807cbd3d:
                                iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),pbVar14 + 1);
                                if (iVar3 != 0) goto FUN_1807cc6a5;
                              }
                              if (*pbVar13 == 0x61) {
                                *pbVar13 = 0xff;
                              }
                              if (0x80 < pbVar14[-2]) {
                                pbVar14[-2] = 0;
                              }
                              pbVar13 = pbVar13 + 5;
                              pbVar14 = pbVar14 + 5;
                              iVar20 = iVar20 + 1;
                            } while (iVar20 < *(int *)((int64_t)plVar16 + lVar6) *
                                              *(int *)(param_1 + 0x3c8));
                          }
                          uVar17 = (int)plVar18 + 1;
                          plVar18 = (int64_t *)(uint64_t)uVar17;
                          plVar16 = plVar16 + 2;
                        } while ((int)uVar17 < (int)(uint)auStack_4d0[0]);
                      }
                      uVar17 = (uint)auStack_4d0[0];
                      if ((int)uVar17 < *(int *)(param_1 + 0x8f0)) {
                        lVar6 = (uint64_t)uVar17 << 4;
                        do {
                          lVar8 = *(int64_t *)(param_1 + 0x278);
                          uStack_4f8 = uStack_4f8 & 0xffffffff00000000;
                          *(int32_t *)(lVar6 + lVar8) = 0x40;
                          lVar7 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                                *(int *)(param_1 + 0x3c8) * 0x140,&unknown_var_8528_ptr,
                                                0x9d8);
                          *(int64_t *)(lVar6 + 8 + lVar8) = lVar7;
                          if (lVar7 == 0) goto FUN_1807cc6a5;
                          uVar17 = uVar17 + 1;
                          lVar6 = lVar6 + 0x10;
                        } while ((int)uVar17 < *(int *)(param_1 + 0x8f0));
                      }
                      uStack_4f8 = uStack_4f8 & 0xffffffff00000000;
                      lVar6 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                            *(int *)(param_1 + 0x8f8) * 0x618,&unknown_var_8528_ptr,0x9e5);
                      *(int64_t *)(param_1 + 0x900) = lVar6;
                      if (lVar6 != 0) {
                        iStack_4b8 = 0;
                        if (0 < *(int *)(param_1 + 0x8f8)) {
                          lStack_480 = 0;
                          do {
                            lVar6 = *(int64_t *)(param_1 + 0x900) + lStack_480;
                            uStack_4a8 = 0;
                            lStack_4b0 = lVar6;
                            func_0x00018076a7d0(*(uint64_t *)(param_1 + 0x170),&iStack_4c8);
                            uStack_4f8 = 0;
                            iVar3 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),aiStack_49c,4);
                            if (iVar3 != 0) break;
                            iStack_4c8 = iStack_4c8 + aiStack_49c[0];
                            uStack_4f8 = 0;
                            iVar3 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),lVar6,1);
                            if (((iVar3 != 0) ||
                                (iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),0),
                                iVar3 != 0)) ||
                               (iVar3 = FUN_180769ac0(*(uint64_t *)(param_1 + 0x170),auStack_4d4),
                               iVar3 != 0)) goto FUN_1807cc6a5;
                            *(uint *)(lVar6 + 0x1c) = (uint)auStack_4d4[0];
                            if (auStack_4d4[0] == 0) {
                              *(uint64_t *)(lVar6 + 0x20) = 0;
                              *(uint64_t *)(lVar6 + 0x58) = 0;
                              *(uint64_t *)(lVar6 + 0x90) = 0;
                              *(uint64_t *)(lVar6 + 200) = 0;
                              *(uint64_t *)(lVar6 + 0x100) = 0;
                              *(uint64_t *)(lVar6 + 0x138) = 0;
                              *(uint64_t *)(lVar6 + 0x170) = 0;
                              *(uint64_t *)(lVar6 + 0x1a8) = 0;
                              *(uint64_t *)(lVar6 + 0x1e0) = 0;
                              *(uint64_t *)(lVar6 + 0x218) = 0;
                              *(uint64_t *)(lVar6 + 0x250) = 0;
                              *(uint64_t *)(lVar6 + 0x288) = 0;
                              *(uint64_t *)(lVar6 + 0x2c0) = 0;
                              *(uint64_t *)(lVar6 + 0x2f8) = 0;
                              *(uint64_t *)(lVar6 + 0x330) = 0;
                              *(uint64_t *)(lVar6 + 0x368) = 0;
                              iVar3 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),iStack_4c8,0);
                              if (iVar3 != 0) goto FUN_1807cc6a5;
                            }
                            else {
                              uStack_4f8 = 0;
                              iVar3 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),auStack_474,4);
                              if (iVar3 != 0) goto FUN_1807cc6a5;
                              uStack_4f8 = 0;
                              iVar3 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),lVar6 + 0x3a0,1
                                                    ,0x60);
                              if (iVar3 != 0) goto FUN_1807cc6a5;
                              uStack_4f8 = 0;
                              iVar3 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),lVar6 + 0x402,2
                                                    ,0x18);
                              if (iVar3 != 0) goto FUN_1807cc6a5;
                              uStack_4f8 = 0;
                              iVar3 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),lVar6 + 0x45a,2
                                                    ,0x18);
                              if ((((iVar3 != 0) ||
                                   (iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                          lVar6 + 0x401), iVar3 != 0)) ||
                                  ((iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                          lVar6 + 0x458), iVar3 != 0 ||
                                   ((iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                           lVar6 + 0x452), iVar3 != 0 ||
                                    (iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                           lVar6 + 0x453), iVar3 != 0)))))) ||
                                 ((iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                         lVar6 + 0x454), iVar3 != 0 ||
                                  (((((((iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                               lVar6 + 0x4aa), iVar3 != 0 ||
                                        (iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                               lVar6 + 0x4ab), iVar3 != 0)) ||
                                       (iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                              lVar6 + 0x4ac), iVar3 != 0)) ||
                                      ((iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                              lVar6 + 0x400), iVar3 != 0 ||
                                       (iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                              lVar6 + 0x457), iVar3 != 0)))) ||
                                     (iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                            lVar6 + 0x507), iVar3 != 0)) ||
                                    ((iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                            lVar6 + 0x508), iVar3 != 0 ||
                                     (iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                            lVar6 + 0x509), iVar3 != 0)))) ||
                                   ((iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                           lVar6 + 0x50a), iVar3 != 0 ||
                                    (iVar3 = FUN_180769ac0(*(uint64_t *)(param_1 + 0x170),
                                                           lVar6 + 0x50c), iVar3 != 0))))))))
                              goto FUN_1807cc6a5;
                              *(short *)(lVar6 + 0x50c) = *(short *)(lVar6 + 0x50c) * 2;
                              if (*(byte *)(lVar6 + 0x401) < 2) {
                                *(int8_t *)(lVar6 + 0x400) = 0;
                              }
                              if (*(byte *)(lVar6 + 0x458) < 2) {
                                *(int8_t *)(lVar6 + 0x457) = 0;
                              }
                              iVar3 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),iStack_4c8,0);
                              if (iVar3 != 0) goto FUN_1807cc6a5;
                              if (auStack_4d4[0] != 0) {
                                uStack_4f8 = 0;
                                *(uint64_t *)(lVar6 + 0x20) = 0;
                                *(uint64_t *)(lVar6 + 0x28) = 0;
                                *(uint64_t *)(lVar6 + 0x30) = 0;
                                *(uint64_t *)(lVar6 + 0x38) = 0;
                                *(uint64_t *)(lVar6 + 0x40) = 0;
                                *(uint64_t *)(lVar6 + 0x48) = 0;
                                *(uint64_t *)(lVar6 + 0x50) = 0;
                                *(int *)(param_1 + 0x8fc) = *(int *)(param_1 + 0x8fc) + 1;
                                iVar3 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),&uStack_4b4,4
                                                      ,1);
                                if (iVar3 == 0) {
                                  uStack_4f8 = 0;
                                  iVar3 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),
                                                        lVar6 + 0x30,4,1);
                                  if (iVar3 == 0) {
                                    uStack_4f8 = 0;
                                    iVar3 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),
                                                          lVar6 + 0x34,4,1);
                                    if (((iVar3 == 0) &&
                                        (iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                               lVar6 + 0x2c), iVar3 == 0)) &&
                                       (iVar3 = FUN_1807697a0(*(uint64_t *)(param_1 + 0x170),
                                                              lVar6 + 0x3c), iVar3 == 0)) {
                                      *(int32_t *)(lVar6 + 0x54) = 1;
                                      iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                            abStack_4cb);
                                      if (iVar3 == 0) {
                                        bVar15 = (abStack_4cb[0] & 1) * '\x02' + 8;
                                        if ((abStack_4cb[0] & 2) != 0) {
                                          bVar15 = bVar15 & 0xfd | 4;
                                        }
                                        if ((abStack_4cb[0] & 0x10) != 0) {
                                          *(int32_t *)(lVar6 + 0x54) = 2;
                                        }
                                        if ((bVar15 & 6) == 0) {
                                          *(int32_t *)(lVar6 + 0x34) = uStack_4b4;
                                          uVar17 = 0;
                                        }
                                        else {
                                          uVar17 = *(uint *)(lStack_4b0 + 0x30);
                                        }
                                        uVar19 = *(uint *)(lVar6 + 0x34);
                                        if (uVar19 == 0) {
                                          *(int32_t *)(lVar6 + 0x34) = uStack_4b4;
                                          uVar19 = *(uint *)(lStack_4b0 + 0x34);
                                          uVar17 = 0;
                                        }
                                        bVar22 = *(int *)(lVar6 + 0x54) != 1;
                                        *(int32_t *)(lVar6 + 0x40) = uStack_4b4;
                                        bVar23 = (abStack_4cb[0] & 0x20) != 0;
                                        *(uint *)(lVar6 + 0x30) = (uVar17 >> bVar22) >> bVar23;
                                        *(uint *)(lVar6 + 0x34) = (uVar19 >> bVar22) >> bVar23;
                                        iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),
                                                              lVar6 + 0x2d);
                                        if (((iVar3 == 0) &&
                                            (iVar3 = FUN_1807697a0(*(uint64_t *)(param_1 + 0x170),
                                                                   lVar6 + 0x38), iVar3 == 0)) &&
                                           (iVar3 = FUN_180769720(*(uint64_t *)(param_1 + 0x170),0
                                                                 ), iVar3 == 0)) {
                                          uStack_4f8 = 0;
                                          iVar3 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),
                                                                auStack_258,1,0x16);
                                          if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
                                            SystemDataValidator(auStack_138,0x100,&unknown_var_5872_ptr,
                                                          iStack_4b8);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                goto FUN_1807cc6a5;
                              }
                              puVar11 = (uint64_t *)(lVar6 + 0x20);
                              lVar6 = 0x10;
                              do {
                                *puVar11 = 0;
                                puVar11 = puVar11 + 7;
                                lVar6 = lVar6 + -1;
                              } while (lVar6 != 0);
                            }
                            iStack_4b8 = iStack_4b8 + 1;
                            lStack_480 = lStack_480 + 0x618;
                          } while (iStack_4b8 < *(int *)(param_1 + 0x8f8));
                        }
                        lVar6 = 0;
                        *(uint64_t *)(param_1 + 0x848) = 0;
                        if (*(int *)(param_1 + 0x8fc) != 0) {
                          uStack_4f8 = uStack_4f8 & 0xffffffff00000000;
                          lVar8 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                                *(int *)(param_1 + 0x8fc) * 8,&unknown_var_8528_ptr,0xbdc);
                          *(int64_t *)(param_1 + 0x848) = lVar8;
                          if (lVar8 == 0) goto FUN_1807cc6a5;
                        }
                        iVar3 = 0;
                        lVar8 = lVar6;
                        if (0 < *(int *)(param_1 + 0x8f8)) {
                          do {
                            lVar7 = *(int64_t *)(param_1 + 0x900);
                            iVar20 = 0;
                            if (0 < *(int *)(lVar7 + 0x1c + lVar6)) {
                              do {
                                lVar9 = (int64_t)iVar20;
                                iVar20 = iVar20 + 1;
                                *(int64_t *)(*(int64_t *)(param_1 + 0x848) + lVar8 * 8) =
                                     lVar7 + 0x20 + lVar6 + lVar9 * 0x38;
                                lVar8 = lVar8 + 1;
                              } while (iVar20 < *(int *)(lVar7 + 0x1c + lVar6));
                            }
                            iVar3 = iVar3 + 1;
                            lVar6 = lVar6 + 0x618;
                          } while (iVar3 < *(int *)(param_1 + 0x8f8));
                        }
                        *(uint64_t *)(param_1 + 0x390) = 0;
                        *(uint64_t *)(param_1 + 0x398) = 0;
                        *(uint64_t *)(param_1 + 0x3a0) = 0;
                        *(uint64_t *)(param_1 + 0x3a8) = 0;
                        *(uint64_t *)(param_1 + 0x3b0) = 0;
                        *(uint64_t *)(param_1 + 0x3b8) = 0;
                        *(uint64_t *)(param_1 + 0x3c0) = 0;
                        *(uint64_t **)(param_1 + 8) = (uint64_t *)(param_1 + 0x390);
                        *(int32_t *)(param_1 + 0x3a4) = uStack_494;
                        if ((lStack_460 == 0) || (*(int *)(lStack_460 + 0x14) == 0)) {
                          *(int32_t *)(*(int64_t *)(param_1 + 8) + 8) = 5;
                        }
                        else {
                          *(int *)(*(int64_t *)(param_1 + 8) + 8) = *(int *)(lStack_460 + 0x14);
                        }
                        *(int32_t *)(*(int64_t *)(param_1 + 8) + 0xc) = 2;
                        **(int64_t **)(param_1 + 8) = param_1 + 0x178;
                        puVar12 = (int32_t *)(*(int64_t *)(param_1 + 8) + 0x10);
                        if (puVar12 != (int32_t *)0x0) {
                          *puVar12 = *(int32_t *)(*(int64_t *)(param_1 + 0x20) + 0x6d0);
                        }
                        puStack_450 = &unknown_var_8648_ptr;
                        uStack_448 = 0;
                        uStack_440 = 0;
                        uStack_438 = 0;
                        uStack_430 = 0;
                        uStack_428 = 0;
                        uStack_420 = 0;
                        *(int32_t *)(param_1 + 0x110) = 0;
                        uStack_458 = 0;
                        uStack_4f8 = CONCAT71(uStack_4f8._1_7_,1);
                        iVar3 = FUN_180742e00(*(uint64_t *)(param_1 + 0x20),&uStack_458,0,
                                              param_1 + 0x280);
                        if (iVar3 == 0) {
                          LOCK();
                          puVar1 = (uint *)(*(int64_t *)(param_1 + 0x280) + 100);
                          *puVar1 = *puVar1 | 0x100;
                          UNLOCK();
                          FUN_1807621f0(*(uint64_t *)(param_1 + 0x280),0,
                                        *(int32_t *)(*(int64_t *)(param_1 + 8) + 0xc),0);
                          func_0x000180762150(*(uint64_t *)(param_1 + 0x280),1,0);
                          iVar3 = FUN_18080ce10(param_1,*(int32_t *)(param_1 + 0x3c8));
                          if (iVar3 == 0) {
                            if ((uStack_490 & 0x4100) == 0) {
                              *(uint64_t *)(param_1 + 0x288) = 0;
                              *(int32_t *)(*(int64_t *)(param_1 + 8) + 0x18) = 0xffffffff;
                            }
                            else {
                              uStack_4f8 = uStack_4f8 & 0xffffffff00000000;
                              lVar6 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                                    *(int *)(param_1 + 0x8ec) << 8,&unknown_var_8528_ptr,
                                                    0xc29);
                              *(int64_t *)(param_1 + 0x288) = lVar6;
                              if (lVar6 == 0) goto FUN_1807cc6a5;
                              FUN_1807cb0e0(param_1);
                            }
                            *(int32_t *)(param_1 + 0x18) = 0;
                            FUN_18080d060(param_1,1);
                            if (((*(byte *)(param_1 + 0x160) & 0x80) != 0) &&
                               (iVar3 = FUN_180769080(*(uint64_t *)(param_1 + 0x170)), iVar3 == 0)
                               ) {
                              uStack_4f8 = CONCAT71(uStack_4f8._1_7_,1);
                    // WARNING: Subroutine does not return
                              SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                            *(uint64_t *)(param_1 + 0x170),&unknown_var_8528_ptr,0xc42);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
FUN_1807cc6a5:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_518);
}



// WARNING: Removing unreachable block (ram,0x0001807cc51b)
// WARNING: Removing unreachable block (ram,0x0001807cc520)
// WARNING: Removing unreachable block (ram,0x0001807cc53a)
// WARNING: Removing unreachable block (ram,0x0001807cc55d)
// WARNING: Removing unreachable block (ram,0x0001807cc59d)
// WARNING: Removing unreachable block (ram,0x0001807cc5c5)
// WARNING: Removing unreachable block (ram,0x0001807cc5e3)
// WARNING: Removing unreachable block (ram,0x0001807cc6d0)
// WARNING: Removing unreachable block (ram,0x0001807cc706)
// WARNING: Removing unreachable block (ram,0x0001807cc70b)
// WARNING: Removing unreachable block (ram,0x0001807cc712)
// WARNING: Removing unreachable block (ram,0x0001807cc720)
// WARNING: Removing unreachable block (ram,0x0001807cc6df)
// WARNING: Removing unreachable block (ram,0x0001807cc6e6)
// WARNING: Removing unreachable block (ram,0x0001807cc6f0)
// WARNING: Removing unreachable block (ram,0x0001807cc704)
// WARNING: Removing unreachable block (ram,0x0001807cc735)
// WARNING: Removing unreachable block (ram,0x0001807cc776)
// WARNING: Removing unreachable block (ram,0x0001807cc7c1)
// WARNING: Removing unreachable block (ram,0x0001807cc7d2)
// WARNING: Removing unreachable block (ram,0x0001807cc7db)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address






