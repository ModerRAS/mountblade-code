#include "ultra_high_freq_fun_definitions.h"
/* CoreSystem_MessageHandler - RenderingSystem_DataValidator */
#define RenderingSystem_DataValidator CoreSystem_MessageHandler


#include "SystemDataAdvancedValidator_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part009_sub001_sub001.c - 27 个函数

#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part009_sub001.c - 28 个函数

#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part009.c - 28 个函数



// 函数: void FUN_180043560(void)
void FUN_180043560(void)

{
  core_system_memory = GetCurrentProcess();
  return;
}



int FUN_180043580(void)

{
  int64_t lVar1;
  
  FUN_180629770();
  lVar1 = FUN_1808fc7d0(&rendering_buffer_2864_ptr);
  return (lVar1 != 0) - 1;
}



int FUN_1800435a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  
  _Mtx_init_in_situ(0x180c966f0,2,param_3,param_4,0xfffffffffffffffe);
  lVar1 = FUN_1808fc7d0(FUN_180943140);
  return (lVar1 != 0) - 1;
}



int FUN_1800435e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  
  _Mtx_init_in_situ(0x180c96740,2,param_3,param_4,0xfffffffffffffffe);
  lVar1 = FUN_1808fc7d0(FUN_180943160);
  return (lVar1 != 0) - 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180043610(void)

{
  int64_t lVar1;
  
  core_system_memory = 3;
  core_system_memory = &system_counter_6790;
  core_system_memory = &system_counter_6790;
  core_system_memory = 0;
  core_system_memory = 0;
  core_system_memory = 0;
  lVar1 = FUN_1808fc7d0(FUN_180943180);
  return (lVar1 != 0) - 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043690(void)
void FUN_180043690(void)

{
  uint64_t in_R9;
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [136];
  
  puStack_a0 = &memory_allocator_3432_ptr;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x10;
  strcpy_s(auStack_88,0x80,&memory_allocator_384_ptr,in_R9,0xfffffffffffffffe);
  core_system_memory = SystemCore_ConfigManager(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180043720(void)

{
  int64_t lVar1;
  int *piVar2;
  
  lVar1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8);
  *(uint64_t *)(lVar1 + 0x18) = &system_state_ptr;
  *(uint64_t *)(lVar1 + 0x20) = 0;
  *(int32_t *)(lVar1 + 0x28) = 0;
  *(uint64_t *)(lVar1 + 0x18) = &system_data_buffer_ptr;
  *(uint64_t *)(lVar1 + 0x30) = 0;
  *(uint64_t *)(lVar1 + 0x20) = 0;
  *(int32_t *)(lVar1 + 0x28) = 0;
  lVar1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8);
  piVar2 = *(int **)(lVar1 + 0x50);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)(lVar1 + 0x60);
  }
  else {
    if (*piVar2 != 0x1e) goto LAB_1808fd14a;
    piVar2 = (int *)malloc(0x100);
    free(0);
    if (piVar2 == (int *)0x0) {
      return 0xffffffff;
    }
    *(uint64_t *)(piVar2 + 2) = *(uint64_t *)(lVar1 + 0x50);
  }
  *piVar2 = 0;
  *(int **)(lVar1 + 0x50) = piVar2;
LAB_1808fd14a:
  *(code **)(piVar2 + (int64_t)*piVar2 * 2 + 4) = FUN_1809431a0;
  *piVar2 = *piVar2 + 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043790(void)
void FUN_180043790(void)

