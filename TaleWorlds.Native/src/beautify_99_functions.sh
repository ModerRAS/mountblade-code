#!/bin/bash

# 美化 99_unmatched_functions.c 文件的脚本
# 系统地替换变量名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建临时文件来存储替换规则
cat > /tmp/replacement_rules.txt << 'EOF'
# 通用变量替换规则
charValue=>CurrentChar
charFlag=>ProcessFlag
bytePointer=>DataBufferPointer
charPointer=>StringPointer
uintValue1=>AttributeValue1
uintValue2=>AttributeValue2
uintValue3=>AttributeValue3
HasQuotes=>HasQuotedString
stringStart1=>SourceStringStart
stringStart2=>TargetStringStart
uintPointer=>AttributePointer
bytePointer2=>ByteBufferPointer
stringLength1=>SourceStringLength
stringLength2=>TargetStringLength
combinedValue=>CombinedAttributeValue
dataValue1=>AttributeOffset1
resultValue=>ProcessResult
dataValue2=>AttributeOffset2
dataValue3=>AttributeOffset3
bytePointer3=>CharDataPointer
dataValue4=>ContextOffset
dataPointer=>AttributeDataPointer
stackValue1=>StackOffset1
stackValue2=>StackOffset2
stackBuffer1=>ProcessingBuffer1
stackBuffer2=>ProcessingBuffer2
unaff_R12=>ContextPointer
XmlOutputBufferPtr=>OutputBufferPointer
CurrentChar=>ProcessedChar
EOF

# 逐行处理替换规则
while IFS='=>' read -r old_var new_var; do
    # 跳过注释行和空行
    [[ "$old_var" =~ ^#.*$ ]] && continue
    [[ -z "$old_var" ]] && continue
    
    echo "替换: $old_var -> $new_var"
    
    # 使用 sed 进行替换，添加单词边界
    sed -i "s/\b$old_var\b/$new_var/g" 99_unmatched_functions.c
done < /tmp/replacement_rules.txt

echo "变量替换完成"

# 清理临时文件
rm -f /tmp/replacement_rules.txt