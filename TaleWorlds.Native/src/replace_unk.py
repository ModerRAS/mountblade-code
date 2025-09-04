#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re

# 定义替换映射
replacements = {
    '&UNK_180a02c38': 'XmlFormatStringOpenTagAddress',
    '&UNK_180a02c40': 'XmlFormatStringCloseTagAddress',
    '&UNK_180a02c98': 'XmlFormatStringAttributeAddress',
    '&UNK_180a02ce0': 'XmlFormatStringCommentAddress',
    '&UNK_180a02d08': 'XmlFormatStringCDataAddress',
    '&UNK_180a02d50': 'XmlFormatStringProcessingAddress',
    '&UNK_180a02d70': 'XmlFormatStringDocumentAddress',
    '&UNK_180a02d90': 'XmlFormatStringElementAddress',
    '&UNK_180a02ed8': 'XmlFormatStringNamespaceAddress',
    '&UNK_180a02f10': 'XmlFormatStringValidationAddress',
    '&UNK_180a02f58': 'XmlFormatStringSchemaAddress',
    '&UNK_180a03004': 'XmlFormatStringResourceAddress',
    '&UNK_180a03018': 'XmlFormatStringContextAddress',
    '&UNK_180a03048': 'XmlFormatStringBufferAddress',
    '&UNK_180a03070': 'XmlFormatStringHandlerAddress',
    '&UNK_180a03098': 'XmlFormatStringParserAddress'
}

# 读取文件
with open('99_unmatched_functions.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 进行替换
for old, new in replacements.items():
    content = content.replace(old, new)

# 写回文件
with open('99_unmatched_functions.c', 'w', encoding='utf-8') as f:
    f.write(content)

print('替换完成')