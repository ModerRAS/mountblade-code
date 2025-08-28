
// $fun 的语义化别名
#define $alias_name $fun

/*
 * FUN_函数语义化别名定义
 * 自动生成的别名定义，用于提高代码可读性
 */



// ============================================================================
// 99_part_13_part044_sub002_sub002.c - 高级渲染系统和数据管理模块
// 
// 模块功能：
// - 渲染系统初始化和配置管理
// - 高级数据结构操作和内存管理
// - 复杂的链表和树形结构处理
// - 多级数据检索和过滤系统
// - 动态资源分配和释放
//
// 主要函数：
// - FUN_1808c1e30: 渲染系统初始化函数
// - FUN_1808c1eb0: 高级数据搜索和验证处理器
// - FUN_1808c2060: 数据移除和清理管理器
// - FUN_1808c2150: 条件数据匹配处理器
// - FUN_1808c22e0: 数据类型处理器
// - FUN_1808c2461: 状态检查函数
// - FUN_1808c2490: 资源清理函数
// - FUN_1808c24f0: 多级资源管理器
// - FUN_1808c26e0: 综合数据处理引擎
// - FUN_1808c2e00: 内存管理和释放器
// - FUN_1808c2ec0: 对象创建和初始化器
// - FUN_1808c2fb0: 对象链接管理器
// - FUN_1808c3020: 链表遍历处理器
// - FUN_1808c30e0: 节点移除处理器
// - FUN_1808c3220: 高级对象创建器
// - FUN_1808c3266: 对象创建处理器
// - FUN_1808c366a: 资源清理处理器
// - FUN_1808c3700: 对象销毁管理器
// - FUN_1808c37a0: 批量数据处理引擎
// - FUN_1808c37b9: 数据处理器
//
// 技术说明：
// 本模块实现了游戏引擎中的高级渲染系统和数据管理功能，
// 包含复杂的内存管理、链表操作、数据验证和资源处理等功能。
// 适用于高性能游戏开发场景。
// ============================================================================

// 常量定义
#define INVALID_INDEX              (-1)          // 无效索引值
#define NULL_POINTER              ((void*)0)     // 空指针
#define SUCCESS_CODE              0              // 成功返回码
#define FAILURE_CODE              1              // 失败返回码
#define MEMORY_ERROR_CODE         0x1C           // 内存错误码
#define PARAMETER_ERROR_CODE      0x1F           // 参数错误码
#define ALLOCATION_ERROR_CODE     0x26           // 分配错误码

// 内存分配常量
#define ALLOCATION_SIZE_SMALL     0x18           // 小块内存大小
#define ALLOCATION_SIZE_MEDIUM    0x80           // 中块内存大小
#define ALLOCATION_SIZE_LARGE    0x100          // 大块内存大小

// 数据结构大小常量
#define NODE_SIZE_16              0x10           // 16字节节点
#define NODE_SIZE_20              0x20           // 20字节节点
#define NODE_SIZE_24              0x18           // 24字节节点

// 类型别名定义
typedef long long               int64;          // 64位有符号整数
typedef unsigned long long      uint64;         // 64位无符号整数
typedef unsigned int            uint32;         // 32位无符号整数
typedef int                     int32;          // 32位有符号整数
typedef unsigned short          uint16;         // 16位无符号整数
typedef unsigned char           uint8;          // 8位无符号整数
typedef char                    int8;           // 8位有符号整数
typedef float                   float32;        // 32位浮点数
typedef double                  float64;        // 64位浮点数

// 结构体类型别名
typedef int64*                  IntPtr;         // 整数指针
typedef void*                   VoidPtr;        // 空指针
typedef uint64*                 UIntPtr;        // 无符号整数指针
typedef int32*                  Int32Ptr;       // 32位整数指针
typedef float32*                FloatPtr;       // 浮点数指针

// 函数指针类型定义
typedef uint64 (*DataProcessor)(void* data, uint64 param);
typedef int32 (*ValidatorFunc)(void* data, void* context);
typedef void (*CleanupFunc)(void* resource);

// ============================================================================
// 函数：FUN_1808c1e30 - 渲染系统初始化函数
// 
// 功能说明：
// 初始化渲染系统的核心组件，处理状态标志和链表操作。
// 检查系统状态，执行必要的初始化步骤，确保渲染系统正常运行。
//
// 参数：
//   param_1 - 系统上下文指针，包含渲染系统的配置信息
//   param_2 - 渲染状态指针，包含当前渲染状态和链表头信息
//
// 返回值：
//   void - 无返回值
//
// 技术说明：
// 该函数是渲染系统初始化的核心组件，负责：
// 1. 检查系统状态标志
// 2. 执行系统初始化验证
// 3. 处理链表节点的链接操作
// 4. 调用后续的处理函数
// ============================================================================
void FUN_1808c1e30(int64 param_1, int64 param_2)
{
  IntPtr plVar1;           // 链表指针
  int32 iVar2;             // 状态变量
  
  // 检查系统状态标志是否为未初始化状态
  if (*(int32 *)(param_2 + 0x30) == INVALID_INDEX) {
    // 执行系统初始化验证
    iVar2 = FUN_180867810(*(uint64 *)(param_1 + 0x7c0));
    if (iVar2 != SUCCESS_CODE) {
      return;  // 初始化失败，直接返回
    }
    
    // 执行链表节点链接操作
    plVar1 = (IntPtr)(param_2 + 8);
    **(uint64 **)(param_2 + 0x10) = *(uint64 *)(param_2 + 8);
    *(uint64 *)(*plVar1 + 8) = *(uint64 *)(param_2 + 0x10);
    *(IntPtr *)(param_2 + 0x10) = plVar1;
    *plVar1 = (int64)plVar1;
  }
  
  // 调用系统处理函数
  iVar2 = FUN_1808c1c80(param_1 + 0xa0, param_2);
  if (iVar2 == SUCCESS_CODE) {
    FUN_1808be9f0(param_1 + 0x430, param_2);
  }
  
  return;
}

// ============================================================================
// 函数：FUN_1808c1eb0 - 高级数据搜索和验证处理器
// 
// 功能说明：
// 执行高级数据搜索操作，验证数据完整性，处理复杂的数据结构遍历。
// 支持多级数据检索和条件过滤。
//
// 参数：
//   param_1 - 数据上下文指针，包含数据结构和配置信息
//
// 返回值：
//   uint64 - 处理结果状态码，0表示成功，非0表示错误
//
// 技术说明：
// 该函数实现了复杂的数据搜索和验证功能：
// 1. 遍历多级数据结构
// 2. 执行条件验证
// 3. 处理链表和树形结构
// 4. 支持递归搜索操作
// ============================================================================
uint64 FUN_1808c1eb0(int64 param_1)
{
  IntPtr plVar1;            // 数据指针
  uint64 uVar2;            // 返回值
  int64 lVar3;             // 长整型变量
  int64 lVar4;             // 长整型变量
  int32 iVar5;             // 整型变量
  int32 iVar6;             // 整型变量
  int32 iVar7;             // 整型变量
  int32 iVar8;             // 整型变量
  bool bVar9;              // 布尔变量
  uint64 uStack_40;        // 栈变量
  int32 aiStack_38[4];     // 栈数组
  
  // 初始化搜索参数
  uStack_40 = 0xffffffffffffffff;
  aiStack_38[0] = INVALID_INDEX;
  SystemResource_Manager((IntPtr)(param_1 + 0x108), &uStack_40, aiStack_38);
  
  if (aiStack_38[0] != INVALID_INDEX) {
    iVar8 = aiStack_38[0];
    iVar6 = (int32)uStack_40;
    
    // 主搜索循环
    do {
      do {
        // 重置搜索参数
        uStack_40 = 0xffffffffffffffff;
        aiStack_38[0] = INVALID_INDEX;
        plVar1 = *(IntPtr **)((int64)iVar8 * NODE_SIZE_20 + 0x18 + *(int64 *)(param_1 + 0x118));
        NetworkSystem_ConnectionHandler(plVar1, &uStack_40, aiStack_38);
        
        if (aiStack_38[0] != INVALID_INDEX) {
          iVar7 = aiStack_38[0];
          iVar5 = (int32)uStack_40;
          
          // 子搜索循环
          do {
            do {
              // 执行数据验证
              uVar2 = FUN_180853ba0(*(uint64 *)(plVar1[2] + 8 + (int64)iVar7 * NODE_SIZE_16), 0);
              if ((int32)uVar2 != SUCCESS_CODE) {
                return uVar2;  // 验证失败，返回错误码
              }
            } while ((iVar7 != INVALID_INDEX) &&
                    (iVar7 = *(int32 *)(plVar1[2] + 4 + (int64)iVar7 * NODE_SIZE_16), iVar7 != INVALID_INDEX));
            
            // 更新搜索索引
            iVar7 = iVar5 + 1;
            bVar9 = iVar5 != INVALID_INDEX;
            iVar5 = 0;
            if (bVar9) {
              iVar5 = iVar7;
            }
            
            // 继续搜索有效节点
            if (iVar5 != (int32)plVar1[1]) {
              lVar3 = (int64)iVar5;
              do {
                if (*(int32 *)(*plVar1 + lVar3 * 4) != INVALID_INDEX) {
                  iVar7 = *(int32 *)(*plVar1 + (int64)iVar5 * 4);
                  goto LAB_1808c1fcb;
                }
                iVar5 = iVar5 + 1;
                lVar3 = lVar3 + 1;
              } while (lVar3 != (int32)plVar1[1]);
            }
            iVar7 = INVALID_INDEX;
            iVar5 = iVar7;
LAB_1808c1fcb:
          } while (iVar7 != INVALID_INDEX);
        }
      } while ((iVar8 != INVALID_INDEX) &&
              (iVar8 = *(int32 *)((int64)iVar8 * NODE_SIZE_20 + 0x10 + *(int64 *)(param_1 + 0x118)),
              iVar8 != INVALID_INDEX));
      
      // 更新主搜索索引
      iVar8 = iVar6 + 1;
      bVar9 = iVar6 != INVALID_INDEX;
      iVar6 = 0;
      if (bVar9) {
        iVar6 = iVar8;
      }
      
      // 继续主搜索
      if (iVar6 != *(int32 *)(param_1 + 0x110)) {
        lVar3 = *(int64 *)(param_1 + 0x108);
        lVar4 = (int64)iVar6;
        do {
          if (*(int32 *)(lVar3 + lVar4 * 4) != INVALID_INDEX) {
            iVar8 = *(int32 *)(lVar3 + (int64)iVar6 * 4);
            goto LAB_1808c201d;
          }
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
        } while (lVar4 != *(int32 *)(param_1 + 0x110));
      }
      iVar8 = INVALID_INDEX;
      iVar6 = iVar8;
LAB_1808c201d:
    } while (iVar8 != INVALID_INDEX);
  }
  
  return SUCCESS_CODE;
}

// ============================================================================
// 函数：FUN_1808c2060 - 数据移除和清理管理器
// 
// 功能说明：
// 根据条件移除数据，执行内存清理操作，支持多种移除模式。
// 处理数据链表的维护和内存释放。
//
// 参数：
//   param_1 - 数据管理器指针，包含数据表和状态信息
//   param_2 - 数据标识符指针，用于识别要移除的数据
//   param_3 - 移除模式标志，控制移除行为
//
// 返回值：
//   uint64 - 操作结果状态码，0表示成功，非0表示错误
//
// 技术说明：
// 该函数实现了灵活的数据移除功能：
// 1. 支持条件移除模式
// 2. 处理哈希表查找
// 3. 执行链表维护操作
// 4. 管理内存释放
// ============================================================================
uint64 FUN_1808c2060(int64 param_1, uint32 *param_2, int8 param_3)
{
  int64 lVar1;             // 长整型变量
  int32 iVar2;             // 整型变量
  uint64 uVar3;            // 返回值
  int64 lVar4;             // 长整型变量
  Int32Ptr piVar5;         // 整型指针
  uint8 auStackX_18[16];   // 栈数组
  
  // 检查移除模式
  if (param_3 == 0) {
    // 检查数据表是否可用
    if (*(int32 *)(param_1 + 0x28c) != 0) {
      if (*(int32 *)(param_1 + 0x270) == 0) {
        return PARAMETER_ERROR_CODE;  // 参数错误
      }
      
      // 计算哈希值
      lVar1 = *(int64 *)(param_1 + 0x268);
      lVar4 = (int64)
              (int32)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                   *(int32 *)(param_1 + 0x270) - 1U);
      piVar5 = (Int32Ptr)(lVar1 + lVar4 * 4);
      iVar2 = *(int32 *)(lVar1 + lVar4 * 4);
      
      if (iVar2 != INVALID_INDEX) {
        lVar1 = *(int64 *)(param_1 + 0x278);
        
        // 遍历哈希链表
        do {
          lVar4 = (int64)iVar2;
          // 检查数据匹配
          if ((*(int64 *)(lVar1 + lVar4 * 0x18) == *(int64 *)param_2) &&
             (*(int64 *)(lVar1 + 8 + lVar4 * 0x18) == *(int64 *)(param_2 + 2))) {
            // 执行移除操作
            iVar2 = *piVar5;
            lVar4 = (int64)iVar2;
            *(uint8 *)(lVar1 + 0x14 + lVar4 * 0x18) = 0;
            *piVar5 = *(int32 *)(lVar1 + 0x10 + lVar4 * 0x18);
            *(uint32 *)(lVar1 + 0x10 + lVar4 * 0x18) = *(uint32 *)(param_1 + 0x288);
            *(int32 *)(param_1 + 0x28c) = *(int32 *)(param_1 + 0x28c) + -1;
            *(int32 *)(param_1 + 0x288) = iVar2;
            return SUCCESS_CODE;
          }
          iVar2 = *(int32 *)(lVar1 + 0x10 + lVar4 * 0x18);
          piVar5 = (Int32Ptr)(lVar1 + 0x10 + lVar4 * 0x18);
        } while (iVar2 != INVALID_INDEX);
      }
    }
  }
  else {
    // 替代移除模式
    auStackX_18[0] = 1;
    uVar3 = SystemStateProcessor((IntPtr)(param_1 + 0x268), param_2, auStackX_18);
    if ((int32)uVar3 != SUCCESS_CODE) {
      return uVar3;
    }
  }
  
  return SUCCESS_CODE;
}

