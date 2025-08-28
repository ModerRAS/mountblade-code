#include "TaleWorlds.Native.Split.h"

/**
 * @file 03_rendering_part226.c
 * @brief 渲染系统高级纹理映射和几何变换模块
 * 
 * 本模块实现了高级渲染系统中的核心功能，包括：
 * - 纹理映射和坐标变换
 * - 几何变换和矩阵运算
 * - 高级渲染参数处理
 * - 渲染状态管理和优化
 * 
 * 主要功能特点：
 * - 支持多种纹理映射算法
 * - 高效的几何变换处理
 * - 智能的渲染状态管理
 * - 优化的性能和内存使用
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

// 常量定义
#define RENDERING_MAX_TEXTURE_LAYERS 16
#define RENDERING_MAX_GEOMETRY_TRANSFORMS 32
#define RENDERING_COORDINATE_PRECISION 1e-06f
#define RENDERING_DISTANCE_THRESHOLD 1.5f
#define RENDERING_MAX_FLOAT_VALUE 3.4028235e+38f

// 渲染系统状态枚举
typedef enum {
    RENDERING_STATE_IDLE = 0,
    RENDERING_STATE_ACTIVE = 1,
    RENDERING_STATE_PROCESSING = 2,
    RENDERING_STATE_COMPLETED = 3
} RenderingState;

// 纹理映射结构体
typedef struct {
    float texture_coords[2];      // 纹理坐标
    float normal_vector[3];       // 法线向量
    float tangent_vector[3];      // 切线向量
    float bitangent_vector[3];    // 副切线向量
    unsigned int texture_id;      // 纹理ID
    unsigned char flags;          // 纹理标志
} TextureMappingData;

// 几何变换结构体
typedef struct {
    float transform_matrix[16];   // 变换矩阵
    float position[3];            // 位置坐标
    float rotation[4];            // 旋转四元数
    float scale[3];               // 缩放因子
    unsigned int transform_id;    // 变换ID
} GeometryTransformData;

// 渲染参数结构体
typedef struct {
    float* position_data;         // 位置数据指针
    float* texture_data;          // 纹理数据指针
    longlong* geometry_data;      // 几何数据指针
    unsigned int data_size;       // 数据大小
    unsigned int flags;           // 参数标志
} RenderingParameters;

// 函数别名定义
typedef void (*RenderingEmptyFunction)(void);
typedef ulonglong (*TextureMappingFunction)(longlong param_1, float* param_2, longlong* param_3);
typedef longlong (*GeometryTransformFunction)(undefined8 param_1, undefined8 param_2, undefined8 param_3);
typedef longlong (*AdvancedRenderingFunction)(void);
typedef void (*AdvancedTextureMappingFunction)(longlong param_1, float* param_2, longlong param_3, ulonglong param_4, float* param_5, undefined8* param_6);
typedef void (*RenderingStateFunction)(undefined8 param_1, undefined8 param_2, longlong param_3);

// 具体函数别名
#define RenderingSystemEmptyOperation FUN_180395821
#define AdvancedTextureMappingProcessor FUN_180395830
#define GeometryTransformProcessor FUN_18039586d
#define AdvancedRenderingProcessor FUN_1803958d2
#define RenderingSystemStateManager FUN_180395967
#define AdvancedTextureSearchProcessor FUN_180395999
#define AdvancedCoordinateTransformProcessor FUN_1803959af
#define RenderingSystemCleaner FUN_180395c11
#define RecursiveTextureMappingProcessor FUN_180395c50
#define RenderingStateSynchronizer FUN_180395c8e
#define RenderingSystemTerminator FUN_180395e8a

// 全局变量声明
static RenderingState g_rendering_state = RENDERING_STATE_IDLE;
static TextureMappingData g_texture_mapping_cache[RENDERING_MAX_TEXTURE_LAYERS];
static GeometryTransformData g_geometry_transform_cache[RENDERING_MAX_GEOMETRY_TRANSFORMS];

/**
 * @brief 渲染系统空操作函数
 * 
 * 这是一个系统空操作函数，用于初始化和清理操作。
 * 在渲染系统中作为占位符使用，确保系统稳定性。
 * 
 * @return 无返回值
 * 
 * @note 此函数保持系统兼容性，不执行实际操作
 * @see RenderingEmptyFunction
 */
void FUN_180395821(void)
{
    return;
}



/**
 * @brief 渲染系统高级纹理映射处理器
 * 
 * 本函数实现高级纹理映射和坐标变换功能，包括：
 * - 纹理坐标计算和验证
 * - 距离计算和优化
 * - 纹理数据搜索和匹配
 * - 渲染参数处理和状态管理
 * - 多方向纹理搜索算法
 * - 最佳匹配结果选择
 * 
 * @param param_1 输入参数1，包含渲染系统状态信息
 * @param param_2 纹理坐标数据指针，包含X、Y、Z坐标信息
 * @param param_3 几何数据指针，包含网格和变换信息
 * @return ulonglong 返回处理后的纹理映射结果，0表示未找到匹配
 * 
 * @note 支持多种纹理映射算法和优化策略
 * @note 使用距离阈值1.5进行快速筛选
 * @note 支持8个方向的纹理搜索
 * @see TextureMappingFunction
 * @see FUN_18038d0a0
 * @see FUN_18038d2f0
 * @see FUN_18038d6a0
 */
