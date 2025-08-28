#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part233.c - 7 个函数
// 函数: void function_79fa70(int64_t param_1,int64_t param_2,int param_3)
void function_79fa70(int64_t param_1,int64_t param_2,int param_3)
{
  uint64_t uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int64_t lVar6;
  int64_t lVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float fVar11;
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
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  lVar7 = (int64_t)param_3;
  iVar9 = param_3 * 4;
  if (0 < param_3) {
    pfVar5 = (float *)(lVar7 * 8 + param_2);
    uVar1 = (uint64_t)((param_3 - 1U >> 1) + 1);
    do {
      fVar12 = pfVar5[lVar7] + *pfVar5;
      fVar19 = *pfVar5 - pfVar5[lVar7];
      fVar21 = pfVar5[lVar7 * -2] + pfVar5[-lVar7];
      fVar25 = pfVar5[lVar7 * -2] - pfVar5[-lVar7];
      fVar16 = pfVar5[1 - lVar7] + pfVar5[lVar7 * -2 + 1];
      fVar23 = pfVar5[lVar7 * -2 + 1] - pfVar5[1 - lVar7];
      fVar11 = pfVar5[lVar7 + 1] + pfVar5[1];
      fVar13 = pfVar5[1] - pfVar5[lVar7 + 1];
      pfVar5[lVar7 * -2] = fVar12 + fVar21;
      pfVar5[lVar7 * -2 + 1] = fVar11 + fVar16;
      *pfVar5 = fVar21 - fVar12;
      pfVar5[1] = fVar16 - fVar11;
      pfVar5[-lVar7] = fVar25 - fVar13;
      pfVar5[1 - lVar7] = fVar19 + fVar23;
      pfVar5[lVar7] = fVar13 + fVar25;
      pfVar5[lVar7 + 1] = fVar23 - fVar19;
      pfVar5 = pfVar5 + 2;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  fVar11 = ui_system_config;
  if (iVar9 < param_3 * 5) {
    pfVar5 = (float *)(param_2 + ((int64_t)iVar9 + lVar7 * 2) * 4);
    uVar1 = (uint64_t)((param_3 - 1U >> 1) + 1);
    do {
      fVar16 = pfVar5[lVar7] + *pfVar5;
      fVar13 = *pfVar5 - pfVar5[lVar7];
      fVar19 = pfVar5[1 - lVar7] + pfVar5[lVar7 * -2 + 1];
      fVar21 = pfVar5[lVar7 * -2] + pfVar5[-lVar7];
      fVar26 = pfVar5[lVar7 * -2] - pfVar5[-lVar7];
      fVar25 = pfVar5[lVar7 * -2 + 1] - pfVar5[1 - lVar7];
      fVar12 = pfVar5[lVar7 + 1] + pfVar5[1];
      fVar23 = pfVar5[1] - pfVar5[lVar7 + 1];
      pfVar5[lVar7 * -2] = fVar16 + fVar21;
      pfVar5[lVar7 * -2 + 1] = fVar12 + fVar19;
      *pfVar5 = fVar12 - fVar19;
      fVar12 = fVar26 - fVar23;
      pfVar5[1] = fVar21 - fVar16;
      fVar23 = fVar23 + fVar26;
      fVar16 = fVar13 - fVar25;
      fVar13 = fVar13 + fVar25;
      pfVar5[-lVar7] = (fVar12 - fVar13) * fVar11;
      pfVar5[1 - lVar7] = (fVar13 + fVar12) * fVar11;
      pfVar5[lVar7] = (fVar16 - fVar23) * fVar11;
      pfVar5[lVar7 + 1] = (fVar16 + fVar23) * fVar11;
      pfVar5 = pfVar5 + 2;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  iVar2 = param_3 * 8;
  if (iVar2 < *(int *)(param_1 + 0x14030) * 2) {
    iVar4 = param_3 * 9;
    pfVar8 = (float *)&system_data_9950;
    lVar6 = (int64_t)iVar2;
    pfVar5 = (float *)&system_data_9958;
    do {
      fVar11 = pfVar8[3];
      iVar10 = -param_3 + iVar4;
      fVar12 = pfVar5[2];
      pfVar8 = pfVar8 + 2;
      fVar13 = pfVar5[3];
      fVar16 = *pfVar8;
      fVar19 = (fVar11 + fVar11) * fVar12 - fVar13;
      fVar21 = fVar12 - (fVar11 + fVar11) * fVar13;
      if (iVar10 < iVar4) {
        pfVar3 = (float *)(param_2 + (lVar6 + lVar7 * 2) * 4);
        uVar1 = (uint64_t)(((iVar4 - iVar10) - 1U >> 1) + 1);
        do {
          fVar25 = pfVar3[lVar7] + *pfVar3;
          fVar20 = *pfVar3 - pfVar3[lVar7];
          fVar17 = pfVar3[lVar7 * -2] + pfVar3[-lVar7];
          fVar24 = pfVar3[lVar7 * -2] - pfVar3[-lVar7];
          fVar23 = pfVar3[lVar7 + 1] + pfVar3[1];
          fVar14 = pfVar3[lVar7 * -2 + 1] + pfVar3[1 - lVar7];
          fVar27 = pfVar3[lVar7 * -2 + 1] - pfVar3[1 - lVar7];
          fVar22 = pfVar3[1] - pfVar3[lVar7 + 1];
          fVar18 = fVar17 - fVar25;
          fVar15 = fVar14 - fVar23;
          fVar26 = fVar20 + fVar27;
          pfVar3[lVar7 * -2] = fVar25 + fVar17;
          fVar27 = fVar27 - fVar20;
          pfVar3[lVar7 * -2 + 1] = fVar23 + fVar14;
          fVar23 = fVar24 - fVar22;
          fVar22 = fVar22 + fVar24;
          *pfVar3 = fVar16 * fVar18 - fVar11 * fVar15;
          pfVar3[1] = fVar16 * fVar15 + fVar11 * fVar18;
          pfVar3[-lVar7] = fVar12 * fVar23 - fVar13 * fVar26;
          pfVar3[1 - lVar7] = fVar13 * fVar23 + fVar12 * fVar26;
          pfVar3[lVar7] = fVar21 * fVar22 - fVar19 * fVar27;
          pfVar3[lVar7 + 1] = fVar21 * fVar27 + fVar19 * fVar22;
          pfVar3 = pfVar3 + 2;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      fVar12 = pfVar5[4];
      fVar13 = pfVar5[5];
      iVar10 = param_3 * 3 + iVar4;
      fVar19 = (fVar16 + fVar16) * fVar12 - fVar13;
      fVar21 = fVar12 - (fVar16 + fVar16) * fVar13;
      if (iVar10 < iVar4 + iVar9) {
        pfVar3 = (float *)(param_2 + (iVar9 + lVar6 + lVar7 * 2) * 4);
        uVar1 = (uint64_t)((((iVar4 + iVar9) - iVar10) - 1U >> 1) + 1);
        do {
          fVar25 = *pfVar3 + pfVar3[lVar7];
          fVar23 = pfVar3[1] + pfVar3[lVar7 + 1];
          fVar17 = pfVar3[lVar7 * -2] + pfVar3[-lVar7];
          fVar24 = pfVar3[lVar7 * -2] - pfVar3[-lVar7];
          fVar20 = *pfVar3 - pfVar3[lVar7];
          fVar22 = pfVar3[1] - pfVar3[lVar7 + 1];
          fVar14 = pfVar3[lVar7 * -2 + 1] + pfVar3[1 - lVar7];
          fVar27 = pfVar3[lVar7 * -2 + 1] - pfVar3[1 - lVar7];
          fVar18 = fVar17 - fVar25;
          fVar15 = fVar14 - fVar23;
          fVar26 = fVar20 + fVar27;
          pfVar3[lVar7 * -2] = fVar25 + fVar17;
          fVar27 = fVar27 - fVar20;
          pfVar3[lVar7 * -2 + 1] = fVar23 + fVar14;
          fVar23 = fVar24 - fVar22;
          fVar22 = fVar22 + fVar24;
          *pfVar3 = -(fVar11 * fVar18) - fVar16 * fVar15;
          pfVar3[1] = fVar16 * fVar18 - fVar11 * fVar15;
          pfVar3[-lVar7] = fVar12 * fVar23 - fVar13 * fVar26;
          pfVar3[1 - lVar7] = fVar13 * fVar23 + fVar12 * fVar26;
          pfVar3[lVar7] = fVar21 * fVar22 - fVar19 * fVar27;
          pfVar3[lVar7 + 1] = fVar21 * fVar27 + fVar19 * fVar22;
          pfVar3 = pfVar3 + 2;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      iVar4 = iVar4 + param_3 * 8;
      lVar6 = lVar6 + iVar2;
      pfVar5 = pfVar5 + 4;
    } while (-param_3 + iVar4 < *(int *)(param_1 + 0x14030) * 2);
  }
  return;
}
// 函数: void function_79fd23(int param_1)
void function_79fd23(int param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  float *pfVar6;
  int iVar7;
  int64_t lVar8;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  float *pfVar9;
  int64_t in_R10;
  int in_R11D;
  float *pfVar10;
  int unaff_R13D;
  int iVar11;
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
  float fVar24;
  int64_t local_buffer_f0;
  int64_t local_buffer_f8;
  iVar7 = param_1 + in_R11D;
  pfVar10 = (float *)&system_data_9950;
  lVar8 = (int64_t)param_1;
  pfVar9 = (float *)&system_data_9958;
  do {
    fVar1 = pfVar10[3];
    iVar11 = -in_R11D + iVar7;
    fVar2 = pfVar9[2];
    pfVar10 = pfVar10 + 2;
    fVar3 = pfVar9[3];
    fVar4 = *pfVar10;
    fVar23 = (fVar1 + fVar1) * fVar2 - fVar3;
    fVar24 = fVar2 - (fVar1 + fVar1) * fVar3;
    if (iVar11 < iVar7) {
      pfVar6 = (float *)(unaff_RSI + (lVar8 + in_R10 * 2) * 4);
      uVar5 = (uint64_t)(((iVar7 - iVar11) - 1U >> 1) + 1);
      do {
        fVar13 = pfVar6[in_R10] + *pfVar6;
        fVar19 = *pfVar6 - pfVar6[in_R10];
        fVar17 = pfVar6[in_R10 * -2] + pfVar6[-in_R10];
        fVar21 = pfVar6[in_R10 * -2] - pfVar6[-in_R10];
        fVar12 = pfVar6[in_R10 + 1] + pfVar6[1];
        fVar15 = pfVar6[in_R10 * -2 + 1] + pfVar6[1 - in_R10];
        fVar22 = pfVar6[in_R10 * -2 + 1] - pfVar6[1 - in_R10];
        fVar20 = pfVar6[1] - pfVar6[in_R10 + 1];
        fVar18 = fVar17 - fVar13;
        fVar16 = fVar15 - fVar12;
        fVar14 = fVar19 + fVar22;
        pfVar6[in_R10 * -2] = fVar13 + fVar17;
        fVar22 = fVar22 - fVar19;
        pfVar6[in_R10 * -2 + 1] = fVar12 + fVar15;
        fVar12 = fVar21 - fVar20;
        fVar20 = fVar20 + fVar21;
        *pfVar6 = fVar4 * fVar18 - fVar1 * fVar16;
        pfVar6[1] = fVar4 * fVar16 + fVar1 * fVar18;
        pfVar6[-in_R10] = fVar2 * fVar12 - fVar3 * fVar14;
        pfVar6[1 - in_R10] = fVar3 * fVar12 + fVar2 * fVar14;
        pfVar6[in_R10] = fVar24 * fVar20 - fVar23 * fVar22;
        pfVar6[in_R10 + 1] = fVar24 * fVar22 + fVar23 * fVar20;
        pfVar6 = pfVar6 + 2;
        uVar5 = uVar5 - 1;
        unaff_RBP = local_buffer_f0;
        unaff_RSI = local_buffer_f8;
      } while (uVar5 != 0);
    }
    fVar2 = pfVar9[4];
    fVar3 = pfVar9[5];
    iVar11 = (unaff_R13D - in_R11D) + iVar7;
    fVar23 = (fVar4 + fVar4) * fVar2 - fVar3;
    fVar24 = fVar2 - (fVar4 + fVar4) * fVar3;
    if (iVar11 < iVar7 + unaff_R13D) {
      pfVar6 = (float *)(unaff_RSI + (unaff_R13D + lVar8 + in_R10 * 2) * 4);
      uVar5 = (uint64_t)((((iVar7 + unaff_R13D) - iVar11) - 1U >> 1) + 1);
      do {
        fVar13 = *pfVar6 + pfVar6[in_R10];
        fVar12 = pfVar6[1] + pfVar6[in_R10 + 1];
        fVar17 = pfVar6[in_R10 * -2] + pfVar6[-in_R10];
        fVar21 = pfVar6[in_R10 * -2] - pfVar6[-in_R10];
        fVar19 = *pfVar6 - pfVar6[in_R10];
        fVar20 = pfVar6[1] - pfVar6[in_R10 + 1];
        fVar15 = pfVar6[in_R10 * -2 + 1] + pfVar6[1 - in_R10];
        fVar22 = pfVar6[in_R10 * -2 + 1] - pfVar6[1 - in_R10];
        fVar18 = fVar17 - fVar13;
        fVar16 = fVar15 - fVar12;
        fVar14 = fVar19 + fVar22;
        pfVar6[in_R10 * -2] = fVar13 + fVar17;
        fVar22 = fVar22 - fVar19;
        pfVar6[in_R10 * -2 + 1] = fVar12 + fVar15;
        fVar12 = fVar21 - fVar20;
        fVar20 = fVar20 + fVar21;
        *pfVar6 = -(fVar1 * fVar18) - fVar4 * fVar16;
        pfVar6[1] = fVar4 * fVar18 - fVar1 * fVar16;
        pfVar6[-in_R10] = fVar2 * fVar12 - fVar3 * fVar14;
        pfVar6[1 - in_R10] = fVar3 * fVar12 + fVar2 * fVar14;
        pfVar6[in_R10] = fVar24 * fVar20 - fVar23 * fVar22;
        pfVar6[in_R10 + 1] = fVar24 * fVar22 + fVar23 * fVar20;
        pfVar6 = pfVar6 + 2;
        uVar5 = uVar5 - 1;
        unaff_RBP = local_buffer_f0;
      } while (uVar5 != 0);
    }
    iVar7 = iVar7 + unaff_R13D * 2;
    lVar8 = lVar8 + param_1;
    unaff_RSI = local_buffer_f8;
    pfVar9 = pfVar9 + 4;
  } while (-in_R11D + iVar7 < *(int *)(unaff_RBP + 0x14030) * 2);
  return;
}
// 函数: void function_8002a8(void)
void function_8002a8(void)
{
  return;
}
uint64_t function_8002b0(int64_t param_1)
{
  uint64_t uVar1;
  uVar1 = SystemFunction_000180806a20();
  if ((int)uVar1 == 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x70) + 0x10))(param_1 + 0x70);
    if (*(int64_t **)(param_1 + 0x2d8) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(param_1 + 0x2d8) + 0x10))();
      *(uint64_t *)(param_1 + 0x2d8) = 0;
    }
    if (*(int64_t **)(param_1 + 0x2e8) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(param_1 + 0x2e8) + 0x10))();
      *(uint64_t *)(param_1 + 0x2e8) = 0;
    }
    if (*(int64_t **)(param_1 + 0x2f0) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(param_1 + 0x2f0) + 0x10))();
      *(uint64_t *)(param_1 + 0x2f0) = 0;
    }
    uVar1 = 0;
    *(int32_t *)(param_1 + 100) = 0x49742400;
    *(uint64_t *)(param_1 + 0x2e0) = 0;
    *(int32_t *)(param_1 + 0x68) = 0x42c80000;
  }
  return uVar1;
}
uint64_t function_8002ce(void)
{
  int64_t in_RAX;
  int64_t unaff_RBX;
  (**(code **)(in_RAX + 0x10))();
  if (*(int64_t **)(unaff_RBX + 0x2d8) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(unaff_RBX + 0x2d8) + 0x10))();
    *(uint64_t *)(unaff_RBX + 0x2d8) = 0;
  }
  if (*(int64_t **)(unaff_RBX + 0x2e8) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(unaff_RBX + 0x2e8) + 0x10))();
    *(uint64_t *)(unaff_RBX + 0x2e8) = 0;
  }
  if (*(int64_t **)(unaff_RBX + 0x2f0) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(unaff_RBX + 0x2f0) + 0x10))();
    *(uint64_t *)(unaff_RBX + 0x2f0) = 0;
  }
  *(int32_t *)(unaff_RBX + 100) = 0x49742400;
  *(uint64_t *)(unaff_RBX + 0x2e0) = 0;
  *(int32_t *)(unaff_RBX + 0x68) = 0x42c80000;
  return 0;
}
// 函数: void function_80034b(void)
void function_80034b(void)
{
  return;
}
uint64_t function_800360(int64_t param_1,int32_t *param_2)
{
  uint64_t uVar1;
  int64_t lVar2;
  if (param_2 == (int32_t *)0x0) {
    return 0x1f;
  }
  lVar2 = *(int64_t *)(param_1 + 0x2e0);
  if (((lVar2 == 0) && (lVar2 = *(int64_t *)(param_1 + 0x2d8), lVar2 == 0)) &&
     ((*(int64_t *)(param_1 + 0x290) == 0 || (lVar2 = param_1 + 0x70, lVar2 == 0)))) {
    uVar1 = SystemFunction_0001807505b0(param_1);
    return uVar1;
  }
  if (*(uint *)(lVar2 + 0x260) <= *(uint *)(lVar2 + 0x264)) {
    *param_2 = *(int32_t *)(lVar2 + 600);
    return 0;
  }
  *param_2 = *(int32_t *)(lVar2 + 0x25c);
  return 0;
}
uint64_t function_800460(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  if (param_2 == 0) {
    return 0x1f;
  }
  if (*(int64_t *)(param_1 + 0x2e0) == 0) {
    if ((*(int64_t *)(param_1 + 0x28) == 0) || (*(int64_t *)(param_1 + 0x290) == 0)) {
      if (*(int64_t *)(param_1 + 0x2d8) == 0) {
        uVar1 = 0x1e;
      }
      else {
        uVar1 = SystemFunction_00018075f2c0();
        if ((int)uVar1 == 0) {
          return 0;
        }
      }
      return uVar1;
    }
    uVar1 = SystemFunction_00018075f2c0(param_1 + 0x70);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  else {
    uVar1 = SystemFunction_00018075f2c0(*(int64_t *)(param_1 + 0x2e0));
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}
uint64_t function_8004e0(int64_t *param_1,int32_t *param_2,byte param_3)
{
  uint64_t uVar1;
  int32_t astack_special_x_10 [6];
  if (param_2 == (int32_t *)0x0) {
    return 0x1f;
  }
  if ((param_3 & 0x10) == 0) {
    return 0x44;
  }
  uVar1 = (**(code **)(*param_1 + 0x80))(param_1,astack_special_x_10);
  if ((int)uVar1 == 0) {
    *param_2 = astack_special_x_10[0];
    uVar1 = 0;
  }
  return uVar1;
}
uint64_t function_800530(int64_t param_1)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *aplStack_18 [2];
  uVar2 = SystemFunction_000180806a70();
  if ((((int)uVar2 == 0) &&
      (((*(uint *)(*(int64_t *)(param_1 + 8) + 0x78) & 0x300) == 0 ||
       (uVar2 = function_745760(*(int64_t *)(param_1 + 8),0x14,param_1 + 0x2e8), (int)uVar2 == 0))))
     && (((*(uint *)(*(int64_t *)(param_1 + 8) + 0x78) & 0x200) == 0 ||
         (uVar2 = function_745760(*(int64_t *)(param_1 + 8),0x1a,param_1 + 0x2f0), (int)uVar2 == 0)))
     ) {
    aplStack_18[0] = (int64_t *)(param_1 + 0x70);
    uVar2 = SystemFunction_0001807e63a0();
    uVar2 = function_742e00(*(uint64_t *)(param_1 + 8),uVar2,0,aplStack_18,0);
    plVar1 = aplStack_18[0];
    if ((((int)uVar2 == 0) &&
        (uVar2 = (**(code **)(*aplStack_18[0] + 0x28))(aplStack_18[0],1,1,0), (int)uVar2 == 0)) &&
       (uVar2 = SystemFunction_000180762de0(plVar1,param_1), (int)uVar2 == 0)) {
      *(float *)(plVar1 + 0x46) = (float)*(int *)(*(int64_t *)(param_1 + 8) + 0x6d0);
      LOCK();
      *(uint *)((int64_t)plVar1 + 100) = *(uint *)((int64_t)plVar1 + 100) | 0x200;
      UNLOCK();
      uVar2 = 0;
      *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 100) ^ 0x80000000;
    }
  }
  return uVar2;
}
uint64_t
function_8005be(uint64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4,
             uint64_t param_5,int64_t *param_6)
{
  uint64_t uVar1;
  int64_t unaff_RBX;
  uVar1 = (**(code **)(*param_6 + 0x28))(param_6,param_3,param_3,0);
  if ((int)uVar1 == 0) {
    uVar1 = SystemFunction_000180762de0(param_6);
    if ((int)uVar1 == 0) {
      *(float *)(param_6 + 0x46) = (float)*(int *)(*(int64_t *)(unaff_RBX + 8) + 0x6d0);
      LOCK();
      *(uint *)((int64_t)param_6 + 100) = *(uint *)((int64_t)param_6 + 100) | 0x200;
      UNLOCK();
      uVar1 = 0;
      *(uint *)(unaff_RBX + 0x68) = *(uint *)(unaff_RBX + 100) ^ 0x80000000;
    }
  }
  return uVar1;
}
// 函数: void function_800622(void)
void function_800622(void)
{
  return;
}
int32_t function_800630(int64_t param_1,char *param_2)
{
  bool bVar1;
  if (param_2 == (char *)0x0) {
    return 0x1f;
  }
  if ((*(uint *)(param_1 + 0x3c) & 0x10) == 0) {
    if (*(uint *)(param_1 + 0x300) == 0xffffffff) {
      if (*(int64_t **)(param_1 + 0x2e0) == (int64_t *)0x0) {
        if (*(int64_t **)(param_1 + 0x2d8) == (int64_t *)0x0) {
          if (*(int64_t *)(param_1 + 0x290) == 0) {
            *param_2 = '\x01';
            bVar1 = true;
          }
          else if (*(int64_t *)(param_1 + 0x28) == 0) {
            bVar1 = false;
            *param_2 = '\0';
          }
          else {
            (**(code **)(*(int64_t *)(param_1 + 0x70) + 0x30))(param_1 + 0x70);
            bVar1 = *param_2 == '\0';
            *param_2 = bVar1;
          }
        }
        else {
          (**(code **)(**(int64_t **)(param_1 + 0x2d8) + 0x30))();
          bVar1 = *param_2 == '\0';
          *param_2 = bVar1;
        }
      }
      else {
        (**(code **)(**(int64_t **)(param_1 + 0x2e0) + 0x30))();
        bVar1 = *param_2 == '\0';
        *param_2 = bVar1;
      }
      if (bVar1) {
        return 0;
      }
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xffffffaf;
      return 0;
    }
    if (((*(uint *)(param_1 + 0x3c) >> 0x10 & 1) != 0) ||
       (*(uint *)(param_1 + 0x300) <= *(uint *)(*(int64_t *)(param_1 + 8) + 0x116e8))) {
      *param_2 = '\0';
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xffffffaf;
      return 0;
    }
  }
  *param_2 = '\x01';
  return 0;
}
uint64_t function_8007d0(int64_t param_1)
{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uVar2 = SystemFunction_000180806ae0();
  if ((int)uVar2 == 0) {
    lVar3 = *(int64_t *)(param_1 + 0x2e0);
    if (((lVar3 != 0) || (lVar3 = *(int64_t *)(param_1 + 0x2d8), lVar3 != 0)) ||
       ((*(int64_t *)(param_1 + 0x290) != 0 && (lVar3 = param_1 + 0x70, lVar3 != 0)))) {
      uVar1 = *(int32_t *)(param_1 + 0x54);
      *(int *)(lVar3 + 0x260) = *(int *)(lVar3 + 0x260) + 1;
      *(int32_t *)(lVar3 + 0x25c) = uVar1;
    }
    uVar2 = 0;
  }
  return uVar2;
}
uint64_t function_800830(int64_t param_1)
{
  uint64_t uVar1;
  uVar1 = SystemFunction_000180806af0();
  if ((int)uVar1 == 0) {
    if (*(int64_t *)(param_1 + 0x2e0) != 0) {
      *(int32_t *)(*(int64_t *)(param_1 + 0x2e0) + 0x2c4) = *(int32_t *)(param_1 + 0x58);
      *(int32_t *)(*(int64_t *)(param_1 + 0x2e0) + 0x2c8) = *(int32_t *)(param_1 + 0x5c);
    }
    uVar1 = 0;
  }
  return uVar1;
}
uint64_t function_800880(int64_t param_1)
{
  uint64_t uVar1;
  uVar1 = SystemFunction_000180806b20();
  if ((int)uVar1 == 0) {
    if (*(int64_t *)(param_1 + 0x2e0) != 0) {
      *(int32_t *)(*(int64_t *)(param_1 + 0x2e0) + 0x2c0) = *(int32_t *)(param_1 + 0x38);
    }
    uVar1 = 0;
  }
  return uVar1;
}
// 函数: void function_8008b0(int64_t param_1,byte param_2)
void function_8008b0(int64_t param_1,byte param_2)
{
  int iVar1;
  byte bVar2;
  if ((param_2 == 0) && ((*(uint *)(param_1 + 0x3c) >> 0x11 & 1) != 0)) {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffdffff;
    iVar1 = function_76f5d0(*(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x70));
    if (iVar1 != 0) {
      return;
    }
  }
  if ((*(byte *)(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x48) & 0x10) == 0) {
    bVar2 = param_2 ^ 1;
    if ((*(int64_t *)(param_1 + 0x28) != 0) && (*(int64_t *)(param_1 + 0x290) != 0)) {
      SystemCore_Initializer(param_1 + 0x70,bVar2,1);
    }
    if (*(int64_t *)(param_1 + 0x2d8) != 0) {
      SystemCore_Initializer(*(int64_t *)(param_1 + 0x2d8),bVar2,1);
    }
    if (*(int64_t *)(param_1 + 0x2e0) != 0) {
      SystemCore_Initializer(*(int64_t *)(param_1 + 0x2e0),bVar2,1);
    }
    if (*(int64_t *)(param_1 + 0x30) != 0) {
      SystemCore_Initializer(*(int64_t *)(param_1 + 0x30),bVar2,1);
    }
    if (*(int64_t *)(param_1 + 0x2e8) != 0) {
      SystemCore_Initializer(*(int64_t *)(param_1 + 0x2e8),bVar2,1);
    }
    if (*(int64_t *)(param_1 + 0x2f0) != 0) {
      SystemCore_Initializer(*(int64_t *)(param_1 + 0x2f0),bVar2,1);
    }
  }
  SystemFunction_000180806c80(param_1,param_2);
  return;
}
// 函数: void function_8008fb(void)
void function_8008fb(void)
{
  int64_t unaff_RBX;
  byte unaff_SIL;
  byte bVar1;
  bVar1 = unaff_SIL ^ 1;
  if ((*(int64_t *)(unaff_RBX + 0x28) != 0) && (*(int64_t *)(unaff_RBX + 0x290) != 0)) {
    SystemCore_Initializer(unaff_RBX + 0x70,bVar1,1);
  }
  if (*(int64_t *)(unaff_RBX + 0x2d8) != 0) {
    SystemCore_Initializer(*(int64_t *)(unaff_RBX + 0x2d8),bVar1,1);
  }
  if (*(int64_t *)(unaff_RBX + 0x2e0) != 0) {
    SystemCore_Initializer(*(int64_t *)(unaff_RBX + 0x2e0),bVar1,1);
  }
  if (*(int64_t *)(unaff_RBX + 0x30) != 0) {
    SystemCore_Initializer(*(int64_t *)(unaff_RBX + 0x30),bVar1,1);
  }
  if (*(int64_t *)(unaff_RBX + 0x2e8) != 0) {
    SystemCore_Initializer(*(int64_t *)(unaff_RBX + 0x2e8),bVar1,1);
  }
  if (*(int64_t *)(unaff_RBX + 0x2f0) != 0) {
    SystemCore_Initializer(*(int64_t *)(unaff_RBX + 0x2f0),bVar1,1);
  }
  SystemFunction_000180806c80();
  return;
}