#!/usr/bin/env python3
"""
美化04_ui_system.c文件中的变量名
处理逆向工程生成的变量名，将其转换为语义化的名称
"""

import re

def beautify_ui_variables():
    """批量替换04_ui_system.c中的变量名"""
    
    # 变量名映射字典
    variable_mappings = {
        # 基本类型变量
        'pcVar1': 'SystemCallPointer',
        'pcVar2': 'PathCharacterPointer',
        'pcVar3': 'CharacterPointer',
        
        # 布尔变量
        'bVar1': 'ByteFlag1',
        'bVar2': 'BooleanFlag1',
        'bVar3': 'BooleanFlag2',
        'bVar4': 'BooleanFlag3',
        'bVar5': 'BooleanFlag4',
        'bVar6': 'BooleanFlag5',
        'bVar7': 'BooleanFlag6',
        'bVar8': 'BooleanFlag7',
        'bVar9': 'BooleanFlag8',
        'bVar10': 'BooleanFlag9',
        
        # 字符变量
        'cVar1': 'Character1',
        'cVar2': 'Character2',
        'cVar3': 'Character3',
        'cVar4': 'Character4',
        'cVar5': 'Character5',
        'cVar6': 'Character6',
        'cVar7': 'Character7',
        'cVar8': 'Character8',
        'cVar9': 'Character9',
        'cVar10': 'Character10',
        'cVar11': 'Character11',
        'cVar12': 'Character12',
        'cVar13': 'Character13',
        'cVar14': 'Character14',
        'cVar15': 'Character15',
        
        # 字节指针变量
        'pbVar1': 'BytePointer1',
        'pbVar2': 'BytePointer2',
        'pbVar3': 'BytePointer3',
        'pbVar4': 'BytePointer4',
        'pbVar5': 'BytePointer5',
        'pbVar6': 'BytePointer6',
        'pbVar7': 'BytePointer7',
        'pbVar8': 'BytePointer8',
        'pbVar9': 'BytePointer9',
        'pbVar10': 'BytePointer10',
        'pbVar11': 'BytePointer11',
        'pbVar12': 'BytePointer12',
        'pbVar13': 'BytePointer13',
        'pbVar14': 'BytePointer14',
        'pbVar15': 'BytePointer15',
        'pbVar16': 'BytePointer16',
        'pbVar17': 'BytePointer17',
        'pbVar18': 'BytePointer18',
        'pbVar19': 'BytePointer19',
        'pbVar20': 'BytePointer20',
        
        # 浮点变量
        'fVar1': 'FloatValue1',
        'fVar2': 'FloatValue2',
        'fVar3': 'FloatValue3',
        'fVar4': 'FloatValue4',
        'fVar5': 'FloatValue5',
        'fVar6': 'FloatValue6',
        'fVar7': 'FloatValue7',
        'fVar8': 'FloatValue8',
        'fVar9': 'FloatValue9',
        'fVar10': 'FloatValue10',
        'fVar11': 'FloatValue11',
        'fVar12': 'FloatValue12',
        'fVar13': 'FloatValue13',
        'fVar14': 'FloatValue14',
        'fVar15': 'FloatValue15',
        'fVar16': 'FloatValue16',
        'fVar17': 'FloatValue17',
        'fVar18': 'FloatValue18',
        'fVar19': 'FloatValue19',
        'fVar20': 'FloatValue20',
        'fVar21': 'FloatValue21',
        'fVar22': 'FloatValue22',
        'fVar23': 'FloatValue23',
        'fVar24': 'FloatValue24',
        'fVar25': 'FloatValue25',
        'fVar26': 'FloatValue26',
        'fVar27': 'FloatValue27',
        'fVar28': 'FloatValue28',
        'fVar29': 'FloatValue29',
        'fVar30': 'FloatValue30',
        'fVar31': 'FloatValue31',
        'fVar32': 'FloatValue32',
        'fVar33': 'FloatValue33',
        'fVar34': 'FloatValue34',
        'fVar35': 'FloatValue35',
        'fVar36': 'FloatValue36',
    }
    
    # 读取文件
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c'
    
    try:
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
        
        original_content = content
        
        # 批量替换变量名
        for old_name, new_name in variable_mappings.items():
            # 使用正则表达式确保只匹配完整的变量名
            pattern = r'\b' + re.escape(old_name) + r'\b'
            content = re.sub(pattern, new_name, content)
        
        # 如果有变化，则写回文件
        if content != original_content:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)
            print(f"成功美化变量名: {len(variable_mappings)} 个变量")
            return True
        else:
            print("没有找到需要美化的变量名")
            return False
            
    except Exception as e:
        print(f"处理文件时出错: {e}")
        return False

if __name__ == "__main__":
    beautify_ui_variables()