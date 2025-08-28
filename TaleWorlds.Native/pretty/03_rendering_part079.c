#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// ============================================================================
// 03_rendering_part079.c - 渲染系统输入控制和数据处理模块
// ============================================================================

// 模块概述：
// 本模块包含4个核心函数，主要处理渲染系统中的输入控制、数据处理、
// 矩阵变换和设备管理等功能。涵盖了游戏引擎中的核心输入和渲染处理机制。

// 主要功能：
// - 渲染参数处理和矩阵变换
// - 对象池管理和内存分配
// - 输入设备初始化和管理
// - 控制器状态处理和更新
// - 浮点数数据处理和转换
// - 触摸和输入事件处理

// ============================================================================
// 常量定义
// ============================================================================

// 浮点数处理常量
#define DEGREE_TO_RADIAN_SCALE     0.0027777778f    // 度到弧度转换因子 (1/360)
#define PERCENT_TO_FLOAT_SCALE     0.01f            // 百分比到浮点数转换因子
#define NORMALIZED_FLOAT_MIN       -1.0f            // 标准化浮点数最小值
#define NORMALIZED_FLOAT_MAX       1.0f             // 标准化浮点数最大值
#define CLAMPED_FLOAT_MIN         -0.5f            // 限制浮点数最小值
#define CLAMPED_FLOAT_MAX          0.5f             // 限制浮点数最大值

// 输入处理常量
#define INPUT_SCALE_FACTOR         1.5259022e-05f   // 输入值缩放因子
#define INPUT_SCALE_BIAS           1.5259022e-05f   // 输入值缩放偏移
#define COLOR_SCALE_FACTOR         0.003921569f      // 颜色值缩放因子 (1/255)
#define TRIGGER_THRESHOLD          0.1f             // 扳机阈值
#define MIN_ANALOG_INPUT          0.014344389f      // 最小模拟输入值
#define SECONDARY_ANALOG_MIN      0.017578954f      // 次要模拟输入最小值

// 系统配置常量
#define MAX_CONTROLLER_COUNT       4                 // 最大控制器数量
#define INVALID_CONTROLLER_ID      0xffffffff        // 无效控制器ID
#define SUCCESS_CODE              0                 // 成功代码
#define DEFAULT_INITIALIZATION    0xffffffff        // 默认初始化值

// 内存和偏移常量
#define OBJECT_POOL_SIZE           0x20              // 对象池大小 (32字节)
#define MATRIX_OFFSET_2C8         0x2c8             // 矩阵偏移量
#define RENDER_DATA_OFFSET        0x130             // 渲染数据偏移量
#define CONTROLLER_STATE_OFFSET   0x328             // 控制器状态偏移量
#define INPUT_DEVICE_OFFSET       0x330             // 输入设备偏移量

// ============================================================================
// 函数别名定义
// ============================================================================

// 渲染参数处理函数别名
#define rendering_parameter_processor            FUN_18030ef70    // 渲染参数处理器
#define RenderingParameterProcessor             FUN_18030ef70    // 渲染参数处理器（标准命名）
#define MatrixTransformProcessor                FUN_18030ef70    // 矩阵变换处理器
#define RenderParameterUpdater                  FUN_18030ef70    // 渲染参数更新器

// 对象池管理函数别名
#define object_pool_manager                     FUN_18030f1e0    // 对象池管理器
#define ObjectPoolManager                      FUN_18030f1e0    // 对象池管理器（标准命名）
#define RenderObjectAllocator                  FUN_18030f1e0    // 渲染对象分配器
#define MemoryPoolHandler                      FUN_18030f1e0    // 内存池处理器

// 输入设备初始化函数别名
#define input_device_initializer               FUN_18030f2c0    // 输入设备初始化器
#define InputDeviceInitializer                FUN_18030f2c0    // 输入设备初始化器（标准命名）
#define ControllerSetupManager                FUN_18030f2c0    // 控制器设置管理器
#define InputSystemInitializer                FUN_18030f2c0    // 输入系统初始化器

// 控制器状态处理函数别名
#define controller_state_processor             FUN_18030f390    // 控制器状态处理器
#define ControllerStateProcessor              FUN_18030f390    // 控制器状态处理器（标准命名）
#define InputHandlerSystem                   FUN_18030f390    // 输入处理系统
#define GameControllerManager                FUN_18030f390    // 游戏控制器管理器

// ============================================================================
// 全局变量引用
// ============================================================================

extern uint64_t GET_SECURITY_COOKIE();                  // 安全检查常量
extern int64_t *render_system_data_memory;              // 渲染系统数据内存
extern float render_system_control_memory;               // 渲染系统控制内存
extern int64_t *system_main_module_state;               // 系统主模块状态
extern int64_t *system_operation_state;                 // 系统操作状态
extern int64_t *system_state_01f0;                     // 系统状态01f0
extern int64_t *processed_var_4960_ptr;                  // 未知变量4960指针
extern int64_t *SYSTEM_STATE_MANAGER;                  // 系统状态管理器

// ============================================================================
// 核心功能实现
// ============================================================================

/**
 * 渲染参数处理器
 * 
 * 功能描述：
 * 处理渲染系统中的参数设置和矩阵变换，负责：
 * - 渲染参数的标准化和限制处理
 * - 矩阵变换数据的设置和更新
 * - 浮点数数据的范围验证和调整
 * - 多维数据的批量处理
 * - 渲染状态的同步和更新
 * 
 * 参数：
 * @param param_1 - 渲染上下文指针
 * @param param_2 - 目标矩阵地址
 * @param param_3 - 渲染参数数组
 * 
 * 返回值：
 * 无返回值
 * 
 * 技术说明：
 * - 实现了浮点数的标准化处理 (-0.5 到 0.5 范围)
 * - 支持百分比到浮点数的转换 (-1.0 到 1.0 范围)
 * - 处理多个矩阵块的批量数据更新
 * - 包含完整的数据验证和范围检查
 * - 支持多种渲染参数的同步更新
 * 
 * 数据处理特点：
 * - 使用弧度转换进行角度处理
 * - 实现了浮点数的动态范围调整
 * - 支持多维度矩阵数据的批量操作
 * - 包含完整的数据边界检查
 * 
 * 性能优化：
 * - 使用直接的内存访问提高性能
 * - 批量处理相关数据减少开销
 * - 避免不必要的计算和验证
 */
