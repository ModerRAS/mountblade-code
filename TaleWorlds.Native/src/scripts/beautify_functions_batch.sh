#!/bin/bash

# 函数美化脚本
# 为99_unmatched_functions.c文件中的函数添加语义化名称

# 定义函数映射表
declare -A function_mappings=(
    ["FUN_1800b0710"]="ResourceHandleProcessor"
    ["FUN_1800b0a10"]="ResourceDataProcessor"
    ["FUN_1800b1230"]="MemoryAllocationManager"
    ["FUN_1800b1d50"]="SystemDataInitializer"
    ["FUN_1800b1d80"]="ResourceContextManager"
    ["FUN_1800b2450"]="DataStructureHandler"
    ["FUN_1800b2a30"]="SystemResourceAllocator"
    ["FUN_1800b2bd0"]="MemoryBufferValidator"
    ["FUN_1800b2bfd"]="ResourceAccessController"
    ["FUN_1800b2cb2"]="SystemStatusChecker"
    ["FUN_1800b4810"]="SystemOperationExecutor"
    ["FUN_1800b4830"]="SystemOperationProcessor"
    ["FUN_1800b4860"]="SystemResourceHandler"
    ["FUN_1800b4890"]="SystemDataManager"
    ["FUN_1800b48c0"]="SystemDataProcessor"
    ["FUN_1800b48e0"]="SystemResourceProcessor"
    ["FUN_1800b4910"]="ResourceHandleManager"
    ["FUN_1800b4a00"]="SystemResourceAllocator"
    ["FUN_1800b4a40"]="SystemResourceManager"
    ["FUN_1800b4e00"]="ResourceOperationHandler"
    ["FUN_1800b4ec0"]="SystemResourceInitializer"
    ["FUN_1800b57a0"]="SystemResourceController"
    ["FUN_1800b5cc0"]="ResourceDataHandler"
    ["FUN_1800b5d10"]="ResourceDataManager"
    ["FUN_1800b5d38"]="SystemCleanupHandler"
    ["FUN_1800b5e73"]="SystemInitializationHandler"
    ["FUN_1800b5ec0"]="SystemResourceProvider"
    ["FUN_1800b6780"]="SystemOperationManager"
    ["FUN_1800b6940"]="SystemDataOperationHandler"
    ["FUN_1800b6b20"]="SystemResourceOperationHandler"
    ["FUN_1800b6d80"]="SystemDataStructureHandler"
    ["FUN_1800b6de0"]="SystemResourceProvider"
    ["FUN_1800b70e0"]="SystemMemoryManager"
    ["FUN_1800b76b0"]="SystemResourceHandler"
    ["FUN_1800b76d4"]="SystemCleanupProcessor"
    ["FUN_1800b782b"]="SystemInitializationProcessor"
    ["FUN_1800b7840"]="SystemResourceInitializer"
    ["FUN_1800b7a70"]="SystemDataOperationManager"
    ["FUN_1800b7ca0"]="MemoryResourceHandler"
    ["FUN_1800b7eb0"]="SystemResourceOperationManager"
    ["FUN_1800b8090"]="SystemDataStructureManager"
    ["FUN_1800b82b0"]="SystemResourceDataManager"
    ["FUN_1800b8370"]="SystemResourceDataHandler"
    ["FUN_1800b8500"]="SystemResourceCleaner"
    ["FUN_1800b8570"]="SystemResourceResetter"
    ["FUN_1800b8630"]="SystemResourceReleaser"
    ["FUN_1800b8674"]="SystemResourceProvider"
    ["FUN_1800b89fa"]="SystemStatusProcessor"
    ["FUN_1800b8a10"]="SystemOperationHandler"
    ["FUN_1800b8a30"]="SystemDataHandler"
    ["FUN_1800b8a90"]="SystemResourceCleaner"
    ["FUN_1800b8aa6"]="SystemInitializationHandler"
)

# 创建临时脚本文件
cat > /tmp/rename_functions.py << 'EOF'
import re
import sys

