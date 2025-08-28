/* 函数别名定义: MemoryPoolManager */
#define MemoryPoolManager MemoryPoolManager


#include "SystemAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"

// 99_part_10_part038.c - 11 个函数

// 函数: void FUN_1806c014e(void)
void FUN_1806c014e(void)

{
  int iVar1;
  char cVar2;
  int *in_RAX;
  uint64_t uVar3;
  int8_t uVar4;
  void *puVar5;
  void *puVar6;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  int64_t lVar7;
  int *piVar8;
  bool in_ZF;
  int32_t uVar9;
  int iStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  
  piVar8 = &stack0x00000060;
  if (!in_ZF) {
    piVar8 = in_RAX;
  }
  _iStack0000000000000060 = (char *)CONCAT44(uStack0000000000000064,0x160);
  uVar9 = MemoryPoolManager0();
  MemoryPoolManager0(uVar9,*(uint64_t *)(unaff_RSI + 0x10));
  puVar6 = &ui_system_data_1920_ptr;
  _uStack0000000000000068 = (char *)0x0;
  if ((char)unaff_RDI[9] != '\0') {
    iVar1 = *(int *)(*unaff_RDI + 0x10);
    if (iVar1 == 0) {
      puVar5 = &ui_system_data_1920_ptr;
    }
    else {
      puVar5 = *(void **)(*(int64_t *)(*unaff_RDI + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)unaff_RDI[5] + 0x10))((int64_t *)unaff_RDI[5],puVar5);
    if (((cVar2 != '\0') && (_uStack0000000000000068 != (char *)0x0)) &&
       (*_uStack0000000000000068 != '\0')) {
      uVar9 = SystemMonitoringProcessor(_uStack0000000000000068,&stack0x00000078);
      lVar7 = unaff_RDI[6];
      (**(code **)(unaff_RSI + 0x28))(lVar7,&stack0x00000078);
      (**(code **)(unaff_RSI + 0x20))(lVar7,uVar9,uStack0000000000000068);
    }
  }
  *piVar8 = *piVar8 + 1;
  uVar9 = SystemResourceProcessor();
  MemoryPoolManager0(uVar9,*(uint64_t *)(unaff_RSI + 0x18));
  _iStack0000000000000060 = (char *)0x0;
  if ((char)unaff_RDI[9] != '\0') {
    iVar1 = *(int *)(*unaff_RDI + 0x10);
    if (iVar1 != 0) {
      puVar6 = *(void **)(*(int64_t *)(*unaff_RDI + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)unaff_RDI[5] + 0x10))((int64_t *)unaff_RDI[5],puVar6);
    if (((cVar2 != '\0') && (_iStack0000000000000060 != (char *)0x0)) &&
       (*_iStack0000000000000060 != '\0')) {
      uVar9 = SystemMonitoringProcessor(_iStack0000000000000060,&stack0x00000068);
      lVar7 = unaff_RDI[6];
      (**(code **)(unaff_RSI + 0x28))(lVar7,&stack0x00000060);
      (**(code **)(unaff_RSI + 0x20))(lVar7,iStack0000000000000060,uVar9);
    }
  }
  SystemResourceProcessor();
  lVar7 = *unaff_RDI;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar3 = (uint64_t)(*(int *)(lVar7 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar7 + 8) + 8 + uVar3 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar7 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)unaff_RDI[5] + 0x48))();
      lVar7 = *unaff_RDI;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
    lVar7 = *unaff_RDI;
  }
  *(int8_t *)(unaff_RDI + 9) = 1;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar4 = (int8_t)unaff_RDI[9];
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 0x10 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar4 = 0;
    }
    *(int8_t *)(unaff_RDI + 9) = uVar4;
  }
  return;
}






