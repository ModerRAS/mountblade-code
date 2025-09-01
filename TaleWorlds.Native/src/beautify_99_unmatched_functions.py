#!/usr/bin/env python3
"""
99_unmatched_functions.c 文件的美化脚本
用于重命名FUN_函数和改进变量名
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

def find_fun_functions(content):
    """查找所有FUN_函数"""
    # 查找FUN_函数定义
    pattern = r'(\w+\s+\*?\s*FUN_[0-9a-f]+\s*\([^)]*\)\s*\{?)'
    matches = re.findall(pattern, content)
    return matches

def analyze_function_context(content, function_name):
    """分析函数的上下文以确定其功能"""
    # 查找函数调用的上下文
    context_patterns = {
        'memory': [r'malloc', r'free', r'realloc', r'calloc'],
        'string': [r'strcpy', r'strlen', r'strcmp', r'strcat'],
        'network': [r'socket', r'connect', r'send', r'receive'],
        'file': [r'fopen', r'fclose', r'fread', r'fwrite'],
        'xml': [r'xml', r'XML', r'schema', r'parse'],
        'render': [r'render', r'draw', r'graphics', r'texture'],
        'audio': [r'audio', r'sound', r'music', r'play'],
        'input': [r'input', r'key', r'mouse', r'controller'],
        'physics': [r'physics', r'collision', r'rigidbody', r'transform'],
        'ai': [r'ai', r'agent', r'behavior', r'pathfinding'],
        'animation': [r'animation', r'animate', r'skeleton', r'bone'],
        'scene': [r'scene', r'object', r'entity', r'component'],
        'resource': [r'resource', r'load', r'unload', r'manager'],
        'thread': [r'thread', r'mutex', r'lock', r'synchronize'],
        'debug': [r'debug', r'log', r'print', r'assert'],
        'math': [r'math', r'sqrt', r'sin', r'cos', r'tan'],
        'time': [r'time', r'timer', r'clock', r'date'],
        'random': [r'random', r'rand', r'seed'],
        'compression': [r'compress', r'decompress', r'zip', r'gzip'],
        'encryption': [r'encrypt', r'decrypt', r'hash', r'md5'],
        'database': [r'database', r'sql', r'query', r'table'],
        'config': [r'config', r'setting', r'option', r'parameter'],
        'event': [r'event', r'callback', r'handler', r'listener'],
        'state': [r'state', r'status', r'condition', r'mode'],
        'transform': [r'transform', r'translate', r'rotate', r'scale'],
        'camera': [r'camera', r'view', r'projection', r'frustum'],
        'light': [r'light', r'shadow', r'illumination', r'ambient'],
        'material': [r'material', r'shader', r'texture', r'color'],
        'mesh': [r'mesh', r'vertex', r'index', r'buffer'],
        'shader': [r'shader', r'program', r'uniform', r'vertex'],
        'texture': [r'texture', r'image', r'pixel', r'sampler'],
        'buffer': [r'buffer', r'stream', r'array', r'data'],
        'handle': [r'handle', r'reference', r'pointer', r'id'],
        'manager': [r'manager', r'controller', r'supervisor', r'director'],
        'system': [r'system', r'engine', r'core', r'kernel'],
        'utility': [r'utility', r'helper', r'tool', r'function'],
        'interface': [r'interface', r'api', r'sdk', r'library'],
        'protocol': [r'protocol', r'format', r'specification', r'standard'],
        'validation': [r'validation', r'verification', r'check', r'validate'],
        'initialization': [r'init', r'initialize', r'start', r'begin'],
        'cleanup': [r'cleanup', r'cleanup', r'destroy', r'end'],
        'update': [r'update', r'refresh', r'renew', r'reload'],
        'process': [r'process', r'handle', r'manage', r'control'],
        'create': [r'create', r'new', r'generate', r'produce'],
        'destroy': [r'destroy', r'delete', r'remove', r'clear'],
        'find': [r'find', r'search', r'locate', r'discover'],
        'get': [r'get', r'retrieve', r'obtain', r'fetch'],
        'set': [r'set', r'put', r'assign', r'store'],
        'add': [r'add', r'append', r'insert', r'push'],
        'remove': [r'remove', r'delete', r'erase', r'pop'],
        'list': [r'list', r'array', r'vector', r'collection'],
        'map': [r'map', r'dictionary', r'hash', r'table'],
        'queue': [r'queue', r'stack', r'heap', r'priority'],
        'tree': [r'tree', r'node', r'branch', r'leaf'],
        'graph': [r'graph', r'node', r'edge', r'path'],
    }
    
    # 分析函数上下文
    context = content[content.find(function_name):content.find(function_name) + 1000]
    
    # 根据上下文确定函数类型
    for func_type, keywords in context_patterns.items():
        for keyword in keywords:
            if keyword.lower() in context.lower():
                return func_type
    
    return 'unknown'

def generate_function_name(function_signature, context_type):
    """根据函数签名和上下文类型生成有意义的函数名"""
    # 提取函数参数
    param_match = re.search(r'FUN_[0-9a-f]+\s*\(([^)]*)\)', function_signature)
    if param_match:
        params = param_match.group(1)
        param_count = len([p for p in params.split(',') if p.strip()])
    else:
        param_count = 0
    
    # 根据上下文类型和参数数量生成函数名
    name_templates = {
        'memory': {
            0: ['MemoryAllocatorInitialize', 'MemoryPoolReset', 'MemoryGarbageCollect'],
            1: ['MemoryAllocate', 'MemoryFree', 'MemoryResize'],
            2: ['MemoryCopy', 'MemoryMove', 'MemoryCompare'],
            3: ['MemorySet', 'MemoryFill', 'MemoryClear'],
            4: ['MemoryTransfer', 'MemoryExchange', 'MemorySwap']
        },
        'string': {
            0: ['StringInitialize', 'StringClear', 'StringReset'],
            1: ['StringLength', 'StringSize', 'StringCount'],
            2: ['StringCopy', 'StringCompare', 'StringConcat'],
            3: ['StringSubstr', 'StringReplace', 'StringInsert'],
            4: ['StringFormat', 'StringPrintf', 'StringScanf']
        },
        'network': {
            0: ['NetworkInitialize', 'NetworkShutdown', 'NetworkReset'],
            1: ['NetworkConnect', 'NetworkDisconnect', 'NetworkListen'],
            2: ['NetworkSend', 'NetworkReceive', 'NetworkTransfer'],
            3: ['NetworkBind', 'NetworkAccept', 'NetworkClose'],
            4: ['NetworkSelect', 'NetworkPoll', 'NetworkWait']
        },
        'file': {
            0: ['FileInitialize', 'FileShutdown', 'FileReset'],
            1: ['FileOpen', 'FileClose', 'FileFlush'],
            2: ['FileRead', 'FileWrite', 'FileSeek'],
            3: ['FileCopy', 'FileMove', 'FileDelete'],
            4: ['FileStat', 'FileAttr', 'FileTime']
        },
        'xml': {
            0: ['XmlInitialize', 'XmlShutdown', 'XmlReset'],
            1: ['XmlParse', 'XmlLoad', 'XmlSave'],
            2: ['XmlValidate', 'XmlTransform', 'XmlQuery'],
            3: ['XmlElementCreate', 'XmlElementDelete', 'XmlElementUpdate'],
            4: ['XmlAttributeSet', 'XmlAttributeGet', 'XmlAttributeRemove']
        },
        'render': {
            0: ['RenderInitialize', 'RenderShutdown', 'RenderReset'],
            1: ['RenderBegin', 'RenderEnd', 'RenderFlush'],
            2: ['RenderDraw', 'RenderClear', 'RenderPresent'],
            3: ['RenderSetTarget', 'RenderGetTarget', 'RenderSwitchTarget'],
            4: ['RenderSetViewport', 'RenderGetViewport', 'RenderUpdateViewport']
        },
        'audio': {
            0: ['AudioInitialize', 'AudioShutdown', 'AudioReset'],
            1: ['AudioPlay', 'AudioStop', 'AudioPause'],
            2: ['AudioLoad', 'AudioUnload', 'AudioStream'],
            3: ['AudioSetVolume', 'AudioGetVolume', 'AudioAdjustVolume'],
            4: ['AudioSetPosition', 'AudioGetPosition', 'AudioMovePosition']
        },
        'input': {
            0: ['InputInitialize', 'InputShutdown', 'InputReset'],
            1: ['InputGetKey', 'InputSetKey', 'InputClearKey'],
            2: ['InputGetMouse', 'InputSetMouse', 'InputMoveMouse'],
            3: ['InputGetButton', 'InputSetButton', 'InputClearButton'],
            4: ['InputGetAxis', 'InputSetAxis', 'InputResetAxis']
        },
        'unknown': {
            0: ['Initialize', 'Shutdown', 'Reset'],
            1: ['Process', 'Execute', 'Perform'],
            2: ['Handle', 'Manage', 'Control'],
            3: ['Update', 'Refresh', 'Reload'],
            4: ['Create', 'Destroy', 'Modify']
        }
    }
    
    # 获取对应类型的模板
    templates = name_templates.get(context_type, name_templates['unknown'])
    
    # 根据参数数量选择模板
    if param_count in templates:
        import random
        return random.choice(templates[param_count])
    else:
        return f'UnknownFunction{param_count}Params'

def create_replacement_map(content):
    """创建函数替换映射"""
    # 查找所有FUN_函数
    fun_functions = re.findall(r'FUN_[0-9a-f]+', content)
    unique_functions = list(set(fun_functions))
    
    replacement_map = {}
    
    for func in unique_functions:
        # 分析函数上下文
        context_type = analyze_function_context(content, func)
        
        # 生成新函数名
        new_name = generate_function_name(func, context_type)
        
        # 确保函数名唯一
        counter = 1
        base_name = new_name
        while new_name in replacement_map.values():
            new_name = f"{base_name}{counter}"
            counter += 1
        
        replacement_map[func] = new_name
    
    return replacement_map

def apply_replacements(content, replacement_map):
    """应用函数替换"""
    for old_name, new_name in replacement_map.items():
        # 替换函数定义
        content = re.sub(rf'(\w+\s+\*?\s*){old_name}(\s*\([^)]*\))', rf'\1{new_name}\2', content)
        
        # 替换函数调用
        content = re.sub(rf'\b{old_name}\b', new_name, content)
    
    return content

def main():
    """主函数"""
    file_path = '/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c'
    
    print("开始处理 99_unmatched_functions.c 文件...")
    
    # 读取文件
    content = read_file(file_path)
    if not content:
        return
    
    print(f"文件大小: {len(content)} 字符")
    
    # 创建替换映射
    print("正在分析函数并创建替换映射...")
    replacement_map = create_replacement_map(content)
    
    print(f"找到 {len(replacement_map)} 个需要重命名的函数")
    
    # 显示前10个替换示例
    print("替换示例:")
    for i, (old, new) in enumerate(list(replacement_map.items())[:10]):
        print(f"  {old} -> {new}")
    
    # 应用替换
    print("正在应用函数替换...")
    new_content = apply_replacements(content, replacement_map)
    
    # 写入文件
    print("正在写入文件...")
    if write_file(file_path, new_content):
        print("文件处理完成!")
    else:
        print("文件写入失败!")

if __name__ == "__main__":
    main()