#!/bin/bash

# 批量美化undefined类型变量的脚本
# 将 undefinedN 替换为 uint8_t name[N]

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 处理 undefined5 TransformStatusFlags
sed -i 's/undefined5 TransformStatusFlags;/uint8_t TransformStatusFlags[5];/g' "$INPUT_FILE"

# 处理 undefined3 uStack_17b
sed -i 's/undefined3 uStack_17b;/uint8_t uStack_17b[3];/g' "$INPUT_FILE"

# 处理 uStack_17b = (undefined3)((ulonglong)uStack_f0 >> 0x28);
sed -i 's/uStack_17b = (undefined3)((ulonglong)uStack_f0 >> 0x28);/uStack_17b[0] = (uint8_t)((ulonglong)uStack_f0 >> 0x28);/g' "$INPUT_FILE"

# 处理 undefined7 uStack_41f
sed -i 's/undefined7 uStack_41f;/uint8_t uStack_41f[7];/g' "$INPUT_FILE"

# 处理 undefined7 uStack_33f
sed -i 's/undefined7 uStack_33f;/uint8_t uStack_33f[7];/g' "$INPUT_FILE"

# 处理 undefined7 PropertyPadding
sed -i 's/undefined7 PropertyPadding;/uint8_t PropertyPadding[7];/g' "$INPUT_FILE"

# 处理 undefined7 in_register_00000001
sed -i 's/undefined7 in_register_00000001;/uint8_t in_register_00000001[7];/g' "$INPUT_FILE"

# 处理 undefined7 uStack_9f
sed -i 's/undefined7 uStack_9f;/uint8_t uStack_9f[7];/g' "$INPUT_FILE"

# 处理 undefined7 PropertyMemorySize
sed -i 's/undefined7 PropertyMemorySize;/uint8_t PropertyMemorySize[7];/g' "$INPUT_FILE"

# 处理 PropertyMemorySize = (undefined7)(BasePropertyOffset >> 8);
sed -i 's/PropertyMemorySize = (undefined7)(BasePropertyOffset >> 8);/PropertyMemorySize[0] = (uint8_t)(BasePropertyOffset >> 8);/g' "$INPUT_FILE"

# 处理 undefined7 PropertyValueByte
sed -i 's/undefined7 PropertyValueByte;/uint8_t PropertyValueByte[7];/g' "$INPUT_FILE"

# 处理 PropertyValueByte = (undefined7)((ulonglong)in_R10 >> 8);
sed -i 's/PropertyValueByte = (undefined7)((ulonglong)in_R10 >> 8);/PropertyValueByte[0] = (uint8_t)((ulonglong)in_R10 >> 8);/g' "$INPUT_FILE"

# 处理 undefined7 ShaderStateValue
sed -i 's/undefined7 ShaderStateValue;/uint8_t ShaderStateValue[7];/g' "$INPUT_FILE"

# 处理 ShaderStateValue = (undefined7)(StackPointerRegister >> 8);
sed -i 's/ShaderStateValue = (undefined7)(StackPointerRegister >> 8);/ShaderStateValue[0] = (uint8_t)(StackPointerRegister >> 8);/g' "$INPUT_FILE"

echo "批量美化完成"