ulonglong FUN_180395830(longlong param_1, float *param_2, longlong *param_3)
{
    // 局部变量声明
    byte bVar1;                    // 字节变量，用于纹理状态标志检查
    longlong lVar2;                // 长整型变量，用于中间计算结果存储
    char cVar3;                    // 字符变量，用于纹理坐标验证结果
    int iVar4;                     // 整型变量，用于主循环计数器
    int iVar5;                     // 整型变量，用于Y坐标计算和索引
    int iVar6;                     // 整型变量，用于X坐标计算和索引
    int iVar7;                     // 整型变量，用于边界检查和限制
    ulonglong *puVar8;             // 无符号长整型指针，用于纹理数据数组访问
    ulonglong uVar9;               // 无符号长整型，用于迭代控制和计数
    ulonglong uVar10;              // 无符号长整型，用于数据大小和边界计算
    ulonglong uVar11;              // 无符号长整型，用于数组索引和结果存储
    int iVar12;                    // 整型变量，用于第二重循环控制
    ulonglong uVar13;              // 无符号长整型，用于存储最佳匹配结果
    ulonglong uVar14;              // 无符号长整型，用于纹理标志位解析
    float fVar15;                  // 浮点变量，用于当前距离计算
    float fVar16;                  // 浮点变量，用于存储最小距离值
    float fVar17;                  // 浮点变量，用于最大浮点值比较
    ulonglong *puStackX_20;        // 栈变量指针，用于临时纹理数据存储
    int iStack_a4;                 // 栈变量，用于网格宽度边界检查
    longlong lStack_a0;            // 栈变量，用于搜索方向循环控制
  
    // 初始化变量
    uVar13 = 0;                    // 初始化最佳匹配结果为0，表示未找到匹配
    fVar17 = RENDERING_MAX_FLOAT_VALUE;  // 设置最大浮点值用于距离比较
    fVar16 = RENDERING_MAX_FLOAT_VALUE;  // 设置最小距离初始值为最大值
    
    // 检查数据有效性 - 验证纹理数据数组是否为空
    if (*(longlong *)(param_1 + 0x480) - *(longlong *)(param_1 + 0x478) >> 3 == 0) {
        return 0;  // 数据无效时返回0，表示无可用纹理数据
    }
    
    // 初始化纹理数据访问指针 - 获取纹理数据数组
    uVar9 = uVar13;
    puStackX_20 = (ulonglong *)func_0x000180388c90(param_3);  // 获取纹理数据指针
    uVar11 = uVar9 & 0xffffffff;  // 初始化数组索引
    puVar8 = (ulonglong *)*puStackX_20;  // 获取纹理数据数组起始地址
    
    // 计算数据大小 - 计算纹理数据数组的元素个数
    uVar10 = (ulonglong)((longlong)puStackX_20[1] + (7 - (longlong)puVar8)) >> 3;
    if ((ulonglong *)puStackX_20[1] < puVar8) {
        uVar10 = uVar9;  // 数据越界时设置为0，防止数组越界
    }
  // 第一阶段：遍历纹理数据寻找最佳匹配
  if (uVar10 != 0) {
    do {
      // 获取当前纹理数据项
      uVar9 = *puVar8;
      
      // 提取纹理状态标志
      bVar1 = *(byte *)(uVar9 + 0x139);  // 获取纹理标志字节
      uVar14 = (ulonglong)bVar1;          // 转换为无符号长整型
      
      // 检查纹理是否有效且符合条件
      // 条件1：纹理激活 (bVar1 & 1) != 0
      // 条件2：纹理未被锁定 (bVar1 & 2) == 0
      // 条件3：纹理坐标验证通过 FUN_18038d0a0
      // 条件4：首次匹配或优先纹理 (uVar13 == 0 || (uVar14 & 4) != 0)
      if (((((bVar1 & 1) != 0) && ((bVar1 & 2) == 0)) &&
          (cVar3 = FUN_18038d0a0(uVar9,param_2), cVar3 != '\0')) &&
         ((uVar13 == 0 || ((uVar14 & 4) != 0)))) {
        
        // 计算纹理距离
        fVar15 = (float)func_0x00018038d2f0(uVar9,param_2);  // 计算Z坐标距离
        fVar15 = ABS(param_2[2] - fVar15);  // 计算绝对距离
        
        // 检查距离是否在阈值内且更优
        if ((fVar15 < RENDERING_DISTANCE_THRESHOLD) && (fVar15 < fVar16)) {
          uVar13 = uVar9;  // 更新最佳匹配结果
          fVar16 = fVar15; // 更新最小距离
        }
      }
      
      // 移动到下一个纹理数据项
      puVar8 = puVar8 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar10);  // 继续遍历直到处理完所有数据
    
    // 如果找到匹配，直接返回结果
    if (uVar13 != 0) {
      return uVar13;
    }
    uVar9 = 0;  // 重置计数器
  }
  // 第二阶段：计算网格坐标索引
  uVar13 = 0;  // 重置匹配结果
  
  // 计算Y坐标网格索引 - 使用精度偏移量避免边界问题
  iVar6 = (int)(((*param_2 - *(float *)(param_3 + 1)) - RENDERING_COORDINATE_PRECISION) / *(float *)(param_3 + 3));
  iVar12 = (int)uVar9;
  iVar7 = iVar12;
  
  // 检查Y坐标边界，确保在有效范围内
  if ((-1 < iVar6) && (iVar7 = iVar6, (int)param_3[4] <= iVar6)) {
    iVar7 = (int)param_3[4] + -1;  // 限制为最大有效索引
  }
  
  // 计算X坐标网格索引 - 使用精度偏移量避免边界问题
  iVar6 = (int)(((param_2[1] - *(float *)((longlong)param_3 + 0xc)) - RENDERING_COORDINATE_PRECISION) /
               *(float *)((longlong)param_3 + 0x1c));
  
  // 检查X坐标边界，确保在有效范围内
  if ((-1 < iVar6) && (iVar12 = iVar6, *(int *)((longlong)param_3 + 0x24) <= iVar6)) {
    iVar12 = *(int *)((longlong)param_3 + 0x24) + -1;  // 限制为最大有效索引
  }
  // 第三阶段：多方向纹理搜索
  lVar2 = param_3[4];  // 获取网格高度
  iVar6 = -1;          // 初始化搜索方向索引
  iStack_a4 = (int)((ulonglong)lVar2 >> 0x20);  // 获取网格宽度
  lStack_a0 = 9;       // 设置搜索方向计数器（8个方向 + 默认）
  
  // 开始多方向搜索循环
  do {
    iVar4 = (int)lVar2;  // 获取当前网格高度
    
    // 根据搜索方向执行不同的搜索策略
    switch(iVar6) {
    // 方向0：向上搜索 (Y-1)
    case 0:
      iVar5 = iVar7;
joined_r0x000180395b3d:
      if (0 < iVar12) {
        iVar4 = iVar5 * *(int *)((longlong)param_3 + 0x24) + -1;
code_r0x000180395a7c:
        puStackX_20 = (ulonglong *)(*param_3 + (longlong)(iVar4 + iVar12) * 0x28 + 8);
        goto code_r0x000180395b5d;
      }
      break;
      
    // 方向1：向右搜索 (X+1)
    case 1:
      if (iVar12 + 1 < iStack_a4) {
        iVar4 = iVar7 * *(int *)((longlong)param_3 + 0x24) + 1;
        goto code_r0x000180395a7c;
      }
      break;
      
    // 方向2：向左搜索 (X-1)
    case 2:
      iVar5 = iVar7 + -1;
      if (0 < iVar7) {
code_r0x000180395ac1:
        puStackX_20 = (ulonglong *)
                      (*param_3 +
                       (longlong)(iVar5 * *(int *)((longlong)param_3 + 0x24) + iVar12) * 0x28 + 8);
        goto code_r0x000180395b5d;
      }
      break;
      
    // 方向3：向下搜索 (Y+1)
    case 3:
      iVar5 = iVar7 + 1;
      if (iVar5 < iVar4) goto code_r0x000180395ac1;
      break;
      
    // 方向4：左上搜索 (Y-1, X-1)
    case 4:
      iVar5 = iVar7 + -1;
      if (0 < iVar7) goto joined_r0x000180395b3d;
      break;
      
    // 方向5：右上搜索 (Y-1, X+1)
    case 5:
      iVar5 = iVar7 + -1;
      if (0 < iVar7) {
code_r0x000180395b15:
        if (iVar12 + 1 < iStack_a4) {
          iVar4 = iVar5 * *(int *)((longlong)param_3 + 0x24) + 1;
          goto code_r0x000180395a7c;
        }
      }
      break;
      
    // 方向6：左下搜索 (Y+1, X-1)
    case 6:
      iVar5 = iVar7 + 1;
      if (iVar5 < iVar4) goto joined_r0x000180395b3d;
      break;
      
    // 方向7：右下搜索 (Y+1, X+1)
    case 7:
      iVar5 = iVar7 + 1;
      if (iVar5 < iVar4) goto code_r0x000180395b15;
      break;
      
    // 默认情况：执行最终搜索和距离计算
    default:
code_r0x000180395b5d:
      puVar8 = (ulonglong *)*puStackX_20;
      uVar10 = (ulonglong)((longlong)puStackX_20[1] + (7 - (longlong)puVar8)) >> 3;
      if ((ulonglong *)puStackX_20[1] < puVar8) {
        uVar10 = uVar9;
      }
      if (uVar10 != 0) {
        do {
          uVar11 = *puVar8;
          if ((((*(byte *)(uVar11 + 0x139) & 1) != 0) && ((*(byte *)(uVar11 + 0x139) & 2) == 0)) &&
             (fVar16 = (float)FUN_18038d6a0(uVar11,param_2), fVar16 < fVar17)) {
            uVar13 = uVar11;
            fVar17 = fVar16;
          }
          puVar8 = puVar8 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar10);
      }
    }
    iVar6 = iVar6 + 1;
    lStack_a0 = lStack_a0 + -1;
    uVar9 = 0;
    if (lStack_a0 == 0) {
      return uVar13;
    }
  } while( true );
}