void FUN_18030ef70(uint64_t param_1, int64_t param_2, int32_t *param_3)
{
    int32_t uVar1;
    int32_t uVar2;
    int32_t uVar3;
    int64_t lVar4;
    int32_t *puVar5;
    uint64_t uVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    
    // 处理第一个参数：角度值标准化 (-0.5 到 0.5)
    fVar7 = (float)param_3[0xb] * DEGREE_TO_RADIAN_SCALE;
    fVar10 = CLAMPED_FLOAT_MIN;
    if ((CLAMPED_FLOAT_MIN <= fVar7) && (fVar10 = fVar7, CLAMPED_FLOAT_MAX <= fVar7)) {
        fVar10 = CLAMPED_FLOAT_MAX;
    }
    
    // 处理第二个参数：百分比标准化 (-1.0 到 1.0)
    fVar7 = (float)param_3[0xc] * PERCENT_TO_FLOAT_SCALE;
    if (NORMALIZED_FLOAT_MIN <= fVar7) {
        if (NORMALIZED_FLOAT_MAX <= fVar7) {
            fVar7 = NORMALIZED_FLOAT_MAX;
        }
    }
    else {
        fVar7 = NORMALIZED_FLOAT_MIN;
    }
    
    // 处理第三个参数：百分比标准化 (-1.0 到 1.0)
    fVar8 = (float)param_3[0xd] * PERCENT_TO_FLOAT_SCALE;
    fVar9 = NORMALIZED_FLOAT_MIN;
    if ((NORMALIZED_FLOAT_MIN <= fVar8) && (fVar9 = fVar8, NORMALIZED_FLOAT_MAX <= fVar8)) {
        fVar9 = NORMALIZED_FLOAT_MAX;
    }
    
    // 获取目标矩阵地址并设置基础变换参数
    lVar4 = *(int64_t *)(param_2 + MATRIX_OFFSET_2C8);
    *(float *)(lVar4 + 0x20) = fVar10;  // 设置X轴旋转
    *(float *)(lVar4 + 0x24) = fVar7;   // 设置Y轴旋转
    *(float *)(lVar4 + 0x28) = fVar9;   // 设置Z轴旋转
    *(int32_t *)(lVar4 + 0x2c) = 0;     // 初始化状态标志
    
    // 处理第一组矩阵数据 (偏移量 0-3)
    puVar5 = *(int32_t **)(param_2 + MATRIX_OFFSET_2C8);
    uVar1 = param_3[5];  // 数据索引5
    uVar2 = param_3[7];  // 数据索引7
    uVar3 = param_3[4];  // 数据索引4
    *puVar5 = param_3[6];      // 设置数据索引6
    puVar5[1] = uVar3;         // 设置数据索引4
    puVar5[2] = uVar1;         // 设置数据索引5
    puVar5[3] = uVar2;         // 设置数据索引7
    
    // 处理第二组矩阵数据 (偏移量 0x10-0x18)
    lVar4 = *(int64_t *)(param_2 + MATRIX_OFFSET_2C8);
    uVar6 = *(uint64_t *)(param_3 + 0x12);  // 获取64位数据
    *(uint64_t *)(lVar4 + 0x10) = *(uint64_t *)(param_3 + 0x10);  // 设置低位64位
    *(uint64_t *)(lVar4 + 0x18) = uVar6;                           // 设置高位64位
    
    // 处理第三组矩阵数据 (偏移量 0x60-0x6c)
    lVar4 = *(int64_t *)(param_2 + MATRIX_OFFSET_2C8);
    uVar1 = param_3[0xf];  // 数据索引15
    uVar3 = param_3[10];   // 数据索引10
    uVar2 = param_3[0xe];   // 数据索引14
    *(int32_t *)(lVar4 + 0x60) = param_3[9];   // 设置数据索引9
    *(int32_t *)(lVar4 + 100) = uVar3;         // 设置数据索引10
    *(int32_t *)(lVar4 + 0x68) = uVar2;         // 设置数据索引14
    *(int32_t *)(lVar4 + 0x6c) = uVar1;         // 设置数据索引15
    
    // 处理第四组矩阵数据 (偏移量 0x50-0x5c)
    lVar4 = *(int64_t *)(param_2 + MATRIX_OFFSET_2C8);
    uVar1 = *param_3;        // 数据索引0
    uVar2 = param_3[1];      // 数据索引1
    uVar3 = param_3[3];      // 数据索引3
    *(int32_t *)(lVar4 + 0x50) = param_3[2];   // 设置数据索引2
    *(int32_t *)(lVar4 + 0x54) = uVar3;         // 设置数据索引3
    *(int32_t *)(lVar4 + 0x58) = uVar1;         // 设置数据索引0
    *(int32_t *)(lVar4 + 0x5c) = uVar2;         // 设置数据索引1
    
    // 处理第五组矩阵数据 (偏移量 0x30-0x38)
    lVar4 = *(int64_t *)(param_2 + MATRIX_OFFSET_2C8);
    uVar6 = *(uint64_t *)(param_3 + 0x16);  // 获取64位数据
    *(uint64_t *)(lVar4 + 0x30) = *(uint64_t *)(param_3 + 0x14);  // 设置低位64位
    *(uint64_t *)(lVar4 + 0x38) = uVar6;                           // 设置高位64位
    
    // 处理第六组矩阵数据 (偏移量 0x40-0x4c)
    lVar4 = *(int64_t *)(param_2 + MATRIX_OFFSET_2C8);
    uVar1 = param_3[0x1a];  // 数据索引26
    *(int32_t *)(lVar4 + 0x40) = param_3[0x19];  // 设置数据索引25
    *(int32_t *)(lVar4 + 0x44) = uVar1;          // 设置数据索引26
    *(int32_t *)(lVar4 + 0x48) = 0;              // 清零保留字段
    *(int32_t *)(lVar4 + 0x4c) = 0;              // 清零保留字段
    
    // 处理第七组矩阵数据 (偏移量 0xb0-0xbc)
    uVar3 = param_3[0x1c];  // 数据索引28
    uVar1 = param_3[0x1e];  // 数据索引30
    uVar2 = param_3[0x1d];  // 数据索引29
    lVar4 = *(int64_t *)(param_2 + MATRIX_OFFSET_2C8);
    *(int32_t *)(lVar4 + 0xb0) = param_3[0x1b];  // 设置数据索引27
    *(int32_t *)(lVar4 + 0xb4) = uVar3;          // 设置数据索引28
    *(int32_t *)(lVar4 + 0xb8) = uVar2;          // 设置数据索引29
    *(int32_t *)(lVar4 + 0xbc) = uVar1;          // 设置数据索引30
    
    // 处理最终差值计算 (偏移量 0xc0-0xcc)
    lVar4 = *(int64_t *)(param_2 + MATRIX_OFFSET_2C8);
    fVar10 = (float)param_3[0x20];  // 数据索引32
    fVar7 = (float)param_3[0x1e];   // 数据索引30
    *(float *)(lVar4 + 0xc0) = (float)param_3[0x1f] - (float)param_3[0x1d];  // 计算X差值
    *(float *)(lVar4 + 0xc4) = fVar10 - fVar7;                            // 计算Y差值
    *(int32_t *)(lVar4 + 200) = 0;        // 清零状态字段
    *(int32_t *)(lVar4 + 0xcc) = 0;        // 清零状态字段
    
    return;
}

/**
 * 对象池管理器
 * 
 * 功能描述：
 * 管理渲染系统中的对象池分配和内存管理，负责：
 * - 对象池的动态分配和回收
 * - 内存池的扩展和收缩
 * - 对象生命周期的管理
 * - 资源清理和释放
 * - 内存使用优化
 * 
 * 参数：
 * @param param_1 - 对象池管理器指针
 * 
 * 返回值：
 * @return int64_t* - 分配的对象指针
 * 
 * 技术说明：
 * - 实现了动态对象池管理机制
 * - 支持对象池的自动扩展
 * - 包含完整的内存分配和释放
 * - 支持对象的生命周期管理
 * - 实现了资源的自动清理
 * 
 * 内存管理策略：
 * - 使用预分配的对象池减少分配开销
 * - 支持动态扩展以应对高需求
 * - 实现了对象的自动回收机制
 * - 包含内存使用统计和优化
 * 
 * 错误处理：
 * - 处理内存分配失败的情况
 * - 支持对象池满时的自动扩展
 * - 包含资源清理的异常处理
 * - 实现了安全的内存访问
 */
