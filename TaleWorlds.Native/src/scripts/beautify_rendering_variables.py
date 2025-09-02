#!/usr/bin/env python3
"""
渲染文件变量名美化脚本
用于将03_rendering.c中的逆向工程变量名替换为有意义的名称
"""

import re
import sys

def beautify_rendering_variables():
    """美化渲染文件中的变量名"""
    
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 变量名映射表
    variable_mappings = {
        # 基础变量类型
        'fVar[0-9]+': 'floatValue',
        'scaleFactor[0-9]+': 'scaleFactor',
        'dword_[0-9a-fA-F]+': 'dwordValue',
        'byte_[0-9a-fA-F]+': 'byteValue',
        'qword_[0-9a-fA-F]+': 'qwordValue',
        'word_[0-9a-fA-F]+': 'wordValue',
        'in_register_[0-9a-fA-F]+': 'registerValue',
        'auStack_[0-9a-fA-F]+': 'stackVariable',
        'param_[0-9]+': 'parameter',
        'aRender[A-Za-z]+': 'renderVariable',
        'pdata[A-Za-z]*': 'dataPointer',
        'pproperty[A-Za-z]*': 'propertyPointer',
        'ObjectState': 'renderObjectState',
        'ContextOffset': 'contextOffset',
        'renderObject': 'renderObject',
        'calculatedValue': 'calculatedValue',
        'dataPointer': 'dataPointer',
        'bufferData': 'bufferData',
        'dataSource': 'dataSource',
        'renderContext': 'renderContext',
        'contextOffsetPointer': 'contextOffsetPointer',
        'LoopCounter': 'loopCounter',
        'ThirdValue': 'thirdValue',
        'FourthValue': 'fourthValue',
        'renderContextBase': 'renderContextBase',
        'iterationCount': 'iterationCount',
        'memoryOffset': 'memoryOffset',
        'dataSize': 'dataSize',
        'propertyLength': 'propertyLength',
        'bufferOffset': 'bufferOffset',
        'nodeData': 'nodeData',
        'bufferOffset8': 'bufferOffset8',
        'LoopIterationCounter': 'loopIterationCounter',
        'objectPointer': 'objectPointer',
        'renderdataPointer': 'renderDataPointer',
        'RenderDataSizePointer': 'renderDataSizePointer',
        'aiStackX_20': 'stackVariable20',
        'RenderDataSizeAlternate': 'renderDataSizeAlternate',
        'RenderDataBuffer': 'renderDataBuffer',
        'StackFloatArray80': 'stackFloatArray80',
        'StackFloatArray88': 'stackFloatArray88',
        'StackInteger70': 'stackInteger70',
        'RegisterRBX': 'registerRBX',
        'RegisterRBP': 'registerRBP',
        'RegisterRAX': 'registerRAX',
        'RegisterRDI': 'registerRDI',
        'RegisterRSI': 'registerRSI',
        'unaff_R15': 'registerR15',
        'in_R9': 'registerR9',
        'in_XMM0_Dc': 'xmm0ComponentC',
        'in_XMM0_Dd': 'xmm0ComponentD',
        'in_XMM1_Dc': 'xmm1ComponentC',
        'in_XMM1_Dd': 'xmm1ComponentD',
        'in_XMM2_Dc': 'xmm2ComponentC',
        'in_XMM2_Dd': 'xmm2ComponentD',
        'in_XMM3_Dc': 'xmm3ComponentC',
        'in_XMM3_Dd': 'xmm3ComponentD',
        'in_XMM5_Da': 'xmm5ComponentA',
        'in_XMM5_Db': 'xmm5ComponentB',
        'in_XMM5_Dc': 'xmm5ComponentC',
        'in_XMM5_Dd': 'xmm5ComponentD',
        'in_R11D': 'registerR11D',
        'in_AL': 'registerAL',
        'fStack_[0-9a-fA-F]+': 'stackFloatVariable',
        'renderValue[0-9a-fA-F]+': 'renderValue',
        'renderFloatVar[0-9a-fA-F]+': 'renderFloatVariable',
        'vertexPositionX': 'vertexPositionX',
        'vertexPositionY': 'vertexPositionY',
        'textureCoordinateU': 'textureCoordinateU',
        'matrixValue[0-9]+': 'matrixValue',
        'PropertyLengthCounter': 'propertyLengthCounter',
        'iterationCount[0-9]+': 'iterationCount',
        'CONCAT[0-9]+': 'concatenatedValue',
        'SQRT': 'sqrt',
        'RenderObjectVTable': 'renderObjectVTable',
        'UpdateRenderObjectArray': 'updateRenderObjectArray',
        'CopyRenderData': 'copyRenderData',
        'ProcessRenderMaterial': 'processRenderMaterial',
        'ProcessRenderObject': 'processRenderObject',
    }
    
    # 应用变量名替换
    for pattern, replacement in variable_mappings.items():
        # 使用正则表达式进行替换
        content = re.sub(pattern, replacement, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("渲染文件变量名美化完成")

if __name__ == "__main__":
    beautify_rendering_variables()