/**
 * @brief 渲染系统几何变换处理器
 * 
 * 本函数实现高级几何变换和纹理映射功能，包括：
 * - 几何坐标变换和矩阵运算
 * - 纹理映射优化和搜索
 * - 距离计算和最佳匹配选择
 * - 多方向几何数据处理
 * 
 * @param param_1 输入参数1，包含变换矩阵信息
 * @param param_2 输入参数2，包含几何状态信息
 * @param param_3 输入参数3，包含几何数据指针
 * @return longlong 返回处理后的几何变换结果
 * 
 * @note 支持复杂的几何变换算法
 * @note 使用优化的搜索策略提高性能
 * @see GeometryTransformFunction
 */
longlong FUN_18039586d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  float *unaff_RBP;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong in_R11;
  ulonglong uVar13;
  longlong *unaff_R14;
  longlong unaff_R15;
  float fVar14;
  float fVar15;
  float fVar16;
  int iStackX_24;
  longlong lStack0000000000000028;
  undefined8 in_stack_000000d8;
  longlong *in_stack_000000e0;
  ulonglong *puStack00000000000000e8;
  
  puStack00000000000000e8 = (ulonglong *)func_0x000180388c90(param_3);
  fVar16 = 3.4028235e+38;
  uVar10 = in_R11 & 0xffffffff;
  fVar15 = 3.4028235e+38;
  plVar8 = (longlong *)*puStack00000000000000e8;
  uVar9 = (ulonglong)((longlong)puStack00000000000000e8[1] + (7 - (longlong)plVar8)) >> 3;
  if ((longlong *)puStack00000000000000e8[1] < plVar8) {
    uVar9 = in_R11;
  }
  if (uVar9 != 0) {
    do {
      lVar11 = *plVar8;
      bVar1 = *(byte *)(lVar11 + 0x139);
      uVar13 = (ulonglong)bVar1;
      if (((((bVar1 & 1) != 0) && ((bVar1 & 2) == 0)) &&
          (cVar3 = FUN_18038d0a0(lVar11), cVar3 != '\0')) &&
         ((unaff_R15 == 0 || ((uVar13 & 4) != 0)))) {
        fVar14 = (float)func_0x00018038d2f0(lVar11);
        fVar14 = ABS(unaff_RBP[2] - fVar14);
        if ((fVar14 < 1.5) && (fVar14 < fVar15)) {
          unaff_R15 = lVar11;
          fVar15 = fVar14;
        }
      }
      plVar8 = plVar8 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
    if (unaff_R15 != 0) {
      return unaff_R15;
    }
    in_R11 = 0;
    unaff_R15 = 0;
  }
  iVar6 = (int)(((*unaff_RBP - *(float *)(unaff_R14 + 1)) - 1e-06) / *(float *)(unaff_R14 + 3));
  iVar12 = (int)in_R11;
  iVar7 = iVar12;
  if ((-1 < iVar6) && (iVar7 = iVar6, (int)unaff_R14[4] <= iVar6)) {
    iVar7 = (int)unaff_R14[4] + -1;
  }
  iVar6 = (int)(((unaff_RBP[1] - *(float *)((longlong)unaff_R14 + 0xc)) - 1e-06) /
               *(float *)((longlong)unaff_R14 + 0x1c));
  if ((-1 < iVar6) && (iVar12 = iVar6, *(int *)((longlong)unaff_R14 + 0x24) <= iVar6)) {
    iVar12 = *(int *)((longlong)unaff_R14 + 0x24) + -1;
  }
  lVar11 = unaff_R14[4];
  iVar6 = -1;
  iStackX_24 = (int)((ulonglong)lVar11 >> 0x20);
  lStack0000000000000028 = 9;
  do {
    iVar4 = (int)lVar11;
    switch(iVar6) {
    case 0:
      iVar5 = iVar7;
joined_r0x000180395b3d:
      if (0 < iVar12) {
        iVar4 = iVar5 * *(int *)((longlong)unaff_R14 + 0x24) + -1;
code_r0x000180395a7c:
        puStack00000000000000e8 = (ulonglong *)(*unaff_R14 + (longlong)(iVar4 + iVar12) * 0x28 + 8);
        goto code_r0x000180395b5d;
      }
      break;
    case 1:
      if (iVar12 + 1 < iStackX_24) {
        iVar4 = iVar7 * *(int *)((longlong)unaff_R14 + 0x24) + 1;
        goto code_r0x000180395a7c;
      }
      break;
    case 2:
      iVar5 = iVar7 + -1;
      if (0 < iVar7) {
code_r0x000180395ac1:
        puStack00000000000000e8 =
             (ulonglong *)
             (*unaff_R14 + (longlong)(iVar5 * *(int *)((longlong)unaff_R14 + 0x24) + iVar12) * 0x28
             + 8);
        goto code_r0x000180395b5d;
      }
      break;
    case 3:
      iVar5 = iVar7 + 1;
      if (iVar5 < iVar4) goto code_r0x000180395ac1;
      break;
    case 4:
      iVar5 = iVar7 + -1;
      if (0 < iVar7) goto joined_r0x000180395b3d;
      break;
    case 5:
      iVar5 = iVar7 + -1;
      if (0 < iVar7) {
code_r0x000180395b15:
        if (iVar12 + 1 < iStackX_24) {
          iVar4 = iVar5 * *(int *)((longlong)unaff_R14 + 0x24) + 1;
          goto code_r0x000180395a7c;
        }
      }
      break;
    case 6:
      iVar5 = iVar7 + 1;
      if (iVar5 < iVar4) goto joined_r0x000180395b3d;
      break;
    case 7:
      iVar5 = iVar7 + 1;
      if (iVar5 < iVar4) goto code_r0x000180395b15;
      break;
    default:
code_r0x000180395b5d:
      plVar8 = (longlong *)*puStack00000000000000e8;
      uVar9 = (ulonglong)((longlong)puStack00000000000000e8[1] + (7 - (longlong)plVar8)) >> 3;
      if ((longlong *)puStack00000000000000e8[1] < plVar8) {
        uVar9 = in_R11;
      }
      unaff_R14 = in_stack_000000e0;
      if (uVar9 != 0) {
        do {
          lVar2 = *plVar8;
          if ((((*(byte *)(lVar2 + 0x139) & 1) != 0) && ((*(byte *)(lVar2 + 0x139) & 2) == 0)) &&
             (fVar15 = (float)FUN_18038d6a0(lVar2,in_stack_000000d8), fVar15 < fVar16)) {
            unaff_R15 = lVar2;
            fVar16 = fVar15;
          }
          plVar8 = plVar8 + 1;
          in_R11 = in_R11 + 1;
        } while (in_R11 != uVar9);
      }
    }
    iVar6 = iVar6 + 1;
    lStack0000000000000028 = lStack0000000000000028 + -1;
    in_R11 = 0;
    if (lStack0000000000000028 == 0) {
      return unaff_R15;
    }
  } while( true );
}



