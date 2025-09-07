#!/bin/bash

# 美化02_core_engine.c文件中的标签和变量名

# 创建临时脚本文件
cat > /tmp/beautify_core_engine_labels.sh << 'EOF'
#!/bin/bash

# 美化核心引擎文件中的标签和变量名

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 备份原始文件
cp "$FILE_PATH" "$FILE_PATH.backup"

# 美化标签名
sed -i 's/code_r0x000180060327:/CheckMemoryPoolBlockSize:/g' "$FILE_PATH"
sed -i 's/code_r0x0001800630e9:/CheckUnderscoreCharacter:/g' "$FILE_PATH"
sed -i 's/code_r0x000180115ca5:/ProcessUtf8BufferSizeCase:/g' "$FILE_PATH"
sed -i 's/code_r0x000180115cd0:/ProcessStringBufferSizeCase:/g' "$FILE_PATH"
sed -i 's/code_r0x0001801156d0:/ValidateStringOffset:/g' "$FILE_PATH"
sed -i 's/code_r0x000180115b8c:/CheckStackValue:/g' "$FILE_PATH"
sed -i 's/code_r0x000180115b16:/ProcessStackValue:/g' "$FILE_PATH"

# 美化变量名
sed -i 's/uStack_2c/StringOffsetCounter/g' "$FILE_PATH"
sed -i 's/fStackX_10/CalculatedFloatValue1/g' "$FILE_PATH"
sed -i 's/fStackX_14/CalculatedFloatValue2/g' "$FILE_PATH"
sed -i 's/fStack_48/NormalizedFloatX/g' "$FILE_PATH"
sed -i 's/fStack_44/NormalizedFloatY/g' "$FILE_PATH"
sed -i 's/fStack_40/ProcessedFloatValue1/g' "$FILE_PATH"
sed -i 's/fStack_3c/ProcessedFloatValue2/g' "$FILE_PATH"

echo "核心引擎文件美化完成"
EOF

# 运行脚本
chmod +x /tmp/beautify_core_engine_labels.sh
/tmp/beautify_core_engine_labels.sh

# 清理临时文件
rm -f /tmp/beautify_core_engine_labels.sh