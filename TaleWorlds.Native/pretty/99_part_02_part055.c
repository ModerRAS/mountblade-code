#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_02_part055.c - 9 个函数
// 函数: void UtilitiesSystem_CacheManager(int64_t param_1)
void UtilitiesSystem_CacheManager(int64_t param_1)
{
  if (*(short *)(param_1 + 0x2b2) != *(short *)(param_1 + 0x2b6)) {
    if (*(short *)(param_1 + 0x2b0) != *(short *)(param_1 + 0x2b4)) {
      if (*(short *)(param_1 + 0x2b0) != *(short *)(param_1 + 0x2b4)) {
        if (*(char *)(param_1 + 0x2d8) == '\0') {
          DataStructure_e7e20();
        }
        else {
          UltraHighFreq_DataProcessor1(*(int64_t *)(param_1 + 0x28),*(int64_t *)(param_1 + 0x28) + 0xf8,
                        param_1 + 0x70);
        }
        *(int16_t *)(param_1 + 0x2b0) = *(int16_t *)(param_1 + 0x2b4);
      }
      return;
    }
    UltraHighFreq_DataProcessor1(*(int64_t *)(param_1 + 0x28),*(int64_t *)(param_1 + 0x28) + 0xf8,param_1 + 0x70)
    ;
    *(int16_t *)(param_1 + 0x2b6) = *(int16_t *)(param_1 + 0x2b2);
  }
  return;
}
// 函数: void GenericFunction_1801c0df0(int64_t *param_1)
void GenericFunction_1801c0df0(int64_t *param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  Function_5f413255();
  iVar3 = 0;
  if (0 < (int)param_1[4]) {
    do {
      iVar2 = 0;
      iVar1 = *(int *)((int64_t)param_1 + 0x24);
      if (0 < iVar1) {
        do {
          if (*(int64_t *)(*param_1 + (int64_t)(iVar1 * iVar3 + iVar2) * 0x28 + 8) != 0) {
// WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager();
          }
          iVar2 = iVar2 + 1;
          iVar1 = *(int *)((int64_t)param_1 + 0x24);
        } while (iVar2 < iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[4]);
  }
  if (*param_1 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}
// 函数: void GenericFunction_1801c0f40(int64_t *param_1)
void GenericFunction_1801c0f40(int64_t *param_1)
{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  uVar1 = 0;
  uVar3 = uVar1;
  if (param_1[1] - *param_1 >> 3 != 0) {
    do {
      (**(code **)(**(int64_t **)(uVar1 + *param_1) + 0x50))();
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while ((uint64_t)(int64_t)(int)uVar2 < (uint64_t)(param_1[1] - *param_1 >> 3));
  }
  return;
}
// 函数: void GenericFunction_1801c0f5f(void)
void GenericFunction_1801c0f5f(void)
{
  int64_t *unaff_RBX;
  uint64_t uVar1;
  uint unaff_EDI;
  uVar1 = (uint64_t)unaff_EDI;
  do {
    (**(code **)(**(int64_t **)(uVar1 + *unaff_RBX) + 0x50))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI < (uint64_t)(unaff_RBX[1] - *unaff_RBX >> 3));
  return;
}
// 函数: void GenericFunction_1801c0f9b(void)
void GenericFunction_1801c0f9b(void)
{
  return;
}
float * SystemFileHandler(float *param_1,float *param_2,float *param_3)
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
  fVar1 = param_1[3];
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = *param_1;
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  param_2[3] = 3.4028235e+38;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar9 = fVar8 * fVar6 - fVar3 * fVar1;
  fVar8 = fVar2 * fVar1 - param_3[2] * fVar5;
  fVar9 = fVar9 + fVar9;
  fVar7 = fVar7 * fVar5 - fVar2 * fVar6;
  fVar8 = fVar8 + fVar8;
  fVar7 = fVar7 + fVar7;
  fVar3 = param_3[2];
  *param_2 = (fVar7 * fVar6 - fVar8 * fVar1) + fVar9 * fVar4 + fVar2;
  fVar2 = param_3[1];
  param_2[2] = (fVar8 * fVar5 - fVar9 * fVar6) + fVar7 * fVar4 + fVar3;
  param_2[1] = (fVar9 * fVar1 - fVar7 * fVar5) + fVar8 * fVar4 + fVar2;
  return param_2;
}
float * UltraHighFreq_ConfigManager1(int64_t param_1,float *param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int8_t stack_array_18 [24];
  pfVar5 = (float *)SystemFileHandler(param_1,stack_array_18);
  fVar1 = *(float *)(param_1 + 0x14);
  param_2[3] = 3.4028235e+38;
  fVar2 = pfVar5[1];
  *param_2 = *pfVar5 + *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x18);
  fVar4 = pfVar5[2];
  param_2[1] = fVar1 + fVar2;
  param_2[2] = fVar3 + fVar4;
  return param_2;
}
float * GenericFunction_1801c1140(float *param_1,float *param_2,float *param_3)
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
  float fVar17;
  float fVar18;
  fVar1 = param_1[4];
  fVar2 = param_1[8];
  fVar3 = param_1[5];
  fVar4 = param_1[6];
  fVar5 = param_1[9];
  fVar6 = param_1[1];
  fVar18 = fVar6 * fVar4 - param_1[2] * fVar3;
  fVar16 = param_1[2] * fVar1 - *param_1 * fVar4;
  fVar7 = param_1[10];
  fVar15 = *param_1 * fVar3 - fVar6 * fVar1;
  fVar8 = param_1[10];
  fVar17 = 1.0 / (fVar16 * fVar5 + fVar18 * fVar2 + fVar15 * param_1[10]);
  fVar9 = *param_1;
  fVar10 = param_1[2];
  fVar11 = param_1[2];
  fVar12 = *param_3;
  fVar13 = param_3[1];
  fVar14 = param_3[2];
  *param_2 = (fVar2 * fVar4 - fVar1 * fVar8) * fVar17 * fVar13 +
             (fVar8 * fVar3 - fVar5 * fVar4) * fVar17 * fVar12 +
             (fVar1 * fVar5 - fVar2 * fVar3) * fVar17 * fVar14;
  param_2[1] = (fVar9 * fVar8 - fVar10 * fVar2) * fVar17 * fVar13 +
               (fVar11 * fVar5 - fVar6 * fVar7) * fVar17 * fVar12 +
               (fVar6 * fVar2 - fVar9 * fVar5) * fVar17 * fVar14;
  param_2[2] = fVar17 * fVar16 * fVar13 + fVar17 * fVar18 * fVar12 + fVar17 * fVar15 * fVar14;
  param_2[3] = fVar13 * 3.4028235e+38 + fVar12 * 3.4028235e+38 + fVar14 * 3.4028235e+38;
  return param_2;
}
float * GenericFunction_1801c13c0(int32_t *param_1,float *param_2,float *param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int32_t local_var_8c;
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  local_var_98 = *param_1;
  local_var_94 = param_1[1];
  local_var_90 = param_1[2];
  local_var_84 = param_1[5];
  local_var_88 = param_1[4];
  local_var_78 = param_1[8];
  local_var_80 = param_1[6];
  local_var_70 = param_1[10];
  local_var_74 = param_1[9];
  local_var_64 = param_1[0xd];
  local_var_68 = param_1[0xc];
  local_var_60 = param_1[0xe];
  local_var_5c = 0x3f800000;
  local_var_8c = 0;
  local_var_7c = 0;
  local_var_6c = 0;
  SystemCore_PerformanceMonitor(&local_var_98,&fStack_58);
  fVar1 = param_3[2];
  fVar2 = *param_3;
  fVar3 = param_3[1];
  *param_2 = fVar3 * fStack_48 + fVar2 * fStack_58 + fVar1 * fStack_38 + fStack_28;
  param_2[1] = fStack_54 * fVar2 + fStack_44 * fVar3 + fStack_34 * fVar1 + fStack_24;
  param_2[2] = fStack_50 * fVar2 + fStack_40 * fVar3 + fStack_30 * fVar1 + fStack_20;
  param_2[3] = fStack_4c * fVar2 + fStack_3c * fVar3 + fStack_2c * fVar1 + fStack_1c;
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1801c1560(uint *param_1,uint *param_2)
void GenericFunction_1801c1560(uint *param_1,uint *param_2)
{
  uint uVar1;
  uint local_var_38;
  uint local_var_34;
  uint local_var_30;
  uint local_var_2c;
  uint local_var_28;
  uint local_var_24;
  uint local_var_20;
  uint local_var_1c;
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)&local_var_38;
  do {
    LOCK();
    uVar1 = *param_1;
    *param_1 = *param_1 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  local_var_38 = param_1[1];
  local_var_34 = param_1[2];
  local_var_30 = param_1[3];
  local_var_2c = param_1[4];
  local_var_28 = param_1[5];
  local_var_24 = param_1[6];
  local_var_20 = param_1[7];
  local_var_1c = param_1[8];
  *param_1 = 0;
  *param_2 = local_var_38;
  param_2[1] = local_var_34;
  param_2[2] = local_var_30;
  param_2[3] = local_var_2c;
  param_2[4] = local_var_28;
  param_2[5] = local_var_24;
  param_2[6] = local_var_20;
  param_2[7] = local_var_1c;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)&local_var_38);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1801c15d0(int64_t param_1,uint *param_2,char param_3)
void GenericFunction_1801c15d0(int64_t param_1,uint *param_2,char param_3)
{
  uint uVar1;
  uint *puVar2;
  uint local_var_38;
  uint local_var_34;
  uint local_var_30;
  uint local_var_2c;
  uint local_var_28;
  uint local_var_24;
  uint local_var_20;
  uint local_var_1c;
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)&local_var_38;
  puVar2 = (uint *)((int64_t)param_3 * 0x100 + *(int64_t *)(param_1 + 0x18));
  do {
    LOCK();
    uVar1 = *puVar2;
    *puVar2 = *puVar2 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  local_var_38 = puVar2[1];
  local_var_34 = puVar2[2];
  local_var_30 = puVar2[3];
  local_var_2c = puVar2[4];
  local_var_28 = puVar2[5];
  local_var_24 = puVar2[6];
  local_var_20 = puVar2[7];
  local_var_1c = puVar2[8];
  *puVar2 = 0;
  *param_2 = local_var_38;
  param_2[1] = local_var_34;
  param_2[2] = local_var_30;
  param_2[3] = local_var_2c;
  param_2[4] = local_var_28;
  param_2[5] = local_var_24;
  param_2[6] = local_var_20;
  param_2[7] = local_var_1c;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)&local_var_38);
}
float * GenericFunction_1801c1690(float *param_1,float *param_2,float *param_3)
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
  fVar1 = param_1[8];
  fVar2 = param_1[9];
  fVar3 = param_1[10];
  fVar4 = param_1[0xb];
  fVar8 = param_3[1] - param_1[0xd];
  fVar5 = param_1[4];
  fVar6 = param_1[5];
  fVar7 = param_1[6];
  fVar9 = *param_3 - param_1[0xc];
  fVar10 = param_3[2] - param_1[0xe];
  *param_2 = param_1[1] * fVar8 + *param_1 * fVar9 + param_1[2] * fVar10;
  param_2[1] = fVar6 * fVar8 + fVar5 * fVar9 + fVar7 * fVar10;
  param_2[2] = fVar2 * fVar8 + fVar1 * fVar9 + fVar3 * fVar10;
  param_2[3] = fVar4 * fVar8 + fVar4 * fVar9 + fVar4 * fVar10;
  return param_2;
}
// 函数: void CoreEngine_1C1720(float *param_1,int32_t *param_2)
void CoreEngine_1C1720(float *param_1,int32_t *param_2)
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
  int32_t uVar10;
  float fVar11;
  fVar1 = param_1[9];
  fVar2 = param_1[8];
  fVar3 = param_1[10];
  fVar4 = param_1[1];
  fVar5 = param_1[10];
  fVar6 = *param_1;
  fVar7 = param_1[2];
  fVar8 = param_1[4];
  fVar11 = 1.0 / SQRT(fVar8 * fVar8 + param_1[5] * param_1[5] + param_1[6] * param_1[6]);
  fVar9 = param_1[5];
  uVar10 = asinf(fVar11 * param_1[6]);
  *param_2 = uVar10;
  uVar10 = atan2f(-(fVar7 / SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar7 * fVar7)),
                  fVar5 / SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
  param_2[1] = uVar10;
  uVar10 = atan2f(-(fVar8 * fVar11),fVar11 * fVar9);
  param_2[2] = uVar10;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1801c1880(void *param_1,int64_t param_2,uint64_t param_3,int8_t *param_4)
