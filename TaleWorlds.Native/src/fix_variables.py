import re

# 读取文件
file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c'
with open(file_path, 'r', encoding='utf-8') as f:
    content = f.read()

# 定义常见的小写变量名到大写的映射
variable_mappings = {
    'systemNodeFlag': 'SystemNodeFlag',
    'systemDataTable': 'SystemDataTable',
    'memoryCompareResult': 'MemoryCompareResult',
    'systemMemoryPointer': 'SystemMemoryPointer',
    'systemTimeValue': 'SystemTimeValue',
    'systemRootNode': 'SystemRootNode',
    'systemCurrentNode': 'SystemCurrentNode',
    'systemNextNode': 'SystemNextNode',
    'systemPreviousNode': 'SystemPreviousNode',
    'systemCallbackPointer': 'SystemCallbackPointer',
    'systemAllocatedNode': 'SystemAllocatedNode',
    'memoryAllocationSize': 'MemoryAllocationSize',
    'systemTablePointer': 'SystemTablePointer',
    'systemRootPointer': 'SystemRootPointer',
    'renderingInitializationFlag': 'RenderingInitializationFlag',
    'initializationCallback': 'InitializationCallback',
    'systemFlag': 'SystemFlag',
    'systemNodeTraversalFlag': 'SystemNodeTraversalFlag',
    'eventNodeFlag': 'EventNodeFlag',
    'isSystemNodeActive': 'IsSystemNodeActive',
    'threadState': 'ThreadState',
    'isActiveFlag': 'IsActiveFlag',
    'nodeStatus': 'NodeStatus',
    'callbackResult': 'CallbackResult',
    'validationResult': 'ValidationResult',
    'initializationStatus': 'InitializationStatus',
    'dataTypeFlag': 'DataTypeFlag',
    'nodeFlag': 'NodeFlag',
    'systemSearchFunctionPointer': 'SystemSearchFunctionPointer',
    'eventCallbackPointer': 'EventCallbackPointer',
    'systemInitializationFlag': 'SystemInitializationFlag',
    'resourcePoolCallbackPointer': 'ResourcePoolCallbackPointer',
    'debugInitializationCallback': 'DebugInitializationCallback',
    'systemCallbackData': 'SystemCallbackData',
    'systemPerformanceCallback': 'SystemPerformanceCallback',
    'systemStackPointer': 'SystemStackPointer',
    'resourceInitializationCallback': 'ResourceInitializationCallback'
}

# 对每个变量名进行替换
for old_var, new_var in variable_mappings.items():
    # 使用单词边界确保只替换完整的变量名
    pattern = r'\b' + re.escape(old_var) + r'\b'
    content = re.sub(pattern, new_var, content)

# 写入文件
with open(file_path, 'w', encoding='utf-8') as f:
    f.write(content)

print("变量名美化完成！")