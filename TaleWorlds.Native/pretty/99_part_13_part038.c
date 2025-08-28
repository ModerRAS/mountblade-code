#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_13_part038.c - 7 个函数
// 函数: void function_8bef40(int64_t param_1,uint64_t param_2)
void function_8bef40(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = function_8d7110(param_2,param_1);
  if (iVar1 == 0) {
    function_8bec80(param_1 + 0x408,param_2);
  }
  return;
}
// 函数: void function_8bef80(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_8bef80(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_8befb0(param_2,*(int32_t *)(param_1 + 0x550),param_1 + 0x554,param_3,param_4);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8befb0(uint64_t *param_1,int param_2,uint64_t *param_3,uint64_t *param_4,
void function_8befb0(uint64_t *param_1,int param_2,uint64_t *param_3,uint64_t *param_4,
                  float *param_5)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  float *pfVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int8_t stack_array_88 [8];
  float fStack_80;
  float fStack_70;
  uint stack_array_68 [8];
  float afStack_48 [8];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_88;
  lVar11 = (int64_t)param_2;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  if (param_5 != (float *)0x0) {
    param_5[0] = 0.0;
    param_5[1] = 0.0;
    param_5[2] = 0.0;
    param_5[3] = 0.0;
    param_5[4] = 0.0;
    param_5[5] = 0.0;
    param_5[6] = 0.0;
    param_5[7] = 0.0;
  }
  if (param_2 == 1) {
    *(int32_t *)param_4 = 0x3f800000;
    if (param_5 != (float *)0x0) {
      fStack_80 = *(float *)(param_1 + 1);
      puVar3 = param_3 + 6;
      if (*(char *)(param_3 + 8) == '\0') {
        puVar3 = param_3;
      }
      fStack_70 = *(float *)(puVar3 + 1);
      fVar13 = (float)*param_1 - (float)*puVar3;
      fVar14 = *(float *)((int64_t)param_1 + 4) - (float)((uint64_t)*puVar3 >> 0x20);
      *param_5 = fVar14 * fVar14 + fVar13 * fVar13 +
                 (fStack_80 - fStack_70) * (fStack_80 - fStack_70);
    }
  }
  else {
    pfVar8 = afStack_48;
    if (param_5 != (float *)0x0) {
      pfVar8 = param_5;
    }
    uVar10 = 0;
    uVar7 = uVar10;
    uVar9 = uVar10;
    puVar3 = param_3;
    if (0 < param_2) {
      do {
        fStack_70 = *(float *)(param_1 + 1);
        puVar4 = puVar3 + 6;
        if (*(char *)(puVar3 + 8) == '\0') {
          puVar4 = puVar3;
        }
        fStack_80 = *(float *)(puVar4 + 1);
        fVar13 = (float)*param_1 - (float)*puVar4;
        fVar14 = (float)((uint64_t)*param_1 >> 0x20) - (float)((uint64_t)*puVar4 >> 0x20);
        fVar13 = fVar14 * fVar14 + fVar13 * fVar13 +
                 (fStack_70 - fStack_80) * (fStack_70 - fStack_80);
        pfVar8[uVar9] = fVar13;
        uVar5 = uVar10;
        uVar2 = uVar9;
        if (3 < (int64_t)uVar9) {
          do {
            if (fVar13 < pfVar8[(int)stack_array_68[uVar5]]) goto joined_r0x0001808bf17d;
            if (fVar13 < pfVar8[(int)stack_array_68[uVar5 + 1]]) {
              uVar5 = uVar5 + 1;
              goto joined_r0x0001808bf17d;
            }
            if (fVar13 < pfVar8[(int)stack_array_68[uVar5 + 2]]) {
              uVar5 = uVar5 + 2;
              goto joined_r0x0001808bf17d;
            }
            if (fVar13 < pfVar8[(int)stack_array_68[uVar5 + 3]]) {
              uVar5 = uVar5 + 3;
              goto joined_r0x0001808bf17d;
            }
            uVar5 = uVar5 + 4;
          } while ((int64_t)uVar5 < (int64_t)(uVar9 - 3));
        }
        while (((int64_t)uVar5 < (int64_t)uVar9 && (pfVar8[(int)stack_array_68[uVar5]] <= fVar13))) {
          uVar5 = uVar5 + 1;
        }
joined_r0x0001808bf17d:
        while (uVar1 = uVar2 - 1, (int64_t)uVar5 <= (int64_t)uVar1) {
          stack_array_68[uVar2] = stack_array_68[uVar1];
          uVar2 = uVar1;
        }
        stack_array_68[uVar5] = (uint)uVar7;
        uVar6 = (uint)uVar7 + 1;
        uVar7 = (uint64_t)uVar6;
        uVar9 = uVar9 + 1;
        puVar3 = (uint64_t *)((int64_t)puVar3 + 0x44);
      } while ((int)uVar6 < param_2);
    }
    fVar13 = 0.0;
    if (3 < lVar11) {
      do {
        if (1.0 <= fVar13) goto LAB_1808bf30c;
        uVar6 = stack_array_68[uVar10];
        fVar14 = *(float *)((int64_t)(int)uVar6 * 0x44 + 0x3c + (int64_t)param_3);
        if ((0.0 < fVar14) && ((*(uint *)(param_1 + 6) >> (uVar6 & 0x1f) & 1) != 0)) {
          fVar12 = 1.0 - fVar13;
          if (fVar14 <= 1.0 - fVar13) {
            fVar12 = fVar14;
          }
          *(float *)((int64_t)param_4 + (int64_t)(int)uVar6 * 4) = fVar12;
          fVar13 = fVar13 + fVar12;
        }
        if (1.0 <= fVar13) goto LAB_1808bf30c;
        uVar6 = stack_array_68[uVar10 + 1];
        fVar14 = *(float *)((int64_t)(int)uVar6 * 0x44 + 0x3c + (int64_t)param_3);
        if ((0.0 < fVar14) && ((*(uint *)(param_1 + 6) >> (uVar6 & 0x1f) & 1) != 0)) {
          fVar12 = 1.0 - fVar13;
          if (fVar14 <= 1.0 - fVar13) {
            fVar12 = fVar14;
          }
          *(float *)((int64_t)param_4 + (int64_t)(int)uVar6 * 4) = fVar12;
          fVar13 = fVar13 + fVar12;
        }
        if (1.0 <= fVar13) goto LAB_1808bf30c;
        uVar6 = stack_array_68[uVar10 + 2];
        fVar14 = *(float *)((int64_t)(int)uVar6 * 0x44 + 0x3c + (int64_t)param_3);
        if ((0.0 < fVar14) && ((*(uint *)(param_1 + 6) >> (uVar6 & 0x1f) & 1) != 0)) {
          fVar12 = 1.0 - fVar13;
          if (fVar14 <= 1.0 - fVar13) {
            fVar12 = fVar14;
          }
          *(float *)((int64_t)param_4 + (int64_t)(int)uVar6 * 4) = fVar12;
          fVar13 = fVar13 + fVar12;
        }
        if (1.0 <= fVar13) goto LAB_1808bf30c;
        uVar6 = stack_array_68[uVar10 + 3];
        fVar14 = *(float *)((int64_t)(int)uVar6 * 0x44 + 0x3c + (int64_t)param_3);
        if ((0.0 < fVar14) && ((*(uint *)(param_1 + 6) >> (uVar6 & 0x1f) & 1) != 0)) {
          fVar12 = 1.0 - fVar13;
          if (fVar14 <= 1.0 - fVar13) {
            fVar12 = fVar14;
          }
          *(float *)((int64_t)param_4 + (int64_t)(int)uVar6 * 4) = fVar12;
          fVar13 = fVar13 + fVar12;
        }
        uVar10 = uVar10 + 4;
      } while ((int64_t)uVar10 < lVar11 + -3);
    }
    while (((int64_t)uVar10 < lVar11 && (fVar13 < 1.0))) {
      uVar6 = stack_array_68[uVar10];
      fVar14 = *(float *)((int64_t)(int)uVar6 * 0x44 + 0x3c + (int64_t)param_3);
      if ((0.0 < fVar14) && ((*(uint *)(param_1 + 6) >> (uVar6 & 0x1f) & 1) != 0)) {
        fVar12 = 1.0 - fVar13;
        if (fVar14 <= 1.0 - fVar13) {
          fVar12 = fVar14;
        }
        *(float *)((int64_t)param_4 + (int64_t)(int)uVar6 * 4) = fVar12;
        fVar13 = fVar13 + fVar12;
      }
      uVar10 = uVar10 + 1;
    }
  }
