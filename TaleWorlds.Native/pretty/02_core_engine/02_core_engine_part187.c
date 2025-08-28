#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part187.c - 24 个函数

/**
 * 初始化引擎核心模块并设置默认配置
 * @param module_config 模块配置指针
 */
void initialize_engine_core_module(uint64_t *module_config)

{
  int32_t *config_data;
  int8_t temp_buffer_1 [32];
  int32_t init_status;
  uint64_t stack_guard_1;
  uint64_t *module_ptr;
  int8_t *buffer_ptr;
  int8_t temp_buffer_2 [32];
  void *resource_ptr;
  int8_t *string_ptr;
  int32_t buffer_size;
  int8_t name_buffer [16];
  ulonglong stack_guard_2;
  
  stack_guard_1 = 0xfffffffffffffffe;
  stack_guard_2 = _DAT_180bf00a8 ^ (ulonglong)temp_buffer_1;
  init_status = 0;
  buffer_ptr = temp_buffer_2;
  resource_ptr = &UNK_1809fdc18;
  string_ptr = name_buffer;
  name_buffer[0] = 0;
  buffer_size = 0;
  module_ptr = module_config;
  strcpy_s(name_buffer,0x10,&system_buffer_ptr);
  initialize_resource_buffer(temp_buffer_2,&resource_ptr);
  initialize_engine_system();
  resource_ptr = &UNK_18098bcb0;
  *module_config = &UNK_18098bcb0;
  module_config[1] = 0;
  *(int32_t *)(module_config + 2) = 0;
  *module_config = &UNK_180a3c3e0;
  module_config[3] = 0;
  module_config[1] = 0;
  *(int32_t *)(module_config + 2) = 0;
  create_engine_instance(module_config,4);
  config_data = (int32_t *)module_config[1];
  *config_data = 0x656e6f44;
  *(int8_t *)(config_data + 1) = 0;
  *(int32_t *)(module_config + 2) = 4;
  init_status = 1;
                    // WARNING: Subroutine does not return
  execute_engine_initialization(stack_guard_2 ^ (ulonglong)temp_buffer_1);
}



/**
 * 配置引擎参数并创建默认实例
 * @param config_ptr 配置指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 配置指针
 */
uint64_t *
configure_engine_parameters(uint64_t *config_ptr,uint64_t param2,uint64_t param3,uint64_t param4)

{
  int32_t *instance_data;
  
  *(int32_t *)(_DAT_180c8a980 + 0x2f8) = *(int32_t *)(_DAT_180c86870 + 0x224);
  *config_ptr = &UNK_18098bcb0;
  config_ptr[1] = 0;
  *(int32_t *)(config_ptr + 2) = 0;
  *config_ptr = &UNK_180a3c3e0;
  config_ptr[3] = 0;
  config_ptr[1] = 0;
  *(int32_t *)(config_ptr + 2) = 0;
  create_engine_instance(config_ptr,4,param3,param4,0,0xfffffffffffffffe);
  instance_data = (int32_t *)config_ptr[1];
  *instance_data = 0x656e6f44;
  *(int8_t *)(instance_data + 1) = 0;
  *(int32_t *)(config_ptr + 2) = 4;
  return config_ptr;
}



/**
 * 执行引擎初始化序列并返回状态
 * @param engine_handle 引擎句柄
 * @param param2 参数2
 * @param init_params 初始化参数
 * @return 引擎句柄
 */
uint64_t execute_engine_initialization_sequence(uint64_t engine_handle,uint64_t param2,uint64_t init_params)

{
  initialize_engine_components(engine_handle,engine_handle,init_params,init_params,0,0xfffffffffffffffe);
  return engine_handle;
}



/**
 * 启动引擎核心系统并初始化组件
 * @param system_ptr 系统指针
 * @param param2 参数2
 * @param startup_params 启动参数
 * @return 系统指针
 */
uint64_t start_engine_core_system(uint64_t system_ptr,uint64_t param2,uint64_t startup_params)

