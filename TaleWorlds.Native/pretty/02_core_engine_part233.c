#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part233.c - 8 个函数
// 函数: void DataStructure_02e0f(void)
void DataStructure_02e0f(void)
{
  int64_t unaff_RBP;
  if (unaff_RBP == 0) {
    DataStructure_03100();
  }
  return;
}
// 函数: void DataStructure_02e19(void)
void DataStructure_02e19(void)
{
  DataStructure_03100();
  return;
}
// 函数: void DataStructure_02e40(float *param_1,float *param_2,float *param_3)
void DataStructure_02e40(float *param_1,float *param_2,float *param_3)
{
  float fVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  float *pfVar8;
  uint64_t uVar9;
  bool bVar10;
  uVar9 = (int64_t)param_2 - (int64_t)param_1 >> 2;
  if (1 < (int64_t)uVar9) {
    uVar7 = ((int64_t)(uVar9 - 2) >> 1) + 1;
    uVar4 = uVar7 * 2 + 2;
    do {
      fVar1 = param_1[uVar7 - 1];
      uVar7 = uVar7 - 1;
      uVar4 = uVar4 - 2;
      uVar5 = uVar7;
      uVar2 = uVar4;
      while ((int64_t)uVar2 < (int64_t)uVar9) {
        uVar6 = uVar2 - 1;
        if (param_1[uVar2 - 1] < param_1[uVar2] || param_1[uVar2 - 1] == param_1[uVar2]) {
          uVar6 = uVar2;
        }
        param_1[uVar5] = param_1[uVar6];
        uVar5 = uVar6;
        uVar2 = uVar6 * 2 + 2;
      }
      if (uVar2 == uVar9) {
        param_1[uVar5] = param_1[uVar2 - 1];
        uVar5 = uVar2 - 1;
      }
      while ((int64_t)uVar7 < (int64_t)uVar5) {
        uVar2 = (int64_t)(uVar5 - 1) >> 1;
        if (fVar1 <= param_1[uVar2]) break;
        param_1[uVar5] = param_1[uVar2];
        uVar5 = uVar2;
      }
      param_1[uVar5] = fVar1;
    } while (uVar7 != 0);
  }
  uVar7 = 0;
  uVar4 = (uint64_t)((int64_t)param_3 + (3 - (int64_t)param_2)) >> 2;
  if (param_3 < param_2) {
    uVar4 = uVar7;
  }
  uVar5 = uVar7;
  pfVar8 = param_2;
  if (uVar4 != 0) {
    do {
      fVar1 = *pfVar8;
      if (fVar1 < *param_1) {
        uVar6 = 2;
        *pfVar8 = *param_1;
        bVar10 = uVar9 == 2;
        uVar2 = uVar7;
        uVar3 = uVar7;
        if (2 < (int64_t)uVar9) {
          do {
            uVar2 = uVar6 - 1;
            if (param_1[uVar6 - 1] < param_1[uVar6] || param_1[uVar6 - 1] == param_1[uVar6]) {
              uVar2 = uVar6;
            }
            uVar6 = uVar2 * 2 + 2;
            param_1[uVar3] = param_1[uVar2];
            bVar10 = uVar6 == uVar9;
            uVar3 = uVar2;
          } while ((int64_t)uVar6 < (int64_t)uVar9);
        }
        if (bVar10) {
          param_1[uVar2] = param_1[uVar6 - 1];
          uVar2 = uVar6 - 1;
        }
        while (0 < (int64_t)uVar2) {
          uVar6 = (int64_t)(uVar2 - 1) >> 1;
          if (fVar1 <= param_1[uVar6]) break;
          param_1[uVar2] = param_1[uVar6];
          uVar2 = uVar6;
        }
        param_1[uVar2] = fVar1;
      }
      uVar5 = uVar5 + 1;
      pfVar8 = pfVar8 + 1;
    } while (uVar5 < uVar4);
  }
  if (1 < (int64_t)uVar9) {
    param_2 = param_2 + -1;
    do {
      fVar1 = *param_2;
      uVar9 = uVar9 - 1;
      uVar5 = 2;
      *param_2 = *param_1;
      bVar10 = uVar9 == 2;
      uVar2 = uVar7;
      uVar4 = uVar7;
      if (2 < (int64_t)uVar9) {
        do {
          uVar4 = uVar5 - 1;
          if (param_1[uVar5 - 1] < param_1[uVar5] || param_1[uVar5 - 1] == param_1[uVar5]) {
            uVar4 = uVar5;
          }
          uVar5 = uVar4 * 2 + 2;
          param_1[uVar2] = param_1[uVar4];
          bVar10 = uVar5 == uVar9;
          uVar2 = uVar4;
        } while ((int64_t)uVar5 < (int64_t)uVar9);
      }
      if (bVar10) {
        param_1[uVar4] = param_1[uVar5 - 1];
        uVar4 = uVar5 - 1;
      }
      while (0 < (int64_t)uVar4) {
        uVar9 = (int64_t)(uVar4 - 1) >> 1;
        if (fVar1 <= param_1[uVar9]) break;
        param_1[uVar4] = param_1[uVar9];
        uVar4 = uVar9;
      }
      param_2 = param_2 + -1;
      param_1[uVar4] = fVar1;
      uVar9 = (4 - (int64_t)param_1) + (int64_t)param_2 >> 2;
    } while (1 < (int64_t)uVar9);
  }
  return;
}
// 函数: void DataStructure_03100(float *param_1,float *param_2,float *param_3)
void DataStructure_03100(float *param_1,float *param_2,float *param_3)
{
  float fVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  float *pfVar8;
  uint64_t uVar9;
  bool bVar10;
  uVar9 = (int64_t)param_2 - (int64_t)param_1 >> 2;
  if (1 < (int64_t)uVar9) {
    uVar7 = ((int64_t)(uVar9 - 2) >> 1) + 1;
    uVar4 = uVar7 * 2 + 2;
    do {
      fVar1 = param_1[uVar7 - 1];
      uVar7 = uVar7 - 1;
      uVar4 = uVar4 - 2;
      uVar5 = uVar7;
      uVar2 = uVar4;
      while ((int64_t)uVar2 < (int64_t)uVar9) {
        uVar6 = uVar2 - 1;
        if (param_1[uVar2 - 1] < param_1[uVar2] || param_1[uVar2 - 1] == param_1[uVar2]) {
          uVar6 = uVar2;
        }
        param_1[uVar5] = param_1[uVar6];
        uVar5 = uVar6;
        uVar2 = uVar6 * 2 + 2;
      }
      if (uVar2 == uVar9) {
        param_1[uVar5] = param_1[uVar2 - 1];
        uVar5 = uVar2 - 1;
      }
      while ((int64_t)uVar7 < (int64_t)uVar5) {
        uVar2 = (int64_t)(uVar5 - 1) >> 1;
        if (fVar1 <= param_1[uVar2]) break;
        param_1[uVar5] = param_1[uVar2];
        uVar5 = uVar2;
      }
      param_1[uVar5] = fVar1;
    } while (uVar7 != 0);
  }
  uVar7 = 0;
  uVar4 = (uint64_t)((int64_t)param_3 + (3 - (int64_t)param_2)) >> 2;
  if (param_3 < param_2) {
    uVar4 = uVar7;
  }
  uVar5 = uVar7;
  pfVar8 = param_2;
  if (uVar4 != 0) {
    do {
      fVar1 = *pfVar8;
      if (fVar1 < *param_1) {
        uVar6 = 2;
        *pfVar8 = *param_1;
        bVar10 = uVar9 == 2;
        uVar2 = uVar7;
        uVar3 = uVar7;
        if (2 < (int64_t)uVar9) {
          do {
            uVar2 = uVar6 - 1;
            if (param_1[uVar6 - 1] < param_1[uVar6] || param_1[uVar6 - 1] == param_1[uVar6]) {
              uVar2 = uVar6;
            }
            uVar6 = uVar2 * 2 + 2;
            param_1[uVar3] = param_1[uVar2];
            bVar10 = uVar6 == uVar9;
            uVar3 = uVar2;
          } while ((int64_t)uVar6 < (int64_t)uVar9);
        }
        if (bVar10) {
          param_1[uVar2] = param_1[uVar6 - 1];
          uVar2 = uVar6 - 1;
        }
        while (0 < (int64_t)uVar2) {
          uVar6 = (int64_t)(uVar2 - 1) >> 1;
          if (fVar1 <= param_1[uVar6]) break;
          param_1[uVar2] = param_1[uVar6];
          uVar2 = uVar6;
        }
        param_1[uVar2] = fVar1;
      }
      uVar5 = uVar5 + 1;
      pfVar8 = pfVar8 + 1;
    } while (uVar5 < uVar4);
  }
  if (1 < (int64_t)uVar9) {
    param_2 = param_2 + -1;
    do {
      fVar1 = *param_2;
      uVar9 = uVar9 - 1;
      uVar5 = 2;
      *param_2 = *param_1;
      bVar10 = uVar9 == 2;
      uVar2 = uVar7;
      uVar4 = uVar7;
      if (2 < (int64_t)uVar9) {
        do {
          uVar4 = uVar5 - 1;
          if (param_1[uVar5 - 1] < param_1[uVar5] || param_1[uVar5 - 1] == param_1[uVar5]) {
            uVar4 = uVar5;
          }
          uVar5 = uVar4 * 2 + 2;
          param_1[uVar2] = param_1[uVar4];
          bVar10 = uVar5 == uVar9;
          uVar2 = uVar4;
        } while ((int64_t)uVar5 < (int64_t)uVar9);
      }
      if (bVar10) {
        param_1[uVar4] = param_1[uVar5 - 1];
        uVar4 = uVar5 - 1;
      }
      while (0 < (int64_t)uVar4) {
        uVar9 = (int64_t)(uVar4 - 1) >> 1;
        if (fVar1 <= param_1[uVar9]) break;
        param_1[uVar4] = param_1[uVar9];
        uVar4 = uVar9;
      }
      param_2 = param_2 + -1;
      param_1[uVar4] = fVar1;
      uVar9 = (4 - (int64_t)param_1) + (int64_t)param_2 >> 2;
    } while (1 < (int64_t)uVar9);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void CoreEngine_2037E0(uint64_t param_1,int param_2,int64_t param_3)
void CoreEngine_2037E0(uint64_t param_1,int param_2,int64_t param_3)
{
  byte bVar1;
  bool bVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  int iVar10;
  void *puVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  int8_t stack_array_128 [32];
  uint64_t local_var_108;
  void *plocal_var_f8;
  byte *pbStack_f0;
  int iStack_e8;
  byte abStack_e0 [72];
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  int8_t stack_array_80 [72];
  uint64_t local_var_38;
  lVar8 = core_system_data_config;
  local_var_108 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_128;
  puVar9 = (uint64_t *)(core_system_data_config + 0x28);
  plocal_var_f8 = &memory_allocator_3480_ptr;
  pbStack_f0 = abStack_e0;
  abStack_e0[0] = 0;
  iStack_e8 = *(int *)(param_3 + 0x10);
  puVar11 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar11 = *(void **)(param_3 + 8);
  }
  strcpy_s(abStack_e0,0x40,puVar11);
  puVar12 = *(uint64_t **)(lVar8 + 0x38);
  puVar3 = puVar9;
  if (puVar12 != (uint64_t *)0x0) {
    do {
      if (iStack_e8 == 0) {
        bVar2 = false;
        puVar13 = (uint64_t *)puVar12[1];
      }
      else {
        if (*(int *)(puVar12 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar6 = pbStack_f0;
          do {
            uVar7 = (uint)pbVar6[puVar12[5] - (int64_t)pbStack_f0];
            iVar10 = *pbVar6 - uVar7;
            if (*pbVar6 != uVar7) break;
            pbVar6 = pbVar6 + 1;
          } while (uVar7 != 0);
          bVar2 = 0 < iVar10;
          if (iVar10 < 1) {
            puVar13 = (uint64_t *)puVar12[1];
            goto LAB_1802038fb;
          }
        }
        puVar13 = (uint64_t *)*puVar12;
      }
LAB_1802038fb:
      puVar4 = puVar12;
      if (bVar2) {
        puVar4 = puVar3;
      }
      puVar3 = puVar4;
      puVar12 = puVar13;
    } while (puVar13 != (uint64_t *)0x0);
    if (puVar4 != puVar9) {
      if (*(int *)(puVar4 + 6) == 0) goto LAB_18020393c;
      if (iStack_e8 != 0) {
        pbVar6 = (byte *)puVar4[5];
        lVar8 = (int64_t)pbStack_f0 - (int64_t)pbVar6;
        do {
          bVar1 = *pbVar6;
          uVar7 = (uint)pbVar6[lVar8];
          if (bVar1 != uVar7) break;
          pbVar6 = pbVar6 + 1;
        } while (uVar7 != 0);
        if ((int)(bVar1 - uVar7) < 1) goto LAB_18020393c;
      }
    }
  }
  puVar4 = puVar9;
LAB_18020393c:
  plocal_var_f8 = &system_state_ptr;
  if (puVar4 == puVar9) {
    plocal_var_98 = &memory_allocator_3480_ptr;
    plocal_var_90 = stack_array_80;
    stack_array_80[0] = 0;
    local_var_88 = *(int32_t *)(param_3 + 0x10);
    puVar11 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar11 = *(void **)(param_3 + 8);
    }
    strcpy_s(stack_array_80,0x40,puVar11);
    piVar5 = (int *)DataStructure_03aa0(puVar9,&plocal_var_98);
    *piVar5 = param_2;
  }
  else {
    plocal_var_98 = &memory_allocator_3480_ptr;
    plocal_var_90 = stack_array_80;
    stack_array_80[0] = 0;
    local_var_88 = *(int32_t *)(param_3 + 0x10);
    puVar11 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar11 = *(void **)(param_3 + 8);
    }
    strcpy_s(stack_array_80,0x40,puVar11);
    piVar5 = (int *)DataStructure_03aa0(puVar9,&plocal_var_98);
    iVar10 = *piVar5;
    plocal_var_f8 = &memory_allocator_3480_ptr;
    pbStack_f0 = abStack_e0;
    abStack_e0[0] = 0;
    iStack_e8 = *(int *)(param_3 + 0x10);
    puVar11 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar11 = *(void **)(param_3 + 8);
    }
    strcpy_s(abStack_e0,0x40,puVar11);
    piVar5 = (int *)DataStructure_03aa0(puVar9,&plocal_var_f8);
    *piVar5 = iVar10 + param_2;
    plocal_var_f8 = &system_state_ptr;
  }
  plocal_var_98 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_128);
}
uint64_t * DataStructure_03aa0(uint64_t *param_1,int64_t param_2)
{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int64_t *plVar4;
  uint uVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  int8_t astack_special_x_8 [8];
  puVar8 = (uint64_t *)param_1[2];
  puVar9 = param_1;
  if (puVar8 != (uint64_t *)0x0) {
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        puVar7 = (uint64_t *)puVar8[1];
        bVar2 = false;
      }
      else {
        if (*(int *)(puVar8 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar3 = *(byte **)(param_2 + 8);
          lVar10 = puVar8[5] - (int64_t)pbVar3;
          do {
            uVar5 = (uint)pbVar3[lVar10];
            iVar6 = *pbVar3 - uVar5;
            if (*pbVar3 != uVar5) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar5 != 0);
          bVar2 = 0 < iVar6;
          if (iVar6 < 1) {
            puVar7 = (uint64_t *)puVar8[1];
            goto LAB_180203b17;
          }
        }
        puVar7 = (uint64_t *)*puVar8;
      }
LAB_180203b17:
      if (bVar2) {
        puVar8 = puVar9;
      }
      puVar9 = puVar8;
      puVar8 = puVar7;
    } while (puVar7 != (uint64_t *)0x0);
    puVar8 = (uint64_t *)0x0;
  }
  if (puVar9 != param_1) {
    if (*(int *)(puVar9 + 6) == 0) {
LAB_180203b67:
      return puVar9 + 0xf;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      pbVar3 = (byte *)puVar9[5];
      puVar8 = (uint64_t *)(*(int64_t *)(param_2 + 8) - (int64_t)pbVar3);
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[(int64_t)puVar8];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_180203b67;
    }
  }
  plVar4 = (int64_t *)DataStructure_03ba0(param_1,astack_special_x_8,puVar8,puVar9,param_2);
  return (uint64_t *)(*plVar4 + 0x78);
}
uint64_t *
DataStructure_03abc(uint64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t *param_4)
{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int64_t *plVar4;
  uint uVar5;
  int iVar6;
  int64_t unaff_RBX;
  uint64_t *unaff_RSI;
  uint64_t *puVar7;
  int64_t lVar8;
  do {
    if (*(int *)(param_2 + 0x10) == 0) {
      puVar7 = (uint64_t *)param_3[1];
      bVar2 = false;
    }
    else {
      if (*(int *)(param_3 + 6) == 0) {
        bVar2 = true;
      }
      else {
        pbVar3 = *(byte **)(unaff_RBX + 8);
        lVar8 = param_3[5] - (int64_t)pbVar3;
        do {
          uVar5 = (uint)pbVar3[lVar8];
          iVar6 = *pbVar3 - uVar5;
          if (*pbVar3 != uVar5) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar5 != 0);
        bVar2 = 0 < iVar6;
        if (iVar6 < 1) {
          puVar7 = (uint64_t *)param_3[1];
          goto LAB_180203b17;
        }
      }
      puVar7 = (uint64_t *)*param_3;
    }
LAB_180203b17:
    if (bVar2) {
      param_3 = param_4;
    }
    param_4 = param_3;
    param_3 = puVar7;
  } while (puVar7 != (uint64_t *)0x0);
  if (param_4 != unaff_RSI) {
    if (*(int *)(param_4 + 6) == 0) {
LAB_180203b67:
      return param_4 + 0xf;
    }
    if (*(int *)(unaff_RBX + 0x10) != 0) {
      pbVar3 = (byte *)param_4[5];
      lVar8 = *(int64_t *)(unaff_RBX + 8) - (int64_t)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[lVar8];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_180203b67;
    }
  }
  plVar4 = (int64_t *)DataStructure_03ba0();
  return (uint64_t *)(*plVar4 + 0x78);
}
int64_t DataStructure_03b2a(void)
{
  byte bVar1;
  byte *pbVar2;
  int64_t *plVar3;
  uint uVar4;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t lVar5;
  int64_t in_R9;
  if (in_R9 != unaff_RSI) {
    if (*(int *)(in_R9 + 0x30) == 0) {
LAB_180203b67:
      return in_R9 + 0x78;
    }
    if (*(int *)(unaff_RBX + 0x10) != 0) {
      pbVar2 = *(byte **)(in_R9 + 0x28);
      lVar5 = *(int64_t *)(unaff_RBX + 8) - (int64_t)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar4 = (uint)pbVar2[lVar5];
        if (bVar1 != uVar4) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar4 != 0);
      if ((int)(bVar1 - uVar4) < 1) goto LAB_180203b67;
    }
  }
  plVar3 = (int64_t *)DataStructure_03ba0();
  return *plVar3 + 0x78;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