// 函数: void FUN_1806c0226(void)
void FUN_1806c0226(void)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint64_t uVar4;
  int8_t uVar5;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  int64_t lVar6;
  int32_t uVar7;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  
  iVar1 = *(int *)(*unaff_RDI + 0x10);
  if (iVar1 != 0) {
    unaff_RBP = *(uint64_t *)(*(int64_t *)(*unaff_RDI + 8) + (uint64_t)(iVar1 - 1) * 0x18);
  }
  cVar3 = (**(code **)(*(int64_t *)unaff_RDI[5] + 0x10))((int64_t *)unaff_RDI[5],unaff_RBP);
  if (((cVar3 != '\0') &&
      (pcVar2 = (char *)CONCAT44(uStack0000000000000064,uStack0000000000000060),
      pcVar2 != (char *)0x0)) && (*pcVar2 != '\0')) {
    uVar7 = SystemMonitoringProcessor(pcVar2,&stack0x00000068);
    lVar6 = unaff_RDI[6];
    (**(code **)(unaff_RSI + 0x28))(lVar6,&stack0x00000060);
    (**(code **)(unaff_RSI + 0x20))(lVar6,uStack0000000000000060,uVar7);
  }
  SystemResourceProcessor();
  lVar6 = *unaff_RDI;
  if (*(int *)(lVar6 + 0x10) != 0) {
    uVar4 = (uint64_t)(*(int *)(lVar6 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar6 + 8) + 8 + uVar4 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar6 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)unaff_RDI[5] + 0x48))();
      lVar6 = *unaff_RDI;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
    lVar6 = *unaff_RDI;
  }
  *(int8_t *)(unaff_RDI + 9) = 1;
  if (*(int *)(lVar6 + 0x10) != 0) {
    uVar5 = (int8_t)unaff_RDI[9];
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 0x10 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar5 = 0;
    }
    *(int8_t *)(unaff_RDI + 9) = uVar5;
  }
  return;
}






// 函数: void FUN_1806c02c0(int64_t *param_1,uint64_t *param_2)
void FUN_1806c02c0(int64_t *param_1,uint64_t *param_2)

{
  int iVar1;
  char cVar2;
  uint64_t uVar3;
  int8_t uVar4;
  void *puVar5;
  void *puVar6;
  int64_t lVar7;
  char **ppcVar8;
  int32_t uVar9;
  char *pcStackX_8;
  char *apcStackX_10 [2];
  int8_t auStackX_20 [8];
  
  ppcVar8 = &pcStackX_8;
  if ((char **)param_1[0xb] != (char **)0x0) {
    ppcVar8 = (char **)param_1[0xb];
  }
  pcStackX_8 = (char *)CONCAT44(pcStackX_8._4_4_,0x160);
  SystemCore_MemoryManager(param_1,*param_2);
  SystemCore_MemoryManager(param_1,param_2[2]);
  puVar6 = &ui_system_data_1920_ptr;
  apcStackX_10[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &ui_system_data_1920_ptr;
    }
    else {
      puVar5 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_1[5] + 0x10))((int64_t *)param_1[5],puVar5);
    if (((cVar2 != '\0') && (apcStackX_10[0] != (char *)0x0)) && (*apcStackX_10[0] != '\0')) {
      uVar9 = SystemMonitoringProcessor(apcStackX_10[0],auStackX_20);
      lVar7 = param_1[6];
      (*(code *)param_2[5])(lVar7,auStackX_20);
      (*(code *)param_2[4])(lVar7,uVar9,apcStackX_10[0]._0_4_);
    }
  }
  *(int *)ppcVar8 = *(int *)ppcVar8 + 1;
  SystemResourceProcessor(param_1);
  SystemCore_MemoryManager(param_1,param_2[3]);
  pcStackX_8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 != 0) {
      puVar6 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_1[5] + 0x10))((int64_t *)param_1[5],puVar6);
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar9 = SystemMonitoringProcessor(pcStackX_8,apcStackX_10);
      lVar7 = param_1[6];
      (*(code *)param_2[5])(lVar7,&pcStackX_8);
      (*(code *)param_2[4])(lVar7,pcStackX_8._0_4_,uVar9);
    }
  }
  SystemResourceProcessor(param_1);
  lVar7 = *param_1;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar3 = (uint64_t)(*(int *)(lVar7 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar7 + 8) + 8 + uVar3 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar7 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)param_1[5] + 0x48))();
      lVar7 = *param_1;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
    lVar7 = *param_1;
  }
  *(int8_t *)(param_1 + 9) = 1;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar4 = (int8_t)param_1[9];
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 0x10 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar4 = 0;
    }
    *(int8_t *)(param_1 + 9) = uVar4;
  }
  return;
}






