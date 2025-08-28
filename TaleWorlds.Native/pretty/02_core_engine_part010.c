/* FUN_函数别名定义 */
#define ResourceManager_Allocate ResourceManager_Allocate  // ResourceManager_Allocate 的语义化别名
#include "ultra_high_freq_fun_definitions.h"
/* SystemCore_EventHandler - RenderingSystem_DataBlockCopier */
#define RenderingSystem_DataBlockCopier SystemCore_EventHandler


/* NetworkSystem_ProtocolParser - RenderingSystem_StringParser */
#define RenderingSystem_StringParser NetworkSystem_ProtocolParser


#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part010.c - 22 个函数

// 函数: void FUN_180045fa6(int8_t *param_1)
void FUN_180045fa6(int8_t *param_1)

{
  int64_t unaff_RDI;
  
  *param_1 = 0;
  *(int32_t *)(unaff_RDI + 0x10) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180045fc0(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_180045fc0(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int8_t auStack_498 [32];
  uint64_t uStack_478;
  void *puStack_468;
  int8_t *puStack_460;
  int32_t uStack_458;
  int8_t auStack_450 [1032];
  uint64_t uStack_48;
  
  uStack_478 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_498;
  puStack_468 = &system_config_data_ptr;
  puStack_460 = auStack_450;
  uStack_458 = 0;
  auStack_450[0] = 0;
  lVar1 = strstr(*(uint64_t *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(puStack_460,*(int64_t *)(param_1 + 8),lVar1 - *(int64_t *)(param_1 + 8));
  }
  puStack_468 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_498);
}





// 函数: void FUN_180046130(uint64_t *param_1,int32_t param_2)
void FUN_180046130(uint64_t *param_1,int32_t param_2)

{
  int iVar1;
  
  do {
    iVar1 = ReleaseSemaphore(*param_1,param_2,0);
  } while (iVar1 == 0);
  return;
}





// 函数: void FUN_180046160(uint64_t *param_1)
void FUN_180046160(uint64_t *param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 1) != '\0') {
    iVar1 = _Mtx_unlock(*param_1);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
  }
  return;
}



uint64_t FUN_180046190(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t uVar5;
  
  uVar4 = 0xfffffffffffffffe;
  lVar3 = param_1 + 0x48;
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  uVar5 = 1;
  if (*(char *)(param_1 + 0x98) != '\x01') {
    cVar1 = *(char *)(param_1 + 0x98);
    while (cVar1 == '\0') {
      iVar2 = _Cnd_wait(param_1,lVar3,param_3,param_4,uVar4,lVar3,uVar5);
      if (iVar2 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar2);
      }
      cVar1 = *(char *)(param_1 + 0x98);
    }
  }
  *(int8_t *)(param_1 + 0x98) = 0;
  iVar2 = _Mtx_unlock(lVar3);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return 1;
}



int64_t SystemAudioManager(int32_t *param_1,int32_t *param_2)

{
  int32_t uVar1;
  char cVar2;
  void *puVar3;
  
  if (*(int64_t *)(param_1 + 0x18) != 0) {
    cVar2 = (**(code **)(param_1 + 0x1a))(param_2,param_1 + 0x14);
    if (cVar2 == '\0') {
      if (system_debug_flag == '\0') {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(param_1 + 4) != (void *)0x0) {
          puVar3 = *(void **)(param_1 + 4);
        }
        SystemDataInitializer(&system_string_data_ptr,puVar3);
      }
      *param_1 = param_1[0x12];
      return (uint64_t)(uint3)((uint)param_1[0x12] >> 8) << 8;
    }
  }
  uVar1 = *param_2;
  *param_1 = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800462c0(uint64_t param_1,int32_t param_2)
void FUN_1800462c0(uint64_t param_1,int32_t param_2)

{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  int32_t auStackX_10 [6];
  
  lVar1 = SYSTEM_STATE_MANAGER;
  if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x22f0) != 0) &&
     (auStackX_10[0] = param_2, cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x22f8))(auStackX_10),
     param_2 = auStackX_10[0], cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x22a0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x22a0);
      }
      SystemDataInitializer(&system_string_data_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x2290) = *(int32_t *)(lVar1 + 0x22d8);
    return;
  }
  *(int32_t *)(lVar1 + 0x2290) = param_2;
  return;
}