DataStructure_03ba0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             int64_t param_5)
{
  byte bVar1;
  bool bVar2;
  int64_t *plVar3;
  byte *pbVar4;
  int64_t *plVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  plVar5 = (int64_t *)*param_1;
  if ((param_4 == plVar5) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (*(int *)(param_5 + 0x10) != 0)) {
      plVar8 = param_4;
      if (*(int *)(plVar5 + 6) != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        plVar8 = (int64_t *)(plVar5[5] - (int64_t)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(int64_t)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_180203cc4;
      }
LAB_180203ca7:
      uVar9 = (uint64_t)plVar8 & 0xffffffffffffff00;
LAB_180203caa:
      if (plVar5 != (int64_t *)0x0) {
        DataStructure_03e30(param_1,param_2,plVar5,uVar9,param_5);
        return param_2;
      }
    }
  }
  else {
    plVar3 = (int64_t *)SystemFunction_00018066bd70(param_4);
    if (*(int *)(param_5 + 0x10) != 0) {
      if ((int)param_4[6] != 0) {
        pbVar4 = *(byte **)(param_5 + 8);
        lVar7 = param_4[5] - (int64_t)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_180203cc4;
      }
      if ((int)plVar3[6] != 0) {
        pbVar4 = (byte *)plVar3[5];
        plVar8 = (int64_t *)(*(int64_t *)(param_5 + 8) - (int64_t)pbVar4);
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[(int64_t)plVar8];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        if (0 < (int)(bVar1 - uVar6)) {
          plVar5 = param_4;
          if (*param_4 == 0) goto LAB_180203ca7;
          uVar9 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
          plVar5 = plVar3;
          goto LAB_180203caa;
        }
      }
    }
  }
LAB_180203cc4:
  bVar2 = true;
  plVar5 = (int64_t *)param_1[2];
  plVar8 = param_1;
  while (plVar5 != (int64_t *)0x0) {
    plVar8 = plVar5;
    if ((int)plVar5[6] == 0) {
      bVar2 = false;
LAB_180203ce2:
      plVar5 = (int64_t *)*plVar5;
    }
    else {
      if (*(int *)(param_5 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar4 = (byte *)plVar5[5];
        lVar7 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar6 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar6) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar6);
      }
      if (!bVar2) goto LAB_180203ce2;
      plVar5 = (int64_t *)plVar5[1];
    }
  }
  plVar5 = plVar8;
  if (bVar2) {
    if (plVar8 != (int64_t *)param_1[1]) {
      plVar5 = (int64_t *)SystemFunction_00018066b9a0(plVar8);
      goto LAB_180203d02;
    }
  }
  else {
LAB_180203d02:
    if (*(int *)(param_5 + 0x10) == 0) {
LAB_180203e0a:
      *param_2 = plVar5;
      return param_2;
    }
    if ((int)plVar5[6] != 0) {
      pbVar4 = *(byte **)(param_5 + 8);
      lVar7 = plVar5[5] - (int64_t)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_180203e0a;
    }
  }
  if (plVar8 != param_1) {
    if ((int)plVar8[6] == 0) {
LAB_180203d77:
      uVar10 = 1;
      goto LAB_180203dc0;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar4 = (byte *)plVar8[5];
      lVar7 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar7];
        if (bVar1 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_180203d77;
    }
  }
  uVar10 = 0;
