// 原始函数语义化别名定义
// 本文件包含当前文件中使用的原始函数的语义化别名
// 这些别名提高了代码的可读性和维护性
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part516.c - 8 个函数
// 函数: void function_544700(int64_t param_1,float param_2,int64_t param_3)
void function_544700(int64_t param_1,float param_2,int64_t param_3)
{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  int32_t uVar4;
  fVar2 = *(float *)(param_1 + 0x8c0) - param_2;
  if ((fVar2 <= -0.001) || (0.001 <= fVar2)) {
    *(float *)(param_1 + 0x8c0) = param_2;
    if (param_3 != 0) {
      lVar1 = *(int64_t *)(param_3 + 0x738);
      *(int32_t *)(lVar1 + 0x15c) = *(int32_t *)(*(int64_t *)(param_3 + 0x6d8) + 0x8c0);
      fVar2 = *(float *)(param_3 + 0x3a4) + *(float *)(param_3 + 0x38c) +
              (float)*(int *)(param_3 + 0x58c);
      if (*(int64_t *)(param_3 + 0x6d8) != 0) {
        fVar3 = *(float *)(*(int64_t *)(param_3 + 0x6d8) + 0x8c0);
        fVar2 = fVar3 * fVar2 * fVar3 * fVar3;
      }
      if (-1 < *(int *)(param_3 + 0x560)) {
        fVar3 = (float)function_524cf0((int64_t)*(int *)(param_3 + 0x560) * 0xa60 +
                                     *(int64_t *)(param_3 + 0x8d8) + 0x30a0);
        fVar2 = fVar2 + fVar3;
      }
      *(float *)(lVar1 + 0x158) = fVar2;
      if (-1 < *(int *)(param_3 + 0x560)) {
        *(int32_t *)
         (*(int64_t *)
           ((int64_t)*(int *)(param_3 + 0x560) * 0xa60 + 0x37d8 + *(int64_t *)(param_3 + 0x8d8)) +
         0x160) = *(int32_t *)(*(int64_t *)(param_3 + 0x6d8) + 0x8c0);
      }
      if (-1 < *(int *)(param_3 + 0x564)) {
        lVar1 = (int64_t)*(int *)(param_3 + 0x564) * 0xa60 + *(int64_t *)(param_3 + 0x8d8);
        uVar4 = function_524cf0(lVar1 + 0x30a0);
        *(int32_t *)(*(int64_t *)(lVar1 + 0x37d8) + 0x158) = uVar4;
      }
    }
    if (render_system_memory != 0) {
      *(int8_t *)(render_system_memory + 0x87b728) = 1;
    }
  }
  return;
}
// 函数: void function_544860(int64_t param_1,int param_2,int64_t *param_3,uint64_t param_4)
void function_544860(int64_t param_1,int param_2,int64_t *param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  uint64_t uVar5;
  uVar5 = 0xfffffffffffffffe;
  iVar4 = _Mtx_lock(param_1 + 0x958);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  lVar1 = param_1 + (int64_t)param_2 * 8;
  plVar2 = (int64_t *)*param_3;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(int64_t **)(lVar1 + 0x18);
  *(int64_t **)(lVar1 + 0x18) = plVar2;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar2 = (int64_t *)*param_3;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x1c0))(plVar2,0x40000000,0xffffffff,param_4,uVar5);
  }
  iVar4 = _Mtx_unlock(param_1 + 0x958);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  if ((int64_t *)*param_3 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_3 + 0x38))();
  }
  return;
}
// 函数: void function_544930(int64_t param_1,int64_t *param_2)
void function_544930(int64_t param_1,int64_t *param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  iVar3 = _Mtx_lock(param_1 + 0x958);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  uVar6 = 0;
  if (((*(int64_t *)(param_1 + 0x8a8) != 0) &&
      (lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260), lVar4 != 0)) &&
     (lVar4 = *(int64_t *)(lVar4 + 0x210), lVar4 != 0)) {
    *(uint64_t *)(lVar4 + 0x48) = 0;
    *(uint64_t *)(lVar4 + 0x50) = 0;
  }
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar1 = *(int64_t **)(param_1 + 0x8a8);
  *(int64_t **)(param_1 + 0x8a8) = param_2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  lVar4 = *(int64_t *)(param_1 + 0x8a8);
  if (lVar4 != 0) {
    *(int8_t *)(lVar4 + 0x2e4) = 1;
    uVar7 = uVar6;
    if (*(int64_t *)(lVar4 + 0x1c8) - *(int64_t *)(lVar4 + 0x1c0) >> 3 != 0) {
      do {
        function_2e8580(*(uint64_t *)(uVar7 + *(int64_t *)(lVar4 + 0x1c0)),1);
        uVar5 = (int)uVar6 + 1;
        uVar6 = (uint64_t)uVar5;
        uVar7 = uVar7 + 8;
      } while ((uint64_t)(int64_t)(int)uVar5 <
               (uint64_t)(*(int64_t *)(lVar4 + 0x1c8) - *(int64_t *)(lVar4 + 0x1c0) >> 3));
    }
    lVar4 = *(int64_t *)(param_1 + 0x8a8);
    if ((*(int64_t *)(lVar4 + 0x260) != 0) &&
       (lVar2 = *(int64_t *)(*(int64_t *)(lVar4 + 0x260) + 0x210), lVar2 != 0)) {
      *(code **)(lVar2 + 0x50) = function_541110;
      *(int64_t *)(lVar2 + 0x48) = param_1;
      lVar4 = *(int64_t *)(param_1 + 0x8a8);
    }
    if ((*(int64_t *)(lVar4 + 0x20) != 0) &&
       (*(char *)(*(int64_t *)(lVar4 + 0x20) + 0x60d08) != '\0')) {
      Function_713c3c52();
    }
  }
  function_5444c0(param_1);
  RenderingSystem_544AC0(param_1);
  iVar3 = _Mtx_unlock(param_1 + 0x958);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}
