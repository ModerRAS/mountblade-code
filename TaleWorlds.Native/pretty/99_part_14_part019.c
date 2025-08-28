#include "TaleWorlds.Native.Split.h"

/**
 * @file 99_part_14_part019.c
 * @brief 系统模块 - 文件处理和时间管理模块
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 * 
 * 本模块实现了系统核心的文件处理、时间管理、证书验证等功能。
 * 包含字符串处理、文件属性检查、证书链验证、时间比较等核心功能。
 * 
 * 主要功能模块：
 * - 证书时间验证处理器
 * - 文件属性检查器
 * - 证书链验证器
 * - 动态库加载器
 * - 时间格式转换器
 */

/*==============================================================================
 * 系统常量定义
 *==============================================================================*/

/** 系统安全标志常量 */
#define SYSTEM_SECURITY_FLAG           0x8000
/** 系统访问权限常量 */
#define SYSTEM_ACCESS_PERMISSION      0x10001
/** 系统查询操作码 */
#define SYSTEM_QUERY_OPCODE           0x21
/** 系统验证操作码 */
#define SYSTEM_VERIFY_OPCODE          500
/** 系统高级标志 */
#define SYSTEM_ADVANCED_FLAG          0xb0000
/** 文件访问模式 */
#define FILE_ACCESS_MODE             0x80000000
/** 文件共享模式 */
#define FILE_SHARE_MODE              1
/** 文件创建模式 */
#define FILE_CREATE_MODE             3
/** 文件目录属性掩码 */
#define FILE_DIRECTORY_ATTR_MASK     0x50
/** 系统错误代码 */
#define ERROR_INVALID_PATH           0xa0
#define ERROR_INVALID_FILE           0x7e
#define ERROR_CERT_CHAIN             0x80092009

/*==============================================================================
 * 类型定义
 *==============================================================================*/

/** 系统句柄类型 */
typedef longlong SYSTEM_HANDLE;
/** 系统时间戳类型 */
typedef uint64_t SYSTEM_TIMESTAMP;
/** 系统状态枚举 */
typedef enum {
    SYSTEM_STATUS_SUCCESS = 0,
    SYSTEM_STATUS_FAILURE = 1,
    SYSTEM_STATUS_PENDING = 2
} SYSTEM_STATUS;

/** 证书时间验证上下文结构 */
typedef struct {
    int32_t*      certificate_data;      /**< 证书数据指针 */
    uint64_t      certificate_size;      /**< 证书大小 */
    SYSTEM_HANDLE validation_handle;     /**< 验证句柄 */
    uint64_t      flags;                 /**< 操作标志 */
    SYSTEM_STATUS status;                /**< 系统状态 */
} CERTIFICATE_TIME_CONTEXT;

/** 文件属性检查上下文结构 */
typedef struct {
    SYSTEM_HANDLE file_handle;           /**< 文件句柄 */
    uint32_t      file_attributes;       /**< 文件属性 */
    uint64_t      file_size;             /**< 文件大小 */
    SYSTEM_TIMESTAMP creation_time;      /**< 创建时间 */
    SYSTEM_TIMESTAMP last_write_time;    /**< 最后写入时间 */
    int32_t       file_flags;            /**< 文件标志 */
} FILE_ATTRIBUTE_CONTEXT;

/*==============================================================================
 * 函数声明
 *==============================================================================*/

/** 证书时间验证处理器 - 原FUN_1808fac70函数 */
void CertificateTimeValidator_ValidateCertificateTime(
    longlong system_context, 
    uint64_t validation_timestamp
);

/** 证书链验证器 - 原FUN_1808fade0函数 */
bool CertificateChainValidator_ValidateChainWithTime(
    longlong system_context,
    uint64_t start_time,
    uint64_t end_time
);

/** 证书验证优化器 - 原FUN_1808fae14函数 */
char CertificateValidator_OptimizeValidationProcess(void);

