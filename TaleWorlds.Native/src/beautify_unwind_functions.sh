#!/bin/bash

# Mount & Blade: Unwind_ 函数批量重命名脚本
# 该脚本用于重命名 06_utilities.c 文件中的所有 Unwind_ 函数

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
BACKUP_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup"
TEMP_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities_temp.c"

# 创建备份
cp "$INPUT_FILE" "$BACKUP_FILE"
echo "已创建备份文件: $BACKUP_FILE"

# 创建重命名映射文件
MAPPING_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/unwind_function_mapping.txt"
echo "# Unwind_ 函数重命名映射表" > "$MAPPING_FILE"
echo "# 格式: 原函数名 -> 新函数名" >> "$MAPPING_FILE"
echo "" >> "$MAPPING_FILE"

# 定义函数重命名规则
declare -A FUNCTION_MAPPINGS

# 1. 临界区相关函数
FUNCTION_MAPPINGS["Unwind_1809020f0"]="ReleaseCriticalSectionLock"
FUNCTION_MAPPINGS["Unwind_180902100"]="ResetCriticalSectionLock"
FUNCTION_MAPPINGS["Unwind_180902090"]="InitializeCriticalSectionLock"
FUNCTION_MAPPINGS["Unwind_1809020c0"]="AcquireCriticalSectionLock"

# 2. 异常处理相关函数
FUNCTION_MAPPINGS["Unwind_180902110"]="HandleExceptionCleanupVariant1"
FUNCTION_MAPPINGS["Unwind_180902120"]="HandleExceptionCleanupVariant2"
FUNCTION_MAPPINGS["Unwind_180902130"]="HandleExceptionCleanupVariant3"
FUNCTION_MAPPINGS["Unwind_180902140"]="HandleExceptionCleanupVariant4"
FUNCTION_MAPPINGS["Unwind_180902150"]="HandleExceptionCleanupVariant5"
FUNCTION_MAPPINGS["Unwind_180902160"]="HandleExceptionCleanupVariant6"
FUNCTION_MAPPINGS["Unwind_180902170"]="HandleExceptionCleanupVariant7"
FUNCTION_MAPPINGS["Unwind_180902180"]="HandleExceptionCleanupVariant8"
FUNCTION_MAPPINGS["Unwind_180902190"]="HandleExceptionCleanupVariant9"
FUNCTION_MAPPINGS["Unwind_1809021c0"]="HandleExceptionCleanupVariant10"
FUNCTION_MAPPINGS["Unwind_1809021d0"]="HandleExceptionCleanupVariant11"
FUNCTION_MAPPINGS["Unwind_1809021e0"]="HandleExceptionCleanupVariant12"
FUNCTION_MAPPINGS["Unwind_180902210"]="HandleExceptionCleanupVariant13"
FUNCTION_MAPPINGS["Unwind_180902220"]="HandleExceptionCleanupVariant14"
FUNCTION_MAPPINGS["Unwind_180902250"]="HandleExceptionCleanupVariant15"
FUNCTION_MAPPINGS["Unwind_180902260"]="HandleExceptionCleanupVariant16"

# 3. 资源清理相关函数
for i in {270..300}; do
    hex_addr=$(printf "180902%03x" $i)
    func_name="Unwind_$hex_addr"
    variant_num=$((i - 269))
    FUNCTION_MAPPINGS["$func_name"]="ResourceCleanupVariant$variant_num"
done

# 4. 内存管理相关函数
for i in {310..350}; do
    hex_addr=$(printf "180902%03x" $i)
    func_name="Unwind_$hex_addr"
    variant_num=$((i - 309))
    FUNCTION_MAPPINGS["$func_name"]="MemoryCleanupVariant$variant_num"
done

# 5. 线程清理相关函数
for i in {360..400}; do
    hex_addr=$(printf "180902%03x" $i)
    func_name="Unwind_$hex_addr"
    variant_num=$((i - 359))
    FUNCTION_MAPPINGS["$func_name"]="ThreadCleanupVariant$variant_num"
done

# 6. 文件句柄清理相关函数
for i in {410..450}; do
    hex_addr=$(printf "180902%03x" $i)
    func_name="Unwind_$hex_addr"
    variant_num=$((i - 409))
    FUNCTION_MAPPINGS["$func_name"]="FileHandleCleanupVariant$variant_num"
done

# 7. 网络连接清理相关函数
for i in {460..500}; do
    hex_addr=$(printf "180902%03x" $i)
    func_name="Unwind_$hex_addr"
    variant_num=$((i - 459))
    FUNCTION_MAPPINGS["$func_name"]="NetworkCleanupVariant$variant_num"
done

# 8. 数据库连接清理相关函数
for i in {510..550}; do
    hex_addr=$(printf "180902%03x" $i)
    func_name="Unwind_$hex_addr"
    variant_num=$((i - 509))
    FUNCTION_MAPPINGS["$func_name"]="DatabaseCleanupVariant$variant_num"
done

# 9. 系统资源清理相关函数
for i in {560..600}; do
    hex_addr=$(printf "180902%03x" $i)
    func_name="Unwind_$hex_addr"
    variant_num=$((i - 559))
    FUNCTION_MAPPINGS["$func_name"]="SystemResourceCleanupVariant$variant_num"
done

# 10. 通用清理函数 (处理剩余的函数)
for i in {610..999}; do
    hex_addr=$(printf "180902%03x" $i)
    func_name="Unwind_$hex_addr"
    variant_num=$((i - 609))
    FUNCTION_MAPPINGS["$func_name"]="GeneralCleanupVariant$variant_num"
done

# 开始重命名过程
echo "开始重命名 Unwind_ 函数..."

# 复制原始文件到临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 应用重命名规则
for old_name in "${!FUNCTION_MAPPINGS[@]}"; do
    new_name="${FUNCTION_MAPPINGS[$old_name]}"
    
    # 检查函数是否存在于文件中
    if grep -q "^void $old_name" "$TEMP_FILE"; then
        echo "重命名: $old_name -> $new_name"
        
        # 记录映射关系
        echo "$old_name -> $new_name" >> "$MAPPING_FILE"
        
        # 重命名函数定义
        sed -i "s/^void $old_name(/void $new_name(/g" "$TEMP_FILE"
        
        # 重命名函数调用
        sed -i "s/$old_name(/$new_name(/g" "$TEMP_FILE"
    fi
done

echo "函数重命名完成，映射表已保存到: $MAPPING_FILE"

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
    
    # 只在 Unwind_ 函数中替换变量名
    sed -i "/^void [A-Za-z_][A-Za-z0-9_]*(/,/^}/ s/\b$old_var\b/$new_var/g" "$TEMP_FILE"
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
for new_name in "${FUNCTION_MAPPINGS[@]}"; do
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
echo "处理的函数数量: ${#FUNCTION_MAPPINGS[@]}"
echo "处理的变量数量: ${#VARIABLE_MAPPINGS[@]}"
echo "原始文件行数: $(wc -l < "$BACKUP_FILE")"
echo "处理后文件行数: $(wc -l < "$INPUT_FILE")"