uint64_t *
FUN_180046340(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &system_state_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x38,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180046380(int64_t param_1,int64_t param_2)
void FUN_180046380(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  
  if (param_2 == 0) {
    *(int32_t *)(param_1 + 0x10) = 0;
    **(int8_t **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 0x20) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x0001800463b7. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(param_1 + 8),0x20);
    return;
  }
  SystemDataInitializer(&system_buffer_data_ptr,0x20,param_2);
  *(int32_t *)(param_1 + 0x10) = 0;
  **(int8_t **)(param_1 + 8) = 0;
  return;
}





// 函数: void FUN_180046400(int64_t param_1,uint64_t param_2,int param_3)
void FUN_180046400(int64_t param_1,uint64_t param_2,int param_3)

{
  if (param_3 + 1 < 0x20) {
                    // WARNING: Subroutine does not return
    memcpy(*(int8_t **)(param_1 + 8),param_2,(int64_t)param_3);
  }
  **(int8_t **)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  return;
}





// 函数: void FUN_18004641f(void)
void FUN_18004641f(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}





// 函数: void FUN_180046444(int8_t *param_1)
void FUN_180046444(int8_t *param_1)

{
  int64_t unaff_RDI;
  
  *param_1 = 0;
  *(int32_t *)(unaff_RDI + 0x10) = 0;
  return;
}



uint64_t * FUN_180046480(uint64_t *param_1)

{
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_context_ptr;
  param_1[1] = param_1 + 3;
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800464f0(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_1800464f0(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int8_t auStack_a8 [32];
  uint64_t uStack_88;
  void *puStack_80;
  int8_t *puStack_78;
  int32_t uStack_70;
  int8_t auStack_68 [32];
  uint64_t uStack_48;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  puStack_80 = &system_context_ptr;
  puStack_78 = auStack_68;
  uStack_70 = 0;
  auStack_68[0] = 0;
  lVar1 = strstr(*(uint64_t *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(puStack_78,*(int64_t *)(param_1 + 8),lVar1 - *(int64_t *)(param_1 + 8));
  }
  puStack_80 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_a8);
}



uint64_t * FUN_180046650(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &system_state_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18);
  }
  return param_1;
}





// 函数: void FUN_1800466a0(uint64_t *param_1)
void FUN_1800466a0(uint64_t *param_1)

{
  int iVar1;
  
  iVar1 = _Mtx_unlock(*param_1);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}





// 函数: void FUN_1800466d0(int64_t param_1)
void FUN_1800466d0(int64_t param_1)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 0x48);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  *(int8_t *)(param_1 + 0x98) = 1;
  iVar1 = _Cnd_broadcast(param_1);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  iVar1 = _Mtx_unlock(param_1 + 0x48);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}





// 函数: void FUN_180046750(uint64_t *param_1)
void FUN_180046750(uint64_t *param_1)

{
  *param_1 = &script_config_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}