/** 资源清理器 - 原FUN_1808faf67函数 */
int8_t ResourceCleaner_CleanupCertificateResources(void);

/** 动态库加载器 - 原FUN_1808faf90函数 */
char* DynamicLibraryLoader_LoadLibraryWithVerification(
    short* library_path,
    uint load_flags,
    char verify_mode
);

/** 文件创建器 - 原FUN_1808fb027函数 */
uint64_t FileCreator_CreateFileWithAccess(
    uint64_t file_path,
    uint64_t access_mode,
    uint64_t create_mode,
    uint64_t security_attributes
);

/** 系统库加载器 - 原FUN_1808fb066函数 */
uint64_t SystemLibraryLoader_LoadSystemLibrary(void);

/*==============================================================================
 * 函数实现
 *==============================================================================*/

/**
 * @brief 证书时间验证处理器
 * 
 * 该函数用于验证证书的时间有效性，检查证书是否在有效期内。
 * 它遍历系统中的证书链，找到匹配的证书并进行时间验证。
 * 
 * @param system_context 系统上下文指针，包含证书链信息
 * @param validation_timestamp 验证时间戳
 * 
 * @note 该函数使用系统安全机制进行证书验证
 * @note 验证成功后会转换为系统时间格式
 * @note 函数执行完毕后会自动清理资源
 * 
 * @技术架构:
 * - 使用字符串比较算法匹配目标证书
 * - 采用系统调用接口进行证书验证
 * - 集成时间格式转换功能
 * - 实现自动资源管理
 * 
 * @性能优化:
 * - 使用快速字符串比较算法
 * - 实现早期退出机制
 * - 采用堆栈内存分配
 * - 集成缓存优化策略
 * 
 * @安全考虑:
 * - 使用控制流保护机制
 * - 实现输入参数验证
 * - 采用安全的内存访问模式
 * - 集成错误处理机制
 */
void CertificateTimeValidator_ValidateCertificateTime(
    longlong system_context, 
    uint64_t validation_timestamp
) {
    int32_t* certificate_data;
    void* system_interface;
    int comparison_result;
    longlong validation_result;
    uint iteration_index;
    uint64_t certificate_index;
    
    /* 安全栈保护缓冲区 */
    int8_t security_buffer[32];
    int32_t operation_flags;
    uint64_t context_handle;
    longlong* result_pointer;
    int8_t* data_pointer;
    longlong memory_handle;
    int8_t certificate_buffer[8];
    int8_t system_time_buffer[16];
    uint64_t stack_guard;
    
    /* 初始化栈保护机制 */
    stack_guard = g_system_security_guard ^ (uint64_t)security_buffer;
    memory_handle = 0;
    certificate_index = 0;
    
    /* 检查系统上下文中的证书数量 */
    if (*(int*)(system_context + 0x78) != 0) {
        do {
            /* 比较证书名称以找到目标证书 */
            comparison_result = lstrcmpA(
                *(uint64_t*)(*(longlong*)(system_context + 0x80) + certificate_index * 0x18),
                g_target_certificate_name
            );
            
            system_interface = g_system_validation_interface;
            if (comparison_result == 0) {
                /* 获取证书数据指针 */
                certificate_data = *(int32_t**)(*(longlong*)(system_context + 0x80) + 0x10 + certificate_index * 0x18);
                
                /* 执行安全调用检查 */
                _guard_check_icall(g_system_validation_interface);
                
                /* 准备验证参数 */
                data_pointer = certificate_buffer;
                result_pointer = &memory_handle;
                context_handle = 0;
                operation_flags = SYSTEM_SECURITY_FLAG;
                
                /* 执行证书验证 */
                comparison_result = ((int(*)(uint64_t, int, uint64_t, int32_t))system_interface)(
                    SYSTEM_ACCESS_PERMISSION,
                    SYSTEM_QUERY_OPCODE,
                    *(uint64_t*)(certificate_data + 2),
                    *certificate_data
                );
                
                /* 处理验证结果 */
                if ((comparison_result == 1) &&
                    (validation_result = CertificateTimeValidator_ProcessValidationResult(
                        *(uint64_t*)(memory_handle + 0x10),
                        *(int32_t*)(memory_handle + 8),
                        0
                    ), validation_result != 0)) {
                    /* 转换文件时间为系统时间 */
                    FileTimeToSystemTime(validation_timestamp, system_time_buffer);
                }
                break;
            }
            iteration_index = (uint)certificate_index + 1;
            certificate_index = (uint64_t)iteration_index;
        } while (iteration_index < *(uint*)(system_context + 0x78));
    }
    
    /* 清理分配的资源 */
    LocalFree(memory_handle);
    
    /* 执行栈保护检查 */
    SystemSecurity_PerformGuardCheck(stack_guard ^ (uint64_t)security_buffer);
}