// 函数: void FUN_1806c02de(void)
void FUN_1806c02de(void)

{
  int iVar1;
  char cVar2;
  int *in_RAX;
  uint64_t uVar3;
  int8_t uVar4;
  void *puVar5;
  void *puVar6;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  int64_t lVar7;
  int *piVar8;
  bool in_ZF;
  int32_t uVar9;
  int iStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  
  piVar8 = &stack0x00000060;
  if (!in_ZF) {
    piVar8 = in_RAX;
  }
  _iStack0000000000000060 = (char *)CONCAT44(uStack0000000000000064,0x160);
  uVar9 = SystemCore_MemoryManager();
  SystemCore_MemoryManager(uVar9,*(uint64_t *)(unaff_RSI + 0x10));
  puVar6 = &ui_system_data_1920_ptr;
  _uStack0000000000000068 = (char *)0x0;
  if ((char)unaff_RDI[9] != '\0') {
    iVar1 = *(int *)(*unaff_RDI + 0x10);
    if (iVar1 == 0) {
      puVar5 = &ui_system_data_1920_ptr;
    }
    else {
      puVar5 = *(void **)(*(int64_t *)(*unaff_RDI + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)unaff_RDI[5] + 0x10))((int64_t *)unaff_RDI[5],puVar5);
    if (((cVar2 != '\0') && (_uStack0000000000000068 != (char *)0x0)) &&
       (*_uStack0000000000000068 != '\0')) {
      uVar9 = SystemMonitoringProcessor(_uStack0000000000000068,&stack0x00000078);
      lVar7 = unaff_RDI[6];
      (**(code **)(unaff_RSI + 0x28))(lVar7,&stack0x00000078);
      (**(code **)(unaff_RSI + 0x20))(lVar7,uVar9,uStack0000000000000068);
    }
  }
  *piVar8 = *piVar8 + 1;
  uVar9 = SystemResourceProcessor();
  SystemCore_MemoryManager(uVar9,*(uint64_t *)(unaff_RSI + 0x18));
  _iStack0000000000000060 = (char *)0x0;
  if ((char)unaff_RDI[9] != '\0') {
    iVar1 = *(int *)(*unaff_RDI + 0x10);
    if (iVar1 != 0) {
      puVar6 = *(void **)(*(int64_t *)(*unaff_RDI + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)unaff_RDI[5] + 0x10))((int64_t *)unaff_RDI[5],puVar6);
    if (((cVar2 != '\0') && (_iStack0000000000000060 != (char *)0x0)) &&
       (*_iStack0000000000000060 != '\0')) {
      uVar9 = SystemMonitoringProcessor(_iStack0000000000000060,&stack0x00000068);
      lVar7 = unaff_RDI[6];
      (**(code **)(unaff_RSI + 0x28))(lVar7,&stack0x00000060);
      (**(code **)(unaff_RSI + 0x20))(lVar7,iStack0000000000000060,uVar9);
    }
  }
  SystemResourceProcessor();
  lVar7 = *unaff_RDI;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar3 = (uint64_t)(*(int *)(lVar7 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar7 + 8) + 8 + uVar3 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar7 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)unaff_RDI[5] + 0x48))();
      lVar7 = *unaff_RDI;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
    lVar7 = *unaff_RDI;
  }
  *(int8_t *)(unaff_RDI + 9) = 1;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar4 = (int8_t)unaff_RDI[9];
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 0x10 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar4 = 0;
    }
    *(int8_t *)(unaff_RDI + 9) = uVar4;
  }
  return;
}