uint64_t *
FUN_180046790(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &script_config_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180046820(int64_t *param_1)
void FUN_180046820(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x100) {
    FUN_180046b10(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_180046840(int64_t *param_1)
void FUN_180046840(int64_t *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 5) {
    *puVar2 = &system_data_buffer_ptr;
    if (puVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puVar2[1] = 0;
    *(int32_t *)(puVar2 + 3) = 0;
    *puVar2 = &system_state_ptr;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}





// 函数: void FUN_180046860(uint64_t *param_1)
void FUN_180046860(uint64_t *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        SystemDataCleaner();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180046890(int64_t param_1,int64_t param_2)

{
  uint64_t ***pppuVar1;
  int64_t lVar2;
  void *puVar3;
  int64_t lVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t ****ppppuVar9;
  uint64_t ***pppuStackX_8;
  uint64_t *puStack_138;
  int64_t lStack_130;
  int32_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t ***pppuStack_68;
  uint64_t ***pppuStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lVar2 = 0;
  puStack_138 = (uint64_t *)&system_data_buffer_ptr;
  uStack_120 = 0;
  lStack_130 = 0;
  uStack_128 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_40 = 3;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar3 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar3 = *(void **)(param_2 + 8);
  }
  pppuStackX_8 = &pppuStack_68;
  pppuStack_68 = &pppuStack_68;
  pppuStack_60 = &pppuStack_68;
  CoreSystem_ConfigValidator0(&puStack_138,puVar3);
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uVar8 = *(uint64_t *)(param_1 + 0x10);
  if (uVar8 < *(uint64_t *)(param_1 + 0x18)) {
    *(uint64_t *)(param_1 + 0x10) = uVar8 + 0x100;
    FUN_180048a90(uVar8,&puStack_138);
    ppppuVar9 = *(uint64_t *****)(param_1 + 0x10);
    goto LAB_180046a90;
  }
  lVar4 = *(int64_t *)(param_1 + 8);
  lVar7 = (int64_t)(uVar8 - lVar4) >> 8;
  if (lVar7 == 0) {
    lVar7 = 1;
LAB_1800469fd:
    lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 << 8,*(int8_t *)(param_1 + 0x20));
    uVar8 = *(uint64_t *)(param_1 + 0x10);
    lVar4 = *(int64_t *)(param_1 + 8);
  }
  else {
    lVar7 = lVar7 * 2;
    if (lVar7 != 0) goto LAB_1800469fd;
  }
  FUN_1800491b0(&pppuStackX_8,lVar4,uVar8,lVar2);
  pppuVar1 = pppuStackX_8;
  FUN_180048a90(pppuStackX_8,&puStack_138);
  ppppuVar9 = (uint64_t ****)(pppuVar1 + 0x20);
  lVar4 = *(int64_t *)(param_1 + 0x10);
  lVar6 = *(int64_t *)(param_1 + 8);
  if (lVar6 != lVar4) {
    do {
      FUN_180046b10(lVar6);
      lVar6 = lVar6 + 0x100;
    } while (lVar6 != lVar4);
    lVar6 = *(int64_t *)(param_1 + 8);
  }
  if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar6);
  }
  *(int64_t *)(param_1 + 8) = lVar2;
  *(uint64_t *****)(param_1 + 0x10) = ppppuVar9;
  *(int64_t *)(param_1 + 0x18) = lVar7 * 0x100 + lVar2;
LAB_180046a90:
  iVar5 = (int)((uint64_t)((int64_t)ppppuVar9 - *(int64_t *)(param_1 + 8)) >> 8) + -1;
  *(int *)(param_1 + 0x68) = iVar5;
  pppuStackX_8 = &pppuStack_68;
  FUN_180049fd0(&pppuStack_68,uStack_58);
  pppuStackX_8 = (uint64_t ***)&puStack_138;
  puStack_138 = (uint64_t *)&system_data_buffer_ptr;
  if (lStack_130 == 0) {
    return iVar5;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_180046b10(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180046b10(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180049fd0(param_1 + 0x1a,param_1[0x1c],param_3,param_4,0xfffffffffffffffe);
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}



uint64_t FUN_180046b80(int64_t param_1,int64_t param_2)

{
  byte *pbVar1;
  int iVar2;
  int64_t lVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  
  uVar10 = (uint64_t)*(int *)(param_1 + 0x68);
  lVar3 = *(int64_t *)(param_1 + 8);
  if (uVar10 < (uint64_t)(*(int64_t *)(param_1 + 0x10) - lVar3 >> 8)) {
    iVar5 = *(int *)(param_2 + 0x10);
    iVar2 = *(int *)(uVar10 * 0x100 + 0x10 + lVar3);
    if (iVar2 == iVar5) {
      if (iVar2 != 0) {
        pbVar4 = *(byte **)(uVar10 * 0x100 + 8 + lVar3);
        lVar8 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar4;
        do {
          pbVar1 = pbVar4 + lVar8;
          iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
          if (iVar5 != 0) break;
          pbVar4 = pbVar4 + 1;
        } while (*pbVar1 != 0);
      }
    }
    else if (iVar2 != 0) goto LAB_180046c03;
    if (iVar5 == 0) {
LAB_180046c90:
      return uVar10 & 0xffffffff;
    }
  }
LAB_180046c03:
  uVar10 = 0;
  uVar7 = *(int64_t *)(param_1 + 0x10) - lVar3 >> 8;
  if (uVar7 != 0) {
    iVar5 = *(int *)(param_2 + 0x10);
    uVar11 = uVar10;
    do {
      iVar2 = *(int *)(uVar11 + 0x10 + lVar3);
      iVar6 = iVar5;
      if (iVar2 == iVar5) {
        if (iVar2 != 0) {
          pbVar4 = *(byte **)(uVar11 + 8 + lVar3);
          lVar8 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar8;
            iVar6 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
LAB_180046c5e:
        if (iVar6 == 0) {
          *(int *)(param_1 + 0x68) = (int)uVar10;
          goto LAB_180046c90;
        }
      }
      else if (iVar2 == 0) goto LAB_180046c5e;
      uVar9 = (int)uVar10 + 1;
      uVar10 = (uint64_t)uVar9;
      uVar11 = uVar11 + 0x100;
    } while ((uint64_t)(int64_t)(int)uVar9 < uVar7);
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180046ca0(int64_t *param_1,uint64_t *param_2)
void FUN_180046ca0(int64_t *param_1,uint64_t *param_2)

{
  int64_t *plVar1;
  int64_t *plStackX_8;
  uint64_t *puStackX_10;
  int64_t *plStackX_18;
  int64_t **pplStackX_20;
  int32_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  plStackX_8 = param_1;
  puStackX_10 = param_2;
  FUN_180047fc0();
  plVar1 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,200,8,3,uVar2,uVar3);
  plStackX_8 = plVar1;
  UltraHighFreq_PerformanceMonitor1(plVar1);
  *plVar1 = (int64_t)&system_param5_ptr;
  plVar1[0x18] = (int64_t)&system_memory_ptr;
  plStackX_18 = plVar1;
  (**(code **)(*plVar1 + 0x28))(plVar1);
  uVar3 = system_context_ptr;
  pplStackX_20 = &plStackX_8;
  plStackX_8 = plVar1;
  (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_18005e300(uVar3,&plStackX_8);
  (**(code **)(*plVar1 + 0x38))(plVar1);
  core_system_control_memory = (int64_t)*(int *)(system_main_module_state + 0x224);
  SystemCore_ConfigurationHandler0(&system_data_52c0,param_2);
  *param_2 = &system_data_buffer_ptr;
  if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_2[1] = 0;
  *(int32_t *)(param_2 + 3) = 0;
  *param_2 = &system_state_ptr;
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800472a0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180046e20(void)
void FUN_180046e20(void)

{
  uint64_t uVar1;
  char cVar2;
  int iVar3;
  int64_t ***ppplVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int32_t *puVar8;
  int8_t *puVar9;
  int32_t uVar10;
  float fVar11;
  float fVar12;
  int8_t auStack_698 [32];
  int64_t lStack_678;
  int64_t lStack_670;
  int iStack_668;
  void *puStack_618;
  int8_t *puStack_610;
  uint uStack_608;
  uint64_t uStack_600;
  int32_t uStack_5b8;
  int64_t ***ppplStack_590;
  int64_t **pplStack_588;
  int64_t ****pppplStack_580;
  void *puStack_578;
  uint64_t uStack_570;
  int32_t uStack_568;
  uint64_t uStack_560;
  void *puStack_558;
  int64_t lStack_550;
  int iStack_548;
  int32_t uStack_540;
  void *puStack_538;
  int64_t lStack_530;
  int32_t uStack_520;
  int64_t ***appplStack_518 [2];
  void *puStack_508;
  code *pcStack_500;
  uint64_t uStack_4f8;
  int64_t **pplStack_4f0;
  void *puStack_4e8;
  int8_t *puStack_4e0;
  int32_t uStack_4d8;
  int8_t auStack_4d0 [72];
  void *puStack_488;
  int8_t *puStack_480;
  int32_t uStack_478;
  int8_t auStack_470 [72];
  void *puStack_428;
  int8_t *puStack_420;
  int32_t uStack_418;
  int8_t auStack_410 [72];
  void *puStack_3c8;
  int8_t *puStack_3c0;
  int32_t uStack_3b8;
  int8_t auStack_3b0 [72];
  void *puStack_368;
  int8_t *puStack_360;
  int32_t uStack_358;
  int8_t auStack_350 [72];
  void *puStack_308;
  int8_t *puStack_300;
  int32_t uStack_2f8;
  int8_t auStack_2f0 [648];
  uint64_t uStack_68;
  
  uStack_4f8 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_698;
  uStack_5b8 = 0;
  if (*(int *)(system_main_module_state + 0x224) - core_system_control_memory < 0xfb) {
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_68 ^ (uint64_t)auStack_698);
  }
  *(int8_t *)(core_system_data_memory + 0x39) = 1;
  ppplVar4 = (int64_t ***)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,200,8,3);
  ppplStack_590 = ppplVar4;
  UltraHighFreq_PerformanceMonitor1(ppplVar4);
  *ppplVar4 = (int64_t **)&system_param5_ptr;
  ppplVar4[0x18] = (int64_t **)&system_param7_ptr;
  pplStack_4f0 = (int64_t **)ppplVar4;
  (*(code *)(*ppplVar4)[5])(ppplVar4);
  uVar1 = system_context_ptr;
  uStack_5b8 = 1;
  ppplStack_590 = &pplStack_588;
  pplStack_588 = (int64_t **)ppplVar4;
  (*(code *)(*ppplVar4)[5])(ppplVar4);
  FUN_18005e300(uVar1,&pplStack_588);
  uStack_5b8 = 0;
  (*(code *)(*ppplVar4)[7])(ppplVar4);
  CoreEngineDataTransformer(&lStack_678,&system_data_52c0);
  if (iStack_668 == 0) {
    (**(code **)(lStack_678 + 0x10))(&lStack_678,&system_param1_ptr);
    cVar2 = UltraHighFreq_LogManager1(&lStack_678);
    if (cVar2 == '\0') {
      SystemManager_Processor(&lStack_678);
    }
  }
  cVar2 = UltraHighFreq_LogManager1(&lStack_678);
  if (cVar2 == '\0') {
    SystemManager_Processor(&lStack_678);
  }
  puStack_4e8 = &system_param6_ptr;
  puStack_4e0 = auStack_4d0;
  auStack_4d0[0] = 0;
  uStack_4d8 = 0x18;
  strcpy_s(auStack_4d0,0x40,&system_param3_ptr);
  FUN_180097d40(core_system_data_memory,&puStack_4e8,&lStack_678);
  puStack_4e8 = &system_state_ptr;
  puStack_488 = &system_param6_ptr;
  puStack_480 = auStack_470;
  auStack_470[0] = 0;
  uStack_478 = 0xb;
  strcpy_s(auStack_470,0x40,&system_param2_ptr);
  FUN_180097d40(core_system_data_memory,&puStack_488,&lStack_678);
  puStack_488 = &system_state_ptr;
  puStack_428 = &system_param6_ptr;
  puStack_420 = auStack_410;
  auStack_410[0] = 0;
  uStack_418 = 0x18;
  uVar10 = strcpy_s(auStack_410,0x40,&system_param3_ptr);
  core_system_control_memory = (float)FUN_180095480(uVar10,&puStack_428);
  core_system_control_memory = 1.0 / core_system_control_memory;
  puStack_428 = &system_state_ptr;
  puStack_3c8 = &system_param6_ptr;
  puStack_3c0 = auStack_3b0;
  auStack_3b0[0] = 0;
  uStack_3b8 = 0xb;
  uVar10 = strcpy_s(auStack_3b0,0x40,&system_param2_ptr);
  core_system_control_memory = (float)FUN_180095480(uVar10,&puStack_3c8);
  core_system_control_memory = 1.0 / core_system_control_memory;
  puStack_3c8 = &system_state_ptr;
  puStack_368 = &system_param6_ptr;
  puStack_360 = auStack_350;
  auStack_350[0] = 0;
  uStack_358 = 0xb;
  uVar10 = strcpy_s(auStack_350,0x40,&system_param2_ptr);
  fVar11 = (float)FUN_180095720(uVar10,&puStack_368);
  puStack_368 = &system_state_ptr;
  puStack_308 = &system_param6_ptr;
  puStack_300 = auStack_2f0;
  auStack_2f0[0] = 0;
  uStack_2f8 = 0x18;
  uVar10 = strcpy_s(auStack_2f0,0x40,&system_param3_ptr);
  fVar12 = (float)FUN_180095720(uVar10,&puStack_308);
  puStack_308 = &system_state_ptr;
  uVar5 = FUN_180623ce0();
  if (0 < core_system_control_memory) {
    RenderingSystem_StringParser(&system_data_52c0,&puStack_558,0,core_system_control_memory + -1);
    iStack_548 = iStack_548 + -1;
    lVar6 = (int64_t)iStack_548;
    iVar3 = -1;
    if (-1 < iStack_548) {
      do {
        iVar3 = iStack_548;
        if (*(char *)(lStack_550 + lVar6) == '/') break;
        iStack_548 = iStack_548 + -1;
        lVar6 = lVar6 + -1;
        iVar3 = -1;
      } while (-1 < lVar6);
    }
    RenderingSystem_StringParser(&puStack_558,&puStack_538,iVar3 + 1,0xffffffff);
    iVar3 = FUN_180046b80(&system_data_5240,&puStack_538);
    if (iVar3 == -1) {
      iVar3 = FUN_180046890(&system_data_5240,&puStack_538);
    }
    lVar6 = (int64_t)iVar3 * 0x100;
    ppplStack_590 = (int64_t ***)(core_system_control_memory + 0x30 + lVar6);
    pppplStack_580 = appplStack_518;
    puStack_508 = &system_param4_ptr;
    pcStack_500 = FUN_1800adba0;
    appplStack_518[0] = (int64_t ***)&ppplStack_590;
    SystemCore_SecurityManager(appplStack_518);
    *(double *)(lVar6 + 0xa0 + core_system_control_memory) = (double)(1.0 / fVar12);
    *(double *)(lVar6 + 0xb8 + core_system_control_memory) = (double)(1.0 / fVar11);
    *(int *)(lVar6 + 0xb0 + core_system_control_memory) = (int)(int64_t)core_system_control_memory;
    *(int *)(lVar6 + 200 + core_system_control_memory) = (int)(int64_t)core_system_control_memory;
    *(double *)(lVar6 + 0x20 + core_system_control_memory) = (double)(uVar5 >> 0x14);
    puStack_538 = &system_data_buffer_ptr;
    if (lStack_530 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_530 = 0;
    uStack_520 = 0;
    puStack_538 = &system_state_ptr;
    puStack_558 = &system_data_buffer_ptr;
    if (lStack_550 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_550 = 0;
    uStack_540 = 0;
    puStack_558 = &system_state_ptr;
  }
  puStack_578 = &system_data_buffer_ptr;
  uStack_560 = 0;
  uStack_570 = 0;
  uStack_568 = 0;
  puStack_618 = &system_data_buffer_ptr;
  uStack_600 = 0;
  puStack_610 = (int8_t *)0x0;
  uStack_608 = 0;
  CoreEngineDataBufferProcessor(&puStack_618,iStack_668);
  if (iStack_668 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_610,lStack_670,iStack_668 + 1);
  }
  if (lStack_670 != 0) {
    uStack_608 = 0;
    if (puStack_610 != (int8_t *)0x0) {
      *puStack_610 = 0;
    }
    uStack_600 = uStack_600 & 0xffffffff;
  }
  ResourceManager_Allocate(&lStack_678,1);
  iVar3 = uStack_608 + 0x11;
  CoreEngineDataBufferProcessor(&puStack_618,iVar3);
  puVar8 = (int32_t *)(puStack_610 + uStack_608);
  *puVar8 = 0x69676e65;
  puVar8[1] = 0x635f656e;
  puVar8[2] = 0x69666e6f;
  puVar8[3] = 0x78742e67;
  *(int16_t *)(puVar8 + 4) = 0x74;
  uStack_608 = iVar3;
  puVar7 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
  puVar9 = &system_buffer_ptr;
  if (puStack_610 != (int8_t *)0x0) {
    puVar9 = puStack_610;
  }
  *puVar7 = 0;
  *(int8_t *)(puVar7 + 2) = 0;
  SystemCore_Validator(puVar7,puVar9,&system_data_c7ec);
  FUN_1800ae730(SYSTEM_STATE_MANAGER,puVar7);
  if (puVar7[1] != 0) {
    fclose();
    puVar7[1] = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    if (puVar7[1] != 0) {
      fclose();
      puVar7[1] = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
    }
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar7);
}



uint64_t *
FUN_180047d40(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = *param_2;
  *(int32_t *)(param_1 + 1) = *(int32_t *)(param_2 + 1);
  RenderingSystem_DataBlockCopier(param_1 + 2,param_2 + 2,param_3,param_4,0xfffffffffffffffe);
  *(int32_t *)(param_1 + 0x15) = *(int32_t *)(param_2 + 0x15);
  *(int32_t *)((int64_t)param_1 + 0xac) = *(int32_t *)((int64_t)param_2 + 0xac);
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  *(int8_t *)(param_1 + 0x19) = *(int8_t *)(param_2 + 0x19);
  *(int8_t *)((int64_t)param_1 + 0xc9) = *(int8_t *)((int64_t)param_2 + 0xc9);
  *(int8_t *)((int64_t)param_1 + 0xca) = *(int8_t *)((int64_t)param_2 + 0xca);
  *(int8_t *)((int64_t)param_1 + 0xcb) = *(int8_t *)((int64_t)param_2 + 0xcb);
  *(int8_t *)((int64_t)param_1 + 0xcc) = *(int8_t *)((int64_t)param_2 + 0xcc);
  return param_1;
}





// 函数: void FUN_180047e10(int64_t param_1)
void FUN_180047e10(int64_t param_1)

{
  *(void **)(param_1 + 0x10) = &system_state_ptr;
  return;
}





// 函数: void FUN_180047e40(uint64_t *param_1)
void FUN_180047e40(uint64_t *param_1)

{
  *param_1 = &system_state_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180047e70(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
void FUN_180047e70(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  byte *pbVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  uint64_t uStackX_8;
  
  uStackX_8 = param_1;
  iVar3 = FUN_180046b80(&system_data_5240);
  if (iVar3 == -1) {
    iVar3 = FUN_180046890(&system_data_5240,param_2);
  }
  puVar7 = (uint64_t *)(core_system_control_memory + 0xd0 + (int64_t)iVar3 * 0x100);
  puVar4 = puVar7;
  if ((uint64_t *)puVar7[2] != (uint64_t *)0x0) {
    puVar8 = (uint64_t *)puVar7[2];
    do {
      if (*(int *)(param_3 + 0x10) == 0) {
        puVar9 = (uint64_t *)puVar8[1];
        bVar2 = false;
      }
      else {
        if (*(int *)(puVar8 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar6 = *(byte **)(param_3 + 8);
          lVar10 = puVar8[5] - (int64_t)pbVar6;
          do {
            uVar5 = (uint)pbVar6[lVar10];
            iVar3 = *pbVar6 - uVar5;
            if (*pbVar6 != uVar5) break;
            pbVar6 = pbVar6 + 1;
          } while (uVar5 != 0);
          bVar2 = 0 < iVar3;
          if (iVar3 < 1) {
            puVar9 = (uint64_t *)puVar8[1];
            goto LAB_180047f2c;
          }
        }
        puVar9 = (uint64_t *)*puVar8;
      }
LAB_180047f2c:
      if (bVar2) {
        puVar8 = puVar4;
      }
      puVar4 = puVar8;
      puVar8 = puVar9;
    } while (puVar9 != (uint64_t *)0x0);
  }
  if (puVar4 != puVar7) {
    if (*(int *)(puVar4 + 6) == 0) goto LAB_180047f93;
    if (*(int *)(param_3 + 0x10) != 0) {
      pbVar6 = (byte *)puVar4[5];
      lVar10 = *(int64_t *)(param_3 + 8) - (int64_t)pbVar6;
      do {
        bVar1 = *pbVar6;
        uVar5 = (uint)pbVar6[lVar10];
        if (bVar1 != uVar5) break;
        pbVar6 = pbVar6 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_180047f93;
    }
  }
  puVar4 = (uint64_t *)FUN_180048cc0(puVar7,&uStackX_8);
  puVar4 = (uint64_t *)*puVar4;
LAB_180047f93:
  SystemCore_ConfigurationHandler0(puVar4 + 8,param_3);
  puVar4[0xc] = param_4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



