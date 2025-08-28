#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part310.c - 2 个函数

// 函数: void FUN_180839208(void)
void FUN_180839208(void)

{
  int64_t in_RAX;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R15;
  uint64_t unaff_XMM6_Qa;
  uint64_t unaff_XMM6_Qb;
  uint64_t unaff_XMM7_Qa;
  uint64_t unaff_XMM7_Qb;
  uint64_t unaff_XMM8_Qa;
  uint64_t unaff_XMM8_Qb;
  uint64_t unaff_XMM9_Qa;
  uint64_t unaff_XMM9_Qb;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  *(uint64_t *)(in_R11 + -0x48) = unaff_XMM6_Qa;
  *(uint64_t *)(in_R11 + -0x40) = unaff_XMM6_Qb;
  *(uint64_t *)(in_R11 + -0x58) = unaff_XMM7_Qa;
  *(uint64_t *)(in_R11 + -0x50) = unaff_XMM7_Qb;
  *(uint64_t *)(in_R11 + -0x68) = unaff_XMM8_Qa;
  *(uint64_t *)(in_R11 + -0x60) = unaff_XMM8_Qb;
  *(uint64_t *)(in_R11 + -0x78) = unaff_XMM9_Qa;
  *(uint64_t *)(in_R11 + -0x70) = unaff_XMM9_Qb;
                    // WARNING: Could not recover jumptable at 0x000180839239. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)((uint64_t)*(uint *)(&unknown_var_4848_ptr + in_RAX * 4) + 0x180000000))
            ((code *)((uint64_t)*(uint *)(&unknown_var_4848_ptr + in_RAX * 4) + 0x180000000));
  return;
}



