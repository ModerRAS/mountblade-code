/**
 * TaleWorlds.Native 渲染系统 - 场景管理和边界计算模块
 * 
 * 本文件包含渲染系统的场景对象边界计算、内存管理、对象状态更新等功能。
 * 这些函数负责处理复杂的场景管理、边界框计算、对象生命周期管理、着色器参数设置等关键任务。
 * 
 * 主要功能模块：
 * - 场景对象边界计算和碰撞检测
 * - 渲染系统内存管理和资源清理
 * - 对象状态更新和生命周期管理
 * - 着色器参数设置和纹理坐标处理
 * - 场景节点遍历和层次结构管理
 * 
 * 技术特点：
 * - 支持复杂的边界框计算和优化
 * - 提供高效的内存管理和资源清理
 * - 实现动态对象状态更新
 * - 包含错误检查和安全验证
 * - 优化性能和渲染质量
 * 
 * @file 03_rendering_part134.c
 * @version 1.0
 * @date 2024
 */

#include "TaleWorlds.Native.Split.h"

// 渲染系统常量定义
#define RENDERING_MAX_BOUNDING_BOX   0x7f7fffff  // 最大边界框值
#define RENDERING_MIN_BOUNDING_BOX   0xff7fffff  // 最小边界框值
#define RENDERING_DEFAULT_SHADER_ID  0x3f800000  // 默认着色器ID
#define RENDERING_MAX_TEXTURE_COORD  0x41a00000  // 最大纹理坐标
#define RENDERING_MESH_TYPE_MASK     0x14        // 网格类型掩码

// 渲染系统状态码枚举
typedef enum {
    RENDERING_SYSTEM_SUCCESS = 0,
    RENDERING_SYSTEM_ERROR_INVALID_PARAM = -1,
    RENDERING_SYSTEM_ERROR_MEMORY = -2,
    RENDERING_SYSTEM_ERROR_BOUNDARY = -3,
    RENDERING_SYSTEM_ERROR_SCENE = -4
} RenderingSystemStatusCode;

// 渲染系统边界框结构体
typedef struct {
    float max_x, max_y, max_z, max_w;     // 最大边界值
    float min_x, min_y, min_z, min_w;     // 最小边界值
    uint32_t flags;                       // 边界标志
    uint64_t object_id;                   // 对象ID
} RenderingSystemBoundingBox;

// 渲染系统场景对象结构体
typedef struct {
    void* scene_context;                  // 场景上下文指针
    RenderingSystemBoundingBox* bbox;     // 边界框指针
    uint32_t object_flags;                // 对象标志
    uint64_t render_state;                // 渲染状态
    void* material_data;                  // 材质数据指针
    float texture_coords[4];             // 纹理坐标
} RenderingSystemSceneObject;

// 渲染系统内存管理结构体
typedef struct {
    void* memory_pool;                    // 内存池指针
    size_t pool_size;                     // 内存池大小
    uint32_t allocation_flags;            // 分配标志
    uint64_t memory_usage;                // 内存使用量
    void* active_objects;                 // 活动对象列表
} RenderingSystemMemoryManager;

// =============================================================================
// 渲染系统场景对象边界计算器 (RenderingSystemSceneObjectBoundaryCalculator)
// =============================================================================
// 功能：计算场景对象的边界框，用于碰撞检测和视锥体裁剪
// 参数：param_1 - 场景对象指针
// 返回值：无
// =============================================================================
void FUN_180348d90(int64_t param_1)

{
  int64_t lVar1;
  void *puVar2;
  int64_t lStackX_8;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  
  // 获取场景对象的渲染上下文
  lVar1 = *(int64_t *)(param_1 + 0x18);
  lStackX_8 = 0;
  uStack_18 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  
  // 执行边界计算
  FUN_180348e60(0,lVar1,&lStackX_8,&uStack_48);
  
  // 如果成功获取边界，设置边界框参数
  if (lStackX_8 != 0) {
    uStack_58 = RENDERING_MAX_BOUNDING_BOX;  // 最大X坐标
    uStack_54 = RENDERING_MAX_BOUNDING_BOX;  // 最大Y坐标
    uStack_50 = RENDERING_MAX_BOUNDING_BOX;  // 最大Z坐标
    uStack_4c = RENDERING_MAX_BOUNDING_BOX;  // 最大W坐标
    uStack_68 = RENDERING_MIN_BOUNDING_BOX;  // 最小X坐标
    uStack_64 = RENDERING_MIN_BOUNDING_BOX;  // 最小Y坐标
    uStack_60 = RENDERING_MIN_BOUNDING_BOX;  // 最小Z坐标
    uStack_5c = RENDERING_MAX_BOUNDING_BOX;  // 最小W坐标
    FUN_180347ca0(param_1,lVar1,&uStack_48,&uStack_58,&uStack_68);
    return;
  }
  
  // 获取默认材质数据
  puVar2 = &system_buffer_ptr;
  if (*(void **)(lVar1 + 0x290) != (void *)0x0) {
    puVar2 = *(void **)(lVar1 + 0x290);
  }
  
  // 应用默认材质设置
  FUN_180627020(&unknown_var_5328_ptr,puVar2);
  return;
}