// 函数: void FUN_1806c03b6(void)
void FUN_1806c03b6(void)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint64_t uVar4;
  int8_t uVar5;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  int64_t lVar6;
  int32_t uVar7;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  
  iVar1 = *(int *)(*unaff_RDI + 0x10);
  if (iVar1 != 0) {
    unaff_RBP = *(uint64_t *)(*(int64_t *)(*unaff_RDI + 8) + (uint64_t)(iVar1 - 1) * 0x18);
  }
  cVar3 = (**(code **)(*(int64_t *)unaff_RDI[5] + 0x10))((int64_t *)unaff_RDI[5],unaff_RBP);
  if (((cVar3 != '\0') &&
      (pcVar2 = (char *)CONCAT44(uStack0000000000000064,uStack0000000000000060),
      pcVar2 != (char *)0x0)) && (*pcVar2 != '\0')) {
    uVar7 = SystemMonitoringProcessor(pcVar2,&stack0x00000068);
    lVar6 = unaff_RDI[6];
    (**(code **)(unaff_RSI + 0x28))(lVar6,&stack0x00000060);
    (**(code **)(unaff_RSI + 0x20))(lVar6,uStack0000000000000060,uVar7);
  }
  SystemResourceProcessor();
  lVar6 = *unaff_RDI;
  if (*(int *)(lVar6 + 0x10) != 0) {
    uVar4 = (uint64_t)(*(int *)(lVar6 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar6 + 8) + 8 + uVar4 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar6 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)unaff_RDI[5] + 0x48))();
      lVar6 = *unaff_RDI;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
    lVar6 = *unaff_RDI;
  }
  *(int8_t *)(unaff_RDI + 9) = 1;
  if (*(int *)(lVar6 + 0x10) != 0) {
    uVar5 = (int8_t)unaff_RDI[9];
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 0x10 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar5 = 0;
    }
    *(int8_t *)(unaff_RDI + 9) = uVar5;
  }
  return;
}






// 函数: void FUN_1806c0450(int64_t *param_1,uint64_t *param_2)
void FUN_1806c0450(int64_t *param_1,uint64_t *param_2)

{
  int iVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  int64_t lVar4;
  void *puVar5;
  int *piVar6;
  void *puVar7;
  uint auStackX_8 [2];
  int aiStackX_10 [4];
  int8_t auStackX_20 [8];
  
  aiStackX_10[0] = 0x160;
  piVar6 = aiStackX_10;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar6 = (int *)param_1[5];
  }
  SystemValidator(param_1,*param_2);
  SystemValidator(param_1,param_2[2]);
  (*(code *)param_2[5])(param_1[2],auStackX_8,auStackX_20);
  puVar7 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 == 0) {
    puVar5 = &ui_system_data_1920_ptr;
  }
  else {
    puVar5 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_1[3];
  plVar3 = (int64_t *)param_1[1];
  SystemCore_CleanupManager(puVar2,auStackX_8[0]);
  auStackX_8[0] = auStackX_8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,auStackX_8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar5,puVar2[4]);
  puVar2[3] = 0;
  *piVar6 = *piVar6 + 1;
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar4 + 8) + 8 + (uint64_t)(*(int *)(lVar4 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x20))();
      lVar4 = *param_1;
    }
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  SystemValidator(param_1,param_2[3]);
  (*(code *)param_2[5])(param_1[2],aiStackX_10,auStackX_8);
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 != 0) {
    puVar7 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_1[3];
  plVar3 = (int64_t *)param_1[1];
  SystemCore_CleanupManager(puVar2,auStackX_8[0]);
  auStackX_8[0] = auStackX_8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,auStackX_8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar7,puVar2[4]);
  puVar2[3] = 0;
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar4 + 8) + 8 + (uint64_t)(*(int *)(lVar4 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x20))();
      lVar4 = *param_1;
    }
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
    lVar4 = *param_1;
  }
  if (*(int *)(lVar4 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar4 + 8) + 8 + (uint64_t)(*(int *)(lVar4 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x20))();
      lVar4 = *param_1;
    }
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c0620(int64_t *param_1,uint64_t *param_2)
void FUN_1806c0620(int64_t *param_1,uint64_t *param_2)

