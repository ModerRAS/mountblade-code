/* 原始函数别名定义 */
#define DataValidator_CheckIntegrity DataValidator_CheckIntegrity  // DataValidator_CheckIntegrity 的语义化别名
n//  的语义化别名
#define SystemCore_SyscallHandler
// $fun 的语义化别名
#define $alias_name $fun
/* SystemCore_Initializer - SystemCore_Initializer */
#define SystemCore_Initializer SystemCore_Initializer
/* 函数别名定义: DataEncryptionHandler */
#define DataEncryptionHandler DataEncryptionHandler
/* 函数别名定义: MathCoreCalculator */
#define MathCoreCalculator MathCoreCalculator
// 02_core_engine_part023.c - 23 个函数
// 函数: void function_066140(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_066140(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint uVar1;
  int64_t lVar2;
  void *puVar3;
  uint64_t uVar4;
  uint64_t local_var_88;
  int64_t lStack_80;
  void *plocal_var_70;
  int64_t lStack_68;
  uint local_var_60;
  uint64_t local_var_58;
  void *plocal_var_50;
  void *plocal_var_48;
  int32_t local_var_38;
  local_var_88 = 0;
  lStack_80 = 0;
  lVar2 = *param_1;
  plocal_var_70 = &system_data_buffer_ptr;
  local_var_58 = 0;
  lStack_68 = 0;
  local_var_60 = 0;
  uVar1 = *(uint *)(lVar2 + 0x10);
  uVar4 = (uint64_t)uVar1;
  if (*(int64_t *)(lVar2 + 8) != 0) {
    CoreMemoryPoolProcessor(&plocal_var_70,uVar4,param_3,param_4,1,0xfffffffffffffffe);
  }
  if (uVar1 != 0) {
// WARNING: Subroutine does not return
    memcpy(lStack_68,*(uint64_t *)(lVar2 + 8),uVar4);
  }
  if (lStack_68 != 0) {
    *(int8_t *)(uVar4 + lStack_68) = 0;
  }
  local_var_60 = uVar1;
  local_var_58._4_4_ = *(uint *)(lVar2 + 0x1c);
  CoreMemoryPoolProcessor(&plocal_var_70,1);
  *(int16_t *)((uint64_t)local_var_60 + lStack_68) = 0x5c;
  local_var_60 = 1;
  UtilitiesSystem_CacheManager(&plocal_var_70,&plocal_var_50,param_3);
  plocal_var_70 = &system_data_buffer_ptr;
  if (lStack_68 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_68 = 0;
  local_var_58 = (uint64_t)local_var_58._4_4_ << 0x20;
  plocal_var_70 = &system_state_ptr;
  puVar3 = &system_buffer_ptr;
  if (plocal_var_48 != (void *)0x0) {
    puVar3 = plocal_var_48;
  }
  SystemCore_Validator(&local_var_88,puVar3,&processed_var_572_ptr,param_4,0);
  function_0ae730(param_2,&local_var_88);
  if (lStack_80 != 0) {
    fclose();
    lStack_80 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  (**(code **)(**(int64_t **)param_1[1] + 0x40))(*(int64_t **)param_1[1],&plocal_var_50);
  plocal_var_50 = &system_data_buffer_ptr;
  if (plocal_var_48 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_48 = (void *)0x0;
  local_var_38 = 0;
  plocal_var_50 = &system_state_ptr;
  if (lStack_80 != 0) {
    fclose();
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x0001800665ec)
// WARNING: Removing unreachable block (ram,0x0001800665f5)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_066320(uint64_t param_1,uint64_t param_2,char param_3,char param_4,
void function_066320(uint64_t param_1,uint64_t param_2,char param_3,char param_4,
                  uint64_t param_5)
{
  char cVar1;
  int iVar2;
  int32_t uVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int8_t stack_array_1f8 [32];
  void *plocal_var_1d8;
  void *plocal_var_1d0;
  void *plocal_var_1c8;
  void *plocal_var_1b8;
  int64_t lStack_1b0;
  int32_t local_var_1a8;
  uint64_t local_var_1a0;
  void *plocal_var_198;
  int64_t lStack_190;
  int32_t local_var_180;
  void *plocal_var_178;
  void *plocal_var_170;
  int32_t local_var_168;
  uint64_t local_var_160;
  void *plocal_var_158;
  void *plocal_var_150;
  int32_t local_var_148;
  uint64_t local_var_140;
  void *plocal_var_138;
  int64_t lStack_130;
  int32_t local_var_120;
  void *plocal_var_110;
  int64_t lStack_108;
  int32_t local_var_f8;
  void *plocal_var_f0;
  int64_t lStack_e8;
  int32_t local_var_d8;
  void *plocal_var_d0;
  void *plocal_var_c8;
  int32_t local_var_b8;
  uint64_t local_var_b0;
  void **pplocal_var_a8;
  int32_t stack_array_98 [14];
  uint64_t local_var_60;
  uint64_t local_var_48;
  local_var_b0 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1f8;
  cVar1 = (**(code **)**(uint64_t **)(core_system_data_memory + 0x18))();
  iVar4 = 0;
  if (cVar1 != '\0') {
    CoreMemoryPoolValidator(&plocal_var_1b8,&system_memory_4870);
    function_065f00(&plocal_var_1b8,0);
    plocal_var_1b8 = &system_data_buffer_ptr;
    if (lStack_1b0 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_1b0 = 0;
    local_var_1a0 = (uint64_t)local_var_1a0._4_4_ << 0x20;
    plocal_var_1b8 = &system_state_ptr;
    goto LAB_180066971;
  }
  if (((system_memory_2843 != '\0') || (system_event_handler != '\0')) ||
     (*(int *)(core_system_data_memory + 0x10e0) == 1)) {
    SystemManager_DataHandler(system_message_context,5,3,&ui_system_data_1176_ptr);
    function_0623e0();
    goto LAB_180066971;
  }
  if ((param_3 == '\0') && (system_memory_2851 == '\0')) {
    if (((system_debug_flag == '\0') || (iVar2 = IsDebuggerPresent(), iVar2 != 0)) &&
       (system_debug_flag2 == '\0')) {
      uVar3 = MessageBoxA(0,&ui_system_data_1232_ptr,&ui_system_data_1364_ptr,0x40004);
      switch(uVar3) {
      case 1:
        break;
      default:
        iVar4 = 1;
        break;
      case 4:
        iVar4 = 2;
        break;
      case 5:
        iVar4 = 3;
        break;
      case 6:
        iVar4 = 4;
        break;
      case 7:
        iVar4 = 5;
      }
      if (iVar4 == 4) goto LAB_18006650a;
    }
    else if (*(char *)(system_message_context + 0x18) != '\0') {
      plocal_var_1c8 = &ui_system_data_1232_ptr;
      plocal_var_1d0 = &ui_system_data_1364_ptr;
      plocal_var_1d8 = &processed_var_6936_ptr;
      SystemConfigurationManager(system_message_context,3,0xffffffff00000000,0xd);
    }
    SystemManager_DataHandler(system_message_context,5,3,&ui_system_data_1368_ptr);
  }
  else {
LAB_18006650a:
    function_052070(&plocal_var_198);
    uVar5 = CoreMemoryPoolValidator(&plocal_var_138,&system_memory_eb50);
    iVar4 = DataValidator_CheckIntegrity(&plocal_var_198,uVar5);
    plocal_var_138 = &system_data_buffer_ptr;
    if (lStack_130 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_130 = 0;
    local_var_120 = 0;
    plocal_var_138 = &system_state_ptr;
    NetworkSystem_ProtocolParser(&plocal_var_198,&plocal_var_d0,iVar4 + 7,0xffffffff);
    plocal_var_1b8 = &system_data_buffer_ptr;
    local_var_1a0 = 0;
    lStack_1b0 = 0;
    local_var_1a8 = 0;
    plocal_var_158 = &system_data_buffer_ptr;
    local_var_140 = 0;
    plocal_var_150 = (void *)0x0;
    local_var_148 = 0;
    plocal_var_178 = &system_data_buffer_ptr;
    local_var_160 = 0;
    plocal_var_170 = (void *)0x0;
    local_var_168 = 0;
    uVar6 = function_623ce0();
    System_DataHandler(&plocal_var_158,&processed_var_808_ptr,uVar6 / 0x100000 & 0xffffffff);
    stack_array_98[0] = 0x48;
    uVar5 = GetCurrentProcess();
    iVar4 = K32GetProcessMemoryInfo(uVar5,stack_array_98,0x48);
    uVar6 = 0;
    if (iVar4 != 0) {
      uVar6 = local_var_60;
    }
    System_DataHandler(&plocal_var_178,&processed_var_808_ptr,uVar6 / 0x100000 & 0xffffffff);
    SystemManager_DataHandler(system_message_context,5,3,&system_memory_cc18);
    plocal_var_1d8 = &system_buffer_ptr;
    if (plocal_var_150 != (void *)0x0) {
      plocal_var_1d8 = plocal_var_150;
    }
    SystemManager_DataHandler(system_message_context,5,3,&ui_system_data_1416_ptr);
    plocal_var_1d8 = &system_buffer_ptr;
    if (plocal_var_170 != (void *)0x0) {
      plocal_var_1d8 = plocal_var_170;
    }
    SystemManager_DataHandler(system_message_context,5,3,&ui_system_data_1440_ptr);
    plocal_var_1d8 = &system_buffer_ptr;
    SystemManager_DataHandler(system_message_context,5,3,&ui_system_data_1464_ptr);
    plocal_var_1d8 = &system_buffer_ptr;
    if (plocal_var_c8 != (void *)0x0) {
      plocal_var_1d8 = plocal_var_c8;
    }
    SystemManager_DataHandler(system_message_context,5,3,&ui_system_data_1496_ptr);
    plocal_var_1d8 = &ui_system_data_1528_ptr;
    if (param_3 != '\0') {
      plocal_var_1d8 = &ui_system_data_1520_ptr;
    }
    SystemManager_DataHandler(system_message_context,5,3,&ui_system_data_1544_ptr);
    function_0623e0();
    if (((param_4 == '\0') || (system_memory_2844 != '\0')) || (*(int *)(core_system_data_memory + 0x1150) != 0))
    {
      SystemManager_DataHandler(system_message_context,5,3,&ui_system_data_1568_ptr);
      function_0623e0();
    }
    else {
      function_625690(&plocal_var_198);
    }
    pplocal_var_a8 = &plocal_var_138;
    uVar5 = SystemCore_NetworkHandler0(&plocal_var_138,&plocal_var_198);
    function_063820(uVar5);
    function_063b30(&plocal_var_198,param_5);
    function_063cf0(&plocal_var_198);
    function_0ba940(&plocal_var_138);
    UtilitiesSystem_CacheManager(&plocal_var_138,&plocal_var_f0,&processed_var_632_ptr);
    UtilitiesSystem_CacheManager(&plocal_var_198,&plocal_var_110,&processed_var_632_ptr);
    function_62db60(&plocal_var_110,&plocal_var_f0);
    plocal_var_110 = &system_data_buffer_ptr;
    if (lStack_108 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_108 = 0;
    local_var_f8 = 0;
    plocal_var_110 = &system_state_ptr;
    plocal_var_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_e8 = 0;
    local_var_d8 = 0;
    plocal_var_f0 = &system_state_ptr;
    plocal_var_138 = &system_data_buffer_ptr;
    if (lStack_130 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_130 = 0;
    local_var_120 = 0;
    plocal_var_138 = &system_state_ptr;
    function_064010(&plocal_var_198);
    function_0649d0(&plocal_var_198);
    function_065160(&plocal_var_198);
    function_065d50(&plocal_var_198,param_2,param_3,0);
    plocal_var_178 = &system_data_buffer_ptr;
    if (plocal_var_170 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plocal_var_170 = (void *)0x0;
    local_var_160 = local_var_160 & 0xffffffff00000000;
    plocal_var_178 = &system_state_ptr;
    plocal_var_158 = &system_data_buffer_ptr;
    if (plocal_var_150 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plocal_var_150 = (void *)0x0;
    local_var_140 = local_var_140 & 0xffffffff00000000;
    plocal_var_158 = &system_state_ptr;
    lStack_1b0 = 0;
    local_var_1a0 = local_var_1a0 & 0xffffffff00000000;
    plocal_var_1b8 = &system_state_ptr;
    plocal_var_d0 = &system_data_buffer_ptr;
    if (plocal_var_c8 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plocal_var_c8 = (void *)0x0;
    local_var_b8 = 0;
    plocal_var_d0 = &system_state_ptr;
    plocal_var_198 = &system_data_buffer_ptr;
    if (lStack_190 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_190 = 0;
    local_var_180 = 0;
    plocal_var_198 = &system_state_ptr;
  }
LAB_180066971:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_1f8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0669c0(uint64_t param_1,uint64_t param_2,char param_3,uint64_t param_4,
void function_0669c0(uint64_t param_1,uint64_t param_2,char param_3,uint64_t param_4,
                  uint64_t param_5)
{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  int iVar6;
  int64_t lVar7;
  void *plocal_var_a0;
  uint64_t *plocal_var_98;
  int32_t local_var_90;
  uint64_t local_var_88;
  int8_t stack_array_80 [72];
  cVar2 = (**(code **)**(uint64_t **)(core_system_data_memory + 0x18))();
  if (cVar2 == '\0') {
    if ((system_memory_2843 == '\0') && (*(int *)(core_system_data_memory + 0x10e0) != 1)) {
      iVar3 = 0;
      if ((param_3 != '\0') || (system_memory_2851 != '\0')) {
LAB_180066bf4:
        function_052070(stack_array_80);
        plocal_var_a0 = &system_data_buffer_ptr;
        local_var_88 = 0;
        plocal_var_98 = (uint64_t *)0x0;
        local_var_90 = 0;
        puVar5 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
        *(int8_t *)puVar5 = 0;
        plocal_var_98 = puVar5;
        uVar4 = CoreMemoryPoolCleaner(puVar5);
        local_var_88 = CONCAT44(local_var_88._4_4_,uVar4);
        *puVar5 = 0x73656873617263;
        local_var_90 = 7;
        DataValidator_CheckIntegrity(stack_array_80,&plocal_var_a0);
        plocal_var_a0 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(puVar5);
      }
      if (((system_debug_flag == '\0') || (iVar6 = IsDebuggerPresent(), iVar6 != 0)) &&
         (system_debug_flag2 == '\0')) {
        uVar4 = MessageBoxA(0,&ui_system_data_1232_ptr,&ui_system_data_1364_ptr,0x40004);
        switch(uVar4) {
        case 1:
          break;
        default:
          iVar3 = 1;
          break;
        case 4:
          iVar3 = 2;
          break;
        case 5:
          iVar3 = 3;
          break;
        case 6:
          iVar3 = 4;
          break;
        case 7:
          iVar3 = 5;
        }
        if (iVar3 == 4) goto LAB_180066bf4;
      }
      else if (*(char *)(system_message_context + 0x18) != '\0') {
        SystemConfigurationManager(system_message_context,3,0xffffffff00000000,0xd,&processed_var_6936_ptr,&ui_system_data_1364_ptr,
                      &ui_system_data_1232_ptr);
      }
      SystemManager_DataHandler(system_message_context,5,3,&ui_system_data_1368_ptr);
    }
    else {
      SystemManager_DataHandler(system_message_context,5,3,&ui_system_data_1176_ptr);
      function_0623e0();
    }
  }
  else {
    plocal_var_a0 = &system_data_buffer_ptr;
    local_var_88 = 0;
    plocal_var_98 = (uint64_t *)0x0;
    local_var_90 = 0;
    lVar1 = -1;
    do {
      lVar7 = lVar1;
      lVar1 = lVar7 + 1;
    } while (*(char *)(lVar7 + 0x180c84871) != '\0');
    if ((int)(lVar7 + 1) != 0) {
      iVar6 = (int)lVar7 + 2;
      iVar3 = iVar6;
      if (iVar6 < 0x10) {
        iVar3 = 0x10;
      }
      plocal_var_98 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar3,0x13);
      *(int8_t *)plocal_var_98 = 0;
      uVar4 = CoreMemoryPoolCleaner(plocal_var_98);
      local_var_88 = CONCAT44(local_var_88._4_4_,uVar4);
// WARNING: Subroutine does not return
      memcpy(plocal_var_98,&system_memory_4870,iVar6);
    }
    local_var_90 = 0;
    function_065f00(&plocal_var_a0,param_5);
    plocal_var_a0 = &system_data_buffer_ptr;
    if (plocal_var_98 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  return;
}
// 函数: void function_066dd0(void)
void function_066dd0(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataEncryptionHandler0(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void DataEncryptionHandler0(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  puVar4 = (uint64_t *)param_1[1];
  lVar1 = 0;
  if (puVar4 < (uint64_t *)param_1[2]) {
    param_1[1] = (int64_t)(puVar4 + 4);
    *puVar4 = &system_state_ptr;
    puVar4[1] = 0;
    *(int32_t *)(puVar4 + 2) = 0;
    *puVar4 = &system_data_buffer_ptr;
    puVar4[3] = 0;
    puVar4[1] = 0;
    *(int32_t *)(puVar4 + 2) = 0;
    *(int32_t *)(puVar4 + 2) = *(int32_t *)(param_2 + 0x10);
    puVar4[1] = *(uint64_t *)(param_2 + 8);
    *(int32_t *)((int64_t)puVar4 + 0x1c) = *(int32_t *)(param_2 + 0x1c);
    *(int32_t *)(puVar4 + 3) = *(int32_t *)(param_2 + 0x18);
    *(int32_t *)(param_2 + 0x10) = 0;
    *(uint64_t *)(param_2 + 8) = 0;
    *(uint64_t *)(param_2 + 0x18) = 0;
    return;
  }
  lVar3 = *param_1;
  lVar6 = (int64_t)puVar4 - lVar3 >> 5;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) goto LAB_180066ec4;
  }
  lVar1 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar6 << 5,(char)param_1[3],param_4,0xfffffffffffffffe);
  puVar4 = (uint64_t *)param_1[1];
  lVar3 = *param_1;
LAB_180066ec4:
  puVar2 = (uint64_t *)SystemCore_Initializer(lVar3,puVar4,lVar1);
  *puVar2 = &system_state_ptr;
  puVar2[1] = 0;
  *(int32_t *)(puVar2 + 2) = 0;
  *puVar2 = &system_data_buffer_ptr;
  puVar2[3] = 0;
  puVar2[1] = 0;
  *(int32_t *)(puVar2 + 2) = 0;
  *(int32_t *)(puVar2 + 2) = *(int32_t *)(param_2 + 0x10);
  puVar2[1] = *(uint64_t *)(param_2 + 8);
  *(int32_t *)((int64_t)puVar2 + 0x1c) = *(int32_t *)(param_2 + 0x1c);
  *(int32_t *)(puVar2 + 3) = *(int32_t *)(param_2 + 0x18);
  *(int32_t *)(param_2 + 0x10) = 0;
  *(uint64_t *)(param_2 + 8) = 0;
  *(uint64_t *)(param_2 + 0x18) = 0;
  puVar4 = (uint64_t *)param_1[1];
  puVar5 = (uint64_t *)*param_1;
  if (puVar5 != puVar4) {
    do {
      (**(code **)*puVar5)(puVar5,0);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar4);
    puVar5 = (uint64_t *)*param_1;
  }
  if (puVar5 == (uint64_t *)0x0) {
    *param_1 = lVar1;
    param_1[1] = (int64_t)(puVar2 + 4);
    param_1[2] = lVar6 * 0x20 + lVar1;
    return;
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(puVar5);
}
int64_t function_066f90(int64_t param_1,uint64_t param_2,uint64_t param_3,char *param_4,
                      uint64_t param_5)
{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  if (param_5 <= param_2) {
    if (param_5 == 0) {
      return 0;
    }
    cVar1 = *param_4;
    lVar4 = (param_1 - param_5) + param_2;
    for (lVar3 = memchr(param_1,(int)cVar1,(lVar4 + 1) - param_1); lVar3 != 0;
        lVar3 = memchr(lVar3 + 1,(int)cVar1,(lVar4 + 1) - (lVar3 + 1))) {
      iVar2 = memcmp(lVar3,param_4,param_5);
      if (iVar2 == 0) {
        return lVar3 - param_1;
      }
    }
  }
  return -1;
}
// 函数: void function_067050(void)
void function_067050(void)
{
  code *pcVar1;
  __Xout_of_range_std__YAXPEBD_Z(&ui_system_data_1624_ptr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
// 函数: void SystemResourceAllocator(int64_t *param_1)
void SystemResourceAllocator(int64_t *param_1)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uVar1 = param_1[3];
  if (0xf < uVar1) {
    lVar2 = *param_1;
    lVar3 = lVar2;
    if (0xfff < uVar1 + 1) {
      lVar3 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar3) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar2 - lVar3,uVar1 + 0x28);
      }
    }
    free(lVar3);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int8_t *)param_1 = 0;
  return;
}
// 函数: void function_0670d0(void)
void function_0670d0(void)
{
  SystemResourceAllocator();
  return;
}
// 函数: void function_0670f0(void)
void function_0670f0(void)
{
  code *pcVar1;
  __Xlength_error_std__YAXPEBD_Z(&ui_system_data_1648_ptr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
// 函数: void SystemCore_SyscallHandler(uint64_t param_1)
void SystemCore_SyscallHandler(uint64_t param_1)
{
  code *pcVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  if (0xfff < param_1) {
    uVar4 = param_1 + 0x27;
    if (uVar4 <= param_1) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar3 = SystemRenderer(uVar4);
    if (lVar3 == 0) {
// WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    *(int64_t *)((lVar3 + 0x27U & 0xffffffffffffffe0) - 8) = lVar3;
    return;
  }
  if (param_1 == 0) {
    return;
  }
  do {
    lVar3 = malloc(param_1);
    if (lVar3 != 0) {
      return;
    }
    iVar2 = _callnewh(param_1);
  } while (iVar2 != 0);
  if (param_1 == 0xffffffffffffffff) {
    function_8fd8b4();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  function_8fd894();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
// 函数: void function_067170(int64_t param_1,uint64_t param_2)
void function_067170(int64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  lVar1 = param_1;
  if (0xfff < param_2) {
    lVar1 = *(int64_t *)(param_1 + -8);
    if (0x1f < (param_1 - lVar1) - 8U) {
// WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn(param_1 - lVar1,param_2 + 0x27);
    }
  }
// WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
// WARNING: Treating indirect jump as call
  free(lVar1);
  return;
}
// 函数: void MathCoreCalculator0(uint64_t *param_1,uint64_t param_2,uint64_t param_3)
void MathCoreCalculator0(uint64_t *param_1,uint64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  code *pcVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uVar1 = param_1[3];
  if (param_3 <= uVar1) {
    puVar5 = param_1;
    if (0xf < uVar1) {
      puVar5 = (uint64_t *)*param_1;
    }
    param_1[2] = param_3;
// WARNING: Subroutine does not return
    memmove(puVar5);
  }
  if (param_3 < 0x8000000000000000) {
    uVar4 = param_3 | 0xf;
    uVar6 = 0x7fffffffffffffff;
    if (((uVar4 < 0x8000000000000000) && (uVar1 <= 0x7fffffffffffffff - (uVar1 >> 1))) &&
       (uVar1 = (uVar1 >> 1) + uVar1, uVar6 = uVar4, uVar4 < uVar1)) {
      uVar6 = uVar1;
    }
    uVar3 = SystemCore_SyscallHandler(uVar6 + 1);
    param_1[2] = param_3;
    param_1[3] = uVar6;
// WARNING: Subroutine does not return
    memcpy(uVar3,param_2,param_3);
  }
  function_0670f0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}
// 函数: void function_06720b(uint64_t param_1)
void function_06720b(uint64_t param_1)
{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  param_1 = param_1 | 0xf;
  if (((param_1 <= unaff_RDI) && (unaff_RBP <= unaff_RDI - (unaff_RBP >> 1))) &&
     (uVar1 = (unaff_RBP >> 1) + unaff_RBP, unaff_RDI = param_1, param_1 < uVar1)) {
    unaff_RDI = uVar1;
  }
  uVar2 = SystemCore_SyscallHandler(unaff_RDI + 1);
  *(uint64_t *)(unaff_RBX + 0x10) = unaff_RSI;
  *(uint64_t *)(unaff_RBX + 0x18) = unaff_RDI;
// WARNING: Subroutine does not return
  memcpy(uVar2);
}
// 函数: void function_06729a(void)
void function_06729a(void)
{
  return;
}
// 函数: void function_0672b0(void)
void function_0672b0(void)
{
// WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}
// 函数: void function_0672b7(void)
void function_0672b7(void)
{
  code *pcVar1;
  function_0670f0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0672c0(int64_t param_1)
void function_0672c0(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  uint astack_special_x_8 [2];
  int64_t lStackX_10;
  int64_t lStackX_18;
  int64_t *plStackX_20;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  void *plocal_var_50;
  void *plocal_var_48;
  uVar4 = GetCurrentThread();
  SetThreadPriority(uVar4,0);
  astack_special_x_8[0] = 0;
  lStackX_18 = 0;
  lStackX_10 = 0;
  while( true ) {
    while( true ) {
      iVar3 = GetQueuedCompletionStatus
                        (*(uint64_t *)(param_1 + 0x28),astack_special_x_8,&lStackX_18,&lStackX_10,
                         0xffffffff);
      lVar2 = lStackX_10;
      if (iVar3 == 0) break;
      if (lStackX_18 == -1) {
        return;
      }
      *(int64_t *)(lStackX_10 + 0x1c8) =
           *(int64_t *)(lStackX_10 + 0x1c8) - (uint64_t)astack_special_x_8[0];
      uVar4 = core_system_data_memory;
      if (*(int64_t *)(lStackX_10 + 0x1c8) < 1) {
        lVar1 = *(int64_t *)(param_1 + 0x20);
        uVar5 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x40,8,10);
        plStackX_20 = (int64_t *)&local_var_60;
        plocal_var_50 = &processed_var_624_ptr;
        plocal_var_48 = &processed_var_608_ptr;
        local_var_70 = (int32_t)uVar4;
        local_var_6c = (int32_t)((uint64_t)uVar4 >> 0x20);
        local_var_68 = (int32_t)lVar2;
        local_var_64 = (int32_t)((uint64_t)lVar2 >> 0x20);
        local_var_60 = local_var_70;
        local_var_5c = local_var_6c;
        local_var_58 = local_var_68;
        local_var_54 = local_var_64;
        plVar6 = (int64_t *)function_069e10(uVar5,&local_var_60);
        if (plVar6 != (int64_t *)0x0) {
          (**(code **)(*plVar6 + 0x28))(plVar6);
        }
        uVar4 = system_context_ptr;
        plStackX_20 = plVar6;
        if (*(char *)(lVar1 + 0x368) == '\0') {
          plVar6[3] = -4;
          (**(code **)(*plVar6 + 0x28))(plVar6);
          SystemCore_TimerManager(uVar4,&plStackX_20);
        }
        else {
          if (plVar6 != (int64_t *)0x0) {
            (**(code **)(*plVar6 + 0x28))(plVar6);
          }
          function_05e450(uVar4,&plStackX_20);
        }
        if (plVar6 != (int64_t *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6);
        }
      }
    }
    iVar3 = GetLastError();
    if (iVar3 == 0x2df) {
      return;
    }
    if (lStackX_10 == 0) break;
    function_067480(*(uint64_t *)(param_1 + 0x20));
  }
// WARNING: Subroutine does not return
  SystemParameterHandler(system_message_context,&ui_system_data_1664_ptr,iVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_067480(uint64_t param_1,int64_t param_2)
void function_067480(uint64_t param_1,int64_t param_2)
{
  void *puVar1;
  void *puVar2;
  puVar1 = *(void **)(*(int64_t *)(param_2 + 0x1f8) + 0x10);
  puVar2 = &system_buffer_ptr;
  if (puVar1 != (void *)0x0) {
    puVar2 = puVar1;
  }
// WARNING: Subroutine does not return
  SystemParameterHandler(system_message_context,&ui_system_data_1696_ptr,puVar2);
}
// 函数: void function_067810(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_067810(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(param_1,0,0,param_4,0xfffffffffffffffe);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_067840(int64_t *param_1)
void function_067840(int64_t *param_1)
{
  int *piVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int64_t *plVar8;
  int iVar9;
  int64_t lStackX_8;
  uint64_t *pstack_special_x_10;
  int64_t lStack_c8;
  int64_t lStack_c0;
  uint64_t local_var_b8;
  int16_t local_var_b0;
  int8_t local_var_ae;
  int8_t stack_array_88 [64];
  uint64_t local_var_48;
  uint64_t local_var_40;
  local_var_48 = 0xfffffffffffffffe;
  lVar3 = param_1[1];
  iVar9 = *(int *)(lVar3 + 0x138) - *(int *)(lVar3 + 0x1d8);
  lVar4 = *(int64_t *)(lVar3 + 0x150);
  plVar8 = (int64_t *)0x0;
  if (lVar4 != 0) {
    uVar5 = *(uint64_t *)(lVar3 + 0x158);
    uVar6 = *(uint64_t *)(lVar3 + 0x1e0);
    lStackX_8 = *(int64_t *)(lVar3 + 0x140);
    lVar3 = *(int64_t *)(lVar3 + 0x1f0);
    if (lVar4 - 2U < 2) {
      plVar8 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x10,8,3);
      *plVar8 = (int64_t)&memory_allocator_3856_ptr;
      *(bool *)(plVar8 + 1) = lVar4 == 3;
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,stack_array_88,iVar9 + lVar3,lStackX_8,uVar6,uVar5);
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(plVar8);
  }
  local_var_ae = 3;
  lVar3 = param_1[1];
  local_var_b8 = *(uint64_t *)(lVar3 + 0x140);
  lStack_c8 = (int64_t)iVar9 + *(int64_t *)(lVar3 + 0x1f0);
  local_var_b0 = 1;
  lStack_c0 = lStack_c8;
  (**(code **)(lVar3 + 0x180))(&lStack_c8,*(int64_t *)(lVar3 + 0x1f8) + 8);
  if (((char)local_var_b0 == '\0') && (lStack_c8 != 0)) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  LOCK();
  piVar1 = (int *)(*(int64_t *)(param_1[1] + 0x1f8) + 0x120);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  lStackX_8 = *(int64_t *)(param_1[1] + 0x1a8);
  lVar3 = *param_1;
  function_069cc0(lVar3 + 0x10,&lStackX_8);
  iVar9 = _Cnd_signal(lVar3 + 0x278);
  if (iVar9 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar9);
  }
  pstack_special_x_10 = *(uint64_t **)(param_1[1] + 0x1b0);
  lVar3 = *param_1;
  function_069cc0(lVar3 + 0x10,&pstack_special_x_10);
  iVar9 = _Cnd_signal(lVar3 + 0x278);
  if (iVar9 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar9);
  }
  lVar3 = *(int64_t *)(param_1[1] + 0x1c0);
  if (*(int64_t *)(param_1[1] + 0x1b8) != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (lVar3 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(lVar3);
  }
  lVar3 = param_1[1];
  if (*(int64_t *)(lVar3 + 0x150) == 0) {
    if (*(int64_t *)(lVar3 + 0x148) == 0) {
      plVar8 = *(int64_t **)(lVar3 + 0x140);
    }
  }
  else {
    plVar8 = *(int64_t **)(lVar3 + 0x140);
    if (*(int64_t *)(lVar3 + 0x148) == 0) {
      plVar8 = (int64_t *)((int64_t)plVar8 + *(int64_t *)(lVar3 + 0x158));
    }
  }
  LOCK();
  plVar2 = (int64_t *)(*(int64_t *)(*param_1 + 8) + 0x3f0);
  *plVar2 = *plVar2 - (int64_t)plVar8;
  UNLOCK();
  LOCK();
  piVar1 = (int *)(*(int64_t *)(*param_1 + 8) + 0x3f8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  lVar4 = *param_1;
  puVar7 = (uint64_t *)param_1[1];
  lVar3 = lVar4 + 0x200380;
  local_var_40 = 0x180068808;
  lStackX_8 = lVar3;
  pstack_special_x_10 = puVar7;
  iVar9 = _Mtx_lock(lVar3);
  if (iVar9 != 0) {
    local_var_40 = 0x180068815;
    __Throw_C_error_std__YAXH_Z(iVar9);
  }
  local_var_40 = 0x18006881f;
  function_069530(puVar7 + 4);
  *puVar7 = *(uint64_t *)(lVar4 + 0x200378);
  *(uint64_t **)(lVar4 + 0x200378) = puVar7;
  local_var_40 = 0x18006883a;
  iVar9 = _Mtx_unlock(lVar3);
  if (iVar9 != 0) {
    local_var_40 = 0x180068847;
    __Throw_C_error_std__YAXH_Z(iVar9);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_067bc0(uint64_t *param_1)
void function_067bc0(uint64_t *param_1)
{
  int8_t stack_array_b8 [48];
  uint64_t *plocal_var_88;
  uint64_t local_var_70;
  uint64_t *plocal_var_68;
  uint64_t local_var_30;
  local_var_70 = 0xfffffffffffffffe;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  plocal_var_68 = param_1;
  function_06b940();
  *param_1 = &rendering_buffer_2208_ptr;
  plocal_var_88 = param_1 + 0x6e;
// WARNING: Subroutine does not return
  memset(plocal_var_88,0,0x200000);
}
// 函数: void function_067f00(void)
void function_067f00(void)
{
  _Mtx_destroy_in_situ();
  return;
}
// 函数: void function_067f30(void)
void function_067f30(void)
{
  _Mtx_destroy_in_situ();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address