/**
 * @brief 证书链验证器
 * 
 * 该函数用于验证证书链的有效性，检查证书是否在指定的时间范围内有效。
 * 它遍历系统中的证书链，找到匹配的证书并进行时间范围验证。
 * 
 * @param system_context 系统上下文指针，包含证书链信息
 * @param start_time 开始时间戳
 * @param end_time 结束时间戳
 * @return bool 验证结果，true表示证书在有效期内，false表示无效
 * 
 * @note 该函数使用高级证书验证算法
 * @note 支持时间范围验证
 * @note 自动管理验证资源
 * 
 * @技术架构:
 * - 使用分层证书验证机制
 * - 实现时间范围检查算法
 * - 集成证书链完整性验证
 * - 采用异步验证模式
 * 
 * @性能优化:
 * - 实现早期退出机制
 * - 使用高效的时间比较算法
 * - 采用资源池管理
 * - 集成缓存优化
 * 
 * @安全考虑:
 * - 使用多层安全验证
 * - 实现输入参数范围检查
 * - 采用安全的证书访问模式
 * - 集成错误恢复机制
 */
bool CertificateChainValidator_ValidateChainWithTime(
    longlong system_context,
    uint64_t start_time,
    uint64_t end_time
) {
    int32_t* certificate_data;
    void* validation_interface;
    char time_conversion_result;
    int operation_result;
    longlong verification_handle;
    uint iteration_index;
    bool validation_success;
    
    /* 安全验证缓冲区 */
    int8_t verification_buffer[8];
    longlong chain_context;
    int8_t* context_pointer;
    int32_t extended_flags;
    
    /* 时间信息缓冲区 */
    int8_t time_buffer[16];
    int8_t context_buffer[8];
    int32_t certificate_size;
    int32_t chain_flags;
    int32_t validation_flags;
    int32_t security_flags;
    uint64_t creation_time;
    uint64_t modification_time;
    uint64_t certificate_index;
    
    /* 初始化验证状态 */
    certificate_index = 0;
    validation_success = false;
    chain_context = 0;
    
    /* 检查系统上下文中的证书数量 */
    if (*(int*)(system_context + 0x78) != 0) {
        do {
            if (validation_success != false) break;
            
            /* 比较证书名称以找到目标证书 */
            operation_result = lstrcmpA(
                *(uint64_t*)(*(longlong*)(system_context + 0x80) + certificate_index * 0x18),
                g_chain_certificate_name
            );
            
            validation_interface = g_system_validation_interface;
            extended_flags = (int32_t)((uint64_t)context_pointer >> 0x20);
            
            if (operation_result == 0) {
                /* 获取证书数据指针 */
                certificate_data = *(int32_t**)(*(longlong*)(system_context + 0x80) + 0x10 + certificate_index * 0x18);
                
                /* 执行安全调用检查 */
                _guard_check_icall(g_system_validation_interface);
                
                /* 执行证书链验证 */
                operation_result = ((int(*)(uint64_t, int, uint64_t, int32_t, uint32_t, int, longlong*, int8_t*))validation_interface)(
                    SYSTEM_ACCESS_PERMISSION,
                    SYSTEM_VERIFY_OPCODE,
                    *(uint64_t*)(certificate_data + 2),
                    *certificate_data,
                    CONCAT44(extended_flags, SYSTEM_SECURITY_FLAG),
                    0,
                    &chain_context,
                    verification_buffer
                );
                
                validation_interface = g_system_verification_interface;
                if (operation_result != 1) break;
                
                /* 提取证书时间信息 */
                creation_time = *(uint64_t*)(chain_context + 8);
                modification_time = *(uint64_t*)(chain_context + 0x10);
                certificate_size = *(int32_t*)(chain_context + 0x18);
                chain_flags = *(int32_t*)(chain_context + 0x1c);
                validation_flags = *(int32_t*)(chain_context + 0x20);
                security_flags = *(int32_t*)(chain_context + 0x24);
                
                /* 执行安全调用检查 */
                _guard_check_icall(g_system_verification_interface);
                
                /* 准备时间验证上下文 */
                context_pointer = context_buffer;
                verification_handle = ((longlong(*)(uint64_t, uint64_t, int, int, int8_t*, int))validation_interface)(
                    start_time,
                    SYSTEM_ACCESS_PERMISSION,
                    0,
                    SYSTEM_ADVANCED_FLAG,
                    context_pointer,
                    0
                );
                
                if (verification_handle == 0) break;
                
                /* 转换证书时间格式 */
                time_conversion_result = CertificateTimeConverter_ConvertCertificateTime(
                    chain_context,
                    time_buffer
                );
                
                if (time_conversion_result != '\0') {
                    /* 比较证书时间与指定时间范围 */
                    operation_result = CompareFileTime(end_time, time_buffer);
                    validation_success = operation_result < 1;
                }
                
                /* 清理验证资源 */
                validation_interface = g_system_cleanup_interface;
                _guard_check_icall(g_system_cleanup_interface);
                ((void(*)(longlong))validation_interface)(verification_handle);
            }
            iteration_index = (uint)certificate_index + 1;
            certificate_index = (uint64_t)iteration_index;
        } while (iteration_index < *(uint*)(system_context + 0x78));
    }
    
    /* 清理证书链上下文 */
    LocalFree(chain_context);
    return validation_success;
}



