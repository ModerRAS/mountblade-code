#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part252.c - 1 个函数
// 函数: void function_80f800(int64_t param_1,float *param_2,int *param_3,int64_t param_4,int param_5,
void function_80f800(int64_t param_1,float *param_2,int *param_3,int64_t param_4,int param_5,
                  int param_6)
{
  int *piVar1;
  int64_t *plVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  int32_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  short *psVar13;
  short sVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint uVar17;
  uint64_t uVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  uint *puVar22;
  float fVar23;
  float fVar24;
  int8_t stack_array_f8 [32];
  uint local_var_d8;
  uint local_var_d4;
  uint64_t local_var_d0;
  int64_t lStack_c8;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  uint local_var_b4;
  int *piStack_b0;
  int64_t lStack_a8;
  int *piStack_a0;
  float *pfStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  int aiStack_68 [4];
  uint64_t local_var_58;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  iStack_c0 = *(int *)(param_4 + 0x50) + 1;
  param_6 = *(int *)(param_4 + 4) - param_6;
  lStack_88 = (int64_t)param_5;
  pfVar9 = param_2 + 0x240;
  iVar10 = *(int *)(param_4 + 0x48);
  aiStack_68[0] = *(int *)(param_4 + 8);
  iStack_bc = 0x120 - aiStack_68[0] >> 1;
  iVar11 = *(int *)(param_4 + 0x44);
  uVar8 = 0;
  iVar5 = 0;
  aiStack_68[2] = 0;
  aiStack_68[1] = aiStack_68[2];
  if (iVar11 < aiStack_68[0]) {
    if (iVar10 < aiStack_68[0]) {
      aiStack_68[2] = aiStack_68[0] - iVar10;
      aiStack_68[0] = iVar11;
      aiStack_68[1] = iVar10 - iVar11;
    }
    else {
      aiStack_68[1] = aiStack_68[0] - iVar11;
      aiStack_68[0] = iVar11;
    }
  }
  if (aiStack_68[0] < 0) {
    aiStack_68[0] = iVar5;
  }
  if (aiStack_68[1] < 0) {
    aiStack_68[1] = iVar5;
  }
  fVar24 = 0.0;
  if (aiStack_68[2] < 0) {
    aiStack_68[2] = iVar5;
  }
  lStack_c8 = param_4;
  pfStack_98 = param_2;
  lStack_80 = param_1;
  local_var_d0._0_4_ = param_6;
  if (*(int *)(param_4 + 0x10) == 2) {
    local_var_d8 = 0;
    local_var_b4 = 0;
    local_var_d4 = 0;
    if (*(int *)(param_4 + 0x14) == 0) {
      local_var_70 = 0xffffffffffffffff;
      piVar20 = *(int **)(lStack_88 * 0x18 + 0x180c45ab8);
      piStack_a0 = *(int **)(lStack_88 * 0x18 + 0x180c45b98);
      local_var_78 = 0xffffffffffffffff;
    }
    else {
      piVar20 = *(int **)(lStack_88 * 0x18 + 0x180c45ab0);
      piStack_a0 = *(int **)(lStack_88 * 0x18 + 0x180c45b90);
      local_var_70 = 0xffffffff00000002;
      local_var_78 = 0x200000002;
    }
    lStack_90 = 0;
    lStack_a8 = 0;
    uVar15 = uVar8;
    uVar16 = uVar8;
    uVar18 = uVar8;
    do {
      iStack_b8 = aiStack_68[lStack_a8];
      piStack_b0 = (int *)((uint64_t)*(uint *)(param_4 + 0x18 + lStack_a8 * 4) * 0x10 + 0x180beb380
                          );
      if (iStack_b8 != 0) {
        do {
          uVar17 = (uint)uVar15;
          uVar12 = (uint)uVar16;
          iVar10 = (int)uVar18;
          if (iVar10 == 0) {
            piVar1 = piVar20 + 1;
            uVar12 = piVar20[2];
            uVar17 = piVar20[3];
            iVar10 = *piVar20;
            piVar20 = piVar20 + 4;
            param_2 = pfStack_98 + *piVar1;
            iVar11 = *param_3;
            pfVar9 = param_2 + 0x240;
            param_3 = param_3 + 1;
            if (uVar12 == 3) {
              lVar7 = *(int64_t *)(lStack_c8 + 0x70);
              local_var_d8 = 1;
              lStack_90 = 1;
            }
            else {
              lVar7 = *(int64_t *)(lStack_c8 + 0x58 + (int64_t)(int)uVar12 * 8);
              local_var_d8 = 3;
              lStack_90 = 3;
            }
            fVar24 = *(float *)(lVar7 + (int64_t)(iVar11 << ((byte)iStack_c0 & 0x1f)) * 4);
            local_var_d4 = uVar17;
            local_var_b4 = uVar12;
          }
          psVar13 = *(short **)(piStack_b0 + 2);
          sVar14 = *psVar13;
          while (uVar21 = (uint)sVar14, sVar14 < 0) {
            lVar7 = *(int64_t *)(param_1 + 0x178);
            psVar13 = psVar13 + 1;
            iVar11 = *(int *)(lVar7 + 0x48a8);
            cVar4 = **(char **)(lVar7 + 0x48b0);
            *(int *)(lVar7 + 0x48a8) = iVar11 + 1;
            plVar2 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
            *plVar2 = *plVar2 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
            puVar22 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
            *puVar22 = *puVar22 & 7;
            if ((char)(cVar4 << ((byte)iVar11 & 0x1f)) < '\0') {
              psVar13 = psVar13 + -(int64_t)(int)uVar21;
            }
            param_6 = param_6 + -1;
            sVar14 = *psVar13;
          }
          local_var_d0 = (int64_t)(int)uVar12;
          iVar11 = (int)uVar21 >> 4;
          uVar21 = uVar21 & 0xf;
          if (iVar11 == 0xf) {
            *(uint *)((int64_t)&local_var_78 + local_var_d0 * 4) = uVar17;
            param_6 = param_6 + (-1 - *piStack_b0);
            iVar5 = SystemFunction_000180815aa0(param_1);
            lVar7 = *(int64_t *)(param_1 + 0x178);
            iVar11 = *(int *)(lVar7 + 0x48a8);
            cVar4 = **(char **)(lVar7 + 0x48b0);
            *(int *)(lVar7 + 0x48a8) = iVar11 + 1;
            plVar2 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
            *plVar2 = *plVar2 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
            puVar22 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
            *puVar22 = *puVar22 & 7;
            fVar23 = fVar24 * *(float *)((int64_t)(iVar5 + 0xf) * 4 + 0x180c398a0);
            if ((char)(cVar4 << ((byte)iVar11 & 0x1f)) < '\0') {
              *pfVar9 = *param_2 + fVar23;
              *param_2 = *param_2 - fVar23;
            }
            else {
              *pfVar9 = *param_2 - fVar23;
              *param_2 = fVar23 + *param_2;
            }
          }
          else if (iVar11 == 0) {
            *pfVar9 = *param_2;
          }
          else {
            *(uint *)((int64_t)&local_var_78 + local_var_d0 * 4) = uVar17;
            lVar7 = *(int64_t *)(param_1 + 0x178);
            iVar5 = *(int *)(lVar7 + 0x48a8);
            cVar4 = **(char **)(lVar7 + 0x48b0);
            *(int *)(lVar7 + 0x48a8) = iVar5 + 1;
            plVar2 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
            *plVar2 = *plVar2 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
            puVar22 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
            *puVar22 = *puVar22 & 7;
            fVar23 = fVar24 * *(float *)((int64_t)iVar11 * 4 + 0x180c398a0);
            if ((char)(cVar4 << ((byte)iVar5 & 0x1f)) < '\0') {
              param_6 = param_6 + -1;
              *pfVar9 = *param_2 + fVar23;
              *param_2 = *param_2 - fVar23;
            }
            else {
              param_6 = param_6 + -1;
              *pfVar9 = *param_2 - fVar23;
              *param_2 = fVar23 + *param_2;
            }
          }
          pfVar9 = pfVar9 + lStack_90;
          param_2 = param_2 + lStack_90;
          if (uVar21 == 0xf) {
            *(uint *)((int64_t)&local_var_78 + local_var_d0 * 4) = local_var_d4;
            param_6 = param_6 + (-1 - *piStack_b0);
            iVar5 = SystemFunction_000180815aa0(param_1);
            lVar7 = *(int64_t *)(param_1 + 0x178);
            uVar15 = (uint64_t)local_var_d4;
            iVar11 = *(int *)(lVar7 + 0x48a8);
            cVar4 = **(char **)(lVar7 + 0x48b0);
            *(int *)(lVar7 + 0x48a8) = iVar11 + 1;
            plVar2 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
            *plVar2 = *plVar2 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
            puVar22 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
            *puVar22 = *puVar22 & 7;
            fVar23 = fVar24 * *(float *)((int64_t)(iVar5 + 0xf) * 4 + 0x180c398a0);
            if ((char)(cVar4 << ((byte)iVar11 & 0x1f)) < '\0') {
              *pfVar9 = *param_2 + fVar23;
              *param_2 = *param_2 - fVar23;
            }
            else {
              *pfVar9 = *param_2 - fVar23;
              *param_2 = fVar23 + *param_2;
            }
          }
          else {
            uVar15 = (uint64_t)local_var_d4;
            if (uVar21 == 0) {
              *pfVar9 = *param_2;
            }
            else {
              *(uint *)((int64_t)&local_var_78 + local_var_d0 * 4) = local_var_d4;
              lVar7 = *(int64_t *)(param_1 + 0x178);
              iVar11 = *(int *)(lVar7 + 0x48a8);
              cVar4 = **(char **)(lVar7 + 0x48b0);
              *(int *)(lVar7 + 0x48a8) = iVar11 + 1;
              plVar2 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
              *plVar2 = *plVar2 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3)
              ;
              puVar22 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
              *puVar22 = *puVar22 & 7;
              fVar23 = fVar24 * *(float *)((uint64_t)uVar21 * 4 + 0x180c398a0);
              if ((char)(cVar4 << ((byte)iVar11 & 0x1f)) < '\0') {
                param_6 = param_6 + -1;
                *pfVar9 = *param_2 + fVar23;
                *param_2 = *param_2 - fVar23;
              }
              else {
                param_6 = param_6 + -1;
                *pfVar9 = *param_2 - fVar23;
                *param_2 = fVar23 + *param_2;
              }
            }
          }
          uVar8 = (uint64_t)(int)local_var_d8;
          uVar18 = (uint64_t)(iVar10 - 1);
          uVar16 = (uint64_t)local_var_b4;
          pfVar9 = pfVar9 + uVar8;
          param_2 = param_2 + uVar8;
          iStack_b8 = iStack_b8 + -1;
        } while (iStack_b8 != 0);
        iStack_b8 = 0;
        param_4 = lStack_c8;
        local_var_d0._0_4_ = param_6;
      }
      lStack_a8 = lStack_a8 + 1;
    } while (lStack_a8 < 2);
    while ((iStack_bc != 0 && (local_var_d0._0_4_ = param_6, 0 < param_6))) {
      psVar13 = *(short **)((uint64_t)*(uint *)(param_4 + 0x54) * 0x10 + 0x180beb588);
      sVar14 = *psVar13;
      while (sVar14 < 0) {
        psVar13 = psVar13 + 1;
        if (param_6 + -1 < 0) {
          sVar14 = 0;
          break;
        }
        lVar7 = *(int64_t *)(param_1 + 0x178);
        iVar10 = *(int *)(lVar7 + 0x48a8);
        cVar4 = **(char **)(lVar7 + 0x48b0);
        *(int *)(lVar7 + 0x48a8) = iVar10 + 1;
        plVar2 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
        *plVar2 = *plVar2 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
        puVar22 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
        *puVar22 = *puVar22 & 7;
        if ((char)(cVar4 << ((byte)iVar10 & 0x1f)) < '\0') {
          psVar13 = psVar13 + -(int64_t)sVar14;
        }
        param_6 = param_6 + -1;
        sVar14 = *psVar13;
      }
      uVar8 = (uint64_t)local_var_d8;
      uVar12 = 0;
      do {
        iVar10 = (int)uVar18;
        if ((uVar12 & 1) == 0) {
          if (iVar10 == 0) {
            piVar1 = piVar20 + 2;
            uVar16 = (uint64_t)*piVar1;
            iVar10 = *piVar20;
            param_2 = pfStack_98 + piVar20[1];
            local_var_d4 = piVar20[3];
            pfVar9 = param_2 + 0x240;
            piVar20 = piVar20 + 4;
            iVar11 = *param_3;
            param_3 = param_3 + 1;
            if (*piVar1 == 3) {
              lVar7 = *(int64_t *)(lStack_c8 + 0x70);
              uVar8 = 1;
            }
            else {
              lVar7 = *(int64_t *)(lStack_c8 + 0x58 + uVar16 * 8);
              uVar8 = 3;
            }
            fVar24 = *(float *)(lVar7 + (int64_t)(iVar11 << ((byte)iStack_c0 & 0x1f)) * 4);
            local_var_d8 = (uint)uVar8;
          }
          uVar18 = (uint64_t)(iVar10 - 1);
        }
        if (((int)sVar14 & 8 >> ((byte)uVar12 & 0x1f)) == 0) {
          *pfVar9 = *param_2;
        }
        else {
          iVar10 = param_6 + -1;
          *(uint *)((int64_t)&local_var_78 + (int64_t)(int)uVar16 * 4) = local_var_d4;
          if (iVar10 < 0) break;
          lVar7 = *(int64_t *)(param_1 + 0x178);
          iVar11 = *(int *)(lVar7 + 0x48a8);
          cVar4 = **(char **)(lVar7 + 0x48b0);
          *(int *)(lVar7 + 0x48a8) = iVar11 + 1;
          plVar2 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
          uVar8 = (uint64_t)local_var_d8;
          puVar22 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
          *puVar22 = *puVar22 & 7;
          param_6 = iVar10;
          if ((char)(cVar4 << ((byte)iVar11 & 0x1f)) < '\0') {
            *pfVar9 = *param_2 + fVar24;
            *param_2 = *param_2 - fVar24;
          }
          else {
            *pfVar9 = *param_2 - fVar24;
            *param_2 = fVar24 + *param_2;
          }
        }
        uVar12 = uVar12 + 1;
        pfVar9 = pfVar9 + (int)uVar8;
        param_2 = param_2 + (int)uVar8;
      } while ((int)uVar12 < 4);
      iStack_bc = iStack_bc + -1;
      param_4 = lStack_c8;
      local_var_d0._0_4_ = param_6;
    }
    if (piVar20 < piStack_a0) {
      lVar7 = (int64_t)(int)uVar8;
      do {
        iVar10 = (int)uVar18;
        if (iVar10 == 0) {
          iVar10 = *piVar20;
          lVar7 = 1;
          piVar1 = piVar20 + 2;
          param_2 = pfStack_98 + piVar20[1];
          piVar20 = piVar20 + 4;
          uVar8 = 1;
          if (*piVar1 != 3) {
            uVar8 = 3;
            lVar7 = 3;
          }
          pfVar9 = param_2 + 0x240;
        }
        uVar18 = (uint64_t)(iVar10 - 1);
        *pfVar9 = *param_2;
        pfVar9[lVar7] = param_2[lVar7];
        pfVar9 = pfVar9 + lVar7 + (int)uVar8;
        param_2 = param_2 + lVar7 + (int)uVar8;
        param_1 = lStack_80;
        param_6 = (int)local_var_d0;
      } while (piVar20 < piStack_a0);
    }
    local_var_78._4_4_ = (int)((uint64_t)local_var_78 >> 0x20);
    local_var_70._4_4_ = (int)((uint64_t)local_var_70 >> 0x20);
    *(int *)(lStack_c8 + 0x30) = (int)local_var_78 + 1;
    iVar10 = local_var_78._4_4_ + 1;
    if (local_var_78._4_4_ < (int)local_var_78) {
      local_var_78._4_4_ = (int)local_var_78;
    }
    *(int *)(lStack_c8 + 0x34) = iVar10;
    *(int *)(lStack_c8 + 0x38) = (int)local_var_70 + 1;
    if ((int)local_var_70 < local_var_78._4_4_) {
      local_var_70._0_4_ = local_var_78._4_4_;
    }
    *(int *)(lStack_c8 + 0x3c) = local_var_70._4_4_ + 1;
    if ((int)local_var_70 != -1) {
      uVar6 = *(int32_t *)((lStack_88 * 0xe + (int64_t)(int)local_var_70) * 4 + 0x180c42734);
      goto LAB_18081083d;
    }
    uVar8 = (uint64_t)(local_var_70._4_4_ + 1);
  }
  else {
    piVar20 = (int *)0x180c46a70;
    local_var_d8 = 0;
    if (*(int *)(param_4 + 0x4c) != 0) {
      piVar20 = (int *)0x180beb5a0;
    }
    local_var_d4 = 0xffffffff;
    lStack_a8 = 0;
    puVar22 = *(uint **)(lStack_88 * 0x18 + 0x180c45ac0);
    uVar16 = uVar8;
    piStack_a0 = piVar20;
    do {
      piStack_b0 = (int *)((uint64_t)*(uint *)(param_4 + 0x18 + lStack_a8 * 4) * 0x10 + 0x180beb380
                          );
      uVar12 = local_var_d4;
      for (iStack_b8 = aiStack_68[lStack_a8]; iStack_b8 != 0; iStack_b8 = iStack_b8 + -1) {
        local_var_d4 = (uint)uVar8;
        uVar17 = (uint)uVar16;
        if (uVar17 == 0) {
          iVar10 = *param_3;
          param_3 = param_3 + 1;
          iVar11 = *piVar20;
          piVar20 = piVar20 + 1;
          local_var_d4 = puVar22[1];
          uVar8 = (uint64_t)local_var_d4;
          uVar17 = *puVar22;
          uVar16 = (uint64_t)uVar17;
          puVar22 = puVar22 + 2;
          iVar10 = iVar10 + iVar11 << ((byte)iStack_c0 & 0x1f);
          local_var_d8 = local_var_d4;
          piStack_a0 = piVar20;
          if (0x179 < iVar10) break;
          fVar24 = *(float *)(*(int64_t *)(param_4 + 0x70) + (int64_t)iVar10 * 4);
        }
        psVar13 = *(short **)(piStack_b0 + 2);
        sVar14 = *psVar13;
        while (uVar21 = (uint)sVar14, sVar14 < 0) {
          lVar7 = *(int64_t *)(param_1 + 0x178);
          psVar13 = psVar13 + 1;
          iVar10 = *(int *)(lVar7 + 0x48a8);
          cVar4 = **(char **)(lVar7 + 0x48b0);
          *(int *)(lVar7 + 0x48a8) = iVar10 + 1;
          plVar2 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
          puVar3 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
          *puVar3 = *puVar3 & 7;
          if ((char)(cVar4 << ((byte)iVar10 & 0x1f)) < '\0') {
            psVar13 = psVar13 + -(int64_t)(int)uVar21;
          }
          param_6 = param_6 + -1;
          sVar14 = *psVar13;
        }
        uVar19 = uVar21 & 0xf;
        iVar10 = (int)uVar21 >> 4;
        if (iVar10 == 0xf) {
          param_6 = param_6 + (-1 - *piStack_b0);
          iVar11 = SystemFunction_000180815aa0(param_1);
          lVar7 = *(int64_t *)(param_1 + 0x178);
          iVar10 = *(int *)(lVar7 + 0x48a8);
          cVar4 = **(char **)(lVar7 + 0x48b0);
          *(int *)(lVar7 + 0x48a8) = iVar10 + 1;
          plVar2 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
          puVar3 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
          *puVar3 = *puVar3 & 7;
          fVar23 = fVar24 * *(float *)((int64_t)(iVar11 + 0xf) * 4 + 0x180c398a0);
          if ((char)(cVar4 << ((byte)iVar10 & 0x1f)) < '\0') {
            *pfVar9 = *param_2 + fVar23;
            *param_2 = *param_2 - fVar23;
          }
          else {
            *pfVar9 = *param_2 - fVar23;
            *param_2 = fVar23 + *param_2;
          }
        }
        else if (iVar10 == 0) {
          *pfVar9 = *param_2;
          local_var_d4 = uVar12;
        }
        else {
          lVar7 = *(int64_t *)(param_1 + 0x178);
          iVar11 = *(int *)(lVar7 + 0x48a8);
          cVar4 = **(char **)(lVar7 + 0x48b0);
          *(int *)(lVar7 + 0x48a8) = iVar11 + 1;
          plVar2 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
          puVar3 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
          *puVar3 = *puVar3 & 7;
          fVar23 = fVar24 * *(float *)((int64_t)iVar10 * 4 + 0x180c398a0);
          if ((char)(cVar4 << ((byte)iVar11 & 0x1f)) < '\0') {
            param_6 = param_6 + -1;
            *pfVar9 = *param_2 + fVar23;
            *param_2 = *param_2 - fVar23;
          }
          else {
            param_6 = param_6 + -1;
            *pfVar9 = *param_2 - fVar23;
            *param_2 = fVar23 + *param_2;
          }
        }
        if (uVar19 == 0xf) {
          local_var_d4 = local_var_d8;
          param_6 = param_6 + (-1 - *piStack_b0);
          iVar11 = SystemFunction_000180815aa0(param_1);
          lVar7 = *(int64_t *)(param_1 + 0x178);
          uVar8 = (uint64_t)local_var_d8;
          iVar10 = *(int *)(lVar7 + 0x48a8);
          cVar4 = **(char **)(lVar7 + 0x48b0);
          *(int *)(lVar7 + 0x48a8) = iVar10 + 1;
          plVar2 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
          puVar3 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
          *puVar3 = *puVar3 & 7;
          fVar23 = fVar24 * *(float *)((int64_t)(iVar11 + 0xf) * 4 + 0x180c398a0);
          if ((char)(cVar4 << ((byte)iVar10 & 0x1f)) < '\0') {
            pfVar9[1] = fVar23 + param_2[1];
            param_2[1] = param_2[1] - fVar23;
          }
          else {
            pfVar9[1] = param_2[1] - fVar23;
            param_2[1] = fVar23 + param_2[1];
          }
        }
        else {
          uVar8 = (uint64_t)local_var_d8;
          if (uVar19 == 0) {
            pfVar9[1] = param_2[1];
          }
          else {
            lVar7 = *(int64_t *)(param_1 + 0x178);
            local_var_d4 = local_var_d8;
            iVar10 = *(int *)(lVar7 + 0x48a8);
            cVar4 = **(char **)(lVar7 + 0x48b0);
            *(int *)(lVar7 + 0x48a8) = iVar10 + 1;
            plVar2 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
            *plVar2 = *plVar2 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
            puVar3 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
            *puVar3 = *puVar3 & 7;
            fVar23 = fVar24 * *(float *)((uint64_t)uVar19 * 4 + 0x180c398a0);
            if ((char)(cVar4 << ((byte)iVar10 & 0x1f)) < '\0') {
              param_6 = param_6 + -1;
              pfVar9[1] = fVar23 + param_2[1];
              param_2[1] = param_2[1] - fVar23;
            }
            else {
              param_6 = param_6 + -1;
              pfVar9[1] = param_2[1] - fVar23;
              param_2[1] = fVar23 + param_2[1];
            }
          }
        }
        uVar16 = (uint64_t)(uVar17 - 1);
        pfVar9 = pfVar9 + 2;
        param_2 = param_2 + 2;
        param_4 = lStack_c8;
        piVar20 = piStack_a0;
        uVar12 = local_var_d4;
      }
      lStack_a8 = lStack_a8 + 1;
      local_var_d4 = uVar12;
    } while (lStack_a8 < 3);
    while ((iStack_bc != 0 && (0 < param_6))) {
      psVar13 = *(short **)((uint64_t)*(uint *)(param_4 + 0x54) * 0x10 + 0x180beb588);
      sVar14 = *psVar13;
      while (sVar14 < 0) {
        psVar13 = psVar13 + 1;
        if (param_6 + -1 < 0) {
          sVar14 = 0;
          param_4 = lStack_c8;
          break;
        }
        lVar7 = *(int64_t *)(param_1 + 0x178);
        iVar10 = *(int *)(lVar7 + 0x48a8);
        cVar4 = **(char **)(lVar7 + 0x48b0);
        *(int *)(lVar7 + 0x48a8) = iVar10 + 1;
        plVar2 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
        *plVar2 = *plVar2 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
        puVar3 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
        *puVar3 = *puVar3 & 7;
        if ((char)(cVar4 << ((byte)iVar10 & 0x1f)) < '\0') {
          psVar13 = psVar13 + -(int64_t)sVar14;
        }
        param_4 = lStack_c8;
        param_6 = param_6 + -1;
        sVar14 = *psVar13;
      }
      uVar12 = 0;
      do {
        uVar17 = (uint)uVar16;
        if ((uVar12 & 1) == 0) {
          if (uVar17 == 0) {
            local_var_d8 = puVar22[1];
            uVar17 = *puVar22;
            puVar22 = puVar22 + 2;
            iVar10 = *param_3;
            iVar11 = *piVar20;
            piVar20 = piVar20 + 1;
            param_3 = param_3 + 1;
            fVar24 = *(float *)(*(int64_t *)(param_4 + 0x70) +
                               (int64_t)(iVar10 + iVar11 << ((byte)iStack_c0 & 0x1f)) * 4);
          }
          uVar16 = (uint64_t)(uVar17 - 1);
        }
        if (((int)sVar14 & 8 >> ((byte)uVar12 & 0x1f)) == 0) {
          *pfVar9 = *param_2;
        }
        else {
          iVar10 = param_6 + -1;
          local_var_d4 = local_var_d8;
          if (iVar10 < 1) break;
          lVar7 = *(int64_t *)(param_1 + 0x178);
          iVar11 = *(int *)(lVar7 + 0x48a8);
          cVar4 = **(char **)(lVar7 + 0x48b0);
          *(int *)(lVar7 + 0x48a8) = iVar11 + 1;
          plVar2 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
          *plVar2 = *plVar2 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
          puVar3 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
          *puVar3 = *puVar3 & 7;
          param_6 = iVar10;
          if ((char)(cVar4 << ((byte)iVar11 & 0x1f)) < '\0') {
            *pfVar9 = *param_2 + fVar24;
            *param_2 = *param_2 - fVar24;
          }
          else {
            *pfVar9 = *param_2 - fVar24;
            *param_2 = fVar24 + *param_2;
          }
        }
        param_2 = param_2 + 1;
        pfVar9 = pfVar9 + 1;
        uVar12 = uVar12 + 1;
        param_4 = lStack_c8;
      } while ((int)uVar12 < 4);
      iStack_bc = iStack_bc + -1;
      param_4 = lStack_c8;
    }
    iVar10 = (int)((int64_t)pfStack_98 + (0x1200 - (int64_t)pfVar9) >> 2) >> 1;
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar9 = *param_2;
      pfVar9[1] = param_2[1];
      param_2 = param_2 + 2;
      pfVar9 = pfVar9 + 2;
    }
    uVar8 = (uint64_t)(local_var_d4 + 1);
    *(uint *)(lStack_c8 + 0x3c) = local_var_d4 + 1;
  }
  uVar6 = *(int32_t *)((lStack_88 * 0x17 + uVar8) * 4 + 0x180c423f0);
LAB_18081083d:
  *(int32_t *)(lStack_c8 + 0x40) = uVar6;
  if (0x10 < param_6) {
    uVar12 = (param_6 - 0x11U >> 4) + 1;
    uVar8 = (uint64_t)uVar12;
    param_6 = param_6 + uVar12 * -0x10;
    do {
      SystemFunction_000180815aa0(param_1,0x10);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (0 < param_6) {
    SystemFunction_000180815aa0(param_1,param_6);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_f8);
}