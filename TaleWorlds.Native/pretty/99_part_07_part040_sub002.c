#include "TaleWorlds.Native.Split.h"
// 99_part_07_part040_sub002.c - 1 个函数
// 函数: void SystemCore_Controller(uint64_t param_1,int32_t param_2,char *param_3)
void SystemCore_Controller(uint64_t param_1,int32_t param_2,char *param_3)
{
  char cVar1;
  uint64_t *puVar2;
  char *pcVar3;
  puVar2 = (uint64_t *)DataPipelineManager(param_1,0x60);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  *(int32_t *)(puVar2 + 5) = param_2;
  puVar2[6] = 0;
  puVar2[8] = 0;
  if (param_3 != (char *)0x0) {
    cVar1 = *param_3;
    pcVar3 = param_3;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    *puVar2 = param_3;
    puVar2[2] = (int64_t)pcVar3 - (int64_t)param_3;
  }
  return;
}
int64_t DataPipelineManager(int64_t *param_1,uint64_t param_2)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t lVar3;
  lVar3 = (uint64_t)(-(int)param_1[1] & 7) + param_1[1];
  if ((uint64_t)param_1[2] < lVar3 + param_2) {
    uVar2 = param_2;
    if (param_2 < 0x3ffeb) {
      uVar2 = 0x3ffea;
    }
    if ((code *)param_1[0x603] == (code *)0x0) {
      lVar3 = thunk_SystemRenderer(uVar2 + 0x16);
      if (lVar3 == 0) {
        SystemTools_DataProcessor(&processed_var_8136_ptr,0);
      }
    }
    else {
      lVar3 = (*(code *)param_1[0x603])();
    }
    plVar1 = (int64_t *)((uint64_t)(-(int)lVar3 & 7) + lVar3);
    *plVar1 = *param_1;
    plVar1 = plVar1 + 1;
    *param_1 = lVar3;
    param_1[2] = lVar3 + uVar2 + 0x16;
    lVar3 = (uint64_t)(-(int)plVar1 & 7) + (int64_t)plVar1;
  }
  param_1[1] = lVar3 + param_2;
  return lVar3;
}
int64_t function_4c132d(int64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t unaff_RBP;
  int64_t *unaff_RDI;
  if (param_2 < 0x3ffeb) {
    param_2 = 0x3ffea;
  }
  if (*(code **)(param_1 + 0x3018) == (code *)0x0) {
    lVar1 = thunk_SystemRenderer(param_2 + 0x16);
    if (lVar1 == 0) {
      SystemTools_DataProcessor(&processed_var_8136_ptr,0);
    }
  }
  else {
    lVar1 = (**(code **)(param_1 + 0x3018))();
  }
  plVar2 = (int64_t *)((uint64_t)(-(int)lVar1 & 7) + lVar1);
  *plVar2 = *unaff_RDI;
  plVar2 = plVar2 + 1;
  *unaff_RDI = lVar1;
  unaff_RDI[2] = lVar1 + param_2 + 0x16;
  lVar1 = (uint64_t)(-(int)plVar2 & 7) + (int64_t)plVar2;
  unaff_RDI[1] = lVar1 + unaff_RBP;
  return lVar1;
}
int64_t function_4c13b3(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  *(int64_t *)(unaff_RDI + 8) = param_3 + unaff_RBP;
  return param_3;
}