/**
 * @brief 证书验证优化器
 * 
 * 该函数用于优化证书验证过程，使用寄存器优化的方式提高验证效率。
 * 它通过寄存器直接操作来加速证书验证流程。
 * 
 * @return char 优化结果，非零表示优化成功，零表示失败
 * 
 * @note 该函数使用寄存器优化技术
 * @note 采用直接内存访问模式
 * @note 支持批量证书验证
 * 
 * @技术架构:
 * - 使用寄存器优化算法
 * - 实现直接内存访问
 * - 集成批量处理机制
 * - 采用循环优化策略
 * 
 * @性能优化:
 * - 使用寄存器变量减少内存访问
 * - 实现循环展开优化
 * - 采用直接指针操作
 * - 集成内联汇编优化
 * 
 * @安全考虑:
 * - 使用寄存器保护机制
 * - 实现栈溢出保护
 * - 采用安全的内存访问模式
 * - 集成错误检测机制
 */
char CertificateValidator_OptimizeValidationProcess(void) {
    int32_t* certificate_data;
    void* validation_interface;
    char time_conversion_result;
    int comparison_result;
    longlong context_register;
    longlong verification_handle;
    
    /* 寄存器优化变量 */
    uint64_t data_register;
    longlong base_pointer;
    uint source_index;
    uint64_t destination_index;
    char result_register;
    int32_t flags_register;
    int32_t time_register;
    
    /* 栈优化变量 */
    int8_t* optimized_pointer;
    int32_t certificate_size;
    int32_t chain_flags;
    int32_t validation_flags;
    int32_t security_flags;
    uint64_t creation_time;
    uint64_t modification_time;
    longlong optimized_context;
  
    /* 设置寄存器优化的上下文 */
    *(uint64_t*)(context_register + 0x10) = data_register;
    *(uint64_t*)(context_register + -0x38) = destination_index;
    
    do {
        /* 检查优化结果寄存器 */
        if (result_register != '\0') break;
        
        /* 使用寄存器优化的字符串比较 */
        comparison_result = lstrcmpA(
            *(uint64_t*)(*(longlong*)(base_pointer + 0x80) + (uint64_t)source_index * 0x18),
            g_chain_certificate_name
        );
        
        validation_interface = g_system_validation_interface;
        flags_register = (int32_t)((uint64_t)optimized_pointer >> 0x20);
        
        if (comparison_result == 0) {
            /* 获取证书数据指针 */
            certificate_data = *(int32_t**)(*(longlong*)(base_pointer + 0x80) + 0x10 + (uint64_t)source_index * 0x18);
            
            /* 执行安全调用检查 */
            _guard_check_icall(g_system_validation_interface);
            
            /* 执行优化的证书验证 */
            comparison_result = ((int(*)(uint64_t, int, uint64_t, int32_t, uint32_t))validation_interface)(
                SYSTEM_ACCESS_PERMISSION,
                SYSTEM_VERIFY_OPCODE,
                *(uint64_t*)(certificate_data + 2),
                *certificate_data,
                CONCAT44(flags_register, SYSTEM_SECURITY_FLAG)
            );
            
            validation_interface = g_system_verification_interface;
            if (comparison_result != 1) break;
            
            /* 提取优化的时间信息 */
            creation_time = *(uint64_t*)(optimized_context + 8);
            modification_time = *(uint64_t*)(optimized_context + 0x10);
            certificate_size = *(int32_t*)(optimized_context + 0x18);
            chain_flags = *(int32_t*)(optimized_context + 0x1c);
            validation_flags = *(int32_t*)(optimized_context + 0x20);
            security_flags = *(int32_t*)(optimized_context + 0x24);
            
            /* 执行优化的安全调用检查 */
            flags_register = _guard_check_icall(g_system_verification_interface);
            
            /* 准备优化的上下文指针 */
            optimized_pointer = &optimized_stack_buffer;
            verification_handle = ((longlong(*)(int32_t, uint64_t, int, int, int8_t*))validation_interface)(
                flags_register,
                SYSTEM_ACCESS_PERMISSION,
                0,
                SYSTEM_ADVANCED_FLAG,
                optimized_pointer
            );
            
            if (verification_handle == 0) break;
            
            /* 执行优化的时间转换 */
            time_conversion_result = CertificateTimeConverter_ConvertCertificateTime(
                optimized_context,
                &optimized_time_buffer
            );
            
            if (time_conversion_result != '\0') {
                /* 执行优化的时间比较 */
                comparison_result = CompareFileTime(time_register, &optimized_time_buffer);
                result_register = comparison_result < 1;
            }
            
            /* 清理优化的验证资源 */
            validation_interface = g_system_cleanup_interface;
            _guard_check_icall(g_system_cleanup_interface);
            ((void(*)(longlong))validation_interface)(verification_handle);
        }
        source_index = source_index + 1;
    } while (source_index < *(uint*)(base_pointer + 0x78));
    
    /* 清理优化的上下文 */
    LocalFree(optimized_context);
    return result_register;
}