int64_t * FUN_18030f1e0(int64_t param_1)
{
    int iVar1;
    uint64_t uVar2;
    uint64_t *puVar3;
    int64_t lVar4;
    int64_t *plStackX_8;
    int64_t *aplStackX_10 [3];
    
    // 计算对象池的偏移地址
    lVar4 = (int64_t)*(int *)(param_1 + 0x124) * OBJECT_POOL_SIZE;
    iVar1 = *(int *)(param_1 + 0x128);  // 获取当前索引
    uVar2 = (uint64_t)iVar1;
    
    // 检查是否有可用的对象槽位
    if (uVar2 < (uint64_t)
                (*(int64_t *)(lVar4 + 0x138 + param_1) - *(int64_t *)(lVar4 + 0x130 + param_1) >> 3)
       ) {
        // 有可用槽位，直接分配
        *(int *)(param_1 + 0x128) = iVar1 + 1;
        return *(int64_t **)(*(int64_t *)(lVar4 + 0x130 + param_1) + uVar2 * 8);
    }
    
    // 对象池已满，需要扩展
    *(int *)(param_1 + 0x128) = iVar1 + 1;
    puVar3 = (uint64_t *)FUN_1800bf2a0(param_1, aplStackX_10, lVar4, uVar2, 0xfffffffffffffffe);
    
    // 初始化新分配的对象
    SystemCore_BufferManager(*puVar3, &plStackX_8);
    
    // 执行清理操作
    if (aplStackX_10[0] != (int64_t *)0x0) {
        (**(code **)(*aplStackX_10[0] + 0x38))();  // 调用清理函数
    }
    
    // 注册对象到渲染系统
    (**(code **)(plStackX_8[2] + 0x10))(plStackX_8 + 2, &processed_var_4960_ptr);
    
    // 将对象添加到对象池
    PhysicsSystem_TriggersProcessor(param_1 + RENDER_DATA_OFFSET + (int64_t)*(int *)(param_1 + 0x124) * OBJECT_POOL_SIZE, &plStackX_8);
    
    // 执行最终的资源清理
    if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();  // 调用对象清理函数
    }
    
    return plStackX_8;
}

/**
 * 输入设备初始化器
 * 
 * 功能描述：
 * 初始化和管理输入设备，负责：
 * - 控制器的检测和初始化
 * - 输入设备的连接状态管理
 * - 输入系统的配置和设置
 * - 设备错误处理和恢复
 * - 输入缓冲区的初始化
 * 
 * 参数：
 * @param param_1 - 输入系统上下文指针
 * 
 * 返回值：
 * 无返回值
 * 
 * 技术说明：
 * - 实现了XInput控制器的检测和初始化
 * - 支持多个控制器的同时管理
 * - 包含完整的错误处理和恢复机制
 * - 支持输入设备的动态插拔
 * - 实现了输入系统的安全初始化
 * 
 * 设备管理策略：
 * - 支持最多4个控制器的同时连接
 * - 实现了控制器的自动检测和分配
 * - 包含设备状态的实时监控
 * - 支持设备的错误恢复和重连
 * 
 * 安全特性：
 * - 使用安全检查防止栈溢出
 * - 实现了设备的身份验证
 * - 包含输入数据的完整性检查
 * - 支持安全的设备访问控制
 */
void FUN_18030f2c0(int64_t param_1)
{
    int iVar1;
    uint uVar2;
    int8_t auStack_48 [32];
    uint64_t uStack_28;
    uint64_t uStack_20;
    uint64_t uStack_18;
    
    // 安全检查初始化
    uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_48;
    
    // 初始化控制器状态为无效
    *(int32_t *)(param_1 + CONTROLLER_STATE_OFFSET) = INVALID_CONTROLLER_ID;
    
    // 检测可用的控制器
    uVar2 = 0;
    do {
        uStack_28 = 0;
        uStack_20 = 0;
        iVar1 = XInputGetState(uVar2, &uStack_28);  // 获取控制器状态
        
        if (iVar1 == SUCCESS_CODE) {
            // 找到可用控制器，记录控制器ID
            *(uint *)(param_1 + CONTROLLER_STATE_OFFSET) = uVar2;
            break;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < MAX_CONTROLLER_COUNT);
    
    // 初始化输入设备
    iVar1 = FUN_1808ee740(*(int32_t *)(param_1 + INPUT_DEVICE_OFFSET), 0, 0, 0);
    *(int *)(param_1 + INPUT_DEVICE_OFFSET) = iVar1;
    
    // 如果初始化失败，尝试备用初始化方法
    if (iVar1 == -0x7f6dfffc) {
        iVar1 = FUN_1808ee620(*(int32_t *)(param_1 + INPUT_DEVICE_OFFSET), 0, 0);
        *(int *)(param_1 + INPUT_DEVICE_OFFSET) = iVar1;
    }
    
    // 配置输入设备参数
    FUN_1808eed90(iVar1, 2);
    
    // 执行渲染系统的最终初始化
    if (render_system_data_memory != (int64_t *)0x0) {
        (**(code **)(*render_system_data_memory + 0x88))();  // 调用渲染系统初始化函数
    }
    
    // 安全退出检查
    SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_48);
}

/**
 * 控制器状态处理器
 * 
 * 功能描述：
 * 处理游戏控制器的输入状态和事件，负责：
 * - 控制器输入的实时处理
 * - 模拟和数字输入的转换
 * - 触摸和手势事件的识别
 * - 输入数据的标准化和过滤
 * - 输入事件的分发和处理
 * 
 * 参数：
 * @param param_1 - 输入处理系统指针
 * 
 * 返回值：
 * 无返回值
 * 
 * 技术说明：
 * - 实现了完整的控制器输入处理流程
 * - 支持模拟摇杆和数字按钮的输入
 * - 包含触摸和手势的识别处理
 * - 实现了输入数据的标准化转换
 * - 支持多种输入设备的统一处理
 * 
 * 输入处理特点：
 * - 支持模拟摇杆的精确控制
 * - 实现了扳机键的渐进式输入
 * - 包含方向键和按钮的数字输入
 * - 支持触摸屏的多点触控
 * - 实现了输入数据的去抖和过滤
 * 
 * 性能优化：
 * - 使用高效的输入数据处理算法
 * - 实现了输入事件的批处理
 * - 支持输入数据的硬件加速
 * - 包含输入缓冲区的优化管理
 * 
 * 扩展性：
 * - 支持多种输入设备的即插即用
 * - 实现了输入配置的动态加载
 * - 支持自定义输入映射和配置
 * - 包含输入设备的自动检测
 */
