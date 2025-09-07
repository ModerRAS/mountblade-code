#!/bin/bash

# 美化99_unmatched_functions.c中的栈变量名
# 这是一个简化的美化脚本，只处理部分变量名

INPUT_FILE="TaleWorlds.Native/src/99_unmatched_functions.c"
TEMP_FILE="TaleWorlds.Native/src/temp_beautify.sh"

# 创建临时脚本
cat > "$TEMP_FILE" << 'EOF'
#!/bin/bash

# 美化栈变量名
sed -i 's/float fVar[0-9]\+/float CalculatedFloatValue/g' "$1"
sed -i 's/float fStack[0-9a-fx]\+/float StackFloatValue/g' "$1"
sed -i 's/int iVar[0-9]\+/int IntegerValue/g' "$1"
sed -i 's/int iStack[0-9a-fx]\+/int StackIntegerValue/g' "$1"
sed -i 's/uint uVar[0-9]\+/uint UnsignedValue/g' "$1"
sed -i 's/uint uStack[0-9a-fx]\+/uint StackUnsignedValue/g' "$1"
sed -i 's/char cVar[0-9]\+/char CharacterValue/g' "$1"
sed -i 's/bool bVar[0-9]\+/bool BooleanFlag/g' "$1"
sed -i 's/longlong lVar[0-9]\+/longlong LongValue/g' "$1"
sed -i 's/longlong lStack[0-9a-fx]\+/longlong StackLongValue/g' "$1"
sed -i 's/undefined4 uStack[0-9a-fx]\+/uint32_t StackUndefinedValue/g' "$1"
sed -i 's/undefined8 uStack[0-9a-fx]\+/uint64_t StackUndefinedValue/g' "$1"
sed -i 's/undefined4 in_stack_[0-9a-fx]\+/uint32_t InputStackValue/g' "$1"
sed -i 's/undefined8 in_stack_[0-9a-fx]\+/uint64_t InputStackValue/g' "$1"
sed -i 's/uint auStackX_[0-9]\+/uint StackArrayValue/g' "$1"
sed -i 's/longlong unaff_R[ABCD][0-9]\+X\?/longlong SystemRegisterValue/g' "$1"
sed -i 's/char unaff_R[0-9]\+[A-Z]\+/char SystemRegisterByte/g' "$1"

echo "变量名美化完成"
EOF

chmod +x "$TEMP_FILE"

# 执行美化脚本
"$TEMP_FILE" "$INPUT_FILE"

# 清理临时文件
rm -f "$TEMP_FILE"

echo "99_unmatched_functions.c 变量名美化完成"