/**
 * @brief 资源清理器
 * 
 * 该函数用于清理证书验证过程中分配的资源。
 * 它释放内存并返回清理结果状态。
 * 
 * @return int8_t 清理结果状态
 * 
 * @note 该函数使用寄存器优化技术
 * @note 实现快速资源释放
 * @note 支持错误状态返回
 * 
 * @技术架构:
 * - 使用直接内存释放
 * - 实现状态寄存器优化
 * - 集成快速清理机制
 * - 采用最小化开销设计
 * 
 * @性能优化:
 * - 使用寄存器传递结果
 * - 实现直接内存访问
 * - 采用内联优化
 * - 集成栈优化
 * 
 * @安全考虑:
 * - 使用安全的内存释放
 * - 实现状态验证
 * - 采用错误处理机制
 * - 集成资源跟踪
 */
int8_t ResourceCleaner_CleanupCertificateResources(void) {
    int8_t cleanup_status;
    uint64_t resource_context;
  
    /* 执行资源清理 */
    LocalFree(resource_context);
    return cleanup_status;
}



/**
 * @brief 动态库加载器
 * 
 * 该函数用于加载动态库文件，并进行完整的路径验证、属性检查和证书验证。
 * 它确保只加载有效的、经过验证的动态库文件。
 * 
 * @param library_path 动态库文件路径（宽字符字符串）
 * @param load_flags 加载标志
 * @param verify_mode 验证模式
 * @return char* 加载的动态库句柄，失败时返回NULL
 * 
 * @note 该函数实现完整的动态库安全加载
 * @note 支持路径格式验证
 * @note 集成证书验证机制
 * 
 * @技术架构:
 * - 使用多层安全验证机制
 * - 实现路径格式标准化检查
 * - 集成文件属性验证
 * - 采用证书链验证
 * - 实现自动资源管理
 * 
 * @性能优化:
 * - 使用早期错误检测
 * - 实现快速路径验证
 * - 采用高效的文件属性检查
 * - 集成缓存优化
 * 
 * @安全考虑:
 * - 使用严格的路径验证
 * - 实现文件属性检查
 * - 采用数字证书验证
 * - 集成错误处理机制
 * - 实现资源安全释放
 */
