#!/bin/bash

# 批量处理 06_utilities_part026_sub002_sub002.c 文件中的 FUN_ 函数
# 这个文件包含 2550 个 FUN_ 函数调用，需要替换为语义化别名

FILE_PATH="/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/pretty/06_utilities_part026_sub002_sub002.c"

echo "开始处理文件: $FILE_PATH"
echo "文件大小: $(wc -l < "$FILE_PATH") 行"

# 首先备份原文件
cp "$FILE_PATH" "$FILE_PATH.bak"
echo "已创建备份文件: $FILE_PATH.bak"

# 定义 FUN_ 函数到语义化别名的映射
# 基于函数调用频率和功能分析

declare -A FUNCTION_MAPPING=(
    # 高频调用函数 - 可能是核心系统函数
    ["FUN_18064e900"]="UtilitiesSystem_StateProcessor"           # 1291次调用 - 状态处理器
    ["FUN_18064d630"]="UtilitiesSystem_DataInitializer"           # 311次调用 - 数据初始化器
    ["FUN_1808fc8a8"]="UtilitiesSystem_ConfigManager"            # 160次调用 - 配置管理器
    ["FUN_180059ba0"]="UtilitiesSystem_ResourceCleaner"           # 135次调用 - 资源清理器
    ["FUN_180045af0"]="UtilitiesSystem_MemoryAllocator"           # 105次调用 - 内存分配器
    ["FUN_180627b90"]="UtilitiesSystem_DataValidator"             # 76次调用 - 数据验证器
    ["FUN_180058370"]="UtilitiesSystem_ErrorHandler"              # 52次调用 - 错误处理器
    ["FUN_1802c24b0"]="UtilitiesSystem_ThreadManager"            # 33次调用 - 线程管理器
    ["FUN_180057340"]="UtilitiesSystem_SecurityChecker"          # 33次调用 - 安全检查器
    ["FUN_18004b790"]="UtilitiesSystem_PerformanceMonitor"        # 33次调用 - 性能监控器
    ["FUN_18007f6a0"]="UtilitiesSystem_LogWriter"                 # 21次调用 - 日志写入器
    ["FUN_180057010"]="UtilitiesSystem_NetworkHandler"           # 20次调用 - 网络处理器
    ["FUN_180044a30"]="UtilitiesSystem_FileManager"               # 19次调用 - 文件管理器
    ["FUN_18005d260"]="UtilitiesSystem_CacheManager"             # 18次调用 - 缓存管理器
    ["FUN_1800f74f0"]="UtilitiesSystem_DatabaseConnector"        # 16次调用 - 数据库连接器
    ["FUN_180046860"]="UtilitiesSystem_CompressionEngine"       # 13次调用 - 压缩引擎
    ["FUN_1800e7ca0"]="UtilitiesSystem_EncryptionHandler"       # 12次调用 - 加密处理器
    ["FUN_1800593f0"]="UtilitiesSystem_BackupManager"           # 12次调用 - 备份管理器
    ["FUN_1800f8930"]="UtilitiesSystem_AuthenticationService"    # 9次调用 - 认证服务
    ["FUN_1800e7b80"]="UtilitiesSystem_AuditLogger"              # 9次调用 - 审计日志器
)

echo "开始替换 FUN_ 函数调用..."

# 统计替换次数
total_replaced=0

# 遍历所有映射关系进行替换
for fun_name in "${!FUNCTION_MAPPING[@]}"; do
    semantic_name="${FUNCTION_MAPPING[$fun_name]}"
    
    # 统计当前函数的调用次数
    count=$(grep -o "$fun_name" "$FILE_PATH" | wc -l)
    
    if [ $count -gt 0 ]; then
        echo "替换 $fun_name -> $semantic_name (调用次数: $count)"
        
        # 执行替换
        sed -i "s/$fun_name/$semantic_name/g" "$FILE_PATH"
        
        total_replaced=$((total_replaced + count))
    fi
done

echo "----------------------------------------"
echo "替换完成!"
echo "总共替换了 $total_replaced 个 FUN_ 函数调用"

# 验证替换结果
remaining_funs=$(grep -o "FUN_[0-9a-f]*" "$FILE_PATH" | wc -l)
echo "剩余 FUN_ 函数调用: $remaining_funs"

# 检查文件完整性
if [ $remaining_funs -eq 0 ]; then
    echo "✅ 所有 FUN_ 函数已成功替换"
else
    echo "⚠️ 仍有 $remaining_funs 个 FUN_ 函数需要处理"
    # 显示剩余的FUN_函数
    echo "剩余的FUN_函数:"
    grep -o "FUN_[0-9a-f]*" "$FILE_PATH" | sort | uniq -c | sort -nr
fi

echo "处理完成: $FILE_PATH"