/**
 * @brief 渲染系统高级几何变换处理器
 * 
 * 本函数实现高级几何变换和纹理映射功能，包括：
 * - 复杂几何变换计算
 * - 纹理映射优化
 * - 距离计算和匹配
 * - 循环缓冲区处理
 * 
 * @return longlong 返回处理后的几何变换结果
 * 
 * @note 使用寄存器优化的高效算法
 * @note 支持多种几何变换模式
 * @see AdvancedRenderingFunction
 */
longlong FUN_1803958d2(void)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *unaff_RBX;
  float *unaff_RBP;
  ulonglong uVar8;
  longlong unaff_RSI;
  longlong *plVar9;
  longlong unaff_RDI;
  longlong lVar10;
  int iVar11;
  longlong *unaff_R14;
  ulonglong uVar12;
  longlong unaff_R15;
  float fVar13;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  int iStackX_24;
  longlong lStack0000000000000028;
  undefined8 in_stack_000000d8;
  longlong *in_stack_000000e0;
  ulonglong *in_stack_000000e8;
  
  do {
    lVar10 = *unaff_RBX;
    bVar1 = *(byte *)(lVar10 + 0x139);
    uVar8 = (ulonglong)bVar1;
    if (((((bVar1 & 1) != 0) && ((bVar1 & 2) == 0)) &&
        (cVar3 = FUN_18038d0a0(lVar10), cVar3 != '\0')) && ((unaff_R15 == 0 || ((uVar8 & 4) != 0))))
    {
      fVar13 = (float)func_0x00018038d2f0(lVar10);
      fVar13 = ABS(unaff_RBP[2] - fVar13);
      if ((fVar13 < 1.5) && (fVar13 < unaff_XMM6_Da)) {
        unaff_R15 = lVar10;
        unaff_XMM6_Da = fVar13;
      }
    }
    unaff_RBX = unaff_RBX + 1;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI != unaff_RSI);
  if (unaff_R15 == 0) {
    iVar6 = (int)(((*unaff_RBP - *(float *)(unaff_R14 + 1)) - 1e-06) / *(float *)(unaff_R14 + 3));
    iVar11 = 0;
    iVar7 = iVar11;
    if ((-1 < iVar6) && (iVar7 = iVar6, (int)unaff_R14[4] <= iVar6)) {
      iVar7 = (int)unaff_R14[4] + -1;
    }
    iVar6 = (int)(((unaff_RBP[1] - *(float *)((longlong)unaff_R14 + 0xc)) - 1e-06) /
                 *(float *)((longlong)unaff_R14 + 0x1c));
    if ((-1 < iVar6) && (iVar11 = iVar6, *(int *)((longlong)unaff_R14 + 0x24) <= iVar6)) {
      iVar11 = *(int *)((longlong)unaff_R14 + 0x24) + -1;
    }
    lVar10 = unaff_R14[4];
    iVar6 = -1;
    iStackX_24 = (int)((ulonglong)lVar10 >> 0x20);
    lStack0000000000000028 = 9;
    do {
      uVar8 = 0;
      iVar4 = (int)lVar10;
      switch(iVar6) {
      case 0:
        iVar5 = iVar7;
joined_r0x000180395b3d:
        if (0 < iVar11) {
          iVar4 = iVar5 * *(int *)((longlong)unaff_R14 + 0x24) + -1;
code_r0x000180395a7c:
          in_stack_000000e8 = (ulonglong *)(*unaff_R14 + (longlong)(iVar4 + iVar11) * 0x28 + 8);
          goto code_r0x000180395b5d;
        }
        break;
      case 1:
        if (iVar11 + 1 < iStackX_24) {
          iVar4 = iVar7 * *(int *)((longlong)unaff_R14 + 0x24) + 1;
          goto code_r0x000180395a7c;
        }
        break;
      case 2:
        iVar5 = iVar7 + -1;
        if (0 < iVar7) {
code_r0x000180395ac1:
          in_stack_000000e8 =
               (ulonglong *)
               (*unaff_R14 +
                (longlong)(iVar5 * *(int *)((longlong)unaff_R14 + 0x24) + iVar11) * 0x28 + 8);
          goto code_r0x000180395b5d;
        }
        break;
      case 3:
        iVar5 = iVar7 + 1;
        if (iVar5 < iVar4) goto code_r0x000180395ac1;
        break;
      case 4:
        iVar5 = iVar7 + -1;
        if (0 < iVar7) goto joined_r0x000180395b3d;
        break;
      case 5:
        iVar5 = iVar7 + -1;
        if (0 < iVar7) {
code_r0x000180395b15:
          if (iVar11 + 1 < iStackX_24) {
            iVar4 = iVar5 * *(int *)((longlong)unaff_R14 + 0x24) + 1;
            goto code_r0x000180395a7c;
          }
        }
        break;
      case 6:
        iVar5 = iVar7 + 1;
        if (iVar5 < iVar4) goto joined_r0x000180395b3d;
        break;
      case 7:
        iVar5 = iVar7 + 1;
        if (iVar5 < iVar4) goto code_r0x000180395b15;
        break;
      default:
code_r0x000180395b5d:
        plVar9 = (longlong *)*in_stack_000000e8;
        uVar12 = (ulonglong)((longlong)in_stack_000000e8[1] + (7 - (longlong)plVar9)) >> 3;
        if ((longlong *)in_stack_000000e8[1] < plVar9) {
          uVar12 = uVar8;
        }
        unaff_R14 = in_stack_000000e0;
        if (uVar12 != 0) {
          do {
            lVar2 = *plVar9;
            if ((((*(byte *)(lVar2 + 0x139) & 1) != 0) && ((*(byte *)(lVar2 + 0x139) & 2) == 0)) &&
               (fVar13 = (float)FUN_18038d6a0(lVar2,in_stack_000000d8), fVar13 < unaff_XMM7_Da)) {
              unaff_R15 = lVar2;
              unaff_XMM7_Da = fVar13;
            }
            plVar9 = plVar9 + 1;
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar12);
        }
      }
      iVar6 = iVar6 + 1;
      lStack0000000000000028 = lStack0000000000000028 + -1;
    } while (lStack0000000000000028 != 0);
  }
  return unaff_R15;
}





