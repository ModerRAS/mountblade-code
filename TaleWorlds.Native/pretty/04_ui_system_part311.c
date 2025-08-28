#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part311.c - 4 个函数

// 函数: void FUN_180839a23(void)
void FUN_180839a23(void)

{
  longlong in_RAX;
  longlong in_R11;
  uint64_t unaff_R15;
  uint64_t unaff_XMM6_Qa;
  uint64_t unaff_XMM6_Qb;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_R15;
  *(uint64_t *)(in_R11 + -0x38) = unaff_XMM6_Qa;
  *(uint64_t *)(in_R11 + -0x30) = unaff_XMM6_Qb;
                    // WARNING: Could not recover jumptable at 0x000180839a3d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)((ulonglong)*(uint *)(&unknown_var_6400_ptr + in_RAX * 4) + 0x180000000))
            ((code *)((ulonglong)*(uint *)(&unknown_var_6400_ptr + in_RAX * 4) + 0x180000000));
  return;
}



uint64_t FUN_180839b20(void)

{
  float *unaff_RBX;
  int unaff_ESI;
  float *unaff_RDI;
  uint unaff_R14D;
  uint extraout_XMM0_Da;
  uint extraout_XMM0_Db;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  int8_t auVar1 [16];
  int8_t auVar2 [16];
  int8_t auVar3 [16];
  uint unaff_XMM7_Da;
  uint unaff_XMM7_Db;
  uint unaff_XMM7_Dc;
  uint unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  float unaff_XMM8_Db;
  float unaff_XMM8_Dc;
  float unaff_XMM8_Dd;
  float unaff_XMM9_Da;
  float unaff_XMM9_Db;
  float unaff_XMM9_Dc;
  float unaff_XMM9_Dd;
  
  do {
    FUN_180838f80();
    auVar3 = ZEXT416(unaff_R14D);
    auVar1 = ZEXT416(unaff_R14D * 2);
    auVar2 = ZEXT416(unaff_R14D * 3);
    *unaff_RDI = (float)(int)(extraout_XMM0_Da & unaff_XMM7_Da) * unaff_XMM9_Da + unaff_XMM8_Da +
                 *unaff_RDI;
    unaff_RDI[1] = (float)(int)((int)extraout_XMM0_Da >> auVar1 & unaff_XMM7_Da) * unaff_XMM9_Da +
                   unaff_XMM8_Da + unaff_RDI[1];
    unaff_RDI[2] = (float)(int)(extraout_XMM0_Db & unaff_XMM7_Db) * unaff_XMM9_Db + unaff_XMM8_Db +
                   unaff_RDI[2];
    unaff_RDI[3] = (float)(int)((int)extraout_XMM0_Db >> auVar1 & unaff_XMM7_Db) * unaff_XMM9_Db +
                   unaff_XMM8_Db + unaff_RDI[3];
    *unaff_RBX = (float)(int)((int)extraout_XMM0_Da >> auVar3 & unaff_XMM7_Da) * unaff_XMM9_Da +
                 unaff_XMM8_Da + *unaff_RBX;
    unaff_RBX[1] = (float)(int)((int)extraout_XMM0_Da >> auVar2 & unaff_XMM7_Da) * unaff_XMM9_Da +
                   unaff_XMM8_Da + unaff_RBX[1];
    unaff_RBX[2] = (float)(int)((int)extraout_XMM0_Db >> auVar3 & unaff_XMM7_Db) * unaff_XMM9_Db +
                   unaff_XMM8_Db + unaff_RBX[2];
    unaff_RBX[3] = (float)(int)((int)extraout_XMM0_Db >> auVar2 & unaff_XMM7_Db) * unaff_XMM9_Db +
                   unaff_XMM8_Db + unaff_RBX[3];
    unaff_RDI[4] = (float)(int)(extraout_XMM0_Dc & unaff_XMM7_Dc) * unaff_XMM9_Dc + unaff_XMM8_Dc +
                   unaff_RDI[4];
    unaff_RDI[5] = (float)(int)((int)extraout_XMM0_Dc >> auVar1 & unaff_XMM7_Dc) * unaff_XMM9_Dc +
                   unaff_XMM8_Dc + unaff_RDI[5];
    unaff_RDI[6] = (float)(int)(extraout_XMM0_Dd & unaff_XMM7_Dd) * unaff_XMM9_Dd + unaff_XMM8_Dd +
                   unaff_RDI[6];
    unaff_RDI[7] = (float)(int)((int)extraout_XMM0_Dd >> auVar1 & unaff_XMM7_Dd) * unaff_XMM9_Dd +
                   unaff_XMM8_Dd + unaff_RDI[7];
    unaff_RDI = unaff_RDI + 8;
    unaff_RBX[4] = (float)(int)((int)extraout_XMM0_Dc >> auVar3 & unaff_XMM7_Dc) * unaff_XMM9_Dc +
                   unaff_XMM8_Dc + unaff_RBX[4];
    unaff_RBX[5] = (float)(int)((int)extraout_XMM0_Dc >> auVar2 & unaff_XMM7_Dc) * unaff_XMM9_Dc +
                   unaff_XMM8_Dc + unaff_RBX[5];
    unaff_RBX[6] = (float)(int)((int)extraout_XMM0_Dd >> auVar3 & unaff_XMM7_Dd) * unaff_XMM9_Dd +
                   unaff_XMM8_Dd + unaff_RBX[6];
    unaff_RBX[7] = (float)(int)((int)extraout_XMM0_Dd >> auVar2 & unaff_XMM7_Dd) * unaff_XMM9_Dd +
                   unaff_XMM8_Dd + unaff_RBX[7];
    unaff_RBX = unaff_RBX + 8;
    unaff_ESI = unaff_ESI + -1;
  } while (unaff_ESI != 0);
  return 0;
}



