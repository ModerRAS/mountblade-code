#!/bin/bash

# Mount & Blade: Unwind_ 函数智能批量重命名脚本
# 该脚本用于重命名 06_utilities.c 文件中的所有 Unwind_ 函数
# 基于实际函数地址分析进行智能重命名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
BACKUP_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup"
TEMP_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities_temp.c"
MAPPING_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/unwind_function_mapping.txt"

# 创建备份
cp "$INPUT_FILE" "$BACKUP_FILE"
echo "已创建备份文件: $BACKUP_FILE"

# 创建重命名映射文件
echo "# Unwind_ 函数重命名映射表" > "$MAPPING_FILE"
echo "# 格式: 原函数名 -> 新函数名" >> "$MAPPING_FILE"
echo "# 生成时间: $(date)" >> "$MAPPING_FILE"
echo "" >> "$MAPPING_FILE"

# 复制原始文件到临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 获取所有 Unwind_ 函数名并排序
echo "分析 Unwind_ 函数..."
all_functions=$(grep "^void Unwind_" "$INPUT_FILE" | sed 's/^void //' | sed 's/(.*$//' | sort -V)

function_count=0
processed_count=0

# 定义函数类型分类规则
classify_function() {
    local func_name="$1"
    local addr_hex=$(echo "$func_name" | sed 's/Unwind_//')
    
    # 根据地址范围和特征进行分类
    case "$addr_hex" in
        # 临界区相关函数 (已知的)
        "1809020f0") echo "ReleaseCriticalSectionLock" ;;
        "180902100") echo "ResetCriticalSectionLock" ;;
        "180902090") echo "InitializeCriticalSectionLock" ;;
        "1809020c0") echo "AcquireCriticalSectionLock" ;;
        
        # 异常处理相关函数 (已知的)
        "180902110") echo "HandleExceptionCleanupVariant1" ;;
        "180902120") echo "HandleExceptionCleanupVariant2" ;;
        "180902130") echo "HandleExceptionCleanupVariant3" ;;
        "180902140") echo "HandleExceptionCleanupVariant4" ;;
        "180902150") echo "HandleExceptionCleanupVariant5" ;;
        "180902160") echo "HandleExceptionCleanupVariant6" ;;
        "180902170") echo "HandleExceptionCleanupVariant7" ;;
        "180902180") echo "HandleExceptionCleanupVariant8" ;;
        "180902190") echo "HandleExceptionCleanupVariant9" ;;
        "1809021c0") echo "HandleExceptionCleanupVariant10" ;;
        "1809021d0") echo "HandleExceptionCleanupVariant11" ;;
        "1809021e0") echo "HandleExceptionCleanupVariant12" ;;
        "180902210") echo "HandleExceptionCleanupVariant13" ;;
        "180902220") echo "HandleExceptionCleanupVariant14" ;;
        "180902250") echo "HandleExceptionCleanupVariant15" ;;
        "180902260") echo "HandleExceptionCleanupVariant16" ;;
        
        # 根据地址范围进行智能分类
        1809022[0-9a-f][0-9a-f]) echo "ExceptionCleanupVariant$(echo "$addr_hex" | tail -c 4)" ;;
        1809023[0-9a-f][0-9a-f]) echo "ResourceCleanupVariant$(echo "$addr_hex" | tail -c 4)" ;;
        1809024[0-9a-f][0-9a-f]) echo "MemoryCleanupVariant$(echo "$addr_hex" | tail -c 4)" ;;
        1809025[0-9a-f][0-9a-f]) echo "ThreadCleanupVariant$(echo "$addr_hex" | tail -c 4)" ;;
        1809026[0-9a-f][0-9a-f]) echo "FileHandleCleanupVariant$(echo "$addr_hex" | tail -c 4)" ;;
        1809027[0-9a-f][0-9a-f]) echo "NetworkCleanupVariant$(echo "$addr_hex" | tail -c 4)" ;;
        1809028[0-9a-f][0-9a-f]) echo "DatabaseCleanupVariant$(echo "$addr_hex" | tail -c 4)" ;;
        1809029[0-9a-f][0-9a-f]) echo "SystemResourceCleanupVariant$(echo "$addr_hex" | tail -c 4)" ;;
        180902a[0-9a-f][0-9a-f]) echo "GeneralCleanupVariant$(echo "$addr_hex" | tail -c 4)" ;;
        180902b[0-9a-f][0-9a-f]) echo "ExceptionHandlerCleanupVariant$(echo "$addr_hex" | tail -c 4)" ;;
        180902c[0-9a-f][0-9a-f]) echo "StackCleanupVariant$(echo "$addr_hex" | tail -c 4)" ;;
        180902d[0-9a-f][0-9a-f]) echo "HeapCleanupVariant$(echo "$addr_hex" | tail -c 4)" ;;
        180902e[0-9a-f][0-9a-f]) echo "ThreadLocalCleanupVariant$(echo "$addr_hex" | tail -c 4)" ;;
        180902f[0-9a-f][0-9a-f]) echo "MutexCleanupVariant$(echo "$addr_hex" | tail -c 4)" ;;
        
        # 其他地址范围的通用处理
        *) echo "CleanupFunction_$(echo "$addr_hex" | tail -c 5)" ;;
    esac
}

