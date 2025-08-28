#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part007.c - 3 个函数

// 函数: void FUN_1807cb8fe(void)
void FUN_1807cb8fe(void)

{
  uint *puVar1;
  int *piVar2;
  uint64_t uVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  int32_t *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  int64_t unaff_RBP;
  byte bVar15;
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  uint uVar16;
  int64_t lVar18;
  uint uVar19;
  int iVar20;
  bool bVar22;
  bool bVar23;
  int32_t extraout_XMM0_Da;
  int32_t uVar24;
  int32_t extraout_XMM0_Da_00;
  uint64_t uVar25;
  byte bStack0000000000000040;
  ushort uStack0000000000000044;
  ushort uStack0000000000000048;
  byte bStack000000000000004d;
  int iStack0000000000000050;
  ushort uStack0000000000000054;
  short in_stack_00000058;
  int iStack0000000000000060;
  int32_t uStack0000000000000064;
  int64_t in_stack_00000068;
  uint64_t in_stack_00000070;
  int iStack0000000000000078;
  int iStack000000000000007c;
  int64_t *plVar17;
  int64_t *plVar21;
  
  iVar4 = FUN_180769b00();
  if ((iVar4 == 0) &&
     (iVar4 = FUN_180769b00(*(uint64_t *)(unaff_RDI + 0x170),unaff_RDI + 0xbd0), iVar4 == 0)) {
    piVar2 = (int *)(unaff_RDI + 0x3c8);
    iVar4 = FUN_180769b00(*(uint64_t *)(unaff_RDI + 0x170),piVar2);
    if ((iVar4 == 0) &&
       ((((iVar4 = FUN_180769ac0(*(uint64_t *)(unaff_RDI + 0x170),&stack0x00000048), iVar4 == 0 &&
          (iVar4 = FUN_180769b00(*(uint64_t *)(unaff_RDI + 0x170),unaff_RDI + 0x8f8), iVar4 == 0))
         && (iVar4 = FUN_180769ac0(*(uint64_t *)(unaff_RDI + 0x170),unaff_RDI + 0xbe6), iVar4 == 0
            )) && ((iVar4 = FUN_180769b00(*(uint64_t *)(unaff_RDI + 0x170),unaff_RDI + 0x860),
                   iVar4 == 0 &&
                   (iVar4 = FUN_180769b40(*(uint64_t *)(unaff_RDI + 0x170),unaff_RDI + 0x864),
                   iVar4 == 0)))))) {
      pbVar13 = (byte *)(unaff_RDI + 0x290);
      plVar17 = (int64_t *)0x0;
      uVar16 = 0;
      uVar24 = 0;
      iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RDI + 0x170),pbVar13,1,0x100,0);
      if (iVar4 == 0) {
        uVar25 = CONCAT44(uVar24,4);
        iVar4 = FUN_180772fe0(extraout_XMM0_Da,9,&processed_var_5832_ptr,piVar2,uVar25);
        if (iVar4 == 0) {
          plVar21 = plVar17;
          if (0 < *piVar2) {
            do {
              uVar25 = uVar25 & 0xffffffff00000000;
              plVar5 = (int64_t *)
                       SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x130,&processed_var_8528_ptr,
                                     0x90b,uVar25);
              plVar6 = plVar17;
              if (plVar5 != (int64_t *)0x0) {
                plVar6 = plVar5 + 1;
                plVar5[3] = 0;
                plVar5[2] = (int64_t)plVar6;
                *plVar6 = (int64_t)plVar6;
                plVar6 = plVar5;
              }
              *unaff_RSI = (int64_t)plVar6;
              if (plVar6 == (int64_t *)0x0) goto LAB_1807cc69d;
              uVar19 = (int)plVar21 + 1;
              plVar21 = (int64_t *)(uint64_t)uVar19;
              *plVar6 = unaff_RDI;
              unaff_RSI = unaff_RSI + 1;
            } while ((int)uVar19 < *piVar2);
          }
          iVar4 = FUN_18076a440(*(uint64_t *)(unaff_RDI + 0x170),iStack0000000000000078 + 0x3c,0);
          if (iVar4 == 0) {
            *(int32_t *)(unaff_RDI + 0x8f0) = 0;
            if (0 < (int)*(uint *)(unaff_RDI + 0x8ec)) {
              uVar10 = (uint64_t)*(uint *)(unaff_RDI + 0x8ec);
              do {
                bVar15 = *pbVar13;
                if ((bVar15 < 0xfe) && (*(int *)(unaff_RDI + 0x8f0) <= (int)(uint)bVar15)) {
                  *(uint *)(unaff_RDI + 0x8f0) = bVar15 + 1;
                }
                pbVar13 = pbVar13 + 1;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
              uVar16 = *(uint *)(unaff_RDI + 0x8f0);
            }
            uVar25 = uVar25 & 0xffffffff00000000;
            if ((int)uVar16 <= (int)(uint)uStack0000000000000048) {
              uVar16 = (uint)uStack0000000000000048;
            }
            *(uint *)(unaff_RDI + 0x8f4) = uVar16;
            lVar7 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar16 << 4,&processed_var_8528_ptr
                                  ,0x92b,uVar25);
            *(int64_t *)(unaff_RDI + 0x278) = lVar7;
            if (lVar7 != 0) {
              plVar21 = plVar17;
              if (uStack0000000000000048 != 0) {
                do {
                  iVar20 = 0;
                  lVar7 = *(int64_t *)(unaff_RDI + 0x278);
                  uVar25 = 0;
                  iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RDI + 0x170),unaff_RBP + -0x60,4,1,0);
                  if ((((iVar4 != 0) ||
                       (iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),0), iVar4 != 0)) ||
                      (iVar4 = FUN_180769ac0(*(uint64_t *)(unaff_RDI + 0x170),
                                             (int64_t)&stack0x00000050 + 4), iVar4 != 0)) ||
                     (iVar4 = FUN_180769ac0(*(uint64_t *)(unaff_RDI + 0x170),&stack0x00000058),
                     iVar4 != 0)) goto LAB_1807cc69d;
                  *(uint *)((int64_t)plVar21 + lVar7) = (uint)uStack0000000000000054;
                  uVar25 = uVar25 & 0xffffffff00000000;
                  pbVar13 = (byte *)SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                                  (uint)uStack0000000000000054 *
                                                  *(int *)(unaff_RDI + 0x3c8) * 5,&processed_var_8528_ptr,
                                                  0x95e,uVar25);
                  *(byte **)((int64_t)plVar21 + lVar7 + 8) = pbVar13;
                  if (pbVar13 == (byte *)0x0) goto LAB_1807cc69d;
                  if ((in_stack_00000058 != 0) &&
                     (0 < *(int *)((int64_t)plVar21 + lVar7) * *(int *)(unaff_RDI + 0x3c8))) {
                    pbVar14 = pbVar13 + 3;
                    do {
                      iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),&stack0x00000040);
                      if (iVar4 != 0) goto LAB_1807cc69d;
                      if ((char)bStack0000000000000040 < '\0') {
                        if ((((((bStack0000000000000040 & 1) != 0) &&
                              (iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),pbVar13),
                              iVar4 != 0)) ||
                             (((bStack0000000000000040 & 2) != 0 &&
                              (iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),pbVar14 + -2
                                                    ), iVar4 != 0)))) ||
                            (((bStack0000000000000040 & 4) != 0 &&
                             (iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),pbVar14 + -1)
                             , iVar4 != 0)))) ||
                           (((bStack0000000000000040 & 8) != 0 &&
                            (iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),pbVar14),
                            iVar4 != 0)))) goto LAB_1807cc69d;
                        if ((bStack0000000000000040 & 0x10) != 0) goto LAB_1807cbd3d;
                      }
                      else {
                        if (bStack0000000000000040 != 0) {
                          *pbVar13 = bStack0000000000000040;
                        }
                        iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),pbVar14 + -2);
                        if (((iVar4 != 0) ||
                            (iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),pbVar14 + -1),
                            iVar4 != 0)) ||
                           (iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),pbVar14),
                           iVar4 != 0)) goto LAB_1807cc69d;