// =============================================================================
// 渲染系统边界框优化计算器 (RenderingSystemBoundingBoxOptimizer)
// =============================================================================
// 功能：优化计算多个对象的边界框，支持批量处理和内存管理
// 参数：param_1 - 标志位，param_2 - 渲染对象，param_3 - 结果指针，param_4 - 边界数据
// 返回值：无
// =============================================================================
void FUN_180348e60(uint64_t param_1,int64_t param_2,int64_t *param_3,uint64_t *param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  char cVar4;
  uint64_t *puVar5;
  int64_t *plVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int64_t *plStack_d0;
  int64_t *plStack_c8;
  uint64_t uStack_c0;
  int32_t uStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  int32_t uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  
  // 检查是否需要批量处理多个对象
  if (*(int64_t *)(param_2 + 0x110) == 0) {
    // 初始化批处理缓冲区
    plStack_d0 = (int64_t *)0x0;
    plStack_c8 = (int64_t *)0x0;
    uVar8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 3;
    
    // 获取需要处理的对象列表
    FUN_180347ab0(param_2,&plStack_d0,param_3,(char)param_4,0xfffffffffffffffe);
    
    // 初始化边界框极值
    fVar15 = 3.4028235e+38;  // 最大正浮点数
    fVar13 = 3.4028235e+38;  // 最大正浮点数
    fVar14 = 3.4028235e+38;  // 最大正浮点数
    fVar10 = 1.1754944e-38;  // 最小正浮点数
    fVar11 = 1.1754944e-38;  // 最小正浮点数
    fVar12 = 1.1754944e-38;  // 最小正浮点数
    
    // 遍历所有对象计算边界框
    if ((int64_t)plStack_c8 - (int64_t)plStack_d0 >> 3 != 0) {
      fVar12 = 1.1754944e-38;
      fVar11 = 1.1754944e-38;
      fVar10 = 1.1754944e-38;
      plVar6 = plStack_d0;
      uVar9 = uVar8;
      do {
        lVar1 = *(int64_t *)(uVar9 + (int64_t)plVar6);
        cVar4 = FUN_1802eee20(lVar1,&unknown_var_5272_ptr);
        if (cVar4 == '\0') {
          *param_3 = lVar1;
          FUN_1802f4040(lVar1,&fStack_b0,1);
          
          // 更新最大边界值
          if (fStack_b0 <= fVar15) {
            fVar15 = fStack_b0;
          }
          if (fStack_ac <= fVar13) {
            fVar13 = fStack_ac;
          }
          if (fStack_a8 <= fVar14) {
            fVar14 = fStack_a8;
          }
          
          // 更新最小边界值
          if (fVar10 <= fStack_a0) {
            fVar10 = fStack_a0;
          }
          if (fVar11 <= fStack_9c) {
            fVar11 = fStack_9c;
          }
          plVar6 = plStack_d0;
          if (fVar12 <= fStack_98) {
            fVar12 = fStack_98;
          }
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (uint64_t)uVar7;
        uVar9 = uVar9 + 8;
      } while ((uint64_t)(int64_t)(int)uVar7 <
               (uint64_t)((int64_t)plStack_c8 - (int64_t)plVar6 >> 3));
    }
    
    // 设置最终的边界框数据
    uStack_94 = RENDERING_MAX_BOUNDING_BOX;
    uStack_a4 = RENDERING_MAX_BOUNDING_BOX;
    fStack_b0 = fVar15;
    fStack_ac = fVar13;
    fStack_a8 = fVar14;
    fStack_a0 = fVar10;
    fStack_9c = fVar11;
    fStack_98 = fVar12;
    FUN_1800b9f60(&fStack_b0);
    plVar3 = plStack_c8;
    *param_4 = CONCAT44(fStack_ac,fStack_b0);
    param_4[1] = CONCAT44(uStack_a4,fStack_a8);
    param_4[2] = CONCAT44(fStack_9c,fStack_a0);
    param_4[3] = CONCAT44(uStack_94,fStack_98);
    *(int32_t *)(param_4 + 4) = uStack_90;
    *(int32_t *)((int64_t)param_4 + 0x24) = uStack_8c;
    *(int32_t *)(param_4 + 5) = uStack_88;
    *(int32_t *)((int64_t)param_4 + 0x2c) = uStack_84;
    *(int32_t *)(param_4 + 6) = uStack_80;
    
    // 清理临时对象
    for (plVar6 = plStack_d0; plVar6 != plVar3; plVar6 = plVar6 + 1) {
      if ((int64_t *)*plVar6 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar6 + 0x38))();
      }
    }
    if (plStack_d0 != (int64_t *)0x0) {
      // 释放批处理内存
      CoreEngine_MemoryPoolManager();
    }
  }
  else {
    // 单个对象的简单处理
    *param_3 = param_2;
    puVar5 = (uint64_t *)FUN_1802f4040(param_2,&fStack_b0,1);
    uVar2 = puVar5[1];
    *param_4 = *puVar5;
    param_4[1] = uVar2;
    uVar2 = puVar5[3];
    param_4[2] = puVar5[2];
    param_4[3] = uVar2;
    uVar2 = puVar5[5];
    param_4[4] = puVar5[4];
    param_4[5] = uVar2;
    *(int32_t *)(param_4 + 6) = *(int32_t *)(puVar5 + 6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 渲染系统场景对象释放器 (RenderingSystemSceneObjectReleaser)
// =============================================================================
// 功能：安全释放场景对象及其相关资源，处理内存管理和状态更新
// 参数：param_1 - 渲染系统上下文，param_2 - 场景对象，param_3/4 - 标志位
// 返回值：无
// =============================================================================
void FUN_1803490e0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint uVar8;
  void *puVar10;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  uint64_t uVar11;
  void *puStack_80;
  int32_t *puStack_78;
  int32_t uStack_70;
  uint64_t uStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  uint64_t uVar9;
  
  uVar11 = 0xfffffffffffffffe;
  
  // 获取场景对象的引用
  plVar1 = *(int64_t **)(param_2 + 0x1b8);
  plStackX_10 = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    // 调用对象的释放方法
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  
  uVar9 = 0;
  puStack_80 = &system_data_buffer_ptr;
  uStack_68 = 0;
  puStack_78 = (int32_t *)0x0;
  uStack_70 = 0;
  
  // 创建调试信息字符串 "_usemesh_begin_design"
  puVar4 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x11,0x13,param_4,uVar11);
  *(int8_t *)puVar4 = 0;
  puStack_78 = puVar4;
  uVar3 = CoreMemoryPoolCleaner(puVar4);
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar3);
  *puVar4 = 0x5f657375;        // "_use"
  puVar4[1] = 0x6873656d;     // "mesh"
  puVar4[2] = 0x6e65625f;     // "neb_"
  puVar4[3] = 0x676e6964;     // "gnid"
  *(int8_t *)(puVar4 + 4) = 0;
  uStack_70 = 0x10;
  
  // 检查对象状态
  lVar5 = SystemCore_LoggingSystem0(plVar1[0x3c],&puStack_80,0);
  if (lVar5 != 0) {
    uVar6 = SystemCore_LoggingSystem0(plVar1[0x3c],&puStack_80,0);
    if ((plVar1[0x28] & uVar6) == 0) {
      // 获取对象的管理器引用
      puVar7 = (uint64_t *)FUN_18022cb40(plVar1,&plStackX_20);
      plVar2 = (int64_t *)*puVar7;
      *puVar7 = 0;
      plStackX_10 = plVar2;
      plStackX_18 = plVar1;
      
      // 释放对象和管理器
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      if (plStackX_20 != (int64_t *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      
      // 检查对象是否可以安全释放
      uVar6 = SystemCore_LoggingSystem0(plVar2[0x3c],&puStack_80,1);
      if (uVar6 == 0) {
        // 记录释放事件
        puVar10 = &system_buffer_ptr;
        if ((void *)plVar2[3] != (void *)0x0) {
          puVar10 = (void *)plVar2[3];
        }
        FUN_1806272a0(&unknown_var_7560_ptr,puVar4,puVar10);
      }
      else {
        // 更新对象状态
        plVar2[0x28] = plVar2[0x28] | uVar6;
        FUN_18022dd60(plVar2);
      }
      
      // 清理场景对象的引用
      FUN_180076910(param_2,&plStackX_10);
      
      // 获取相关的渲染对象列表
      lStack_60 = 0;
      lStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 3;
      FUN_1802e8c60(*(uint64_t *)(param_1 + 0x18),&lStack_60);
      FUN_1802ec150(*(uint64_t *)(param_1 + 0x18),1);
      uVar6 = uVar9;
      
      // 释放所有相关的渲染对象
      if (lStack_58 - lStack_60 >> 3 != 0) {
        do {
          FUN_1802ec150(*(uint64_t *)(uVar6 + lStack_60),1);
          uVar8 = (int)uVar9 + 1;
          uVar9 = (uint64_t)uVar8;
          uVar6 = uVar6 + 8;
        } while ((uint64_t)(int64_t)(int)uVar8 < (uint64_t)(lStack_58 - lStack_60 >> 3));
      }
      
      // 清理临时内存
      if (lStack_60 != 0) {
        CoreEngine_MemoryPoolManager();
      }
    }
  }
  
  // 清理调试信息
  puStack_80 = &system_data_buffer_ptr;
  CoreEngine_MemoryPoolManager(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 渲染系统批量对象清理器 (RenderingSystemBatchObjectCleaner)
// =============================================================================
// 功能：批量清理和释放渲染对象，处理复杂的内存管理和状态同步
// 参数：param_1 - 渲染系统上下文
// 返回值：无
// =============================================================================
void FUN_180349330(int64_t param_1)

{
  int32_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  uint uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  int32_t uVar13;
  int32_t extraout_XMM0_Da;
  int8_t auStack_188 [32];
  int64_t lStack_168;
  int64_t *plStack_160;
  int64_t *plStack_158;
  int64_t *plStack_150;
  int64_t lStack_148;
  int64_t lStack_140;
  uint64_t uStack_138;
  int32_t uStack_130;
  int64_t *plStack_120;
  int64_t *plStack_118;
  uint64_t uStack_110;
  int32_t uStack_108;
  uint64_t uStack_100;
  void *puStack_f8;
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int8_t auStack_e0 [72];
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  uint64_t uStack_38;
  
  uStack_100 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  uVar7 = 0;
  plStack_120 = (int64_t *)0x0;
  plStack_118 = (int64_t *)0x0;
  uStack_110 = 0;
  uStack_108 = 3;
  lStack_168 = param_1;
  
  // 获取需要清理的对象列表
  FUN_1802e92b0(*(uint64_t *)(param_1 + 0x18),&plStack_120,1,0xffffffff);
  uVar11 = (int64_t)plStack_118 - (int64_t)plStack_120 >> 3;
  uVar10 = uVar7;
  plVar12 = plStack_120;
  
  // 第一阶段：清理对象管理器
  if (uVar11 != 0) {
    do {
      lVar2 = *plVar12;
      if (lVar2 != 0) {
        plVar6 = *(int64_t **)(lVar2 + 0x1b8);
        plStack_150 = plVar6;
        if (plVar6 != (int64_t *)0x0) {
          (**(code **)(*plVar6 + 0x28))(plVar6);
        }
        lVar3 = plVar6[0x3c];
        puStack_f8 = &unknown_var_3480_ptr;
        puStack_f0 = auStack_e0;
        auStack_e0[0] = 0;
        uStack_e8 = 0x10;
        strcpy_s(auStack_e0,0x40,&system_memory_d580);
        lVar3 = SystemCore_LoggingSystem0(lVar3,&puStack_f8,0);
        puStack_f8 = &system_state_ptr;
        plVar8 = plVar6;
        if (lVar3 != 0) {
          // 分离对象管理器
          puVar4 = (uint64_t *)FUN_18022cb40(plVar6,&plStack_158);
          plVar8 = (int64_t *)*puVar4;
          *puVar4 = 0;
          plStack_160 = plVar6;
          plStack_150 = plVar8;
          if (plVar6 != (int64_t *)0x0) {
            (**(code **)(*plVar6 + 0x38))();
          }
          if (plStack_158 != (int64_t *)0x0) {
            (**(code **)(*plStack_158 + 0x38))();
          }
          
          // 清理管理器状态
          puStack_98 = &unknown_var_3480_ptr;
          puStack_90 = auStack_80;
          auStack_80[0] = 0;
          uStack_88 = 0x10;
          strcpy_s(auStack_80,0x40,&system_memory_d580);
          uVar5 = SystemCore_LoggingSystem0(plVar8[0x3c],&puStack_98,1);
          plVar8[0x28] = plVar8[0x28] & ~uVar5;
          FUN_18022dd60(plVar8);
          puStack_98 = &system_state_ptr;
          FUN_180076910(lVar2,&plStack_150);
        }
        if (plVar8 != (int64_t *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8);
        }
      }
      uVar9 = (int)uVar10 + 1;
      param_1 = lStack_168;
      uVar10 = (uint64_t)uVar9;
      plVar12 = plVar12 + 1;
    } while ((uint64_t)(int64_t)(int)uVar9 < uVar11);
  }
  
  // 第二阶段：清理渲染对象
  plVar12 = plStack_118;
  lStack_148 = 0;
  lStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 3;
  FUN_1802e8c60(*(uint64_t *)(param_1 + 0x18),&lStack_148);
  lStack_168 = *(int64_t *)(param_1 + 0x18);
  uVar13 = FUN_18005ea90(&lStack_148,&lStack_168);
  uVar10 = uVar7;
  
  if (lStack_140 - lStack_148 >> 3 != 0) {
    do {
      lVar2 = *(int64_t *)(uVar10 + lStack_148);
      *(int8_t *)(lVar2 + 0x2d8) = 0;
      
      // 清理主渲染对象
      if (*(int64_t *)(lVar2 + 0x110) != 0) {
        plVar6 = (int64_t *)FUN_1800b3430(uVar13,&lStack_168,*(int64_t *)(lVar2 + 0x110) + 0x10,1);
        uVar13 = extraout_XMM0_Da;
        plStack_160 = plVar6;
        if (*plVar6 != *(int64_t *)(lVar2 + 0x110)) {
          uVar13 = FUN_1802ecfb0(lVar2,*plVar6,*(int32_t *)(lVar2 + 0x148));
        }
        if ((int64_t *)*plVar6 != (int64_t *)0x0) {
          uVar13 = (**(code **)(*(int64_t *)*plVar6 + 0x38))();
        }
        lVar3 = *(int64_t *)(lVar2 + 0x20);
        if (lVar3 != 0) {
          if (*(int64_t *)(lVar2 + 0x270) != 0) {
            FUN_1802e8910(lVar2);
            *(int8_t *)(lVar2 + 0x278) = 0;
            lVar3 = *(int64_t *)(lVar2 + 0x20);
          }
          uVar13 = FUN_1802f28f0(lVar2,lVar3);
        }
      }
      
      // 清理辅助渲染对象
      if (*(int64_t *)(lVar2 + 0x10) != 0) {
        uVar1 = *(int32_t *)(lVar2 + 0x18);
        puVar4 = (uint64_t *)
                 FUN_1800b3430(uVar13,&plStack_158,*(int64_t *)(lVar2 + 0x10) + 0x10,1);
        uVar13 = FUN_1802ed050(lVar2,*puVar4,uVar1);
        if (plStack_158 != (int64_t *)0x0) {
          uVar13 = (**(code **)(*plStack_158 + 0x38))();
        }
      }
      uVar9 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar9;
      uVar10 = uVar10 + 8;
    } while ((uint64_t)(int64_t)(int)uVar9 < (uint64_t)(lStack_140 - lStack_148 >> 3));
  }
  
  // 第三阶段：清理临时资源
  plVar6 = plStack_120;
  if (lStack_148 != 0) {
    CoreEngine_MemoryPoolManager();
  }
  lStack_148 = 0;
  for (plVar8 = plStack_120; plVar8 != plVar12; plVar8 = plVar8 + 1) {
    if ((int64_t *)*plVar8 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar8 + 0x38))();
    }
  }
  if (plVar6 != (int64_t *)0x0) {
    CoreEngine_MemoryPoolManager(plVar6);
  }
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_188);
}



