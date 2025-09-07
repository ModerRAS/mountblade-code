#!/bin/bash

# 美化99_unmatched_functions.c文件中的变量名
# 这个脚本将替换Ghidra自动生成的变量名为语义化名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 备份原始文件
cp "$FILE_PATH" "$FILE_PATH.backup"

echo "开始美化变量名..."

# 1. 替换uStack_xxx -> StackValueXxx
sed -i 's/\buStack_\([0-9a-fA-F]\+\)/StackValue\1/g' "$FILE_PATH"

# 2. 替换lStack_xxx -> LongStackValueXxx
sed -i 's/\blStack_\([0-9a-fA-F]\+\)/LongStackValue\1/g' "$FILE_PATH"

# 3. 替换pStack_xxx -> PointerStackValueXxx
sed -i 's/\bpStack_\([0-9a-fA-F]\+\)/PointerStackValue\1/g' "$FILE_PATH"

# 4. 替换plStack_xxx -> PointerLongStackValueXxx
sed -i 's/\bplStack_\([0-9a-fA-F]\+\)/PointerLongStackValue\1/g' "$FILE_PATH"

# 5. 替换puStack_xxx -> PointerUnsignedStackValueXxx
sed -i 's/\bpuStack_\([0-9a-fA-F]\+\)/PointerUnsignedStackValue\1/g' "$FILE_PATH"

# 6. 替换ppuStack_xxx -> PointerPointerUnsignedStackValueXxx
sed -i 's/\bppuStack_\([0-9a-fA-F]\+\)/PointerPointerUnsignedStackValue\1/g' "$FILE_PATH"

# 7. 替换auStack_xxx -> ArrayUnsignedStackValueXxx
sed -i 's/\bauStack_\([0-9a-fA-F]\+\)/ArrayUnsignedStackValue\1/g' "$FILE_PATH"

# 8. 替换fStack_xxx -> FloatStackValueXxx
sed -i 's/\bfStack_\([0-9a-fA-F]\+\)/FloatStackValue\1/g' "$FILE_PATH"

# 9. 替换dStack_xxx -> DoubleStackValueXxx
sed -i 's/\bdStack_\([0-9a-fA-F]\+\)/DoubleStackValue\1/g' "$FILE_PATH"

# 10. 替换lVarX -> LocalVariableX
sed -i 's/\blVar\([0-9]\+\)/LocalVariable\1/g' "$FILE_PATH"

# 11. 替换uVarX -> UnsignedVariableX
sed -i 's/\buVar\([0-9]\+\)/UnsignedVariable\1/g' "$FILE_PATH"

# 12. 替换iVarX -> IntegerVariableX
sed -i 's/\biVar\([0-9]\+\)/IntegerVariable\1/g' "$FILE_PATH"

# 13. 替换pVarX -> PointerVariableX
sed -i 's/\bpVar\([0-9]\+\)/PointerVariable\1/g' "$FILE_PATH"

# 14. 替换sVarX -> StringVariableX
sed -i 's/\bsVar\([0-9]\+\)/StringVariable\1/g' "$FILE_PATH"

# 15. 替换cVarX -> CharacterVariableX
sed -i 's/\bcVar\([0-9]\+\)/CharacterVariable\1/g' "$FILE_PATH"

# 16. 替换bVarX -> BooleanVariableX
sed -i 's/\bbVar\([0-9]\+\)/BooleanVariable\1/g' "$FILE_PATH"

# 17. 替换LocalX -> LocalValueX
sed -i 's/\bLocal\([0-9]\+\)/LocalValue\1/g' "$FILE_PATH"

# 18. 替换ParamX -> ParameterX
sed -i 's/\bParam\([0-9]\+\)/Parameter\1/g' "$FILE_PATH"

echo "变量名美化完成"