#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part625.c - 23 个函数

// 函数: void FUN_180615fc5(void)
void FUN_180615fc5(void)

{
  uint64_t uVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t *unaff_RBX;
  int32_t unaff_EBP;
  int16_t unaff_SI;
  uint64_t extraout_XMM0_Qa;
  int64_t lStackX_20;
  
  lVar3 = __RTCastToVoid();
  (**(code **)*unaff_RBX)(extraout_XMM0_Qa,0);
  if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar3);
  }
  render_system_config = 0;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x4c538,8,3);
  lVar3 = FUN_18056ca30(uVar1,unaff_SI,unaff_EBP);
  render_system_config = lVar3;
  FUN_180645b70(lVar3 + 0x10);
  cVar2 = FUN_18056f700(lVar3,0);
  if (cVar2 != '\0') {
    func_0x0001805f6d90(&system_counter_5bf0);
    lVar4 = render_system_data_config;
    if (render_system_data_config == 0) {
      QueryPerformanceCounter(&lStackX_20);
      lVar4 = lStackX_20;
    }
    *(double *)(lVar3 + 0x700) = (double)(lVar4 - render_system_data_config) * render_system_data_config;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180615fef(void)
void FUN_180615fef(void)

{
  uint64_t uVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  int32_t unaff_EBP;
  int16_t unaff_SI;
  int64_t lStackX_20;
  
  render_system_config = 0;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x4c538,8,3);
  lVar3 = FUN_18056ca30(uVar1,unaff_SI,unaff_EBP);
  render_system_config = lVar3;
  FUN_180645b70(lVar3 + 0x10);
  cVar2 = FUN_18056f700(lVar3,0);
  if (cVar2 != '\0') {
    func_0x0001805f6d90(&system_counter_5bf0);
    lVar4 = render_system_data_config;
    if (render_system_data_config == 0) {
      QueryPerformanceCounter(&lStackX_20);
      lVar4 = lStackX_20;
    }
    *(double *)(lVar3 + 0x700) = (double)(lVar4 - render_system_data_config) * render_system_data_config;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18061605e(void)
void FUN_18061605e(void)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t lStackX_20;
  
  func_0x0001805f6d90(&system_counter_5bf0);
  lVar1 = render_system_data_config;
  if (render_system_data_config == 0) {
    QueryPerformanceCounter(&lStackX_20);
    lVar1 = lStackX_20;
  }
  *(double *)(unaff_RBX + 0x700) = (double)(lVar1 - render_system_data_config) * render_system_data_config;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806160b0(uint64_t param_1,int16_t param_2)
void FUN_1806160b0(uint64_t param_1,int16_t param_2)

{
  int64_t lVar1;
  char cVar2;
  int16_t uVar3;
  int iVar4;
  int64_t lVar5;
  int8_t auStack_58 [32];
  uint64_t uStack_38;
  uint64_t uStack_30;
  int16_t uStack_28;
  int iStack_24;
  uint64_t uStack_20;
  
  lVar1 = render_system_config;
  uStack_20 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
  uStack_38 = 0;
  iStack_24 = 0;
  uStack_30 = 0;
  uStack_28 = param_2;
  lVar5 = gethostbyname();
  if ((lVar5 == 0) || (*(short *)(lVar5 + 0x10) != 2)) {
    iVar4 = inet_addr(param_1);
    if (iVar4 == -1) goto LAB_180616143;
  }
  else {
    iVar4 = *(int *)**(uint64_t **)(lVar5 + 0x18);
  }
  uStack_38 = CONCAT62(uStack_38._2_6_,2);
  iStack_24 = iVar4;
  uVar3 = htons(param_2);
  uStack_38 = CONCAT44(iStack_24,CONCAT22(uVar3,(int16_t)uStack_38));
LAB_180616143:
  cVar2 = (**(code **)(*(int64_t *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,1,1);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*(int64_t *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,2,1);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*(int64_t *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,3,0x100000);
      if (cVar2 != '\0') {
        (**(code **)(*(int64_t *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,4,0x40000);
      }
    }
  }
  *(uint64_t *)(lVar1 + 0x60c) = 0;
                    // WARNING: Subroutine does not return
  memset(*(uint64_t *)(lVar1 + 0x5e0),0,(int64_t)(*(int *)(lVar1 + 0x5d8) >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616230(void)
void FUN_180616230(void)

{
  char cVar1;
  
  cVar1 = (**(code **)(render_system_config + 0x30))(&system_counter_25c8);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(render_system_config + 0x30))(&system_counter_25c8);
    if (cVar1 != '\0') {
      (**(code **)(render_system_config + 0x18))(&system_counter_25c8);
    }
                    // WARNING: Could not recover jumptable at 0x000180616281. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(render_system_config + 8))(&system_counter_25a0);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1806162c0(int8_t param_1)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  iVar1 = FUN_18055c6f0(&system_counter_25a0);
  if (-1 < iVar1) {
    puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x50,8,3,uVar3);
    puVar2[1] = 0;
    *(int32_t *)(puVar2 + 6) = 0;
    uVar3 = system_error_code;
    puVar2[5] = system_error_code;
    *(int32_t *)(puVar2 + 8) = 0;
    puVar2[7] = uVar3;
    *(int32_t *)((int64_t)puVar2 + 0x4c) = 0;
    *(int *)((int64_t)puVar2 + 0x14) = iVar1;
    *(int32_t *)((int64_t)puVar2 + 0x24) = 0x1010100;
    *(int32_t *)(puVar2 + 9) = 0xffffffff;
    *(int32_t *)(puVar2 + 3) = 0xffffffff;
    *(int8_t *)((int64_t)puVar2 + 0x1c) = 0;
    *puVar2 = 0;
    *(int32_t *)(puVar2 + 2) = 0;
    *(int32_t *)(puVar2 + 4) = 0;
    *(int32_t *)(puVar2 + 9) = 0xffffffff;
    *(int32_t *)(puVar2 + 3) = 0xffffffff;
    *(int8_t *)((int64_t)puVar2 + 0x1c) = 0;
    *puVar2 = 0;
    *(int32_t *)(puVar2 + 4) = 0;
    *(int16_t *)((int64_t)puVar2 + 0x25) = 0x101;
    *(int8_t *)((int64_t)puVar2 + 0x27) = 1;
    *(int *)((int64_t)puVar2 + 0x14) = iVar1;
    *(int32_t *)(puVar2 + 2) = 1;
    *(int8_t *)((int64_t)puVar2 + 0x24) = param_1;
    *(uint64_t **)((int64_t)iVar1 * 8 + 0x180c92d30) = puVar2;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1806163c0(int32_t param_1)

{
  int64_t *plVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t alStackX_10 [3];
  
  plVar1 = (int64_t *)(**(code **)(render_system_config + 0x20))(&system_counter_25a0,param_1);
  alStackX_10[0] = *plVar1;
  if (alStackX_10[0] != 0) {
    iVar2 = 0;
    uVar3 = render_system_config - (int64_t)render_system_config >> 3;
    plVar1 = render_system_config;
    if (uVar3 != 0) {
      do {
        if (*plVar1 == alStackX_10[0]) {
          if (iVar2 == -1) {
            return 0;
          }
          SystemInitializer(0x180c95b78,alStackX_10);
          return 1;
        }
        iVar2 = iVar2 + 1;
        plVar1 = plVar1 + 1;
      } while ((uint64_t)(int64_t)iVar2 < uVar3);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806163f0(void)
void FUN_1806163f0(void)

{
  void *puVar1;
  uint64_t *puVar2;
  
  if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
    puVar2 = (uint64_t *)&system_counter_25a0;
    puVar1 = render_system_config;
  }
  else {
    if ((system_status_flag != 1) && (system_status_flag != 4)) {
      return;
    }
    puVar1 = (void *)*render_system_config;
    puVar2 = render_system_config;
    if ((void *)*render_system_config == &processed_var_9520_ptr) {
      render_system_config[0x9892] = render_system_config[0x9891];
      return;
    }
  }
  (**(code **)(puVar1 + 0x10))(puVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806164e0(void)
void FUN_1806164e0(void)

{
  char cVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t *plVar5;
  
  iVar4 = (int)system_status_flag;
  if ((iVar4 != 0) && (iVar4 != 5)) {
    if (render_system_config == (int64_t *)0x0) {
      cVar1 = (**(code **)(render_system_config + 0x30))(&system_counter_25c8);
      if (cVar1 == '\0') {
        return;
      }
      iVar4 = (int)system_status_flag;
    }
    if (iVar4 - 2U < 2) {
      plVar5 = render_system_config;
      if (iVar4 != 1) {
        if (((iVar4 - 2U & 0xfffffffc) == 0) && (iVar4 != 4)) {
          plVar5 = (int64_t *)&system_counter_25a0;
        }
        else {
          plVar5 = (int64_t *)0x0;
        }
      }
      iVar4 = 1;
      do {
        plVar2 = (int64_t *)(**(code **)(*plVar5 + 0x20))(plVar5,iVar4);
        if ((int)plVar2[2] == 1) {
          plVar3 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&processed_var_400_ptr);
          plVar3 = (int64_t *)(**(code **)(*plVar3 + 0x50))(plVar3,iVar4);
          plVar3 = (int64_t *)(**(code **)(*plVar3 + 0x70))(plVar3,&processed_var_872_ptr);
          plVar3 = (int64_t *)
                   (**(code **)(*plVar3 + 0x28))(plVar3,(float)*(double *)(*plVar2 + 0x58e0));
          (**(code **)(*plVar3 + 0x70))(plVar3,&system_counter_cc18);
          plVar3 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&processed_var_840_ptr);
          plVar2 = (int64_t *)
                   (**(code **)(*plVar3 + 0x28))(plVar3,(float)*(double *)(*plVar2 + 0x58e8));
          (**(code **)(*plVar2 + 0x70))(plVar2,&system_counter_cc18);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x3ff);
      plVar5 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&processed_var_904_ptr);
      plVar5 = (int64_t *)(**(code **)(*plVar5 + 0x28))(plVar5,(float)render_system_config);
      (**(code **)(*plVar5 + 0x70))(plVar5,&processed_var_896_ptr);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806164fc(int param_1)
void FUN_1806164fc(int param_1)

{
  char cVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t *plVar5;
  
  if (render_system_config == (int64_t *)0x0) {
    cVar1 = (**(code **)(render_system_config + 0x30))(&system_counter_25c8);
    if (cVar1 == '\0') {
      return;
    }
    param_1 = (int)system_status_flag;
  }
  if (param_1 - 2U < 2) {
    plVar5 = render_system_config;
    if (param_1 != 1) {
      if (((param_1 - 2U & 0xfffffffc) == 0) && (param_1 != 4)) {
        plVar5 = (int64_t *)&system_counter_25a0;
      }
      else {
        plVar5 = (int64_t *)0x0;
      }
    }
    iVar4 = 1;
    do {
      plVar2 = (int64_t *)(**(code **)(*plVar5 + 0x20))(plVar5,iVar4);
      if ((int)plVar2[2] == 1) {
        plVar3 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&processed_var_400_ptr);
        plVar3 = (int64_t *)(**(code **)(*plVar3 + 0x50))(plVar3,iVar4);
        plVar3 = (int64_t *)(**(code **)(*plVar3 + 0x70))(plVar3,&processed_var_872_ptr);
        plVar3 = (int64_t *)
                 (**(code **)(*plVar3 + 0x28))(plVar3,(float)*(double *)(*plVar2 + 0x58e0));
        (**(code **)(*plVar3 + 0x70))(plVar3,&system_counter_cc18);
        plVar3 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&processed_var_840_ptr);
        plVar2 = (int64_t *)
                 (**(code **)(*plVar3 + 0x28))(plVar3,(float)*(double *)(*plVar2 + 0x58e8));
        (**(code **)(*plVar2 + 0x70))(plVar2,&system_counter_cc18);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x3ff);
    plVar5 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&processed_var_904_ptr);
    plVar5 = (int64_t *)(**(code **)(*plVar5 + 0x28))(plVar5,(float)render_system_config);
    (**(code **)(*plVar5 + 0x70))(plVar5,&processed_var_896_ptr);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616540(int param_1)
void FUN_180616540(int param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t *unaff_RDI;
  
  if (param_1 != 1) {
    if (((param_1 - 2U & 0xfffffffc) == 0) && (param_1 != 4)) {
      unaff_RDI = (int64_t *)&system_counter_25a0;
    }
    else {
      unaff_RDI = (int64_t *)0x0;
    }
  }
  iVar3 = 1;
  do {
    plVar1 = (int64_t *)(**(code **)(*unaff_RDI + 0x20))(unaff_RDI,iVar3);
    if ((int)plVar1[2] == 1) {
      plVar2 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&processed_var_400_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x50))(plVar2,iVar3);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&processed_var_872_ptr);
      plVar2 = (int64_t *)
               (**(code **)(*plVar2 + 0x28))(plVar2,(float)*(double *)(*plVar1 + 0x58e0));
      (**(code **)(*plVar2 + 0x70))(plVar2,&system_counter_cc18);
      plVar2 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&processed_var_840_ptr);
      plVar1 = (int64_t *)
               (**(code **)(*plVar2 + 0x28))(plVar2,(float)*(double *)(*plVar1 + 0x58e8));
      (**(code **)(*plVar1 + 0x70))(plVar1,&system_counter_cc18);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x3ff);
  plVar1 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&processed_var_904_ptr);
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x28))(plVar1,(float)render_system_config);
  (**(code **)(*plVar1 + 0x70))(plVar1,&processed_var_896_ptr);
  return;
}





// 函数: void FUN_180616684(void)
void FUN_180616684(void)

{
  return;
}





// 函数: void FUN_180616689(void)
void FUN_180616689(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616690(void)
void FUN_180616690(void)

{
  int iVar1;
  int64_t *plVar2;
  
  iVar1 = (int)system_status_flag;
  plVar2 = render_system_config;
  if ((iVar1 != 1) &&
     (((iVar1 - 2U & 0xfffffffc) != 0 || (plVar2 = (int64_t *)&system_counter_25a0, iVar1 == 4)))) {
    plVar2 = (int64_t *)0x0;
  }
  iVar1 = 1;
  do {
    (**(code **)(*plVar2 + 0x20))(plVar2,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x3ff);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616770(int32_t param_1,int param_2,uint64_t param_3,uint64_t param_4)
void FUN_180616770(int32_t param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  cVar1 = FUN_18061ca90();
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(render_system_config + 0x20))(&system_counter_25a0,param_1,param_3,param_4,uVar3);
    if ((param_2 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(param_2);
    }
    if ((*(int *)(lVar2 + 0x4c) != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))();
    }
    *(int *)(lVar2 + 0x4c) = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616800(int32_t param_1,int64_t param_2,int param_3)
void FUN_180616800(int32_t param_1,int64_t param_2,int param_3)

{
  char cVar1;
  uint64_t uVar2;
  
  cVar1 = FUN_18061ca90();
  if (cVar1 != '\0') {
    if (((param_2 != 0) || (param_3 != -1)) &&
       (cVar1 = FUN_18061ca10(param_2,param_3), cVar1 == '\0')) {
      return;
    }
    uVar2 = (**(code **)(render_system_config + 0x20))(&system_counter_25a0,param_1);
    FUN_1805eda50(uVar2,param_2,param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616870(int32_t param_1,int32_t param_2)
void FUN_180616870(int32_t param_1,int32_t param_2)

{
  char cVar1;
  int64_t lVar2;
  
  cVar1 = FUN_18061ca90();
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(render_system_config + 0x20))(&system_counter_25a0,param_1);
    *(int32_t *)(lVar2 + 0x48) = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1806168b0(uint param_1)

{
  int64_t lVar1;
  int iVar2;
  
  iVar2 = (int)system_status_flag;
  if (iVar2 == 1) {
    if (render_system_config == 0) {
      return 0;
    }
  }
  else {
    if ((iVar2 - 2U & 0xfffffffc) != 0) {
      return 0;
    }
    if (iVar2 == 4) {
      return 0;
    }
  }
  if (((param_1 < 0x3ff) &&
      (lVar1 = (**(code **)(render_system_config + 0x20))(&system_counter_25a0,param_1), lVar1 != 0)) &&
     (lVar1 = (**(code **)(render_system_config + 0x20))(&system_counter_25a0,param_1),
     *(int *)(lVar1 + 0x10) == 1)) {
    return 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616930(int32_t param_1,int8_t param_2)
void FUN_180616930(int32_t param_1,int8_t param_2)

{
  int64_t lVar1;
  
  lVar1 = (**(code **)(render_system_config + 0x20))(&system_counter_25a0,param_1);
  *(int8_t *)(lVar1 + 0x1c) = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_180616960(int32_t param_1)

{
  int64_t lVar1;
  
  lVar1 = (**(code **)(render_system_config + 0x20))(&system_counter_25a0,param_1);
  return *(int8_t *)(lVar1 + 0x1c);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616980(int32_t param_1,int64_t param_2)
void FUN_180616980(int32_t param_1,int64_t param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int64_t lVar9;
  
  cVar2 = FUN_18061ca90();
  if (cVar2 != '\0') {
    plVar4 = (int64_t *)(**(code **)(render_system_config + 0x20))(&system_counter_25a0,param_1);
    iVar3 = *(int *)(param_2 + 0x52ed94);
    iVar6 = 0;
    iVar7 = iVar3;
    if (0 < iVar3) {
      lVar9 = 0;
      piVar8 = (int *)(param_2 + 0x30b0);
      do {
        iVar7 = iVar6;
        if (-1 < *piVar8) break;
        iVar6 = iVar6 + 1;
        lVar9 = lVar9 + 1;
        piVar8 = piVar8 + 0x298;
        iVar7 = iVar3;
      } while (lVar9 < iVar3);
    }
    if (iVar7 < *(int *)(param_2 + 0x52ed94)) {
      do {
        lVar9 = (int64_t)iVar7 * 0xa60;
        if ((*(int *)(lVar9 + 0x3608 + param_2) == 1) &&
           (*(char *)(lVar9 + 0x36a4 + param_2) == '\0')) {
          lVar1 = *plVar4;
          if (*(char *)(lVar1 + 0x31) == '\0') {
            iVar3 = _Mtx_lock(lVar1 + 0x5990);
            if (iVar3 != 0) {
              __Throw_C_error_std__YAXH_Z(iVar3);
            }
            uVar5 = FUN_1805fa9a0(lVar1 + 0x50,0x28);
          }
          else {
            uVar5 = 0;
          }
          FUN_1805ae1e0(uVar5,*(int32_t *)(lVar9 + 0x30b0 + param_2),0);
          lVar9 = *plVar4;
          if (*(char *)(lVar9 + 0x31) == '\0') {
            FUN_1805faa20(lVar9 + 0x50);
            iVar3 = _Mtx_unlock(lVar9 + 0x5990);
            if (iVar3 != 0) {
              __Throw_C_error_std__YAXH_Z(iVar3);
            }
          }
        }
        iVar7 = (int)*(short *)(param_2 + 0x52dda0 + (int64_t)iVar7 * 2);
      } while (iVar7 < *(int *)(param_2 + 0x52ed94));
    }
  }
  return;
}





// 函数: void FUN_1806169ac(void)
void FUN_1806169ac(void)

{
  int64_t lVar1;
  int iVar2;
  int64_t in_RAX;
  int64_t *plVar3;
  uint64_t uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int64_t unaff_RSI;
  int64_t lVar8;
  
  plVar3 = (int64_t *)(**(code **)(in_RAX + 0x20))();
  iVar2 = *(int *)(unaff_RSI + 0x52ed94);
  iVar5 = 0;
  iVar6 = iVar2;
  if (0 < iVar2) {
    lVar8 = 0;
    piVar7 = (int *)(unaff_RSI + 0x30b0);
    do {
      iVar6 = iVar5;
      if (-1 < *piVar7) break;
      iVar5 = iVar5 + 1;
      lVar8 = lVar8 + 1;
      piVar7 = piVar7 + 0x298;
      iVar6 = iVar2;
    } while (lVar8 < iVar2);
  }
  if (iVar6 < *(int *)(unaff_RSI + 0x52ed94)) {
    do {
      lVar8 = (int64_t)iVar6 * 0xa60;
      if ((*(int *)(lVar8 + 0x3608 + unaff_RSI) == 1) &&
         (*(char *)(lVar8 + 0x36a4 + unaff_RSI) == '\0')) {
        lVar1 = *plVar3;
        if (*(char *)(lVar1 + 0x31) == '\0') {
          iVar2 = _Mtx_lock(lVar1 + 0x5990);
          if (iVar2 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar2);
          }
          uVar4 = FUN_1805fa9a0(lVar1 + 0x50,0x28);
        }
        else {
          uVar4 = 0;
        }
        FUN_1805ae1e0(uVar4,*(int32_t *)(lVar8 + 0x30b0 + unaff_RSI),0);
        lVar8 = *plVar3;
        if (*(char *)(lVar8 + 0x31) == '\0') {
          FUN_1805faa20(lVar8 + 0x50);
          iVar2 = _Mtx_unlock(lVar8 + 0x5990);
          if (iVar2 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar2);
          }
        }
      }
      iVar6 = (int)*(short *)(unaff_RSI + 0x52dda0 + (int64_t)iVar6 * 2);
    } while (iVar6 < *(int *)(unaff_RSI + 0x52ed94));
  }
  return;
}





// 函数: void FUN_1806169f5(int param_1)
void FUN_1806169f5(int param_1)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t unaff_RSI;
  int64_t lVar4;
  int64_t *unaff_R14;
  
  do {
    lVar4 = (int64_t)param_1 * 0xa60;
    if ((*(int *)(lVar4 + 0x3608 + unaff_RSI) == 1) &&
       (*(char *)(lVar4 + 0x36a4 + unaff_RSI) == '\0')) {
      lVar1 = *unaff_R14;
      if (*(char *)(lVar1 + 0x31) == '\0') {
        iVar2 = _Mtx_lock(lVar1 + 0x5990);
        if (iVar2 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar2);
        }
        uVar3 = FUN_1805fa9a0(lVar1 + 0x50,0x28);
      }
      else {
        uVar3 = 0;
      }
      FUN_1805ae1e0(uVar3,*(int32_t *)(lVar4 + 0x30b0 + unaff_RSI),0);
      lVar4 = *unaff_R14;
      if (*(char *)(lVar4 + 0x31) == '\0') {
        FUN_1805faa20(lVar4 + 0x50);
        iVar2 = _Mtx_unlock(lVar4 + 0x5990);
        if (iVar2 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar2);
        }
      }
    }
    param_1 = (int)*(short *)(unaff_RSI + 0x52dda0 + (int64_t)param_1 * 2);
  } while (param_1 < *(int *)(unaff_RSI + 0x52ed94));
  return;
}





// 函数: void FUN_180616aad(void)
void FUN_180616aad(void)

{
  return;
}





// 函数: void FUN_180616ab2(void)
void FUN_180616ab2(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616ac0(int32_t param_1,int8_t param_2,int8_t param_3)
void FUN_180616ac0(int32_t param_1,int8_t param_2,int8_t param_3)

{
  char cVar1;
  int64_t lVar2;
  
  cVar1 = FUN_18061ca90();
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(render_system_config + 0x20))(&system_counter_25a0,param_1);
    *(int8_t *)(lVar2 + 0x27) = param_3;
    *(int8_t *)(lVar2 + 0x25) = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180616b10(int32_t param_1,char param_2)
void FUN_180616b10(int32_t param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int64_t *plVar3;
  
  iVar2 = _Mtx_lock(0x180c95d70);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  cVar1 = FUN_18061ca90(param_1);
  if (cVar1 != '\0') {
    plVar3 = (int64_t *)(**(code **)(render_system_config + 0x20))(&system_counter_25a0,param_1);
    if (*plVar3 != 0) {
      if (param_2 == '\0') {
        render_system_config = FUN_1805b5900();
      }
      else {
        render_system_config = FUN_1805b5ad0();
      }
      render_system_config = param_1;
      SystemBufferProcessor(render_system_config,1,&processed_var_6264_ptr);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



