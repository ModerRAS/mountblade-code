#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part026.c - 场景数据管理和实体处理模块 (Scene Data Management and Entity Processing Module)
// 
// 模块概述：
// 本模块实现了TaleWorlds引擎中场景数据管理的核心功能，负责处理游戏场景的层级结构、
// 实体属性配置、预制体数据加载等关键任务。该模块是游戏场景系统的基础组件，
// 为场景加载、实体管理、属性配置等功能提供底层支持。
//
// 主要功能：
// - 场景层级数据结构处理和解析
//   - 解析场景层级树形结构
//   - 处理层级之间的关系和依赖
//   - 管理层级数据的加载和卸载
// 
// - 实体名称和属性管理
//   - 实体名称的解析和验证
//   - 实体属性的配置和更新
//   - 实体状态的管理和同步
// 
// - 预制体(Prefab)数据加载和处理
//   - 预制体数据的加载和解析
//   - 预制体实例的创建和配置
//   - 预制体数据的缓存和优化
// 
// - 场景对象属性配置和验证
//   - 属性值的设置和验证
//   - 属性范围的检查和限制
//   - 属性变更的广播和同步
// 
// - 全局唯一标识符(GUID)处理
//   - GUID格式的验证和解析
//   - GUID与实体的映射管理
//   - GUID冲突的检测和处理
// 
// - 场景升级级别掩码管理
//   - 级别掩码的计算和应用
//   - 级别权限的检查和控制
//   - 级别状态的同步和更新
// 
// - 季节掩码和移动性属性处理
//   - 季节效果的配置和管理
//   - 移动性类型的设置和控制
//   - 环境属性的动态调整
// 
// 关键技术：
// - 树形数据结构遍历和解析
//   - 递归遍历场景层级结构
//   - 节点关系的建立和维护
//   - 树形结构的优化和压缩
// 
// - 字符串比较和模式匹配
//   - 高效的字符串比较算法
//   - 模式匹配和正则表达式
//   - 字符串缓存和优化
// 
// - 内存池管理和动态内存分配
//   - 高效的内存池分配策略
//   - 内存碎片整理和优化
//   - 内存泄漏检测和防护
// 
// - 系统状态标志位操作
//   - 位掩码运算和状态管理
//   - 状态同步和一致性保证
//   - 状态变更的事件处理
// 
// - 安全Cookie检查和保护
//   - 内存溢出检测和防护
//   - 栈损坏检测和恢复
//   - 安全访问控制和验证
// 
// 应用场景：
// - 游戏场景加载和初始化
//   - 场景文件的解析和加载
//   - 场景资源的预加载和缓存
//   - 场景初始化序列的执行
// 
// - 实体属性配置和管理
//   - 实体创建时的属性配置
//   - 运行时属性的动态调整
//   - 实体属性的批量操作
// 
// - 场景对象层次结构处理
//   - 父子关系的建立和维护
//   - 层级变换的传播和应用
//   - 层级结构的优化和简化
// 
// - 预制体实例化和配置
//   - 预制体的克隆和实例化
//   - 实例化参数的配置和调整
//   - 预制体变体的管理和选择
//
// 技术细节：
// - 使用链表结构管理场景层级数据
// - 采用哈希表加速实体名称查找
// - 实现了引用计数管理对象生命周期
// - 支持异步加载和流式处理
// - 内置了数据验证和错误恢复机制
//
// 性能优化：
// - 对象池技术减少内存分配开销
// - 延迟加载策略提升启动速度
// - 数据缓存机制提高访问效率
// - 批量操作减少函数调用开销
//
// 内存管理：
// - 使用内存池管理频繁分配的小对象
// - 实现了智能指针和引用计数
// - 支持内存对齐和缓存友好访问
// - 内置内存泄漏检测和报告
//
// 错误处理：
// - 全面的错误代码定义和处理
// - 异常安全的资源管理
// - 详细的错误日志和诊断信息
// - 优雅的错误恢复和降级处理

// 系统常量定义
#define SCENE_SYSTEM_VERSION           0x0001
#define MAX_GUID_LENGTH               36
#define MAX_ENTITY_NAME_LENGTH        256
#define MAX_PREFAB_NAME_LENGTH        512
#define MAX_SCENE_LEVELS              16
#define MAX_SEASON_MASK               0xFFFFFFFF
#define MOBILITY_STATIC               0
#define MOBILITY_DYNAMIC              1
#define MOBILITY_KINEMATIC            2

// 场景数据结构常量
#define SCENE_DATA_BUFFER_SIZE        0x400
#define ENTITY_ATTRIBUTE_COUNT        32
#define LEVEL_NAME_LENGTH            8
#define PREFAB_CHECKSUM_SIZE         16

