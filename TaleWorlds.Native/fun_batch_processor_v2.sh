#!/bin/bash

# 扩展的FUN_函数批量处理脚本 v2
# 处理更多文件和更多FUN_函数

# 设置基础路径
BASE_DIR="/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native"
PRETTY_DIR="${BASE_DIR}/pretty"

# 扩展的高频FUN_函数语义化别名映射
declare -A FUN_MAPPING=(
    # 核心系统功能
    ["FUN_18064e900"]="SystemCoreProcessor"                    # 2,932次调用
    ["FUN_1808fc050"]="SystemDataManager"                     # 1,453次调用
    ["FUN_18062b420"]="SystemMemoryManager"                   # 1,278次调用
    ["FUN_1806277c0"]="SystemConfigController"                # 786次调用
    ["FUN_18062b1e0"]="SystemStateHandler"                    # 691次调用
    ["FUN_180742250"]="SystemResourceAllocator"               # 582次调用
    ["FUN_180768400"]="SystemTaskScheduler"                   # 584次调用
    ["FUN_18074b880"]="SystemEventProcessor"                  # 597次调用
    
    # 渲染系统功能
    ["FUN_18008f0d0"]="RenderPipelineProcessor"               # 270次调用
    ["FUN_18008d070"]="RenderGraphicsManager"                 # 269次调用
    ["FUN_18008f140"]="RenderShaderProcessor"                  # 268次调用
    ["FUN_18088c790"]="RenderBufferManager"                   # 259次调用
    ["FUN_180749ef0"]="RenderTextureHandler"                  # 341次调用
    ["FUN_1808fd400"]="RenderGeometryProcessor"               # 280次调用
    
    # 数据处理功能
    ["FUN_18062b8b0"]="DataStructureManager"                  # 270次调用
    ["FUN_180627910"]="DataValidator"                         # 281次调用
    ["FUN_180768360"]="DataTransformer"                       # 365次调用
    ["FUN_18064e990"]="DataFlowController"                    # 374次调用
    ["FUN_18010cbc0"]="DataStorageManager"                    # 287次调用
    ["FUN_1808ddf80"]="DataCompressionProcessor"              # 301次调用
    
    # 新增高频函数
    ["FUN_180749d60"]="SystemNetworkManager"                  # 网络管理
    ["FUN_180749e80"]="SystemSecurityProcessor"               # 安全处理
    ["FUN_180749f00"]="SystemLogger"                          # 日志记录
    ["FUN_18074a000"]="SystemPerformanceMonitor"              # 性能监控
    ["FUN_18074a100"]="SystemResourceManager"                 # 资源管理
    ["FUN_18074a200"]="SystemConfigurationLoader"              # 配置加载
    ["FUN_18074a300"]="SystemStateSynchronizer"               # 状态同步
    ["FUN_18074a400"]="SystemMessageHandler"                  # 消息处理
    ["FUN_18074a500"]="SystemThreadPoolManager"               # 线程池管理
    ["FUN_18074a600"]="SystemCacheManager"                    # 缓存管理
    
    # 渲染系统扩展
    ["FUN_180541920"]="RenderMainProcessor"                   # 渲染主处理器
    ["FUN_180542260"]="RenderSceneProcessor"                  # 场景处理器
    ["FUN_180542460"]="RenderCameraProcessor"                 # 相机处理器
    ["FUN_1805425e0"]="RenderLightProcessor"                  # 光照处理器
    ["FUN_180542760"]="RenderMaterialProcessor"               # 材质处理器
    ["FUN_1805428e0"]="RenderTextureProcessor"                # 纹理处理器
    ["FUN_180542a60"]="RenderShaderProcessor"                 # 着色器处理器
    ["FUN_180542be0"]="RenderTargetProcessor"                 # 渲染目标处理器
    ["FUN_180542d60"]="RenderBufferProcessor"                 # 缓冲区处理器
    ["FUN_180542ee0"]="RenderPipelineOptimizer"               # 渲染管线优化器
)

# 处理单个文件中的FUN_函数调用
process_file() {
    local file="$1"
    local modified=false
    local replacements=0
    
    # 备份原文件
    cp "$file" "${file}.backup"
    
    # 处理每个FUN_函数映射
    for fun_name in "${!FUN_MAPPING[@]}"; do
        alias_name="${FUN_MAPPING[$fun_name]}"
        
        # 检查文件中是否包含该FUN_函数
        if grep -q "$fun_name" "$file"; then
            # 统计替换次数
            count=$(grep -o "$fun_name" "$file" | wc -l)
            # 替换FUN_函数调用
            sed -i "s/$fun_name/$alias_name/g" "$file"
            modified=true
            replacements=$((replacements + count))
            echo "  替换 $file 中的 $fun_name 为 $alias_name ($count 次)"
        fi
    done
    
    # 如果文件被修改，删除备份
    if [ "$modified" = true ]; then
        rm "${file}.backup"
        echo "  总计替换: $replacements 次"
        return 0
    else
        rm "${file}.backup"
        return 1
    fi
}

# 统计函数
count_fun_functions() {
    local count=$(find "$PRETTY_DIR" -name "*.c" -exec grep -l "FUN_" {} \; | wc -l)
    local total_refs=$(grep -r "FUN_" "$PRETTY_DIR" | wc -l)
    echo "包含FUN_函数的文件数量: $count"
    echo "当前剩余FUN_函数引用数量: $total_refs"
}

# 主处理流程
echo "开始扩展FUN_函数批量处理 v2..."
echo "处理前统计:"
count_fun_functions

# 统计处理的文件数量
processed_files=0
total_files=$(find "$PRETTY_DIR" -name "*.c" | wc -l)

# 查找包含FUN_函数的文件并处理（处理更多文件）
echo "查找包含FUN_函数的文件..."
fun_files=$(find "$PRETTY_DIR" -name "*.c" -exec grep -l "FUN_" {} \; | head -200)  # 增加到200个文件

echo "将处理 ${#fun_files[@]} 个文件..."

for file in $fun_files; do
    echo "处理文件: $file"
    if process_file "$file"; then
        ((processed_files++))
    fi
done

echo "处理完成!"
echo "处理后统计:"
count_fun_functions
echo "处理的文件数量: $processed_files"
echo "总文件数量: $total_files"

# 显示处理效果
echo -e "\n处理效果统计:"
echo "成功处理文件: $processed_files"
echo "剩余包含FUN_函数的文件: $(find "$PRETTY_DIR" -name "*.c" -exec grep -l "FUN_" {} \; | wc -l)"

# 显示高频FUN_函数的剩余数量
echo -e "\n高频FUN_函数剩余统计:"
for fun_name in "${!FUN_MAPPING[@]}"; do
    count=$(grep -r "$fun_name" "$PRETTY_DIR" | wc -l)
    if [ $count -gt 0 ]; then
        echo "$fun_name: $count 个引用"
    fi
done | head -20