# 读取文件内容
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 函数映射表
function_mappings = {
    'FUN_1800b0710': 'ResourceHandleProcessor',
    'FUN_1800b0a10': 'ResourceDataProcessor',
    'FUN_1800b1230': 'MemoryAllocationManager',
    'FUN_1800b1d50': 'SystemDataInitializer',
    'FUN_1800b1d80': 'ResourceContextManager',
    'FUN_1800b2450': 'DataStructureHandler',
    'FUN_1800b2a30': 'SystemResourceAllocator',
    'FUN_1800b2bd0': 'MemoryBufferValidator',
    'FUN_1800b2bfd': 'ResourceAccessController',
    'FUN_1800b2cb2': 'SystemStatusChecker',
    'FUN_1800b4810': 'SystemOperationExecutor',
    'FUN_1800b4830': 'SystemOperationProcessor',
    'FUN_1800b4860': 'SystemResourceHandler',
    'FUN_1800b4890': 'SystemDataManager',
    'FUN_1800b48c0': 'SystemDataProcessor',
    'FUN_1800b48e0': 'SystemResourceProcessor',
    'FUN_1800b4910': 'ResourceHandleManager',
    'FUN_1800b4a00': 'SystemResourceAllocator',
    'FUN_1800b4a40': 'SystemResourceManager',
    'FUN_1800b4e00': 'ResourceOperationHandler',
    'FUN_1800b4ec0': 'SystemResourceInitializer',
    'FUN_1800b57a0': 'SystemResourceController',
    'FUN_1800b5cc0': 'ResourceDataHandler',
    'FUN_1800b5d10': 'ResourceDataManager',
    'FUN_1800b5d38': 'SystemCleanupHandler',
    'FUN_1800b5e73': 'SystemInitializationHandler',
    'FUN_1800b5ec0': 'SystemResourceProvider',
    'FUN_1800b6780': 'SystemOperationManager',
    'FUN_1800b6940': 'SystemDataOperationHandler',
    'FUN_1800b6b20': 'SystemResourceOperationHandler',
    'FUN_1800b6d80': 'SystemDataStructureHandler',
    'FUN_1800b6de0': 'SystemResourceProvider',
    'FUN_1800b70e0': 'SystemMemoryManager',
    'FUN_1800b76b0': 'SystemResourceHandler',
    'FUN_1800b76d4': 'SystemCleanupProcessor',
    'FUN_1800b782b': 'SystemInitializationProcessor',
    'FUN_1800b7840': 'SystemResourceInitializer',
    'FUN_1800b7a70': 'SystemDataOperationManager',
    'FUN_1800b7ca0': 'MemoryResourceHandler',
    'FUN_1800b7eb0': 'SystemResourceOperationManager',
    'FUN_1800b8090': 'SystemDataStructureManager',
    'FUN_1800b82b0': 'SystemResourceDataManager',
    'FUN_1800b8370': 'SystemResourceDataHandler',
    'FUN_1800b8500': 'SystemResourceCleaner',
    'FUN_1800b8570': 'SystemResourceResetter',
    'FUN_1800b8630': 'SystemResourceReleaser',
    'FUN_1800b8674': 'SystemResourceProvider',
    'FUN_1800b89fa': 'SystemStatusProcessor',
    'FUN_1800b8a10': 'SystemOperationHandler',
    'FUN_1800b8a30': 'SystemDataHandler',
    'FUN_1800b8a90': 'SystemResourceCleaner',
    'FUN_1800b8aa6': 'SystemInitializationHandler',
}

# 替换函数定义
for old_name, new_name in function_mappings.items():
    # 替换函数定义
    pattern = r'(\b(?:void|ulonglong|int|undefined8|longlong|uint|undefined4|float|double|bool)\s+)' + re.escape(old_name) + r'(\s*\()'
    replacement = r'\1' + new_name + r'\2'
    content = re.sub(pattern, replacement, content)
    
    # 替换函数调用
    call_pattern = r'\b' + re.escape(old_name) + r'(\s*\()'
    call_replacement = new_name + r'\1'
    content = re.sub(call_pattern, call_replacement, content)

# 写入文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c', 'w', encoding='utf-8') as f:
    f.write(content)

print("函数重命名完成")
EOF

# 执行Python脚本
python3 /tmp/rename_functions.py

# 清理临时文件
rm -f /tmp/rename_functions.py

echo "函数美化完成"