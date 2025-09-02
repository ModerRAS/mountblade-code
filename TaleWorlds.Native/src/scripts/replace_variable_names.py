#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
批量替换变量名脚本
用于将数字后缀的变量名替换为语义化名称
"""

import re
import sys

def replace_module_data_pointers(content):
    """替换SystemModuleDataPointer系列变量"""
    replacements = {
        'SystemModuleDataPointer08': 'SystemModuleDataPointerParticleCore',
        'SystemModuleDataPointer09': 'SystemModuleDataPointerAudioEngine',
        'SystemModuleDataPointer10': 'SystemModuleDataPointerGraphicsEngine',
        'SystemModuleDataPointer11': 'SystemModuleDataPointerPhysicsEngine',
        'SystemModuleDataPointer12': 'SystemModuleDataPointerNetworkEngine',
        'SystemModuleDataPointer13': 'SystemModuleDataPointerInputEngine',
        'SystemModuleDataPointer14': 'SystemModuleDataPointerResourceEngine',
        'SystemModuleDataPointer15': 'SystemModuleDataPointerAnimationEngine',
        'SystemModuleDataPointer16': 'SystemModuleDataPointerParticleEngine',
        'SystemModuleDataPointer17': 'SystemModuleDataPointerSystemCore',
        'SystemModuleDataPointer18': 'SystemModuleDataPointerSystemEngine',
        'SystemModuleDataPointer19': 'SystemModuleDataPointerRenderCore',
        'SystemModuleDataPointer20': 'SystemModuleDataPointerRenderEngine'
    }
    
    for old_name, new_name in replacements.items():
        content = content.replace(old_name, new_name)
    
    return content

def replace_config_data_pointers(content):
    """替换SystemConfigDataPointer系列变量"""
    replacements = {
        'SystemConfigDataPointer01': 'SystemConfigDataPointerAudio',
        'SystemConfigDataPointer02': 'SystemConfigDataPointerGraphics',
        'SystemConfigDataPointer03': 'SystemConfigDataPointerPhysics',
        'SystemConfigDataPointer04': 'SystemConfigDataPointerNetwork',
        'SystemConfigDataPointer05': 'SystemConfigDataPointerInput',
        'SystemConfigDataPointer06': 'SystemConfigDataPointerResource',
        'SystemConfigDataPointer07': 'SystemConfigDataPointerAnimation',
        'SystemConfigDataPointer08': 'SystemConfigDataPointerParticle',
        'SystemConfigDataPointer09': 'SystemConfigDataPointerSystem',
        'SystemConfigDataPointer10': 'SystemConfigDataPointerRender',
        'SystemConfigDataPointer11': 'SystemConfigDataPointerMemory',
        'SystemConfigDataPointer12': 'SystemConfigDataPointerThread',
        'SystemConfigDataPointer13': 'SystemConfigDataPointerFile',
        'SystemConfigDataPointer14': 'SystemConfigDataPointerString',
        'SystemConfigDataPointer15': 'SystemConfigDataPointerMath',
        'SystemConfigDataPointer16': 'SystemConfigDataPointerTime',
        'SystemConfigDataPointer17': 'SystemConfigDataPointerRandom',
        'SystemConfigDataPointer18': 'SystemConfigDataPointerCompression',
        'SystemConfigDataPointer19': 'SystemConfigDataPointerEncryption',
        'SystemConfigDataPointer20': 'SystemConfigDataPointerDatabase',
        'SystemConfigDataPointer21': 'SystemConfigDataPointerNetworkProtocol',
        'SystemConfigDataPointer22': 'SystemConfigDataPointerAudioFormat',
        'SystemConfigDataPointer23': 'SystemConfigDataPointerGraphicsFormat',
        'SystemConfigDataPointer24': 'SystemConfigDataPointerPhysicsMaterial',
        'SystemConfigDataPointer25': 'SystemConfigDataPointerInputMapping',
        'SystemConfigDataPointer26': 'SystemConfigDataPointerResourceType',
        'SystemConfigDataPointer27': 'SystemConfigDataPointerAnimationState',
        'SystemConfigDataPointer28': 'SystemConfigDataPointerParticleType',
        'SystemConfigDataPointer29': 'SystemConfigDataPointerSystemProfile',
        'SystemConfigDataPointer30': 'SystemConfigDataPointerRenderPipeline',
        'SystemConfigDataPointer31': 'SystemConfigDataPointerMemoryPool',
        'SystemConfigDataPointer32': 'SystemConfigDataPointerThreadPriority',
        'SystemConfigDataPointer33': 'SystemConfigDataPointerFileSystem',
        'SystemConfigDataPointer34': 'SystemConfigDataStringEncoding',
        'SystemConfigDataPointer35': 'SystemConfigDataPointerMathLibrary'
    }
    
    for old_name, new_name in replacements.items():
        content = content.replace(old_name, new_name)
    
    return content

def main():
    """主函数"""
    if len(sys.argv) != 2:
        print("Usage: python3 replace_variable_names.py <input_file>")
        sys.exit(1)
    
    input_file = sys.argv[1]
    
    try:
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 执行替换
        content = replace_module_data_pointers(content)
        content = replace_config_data_pointers(content)
        
        with open(input_file, 'w', encoding='utf-8') as f:
            f.write(content)
        
        print(f"Successfully replaced variable names in {input_file}")
        
    except Exception as e:
        print(f"Error: {e}")
        sys.exit(1)

if __name__ == "__main__":
    main()