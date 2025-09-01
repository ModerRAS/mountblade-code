#!/usr/bin/env python3
import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 定义替换映射
replacements = {
    'FUN_18068fdd0': 'StopUIMemoryPoolService',
    'FUN_18068fe10': 'RestartUIMemoryPoolService',
    'FUN_18068ff60': 'ResetUIMemoryPoolService',
    'FUN_180690200': 'ConfigureUIMemoryPoolLimits',
    'FUN_1806903c0': 'ValidateUIMemoryPoolLimits',
    'FUN_1806905c0': 'UpdateUIMemoryPoolLimits',
    'FUN_1806917c0': 'InitializeUIMemoryPoolTracker',
    'FUN_180691db0': 'UpdateUIMemoryPoolTracker',
    'FUN_180694010': 'ProcessUIMemoryPoolAllocation',
    'FUN_180695530': 'WaitForUIMemoryPoolOperation',
    'FUN_180695560': 'AcquireUIMemoryPoolLock',
    'FUN_180695590': 'SubmitUIMemoryPoolRequest',
    'FUN_180695600': 'ExecuteUIMemoryPoolCommand',
    'FUN_180695700': 'FlushUIMemoryPoolQueue',
    'FUN_180695750': 'ResetUIMemoryPoolQueue',
    'FUN_180695820': 'ResizeUIMemoryPoolBuffer',
    'FUN_180695870': 'UpdateUIMemoryPoolResolution',
    'FUN_1806958c0': 'ValidateUIMemoryPoolState',
    'FUN_180695990': 'OptimizeUIMemoryPoolPerformance',
    'FUN_180695ac0': 'ProfileUIMemoryPoolPerformance',
    'FUN_180695bf0': 'DebugUIMemoryPoolState',
    'FUN_180695f70': 'LogUIMemoryPoolStatistics',
    'FUN_1806961a0': 'UpdateUIMemoryPoolMetrics',
    'FUN_180696370': 'ResetUIMemoryPoolMetrics',
    'FUN_180696540': 'CollectUIMemoryPoolData',
    'FUN_180696710': 'AnalyzeUIMemoryPoolPerformance',
    'FUN_1806968e0': 'OptimizeUIMemoryPoolMemory',
    'FUN_180696a60': 'ManageUIMemoryPoolMemory',
    'FUN_180696be0': 'UpdateUIMemoryPoolCache',
    'FUN_180696d90': 'InvalidateUIMemoryPoolCache',
    'FUN_180696f40': 'RebuildUIMemoryPoolCache',
    'FUN_1806970f0': 'FlushUIMemoryPoolCache',
    'FUN_1806972a0': 'UpdateUIMemoryPoolBatch',
    'FUN_180697340': 'FlushUIMemoryPoolBatch',
    'FUN_1806973c0': 'ResetUIMemoryPoolBatch',
    'FUN_180697460': 'CommitUIMemoryPoolBatch',
    'FUN_1806974e0': 'ProcessUIMemoryPoolBatch',
    'FUN_180697580': 'FinalizeUIMemoryPoolBatch',
    'FUN_180697600': 'ValidateUIMemoryPoolBatch',
    'FUN_180697680': 'OptimizeUIMemoryPoolBatch',
    'FUN_1806976f0': 'ScheduleUIMemoryPoolBatch',
    'FUN_180697770': 'ExecuteUIMemoryPoolBatch',
    'FUN_1806977e0': 'WaitForUIMemoryPoolBatch',
    'FUN_1806978b0': 'CompleteUIMemoryPoolBatch',
    'FUN_180697dd0': 'CleanupUIMemoryPoolBatch',
}

# 执行替换
for old, new in replacements.items():
    content = re.sub(r'\b' + old + r'\b', new, content)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'w', encoding='utf-8') as f:
    f.write(content)

print("UI系统函数替换完成！")