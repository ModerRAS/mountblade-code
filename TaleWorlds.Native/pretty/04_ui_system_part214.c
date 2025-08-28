#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part214.c - 4 个函数

// 函数: void FUN_18078ea55(void)
void FUN_18078ea55(void)

{
  uint *puVar1;
  float fVar2;
  int64_t lVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int *piVar11;
  uint uVar12;
  int64_t *plVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t unaff_RBX;
  uint64_t *unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint uVar16;
  int64_t *plVar17;
  int32_t uVar18;
  uint uVar19;
  uint in_R11D;
  int64_t *unaff_R12;
  int64_t *plVar20;
  char cVar21;
  int64_t *unaff_R13;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  bool in_ZF;
  int64_t in_stack_00000020;
  uint64_t uVar22;
  uint in_stack_00000050;
  char cStack0000000000000054;
  uint uStack0000000000000058;
  uint uStack000000000000005c;
  int iStack0000000000000060;
  int iStack0000000000000064;
  int64_t in_stack_00000068;
  int64_t in_stack_00000070;
  int64_t *plVar23;
  
  uVar15 = _uStack0000000000000058;
  uVar5 = (uint)((uint64_t)in_stack_00000020 >> 0x20);
  cVar21 = (char)unaff_R13;
  if (in_ZF) {
    if ((in_R11D >> 0x10 & 1) == 0) {
      uVar22 = CONCAT44(uVar5,(int)unaff_R14);
      lVar6 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x160,&ui_system_data_1936_ptr,0x445,
                            uVar22);
      uVar5 = (uint)((uint64_t)uVar22 >> 0x20);
      if ((lVar6 == 0) || (lVar6 = FUN_1807f7c50(lVar6), lVar6 == 0)) {
        plVar7 = (int64_t *)unaff_RBP[-0xe];
        goto LAB_1807901f2;
      }
      plVar7 = (int64_t *)unaff_RBP[-9];
    }
    else {
      plVar7 = (int64_t *)unaff_RBP[-9];
      lVar6 = *plVar7;
    }
    lVar9 = unaff_RBP[-0xd];
    unaff_R12 = (int64_t *)0x0;
    *(int64_t *)(lVar6 + 0xd8) = in_stack_00000070;
    plVar10 = unaff_R12;
    if (lVar9 != 0) {
      plVar10 = *(int64_t **)(lVar9 + 0x38);
    }
    *(int64_t **)(lVar6 + 0x148) = plVar10;
    plVar10 = unaff_R12;
    if (lVar9 != 0) {
      plVar10 = *(int64_t **)(lVar9 + 0x40);
    }
    *(int64_t **)(lVar6 + 0x150) = plVar10;
    *(int64_t *)(lVar6 + 0x158) = lVar6;
    uVar18 = *(int32_t *)(unaff_RBX + 0x28);
    *(int64_t *)(lVar6 + 0x60) = unaff_RBX;
    *(int32_t *)(lVar6 + 0x24) = uVar18;
    *(int32_t *)(lVar6 + 0x78) = *(int32_t *)(in_stack_00000070 + 0x11404);
    fVar2 = *(float *)(in_stack_00000070 + 0x11404);
    *(uint64_t *)(lVar6 + 0xa0) = 0;
    *(int32_t *)(lVar6 + 0xb0) = 0;
    *(int32_t *)(lVar6 + 0xc0) = 0xffffffff;
    *(float *)(lVar6 + 0x7c) = fVar2 * 10000.0;
    plVar10 = unaff_R12;
    if (lVar9 != 0) {
      plVar10 = *(int64_t **)(lVar9 + 0x68);
    }
    *(int64_t **)(lVar6 + 200) = plVar10;
    FUN_180744ae0(in_stack_00000070,0x100008,lVar6,0);
    *plVar7 = lVar6;
    plVar7 = (int64_t *)unaff_RBP[-0xe];
  }
  else {
    lVar6 = (int64_t)iStack0000000000000064;
    unaff_RBP[-0xf] = lVar6;
    if ((char)in_R11D < '\0') {
      unaff_RBP[-5] = unaff_R14;
      if ((in_R11D >> 0x10 & 1) == 0) {
        uVar22 = CONCAT44(uVar5,(int)unaff_R14);
        lVar6 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x198,&ui_system_data_1936_ptr,0x47a,
                              uVar22);
        uVar5 = (uint)((uint64_t)uVar22 >> 0x20);
        if (lVar6 != 0) {
          plVar7 = (int64_t *)FUN_180773a80(lVar6);
          unaff_RBP[-0xb] = plVar7;
          plVar10 = plVar7;
          in_R11D = uStack000000000000005c;
          if (plVar7 != (int64_t *)0x0) goto LAB_18078ec15;
        }
        plVar10 = unaff_R14;
        plVar7 = (int64_t *)unaff_RBP[-0xe];
      }
      else {
        plVar7 = *(int64_t **)unaff_RBP[-9];
        unaff_RBP[-0xb] = plVar7;
        plVar10 = unaff_R14;
LAB_18078ec15:
        plVar7[0x14] = unaff_RBP[-0xe];
        *(int *)(plVar7 + 0x16) = iStack0000000000000064;
        plVar7[0x1b] = in_stack_00000070;
        plVar7[0xc] = in_stack_00000068;
        if ((unaff_RDI == 0) || (uVar16 = *(uint *)(unaff_RDI + 0x18), uVar16 == 0)) {
          uVar16 = (uint)(*(int *)(in_stack_00000070 + 0x11644) * *(int *)(unaff_RBP + -0x10)) /
                   1000;
        }
        uVar19 = in_R11D & 0x400;
        *(uint *)(unaff_RBP + -0xc) = uVar19;
        if (uVar19 == 0) {
          uStack0000000000000058 = 1;
          if (*(uint *)((int64_t)unaff_RBP + 0x14) != 0) {
            uStack0000000000000058 = *(uint *)((int64_t)unaff_RBP + 0x14);
          }
          uVar14 = (uint64_t)uStack0000000000000058;
          if (uStack0000000000000058 < 0x100) {
            if (uStack0000000000000058 == 0) {
              uVar14 = 1;
            }
            uStack0000000000000058 = (int)uVar14 + 0xff;
            uStack0000000000000058 =
                 uStack0000000000000058 - (int)((uint64_t)uStack0000000000000058 % uVar14);
            uVar14 = (uint64_t)uStack0000000000000058;
          }
        }
        else {
          uVar14 = (uint64_t)uVar16;
          uStack0000000000000058 = uVar16;
        }
        uVar16 = uVar16 - (int)((uint64_t)uVar16 % uVar14);
        uVar12 = (uint)uVar14 * 2;
        if ((uint)uVar14 < uVar16) {
          uVar12 = uVar16;
        }
        if (((uVar19 == 0) && (iStack0000000000000064 == (int)unaff_R13)) &&
           ((uint)unaff_RBP[2] <= uVar12)) {
          uVar12 = (uint)unaff_RBP[2];
        }
        uVar16 = in_R11D & 0xeffffdfa | 2;
        *(uint *)(unaff_RBP + -0x10) = uVar16;
        unaff_RBP[0x1b] = unaff_RBP[-1];
        unaff_RBP[0x1c] = *unaff_RBP;
        unaff_RBP[0x1d] = unaff_RBP[1];
        unaff_RBP[0x1e] = unaff_RBP[2];
        unaff_RBP[0x21] = unaff_RBP[5];
        unaff_RBP[0x1f] = unaff_RBP[3];
        unaff_RBP[0x20] = unaff_RBP[4];
        if (unaff_RDI != 0) {
          iVar4 = *(int *)(unaff_RBP + 0x21);
          if (*(int *)(unaff_RDI + 0xb4) != 0) {
            iVar4 = *(int *)(unaff_RDI + 0xb4);
          }
          *(int *)(unaff_RBP + 0x21) = iVar4;
        }
        *(int *)((int64_t)unaff_RBP + 0xe4) = iStack0000000000000060;
        *(int32_t *)(unaff_RBP + 0x1f) = 0;
        *(uint *)(unaff_RBP + 0x1e) = uVar12;
        *(uint *)((int64_t)unaff_RBP + 0xfc) = uVar12 - 1;
        iVar4 = FUN_18078df30(in_stack_00000070,uVar16,unaff_RBP + 0x1b,unaff_RBP + -5);
        unaff_R12 = unaff_R14;
        plVar7 = unaff_R14;
        if (iVar4 == 0) {
          lVar6 = unaff_RBP[-0xd];
          lVar9 = 0;
          lVar8 = lVar9;
          if (lVar6 != 0) {
            lVar8 = *(int64_t *)(lVar6 + 0x38);
          }
          lVar3 = unaff_RBP[-5];
          unaff_RBP[-5] = lVar3;
          *(int64_t *)(lVar3 + 0x148) = lVar8;
          lVar8 = lVar9;
          if (lVar6 != 0) {
            lVar8 = *(int64_t *)(lVar6 + 0x40);
          }
          *(int64_t *)(lVar3 + 0x150) = lVar8;
          lVar8 = lVar9;
          if (lVar6 != 0) {
            lVar8 = *(int64_t *)(lVar6 + 0x68);
          }
          plVar23 = (int64_t *)unaff_RBP[-0xb];
          *(int64_t *)(lVar3 + 200) = lVar8;
          *(int64_t **)(lVar3 + 0x158) = plVar23;
          *(int64_t *)(lVar3 + 0x60) = in_stack_00000068;
          plVar23[0x30] = lVar3;
          *(int32_t *)(plVar23 + 0x18) = 0;
          *(int32_t *)((int64_t)plVar23 + 0x44) = *(int32_t *)(unaff_RBP + 2);
          *(int32_t *)(plVar23 + 9) = *(int32_t *)((int64_t)unaff_RBP + 0xc);
          *(float *)((int64_t)plVar23 + 0x6c) = (float)*(int *)(unaff_RBP + 1);
          if (lVar6 == 0) {
            uVar18 = *(int32_t *)(unaff_RBP + 5);
          }
          else {
            uVar18 = *(int32_t *)(lVar6 + 0xb4);
          }
          uVar16 = *(uint *)(unaff_RBP + -0x10);
          *(int32_t *)((int64_t)plVar23 + 0x74) = uVar18;
          uVar18 = *(int32_t *)((int64_t)unaff_RBP + 0x2c);
          *(uint *)((int64_t)plVar23 + 0x2c) = uVar16 & 0xfffffffd | 0x20080;
          *(int32_t *)((int64_t)plVar23 + 0x13c) = uVar18;
          *(int32_t *)(plVar23 + 5) = *(int32_t *)unaff_RBP;
          *(int *)(plVar23 + 0xd) = iStack0000000000000060;
          plVar23[0x1b] = in_stack_00000070;
          lVar8 = lVar9;
          if (lVar6 != 0) {
            lVar8 = *(int64_t *)(lVar6 + 0x38);
          }
          plVar23[0x29] = lVar8;
          lVar8 = lVar9;
          if (lVar6 != 0) {
            lVar8 = *(int64_t *)(lVar6 + 0x40);
          }
          plVar23[0x2a] = lVar8;
          *(uint *)((int64_t)plVar23 + 0x18c) = uStack0000000000000058;
          plVar23[0x2b] = (int64_t)plVar23;
          *(int32_t *)((int64_t)plVar23 + 0x24) = *(int32_t *)(in_stack_00000068 + 0x28);
          *(int32_t *)(plVar23 + 0xf) = *(int32_t *)(in_stack_00000070 + 0x11404);
          *(float *)((int64_t)plVar23 + 0x7c) = *(float *)(in_stack_00000070 + 0x11404) * 10000.0;
          if (lVar6 != 0) {
            lVar9 = *(int64_t *)(lVar6 + 0x68);
          }
          plVar23[0x19] = lVar9;
          uVar16 = uVar16 & 0xffffffe5 | 0x20080;
          *(int32_t *)(plVar23 + 10) = *(int32_t *)((int64_t)plVar23 + 0x44);
          *(int32_t *)((int64_t)plVar23 + 0x4c) = 0;
          lVar6 = unaff_RBP[-1];
          *(uint *)((int64_t)plVar23 + 0x2c) = uVar16;
          plVar23[6] = lVar6;
          uVar16 = *(uint *)(lVar3 + 0x2c) & 0x18 | uVar16;
          *(uint *)((int64_t)plVar23 + 0x2c) = uVar16;
          if ((((unaff_RBP[4] & 1) == 0) && ((uVar15 & 0x100000000) == 0)) &&
             (((unaff_RBP[4] & 2) != 0 || ((uVar15 & 0x200000000) != 0)))) {
            uVar19 = 2;
          }
          else {
            uVar19 = 1;
          }
          uVar15 = CONCAT44(uVar5,2);
          *(uint *)((int64_t)plVar23 + 0x2c) = uVar19 | uVar16;
          (**(code **)(*plVar23 + 0x138))
                    (plVar23,*(int32_t *)(unaff_RBP + 3),2,
                     *(int32_t *)((int64_t)unaff_RBP + 0x1c),uVar15);
          if ((int64_t *)plVar23[0x26] == unaff_R13) {
            iVar4 = (**(code **)(*plVar23 + 0xd8))
                              (plVar23,*(uint64_t *)(in_stack_00000070 + 0x11720));
            if (iVar4 != 0) goto LAB_18078f72d;
            plVar23 = (int64_t *)unaff_RBP[-0xb];
          }
          lVar6 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),200,&ui_system_data_1936_ptr,0x516,
                                uVar15 & 0xffffffff00000000);
          if (lVar6 != 0) {
            lVar6 = FUN_1807f3070(lVar6);
          }
          plVar23[0x2f] = lVar6;
          if (lVar6 != 0) {
            *(int64_t *)(lVar6 + 8) = in_stack_00000070;
            func_0x000180743c20(in_stack_00000070,10);
            plVar7 = plVar23 + 0x2c;
            plVar23[0x2e] = (int64_t)plVar23;
            plVar23[0x2d] = *(int64_t *)(in_stack_00000070 + 0x12210);
            *plVar7 = in_stack_00000070 + 0x12208;
            *(int64_t **)(in_stack_00000070 + 0x12210) = plVar7;
            *(int64_t **)plVar23[0x2d] = plVar7;
                    // WARNING: Subroutine does not return
            SystemCoreHandler(in_stack_00000070,10);
          }
        }
      }