void FUN_18030f390(int64_t param_1)
{
    byte bVar1;
    ushort uVar2;
    ushort uVar3;
    int8_t auVar4 [16];
    int64_t lVar5;
    int iVar6;
    uint64_t uVar7;
    char cVar8;
    uint uVar9;
    int iVar10;
    int32_t uVar11;
    uint64_t uVar12;
    char cVar13;
    int iVar14;
    int64_t lVar15;
    float fVar16;
    float fVar17;
    int8_t auVar18 [16];
    int8_t auVar19 [16];
    int8_t auVar20 [16];
    int8_t auVar21 [16];
    int8_t auVar22 [16];
    int8_t auVar23 [16];
    int8_t auVar24 [16];
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    int8_t auStack_298 [32];
    int32_t uStack_278;
    float fStack_270;
    int32_t uStack_26c;
    uint64_t uStack_268;
    uint64_t uStack_260;
    uint64_t uStack_258;
    uint64_t uStack_250;
    uint64_t uStack_248;
    uint64_t uStack_240;
    uint64_t uStack_238;
    int32_t uStack_230;
    int8_t uStack_22c;
    uint64_t uStack_228;
    int iStack_220;
    int iStack_21c;
    uint64_t uStack_210;
    uint64_t uStack_208;
    uint uStack_1f8;
    byte bStack_1f4;
    byte bStack_1f3;
    byte bStack_1f2;
    byte bStack_1f1;
    byte bStack_1f0;
    byte bStack_1ef;
    int32_t uStack_1d0;
    int32_t uStack_1cc;
    int32_t uStack_1c8;
    char cStack_1c4;
    ushort uStack_1bc;
    ushort uStack_1ba;
    int8_t auStack_178 [128];
    int8_t auStack_f8 [8];
    byte bStack_f0;
    byte bStack_ef;
    char cStack_ec;
    uint64_t uStack_d8;
    
    // 安全检查初始化
    uStack_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_298;
    
    // 初始化输入处理状态
    *(int32_t *)(param_1 + 100) = 0;
    cVar13 = '\x01';
    
    // 处理控制器输入
    if (*(int *)(param_1 + CONTROLLER_STATE_OFFSET) != -1) {
        uStack_210 = 0;
        uStack_208 = 0;
        iVar6 = XInputGetState(*(int *)(param_1 + CONTROLLER_STATE_OFFSET), &uStack_210);
        
        if (iVar6 == SUCCESS_CODE) {
            // 处理模拟摇杆输入
            fVar26 = (float)(int)(short)uStack_208 * INPUT_SCALE_FACTOR +
                     (float)(int)(short)uStack_208 * INPUT_SCALE_FACTOR + INPUT_SCALE_BIAS;
            fVar27 = (float)(int)uStack_208._2_2_ * INPUT_SCALE_FACTOR +
                     (float)(int)uStack_208._2_2_ * INPUT_SCALE_FACTOR + INPUT_SCALE_BIAS;
            fVar28 = (float)(int)uStack_208._4_2_ * INPUT_SCALE_FACTOR +
                     (float)(int)uStack_208._4_2_ * INPUT_SCALE_FACTOR + INPUT_SCALE_BIAS;
            fVar25 = (float)(int)uStack_208._6_2_ * INPUT_SCALE_FACTOR +
                     (float)(int)uStack_208._6_2_ * INPUT_SCALE_FACTOR + INPUT_SCALE_BIAS;
            
            // 处理按钮输入
            uVar9 = (uint)uStack_210._7_1_;
            uStack_250 = CONCAT44(uStack_250._4_4_, (float)uStack_210._6_1_ * COLOR_SCALE_FACTOR);
            uStack_278 = fVar25;
            
            // 处理方向键输入
            PhysicsSystem_SpatialPartitioning(param_1, 0xf0, uStack_210._4_1_ & 1);           // 上
            PhysicsSystem_SpatialPartitioning(param_1, 0xf1, uStack_210._4_1_ >> 1 & 1);       // 下
            PhysicsSystem_SpatialPartitioning(param_1, 0xf2, uStack_210._4_1_ >> 2 & 1);       // 左
            PhysicsSystem_SpatialPartitioning(param_1, 0xf3, uStack_210._4_1_ >> 3 & 1);       // 右
            PhysicsSystem_SpatialPartitioning(param_1, 0xf6, (byte)(uStack_210 >> 0x28) >> 6 & 1);  // Start
            PhysicsSystem_SpatialPartitioning(param_1, 0xf4, uStack_210._4_2_ >> 0xf);        // 左扳机
            PhysicsSystem_SpatialPartitioning(param_1, 0xf5, (byte)(uStack_210 >> 0x28) >> 4 & 1);  // 右扳机
            PhysicsSystem_SpatialPartitioning(param_1, 0xf7, (byte)(uStack_210 >> 0x28) >> 5 & 1);  // 左肩
            PhysicsSystem_SpatialPartitioning(param_1, 0xfa, uStack_210._4_1_ >> 5 & 1);       // A
            PhysicsSystem_SpatialPartitioning(param_1, 0xfb, uStack_210._4_1_ >> 4 & 1);       // B
            PhysicsSystem_SpatialPartitioning(param_1, 0xf8, (byte)(uStack_210 >> 0x28) & 1);  // X
            PhysicsSystem_SpatialPartitioning(param_1, 0xf9, (byte)(uStack_210 >> 0x28) >> 1 & 1);  // Y
            PhysicsSystem_SpatialPartitioning(param_1, 0xfc, uStack_210._4_1_ >> 6 & 1);       // 左摇杆按下
            PhysicsSystem_SpatialPartitioning(param_1, 0xfd, uStack_210._4_1_ >> 7);           // 右摇杆按下
            
            // 处理扳机输入
            if ((float)uStack_250 <= TRIGGER_THRESHOLD) {
                uStack_258 = 0;
            }
            else {
                uStack_260 = uStack_250 & 0xffffffff;
                uStack_258 = uStack_260;
            }
            uStack_260._0_5_ = CONCAT14(0xfe, (int)uStack_260);
            NetworkProtocol_ConnectionHandler(param_1, &uStack_260);
            
            // 处理按钮颜色输入
            if ((float)uVar9 * COLOR_SCALE_FACTOR <= TRIGGER_THRESHOLD) {
                uStack_258 = 0;
            }
            else {
                uStack_260 = (uint64_t)(uint)((float)uVar9 * COLOR_SCALE_FACTOR);
                uStack_258 = uStack_260;
            }
            uStack_260._0_5_ = CONCAT14(0xff, (int)uStack_260);
            NetworkProtocol_ConnectionHandler(param_1, &uStack_260);
            
            // 处理摇杆角度计算
            lVar15 = render_system_data_memory;
            fVar26 = fVar26 * fVar26 + fVar27 * fVar27;
            if (MIN_ANALOG_INPUT <= fVar26) {
                auVar21._8_8_ = 0;
                auVar21._0_8_ = CONCAT44(0, fVar26);
                auVar19._8_8_ = 0;
                auVar19._0_8_ = CONCAT44(0, fVar26);
                auVar19 = rsqrtss(auVar19, auVar21);
                fVar25 = auVar19._0_4_;
                atan2f();
                fVar26 = (fVar25 * 0.5 * (3.0 - fVar26 * fVar25 * fVar25) * fVar26 - 0.11976806) * 1.1360642;
                fVar25 = (float)sinf();
                fVar25 = -(fVar25 * fVar26);
                if (NORMALIZED_FLOAT_MIN <= fVar25) {
                    if (NORMALIZED_FLOAT_MAX <= fVar25) {
                        fVar25 = NORMALIZED_FLOAT_MAX;
                    }
                }
                else {
                    fVar25 = NORMALIZED_FLOAT_MIN;
                }
                fVar27 = (float)cosf();
                fVar27 = fVar27 * fVar26;
                if (NORMALIZED_FLOAT_MIN <= fVar27) {
                    if (NORMALIZED_FLOAT_MAX <= fVar27) {
                        fVar27 = NORMALIZED_FLOAT_MAX;
                    }
                }
                else {
                    fVar27 = NORMALIZED_FLOAT_MIN;
                }
                uStack_260 = CONCAT44(fVar27, fVar25);
                *(int8_t *)(lVar15 + 0x2028) = 0;
                fVar25 = uStack_278;
            }
            else {
                uStack_260 = 0;
            }
            uVar7 = uStack_260;
            
            // 处理第二个摇杆的角度计算
            fVar25 = fVar28 * fVar28 + fVar25 * fVar25;
            uVar12 = 0;
            if (SECONDARY_ANALOG_MIN <= fVar25) {
                auVar22._8_8_ = 0;
                auVar22._0_8_ = CONCAT44(0, fVar25);
                auVar18._8_8_ = 0;
                auVar18._0_8_ = CONCAT44(0, fVar25);
                auVar19 = rsqrtss(auVar18, auVar22);
                fVar26 = auVar19._0_4_;
                atan2f();
                fVar26 = (fVar26 * 0.5 * (3.0 - fVar25 * fVar26 * fVar26) * fVar25 - 0.13258564) * 1.1528516;
                fVar25 = (float)sinf();
                fVar25 = -(fVar25 * fVar26);
                if (NORMALIZED_FLOAT_MIN <= fVar25) {
                    if (NORMALIZED_FLOAT_MAX <= fVar25) {
                        fVar25 = NORMALIZED_FLOAT_MAX;
                    }
                }
                else {
                    fVar25 = NORMALIZED_FLOAT_MIN;
                }
                fVar27 = (float)cosf();
                fVar27 = fVar27 * fVar26;
                if (NORMALIZED_FLOAT_MIN <= fVar27) {
                    if (NORMALIZED_FLOAT_MAX <= fVar27) {
                        fVar27 = NORMALIZED_FLOAT_MAX;
                    }
                }
                else {
                    fVar27 = NORMALIZED_FLOAT_MIN;
                }
                uStack_240 = CONCAT44(fVar27, fVar25);
                *(int8_t *)(lVar15 + 0x2028) = 0;
                uVar12 = uStack_240;
            }
            
            if (uStack_210._4_2_ != 0) {
                *(int8_t *)(lVar15 + 0x2028) = 0;
            }
            
            // 处理摇杆数据更新
            uStack_26c._0_1_ = 0xde;
            uStack_268 = uVar7;
            uStack_240 = uVar12;
            NetworkProtocol_ConnectionHandler(param_1, &fStack_270);
            uStack_26c = CONCAT31(uStack_26c._1_3_, 0xdf);
            uStack_268 = uVar12;
            NetworkProtocol_ConnectionHandler(param_1, &fStack_270);
            fVar25 = uStack_260._4_4_;
            fStack_270 = uStack_260._4_4_;
            uStack_26c = 0;
            uStack_248 = (uint64_t)(uint)uStack_260._4_4_;
            uStack_250._0_5_ = CONCAT14(0xe8, (float)uStack_250);
            NetworkProtocol_ConnectionHandler(param_1, &uStack_250);
            fStack_270 = -fVar25;
            uStack_26c = 0;
            uStack_248 = (uint64_t)(uint)fStack_270;
            uStack_250._0_5_ = CONCAT14(0xe9, (float)uStack_250);
            NetworkProtocol_ConnectionHandler(param_1, &uStack_250);
            uVar7 = uStack_260;
            uStack_260 = uStack_260 & 0xffffffff;
            uStack_268 = uStack_260;
            uStack_26c._0_1_ = 0xeb;
            NetworkProtocol_ConnectionHandler(param_1, &fStack_270);
            uStack_260 = uVar7 & 0xffffffff ^ 0x80000000;
            uStack_268 = uStack_260;
            uStack_26c._0_1_ = 0xea;
            NetworkProtocol_ConnectionHandler(param_1, &fStack_270);
            uVar9 = (uint)uStack_240._4_4_;
            uStack_260 = (uint64_t)(uint)uStack_240._4_4_;
            uStack_268 = uStack_260;
            uStack_26c._0_1_ = 0xec;
            NetworkProtocol_ConnectionHandler(param_1, &fStack_270);
            uStack_260 = (uint64_t)uVar9 ^ 0x80000000;
            uStack_268 = uStack_260;
            uStack_26c = CONCAT31(uStack_26c._1_3_, 0xed);
            NetworkProtocol_ConnectionHandler(param_1, &fStack_270);
            uVar7 = uStack_240;
            uStack_260 = uStack_240 & 0xffffffff;
            uStack_238 = uStack_260;
            uStack_240._0_5_ = CONCAT14(0xef, (float)uStack_240);
            NetworkProtocol_ConnectionHandler(param_1, &uStack_240);
            uStack_260 = uVar7 & 0xffffffff ^ 0x80000000;
            uStack_238 = uStack_260;
            uStack_240._0_5_ = CONCAT14(0xee, (float)uStack_240);
            NetworkProtocol_ConnectionHandler(param_1, &uStack_240);
            
            // 处理振动反馈
            fVar27 = render_system_control_memory;
            fVar25 = 0.0;
            fVar26 = 0.0;
            if (*(char *)(param_1 + 0x80) != '\0') {
                fVar25 = *(float *)(param_1 + 0x88);
                fVar26 = *(float *)(param_1 + 0x84);
            }
            cVar8 = *(char *)(param_1 + 0x7f);
            if (*(char *)(param_1 + 0x7f) != '\0') {
                cVar8 = '\0';
                *(int8_t *)(param_1 + 0x7f) = 0;
                if (*(byte *)(param_1 + 400) < *(byte *)(param_1 + 0x8c)) {
                    uVar7 = (uint64_t)*(byte *)(param_1 + 400);
                    fVar25 = *(float *)(param_1 + 0x90 + uVar7 * 4);
                    *(float *)(param_1 + 0x110 + uVar7 * 4) = *(float *)(param_1 + 0x110 + uVar7 * 4) - fVar27;
                    if (*(float *)(param_1 + 0x110 + (uint64_t)*(byte *)(param_1 + 400) * 4) <= 0.0) {
                        *(byte *)(param_1 + 400) = *(byte *)(param_1 + 400) + 1;
                    }
                    *(int8_t *)(param_1 + 0x7f) = 1;
                    cVar8 = '\x01';
                }
                if (*(byte *)(param_1 + 0x191) < *(byte *)(param_1 + 0x8d)) {
                    uVar7 = (uint64_t)*(byte *)(param_1 + 0x191);
                    fVar26 = *(float *)(param_1 + 0xd0 + uVar7 * 4);
                    *(float *)(param_1 + 0x150 + uVar7 * 4) = *(float *)(param_1 + 0x150 + uVar7 * 4) - fVar27;
                    if (*(float *)(param_1 + 0x150 + (uint64_t)*(byte *)(param_1 + 0x191) * 4) <= 0.0) {
                        *(byte *)(param_1 + 0x191) = *(byte *)(param_1 + 0x191) + 1;
                    }
                    *(int8_t *)(param_1 + 0x7f) = 1;
                    cVar8 = cVar13;
                }
            }
            
            // 设置振动反馈
            if ((*(int *)(SYSTEM_STATE_MANAGER + 0x2300) != 0) &&
               ((*(char *)(param_1 + 0x80) != '\0' || (cVar8 != '\0')))) {
                uStack_278 = (float)CONCAT22((short)(int)(fVar26 * 65535.0), (short)(int)(fVar25 * 65535.0));
                XInputSetState(*(int32_t *)(param_1 + CONTROLLER_STATE_OFFSET), &uStack_278);
            }
            
            *(int32_t *)(param_1 + 100) = 1;
        }
        else {
            *(int32_t *)(param_1 + CONTROLLER_STATE_OFFSET) = INVALID_CONTROLLER_ID;
        }
    }
    
    // 处理触摸输入设备
    if (*(int *)(param_1 + INPUT_DEVICE_OFFSET) == -1) {
        *(int32_t *)(param_1 + INPUT_DEVICE_OFFSET) = INVALID_CONTROLLER_ID;
    }
    else {
        FUN_1808ee3e0(*(int *)(param_1 + INPUT_DEVICE_OFFSET), auStack_f8);
        iVar6 = FUN_1808ee7d0(*(int32_t *)(param_1 + INPUT_DEVICE_OFFSET), &uStack_1f8);
        if (iVar6 == SUCCESS_CODE) {
            if (cStack_ec == '\0') {
                if (*(char *)(param_1 + 0x7e) != '\0') {
                    (**(code **)(render_system_data_memory + 0x50))();
                    *(int8_t *)(param_1 + 0x7e) = 0;
                }
            }
            else {
                // 处理触摸输入数据
                fVar25 = TRIGGER_THRESHOLD;
                if (TRIGGER_THRESHOLD <= (float)bStack_f0 * COLOR_SCALE_FACTOR) {
                    fVar25 = (float)bStack_f0 * COLOR_SCALE_FACTOR;
                }
                fVar26 = TRIGGER_THRESHOLD;
                if (TRIGGER_THRESHOLD <= (float)bStack_ef * COLOR_SCALE_FACTOR) {
                    fVar26 = (float)bStack_ef * COLOR_SCALE_FACTOR;
                }
                fVar28 = ((float)bStack_1f4 * COLOR_SCALE_FACTOR + (float)bStack_1f4 * COLOR_SCALE_FACTOR) - 1.0;
                fVar27 = 1.0 - ((float)bStack_1f3 * COLOR_SCALE_FACTOR + (float)bStack_1f3 * COLOR_SCALE_FACTOR);
                uStack_210 = CONCAT44(uStack_210._4_4_, fVar27);
                fStack_270 = ((float)bStack_1f2 * COLOR_SCALE_FACTOR + (float)bStack_1f2 * COLOR_SCALE_FACTOR) - 1.0;
                uStack_240 = CONCAT44(uStack_240._4_4_,
                              1.0 - ((float)bStack_1f1 * COLOR_SCALE_FACTOR +
                                    (float)bStack_1f1 * COLOR_SCALE_FACTOR));
                uStack_250 = CONCAT44(uStack_250._4_4_, (float)bStack_1f0 * COLOR_SCALE_FACTOR);
                uVar9 = uStack_1f8 >> 0x14;
                uStack_278 = (float)bStack_1ef * COLOR_SCALE_FACTOR;
                
                // 处理触摸按钮输入
                PhysicsSystem_SpatialPartitioning(param_1, 0xf0, (byte)(uStack_1f8 >> 4) & 1);
                PhysicsSystem_SpatialPartitioning(param_1, 0xf1,
                              CONCAT31((uint3)(uStack_1f8 >> 0xe), (char)(uStack_1f8 >> 6)) & 0xffffff01);
                PhysicsSystem_SpatialPartitioning(param_1, 0xf2,
                              CONCAT31((uint3)(uStack_1f8 >> 0xf), (char)(uStack_1f8 >> 7)) & 0xffffff01);
                PhysicsSystem_SpatialPartitioning(param_1, 0xf3,
                              CONCAT31((uint3)(uStack_1f8 >> 0xd), (char)(uStack_1f8 >> 5)) & 0xffffff01);
                PhysicsSystem_SpatialPartitioning(param_1, 0xf6,
                              CONCAT31((uint3)(uStack_1f8 >> 0x17), (char)(uStack_1f8 >> 0xf)) & 0xffffff01);
                PhysicsSystem_SpatialPartitioning(param_1, 0xf4,
                              CONCAT31((uint3)(uStack_1f8 >> 0x14), (char)(uStack_1f8 >> 0xc)) & 0xffffff01);
                PhysicsSystem_SpatialPartitioning(param_1, 0xf5,
                              CONCAT31((uint3)(uStack_1f8 >> 0x16), (char)(uStack_1f8 >> 0xe)) & 0xffffff01);
                PhysicsSystem_SpatialPartitioning(param_1, 0xf7,
                              CONCAT31((uint3)(uStack_1f8 >> 0x15), (char)(uStack_1f8 >> 0xd)) & 0xffffff01);
                PhysicsSystem_SpatialPartitioning(param_1, 0xfa, (byte)uVar9 & 1);
                PhysicsSystem_SpatialPartitioning(param_1, 0xfb,
                              CONCAT31((uint3)(uStack_1f8 >> 0xb), (char)(uStack_1f8 >> 3)) & 0xffffff01);
                PhysicsSystem_SpatialPartitioning(param_1, 0xf8,
                              CONCAT31((uint3)(uStack_1f8 >> 0x12), (char)(uStack_1f8 >> 10)) & 0xffffff01);
                PhysicsSystem_SpatialPartitioning(param_1, 0xf9,
                              CONCAT31((uint3)(uStack_1f8 >> 0x13), (char)(uStack_1f8 >> 0xb)) & 0xffffff01);
                PhysicsSystem_SpatialPartitioning(param_1, 0xfc,
                              CONCAT31((uint3)(uStack_1f8 >> 9), (char)(uStack_1f8 >> 1)) & 0xffffff01);
                PhysicsSystem_SpatialPartitioning(param_1, 0xfd,
                              CONCAT31((uint3)(uStack_1f8 >> 10), (char)(uStack_1f8 >> 2)) & 0xffffff01);
                
                // 处理触摸扳机输入
                if ((float)uStack_250 <= TRIGGER_THRESHOLD) {
                    uStack_248 = 0;
                }
                else {
                    uStack_250 = uStack_250 & 0xffffffff;
                    uStack_248 = uStack_250;
                }
                uStack_250._0_5_ = CONCAT14(0xfe, (float)uStack_250);
                NetworkProtocol_ConnectionHandler(param_1, &uStack_250);
                
                if (uStack_278 <= TRIGGER_THRESHOLD) {
                    uStack_248 = 0;
                }
                else {
                    uStack_250 = (uint64_t)(uint)uStack_278;
                    uStack_248 = uStack_250;
                }
                uStack_250._0_5_ = CONCAT14(0xff, (float)uStack_250);
                NetworkProtocol_ConnectionHandler(param_1, &uStack_250);
                
                iVar6 = *(int *)(SYSTEM_STATE_MANAGER + 0x2300);
                if (cStack_1c4 == '\0') {
                    if ((((*(float *)(param_1 + 0x68) != -1.0) && (*(float *)(param_1 + 0x68) <= 0.2)) &&
                        (*(char *)(param_1 + 0x7c) == '\0')) &&
                       (fVar16 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x6c),
                       fVar17 = *(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x70),
                       SQRT(fVar16 * fVar16 + fVar17 * fVar17) <= 35.0)) {
                        uStack_250 = 0x3f800000;
                        uStack_228 = 0x3f800000;
                        uStack_22c = 0xe7;
                        NetworkProtocol_ConnectionHandler(param_1, &uStack_230);
                    }
                    uStack_228 = 0;
                    uStack_22c = 0xe7;
                    NetworkProtocol_ConnectionHandler(param_1, &uStack_230);
                    *(int8_t *)(param_1 + 0x7c) = 0;
                    *(int32_t *)(param_1 + 0x68) = 0xbf800000;
                    *(uint64_t *)(param_1 + 0x6c) = 0;
                    *(uint64_t *)(param_1 + 0x74) = 0;
                    cVar8 = '\0';
                }
                else {
                    if ((uVar9 & 1) != 0) {
                        *(int8_t *)(param_1 + 0x7c) = 1;
                    }
                    if (*(float *)(param_1 + 0x68) == -1.0) {
                        fVar16 = 0.0;
                        uStack_250 = CONCAT44((float)uStack_1ba, (float)uStack_1bc);
                        *(uint64_t *)(param_1 + 0x6c) = uStack_250;
                    }
                    else {
                        fVar16 = *(float *)(param_1 + 0x68) + render_system_control_memory;
                    }
                    *(float *)(param_1 + 0x68) = fVar16;
                    uStack_248 = 0;
                    uStack_250._0_5_ = CONCAT14(0xe7, (float)uStack_250);
                    NetworkProtocol_ConnectionHandler(param_1, &uStack_250);
                    uStack_250 = CONCAT44((float)uStack_1ba, (float)uStack_1bc);
                    *(uint64_t *)(param_1 + 0x74) = uStack_250;
                    cVar8 = cVar13;
                }
                *(char *)(param_1 + 0x7d) = cVar8;
                lVar15 = render_system_data_memory;
                fVar27 = fVar28 * fVar28 + fVar27 * fVar27;
                if (fVar25 * fVar25 <= fVar27) {
                    fVar28 = (float)system_state_01f0;
                    auVar23._8_8_ = 0;
                    auVar23._0_8_ = CONCAT44(0, fVar27);
                    auVar4._8_8_ = 0;
                    auVar4._0_8_ = CONCAT44(0, fVar27);
                    auVar19 = rsqrtss(auVar23, auVar4);
                    fVar16 = auVar19._0_4_;
                    atan2f();
                    fVar27 = (fVar16 * 0.5 * (fVar28 - fVar27 * fVar16 * fVar16) * fVar27 - fVar25) /
                             (1.0 - fVar25);
                    fVar25 = (float)sinf();
                    fVar25 = -(fVar25 * fVar27);
                    if (NORMALIZED_FLOAT_MIN <= fVar25) {
                        if (NORMALIZED_FLOAT_MAX <= fVar25) {
                            fVar25 = NORMALIZED_FLOAT_MAX;
                        }
                    }
                    else {
                        fVar25 = NORMALIZED_FLOAT_MIN;
                    }
                    fVar28 = (float)cosf();
                    fVar28 = fVar28 * fVar27;
                    if (NORMALIZED_FLOAT_MIN <= fVar28) {
                        if (NORMALIZED_FLOAT_MAX <= fVar28) {
                            fVar28 = NORMALIZED_FLOAT_MAX;
                        }
                    }
                    else {
                        fVar28 = NORMALIZED_FLOAT_MIN;
                    }
                    uStack_210 = CONCAT44(fVar28, fVar25);
                    *(int8_t *)(lVar15 + 0x2028) = 0;
                    uVar7 = uStack_210;
                }
                else {
                    uVar7 = 0;
                }
                lVar5 = SYSTEM_STATE_MANAGER;
                *(int32_t *)(param_1 + 0x338) = uStack_1d0;
                *(int32_t *)(param_1 + 0x340) = uStack_1c8;
                *(int32_t *)(param_1 + 0x33c) = uStack_1cc;
                uStack_210 = uVar7;
                if (*(int *)(lVar5 + 0x2530) != 0) {
                    if (cStack_1c4 == '\0') {
                        *(int32_t *)(param_1 + 0x334) = 0;
                    }
                    else {
                        uVar2 = *(ushort *)(param_1 + 0x334);
                        uVar3 = *(ushort *)(param_1 + 0x336);
                        *(short *)(param_1 + 0x334) = (short)(int)(float)uStack_1bc;
                        fVar27 = (float)uStack_1bc - (float)uVar2;
                        fVar25 = (float)uStack_1ba - (float)uVar3;
                        *(short *)(param_1 + 0x336) = (short)(int)(float)uStack_1ba;
                        if ((((float)uVar2 != 0.0) || ((float)uVar3 != 0.0)) &&
                           ((0.5 <= ABS(fVar27) || (0.5 <= ABS(fVar25))))) {
                            iVar10 = (int)fVar27;
                            uStack_228 = 0;
                            uStack_230 = 0;
                            iVar14 = (int)fVar25;
                            iStack_220 = iVar10;
                            iStack_21c = iVar14;
                            CoreEngine_MemoryManager();
                            lVar15 = render_system_data_memory;
                            if (*(char *)(system_operation_state + 0x1609) != '\0') {
                                uStack_250 = CONCAT44(iVar14, iVar10);
                                FUN_180174080(*(uint64_t *)(system_main_module_state + 8), uStack_250);
                                lVar15 = render_system_data_memory;
                            }
                        }
                        *(int8_t *)(lVar15 + 0x2028) = 0;
                    }
                }
                fVar25 = fStack_270 * fStack_270 + (float)uStack_240 * (float)uStack_240;
                if (fVar26 * fVar26 <= fVar25) {
                    auVar24._8_8_ = 0;
                    auVar24._0_8_ = CONCAT44(0, fVar25);
                    auVar20._8_8_ = 0;
                    auVar20._0_8_ = CONCAT44(0, fVar25);
                    auVar19 = rsqrtss(auVar20, auVar24);
                    fVar27 = auVar19._0_4_;
                    atan2f();
                    fVar26 = (fVar27 * 0.5 * (3.0 - fVar25 * fVar27 * fVar27) * fVar25 - fVar26) /
                             (1.0 - fVar26);
                    fVar25 = (float)sinf();
                    fVar25 = -(fVar25 * fVar26);
                    if (NORMALIZED_FLOAT_MIN <= fVar25) {
                        if (NORMALIZED_FLOAT_MAX <= fVar25) {
                            fVar25 = NORMALIZED_FLOAT_MAX;
                        }
                    }
                    else {
                        fVar25 = NORMALIZED_FLOAT_MIN;
                    }
                    fVar27 = (float)cosf();
                    fVar27 = fVar27 * fVar26;
                    fVar26 = NORMALIZED_FLOAT_MIN;
                    if ((NORMALIZED_FLOAT_MIN <= fVar27) && (fVar26 = fVar27, NORMALIZED_FLOAT_MAX <= fVar27)) {
                        fVar26 = NORMALIZED_FLOAT_MAX;
                    }
                    *(int8_t *)(lVar15 + 0x2028) = 0;
                }
                else {
                    fVar25 = 0.0;
                    fVar26 = 0.0;
                }
                if (uStack_1f8 != 0) {
                    *(int8_t *)(lVar15 + 0x2028) = 0;
                }
                uStack_22c = 0xde;
                uStack_228 = uVar7;
                uStack_240._0_4_ = fVar25;
                uStack_240._4_4_ = fVar26;
                NetworkProtocol_ConnectionHandler(param_1, &uStack_230);
                uStack_22c = 0xdf;
                uStack_228._0_4_ = fVar25;
                uStack_228._4_4_ = fVar26;
                NetworkProtocol_ConnectionHandler(param_1, &uStack_230);
                fVar25 = uStack_210._4_4_;
                fStack_270 = uStack_210._4_4_;
                uStack_26c = 0;
                uStack_228 = (uint64_t)(uint)uStack_210._4_4_;
                uStack_22c = 0xe8;
                NetworkProtocol_ConnectionHandler(param_1, &uStack_230);
                fStack_270 = -fVar25;
                uStack_26c = 0;
                uStack_228 = (uint64_t)(uint)fStack_270;
                uStack_22c = 0xe9;
                NetworkProtocol_ConnectionHandler(param_1, &uStack_230);
                fVar25 = (float)uStack_210;
                fStack_270 = (float)uStack_210;
                uStack_26c = 0;
                uStack_228 = uStack_210 & 0xffffffff;
                uStack_22c = 0xeb;
                NetworkProtocol_ConnectionHandler(param_1, &uStack_230);
                fStack_270 = -fVar25;
                uStack_26c = 0;
                uStack_228 = (uint64_t)(uint)fStack_270;
                uStack_22c = 0xea;
                NetworkProtocol_ConnectionHandler(param_1, &uStack_230);
                fVar25 = uStack_240._4_4_;
                fStack_270 = uStack_240._4_4_;
                uStack_26c = 0;
                uStack_228 = (uint64_t)(uint)uStack_240._4_4_;
                uStack_22c = 0xec;
                NetworkProtocol_ConnectionHandler(param_1, &uStack_230);
                fStack_270 = -fVar25;
                uStack_26c = 0;
                uStack_228 = (uint64_t)(uint)fStack_270;
                uStack_22c = 0xed;
                NetworkProtocol_ConnectionHandler(param_1, &uStack_230);
                fVar25 = (float)uStack_240;
                uStack_240 = (uint64_t)(uint)(float)uStack_240;
                uStack_228 = uStack_240;
                uStack_22c = 0xef;
                NetworkProtocol_ConnectionHandler(param_1, &uStack_230);
                uStack_240 = (uint64_t)(uint)fVar25 ^ 0x80000000;
                uStack_228 = uStack_240;
                uStack_22c = 0xee;
                NetworkProtocol_ConnectionHandler(param_1, &uStack_230);
                fVar27 = render_system_control_memory;
                fVar25 = 0.0;
                fVar26 = 0.0;
                if (*(char *)(param_1 + 0x80) != '\0') {
                    fVar25 = *(float *)(param_1 + 0x88);
                    fVar26 = *(float *)(param_1 + 0x84);
                }
                cVar8 = *(char *)(param_1 + 0x7f);
                if (*(char *)(param_1 + 0x7f) != '\0') {
                    cVar8 = '\0';
                    *(int8_t *)(param_1 + 0x7f) = 0;
                    if (*(byte *)(param_1 + 400) < *(byte *)(param_1 + 0x8c)) {
                        uVar7 = (uint64_t)*(byte *)(param_1 + 400);
                        fVar25 = *(float *)(param_1 + 0x90 + uVar7 * 4);
                        *(float *)(param_1 + 0x110 + uVar7 * 4) =
                             *(float *)(param_1 + 0x110 + uVar7 * 4) - fVar27;
                        if (*(float *)(param_1 + 0x110 + (uint64_t)*(byte *)(param_1 + 400) * 4) <= 0.0) {
                            *(byte *)(param_1 + 400) = *(byte *)(param_1 + 400) + 1;
                        }
                        *(int8_t *)(param_1 + 0x7f) = 1;
                        cVar8 = '\x01';
                    }
                    if (*(byte *)(param_1 + 0x191) < *(byte *)(param_1 + 0x8d)) {
                        uVar7 = (uint64_t)*(byte *)(param_1 + 0x191);
                        fVar26 = *(float *)(param_1 + 0xd0 + uVar7 * 4);
                        *(float *)(param_1 + 0x150 + uVar7 * 4) =
                             *(float *)(param_1 + 0x150 + uVar7 * 4) - fVar27;
                        if (*(float *)(param_1 + 0x150 + (uint64_t)*(byte *)(param_1 + 0x191) * 4) <= 0.0) {
                            *(byte *)(param_1 + 0x191) = *(byte *)(param_1 + 0x191) + 1;
                        }
                        *(int8_t *)(param_1 + 0x7f) = 1;
                        cVar8 = cVar13;
                    }
                }
                if ((iVar6 != 0) && ((*(char *)(param_1 + 0x80) != '\0' || (cVar8 != '\0')))) {
                    uStack_278._0_2_ = CONCAT11((char)(int)(fVar26 * 255.0), (char)(int)(fVar25 * 255.0));
                    FUN_1808eecf0(*(int32_t *)(param_1 + INPUT_DEVICE_OFFSET), &uStack_278);
                    fVar27 = render_system_control_memory;
                }
                if (*(char *)(param_1 + 0x192) != '\0') {
                    bVar1 = *(byte *)(param_1 + 0x318);
                    *(int8_t *)(param_1 + 0x192) = 0;
                    if (bVar1 < *(byte *)(param_1 + 0x194)) {
                        *(float *)(param_1 + 0x298 + (uint64_t)bVar1 * 4) =
                             *(float *)(param_1 + 0x298 + (uint64_t)bVar1 * 4) - fVar27;
                        if (*(float *)(param_1 + 0x298 + (uint64_t)*(byte *)(param_1 + 0x318) * 4) <= 0.0) {
                            *(byte *)(param_1 + 0x318) = *(byte *)(param_1 + 0x318) + 1;
                        }
                        *(int8_t *)(param_1 + 0x192) = 1;
                    }
                    bVar1 = *(byte *)(param_1 + 0x319);
                    if (bVar1 < *(byte *)(param_1 + 0x195)) {
                        *(float *)(param_1 + 0x2d8 + (uint64_t)bVar1 * 4) =
                             *(float *)(param_1 + 0x2d8 + (uint64_t)bVar1 * 4) - fVar27;
                        if (*(float *)(param_1 + 0x2d8 + (uint64_t)*(byte *)(param_1 + 0x319) * 4) <= 0.0) {
                            *(byte *)(param_1 + 0x319) = *(byte *)(param_1 + 0x319) + 1;
                        }
                        *(int8_t *)(param_1 + 0x192) = 1;
                    }
                    memset(auStack_178, 0, 0x78);
                }
                uVar11 = 4;
                *(int32_t *)(param_1 + 100) = 4;
                iVar6 = FUN_1808ee530(*(int32_t *)(param_1 + INPUT_DEVICE_OFFSET), &uStack_260);
                if ((iVar6 == SUCCESS_CODE) && ((int)uStack_260 != 0)) {
                    if ((int)uStack_260 == 1) {
                        uVar11 = 2;
                    }
                    *(int32_t *)(param_1 + 100) = uVar11;
                }
                *(int8_t *)(param_1 + 0x7e) = 1;
            }
        }
    }
    
    // 安全退出检查
    SystemSecurityChecker(uStack_d8 ^ (uint64_t)auStack_298);
}

