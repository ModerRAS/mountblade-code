#!/bin/bash

# 美化05_networking.c文件中的线程栈长整型变量名

echo "开始美化05_networking.c文件中的线程栈长整型变量名..."

# 替换线程栈长整型变量
sed -i 's/threadStackLong70/thread_socket_context/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c

echo "线程栈长整型变量美化完成！"
echo "请检查文件内容，确保所有替换都是正确的。"