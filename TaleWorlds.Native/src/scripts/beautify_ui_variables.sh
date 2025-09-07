#!/bin/bash

# 美化UI系统中的变量名脚本
# 专门处理04_ui_system.c文件中的逆向生成变量名

# 设置输入文件
INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 处理栈变量名 - 将十六进制栈偏移量替换为语义化名称
sed -e 's/fStack0000000000000034/animationTimeFactor/g' \
    -e 's/stack0x00000048/renderDataBuffer/g' \
    -e 's/localInt5/uiEventResult/g' \
    -e 's/localLong9/componentIterator/g' \
    -e 's/unmodifiedRBP/framePointer/g' \
    -e 's/unmodifiedR15/uiRenderContext/g' \
    -e 's/unmodifiedR12D/eventTypeCode/g' \
    -e 's/unmodifiedR13B/eventFlag/g' \
    -e 's/plocalLong9/componentListPtr/g' \
    -e 's/pallocatedMemory/memoryAllocator/g' \
    -e 's/ptrLocal3/textureBufferPtr/g' \
    -e 's/bufferPtr/uiBufferPtr/g' \
    -e 's/contextData/uiContextData/g' \
    -e 's/floatResult3/opacityValue/g' \
    -e 's/result2/operationResult/g' \
    -e 's/result0/eventIndex/g' \
    -e 's/result1/eventOffset/g' \
    -e 's/uVar8/loopCounter/g' \
    -e 's/eventTypeCode/uiEventType/g' \
    -e 's/extraout_XMM0_Da_00/xmm0ParameterA/g' \
    -e 's/extraout_XMM0_Da_01/xmm0ParameterB/g' \
    -e 's/extraout_XMM0_Da_02/xmm0ParameterC/g' \
    -e 's/extraout_XMM0_Da_03/xmm0ParameterD/g' \
    -e 's/extraout_XMM0_Da_04/xmm0ParameterE/g' \
    "$INPUT_FILE" > "$TEMP_FILE"

# 替换文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "UI系统变量名美化完成"