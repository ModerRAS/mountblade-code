#define SystemInitializer System_Initializer2  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_14_part021.c - 26 个函数

// 函数: void FUN_1808fbe1b(void)
void FUN_1808fbe1b(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1808fbe31(void)

{
  uint64_t uVar1;
  int iVar2;
  void *puVar3;
  int64_t unaff_R12;
  int64_t unaff_R15;
  
  iVar2 = 1;
  uVar1 = system_system_config;
  while( true ) {
    system_system_config = uVar1;
    if (unaff_R15 == 0) {
      FUN_1808fba20();
    }
    else {
      FUN_1808fba20();
    }
    system_system_config = _wfsopen();
    if (system_system_config != 0) break;
    iVar2 = iVar2 + 1;
    uVar1 = 0;
    if (8 < iVar2) {
      puVar3 = &unknown_var_9072_ptr;
      uVar1 = 0xef;
LAB_1808fbebe:
      FUN_1808fb790(&unknown_var_8640_ptr,uVar1,&unknown_var_8608_ptr,puVar3);
      free();
      free();
      return system_system_config != unaff_R12;
    }
  }
  puVar3 = &unknown_var_9024_ptr;
  uVar1 = 0xeb;
  goto LAB_1808fbebe;
}



int8_t FUN_1808fbef2(void)

{
  char unaff_R12B;
  



// 函数: void FUN_1808fbf50(int64_t param_1,uint64_t param_2)
void FUN_1808fbf50(int64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  int8_t auStack_248 [32];
  int8_t auStack_228 [528];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_248;
  if (param_1 != 0) {
    uVar1 = _set_invalid_parameter_handler(&unknown_var_1520_ptr);



// 函数: void FUN_1808fbf85(void)
void FUN_1808fbf85(void)

{
  uint64_t uVar1;
  int8_t auStackX_20 [8];
  uint64_t in_stack_00000230;
  
  uVar1 = _set_invalid_parameter_handler();



// 函数: void FUN_1808fbff4(void)
void FUN_1808fbff4(void)

{
  uint64_t in_stack_00000230;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000230 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void SystemSecurityChecker(int64_t param_1)
void SystemSecurityChecker(int64_t param_1)

{
  code *pcVar1;
  int iVar2;
  int8_t *puVar3;
  int8_t auStack_38 [8];
  int8_t auStack_30 [48];
  
  if ((param_1 == GET_SECURITY_COOKIE()) && ((short)((uint64_t)param_1 >> 0x30) == 0)) {
    return;
  }
  puVar3 = auStack_38;
  iVar2 = IsProcessorFeaturePresent(0x17);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(uint64_t *)(puVar3 + -8) = 0x1808fcd1e;
  FUN_1808fcee8(0x180c82300);
  system_system_data_config = *(uint64_t *)(puVar3 + 0x38);
  system_system_data_config = puVar3 + 0x40;
  system_system_data_config = *(uint64_t *)(puVar3 + 0x40);
  system_system_data_config = 0xc0000409;
  system_system_data_config = 1;
  system_system_data_config = 1;
  uRam0000000180c82280 = 2;
  *(int64_t *)(puVar3 + 0x20) = GET_SECURITY_COOKIE();
  *(uint64_t *)(puVar3 + 0x28) = system_system_control_config;
  *(uint64_t *)(puVar3 + -8) = 0x1808fcdc0;
  system_system_data_config = system_system_data_config;
  FUN_1808fccc0(&unknown_var_9672_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808fc074(uint64_t param_1,int param_2,int64_t param_3)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  int8_t uVar5;
  int iVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  uint8_t uVar9;
  
  if (param_2 == 0) {
    uVar9 = (uint8_t)((uint64_t)param_1 >> 8);
    if (system_system_data_config < 1) {
      uVar8 = 0;
    }
    else {
      system_system_data_config = system_system_data_config + -1;
      uVar5 = FUN_1808fc454();
      if (system_system_data_config != 2) {
        FUN_1808fd610(7);
        pcVar1 = (code *)swi(3);
        uVar8 = (*pcVar1)();
        return uVar8;
      }
      FUN_1808fc57c();
      func_0x0001808fd3e0();
      FUN_1808fd798();
      system_system_data_config = 0;
      FUN_1808fc5ac();
      FUN_1808fc780(CONCAT71(uVar9,uVar5));
      cVar4 = FUN_1808fc7a4(param_3 != 0,0);
      uVar8 = (uint64_t)(cVar4 != '\0');
    }
    return uVar8;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      bVar3 = FUN_1808fc4dc();
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      bVar3 = FUN_1808fc504();
    }
    return (uint64_t)bVar3;
  }
  cVar4 = FUN_1808fc5c0(0);
  if (cVar4 != '\0') {
    uVar5 = FUN_1808fc454();
    bVar2 = true;
    if (system_system_data_config != 0) {
      FUN_1808fd610(7);
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return uVar8;
    }
    system_system_data_config = 1;
    cVar4 = FUN_1808fc4c4();
    if (cVar4 != '\0') {
      FUN_1808fd75c();
      func_0x0001808fd3d0();
      FUN_1808fd5e4();
      iVar6 = _initterm_e(&unknown_var_6104_ptr,&unknown_var_6120_ptr);
      if ((iVar6 == 0) && (cVar4 = FUN_1808fc490(), cVar4 != '\0')) {
        _initterm(&system_callback2_ptr,&unknown_var_6072_ptr);
        system_system_data_config = 2;
        bVar2 = false;
      }
    }
    FUN_1808fc780(uVar5);
    if (!bVar2) {
      plVar7 = (int64_t *)func_0x0001808fd600();
      if ((*plVar7 != 0) && (cVar4 = FUN_1808fc6e4(plVar7), cVar4 != '\0')) {
        _guard_dispatch_icall(param_1,2,param_3);
      }
      system_system_data_config = system_system_data_config + 1;
      return 1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808fc0c4(uint64_t param_1,uint64_t param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int8_t uVar4;
  int iVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  
  cVar3 = FUN_1808fc5c0(0);
  if (cVar3 != '\0') {
    uVar4 = FUN_1808fc454();
    bVar2 = true;
    if (system_system_data_config != 0) {
      FUN_1808fd610(7);
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return uVar7;
    }
    system_system_data_config = 1;
    cVar3 = FUN_1808fc4c4();
    if (cVar3 != '\0') {
      FUN_1808fd75c();
      func_0x0001808fd3d0();
      FUN_1808fd5e4();
      iVar5 = _initterm_e(&unknown_var_6104_ptr,&unknown_var_6120_ptr);
      if ((iVar5 == 0) && (cVar3 = FUN_1808fc490(), cVar3 != '\0')) {
        _initterm(&system_callback2_ptr,&unknown_var_6072_ptr);
        system_system_data_config = 2;
        bVar2 = false;
      }
    }
    FUN_1808fc780(uVar4);
    if (!bVar2) {
      plVar6 = (int64_t *)func_0x0001808fd600();
      if ((*plVar6 != 0) && (cVar3 = FUN_1808fc6e4(plVar6), cVar3 != '\0')) {
        _guard_dispatch_icall(param_1,2,param_2);
      }
      system_system_data_config = system_system_data_config + 1;
      return 1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808fc1e0(int8_t param_1)

{
  code *pcVar1;
  int8_t uVar2;
  char cVar3;
  uint64_t uVar4;
  
  if (system_system_data_config < 1) {
    uVar4 = 0;
  }
  else {
    system_system_data_config = system_system_data_config + -1;
    uVar2 = FUN_1808fc454();
    if (system_system_data_config != 2) {
      FUN_1808fd610(7);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    FUN_1808fc57c();
    func_0x0001808fd3e0();
    FUN_1808fd798();
    system_system_data_config = 0;
    FUN_1808fc5ac();
    FUN_1808fc780(uVar2);
    cVar3 = FUN_1808fc7a4(param_1,0);
    uVar4 = (uint64_t)(cVar3 != '\0');
  }
  return uVar4;
}



// WARNING: Removing unreachable block (ram,0x0001808fc334)
// WARNING: Removing unreachable block (ram,0x0001808fc2c3)
// WARNING: Removing unreachable block (ram,0x0001808fc377)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808fc270(uint64_t param_1,int param_2,uint64_t param_3)

{
  int iVar1;
  
  if ((param_2 == 0) && (system_system_data_config < 1)) {
    iVar1 = 0;
  }
  else if ((1 < param_2 - 1U) || (iVar1 = FUN_1808fc074(param_1,param_2,param_3), iVar1 != 0)) {
    iVar1 = FUN_1808fd5c0(param_1,param_2,param_3);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_1808fd5c0(param_1,0,param_3);
      FUN_1808fc074(param_1,0,param_3);
    }
    if (((param_2 == 0) || (param_2 == 3)) &&
       (iVar1 = FUN_1808fc074(param_1,param_2,param_3), iVar1 != 0)) {
      iVar1 = 1;
    }
  }
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x0001808fc334)
// WARNING: Removing unreachable block (ram,0x0001808fc2c3)
// WARNING: Removing unreachable block (ram,0x0001808fc377)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int entry(uint64_t param_1,int param_2,uint64_t param_3)

{
  int iVar1;
  
  if (param_2 == 1) {
    FUN_1808fd514();
  }
  if ((param_2 == 0) && (system_system_data_config < 1)) {
    iVar1 = 0;
  }
  else if ((1 < param_2 - 1U) || (iVar1 = FUN_1808fc074(param_1,param_2,param_3), iVar1 != 0)) {
    iVar1 = FUN_1808fd5c0(param_1,param_2,param_3);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_1808fd5c0(param_1,0,param_3);
      FUN_1808fc074(param_1,0,param_3);
    }
    if (((param_2 == 0) || (param_2 == 3)) &&
       (iVar1 = FUN_1808fc074(param_1,param_2,param_3), iVar1 != 0)) {
      iVar1 = 1;
    }
  }
  return iVar1;
}



uint64_t * FUN_1808fc3e4(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_9424_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18);
  }
  return param_1;
}



void free(void)

{
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free();
  return;
}






// 函数: void FUN_1808fc418(int64_t param_1)
void FUN_1808fc418(int64_t param_1)

{
  code *pcVar1;
  int64_t lVar2;
  int iVar3;
  
  do {
    lVar2 = malloc(param_1);
    if (lVar2 != 0) {
      return;
    }
    iVar3 = _callnewh(param_1);
  } while (iVar3 != 0);
  if (param_1 == -1) {
    FUN_1808fd8b4();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_1808fd894();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808fc454(void)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  uint64_t uVar4;
  bool bVar5;
  
  iVar2 = func_0x0001808fd8d4();
  if (iVar2 == 0) {
LAB_1808fc482:
    uVar4 = 0;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar5 = system_system_data_config == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar5) {
        pvVar3 = system_system_data_config;
        pvVar1 = system_system_data_config;
      }
      system_system_data_config = pvVar1;
      UNLOCK();
      if (bVar5) goto LAB_1808fc482;
    } while (StackBase != pvVar3);
    uVar4 = 1;
  }
  return uVar4;
}



int32_t FUN_1808fc490(void)

{
  int iVar1;
  int32_t uVar2;
  
  iVar1 = func_0x0001808fd8d4();
  if (iVar1 == 0) {
    uVar2 = func_0x000180175010();
    iVar1 = _configure_narrow_argv(uVar2);
    if (iVar1 != 0) {
      return 0;
    }
    _initialize_narrow_environment();
  }
  else {
    FUN_1808fd254();
  }
  return 1;
}



bool FUN_1808fc4c4(void)

{
  char cVar1;
  
  cVar1 = FUN_1808fc60c(0);
  return cVar1 != '\0';
}



int8_t FUN_1808fc4dc(void)

{
  char cVar1;
  
  cVar1 = func_0x0001800467e0();
  if (cVar1 != '\0') {
    cVar1 = func_0x0001800467e0();
    if (cVar1 != '\0') {
      return 1;
    }
    func_0x0001800467e0();
  }
  return 0;
}



int8_t FUN_1808fc504(void)

{
  func_0x0001800467e0();
  func_0x0001800467e0();
  return 1;
}






// 函数: void FUN_1808fc51c(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
void FUN_1808fc51c(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,uint64_t param_6)

{
  int iVar1;
  
  iVar1 = func_0x0001808fd8d4();
  if ((iVar1 == 0) && (param_2 == 1)) {
    _guard_dispatch_icall(param_1,0,param_3);
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffd1f. Too many branches
                    // WARNING: Treating indirect jump as call
  _seh_filter_dll(param_5,param_6);
  return;
}






// 函数: void FUN_1808fc57c(void)
void FUN_1808fc57c(void)

{
  int iVar1;
  
  iVar1 = func_0x0001808fd8d4();
  if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x0001808ffd3d. Too many branches
                    // WARNING: Treating indirect jump as call
    _execute_onexit_table(&system_config_21e0);
    return;
  }
  iVar1 = func_0x000180069ee0();
  if (iVar1 == 0) {
    _cexit();
  }
  return;
}



// WARNING: Possible PIC construction at 0x0001808fc5b2: Changing call to branch
// WARNING: Removing unreachable block (ram,0x0001808fc5b7)

int8_t FUN_1808fc5ac(void)

{
  return 1;
}



uint64_t FUN_1808fc5c0(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {



// 函数: void FUN_1808fc780(char param_1)
void FUN_1808fc780(char param_1)

{
  int iVar1;
  
  iVar1 = func_0x0001808fd8d4();
  if ((iVar1 != 0) && (param_1 == '\0')) {
    LOCK();
    system_system_data_config = 0;
    UNLOCK();
  }
  return;
}



int8_t FUN_1808fc7a4(int8_t param_1,char param_2)

{
  if ((system_config_21d8 == '\0') || (param_2 == '\0')) {
    func_0x0001800467e0(param_1);
    func_0x0001800467e0(param_1);
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808fc7d0(uint64_t param_1)

{
  int iVar1;
  byte bVar2;
  uint64_t uVar3;
  
  bVar2 = (byte)GET_SECURITY_COOKIE() & 0x3f;
  if (((GET_SECURITY_COOKIE() ^ system_system_data_config) >> bVar2 |
      (GET_SECURITY_COOKIE() ^ system_system_data_config) << 0x40 - bVar2) == 0xffffffffffffffff) {
    iVar1 = _crt_atexit(param_1);
  }
  else {
    iVar1 = _register_onexit_function(&system_config_21e0,param_1);
  }
  uVar3 = 0;
  if (iVar1 == 0) {
    uVar3 = param_1;
  }
  return uVar3;
}



int FUN_1808fc820(void)

{
  int64_t lVar1;
  
  lVar1 = FUN_1808fc7d0();
  return (lVar1 != 0) - 1;
}






// 函数: void FUN_1808fc838(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_1808fc838(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  
  for (lVar1 = 0; lVar1 != param_3; lVar1 = lVar1 + 1) {
    _guard_dispatch_icall(param_1);
    param_1 = param_1 + param_2;
  }
  return;
}






// 函数: void FUN_1808fc8a8(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_1808fc8a8(int64_t param_1,int64_t param_2,int64_t param_3)

{
  param_1 = param_2 * param_3 + param_1;
  while( true ) {
    if (param_3 == 0) break;
    param_1 = param_1 - param_2;
    _guard_dispatch_icall(param_1);
    param_3 = param_3 + -1;
  }
  return;
}






// 函数: void FUN_1808fc914(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_1808fc914(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  
  for (lVar1 = 0; lVar1 != param_3; lVar1 = lVar1 + 1) {
    param_1 = param_1 - param_2;
    _guard_dispatch_icall(param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_1808fc978(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  byte bVar9;
  
  InitializeCriticalSectionAndSpinCount(0x180c82210,4000,param_3,param_4,0xfffffffffffffffe);
  lVar4 = GetModuleHandleW(&unknown_var_9472_ptr);
  if ((lVar4 == 0) && (lVar4 = GetModuleHandleW(&unknown_var_9544_ptr), lVar4 == 0)) goto LAB_1808fcaca;
  lVar5 = GetProcAddress(lVar4,&unknown_var_9576_ptr);
  uVar6 = GetProcAddress(lVar4,&unknown_var_9608_ptr);
  uVar7 = GetProcAddress(lVar4,&unknown_var_9640_ptr);
  if ((lVar5 == 0) || ((uVar6 == 0 || (uVar7 == 0)))) {
    system_system_data_config = CreateEventW(0,1,0);
    if (system_system_data_config != 0) goto LAB_1808fca68;
  }
  else {
    system_system_data_config = 0;
    _guard_dispatch_icall(0x180c82238);
    bVar9 = 0x40 - ((byte)GET_SECURITY_COOKIE() & 0x3f);
    bVar2 = bVar9 & 0x3f;
    system_system_data_config = GET_SECURITY_COOKIE() ^ (uVar6 >> bVar2 | uVar6 << 0x40 - bVar2);
    bVar9 = bVar9 & 0x3f;
    system_system_data_config = GET_SECURITY_COOKIE() ^ (uVar7 >> bVar9 | uVar7 << 0x40 - bVar9);
LAB_1808fca68:
    cVar3 = FUN_1808fc60c(0);
    if (cVar3 != '\0') {
      FUN_1808fc820(FUN_1808fcad8);
      return 0;
    }
    FUN_1808fd610(7);
  }
  FUN_1808fd610(7);
LAB_1808fcaca:
  FUN_1808fd610(7);
  pcVar1 = (code *)swi(3);
  uVar8 = (*pcVar1)();
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808fcad8(void)
void FUN_1808fcad8(void)

{
  DeleteCriticalSection(0x180c82210);
  if (system_system_data_config != 0) {
    CloseHandle();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808fcb00(int32_t *param_1)
void FUN_1808fcb00(int32_t *param_1)

{
  byte bVar1;
  
  EnterCriticalSection(0x180c82210);
  *param_1 = 0;
  LeaveCriticalSection(0x180c82210);
  if (system_system_data_config != 0) {
    SetEvent();
                    // WARNING: Could not recover jumptable at 0x0001808fcc41. Too many branches
                    // WARNING: Treating indirect jump as call
    ResetEvent(system_system_data_config);
    return;
  }
  bVar1 = (byte)GET_SECURITY_COOKIE() & 0x3f;
                    // WARNING: Could not recover jumptable at 0x0001808ffe70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)((GET_SECURITY_COOKIE() ^ system_system_data_config) >> bVar1 |
            (GET_SECURITY_COOKIE() ^ system_system_data_config) << 0x40 - bVar1))(0x180c82238);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808fcb30(int *param_1)
void FUN_1808fcb30(int *param_1)

{
  byte bVar1;
  uint64_t uVar2;
  
  EnterCriticalSection(0x180c82210);
  uVar2 = (uint64_t)__tls_index;
  system_system_control_config = system_system_control_config + 1;
  *param_1 = system_system_control_config;
  *(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + uVar2 * 8) + 0x48) = system_system_control_config;
  LeaveCriticalSection(0x180c82210);
  if (system_system_data_config != 0) {
    SetEvent();
                    // WARNING: Could not recover jumptable at 0x0001808fcc41. Too many branches
                    // WARNING: Treating indirect jump as call
    ResetEvent(system_system_data_config);
    return;
  }
  bVar1 = (byte)GET_SECURITY_COOKIE() & 0x3f;
                    // WARNING: Could not recover jumptable at 0x0001808ffe70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)((GET_SECURITY_COOKIE() ^ system_system_data_config) >> bVar1 |
            (GET_SECURITY_COOKIE() ^ system_system_data_config) << 0x40 - bVar1))(0x180c82238);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void SystemInitializer(int *param_1)
void SystemInitializer(int *param_1)

{
  EnterCriticalSection(0x180c82210);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_1808fcbe4:
                    // WARNING: Could not recover jumptable at 0x0001808fcbf0. Too many branches
                    // WARNING: Treating indirect jump as call
      LeaveCriticalSection(0x180c82210);
      return;
    }
    if (*param_1 != -1) {
      *(int32_t *)
       (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) + 0x48) =
           system_system_control_config;
      goto LAB_1808fcbe4;
    }
    FUN_1808fcc48(100);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808fcbf8(void)
void FUN_1808fcbf8(void)

{
  byte bVar1;
  
  if (system_system_data_config != 0) {
    SetEvent();
                    // WARNING: Could not recover jumptable at 0x0001808fcc41. Too many branches
                    // WARNING: Treating indirect jump as call
    ResetEvent(system_system_data_config);
    return;
  }
  bVar1 = (byte)GET_SECURITY_COOKIE() & 0x3f;
                    // WARNING: Could not recover jumptable at 0x0001808ffe70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)((GET_SECURITY_COOKIE() ^ system_system_data_config) >> bVar1 |
            (GET_SECURITY_COOKIE() ^ system_system_data_config) << 0x40 - bVar1))(0x180c82238);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808fcc48(int32_t param_1)
void FUN_1808fcc48(int32_t param_1)

{
  byte bVar1;
  
  if (system_system_data_config != 0) {
    LeaveCriticalSection(0x180c82210);
    WaitForSingleObjectEx(system_system_data_config,param_1,0);
                    // WARNING: Could not recover jumptable at 0x0001808fccb8. Too many branches
                    // WARNING: Treating indirect jump as call
    EnterCriticalSection(0x180c82210);
    return;
  }
  bVar1 = (byte)GET_SECURITY_COOKIE() & 0x3f;
                    // WARNING: Could not recover jumptable at 0x0001808ffe70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)((GET_SECURITY_COOKIE() ^ system_system_data_config) >> bVar1 |
            (GET_SECURITY_COOKIE() ^ system_system_data_config) << 0x40 - bVar1))(0x180c82238,0x180c82210,param_1);
  return;
}






// 函数: void FUN_1808fccc0(uint64_t param_1)
void FUN_1808fccc0(uint64_t param_1)

{
  uint64_t uVar1;
  
  SetUnhandledExceptionFilter(0);
  UnhandledExceptionFilter(param_1);
  uVar1 = GetCurrentProcess();
                    // WARNING: Could not recover jumptable at 0x0001808fcced. Too many branches
                    // WARNING: Treating indirect jump as call
  TerminateProcess(uVar1,0xc0000409);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808fccf4(void)
void FUN_1808fccf4(void)

{
  code *pcVar1;
  int iVar2;
  int8_t *puVar3;
  int8_t auStack_38 [8];
  int8_t auStack_30 [48];
  
  puVar3 = auStack_38;
  iVar2 = IsProcessorFeaturePresent(0x17);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(uint64_t *)(puVar3 + -8) = 0x1808fcd1e;
  FUN_1808fcee8(0x180c82300);
  system_system_data_config = *(uint64_t *)(puVar3 + 0x38);
  system_system_data_config = puVar3 + 0x40;
  system_system_data_config = *(uint64_t *)(puVar3 + 0x40);
  system_system_data_config = 0xc0000409;
  system_system_data_config = 1;
  system_system_data_config = 1;
  uRam0000000180c82280 = 2;
  *(uint64_t *)(puVar3 + 0x20) = GET_SECURITY_COOKIE();
  *(uint64_t *)(puVar3 + 0x28) = system_system_control_config;
  *(uint64_t *)(puVar3 + -8) = 0x1808fcdc0;
  system_system_data_config = system_system_data_config;
  FUN_1808fccc0(&unknown_var_9672_ptr);
  return;
}






// 函数: void FUN_1808fcdc8(void)
void FUN_1808fcdc8(void)

{
  FUN_1808fcddc(8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808fcddc(int32_t param_1)
void FUN_1808fcddc(int32_t param_1)

{
  code *pcVar1;
  int iVar2;
  int8_t *puVar3;
  int8_t auStack_28 [8];
  int8_t auStack_20 [32];
  
  puVar3 = auStack_28;
  iVar2 = IsProcessorFeaturePresent(0x17);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar3 = auStack_20;
  }
  *(uint64_t *)(puVar3 + -8) = 0x1808fce06;
  FUN_1808fce78(0x180c82300);
  system_system_data_config = *(uint64_t *)(puVar3 + 0x28);
  system_system_data_config = puVar3 + 0x30;
  system_system_data_config = 0xc0000409;
  system_system_data_config = 1;
  system_system_data_config = 1;
  uRam0000000180c82280 = (uint64_t)*(uint *)(puVar3 + 0x30);
  *(uint64_t *)(puVar3 + -8) = 0x1808fce72;
  system_system_data_config = system_system_data_config;
  FUN_1808fccc0(&unknown_var_9672_ptr);
  return;
}






// 函数: void FUN_1808fce78(int64_t param_1)
void FUN_1808fce78(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uStackX_8;
  int8_t auStackX_10 [8];
  int8_t auStackX_18 [8];
  
  RtlCaptureContext();
  uVar1 = *(uint64_t *)(param_1 + 0xf8);
  lVar2 = RtlLookupFunctionEntry(uVar1,&uStackX_8,0);
  if (lVar2 != 0) {
    RtlVirtualUnwind(0,uStackX_8,uVar1,lVar2,param_1,auStackX_18,auStackX_10,0);
  }
  return;
}






// 函数: void FUN_1808fcee8(int64_t param_1)
void FUN_1808fcee8(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uStackX_8;
  int8_t auStackX_10 [8];
  int8_t auStackX_18 [16];
  
  RtlCaptureContext();
  uVar1 = *(uint64_t *)(param_1 + 0xf8);
  iVar3 = 0;
  do {
    lVar2 = RtlLookupFunctionEntry(uVar1,&uStackX_8,0);
    if (lVar2 == 0) {
      return;
    }
    RtlVirtualUnwind(0,uStackX_8,uVar1,lVar2,param_1,auStackX_18,auStackX_10,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  return;
}






// 函数: void FUN_1808fcf5c(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)
void FUN_1808fcf5c(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
  int64_t lVar1;
  
  for (lVar1 = 0; lVar1 != param_4; lVar1 = lVar1 + 1) {
    _guard_dispatch_icall(param_1,param_2);
    param_1 = param_1 + param_3;
    param_2 = param_2 + param_3;
  }
  return;
}



void thunk_FUN_1808fc418(int64_t param_1)

{
  code *pcVar1;
  int64_t lVar2;
  int iVar3;
  
  do {
    lVar2 = malloc(param_1);
    if (lVar2 != 0) {
      return;
    }
    iVar3 = _callnewh(param_1);
  } while (iVar3 != 0);
  if (param_1 == -1) {
    FUN_1808fd8b4();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_1808fd894();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void free(void)

{
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free();
  return;
}



void tls_callback_0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  
  if (param_2 == 2) {
    for (plVar1 = (int64_t *)&unknown_var_6088_ptr; plVar1 != (int64_t *)&unknown_var_6096_ptr;
        plVar1 = plVar1 + 1) {
      if (*plVar1 != 0) {
        _guard_dispatch_icall();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void tls_callback_1(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int64_t *plVar5;
  
  if ((param_2 == 3) || (param_2 == 0)) {
    lVar1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8);
    piVar3 = *(int **)(lVar1 + 0x50);
    while (piVar3 != (int *)0x0) {
      iVar4 = *piVar3 + -1;
      if (-1 < iVar4) {
        plVar5 = (int64_t *)(piVar3 + ((int64_t)iVar4 + 2) * 2);
        do {
          if (*plVar5 != 0) {
            _guard_dispatch_icall();
          }
          plVar5 = plVar5 + -1;
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
      piVar2 = *(int **)(piVar3 + 2);
      if (piVar2 != (int *)0x0) {
        free(piVar3);
      }
      *(int **)(lVar1 + 0x50) = piVar2;
      piVar3 = piVar2;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808fd0d4(uint64_t param_1)

{
  int64_t lVar1;
  int *piVar2;
  
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
  *(uint64_t *)(piVar2 + (int64_t)*piVar2 * 2 + 4) = param_1;
  *piVar2 = *piVar2 + 1;
  return 0;
}



uint64_t FUN_1808fd16c(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  FUN_1808fd18c(param_2,param_4,*(uint64_t *)(param_4 + 0x38));
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808fd18c(uint64_t param_1,int64_t param_2,uint *param_3)
void FUN_1808fd18c(uint64_t param_1,int64_t param_2,uint *param_3)

{
  code *pcVar1;
  int iVar2;
  uint64_t uVar3;
  int8_t *puVar4;
  uint64_t uVar5;
  int8_t auStack_38 [8];
  int8_t auStack_30 [40];
  
  uVar5 = param_1;
  if ((*param_3 & 4) != 0) {
    uVar5 = (int64_t)(int)param_3[1] + param_1 & (int64_t)(int)-param_3[2];
  }
  uVar3 = (uint64_t)*(uint *)(*(int64_t *)(param_2 + 0x10) + 8);
  if ((*(byte *)(uVar3 + 3 + *(int64_t *)(param_2 + 8)) & 0xf) != 0) {
    param_1 = param_1 + (*(byte *)(uVar3 + 3 + *(int64_t *)(param_2 + 8)) & 0xfffffff0);
  }
  param_1 = param_1 ^ *(uint64_t *)((int64_t)(int)(*param_3 & 0xfffffff8) + uVar5);
  if ((param_1 == GET_SECURITY_COOKIE()) && ((short)(param_1 >> 0x30) == 0)) {
    return;
  }
  puVar4 = auStack_38;
  iVar2 = IsProcessorFeaturePresent(0x17);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar4 = auStack_30;
  }
  *(uint64_t *)(puVar4 + -8) = 0x1808fcd1e;
  FUN_1808fcee8(0x180c82300);
  system_system_data_config = *(uint64_t *)(puVar4 + 0x38);
  system_system_data_config = puVar4 + 0x40;
  system_system_data_config = *(uint64_t *)(puVar4 + 0x40);
  system_system_data_config = 0xc0000409;
  system_system_data_config = 1;
  system_system_data_config = 1;
  uRam0000000180c82280 = 2;
  *(uint64_t *)(puVar4 + 0x20) = GET_SECURITY_COOKIE();
  *(uint64_t *)(puVar4 + 0x28) = system_system_control_config;
  *(uint64_t *)(puVar4 + -8) = 0x1808fcdc0;
  system_system_data_config = system_system_data_config;
  FUN_1808fccc0(&unknown_var_9672_ptr);
  return;
}






