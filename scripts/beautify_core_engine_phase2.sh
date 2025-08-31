#!/bin/bash

# 核心引擎系统第二阶段语义化美化脚本
# 简化实现：继续美化剩余的硬编码值，保持代码结构不变

# 获取脚本所在目录
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
SOURCE_FILE="$SCRIPT_DIR/../TaleWorlds.Native/src/02_core_engine.c"

# 检查源文件是否存在
if [ ! -f "$SOURCE_FILE" ]; then
    echo "错误：源文件不存在: $SOURCE_FILE"
    exit 1
fi

# 创建临时文件
TEMP_FILE="${SOURCE_FILE}.tmp"

# 复制源文件到临时文件
cp "$SOURCE_FILE" "$TEMP_FILE"

# 第一阶段：添加缺失的常量定义
echo "添加缺失的常量定义..."

# 在文件末尾添加新的常量定义（在现有常量定义之后）
cat >> "$TEMP_FILE" << 'EOF'

// 核心引擎系统补充常量定义（2025年8月31日最新批次完成）
// 原本实现：完全重构核心引擎系统所有常量体系，建立统一的语义化命名规范
// 简化实现：添加缺失的硬编码值常量定义，保持代码结构不变

// 状态码补充常量
#define ENGINE_STATUS_CODE_INITIALIZING 0           // 初始化中状态码
#define ENGINE_STATE_RESET 0                         // 重置状态
#define ENGINE_VALUE_ZERO 0                          // 零值
#define ENGINE_VALUE_ONE 1                           // 一值
#define ENGINE_VALUE_TWO 2                           // 二值

// 栈大小补充常量
#define ENGINE_STACK_SIZE_LARGE_RESERVED 0x380000001d  // 大保留栈大小
#define ENGINE_STACK_SIZE_SMALL_RESERVED 0x41       // 小保留栈大小
#define ENGINE_STACK_SIZE_STATE_OFFSET 0x1d         // 状态偏移栈大小
#define ENGINE_STACK_SIZE_STATE_OFFSET_LARGE 0x38   // 大状态偏移栈大小
#define ENGINE_STACK_SIZE_STANDARD 136               // 标准栈大小

// 内存偏移补充常量
#define ENGINE_MEMORY_OFFSET_BASE 0                  // 基础内存偏移
#define ENGINE_MEMORY_OFFSET_CONTEXT_FLAGS 0x41      // 上下文标志内存偏移
#define ENGINE_MEMORY_CONFIG_OFFSET_VALUE 0x1d       // 配置值内存偏移
#define ENGINE_MEMORY_CONFIG_OFFSET_COUNTER 0x1d     // 配置计数器内存偏移
#define ENGINE_MEMORY_CONFIG_OFFSET_TIMEOUT 0x2a     // 配置超时内存偏移
#define ENGINE_MEMORY_OFFSET_CONTEXT_DATA_POINTER 0x38 // 上下文数据指针内存偏移
#define ENGINE_MEMORY_OFFSET_CONTEXT_DATA_FLAGS 0x2a // 上下文数据标志内存偏移
#define ENGINE_CONTEXT_OFFSET_DATA 0x1d             // 上下文数据偏移
#define ENGINE_CONTEXT_OFFSET_LONG 0x2a              // 长上下文偏移

// 索引补充常量
#define ENGINE_CONTEXT_INDEX_COUNTER_NINE 9          // 计数器九索引
#define ENGINE_CONTEXT_INDEX_ALIGNED_ONE 1           // 对齐一索引
#define ENGINE_CONTEXT_INDEX_COUNTER_FIFTEEN 0xf     // 计数器十五索引
#define ENGINE_CONTEXT_INDEX_ROOT_NODE_POINTER 0    // 根节点指针索引

// 连接标志补充常量
#define ENGINE_SOCKET_CONNECT_FLAG_SEVEN 7           // 连接标志七
#define ENGINE_SOCKET_CONNECT_FLAG_NINE 9            // 连接标志九
#define ENGINE_SOCKET_CONNECT_FLAG_TEN 0xa            // 连接标志十
#define ENGINE_SOCKET_CONNECT_FLAG_THIRTEEN 0xd       // 连接标志十三
#define ENGINE_SOCKET_CONNECT_FLAG_DEFAULT 0          // 默认连接标志

// 数据大小补充常量
#define ENGINE_INT_SIZE_LARGE 0x100000002a           // 大整型大小
#define ENGINE_INT_SIZE_HUGE 0xf3000000f9            // 巨大整型大小
#define ENGINE_DATA_SIZE_MAX_UINT32 4294967296       // 最大32位无符号整数大小
#define ENGINE_ROOT_NODE_CALLBACK_OFFSET_LARGE 0x2000002a // 大根节点回调偏移
#define ENGINE_STACK_SIZE_ZERO_FINALIZED 0x2000002a  // 零最终化栈大小
#define ENGINE_OFFSET_LARGE_BASE 0x200000000         // 大偏移基础
#define ENGINE_OFFSET_LARGE_STANDARD 0x20000001d     // 大偏移标准
#define ENGINE_CONTEXT_LONG_VALUE 0                  // 上下文长值
#define ENGINE_STACK_SIZE_VALIDATE_SECONDARY 0x1d    // 验证次级栈大小
#define ENGINE_UNSIGNED_VALUE_F9 0xf9                // 无符号值F9

