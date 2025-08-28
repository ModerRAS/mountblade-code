#include "TaleWorlds.Native.Split.h"

// 01_initialization_part021.c - 初始化模块第21部分
// 包含11个函数，主要处理资源加载、场景管理和系统初始化

// 函数：处理资源加载和初始化
// 原函数名：FUN_180054360
void process_resource_initialization(longlong *engine_context, longlong resource_params)

{
  // 局部变量声明
  uint resource_id;         // 资源ID
  int init_result;          // 初始化结果
  undefined8 resource_handle; // 资源句柄
  longlong *resource_data;  // 资源数据指针
  undefined *resource_name;  // 资源名称
  longlong data_offset;     // 数据偏移量
  ulonglong data_size;      // 数据大小
  
  // 栈变量
  undefined1 stack_buffer[32];      // 栈缓冲区
  undefined4 stack_guard;          // 栈保护
  undefined *resource_path;         // 资源路径
  longlong path_length;            // 路径长度
  uint path_capacity;              // 路径容量
  undefined8 path_handle;          // 路径句柄
  undefined4 path_flags;           // 路径标志
  undefined *path_data;            // 路径数据
  longlong path_offset;            // 路径偏移量
  uint path_size;                  // 路径大小
  undefined8 path_cookie;          // 路径cookie
  undefined *module_name;           // 模块名称
  longlong name_offset;            // 名称偏移量
  undefined4 module_flags;         // 模块标志
  ulonglong module_cookie;         // 模块cookie
  undefined4 buffer_size;         // 缓冲区大小
  uint buffer_capacity;            // 缓冲区容量
  undefined1 buffer_flag;          // 缓冲区标志
  undefined4 alignment_flag;       // 对齐标志
  undefined *string_buffer;        // 字符串缓冲区
  longlong string_offset;          // 字符串偏移量
  int string_length;               // 字符串长度
  undefined4 string_flags;         // 字符串标志
  undefined **resource_ptr;        // 资源指针
  undefined *temp_buffer;          // 临时缓冲区
  longlong temp_offset;            // 临时偏移量
  undefined4 temp_flags;           // 临时标志
  undefined4 float_values[12];     // 浮点数值数组
  undefined1 byte_flag;            // 字节标志
  undefined4 alignment_value;      // 对齐值
  undefined4 reserved_value;       // 保留值
  undefined8 handle_guard;         // 句柄保护
  undefined **handle_ptr;           // 句柄指针
  undefined *data_buffer;          // 数据缓冲区
  undefined1 *char_buffer;         // 字符缓冲区
  undefined4 data_flags;           // 数据标志
  undefined1 large_buffer[136];    // 大缓冲区
  ulonglong security_cookie;       // 安全cookie
  
  // 初始化安全保护机制
  handle_guard = 0xfffffffffffffffe;
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
  
  // 初始化资源数据结构
  path_flags = 0;
  handle_ptr = &module_name;
  module_name = &UNK_180a3c3e0;  // 设置默认空名称
  module_cookie = 0;
  name_offset = 0;
  module_flags = 0;
  buffer_capacity = 0x100;  // 设置256字节缓冲区
  buffer_flag = 0;
  alignment_flag = 0;
  
  // 获取资源名称
  resource_name = &DAT_18098bc73;  // 默认资源名称
  if (*(undefined **)(resource_params + 8) != (undefined *)0x0) {
    resource_name = *(undefined **)(resource_params + 8);  // 使用自定义名称
  }
  
  // 设置资源名称
  FUN_180627c50(&module_name, resource_name);
  buffer_size = 0;
  buffer_capacity = buffer_capacity & 0xffffff00;  // 对齐到256字节边界
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x60d30,0x10,0x1f);
  plVar4 = (longlong *)FUN_1801954d0(uVar3,&puStack_1c0);
  ppuStack_170 = (undefined **)plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
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
  puStack_e8 = &UNK_1809fcc28;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = *(undefined4 *)(param_2 + 0x10);
  puVar5 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar5 = *(undefined **)(param_2 + 8);
  }
  strcpy_s(auStack_d0,0x80,puVar5);
  FUN_18019e140(&puStack_190,&puStack_e8);
  puStack_e8 = &UNK_18098bcb0;
  puStack_1e0 = &UNK_180a3c3e0;
  uStack_1c8 = 0;
  lStack_1d8 = 0;
  uStack_1d0 = 0;
  lVar6 = *param_1;
  FUN_1806279c0(&puStack_168,param_2);
  iVar2 = FUN_1801426a0(lVar6,&puStack_168);
  puStack_168 = &UNK_180a3c3e0;
  if (lStack_160 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_160 = 0;
  uStack_150 = 0;
  puStack_168 = &UNK_18098bcb0;
  if ((iVar2 < 0) ||
     (lVar6 = *(longlong *)(*param_1 + 0x888),
     (ulonglong)(*(longlong *)(*param_1 + 0x890) - lVar6 >> 5) <= (ulonglong)(longlong)iVar2)) {
    lVar6 = FUN_180628ca0();
  }
  else {
    lVar6 = (longlong)iVar2 * 0x20 + lVar6;
  }
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  lStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1e8 = 1;
  uVar1 = *(uint *)(lVar6 + 0x10);
  uVar7 = (ulonglong)uVar1;
  if (*(longlong *)(lVar6 + 8) != 0) {
    FUN_1806277c0(&puStack_208,uVar7);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lStack_200,*(undefined8 *)(lVar6 + 8),uVar7);
  }
  if (lStack_200 != 0) {
    *(undefined1 *)(uVar7 + lStack_200) = 0;
  }
  uStack_1f0 = CONCAT44(*(uint *)(lVar6 + 0x1c),(undefined4)uStack_1f0);
  if (0 < iStack_180) {
    uStack_1f8 = uVar1;
    FUN_1806277c0(&puStack_208,iStack_180);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)uStack_1f8 + lStack_200,lStack_188,(longlong)(iStack_180 + 1));
  }
  lStack_1d8 = lStack_200;
  uStack_1c8._0_4_ = (undefined4)uStack_1f0;
  uStack_1f8 = 0;
  uStack_1e8 = 0;
  lStack_200 = 0;
  uStack_1f0 = 0;
  puStack_208 = &UNK_18098bcb0;
  uStack_218 = 0xffffffff;
  uStack_1d0 = uVar1;
  uStack_1c8._4_4_ = *(uint *)(lVar6 + 0x1c);
  FUN_1801a6440(plVar4,_DAT_180c868e8,&puStack_1e0,&uStack_148);
  FUN_18019e260(plVar4);
  (**(code **)(*(longlong *)param_1[0x56] + 0x138))((longlong *)param_1[0x56],plVar4);
  FUN_180199500(plVar4,0x3d072b02,1);
  FUN_1801a2ea0(plVar4);
  (**(code **)(*(longlong *)param_1[0x56] + 0x140))((longlong *)param_1[0x56],plVar4);
  Sleep(1000);
  puStack_1e0 = &UNK_180a3c3e0;
  if (lStack_1d8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_1d8 = 0;
  uStack_1c8 = (ulonglong)uStack_1c8._4_4_ << 0x20;
  puStack_1e0 = &UNK_18098bcb0;
  puStack_190 = &UNK_180a3c3e0;
  if (lStack_188 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_188 = 0;
  uStack_178 = 0;
  puStack_190 = &UNK_18098bcb0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))(plVar4);
  }
  ppuStack_170 = &puStack_1c0;
  puStack_1c0 = &UNK_180a3c3e0;
  if (lStack_1b8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_1b8 = 0;
  uStack_1a8 = uStack_1a8 & 0xffffffff00000000;
  puStack_1c0 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_238);
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
  longlong *module_registry;            // 模块注册表
  undefined8 *module_array;             // 模块数组
  char path_separator;                  // 路径分隔符
  undefined8 *module_start;             // 模块起始地址
  undefined1 *module_name_buffer;       // 模块名称缓冲区
  undefined4 *module_flags;             // 模块标志
  int dependency_index;                 // 依赖索引
  int current_index;                    // 当前索引
  longlong module_address;              // 模块地址
  ulonglong module_size;                // 模块大小
  undefined8 *module_end;               // 模块结束地址
  int dependency_count;                 // 依赖计数
  longlong total_modules;                // 总模块数
  uint *module_entry;                   // 模块入口点
  undefined *module_data;               // 模块数据
  undefined4 module_status;             // 模块状态
  
  // 栈变量
  undefined1 stack_guard[32];           // 栈保护
  undefined *path_buffer;               // 路径缓冲区
  undefined1 *module_path;              // 模块路径
  uint path_length;                     // 路径长度
  undefined8 path_handle;               // 路径句柄
  undefined *path_data;                 // 路径数据
  undefined1 *name_buffer;              // 名称缓冲区
  uint name_length;                     // 名称长度
  ulonglong name_cookie;                // 名称cookie
  undefined *name_handle;               // 名称句柄
  undefined1 *file_path;                // 文件路径
  undefined4 file_size;                 // 文件大小
  ulonglong file_cookie;                // 文件cookie
  int loop_counter;                     // 循环计数器
  undefined *temp_handle;                // 临时句柄
  undefined1 *temp_buffer;              // 临时缓冲区
  undefined4 temp_flags;                // 临时标志
  ulonglong temp_cookie;                // 临时cookie
  undefined *data_handle;               // 数据句柄
  longlong data_offset;                 // 数据偏移量
  int data_size;                        // 数据大小
  undefined4 data_flags;                // 数据标志
  longlong *global_registry;            // 全局注册表
  longlong module_count;                // 模块计数
  undefined *module_info;               // 模块信息
  undefined *module_config;             // 模块配置
  undefined4 config_flags;              // 配置标志
  undefined *init_data;                 // 初始化数据
  undefined *dependency_data;           // 依赖数据
  longlong dependency_offset;           // 依赖偏移量
  undefined4 dependency_flags;          // 依赖标志
  undefined8 *module_start_ptr;         // 模块起始指针
  undefined8 *module_end_ptr;           // 模块结束指针
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  plStack_a8 = _DAT_180c86870;
  lVar14 = *(longlong *)(*_DAT_180c86870 + 0x890) - *(longlong *)(*_DAT_180c86870 + 0x888) >> 5;
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
        lVar10 = *(longlong *)(*_DAT_180c86870 + 0x888);
        if ((ulonglong)(*(longlong *)(*_DAT_180c86870 + 0x890) - lVar10 >> 5) <=
            (ulonglong)(longlong)iStack_f8) goto LAB_18005485e;
        lVar10 = (longlong)iStack_f8 * 0x20 + lVar10;
      }
      puStack_138 = &UNK_180a3c3e0;
      uStack_120 = 0;
      puStack_130 = (undefined1 *)0x0;
      uStack_128 = 0;
      FUN_1806277c0(&puStack_138,*(undefined4 *)(lVar10 + 0x10));
      if (*(int *)(lVar10 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_130,*(undefined8 *)(lVar10 + 8),*(int *)(lVar10 + 0x10) + 1);
      }
      if (*(longlong *)(lVar10 + 8) != 0) {
        uStack_128 = 0;
        if (puStack_130 != (undefined1 *)0x0) {
          *puStack_130 = 0;
        }
        uStack_120 = uStack_120 & 0xffffffff;
      }
      if (iVar9 < 0) {
LAB_180054912:
        lVar10 = FUN_180628ca0();
      }
      else {
        lVar10 = *(longlong *)(*_DAT_180c86870 + 0x8a8);
        if ((ulonglong)(*(longlong *)(*_DAT_180c86870 + 0x8b0) - lVar10 >> 5) <
            (ulonglong)(longlong)iVar9) goto LAB_180054912;
        lVar10 = (longlong)iVar9 * 0x20 + lVar10;
      }
      puStack_118 = &UNK_180a3c3e0;
      uStack_100 = 0;
      puStack_110 = (undefined1 *)0x0;
      uStack_108 = 0;
      FUN_1806277c0(&puStack_118,*(undefined4 *)(lVar10 + 0x10));
      if (*(int *)(lVar10 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_110,*(undefined8 *)(lVar10 + 8),*(int *)(lVar10 + 0x10) + 1);
      }
      if (*(longlong *)(lVar10 + 8) != 0) {
        uStack_108 = 0;
        if (puStack_110 != (undefined1 *)0x0) {
          *puStack_110 = 0;
        }
        uStack_100 = uStack_100 & 0xffffffff;
      }
      iVar8 = uStack_128 + 8;
      FUN_1806277c0(&puStack_138,iVar8);
      *(undefined8 *)(puStack_130 + uStack_128) = 0x6a624f656e656353;
      *(undefined1 *)((longlong)(puStack_130 + uStack_128) + 8) = 0;
      uStack_128 = iVar8;
      cVar4 = FUN_180624a00(&puStack_138);
      if (cVar4 == '\0') {
        puStack_118 = &UNK_180a3c3e0;
        if (puStack_110 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_110 = (undefined1 *)0x0;
        uStack_100 = uStack_100 & 0xffffffff00000000;
        puStack_118 = &UNK_18098bcb0;
        puStack_138 = &UNK_180a3c3e0;
        if (puStack_130 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      else {
        puStack_58 = (undefined8 *)0x0;
        puStack_50 = (undefined8 *)0x0;
        uStack_48 = 0;
        uStack_40 = 3;
        FUN_18062c5f0(&puStack_138,&puStack_58);
        puVar5 = puStack_50;
        puVar3 = puStack_58;
        lVar10 = (longlong)puStack_50 - (longlong)puStack_58;
        FUN_18004b100(&puStack_d0);
        puVar6 = &DAT_18098bc73;
        if (puStack_110 != (undefined1 *)0x0) {
          puVar6 = puStack_110;
        }
        FUN_180628040(&puStack_d0,&UNK_1809fd7c4,puVar6);
        cVar4 = FUN_180624a00(&puStack_d0);
        if (cVar4 == '\0') {
          FUN_180624910(&puStack_d0);
        }
        plVar2 = plStack_a8;
        iVar8 = (int)(lVar10 >> 5);
        lVar10 = (longlong)iVar8;
        if (0 < iVar8) {
          puVar15 = (uint *)(puVar3 + 2);
          do {
            FUN_180061db0();
            FUN_180061be0();
            puStack_158 = &UNK_180a3c3e0;
            uStack_140._0_4_ = 0;
            uStack_140._4_4_ = 0;
            puStack_150 = (undefined1 *)0x0;
            uStack_148 = 0;
            FUN_1806277c0(&puStack_158,*puVar15);
            if (*puVar15 != 0) {
                    // WARNING: Subroutine does not return
              memcpy(puStack_150,*(undefined8 *)(puVar15 + -2),*puVar15 + 1);
            }
            if (*(longlong *)(puVar15 + -2) != 0) {
              uStack_148 = 0;
              if (puStack_150 != (undefined1 *)0x0) {
                *puStack_150 = 0;
              }
              uStack_140._4_4_ = 0;
            }
            iVar9 = uStack_148 + 0xd;
            FUN_1806277c0(&puStack_158,iVar9);
            puVar5 = (undefined8 *)(puStack_150 + uStack_148);
            *puVar5 = 0x782e656e6563732f;
            *(undefined4 *)(puVar5 + 1) = 0x6e656373;
            *(undefined2 *)((longlong)puVar5 + 0xc) = 0x65;
            puVar6 = &DAT_18098bc73;
            if (puStack_150 != (undefined1 *)0x0) {
              puVar6 = puStack_150;
            }
            uStack_148 = iVar9;
            lVar14 = strstr(puVar6,&UNK_1809fd7d8);
            if (lVar14 == 0) {
              puVar6 = &DAT_18098bc73;
              if (puStack_150 != (undefined1 *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&UNK_1809fd7f8);
              if (lVar14 != 0) goto LAB_180054ec9;
              puVar6 = &DAT_18098bc73;
              if (puStack_150 != (undefined1 *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&UNK_1809fd810);
              if (lVar14 != 0) goto LAB_180054ec9;
              puVar6 = &DAT_18098bc73;
              if (puStack_150 != (undefined1 *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&UNK_1809fd828);
              if (lVar14 != 0) goto LAB_180054ec9;
              puVar6 = &DAT_18098bc73;
              if (puStack_150 != (undefined1 *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&UNK_1809fd848);
              if (lVar14 != 0) goto LAB_180054ec9;
              cVar4 = FUN_180624af0(&puStack_158);
              if (cVar4 == '\0') {
                uStack_148 = 0;
                if (puStack_150 != (undefined1 *)0x0) {
                  *puStack_150 = 0;
                }
                uVar1 = *puVar15;
                uVar11 = (ulonglong)uVar1;
                if (*(longlong *)(puVar15 + -2) != 0) {
                  FUN_1806277c0(&puStack_158,uVar11);
                }
                if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
                  memcpy(puStack_150,*(undefined8 *)(puVar15 + -2),uVar11);
                }
                if (puStack_150 != (undefined1 *)0x0) {
                  puStack_150[uVar11] = 0;
                }
                uStack_140._4_4_ = puVar15[3];
                uStack_148 = uVar1;
                FUN_1806277c0(&puStack_158,0x12);
                puVar7 = (undefined4 *)(puStack_150 + uStack_148);
                *puVar7 = 0x6563732f;
                puVar7[1] = 0x782e656e;
                puVar7[2] = 0x2e6f6373;
                puVar7[3] = 0x65637378;
                *(undefined2 *)(puVar7 + 4) = 0x656e;
                *(undefined1 *)((longlong)puVar7 + 0x12) = 0;
                uStack_148 = 0x12;
                cVar4 = FUN_180624af0(&puStack_158);
                if (cVar4 != '\0') goto LAB_180054d28;
                puStack_158 = &UNK_180a3c3e0;
                if (puStack_150 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
              }
              else {
LAB_180054d28:
                iVar9 = *puVar15 - 1;
                if (-1 < iVar9) {
                  lVar14 = (longlong)iVar9;
                  do {
                    if (*(char *)(lVar14 + *(longlong *)(puVar15 + -2)) == '/') goto LAB_180054d57;
                    iVar9 = iVar9 + -1;
                    lVar14 = lVar14 + -1;
                  } while (-1 < lVar14);
                }
                iVar9 = -1;
LAB_180054d57:
                FUN_180629a40(puVar3 + (longlong)iVar13 * 4,&puStack_98,iVar9 + 1,0xffffffff);
                uVar17 = FUN_180054360(plVar2,&puStack_98);
                if (_DAT_180c82854 != 0) {
                  FUN_18005c1c0(uVar17,&puStack_78);
                  puStack_f0 = &UNK_180a3c3e0;
                  uStack_d8 = 0;
                  puStack_e8 = (undefined1 *)0x0;
                  uStack_e0 = 0;
                  FUN_1806277c0(&puStack_f0,iStack_c0);
                  if (iStack_c0 != 0) {
                    // WARNING: Subroutine does not return
                    memcpy(puStack_e8,lStack_c8,iStack_c0 + 1);
                  }
                  if (lStack_c8 != 0) {
                    uStack_e0 = 0;
                    if (puStack_e8 != (undefined1 *)0x0) {
                      *puStack_e8 = 0;
                    }
                    uStack_d8 = uStack_d8 & 0xffffffff;
                  }
                  puVar16 = &DAT_18098bc73;
                  if (puStack_90 != (undefined *)0x0) {
                    puVar16 = puStack_90;
                  }
                  FUN_180628040(&puStack_f0,&UNK_1809fd870,puVar16);
                  FUN_18062db60(&puStack_f0,&puStack_78);
                  _DAT_180c82854 = 0;
                  puStack_f0 = &UNK_180a3c3e0;
                  if (puStack_e8 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  puStack_e8 = (undefined1 *)0x0;
                  uStack_d8 = uStack_d8 & 0xffffffff00000000;
                  puStack_f0 = &UNK_18098bcb0;
                  puStack_78 = &UNK_180a3c3e0;
                  if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  lStack_70 = 0;
                  uStack_60 = 0;
                  puStack_78 = &UNK_18098bcb0;
                }
                puStack_98 = &UNK_180a3c3e0;
                if (puStack_90 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                puStack_90 = (undefined *)0x0;
                uStack_80 = 0;
                puStack_98 = &UNK_18098bcb0;
                puStack_158 = &UNK_180a3c3e0;
                if (puStack_150 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
              }
            }
            else {
LAB_180054ec9:
              puStack_158 = &UNK_180a3c3e0;
              if (puStack_150 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
            }
            puStack_150 = (undefined1 *)0x0;
            puStack_158 = &UNK_18098bcb0;
            iVar13 = iVar13 + 1;
            puVar15 = puVar15 + 8;
            lVar10 = lVar10 + -1;
            lVar14 = lStack_a0;
            puVar5 = puStack_50;
            iVar9 = iStack_f8;
          } while (lVar10 != 0);
        }
        puStack_d0 = &UNK_180a3c3e0;
        if (lStack_c8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_c8 = 0;
        uStack_b8 = 0;
        puStack_d0 = &UNK_18098bcb0;
        for (puVar12 = puVar3; puVar12 != puVar5; puVar12 = puVar12 + 4) {
          (**(code **)*puVar12)(puVar12,0);
        }
        if (puVar3 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar3);
        }
        puStack_118 = &UNK_180a3c3e0;
        if (puStack_110 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_110 = (undefined1 *)0x0;
        uStack_100 = uStack_100 & 0xffffffff00000000;
        puStack_118 = &UNK_18098bcb0;
        puStack_138 = &UNK_180a3c3e0;
        if (puStack_130 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      puStack_110 = (undefined1 *)0x0;
      puStack_118 = &UNK_18098bcb0;
      uStack_120 = uStack_120 & 0xffffffff00000000;
      puStack_130 = (undefined1 *)0x0;
      puStack_138 = &UNK_18098bcb0;
      iStack_f8 = iVar9 + 1;
    } while (iStack_f8 < (int)lVar14);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_178);
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
  undefined8 *memory_pool;      // 内存池指针
  undefined8 *system_handle;    // 系统句柄
  undefined8 pool_size;         // 内存池大小
  longlong mutex_handle;        // 互斥体句柄
  
  puVar2 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x198,8,3);
  puVar1 = puVar2 + 4;
  FUN_180637560(puVar1);
  *puVar1 = &UNK_180a3cf50;
  *(undefined2 *)(puVar2 + 0x1a) = 1;
  *(undefined4 *)(puVar2 + 9) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x54) = 0;
  *puVar1 = &UNK_1809fe6d8;
  puVar1 = puVar2 + 0x1b;
  FUN_180637560(puVar1);
  *puVar1 = &UNK_180a3cf50;
  *(undefined2 *)(puVar2 + 0x31) = 1;
  *(undefined4 *)(puVar2 + 0x20) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x10c) = 0;
  *puVar1 = &UNK_1809fe6d8;
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar2[2] = 0xffffffff00000000;
  *(undefined4 *)(puVar2 + 1) = 0xe;
  _DAT_180c86928 = puVar2;
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x480,8,3);
  _DAT_180c8a9f8 = FUN_18004bd10(uVar3);
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x10420,8,3);
  _DAT_180c868c0 = FUN_18005c090(uVar3);
  _DAT_180c868d8 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3);
  *(undefined4 *)(_DAT_180c868d8 + 0x19) = 0;
  *(undefined2 *)(_DAT_180c868d8 + 0x1d) = 0;
  *(undefined1 *)(_DAT_180c868d8 + 0x1f) = 0;
  *(undefined4 *)(_DAT_180c868d8 + 0x28) = 3;
  *(longlong *)_DAT_180c868d8 = _DAT_180c868d8;
  *(longlong *)(_DAT_180c868d8 + 8) = _DAT_180c868d8;
  *(undefined8 *)(_DAT_180c868d8 + 0x10) = 0;
  *(undefined1 *)(_DAT_180c868d8 + 0x18) = 0;
  *(undefined8 *)(_DAT_180c868d8 + 0x20) = 0;
  _DAT_180c86910 = FUN_18062b1e0(_DAT_180c8ed18,8,4,3);
  *(undefined4 *)(_DAT_180c86910 + 4) = 0;
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x80,8,3);
  _DAT_180c86900 = FUN_18015c450(uVar3);
  lVar4 = FUN_18062b1e0(_DAT_180c8ed18,0xe8,8,3);
  _Mtx_init_in_situ(lVar4,2);
  _Mtx_init_in_situ(lVar4 + 0x50,2);
  *(undefined8 *)(lVar4 + 0xa0) = 0;
  *(undefined8 *)(lVar4 + 0xa8) = 0;
  *(undefined8 *)(lVar4 + 0xb0) = 0;
  *(undefined4 *)(lVar4 + 0xb8) = 3;
  *(undefined8 *)(lVar4 + 0xc0) = 0;
  *(undefined8 *)(lVar4 + 200) = 0;
  *(undefined8 *)(lVar4 + 0xd0) = 0;
  *(undefined4 *)(lVar4 + 0xd8) = 0x20;
  *(undefined4 *)(lVar4 + 0xe0) = 0;
  _DAT_180c8a998 = lVar4;
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
                    // WARNING: Subroutine does not return
  memset(uVar3,0,0x70);
}





/**
 * 清理模块资源
 * 遍历模块链表并释放所有分配的资源
 * 原函数名：FUN_180055e10
 */
void cleanup_module_resources(longlong *module_list)

{
  // 模块清理变量
  longlong current_module;     // 当前模块
  longlong end_module;         // 结束模块
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    FUN_180058c20(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





/**
 * 初始化模块句柄
 * 创建并初始化模块的句柄结构
 * 原函数名：FUN_180055e30
 */
void initialize_module_handle(longlong module_base, undefined8 handle_size, undefined8 init_flags, undefined8 context_data)

{
  FUN_180058210(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





/**
 * 释放模块资源数组
 * 释放模块资源数组中的所有元素并清理相关数据
 * 原函数名：FUN_180055e60
 */
void free_module_resource_array(longlong resource_array)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      lVar2 = *(longlong *)(lVar1 + uVar4 * 8);
      if (lVar2 != 0) {
        if (*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x38))();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



longlong FUN_180055e80(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = &UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return param_1;
}





// 函数: void FUN_180055ed0(longlong param_1)
void FUN_180055ed0(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180055f20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180055f20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180058210(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180055f50(longlong param_1)
void FUN_180055f50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      lVar2 = *(longlong *)(lVar1 + uVar4 * 8);
      if (lVar2 != 0) {
        if (*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x38))();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180055f70(undefined8 param_1,undefined4 param_2)
void FUN_180055f70(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if (_DAT_180c8f008 != 0) {
    func_0x00018005a410(_DAT_180c8f008 + 8);
  }
  Sleep(2000);
  _Exit(param_2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180055fa0(void)
void FUN_180055fa0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined8 in_R9;
  undefined8 uVar6;
  
  pcVar3 = _DAT_180c8a9d8;
  uVar6 = 0xfffffffffffffffe;
  if (*_DAT_180c8a9d8 != '\0') {
    puVar1 = (undefined8 *)*_DAT_180c86960;
    iVar4 = _Mtx_lock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    uVar2 = _DAT_180c8a9b0;
    _DAT_180c8a9b0 = *puVar1;
    FUN_1801299b0(&UNK_1809fd9a0,0,0,in_R9,uVar6);
    FUN_18010f010(&UNK_1809fd9b0,*(undefined4 *)(pcVar3 + 4));
    FUN_18010f010(&UNK_1809fd9d0,*(undefined4 *)(pcVar3 + 8));
    FUN_18010f010(&UNK_1809fd9f0,*(undefined4 *)(pcVar3 + 0xc));
    FUN_18010f010(&UNK_1809fda10,*(undefined4 *)(pcVar3 + 0x10));
    FUN_18010f010(&UNK_1809fda30,*(undefined4 *)(pcVar3 + 0x14));
    FUN_18010f010(&UNK_1809fda58,*(undefined4 *)(pcVar3 + 0x18));
    for (pcVar5 = *(char **)(pcVar3 + 0x28); pcVar5 != pcVar3 + 0x20;
        pcVar5 = (char *)func_0x00018066bd70(pcVar5)) {
      FUN_18010f010(&UNK_1809fda80,*(undefined4 *)(pcVar5 + 0x20),*(undefined4 *)(pcVar5 + 0x24));
    }
    for (pcVar5 = *(char **)(pcVar3 + 0x58); pcVar5 != pcVar3 + 0x50;
        pcVar5 = (char *)func_0x00018066bd70(pcVar5)) {
      FUN_18010f010(&UNK_1809fdaa8,*(undefined4 *)(pcVar5 + 0x20),*(undefined4 *)(pcVar5 + 0x24));
    }
    FUN_18010f010(&UNK_1809fdad0,*(undefined4 *)(pcVar3 + 0x80));
    FUN_18010f010(&UNK_1809fdaf8,*(undefined4 *)(pcVar3 + 0x84));
    FUN_18010f010(&UNK_1809fdb20,*(undefined4 *)(pcVar3 + 0x88));
    FUN_18012cfe0();
    _DAT_180c8a9b0 = uVar2;
    iVar4 = _Mtx_unlock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
  }
  return;
}