/**
 * @brief 渲染系统空操作函数
 * 
 * 这是一个系统空操作函数，用于初始化和清理操作。
 * 在渲染系统中作为占位符使用，确保系统稳定性。
 * 
 * @return 无返回值
 * 
 * @note 此函数保持系统兼容性，不执行实际操作
 * @see RenderingEmptyFunction
 */
void FUN_180395967(void)

{
  return;
}



/**
 * @brief 渲染系统高级纹理搜索处理器
 * 
 * 本函数实现高级纹理搜索和匹配功能，包括：
 * - 多方向纹理搜索
 * - 距离计算和优化
 * - 最佳匹配结果选择
 * - 坐标变换和映射
 * 
 * @return longlong 返回处理后的纹理搜索结果
 * 
 * @note 使用优化的搜索算法
 * @note 支持8个方向的纹理搜索
 * @note 使用栈变量提高性能
 * @see AdvancedRenderingFunction
 */
longlong FUN_180395999(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float *unaff_RBP;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  longlong *unaff_R14;
  ulonglong uVar8;
  longlong unaff_R15;
  float fVar9;
  float unaff_XMM7_Da;
  int iStackX_24;
  longlong lStack0000000000000028;
  longlong lStack0000000000000030;
  int iStack00000000000000d0;
  undefined8 in_stack_000000d8;
  longlong *in_stack_000000e0;
  ulonglong *in_stack_000000e8;
  
  iVar3 = (int)(((*unaff_RBP - *(float *)(unaff_R14 + 1)) - 1e-06) / *(float *)(unaff_R14 + 3));
  iVar7 = 0;
  iStack00000000000000d0 = iVar7;
  if ((-1 < iVar3) && (iStack00000000000000d0 = iVar3, (int)unaff_R14[4] <= iVar3)) {
    iStack00000000000000d0 = (int)unaff_R14[4] + -1;
  }
  iVar3 = (int)(((unaff_RBP[1] - *(float *)((longlong)unaff_R14 + 0xc)) - 1e-06) /
               *(float *)((longlong)unaff_R14 + 0x1c));
  if ((-1 < iVar3) && (iVar7 = iVar3, *(int *)((longlong)unaff_R14 + 0x24) <= iVar3)) {
    iVar7 = *(int *)((longlong)unaff_R14 + 0x24) + -1;
  }
  lVar4 = unaff_R14[4];
  iVar3 = -1;
  iStackX_24 = (int)((ulonglong)lVar4 >> 0x20);
  lStack0000000000000028 = 9;
  lStack0000000000000030 = lVar4;
  do {
    uVar5 = 0;
    iVar1 = (int)lVar4;
    switch(iVar3) {
    case 0:
      iVar2 = iStack00000000000000d0;
joined_r0x000180395b3d:
      if (0 < iVar7) {
        iVar1 = iVar2 * *(int *)((longlong)unaff_R14 + 0x24) + -1;
code_r0x000180395a7c:
        in_stack_000000e8 = (ulonglong *)(*unaff_R14 + (longlong)(iVar1 + iVar7) * 0x28 + 8);
        goto code_r0x000180395b5d;
      }
      break;
    case 1:
      if (iVar7 + 1 < iStackX_24) {
        iVar1 = iStack00000000000000d0 * *(int *)((longlong)unaff_R14 + 0x24) + 1;
        goto code_r0x000180395a7c;
      }
      break;
    case 2:
      iVar2 = iStack00000000000000d0 + -1;
      if (0 < iStack00000000000000d0) {
code_r0x000180395ac1:
        in_stack_000000e8 =
             (ulonglong *)
             (*unaff_R14 + (longlong)(iVar2 * *(int *)((longlong)unaff_R14 + 0x24) + iVar7) * 0x28 +
             8);
        goto code_r0x000180395b5d;
      }
      break;
    case 3:
      iVar2 = iStack00000000000000d0 + 1;
      if (iVar2 < iVar1) goto code_r0x000180395ac1;
      break;
    case 4:
      iVar2 = iStack00000000000000d0 + -1;
      if (0 < iStack00000000000000d0) goto joined_r0x000180395b3d;
      break;
    case 5:
      iVar2 = iStack00000000000000d0 + -1;
      if (0 < iStack00000000000000d0) {
code_r0x000180395b15:
        if (iVar7 + 1 < iStackX_24) {
          iVar1 = iVar2 * *(int *)((longlong)unaff_R14 + 0x24) + 1;
          goto code_r0x000180395a7c;
        }
      }
      break;
    case 6:
      iVar2 = iStack00000000000000d0 + 1;
      if (iVar2 < iVar1) goto joined_r0x000180395b3d;
      break;
    case 7:
      iVar2 = iStack00000000000000d0 + 1;
      if (iVar2 < iVar1) goto code_r0x000180395b15;
      break;
    default:
code_r0x000180395b5d:
      plVar6 = (longlong *)*in_stack_000000e8;
      uVar8 = (ulonglong)((longlong)in_stack_000000e8[1] + (7 - (longlong)plVar6)) >> 3;
      if ((longlong *)in_stack_000000e8[1] < plVar6) {
        uVar8 = uVar5;
      }
      unaff_R14 = in_stack_000000e0;
      if (uVar8 != 0) {
        do {
          lVar4 = *plVar6;
          if ((((*(byte *)(lVar4 + 0x139) & 1) != 0) && ((*(byte *)(lVar4 + 0x139) & 2) == 0)) &&
             (fVar9 = (float)FUN_18038d6a0(lVar4,in_stack_000000d8), fVar9 < unaff_XMM7_Da)) {
            unaff_R15 = lVar4;
            unaff_XMM7_Da = fVar9;
          }
          plVar6 = plVar6 + 1;
          uVar5 = uVar5 + 1;
          lVar4 = lStack0000000000000030;
        } while (uVar5 != uVar8);
      }
    }
    iVar3 = iVar3 + 1;
    lStack0000000000000028 = lStack0000000000000028 + -1;
    if (lStack0000000000000028 == 0) {
      return unaff_R15;
    }
  } while( true );
}



