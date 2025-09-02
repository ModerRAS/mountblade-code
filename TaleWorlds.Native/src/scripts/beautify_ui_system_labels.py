#!/usr/bin/env python3
"""
UI系统代码美化脚本
专门用于处理04_ui_system.c文件中的UNK_和LAB_标签
"""

import re
import sys

def beautify_ui_system():
    """美化UI系统代码中的UNK_和LAB_标签"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # UNK_标签替换映射
    unk_replacements = {
        'UNK_1809581e0': 'UIResourceTable',
        'UNK_1809583d0': 'UIConfigData',
        'UNK_180958660': 'UIWindowList',
        'UNK_1809586e0': 'UIWidgetArray',
        'UNK_180958758': 'UIEventQueue',
        'UNK_180958970': 'UIRenderContext',
        'UNK_1809589a0': 'UIInputState',
        'UNK_180958a10': 'UIFocusManager',
        'UNK_180958a50': 'UICursorPosition',
        'UNK_180958b20': 'UIAnimationData',
        'UNK_180958ac0': 'UITextureCache',
        'UNK_180958b00': 'UIFontCache',
        'UNK_180958b10': 'UIShaderProgram',
        'UNK_180958ba0': 'UIGeometryBuffer',
        'UNK_180958c10': 'UILayoutEngine',
        'UNK_1807693c0': 'UIStyleManager',
        'UNK_180958bf0': 'UIThemeDatabase',
        'UNK_180958c88': 'UIControlRegistry',
        'UNK_180958cb0': 'UIEventDispatcher',
        'UNK_180958d20': 'UIMemoryPool',
        'UNK_000003b8': 'UIRenderFlags',
        'UNK_000003c0': 'UIStateFlags',
        'UNK_180958d90': 'UIThreadContext',
        'UNK_180958e20': 'UIResourceLoader',
        'UNK_180958fb0': 'UIRenderDevice',
        'UNK_180770640': 'UISwapChain',
        'UNK_180958ec0': 'UIDepthBuffer',
        'UNK_180958f10': 'UIStencilBuffer',
        'UNK_180958f68': 'UIRenderTarget',
        'UNK_1809590c0': 'UICommandBuffer',
        'UNK_180747d60': 'UIVertexShader',
        'UNK_1807868c0': 'UIPixelShader',
        'UNK_180786c90': 'UIGeometryShader',
        'UNK_180788fc0': 'UIComputeShader',
        'UNK_180959140': 'UIConstantBuffer',
        'UNK_1809591b0': 'UIIndexBuffer',
        'UNK_180959410': 'UIVertexBuffer',
        'UNK_180959630': 'UIUniformBuffer',
        'UNK_1809596a4': 'UIStructuredBuffer',
        'UNK_180959b80': 'UIRawBuffer',
        'UNK_180959d10': 'UIAppendBuffer',
        'UNK_180959d80': 'UIConsumeBuffer',
        'UNK_1dd01c85c': 'UIInitializationFlag'
    }
    
    # LAB_标签替换映射
    lab_replacements = {
        'LAB_180768039': 'UIResourceLoadEntryPoint',
        'LAB_180650673': 'UIResourceSearchLoop',
        'LAB_180650c04': 'UIResourceValidation',
        'LAB_180650dc8': 'UIResourceProcessing',
        'LAB_18065166c': 'UIResourceCleanup',
        'LAB_1806516e0': 'UIResourceFinalization',
        'LAB_180651b0f': 'UIResourceRegistration',
        'LAB_180652228': 'UIResourceErrorHandling',
        'LAB_18065258b': 'UIResourceIndexing',
        'LAB_18065415f': 'UIResourceWaitLoop',
        'LAB_1806541f1': 'UIResourceComparison',
        'LAB_1806555a8': 'UIStringComparison',
        'LAB_1806553fb': 'UIStringMatchFound',
        'LAB_180655402': 'UIStringMatchHandler',
        'LAB_18065555e': 'UIStringExactMatch',
        'LAB_180655598': 'UIStringPartialMatch',
        'LAB_1806554f3': 'UIStringPrefixMatch',
        'LAB_1806554a0': 'UIStringCharacterCheck',
        'LAB_1806555a6': 'UIStringMismatch',
        'LAB_180655bdf': 'UIStringValidation',
        'LAB_180655bea': 'UIStringProcessing',
        'LAB_180655761': 'UIStringFormatCheck',
        'LAB_1806557d3': 'UIStringEncodingCheck',
        'LAB_180655911': 'UIStringFirstMatch',
        'LAB_1806559dc': 'UIStringSecondMatch',
        'LAB_180655a80': 'UIStringThirdMatch',
        'LAB_180655e30': 'UIStringFourthMatch',
        'LAB_180655afa': 'UIStringFifthMatch',
        'LAB_180655683': 'UIStringDefaultCase',
        'LAB_180655685': 'UIStringFinalCheck',
        'LAB_180656abd': 'UIResourceIndexLoop',
        'LAB_180656d5b': 'UIResourceValidationLoop',
        'LAB_180656dbb': 'UIResourceProcessingLoop',
        'LAB_180656df9': 'UIResourceCountCheck',
        'LAB_180656e11': 'UIResourceRangeCheck',
        'LAB_180656d07': 'UIResourceNullCheck',
        'LAB_180656e1e': 'UIResourceBoundsCheck',
        'LAB_1806572f9': 'UILayoutProcessing',
        'LAB_1806575b7': 'UILayoutFinalization',
        'LAB_1806575f7': 'UILayoutRangeCheck',
        'LAB_1806577f1': 'UILayoutStateCheck',
        'LAB_180657812': 'UILayoutConditionCheck',
        'LAB_180657835': 'UILayoutTransition',
        'LAB_180657941': 'UILayoutAnimationCheck',
        'LAB_1806578a7': 'UILayoutAnimationStart',
        'LAB_1806578f0': 'UILayoutAnimationEnd',
        'LAB_1806579e7': 'UILayoutComplete',
        'LAB_1806579f0': 'UILayoutFinalState',
        'LAB_1806588f2': 'UIRenderingLoop',
        'LAB_180659172': 'UIRenderingValidation',
        'LAB_180659a1a': 'UIRenderingCondition',
        'LAB_180659b1a': 'UIRenderingTransition',
        'LAB_18065a17c': 'UIRenderingCalculation',
        'LAB_18065a2e9': 'UIRenderingFinalCheck',
        'LAB_18065a5be': 'UIControlValidation',
        'LAB_18065a5d3': 'UIControlProcessing',
        'LAB_18065a686': 'UIControlAnimation',
        'LAB_18065a69c': 'UIControlStateChange',
        'LAB_18065a74f': 'UIControlFocusChange',
        'LAB_18065a765': 'UIControlEventHandle',
        'LAB_18065a5b3': 'UIControlInputCheck',
        'LAB_18065a67b': 'UIControlMouseMove',
        'LAB_18065a744': 'UIControlMouseClick',
        'LAB_18065bd31': 'UIAnimationThreshold',
        'LAB_18065cfea': 'UIEventProcessing',
        'LAB_18065d05a': 'UIEventDispatch',
        'LAB_18065d2fb': 'UIEventHandler',
        'LAB_18065d446': 'UIEventLoop',
        'LAB_18065d515': 'UIEventValidation',
        'LAB_18065d55b': 'UIEventCondition',
        'LAB_18065da24': 'UIEventProcessingLoop',
        'LAB_18065dae7': 'UIEventCleanup',
        'LAB_18065fce5': 'UIEventFinalization',
        'LAB_18065fef9': 'UIEventComplete',
        'LAB_180663714': 'UIWindowManagement',
        'LAB_18066375a': 'UIWindowProcessing',
        'LAB_180663ade': 'UIWindowUpdate',
        'LAB_180663a5e': 'UIWindowRender',
        'LAB_180664ddf': 'UIWindowFinalize',
        'LAB_1806654b3': 'UIWindowComplete',
        'LAB_18066597d': 'UIWindowStateChange',
        'LAB_1806659c4': 'UIWindowFinalState',
        'LAB_180665f82': 'UIWindowTransition',
        'LAB_180665f9e': 'UIWindowAnimation',
        'LAB_180665fd7': 'UIWindowCompleteState',
        'LAB_180667308': 'UIWindowLoop',
        'LAB_18066a567': 'UIMemoryManagement',
        'LAB_18066bb69': 'UIMemoryAllocation',
        'LAB_18066bd4e': 'UIMemoryCleanup',
        'LAB_18066be05': 'UIMemoryValidation',
        'LAB_18066bfd1': 'UIMemoryFinalization',
        'LAB_18066c500': 'UIMemoryErrorHandling',
        'LAB_18066c4ed': 'UIMemoryComplete',
        'LAB_18066cdc1': 'UIMemoryFinalCheck',
        'LAB_18066e704': 'UIInitializationError',
        'LAB_18066f069': 'UIInitializationCleanup',
        'LAB_18066f254': 'UIInitializationFinal',
        'LAB_18066f3c7': 'UIInitializationComplete',
        'LAB_18066fdc2': 'UIInitializationExit'
    }
    
    # 应用UNK_替换
    for old_name, new_name in unk_replacements.items():
        content = content.replace(old_name, new_name)
    
    # 应用LAB_替换
    for old_name, new_name in lab_replacements.items():
        content = content.replace(old_name, new_name)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print(f"完成UI系统代码美化，替换了{len(unk_replacements)}个UNK_标签和{len(lab_replacements)}个LAB_标签")

if __name__ == '__main__':
    beautify_ui_system()