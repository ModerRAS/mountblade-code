#!/bin/bash

# 批量美化Unwind函数的脚本
# 为Unwind函数添加语义化名称和文档注释

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 备份文件
cp "$FILE_PATH" "$FILE_PATH.tmp_beautify"

# 定义要替换的函数映射
declare -A FUNCTION_MAP=(
    ["Unwind_180903a70"]="CleanupSystemResourceHandlerA70"
    ["Unwind_180903a90"]="CleanupSystemResourceHandlerA90"
    ["Unwind_180903ab0"]="CleanupSystemResourceHandlerAB0"
    ["Unwind_180903ac0"]="CleanupSystemResourceHandlerAC0"
    ["Unwind_180903ad0"]="CleanupSystemResourceHandlerAD0"
    ["Unwind_180903ae0"]="CleanupSystemResourceHandlerAE0"
    ["Unwind_180903af0"]="CleanupSystemResourceHandlerAF0"
    ["Unwind_180903b00"]="CleanupSystemResourceHandlerB00"
    ["Unwind_180903b20"]="CleanupSystemResourceHandlerB20"
    ["Unwind_180903b40"]="CleanupSystemResourceHandlerB40"
)

# 为每个函数添加注释和重命名
for old_name in "${!FUNCTION_MAP[@]}"; do
    new_name="${FUNCTION_MAP[$old_name]}"
    
    # 创建替换模板
    replacement="/**\n * @brief 清理系统资源处理器${new_name: -3}\n * \n * 该函数负责清理系统资源处理器，释放相关资源\n * 重置系统状态并执行必要的清理操作\n * \n * @param ObjectContextParameter 对象上下文参数\n * @param ValidationContextParameter 验证上下文参数\n * @param CleanupOption 清理选项\n * @param CleanupFlag 清理标志\n * @return 无返回值\n * @note 此函数用于系统资源清理和释放\n */\nvoid ${new_name}(uint8_t ObjectContextParameter,int64_t ValidationContextParameter,uint8_t CleanupOption,uint8_t CleanupFlag)"
    
    # 使用sed进行替换
    sed -i "s/void ${old_name}(uint8_t ObjectContextParameter,int64_t ValidationContextParameter,uint8_t CleanupOption,uint8_t CleanupFlag)/${replacement}/g" "$FILE_PATH"
    
    echo "已替换函数: $old_name -> $new_name"
done

echo "Unwind函数批量美化完成"