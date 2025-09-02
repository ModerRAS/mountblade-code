#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
美化UI系统文件中的变量名
该脚本将逆向工程生成的变量名替换为有意义的名称
"""

import re
import shutil
from pathlib import Path

def beautify_ui_variables():
    """美化UI系统文件中的变量名"""
    
    input_file = Path("/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c")
    backup_file = input_file.with_suffix(".c.backup")
    
    # 创建备份
    shutil.copy2(input_file, backup_file)
    print(f"已创建备份文件: {backup_file}")
    
    # 读取文件内容
    with open(input_file, 'r', encoding='utf-8') as f:
        content = f.read()
    
    original_content = content
    
    # 变量替换映射
    variable_mappings = {
        # 浮点变量
        'fVar1': 'FloatVectorValue1',
        'fVar2': 'FloatVectorValue2', 
        'fVar3': 'FloatVectorValue3',
        'fVar4': 'FloatVectorValue4',
        'fVar5': 'FloatVectorValue5',
        'fVar6': 'FloatVectorValue6',
        'fVar7': 'FloatVectorValue7',
        'fVar8': 'FloatVectorValue8',
        'fVar9': 'FloatVectorValue9',
        
        # 字符变量
        'cVar5': 'CharStatusValue5',
        'cVar8': 'CharStatusValue8', 
        'cVar9': 'CharStatusValue9',
        
        # 未关联寄存器变量
        'unaff_RSI': 'SystemRegisterRsi',
        'unaff_R12D': 'SystemRegisterR12d',
        'unaff_R15': 'SystemRegisterR15',
        'unaff_R12': 'SystemRegisterR12',
        'unaff_R13': 'SystemRegisterR13',
        'unaff_R14': 'SystemRegisterR14',
        'unaff_R15D': 'SystemRegisterR15d',
        'unaff_EBX': 'SystemRegisterEbx',
        'unaff_XMM6_Da': 'FloatRegisterXmm6',
        'unaff_XMM7_Da': 'FloatRegisterXmm7',
        'unaff_XMM8_Da': 'FloatRegisterXmm8',
        'unaff_XMM9_Da': 'FloatRegisterXmm9',
        'unaff_XMM10_Da': 'FloatRegisterXmm10',
        'unaff_XMM12_Da': 'FloatRegisterXmm12a',
        'unaff_XMM12_Db': 'FloatRegisterXmm12b',
        'unaff_XMM12_Dc': 'FloatRegisterXmm12c',
        'unaff_XMM12_Dd': 'FloatRegisterXmm12d',
        'unaff_XMM13_Da': 'FloatRegisterXmm13',
        'unaff_XMM14_Da': 'FloatRegisterXmm14',
        'unaff_XMM15_Da': 'FloatRegisterXmm15',
        
        # 栈参数变量
        'in_stack_00000050': 'StackParameterCounter',
        
        # 浮点栈变量
        'fStack_100': 'FloatStackTransform100',
        'fStack_fc': 'FloatStackMatrixFc',
        'fStack_f0': 'FloatStackMatrixF0',
        'fStack_ec': 'FloatStackMatrixEc',
        'fStack_10c': 'FloatStackMatrix10c',
        'fStack0000000000000030': 'FloatStackAnimation30',
        'fStack0000000000000034': 'FloatStackAnimation34',
        'fStack0000000000000040': 'FloatStackAnimation40',
        'fStack0000000000000044': 'FloatStackAnimation44',
        
        # 特殊栈变量
        '_fStack0000000000000030': 'FloatStackTemp30',
        '_fStack0000000000000040': 'FloatStackTemp40',
        'fStackX_c': 'FloatStackVectorXc',
        'fStackX_8': 'FloatStackVectorX8',
    }
    
    # 执行变量替换
    print("开始美化变量名...")
    
    for old_name, new_name in variable_mappings.items():
        # 使用单词边界来确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
        print(f"  替换: {old_name} -> {new_name}")
    
    # 统计替换结果
    changes_made = []
    for old_name, new_name in variable_mappings.items():
        old_count = len(re.findall(r'\b' + re.escape(old_name) + r'\b', original_content))
        new_count = len(re.findall(r'\b' + re.escape(new_name) + r'\b', content))
        if old_count > 0:
            changes_made.append((old_name, new_name, old_count))
    
    # 写入文件
    with open(input_file, 'w', encoding='utf-8') as f:
        f.write(content)
    
    # 生成报告
    print("\n=== 变量名美化报告 ===")
    print(f"处理文件: {input_file}")
    print(f"备份文件: {backup_file}")
    print(f"总替换变量数: {len(changes_made)}")
    
    print("\n替换详情:")
    for old_name, new_name, count in changes_made:
        print(f"  {old_name} -> {new_name} (替换次数: {count})")
    
    return len(changes_made)

if __name__ == "__main__":
    try:
        total_changes = beautify_ui_variables()
        print(f"\n✅ 变量名美化完成！共处理了 {total_changes} 种变量类型")
    except Exception as e:
        print(f"❌ 美化过程中出现错误: {e}")
        raise