uint64_t FUN_180839344(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float *unaff_RBX;
  uint unaff_EDI;
  uint uVar17;
  uint unaff_R14D;
  int unaff_R15D;
  uint extraout_XMM0_Da;
  uint extraout_XMM0_Da_00;
  uint extraout_XMM0_Db;
  uint extraout_XMM0_Db_00;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  uint extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  uint unaff_XMM11_Da;
  uint unaff_XMM11_Db;
  uint unaff_XMM11_Dc;
  uint unaff_XMM11_Dd;
  float unaff_XMM12_Da;
  float unaff_XMM12_Db;
  float unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
  float unaff_XMM13_Da;
  float unaff_XMM13_Db;
  float unaff_XMM13_Dc;
  float unaff_XMM13_Dd;
  
  do {
    fVar1 = *unaff_RBX;
    fVar2 = unaff_RBX[1];
    fVar3 = unaff_RBX[2];
    fVar4 = unaff_RBX[3];
    fVar5 = unaff_RBX[4];
    fVar6 = unaff_RBX[5];
    fVar7 = unaff_RBX[6];
    fVar8 = unaff_RBX[7];
    fVar9 = unaff_RBX[8];
    fVar10 = unaff_RBX[9];
    fVar11 = unaff_RBX[10];
    fVar12 = unaff_RBX[0xb];
    fVar13 = unaff_RBX[0xc];
    fVar14 = unaff_RBX[0xd];
    fVar15 = unaff_RBX[0xe];
    fVar16 = unaff_RBX[0xf];
    FUN_180838f80();
    auVar18 = ZEXT416(unaff_R14D);
    auVar19 = ZEXT416(unaff_R14D * 2);
    auVar20 = ZEXT416(unaff_R14D * 3);
    *unaff_RBX = (float)(int)(extraout_XMM0_Da & unaff_XMM11_Da) * unaff_XMM13_Da + unaff_XMM12_Da +
                 fVar1;
    unaff_RBX[1] = (float)(int)((int)extraout_XMM0_Da >> auVar18 & unaff_XMM11_Da) * unaff_XMM13_Db
                   + unaff_XMM12_Db + fVar2;
    unaff_RBX[2] = (float)(int)((int)extraout_XMM0_Da >> auVar19 & unaff_XMM11_Da) * unaff_XMM13_Dc
                   + unaff_XMM12_Dc + fVar3;
    unaff_RBX[3] = (float)(int)((int)extraout_XMM0_Da >> auVar20 & unaff_XMM11_Da) * unaff_XMM13_Dd
                   + unaff_XMM12_Dd + fVar4;
    unaff_RBX[4] = (float)(int)(extraout_XMM0_Db & unaff_XMM11_Db) * unaff_XMM13_Da + unaff_XMM12_Da
                   + fVar5;
    unaff_RBX[5] = (float)(int)((int)extraout_XMM0_Db >> auVar18 & unaff_XMM11_Db) * unaff_XMM13_Db
                   + unaff_XMM12_Db + fVar6;
    unaff_RBX[6] = (float)(int)((int)extraout_XMM0_Db >> auVar19 & unaff_XMM11_Db) * unaff_XMM13_Dc
                   + unaff_XMM12_Dc + fVar7;
    unaff_RBX[7] = (float)(int)((int)extraout_XMM0_Db >> auVar20 & unaff_XMM11_Db) * unaff_XMM13_Dd
                   + unaff_XMM12_Dd + fVar8;
    unaff_RBX[8] = (float)(int)(extraout_XMM0_Dc & unaff_XMM11_Dc) * unaff_XMM13_Da + unaff_XMM12_Da
                   + fVar9;
    unaff_RBX[9] = (float)(int)((int)extraout_XMM0_Dc >> auVar18 & unaff_XMM11_Dc) * unaff_XMM13_Db
                   + unaff_XMM12_Db + fVar10;
    unaff_RBX[10] =
         (float)(int)((int)extraout_XMM0_Dc >> auVar19 & unaff_XMM11_Dc) * unaff_XMM13_Dc +
         unaff_XMM12_Dc + fVar11;
    unaff_RBX[0xb] =
         (float)(int)((int)extraout_XMM0_Dc >> auVar20 & unaff_XMM11_Dc) * unaff_XMM13_Dd +
         unaff_XMM12_Dd + fVar12;
    unaff_RBX[0xc] =
         (float)(int)(extraout_XMM0_Dd & unaff_XMM11_Dd) * unaff_XMM13_Da + unaff_XMM12_Da + fVar13;
    unaff_RBX[0xd] =
         (float)(int)((int)extraout_XMM0_Dd >> auVar18 & unaff_XMM11_Dd) * unaff_XMM13_Db +
         unaff_XMM12_Db + fVar14;
    unaff_RBX[0xe] =
         (float)(int)((int)extraout_XMM0_Dd >> auVar19 & unaff_XMM11_Dd) * unaff_XMM13_Dc +
         unaff_XMM12_Dc + fVar15;
    unaff_RBX[0xf] =
         (float)(int)((int)extraout_XMM0_Dd >> auVar20 & unaff_XMM11_Dd) * unaff_XMM13_Dd +
         unaff_XMM12_Dd + fVar16;
    unaff_RBX = unaff_RBX + 0x10;
    unaff_R15D = unaff_R15D + -1;
  } while (unaff_R15D != 0);
  for (uVar17 = unaff_EDI & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
    FUN_180838d80();
    *unaff_RBX = *unaff_RBX +
                 (float)(int)(extraout_XMM0_Da_00 & unaff_XMM11_Da) * unaff_XMM13_Da +
                 unaff_XMM12_Da;
    unaff_RBX[1] = unaff_RBX[1] +
                   (float)(int)(extraout_XMM0_Db_00 & unaff_XMM11_Db) * unaff_XMM13_Db +
                   unaff_XMM12_Db;
    unaff_RBX[2] = unaff_RBX[2] +
                   (float)(int)(extraout_XMM0_Dc_00 & unaff_XMM11_Dc) * unaff_XMM13_Dc +
                   unaff_XMM12_Dc;
    unaff_RBX[3] = unaff_RBX[3] +
                   (float)(int)(extraout_XMM0_Dd_00 & unaff_XMM11_Dd) * unaff_XMM13_Dd +
                   unaff_XMM12_Dd;
    unaff_RBX = unaff_RBX + 4;
  }
  return 0;
}



uint64_t FUN_18083943c(void)

