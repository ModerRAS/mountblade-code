#!/bin/bash

# 批量美化99_unmatched_functions.c文件中的UNK_变量
# 这个脚本将自动为未定义的UNK_变量添加语义化名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
TEMP_FILE="/tmp/beautify_unmatched_variables.sh"

# 创建替换脚本
cat > "$TEMP_FILE" << 'EOF'
#!/bin/bash

# 系统内存管理相关变量
sed -i 's/undefined UNK_180a058c8;/\/\/ 系统内存块管理器A7\n#define SystemMemoryBlockManagerA7 UNK_180a058c8\nundefined SystemMemoryBlockManagerA7;/' "$1"
sed -i 's/undefined UNK_180a058e0;/\/\/ 系统内存块管理器A8\n#define SystemMemoryBlockManagerA8 UNK_180a058e0\nundefined SystemMemoryBlockManagerA8;/' "$1"
sed -i 's/undefined UNK_180a058f0;/\/\/ 系统内存块管理器A9\n#define SystemMemoryBlockManagerA9 UNK_180a058f0\nundefined SystemMemoryBlockManagerA9;/' "$1"
sed -i 's/undefined UNK_180a05900;/\/\/ 系统内存块管理器A10\n#define SystemMemoryBlockManagerA10 UNK_180a05900\nundefined SystemMemoryBlockManagerA10;/' "$1"

# 系统缓存管理相关变量
sed -i 's/undefined UNK_180a05928;/\/\/ 系统缓存管理器A1\n#define SystemCacheManagerA1 UNK_180a05928\nundefined SystemCacheManagerA1;/' "$1"
sed -i 's/undefined UNK_180a05940;/\/\/ 系统缓存管理器A2\n#define SystemCacheManagerA2 UNK_180a05940\nundefined SystemCacheManagerA2;/' "$1"
sed -i 's/undefined UNK_180a05950;/\/\/ 系统缓存管理器A3\n#define SystemCacheManagerA3 UNK_180a05950\nundefined SystemCacheManagerA3;/' "$1"
sed -i 's/undefined UNK_180a05960;/\/\/ 系统缓存管理器A4\n#define SystemCacheManagerA4 UNK_180a05960\nundefined SystemCacheManagerA4;/' "$1"
sed -i 's/undefined UNK_180a05970;/\/\/ 系统缓存管理器A5\n#define SystemCacheManagerA5 UNK_180a05970\nundefined SystemCacheManagerA5;/' "$1"

# 系统队列管理相关变量
sed -i 's/undefined UNK_180a05978;/\/\/ 系统队列管理器A1\n#define SystemQueueManagerA1 UNK_180a05978\nundefined SystemQueueManagerA1;/' "$1"
sed -i 's/undefined UNK_180a05998;/\/\/ 系统队列管理器A2\n#define SystemQueueManagerA2 UNK_180a05998\nundefined SystemQueueManagerA2;/' "$1"
sed -i 's/undefined UNK_180a059b8;/\/\/ 系统队列管理器A3\n#define SystemQueueManagerA3 UNK_180a059b8\nundefined SystemQueueManagerA3;/' "$1"
sed -i 's/undefined UNK_180a059c8;/\/\/ 系统队列管理器A4\n#define SystemQueueManagerA4 UNK_180a059c8\nundefined SystemQueueManagerA4;/' "$1"
sed -i 's/undefined UNK_180a059f8;/\/\/ 系统队列管理器A5\n#define SystemQueueManagerA5 UNK_180a059f8\nundefined SystemQueueManagerA5;/' "$1"

# 系统堆栈管理相关变量
sed -i 's/undefined UNK_180a05a20;/\/\/ 系统堆栈管理器A1\n#define SystemStackManagerA1 UNK_180a05a20\nundefined SystemStackManagerA1;/' "$1"
sed -i 's/undefined UNK_180a05a30;/\/\/ 系统堆栈管理器A2\n#define SystemStackManagerA2 UNK_180a05a30\nundefined SystemStackManagerA2;/' "$1"
sed -i 's/undefined UNK_180a05a40;/\/\/ 系统堆栈管理器A3\n#define SystemStackManagerA3 UNK_180a05a40\nundefined SystemStackManagerA3;/' "$1"
sed -i 's/undefined UNK_180a05a58;/\/\/ 系统堆栈管理器A4\n#define SystemStackManagerA4 UNK_180a05a58\nundefined SystemStackManagerA4;/' "$1"
sed -i 's/undefined UNK_180a05a68;/\/\/ 系统堆栈管理器A5\n#define SystemStackManagerA5 UNK_180a05a68\nundefined SystemStackManagerA5;/' "$1"

echo "批量美化完成"
EOF

chmod +x "$TEMP_FILE"
"$TEMP_FILE" "$INPUT_FILE"
rm "$TEMP_FILE"