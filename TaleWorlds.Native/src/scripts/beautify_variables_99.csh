#!/bin/bash

# 美化99_unmatched_functions.c中的变量名
# 将Ghidra生成的变量名替换为语义化名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 栈变量重命名规则
sed -e 's/uStack_\([0-9a-f]*\)/StackValue\1/g' \
    -e 's/lStack_\([0-9a-f]*\)/LongStackValue\1/g' \
    -e 's/pStack_\([0-9a-f]*\)/PointerStackValue\1/g' \
    -e 's/plStack_\([0-9a-f]*\)/PointerLongStackValue\1/g' \
    -e 's/puStack_\([0-9a-f]*\)/PointerUnsignedStackValue\1/g' \
    -e 's/ppuStack_\([0-9a-f]*\)/PointerPointerUnsignedStackValue\1/g' \
    -e 's/auStack_\([0-9a-f]*\)/ArrayUnsignedStackValue\1/g' \
    -e 's/fStack_\([0-9a-f]*\)/FloatStackValue\1/g' \
    -e 's/dStack_\([0-9a-f]*\)/DoubleStackValue\1/g' \
    -e 's/StackGuard/StackProtectionValue/g' \
    -e 's/lVar\([0-9]*\)/LocalVariable\1/g' \
    -e 's/uVar\([0-9]*\)/UnsignedVariable\1/g' \
    -e 's/iVar\([0-9]*\)/IntegerVariable\1/g' \
    -e 's/pVar\([0-9]*\)/PointerVariable\1/g' \
    -e 's/sVar\([0-9]*\)/StringVariable\1/g' \
    -e 's/cVar\([0-9]*\)/CharacterVariable\1/g' \
    -e 's/bVar\([0-9]*\)/BooleanVariable\1/g' \
    -e 's/Local\([0-9]*\)/LocalValue\1/g' \
    -e 's/Param\([0-9]*\)/Parameter\1/g' \
    -e 's/Data\([0-9]*\)/DataValue\1/g' \
    -e 's/Buffer\([0-9]*\)/BufferValue\1/g' \
    -e 's/Result\([0-9]*\)/ResultValue\1/g' \
    -e 's/Status\([0-9]*\)/StatusValue\1/g' \
    -e 's/Error\([0-9]*\)/ErrorValue\1/g' \
    -e 's/Code\([0-9]*\)/CodeValue\1/g' \
    -e 's/Flag\([0-9]*\)/FlagValue\1/g' \
    -e 's/Index\([0-9]*\)/IndexValue\1/g' \
    -e 's/Count\([0-9]*\)/CountValue\1/g' \
    -e 's/Size\([0-9]*\)/SizeValue\1/g' \
    -e 's/Length\([0-9]*\)/LengthValue\1/g' \
    -e 's/Position\([0-9]*\)/PositionValue\1/g' \
    -e 's/Offset\([0-9]*\)/OffsetValue\1/g' \
    -e 's/Context\([0-9]*\)/ContextValue\1/g' \
    -e 's/Handle\([0-9]*\)/HandleValue\1/g' \
    -e 's/Pointer\([0-9]*\)/PointerValue\1/g' \
    -e 's/Memory\([0-9]*\)/MemoryValue\1/g' \
    -e 's/Allocation\([0-9]*\)/AllocationValue\1/g' \
    -e 's/Process\([0-9]*\)/ProcessValue\1/g' \
    -e 's/System\([0-9]*\)/SystemValue\1/g' \
    -e 's/Config\([0-9]*\)/ConfigValue\1/g' \
    -e 's/Table\([0-9]*\)/TableValue\1/g' \
    -e 's/Entry\([0-9]*\)/EntryValue\1/g' \
    -e 's/Node\([0-9]*\)/NodeValue\1/g' \
    -e 's/List\([0-9]*\)/ListValue\1/g' \
    -e 's/Queue\([0-9]*\)/QueueValue\1/g' \
    -e 's/Event\([0-9]*\)/EventValue\1/g' \
    -e 's/Callback\([0-9]*\)/CallbackValue\1/g' \
    -e 's/Function\([0-9]*\)/FunctionValue\1/g' \
    -e 's/Handler\([0-9]*\)/HandlerValue\1/g' \
    -e 's/Manager\([0-9]*\)/ManagerValue\1/g' \
    -e 's/Control\([0-9]*\)/ControlValue\1/g' \
    -e 's/State\([0-9]*\)/StateValue\1/g' \
    -e 's/Value\([0-9]*\)/Value\1/g' \
    "$INPUT_FILE" > "$TEMP_FILE"

# 替换原始文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "变量名美化完成"