{
  float *unaff_RBX;
  uint unaff_EDI;
  uint uVar1;
  uint extraout_XMM0_Da;
  uint extraout_XMM0_Db;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  uint unaff_XMM11_Da;
  uint unaff_XMM11_Db;
  uint unaff_XMM11_Dc;
  uint unaff_XMM11_Dd;
  float unaff_XMM12_Da;
  float unaff_XMM12_Db;
  float unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
  float unaff_XMM13_Da;
  float unaff_XMM13_Db;
  float unaff_XMM13_Dc;
  float unaff_XMM13_Dd;
  
  for (uVar1 = unaff_EDI & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    FUN_180838d80();
    *unaff_RBX = *unaff_RBX +
                 (float)(int)(extraout_XMM0_Da & unaff_XMM11_Da) * unaff_XMM13_Da + unaff_XMM12_Da;
    unaff_RBX[1] = unaff_RBX[1] +
                   (float)(int)(extraout_XMM0_Db & unaff_XMM11_Db) * unaff_XMM13_Db + unaff_XMM12_Db
    ;
    unaff_RBX[2] = unaff_RBX[2] +
                   (float)(int)(extraout_XMM0_Dc & unaff_XMM11_Dc) * unaff_XMM13_Dc + unaff_XMM12_Dc
    ;
    unaff_RBX[3] = unaff_RBX[3] +
                   (float)(int)(extraout_XMM0_Dd & unaff_XMM11_Dd) * unaff_XMM13_Dd + unaff_XMM12_Dd
    ;
    unaff_RBX = unaff_RBX + 4;
  }
  return 0;
}



uint64_t FUN_1808396fe(void)

{
  return 0;
}



