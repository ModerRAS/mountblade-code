#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
美化 02_core_engine.c 文件的脚本
替换剩余的DAT_变量为语义化名称
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            return f.read()
    except Exception as e:
        print(f"读取文件失败: {e}")
        return None

def write_file(file_path, content):
    """写入文件内容"""
    try:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        return True
    except Exception as e:
        print(f"写入文件失败: {e}")
        return False

def replace_dat_variables(content):
    """替换DAT_变量"""
    replacements = {
        '_DAT_180c8ed70': 'SystemMemoryBlockE',
        '_DAT_180c96810': 'SystemFunctionParameterA',
    }
    
    for old_name, new_name in replacements.items():
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def replace_fun_variables(content):
    """替换FUN_函数名"""
    replacements = {
        'FUN_180069f00': 'ProcessDataStructureInitialization',
        'FUN_180074f20': 'InitializeDataBufferStructure',
        'FUN_180074fb0': 'ConfigureDataBufferParameters',
        'FUN_180083c60': 'ProcessDataStructureOperationA',
        'FUN_180083cb0': 'ProcessDataStructureOperationB',
        'FUN_180083d00': 'ProcessDataStructureOperationC',
        'FUN_180083d50': 'ProcessDataStructureOperationD',
        'FUN_180083da0': 'ProcessDataStructureOperationE',
        'FUN_180083df0': 'ProcessDataStructureOperationF',
        'FUN_180083e40': 'ProcessDataStructureOperationG',
        'FUN_180083ec0': 'ProcessDataStructureOperationH',
        'FUN_1800855e0': 'ProcessSystemMemoryOperation',
        'FUN_180080060': 'ReleaseSystemResources',
        'FUN_1808fcb90': 'ValidateMemoryAllocation',
        'FUN_18018be60': 'ProcessSystemEventA',
        'FUN_1800befa0': 'InitializeSystemDataA',
        'FUN_180202180': 'ProcessSystemConfigurationA',
        'FUN_180202660': 'ProcessSystemConfigurationB',
        'FUN_1802041f0': 'ProcessMemoryBlockOperation',
        'FUN_1800623b0': 'ProcessSystemEventB',
    }
    
    for old_name, new_name in replacements.items():
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def replace_unk_variables(content):
    """替换UNK_变量"""
    replacements = {
        'UNK_180946958': 'SystemUnknownDataA',
        'UNK_180a1b008': 'SystemUnknownDataB',
    }
    
    for old_name, new_name in replacements.items():
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def replace_stack_variables(content):
    """替换栈变量"""
    replacements = {
        'uStack_': 'UnsignedStackVariable',
        'iStack_': 'IntegerStackVariable',
        'fStack_': 'FloatStackVariable',
        'cStack_': 'CharacterStackVariable',
        'bStack_': 'BooleanStackVariable',
        'pStack_': 'PointerStackVariable',
        'lStack_': 'LongStackVariable',
        'sStack_': 'ShortStackVariable',
        'dStack_': 'DoubleStackVariable',
        'auStack_': 'UnsignedArrayStackVariable',
        'aiStack_': 'IntegerArrayStackVariable',
        'afStack_': 'FloatArrayStackVariable',
        'acStack_': 'CharacterArrayStackVariable',
        'abStack_': 'BooleanArrayStackVariable',
        'apStack_': 'PointerArrayStackVariable',
        'alStack_': 'LongArrayStackVariable',
        'asStack_': 'ShortArrayStackVariable',
        'adStack_': 'DoubleArrayStackVariable',
        'in_stack_': 'InputParameterStackVariable',
        'out_stack_': 'OutputParameterStackVariable',
    }
    
    for old_name, new_name in replacements.items():
        # 特殊处理，保留数字后缀
        pattern = r'\b' + re.escape(old_name) + r'(\d+)'
        content = re.sub(pattern, new_name + r'\1', content)
    
    return content

def replace_local_variables(content):
    """替换局部变量"""
    replacements = {
        'local_': 'LocalVariable',
        'param_': 'Parameter',
        'extraout_': 'ExtraOutputVariable',
    }
    
    for old_name, new_name in replacements.items():
        # 特殊处理，保留数字后缀
        pattern = r'\b' + re.escape(old_name) + r'(\d+)'
        content = re.sub(pattern, new_name + r'\1', content)
    
    return content

