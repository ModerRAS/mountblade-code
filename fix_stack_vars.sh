#!/bin/bash

# pretty-code栈变量优化清理脚本
# 用于清理代码库中剩余的栈变量标记

echo "开始清理栈变量标记..."

# 统计处理前的数量
before_count=$(grep -r "in_stack_0x\|uStack00000000" . --include="*.c" --include="*.h" | wc -l)
echo "处理前栈变量标记数量: $before_count"

# 清理十六进制地址格式的栈变量
# in_stack_0x00000050 -> local_stack_50
find . -name "*.c" -o -name "*.h" | xargs sed -i 's/in_stack_0x000000\([0-9a-fA-F]\{1,2\}\)/local_stack_\1/g'
find . -name "*.c" -o -name "*.h" | xargs sed -i 's/in_stack_0x00000\([0-9a-fA-F]\{1,3\}\)/local_stack_\1/g'
find . -name "*.c" -o -name "*.h" | xargs sed -i 's/in_stack_0x0000\([0-9a-fA-F]\{1,4\}\)/local_stack_\1/g'

# uStack00000000000000b8 -> local_stack_b8
find . -name "*.c" -o -name "*.h" | xargs sed -i 's/uStack00000000000000\([0-9a-fA-F]\{1,2\}\)/local_stack_\1/g'
find . -name "*.c" -o -name "*.h" | xargs sed -i 's/uStack000000000000\([0-9a-fA-F]\{1,3\}\)/local_stack_\1/g'
find . -name "*.c" -o -name "*.h" | xargs sed -i 's/uStack0000000000\([0-9a-fA-F]\{1,4\}\)/local_stack_\1/g'
find . -name "*.c" -o -name "*.h" | xargs sed -i 's/uStack00000000\([0-9a-fA-F]\{1,6\}\)/local_stack_\1/g'

# 统计处理后的数量
after_count=$(grep -r "in_stack_0x\|uStack00000000" . --include="*.c" --include="*.h" | wc -l)
echo "处理后栈变量标记数量: $after_count"

# 计算清理数量
cleaned_count=$((before_count - after_count))
echo "已清理栈变量标记数量: $cleaned_count"

echo "栈变量标记清理完成！"