LAB_1808bf30c:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_88);
}
// 函数: void function_8bf079(uint64_t param_1,int param_2,uint64_t param_3,int64_t param_4)
void function_8bf079(uint64_t param_1,int param_2,uint64_t param_3,int64_t param_4)
{
  uint64_t uVar1;
  uint64_t uVar2;
  char cVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint uVar7;
  uint64_t uVar8;
  uint64_t *unaff_RDI;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t in_R11;
  uint64_t *puVar12;
  int unaff_R15D;
  int32_t unaff_000000bc;
  bool in_ZF;
  float fVar13;
  float fVar14;
  float fVar15;
  lVar9 = unaff_RBP + -0x30;
  if (!in_ZF) {
    lVar9 = param_4;
  }
  uVar11 = 0;
  uVar8 = uVar11;
  uVar10 = uVar11;
  puVar12 = unaff_RDI;
  if (0 < param_2) {
    do {
      cVar3 = *(char *)(puVar12 + 8);
      uVar1 = *unaff_RBX;
      uVar2 = *unaff_RBX;
      *(int32_t *)(unaff_RBP + -0x58) = *(int32_t *)(unaff_RBX + 1);
      puVar5 = puVar12 + 6;
      if (cVar3 == '\0') {
        puVar5 = puVar12;
      }
      fVar14 = (float)uVar2 - (float)*puVar5;
      fVar15 = (float)((uint64_t)uVar1 >> 0x20) - (float)((uint64_t)*puVar5 >> 0x20);
      *(int32_t *)(unaff_RBP + -0x68) = *(int32_t *)(puVar5 + 1);
      fVar13 = *(float *)(unaff_RBP + -0x58) - *(float *)(unaff_RBP + -0x68);
      fVar13 = fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13;
      *(float *)(lVar9 + uVar10 * 4) = fVar13;
      uVar6 = uVar11;
      uVar4 = uVar10;
      if (3 < (int64_t)uVar10) {
        do {
          if (fVar13 < *(float *)(lVar9 + (int64_t)*(int *)(unaff_RBP + -0x50 + uVar6 * 4) * 4))
          goto joined_r0x0001808bf17d;
          if (fVar13 < *(float *)(lVar9 + (int64_t)*(int *)(unaff_RBP + -0x4c + uVar6 * 4) * 4)) {
            uVar6 = uVar6 + 1;
            goto joined_r0x0001808bf17d;
          }
          if (fVar13 < *(float *)(lVar9 + (int64_t)*(int *)(unaff_RBP + -0x48 + uVar6 * 4) * 4)) {
            uVar6 = uVar6 + 2;
            goto joined_r0x0001808bf17d;
          }
          if (fVar13 < *(float *)(lVar9 + (int64_t)*(int *)(unaff_RBP + -0x44 + uVar6 * 4) * 4)) {
            uVar6 = uVar6 + 3;
            goto joined_r0x0001808bf17d;
          }
          uVar6 = uVar6 + 4;
        } while ((int64_t)uVar6 < (int64_t)(uVar10 - 3));
      }
      while (((int64_t)uVar6 < (int64_t)uVar10 &&
             (*(float *)(lVar9 + (int64_t)*(int *)(unaff_RBP + -0x50 + uVar6 * 4) * 4) <= fVar13)))
      {
        uVar6 = uVar6 + 1;
      }
joined_r0x0001808bf17d:
      while (uVar4 = uVar4 - 1, (int64_t)uVar6 <= (int64_t)uVar4) {
        *(int32_t *)(unaff_RBP + -0x4c + uVar4 * 4) =
             *(int32_t *)(unaff_RBP + -0x50 + uVar4 * 4);
      }
      *(int *)(unaff_RBP + -0x50 + uVar6 * 4) = (int)uVar8;
      uVar7 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar7;
      uVar10 = uVar10 + 1;
      puVar12 = (uint64_t *)((int64_t)puVar12 + 0x44);
    } while ((int)uVar7 < unaff_R15D);
  }
  fVar13 = 0.0;
  if (3 < CONCAT44(unaff_000000bc,unaff_R15D)) {
    do {
      if (1.0 <= fVar13) goto LAB_1808bf30c;
      uVar7 = *(uint *)(unaff_RBP + -0x50 + uVar11 * 4);
      fVar14 = *(float *)((int64_t)(int)uVar7 * 0x44 + 0x3c + (int64_t)unaff_RDI);
      if ((0.0 < fVar14) && ((*(uint *)(unaff_RBX + 6) >> (uVar7 & 0x1f) & 1) != 0)) {
        fVar15 = 1.0 - fVar13;
        if (fVar14 <= 1.0 - fVar13) {
          fVar15 = fVar14;
        }
        *(float *)(in_R11 + (int64_t)(int)uVar7 * 4) = fVar15;
        fVar13 = fVar13 + fVar15;
      }
      if (1.0 <= fVar13) goto LAB_1808bf30c;
      uVar7 = *(uint *)(unaff_RBP + -0x4c + uVar11 * 4);
      fVar14 = *(float *)((int64_t)(int)uVar7 * 0x44 + 0x3c + (int64_t)unaff_RDI);
      if ((0.0 < fVar14) && ((*(uint *)(unaff_RBX + 6) >> (uVar7 & 0x1f) & 1) != 0)) {
        fVar15 = 1.0 - fVar13;
        if (fVar14 <= 1.0 - fVar13) {
          fVar15 = fVar14;
        }
        *(float *)(in_R11 + (int64_t)(int)uVar7 * 4) = fVar15;
        fVar13 = fVar13 + fVar15;
      }
      if (1.0 <= fVar13) goto LAB_1808bf30c;
      uVar7 = *(uint *)(unaff_RBP + -0x48 + uVar11 * 4);
      fVar14 = *(float *)((int64_t)(int)uVar7 * 0x44 + 0x3c + (int64_t)unaff_RDI);
      if ((0.0 < fVar14) && ((*(uint *)(unaff_RBX + 6) >> (uVar7 & 0x1f) & 1) != 0)) {
        fVar15 = 1.0 - fVar13;
        if (fVar14 <= 1.0 - fVar13) {
          fVar15 = fVar14;
        }
        *(float *)(in_R11 + (int64_t)(int)uVar7 * 4) = fVar15;
        fVar13 = fVar13 + fVar15;
      }
      if (1.0 <= fVar13) goto LAB_1808bf30c;
      uVar7 = *(uint *)(unaff_RBP + -0x44 + uVar11 * 4);
      fVar14 = *(float *)((int64_t)(int)uVar7 * 0x44 + 0x3c + (int64_t)unaff_RDI);
      if ((0.0 < fVar14) && ((*(uint *)(unaff_RBX + 6) >> (uVar7 & 0x1f) & 1) != 0)) {
        fVar15 = 1.0 - fVar13;
        if (fVar14 <= 1.0 - fVar13) {
          fVar15 = fVar14;
        }
        *(float *)(in_R11 + (int64_t)(int)uVar7 * 4) = fVar15;
        fVar13 = fVar13 + fVar15;
      }
      uVar11 = uVar11 + 4;
    } while ((int64_t)uVar11 < CONCAT44(unaff_000000bc,unaff_R15D) + -3);
  }
  if ((int64_t)uVar11 < CONCAT44(unaff_000000bc,unaff_R15D)) {
    do {
      if (1.0 <= fVar13) break;
      uVar7 = *(uint *)(unaff_RBP + -0x50 + uVar11 * 4);
      fVar14 = *(float *)((int64_t)(int)uVar7 * 0x44 + 0x3c + (int64_t)unaff_RDI);
      if ((0.0 < fVar14) && ((*(uint *)(unaff_RBX + 6) >> (uVar7 & 0x1f) & 1) != 0)) {
        fVar15 = 1.0 - fVar13;
        if (fVar14 <= 1.0 - fVar13) {
          fVar15 = fVar14;
        }
        *(float *)(in_R11 + (int64_t)(int)uVar7 * 4) = fVar15;
        fVar13 = fVar13 + fVar15;
      }
      uVar11 = uVar11 + 1;
    } while ((int64_t)uVar11 < CONCAT44(unaff_000000bc,unaff_R15D));
  }
LAB_1808bf30c:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x10) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_8bf097(uint64_t param_1,uint64_t param_2,int64_t param_3)
void function_8bf097(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  uint64_t uVar1;
  uint64_t uVar2;
  char cVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  uint64_t *unaff_RDI;
  uint64_t uVar8;
  uint64_t in_R10;
  int64_t in_R11;
  uint64_t *puVar9;
  int unaff_R15D;
  int32_t unaff_000000bc;
  float fVar10;
  float fVar11;
  float fVar12;
  uVar8 = in_R10 & 0xffffffff;
  puVar9 = unaff_RDI;
  do {
    cVar3 = *(char *)(puVar9 + 8);
    uVar1 = *unaff_RBX;
    uVar2 = *unaff_RBX;
    *(int32_t *)(unaff_RBP + -0x58) = *(int32_t *)(unaff_RBX + 1);
    puVar6 = puVar9 + 6;
    if (cVar3 == (char)in_R10) {
      puVar6 = puVar9;
    }
    fVar11 = (float)uVar2 - (float)*puVar6;
    fVar12 = (float)((uint64_t)uVar1 >> 0x20) - (float)((uint64_t)*puVar6 >> 0x20);
    *(int32_t *)(unaff_RBP + -0x68) = *(int32_t *)(puVar6 + 1);
    fVar10 = *(float *)(unaff_RBP + -0x58) - *(float *)(unaff_RBP + -0x68);
    fVar10 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
    *(float *)(param_3 + uVar8 * 4) = fVar10;
    uVar7 = in_R10;
    uVar5 = uVar8;
    if (3 < (int64_t)uVar8) {
      do {
        if (fVar10 < *(float *)(param_3 + (int64_t)*(int *)(unaff_RBP + -0x50 + uVar7 * 4) * 4))
        goto joined_r0x0001808bf17d;
        if (fVar10 < *(float *)(param_3 + (int64_t)*(int *)(unaff_RBP + -0x4c + uVar7 * 4) * 4)) {
          uVar7 = uVar7 + 1;
          goto joined_r0x0001808bf17d;
        }
        if (fVar10 < *(float *)(param_3 + (int64_t)*(int *)(unaff_RBP + -0x48 + uVar7 * 4) * 4)) {
          uVar7 = uVar7 + 2;
          goto joined_r0x0001808bf17d;
        }
        if (fVar10 < *(float *)(param_3 + (int64_t)*(int *)(unaff_RBP + -0x44 + uVar7 * 4) * 4)) {
          uVar7 = uVar7 + 3;
          goto joined_r0x0001808bf17d;
        }
        uVar7 = uVar7 + 4;
      } while ((int64_t)uVar7 < (int64_t)(uVar8 - 3));
    }
    while (((int64_t)uVar7 < (int64_t)uVar8 &&
           (*(float *)(param_3 + (int64_t)*(int *)(unaff_RBP + -0x50 + uVar7 * 4) * 4) <= fVar10)))
    {
      uVar7 = uVar7 + 1;
    }
joined_r0x0001808bf17d:
    while (uVar5 = uVar5 - 1, (int64_t)uVar7 <= (int64_t)uVar5) {
      *(int32_t *)(unaff_RBP + -0x4c + uVar5 * 4) =
           *(int32_t *)(unaff_RBP + -0x50 + uVar5 * 4);
    }
    *(int *)(unaff_RBP + -0x50 + uVar7 * 4) = unaff_ESI;
    uVar8 = uVar8 + 1;
    unaff_ESI = unaff_ESI + 1;
    puVar9 = (uint64_t *)((int64_t)puVar9 + 0x44);
  } while (unaff_ESI < unaff_R15D);
  fVar10 = 0.0;
  if (3 < CONCAT44(unaff_000000bc,unaff_R15D)) {
    do {
      if (1.0 <= fVar10) goto LAB_1808bf30c;
      uVar4 = *(uint *)(unaff_RBP + -0x50 + in_R10 * 4);
      fVar11 = *(float *)((int64_t)(int)uVar4 * 0x44 + 0x3c + (int64_t)unaff_RDI);
      if ((0.0 < fVar11) && ((*(uint *)(unaff_RBX + 6) >> (uVar4 & 0x1f) & 1) != 0)) {
        fVar12 = 1.0 - fVar10;
        if (fVar11 <= 1.0 - fVar10) {
          fVar12 = fVar11;
        }
        *(float *)(in_R11 + (int64_t)(int)uVar4 * 4) = fVar12;
        fVar10 = fVar10 + fVar12;
      }
      if (1.0 <= fVar10) goto LAB_1808bf30c;
      uVar4 = *(uint *)(unaff_RBP + -0x4c + in_R10 * 4);
      fVar11 = *(float *)((int64_t)(int)uVar4 * 0x44 + 0x3c + (int64_t)unaff_RDI);
      if ((0.0 < fVar11) && ((*(uint *)(unaff_RBX + 6) >> (uVar4 & 0x1f) & 1) != 0)) {
        fVar12 = 1.0 - fVar10;
        if (fVar11 <= 1.0 - fVar10) {
          fVar12 = fVar11;
        }
        *(float *)(in_R11 + (int64_t)(int)uVar4 * 4) = fVar12;
        fVar10 = fVar10 + fVar12;
      }
      if (1.0 <= fVar10) goto LAB_1808bf30c;
      uVar4 = *(uint *)(unaff_RBP + -0x48 + in_R10 * 4);
      fVar11 = *(float *)((int64_t)(int)uVar4 * 0x44 + 0x3c + (int64_t)unaff_RDI);
      if ((0.0 < fVar11) && ((*(uint *)(unaff_RBX + 6) >> (uVar4 & 0x1f) & 1) != 0)) {
        fVar12 = 1.0 - fVar10;
        if (fVar11 <= 1.0 - fVar10) {
          fVar12 = fVar11;
        }
        *(float *)(in_R11 + (int64_t)(int)uVar4 * 4) = fVar12;
        fVar10 = fVar10 + fVar12;
      }
      if (1.0 <= fVar10) goto LAB_1808bf30c;
      uVar4 = *(uint *)(unaff_RBP + -0x44 + in_R10 * 4);
      fVar11 = *(float *)((int64_t)(int)uVar4 * 0x44 + 0x3c + (int64_t)unaff_RDI);
      if ((0.0 < fVar11) && ((*(uint *)(unaff_RBX + 6) >> (uVar4 & 0x1f) & 1) != 0)) {
        fVar12 = 1.0 - fVar10;
        if (fVar11 <= 1.0 - fVar10) {
          fVar12 = fVar11;
        }
        *(float *)(in_R11 + (int64_t)(int)uVar4 * 4) = fVar12;
        fVar10 = fVar10 + fVar12;
      }
      in_R10 = in_R10 + 4;
    } while ((int64_t)in_R10 < CONCAT44(unaff_000000bc,unaff_R15D) + -3);
  }
  if ((int64_t)in_R10 < CONCAT44(unaff_000000bc,unaff_R15D)) {
    do {
      if (1.0 <= fVar10) break;
      uVar4 = *(uint *)(unaff_RBP + -0x50 + in_R10 * 4);
      fVar11 = *(float *)((int64_t)(int)uVar4 * 0x44 + 0x3c + (int64_t)unaff_RDI);
      if ((0.0 < fVar11) && ((*(uint *)(unaff_RBX + 6) >> (uVar4 & 0x1f) & 1) != 0)) {
        fVar12 = 1.0 - fVar10;
        if (fVar11 <= 1.0 - fVar10) {
          fVar12 = fVar11;
        }
        *(float *)(in_R11 + (int64_t)(int)uVar4 * 4) = fVar12;
        fVar10 = fVar10 + fVar12;
      }
      in_R10 = in_R10 + 1;
    } while ((int64_t)in_R10 < CONCAT44(unaff_000000bc,unaff_R15D));
  }
LAB_1808bf30c:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x10) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_8bf1ae(void)
void function_8bf1ae(void)
{
  float fVar1;
  uint uVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t in_R10;
  int64_t in_R11;
  int64_t unaff_R15;
  float fVar3;
  float fVar4;
  fVar4 = 0.0;
  if (3 < unaff_R15) {
    do {
      if (1.0 <= fVar4) goto LAB_1808bf30c;
      uVar2 = *(uint *)(unaff_RBP + -0x50 + in_R10 * 4);
      fVar1 = *(float *)((int64_t)(int)uVar2 * 0x44 + 0x3c + unaff_RDI);
      if ((0.0 < fVar1) && ((*(uint *)(unaff_RBX + 0x30) >> (uVar2 & 0x1f) & 1) != 0)) {
        fVar3 = 1.0 - fVar4;
        if (fVar1 <= 1.0 - fVar4) {
          fVar3 = fVar1;
        }
        *(float *)(in_R11 + (int64_t)(int)uVar2 * 4) = fVar3;
        fVar4 = fVar4 + fVar3;
      }
      if (1.0 <= fVar4) goto LAB_1808bf30c;
      uVar2 = *(uint *)(unaff_RBP + -0x4c + in_R10 * 4);
      fVar1 = *(float *)((int64_t)(int)uVar2 * 0x44 + 0x3c + unaff_RDI);
      if ((0.0 < fVar1) && ((*(uint *)(unaff_RBX + 0x30) >> (uVar2 & 0x1f) & 1) != 0)) {
        fVar3 = 1.0 - fVar4;
        if (fVar1 <= 1.0 - fVar4) {
          fVar3 = fVar1;
        }
        *(float *)(in_R11 + (int64_t)(int)uVar2 * 4) = fVar3;
        fVar4 = fVar4 + fVar3;
      }
      if (1.0 <= fVar4) goto LAB_1808bf30c;
      uVar2 = *(uint *)(unaff_RBP + -0x48 + in_R10 * 4);
      fVar1 = *(float *)((int64_t)(int)uVar2 * 0x44 + 0x3c + unaff_RDI);
      if ((0.0 < fVar1) && ((*(uint *)(unaff_RBX + 0x30) >> (uVar2 & 0x1f) & 1) != 0)) {
        fVar3 = 1.0 - fVar4;
        if (fVar1 <= 1.0 - fVar4) {
          fVar3 = fVar1;
        }
        *(float *)(in_R11 + (int64_t)(int)uVar2 * 4) = fVar3;
        fVar4 = fVar4 + fVar3;
      }
      if (1.0 <= fVar4) goto LAB_1808bf30c;
      uVar2 = *(uint *)(unaff_RBP + -0x44 + in_R10 * 4);
      fVar1 = *(float *)((int64_t)(int)uVar2 * 0x44 + 0x3c + unaff_RDI);
      if ((0.0 < fVar1) && ((*(uint *)(unaff_RBX + 0x30) >> (uVar2 & 0x1f) & 1) != 0)) {
        fVar3 = 1.0 - fVar4;
        if (fVar1 <= 1.0 - fVar4) {
          fVar3 = fVar1;
        }
        *(float *)(in_R11 + (int64_t)(int)uVar2 * 4) = fVar3;
        fVar4 = fVar4 + fVar3;
      }
      in_R10 = in_R10 + 4;
    } while (in_R10 < unaff_R15 + -3);
  }
  while ((in_R10 < unaff_R15 && (fVar4 < 1.0))) {
    uVar2 = *(uint *)(unaff_RBP + -0x50 + in_R10 * 4);
    fVar1 = *(float *)((int64_t)(int)uVar2 * 0x44 + 0x3c + unaff_RDI);
    if ((0.0 < fVar1) && ((*(uint *)(unaff_RBX + 0x30) >> (uVar2 & 0x1f) & 1) != 0)) {
      fVar3 = 1.0 - fVar4;
      if (fVar1 <= 1.0 - fVar4) {
        fVar3 = fVar1;
      }
      *(float *)(in_R11 + (int64_t)(int)uVar2 * 4) = fVar3;
      fVar4 = fVar4 + fVar3;
    }
    in_R10 = in_R10 + 1;
  }
LAB_1808bf30c:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x10) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_8bf1d0(uint64_t param_1,float param_2,float param_3,float param_4)
void function_8bf1d0(uint64_t param_1,float param_2,float param_3,float param_4)
{
  float fVar1;
  uint uVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t in_R10;
  int64_t in_R11;
  int64_t unaff_R15;
  float fVar3;
  do {
    if (param_3 <= param_2) goto LAB_1808bf30c;
    uVar2 = *(uint *)(unaff_RBP + -0x50 + in_R10 * 4);
    fVar1 = *(float *)((int64_t)(int)uVar2 * 0x44 + 0x3c + unaff_RDI);
    if ((param_4 < fVar1) && ((*(uint *)(unaff_RBX + 0x30) >> (uVar2 & 0x1f) & 1) != 0)) {
      fVar3 = param_3 - param_2;
      if (fVar1 <= param_3 - param_2) {
        fVar3 = fVar1;
      }
      *(float *)(in_R11 + (int64_t)(int)uVar2 * 4) = fVar3;
      param_2 = param_2 + fVar3;
    }
    if (param_3 <= param_2) goto LAB_1808bf30c;
    uVar2 = *(uint *)(unaff_RBP + -0x4c + in_R10 * 4);
    fVar1 = *(float *)((int64_t)(int)uVar2 * 0x44 + 0x3c + unaff_RDI);
    if ((param_4 < fVar1) && ((*(uint *)(unaff_RBX + 0x30) >> (uVar2 & 0x1f) & 1) != 0)) {
      fVar3 = param_3 - param_2;
      if (fVar1 <= param_3 - param_2) {
        fVar3 = fVar1;
      }
      *(float *)(in_R11 + (int64_t)(int)uVar2 * 4) = fVar3;
      param_2 = param_2 + fVar3;
    }
    if (param_3 <= param_2) goto LAB_1808bf30c;
    uVar2 = *(uint *)(unaff_RBP + -0x48 + in_R10 * 4);
    fVar1 = *(float *)((int64_t)(int)uVar2 * 0x44 + 0x3c + unaff_RDI);
    if ((param_4 < fVar1) && ((*(uint *)(unaff_RBX + 0x30) >> (uVar2 & 0x1f) & 1) != 0)) {
      fVar3 = param_3 - param_2;
      if (fVar1 <= param_3 - param_2) {
        fVar3 = fVar1;
      }
      *(float *)(in_R11 + (int64_t)(int)uVar2 * 4) = fVar3;
      param_2 = param_2 + fVar3;
    }
    if (param_3 <= param_2) goto LAB_1808bf30c;
    uVar2 = *(uint *)(unaff_RBP + -0x44 + in_R10 * 4);
    fVar1 = *(float *)((int64_t)(int)uVar2 * 0x44 + 0x3c + unaff_RDI);
    if ((param_4 < fVar1) && ((*(uint *)(unaff_RBX + 0x30) >> (uVar2 & 0x1f) & 1) != 0)) {
      fVar3 = param_3 - param_2;
      if (fVar1 <= param_3 - param_2) {
        fVar3 = fVar1;
      }
      *(float *)(in_R11 + (int64_t)(int)uVar2 * 4) = fVar3;
      param_2 = param_2 + fVar3;
    }
    in_R10 = in_R10 + 4;
  } while (in_R10 < unaff_R15 + -3);
  while ((in_R10 < unaff_R15 && (param_2 < param_3))) {
    uVar2 = *(uint *)(unaff_RBP + -0x50 + in_R10 * 4);
    fVar1 = *(float *)((int64_t)(int)uVar2 * 0x44 + 0x3c + unaff_RDI);
    if ((param_4 < fVar1) && ((*(uint *)(unaff_RBX + 0x30) >> (uVar2 & 0x1f) & 1) != 0)) {
      fVar3 = param_3 - param_2;
      if (fVar1 <= param_3 - param_2) {
        fVar3 = fVar1;
      }
      *(float *)(in_R11 + (int64_t)(int)uVar2 * 4) = fVar3;
      param_2 = param_2 + fVar3;
    }
    in_R10 = in_R10 + 1;
  }
LAB_1808bf30c:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x10) ^ (uint64_t)&local_buffer_00000000);
}