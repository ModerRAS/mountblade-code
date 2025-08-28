#include "TaleWorlds.Native.Split.h"

// 01_initialization_part004_sub002.c - 1 个函数

// 函数: void FUN_180034150(void)
void FUN_180034150(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  void *puStackX_18;
  
  plVar4 = (int64_t *)RenderGraphicsManager();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  puStackX_18 = &unknown_var_2048_ptr;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_data_0fd8,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_data_0fd8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = RenderPipelineProcessor(plVar4);
    RenderShaderProcessor(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4384dcc4b6d3f417;
  puVar7[7] = 0x92a15d52fe2679bd;
  puVar7[8] = &unknown_var_7704_ptr;
  puVar7[9] = 0;
  puVar7[10] = puStackX_18;
  return;
}






