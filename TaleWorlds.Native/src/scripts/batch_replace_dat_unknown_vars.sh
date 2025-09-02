#!/bin/bash

# 批量替换00_data_definitions.h文件中的逆向工程变量名

# 定义文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup.$(date +%Y%m%d_%H%M%S)"

# UnknownData变量替换映射
declare -A UNKNOWN_DATA_REPLACEMENTS=(
    # 字符串数据相关
    ["UnknownData1809fcc58"]="SystemStringDataBase"
    ["UnknownData180a22c48"]="SystemStringDataTemplateM"
    ["UnknownData180a22c30"]="SystemStringDataTemplateN"
    ["UnknownData180a22c18"]="SystemStringDataTemplateO"
    ["UnknownData180a22c00"]="SystemStringDataTemplateP"
    ["UnknownData180a22c98"]="SystemStringDataTemplateR"
    
    # 其他数据变量
    ["Data180a22cb0"]="SystemStringDataTemplateQ"
)

# 系统配置模板变量替换映射
declare -A CONFIG_TEMPLATE_REPLACEMENTS=(
    ["SystemConfigDataTemplateCB48"]="SystemConfigDataTemplateNetwork"
    ["SystemConfigDataTemplateCB80"]="SystemConfigDataTemplateAudio"
    ["SystemConfigDataTemplateCB90"]="SystemConfigDataTemplateVideo"
    ["SystemConfigDataTemplateCB60"]="SystemConfigDataTemplatePhysics"
    ["SystemConfigDataTemplateCB70"]="SystemConfigDataTemplateInput"
    ["SystemConfigDataTemplateCBE0"]="SystemConfigDataTemplateRender"
    ["SystemConfigDataTemplateCBF0"]="SystemConfigDataTemplateMemory"
    ["SystemConfigDataTemplateCBA8"]="SystemConfigDataTemplateThread"
)

# 执行UnknownData变量替换
echo "替换UnknownData变量..."
for old_var in "${!UNKNOWN_DATA_REPLACEMENTS[@]}"; do
    new_var="${UNKNOWN_DATA_REPLACEMENTS[$old_var]}"
    echo "替换 $old_var -> $new_var"
    sed -i "s/${old_var}/${new_var}/g" "$FILE_PATH"
done

# 执行配置模板变量替换
echo "替换配置模板变量..."
for old_var in "${!CONFIG_TEMPLATE_REPLACEMENTS[@]}"; do
    new_var="${CONFIG_TEMPLATE_REPLACEMENTS[$old_var]}"
    echo "替换 $old_var -> $new_var"
    sed -i "s/${old_var}/${new_var}/g" "$FILE_PATH"
done

echo "变量名替换完成"