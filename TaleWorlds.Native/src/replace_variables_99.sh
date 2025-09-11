#!/bin/bash

# 为99_unmatched_functions.c文件中的FUN_1802a11e0函数创建变量名替换脚本

# 变量名映射文件
cat > /tmp/variable_mapping.txt << 'EOF'
uStackX_18->ContextDataPointer
auStack_2e8->DataEncryptionBuffer
iStack_2c8->ConfigStackValue
abStack_2b8->DataTransferBuffer
uStack_2b0->BufferPointerA
uStack_2a8->BufferPointerB
fStack_298->FloatResult1
fStack_294->FloatResult2
fStack_290->FloatResult3
fStack_28c->FloatResult4
fStack_288->FloatResult5
fStack_284->FloatResult6
fStack_280->FloatResult7
fStack_27c->FloatResult8
fStack_278->FloatResult9
fStack_274->FloatResult10
fStack_26c->FloatResult11
fStack_268->FloatResult12
fStack_264->FloatResult13
fStack_260->FloatResult14
auStack_258->SystemDataBuffer
UnsignedDataValue1->StackProtectionValue
EOF

echo "变量名映射文件已创建"