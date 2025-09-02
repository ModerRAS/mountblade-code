#!/usr/bin/env python3
"""
美化06_utilities.c文件中的Unwind函数
将数字命名的Unwind函数重命名为语义化名称
"""

import re
import sys

def beautify_unwind_functions():
    """批量重命名Unwind函数为语义化名称"""
    
    # 读取文件内容
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义Unwind函数的重命名映射
    function_mappings = {
        'Unwind_180906a00': 'ProcessSystemContextAtOffsetA0',
        'Unwind_180906a50': 'ProcessSystemContextAtOffset180',
        'Unwind_180906a60': 'ExecuteSystemCallbackAtOffsetA0',
        'Unwind_180906a70': 'ExecuteSystemCallbackAtOffsetA8',
        'Unwind_180906a80': 'ExecuteSystemCallbackAtOffsetC8',
        'Unwind_180906a90': 'ProcessResourceFlagAtOffset20',
        'Unwind_180906ac0': 'ProcessSystemContextAtOffset28',
        'Unwind_180906ad0': 'ExecuteSystemCallbackAtOffset30',
        'Unwind_180906ae0': 'ExecuteSystemCallbackAtOffset50',
        'Unwind_180906af0': 'ProcessSystemContextAtOffset70',
        'Unwind_180906b20': 'ExecuteSystemCallbackAtOffset100',
        'Unwind_180906b30': 'ExecuteSystemCallbackAtOffset78',
        'Unwind_180906b40': 'ValidateResourceHashAtOffsetB4',
        'Unwind_180906b50': 'ValidateResourceHashAtIndex',
        'Unwind_180906b60': 'ValidateResourceHashAtTable',
        'Unwind_180906b70': 'ProcessSystemContextAtOffset30',
        'Unwind_180906ba0': 'ProcessSystemContextAtOffset20',
        'Unwind_180906bb0': 'ValidateResourceHashAtSecondaryIndex',
        'Unwind_180906bc0': 'ValidateResourceHashAtTertiaryIndex',
        'Unwind_180906bd0': 'RegisterResourceHandlerAtOffset40',
        'Unwind_180906c20': 'ExecuteSystemCallbackAtOffset60',
        'Unwind_180906c30': 'ExecuteSystemCallbackAtOffset60Secondary',
        'Unwind_180906c40': 'ExecuteSystemCallbackAtOffset80',
        'Unwind_180906c50': 'ValidateResourceHashAtQuaternaryIndex',
        'Unwind_180906c60': 'ProcessResourceContextAtOffsetF8',
        'Unwind_180906c70': 'ProcessResourceContextAtOffsetD8',
        'Unwind_180906c80': 'ValidateResourceHashAtQuinaryIndex',
        'Unwind_180906c90': 'ValidateResourceHashAtSenaryIndex',
        'Unwind_180906ca0': 'ValidateResourceHashAtSeptenaryIndex',
        'Unwind_180906d10': 'ValidateResourceHashAtOctonaryIndex',
        'Unwind_180906d20': 'ProcessResourceContextAtOffsetD8Secondary',
        'Unwind_180906d30': 'ValidateResourceHashAtNonaryIndex',
        'Unwind_180906d40': 'ValidateResourceHashAtDenaryIndex',
        'Unwind_180906d50': 'ValidateResourceHashAtUndenaryIndex',
        'Unwind_180906d60': 'ValidateResourceHashAtDuodenaryIndex',
        'Unwind_180906d70': 'ValidateResourceHashAtTerdenaryIndex',
        'Unwind_180906d80': 'ValidateResourceHashAtQuaternaryIndex2',
        'Unwind_180906d90': 'ValidateResourceHashAtQuindenaryIndex',
        'Unwind_180906da0': 'ValidateResourceHashAtSenaryIndex2',
        'Unwind_180906db0': 'ProcessResourceContextAtOffset30Secondary',
        'Unwind_180906dc0': 'ValidateResourceHashAtSeptenaryIndex2',
        'Unwind_180906dd0': 'ProcessResourceTableAtOffset',
        'Unwind_180906de0': 'ProcessResourceTableAtSecondaryOffset',
        'Unwind_180906df0': 'CommitResourceTransactionAtOffsetD8',
        'Unwind_180906e00': 'ExecuteSystemCallbackAtOffset118',
        'Unwind_180906e10': 'ExecuteSystemCallbackAtOffset120',
        'Unwind_180906e20': 'ExecuteSystemCallbackAtOffset170',
        'Unwind_180906e30': 'ExecuteSystemCallbackAtOffset178',
        'Unwind_180906e40': 'ExecuteSystemCallbackAtOffsetD0',
        'Unwind_180906ec0': 'ProcessSystemContextAtOffset178',
        'Unwind_180906ed0': 'ProcessSystemContextAtOffset178Secondary',
        'Unwind_180906ee0': 'ProcessResourceTableAtTertiaryOffset',
        'Unwind_180906ef0': 'ExecuteCharPointerAtOffset170',
        'Unwind_180906f00': 'ProcessSystemContextAtOffset30Tertiary',
        'Unwind_180906f10': 'ProcessSystemContextAtOffset30Quaternary',
        'Unwind_180906f20': 'ProcessResourceTableAtQuaternaryOffset',
        'Unwind_180906f30': 'ProcessSystemContextAtOffsetB0',
        'Unwind_180906f40': 'ProcessSystemContextAtOffsetB0Secondary',
        'Unwind_180906f50': 'ExecuteSystemCallbackAtOffset88',
        'Unwind_180906f60': 'ExecuteSystemCallbackAtOffset40',
        'Unwind_180906f70': 'ExecuteSystemCallbackAtOffset40Secondary',
        'Unwind_180906f80': 'ProcessSystemContextAtOffset40Quaternary',
        'Unwind_180906f90': 'RegisterResourceHandlerAtOffset50',
        'Unwind_180906fc0': 'RegisterResourceHandlerAtOffset50Secondary',
        'Unwind_180906ff0': 'ExecuteSystemCallbackAtOffset50Tertiary'
    }
    
    # 执行重命名
    for old_name, new_name in function_mappings.items():
        # 替换函数定义
        content = re.sub(
            r'void\s+' + re.escape(old_name) + r'\s*\(',
            f'void {new_name}(',
            content
        )
        
        # 替换函数调用
        content = re.sub(
            r'\b' + re.escape(old_name) + r'\b',
            new_name,
            content
        )
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"成功重命名了 {len(function_mappings)} 个Unwind函数")

if __name__ == "__main__":
    beautify_unwind_functions()