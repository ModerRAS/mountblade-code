#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part113.c - 5 个函数
// 函数: void function_735d0e(void)
void function_735d0e(void)
{
  int64_t lVar1;
  uint *puVar2;
  double *pdVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint64_t *puVar17;
  float *pfVar18;
  uint uVar19;
  int64_t lVar20;
  int64_t lVar21;
  int64_t unaff_RBP;
  uint uVar22;
  uint64_t uVar23;
  int in_R9D;
  uint64_t in_R10;
  uint unaff_R12D;
  uint unaff_R14D;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  uint unaff_XMM11_Da;
  uint unaff_XMM11_Db;
  uint unaff_XMM11_Dc;
  uint unaff_XMM11_Dd;
  double unaff_XMM12_Qa;
  double unaff_XMM13_Qa;
  double unaff_XMM14_Qa;
  int8_t *local_var_28;
  uint64_t local_var_38;
  int64_t local_var_40;
  lVar21 = (int64_t)(int)unaff_R14D;
  uVar22 = (uint)in_R10;
  if (in_R9D == 0) {
    dVar24 = *(double *)(unaff_RBP + 0x10);
    uVar23 = in_R10 & 0xffffffff;
    if ((0 < (int)unaff_R14D) && (3 < unaff_R14D)) {
      if ((((int8_t *)(unaff_RBP + 0x10 + lVar21 * 8) < local_var_28) ||
          (local_var_28 + (int64_t)(int)(unaff_R14D - 1) * 4 <
           (int8_t *)(unaff_RBP + 0x18U))) &&
         ((&local_buffer_00000050 + (int64_t)(int)(unaff_R14D - 1) * 8 < local_var_28 ||
          (local_var_28 + (int64_t)(int)(unaff_R14D - 1) * 4 < &local_buffer_00000050)))) {
        dVar27 = 0.0;
        dVar28 = 0.0;
        dVar29 = 0.0;
        dVar30 = 0.0;
        dVar24 = 0.0;
        dVar33 = 0.0;
        uVar19 = unaff_R14D & 0x80000003;
        if ((int)uVar19 < 0) {
          uVar19 = (uVar19 - 1 | 0xfffffffc) + 1;
        }
        dVar31 = 0.0;
        dVar32 = 0.0;
        do {
          auVar7 = *(int8_t (*) [16])(&local_buffer_00000050 + in_R10 * 8);
          dVar25 = auVar7._0_8_;
          dVar26 = auVar7._8_8_;
          uVar22 = (int)uVar23 + 4;
          uVar23 = (uint64_t)uVar22;
          pdVar3 = (double *)(unaff_RBP + 0x18 + in_R10 * 8);
          dVar31 = dVar31 + *pdVar3 * dVar25;
          dVar32 = dVar32 + pdVar3[1] * dVar26;
          dVar27 = dVar27 + dVar25 * dVar25;
          dVar28 = dVar28 + dVar26 * dVar26;
          auVar8 = *(int8_t (*) [16])(&local_buffer_00000060 + in_R10 * 8);
          dVar25 = auVar8._0_8_;
          dVar26 = auVar8._8_8_;
          *(uint64_t *)(local_var_28 + in_R10 * 4) =
               CONCAT44((float)(double)CONCAT44(auVar7._12_4_ ^ unaff_XMM11_Dd,
                                                auVar7._8_4_ ^ unaff_XMM11_Dc),
                        (float)(double)CONCAT44(auVar7._4_4_ ^ unaff_XMM11_Db,
                                                auVar7._0_4_ ^ unaff_XMM11_Da));
          pdVar3 = (double *)(unaff_RBP + 0x28 + in_R10 * 8);
          dVar24 = dVar24 + *pdVar3 * dVar25;
          dVar33 = dVar33 + pdVar3[1] * dVar26;
          dVar29 = dVar29 + dVar25 * dVar25;
          dVar30 = dVar30 + dVar26 * dVar26;
          *(uint64_t *)(local_var_28 + in_R10 * 4 + 8) =
               CONCAT44((float)(double)CONCAT44(auVar8._12_4_ ^ unaff_XMM11_Dd,
                                                auVar8._8_4_ ^ unaff_XMM11_Dc),
                        (float)(double)CONCAT44(auVar8._4_4_ ^ unaff_XMM11_Db,
                                                auVar8._0_4_ ^ unaff_XMM11_Da));
          in_R10 = in_R10 + 4;
        } while ((int64_t)in_R10 < (int64_t)(int)(unaff_R14D - uVar19));
        dVar24 = dVar31 + dVar24 + dVar32 + dVar33 + *(double *)(unaff_RBP + 0x10);
        unaff_XMM12_Qa = dVar27 + dVar29 + dVar28 + dVar30 + unaff_XMM12_Qa;
      }
    }
    lVar20 = (int64_t)(int)uVar22;
    if (lVar20 < lVar21) {
      if (3 < lVar21 - lVar20) {
        pfVar18 = (float *)(local_var_28 + (lVar20 + 2) * 4);
        do {
          dVar27 = *(double *)(&local_buffer_00000050 + lVar20 * 8);
          dVar28 = *(double *)(&local_buffer_00000058 + lVar20 * 8);
          dVar29 = *(double *)(unaff_RBP + 0x18 + lVar20 * 8);
          dVar30 = *(double *)(&local_buffer_00000060 + lVar20 * 8);
          pfVar18[-2] = (float)(double)CONCAT44((uint)((uint64_t)dVar27 >> 0x20) ^ unaff_XMM11_Db,
                                                SUB84(dVar27,0) ^ unaff_XMM11_Da);
          dVar33 = *(double *)(unaff_RBP + 0x20 + lVar20 * 8);
          dVar31 = *(double *)(unaff_RBP + 0x28 + lVar20 * 8);
          dVar32 = *(double *)(&local_buffer_00000068 + lVar20 * 8);
          pfVar18[-1] = (float)(double)CONCAT44((uint)((uint64_t)dVar28 >> 0x20) ^ unaff_XMM11_Db,
                                                SUB84(dVar28,0) ^ unaff_XMM11_Da);
          lVar1 = lVar20 * 8;
          lVar20 = lVar20 + 4;
          dVar24 = dVar24 + dVar27 * dVar29 + dVar28 * dVar33 + dVar30 * dVar31 +
                   dVar32 * *(double *)(unaff_RBP + 0x30 + lVar1);
          *pfVar18 = (float)(double)CONCAT44((uint)((uint64_t)dVar30 >> 0x20) ^ unaff_XMM11_Db,
                                             SUB84(dVar30,0) ^ unaff_XMM11_Da);
          unaff_XMM12_Qa =
               unaff_XMM12_Qa + dVar27 * dVar27 + dVar28 * dVar28 + dVar30 * dVar30 +
               dVar32 * dVar32;
          pfVar18[1] = (float)(double)CONCAT44((uint)((uint64_t)dVar32 >> 0x20) ^ unaff_XMM11_Db,
                                               SUB84(dVar32,0) ^ unaff_XMM11_Da);
          pfVar18 = pfVar18 + 4;
        } while (lVar20 < lVar21 + -3);
      }
      for (; lVar20 < lVar21; lVar20 = lVar20 + 1) {
        dVar27 = *(double *)(&local_buffer_00000050 + lVar20 * 8);
        dVar24 = dVar24 + dVar27 * *(double *)(unaff_RBP + 0x18 + lVar20 * 8);
        unaff_XMM12_Qa = unaff_XMM12_Qa + dVar27 * dVar27;
        *(float *)(local_var_28 + lVar20 * 4) =
             (float)(double)CONCAT44((uint)((uint64_t)dVar27 >> 0x20) ^ unaff_XMM11_Db,
                                     SUB84(dVar27,0) ^ unaff_XMM11_Da);
      }
    }
    dVar24 = dVar24 + unaff_XMM14_Qa * -9.999999747378752e-06 * unaff_XMM12_Qa;
  }
  else {
    uVar23 = in_R10 & 0xffffffff;
    if (((0 < (int)unaff_R14D) && (7 < unaff_R14D)) &&
       ((&local_buffer_00000050 + (int64_t)(int)(unaff_R14D - 1) * 8 < local_var_28 ||
        (local_var_28 + (int64_t)(int)(unaff_R14D - 1) * 4 < &local_buffer_00000050)))) {
      uVar19 = unaff_R14D & 0x80000007;
      if ((int)uVar19 < 0) {
        uVar19 = (uVar19 - 1 | 0xfffffff8) + 1;
      }
      puVar17 = (uint64_t *)(local_var_28 + 0x10);
      do {
        lVar20 = in_R10 * 8;
        uVar22 = (int)uVar23 + 8;
        uVar23 = (uint64_t)uVar22;
        lVar1 = in_R10 * 8;
        uVar9 = *(uint *)(&local_buffer_00000060 + lVar1);
        uVar10 = *(uint *)(&local_buffer_00000064 + lVar1);
        uVar11 = *(uint *)(&local_buffer_00000068 + lVar1);
        uVar12 = *(uint *)(&local_buffer_0000006c + lVar1);
        puVar17[-2] = CONCAT44((float)(double)CONCAT44(*(uint *)(&local_buffer_0000005c + lVar20) ^
                                                       unaff_XMM11_Dd,
                                                       *(uint *)(&local_buffer_00000058 + lVar20) ^
                                                       unaff_XMM11_Dc),
                               (float)(double)CONCAT44(*(uint *)(&local_buffer_00000054 + lVar20) ^
                                                       unaff_XMM11_Db,
                                                       *(uint *)(&local_buffer_00000050 + lVar20) ^
                                                       unaff_XMM11_Da));
        lVar20 = in_R10 * 8;
        uVar13 = *(uint *)(&local_buffer_00000070 + lVar20);
        uVar14 = *(uint *)(&local_buffer_00000074 + lVar20);
        uVar15 = *(uint *)(&local_buffer_00000078 + lVar20);
        uVar16 = *(uint *)(&local_buffer_0000007c + lVar20);
        puVar17[-1] = CONCAT44((float)(double)CONCAT44(uVar12 ^ unaff_XMM11_Dd,
                                                       uVar11 ^ unaff_XMM11_Dc),
                               (float)(double)CONCAT44(uVar10 ^ unaff_XMM11_Db,
                                                       uVar9 ^ unaff_XMM11_Da));
        puVar2 = (uint *)(unaff_RBP + -0x80 + in_R10 * 8);
        uVar9 = *puVar2;
        uVar10 = puVar2[1];
        uVar11 = puVar2[2];
        uVar12 = puVar2[3];
        in_R10 = in_R10 + 8;
        *puVar17 = CONCAT44((float)(double)CONCAT44(uVar16 ^ unaff_XMM11_Dd,uVar15 ^ unaff_XMM11_Dc)
                            ,(float)(double)CONCAT44(uVar14 ^ unaff_XMM11_Db,uVar13 ^ unaff_XMM11_Da
                                                    ));
        puVar17[1] = CONCAT44((float)(double)CONCAT44(uVar12 ^ unaff_XMM11_Dd,
                                                      uVar11 ^ unaff_XMM11_Dc),
                              (float)(double)CONCAT44(uVar10 ^ unaff_XMM11_Db,uVar9 ^ unaff_XMM11_Da
                                                     ));
        puVar17 = puVar17 + 4;
      } while ((int64_t)in_R10 < (int64_t)(int)(unaff_R14D - uVar19));
    }
    lVar20 = (int64_t)(int)uVar22;
    if (lVar20 < lVar21) {
      if (3 < lVar21 - lVar20) {
        pfVar18 = (float *)(local_var_28 + (lVar20 + 2) * 4);
        do {
          uVar4 = *(uint64_t *)(&local_buffer_00000058 + lVar20 * 8);
          uVar5 = *(uint64_t *)(&local_buffer_00000060 + lVar20 * 8);
          pfVar18[-2] = (float)(double)CONCAT44((uint)((uint64_t)
                                                       *(uint64_t *)
                                                        (&local_buffer_00000050 + lVar20 * 8) >> 0x20) ^
                                                unaff_XMM11_Db,
                                                (uint)*(uint64_t *)(&local_buffer_00000050 + lVar20 * 8)
                                                ^ unaff_XMM11_Da);
          uVar6 = *(uint64_t *)(&local_buffer_00000068 + lVar20 * 8);
          lVar20 = lVar20 + 4;
          pfVar18[-1] = (float)(double)CONCAT44((uint)((uint64_t)uVar4 >> 0x20) ^ unaff_XMM11_Db,
                                                (uint)uVar4 ^ unaff_XMM11_Da);
          *pfVar18 = (float)(double)CONCAT44((uint)((uint64_t)uVar5 >> 0x20) ^ unaff_XMM11_Db,
                                             (uint)uVar5 ^ unaff_XMM11_Da);
          pfVar18[1] = (float)(double)CONCAT44((uint)((uint64_t)uVar6 >> 0x20) ^ unaff_XMM11_Db,
                                               (uint)uVar6 ^ unaff_XMM11_Da);
          pfVar18 = pfVar18 + 4;
        } while (lVar20 < lVar21 + -3);
      }
      for (; lVar20 < lVar21; lVar20 = lVar20 + 1) {
        *(float *)(local_var_28 + lVar20 * 4) =
             (float)(double)CONCAT44((uint)((uint64_t)
                                            *(uint64_t *)(&local_buffer_00000050 + lVar20 * 8) >> 0x20)
                                     ^ unaff_XMM11_Db,
                                     (uint)*(uint64_t *)(&local_buffer_00000050 + lVar20 * 8) ^
                                     unaff_XMM11_Da);
      }
    }
    if (0 < (int)unaff_R12D) {
      uVar23 = (uint64_t)unaff_R12D;
      do {
        dVar24 = (double)SystemCore_72B3A0(local_var_40,unaff_R14D);
        local_var_40 = local_var_40 + (int64_t)local_var_38._4_4_ * 4;
        unaff_XMM14_Qa = unaff_XMM14_Qa - dVar24;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    dVar24 = unaff_XMM13_Qa * unaff_XMM14_Qa;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker((float)dVar24);
}
// 函数: void function_735d37(uint64_t param_1,int64_t param_2,uint64_t param_3,int8_t *param_4,
void function_735d37(uint64_t param_1,int64_t param_2,uint64_t param_3,int8_t *param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,int64_t param_8)
{
  int64_t lVar1;
  uint *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint64_t *puVar14;
  float *pfVar15;
  uint uVar16;
  int64_t lVar17;
  int64_t unaff_RBP;
  uint uVar18;
  uint64_t uVar19;
  uint64_t in_R10;
  uint unaff_R12D;
  uint unaff_R14D;
  double dVar20;
  uint unaff_XMM11_Da;
  uint unaff_XMM11_Db;
  uint unaff_XMM11_Dc;
  uint unaff_XMM11_Dd;
  double unaff_XMM13_Qa;
  double unaff_XMM14_Qa;
  uVar19 = in_R10 & 0xffffffff;
  uVar18 = (uint)in_R10;
  if (((0 < (int)unaff_R14D) && (7 < unaff_R14D)) &&
     ((&local_buffer_00000050 + (int64_t)(int)(unaff_R14D - 1) * 8 < param_4 ||
      (param_4 + (int64_t)(int)(unaff_R14D - 1) * 4 < &local_buffer_00000050)))) {
    uVar16 = unaff_R14D & 0x80000007;
    if ((int)uVar16 < 0) {
      uVar16 = (uVar16 - 1 | 0xfffffff8) + 1;
    }
    puVar14 = (uint64_t *)(param_4 + 0x10);
    do {
      lVar17 = in_R10 * 8;
      uVar18 = (int)uVar19 + 8;
      uVar19 = (uint64_t)uVar18;
      lVar1 = in_R10 * 8;
      uVar6 = *(uint *)(&local_buffer_00000060 + lVar1);
      uVar7 = *(uint *)(&local_buffer_00000064 + lVar1);
      uVar8 = *(uint *)(&local_buffer_00000068 + lVar1);
      uVar9 = *(uint *)(&local_buffer_0000006c + lVar1);
      puVar14[-2] = CONCAT44((float)(double)CONCAT44(*(uint *)(&local_buffer_0000005c + lVar17) ^
                                                     unaff_XMM11_Dd,
                                                     *(uint *)(&local_buffer_00000058 + lVar17) ^
                                                     unaff_XMM11_Dc),
                             (float)(double)CONCAT44(*(uint *)(&local_buffer_00000054 + lVar17) ^
                                                     unaff_XMM11_Db,
                                                     *(uint *)(&local_buffer_00000050 + lVar17) ^
                                                     unaff_XMM11_Da));
      lVar17 = in_R10 * 8;
      uVar10 = *(uint *)(&local_buffer_00000070 + lVar17);
      uVar11 = *(uint *)(&local_buffer_00000074 + lVar17);
      uVar12 = *(uint *)(&local_buffer_00000078 + lVar17);
      uVar13 = *(uint *)(&local_buffer_0000007c + lVar17);
      puVar14[-1] = CONCAT44((float)(double)CONCAT44(uVar9 ^ unaff_XMM11_Dd,uVar8 ^ unaff_XMM11_Dc),
                             (float)(double)CONCAT44(uVar7 ^ unaff_XMM11_Db,uVar6 ^ unaff_XMM11_Da))
      ;
      puVar2 = (uint *)(unaff_RBP + -0x80 + in_R10 * 8);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      in_R10 = in_R10 + 8;
      *puVar14 = CONCAT44((float)(double)CONCAT44(uVar13 ^ unaff_XMM11_Dd,uVar12 ^ unaff_XMM11_Dc),
                          (float)(double)CONCAT44(uVar11 ^ unaff_XMM11_Db,uVar10 ^ unaff_XMM11_Da));
      puVar14[1] = CONCAT44((float)(double)CONCAT44(uVar9 ^ unaff_XMM11_Dd,uVar8 ^ unaff_XMM11_Dc),
                            (float)(double)CONCAT44(uVar7 ^ unaff_XMM11_Db,uVar6 ^ unaff_XMM11_Da));
      puVar14 = puVar14 + 4;
    } while ((int64_t)in_R10 < (int64_t)(int)(unaff_R14D - uVar16));
  }
  lVar17 = (int64_t)(int)uVar18;
  if (lVar17 < param_2) {
    if (3 < param_2 - lVar17) {
      pfVar15 = (float *)(param_4 + (lVar17 + 2) * 4);
      do {
        uVar3 = *(uint64_t *)(&local_buffer_00000058 + lVar17 * 8);
        uVar4 = *(uint64_t *)(&local_buffer_00000060 + lVar17 * 8);
        pfVar15[-2] = (float)(double)CONCAT44((uint)((uint64_t)
                                                     *(uint64_t *)(&local_buffer_00000050 + lVar17 * 8)
                                                    >> 0x20) ^ unaff_XMM11_Db,
                                              (uint)*(uint64_t *)(&local_buffer_00000050 + lVar17 * 8) ^
                                              unaff_XMM11_Da);
        uVar5 = *(uint64_t *)(&local_buffer_00000068 + lVar17 * 8);
        lVar17 = lVar17 + 4;
        pfVar15[-1] = (float)(double)CONCAT44((uint)((uint64_t)uVar3 >> 0x20) ^ unaff_XMM11_Db,
                                              (uint)uVar3 ^ unaff_XMM11_Da);
        *pfVar15 = (float)(double)CONCAT44((uint)((uint64_t)uVar4 >> 0x20) ^ unaff_XMM11_Db,
                                           (uint)uVar4 ^ unaff_XMM11_Da);
        pfVar15[1] = (float)(double)CONCAT44((uint)((uint64_t)uVar5 >> 0x20) ^ unaff_XMM11_Db,
                                             (uint)uVar5 ^ unaff_XMM11_Da);
        pfVar15 = pfVar15 + 4;
      } while (lVar17 < param_2 + -3);
    }
    for (; lVar17 < param_2; lVar17 = lVar17 + 1) {
      *(float *)(param_4 + lVar17 * 4) =
           (float)(double)CONCAT44((uint)((uint64_t)*(uint64_t *)(&local_buffer_00000050 + lVar17 * 8)
                                         >> 0x20) ^ unaff_XMM11_Db,
                                   (uint)*(uint64_t *)(&local_buffer_00000050 + lVar17 * 8) ^
                                   unaff_XMM11_Da);
    }
  }
  if (0 < (int)unaff_R12D) {
    uVar19 = (uint64_t)unaff_R12D;
    do {
      dVar20 = (double)SystemCore_72B3A0(param_8,unaff_R14D);
      param_8 = param_8 + (int64_t)param_7._4_4_ * 4;
      unaff_XMM14_Qa = unaff_XMM14_Qa - dVar20;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker((float)(unaff_XMM13_Qa * unaff_XMM14_Qa));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_736180(uint64_t param_1,uint64_t param_2,uint64_t param_3,short param_4,uint param_5)
void function_736180(uint64_t param_1,uint64_t param_2,uint64_t param_3,short param_4,uint param_5)
{
  uint64_t *puVar1;
  short *psVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int32_t uVar6;
  uint uVar7;
  uint64_t *puVar8;
  short *psVar9;
  int64_t lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint64_t uVar14;
  int8_t auVar15 [16];
  int8_t in_XMM1 [16];
  int8_t auVar16 [16];
  int8_t auVar17 [16];
  int8_t auVar18 [16];
  short sVar19;
  short sVar20;
  short sVar21;
  int8_t in_XMM4 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  iVar12 = 0;
  iVar11 = 0;
  if (0 < (int)param_5) {
    iVar13 = iVar12;
    if ((7 < param_5) && (iVar13 = iVar11, 1 < ui_system_control_ui)) {
      lVar10 = (int64_t)(int)(param_5 - 1);
      uVar14 = param_1 + lVar10 * 2;
      if (((param_2 + lVar10 * 2 < param_1) || (uVar14 < param_2)) &&
         ((param_3 + lVar10 * 2 < param_1 || (uVar14 < param_3)))) {
        uVar7 = param_5 & 0x80000007;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
        }
        uVar6 = CONCAT22(param_4,param_4);
        auVar22._4_4_ = uVar6;
        auVar22._0_4_ = uVar6;
        auVar22._8_4_ = uVar6;
        auVar22._12_4_ = uVar6;
        auVar22 = pmovsxwd(in_XMM4,auVar22);
        auVar23 = ZEXT416(2);
        puVar8 = (uint64_t *)(param_2 + 8);
        do {
          uVar3 = puVar8[-1];
          iVar12 = iVar12 + 8;
          uVar4 = *(uint64_t *)((param_3 - param_2) + -8 + (int64_t)puVar8);
          puVar1 = puVar8 + 2;
          auVar15._0_2_ = (short)uVar4 - (short)uVar3;
          sVar19 = (short)((uint64_t)uVar3 >> 0x10);
          auVar15._2_2_ = (short)((uint64_t)uVar4 >> 0x10) - sVar19;
          sVar20 = (short)((uint64_t)uVar3 >> 0x20);
          auVar15._4_2_ = (short)((uint64_t)uVar4 >> 0x20) - sVar20;
          sVar21 = (short)((uint64_t)uVar3 >> 0x30);
          auVar15._6_2_ = (short)((uint64_t)uVar4 >> 0x30) - sVar21;
          auVar15._8_8_ = 0;
          auVar16 = pmovsxwd(in_XMM1,auVar15);
          auVar16 = pmulld(auVar16,auVar22);
          auVar17._0_4_ = auVar16._0_4_ >> auVar23;
          auVar17._4_4_ = auVar16._4_4_ >> auVar23;
          auVar17._8_4_ = auVar16._8_4_ >> auVar23;
          auVar17._12_4_ = auVar16._12_4_ >> auVar23;
          auVar15 = pshuflw(auVar15,auVar17,0xd8);
          auVar15 = pshufhw(auVar17,auVar15,0xd8);
          uVar4 = *(uint64_t *)((param_3 - param_2) + -0x10 + (int64_t)puVar1);
          uVar5 = *puVar8;
          *(uint64_t *)((param_1 - param_2) + -0x18 + (int64_t)puVar1) =
               CONCAT26(auVar15._10_2_ + sVar21,
                        CONCAT24(auVar15._8_2_ + sVar20,
                                 CONCAT22(auVar15._2_2_ + sVar19,auVar15._0_2_ + (short)uVar3)));
          auVar16._0_2_ = (short)uVar4 - (short)uVar5;
          sVar19 = (short)((uint64_t)uVar5 >> 0x10);
          auVar16._2_2_ = (short)((uint64_t)uVar4 >> 0x10) - sVar19;
          sVar20 = (short)((uint64_t)uVar5 >> 0x20);
          auVar16._4_2_ = (short)((uint64_t)uVar4 >> 0x20) - sVar20;
          sVar21 = (short)((uint64_t)uVar5 >> 0x30);
          auVar16._6_2_ = (short)((uint64_t)uVar4 >> 0x30) - sVar21;
          auVar16._8_8_ = 0;
          auVar15 = pmovsxwd(auVar15,auVar16);
          auVar15 = pmulld(auVar15,auVar22);
          auVar18._0_4_ = auVar15._0_4_ >> auVar23;
          auVar18._4_4_ = auVar15._4_4_ >> auVar23;
          auVar18._8_4_ = auVar15._8_4_ >> auVar23;
          auVar18._12_4_ = auVar15._12_4_ >> auVar23;
          auVar15 = pshuflw(auVar16,auVar18,0xd8);
          in_XMM1 = pshufhw(auVar18,auVar15,0xd8);
          *(uint64_t *)((param_1 - param_2) + -0x10 + (int64_t)puVar1) =
               CONCAT26(in_XMM1._10_2_ + sVar21,
                        CONCAT24(in_XMM1._8_2_ + sVar20,
                                 CONCAT22(in_XMM1._2_2_ + sVar19,in_XMM1._0_2_ + (short)uVar5)));
          puVar8 = puVar1;
          iVar13 = iVar12;
        } while (iVar12 < (int)(param_5 - uVar7));
      }
    }
    if (iVar13 < (int)param_5) {
      uVar14 = (uint64_t)(param_5 - iVar13);
      psVar9 = (short *)(param_3 + (int64_t)iVar13 * 2);
      do {
        sVar19 = *psVar9;
        psVar2 = (short *)((param_2 - param_3) + (int64_t)psVar9);
        psVar9 = psVar9 + 1;
        *(short *)((param_1 - param_3) + -2 + (int64_t)psVar9) =
             (short)((int)(short)(sVar19 - *psVar2) * (int)param_4 >> 2) +
             *(short *)((param_2 - param_3) + -2 + (int64_t)psVar9);
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_73619d(uint64_t param_1,uint param_2,uint64_t param_3)
void function_73619d(uint64_t param_1,uint param_2,uint64_t param_3)
{
  uint64_t *puVar1;
  short *psVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t *puVar7;
  short *psVar8;
  int64_t lVar9;
  int unaff_EBX;
  short unaff_SI;
  uint64_t uVar10;
  uint64_t in_R10;
  uint64_t in_R11;
  int8_t auVar11 [16];
  int8_t in_XMM1 [16];
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  short sVar15;
  short sVar16;
  short sVar17;
  int8_t in_XMM4 [16];
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  if ((7 < param_2) && (1 < ui_system_control_ui)) {
    lVar9 = (int64_t)(int)(param_2 - 1);
    uVar10 = in_R11 + lVar9 * 2;
    if (((in_R10 + lVar9 * 2 < in_R11) || (uVar10 < in_R10)) &&
       ((param_3 + lVar9 * 2 < in_R11 || (uVar10 < param_3)))) {
      uVar6 = param_2 & 0x80000007;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
      }
      auVar18._0_4_ = CONCAT22(unaff_SI,unaff_SI);
      auVar18._4_4_ = auVar18._0_4_;
      auVar18._8_4_ = auVar18._0_4_;
      auVar18._12_4_ = auVar18._0_4_;
      auVar18 = pmovsxwd(in_XMM4,auVar18);
      auVar19 = ZEXT416(2);
      puVar7 = (uint64_t *)(in_R10 + 8);
      do {
        uVar3 = puVar7[-1];
        unaff_EBX = unaff_EBX + 8;
        uVar4 = *(uint64_t *)((param_3 - in_R10) + -8 + (int64_t)puVar7);
        puVar1 = puVar7 + 2;
        auVar11._0_2_ = (short)uVar4 - (short)uVar3;
        sVar15 = (short)((uint64_t)uVar3 >> 0x10);
        auVar11._2_2_ = (short)((uint64_t)uVar4 >> 0x10) - sVar15;
        sVar16 = (short)((uint64_t)uVar3 >> 0x20);
        auVar11._4_2_ = (short)((uint64_t)uVar4 >> 0x20) - sVar16;
        sVar17 = (short)((uint64_t)uVar3 >> 0x30);
        auVar11._6_2_ = (short)((uint64_t)uVar4 >> 0x30) - sVar17;
        auVar11._8_8_ = 0;
        auVar12 = pmovsxwd(in_XMM1,auVar11);
        auVar12 = pmulld(auVar12,auVar18);
        auVar13._0_4_ = auVar12._0_4_ >> auVar19;
        auVar13._4_4_ = auVar12._4_4_ >> auVar19;
        auVar13._8_4_ = auVar12._8_4_ >> auVar19;
        auVar13._12_4_ = auVar12._12_4_ >> auVar19;
        auVar11 = pshuflw(auVar11,auVar13,0xd8);
        auVar11 = pshufhw(auVar13,auVar11,0xd8);
        uVar4 = *(uint64_t *)((param_3 - in_R10) + -0x10 + (int64_t)puVar1);
        uVar5 = *puVar7;
        *(uint64_t *)((in_R11 - in_R10) + -0x18 + (int64_t)puVar1) =
             CONCAT26(auVar11._10_2_ + sVar17,
                      CONCAT24(auVar11._8_2_ + sVar16,
                               CONCAT22(auVar11._2_2_ + sVar15,auVar11._0_2_ + (short)uVar3)));
        auVar12._0_2_ = (short)uVar4 - (short)uVar5;
        sVar15 = (short)((uint64_t)uVar5 >> 0x10);
        auVar12._2_2_ = (short)((uint64_t)uVar4 >> 0x10) - sVar15;
        sVar16 = (short)((uint64_t)uVar5 >> 0x20);
        auVar12._4_2_ = (short)((uint64_t)uVar4 >> 0x20) - sVar16;
        sVar17 = (short)((uint64_t)uVar5 >> 0x30);
        auVar12._6_2_ = (short)((uint64_t)uVar4 >> 0x30) - sVar17;
        auVar12._8_8_ = 0;
        auVar11 = pmovsxwd(auVar11,auVar12);
        auVar11 = pmulld(auVar11,auVar18);
        auVar14._0_4_ = auVar11._0_4_ >> auVar19;
        auVar14._4_4_ = auVar11._4_4_ >> auVar19;
        auVar14._8_4_ = auVar11._8_4_ >> auVar19;
        auVar14._12_4_ = auVar11._12_4_ >> auVar19;
        auVar11 = pshuflw(auVar12,auVar14,0xd8);
        in_XMM1 = pshufhw(auVar14,auVar11,0xd8);
        *(uint64_t *)((in_R11 - in_R10) + -0x10 + (int64_t)puVar1) =
             CONCAT26(in_XMM1._10_2_ + sVar17,
                      CONCAT24(in_XMM1._8_2_ + sVar16,
                               CONCAT22(in_XMM1._2_2_ + sVar15,in_XMM1._0_2_ + (short)uVar5)));
        puVar7 = puVar1;
      } while (unaff_EBX < (int)(param_2 - uVar6));
    }
  }
  if (unaff_EBX < (int)param_2) {
    uVar10 = (uint64_t)(param_2 - unaff_EBX);
    psVar8 = (short *)(param_3 + (int64_t)unaff_EBX * 2);
    do {
      sVar15 = *psVar8;
      psVar2 = (short *)((in_R10 - param_3) + (int64_t)psVar8);
      psVar8 = psVar8 + 1;
      *(short *)((in_R11 - param_3) + -2 + (int64_t)psVar8) =
           (short)((int)(short)(sVar15 - *psVar2) * (int)unaff_SI >> 2) +
           *(short *)((in_R10 - param_3) + -2 + (int64_t)psVar8);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}
// 函数: void function_7362fc(void)
void function_7362fc(void)
{
  return;
}