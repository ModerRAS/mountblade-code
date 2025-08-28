#include "ultra_high_freq_fun_definitions.h"

// $fun 的语义化别名
#define $alias_name $fun

/* 函数别名定义: MemoryDeallocationHandler */
#define MemoryDeallocationHandler MemoryDeallocationHandler



// 03_rendering_part541.c - 13 个函数

// 函数: void FUN_180562f60(int64_t param_1,int64_t param_2,int64_t param_3,char param_4)
void FUN_180562f60(int64_t param_1,int64_t param_2,int64_t param_3,char param_4)

{
  char cVar1;
  uint64_t *puVar2;
  char *pcVar3;
  char *pcVar4;
  int8_t auStack_68 [32];
  char cStack_48;
  char acStack_47 [31];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_68;
  if (param_4 == '\0') {
    puVar2 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x38);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    pcVar4 = "type";
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar4 != '\0');
    *puVar2 = &processed_var_7680_ptr;
    puVar2[2] = pcVar3 + -0x180a0ee2f;
    pcVar4 = "hand_switch_data";
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar4 != '\0');
    puVar2[1] = &processed_var_7720_ptr;
    puVar2[3] = pcVar3 + -0x180a35f57;
    if (*(int64_t *)(param_3 + 0x40) == 0) {
      puVar2[5] = 0;
      *(uint64_t **)(param_3 + 0x40) = puVar2;
    }
    else {
      puVar2[5] = *(uint64_t *)(param_3 + 0x48);
      *(uint64_t **)(*(int64_t *)(param_3 + 0x48) + 0x30) = puVar2;
    }
    *(uint64_t **)(param_3 + 0x48) = puVar2;
    puVar2[4] = param_3;
    puVar2[6] = 0;
  }
  SystemCore_CacheManager(&cStack_48,0x20,&system_data_6430,(double)*(float *)(param_1 + 8));
  param_2 = param_2 + 0x60;
  puVar2 = (uint64_t *)DataPipelineManager(param_2,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "switch_progress";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &processed_var_7704_ptr;
  puVar2[2] = pcVar3 + -0x180a35f47;
  pcVar4 = &cStack_48;
  cVar1 = cStack_48;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (int64_t)pcVar4 - (int64_t)&cStack_48;
  if (*(int64_t *)(param_3 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(int64_t *)(param_3 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar2;
  puVar2[4] = param_3;
  puVar2[6] = 0;
  SystemCore_CacheManager(&cStack_48,0x20,&system_data_6430,(double)*(float *)(param_1 + 0xc));
  puVar2 = (uint64_t *)DataPipelineManager(param_2,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "switch_back_progress";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &processed_var_7680_ptr;
  puVar2[2] = pcVar3 + -0x180a35f2f;
  pcVar4 = &cStack_48;
  cVar1 = cStack_48;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (int64_t)pcVar4 - (int64_t)&cStack_48;
  if (*(int64_t *)(param_3 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(int64_t *)(param_3 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar2;
  puVar2[4] = param_3;
  puVar2[6] = 0;
  SystemCore_CacheManager(&cStack_48,0x20,&system_data_6430,(double)*(float *)(param_1 + 0x10));
  puVar2 = (uint64_t *)DataPipelineManager(param_2,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "weapon_displacement";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &processed_var_7784_ptr;
  puVar2[2] = pcVar3 + -0x180a35f97;
  pcVar4 = &cStack_48;
  while (cStack_48 != '\0') {
    pcVar4 = pcVar4 + 1;
    cStack_48 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (int64_t)pcVar4 - (int64_t)&cStack_48;
  if (*(int64_t *)(param_3 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(int64_t *)(param_3 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar2;
  puVar2[4] = param_3;
  puVar2[6] = 0;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_68);
}





// 函数: void FUN_180563250(int64_t param_1,int64_t param_2)
void FUN_180563250(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  char *pcVar2;
  int64_t lVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = "switch_progress";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(uint64_t **)(param_2 + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a35f47) {
      pcVar2 = pcVar2 + (int64_t)pcVar4;
      if (pcVar2 <= pcVar4) {
LAB_1805632d7:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_1805632f2;
      }
      lVar3 = (int64_t)&processed_var_7704_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_1805632d7;
      }
    }
  }
  lVar3 = 0;
LAB_1805632f2:
  if ((param_1 + 8 != 0) && (lVar3 != 0)) {
    AdvancedSystemOptimizer(lVar3,&system_data_6430,param_1 + 8);
  }
  pcVar4 = "switch_back_progress";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(uint64_t **)(param_2 + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a35f2f) {
      pcVar2 = pcVar2 + (int64_t)pcVar4;
      if (pcVar2 <= pcVar4) {
LAB_180563370:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_18056338b;
      }
      lVar3 = (int64_t)&processed_var_7680_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180563370;
      }
    }
  }
  lVar3 = 0;
LAB_18056338b:
  if ((param_1 + 0xc != 0) && (lVar3 != 0)) {
    AdvancedSystemOptimizer(lVar3,&system_data_6430,param_1 + 0xc);
  }
  pcVar4 = "weapon_displacement";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  puVar1 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar1 == (uint64_t *)0x0) {
      lVar3 = 0;
LAB_180563428:
      if ((param_1 + 0x10 != 0) && (lVar3 != 0)) {
        AdvancedSystemOptimizer(lVar3,&system_data_6430,param_1 + 0x10);
      }
      return;
    }
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a35f97) {
      pcVar2 = pcVar2 + (int64_t)pcVar4;
      if (pcVar2 <= pcVar4) {
LAB_180563410:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_180563428;
      }
      lVar3 = (int64_t)&processed_var_7784_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180563410;
      }
    }
    puVar1 = (uint64_t *)puVar1[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180563470(int64_t param_1)
void FUN_180563470(int64_t param_1)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x10,8,3);
  *puVar1 = &processed_var_7904_ptr;
  *(int32_t *)(puVar1 + 1) = *(int32_t *)(param_1 + 8);
  *(int32_t *)((int64_t)puVar1 + 0xc) = *(int32_t *)(param_1 + 0xc);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805634b0(int64_t param_1,int64_t param_2,int64_t param_3,char param_4)
void FUN_1805634b0(int64_t param_1,int64_t param_2,int64_t param_3,char param_4)

{
  char cVar1;
  uint64_t *puVar2;
  char *pcVar3;
  char *pcVar4;
  int8_t auStack_68 [32];
  char cStack_48;
  char acStack_47 [31];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_68;
  if (param_4 == '\0') {
    puVar2 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x38);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    pcVar4 = "type";
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar4 != '\0');
    *puVar2 = &processed_var_7680_ptr;
    puVar2[2] = pcVar3 + -0x180a0ee2f;
    pcVar4 = "mount_change_data";
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar4 != '\0');
    puVar2[1] = &processed_var_7872_ptr;
    puVar2[3] = pcVar3 + -0x180a35fef;
    if (*(int64_t *)(param_3 + 0x40) == 0) {
      puVar2[5] = 0;
      *(uint64_t **)(param_3 + 0x40) = puVar2;
    }
    else {
      puVar2[5] = *(uint64_t *)(param_3 + 0x48);
      *(uint64_t **)(*(int64_t *)(param_3 + 0x48) + 0x30) = puVar2;
    }
    *(uint64_t **)(param_3 + 0x48) = puVar2;
    puVar2[4] = param_3;
    puVar2[6] = 0;
  }
  SystemCore_CacheManager(&cStack_48,0x20,&system_data_6430,(double)*(float *)(param_1 + 8));
  puVar2 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "scale_blend_start_progress";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &processed_var_7840_ptr;
  puVar2[2] = pcVar3 + -0x180a35fcf;
  pcVar4 = &cStack_48;
  cVar1 = cStack_48;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (int64_t)pcVar4 - (int64_t)&cStack_48;
  if (*(int64_t *)(param_3 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(int64_t *)(param_3 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar2;
  puVar2[4] = param_3;
  puVar2[6] = 0;
  SystemCore_CacheManager(&cStack_48,0x20,&system_data_6430,(double)*(float *)(param_1 + 0xc));
  puVar2 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "scale_blend_end_progress";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &processed_var_7808_ptr;
  puVar2[2] = pcVar3 + -0x180a35faf;
  pcVar4 = &cStack_48;
  while (cStack_48 != '\0') {
    pcVar4 = pcVar4 + 1;
    cStack_48 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (int64_t)pcVar4 - (int64_t)&cStack_48;
  if (*(int64_t *)(param_3 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(int64_t *)(param_3 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar2;
  puVar2[4] = param_3;
  puVar2[6] = 0;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_68);
}





// 函数: void FUN_1805636e0(int64_t param_1,int64_t param_2)
void FUN_1805636e0(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  char *pcVar2;
  int64_t lVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = "scale_blend_start_progress";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(uint64_t **)(param_2 + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a35fcf) {
      pcVar2 = pcVar2 + (int64_t)pcVar4;
      if (pcVar2 <= pcVar4) {
LAB_180563768:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_180563783;
      }
      lVar3 = (int64_t)&processed_var_7840_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180563768;
      }
    }
  }
  lVar3 = 0;
LAB_180563783:
  if ((param_1 + 8 != 0) && (lVar3 != 0)) {
    AdvancedSystemOptimizer(lVar3,&system_data_6430,param_1 + 8);
  }
  pcVar4 = "scale_blend_end_progress";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  puVar1 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar1 == (uint64_t *)0x0) {
      lVar3 = 0;
LAB_180563819:
      if ((param_1 + 0xc != 0) && (lVar3 != 0)) {
        AdvancedSystemOptimizer(lVar3,&system_data_6430,param_1 + 0xc);
      }
      return;
    }
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a35faf) {
      pcVar2 = pcVar4 + (int64_t)pcVar2;
      if (pcVar2 <= pcVar4) {
LAB_180563801:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_180563819;
      }
      lVar3 = (int64_t)&processed_var_7808_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180563801;
      }
    }
    puVar1 = (uint64_t *)puVar1[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180563860(int64_t param_1)
void FUN_180563860(int64_t param_1)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x10,8,3);
  *puVar1 = &processed_var_8008_ptr;
  *(int32_t *)(puVar1 + 1) = *(int32_t *)(param_1 + 8);
  *(int32_t *)((int64_t)puVar1 + 0xc) = *(int32_t *)(param_1 + 0xc);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805638a0(int64_t param_1,int64_t param_2,int64_t param_3,char param_4)
void FUN_1805638a0(int64_t param_1,int64_t param_2,int64_t param_3,char param_4)

{
  char cVar1;
  uint64_t *puVar2;
  char *pcVar3;
  char *pcVar4;
  int8_t auStack_68 [32];
  char cStack_48;
  char acStack_47 [31];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_68;
  if (param_4 == '\0') {
    puVar2 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x38);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    pcVar4 = "type";
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar4 != '\0');
    *puVar2 = &processed_var_7680_ptr;
    puVar2[2] = pcVar3 + -0x180a0ee2f;
    pcVar4 = "blend_data";
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar4 != '\0');
    puVar2[1] = &processed_var_7936_ptr;
    puVar2[3] = pcVar3 + -0x180a3602f;
    if (*(int64_t *)(param_3 + 0x40) == 0) {
      puVar2[5] = 0;
      *(uint64_t **)(param_3 + 0x40) = puVar2;
    }
    else {
      puVar2[5] = *(uint64_t *)(param_3 + 0x48);
      *(uint64_t **)(*(int64_t *)(param_3 + 0x48) + 0x30) = puVar2;
    }
    *(uint64_t **)(param_3 + 0x48) = puVar2;
    puVar2[4] = param_3;
    puVar2[6] = 0;
  }
  SystemCore_CacheManager(&cStack_48,0x20,&system_data_6430,(double)*(float *)(param_1 + 8));
  puVar2 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "blend_start_progress";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &processed_var_7952_ptr;
  puVar2[2] = pcVar3 + -0x180a3603f;
  pcVar4 = &cStack_48;
  cVar1 = cStack_48;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (int64_t)pcVar4 - (int64_t)&cStack_48;
  if (*(int64_t *)(param_3 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(int64_t *)(param_3 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar2;
  puVar2[4] = param_3;
  puVar2[6] = 0;
  SystemCore_CacheManager(&cStack_48,0x20,&system_data_6430,(double)*(float *)(param_1 + 0xc));
  puVar2 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "blend_end_progress";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &processed_var_7976_ptr;
  puVar2[2] = pcVar3 + -0x180a36057;
  pcVar4 = &cStack_48;
  while (cStack_48 != '\0') {
    pcVar4 = pcVar4 + 1;
    cStack_48 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (int64_t)pcVar4 - (int64_t)&cStack_48;
  if (*(int64_t *)(param_3 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(int64_t *)(param_3 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar2;
  puVar2[4] = param_3;
  puVar2[6] = 0;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_68);
}





// 函数: void FUN_180563ad0(int64_t param_1,int64_t param_2)
void FUN_180563ad0(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  char *pcVar2;
  int64_t lVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = "blend_start_progress";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(uint64_t **)(param_2 + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a3603f) {
      pcVar2 = pcVar2 + (int64_t)pcVar4;
      if (pcVar2 <= pcVar4) {
LAB_180563b58:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_180563b73;
      }
      lVar3 = (int64_t)&processed_var_7952_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180563b58;
      }
    }
  }
  lVar3 = 0;
LAB_180563b73:
  if ((param_1 + 8 != 0) && (lVar3 != 0)) {
    AdvancedSystemOptimizer(lVar3,&system_data_6430,param_1 + 8);
  }
  pcVar4 = "blend_end_progress";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  puVar1 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar1 == (uint64_t *)0x0) {
      lVar3 = 0;
LAB_180563c09:
      if ((param_1 + 0xc != 0) && (lVar3 != 0)) {
        AdvancedSystemOptimizer(lVar3,&system_data_6430,param_1 + 0xc);
      }
      return;
    }
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a36057) {
      pcVar2 = pcVar4 + (int64_t)pcVar2;
      if (pcVar2 <= pcVar4) {
LAB_180563bf1:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_180563c09;
      }
      lVar3 = (int64_t)&processed_var_7976_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180563bf1;
      }
    }
    puVar1 = (uint64_t *)puVar1[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180563c50(int64_t param_1)
void FUN_180563c50(int64_t param_1)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
  *puVar1 = &processed_var_8128_ptr;
  *(int32_t *)(puVar1 + 1) = *(int32_t *)(param_1 + 8);
  *(int32_t *)((int64_t)puVar1 + 0xc) = *(int32_t *)(param_1 + 0xc);
  *(int32_t *)(puVar1 + 2) = *(int32_t *)(param_1 + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180563ca0(int64_t param_1,int64_t param_2,int64_t param_3,char param_4)
void FUN_180563ca0(int64_t param_1,int64_t param_2,int64_t param_3,char param_4)

{
  char cVar1;
  uint64_t *puVar2;
  char *pcVar3;
  char *pcVar4;
  int8_t auStack_68 [32];
  char cStack_48;
  char acStack_47 [31];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_68;
  if (param_4 == '\0') {
    puVar2 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x38);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    pcVar4 = "type";
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar4 != '\0');
    *puVar2 = &processed_var_7680_ptr;
    puVar2[2] = pcVar3 + -0x180a0ee2f;
    pcVar4 = "quadrupedal_movement_data";
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar4 != '\0');
    puVar2[1] = &processed_var_8088_ptr;
    puVar2[3] = pcVar3 + -0x180a360c7;
    if (*(int64_t *)(param_3 + 0x40) == 0) {
      puVar2[5] = 0;
      *(uint64_t **)(param_3 + 0x40) = puVar2;
    }
    else {
      puVar2[5] = *(uint64_t *)(param_3 + 0x48);
      *(uint64_t **)(*(int64_t *)(param_3 + 0x48) + 0x30) = puVar2;
    }
    *(uint64_t **)(param_3 + 0x48) = puVar2;
    puVar2[4] = param_3;
    puVar2[6] = 0;
  }
  SystemCore_CacheManager(&cStack_48,0x20,&system_data_6430,(double)*(float *)(param_1 + 8));
  param_2 = param_2 + 0x60;
  puVar2 = (uint64_t *)DataPipelineManager(param_2,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "loop_displacement";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &processed_var_8416_ptr;
  puVar2[2] = pcVar3 + -0x180a3620f;
  pcVar4 = &cStack_48;
  cVar1 = cStack_48;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (int64_t)pcVar4 - (int64_t)&cStack_48;
  if (*(int64_t *)(param_3 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(int64_t *)(param_3 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar2;
  puVar2[4] = param_3;
  puVar2[6] = 0;
  SystemCore_CacheManager(&cStack_48,0x20,&system_data_6430,(double)*(float *)(param_1 + 0xc));
  puVar2 = (uint64_t *)DataPipelineManager(param_2,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "pace_switch_limit_min";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &processed_var_8064_ptr;
  puVar2[2] = pcVar3 + -0x180a360af;
  pcVar4 = &cStack_48;
  cVar1 = cStack_48;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (int64_t)pcVar4 - (int64_t)&cStack_48;
  if (*(int64_t *)(param_3 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(int64_t *)(param_3 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar2;
  puVar2[4] = param_3;
  puVar2[6] = 0;
  SystemCore_CacheManager(&cStack_48,0x20,&system_data_6430,(double)*(float *)(param_1 + 0x10));
  puVar2 = (uint64_t *)DataPipelineManager(param_2,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  pcVar4 = "pace_switch_limit_max";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  *puVar2 = &processed_var_8040_ptr;
  puVar2[2] = pcVar3 + -0x180a36097;
  pcVar4 = &cStack_48;
  while (cStack_48 != '\0') {
    pcVar4 = pcVar4 + 1;
    cStack_48 = *pcVar4;
  }
  puVar2[1] = &cStack_48;
  puVar2[3] = (int64_t)pcVar4 - (int64_t)&cStack_48;
  if (*(int64_t *)(param_3 + 0x40) == 0) {
    puVar2[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar2;
  }
  else {
    puVar2[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(int64_t *)(param_3 + 0x48) + 0x30) = puVar2;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar2;
  puVar2[4] = param_3;
  puVar2[6] = 0;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_68);
}





// 函数: void FUN_180563f90(int64_t param_1,int64_t param_2)
void FUN_180563f90(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  char *pcVar2;
  int64_t lVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = "loop_displacement";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(uint64_t **)(param_2 + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a3620f) {
      pcVar2 = pcVar2 + (int64_t)pcVar4;
      if (pcVar2 <= pcVar4) {
LAB_180564017:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_180564032;
      }
      lVar3 = (int64_t)&processed_var_8416_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180564017;
      }
    }
  }
  lVar3 = 0;
LAB_180564032:
  if ((param_1 + 8 != 0) && (lVar3 != 0)) {
    AdvancedSystemOptimizer(lVar3,&system_data_6430,param_1 + 8);
  }
  pcVar4 = "pace_switch_limit_min";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(uint64_t **)(param_2 + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a360af) {
      pcVar2 = pcVar2 + (int64_t)pcVar4;
      if (pcVar2 <= pcVar4) {
LAB_1805640b0:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_1805640cb;
      }
      lVar3 = (int64_t)&processed_var_8064_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_1805640b0;
      }
    }
  }
  lVar3 = 0;
LAB_1805640cb:
  if ((param_1 + 0xc != 0) && (lVar3 != 0)) {
    AdvancedSystemOptimizer(lVar3,&system_data_6430,param_1 + 0xc);
  }
  pcVar4 = "pace_switch_limit_max";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  puVar1 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar1 == (uint64_t *)0x0) {
      lVar3 = 0;
LAB_180564168:
      if ((param_1 + 0x10 != 0) && (lVar3 != 0)) {
        AdvancedSystemOptimizer(lVar3,&system_data_6430,param_1 + 0x10);
      }
      return;
    }
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a36097) {
      pcVar2 = pcVar2 + (int64_t)pcVar4;
      if (pcVar2 <= pcVar4) {
LAB_180564150:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_180564168;
      }
      lVar3 = (int64_t)&processed_var_8040_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180564150;
      }
    }
    puVar1 = (uint64_t *)puVar1[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805641b0(int64_t param_1)
void FUN_1805641b0(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  
  puVar2 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
  *puVar2 = &processed_var_8256_ptr;
  uVar1 = *(uint64_t *)(param_1 + 0x10);
  puVar2[1] = *(uint64_t *)(param_1 + 8);
  puVar2[2] = uVar1;
  *(int32_t *)(puVar2 + 3) = *(int32_t *)(param_1 + 0x18);
  return;
}





// 函数: void FUN_1805641f0(int64_t param_1,int64_t param_2,int64_t param_3,char param_4)
void FUN_1805641f0(int64_t param_1,int64_t param_2,int64_t param_3,char param_4)

{
  uint64_t *puVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_4 == '\0') {
    puVar1 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x38);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    pcVar3 = "type";
    do {
      pcVar2 = pcVar3;
      pcVar3 = pcVar2 + 1;
    } while (*pcVar3 != '\0');
    *puVar1 = &processed_var_7680_ptr;
    puVar1[2] = pcVar2 + -0x180a0ee2f;
    pcVar3 = "displacement_data";
    do {
      pcVar2 = pcVar3;
      pcVar3 = pcVar2 + 1;
    } while (*pcVar3 != '\0');
    puVar1[1] = &processed_var_8192_ptr;
    puVar1[3] = pcVar2 + -0x180a3612f;
    if (*(int64_t *)(param_3 + 0x40) == 0) {
      puVar1[5] = 0;
      *(uint64_t **)(param_3 + 0x40) = puVar1;
    }
    else {
      puVar1[5] = *(uint64_t *)(param_3 + 0x48);
      *(uint64_t **)(*(int64_t *)(param_3 + 0x48) + 0x30) = puVar1;
    }
    *(uint64_t **)(param_3 + 0x48) = puVar1;
    puVar1[4] = param_3;
    puVar1[6] = 0;
  }
  puVar1 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x38);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  pcVar3 = "displacement_vector";
  do {
    pcVar2 = pcVar3;
    pcVar3 = pcVar2 + 1;
  } while (*pcVar3 != '\0');
  *puVar1 = &processed_var_8224_ptr;
  puVar1[2] = pcVar2 + -0x180a3614f;
  puVar1[1] = &system_buffer_ptr;
  puVar1[3] = 0;
  if (*(int64_t *)(param_3 + 0x40) == 0) {
    puVar1[5] = 0;
    *(uint64_t **)(param_3 + 0x40) = puVar1;
  }
  else {
    puVar1[5] = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t **)(*(int64_t *)(param_3 + 0x48) + 0x30) = puVar1;
  }
  *(uint64_t **)(param_3 + 0x48) = puVar1;
  puVar1[4] = param_3;
  puVar1[6] = 0;
  UltraHighFreq_NetworkHandler1(param_2,param_3,&processed_var_8224_ptr,param_1 + 8);
  MemoryDeallocationHandler0(param_2,param_3,&processed_var_8160_ptr,*(int32_t *)(param_1 + 0x18));
  return;
}





