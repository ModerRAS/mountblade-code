#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
美化02_core_engine.c文件中的变量名和函数名
"""

import re

def beautify_core_engine():
    """美化核心引擎文件"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义替换映射
    replacements = {
        # 系统上下文变量
        'UNK_180a06058': 'SystemContextPrimary',
        'UNK_180a060c0': 'SystemContextSecondary',
        'UNK_180a06098': 'SystemContextTertiary',
        'UNK_180a06110': 'SystemContextQuaternary',
        'UNK_180a06140': 'SystemContextQuinary',
        'UNK_180a06158': 'SystemContextSenary',
        'UNK_180a06180': 'SystemContextSeptenary',
        'UNK_180a06198': 'SystemContextOctonary',
        'UNK_180a061b8': 'SystemContextNonary',
        'UNK_180a061d0': 'SystemContextDenary',
        'UNK_180a061e8': 'SystemContextUndenary',
        'UNK_180a06208': 'SystemContextDuodenary',
        'UNK_180a06220': 'SystemContextTredecenary',
        'UNK_180a06230': 'SystemContextQuattuordecenary',
        'UNK_180a06248': 'SystemContextQuindecenary',
        'UNK_180a06260': 'SystemContextSexdecenary',
        
        # 系统栈缓冲区变量
        'UNK_18010c6e0': 'SystemStackBufferPrimary',
        'UNK_18010c6d0': 'SystemStackBufferSecondary',
        'UNK_18010c6b0': 'SystemStackBufferTertiary',
        'UNK_18010c690': 'SystemStackBufferQuaternary',
        'UNK_18010c630': 'SystemStackBufferQuinary',
        
        # 系统字符串变量
        'UNK_180a06400': 'SystemStringTemplate',
        'UNK_180a06310': 'SystemStringBufferPrimary',
        'UNK_180a06320': 'SystemStringBufferSecondary',
        'UNK_180a06330': 'SystemStringBufferTertiary',
        'UNK_180a0633c': 'SystemStringBufferQuaternary',
        'UNK_180a0632c': 'SystemStringBufferQuinary',
        
        # 系统内存变量
        'UNK_180a06340': 'SystemMemoryTemplate',
        'UNK_180a0634c': 'SystemMemoryMaskPrimary',
        'UNK_180a06350': 'SystemMemoryMaskSecondary',
        'UNK_180a06378': 'SystemMemoryAddressMask',
        
        # 系统数据变量
        'UNK_180a06388': 'SystemDataTemplate',
        'UNK_180a06770': 'SystemDataBufferPrimary',
        'UNK_180a06768': 'SystemDataBufferSecondary',
        'UNK_180a0677c': 'SystemDataBufferTertiary',
        
        # 系统配置变量
        'UNK_180a063c0': 'SystemConfigurationTemplate',
        'UNK_180a063b0': 'SystemEventTemplate',
        'UNK_180a063cc': 'SystemEventBuffer',
        'UNK_180a063d0': 'SystemEventQueue',
        'UNK_180a063f8': 'SystemValidationTemplate',
        'UNK_180a0640c': 'SystemValidationBuffer',
        'UNK_180a0644c': 'SystemCheckTemplate',
        'UNK_180a06468': 'SystemCheckBuffer',
        'UNK_180a06480': 'SystemCheckStatus',
        'UNK_180a06474': 'SystemCheckResult',
        'UNK_180a06475': 'SystemCheckFlag',
        
        # 系统渲染变量
        'UNK_180a064a8': 'SystemRenderTemplate',
        'UNK_180a06490': 'SystemRenderBuffer',
        'UNK_180a064a0': 'SystemRenderQueue',
        
        # 系统参数变量
        'UNK_180a064c0': 'SystemFunctionTemplatePrimary',
        'UNK_180a064b0': 'SystemFunctionTemplateSecondary',
        'UNK_180a064d0': 'SystemFunctionTemplateTertiary',
        'UNK_180a064e0': 'SystemParameterTemplate',
        'UNK_180a064f0': 'SystemParameterBuffer',
        'UNK_180a06500': 'SystemParameterQueue',
        'UNK_180a06560': 'SystemPriorityTemplate',
        'UNK_180a06588': 'SystemPriorityBuffer',
    }
    
    # 执行替换
    for old_name, new_name in replacements.items():
        content = content.replace(old_name, new_name)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("变量名美化完成")

if __name__ == "__main__":
    beautify_core_engine()