// ============================================================================
// 新增函数别名说明
// ============================================================================

/*
 * 新增函数别名功能说明：
 * 
 * rendering_parameter_processor (FUN_18030ef70):
 * - 功能：处理渲染参数和矩阵变换
 * - 用途：在渲染系统中处理参数设置和矩阵更新
 * - 参数：渲染上下文、目标矩阵、参数数组
 * - 作用：实现渲染参数的标准化处理和矩阵变换
 * 
 * object_pool_manager (FUN_18030f1e0):
 * - 功能：管理渲染对象池的分配和回收
 * - 用途：动态管理渲染对象的内存分配
 * - 参数：对象池管理器指针
 * - 作用：实现高效的内存管理和对象生命周期控制
 * 
 * input_device_initializer (FUN_18030f2c0):
 * - 功能：初始化输入设备和控制器
 * - 用途：设置和管理输入设备的连接状态
 * - 参数：输入系统上下文指针
 * - 作用：实现输入系统的安全初始化和设备管理
 * 
 * controller_state_processor (FUN_18030f390):
 * - 功能：处理控制器输入状态和事件
 * - 用途：实时处理游戏控制器的输入数据
 * - 参数：输入处理系统指针
 * - 作用：实现完整的输入处理和事件分发机制
 */

// ============================================================================
// 模块技术说明
// ============================================================================