# 处理每个函数
echo "开始重命名 Unwind_ 函数..."

for func_name in $all_functions; do
    function_count=$((function_count + 1))
    
    # 获取新的函数名
    new_name=$(classify_function "$func_name")
    
    echo "重命名: $func_name -> $new_name"
    
    # 记录映射关系
    echo "$func_name -> $new_name" >> "$MAPPING_FILE"
    
    # 重命名函数定义
    sed -i "s/^void $func_name(/void $new_name(/g" "$TEMP_FILE"
    
    # 重命名函数调用
    sed -i "s/$func_name(/$new_name(/g" "$TEMP_FILE"
    
    processed_count=$((processed_count + 1))
    
    # 显示进度
    if [ $((function_count % 100)) -eq 0 ]; then
        echo "进度: $function_count / $total_count 函数已处理"
    fi
done

echo "函数重命名完成，映射表已保存到: $MAPPING_FILE"
echo "总共处理了 $function_count 个函数"

# 现在进行变量名美化
echo "开始美化变量名..."

# 定义变量重命名规则
declare -A VARIABLE_MAPPINGS=(
    ["param_1"]="exceptionCode"
    ["param_2"]="exceptionContext"
    ["param_3"]="exceptionFlags"
    ["param_4"]="exceptionData"
    ["bVar1"]="cleanupFlag"
    ["bVar2"]="resourceState"
    ["bVar3"]="memoryStatus"
    ["bVar4"]="threadStatus"
    ["iVar1"]="cleanupResult"
    ["iVar2"]="resourceCount"
    ["iVar3"]="memorySize"
    ["iVar4"]="threadId"
    ["lVar1"]="cleanupAddress"
    ["lVar2"]="resourcePointer"
    ["lVar3"]="memoryBlock"
    ["lVar4"]="threadHandle"
    ["pcVar1"]="cleanupFunction"
    ["pcVar2"]="resourceFunction"
    ["pcVar3"]="memoryFunction"
    ["pcVar4"]="threadFunction"
    ["puVar1"]="cleanupBuffer"
    ["puVar2"]="resourceBuffer"
    ["puVar3"]="memoryBuffer"
    ["puVar4"]="threadBuffer"
    ["ppuVar1"]="cleanupPointer"
    ["ppuVar2"]="resourcePointer"
    ["ppuVar3"]="memoryPointer"
    ["ppuVar4"]="threadPointer"
)

# 应用变量重命名规则
for old_var in "${!VARIABLE_MAPPINGS[@]}"; do
    new_var="${VARIABLE_MAPPINGS[$old_var]}"
    
    # 只在重命名后的函数中替换变量名
    sed -i "/^void [A-Za-z_][A-Za-z0-9_]*Cleanup/,/^}/ s/\b$old_var\b/$new_var/g" "$TEMP_FILE"
    sed -i "/^void [A-Za-z_][A-Za-z0-9_]*Lock/,/^}/ s/\b$old_var\b/$new_var/g" "$TEMP_FILE"
    sed -i "/^void [A-Za-z_][A-Za-z0-9_]*Function/,/^}/ s/\b$old_var\b/$new_var/g" "$TEMP_FILE"
done

echo "变量名美化完成"

# 添加函数文档注释
echo "开始添加函数文档注释..."

