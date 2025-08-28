#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 02_core_engine_part153.c - 14 个函数
// 函数: void GenericFunction_18013baf0(int64_t param_1)
void GenericFunction_18013baf0(int64_t param_1)
{
  char *pcVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  bool bVar5;
  int64_t lVar6;
  int64_t lVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int64_t lVar12;
  int64_t lVar13;
  int iVar14;
  int64_t lVar15;
  char *pcVar16;
  int8_t uVar17;
  int8_t stack_array_2f8 [32];
  int8_t local_var_2d8;
  int8_t local_var_2d0;
  uint64_t local_var_2c8;
  uint64_t local_var_2c0;
  int32_t local_var_2b8;
  int32_t local_var_2b4;
  int64_t lStack_2b0;
  uint64_t local_var_2a8;
  uint64_t local_var_2a0;
  int32_t local_var_298;
  int32_t local_var_294;
  int32_t local_var_290;
  int32_t local_var_28c;
  uint64_t local_var_278;
  char acStack_268 [168];
  char acStack_1c0 [376];
  uint64_t local_var_48;
  lVar15 = SYSTEM_DATA_MANAGER_A;
  local_var_278 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2f8;
  if (*(char *)(SYSTEM_DATA_MANAGER_A + 0x1dd0) == '\0') goto LAB_18013bf0b;
  iVar10 = *(int *)(param_1 + 8);
  local_var_2c8 = *(uint64_t *)(param_1 + 0x40);
  local_var_2c0 = CONCAT44(*(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x4c),
                        *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x48));
  lVar12 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  if ((*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b10) == 0) ||
     (*(int64_t *)(lVar12 + 0x3a0) != *(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b10) + 0x3a0)
     )) goto LAB_18013bf0b;
  uVar17 = 1;
  cVar9 = SystemCore_HashCalculator(&local_var_2c8,&local_var_2c0);
  if ((cVar9 == '\0') ||
     ((iVar10 == *(int *)(lVar15 + 0x1dec) || (*(char *)(lVar12 + 0xb4) != '\0'))))
  goto LAB_18013bf0b;
  *(int32_t *)(lVar15 + 0x1e20) = (int32_t)local_var_2c8;
  *(int32_t *)(lVar15 + 0x1e24) = local_var_2c8._4_4_;
  *(int32_t *)(lVar15 + 0x1e28) = (int32_t)local_var_2c0;
  *(int32_t *)(lVar15 + 0x1e2c) = local_var_2c0._4_4_;
  *(int *)(lVar15 + 0x1e30) = iVar10;
  *(int8_t *)(lVar15 + 0x1dd1) = uVar17;
  if ((*(int *)(lVar15 + 0x1df4) != -1) &&
     (iVar10 = strcmp(&rendering_buffer_2304_ptr,lVar15 + 0x1df8), iVar10 == 0)) {
    uVar4 = **(uint64_t **)(lVar15 + 0x1de0);
    cVar9 = GenericFunction_180138ed0(param_1,uVar4);
    if ((cVar9 != '\0') && (lVar12 = GenericFunction_180135320(), lVar12 != 0)) {
      bVar5 = false;
      lVar12 = 0;
      if (*(int64_t *)(param_1 + 0x410) == 0) {
        lVar13 = *(int64_t *)(param_1 + 0x408);
        if (lVar13 != 0) goto LAB_18013bc7c;
        bVar8 = true;
LAB_18013bc9b:
        bVar5 = bVar8;
        local_var_2c8 = *(uint64_t *)(param_1 + 0x40);
        local_var_2c0 = CONCAT44(*(float *)(param_1 + 0x44) +
                              *(float *)(lVar15 + 0x1660) + *(float *)(lVar15 + 0x1660) +
                              *(float *)(lVar15 + 0x19f8),
                              *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x48));
      }
      else {
        lVar13 = GenericFunction_18013af10(*(int64_t *)(param_1 + 0x410),*(uint64_t *)(lVar15 + 0x118));
LAB_18013bc7c:
        lVar12 = lVar13;
        bVar8 = false;
        if ((lVar13 == 0) || (lVar13 = *(int64_t *)(lVar13 + 0x30), lVar13 == 0))
        goto LAB_18013bc9b;
        local_var_2c8 = *(uint64_t *)(lVar13 + 0x28);
        local_var_2c0 = *(uint64_t *)(lVar13 + 0x30);
      }
      if ((*(char *)(lVar15 + 0xc1) == '\0') &&
         (cVar9 = SystemCore_HashCalculator(&local_var_2c8,&local_var_2c0,1), cVar9 == '\0')) {
        uVar17 = 0;
      }
      else {
        uVar17 = 1;
      }
      if (((*(char *)(lVar15 + 0x1e19) != '\0') || (*(char *)(lVar15 + 0x1e1a) != '\0')) &&
         ((lVar12 != 0 || (bVar5)))) {
        GenericFunction_180135420(acStack_1c0 + 0x68);
        GenericFunction_180135420(acStack_268);
        pcVar1 = acStack_1c0 + 0x68;
        pcVar16 = pcVar1;
        if ((lVar12 != 0) &&
           ((lVar13 = *(int64_t *)(lVar12 + 8), lVar7 = lVar12, lVar13 != 0 ||
            ((*(byte *)(lVar12 + 0xa0) & 0x20) != 0)))) {
          while (lVar6 = lVar13, lVar6 != 0) {
            lVar7 = lVar6;
            lVar13 = *(int64_t *)(lVar6 + 8);
          }
          if (lVar7 != 0) {
            local_var_2d0 = 1;
            local_var_2d8 = uVar17;
            cVar9 = GenericFunction_180139440(param_1,lVar7,uVar4,acStack_268);
            pcVar16 = acStack_268;
            if (cVar9 == '\0') {
              pcVar16 = pcVar1;
            }
          }
        }
        local_var_2d0 = 0;
        local_var_2d8 = uVar17;
        GenericFunction_180139440(param_1,lVar12,uVar4,acStack_1c0 + 0x68);
        if (pcVar16 == acStack_268) {
          acStack_1c0[0x110] = 0;
        }
        GenericFunction_180139880(param_1,lVar12,uVar4,acStack_1c0 + 0x68);
        GenericFunction_180139880(param_1,lVar12,uVar4,acStack_268);
        if ((pcVar16[0xa8] != '\0') && (*(char *)(lVar15 + 0x1e1a) != '\0')) {
          local_var_294 = *(int32_t *)(pcVar16 + 0xbc);
          local_var_298 = *(int32_t *)(pcVar16 + 0xb8);
          local_var_2a8 = *(uint64_t *)(pcVar16 + 0xb0);
          local_var_2b8 = 1;
          local_var_290 = CONCAT31(local_var_290._1_3_,pcVar16 == acStack_268);
          lVar15 = *(int64_t *)(lVar15 + 0x2df8);
          iVar10 = *(int *)(lVar15 + 0x10);
          iVar11 = *(int *)(lVar15 + 0x14);
          lStack_2b0 = param_1;
          local_var_2a0 = uVar4;
          if (iVar10 == iVar11) {
            if (iVar11 == 0) {
              iVar11 = 8;
            }
            else {
              iVar11 = iVar11 / 2 + iVar11;
            }
            iVar14 = iVar10 + 1;
            if (iVar10 + 1 < iVar11) {
              iVar14 = iVar11;
            }
            GenericFunction_18013e6c0(lVar15 + 0x10,iVar14);
            iVar10 = *(int *)(lVar15 + 0x10);
          }
          lVar13 = (int64_t)iVar10 * 0x40;
          lVar12 = *(int64_t *)(lVar15 + 0x18);
          *(uint64_t *)(lVar13 + lVar12) = CONCAT44(local_var_2b4,local_var_2b8);
          ((uint64_t *)(lVar13 + lVar12))[1] = lStack_2b0;
          puVar2 = (uint64_t *)(lVar13 + 0x10 + lVar12);
          *puVar2 = local_var_2a8;
          puVar2[1] = local_var_2a0;
          puVar3 = (int32_t *)(lVar13 + 0x20 + lVar12);
          *puVar3 = local_var_298;
          puVar3[1] = local_var_294;
          puVar3[2] = local_var_290;
          puVar3[3] = local_var_28c;
          puVar2 = (uint64_t *)(lVar13 + 0x30 + lVar12);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + 1;
        }
        GenericFunction_180136ab0(acStack_268);
        GenericFunction_180136ab0(acStack_1c0 + 0x68);
        lVar15 = SYSTEM_DATA_MANAGER_A;
      }
    }
  }
  *(int8_t *)(lVar15 + 0x1dd1) = 0;