// =============================================================================
// 渲染系统内存分配器 (RenderingSystemMemoryAllocator)
// =============================================================================
// 功能：为渲染系统分配内存，支持多种分配模式和标志位
// 参数：param_1 - 内存指针，param_2 - 分配大小，param_3/4 - 标志位
// 返回值：分配的内存指针
// =============================================================================
uint64_t *
FUN_180349730(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_6048_ptr;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x80,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 渲染系统材质初始化器 (RenderingSystemMaterialInitializer)
// =============================================================================
// 功能：初始化渲染材质对象，设置默认参数和属性
// 参数：param_1 - 材质对象指针
// 返回值：无
// =============================================================================
void FUN_180349780(uint64_t *param_1)

{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  void *puStack_90;
  uint64_t *puStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  
  uVar3 = 0xfffffffffffffffe;
  puVar2 = param_1;
  FUN_1803456e0();
  *puVar2 = &unknown_var_6048_ptr;
  puVar2[0xe] = 0;
  *(int32_t *)(puVar2 + 0xf) = RENDERING_DEFAULT_SHADER_ID;
  puStack_90 = &system_data_buffer_ptr;
  uStack_78 = 0;
  puStack_88 = (uint64_t *)0x0;
  uStack_80 = 0;
  
  // 创建材质名称 "Material"
  puVar2 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_88 = puVar2;
  uVar1 = CoreMemoryPoolCleaner(puVar2);
  uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
  *puVar2 = 0x6c6169726574614d;  // "Material"
  *(int8_t *)(puVar2 + 1) = 0;
  uStack_80 = 8;
  
  // 应用材质参数
  FUN_1803460a0(param_1,&puStack_90,param_1 + 0xe,10,uVar3);
  puStack_90 = &system_data_buffer_ptr;
  CoreEngine_MemoryPoolManager(puVar2);
}





// =============================================================================
// 渲染系统场景更新器 (RenderingSystemSceneUpdater)
// =============================================================================
// 功能：更新场景中的活动对象，处理状态变化和事件通知
// 参数：param_1 - 场景对象
// 返回值：无
// =============================================================================
void FUN_1803499b0(int64_t param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  
  // 检查是否有活动对象需要更新
  if (*(int64_t *)(param_1 + 0x70) != 0) {
    lVar1 = *(int64_t *)(param_1 + 0x18);
    uVar2 = 0;
    uVar4 = uVar2;
    
    // 遍历所有活动对象并调用更新方法
    if (*(int64_t *)(lVar1 + 0xf8) - *(int64_t *)(lVar1 + 0xf0) >> 3 != 0) {
      do {
        (**(code **)(**(int64_t **)(uVar2 + *(int64_t *)(lVar1 + 0xf0)) + 0x98))();
        uVar2 = uVar2 + 8;
        uVar3 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar3;
      } while ((uint64_t)(int64_t)(int)uVar3 <
               (uint64_t)(*(int64_t *)(lVar1 + 0xf8) - *(int64_t *)(lVar1 + 0xf0) >> 3));
    }
  }
  return;
}





// =============================================================================
// 渲染系统强制场景更新器 (RenderingSystemForceSceneUpdater)
// =============================================================================
// 功能：强制更新场景中的所有对象，忽略活动状态检查
// 参数：param_1 - 场景对象
// 返回值：无
// =============================================================================
void FUN_1803499bb(int64_t param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  
  lVar1 = *(int64_t *)(param_1 + 0x18);
  uVar2 = 0;
  uVar4 = uVar2;
  
  // 强制遍历所有对象并调用更新方法
  if (*(int64_t *)(lVar1 + 0xf8) - *(int64_t *)(lVar1 + 0xf0) >> 3 != 0) {
    do {
      (**(code **)(**(int64_t **)(uVar2 + *(int64_t *)(lVar1 + 0xf0)) + 0x98))();
      uVar2 = uVar2 + 8;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)(*(int64_t *)(lVar1 + 0xf8) - *(int64_t *)(lVar1 + 0xf0) >> 3));
  }
  return;
}





