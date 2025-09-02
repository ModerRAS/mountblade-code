#!/bin/bash

# 创建一个临时脚本来修改变量名
cat > /tmp/fix_vars.py << 'EOF'
import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'r') as f:
    content = f.read()

# 替换变量名
replacements = {
    'SystemHeapManager': 'HeapManager',
    'SystemStackManager': 'StackManager', 
    'SystemGlobalData': 'GlobalData',
    'SystemConfigurationData': 'ConfigurationData',
    'SystemRuntimeData': 'RuntimeData',
    'SystemCacheManager': 'CacheManager',
    'SystemDataBufferPool': 'DataBufferPool',
    'SystemEventTable': 'EventTable',
    'SystemThreadManager': 'ThreadManager',
    'SystemProcessManager': 'ProcessManager',
    'SystemMemoryAllocator': 'MemoryAllocator',
    'SystemMemoryPool': 'MemoryPool',
    'SystemTaskScheduler': 'TaskScheduler',
    'SystemResourcePool': 'ResourcePool',
    'SystemDataManager': 'DataManager',
    'SystemDataBufferManager': 'DataBufferManager',
    'SystemIoManager': 'IoManager',
    'SystemFileHandler': 'FileHandler'
}

# 执行替换
for old, new in replacements.items():
    content = content.replace(old, new)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'w') as f:
    f.write(content)

print("变量名替换完成")
EOF

# 执行Python脚本
python3 /tmp/fix_vars.py

# 清理临时文件
rm /tmp/fix_vars.py