void GenericFunction_1801c1880(void *param_1,int64_t param_2,uint64_t param_3,int8_t *param_4)
{
  uint64_t uVar1;
  int64_t lVar2;
  int8_t stack_array_138 [32];
  int8_t stack_array_118 [8];
  void **pplocal_var_110;
  void *plocal_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  int32_t local_var_f0;
  int64_t *plStack_e8;
  void *plocal_var_e0;
  int64_t lStack_d8;
  int32_t local_var_d0;
  uint64_t local_var_c8;
  int32_t local_var_c0;
  int32_t local_var_bc;
  int32_t local_var_b8;
  int32_t local_var_b4;
  int64_t *plStack_b0;
  uint64_t local_var_a8;
  int32_t local_var_a0;
  int16_t local_var_9c;
  ushort local_var_9a;
  uint64_t local_var_98;
  void *plocal_var_90;
  uint *plocal_var_88;
  int32_t local_var_80;
  int32_t local_var_7c;
  uint stack_array_78 [2];
  uint64_t local_var_70;
  int8_t stack_array_68 [32];
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  int64_t *plStack_38;
  uint64_t local_var_30;
  local_var_98 = 0xfffffffffffffffe;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_138;
  plocal_var_90 = &processed_var_672_ptr;
  plocal_var_88 = stack_array_78;
  local_var_80 = 0;
  stack_array_78[0] = stack_array_78[0] & 0xffffff00;
  if (param_2 != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_2 + lVar2) != '\0');
    local_var_80 = (int32_t)lVar2;
    strcpy_s(stack_array_78,0x20,param_2);
  }
  local_var_100 = SystemCore_LoggingSystem0(param_1,&plocal_var_90,1);
  local_var_a0 = 0;
  local_var_9c = 0;
  plStack_e8 = (int64_t *)0x0;
  plocal_var_e0 = &system_data_buffer_ptr;
  local_var_c8 = 0;
  lStack_d8 = 0;
  local_var_d0 = 0;
  plStack_b0 = (int64_t *)0x0;
  local_var_f0 = 0;
  local_var_c0 = 0;
  local_var_bc = 0;
  local_var_b8 = 0;
  local_var_b4 = 0;
  stack_array_118[0] = 0;
  uVar1 = *(uint64_t *)(param_1 + 0x15b8);
  pplocal_var_110 = &plocal_var_90;
  local_var_f8._4_4_ = (int32_t)(((uint64_t)local_var_9a << 0x30) >> 0x20);
  local_var_80 = 0;
  local_var_7c = local_var_f8._4_4_;
  stack_array_78[0] = 0;
  local_var_70 = 0;
  plocal_var_108 = param_1;
  local_var_f8 = (uint64_t)local_var_9a << 0x30;
  local_var_a8 = local_var_100;
  plocal_var_90 = param_1;
  plocal_var_88 = (uint *)local_var_100;
  SystemCore_NetworkHandler0(stack_array_68,&plocal_var_e0);
  local_var_48 = local_var_c0;
  local_var_44 = local_var_bc;
  local_var_40 = local_var_b8;
  local_var_3c = local_var_b4;
  plStack_38 = plStack_b0;
  if (plStack_b0 != (int64_t *)0x0) {
    (**(code **)(*plStack_b0 + 0x28))();
  }
  lVar2 = UIRenderingEngine(uVar1,0,&plocal_var_90,stack_array_118);
  if ((param_4 != (int8_t *)0x0) && (lVar2 == 0)) {
    *param_4 = 0;
  }
  if (plStack_b0 != (int64_t *)0x0) {
    (**(code **)(*plStack_b0 + 0x38))();
  }
  pplocal_var_110 = &plocal_var_e0;
  plocal_var_e0 = &system_data_buffer_ptr;
  if (lStack_d8 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  lStack_d8 = 0;
  local_var_c8 = local_var_c8 & 0xffffffff00000000;
  plocal_var_e0 = &system_state_ptr;
  if (plStack_e8 != (int64_t *)0x0) {
    (**(code **)(*plStack_e8 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_138);
}
uint64_t *
GenericFunction_1801c1aa0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_6552_ptr;
  SystemCore_SecurityManager();
  if ((param_2 & 1) != 0) {
    free(param_1,0xe8,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address