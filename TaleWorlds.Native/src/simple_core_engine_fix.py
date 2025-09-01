#!/usr/bin/env python3

import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 统计处理前的数量
before_count = len(re.findall(r'undefined\s+[A-Za-z]', content))
print(f"处理前有 {before_count} 个undefined变量")

# 处理系统内存管理变量
content = re.sub(r'undefined SystemMemory([A-Za-z]+);', r'void* SystemMemory\1;', content)

# 处理未知内存区域变量
content = re.sub(r'undefined UnknownMemoryRegion([A-Za-z0-9]+);', r'void* SystemMemoryRegion\1;', content)

# 处理网络相关变量
content = re.sub(r'undefined Network([A-Za-z]+);', r'void* Network\1;', content)

# 处理系统配置数据变量
content = re.sub(r'undefined SystemConfigurationData([A-Za-z0-9]+);', r'void* SystemConfigurationData\1;', content)

# 处理系统内存数据模板变量
content = re.sub(r'undefined SystemMemoryDataTemplate([A-Za-z]+);', r'void* SystemMemoryDataTemplate\1;', content)

# 处理资源表数据变量
content = re.sub(r'undefined ResourceTableData([A-Za-z0-9]+);', r'void* ResourceTableData\1;', content)

# 处理事件分发器数据变量
content = re.sub(r'undefined EventDispatcherData([A-Za-z0-9]+);', r'void* EventDispatcherData\1;', content)

# 处理核心引擎数据模板变量
content = re.sub(r'undefined CoreEngineDataTemplate([A-Za-z]+);', r'void* CoreEngineDataTemplate\1;', content)

# 处理引擎系统配置节点变量
content = re.sub(r'undefined EngineSystemConfigurationNode([A-Za-z]+);', r'void* EngineSystemConfigurationNode\1;', content)

# 处理特殊变量
special_vars = [
    'SystemGlobalDataFlag',
    'SystemConfigDataTable',
    'SystemNetworkBuffer',
    'SystemRenderContext',
    'SystemAudioContext',
    'SystemInputBuffer',
    'SystemPhysicsContext',
    'SystemResourceTable'
]

for var in special_vars:
    content = re.sub(f'undefined {var};', f'void* {var};', content)

# 处理数据类型
content = re.sub(r'undefined1 ([A-Za-z_]+);', r'uint8_t \1;', content)
content = re.sub(r'undefined4 ([A-Za-z_]+);', r'uint32_t \1;', content)
content = re.sub(r'undefined8 ([A-Za-z_]+);', r'uint64_t \1;', content)

# 处理函数声明
function_replacements = [
    ('CoreEngineInitializeResourceTable', 'void*'),
    ('CoreEngineSetupResourceAllocator', 'void*'),
    ('CoreEngineInitializeResourcePool', 'void*'),
    ('CoreEngineSetupEventDispatcher', 'void*')
]

for func, return_type in function_replacements:
    content = re.sub(f'undefined {func};', f'{return_type} {func};', content)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'w', encoding='utf-8') as f:
    f.write(content)

# 统计处理后的数量
after_count = len(re.findall(r'undefined\s+[A-Za-z]', content))
print(f"处理后有 {after_count} 个undefined变量")
print(f"处理了 {before_count - after_count} 个变量")

if after_count > 0:
    print("剩余的undefined变量:")
    remaining = re.findall(r'undefined\s+[A-Za-z][^;]*;', content)
    for i, var in enumerate(remaining[:10]):
        print(f"  {i+1}. {var}")
    if len(remaining) > 10:
        print(f"  ... 还有 {len(remaining) - 10} 个")