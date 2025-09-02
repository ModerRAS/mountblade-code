#!/bin/bash

# 变量重命名脚本 - 美化02_core_engine.c文件中的变量名

# 创建临时文件
TEMP_FILE=$(mktemp)
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 复制原始文件到临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 定义变量替换映射
declare -A VARIABLE_MAP=(
    # Stack变量重命名
    ["StackVariable50"]="StackBufferContext"
    ["StackVariable70"]="StackMemorySize"
    ["StackVariable78"]="StackValidationFlag"
    ["StackVariable90"]="StackOperationFlag"
    ["StackVariable98"]="StackSystemConfig"
    ["StackVariable140"]="StackDataBuffer"
    ["StackVariable198"]="StackMemoryBlock"
    ["StackVariable380"]="StackReturnCode"
    ["StackVariable500"]="StackProcessCounter"
    ["StackVariable508"]="StackProcessFlag"
    ["StackVariable1B8"]="StackLargeBuffer"
    
    # pStack变量重命名
    ["pStackVariable50"]="pStackContextBuffer"
    ["pStackVariable70"]="pStackMemoryBlock"
    ["pStackVariable140"]="pStackDataBuffer"
    ["pStackVariable198"]="pStackProcessBlock"
    ["pStackVariable1B8"]="pStackLargeBuffer"
    
    # SystemConfigTemplate变量重命名
    ["SystemConfigTemplateA"]="SystemConfigTemplateStandard"
    ["SystemConfigTemplateB"]="SystemConfigTemplateBasic"
    ["SystemConfigTemplateC"]="SystemConfigTemplateAdvanced"
    ["SystemConfigTemplateD"]="SystemConfigTemplateExtended"
    ["SystemConfigTemplateA68"]="SystemConfigTemplateInitA"
    ["SystemConfigTemplateB28"]="SystemConfigTemplateInitB"
    ["SystemConfigTemplateB58"]="SystemConfigTemplateNetA"
    ["SystemConfigTemplateB70"]="SystemConfigTemplateNetB"
    ["SystemConfigTemplateB88"]="SystemConfigTemplateNetC"
    ["SystemConfigTemplateBA8"]="SystemConfigTemplateNetD"
    ["SystemConfigTemplateBD8"]="SystemConfigTemplateNetE"
    ["SystemConfigTemplateBF0"]="SystemConfigTemplateNetF"
    ["SystemConfigTemplateBC8"]="SystemConfigTemplateTempA"
    ["SystemConfigTemplateBC0"]="SystemConfigTemplateTempB"
    
    # SystemMemoryBuffer变量重命名
    ["SystemMemoryBufferF550"]="SystemMemoryBufferPrimary"
    ["SystemMemoryBufferF5B0"]="SystemMemoryBufferSecondary"
    ["SystemMemoryBufferF538"]="SystemMemoryBufferConfig"
    ["SystemMemoryBufferF648"]="SystemMemoryBufferData"
    ["SystemMemoryBufferEDA8"]="SystemMemoryBufferNetworkA"
    ["SystemMemoryBufferEEC8"]="SystemMemoryBufferNetworkB"
    ["SystemMemoryBufferEEB8"]="SystemMemoryBufferNetworkC"
    ["SystemMemoryBufferEED8"]="SystemMemoryBufferNetworkD"
    ["SystemMemoryBufferF040"]="SystemMemoryBufferSystem"
    
    # aStack变量重命名
    ["aStackVariable70"]="aStackConfigBuffer"
    ["aStackVariable198"]="aStackProcessBuffer"
    ["aStackVariable1B8"]="aStackLargeBuffer"
    ["aStackVariable380"]="aStackDataBuffer"
    ["aStackVariable140"]="aStackTempBuffer"
    
    # 其他变量重命名
    ["SystemConfigTemplateF"]="SystemConfigTemplateFinal"
    ["SystemDataTabled0"]="SystemDataTableMain"
    ["SystemFunctionPointerD"]="SystemFunctionCallback"
    ["SystemNetworkConfiguration"]="SystemNetworkConfig"
    ["SystemConstantDataB"]="SystemConstantBuffer"
    ["SystemMemoryTableA"]="SystemMemoryTablePrimary"
    ["SystemMemoryTableB"]="SystemMemoryTableSecondary"
    ["SystemMemoryTableC"]="SystemMemoryTableTertiary"
    ["SystemMemoryTableD"]="SystemMemoryTableQuaternary"
    ["SystemValidationTableA"]="SystemValidationPrimary"
    ["SystemValidationTableB"]="SystemValidationSecondary"
    ["SystemDataTemplate4F08"]="SystemDataTemplateMain"
    ["MessageBoxTemplateB24"]="MessageBoxTemplateStandard"
    ["SystemMemoryOffset5"]="SystemMemoryOffsetNet"
    ["SystemMemoryOffset48"]="SystemMemoryOffsetProcess"
    ["SystemTimeoutCounterB"]="SystemTimeoutValue"
    ["SystemInfoHandlerTemplate"]="SystemInfoTemplate"
    ["SystemOperationFlag98"]="SystemOperationFlagNet"
    ["SystemStackFlagB0"]="SystemStackFlagProcess"
    ["SystemDataStructureTemplate"]="SystemDataTemplate"
    ["ThreadLocalStorageTemplate"]="ThreadTemplate"
    ["SystemNullTemplate"]="NullTemplate"
    ["SystemNetworkHandlerTemplate"]="NetworkHandlerTemplate"
    ["SystemPriorityLevel"]="PriorityLevel"
    ["SystemDataTemplateF"]="DataTemplateFinal"
    ["SystemTimeoutValue"]="TimeoutCounter"
    ["StringTemplateBuffer"]="StringTemplate"
)

# 执行变量替换
for old_name in "${!VARIABLE_MAP[@]}"; do
    new_name="${VARIABLE_MAP[$old_name]}"
    echo "替换: $old_name -> $new_name"
    
    # 使用sed进行替换，注意处理单词边界
    sed -i "s/\b$old_name\b/$new_name/g" "$TEMP_FILE"
done

# 替换文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "变量重命名完成"