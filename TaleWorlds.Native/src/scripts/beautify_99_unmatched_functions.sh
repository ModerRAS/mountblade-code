#!/bin/bash

# 99_unmatched_functions.c 文件变量名美化脚本
# 专门用于处理高频出现的变量名和函数名

# 常见变量名替换模式
declare -A replacements=(
    # 寄存器相关变量
    ["RegisterContext1"]="CurrentContext"
    ["RegisterContext2"]="PreviousContext" 
    ["RegisterContext3"]="DataContext"
    ["RegisterContext4"]="SystemContext"
    ["RegisterContext5"]="MemoryContext"
    ["RegisterContext6"]="ProcessingContext"
    ["RegisterContext7"]="ExecutionContext"
    ["RegisterContext8"]="OffsetTable"
    ["RegisterContext9"]="ValidationContext"
    
    # iVar系列变量
    ["iVar1"]="Counter1"
    ["iVar2"]="Counter2"
    ["iVar3"]="Counter3"
    ["iVar4"]="Index1"
    ["iVar5"]="Index2"
    ["iVar6"]="Index3"
    ["iVar7"]="Status1"
    ["iVar8"]="Status2"
    ["iVar9"]="Result1"
    ["iVar10"]="Result2"
    ["iVar11"]="Length1"
    ["iVar12"]="Length2"
    ["iVar13"]="Offset1"
    ["iVar14"]="Offset2"
    ["iVar15"]="Position1"
    ["iVar16"]="Position2"
    ["iVar17"]="Flag1"
    ["iVar18"]="Flag2"
    ["iVar19"]="Code1"
    ["iVar20"]="Code2"
    ["iVar21"]="Value1"
    ["iVar22"]="Value2"
    ["iVar23"]="Size1"
    ["iVar24"]="Size2"
    ["iVar25"]="Count1"
    ["iVar26"]="Count2"
    ["iVar27"]="Temp1"
    ["iVar28"]="Temp2"
    ["iVar29"]="Buffer1"
    ["iVar30"]="Buffer2"
    
    # pbVar系列变量（byte指针）
    ["pbVar1"]="BytePointer1"
    ["pbVar2"]="BytePointer2"
    ["pbVar3"]="BytePointer3"
    ["pbVar4"]="BytePointer4"
    ["pbVar5"]="BytePointer5"
    ["pbVar6"]="BytePointer6"
    ["pbVar7"]="BytePointer7"
    ["pbVar8"]="BytePointer8"
    ["pbVar9"]="BytePointer9"
    ["pbVar10"]="BytePointer10"
    
    # puVar系列变量（undefined指针）
    ["puStack_80"]="StackPointer80"
    ["puStack_88"]="StackPointer88"
    ["puStack_90"]="StackPointer90"
    ["puStack_98"]="StackPointer98"
    ["puStack_a0"]="StackPointerA0"
    ["puStack_a8"]="StackPointerA8"
    ["puStack_b0"]="StackPointerB0"
    ["puStack_b8"]="StackPointerB8"
    
    # uStack系列变量（undefined栈变量）
    ["uStack_80"]="StackValue80"
    ["uStack_88"]="StackValue88"
    ["uStack_90"]="StackValue90"
    ["uStack_98"]="StackValue98"
    ["uStack_a0"]="StackValueA0"
    ["uStack_a8"]="StackValueA8"
    ["uStack_b0"]="StackValueB0"
    ["uStack_b8"]="StackValueB8"
    
    # 数据处理相关变量
    ["MemoryAllocationResult2"]="AllocationResult"
    ["MemoryAllocationResult3"]="AllocationResult2"
    ["MemoryAllocationResult4"]="AllocationResult3"
    ["MemoryAllocationResult5"]="AllocationResult4"
    ["ProcessingFlags"]="ProcessFlags"
    ["EncodedData3"]="EncodedValue"
    ["CharacterCode"]="CharCode"
    ["SecondCharacterCode2"]="SecondCharCode"
    ["SecondCharacterCode3"]="ThirdCharCode"
    ["SecondCharacterCode4"]="FourthCharCode"
    ["SecondCharacterCode5"]="FifthCharCode"
    ["SecondCharacterCode6"]="SixthCharCode"
    
    # 输入输出相关变量
    ["InputStringPosition"]="InputPosition"
    ["InputStringEnd"]="InputEnd"
    ["OutputBuffer"]="OutputBuffer"
    ["DataPointer"]="DataPtr"
    ["DataPointer2"]="DataPtr2"
    ["DataPointer3"]="DataPtr3"
    ["DataPointer4"]="DataPtr4"
    ["DataPointer5"]="DataPtr5"
    ["DataPointer6"]="DataPtr6"
    ["DataPointer7"]="DataPtr7"
    
    # 布尔变量
    ["bVar1"]="BoolFlag1"
    ["bVar2"]="BoolFlag2"
    ["bVar3"]="BoolFlag3"
    ["bVar4"]="BoolFlag4"
    ["bVar5"]="BoolFlag5"
    ["bVar6"]="BoolFlag6"
    ["bVar7"]="BoolFlag7"
    ["bVar8"]="BoolFlag8"
    ["bVar9"]="BoolFlag9"
    ["bVar10"]="BoolFlag10"
    ["bVar27"]="IsValidFlag"
    ["bVar28"]="IsProcessingFlag"
    ["bVar29"]="IsCompleteFlag"
    ["bVar30"]="IsActiveFlag"
    
    # 长整型变量
    ["lVar1"]="LongValue1"
    ["lVar2"]="LongValue2"
    ["lVar3"]="LongValue3"
    ["lVar4"]="LongValue4"
    ["lVar5"]="LongValue5"
    ["lVar6"]="LongValue6"
    ["lVar7"]="LongValue7"
    ["lVar8"]="LongValue8"
    ["lVar9"]="LongValue9"
    ["lVar10"]="LongValue10"
    
    # 字符指针变量
    ["pCurrentChar1"]="CurrentChar1"
    ["pCurrentChar2"]="CurrentChar2"
    ["pCurrentChar3"]="CurrentChar3"
    ["pCurrentChar4"]="CurrentChar4"
    ["pCurrentChar5"]="CurrentChar5"
    ["pCurrentChar6"]="CurrentChar6"
    ["pCurrentChar7"]="CurrentChar7"
    ["pCurrentChar8"]="CurrentChar8"
    ["pCurrentChar9"]="CurrentChar9"
    ["pCurrentChar10"]="CurrentChar10"
    ["pCurrentChar11"]="CurrentChar11"
    ["pCurrentChar12"]="CurrentChar12"
    ["pCurrentChar13"]="CurrentChar13"
    ["pCurrentChar14"]="CurrentChar14"
    ["pCurrentChar15"]="CurrentChar15"
    ["pCurrentChar16"]="CurrentChar16"
    ["pCurrentChar17"]="CurrentChar17"
    
    # 数据值变量
    ["DataValue11"]="DataVal1"
    ["DataValue15"]="DataVal2"
    ["DataValue17"]="DataVal3"
    ["DataValue19"]="DataVal4"
    
    # 指针变量
    ["HeapNodePointer"]="HeapNodePtr"
    ["pMemoryAllocationResult2"]="MemAllocPtr2"
    ["pMemoryAllocationResult3"]="MemAllocPtr3"
    ["pMemoryAllocationResult4"]="MemAllocPtr4"
    ["pcVar9"]="CharPtr9"
    ["pfVar19"]="FloatPtr19"
    ["fVar28"]="FloatVal28"
    
    # 其他变量
    ["SystemContext1"]="SysCtx1"
    ["SystemContext5"]="SysCtx5"
    ["LeftChildIndex"]="LeftChildIdx"
    ["UnsignedVar8"]="UnsignedVal8"
    ["EncodingCharacter"]="EncodingChar"
    ["SecondCharacterCode3"]="SecondCharCode3"
)

# 处理文件
input_file="99_unmatched_functions.c"
backup_file="${input_file}.backup"

# 创建备份
cp "$input_file" "$backup_file"

echo "开始美化变量名..."

# 执行替换
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    echo "替换: $old_name -> $new_name"
    
    # 使用sed进行替换，只替换变量名（不替换字符串中的内容）
    sed -i "s/\b$old_name\b/$new_name/g" "$input_file"
done

echo "变量名美化完成！"
echo "原始文件已备份到: $backup_file"