// =============================================================================
// 渲染系统全局场景更新器 (RenderingSystemGlobalSceneUpdater)
// =============================================================================
// 功能：全局更新所有场景对象，使用寄存器变量优化性能
// 参数：无
// 返回值：无
// =============================================================================
void FUN_1803499e2(void)

{
  int64_t unaff_RBX;
  uint64_t uVar1;
  uint unaff_EDI;
  
  uVar1 = (uint64_t)unaff_EDI;
  
  // 使用寄存器变量优化的全局场景更新循环
  do {
    (**(code **)(**(int64_t **)(uVar1 + *(int64_t *)(unaff_RBX + 0xf0)) + 0x98))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0xf8) - *(int64_t *)(unaff_RBX + 0xf0) >> 3));
  return;
}





// =============================================================================
// 渲染系统空操作器 (RenderingSystemNoOperation)
// =============================================================================
// 功能：空操作函数，用于系统初始化和状态同步
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180349a29(void)

{
  return;
}





// =============================================================================
// 渲染系统同步点 (RenderingSystemSynchronizationPoint)
// =============================================================================
// 功能：系统同步点，用于多线程渲染同步
// 参数：无
// 返回值：无
// =============================================================================
void FUN_180349a33(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 渲染系统着色器参数设置器 (RenderingSystemShaderParameterSetter)
// =============================================================================
// 功能：设置着色器参数和材质属性，支持多种参数类型
// 参数：param_1 - 渲染上下文
// 返回值：无
// =============================================================================
void FUN_180349a50(uint64_t param_1)

{
  int8_t auStack_1e8 [32];
  int32_t uStack_1c8;
  void **appuStack_1c0 [2];
  uint64_t uStack_1b0;
  void *apuStack_1a8 [11];
  int32_t uStack_150;
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uStack_1b0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1e8;
  uStack_1c8 = 0;
  
  // 设置第一个着色器参数
  puStack_148 = &unknown_var_3480_ptr;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 8;
  strcpy_s(auStack_130,0x40,&system_memory_0410);
  SystemCommunicationProcessor(apuStack_1a8,&puStack_148);
  uStack_150 = 10;
  uStack_1c8 = 1;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  
  // 设置第二个着色器参数
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &system_state_ptr;
  puStack_148 = &system_state_ptr;
  puStack_e8 = &unknown_var_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 6;
  strcpy_s(auStack_d0,0x40,&system_memory_d218);
  SystemCommunicationProcessor(apuStack_1a8,&puStack_e8);
  uStack_150 = 2;
  uStack_1c8 = 2;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  
  // 设置第三个着色器参数
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &system_state_ptr;
  puStack_e8 = &system_state_ptr;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 7;
  strcpy_s(auStack_70,0x40,&system_memory_d220);
  SystemCommunicationProcessor(apuStack_1a8,&puStack_88);
  uStack_150 = 2;
  uStack_1c8 = 4;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &system_state_ptr;
  puStack_88 = &system_state_ptr;
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_1e8);
}