{
  initialize_core_system_components(system_ptr,system_ptr,startup_params,startup_params,0,0xfffffffffffffffe);
  return system_ptr;
}



/**
 * 设置引擎运行环境并配置系统参数
 * @param env_ptr 环境指针
 * @param param2 参数2
 * @param env_config 环境配置
 * @return 环境指针
 */
uint64_t setup_engine_environment(uint64_t env_ptr,uint64_t param2,uint64_t env_config)

{
  configure_engine_environment(env_ptr,env_ptr,env_config,env_config,0,0xfffffffffffffffe);
  return env_ptr;
}



/**
 * 初始化引擎资源管理器并分配内存
 * @param param_1 资源管理器指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 资源管理器指针
 */
uint64_t *
initialize_engine_resource_manager(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  longlong *plVar2;
  void *puVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  plVar2 = (longlong *)FUN_18064e2a0();
  puVar3 = (void *)(*plVar2 + 0x3d8);
  if (puVar3 != &system_buffer_ed80) {
    FUN_1806470a0();
                    // WARNING: Subroutine does not return
    memset(puVar3,0,0x240,param_4,uVar4,uVar5);
  }
  FUN_1806478d0();
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4);
  puVar1 = (int32_t *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(int8_t *)(puVar1 + 1) = 0;
  *(int32_t *)(param_1 + 2) = 4;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 配置引擎显示设置并验证显示器配置
 * @param param_1 配置指针
 */
void
configure_engine_display_settings(uint64_t *param_1)

{
  longlong *plVar1;
  int32_t *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  int8_t auStack_d8 [32];
  int32_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t *puStack_a8;
  ulonglong uStack_48;
  ulonglong uVar6;
  
  lVar3 = _DAT_180c86950;
  uStack_b0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  uVar6 = 0;
  uStack_b8 = 0;
  lVar4 = *(longlong *)(_DAT_180c86950 + 0x1868);
  uVar7 = uVar6;
  uVar8 = uVar6;
  puStack_a8 = param_1;
  if (*(longlong *)(_DAT_180c86950 + 0x1870) - lVar4 >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(uVar8 + lVar4);
      if ((((*(char *)((longlong)plVar1 + 0xde) == '\0') &&
           (*(char *)((longlong)plVar1 + 0xdd) != '\0')) &&
          (*(float *)((longlong)plVar1 + 0x24) == 1920.0)) &&
         (lVar4 = (**(code **)(*plVar1 + 0xb8))(plVar1), lVar4 != 0)) {
        uVar7 = (ulonglong)((int)uVar7 + 1);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      lVar4 = *(longlong *)(lVar3 + 0x1868);
      uVar8 = uVar8 + 8;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(*(longlong *)(lVar3 + 0x1870) - lVar4 >> 3));
    if (1 < (int)uVar7) {
                    // WARNING: Subroutine does not return
      FUN_180062300(_DAT_180c86928,&UNK_180a013c0);
    }
  }
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4);
  puVar2 = (int32_t *)param_1[1];
  *puVar2 = 0x656e6f44;
  *(int8_t *)(puVar2 + 1) = 0;
  *(int32_t *)(param_1 + 2) = 4;
  uStack_b8 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_d8);
}



/**
 * 启动引擎渲染系统并初始化图形设备
 * @param param_1 渲染系统指针
 * @param param_2 参数2
 * @param param_3 启动参数
 * @return 渲染系统指针
 */
