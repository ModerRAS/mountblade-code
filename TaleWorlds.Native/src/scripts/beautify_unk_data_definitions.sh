#!/bin/bash

# 00_data_definitions.h 文件 UNK_变量美化脚本
# 该脚本用于将文件中的所有 UNK_ 变量重命名为有意义的语义化名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"

# 创建备份
cp "$INPUT_FILE" "${INPUT_FILE}.backup"

# 定义 UNK_变量到语义化名称的映射
declare -A unk_mapping=(
    # 系统配置相关
    ["UNK_180a177f0"]="SystemConfigPrimary"
    ["UNK_180a17770"]="SystemConfigSecondary"
    ["UNK_180a17798"]="SystemConfigTertiary"
    ["UNK_180a17830"]="SystemConfigQuaternary"
    ["UNK_180a17880"]="SystemConfigQuinary"
    ["UNK_180a17a68"]="SystemConfigSenary"
    ["UNK_180a17960"]="SystemConfigOctonary"
    ["UNK_180a17a18"]="SystemConfigNonary"
    ["UNK_180a179d0"]="SystemConfigDenary"
    ["UNK_180a17a38"]="SystemConfigUndenary"
    
    # 文件和路径相关
    ["UNK_180a0cf4c"]="SystemFileOpenMode"
    ["UNK_18042d5d0"]="SystemDefaultFilePointer"
    ["UNK_180a1a918"]="SystemDefaultTemplatePath"
    ["UNK_180a353b8"]="SystemConfigMessagePath"
    
    # 内存和缓冲区相关
    ["UNK_180a1b368"]="SystemMemoryPoolPrimary"
    ["UNK_180a1b3f0"]="SystemMemoryPoolSecondary"
    ["UNK_180a1a2f0"]="SystemDataBufferPrimary"
    ["UNK_180a2fc20"]="SystemDataBufferSecondary"
    ["UNK_18045f210"]="SystemBufferPointerPrimary"
    ["UNK_18045f200"]="SystemBufferPointerSecondary"
    
    # 字符串处理相关
    ["UNK_180a02fc8"]="SystemStringFormatPrimary"
    ["UNK_180a02fa0"]="SystemStringFormatSecondary"
    
    # 数据处理相关
    ["UNK_1804ce1a0"]="SystemDataProcessor"
    ["UNK_180a0c2b8"]="SystemGlobalDataPointer"
    
    # 网络请求相关字符串
    ["UNK_180a389f0"]="NetworkRequestStringLogin"
    ["UNK_180a38a08"]="NetworkRequestStringAuth"
    ["UNK_180a38c28"]="NetworkRequestResultSuccess"
    ["UNK_180a389d8"]="NetworkRequestStringConnect"
    ["UNK_180a38aa8"]="NetworkRequestStringVerify"
    ["UNK_180a38ac0"]="NetworkRequestStringValidate"
    ["UNK_180a38ba0"]="NetworkRequestResultConnected"
    ["UNK_180a38a20"]="NetworkRequestResultPending"
    ["UNK_180a38978"]="NetworkRequestStringDisconnect"
    ["UNK_180a38c98"]="NetworkRequestResultDisconnected"
    ["UNK_180a38958"]="NetworkRequestStringTimeout"
    ["UNK_180a38c08"]="NetworkRequestStringError"
    ["UNK_180a38ea0"]="NetworkRequestResultTimeout"
    ["UNK_180a389b0"]="NetworkRequestStringRetry"
    ["UNK_180a38988"]="NetworkRequestStringCancel"
    ["UNK_180a38a88"]="NetworkRequestStringAbort"
    ["UNK_180a38d38"]="NetworkRequestStringStatus"
    ["UNK_180a38ad8"]="NetworkRequestStringInfo"
    ["UNK_180a38a78"]="NetworkRequestStringData"
    ["UNK_180a38ec0"]="NetworkRequestResultComplete"
    ["UNK_180a38a48"]="NetworkRequestStringRequest"
    ["UNK_180a38b48"]="NetworkRequestStringResponse"
    ["UNK_180a38c40"]="NetworkRequestStringMessage"
    ["UNK_180a38ca8"]="NetworkRequestStringCommand"
    ["UNK_180a38e38"]="NetworkRequestResultFailed"
    
    # 系统验证相关
    ["UNK_180a38a3c"]="SystemValidationData"
    ["UNK_180a38a60"]="SystemValidationConfig"
    ["UNK_180a38bb8"]="SystemValidationStatus"
    ["UNK_180a38e78"]="SystemValidationResult"
    ["UNK_180a38b20"]="SystemValidationCheck"
    ["UNK_180a38ae8"]="SystemValidationTest"
    ["UNK_180a38b60"]="SystemValidationVerify"
    ["UNK_180a38b48"]="SystemValidationConfirm"
    ["UNK_180a38c40"]="SystemValidationProcess"
    ["UNK_180a38c78"]="SystemValidationHandler"
    ["UNK_180a38c58"]="SystemValidationManager"
    ["UNK_180a38bd0"]="SystemValidationController"
    ["UNK_180a38c08"]="SystemValidationEngine"
    ["UNK_180a29944"]="SystemValidationCore"
    ["UNK_180a38d10"]="SystemValidationModule"
    ["UNK_180a38d58"]="SystemValidationSystem"
    ["UNK_180a38ca8"]="SystemValidationService"
    ["UNK_180a38ce8"]="SystemValidationComponent"
    ["UNK_180a38cc0"]="SystemValidationInterface"
    ["UNK_180a38dd8"]="SystemValidationFunction"
    ["UNK_180a38df8"]="SystemValidationMethod"
    ["UNK_180a38de8"]="SystemValidationProcedure"
    ["UNK_180a38db8"]="SystemValidationAlgorithm"
    ["UNK_180a38b88"]="SystemValidationProtocol"
    ["UNK_180a38b70"]="SystemValidationStandard"
    ["UNK_180a38d20"]="SystemValidationSpecification"
    ["UNK_180a38e60"]="SystemValidationImplementation"
    
    # 其他系统变量
    ["UNK_18076804b"]="SystemExceptionHandler"
    ["UNK_18097c490"]="SystemErrorManager"
    ["UNK_18098a100"]="SystemHashTable"
    ["UNK_18098b490"]="SystemFileManager"
    ["UNK_18098b470"]="SystemFileHandler"
    ["UNK_18098b520"]="SystemFileProcessor"
    ["UNK_18098b580"]="SystemFileSystem"
    ["UNK_18098b5f8"]="SystemFilePathResolver"
    ["UNK_18098b5d8"]="SystemFileNameResolver"
    ["UNK_18098b610"]="SystemFileValidator"
    ["UNK_18098b640"]="SystemFileChecker"
)

echo "开始处理 UNK_变量重命名..."

# 遍历映射表，进行替换
for unk_var in "${!unk_mapping[@]}"; do
    new_name="${unk_mapping[$unk_var]}"
    
    # 使用 sed 进行替换
    sed -i "s/$unk_var/$new_name/g" "$INPUT_FILE"
    
    echo "已替换: $unk_var -> $new_name"
done

echo "UNK_变量重命名完成！"
echo "原文件已备份为: ${INPUT_FILE}.backup"