// ============================================================================
// 函数：FUN_1808c2150 - 条件数据匹配处理器
// 
// 功能说明：
// 根据指定条件匹配数据，执行数据验证和筛选操作。
// 支持多种匹配模式和排序策略。
//
// 参数：
//   param_1 - 数据管理器指针，包含数据集合和配置信息
//   param_2 - 匹配条件指针，包含要匹配的数据特征
//   param_3 - 匹配计数器指针，用于返回匹配结果数量
//
// 返回值：
//   bool - 匹配结果状态，true表示匹配成功，false表示失败
//
// 技术说明：
// 该函数实现了复杂的数据匹配功能：
// 1. 支持多种匹配模式
// 2. 执行数据排序
// 3. 条件验证和筛选
// 4. 结果计数和统计
// ============================================================================
bool FUN_1808c2150(int64 param_1, int64 param_2, int32 *param_3)
{
  IntPtr plVar1;            // 数据指针
  int32 iVar2;             // 整型变量
  int32 iVar3;             // 整型变量
  int64 lVar4;             // 长整型变量
  uint64 uVar5;            // 无符号长整型变量
  uint32 uVar6;            // 无符号整型变量
  int32 iVar8;             // 整型变量
  uint64 uVar9;            // 无符号长整型变量
  code *pcVar10;           // 代码指针
  int32 iVar11;            // 整型变量
  float32 extraout_XMM0_Da; // 浮点数输出
  float32 fVar12;          // 浮点数变量
  float32 extraout_XMM0_Da_00; // 浮点数输出
  uint64 uVar7;            // 无符号长整型变量
  
  // 参数验证
  if (param_3 == (int32 *)NULL_POINTER) {
    return false;
  }
  
  // 初始化匹配参数
  uVar9 = 0;
  iVar8 = 0;
  *param_3 = 0;
  
  // 检查系统状态
  if (*(int32 *)(*(int64 *)(param_1 + 0x50) + 0xe8) == 1) {
    return true;
  }
  
  plVar1 = (IntPtr)(param_1 + 0x28);
  iVar3 = FUN_1808bd910(plVar1);
  iVar11 = *(int32 *)(*(int64 *)(param_1 + 0x50) + 0xd8);
  
  if (iVar3 < iVar11) {
    return true;
  }
  
  iVar2 = *(int32 *)(*(int64 *)(param_1 + 0x50) + 0xe8);
  if (iVar2 == 0) {
    return false;
  }
  
  iVar11 = (iVar3 - iVar11) + 1;
  
  // 根据模式选择排序策略
  if (iVar2 == 2) {
    func_0x0001808bd8a0(plVar1);
    pcVar10 = (code *)&processed_var_6080_ptr;
  }
  else if (iVar2 == 3) {
    func_0x0001808bd8a0(plVar1);
    pcVar10 = (code *)&processed_var_5984_ptr;
  }
  else {
    if (iVar2 != 4) goto LAB_1808c2219;
    func_0x0001808bd8a0(plVar1);
    pcVar10 = FUN_1808632b0;
  }
  
  // 执行排序操作
  qsort(*plVar1, (int64)*(int32 *)(param_1 + 0x30), 8, pcVar10);
LAB_1808c2219:
  
  iVar3 = *(int32 *)(*(int64 *)(param_1 + 0x50) + 0xe8);
  uVar5 = uVar9;
  uVar7 = uVar9;
  
  if (iVar3 == 2) {
    // 模式2的匹配逻辑
    for (; ((-1 < (int64)uVar5 && ((int32)uVar7 < *(int32 *)(param_1 + 0x34))) &&
           (*(int64 *)(*plVar1 + uVar5 * 8) == 0)); uVar5 = uVar5 + 1) {
      uVar7 = (uint64)((int32)uVar7 + 1);
    }
    
    iVar8 = 0;
    if (0 < iVar11) {
      while( true ) {
        iVar8 = (int32)uVar9;
        iVar3 = (int32)uVar7;
        if (((iVar3 < 0) || (*(int32 *)(param_1 + 0x34) <= iVar3)) ||
           (*(int64 *)(*plVar1 + (int64)iVar3 * 8) == 0)) break;
        
        lVar4 = *(int64 *)(*plVar1 + (int64)iVar3 * 8);
        uVar5 = (uint64)(iVar8 + 1);
        if (3 < *(int32 *)(lVar4 + 0x2e4) - 1U) {
          uVar5 = uVar9;
        }
        uVar9 = uVar5;
        
        // 检查数据匹配
        if (*(int64 *)(lVar4 + 0x2b8) == *(int64 *)(param_2 + 0x2b8)) {
          *param_3 = *param_3 + 1;
        }
        
        uVar6 = iVar3 + 1;
        for (lVar4 = (int64)(int32)uVar6;
            ((uVar7 = (uint64)uVar6, -1 < lVar4 && ((int32)uVar6 < *(int32 *)(param_1 + 0x34))) &&
            (*(int64 *)(*plVar1 + lVar4 * 8) == 0)); lVar4 = lVar4 + 1) {
          uVar6 = uVar6 + 1;
        }
        
        if (iVar11 <= (int32)uVar9) {
          return iVar11 <= (int32)uVar9;
        }
      }
    }
  }
  else if (iVar3 == 3) {
    // 模式3的匹配逻辑
    func_0x00018085fd60(param_2);
    for (; ((-1 < (int64)uVar5 && ((int32)uVar7 < *(int32 *)(param_1 + 0x34))) &&
           (*(int64 *)(*plVar1 + uVar5 * 8) == 0)); uVar5 = uVar5 + 1) {
      uVar7 = (uint64)((int32)uVar7 + 1);
    }
    
    if (0 < iVar11) {
      do {
        iVar8 = (int32)uVar9;
        iVar3 = (int32)uVar7;
        if (((iVar3 < 0) || (*(int32 *)(param_1 + 0x34) <= iVar3)) ||
           (*(int64 *)(*plVar1 + (int64)iVar3 * 8) == 0)) break;
        
        lVar4 = *(int64 *)(*plVar1 + (int64)iVar3 * 8);
        if ((*(int32 *)(lVar4 + 0x2e4) - 1U < 4) &&
           (fVar12 = (float32)func_0x00018085fd60(lVar4), fVar12 <= extraout_XMM0_Da)) {
          uVar9 = (uint64)(iVar8 + 1);
        }
        
        iVar8 = (int32)uVar9;
        if (*(int64 *)(lVar4 + 0x2b8) == *(int64 *)(param_2 + 0x2b8)) {
          *param_3 = *param_3 + 1;
        }
        
        uVar6 = iVar3 + 1;
        for (lVar4 = (int64)(int32)uVar6;
            ((uVar7 = (uint64)uVar6, -1 < lVar4 && ((int32)uVar6 < *(int32 *)(param_1 + 0x34))) &&
            (*(int64 *)(*plVar1 + lVar4 * 8) == 0)); lVar4 = lVar4 + 1) {
          uVar6 = uVar6 + 1;
        }
      } while (iVar8 < iVar11);
    }
  }
  else if (iVar3 == 4) {
    // 模式4的匹配逻辑
    FUN_18085f080(param_2);
    for (; ((-1 < (int64)uVar5 && ((int32)uVar7 < *(int32 *)(param_1 + 0x34))) &&
           (*(int64 *)(*plVar1 + uVar5 * 8) == 0)); uVar5 = uVar5 + 1) {
      uVar7 = (uint64)((int32)uVar7 + 1);
    }
    
    if (0 < iVar11) {
      do {
        iVar8 = (int32)uVar9;
        iVar3 = (int32)uVar7;
        if (((iVar3 < 0) || (*(int32 *)(param_1 + 0x34) <= iVar3)) ||
           (*(int64 *)(*plVar1 + (int64)iVar3 * 8) == 0)) break;
        
        lVar4 = *(int64 *)(*plVar1 + (int64)iVar3 * 8);
        if ((*(int32 *)(lVar4 + 0x2e4) - 1U < 4) &&
           (fVar12 = (float32)FUN_18085f080(lVar4), extraout_XMM0_Da_00 <= fVar12)) {
          uVar9 = (uint64)(iVar8 + 1);
        }
        
        iVar8 = (int32)uVar9;
        if (*(int64 *)(lVar4 + 0x2b8) == *(int64 *)(param_2 + 0x2b8)) {
          *param_3 = *param_3 + 1;
        }
        
        uVar6 = iVar3 + 1;
        for (lVar4 = (int64)(int32)uVar6;
            ((uVar7 = (uint64)uVar6, -1 < lVar4 && ((int32)uVar6 < *(int32 *)(param_1 + 0x34))) &&
            (*(int64 *)(*plVar1 + lVar4 * 8) == 0)); lVar4 = lVar4 + 1) {
          uVar6 = uVar6 + 1;
        }
      } while (iVar8 < iVar11);
    }
  }
  
  return iVar11 <= iVar8;
}