uint64_t start_engine_rendering_system(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  FUN_180168430(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 初始化引擎音频系统并配置音频设备
 * @param param_1 音频系统指针
 * @return 音频系统指针
 */
uint64_t * initialize_engine_audio_system(uint64_t *param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  longlong lVar3;
  int iVar4;
  
  FUN_180176060(_DAT_180c8a9d0);
  lVar3 = _DAT_180c8a9d0;
  lVar1 = _DAT_180c8a9d0 + 0x100;
  iVar4 = _Mtx_lock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  (**(code **)(**(longlong **)(lVar3 + 0xe8) + 0xe0))();
  if (*(char *)(lVar3 + 0x1f0) != '\0') {
    (**(code **)(**(longlong **)(lVar3 + 0xe8) + 0xc0))();
  }
  iVar4 = _Mtx_unlock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,0xe);
  puVar2 = (uint64_t *)param_1[1];
  *puVar2 = 0x6c63206568636143;
  *(int32_t *)(puVar2 + 1) = 0x65726165;
  *(int16_t *)((longlong)puVar2 + 0xc) = 0x2e64;
  *(int8_t *)((longlong)puVar2 + 0xe) = 0;
  *(int32_t *)(param_1 + 2) = 0xe;
  return param_1;
}



/**
 * 创建引擎输入管理器并设置输入设备
 * @param param_1 输入管理器指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 输入管理器指针
 */
uint64_t *
create_engine_input_manager(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  void *puStack_38;
  int8_t *puStack_30;
  int32_t uStack_28;
  uint64_t uStack_20;
  
  puStack_38 = &UNK_180a3c3e0;
  uStack_20 = 0;
  puStack_30 = (int8_t *)0x0;
  uStack_28 = 0;
  FUN_1806277c0(&puStack_38,0,param_3,param_4,0,0xfffffffffffffffe);
  uStack_28 = 0;
  if (puStack_30 != (int8_t *)0x0) {
    *puStack_30 = 0;
  }
  FUN_1801cb3e0();
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4);
  puVar1 = (int32_t *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(int8_t *)(puVar1 + 1) = 0;
  *(int32_t *)(param_1 + 2) = 4;
  return param_1;
}



/**
 * 初始化引擎网络系统并配置网络参数
 * @param param_1 网络系统指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 网络系统指针
 */
uint64_t *
initialize_engine_network_system(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  FUN_1801c9a40();
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4,param_3,param_4,uVar2,uVar3);
  puVar1 = (int32_t *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(int8_t *)(puVar1 + 1) = 0;
  *(int32_t *)(param_1 + 2) = 4;
  return param_1;
}



/**
 * 启动引擎物理系统并初始化物理引擎
 * @param param_1 物理系统指针
 * @param param_2 参数2
 * @param param_3 启动参数
 * @return 物理系统指针
 */
uint64_t start_engine_physics_system(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  FUN_1801681e0(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



/**
 * 初始化引擎脚本系统并配置脚本环境
 * @param param_1 脚本系统指针
 * @param param_2 参数2
 * @param param_3 启动参数
 * @return 脚本系统指针
 */
uint64_t start_engine_script_system(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  FUN_180167f80(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



/**
 * 配置引擎AI系统并初始化AI模块
 * @param param_1 AI系统指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return AI系统指针
 */
uint64_t
configure_engine_ai_system(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  uVar1 = FUN_180167a50();
  FUN_180627910(param_1,uVar1,param_3,param_4,uVar2,uVar3);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 创建引擎场景管理器并初始化场景数据
 * @param param_1 场景管理器指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 场景管理器指针
 */
uint64_t *
create_engine_scene_manager(uint64_t *param_1,uint64_t param_2,uint64_t *param_3,longlong *param_4)

{
  int32_t *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  longlong *plStackX_20;
  void *puStack_c8;
  longlong lStack_c0;
  int32_t uStack_b0;
  void *puStack_a8;
  longlong lStack_a0;
  int32_t uStack_90;
  uint64_t uStack_88;
  int8_t *puStack_80;
  uint64_t *puStack_78;
  uint64_t uStack_70;
  int8_t auStack_68 [32];
  int8_t auStack_48 [32];
  
  uVar4 = _DAT_180c8aa08;
  uStack_88 = 0xfffffffffffffffe;
  plStackX_20 = param_4;
  FUN_1806279c0(&puStack_a8,*param_3,param_3,(char)param_4,0);
  FUN_180627ae0(&puStack_c8,&puStack_a8);
  uVar2 = _DAT_180c82868;
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
  puStack_80 = auStack_48;
  puStack_78 = &uStack_70;
  uStack_70 = uVar4;
  FUN_180627ae0(auStack_68,&puStack_c8);
  uVar4 = FUN_1801e77d0(auStack_48,&uStack_70);
  plStackX_20 = (longlong *)FUN_18006b640(uVar3,uVar4);
  if (plStackX_20 != (longlong *)0x0) {
    (**(code **)(*plStackX_20 + 0x28))(plStackX_20);
  }
  FUN_18005e300(uVar2,&plStackX_20);
  puStack_c8 = &UNK_180a3c3e0;
  if (lStack_c0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_c0 = 0;
  uStack_b0 = 0;
  puStack_c8 = &UNK_18098bcb0;
  puStack_a8 = &UNK_180a3c3e0;
  if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_a0 = 0;
  uStack_90 = 0;
  puStack_a8 = &UNK_18098bcb0;
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4);
  puVar1 = (int32_t *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(int8_t *)(puVar1 + 1) = 0;
  *(int32_t *)(param_1 + 2) = 4;
  return param_1;
}



/**
 * 初始化引擎动画系统并配置动画参数
 * @param param_1 动画系统指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 动画系统指针
 */
uint64_t
initialize_engine_animation_system(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  uVar1 = FUN_1801676b0();
  FUN_180627910(param_1,uVar1,param_3,param_4,uVar2,uVar3);
  return param_1;
}



/**
 * 启动引擎粒子系统并初始化粒子效果
 * @param param_1 粒子系统指针
 * @param param_2 参数2
 * @param param_3 启动参数
 * @return 粒子系统指针
 */
uint64_t start_engine_particle_system(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  FUN_1801672e0(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 创建引擎光照系统并配置光源参数
 * @param param_1 光照系统指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 光照系统指针
 */
uint64_t *
create_engine_lighting_system(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int32_t uVar5;
  uint64_t uVar6;
  
  lVar2 = _DAT_180c868e8;
  uVar6 = 0xfffffffffffffffe;
  uVar5 = 0;
  for (lVar3 = *(longlong *)(_DAT_180c868e8 + 8); lVar3 != lVar2; lVar3 = func_0x00018066bd70(lVar3)
      ) {
    iVar4 = 0;
    if (*(longlong *)(lVar3 + 0x30) - *(longlong *)(lVar3 + 0x28) >> 3 != 0) {
      do {
        FUN_18020b790(lVar2,*(int32_t *)(lVar3 + 0x20),iVar4,param_4,uVar5,uVar6);
        iVar4 = iVar4 + 1;
      } while ((ulonglong)(longlong)iVar4 <
               (ulonglong)(*(longlong *)(lVar3 + 0x30) - *(longlong *)(lVar3 + 0x28) >> 3));
    }
  }
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4);
  puVar1 = (int32_t *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(int8_t *)(puVar1 + 1) = 0;
  *(int32_t *)(param_1 + 2) = 4;
  return param_1;
}



/**
 * 启动引擎材质系统并初始化材质库
 * @param param_1 材质系统指针
 * @param param_2 参数2
 * @param param_3 启动参数
 * @return 材质系统指针
 */
uint64_t start_engine_material_system(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  FUN_180166dd0(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



/**
 * 初始化引擎阴影系统并配置阴影参数
 * @param param_1 阴影系统指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 阴影系统指针
 */
uint64_t
initialize_engine_shadow_system(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180166b10(param_1,param_1,param_3,param_4,0,0xfffffffffffffffe);
  return param_1;
}



/**
 * 配置引擎后处理系统并初始化效果
 * @param param_1 后处理系统指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 后处理系统指针
 */
uint64_t
configure_engine_post_processing_system(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180166950(param_1,param_1,param_3,param_4,0,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 处理引擎渲染队列并提交渲染命令
 * @param param_1 渲染队列指针
 * @param param_2 参数2
 * @param param_3 队列数据
 * @return 渲染队列指针
 */
uint64_t process_engine_render_queue(uint64_t param_1,uint64_t param_2,longlong *param_3)

{
  void *puVar1;
  
  if (param_3[1] - *param_3 >> 5 == 0) {
    puVar1 = &UNK_180a081b4;
  }
  else {
    FUN_18032c450(*(uint64_t *)(_DAT_180c86870 + 0x3d8));
    puVar1 = &UNK_180a081bc;
  }
  FUN_180627910(param_1,puVar1);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 管理引擎纹理资源并处理纹理缓存
 * @param param_1 纹理管理器指针
 * @param param_2 参数2
 * @param param_3 纹理数据
 * @param param_4 参数4
 * @return 纹理管理器指针
 */
uint64_t manage_engine_texture_resources(uint64_t param_1,uint64_t param_2,longlong *param_3,uint64_t param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  void *puVar4;
  void *puStack_38;
  void *puStack_30;
  int32_t uStack_28;
  ulonglong uStack_20;
  
  if (param_3[1] - *param_3 >> 5 == 0) {
    puStack_38 = &UNK_180a3c3e0;
    uStack_20 = 0;
    puStack_30 = (void *)0x0;
    uStack_28 = 0;
    FUN_180628420(&puStack_38,*(int32_t *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0x160),param_3
                  ,param_4,0,0xfffffffffffffffe);
    puVar4 = &system_buffer_ptr;
    if (puStack_30 != (void *)0x0) {
      puVar4 = puStack_30;
    }
    puStack_38 = &UNK_180a3c3e0;
    if (puStack_30 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_30 = (void *)0x0;
    uStack_20 = uStack_20 & 0xffffffff00000000;
    puStack_38 = &UNK_18098bcb0;
  }
  else {
    lVar1 = *(longlong *)(_DAT_180c86870 + 0x3d8);
    uVar2 = atoi(*(uint64_t *)(*param_3 + 8));
    if (*(int *)(lVar1 + 0x110) == 3) {
      FUN_1803214c0(lVar1);
    }
    if ((ulonglong)uVar2 < *(longlong *)(lVar1 + 0x160) - 2U) {
      FUN_180323d00(lVar1,4,2);
      *(uint64_t *)(lVar1 + 0x158) = 0xffffffffffffffff;
      *(uint64_t *)(lVar1 + 0xb0) = 0;
      *(int32_t *)(lVar1 + 0xb8) = 0;
      iVar3 = _Mtx_lock(lVar1 + 0x3d8);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      FUN_18033ad00(lVar1 + 0x3a8);
      iVar3 = _Mtx_unlock(lVar1 + 0x3d8);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      *(longlong *)(lVar1 + 0x150) = (longlong)(int)uVar2;
      FUN_1803336f0(lVar1);
      *(int32_t *)(lVar1 + 0x144) = 0;
      FUN_180323d00(lVar1,10);
    }
    puVar4 = &UNK_180a081bc;
  }
  FUN_180627910(param_1,puVar4);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 初始化引擎着色器系统并编译着色器
 * @param param_1 着色器系统指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 着色器系统指针
 */
uint64_t *
initialize_engine_shader_system(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  
  FUN_180321e80(*(longlong *)(_DAT_180c86870 + 0x3d8),
                1.0 / *(float *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0x13c),param_3,param_4,0,
                0xfffffffffffffffe);
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,6);
  puVar1 = (int32_t *)param_1[1];
  *puVar1 = 0x65766153;
  *(int16_t *)(puVar1 + 1) = 0x2164;
  *(int8_t *)((longlong)puVar1 + 6) = 0;
  *(int32_t *)(param_1 + 2) = 6;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 创建引擎缓冲区管理器并分配内存
 * @param param_1 缓冲区管理器指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 缓冲区管理器指针
 */
uint64_t *
create_engine_buffer_manager(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  void *puStack_28;
  longlong lStack_20;
  int32_t uStack_10;
  
  FUN_18032c0b0(*(uint64_t *)(_DAT_180c86870 + 0x3d8),&puStack_28,param_3,param_4,0,
                0xfffffffffffffffe);
  puStack_28 = &UNK_180a3c3e0;
  if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_20 = 0;
  uStack_10 = 0;
  puStack_28 = &UNK_18098bcb0;
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,6);
  puVar1 = (int32_t *)param_1[1];
  *puVar1 = 0x65766153;
  *(int16_t *)(puVar1 + 1) = 0x2164;
  *(int8_t *)((longlong)puVar1 + 6) = 0;
  *(int32_t *)(param_1 + 2) = 6;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 管理引擎着色器参数并更新uniform变量
 * @param param_1 着色器管理器指针
 * @param param_2 参数2
 * @param param_3 着色器参数
 * @param param_4 参数4
 * @return 着色器管理器指针
 */
uint64_t *
manage_engine_shader_parameters(uint64_t *param_1,uint64_t param_2,longlong *param_3,uint64_t param_4)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  int32_t *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  uint64_t uStackX_20;
  
  iVar7 = 0;
  uStackX_20 = param_4;
  if ((param_3[1] - *param_3 & 0xffffffffffffffe0U) == 0) {
    *(bool *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0xae0) =
         *(char *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0xae0) == '\0';
  }
  else {
    iVar5 = atoi(*(uint64_t *)(*param_3 + 8));
    uStackX_20 = CONCAT44(uStackX_20._4_4_,iVar5);
    lVar2 = *(longlong *)(_DAT_180c86870 + 0x3d8);
    piVar3 = *(int **)(lVar2 + 0xac8);
    piVar6 = *(int **)(lVar2 + 0xac0);
    uVar8 = (longlong)piVar3 - (longlong)piVar6 >> 2;
    if (uVar8 != 0) {
      do {
        if (*piVar6 == iVar5) {
          for (piVar6 = *(int **)(lVar2 + 0xac0); (piVar6 != piVar3 && (*piVar6 != iVar5));
              piVar6 = piVar6 + 1) {
          }
          piVar1 = piVar6 + 1;
          if ((piVar1 < piVar3) && (piVar1 != piVar3)) {
                    // WARNING: Subroutine does not return
            memmove(piVar6,piVar1,(longlong)piVar3 - (longlong)piVar1);
          }
          *(int **)(lVar2 + 0xac8) = piVar3 + -1;
          goto LAB_18016f158;
        }
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 1;
      } while ((ulonglong)(longlong)iVar7 < uVar8);
    }
    FUN_1800571e0(lVar2 + 0xac0,&uStackX_20);
  }
LAB_18016f158:
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4);
  puVar4 = (int32_t *)param_1[1];
  *puVar4 = 0x656e6f44;
  *(int8_t *)(puVar4 + 1) = 0;
  *(int32_t *)(param_1 + 2) = 4;
  return param_1;
}



/**
 * 启动引擎几何系统并初始化几何数据
 * @param param_1 几何系统指针
 * @param param_2 参数2
 * @param param_3 启动参数
 * @return 几何系统指针
 */
uint64_t start_engine_geometry_system(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  FUN_180166580(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



/**
 * 初始化引擎网格系统并处理网格数据
 * @param param_1 网格系统指针
 * @param param_2 参数2
 * @param param_3 启动参数
 * @return 网格系统指针
 */
uint64_t start_engine_mesh_system(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  FUN_1801661b0(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



/**
 * 启动引擎骨骼系统并初始化骨骼动画
 * @param param_1 骨骼系统指针
 * @param param_2 参数2
 * @param param_3 启动参数
 * @return 骨骼系统指针
 */
uint64_t start_engine_skeleton_system(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  FUN_180165f80(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



/**
 * 初始化引擎变形系统并处理变形动画
 * @param param_1 变形系统指针
 * @param param_2 参数2
 * @param param_3 启动参数
 * @return 变形系统指针
 */
uint64_t start_engine_morph_system(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  FUN_180165bb0(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 创建引擎渲染管线并配置渲染状态
 * @param param_1 渲染管线指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 渲染管线指针
 */
uint64_t *
create_engine_render_pipeline(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  
  *(int8_t *)(_DAT_180c86950 + 0x1610) = 1;
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (int32_t *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(int8_t *)(puVar1 + 1) = 0;
  *(int32_t *)(param_1 + 2) = 4;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 初始化引擎帧缓冲区并设置渲染目标
 * @param param_1 帧缓冲区指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 帧缓冲区指针
 */
uint64_t *
initialize_engine_framebuffer(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  longlong lVar2;
  
  lVar2 = _DAT_180c8a988;
  FUN_180058370(_DAT_180c8a988,*(uint64_t *)(_DAT_180c8a988 + 0x10),param_3,param_4,0,
                0xfffffffffffffffe);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(uint64_t *)(lVar2 + 0x10) = 0;
  *(int8_t *)(lVar2 + 0x18) = 0;
  *(uint64_t *)(lVar2 + 0x20) = 0;
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4);
  puVar1 = (int32_t *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(int8_t *)(puVar1 + 1) = 0;
  *(int32_t *)(param_1 + 2) = 4;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 配置引擎深度缓冲区并设置深度测试
 * @param param_1 深度缓冲区指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 深度缓冲区指针
 */
uint64_t *
configure_engine_depth_buffer(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  
  *(int8_t *)(_DAT_180c86870 + 0x2a) = 0;
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (int32_t *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(int8_t *)(puVar1 + 1) = 0;
  *(int32_t *)(param_1 + 2) = 4;
  return param_1;
}



/**
 * 初始化引擎模板缓冲区并设置模板测试
 * @param param_1 模板缓冲区指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 模板缓冲区指针
 */
uint64_t
initialize_engine_stencil_buffer(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)

{
  void *puVar1;
  
  puVar1 = &system_buffer_89e8;
  if (*(int *)*param_4 != 0) {
    puVar1 = &system_buffer_8120;
  }
  FUN_180627910(param_1,puVar1,param_3,param_4,0,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 创建引擎渲染目标并设置输出缓冲区
 * @param param_1 渲染目标指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 渲染目标指针
 */
uint64_t *
create_engine_render_target(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  uVar1 = 0;
  if (*(longlong **)(_DAT_180c8ed08 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(_DAT_180c8ed08 + 0x18) + 0x50))();
  }
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,0,param_3,param_4,uVar1,uVar2);
  *(int32_t *)(param_1 + 2) = 0;
  if ((int8_t *)param_1[1] != (int8_t *)0x0) {
    *(int8_t *)param_1[1] = 0;
  }
  return param_1;
}



/**
 * 初始化引擎视口系统并设置视口参数
 * @param param_1 视口系统指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 视口系统指针
 */
uint64_t
initialize_engine_viewport_system(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  uVar1 = FUN_1801659e0();
  FUN_180627910(param_1,uVar1,param_3,param_4,uVar2,uVar3);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 配置引擎裁剪区域并设置裁剪参数
 * @param param_1 裁剪区域指针
 * @param param_2 参数2
 * @param param_3 裁剪参数1
 * @param param_4 裁剪参数2
 * @return 裁剪区域指针
 */
uint64_t configure_engine_scissor_region(uint64_t param_1,uint64_t param_2,longlong *param_3,longlong *param_4)

{
  uint64_t uVar1;
  longlong *plVar2;
  longlong *plStackX_18;
  longlong *plStackX_20;
  longlong alStack_40 [2];
  void *puStack_30;
  code *pcStack_28;
  
  plStackX_18 = param_3;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3,0,0xfffffffffffffffe);
  plStackX_18 = alStack_40;
  alStack_40[0] = *param_4;
  puStack_30 = &UNK_18016f9b0;
  pcStack_28 = FUN_18016f990;
  plVar2 = (longlong *)FUN_18006b640(uVar1,alStack_40);
  plStackX_20 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  *(int32_t *)*param_4 = 1;
  uVar1 = _DAT_180c82868;
  plStackX_18 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  FUN_18005e110(uVar1,&plStackX_18);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  FUN_180627910(param_1,&system_buffer_ptr);
  return param_1;
}





/**
 * 重置引擎渲染状态并清理渲染缓存
 * @param param_1 渲染状态指针
 */
void reset_engine_render_state(uint64_t *param_1)

{
  FUN_1800547b0();
  *(int32_t *)*param_1 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 初始化引擎清除操作并设置清除颜色
 * @param param_1 清除操作指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 清除操作指针
 */
uint64_t
initialize_engine_clear_operation(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puVar1;
  
  if (*(int *)(_DAT_180c86908 + 0x3f0) == 0) {
    puVar1 = &UNK_180a080d8;
  }
  else {
    FUN_180170ac0(0,&UNK_180a08100,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = &system_buffer_80cc;
  }
  FUN_180627910(param_1,puVar1);
  return param_1;
}



/**
 * 启动引擎绘制系统并初始化绘制命令
 * @param param_1 绘制系统指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 绘制系统指针
 */
uint64_t
start_engine_drawing_system(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180165950(param_1,param_1,param_3,param_4,0,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 创建引擎索引缓冲区并设置索引数据
 * @param param_1 索引缓冲区指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 索引缓冲区指针
 */
uint64_t *
create_engine_index_buffer(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  
  if (*(int *)(_DAT_180c86890 + 8) == 1) {
    *(int32_t *)(_DAT_180c86890 + 8) = 2;
  }
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (int32_t *)param_1[1];
  *puVar1 = 0x656e6f64;
  *(int8_t *)(puVar1 + 1) = 0;
  *(int32_t *)(param_1 + 2) = 4;
  return param_1;
}



/**
 * 初始化引擎顶点缓冲区并设置顶点数据
 * @param param_1 顶点缓冲区指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 顶点缓冲区指针
 */
uint64_t *
initialize_engine_vertex_buffer(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  FUN_1800da9b0();
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4,param_3,param_4,uVar2,uVar3);
  puVar1 = (int32_t *)param_1[1];
  *puVar1 = 0x656e6f64;
  *(int8_t *)(puVar1 + 1) = 0;
  *(int32_t *)(param_1 + 2) = 4;
  return param_1;
}



/**
 * 管理引擎实例化数据并处理实例化绘制
 * @param param_1 实例化数据指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 实例化数据指针
 */
uint64_t *
manage_engine_instanced_data(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)

{
  longlong lVar1;
  void *puStack_28;
  longlong lStack_20;
  
  lVar1 = (*(code *)*param_4)(&puStack_28);
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *(int32_t *)(param_1 + 2) = *(int32_t *)(lVar1 + 0x10);
  param_1[1] = *(uint64_t *)(lVar1 + 8);
  *(int32_t *)((longlong)param_1 + 0x1c) = *(int32_t *)(lVar1 + 0x1c);
  *(int32_t *)(param_1 + 3) = *(int32_t *)(lVar1 + 0x18);
  *(int32_t *)(lVar1 + 0x10) = 0;
  *(uint64_t *)(lVar1 + 8) = 0;
  *(uint64_t *)(lVar1 + 0x18) = 0;
  puStack_28 = &UNK_180a3c3e0;
  if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return param_1;
}



/**
 * 初始化引擎间接绘制并设置间接参数
 * @param param_1 间接绘制指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 间接绘制指针
 */
uint64_t *
initialize_engine_indirect_drawing(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{


/**
 * 清理引擎资源并释放内存
 */
void cleanup_engine_resources(void)

{
  return;
}