LAB_1807cbd3d:
                        iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),pbVar14 + 1);
                        if (iVar4 != 0) goto LAB_1807cc69d;
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
                    } while (iVar20 < *(int *)((int64_t)plVar21 + lVar7) *
                                      *(int *)(unaff_RDI + 0x3c8));
                  }
                  uVar16 = (int)plVar17 + 1;
                  plVar17 = (int64_t *)(uint64_t)uVar16;
                  plVar21 = plVar21 + 2;
                } while ((int)uVar16 < (int)(uint)uStack0000000000000048);
              }
              uVar16 = (uint)uStack0000000000000048;
              if ((int)uVar16 < *(int *)(unaff_RDI + 0x8f0)) {
                lVar7 = (uint64_t)uVar16 << 4;
                do {
                  lVar18 = *(int64_t *)(unaff_RDI + 0x278);
                  uVar25 = uVar25 & 0xffffffff00000000;
                  *(int32_t *)(lVar7 + lVar18) = 0x40;
                  lVar8 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                        *(int *)(unaff_RDI + 0x3c8) * 0x140,&processed_var_8528_ptr,0x9d8,
                                        uVar25);
                  *(int64_t *)(lVar7 + 8 + lVar18) = lVar8;
                  if (lVar8 == 0) goto LAB_1807cc69d;
                  uVar16 = uVar16 + 1;
                  lVar7 = lVar7 + 0x10;
                } while ((int)uVar16 < *(int *)(unaff_RDI + 0x8f0));
              }
              lVar18 = 0;
              uVar25 = uVar25 & 0xffffffff00000000;
              lVar7 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                    *(int *)(unaff_RDI + 0x8f8) * 0x618,&processed_var_8528_ptr,0x9e5,uVar25)
              ;
              *(int64_t *)(unaff_RDI + 0x900) = lVar7;
              if (lVar7 != 0) {
                iStack0000000000000060 = 0;
                if (0 < *(int *)(unaff_RDI + 0x8f8)) {
                  *(uint64_t *)(unaff_RBP + -0x68) = 0;
                  do {
                    lVar18 = *(int64_t *)(unaff_RDI + 0x900) + lVar18;
                    in_stack_00000070 = 0;
                    in_stack_00000068 = lVar18;
                    func_0x00018076a7d0(*(uint64_t *)(unaff_RDI + 0x170),&stack0x00000050);
                    uVar25 = 0;
                    iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RDI + 0x170),
                                          (int64_t)&stack0x00000078 + 4,4,1,0);
                    if (iVar4 != 0) break;
                    iStack0000000000000050 = iStack0000000000000050 + iStack000000000000007c;
                    uVar25 = 0;
                    iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RDI + 0x170),lVar18,1,0x16,0);
                    if (((iVar4 != 0) ||
                        (iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),0), iVar4 != 0))
                       || (iVar4 = FUN_180769ac0(*(uint64_t *)(unaff_RDI + 0x170),
                                                 (int64_t)&stack0x00000040 + 4), iVar4 != 0))
                    goto LAB_1807cc69d;
                    *(uint *)(lVar18 + 0x1c) = (uint)uStack0000000000000044;
                    if (uStack0000000000000044 == 0) {
                      *(uint64_t *)(lVar18 + 0x20) = 0;
                      *(uint64_t *)(lVar18 + 0x58) = 0;
                      *(uint64_t *)(lVar18 + 0x90) = 0;
                      *(uint64_t *)(lVar18 + 200) = 0;
                      *(uint64_t *)(lVar18 + 0x100) = 0;
                      *(uint64_t *)(lVar18 + 0x138) = 0;
                      *(uint64_t *)(lVar18 + 0x170) = 0;
                      *(uint64_t *)(lVar18 + 0x1a8) = 0;
                      *(uint64_t *)(lVar18 + 0x1e0) = 0;
                      *(uint64_t *)(lVar18 + 0x218) = 0;
                      *(uint64_t *)(lVar18 + 0x250) = 0;
                      *(uint64_t *)(lVar18 + 0x288) = 0;
                      *(uint64_t *)(lVar18 + 0x2c0) = 0;
                      *(uint64_t *)(lVar18 + 0x2f8) = 0;
                      *(uint64_t *)(lVar18 + 0x330) = 0;
                      *(uint64_t *)(lVar18 + 0x368) = 0;
                      iVar4 = FUN_18076a440(*(uint64_t *)(unaff_RDI + 0x170),
                                            iStack0000000000000050,0);
                      if (iVar4 != 0) goto LAB_1807cc69d;
                    }
                    else {
                      iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RDI + 0x170),unaff_RBP + -0x5c,4,1
                                            ,0);
                      if (((iVar4 != 0) ||
                          (iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RDI + 0x170),lVar18 + 0x3a0,1
                                                 ,0x60,0), iVar4 != 0)) ||
                         (iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RDI + 0x170),lVar18 + 0x402,2,
                                                0x18,0), iVar4 != 0)) goto LAB_1807cc69d;
                      uVar25 = 0;
                      iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RDI + 0x170),lVar18 + 0x45a,2,0x18
                                            ,0);
                      if ((((iVar4 != 0) ||
                           (iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),lVar18 + 0x401)
                           , iVar4 != 0)) ||
                          ((((iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),
                                                    lVar18 + 0x458), iVar4 != 0 ||
                             (((((iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),
                                                        lVar18 + 0x452), iVar4 != 0 ||
                                 (iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),
                                                        lVar18 + 0x453), iVar4 != 0)) ||
                                (iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),
                                                       lVar18 + 0x454), iVar4 != 0)) ||
                               ((iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),
                                                       lVar18 + 0x4aa), iVar4 != 0 ||
                                (iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),
                                                       lVar18 + 0x4ab), iVar4 != 0)))) ||
                              (iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),
                                                     lVar18 + 0x4ac), iVar4 != 0)))) ||
                            ((iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),
                                                    lVar18 + 0x400), iVar4 != 0 ||
                             (iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),
                                                    lVar18 + 0x457), iVar4 != 0)))) ||
                           (iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),lVar18 + 0x507)
                           , iVar4 != 0)))) ||
                         ((((iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),lVar18 + 0x508
                                                  ), iVar4 != 0 ||
                            (iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),lVar18 + 0x509
                                                  ), iVar4 != 0)) ||
                           (iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),lVar18 + 0x50a)
                           , iVar4 != 0)) ||
                          (iVar4 = FUN_180769ac0(*(uint64_t *)(unaff_RDI + 0x170),lVar18 + 0x50c),
                          iVar4 != 0)))) goto LAB_1807cc69d;
                      *(short *)(lVar18 + 0x50c) = *(short *)(lVar18 + 0x50c) * 2;
                      if (*(byte *)(lVar18 + 0x401) < 2) {
                        *(int8_t *)(lVar18 + 0x400) = 0;
                      }
                      if (*(byte *)(lVar18 + 0x458) < 2) {
                        *(int8_t *)(lVar18 + 0x457) = 0;
                      }
                      iVar4 = FUN_18076a440(*(uint64_t *)(unaff_RDI + 0x170),
                                            iStack0000000000000050,0);
                      if (iVar4 != 0) goto LAB_1807cc69d;
                      if (uStack0000000000000044 != 0) {
                        *(uint64_t *)(lVar18 + 0x20) = 0;
                        *(uint64_t *)(lVar18 + 0x28) = 0;
                        *(uint64_t *)(lVar18 + 0x30) = 0;
                        *(uint64_t *)(lVar18 + 0x38) = 0;
                        *(uint64_t *)(lVar18 + 0x40) = 0;
                        *(uint64_t *)(lVar18 + 0x48) = 0;
                        *(uint64_t *)(lVar18 + 0x50) = 0;
                        *(int *)(unaff_RDI + 0x8fc) = *(int *)(unaff_RDI + 0x8fc) + 1;
                        iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RDI + 0x170),
                                              (int64_t)&stack0x00000060 + 4,4,1,0);
                        if (((iVar4 == 0) &&
                            (iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RDI + 0x170),lVar18 + 0x30,
                                                   4,1,0), iVar4 == 0)) &&
                           ((iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RDI + 0x170),lVar18 + 0x34,
                                                   4,1,0), iVar4 == 0 &&
                            ((iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),lVar18 + 0x2c
                                                   ), iVar4 == 0 &&
                             (iVar4 = FUN_1807697a0(*(uint64_t *)(unaff_RDI + 0x170),lVar18 + 0x3c
                                                   ), iVar4 == 0)))))) {
                          *(int32_t *)(lVar18 + 0x54) = 1;
                          iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),
                                                (int64_t)&stack0x00000048 + 5);
                          if (iVar4 == 0) {
                            bVar15 = (bStack000000000000004d & 1) * '\x02' + 8;
                            if ((bStack000000000000004d & 2) != 0) {
                              bVar15 = bVar15 & 0xfd | 4;
                            }
                            if ((bStack000000000000004d & 0x10) != 0) {
                              *(int32_t *)(lVar18 + 0x54) = 2;
                            }
                            if ((bVar15 & 6) == 0) {
                              *(int32_t *)(lVar18 + 0x34) = uStack0000000000000064;
                              uVar16 = 0;
                            }
                            else {
                              uVar16 = *(uint *)(in_stack_00000068 + 0x30);
                            }
                            uVar19 = *(uint *)(lVar18 + 0x34);
                            if (uVar19 == 0) {
                              *(int32_t *)(lVar18 + 0x34) = uStack0000000000000064;
                              uVar19 = *(uint *)(in_stack_00000068 + 0x34);
                              uVar16 = 0;
                            }
                            bVar22 = *(int *)(lVar18 + 0x54) != 1;
                            *(int32_t *)(lVar18 + 0x40) = uStack0000000000000064;
                            bVar23 = (bStack000000000000004d & 0x20) != 0;
                            *(uint *)(lVar18 + 0x30) = (uVar16 >> bVar22) >> bVar23;
                            *(uint *)(lVar18 + 0x34) = (uVar19 >> bVar22) >> bVar23;
                            iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),lVar18 + 0x2d);
                            if ((((iVar4 == 0) &&
                                 (iVar4 = FUN_1807697a0(*(uint64_t *)(unaff_RDI + 0x170),
                                                        lVar18 + 0x38), iVar4 == 0)) &&
                                (iVar4 = FUN_180769720(*(uint64_t *)(unaff_RDI + 0x170),0),
                                iVar4 == 0)) &&
                               (iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RDI + 0x170),
                                                      unaff_RBP + 0x1c0,1,0x16,0), iVar4 == 0)) {
                    // WARNING: Subroutine does not return
                              SystemDataValidator(unaff_RBP + 0x2e0,0x100,&processed_var_5872_ptr,
                                            iStack0000000000000060);
                            }
                          }
                        }
                        goto LAB_1807cc69d;
                      }
                      puVar11 = (uint64_t *)(lVar18 + 0x20);
                      lVar7 = 0x10;
                      do {
                        *puVar11 = 0;
                        puVar11 = puVar11 + 7;
                        lVar7 = lVar7 + -1;
                      } while (lVar7 != 0);
                    }
                    iStack0000000000000060 = iStack0000000000000060 + 1;
                    lVar18 = *(int64_t *)(unaff_RBP + -0x68) + 0x618;
                    *(int64_t *)(unaff_RBP + -0x68) = lVar18;
                  } while (iStack0000000000000060 < *(int *)(unaff_RDI + 0x8f8));
                }
                lVar7 = 0;
                *(uint64_t *)(unaff_RDI + 0x848) = 0;
                if (*(int *)(unaff_RDI + 0x8fc) != 0) {
                  uVar25 = uVar25 & 0xffffffff00000000;
                  lVar18 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                         *(int *)(unaff_RDI + 0x8fc) * 8,&processed_var_8528_ptr,0xbdc,uVar25
                                        );
                  *(int64_t *)(unaff_RDI + 0x848) = lVar18;
                  if (lVar18 == 0) goto LAB_1807cc69d;
                }
                iVar4 = 0;
                lVar18 = lVar7;
                if (0 < *(int *)(unaff_RDI + 0x8f8)) {
                  do {
                    lVar8 = *(int64_t *)(unaff_RDI + 0x900);
                    iVar20 = 0;
                    if (0 < *(int *)(lVar8 + 0x1c + lVar7)) {
                      do {
                        lVar9 = (int64_t)iVar20;
                        iVar20 = iVar20 + 1;
                        *(int64_t *)(*(int64_t *)(unaff_RDI + 0x848) + lVar18 * 8) =
                             lVar8 + 0x20 + lVar7 + lVar9 * 0x38;
                        lVar18 = lVar18 + 1;
                      } while (iVar20 < *(int *)(lVar8 + 0x1c + lVar7));
                    }
                    iVar4 = iVar4 + 1;
                    lVar7 = lVar7 + 0x618;
                  } while (iVar4 < *(int *)(unaff_RDI + 0x8f8));
                }
                *(uint64_t *)(unaff_RDI + 0x390) = 0;
                *(uint64_t *)(unaff_RDI + 0x398) = 0;
                *(uint64_t *)(unaff_RDI + 0x3a0) = 0;
                *(uint64_t *)(unaff_RDI + 0x3a8) = 0;
                *(uint64_t *)(unaff_RDI + 0x3b0) = 0;
                *(uint64_t *)(unaff_RDI + 0x3b8) = 0;
                *(uint64_t *)(unaff_RDI + 0x3c0) = 0;
                uVar24 = *(int32_t *)(unaff_RBP + -0x7c);
                *(uint64_t **)(unaff_RDI + 8) = (uint64_t *)(unaff_RDI + 0x390);
                *(int32_t *)(unaff_RDI + 0x3a4) = uVar24;
                if ((*(int64_t *)(unaff_RBP + -0x48) == 0) ||
                   (iVar4 = *(int *)(*(int64_t *)(unaff_RBP + -0x48) + 0x14), iVar4 == 0)) {
                  *(int32_t *)(*(int64_t *)(unaff_RDI + 8) + 8) = 5;
                }
                else {
                  *(int *)(*(int64_t *)(unaff_RDI + 8) + 8) = iVar4;
                }
                *(int32_t *)(*(int64_t *)(unaff_RDI + 8) + 0xc) = 2;
                **(int64_t **)(unaff_RDI + 8) = unaff_RDI + 0x178;
                puVar12 = (int32_t *)(*(int64_t *)(unaff_RDI + 8) + 0x10);
                if (puVar12 != (int32_t *)0x0) {
                  *puVar12 = *(int32_t *)(*(int64_t *)(unaff_RDI + 0x20) + 0x6d0);
                }
                uVar3 = *(uint64_t *)(unaff_RDI + 0x20);
                *(void **)(unaff_RBP + -0x38) = &processed_var_8648_ptr;
                *(uint64_t *)(unaff_RBP + -0x30) = 0;
                *(uint64_t *)(unaff_RBP + -0x28) = 0;
                *(uint64_t *)(unaff_RBP + -0x20) = 0;
                *(uint64_t *)(unaff_RBP + -0x18) = 0;
                *(uint64_t *)(unaff_RBP + -0x10) = 0;
                *(uint64_t *)(unaff_RBP + -8) = 0;
                *(int32_t *)(unaff_RDI + 0x110) = 0;
                *(uint64_t *)(unaff_RBP + -0x40) = 0;
                uVar25 = CONCAT71((int7)(uVar25 >> 8),1);
                iVar4 = FUN_180742e00(uVar3,unaff_RBP + -0x40,0,unaff_RDI + 0x280,uVar25);
                if (iVar4 == 0) {
                  LOCK();
                  puVar1 = (uint *)(*(int64_t *)(unaff_RDI + 0x280) + 100);
                  *puVar1 = *puVar1 | 0x100;
                  UNLOCK();
                  FUN_1807621f0(*(uint64_t *)(unaff_RDI + 0x280),0,
                                *(int32_t *)(*(int64_t *)(unaff_RDI + 8) + 0xc),0);
                  uVar24 = func_0x000180762150(*(uint64_t *)(unaff_RDI + 0x280),1,0);
                  iVar4 = FUN_18080ce10(uVar24,*(int32_t *)(unaff_RDI + 0x3c8));
                  if (iVar4 == 0) {
                    if ((*(uint *)(unaff_RBP + -0x78) & 0x4100) == 0) {
                      *(uint64_t *)(unaff_RDI + 0x288) = 0;
                      *(int32_t *)(*(int64_t *)(unaff_RDI + 8) + 0x18) = 0xffffffff;
                      uVar24 = extraout_XMM0_Da_00;
                    }
                    else {
                      lVar7 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                            *(int *)(unaff_RDI + 0x8ec) << 8,&processed_var_8528_ptr,0xc29,
                                            uVar25 & 0xffffffff00000000);
                      *(int64_t *)(unaff_RDI + 0x288) = lVar7;
                      if (lVar7 == 0) goto LAB_1807cc69d;
                      uVar24 = FUN_1807cb0e0();
                    }
                    *(int32_t *)(unaff_RDI + 0x18) = 0;
                    FUN_18080d060(uVar24,1);
                    if (((*(byte *)(unaff_RDI + 0x160) & 0x80) != 0) &&
                       (iVar4 = FUN_180769080(*(uint64_t *)(unaff_RDI + 0x170)), iVar4 == 0)) {
                    // WARNING: Subroutine does not return
                      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                    *(uint64_t *)(unaff_RDI + 0x170),&processed_var_8528_ptr,0xc42,1);
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
LAB_1807cc69d:
                    // WARNING: Subroutine does not return
  CoreSystemConfigManager(*(uint64_t *)(unaff_RBP + 0x3e0) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807cc6a5(void)
void FUN_1807cc6a5(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  CoreSystemConfigManager(*(uint64_t *)(unaff_RBP + 0x3e0) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807cc6d0(void)
void FUN_1807cc6d0(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t uVar4;
  byte *unaff_R14;
  int64_t *unaff_R15;
  int8_t *puStack0000000000000028;
  int64_t lStack0000000000000030;
  
  sVar1 = 0;
  if (*(int *)((int64_t)unaff_R15 + 0x34) == 1) {
    if ((uint)unaff_RBX != 0) {
      do {
        sVar1 = (ushort)*unaff_R14 + sVar1;
        *unaff_R14 = (byte)sVar1;
        unaff_RBX = unaff_RBX + -1;
        unaff_R14 = unaff_R14 + 1;
      } while (unaff_RBX != 0);
    }
  }
  else if ((*(int *)((int64_t)unaff_R15 + 0x34) == 2) && (uVar3 = (uint)unaff_RBX >> 1, uVar3 != 0)
          ) {
    uVar4 = (uint64_t)uVar3;
    do {
      sVar1 = *(short *)unaff_R14 + sVar1;
      *(short *)unaff_R14 = sVar1;
      uVar4 = uVar4 - 1;
      unaff_R14 = unaff_R14 + 2;
    } while (uVar4 != 0);
  }
  lStack0000000000000030 = unaff_RBP + -0x80;
  puStack0000000000000028 = &stack0x0000005c;
  iVar2 = (**(code **)(*(int64_t *)*unaff_R15 + 0x28))
                    ((int64_t *)*unaff_R15,0,*(int32_t *)(*unaff_R15 + 0x48),unaff_RBP + -0x70,
                     unaff_RBP + -0x50);
  if (iVar2 != 0) {
                    // WARNING: Subroutine does not return
    CoreSystemConfigManager(*(uint64_t *)(unaff_RBP + 0x3e0) ^ (uint64_t)&stack0x00000000);
  }
                    // WARNING: Subroutine does not return
  memcpy(*(uint64_t *)(unaff_RBP + -0x70));
}