// 函数: void RenderingSystem_544AC0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_544AC0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lStack_30;
  int32_t local_var_28;
  int8_t stack_array_20 [24];
  uVar4 = 0xfffffffffffffffe;
  lVar2 = *(int64_t *)(param_1 + 0x930);
  lVar1 = lVar2 + 0x2be8;
  lVar5 = lVar1;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  local_var_28 = *(int32_t *)(param_1 + 0x938);
  lStack_30 = param_1;
  function_4dd4d0(lVar2 + 0x2b88,stack_array_20,&lStack_30,param_4,uVar4,lVar5,1);
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_544c30(int64_t param_1,float *param_2)
void function_544c30(int64_t param_1,float *param_2)
{
  uint uVar1;
  char cVar2;
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
  float *pfVar15;
  uint *puVar16;
  int64_t lVar17;
  int64_t lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int8_t stack_array_98 [32];
  uint local_var_78;
  uint local_var_74;
  uint local_var_70;
  uint local_var_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint local_var_5c;
  int8_t stack_array_58 [16];
  uint local_var_48;
  uint local_var_44;
  uint local_var_40;
  uint local_var_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  uint local_var_2c;
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  lVar18 = *(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260);
  cVar2 = *(char *)(*(int64_t *)(lVar18 + 0x210) + 0xde);
  puVar16 = (uint *)((int64_t)*(char *)(*(int64_t *)(lVar18 + 0x210) + 0xe2) * 0x100 +
                    *(int64_t *)(lVar18 + 0x18));
  do {
    LOCK();
    uVar1 = *puVar16;
    *puVar16 = *puVar16 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  local_var_78 = puVar16[1];
  local_var_74 = puVar16[2];
  local_var_70 = puVar16[3];
  local_var_6c = puVar16[4];
  fVar19 = (float)puVar16[5];
  fVar20 = (float)puVar16[6];
  fVar3 = (float)puVar16[7];
  local_var_5c = puVar16[8];
  *puVar16 = 0;
  lVar17 = *(int64_t *)(param_1 + 0x8a8);
  fStack_68 = fVar19;
  fStack_64 = fVar20;
  fStack_60 = fVar3;
  local_var_48 = local_var_78;
  local_var_44 = local_var_74;
  local_var_40 = local_var_70;
  local_var_3c = local_var_6c;
  fStack_38 = fVar19;
  fStack_34 = fVar20;
  fStack_30 = fVar3;
  local_var_2c = local_var_5c;
  pfVar15 = (float *)SystemFileHandler(&local_var_78,stack_array_58,param_1 + 0x920);
  fVar4 = *(float *)(lVar17 + 0x84);
  fVar5 = *(float *)(lVar17 + 0x88);
  fVar6 = *(float *)(lVar17 + 0x8c);
  fVar19 = fVar19 + *pfVar15;
  fVar20 = fVar20 + pfVar15[1];
  fVar7 = *(float *)(lVar17 + 0x74);
  fVar8 = *(float *)(lVar17 + 0x78);
  fVar9 = *(float *)(lVar17 + 0x7c);
  fVar10 = *(float *)(lVar17 + 0x94);
  fVar11 = *(float *)(lVar17 + 0x98);
  fVar12 = *(float *)(lVar17 + 0x9c);
  fVar21 = fVar3 + pfVar15[2] +
           *(float *)(*(int64_t *)(*(int64_t *)(lVar18 + 0x208) + 0x140) + 0x100 +
                     (int64_t)cVar2 * 0x1b0);
  fVar3 = *(float *)(lVar17 + 0xa4);
  fVar13 = *(float *)(lVar17 + 0xa8);
  fVar14 = *(float *)(lVar17 + 0xac);
  *param_2 = fVar20 * *(float *)(lVar17 + 0x80) + fVar19 * *(float *)(lVar17 + 0x70) +
             fVar21 * *(float *)(lVar17 + 0x90) + *(float *)(lVar17 + 0xa0);
  param_2[1] = fVar20 * fVar4 + fVar19 * fVar7 + fVar21 * fVar10 + fVar3;
  param_2[2] = fVar20 * fVar5 + fVar19 * fVar8 + fVar21 * fVar11 + fVar13;
  param_2[3] = fVar20 * fVar6 + fVar19 * fVar9 + fVar21 * fVar12 + fVar14;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_98);
}
int64_t * function_544d70(int64_t param_1,int64_t *param_2)
{
  int64_t *plVar1;
  plVar1 = *(int64_t **)(param_1 + 0x2550);
  *param_2 = (int64_t)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_2;
}
uint64_t *
function_544dc0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 5) = 3;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[1] = 0;
  function_5e7fe0(param_1,0,param_3,param_4,0xfffffffffffffffe);
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_544f90(uint64_t *param_1)
void function_544f90(uint64_t *param_1)
{
  int iVar1;
  int64_t *plVar2;
  uint uVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int iVar9;
  uint uVar10;
  uVar10 = *(int *)(render_system_data_memory + 0x40) * *(int *)(render_system_data_memory + 0x40);
  if (uVar10 == 0) {
    plVar4 = (int64_t *)0x0;
  }
  else {
    plVar4 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar10 * 2,3);
  }
  param_1[2] = plVar4;
  plVar2 = param_1 + 2;
  iVar9 = 0;
  if (((0 < (int)uVar10) && (iVar9 = 0, 7 < uVar10)) &&
     ((plVar2 < plVar4 ||
      ((int64_t *)((int64_t)plVar4 + (int64_t)(int)(uVar10 - 1) * 2) < plVar2)))) {
    uVar3 = uVar10 & 0x80000007;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
    }
    iVar9 = 0;
    do {
      iVar9 = iVar9 + 8;
    } while (iVar9 < (int)(uVar10 - uVar3));
    iVar1 = (uVar10 - uVar3) + 7;
    for (uVar8 = (uint64_t)((int64_t)((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3) << 4) >> 1;
        uVar8 != 0; uVar8 = uVar8 - 1) {
      *(int16_t *)plVar4 = 0xfffe;
      plVar4 = (int64_t *)((int64_t)plVar4 + 2);
    }
  }
  for (lVar5 = (int64_t)iVar9; lVar5 < (int)uVar10; lVar5 = lVar5 + 1) {
    *(int16_t *)(*plVar2 + lVar5 * 2) = 0xfffe;
  }
  puVar6 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x10,8,3);
  *puVar6 = 0;
  puVar6[1] = 0;
  *param_1 = puVar6;
  function_5f2c50(puVar6);
  function_546020(param_1 + 3);
  (**(code **)(*render_system_data_memory + 0x1f0))();
  uVar7 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x50,8,3);