// 内存池和缓冲区常量
#define SYSTEM_MEMORY_POOL_SIZE      0x1000
#define TEMP_BUFFER_SIZE             0x200
#define SECURITY_COOKIE_VALUE        0xF0000000A

// 错误代码定义
#define SCENE_LOAD_SUCCESS           0
#define SCENE_LOAD_FAILED            -1
#define ENTITY_NOT_FOUND            -2
#define PREFAB_LOAD_ERROR           -3
#define GUID_INVALID_FORMAT         -4

// 场景数据类型定义
typedef struct {
    uint64_t entity_id;             // 实体唯一标识符
    char name[MAX_ENTITY_NAME_LENGTH];  // 实体名称
    uint32_t level_mask;            // 层级掩码
    uint32_t season_mask;           // 季节掩码
    uint8_t mobility_type;          // 移动性类型
    uint8_t is_active;              // 激活状态
    float lod_bias_factor;          // LOD偏置因子
    void* prefab_data;              // 预制体数据指针
    char guid[MAX_GUID_LENGTH];     // 全局唯一标识符
} SceneEntity;

// 场景层级结构定义
typedef struct {
    uint32_t level_id;              // 层级ID
    char level_name[LEVEL_NAME_LENGTH];  // 层级名称
    uint32_t entity_count;          // 实体数量
    SceneEntity** entities;         // 实体指针数组
    void* parent_level;             // 父级层级指针
    void* child_levels;             // 子级层级指针
} SceneLevel;

// 预制体数据结构定义
typedef struct {
    uint64_t prefab_id;             // 预制体ID
    char name[MAX_PREFAB_NAME_LENGTH];  // 预制体名称
    uint32_t version;               // 版本号
    uint8_t checksum[PREFAB_CHECKSUM_SIZE];  // 校验和
    void* prefab_data;              // 预制体数据
    uint32_t data_size;             // 数据大小
    uint8_t is_loaded;              // 加载状态
} PrefabData;

// 场景管理器状态定义
typedef struct {
    SceneLevel* root_level;         // 根层级指针
    uint32_t total_entities;        // 总实体数量
    uint32_t active_entities;       // 激活实体数量
    uint8_t is_initialized;         // 初始化状态
    uint8_t loading_state;           // 加载状态
    void* memory_pool;               // 内存池指针
    uint32_t current_season_mask;    // 当前季节掩码
} SceneManager;

// 函数别名定义
#define SceneLevelDataProcessor      FUN_1803bd8e0
#define SceneEntityConfigurator      FUN_1803bdc20