{
  int iVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  int64_t lVar4;
  void *puVar5;
  int *piVar6;
  void *puVar7;
  uint auStackX_8 [2];
  int aiStackX_10 [4];
  int8_t auStackX_20 [8];
  
  aiStackX_10[0] = 0x55;
  piVar6 = aiStackX_10;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar6 = (int *)param_1[5];
  }
  SystemValidator(param_1,*param_2);
  SystemValidator(param_1,param_2[2]);
  (*(code *)param_2[5])(param_1[2],auStackX_8,auStackX_20);
  puVar7 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 == 0) {
    puVar5 = &ui_system_data_1920_ptr;
  }
  else {
    puVar5 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_1[3];
  plVar3 = (int64_t *)param_1[1];
  SystemCore_CleanupManager(puVar2,auStackX_8[0]);
  auStackX_8[0] = auStackX_8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,auStackX_8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar5,puVar2[4]);
  puVar2[3] = 0;
  *piVar6 = *piVar6 + 1;
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar4 + 8) + 8 + (uint64_t)(*(int *)(lVar4 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x20))();
      lVar4 = *param_1;
    }
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  SystemValidator(param_1,param_2[3]);
  (*(code *)param_2[5])(param_1[2],aiStackX_10,auStackX_8);
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 != 0) {
    puVar7 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_1[3];
  plVar3 = (int64_t *)param_1[1];
  SystemCore_CleanupManager(puVar2,auStackX_8[0]);
  auStackX_8[0] = auStackX_8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,auStackX_8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar7,puVar2[4]);
  puVar2[3] = 0;
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar4 + 8) + 8 + (uint64_t)(*(int *)(lVar4 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x20))();
      lVar4 = *param_1;
    }
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
    lVar4 = *param_1;
  }
  if (*(int *)(lVar4 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar4 + 8) + 8 + (uint64_t)(*(int *)(lVar4 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x20))();
      lVar4 = *param_1;
    }
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c07f0(int64_t *param_1,uint64_t *param_2)
void FUN_1806c07f0(int64_t *param_1,uint64_t *param_2)

{
  int iVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  int64_t lVar4;
  void *puVar5;
  int *piVar6;
  void *puVar7;
  uint auStackX_8 [2];
  int aiStackX_10 [4];
  int8_t auStackX_20 [8];
  
  aiStackX_10[0] = 0x5a;
  piVar6 = aiStackX_10;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar6 = (int *)param_1[5];
  }
  SystemValidator(param_1,*param_2);
  SystemValidator(param_1,param_2[2]);
  (*(code *)param_2[5])(param_1[2],auStackX_8,auStackX_20);
  puVar7 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 == 0) {
    puVar5 = &ui_system_data_1920_ptr;
  }
  else {
    puVar5 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_1[3];
  plVar3 = (int64_t *)param_1[1];
  SystemCore_CleanupManager(puVar2,auStackX_8[0]);
  auStackX_8[0] = auStackX_8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,auStackX_8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar5,puVar2[4]);
  puVar2[3] = 0;
  *piVar6 = *piVar6 + 1;
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar4 + 8) + 8 + (uint64_t)(*(int *)(lVar4 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x20))();
      lVar4 = *param_1;
    }
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  SystemValidator(param_1,param_2[3]);
  (*(code *)param_2[5])(param_1[2],aiStackX_10,auStackX_8);
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 != 0) {
    puVar7 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_1[3];
  plVar3 = (int64_t *)param_1[1];
  SystemCore_CleanupManager(puVar2,auStackX_8[0]);
  auStackX_8[0] = auStackX_8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,auStackX_8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar7,puVar2[4]);
  puVar2[3] = 0;
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar4 + 8) + 8 + (uint64_t)(*(int *)(lVar4 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x20))();
      lVar4 = *param_1;
    }
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
    lVar4 = *param_1;
  }
  if (*(int *)(lVar4 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar4 + 8) + 8 + (uint64_t)(*(int *)(lVar4 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x20))();
      lVar4 = *param_1;
    }
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c09c0(int64_t *param_1,uint64_t *param_2)
void FUN_1806c09c0(int64_t *param_1,uint64_t *param_2)

