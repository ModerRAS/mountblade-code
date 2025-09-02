#!/usr/bin/env python3
"""
渲染系统变量名美化脚本
用于批量替换03_rendering.c文件中的UNK_变量为语义化名称
"""

import re

# 定义替换映射
UNK_REPLACEMENTS = {
    "UNK_18044f980": "RenderCommandFlushState",
    "UNK_18044f9a0": "RenderCommandWaitState",
    "UNK_18044f9c0": "RenderCommandPoolConfig",
    "UNK_18044f9e0": "RenderCommandPoolState",
    "UNK_18044faf0": "RenderCommandAllocateState",
    "UNK_18044fb20": "RenderCommandFreeState",
    "UNK_18044fb40": "RenderCommandBufferData",
    "UNK_18044fb60": "RenderCommandBufferConfig",
    "UNK_18044fb80": "RenderCommandBufferPointer",
    "UNK_18044fba0": "RenderCommandBufferHandle",
    "UNK_18044fbc0": "RenderCommandBufferReference",
    "UNK_18044fbe0": "RenderCommandBufferInstance",
    "UNK_18044fc00": "RenderCommandQueueData",
    "UNK_18044fc20": "RenderCommandQueueConfig",
    "UNK_18044fc40": "RenderCommandQueuePointer",
    "UNK_18044fc60": "RenderCommandQueueHandle",
    "UNK_18044fc80": "RenderCommandQueueState",
    "UNK_18044fca0": "RenderCommandQueueManager",
    "UNK_18044fcc0": "RenderCommandQueueSystem",
    "UNK_18044fce0": "RenderCommandQueueContext",
    "UNK_18044fd00": "RenderCommandQueueBuffer",
    "UNK_18044fd20": "RenderCommandQueueMemory",
    "UNK_18044fd40": "RenderCommandQueueCache",
    "UNK_18044fd60": "RenderCommandQueueTable",
    "UNK_18044fd80": "RenderCommandQueueRegistry",
    "UNK_18044fda0": "RenderCommandQueueTracker",
    "UNK_18044fdc0": "RenderCommandQueueMonitor",
    "UNK_18044fde0": "RenderCommandQueueController",
    "UNK_18044fe00": "RenderCommandQueueScheduler",
    "UNK_18044fe20": "RenderCommandQueueDispatcher",
    "UNK_18044fe40": "RenderCommandQueueProcessor",
    "UNK_18044fe60": "RenderCommandQueueExecutor",
    "UNK_18044fe80": "RenderCommandQueueOptimizer",
    "UNK_18044fe90": "RenderCommandQueueBalancer",
    "UNK_18044fea0": "RenderCommandQueueAnalyzer",
    "UNK_18044fee0": "RenderCommandQueueValidator",
    "UNK_18044ff00": "RenderCommandQueueDebugger",
    "UNK_18044ff20": "RenderCommandQueueProfiler",
    "UNK_18044ff40": "RenderCommandQueueLogger",
    "UNK_18044ff60": "RenderCommandQueueReporter",
    "UNK_18044ff80": "RenderCommandQueueSnapshot",
}

FUN_REPLACEMENTS = {
    "FUN_1804541a0": "ConfigureRenderObjectSettings",
    "FUN_180454230": "InitializeRenderObjectCache",
    "FUN_180454300": "ProcessRenderObjectBatch",
    "FUN_1804543f0": "ValidateRenderObjectBatch",
    "FUN_180454d00": "OptimizeRenderObjectBatch",
    "FUN_180454d80": "FinalizeRenderObjectBatch",
    "FUN_180454ea0": "RenderObjectBatchProcessor",
    "FUN_180454ff0": "RenderObjectBatchValidator",
    "FUN_180455090": "RenderObjectBatchOptimizer",
    "FUN_180455250": "RenderObjectBatchFinalizer",
    "FUN_180455340": "RenderObjectBatchManager",
    "FUN_180455430": "RenderObjectBatchController",
    "FUN_1804555a0": "RenderObjectBatchScheduler",
    "FUN_1804557b0": "RenderObjectBatchDispatcher",
    "FUN_180455980": "RenderObjectBatchExecutor",
    "FUN_1804559d0": "RenderObjectBatchMonitor",
}

def read_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def main():
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"
    
    # 读取文件
    content = read_file(file_path)
    
    # 替换UNK_变量
    for old_name, new_name in UNK_REPLACEMENTS.items():
        # 替换变量声明
        content = re.sub(rf'undefined\s+{re.escape(old_name)};', f'void* {new_name};', content)
        # 替换变量引用
        content = re.sub(rf'\b{re.escape(old_name)}\b', new_name, content)
    
    # 替换FUN_函数
    for old_name, new_name in FUN_REPLACEMENTS.items():
        # 替换函数声明
        content = re.sub(rf'undefined\s+{re.escape(old_name)};', f'void* {new_name};', content)
        # 替换函数引用
        content = re.sub(rf'\b{re.escape(old_name)}\b', new_name, content)
    
    # 写入文件
    write_file(file_path, content)
    print(f"替换了 {len(UNK_REPLACEMENTS)} 个UNK_变量和 {len(FUN_REPLACEMENTS)} 个FUN_函数")

if __name__ == "__main__":
    main()