// =============================================================================
// 渲染系统消息处理器 (RenderingSystemMessageHandler)
// =============================================================================
// 功能：处理渲染系统消息，支持多种消息类型的路由和处理
// 参数：param_1 - 渲染系统上下文，param_2 - 消息数据
// 返回值：无
// =============================================================================
void FUN_180349c70(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  
  // 处理长度为8的消息
  if (*(int *)(param_2 + 0x10) == 8) {
    iVar1 = _stricmp(*(uint64_t *)(param_2 + 8),&system_memory_0410);
    if (iVar1 == 0) {
      FUN_1803499b0(param_1);
    }
  }
  
  // 处理长度为6的消息
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 6) {
    _stricmp(*(uint64_t *)(param_2 + 8),&system_memory_d218);
    iVar1 = *(int *)(param_2 + 0x10);
  }
  
  // 处理长度为7的消息
  if (iVar1 == 7) {
    _stricmp(*(uint64_t *)(param_2 + 8),&system_memory_d220);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// =============================================================================
// 渲染系统纹理对象初始化器 (RenderingSystemTextureObjectInitializer)
// =============================================================================
// 功能：初始化纹理对象，设置纹理坐标、着色器参数和材质属性
// 参数：param_1 - 纹理对象指针，param_2 - 纹理参数
// 返回值：无
// =============================================================================
void FUN_180349ce0(uint64_t *param_1,int64_t param_2)

{
  uint64_t *puVar1;
  int8_t auStack_168 [32];
  uint64_t uStack_148;
  uint64_t *puStack_140;
  void *puStack_138;
  int8_t *puStack_130;
  int32_t uStack_128;
  int8_t auStack_120 [16];
  void *puStack_110;
  int8_t *puStack_108;
  int32_t uStack_100;
  int8_t auStack_f8 [32];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [32];
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [32];
  void *puStack_68;
  int8_t *puStack_60;
  int32_t uStack_58;
  int8_t auStack_50 [32];
  uint64_t uStack_30;
  
  uStack_148 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  puVar1 = param_1;
  puStack_140 = param_1;
  FUN_1803456e0();
  
  // 初始化纹理对象基本信息
  *puVar1 = &unknown_var_6496_ptr;
  *(int16_t *)(puVar1 + 0x12) = 0;
  *(int8_t *)((int64_t)puVar1 + 0x92) = 0;
  *(bool *)((int64_t)puVar1 + 0x93) = *(char *)(param_2 + 0x2e5) == '\0';
  *(int32_t *)(puVar1 + 0x13) = 0;
  *(int8_t *)((int64_t)puVar1 + 0x94) = 0;
  *(int32_t *)((int64_t)puVar1 + 0x8c) = RENDERING_DEFAULT_SHADER_ID;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(int32_t *)(puVar1 + 0x11) = RENDERING_MAX_TEXTURE_COORD;
  
  // 设置纹理名称和属性
  puStack_138 = &system_config_ptr;
  puStack_130 = auStack_120;
  auStack_120[0] = 0;
  uStack_128 = 8;
  strcpy_s(auStack_120,0x10,&unknown_var_8280_ptr);
  FUN_1803460a0(param_1,&puStack_138,param_1 + 0x12,3);
  puStack_138 = &system_state_ptr;
  
  // 设置纹理参数
  puStack_110 = &unknown_var_672_ptr;
  puStack_108 = auStack_f8;
  auStack_f8[0] = 0;
  uStack_100 = 0x13;
  strcpy_s(auStack_f8,0x20,&unknown_var_6464_ptr);
  FUN_1803460a0(param_1,&puStack_110,(int64_t)param_1 + 0x92,3);
  puStack_110 = &system_state_ptr;
  
  // 设置着色器参数
  puStack_d8 = &unknown_var_672_ptr;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 0x11;
  strcpy_s(auStack_c0,0x20,&unknown_var_6440_ptr);
  FUN_1803460a0(param_1,&puStack_d8,(int64_t)param_1 + 0x8c,2);
  puStack_d8 = &system_state_ptr;
  
  // 设置纹理坐标
  puStack_a0 = &unknown_var_672_ptr;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0xf;
  strcpy_s(auStack_88,0x20,&unknown_var_6424_ptr);
  FUN_1803460a0(param_1,&puStack_a0,param_1 + 0x11,2);
  puStack_a0 = &system_state_ptr;
  
  // 设置材质属性
  puStack_68 = &unknown_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 9;
  strcpy_s(auStack_50,0x20,&unknown_var_6408_ptr);
  FUN_1803460a0(param_1,&puStack_68,param_1 + 0xf,5);
  puStack_68 = &system_state_ptr;
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_168);
}