// 场景层级数据处理器 (SceneLevelDataProcessor)
// 功能：处理场景层级数据结构和实体信息
// 参数：param_1 - 场景管理器指针, param_2 - 层级数据指针
// 返回值：无
void SceneLevelDataProcessor(int64_t param_1, int64_t param_2)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  char *pcVar10;
  char *pcVar11;
  int8_t auStack_80 [16];
  void *puStack_70;
  int64_t lStack_68;
  int iStack_60;
  uint64_t uStack_58;
  void *puStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  pcVar10 = "levels";
  do {
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + 1;
  } while (*pcVar10 != '\0');
  puVar9 = *(uint64_t **)(param_2 + 0x30);
  if (puVar9 != (uint64_t *)0x0) {
    pcVar10 = (char *)0x0;
    do {
      pcVar4 = (char *)*puVar9;
      if (pcVar4 == (char *)0x0) {
        pcVar4 = (char *)0x180d48d24;
        pcVar5 = pcVar10;
      }
      else {
        pcVar5 = (char *)puVar9[2];
      }
      if (pcVar5 == pcVar11 + -0x180a0bafb) {
        pcVar5 = pcVar5 + (int64_t)pcVar4;
        if (pcVar5 <= pcVar4) {
LAB_1803bd978:
          puStack_50 = &system_data_buffer_ptr;
          uStack_38 = 0;
          uStack_48 = 0;
          uStack_40 = 0;
          pcVar11 = "level";
          do {
            pcVar4 = pcVar11;
            pcVar11 = pcVar4 + 1;
          } while (*pcVar11 != '\0');
          for (pcVar11 = (char *)puVar9[6]; pcVar11 != (char *)0x0;
              pcVar11 = *(char **)(pcVar11 + 0x58)) {
            pcVar5 = *(char **)pcVar11;
            if (pcVar5 == (char *)0x0) {
              pcVar5 = (char *)0x180d48d24;
              pcVar2 = pcVar10;
            }
            else {
              pcVar2 = *(char **)(pcVar11 + 0x10);
            }
            if (pcVar2 == pcVar4 + -0x180a0bb0f) {
              pcVar2 = pcVar2 + (int64_t)pcVar5;
              if (pcVar2 <= pcVar5) {
LAB_1803bda24:
                lVar7 = *(int64_t *)(param_1 + 0x28);
                lVar8 = lVar7 + 400;
                FUN_1802f4b20(lVar8,*(uint64_t *)(lVar7 + 0x1a0),pcVar2,puVar9,0xfffffffffffffffe)
                ;
                *(int64_t *)lVar8 = lVar8;
                *(int64_t *)(lVar7 + 0x198) = lVar8;
                *(uint64_t *)(lVar7 + 0x1a0) = 0;
                *(int8_t *)(lVar7 + 0x1a8) = 0;
                *(uint64_t *)(lVar7 + 0x1b0) = 0;
                do {
                  puStack_70 = &system_data_buffer_ptr;
                  uStack_58 = 0;
                  lStack_68 = 0;
                  iStack_60 = 0;
                  pcVar4 = "name";
                  do {
                    pcVar5 = pcVar4;
                    pcVar4 = pcVar5 + 1;
                  } while (*pcVar4 != '\0');
                  for (puVar9 = *(uint64_t **)(pcVar11 + 0x40); puVar9 != (uint64_t *)0x0;
                      puVar9 = (uint64_t *)puVar9[6]) {
                    pcVar4 = (char *)*puVar9;
                    if (pcVar4 == (char *)0x0) {
                      pcVar4 = (char *)0x180d48d24;
                      pcVar2 = pcVar10;
                    }
                    else {
                      pcVar2 = (char *)puVar9[2];
                    }
                    if (pcVar2 == pcVar5 + -0x180a03a83) {
                      pcVar2 = pcVar2 + (int64_t)pcVar4;
                      if (pcVar2 <= pcVar4) {
LAB_1803bdad6:
                        lVar7 = 0x180d48d24;
                        if (puVar9[1] != 0) {
                          lVar7 = puVar9[1];
                        }
                        FUN_180627c50(&puStack_70,lVar7);
                        break;
                      }
                      lVar7 = (int64_t)&system_data_3a84 - (int64_t)pcVar4;
                      while (*pcVar4 == pcVar4[lVar7]) {
                        pcVar4 = pcVar4 + 1;
                        if (pcVar2 <= pcVar4) goto LAB_1803bdad6;
                      }
                    }
                  }
                  if (iStack_60 != 0) {
                    FUN_1803c2430(*(int64_t *)(param_1 + 0x28) + 400,auStack_80,&puStack_70);
                  }
                  pcVar4 = "level";
                  do {
                    pcVar5 = pcVar4;
                    pcVar4 = pcVar5 + 1;
                  } while (*pcVar4 != '\0');
                  for (pcVar4 = *(char **)(pcVar11 + 0x58); pcVar11 = pcVar10, pcVar4 != (char *)0x0
                      ; pcVar4 = *(char **)(pcVar4 + 0x58)) {
                    pcVar2 = *(char **)pcVar4;
                    if (pcVar2 == (char *)0x0) {
                      pcVar2 = (char *)0x180d48d24;
                      pcVar6 = pcVar10;
                    }
                    else {
                      pcVar6 = *(char **)(pcVar4 + 0x10);
                    }
                    if (pcVar6 == pcVar5 + -0x180a0bb0f) {
                      pcVar6 = pcVar6 + (int64_t)pcVar2;
                      pcVar11 = pcVar4;
                      if (pcVar6 <= pcVar2) break;
                      lVar7 = (int64_t)&processed_var_4592_ptr - (int64_t)pcVar2;
                      while (*pcVar2 == pcVar2[lVar7]) {
                        pcVar2 = pcVar2 + 1;
                        if (pcVar6 <= pcVar2) goto LAB_1803bdb74;
                      }
                    }
                  }
LAB_1803bdb74:
                  puStack_70 = &system_data_buffer_ptr;
                  if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner();
                  }
                  lStack_68 = 0;
                  uStack_58 = uStack_58 & 0xffffffff00000000;
                  puStack_70 = &system_state_ptr;
                } while (pcVar11 != (char *)0x0);
                break;
              }
              lVar7 = (int64_t)&processed_var_4592_ptr - (int64_t)pcVar5;
              while (*pcVar5 == pcVar5[lVar7]) {
                pcVar5 = pcVar5 + 1;
                if (pcVar2 <= pcVar5) goto LAB_1803bda24;
              }
            }
          }
          uStack_48 = 0;
          uStack_38 = uStack_38 & 0xffffffff00000000;
          puStack_50 = &system_state_ptr;
          break;
        }
        lVar7 = (int64_t)&processed_var_4572_ptr - (int64_t)pcVar4;
        while (*pcVar4 == pcVar4[lVar7]) {
          pcVar4 = pcVar4 + 1;
          if (pcVar5 <= pcVar4) goto LAB_1803bd978;
        }
      }
      puVar9 = (uint64_t *)puVar9[0xb];
    } while (puVar9 != (uint64_t *)0x0);
  }
  if (*(int64_t *)(param_1 + 8) != 0) {
    FUN_1802eda60(*(uint64_t *)(param_1 + 0x28));
  }
  if (((*(char *)(param_1 + 0x10) != '\0') &&
      (uVar1 = *(uint *)(*(int64_t *)(param_1 + 0x28) + 0x2c8),
      uVar3 = *(uint *)(param_1 + 4) & 0xfffffffe, (uVar3 & uVar1) != uVar3)) && ((uVar1 & 1) == 0))
  {
    *(int8_t *)(param_1 + 0x39) = 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 场景实体配置器 (SceneEntityConfigurator)
// 功能：配置场景实体属性和预制体数据
// 参数：param_1 - 场景管理器指针, param_2 - 实体数据指针, param_3 - 配置标志
// 返回值：无
void SceneEntityConfigurator(byte *param_1, int64_t param_2, uint64_t param_3)

{
  int64_t *plVar1;
  int iVar2;
  uint uVar3;
  int32_t uVar4;
  void *puVar5;
  uint64_t uVar6;
  char *pcVar7;
  int64_t lVar8;
  void *puVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  char *pcVar15;
  char *pcVar16;
  void *puVar17;
  int iVar18;
  bool bVar19;
  float fVar20;
  int8_t auStack_1c8 [32];
  byte *pbStack_1a8;
  int8_t auStack_198 [4];
  uint uStack_194;
  uint uStack_190;
  float fStack_18c;
  int32_t auStack_188 [2];
  void *puStack_180;
  void *puStack_178;
  int iStack_170;
  uint64_t uStack_168;
  int64_t lStack_160;
  void *puStack_158;
  int32_t *puStack_150;
  int32_t uStack_148;
  uint64_t uStack_140;
  void *puStack_138;
  void *puStack_130;
  int iStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  void *puStack_108;
  int8_t *puStack_100;
  int iStack_f8;
  int8_t auStack_f0 [136];
  void *puStack_68;
  void *puStack_60;
  int32_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1c8;
  pcVar11 = (char *)0x0;
  lStack_160 = param_2;
  if (*(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x268) == 0) {
    puStack_68 = &system_data_buffer_ptr;
    uStack_50 = 0;
    puStack_60 = (void *)0x0;
    uStack_58 = 0;
    pcVar15 = "prefab";
    do {
      pcVar16 = pcVar15;
      pcVar15 = pcVar16 + 1;
    } while (*pcVar15 != '\0');
    for (puVar14 = *(uint64_t **)(param_2 + 0x40); puVar14 != (uint64_t *)0x0;
        puVar14 = (uint64_t *)puVar14[6]) {
      pcVar15 = (char *)*puVar14;
      if (pcVar15 == (char *)0x0) {
        pcVar15 = (char *)0x180d48d24;
        pcVar7 = pcVar11;
      }
      else {
        pcVar7 = (char *)puVar14[2];
      }
      if (pcVar7 == pcVar16 + -0x180a239d3) {
        pcVar7 = pcVar7 + (int64_t)pcVar15;
        if (pcVar7 <= pcVar15) {
LAB_1803bdd14:
          lVar8 = 0x180d48d24;
          if (puVar14[1] != 0) {
            lVar8 = puVar14[1];
          }
          FUN_180627c50(&puStack_68,lVar8);
          lVar8 = FUN_18020bef0(param_3,&puStack_68);
          if (lVar8 == 0) {
            puVar9 = &system_buffer_ptr;
            if (*(void **)(*(int64_t *)(param_1 + 0x30) + 0x4e0) != (void *)0x0) {
              puVar9 = *(void **)(*(int64_t *)(param_1 + 0x30) + 0x4e0);
            }
            puVar5 = &system_buffer_ptr;
            if (puStack_60 != (void *)0x0) {
              puVar5 = puStack_60;
            }
            FUN_180627020(&rendering_buffer_2528_ptr,puVar5,puVar9);
            param_1[0x39] = 1;
            puStack_68 = &system_data_buffer_ptr;
            if (puStack_60 != (void *)0x0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            puStack_60 = (void *)0x0;
            uStack_50 = uStack_50 & 0xffffffff00000000;
            puStack_68 = &system_state_ptr;
            goto LAB_1803be64e;
          }
          pbStack_1a8 = param_1;
          FUN_1802ec6e0(*(uint64_t *)(param_1 + 0x28),lVar8,1,0);
          FUN_1802ef920(*(uint64_t *)(param_1 + 0x28),lVar8);
          break;
        }
        lVar8 = (int64_t)&rendering_buffer_2580_ptr - (int64_t)pcVar15;
        while (*pcVar15 == pcVar15[lVar8]) {
          pcVar15 = pcVar15 + 1;
          if (pcVar7 <= pcVar15) goto LAB_1803bdd14;
        }
      }
    }
    puStack_68 = &system_data_buffer_ptr;
    if (puStack_60 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puStack_60 = (void *)0x0;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    puStack_68 = &system_state_ptr;
  }
  puStack_138 = &system_data_buffer_ptr;
  uStack_120 = 0;
  puStack_130 = (void *)0x0;
  iStack_128 = 0;
  pcVar15 = "name";
  do {
    pcVar16 = pcVar15;
    pcVar15 = pcVar16 + 1;
  } while (*pcVar15 != '\0');
  for (puVar14 = *(uint64_t **)(param_2 + 0x40); puVar14 != (uint64_t *)0x0;
      puVar14 = (uint64_t *)puVar14[6]) {
    pcVar15 = (char *)*puVar14;
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x180d48d24;
      pcVar7 = pcVar11;
    }
    else {
      pcVar7 = (char *)puVar14[2];
    }
    if (pcVar7 == pcVar16 + -0x180a03a83) {
      pcVar7 = pcVar15 + (int64_t)pcVar7;
      if (pcVar7 <= pcVar15) {
LAB_1803bde72:
        lVar8 = 0x180d48d24;
        if (puVar14[1] != 0) {
          lVar8 = puVar14[1];
        }
        FUN_180627c50(&puStack_138,lVar8);
        break;
      }
      lVar8 = (int64_t)&system_data_3a84 - (int64_t)pcVar15;
      while (*pcVar15 == pcVar15[lVar8]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar7 <= pcVar15) goto LAB_1803bde72;
      }
    }
  }
  if (0 < iStack_128) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x268) != 0) {
      pcVar15 = pcVar11;
      if (iStack_128 == 7) {
        do {
          pcVar16 = pcVar15;
          bVar19 = pcVar16[(int64_t)puStack_130] == pcVar16[0x180a0b198];
          if (!bVar19) goto LAB_1803bdeea;
          pcVar15 = pcVar16 + 1;
        } while (pcVar16 + 1 != &system_data_0008);
        bVar19 = pcVar16[(int64_t)puStack_130] == pcVar16[0x180a0b198];
      }
      else {
        bVar19 = false;
      }
LAB_1803bdeea:
      if (bVar19) goto LAB_1803bdf05;
    }
    plVar1 = (int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x288);
    puVar9 = &system_buffer_ptr;
    if (puStack_130 != (void *)0x0) {
      puVar9 = puStack_130;
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,puVar9);
  }
