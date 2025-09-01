#!/bin/bash

# 批量美化99_unmatched_functions.c中的UNK_变量
# 这个脚本将UNK_变量重命名为语义化的名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 使用sed进行批量替换
sed -e 's/undefined UNK_180a058c8;/undefined XmlParserInternalState058c8;              \/\/ XML解析器内部状态058c8/g' \
    -e 's/undefined UNK_180a058e0;/undefined XmlParserMemoryBuffer058e0;               \/\/ XML解析器内存缓冲区058e0/g' \
    -e 's/undefined UNK_180a058f0;/undefined XmlParserStreamPosition058f0;             \/\/ XML解析器流位置058f0/g' \
    -e 's/undefined UNK_180a05900;/undefined XmlParserCurrentToken05900;              \/\/ XML解析器当前令牌05900/g' \
    -e 's/undefined UNK_180a05918;/undefined XmlParserAttributeList05918;             \/\/ XML解析器属性列表05918/g' \
    -e 's/undefined UNK_180a05928;/undefined XmlParserNamespaceStack05928;             \/\/ XML解析器命名空间堆栈05928/g' \
    -e 's/undefined UNK_180a05940;/undefined XmlParserElementStack05940;              \/\/ XML解析器元素堆栈05940/g' \
    -e 's/undefined UNK_180a05950;/undefined XmlParserTextContent05950;               \/\/ XML解析器文本内容05950/g' \
    -e 's/undefined UNK_180a05960;/undefined XmlParserCommentBuffer05960;             \/\/ XML解析器注释缓冲区05960/g' \
    -e 's/undefined UNK_180a05970;/undefined XmlParserCDataSection05970;              \/\/ XML解析器CData节05970/g' \
    "$INPUT_FILE" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "批量替换完成"