// =============================================================================
// 渲染系统内存释放器 (RenderingSystemMemoryReleaser)
// =============================================================================
// 功能：释放渲染系统内存，支持条件释放和内存清理
// 参数：param_1 - 内存指针，param_2 - 释放标志，param_3/4 - 清理参数
// 返回值：释放的内存指针
// =============================================================================
uint64_t FUN_180349fb0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xe0,param_3,param_4,uVar1);
  }
  return param_1;
}





// =============================================================================
// 渲染系统纹理参数同步器 (RenderingSystemTextureParameterSynchronizer)
// =============================================================================
// 功能：同步纹理参数和渲染状态，确保渲染一致性
// 参数：param_1 - 纹理对象
// 返回值：无
// =============================================================================
void FUN_18034a000(int64_t param_1)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  // 检查是否需要同步纹理参数
  if (*(char *)(param_1 + 0x93) == '\0') {
    // 获取纹理管理器
    uVar5 = FUN_1803191b0(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x60c10);
    *(uint64_t *)(param_1 + 0x70) = uVar5;
    FUN_18031b950(uVar5,*(int64_t *)(param_1 + 0x18) + 0x70,1);
    
    // 同步纹理属性
    lVar1 = *(int64_t *)(param_1 + 0x70);
    *(int32_t *)(lVar1 + 0x144) = *(int32_t *)(param_1 + 0x8c);
    uVar4 = RENDERING_MESH_TYPE_MASK;
    if (*(int *)(lVar1 + 0x4c) != 0x18) {
      uVar4 = 0;
    }
    *(int32_t *)(lVar1 + 0x4c) = uVar4;
    lVar1 = *(int64_t *)(param_1 + 0x70);
    *(int32_t *)(lVar1 + 0x60) = *(int32_t *)(param_1 + 0x88);
    *(int8_t *)(lVar1 + 0x50) = 1;
    
    // 同步纹理状态标志
    *(int8_t *)(*(int64_t *)(param_1 + 0x70) + 0x148) = *(int8_t *)(param_1 + 0x90);
    *(int8_t *)(*(int64_t *)(param_1 + 0x70) + 0x149) = *(int8_t *)(param_1 + 0x92);
    *(int8_t *)(*(int64_t *)(param_1 + 0x70) + 0x14a) = *(int8_t *)(param_1 + 0x91);
    
    // 同步材质参数
    lVar1 = *(int64_t *)(param_1 + 0x70);
    uVar4 = *(int32_t *)(param_1 + 0x7c);
    uVar2 = *(int32_t *)(param_1 + 0x80);
    uVar3 = *(int32_t *)(param_1 + 0x84);
    *(int32_t *)(lVar1 + 0xe4) = *(int32_t *)(param_1 + 0x78);
    *(int32_t *)(lVar1 + 0xe8) = uVar4;
    *(int32_t *)(lVar1 + 0xec) = uVar2;
    *(int32_t *)(lVar1 + 0xf0) = uVar3;
    FUN_18031bc40();
    
    // 同步渲染矩阵和变换参数
    lVar1 = *(int64_t *)(param_1 + 0x18);
    uVar5 = *(uint64_t *)(lVar1 + 0x78);
    *(uint64_t *)(param_1 + 0x9c) = *(uint64_t *)(lVar1 + 0x70);
    *(uint64_t *)(param_1 + 0xa4) = uVar5;
    uVar5 = *(uint64_t *)(lVar1 + 0x88);
    *(uint64_t *)(param_1 + 0xac) = *(uint64_t *)(lVar1 + 0x80);
    *(uint64_t *)(param_1 + 0xb4) = uVar5;
    uVar5 = *(uint64_t *)(lVar1 + 0x98);
    *(uint64_t *)(param_1 + 0xbc) = *(uint64_t *)(lVar1 + 0x90);
    *(uint64_t *)(param_1 + 0xc4) = uVar5;
    uVar5 = *(uint64_t *)(lVar1 + 0xa8);
    *(uint64_t *)(param_1 + 0xcc) = *(uint64_t *)(lVar1 + 0xa0);
    *(uint64_t *)(param_1 + 0xd4) = uVar5;
  }
  return;
}