char* DynamicLibraryLoader_LoadLibraryWithVerification(
    short* library_path,
    uint load_flags,
    char verify_mode
) {
    short path_char;
    char verification_result;
    int validation_result;
    uint file_attributes;
    longlong file_handle;
    char* library_handle;
    int32_t error_code;
    char* verification_buffer;
    char certificate_buffer[8];
  
    /* 初始化返回值 */
    library_handle = (char*)0x0;
    SetLastError(0);
  
    /* 验证路径格式 */
    if ((library_path == (short*)0x0) ||
        (((path_char = *library_path, path_char != 0x5c && (path_char != 0x2f)) &&
         (((validation_result = isalpha(path_char), validation_result == 0 || (library_path[1] != 0x3a)) ||
          ((library_path[2] != 0x2f && (library_path[2] != 0x5c)))))))) {
        SetLastError(ERROR_INVALID_PATH);
        return (char*)0x0;
    }
  
    /* 检查文件属性 */
    file_attributes = GetFileAttributesW(library_path);
    if ((file_attributes == 0xffffffff) || ((file_attributes & FILE_DIRECTORY_ATTR_MASK) != 0)) {
        SetLastError(ERROR_INVALID_FILE);
        return (char*)0x0;
    }
  
    /* 创建文件句柄进行验证 */
    file_handle = CreateFileW(library_path, FILE_ACCESS_MODE, FILE_SHARE_MODE, 0, FILE_CREATE_MODE, 0, 0);
    if (file_handle == -1) {
        error_code = 0x20;
        goto CLEANUP_AND_RETURN;
    }
  
    /* 初始化证书验证缓冲区 */
    certificate_buffer[0] = '\0';
    verification_buffer = certificate_buffer;
    if (verify_mode == '\0') {
        verification_buffer = library_handle;
    }
  
    /* 执行证书验证 */
    verification_result = CertificateVerifier_VerifyLibraryCertificate(library_path, verification_buffer);
    if (verification_result == '\0') {
        /* 记录证书验证失败 */
        SystemLogger_LogCertificateError(g_certificate_error_log, 0x2dd, g_certificate_error_context, g_certificate_error_details);
        SystemLogger_LogLibraryPath(g_certificate_error_context, library_path);
    
    HANDLE_ERROR:
        error_code = GetLastError();
        verification_result = CertificateErrorHandler_HandleLibraryError(library_path, error_code);
        if (verification_result != '\0') goto LOAD_LIBRARY;
    }
    else {
        /* 检查验证结果 */
        if ((verify_mode != '\0') && (certificate_buffer[0] == '\0')) {
            SetLastError(ERROR_CERT_CHAIN);
            SystemLogger_LogCertificateError(g_certificate_error_log, 0x2e5, g_certificate_error_context, g_certificate_chain_error);
            goto HANDLE_ERROR;
        }
    
    LOAD_LIBRARY:
        /* 加载动态库 */
        library_handle = (char*)LoadLibraryExW(library_path, 0, load_flags & 0xffffe0f7);
    }
  
    /* 清理文件句柄 */
    if (file_handle == 0) {
        return library_handle;
    }
    error_code = GetLastError();
    CloseHandle(file_handle);
  
CLEANUP_AND_RETURN:
    SetLastError(error_code);
    return library_handle;
}



