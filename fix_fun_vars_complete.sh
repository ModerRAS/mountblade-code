#!/bin/bash

# FUN_变量标记完整清理脚本
# 用于处理代码中所有类型的FUN_标记

echo "开始完整FUN_标记清理..."

# 处理函数指针赋值中的FUN_标记
echo "处理函数指针赋值中的FUN_标记..."
find . -name "*.c" -o -name "*.h" | xargs sed -i 's/FUN_180\([0-9a-fA-F]*\)/function_\1/g'

# 处理数组赋值中的FUN_标记
echo "处理数组赋值中的FUN_标记..."
find . -name "*.c" -o -name "*.h" | xargs sed -i 's/\[\] = FUN_180\([0-9a-fA-F]*\)/[] = function_\1/g'

# 处理变量赋值中的FUN_标记
echo "处理变量赋值中的FUN_标记..."
find . -name "*.c" -o -name "*.h" | xargs sed -i 's/ = FUN_180\([0-9a-fA-F]*\)/ = function_\1/g'

# 处理参数传递中的FUN_标记
echo "处理参数传递中的FUN_标记..."
find . -name "*.c" -o -name "*.h" | xargs sed -i 's/, FUN_180\([0-9a-fA-F]*\)/, function_\1/g'

# 处理函数调用参数中的FUN_标记
echo "处理函数调用参数中的FUN_标记..."
find . -name "*.c" -o -name "*.h" | xargs sed -i 's/(FUN_180\([0-9a-fA-F]*\)/(function_\1/g'

echo "完整FUN_标记清理完成！"
echo "验证清理结果..."