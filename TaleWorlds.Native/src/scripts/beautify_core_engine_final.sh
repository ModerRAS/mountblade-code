#!/bin/bash

# 美化 02_core_engine.c 文件中的变量名
# 这个脚本将批量替换不规范的变量名

# 定义替换规则
declare -A replacements=(
    # 通用变量类型
    ["iVar1"]="IndexVariable1"
    ["iVar2"]="IndexVariable2"
    ["iVar3"]="IndexVariable3"
    ["iVar4"]="IndexVariable4"
    ["iVar5"]="IndexVariable5"
    ["iVar6"]="IndexVariable6"
    ["iVar7"]="IndexVariable7"
    ["iVar8"]="IndexVariable8"
    ["iVar9"]="IndexVariable9"
    ["iVar10"]="IndexVariable10"
    ["iVar11"]="IndexVariable11"
    ["iVar12"]="IndexVariable12"
    ["iVar13"]="IndexVariable13"
    ["iVar14"]="IndexVariable14"
    ["iVar15"]="IndexVariable15"
    ["iVar16"]="IndexVariable16"
    ["iVar17"]="IndexVariable17"
    ["iVar18"]="IndexVariable18"
    ["iVar19"]="IndexVariable19"
    ["iVar20"]="IndexVariable20"
    
    # 长整型变量
    ["lVar1"]="LongVariable1"
    ["lVar2"]="LongVariable2"
    ["lVar3"]="LongVariable3"
    ["lVar4"]="LongVariable4"
    ["lVar5"]="LongVariable5"
    ["lVar6"]="LongVariable6"
    ["lVar7"]="LongVariable7"
    ["lVar8"]="LongVariable8"
    ["lVar9"]="LongVariable9"
    ["lVar10"]="LongVariable10"
    ["lVar11"]="LongVariable11"
    ["lVar12"]="LongVariable12"
    ["lVar13"]="LongVariable13"
    ["lVar14"]="LongVariable14"
    ["lVar15"]="LongVariable15"
    ["lVar16"]="LongVariable16"
    ["lVar17"]="LongVariable17"
    ["lVar18"]="LongVariable18"
    ["lVar19"]="LongVariable19"
    ["lVar20"]="LongVariable20"
    
    # 无符号整型变量
    ["uVar1"]="UnsignedVariable1"
    ["uVar2"]="UnsignedVariable2"
    ["uVar3"]="UnsignedVariable3"
    ["uVar4"]="UnsignedVariable4"
    ["uVar5"]="UnsignedVariable5"
    ["uVar6"]="UnsignedVariable6"
    ["uVar7"]="UnsignedVariable7"
    ["uVar8"]="UnsignedVariable8"
    ["uVar9"]="UnsignedVariable9"
    ["uVar10"]="UnsignedVariable10"
    ["uVar11"]="UnsignedVariable11"
    ["uVar12"]="UnsignedVariable12"
    ["uVar13"]="UnsignedVariable13"
    ["uVar14"]="UnsignedVariable14"
    ["uVar15"]="UnsignedVariable15"
    ["uVar16"]="UnsignedVariable16"
    ["uVar17"]="UnsignedVariable17"
    ["uVar18"]="UnsignedVariable18"
    ["uVar19"]="UnsignedVariable19"
    ["uVar20"]="UnsignedVariable20"
    
    # 字符变量
    ["cVar1"]="CharVariable1"
    ["cVar2"]="CharVariable2"
    ["cVar3"]="CharVariable3"
    ["cVar4"]="CharVariable4"
    ["cVar5"]="CharVariable5"
    ["cVar6"]="CharVariable6"
    ["cVar7"]="CharVariable7"
    ["cVar8"]="CharVariable8"
    ["cVar9"]="CharVariable9"
    ["cVar10"]="CharVariable10"
    
    # 指针变量
    ["puVar1"]="PointerVariable1"
    ["puVar2"]="PointerVariable2"
    ["puVar3"]="PointerVariable3"
    ["puVar4"]="PointerVariable4"
    ["puVar5"]="PointerVariable5"
    ["puVar6"]="PointerVariable6"
    ["puVar7"]="PointerVariable7"
    ["puVar8"]="PointerVariable8"
    ["puVar9"]="PointerVariable9"
    ["puVar10"]="PointerVariable10"
    
    # 长整型指针变量
    ["plVar1"]="PointerLongVariable1"
    ["plVar2"]="PointerLongVariable2"
    ["plVar3"]="PointerLongVariable3"
    ["plVar4"]="PointerLongVariable4"
    ["plVar5"]="PointerLongVariable5"
    
    # 双精度变量
    ["DoubleVariable1"]="DoublePrecisionVariable1"
    ["DoubleVariable2"]="DoublePrecisionVariable2"
    ["DoubleVariable3"]="DoublePrecisionVariable3"
    ["DoubleVariable4"]="DoublePrecisionVariable4"
    ["DoubleVariable5"]="DoublePrecisionVariable5"
    
    # 浮点变量
    ["FloatVariable1"]="FloatingPointVariable1"
    ["FloatVariable2"]="FloatingPointVariable2"
    ["FloatVariable3"]="FloatingPointVariable3"
    ["FloatVariable4"]="FloatingPointVariable4"
    ["FloatVariable5"]="FloatingPointVariable5"
    ["FloatVariable6"]="FloatingPointVariable6"
    ["FloatVariable7"]="FloatingPointVariable7"
    ["FloatVariable8"]="FloatingPointVariable8"
    ["FloatVariable9"]="FloatingPointVariable9"
    ["FloatVariable10"]="FloatingPointVariable10"
    ["FloatVariable11"]="FloatingPointVariable11"
    ["FloatVariable12"]="FloatingPointVariable12"
    
    # 状态标志变量
    ["pstatusFlag1"]="StatusFlagPointer1"
    ["pstatusFlag2"]="StatusFlagPointer2"
    ["pstatusFlag3"]="StatusFlagPointer3"
    ["pstatusFlag4"]="StatusFlagPointer4"
    ["pstatusFlag5"]="StatusFlagPointer5"
    
    # 数据地址变量
    ["_DAT_180bf5250"]="SystemDataTableEndAddress"
    ["_DAT_180bf5248"]="SystemDataTableStartAddress"
    ["_DAT_180bf5270"]="SystemConfigurationEndAddress"
    ["_DAT_180bf5268"]="SystemConfigurationStartAddress"
    ["_DAT_180bf5280"]="SystemConfigurationDataAddress"
    ["_DAT_180bf5288"]="SystemConfigurationBufferSize"
    
    # 临时缓冲区变量
    ["TempBuffer"]="TemporaryBuffer"
    ["DataBuffer0"]="DataBufferPrimary"
    ["DataBuffer1"]="DataBufferSecondary"
    ["DataBuffer3"]="DataBufferTertiary"
    ["DataBuffer5"]="DataBufferQuaternary"
    
    # 栈变量
    ["auStack_88"]="StackBuffer88"
    ["puStack_98"]="StackPointer98"
    ["StackBuffer_b0"]="StackBufferB0"
    ["StackBuffer_b8"]="StackBufferB8"
    ["puStack_c8"]="StackPointerC8"
    ["puStack_c0"]="StackPointerC0"
    ["uStack_b8"]="StackVariableB8"
    ["uStack_b0"]="StackVariableB0"
    ["puStack_a8"]="StackPointerA8"
    ["pcStack_a0"]="StackCharPointerA0"
    ["uStack_98"]="StackVariable98"
    ["uStack_90"]="StackVariable90"
    ["puStack_88"]="StackPointer88"
    ["pcStack_80"]="StackCharPointer80"
    ["uStack_78"]="StackVariable78"
    ["uStack_70"]="StackVariable70"
    
    # 未知变量
    ["UNK_1809fcae8"]="UnknownSystemConfigurationA"
    ["UNK_1809fcae0"]="UnknownSystemConfigurationB"
    ["UNK_1809fcad8"]="UnknownSystemConfigurationC"
)

# 文件路径
FILE_PATH="TaleWorlds.Native/src/02_core_engine.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup"

# 执行替换
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    
    # 使用sed进行替换，只替换变量名（单词边界）
    sed -i "s/\b$old_name\b/$new_name/g" "$FILE_PATH"
    
    echo "替换: $old_name -> $new_name"
done

echo "变量名美化完成！"
echo "备份文件已创建: $FILE_PATH.backup"