// ============================================================================
// 函数：FUN_1808c22e0 - 数据类型处理器
// 
// 功能说明：
// 根据数据类型执行相应的处理操作，支持多种数据类型的特殊处理。
// 包含浮点数比较和数据处理逻辑。
//
// 参数：
//   param_1 - 数据类型标识符，指定要处理的数据类型
//
// 返回值：
//   bool - 处理结果状态，true表示处理成功，false表示失败
//
// 技术说明：
// 该函数实现了数据类型相关的处理功能：
// 1. 支持类型3和类型4的特殊处理
// 2. 执行浮点数比较操作
// 3. 处理数据匹配和计数
// 4. 管理状态和结果返回
// ============================================================================
bool FUN_1808c22e0(int32 param_1)
{
  int32 iVar1;             // 整型变量
  uint64 uVar2;            // 无符号长整型变量
  int64 lVar3;             // 长整型变量
  IntPtr unaff_RBX;        // 未使用的寄存器变量
  uint64 unaff_RBP;        // 未使用的寄存器变量
  uint32 uVar4;            // 无符号整型变量
  uint64 uVar5;            // 无符号长整型变量
  int64 unaff_R13;         // 未使用的寄存器变量
  Int32Ptr unaff_R14;      // 未使用的寄存器变量
  int32 unaff_R15D;        // 未使用的寄存器变量
  float32 fVar6;           // 浮点数变量
  float32 fVar7;           // 浮点数变量
  
  // 根据数据类型执行相应的处理
  if (param_1 == 3) {
    // 类型3处理逻辑
    fVar6 = (float32)func_0x00018085fd60();
    uVar5 = unaff_RBP & 0xffffffff;
    
    for (uVar2 = unaff_RBP;
        ((-1 < (int64)uVar2 && ((int32)uVar5 < *(int32 *)((int64)unaff_RBX + 0xc))) &&
        (*(uint64 *)(*unaff_RBX + uVar2 * 8) == unaff_RBP)); uVar2 = uVar2 + 1) {
      uVar5 = (uint64)((int32)uVar5 + 1);
    }
    
    if (0 < unaff_R15D) {
      do {
        iVar1 = (int32)uVar5;
        if (((iVar1 < 0) || (*(int32 *)((int64)unaff_RBX + 0xc) <= iVar1)) ||
           (*(int64 *)(*unaff_RBX + (int64)iVar1 * 8) == 0)) break;
        
        lVar3 = *(int64 *)(*unaff_RBX + (int64)iVar1 * 8);
        if ((*(int32 *)(lVar3 + 0x2e4) - 1U < 4) &&
           (fVar7 = (float32)func_0x00018085fd60(lVar3), fVar7 <= fVar6)) {
          unaff_RBP = (uint64)((int32)unaff_RBP + 1);
        }
        
        if (*(int64 *)(lVar3 + 0x2b8) == *(int64 *)(unaff_R13 + 0x2b8)) {
          *unaff_R14 = *unaff_R14 + 1;
        }
        
        uVar4 = iVar1 + 1;
        for (lVar3 = (int64)(int32)uVar4;
            ((uVar5 = (uint64)uVar4, -1 < lVar3 &&
             ((int32)uVar4 < *(int32 *)((int64)unaff_RBX + 0xc))) &&
            (*(int64 *)(*unaff_RBX + lVar3 * 8) == 0)); lVar3 = lVar3 + 1) {
          uVar4 = uVar4 + 1;
        }
      } while ((int32)unaff_RBP < unaff_R15D);
    }
  }
  else if (param_1 == 4) {
    // 类型4处理逻辑
    fVar6 = (float32)FUN_18085f080();
    uVar5 = unaff_RBP & 0xffffffff;
    
    for (uVar2 = unaff_RBP;
        ((-1 < (int64)uVar2 && ((int32)uVar5 < *(int32 *)((int64)unaff_RBX + 0xc))) &&
        (*(uint64 *)(*unaff_RBX + uVar2 * 8) == unaff_RBP)); uVar2 = uVar2 + 1) {
      uVar5 = (uint64)((int32)uVar5 + 1);
    }
    
    if (0 < unaff_R15D) {
      do {
        iVar1 = (int32)uVar5;
        if (((iVar1 < 0) || (*(int32 *)((int64)unaff_RBX + 0xc) <= iVar1)) ||
           (*(int64 *)(*unaff_RBX + (int64)iVar1 * 8) == 0)) break;
        
        lVar3 = *(int64 *)(*unaff_RBX + (int64)iVar1 * 8);
        if ((*(int32 *)(lVar3 + 0x2e4) - 1U < 4) &&
           (fVar7 = (float32)FUN_18085f080(lVar3), fVar6 <= fVar7)) {
          unaff_RBP = (uint64)((int32)unaff_RBP + 1);
        }
        
        if (*(int64 *)(lVar3 + 0x2b8) == *(int64 *)(unaff_R13 + 0x2b8)) {
          *unaff_R14 = *unaff_R14 + 1;
        }
        
        uVar4 = iVar1 + 1;
        for (lVar3 = (int64)(int32)uVar4;
            ((uVar5 = (uint64)uVar4, -1 < lVar3 &&
             ((int32)uVar4 < *(int32 *)((int64)unaff_RBX + 0xc))) &&
            (*(int64 *)(*unaff_RBX + lVar3 * 8) == 0)); lVar3 = lVar3 + 1) {
          uVar4 = uVar4 + 1;
        }
      } while ((int32)unaff_RBP < unaff_R15D);
    }
  }
  
  return unaff_R15D <= (int32)unaff_RBP;
}

// ============================================================================
// 函数：FUN_1808c2461 - 状态检查函数
// 
// 功能说明：
// 执行状态检查操作，验证系统状态是否满足特定条件。
// 这是一个简化的状态检查函数。
//
// 参数：
//   无参数
//
// 返回值：
//   bool - 状态检查结果，true表示状态正常，false表示状态异常
//
// 技术说明：
// 该函数是一个简化的状态检查函数，主要用于：
// 1. 验证系统状态
// 2. 检查条件满足情况
// 3. 返回状态结果
// ============================================================================
bool FUN_1808c2461(void)
{
  int32 unaff_EBP;         // 未使用的寄存器变量
  int32 unaff_R15D;        // 未使用的寄存器变量
  
  // 执行状态检查并返回结果
  return unaff_R15D <= unaff_EBP;
}

