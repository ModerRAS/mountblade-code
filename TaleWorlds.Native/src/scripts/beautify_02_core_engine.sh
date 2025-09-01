#!/bin/bash

# 美化02_core_engine.c文件中的undefined类型变量
# 将undefined8*改为更具语义化的名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 创建临时脚本文件
cat > /tmp/beautify_core_engine.py << 'EOF'
import re

def beautify_core_engine():
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 替换undefined8*为更具语义化的名称
    # 根据上下文进行不同的替换
    
    # 网络相关变量
    content = re.sub(r'undefined8 \*NewNetworkNode', 'void* NetworkNodePointer', content)
    content = re.sub(r'undefined8 \*NewSecurityNode', 'void* SecurityNodePointer', content)
    content = re.sub(r'undefined8 \*NewValidationNode', 'void* ValidationNodePointer', content)
    content = re.sub(r'undefined8 \*NewAuthNode', 'void* AuthenticationNodePointer', content)
    content = re.sub(r'undefined8 \*NewDataStreamNode', 'void* DataStreamNodePointer', content)
    
    # 系统上下文相关变量
    content = re.sub(r'undefined8 \*systemContextPointer', 'void* SystemContextPointer', content)
    content = re.sub(r'undefined8 \*validationContextPointer', 'void* ValidationContextPointer', content)
    content = re.sub(r'undefined8 \*statusContextPointer', 'void* StatusContextPointer', content)
    
    # 节点遍历相关变量
    content = re.sub(r'undefined8 \*traverseNodeLeft', 'void* LeftTraverseNode', content)
    content = re.sub(r'undefined8 \*traverseNodeRight', 'void* RightTraverseNode', content)
    content = re.sub(r'undefined8 \*nextNodePointer', 'void* NextNodePointer', content)
    content = re.sub(r'undefined8 \*newNodePointer', 'void* NewNodePointer', content)
    
    # 验证节点相关变量
    content = re.sub(r'undefined8 \*validationNodeLeft', 'void* ValidationLeftNode', content)
    content = re.sub(r'undefined8 \*validationNodeRight', 'void* ValidationRightNode', content)
    content = re.sub(r'undefined8 \*validationnextNode', 'void* ValidationNextNode', content)
    content = re.sub(r'undefined8 \*validationNewNode', 'void* ValidationNewNode', content)
    
    # 状态节点相关变量
    content = re.sub(r'undefined8 \*statusNodeLeft', 'void* StatusLeftNode', content)
    content = re.sub(r'undefined8 \*statusNodeRight', 'void* StatusRightNode', content)
    content = re.sub(r'undefined8 \*statusnextNode', 'void* StatusNextNode', content)
    content = re.sub(r'undefined8 \*statusNewNode', 'void* StatusNewNode', content)
    
    # 系统节点相关变量
    content = re.sub(r'undefined8 \*systemNodePointer', 'void* SystemNodePointer', content)
    content = re.sub(r'undefined8 \*currentNodePointer', 'void* CurrentNodePointer', content)
    content = re.sub(r'undefined8 \*targetNodePointer', 'void* TargetNodePointer', content)
    content = re.sub(r'undefined8 \*connectionData', 'void* ConnectionData', content)
    
    # 内存管理相关变量
    content = re.sub(r'undefined8 \*MemoryPoolPointer', 'void* MemoryPoolPointer', content)
    content = re.sub(r'undefined8 \*PreviousMemoryNode', 'void* PreviousMemoryNode', content)
    content = re.sub(r'undefined8 \*CurrentMemoryNode', 'void* CurrentMemoryNode', content)
    content = re.sub(r'undefined8 \*NextMemoryNode', 'void* NextMemoryNode', content)
    content = re.sub(r'undefined8 \*NewMemoryNodePointer', 'void* NewMemoryNodePointer', content)
    
    # 缓存相关变量
    content = re.sub(r'undefined8 \*CachePoolPointer', 'void* CachePoolPointer', content)
    content = re.sub(r'undefined8 \*PreviousCacheNode', 'void* PreviousCacheNode', content)
    content = re.sub(r'undefined8 \*CurrentCacheNode', 'void* CurrentCacheNode', content)
    content = re.sub(r'undefined8 \*NextCacheNode', 'void* NextCacheNode', content)
    content = re.sub(r'undefined8 \*NewCacheNodePointer', 'void* NewCacheNodePointer', content)
    
    # 连接相关变量
    content = re.sub(r'undefined8 \*ConnectionData', 'void* ConnectionData', content)
    content = re.sub(r'undefined8 \*ConnectionManager', 'void* ConnectionManager', content)
    content = re.sub(r'undefined8 \*ConnectionProcessor', 'void* ConnectionProcessor', content)
    content = re.sub(r'undefined8 \*ConnectionConfigBuffer', 'void* ConnectionConfigBuffer', content)
    
    # 数据节点相关变量
    content = re.sub(r'undefined8 \*NewConfigNode', 'void* ConfigNodePointer', content)
    content = re.sub(r'undefined8 \*NewDataNode', 'void* DataNodePointer', content)
    content = re.sub(r'undefined8 \*NewStateNode', 'void* StateNodePointer', content)
    content = re.sub(r'undefined8 \*NewMemoryNode', 'void* MemoryNodePointer', content)
    content = re.sub(r'undefined8 \*NewThreadNode', 'void* ThreadNodePointer', content)
    
    # 文件系统相关变量
    content = re.sub(r'undefined \*FileSystemHandler', 'void* FileSystemHandler', content)
    content = re.sub(r'undefined \*FileSystemManagerCallback', 'void* FileSystemManagerCallback', content)
    
    # 字符串处理相关变量
    content = re.sub(r'undefined \*StringProcessorCallbackPointer', 'void* StringProcessorCallback', content)
    content = re.sub(r'undefined1 \*StringDataBufferPointer', 'char* StringDataBuffer', content)
    content = re.sub(r'undefined \*StringConfigCallbackPointer', 'void* StringConfigCallback', content)
    content = re.sub(r'undefined1 \*StringConfigBufferPointer', 'char* StringConfigBuffer', content)
    
    # 配置缓冲区相关变量
    content = re.sub(r'undefined1 \*configurationBuffer', 'char* ConfigurationBuffer', content)
    content = re.sub(r'undefined1 \*puStack_98', 'char* StackBuffer98', content)
    
    # 数据模板相关变量
    content = re.sub(r'undefined \*DataTemplate', 'void* DataTemplate', content)
    
    # 其他变量
    content = re.sub(r'undefined \*puStack_b8', 'void* StackPointerB8', content)
    content = re.sub(r'undefined \*puStack_b0', 'void* StackPointerB0', content)
    content = re.sub(r'undefined \*puStack_98', 'void* StackPointer98', content)
    content = re.sub(r'undefined \*puStack_78', 'void* StackPointer78', content)
    content = re.sub(r'undefined \*puStack_70', 'void* StackPointer70', content)
    content = re.sub(r'undefined \*puStack_68', 'void* StackPointer68', content)
    content = re.sub(r'undefined \*puStack_60', 'void* StackPointer60', content)
    content = re.sub(r'undefined \*puStack_468', 'void* StackPointer468', content)
    content = re.sub(r'undefined1 \*puStack_460', 'char* StackPointer460', content)
    
    # 函数参数中的undefined类型
    content = re.sub(r'undefined8 \*param_1', 'void* Parameter1', content)
    content = re.sub(r'undefined8 \*param_2', 'void* Parameter2', content)
    content = re.sub(r'undefined8 \*param_3', 'void* Parameter3', content)
    content = re.sub(r'undefined8 \*param_4', 'void* Parameter4', content)
    content = re.sub(r'undefined4 \*param_1', 'uint32_t* Parameter1', content)
    content = re.sub(r'undefined4 \*param_2', 'uint32_t* Parameter2', content)
    content = re.sub(r'undefined1 \*param_1', 'char* Parameter1', content)
    
    # 返回类型
    content = re.sub(r'^undefined8 \*', 'void* ', content, flags=re.MULTILINE)
    content = re.sub(r'^undefined \*', 'void* ', content, flags=re.MULTILINE)
    content = re.sub(r'^undefined4 \*', 'uint32_t* ', content, flags=re.MULTILINE)
    content = re.sub(r'^undefined1 \*', 'char* ', content, flags=re.MULTILINE)
    
    # 变量声明
    content = re.sub(r'undefined8 \*([^=;\n]+)', 'void* \\1', content)
    content = re.sub(r'undefined \*([^=;\n]+)', 'void* \\1', content)
    content = re.sub(r'undefined4 \*([^=;\n]+)', 'uint32_t* \\1', content)
    content = re.sub(r'undefined1 \*([^=;\n]+)', 'char* \\1', content)
    content = re.sub(r'undefined8 ([^=;\n]+)', 'uint64_t \\1', content)
    content = re.sub(r'undefined4 ([^=;\n]+)', 'uint32_t \\1', content)
    content = re.sub(r'undefined2 ([^=;\n]+)', 'uint16_t \\1', content)
    content = re.sub(r'undefined1 ([^=;\n]+)', 'uint8_t \\1', content)
    
    with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c', 'w', encoding='utf-8') as f:
        f.write(content)
    
    print("Core engine beautification completed")

if __name__ == "__main__":
    beautify_core_engine()
EOF

# 运行美化脚本
python3 /tmp/beautify_core_engine.py

# 清理临时文件
rm -f /tmp/beautify_core_engine.py

echo "Core engine beautification completed"