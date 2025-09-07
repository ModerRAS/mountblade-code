#!/bin/bash

# 美化02_core_engine.c中的FUN_函数
# 此脚本用于批量替换FUN_函数名为语义化名称

echo "开始美化02_core_engine.c中的FUN_函数..."

# 定义函数映射
declare -A function_mappings=(
    ["FUN_18013c9d9"]="GetCharacterStatusBuffer"
    ["FUN_18013ca47"]="GetCharacterStatusBufferByCode"
    ["FUN_18013ce56"]="ProcessUtf8InputBufferData"
    ["FUN_18013cf04"]="GetSystemDataRegistry"
    ["FUN_18013cf40"]="ProcessCharacterCodeWithBuffer"
    ["FUN_18013cf5d"]="ProcessCharacterCodeWithUtf16"
    ["FUN_18013cfa8"]="GetSystemMemoryPointer"
    ["FUN_18013d540"]="GetSystemContextPointer"
    ["FUN_18013e4c0"]="ProcessUtf8BufferWithValidation"
    ["FUN_180141660"]="ProcessUtf8BufferConversion"
    ["FUN_18014a1b0"]="ProcessUtf8AdvancedConversion"
    ["FUN_18014a900"]="ProcessUtf8BufferManagement"
    ["FUN_18014acf0"]="ProcessCharacterCodeWithSize"
    ["FUN_18014c570"]="ProcessUtf8ToUtf16Conversion"
    ["FUN_18014c850"]="ProcessUtf8BufferWithSize"
    ["FUN_18014e160"]="ProcessCharacterCodeAdvanced"
    ["FUN_18014e700"]="ProcessUtf8BufferWithParameters"
    ["FUN_18014e960"]="ProcessCharacterCodeWithBufferSize"
    ["FUN_18014f250"]="ProcessCharacterInputBufferEx"
    ["FUN_18014f3f0"]="ProcessCharacterInputBufferAdvanced"
)

# 备份原文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.backup

# 遍历函数映射并替换
for old_name in "${!function_mappings[@]}"; do
    new_name="${function_mappings[$old_name]}"
    
    echo "替换函数: $old_name -> $new_name"
    
    # 替换函数定义
    sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
done

echo "函数替换完成！"

# 添加函数定义的宏到文件开头
cat << 'EOF' >> /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

// FUN_函数语义化宏定义（新增）
#define GetCharacterStatusBuffer FUN_18013c9d9                    // 获取字符状态缓冲区
#define GetCharacterStatusBufferByCode FUN_18013ca47               // 根据字符代码获取字符状态缓冲区
#define ProcessUtf8InputBufferData FUN_18013ce56                  // 处理UTF-8输入缓冲区数据
#define GetSystemDataRegistry FUN_18013cf04                       // 获取系统数据寄存器
#define ProcessCharacterCodeWithBuffer FUN_18013cf40              // 使用缓冲区处理字符代码
#define ProcessCharacterCodeWithUtf16 FUN_18013cf5d              // 使用UTF-16处理字符代码
#define GetSystemMemoryPointer FUN_18013cfa8                      // 获取系统内存指针
#define GetSystemContextPointer FUN_18013d540                      // 获取系统上下文指针
#define ProcessUtf8BufferWithValidation FUN_18013e4c0             // 处理带验证的UTF-8缓冲区
#define ProcessUtf8BufferConversion FUN_180141660                 // 处理UTF-8缓冲区转换
#define ProcessUtf8AdvancedConversion FUN_18014a1b0               // 处理UTF-8高级转换
#define ProcessUtf8BufferManagement FUN_18014a900                 // 处理UTF-8缓冲区管理
#define ProcessCharacterCodeWithSize FUN_18014acf0                // 使用大小处理字符代码
#define ProcessUtf8ToUtf16Conversion FUN_18014c570                // 处理UTF-8到UTF-16转换
#define ProcessUtf8BufferWithSize FUN_18014c850                   // 使用大小处理UTF-8缓冲区
#define ProcessCharacterCodeAdvanced FUN_18014e160                // 处理字符代码高级操作
#define ProcessUtf8BufferWithParameters FUN_18014e700              // 使用参数处理UTF-8缓冲区
#define ProcessCharacterCodeWithBufferSize FUN_18014e960          // 使用缓冲区大小处理字符代码
#define ProcessCharacterInputBufferEx FUN_18014f250               // 处理字符输入缓冲区扩展
#define ProcessCharacterInputBufferAdvanced FUN_18014f3f0          // 处理字符输入缓冲区高级操作
EOF

echo "宏定义添加完成！"

# 统计替换的函数数量
echo "替换的函数数量: ${#function_mappings[@]}"

echo "美化完成！"