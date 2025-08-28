/* 函数别名定义: MemoryPoolManager */
#define MemoryPoolManager MemoryPoolManager
#include "TaleWorlds.Native.Split.h"
// 99_part_10_part046.c - 2 个函数
// 函数: void function_6c327c(void)
void function_6c327c(void)
{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t *unaff_RDI;
  uint uVar5;
  lVar4 = unaff_RDI[1];
  if (*(int *)(lVar4 + 0x10) != 0) {
    uVar1 = *(uint *)(*(int64_t *)(lVar4 + 8) + (uint64_t)(*(int *)(lVar4 + 0x10) - 1) * 4);
    lVar2 = *unaff_RDI;
    if (uVar1 < *(uint *)(lVar2 + 0x10)) {
      do {
        if (*(int *)(lVar2 + 0x10) != 0) {
          uVar3 = (uint64_t)(*(int *)(lVar2 + 0x10) - 1);
          if ((*(char *)(*(int64_t *)(lVar2 + 8) + 8 + uVar3 * 0x18) != '\0') &&
             (*(char *)(*(int64_t *)(lVar2 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
            (**(code **)(*(int64_t *)unaff_RDI[5] + 0x48))();
            lVar2 = *unaff_RDI;
          }
          *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
          lVar2 = *unaff_RDI;
        }
        *(int8_t *)(unaff_RDI + 9) = 1;
        uVar5 = *(uint *)(lVar2 + 0x10);
        if ((uVar5 != 0) &&
           (*(char *)(*(int64_t *)(lVar2 + 8) + 0x10 + (uint64_t)(uVar5 - 1) * 0x18) == '\0')) {
          *(int8_t *)(unaff_RDI + 9) = 0;
          uVar5 = *(uint *)(lVar2 + 0x10);
        }
      } while (uVar1 < uVar5);
      lVar4 = unaff_RDI[1];
    }
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  return;
}
bool function_6c32a0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,int64_t param_8)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int32_t uVar4;
  char acStackX_8 [8];
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  int8_t local_var_90;
  char *pcStack_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uVar1 = param_1[2];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  pcStack_88 = acStackX_8;
  acStackX_8[0] = '\0';
  local_var_a8 = param_5;
  local_var_a0 = param_6;
  local_var_98 = param_7;
  local_var_90 = 1;
  local_var_80 = 0;
  local_var_78 = 0;
  local_var_d8 = param_2;
  local_var_d0 = param_3;
  local_var_c8 = uVar2;
  local_var_c0 = uVar3;
  local_var_b8 = uVar1;
  local_var_b0 = param_4;
  uVar4 = function_6c4e90(param_8,&local_var_d8,0);
  pcStack_88 = acStackX_8;
  local_var_a8 = param_5;
  local_var_a0 = param_6;
  local_var_98 = param_7;
  local_var_90 = 1;
  local_var_80 = 0;
  local_var_78 = 0;
  local_var_d8 = param_2;
  local_var_d0 = param_3;
  local_var_c8 = uVar2;
  local_var_c0 = uVar3;
  local_var_b8 = uVar1;
  local_var_b0 = param_4;
  function_6c6780(param_8,&local_var_d8,uVar4);
  pcStack_88 = acStackX_8;
  local_var_80 = 0;
  local_var_78 = 0;
  local_var_a8 = param_5;
  local_var_a0 = param_6;
  local_var_98 = param_7;
  local_var_90 = 1;
  local_var_d8 = param_2;
  local_var_d0 = param_3;
  local_var_c8 = uVar2;
  local_var_c0 = uVar3;
  local_var_b8 = uVar1;
  local_var_b0 = param_4;
  function_6d65b0(&local_var_d8,param_8 + 0x300);
  return acStackX_8[0] == '\0';
}
bool function_6c3420(uint64_t *param_1,int64_t *param_2,uint64_t param_3,int64_t *param_4,
                  uint64_t param_5)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  char cVar5;
  void *puVar6;
  bool bVar7;
  char acStackX_8 [8];
  uint64_t stack_special_x_10;
  char *pcStackX_18;
  uint64_t *plocal_var_2a8;
  int64_t lStack_2a0;
  uint64_t local_var_298;
  uint64_t *plocal_var_290;
  int64_t lStack_288;
  uint64_t local_var_280;
  uint64_t **pplocal_var_278;
  uint64_t **pplocal_var_270;
  uint64_t local_var_268;
  uint64_t local_var_260;
  uint64_t local_var_258;
  int64_t *plStack_250;
  uint64_t local_var_248;
  int64_t *plStack_240;
  uint64_t local_var_238;
  char cStack_230;
  char *pcStack_228;
  int *piStack_220;
  uint64_t local_var_218;
  int32_t local_var_1f8;
  int32_t local_var_1f4;
  int32_t local_var_1f0;
  int32_t local_var_1ec;
  int8_t stack_array_1e8 [312];
  uint64_t local_var_b0;
  int32_t local_var_a0;
  int32_t local_var_9c;
  int32_t local_var_98;
  int32_t local_var_94;
  stack_special_x_10 = (**(code **)(*param_4 + 0x18))(param_4);
  lStack_288 = 0;
  plocal_var_290 = &stack_special_x_10;
  local_var_280 = 0;
  plocal_var_2a8 = &stack_special_x_10;
  lStack_2a0 = 0;
  local_var_298 = 0;
  __0PxArticulationReducedCoordinateGeneratedInfo_physx__QEAA_XZ(stack_array_1e8);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  pplocal_var_278 = &plocal_var_290;
  uVar1 = param_1[2];
  uVar4 = CONCAT44(param_5._4_4_,(int32_t)param_5);
  pplocal_var_270 = &plocal_var_2a8;
  acStackX_8[0] = '\0';
  pcStack_228 = acStackX_8;
  cStack_230 = 1;
  piStack_220 = (int *)0x0;
  local_var_218 = 0;
  local_var_268 = uVar2;
  local_var_260 = uVar3;
  local_var_258 = uVar1;
  plStack_250 = param_2;
  local_var_248 = param_3;
  plStack_240 = param_4;
  local_var_238 = uVar4;
  function_6c52c0(stack_array_1e8,&pplocal_var_278,0);
  pplocal_var_278 = &plocal_var_290;
  pplocal_var_270 = &plocal_var_2a8;
  piStack_220 = (int *)0x0;
  local_var_218 = 0;
  pcStack_228 = acStackX_8;
  cStack_230 = '\x01';
  local_var_1f8 = local_var_a0;
  local_var_1f4 = local_var_9c;
  local_var_1f0 = local_var_98;
  local_var_1ec = local_var_94;
  local_var_268 = uVar2;
  local_var_260 = uVar3;
  local_var_258 = uVar1;
  plStack_250 = param_2;
  local_var_248 = param_3;
  plStack_240 = param_4;
  local_var_238 = uVar4;
  MemoryPoolManager0(&pplocal_var_278,local_var_b0);
  if (piStack_220 != (int *)0x0) {
    *piStack_220 = *piStack_220 + 1;
  }
  pcStackX_18 = (char *)0x0;
  if (cStack_230 != '\0') {
    if (*(int *)(pplocal_var_278 + 2) == 0) {
      puVar6 = &ui_system_data_1920_ptr;
    }
    else {
      puVar6 = (void *)pplocal_var_278[1][(uint64_t)(*(int *)(pplocal_var_278 + 2) - 1) * 3];
    }
    cVar5 = (**(code **)(*plStack_250 + 0x10))(plStack_250,puVar6,&pcStackX_18);
    if (((cVar5 != '\0') && (pcStackX_18 != (char *)0x0)) && (*pcStackX_18 != '\0')) {
      param_5._0_4_ = 0;
      function_6d81c0(pcStackX_18,plStack_240,&param_5,0x180be0400);
      (*(code *)CONCAT44(local_var_1ec,local_var_1f0))(local_var_248,&param_5);
    }
  }
  SystemResourceProcessor(&pplocal_var_278);
  bVar7 = acStackX_8[0] == '\0';
  if ((((local_var_298 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_298)) && (lStack_2a0 != 0)
     ) {
    (**(code **)(*(int64_t *)*plocal_var_2a8 + 0x10))();
  }
  if ((((local_var_280 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_280)) && (lStack_288 != 0)
     ) {
    (**(code **)(*(int64_t *)*plocal_var_290 + 0x10))();
  }
  return bVar7;
}
bool function_6c36a0(uint64_t *param_1,int64_t param_2,uint64_t param_3,int64_t *param_4,
                  char *param_5,uint64_t param_6,uint64_t param_7,uint64_t *param_8)
{
  uint64_t *puVar1;
  char cVar2;
  void *puVar3;
  void *puVar4;
  int32_t uVar5;
  char acStackX_8 [8];
  int64_t lStack_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  int64_t *plStack_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  char cStack_50;
  char *pcStack_48;
  int *piStack_40;
  uint64_t local_var_38;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  puVar1 = param_8;
  local_var_88 = *param_1;
  local_var_80 = param_1[1];
  local_var_78 = param_1[2];
  local_var_68 = param_5;
  local_var_60 = param_6;
  local_var_18 = *(int32_t *)(param_8 + 2);
  local_var_14 = *(int32_t *)((int64_t)param_8 + 0x14);
  local_var_10 = *(int32_t *)(param_8 + 3);
  local_var_c = *(int32_t *)((int64_t)param_8 + 0x1c);
  local_var_58 = param_7;
  pcStack_48 = acStackX_8;
  acStackX_8[0] = '\0';
  cStack_50 = '\x01';
  piStack_40 = (int *)0x0;
  local_var_38 = 0;
  lStack_98 = param_2;
  local_var_90 = param_3;
  plStack_70 = param_4;
  SystemCore_MemoryManager(&lStack_98,*param_8);
  if (piStack_40 != (int *)0x0) {
    *piStack_40 = *piStack_40 + 1;
  }
  puVar4 = &ui_system_data_1920_ptr;
  param_5 = (char *)0x0;
  if (cStack_50 != '\0') {
    if (*(int *)(lStack_98 + 0x10) == 0) {
      puVar3 = &ui_system_data_1920_ptr;
    }
    else {
      puVar3 = *(void **)
                (*(int64_t *)(lStack_98 + 8) + (uint64_t)(*(int *)(lStack_98 + 0x10) - 1) * 0x18);
    }
    cVar2 = (**(code **)(*plStack_70 + 0x10))(plStack_70,puVar3,&param_5);
    if (((cVar2 != '\0') && (param_5 != (char *)0x0)) && (*param_5 != '\0')) {
      uVar5 = SystemMonitoringProcessor(param_5,&param_6);
      (*(code *)CONCAT44(local_var_c,local_var_10))(local_var_68,uVar5);
    }
  }
  SystemResourceProcessor(&lStack_98);
  local_var_18 = *(int32_t *)(puVar1 + 6);
  local_var_14 = *(int32_t *)((int64_t)puVar1 + 0x34);
  local_var_10 = *(int32_t *)(puVar1 + 7);
  local_var_c = *(int32_t *)((int64_t)puVar1 + 0x3c);
  SystemCore_MemoryManager(&lStack_98,puVar1[4]);
  if (piStack_40 != (int *)0x0) {
    *piStack_40 = *piStack_40 + 1;
  }
  param_5 = (char *)0x0;
  if (cStack_50 != '\0') {
    if (*(int *)(lStack_98 + 0x10) != 0) {
      puVar4 = *(void **)
                (*(int64_t *)(lStack_98 + 8) + (uint64_t)(*(int *)(lStack_98 + 0x10) - 1) * 0x18);
    }
    cVar2 = (**(code **)(*plStack_70 + 0x10))(plStack_70,puVar4,&param_5);
    if (((cVar2 != '\0') && (param_5 != (char *)0x0)) && (*param_5 != '\0')) {
      uVar5 = SystemMonitoringProcessor(param_5,&param_6);
      (*(code *)CONCAT44(local_var_c,local_var_10))(local_var_68,uVar5);
    }
  }
  SystemResourceProcessor(&lStack_98);
  return acStackX_8[0] == '\0';
}
bool function_6c3840(uint64_t *param_1,int64_t param_2,uint64_t param_3,int64_t *param_4,
                  char *param_5,char *param_6,uint64_t param_7,uint64_t *param_8)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  char cVar7;
  void *puVar8;
  void *puVar9;
  int32_t uVar10;
  char acStackX_8 [8];
  int64_t lStack_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  int64_t *plStack_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  char cStack_90;
  char *pcStack_88;
  int *piStack_80;
  uint64_t local_var_78;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  puVar6 = param_8;
  uVar5 = param_6;
  uVar4 = param_5;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_var_58 = *(int32_t *)(param_8 + 2);
  local_var_54 = *(int32_t *)((int64_t)param_8 + 0x14);
  local_var_50 = *(int32_t *)(param_8 + 3);
  local_var_4c = *(int32_t *)((int64_t)param_8 + 0x1c);
  uVar1 = param_1[2];
  local_var_98 = param_7;
  pcStack_88 = acStackX_8;
  acStackX_8[0] = '\0';
  local_var_a8 = param_5;
  local_var_a0 = param_6;
  cStack_90 = '\x01';
  piStack_80 = (int *)0x0;
  local_var_78 = 0;
  lStack_d8 = param_2;
  local_var_d0 = param_3;
  local_var_c8 = uVar2;
  local_var_c0 = uVar3;
  local_var_b8 = uVar1;
  plStack_b0 = param_4;
  SystemCore_MemoryManager(&lStack_d8,*param_8);
  if (piStack_80 != (int *)0x0) {
    *piStack_80 = *piStack_80 + 1;
  }
  puVar9 = &ui_system_data_1920_ptr;
  param_5 = (char *)0x0;
  if (cStack_90 != '\0') {
    if (*(int *)(lStack_d8 + 0x10) == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)
                (*(int64_t *)(lStack_d8 + 8) + (uint64_t)(*(int *)(lStack_d8 + 0x10) - 1) * 0x18);
    }
    cVar7 = (**(code **)(*plStack_b0 + 0x10))(plStack_b0,puVar8,&param_5);
    if (((cVar7 != '\0') && (param_5 != (char *)0x0)) && (*param_5 != '\0')) {
      uVar10 = SystemMonitoringProcessor(param_5,&param_6);
      (*(code *)CONCAT44(local_var_4c,local_var_50))(local_var_a8,uVar10);
    }
  }
  SystemResourceProcessor(&lStack_d8);
  local_var_58 = *(int32_t *)(puVar6 + 6);
  local_var_54 = *(int32_t *)((int64_t)puVar6 + 0x34);
  local_var_50 = *(int32_t *)(puVar6 + 7);
  local_var_4c = *(int32_t *)((int64_t)puVar6 + 0x3c);
  SystemCore_MemoryManager(&lStack_d8,puVar6[4]);
  if (piStack_80 != (int *)0x0) {
    *piStack_80 = *piStack_80 + 1;
  }
  param_6 = (char *)0x0;
  if (cStack_90 != '\0') {
    if (*(int *)(lStack_d8 + 0x10) != 0) {
      puVar9 = *(void **)
                (*(int64_t *)(lStack_d8 + 8) + (uint64_t)(*(int *)(lStack_d8 + 0x10) - 1) * 0x18);
    }
    cVar7 = (**(code **)(*plStack_b0 + 0x10))(plStack_b0,puVar9,&param_6);
    if (((cVar7 != '\0') && (param_6 != (char *)0x0)) && (*param_6 != '\0')) {
      uVar10 = SystemMonitoringProcessor(param_6,&param_8);
      (*(code *)CONCAT44(local_var_4c,local_var_50))(local_var_a8,uVar10);
    }
  }
  SystemResourceProcessor(&lStack_d8);
  local_var_98 = param_7;
  pcStack_88 = acStackX_8;
  local_var_a8 = uVar4;
  local_var_a0 = uVar5;
  cStack_90 = 1;
  piStack_80 = (int *)0x0;
  local_var_78 = 0;
  lStack_d8 = param_2;
  local_var_d0 = param_3;
  local_var_c8 = uVar2;
  local_var_c0 = uVar3;
  local_var_b8 = uVar1;
  plStack_b0 = param_4;
  function_6c8030(puVar6,&lStack_d8,0);
  return acStackX_8[0] == '\0';
}
bool function_6c3a70(uint64_t *param_1,int64_t param_2,uint64_t param_3,int64_t *param_4,
                  char *param_5,uint64_t param_6,uint64_t param_7,int64_t param_8)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  char cVar8;
  void *puVar9;
  void *puVar10;
  int32_t uVar11;
  char acStackX_8 [8];
  int64_t lStack_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  int64_t *plStack_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  char cStack_90;
  char *pcStack_88;
  int *piStack_80;
  uint64_t local_var_78;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  lVar7 = param_8;
  uVar6 = param_7;
  uVar5 = param_6;
  uVar4 = param_5;
  uVar1 = param_1[2];
  pcStack_88 = acStackX_8;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  acStackX_8[0] = '\0';
  local_var_a8 = param_5;
  local_var_a0 = param_6;
  local_var_98 = param_7;
  cStack_90 = 1;
  piStack_80 = (int *)0x0;
  local_var_78 = 0;
  lStack_d8 = param_2;
  local_var_d0 = param_3;
  local_var_c8 = uVar2;
  local_var_c0 = uVar3;
  local_var_b8 = uVar1;
  plStack_b0 = param_4;
  function_6c8540(param_8,&lStack_d8,0);
  local_var_58 = *(int32_t *)(lVar7 + 0x1e8);
  local_var_54 = *(int32_t *)(lVar7 + 0x1ec);
  local_var_50 = *(int32_t *)(lVar7 + 0x1f0);
  local_var_4c = *(int32_t *)(lVar7 + 500);
  pcStack_88 = acStackX_8;
  local_var_a8 = uVar4;
  local_var_a0 = uVar5;
  local_var_98 = uVar6;
  cStack_90 = '\x01';
  piStack_80 = (int *)0x0;
  local_var_78 = 0;
  lStack_d8 = param_2;
  local_var_d0 = param_3;
  local_var_c8 = uVar2;
  local_var_c0 = uVar3;
  local_var_b8 = uVar1;
  plStack_b0 = param_4;
  SystemCore_MemoryManager(&lStack_d8,*(uint64_t *)(lVar7 + 0x1d8));
  if (piStack_80 != (int *)0x0) {
    *piStack_80 = *piStack_80 + 1;
  }
  puVar10 = &ui_system_data_1920_ptr;
  param_5 = (char *)0x0;
  if (cStack_90 != '\0') {
    if (*(int *)(lStack_d8 + 0x10) == 0) {
      puVar9 = &ui_system_data_1920_ptr;
    }
    else {
      puVar9 = *(void **)
                (*(int64_t *)(lStack_d8 + 8) + (uint64_t)(*(int *)(lStack_d8 + 0x10) - 1) * 0x18);
    }
    cVar8 = (**(code **)(*plStack_b0 + 0x10))(plStack_b0,puVar9,&param_5);
    if (((cVar8 != '\0') && (param_5 != (char *)0x0)) && (*param_5 != '\0')) {
      uVar11 = SystemMonitoringProcessor(param_5,&param_6);
      (*(code *)CONCAT44(local_var_4c,local_var_50))(local_var_a8,uVar11);
    }
  }
  SystemResourceProcessor(&lStack_d8);
  local_var_58 = *(int32_t *)(lVar7 + 0x208);
  local_var_54 = *(int32_t *)(lVar7 + 0x20c);
  local_var_50 = *(int32_t *)(lVar7 + 0x210);
  local_var_4c = *(int32_t *)(lVar7 + 0x214);
  SystemCore_MemoryManager(&lStack_d8,*(uint64_t *)(lVar7 + 0x1f8));
  if (piStack_80 != (int *)0x0) {
    *piStack_80 = *piStack_80 + 1;
  }
  param_5 = (char *)0x0;
  if (cStack_90 != '\0') {
    if (*(int *)(lStack_d8 + 0x10) != 0) {
      puVar10 = *(void **)
                 (*(int64_t *)(lStack_d8 + 8) + (uint64_t)(*(int *)(lStack_d8 + 0x10) - 1) * 0x18)
      ;
    }
    cVar8 = (**(code **)(*plStack_b0 + 0x10))(plStack_b0,puVar10,&param_5);
    if (((cVar8 != '\0') && (param_5 != (char *)0x0)) && (*param_5 != '\0')) {
      uVar11 = SystemMonitoringProcessor(param_5,&param_6);
      (*(code *)CONCAT44(local_var_4c,local_var_50))(local_var_a8,uVar11);
    }
  }
  SystemResourceProcessor(&lStack_d8);
  return acStackX_8[0] == '\0';
}
bool function_6c3ca0(uint64_t *param_1,int64_t param_2,uint64_t param_3,int64_t *param_4,
                  char *param_5,uint64_t param_6,uint64_t param_7,int64_t param_8)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  char cVar8;
  void *puVar9;
  void *puVar10;
  int32_t uVar11;
  char acStackX_8 [8];
  int64_t lStack_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  int64_t *plStack_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  char cStack_90;
  char *pcStack_88;
  int *piStack_80;
  uint64_t local_var_78;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  lVar7 = param_8;
  uVar6 = param_7;
  uVar5 = param_6;
  uVar4 = param_5;
  uVar1 = param_1[2];
  pcStack_88 = acStackX_8;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  acStackX_8[0] = '\0';
  local_var_a8 = param_5;
  local_var_a0 = param_6;
  local_var_98 = param_7;
  cStack_90 = 1;
  piStack_80 = (int *)0x0;
  local_var_78 = 0;
  lStack_d8 = param_2;
  local_var_d0 = param_3;
  local_var_c8 = uVar2;
  local_var_c0 = uVar3;
  local_var_b8 = uVar1;
  plStack_b0 = param_4;
  function_6c8d40(param_8,&lStack_d8,0);
  local_var_58 = *(int32_t *)(lVar7 + 0xb0);
  local_var_54 = *(int32_t *)(lVar7 + 0xb4);
  local_var_50 = *(int32_t *)(lVar7 + 0xb8);
  local_var_4c = *(int32_t *)(lVar7 + 0xbc);
  pcStack_88 = acStackX_8;
  local_var_a8 = uVar4;
  local_var_a0 = uVar5;
  local_var_98 = uVar6;
  cStack_90 = '\x01';
  piStack_80 = (int *)0x0;
  local_var_78 = 0;
  lStack_d8 = param_2;
  local_var_d0 = param_3;
  local_var_c8 = uVar2;
  local_var_c0 = uVar3;
  local_var_b8 = uVar1;
  plStack_b0 = param_4;
  SystemCore_MemoryManager(&lStack_d8,*(uint64_t *)(lVar7 + 0xa0));
  if (piStack_80 != (int *)0x0) {
    *piStack_80 = *piStack_80 + 1;
  }
  puVar10 = &ui_system_data_1920_ptr;
  param_5 = (char *)0x0;
  if (cStack_90 != '\0') {
    if (*(int *)(lStack_d8 + 0x10) == 0) {
      puVar9 = &ui_system_data_1920_ptr;
    }
    else {
      puVar9 = *(void **)
                (*(int64_t *)(lStack_d8 + 8) + (uint64_t)(*(int *)(lStack_d8 + 0x10) - 1) * 0x18);
    }
    cVar8 = (**(code **)(*plStack_b0 + 0x10))(plStack_b0,puVar9,&param_5);
    if (((cVar8 != '\0') && (param_5 != (char *)0x0)) && (*param_5 != '\0')) {
      uVar11 = SystemMonitoringProcessor(param_5,&param_6);
      (*(code *)CONCAT44(local_var_4c,local_var_50))(local_var_a8,uVar11);
    }
  }
  SystemResourceProcessor(&lStack_d8);
  local_var_58 = *(int32_t *)(lVar7 + 0xd0);
  local_var_54 = *(int32_t *)(lVar7 + 0xd4);
  local_var_50 = *(int32_t *)(lVar7 + 0xd8);
  local_var_4c = *(int32_t *)(lVar7 + 0xdc);
  SystemCore_MemoryManager(&lStack_d8,*(uint64_t *)(lVar7 + 0xc0));
  if (piStack_80 != (int *)0x0) {
    *piStack_80 = *piStack_80 + 1;
  }
  param_5 = (char *)0x0;
  if (cStack_90 != '\0') {
    if (*(int *)(lStack_d8 + 0x10) != 0) {
      puVar10 = *(void **)
                 (*(int64_t *)(lStack_d8 + 8) + (uint64_t)(*(int *)(lStack_d8 + 0x10) - 1) * 0x18)
      ;
    }
    cVar8 = (**(code **)(*plStack_b0 + 0x10))(plStack_b0,puVar10,&param_5);
    if (((cVar8 != '\0') && (param_5 != (char *)0x0)) && (*param_5 != '\0')) {
      uVar11 = SystemMonitoringProcessor(param_5,&param_6);
      (*(code *)CONCAT44(local_var_4c,local_var_50))(local_var_a8,uVar11);
    }
  }
  SystemResourceProcessor(&lStack_d8);
  return acStackX_8[0] == '\0';
}
bool function_6c3ed0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4,
                  uint64_t param_5)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int32_t uVar4;
  bool bVar5;
  char acStackX_8 [8];
  uint64_t stack_special_x_10;
  uint64_t **pplocal_var_518;
  uint64_t **pplocal_var_510;
  uint64_t local_var_508;
  uint64_t local_var_500;
  uint64_t local_var_4f8;
  uint64_t local_var_4f0;
  uint64_t local_var_4e8;
  int64_t *plStack_4e0;
  uint64_t local_var_4d8;
  int8_t local_var_4d0;
  char *pcStack_4c8;
  uint64_t local_var_4c0;
  uint64_t local_var_4b8;
  uint64_t *plocal_var_4b0;
  int64_t lStack_4a8;
  uint64_t local_var_4a0;
  uint64_t *plocal_var_498;
  int64_t lStack_490;
  uint64_t local_var_488;
  int8_t stack_array_478 [1120];
  stack_special_x_10 = (**(code **)(*param_4 + 0x18))();
  plocal_var_498 = &stack_special_x_10;
  lStack_490 = 0;
  plocal_var_4b0 = &stack_special_x_10;
  local_var_488 = 0;
  lStack_4a8 = 0;
  local_var_4a0 = 0;
  __0PxRigidDynamicGeneratedInfo_physx__QEAA_XZ(stack_array_478);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  pplocal_var_518 = &plocal_var_498;
  uVar1 = param_1[2];
  pplocal_var_510 = &plocal_var_4b0;
  acStackX_8[0] = '\0';
  pcStack_4c8 = acStackX_8;
  local_var_4d8 = param_5;
  local_var_4d0 = 1;
  local_var_4c0 = 0;
  local_var_4b8 = 0;
  local_var_508 = uVar2;
  local_var_500 = uVar3;
  local_var_4f8 = uVar1;
  local_var_4f0 = param_2;
  local_var_4e8 = param_3;
  plStack_4e0 = param_4;
  uVar4 = function_6ca0a0(stack_array_478,&pplocal_var_518,0);
  pplocal_var_518 = &plocal_var_498;
  pplocal_var_510 = &plocal_var_4b0;
  pcStack_4c8 = acStackX_8;
  local_var_4d8 = param_5;
  local_var_4d0 = 1;
  local_var_4c0 = 0;
  local_var_4b8 = 0;
  local_var_508 = uVar2;
  local_var_500 = uVar3;
  local_var_4f8 = uVar1;
  local_var_4f0 = param_2;
  local_var_4e8 = param_3;
  plStack_4e0 = param_4;
  uVar4 = function_6ca3c0(stack_array_478,&pplocal_var_518,uVar4);
  pplocal_var_518 = &plocal_var_498;
  pplocal_var_510 = &plocal_var_4b0;
  pcStack_4c8 = acStackX_8;
  local_var_4d8 = param_5;
  local_var_4d0 = 1;
  local_var_4c0 = 0;
  local_var_4b8 = 0;
  local_var_508 = uVar2;
  local_var_500 = uVar3;
  local_var_4f8 = uVar1;
  local_var_4f0 = param_2;
  local_var_4e8 = param_3;
  plStack_4e0 = param_4;
  function_6ca5c0(stack_array_478,&pplocal_var_518,uVar4);
  pplocal_var_518 = &plocal_var_498;
  pplocal_var_510 = &plocal_var_4b0;
  pcStack_4c8 = acStackX_8;
  local_var_4d8 = param_5;
  local_var_4d0 = 1;
  local_var_4c0 = 0;
  local_var_4b8 = 0;
  local_var_508 = uVar2;
  local_var_500 = uVar3;
  local_var_4f8 = uVar1;
  local_var_4f0 = param_2;
  local_var_4e8 = param_3;
  plStack_4e0 = param_4;
  function_6caf30(stack_array_478,&pplocal_var_518,0);
  bVar5 = acStackX_8[0] == '\0';
  if ((((local_var_4a0 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_4a0)) && (lStack_4a8 != 0)
     ) {
    (**(code **)(*(int64_t *)*plocal_var_4b0 + 0x10))();
  }
  if ((((local_var_488 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_488)) && (lStack_490 != 0)
     ) {
    (**(code **)(*(int64_t *)*plocal_var_498 + 0x10))();
  }
  return bVar5;
}
// 函数: void function_6c4180(int64_t *param_1,uint64_t param_2,int64_t param_3)
void function_6c4180(int64_t *param_1,uint64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  char cVar9;
  void *puVar10;
  int32_t uVar11;
  char acStackX_10 [8];
  char *pcStackX_18;
  int8_t astack_special_x_20 [8];
  int64_t lStack_f8;
  int64_t lStack_f0;
  int64_t lStack_e8;
  int64_t lStack_e0;
  int64_t lStack_d8;
  int64_t *plStack_d0;
  uint64_t local_var_c8;
  int64_t lStack_c0;
  int64_t lStack_b8;
  char cStack_b0;
  char *pcStack_a8;
  int *piStack_a0;
  uint64_t local_var_98;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  lVar2 = *param_1;
  lVar3 = param_1[1];
  plVar4 = (int64_t *)param_1[5];
  lVar5 = param_1[7];
  lVar6 = param_1[8];
  lVar1 = param_1[4];
  pcStack_a8 = acStackX_10;
  lVar7 = param_1[2];
  lVar8 = param_1[3];
  acStackX_10[0] = '\0';
  cStack_b0 = 1;
  piStack_a0 = (int *)0x0;
  local_var_98 = 0;
  lStack_f8 = lVar2;
  lStack_f0 = lVar3;
  lStack_e8 = lVar7;
  lStack_e0 = lVar8;
  lStack_d8 = lVar1;
  plStack_d0 = plVar4;
  local_var_c8 = param_2;
  lStack_c0 = lVar5;
  lStack_b8 = lVar6;
  function_6c8d40(param_3,&lStack_f8,0);
  local_var_78 = *(int32_t *)(param_3 + 0xb0);
  local_var_74 = *(int32_t *)(param_3 + 0xb4);
  local_var_70 = *(int32_t *)(param_3 + 0xb8);
  local_var_6c = *(int32_t *)(param_3 + 0xbc);
  pcStack_a8 = acStackX_10;
  cStack_b0 = '\x01';
  piStack_a0 = (int *)0x0;
  local_var_98 = 0;
  lStack_f8 = lVar2;
  lStack_f0 = lVar3;
  lStack_e8 = lVar7;
  lStack_e0 = lVar8;
  lStack_d8 = lVar1;
  plStack_d0 = plVar4;
  local_var_c8 = param_2;
  lStack_c0 = lVar5;
  lStack_b8 = lVar6;
  SystemCore_MemoryManager(&lStack_f8,*(uint64_t *)(param_3 + 0xa0));
  if (piStack_a0 != (int *)0x0) {
    *piStack_a0 = *piStack_a0 + 1;
  }
  pcStackX_18 = (char *)0x0;
  if (cStack_b0 != '\0') {
    if (*(int *)(lStack_f8 + 0x10) == 0) {
      puVar10 = &ui_system_data_1920_ptr;
    }
    else {
      puVar10 = *(void **)
                 (*(int64_t *)(lStack_f8 + 8) + (uint64_t)(*(int *)(lStack_f8 + 0x10) - 1) * 0x18)
      ;
    }
    cVar9 = (**(code **)(*plStack_d0 + 0x10))(plStack_d0,puVar10,&pcStackX_18);
    if (((cVar9 != '\0') && (pcStackX_18 != (char *)0x0)) && (*pcStackX_18 != '\0')) {
      uVar11 = SystemMonitoringProcessor(pcStackX_18,astack_special_x_20);
      (*(code *)CONCAT44(local_var_6c,local_var_70))(local_var_c8,uVar11);
    }
  }
  SystemResourceProcessor(&lStack_f8);
  if (acStackX_10[0] != '\0') {
    *(int8_t *)param_1[10] = 1;
  }
  return;
}
uint64_t UISystem_DataProcessor(int64_t *param_1,int32_t *param_2)
{
  int iVar1;
  char cVar2;
  void *puVar3;
  int32_t extraout_XMM0_Da;
  char *apcStackX_8 [4];
  apcStackX_8[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      puVar3 = &ui_system_data_1920_ptr;
    }
    else {
      puVar3 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_1[5] + 0x10))((int64_t *)param_1[5],puVar3,apcStackX_8)
    ;
    if (((cVar2 != '\0') && (apcStackX_8[0] != (char *)0x0)) && (*apcStackX_8[0] != '\0')) {
      SystemMonitoringProcessor(apcStackX_8[0],apcStackX_8);
      *param_2 = extraout_XMM0_Da;
      return 1;
    }
  }
  return 0;
}
uint64_t function_6c43a0(int64_t *param_1,int32_t *param_2)
{
  int iVar1;
  char cVar2;
  int32_t uVar3;
  void *puVar4;
  char *apcStackX_8 [4];
  apcStackX_8[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_1[5] + 0x10))((int64_t *)param_1[5],puVar4,apcStackX_8)
    ;
    if (((cVar2 != '\0') && (apcStackX_8[0] != (char *)0x0)) && (*apcStackX_8[0] != '\0')) {
      uVar3 = strtoul(apcStackX_8[0],apcStackX_8,10);
      *param_2 = uVar3;
      uVar3 = strtoul(apcStackX_8[0],apcStackX_8,10);
      param_2[1] = uVar3;
      uVar3 = strtoul(apcStackX_8[0],apcStackX_8,10);
      param_2[2] = uVar3;
      uVar3 = strtoul(apcStackX_8[0],0,10);
      param_2[3] = uVar3;
      return 1;
    }
  }
  return 0;
}