#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_05_part006.c - 14 个函数
// 函数: void DataStructure_d80e5(uint64_t param_1,uint64_t param_2,char param_3)
void DataStructure_d80e5(uint64_t param_1,uint64_t param_2,char param_3)
{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int64_t lVar13;
  float *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar14;
  uint uVar15;
  uint64_t uVar16;
  int iVar17;
  uint uVar18;
  char in_R11B;
  int64_t unaff_R12;
  char unaff_R13B;
  char unaff_R14B;
  char unaff_R15B;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  char local_var_100;
  char local_var_110;
  char local_var_118;
  lVar14 = 0;
  do {
    iVar17 = 0x31;
    lVar1 = *(int64_t *)(unaff_RBP + 0x58);
    if (*(char *)(unaff_RBP + 0xa1) == '\0') {
      *unaff_RBX = *(float *)(lVar14 + lVar1);
      unaff_RBX[1] = *(float *)(lVar14 + 4 + lVar1);
      unaff_RBX[2] = *(float *)(lVar14 + 8 + lVar1);
    }
    else {
      fVar22 = *(float *)(unaff_RBP + 0xb4);
      fVar23 = *(float *)(unaff_RBP + 0xb8);
      fVar25 = *(float *)(lVar14 + lVar1);
      fVar26 = *(float *)(unaff_RBP + 0xc4);
      fVar24 = *(float *)(unaff_RBP + 200);
      fVar19 = *(float *)(lVar14 + 4 + lVar1);
      fVar21 = *(float *)(lVar14 + 8 + lVar1);
      fVar20 = *(float *)(unaff_RBP + 0xd4);
      fVar2 = *(float *)(unaff_RBP + 0xd8);
      fVar3 = *(float *)(unaff_RBP + 0xe4);
      fVar4 = *(float *)(unaff_RBP + 0xe8);
      *unaff_RBX = *(float *)(unaff_RBP + 0xb0) * fVar25 + *(float *)(unaff_RBP + 0xc0) * fVar19 +
                   *(float *)(unaff_RBP + 0xd0) * fVar21 + *(float *)(unaff_RBP + 0xe0);
      unaff_RBX[2] = fVar23 * fVar25 + fVar24 * fVar19 + fVar2 * fVar21 + fVar4;
      unaff_RBX[1] = fVar22 * fVar25 + fVar26 * fVar19 + fVar20 * fVar21 + fVar3;
    }
    unaff_RBX[0x10] = *(float *)(lVar14 + 0x5c + lVar1);
    unaff_RBX[3] = *(float *)(lVar14 + 0xc + lVar1);
    unaff_RBX[6] = *(float *)(lVar14 + 0x2c + lVar1);
    unaff_RBX[0xd] = *(float *)(lVar14 + 0x60 + lVar1);
    unaff_RBX[0xe] = *(float *)(lVar14 + 100 + lVar1);
    unaff_RBX[0xf] = *(float *)(lVar14 + 0x68 + lVar1);
    fVar25 = *(float *)(lVar14 + lVar1) - *(float *)(lVar14 + 0x10 + lVar1);
    if (param_3 == '\0') {
      unaff_RBX[9] = fVar25;
      fVar21 = *(float *)(lVar14 + 4 + lVar1) - *(float *)(lVar14 + 0x14 + lVar1);
      unaff_RBX[10] = fVar21;
      fVar19 = *(float *)(lVar14 + 8 + lVar1) - *(float *)(lVar14 + 0x18 + lVar1);
      unaff_RBX[0xb] = fVar19;
    }
    else {
      fVar19 = *(float *)(lVar14 + 4 + lVar1) - *(float *)(lVar14 + 0x14 + lVar1);
      fVar23 = *(float *)(lVar14 + 8 + lVar1) - *(float *)(lVar14 + 0x18 + lVar1);
      fVar21 = *(float *)(unaff_RBP + 0xb4) * fVar25;
      fVar22 = *(float *)(unaff_RBP + 0xb8) * fVar25;
      fVar25 = *(float *)(unaff_RBP + 0xc0) * fVar19 + *(float *)(unaff_RBP + 0xb0) * fVar25 +
               *(float *)(unaff_RBP + 0xd0) * fVar23;
      fVar21 = *(float *)(unaff_RBP + 0xc4) * fVar19 + fVar21 +
               *(float *)(unaff_RBP + 0xd4) * fVar23;
      fVar19 = *(float *)(unaff_RBP + 200) * fVar19 + fVar22 + *(float *)(unaff_RBP + 0xd8) * fVar23
      ;
      unaff_RBX[9] = fVar25;
      unaff_RBX[10] = fVar21;
      unaff_RBX[0xb] = fVar19;
    }
    unaff_RBX[0xb] = fVar19 * 60.0;
    unaff_RBX[9] = fVar25 * 60.0;
    unaff_RBX[10] = fVar21 * 60.0;
    fVar25 = *(float *)(lVar14 + 0x24 + lVar1);
    fVar19 = *(float *)(lVar14 + 0x20 + lVar1);
    fVar21 = fVar25 * 49.0;
    unaff_RBX[7] = *(float *)(unaff_RBP + 0xa4);
    if (*(int *)(unaff_RSI + 0x10c) == 0) {
      iVar5 = (int)fVar21;
      iVar10 = (int)(fVar21 + 1.0);
      fVar21 = fVar21 - (float)iVar5;
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      else if (0x31 < iVar10) {
        iVar10 = iVar17;
      }
      lVar13 = (int64_t)iVar10;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0x31 < iVar5) {
        iVar5 = iVar17;
      }
      uVar18 = *(uint *)(lVar14 + 0x44 + lVar1);
      lVar8 = (int64_t)iVar5;
      fVar22 = *(float *)(unaff_RSI + 0xbf0 + lVar8 * 0x10);
      fVar23 = *(float *)(unaff_RSI + 0xbf4 + lVar8 * 0x10);
      fVar22 = (*(float *)(unaff_RSI + 0xbf0 + lVar13 * 0x10) - fVar22) * fVar21 + fVar22;
      fVar26 = *(float *)(unaff_RSI + 0xbf8 + lVar8 * 0x10);
      fVar23 = (*(float *)(unaff_RSI + 0xbf4 + lVar13 * 0x10) - fVar23) * fVar21 + fVar23;
      fVar24 = *(float *)(unaff_RSI + 0xbfc + lVar8 * 0x10);
      fVar26 = (*(float *)(unaff_RSI + 0xbf8 + lVar13 * 0x10) - fVar26) * fVar21 + fVar26;
      fVar24 = (*(float *)(unaff_RSI + 0xbfc + lVar13 * 0x10) - fVar24) * fVar21 + fVar24;
      if (uVar18 != 0xffffffff) {
        fVar21 = (float)(uVar18 >> 0x10 & 0xff);
        fVar20 = (float)(uVar18 >> 8 & 0xff);
        fVar26 = (float)(uVar18 & 0xff) * (float)(uVar18 & 0xff) * 1.5378702e-05 * fVar26;
        fVar22 = fVar21 * fVar21 * 1.5378702e-05 * fVar22;
        fVar23 = fVar20 * fVar20 * 1.5378702e-05 * fVar23;
      }
    }
    else {
      uVar18 = *(uint *)(lVar14 + 0x44 + lVar1);
      iVar10 = (int)(fVar21 + 1.0);
      fVar22 = (float)(uVar18 >> 0x10 & 0xff) * 0.003921569;
      iVar5 = (int)fVar21;
      fVar23 = (float)(uVar18 >> 8 & 0xff) * 0.003921569;
      fVar26 = (float)(uVar18 & 0xff) * 0.003921569;
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      else if (0x31 < iVar10) {
        iVar10 = iVar17;
      }
      if (iVar5 < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar5;
        if (0x31 < iVar5) {
          iVar6 = iVar17;
        }
      }
      fVar24 = *(float *)(unaff_RSI + 0xbfc + (int64_t)iVar6 * 0x10);
      fVar24 = (*(float *)(unaff_RSI + 0xbfc + (int64_t)iVar10 * 0x10) - fVar24) *
               (fVar21 - (float)iVar5) + fVar24;
    }
    unaff_RBX[0x11] = *(float *)(lVar14 + 0x6c + lVar1);
    uVar7 = (uint)(int64_t)(fVar24 * 255.9);
    uVar18 = 0xff;
    if (uVar7 < 0xff) {
      uVar18 = uVar7;
    }
    uVar11 = (uint)(int64_t)(fVar22 * 255.9);
    uVar7 = 0xff;
    if (uVar11 < 0xff) {
      uVar7 = uVar11;
    }
    uVar12 = (uint)(int64_t)(fVar23 * 255.9);
    uVar11 = 0xff;
    if (uVar12 < 0xff) {
      uVar11 = uVar12;
    }
    uVar15 = (uint)(int64_t)(fVar26 * 255.9);
    uVar12 = 0xff;
    if (uVar15 < 0xff) {
      uVar12 = uVar15;
    }
    unaff_RBX[8] = (float)(((uVar18 << 8 | uVar7) << 8 | uVar11) << 8 | uVar12);
    if ((local_var_118 == '\0') || (unaff_R15B == '\0')) {
      if ((in_R11B == '\0') || (unaff_R15B == '\0')) {
        unaff_RBX[4] = 0.0;
        fVar25 = 0.0;
      }
      else {
        iVar17 = *(int *)(unaff_RSI + 0xfc4);
        iVar5 = (int)*(short *)(lVar14 + 0x32 + lVar1);
        iVar10 = *(int *)(unaff_RSI + 0xfc8);
        unaff_RBX[4] = (float)(iVar5 % iVar17) / (float)iVar17;
        fVar25 = (float)(iVar5 / iVar17) / (float)iVar10;
      }
    }
    else {
      uVar18 = *(uint *)(unaff_RSI + 0xfcc);
      uVar9 = (uint64_t)uVar18;
      fVar19 = fVar19 * fVar25 * *(float *)(unaff_RSI + 0xfd0) +
               (float)(int)*(short *)(lVar14 + 0x32 + lVar1);
      if (unaff_R13B == '\0') {
        uVar16 = (uint64_t)fVar19;
        if (unaff_R14B == '\0') {
          uVar9 = (uint64_t)(uVar18 - 1);
          if ((uint)uVar16 < uVar18 - 1) {
            uVar9 = uVar16 & 0xffffffff;
          }
        }
        else {
          uVar9 = (uVar16 & 0xffffffff) % uVar9;
        }
        uVar18 = *(uint *)(unaff_RSI + 0xfc4);
        fVar25 = (float)(uVar9 / uVar18) / (float)*(int *)(unaff_RSI + 0xfc8);
        unaff_RBX[4] = (float)(uVar9 % (uint64_t)uVar18) / (float)(int)uVar18;
      }
      else if (unaff_R14B == '\0') {
        fVar25 = 0.0;
        fVar21 = (float)(uVar18 - 1);
        if (fVar19 <= (float)(uVar18 - 1)) {
          fVar21 = fVar19;
        }
        unaff_RBX[4] = fVar21;
      }
      else {
        fVar25 = (float)fmodf(uVar9,(float)uVar9);
        unaff_RBX[4] = fVar25;
        fVar25 = 0.0;
        in_R11B = local_var_100;
      }
    }
    lVar14 = lVar14 + 0x70;
    unaff_RBX[5] = fVar25;
    unaff_RBX = unaff_RBX + 0x12;
    unaff_R12 = unaff_R12 + -1;
    param_3 = local_var_110;
  } while (unaff_R12 != 0);
  return;
}
// 函数: void DataStructure_d8715(void)
void DataStructure_d8715(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_d8730(uint64_t param_1,int64_t *param_2,int param_3)
void DataStructure_d8730(uint64_t param_1,int64_t *param_2,int param_3)
{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t stack_array_c8 [32];
  int32_t local_var_a8;
  uint64_t local_var_a0;
  int64_t *plStack_98;
  void *plocal_var_88;
  int8_t *plocal_var_80;
  int32_t local_var_78;
  int8_t stack_array_70 [72];
  uint64_t local_var_28;
  uVar1 = system_system_data_config;
  local_var_a0 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  local_var_a8 = 0;
  param_3 = param_3 * 0x50;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  stack_array_70[0] = 0;
  local_var_78 = 0x1c;
  plStack_98 = param_2;
  strcpy_s(stack_array_70,0x40,&system_data_fc60);
  CoreEngine_2037E0();
  plocal_var_88 = &system_state_ptr;
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,param_3,0x10,3);
  DataStructure_d9200(uVar1,param_2);
  *(uint64_t *)(*param_2 + 0x10) = uVar2;
  *(int *)(*param_2 + 0x18) = param_3;
  *(int *)(*param_2 + 0x1c) = param_3;
  *(int8_t *)(*param_2 + 0x20) = 0;
  local_var_a8 = 1;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_d8860(uint64_t param_1,int64_t *param_2,int param_3)
void DataStructure_d8860(uint64_t param_1,int64_t *param_2,int param_3)
{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t stack_array_c8 [32];
  int32_t local_var_a8;
  uint64_t local_var_a0;
  int64_t *plStack_98;
  void *plocal_var_88;
  int8_t *plocal_var_80;
  int32_t local_var_78;
  int8_t stack_array_70 [72];
  uint64_t local_var_28;
  uVar1 = system_system_data_config;
  local_var_a0 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  local_var_a8 = 0;
  param_3 = param_3 * 0x48;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  stack_array_70[0] = 0;
  local_var_78 = 0x1c;
  plStack_98 = param_2;
  strcpy_s(stack_array_70,0x40,&system_data_fc60);
  CoreEngine_2037E0();
  plocal_var_88 = &system_state_ptr;
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,param_3,0x10,3);
  DataStructure_d9380(uVar1,param_2);
  *(uint64_t *)(*param_2 + 0x10) = uVar2;
  *(int *)(*param_2 + 0x18) = param_3;
  *(int *)(*param_2 + 0x1c) = param_3;
  *(int8_t *)(*param_2 + 0x20) = 0;
  local_var_a8 = 1;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
DataStructure_d8990(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
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
        if ((int)(bVar1 - uVar6) < 1) goto LAB_1802d8ab4;
      }
LAB_1802d8a97:
      uVar9 = (uint64_t)plVar8 & 0xffffffffffffff00;
LAB_1802d8a9a:
      if (plVar5 != (int64_t *)0x0) {
        DataStructure_d8d80(param_1,param_2,plVar5,uVar9,param_5);
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
        if ((int)(bVar1 - uVar6) < 1) goto LAB_1802d8ab4;
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
          if (*param_4 == 0) goto LAB_1802d8a97;
          uVar9 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
          plVar5 = plVar3;
          goto LAB_1802d8a9a;
        }
      }
    }
  }
