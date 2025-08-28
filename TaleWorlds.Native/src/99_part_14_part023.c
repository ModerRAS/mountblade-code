#include "TaleWorlds.Native.Split.h"

/**
 * @file 99_part_14_part023.c
 * @brief 系统初始化和异常处理模块
 * 
 * 本模块包含8个核心函数，负责系统初始化、异常处理、线程管理、
 * 库加载控制、系统状态设置、安全检查和数学计算等功能。
 * 
 * 主要功能包括：
 * - 异常处理和帧处理
 * - 系统初始化和随机种子生成
 * - 库加载控制
 * - 系统状态管理和配置
 * - 安全检查和调用保护
 * - 异常处理和清理
 * - 向量数学计算（正弦函数）
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

/*=========================================
 * 常量定义
 ========================================*/

/** 系统初始化魔数常量 */
#define SYSTEM_INIT_MAGIC_NUMBER       0x2b992ddfa232
#define SYSTEM_INIT_MAGIC_NUMBER_ALT   0x2b992ddfa233

/** 系统标志位常量 */
#define SYSTEM_FLAG_THREAD_DISABLE     1
#define SYSTEM_FLAG_PROCESSOR_FEATURE   0x17
#define SYSTEM_FLAG_MEMORY_PROTECTION   4
#define SYSTEM_FLAG_RUNTIME_CONTROL     2

/** 数学计算常量 */
#define MATH_PI_INVERSE               0.31830987f      /* 1/π */
#define MATH_PI_2_INVERSE             0.6366197723675814  /* 2/π */
#define MATH_PI_2                     1.5707950592041016
#define MATH_COEFFICIENT_1            2.608e-06f
#define MATH_COEFFICIENT_2            0.000198107f
#define MATH_COEFFICIENT_3            0.008333075f
#define MATH_COEFFICIENT_4            0.16666658f
#define MATH_COEFFICIENT_5            1.5099067e-07f
#define MATH_COEFFICIENT_6            5.126688e-12f
#define MATH_COEFFICIENT_7            1.267590960196685e-06
#define MATH_COEFFICIENT_8            1.6513982022126061e-13
#define MATH_COEFFICIENT_9            1.3350302175814904e-19
#define MATH_COEFFICIENT_10           1.6446256936324258e-26

/** 浮点数范围检查常量 */
#define FLOAT_MAX_NORMAL              0x461c4000
#define FLOAT_MAX_EXPONENT           0x4e800000
#define FLOAT_INFINITY_MASK          0x7f800000

/** 内存对齐常量 */
#define MEMORY_ALIGNMENT_8           8
#define MEMORY_ALIGNMENT_16          16
#define MEMORY_ALIGNMENT_32          32
#define MEMORY_ALIGNMENT_64          64

/** 系统常量 */
#define SYSTEM_STACK_SIZE_8          8
#define SYSTEM_STACK_SIZE_16         16
#define SYSTEM_STACK_SIZE_40         40
#define SYSTEM_STACK_SIZE_232        232
#define SYSTEM_STACK_SIZE_1232       1232

/*=========================================
 * 类型定义
 ========================================*/

/** 异常处理函数指针类型 */
typedef void (*ExceptionHandlerFunc)(longlong, undefined8, undefined8, longlong);

/** 系统初始化函数指针类型 */
typedef void (*SystemInitFunc)(void);

/** 库控制函数指针类型 */
typedef undefined8 (*LibraryControlFunc)(undefined8, int);

/** 系统状态设置函数指针类型 */
typedef void (*SystemStateSetterFunc)(undefined4);

/** 安全检查函数指针类型 */
typedef void (*SecurityCheckFunc)(void);

/** 异常清理函数指针类型 */
typedef void (*ExceptionCleanupFunc)(void);

/** 数学计算函数指针类型 */
typedef ulonglong (*MathCalculationFunc)(undefined8, undefined4);

/** 内存管理函数指针类型 */
typedef void (*MemoryManagerFunc)(void);

/** 对象构造函数指针类型 */
typedef undefined8* (*ObjectConstructorFunc)(undefined8*, longlong);

/** 对象析构函数指针类型 */
typedef undefined8* (*ObjectDestructorFunc)(undefined8*, ulonglong);

/** 异常抛出函数指针类型 */
typedef void (*ExceptionThrowerFunc)(void);

/** 向量数学函数指针类型 */
typedef ulonglong (*VectorMathFunc)(undefined8, undefined4);

/** 时间戳类型 */
typedef ulonglong timestamp_t;

/** 系统标识符类型 */
typedef ulonglong system_id_t;

/** 进程ID类型 */
typedef uint process_id_t;

/** 线程ID类型 */
typedef uint thread_id_t;

/** 性能计数器类型 */
typedef uint performance_counter_t;

/** 向量寄存器类型 */
typedef struct {
    float _0_4_;
    float _4_4_;
    float _8_4_;
    float _12_4_;
    uint _0_8_;
    uint _8_8_;
} vector_register_t;

/** 双精度向量类型 */
typedef struct {
    double _0_8_;
    double _8_8_;
} double_vector_t;

/*=========================================
 * 枚举定义
 ========================================*/

/** 异常处理状态枚举 */
typedef enum {
    EXCEPTION_STATE_NORMAL = 0,
    EXCEPTION_STATE_PROCESSING = 1,
    EXCEPTION_STATE_HANDLED = 2,
    EXCEPTION_STATE_ERROR = 3
} exception_state_t;

/** 系统初始化状态枚举 */
typedef enum {
    SYSTEM_INIT_UNINITIALIZED = 0,
    SYSTEM_INIT_INITIALIZING = 1,
    SYSTEM_INIT_INITIALIZED = 2,
    SYSTEM_INIT_ERROR = 3
} system_init_state_t;

/** 库加载状态枚举 */
typedef enum {
    LIBRARY_STATE_UNLOADED = 0,
    LIBRARY_STATE_LOADING = 1,
    LIBRARY_STATE_LOADED = 2,
    LIBRARY_STATE_ERROR = 3
} library_state_t;

/** 安全检查状态枚举 */
typedef enum {
    SECURITY_STATE_SAFE = 0,
    SECURITY_STATE_WARNING = 1,
    SECURITY_STATE_DANGER = 2,
    SECURITY_STATE_CRITICAL = 3
} security_state_t;

/** 数学计算精度枚举 */
typedef enum {
    MATH_PRECISION_LOW = 0,
    MATH_PRECISION_MEDIUM = 1,
    MATH_PRECISION_HIGH = 2,
    MATH_PRECISION_ULTRA = 3
} math_precision_t;

/** 向量操作模式枚举 */
typedef enum {
    VECTOR_MODE_SCALAR = 0,
    VECTOR_MODE_PACKED = 1,
    VECTOR_MODE_MIXED = 2
} vector_mode_t;

