#!/bin/bash

# 脚本：批量替换ExceptionList为RenderSystemExceptionList
# 用于美化03_rendering.c文件中的变量名

# 创建临时脚本文件
cat > /tmp/replace_exception_list.sh << 'EOF'
#!/bin/bash

# 使用sed命令批量替换ExceptionList为RenderSystemExceptionList
# 但跳过已经定义的行
sed -i '/^#define RenderSystemExceptionList ExceptionList$/! s/ExceptionList/RenderSystemExceptionList/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "ExceptionList 替换完成"
EOF

# 给脚本执行权限
chmod +x /tmp/replace_exception_list.sh

# 执行脚本
/tmp/replace_exception_list.sh

# 清理临时文件
rm -f /tmp/replace_exception_list.sh