// ============================================================================
// 函数：FUN_1808c2490 - 资源清理函数
// 
// 功能说明：
// 执行资源清理操作，释放内存和系统资源。
// 包含多级资源管理和清理逻辑。
//
// 参数：
//   param_1 - 资源管理器指针，包含要清理的资源信息
//
// 返回值：
//   int32 - 清理结果状态码，0表示成功，非0表示错误
//
// 技术说明：
// 该函数实现了资源清理功能：
// 1. 执行内存资源释放
// 2. 处理多级资源清理
// 3. 管理清理顺序
// 4. 返回清理状态
// ============================================================================
int32 FUN_1808c2490(int64 param_1)
{
  int64 lVar1;             // 长整型变量
  int32 iVar2;             // 整型变量
  
  // 获取并清理主要资源
  lVar1 = *(int64 *)(param_1 + 0x28);
  if (lVar1 != 0) {
    SystemMemoryAllocator(lVar1);
  }
  
  // 执行第一级清理
  iVar2 = FUN_18088a1f0(param_1 + 0x30);
  if (iVar2 == SUCCESS_CODE) {
    iVar2 = FUN_18088a1f0(param_1);
  }
  
  // 清理后处理
  if (lVar1 != 0) {
    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  
  return iVar2;
}

// ============================================================================
// 函数：FUN_1808c24f0 - 多级资源管理器
// 
// 功能说明：
// 执行多级资源管理操作，处理复杂的资源分配和释放逻辑。
// 支持多种资源类型的统一管理。
//
// 参数：
//   param_1 - 资源管理器指针，包含多级资源信息
//
// 返回值：
//   uint64 - 管理结果状态码，0表示成功，非0表示错误
//
// 技术说明：
// 该函数实现了多级资源管理功能：
// 1. 处理多个资源级别的管理
// 2. 执行资源分配和释放
// 3. 管理资源状态
// 4. 支持错误处理和恢复
// ============================================================================
uint64 FUN_1808c24f0(int64 param_1)
{
  int64 lVar1;             // 长整型变量
  uint32 uVar2;            // 无符号整型变量
  uint64 uVar3;            // 返回值
  
  // 处理第一级资源
  lVar1 = *(int64 *)(param_1 + 0x60);
  if (lVar1 != 0) {
    SystemMemoryAllocator(lVar1);
  }
  
  uVar2 = FUN_18088a1f0(param_1 + 0x68);
  if ((uVar2 == SUCCESS_CODE) && (uVar2 = FUN_18088a1f0(param_1 + 0x38), uVar2 == SUCCESS_CODE)) {
    if (lVar1 != 0) {
      // WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
  }
  else {
    if (lVar1 != 0) {
      // WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
    if (uVar2 != SUCCESS_CODE) {
      return (uint64)uVar2;
    }
  }
  
  // 处理第二级资源
  lVar1 = *(int64 *)(param_1 + 200);
  if (lVar1 != 0) {
    SystemMemoryAllocator(lVar1);
  }
  
  uVar2 = FUN_18088a1f0(param_1 + 0xd0);
  if ((uVar2 == SUCCESS_CODE) && (uVar2 = FUN_18088a1f0(param_1 + 0xa0), uVar2 == SUCCESS_CODE)) {
    if (lVar1 != 0) {
      // WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
  }
  else {
    if (lVar1 != 0) {
      // WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
    if (uVar2 != SUCCESS_CODE) {
      return (uint64)uVar2;
    }
  }
  
  // 处理第三级资源
  lVar1 = *(int64 *)(param_1 + 0x130);
  if (lVar1 != 0) {
    SystemMemoryAllocator(lVar1);
  }
  
  uVar2 = FUN_18088a1f0(param_1 + 0x138);
  if ((uVar2 == SUCCESS_CODE) && (uVar2 = FUN_18088a1f0(param_1 + 0x108), uVar2 == SUCCESS_CODE)) {
    if (lVar1 != 0) {
      // WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
  }
  else {
    if (lVar1 != 0) {
      // WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
    if (uVar2 != SUCCESS_CODE) {
      return (uint64)uVar2;
    }
  }
  
  // 处理第四级资源
  lVar1 = *(int64 *)(param_1 + 0x200);
  if (lVar1 != 0) {
    SystemMemoryAllocator(lVar1);
  }
  
  uVar2 = FUN_18088a1f0(param_1 + 0x208);
  if ((uVar2 == SUCCESS_CODE) && (uVar2 = FUN_18088a1f0(param_1 + 0x1d8), uVar2 == SUCCESS_CODE)) {
    if (lVar1 != 0) {
      // WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
  }
  else {
    if (lVar1 != 0) {
      // WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
    if (uVar2 != SUCCESS_CODE) {
      return (uint64)uVar2;
    }
  }
  
  // 处理最后一级资源
  uVar3 = FUN_1808c2490(param_1 + 0x170);
  if ((int32)uVar3 != SUCCESS_CODE) {
    return uVar3;
  }
  
  // 检查状态标志
  if (*(int32 *)(param_1 + 0x264) == 0) {
    uVar3 = SystemStatusChecker(param_1 + 0x240);
    if ((int32)uVar3 != SUCCESS_CODE) {
      return uVar3;
    }
    
    uVar3 = SystemCore_FileSystem0(param_1 + 0x250);
    if ((int32)uVar3 != SUCCESS_CODE) {
      return uVar3;
    }
    
    // 设置状态标志
    *(uint32 *)(param_1 + 0x260) = 0xffffffff;
    *(uint32 *)(param_1 + 0x264) = 0;
  }
  
  uVar3 = FUN_1808c2490(param_1 + 0x170);
  return uVar3;
}

// ============================================================================
// 函数：FUN_1808c26e0 - 综合数据处理引擎
// 
// 功能说明：
// 执行综合的数据处理操作，包含复杂的数据结构管理、状态控制和错误处理。
// 这是模块中最复杂的函数之一，集成了多种数据处理功能。
//
// 参数：
//   param_1 - 数据引擎指针，包含数据处理的核心配置和状态
//   param_2 - 数据上下文指针，包含数据处理的上下文信息
//   param_3 - 处理模式标志，控制数据处理的行为模式
//   param_4 - 附加参数指针，提供额外的处理参数
//
// 返回值：
//   uint64 - 处理结果状态码，0表示成功，非0表示错误
//
// 技术说明：
// 该函数实现了综合的数据处理功能：
// 1. 多级数据处理和验证
// 2. 复杂的状态管理
// 3. 错误处理和恢复
// 4. 资源管理和清理
// 5. 条件处理和分支控制
// ============================================================================
uint64 FUN_1808c26e0(int64 param_1, int64 param_2, int8 param_3, int64 param_4)
{
  uint8 uVar1;             // 无符号字符变量
  uint64 uVar2;            // 无符号长整型变量
  uint64 uVar3;            // 返回值
  uint64 uVar4;            // 无符号长整型变量
  int8 *pcVar5;            // 字符指针
  int32 iVar6;             // 整型变量
  IntPtr plVar7;           // 整数指针
  IntPtr plVar8;           // 整数指针
  int64 lVar9;             // 长整型变量
  IntPtr plVar10;          // 整数指针
  int64 lVar11;            // 长整型变量
  uint32 uVar12;           // 无符号整型变量
  int32 iVar13;            // 整型变量
  IntPtr plVar14;          // 整数指针
  IntPtr plVar15;          // 整数指针
  int32 iVar16;            // 整型变量
  int32 iVar17;            // 整型变量
  bool bVar18;             // 布尔变量
  float32 fVar19;          // 浮点数变量
  uint32 auStackX_18[2];   // 栈数组
  int64 lStackX_20;        // 栈变量
  int32 iStack_a4;         // 栈变量
  IntPtr plStack_a0;       // 栈指针
  uint64 uStack_98;        // 栈变量
  IntPtr plStack_90;       // 栈指针
  uint64 uStack_88;        // 栈变量
  int32 aiStack_80[2];     // 栈数组
  IntPtr plStack_78;       // 栈指针
  uint64 uStack_70;        // 栈变量
  int32 aiStack_68[10];    // 栈数组
  
  // 保存原始状态标志
  uVar1 = *(uint8 *)(param_1 + 0x780);
  *(uint8 *)(param_1 + 0x780) = 1;
  lStackX_20 = param_4;
  
  // 检查处理模式并执行预处理
  if ((param_3 == 0) && (uVar3 = FUN_1808bc920(), (int32)uVar3 != SUCCESS_CODE)) {
LAB_1808c2c1e:
    // 恢复原始状态并返回错误
    *(uint8 *)(param_1 + 0x780) = uVar1;
    return uVar3;
  }
  
  // 初始化数据处理参数
  lVar11 = *(int64 *)(param_1 + 0x4c8);
  lVar9 = *(int64 *)(param_1 + 0x4d0);
  plVar15 = (IntPtr)NULL_POINTER;
  *(int64 *)(param_1 + 0x4d0) = lVar11;
  iStack_a4 = 0;
  
  // 执行数据初始化
  uVar3 = FUN_18073a840(*(uint64 *)(param_1 + 0x4c0), &iStack_a4, 0, 0);
  if ((int32)uVar3 != SUCCESS_CODE) goto LAB_1808c2c1e;
  
  // 计算处理参数
  fVar19 = (float32)(lVar11 - lVar9) / (float32)iStack_a4;
  
  // 执行系统初始化
  uVar3 = FUN_1808e1ef0(*(uint64 *)(param_1 + 0x790), 0);
  if (((int32)uVar3 != SUCCESS_CODE) ||
     (uVar3 = func_0x0001808e0b20(*(uint64 *)(param_1 + 0x788)), (int32)uVar3 != SUCCESS_CODE))
  goto LAB_1808c2c1e;
  
  // 初始化链表处理
  plVar10 = (IntPtr)(*(int64 *)(param_1 + 0x18) + -8);
  if (*(int64 *)(param_1 + 0x18) == 0) {
    plVar10 = plVar15;
  }
  
  plVar7 = plVar15;
  if (plVar10 != (IntPtr)NULL_POINTER) {
    plVar7 = plVar10 + 1;
  }
  
  // 遍历链表节点
  while (plVar7 != (IntPtr)(param_1 + 0x18)) {
    plVar10 = plVar7 + -1;
    if (plVar7 == (IntPtr)NULL_POINTER) {
      plVar10 = plVar15;
    }
    
    // 处理链表节点
    uVar3 = FUN_1808d7550(plVar10, fVar19);
    if ((int32)uVar3 != SUCCESS_CODE) goto LAB_1808c2c1e;
    
    if (plVar7 == (IntPtr)(param_1 + 0x18)) break;
    
    plVar10 = (IntPtr)(*plVar7 + -8);
    if (*plVar7 == 0) {
      plVar10 = plVar15;
    }
    
    plVar7 = plVar15;
    if (plVar10 != (IntPtr)NULL_POINTER) {
      plVar7 = plVar10 + 1;
    }
  }
  
  // 执行核心数据处理
  uVar3 = func_0x0001808d57c0(param_1 + 0x338, *(uint64 *)(param_1 + 0x4d0));
  if ((int32)uVar3 != SUCCESS_CODE) goto LAB_1808c2c1e;
  
  // 初始化数据结构处理
  plVar10 = (IntPtr)(param_1 + 0x530);
  plVar8 = plVar15;
  
  // 跳过空节点
  for (plVar7 = plVar15;
      ((plStack_a0 = plVar10, -1 < (int64)plVar7 && ((int32)plVar8 < *(int32 *)(param_1 + 0x53c))) &&
      (*(int64 *)(*plVar10 + (int64)plVar7 * 8) == 0));
      plVar7 = (IntPtr)((int64)plVar7 + 1)) {
    plVar8 = (IntPtr)(uint64)((int32)plVar8 + 1);
  }
  
  // 处理有效节点
  while (((iVar6 = (int32)plVar8, -1 < iVar6 && (iVar6 < *(int32 *)((int64)plVar10 + 0xc))) &&
         (*(int64 *)(*plVar10 + (int64)iVar6 * 8) != 0))) {
    lVar11 = *(int64 *)(*plVar10 + (int64)iVar6 * 8);
    plVar7 = (IntPtr)(lVar11 + 0x28);
    plVar14 = plVar15;
    
    // 跳过内部空节点
    for (plVar8 = plVar15;
        ((-1 < (int64)plVar8 && ((int32)plVar14 < *(int32 *)(lVar11 + 0x34))) &&
        (*(int64 *)(*plVar7 + (int64)plVar8 * 8) == 0));
        plVar8 = (IntPtr)((int64)plVar8 + 1)) {
      plVar14 = (IntPtr)(uint64)((int32)plVar14 + 1);
    }
    
    // 处理内部有效节点
    while (((iVar17 = (int32)plVar14, -1 < iVar17 && (iVar17 < *(int32 *)(lVar11 + 0x34))) &&
           (*(int64 *)(*plVar7 + (int64)iVar17 * 8) != 0))) {
      // 执行节点数据处理
      uVar3 = FUN_180864040(*(uint64 *)(*plVar7 + (int64)iVar17 * 8), fVar19);
      if ((int32)uVar3 != SUCCESS_CODE) goto LAB_1808c2c1e;
      
      uVar12 = iVar17 + 1;
      for (lVar9 = (int64)(int32)uVar12;
          ((plVar14 = (IntPtr)(uint64)uVar12, -1 < lVar9 &&
           ((int32)uVar12 < *(int32)(lVar11 + 0x34))) && (*(int64 *)(*plVar7 + lVar9 * 8) == 0));
          lVar9 = lVar9 + 1) {
        uVar12 = uVar12 + 1;
      }
    }
    
    // 执行数据排序
    func_0x0001808bd8a0(plVar7);
    if ((*(int32 *)(lVar11 + 0x30) != 0) && (*(int32 *)(*(int64 *)(lVar11 + 0x50) + 0xe8) == 1)) {
      plVar10 = plVar15;
      plVar8 = plVar15;
      if (*(int32 *)(*(int64 *)(lVar11 + 0x50) + 0xd8) < *(int32 *)(lVar11 + 0x30)) {
        func_0x0001808bd8a0(plVar7);
        qsort(*plVar7, (int64)*(int32 *)(lVar11 + 0x30), 8, &processed_var_5984_ptr);
      }
      
      // 处理排序后的数据
      for (; ((-1 < (int64)plVar10 && ((int32)plVar8 < *(int32)(lVar11 + 0x34))) &&
             (*(int64 *)(*plVar7 + (int64)plVar10 * 8) == 0));
          plVar10 = (IntPtr)((int64)plVar10 + 1)) {
        plVar8 = (IntPtr)(uint64)((int32)plVar8 + 1);
      }
      
      while (((iVar17 = (int32)plVar8, plVar10 = plStack_a0, -1 < iVar17 &&
              (iVar17 < *(int32)(lVar11 + 0x34))) &&
             (*(int64 *)(*plVar7 + (int64)iVar17 * 8) != 0))) {
        uVar3 = FUN_180863180(*(uint64 *)(*plVar7 + (int64)iVar17 * 8));
        if ((int32)uVar3 != SUCCESS_CODE) goto LAB_1808c2c1e;
        
        uVar12 = iVar17 + 1;
        for (lVar9 = (int64)(int32)uVar12;
            ((plVar8 = (IntPtr)(uint64)uVar12, -1 < lVar9 &&
             ((int32)uVar12 < *(int32)(lVar11 + 0x34))) && (*(int64 *)(*plVar7 + lVar9 * 8) == 0));
            lVar9 = lVar9 + 1) {
          uVar12 = uVar12 + 1;
        }
      }
    }
    
    // 更新处理索引
    uVar12 = iVar6 + 1;
    for (lVar11 = (int64)(int32)uVar12;
        ((plVar8 = (IntPtr)(uint64)uVar12, -1 < lVar11 &&
         ((int32)uVar12 < *(int32)((int64)plVar10 + 0xc))) &&
        (*(int64 *)(*plVar10 + lVar11 * 8) == 0)); lVar11 = lVar11 + 1) {
      uVar12 = uVar12 + 1;
    }
  }
  
  // 检查特殊处理条件
  if (((*(uint32 *)(*(int64 *)(param_1 + 0x4c0) + 0x78) & 0x10000) == 0) &&
     (*(int8 *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x158) == 0)) goto LAB_1808c2bee;
  
  // 执行特殊数据处理
  plStack_90 = (IntPtr)(param_1 + 0x38);
  uStack_88 = 0xffffffffffffffff;
  aiStack_80[0] = INVALID_INDEX;
  SystemResource_Manager(plStack_90, &uStack_88, aiStack_80);
  
  if (aiStack_80[0] != INVALID_INDEX) {
    plVar15 = plStack_90;
    iVar6 = aiStack_80[0];
    iVar17 = (int32)uStack_88;
    
    do {
      // 处理特殊数据节点
      uStack_70 = 0xffffffffffffffff;
      aiStack_68[0] = INVALID_INDEX;
      plStack_78 = *(IntPtr **)(plVar15[2] + 0x18 + (int64)iVar6 * NODE_SIZE_20);
      NetworkSystem_ConnectionHandler(plStack_78, &uStack_70, aiStack_68);
      plVar10 = plStack_78;
      
      if (aiStack_68[0] != INVALID_INDEX) {
        iVar16 = aiStack_68[0];
        iVar13 = (int32)uStack_70;
        
        do {
          // 验证特殊数据
          do {
            if ((*(int64 *)(*(int64 *)(plVar10[2] + 8 + (int64)iVar16 * NODE_SIZE_16) + 0x350) == 0
                ) && (uVar3 = FUN_180865470(), (int32)uVar3 != SUCCESS_CODE)) goto LAB_1808c2c1e;
          } while ((iVar16 != INVALID_INDEX) &&
                  (iVar16 = *(int32 *)(plVar10[2] + 4 + (int64)iVar16 * NODE_SIZE_16), iVar16 != INVALID_INDEX));
          
          // 更新索引
          iVar16 = iVar13 + 1;
          bVar18 = iVar13 != INVALID_INDEX;
          iVar13 = 0;
          if (bVar18) {
            iVar13 = iVar16;
          }
          
          // 继续处理有效节点
          if (iVar13 != (int32)plVar10[1]) {
            lVar11 = (int64)iVar13;
            do {
              if (*(int32 *)(*plVar10 + lVar11 * 4) != INVALID_INDEX) {
                iVar16 = *(int32 *)(*plVar10 + (int64)iVar13 * 4);
                goto LAB_1808c2b1a;
              }
              iVar13 = iVar13 + 1;
              lVar11 = lVar11 + 1;
            } while (lVar11 != (int32)plVar10[1]);
          }
          iVar16 = INVALID_INDEX;
          iVar13 = iVar16;
LAB_1808c2b1a:
          plVar15 = plStack_90;
        } while (iVar16 != INVALID_INDEX);
      }
      
      // 更新主处理索引
      if ((iVar6 == INVALID_INDEX) ||
         (iVar6 = *(int32 *)(plVar15[2] + 0x10 + (int64)iVar6 * NODE_SIZE_20), iVar6 == INVALID_INDEX)) {
        iVar6 = iVar17 + 1;
        bVar18 = iVar17 != INVALID_INDEX;
        iVar17 = 0;
        if (bVar18) {
          iVar17 = iVar6;
        }
        if (iVar17 != (int32)plVar15[1]) {
          lVar11 = (int64)iVar17;
          do {
            if (*(int32)(*plVar15 + lVar11 * 4) != INVALID_INDEX) {
              iVar6 = *(int32)(*plVar15 + (int64)iVar17 * 4);
              goto LAB_1808c2b90;
            }
            iVar17 = iVar17 + 1;
            lVar11 = lVar11 + 1;
          } while (lVar11 != (int32)plVar15[1]);
        }
        iVar6 = INVALID_INDEX;
        iVar17 = iVar6;
      }
LAB_1808c2b90:
      plVar10 = plStack_a0;
    } while (iVar6 != INVALID_INDEX);
  }
  
  // 处理附加数据
  lVar11 = *(int64 *)(param_1 + 0x7a0);
  if (lVar11 == 0) {
    if (lStackX_20 == 0) goto LAB_1808c2bee;
    plStack_a0 = *(IntPtr **)(lStackX_20 + 0x10);
    uStack_98 = *(uint64 *)(lStackX_20 + 0x18);
    lVar11 = FUN_180851c50(param_1 + 0x108, &plStack_a0, 0xffffffff);
    if (lVar11 == 0) goto LAB_1808c2bee;
  }
  
  // 执行最终数据处理
  auStackX_18[0] = 0;
  FUN_1808533d0(lVar11, auStackX_18);
LAB_1808c2bee:
  
  uVar3 = SUCCESS_CODE;
  
  // 执行清理操作
  if (*(int32 *)(param_1 + 0x538) == 0) {
    func_0x0001808bd8a0(plVar10);
    uVar4 = FUN_1808c17c0(plVar10, (int32)plVar10[1]);
    if ((int32)uVar4 != SUCCESS_CODE) {
      *(uint8 *)(param_1 + 0x780) = uVar1;
      return uVar4;
    }
  }
  else {
    func_0x0001808bd8a0(plVar10);
  }
  
  // 清理缓冲区
  if (0 < *(int32 *)(param_1 + 0x550)) {
    pcVar5 = (int8 *)(param_1 + 0x595);
    uVar4 = uVar3;
    do {
      if (*pcVar5 != 0) {
        *pcVar5 = 0;
      }
      uVar12 = (int32)uVar4 + 1;
      uVar4 = (uint64)uVar12;
      pcVar5 = pcVar5 + 0x44;
    } while ((int32)uVar12 < *(int32 *)(param_1 + 0x550));
  }
  
  // 执行最终验证
  uVar4 = FUN_1808d5710(param_1 + 0x4a8);
  if ((int32)uVar4 == SUCCESS_CODE) {
    plVar15 = (IntPtr)(param_1 + 0x4d8);
    uVar4 = uVar3;
    
    // 处理剩余数据
    for (; ((-1 < (int64)uVar3 && ((int32)uVar4 < *(int32 *)(param_1 + 0x4e4))) &&
           (*(int64 *)(*plVar15 + uVar3 * 8) == 0)); uVar3 = uVar3 + 1) {
      uVar4 = (uint64)((int32)uVar4 + 1);
    }
    
    while (((iVar6 = (int32)uVar4, -1 < iVar6 && (iVar6 < *(int32)(param_1 + 0x4e4))) &&
           (*(int64 *)(*plVar15 + (int64)iVar6 * 8) != 0))) {
      uVar2 = *(uint64 *)(*plVar15 + (int64)iVar6 * 8);
      auStackX_18[0] = auStackX_18[0] & 0xffffff00;
      uVar4 = FUN_180853000(uVar2, auStackX_18);
      if (((int32)uVar4 != SUCCESS_CODE) ||
         (((int8)auStackX_18[0] != (int8)uVar4 &&
          (uVar4 = FUN_180851490(param_1 + 0x368, uVar2), (int32)uVar4 != SUCCESS_CODE)))) goto LAB_1808c2d92;
      
      uVar12 = iVar6 + 1;
      for (lVar11 = (int64)(int32)uVar12;
          ((uVar4 = (uint64)uVar12, -1 < lVar11 && ((int32)uVar12 < *(int32)(param_1 + 0x4e4))) &&
          (*(int64 *)(*plVar15 + lVar11 * 8) == 0)); lVar11 = lVar11 + 1) {
        uVar12 = uVar12 + 1;
      }
    }
    
    // 最终状态检查
    if (*(int32 *)(param_1 + 0x4e0) == 0) {
      func_0x0001808bd8a0(plVar15);
      uVar3 = FUN_1808c17c0(plVar15, *(uint32 *)(param_1 + 0x4e0));
      if ((int32)uVar3 != SUCCESS_CODE) {
        *(uint8 *)(param_1 + 0x780) = uVar1;
        return uVar3;
      }
    }
    else {
      func_0x0001808bd8a0(plVar15);
    }
    
    // 执行系统验证
    uVar4 = FUN_1808bdeb0(param_1);
    if ((((int32)uVar4 == SUCCESS_CODE) && (uVar4 = FUN_1808d94a0(param_1 + 0x2c8), (int32)uVar4 == SUCCESS_CODE)) &&
       ((uVar4 = FUN_1808e1ef0(*(uint64 *)(param_1 + 0x790), 0), (int32)uVar4 == SUCCESS_CODE &&
        (uVar4 = func_0x0001808e0b20(*(uint64 *)(param_1 + 0x788)), (int32)uVar4 == SUCCESS_CODE)))) {
      // 处理完成，恢复状态并返回
      *(uint8 *)(param_1 + 0x780) = uVar1;
      if ((param_2 != 0) && (uVar3 = FUN_180772c50(param_2, 1), (int32)uVar3 != SUCCESS_CODE)) {
        return uVar3;
      }
      
      uVar12 = FUN_18073bf60(*(uint64 *)(param_1 + 0x4c0));
      if ((param_2 != 0) && (uVar3 = FUN_180772c50(param_2, 0), (int32)uVar3 != SUCCESS_CODE)) {
        return uVar3;
      }
      
      return (uint64)uVar12;
    }
  }
LAB_1808c2d92:
  // 错误处理，恢复状态并返回错误码
  *(uint8 *)(param_1 + 0x780) = uVar1;
  return uVar4;
}

// ============================================================================
// 函数：FUN_1808c2e00 - 内存管理和释放器
// 
// 功能说明：
// 执行内存管理和释放操作，处理多个链表的清理和内存释放。
// 支持条件内存释放和资源管理。
//
// 参数：
//   param_1 - 内存管理器指针，包含要管理的内存块信息
//   param_2 - 释放模式标志，控制内存释放的行为
//
// 返回值：
//   int64 - 内存管理器指针，用于链式操作
//
// 技术说明：
// 该函数实现了内存管理功能：
// 1. 管理多个链表的内存释放
// 2. 执行链表节点的清理
// 3. 支持条件内存释放
// 4. 处理系统资源清理
// ============================================================================
int64 FUN_1808c2e00(int64 param_1, uint64 param_2)
{
  IntPtr plVar1;           // 整数指针
  
  // 处理第一个链表
  plVar1 = (IntPtr)(param_1 + 0x48);
  FUN_180855780(plVar1);
  **(int64 **)(param_1 + 0x50) = *plVar1;
  *(uint64 *)(*plVar1 + 8) = *(uint64 *)(param_1 + 0x50);
  *(IntPtr *)(param_1 + 0x50) = plVar1;
  *plVar1 = (int64)plVar1;
  
  // 处理第二个链表
  plVar1 = (IntPtr)(param_1 + 0x38);
  FUN_180855780(plVar1);
  **(int64 **)(param_1 + 0x40) = *plVar1;
  *(uint64 *)(*plVar1 + 8) = *(uint64 *)(param_1 + 0x40);
  *(IntPtr *)(param_1 + 0x40) = plVar1;
  *plVar1 = (int64)plVar1;
  
  // 处理第三个链表
  plVar1 = (IntPtr)(param_1 + 0x28);
  FUN_180855780(plVar1);
  **(int64 **)(param_1 + 0x30) = *plVar1;
  *(uint64 *)(*plVar1 + 8) = *(uint64 *)(param_1 + 0x30);
  *(IntPtr *)(param_1 + 0x30) = plVar1;
  *plVar1 = (int64)plVar1;
  
  // 执行系统清理
  FUN_1808b1a30(param_1);
  
  // 条件内存释放
  if ((param_2 & 1) != 0) {
    free(param_1, ALLOCATION_SIZE_MEDIUM);
  }
  
  return param_1;
}

// ============================================================================
// 函数：FUN_1808c2ec0 - 对象创建和初始化器
// 
// 功能说明：
// 创建和初始化对象，处理对象链接和内存分配。
// 支持多种初始化模式和错误处理。
//
// 参数：
//   param_1 - 对象管理器指针，包含对象池和配置信息
//   param_2 - 对象类型指针，指定要创建的对象类型
//   param_3 - 初始化模式标志，控制初始化行为
//
// 返回值：
//   uint64 - 创建结果状态码，0表示成功，非0表示错误
//
// 技术说明：
// 该函数实现了对象创建功能：
// 1. 执行对象验证
// 2. 分配内存和初始化
// 3. 处理对象链接
// 4. 管理错误状态
// ============================================================================
uint64 FUN_1808c2ec0(int64 param_1, int64 param_2, int8 param_3)
{
  uint64 uVar1;            // 返回值
  IntPtr plVar2;           // 整数指针
  int64 lStackX_10;        // 栈变量
  
  // 参数验证
  if (param_2 == 0) {
    return PARAMETER_ERROR_CODE;
  }
  
  lStackX_10 = param_1;
  uVar1 = FUN_1808c4160(param_2 + 0xb0, &lStackX_10);
  
  if ((int32)uVar1 == SUCCESS_CODE) {
    // 检查是否需要额外初始化
    if ((param_3 != 0) && (uVar1 = FUN_18084ed10(param_2), (int32)uVar1 != SUCCESS_CODE)) {
      return uVar1;
    }
    
    // 分配对象内存
    plVar2 = (IntPtr)
             SystemResourceManager(*(uint64 *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0), ALLOCATION_SIZE_MEDIUM, &ui_system_data_1696_ptr, 0xbf, 0, 0, 1);
    
    if (plVar2 == (IntPtr)NULL_POINTER) {
      return ALLOCATION_ERROR_CODE;
    }
    
    // 初始化对象
    plVar2[1] = (int64)plVar2;
    *plVar2 = (int64)plVar2;
    plVar2[2] = param_2;
    plVar2[1] = *(int64 *)(param_1 + 0x30);
    *plVar2 = param_1 + 0x28;
    *(IntPtr *)(param_1 + 0x30) = plVar2;
    *(IntPtr *)plVar2[1] = plVar2;
    uVar1 = SUCCESS_CODE;
  }
  
  return uVar1;
}

// ============================================================================
// 函数：FUN_1808c2fb0 - 对象链接管理器
// 
// 功能说明：
// 管理对象链接关系，处理对象间的关联和绑定。
// 支持多种链接模式和验证操作。
//
// 参数：
//   param_1 - 目标对象指针，要链接到的目标
//   param_2 - 源对象指针，要链接的源对象
//
// 返回值：
//   uint64 - 链接结果状态码，0表示成功，非0表示错误
//
// 技术说明：
// 该函数实现了对象链接功能：
// 1. 执行对象验证
// 2. 处理链接操作
// 3. 管理链接状态
// 4. 支持错误处理
// ============================================================================
uint64 FUN_1808c2fb0(int64 param_1, int64 param_2)
{
  uint64 uVar1;            // 返回值
  int64 lStackX_10;        // 栈变量
  int64 alStackX_18[2];    // 栈数组
  
  // 参数验证
  if (param_2 == 0) {
    return PARAMETER_ERROR_CODE;
  }
  
  lStackX_10 = param_2;
  alStackX_18[0] = param_1;
  uVar1 = FUN_1808c4160(param_2 + 0x48, alStackX_18);
  
  if ((int32)uVar1 == SUCCESS_CODE) {
    uVar1 = FUN_1808c4570(param_2);
    if ((int32)uVar1 == SUCCESS_CODE) {
      uVar1 = FUN_1808c4160(param_1 + 0x38, &lStackX_10);
    }
  }
  
  return uVar1;
}

// ============================================================================
// 函数：FUN_1808c3020 - 链表遍历处理器
// 
// 功能说明：
// 遍历链表并处理节点，执行节点特定的操作和验证。
// 支持多个链表的并行处理。
//
// 参数：
//   param_1 - 链表头指针，包含要遍历的链表信息
//
// 返回值：
//   uint64 - 处理结果状态码，0表示成功，非0表示错误
//
// 技术说明：
// 该函数实现了链表遍历功能：
// 1. 遍历多个链表
// 2. 执行节点处理
// 3. 管理遍历状态
// 4. 支持错误处理
// ============================================================================
uint64 FUN_1808c3020(int64 param_1)
{
  UIntPtr puVar1;          // 无符号整数指针
  UIntPtr puVar2;          // 无符号整数指针
  uint64 uVar3;            // 返回值
  
  // 处理第一个链表
  puVar1 = (UIntPtr)(param_1 + 0x28);
  for (puVar2 = *(UIntPtr **)(param_1 + 0x28); puVar2 != puVar1; puVar2 = (UIntPtr)*puVar2) {
    uVar3 = FUN_1808c4440(puVar2[2], param_1);
    if ((int32)uVar3 != SUCCESS_CODE) {
      return uVar3;
    }
    if (puVar2 == puVar1) break;
  }
  
  // 清理第一个链表
  FUN_180855780(puVar1);
  
  // 处理第二个链表
  puVar1 = (UIntPtr)(param_1 + 0x38);
  for (puVar2 = *(UIntPtr **)(param_1 + 0x38); puVar2 != puVar1; puVar2 = (UIntPtr)*puVar2) {
    uVar3 = FUN_1808c30e0(puVar2[2], param_1);
    if ((int32)uVar3 != SUCCESS_CODE) {
      return uVar3;
    }
    if (puVar2 == puVar1) break;
  }
  
  // 清理第二个链表
  FUN_180855780(puVar1);
  
  // 处理第三个链表
  puVar1 = (UIntPtr)(param_1 + 0x48);
  for (puVar2 = *(UIntPtr **)(param_1 + 0x48); puVar2 != puVar1; puVar2 = (UIntPtr)*puVar2) {
    uVar3 = FUN_1808c30e0(puVar2[2], param_1);
    if ((int32)uVar3 != SUCCESS_CODE) {
      return uVar3;
    }
    if (puVar2 == puVar1) break;
  }
  
  // 清理第三个链表
  FUN_180855780(puVar1);
  
  return SUCCESS_CODE;
}

// ============================================================================
// 函数：FUN_1808c30e0 - 节点移除处理器
// 
// 功能说明：
// 从链表中移除指定节点，处理节点间的链接关系。
// 支持多个链表的节点移除操作。
//
// 参数：
//   param_1 - 目标对象指针，包含要移除的节点信息
//   param_2 - 链表管理器指针，包含链表的管理信息
//
// 返回值：
//   uint64 - 移除结果状态码，0表示成功，非0表示错误
//
// 技术说明：
// 该函数实现了节点移除功能：
// 1. 查找目标节点
// 2. 执行节点移除
// 3. 更新链接关系
// 4. 释放节点内存
// ============================================================================
uint64 FUN_1808c30e0(int64 param_1, int64 param_2)
{
  IntPtr plVar2;           // 整数指针
  IntPtr plVar1;           // 整数指针
  
  // 处理第一个链表
  plVar2 = *(IntPtr **)(param_1 + 0x38);
  plVar1 = (IntPtr)(param_1 + 0x38);
  
  if (plVar2 == plVar1) {
LAB_1808c3135:
    if (plVar2 != plVar1) {
      // 执行节点移除操作
      *(int64 *)plVar2[1] = *plVar2;
      *(int64 *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (int64)plVar2;
      *plVar2 = (int64)plVar2;
      // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64 *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0), plVar2, &ui_system_data_1696_ptr, 0xe1, 1);
    }
  }
  else {
    // 查找目标节点
    do {
      if (plVar2[2] == param_2) goto LAB_1808c3135;
    } while ((plVar2 != plVar1) && (plVar2 = (IntPtr)*plVar2, plVar2 != plVar1));
  }
  
  // 处理第二个链表
  plVar2 = *(IntPtr **)(param_1 + 0x48);
  plVar1 = (IntPtr)(param_1 + 0x48);
  
  if (plVar2 != plVar1) {
    // 在第二个链表中查找目标节点
    while (plVar2[2] != param_2) {
      if (plVar2 == plVar1) {
        return SUCCESS_CODE;
      }
      plVar2 = (IntPtr)*plVar2;
      if (plVar2 == plVar1) {
        return SUCCESS_CODE;
      }
    }
  }
  
  if (plVar2 == plVar1) {
    return SUCCESS_CODE;
  }
  
  // 执行节点移除操作
  *(int64 *)plVar2[1] = *plVar2;
  *(int64 *)(*plVar2 + 8) = plVar2[1];
  plVar2[1] = (int64)plVar2;
  *plVar2 = (int64)plVar2;
  // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64 *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0), plVar2, &ui_system_data_1696_ptr, 0xe1, 1);
}

// ============================================================================
// 函数：FUN_1808c3220 - 高级对象创建器
// 
// 功能说明：
// 创建高级对象，处理复杂的初始化和配置操作。
// 支持多种对象类型和配置模式。
//
// 参数：
//   param_1 - 对象创建器指针，包含创建器的配置信息
//   param_2 - 创建参数，指定对象创建的参数
//   param_3 - 附加参数，提供额外的创建信息
//   param_4 - 输出参数指针，用于返回创建的对象
//
// 返回值：
//   int32 - 创建结果状态码，0表示成功，非0表示错误
//
// 技术说明：
// 该函数实现了高级对象创建功能：
// 1. 执行参数验证
// 2. 分配对象内存
// 3. 初始化对象属性
// 4. 设置对象关系
// 5. 管理创建状态
// ============================================================================
int32 FUN_1808c3220(IntPtr param_1, uint64 param_2, uint64 param_3, UIntPtr param_4)
{
  UIntPtr puVar1;          // 无符号整数指针
  int64 lVar2;             // 长整型变量
  int32 iVar3;             // 整型变量
  int32 iVar4;             // 整型变量
  int64 lVar5;             // 长整型变量
  int64 lVar6;             // 长整型变量
  UIntPtr puVar7;          // 无符号整数指针
  int64 lVar8;             // 长整型变量
  uint64 uVar9;            // 无符号长整型变量
  int64 lVar10;            // 长整型变量
  int32 iVar11;            // 整型变量
  int32 iVar13;            // 整型变量
  bool bVar14;             // 布尔变量
  bool bVar15;             // 布尔变量
  bool bVar16;             // 布尔变量
  bool bVar17;             // 布尔变量
  bool bVar18;             // 布尔变量
  int64 lStack_68;         // 栈变量
  int64 lStack_60;         // 栈变量
  int64 lStack_58;         // 栈变量
  int64 lStack_50;         // 栈变量
  int64 lStack_48;         // 栈变量
  int32 iVar12;            // 栈变量
  
  // 初始化输出参数
  if (param_4 != (UIntPtr)NULL_POINTER) {
    *param_4 = 0;
  }
  
  // 执行对象创建
  lVar5 = ((*(code **)(*(int64 *)param_1[3] + 0x2f8))((IntPtr)param_1[3], param_2, 1));
  if (lVar5 == 0) {
    return SUCCESS_CODE;
  }
  
  // 初始化创建状态
  lVar2 = param_1[2];
  bVar15 = false;
  *(int32 *)(lVar2 + 0x98) = *(int32 *)(lVar2 + 0x98) + 1;
  lStack_60 = lVar2 + 0x38;
  *(int32 *)(lVar2 + 0x1d0) = *(int32 *)(lVar2 + 0x1d0) + 1;
  *(int32 *)(lVar2 + 0x168) = *(int32 *)(lVar2 + 0x168) + 1;
  *(int32 *)(lVar2 + 0x238) = *(int32 *)(lVar2 + 0x238) + 1;
  lVar8 = *param_1;
  lStack_48 = lVar2 + 0x170;
  lStack_50 = lVar2 + 0x108;
  lStack_58 = lVar2 + 0x1d8;
  lVar10 = *(int64 *)(lVar8 + 0x28);
  bVar17 = false;
  bVar16 = false;
  bVar18 = false;
  bVar14 = lVar10 == 0;
  
  if (bVar14) {
    lVar10 = 0;
  }
  else {
    SystemMemoryAllocator(lVar10);
  }
  
  // 执行对象查找
  lVar6 = func_0x000180851be0(lVar8 + 0x30, param_2);
  if (lVar6 == 0) {
    lVar6 = func_0x000180851be0(lVar8, param_2);
  }
  
  if (!bVar14) {
    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar10);
  }
  
  // 初始化状态变量
  iVar12 = 0;
  iVar11 = 0;
  iVar13 = 0;
  
  if (lVar6 != 0) {
    lVar8 = lStack_60;
    iVar3 = MEMORY_ERROR_CODE;
    goto LAB_1808c3648;
  }
  
  // 分配对象内存
  puVar7 = (UIntPtr)
           SystemResourceManager(*(uint64 *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0), ALLOCATION_SIZE_LARGE, &memory_allocator_3008_ptr, 0x12f, 0, 0, 1);
  lVar8 = lStack_60;
  
  if (puVar7 == (UIntPtr)NULL_POINTER) {
    iVar3 = ALLOCATION_ERROR_CODE;
    goto LAB_1808c3648;
  }
  
  // 初始化对象属性
  lVar10 = param_1[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = lVar10;
  puVar1 = puVar7 + 5;
  *puVar7 = &rendering_buffer_2936_ptr;
  *puVar1 = puVar1;
  puVar7[6] = puVar1;
  puVar1 = puVar7 + 7;
  *puVar1 = puVar1;
  puVar7[8] = puVar1;
  puVar1 = puVar7 + 9;
  *puVar1 = puVar1;
  puVar7[10] = puVar1;
  puVar7[0xb] = lVar5;
  puVar7[0xc] = 0;
  puVar7[0xd] = param_1;
  *(uint32 *)(puVar7 + 0xe) = 0x3f800000;
  *(uint64 *)((int64)puVar7 + 0x74) = 0x3f800000;
  
  // 设置对象关系
  lVar10 = *(int64 *)(lVar5 + 0x48);
  if (lVar10 != 0) {
    if (*(int64 *)(lVar10 + 8) != 0) {
      iVar3 = MEMORY_ERROR_CODE;
      goto LAB_1808c3648;
    }
    *(UIntPtr *)(lVar10 + 8) = puVar7;
    puVar7[0xc] = lVar10;
  }
  
  // 执行对象初始化
  lVar8 = ((*(code **)*puVar7)(puVar7));
  iVar3 = FUN_1808c3de0(*param_1, lVar8 + 0x10, puVar7);
  lVar8 = lStack_60;
  
  if (iVar3 != SUCCESS_CODE) goto LAB_1808c3648;
  
  // 处理对象子项
  for (uVar9 = *(uint64 *)(lVar5 + 0x38);
      (*(uint64 *)(lVar5 + 0x38) <= uVar9 &&
      (uVar9 < (int64)*(int32 *)(lVar5 + 0x40) * NODE_SIZE_16 + *(uint64 *)(lVar5 + 0x38)));
      uVar9 = uVar9 + NODE_SIZE_16) {
    
    lStack_68 = 0;
    iVar3 = FUN_1808bc240(param_1[2], uVar9, 0xffffffff, &lStack_68);
    lVar8 = lStack_60;
    
    if ((iVar3 != SUCCESS_CODE) ||
       ((lStack_68 != 0 && (iVar3 = FUN_1808c2fb0(lStack_68, puVar7), lVar8 = lStack_60, iVar3 != SUCCESS_CODE))
       )) goto LAB_1808c3648;
  }
  
  // 执行对象验证
  iVar3 = FUN_1808b89f0(param_1[2] + 0x290, puVar7);
  lVar8 = lStack_60;
  
  if ((iVar3 != SUCCESS_CODE) || (iVar3 = SystemDataFlowProcessor(puVar7, 0), lVar8 = lStack_60, iVar3 != SUCCESS_CODE))
  goto LAB_1808c3648;
  
  // 更新对象状态
  *(int32 *)(puVar7 + 0xf) = *(int32 *)(puVar7 + 0xf) + 1;
  lVar8 = lVar2 + 0x38;
  iVar3 = MEMORY_ERROR_CODE;
  
  // 执行状态检查
  if (*(int32 *)(lVar2 + 0x98) < 1) {
    iVar4 = MEMORY_ERROR_CODE;
  }
  else {
    if ((*(int32 *)(lVar2 + 0x98) != 1) || (iVar4 = FUN_1808501b0(lVar8), iVar4 == SUCCESS_CODE)) {
      *(int32 *)(lVar2 + 0x98) = *(int32 *)(lVar2 + 0x98) + -1;
      iVar4 = iVar11;
    }
    bVar15 = iVar4 == SUCCESS_CODE;
  }
  
  if (iVar4 == SUCCESS_CODE) {
    iVar4 = iVar13;
  }
  
  // 执行多级状态检查
  if (iVar4 == SUCCESS_CODE) {
    if (*(int32 *)(lVar2 + 0x168) < 1) {
      iVar4 = MEMORY_ERROR_CODE;
    }
    else {
      if ((*(int32 *)(lVar2 + 0x168) != 1) || (iVar4 = FUN_18084f7f0(lVar2 + 0x108), iVar4 == SUCCESS_CODE)) {
        *(int32 *)(lVar2 + 0x168) = *(int32 *)(lVar2 + 0x168) + -1;
        iVar4 = iVar12;
      }
      bVar16 = iVar4 == SUCCESS_CODE;
    }
    
    if (iVar4 == SUCCESS_CODE) {
      iVar4 = iVar11;
    }
    
    if (iVar4 != SUCCESS_CODE) goto LAB_1808c3631;
    
    if (*(int32 *)(lVar2 + 0x1d0) < 1) {
      iVar4 = MEMORY_ERROR_CODE;
    }
    else {
      if ((*(int32 *)(lVar2 + 0x1d0) != 1) || (iVar4 = FUN_18084fcd0(lVar2 + 0x170), iVar4 == SUCCESS_CODE)) {
        *(int32 *)(lVar2 + 0x1d0) = *(int32 )(lVar2 + 0x1d0) + -1;
        iVar4 = iVar12;
      }
      bVar17 = iVar4 == SUCCESS_CODE;
    }
    
    if (iVar4 == SUCCESS_CODE) {
      iVar4 = iVar11;
    }
    
    if (iVar4 != SUCCESS_CODE) goto LAB_1808c3631;
    
    if (0 < *(int32 *)(lVar2 + 0x238)) {
      if ((*(int32 *)(lVar2 + 0x238) != 1) || (iVar3 = FUN_180850690(lVar2 + 0x1d8), iVar3 == SUCCESS_CODE)) {
        *(int32 *)(lVar2 + 0x238) = *(int32 )(lVar2 + 0x238) + -1;
        iVar3 = iVar12;
      }
      bVar18 = iVar3 == SUCCESS_CODE;
    }
    
    if (iVar3 == SUCCESS_CODE) {
      iVar3 = iVar13;
    }
    
    if (iVar3 != SUCCESS_CODE) goto LAB_1808c3648;
    
    iVar4 = FUN_1808bd690(lVar2);
    if (iVar4 != SUCCESS_CODE) goto LAB_1808c3631;
  }
  else {
LAB_1808c3631:
    iVar3 = iVar4;
    if (iVar4 != SUCCESS_CODE) goto LAB_1808c3648;
  }
  
  iVar3 = iVar13;
  
  // 设置输出参数
  if (param_4 != (UIntPtr)NULL_POINTER) {
    *param_4 = puVar7;
  }
LAB_1808c3648:
  
  // 执行清理操作
  if (!bVar18) {
    *(uint32 *)(lStack_58 + 0x60) = 0;
    RenderingEngine_ShaderProcessor(lStack_58 + 0x30);
  }
  
  if (!bVar16) {
    *(uint32 *)(lStack_50 + 0x60) = 0;
    SystemCore_CacheManager(lStack_50 + 0x30);
  }
  
  if (!bVar17) {
    *(uint32 *)(lStack_48 + 0x60) = 0;
    SystemCore_CacheManager(lStack_48 + 0x30);
  }
  
  if (!bVar15) {
    *(uint32 *)(lVar8 + 0x60) = 0;
    SystemCore_NetworkProcessor(lVar8 + 0x30);
  }
  
  return iVar3;
}

// ============================================================================
// 函数：FUN_1808c3266 - 对象创建处理器
// 
// 功能说明：
// 处理对象创建操作，类似于FUN_1808c3220但使用寄存器变量。
// 执行复杂的对象初始化和配置。
//
// 参数：
//   无直接参数，使用寄存器变量传递参数
//
// 返回值：
//   int32 - 创建结果状态码，0表示成功，非0表示错误
//
// 技术说明：
// 该函数是FUN_1808c3220的变体，使用寄存器变量传递参数：
// 1. 执行相同的对象创建逻辑
// 2. 使用不同的参数传递方式
// 3. 支持相同的错误处理
// 4. 管理对象生命周期
// ============================================================================
int32 FUN_1808c3266(void)
{
  UIntPtr puVar1;          // 无符号整数指针
  int64 lVar2;             // 长整型变量
  int32 iVar3;             // 整型变量
  int32 iVar4;             // 整型变量
  int64 lVar5;             // 长整型变量
  UIntPtr puVar6;          // 无符号整数指针
  int64 lVar7;             // 长整型变量
  uint64 uVar8;            // 无符号长整型变量
  int64 unaff_RBP;         // 未使用的寄存器变量
  int64 lVar9;             // 长整型变量
  IntPtr unaff_R12;        // 未使用的寄存器变量
  int32 iVar10;            // 整型变量
  int32 iVar12;            // 整型变量
  bool bVar13;             // 布尔变量
  bool bVar14;             // 布尔变量
  bool bVar15;             // 布尔变量
  bool bVar16;             // 布尔变量
  bool bVar17;             // 布尔变量
  int64 in_stack_00000050; // 栈变量
  int64 lStack0000000000000058; // 栈变量
  int64 lStack0000000000000060; // 栈变量
  int64 lStack0000000000000068; // 栈变量
  int64 lStack0000000000000070; // 栈变量
  UIntPtr in_stack_000000d8; // 栈变量
  int32 iVar11;            // 栈变量
  
  // 初始化创建状态（使用寄存器变量）
  lVar2 = unaff_R12[2];
  bVar14 = false;
  *(int32 *)(lVar2 + 0x98) = *(int32 *)(lVar2 + 0x98) + 1;
  lStack0000000000000058 = lVar2 + 0x38;
  *(int32 *)(lVar2 + 0x1d0) = *(int32 )(lVar2 + 0x1d0) + 1;
  *(int32 *)(lVar2 + 0x168) = *(int32 )(lVar2 + 0x168) + 1;
  *(int32 *)(lVar2 + 0x238) = *(int32 )(lVar2 + 0x238) + 1;
  lVar7 = *unaff_R12;
  lStack0000000000000070 = lVar2 + 0x170;
  lStack0000000000000068 = lVar2 + 0x108;
  lStack0000000000000060 = lVar2 + 0x1d8;
  lVar9 = *(int64 *)(lVar7 + 0x28);
  bVar16 = false;
  bVar15 = false;
  bVar17 = false;
  bVar13 = lVar9 == 0;
  
  if (bVar13) {
    lVar9 = 0;
  }
  else {
    SystemMemoryAllocator(lVar9);
  }
  
  // 执行对象查找（使用寄存器变量）
  lVar5 = func_0x000180851be0(lVar7 + 0x30);
  if (lVar5 == 0) {
    lVar5 = func_0x000180851be0(lVar7);
  }
  
  if (!bVar13) {
    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar9);
  }
  
  // 初始化状态变量
  iVar11 = 0;
  iVar10 = 0;
  iVar12 = 0;
  
  if (lVar5 != 0) {
    lVar7 = lStack0000000000000058;
    iVar3 = MEMORY_ERROR_CODE;
    goto LAB_1808c3648;
  }
  
  // 分配对象内存
  puVar6 = (UIntPtr)
           SystemResourceManager(*(uint64 *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0), ALLOCATION_SIZE_LARGE, &memory_allocator_3008_ptr, 0x12f, 0);
  lVar7 = lStack0000000000000058;
  
  if (puVar6 == (UIntPtr)NULL_POINTER) {
    iVar3 = ALLOCATION_ERROR_CODE;
    goto LAB_1808c3648;
  }
  
  // 初始化对象属性（使用寄存器变量）
  lVar9 = unaff_R12[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = lVar9;
  puVar1 = puVar6 + 5;
  *puVar6 = &rendering_buffer_2936_ptr;
  *puVar1 = puVar1;
  puVar6[6] = puVar1;
  puVar1 = puVar6 + 7;
  *puVar1 = puVar1;
  puVar6[8] = puVar1;
  puVar1 = puVar6 + 9;
  *puVar1 = puVar1;
  puVar6[10] = puVar1;
  puVar6[0xb] = unaff_RBP;
  puVar6[0xc] = 0;
  puVar6[0xd] = unaff_R12;
  *(uint32 *)(puVar6 + 0xe) = 0x3f800000;
  *(uint64 *)((int64)puVar6 + 0x74) = 0x3f800000;
  
  // 设置对象关系（使用寄存器变量）
  lVar9 = *(int64 *)(unaff_RBP + 0x48);
  if (lVar9 != 0) {
    if (*(int64 *)(lVar9 + 8) != 0) {
      iVar3 = MEMORY_ERROR_CODE;
      goto LAB_1808c3648;
    }
    *(UIntPtr *)(lVar9 + 8) = puVar6;
    puVar6[0xc] = lVar9;
  }
  
  // 执行对象初始化
  lVar7 = ((*(code **)*puVar6)(puVar6));
  iVar3 = FUN_1808c3de0(*unaff_R12, lVar7 + 0x10, puVar6);
  lVar7 = lStack0000000000000058;
  
  if (iVar3 != SUCCESS_CODE) goto LAB_1808c3648;
  
  // 处理对象子项（使用寄存器变量）
  for (uVar8 = *(uint64 *)(unaff_RBP + 0x38);
      (*(uint64 *)(unaff_RBP + 0x38) <= uVar8 &&
      (uVar8 < (int64)*(int32 *)(unaff_RBP + 0x40) * NODE_SIZE_16 + *(uint64 )(unaff_RBP + 0x38)));
      uVar8 = uVar8 + NODE_SIZE_16) {
    
    in_stack_00000050 = 0;
    iVar3 = FUN_1808bc240(unaff_R12[2], uVar8, 0xffffffff, &in_stack_00000050);
    lVar7 = lStack0000000000000058;
    
    if ((iVar3 != SUCCESS_CODE) ||
       ((in_stack_00000050 != 0 &&
        (iVar3 = FUN_1808c2fb0(in_stack_00000050, puVar6), lVar7 = lStack0000000000000058, iVar3 != SUCCESS_CODE)
        ))) goto LAB_1808c3648;
  }
  
  // 执行对象验证（使用寄存器变量）
  iVar3 = FUN_1808b89f0(unaff_R12[2] + 0x290, puVar6);
  lVar7 = lStack0000000000000058;
  
  if ((iVar3 != SUCCESS_CODE) || (iVar3 = SystemDataFlowProcessor(puVar6, 0), lVar7 = lStack0000000000000058, iVar3 != SUCCESS_CODE))
  goto LAB_1808c3648;
  
  // 更新对象状态
  *(int32 *)(puVar6 + 0xf) = *(int32 )(puVar6 + 0xf) + 1;
  lVar7 = lVar2 + 0x38;
  iVar3 = MEMORY_ERROR_CODE;
  
  // 执行状态检查
  if (*(int32 )(lVar2 + 0x98) < 1) {
    iVar4 = MEMORY_ERROR_CODE;
  }
  else {
    if ((*(int32 )(lVar2 + 0x98) != 1) || (iVar4 = FUN_1808501b0(lVar7), iVar4 == SUCCESS_CODE)) {
      *(int32 )(lVar2 + 0x98) = *(int32 )(lVar2 + 0x98) + -1;
      iVar4 = iVar10;
    }
    bVar14 = iVar4 == SUCCESS_CODE;
  }
  
  if (iVar4 == SUCCESS_CODE) {
    iVar4 = iVar12;
  }
  
  // 执行多级状态检查
  if (iVar4 == SUCCESS_CODE) {
    if (*(int32 )(lVar2 + 0x168) < 1) {
      iVar4 = MEMORY_ERROR_CODE;
    }
    else {
      if ((*(int32 )(lVar2 + 0x168) != 1) || (iVar4 = FUN_18084f7f0(lVar2 + 0x108), iVar4 == SUCCESS_CODE)) {
        *(int32 )(lVar2 + 0x168) = *(int32 )(lVar2 + 0x168) + -1;
        iVar4 = iVar11;
      }
      bVar15 = iVar4 == SUCCESS_CODE;
    }
    
    if (iVar4 == SUCCESS_CODE) {
      iVar4 = iVar10;
    }
    
    if (iVar4 != SUCCESS_CODE) goto LAB_1808c3631;
    
    if (*(int32 )(lVar2 + 0x1d0) < 1) {
      iVar4 = MEMORY_ERROR_CODE;
    }
    else {
      if ((*(int32 )(lVar2 + 0x1d0) != 1) || (iVar4 = FUN_18084fcd0(lVar2 + 0x170), iVar4 == SUCCESS_CODE)) {
        *(int32 )(lVar2 + 0x1d0) = *(int32 )(lVar2 + 0x1d0) + -1;
        iVar4 = iVar11;
      }
      bVar16 = iVar4 == SUCCESS_CODE;
    }
    
    if (iVar4 == SUCCESS_CODE) {
      iVar4 = iVar10;
    }
    
    if (iVar4 != SUCCESS_CODE) goto LAB_1808c3631;
    
    if (0 < *(int32 )(lVar2 + 0x238)) {
      if ((*(int32 )(lVar2 + 0x238) != 1) || (iVar3 = FUN_180850690(lVar2 + 0x1d8), iVar3 == SUCCESS_CODE)) {
        *(int32 )(lVar2 + 0x238) = *(int32 )(lVar2 + 0x238) + -1;
        iVar3 = iVar11;
      }
      bVar17 = iVar3 == SUCCESS_CODE;
    }
    
    if (iVar3 == SUCCESS_CODE) {
      iVar3 = iVar12;
    }
    
    if (iVar3 != SUCCESS_CODE) goto LAB_1808c3648;
    
    iVar4 = FUN_1808bd690(lVar2);
    if (iVar4 != SUCCESS_CODE) goto LAB_1808c3631;
  }
  else {
LAB_1808c3631:
    iVar3 = iVar4;
    if (iVar4 != SUCCESS_CODE) goto LAB_1808c3648;
  }
  
  iVar3 = iVar12;
  
  // 设置输出参数
  if (in_stack_000000d8 != (UIntPtr)NULL_POINTER) {
    *in_stack_000000d8 = puVar6;
  }
LAB_1808c3648:
  
  // 执行清理操作
  if (!bVar17) {
    *(uint32 )(lStack0000000000000060 + 0x60) = 0;
    RenderingEngine_ShaderProcessor(lStack0000000000000060 + 0x30);
  }
  
  if (!bVar15) {
    *(uint32 )(lStack0000000000000068 + 0x60) = 0;
    SystemCore_CacheManager(lStack0000000000000068 + 0x30);
  }
  
  if (!bVar16) {
    *(uint32 )(lStack0000000000000070 + 0x60) = 0;
    SystemCore_CacheManager(lStack0000000000000070 + 0x30);
  }
  
  if (!bVar14) {
    *(uint32 )(lVar7 + 0x60) = 0;
    SystemCore_NetworkProcessor(lVar7 + 0x30);
  }
  
  return iVar3;
}

// ============================================================================
// 函数：FUN_1808c366a - 资源清理处理器
// 
// 功能说明：
// 执行资源清理操作，处理多个资源的释放和状态重置。
// 这是一个简化的资源清理函数。
//
// 参数：
//   无直接参数，使用寄存器变量传递参数
//
// 返回值：
//   uint32 - 清理结果状态码
//
// 技术说明：
// 该函数是一个简化的资源清理函数：
// 1. 执行多个资源的清理
// 2. 重置资源状态
// 3. 管理清理顺序
// 4. 返回清理状态
// ============================================================================
uint32 FUN_1808c366a(void)
{
  uint32 unaff_EBX;        // 未使用的寄存器变量
  int64 unaff_RDI;         // 未使用的寄存器变量
  uint32 unaff_R14D;       // 未使用的寄存器变量
  int8 cStack0000000000000040; // 栈变量
  int8 cStack0000000000000044; // 栈变量
  int8 in_stack_00000048;  // 栈变量
  int64 in_stack_00000060; // 栈变量
  int64 in_stack_00000068; // 栈变量
  int64 in_stack_00000070; // 栈变量
  
  // 执行多级资源清理
  *(uint32 *)(in_stack_00000060 + 0x60) = unaff_R14D;
  RenderingEngine_ShaderProcessor(in_stack_00000060 + 0x30);
  
  if (cStack0000000000000040 == 0) {
    *(uint32 *)(in_stack_00000068 + 0x60) = unaff_R14D;
    SystemCore_CacheManager(in_stack_00000068 + 0x30);
  }
  
  if (cStack0000000000000044 == 0) {
    *(uint32 )(in_stack_00000070 + 0x60) = unaff_R14D;
    SystemCore_CacheManager(in_stack_00000070 + 0x30);
  }
  
  if (in_stack_00000048 == 0) {
    *(uint32 )(unaff_RDI + 0x60) = unaff_R14D;
    SystemCore_NetworkProcessor(unaff_RDI + 0x30);
  }
  
  return unaff_EBX;
}

// ============================================================================
// 函数：FUN_1808c3700 - 对象销毁管理器
// 
// 功能说明：
// 销毁对象并释放相关资源，处理对象的生命周期管理。
// 支持完整的对象销毁流程。
//
// 参数：
//   param_1 - 对象容器指针，包含要销毁的对象集合
//   param_2 - 对象管理器指针，包含对象的管理信息
//
// 返回值：
//   uint64 - 销毁结果状态码，0表示成功，非0表示错误
//
// 技术说明：
// 该函数实现了对象销毁功能：
// 1. 执行对象清理
// 2. 释放对象内存
// 3. 管理对象关系
// 4. 处理错误状态
// ============================================================================
uint64 FUN_1808c3700(UIntPtr param_1, IntPtr param_2)
{
  int64 lVar1;             // 长整型变量
  uint64 uVar2;            // 返回值
  
  // 执行对象清理
  uVar2 = FUN_1808c3020(param_2);
  if ((int32)uVar2 == SUCCESS_CODE) {
    uVar2 = FUN_1808c41f0(*param_1, param_2);
    if ((int32)uVar2 == SUCCESS_CODE) {
      // 处理对象关系
      lVar1 = param_2[0xc];
      if (lVar1 != 0) {
        if (*(IntPtr **)(lVar1 + 8) != param_2) {
          return MEMORY_ERROR_CODE;
        }
        *(uint64 )(lVar1 + 8) = 0;
      }
      
      // 执行对象销毁
      ((*(code **)(*param_2 + 0x28))(param_2, 0));
      // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64 *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0), param_2, &memory_allocator_3008_ptr, 0x161, 1);
    }
  }
  
  return uVar2;
}

// ============================================================================
// 函数：FUN_1808c37a0 - 批量数据处理引擎
// 
// 功能说明：
// 执行批量数据处理操作，处理大量数据的高效处理。
// 支持多种数据处理模式和优化策略。
//
// 参数：
//   param_1 - 数据管理器指针，包含要处理的数据集合
//   param_2 - 处理参数，指定数据处理的参数
//
// 返回值：
//   uint64 - 处理结果状态码，0表示成功，非0表示错误
//
// 技术说明：
// 该函数实现了批量数据处理功能：
// 1. 执行数据查找和验证
// 2. 处理批量数据操作
// 3. 管理处理状态
// 4. 支持错误处理
// ============================================================================
uint64 FUN_1808c37a0(IntPtr param_1, uint64 param_2)
{
  uint32 uVar1;            // 无符号整型变量
  IntPtr plVar2;           // 整数指针
  uint64 uVar3;            // 返回值
  int64 lVar4;             // 长整型变量
  int32 iVar5;             // 整型变量
  int64 lVar6;             // 长整型变量
  int32 iVar7;             // 整型变量
  bool bVar8;              // 布尔变量
  uint64 uStack_30;        // 栈变量
  int32 aiStack_28[4];     // 栈数组
  
  // 初始化数据处理
  lVar4 = *param_1;
  lVar6 = *(int64 *)(lVar4 + 0x28);
  bVar8 = lVar6 == 0;
  
  if (bVar8) {
    lVar6 = 0;
  }
  else {
    SystemMemoryAllocator(lVar6);
  }
  
  // 执行数据查找
  plVar2 = (IntPtr)func_0x000180851be0(lVar4 + 0x30, param_2);
  if (plVar2 == (IntPtr)NULL_POINTER) {
    plVar2 = (IntPtr)func_0x000180851be0(lVar4, param_2);
  }
  
  if (!bVar8) {
    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar6);
  }
  
  if (plVar2 == (IntPtr)NULL_POINTER) {
    uVar3 = SUCCESS_CODE;
  }
  else {
    // 执行批量数据处理
    uStack_30 = 0xffffffffffffffff;
    aiStack_28[0] = INVALID_INDEX;
    NetworkSystem_ConnectionHandler(plVar2, &uStack_30, aiStack_28);
    
    if (aiStack_28[0] != INVALID_INDEX) {
      iVar7 = aiStack_28[0];
      iVar5 = (int32)uStack_30;
      
      do {
        do {
          // 处理单个数据项
          uVar3 = FUN_1808c3020(*(uint64 *)(plVar2[2] + 8 + (int64)iVar7 * NODE_SIZE_16));
          if ((int32)uVar3 != SUCCESS_CODE) {
            return uVar3;
          }
        } while ((iVar7 != INVALID_INDEX) &&
                (iVar7 = *(int32 *)(plVar2[2] + 4 + (int64)iVar7 * NODE_SIZE_16), iVar7 != INVALID_INDEX));
        
        // 更新处理索引
        iVar7 = iVar5 + 1;
        bVar8 = iVar5 != INVALID_INDEX;
        iVar5 = 0;
        if (bVar8) {
          iVar5 = iVar7;
        }
        
        // 继续处理有效节点
        if (iVar5 != (int32)plVar2[1]) {
          lVar4 = (int64)iVar5;
          do {
            if (*(int32 *)(*plVar2 + lVar4 * 4) != INVALID_INDEX) {
              iVar7 = *(int32 *)(*plVar2 + (int64)iVar5 * 4);
              goto LAB_1808c38c7;
            }
            iVar5 = iVar5 + 1;
            lVar4 = lVar4 + 1;
          } while (lVar4 != (int32)plVar2[1]);
        }
        iVar7 = INVALID_INDEX;
        iVar5 = iVar7;
LAB_1808c38c7:
      } while (iVar7 != INVALID_INDEX);
    }
    
    // 执行最终处理
    lVar4 = *param_1;
    lVar6 = *(int64 )(lVar4 + 0x28);
    if (lVar6 != 0) {
      SystemMemoryAllocator(lVar6);
    }
    
    uVar1 = func_0x0001808534b0(lVar4, plVar2 + 5);
    uVar3 = (uint64)uVar1;
    
    if (lVar6 != 0) {
      // WARNING: Subroutine does not return
      SystemMemoryManager(lVar6);
    }
    
    if (uVar1 == SUCCESS_CODE) {
      FUN_1808bbe80(plVar2);
      // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64 *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0), plVar2, &memory_allocator_3008_ptr, 0x172, 1);
    }
  }
  
  return uVar3;
}

// ============================================================================
// 函数：FUN_1808c37b9 - 数据处理器
// 
// 功能说明：
// 执行数据处理操作，类似于FUN_1808c37a0但使用寄存器变量。
// 处理数据的高效处理和验证。
//
// 参数：
//   无直接参数，使用寄存器变量传递参数
//
// 返回值：
//   uint64 - 处理结果状态码，0表示成功，非0表示错误
//
// 技术说明：
// 该函数是FUN_1808c37a0的变体，使用寄存器变量传递参数：
// 1. 执行相同的数据处理逻辑
// 2. 使用不同的参数传递方式
// 3. 支持相同的错误处理
// 4. 管理处理状态
// ============================================================================
uint64 FUN_1808c37b9(uint64 param_1, uint64 param_2)
{
  int64 lVar1;             // 长整型变量
  uint32 uVar2;            // 无符号整型变量
  IntPtr plVar3;           // 整数指针
  uint64 uVar4;            // 返回值
  int64 lVar5;             // 长整型变量
  int32 iVar6;             // 整型变量
  int32 iVar7;             // 整型变量
  int64 unaff_RDI;         // 未使用的寄存器变量
  IntPtr unaff_R12;        // 未使用的寄存器变量
  bool bVar8;              // 布尔变量
  int32 iStack0000000000000038; // 栈变量
  int32 in_stack_00000040; // 栈变量
  
  // 初始化数据处理（使用寄存器变量）
  lVar5 = *(int64 *)(unaff_RDI + 0x28);
  bVar8 = lVar5 == 0;
  
  if (bVar8) {
    lVar5 = 0;
  }
  else {
    SystemMemoryAllocator(lVar5);
  }
  
  // 执行数据查找（使用寄存器变量）
  plVar3 = (IntPtr)func_0x000180851be0(unaff_RDI + 0x30, param_2);
  if (plVar3 == (IntPtr)NULL_POINTER) {
    plVar3 = (IntPtr)func_0x000180851be0();
  }
  
  if (!bVar8) {
    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar5);
  }
  
  if (plVar3 == (IntPtr)NULL_POINTER) {
    uVar4 = SUCCESS_CODE;
  }
  else {
    // 执行批量数据处理
    _iStack0000000000000038 = 0xffffffffffffffff;
    in_stack_00000040 = INVALID_INDEX;
    NetworkSystem_ConnectionHandler(plVar3, &stack0x00000038, &stack0x00000040);
    
    if (in_stack_00000040 != INVALID_INDEX) {
      iVar7 = in_stack_00000040;
      iVar6 = iStack0000000000000038;
      
      do {
        do {
          // 处理单个数据项
          uVar4 = FUN_1808c3020(*(uint64 *)(plVar3[2] + 8 + (int64)iVar7 * NODE_SIZE_16));
          if ((int32)uVar4 != SUCCESS_CODE) {
            return uVar4;
          }
        } while ((iVar7 != INVALID_INDEX) &&
                (iVar7 = *(int32 )(plVar3[2] + 4 + (int64)iVar7 * NODE_SIZE_16), iVar7 != INVALID_INDEX));
        
        // 更新处理索引
        iVar7 = iVar6 + 1;
        bVar8 = iVar6 != INVALID_INDEX;
        iVar6 = 0;
        if (bVar8) {
          iVar6 = iVar7;
        }
        
        // 继续处理有效节点
        if (iVar6 != (int32)plVar3[1]) {
          lVar5 = (int64)iVar6;
          do {
            if (*(int32)(*plVar3 + lVar5 * 4) != INVALID_INDEX) {
              iVar7 = *(int32)(*plVar3 + (int64)iVar6 * 4);
              goto LAB_1808c38c7;
            }
            iVar6 = iVar6 + 1;
            lVar5 = lVar5 + 1;
          } while (lVar5 != (int32)plVar3[1]);
        }
        iVar7 = INVALID_INDEX;
        iVar6 = iVar7;
LAB_1808c38c7:
      } while (iVar7 != INVALID_INDEX);
    }
    
    // 执行最终处理（使用寄存器变量）
    lVar5 = *unaff_R12;
    lVar1 = *(int64 )(lVar5 + 0x28);
    if (lVar1 != 0) {
      SystemMemoryAllocator(lVar1);
    }
    
    uVar2 = func_0x0001808534b0(lVar5, plVar3 + 5);
    uVar4 = (uint64)uVar2;
    
    if (lVar1 != 0) {
      // WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
    
    if (uVar2 == SUCCESS_CODE) {
      FUN_1808bbe80(plVar3);
      // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64 *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0), plVar3, &memory_allocator_3008_ptr, 0x172, 1);
    }
  }
  
  return uVar4;
}

// ============================================================================
// 模块结束
// 
// 总结：
// 本模块实现了游戏引擎中的高级渲染系统和数据管理功能，包含：
// 1. 21个核心函数，涵盖渲染、数据处理、内存管理等多个方面
// 2. 复杂的链表和树形结构处理
// 3. 多级数据处理和验证
// 4. 高效的内存管理和资源清理
// 5. 完善的错误处理和状态管理
//
// 技术特点：
// - 高性能的数据处理算法
// - 复杂的状态管理机制
// - 灵活的错误处理策略
// - 完善的资源管理系统
//
// 适用场景：
// - 大型游戏引擎开发
// - 高性能图形渲染
// - 复杂数据结构管理
// - 系统级编程
// ============================================================================