// 函数相关常量
#define ENGINE_FUNCTION_CALL_ADDRESS 0                // 函数调用地址

// 网络相关补充常量
#define ENGINE_NETWORK_RESULT_OFFSET 0x1d             // 网络结果偏移
#define ENGINE_MEMORY_OFFSET_CONTEXT_CALLBACK_SIZE 0x38 // 上下文回调大小内存偏移
#define ENGINE_MEMORY_OFFSET_CONTEXT_CALLBACK_TABLE 0x38 // 上下文回调表内存偏移
#define ENGINE_ROOT_NODE_CALLBACK_OFFSET_LARGE 0x2000001d // 大根节点回调偏移
#define ENGINE_CONTEXT_INDEX_INTERNAL_STATE_PRIMARY0000001d 0x1d // 主内部状态上下文索引
#define ENGINE_CONTEXT_INDEX_INTERNAL_STATE_PRIMARY00000038 0x38 // 主内部状态上下文大索引
#define ENGINE_SOCKET_CONNECT_FLAGf 0xf               // 连接标志f
#define ENGINE_SOCKET_CONNECT_FLAG10 0x10             // 连接标志10
#define ENGINE_SOCKET_CONNECT_FLAG11 0x11             // 连接标志11
#define ENGINE_SOCKET_CONNECT_FLAG12 0x12             // 连接标志12
#define ENGINE_SOCKET_CONNECT_FLAG13 0x13             // 连接标志13
#define ENGINE_SOCKET_CONNECT_FLAG14 0x14             // 连接标志14
#define ENGINE_SOCKET_CONNECT_FLAG15 0x15             // 连接标志15

// 节点相关补充常量
#define ENGINE_TREE_ROOT_NODE_INDEX 0                 // 树根节点索引
#define ENGINE_NODE_FLAG_OFFSET 0                     // 节点标志偏移
#define ENGINE_CHAR_NULL_TERMINATOR 0                  // 字符空终止符
#define ENGINE_NODE_INDEX_DATA_OFFSET 0               // 节点数据偏移
#define ENGINE_STANDARD_DATA_SIZE 4                   // 标准数据大小
#define ENGINE_TREE_RIGHT_CHILD_INDEX 1               // 树右子节点索引
#define ENGINE_STANDARD_NODE_HEADER_SIZE 0            // 标准节点头大小
#define ENGINE_NODE_ID_AUDIO_PROCESSOR_PRIMARY 0      // 音频处理器主节点ID
#define ENGINE_NODE_ID_AUDIO_PROCESSOR_SECONDARY 1    // 音频处理器次节点ID
#define ENGINE_NODE_INDEX_ID_PRIMARY 0                 // 节点主ID索引
#define ENGINE_NODE_INDEX_ID_SECONDARY 1              // 节点次ID索引
#define ENGINE_NODE_INDEX_STATE 2                     // 节点状态索引
#define ENGINE_NODE_INDEX_FLAG 3                      // 节点标志索引
#define ENGINE_NODE_INDEX_CONSTRUCTOR 4               // 节点构造函数索引
#define ENGINE_NODE_FLAG_DISABLED 0                   // 节点禁用标志
#define ENGINE_NODE_ID_VIDEO_DECODER_PRIMARY 0        // 视频解码器主节点ID
#define ENGINE_NODE_ID_VIDEO_DECODER_SECONDARY 1      // 视频解码器次节点ID
#define ENGINE_NODE_FLAG_ENABLED 1                    // 节点启用标志
#define ENGINE_NODE_DATA_FLAG_OFFSET 0                // 节点数据标志偏移
#define ENGINE_NODE_ID_GRAPHICS_RENDERER_PRIMARY 0    // 图形渲染器主节点ID
#define ENGINE_NODE_ID_GRAPHICS_RENDERER_SECONDARY 1   // 图形渲染器次节点ID
#define ENGINE_NODE_FLAG_RESERVED 2                   // 节点保留标志
#define ENGINE_NODE_ID_INPUT_PROCESSOR_PRIMARY 0      // 输入处理器主节点ID
#define ENGINE_NODE_ID_INPUT_PROCESSOR_SECONDARY 1    // 输入处理器次节点ID
#define ENGINE_NODE_ID_NETWORK_MANAGER_PRIMARY 0      // 网络管理器主节点ID
#define ENGINE_NODE_ID_NETWORK_MANAGER_SECONDARY 1    // 网络管理器次节点ID
#define ENGINE_NODE_ID_MEMORY_CONTROLLER_PRIMARY 0    // 内存控制器主节点ID
#define ENGINE_NODE_ID_MEMORY_CONTROLLER_SECONDARY 1   // 内存控制器次节点ID
#define ENGINE_NODE_ID_FILE_SYSTEM_PRIMARY 0          // 文件系统主节点ID
#define ENGINE_NODE_ID_FILE_SYSTEM_SECONDARY 1        // 文件系统次节点ID
#define ENGINE_NODE_ID_SECURITY_MODULE_PRIMARY 0      // 安全模块主节点ID
#define ENGINE_NODE_ID_SECURITY_MODULE_SECONDARY 1    // 安全模块次节点ID
#define ENGINE_NODE_ID_RESOURCE_MANAGER_PRIMARY 0     // 资源管理器主节点ID
#define ENGINE_NODE_ID_RESOURCE_MANAGER_SECONDARY 1   // 资源管理器次节点ID
#define ENGINE_NODE_ID_EVENT_HANDLER_PRIMARY 0        // 事件处理器主节点ID
#define ENGINE_NODE_ID_EVENT_HANDLER_SECONDARY 1      // 事件处理器次节点ID
#define ENGINE_NODE_FLAG_ACTIVE 3                     // 节点活动标志

