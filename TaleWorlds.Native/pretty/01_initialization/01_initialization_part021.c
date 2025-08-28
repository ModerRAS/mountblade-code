#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part021.c - 初始化模块第21部分
// 包含11个函数，主要处理资源加载、场景管理和系统初始化

// 函数：处理资源加载和初始化
// 原函数名：FUN_180054360
void process_resource_initialization(int64_t *engine_context, int64_t resource_params)

{
  // 局部变量声明
  uint resource_id;         // 资源ID
  int init_result;          // 初始化结果
  uint64_t resource_handle; // 资源句柄
  int64_t *resource_data;  // 资源数据指针
  void *resource_name;  // 资源名称
  int64_t data_offset;     // 数据偏移量
  uint64_t data_size;      // 数据大小
  
  // 栈变量
  int8_t stack_buffer[32];      // 栈缓冲区
  int32_t stack_guard;          // 栈保护
  void *resource_path;         // 资源路径
  int64_t path_length;            // 路径长度
  uint path_capacity;              // 路径容量
  uint64_t path_handle;          // 路径句柄
  int32_t path_flags;           // 路径标志
  void *path_data;            // 路径数据
  int64_t path_offset;            // 路径偏移量
  uint path_size;                  // 路径大小
  uint64_t path_cookie;          // 路径cookie
  void *module_name;           // 模块名称
  int64_t name_offset;            // 名称偏移量
  int32_t module_flags;         // 模块标志
  uint64_t module_cookie;         // 模块cookie
  int32_t buffer_size;         // 缓冲区大小
  uint buffer_capacity;            // 缓冲区容量
  int8_t buffer_flag;          // 缓冲区标志
  int32_t alignment_flag;       // 对齐标志
  void *string_buffer;        // 字符串缓冲区
  int64_t string_offset;          // 字符串偏移量
  int string_length;               // 字符串长度
  int32_t string_flags;         // 字符串标志
  void **resource_ptr;        // 资源指针
  void *temp_buffer;          // 临时缓冲区
  int64_t temp_offset;            // 临时偏移量
  int32_t temp_flags;           // 临时标志
  int32_t float_values[12];     // 浮点数值数组
  int8_t byte_flag;            // 字节标志
  int32_t alignment_value;      // 对齐值
  int32_t reserved_value;       // 保留值
  uint64_t handle_guard;         // 句柄保护
  void **handle_ptr;           // 句柄指针
  void *data_buffer;          // 数据缓冲区
  int8_t *char_buffer;         // 字符缓冲区
  int32_t data_flags;           // 数据标志
  int8_t large_buffer[136];    // 大缓冲区
  uint64_t security_cookie;       // 安全cookie
  
  // 初始化安全保护机制
  handle_guard = 0xfffffffffffffffe;
  security_cookie = GET_SECURITY_COOKIE() ^ (uint64_t)stack_buffer;
  
  // 初始化资源数据结构
  path_flags = 0;
  handle_ptr = &module_name;
  module_name = &system_data_buffer_ptr;  // 设置默认空名称
  module_cookie = 0;
  name_offset = 0;
  module_flags = 0;
  buffer_capacity = 0x100;  // 设置256字节缓冲区
  buffer_flag = 0;
  alignment_flag = 0;
  
  // 获取资源名称
  resource_name = &system_buffer_ptr;  // 默认资源名称
  if (*(void **)(resource_params + 8) != (void *)0x0) {
    resource_name = *(void **)(resource_params + 8);  // 使用自定义名称
  }
  
  // 设置资源名称
  FUN_180627c50(&module_name, resource_name);
  buffer_size = 0;
  buffer_capacity = buffer_capacity & 0xffffff00;  // 对齐到256字节边界
  uint64_t alloc_result = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x60d30,0x10,0x1f);
  int64_t *resource_manager = (int64_t *)FUN_1801954d0(alloc_result,&puStack_1c0);
  ppuStack_170 = (void **)resource_manager;
  if (resource_manager != (int64_t *)0x0) {
    (**(code **)(*resource_manager + 0x28))(resource_manager);
  }
  uStack_148 = 0x3f800000;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_134 = 0x3f800000;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0x3f800000;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0x3f800000;
  uStack_107 = 0x1010101;
  uStack_103 = 1;
  uStack_108 = 1;
  puStack_e8 = &unknown_var_3432_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = *(int32_t *)(param_2 + 0x10);
  puVar5 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar5 = *(void **)(param_2 + 8);
  }
  strcpy_s(auStack_d0,0x80,puVar5);
  FUN_18019e140(&puStack_190,&puStack_e8);
  puStack_e8 = &system_state_ptr;
  puStack_1e0 = &system_data_buffer_ptr;
  uStack_1c8 = 0;
  lStack_1d8 = 0;
  uStack_1d0 = 0;
  lVar6 = *param_1;
  FUN_1806279c0(&puStack_168,param_2);
  iVar2 = FUN_1801426a0(lVar6,&puStack_168);
  puStack_168 = &system_data_buffer_ptr;
  if (lStack_160 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_160 = 0;
  uStack_150 = 0;
  puStack_168 = &system_state_ptr;
  if ((iVar2 < 0) ||
     (lVar6 = *(int64_t *)(*param_1 + 0x888),
     (uint64_t)(*(int64_t *)(*param_1 + 0x890) - lVar6 >> 5) <= (uint64_t)(int64_t)iVar2)) {
    lVar6 = FUN_180628ca0();
  }
  else {
    lVar6 = (int64_t)iVar2 * 0x20 + lVar6;
  }
  puStack_208 = &system_data_buffer_ptr;
  uStack_1f0 = 0;
  lStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1e8 = 1;
  uVar1 = *(uint *)(lVar6 + 0x10);
  uVar7 = (uint64_t)uVar1;
  if (*(int64_t *)(lVar6 + 8) != 0) {
    CoreEngineDataBufferProcessor(&puStack_208,uVar7);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lStack_200,*(uint64_t *)(lVar6 + 8),uVar7);
  }
  if (lStack_200 != 0) {
    *(int8_t *)(uVar7 + lStack_200) = 0;
  }
  uStack_1f0 = CONCAT44(*(uint *)(lVar6 + 0x1c),(int32_t)uStack_1f0);
  if (0 < iStack_180) {
    uStack_1f8 = uVar1;
    CoreEngineDataBufferProcessor(&puStack_208,iStack_180);
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)uStack_1f8 + lStack_200,lStack_188,(int64_t)(iStack_180 + 1));
  }
  lStack_1d8 = lStack_200;
  uStack_1c8._0_4_ = (int32_t)uStack_1f0;
  uStack_1f8 = 0;
  uStack_1e8 = 0;
  lStack_200 = 0;
  uStack_1f0 = 0;
  puStack_208 = &system_state_ptr;
  uStack_218 = 0xffffffff;
  uStack_1d0 = uVar1;
  uStack_1c8._4_4_ = *(uint *)(lVar6 + 0x1c);
  FUN_1801a6440(resource_manager,init_system_data_memory,&puStack_1e0,&uStack_148);
  FUN_18019e260(resource_manager);
  (**(code **)(*(int64_t *)engine_context[0x56] + 0x138))((int64_t *)engine_context[0x56],resource_manager);
  FUN_180199500(resource_manager,0x3d072b02,1);
  FUN_1801a2ea0(resource_manager);
  (**(code **)(*(int64_t *)engine_context[0x56] + 0x140))((int64_t *)engine_context[0x56],resource_manager);
  Sleep(1000);
  puStack_1e0 = &system_data_buffer_ptr;
  if (lStack_1d8 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_1d8 = 0;
  uStack_1c8 = (uint64_t)uStack_1c8._4_4_ << 0x20;
  puStack_1e0 = &system_state_ptr;
  puStack_190 = &system_data_buffer_ptr;
  if (lStack_188 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_188 = 0;
  uStack_178 = 0;
  puStack_190 = &system_state_ptr;
  if (resource_manager != (int64_t *)0x0) {
    (**(code **)(*resource_manager + 0x38))(resource_manager);
  }
  ppuStack_170 = &puStack_1c0;
  puStack_1c0 = &system_data_buffer_ptr;
  if (lStack_1b8 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_1b8 = 0;
  uStack_1a8 = uStack_1a8 & 0xffffffff00000000;
  puStack_1c0 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 批量处理游戏模块初始化
 * 遍历所有模块并逐个初始化，处理模块间的依赖关系
 * 原函数名：FUN_1800547b0
 */
void batch_initialize_game_modules(void)

{
  // 模块遍历和初始化变量
  uint module_index;                    // 模块索引
  int64_t *module_registry;            // 模块注册表
  uint64_t *module_array;             // 模块数组
  char path_separator;                  // 路径分隔符
  uint64_t *module_start;             // 模块起始地址
  int8_t *module_name_buffer;       // 模块名称缓冲区
  int32_t *module_flags;             // 模块标志
  int dependency_index;                 // 依赖索引
  int current_index;                    // 当前索引
  int64_t module_address;              // 模块地址
  uint64_t module_size;                // 模块大小
  uint64_t *module_end;               // 模块结束地址
  int dependency_count;                 // 依赖计数
  int64_t total_modules;                // 总模块数
  uint *module_entry;                   // 模块入口点
  void *module_data;               // 模块数据
  int32_t module_status;             // 模块状态
  
  // 栈变量
  int8_t stack_guard[32];           // 栈保护
  void *path_buffer;               // 路径缓冲区
  int8_t *module_path;              // 模块路径
  uint path_length;                     // 路径长度
  uint64_t path_handle;               // 路径句柄
  void *path_data;                 // 路径数据
  int8_t *name_buffer;              // 名称缓冲区
  uint name_length;                     // 名称长度
  uint64_t name_cookie;                // 名称cookie
  void *name_handle;               // 名称句柄
  int8_t *file_path;                // 文件路径
  int32_t file_size;                 // 文件大小
  uint64_t file_cookie;                // 文件cookie
  int loop_counter;                     // 循环计数器
  void *temp_handle;                // 临时句柄
  int8_t *temp_buffer;              // 临时缓冲区
  int32_t temp_flags;                // 临时标志
  uint64_t temp_cookie;                // 临时cookie
  void *data_handle;               // 数据句柄
  int64_t data_offset;                 // 数据偏移量
  int data_size;                        // 数据大小
  int32_t data_flags;                // 数据标志
  int64_t *global_registry;            // 全局注册表
  int64_t module_count;                // 模块计数
  void *module_info;               // 模块信息
  void *module_config;             // 模块配置
  int32_t config_flags;              // 配置标志
  void *init_data;                 // 初始化数据
  void *dependency_data;           // 依赖数据
  int64_t dependency_offset;           // 依赖偏移量
  int32_t dependency_flags;          // 依赖标志
  uint64_t *module_start_ptr;         // 模块起始指针
  uint64_t *module_end_ptr;           // 模块结束指针
  uint64_t uStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  plStack_a8 = system_main_module_state;
  lVar14 = *(int64_t *)(*system_main_module_state + 0x890) - *(int64_t *)(*system_main_module_state + 0x888) >> 5;
  iStack_f8 = 0;
  lStack_a0 = lVar14;
  if (0 < (int)lVar14) {
    do {
      iVar9 = iStack_f8;
      iVar13 = 0;
      if (iStack_f8 < 0) {
LAB_18005485e:
        lVar10 = FUN_180628ca0();
      }
      else {
        lVar10 = *(int64_t *)(*system_main_module_state + 0x888);
        if ((uint64_t)(*(int64_t *)(*system_main_module_state + 0x890) - lVar10 >> 5) <=
            (uint64_t)(int64_t)iStack_f8) goto LAB_18005485e;
        lVar10 = (int64_t)iStack_f8 * 0x20 + lVar10;
      }
      puStack_138 = &system_data_buffer_ptr;
      uStack_120 = 0;
      puStack_130 = (int8_t *)0x0;
      uStack_128 = 0;
      CoreEngineDataBufferProcessor(&puStack_138,*(int32_t *)(lVar10 + 0x10));
      if (*(int *)(lVar10 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_130,*(uint64_t *)(lVar10 + 8),*(int *)(lVar10 + 0x10) + 1);
      }
      if (*(int64_t *)(lVar10 + 8) != 0) {
        uStack_128 = 0;
        if (puStack_130 != (int8_t *)0x0) {
          *puStack_130 = 0;
        }
        uStack_120 = uStack_120 & 0xffffffff;
      }
      if (iVar9 < 0) {
LAB_180054912:
        lVar10 = FUN_180628ca0();
      }
      else {
        lVar10 = *(int64_t *)(*system_main_module_state + 0x8a8);
        if ((uint64_t)(*(int64_t *)(*system_main_module_state + 0x8b0) - lVar10 >> 5) <
            (uint64_t)(int64_t)iVar9) goto LAB_180054912;
        lVar10 = (int64_t)iVar9 * 0x20 + lVar10;
      }
      puStack_118 = &system_data_buffer_ptr;
      uStack_100 = 0;
      puStack_110 = (int8_t *)0x0;
      uStack_108 = 0;
      CoreEngineDataBufferProcessor(&puStack_118,*(int32_t *)(lVar10 + 0x10));
      if (*(int *)(lVar10 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_110,*(uint64_t *)(lVar10 + 8),*(int *)(lVar10 + 0x10) + 1);
      }
      if (*(int64_t *)(lVar10 + 8) != 0) {
        uStack_108 = 0;
        if (puStack_110 != (int8_t *)0x0) {
          *puStack_110 = 0;
        }
        uStack_100 = uStack_100 & 0xffffffff;
      }
      iVar8 = uStack_128 + 8;
      CoreEngineDataBufferProcessor(&puStack_138,iVar8);
      *(uint64_t *)(puStack_130 + uStack_128) = 0x6a624f656e656353;
      *(int8_t *)((int64_t)(puStack_130 + uStack_128) + 8) = 0;
      uStack_128 = iVar8;
      cVar4 = FUN_180624a00(&puStack_138);
      if (cVar4 == '\0') {
        puStack_118 = &system_data_buffer_ptr;
        if (puStack_110 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        puStack_110 = (int8_t *)0x0;
        uStack_100 = uStack_100 & 0xffffffff00000000;
        puStack_118 = &system_state_ptr;
        puStack_138 = &system_data_buffer_ptr;
        if (puStack_130 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
      }
      else {
        puStack_58 = (uint64_t *)0x0;
        puStack_50 = (uint64_t *)0x0;
        uStack_48 = 0;
        uStack_40 = 3;
        FUN_18062c5f0(&puStack_138,&puStack_58);
        puVar5 = puStack_50;
        puVar3 = puStack_58;
        lVar10 = (int64_t)puStack_50 - (int64_t)puStack_58;
        FUN_18004b100(&puStack_d0);
        puVar6 = &system_buffer_ptr;
        if (puStack_110 != (int8_t *)0x0) {
          puVar6 = puStack_110;
        }
        System_DataHandler(&puStack_d0,&unknown_var_6404_ptr,puVar6);
        cVar4 = FUN_180624a00(&puStack_d0);
        if (cVar4 == '\0') {
          FUN_180624910(&puStack_d0);
        }
        int64_t *module_registry = global_registry;
        int dependency_count = (int)(lVar10 >> 5);
        int64_t dependency_offset = (int64_t)dependency_count;
        if (0 < dependency_count) {
          uint *module_entry = (uint *)(puVar3 + 2);
          do {
            FUN_180061db0();
            FUN_180061be0();
            puStack_158 = &system_data_buffer_ptr;
            uStack_140._0_4_ = 0;
            uStack_140._4_4_ = 0;
            puStack_150 = (int8_t *)0x0;
            uStack_148 = 0;
            CoreEngineDataBufferProcessor(&puStack_158,*puVar15);
            if (*puVar15 != 0) {
                    // WARNING: Subroutine does not return
              memcpy(puStack_150,*(uint64_t *)(puVar15 + -2),*puVar15 + 1);
            }
            if (*(int64_t *)(puVar15 + -2) != 0) {
              uStack_148 = 0;
              if (puStack_150 != (int8_t *)0x0) {
                *puStack_150 = 0;
              }
              uStack_140._4_4_ = 0;
            }
            iVar9 = uStack_148 + 0xd;
            CoreEngineDataBufferProcessor(&puStack_158,iVar9);
            puVar5 = (uint64_t *)(puStack_150 + uStack_148);
            *puVar5 = 0x782e656e6563732f;
            *(int32_t *)(puVar5 + 1) = 0x6e656373;
            *(int16_t *)((int64_t)puVar5 + 0xc) = 0x65;
            puVar6 = &system_buffer_ptr;
            if (puStack_150 != (int8_t *)0x0) {
              puVar6 = puStack_150;
            }
            uStack_148 = iVar9;
            lVar14 = strstr(puVar6,&unknown_var_6424_ptr);
            if (lVar14 == 0) {
              puVar6 = &system_buffer_ptr;
              if (puStack_150 != (int8_t *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&unknown_var_6456_ptr);
              if (lVar14 != 0) goto LAB_180054ec9;
              puVar6 = &system_buffer_ptr;
              if (puStack_150 != (int8_t *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&unknown_var_6480_ptr);
              if (lVar14 != 0) goto LAB_180054ec9;
              puVar6 = &system_buffer_ptr;
              if (puStack_150 != (int8_t *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&unknown_var_6504_ptr);
              if (lVar14 != 0) goto LAB_180054ec9;
              puVar6 = &system_buffer_ptr;
              if (puStack_150 != (int8_t *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&unknown_var_6536_ptr);
              if (lVar14 != 0) goto LAB_180054ec9;
              cVar4 = FUN_180624af0(&puStack_158);
              if (cVar4 == '\0') {
                uStack_148 = 0;
                if (puStack_150 != (int8_t *)0x0) {
                  *puStack_150 = 0;
                }
                uVar1 = *puVar15;
                uVar11 = (uint64_t)uVar1;
                if (*(int64_t *)(puVar15 + -2) != 0) {
                  CoreEngineDataBufferProcessor(&puStack_158,uVar11);
                }
                if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
                  memcpy(puStack_150,*(uint64_t *)(puVar15 + -2),uVar11);
                }
                if (puStack_150 != (int8_t *)0x0) {
                  puStack_150[uVar11] = 0;
                }
                uStack_140._4_4_ = puVar15[3];
                uStack_148 = uVar1;
                CoreEngineDataBufferProcessor(&puStack_158,0x12);
                puVar7 = (int32_t *)(puStack_150 + uStack_148);
                *puVar7 = 0x6563732f;
                puVar7[1] = 0x782e656e;
                puVar7[2] = 0x2e6f6373;
                puVar7[3] = 0x65637378;
                *(int16_t *)(puVar7 + 4) = 0x656e;
                *(int8_t *)((int64_t)puVar7 + 0x12) = 0;
                uStack_148 = 0x12;
                cVar4 = FUN_180624af0(&puStack_158);
                if (cVar4 != '\0') goto LAB_180054d28;
                puStack_158 = &system_data_buffer_ptr;
                if (puStack_150 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                uStack_140 = (uint64_t)uStack_140._4_4_ << 0x20;
              }
              else {
LAB_180054d28:
                iVar9 = *puVar15 - 1;
                if (-1 < iVar9) {
                  lVar14 = (int64_t)iVar9;
                  do {
                    if (*(char *)(lVar14 + *(int64_t *)(puVar15 + -2)) == '/') goto LAB_180054d57;
                    iVar9 = iVar9 + -1;
                    lVar14 = lVar14 + -1;
                  } while (-1 < lVar14);
                }
                iVar9 = -1;
LAB_180054d57:
                FUN_180629a40(puVar3 + (int64_t)iVar13 * 4,&puStack_98,iVar9 + 1,0xffffffff);
                uVar17 = FUN_180054360(plVar2,&puStack_98);
                if (init_system_data_memory != 0) {
                  FUN_18005c1c0(uVar17,&puStack_78);
                  puStack_f0 = &system_data_buffer_ptr;
                  uStack_d8 = 0;
                  puStack_e8 = (int8_t *)0x0;
                  uStack_e0 = 0;
                  CoreEngineDataBufferProcessor(&puStack_f0,iStack_c0);
                  if (iStack_c0 != 0) {
                    // WARNING: Subroutine does not return
                    memcpy(puStack_e8,lStack_c8,iStack_c0 + 1);
                  }
                  if (lStack_c8 != 0) {
                    uStack_e0 = 0;
                    if (puStack_e8 != (int8_t *)0x0) {
                      *puStack_e8 = 0;
                    }
                    uStack_d8 = uStack_d8 & 0xffffffff;
                  }
                  puVar16 = &system_buffer_ptr;
                  if (puStack_90 != (void *)0x0) {
                    puVar16 = puStack_90;
                  }
                  System_DataHandler(&puStack_f0,&unknown_var_6576_ptr,puVar16);
                  FUN_18062db60(&puStack_f0,&puStack_78);
                  init_system_data_memory = 0;
                  puStack_f0 = &system_data_buffer_ptr;
                  if (puStack_e8 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner();
                  }
                  puStack_e8 = (int8_t *)0x0;
                  uStack_d8 = uStack_d8 & 0xffffffff00000000;
                  puStack_f0 = &system_state_ptr;
                  puStack_78 = &system_data_buffer_ptr;
                  if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner();
                  }
                  lStack_70 = 0;
                  uStack_60 = 0;
                  puStack_78 = &system_state_ptr;
                }
                puStack_98 = &system_data_buffer_ptr;
                if (puStack_90 != (void *)0x0) {
                    // WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                puStack_90 = (void *)0x0;
                uStack_80 = 0;
                puStack_98 = &system_state_ptr;
                puStack_158 = &system_data_buffer_ptr;
                if (puStack_150 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                uStack_140 = (uint64_t)uStack_140._4_4_ << 0x20;
              }
            }
            else {
LAB_180054ec9:
              puStack_158 = &system_data_buffer_ptr;
              if (puStack_150 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
              uStack_140 = (uint64_t)uStack_140._4_4_ << 0x20;
            }
            puStack_150 = (int8_t *)0x0;
            puStack_158 = &system_state_ptr;
            dependency_index = dependency_index + 1;
            module_entry = module_entry + 2;
            dependency_offset = dependency_offset + -1;
            total_modules = module_count;
            puVar5 = puStack_50;
            current_index = module_index;
          } while (dependency_offset != 0);
        }
        puStack_d0 = &system_data_buffer_ptr;
        if (lStack_c8 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_c8 = 0;
        uStack_b8 = 0;
        puStack_d0 = &system_state_ptr;
        for (puVar12 = puVar3; puVar12 != puVar5; puVar12 = puVar12 + 4) {
          (**(code **)*puVar12)(puVar12,0);
        }
        if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puVar3);
        }
        puStack_118 = &system_data_buffer_ptr;
        if (puStack_110 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        puStack_110 = (int8_t *)0x0;
        uStack_100 = uStack_100 & 0xffffffff00000000;
        puStack_118 = &system_state_ptr;
        puStack_138 = &system_data_buffer_ptr;
        if (puStack_130 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
      }
      puStack_110 = (int8_t *)0x0;
      puStack_118 = &system_state_ptr;
      uStack_120 = uStack_120 & 0xffffffff00000000;
      puStack_130 = (int8_t *)0x0;
      puStack_138 = &system_state_ptr;
      module_index = current_index + 1;
    } while (module_index < (int)total_modules);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化系统核心数据结构
 * 设置游戏引擎的核心系统，包括内存管理、线程同步和全局状态
 * 原函数名：FUN_180055050
 */
void initialize_system_core(void)

{
  // 系统核心初始化变量
  uint64_t *memory_pool;      // 内存池指针
  uint64_t *system_handle;    // 系统句柄
  uint64_t pool_size;         // 内存池大小
  int64_t mutex_handle;        // 互斥体句柄
  
  // 分配并初始化系统表1（408字节）
  memory_pool = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x198,8,3);
  system_handle = memory_pool + 4;
  FUN_180637560(system_handle);
  *system_handle = &unknown_var_6384_ptr;
  *(int16_t *)(memory_pool + 0x1a) = 1;
  *(int32_t *)(memory_pool + 9) = 0;
  *(int8_t *)((int64_t)memory_pool + 0x54) = 0;
  *system_handle = &unknown_var_264_ptr;
  
  // 初始化第二个系统表项
  system_handle = memory_pool + 0x1b;
  FUN_180637560(system_handle);
  *system_handle = &unknown_var_6384_ptr;
  *(int16_t *)(memory_pool + 0x31) = 1;
  *(int32_t *)(memory_pool + 0x20) = 0;
  *(int8_t *)((int64_t)memory_pool + 0x10c) = 0;
  *system_handle = &unknown_var_264_ptr;
  
  // 设置系统表头部信息
  *memory_pool = 0;
  *(int8_t *)(memory_pool + 3) = 0;
  memory_pool[2] = 0xffffffff00000000;
  *(int32_t *)(memory_pool + 1) = 0xe;  // 表大小标记
  system_message_context = memory_pool;
  
  // 初始化渲染系统（1152字节）
  pool_size = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x480,8,3);
  init_system_data_memory = FUN_18004bd10(pool_size);
  
  // 初始化场景系统（66592字节）
  pool_size = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x10420,8,3);
  init_system_data_memory = FUN_18005c090(pool_size);
  
  // 初始化调试系统（48字节）
  init_system_data_memory = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,3);
  *(int32_t *)(init_system_data_memory + 0x19) = 0;
  *(int16_t *)(init_system_data_memory + 0x1d) = 0;
  *(int8_t *)(init_system_data_memory + 0x1f) = 0;
  *(int32_t *)(init_system_data_memory + 0x28) = 3;  // 调试级别
  *(int64_t *)init_system_data_memory = init_system_data_memory;  // 自引用指针
  *(int64_t *)(init_system_data_memory + 8) = init_system_data_memory;
  *(uint64_t *)(init_system_data_memory + 0x10) = 0;
  *(int8_t *)(init_system_data_memory + 0x18) = 0;
  *(uint64_t *)(init_system_data_memory + 0x20) = 0;
  
  // 初始化输入系统（8字节）
  init_system_data_memory = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,8,4,3);
  *(int32_t *)(init_system_data_memory + 4) = 0;
  
  // 初始化音频系统（128字节）
  pool_size = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x80,8,3);
  init_system_data_memory = FUN_18015c450(pool_size);
  
  // 初始化线程池互斥锁（232字节）
  mutex_handle = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe8,8,3);
  _Mtx_init_in_situ(mutex_handle,2);           // 主互斥锁
  _Mtx_init_in_situ(mutex_handle + 0x50,2);     // 次互斥锁
  
  // 设置线程池参数
  *(uint64_t *)(mutex_handle + 0xa0) = 0;     // 任务队列头
  *(uint64_t *)(mutex_handle + 0xa8) = 0;     // 任务队列尾
  *(uint64_t *)(mutex_handle + 0xb0) = 0;     // 当前任务数
  *(int32_t *)(mutex_handle + 0xb8) = 3;     // 最大线程数
  *(uint64_t *)(mutex_handle + 0xc0) = 0;     // 活动线程数
  *(uint64_t *)(mutex_handle + 200) = 0;      // 线程ID数组
  *(uint64_t *)(mutex_handle + 0xd0) = 0;     // 完成任务数
  *(int32_t *)(mutex_handle + 0xd8) = 0x20; // 任务超时时间
  *(int32_t *)(mutex_handle + 0xe0) = 0;     // 线程优先级
  init_system_data_memory = mutex_handle;
  
  // 初始化日志系统（112字节）
  pool_size = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3);
  memset(pool_size,0,0x70);  // 清零初始化
}





/**
 * 清理模块资源
 * 遍历模块链表并释放所有分配的资源
 * 原函数名：FUN_180055e10
 */
void cleanup_module_resources(int64_t *module_list)

{
  // 模块清理变量
  int64_t end_module;         // 结束模块
  int64_t current_module;     // 当前模块
  
  end_module = module_list[1];
  for (current_module = *module_list; current_module != end_module; current_module = current_module + 0x48) {
    FUN_180058c20(current_module);
  }
  if (*module_list == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





/**
 * 初始化模块句柄
 * 创建并初始化模块的句柄结构
 * 原函数名：FUN_180055e30
 */
void initialize_module_handle(int64_t module_base, uint64_t handle_size, uint64_t init_flags, uint64_t context_data)

{
  // 调用模块初始化函数，使用提供的参数
  FUN_180058210(module_base,*(uint64_t *)(module_base + 0x10),init_flags,context_data,0xfffffffffffffffe);
  return;
}





/**
 * 释放模块资源数组
 * 释放模块资源数组中的所有元素并清理相关数据
 * 原函数名：FUN_180055e60
 */
void free_module_resource_array(int64_t resource_array)

{
  // 资源释放变量
  int64_t resource_data;      // 资源数据指针
  int64_t array_pointer;      // 数组指针
  uint64_t array_size;        // 数组大小
  uint64_t index;             // 索引计数器
  
  array_size = *(uint64_t *)(resource_array + 0x10);
  array_pointer = *(int64_t *)(resource_array + 8);
  index = 0;
  if (array_size != 0) {
    do {
      resource_data = *(int64_t *)(array_pointer + index * 8);
      if (resource_data != 0) {
        // 调用资源的清理函数
        if (*(int64_t **)(resource_data + 0x10) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(resource_data + 0x10) + 0x38))();
        }
        // 释放资源内存
        CoreEngineMemoryPoolCleaner(resource_data);
      }
      *(uint64_t *)(array_pointer + index * 8) = 0;
      index = index + 1;
    } while (index < array_size);
    array_size = *(uint64_t *)(resource_array + 0x10);
  }
  *(uint64_t *)(resource_array + 0x18) = 0;
  if ((1 < array_size) && (*(int64_t *)(resource_array + 8) != 0)) {
    // 如果还有未释放的资源，调用错误处理
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



/**
 * 初始化字符串缓冲区
 * 初始化用于存储字符串的缓冲区结构
 * 原函数名：FUN_180055e80
 */
int64_t initialize_string_buffer(int64_t buffer_handle)

{
  // 初始化字符串缓冲区的各个字段
  *(uint64_t *)(buffer_handle + 8) = &system_state_ptr;  // 设置字符串指针为空
  *(uint64_t *)(buffer_handle + 0x10) = 0;           // 清零长度
  *(int32_t *)(buffer_handle + 0x18) = 0;           // 清零标志
  *(uint64_t *)(buffer_handle + 8) = &system_data_buffer_ptr;  // 重置字符串指针
  *(uint64_t *)(buffer_handle + 0x20) = 0;           // 清零容量
  *(uint64_t *)(buffer_handle + 0x10) = 0;           // 清零长度
  *(int32_t *)(buffer_handle + 0x18) = 0;           // 清零标志
  return buffer_handle;
}





/**
 * 重置字符串缓冲区
 * 重置字符串缓冲区并释放相关资源
 * 原函数名：FUN_180055ed0
 */
void reset_string_buffer(int64_t buffer_handle)

{
  // 检查缓冲区是否有数据需要清理
  *(uint64_t *)(buffer_handle + 8) = &system_data_buffer_ptr;
  if (*(int64_t *)(buffer_handle + 0x10) != 0) {
    // 如果有未释放的数据，调用错误处理
    CoreEngineMemoryPoolCleaner();
  }
  // 重置缓冲区状态
  *(uint64_t *)(buffer_handle + 0x10) = 0;           // 清零长度
  *(int32_t *)(buffer_handle + 0x20) = 0;           // 清零容量
  *(uint64_t *)(buffer_handle + 8) = &system_state_ptr;  // 设置字符串指针为空
  return;
}





/**
 * 创建资源管理器
 * 创建并初始化资源管理器实例
 * 原函数名：FUN_180055f20
 */
void create_resource_manager(int64_t manager_base, uint64_t manager_size, uint64_t init_flags, uint64_t context_data)

{
  // 调用资源管理器初始化函数，使用提供的参数
  FUN_180058210(manager_base,*(uint64_t *)(manager_base + 0x10),init_flags,context_data,0xfffffffffffffffe);
  return;
}





/**
 * 销毁资源管理器
 * 销毁资源管理器并释放所有相关资源
 * 原函数名：FUN_180055f50
 */
void destroy_resource_manager(int64_t manager_handle)

{
  // 资源管理器销毁变量
  int64_t resource_pointer;    // 资源指针
  int64_t array_base;          // 数组基址
  uint64_t resource_count;     // 资源计数
  uint64_t index;             // 索引计数器
  
  resource_count = *(uint64_t *)(manager_handle + 0x10);
  array_base = *(int64_t *)(manager_handle + 8);
  index = 0;
  if (resource_count != 0) {
    do {
      resource_pointer = *(int64_t *)(array_base + index * 8);
      if (resource_pointer != 0) {
        // 调用资源的清理函数
        if (*(int64_t **)(resource_pointer + 0x10) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(resource_pointer + 0x10) + 0x38))();
        }
        // 释放资源内存
        CoreEngineMemoryPoolCleaner(resource_pointer);
      }
      *(uint64_t *)(array_base + index * 8) = 0;
      index = index + 1;
    } while (index < resource_count);
    resource_count = *(uint64_t *)(manager_handle + 0x10);
  }
  *(uint64_t *)(manager_handle + 0x18) = 0;
  if ((1 < resource_count) && (*(int64_t *)(manager_handle + 8) != 0)) {
    // 如果还有未释放的资源，调用错误处理
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 紧急退出处理函数
 * 在发生严重错误时进行紧急退出处理
 * 原函数名：FUN_180055f70
 */
void emergency_exit_handler(uint64_t exit_context, int32_t exit_code)

{
  // 退出处理变量
  code *system_call_handler;  // 系统调用处理函数
  
  if (system_cache_buffer != 0) {
    func_0x00018005a410(system_cache_buffer + 8);  // 调用清理函数
  }
  Sleep(2000);  // 等待2秒确保清理完成
  _Exit(exit_code);  // 退出程序
  system_call_handler = (code *)swi(3);  // 获取系统调用处理函数
  (*system_call_handler)();  // 执行系统调用
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 执行系统清理和关闭
 * 在程序关闭时执行系统清理操作，释放所有资源
 * 原函数名：FUN_180055fa0
 */
void perform_system_cleanup(void)

{
  // 系统清理变量
  uint64_t *cleanup_list;     // 清理列表
  uint64_t list_state;       // 列表状态
  char *config_data;          // 配置数据
  int lock_result;            // 锁定结果
  char *iterator_ptr;          // 迭代器指针
  uint64_t register_value;  // 寄存器值
  uint64_t security_cookie;  // 安全cookie
  
  config_data = init_system_data_memory;
  security_cookie = 0xfffffffffffffffe;
  if (*init_system_data_memory != '\0') {
    cleanup_list = (uint64_t *)*init_system_data_memory;
    lock_result = _Mtx_lock(0x180c91970);
    if (lock_result != 0) {
      __Throw_C_error_std__YAXH_Z(lock_result);  // 锁定失败，抛出异常
    }
    list_state = SYSTEM_DATA_MANAGER_A;
    SYSTEM_DATA_MANAGER_A = *cleanup_list;
    FUN_1801299b0(&unknown_var_6880_ptr,0,0,register_value,security_cookie);
    
    // 清理配置数据的基本字段
    SystemCore_CacheManager0(&unknown_var_6896_ptr,*(int32_t *)(config_data + 4));
    SystemCore_CacheManager0(&unknown_var_6928_ptr,*(int32_t *)(config_data + 8));
    SystemCore_CacheManager0(&unknown_var_6960_ptr,*(int32_t *)(config_data + 0xc));
    SystemCore_CacheManager0(&unknown_var_6992_ptr,*(int32_t *)(config_data + 0x10));
    SystemCore_CacheManager0(&unknown_var_7024_ptr,*(int32_t *)(config_data + 0x14));
    SystemCore_CacheManager0(&unknown_var_7064_ptr,*(int32_t *)(config_data + 0x18));
    
    // 清理第一个数据块列表
    for (iterator_ptr = *(char **)(config_data + 0x28); iterator_ptr != config_data + 0x20;
        iterator_ptr = (char *)func_0x00018066bd70(iterator_ptr)) {
      SystemCore_CacheManager0(&unknown_var_7104_ptr,*(int32_t *)(iterator_ptr + 0x20),*(int32_t *)(iterator_ptr + 0x24));
    }
    
    // 清理第二个数据块列表
    for (iterator_ptr = *(char **)(config_data + 0x58); iterator_ptr != config_data + 0x50;
        iterator_ptr = (char *)func_0x00018066bd70(iterator_ptr)) {
      SystemCore_CacheManager0(&unknown_var_7144_ptr,*(int32_t *)(iterator_ptr + 0x20),*(int32_t *)(iterator_ptr + 0x24));
    }
    
    // 清理剩余的配置字段
    SystemCore_CacheManager0(&unknown_var_7184_ptr,*(int32_t *)(config_data + 0x80));
    SystemCore_CacheManager0(&unknown_var_7224_ptr,*(int32_t *)(config_data + 0x84));
    SystemCore_CacheManager0(&unknown_var_7264_ptr,*(int32_t *)(config_data + 0x88));
    
    FUN_18012cfe0();  // 执行最终清理
    SYSTEM_DATA_MANAGER_A = list_state;
    lock_result = _Mtx_unlock(0x180c91970);
    if (lock_result != 0) {
      __Throw_C_error_std__YAXH_Z(lock_result);  // 解锁失败，抛出异常
    }
  }
  return;
}





