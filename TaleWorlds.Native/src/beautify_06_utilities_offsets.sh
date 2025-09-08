#!/bin/bash

# 美化06_utilities.c文件中的硬编码偏移量
# 将硬编码的数字替换为语义化的宏定义

echo "开始美化06_utilities.c文件中的硬编码偏移量..."

# 备份原始文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities_backup.c

# 定义一些常见的偏移量映射
# 这些偏移量根据代码上下文进行语义化命名

# 内存管理相关偏移量
sed -i 's/+ 0x48/+ MemoryResourceOffset48/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x50/+ ExceptionHandlerContextOffset50/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x58/+ ExceptionHandlerContextOffset58/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x70/+ MemoryPointerTableOffset70/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x80/+ SystemContextOffset80/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x90/+ SystemContextOffset90/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 数据处理相关偏移量
sed -i 's/+ 0x18/+ DataSecondaryOffset18/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x20/+ DataParameterOffset20/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x28/+ SystemParameterOffset28/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x38/+ SystemFloatDataOffset38/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 异常处理相关偏移量
sed -i 's/+ 0x300/+ ExceptionHandlerOffset300/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x3c0/+ ExceptionHandlerOffset3c0/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 内存掩码和标志
sed -i 's/0xff000000/MemoryManagementFlagMask/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/0xffc00000/SystemCleanupFlagffc00000/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 在文件开头添加新的宏定义
# 首先找到插入点（在现有宏定义之后）
INSERT_LINE=$(grep -n "#define SystemDataRecordOffset3c0" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c | cut -d: -f1)

if [ -n "$INSERT_LINE" ]; then
    # 在指定行后插入新的宏定义
    sed -i "${INSERT_LINE}a\\
// 新增的偏移量宏定义\\
#define MemoryResourceOffset48 0x48                    // 内存资源偏移量48\\
#define ExceptionHandlerContextOffset50 0x50          // 异常处理上下文偏移量50\\
#define ExceptionHandlerContextOffset58 0x58          // 异常处理上下文偏移量58\\
#define MemoryPointerTableOffset70 0x70               // 内存指针表偏移量70\\
#define SystemContextOffset80 0x80                   // 系统上下文偏移量80\\
#define SystemContextOffset90 0x90                   // 系统上下文偏移量90\\
#define DataSecondaryOffset18 0x18                    // 数据次级偏移量18\\
#define DataParameterOffset20 0x20                   // 数据参数偏移量20\\
#define SystemParameterOffset28 0x28                 // 系统参数偏移量28\\
#define SystemFloatDataOffset38 0x38                 // 系统浮点数据偏移量38\\
#define ExceptionHandlerOffset300 0x300              // 异常处理器偏移量300\\
#define ExceptionHandlerOffset3c0 0x3c0              // 异常处理器偏移量3c0\\
#define SystemCleanupFlagffc00000 0xffc00000         // 系统清理标志ffc00000\\
" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
fi

echo "硬编码偏移量美化完成"

# 检查修改后的文件
echo "检查修改后的文件..."
grep -n "MemoryResourceOffset48\|ExceptionHandlerContextOffset50\|SystemContextOffset80" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c | head -10

echo "美化脚本执行完成"