LAB_1802d8ab4:
  bVar2 = true;
  plVar5 = (int64_t *)param_1[2];
  plVar8 = param_1;
  while (plVar5 != (int64_t *)0x0) {
    plVar8 = plVar5;
    if ((int)plVar5[6] == 0) {
      bVar2 = false;
LAB_1802d8ad2:
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
      if (!bVar2) goto LAB_1802d8ad2;
      plVar5 = (int64_t *)plVar5[1];
    }
  }
  plVar5 = plVar8;
  if (bVar2) {
    if (plVar8 != (int64_t *)param_1[1]) {
      plVar5 = (int64_t *)SystemFunction_00018066b9a0(plVar8);
      goto LAB_1802d8af2;
    }
  }
  else {
LAB_1802d8af2:
    if (*(int *)(param_5 + 0x10) == 0) {
LAB_1802d8bfb:
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
      if ((int)(bVar1 - uVar6) < 1) goto LAB_1802d8bfb;
    }
  }
  uVar10 = 0;
  if (plVar8 == param_1) goto LAB_1802d8bb0;
  if ((int)plVar8[6] != 0) {
    if (*(int *)(param_5 + 0x10) == 0) goto LAB_1802d8bb0;
    pbVar4 = (byte *)plVar8[5];
    lVar7 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar4;
    do {
      bVar1 = *pbVar4;
      uVar6 = (uint)pbVar4[lVar7];
      if (bVar1 != uVar6) break;
      pbVar4 = pbVar4 + 1;
    } while (uVar6 != 0);
    if (0 < (int)(bVar1 - uVar6)) goto LAB_1802d8bb0;
  }
  uVar10 = 1;
