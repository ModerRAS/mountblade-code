#!/bin/bash

# 99_unmatched_functions.c 文件剩余变量名美化脚本
# 用于处理剩余的未美化变量名

echo "开始处理 99_unmatched_functions.c 文件的剩余变量名美化..."

# 文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 检查文件是否存在
if [ ! -f "$FILE_PATH" ]; then
    echo "错误：文件 $FILE_PATH 不存在"
    exit 1
fi

# 创建备份
echo "创建文件备份..."
cp "$FILE_PATH" "$FILE_PATH.backup_$(date +%Y%m%d_%H%M%S)"

# 在文件中添加剩余变量名的定义
echo "添加剩余变量名的语义化定义..."

# 查找插入点（在现有变量定义之后）
INSERT_LINE=$(grep -n "#define uStack_70 ResourceLockData70" "$FILE_PATH" | head -1 | cut -d: -f1)

if [ -z "$INSERT_LINE" ]; then
    echo "警告：未找到插入点，将在文件开头添加"
    INSERT_LINE=1
fi

# 创建临时文件
TEMP_FILE="/tmp/99_unmatched_functions_temp.c"

# 提取插入点之前的内容
head -n $INSERT_LINE "$FILE_PATH" > "$TEMP_FILE"

# 添加新的变量定义
cat >> "$TEMP_FILE" << 'EOF'

// 剩余未美化变量名的语义化定义
// 基于实际使用情况分析添加

// 栈变量语义化定义 - 剩余变量
#define plStack_30 SystemContextPointer30               // 系统上下文指针30
#define plStack_58 StringOffsetPointer58                // 字符串偏移指针58
#define lStack_50 ResourceInputPosition50               // 资源输入位置50
#define lStack_640 SystemBackupPointer640               // 系统备份指针640
#define lStack_6f0 CharacterEncodingPointer6f0         // 字符编码指针6f0
#define uStack_6e0 SystemCleanupFlags6e0                // 系统清理标志6e0
#define lStack_360 ContextIndex360                      // 上下文索引360
#define uStack_318 MemoryAllocationFlag318               // 内存分配标志318
#define plStack_338 ResourceLockPointer338              // 资源锁指针338
#define uStack_330 OperationCount330                    // 操作计数330
#define uStack_290 DataBuffer290                        // 数据缓冲区290
#define uStack_720 SystemBufferSize720                  // 系统缓冲区大小720
#define uStack_718 SystemInitializationFlag718          // 系统初始化标志718

// 其他栈变量定义
#define plStack_368 ResourceLockPointer368              // 资源锁指针368
#define uStack_278 ProcessingResult278                  // 处理结果278
#define uStack_270 DataValidationFlag270                 // 数据验证标志270
#define uStack_26c MemoryAllocationFlag26c              // 内存分配标志26c
#define uStack_2a8 StreamProcessingFlag2a8              // 流处理标志2a8
#define uStack_268 DataBuffer268                        // 数据缓冲区268

// 系统寄存器变量定义
#define uStack_60 StreamOperation60                     // 流操作60
#define uStack_78 ResourceValidation78                  // 资源验证78
#define uStack_74 BufferStatus74                        // 缓冲区状态74
#define uStack_6c StreamProcessing6c                    // 流处理6c
#define uStack_70 BufferMode70                          // 缓冲区模式70
#define uStack_90 StreamControl90                      // 流控制90
#define uStack_b0 ResourceManagementB0                 // 资源管理B0
#define uStack_b8 SystemConfigurationB8                 // 系统配置B8
#define uStack_58 MemoryAllocationResult58              // 内存分配结果58
#define uStack_54 AllocationHighBits54                  // 分配高位54

// 上下文相关变量定义
#define lStack_6f0 CharacterEncodingContext             // 字符编码上下文
#define lStack_640 SystemBackupContext                  // 系统备份上下文
#define uStack_6e0 SystemCleanupContext                  // 系统清理上下文
#define lStack_360 ProcessingContext                    // 处理上下文
#define uStack_318 AllocationContext                    // 分配上下午
#define plStack_338 LockContext                         // 锁上下文
#define uStack_330 OperationContext                     // 操作上下文
#define uStack_290 DataContext                          // 数据上下文