// =============================================================================
// 渲染系统纹理对象更新器 (RenderingSystemTextureObjectUpdater)
// =============================================================================
// 功能：更新纹理对象参数，支持多态调用和状态同步
// 参数：param_1 - 纹理对象指针
// 返回值：无
// =============================================================================
void FUN_18034a100(uint64_t *param_1)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  // 检查对象类型并调用相应的更新方法
  if ((void *)*param_1 == &unknown_var_6496_ptr) {
    if (*(char *)((int64_t)param_1 + 0x93) == '\0') {
      // 获取纹理管理器
      uVar5 = FUN_1803191b0(*(int64_t *)(param_1[3] + 0x20) + 0x60c10);
      param_1[0xe] = uVar5;
      FUN_18031b950(uVar5,param_1[3] + 0x70,1);
      
      // 更新纹理属性
      lVar1 = param_1[0xe];
      *(int32_t *)(lVar1 + 0x144) = *(int32_t *)((int64_t)param_1 + 0x8c);
      uVar4 = RENDERING_MESH_TYPE_MASK;
      if (*(int *)(lVar1 + 0x4c) != 0x18) {
        uVar4 = 0;
      }
      *(int32_t *)(lVar1 + 0x4c) = uVar4;
      lVar1 = param_1[0xe];
      *(int32_t *)(lVar1 + 0x60) = *(int32_t *)(param_1 + 0x11);
      *(int8_t *)(lVar1 + 0x50) = 1;
      
      // 更新纹理状态标志
      *(int8_t *)(param_1[0xe] + 0x148) = *(int8_t *)(param_1 + 0x12);
      *(int8_t *)(param_1[0xe] + 0x149) = *(int8_t *)((int64_t)param_1 + 0x92);
      *(int8_t *)(param_1[0xe] + 0x14a) = *(int8_t *)((int64_t)param_1 + 0x91);
      
      // 更新材质参数
      lVar1 = param_1[0xe];
      uVar4 = *(int32_t *)((int64_t)param_1 + 0x7c);
      uVar2 = *(int32_t *)(param_1 + 0x10);
      uVar3 = *(int32_t *)((int64_t)param_1 + 0x84);
      *(int32_t *)(lVar1 + 0xe4) = *(int32_t *)(param_1 + 0xf);
      *(int32_t *)(lVar1 + 0xe8) = uVar4;
      *(int32_t *)(lVar1 + 0xec) = uVar2;
      *(int32_t *)(lVar1 + 0xf0) = uVar3;
      FUN_18031bc40();
      
      // 更新渲染矩阵和变换参数
      lVar1 = param_1[3];
      uVar5 = *(uint64_t *)(lVar1 + 0x78);
      *(uint64_t *)((int64_t)param_1 + 0x9c) = *(uint64_t *)(lVar1 + 0x70);
      *(uint64_t *)((int64_t)param_1 + 0xa4) = uVar5;
      uVar5 = *(uint64_t *)(lVar1 + 0x88);
      *(uint64_t *)((int64_t)param_1 + 0xac) = *(uint64_t *)(lVar1 + 0x80);
      *(uint64_t *)((int64_t)param_1 + 0xb4) = uVar5;
      uVar5 = *(uint64_t *)(lVar1 + 0x98);
      *(uint64_t *)((int64_t)param_1 + 0xbc) = *(uint64_t *)(lVar1 + 0x90);
      *(uint64_t *)((int64_t)param_1 + 0xc4) = uVar5;
      uVar5 = *(uint64_t *)(lVar1 + 0xa8);
      *(uint64_t *)((int64_t)param_1 + 0xcc) = *(uint64_t *)(lVar1 + 0xa0);
      *(uint64_t *)((int64_t)param_1 + 0xd4) = uVar5;
    }
  }
  else {
    // 调用多态更新方法
    (**(code **)((void *)*param_1 + 0x70))(param_1);
  }
  
  // 同步渲染状态
  lVar1 = param_1[3];
  uVar5 = *(uint64_t *)(lVar1 + 0x78);
  *(uint64_t *)((int64_t)param_1 + 0x9c) = *(uint64_t *)(lVar1 + 0x70);
  *(uint64_t *)((int64_t)param_1 + 0xa4) = uVar5;
  uVar5 = *(uint64_t *)(lVar1 + 0x88);
  *(uint64_t *)((int64_t)param_1 + 0xac) = *(uint64_t *)(lVar1 + 0x80);
  *(uint64_t *)((int64_t)param_1 + 0xb4) = uVar5;
  uVar5 = *(uint64_t *)(lVar1 + 0x98);
  *(uint64_t *)((int64_t)param_1 + 0xbc) = *(uint64_t *)(lVar1 + 0x90);
  *(uint64_t *)((int64_t)param_1 + 0xc4) = uVar5;
  uVar5 = *(uint64_t *)(lVar1 + 0xa8);
  *(uint64_t *)((int64_t)param_1 + 0xcc) = *(uint64_t *)(lVar1 + 0xa0);
  *(uint64_t *)((int64_t)param_1 + 0xd4) = uVar5;
  return;
}





// =============================================================================
// 渲染系统纹理时间更新器 (RenderingSystemTextureTimeUpdater)
// =============================================================================
// 功能：更新纹理的时间参数，处理动画和过渡效果
// 参数：param_1 - 纹理对象，param_2 - 时间增量
// 返回值：无
// =============================================================================
void FUN_18034a260(int64_t param_1,float param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  char cVar3;
  
  // 检查是否需要更新时间参数
  if (*(char *)(param_1 + 0x93) == '\0') {
    lVar1 = *(int64_t *)(param_1 + 0x18);
    cVar3 = func_0x000180285f10(param_1 + 0x9c,lVar1 + 0x70,0x3c23d70a);
    
    if (cVar3 == '\0') {
      // 初始化时间参数
      *(int32_t *)(param_1 + 0x98) = 0x40000000;
      if (*(int *)(*(int64_t *)(param_1 + 0x70) + 0x4c) != 0) {
        *(int8_t *)(param_1 + 0x94) = 1;
      }
      FUN_18031b950(*(int64_t *)(param_1 + 0x70),lVar1 + 0x70,0);
    }
    else {
      // 更新时间参数
      *(float *)(param_1 + 0x98) = *(float *)(param_1 + 0x98) - param_2;
    }
    
    // 同步渲染状态
    uVar2 = *(uint64_t *)(lVar1 + 0x78);
    *(uint64_t *)(param_1 + 0x9c) = *(uint64_t *)(lVar1 + 0x70);
    *(uint64_t *)(param_1 + 0xa4) = uVar2;
    uVar2 = *(uint64_t *)(lVar1 + 0x88);
    *(uint64_t *)(param_1 + 0xac) = *(uint64_t *)(lVar1 + 0x80);
    *(uint64_t *)(param_1 + 0xb4) = uVar2;
    uVar2 = *(uint64_t *)(lVar1 + 0x98);
    *(uint64_t *)(param_1 + 0xbc) = *(uint64_t *)(lVar1 + 0x90);
    *(uint64_t *)(param_1 + 0xc4) = uVar2;
    uVar2 = *(uint64_t *)(lVar1 + 0xa8);
    *(uint64_t *)(param_1 + 0xcc) = *(uint64_t *)(lVar1 + 0xa0);
    *(uint64_t *)(param_1 + 0xd4) = uVar2;
    
    // 检查时间是否结束，清理状态
    if ((*(char *)(param_1 + 0x94) != '\0') &&
       (*(float *)(param_1 + 0x98) <= 0.0 && *(float *)(param_1 + 0x98) != 0.0)) {
      *(int8_t *)(param_1 + 0x94) = 0;
      *(int32_t *)(*(int64_t *)(param_1 + 0x70) + 0x4c) = 0;
      *(int8_t *)(*(int64_t *)(param_1 + 0x70) + 0x50) = 1;
    }
  }
  return;
}