/**
 * @brief 渲染系统高级坐标变换处理器
 * 
 * 本函数实现高级坐标变换和纹理映射功能，包括：
 * - 坐标变换和计算
 * - 纹理映射优化
 * - 距离计算和匹配
 * - 浮点数精度处理
 * 
 * @param param_1 输入参数1，包含X坐标信息
 * @param param_2 输入参数2，包含偏移量信息
 * @return longlong 返回处理后的坐标变换结果
 * 
 * @note 使用高精度浮点数计算
 * @note 支持多种坐标变换模式
 * @see AdvancedRenderingFunction
 */
longlong FUN_1803959af(float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong unaff_RBP;
  longlong *plVar5;
  int iVar6;
  ulonglong in_R11;
  longlong *unaff_R14;
  ulonglong uVar7;
  longlong unaff_R15;
  float fVar8;
  float unaff_XMM7_Da;
  int iStackX_24;
  longlong lStack0000000000000028;
  longlong lStack0000000000000030;
  int iStack00000000000000d0;
  undefined8 in_stack_000000d8;
  longlong *in_stack_000000e0;
  ulonglong *in_stack_000000e8;
  
  iVar3 = (int)((param_1 - param_2) / *(float *)(unaff_R14 + 3));
  iVar6 = (int)in_R11;
  iStack00000000000000d0 = iVar6;
  if ((-1 < iVar3) && (iStack00000000000000d0 = iVar3, (int)unaff_R14[4] <= iVar3)) {
    iStack00000000000000d0 = (int)unaff_R14[4] + -1;
  }
  iVar3 = (int)(((*(float *)(unaff_RBP + 4) - *(float *)((longlong)unaff_R14 + 0xc)) - param_2) /
               *(float *)((longlong)unaff_R14 + 0x1c));
  if ((-1 < iVar3) && (iVar6 = iVar3, *(int *)((longlong)unaff_R14 + 0x24) <= iVar3)) {
    iVar6 = *(int *)((longlong)unaff_R14 + 0x24) + -1;
  }
  lVar4 = unaff_R14[4];
  iVar3 = -1;
  iStackX_24 = (int)((ulonglong)lVar4 >> 0x20);
  lStack0000000000000028 = 9;
  lStack0000000000000030 = lVar4;
  do {
    iVar1 = (int)lVar4;
    switch(iVar3) {
    case 0:
      iVar2 = iStack00000000000000d0;
joined_r0x000180395b3d:
      if (0 < iVar6) {
        iVar1 = iVar2 * *(int *)((longlong)unaff_R14 + 0x24) + -1;
code_r0x000180395a7c:
        in_stack_000000e8 = (ulonglong *)(*unaff_R14 + (longlong)(iVar1 + iVar6) * 0x28 + 8);
        goto code_r0x000180395b5d;
      }
      break;
    case 1:
      if (iVar6 + 1 < iStackX_24) {
        iVar1 = iStack00000000000000d0 * *(int *)((longlong)unaff_R14 + 0x24) + 1;
        goto code_r0x000180395a7c;
      }
      break;
    case 2:
      iVar2 = iStack00000000000000d0 + -1;
      if (0 < iStack00000000000000d0) {
code_r0x000180395ac1:
        in_stack_000000e8 =
             (ulonglong *)
             (*unaff_R14 + (longlong)(iVar2 * *(int *)((longlong)unaff_R14 + 0x24) + iVar6) * 0x28 +
             8);
        goto code_r0x000180395b5d;
      }
      break;
    case 3:
      iVar2 = iStack00000000000000d0 + 1;
      if (iVar2 < iVar1) goto code_r0x000180395ac1;
      break;
    case 4:
      iVar2 = iStack00000000000000d0 + -1;
      if (0 < iStack00000000000000d0) goto joined_r0x000180395b3d;
      break;
    case 5:
      iVar2 = iStack00000000000000d0 + -1;
      if (0 < iStack00000000000000d0) {
code_r0x000180395b15:
        if (iVar6 + 1 < iStackX_24) {
          iVar1 = iVar2 * *(int *)((longlong)unaff_R14 + 0x24) + 1;
          goto code_r0x000180395a7c;
        }
      }
      break;
    case 6:
      iVar2 = iStack00000000000000d0 + 1;
      if (iVar2 < iVar1) goto joined_r0x000180395b3d;
      break;
    case 7:
      iVar2 = iStack00000000000000d0 + 1;
      if (iVar2 < iVar1) goto code_r0x000180395b15;
      break;
    default:
code_r0x000180395b5d:
      plVar5 = (longlong *)*in_stack_000000e8;
      uVar7 = (ulonglong)((longlong)in_stack_000000e8[1] + (7 - (longlong)plVar5)) >> 3;
      if ((longlong *)in_stack_000000e8[1] < plVar5) {
        uVar7 = in_R11;
      }
      unaff_R14 = in_stack_000000e0;
      if (uVar7 != 0) {
        do {
          lVar4 = *plVar5;
          if ((((*(byte *)(lVar4 + 0x139) & 1) != 0) && ((*(byte *)(lVar4 + 0x139) & 2) == 0)) &&
             (fVar8 = (float)FUN_18038d6a0(lVar4,in_stack_000000d8), fVar8 < unaff_XMM7_Da)) {
            unaff_R15 = lVar4;
            unaff_XMM7_Da = fVar8;
          }
          plVar5 = plVar5 + 1;
          in_R11 = in_R11 + 1;
          lVar4 = lStack0000000000000030;
        } while (in_R11 != uVar7);
      }
    }
    iVar3 = iVar3 + 1;
    lStack0000000000000028 = lStack0000000000000028 + -1;
    in_R11 = 0;
    if (lStack0000000000000028 == 0) {
      return unaff_R15;
    }
  } while( true );
}