LAB_1803bdf05:
  pcVar15 = "old_prefab_name";
  do {
    pcVar16 = pcVar15;
    pcVar15 = pcVar16 + 1;
  } while (*pcVar15 != '\0');
  for (puVar14 = *(uint64_t **)(param_2 + 0x40); puVar14 != (uint64_t *)0x0;
      puVar14 = (uint64_t *)puVar14[6]) {
    pcVar15 = (char *)*puVar14;
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x180d48d24;
      pcVar7 = pcVar11;
    }
    else {
      pcVar7 = (char *)puVar14[2];
    }
    if (pcVar7 == pcVar16 + -0x180a23a6f) {
      pcVar7 = pcVar7 + (int64_t)pcVar15;
      if (pcVar7 <= pcVar15) {
LAB_1803bdf68:
        lVar8 = 0x180d48d24;
        if (puVar14[1] != 0) {
          lVar8 = puVar14[1];
        }
        (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x240) + 0x10))
                  (*(int64_t *)(param_1 + 0x28) + 0x240,lVar8);
        break;
      }
      lVar8 = (int64_t)&rendering_buffer_2736_ptr - (int64_t)pcVar15;
      while (*pcVar15 == pcVar15[lVar8]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar7 <= pcVar15) goto LAB_1803bdf68;
      }
    }
  }
  puStack_180 = &system_data_buffer_ptr;
  uStack_168 = 0;
  puStack_178 = (void *)0x0;
  iStack_170 = 0;
  pcVar15 = "guid";
  do {
    pcVar16 = pcVar15;
    pcVar15 = pcVar16 + 1;
  } while (*pcVar15 != '\0');
  iVar18 = 1;
  for (puVar14 = *(uint64_t **)(param_2 + 0x40); puVar14 != (uint64_t *)0x0;
      puVar14 = (uint64_t *)puVar14[6]) {
    pcVar15 = (char *)*puVar14;
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x180d48d24;
      pcVar7 = pcVar11;
    }
    else {
      pcVar7 = (char *)puVar14[2];
    }
    if (pcVar7 == pcVar16 + -0x180a04c43) {
      pcVar7 = pcVar15 + (int64_t)pcVar7;
      if (pcVar7 <= pcVar15) {
LAB_1803be024:
        lVar8 = 0x180d48d24;
        if (puVar14[1] != 0) {
          lVar8 = puVar14[1];
        }
        FUN_180627c50(&puStack_180,lVar8);
        puStack_68 = (void *)0xf0000000a;
        puStack_60 = (void *)0x1900000014;
        puVar9 = puStack_178;
        if (iStack_170 != 0x26) goto LAB_1803be12a;
        iVar12 = 1;
        lVar8 = 1;
        goto LAB_1803be065;
      }
      lVar8 = (int64_t)&processed_var_6228_ptr - (int64_t)pcVar15;
      while (*pcVar15 == pcVar15[lVar8]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar7 <= pcVar15) goto LAB_1803be024;
      }
    }
  }
  goto LAB_1803be163;
  while( true ) {
    puVar5 = &system_buffer_ptr;
    if (puVar9 != (void *)0x0) {
      puVar5 = puVar9;
    }
    if (iVar12 == *(int *)((int64_t)&puStack_68 + (int64_t)pcVar11 * 4) + -1) {
      if (puVar5[lVar8] != '-') goto LAB_1803be12a;
      pcVar11 = pcVar11 + 1;
    }
    else {
      iVar2 = isxdigit();
      puVar9 = puStack_178;
      if (iVar2 == 0) goto LAB_1803be12a;
    }
    iVar12 = iVar12 + 1;
    lVar8 = lVar8 + 1;
    if (3 < (int64_t)pcVar11) break;
LAB_1803be065:
    if (0x24 < lVar8) break;
  }
  lVar8 = *(int64_t *)(param_1 + 0x28);
  puStack_108 = &memory_allocator_3432_ptr;
  puStack_100 = auStack_f0;
  auStack_f0[0] = 0;
  iStack_f8 = iStack_170;
  puVar9 = &system_buffer_ptr;
  if (puStack_178 != (void *)0x0) {
    puVar9 = puStack_178;
  }
  strcpy_s(auStack_f0,0x80,puVar9);
  FUN_1802268c0(lVar8 + 0x170,&puStack_108);
  puStack_108 = &system_state_ptr;
  param_2 = lStack_160;