LAB_1802d8bb0:
  lVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x58,(char)param_1[5]);
  CoreEngineDataTransformer(lVar7 + 0x20,param_5);
  *(uint64_t *)(lVar7 + 0x40) = 0;
  *(uint64_t *)(lVar7 + 0x48) = 0;
// WARNING: Subroutine does not return
  SystemStateController(lVar7,plVar8,param_1,uVar10);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
DataStructure_d8c20(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t *param_5)
{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  bool bVar6;
  plVar1 = (int64_t *)*param_1;
  if ((param_4 == plVar1) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = plVar1, (uint64_t)plVar1[4] < *param_5)) {
LAB_1802d8c82:
      uVar5 = 0;
      goto LAB_1802d8c85;
    }
  }
  else {
    plVar1 = (int64_t *)SystemFunction_00018066bd70(param_4);
    if (((uint64_t)param_4[4] < *param_5) && (*param_5 < (uint64_t)plVar1[4])) {
      if (*param_4 == 0) goto LAB_1802d8c82;
      uVar5 = 1;
      param_4 = plVar1;
LAB_1802d8c85:
      if (param_4 != (int64_t *)0x0) {
        DataStructure_d8e80(param_1,param_2,param_4,uVar5,param_5);
        return param_2;
      }
    }
  }
  bVar6 = true;
  plVar1 = param_1;
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    plVar2 = (int64_t *)param_1[2];
    do {
      plVar1 = plVar2;
      bVar6 = *param_5 < (uint64_t)plVar1[4];
      if (bVar6) {
        plVar2 = (int64_t *)plVar1[1];
      }
      else {
        plVar2 = (int64_t *)*plVar1;
      }
    } while (plVar2 != (int64_t *)0x0);
  }
  plVar2 = plVar1;
  if (bVar6) {
    if (plVar1 == (int64_t *)param_1[1]) {
      uVar3 = *param_5;
      goto DataStructure_d8cff;
    }
    plVar2 = (int64_t *)SystemFunction_00018066b9a0(plVar1);
  }
  uVar3 = *param_5;
  if (uVar3 <= (uint64_t)plVar2[4]) {
    *param_2 = plVar2;
    return param_2;
  }