LAB_18078f72d:
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10,1);
      }
      goto LAB_1807901f2;
    }
    unaff_RBP[-10] = unaff_R14;
    plVar7 = (int64_t *)unaff_RBP[-0xe];
    plVar10 = unaff_R14;
    if (0 < iStack0000000000000064) {
      if ((in_R11D >> 0x10 & 1) == 0) {
        in_stack_00000020 = (uint64_t)uVar5 << 0x20;
        lVar6 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x160,&ui_system_data_1936_ptr,0x63b,
                              in_stack_00000020);
        if (lVar6 != 0) {
          plVar10 = (int64_t *)FUN_1807f7c50(lVar6);
          unaff_RBP[-10] = plVar10;
          plVar23 = plVar10;
          in_R11D = uStack000000000000005c;
          if (plVar10 != (int64_t *)0x0) goto LAB_18078f7d7;
        }
LAB_18078fe1a:
        if (unaff_R14 != (int64_t *)0x0) {
          (**(code **)(*unaff_R14 + 0x18))(unaff_R14,1);
        }
        goto LAB_1807901f2;
      }
      plVar23 = *(int64_t **)unaff_RBP[-9];
      unaff_RBP[-10] = plVar23;
LAB_18078f7d7:
      lVar6 = unaff_RBP[-0xd];
      unaff_R12 = (int64_t *)0x0;
      plVar23[0x1b] = in_stack_00000070;
      plVar7 = unaff_R12;
      if (lVar6 != 0) {
        plVar7 = *(int64_t **)(lVar6 + 0x38);
      }
      plVar23[0x29] = (int64_t)plVar7;
      plVar7 = unaff_R12;
      if (lVar6 != 0) {
        plVar7 = *(int64_t **)(lVar6 + 0x40);
      }
      plVar23[0x2a] = (int64_t)plVar7;
      plVar23[0x2b] = (int64_t)plVar23;
      *(int32_t *)((int64_t)plVar23 + 0x24) = *(int32_t *)(unaff_RBX + 0x28);
      plVar23[0xc] = unaff_RBX;
      *(int32_t *)(plVar23 + 0xf) = *(int32_t *)(in_stack_00000070 + 0x11404);
      fVar2 = *(float *)(in_stack_00000070 + 0x11404);
      plVar23[0x14] = unaff_RBP[-0xe];
      *(int *)(plVar23 + 0x16) = iStack0000000000000064;
      *(float *)((int64_t)plVar23 + 0x7c) = fVar2 * 10000.0;
      *(int32_t *)(plVar23 + 0x18) = 0xffffffff;
      plVar7 = unaff_R12;
      if (lVar6 != 0) {
        plVar7 = *(int64_t **)(lVar6 + 0x68);
      }
      plVar23[0x19] = (int64_t)plVar7;
      *(uint *)((int64_t)plVar23 + 0x2c) = in_R11D;
      *(float *)((int64_t)plVar23 + 0x6c) = (float)*(int *)(unaff_RBP + 1);
      FUN_180744ae0(in_stack_00000070,0x100008);
      lVar6 = unaff_RBP[-0xf];
      plVar7 = unaff_R12;
      in_R11D = uStack000000000000005c;
    }
    uVar5 = (uint)((uint64_t)in_stack_00000020 >> 0x20);
    iStack0000000000000060 = 0;
    iVar4 = iStack0000000000000064;
    if (iStack0000000000000064 == 0) {
      iVar4 = 1;
    }
    *(int *)(unaff_RBP + -0xc) = iVar4;
    cStack0000000000000054 = cVar21;
    plVar23 = unaff_R14;
    if (0 < iVar4) {
      do {
        uVar5 = (uint)((uint64_t)in_stack_00000020 >> 0x20);
        iVar4 = 1;
        if (lVar6 != 0) {
          iVar4 = *(int *)(unaff_RBX + 0x18);
        }
        if (iVar4 <= iStack0000000000000060) break;
        unaff_RBP[0x14] = 0;
        unaff_RBP[0x15] = 0;
        unaff_RBP[0x16] = 0;
        unaff_RBP[0x17] = 0;
        unaff_RBP[0x18] = 0;
        unaff_RBP[0x19] = 0;
        unaff_RBP[0x1a] = 0;
        iVar4 = (**(code **)(unaff_RBX + 0x88))(unaff_RBX,iStack0000000000000060,unaff_RBP + 0x14);
        unaff_R14 = plVar10;
        if (iVar4 != 0) goto LAB_18078fe1a;
        lVar6 = unaff_RBP[-0xf];
        if ((lVar6 == 0) && ((uStack000000000000005c >> 0x10 & 1) != 0)) {
          unaff_RBP[-3] = *(uint64_t *)unaff_RBP[-9];
LAB_18078f958:
          lVar9 = unaff_RBP[-0xd];
LAB_18078f95c:
          if (lVar9 != 0) {
            iVar4 = *(int *)(unaff_RBP + 0x1a);
            if (*(int *)(lVar9 + 0xb4) != 0) {
              iVar4 = *(int *)(lVar9 + 0xb4);
            }
            *(int *)(unaff_RBP + 0x1a) = iVar4;
          }
LAB_18078f978:
          uStack0000000000000058 = in_R11D;
          if ((uStack000000000000005c >> 9 & 1) == 0) {
LAB_18078fa18:
            if (((cStack0000000000000054 == cVar21) && ((uStack000000000000005c >> 0x1c & 1) != 0))
               && ((*(code **)(in_stack_00000068 + 0xb8) == (code *)0x0 ||
                   (iVar4 = (**(code **)(in_stack_00000068 + 0xb8))(in_stack_00000068), iVar4 != 0))
                  )) goto LAB_18078fe1a;
          }
          else {
            if (*(uint *)(in_stack_00000068 + 0xa4) < 2) {
              uStack0000000000000058 = uStack000000000000005c & 0xfffffdff;
              if (unaff_RBP[-10] != 0) {
                puVar1 = (uint *)(unaff_RBP[-10] + 0x2c);
                *puVar1 = *puVar1 & 0xfffffdff;
              }
              goto LAB_18078fa18;
            }
            cStack0000000000000054 = '\x01';
          }
          iVar4 = FUN_18078df30(in_stack_00000070,uStack0000000000000058,unaff_RBP + 0x14,
                                unaff_RBP + -3);
          if (iVar4 != 0) goto LAB_18078fe1a;
          plVar23 = (int64_t *)unaff_RBP[-3];
          plVar17 = (int64_t *)0x0;
          lVar6 = unaff_RBP[-10];
          plVar20 = (int64_t *)0x0;
          *(int *)(plVar23 + 0x18) = iStack0000000000000060;
          plVar23[0x17] = lVar6;
          *(int32_t *)((int64_t)plVar23 + 0x24) = *(int32_t *)(in_stack_00000068 + 0x28);
          plVar23[0xc] = in_stack_00000068;
          *(int32_t *)(plVar23 + 0xf) = *(int32_t *)(in_stack_00000070 + 0x11404);
          lVar6 = unaff_RBP[-0xd];
          *(float *)((int64_t)plVar23 + 0x7c) = *(float *)(in_stack_00000070 + 0x11404) * 10000.0;
          plVar13 = plVar17;
          if (lVar6 != 0) {
            plVar13 = *(int64_t **)(lVar6 + 0x68);
          }
          plVar23[0x19] = (int64_t)plVar13;
          if ((plVar23[0x26] == 0) &&
             (iVar4 = (**(code **)(*plVar23 + 0xd8))
                                (plVar23,*(uint64_t *)(in_stack_00000070 + 0x11720)),
             unaff_R12 = plVar17, iVar4 != 0)) goto LAB_18078fe1a;
          if ((unaff_RBP[-0xf] == 0) && (iStack0000000000000060 == 0)) {
            FUN_180744ae0(in_stack_00000070,0x100008,plVar23,0);
            lVar6 = unaff_RBP[-0xd];
            lVar9 = 0;
            lVar8 = lVar9;
            if (lVar6 != 0) {
              lVar8 = *(int64_t *)(lVar6 + 0x38);
            }
            plVar23[0x29] = lVar8;
            if (lVar6 != 0) {
              lVar9 = *(int64_t *)(lVar6 + 0x40);
            }
            plVar23[0x2a] = lVar9;
            plVar23[0x2b] = (int64_t)plVar23;
          }
          unaff_R12 = plVar20;
          if ((*(code **)(in_stack_00000068 + 0x80) != (code *)0x0) &&
             (iVar4 = (**(code **)(in_stack_00000068 + 0x80))
                                (in_stack_00000068,iStack0000000000000060), iVar4 != 0))
          goto LAB_18078fe1a;
          if ((iStack0000000000000060 == 0) && ((uStack0000000000000058 & 0x200) == 0)) {
            lVar6 = in_stack_00000068;
            if (*(int64_t *)(in_stack_00000068 + 0x120) != 0) {
              lVar6 = *(int64_t *)(in_stack_00000068 + 0x120);
            }
            unaff_RBP[-7] = lVar6;
            *(uint *)(lVar6 + 0x160) = *(uint *)(lVar6 + 0x160) & 0xfffffdff;
            if (*(code **)(lVar6 + 0x100) != (code *)0x0) {
              in_stack_00000020 = *(int64_t *)(lVar6 + 0x128);
              iVar4 = (**(code **)(lVar6 + 0x100))
                                (lVar6,(int)plVar23[0xd],(int)*(float *)((int64_t)plVar23 + 0x6c),0
                                 ,in_stack_00000020);
              if (iVar4 != 0) goto LAB_18078fe1a;
              *(uint *)(unaff_RBP[-7] + 0x2c) = *(uint *)(unaff_RBP[-7] + 0x2c) | 0x200;
            }
          }
          *(int32_t *)(in_stack_00000068 + 0x158) = 0;
          if (*(int64_t *)(in_stack_00000068 + 0x140) != 0) {
                    // WARNING: Subroutine does not return
            memset(*(int64_t *)(in_stack_00000068 + 0x140),0,
                   *(int32_t *)(in_stack_00000068 + 0x154));
          }
          if ((*(code **)(in_stack_00000068 + 0xb0) != (code *)0x0) &&
             (iVar4 = (**(code **)(in_stack_00000068 + 0xb0))(in_stack_00000068), iVar4 != 0))
          goto LAB_18078fe1a;
          uVar18 = 8;
          if ((uStack0000000000000058 & 0x200) == 0) {
            uVar18 = 2;
          }
          iVar4 = FUN_180773610(in_stack_00000068,iStack0000000000000060,0,uVar18);
          if (iVar4 != 0) goto LAB_18078fe1a;
          if ((code *)plVar23[0x2a] != (code *)0x0) {
            if ((int64_t)unaff_RBP[-0xf] < 1) {
              (*(code *)plVar23[0x2a])(plVar23,0,0,2);
            }
            else {
              (**(code **)(unaff_RBP[-10] + 0x150))(unaff_RBP[-10],iStack0000000000000060);
            }
          }
          if ((uStack0000000000000058 >> 0x1c & 1) == 0) {
            in_stack_00000050 = 0;
            if ((uStack0000000000000058 >> 0xd & 1) == 0) {
              if ((uStack0000000000000058 >> 9 & 1) == 0) {
                iVar4 = *(int *)(unaff_RBP + 0x17);
LAB_18078fd4b:
                *(int *)(unaff_RBP + -0x10) = iVar4;
              }
              else {
                iVar4 = *(int *)((int64_t)unaff_RBP + 0xb4);
                *(int *)(unaff_RBP + -0x10) = iVar4;
                if (((*(int *)(in_stack_00000068 + 0x28) - 5U & 0xfffffff3) != 0) ||
                   (*(int *)(in_stack_00000068 + 0x28) == 0xd)) {
                  iVar4 = iVar4 - *(int *)(in_stack_00000068 + 0x110);
                  goto LAB_18078fd4b;
                }
              }
              uVar5 = FUN_180751310(plVar23,0,iVar4,unaff_RBP + -0xb);
              if ((uVar5 & 0xffffffef) != 0) {
                if ((*(uint *)((int64_t)plVar23 + 0x2c) & 0x10000) == 0) {
                  (**(code **)(*plVar23 + 0x18))(plVar23,1);
                }
                goto LAB_18078fe1a;
              }
              uVar5 = *(uint *)(unaff_RBP + -0xb);
              if (*(uint *)(unaff_RBP + -0x10) != uVar5) {
                if (((uVar5 == 0) || ((uStack0000000000000058 >> 9 & 1) != 0)) ||
                   (*(uint *)((int64_t)plVar23 + 0x44) < uVar5)) goto LAB_18078fe1a;
                if (*(uint *)(plVar23 + 10) == *(uint *)((int64_t)plVar23 + 0x44)) {
                  *(uint *)(plVar23 + 10) = uVar5;
                }
              }
              in_stack_00000050 = func_0x0001807526d0(plVar23,0);
              unaff_R12 = plVar17;
              if ((in_stack_00000050 & 0xffffffef) != 0) goto LAB_18078fe1a;
            }
          }
          else {
            in_stack_00000050 =
                 (**(code **)(*plVar23 + 400))
                           (plVar23,(uint64_t)
                                    *(uint *)(*(int64_t *)(in_stack_00000068 + 0x170) + 0x16c) +
                                    unaff_RBP[-4]);
            if (in_stack_00000050 != 0) {
              (**(code **)(*plVar23 + 0x18))(plVar23,1);
              goto LAB_18078fe1a;
            }
          }
          lVar6 = unaff_RBP[-0xf];
          unaff_R12 = plVar17;
          if (0 < lVar6) {
            *(int64_t **)unaff_RBP[-0xe] = plVar23;
            *(int *)(unaff_RBP[-10] + 0xb4) = *(int *)(unaff_RBP[-10] + 0xb4) + 1;
            unaff_R12 = plVar20;
          }
        }
        else {
          iVar4 = 0;
          plVar23 = (int64_t *)0x0;
          unaff_RBP[-3] = 0;
          if (lVar6 < 1) goto LAB_18078f958;
          lVar9 = unaff_RBP[-0xd];
          if (lVar9 == 0) goto LAB_18078f978;
          piVar11 = *(int **)(lVar9 + 0x28);
          if (piVar11 == (int *)0x0) goto LAB_18078f95c;
          in_stack_00000050 = 0;
          if (0 < *(int *)(lVar9 + 0x30)) {
            do {
              if (*piVar11 == iStack0000000000000060) goto LAB_18078f95c;
              iVar4 = iVar4 + 1;
              piVar11 = piVar11 + 1;
            } while (iVar4 < *(int *)(lVar9 + 0x30));
            lVar6 = unaff_RBP[-0xf];
          }
        }
        uVar5 = (uint)((uint64_t)in_stack_00000020 >> 0x20);
        unaff_RBP[-0xe] = unaff_RBP[-0xe] + 8;
        iStack0000000000000060 = iStack0000000000000060 + 1;
        unaff_RBX = in_stack_00000068;
        in_R11D = uStack000000000000005c;
      } while (iStack0000000000000060 < *(int *)(unaff_RBP + -0xc));
    }
    if ((uVar15 & 0x200000000000) == 0) {
      if (*(int64_t **)(in_stack_00000068 + 0x170) != unaff_R13) {
        if ((*(uint *)(in_stack_00000070 + 0x78) & 0x100000) == 0) {
          func_0x000180743c20(in_stack_00000070,0xc);
        }
        FUN_180769080(*(uint64_t *)(in_stack_00000068 + 0x170));
                    // WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                      *(uint64_t *)(in_stack_00000068 + 0x170),&ui_system_data_1936_ptr,0x752,1);
      }
      if (*(int64_t *)(in_stack_00000068 + 0x120) != 0) {
        *(uint64_t *)(*(int64_t *)(in_stack_00000068 + 0x120) + 0x170) = 0;
      }
    }
    if ((int)unaff_R13 < iStack0000000000000064) {
      *(uint64_t *)unaff_RBP[-9] = unaff_RBP[-10];
    }
    else {
      *(int64_t **)unaff_RBP[-9] = plVar23;
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10,1);
      }
    }
  }
  plVar10 = *(int64_t **)unaff_RBP[-9];
  if (*(char *)(unaff_RBP + 0x868) != cVar21) {
    SystemStateManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
    plVar7 = plVar10 + 1;
    plVar23 = (int64_t *)(in_stack_00000070 + 0x88);
    if (in_stack_00000070 == -0x80) {
      plVar23 = unaff_R13;
    }
    lVar6 = *plVar23;
    *plVar7 = lVar6;
    plVar10[2] = (int64_t)plVar23;
    *(int64_t **)(lVar6 + 8) = plVar7;
    *(int64_t **)plVar10[2] = plVar7;
                    // WARNING: Subroutine does not return
    SystemConfigManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
  }
  if ((in_stack_00000050 & 0xffffffef) != 0) {
    if ((uVar15 & 0x1000000000000) == 0) {
      *(int64_t *)unaff_RBP[-9] = 0;
    }
    goto LAB_1807901f2;
  }
  if (((*(uint *)((int64_t)plVar10 + 0x2c) & 0x8000000) == 0) &&
     (((char *)plVar10[6] == (char *)0x0 || (*(char *)plVar10[6] == cVar21)))) {
    cStack0000000000000054 = '\x01';
    if ((*(int64_t *)(in_stack_00000068 + 0x168) != 0) &&
       (((iVar4 = FUN_1807d86d0(*(int64_t *)(in_stack_00000068 + 0x168),&rendering_buffer_2124_ptr,0,
                                unaff_RBP + 6), iVar4 == 0 ||
         (iVar4 = FUN_1807d86d0(*(uint64_t *)(in_stack_00000068 + 0x168),&rendering_buffer_2132_ptr,0,
                                unaff_RBP + 6), iVar4 == 0)) ||
        (iVar4 = FUN_1807d86d0(*(uint64_t *)(in_stack_00000068 + 0x168),&rendering_buffer_2136_ptr,0,
                               unaff_RBP + 6), iVar4 == 0)))) {
      iVar4 = *(int *)((int64_t)unaff_RBP + 0x34);
      if (iVar4 == 4) {
        iVar4 = (**(code **)(*plVar10 + 0x88))(plVar10);
        if (iVar4 != 0) goto LAB_1807901f2;
        func_0x0001807f7e40(plVar10[7],unaff_RBP[8] + 2,0x80);
        func_0x0001807f7e70(plVar10[7]);
        cStack0000000000000054 = cVar21;
      }
      else if (iVar4 == 6) {
        iVar4 = (**(code **)(*plVar10 + 0x88))(plVar10);
        if (iVar4 != 0) goto LAB_1807901f2;
        func_0x00018076b450(plVar10[7],unaff_RBP[8],0x100);
        cStack0000000000000054 = cVar21;
      }
      else if (iVar4 == 3) {
        iVar4 = (**(code **)(*plVar10 + 0x88))(plVar10);
        if (iVar4 != 0) goto LAB_1807901f2;
        FUN_18076b5b0(plVar10[7],0x100,unaff_RBP[8]);
        cStack0000000000000054 = cVar21;
      }
      FUN_1807d84c0(*(uint64_t *)(in_stack_00000068 + 0x168),*(int32_t *)(unaff_RBP + 6),
                    unaff_RBP[7],unaff_RBP[8],CONCAT44(uVar5,*(int32_t *)(unaff_RBP + 9)));
      if (cStack0000000000000054 == cVar21) goto LAB_1807901bd;
    }
    if (((uVar15 & 0x1000080000000000) == 0) && (unaff_RBP[-4] != 0)) {
      uVar5 = func_0x00018076b690(unaff_RBP[-4]);
      uVar14 = (uint64_t)(int)uVar5;
      uVar15 = uVar14;
      if (-1 < (int)uVar5) {
        do {
          if ((*(char *)(uVar14 + unaff_RBP[-4]) == '\\') ||
             (*(char *)(uVar14 + unaff_RBP[-4]) == '/')) {
            uVar5 = (int)uVar15 + 1;
            break;
          }
          uVar5 = (int)uVar15 - 1;
          uVar14 = uVar14 - 1;
          uVar15 = (uint64_t)uVar5;
        } while (-1 < (int64_t)uVar14);
      }
      uVar16 = 0;
      if (-1 < (int)uVar5) {
        uVar16 = uVar5;
      }
      unaff_RBP[-7] = (char *)((int64_t)(int)uVar16 + unaff_RBP[-4]);
      if (*(char *)((int64_t)(int)uVar16 + unaff_RBP[-4]) == cVar21) {
        plVar10[6] = (int64_t)&system_buffer_ptr;
      }
      else {
        iVar4 = (**(code **)(*plVar10 + 0x88))(plVar10);
        if (iVar4 != 0) goto LAB_1807901f2;
        func_0x00018076b450(plVar10[7],unaff_RBP[-7],0x100);
      }
    }
  }