uint64_t FUN_180839750(uint *param_1,float *param_2,uint64_t param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int64_t lVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint extraout_XMM0_Da;
  uint extraout_XMM0_Da_00;
  uint extraout_XMM0_Da_01;
  uint extraout_XMM0_Db;
  uint extraout_XMM0_Db_00;
  uint extraout_XMM0_Db_01;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  uint extraout_XMM0_Dc_01;
  uint extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  uint extraout_XMM0_Dd_01;
  int8_t auVar22 [16];
  
  uVar21 = (uint)*(char *)((int64_t)param_1 + 0x66);
  uVar14 = *param_1;
  uVar15 = param_1[1];
  uVar16 = param_1[2];
  uVar17 = param_1[3];
  fVar3 = (float)param_1[4];
  fVar4 = (float)param_1[5];
  fVar5 = (float)param_1[6];
  fVar6 = (float)param_1[7];
  fVar7 = (float)param_1[8];
  fVar8 = (float)param_1[9];
  fVar9 = (float)param_1[10];
  fVar10 = (float)param_1[0xb];
  iVar20 = param_4 >> 2;
  if ((byte)param_1[0x19] < 8) {
    switch((byte)param_1[0x19]) {
    case 0:
    case 1:
      for (; iVar20 != 0; iVar20 = iVar20 + -1) {
        FUN_180838f80(param_1,param_3);
        *param_2 = *param_2 + (float)(int)(extraout_XMM0_Da & uVar14) * fVar7 + fVar3;
        param_2[1] = param_2[1] + (float)(int)(extraout_XMM0_Db & uVar15) * fVar8 + fVar4;
        param_2[2] = param_2[2] + (float)(int)(extraout_XMM0_Dc & uVar16) * fVar9 + fVar5;
        param_2[3] = param_2[3] + (float)(int)(extraout_XMM0_Dd & uVar17) * fVar10 + fVar6;
        param_2 = param_2 + 4;
      }
      break;
    case 2:
    case 3:
      param_4 = param_4 >> 3;
      if (param_4 != 0) {
        do {
          FUN_180838f80(param_1,param_3);
          auVar22 = ZEXT416(uVar21);
          *param_2 = (float)(int)(extraout_XMM0_Da_00 & uVar14) * fVar7 + fVar3 + *param_2;
          param_2[1] = (float)(int)(extraout_XMM0_Db_00 & uVar15) * fVar8 + fVar4 + param_2[1];
          param_2[2] = (float)(int)(extraout_XMM0_Dc_00 & uVar16) * fVar9 + fVar5 + param_2[2];
          param_2[3] = (float)(int)(extraout_XMM0_Dd_00 & uVar17) * fVar10 + fVar6 + param_2[3];
          pfVar1 = param_2 + (int64_t)(iVar20 / 2) * 4;
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar2 = param_2 + (int64_t)(iVar20 / 2) * 4;
          *pfVar2 = (float)(int)((int)extraout_XMM0_Da_00 >> auVar22 & uVar14) * fVar7 + fVar3 +
                    *pfVar1;
          pfVar2[1] = (float)(int)((int)extraout_XMM0_Db_00 >> auVar22 & uVar15) * fVar8 + fVar4 +
                      fVar11;
          pfVar2[2] = (float)(int)((int)extraout_XMM0_Dc_00 >> auVar22 & uVar16) * fVar9 + fVar5 +
                      fVar12;
          pfVar2[3] = (float)(int)((int)extraout_XMM0_Dd_00 >> auVar22 & uVar17) * fVar10 + fVar6 +
                      fVar13;
          param_2 = param_2 + 4;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
      break;
    default:
      iVar19 = param_4 >> 4;
      if (iVar19 != 0) {
        lVar18 = (int64_t)((int)(iVar20 + (param_4 >> 0x1f & 3U)) >> 2);
        do {
          FUN_180838f80(param_1,param_3);
          auVar22 = ZEXT416(uVar21);
          *param_2 = (float)(int)(extraout_XMM0_Da_01 & uVar14) * fVar7 + fVar3 + *param_2;
          param_2[1] = (float)(int)(extraout_XMM0_Db_01 & uVar15) * fVar8 + fVar4 + param_2[1];
          param_2[2] = (float)(int)(extraout_XMM0_Dc_01 & uVar16) * fVar9 + fVar5 + param_2[2];
          param_2[3] = (float)(int)(extraout_XMM0_Dd_01 & uVar17) * fVar10 + fVar6 + param_2[3];
          pfVar1 = param_2 + lVar18 * 4;
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar2 = param_2 + lVar18 * 4;
          *pfVar2 = (float)(int)((int)extraout_XMM0_Da_01 >> auVar22 & uVar14) * fVar7 + fVar3 +
                    *pfVar1;
          pfVar2[1] = (float)(int)((int)extraout_XMM0_Db_01 >> auVar22 & uVar15) * fVar8 + fVar4 +
                      fVar11;
          pfVar2[2] = (float)(int)((int)extraout_XMM0_Dc_01 >> auVar22 & uVar16) * fVar9 + fVar5 +
                      fVar12;
          pfVar2[3] = (float)(int)((int)extraout_XMM0_Dd_01 >> auVar22 & uVar17) * fVar10 + fVar6 +
                      fVar13;
          auVar22 = ZEXT416(uVar21 * 2);
          pfVar1 = param_2 + lVar18 * 8;
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar2 = param_2 + lVar18 * 8;
          *pfVar2 = (float)(int)((int)extraout_XMM0_Da_01 >> auVar22 & uVar14) * fVar7 + fVar3 +
                    *pfVar1;
          pfVar2[1] = (float)(int)((int)extraout_XMM0_Db_01 >> auVar22 & uVar15) * fVar8 + fVar4 +
                      fVar11;
          pfVar2[2] = (float)(int)((int)extraout_XMM0_Dc_01 >> auVar22 & uVar16) * fVar9 + fVar5 +
                      fVar12;
          pfVar2[3] = (float)(int)((int)extraout_XMM0_Dd_01 >> auVar22 & uVar17) * fVar10 + fVar6 +
                      fVar13;
          auVar22 = ZEXT416(uVar21 * 3);
          pfVar1 = param_2 + lVar18 * 0xc;
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar2 = param_2 + lVar18 * 0xc;
          *pfVar2 = (float)(int)((int)extraout_XMM0_Da_01 >> auVar22 & uVar14) * fVar7 + fVar3 +
                    *pfVar1;
          pfVar2[1] = (float)(int)((int)extraout_XMM0_Db_01 >> auVar22 & uVar15) * fVar8 + fVar4 +
                      fVar11;
          pfVar2[2] = (float)(int)((int)extraout_XMM0_Dc_01 >> auVar22 & uVar16) * fVar9 + fVar5 +
                      fVar12;
          pfVar2[3] = (float)(int)((int)extraout_XMM0_Dd_01 >> auVar22 & uVar17) * fVar10 + fVar6 +
                      fVar13;
          param_2 = param_2 + 4;
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
      }
    }
  }
  return 0;
}





// 函数: void FUN_1808397b0(uint64_t param_1,int64_t param_2)
void FUN_1808397b0(uint64_t param_1,int64_t param_2)

{
  int64_t in_RAX;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)((uint64_t)*(uint *)(param_2 + 0x83998c + in_RAX * 4) + param_2);
                    // WARNING: Could not recover jumptable at 0x0001808397c2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



uint64_t FUN_180839883(void)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_EAX;
  int64_t lVar6;
  float *unaff_RBX;
  int unaff_EBP;
  uint unaff_R15D;
  uint extraout_XMM0_Da;
  uint extraout_XMM0_Db;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  int8_t auVar7 [16];
  uint unaff_XMM6_Da;
  uint unaff_XMM6_Db;
  uint unaff_XMM6_Dc;
  uint unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  float unaff_XMM7_Db;
  float unaff_XMM7_Dc;
  float unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  float unaff_XMM8_Db;
  float unaff_XMM8_Dc;
  float unaff_XMM8_Dd;
  
  lVar6 = (int64_t)((int)(in_EAX + (in_EAX >> 0x1f & 3U)) >> 2);
  do {
    FUN_180838f80();
    auVar7 = ZEXT416(unaff_R15D);
    *unaff_RBX = (float)(int)(extraout_XMM0_Da & unaff_XMM6_Da) * unaff_XMM8_Da + unaff_XMM7_Da +
                 *unaff_RBX;
    unaff_RBX[1] = (float)(int)(extraout_XMM0_Db & unaff_XMM6_Db) * unaff_XMM8_Db + unaff_XMM7_Db +
                   unaff_RBX[1];
    unaff_RBX[2] = (float)(int)(extraout_XMM0_Dc & unaff_XMM6_Dc) * unaff_XMM8_Dc + unaff_XMM7_Dc +
                   unaff_RBX[2];
    unaff_RBX[3] = (float)(int)(extraout_XMM0_Dd & unaff_XMM6_Dd) * unaff_XMM8_Dd + unaff_XMM7_Dd +
                   unaff_RBX[3];
    pfVar1 = unaff_RBX + lVar6 * 4;
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
    fVar5 = pfVar1[3];
    pfVar2 = unaff_RBX + lVar6 * 4;
    *pfVar2 = (float)(int)((int)extraout_XMM0_Da >> auVar7 & unaff_XMM6_Da) * unaff_XMM8_Da +
              unaff_XMM7_Da + *pfVar1;
    pfVar2[1] = (float)(int)((int)extraout_XMM0_Db >> auVar7 & unaff_XMM6_Db) * unaff_XMM8_Db +
                unaff_XMM7_Db + fVar3;
    pfVar2[2] = (float)(int)((int)extraout_XMM0_Dc >> auVar7 & unaff_XMM6_Dc) * unaff_XMM8_Dc +
                unaff_XMM7_Dc + fVar4;
    pfVar2[3] = (float)(int)((int)extraout_XMM0_Dd >> auVar7 & unaff_XMM6_Dd) * unaff_XMM8_Dd +
                unaff_XMM7_Dd + fVar5;
    auVar7 = ZEXT416(unaff_R15D * 2);
    pfVar1 = unaff_RBX + lVar6 * 8;
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
    fVar5 = pfVar1[3];
    pfVar2 = unaff_RBX + lVar6 * 8;
    *pfVar2 = (float)(int)((int)extraout_XMM0_Da >> auVar7 & unaff_XMM6_Da) * unaff_XMM8_Da +
              unaff_XMM7_Da + *pfVar1;
    pfVar2[1] = (float)(int)((int)extraout_XMM0_Db >> auVar7 & unaff_XMM6_Db) * unaff_XMM8_Db +
                unaff_XMM7_Db + fVar3;
    pfVar2[2] = (float)(int)((int)extraout_XMM0_Dc >> auVar7 & unaff_XMM6_Dc) * unaff_XMM8_Dc +
                unaff_XMM7_Dc + fVar4;
    pfVar2[3] = (float)(int)((int)extraout_XMM0_Dd >> auVar7 & unaff_XMM6_Dd) * unaff_XMM8_Dd +
                unaff_XMM7_Dd + fVar5;
    auVar7 = ZEXT416(unaff_R15D * 3);
    pfVar1 = unaff_RBX + lVar6 * 0xc;
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
    fVar5 = pfVar1[3];
    pfVar2 = unaff_RBX + lVar6 * 0xc;
    *pfVar2 = (float)(int)((int)extraout_XMM0_Da >> auVar7 & unaff_XMM6_Da) * unaff_XMM8_Da +
              unaff_XMM7_Da + *pfVar1;
    pfVar2[1] = (float)(int)((int)extraout_XMM0_Db >> auVar7 & unaff_XMM6_Db) * unaff_XMM8_Db +
                unaff_XMM7_Db + fVar3;
    pfVar2[2] = (float)(int)((int)extraout_XMM0_Dc >> auVar7 & unaff_XMM6_Dc) * unaff_XMM8_Dc +
                unaff_XMM7_Dc + fVar4;
    pfVar2[3] = (float)(int)((int)extraout_XMM0_Dd >> auVar7 & unaff_XMM6_Dd) * unaff_XMM8_Dd +
                unaff_XMM7_Dd + fVar5;
    unaff_RBX = unaff_RBX + 4;
    unaff_EBP = unaff_EBP + -1;
  } while (unaff_EBP != 0);
  return 0;
}



uint64_t FUN_180839966(void)

{
  return 0;
}



uint64_t FUN_18083996e(void)

{
  return 0;
}



uint64_t
FUN_1808399b0(int8_t (*param_1) [16],int64_t *param_2,int param_3,uint64_t param_4,
             uint64_t param_5,int param_6)

{
  int8_t auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  uint64_t extraout_XMM0_Qb;
  int8_t auVar14 [16];
  uint64_t extraout_XMM0_Qb_00;
  int8_t auVar15 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  int8_t auVar16 [16];
  int8_t auVar17 [16];
  int8_t auVar18 [16];
  int iVar20;
  int iVar21;
  int iVar22;
  int8_t auVar19 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int8_t auStack_a8 [16];
  int8_t auStack_98 [16];
  int8_t auStack_88 [16];
  int8_t aauStack_78 [5] [16];
  
  uVar13 = (uint)(char)param_1[6][6];
  auVar1 = *param_1;
  fVar2 = *(float *)param_1[1];
  fVar3 = *(float *)(param_1[1] + 4);
  fVar4 = *(float *)(param_1[1] + 8);
  fVar5 = *(float *)(param_1[1] + 0xc);
  fVar6 = *(float *)param_1[2];
  fVar7 = *(float *)(param_1[2] + 4);
  fVar8 = *(float *)(param_1[2] + 8);
  fVar9 = *(float *)(param_1[2] + 0xc);
  pfVar12 = (float *)(*param_2 + (int64_t)param_3 * 4);
  pfVar10 = (float *)(param_2[1] + (int64_t)param_3 * 4);
  iVar11 = param_6 >> 2;
  if ((byte)param_1[6][4] < 9) {
    param_6 = param_6 >> 3;
    switch(param_1[6][4]) {
    case 0:
    case 1:
      for (; iVar11 != 0; iVar11 = iVar11 + -1) {
        auVar14._0_8_ = FUN_180838f80(param_1,param_5);
        auVar14._8_8_ = extraout_XMM0_Qb;
        auVar14 = auVar14 & auVar1;
        auVar15._0_8_ = FUN_180838f80(param_1,param_5);
        auVar15._8_8_ = extraout_XMM0_Qb_00;
        auVar15 = auVar15 & auVar1;
        *pfVar12 = (float)auVar14._0_4_ * fVar6 + fVar2 + *pfVar12;
        pfVar12[1] = (float)auVar14._8_4_ * fVar8 + fVar4 + pfVar12[1];
        pfVar12[2] = (float)auVar15._0_4_ * fVar6 + fVar2 + pfVar12[2];
        pfVar12[3] = (float)auVar15._8_4_ * fVar8 + fVar4 + pfVar12[3];
        pfVar12 = pfVar12 + 4;
        *pfVar10 = (float)auVar14._4_4_ * fVar7 + fVar3 + *pfVar10;
        pfVar10[1] = (float)auVar14._12_4_ * fVar9 + fVar5 + pfVar10[1];
        pfVar10[2] = (float)auVar15._4_4_ * fVar7 + fVar3 + pfVar10[2];
        pfVar10[3] = (float)auVar15._12_4_ * fVar9 + fVar5 + pfVar10[3];
        pfVar10 = pfVar10 + 4;
      }
      break;
    case 2:
    case 3:
      for (; iVar11 != 0; iVar11 = iVar11 + -1) {
        auVar17._0_8_ = FUN_180838f80(param_1,param_5);
        auVar17._8_8_ = extraout_XMM0_Qb_01;
        auVar16 = ZEXT416(uVar13);
        auVar18 = auVar17 & auVar1;
        auVar23._0_4_ = (int)auVar17._0_8_ >> auVar16;
        auVar23._4_4_ = (int)((uint64_t)auVar17._0_8_ >> 0x20) >> auVar16;
        auVar23._8_4_ = (int)extraout_XMM0_Qb_01 >> auVar16;
        auVar23._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_01 >> 0x20) >> auVar16;
        auVar23 = auVar23 & auVar1;
        *pfVar12 = (float)auVar18._0_4_ * fVar6 + fVar2 + *pfVar12;
        pfVar12[1] = (float)auVar18._4_4_ * fVar7 + fVar3 + pfVar12[1];
        pfVar12[2] = (float)auVar18._8_4_ * fVar8 + fVar4 + pfVar12[2];
        pfVar12[3] = (float)auVar18._12_4_ * fVar9 + fVar5 + pfVar12[3];
        pfVar12 = pfVar12 + 4;
        *pfVar10 = (float)auVar23._0_4_ * fVar6 + fVar2 + *pfVar10;
        pfVar10[1] = (float)auVar23._4_4_ * fVar7 + fVar3 + pfVar10[1];
        pfVar10[2] = (float)auVar23._8_4_ * fVar8 + fVar4 + pfVar10[2];
        pfVar10[3] = (float)auVar23._12_4_ * fVar9 + fVar5 + pfVar10[3];
        pfVar10 = pfVar10 + 4;
      }
      break;
    default:
      if (param_6 != 0) {
        do {
          auVar16._0_8_ = FUN_180838f80(param_1,param_5);
          auVar16._8_8_ = extraout_XMM0_Qb_02;
          auVar17 = auVar16 & auVar1;
          auVar18 = ZEXT416(uVar13);
          iVar11 = (int)auVar16._0_8_;
          auVar19._0_4_ = iVar11 >> auVar18;
          iVar20 = (int)((uint64_t)auVar16._0_8_ >> 0x20);
          auVar19._4_4_ = iVar20 >> auVar18;
          iVar21 = (int)extraout_XMM0_Qb_02;
          iVar22 = (int)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
          auVar19._8_4_ = iVar21 >> auVar18;
          auVar19._12_4_ = iVar22 >> auVar18;
          auVar19 = auVar19 & auVar1;
          auVar16 = ZEXT416(uVar13 * 2);
          auVar18._0_4_ = iVar11 >> auVar16;
          auVar18._4_4_ = iVar20 >> auVar16;
          auVar18._8_4_ = iVar21 >> auVar16;
          auVar18._12_4_ = iVar22 >> auVar16;
          auVar18 = auVar18 & auVar1;
          auVar16 = ZEXT416(uVar13 * 3);
          auVar24._0_4_ = iVar11 >> auVar16;
          auVar24._4_4_ = iVar20 >> auVar16;
          auVar24._8_4_ = iVar21 >> auVar16;
          auVar24._12_4_ = iVar22 >> auVar16;
          auVar24 = auVar24 & auVar1;
          *pfVar12 = (float)auVar17._0_4_ * fVar6 + fVar2 + *pfVar12;
          pfVar12[1] = (float)auVar18._0_4_ * fVar6 + fVar2 + pfVar12[1];
          pfVar12[2] = (float)auVar17._4_4_ * fVar7 + fVar3 + pfVar12[2];
          pfVar12[3] = (float)auVar18._4_4_ * fVar7 + fVar3 + pfVar12[3];
          *pfVar10 = (float)auVar19._0_4_ * fVar6 + fVar2 + *pfVar10;
          pfVar10[1] = (float)auVar24._0_4_ * fVar6 + fVar2 + pfVar10[1];
          pfVar10[2] = (float)auVar19._4_4_ * fVar7 + fVar3 + pfVar10[2];
          pfVar10[3] = (float)auVar24._4_4_ * fVar7 + fVar3 + pfVar10[3];
          pfVar12[4] = (float)auVar17._8_4_ * fVar8 + fVar4 + pfVar12[4];
          pfVar12[5] = (float)auVar18._8_4_ * fVar8 + fVar4 + pfVar12[5];
          pfVar12[6] = (float)auVar17._12_4_ * fVar9 + fVar5 + pfVar12[6];
          pfVar12[7] = (float)auVar18._12_4_ * fVar9 + fVar5 + pfVar12[7];
          pfVar12 = pfVar12 + 8;
          pfVar10[4] = (float)auVar19._8_4_ * fVar8 + fVar4 + pfVar10[4];
          pfVar10[5] = (float)auVar24._8_4_ * fVar8 + fVar4 + pfVar10[5];
          pfVar10[6] = (float)auVar19._12_4_ * fVar9 + fVar5 + pfVar10[6];
          pfVar10[7] = (float)auVar24._12_4_ * fVar9 + fVar5 + pfVar10[7];
          pfVar10 = pfVar10 + 8;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
      }
      break;
    case 8:
      for (; param_6 != 0; param_6 = param_6 + -1) {
        FUN_180838e50(param_1,param_5,auStack_a8,auStack_98);
        FUN_180838e50(param_1,param_5,auStack_88,aauStack_78);
        auStack_a8 = auStack_a8 & auVar1;
        auStack_88 = auStack_88 & auVar1;
        auStack_98 = auStack_98 & auVar1;
        aauStack_78[0] = aauStack_78[0] & auVar1;
        *pfVar12 = (float)auStack_a8._0_4_ * fVar6 + fVar2 + *pfVar12;
        pfVar12[1] = (float)auStack_a8._8_4_ * fVar8 + fVar4 + pfVar12[1];
        pfVar12[2] = (float)auStack_98._0_4_ * fVar6 + fVar2 + pfVar12[2];
        pfVar12[3] = (float)auStack_98._8_4_ * fVar8 + fVar4 + pfVar12[3];
        pfVar12[4] = (float)auStack_88._0_4_ * fVar6 + fVar2 + pfVar12[4];
        pfVar12[5] = (float)auStack_88._8_4_ * fVar8 + fVar4 + pfVar12[5];
        pfVar12[6] = (float)aauStack_78[0]._0_4_ * fVar6 + fVar2 + pfVar12[6];
        pfVar12[7] = (float)aauStack_78[0]._8_4_ * fVar8 + fVar4 + pfVar12[7];
        pfVar12 = pfVar12 + 8;
        *pfVar10 = (float)auStack_a8._4_4_ * fVar7 + fVar3 + *pfVar10;
        pfVar10[1] = (float)auStack_a8._12_4_ * fVar9 + fVar5 + pfVar10[1];
        pfVar10[2] = (float)auStack_98._4_4_ * fVar7 + fVar3 + pfVar10[2];
        pfVar10[3] = (float)auStack_98._12_4_ * fVar9 + fVar5 + pfVar10[3];
        pfVar10[4] = (float)auStack_88._4_4_ * fVar7 + fVar3 + pfVar10[4];
        pfVar10[5] = (float)auStack_88._12_4_ * fVar9 + fVar5 + pfVar10[5];
        pfVar10[6] = (float)aauStack_78[0]._4_4_ * fVar7 + fVar3 + pfVar10[6];
        pfVar10[7] = (float)aauStack_78[0]._12_4_ * fVar9 + fVar5 + pfVar10[7];
        pfVar10 = pfVar10 + 8;
      }
    }
  }
  return 0;
}





