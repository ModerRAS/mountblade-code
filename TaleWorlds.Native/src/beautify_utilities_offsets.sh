#!/bin/bash

# 美化06_utilities.c中的硬编码偏移量
# 为常用的十六进制偏移量添加语义化的常量定义

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 备份原始文件
cp "$FILE" "$FILE.backup"

# 在文件头部添加新的常量定义
cat >> /tmp/new_constants.txt << 'EOF'

// 动态发现的偏移量常量定义
#define ResourceCallbackDataOffset 0x18                // 资源回调数据偏移量
#define SecondaryValidationOffset34 0x34                // 次要验证偏移量34
#define VectorComponentOffset34 0x34                   // 向量组件偏移量34
#define FloatDataStorageOffset20 0x20                  // 浮点数据存储偏移量20
#define ResourceStatusFlagOffset35 0x35                // 资源状态标志偏移量35
#define SystemRegisterOffset40 0x40                    // 系统寄存器偏移量40
#define ExceptionHandlerOffset80 0x80                  // 异常处理器偏移量80
#define ExceptionHandlerContextOffset900 0x900        // 异常处理上下文偏移量900
#define ExceptionHandlerCallbackOffset910 0x910        // 异常处理器回调偏移量910
#define ExceptionHandlerCleanupOffset8e0 0x8e0          // 异常处理器清理偏移量8e0
#define ExceptionHandlerStateOffset8e8 0x8e8          // 异常处理器状态偏移量8e8
#define ExceptionHandlerFlagOffset8f8 0x8f8            // 异常处理器标志偏移量8f8
#define ExceptionHandlerSecondaryOffset8c0 0x8c0       // 异常处理器次级偏移量8c0
#define ExceptionHandlerSecondaryStateOffset8c8 0x8c8 // 异常处理器次级状态偏移量8c8
#define ExceptionHandlerSecondaryFlagOffset8d8 0x8d8   // 异常处理器次级标志偏移量8d8
#define ExceptionHandlerTertiaryOffset8a0 0x8a0        // 异常处理器三级偏移量8a0
#define ExceptionHandlerTertiaryStateOffset8a8 0x8a8   // 异常处理器三级状态偏移量8a8
#define ExceptionHandlerTertiaryFlagOffset8b8 0x8b8   // 异常处理器三级标志偏移量8b8
#define ExceptionHandlerQuaternaryOffset880 0x880      // 异常处理器四级偏移量880
#define ExceptionHandlerQuaternaryStateOffset888 0x888 // 异常处理器四级状态偏移量888
#define ExceptionHandlerQuaternaryFlagOffset898 0x898 // 异常处理器四级标志偏移量898
#define ExceptionHandlerQuinaryOffset860 0x860        // 异常处理器五级偏移量860
#define ExceptionHandlerQuinaryStateOffset868 0x868   // 异常处理器五级状态偏移量868
#define ExceptionHandlerQuinaryFlagOffset878 0x878   // 异常处理器五级标志偏移量878
#define ExceptionHandlerCleanupOffsetB20 0xb20         // 异常处理器清理偏移量B20
#define ExceptionHandlerCleanupStateOffsetB28 0xb28   // 异常处理器清理状态偏移量B28
#define ExceptionHandlerCleanupFlagOffsetB38 0xb38     // 异常处理器清理标志偏移量B38
#define ExceptionHandlerCleanupSecondaryOffsetB00 0xb00 // 异常处理器清理次级偏移量B00
#define ExceptionHandlerCleanupSecondaryStateOffsetB08 0xb08 // 异常处理器清理次级状态偏移量B08
#define ExceptionHandlerCleanupSecondaryFlagOffsetB18 0xb18 // 异常处理器清理次级标志偏移量B18
#define ExceptionHandlerCleanupTertiaryOffsetAe0 0xae0 // 异常处理器清理三级偏移量Ae0
#define ExceptionHandlerCleanupTertiaryStateOffsetAe8 0xae8 // 异常处理器清理三级状态偏移量Ae8
#define ExceptionHandlerCleanupTertiaryFlagOffsetAf8 0xaf8 // 异常处理器清理三级标志偏移量Af8
#define ExceptionHandlerCleanupQuaternaryOffsetAc0 0xac0 // 异常处理器清理四级偏移量Ac0
#define ExceptionHandlerCleanupQuaternaryStateOffsetAc8 0xac8 // 异常处理器清理四级状态偏移量Ac8
#define ExceptionHandlerCleanupQuaternaryFlagOffsetAd8 0xad8 // 异常处理器清理四级标志偏移量Ad8
#define ExceptionHandlerCleanupQuinaryOffsetAa0 0xaa0   // 异常处理器清理五级偏移量Aa0
#define ExceptionHandlerCleanupQuinaryStateOffsetAa8 0xaa8 // 异常处理器清理五级状态偏移量Aa8
#define ExceptionHandlerCleanupQuinaryFlagOffsetAb8 0xab8 // 异常处理器清理五级标志偏移量Ab8

