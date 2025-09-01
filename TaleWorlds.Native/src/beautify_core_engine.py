#!/usr/bin/env python3
import re
import sys

def create_replacement_patterns():
    """创建替换模式映射"""
    replacements = {
        # DAT变量替换
        r'_DAT_180c4ea58': 'CoreEngineStatusFlag',
        r'_DAT_180c4ea60': 'CoreEngineMemoryPointer',
        r'_DAT_180c82864': 'CoreEngineCounter',
        r'_DAT_180c91048': 'CoreEngineReferencePointer',
        r'_DAT_180c8a9b0': 'CoreEngineConfigBase',
        
        # FUN函数替换
        r'FUN_180033a50': 'CoreEngineInitializeBasic',
        r'FUN_180034550': 'CoreEngineSetupComponents',
        r'FUN_180034650': 'CoreEngineConfigureSystems',
        r'FUN_180034750': 'CoreEngineFinalizeSetup',
        r'FUN_180623800': 'CoreEngineCreateHandler',
        r'FUN_1808fc7d0': 'CoreEngineGetSystemStatus',
        r'FUN_1801224c0': 'CoreEngineProcessEvent',
        r'FUN_180121550': 'CoreEngineCalculateOffset',
        r'FUN_180297340': 'CoreEngineGetResourceData',
        r'FUN_180121e20': 'CoreEngineProcessCommand',
        
        # UNK变量替换
        r'UNK_180a00430': 'CoreEngineDefaultData',
        r'UNK_180942f90': 'CoreEngineSystemConfig',
        r'UNK_18098bc80': 'CoreEngineRenderConfig',
        r'UNK_180a2cab0': 'CoreEngineCacheData',
        r'UNK_180a33fb0': 'CoreEngineStringData',
        r'UNK_180a3c028': 'CoreEngineInputBuffer',
        r'UNK_180943130': 'CoreEngineStatusConfig',
        r'UNK_180a3def0': 'CoreEngineProcessBuffer',
        r'UNK_18098bcb0': 'CoreEngineThreadData',
        r'UNK_1809fe100': 'CoreEngineValidationData'
    }
    
    return replacements

def process_file(input_file, output_file):
    """处理文件替换"""
    try:
        with open(input_file, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
        
        replacements = create_replacement_patterns()
        
        # 应用所有替换
        for pattern, replacement in replacements.items():
            content = re.sub(pattern, replacement, content)
        
        with open(output_file, 'w', encoding='utf-8') as f:
            f.write(content)
            
        print(f"处理完成: {input_file} -> {output_file}")
        return True
        
    except Exception as e:
        print(f"处理文件时出错: {e}")
        return False

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("用法: python beautify_core_engine.py <input_file>")
        sys.exit(1)
    
    input_file = sys.argv[1]
    output_file = input_file  # 直接覆盖原文件
    
    if process_file(input_file, output_file):
        print("文件处理成功完成")
    else:
        print("文件处理失败")
        sys.exit(1)