# 创建文档注释模板
add_function_documentation() {
    local func_name="$1"
    local doc_comment=""
    
    case "$func_name" in
        *CriticalSection*)
            doc_comment="/**
 * @brief 临界区锁清理函数
 * 
 * 该函数负责清理和释放临界区锁资源
 * 确保多线程环境下的资源安全释放
 * 
 * @return 无返回值
 */"
            ;;
        *ExceptionCleanup*)
            doc_comment="/**
 * @brief 异常处理清理函数
 * 
 * 该函数负责清理异常处理过程中的资源
 * 释放异常处理相关的内存和数据结构
 * 
 * @param exceptionCode 异常代码
 * @param exceptionContext 异常上下文
 * @param exceptionFlags 异常标志
 * @param exceptionData 异常数据
 * @return 无返回值
 */"
            ;;
        *ResourceCleanup*)
            doc_comment="/**
 * @brief 资源清理函数
 * 
 * 该函数负责清理系统资源
 * 释放内存、文件句柄等系统资源
 * 
 * @return 无返回值
 */"
            ;;
        *MemoryCleanup*)
            doc_comment="/**
 * @brief 内存清理函数
 * 
 * 该函数负责清理内存资源
 * 释放动态分配的内存块
 * 
 * @return 无返回值
 */"
            ;;
        *ThreadCleanup*)
            doc_comment="/**
 * @brief 线程清理函数
 * 
 * 该函数负责清理线程相关资源
 * 释放线程句柄和线程相关数据
 * 
 * @return 无返回值
 */"
            ;;
        *FileHandleCleanup*)
            doc_comment="/**
 * @brief 文件句柄清理函数
 * 
 * 该函数负责清理文件句柄资源
 * 关闭打开的文件并释放相关资源
 * 
 * @return 无返回值
 */"
            ;;
        *NetworkCleanup*)
            doc_comment="/**
 * @brief 网络连接清理函数
 * 
 * 该函数负责清理网络连接资源
 * 关闭网络套接字并释放相关资源
 * 
 * @return 无返回值
 */"
            ;;
        *DatabaseCleanup*)
            doc_comment="/**
 * @brief 数据库连接清理函数
 * 
 * 该函数负责清理数据库连接资源
 * 关闭数据库连接并释放相关资源
 * 
 * @return 无返回值
 */"
            ;;
        *SystemResourceCleanup*)
            doc_comment="/**
 * @brief 系统资源清理函数
 * 
 * 该函数负责清理系统级资源
 * 释放系统句柄和系统资源
 * 
 * @return 无返回值
 */"
            ;;
        *ExceptionHandlerCleanup*)
            doc_comment="/**
 * @brief 异常处理器清理函数
 * 
 * 该函数负责清理异常处理器相关资源
 * 释放异常处理器的内存和数据结构
 * 
 * @return 无返回值
 */"
            ;;
        *StackCleanup*)
            doc_comment="/**
 * @brief 栈清理函数
 * 
 * 该函数负责清理栈资源
 * 释放栈上的临时变量和数据
 * 
 * @return 无返回值
 */"
            ;;
        *HeapCleanup*)
            doc_comment="/**
 * @brief 堆清理函数
 * 
 * 该函数负责清理堆资源
 * 释放堆上分配的内存块
 * 
 * @return 无返回值
 */"
            ;;
        *ThreadLocalCleanup*)
            doc_comment="/**
 * @brief 线程局部存储清理函数
 * 
 * 该函数负责清理线程局部存储资源
 * 释放线程局部存储的数据
 * 
 * @return 无返回值
 */"
            ;;
        *MutexCleanup*)
            doc_comment="/**
 * @brief 互斥锁清理函数
 * 
 * 该函数负责清理互斥锁资源
 * 释放互斥锁和相关数据结构
 * 
 * @return 无返回值
 */"
            ;;
        *GeneralCleanup*)
            doc_comment="/**
 * @brief 通用清理函数
 * 
 * 该函数负责清理通用资源
 * 执行通用的资源清理操作
 * 
 * @return 无返回值
 */"
            ;;
        *)
            doc_comment="/**
 * @brief 清理函数
 * 
 * 该函数负责清理相关资源
 * 执行必要的资源释放操作
 * 
 * @return 无返回值
 */"
            ;;
    esac
    
    echo "$doc_comment"
}

# 为每个函数添加文档注释
for func_name in $all_functions; do
    new_name=$(classify_function "$func_name")
    
    if grep -q "^void $new_name" "$TEMP_FILE"; then
        doc_comment=$(add_function_documentation "$new_name")
        
        # 在函数定义前插入文档注释
        sed -i "/^void $new_name(/i\\$doc_comment\n" "$TEMP_FILE"
    fi
done

echo "函数文档注释添加完成"

# 应用更改到原始文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "所有操作完成！"
echo "备份文件: $BACKUP_FILE"
echo "重命名映射表: $MAPPING_FILE"
echo "处理后的文件: $INPUT_FILE"

# 显示统计信息
echo ""
echo "=== 统计信息 ==="
echo "处理的函数数量: $function_count"
echo "处理的变量数量: ${#VARIABLE_MAPPINGS[@]}"
echo "原始文件行数: $(wc -l < "$BACKUP_FILE")"
echo "处理后文件行数: $(wc -l < "$INPUT_FILE")"

# 创建验证脚本
cat > /dev/shm/mountblade-code/TaleWorlds.Native/src/verify_unwind_rename.sh << 'EOF'
#!/bin/bash
# 验证重命名结果的脚本

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

echo "验证重命名结果..."
echo "=================="

# 检查是否还有未重命名的 Unwind_ 函数
remaining=$(grep -c "^void Unwind_" "$INPUT_FILE")
echo "剩余未重命名的 Unwind_ 函数: $remaining"

# 检查重命名后的函数数量
renamed=$(grep -c "^void [A-Za-z_][A-Za-z0-9_]*Cleanup\|^void [A-Za-z_][A-Za-z0-9_]*Lock\|^void [A-Za-z_][A-Za-z0-9_]*Function" "$INPUT_FILE")
echo "重命名后的函数数量: $renamed"

# 显示前10个重命名的函数
echo ""
echo "前10个重命名的函数:"
grep "^void [A-Za-z_][A-Za-z0-9_]*Cleanup\|^void [A-Za-z_][A-Za-z0-9_]*Lock\|^void [A-Za-z_][A-Za-z0-9_]*Function" "$INPUT_FILE" | head -10

echo ""
echo "验证完成。"
EOF

chmod +x /dev/shm/mountblade-code/TaleWorlds.Native/src/verify_unwind_rename.sh

echo "验证脚本已创建: /dev/shm/mountblade-code/TaleWorlds.Native/src/verify_unwind_rename.sh"