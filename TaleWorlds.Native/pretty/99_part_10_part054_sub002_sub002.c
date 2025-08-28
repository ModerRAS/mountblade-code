/* 函数别名定义: MemoryPoolManager */
#define MemoryPoolManager MemoryPoolManager
#include "SystemAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_10_part054_sub002_sub002.c - 1 个函数
// 函数: void function_6cb8f0(int64_t param_1,int64_t param_2)
void function_6cb8f0(int64_t param_1,int64_t param_2)
{
  int *piVar1;
  int8_t stack_array_110 [232];
  MemoryPoolManager0(param_2,*(uint64_t *)(param_1 + 0x1d8));
  piVar1 = *(int **)(param_2 + 0x58);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
// WARNING: Subroutine does not return
  memset(stack_array_110,0,0xe0);
}
int function_6cbbd0(uint64_t *param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  int64_t *plVar3;
  char cVar4;
  int32_t *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  void *puVar9;
  void *puVar10;
  char *pcStackX_8;
  char *pcStackX_10;
  uint astack_special_x_18 [4];
  int32_t local_var_148;
  int32_t local_var_144;
  int32_t local_var_140;
  int32_t local_var_13c;
  int32_t local_var_138;
  int32_t local_var_134;
  int32_t local_var_130;
  uint64_t local_var_128;
  uint64_t local_var_120;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_f0;
  int32_t local_var_ec;
  int32_t local_var_e8;
  int32_t local_var_e4;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  int64_t lStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int32_t *plocal_var_70;
  int64_t lStack_68;
  int64_t lStack_60;
  int8_t local_var_58;
  uint *plocal_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  local_var_f0 = *(int32_t *)(param_1 + 2);
  local_var_ec = *(int32_t *)((int64_t)param_1 + 0x14);
  local_var_e8 = *(int32_t *)(param_1 + 3);
  local_var_e4 = *(int32_t *)((int64_t)param_1 + 0x1c);
  MemoryPoolManager0(param_2,*param_1);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  local_var_e0 = 0;
  local_var_d8 = 0;
  local_var_d0 = 0;
  local_var_c8 = 0;
  local_var_c0 = 0;
  local_var_b8 = 0;
  local_var_b0 = 0;
  local_var_a8 = 0;
  __0PxMeshScaleGeneratedInfo_physx__QEAA_XZ(&local_var_e0);
  cVar4 = RenderingSystem_ShaderCompiler(param_2);
  if (cVar4 != '\0') {
    puVar5 = (int32_t *)(*(code *)CONCAT44(local_var_ec,local_var_f0))(&local_var_128,param_2[6]);
    lStack_98 = param_2[1];
    lStack_78 = param_2[5];
    lStack_68 = param_2[7];
    local_var_148 = *puVar5;
    lStack_60 = param_2[8];
    local_var_144 = puVar5[1];
    local_var_140 = puVar5[2];
    local_var_13c = puVar5[3];
    local_var_138 = puVar5[4];
    local_var_134 = puVar5[5];
    local_var_130 = puVar5[6];
    lStack_a0 = *param_2;
    lStack_80 = param_2[4];
    lStack_90 = param_2[2];
    lStack_88 = param_2[3];
    plocal_var_70 = &local_var_148;
    plocal_var_50 = astack_special_x_18;
    astack_special_x_18[0] = astack_special_x_18[0] & 0xffffff00;
    local_var_48 = 0;
    local_var_40 = 0;
    local_var_58 = 1;
    function_6c95f0(&local_var_e0,&lStack_a0,0);
    if ((char)astack_special_x_18[0] != '\0') {
      *(int8_t *)param_2[10] = 1;
    }
    local_var_128 = CONCAT44(local_var_144,local_var_148);
    local_var_120 = CONCAT44(local_var_13c,local_var_140);
    local_var_118 = local_var_138;
    local_var_110 = local_var_130;
    local_var_114 = local_var_134;
    (*(code *)CONCAT44(local_var_e4,local_var_e8))(param_2[6],&local_var_128);
  }
  SystemResourceProcessor(param_2);
  local_var_f0 = *(int32_t *)(param_1 + 6);
  local_var_ec = *(int32_t *)((int64_t)param_1 + 0x34);
  local_var_e8 = *(int32_t *)(param_1 + 7);
  local_var_e4 = *(int32_t *)((int64_t)param_1 + 0x3c);
  MemoryPoolManager0(param_2,param_1[4]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  lVar7 = 0;
  puVar10 = &ui_system_data_1920_ptr;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar9 = &ui_system_data_1920_ptr;
    }
    else {
      puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar9,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      astack_special_x_18[0] = 0;
      function_6d81c0(pcStackX_8,param_2[7],astack_special_x_18,0x180be0510);
      (*(code *)CONCAT44(local_var_e4,local_var_e8))(param_2[6],astack_special_x_18);
    }
  }
  SystemResourceProcessor(param_2);
  local_var_f0 = *(int32_t *)(param_1 + 10);
  local_var_ec = *(int32_t *)((int64_t)param_1 + 0x54);
  local_var_e8 = *(int32_t *)(param_1 + 0xb);
  local_var_e4 = *(int32_t *)((int64_t)param_1 + 0x5c);
  MemoryPoolManager0(param_2,param_1[8]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
  }
  plVar3 = (int64_t *)param_2[8];
  cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar10,&pcStackX_8);
  if (((cVar4 == '\0') || (pcStackX_10 = pcStackX_8, pcStackX_8 == (char *)0x0)) ||
     ((*pcStackX_8 == '\0' ||
      ((lVar6 = _strtoui64(pcStackX_8,&pcStackX_10,10), lVar7 = 0, lVar6 == 0 ||
       (lVar7 = (**(code **)(*plVar3 + 0x50))(plVar3,lVar6), lVar7 != 0)))))) {
    (*(code *)CONCAT44(local_var_e4,local_var_e8))(param_2[6],lVar7);
  }
  else {
    uVar8 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
    _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
              (uVar8,4,&ui_system_data_1776_ptr,0x6c,&ui_system_data_1584_ptr,lVar6);
  }
  SystemResourceProcessor(param_2);
  return param_3 + 3;
}
int function_6cbf20(int64_t param_1,int64_t *param_2,int param_3)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint *puVar6;
  int iVar7;
  void *puVar8;
  void *puVar9;
  int32_t uVar10;
  uint astack_special_x_18 [2];
  int8_t stack_array_58 [4];
  int iStack_54;
  int8_t local_var_50;
  uint64_t *plocal_var_48;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  int32_t local_var_34;
  astack_special_x_18[0] = 0x68;
  puVar6 = astack_special_x_18;
  if ((uint *)param_2[6] != (uint *)0x0) {
    puVar6 = (uint *)param_2[6];
  }
  iVar7 = 0;
  if ((int *)param_2[7] != (int *)0x0) {
    iVar7 = *(int *)param_2[7];
  }
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x18));
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x28));
  iStack_54 = iVar7 + 8;
  local_var_50 = 1;
  stack_array_58[0] = 1;
  plocal_var_48 = (uint64_t *)(param_1 + 0x18);
  function_6c14e0(param_2,*puVar6,stack_array_58);
  *puVar6 = *puVar6 + 1;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x30));
  iStack_54 = iVar7 + 0xc;
  local_var_50 = 0;
  function_6c14e0(param_2,*puVar6,stack_array_58);
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
    lVar5 = *param_2;
  }
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  local_var_40 = *(int32_t *)(param_1 + 0x70);
  local_var_3c = *(int32_t *)(param_1 + 0x74);
  local_var_38 = *(int32_t *)(param_1 + 0x78);
  local_var_34 = *(int32_t *)(param_1 + 0x7c);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x60));
  piVar1 = (int *)param_2[6];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar10 = (*(code *)CONCAT44(local_var_3c,local_var_40))(param_2[2]);
  puVar9 = &ui_system_data_1920_ptr;
  iVar7 = *(int *)(*param_2 + 0x10);
  if (iVar7 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar10);
  astack_special_x_18[0] = astack_special_x_18[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar2[4]);
  puVar2[3] = 0;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  local_var_40 = *(int32_t *)(param_1 + 0x90);
  local_var_3c = *(int32_t *)(param_1 + 0x94);
  local_var_38 = *(int32_t *)(param_1 + 0x98);
  local_var_34 = *(int32_t *)(param_1 + 0x9c);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x80));
  piVar1 = (int *)param_2[6];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar10 = (*(code *)CONCAT44(local_var_3c,local_var_40))(param_2[2]);
  iVar7 = *(int *)(*param_2 + 0x10);
  if (iVar7 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar10);
  astack_special_x_18[0] = astack_special_x_18[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar2[4]);
  puVar2[3] = 0;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  local_var_40 = *(int32_t *)(param_1 + 0xb0);
  local_var_3c = *(int32_t *)(param_1 + 0xb4);
  local_var_38 = *(int32_t *)(param_1 + 0xb8);
  local_var_34 = *(int32_t *)(param_1 + 0xbc);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0xa0));
  piVar1 = (int *)param_2[6];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar10 = (*(code *)CONCAT44(local_var_3c,local_var_40))(param_2[2]);
  iVar7 = *(int *)(*param_2 + 0x10);
  if (iVar7 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar10);
  astack_special_x_18[0] = astack_special_x_18[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar2[4]);
  puVar2[3] = 0;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  SystemValidator(param_2,&ui_system_data_1912_ptr);
  function_6d5c70(param_2,param_1 + 0xc0);
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  local_var_40 = *(int32_t *)(param_1 + 0xf0);
  local_var_3c = *(int32_t *)(param_1 + 0xf4);
  local_var_38 = *(int32_t *)(param_1 + 0xf8);
  local_var_34 = *(int32_t *)(param_1 + 0xfc);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0xe0));
  piVar1 = (int *)param_2[6];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar4 = (*(code *)CONCAT44(local_var_3c,local_var_40))(param_2[2]);
  iVar7 = *(int *)(*param_2 + 0x10);
  if (iVar7 != 0) {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x10);
  }
  function_6d2c10(param_2[1],param_2[4],param_2[3],puVar9,uVar4);
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  return param_3 + 10;
}
int function_6cc370(int64_t param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  code *pcVar5;
  int32_t uVar6;
  int64_t lVar7;
  void *puVar8;
  void *puVar9;
  int8_t astack_special_x_18 [8];
  pcVar5 = *(code **)(param_1 + 0x148);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x138));
  piVar2 = (int *)param_2[6];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar6 = (*pcVar5)(param_2[2]);
  puVar8 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  function_6c4e00(puVar3,&rendering_buffer_2208_ptr,uVar6);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar9,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x168);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x158));
  piVar2 = (int *)param_2[6];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar6 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar6);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar9,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x188);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x178));
  piVar2 = (int *)param_2[6];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar6 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  function_6c4e00(puVar3,&rendering_buffer_2208_ptr,uVar6);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar9,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x1a8);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x198));
  piVar2 = (int *)param_2[6];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar6 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  function_6c4e00(puVar3,&rendering_buffer_2208_ptr,uVar6);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return param_3 + 4;
}
int function_6cc6c0(uint64_t *param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  void *puVar5;
  void *puVar6;
  uint64_t local_var_58;
  uint64_t local_var_50;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  int32_t local_var_34;
  int8_t stack_array_30 [40];
  local_var_50 = *param_1;
  local_var_48 = *(int32_t *)(param_1 + 1);
  local_var_44 = *(int32_t *)((int64_t)param_1 + 0xc);
  local_var_40 = *(int32_t *)(param_1 + 2);
  local_var_3c = *(int32_t *)((int64_t)param_1 + 0x14);
  local_var_38 = *(int32_t *)(param_1 + 3);
  local_var_34 = *(int32_t *)((int64_t)param_1 + 0x1c);
  SystemValidator(param_2,*param_1);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar3 = (uint64_t *)(*(code *)CONCAT44(local_var_3c,local_var_40))(stack_array_30,param_2[2]);
  puVar5 = &ui_system_data_1920_ptr;
  local_var_58 = *puVar3;
  local_var_50 = puVar3[1];
  local_var_44 = *(int32_t *)((int64_t)puVar3 + 0x14);
  local_var_48 = *(int32_t *)(puVar3 + 2);
  local_var_40 = *(int32_t *)(puVar3 + 3);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar6 = &ui_system_data_1920_ptr;
  }
  else {
    puVar6 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  function_6d2e60(param_2[1],param_2[4],param_2[3],puVar6,&local_var_58);
  lVar4 = *param_2;
  if (*(int *)(lVar4 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar4 + 8) + 8 + (uint64_t)(*(int *)(lVar4 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar4 = *param_2;
    }
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  local_var_50 = param_1[4];
  local_var_48 = *(int32_t *)(param_1 + 5);
  local_var_44 = *(int32_t *)((int64_t)param_1 + 0x2c);
  local_var_40 = *(int32_t *)(param_1 + 6);
  local_var_3c = *(int32_t *)((int64_t)param_1 + 0x34);
  local_var_38 = *(int32_t *)(param_1 + 7);
  local_var_34 = *(int32_t *)((int64_t)param_1 + 0x3c);
  SystemValidator(param_2,param_1[4]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar3 = (uint64_t *)(*(code *)CONCAT44(local_var_3c,local_var_40))(stack_array_30,param_2[2]);
  local_var_58 = *puVar3;
  local_var_50 = puVar3[1];
  local_var_44 = *(int32_t *)((int64_t)puVar3 + 0x14);
  local_var_48 = *(int32_t *)(puVar3 + 2);
  local_var_40 = *(int32_t *)(puVar3 + 3);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar5 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  function_6d2e60(param_2[1],param_2[4],param_2[3],puVar5,&local_var_58);
  lVar4 = *param_2;
  if (*(int *)(lVar4 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar4 + 8) + 8 + (uint64_t)(*(int *)(lVar4 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar4 = *param_2;
    }
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  return param_3 + 2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int function_6cc880(int64_t param_1,int64_t *param_2,uint param_3)
{
  int *piVar1;
  uint64_t *puVar2;
  uint uVar3;
  int8_t uVar4;
  int iVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  void *puVar10;
  void *puVar11;
  int32_t uVar12;
  int8_t astack_special_x_8 [8];
  uint astack_special_x_18 [4];
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_50;
  int32_t local_var_4c;
  int32_t local_var_48;
  int32_t local_var_44;
  local_var_50 = *(int32_t *)(param_1 + 0x50);
  local_var_4c = *(int32_t *)(param_1 + 0x54);
  local_var_48 = *(int32_t *)(param_1 + 0x58);
  local_var_44 = *(int32_t *)(param_1 + 0x5c);
  astack_special_x_18[0] = param_3;
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x40));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar6 = (int32_t *)(*(code *)CONCAT44(local_var_4c,local_var_50))(&local_var_88,param_2[2]);
  puVar11 = &ui_system_data_1920_ptr;
  local_var_78 = *puVar6;
  local_var_74 = puVar6[1];
  local_var_70 = puVar6[2];
  local_var_6c = puVar6[3];
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  function_6d3200(puVar2,&local_var_78);
  astack_special_x_8[0] = 0;
  (**(code **)*puVar2)(puVar2,astack_special_x_8,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_50 = *(int32_t *)(param_1 + 0x70);
  local_var_4c = *(int32_t *)(param_1 + 0x74);
  local_var_48 = *(int32_t *)(param_1 + 0x78);
  local_var_44 = *(int32_t *)(param_1 + 0x7c);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x60));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar6 = (int32_t *)(*(code *)CONCAT44(local_var_4c,local_var_50))(&local_var_78,param_2[2]);
  local_var_88 = *puVar6;
  local_var_84 = puVar6[1];
  local_var_80 = puVar6[2];
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  function_6d3290(puVar2,&local_var_88);
  astack_special_x_8[0] = 0;
  (**(code **)*puVar2)(puVar2,astack_special_x_8,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_50 = *(int32_t *)(param_1 + 0x90);
  local_var_4c = *(int32_t *)(param_1 + 0x94);
  local_var_48 = *(int32_t *)(param_1 + 0x98);
  local_var_44 = *(int32_t *)(param_1 + 0x9c);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x80));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  iVar5 = (*(code *)CONCAT44(local_var_4c,local_var_50))(param_2[2]);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)
               (*(int64_t *)(lVar7 + 8) + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10);
  }
  plVar8 = (int64_t *)&system_data_02c0;
  plVar9 = (int64_t *)param_2[1];
  if (system_system_buffer_config != 0) {
    do {
      if ((int)plVar8[1] == iVar5) {
        (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,*plVar8);
      }
      plVar8 = plVar8 + 2;
    } while (*plVar8 != 0);
    plVar9 = (int64_t *)param_2[1];
    lVar7 = *param_2;
  }
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*plVar9 + 0x20))(plVar9);
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_50 = *(int32_t *)(param_1 + 0xb0);
  local_var_4c = *(int32_t *)(param_1 + 0xb4);
  local_var_48 = *(int32_t *)(param_1 + 0xb8);
  local_var_44 = *(int32_t *)(param_1 + 0xbc);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0xa0));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*(code *)CONCAT44(local_var_4c,local_var_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar12);
  astack_special_x_8[0] = 0;
  (**(code **)*puVar2)(puVar2,astack_special_x_8,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_50 = *(int32_t *)(param_1 + 0xd0);
  local_var_4c = *(int32_t *)(param_1 + 0xd4);
  local_var_48 = *(int32_t *)(param_1 + 0xd8);
  local_var_44 = *(int32_t *)(param_1 + 0xdc);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0xc0));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*(code *)CONCAT44(local_var_4c,local_var_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar12);
  astack_special_x_8[0] = 0;
  (**(code **)*puVar2)(puVar2,astack_special_x_8,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_50 = *(int32_t *)(param_1 + 0xf0);
  local_var_4c = *(int32_t *)(param_1 + 0xf4);
  local_var_48 = *(int32_t *)(param_1 + 0xf8);
  local_var_44 = *(int32_t *)(param_1 + 0xfc);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0xe0));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*(code *)CONCAT44(local_var_4c,local_var_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar12);
  astack_special_x_8[0] = 0;
  (**(code **)*puVar2)(puVar2,astack_special_x_8,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_50 = *(int32_t *)(param_1 + 0x110);
  local_var_4c = *(int32_t *)(param_1 + 0x114);
  local_var_48 = *(int32_t *)(param_1 + 0x118);
  local_var_44 = *(int32_t *)(param_1 + 0x11c);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x100));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*(code *)CONCAT44(local_var_4c,local_var_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar12);
  astack_special_x_8[0] = 0;
  (**(code **)*puVar2)(puVar2,astack_special_x_8,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uVar3 = astack_special_x_18[0];
  function_6c0620(param_2,param_1 + 0x120,astack_special_x_18[0] + 7);
  local_var_50 = *(int32_t *)(param_1 + 0x160);
  local_var_4c = *(int32_t *)(param_1 + 0x164);
  local_var_48 = *(int32_t *)(param_1 + 0x168);
  local_var_44 = *(int32_t *)(param_1 + 0x16c);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x150));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*(code *)CONCAT44(local_var_4c,local_var_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar12);
  astack_special_x_18[0] = astack_special_x_18[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,astack_special_x_18,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_50 = *(int32_t *)(param_1 + 0x180);
  local_var_4c = *(int32_t *)(param_1 + 0x184);
  local_var_48 = *(int32_t *)(param_1 + 0x188);
  local_var_44 = *(int32_t *)(param_1 + 0x18c);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x170));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*(code *)CONCAT44(local_var_4c,local_var_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar12);
  astack_special_x_18[0] = astack_special_x_18[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,astack_special_x_18,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_50 = *(int32_t *)(param_1 + 0x1a0);
  local_var_4c = *(int32_t *)(param_1 + 0x1a4);
  local_var_48 = *(int32_t *)(param_1 + 0x1a8);
  local_var_44 = *(int32_t *)(param_1 + 0x1ac);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 400));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*(code *)CONCAT44(local_var_4c,local_var_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar12);
  astack_special_x_18[0] = astack_special_x_18[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,astack_special_x_18,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_50 = *(int32_t *)(param_1 + 0x1c0);
  local_var_4c = *(int32_t *)(param_1 + 0x1c4);
  local_var_48 = *(int32_t *)(param_1 + 0x1c8);
  local_var_44 = *(int32_t *)(param_1 + 0x1cc);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x1b0));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar4 = (*(code *)CONCAT44(local_var_4c,local_var_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  function_6d2f00(param_2[1],param_2[4],param_2[3],puVar10,uVar4);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  function_6c07f0(param_2,param_1 + 0x1d0,uVar3 + 0xc);
  local_var_50 = *(int32_t *)(param_1 + 0x210);
  local_var_4c = *(int32_t *)(param_1 + 0x214);
  local_var_48 = *(int32_t *)(param_1 + 0x218);
  local_var_44 = *(int32_t *)(param_1 + 0x21c);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x200));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar4 = (*(code *)CONCAT44(local_var_4c,local_var_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  function_6d2f00(param_2[1],param_2[4],param_2[3],puVar10,uVar4);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_50 = *(int32_t *)(param_1 + 0x230);
  local_var_4c = *(int32_t *)(param_1 + 0x234);
  local_var_48 = *(int32_t *)(param_1 + 0x238);
  local_var_44 = *(int32_t *)(param_1 + 0x23c);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x220));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*(code *)CONCAT44(local_var_4c,local_var_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 != 0) {
    puVar11 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar12);
  astack_special_x_18[0] = astack_special_x_18[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,astack_special_x_18,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar11,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return uVar3 + 0x10;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int function_6cd1e0(int64_t param_1,int64_t *param_2,int param_3)
{
  int *piVar1;
  uint64_t *puVar2;
  code *pcVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  void *puVar8;
  void *puVar9;
  uint *puVar10;
  int64_t *plVar11;
  int32_t uVar12;
  uint astack_special_x_8 [2];
  pcVar3 = *(code **)(param_1 + 0x50);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x40));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  iVar4 = (*pcVar3)(param_2[2]);
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)
              (*(int64_t *)(lVar5 + 8) + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10);
  }
  plVar6 = (int64_t *)&system_data_02f0;
  plVar11 = (int64_t *)param_2[1];
  if (system_system_buffer_config != 0) {
    do {
      if ((int)plVar6[1] == iVar4) {
        (**(code **)(*plVar11 + 0x10))(plVar11,puVar8,*plVar6);
      }
      plVar6 = plVar6 + 2;
    } while (*plVar6 != 0);
    plVar11 = (int64_t *)param_2[1];
    lVar5 = *param_2;
  }
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*plVar11 + 0x20))(plVar11);
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x60));
  astack_special_x_8[0] = 0x61;
  puVar10 = astack_special_x_8;
  if ((uint *)param_2[5] != (uint *)0x0) {
    puVar10 = (uint *)param_2[5];
  }
  if (system_system_buffer_config != 0) {
    plVar11 = (int64_t *)&system_data_0350;
    lVar5 = system_system_buffer_config;
    do {
      SystemValidator(param_2,lVar5);
      iVar4 = (**(code **)(param_1 + 0x78))(param_2[2],(int)plVar11[1]);
      lVar5 = *param_2;
      if (*(int *)(lVar5 + 0x10) == 0) {
        puVar8 = &ui_system_data_1920_ptr;
      }
      else {
        puVar8 = *(void **)
                  (*(int64_t *)(lVar5 + 8) + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10);
      }
      plVar7 = (int64_t *)&system_data_03c0;
      plVar6 = (int64_t *)param_2[1];
      if (system_system_buffer_config != 0) {
        do {
          if ((int)plVar7[1] == iVar4) {
            (**(code **)(*plVar6 + 0x10))(plVar6,puVar8,*plVar7);
          }
          plVar7 = plVar7 + 2;
        } while (*plVar7 != 0);
        lVar5 = *param_2;
        plVar6 = (int64_t *)param_2[1];
      }
      if (*(int *)(lVar5 + 0x10) != 0) {
        if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10)
            != '\0') {
          (**(code **)(*plVar6 + 0x20))(plVar6);
          lVar5 = *param_2;
        }
        *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
      }
      *puVar10 = *puVar10 + 1;
      plVar11 = plVar11 + 2;
      lVar5 = *plVar11;
    } while (lVar5 != 0);
  }
  puVar8 = &ui_system_data_1920_ptr;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  pcVar3 = *(code **)(param_1 + 0x90);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x80));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*pcVar3)(param_2[2]);
  iVar4 = *(int *)(*param_2 + 0x10);
  if (iVar4 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar4 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar11 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar12);
  astack_special_x_8[0] = astack_special_x_8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,astack_special_x_8,1);
  (**(code **)(*plVar11 + 0x10))(plVar11,puVar9,puVar2[4]);
  puVar2[3] = 0;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  pcVar3 = *(code **)(param_1 + 200);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0xb8));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*pcVar3)(param_2[2]);
  iVar4 = *(int *)(*param_2 + 0x10);
  if (iVar4 != 0) {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar4 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar11 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar12);
  astack_special_x_8[0] = astack_special_x_8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,astack_special_x_8,1);
  (**(code **)(*plVar11 + 0x10))(plVar11,puVar8,puVar2[4]);
  puVar2[3] = 0;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  return param_3 + 5;
}
int function_6cd580(int64_t param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  code *pcVar5;
  int8_t uVar6;
  uint64_t uVar7;
  int8_t *puVar8;
  int64_t lVar9;
  void *puVar10;
  void *puVar11;
  int8_t astack_special_x_18 [16];
  pcVar5 = *(code **)(param_1 + 0x28);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x18));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar7 = (*pcVar5)(param_2[2]);
  puVar10 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar11 = &ui_system_data_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  function_6d2c10(param_2[1],param_2[4],param_2[3],puVar11,uVar7);
  lVar9 = *param_2;
  if (*(int *)(lVar9 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar9 + 8) + 8 + (uint64_t)(*(int *)(lVar9 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar9 = *param_2;
    }
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x48);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x38));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar8 = (int8_t *)(*pcVar5)(astack_special_x_18,param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar11 = &ui_system_data_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  function_6d82a0(param_2[1],param_2[3],puVar11,*puVar8,0x180be0170);
  lVar9 = *param_2;
  if (*(int *)(lVar9 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar9 + 8) + 8 + (uint64_t)(*(int *)(lVar9 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar9 = *param_2;
    }
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x68);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x58));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar6 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar11 = &ui_system_data_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  function_6c4e00(puVar3,&rendering_buffer_2208_ptr,uVar6);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar11,puVar3[4]);
  puVar3[3] = 0;
  lVar9 = *param_2;
  if (*(int *)(lVar9 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar9 + 8) + 8 + (uint64_t)(*(int *)(lVar9 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar9 = *param_2;
    }
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x88);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x78));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar6 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  function_6c4e00(puVar3,&rendering_buffer_2208_ptr,uVar6);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar10,puVar3[4]);
  puVar3[3] = 0;
  lVar9 = *param_2;
  if (*(int *)(lVar9 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar9 + 8) + 8 + (uint64_t)(*(int *)(lVar9 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar9 = *param_2;
    }
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
  }
  return param_3 + 7;
}
int function_6cd860(int64_t param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  int8_t *puVar6;
  int64_t lVar7;
  void *puVar8;
  void *puVar9;
  int32_t uVar10;
  int8_t astack_special_x_18 [8];
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int8_t stack_array_88 [24];
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  int32_t local_var_64;
  uint64_t local_var_60;
  uint64_t local_var_58;
  int32_t local_var_50;
  int32_t local_var_4c;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  int8_t stack_array_38 [16];
  local_var_58 = *(uint64_t *)(param_1 + 0x130);
  local_var_50 = *(int32_t *)(param_1 + 0x138);
  local_var_4c = *(int32_t *)(param_1 + 0x13c);
  local_var_48 = *(int32_t *)(param_1 + 0x140);
  local_var_44 = *(int32_t *)(param_1 + 0x144);
  local_var_40 = *(int32_t *)(param_1 + 0x148);
  local_var_3c = *(int32_t *)(param_1 + 0x14c);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x130));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar4 = (uint64_t *)(*(code *)CONCAT44(local_var_44,local_var_48))(stack_array_88,param_2[2]);
  puVar9 = &ui_system_data_1920_ptr;
  local_var_60 = *puVar4;
  local_var_58 = puVar4[1];
  local_var_4c = *(int32_t *)((int64_t)puVar4 + 0x14);
  local_var_50 = *(int32_t *)(puVar4 + 2);
  local_var_48 = *(int32_t *)(puVar4 + 3);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  function_6d2e60(param_2[1],param_2[4],param_2[3],puVar8,&local_var_60);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_70 = *(int32_t *)(param_1 + 0x160);
  local_var_6c = *(int32_t *)(param_1 + 0x164);
  local_var_68 = *(int32_t *)(param_1 + 0x168);
  local_var_64 = *(int32_t *)(param_1 + 0x16c);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x150));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar4,uVar10);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar4)(puVar4,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_70 = *(int32_t *)(param_1 + 0x198);
  local_var_6c = *(int32_t *)(param_1 + 0x19c);
  local_var_68 = *(int32_t *)(param_1 + 0x1a0);
  local_var_64 = *(int32_t *)(param_1 + 0x1a4);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x188));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar5 = (int32_t *)(*(code *)CONCAT44(local_var_6c,local_var_70))(stack_array_38,param_2[2]);
  local_var_98 = *puVar5;
  local_var_94 = puVar5[1];
  local_var_90 = puVar5[2];
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  function_6d3290(puVar4,&local_var_98);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar4)(puVar4,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_70 = *(int32_t *)(param_1 + 0x1d0);
  local_var_6c = *(int32_t *)(param_1 + 0x1d4);
  local_var_68 = *(int32_t *)(param_1 + 0x1d8);
  local_var_64 = *(int32_t *)(param_1 + 0x1dc);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x1c0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar4,uVar10);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar4)(puVar4,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_70 = *(int32_t *)(param_1 + 0x1f0);
  local_var_6c = *(int32_t *)(param_1 + 500);
  local_var_68 = *(int32_t *)(param_1 + 0x1f8);
  local_var_64 = *(int32_t *)(param_1 + 0x1fc);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x1e0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar4,uVar10);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar4)(puVar4,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_70 = *(int32_t *)(param_1 + 0x210);
  local_var_6c = *(int32_t *)(param_1 + 0x214);
  local_var_68 = *(int32_t *)(param_1 + 0x218);
  local_var_64 = *(int32_t *)(param_1 + 0x21c);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x200));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar5 = (int32_t *)(*(code *)CONCAT44(local_var_6c,local_var_70))(stack_array_38,param_2[2]);
  local_var_98 = *puVar5;
  local_var_94 = puVar5[1];
  local_var_90 = puVar5[2];
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  function_6d3290(puVar4,&local_var_98);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar4)(puVar4,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_70 = *(int32_t *)(param_1 + 0x230);
  local_var_6c = *(int32_t *)(param_1 + 0x234);
  local_var_68 = *(int32_t *)(param_1 + 0x238);
  local_var_64 = *(int32_t *)(param_1 + 0x23c);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x220));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar5 = (int32_t *)(*(code *)CONCAT44(local_var_6c,local_var_70))(stack_array_38,param_2[2]);
  local_var_98 = *puVar5;
  local_var_94 = puVar5[1];
  local_var_90 = puVar5[2];
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  function_6d3290(puVar4,&local_var_98);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar4)(puVar4,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_70 = *(int32_t *)(param_1 + 0x250);
  local_var_6c = *(int32_t *)(param_1 + 0x254);
  local_var_68 = *(int32_t *)(param_1 + 600);
  local_var_64 = *(int32_t *)(param_1 + 0x25c);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x240));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar4,uVar10);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar4)(puVar4,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_70 = *(int32_t *)(param_1 + 0x270);
  local_var_6c = *(int32_t *)(param_1 + 0x274);
  local_var_68 = *(int32_t *)(param_1 + 0x278);
  local_var_64 = *(int32_t *)(param_1 + 0x27c);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x260));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar4,uVar10);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar4)(puVar4,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_70 = *(int32_t *)(param_1 + 0x290);
  local_var_6c = *(int32_t *)(param_1 + 0x294);
  local_var_68 = *(int32_t *)(param_1 + 0x298);
  local_var_64 = *(int32_t *)(param_1 + 0x29c);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x280));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar6 = (int8_t *)(*(code *)CONCAT44(local_var_6c,local_var_70))(astack_special_x_18,param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  function_6d82a0(param_2[1],param_2[3],puVar8,*puVar6,0x180be01c0);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_70 = *(int32_t *)(param_1 + 0x2b0);
  local_var_6c = *(int32_t *)(param_1 + 0x2b4);
  local_var_68 = *(int32_t *)(param_1 + 0x2b8);
  local_var_64 = *(int32_t *)(param_1 + 700);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x2a0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar4,uVar10);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar4)(puVar4,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_70 = *(int32_t *)(param_1 + 0x2d0);
  local_var_6c = *(int32_t *)(param_1 + 0x2d4);
  local_var_68 = *(int32_t *)(param_1 + 0x2d8);
  local_var_64 = *(int32_t *)(param_1 + 0x2dc);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x2c0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar4,uVar10);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar4)(puVar4,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_70 = *(int32_t *)(param_1 + 0x2f0);
  local_var_6c = *(int32_t *)(param_1 + 0x2f4);
  local_var_68 = *(int32_t *)(param_1 + 0x2f8);
  local_var_64 = *(int32_t *)(param_1 + 0x2fc);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x2e0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar4,uVar10);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar4)(puVar4,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar9,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return param_3 + 0xf;
}
int function_6ce230(uint64_t *param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  code *pcVar5;
  int64_t lVar6;
  void *puVar7;
  void *puVar8;
  int32_t uVar9;
  int8_t astack_special_x_18 [16];
  pcVar5 = (code *)param_1[2];
  SystemValidator(param_2,*param_1);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  puVar7 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar9);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  pcVar5 = (code *)param_1[6];
  SystemValidator(param_2,param_1[4]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar7 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar9);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  return param_3 + 2;
}
int function_6ce3e0(uint64_t *param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  char cVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int8_t *puVar12;
  void *puVar13;
  void *puVar14;
  int8_t astack_special_x_8 [8];
  void *plocal_var_138;
  int64_t lStack_130;
  int64_t lStack_128;
  int32_t local_var_120;
  int64_t lStack_118;
  int64_t lStack_110;
  void **pplocal_var_108;
  code *pcStack_100;
  int64_t lStack_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  int8_t stack_array_a0 [40];
  int8_t stack_array_78 [64];
  lStack_110 = *param_1;
  pplocal_var_108 = (void **)param_1[1];
  pcStack_100 = (code *)param_1[2];
  lStack_f8 = param_1[3];
  SystemValidator(param_2,*param_1);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  local_var_e0 = 0;
  local_var_d8 = 0;
  local_var_d0 = 0;
  local_var_c8 = 0;
  local_var_c0 = 0;
  local_var_b8 = 0;
  local_var_b0 = 0;
  local_var_a8 = 0;
  __0PxMeshScaleGeneratedInfo_physx__QEAA_XZ(&local_var_e0);
  puVar8 = (uint64_t *)(*pcStack_100)(stack_array_a0,param_2[2]);
  lVar9 = *param_2;
  lVar11 = param_2[1];
  lVar3 = param_2[3];
  lVar4 = param_2[4];
  plocal_var_138 = (void *)*puVar8;
  lStack_130 = puVar8[1];
  lStack_128 = puVar8[2];
  local_var_120 = *(int32_t *)(puVar8 + 3);
  __0PxMeshScaleGeneratedInfo_physx__QEAA_XZ(stack_array_78);
  pplocal_var_108 = &plocal_var_138;
  local_var_f0 = 0;
  local_var_e8 = 0;
  lStack_118 = lVar9;
  lStack_110 = lVar11;
  pcStack_100 = (code *)lVar3;
  lStack_f8 = lVar4;
  function_6d0d40(stack_array_78,&lStack_118,0);
  lVar9 = *param_2;
  if (*(int *)(lVar9 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar9 + 8) + 8 + (uint64_t)(*(int *)(lVar9 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar9 = *param_2;
    }
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
  }
  pcStack_100 = (code *)param_1[6];
  lStack_f8 = param_1[7];
  SystemValidator(param_2,param_1[4]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  lVar9 = (*pcStack_100)(param_2[2]);
  puVar14 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar13 = &ui_system_data_1920_ptr;
  }
  else {
    puVar13 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  plVar5 = (int64_t *)param_2[4];
  plVar6 = (int64_t *)param_2[1];
  if (lVar9 != 0) {
    cVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,lVar9);
    if (cVar7 == '\0') {
      uVar10 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                (uVar10,0x20,&ui_system_data_1424_ptr,0x32,&ui_system_data_1328_ptr,puVar13);
    }
  }
  lVar11 = 0;
  if (lVar9 != 0) {
    lVar11 = (**(code **)(*plVar5 + 0x68))(plVar5,lVar9);
    if (lVar11 == 0) {
      lVar11 = lVar9;
    }
  }
  plocal_var_138 = &processed_var_9128_ptr;
  lStack_130 = lVar9;
  lStack_128 = lVar11;
  (**(code **)(*plVar6 + 8))(plVar6,puVar13,&plocal_var_138);
  lVar9 = *param_2;
  if (*(int *)(lVar9 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar9 + 8) + 8 + (uint64_t)(*(int *)(lVar9 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar9 = *param_2;
    }
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
  }
  pcStack_100 = (code *)param_1[10];
  lStack_f8 = param_1[0xb];
  SystemValidator(param_2,param_1[8]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar12 = (int8_t *)(*pcStack_100)(astack_special_x_8,param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar14 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  function_6d82a0(param_2[1],param_2[3],puVar14,*puVar12,0x180be04f0);
  lVar9 = *param_2;
  if (*(int *)(lVar9 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar9 + 8) + 8 + (uint64_t)(*(int *)(lVar9 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar9 = *param_2;
    }
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
  }
  return param_3 + 3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address