//==============================================================================
// 文件信息：global_constants.h
// 模块功能：全局常量定义文件
// 主要功能：
//   - 定义系统全局地址常量
//   - 提供内存地址和安全cookie定义
//   - 统一管理全局变量地址
//   - 支持系统初始化和运行时访问
//==============================================================================

#ifndef GLOBAL_CONSTANTS_H
#define GLOBAL_CONSTANTS_H

#include <stdint.h>

//------------------------------------------------------------------------------
// 系统安全常量定义
//------------------------------------------------------------------------------

// 系统安全cookie（用于栈保护）
#define SYSTEM_SECURITY_COOKIE         0x180bf00a8   // 系统安全cookie地址

//------------------------------------------------------------------------------
// 系统全局数据地址定义
//------------------------------------------------------------------------------

// 系统主控制块地址
#define SYSTEM_MAIN_CONTROL_BLOCK       0x180be12f0   // 系统主控制块地址

// 系统状态管理地址
#define SYSTEM_STATE_MANAGER           0x180c86920   // 系统状态管理器地址
#define SYSTEM_MODULE_STATE_ADDR       0x180c86908   // 系统模块状态地址
#define SYSTEM_MESSAGE_CONTEXT_ADDR     0x180c86928   // 系统消息上下文地址
#define SYSTEM_MAIN_MODULE_STATE_ADDR  0x180c86870   // 系统主模块状态地址

// 系统计数器地址
#define SYSTEM_FILE_COUNTER_ADDR       0x180c8ed60   // 系统文件计数器地址
#define SYSTEM_HANDLE_COUNTER_ADDR     0x180c8ed64   // 系统句柄计数器地址

// 系统数据管理地址
#define SYSTEM_DATA_MANAGER_A          0x180c8a9b0   // 系统数据管理器A地址
#define SYSTEM_DATA_MANAGER_B          0x180c8a9a8   // 系统数据管理器B地址

// 系统内存管理地址
#define SYSTEM_MEMORY_POOL_ADDR        0x180c8ed18   // 系统内存池地址
#define SYSTEM_GLOBAL_DATA_ADDR        0x180c8aa08   // 系统全局数据地址
#define SYSTEM_CONTEXT_ADDR            0x180c82868   // 系统上下文地址

// 系统对象管理地址
#define SYSTEM_OBJECT_MANAGER_ADDR      0x180957f70   // 系统对象管理器地址

// 系统缓冲区管理地址
#define SYSTEM_BUFFER_EA98_ADDR        0x180c4ea98   // 系统缓冲区EA98地址
#define SYSTEM_BUFFER_EA94_ADDR        0x180c4ea94   // 系统缓冲区EA94地址

//------------------------------------------------------------------------------
// 系统偏移量定义
//------------------------------------------------------------------------------

// 系统主控制块偏移量
#define SYSTEM_CONTROL_FLAG_OFFSET     0x10          // 控制标志偏移量
#define SYSTEM_STATE_OFFSET            0x3a8         // 状态偏移量
#define SYSTEM_MEMORY_ALLOC_OFFSET     0x1a0         // 内存分配器偏移量

//------------------------------------------------------------------------------
// 系统访问宏定义
//------------------------------------------------------------------------------

// 安全cookie访问宏
#define GET_SECURITY_COOKIE()          (*(uint64_t*)(SYSTEM_SECURITY_COOKIE))

// 系统控制块访问宏
#define GET_SYSTEM_CONTROL_FLAG()      (*(uint8_t*)(SYSTEM_MAIN_CONTROL_BLOCK + SYSTEM_CONTROL_FLAG_OFFSET))
#define GET_SYSTEM_MEMORY_ALLOCATOR()  (*(uint64_t*)(SYSTEM_MAIN_CONTROL_BLOCK + SYSTEM_MEMORY_ALLOC_OFFSET))

