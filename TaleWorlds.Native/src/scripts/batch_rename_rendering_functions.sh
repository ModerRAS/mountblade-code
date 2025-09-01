#!/bin/bash

# 批量重命名03_rendering.c中的FUN_函数
# 这个脚本会自动重命名函数并添加文档注释

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 函数重命名映射表
declare -A FUNCTION_MAP=(
    ["FUN_180275a60"]="ProcessRenderObjectData"
    ["FUN_180275cf0"]="ValidateRenderObjectContext"
    ["FUN_180275e10"]="UpdateRenderObjectParameters"
    ["FUN_180275f30"]="CalculateRenderTransformMatrix"
    ["FUN_18027606a"]="ExecuteRenderPipelineOperation"
    ["FUN_18027613a"]="GetRenderSystemStatus"
    ["FUN_1802762d8"]="GetRenderFrameCounter"
    ["FUN_180276370"]="GetRenderDeviceStatus"
    ["FUN_1802763d0"]="SetupRenderShaderParameters"
    ["FUN_18027649f"]="AcquireRenderResourceLock"
    ["FUN_1802764fd"]="CheckRenderMemoryStatus"
    ["FUN_180276610"]="SetRenderViewportParameters"
    ["FUN_1802768b0"]="ProcessRenderBufferData"
    ["FUN_180276a70"]="CalculateRenderProjectionMatrix"
    ["FUN_180276ad4"]="ReleaseRenderResources"
    ["FUN_180276ade"]="CleanupRenderContext"
    ["FUN_180276d52"]="ExecuteRenderDrawCommand"
    ["FUN_180276eef"]="InitializeRenderTextures"
    ["FUN_180276f1a"]="InitializeRenderBuffers"
    ["FUN_180276f30"]="SetupRenderMaterialProperties"
)

# 遍历所有需要重命名的函数
for old_name in "${!FUNCTION_MAP[@]}"; do
    new_name="${FUNCTION_MAP[$old_name]}"
    
    # 检查函数是否存在
    if grep -q "void $old_name\|undefined8 $old_name\|ulonglong $old_name\|byte $old_name\|undefined1 $old_name" "$FILE_PATH"; then
        echo "正在处理函数: $old_name -> $new_name"
        
        # 创建临时文件
        temp_file=$(mktemp)
        
        # 处理文件，重命名函数并添加注释
        awk -v old="$old_name" -v new="$new_name" '
        /^\/\/ 函数:.*'"$old_name"'/ {
            # 找到函数注释行，准备替换
            in_function = 1
            func_start = NR
            next
        }
        in_function && /^[a-zA-Z_][a-zA-Z0-9_]*[[:space:]]+'"$old_name"'[[:space:]]*\(/ {
            # 找到函数定义行
            # 提取函数参数
            match($0, /^[a-zA-Z_][a-zA-Z0-9_]*[[:space:]]+'"$old_name"'[[:space:]]*\((.*)\)[[:space:]]*$/, params)
            func_params = substr($0, RSTART, RLENGTH)
            
            # 生成新的函数注释
            print "/**"
            print " * @brief " new "函数"
            print " * "
            print " * 该函数是渲染系统的核心功能函数，负责处理相关的渲染操作。"
            print " * "
            print " * 原始函数名为" old "，现已重命名为" new
            print " */"
            
            # 替换函数名
            gsub(old, new)
            print
            in_function = 0
            next
        }
        {
            # 替换函数调用
            gsub(old, new)
            print
        }
        ' "$FILE_PATH" > "$temp_file"
        
        # 替换原文件
        mv "$temp_file" "$FILE_PATH"
        echo "完成函数重命名: $old_name -> $new_name"
    fi
done

echo "批量重命名完成！"