EOF

# 在第一个常量定义之前插入新的常量
sed -i '/^\/\/ 系统常量定义$/r /tmp/new_constants.txt' "$FILE"

# 替换硬编码的偏移量
sed -i 's/+ 0x18/+ ResourceCallbackDataOffset/g' "$FILE"
sed -i 's/+ 0x34/+ SecondaryValidationOffset34/g' "$FILE"
sed -i 's/+ 0x20/+ FloatDataStorageOffset20/g' "$FILE"
sed -i 's/+ 0x35/+ ResourceStatusFlagOffset35/g' "$FILE"
sed -i 's/+ 0x40/+ SystemRegisterOffset40/g' "$FILE"
sed -i 's/+ 0x80/+ ExceptionHandlerOffset80/g' "$FILE"
sed -i 's/+ 0x900/+ ExceptionHandlerContextOffset900/g' "$FILE"
sed -i 's/+ 0x910/+ ExceptionHandlerCallbackOffset910/g' "$FILE"
sed -i 's/+ 0x8e0/+ ExceptionHandlerCleanupOffset8e0/g' "$FILE"
sed -i 's/+ 0x8e8/+ ExceptionHandlerStateOffset8e8/g' "$FILE"
sed -i 's/+ 0x8f8/+ ExceptionHandlerFlagOffset8f8/g' "$FILE"
sed -i 's/+ 0x8c0/+ ExceptionHandlerSecondaryOffset8c0/g' "$FILE"
sed -i 's/+ 0x8c8/+ ExceptionHandlerSecondaryStateOffset8c8/g' "$FILE"
sed -i 's/+ 0x8d8/+ ExceptionHandlerSecondaryFlagOffset8d8/g' "$FILE"
sed -i 's/+ 0x8a0/+ ExceptionHandlerTertiaryOffset8a0/g' "$FILE"
sed -i 's/+ 0x8a8/+ ExceptionHandlerTertiaryStateOffset8a8/g' "$FILE"
sed -i 's/+ 0x8b8/+ ExceptionHandlerTertiaryFlagOffset8b8/g' "$FILE"
sed -i 's/+ 0x880/+ ExceptionHandlerQuaternaryOffset880/g' "$FILE"
sed -i 's/+ 0x888/+ ExceptionHandlerQuaternaryStateOffset888/g' "$FILE"
sed -i 's/+ 0x898/+ ExceptionHandlerQuaternaryFlagOffset898/g' "$FILE"
sed -i 's/+ 0x860/+ ExceptionHandlerQuinaryOffset860/g' "$FILE"
sed -i 's/+ 0x868/+ ExceptionHandlerQuinaryStateOffset868/g' "$FILE"
sed -i 's/+ 0x878/+ ExceptionHandlerQuinaryFlagOffset878/g' "$FILE"
sed -i 's/+ 0xb20/+ ExceptionHandlerCleanupOffsetB20/g' "$FILE"
sed -i 's/+ 0xb28/+ ExceptionHandlerCleanupStateOffsetB28/g' "$FILE"
sed -i 's/+ 0xb38/+ ExceptionHandlerCleanupFlagOffsetB38/g' "$FILE"
sed -i 's/+ 0xb00/+ ExceptionHandlerCleanupSecondaryOffsetB00/g' "$FILE"
sed -i 's/+ 0xb08/+ ExceptionHandlerCleanupSecondaryStateOffsetB08/g' "$FILE"
sed -i 's/+ 0xb18/+ ExceptionHandlerCleanupSecondaryFlagOffsetB18/g' "$FILE"
sed -i 's/+ 0xae0/+ ExceptionHandlerCleanupTertiaryOffsetAe0/g' "$FILE"
sed -i 's/+ 0xae8/+ ExceptionHandlerCleanupTertiaryStateOffsetAe8/g' "$FILE"
sed -i 's/+ 0xaf8/+ ExceptionHandlerCleanupTertiaryFlagOffsetAf8/g' "$FILE"
sed -i 's/+ 0xac0/+ ExceptionHandlerCleanupQuaternaryOffsetAc0/g' "$FILE"
sed -i 's/+ 0xac8/+ ExceptionHandlerCleanupQuaternaryStateOffsetAc8/g' "$FILE"
sed -i 's/+ 0xad8/+ ExceptionHandlerCleanupQuaternaryFlagOffsetAd8/g' "$FILE"
sed -i 's/+ 0xaa0/+ ExceptionHandlerCleanupQuinaryOffsetAa0/g' "$FILE"
sed -i 's/+ 0xaa8/+ ExceptionHandlerCleanupQuinaryStateOffsetAa8/g' "$FILE"
sed -i 's/+ 0xab8/+ ExceptionHandlerCleanupQuinaryFlagOffsetAb8/g' "$FILE"

echo "美化完成！"
rm -f /tmp/new_constants.txt