LAB_1807901bd:
  if (((*(int64_t *)(in_stack_00000068 + 0x170) != 0) && (unaff_RBP[-2] != 0)) &&
     (*(int64_t *)(*(int64_t *)(in_stack_00000068 + 0x170) + 0x1e0) == unaff_RBP[-2])) {
    FUN_180768c70();
  }
LAB_1807901f2:
  if (unaff_RSI != 0) {
    FUN_1807d8800();
  }
  if (unaff_R13 != (int64_t *)0x0) {
    FUN_180769080();
  }
  if (unaff_R15 != 0) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
  if (unaff_R12 != (int64_t *)0x0) {
    FUN_180773410(unaff_R12,1);
  }
  if (plVar7 == (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(unaff_RBP[0x854] ^ (uint64_t)&stack0x00000000);
  }
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar7,&rendering_buffer_2144_ptr,0xb8,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807901fa(void)
void FUN_1807901fa(void)

{
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t unaff_R15;
  
  if (unaff_RSI != 0) {
    FUN_1807d8800();
  }
  if (unaff_R13 != 0) {
    FUN_180769080();
  }
  if (unaff_R15 != 0) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
  if (unaff_R12 != 0) {
    FUN_180773410();
  }
  if (unaff_R14 != 0) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x42a0) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18079021c(void)
void FUN_18079021c(void)

{
  int64_t unaff_RBP;
  int64_t unaff_R12;
  int64_t unaff_R14;
  int64_t unaff_R15;
  
  FUN_180769080();
  if (unaff_R15 != 0) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
  if (unaff_R12 != 0) {
    FUN_180773410();
  }
  if (unaff_R14 != 0) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x42a0) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180790231(void)
void FUN_180790231(void)

{
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