LAB_18013bf0b:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_2f8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_18013bf40(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_18013bf40(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  uint64_t uVar2;
  uVar2 = 0xfffffffffffffffe;
  GenericFunction_18013ea00(*(uint64_t *)(param_1 + 0x30));
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  lVar1 = *(int64_t *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
// WARNING: Subroutine does not return
    SystemResourceCleaner(lVar1,SYSTEM_DATA_MANAGER_B,param_3,param_4,uVar2);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_18013bf60(int param_1,int32_t param_2)
void GenericFunction_18013bf60(int param_1,int32_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  lVar2 = SYSTEM_DATA_MANAGER_A;
  uVar3 = 0;
  uVar4 = uVar3;
  uVar6 = uVar3;
  if (0 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x1aa0)) {
    do {
      lVar1 = *(int64_t *)(uVar6 + *(int64_t *)(lVar2 + 0x1aa8));
      if ((*(int *)(lVar1 + 0x418) == param_1) && (*(int64_t *)(lVar1 + 0x408) == 0)) {
        *(int32_t *)(lVar1 + 0x418) = param_2;
      }
      uVar5 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar5;
      uVar6 = uVar6 + 8;
    } while ((int)uVar5 < *(int *)(lVar2 + 0x1aa0));
  }
  uVar4 = uVar3;
  if (0 < *(int *)(lVar2 + 0x2e28)) {
    do {
      if (*(int *)(uVar3 + 0x28 + *(int64_t *)(lVar2 + 0x2e30)) == param_1) {
        *(int32_t *)(uVar3 + 0x28 + *(int64_t *)(lVar2 + 0x2e30)) = param_2;
      }
      uVar5 = (int)uVar4 + 1;
      uVar3 = uVar3 + 0x38;
      uVar4 = (uint64_t)uVar5;
    } while ((int)uVar5 < *(int *)(lVar2 + 0x2e28));
  }
  return;
}
// 函数: void GenericFunction_18013c020(int64_t param_1,uint64_t param_2,uint64_t param_3,char *param_4)
void GenericFunction_18013c020(int64_t param_1,uint64_t param_2,uint64_t param_3,char *param_4)
{
  uint64_t *puVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int *piVar5;
  uint64_t uVar6;
  int iVar7;
  uint64_t uVar8;
  int iVar9;
  char acStackX_20 [8];
  int iStack_48;
  int iStack_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  int iStack_34;
  int32_t local_var_30;
  int8_t local_var_2c;
  char cStack_2b;
  int8_t local_var_2a;
  int8_t local_var_29;
  int8_t local_var_28;
  int8_t local_var_27;
  int32_t local_var_26;
  int16_t local_var_22;
  int16_t local_var_20;
  int32_t local_var_1e;
  int16_t local_var_1a;
  uVar6 = 0;
  acStackX_20[0] = '\0';
  iStack_44 = 0;
  local_var_40 = 0;
  iStack_48 = 0;
  local_var_26 = 0;
  local_var_22 = 0;
  local_var_20 = 0;
  local_var_1e = 0;
  iStack_34 = 0;
  local_var_30 = 0;
  local_var_38 = 0;
  local_var_29 = 0;
  local_var_28 = 0;
  local_var_2a = 0;
  local_var_2c = 0xff;
  cStack_2b = '\0';
  for (; (*param_4 == ' ' || (*param_4 == '\t')); param_4 = param_4 + 1) {
  }
  iVar7 = 8;
  iVar3 = strncmp(param_4,&rendering_buffer_2760_ptr,8);
  if (iVar3 == 0) {
    for (param_4 = param_4 + 8; (*param_4 == ' ' || (*param_4 == '\t')); param_4 = param_4 + 1) {
    }
  }
  else {
    iVar3 = strncmp(param_4,&rendering_buffer_2800_ptr,9);
    if (iVar3 != 0) {
      return;
    }
    for (param_4 = param_4 + 9; (*param_4 == ' ' || (*param_4 == '\t')); param_4 = param_4 + 1) {
    }
    local_var_2a = 1;
  }
  iVar3 = AdvancedSystemOptimizer(param_4,&rendering_buffer_2784_ptr,&local_var_38,&iStack_48);
  if (iVar3 != 1) {
    return;
  }
  param_4 = param_4 + iStack_48;
  iVar3 = AdvancedSystemOptimizer(param_4,&rendering_buffer_2832_ptr,&iStack_34,&iStack_48);
  if (iVar3 == 1) {
    param_4 = param_4 + iStack_48;
    if (iStack_34 == 0) {
      return;
    }
  }
  else if (iStack_34 == 0) {
    iVar3 = AdvancedSystemOptimizer(param_4,&rendering_buffer_2816_ptr,&iStack_44,&local_var_40,&iStack_48);
    if (iVar3 != 2) {
      return;
    }
    lVar4 = (int64_t)iStack_48;
    local_var_3c = CONCAT22((int16_t)local_var_40,(short)iStack_44);
    piVar5 = &iStack_48;
    local_var_26 = local_var_3c;
    iVar3 = AdvancedSystemOptimizer(param_4 + lVar4,&rendering_buffer_2880_ptr,&iStack_44,&local_var_40,piVar5);
    if (iVar3 != 2) {
      return;
    }
    param_4 = param_4 + lVar4 + iStack_48;
    local_var_22 = (int16_t)iStack_44;
    local_var_3c = CONCAT22((int16_t)local_var_40,local_var_22);
    local_var_20 = (int16_t)local_var_40;
    goto LAB_18013c174;
  }
  piVar5 = &iStack_48;
  iVar3 = AdvancedSystemOptimizer(param_4,&rendering_buffer_2856_ptr,&iStack_44,&local_var_40,piVar5);
  if (iVar3 == 2) {
    param_4 = param_4 + iStack_48;
    local_var_3c = CONCAT22((int16_t)local_var_40,(short)iStack_44);
    local_var_1e = local_var_3c;
  }
LAB_18013c174:
  iVar3 = AdvancedSystemOptimizer(param_4,&rendering_buffer_2920_ptr,acStackX_20,&iStack_48,piVar5);
  if (iVar3 == 1) {
    param_4 = param_4 + iStack_48;
    if (acStackX_20[0] == 'X') {
      local_var_2c = 0;
    }
    else if (acStackX_20[0] == 'Y') {
      local_var_2c = 1;
    }
  }
  iVar3 = AdvancedSystemOptimizer(param_4,&rendering_buffer_2896_ptr,&iStack_44,&iStack_48,piVar5);
  if (iVar3 == 1) {
    param_4 = param_4 + iStack_48;
    local_var_29 = iStack_44 != 0;
  }
  iVar3 = AdvancedSystemOptimizer(param_4,&rendering_buffer_2960_ptr,&iStack_44,&iStack_48,piVar5);
  if (iVar3 == 1) {
    param_4 = param_4 + iStack_48;
    local_var_28 = iStack_44 != 0;
  }
  AdvancedSystemOptimizer(param_4,&rendering_buffer_2936_ptr,&local_var_30,&iStack_48);
  lVar4 = *(int64_t *)(param_1 + 0x2df8);
  if ((iStack_34 != 0) && (0 < *(int *)(lVar4 + 0x20))) {
    piVar5 = *(int **)(lVar4 + 0x28);
    uVar8 = uVar6;
    do {
      if (*piVar5 == iStack_34) {
        piVar5 = *(int **)(lVar4 + 0x28) + (int64_t)(int)uVar8 * 8;
        if (piVar5 != (int *)0x0) {
          cStack_2b = *(char *)((int64_t)piVar5 + 0xd) + '\x01';
        }
        break;
      }
      uVar8 = (uint64_t)((int)uVar8 + 1);
      uVar6 = uVar6 + 1;
      piVar5 = piVar5 + 8;
    } while ((int64_t)uVar6 < (int64_t)*(int *)(lVar4 + 0x20));
  }
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar9 = *(int *)(lVar4 + 0x24);
  if (iVar3 == iVar9) {
    if (iVar9 != 0) {
      iVar7 = iVar9 + iVar9 / 2;
    }
    iVar9 = iVar3 + 1;
    if (iVar3 + 1 < iVar7) {
      iVar9 = iVar7;
    }
    GenericFunction_18013da40(lVar4 + 0x20,iVar9);
    iVar3 = *(int *)(lVar4 + 0x20);
  }
  lVar2 = *(int64_t *)(lVar4 + 0x28);
  puVar1 = (uint64_t *)((int64_t)iVar3 * 0x20 + lVar2);
  *puVar1 = CONCAT44(iStack_34,local_var_38);
  puVar1[1] = CONCAT17(local_var_29,
                       CONCAT16(local_var_2a,CONCAT15(cStack_2b,CONCAT14(local_var_2c,local_var_30))));
  puVar1 = (uint64_t *)((int64_t)iVar3 * 0x20 + 0x10 + lVar2);
  *puVar1 = CONCAT26(local_var_22,CONCAT42(local_var_26,CONCAT11(local_var_27,local_var_28)));
  puVar1[1] = CONCAT26(local_var_1a,CONCAT42(local_var_1e,local_var_20));
  *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
  return;
}
// 函数: void GenericFunction_18013c380(int64_t param_1,int32_t *param_2,int param_3)
void GenericFunction_18013c380(int64_t param_1,int32_t *param_2,int param_3)
{
  int32_t *puVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int8_t uVar9;
  byte bVar10;
  int32_t uVar11;
  int32_t uVar12;
  int64_t lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int32_t local_var_44;
  int32_t local_var_3c;
  int8_t local_var_37;
  int16_t local_var_2a;
  while( true ) {
    uVar11 = *param_2;
    if (*(int32_t **)(param_2 + 2) == (int32_t *)0x0) {
      local_var_44 = 0;
    }
    else {
      local_var_44 = **(int32_t **)(param_2 + 2);
    }
    uVar12 = param_2[0x26];
    if (*(int64_t *)(param_2 + 4) == 0) {
      uVar9 = 0xff;
    }
    else {
      uVar9 = *(int8_t *)(param_2 + 0x14);
    }
    bVar10 = *(byte *)(param_2 + 0x28);
    iVar14 = *(int *)(param_1 + 0x24);
    local_var_3c._0_2_ = CONCAT11((char)param_3,uVar9);
    local_var_3c = CONCAT13(bVar10 >> 5,CONCAT12(bVar10 >> 4,(int16_t)local_var_3c)) & 0x101ffff;
    fVar3 = (float)param_2[0xe];
    fVar4 = (float)param_2[0xf];
    fVar5 = (float)param_2[0x10];
    fVar6 = (float)param_2[0x11];
    fVar7 = (float)param_2[0x12];
    fVar8 = (float)param_2[0x13];
    iVar15 = *(int *)(param_1 + 0x20);
    if (iVar15 == iVar14) {
      if (iVar14 == 0) {
        iVar14 = 8;
      }
      else {
        iVar14 = iVar14 / 2 + iVar14;
      }
      iVar16 = iVar15 + 1;
      if (iVar15 + 1 < iVar14) {
        iVar16 = iVar14;
      }
      GenericFunction_18013da40(param_1 + 0x20,iVar16);
      iVar15 = *(int *)(param_1 + 0x20);
    }
    lVar13 = *(int64_t *)(param_1 + 0x28);
    puVar1 = (int32_t *)((int64_t)iVar15 * 0x20 + lVar13);
    *puVar1 = uVar11;
    puVar1[1] = local_var_44;
    puVar1[2] = uVar12;
    puVar1[3] = local_var_3c;
    puVar2 = (uint *)((int64_t)iVar15 * 0x20 + 0x10 + lVar13);
    *puVar2 = CONCAT22((short)(int)fVar3,CONCAT11(local_var_37,bVar10 >> 6)) & 0xffffff01;
    puVar2[1] = CONCAT22((short)(int)fVar5,(short)(int)fVar4);
    puVar2[2] = CONCAT22((short)(int)fVar7,(short)(int)fVar6);
    puVar2[3] = CONCAT22(local_var_2a,(short)(int)fVar8);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    if (*(int64_t *)(param_2 + 4) != 0) {
      GenericFunction_18013c380(param_1,*(int64_t *)(param_2 + 4),param_3 + 1);
    }
    param_2 = *(int32_t **)(param_2 + 6);
    if (param_2 == (int32_t *)0x0) break;
    param_3 = param_3 + 1;
  }
  return;
}
// 函数: void GenericFunction_18013c4e0(int64_t param_1,uint64_t *param_2,uint64_t param_3)
void GenericFunction_18013c4e0(int64_t param_1,uint64_t *param_2,uint64_t param_3)
{
  char cVar1;
  int *piVar2;
  int64_t lVar3;
  int iVar4;
  void *puVar5;
  char *pcVar6;
  int iVar7;
  int64_t lVar8;
  int iVar9;
  int32_t uVar10;
  int iVar11;
  void *puVar12;
  piVar2 = *(int **)(param_1 + 0x2df8);
  if ((*(byte *)(param_1 + 8) & 0x40) != 0) {
    iVar4 = piVar2[9];
    if (iVar4 < 0) {
      iVar4 = iVar4 / 2 + iVar4;
      iVar7 = 0;
      if (0 < iVar4) {
        iVar7 = iVar4;
      }
      GenericFunction_18013da40(piVar2 + 8,iVar7);
    }
    piVar2[8] = 0;
    GenericFunction_18013da40(piVar2 + 8,*piVar2);
    iVar4 = 0;
    if (0 < *piVar2) {
      lVar8 = 0;
      do {
        lVar3 = *(int64_t *)(lVar8 + 8 + *(int64_t *)(piVar2 + 2));
        if ((lVar3 != 0) && (*(int64_t *)(lVar3 + 8) == 0)) {
          GenericFunction_18013c380(piVar2,lVar3,0);
        }
        iVar4 = iVar4 + 1;
        lVar8 = lVar8 + 0x10;
      } while (iVar4 < *piVar2);
    }
    lVar8 = (int64_t)piVar2[8];
    iVar4 = 0;
    if (0 < lVar8) {
      pcVar6 = (char *)(*(int64_t *)(piVar2 + 10) + 0xd);
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 0x20;
        if (iVar4 <= cVar1) {
          iVar4 = (int)cVar1;
        }
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    CoreSystem_EncryptionManager0(param_3,&memory_allocator_3000_ptr,*param_2);
    iVar7 = 0;
    if (0 < piVar2[8]) {
      lVar8 = 0;
      do {
        lVar3 = *(int64_t *)(piVar2 + 10);
        puVar5 = &rendering_buffer_2984_ptr;
        puVar12 = &system_buffer_ptr;
        iVar9 = (int)*(char *)(lVar8 + 0xd + lVar3);
        iVar11 = (iVar4 - iVar9) * 2;
        if (*(char *)(lVar8 + 0xe + lVar3) != '\0') {
          puVar5 = &rendering_buffer_2800_ptr;
        }
        CoreSystem_EncryptionManager0(param_3,&memory_allocator_3032_ptr,iVar9 * 2,&system_buffer_ptr,puVar5,iVar11,&system_buffer_ptr);
        uVar10 = (int32_t)((uint64_t)puVar5 >> 0x20);
        CoreSystem_EncryptionManager0(param_3,&memory_allocator_3016_ptr,*(int32_t *)(lVar8 + lVar3));
        iVar9 = *(int *)(lVar8 + 4 + lVar3);
        if (iVar9 == 0) {
          CoreSystem_EncryptionManager0(param_3,&memory_allocator_3048_ptr,(int)*(short *)(lVar8 + 0x12 + lVar3),
                        (int)*(short *)(lVar8 + 0x14 + lVar3),
                        CONCAT44(uVar10,(int)*(short *)(lVar8 + 0x16 + lVar3)),
                        (int)*(short *)(lVar8 + 0x18 + lVar3),puVar12);
        }
        else {
          CoreSystem_EncryptionManager0(param_3,&memory_allocator_3072_ptr,iVar9,(int)*(short *)(lVar8 + 0x1a + lVar3),
                        CONCAT44(uVar10,(int)*(short *)(lVar8 + 0x1c + lVar3)),iVar11,puVar12);
        }
        cVar1 = *(char *)(lVar8 + 0xc + lVar3);
        if (cVar1 != -1) {
          CoreSystem_EncryptionManager0(param_3,&memory_allocator_3120_ptr,(cVar1 != '\0') + 'X');
        }
        if (*(char *)(lVar8 + 0xf + lVar3) != '\0') {
          CoreSystem_EncryptionManager0(param_3,&memory_allocator_3104_ptr);
        }
        if (*(char *)(lVar8 + 0x10 + lVar3) != '\0') {
          CoreSystem_EncryptionManager0(param_3,&memory_allocator_3160_ptr);
        }
        if (*(int *)(lVar8 + 8 + lVar3) != 0) {
          CoreSystem_EncryptionManager0(param_3,&memory_allocator_3136_ptr);
        }
        CoreSystem_EncryptionManager0(param_3,&system_data_cc18);
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 0x20;
      } while (iVar7 < piVar2[8]);
    }
    CoreSystem_EncryptionManager0(param_3,&system_data_cc18);
  }
  return;
}
// 函数: void GenericFunction_18013c504(int param_1)
void GenericFunction_18013c504(int param_1)
{
  char cVar1;
  int64_t lVar2;
  char *pcVar3;
  int iVar4;
  char cVar5;
  int64_t lVar6;
  int *unaff_R14;
  if (param_1 < 0) {
    param_1 = param_1 / 2 + param_1;
    iVar4 = 0;
    if (0 < param_1) {
      iVar4 = param_1;
    }
    GenericFunction_18013da40(unaff_R14 + 8,iVar4);
  }
  unaff_R14[8] = 0;
  GenericFunction_18013da40(unaff_R14 + 8,*unaff_R14);
  iVar4 = 0;
  if (0 < *unaff_R14) {
    lVar6 = 0;
    do {
      lVar2 = *(int64_t *)(lVar6 + 8 + *(int64_t *)(unaff_R14 + 2));
      if ((lVar2 != 0) && (*(int64_t *)(lVar2 + 8) == 0)) {
        GenericFunction_18013c380();
      }
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar4 < *unaff_R14);
  }
  lVar6 = (int64_t)unaff_R14[8];
  cVar5 = '\0';
  if (0 < lVar6) {
    pcVar3 = (char *)(*(int64_t *)(unaff_R14 + 10) + 0xd);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 0x20;
      if (cVar5 <= cVar1) {
        cVar5 = cVar1;
      }
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  CoreSystem_EncryptionManager0();
  iVar4 = 0;
  if (0 < unaff_R14[8]) {
    lVar6 = 0;
    do {
      lVar2 = *(int64_t *)(unaff_R14 + 10);
      CoreSystem_EncryptionManager0();
      CoreSystem_EncryptionManager0();
      if (*(int *)(lVar6 + 4 + lVar2) == 0) {
        CoreSystem_EncryptionManager0();
      }
      else {
        CoreSystem_EncryptionManager0();
      }
      if (*(char *)(lVar6 + 0xc + lVar2) != -1) {
        CoreSystem_EncryptionManager0();
      }
      if (*(char *)(lVar6 + 0xf + lVar2) != '\0') {
        CoreSystem_EncryptionManager0();
      }
      if (*(char *)(lVar6 + 0x10 + lVar2) != '\0') {
        CoreSystem_EncryptionManager0();
      }
      if (*(int *)(lVar6 + 8 + lVar2) != 0) {
        CoreSystem_EncryptionManager0();
      }
      CoreSystem_EncryptionManager0();
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 0x20;
    } while (iVar4 < unaff_R14[8]);
  }
  CoreSystem_EncryptionManager0();
  return;
}
// 函数: void GenericFunction_18013c5c1(void)
void GenericFunction_18013c5c1(void)
{
  int64_t lVar1;
  int unaff_EBP;
  int unaff_ESI;
  int64_t lVar2;
  int64_t unaff_R14;
  int iStack0000000000000028;
  void *plocal_buffer_30;
  lVar2 = 0;
  do {
    lVar1 = *(int64_t *)(unaff_R14 + 0x28);
    plocal_buffer_30 = &system_buffer_ptr;
    iStack0000000000000028 = (unaff_ESI - *(char *)(lVar2 + 0xd + lVar1)) * 2;
    CoreSystem_EncryptionManager0();
    CoreSystem_EncryptionManager0();
    if (*(int *)(lVar2 + 4 + lVar1) == 0) {
      iStack0000000000000028 = (int)*(short *)(lVar2 + 0x18 + lVar1);
      CoreSystem_EncryptionManager0();
    }
    else {
      CoreSystem_EncryptionManager0();
    }
    if (*(char *)(lVar2 + 0xc + lVar1) != -1) {
      CoreSystem_EncryptionManager0();
    }
    if (*(char *)(lVar2 + 0xf + lVar1) != '\0') {
      CoreSystem_EncryptionManager0();
    }
    if (*(char *)(lVar2 + 0x10 + lVar1) != '\0') {
      CoreSystem_EncryptionManager0();
    }
    if (*(int *)(lVar2 + 8 + lVar1) != 0) {
      CoreSystem_EncryptionManager0();
    }
    CoreSystem_EncryptionManager0();
    unaff_EBP = unaff_EBP + 1;
    lVar2 = lVar2 + 0x20;
  } while (unaff_EBP < *(int *)(unaff_R14 + 0x20));
  CoreSystem_EncryptionManager0();
  return;
}
// 函数: void GenericFunction_18013c732(void)
void GenericFunction_18013c732(void)
{
  CoreSystem_EncryptionManager0();
  return;
}
// 函数: void GenericFunction_18013c750(void)
void GenericFunction_18013c750(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_18013c760(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_18013c760(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t stack_special_x_10;
  uint64_t stack_special_x_18;
  uint64_t stack_special_x_20;
  if (*(char *)(SYSTEM_DATA_MANAGER_A + 0x2e38) != '\0') {
    lVar1 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x2e40);
    stack_special_x_10 = param_2;
    stack_special_x_18 = param_3;
    stack_special_x_20 = param_4;
    if (lVar1 != 0) {
      puVar2 = (uint64_t *)SystemFunction_00018004b9a0();
      __stdio_common_vfprintf(*puVar2,lVar1,param_1,0,&stack_special_x_10);
      return;
    }
    GenericFunction_180122240(SYSTEM_DATA_MANAGER_A + 0x2e48,param_1,&stack_special_x_10);
  }
  return;
}
// 函数: void GenericFunction_18013c78b(int64_t param_1)
void GenericFunction_18013c78b(int64_t param_1)
{
  int64_t lVar1;
  int64_t in_RAX;
  uint64_t *puVar2;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  *(uint64_t *)(in_RAX + -0x10) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RDI;
  lVar1 = *(int64_t *)(param_1 + 0x2e40);
  if (lVar1 != 0) {
    puVar2 = (uint64_t *)SystemFunction_00018004b9a0();
    __stdio_common_vfprintf(*puVar2,lVar1);
    return;
  }
  GenericFunction_180122240(param_1 + 0x2e48);
  return;
}
// 函数: void GenericFunction_18013c7cf(int64_t param_1)
void GenericFunction_18013c7cf(int64_t param_1)
{
  GenericFunction_180122240(param_1 + 0x2e48);
  return;
}
// 函数: void GenericFunction_18013c7eb(void)
void GenericFunction_18013c7eb(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address