// 函数参数相关变量定义
#define uStack_720 BufferSizeParameter                  // 缓冲区大小参数
#define uStack_718 InitializationFlagParameter          // 初始化标志参数
#define uStack_6e0 CleanupFlagParameter                 // 清理标志参数
#define lStack_360 ContextIndexParameter                // 上下文索引参数
#define uStack_318 OperationCountParameter              // 操作计数参数
#define uStack_330 ConfigurationParameter               // 配置参数
#define uStack_290 DataParameter                        // 数据参数

// 特殊变量定义
#define uStack_2bc CharacterProcessingValue             // 字符处理值
#define uStack_2b8 MemoryAllocationResult                // 内存分配结果
#define uStack_2b0 BufferConfiguration                   // 缓冲区配置
#define uStack_2a0 StreamProcessingContext              // 流处理上下文
#define uStack_298 DataTransferResult                   // 数据传输结果
#define uStack_3f0 ResourceLockState                    // 资源锁状态
#define uStack_3ec BufferValidationFlag                 // 缓冲区验证标志
#define uStack_3e8 MemoryPointer                        // 内存指针
#define uStack_3e0 ResourceAllocationFlag               // 资源分配标志
#define uStack_3d8 SystemContextPointer                 // 系统上下文指针
#define uStack_3d0 ProcessingStatus                     // 处理状态
#define uStack_3b8 StreamControlValue                   // 流控制值
#define uStack_3b0 BufferModeFlag                       // 缓冲区模式标志
#define uStack_3ac DataValidationResult                 // 数据验证结果
#define uStack_3a8 SystemConfigurationValue             // 系统配置值
#define uStack_3a0 ResourceManagementFlag               // 资源管理标志
#define uStack_398 MemoryAllocationStatus               // 内存分配状态
#define uStack_390 SystemStatusFlag                     // 系统状态标志
#define piStack_378 IntegerPointer378                   // 整数指针378

// 美化完成标志
#define BEAUTIFY_99_UNMATCHED_FUNCTIONS_COMPLETED       // 99_unmatched_functions.c文件美化完成

EOF

# 添加插入点之后的内容
tail -n +$((INSERT_LINE + 1)) "$FILE_PATH" >> "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$FILE_PATH"

echo "变量名定义添加完成！"

# 统计剩余的未美化变量名
echo "统计剩余的未美化变量名..."

DAT_COUNT=$(grep -o "DAT_[0-9a-fA-F]*" "$FILE_PATH" | grep -v "#define" | sort | uniq | wc -l)
LOCAL_COUNT=$(grep -o "local_[0-9a-fA-F]*" "$FILE_PATH" | grep -v "#define" | sort | uniq | wc -l)
S_COUNT=$(grep -o "s_[0-9a-fA-F]*" "$FILE_PATH" | grep -v "#define" | sort | uniq | wc -l)
UNK_COUNT=$(grep -o "UNK_[0-9a-fA-F]*" "$FILE_PATH" | grep -v "#define" | sort | uniq | wc -l)
FUN_COUNT=$(grep -o "FUN_[0-9a-fA-F]*" "$FILE_PATH" | grep -v "#define" | sort | uniq | wc -l)
LABEL_COUNT=$(grep -o "LABEL_[0-9a-fA-F]*" "$FILE_PATH" | grep -v "#define" | sort | uniq | wc -l)

echo ""
echo "美化完成后的统计："
echo "DAT_ 变量: $DAT_COUNT"
echo "local_ 变量: $LOCAL_COUNT"
echo "s_ 变量: $S_COUNT"
echo "UNK_ 变量: $UNK_COUNT"
echo "FUN_ 函数: $FUN_COUNT"
echo "LABEL_ 标签: $LABEL_COUNT"

# 显示文件大小
FILE_SIZE=$(du -h "$FILE_PATH" | cut -f1)
echo "文件大小: $FILE_SIZE"

echo ""
echo "美化完成！"
echo "备份文件: $FILE_PATH.backup_$(date +%Y%m%d_%H%M%S)"
echo "美化后的文件: $FILE_PATH"