{
  int iVar1;
  char cVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int8_t uVar5;
  void *puVar6;
  char **ppcVar7;
  int64_t lVar8;
  void *puVar9;
  char *pcStackX_8;
  char *pcStackX_10;
  char *pcStackX_20;
  
  pcStackX_8 = (char *)CONCAT44(pcStackX_8._4_4_,0x68);
  ppcVar7 = &pcStackX_8;
  if ((char **)param_1[0xb] != (char **)0x0) {
    ppcVar7 = (char **)param_1[0xb];
  }
  MemoryPoolManager0(param_1,*param_2);
  MemoryPoolManager0(param_1,param_2[2]);
  puVar9 = &ui_system_data_1920_ptr;
  pcStackX_10 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &ui_system_data_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_1[5] + 0x10))((int64_t *)param_1[5],puVar6);
    if (((cVar2 != '\0') && (pcStackX_10 != (char *)0x0)) && (*pcStackX_10 != '\0')) {
      pcStackX_20 = pcStackX_10;
      uVar3 = strtoul(pcStackX_10,&pcStackX_20,10);
      lVar8 = param_1[6];
      (*(code *)param_2[5])(lVar8,&pcStackX_20,&pcStackX_10);
      (*(code *)param_2[4])(lVar8,uVar3);
    }
  }
  *(int *)ppcVar7 = *(int *)ppcVar7 + 1;
  SystemResourceProcessor(param_1);
  MemoryPoolManager0(param_1,param_2[3]);
  pcStackX_8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 != 0) {
      puVar9 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_1[5] + 0x10))((int64_t *)param_1[5],puVar9);
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      pcStackX_10 = pcStackX_8;
      strtoul(pcStackX_8,&pcStackX_10,10);
      lVar8 = param_1[6];
      (*(code *)param_2[5])(lVar8,&pcStackX_8,&pcStackX_10);
      (*(code *)param_2[4])(lVar8,(uint64_t)pcStackX_8 & 0xffffffff);
    }
  }
  SystemResourceProcessor(param_1);
  lVar8 = *param_1;
  if (*(int *)(lVar8 + 0x10) != 0) {
    uVar4 = (uint64_t)(*(int *)(lVar8 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar8 + 8) + 8 + uVar4 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar8 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)param_1[5] + 0x48))();
      lVar8 = *param_1;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
    lVar8 = *param_1;
  }
  *(int8_t *)(param_1 + 9) = 1;
  if (*(int *)(lVar8 + 0x10) != 0) {
    uVar5 = (int8_t)param_1[9];
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 0x10 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar5 = 0;
    }
    *(int8_t *)(param_1 + 9) = uVar5;
  }
  return;
}






// 函数: void FUN_1806c09d9(int64_t *param_1)
void FUN_1806c09d9(int64_t *param_1)