def replace_generic_variables(content):
    """替换通用变量"""
    replacements = {
        'uVar': 'UnsignedVariable',
        'iVar': 'IntegerVariable',
        'fVar': 'FloatVariable',
        'cVar': 'CharacterVariable',
        'bVar': 'BooleanVariable',
        'pVar': 'PointerVariable',
        'lVar': 'LongVariable',
        'sVar': 'ShortVariable',
        'dVar': 'DoubleVariable',
    }
    
    for old_name, new_name in replacements.items():
        # 特殊处理，保留数字后缀
        pattern = r'\b' + re.escape(old_name) + r'(\d+)'
        content = re.sub(pattern, new_name + r'\1', content)
    
    return content

def replace_misc_variables(content):
    """替换其他变量"""
    replacements = {
        'unaff_': 'UnaffectedRegister',
        'DAT_': 'DataAddress',
        'LAB_': 'Label',
        'UNK_': 'UnknownData',
        'FUN_': 'Function',
        'Ram': 'Memory',
        'Stack': 'Stack',
        'Heap': 'Heap',
        'Global': 'Global',
        'Local': 'Local',
        'Static': 'Static',
        'Const': 'Constant',
        'Volatile': 'Volatile',
        'Register': 'Register',
        'Memory': 'Memory',
        'Data': 'Data',
        'Code': 'Code',
        'Text': 'Text',
        'String': 'String',
        'Buffer': 'Buffer',
        'Array': 'Array',
        'Structure': 'Structure',
        'Union': 'Union',
        'Enum': 'Enum',
        'Function': 'Function',
        'Procedure': 'Procedure',
        'Method': 'Method',
        'Class': 'Class',
        'Object': 'Object',
        'Instance': 'Instance',
        'Variable': 'Variable',
        'Constant': 'Constant',
        'Parameter': 'Parameter',
        'Argument': 'Argument',
        'Return': 'Return',
        'Value': 'Value',
        'Pointer': 'Pointer',
        'Reference': 'Reference',
        'Address': 'Address',
        'Offset': 'Offset',
        'Size': 'Size',
        'Length': 'Length',
        'Count': 'Count',
        'Index': 'Index',
        'Position': 'Position',
        'Location': 'Location',
        'Direction': 'Direction',
        'Vector': 'Vector',
        'Matrix': 'Matrix',
        'Quaternion': 'Quaternion',
        'Transform': 'Transform',
        'Rotation': 'Rotation',
        'Translation': 'Translation',
        'Scale': 'Scale',
        'Color': 'Color',
        'Texture': 'Texture',
        'Material': 'Material',
        'Shader': 'Shader',
        'Program': 'Program',
        'Pipeline': 'Pipeline',
        'Render': 'Render',
        'Draw': 'Draw',
        'Update': 'Update',
        'Process': 'Process',
        'Initialize': 'Initialize',
        'Finalize': 'Finalize',
        'Create': 'Create',
        'Destroy': 'Destroy',
        'Allocate': 'Allocate',
        'Deallocate': 'Deallocate',
        'Free': 'Free',
        'Malloc': 'Malloc',
        'Calloc': 'Calloc',
        'Realloc': 'Realloc',
        'New': 'New',
        'Delete': 'Delete',
        'Copy': 'Copy',
        'Move': 'Move',
        'Swap': 'Swap',
        'Compare': 'Compare',
        'Equal': 'Equal',
        'NotEqual': 'NotEqual',
        'Less': 'Less',
        'LessEqual': 'LessEqual',
        'Greater': 'Greater',
        'GreaterEqual': 'GreaterEqual',
        'Add': 'Add',
        'Subtract': 'Subtract',
        'Multiply': 'Multiply',
        'Divide': 'Divide',
        'Modulo': 'Modulo',
        'Increment': 'Increment',
        'Decrement': 'Decrement',
        'Negate': 'Negate',
        'Absolute': 'Absolute',
        'Minimum': 'Minimum',
        'Maximum': 'Maximum',
        'Clamp': 'Clamp',
        'Lerp': 'Lerp',
        'Slerp': 'Slerp',
        'Smooth': 'Smooth',
        'Step': 'Step',
        'SmoothStep': 'SmoothStep',
        'Mix': 'Mix',
        'Dot': 'Dot',
        'Cross': 'Cross',
        'Normalize': 'Normalize',
        'Length': 'Length',
        'Distance': 'Distance',
        'Angle': 'Angle',
        'Sin': 'Sin',
        'Cos': 'Cos',
        'Tan': 'Tan',
        'Asin': 'Asin',
        'Acos': 'Acos',
        'Atan': 'Atan',
        'Atan2': 'Atan2',
        'Sqrt': 'Sqrt',
        'Pow': 'Pow',
        'Exp': 'Exp',
        'Log': 'Log',
        'Log2': 'Log2',
        'Log10': 'Log10',
        'Floor': 'Floor',
        'Ceil': 'Ceil',
        'Round': 'Round',
        'Trunc': 'Trunc',
        'Fract': 'Fract',
        'Mod': 'Mod',
        'Sign': 'Sign',
        'Abs': 'Abs',
        'Min': 'Min',
        'Max': 'Max',
        'Clamp': 'Clamp',
        'Mix': 'Mix',
        'Step': 'Step',
        'SmoothStep': 'SmoothStep',
        'Length': 'Length',
        'Distance': 'Distance',
        'Dot': 'Dot',
        'Cross': 'Cross',
        'Normalize': 'Normalize',
        'FaceForward': 'FaceForward',
        'Reflect': 'Reflect',
        'Refract': 'Refract',
        'MatrixCompMult': 'MatrixCompMult',
        'OuterProduct': 'OuterProduct',
        'Transpose': 'Transpose',
        'Determinant': 'Determinant',
        'Inverse': 'Inverse',
        'LessThan': 'LessThan',
        'LessThanEqual': 'LessThanEqual',
        'GreaterThan': 'GreaterThan',
        'GreaterThanEqual': 'GreaterThanEqual',
        'Equal': 'Equal',
        'NotEqual': 'NotEqual',
        'Any': 'Any',
        'All': 'All',
        'Not': 'Not',
        'PackSnorm2x16': 'PackSnorm2x16',
        'PackUnorm2x16': 'PackUnorm2x16',
        'PackHalf2x16': 'PackHalf2x16',
        'UnpackSnorm2x16': 'UnpackSnorm2x16',
        'UnpackUnorm2x16': 'UnpackUnorm2x16',
        'UnpackHalf2x16': 'UnpackHalf2x16',
        'PackSnorm4x8': 'PackSnorm4x8',
        'PackUnorm4x8': 'PackUnorm4x8',
        'UnpackSnorm4x8': 'UnpackSnorm4x8',
        'UnpackUnorm4x8': 'UnpackUnorm4x8',
        'BitfieldExtract': 'BitfieldExtract',
        'BitfieldInsert': 'BitfieldInsert',
        'BitfieldReverse': 'BitfieldReverse',
        'BitCount': 'BitCount',
        'FindLSB': 'FindLSB',
        'FindMSB': 'FindMSB',
        'UaddCarry': 'UaddCarry',
        'UsubBorrow': 'UsubBorrow',
        'UmulExtended': 'UmulExtended',
        'ImulExtended': 'ImulExtended',
        'Frexp': 'Frexp',
        'Ldexp': 'Ldexp',
        'PackUnorm': 'PackUnorm',
        'PackSnorm': 'PackSnorm',
        'UnpackUnorm': 'UnpackUnorm',
        'UnpackSnorm': 'UnpackSnorm',
        'PackDouble2x32': 'PackDouble2x32',
        'UnpackDouble2x32': 'UnpackDouble2x32',
    }
    
    for old_name, new_name in replacements.items():
        # 特殊处理，保留数字后缀
        pattern = r'\b' + re.escape(old_name) + r'(\d+)'
        content = re.sub(pattern, new_name + r'\1', content)
    
    return content

def beautify_file(file_path):
    """美化文件"""
    print(f"开始美化文件: {file_path}")
    
    # 读取文件
    content = read_file(file_path)
    if content is None:
        return False
    
    # 应用替换
    print("替换DAT_变量...")
    content = replace_dat_variables(content)
    
    print("替换FUN_函数名...")
    content = replace_fun_variables(content)
    
    print("替换UNK_变量...")
    content = replace_unk_variables(content)
    
    print("替换栈变量...")
    content = replace_stack_variables(content)
    
    print("替换局部变量...")
    content = replace_local_variables(content)
    
    print("替换通用变量...")
    content = replace_generic_variables(content)
    
    print("替换其他变量...")
    content = replace_misc_variables(content)
    
    # 写入文件
    if write_file(file_path, content):
        print(f"文件美化完成: {file_path}")
        return True
    else:
        return False

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("用法: python finish_beautify.py <文件路径>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    if not beautify_file(file_path):
        sys.exit(1)

if __name__ == "__main__":
    main()