// WARNING: Subroutine does not return
  memset(uVar7,0,0x50);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_545140(uint64_t param_1,uint *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uint uVar2;
  uint64_t local_neg_ffc8;
  uint64_t uVar3;
  uint64_t local_neg_ffd0;
  uint64_t uVar5;
  int32_t uVar4;
  int32_t uVar6;
  uVar4 = (int32_t)((uint64_t)local_neg_ffc8 >> 0x20);
  uVar6 = (int32_t)((uint64_t)local_neg_ffd0 >> 0x20);
  uVar2 = *param_2;
  uVar1 = (**(code **)(*render_system_data_memory + 0xe8))();
  if (uVar2 < (uint)uVar1) {
    if ((((char)param_2[5] == '\0') && ((system_status_flag - 2U & 0xfffffffc) == 0)) &&
       (system_status_flag != 4)) {
      uVar5 = *(uint64_t *)(param_2 + 8);
      uVar3 = *(uint64_t *)(param_2 + 6);
      function_5458e0(param_1,uVar2,param_3,param_2 + 1,uVar3,uVar5,
                    *(int8_t *)((int64_t)param_2 + 0x15));
      uVar4 = (int32_t)((uint64_t)uVar3 >> 0x20);
      uVar6 = (int32_t)((uint64_t)uVar5 >> 0x20);
      uVar2 = *param_2;
    }
    uVar1 = function_545230(param_1,uVar2,param_2 + 1,*(int8_t *)((int64_t)param_2 + 0x17),
                          CONCAT44(uVar4,param_2[10]),CONCAT44(uVar6,param_2[0xb]),param_2[0xc],
                          param_3,param_4,*(int8_t *)((int64_t)param_2 + 0x16));
  }
  else {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_545230(uint64_t *param_1,uint param_2,float *param_3,char param_4,float param_5,
void function_545230(uint64_t *param_1,uint param_2,float *param_3,char param_4,float param_5,
                  int32_t param_6,float param_7,int64_t param_8,int64_t *param_9,char param_10)
{
  char cVar1;
  double dVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  void *puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  int8_t stack_array_208 [32];
  code *pcStack_1e8;
  char cStack_1d8;
  uint local_var_1d0;
  int32_t local_var_1cc;
  uint64_t local_var_1c8;
  int64_t *plStack_1c0;
  int iStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  uint64_t local_var_198;
  void *plocal_var_190;
  void *plocal_var_188;
  int32_t local_var_180;
  uint8_t stack_array_178 [16];
  void *plocal_var_168;
  void *plocal_var_160;
  int32_t local_var_158;
  uint8_t stack_array_150 [24];
  int8_t stack_array_138 [32];
  float afStack_118 [2];
  int8_t stack_array_110 [152];
  int iStack_78;
  uint64_t local_var_68;
  local_var_198 = 0xfffffffffffffffe;
  local_var_68 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_208;
  uVar8 = (uint64_t)(int)param_2;
  local_var_1c8 = param_9;
  pcStack_1e8 = SystemCore_MemoryManager;
  cStack_1d8 = param_4;
  local_var_1d0 = param_2;
  DataStructureManager(stack_array_138,0x30,4,function_1c2890);
  uVar10 = 0;
  iStack_78 = 0;
  if (param_8 != 0) {
    function_33dc50(stack_array_138,param_8);
  }
  if ((cStack_1d8 != '\0') && ((*(byte *)(*(int64_t *)*param_1 + 0x13 + uVar8 * 0x14) & 1) != 0)) {
    plocal_var_190 = &processed_var_5352_ptr;
    plocal_var_188 = stack_array_178;
    stack_array_178[0] = 0;
    local_var_180 = 8;
    strcpy_s(stack_array_178,10,&processed_var_5328_ptr);
    lVar5 = (int64_t)iStack_78;
    puVar6 = &system_buffer_ptr;
    if (plocal_var_188 != (void *)0x0) {
      puVar6 = plocal_var_188;
    }
    (**(code **)(*(int64_t *)(stack_array_138 + lVar5 * 0x30) + 0x10))
              (stack_array_138 + lVar5 * 0x30,puVar6);
    afStack_118[lVar5 * 0xc] = -NAN;
    afStack_118[lVar5 * 0xc + 1] = 1.0;
    stack_array_110[lVar5 * 0x30] = 0;
    iStack_78 = iStack_78 + 1;
    plocal_var_190 = &system_state_ptr;
  }
  if ((0.0 < param_7) && ((*(byte *)(*(int64_t *)*param_1 + 0x13 + uVar8 * 0x14) & 2) != 0)) {
    plocal_var_168 = &processed_var_5352_ptr;
    plocal_var_160 = stack_array_150;
    stack_array_150[0] = 0;
    local_var_158 = 9;
    strcpy_s(stack_array_150,10,&processed_var_5312_ptr);
    lVar5 = (int64_t)iStack_78;
    puVar6 = &system_buffer_ptr;
    if (plocal_var_160 != (void *)0x0) {
      puVar6 = plocal_var_160;
    }
    (**(code **)(*(int64_t *)(stack_array_138 + lVar5 * 0x30) + 0x10))
              (stack_array_138 + lVar5 * 0x30,puVar6);
    afStack_118[lVar5 * 0xc] = -NAN;
    afStack_118[lVar5 * 0xc + 1] = param_7;
    stack_array_110[lVar5 * 0x30] = 1;
    iStack_78 = iStack_78 + 1;
    plocal_var_168 = &system_state_ptr;
  }
  lVar5 = *(int64_t *)*param_1;
  fVar11 = *(float *)(lVar5 + uVar8 * 0x14);
  if ((((0.0 < param_5) && (0.001 < fVar11)) && (fVar11 <= param_5)) ||
     ((fVar15 = *(float *)(lVar5 + 4 + uVar8 * 0x14), fVar15 = fVar15 * fVar15, 0.0 < fVar15 &&
      (fVar12 = param_3[1] - *(float *)((int64_t)render_system_data_memory + 0x1bc),
      fVar15 <= (*param_3 - *(float *)(render_system_data_memory + 0x37)) *
                (*param_3 - *(float *)(render_system_data_memory + 0x37)) + fVar12 * fVar12 +
                (param_3[2] - *(float *)(render_system_data_memory + 0x38)) *
                (param_3[2] - *(float *)(render_system_data_memory + 0x38)))))) goto LAB_180545885;
  cVar1 = *(char *)(lVar5 + 0xc + uVar8 * 0x14);
  fVar15 = *(float *)((int64_t)render_system_data_memory + 0x1bc) - param_3[1];
  fVar15 = (*(float *)(render_system_data_memory + 0x37) - *param_3) *
           (*(float *)(render_system_data_memory + 0x37) - *param_3) + fVar15 * fVar15 +
           (*(float *)(render_system_data_memory + 0x38) - param_3[2]) *
           (*(float *)(render_system_data_memory + 0x38) - param_3[2]);
  uVar9 = uVar8;
  if ((cVar1 != -1) && (100.0 < fVar15)) {
    lVar5 = param_1[5];
    fStack_1a0 = (float)system_error_code * 1e-05;
    iStack_1b8 = (int)cVar1;
    fStack_1b4 = *param_3;
    fStack_1b0 = param_3[1];
    fStack_1ac = param_3[2];
    fStack_1a8 = param_3[3];
    fStack_1a4 = fVar11;
    function_5f53b0(lVar5 + 0x60,&iStack_1b8);
    iVar4 = _Cnd_signal(lVar5 + 0x2c8);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    lVar5 = (int64_t)cVar1 * 0xcc8 + lVar5;
    fVar11 = (float)atan2f((*(float **)(lVar5 + 0x360))[1] - param_3[1],
                           **(float **)(lVar5 + 0x360) - *param_3);
    fVar12 = fVar11 - 0.1308997;
    if (fVar11 < 0.1308997) {
      fVar12 = fVar11 + 6.1522856;
    }
    lVar7 = (int64_t)(int)(fVar12 * 3.8197186 - 0.0001) * 0x20;
    if ((10 < (int)((*(int64_t *)(lVar7 + 0x430 + lVar5) - *(int64_t *)(lVar7 + 0x428 + lVar5)) /
                   0x1c)) && (1600.0 < fVar15)) goto LAB_180545885;
    uVar9 = (uint64_t)local_var_1d0;
    param_9 = local_var_1c8;
  }
  if (param_10 == '\0') {
    lVar5 = param_1[1];
    iVar4 = *(int *)(lVar5 + 8);
    if ((cStack_1d8 == '\0') && (*(int *)(lVar5 + 0x40) / 2 < iVar4)) {
      if (*(int *)(lVar5 + 0x40) <= iVar4) goto LAB_180545885;
      fVar11 = param_3[1] - *(float *)((int64_t)render_system_data_memory + 0x1bc);
      fVar11 = (*param_3 - *(float *)(render_system_data_memory + 0x37)) *
               (*param_3 - *(float *)(render_system_data_memory + 0x37)) + fVar11 * fVar11 +
               (param_3[2] - *(float *)(render_system_data_memory + 0x38)) *
               (param_3[2] - *(float *)(render_system_data_memory + 0x38));
      if (fVar11 <= 0.09) {
        fVar11 = 0.09;
      }
      dVar13 = (double)*(float *)(*render_system_memory + 8 + uVar8 * 0x14) / (double)fVar11;
      if (*(double *)(lVar5 + 0x30) <= dVar13) {
        if (*(double *)(lVar5 + 0x20) <= dVar13) {
          if (*(double *)(lVar5 + 0x10) <= dVar13) {
            if (*(double *)(lVar5 + 0x18) <= dVar13) {
              if (*(double *)(lVar5 + 0x28) <= dVar13) {
                dVar13 = 1.0;
              }
              else {
                dVar13 = 0.875;
              }
            }
            else {
              dVar13 = 0.625;
            }
          }
          else {
            dVar13 = 0.375;
          }
        }
        else {
          dVar13 = 0.125;
        }
      }
      else {
        dVar13 = 0.0;
      }
      dVar14 = (double)iVar4 * *(double *)(lVar5 + 0x48);
      dVar2 = dVar14 * dVar14;
      if (dVar13 < dVar2 * dVar2 * dVar2 * dVar2 * dVar2 * dVar14) goto LAB_180545885;
    }
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  if (param_9 == (int64_t *)0x0) {
    local_var_1c8 = (int64_t *)CONCAT44(param_7,param_6);
    pcStack_1e8 = (code *)stack_array_138;
    (**(code **)(*render_system_data_memory + 0x58))(param_6,uVar9 & 0xffffffff,param_3,&local_var_1c8);
  }
  else {
    if (render_system_memory != 0) {
      uVar10 = *(uint64_t *)(render_system_memory + 0x18);
    }
    pcStack_1e8 = (code *)((uint64_t)pcStack_1e8 & 0xffffffffffffff00);
    function_157b70(render_system_data_memory,&local_var_1d0,uVar9 & 0xffffffff,uVar10);
    (**(code **)(*(int64_t *)CONCAT44(local_var_1cc,local_var_1d0) + 0xa8))
              ((int64_t *)CONCAT44(local_var_1cc,local_var_1d0),param_3);
    (**(code **)(*(int64_t *)CONCAT44(local_var_1cc,local_var_1d0) + 0x148))
              ((int64_t *)CONCAT44(local_var_1cc,local_var_1d0),stack_array_138);
    (**(code **)(*(int64_t *)CONCAT44(local_var_1cc,local_var_1d0) + 0x100))
              ((int64_t *)CONCAT44(local_var_1cc,local_var_1d0),param_6);
    (**(code **)(*(int64_t *)CONCAT44(local_var_1cc,local_var_1d0) + 0x60))();
    plVar3 = (int64_t *)CONCAT44(local_var_1cc,local_var_1d0);
    if (plVar3 != (int64_t *)0x0) {
      plStack_1c0 = plVar3;
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plStack_1c0 = (int64_t *)*param_9;
    *param_9 = (int64_t)plVar3;
    if (plStack_1c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if ((int64_t *)CONCAT44(local_var_1cc,local_var_1d0) != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)CONCAT44(local_var_1cc,local_var_1d0) + 0x38))();
    }
  }
LAB_180545885:
  SystemDataValidator(stack_array_138,0x30,4,SystemCore_MemoryManager);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_68 ^ (uint64_t)stack_array_208);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_5458e0(uint64_t *param_1,int param_2,int64_t param_3,float *param_4,int64_t param_5,
void function_5458e0(uint64_t *param_1,int param_2,int64_t param_3,float *param_4,int64_t param_5,
                  int64_t param_6,char param_7)
{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  void *puVar5;
  int64_t lVar6;
  int iVar7;
  int8_t *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int8_t stack_array_178 [32];
  code *pcStack_158;
  uint64_t local_var_138;
  int8_t stack_array_128 [32];
  int32_t stack_array_108 [2];
  int8_t stack_array_100 [152];
  int iStack_68;
  uint64_t local_var_58;
  local_var_138 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  fVar1 = *(float *)(*(int64_t *)*param_1 + 4 + (int64_t)param_2 * 0x14);
  pcStack_158 = SystemCore_MemoryManager;
  DataStructureManager(stack_array_128,0x30,4,function_1c2890);
  iStack_68 = 0;
  if (param_3 != 0) {
    function_33dc50(stack_array_128,param_3);
  }
  if (0 < iStack_68) {
    iVar7 = 0;
    puVar8 = stack_array_128;
    do {
      if (*(int *)(puVar8 + 0x20) < 0) {
        iVar4 = (**(code **)(*render_system_data_memory + 0xd8))(render_system_data_memory,puVar8);
        if (iVar4 == -1) {
          puVar5 = &system_buffer_ptr;
          if (*(void **)(puVar8 + 8) != (void *)0x0) {
            puVar5 = *(void **)(puVar8 + 8);
          }
          function_6272a0(&processed_var_5280_ptr,puVar5);
          *(int32_t *)(puVar8 + 0x20) = 0xffffffff;
          *(int32_t *)(puVar8 + 0x10) = 0;
          if (*(int8_t **)(puVar8 + 8) != (int8_t *)0x0) {
            **(int8_t **)(puVar8 + 8) = 0;
          }
          lVar6 = (int64_t)(iStack_68 + -1);
          SystemCore_ConfigurationHandler0(puVar8,stack_array_128 + lVar6 * 0x30);
          *(int32_t *)(puVar8 + 0x20) = stack_array_108[lVar6 * 0xc];
          *(int32_t *)(puVar8 + 0x24) = stack_array_108[lVar6 * 0xc + 1];
          puVar8[0x28] = stack_array_100[lVar6 * 0x30];
          iStack_68 = iStack_68 + -1;
          iVar7 = iVar7 + -1;
          puVar8 = puVar8 + -0x30;
        }
        else {
          *(int *)(puVar8 + 0x20) = iVar4;
          *(int32_t *)(puVar8 + 0x10) = 0;
          if (*(int8_t **)(puVar8 + 8) != (int8_t *)0x0) {
            **(int8_t **)(puVar8 + 8) = 0;
          }
        }
      }
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 0x30;
    } while (iVar7 < iStack_68);
  }
  iVar7 = _Mtx_lock(0x180c95528);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  pcStack_158 = (code *)stack_array_128;
  function_5ae910(0x180c95578,param_2,param_4,0);
  render_system_memory = render_system_memory & 0xffffffff00000000;
  iVar7 = (int)(render_system_memory - render_system_memory >> 3);
  if (0 < iVar7) {
    lVar6 = 0;
    do {
      lVar2 = *(int64_t *)(render_system_memory + lVar6 * 8);
      if ((((lVar2 != 0) && (lVar3 = *(int64_t *)(lVar2 + 0x58f8), *(char *)(lVar3 + 0x1c) != '\0')
           ) && (lVar3 != param_5)) && ((lVar3 != param_6 && (*(char *)(lVar3 + 0x27) != '\0')))) {
        fVar10 = param_4[1] - *(float *)(lVar2 + 0x5904);
        fVar11 = *param_4 - *(float *)(lVar2 + 0x5900);
        fVar9 = param_4[2] - *(float *)(lVar2 + 0x5908);
        if (fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9 < fVar1 * fVar1) {
          if (param_7 == '\0') {
            function_5b5840(lVar2,0x180c95578);
          }
          else {
            NetworkSystem_SecurityManager();
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar7);
  }
  if (render_system_memory != 0) {
    SystemCore_DatabaseHandler(render_system_memory,0x180c95578);
  }
  render_system_memory = 0;
// WARNING: Subroutine does not return
  memset(render_system_memory,0,(int64_t)(render_system_memory >> 3));
}
// WARNING: Removing unreachable block (ram,0x000180545ef1)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int function_545d20(int64_t param_1,int param_2,int param_3)
{
  short *psVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  int32_t uVar5;
  uint uVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t lVar9;
  void *plocal_var_50;
  int32_t *plocal_var_48;
  uint local_var_40;
  uint64_t local_var_38;
  psVar1 = (short *)(*(int64_t *)(param_1 + 0x10) +
                    (int64_t)(*(int *)(render_system_data_memory + 0x40) * param_2 + param_3) * 2);
  sVar3 = *psVar1;
  if (sVar3 != -2) goto LAB_180545ff5;
  lVar8 = (int64_t)param_2 * 0x68 + *(int64_t *)(render_system_data_memory + 0x38);
  lVar9 = (int64_t)param_3 * 0x68 + *(int64_t *)(render_system_data_memory + 0x38);
  sVar3 = -2;
  if ((*(int *)(lVar8 + 0x38) < 1) || (*(int *)(lVar9 + 0x38) < 1)) goto LAB_180545ff5;
  plocal_var_50 = &system_data_buffer_ptr;
  local_var_38 = 0;
  plocal_var_48 = (int32_t *)0x0;
  local_var_40 = 0;
  plocal_var_48 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x1e,0x13);
  *(int8_t *)plocal_var_48 = 0;
  uVar4 = CoreMemoryPoolCleaner(plocal_var_48);
  local_var_38 = CONCAT44(local_var_38._4_4_,uVar4);
  *plocal_var_48 = 0x6e657665;
  plocal_var_48[1] = 0x6d2f3a74;
  plocal_var_48[2] = 0x69737369;
  plocal_var_48[3] = 0x632f6e6f;
  *(uint64_t *)(plocal_var_48 + 4) = 0x6d692f7461626d6f;
  plocal_var_48[6] = 0x74636170;
  *(int16_t *)(plocal_var_48 + 7) = 0x2f;
  local_var_40 = 0x1d;
  iVar2 = *(int *)(lVar8 + 0x38);
  if (0 < iVar2) {
    if (iVar2 != -0x1d) {
      uVar7 = iVar2 + 0x1e;
      if (plocal_var_48 == (int32_t *)0x0) {
        if ((int)uVar7 < 0x10) {
          uVar7 = 0x10;
        }
        plocal_var_48 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
        *(int8_t *)plocal_var_48 = 0;
      }
      else {
        if (uVar7 <= uVar4) goto LAB_180545e9a;
        plocal_var_48 = (int32_t *)DataValidator(system_memory_pool_ptr,plocal_var_48,uVar7,0x10,0x13);
      }
      uVar5 = CoreMemoryPoolCleaner(plocal_var_48);
      local_var_38 = CONCAT44(local_var_38._4_4_,uVar5);
    }
LAB_180545e9a:
// WARNING: Subroutine does not return
    memcpy((int8_t *)((uint64_t)local_var_40 + (int64_t)plocal_var_48),*(uint64_t *)(lVar8 + 0x30)
           ,(int64_t)(*(int *)(lVar8 + 0x38) + 1));
  }
  uVar7 = 0x1e;
  if (plocal_var_48 == (int32_t *)0x0) {
    plocal_var_48 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x1f,0x13);
    *(int8_t *)plocal_var_48 = 0;
LAB_180545f12:
    uVar5 = CoreMemoryPoolCleaner(plocal_var_48);
    local_var_38 = CONCAT44(local_var_38._4_4_,uVar5);
  }
  else if (uVar4 < 0x1f) {
    plocal_var_48 = (int32_t *)DataValidator(system_memory_pool_ptr,plocal_var_48,0x1f,0x10,0x13);
    goto LAB_180545f12;
  }
  *(int16_t *)((uint64_t)local_var_40 + (int64_t)plocal_var_48) = 0x2f;
  local_var_40 = 0x1e;
  iVar2 = *(int *)(lVar9 + 0x38);
  if (iVar2 < 1) {
    local_var_40 = uVar7;
    sVar3 = (**(code **)(*render_system_data_memory + 0xd0))(render_system_data_memory,&plocal_var_50);
    *psVar1 = sVar3;
    plocal_var_50 = &system_data_buffer_ptr;
    if (plocal_var_48 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    sVar3 = *psVar1;
LAB_180545ff5:
    return (int)sVar3;
  }
  uVar4 = uVar7;
  if (iVar2 != -0x1e) {
    uVar6 = iVar2 + 0x1f;
    if (plocal_var_48 == (int32_t *)0x0) {
      if ((int)uVar6 < 0x10) {
        uVar6 = 0x10;
      }
      local_var_40 = uVar7;
      plocal_var_48 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar6,0x13);
      *(int8_t *)plocal_var_48 = 0;
    }
    else {
      uVar4 = local_var_40;
      if (uVar6 <= (uint)local_var_38) goto LAB_180545f96;
      local_var_40 = uVar7;
      plocal_var_48 = (int32_t *)DataValidator(system_memory_pool_ptr,plocal_var_48,uVar6,0x10,0x13);
    }
    uVar5 = CoreMemoryPoolCleaner(plocal_var_48);
    local_var_38 = CONCAT44(local_var_38._4_4_,uVar5);
    uVar4 = local_var_40;
  }
LAB_180545f96:
  local_var_40 = uVar4;
// WARNING: Subroutine does not return
  memcpy((int8_t *)((uint64_t)local_var_40 + (int64_t)plocal_var_48),*(uint64_t *)(lVar9 + 0x30),
         (int64_t)(*(int *)(lVar9 + 0x38) + 1));
}