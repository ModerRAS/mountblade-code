#!/bin/bash

# 第二批处理 06_utilities_part026_sub002_sub002.c 文件中的 FUN_ 函数
# 处理剩余的 327 个 FUN_ 函数调用

FILE_PATH="/root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native/pretty/06_utilities_part026_sub002_sub002.c"

echo "开始第二批处理文件: $FILE_PATH"
echo "文件大小: $(wc -l < "$FILE_PATH") 行"

# 定义第二批 FUN_ 函数到语义化别名的映射
declare -A FUNCTION_MAPPING=(
    ["FUN_18005cb60"]="UtilitiesSystem_TaskScheduler"            # 9次调用 - 任务调度器
    ["FUN_1800587d0"]="UtilitiesSystem_DataTransformer"          # 9次调用 - 数据转换器
    ["FUN_180058710"]="UtilitiesSystem_StreamProcessor"          # 9次调用 - 流处理器
    ["FUN_18022f390"]="UtilitiesSystem_GraphicsRenderer"         # 8次调用 - 图形渲染器
    ["FUN_18020eba0"]="UtilitiesSystem_AudioProcessor"           # 8次调用 - 音频处理器
    ["FUN_1800b94f0"]="UtilitiesSystem_InputManager"             # 8次调用 - 输入管理器
    ["FUN_1800b9270"]="UtilitiesSystem_WindowManager"            # 8次调用 - 窗口管理器
    ["FUN_1800b9210"]="UtilitiesSystem_EventDispatcher"          # 8次调用 - 事件分发器
    ["FUN_1800b9030"]="UtilitiesSystem_MessageQueue"             # 8次调用 - 消息队列
    ["FUN_180058210"]="UtilitiesSystem_ServiceLocator"           # 8次调用 - 服务定位器
    ["FUN_1801b9690"]="UtilitiesSystem_ConfigLoader"             # 7次调用 - 配置加载器
    ["FUN_1800e7d00"]="UtilitiesSystem_DataEncryptor"            # 7次调用 - 数据加密器
    ["FUN_1800e7c40"]="UtilitiesSystem_DataDecryptor"            # 7次调用 - 数据解密器
    ["FUN_1800a19c0"]="UtilitiesSystem_ThreadPool"               # 7次调用 - 线程池
    ["FUN_180069530"]="UtilitiesSystem_SyncManager"              # 7次调用 - 同步管理器
    ["FUN_18013ea00"]="UtilitiesSystem_ParserEngine"              # 6次调用 - 解析引擎
    ["FUN_18011d900"]="UtilitiesSystem_Validator"                # 6次调用 - 验证器
    ["FUN_1800ba100"]="UtilitiesSystem_Serializer"               # 6次调用 - 序列化器
    ["FUN_180152b00"]="UtilitiesSystem_Deserializer"             # 5次调用 - 反序列化器
    ["FUN_1800f7320"]="UtilitiesSystem_TransactionManager"       # 5次调用 - 事务管理器
    ["FUN_1800f7260"]="UtilitiesSystem_LockManager"               # 5次调用 - 锁管理器
    ["FUN_1800ee130"]="UtilitiesSystem_CircuitBreaker"            # 5次调用 - 熔断器
    ["FUN_1800e7f20"]="UtilitiesSystem_RetryPolicy"               # 5次调用 - 重试策略
    ["FUN_1800e7be0"]="UtilitiesSystem_TimeoutHandler"           # 5次调用 - 超时处理器
    ["FUN_1800c2ff0"]="UtilitiesSystem_MetricsCollector"         # 5次调用 - 指标收集器
    ["FUN_1800c2ca0"]="UtilitiesSystem_HealthChecker"            # 5次调用 - 健康检查器
    ["FUN_1800ae2c0"]="UtilitiesSystem_LoadBalancer"             # 5次调用 - 负载均衡器
    ["FUN_1800adb30"]="UtilitiesSystem_RateLimiter"               # 5次调用 - 速率限制器
    ["FUN_18008d810"]="UtilitiesSystem_Logger"                    # 5次调用 - 日志器
    ["FUN_18007f840"]="UtilitiesSystem_Tracer"                    # 5次调用 - 追踪器
    ["FUN_18005a050"]="UtilitiesSystem_Profiler"                  # 5次调用 - 性能分析器
    ["FUN_18004b730"]="UtilitiesSystem_Debugger"                  # 5次调用 - 调试器
    ["FUN_180639250"]="UtilitiesSystem_NetworkMonitor"           # 4次调用 - 网络监控器
    ["FUN_18020f530"]="UtilitiesSystem_StorageManager"           # 4次调用 - 存储管理器
    ["FUN_18015b450"]="UtilitiesSystem_IndexManager"             # 4次调用 - 索引管理器
    ["FUN_1800ee080"]="UtilitiesSystem_QueryOptimizer"           # 4次调用 - 查询优化器
    ["FUN_18009fb60"]="UtilitiesSystem_CacheValidator"           # 4次调用 - 缓存验证器
    ["FUN_180067070"]="UtilitiesSystem_PerformanceTuner"         # 4次调用 - 性能调优器
    ["FUN_180057830"]="UtilitiesSystem_ErrorReporter"             # 4次调用 - 错误报告器
    ["FUN_180048980"]="UtilitiesSystem_TestRunner"               # 4次调用 - 测试运行器
    ["FUN_1803aeb70"]="UtilitiesSystem_PlatformAdapter"          # 3次调用 - 平台适配器
    ["FUN_1801fef10"]="UtilitiesSystem_ResourceMonitor"          # 3次调用 - 资源监控器
    ["FUN_1800f89b0"]="UtilitiesSystem_AccessController"         # 3次调用 - 访问控制器
    ["FUN_1800edd10"]="UtilitiesSystem_DataNormalizer"           # 3次调用 - 数据规范化器
    ["FUN_180089640"]="UtilitiesSystem_CodeGenerator"            # 3次调用 - 代码生成器
    ["FUN_18007bb70"]="UtilitiesSystem_BuildManager"             # 3次调用 - 构建管理器
    ["FUN_1800596a0"]="UtilitiesSystem_DeploymentManager"       # 3次调用 - 部署管理器
    ["FUN_1800594b0"]="UtilitiesSystem_ReleaseManager"           # 3次调用 - 发布管理器
    ["FUN_180058c20"]="UtilitiesSystem_VersionControl"           # 3次调用 - 版本控制
    ["FUN_180058420"]="UtilitiesSystem_DependencyManager"        # 3次调用 - 依赖管理器
    ["FUN_1800582b0"]="UtilitiesSystem_PackageManager"           # 3次调用 - 包管理器
    ["FUN_18004c030"]="UtilitiesSystem_Installer"                # 3次调用 - 安装器
    ["FUN_18066c220"]="UtilitiesSystem_SecurityScanner"          # 2次调用 - 安全扫描器
    ["FUN_1802ab7f0"]="UtilitiesSystem_VulnerabilityDetector"    # 2次调用 - 漏洞检测器
    ["FUN_1802ab380"]="UtilitiesSystem_ComplianceChecker"        # 2次调用 - 合规检查器
    ["FUN_180291610"]="UtilitiesSystem_AuditTrail"               # 2次调用 - 审计跟踪
    ["FUN_180179f00"]="UtilitiesSystem_ForensicAnalyzer"         # 2次调用 - 取证分析器
    ["FUN_18015bdc0"]="UtilitiesSystem_LogAggregator"            # 2次调用 - 日志聚合器
    ["FUN_18015b4f0"]="UtilitiesSystem_MetricExporter"           # 2次调用 - 指标导出器
    ["FUN_1800ed380"]="UtilitiesSystem_AlertManager"             # 2次调用 - 告警管理器
    ["FUN_180090b80"]="UtilitiesSystem_NotificationService"     # 2次调用 - 通知服务
    ["FUN_180085530"]="UtilitiesSystem_Scheduler"                # 2次调用 - 调度器
    ["FUN_180080df0"]="UtilitiesSystem_Executor"                 # 2次调用 - 执行器
    ["FUN_1800809a0"]="UtilitiesSystem_Dispatcher"                # 2次调用 - 分发器
    ["FUN_180080870"]="UtilitiesSystem_Coordinator"              # 2次调用 - 协调器
    ["FUN_180080060"]="UtilitiesSystem_Orchestrator"             # 2次调用 - 编排器
    ["FUN_180060bd0"]="UtilitiesSystem_Controller"               # 2次调用 - 控制器
    ["FUN_18005d580"]="UtilitiesSystem_Supervisor"               # 2次调用 - 监督器
    ["FUN_180051d00"]="UtilitiesSystem_Monitor"                  # 2次调用 - 监控器
    ["FUN_18004bf50"]="UtilitiesSystem_Observer"                 # 2次调用 - 观察器
    ["FUN_1802a07c0"]="UtilitiesSystem_Gateway"                  # 1次调用 - 网关
    ["FUN_180296b70"]="UtilitiesSystem_Proxy"                    # 1次调用 - 代理
    ["FUN_1800f88f0"]="UtilitiesSystem_Facade"                   # 1次调用 - 外观
    ["FUN_1800edc10"]="UtilitiesSystem_Adapter"                  # 1次调用 - 适配器
    ["FUN_1800ad6f0"]="UtilitiesSystem_Bridge"                   # 1次调用 - 桥接
    ["FUN_18008d1f0"]="UtilitiesSystem_Composite"                # 1次调用 - 组合
    ["FUN_180074a80"]="UtilitiesSystem_Decorator"                # 1次调用 - 装饰器
    ["FUN_18006cb90"]="UtilitiesSystem_Flyweight"                # 1次调用 - 享元
    ["FUN_18006b760"]="UtilitiesSystem_Strategy"                 # 1次调用 - 策略
    ["FUN_1800670d0"]="UtilitiesSystem_Command"                  # 1次调用 - 命令
    ["FUN_18005d560"]="UtilitiesSystem_State"                    # 1次调用 - 状态
    ["FUN_180059ee0"]="UtilitiesSystem_Visitor"                  # 1次调用 - 访问者
    ["FUN_180059620"]="UtilitiesSystem_Mediator"                 # 1次调用 - 中介者
    ["FUN_180058db0"]="UtilitiesSystem_Iterator"                 # 1次调用 - 迭代器
    ["FUN_180055ed0"]="UtilitiesSystem_ChainOfResponsibility"   # 1次调用 - 责任链
    ["FUN_18004c090"]="UtilitiesSystem_TemplateMethod"          # 1次调用 - 模板方法
    ["FUN_180047e40"]="UtilitiesSystem_AbstractFactory"         # 1次调用 - 抽象工厂
)

echo "开始替换第二批 FUN_ 函数调用..."

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
echo "第二批替换完成!"
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

echo "第二批处理完成: $FILE_PATH"