// 系统状态访问宏
#define GET_SYSTEM_STATE()             (*(int32_t*)(SYSTEM_DATA_MANAGER_A + SYSTEM_STATE_OFFSET))
#define SET_SYSTEM_STATE(value)        (*(int32_t*)(SYSTEM_DATA_MANAGER_A + SYSTEM_STATE_OFFSET) = (value))

// 系统计数器访问宏
#define GET_FILE_COUNTER()             (*(int32_t*)SYSTEM_FILE_COUNTER_ADDR)
#define SET_FILE_COUNTER(value)        (*(int32_t*)SYSTEM_FILE_COUNTER_ADDR = (value))
#define DECREMENT_FILE_COUNTER()       (SET_FILE_COUNTER(GET_FILE_COUNTER() - 1))

#define GET_HANDLE_COUNTER()           (*(int32_t*)SYSTEM_HANDLE_COUNTER_ADDR)
#define SET_HANDLE_COUNTER(value)      (*(int32_t*)SYSTEM_HANDLE_COUNTER_ADDR = (value))
#define DECREMENT_HANDLE_COUNTER()     (SET_HANDLE_COUNTER(GET_HANDLE_COUNTER() - 1))

// 系统数据管理器访问宏
#define GET_DATA_MANAGER_A()           (*(uint64_t*)SYSTEM_DATA_MANAGER_A)
#define GET_DATA_MANAGER_B()           (*(uint64_t*)SYSTEM_DATA_MANAGER_B)

// 系统状态管理器访问宏
#define GET_STATE_MANAGER()            (*(uint64_t*)SYSTEM_STATE_MANAGER)

// 系统对象管理器访问宏
#define GET_OBJECT_MANAGER()           (*(uint64_t*)SYSTEM_OBJECT_MANAGER_ADDR)

// 系统缓冲区访问宏
#define GET_BUFFER_EA98()              (*(int32_t*)SYSTEM_BUFFER_EA98_ADDR)
#define SET_BUFFER_EA98(value)         (*(int32_t*)SYSTEM_BUFFER_EA98_ADDR = (value))
#define GET_BUFFER_EA94()              (*(int32_t*)SYSTEM_BUFFER_EA94_ADDR)
#define SET_BUFFER_EA94(value)         (*(int32_t*)SYSTEM_BUFFER_EA94_ADDR = (value))

//------------------------------------------------------------------------------
// 系统初始化状态检查宏
//------------------------------------------------------------------------------

// 检查系统是否已初始化
#define IS_SYSTEM_INITIALIZED()        (GET_SYSTEM_CONTROL_FLAG() & 0x80)

// 检查数据管理器是否可用
#define IS_DATA_MANAGER_AVAILABLE()    (GET_DATA_MANAGER_A() != 0)

// 检查状态管理器是否可用
#define IS_STATE_MANAGER_AVAILABLE()   (GET_STATE_MANAGER() != 0)

//------------------------------------------------------------------------------
// 安全检查宏定义
//------------------------------------------------------------------------------

// 栈保护检查宏
#define STACK_PROTECTION_CHECK(buffer, size) \
    do { \
        uint64_t cookie_value = GET_SECURITY_COOKIE(); \
        uint64_t stack_check = cookie_value ^ (uint64_t)(buffer); \
        (void)(size); /* 避免未使用参数警告 */ \
    } while(0)

// 栈保护验证宏
#define STACK_PROTECTION_VERIFY(buffer, expected) \
    (((GET_SECURITY_COOKIE()) ^ (uint64_t)(buffer)) == (expected))

//------------------------------------------------------------------------------
// 内存访问安全宏
//------------------------------------------------------------------------------

// 安全内存读取宏
#define SAFE_MEMORY_READ(addr, type)   (*((type*)(addr)))

// 安全内存写入宏
#define SAFE_MEMORY_WRITE(addr, value) (*((typeof(value)*)(addr)) = (value))

#endif // GLOBAL_CONSTANTS_H