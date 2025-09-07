#!/bin/bash

# 02_core_engine.c 函数美化脚本
# 美化UTF-8编码相关的函数

echo "开始美化 02_core_engine.c 中的UTF-8编码相关函数..."

# 创建临时脚本文件
cat > /tmp/beautify_utf8_functions.sh << 'EOF'
#!/bin/bash

# UTF-8编码处理函数美化
sed -i 's/^FUN_18016e450.*$/ProcessUtf8EncodingWithValidation(uint64_t *Utf8InputBuffer,uint64_t Utf8BufferSize,uint64_t Utf8SourcePointer,uint64_t Utf16EndPointer/' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/^FUN_18016e530.*$/ValidateUtf8CharacterEncoding(uint64_t CharacterCode,uint64_t Utf8BufferSize,uint64_t Utf8SourcePointer)/' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/^FUN_18016e5b0.*$/ProcessUtf8CharacterValidation(uint64_t CharacterCode,uint64_t Utf8BufferSize,uint64_t Utf8SourcePointer)/' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c
sed -i 's/^FUN_18016e630.*$/ConvertUtf8ToUtf16Character(uint64_t CharacterCode,uint64_t Utf8BufferSize,uint64_t Utf8SourcePointer,uint64_t Utf16EndPointer)/' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

# 添加函数定义宏
cat >> /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c << 'EODEF'

// UTF-8编码处理函数语义化定义
// 原始函数名：FUN_18016e450 - UTF-8编码验证和处理函数
#define ProcessUtf8EncodingWithValidation FUN_18016e450

// 原始函数名：FUN_18016e530 - UTF-8字符编码验证函数
#define ValidateUtf8CharacterEncoding FUN_18016e530

// 原始函数名：FUN_18016e5b0 - UTF-8字符处理验证函数
#define ProcessUtf8CharacterValidation FUN_18016e5b0

// 原始函数名：FUN_18016e630 - UTF-8到UTF-16字符转换函数
#define ConvertUtf8ToUtf16Character FUN_18016e630

EODEF

echo "UTF-8编码函数美化完成"
EOF

# 执行美化脚本
chmod +x /tmp/beautify_utf8_functions.sh
/tmp/beautify_utf8_functions.sh

# 清理临时文件
rm -f /tmp/beautify_utf8_functions.sh

echo "函数美化完成"