#!/bin/bash

# 高频FUN_函数批量处理脚本
# 处理最高频的FUN_函数，提供有意义的语义化别名

echo "开始处理高频FUN_函数..."

# 定义高频FUN_函数的语义化别名映射
declare -A fun_mapping=(
    # 系统初始化和核心功能
    ["FUN_1808fc050"]="SystemInitializer"
    ["FUN_18064e900"]="SystemDataProcessor"
    ["FUN_180847820"]="SystemStateManager"
    ["FUN_1808fd200"]="SystemEventHandler"
    ["FUN_18084b240"]="SystemController"
    
    # 数据处理和内存管理
    ["FUN_1805a3b20"]="DataProcessor"
    ["FUN_18062b420"]="MemoryManager"
    ["FUN_1805b7ac0"]="DataValidator"
    ["FUN_1805f7d20"]="BufferManager"
    ["FUN_180605780"]="MemoryAllocator"
    
    # 网络和通信
    ["FUN_1803f9e10"]="NetworkManager"
    ["FUN_1803fa6e0"]="ConnectionHandler"
    ["FUN_1803faf90"]="DataTransmitter"
    ["FUN_1803fb8a0"]="ProtocolProcessor"
    
    # 渲染和图形
    ["FUN_180391980"]="RenderingProcessor"
    ["FUN_1803921d0"]="GraphicsManager"
    ["FUN_1803929a0"]="ShaderProcessor"
    ["FUN_180393170"]="TextureManager"
    
    # UI和界面
    ["FUN_18086b47c"]="UIManager"
    ["FUN_18086b8c0"]="UIRenderer"
    ["FUN_18086bd04"]="UIEventHandler"
    ["FUN_18086c148"]="UIController"
    
    # 工具和辅助
    ["FUN_1808fcb90"]="UtilityHelper"
    ["FUN_1808fd5e0"]="StringProcessor"
    ["FUN_1808fe030"]="FileHandler"
    ["FUN_1808fea80"]="ConfigManager"
)

# 统计处理结果
processed=0
replaced=0

# 处理每个映射
for fun_name in "${!fun_mapping[@]}"; do
    alias_name="${fun_mapping[$fun_name]}"
    
    echo "处理 $fun_name -> $alias_name"
    
    # 统计当前函数的出现次数
    count=$(find pretty -name "*.c" -exec grep -l "$fun_name" {} \; | wc -l)
    
    if [ $count -gt 0 ]; then
        echo "  发现 $count 个文件包含 $fun_name"
        
        # 替换函数调用
        find pretty -name "*.c" -exec sed -i "s/$fun_name/$alias_name/g" {} \;
        
        # 添加函数定义到文件（如果文件中使用了该函数）
        for file in $(find pretty -name "*.c" -exec grep -l "$alias_name" {} \;); do
            # 检查是否已经有定义
            if ! grep -q "$alias_name.*=" "$file"; then
                # 在文件头部添加函数定义
                sed -i "1i\\/* $alias_name - $fun_name 的语义化别名 */\\n#define $alias_name $fun_name\\n" "$file"
            fi
        done
        
        replaced=$((replaced + count))
        processed=$((processed + 1))
        echo "  ✓ 已替换 $count 个调用"
    else
        echo "  ✓ 未发现 $fun_name 的调用"
    fi
done

echo "=================================="
echo "处理完成统计："
echo "处理的函数类型: $processed"
echo "替换的函数调用: $replaced"
echo "=================================="
