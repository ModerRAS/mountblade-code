#!/usr/bin/env python3
"""
批量美化99_unmatched_functions.c文件中的变量名
"""

import re

def beautify_variables():
    # 定义变量名映射
    variable_mappings = {
        'DAT_180bfa2e8': 'SystemMemoryPoolSize',
        'DAT_180bfa2f8': 'SystemMemoryPoolCapacity',
        'DAT_180bfa310': 'SystemMemoryPoolFlags',
        'DAT_180bfa308': 'SystemMemoryPoolState',
        'DAT_180bfa318': 'SystemMemoryPoolAllocator',
        'DAT_180bfa330': 'SystemMemoryPoolManager',
        'DAT_180bfa328': 'SystemMemoryPoolHeader',
        'DAT_180bfa338': 'SystemMemoryPoolFooter',
        'DAT_180bfa340': 'SystemMemoryPoolCounter1',
        'DAT_180bfa320': 'SystemMemoryPoolCounter2',
        'DAT_180bfa300': 'SystemMemoryPoolCounter3',
        'DAT_1809fd8ac': 'SystemNetworkBuffer',
        'DAT_180a0be28': 'SystemAudioBuffer',
        'DAT_180c8ec7a': 'SystemStatusFlag',
        'DAT_180a01400': 'SystemGraphicsBuffer',
        'DAT_180a09db0': 'SystemPhysicsBuffer',
        'DAT_180a13168': 'SystemInputBuffer',
        'DAT_180a24f58': 'SystemAnimationBuffer',
        'DAT_180a25028': 'SystemCameraBuffer',
        'DAT_180a26f50': 'SystemLightingBuffer',
        'DAT_180bf00a8': 'SystemSecurityKey',
        'DAT_180c8ed18': 'SystemMemoryAllocator',
        'DAT_180c86898': 'SystemStringBuffer',
        'DAT_180c86870': 'SystemResourceTable',
        'DAT_180c86920': 'SystemContextData',
        'DAT_180c82860': 'SystemInitializationFlag',
        'DAT_180c8aa50': 'SystemRenderContext',
        'DAT_180c86928': 'SystemModuleContext',
        'DAT_180c86890': 'SystemThreadContext',
        'DAT_180c86930': 'SystemProcessContext',
        'DAT_180c86938': 'SystemResourceContext',
        'DAT_180d48d38': 'SystemDataPointer',
        'DAT_180d48d28': 'SystemGlobalFlag',
        'DAT_180bf5210': 'SystemConfigString',
        'DAT_180bf5218': 'SystemConfigType',
        'DAT_1809fc7ec': 'SystemFormatString',
        'DAT_1809fc8e4': 'SystemSearchString',
        'DAT_180a06430': 'SystemTemplateData',
        'DAT_180a029b0': 'SystemValidationData',
        'DAT_180c8a998': 'SystemFunctionTable',
        'DAT_180a01db8': 'SystemConstantString1',
        'DAT_180a01e30': 'SystemConstantString2',
        'DAT_180a01e80': 'SystemConstantString3',
        'DAT_180a01de0': 'SystemConstantString4',
        'DAT_180a02638': 'SystemDataTable1',
        'DAT_180a02640': 'SystemDataTable2',
        'DAT_180a02644': 'SystemDataTable3',
        'DAT_180a02648': 'SystemDataTable4',
        'DAT_180a0264c': 'SystemDataTable5',
        'DAT_180a0263c': 'SystemDataTable6'
    }
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 替换变量名
    for old_name, new_name in variable_mappings.items():
        # 只替换完整的变量名，避免部分匹配
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"完成了 {len(variable_mappings)} 个变量名的替换")

if __name__ == '__main__':
    beautify_variables()