uint64_t FUN_180839c06(void)

{
  uint64_t uVar1;
  float *unaff_RBX;
  int unaff_ESI;
  int iVar2;
  float *unaff_RDI;
  uint64_t uVar3;
  uint unaff_XMM7_Da;
  uint unaff_XMM7_Db;
  uint unaff_XMM7_Dc;
  uint unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  float unaff_XMM8_Db;
  float unaff_XMM8_Dc;
  float unaff_XMM8_Dd;
  float unaff_XMM9_Da;
  float unaff_XMM9_Db;
  float unaff_XMM9_Dc;
  float unaff_XMM9_Dd;
  uint uStackX_20;
  uint uStackX_24;
  uint uStack0000000000000028;
  uint uStack000000000000002c;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  uint uStack0000000000000038;
  uint uStack000000000000003c;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  uint uStack0000000000000050;
  uint uStack0000000000000054;
  uint uStack0000000000000058;
  uint uStack000000000000005c;
  uint64_t in_stack_000000f0;
  
  uVar1 = in_stack_000000f0;
  for (iVar2 = unaff_ESI >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    uVar3 = FUN_180838e50();
    FUN_180838e50(uVar3,uVar1,&stack0x00000040,&stack0x00000050);
    uStackX_20 = uStackX_20 & unaff_XMM7_Da;
    uStackX_24 = uStackX_24 & unaff_XMM7_Db;
    uStack0000000000000028 = uStack0000000000000028 & unaff_XMM7_Dc;
    uStack000000000000002c = uStack000000000000002c & unaff_XMM7_Dd;
    uStack0000000000000040 = uStack0000000000000040 & unaff_XMM7_Da;
    uStack0000000000000044 = uStack0000000000000044 & unaff_XMM7_Db;
    uStack0000000000000048 = uStack0000000000000048 & unaff_XMM7_Dc;
    uStack000000000000004c = uStack000000000000004c & unaff_XMM7_Dd;
    uStack0000000000000030 = uStack0000000000000030 & unaff_XMM7_Da;
    uStack0000000000000034 = uStack0000000000000034 & unaff_XMM7_Db;
    uStack0000000000000038 = uStack0000000000000038 & unaff_XMM7_Dc;
    uStack000000000000003c = uStack000000000000003c & unaff_XMM7_Dd;
    uStack0000000000000050 = uStack0000000000000050 & unaff_XMM7_Da;
    uStack0000000000000054 = uStack0000000000000054 & unaff_XMM7_Db;
    uStack0000000000000058 = uStack0000000000000058 & unaff_XMM7_Dc;
    uStack000000000000005c = uStack000000000000005c & unaff_XMM7_Dd;
    *unaff_RDI = (float)(int)uStackX_20 * unaff_XMM9_Da + unaff_XMM8_Da + *unaff_RDI;
    unaff_RDI[1] = (float)(int)uStack0000000000000028 * unaff_XMM9_Dc + unaff_XMM8_Dc + unaff_RDI[1]
    ;
    unaff_RDI[2] = (float)(int)uStack0000000000000030 * unaff_XMM9_Da + unaff_XMM8_Da + unaff_RDI[2]
    ;
    unaff_RDI[3] = (float)(int)uStack0000000000000038 * unaff_XMM9_Dc + unaff_XMM8_Dc + unaff_RDI[3]
    ;
    unaff_RDI[4] = (float)(int)uStack0000000000000040 * unaff_XMM9_Da + unaff_XMM8_Da + unaff_RDI[4]
    ;
    unaff_RDI[5] = (float)(int)uStack0000000000000048 * unaff_XMM9_Dc + unaff_XMM8_Dc + unaff_RDI[5]
    ;
    unaff_RDI[6] = (float)(int)uStack0000000000000050 * unaff_XMM9_Da + unaff_XMM8_Da + unaff_RDI[6]
    ;
    unaff_RDI[7] = (float)(int)uStack0000000000000058 * unaff_XMM9_Dc + unaff_XMM8_Dc + unaff_RDI[7]
    ;
    unaff_RDI = unaff_RDI + 8;
    *unaff_RBX = (float)(int)uStackX_24 * unaff_XMM9_Db + unaff_XMM8_Db + *unaff_RBX;
    unaff_RBX[1] = (float)(int)uStack000000000000002c * unaff_XMM9_Dd + unaff_XMM8_Dd + unaff_RBX[1]
    ;
    unaff_RBX[2] = (float)(int)uStack0000000000000034 * unaff_XMM9_Db + unaff_XMM8_Db + unaff_RBX[2]
    ;
    unaff_RBX[3] = (float)(int)uStack000000000000003c * unaff_XMM9_Dd + unaff_XMM8_Dd + unaff_RBX[3]
    ;
    unaff_RBX[4] = (float)(int)uStack0000000000000044 * unaff_XMM9_Db + unaff_XMM8_Db + unaff_RBX[4]
    ;
    unaff_RBX[5] = (float)(int)uStack000000000000004c * unaff_XMM9_Dd + unaff_XMM8_Dd + unaff_RBX[5]
    ;
    unaff_RBX[6] = (float)(int)uStack0000000000000054 * unaff_XMM9_Db + unaff_XMM8_Db + unaff_RBX[6]
    ;
    unaff_RBX[7] = (float)(int)uStack000000000000005c * unaff_XMM9_Dd + unaff_XMM8_Dd + unaff_RBX[7]
    ;
    unaff_RBX = unaff_RBX + 8;
  }
  return 0;
}



