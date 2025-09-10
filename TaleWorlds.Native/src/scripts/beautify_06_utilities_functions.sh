#!/bin/bash

# 06_utilities.c 函数名美化脚本
# 将带有A0、A1等后缀的函数名改为更语义化的名称

echo "开始美化06_utilities.c中的函数名..."

# 创建临时文件
TEMP_FILE="/tmp/06_utilities_temp.c"
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 复制原文件到临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 定义函数名替换规则
declare -A FUNCTION_REPLACEMENTS=(
    # 数据查询和检索相关函数
    ["QueryAndRetrieveSystemDataA0"]="QueryAndRetrieveSystemDataPrimary"
    ["QueryAndRetrieveSystemDataA1"]="QueryAndRetrieveSystemDataSecondary"
    ["QueryAndRetrieveSystemDataA2"]="QueryAndRetrieveSystemDataTertiary"
    
    # 系统操作上下文验证相关函数
    ["ValidateSystemOperationContextA0"]="ValidateSystemOperationContextPrimary"
    ["ValidateSystemOperationContextA1"]="ValidateSystemOperationContextSecondary"
    
    # 内存分配相关函数
    ["AllocateSystemMemoryA0"]="AllocateSystemMemoryPrimary"
    ["AllocateSystemMemoryA1"]="AllocateSystemMemorySecondary"
    ["AllocateSystemMemoryA2"]="AllocateSystemMemoryTertiary"
    
    # 内存资源释放相关函数
    ["ReleaseMemoryResourceA0"]="ReleaseMemoryResourcePrimary"
    ["ReleaseMemoryResourceA1"]="ReleaseMemoryResourceSecondary"
    ["ReleaseMemoryResourceA2"]="ReleaseMemoryResourceTertiary"
    
    # 系统事件清理相关函数
    ["CleanupSystemEventA0"]="CleanupSystemEventPrimary"
    ["CleanupSystemEventA1"]="CleanupSystemEventSecondary"
    ["CleanupSystemEventA2"]="CleanupSystemEventTertiary"
    
    # 浮点数据处理相关函数
    ["ProcessFloatingPointDataA0"]="ProcessFloatingPointDataPrimary"
    ["ProcessFloatingPointDataA1"]="ProcessFloatingPointDataSecondary"
    ["ProcessFloatingPointDataValidationA0"]="ProcessFloatingPointDataValidationPrimary"
    ["ProcessFloatingPointDataValidationA1"]="ProcessFloatingPointDataValidationSecondary"
    
    # 浮点数转换相关函数
    ["ConvertFloatingPointDataA0"]="ConvertFloatingPointDataPrimary"
    ["ConvertFloatingPointDataA1"]="ConvertFloatingPointDataSecondary"
    
    # 验证上下文更新相关函数
    ["UpdateValidationContextA0"]="UpdateValidationContextPrimary"
    ["UpdateValidationContextA1"]="UpdateValidationContextSecondary"
    
    # 操作范围验证相关函数
    ["ValidateOperationRangeA0"]="ValidateOperationRangePrimary"
    ["ValidateOperationRangeA1"]="ValidateOperationRangeSecondary"
    
    # 系统数据传输相关函数
    ["ProcessSystemDataTransferA0"]="ProcessSystemDataTransferPrimary"
    ["ProcessSystemDataTransferA1"]="ProcessSystemDataTransferSecondary"
    
    # 操作范围数据获取相关函数
    ["GetOperationRangeDataA0"]="GetOperationRangeDataPrimary"
    ["GetOperationRangeDataA1"]="GetOperationRangeDataSecondary"
    
    # 数据同步处理相关函数
    ["ProcessDataSynchronizationA0"]="ProcessDataSynchronizationPrimary"
    ["ProcessDataSynchronizationA1"]="ProcessDataSynchronizationSecondary"
    
    # 数据块处理相关函数
    ["ProcessDataBlockOperationA0"]="ProcessDataBlockOperationPrimary"
    ["ProcessDataBlockOperationA1"]="ProcessDataBlockOperationSecondary"
    
    # 数据块验证相关函数
    ["ValidateDataBlockA0"]="ValidateDataBlockPrimary"
    ["ValidateDataBlockA1"]="ValidateDataBlockSecondary"
    ["ValidateDataBlockStatusA0"]="ValidateDataBlockStatusPrimary"
    ["ValidateDataBlockStatusA1"]="ValidateDataBlockStatusSecondary"
    
    # 多段数据处理相关函数
    ["ProcessMultiSegmentDataA0"]="ProcessMultiSegmentDataPrimary"
    ["ProcessMultiSegmentDataA1"]="ProcessMultiSegmentDataSecondary"
    
    # 数据同步执行相关函数
    ["ExecuteDataSynchronizationA0"]="ExecuteDataSynchronizationPrimary"
    ["ExecuteDataSynchronizationA1"]="ExecuteDataSynchronizationSecondary"
    
    # 二进制数据处理相关函数
    ["ProcessBinaryDataA0"]="ProcessBinaryDataPrimary"
    ["ProcessBinaryDataA1"]="ProcessBinaryDataSecondary"
    
    # 网络状态验证相关函数
    ["ValidateNetworkStatusA0"]="ValidateNetworkStatusPrimary"
    ["ValidateNetworkStatusA1"]="ValidateNetworkStatusSecondary"
    
    # 系统配置相关函数
    ["SaveSystemConfigurationA0"]="SaveSystemConfigurationPrimary"
    ["LoadSystemConfigurationA0"]="LoadSystemConfigurationPrimary"
    ["ValidateSystemConfigurationA0"]="ValidateSystemConfigurationPrimary"
    
    # 异常处理器设置相关函数
    ["SetDefaultExceptionHandlerA28"]="SetDefaultExceptionHandlerPrimary"
    ["SetDefaultExceptionHandlerA30"]="SetDefaultExceptionHandlerSecondary"
    ["SetDefaultExceptionHandler29"]="SetDefaultExceptionHandlerTertiary"
    ["SetDefaultExceptionHandlerA31"]="SetDefaultExceptionHandlerQuaternary"
    
    # 系统内存池初始化相关函数
    ["InitializeSystemMemoryPoolA0"]="InitializeSystemMemoryPoolPrimary"
    ["InitializeSystemMemoryAndSetupA2"]="InitializeSystemMemoryAndSetupTertiary"
    ["InitializeSystemMemoryPoolAndConfigureCache"]="InitializeSystemMemoryPoolWithCache"
)

# 执行函数名替换
for old_name in "${!FUNCTION_REPLACEMENTS[@]}"; do
    new_name="${FUNCTION_REPLACEMENTS[$old_name]}"
    echo "替换: $old_name -> $new_name"
    
    # 使用sed进行替换
    sed -i "s/\b${old_name}\b/${new_name}/g" "$TEMP_FILE"
done

# 检查替换是否成功
if [ $? -eq 0 ]; then
    echo "函数名替换完成"
    
    # 备份原文件
    cp "$INPUT_FILE" "${INPUT_FILE}.backup"
    
    # 替换原文件
    mv "$TEMP_FILE" "$INPUT_FILE"
    
    echo "06_utilities.c 函数名美化完成"
else
    echo "函数名替换失败"
    rm -f "$TEMP_FILE"
    exit 1
fi