{
  int iVar1;
  char cVar2;
  int32_t uVar3;
  int *in_RAX;
  uint64_t uVar4;
  int8_t uVar5;
  void *puVar6;
  int *piVar7;
  int64_t lVar8;
  int64_t unaff_R14;
  void *puVar9;
  bool in_ZF;
  char *in_stack_00000050;
  char *in_stack_00000058;
  char *in_stack_00000068;
  
  in_stack_00000050 = (char *)CONCAT44(in_stack_00000050._4_4_,0x68);
  piVar7 = (int *)&stack0x00000050;
  if (!in_ZF) {
    piVar7 = in_RAX;
  }
  MemoryPoolManager0();
  MemoryPoolManager0(param_1,*(uint64_t *)(unaff_R14 + 0x10));
  puVar9 = &ui_system_data_1920_ptr;
  in_stack_00000058 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &ui_system_data_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_1[5] + 0x10))((int64_t *)param_1[5],puVar6);
    if (((cVar2 != '\0') && (in_stack_00000058 != (char *)0x0)) && (*in_stack_00000058 != '\0')) {
      in_stack_00000068 = in_stack_00000058;
      uVar3 = strtoul(in_stack_00000058,&stack0x00000068,10);
      lVar8 = param_1[6];
      (**(code **)(unaff_R14 + 0x28))(lVar8,&stack0x00000068,&stack0x00000058);
      (**(code **)(unaff_R14 + 0x20))(lVar8,uVar3);
    }
  }
  *piVar7 = *piVar7 + 1;
  SystemResourceProcessor(param_1);
  MemoryPoolManager0(param_1,*(uint64_t *)(unaff_R14 + 0x18));
  in_stack_00000050 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 != 0) {
      puVar9 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_1[5] + 0x10))((int64_t *)param_1[5],puVar9);
    if (((cVar2 != '\0') && (in_stack_00000050 != (char *)0x0)) && (*in_stack_00000050 != '\0')) {
      in_stack_00000058 = in_stack_00000050;
      strtoul(in_stack_00000050,&stack0x00000058,10);
      lVar8 = param_1[6];
      (**(code **)(unaff_R14 + 0x28))(lVar8,&stack0x00000050,&stack0x00000058);
      (**(code **)(unaff_R14 + 0x20))(lVar8,(uint64_t)in_stack_00000050 & 0xffffffff);
    }
  }
  SystemResourceProcessor(param_1);
  lVar8 = *param_1;
  if (*(int *)(lVar8 + 0x10) != 0) {
    uVar4 = (uint64_t)(*(int *)(lVar8 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar8 + 8) + 8 + uVar4 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar8 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)param_1[5] + 0x48))();
      lVar8 = *param_1;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
    lVar8 = *param_1;
  }
  *(int8_t *)(param_1 + 9) = 1;
  if (*(int *)(lVar8 + 0x10) != 0) {
    uVar5 = (int8_t)param_1[9];
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 0x10 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar5 = 0;
    }
    *(int8_t *)(param_1 + 9) = uVar5;
  }
  return;
}






// 函数: void FUN_1806c0abf(void)
void FUN_1806c0abf(void)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint64_t uVar4;
  int8_t uVar5;
  int64_t *unaff_RSI;
  int64_t lVar6;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  char *in_stack_00000058;
  
  iVar1 = *(int *)(*unaff_RSI + 0x10);
  if (iVar1 != 0) {
    unaff_R15 = *(uint64_t *)(*(int64_t *)(*unaff_RSI + 8) + (uint64_t)(iVar1 - 1) * 0x18);
  }
  cVar3 = (**(code **)(*(int64_t *)unaff_RSI[5] + 0x10))((int64_t *)unaff_RSI[5],unaff_R15);
  if (((cVar3 != '\0') &&
      (pcVar2 = (char *)CONCAT44(uStack0000000000000054,uStack0000000000000050),
      pcVar2 != (char *)0x0)) && (*pcVar2 != '\0')) {
    in_stack_00000058 = pcVar2;
    strtoul(pcVar2,&stack0x00000058,10);
    lVar6 = unaff_RSI[6];
    (**(code **)(unaff_R14 + 0x28))(lVar6,&stack0x00000050,&stack0x00000058);
    (**(code **)(unaff_R14 + 0x20))(lVar6,uStack0000000000000050);
  }
  SystemResourceProcessor();
  lVar6 = *unaff_RSI;
  if (*(int *)(lVar6 + 0x10) != 0) {
    uVar4 = (uint64_t)(*(int *)(lVar6 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar6 + 8) + 8 + uVar4 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar6 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)unaff_RSI[5] + 0x48))();
      lVar6 = *unaff_RSI;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
    lVar6 = *unaff_RSI;
  }
  *(int8_t *)(unaff_RSI + 9) = 1;
  if (*(int *)(lVar6 + 0x10) != 0) {
    uVar5 = (int8_t)unaff_RSI[9];
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 0x10 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar5 = 0;
    }
    *(int8_t *)(unaff_RSI + 9) = uVar5;
  }
  return;
}






