#!/bin/bash

# 批量美化Unwind_函数的脚本
# 为06_utilities.c文件中的Unwind_函数添加语义化名称和文档注释

# 定义要替换的函数映射
declare -A function_mappings=(
    ["Unwind_180910060"]="CleanupExceptionMemoryBlocksA3"
    ["Unwind_180910070"]="CleanupExceptionMemoryBlocksA4"
    ["Unwind_180910080"]="CleanupExceptionMemoryBlocksA5"
    ["Unwind_180910090"]="CleanupExceptionMemoryBlocksA6"
    ["Unwind_1809100a0"]="CleanupExceptionMemoryBlocksA7"
    ["Unwind_1809100b0"]="CleanupExceptionMemoryBlocksA8"
    ["Unwind_1809100d0"]="CleanupExceptionMemoryBlocksA9"
    ["Unwind_1809100e0"]="CleanupExceptionMemoryBlocksA10"
    ["Unwind_1809100f0"]="CleanupExceptionMemoryBlocksA11"
    ["Unwind_180910100"]="CleanupExceptionMemoryBlocksA12"
    ["Unwind_180910110"]="CleanupExceptionMemoryBlocksA13"
    ["Unwind_180910130"]="CleanupExceptionMemoryBlocksA14"
    ["Unwind_180910150"]="CleanupExceptionMemoryBlocksA15"
    ["Unwind_180910160"]="CleanupExceptionMemoryBlocksA16"
    ["Unwind_180910190"]="CleanupExceptionMemoryBlocksA17"
    ["Unwind_1809101c0"]="CleanupExceptionMemoryBlocksA18"
    ["Unwind_1809101e0"]="CleanupExceptionMemoryBlocksA19"
    ["Unwind_180910300"]="CleanupExceptionMemoryBlocksA20"
    ["Unwind_180910310"]="CleanupExceptionMemoryBlocksA21"
    ["Unwind_180910320"]="CleanupExceptionMemoryBlocksA22"
    ["Unwind_180910330"]="CleanupExceptionMemoryBlocksA23"
    ["Unwind_180910340"]="CleanupExceptionMemoryBlocksA24"
    ["Unwind_180910350"]="CleanupExceptionMemoryBlocksA25"
    ["Unwind_180910360"]="CleanupExceptionMemoryBlocksA26"
    ["Unwind_180910390"]="CleanupExceptionMemoryBlocksA27"
    ["Unwind_1809103a0"]="CleanupExceptionMemoryBlocksA28"
    ["Unwind_1809103b0"]="CleanupExceptionMemoryBlocksA29"
    ["Unwind_1809103c0"]="CleanupExceptionMemoryBlocksA30"
    ["Unwind_1809103d0"]="CleanupExceptionMemoryBlocksA31"
    ["Unwind_1809103e0"]="CleanupExceptionMemoryBlocksA32"
    ["Unwind_1809103f0"]="CleanupExceptionMemoryBlocksA33"
    ["Unwind_180910400"]="CleanupExceptionMemoryBlocksA34"
    ["Unwind_180910410"]="CleanupExceptionMemoryBlocksA35"
    ["Unwind_180910420"]="CleanupExceptionMemoryBlocksA36"
    ["Unwind_180910430"]="CleanupExceptionMemoryBlocksA37"
    ["Unwind_180910440"]="CleanupExceptionMemoryBlocksA38"
    ["Unwind_180910450"]="CleanupExceptionMemoryBlocksA39"
    ["Unwind_180910470"]="CleanupExceptionMemoryBlocksA40"
    ["Unwind_180910490"]="CleanupExceptionMemoryBlocksA41"
    ["Unwind_1809104b0"]="CleanupExceptionMemoryBlocksA42"
    ["Unwind_1809104d0"]="CleanupExceptionMemoryBlocksA43"
    ["Unwind_1809104f0"]="CleanupExceptionMemoryBlocksA44"
    ["Unwind_180910510"]="CleanupExceptionMemoryBlocksA45"
    ["Unwind_180910530"]="CleanupExceptionMemoryBlocksA46"
    ["Unwind_180910560"]="CleanupExceptionMemoryBlocksA47"
    ["Unwind_180910580"]="CleanupExceptionMemoryBlocksA48"
    ["Unwind_180910590"]="CleanupExceptionMemoryBlocksA49"
    ["Unwind_180910920"]="CleanupExceptionMemoryBlocksA50"
    ["Unwind_180910940"]="CleanupExceptionMemoryBlocksA51"
    ["Unwind_180910960"]="CleanupExceptionMemoryBlocksA52"
    ["Unwind_180910980"]="CleanupExceptionMemoryBlocksA53"
)

# 遍历所有函数映射并执行替换
for original_name in "${!function_mappings[@]}"; do
    new_name="${function_mappings[$original_name]}"
    
    # 查找函数定义的位置
    line_number=$(grep -n "^void $original_name(" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c | cut -d: -f1)
    
    if [ -n "$line_number" ]; then
        echo "处理函数: $original_name -> $new_name (行号: $line_number)"
        
        # 创建临时文档注释
        temp_file="/tmp/temp_function_$original_name.c"
        cat > "$temp_file" << EOF
/**
 * @brief 清理异常处理上下文内存块${new_name#CleanupExceptionMemoryBlocks}
 * 
 * 该函数负责清理异常处理上下文中的内存块，处理内存块的释放和清理工作
 * 
 * @param operationBase 操作基址
 * @param dataBuffer 数据缓冲区
 * 
 * @note 原始函数名：$original_name
 */
void $new_name
EOF
        
        # 替换函数定义
        sed -i "${line_number}s/^void $original_name.*/$(cat $temp_file)/" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
        
        # 清理临时文件
        rm -f "$temp_file"
    fi
done

echo "批量替换完成！"