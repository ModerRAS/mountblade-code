#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
美化06_utilities.c文件中的变量名
这个脚本会识别并美化未语义化的变量名
"""

import re
import sys

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def beautify_variables(content):
    """美化变量名"""
    
    # 变量名映射字典
    variable_mappings = {
        # 基础变量
        'var_1': 'FirstVariable',
        'var_2': 'SecondVariable',
        'var_3': 'ThirdVariable',
        'var_4': 'FourthVariable',
        'var_5': 'FifthVariable',
        
        # 临时变量
        'temp': 'TemporaryValue',
        'tmp': 'TemporaryValue',
        'temp_var': 'TemporaryVariable',
        'temp_val': 'TemporaryValue',
        
        # 计数器
        'i': 'Index',
        'j': 'SecondaryIndex',
        'k': 'TertiaryIndex',
        'counter': 'Counter',
        'count': 'Count',
        'cnt': 'Count',
        
        # 指针
        'ptr': 'Pointer',
        'p': 'Pointer',
        'p1': 'FirstPointer',
        'p2': 'SecondPointer',
        
        # 缓冲区
        'buf': 'Buffer',
        'buffer': 'Buffer',
        'data': 'Data',
        'str': 'String',
        'str_buf': 'StringBuffer',
        
        # 长度
        'len': 'Length',
        'size': 'Size',
        'sz': 'Size',
        
        # 结果
        'result': 'Result',
        'res': 'Result',
        'ret': 'ReturnValue',
        'retval': 'ReturnValue',
        
        # 标志
        'flag': 'Flag',
        'flags': 'Flags',
        'b': 'Boolean',
        'bFlag': 'BooleanFlag',
        
        # 句柄
        'handle': 'Handle',
        'h': 'Handle',
        'hndl': 'Handle',
        
        # 上下文
        'ctx': 'Context',
        'context': 'Context',
        
        # 状态
        'status': 'Status',
        'state': 'State',
        
        # 错误
        'err': 'Error',
        'error': 'Error',
        
        # 循环变量
        'loop_counter': 'LoopCounter',
        'loop_index': 'LoopIndex',
        'loop_var': 'LoopVariable',
        
        # 数组索引
        'array_index': 'ArrayIndex',
        'array_idx': 'ArrayIndex',
        'idx': 'Index',
        
        # 偏移量
        'offset': 'Offset',
        'off': 'Offset',
        
        # 内存地址
        'addr': 'Address',
        'address': 'Address',
        
        # 数值
        'val': 'Value',
        'value': 'Value',
        'num': 'Number',
        
        # 其他常见变量
        'param': 'Parameter',
        'param1': 'FirstParameter',
        'param2': 'SecondParameter',
        'arg': 'Argument',
        'arg1': 'FirstArgument',
        'arg2': 'SecondArgument',
    }
    
    # 按长度排序，优先处理长变量名
    sorted_mappings = sorted(variable_mappings.items(), key=lambda x: len(x[0]), reverse=True)
    
    # 应用变量名替换
    for old_name, new_name in sorted_mappings:
        # 使用正则表达式确保只替换完整的变量名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def beautify_function_names(content):
    """美化函数名"""
    
    # 函数名映射字典
    function_mappings = {
        'func_': 'Function_',
        'fn_': 'Function_',
        'function_': 'Function_',
        'proc_': 'Process_',
        'process_': 'Process_',
        'calc_': 'Calculate_',
        'compute_': 'Compute_',
        'get_': 'Get_',
        'set_': 'Set_',
        'is_': 'Is_',
        'has_': 'Has_',
        'can_': 'Can_',
        'should_': 'Should_',
        'do_': 'Do_',
        'init_': 'Initialize_',
        'create_': 'Create_',
        'destroy_': 'Destroy_',
        'delete_': 'Delete_',
        'update_': 'Update_',
        'find_': 'Find_',
        'search_': 'Search_',
        'sort_': 'Sort_',
        'filter_': 'Filter_',
        'map_': 'Map_',
        'reduce_': 'Reduce_',
        'apply_': 'Apply_',
        'transform_': 'Transform_',
        'convert_': 'Convert_',
        'validate_': 'Validate_',
        'check_': 'Check_',
        'verify_': 'Verify_',
        'compare_': 'Compare_',
        'copy_': 'Copy_',
        'move_': 'Move_',
        'swap_': 'Swap_',
        'clear_': 'Clear_',
        'reset_': 'Reset_',
        'enable_': 'Enable_',
        'disable_': 'Disable_',
        'start_': 'Start_',
        'stop_': 'Stop_',
        'pause_': 'Pause_',
        'resume_': 'Resume_',
        'open_': 'Open_',
        'close_': 'Close_',
        'read_': 'Read_',
        'write_': 'Write_',
        'send_': 'Send_',
        'receive_': 'Receive_',
        'allocate_': 'Allocate_',
        'free_': 'Free_',
        'malloc_': 'Malloc_',
        'realloc_': 'Realloc_',
        'calloc_': 'Calloc_',
    }
    
    # 按长度排序，优先处理长函数名
    sorted_mappings = sorted(function_mappings.items(), key=lambda x: len(x[0]), reverse=True)
    
    # 应用函数名替换
    for old_name, new_name in sorted_mappings:
        # 使用正则表达式确保只替换完整的函数名
        pattern = r'\b' + re.escape(old_name) + r'\b'
        content = re.sub(pattern, new_name, content)
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c'
    
    print("开始美化06_utilities.c文件...")
    
    # 读取文件内容
    content = read_file(file_path)
    
    # 美化变量名
    print("美化变量名...")
    content = beautify_variables(content)
    
    # 美化函数名
    print("美化函数名...")
    content = beautify_function_names(content)
    
    # 写入文件
    write_file(file_path, content)
    
    print("美化完成！")

if __name__ == "__main__":
    main()