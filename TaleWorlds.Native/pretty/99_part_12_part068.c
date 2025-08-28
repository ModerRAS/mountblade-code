#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_12_part068.c - 9 个函数
// 函数: void function_7f93ae(uint64_t param_1,int param_2,uint64_t param_3,int64_t param_4)
void function_7f93ae(uint64_t param_1,int param_2,uint64_t param_3,int64_t param_4)
{
  int64_t lVar1;
  int *piVar2;
  int64_t unaff_RBX;
  int64_t lVar3;
  int64_t unaff_R12;
  int unaff_R15D;
  int32_t unaff_000000bc;
  lVar3 = (int64_t)param_2;
  piVar2 = (int *)(unaff_R12 + 0xc36b1c + (param_4 + lVar3) * 0x10);
  *piVar2 = *piVar2 + -1;
  lVar1 = lVar3 + (uint64_t)*(uint *)(*(int64_t *)(unaff_RBX + 8) + 0x116b8) * 2;
  if (*(int *)(unaff_R12 + 0xc36b1c + lVar1 * 0x10) == unaff_R15D) {
    RenderingSystem_MaterialHandler(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                  *(uint64_t *)(unaff_R12 + 0xc36b10 + lVar1 * 0x10),&processed_var_6448_ptr,0x102);
    *(uint64_t *)
     (unaff_R12 + 0xc36b10 +
     (lVar3 + (uint64_t)*(uint *)(*(int64_t *)(unaff_RBX + 8) + 0x116b8) * 2) * 0x10) =
         CONCAT44(unaff_000000bc,unaff_R15D);
    *(int *)(unaff_R12 + 0xc36b18 +
            (lVar3 + (uint64_t)*(uint *)(*(int64_t *)(unaff_RBX + 8) + 0x116b8) * 2) * 0x10) =
         unaff_R15D;
  }
  *(uint64_t *)(unaff_RBX + 0x78) = CONCAT44(unaff_000000bc,unaff_R15D);
// WARNING: Subroutine does not return
  SystemConfigManager();
}
// 函数: void function_7f943f(void)
void function_7f943f(void)
{
  int64_t unaff_RBX;
  uint64_t unaff_R15;
  *(uint64_t *)(unaff_RBX + 0x78) = unaff_R15;
// WARNING: Subroutine does not return
  SystemConfigManager();
}
// 函数: void function_7f945a(void)
void function_7f945a(void)
{
  int64_t unaff_RBX;
  int64_t unaff_R12;
  uint64_t unaff_R15;
  function_767ad0(((int64_t)*(int *)(unaff_RBX + 0xa8) +
                (uint64_t)*(uint *)(*(int64_t *)(unaff_RBX + 8) + 0x116b8) * 2) * 0x158 +
                0x180c35590);
  SystemCore_DataHandler(*(uint64_t *)
                 (unaff_R12 + 0xc36c10 +
                 ((int64_t)*(int *)(unaff_RBX + 0xa8) +
                 (uint64_t)*(uint *)(*(int64_t *)(unaff_RBX + 8) + 0x116b8) * 2) * 8),0);
  *(uint64_t *)
   (unaff_R12 + 0xc36c10 +
   ((int64_t)*(int *)(unaff_RBX + 0xa8) +
   (uint64_t)*(uint *)(*(int64_t *)(unaff_RBX + 8) + 0x116b8) * 2) * 8) = unaff_R15;
  function_7f84f0();
// WARNING: Subroutine does not return
  SystemConfigManager();
}
// 函数: void function_7f94f0(int64_t param_1)
void function_7f94f0(int64_t param_1)
{
  SystemCore_DataHandler(*(uint64_t *)((int64_t)*(int *)(param_1 + 0x30) * 8 + 0x180c36c90),0);
  *(uint64_t *)((int64_t)*(int *)(param_1 + 0x30) * 8 + 0x180c36c90) = 0;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_7f9550(int64_t param_1,int64_t param_2,int32_t param_3,int32_t param_4,
void function_7f9550(int64_t param_1,int64_t param_2,int32_t param_3,int32_t param_4,
                  int32_t param_5,int32_t param_6,int32_t param_7,int param_8,
                  uint64_t param_9,uint64_t param_10,uint64_t param_11,uint64_t param_12)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int *piVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t local_var_ffffffffffffffb0;
  int32_t uVar10;
  uVar10 = (int32_t)((uint64_t)local_var_ffffffffffffffb0 >> 0x20);
  iVar5 = *(int *)(param_2 + 0x116b8);
  lVar9 = (int64_t)iVar5;
  uVar3 = *(uint64_t *)(lVar9 * 8 + 0x180c36c90);
  SystemStateManager(uVar3);
  if ((param_8 == 0) ||
     (iVar4 = function_7f8750(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                            CONCAT44(uVar10,param_8),param_9,param_10,param_11,param_12), iVar4 != 0
     )) {
LAB_1807f9847:
// WARNING: Subroutine does not return
    SystemConfigManager(uVar3);
  }
  *(int *)(param_1 + 0xa8) = param_8 + -1;
  lVar8 = lVar9 * 2;
  if ((*(int64_t *)((lVar8 + param_8) * 8 + 0x180c36c08) == 0) &&
     (iVar4 = SystemCore_DataProcessor((lVar8 + param_8) * 8 + 0x180c36c08,0), iVar4 != 0)) goto LAB_1807f9847;
  uVar3 = *(uint64_t *)((*(int *)(param_1 + 0xa8) + lVar8) * 8 + 0x180c36c10);
  SystemStateManager(uVar3);
  iVar4 = *(int *)(param_1 + 0xa8);
  lVar1 = lVar8 + iVar4;
  lVar6 = lVar1 * 0x18;
  plVar2 = (int64_t *)(lVar6 + 0x180be6170);
  if (((int64_t *)*plVar2 == plVar2) && (*(int64_t **)(lVar6 + 0x180be6178) == plVar2)) {
    *(int *)(lVar1 * 0x158 + 0x180c356e0) = iVar5;
    *(int *)((lVar8 + *(int *)(param_1 + 0xa8)) * 0x158 + 0x180c356e4) = *(int *)(param_1 + 0xa8);
    iVar5 = function_767c00((*(int *)(param_1 + 0xa8) + lVar8) * 0x158 + 0x180c35590,&processed_var_6424_ptr,0,
                          0,iVar4 + 0xb,1,0,*(uint64_t *)(param_1 + 8),1);
    if (iVar5 != 0) goto LAB_1807f982b;
  }
  iVar5 = 0;
  plVar2 = (int64_t *)(param_1 + 0x90);
  *(int64_t **)(param_1 + 0x98) = plVar2;
  *plVar2 = (int64_t)plVar2;
  *(uint64_t *)(param_1 + 0xa0) = 0;
  lVar6 = *(int *)(param_1 + 0xa8) + lVar8;
  *(uint64_t *)(param_1 + 0x98) = *(uint64_t *)(lVar6 * 0x18 + 0x180be6178);
  lVar6 = lVar6 * 0x18;
  *plVar2 = lVar6 + 0x180be6170;
  *(int64_t **)(lVar6 + 0x180be6178) = plVar2;
  **(int64_t **)(param_1 + 0x98) = (int64_t)plVar2;
  piVar7 = (int *)(lVar9 * 0x20 + 0x180c36b18);
  *(int64_t *)(param_1 + 0xa0) = param_1;
  do {
    if ((*piVar7 == 0) || (*piVar7 == *(int *)(param_1 + 0x24))) {
      lVar8 = iVar5 + lVar8;
      *(int32_t *)(lVar8 * 0x10 + 0x180c36b18) = *(int32_t *)(param_1 + 0x24);
      if (*(int *)(lVar8 * 0x10 + 0x180c36b1c) == 0) {
        lVar9 = function_741d80(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int *)(param_1 + 0x24) << 3,
                              0x10,&processed_var_6448_ptr,0x7e,0);
        *(int64_t *)(lVar8 * 0x10 + 0x180c36b10) = lVar9;
        if (lVar9 == 0) {
// WARNING: Subroutine does not return
          SystemConfigManager(uVar3);
        }
      }
      *(uint64_t *)(param_1 + 0x78) = *(uint64_t *)(lVar8 * 0x10 + 0x180c36b10);
      piVar7 = (int *)(lVar8 * 0x10 + 0x180c36b1c);
      *piVar7 = *piVar7 + 1;
      break;
    }
    iVar5 = iVar5 + 1;
    piVar7 = piVar7 + 4;
  } while (iVar5 < 2);
  if (iVar5 != 2) {
// WARNING: Subroutine does not return
    SystemConfigManager(uVar3);
  }
LAB_1807f982b:
// WARNING: Subroutine does not return
  SystemConfigManager(uVar3);
}
// 函数: void function_7f9870(float *param_1,float *param_2,uint64_t param_3,float *param_4,float *param_5,
void function_7f9870(float *param_1,float *param_2,uint64_t param_3,float *param_4,float *param_5,
                  float *param_6,int param_7)
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
  int64_t lVar12;
  float *pfVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  if (param_7 < 2) {
    fVar1 = param_4[4];
    uVar16 = (uint)param_3;
    param_3 = param_3 & 0xffffffff;
    fVar22 = 0.0;
    fVar2 = param_4[3];
    fVar3 = param_4[2];
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    fVar4 = *param_4;
    fVar5 = *param_5;
    fVar6 = param_5[1];
    fVar7 = param_5[2];
    fVar8 = param_5[3];
    fVar9 = param_5[4];
    lVar12 = (int64_t)param_7;
    fVar10 = param_4[1];
    if (param_7 == 1) {
      fVar19 = *param_6;
      fVar21 = param_6[1];
      if (uVar16 != 0) {
        lVar12 = (int64_t)param_2 - (int64_t)param_1;
        do {
          fVar23 = *param_1;
          fVar17 = fVar22 + fVar4;
          fVar22 = fVar22 + fVar5;
          fVar18 = fVar17 * fVar23 + fVar19;
          *(float *)(lVar12 + (int64_t)param_1) = fVar18;
          param_1 = param_1 + 1;
          fVar17 = fVar27 + fVar1;
          fVar27 = fVar27 + fVar9;
          fVar19 = ((fVar24 + fVar10) * fVar23 - (fVar26 + fVar2) * fVar18) + fVar21;
          fVar21 = fVar25 + fVar3;
          fVar25 = fVar25 + fVar7;
          fVar21 = fVar21 * fVar23 - fVar17 * fVar18;
          uVar16 = (int)param_3 - 1;
          param_3 = (uint64_t)uVar16;
          fVar24 = fVar24 + fVar6;
          fVar26 = fVar26 + fVar8;
        } while (uVar16 != 0);
      }
      *param_6 = fVar19;
      param_6[1] = fVar21;
    }
    else {
      while (uVar16 != 0) {
        lVar15 = 0;
        if (3 < lVar12) {
          fVar23 = fVar26 + fVar2;
          lVar14 = (lVar12 - 4U >> 2) + 1;
          pfVar13 = param_6 + 0x11;
          fVar17 = fVar25 + fVar3;
          fVar19 = fVar22 + fVar4;
          lVar15 = lVar14 * 4;
          fVar21 = fVar24 + fVar10;
          fVar18 = fVar27 + fVar1;
          do {
            fVar11 = *param_1;
            fVar20 = fVar19 * fVar11 + pfVar13[-0x11];
            pfVar13[-0x11] = (fVar21 * fVar11 - fVar23 * fVar20) + pfVar13[-0x10];
            pfVar13[-0x10] = fVar17 * fVar11 - fVar18 * fVar20;
            *param_2 = fVar20;
            fVar11 = param_1[1];
            fVar20 = fVar19 * fVar11 + pfVar13[-9];
            pfVar13[-9] = (fVar21 * fVar11 - fVar23 * fVar20) + pfVar13[-8];
            pfVar13[-8] = fVar17 * fVar11 - fVar18 * fVar20;
            param_2[1] = fVar20;
            fVar11 = param_1[2];
            fVar20 = fVar19 * fVar11 + pfVar13[-1];
            pfVar13[-1] = (fVar21 * fVar11 - fVar23 * fVar20) + *pfVar13;
            *pfVar13 = fVar17 * fVar11 - fVar18 * fVar20;
            param_2[2] = fVar20;
            fVar11 = param_1[3];
            param_1 = param_1 + 4;
            fVar20 = fVar19 * fVar11 + pfVar13[7];
            pfVar13[7] = (fVar21 * fVar11 - fVar23 * fVar20) + pfVar13[8];
            pfVar13[8] = fVar17 * fVar11 - fVar18 * fVar20;
            pfVar13 = pfVar13 + 0x20;
            param_2[3] = fVar20;
            param_2 = param_2 + 4;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if (lVar15 < lVar12) {
          pfVar13 = param_6 + lVar15 * 8;
          lVar15 = lVar12 - lVar15;
          do {
            fVar19 = *param_1;
            param_1 = param_1 + 1;
            fVar21 = (fVar22 + fVar4) * fVar19 + *pfVar13;
            *pfVar13 = ((fVar24 + fVar10) * fVar19 - (fVar26 + fVar2) * fVar21) + pfVar13[1];
            pfVar13[1] = (fVar25 + fVar3) * fVar19 - (fVar27 + fVar1) * fVar21;
            pfVar13 = pfVar13 + 8;
            *param_2 = fVar21;
            param_2 = param_2 + 1;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        fVar22 = fVar22 + fVar5;
        fVar24 = fVar24 + fVar6;
        fVar25 = fVar25 + fVar7;
        fVar26 = fVar26 + fVar8;
        fVar27 = fVar27 + fVar9;
        uVar16 = (int)param_3 - 1;
        param_3 = (uint64_t)uVar16;
      }
    }
    return;
  }
  function_7f9960(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  return;
}
// 函数: void function_7f98c0(float *param_1,float *param_2,uint64_t param_3,float *param_4,float *param_5,
void function_7f98c0(float *param_1,float *param_2,uint64_t param_3,float *param_4,float *param_5,
                  float *param_6,float param_7)
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
  int64_t lVar11;
  float *pfVar12;
  int64_t lVar13;
  int64_t lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  if ((int)param_7 < 2) {
    fVar1 = *param_4;
    uVar15 = (uint)param_3;
    param_3 = param_3 & 0xffffffff;
    fVar2 = param_4[1];
    fVar3 = param_4[2];
    fVar4 = param_4[3];
    fVar23 = 0.0;
    fVar5 = param_4[4];
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    fVar6 = *param_5;
    fVar7 = param_5[1];
    fVar8 = param_5[2];
    fVar9 = param_5[3];
    fVar10 = param_5[4];
    lVar11 = (int64_t)(int)param_7;
    if (param_7 == 1.4013e-45) {
      fVar16 = param_6[3];
      fVar22 = *param_6;
      fVar28 = param_6[1];
      fVar21 = param_6[2];
      if (uVar15 != 0) {
        lVar11 = (int64_t)param_2 - (int64_t)param_1;
        param_7 = fVar16;
        do {
          fVar16 = *param_1;
          fVar18 = fVar27 + fVar5;
          fVar27 = fVar27 + fVar10;
          fVar17 = fVar25 + fVar3;
          fVar19 = fVar26 + fVar4;
          fVar25 = fVar25 + fVar8;
          fVar26 = fVar26 + fVar9;
          fVar20 = (fVar23 + fVar1) * fVar16 + fVar22;
          fVar21 = (fVar23 + fVar1) * fVar20 + fVar21;
          fVar22 = ((fVar24 + fVar2) * fVar16 - fVar19 * fVar20) + fVar28;
          fVar28 = fVar17 * fVar16 - fVar18 * fVar20;
          *(float *)(lVar11 + (int64_t)param_1) = fVar21;
          param_1 = param_1 + 1;
          fVar16 = fVar17 * fVar20 - fVar18 * fVar21;
          fVar21 = ((fVar24 + fVar2) * fVar20 - fVar19 * fVar21) + param_7;
          uVar15 = (int)param_3 - 1;
          param_3 = (uint64_t)uVar15;
          fVar23 = fVar23 + fVar6;
          fVar24 = fVar24 + fVar7;
          param_7 = fVar16;
        } while (uVar15 != 0);
      }
      *param_6 = fVar22;
      param_6[1] = fVar28;
      param_6[2] = fVar21;
      param_6[3] = fVar16;
    }
    else {
      while (uVar15 != 0) {
        lVar13 = 0;
        if (3 < lVar11) {
          fVar16 = fVar23 + fVar1;
          lVar14 = (lVar11 - 4U >> 2) + 1;
          pfVar12 = param_6 + 10;
          fVar22 = fVar24 + fVar2;
          fVar28 = fVar26 + fVar4;
          lVar13 = lVar14 * 4;
          fVar21 = fVar25 + fVar3;
          fVar17 = fVar27 + fVar5;
          do {
            fVar18 = *param_1;
            fVar19 = fVar16 * fVar18 + pfVar12[-10];
            pfVar12[-10] = (fVar22 * fVar18 - fVar28 * fVar19) + pfVar12[-9];
            pfVar12[-9] = fVar21 * fVar18 - fVar17 * fVar19;
            fVar18 = fVar16 * fVar19 + pfVar12[-8];
            pfVar12[-8] = (fVar22 * fVar19 - fVar28 * fVar18) + pfVar12[-7];
            pfVar12[-7] = fVar21 * fVar19 - fVar17 * fVar18;
            *param_2 = fVar18;
            fVar18 = param_1[1];
            fVar19 = fVar16 * fVar18 + pfVar12[-2];
            pfVar12[-2] = (fVar22 * fVar18 - fVar28 * fVar19) + pfVar12[-1];
            pfVar12[-1] = fVar21 * fVar18 - fVar17 * fVar19;
            fVar18 = fVar16 * fVar19 + *pfVar12;
            *pfVar12 = (fVar22 * fVar19 - fVar28 * fVar18) + pfVar12[1];
            pfVar12[1] = fVar21 * fVar19 - fVar17 * fVar18;
            param_2[1] = fVar18;
            fVar18 = param_1[2];
            fVar19 = fVar16 * fVar18 + pfVar12[6];
            pfVar12[6] = (fVar22 * fVar18 - fVar28 * fVar19) + pfVar12[7];
            pfVar12[7] = fVar21 * fVar18 - fVar17 * fVar19;
            fVar18 = fVar16 * fVar19 + pfVar12[8];
            pfVar12[8] = (fVar22 * fVar19 - fVar28 * fVar18) + pfVar12[9];
            pfVar12[9] = fVar21 * fVar19 - fVar17 * fVar18;
            param_2[2] = fVar18;
            fVar18 = param_1[3];
            param_1 = param_1 + 4;
            fVar19 = fVar16 * fVar18 + pfVar12[0xe];
            pfVar12[0xe] = (fVar22 * fVar18 - fVar28 * fVar19) + pfVar12[0xf];
            pfVar12[0xf] = fVar21 * fVar18 - fVar17 * fVar19;
            fVar18 = fVar16 * fVar19 + pfVar12[0x10];
            pfVar12[0x10] = (fVar22 * fVar19 - fVar28 * fVar18) + pfVar12[0x11];
            pfVar12[0x11] = fVar21 * fVar19 - fVar17 * fVar18;
            pfVar12 = pfVar12 + 0x20;
            param_2[3] = fVar18;
            param_2 = param_2 + 4;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if (lVar13 < lVar11) {
          pfVar12 = param_6 + lVar13 * 8 + 2;
          lVar13 = lVar11 - lVar13;
          do {
            fVar16 = *param_1;
            param_1 = param_1 + 1;
            fVar28 = (fVar23 + fVar1) * fVar16 + pfVar12[-2];
            pfVar12[-2] = ((fVar24 + fVar2) * fVar16 - (fVar26 + fVar4) * fVar28) + pfVar12[-1];
            fVar22 = (fVar23 + fVar1) * fVar28 + *pfVar12;
            pfVar12[-1] = (fVar25 + fVar3) * fVar16 - (fVar27 + fVar5) * fVar28;
            *pfVar12 = ((fVar24 + fVar2) * fVar28 - (fVar26 + fVar4) * fVar22) + pfVar12[1];
            pfVar12[1] = (fVar25 + fVar3) * fVar28 - (fVar27 + fVar5) * fVar22;
            pfVar12 = pfVar12 + 8;
            *param_2 = fVar22;
            param_2 = param_2 + 1;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        fVar23 = fVar23 + fVar6;
        fVar24 = fVar24 + fVar7;
        fVar25 = fVar25 + fVar8;
        fVar26 = fVar26 + fVar9;
        fVar27 = fVar27 + fVar10;
        uVar15 = (int)param_3 - 1;
        param_3 = (uint64_t)uVar15;
      }
    }
    return;
  }
  function_7f9960(param_1,param_2,param_3,param_4,param_5,param_6,param_7,1);
  return;
}
// 函数: void function_7f9910(float *param_1,float *param_2,uint64_t param_3,float *param_4,float *param_5,
void function_7f9910(float *param_1,float *param_2,uint64_t param_3,float *param_4,float *param_5,
                  float *param_6,float param_7)
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
  int64_t lVar11;
  float *pfVar12;
  int64_t lVar13;
  int64_t lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fStackX_18;
  float fStackY_d0;
  if ((int)param_7 < 2) {
    fVar1 = *param_4;
    uVar15 = (uint)param_3;
    param_3 = param_3 & 0xffffffff;
    fVar2 = param_4[1];
    fVar3 = param_4[2];
    fVar4 = param_4[3];
    fVar26 = 0.0;
    fVar5 = param_4[4];
    fVar29 = 0.0;
    fVar30 = 0.0;
    fVar31 = 0.0;
    fVar6 = param_5[2];
    fVar7 = *param_5;
    fVar8 = param_5[1];
    fVar9 = param_5[3];
    fVar10 = param_5[4];
    lVar11 = (int64_t)(int)param_7;
    fStackX_18 = 0.0;
    if (param_7 == 1.4013e-45) {
      param_7 = param_6[3];
      param_5._0_4_ = param_6[5];
      fVar17 = param_6[7];
      fVar25 = *param_6;
      fVar16 = param_6[1];
      fVar27 = param_6[2];
      fVar28 = param_6[4];
      fVar24 = param_6[6];
      if (uVar15 != 0) {
        lVar11 = (int64_t)param_2 - (int64_t)param_1;
        fStackY_d0 = fVar17;
        do {
          fVar17 = *param_1;
          fVar21 = fVar29 + fVar2;
          fVar20 = fStackX_18 + fVar5;
          fVar29 = fVar29 + fVar8;
          fVar22 = fVar31 + fVar4;
          fVar31 = fVar31 + fVar9;
          fVar23 = fVar26 + fVar1;
          fVar18 = fVar23 * fVar17 + fVar25;
          fVar25 = (fVar21 * fVar17 - fVar22 * fVar18) + fVar16;
          fVar19 = fVar30 + fVar3;
          fVar30 = fVar30 + fVar6;
          fVar16 = fVar19 * fVar17 - fVar20 * fVar18;
          fVar17 = fVar23 * fVar18 + fVar27;
          fVar27 = (fVar21 * fVar18 - fVar22 * fVar17) + param_7;
          param_7 = fVar19 * fVar18 - fVar20 * fVar17;
          fVar18 = fVar23 * fVar17 + fVar28;
          fVar24 = fVar23 * fVar18 + fVar24;
          fVar28 = (fVar21 * fVar17 - fVar22 * fVar18) + param_5._0_4_;
          param_5._0_4_ = fVar19 * fVar17 - fVar20 * fVar18;
          *(float *)(lVar11 + (int64_t)param_1) = fVar24;
          param_1 = param_1 + 1;
          fVar17 = fVar19 * fVar18 - fVar20 * fVar24;
          fVar24 = (fVar21 * fVar18 - fVar22 * fVar24) + fStackY_d0;
          fStackX_18 = fStackX_18 + fVar10;
          uVar15 = (int)param_3 - 1;
          param_3 = (uint64_t)uVar15;
          fVar26 = fVar26 + fVar7;
          fStackY_d0 = fVar17;
        } while (uVar15 != 0);
      }
      *param_6 = fVar25;
      param_6[1] = fVar16;
      param_6[2] = fVar27;
      param_6[3] = param_7;
      param_6[4] = fVar28;
      param_6[5] = param_5._0_4_;
      param_6[6] = fVar24;
      param_6[7] = fVar17;
    }
    else {
      while (uVar15 != 0) {
        lVar13 = 0;
        if (3 < lVar11) {
          fVar17 = fVar26 + fVar1;
          lVar14 = (lVar11 - 4U >> 2) + 1;
          pfVar12 = param_6 + 10;
          fVar25 = fVar29 + fVar2;
          fVar16 = fVar31 + fVar4;
          lVar13 = lVar14 * 4;
          fVar27 = fVar30 + fVar3;
          fVar28 = fStackX_18 + fVar5;
          do {
            fVar24 = *param_1;
            fVar18 = fVar17 * fVar24 + pfVar12[-10];
            pfVar12[-10] = (fVar25 * fVar24 - fVar16 * fVar18) + pfVar12[-9];
            pfVar12[-9] = fVar27 * fVar24 - fVar28 * fVar18;
            fVar24 = fVar17 * fVar18 + pfVar12[-8];
            pfVar12[-8] = (fVar25 * fVar18 - fVar16 * fVar24) + pfVar12[-7];
            pfVar12[-7] = fVar27 * fVar18 - fVar28 * fVar24;
            fVar18 = fVar17 * fVar24 + pfVar12[-6];
            pfVar12[-6] = (fVar25 * fVar24 - fVar16 * fVar18) + pfVar12[-5];
            pfVar12[-5] = fVar27 * fVar24 - fVar28 * fVar18;
            fVar24 = fVar17 * fVar18 + pfVar12[-4];
            pfVar12[-4] = (fVar25 * fVar18 - fVar16 * fVar24) + pfVar12[-3];
            pfVar12[-3] = fVar27 * fVar18 - fVar28 * fVar24;
            *param_2 = fVar24;
            fVar24 = param_1[1];
            fVar18 = fVar17 * fVar24 + pfVar12[-2];
            pfVar12[-2] = (fVar25 * fVar24 - fVar16 * fVar18) + pfVar12[-1];
            pfVar12[-1] = fVar27 * fVar24 - fVar28 * fVar18;
            fVar24 = fVar17 * fVar18 + *pfVar12;
            *pfVar12 = (fVar25 * fVar18 - fVar16 * fVar24) + pfVar12[1];
            pfVar12[1] = fVar27 * fVar18 - fVar28 * fVar24;
            fVar18 = fVar17 * fVar24 + pfVar12[2];
            pfVar12[2] = (fVar25 * fVar24 - fVar16 * fVar18) + pfVar12[3];
            pfVar12[3] = fVar27 * fVar24 - fVar28 * fVar18;
            fVar24 = fVar17 * fVar18 + pfVar12[4];
            pfVar12[4] = (fVar25 * fVar18 - fVar16 * fVar24) + pfVar12[5];
            pfVar12[5] = fVar27 * fVar18 - fVar28 * fVar24;
            param_2[1] = fVar24;
            fVar24 = param_1[2];
            fVar18 = fVar17 * fVar24 + pfVar12[6];
            pfVar12[6] = (fVar25 * fVar24 - fVar16 * fVar18) + pfVar12[7];
            pfVar12[7] = fVar27 * fVar24 - fVar28 * fVar18;
            fVar24 = fVar17 * fVar18 + pfVar12[8];
            pfVar12[8] = (fVar25 * fVar18 - fVar16 * fVar24) + pfVar12[9];
            pfVar12[9] = fVar27 * fVar18 - fVar28 * fVar24;
            fVar18 = fVar17 * fVar24 + pfVar12[10];
            pfVar12[10] = (fVar25 * fVar24 - fVar16 * fVar18) + pfVar12[0xb];
            pfVar12[0xb] = fVar27 * fVar24 - fVar28 * fVar18;
            fVar24 = fVar17 * fVar18 + pfVar12[0xc];
            pfVar12[0xc] = (fVar25 * fVar18 - fVar16 * fVar24) + pfVar12[0xd];
            pfVar12[0xd] = fVar27 * fVar18 - fVar28 * fVar24;
            param_2[2] = fVar24;
            fVar24 = param_1[3];
            fVar18 = fVar17 * fVar24 + pfVar12[0xe];
            pfVar12[0xe] = (fVar25 * fVar24 - fVar16 * fVar18) + pfVar12[0xf];
            pfVar12[0xf] = fVar27 * fVar24 - fVar28 * fVar18;
            fVar24 = fVar17 * fVar18 + pfVar12[0x10];
            pfVar12[0x10] = (fVar25 * fVar18 - fVar16 * fVar24) + pfVar12[0x11];
            pfVar12[0x11] = fVar27 * fVar18 - fVar28 * fVar24;
            fVar18 = fVar17 * fVar24 + pfVar12[0x12];
            pfVar12[0x12] = (fVar25 * fVar24 - fVar16 * fVar18) + pfVar12[0x13];
            param_1 = param_1 + 4;
            pfVar12[0x13] = fVar27 * fVar24 - fVar28 * fVar18;
            fVar24 = fVar17 * fVar18 + pfVar12[0x14];
            pfVar12[0x14] = (fVar25 * fVar18 - fVar16 * fVar24) + pfVar12[0x15];
            pfVar12[0x15] = fVar27 * fVar18 - fVar28 * fVar24;
            pfVar12 = pfVar12 + 0x20;
            param_2[3] = fVar24;
            param_2 = param_2 + 4;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if (lVar13 < lVar11) {
          fVar28 = fStackX_18 + fVar5;
          pfVar12 = param_6 + lVar13 * 8 + 2;
          fVar17 = fVar26 + fVar1;
          fVar25 = fVar29 + fVar2;
          fVar16 = fVar31 + fVar4;
          lVar13 = lVar11 - lVar13;
          fVar27 = fVar30 + fVar3;
          do {
            fVar24 = *param_1;
            param_1 = param_1 + 1;
            fVar19 = fVar17 * fVar24 + pfVar12[-2];
            pfVar12[-2] = (fVar25 * fVar24 - fVar16 * fVar19) + pfVar12[-1];
            fVar18 = fVar17 * fVar19 + *pfVar12;
            pfVar12[-1] = fVar27 * fVar24 - fVar28 * fVar19;
            *pfVar12 = (fVar25 * fVar19 - fVar16 * fVar18) + pfVar12[1];
            fVar20 = fVar17 * fVar18 + pfVar12[2];
            pfVar12[1] = fVar27 * fVar19 - fVar28 * fVar18;
            pfVar12[2] = (fVar25 * fVar18 - fVar16 * fVar20) + pfVar12[3];
            fVar24 = fVar17 * fVar20 + pfVar12[4];
            pfVar12[3] = fVar27 * fVar18 - fVar28 * fVar20;
            pfVar12[4] = (fVar25 * fVar20 - fVar16 * fVar24) + pfVar12[5];
            pfVar12[5] = fVar27 * fVar20 - fVar28 * fVar24;
            pfVar12 = pfVar12 + 8;
            *param_2 = fVar24;
            param_2 = param_2 + 1;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        fVar26 = fVar26 + fVar7;
        fVar29 = fVar29 + fVar8;
        fStackX_18 = fStackX_18 + fVar10;
        fVar30 = fVar30 + fVar6;
        fVar31 = fVar31 + fVar9;
        uVar15 = (int)param_3 - 1;
        param_3 = (uint64_t)uVar15;
      }
    }
    return;
  }
  function_7f9960(param_1,param_2,param_3,param_4,param_5,param_6,param_7,2);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_7f9960(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t *param_4,
void function_7f9960(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t *param_4,
                  float *param_5,int64_t param_6,int param_7)
{
  bool bVar1;
  int8_t stack_array_2b0 [136];
  int iStack_228;
  int iStack_224;
  int32_t local_var_220;
  uint64_t local_var_1f8;
  uint64_t local_var_1f0;
  int32_t local_var_1b8;
  int32_t local_var_1b4;
  int32_t local_var_1b0;
  int32_t local_var_1ac;
  int32_t local_var_1a8;
  int32_t local_var_1a4;
  int32_t local_var_1a0;
  int32_t local_var_19c;
  int32_t local_var_198;
  int32_t local_var_194;
  int32_t local_var_190;
  int32_t local_var_18c;
  int32_t local_var_188;
  int32_t local_var_184;
  int32_t local_var_180;
  int32_t local_var_17c;
  int32_t local_var_178;
  int32_t local_var_174;
  int32_t local_var_170;
  int32_t local_var_16c;
  int64_t lStack_108;
  int64_t lStack_100;
  int64_t lStack_f8;
  int64_t lStack_f0;
  uint64_t local_var_e8;
  local_var_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)&iStack_228;
  if ((((*param_5 == 0.0) && (param_5[1] == 0.0)) && (param_5[2] == 0.0)) &&
     ((param_5[3] == 0.0 && (param_5[4] == 0.0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_var_1b8 = *param_4;
  lStack_100 = param_6 + 0x20;
  local_var_198 = param_4[1];
  local_var_178 = param_4[2];
  local_var_1a8 = param_4[3];
  local_var_188 = param_4[4];
  lStack_f8 = param_6 + 0x40;
  lStack_f0 = param_6 + 0x60;
  lStack_108 = param_6;
  local_var_220 = param_3;
  local_var_1f8 = param_1;
  local_var_1f0 = param_2;
  local_var_1b4 = local_var_1b8;
  local_var_1b0 = local_var_1b8;
  local_var_1ac = local_var_1b8;
  local_var_1a4 = local_var_1a8;
  local_var_1a0 = local_var_1a8;
  local_var_19c = local_var_1a8;
  local_var_194 = local_var_198;
  local_var_190 = local_var_198;
  local_var_18c = local_var_198;
  local_var_184 = local_var_188;
  local_var_180 = local_var_188;
  local_var_17c = local_var_188;
  local_var_174 = local_var_178;
  local_var_170 = local_var_178;
  local_var_16c = local_var_178;
  if (bVar1) {
    iStack_228 = 0;
    iStack_224 = param_7;
    if (0 < param_7) {
// WARNING: Subroutine does not return
      memset(stack_array_2b0,0,0x80);
    }
  }
  else {
    iStack_224 = 0;
    iStack_228 = param_7;
    if (0 < param_7) {
// WARNING: Subroutine does not return
      memset(stack_array_2b0,0,0x80);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(GET_SECURITY_COOKIE());
}