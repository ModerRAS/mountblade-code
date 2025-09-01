#!/usr/bin/env python3
"""
美化02_core_engine.c文件中的变量名
将undefined变量和puVar变量替换为有意义的名称
"""

import re
import sys

def beautify_core_engine_variables():
    # 读取文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 定义替换规则
    replacements = [
        # undefined8指针变量
        (r'\bundefined8\s+\*([a-zA-Z0-9_]+)\s*[=;]', lambda m: f'void* {m.group(1)};'),
        (r'\bundefined8\s+\*([a-zA-Z0-9_]+)', lambda m: f'void* {m.group(1)}'),
        
        # undefined变量
        (r'\bundefined8\s+([a-zA-Z0-9_]+)\s*[=;]', lambda m: f'uint64_t {m.group(1)};'),
        (r'\bundefined8\s+([a-zA-Z0-9_]+)', lambda m: f'uint64_t {m.group(1)}'),
        (r'\bundefined4\s+([a-zA-Z0-9_]+)\s*[=;]', lambda m: f'uint32_t {m.group(1)};'),
        (r'\bundefined4\s+([a-zA-Z0-9_]+)', lambda m: f'uint32_t {m.group(1)}'),
        (r'\bundefined\s+\*([a-zA-Z0-9_]+)\s*[=;]', lambda m: f'void* {m.group(1)};'),
        (r'\bundefined\s+\*([a-zA-Z0-9_]+)', lambda m: f'void* {m.group(1)}'),
        (r'\bundefined1\s+\*([a-zA-Z0-9_]+)\s*[=;]', lambda m: f'uint8_t* {m.group(1)};'),
        (r'\bundefined1\s+\*([a-zA-Z0-9_]+)', lambda m: f'uint8_t* {m.group(1)}'),
        (r'\bundefined1\s+([a-zA-Z0-9_]+)\s*\[([0-9]+)\]', lambda m: f'uint8_t {m.group(1)}[{m.group(2)}]'),
        
        # puVar变量替换
        (r'\bpuVar([0-9]+)\b', lambda m: f'pointerVar{m.group(1)}'),
        (r'\bpuStack_([a-zA-Z0-9_]+)\b', lambda m: f'stackPointer{m.group(1)}'),
        (r'\buStack_([a-zA-Z0-9_]+)\b', lambda m: f'stackVar{m.group(1)}'),
        (r'\bauStack_([a-zA-Z0-9_]+)\b', lambda m: f'stackArray{m.group(1)}'),
        (r'\bin_([A-Z][a-zA-Z0-9_]*)\b', lambda m: f'inputParam{m.group(1)}'),
        (r'\bplVar([0-9]+)\b', lambda m: f'pointerLongVar{m.group(1)}'),
        
        # 系统上下文相关变量
        (r'\bSystemContextPointer\b', 'systemContext'),
        (r'\bCurrentNode\b', 'currentNode'),
        (r'\bPreviousNode\b', 'previousNode'),
        (r'\bNextNode\b', 'nextNode'),
        (r'\bNewNodePointer\b', 'newNode'),
        (r'\bNewResourceNode\b', 'newResourceNode'),
        (r'\bNewTextureNode\b', 'newTextureNode'),
        (r'\bNewAudioNode\b', 'newAudioNode'),
        (r'\bNewNetworkNode\b', 'newNetworkNode'),
        (r'\bNewSecurityNode\b', 'newSecurityNode'),
        (r'\bNewValidationNode\b', 'newValidationNode'),
        (r'\bNewAuthNode\b', 'newAuthNode'),
        (r'\bNewDataStreamNode\b', 'newDataStreamNode'),
        (r'\bNewMemoryNode\b', 'newMemoryNode'),
        (r'\bNewConfigNode\b', 'newConfigNode'),
        (r'\bNewDataNode\b', 'newDataNode'),
        (r'\bNewStateNode\b', 'newStateNode'),
        (r'\bNewThreadNode\b', 'newThreadNode'),
        
        # 其他常见变量
        (r'\bAudioHandler\b', 'audioHandler'),
        (r'\bValidationHandler\b', 'validationHandler'),
        (r'\bAuthenticationHandler\b', 'authenticationHandler'),
        (r'\bDataStreamHandler\b', 'dataStreamHandler'),
        (r'\bfileSystemCallback\b', 'fileSystemCallback'),
        (r'\bmemoryCallback\b', 'memoryCallback'),
        (r'\bMemoryNodeData\b', 'memoryNodeData'),
        (r'\bConfigNodeData\b', 'configNodeData'),
        (r'\bDataNodeData\b', 'dataNodeData'),
        (r'\bConnectionTemplateData\b', 'connectionTemplateData'),
        (r'\bFileSystemHandler\b', 'fileSystemHandler'),
        (r'\bconnectionData\b', 'connectionData'),
        (r'\bconnectionFlags\b', 'connectionFlags'),
        (r'\bSystemContextBasePointer\b', 'systemContextBase'),
        (r'\bPreviousResourceNode\b', 'previousResourceNode'),
        (r'\bPreviousConnection\b', 'previousConnection'),
        (r'\btraverseNodeLeft\b', 'traverseNodeLeft'),
        (r'\btraverseNodeRight\b', 'traverseNodeRight'),
        (r'\bvalidationContextPointer\b', 'validationContext'),
        (r'\bvalidationNodeLeft\b', 'validationNodeLeft'),
        (r'\bvalidationNodeRight\b', 'validationNodeRight'),
        (r'\bvalidationNextNode\b', 'validationNextNode'),
        (r'\bvalidationNewNode\b', 'validationNewNode'),
        (r'\bstatusContextPointer\b', 'statusContext'),
        (r'\bstatusNodeLeft\b', 'statusNodeLeft'),
        (r'\bstatusNodeRight\b', 'statusNodeRight'),
        (r'\bstatusNextNode\b', 'statusNextNode'),
        (r'\bstatusNewNode\b', 'statusNewNode'),
        (r'\bsystemNodePointer\b', 'systemNode'),
        (r'\btargetNodePointer\b', 'targetNode'),
        (r'\bnextNodePointer\b', 'nextNode'),
        (r'\bcurrentNodePointer\b', 'currentNode'),
        (r'\bconfigurationHandler\b', 'configurationHandler'),
        (r'\bconfigurationBuffer\b', 'configurationBuffer'),
        (r'\bbufferSize\b', 'bufferSize'),
        (r'\bconfigDataBuffer\b', 'configDataBuffer'),
        (r'\bengineContext\b', 'engineContext'),
        (r'\bsystemContext\b', 'systemContext'),
        (r'\bengineSystemContext\b', 'engineSystemContext'),
        (r'\bvalidationSystemContext\b', 'validationSystemContext'),
        (r'\bstatusSystemContext\b', 'statusSystemContext'),
        (r'\bMemoryPoolPointer\b', 'memoryPool'),
        (r'\bConfigPoolPointer\b', 'configPool'),
        (r'\bDataPoolPointer\b', 'dataPool'),
        (r'\bThreadPoolPointer\b', 'threadPool'),
        (r'\bEngineContext\b', 'engineContext'),
        (r'\bSystemContext\b', 'systemContext'),
        (r'\bSystemHandle\b', 'systemHandle'),
        (r'\bSystemContextHandle\b', 'systemContextHandle')
    ]
    
    # 应用替换规则
    for pattern, replacement in replacements:
        content = re.sub(pattern, replacement, content)
    
    # 写回文件
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("02_core_engine.c文件变量美化完成")

if __name__ == "__main__":
    beautify_core_engine_variables()