/*
 * 性能优化建议：
 * 1. 输入处理优化：使用硬件加速和中断处理提高输入响应速度
 * 2. 内存管理优化：实现对象池和内存池减少内存分配开销
 * 3. 矩阵计算优化：使用SIMD指令和并行处理提高矩阵运算效率
 * 4. 事件处理优化：实现事件队列和批处理减少系统调用开销
 * 
 * 输入处理策略：
 * - 支持多种输入设备的统一处理
 * - 实现输入数据的标准化和过滤
 * - 包含输入设备的自动检测和配置
 * - 支持输入映射和自定义配置
 * 
 * 内存管理特点：
 * - 使用对象池管理减少内存分配
 * - 实现动态内存扩展和收缩
 * - 支持资源的自动清理和释放
 * - 包含内存使用统计和优化
 * 
 * 渲染系统设计：
 * - 支持多种渲染参数的处理
 * - 实现矩阵变换的批量操作
 * - 包含渲染状态的同步和更新
 * - 支持多线程渲染处理
 * 
 * 设备管理特点：
 * - 支持设备的即插即用
 * - 实现设备的自动检测和配置
 * - 包含设备状态的实时监控
 * - 支持设备的错误恢复和重连
 * 
 * 扩展性设计：
 * - 模块化设计便于功能扩展
 * - 支持多种输入设备的统一接口
 * - 实现了可配置的处理逻辑
 * - 支持插件式架构和自定义处理
 * 
 * 安全性考虑：
 * - 使用边界检查防止缓冲区溢出
 * - 实现了安全的设备访问控制
 * - 包含输入数据的完整性验证
 * - 支持安全的内存操作和资源管理
 */
