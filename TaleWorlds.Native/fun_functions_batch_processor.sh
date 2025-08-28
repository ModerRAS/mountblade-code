#!/bin/bash

# FUN_函数批量处理脚本
# 用于处理剩余的151,789个FUN_函数引用

echo "开始FUN_函数批量处理..."
echo "当前项目状态:"
echo "- C文件数量: $(find . -name "*.c" -type f | wc -l)"
echo "- 总代码行数: $(find . -name "*.c" -type f -exec wc -l {} + | tail -1 | awk '{print $1}')"
echo "- 剩余FUN_函数引用: $(grep -r "FUN_" --include="*.c" . | wc -l)"

# 分析最常见的FUN_函数
echo ""
echo "分析最常见的FUN_函数:"
grep -r "FUN_" --include="*.c" . | grep -o "FUN_[0-9a-fx]*" | sort | uniq -c | sort -nr | head -20

# 创建FUN_函数映射
cat > fun_functions_mapping.txt << 'EOF'
# 高频FUN_函数映射表
FUN_18064e900=CoreEngine_MemoryPoolManager
FUN_1808fc050=System_Initializer
FUN_18062b420=CoreEngine_MemoryAllocator
FUN_1805a3b20=System_StringProcessor
FUN_1805b7ac0=System_StatusChecker
FUN_1808fcb90=System_Initializer2
FUN_180541920=Render_Processor
FUN_180542260=Render_SceneProcessor
FUN_180541c60=Render_ContextManager
FUN_180541de0=Render_ParameterHandler
FUN_180542440=Render_BufferManager
FUN_180542620=Render_StateManager
FUN_1805427a0=Render_Configurator
FUN_180542920=Render_Controller
FUN_180542aa0=Render_Validator
FUN_180542c20=Render_Optimizer
FUN_180542da0=Render_Cleanup
FUN_180542f20=Render_Finalizer
FUN_1805430a0=Render_Initializer
EOF

echo ""
echo "FUN_函数映射表已创建"

# 批量处理策略
echo ""
echo "批量处理策略:"
echo "1. 处理高频FUN_函数（出现次数>1000次）"
echo "2. 分批处理，每次处理10个函数"
echo "3. 优先处理核心系统函数"
echo "4. 逐步减少剩余引用数量"

# 创建批量处理脚本
cat > batch_fun_processor.sh << 'EOF'
#!/bin/bash

# 批量FUN_函数处理器
# 参数：函数名映射文件

MAPPING_FILE="$1"
if [ -z "$MAPPING_FILE" ]; then
    echo "使用方法: $0 <映射文件>"
    exit 1
fi

echo "开始批量处理FUN_函数..."

# 读取映射文件并处理
while IFS='=' read -r fun_name alias_name; do
    # 跳过注释行和空行
    [[ $fun_name =~ ^#.*$ ]] && continue
    [[ -z $fun_name ]] && continue
    
    echo "处理函数: $fun_name -> $alias_name"
    
    # 统计当前函数出现次数
    count=$(grep -r "$fun_name" --include="*.c" . | wc -l)
    echo "当前出现次数: $count"
    
    if [ $count -gt 0 ]; then
        # 执行替换
        find . -name "*.c" -type f -exec sed -i "s/$fun_name/$alias_name/g" {} \;
        
        # 验证替换结果
        new_count=$(grep -r "$fun_name" --include="*.c" . | wc -l)
        echo "替换后剩余次数: $new_count"
        
        if [ $new_count -eq 0 ]; then
            echo "✓ $fun_name 已完全替换为 $alias_name"
        else
            echo "⚠ $fun_name 仍有 $new_count 个引用未替换"
        fi
    fi
    
    echo "---"
    
done < "$MAPPING_FILE"

echo "批量处理完成"
EOF

chmod +x batch_fun_processor.sh

echo ""
echo "批量处理脚本已创建: batch_fun_processor.sh"
echo "使用方法: ./batch_fun_processor.sh fun_functions_mapping.txt"

# 统计处理前的状态
echo ""
echo "处理前状态统计:"
echo "- 总FUN_函数引用: $(grep -r "FUN_" --include="*.c" . | wc -l)"
echo "- 包含FUN_函数的文件数: $(grep -r "FUN_" --include="*.c" . -l | wc -l)"

echo ""
echo "FUN_函数批量处理脚本准备完成"
echo "建议运行 ./batch_fun_processor.sh fun_functions_mapping.txt 开始处理"