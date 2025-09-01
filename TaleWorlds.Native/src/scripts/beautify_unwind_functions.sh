#!/bin/bash

# Unwind函数重命名脚本
# 为06_utilities.c文件中的Unwind函数提供语义化名称

echo "开始重命名Unwind函数..."

# 创建一个临时脚本文件来执行重命名
cat > /tmp/rename_unwind_functions.sh << 'EOF'
#!/bin/bash

# 定义Unwind函数的语义化映射
# 根据函数的参数和功能进行重命名

sed -i 's/void Unwind_180902e50/void ProcessObjectCleanupHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180902e80/void ValidateObjectContextHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180902e90/void InitializeResourceHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180902eb0/void SetupMemoryContextHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180902ec0/void ConfigureSystemHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180902ed0/void InitializeThreadHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180902ee0/void SetupProcessHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180902f60/void HandleExceptionCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180902fa0/void ProcessStackUnwind/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903200/void CleanupMemoryResources/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903210/void ReleaseSystemResources/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903220/void HandleResourceCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903230/void ProcessMemoryRelease/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903240/void CleanupThreadResources/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903250/void ReleaseProcessResources/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903270/void HandleSystemCleanup/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903290/void ProcessExceptionHandling/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_1809032b0/void InitializeExceptionHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_1809032d0/void SetupErrorHandling/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_1809032e0/void ConfigureErrorHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_1809032f0/void ProcessErrorRecovery/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903300/void HandleSystemRecovery/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903310/void InitializeRecoveryHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903320/void SetupRecoverySystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903330/void ProcessCleanupOperations/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903340/void HandleResourceManagement/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903350/void ManageMemoryOperations/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903360/void ProcessSystemOperations/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903370/void HandleSystemManagement/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_1809033b0/void InitializeSystemManager/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_1809033f0/void SetupSystemController/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903430/void ProcessSystemControl/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903440/void HandleSystemController/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903450/void InitializeSystemController/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903460/void SetupSystemMonitor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903470/void InitializeSystemMonitor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903490/void SetupSystemDebugger/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_1809034b0/void ProcessSystemDebugging/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_1809034c0/void HandleSystemDebugging/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_1809034d0/void InitializeDebugHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_1809034e0/void SetupDebugSystem/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_1809034f0/void ProcessDebugOperations/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903500/void HandleDebugManagement/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903510/void ManageDebugOperations/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903520/void ProcessDebugTasks/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903540/void HandleDebugTasks/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903560/void InitializeDebugTask/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903580/void SetupDebugTaskHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_180903590/void ProcessDebugTaskHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_1809035b0/void InitializeDebugTaskProcessor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "Unwind函数重命名完成"
EOF

# 执行重命名脚本
chmod +x /tmp/rename_unwind_functions.sh
/tmp/rename_unwind_functions.sh

# 清理临时文件
rm -f /tmp/rename_unwind_functions.sh

echo "Unwind函数重命名脚本执行完成"