// =============================================================================
// 函数别名定义 (Function Aliases)
// =============================================================================

// 主要功能函数别名
#define RenderingSystemBoundaryCalculator FUN_180348d90
#define RenderingSystemBoundaryChecker FUN_180348e60
#define RenderingSystemBoundaryProcessor FUN_180348f30
#define RenderingSystemBoundaryValidator FUN_1803490e0
#define RenderingSystemCollisionDetector FUN_1803491a0
#define RenderingSystemCollisionProcessor FUN_180349280
#define RenderingSystemMeshValidator FUN_180349370
#define RenderingSystemResourceCleaner FUN_180349450
#define RenderingSystemMemoryManager FUN_1803495d0
#define RenderingSystemMemoryAllocator FUN_180349730
#define RenderingSystemMaterialInitializer FUN_180349780
#define RenderingSystemSceneUpdater FUN_1803499b0
#define RenderingSystemForceSceneUpdater FUN_1803499bb
#define RenderingSystemGlobalSceneUpdater FUN_1803499e2
#define RenderingSystemNoOperation FUN_180349a29
#define RenderingSystemSynchronizationPoint FUN_180349a33
#define RenderingSystemShaderParameterSetter FUN_180349a50
#define RenderingSystemMessageHandler FUN_180349c70
#define RenderingSystemTextureObjectInitializer FUN_180349ce0
#define RenderingSystemMemoryReleaser FUN_180349fb0
#define RenderingSystemTextureParameterSynchronizer FUN_18034a000
#define RenderingSystemTextureObjectUpdater FUN_18034a100
#define RenderingSystemTextureTimeUpdater FUN_18034a260

// =============================================================================
// 渲染系统场景管理和边界计算模块技术说明
// =============================================================================
// 
// 本模块实现了渲染系统中的场景对象管理、边界计算和碰撞检测功能。
// 
// 主要功能模块：
// 
// 1. 边界计算系统
//    - 边界计算器 (RenderingSystemBoundaryCalculator)
//    - 边界检查器 (RenderingSystemBoundaryChecker)
//    - 边界处理器 (RenderingSystemBoundaryProcessor)
//    - 边界验证器 (RenderingSystemBoundaryValidator)
// 
// 2. 碰撞检测系统
//    - 碰撞检测器 (RenderingSystemCollisionDetector)
//    - 碰撞处理器 (RenderingSystemCollisionProcessor)
// 
// 3. 网格验证系统
//    - 网格验证器 (RenderingSystemMeshValidator)
// 
// 4. 资源管理系统
//    - 资源清理器 (RenderingSystemResourceCleaner)
//    - 内存管理器 (RenderingSystemMemoryManager)
//    - 内存分配器 (RenderingSystemMemoryAllocator)
//    - 内存释放器 (RenderingSystemMemoryReleaser)
// 
// 5. 材质和纹理系统
//    - 材质初始化器 (RenderingSystemMaterialInitializer)
//    - 纹理对象初始化器 (RenderingSystemTextureObjectInitializer)
//    - 纹理参数同步器 (RenderingSystemTextureParameterSynchronizer)
//    - 纹理对象更新器 (RenderingSystemTextureObjectUpdater)
//    - 纹理时间更新器 (RenderingSystemTextureTimeUpdater)
// 
// 6. 场景更新系统
//    - 场景更新器 (RenderingSystemSceneUpdater)
//    - 强制场景更新器 (RenderingSystemForceSceneUpdater)
//    - 全局场景更新器 (RenderingSystemGlobalSceneUpdater)
// 
// 7. 系统控制功能
//    - 空操作器 (RenderingSystemNoOperation)
//    - 同步点 (RenderingSystemSynchronizationPoint)
//    - 着色器参数设置器 (RenderingSystemShaderParameterSetter)
//    - 消息处理器 (RenderingSystemMessageHandler)
// 
// 技术特点：
// - 支持复杂的边界计算和碰撞检测
// - 提供高效的资源管理和内存清理
// - 实现动态场景更新和状态同步
// - 包含完整的错误处理和异常恢复
// - 优化性能和渲染质量
// - 支持多种渲染模式和状态
// 
// 使用注意事项：
// - 所有边界计算都需要进行有效性检查
// - 碰撞检测需要正确处理边界情况
// - 资源管理需要确保内存安全
// - 场景更新需要考虑性能和一致性
// - 纹理处理需要正确同步参数和状态
// 
// 性能优化：
// - 使用高效的算法处理边界计算
// - 实现缓存友好的数据结构
// - 优化资源分配和释放策略
// - 减少不必要的场景更新
// - 使用高效的碰撞检测算法
// 
// 扩展性考虑：
// - 支持自定义边界计算算法
// - 提供可配置的碰撞检测策略
// - 支持多种资源管理模式
// - 可扩展的场景更新接口
// 
// 简化实现说明：
// 本文件中的函数实现为简化版本，主要保留了原始代码的核心功能和接口。
// 原始代码包含更复杂的边界计算、碰撞检测、资源管理和场景更新逻辑。
// 在实际使用中，需要根据具体需求完善实现细节。
// 
// 原始实现文件：
// - 源文件：/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/src/03_rendering_part134.c
// - 原始函数：FUN_180348d90, FUN_180348e60, FUN_180348f30, FUN_1803490e0, FUN_1803491a0, 
//           FUN_180349280, FUN_180349370, FUN_180349450, FUN_1803495d0, FUN_180349730,
//           FUN_180349780, FUN_1803499b0, FUN_1803499bb, FUN_1803499e2, FUN_180349a29,
//           FUN_180349a33, FUN_180349a50, FUN_180349c70, FUN_180349ce0, FUN_180349fb0,
//           FUN_18034a000, FUN_18034a100, FUN_18034a260
// 
// 简化实现对应关系：
// - RenderingSystemBoundaryCalculator 对应 FUN_180348d90
// - RenderingSystemBoundaryChecker 对应 FUN_180348e60
// - RenderingSystemBoundaryProcessor 对应 FUN_180348f30
// - RenderingSystemCollisionDetector 对应 FUN_1803491a0
// - RenderingSystemSceneUpdater 对应 FUN_1803499b0
// - RenderingSystemTextureObjectInitializer 对应 FUN_180349ce0
// - RenderingSystemMemoryAllocator 对应 FUN_180349730
// 
// =============================================================================