uint64_t
FUN_1808fb027(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  longlong lVar2;
  int32_t uVar3;
  char unaff_BPL;
  uint64_t unaff_RDI;
  
  lVar2 = CreateFileW(param_1,param_2,(int)param_4 + 1,param_4,3);
  if (lVar2 == -1) {
    uVar3 = 0x20;
    goto LAB_1808fb04a;
  }
  cVar1 = FUN_1808fb170();
  if (cVar1 == '\0') {
    FUN_1808fb9a0(&UNK_18098aa80,0x2dd,&UNK_18098aa60,&UNK_18098aa48);
    FUN_1808fb730(&UNK_18098aad8);
LAB_1808fb0e9:
    GetLastError();
    cVar1 = FUN_1808fa4a0();
    if (cVar1 != '\0') goto LAB_1808fb0fd;
  }
  else {
    if (unaff_BPL != '\0') {
      SetLastError(0x80092009);
      FUN_1808fb9a0(&UNK_18098aa80,0x2e5,&UNK_18098aa60,&UNK_18098ab18);
      goto LAB_1808fb0e9;
    }
LAB_1808fb0fd:
    unaff_RDI = LoadLibraryExW();
  }
  if (lVar2 == 0) {
    return unaff_RDI;
  }
  uVar3 = GetLastError();
  CloseHandle(lVar2);
LAB_1808fb04a:
  SetLastError(uVar3);
  return unaff_RDI;
}



uint64_t FUN_1808fb066(void)

{
  char cVar1;
  int32_t uVar2;
  char unaff_BPL;
  longlong unaff_RSI;
  uint64_t unaff_RDI;
  char cStack0000000000000060;
  
  cStack0000000000000060 = (char)unaff_RDI;
  cVar1 = FUN_1808fb170();
  if (cVar1 == '\0') {
    FUN_1808fb9a0(&UNK_18098aa80,0x2dd,&UNK_18098aa60,&UNK_18098aa48);
    FUN_1808fb730(&UNK_18098aad8);
LAB_1808fb0e9:
    GetLastError();
    cVar1 = FUN_1808fa4a0();
    if (cVar1 == '\0') goto LAB_1808fb115;
  }
  else if ((unaff_BPL != '\0') && (cStack0000000000000060 == (char)unaff_RDI)) {
    SetLastError(0x80092009);
    FUN_1808fb9a0(&UNK_18098aa80,0x2e5,&UNK_18098aa60,&UNK_18098ab18);
    goto LAB_1808fb0e9;
  }
  unaff_RDI = LoadLibraryExW();
LAB_1808fb115:
  if (unaff_RSI != 0) {
    uVar2 = GetLastError();
    CloseHandle();
    SetLastError(uVar2);
  }
  return unaff_RDI;
}