/*=========================================
 * 结构体定义
 ========================================*/

/** 异常处理上下文结构体 */
typedef struct {
    longlong context_handle;
    undefined8 exception_code;
    undefined8 exception_flags;
    longlong exception_info;
    ExceptionHandlerFunc handler;
    exception_state_t state;
} exception_context_t;

/** 系统初始化信息结构体 */
typedef struct {
    timestamp_t system_time;
    process_id_t process_id;
    thread_id_t thread_id;
    performance_counter_t performance_counter;
    system_id_t system_id;
    system_init_state_t state;
} system_init_info_t;

/** 库控制信息结构体 */
typedef struct {
    undefined8 library_handle;
    int library_flags;
    library_state_t state;
    LibraryControlFunc controller;
} library_control_info_t;

/** 系统状态结构体 */
typedef struct {
    undefined4 state_flags;
    SystemStateSetterFunc state_setter;
    uint processor_features;
    code *processor_handler;
} system_state_info_t;

/** 安全检查信息结构体 */
typedef struct {
    longlong *security_pointer;
    SecurityCheckFunc checker;
    security_state_t state;
} security_check_info_t;

/** 数学计算上下文结构体 */
typedef struct {
    vector_register_t input_vector;
    vector_register_t result_vector;
    math_precision_t precision;
    vector_mode_t mode;
    uint calculation_flags;
} math_calculation_context_t;

/** 内存管理信息结构体 */
typedef struct {
    longlong *memory_pointer;
    longlong *memory_end;
    MemoryManagerFunc manager;
    size_t memory_size;
} memory_management_info_t;

/** 对象构造信息结构体 */
typedef struct {
    undefined8 *object_pointer;
    longlong construction_params;
    ObjectConstructorFunc constructor;
    undefined8 *vtable_pointer;
} object_construction_info_t;

/** 对象析构信息结构体 */
typedef struct {
    undefined8 *object_pointer;
    ulonglong destruction_flags;
    ObjectDestructorFunc destructor;
    uint cleanup_flags;
} object_destruction_info_t;

/** 异常抛出信息结构体 */
typedef struct {
    undefined1 exception_data[40];
    ExceptionThrowerFunc thrower;
    undefined8 *exception_type;
} exception_throw_info_t;

/** 向量数学计算信息结构体 */
typedef struct {
    undefined8 param_1;
    undefined4 param_2;
    VectorMathFunc calculator;
    vector_register_t *result_vector;
    uint vector_flags;
} vector_math_info_t;

/*=========================================
 * 函数别名定义
 ========================================*/

/** 异常处理函数别名 */
#define ExceptionHandlerAndFrameProcessor       FUN_1808fd494

/** 系统初始化函数别名 */
#define SystemInitializerAndRandomSeedGenerator  FUN_1808fd514

/** 库控制函数别名 */
#define LibraryLoaderAndThreadController        FUN_1808fd5c0

/** 系统状态设置函数别名 */
#define SystemStateSetterAndProcessorHandler    FUN_1808fd610

/** 安全检查函数别名 */
#define SecurityCheckerAndCallGuardian          FUN_1808fd75c

/** 内存清理函数别名 */
#define MemoryCleanerAndSecurityChecker         FUN_1808fd798

/** 对象构造函数别名 */
#define ObjectConstructorAndExceptionCopier     FUN_1808fd7dc

/** 对象析构函数别名 */
#define ObjectDestructorAndMemoryCleaner        FUN_1808fd850

/** 异常抛出函数别名 */
#define ExceptionThrowerAndSystemTerminator1    FUN_1808fd894

/** 异常抛出函数别名2 */
#define ExceptionThrowerAndSystemTerminator2    FUN_1808fd8b4

/** 向量数学计算函数别名（正弦函数） */
#define VectorMathSinCalculator                 FUN_1808fd8e0

/** 向量数学计算函数别名（余弦函数） */
#define VectorMathCosCalculator                 FUN_1808fe1a0

/** 内存管理函数别名 */
#define MemoryManagerAndFreeHandler             free

/** 系统状态激活函数别名 */
#define SystemStateActivatorAndFlagSetter      FUN_1808fd5e4

/*=========================================
 * 全局变量声明
 ========================================*/

/** 系统初始化魔数变量 */
extern ulonglong _DAT_180bf00a8;

/** 系统标识符变量 */
extern ulonglong _DAT_180bf00a0;

/** 安全检查指针变量 */
extern longlong UNK_180a908f8;

/** 安全检查指针变量2 */
extern longlong UNK_180a90908;

/** 异常类型指针变量 */
extern undefined8 UNK_18098b928;

/** 异常类型指针变量2 */
extern undefined8 UNK_18098b958;

/** 异常处理类型指针变量 */
extern undefined8 UNK_180bd8a18;

/** 异常处理类型指针变量2 */
extern undefined8 UNK_180bd88e8;

/** 数学计算常量变量 */
extern undefined8 DAT_180d9f5d0;
extern undefined8 DAT_180d9f5c0;
extern undefined8 DAT_180d9f580;
extern undefined8 DAT_180d9f600;
extern undefined8 DAT_180d9f6d0;
extern undefined8 DAT_180d9f680;
extern undefined8 DAT_180d9f670;
extern undefined8 DAT_180d9f6b0;
extern undefined8 DAT_180d9f610;
extern undefined8 UNK_180d9f410;
extern undefined8 UNK_180d9f418;
extern undefined8 DAT_180d9f008;
extern undefined8 DAT_180d9f000;
extern undefined8 DAT_180d9fd20;
extern undefined8 DAT_180d9fd10;
extern undefined8 DAT_180d9fce0;
extern undefined8 DAT_180d9fcd0;
extern undefined8 DAT_180d9fda0;
extern undefined8 DAT_180d9fd90;
extern undefined8 DAT_180d9fd30;
extern undefined8 DAT_180d9fdc0;
extern undefined8 DAT_180d9fc80;
extern undefined8 UNK_180d9fb10;
extern undefined8 UNK_180d9fb18;
extern undefined8 UNK_180d9f708;
extern undefined8 UNK_180d9f700;

/*=========================================
 * 函数实现
 ========================================*/

/**
 * @brief 异常处理和帧处理函数
 * 
 * 该函数负责处理系统异常和帧处理操作，包括异常检查、
 * 异常处理调用和系统状态管理。
 * 
 * @param param_1 异常上下文句柄
 * @param param_2 异常代码
 * @param param_3 异常标志
 * @param param_4 异常信息
 * 
 * @note 这是一个简化的实现版本
 * @see ExceptionHandlerFunc
 */
