#!/bin/bash

# FUN_变量标记清理脚本
# 用于将代码中剩余的FUN_标记替换为语义化名称

echo "开始FUN_标记清理..."

# 首先处理函数定义中的FUN_标记
echo "处理函数定义中的FUN_标记..."
find . -name "*.c" -o -name "*.h" | xargs sed -i 's/^void FUN_180\([0-9a-fA-F]*\)/void function_\1/g'

# 处理goto标签中的FUN_标记
echo "处理goto标签中的FUN_标记..."
find . -name "*.c" -o -name "*.h" | xargs sed -i 's/goto FUN_180\([0-9a-fA-F]*\)/goto label_\1/g'
find . -name "*.c" -o -name "*.h" | xargs sed -i 's/^FUN_180\([0-9a-fA-F]*\):/label_\1:/g'

# 处理函数调用中的FUN_标记
echo "处理函数调用中的FUN_标记..."
find . -name "*.c" -o -name "*.h" | xargs sed -i 's/FUN_180\([0-9a-fA-F]*\)(/function_\1(/g'

# 处理函数指针中的FUN_标记
echo "处理函数指针中的FUN_标记..."
find . -name "*.c" -o -name "*.h" | xargs sed -i 's/(\&FUN_180\([0-9a-fA-F]*\))/(\&function_\1)/g'
find . -name "*.c" -o -name "*.h" | xargs sed -i 's/(FUN_180\([0-9a-fA-F]*\))/(function_\1)/g'

echo "FUN_标记清理完成！"
echo "验证清理结果..."