#!/bin/bash

# 批量重命名06_utilities.c中的Unwind函数
# 这个脚本将美化逆向工程生成的函数名

# 创建临时脚本文件
cat > /tmp/rename_functions.py << 'EOF'
import re
import sys

# 读取文件内容
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 函数名映射表
function_mappings = {
    'Unwind_180908cd0': 'RegisterContextResourceHandler',
    'Unwind_180908d00': 'RegisterSystemResourceHandler',
    'Unwind_180908d50': 'ReleaseSystemMemoryHandler',
    'Unwind_180908d60': 'ReleaseContextMemoryHandler',
    'Unwind_180908d70': 'ReleaseValidationMemoryHandler',
    'Unwind_180908d80': 'ReleaseSystemResourceHandler',
    'Unwind_180908db0': 'InitializeResourceHashHandler',
    'Unwind_180908dc0': 'ProcessResourceHash',
    'Unwind_180908dd0': 'ValidateResourceHash',
    'Unwind_180908de0': 'CleanupResourceHash',
    'Unwind_180908df0': 'InitializeSystemDataTable',
    'Unwind_180908e00': 'InitializeSystemDataTableExtended',
    'Unwind_180908e60': 'InitializeStdLibraryLock',
    'Unwind_180908e70': 'ProcessResourceHashExtended',
    'Unwind_180908e90': 'DestroyBasicStreamBuffer',
    'Unwind_180908ea0': 'DestroyBasicOutputStream',
    'Unwind_180908eb0': 'ProcessResourceTable',
    'Unwind_180908ec0': 'CleanupSystemStateHandler',
    'Unwind_180908ed0': 'InitializeSystemContext',
    'Unwind_180908ee0': 'InitializeSystemContextExtended',
    'Unwind_180908ef0': 'InitializeSecurityContext',
    'Unwind_180908f00': 'ProcessSecurityValidation',
    'Unwind_180908f10': 'DestroySecurityContext',
    'Unwind_180908f30': 'ProcessResourceTableExtended',
    'Unwind_180908f90': 'InitializeMemoryPool',
    'Unwind_180908fa0': 'AllocateMemoryPool',
    'Unwind_180908fb0': 'DeallocateMemoryPool',
    'Unwind_180909000': 'ValidateMemoryPool',
    'Unwind_180909010': 'CleanupMemoryPool',
    'Unwind_180909020': 'InitializeThreadContext',
    'Unwind_180909060': 'CreateThreadContext',
    'Unwind_180909080': 'DestroyThreadContext',
    'Unwind_180909090': 'ValidateThreadContext',
    'Unwind_1809090a0': 'ProcessThreadOperation',
    'Unwind_1809090b0': 'InitializeEventSystem',
    'Unwind_1809090d0': 'CreateEventSystem',
    'Unwind_1809090f0': 'DestroyEventSystem',
    'Unwind_180909110': 'TriggerEventSystem',
    'Unwind_180909130': 'WaitForEventSystem',
    'Unwind_180909150': 'InitializeCriticalSection',
    'Unwind_180909170': 'EnterCriticalSection',
    'Unwind_180909190': 'LeaveCriticalSection',
    'Unwind_1809091b0': 'DeleteCriticalSection',
    'Unwind_1809091d0': 'InitializeMutexSystem',
    'Unwind_1809091f0': 'CreateMutexSystem',
    'Unwind_180909210': 'ReleaseMutexSystem',
    'Unwind_180909230': 'DestroyMutexSystem',
    'Unwind_180909250': 'InitializeSemaphoreSystem',
    'Unwind_180909270': 'CreateSemaphoreSystem',
    'Unwind_180909290': 'ReleaseSemaphoreSystem',
    'Unwind_1809092b0': 'DestroySemaphoreSystem',
    'Unwind_1809092d0': 'InitializeTimerSystem',
    'Unwind_1809092e0': 'ProcessTimerOperation'
}

# 为每个函数添加注释和重命名
for old_name, new_name in function_mappings.items():
    # 查找函数定义
    pattern = rf'void {old_name}\((.*?)\)\s*\{{(.*?)\}}'
    matches = re.findall(pattern, content, re.DOTALL)
    
    if matches:
        for match in matches:
            params = match[0]
            body = match[1]
            
            # 创建新的函数定义
            comment = f'''\/**
 * @brief {new_name.replace(/([A-Z])/g, ' $1').replace(/^./, str => str.toUpperCase()).trim()}
 * 
 * 该函数负责{new_name.replace(/([A-Z])/g, ' $1').replace(/^./, str => str.toUpperCase()).trim()}
 * 
 * @param {params.split(',')[0].strip()} 对象上下文
 * @param {params.split(',')[1].strip() if ',' in params else ''} 验证上下文
 * @return 无返回值
 */'''
            
            new_function = f'{comment}\nvoid {new_name}({params})\n\n{{\n{body}\n}}'
            
            # 替换原函数
            old_function = f'void {old_name}({params})\s*\{{(.*?)\}}'
            content = re.sub(old_function, new_function, content, flags=re.DOTALL)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'w', encoding='utf-8') as f:
    f.write(content)

print("函数重命名完成")
EOF

# 执行Python脚本
python3 /tmp/rename_functions.py

# 清理临时文件
rm /tmp/rename_functions.py