/**
 * @brief 渲染系统空操作函数
 * 
 * 这是一个系统空操作函数，用于初始化和清理操作。
 * 在渲染系统中作为占位符使用，确保系统稳定性。
 * 
 * @return 无返回值
 * 
 * @note 此函数保持系统兼容性，不执行实际操作
 * @see RenderingEmptyFunction
 */
void FUN_180395c11(void)

{
  return;
}





/**
 * @brief 渲染系统高级纹理映射递归处理器
 * 
 * 本函数实现高级纹理映射的递归处理功能，包括：
 * - 递归纹理搜索和匹配
 * - 线段投影和距离计算
 * - 最佳匹配点选择
 * - 向量运算和归一化
 * 
 * @param param_1 输入参数1，包含渲染状态信息
 * @param param_2 纹理坐标数据指针，包含目标坐标
 * @param param_3 几何数据指针，包含网格信息
 * @param param_4 纹理层索引，用于多层纹理处理
 * @param param_5 最小距离值指针，用于优化搜索
 * @param param_6 最佳匹配结果指针，用于存储找到的匹配
 * 
 * @return 无返回值
 * 
 * @note 使用递归算法进行深度搜索
 * @note 使用快速平方根倒数函数优化性能
 * @note 支持线段到点的投影计算
 * @see AdvancedTextureMappingFunction
 * @see rsqrtss
 */
void FUN_180395c50(longlong param_1,float *param_2,longlong param_3,ulonglong param_4,float *param_5
                  ,undefined8 *param_6)

{
  float fVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStackX_8;
  float fStackX_c;
  
  lVar10 = (longlong)(int)param_4;
  iVar8 = 0;
  *(undefined4 *)(param_3 + 0x40 + lVar10 * 4) = *(undefined4 *)(param_1 + 0x558 + lVar10 * 4);
  if (*(char *)(param_3 + 0xa8) != '\0') {
    puVar7 = (undefined8 *)(param_3 + 0x60);
    uVar9 = param_4;
    do {
      puVar2 = (undefined8 *)*puVar7;
      if (*(char *)(puVar2 + 4) == '\x01') {
        pfVar3 = (float *)puVar2[1];
        pfVar4 = (float *)*puVar2;
        fVar11 = *pfVar4;
        fVar1 = pfVar4[1];
        fVar14 = *pfVar3 - fVar11;
        fVar15 = pfVar3[1] - fVar1;
        fVar17 = fVar15 * fVar15 + fVar14 * fVar14;
        auVar12 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
        fVar13 = auVar12._0_4_;
        fVar16 = fVar13 * 0.5 * (3.0 - fVar17 * fVar13 * fVar13);
        fVar13 = (param_2[1] - fVar1) * fVar15 * fVar16 + (*param_2 - fVar11) * fVar14 * fVar16;
        if (0.0 <= fVar13) {
          if (fVar13 <= fVar16 * fVar17) {
            uVar5 = CONCAT44(fVar15 * fVar16 * fVar13 + fVar1,fVar14 * fVar16 * fVar13 + fVar11);
          }
          else {
            uVar5 = *(undefined8 *)pfVar3;
          }
        }
        else {
          uVar5 = *(undefined8 *)pfVar4;
        }
        fStackX_8 = (float)uVar5;
        fStackX_8 = *param_2 - fStackX_8;
        fStackX_c = (float)((ulonglong)uVar5 >> 0x20);
        fStackX_c = param_2[1] - fStackX_c;
        fVar11 = fStackX_8 * fStackX_8 + fStackX_c * fStackX_c;
        if (fVar11 < *param_5) {
          *param_5 = fVar11;
          *param_6 = puVar2;
        }
      }
      else {
        lVar6 = 0x10;
        if (puVar2[2] == param_3) {
          lVar6 = 0x18;
        }
        lVar6 = *(longlong *)(lVar6 + (longlong)puVar2);
        if (((*(byte *)(lVar6 + 0x139) & 1) != 0) &&
           (*(int *)(lVar6 + 0x40 + lVar10 * 4) != *(int *)(param_1 + 0x558 + lVar10 * 4))) {
          FUN_180395c50(param_1,param_2,lVar6,uVar9,param_5,param_6);
          uVar9 = param_4 & 0xffffffff;
        }
      }
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar8 < (int)(uint)*(byte *)(param_3 + 0xa8));
  }
  return;
}