uint64_t FUN_180839d09(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180839dc0(longlong *param_1,longlong param_2,int *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  
  uVar9 = *(int *)(*(longlong *)(*param_1 + 0x20) + (longlong)(int)param_1[5] * 4) / 2;
  uVar20 = (ulonglong)(int)uVar9;
  if (param_3 != (int *)0x0) {
    uVar10 = 0;
    iVar16 = 1;
    iVar17 = *(int *)(param_2 + 0x38) * *param_3;
    uVar22 = uVar10;
    uVar21 = uVar9;
    if (1 < *(int *)(param_2 + 0x34)) {
      lVar23 = 1;
      do {
        lVar13 = (longlong)*(char *)(lVar23 + *(longlong *)(param_2 + 0x18));
        if ((param_3[lVar13] & 0x7fffU) == param_3[lVar13]) {
          iVar15 = (param_3[lVar13] & 0x7fffU) * *(int *)(param_2 + 0x38);
          uVar22 = (uint)*(ushort *)(*(longlong *)(param_2 + 0x10) + lVar13 * 2);
          iVar18 = iVar15 - iVar17;
          iVar5 = (iVar18 * 0x100000) / (int)(uVar22 - uVar10);
          uVar21 = uVar22;
          if ((int)(uint)uVar20 <= (int)uVar22) {
            uVar21 = (uint)uVar20;
          }
          iVar12 = iVar5 * 4;
          pfVar11 = (float *)(param_4 + (longlong)(int)uVar10 * 4);
          iVar17 = iVar17 * 0x100000 + 0x400 + (iVar18 >> 0x1f & 0xff800U);
          iVar6 = iVar5 * 3 + iVar17;
          iVar7 = iVar5 * 2 + iVar17;
          iVar8 = iVar5 + iVar17;
          for (iVar18 = (int)(uVar21 - uVar10) >> 2; iVar18 != 0; iVar18 = iVar18 + -1) {
            _DAT_180c4ea70 = iVar6 >> 0x14;
            iRam0000000180c4ea74 = iVar7 >> 0x14;
            iRam0000000180c4ea78 = iVar8 >> 0x14;
            iRam0000000180c4ea7c = iVar17 >> 0x14;
            fVar2 = *(float *)(&unknown_var_5936_ptr + (longlong)iRam0000000180c4ea74 * 4);
            fVar3 = *(float *)(&unknown_var_5936_ptr + (longlong)_DAT_180c4ea70 * 4);
            fVar4 = *(float *)(&unknown_var_5936_ptr + (longlong)iRam0000000180c4ea78 * 4);
            *pfVar11 = *(float *)(&unknown_var_5936_ptr + (longlong)iRam0000000180c4ea7c * 4) * *pfVar11;
            pfVar11[1] = fVar4 * pfVar11[1];
            pfVar11[2] = fVar2 * pfVar11[2];
            pfVar11[3] = fVar3 * pfVar11[3];
            pfVar11 = pfVar11 + 4;
            iVar17 = iVar17 + iVar12;
            iVar6 = iVar6 + iVar12;
            iVar7 = iVar7 + iVar12;
            iVar8 = iVar8 + iVar12;
          }
          for (uVar10 = uVar21 - uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            lVar13 = (longlong)iVar17;
            iVar17 = iVar17 + iVar5;
            *pfVar11 = *(float *)(&unknown_var_5936_ptr + (lVar13 >> 0x14) * 4) * *pfVar11;
            pfVar11 = pfVar11 + 1;
          }
          uVar20 = (ulonglong)uVar9;
          iVar17 = iVar15;
          uVar10 = uVar22;
        }
        uVar21 = (uint)uVar20;
        iVar16 = iVar16 + 1;
        lVar23 = lVar23 + 1;
      } while (iVar16 < *(int *)(param_2 + 0x34));
    }
    lVar23 = (longlong)(int)uVar22;
    lVar13 = (longlong)(int)uVar21;
    if (lVar23 < lVar13) {
      if (3 < lVar13 - lVar23) {
        lVar19 = (longlong)iVar17;
        lVar1 = lVar23 * 4;
        lVar14 = ((lVar13 - lVar23) - 4U >> 2) + 1;
        lVar23 = lVar23 + lVar14 * 4;
        pfVar11 = (float *)(param_4 + 8 + lVar1);
        do {
          pfVar11[-2] = pfVar11[-2] * *(float *)(&unknown_var_5936_ptr + lVar19 * 4);
          pfVar11[-1] = pfVar11[-1] * *(float *)(&unknown_var_5936_ptr + lVar19 * 4);
          *pfVar11 = *pfVar11 * *(float *)(&unknown_var_5936_ptr + lVar19 * 4);
          pfVar11[1] = pfVar11[1] * *(float *)(&unknown_var_5936_ptr + lVar19 * 4);
          lVar14 = lVar14 + -1;
          pfVar11 = pfVar11 + 4;
        } while (lVar14 != 0);
      }
      if (lVar23 < lVar13) {
        do {
          *(float *)(param_4 + lVar23 * 4) =
               *(float *)(param_4 + lVar23 * 4) * *(float *)(&unknown_var_5936_ptr + (longlong)iVar17 * 4);
          lVar23 = lVar23 + 1;
        } while (lVar23 < lVar13);
      }
    }
    return 1;
  }
                    // WARNING: Subroutine does not return
  memset(param_4,0,uVar20 * 4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180839dfd(uint64_t param_1,uint64_t param_2,int *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  uint in_R10D;
  uint uVar20;
  uint uVar21;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong lVar22;
  uint in_stack_00000070;
  longlong in_stack_00000078;
  int *in_stack_00000080;
  
  iVar15 = 1;
  iVar16 = *(int *)(unaff_R13 + 0x38) * *param_3;
  uVar19 = 0;
  uVar21 = 0;
  if (1 < *(int *)(unaff_R13 + 0x34)) {
    lVar22 = 1;
    do {
      lVar12 = (longlong)*(char *)(lVar22 + *(longlong *)(unaff_R13 + 0x18));
      if ((param_3[lVar12] & 0x7fffU) == param_3[lVar12]) {
        iVar14 = (param_3[lVar12] & 0x7fffU) * *(int *)(unaff_R13 + 0x38);
        uVar5 = *(ushort *)(*(longlong *)(unaff_R13 + 0x10) + lVar12 * 2);
        uVar21 = (uint)uVar5;
        iVar17 = iVar14 - iVar16;
        iVar6 = (iVar17 * 0x100000) / (int)(uVar21 - uVar19);
        uVar20 = (uint)uVar5;
        if ((int)in_R10D <= (int)uVar21) {
          uVar20 = in_R10D;
        }
        iVar11 = iVar6 * 4;
        pfVar10 = (float *)(unaff_R14 + (longlong)(int)uVar19 * 4);
        iVar17 = iVar16 * 0x100000 + 0x400 + (iVar17 >> 0x1f & 0xff800U);
        iVar7 = iVar6 * 3 + iVar17;
        iVar8 = iVar6 * 2 + iVar17;
        iVar9 = iVar6 + iVar17;
        for (iVar16 = (int)(uVar20 - uVar19) >> 2; iVar16 != 0; iVar16 = iVar16 + -1) {
          _DAT_180c4ea70 = iVar7 >> 0x14;
          iRam0000000180c4ea74 = iVar8 >> 0x14;
          iRam0000000180c4ea78 = iVar9 >> 0x14;
          iRam0000000180c4ea7c = iVar17 >> 0x14;
          fVar2 = *(float *)(&unknown_var_5936_ptr + (longlong)iRam0000000180c4ea74 * 4);
          fVar3 = *(float *)(&unknown_var_5936_ptr + (longlong)_DAT_180c4ea70 * 4);
          fVar4 = *(float *)(&unknown_var_5936_ptr + (longlong)iRam0000000180c4ea78 * 4);
          *pfVar10 = *(float *)(&unknown_var_5936_ptr + (longlong)iRam0000000180c4ea7c * 4) * *pfVar10;
          pfVar10[1] = fVar4 * pfVar10[1];
          pfVar10[2] = fVar2 * pfVar10[2];
          pfVar10[3] = fVar3 * pfVar10[3];
          pfVar10 = pfVar10 + 4;
          iVar17 = iVar17 + iVar11;
          iVar7 = iVar7 + iVar11;
          iVar8 = iVar8 + iVar11;
          iVar9 = iVar9 + iVar11;
          unaff_R13 = in_stack_00000078;
        }
        for (uVar20 = uVar20 - uVar19 & 3; param_3 = in_stack_00000080, iVar16 = iVar14,
            uVar19 = uVar21, in_R10D = in_stack_00000070, uVar20 != 0; uVar20 = uVar20 - 1) {
          lVar12 = (longlong)iVar17;
          iVar17 = iVar17 + iVar6;
          *pfVar10 = *(float *)(&unknown_var_5936_ptr + (lVar12 >> 0x14) * 4) * *pfVar10;
          pfVar10 = pfVar10 + 1;
        }
      }
      iVar15 = iVar15 + 1;
      lVar22 = lVar22 + 1;
    } while (iVar15 < *(int *)(unaff_R13 + 0x34));
  }
  lVar22 = (longlong)(int)uVar21;
  lVar12 = (longlong)(int)in_R10D;
  if (lVar22 < lVar12) {
    if (3 < lVar12 - lVar22) {
      lVar18 = (longlong)iVar16;
      lVar1 = lVar22 * 4;
      lVar13 = ((lVar12 - lVar22) - 4U >> 2) + 1;
      lVar22 = lVar22 + lVar13 * 4;
      pfVar10 = (float *)(unaff_R14 + 8 + lVar1);
      do {
        pfVar10[-2] = pfVar10[-2] * *(float *)(&unknown_var_5936_ptr + lVar18 * 4);
        pfVar10[-1] = pfVar10[-1] * *(float *)(&unknown_var_5936_ptr + lVar18 * 4);
        *pfVar10 = *pfVar10 * *(float *)(&unknown_var_5936_ptr + lVar18 * 4);
        pfVar10[1] = pfVar10[1] * *(float *)(&unknown_var_5936_ptr + lVar18 * 4);
        lVar13 = lVar13 + -1;
        pfVar10 = pfVar10 + 4;
      } while (lVar13 != 0);
    }
    if (lVar22 < lVar12) {
      do {
        *(float *)(unaff_R14 + lVar22 * 4) =
             *(float *)(unaff_R14 + lVar22 * 4) * *(float *)(&unknown_var_5936_ptr + (longlong)iVar16 * 4);
        lVar22 = lVar22 + 1;
      } while (lVar22 < lVar12);
    }
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180839e32(uint64_t param_1,uint64_t param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  uint unaff_EBP;
  int unaff_ESI;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  uint in_R10D;
  uint unaff_R12D;
  longlong unaff_R13;
  longlong unaff_R14;
  ulonglong uVar20;
  uint in_stack_00000070;
  longlong in_stack_00000078;
  longlong in_stack_00000080;
  
  uVar20 = (ulonglong)unaff_EBP;
  do {
    lVar12 = (longlong)*(char *)(uVar20 + *(longlong *)(unaff_R13 + 0x18));
    uVar14 = *(uint *)(param_3 + lVar12 * 4) & 0x7fff;
    if (uVar14 == *(uint *)(param_3 + lVar12 * 4)) {
      iVar15 = uVar14 * *(int *)(unaff_R13 + 0x38);
      uVar5 = *(ushort *)(*(longlong *)(unaff_R13 + 0x10) + lVar12 * 2);
      unaff_R12D = (uint)uVar5;
      iVar17 = iVar15 - unaff_ESI;
      iVar6 = (iVar17 * 0x100000) / (int)(unaff_R12D - param_4);
      uVar14 = (uint)uVar5;
      if ((int)in_R10D <= (int)unaff_R12D) {
        uVar14 = in_R10D;
      }
      iVar11 = iVar6 * 4;
      pfVar10 = (float *)(unaff_R14 + (longlong)(int)param_4 * 4);
      iVar17 = unaff_ESI * 0x100000 + 0x400 + (iVar17 >> 0x1f & 0xff800U);
      iVar7 = iVar6 * 3 + iVar17;
      iVar8 = iVar6 * 2 + iVar17;
      iVar9 = iVar6 + iVar17;
      for (iVar16 = (int)(uVar14 - param_4) >> 2; iVar16 != 0; iVar16 = iVar16 + -1) {
        _DAT_180c4ea70 = iVar7 >> 0x14;
        iRam0000000180c4ea74 = iVar8 >> 0x14;
        iRam0000000180c4ea78 = iVar9 >> 0x14;
        iRam0000000180c4ea7c = iVar17 >> 0x14;
        fVar2 = *(float *)(&unknown_var_5936_ptr + (longlong)iRam0000000180c4ea74 * 4);
        fVar3 = *(float *)(&unknown_var_5936_ptr + (longlong)_DAT_180c4ea70 * 4);
        fVar4 = *(float *)(&unknown_var_5936_ptr + (longlong)iRam0000000180c4ea78 * 4);
        *pfVar10 = *(float *)(&unknown_var_5936_ptr + (longlong)iRam0000000180c4ea7c * 4) * *pfVar10;
        pfVar10[1] = fVar4 * pfVar10[1];
        pfVar10[2] = fVar2 * pfVar10[2];
        pfVar10[3] = fVar3 * pfVar10[3];
        pfVar10 = pfVar10 + 4;
        iVar17 = iVar17 + iVar11;
        iVar7 = iVar7 + iVar11;
        iVar8 = iVar8 + iVar11;
        iVar9 = iVar9 + iVar11;
        unaff_R13 = in_stack_00000078;
      }
      for (uVar14 = uVar14 - param_4 & 3; param_3 = in_stack_00000080, unaff_ESI = iVar15,
          param_4 = unaff_R12D, in_R10D = in_stack_00000070, uVar14 != 0; uVar14 = uVar14 - 1) {
        lVar12 = (longlong)iVar17;
        iVar17 = iVar17 + iVar6;
        *pfVar10 = *(float *)(&unknown_var_5936_ptr + (lVar12 >> 0x14) * 4) * *pfVar10;
        pfVar10 = pfVar10 + 1;
      }
    }
    unaff_EBP = unaff_EBP + 1;
    uVar20 = uVar20 + 1;
  } while ((int)unaff_EBP < *(int *)(unaff_R13 + 0x34));
  lVar12 = (longlong)(int)unaff_R12D;
  lVar19 = (longlong)(int)in_R10D;
  if (lVar12 < lVar19) {
    if (3 < lVar19 - lVar12) {
      lVar18 = (longlong)unaff_ESI;
      lVar1 = lVar12 * 4;
      lVar13 = ((lVar19 - lVar12) - 4U >> 2) + 1;
      lVar12 = lVar12 + lVar13 * 4;
      pfVar10 = (float *)(unaff_R14 + 8 + lVar1);
      do {
        pfVar10[-2] = pfVar10[-2] * *(float *)(&unknown_var_5936_ptr + lVar18 * 4);
        pfVar10[-1] = pfVar10[-1] * *(float *)(&unknown_var_5936_ptr + lVar18 * 4);
        *pfVar10 = *pfVar10 * *(float *)(&unknown_var_5936_ptr + lVar18 * 4);
        pfVar10[1] = pfVar10[1] * *(float *)(&unknown_var_5936_ptr + lVar18 * 4);
        lVar13 = lVar13 + -1;
        pfVar10 = pfVar10 + 4;
      } while (lVar13 != 0);
    }
    if (lVar12 < lVar19) {
      do {
        *(float *)(unaff_R14 + lVar12 * 4) =
             *(float *)(unaff_R14 + lVar12 * 4) *
             *(float *)(&unknown_var_5936_ptr + (longlong)unaff_ESI * 4);
        lVar12 = lVar12 + 1;
      } while (lVar12 < lVar19);
    }
  }
  return 1;
}



uint64_t FUN_18083a016(void)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  int unaff_ESI;
  longlong lVar5;
  longlong lVar6;
  int in_R10D;
  longlong in_R11;
  int unaff_R12D;
  longlong unaff_R14;
  
  lVar3 = (longlong)unaff_R12D;
  lVar6 = (longlong)in_R10D;
  if (lVar3 < lVar6) {
    if (3 < lVar6 - lVar3) {
      lVar5 = (longlong)unaff_ESI;
      lVar1 = lVar3 * 4;
      lVar4 = ((lVar6 - lVar3) - 4U >> 2) + 1;
      lVar3 = lVar3 + lVar4 * 4;
      pfVar2 = (float *)(unaff_R14 + 8 + lVar1);
      do {
        pfVar2[-2] = pfVar2[-2] * *(float *)(in_R11 + lVar5 * 4);
        pfVar2[-1] = pfVar2[-1] * *(float *)(in_R11 + lVar5 * 4);
        *pfVar2 = *pfVar2 * *(float *)(in_R11 + lVar5 * 4);
        pfVar2[1] = pfVar2[1] * *(float *)(in_R11 + lVar5 * 4);
        lVar4 = lVar4 + -1;
        pfVar2 = pfVar2 + 4;
      } while (lVar4 != 0);
    }
    if (lVar3 < lVar6) {
      do {
        *(float *)(unaff_R14 + lVar3 * 4) =
             *(float *)(unaff_R14 + lVar3 * 4) * *(float *)(in_R11 + (longlong)unaff_ESI * 4);
        lVar3 = lVar3 + 1;
      } while (lVar3 < lVar6);
    }
  }
  return 1;
}



uint64_t FUN_18083a02f(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  int unaff_ESI;
  longlong lVar4;
  longlong in_R11;
  longlong unaff_R14;
  
  if (3 < param_4 - param_1) {
    lVar4 = (longlong)unaff_ESI;
    lVar1 = param_1 * 4;
    lVar3 = ((param_4 - param_1) - 4U >> 2) + 1;
    param_1 = param_1 + lVar3 * 4;
    pfVar2 = (float *)(unaff_R14 + 8 + lVar1);
    do {
      pfVar2[-2] = pfVar2[-2] * *(float *)(in_R11 + lVar4 * 4);
      pfVar2[-1] = pfVar2[-1] * *(float *)(in_R11 + lVar4 * 4);
      *pfVar2 = *pfVar2 * *(float *)(in_R11 + lVar4 * 4);
      pfVar2[1] = pfVar2[1] * *(float *)(in_R11 + lVar4 * 4);
      lVar3 = lVar3 + -1;
      pfVar2 = pfVar2 + 4;
    } while (lVar3 != 0);
  }
  if (param_1 < param_4) {
    do {
      *(float *)(unaff_R14 + param_1 * 4) =
           *(float *)(unaff_R14 + param_1 * 4) * *(float *)(in_R11 + (longlong)unaff_ESI * 4);
      param_1 = param_1 + 1;
    } while (param_1 < param_4);
  }
  return 1;
}





// 函数: void FUN_18083a0df(void)
void FUN_18083a0df(void)

{
                    // WARNING: Subroutine does not return
  memset();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18083a100(int param_1,uint64_t param_2)
void FUN_18083a100(int param_1,uint64_t param_2)

{
  int8_t auStack_98 [4];
  int32_t uStack_94;
  ulonglong uStack_88;
  uint64_t uStack_78;
  uint64_t uStack_68;
  ulonglong uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  uStack_88 = 0x100;
  if (param_1 != 0) {
    uStack_88 = 0x800;
  }
  uStack_94 = (int32_t)uStack_88;
  uStack_78 = 0x180beee40;
  if (param_1 != 0) {
    uStack_78 = 0x180beef40;
  }
  uStack_88 = uStack_88 >> 1;
  uStack_68 = param_2;
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_18083a420(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5)
void FUN_18083a420(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  piVar11 = (int *)(param_2 + 4);
  pfVar7 = (float *)(param_1 + (longlong)param_3 * 4);
  lVar10 = (param_5 - param_2) + -4;
  pfVar8 = (float *)(param_5 + ((longlong)param_3 >> 1) * 4);
  do {
    pfVar9 = pfVar8 + -4;
    pfVar1 = (float *)(param_4 + (longlong)piVar11[-1] * 4);
    fVar16 = *pfVar1;
    fVar17 = pfVar1[1];
    pfVar1 = (float *)(param_4 + (longlong)piVar11[1] * 4);
    fVar18 = *pfVar1;
    fVar19 = pfVar1[1];
    pfVar1 = (float *)(param_4 + (longlong)*piVar11 * 4);
    pfVar2 = (float *)(param_4 + (longlong)piVar11[2] * 4);
    fVar3 = *pfVar7;
    pfVar4 = pfVar7 + 1;
    pfVar5 = pfVar7 + 2;
    pfVar6 = pfVar7 + 3;
    pfVar7 = pfVar7 + 4;
    fVar20 = *pfVar1 * 1.0;
    fVar21 = pfVar1[1] * -1.0;
    fVar22 = *pfVar2 * 1.0;
    fVar23 = pfVar2[1] * -1.0;
    fVar12 = fVar20 + fVar16;
    fVar13 = fVar21 + fVar17;
    fVar14 = fVar22 + fVar18;
    fVar15 = fVar23 + fVar19;
    fVar20 = (fVar16 - fVar20) * 0.5;
    fVar21 = (fVar17 - fVar21) * 0.5;
    fVar22 = (fVar18 - fVar22) * 0.5;
    fVar23 = (fVar19 - fVar23) * 0.5;
    fVar16 = fVar13 * fVar3 * -1.0 + *pfVar4 * fVar12;
    fVar17 = fVar13 * *pfVar4 * 1.0 + fVar3 * fVar12;
    fVar18 = fVar15 * *pfVar5 * -1.0 + *pfVar6 * fVar14;
    fVar19 = fVar15 * *pfVar6 * 1.0 + *pfVar5 * fVar14;
    pfVar1 = (float *)(lVar10 + (longlong)piVar11);
    *pfVar1 = fVar17 + fVar21;
    pfVar1[1] = fVar16 + fVar20;
    pfVar1[2] = fVar19 + fVar23;
    pfVar1[3] = fVar18 + fVar22;
    piVar11 = piVar11 + 4;
    *pfVar9 = (fVar23 - fVar19) * 1.0;
    pfVar8[-3] = (fVar22 - fVar18) * -1.0;
    pfVar8[-2] = (fVar21 - fVar17) * 1.0;
    pfVar8[-1] = (fVar20 - fVar16) * -1.0;
    pfVar8 = pfVar9;
  } while ((float *)(lVar10 + (longlong)piVar11) < pfVar9);
  return;
}





