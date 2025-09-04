#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re
import sys

def read_file(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(filepath, content):
    with open(filepath, 'w', encoding='utf-8') as f:
        f.write(content)

def replace_unk_variables(content):
    """替换UNK_变量为更有意义的名称"""
    
    # UNK_180a05xxx 系列变量 - 这些看起来是渲染配置相关的
    replacements = {
        'UNK_180a05cc0': 'SystemRenderConfigPrimary',
        'UNK_180a05d18': 'SystemRenderConfigSecondary',
        'UNK_180a05d08': 'SystemRenderConfigTertiary',
        'UNK_180a05d50': 'SystemRenderConfigQuaternary',
        'UNK_180a05d38': 'SystemRenderConfigQuinary',
        'UNK_180a05d78': 'SystemRenderConfigSenary',
        'UNK_180a05d60': 'SystemRenderConfigSeptenary',
        'UNK_180a05da0': 'SystemRenderConfigOctonary',
        'UNK_180a05d90': 'SystemRenderConfigNonary',
        'UNK_180a05dd8': 'SystemRenderConfigDenary',
        'UNK_180a05db8': 'SystemRenderConfigUndenary',
        'UNK_180a05e08': 'SystemRenderConfigDuodenary',
        'UNK_180a05df0': 'SystemRenderConfigTridenary',
        'UNK_180a05e48': 'SystemRenderConfigQuattuordenary',
        'UNK_180a05e28': 'SystemRenderConfigQuindenary',
        'UNK_180a05e80': 'SystemRenderConfigSexdenary',
        'UNK_180a05e68': 'SystemRenderConfigSeptendecenary',
        'UNK_180a05eb0': 'SystemRenderConfigOctodecenary',
        'UNK_180a05e98': 'SystemRenderConfigNovemdenary',
        'UNK_180a05ee8': 'SystemRenderConfigVigesimal',
        'UNK_180a05ec8': 'SystemRenderConfigUnvigesimal',
        'UNK_180a05f10': 'SystemRenderConfigDuovigesimal',
        'UNK_180a05f00': 'SystemRenderConfigTrevigesimal',
        'UNK_180a05f50': 'SystemRenderConfigQuattuorvigesimal',
        'UNK_180a05f38': 'SystemRenderConfigQuinvigesimal',
        'UNK_180a05f80': 'SystemRenderConfigSexvigesimal',
        'UNK_180a05f68': 'SystemRenderConfigSeptenvigesimal',
        'UNK_180a05fb0': 'SystemRenderConfigOctovigesimal',
        'UNK_180a05f98': 'SystemRenderConfigNovemvigesimal',
        'UNK_180a05fe0': 'SystemRenderConfigTrigesimal',
        'UNK_180a05fc8': 'SystemRenderConfigUntrigesimal',
        'UNK_180a06010': 'SystemRenderConfigDuotrigesimal',
        'UNK_180a05ff8': 'SystemRenderConfigTritrigesimal',
        'UNK_180a06040': 'SystemRenderConfigQuattuortrigesimal',
        'UNK_180a06028': 'SystemRenderConfigQuintrigesimal',
        'UNK_180a06078': 'SystemRenderConfigSextrigesimal',
        'UNK_180a06058': 'SystemRenderConfigSeptentrigesimal',
        'UNK_180a060c0': 'SystemRenderConfigOctotrigesimal',
        'UNK_180a06098': 'SystemRenderConfigNovemtrigesimal',
        'UNK_180a06110': 'SystemRenderConfigQuadragesimal',
        'UNK_180a060e0': 'SystemRenderConfigUnquadragesimal',
        'UNK_180a06158': 'SystemRenderConfigDuoquadragesimal',
        'UNK_180a06140': 'SystemRenderConfigTrequadragesimal',
        'UNK_180a06198': 'SystemRenderConfigQuattuorquadragesimal',
        'UNK_180a06180': 'SystemRenderConfigQuinquadragesimal',
        'UNK_180a061d0': 'SystemRenderConfigSexquadragesimal',
        'UNK_180a061b8': 'SystemRenderConfigSeptenquadragesimal',
        'UNK_180a06208': 'SystemRenderConfigOctoquadragesimal',
        'UNK_180a061e8': 'SystemRenderConfigNovemquadragesimal',
        'UNK_180a06230': 'SystemRenderConfigQuinquagesimal',
        'UNK_180a06220': 'SystemRenderConfigUnquinquagesimal',
        'UNK_180a06260': 'SystemRenderConfigDuoquinquagesimal',
        
        # UNK_18010cxxx 系列变量 - 这些看起来是函数指针
        'UNK_18010c530': 'SystemFunctionPointerPrimary',
        'UNK_18010c510': 'SystemFunctionPointerSecondary',
        'UNK_18010c4f0': 'SystemFunctionPointerTertiary',
        'UNK_18010c4d0': 'SystemFunctionPointerQuaternary',
        'UNK_18010c4b0': 'SystemFunctionPointerQuinary',
        'UNK_18010c490': 'SystemFunctionPointerSenary',
        'UNK_18010c470': 'SystemFunctionPointerSeptenary',
        'UNK_18010c450': 'SystemFunctionPointerOctonary',
        'UNK_18010c430': 'SystemFunctionPointerNonary',
        'UNK_18010c410': 'SystemFunctionPointerDenary',
        'UNK_18010c3f0': 'SystemFunctionPointerUndenary',
        'UNK_18010c3d0': 'SystemFunctionPointerDuodenary',
        'UNK_18010c3b0': 'SystemFunctionPointerTridenary',
        'UNK_18010c390': 'SystemFunctionPointerQuattuordenary',
        'UNK_18010c370': 'SystemFunctionPointerQuindenary',
        'UNK_18010c350': 'SystemFunctionPointerSexdenary',
        'UNK_18010c330': 'SystemFunctionPointerSeptendecenary',
        'UNK_18010c310': 'SystemFunctionPointerOctodecenary',
        'UNK_18010c780': 'SystemFunctionPointerNovemdenary',
        'UNK_18010c760': 'SystemFunctionPointerVigesimal',
        'UNK_18010c750': 'SystemFunctionPointerUnvigesimal',
        'UNK_18010c730': 'SystemFunctionPointerDuovigesimal',
        'UNK_18010c300': 'SystemFunctionPointerTrevigesimal',
        'UNK_18010c710': 'SystemFunctionPointerQuattuorvigesimal',
        'UNK_18010c700': 'SystemFunctionPointerQuinvigesimal',
        'UNK_18010c6e0': 'SystemFunctionPointerSexvigesimal',
        'UNK_18010c6d0': 'SystemFunctionPointerSeptenvigesimal',
        'UNK_18010c6b0': 'SystemFunctionPointerOctovigesimal',
        'UNK_18010c690': 'SystemFunctionPointerNovemvigesimal',
        'UNK_18010c630': 'SystemFunctionPointerTrigesimal',
        
        # UNK_180a029xx 系列变量 - 这些看起来是上下文模板
        'UNK_180a02940': 'SystemContextTemplatePrimary',
        'UNK_180a02928': 'SystemContextTemplateSecondary',
        'UNK_180a028e0': 'SystemContextTemplateTertiary',
        
        # UNK_180a062xx 系列变量 - 这些看起来是系统字符串
        'UNK_180a06288': 'SystemStringPrimary',
        'UNK_180a06280': 'SystemStringSecondary',
        'UNK_180a062b0': 'SystemStringTertiary',
        'UNK_180a06298': 'SystemStringQuaternary',
        'UNK_180a062d4': 'SystemStringQuinary',
        'UNK_180a062c0': 'SystemStringSenary',
        
        # UNK_180a063xx 系列变量 - 这些看起来是系统配置
        'UNK_180a06310': 'SystemConfigPrimary',
        'UNK_180a06320': 'SystemConfigSecondary',
        'UNK_180a06330': 'SystemConfigTertiary',
        'UNK_180a0633c': 'SystemConfigQuaternary',
        'UNK_180a0632c': 'SystemConfigQuinary',
        'UNK_180a06348': 'SystemConfigSenary',
        'UNK_180a06338': 'SystemConfigSeptenary',
        'UNK_180a06340': 'SystemConfigOctonary',
        'UNK_180a0634c': 'SystemConfigNonary',
        'UNK_180a06350': 'SystemConfigDenary',
        'UNK_180a06388': 'SystemConfigUndenary',
        'UNK_180a06378': 'SystemConfigDuodenary',
        'UNK_180a063b0': 'SystemConfigTridenary',
        'UNK_180a063c0': 'SystemConfigQuattuordenary',
        'UNK_180a063d0': 'SystemConfigQuindenary',
        'UNK_180a063cc': 'SystemConfigSexdenary',
        'UNK_180a063f8': 'SystemConfigSeptendecenary',
        'UNK_180a0640c': 'SystemConfigOctodecenary',
        'UNK_180a06410': 'SystemConfigNovemdenary',
        'UNK_180a0644c': 'SystemConfigVigesimal',
        'UNK_180a06468': 'SystemConfigUnvigesimal',
        'UNK_180a06474': 'SystemConfigDuovigesimal',
        'UNK_180a06475': 'SystemConfigTrevigesimal',
        'UNK_180a06480': 'SystemConfigQuattuorvigesimal',
        'UNK_180a06490': 'SystemConfigQuinvigesimal',
        'UNK_180a064a8': 'SystemConfigSexvigesimal',
        'UNK_180a06598': 'SystemConfigSeptenvigesimal',
        'UNK_180a06599': 'SystemConfigOctovigesimal',
        
        # UNK_180a067xx 系列变量 - 这些看起来是数据模板
        'UNK_180a06770': 'SystemDataTemplatePrimary',
        'UNK_180a06768': 'SystemDataTemplateSecondary',
        'UNK_180a0677c': 'SystemDataTemplateTertiary',
        
        # UNK_180a01ff0 - 特殊变量
        'UNK_180a01ff0': 'SystemSpecialConfigPrimary',
        
        # UNK_18011ae70 - 比较函数
        'UNK_18011ae70': 'SystemCompareFunctionPrimary',
        
        # UNK_18011ae80 - 比较函数
        'UNK_18011ae80': 'SystemCompareFunctionSecondary',
        
        # UNK_180126ab0 - 排序函数
        'UNK_180126ab0': 'SystemSortFunctionPrimary',
        
        # UNK_18012d10b - 特殊函数
        'UNK_18012d10b': 'SystemSpecialFunctionPrimary',
        
        # UNK_18013bff0 - 特殊函数
        'UNK_18013bff0': 'SystemSpecialFunctionSecondary'
    }
    
    # 执行替换
    for old_name, new_name in replacements.items():
        content = content.replace(old_name, new_name)
    
    return content

def main():
    if len(sys.argv) != 2:
        print("Usage: python3 replace_unk_variables.py <file_path>")
        sys.exit(1)
    
    file_path = sys.argv[1]
    
    # 读取文件
    content = read_file(file_path)
    
    # 替换变量
    new_content = replace_unk_variables(content)
    
    # 写回文件
    write_file(file_path, new_content)
    
    print(f"Completed UNK variable replacement in {file_path}")

if __name__ == "__main__":
    main()