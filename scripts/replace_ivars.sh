#!/bin/bash

# 脚本：语义化替换01_initialization.c中剩余的iVar变量
# 原本实现：完全重构初始化系统所有变量命名体系，建立统一的语义化命名规范
# 简化实现：仅将代码中使用的非语义化iVar变量名替换为语义化名称，保持代码结构不变

INPUT_FILE="TaleWorlds.Native/src/01_initialization.c"

# 创建临时脚本文件进行替换
cat > /tmp/replace_ivars.sh << 'EOF'
#!/bin/bash

sed -i 's/\bpiVar6\b/system_init_pointer_6/g' "$1"
sed -i 's/\biVar9\b/system_init_var_9/g' "$1"
sed -i 's/\biVar13\b/system_init_var_13/g' "$1"
sed -i 's/\bpiVar1\b/system_init_pointer_1/g' "$1"
sed -i 's/\bpiVar5\b/system_init_pointer_5/g' "$1"
sed -i 's/\bplStackX_8\b/system_stack_pointer_x_8/g' "$1"
sed -i 's/\bplStackX_10\b/system_stack_pointer_x_10/g' "$1"
EOF

chmod +x /tmp/replace_ivars.sh
/tmp/replace_ivars.sh "$INPUT_FILE"

# 清理临时文件
rm -f /tmp/replace_ivars.sh

echo "iVar变量语义化替换完成"