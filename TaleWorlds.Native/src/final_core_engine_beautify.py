#!/usr/bin/env python3

import re
import os

def beautify_core_engine():
    """美化02_core_engine.c文件中的所有undefined变量"""
    
    file_path = "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"
    
    # 创建备份
    backup_path = f"{file_path}.backup_final_{os.popen('date +%Y%m%d_%H%M%S').read().strip()}"
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    with open(backup_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"已创建备份文件: {backup_path}")
    
    # 替换规则
    replacements = [
        # 系统内存管理相关
        (r'undefined SystemMemory([A-Za-z]+);', r'void* SystemMemory\1;'),
        (r'undefined UnknownMemoryRegion([A-Za-z0-9]+);', r'void* SystemMemoryRegion\1;'),
        
        # 网络相关
        (r'undefined Network([A-Za-z]+);', r'void* Network\1;'),
        
        # 系统配置数据
        (r'undefined SystemConfigurationData([A-Za-z0-9]+);', r'void* SystemConfigurationData\1;'),
        
        # 系统内存数据模板
        (r'undefined SystemMemoryDataTemplate([A-Za-z]+);', r'void* SystemMemoryDataTemplate\1;'),
        
        # 资源表数据
        (r'undefined ResourceTableData([A-Za-z0-9]+);', r'void* ResourceTableData\1;'),
        
        # 事件分发器数据
        (r'undefined EventDispatcherData([A-Za-z0-9]+);', r'void* EventDispatcherData\1;'),
        
        # 核心引擎数据模板
        (r'undefined CoreEngineDataTemplate([A-Za-z]+);', r'void* CoreEngineDataTemplate\1;'),
        
        # 引擎系统配置节点
        (r'undefined EngineSystemConfigurationNode([A-Za-z]+);', r'void* EngineSystemConfigurationNode\1;'),
        
        # 特殊变量
        (r'undefined SystemGlobalDataFlag;', r'void* SystemGlobalDataFlag;'),
        (r'undefined SystemConfigDataTable;', r'void* SystemConfigDataTable;'),
        (r'undefined SystemNetworkBuffer;', r'void* SystemNetworkBuffer;'),
        (r'undefined SystemRenderContext;', r'void* SystemRenderContext;'),
        (r'undefined SystemAudioContext;', r'void* SystemAudioContext;'),
        (r'undefined SystemInputBuffer;', r'void* SystemInputBuffer;'),
        (r'undefined SystemPhysicsContext;', r'void* SystemPhysicsContext;'),
        (r'undefined SystemResourceTable;', r'void* SystemResourceTable;'),
        
        # 数据类型转换
        (r'undefined1 ([A-Za-z_]+);', r'uint8_t \1;'),
        (r'undefined4 ([A-Za-z_]+);', r'uint32_t \1;'),
        (r'undefined8 ([A-Za-z_]+);', r'uint64_t \1;'),
        
        # 函数声明
        (r'undefined CoreEngineInitializeResourceTable;', r'void* CoreEngineInitializeResourceTable;'),
        (r'undefined CoreEngineSetupResourceAllocator;', r'void* CoreEngineSetupResourceAllocator;'),
        (r'undefined CoreEngineInitializeResourcePool;', r'void* CoreEngineInitializeResourcePool;'),
        (r'undefined CoreEngineSetupEventDispatcher;', r'void* CoreEngineSetupEventDispatcher;'),
    ]
    
    # 应用替换规则
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    # 写回文件
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    # 统计剩余的undefined变量
    remaining = re.findall(r'undefined\s+[A-Za-z]', content)
    print(f"美化完成，剩余 {len(remaining)} 个undefined变量")
    
    if remaining:
        print("剩余的undefined变量示例:")
        for i, var in enumerate(remaining[:10]):
            print(f"  {i+1}. {var}")
        if len(remaining) > 10:
            print(f"  ... 还有 {len(remaining) - 10} 个")
    
    return len(remaining)

if __name__ == "__main__":
    beautify_core_engine()