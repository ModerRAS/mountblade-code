#!/bin/bash

# 美化00_data_definitions.h文件中的Label_标签
# 将Ghidra生成的Label_180xxxxxx标签替换为语义化名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 备份原始文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 定义标签替换规则
# 根据上下文分析，这些标签主要用于流程控制
declare -A LABEL_REPLACEMENTS=(
    ["Label_1802a83bc"]="SystemConfigurationCompletionLabel"
    ["Label_18032b96c"]="StringProcessingValidationLabel"
    ["Label_18032b98e"]="StringProcessingSuccessLabel"
    ["Label_18032baef"]="SecondaryParameterValidationLabel"
    ["Label_18032bb25"]="ParameterComparisonSuccessLabel"
    ["Label_18032bf87"]="MemoryAllocationSuccessLabel"
    ["Label_180609067"]="LoopStartLabel"
    ["Label_180609070"]="LoopContinueLabel"
    ["Label_18060905e"]="LoopExitLabel"
    ["Label_18060906e"]="LoopConditionLabel"
    ["Label_180608a24"]="StackBufferProcessingLabel"
    ["Label_180608a96"]="SecondaryStackProcessingLabel"
    ["Label_180608bee"]="TertiaryStackProcessingLabel"
    ["Label_180608e70"]="QuaternaryStackProcessingLabel"
    ["Label_180608dad"]="QuinaryStackProcessingLabel"
    ["Label_180608fee"]="SenaryStackProcessingLabel"
    ["Label_180608e4c"]="SeptenaryStackProcessingLabel"
    ["Label_180608c78"]="OctonaryStackProcessingLabel"
    ["Label_180608b18"]="NonaryStackProcessingLabel"
    ["Label_180608fb7"]="DenaryStackProcessingLabel"
    ["Label_180608fc1"]="UndenaryStackProcessingLabel"
    ["Label_180608fce"]="DuodenaryStackProcessingLabel"
    ["Label_18060901e"]="TerdenaryStackProcessingLabel"
    ["Label_180608e99"]="QuattuordecenaryStackProcessingLabel"
    ["Label_180608f53"]="QuindecenaryStackProcessingLabel"
    ["Label_180608f97"]="SexdecenaryStackProcessingLabel"
    ["Label_180608f73"]="SeptendecenaryStackProcessingLabel"
    ["Label_180608ebd"]="OctodecenaryStackProcessingLabel"
    # 网络相关标签
    ["Label_18060af51"]="NetworkRequestValidationLabel"
    ["Label_18060b9cb"]="NetworkRequestTimeoutLabel"
    ["Label_18060ad3e"]="NetworkRequestErrorLabel"
    ["Label_18060acd8"]="NetworkRequestFailureLabel"
    ["Label_18060a114"]="NetworkRequestAbortLabel"
    ["Label_18060a91e"]="NetworkRequestRetryLabel"
    ["Label_18060ba49"]="NetworkRequestQueueLabel"
    ["Label_18060ba67"]="NetworkRequestPendingLabel"
    ["Label_18060bbae"]="NetworkRequestCompleteLabel"
    ["Label_18060b6a9"]="NetworkRequestInitLabel"
    ["Label_18060b6c7"]="NetworkRequestStartLabel"
    ["Label_18060b6e5"]="NetworkRequestProcessLabel"
    ["Label_18060b703"]="NetworkRequestExecuteLabel"
    ["Label_1806093cc"]="NetworkRequestFinalizeLabel"
    ["Label_180609b20"]="NetworkRequestCleanupLabel"
    ["Label_18060b76f"]="NetworkRequestSuccessLabel"
    ["Label_18060b78d"]="NetworkRequestConfirmLabel"
    ["Label_18060b7c9"]="NetworkRequestValidateLabel"
    ["Label_18060b7e7"]="NetworkRequestVerifyLabel"
    ["Label_18060b805"]="NetworkRequestCheckLabel"
    ["Label_18060b841"]="NetworkRequestApproveLabel"
    ["Label_18060b85f"]="NetworkRequestAcceptLabel"
    ["Label_18060b87d"]="NetworkRequestGrantLabel"
    ["Label_18060b89b"]="NetworkRequestAllowLabel"
    ["Label_18060b8d7"]="NetworkRequestPermitLabel"
    ["Label_18060b8f9"]="NetworkRequestAuthorizeLabel"
    ["Label_18060b32d"]="NetworkRequestSetupLabel"
    ["Label_18060b34b"]="NetworkRequestPrepareLabel"
    ["Label_18060b369"]="NetworkRequestReadyLabel"
    ["Label_18060b387"]="NetworkRequestLaunchLabel"
    ["Label_18060b3a5"]="NetworkRequestBeginLabel"
    ["Label_18060b0e8"]="NetworkRequestMainLabel"
    ["Label_18060b0f9"]="NetworkRequestStatusLabel"
    ["Label_18060ad8c"]="NetworkRequestHandlerLabel"
    ["Label_18060b1d7"]="NetworkRequestConfigLabel"
    ["Label_18060b1f5"]="NetworkRequestParamLabel"
    ["Label_18060ae39"]="NetworkRequestDataLabel"
    ["Label_18060ae57"]="NetworkRequestBufferLabel"
    ["Label_18060ae93"]="NetworkRequestMemoryLabel"
    ["Label_18060aeb1"]="NetworkRequestStorageLabel"
    ["Label_18060a103"]="NetworkRequestExitLabel"
    ["Label_1806091a3"]="NetworkRequestReturnLabel"
)

# 执行标签替换
echo "开始替换Label_标签..."

for label in "${!LABEL_REPLACEMENTS[@]}"; do
    replacement="${LABEL_REPLACEMENTS[$label]}"
    echo "替换 $label 为 $replacement"
    sed "s/$label/$replacement/g" "$FILE_PATH" > "$TEMP_FILE"
    mv "$TEMP_FILE" "$FILE_PATH"
done

echo "Label_标签替换完成"

# 统计替换结果
echo "统计替换结果:"
for label in "${!LABEL_REPLACEMENTS[@]}"; do
    replacement="${LABEL_REPLACEMENTS[$label]}"
    count=$(grep -c "$replacement" "$FILE_PATH" 2>/dev/null || echo 0)
    if [ $count -gt 0 ]; then
        echo "$replacement: $count 次"
    fi
done

echo "美化完成"