{
  uint64_t in_R9;
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [136];
  
  puStack_a0 = &memory_allocator_3432_ptr;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x17;
  strcpy_s(auStack_88,0x80,&ui_system_data_1640_ptr,in_R9,0xfffffffffffffffe);
  core_system_memory = SystemCore_ConfigManager(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043820(void)
void FUN_180043820(void)

{
  uint64_t in_R9;
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [136];
  
  puStack_a0 = &memory_allocator_3432_ptr;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x11;
  strcpy_s(auStack_88,0x80,&ui_system_data_1664_ptr,in_R9,0xfffffffffffffffe);
  core_system_memory = SystemCore_ConfigManager(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1800438b0(void)

{
  int64_t lVar1;
  
  core_system_memory = 3;
  core_system_memory = &system_counter_67e0;
  core_system_memory = &system_counter_67e0;
  core_system_memory = 0;
  core_system_memory = 0;
  core_system_memory = 0;
  lVar1 = FUN_1808fc7d0(FUN_180943200);
  return (lVar1 != 0) - 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180043960(void)

{
  int64_t lVar1;
  int iVar2;
  
  core_system_memory = 0x100;
  iVar2 = 0;
  do {
    FUN_180767e20(iVar2,0x4000000000000000,0xffff7fff,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xd);
  *(uint *)(core_system_buffer_memory + 0x330) = *(uint *)(core_system_buffer_memory + 0x330) | 4;
  core_system_buffer_memory = 0xffffffff;
  lVar1 = FUN_1808fc7d0(&memory_allocator_3152_ptr);
  return (lVar1 != 0) - 1;
}



int FUN_1800439c0(void)

{
  int64_t lVar1;
  
  func_0x000180741c80(0x180c0c340);
  lVar1 = FUN_1808fc7d0(&memory_allocator_3168_ptr);
  return (lVar1 != 0) - 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1800439e0(void)
void FUN_1800439e0(void)

{
  int iVar1;
  
  iVar1 = RenderingEngine_ShaderProcessor(0);
  core_system_memory = 0x180be14a8;
  if (iVar1 != 0) {
    core_system_memory = 0x180be14c0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043a10(void)
void FUN_180043a10(void)

{
  int iVar1;
  
  iVar1 = RenderingEngine_ShaderProcessor(1);
  if (iVar1 != 0) {
    core_system_memory = 0x180be15c0;
    return;
  }
  iVar1 = RenderingEngine_ShaderProcessor(0);
  core_system_memory = 0x180be14e0;
  if (iVar1 != 0) {
    core_system_memory = 0x180be1550;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043a90(void)
void FUN_180043a90(void)

{
  int iVar1;
  
  iVar1 = RenderingEngine_ShaderProcessor(0);
  core_system_memory = 0x180be1c00;
  if (iVar1 != 0) {
    core_system_memory = 0x180be1c08;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043ac0(void)
void FUN_180043ac0(void)

{
  int iVar1;
  
  iVar1 = RenderingEngine_ShaderProcessor(0);
  core_system_memory = 0x180be23a0;
  if (iVar1 != 0) {
    core_system_memory = 0x180be23c0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043af0(void)
void FUN_180043af0(void)

{
  int iVar1;
  
  iVar1 = RenderingEngine_ShaderProcessor(0);
  core_system_memory = 0x180be2ad8;
  if (iVar1 != 0) {
    core_system_memory = 0x180be2af8;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043b20(void)
void FUN_180043b20(void)

{
  int iVar1;
  
  iVar1 = RenderingEngine_ShaderProcessor(0);
  core_system_memory = 0x180be4710;
  if (iVar1 != 0) {
    core_system_memory = 0x180be4728;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043b50(void)
void FUN_180043b50(void)

{
  int iVar1;
  
  iVar1 = RenderingEngine_ShaderProcessor(1);
  if (iVar1 != 0) {
    core_system_memory = 0x180be6078;
    return;
  }
  iVar1 = RenderingEngine_ShaderProcessor(0);
  core_system_memory = 0x180be6068;
  if (iVar1 != 0) {
    core_system_memory = 0x180be6070;
  }
  return;
}



int FUN_180043ba0(void)

{
  uint64_t *puVar1;
  int64_t lVar2;
  
  puVar1 = (uint64_t *)0x180c35590;
  lVar2 = 0x10;
  do {
    func_0x000180767970(puVar1);
    *puVar1 = &processed_var_6408_ptr;
    puVar1 = puVar1 + 0x2b;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  lVar2 = FUN_1808fc7d0(&memory_allocator_3184_ptr);
  return (lVar2 != 0) - 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043c00(void)
void FUN_180043c00(void)

{
  int iVar1;
  
  iVar1 = RenderingEngine_ShaderProcessor(0);
  core_system_memory = 0x180bebac8;
  if (iVar1 != 0) {
    core_system_memory = 0x180bebad8;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043c30(void)
void FUN_180043c30(void)

{
  int iVar1;
  
  iVar1 = RenderingEngine_ShaderProcessor(3);
  if (iVar1 != 0) {
    core_system_memory = 0x180bebc10;
    return;
  }
  iVar1 = RenderingEngine_ShaderProcessor(2);
  if (iVar1 != 0) {
    core_system_memory = 0x180bebbb0;
    return;
  }
  iVar1 = RenderingEngine_ShaderProcessor(0);
  core_system_memory = 0x180bebaf0;
  if (iVar1 != 0) {
    core_system_memory = 0x180bebb50;
  }
  return;
}



int FUN_180043cc0(void)

{
  int64_t lVar1;
  
  FUN_1808dbcd0(0x180c4f510);
  lVar1 = FUN_1808fc7d0(&memory_allocator_3344_ptr);
  return (lVar1 != 0) - 1;
}



int FUN_180043ce0(void)

{
  int64_t lVar1;
  
  _Mtx_init_in_situ(0x180c82170,2);
  lVar1 = FUN_1808fc7d0(&memory_allocator_3360_ptr);
  return (lVar1 != 0) - 1;
}



void WotsMainSDLL(uint64_t param_1)

{
  uint64_t auStackX_18 [2];
  
                    // 0x43d20  31  WotsMainSDLL




// 函数: void FUN_180043d40(int64_t param_1)
void FUN_180043d40(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  FUN_180046e20();
  core_system_data_memory = core_system_data_memory + 1;
  FUN_180050b00();
  if (core_system_memory != (int64_t *)0x0) {
    if ((void *)*core_system_memory == &processed_var_8768_ptr) {
      cVar3 = (char)core_system_memory[2] != '\0';
    }
    else {
      cVar3 = (**(code **)((void *)*core_system_memory + 0x68))();
    }
    if (cVar3 == '\0') goto LAB_180043e47;
  }
  plVar2 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0xc0,8,3,uVar4);
  plStackX_20 = plVar2;
  UltraHighFreq_PerformanceMonitor1(plVar2);
  *plVar2 = (int64_t)&processed_var_8768_ptr;
  plVar2[3] = -4;
  pplStackX_10 = (int64_t **)plVar2;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  pplStackX_10 = (int64_t **)core_system_memory;
  if (core_system_memory != (int64_t *)0x0) {
    lVar1 = *core_system_memory;
    core_system_memory = plVar2;
    (**(code **)(lVar1 + 0x38))();
    plVar2 = core_system_memory;
  }
  core_system_memory = plVar2;
  if ((void *)*core_system_memory == &processed_var_8768_ptr) {
    if (core_system_data_memory != 0) {
      FUN_18006e990();
    }
  }
  else {
    (**(code **)((void *)*core_system_memory + 0x60))();
  }
  plVar2 = core_system_memory;
  plStackX_18 = core_system_memory;
  core_system_memory = (int64_t *)0x0;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
LAB_180043e47:
  FUN_1800466d0(*(uint64_t *)(param_1 + 0x20));
  if (*(char *)(system_main_module_state + 0x1ed) != '\0') {
    plVar2 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,3);
    *plVar2 = (int64_t)&system_handler1_ptr;
    *plVar2 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar2 + 1) = 0;
    *plVar2 = (int64_t)&ui_system_data_1000_ptr;
    LOCK();
    *(int8_t *)(plVar2 + 2) = 0;
    UNLOCK();
    plVar2[3] = -1;
    *plVar2 = (int64_t)&processed_var_864_ptr;
    plVar2[4] = 0x180c91060;
    plStackX_20 = plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
    uVar4 = system_context_ptr;
    pplStackX_10 = &plStackX_8;
    plStackX_8 = plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
    FUN_18005e300(uVar4,&plStackX_8);
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  return;
}



uint64_t *
FUN_180043f30(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &processed_var_864_ptr;
  *param_1 = &ui_system_data_1000_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}







// 函数: void FUN_180043f90(void)
void FUN_180043f90(void)

{
                    // WARNING: Subroutine does not return
  SystemEventProcessor();
}







// 函数: void RenderingSystem_DataValidator(uint64_t *param_1)
void RenderingSystem_DataValidator(uint64_t *param_1)

{
  *param_1 = &system_state_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180044a50(void)
void FUN_180044a50(void)

{
  uint64_t *puVar1;
  code *pcVar2;
  int64_t lVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int8_t auStack_248 [32];
  void *puStack_228;
  void *puStack_220;
  void *puStack_218;
  int64_t *plStack_208;
  int32_t uStack_200;
  void *puStack_1f8;
  void *puStack_1f0;
  int32_t uStack_1e8;
  uint64_t uStack_1e0;
  void *puStack_1d8;
  void *puStack_1d0;
  int32_t uStack_1c8;
  uint64_t uStack_1c0;
  void *puStack_1b8;
  int64_t lStack_1b0;
  int32_t uStack_1a0;
  uint64_t uStack_198;
  int64_t *plStack_190;
  void *puStack_188;
  void *puStack_180;
  int32_t uStack_178;
  uint8_t auStack_170 [32];
  int64_t **applStack_150 [3];
  int8_t auStack_138 [272];
  uint64_t uStack_28;
  
  uStack_198 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_248;
  uStack_200 = 0;
  if (*(char *)(system_message_context + 0x18) == '\0') {
    FUN_18004b560(&puStack_1b8);
    (**(code **)(**(int64_t **)(system_main_module_state + 0x2b0) + 0x98))
              (*(int64_t **)(system_main_module_state + 0x2b0),&puStack_1b8);
    FUN_180061380();
    lVar3 = system_message_context;
    uVar5 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3);
    plVar6 = (int64_t *)FUN_1800636f0(uVar5,8,lVar3);
    plStack_190 = plVar6;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    *(int32_t *)(plVar6 + 0xd) = 0xbb80073;
    puVar1 = *(uint64_t **)(lVar3 + 400);
    pcVar2 = *(code **)*puVar1;
    applStack_150[0] = &plStack_208;
    plStack_208 = plVar6;
    (**(code **)(*plVar6 + 0x28))(plVar6);
    (*pcVar2)(puVar1,&plStack_208);
    (**(code **)(*plVar6 + 0x38))(plVar6);
    FUN_1800624c0();
    puStack_1d8 = &system_data_buffer_ptr;
    uStack_1c0 = 0;
    puStack_1d0 = (void *)0x0;
    uStack_1c8 = 0;
    puStack_1f8 = &system_data_buffer_ptr;
    uStack_1e0 = 0;
    puStack_1f0 = (void *)0x0;
    uStack_1e8 = 0;
    plStack_208 = (int64_t *)CONCAT44(plStack_208._4_4_,0x10);
    iVar4 = GetComputerNameA(applStack_150,&plStack_208);
    if (iVar4 == 0) {
      FUN_180627160(&rendering_buffer_2736_ptr);
    }
    else {
      if (0xf < ((uint64_t)plStack_208 & 0xffffffff)) goto LAB_180044db8;
      *(int8_t *)((int64_t)applStack_150 + ((uint64_t)plStack_208 & 0xffffffff)) = 0;
      (**(code **)(puStack_1d8 + 0x10))(&puStack_1d8,applStack_150);
    }
    plStack_208 = (int64_t *)CONCAT44(plStack_208._4_4_,0x101);
    iVar4 = GetUserNameA(auStack_138,&plStack_208);
    if (iVar4 == 0) {
      FUN_180627160(&rendering_buffer_2776_ptr);
    }
    else {
      if (0x100 < ((uint64_t)plStack_208 & 0xffffffff)) {
        UltraHighFreq_ThreadManager1();
LAB_180044db8:
        UltraHighFreq_ThreadManager1();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      auStack_138[(uint64_t)plStack_208 & 0xffffffff] = 0;
      (**(code **)(puStack_1f8 + 0x10))(&puStack_1f8,auStack_138);
    }
    puStack_218 = &system_buffer_ptr;
    if (puStack_1f0 != (void *)0x0) {
      puStack_218 = puStack_1f0;
    }
    puStack_220 = &system_buffer_ptr;
    if (puStack_1d0 != (void *)0x0) {
      puStack_220 = puStack_1d0;
    }
    puStack_228 = &rendering_buffer_208_ptr;
    SystemConfigurationManager(system_message_context,5,0xffffffffffffffff,4);
    puStack_188 = &processed_var_672_ptr;
    puStack_180 = auStack_170;
    uStack_178 = 0;
    auStack_170[0] = 0;
    uStack_200 = 2;
    FUN_18004b860(&puStack_188,&processed_var_4576_ptr,0x130a7);
    puStack_220 = &system_buffer_ptr;
    if (puStack_180 != (void *)0x0) {
      puStack_220 = puStack_180;
    }
    puStack_228 = &rendering_buffer_232_ptr;
    SystemConfigurationManager(system_message_context,5,0xffffffffffffffff,4);
    uStack_200 = 0;
    puStack_188 = &system_state_ptr;
    puStack_1f8 = &system_data_buffer_ptr;
    if (puStack_1f0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    puStack_1f0 = (void *)0x0;
    uStack_1e0 = uStack_1e0 & 0xffffffff00000000;
    puStack_1f8 = &system_state_ptr;
    puStack_1d8 = &system_data_buffer_ptr;
    if (puStack_1d0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    puStack_1d0 = (void *)0x0;
    uStack_1c0 = uStack_1c0 & 0xffffffff00000000;
    puStack_1d8 = &system_state_ptr;
    puStack_1b8 = &system_data_buffer_ptr;
    if (lStack_1b0 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    lStack_1b0 = 0;
    uStack_1a0 = 0;
    puStack_1b8 = &system_state_ptr;
  }
  uStack_200 = 0;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_248);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180044dc0(uint64_t param_1,int64_t param_2)
void FUN_180044dc0(uint64_t param_1,int64_t param_2)

{
  int64_t **pplVar1;
  int iVar2;
  uint uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int8_t *puVar11;
  char *pcVar12;
  void *puVar13;
  uint64_t uVar14;
  uint uVar15;
  char cVar16;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  int64_t lStackX_20;
  void *puStack_b8;
  void *puStack_b0;
  int32_t uStack_a0;
  void *puStack_98;
  int64_t lStack_90;
  uint uStack_88;
  void *puStack_78;
  void *puStack_70;
  int32_t uStack_60;
  uint64_t uStack_58;
  int64_t **pplStack_50;
  int64_t *plStack_48;
  
  uStack_58 = 0xfffffffffffffffe;
  uVar5 = FUN_180043f90();
  FUN_180629770();
  plVar6 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x68,8,3);
  pplVar1 = (int64_t **)(plVar6 + 1);
  plStackX_10 = plVar6;
  pplStackX_18 = pplVar1;
  _Mtx_init_in_situ(pplVar1,2);
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  *(int16_t *)plVar6 = 0;
  system_heap_base = plVar6;
  if ((char)*plVar6 != '\0') goto LAB_180044faf;
  pplStack_50 = pplVar1;
  iVar2 = _Mtx_lock(pplVar1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  SymSetOptions(0x2017);
  FUN_180629090(&puStack_b8);
  puVar13 = &system_buffer_ptr;
  if (puStack_b0 != (void *)0x0) {
    puVar13 = puStack_b0;
  }
  SymSetSearchPath(core_system_memory,puVar13);
  lVar7 = plVar6[0xb];
  if (lVar7 == 0) {
    lVar7 = LoadLibraryA(&memory_allocator_3528_ptr);
    plVar6[0xb] = lVar7;
    if (lVar7 != 0) goto LAB_180044ee3;
    puStack_b8 = &system_data_buffer_ptr;
    if (puStack_b0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
  }
  else {
LAB_180044ee3:
    if (plVar6[0xc] == 0) {
      lVar7 = GetProcAddress(lVar7,&system_param1_ptr);
      plVar6[0xc] = lVar7;
      if (lVar7 == 0) {
        puStack_b8 = &system_data_buffer_ptr;
        if (puStack_b0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        goto LAB_180044f8f;
      }
    }
    puVar13 = &system_buffer_ptr;
    if (puStack_b0 != (void *)0x0) {
      puVar13 = puStack_b0;
    }
    iVar2 = SymInitialize(core_system_memory,puVar13,1);
    if (iVar2 == 0) {
      puStack_b8 = &system_data_buffer_ptr;
      if (puStack_b0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
    }
    else {
      *(char *)plVar6 = '\x01';
      puStack_b8 = &system_data_buffer_ptr;
      if (puStack_b0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
    }
  }
LAB_180044f8f:
  uStack_a0 = 0;
  puStack_b0 = (void *)0x0;
  puStack_b8 = &system_state_ptr;
  iVar2 = _Mtx_unlock(pplVar1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
LAB_180044faf:
  puVar8 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,8,8,3);
  *puVar8 = 0;
  puVar9 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,8,8,3);
  *puVar8 = &memory_allocator_384_ptr;
  *puVar9 = &processed_var_424_ptr;
  puVar10 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
  puVar11 = (int8_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,1,1,3);
  *puVar11 = 0;
  puVar10[2] = puVar11;
  core_system_data_memory = puVar10;
  *puVar10 = puVar9;
  puVar10[1] = puVar8;
  puVar10[3] = uVar5;
  uVar5 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x198,8,3);
  core_system_data_memory = FUN_18024e5c0(uVar5);
  uVar5 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xa8,8,3);
  core_system_data_memory = FUN_180637560(uVar5);
  CoreMemoryPoolReallocator(system_memory_pool_ptr,1,1,3);
  iVar2 = QueryPerformanceFrequency(&pplStackX_18);
  if (iVar2 == 0) {
    FUN_180626ee0(&rendering_buffer_2608_ptr);
  }
  core_system_data_memory = 1.0 / (double)(int64_t)pplStackX_18;
  timeBeginPeriod(1);
  QueryPerformanceCounter(&lStackX_20);
  if (system_counter_0102 != '\0') {
    core_system_data_memory = core_system_data_memory + (lStackX_20 - core_system_data_memory);
  }
  core_system_data_memory = 0;
  core_system_data_memory = lStackX_20;




// 函数: void FUN_180045380(void)
void FUN_180045380(void)

{
  uint64_t uVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t in_R9;
  void *puStack_68;
  uint64_t *puStack_60;
  int32_t uStack_58;
  uint64_t uStack_50;
  
  puStack_68 = &system_data_buffer_ptr;
  uStack_50 = 0;
  puStack_60 = (uint64_t *)0x0;
  uStack_58 = 0;
  puVar3 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,in_R9,0xfffffffffffffffe);
  *(int8_t *)puVar3 = 0;
  puStack_60 = puVar3;
  uVar2 = CoreMemoryPoolCleaner(puVar3);
  uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
  *puVar3 = 0x72657472617453;
  uStack_58 = 7;
  uVar1 = GetCurrentThread();
  FUN_180623fd0(uVar1,&puStack_68);
  puStack_68 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180045580(void)

{
  uint64_t *puVar1;
  code *pcVar2;
  int64_t **pplVar3;
  int32_t uVar4;
  int iVar5;
  int64_t ****pppplVar6;
  uint64_t uVar7;
  int64_t ****pppplVar8;
  int64_t ***ppplVar9;
  int64_t lVar10;
  char cVar11;
  int64_t ****pppplStackX_8;
  int64_t ***ppplStackX_10;
  int64_t **pplStackX_18;
  int64_t ***ppplStackX_20;
  uint64_t uVar12;
  int64_t *****ppppplVar13;
  int64_t ****pppplVar14;
  
  uVar12 = 0xfffffffffffffffe;
  if (core_system_memory != (uint64_t *)0x0) {
    while( true ) {
      if ((void *)*core_system_memory == &processed_var_8768_ptr) {
        cVar11 = *(char *)(core_system_memory + 2) != '\0';
      }
      else {
        cVar11 = (**(code **)((void *)*core_system_memory + 0x68))();
      }
      if (cVar11 != '\0') break;
      Sleep(1);
    }
  }
  pppplVar6 = (int64_t ****)CoreMemoryPoolReallocator(system_memory_pool_ptr,0xc0,8,3,uVar12);
  pppplStackX_8 = pppplVar6;
  UltraHighFreq_PerformanceMonitor1(pppplVar6);
  *pppplVar6 = (int64_t ***)&memory_allocator_3368_ptr;
  ppplStackX_20 = (int64_t ***)pppplVar6;
  (*(code *)(*pppplVar6)[5])(pppplVar6);
  lVar10 = system_context_ptr;
  ppppplVar13 = &pppplStackX_8;
  pppplStackX_8 = pppplVar6;
  (*(code *)(*pppplVar6)[5])(pppplVar6);
  FUN_18005e300(lVar10,&pppplStackX_8);
  while( true ) {
    if (*pppplVar6 == (int64_t ***)&memory_allocator_3368_ptr) {
      cVar11 = *(char *)(pppplVar6 + 2) != '\0';
    }
    else {
      cVar11 = (*(code *)(*pppplVar6)[0xd])(pppplVar6);
    }
    if (cVar11 != '\0') break;
    Sleep(1);
  }
  FUN_1800623e0();
  lVar10 = system_message_context;
  uVar7 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3);
  pppplVar8 = (int64_t ****)FUN_1800636f0(uVar7,2,lVar10);
  pppplVar14 = pppplVar8;
  if (pppplVar8 != (int64_t ****)0x0) {
    (*(code *)(*pppplVar8)[5])(pppplVar8);
  }
  puVar1 = *(uint64_t **)(lVar10 + 400);
  pcVar2 = *(code **)*puVar1;
  pppplStackX_8 = &ppplStackX_10;
  ppplStackX_10 = (int64_t ***)pppplVar8;
  if (pppplVar8 != (int64_t ****)0x0) {
    (*(code *)(*pppplVar8)[5])(pppplVar8);
  }
  (*pcVar2)(puVar1,&ppplStackX_10);
  uVar12 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3,uVar12,ppppplVar13,pppplVar14);
  ppplVar9 = (int64_t ***)FUN_1800636f0(uVar12,0,lVar10);
  if (ppplVar9 != (int64_t ***)0x0) {
    (*(code *)(*ppplVar9)[5])(ppplVar9);
  }
  puVar1 = *(uint64_t **)(lVar10 + 400);
  pcVar2 = *(code **)*puVar1;
  pppplStackX_8 = (int64_t ****)&pplStackX_18;
  pplStackX_18 = (int64_t **)ppplVar9;
  if (ppplVar9 != (int64_t ***)0x0) {
    (*(code *)(*ppplVar9)[5])(ppplVar9);
  }
  (*pcVar2)(puVar1,&pplStackX_18);
  CoreEngine_SystemInitializer(*(uint64_t *)(lVar10 + 400));
  if (ppplVar9 != (int64_t ***)0x0) {
    (*(code *)(*ppplVar9)[7])(ppplVar9);
  }
  if (pppplVar8 != (int64_t ****)0x0) {
    (*(code *)(*pppplVar8)[7])(pppplVar8);
  }
  pppplVar14 = core_system_data_memory;
  *(int8_t *)(core_system_data_memory[1] + 0x80) = 1;
  while( true ) {
    pplVar3 = *pppplVar14[1];
    if (pplVar3 == (int64_t **)&memory_allocator_3624_ptr) {
      cVar11 = *(char *)(pppplVar14[1] + 2) != '\0';
    }
    else {
      cVar11 = (*(code *)pplVar3[0xd])();
    }
    pppplVar8 = core_system_data_memory;
    if (cVar11 != '\0') break;
    Sleep(1);
  }
  pppplStackX_8 = core_system_data_memory;
  if (core_system_data_memory != (int64_t ****)0x0) {
    lVar10 = __RTCastToVoid(core_system_data_memory);
    *pppplVar8 = (int64_t ***)&rendering_buffer_2208_ptr;
    PostQueuedCompletionStatus(pppplVar8[0x42686],0,0xffffffffffffffff);
    CloseHandle(pppplVar8[0x42686]);
    ppplStackX_10 = (int64_t ***)(pppplVar8 + 0x42687);
    if ((int64_t ***)*ppplStackX_10 != (int64_t ***)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    ppplStackX_10 = (int64_t ***)(pppplVar8 + 0x4267c);
    _Mtx_destroy_in_situ();
    ppplStackX_10 = (int64_t ***)(pppplVar8 + 0x40070);
    _Mtx_destroy_in_situ();
    FUN_18006bfe0(pppplVar8);
    if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar10);
    }
  }
  pppplVar14 = core_system_data_memory;
  lVar10 = system_context_ptr;
  core_system_data_memory = (int64_t ****)0x0;
  if (system_context_ptr != 0) {
    FUN_18005d790(system_context_ptr);
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(lVar10);
  }
  system_context_ptr = 0;
  *(int32_t *)(core_system_data_memory + 0x2d) = 2;
  pppplStackX_8 = pppplVar14;
  if (pppplVar14 == (int64_t ****)0x0) {
    core_system_data_memory = (int64_t ****)0x0;
    WaitForSingleObject(core_system_memory,0xffffffff);
    do {
      iVar5 = ReleaseSemaphore(core_system_memory,1);
    } while (iVar5 == 0);
    uVar12 = __acrt_iob_func(1);
    fflush(uVar12);
    uVar12 = __acrt_iob_func(2);
    fflush(uVar12);
    uVar4 = core_system_data_memory;
    (*(code *)(*pppplVar6)[7])(pppplVar6);
    return uVar4;
  }
  FUN_18006ef20(pppplVar14 + 0x1e);
  FUN_18006ef20(pppplVar14 + 0xf);
  FUN_18006ef20(pppplVar14);
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(pppplVar14);
}



void WotsMain(uint64_t param_1)

{
  uint64_t auStackX_18 [2];
  
                    // 0x45a00  27  WotsMain




// 函数: void DataCacheManager(int64_t *param_1)
void DataCacheManager(int64_t *param_1)

{
  if ((int64_t *)*param_1 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_1 + 0x38))();
  }
  return;
}







// 函数: void FUN_180045b20(int64_t param_1,int64_t param_2)
void FUN_180045b20(int64_t param_1,int64_t param_2)

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
  if ((int)lVar1 < 0x1000) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x000180045b59. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(param_1 + 8),0x1000);
    return;
  }
  SystemOptimizationProcessor(&processed_var_616_ptr,0x1000,param_2);
  *(int32_t *)(param_1 + 0x10) = 0;
  **(int8_t **)(param_1 + 8) = 0;
  return;
}







// 函数: void FUN_180045ba0(int64_t param_1,uint64_t param_2,int param_3)
void FUN_180045ba0(int64_t param_1,uint64_t param_2,int param_3)

{
  if (param_3 + 1 < 0x1000) {
                    // WARNING: Subroutine does not return
    memcpy(*(int8_t **)(param_1 + 8),param_2,(int64_t)param_3);
  }
  **(int8_t **)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  return;
}







// 函数: void FUN_180045bc1(void)
void FUN_180045bc1(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}







// 函数: void FUN_180045be6(int8_t *param_1)
void FUN_180045be6(int8_t *param_1)

{
  int64_t unaff_RDI;
  
  *param_1 = 0;
  *(int32_t *)(unaff_RDI + 0x10) = 0;
  return;
}







// 函数: void FUN_180045c00(void)
void FUN_180045c00(void)

{
                    // WARNING: Subroutine does not return
  SystemEventProcessor();
}



uint64_t *
FUN_180045d80(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &system_state_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x1018,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t * FUN_180045dc0(uint64_t *param_1,uint param_2)

{
  *param_1 = &rendering_buffer_2208_ptr;
  PostQueuedCompletionStatus(param_1[0x42686],0,0xffffffffffffffff,0,0xfffffffffffffffe);
  CloseHandle(param_1[0x42686]);
  if (param_1[0x42687] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  FUN_18006bfe0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x213458);
  }
  return param_1;
}



void _guard_check_icall(void)

{
  return;
}



uint64_t *
FUN_180045ea0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &system_state_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x418,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}







// 函数: void FUN_180045ee0(int64_t param_1,int64_t param_2)
void FUN_180045ee0(int64_t param_1,int64_t param_2)

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
  if ((int)lVar1 < 0x400) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x000180045f19. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(param_1 + 8),0x400);
    return;
  }
  SystemOptimizationProcessor(&processed_var_616_ptr,0x400,param_2);
  *(int32_t *)(param_1 + 0x10) = 0;
  **(int8_t **)(param_1 + 8) = 0;
  return;
}







