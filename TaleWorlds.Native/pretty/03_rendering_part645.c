#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MemoryDeallocationHandler */
#define MemoryDeallocationHandler MemoryDeallocationHandler
// 03_rendering_part645.c - 13 个函数
// 函数: void function_62de50(int64_t param_1)
void function_62de50(int64_t param_1)
{
  if (*(int64_t *)(param_1 + 8) != 0) {
    fclose();
    *(uint64_t *)(param_1 + 8) = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
bool function_62de90(int64_t param_1)
{
  int iVar1;
  iVar1 = -1;
  if (*(int64_t *)(param_1 + 8) != 0) {
    iVar1 = fclose();
    *(uint64_t *)(param_1 + 8) = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  return iVar1 == 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_Validator(int64_t param_1,int64_t param_2,uint64_t param_3)
void SystemCore_Validator(int64_t param_1,int64_t param_2,uint64_t param_3)
{
  int64_t lVar1;
  uint64_t uVar2;
  void *puVar3;
  int8_t stack_array_748 [32];
  int8_t *plocal_var_728;
  int32_t local_var_720;
  uint64_t local_var_718;
  void *plocal_var_708;
  int8_t *plocal_var_700;
  int32_t local_var_6f8;
  int8_t stack_array_6f0 [264];
  void *plocal_var_5e8;
  void *plocal_var_5e0;
  int32_t local_var_5d8;
  uint8_t stack_array_5d0 [264];
  void *aplocal_var_4c8 [68];
  int8_t stack_array_2a8 [64];
  int8_t stack_array_268 [560];
  uint64_t local_var_38;
  local_var_718 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_748;
  plocal_var_708 = &rendering_buffer_2008_ptr;
  plocal_var_700 = stack_array_6f0;
  local_var_6f8 = 0;
  stack_array_6f0[0] = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    local_var_6f8 = (int32_t)lVar1;
    strcpy_s(stack_array_6f0,0x100,param_2);
  }
  lVar1 = SystemCore_EncryptionEngine(aplocal_var_4c8,&plocal_var_708);
  plocal_var_5e8 = &rendering_buffer_2008_ptr;
  plocal_var_5e0 = stack_array_5d0;
  stack_array_5d0[0] = 0;
  local_var_5d8 = *(int32_t *)(lVar1 + 0x10);
  puVar3 = &system_buffer_ptr;
  if (*(void **)(lVar1 + 8) != (void *)0x0) {
    puVar3 = *(void **)(lVar1 + 8);
  }
  strcpy_s(stack_array_5d0,0x100,puVar3);
  aplocal_var_4c8[0] = &system_state_ptr;
  plocal_var_708 = &system_state_ptr;
  puVar3 = &system_buffer_ptr;
  if (plocal_var_5e0 != (void *)0x0) {
    puVar3 = plocal_var_5e0;
  }
  local_var_720 = 0x118;
  plocal_var_728 = stack_array_268;
  MultiByteToWideChar(0xfde9,0,puVar3,0xffffffff);
  local_var_720 = 0x20;
  plocal_var_728 = stack_array_2a8;
  MultiByteToWideChar(0xfde9,0,param_3,0xffffffff);
  uVar2 = _wfopen(stack_array_268,stack_array_2a8);
  *(uint64_t *)(param_1 + 8) = uVar2;
  plocal_var_5e8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_748);
}
uint64_t function_62e090(int64_t param_1)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uVar1 = _ftelli64(*(uint64_t *)(param_1 + 8));
  _fseeki64(*(uint64_t *)(param_1 + 8),0,2);
  uVar2 = _ftelli64(*(uint64_t *)(param_1 + 8));
  _fseeki64(*(uint64_t *)(param_1 + 8),uVar1,0);
  return uVar2;
}
// 函数: void function_62e0f0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_62e0f0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  uint64_t stack_special_x_18;
  uint64_t stack_special_x_20;
  uVar1 = *(uint64_t *)(param_1 + 8);
  stack_special_x_18 = param_3;
  stack_special_x_20 = param_4;
  puVar2 = (uint64_t *)Function_6d5908f9();
  __stdio_common_vfprintf(*puVar2,uVar1,param_2,0,&stack_special_x_18);
  return;
}
// WARNING: Removing unreachable block (ram,0x00018062e30a)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemTools_DataProcessor(int64_t param_1,uint64_t *param_2)
void SystemTools_DataProcessor(int64_t param_1,uint64_t *param_2)
{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint64_t *puVar5;
  char *pcVar6;
  uint64_t uVar7;
  int iVar8;
  int64_t lVar9;
  int64_t lVar10;
  int8_t stack_array_98 [32];
  int8_t local_var_78;
  void *plocal_var_68;
  uint64_t *plocal_var_60;
  int32_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  char acStack_40 [16];
  uint64_t local_var_30;
  local_var_48 = 0xfffffffffffffffe;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  pcVar1 = (char *)param_2[1];
  iVar8 = 1;
  uVar7 = (int64_t)*param_2 - (int64_t)pcVar1;
  if ((char *)*param_2 < pcVar1) {
    uVar7 = 0;
  }
  pcVar6 = pcVar1;
  if (uVar7 != 0) {
    do {
      iVar2 = iVar8 + 1;
      if (*pcVar6 != '\n') {
        iVar2 = iVar8;
      }
      iVar8 = iVar2;
      pcVar6 = pcVar6 + 1;
    } while ((uint64_t)((int64_t)pcVar6 - (int64_t)pcVar1) < uVar7);
  }
// 函数: void function_62f5e0(int64_t param_1,int32_t param_2,char *param_3)
void function_62f5e0(int64_t param_1,int32_t param_2,char *param_3)
{
  char cVar1;
  uint64_t *puVar2;
  char *pcVar3;
  puVar2 = (uint64_t *)DataPipelineManager(param_1 + 0x60,0x60);
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
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_62f640(int64_t param_1,int64_t param_2,char *param_3)
void function_62f640(int64_t param_1,int64_t param_2,char *param_3)
{
  char cVar1;
  char *pcVar2;
  int64_t lVar3;
  int8_t *puVar4;
  char *pcVar5;
  char *pcVar6;
  int8_t *puVar7;
  int8_t stack_array_a8 [48];
  char acStack_78 [64];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_a8;
  function_0634b0(acStack_78,0x40,&rendering_buffer_2208_ptr);
  param_1 = param_1 + 0x60;
  pcVar6 = acStack_78;
  while (acStack_78[0] != '\0') {
    pcVar6 = pcVar6 + 1;
    acStack_78[0] = *pcVar6;
  }
  pcVar6 = pcVar6 + (1 - (int64_t)acStack_78);
  pcVar2 = (char *)DataPipelineManager(param_1,pcVar6);
  if (pcVar6 != (char *)0x0) {
    pcVar5 = pcVar2;
    do {
      *pcVar5 = pcVar5[(int64_t)(acStack_78 + -(int64_t)pcVar2)];
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + -1;
    } while (pcVar6 != (char *)0x0);
  }
  lVar3 = SystemCore_DataManager(param_2,param_3);
  if (lVar3 == 0) {
    cVar1 = *param_3;
    pcVar6 = param_3;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    pcVar6 = pcVar6 + (1 - (int64_t)param_3);
    puVar4 = (int8_t *)DataPipelineManager(param_1,pcVar6);
    if (pcVar6 != (char *)0x0) {
      puVar7 = puVar4;
      do {
        *puVar7 = puVar7[(int64_t)param_3 - (int64_t)puVar4];
        puVar7 = puVar7 + 1;
        pcVar6 = pcVar6 + -1;
      } while (pcVar6 != (char *)0x0);
    }
    lVar3 = function_4c1980(param_1,puVar4,pcVar2);
    if (*(int64_t *)(param_2 + 0x40) == 0) {
      *(uint64_t *)(lVar3 + 0x28) = 0;
      *(int64_t *)(param_2 + 0x40) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
    else {
      *(uint64_t *)(lVar3 + 0x28) = *(uint64_t *)(param_2 + 0x48);
      *(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x30) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
  }
  else {
    lVar3 = SystemCore_DataManager(param_2,param_3);
    cVar1 = *pcVar2;
    pcVar6 = pcVar2;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    *(char **)(lVar3 + 8) = pcVar2;
    *(int64_t *)(lVar3 + 0x18) = (int64_t)pcVar6 - (int64_t)pcVar2;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_a8);
}
// 函数: void function_62f7c0(int64_t param_1,int64_t param_2,uint64_t param_3,char param_4)
void function_62f7c0(int64_t param_1,int64_t param_2,uint64_t param_3,char param_4)
{
  char cVar1;
  int64_t lVar2;
  char *pcVar3;
  uint64_t *puVar4;
  char *pcVar5;
  void *puVar6;
  if (param_4 == '\0') {
    lVar2 = SystemCore_DataManager(param_2,param_3);
    if (lVar2 != 0) {
      lVar2 = SystemCore_DataManager(param_2,param_3);
      puVar6 = &rendering_buffer_2336_ptr;
      pcVar3 = "false";
      do {
        pcVar3 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      goto LAB_18062f968;
    }
    pcVar3 = (char *)function_632a40(param_1 + 0x60);
    puVar4 = (uint64_t *)DataPipelineManager(param_1 + 0x60,0x38);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    if (pcVar3 != (char *)0x0) {
      cVar1 = *pcVar3;
      pcVar5 = pcVar3;
      while (cVar1 != '\0') {
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
      }
      *puVar4 = pcVar3;
      puVar4[2] = (int64_t)pcVar5 - (int64_t)pcVar3;
    }
    puVar6 = &rendering_buffer_2336_ptr;
    pcVar3 = "false";
    do {
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
  }
  else {
    lVar2 = SystemCore_DataManager(param_2,param_3);
    if (lVar2 != 0) {
      lVar2 = SystemCore_DataManager(param_2,param_3);
      puVar6 = &rendering_buffer_2328_ptr;
      pcVar3 = "true";
      do {
        pcVar3 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
LAB_18062f968:
      *(int64_t *)(lVar2 + 0x18) = (int64_t)pcVar3 - (int64_t)puVar6;
      *(void **)(lVar2 + 8) = puVar6;
      return;
    }
    pcVar3 = (char *)function_632a40(param_1 + 0x60);
    puVar4 = (uint64_t *)DataPipelineManager(param_1 + 0x60,0x38);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    if (pcVar3 != (char *)0x0) {
      cVar1 = *pcVar3;
      pcVar5 = pcVar3;
      while (cVar1 != '\0') {
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
      }
      *puVar4 = pcVar3;
      puVar4[2] = (int64_t)pcVar5 - (int64_t)pcVar3;
    }
    puVar6 = &rendering_buffer_2328_ptr;
    pcVar3 = "true";
    do {
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
  }
  puVar4[1] = puVar6;
  puVar4[3] = (int64_t)pcVar3 - (int64_t)puVar6;
  if (*(int64_t *)(param_2 + 0x40) != 0) {
    puVar4[5] = *(uint64_t *)(param_2 + 0x48);
    *(uint64_t **)(*(int64_t *)(param_2 + 0x48) + 0x30) = puVar4;
    *(uint64_t **)(param_2 + 0x48) = puVar4;
    puVar4[4] = param_2;
    puVar4[6] = 0;
    return;
  }
  puVar4[5] = 0;
  *(uint64_t **)(param_2 + 0x40) = puVar4;
  *(uint64_t **)(param_2 + 0x48) = puVar4;
  puVar4[4] = param_2;
  puVar4[6] = 0;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void MemoryDeallocationHandler0(int64_t param_1,int64_t param_2,char *param_3,float param_4)
void MemoryDeallocationHandler0(int64_t param_1,int64_t param_2,char *param_3,float param_4)
{
  char cVar1;
  char *pcVar2;
  int64_t lVar3;
  int8_t *puVar4;
  char *pcVar5;
  char *pcVar6;
  int8_t *puVar7;
  int8_t stack_array_168 [48];
  char acStack_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  if (ABS(param_4) < 0.001) {
    param_4 = 0.0;
  }
  function_0634b0(acStack_138,0x100,&processed_var_8448_ptr,(double)param_4);
  param_1 = param_1 + 0x60;
  pcVar6 = acStack_138;
  while (acStack_138[0] != '\0') {
    pcVar6 = pcVar6 + 1;
    acStack_138[0] = *pcVar6;
  }
  pcVar6 = pcVar6 + (1 - (int64_t)acStack_138);
  pcVar2 = (char *)DataPipelineManager(param_1,pcVar6);
  if (pcVar6 != (char *)0x0) {
    pcVar5 = pcVar2;
    do {
      *pcVar5 = pcVar5[(int64_t)(acStack_138 + -(int64_t)pcVar2)];
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + -1;
    } while (pcVar6 != (char *)0x0);
  }
  lVar3 = SystemCore_DataManager(param_2,param_3);
  if (lVar3 == 0) {
    cVar1 = *param_3;
    pcVar6 = param_3;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    pcVar6 = pcVar6 + (1 - (int64_t)param_3);
    puVar4 = (int8_t *)DataPipelineManager(param_1,pcVar6);
    if (pcVar6 != (char *)0x0) {
      puVar7 = puVar4;
      do {
        *puVar7 = puVar7[(int64_t)param_3 - (int64_t)puVar4];
        puVar7 = puVar7 + 1;
        pcVar6 = pcVar6 + -1;
      } while (pcVar6 != (char *)0x0);
    }
    lVar3 = function_4c1980(param_1,puVar4,pcVar2);
    if (*(int64_t *)(param_2 + 0x40) == 0) {
      *(uint64_t *)(lVar3 + 0x28) = 0;
      *(int64_t *)(param_2 + 0x40) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
    else {
      *(uint64_t *)(lVar3 + 0x28) = *(uint64_t *)(param_2 + 0x48);
      *(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x30) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
  }
  else {
    lVar3 = SystemCore_DataManager(param_2,param_3);
    cVar1 = *pcVar2;
    pcVar6 = pcVar2;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    *(char **)(lVar3 + 8) = pcVar2;
    *(int64_t *)(lVar3 + 0x18) = (int64_t)pcVar6 - (int64_t)pcVar2;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_168);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UltraHighFreq_NetworkHandler1(int64_t param_1,int64_t param_2,char *param_3,float *param_4)
void UltraHighFreq_NetworkHandler1(int64_t param_1,int64_t param_2,char *param_3,float *param_4)
{
  char cVar1;
  char *pcVar2;
  int64_t lVar3;
  int8_t *puVar4;
  char *pcVar5;
  char *pcVar6;
  int8_t *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int8_t stack_array_178 [32];
  double dStack_158;
  double dStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  char acStack_138 [256];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  fStack_148 = *param_4;
  fStack_144 = param_4[1];
  fStack_140 = param_4[2];
  fStack_13c = param_4[3];
  fVar10 = fStack_148;
  if (ABS(fStack_148) < 0.001) {
    fVar10 = 0.0;
  }
  fVar9 = fStack_144;
  if (ABS(fStack_144) < 0.001) {
    fVar9 = 0.0;
  }
  fVar8 = fStack_140;
  if (ABS(fStack_140) < 0.001) {
    fVar8 = 0.0;
  }
  dStack_150 = (double)fVar8;
  dStack_158 = (double)fVar9;
  function_0634b0(acStack_138,0x100,&processed_var_5392_ptr,(double)fVar10);
  param_1 = param_1 + 0x60;
  pcVar6 = acStack_138;
  while (acStack_138[0] != '\0') {
    pcVar6 = pcVar6 + 1;
    acStack_138[0] = *pcVar6;
  }
  pcVar6 = pcVar6 + (1 - (int64_t)acStack_138);
  pcVar2 = (char *)DataPipelineManager(param_1,pcVar6);
  if (pcVar6 != (char *)0x0) {
    pcVar5 = pcVar2;
    do {
      *pcVar5 = pcVar5[(int64_t)(acStack_138 + -(int64_t)pcVar2)];
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + -1;
    } while (pcVar6 != (char *)0x0);
  }
  lVar3 = SystemCore_DataManager(param_2,param_3);
  if (lVar3 == 0) {
    cVar1 = *param_3;
    pcVar6 = param_3;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    pcVar6 = pcVar6 + (1 - (int64_t)param_3);
    puVar4 = (int8_t *)DataPipelineManager(param_1,pcVar6);
    if (pcVar6 != (char *)0x0) {
      puVar7 = puVar4;
      do {
        *puVar7 = puVar7[(int64_t)param_3 - (int64_t)puVar4];
        puVar7 = puVar7 + 1;
        pcVar6 = pcVar6 + -1;
      } while (pcVar6 != (char *)0x0);
    }
    lVar3 = function_4c1980(param_1,puVar4,pcVar2);
    if (*(int64_t *)(param_2 + 0x40) == 0) {
      *(uint64_t *)(lVar3 + 0x28) = 0;
      *(int64_t *)(param_2 + 0x40) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
    else {
      *(uint64_t *)(lVar3 + 0x28) = *(uint64_t *)(param_2 + 0x48);
      *(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x30) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
  }
  else {
    lVar3 = SystemCore_DataManager(param_2,param_3);
    cVar1 = *pcVar2;
    pcVar6 = pcVar2;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    *(char **)(lVar3 + 8) = pcVar2;
    *(int64_t *)(lVar3 + 0x18) = (int64_t)pcVar6 - (int64_t)pcVar2;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_62fd40(int64_t param_1,int64_t param_2,uint64_t param_3,int8_t (*param_4) [16])
void function_62fd40(int64_t param_1,int64_t param_2,uint64_t param_3,int8_t (*param_4) [16])
{
  int8_t auVar1 [16];
  char cVar2;
  char *pcVar3;
  int64_t lVar4;
  int8_t *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int8_t *puVar9;
  int8_t stack_array_148 [32];
  uint local_var_128;
  uint local_var_120;
  uint local_var_118;
  uint local_var_110;
  uint local_var_108;
  uint local_var_100;
  uint local_var_f8;
  uint local_var_f0;
  uint local_var_e8;
  uint local_var_e0;
  uint64_t local_var_d8;
  void *plocal_var_c8;
  char *pcStack_c0;
  int32_t local_var_b8;
  char acStack_b0 [72];
  int8_t stack_array_68 [40];
  uint64_t local_var_40;
  local_var_d8 = 0xfffffffffffffffe;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_148;
  plocal_var_c8 = &memory_allocator_3480_ptr;
  pcStack_c0 = acStack_b0;
  local_var_b8 = 0;
  acStack_b0[0] = '\0';
  auVar1 = *param_4;
  local_var_e8 = auVar1._14_2_ & 0xff;
  local_var_f0 = auVar1._12_4_ >> 8 & 0xff;
  local_var_f8 = auVar1._12_4_ & 0xff;
  local_var_100 = auVar1._11_4_ & 0xff;
  local_var_108 = auVar1._10_4_ & 0xff;
  local_var_110 = auVar1._9_4_ & 0xff;
  local_var_128 = auVar1._4_4_ & 0xffff;
  local_var_e0 = (uint)auVar1[0xf];
  local_var_118 = (uint)auVar1[8];
  local_var_120 = (uint)auVar1._6_2_;
  SystemCore_CacheManager(stack_array_68,0x28,&processed_var_6672_ptr);
  (**(code **)(plocal_var_c8 + 0x18))(&plocal_var_c8,stack_array_68,0x26);
  param_1 = param_1 + 0x60;
  pcVar8 = "";
  if (pcStack_c0 != (char *)0x0) {
    pcVar8 = pcStack_c0;
  }
  cVar2 = *pcVar8;
  pcVar7 = pcVar8;
  while (cVar2 != '\0') {
    pcVar7 = pcVar7 + 1;
    cVar2 = *pcVar7;
  }
  pcVar7 = pcVar7 + (1 - (int64_t)pcVar8);
  pcVar3 = (char *)DataPipelineManager(param_1,pcVar7);
  if (pcVar7 != (char *)0x0) {
    pcVar6 = pcVar3;
    do {
      *pcVar6 = pcVar6[(int64_t)pcVar8 - (int64_t)pcVar3];
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + -1;
    } while (pcVar7 != (char *)0x0);
  }
  lVar4 = SystemCore_DataManager(param_2,&memory_allocator_3692_ptr);
  if (lVar4 == 0) {
    pcVar8 = "value";
    do {
      pcVar7 = pcVar8;
      pcVar8 = pcVar7 + 1;
    } while (*pcVar8 != '\0');
    pcVar7 = pcVar7 + -0x180a0696a;
    puVar5 = (int8_t *)DataPipelineManager(param_1,pcVar7);
    if (pcVar7 != (char *)0x0) {
      puVar9 = puVar5;
      do {
        *puVar9 = puVar9[(int64_t)&memory_allocator_3692_ptr - (int64_t)puVar5];
        puVar9 = puVar9 + 1;
        pcVar7 = pcVar7 + -1;
      } while (pcVar7 != (char *)0x0);
    }
    lVar4 = function_4c1980(param_1,puVar5,pcVar3);
    if (*(int64_t *)(param_2 + 0x40) == 0) {
      *(uint64_t *)(lVar4 + 0x28) = 0;
      *(int64_t *)(param_2 + 0x40) = lVar4;
      *(int64_t *)(param_2 + 0x48) = lVar4;
      *(int64_t *)(lVar4 + 0x20) = param_2;
      *(uint64_t *)(lVar4 + 0x30) = 0;
    }
    else {
      *(uint64_t *)(lVar4 + 0x28) = *(uint64_t *)(param_2 + 0x48);
      *(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x30) = lVar4;
      *(int64_t *)(param_2 + 0x48) = lVar4;
      *(int64_t *)(lVar4 + 0x20) = param_2;
      *(uint64_t *)(lVar4 + 0x30) = 0;
    }
  }
  else {
    lVar4 = SystemCore_DataManager(param_2,&memory_allocator_3692_ptr);
    cVar2 = *pcVar3;
    pcVar8 = pcVar3;
    while (cVar2 != '\0') {
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar8;
    }
    *(char **)(lVar4 + 8) = pcVar3;
    *(int64_t *)(lVar4 + 0x18) = (int64_t)pcVar8 - (int64_t)pcVar3;
  }
  plocal_var_c8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_148);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_630010(int64_t param_1,int64_t param_2,char *param_3,float *param_4)
void function_630010(int64_t param_1,int64_t param_2,char *param_3,float *param_4)
{
  char cVar1;
  char *pcVar2;
  int64_t lVar3;
  int8_t *puVar4;
  char *pcVar5;
  char *pcVar6;
  int8_t *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int8_t stack_array_198 [32];
  double dStack_178;
  double dStack_170;
  double dStack_168;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  char acStack_148 [256];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_198;
  fStack_158 = *param_4;
  fStack_154 = param_4[1];
  fStack_150 = param_4[2];
  fStack_14c = param_4[3];
  fVar11 = fStack_158;
  if (ABS(fStack_158) < 0.001) {
    fVar11 = 0.0;
  }
  fVar9 = fStack_154;
  if (ABS(fStack_154) < 0.001) {
    fVar9 = 0.0;
  }
  fVar10 = fStack_150;
  if (ABS(fStack_150) < 0.001) {
    fVar10 = 0.0;
  }
  fVar8 = fStack_14c;
  if (ABS(fStack_14c) < 0.001) {
    fVar8 = 0.0;
  }
  dStack_168 = (double)fVar8;
  dStack_170 = (double)fVar10;
  dStack_178 = (double)fVar9;
  function_0634b0(acStack_148,0x100,&processed_var_5368_ptr,(double)fVar11);
  param_1 = param_1 + 0x60;
  pcVar6 = acStack_148;
  while (acStack_148[0] != '\0') {
    pcVar6 = pcVar6 + 1;
    acStack_148[0] = *pcVar6;
  }
  pcVar6 = pcVar6 + (1 - (int64_t)acStack_148);
  pcVar2 = (char *)DataPipelineManager(param_1,pcVar6);
  if (pcVar6 != (char *)0x0) {
    pcVar5 = pcVar2;
    do {
      *pcVar5 = pcVar5[(int64_t)(acStack_148 + -(int64_t)pcVar2)];
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + -1;
    } while (pcVar6 != (char *)0x0);
  }
  lVar3 = SystemCore_DataManager(param_2,param_3);
  if (lVar3 == 0) {
    cVar1 = *param_3;
    pcVar6 = param_3;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    pcVar6 = pcVar6 + (1 - (int64_t)param_3);
    puVar4 = (int8_t *)DataPipelineManager(param_1,pcVar6);
    if (pcVar6 != (char *)0x0) {
      puVar7 = puVar4;
      do {
        *puVar7 = puVar7[(int64_t)param_3 - (int64_t)puVar4];
        puVar7 = puVar7 + 1;
        pcVar6 = pcVar6 + -1;
      } while (pcVar6 != (char *)0x0);
    }
    lVar3 = function_4c1980(param_1,puVar4,pcVar2);
    if (*(int64_t *)(param_2 + 0x40) == 0) {
      *(uint64_t *)(lVar3 + 0x28) = 0;
      *(int64_t *)(param_2 + 0x40) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
    else {
      *(uint64_t *)(lVar3 + 0x28) = *(uint64_t *)(param_2 + 0x48);
      *(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x30) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
  }
  else {
    lVar3 = SystemCore_DataManager(param_2,param_3);
    cVar1 = *pcVar2;
    pcVar6 = pcVar2;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    *(char **)(lVar3 + 8) = pcVar2;
    *(int64_t *)(lVar3 + 0x18) = (int64_t)pcVar6 - (int64_t)pcVar2;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_198);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_630240(int64_t param_1,int64_t param_2,char *param_3,float *param_4)
void function_630240(int64_t param_1,int64_t param_2,char *param_3,float *param_4)
{
  char cVar1;
  char *pcVar2;
  int64_t lVar3;
  int8_t *puVar4;
  char *pcVar5;
  char *pcVar6;
  int8_t *puVar7;
  int8_t stack_array_278 [32];
  double dStack_258;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  char acStack_1d8 [256];
  uint64_t local_var_d8;
  local_var_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_278;
  dStack_1e8 = (double)param_4[0xf];
  dStack_1f0 = (double)param_4[0xe];
  dStack_1f8 = (double)param_4[0xd];
  dStack_200 = (double)param_4[0xc];
  dStack_208 = (double)param_4[0xb];
  dStack_210 = (double)param_4[10];
  dStack_218 = (double)param_4[9];
  dStack_220 = (double)param_4[8];
  dStack_228 = (double)param_4[7];
  dStack_230 = (double)param_4[6];
  dStack_238 = (double)param_4[5];
  dStack_240 = (double)param_4[4];
  dStack_248 = (double)param_4[3];
  dStack_250 = (double)param_4[2];
  dStack_258 = (double)param_4[1];
  function_0634b0(acStack_1d8,0x100,&processed_var_5280_ptr,(double)*param_4);
  param_1 = param_1 + 0x60;
  pcVar6 = acStack_1d8;
  while (acStack_1d8[0] != '\0') {
    pcVar6 = pcVar6 + 1;
    acStack_1d8[0] = *pcVar6;
  }
  pcVar6 = pcVar6 + (1 - (int64_t)acStack_1d8);
  pcVar2 = (char *)DataPipelineManager(param_1,pcVar6);
  if (pcVar6 != (char *)0x0) {
    pcVar5 = pcVar2;
    do {
      *pcVar5 = pcVar5[(int64_t)(acStack_1d8 + -(int64_t)pcVar2)];
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + -1;
    } while (pcVar6 != (char *)0x0);
  }
  lVar3 = SystemCore_DataManager(param_2,param_3);
  if (lVar3 == 0) {
    cVar1 = *param_3;
    pcVar6 = param_3;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    pcVar6 = pcVar6 + (1 - (int64_t)param_3);
    puVar4 = (int8_t *)DataPipelineManager(param_1,pcVar6);
    if (pcVar6 != (char *)0x0) {
      puVar7 = puVar4;
      do {
        *puVar7 = puVar7[(int64_t)param_3 - (int64_t)puVar4];
        puVar7 = puVar7 + 1;
        pcVar6 = pcVar6 + -1;
      } while (pcVar6 != (char *)0x0);
    }
    lVar3 = function_4c1980(param_1,puVar4,pcVar2);
    if (*(int64_t *)(param_2 + 0x40) == 0) {
      *(uint64_t *)(lVar3 + 0x28) = 0;
      *(int64_t *)(param_2 + 0x40) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
    else {
      *(uint64_t *)(lVar3 + 0x28) = *(uint64_t *)(param_2 + 0x48);
      *(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x30) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
  }
  else {
    lVar3 = SystemCore_DataManager(param_2,param_3);
    cVar1 = *pcVar2;
    pcVar6 = pcVar2;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    *(char **)(lVar3 + 8) = pcVar2;
    *(int64_t *)(lVar3 + 0x18) = (int64_t)pcVar6 - (int64_t)pcVar2;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_d8 ^ (uint64_t)stack_array_278);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_630560(int64_t param_1,int64_t param_2,char *param_3,float *param_4)
void function_630560(int64_t param_1,int64_t param_2,char *param_3,float *param_4)
{
  char cVar1;
  char *pcVar2;
  int64_t lVar3;
  int8_t *puVar4;
  char *pcVar5;
  char *pcVar6;
  int8_t *puVar7;
  int8_t stack_array_1c8 [32];
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  char acStack_168 [256];
  uint64_t local_var_68;
  local_var_68 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1c8;
  dStack_170 = (double)param_4[10];
  dStack_178 = (double)param_4[9];
  dStack_180 = (double)param_4[8];
  dStack_188 = (double)param_4[6];
  dStack_190 = (double)param_4[5];
  dStack_198 = (double)param_4[4];
  dStack_1a0 = (double)param_4[2];
  dStack_1a8 = (double)param_4[1];
  function_0634b0(acStack_168,0x100,&processed_var_5240_ptr,(double)*param_4);
  param_1 = param_1 + 0x60;
  pcVar6 = acStack_168;
  while (acStack_168[0] != '\0') {
    pcVar6 = pcVar6 + 1;
    acStack_168[0] = *pcVar6;
  }
  pcVar6 = pcVar6 + (1 - (int64_t)acStack_168);
  pcVar2 = (char *)DataPipelineManager(param_1,pcVar6);
  if (pcVar6 != (char *)0x0) {
    pcVar5 = pcVar2;
    do {
      *pcVar5 = pcVar5[(int64_t)(acStack_168 + -(int64_t)pcVar2)];
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + -1;
    } while (pcVar6 != (char *)0x0);
  }
  lVar3 = SystemCore_DataManager(param_2,param_3);
  if (lVar3 == 0) {
    cVar1 = *param_3;
    pcVar6 = param_3;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    pcVar6 = pcVar6 + (1 - (int64_t)param_3);
    puVar4 = (int8_t *)DataPipelineManager(param_1,pcVar6);
    if (pcVar6 != (char *)0x0) {
      puVar7 = puVar4;
      do {
        *puVar7 = puVar7[(int64_t)param_3 - (int64_t)puVar4];
        puVar7 = puVar7 + 1;
        pcVar6 = pcVar6 + -1;
      } while (pcVar6 != (char *)0x0);
    }
    lVar3 = function_4c1980(param_1,puVar4,pcVar2);
    if (*(int64_t *)(param_2 + 0x40) == 0) {
      *(uint64_t *)(lVar3 + 0x28) = 0;
      *(int64_t *)(param_2 + 0x40) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
    else {
      *(uint64_t *)(lVar3 + 0x28) = *(uint64_t *)(param_2 + 0x48);
      *(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x30) = lVar3;
      *(int64_t *)(param_2 + 0x48) = lVar3;
      *(int64_t *)(lVar3 + 0x20) = param_2;
      *(uint64_t *)(lVar3 + 0x30) = 0;
    }
  }
  else {
    lVar3 = SystemCore_DataManager(param_2,param_3);
    cVar1 = *pcVar2;
    pcVar6 = pcVar2;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    *(char **)(lVar3 + 8) = pcVar2;
    *(int64_t *)(lVar3 + 0x18) = (int64_t)pcVar6 - (int64_t)pcVar2;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_68 ^ (uint64_t)stack_array_1c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address