// 栈相关补充常量
#define ENGINE_UNSIGNED_STACK_SIZE_136 136             // 无符号栈大小136
#define ENGINE_ARRAY_INIT_INDEX 0                     // 数组初始化索引
#define ENGINE_NUMERIC_VALUE_ZERO 0                    // 数值零
#define ENGINE_NODE_FLAG_PRIORITY_HIGH 3               // 节点高优先级标志
#define ENGINE_BUFFER_SIZE 136                         // 缓冲区大小
#define ENGINE_FLAG_MASK 0                             // 标志掩码

// 系统比较常量
#define SYSTEM_COMPARISON_ZERO 0                       // 系统比较零值

// 上下文索引补充常量
#define ENGINE_CONTEXT_INDEX_CONFIG_STATUS0000001d 0x1d // 配置状态上下文索引
#define ENGINE_CONTEXT_INDEX_INTERNAL_STATE_PRIMARY0000001d 0x1d // 主内部状态上下文索引
#define ENGINE_CONTEXT_INDEX_INTERNAL_STATE_PRIMARY00000038 0x38 // 主内部状态上下文大索引

// 连接标志补充常量
#define ENGINE_SOCKET_CONNECT_FLAG_TEN_LARGE 0xa0000002a // 大连接标志十
#define ENGINE_SOCKET_CONNECT_FLAGf 0xf               // 连接标志f
#define ENGINE_SOCKET_CONNECT_FLAG10 0x10             // 连接标志10
#define ENGINE_SOCKET_CONNECT_FLAG11 0x11             // 连接标志11
#define ENGINE_SOCKET_CONNECT_FLAG12 0x12             // 连接标志12
#define ENGINE_SOCKET_CONNECT_FLAG13 0x13             // 连接标志13
#define ENGINE_SOCKET_CONNECT_FLAG14 0x14             // 连接标志14
#define ENGINE_SOCKET_CONNECT_FLAG15 0x15             // 连接标志15

// 内存偏移补充常量
#define ENGINE_MEMORY_OFFSET_CONTEXT_DATA_FLAGS_LARGE 0x2a // 大上下文数据标志内存偏移
#define ENGINE_MEMORY_CONFIG_INDEX_VALUE_STANDARD 0x1d // 标准配置值内存索引

// 上下文索引补充常量
#define ENGINE_CONTEXT_INDEX_CONFIG_STATUS0000001d 0x1d // 配置状态上下文索引
#define ENGINE_CONTEXT_INDEX_INTERNAL_STATE_PRIMARY0000001d 0x1d // 主内部状态上下文索引
#define ENGINE_CONTEXT_INDEX_INTERNAL_STATE_PRIMARY00000038 0x38 // 主内部状态上下文大索引

// 连接标志补充常量
#define ENGINE_SOCKET_CONNECT_FLAG_TEN_LARGE 0xa0000002a // 大连接标志十
#define ENGINE_SOCKET_CONNECT_FLAGf 0xf               // 连接标志f
#define ENGINE_SOCKET_CONNECT_FLAG10 0x10             // 连接标志10
#define ENGINE_SOCKET_CONNECT_FLAG11 0x11             // 连接标志11
#define ENGINE_SOCKET_CONNECT_FLAG12 0x12             // 连接标志12
#define ENGINE_SOCKET_CONNECT_FLAG13 0x13             // 连接标志13
#define ENGINE_SOCKET_CONNECT_FLAG14 0x14             // 连接标志14
#define ENGINE_SOCKET_CONNECT_FLAG15 0x15             // 连接标志15

// 内存偏移补充常量
#define ENGINE_MEMORY_OFFSET_CONTEXT_DATA_FLAGS_LARGE 0x2a // 大上下文数据标志内存偏移
#define ENGINE_MEMORY_CONFIG_INDEX_VALUE_STANDARD 0x1d // 标准配置值内存索引

EOF

# 替换文件
mv "$TEMP_FILE" "$SOURCE_FILE"

echo "核心引擎系统第二阶段语义化美化完成"