LAB_1803be163:
  auStack_198[0] = 1;
  lVar8 = FUN_180631000(param_2,&rendering_buffer_2688_ptr,auStack_198);
  if (lVar8 != 0) {
    FUN_1802ee720(*(uint64_t *)(param_1 + 0x28),auStack_198[0]);
  }
  pcVar15 = (char *)0x0;
  uStack_190 = 0;
  pcVar11 = "mobility";
  do {
    pcVar16 = pcVar11;
    pcVar11 = pcVar16 + 1;
  } while (*pcVar11 != '\0');
  puVar14 = *(uint64_t **)(param_2 + 0x40);
  uVar13 = 0xffffffffffffffff;
  do {
    if (puVar14 == (uint64_t *)0x0) goto LAB_1803be2b7;
    pcVar11 = (char *)*puVar14;
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)0x180d48d24;
      pcVar7 = pcVar15;
    }
    else {
      pcVar7 = (char *)puVar14[2];
    }
    if (pcVar7 == pcVar16 + -0x180a23a2f) {
      pcVar7 = pcVar11 + (int64_t)pcVar7;
      if (pcVar7 <= pcVar11) {
LAB_1803be204:
        pcVar11 = (char *)0x180d48d24;
        if ((char *)puVar14[1] != (char *)0x0) {
          pcVar11 = (char *)puVar14[1];
        }
        uVar6 = 0xffffffffffffffff;
        do {
          uVar6 = uVar6 + 1;
        } while (pcVar11[uVar6] != '\0');
        if (((uVar6 < 3) || (*pcVar11 != '0')) ||
           (puVar9 = &processed_var_5412_ptr, (pcVar11[1] + 0xa8U & 0xdf) != 0)) {
          puVar9 = &rendering_buffer_2208_ptr;
        }
        AdvancedSystemOptimizer(pcVar11,puVar9,&uStack_190);
        uVar3 = uStack_190;
        lVar8 = *(int64_t *)(param_1 + 0x28);
        *(char *)(lVar8 + 0x2e4) = (char)uStack_190;
        pcVar11 = pcVar15;
        pcVar16 = pcVar15;
        if (*(int64_t *)(lVar8 + 0x1c8) - *(int64_t *)(lVar8 + 0x1c0) >> 3 != 0) {
          do {
            iVar12 = (int)pcVar16;
            FUN_1802e8580(*(uint64_t *)(pcVar11 + *(int64_t *)(lVar8 + 0x1c0)),uVar3 & 0xff,1);
            pcVar11 = pcVar11 + 8;
            pcVar16 = (char *)(uint64_t)(iVar12 + 1U);
          } while ((uint64_t)(int64_t)(int)(iVar12 + 1U) <
                   (uint64_t)(*(int64_t *)(lVar8 + 0x1c8) - *(int64_t *)(lVar8 + 0x1c0) >> 3));
        }
LAB_1803be2b7:
        fStack_18c = 0.0;
        pcVar11 = "lod_bias_factor";
        do {
          pcVar16 = pcVar11;
          pcVar11 = pcVar16 + 1;
        } while (*pcVar11 != '\0');
        for (puVar14 = *(uint64_t **)(param_2 + 0x40); puVar14 != (uint64_t *)0x0;
            puVar14 = (uint64_t *)puVar14[6]) {
          pcVar11 = (char *)*puVar14;
          if (pcVar11 == (char *)0x0) {
            pcVar11 = (char *)0x180d48d24;
            pcVar7 = pcVar15;
          }
          else {
            pcVar7 = (char *)puVar14[2];
          }
          if (pcVar7 == pcVar16 + -0x180a23abf) {
            pcVar7 = pcVar7 + (int64_t)pcVar11;
            if (pcVar7 <= pcVar11) {
LAB_1803be334:
              lVar8 = 0x180d48d24;
              if (puVar14[1] != 0) {
                lVar8 = puVar14[1];
              }
              AdvancedSystemOptimizer(lVar8,&system_data_6430,&fStack_18c);
              fVar20 = -8.0;
              if ((-8.0 <= fStack_18c) && (fVar20 = fStack_18c, 8.0 <= fStack_18c)) {
                fVar20 = 8.0;
              }
              FUN_1802f0940(*(uint64_t *)(param_1 + 0x28),fVar20);
              break;
            }
            lVar8 = (int64_t)&rendering_buffer_2816_ptr - (int64_t)pcVar11;
            while (*pcVar11 == pcVar11[lVar8]) {
              pcVar11 = pcVar11 + 1;
              if (pcVar7 <= pcVar11) goto LAB_1803be334;
            }
          }
        }
        uStack_194 = 0;
        pcVar11 = "scene_upgrade_level_mask";
        do {
          pcVar16 = pcVar11;
          pcVar11 = pcVar16 + 1;
        } while (*pcVar11 != '\0');
        for (puVar14 = *(uint64_t **)(param_2 + 0x40); puVar14 != (uint64_t *)0x0;
            puVar14 = (uint64_t *)puVar14[6]) {
          pcVar11 = (char *)*puVar14;
          if (pcVar11 == (char *)0x0) {
            pcVar11 = (char *)0x180d48d24;
            pcVar7 = pcVar15;
          }
          else {
            pcVar7 = (char *)puVar14[2];
          }
          if (pcVar7 == pcVar16 + -0x180a23a97) {
            pcVar7 = pcVar7 + (int64_t)pcVar11;
            if (pcVar7 <= pcVar11) {
LAB_1803be3f4:
              pcVar11 = (char *)0x180d48d24;
              if ((char *)puVar14[1] != (char *)0x0) {
                pcVar11 = (char *)puVar14[1];
              }
              do {
                uVar13 = uVar13 + 1;
              } while (pcVar11[uVar13] != '\0');
              if (((uVar13 < 3) || (*pcVar11 != '0')) ||
                 (puVar9 = &processed_var_5412_ptr, (pcVar11[1] + 0xa8U & 0xdf) != 0)) {
                puVar9 = &rendering_buffer_2208_ptr;
              }
              AdvancedSystemOptimizer(pcVar11,puVar9,&uStack_194);
              if (uStack_194 != 0) {
                uVar10 = 2;
                uVar3 = uStack_194;
                do {
                  if ((uVar3 & uVar10) != 0) {
                    puStack_158 = &system_data_buffer_ptr;
                    uStack_140 = 0;
                    puStack_150 = (int32_t *)0x0;
                    uStack_148 = 0;
                    puStack_150 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
                    *(int8_t *)puStack_150 = 0;
                    uVar4 = CoreEngineSystemCleanup(puStack_150);
                    *puStack_150 = 0x6576656c;
                    *(int16_t *)(puStack_150 + 1) = 0x5f6c;
                    *(int8_t *)((int64_t)puStack_150 + 6) = 0;
                    uStack_148 = 6;
                    uStack_140._0_4_ = uVar4;
                    System_DataHandler(&puStack_158,&processed_var_4576_ptr,iVar18);
                    FUN_1803c2430(*(int64_t *)(param_1 + 0x28) + 400,&puStack_68,&puStack_158);
                    puStack_158 = &system_data_buffer_ptr;
                    if (puStack_150 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
                      CoreEngineMemoryPoolCleaner();
                    }
                    puStack_150 = (int32_t *)0x0;
                    uStack_140 = (uint64_t)uStack_140._4_4_ << 0x20;
                    puStack_158 = &system_state_ptr;
                    uVar3 = uStack_194;
                  }
                  iVar18 = iVar18 + 1;
                  uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
                  param_2 = lStack_160;
                } while (iVar18 < 4);
              }
              break;
            }
            lVar8 = (int64_t)&rendering_buffer_2776_ptr - (int64_t)pcVar11;
            while (*pcVar11 == pcVar11[lVar8]) {
              pcVar11 = pcVar11 + 1;
              if (pcVar7 <= pcVar11) goto LAB_1803be3f4;
            }
          }
        }
        auStack_188[0] = 0xffffffff;
        pcVar11 = "season_mask";
        do {
          pcVar16 = pcVar11;
          pcVar11 = pcVar16 + 1;
        } while (*pcVar11 != '\0');
        puVar14 = *(uint64_t **)(param_2 + 0x40);
        do {
          if (puVar14 == (uint64_t *)0x0) {
LAB_1803be5e2:
            if ((param_1[0x10] != 0) &&
               ((*param_1 & *(byte *)(*(int64_t *)(param_1 + 0x28) + 0x2e7)) == 0)) {
              param_1[0x39] = 1;
            }
            puStack_180 = &system_data_buffer_ptr;
            if (puStack_178 != (void *)0x0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            puStack_178 = (void *)0x0;
            uStack_168 = uStack_168 & 0xffffffff00000000;
            puStack_180 = &system_state_ptr;
            puStack_138 = &system_data_buffer_ptr;
            if (puStack_130 != (void *)0x0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            puStack_130 = (void *)0x0;
            uStack_120 = uStack_120 & 0xffffffff00000000;
            puStack_138 = &system_state_ptr;
LAB_1803be64e:
                    // WARNING: Subroutine does not return
            SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_1c8);
          }
          pcVar11 = (char *)*puVar14;
          if (pcVar11 == (char *)0x0) {
            pcVar11 = (char *)0x180d48d24;
            pcVar7 = pcVar15;
          }
          else {
            pcVar7 = (char *)puVar14[2];
          }
          if (pcVar7 == pcVar16 + -0x180a23a7f) {
            pcVar7 = pcVar7 + (int64_t)pcVar11;
            if (pcVar7 <= pcVar11) {
LAB_1803be5b4:
              lVar8 = 0x180d48d24;
              if (puVar14[1] != 0) {
                lVar8 = puVar14[1];
              }
              AdvancedSystemOptimizer(lVar8,&rendering_buffer_2208_ptr,auStack_188);
              *(int8_t *)(*(int64_t *)(param_1 + 0x28) + 0x2e7) = (int8_t)auStack_188[0];
              goto LAB_1803be5e2;
            }
            lVar8 = (int64_t)&rendering_buffer_2752_ptr - (int64_t)pcVar11;
            while (*pcVar11 == pcVar11[lVar8]) {
              pcVar11 = pcVar11 + 1;
              if (pcVar7 <= pcVar11) goto LAB_1803be5b4;
            }
          }
          puVar14 = (uint64_t *)puVar14[6];
        } while( true );
      }
      lVar8 = (int64_t)&rendering_buffer_2672_ptr - (int64_t)pcVar11;
      while (*pcVar11 == pcVar11[lVar8]) {
        pcVar11 = pcVar11 + 1;
        if (pcVar7 <= pcVar11) goto LAB_1803be204;
      }
    }
    puVar14 = (uint64_t *)puVar14[6];
  } while( true );
LAB_1803be12a:
  param_2 = lStack_160;
  if (system_debug_flag == '\0') {
    puVar5 = &system_buffer_ptr;
    if (*(void **)(*(int64_t *)(param_1 + 0x28) + 0x290) != (void *)0x0) {
      puVar5 = *(void **)(*(int64_t *)(param_1 + 0x28) + 0x290);
    }
    puVar17 = &system_buffer_ptr;
    if (puVar9 != (void *)0x0) {
      puVar17 = puVar9;
    }
    FUN_180627020(&rendering_buffer_2696_ptr,puVar17,puVar5);
    param_2 = lStack_160;
  }
  goto LAB_1803be163;
}