LAB_180203dc0:
  lVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x80,(char)param_1[5]);
  SystemCommunicationProcessor(lVar7 + 0x20,param_5);
  *(int32_t *)(lVar7 + 0x78) = 0;
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar7,plVar8,param_1,uVar10);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_03e30(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void DataStructure_03e30(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  int64_t param_5)
{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int32_t uVar4;
  int64_t lVar5;
  if (((char)param_4 == '\0') && (param_3 != param_1)) {
    if (*(int *)(param_3 + 0x30) == 0) {
LAB_180203e9b:
      uVar4 = 1;
      goto LAB_180203ea4;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar2 = *(byte **)(param_3 + 0x28);
      lVar5 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar3 = (uint)pbVar2[lVar5];
        if (bVar1 != uVar3) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar1 - uVar3) < 1) goto LAB_180203e9b;
    }
  }
  uVar4 = 0;
LAB_180203ea4:
  lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x80,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  SystemCommunicationProcessor(lVar5 + 0x20,param_5);
  *(int32_t *)(lVar5 + 0x78) = 0;
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar5,param_3,param_1,uVar4);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t * DataStructure_03f10(void)
{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  uint64_t uVar5;
  char cVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int iVar11;
  float fVar12;
  int8_t stack_special_x_10;
  int64_t lStackX_20;
  plVar9 = (int64_t *)0x0;
  lStackX_20 = 0;
  cVar6 = GenericFunction_180068a90(0x180c919f0,&lStackX_20);
  plVar7 = core_system_config;
  lVar10 = lStackX_20;
  do {
    core_system_config = plVar7;
    lStackX_20 = lVar10;
    if (cVar6 == '\0') {
      DataStructure_041f0(core_system_config,plVar7,(int64_t)plVar7 - (int64_t)core_system_config >> 4,
                    stack_special_x_10);
      plVar7 = (int64_t *)(uint64_t)core_system_config;
      iVar11 = (int)((int64_t)core_system_config - (int64_t)core_system_config >> 4) + -1;
      fVar12 = (float)(int)core_system_config;
      if (iVar11 < 0) {
// 函数: void DataStructure_040b7(void)
void DataStructure_040b7(void)
{
  uint64_t uVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int unaff_EBP;
  int64_t lVar5;
  int unaff_EDI;
  int8_t uVar6;
  int32_t uVar7;
  uint64_t unaff_R12;
  int unaff_R15D;
  bool bVar8;
  lVar5 = (int64_t)unaff_EDI << 4;
  do {
    uVar6 = (int8_t)unaff_R12;
    if (unaff_R15D <= unaff_EBP) {
// 函数: void DataStructure_041d5(void)
void DataStructure_041d5(void)
{
  int8_t unaff_BPL;