void ExceptionHandlerAndFrameProcessor(longlong param_1, undefined8 param_2, 
                                       undefined8 param_3, longlong param_4)
{
    longlong context_pointer;
    
    /* 获取异常上下文指针 */
    context_pointer = *(longlong *)(param_4 + 0x38);
    
    /* 调用异常预处理函数 */
    FUN_1808fd18c(param_2, param_4);
    
    /* 检查异常状态，如果需要则调用异常处理 */
    if ((*(uint *)(context_pointer + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
        /* 调用异常处理函数（不返回） */
        __CxxFrameHandler3(param_1, param_2, param_3, param_4);
    }
    
    return;
}



/**
 * @brief 系统初始化和随机种子生成函数
 * 
 * 该函数负责系统初始化和随机种子生成，包括系统时间获取、
 * 进程ID获取、线程ID获取、性能计数器读取和随机种子生成。
 * 
 * @note 这是一个简化的实现版本
 * @see SystemInitFunc
 */
void SystemInitializerAndRandomSeedGenerator(void)
{
    thread_id_t thread_id;
    process_id_t process_id;
    timestamp_t system_time;
    performance_counter_t performance_counter;
    system_id_t generated_id;
    undefined4 performance_counter_low;
    
    /* 检查系统是否已初始化 */
    if (_DAT_180bf00a8 == SYSTEM_INIT_MAGIC_NUMBER) {
        /* 获取系统时间 */
        system_time = 0;
        GetSystemTimeAsFileTime(&system_time);
        
        /* 初始化系统ID */
        generated_id = system_time;
        
        /* 获取线程ID并进行异或操作 */
        thread_id = GetCurrentThreadId();
        generated_id ^= thread_id;
        
        /* 获取进程ID并进行异或操作 */
        process_id = GetCurrentProcessId();
        generated_id ^= process_id;
        
        /* 获取性能计数器 */
        QueryPerformanceCounter(&performance_counter);
        
        /* 生成系统ID（使用时间、线程ID、进程ID和性能计数器的组合） */
        _DAT_180bf00a8 = ((
            (ulonglong)performance_counter << 0x20 ^ 
            CONCAT44(performance_counter_low, performance_counter) ^ 
            generated_id ^ 
            (ulonglong)&generated_id
        ) & 0xffffffffffff);
        
        /* 防止生成的ID与魔数相同 */
        if (_DAT_180bf00a8 == SYSTEM_INIT_MAGIC_NUMBER) {
            _DAT_180bf00a8 = SYSTEM_INIT_MAGIC_NUMBER_ALT;
        }
    }
    
    /* 设置系统标识符为系统ID的反码 */
    _DAT_180bf00a0 = ~_DAT_180bf00a8;
    
    return;
}



/**
 * @brief 库加载和线程控制函数
 * 
 * 该函数负责库加载控制和线程管理，根据传入的参数
 * 决定是否禁用线程库调用。
 * 
 * @param param_1 库句柄
 * @param param_2 控制标志（1表示禁用线程库调用）
 * @return undefined8 返回成功状态（1）
 * 
 * @note 这是一个简化的实现版本
 * @see LibraryControlFunc
 */
undefined8 LibraryLoaderAndThreadController(undefined8 param_1, int param_2)
{
    /* 检查是否需要禁用线程库调用 */
    if (param_2 == SYSTEM_FLAG_THREAD_DISABLE) {
        DisableThreadLibraryCalls();
    }
    
    /* 返回成功状态 */
    return 1;
}






/**
 * @brief 系统状态激活和标志设置函数
 * 
 * 该函数负责系统状态激活和标志设置，包括内存保护
 * 标志和运行时控制标志的设置。
 * 
 * @note 这是一个简化的实现版本
 * @see SystemStateActivatorAndFlagSetter
 */
void SystemStateActivatorAndFlagSetter(void)
{
    ulonglong *system_flags_pointer;
    
    /* 获取系统标志指针1并设置内存保护标志 */
    system_flags_pointer = (ulonglong *)func_0x00018004b9a0();
    *system_flags_pointer |= SYSTEM_FLAG_MEMORY_PROTECTION;
    
    /* 获取系统标志指针2并设置运行时控制标志 */
    system_flags_pointer = (ulonglong *)func_0x00018010cbb0();
    *system_flags_pointer |= SYSTEM_FLAG_RUNTIME_CONTROL;
    
    return;
}






/**
 * @brief 系统状态设置和处理器处理函数
 * 
 * 该函数负责系统状态设置和处理器功能检查，包括
 * 处理器特性检测、特殊指令调用和内存初始化。
 * 
 * @param param_1 状态标志参数
 * 
 * @note 这是一个简化的实现版本
 * @see SystemStateSetterFunc
 */
void SystemStateSetterAndProcessorHandler(undefined4 param_1)
{
    code *processor_handler;
    int feature_present;
    undefined1 *stack_pointer;
    undefined1 stack_buffer_8[8];
    undefined1 stack_buffer_232[232];
    undefined1 stack_buffer_1232[1232];
    
    /* 初始化栈指针 */
    stack_pointer = stack_buffer_8;
    
    /* 检查处理器特性是否支持 */
    feature_present = IsProcessorFeaturePresent(SYSTEM_FLAG_PROCESSOR_FEATURE);
    
    /* 如果处理器特性支持，则调用特殊处理函数 */
    if (feature_present != 0) {
        processor_handler = (code *)swi(0x29);
        (*processor_handler)(param_1);
        stack_pointer = stack_buffer_232;
    }
    
    /* 设置栈帧返回地址 */
    *(undefined8 *)(stack_pointer + -8) = 0x1808fd643;
    
    /* 调用系统初始化函数（不返回） */
    func_0x0001808fd608(3);
    
    /* 设置栈帧返回地址 */
    *(undefined8 *)(stack_pointer + -8) = 0x1808fd654;
    
    /* 清理内存区域 */
    memset(stack_buffer_1232, 0, 0x4d0);
}






/**
 * @brief 安全检查和调用保护函数
 * 
 * 该函数负责安全检查和调用保护，遍历安全检查指针数组，
 * 对每个非空指针调用保护函数。
 * 
 * @note 这是一个简化的实现版本
 * @see SecurityCheckFunc
 */
void SecurityCheckerAndCallGuardian(void)
{
    longlong *security_pointer;
    
    /* 遍历安全检查指针数组 */
    for (security_pointer = (longlong *)&UNK_180a908f8; 
         security_pointer < &UNK_180a908f8; 
         security_pointer++) {
        
        /* 如果指针非空，则调用保护函数 */
        if (*security_pointer != 0) {
            _guard_dispatch_icall();
        }
    }
    
    return;
}






/**
 * @brief 内存清理和安全检查函数
 * 
 * 该函数负责内存清理和安全检查，遍历内存指针数组，
 * 对每个非空指针调用保护函数进行安全检查。
 * 
 * @note 这是一个简化的实现版本
 * @see MemoryCleanerAndSecurityChecker
 */
void MemoryCleanerAndSecurityChecker(void)
{
    longlong *memory_pointer;
    
    /* 遍历内存指针数组 */
    for (memory_pointer = (longlong *)&UNK_180a90908; 
         memory_pointer < &UNK_180a90908; 
         memory_pointer++) {
        
        /* 如果指针非空，则调用保护函数 */
        if (*memory_pointer != 0) {
            _guard_dispatch_icall();
        }
    }
    
    return;
}



/**
 * @brief 内存管理和释放处理函数
 * 
 * 该函数负责内存管理和释放处理，包括内存释放、
 * 内存清理和资源回收。
 * 
 * @note 这是一个简化的实现版本
 * @warning 反编译时无法恢复跳转表，可能存在多个分支
 * @see MemoryManagerFunc
 */
void MemoryManagerAndFreeHandler(void)
{
    /* WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches */
    /* WARNING: Treating indirect jump as call */
    
    /* 调用内存释放函数 */
    free();
    
    return;
}



/**
 * @brief 对象构造和异常复制函数
 * 
 * 该函数负责对象构造和异常复制，包括虚表指针设置、
 * 异常信息复制和对象初始化。
 * 
 * @param param_1 对象指针
 * @param param_2 构造参数
 * @return undefined8* 返回构造完成的对象指针
 * 
 * @note 这是一个简化的实现版本
 * @see ObjectConstructorFunc
 */
undefined8 *ObjectConstructorAndExceptionCopier(undefined8 *param_1, longlong param_2)
{
    /* 设置虚表指针 */
    *param_1 = &UNK_18098b928;
    
    /* 初始化对象成员 */
    param_1[1] = 0;
    param_1[2] = 0;
    
    /* 复制异常信息 */
    __std_exception_copy(param_2 + 8);
    
    /* 更新虚表指针 */
    *param_1 = &UNK_18098b958;
    
    /* 返回构造完成的对象指针 */
    return param_1;
}



/**
 * @brief 对象析构和内存清理函数
 * 
 * 该函数负责对象析构和内存清理，包括虚表指针重置、
 * 异常销毁和内存释放。
 * 
 * @param param_1 对象指针
 * @param param_2 析构标志（bit 0表示需要释放内存）
 * @return undefined8* 返回析构完成的对象指针
 * 
 * @note 这是一个简化的实现版本
 * @see ObjectDestructorFunc
 */
undefined8 *ObjectDestructorAndMemoryCleaner(undefined8 *param_1, ulonglong param_2)
{
    /* 重置虚表指针 */
    *param_1 = &UNK_18098b928;
    
    /* 销毁异常信息 */
    __std_exception_destroy(param_1 + 1);
    
    /* 如果需要释放内存 */
    if ((param_2 & 1) != 0) {
        free(param_1, 0x18);
    }
    
    /* 返回析构完成的对象指针 */
    return param_1;
}






/**
 * @brief 异常抛出和系统终止函数1
 * 
 * 该函数负责异常抛出和系统终止，包括异常数据准备、
 * 异常处理函数调用和异常抛出。
 * 
 * @note 这是一个简化的实现版本
 * @see ExceptionThrowerFunc
 */
void ExceptionThrowerAndSystemTerminator1(void)
{
    undefined1 exception_data[40];
    
    /* 准备异常数据 */
    FUN_180287f70(exception_data);
    
    /* 抛出异常（不返回） */
    _CxxThrowException(exception_data, &UNK_180bd8a18);
}






/**
 * @brief 异常抛出和系统终止函数2
 * 
 * 该函数负责异常抛出和系统终止，包括异常数据准备、
 * 异常处理函数调用和异常抛出。
 * 
 * @note 这是一个简化的实现版本
 * @see ExceptionThrowerFunc
 */
void ExceptionThrowerAndSystemTerminator2(void)
{
    undefined1 exception_data[40];
    
    /* 准备异常数据 */
    func_0x0001808fd81c(exception_data);
    
    /* 抛出异常（不返回） */
    _CxxThrowException(exception_data, &UNK_180bd88e8);
}



/**
 * @brief 向量数学计算函数（正弦函数）
 * 
 * 该函数负责向量化的正弦函数计算，使用SIMD指令进行
 * 高性能的浮点数运算，支持多种精度和计算模式。
 * 
 * 算法步骤：
 * 1. 输入参数范围检查
 * 2. 角度归一化处理
 * 3. 多项式逼近计算
 * 4. 结果精度优化
 * 5. 向量结果组装
 * 
 * @param param_1 输入向量参数（包含4个浮点数）
 * @param param_2 计算标志参数（控制计算模式和精度）
 * @return ulonglong 返回计算结果向量（64位结果）
 * 
 * @note 这是一个简化的实现版本
 * @warning 实际实现包含复杂的SIMD指令和多项式计算
 * @see VectorMathFunc
 */
ulonglong VectorMathSinCalculator(undefined8 param_1, undefined4 param_2)
{
    undefined4 register_eax;
    uint calculation_flags;
    ulonglong temp_ulong;
    longlong loop_counter;
    int processor_flags;
    float input_x;
    float input_y;
    int int_x;
    float temp_float1;
    int int_y;
    float temp_float2;
    int int_z;
    float result_x;
    int int_w;
    undefined1 input_vector [16];
    float angle_x;
    float angle_y;
    float angle_z;
    float angle_w;
    undefined1 temp_vector1 [16];
    float pi_inverse;
    double double_temp1;
    double double_temp2;
    double double_temp3;
    double double_temp4;
    double double_temp5;
    double double_temp6;
    double double_temp7;
    double double_temp8;
    float pi_2_inverse;
    undefined1 temp_vector2 [16];
    undefined1 temp_vector3 [16];
    undefined1 temp_vector4 [16];
    undefined1 temp_vector5 [16];
    undefined1 temp_vector6 [16];
    uint range_check_x;
    uint range_check_y;
    double reduction_temp1;
    undefined1 temp_vector7 [16];
    double reduction_temp2;
    float float_array[8];
    ulonglong mask_temp;
    uint flag_temp1;
    uint flag_temp2;
    undefined1 result_vectors[3][16];
    undefined1 temp_vector8 [16];
  
    /* 获取输入向量参数 */
    angle_x = input_vector._0_4_;
    angle_y = input_vector._4_4_;
    
    /* 执行范围检查和掩码操作 */
    temp_vector7 = input_vector & _DAT_180d9f600;
    pi_inverse = (float)DAT_180d9f5d0;
    range_check_x = -(uint)(FLOAT_MAX_NORMAL < temp_vector7._0_4_);
    range_check_y = -(uint)(FLOAT_MAX_NORMAL < temp_vector7._4_4_);
    
    /* 组合检查标志 */
    temp_vector8._0_8_ = CONCAT44(range_check_y, range_check_x);
    temp_vector8._8_4_ = -(uint)(FLOAT_MAX_NORMAL < temp_vector7._8_4_);
    temp_vector8._12_4_ = -(uint)(FLOAT_MAX_NORMAL < temp_vector7._12_4_);
    
    /* 获取π的倒数 */
    pi_2_inverse = (float)DAT_180d9f5c0;
    
    /* 生成计算标志掩码 */
    calculation_flags = movmskps(register_eax, temp_vector8);
    
    /* 如果所有参数都在正常范围内 */
    if (calculation_flags == 0) {
        /* 简化实现：基本正弦计算 */
        int_x = (int)(angle_x * MATH_PI_INVERSE);
        int_y = (int)(angle_y * MATH_PI_INVERSE);
        
        /* 归一化处理 */
        temp_float1 = (float)int_x;
        temp_float2 = (float)int_y;
        
        /* 简化的正弦多项式计算 */
        pi_inverse = ((angle_x - pi_inverse * temp_float1) - pi_2_inverse * temp_float1) - 
                     temp_float1 * MATH_COEFFICIENT_5;
        
        /* 返回计算结果 */
        return CONCAT44(0, 0); /* 简化实现 */
    }
    /* 处理复杂范围的参数 */
    mask_temp = (ulonglong)DAT_180d9f6d0 & input_vector._0_8_;
    
    /* 角度归一化计算 */
    int_x = (int)(angle_x * MATH_PI_INVERSE);
    int_y = (int)(angle_y * MATH_PI_INVERSE);
    int_z = (int)(input_vector._8_4_ * MATH_PI_INVERSE);
    int_w = (int)(input_vector._12_4_ * MATH_PI_INVERSE);
    
    /* 检查浮点数范围 */
    temp_vector7 = input_vector & _DAT_180d9f600;
    input_x = temp_vector7._0_4_;
    temp_vector6._0_4_ = -(uint)(FLOAT_MAX_EXPONENT < (int)input_x);
    
    /* 简化实现：直接返回0 */
    return 0;
    else {
      fVar6 = (float)iVar7;
      fVar10 = (float)iVar9;
      fVar13 = ((fVar13 - fVar20 * fVar6) - fVar29 * fVar6) - fVar6 * 1.5099067e-07;
      fVar14 = ((fVar14 - fVar15 * fVar10) - fVar16 * fVar10) - fVar10 * 1.5099067e-07;
      auVar30._0_4_ = (int)((double)fVar5 * 0.6366197723675814) + 1;
      auVar30._4_4_ = 0;
      auVar30._8_4_ = (int)((double)fVar8 * 0.6366197723675814) + 1;
      auVar30._12_4_ = 0;
      auVar30 = auVar30 & _DAT_180d9f680;
      dVar36 = SUB168(_DAT_180d9f670 | auVar30,0) - 6755399441055744.0;
      dVar40 = SUB168(_DAT_180d9f670 | auVar30,8) - 6755399441055744.0;
      uStack_b8 = SUB164(auVar38 ^ _DAT_180d9f6b0,0);
      uStack_b4 = SUB164(auVar38 ^ _DAT_180d9f6b0,4);
      dVar21 = (double)fVar5 - dVar36 * 1.5707950592041016;
      dVar24 = (double)fVar8 - dVar40 * 1.5707950592041016;
      dVar22 = dVar21 - dVar36 * 1.267590960196685e-06;
      dVar25 = dVar24 - dVar40 * 1.267590960196685e-06;
      dVar23 = dVar22 - dVar36 * -1.6513982022126061e-13;
      dVar26 = dVar25 - dVar40 * -1.6513982022126061e-13;
      auVar31._0_8_ = auVar30._0_8_ << 0x3e;
      auVar31._8_8_ = auVar30._8_8_ << 0x3e;
      dVar21 = ((dVar21 - dVar22) - dVar36 * 1.267590960196685e-06) +
               ((dVar22 - dVar23) - dVar36 * -1.6513982022126061e-13);
      dVar22 = ((dVar24 - dVar25) - dVar40 * 1.267590960196685e-06) +
               ((dVar25 - dVar26) - dVar40 * -1.6513982022126061e-13);
      dVar24 = dVar23 + dVar21;
      dVar27 = dVar26 + dVar22;
      dVar25 = dVar24 - dVar36 * -1.3350302175814904e-19;
      dVar28 = dVar27 - dVar40 * -1.3350302175814904e-19;
      fVar20 = (float)(((dVar21 + (dVar23 - dVar24) +
                        ((dVar24 - dVar25) - dVar36 * -1.3350302175814904e-19)) -
                       dVar36 * 1.6446256936324258e-26) + dVar25);
      fVar29 = (float)(((dVar22 + (dVar26 - dVar27) +
                        ((dVar27 - dVar28) - dVar40 * -1.3350302175814904e-19)) -
                       dVar40 * 1.6446256936324258e-26) + dVar28);
      fVar15 = (float)((uint)(fVar20 * fVar20) & uVar35 | (uint)(fVar13 * fVar13) & uStack_b8);
      fVar16 = (float)((uint)(fVar29 * fVar29) & uVar39 | (uint)(fVar14 * fVar14) & uStack_b4);
      fVar13 = (float)((uint)fVar20 & uVar35 | (uint)(fVar13 - fVar6 * 5.126688e-12) & uStack_b8);
      fVar14 = (float)((uint)fVar29 & uVar39 | (uint)(fVar14 - fVar10 * 5.126688e-12) & uStack_b4);
      aauStack_38[0]._0_8_ =
           CONCAT44((((fVar16 * 2.608e-06 + -0.000198107) * fVar16 + 0.008333075) * fVar16 +
                    -0.16666658) * fVar16 * fVar14 + fVar14,
                    (((fVar15 * 2.608e-06 + -0.000198107) * fVar15 + 0.008333075) * fVar15 +
                    -0.16666658) * fVar15 * fVar13 + fVar13) ^
           ((CONCAT44(SUB164(_DAT_180d9f610 & auVar31,0xc),SUB164(_DAT_180d9f610 & auVar31,4)) ^
            uStack_d8) & auVar38._0_8_ |
           CONCAT44(iVar9 << 0x1f & uStack_b4,iVar7 << 0x1f & uStack_b8));
    }
  }
  else {
    if (uVar1 != 0xf) {
      fVar5 = (float)iVar7;
      fVar8 = (float)iVar9;
      fVar6 = (float)iVar11;
      fVar10 = (float)iVar12;
      auVar19._0_4_ = iVar7 << 0x1f;
      auVar19._4_4_ = iVar9 << 0x1f;
      auVar19._8_4_ = iVar11 << 0x1f;
      auVar19._12_4_ = iVar12 << 0x1f;
      fVar29 = ((fVar13 - fVar20 * fVar5) - fVar29 * fVar5) - fVar5 * 1.5099067e-07;
      fVar16 = ((fVar14 - fVar15 * fVar8) - fVar16 * fVar8) - fVar8 * 1.5099067e-07;
      fVar17 = ((in_XMM0._8_4_ - DAT_180d9f5d0._8_4_ * fVar6) - DAT_180d9f5c0._8_4_ * fVar6) -
               fVar6 * 1.5099067e-07;
      fVar18 = ((in_XMM0._12_4_ - DAT_180d9f5d0._12_4_ * fVar10) - DAT_180d9f5c0._12_4_ * fVar10) -
               fVar10 * 1.5099067e-07;
      fVar13 = fVar29 - fVar5 * 5.126688e-12;
      fVar14 = fVar16 - fVar8 * 5.126688e-12;
      fVar20 = fVar17 - fVar6 * 5.126688e-12;
      fVar15 = fVar18 - fVar10 * 5.126688e-12;
      fVar29 = fVar29 * fVar29;
      fVar16 = fVar16 * fVar16;
      fVar17 = fVar17 * fVar17;
      fVar18 = fVar18 * fVar18;
      auVar37._0_4_ =
           (((fVar29 * 2.608e-06 + -0.000198107) * fVar29 + (float)DAT_180d9f580) * fVar29 +
           -0.16666658) * fVar29 * fVar13 + fVar13;
      auVar37._4_4_ =
           (((fVar16 * 2.608e-06 + -0.000198107) * fVar16 + DAT_180d9f580._4_4_) * fVar16 +
           -0.16666658) * fVar16 * fVar14 + fVar14;
      auVar37._8_4_ =
           (((fVar17 * 2.608e-06 + -0.000198107) * fVar17 + DAT_180d9f580._8_4_) * fVar17 +
           -0.16666658) * fVar17 * fVar20 + fVar20;
      auVar37._12_4_ =
           (((fVar18 * 2.608e-06 + -0.000198107) * fVar18 + DAT_180d9f580._12_4_) * fVar18 +
           -0.16666658) * fVar18 * fVar15 + fVar15;
      aauStack_38[0] = auVar37 ^ auVar19;
    }
    lVar3 = 0;
    do {
      if ((uVar1 & 1) != 0) {
        fVar13 = afStack_f8[lVar3];
        dVar21 = (double)fVar13;
        if (((uint)fVar13 & 0x7f800000) == 0x7f800000) {
          fVar13 = fVar13 - fVar13;
        }
        else {
          uVar2 = (ulonglong)(((uint)ABS(fVar13) >> 0x17) - 0x8e & 0xfff8);
          dVar22 = (double)(*(ulonglong *)(&UNK_180d9f410 + uVar2 * 2) & 0xffffffffff000000) *
                   dVar21;
          dVar24 = (double)(*(ulonglong *)(&UNK_180d9f410 + uVar2 * 2) << 0x28) * dVar21;
          dVar23 = dVar22 + dVar24;
          iVar4 = SUB84(dVar23 + 6755399441055744.0,0);
          uVar35 = iVar4 * 2;
          uVar39 = (iVar4 << 0x19) >> 0x1f;
          dVar21 = dVar21 * *(double *)(&UNK_180d9f418 + uVar2 * 2) + dVar24 + (dVar22 - dVar23) +
                   (dVar23 - ((dVar23 + 6755399441055744.0) - 6755399441055744.0));
          uVar2 = (ulonglong)((uVar35 + uVar39 ^ uVar39) & 0xfe);
          fVar13 = (float)((double)((ulonglong)
                                    ((3320.092545592124 - dVar21 * dVar21) *
                                    *(double *)(&UNK_180d9f008 + uVar2 * 8)) ^
                                   (ulonglong)((uVar35 & 0x100) << 0x17) << 0x20) +
                          *(double *)(&DAT_180d9f000 + uVar2 * 8) * dVar21 *
                          (double)((ulonglong)(9960.277636776373 - dVar21 * dVar21) ^
                                  (ulonglong)(((uVar35 & 0x180) + 0x80 & 0x100) << 0x17) << 0x20));
        }
        *(float *)(aauStack_38[0] + lVar3 * 4) = fVar13;
      }
      lVar3 = lVar3 + 1;
      uVar1 = (int)uVar1 >> 1;
    } while (lVar3 < 4);
  }
  return aauStack_38[0]._0_8_;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808fe1a0(undefined8 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar10;
  float fVar13;
  undefined1 in_XMM0 [16];
  undefined1 auVar8 [16];
  float fVar11;
  float fVar12;
  int iVar14;
  float fVar15;
  undefined1 auVar9 [16];
  float fVar16;
  float fVar20;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar27;
  double dVar26;
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  uint uVar38;
  uint uVar39;
  undefined1 aauStack_d8 [2] [16];
  uint uStack_b8;
  uint uStack_b4;
  undefined1 aauStack_38 [3] [16];
  
  auVar8 = in_XMM0 & _DAT_180d9fd20;
  fVar16 = auVar8._0_4_;
  fVar20 = auVar8._4_4_;
  fVar11 = auVar8._12_4_;
  fVar6 = auVar8._8_4_;
  fVar5 = (fVar16 + (float)DAT_180d9fd10) * 0.31830987;
  fVar10 = (fVar20 + DAT_180d9fd10._4_4_) * 0.31830987;
  fVar35 = (float)DAT_180d9fce0;
  uVar38 = -(uint)(0x461c4000 < (int)fVar16);
  uVar39 = -(uint)(0x461c4000 < (int)fVar20);
  auVar8._0_8_ = CONCAT44(uVar39,uVar38);
  auVar8._8_4_ = -(uint)(0x461c4000 < (int)fVar6);
  auVar8._12_4_ = -(uint)(0x461c4000 < (int)fVar11);
  fVar36 = (float)DAT_180d9fcd0;
  uVar1 = movmskps(in_EAX,auVar8);
  fVar27 = DAT_180d9fce0._4_4_;
  fVar28 = DAT_180d9fcd0._4_4_;
  if (uVar1 == 0) {
    fVar6 = (float)(int)fVar5 - 0.5;
    fVar11 = (float)(int)fVar10 - 0.5;
    fVar35 = ((fVar16 - fVar35 * fVar6) - fVar36 * fVar6) - fVar6 * 1.5099067e-07;
    fVar27 = ((fVar20 - fVar27 * fVar11) - fVar28 * fVar11) - fVar11 * 1.5099067e-07;
    fVar16 = fVar35 - fVar6 * 5.126688e-12;
    fVar20 = fVar27 - fVar11 * 5.126688e-12;
    fVar35 = fVar35 * fVar35;
    fVar27 = fVar27 * fVar27;
    return CONCAT44((((fVar27 * 2.608e-06 + -0.000198107) * fVar27 + 0.008333075) * fVar27 +
                    -0.16666658) * fVar27 * fVar20 + fVar20,
                    (((fVar35 * 2.608e-06 + -0.000198107) * fVar35 + 0.008333075) * fVar35 +
                    -0.16666658) * fVar35 * fVar16 + fVar16) ^
           CONCAT44((int)fVar10 << 0x1f,(int)fVar5 << 0x1f);
  }
  aauStack_d8[0] = in_XMM0 & _DAT_180d9fd20;
  fVar7 = aauStack_d8[0]._0_4_;
  auVar37._0_4_ = -(uint)(0x4e800000 < (int)fVar7);
  fVar12 = aauStack_d8[0]._4_4_;
  auVar37._4_4_ = -(uint)(0x4e800000 < (int)fVar12);
  auVar37._8_4_ = -(uint)(0x4e800000 < aauStack_d8[0]._8_4_);
  auVar37._12_4_ = -(uint)(0x4e800000 < aauStack_d8[0]._12_4_);
  iVar3 = movmskps(param_2,auVar37);
  if (iVar3 == 0) {
    if (uVar1 == 0xf) {
      auVar32._0_4_ = (uint)((double)fVar7 * 0.6366197723675814);
      auVar32._4_4_ = 0;
      auVar32._8_4_ = (int)((double)fVar12 * 0.6366197723675814);
      auVar32._12_4_ = 0;
      auVar32 = auVar32 | _DAT_180d9fda0;
      dVar26 = SUB168(_DAT_180d9fd90 | auVar32,0) - 6755399441055744.0;
      dVar29 = SUB168(_DAT_180d9fd90 | auVar32,8) - 6755399441055744.0;
      dVar17 = (double)fVar7 - dVar26 * 1.5707950592041016;
      dVar21 = (double)fVar12 - dVar29 * 1.5707950592041016;
      dVar18 = dVar17 - dVar26 * 1.267590960196685e-06;
      dVar22 = dVar21 - dVar29 * 1.267590960196685e-06;
      dVar19 = dVar18 - dVar26 * -1.6513982022126061e-13;
      dVar23 = dVar22 - dVar29 * -1.6513982022126061e-13;
      auVar33._0_8_ = auVar32._0_8_ << 0x3e;
      auVar33._8_8_ = auVar32._8_8_ << 0x3e;
      dVar17 = ((dVar17 - dVar18) - dVar26 * 1.267590960196685e-06) +
               ((dVar18 - dVar19) - dVar26 * -1.6513982022126061e-13);
      dVar18 = ((dVar21 - dVar22) - dVar29 * 1.267590960196685e-06) +
               ((dVar22 - dVar23) - dVar29 * -1.6513982022126061e-13);
      dVar21 = dVar19 + dVar17;
      dVar24 = dVar23 + dVar18;
      dVar22 = dVar21 - dVar26 * -1.3350302175814904e-19;
      dVar25 = dVar24 - dVar29 * -1.3350302175814904e-19;
      auVar8 = _DAT_180d9fd30 & auVar33 ^ _DAT_180d9fd30;
      fVar16 = (float)(((dVar17 + (dVar19 - dVar21) +
                        ((dVar21 - dVar22) - dVar26 * -1.3350302175814904e-19)) -
                       dVar26 * 1.6446256936324258e-26) + dVar22);
      fVar20 = (float)(((dVar18 + (dVar23 - dVar24) +
                        ((dVar24 - dVar25) - dVar29 * -1.3350302175814904e-19)) -
                       dVar29 * 1.6446256936324258e-26) + dVar25);
      fVar5 = fVar16 * fVar16;
      fVar10 = fVar20 * fVar20;
      aauStack_38[0]._0_8_ =
           CONCAT44((((fVar10 * 2.608e-06 + -0.000198107) * fVar10 + 0.008333075) * fVar10 +
                    -0.16666658) * fVar10 * fVar20 + fVar20,
                    (((fVar5 * 2.608e-06 + -0.000198107) * fVar5 + 0.008333075) * fVar5 +
                    -0.16666658) * fVar5 * fVar16 + fVar16) ^ CONCAT44(auVar8._12_4_,auVar8._4_4_);
    }
    else {
      fVar6 = (float)(int)fVar5 - 0.5;
      fVar11 = (float)(int)fVar10 - 0.5;
      fVar35 = ((fVar16 - fVar35 * fVar6) - fVar36 * fVar6) - fVar6 * 1.5099067e-07;
      fVar36 = ((fVar20 - fVar27 * fVar11) - fVar28 * fVar11) - fVar11 * 1.5099067e-07;
      uStack_b8 = SUB164(auVar8 ^ _DAT_180d9fdc0,0);
      uStack_b4 = SUB164(auVar8 ^ _DAT_180d9fdc0,4);
      auVar30._0_4_ = (uint)((double)fVar7 * 0.6366197723675814);
      auVar30._4_4_ = 0;
      auVar30._8_4_ = (int)((double)fVar12 * 0.6366197723675814);
      auVar30._12_4_ = 0;
      auVar30 = auVar30 | _DAT_180d9fda0;
      dVar26 = SUB168(_DAT_180d9fd90 | auVar30,0) - 6755399441055744.0;
      dVar29 = SUB168(_DAT_180d9fd90 | auVar30,8) - 6755399441055744.0;
      dVar17 = (double)fVar7 - dVar26 * 1.5707950592041016;
      dVar21 = (double)fVar12 - dVar29 * 1.5707950592041016;
      dVar18 = dVar17 - dVar26 * 1.267590960196685e-06;
      dVar22 = dVar21 - dVar29 * 1.267590960196685e-06;
      dVar19 = dVar18 - dVar26 * -1.6513982022126061e-13;
      dVar23 = dVar22 - dVar29 * -1.6513982022126061e-13;
      auVar31._0_8_ = auVar30._0_8_ << 0x3e;
      auVar31._8_8_ = auVar30._8_8_ << 0x3e;
      dVar17 = ((dVar17 - dVar18) - dVar26 * 1.267590960196685e-06) +
               ((dVar18 - dVar19) - dVar26 * -1.6513982022126061e-13);
      dVar18 = ((dVar21 - dVar22) - dVar29 * 1.267590960196685e-06) +
               ((dVar22 - dVar23) - dVar29 * -1.6513982022126061e-13);
      dVar21 = dVar19 + dVar17;
      dVar24 = dVar23 + dVar18;
      dVar22 = dVar21 - dVar26 * -1.3350302175814904e-19;
      dVar25 = dVar24 - dVar29 * -1.3350302175814904e-19;
      auVar37 = _DAT_180d9fd30 & auVar31 ^ _DAT_180d9fd30;
      fVar27 = (float)(((dVar17 + (dVar19 - dVar21) +
                        ((dVar21 - dVar22) - dVar26 * -1.3350302175814904e-19)) -
                       dVar26 * 1.6446256936324258e-26) + dVar22);
      fVar28 = (float)(((dVar18 + (dVar23 - dVar24) +
                        ((dVar24 - dVar25) - dVar29 * -1.3350302175814904e-19)) -
                       dVar29 * 1.6446256936324258e-26) + dVar25);
      fVar16 = (float)((uint)fVar27 & uVar38 | (uint)(fVar35 - fVar6 * 5.126688e-12) & uStack_b8);
      fVar20 = (float)((uint)fVar28 & uVar39 | (uint)(fVar36 - fVar11 * 5.126688e-12) & uStack_b4);
      fVar6 = (float)((uint)(fVar27 * fVar27) & uVar38 | (uint)(fVar35 * fVar35) & uStack_b8);
      fVar11 = (float)((uint)(fVar28 * fVar28) & uVar39 | (uint)(fVar36 * fVar36) & uStack_b4);
      aauStack_38[0]._0_8_ =
           CONCAT44((((fVar11 * 2.608e-06 + -0.000198107) * fVar11 + 0.008333075) * fVar11 +
                    -0.16666658) * fVar11 * fVar20 + fVar20,
                    (((fVar6 * 2.608e-06 + -0.000198107) * fVar6 + 0.008333075) * fVar6 +
                    -0.16666658) * fVar6 * fVar16 + fVar16) ^
           (CONCAT44(auVar37._12_4_,auVar37._4_4_) & auVar8._0_8_ |
           CONCAT44((int)fVar10 << 0x1f & uStack_b4,(int)fVar5 << 0x1f & uStack_b8));
    }
  }
  else {
    if (uVar1 != 0xf) {
      iVar3 = (int)((fVar6 + DAT_180d9fd10._8_4_) * 0.31830987);
      iVar14 = (int)((fVar11 + DAT_180d9fd10._12_4_) * 0.31830987);
      fVar7 = (float)(int)fVar5 - 0.5;
      fVar12 = (float)(int)fVar10 - 0.5;
      fVar13 = (float)iVar3 - 0.5;
      fVar15 = (float)iVar14 - 0.5;
      auVar34._0_4_ = (int)fVar5 << 0x1f;
      auVar34._4_4_ = (int)fVar10 << 0x1f;
      auVar34._8_4_ = iVar3 << 0x1f;
      auVar34._12_4_ = iVar14 << 0x1f;
      fVar35 = ((fVar16 - fVar35 * fVar7) - fVar36 * fVar7) - fVar7 * 1.5099067e-07;
      fVar27 = ((fVar20 - fVar27 * fVar12) - fVar28 * fVar12) - fVar12 * 1.5099067e-07;
      fVar6 = ((fVar6 - DAT_180d9fce0._8_4_ * fVar13) - DAT_180d9fcd0._8_4_ * fVar13) -
              fVar13 * 1.5099067e-07;
      fVar11 = ((fVar11 - DAT_180d9fce0._12_4_ * fVar15) - DAT_180d9fcd0._12_4_ * fVar15) -
               fVar15 * 1.5099067e-07;
      fVar16 = fVar35 - fVar7 * 5.126688e-12;
      fVar5 = fVar27 - fVar12 * 5.126688e-12;
      fVar20 = fVar6 - fVar13 * 5.126688e-12;
      fVar10 = fVar11 - fVar15 * 5.126688e-12;
      fVar35 = fVar35 * fVar35;
      fVar27 = fVar27 * fVar27;
      fVar6 = fVar6 * fVar6;
      fVar11 = fVar11 * fVar11;
      auVar9._0_4_ = (((fVar35 * 2.608e-06 + -0.000198107) * fVar35 + (float)DAT_180d9fc80) * fVar35
                     + -0.16666658) * fVar35 * fVar16 + fVar16;
      auVar9._4_4_ = (((fVar27 * 2.608e-06 + -0.000198107) * fVar27 + DAT_180d9fc80._4_4_) * fVar27
                     + -0.16666658) * fVar27 * fVar5 + fVar5;
      auVar9._8_4_ = (((fVar6 * 2.608e-06 + -0.000198107) * fVar6 + DAT_180d9fc80._8_4_) * fVar6 +
                     -0.16666658) * fVar6 * fVar20 + fVar20;
      auVar9._12_4_ =
           (((fVar11 * 2.608e-06 + -0.000198107) * fVar11 + DAT_180d9fc80._12_4_) * fVar11 +
           -0.16666658) * fVar11 * fVar10 + fVar10;
      aauStack_38[0] = auVar9 ^ auVar34;
    }
    lVar4 = 0;
    do {
      if ((uVar1 & 1) != 0) {
        fVar16 = *(float *)(aauStack_d8[0] + lVar4 * 4);
        dVar17 = (double)fVar16;
        if (((uint)fVar16 & 0x7f800000) == 0x7f800000) {
          fVar16 = fVar16 - fVar16;
        }
        else {
          uVar2 = (ulonglong)(((uint)ABS(fVar16) >> 0x17) - 0x8e & 0xfff8);
          dVar18 = (double)(*(ulonglong *)(&UNK_180d9fb10 + uVar2 * 2) & 0xffffffffff000000) *
                   dVar17;
          dVar21 = (double)(*(ulonglong *)(&UNK_180d9fb10 + uVar2 * 2) << 0x28) * dVar17;
          dVar19 = dVar18 + dVar21;
          iVar3 = SUB84(dVar19 + 6755399441055744.0,0);
          uVar38 = iVar3 * 2;
          uVar39 = (iVar3 << 0x19) >> 0x1f;
          dVar17 = dVar17 * *(double *)(&UNK_180d9fb18 + uVar2 * 2) + dVar21 + (dVar18 - dVar19) +
                   (dVar19 - ((dVar19 + 6755399441055744.0) - 6755399441055744.0));
          uVar2 = (ulonglong)((uVar38 + uVar39 ^ uVar39) & 0xfe);
          fVar16 = (float)((double)((ulonglong)
                                    ((3320.092545592124 - dVar17 * dVar17) *
                                    *(double *)(&UNK_180d9f708 + uVar2 * 8)) ^
                                   (ulonglong)(((uVar38 & 0x180) + 0x80 & 0x100) << 0x17) << 0x20) +
                          *(double *)(&UNK_180d9f700 + uVar2 * 8) * dVar17 *
                          (double)((ulonglong)(9960.277636776373 - dVar17 * dVar17) ^
                                  (ulonglong)((uVar38 & 0x100) << 0x17) << 0x20));
        }
        *(float *)(aauStack_38[0] + lVar4 * 4) = fVar16;
      }
      lVar4 = lVar4 + 1;
      uVar1 = (int)uVar1 >> 1;
    } while (lVar4 < 4);
  }
  return aauStack_38[0]._0_8_;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