/**
 * @brief 渲染系统状态同步处理器
 * 
 * 本函数实现渲染系统状态同步和纹理映射功能，包括：
 * - 系统状态管理和同步
 * - 纹理映射和坐标变换
 * - 寄存器状态保存和恢复
 * - 递归调用处理
 * 
 * @param param_1 输入参数1，包含系统状态信息
 * @param param_2 输入参数2，包含变换参数
 * @param param_3 输入参数3，包含几何数据指针
 * 
 * @return 无返回值
 * 
 * @note 使用大量寄存器变量提高性能
 * @note 支持复杂的系统状态管理
 * @note 使用栈空间保存临时数据
 * @see RenderingStateFunction
 */
void FUN_180395c8e(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 unaff_RBX;
  undefined8 *puVar8;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  int unaff_EDI;
  longlong in_R11;
  undefined8 unaff_R12;
  float *unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined8 *puStack0000000000000028;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float *in_stack_000000e0;
  undefined8 *in_stack_000000e8;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_RBX;
  uVar7 = (ulonglong)(unaff_EDI + 0x18);
  *(undefined8 *)(in_R11 + -0x30) = unaff_RSI;
  puVar8 = (undefined8 *)(param_3 + 0x60);
  *(undefined8 *)(in_R11 + -0x38) = unaff_R12;
  *(undefined4 *)(in_R11 + -0x68) = unaff_XMM8_Da;
  *(undefined4 *)(in_R11 + -100) = unaff_XMM8_Db;
  *(undefined4 *)(in_R11 + -0x60) = unaff_XMM8_Dc;
  *(undefined4 *)(in_R11 + -0x5c) = unaff_XMM8_Dd;
  *(undefined4 *)(in_R11 + -0x78) = unaff_XMM9_Da;
  *(undefined4 *)(in_R11 + -0x74) = unaff_XMM9_Db;
  *(undefined4 *)(in_R11 + -0x70) = unaff_XMM9_Dc;
  *(undefined4 *)(in_R11 + -0x6c) = unaff_XMM9_Dd;
  do {
    puVar2 = (undefined8 *)*puVar8;
    if (*(char *)(puVar2 + 4) == '\x01') {
      pfVar3 = (float *)puVar2[1];
      pfVar4 = (float *)*puVar2;
      fVar9 = *pfVar4;
      fVar1 = pfVar4[1];
      fVar12 = *pfVar3 - fVar9;
      fVar13 = pfVar3[1] - fVar1;
      fVar15 = fVar13 * fVar13 + fVar12 * fVar12;
      auVar10 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
      fVar11 = auVar10._0_4_;
      fVar14 = fVar11 * 0.5 * (3.0 - fVar15 * fVar11 * fVar11);
      fVar11 = (unaff_R13[1] - fVar1) * fVar13 * fVar14 + (*unaff_R13 - fVar9) * fVar12 * fVar14;
      if (0.0 <= fVar11) {
        if (fVar11 <= fVar14 * fVar15) {
          uVar5 = CONCAT44(fVar13 * fVar14 * fVar11 + fVar1,fVar12 * fVar14 * fVar11 + fVar9);
        }
        else {
          uVar5 = *(undefined8 *)pfVar3;
        }
      }
      else {
        uVar5 = *(undefined8 *)pfVar4;
      }
      uVar7 = 0x18;
      fStack00000000000000c0 = (float)uVar5;
      fStack00000000000000c0 = *unaff_R13 - fStack00000000000000c0;
      fStack00000000000000c4 = (float)((ulonglong)uVar5 >> 0x20);
      fStack00000000000000c4 = unaff_R13[1] - fStack00000000000000c4;
      fVar9 = fStack00000000000000c0 * fStack00000000000000c0 +
              fStack00000000000000c4 * fStack00000000000000c4;
      if (fVar9 < *in_stack_000000e0) {
        *in_stack_000000e0 = fVar9;
        *in_stack_000000e8 = puVar2;
      }
    }
    else {
      uVar6 = 0x10;
      if (puVar2[2] == unaff_RBP) {
        uVar6 = uVar7;
      }
      if (((*(byte *)(*(longlong *)(uVar6 + (longlong)puVar2) + 0x139) & 1) != 0) &&
         (*(int *)(*(longlong *)(uVar6 + (longlong)puVar2) + 0x40 + unaff_R14 * 4) !=
          *(int *)(unaff_R15 + 0x558 + unaff_R14 * 4))) {
        puStack0000000000000028 = in_stack_000000e8;
        FUN_180395c50();
        uVar7 = 0x18;
      }
    }
    unaff_EDI = unaff_EDI + 1;
    puVar8 = puVar8 + 1;
  } while (unaff_EDI < (int)(uint)*(byte *)(unaff_RBP + 0xa8));
  return;
}





/**
 * @brief 渲染系统空操作函数
 * 
 * 这是一个系统空操作函数，用于初始化和清理操作。
 * 在渲染系统中作为占位符使用，确保系统稳定性。
 * 
 * @return 无返回值
 * 
 * @note 此函数保持系统兼容性，不执行实际操作
 * @see RenderingEmptyFunction
 */
void FUN_180395e8a(void)

{
  return;
}





