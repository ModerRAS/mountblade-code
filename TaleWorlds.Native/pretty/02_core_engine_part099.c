#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part099.c - 2 个函数
// 函数: void GenericFunction_18011bc70(int *param_1,int param_2)
void GenericFunction_18011bc70(int *param_1,int param_2)
{
  int iVar1;
  int *piVar2;
  int64_t lVar3;
  int iVar4;
  int *piVar5;
  if (param_2 != 0) {
    iVar1 = *param_1;
    iVar4 = 0;
    if (0 < iVar1) {
      piVar2 = *(int **)(param_1 + 2);
      piVar5 = piVar2;
      do {
        if (*piVar5 == param_2) {
          if (piVar2 + (int64_t)iVar4 * 10 != (int *)0x0) {
            lVar3 = ((int64_t)iVar4 * 0x28) / 0x28;
// WARNING: Subroutine does not return
            memmove(piVar2 + lVar3 * 10,piVar2 + lVar3 * 10 + 10,(iVar1 - lVar3) * 0x28 + -0x28);
          }
          break;
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 10;
      } while (iVar4 < iVar1);
    }
  }
  if (param_1[7] == param_2) {
    param_1[7] = 0;
  }
  if (param_1[5] == param_2) {
    param_1[5] = 0;
  }
  if (param_1[6] == param_2) {
    param_1[6] = 0;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int * GenericFunction_18011bd30(int *param_1)
{
  int64_t lVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int32_t uVar12;
  int32_t uVar13;
  int iVar14;
  int64_t lVar15;
  int64_t lVar16;
  int *piVar17;
  int32_t uVar18;
  int32_t uVar19;
  int32_t uVar20;
  uint64_t uVar21;
  bool bVar22;
  int64_t lVar23;
  char cVar24;
  int iVar25;
  int iVar26;
  int *piVar27;
  int *piVar28;
  int *piVar29;
  float fVar30;
  float fVar31;
  int32_t local_var_b8;
  int32_t local_var_b4;
  int32_t local_var_b0;
  int32_t local_var_ac;
  int32_t local_var_a8;
  lVar23 = SYSTEM_DATA_MANAGER_A;
  fVar6 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1660);
  lVar15 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  fVar7 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8);
  fVar31 = fVar7 - 2.0;
  fVar8 = *(float *)(lVar15 + 0x104);
  fVar9 = *(float *)(lVar15 + 0x100);
  fVar30 = (fVar7 + fVar31) - 2.0;
  if ((((fVar9 < (float)param_1[10]) || (fVar8 < (float)param_1[0xb])) ||
      ((float)param_1[0xc] < fVar9 + fVar30)) || ((float)param_1[0xd] < fVar8)) {
    fVar10 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1674);
    bVar22 = true;
    fVar11 = (float)param_1[0xc];
    iVar26 = param_1[0xd];
    *(int8_t *)(lVar15 + 0xb1) = 1;
    lVar16 = *(int64_t *)(lVar23 + 0x1af8);
    DataStructure_91b40(*(uint64_t *)(lVar16 + 0x2e8),*(uint64_t *)(param_1 + 10),
                  CONCAT44(iVar26,fVar10 + fVar11),1);
    puVar2 = (uint64_t *)
             (*(int64_t *)(*(int64_t *)(lVar16 + 0x2e8) + 0x68) + -0x10 +
             (int64_t)*(int *)(*(int64_t *)(lVar16 + 0x2e8) + 0x60) * 0x10);
    uVar21 = puVar2[1];
    *(uint64_t *)(lVar16 + 0x228) = *puVar2;
    *(uint64_t *)(lVar16 + 0x230) = uVar21;
  }
  else {
    bVar22 = false;
  }
  lVar16 = SYSTEM_DATA_MANAGER_A;
  uVar12 = *(int32_t *)(lVar23 + 0x16c8);
  uVar13 = *(int32_t *)(lVar23 + 0x16cc);
  uVar18 = *(int32_t *)(lVar23 + 0x16d0);
  fVar10 = *(float *)(lVar23 + 0x16d4);
  piVar27 = (int *)0x0;
  iVar26 = 0;
  local_var_b8 = 0;
  local_var_b4 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16c8);
  local_var_b0 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16cc);
  local_var_ac = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
  local_var_a8 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d4);
  GenericFunction_18013e100(SYSTEM_DATA_MANAGER_A + 0x1b80,&local_var_b8);
  local_var_b8 = 0x15;
  *(int32_t *)(lVar16 + 0x16c8) = uVar12;
  *(int32_t *)(lVar16 + 0x16cc) = uVar13;
  *(int32_t *)(lVar16 + 0x16d0) = uVar18;
  *(float *)(lVar16 + 0x16d4) = fVar10 * 0.5;
  lVar16 = SYSTEM_DATA_MANAGER_A;
  local_var_b4 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1818);
  local_var_b0 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x181c);
  local_var_ac = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1820);
  local_var_a8 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1824);
  GenericFunction_18013e100(SYSTEM_DATA_MANAGER_A + 0x1b80,&local_var_b8);
  *(uint64_t *)(lVar16 + 0x1818) = 0;
  *(uint64_t *)(lVar16 + 0x1820) = 0;
  uVar12 = *(int32_t *)(lVar23 + 0x90);
  uVar13 = *(int32_t *)(lVar23 + 0x94);
  uVar21 = CONCAT44(fVar6 + fVar6 + fVar7,fVar31);
  *(int32_t *)(lVar23 + 0x90) = 0x3e800000;
  *(int32_t *)(lVar23 + 0x94) = 0x3e4ccccd;
  fVar6 = (float)param_1[0xc];
  *(int *)(lVar15 + 0x104) = param_1[0xb];
  *(float *)(lVar15 + 0x100) = fVar6 - fVar30;
  cVar24 = GenericFunction_18010fad0(&rendering_buffer_2296_ptr,0,uVar21);
  fVar6 = (float)param_1[0xc];
  *(int *)(lVar15 + 0x104) = param_1[0xb];
  if (cVar24 != '\0') {
    iVar26 = -1;
  }
  *(float *)(lVar15 + 0x100) = (fVar6 - fVar30) + fVar31;
  cVar24 = GenericFunction_18010fad0(&rendering_buffer_2316_ptr,1,uVar21);
  lVar16 = SYSTEM_DATA_MANAGER_A;
  if (cVar24 != '\0') {
    iVar26 = 1;
  }
  puVar2 = (uint64_t *)
           (*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b88) + -0x10 +
           (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b80) * 0x14);
  uVar21 = puVar2[1];
  puVar4 = (uint64_t *)
           (SYSTEM_DATA_MANAGER_A + 0x16c8 +
           (int64_t)
           *(int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b88) + -0x14 +
                   (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b80) * 0x14) * 0x10);
  *puVar4 = *puVar2;
  puVar4[1] = uVar21;
  iVar14 = *(int *)(lVar16 + 0x1b80);
  *(int *)(lVar16 + 0x1b80) = iVar14 + -1;
  lVar1 = (int64_t)iVar14 + -2;
  puVar3 = (int32_t *)(*(int64_t *)(lVar16 + 0x1b88) + 4 + lVar1 * 0x14);
  uVar18 = puVar3[1];
  uVar19 = puVar3[2];
  uVar20 = puVar3[3];
  puVar5 = (int32_t *)
           (lVar16 + 0x16c8 +
           (int64_t)*(int *)(*(int64_t *)(lVar16 + 0x1b88) + lVar1 * 0x14) * 0x10);
  *puVar5 = *puVar3;
  puVar5[1] = uVar18;
  puVar5[2] = uVar19;
  puVar5[3] = uVar20;
  *(int *)(lVar16 + 0x1b80) = *(int *)(lVar16 + 0x1b80) + -1;
  *(int32_t *)(lVar23 + 0x94) = uVar13;
  *(int32_t *)(lVar23 + 0x90) = uVar12;
  if (bVar22) {
    GenericFunction_180126d80();
  }
  piVar29 = piVar27;
  if (((iVar26 != 0) && (param_1[5] != 0)) && (iVar14 = *param_1, 0 < iVar14)) {
    piVar17 = *(int **)(param_1 + 2);
    piVar28 = piVar17;
    do {
      iVar25 = (int)piVar27;
      piVar29 = (int *)0x0;
      if (*piVar28 == param_1[5]) {
        if (piVar17 + (int64_t)iVar25 * 10 != (int *)0x0) {
          iVar25 = (int)(((int64_t)iVar25 * 0x28) / 0x28);
          iVar26 = iVar25 + iVar26;
          if ((iVar26 < 0) || (iVar14 <= iVar26)) {
            iVar26 = iVar25;
          }
          piVar29 = piVar17 + (int64_t)iVar26 * 10;
        }
        break;
      }
      piVar27 = (int *)(uint64_t)(iVar25 + 1U);
      piVar28 = piVar28 + 10;
    } while ((int)(iVar25 + 1U) < iVar14);
  }
  *(float *)(lVar15 + 0x100) = fVar9;
  *(float *)(lVar15 + 0x104) = fVar8;
  param_1[0xc] = (int)((float)param_1[0xc] - (fVar30 + 1.0));
  return piVar29;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t GenericFunction_18011c120(int *param_1)
{
  int64_t lVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  int32_t uVar6;
  int32_t uVar7;
  int iVar8;
  int64_t lVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  char cVar15;
  uint uVar16;
  uint64_t uVar18;
  uint64_t uVar19;
  float fVar20;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  uint64_t uVar17;
  lVar1 = SYSTEM_DATA_MANAGER_A;
  lVar9 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  uVar6 = *(int32_t *)(lVar9 + 0x100);
  uVar7 = *(int32_t *)(lVar9 + 0x104);
  fVar20 = (float)param_1[0xc] -
           (*(float *)(SYSTEM_DATA_MANAGER_A + 0x1660) + *(float *)(SYSTEM_DATA_MANAGER_A + 0x1660) +
           *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8));
  param_1[0xc] = (int)fVar20;
  if (*(char *)(lVar9 + 0xb7) != '\0') {
    fVar20 = fVar20 + *(float *)(lVar1 + 0x1674);
    param_1[0xc] = (int)fVar20;
  }
  *(int *)(lVar9 + 0x104) = param_1[0xb];
  *(float *)(lVar9 + 0x100) = fVar20;
  uVar17 = 0;
  uVar10 = *(int32_t *)(lVar1 + 0x16c8);
  uVar11 = *(int32_t *)(lVar1 + 0x16cc);
  uVar12 = *(int32_t *)(lVar1 + 0x16d0);
  fVar20 = *(float *)(lVar1 + 0x16d4);
  local_var_68 = 0;
  local_var_64 = *(int32_t *)(lVar1 + 0x16c8);
  local_var_60 = *(int32_t *)(lVar1 + 0x16cc);
  local_var_5c = *(int32_t *)(lVar1 + 0x16d0);
  local_var_58 = *(int32_t *)(lVar1 + 0x16d4);
  GenericFunction_18013e100(lVar1 + 0x1b80,&local_var_68);
  local_var_68 = 0x15;
  *(int32_t *)(lVar1 + 0x16c8) = uVar10;
  *(int32_t *)(lVar1 + 0x16cc) = uVar11;
  *(int32_t *)(lVar1 + 0x16d0) = uVar12;
  *(float *)(lVar1 + 0x16d4) = fVar20 * 0.5;
  lVar1 = SYSTEM_DATA_MANAGER_A;
  local_var_64 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1818);
  local_var_60 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x181c);
  local_var_5c = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1820);
  local_var_58 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1824);
  GenericFunction_18013e100(SYSTEM_DATA_MANAGER_A + 0x1b80,&local_var_68);
  *(uint64_t *)(lVar1 + 0x1818) = 0;
  *(uint64_t *)(lVar1 + 0x1820) = 0;
  cVar15 = GenericFunction_1801129b0(&system_callback2_ptr,0,0x41);
  lVar14 = SYSTEM_DATA_MANAGER_A;
  puVar2 = (uint64_t *)
           (*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b88) + -0x10 +
           (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b80) * 0x14);
  uVar13 = puVar2[1];
  puVar4 = (uint64_t *)
           (SYSTEM_DATA_MANAGER_A + 0x16c8 +
           (int64_t)
           *(int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b88) + -0x14 +
                   (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b80) * 0x14) * 0x10);
  *puVar4 = *puVar2;
  puVar4[1] = uVar13;
  iVar8 = *(int *)(lVar14 + 0x1b80);
  *(int *)(lVar14 + 0x1b80) = iVar8 + -1;
  lVar1 = (int64_t)iVar8 + -2;
  puVar3 = (int32_t *)(*(int64_t *)(lVar14 + 0x1b88) + 4 + lVar1 * 0x14);
  uVar10 = puVar3[1];
  uVar11 = puVar3[2];
  uVar12 = puVar3[3];
  puVar5 = (int32_t *)
           (lVar14 + 0x16c8 +
           (int64_t)*(int *)(*(int64_t *)(lVar14 + 0x1b88) + lVar1 * 0x14) * 0x10);
  *puVar5 = *puVar3;
  puVar5[1] = uVar10;
  puVar5[2] = uVar11;
  puVar5[3] = uVar12;
  *(int *)(lVar14 + 0x1b80) = *(int *)(lVar14 + 0x1b80) + -1;
  uVar18 = uVar17;
  if (cVar15 != '\0') {
    uVar19 = uVar17;
    if (0 < *param_1) {
      do {
        lVar1 = *(int64_t *)(param_1 + 2);
        cVar15 = GenericFunction_18011aad0(**(uint64_t **)(lVar1 + uVar19 + 8));
        if (cVar15 != '\0') {
          uVar18 = lVar1 + uVar19;
        }
        uVar16 = (int)uVar17 + 1;
        uVar17 = (uint64_t)uVar16;
        uVar19 = uVar19 + 0x28;
      } while ((int)uVar16 < *param_1);
    }
    GenericFunction_18012f0c0();
  }
  *(int32_t *)(lVar9 + 0x100) = uVar6;
  *(int32_t *)(lVar9 + 0x104) = uVar7;
  return uVar18;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t GenericFunction_18011c15d(float param_1,float param_2)
{
  int64_t lVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  int32_t uVar6;
  int32_t uVar7;
  int iVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  char cVar14;
  int64_t in_RCX;
  int64_t unaff_RBX;
  uint uVar15;
  int *unaff_RSI;
  uint64_t uVar17;
  uint64_t uVar18;
  int64_t unaff_R15;
  float fVar19;
  int32_t local_var_28;
  float fStack000000000000002c;
  int32_t local_var_30;
  int32_t local_buffer_34;
  int32_t local_var_38;
  int32_t local_buffer_3c;
  int32_t local_var_40;
  uint64_t uVar16;
  uVar6 = *(int32_t *)(unaff_R15 + 0x100);
  uVar7 = *(int32_t *)(unaff_R15 + 0x104);
  param_2 = param_2 - (param_1 + *(float *)(unaff_RBX + 0x19f8));
  *(float *)(in_RCX + 0x30) = param_2;
  if (*(char *)(unaff_R15 + 0xb7) != '\0') {
    param_2 = param_2 + *(float *)(unaff_RBX + 0x1674);
    *(float *)(in_RCX + 0x30) = param_2;
  }
  *(int32_t *)(unaff_R15 + 0x104) = *(int32_t *)(in_RCX + 0x2c);
  *(float *)(unaff_R15 + 0x100) = param_2;
  uVar16 = 0;
  uVar9 = *(int32_t *)(unaff_RBX + 0x16c8);
  uVar10 = *(int32_t *)(unaff_RBX + 0x16cc);
  local_var_28 = *(int32_t *)(unaff_RBX + 0x16d0);
  fStack000000000000002c = *(float *)(unaff_RBX + 0x16d4);
  local_var_30 = 0;
  fVar19 = fStack000000000000002c * 0.5;
  local_buffer_34 = *(int32_t *)(unaff_RBX + 0x16c8);
  local_var_38 = *(int32_t *)(unaff_RBX + 0x16cc);
  local_buffer_3c = *(int32_t *)(unaff_RBX + 0x16d0);
  local_var_40 = *(int32_t *)(unaff_RBX + 0x16d4);
  GenericFunction_18013e100(unaff_RBX + 0x1b80,&local_buffer_00000030);
  local_var_30 = 0x15;
  *(int32_t *)(unaff_RBX + 0x16c8) = uVar9;
  *(int32_t *)(unaff_RBX + 0x16cc) = uVar10;
  *(int32_t *)(unaff_RBX + 0x16d0) = local_var_28;
  *(float *)(unaff_RBX + 0x16d4) = fVar19;
  lVar1 = SYSTEM_DATA_MANAGER_A;
  local_buffer_34 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1818);
  local_var_38 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x181c);
  local_buffer_3c = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1820);
  local_var_40 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1824);
  GenericFunction_18013e100(SYSTEM_DATA_MANAGER_A + 0x1b80,&local_buffer_00000030);
  *(uint64_t *)(lVar1 + 0x1818) = 0;
  *(uint64_t *)(lVar1 + 0x1820) = 0;
  cVar14 = GenericFunction_1801129b0(&system_callback2_ptr,0,0x41);
  lVar13 = SYSTEM_DATA_MANAGER_A;
  puVar2 = (uint64_t *)
           (*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b88) + -0x10 +
           (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b80) * 0x14);
  uVar12 = puVar2[1];
  puVar4 = (uint64_t *)
           (SYSTEM_DATA_MANAGER_A + 0x16c8 +
           (int64_t)
           *(int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b88) + -0x14 +
                   (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b80) * 0x14) * 0x10);
  *puVar4 = *puVar2;
  puVar4[1] = uVar12;
  iVar8 = *(int *)(lVar13 + 0x1b80);
  *(int *)(lVar13 + 0x1b80) = iVar8 + -1;
  lVar1 = (int64_t)iVar8 + -2;
  puVar3 = (int32_t *)(*(int64_t *)(lVar13 + 0x1b88) + 4 + lVar1 * 0x14);
  uVar9 = puVar3[1];
  uVar10 = puVar3[2];
  uVar11 = puVar3[3];
  puVar5 = (int32_t *)
           (lVar13 + 0x16c8 +
           (int64_t)*(int *)(*(int64_t *)(lVar13 + 0x1b88) + lVar1 * 0x14) * 0x10);
  *puVar5 = *puVar3;
  puVar5[1] = uVar9;
  puVar5[2] = uVar10;
  puVar5[3] = uVar11;
  *(int *)(lVar13 + 0x1b80) = *(int *)(lVar13 + 0x1b80) + -1;
  uVar17 = uVar16;
  if (cVar14 != '\0') {
    uVar18 = uVar16;
    if (0 < *unaff_RSI) {
      do {
        lVar1 = *(int64_t *)(unaff_RSI + 2);
        cVar14 = GenericFunction_18011aad0(**(uint64_t **)(lVar1 + uVar18 + 8));
        if (cVar14 != '\0') {
          uVar17 = lVar1 + uVar18;
        }
        uVar15 = (int)uVar16 + 1;
        uVar16 = (uint64_t)uVar15;
        uVar18 = uVar18 + 0x28;
      } while ((int)uVar15 < *unaff_RSI);
    }
    GenericFunction_18012f0c0();
  }
  *(int32_t *)(unaff_R15 + 0x100) = uVar6;
  *(int32_t *)(unaff_R15 + 0x104) = uVar7;
  return uVar17;
}
uint64_t GenericFunction_18011c2cb(uint64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  uint64_t uVar4;
  int *unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar5;
  int64_t unaff_R15;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM8_Da;
  uVar4 = unaff_RDI & 0xffffffff;
  if ((int)unaff_RDI < *unaff_RSI) {
    uVar5 = unaff_RDI & 0xffffffff;
    do {
      lVar1 = *(int64_t *)(unaff_RSI + 2);
      cVar2 = GenericFunction_18011aad0(**(uint64_t **)(lVar1 + uVar5 + 8),param_2,0);
      if (cVar2 != '\0') {
        unaff_RDI = lVar1 + uVar5;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
      uVar5 = uVar5 + 0x28;
    } while ((int)uVar3 < *unaff_RSI);
  }
  GenericFunction_18012f0c0();
  *(int32_t *)(unaff_R15 + 0x100) = unaff_XMM7_Da;
  *(int32_t *)(unaff_R15 + 0x104) = unaff_XMM8_Da;
  return unaff_RDI;
}
uint64_t GenericFunction_18011c2d9(uint64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  char cVar2;
  int unaff_EBP;
  int *unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar3;
  int64_t unaff_R15;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM8_Da;
  uVar3 = unaff_RDI & 0xffffffff;
  do {
    lVar1 = *(int64_t *)(unaff_RSI + 2);
    cVar2 = GenericFunction_18011aad0(**(uint64_t **)(lVar1 + uVar3 + 8),param_2,0);
    if (cVar2 != '\0') {
      unaff_RDI = lVar1 + uVar3;
    }
    unaff_EBP = unaff_EBP + 1;
    uVar3 = uVar3 + 0x28;
  } while (unaff_EBP < *unaff_RSI);
  GenericFunction_18012f0c0();
  *(int32_t *)(unaff_R15 + 0x100) = unaff_XMM7_Da;
  *(int32_t *)(unaff_R15 + 0x104) = unaff_XMM8_Da;
  return unaff_RDI;
}
// 函数: void GenericFunction_18011c31e(void)
void GenericFunction_18011c31e(void)
{
  int64_t unaff_R15;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM8_Da;
  GenericFunction_18012f0c0();
  *(int32_t *)(unaff_R15 + 0x100) = unaff_XMM7_Da;
  *(int32_t *)(unaff_R15 + 0x104) = unaff_XMM8_Da;
  return;
}