DataStructure_d8cff:
  if ((plVar1 == param_1) || (uVar3 < (uint64_t)plVar1[4])) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,(char)param_1[5]);
  *(uint64_t *)(lVar4 + 0x20) = *param_5;
  *(int32_t *)(lVar4 + 0x28) = 0xffffffff;
  *(int32_t *)(lVar4 + 0x2c) = 0;
// WARNING: Subroutine does not return
  SystemStateController(lVar4,plVar1,param_1,uVar5);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_d8cff(void)
void DataStructure_d8cff(void)
{
  int64_t lVar1;
  uint64_t *unaff_RSI;
  int64_t unaff_RDI;
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,*(int8_t *)(unaff_RDI + 0x28));
  *(uint64_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(int32_t *)(lVar1 + 0x28) = 0xffffffff;
  *(int32_t *)(lVar1 + 0x2c) = 0;
// WARNING: Subroutine does not return
  SystemStateController(lVar1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_d8d17(void)
void DataStructure_d8d17(void)
{
  int64_t lVar1;
  uint64_t *unaff_RSI;
  int64_t unaff_RDI;
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,*(int8_t *)(unaff_RDI + 0x28));
  *(uint64_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(int32_t *)(lVar1 + 0x28) = 0xffffffff;
  *(int32_t *)(lVar1 + 0x2c) = 0;
// WARNING: Subroutine does not return
  SystemStateController(lVar1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_d8d1c(void)
void DataStructure_d8d1c(void)
{
  int64_t lVar1;
  uint64_t *unaff_RSI;
  int64_t unaff_RDI;
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,*(int8_t *)(unaff_RDI + 0x28));
  *(uint64_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(int32_t *)(lVar1 + 0x28) = 0xffffffff;
  *(int32_t *)(lVar1 + 0x2c) = 0;
// WARNING: Subroutine does not return
  SystemStateController(lVar1);
}
// 函数: void DataStructure_d8d67(void)
void DataStructure_d8d67(void)
{
  uint64_t unaff_RBX;
  uint64_t *unaff_R14;
  *unaff_R14 = unaff_RBX;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_d8d80(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void DataStructure_d8d80(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  int64_t param_5)
{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uVar5 = 0;
  if (((char)param_4 != '\0') || (param_3 == param_1)) goto LAB_1802d8e02;
  if (*(int *)(param_3 + 0x30) != 0) {
    if (*(int *)(param_5 + 0x10) == 0) goto LAB_1802d8e02;
    pbVar2 = *(byte **)(param_3 + 0x28);
    lVar4 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar2;
    do {
      bVar1 = *pbVar2;
      uVar3 = (uint)pbVar2[lVar4];
      if (bVar1 != uVar3) break;
      pbVar2 = pbVar2 + 1;
    } while (uVar3 != 0);
    if (0 < (int)(bVar1 - uVar3)) goto LAB_1802d8e02;
  }
  uVar5 = 1;
LAB_1802d8e02:
  lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x58,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  CoreEngineDataTransformer(lVar4 + 0x20,param_5);
  *(uint64_t *)(lVar4 + 0x40) = 0;
  *(uint64_t *)(lVar4 + 0x48) = 0;
// WARNING: Subroutine does not return
  SystemStateController(lVar4,param_3,param_1,uVar5);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_d8e80(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4,
void DataStructure_d8e80(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4,
                  uint64_t *param_5)
{
  int64_t lVar1;
  int32_t uVar2;
  if (((param_4 == '\0') && (param_3 != param_1)) && (*(uint64_t *)(param_3 + 0x20) <= *param_5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,*(int8_t *)(param_1 + 0x28));
  *(uint64_t *)(lVar1 + 0x20) = *param_5;
  *(int32_t *)(lVar1 + 0x28) = 0xffffffff;
  *(int32_t *)(lVar1 + 0x2c) = 0;
// WARNING: Subroutine does not return
  SystemStateController(lVar1,param_3,param_1,uVar2);
}
// 函数: void DataStructure_d8f30(int64_t *param_1,int64_t param_2)
void DataStructure_d8f30(int64_t *param_1,int64_t param_2)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  float *pfVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t lVar13;
  uint uVar14;
  uint uVar15;
  uint64_t uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fStack_20;
  uVar6 = *(uint *)(param_1 + 1);
  uVar7 = *(uint *)(param_2 + 8);
  if (uVar6 != uVar7) {
    lVar13 = *param_1;
    lVar12 = *param_1;
    uVar14 = *(uint *)(param_1 + 1);
    while (uVar14 = uVar14 + 1, uVar14 != uVar7) {
      lVar8 = *(int64_t *)(lVar12 + 8 + (uint64_t)(uVar14 >> 10) * 8);
      uVar16 = (uint64_t)(uVar14 + (uVar14 >> 10) * -0x400);
      uVar4 = *(uint64_t *)(lVar8 + 0x10 + uVar16 * 0x18);
      puVar1 = (uint64_t *)(lVar8 + uVar16 * 0x18);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      uVar19 = uVar14;
      if (uVar14 != uVar6) {
        fStack_20 = (float)uVar10;
        uVar18 = uVar14;
        uVar17 = uVar14;
        do {
          uVar17 = uVar17 - 1;
          uVar15 = uVar17 & 0x3ff;
          pfVar3 = (float *)(*(int64_t *)(lVar13 + 8 + (uint64_t)(uVar17 >> 10) * 8) + 8 +
                            (uint64_t)uVar15 * 0x18);
          uVar19 = uVar18;
          if (fStack_20 < *pfVar3 || fStack_20 == *pfVar3) break;
          lVar8 = *(int64_t *)(lVar13 + 8 + (uint64_t)(uVar17 >> 10) * 8);
          puVar1 = (uint64_t *)(lVar8 + (uint64_t)uVar15 * 0x18);
          uVar11 = puVar1[1];
          uVar5 = *(uint64_t *)(lVar8 + 0x10 + (uint64_t)uVar15 * 0x18);
          uVar19 = uVar18 - 1;
          lVar8 = *(int64_t *)(lVar13 + 8 + (uint64_t)(uVar18 >> 10) * 8);
          uVar16 = (uint64_t)(uVar18 + (uVar18 >> 10) * -0x400);
          puVar2 = (uint64_t *)(lVar8 + uVar16 * 0x18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar11;
          *(uint64_t *)(lVar8 + 0x10 + uVar16 * 0x18) = uVar5;
          uVar18 = uVar19;
        } while (uVar17 != uVar6);
      }
      uVar16 = (uint64_t)(uVar19 + (uVar19 >> 10) * -0x400);
      lVar8 = *(int64_t *)(lVar13 + 8 + (uint64_t)(uVar19 >> 10) * 8);
      puVar1 = (uint64_t *)(lVar8 + uVar16 * 0x18);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      *(uint64_t *)(lVar8 + 0x10 + uVar16 * 0x18) = uVar4;
    }
  }
  return;
}
// 函数: void DataStructure_d8f6a(void)
void DataStructure_d8f6a(void)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  float *pfVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint uVar10;
  uint64_t uVar11;
  uint unaff_EBP;
  uint unaff_ESI;
  uint uVar12;
  uint uVar13;
  uint in_R11D;
  int64_t unaff_retaddr;
  uint stack_special_x_8;
  float fStack0000000000000038;
  do {
    lVar6 = *(int64_t *)(unaff_retaddr + 8 + (uint64_t)(in_R11D >> 10) * 8);
    uVar11 = (uint64_t)(in_R11D + (in_R11D >> 10) * -0x400);
    uVar4 = *(uint64_t *)(lVar6 + 0x10 + uVar11 * 0x18);
    puVar1 = (uint64_t *)(lVar6 + uVar11 * 0x18);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar13 = stack_special_x_8;
    if (in_R11D != unaff_ESI) {
      fStack0000000000000038 = (float)uVar8;
      uVar12 = stack_special_x_8;
      do {
        stack_special_x_8 = stack_special_x_8 - 1;
        uVar10 = stack_special_x_8 & 0x3ff;
        pfVar3 = (float *)(*(int64_t *)(unaff_retaddr + 8 + (uint64_t)(stack_special_x_8 >> 10) * 8) + 8 +
                          (uint64_t)uVar10 * 0x18);
        uVar13 = uVar12;
        if (fStack0000000000000038 < *pfVar3 || fStack0000000000000038 == *pfVar3) break;
        lVar6 = *(int64_t *)(unaff_retaddr + 8 + (uint64_t)(stack_special_x_8 >> 10) * 8);
        puVar1 = (uint64_t *)(lVar6 + (uint64_t)uVar10 * 0x18);
        uVar9 = puVar1[1];
        uVar5 = *(uint64_t *)(lVar6 + 0x10 + (uint64_t)uVar10 * 0x18);
        uVar13 = uVar12 - 1;
        lVar6 = *(int64_t *)(unaff_retaddr + 8 + (uint64_t)(uVar12 >> 10) * 8);
        uVar11 = (uint64_t)(uVar12 + (uVar12 >> 10) * -0x400);
        puVar2 = (uint64_t *)(lVar6 + uVar11 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar9;
        *(uint64_t *)(lVar6 + 0x10 + uVar11 * 0x18) = uVar5;
        uVar12 = uVar13;
      } while (stack_special_x_8 != unaff_ESI);
    }
    in_R11D = in_R11D + 1;
    uVar11 = (uint64_t)(uVar13 + (uVar13 >> 10) * -0x400);
    lVar6 = *(int64_t *)(unaff_retaddr + 8 + (uint64_t)(uVar13 >> 10) * 8);
    puVar1 = (uint64_t *)(lVar6 + uVar11 * 0x18);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    *(uint64_t *)(lVar6 + 0x10 + uVar11 * 0x18) = uVar4;
    stack_special_x_8 = in_R11D;
    if (in_R11D == unaff_EBP) {
      return;
    }
  } while( true );
}
// 函数: void DataStructure_d9085(void)
void DataStructure_d9085(void)
{
  return;
}
// 函数: void DataStructure_d9090(int64_t *param_1,int64_t param_2)
void DataStructure_d9090(int64_t *param_1,int64_t param_2)
{
  uint uVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  float *pfVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t lVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  float fVar13;
  int32_t uVar14;
  uint64_t uVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  uint64_t uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  lVar18 = *param_1;
  lVar17 = *param_1;
  lVar16 = *param_1;
  uVar7 = *(uint *)(param_2 + 8);
  for (uVar22 = *(uint *)(param_1 + 1); uVar22 != uVar7; uVar22 = uVar22 + 1) {
    uVar1 = uVar22 - 1;
    lVar8 = *(int64_t *)(lVar16 + 8 + (uint64_t)(uVar22 >> 10) * 8);
    uVar19 = (uint64_t)(uVar22 + (uVar22 >> 10) * -0x400);
    puVar2 = (int32_t *)(lVar8 + uVar19 * 0x18);
    uVar11 = *puVar2;
    uVar12 = puVar2[1];
    fVar13 = (float)puVar2[2];
    uVar14 = puVar2[3];
    uVar6 = *(uint64_t *)(lVar8 + 0x10 + uVar19 * 0x18);
    pfVar5 = (float *)(*(int64_t *)(lVar18 + 8 + (uint64_t)(uVar1 >> 10) * 8) + 8 +
                      (uint64_t)(uVar1 + (uVar1 >> 10) * -0x400) * 0x18);
    uVar21 = uVar22;
    uVar20 = uVar22;
    if (*pfVar5 <= fVar13 && fVar13 != *pfVar5) {
      do {
        uVar23 = uVar1 - 1;
        uVar19 = (uint64_t)(uVar1 + (uVar1 >> 10) * -0x400);
        lVar8 = *(int64_t *)(lVar18 + 8 + (uint64_t)(uVar1 >> 10) * 8);
        puVar3 = (uint64_t *)(lVar8 + uVar19 * 0x18);
        uVar15 = puVar3[1];
        puVar2 = (int32_t *)(lVar8 + 0x10 + uVar19 * 0x18);
        uVar9 = *puVar2;
        uVar10 = puVar2[1];
        uVar21 = uVar20 - 1;
        uVar19 = (uint64_t)(uVar20 + (uVar20 >> 10) * -0x400);
        lVar8 = *(int64_t *)(lVar17 + 8 + (uint64_t)(uVar20 >> 10) * 8);
        puVar4 = (uint64_t *)(lVar8 + uVar19 * 0x18);
        *puVar4 = *puVar3;
        puVar4[1] = uVar15;
        puVar2 = (int32_t *)(lVar8 + 0x10 + uVar19 * 0x18);
        *puVar2 = uVar9;
        puVar2[1] = uVar10;
        pfVar5 = (float *)(*(int64_t *)(lVar18 + 8 + (uint64_t)(uVar23 >> 10) * 8) + 8 +
                          (uint64_t)(uVar23 + (uVar23 >> 10) * -0x400) * 0x18);
        uVar20 = uVar21;
        uVar1 = uVar23;
      } while (*pfVar5 <= fVar13 && fVar13 != *pfVar5);
    }
    uVar19 = (uint64_t)(uVar21 + (uVar21 >> 10) * -0x400);
    lVar8 = *(int64_t *)(lVar17 + 8 + (uint64_t)(uVar21 >> 10) * 8);
    puVar2 = (int32_t *)(lVar8 + uVar19 * 0x18);
    *puVar2 = uVar11;
    puVar2[1] = uVar12;
    puVar2[2] = fVar13;
    puVar2[3] = uVar14;
    *(uint64_t *)(lVar8 + 0x10 + uVar19 * 0x18) = uVar6;
  }
  return;
}