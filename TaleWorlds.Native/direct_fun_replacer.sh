#!/bin/bash

# FUN_函数直接替换脚本
# 直接替换最常见的FUN_函数调用

echo "=== FUN_函数直接替换脚本 ==="
echo "开始时间: $(date)"
echo

# 定义最常见的FUN_函数及其别名
declare -A fun_aliases=(
    ["FUN_1808fcb90"]="SystemInitializer"
    ["FUN_1805a3b20"]="StringProcessor"
    ["FUN_1805b7ac0"]="StatusChecker"
    ["FUN_18051739b"]="ControlFlowHandler"
    ["FUN_1808cf96d"]="ConditionChecker"
    ["FUN_18004e7a0"]="MemoryAllocator"
    ["FUN_18004e7d0"]="MemoryDeallocator"
    ["FUN_18004e800"]="MemoryManager"
    ["FUN_18004e830"]="MemoryInitializer"
    ["FUN_18004e860"]="MemoryCleaner"
    ["FUN_1800e9a94"]="DataProcessor"
    ["FUN_1800e9ac0"]="DataValidator"
    ["FUN_1800e9af0"]="DataTransformer"
    ["FUN_1800e9b20"]="DataManager"
    ["FUN_1800e9b50"]="DataOptimizer"
    ["FUN_180280fd0"]="RenderResourceAcquirer"
    ["FUN_18028c2f0"]="RenderDataProcessor"
    ["FUN_18028c308"]="RenderEntryManager"
    ["FUN_18028c387"]="RenderEntryProcessor"
    ["FUN_180291880"]="RenderParameterManager"
    ["FUN_180119960"]="NetworkAccessController"
    ["FUN_180847110"]="ResourceLockManager"
    ["FUN_18069a490"]="UIDataProcessor"
    ["FUN_18086b47c"]="UIInitializer"
    ["FUN_1808fc050"]="UISecurityChecker"
    ["FUN_0014b6a0"]="UtilityFunction"
    ["FUN_00000000"]="SystemEntryPoint"
    ["FUN_00000001"]="SystemStateInitializer"
    ["FUN_00000002"]="SystemFlagHandler"
    ["FUN_00000003"]="SystemStatusChecker"
    ["FUN_00000004"]="SystemValidator"
    ["FUN_00000005"]="SystemController"
    ["FUN_00000006"]="SystemTerminator"
)

# 统计要处理的文件数量
echo "1. 统计需要处理的文件..."
files_to_process=$(find pretty -name "*.c" -exec grep -l "FUN_1808fcb90\|FUN_1805a3b20\|FUN_1805b7ac0" {} \; | wc -l)
echo "需要处理的文件数量: $files_to_process"

# 创建批量替换脚本
echo "2. 创建批量替换脚本..."
cat > /tmp/direct_replace.sh << 'EOF'
#!/bin/bash

# 直接替换FUN_函数调用

# 定义替换函数
replace_fun_calls() {
    local file="$1"
    local modified=false
    
    # 替换 FUN_1808fcb90
    if grep -q "FUN_1808fcb90" "$file"; then
        sed -i 's/FUN_1808fcb90(/SystemInitializer(/g' "$file"
        if ! grep -q "#define SystemInitializer" "$file"; then
            sed -i '1i#define SystemInitializer FUN_1808fcb90  // 系统初始化器\n' "$file"
        fi
        modified=true
    fi
    
    # 替换 FUN_1805a3b20
    if grep -q "FUN_1805a3b20" "$file"; then
        sed -i 's/FUN_1805a3b20(/StringProcessor(/g' "$file"
        if ! grep -q "#define StringProcessor" "$file"; then
            sed -i '1i#define StringProcessor FUN_1805a3b20  // 字符串处理器\n' "$file"
        fi
        modified=true
    fi
    
    # 替换 FUN_1805b7ac0
    if grep -q "FUN_1805b7ac0" "$file"; then
        sed -i 's/FUN_1805b7ac0(/StatusChecker(/g' "$file"
        if ! grep -q "#define StatusChecker" "$file"; then
            sed -i '1i#define StatusChecker FUN_1805b7ac0  // 状态检查器\n' "$file"
        fi
        modified=true
    fi
    
    # 替换 FUN_18051739b
    if grep -q "FUN_18051739b" "$file"; then
        sed -i 's/FUN_18051739b/ControlFlowHandler/g' "$file"
        if ! grep -q "#define ControlFlowHandler" "$file"; then
            sed -i '1i#define ControlFlowHandler FUN_18051739b  // 控制流处理器\n' "$file"
        fi
        modified=true
    fi
    
    # 替换 FUN_1808cf96d
    if grep -q "FUN_1808cf96d" "$file"; then
        sed -i 's/FUN_1808cf96d/ConditionChecker/g' "$file"
        if ! grep -q "#define ConditionChecker" "$file"; then
            sed -i '1i#define ConditionChecker FUN_1808cf96d  // 条件检查器\n' "$file"
        fi
        modified=true
    fi
    
    if [ "$modified" = true ]; then
        echo "已处理: $file"
    fi
}

# 处理所有包含FUN_函数的文件
find pretty -name "*.c" | while read -r file; do
    if grep -q "FUN_1808fcb90\|FUN_1805a3b20\|FUN_1805b7ac0\|FUN_18051739b\|FUN_1808cf96d" "$file"; then
        replace_fun_calls "$file"
    fi
done

echo "直接替换完成"
EOF

chmod +x /tmp/direct_replace.sh

echo "3. 执行直接替换..."
/tmp/direct_replace.sh

echo "4. 验证替换结果..."
echo "替换后的FUN_1808fcb90调用次数:"
find pretty -name "*.c" -exec grep -h "FUN_1808fcb90" {} \; | grep -v "#define" | wc -l

echo "替换后的FUN_1805a3b20调用次数:"
find pretty -name "*.c" -exec grep -h "FUN_1805a3b20" {} \; | grep -v "#define" | wc -l

echo "替换后的FUN_1805b7ac0调用次数:"
find pretty -name "*.c" -exec grep -h "FUN_1805b7ac0" {} \; | grep -v "#define" | wc -l

echo "5. 清理临时文件..."
rm -f /tmp/direct_replace.sh

echo
echo "=== 直接替换完成 ==="
echo "结束时间: $(date)"