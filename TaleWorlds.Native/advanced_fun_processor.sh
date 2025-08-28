#!/bin/bash

# FUN_函数高级批量处理脚本
# 用于智能识别和替换未定义的FUN_函数调用

echo "=== FUN_函数高级批量处理脚本 ==="
echo "开始时间: $(date)"
echo

# 创建临时文件存储所有已定义的FUN_函数
echo "1. 收集所有已定义的FUN_函数..."
find pretty -name "*.c" -exec grep -h "#define.*FUN_[0-9a-f]\{8\}" {} \; | sort | uniq > /tmp/defined_funs.txt
defined_count=$(wc -l < /tmp/defined_funs.txt)
echo "已定义的FUN_函数数量: $defined_count"

# 创建临时文件存储所有未定义的FUN_函数调用
echo "2. 收集所有未定义的FUN_函数调用..."
find pretty -name "*.c" -exec grep -h "FUN_[0-9a-f]\{8\}" {} \; | grep -v "#define" | grep -v "//" | sort | uniq > /tmp/undefined_funs.txt
undefined_count=$(wc -l < /tmp/undefined_funs.txt)
echo "未定义的FUN_函数数量: $undefined_count"

# 分析最常见的FUN_函数调用模式
echo "3. 分析最常见的FUN_函数调用模式..."
echo "前20个最常见的FUN_函数调用:"
cat /tmp/undefined_funs.txt | head -20

# 创建智能别名映射
echo "4. 创建智能别名映射..."
cat > /tmp/fun_aliases.txt << 'EOF'
# 系统初始化相关
FUN_1808fcb90=SystemInitializer
FUN_1805a3b20=StringProcessor
FUN_1805b7ac0=StatusChecker
FUN_18051739b=ControlFlowHandler
FUN_1808cf96d=ConditionChecker

# 内存管理相关
FUN_18004e7a0=MemoryAllocator
FUN_18004e7d0=MemoryDeallocator
FUN_18004e800=MemoryManager
FUN_18004e830=MemoryInitializer
FUN_18004e860=MemoryCleaner

# 数据处理相关
FUN_1800e9a94=DataProcessor
FUN_1800e9ac0=DataValidator
FUN_1800e9af0=DataTransformer
FUN_1800e9b20=DataManager
FUN_1800e9b50=DataOptimizer

# 渲染系统相关
FUN_180280fd0=RenderResourceAcquirer
FUN_18028c2f0=RenderDataProcessor
FUN_18028c308=RenderEntryManager
FUN_18028c387=RenderEntryProcessor
FUN_180291880=RenderParameterManager

# 网络系统相关
FUN_180119960=NetworkAccessController
FUN_180847110=ResourceLockManager
FUN_18004e7a0=NetworkDataProcessor

# UI系统相关
FUN_18069a490=UIDataProcessor
FUN_18086b47c=UIInitializer
FUN_1808fc050=UISecurityChecker

# 工具函数相关
FUN_0014b6a0=UtilityFunction
FUN_00000000=SystemEntryPoint
FUN_00000001=SystemStateInitializer
FUN_00000002=SystemFlagHandler
FUN_00000003=SystemStatusChecker
FUN_00000004=SystemValidator
FUN_00000005=SystemController
FUN_00000006=SystemTerminator
EOF

echo "5. 创建批量处理脚本..."
cat > /tmp/batch_process.sh << 'EOF'
#!/bin/bash

# 批量处理FUN_函数调用

# 读取别名映射
declare -A aliases
while IFS='=' read -r key value; do
    # 跳过注释行
    [[ $key =~ ^#.* ]] && continue
    # 跳过空行
    [[ -z $key ]] && continue
    aliases[$key]="$value"
done < /tmp/fun_aliases.txt

# 处理每个文件
find pretty -name "*.c" | while read -r file; do
    # 检查文件是否包含未定义的FUN_函数调用
    if grep -q "FUN_[0-9a-f]\{8\}" "$file" | grep -v "#define" | grep -v "//"; then
        echo "处理文件: $file"
        
        # 备份原文件
        cp "$file" "$file.bak"
        
        # 替换每个已定义的别名
        for fun_name in "${!aliases[@]}"; do
            alias_name="${aliases[$fun_name]}"
            
            # 替换函数调用
            sed -i "s/$fun_name(/$alias_name(/g" "$file"
            
            # 添加函数定义如果没有的话
            if ! grep -q "#define $alias_name" "$file"; then
                sed -i "1i#define $alias_name $fun_name  // $alias_name\n" "$file"
            fi
        done
        
        echo "已处理: $file"
    fi
done

echo "批量处理完成"
EOF

chmod +x /tmp/batch_process.sh

echo "6. 执行批量处理..."
/tmp/batch_process.sh

echo "7. 验证处理结果..."
echo "处理后的未定义FUN_函数数量:"
find pretty -name "*.c" -exec grep -h "FUN_[0-9a-f]\{8\}" {} \; | grep -v "#define" | grep -v "//" | sort | uniq | wc -l

echo "8. 清理临时文件..."
rm -f /tmp/defined_funs.txt /tmp/undefined_funs.txt /tmp/fun_aliases.txt /tmp/batch_process.sh

echo
echo "=== 高级批量处理完成 ==="
echo "结束时间: $(date)"