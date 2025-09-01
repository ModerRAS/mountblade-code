#!/bin/bash

# 批量重命名DAT_变量为语义化名称
# 这个脚本会重命名06_utilities.c文件中的DAT_变量

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原文件
cp 06_utilities.c 06_utilities.c.backup

# 系统内存配置数据模板
sed -i 's/DAT_180d48df8/SystemMemoryConfigDataTemplateD48DF8/g' 06_utilities.c
sed -i 's/DAT_180d48e00/SystemMemoryConfigDataTemplateD48E00/g' 06_utilities.c
sed -i 's/DAT_180d48e08/SystemMemoryConfigDataTemplateD48E08/g' 06_utilities.c
sed -i 's/DAT_180c918d8/SystemMemoryConfigDataTemplateC918D8/g' 06_utilities.c
sed -i 's/DAT_180d48e10/SystemMemoryConfigDataTemplateD48E10/g' 06_utilities.c
sed -i 's/DAT_180d48e18/SystemMemoryConfigDataTemplateD48E18/g' 06_utilities.c
sed -i 's/DAT_180c918c0/SystemMemoryConfigDataTemplateC918C0/g' 06_utilities.c

# 线程管理相关数据
sed -i 's/DAT_180d49d08/ThreadManagerConfigDataD49D08/g' 06_utilities.c
sed -i 's/DAT_180d49bf0/ThreadManagerConfigDataD49BF0/g' 06_utilities.c
sed -i 's/DAT_180d49bf8/ThreadManagerConfigDataD49BF8/g' 06_utilities.c
sed -i 's/DAT_180d49c00/ThreadManagerConfigDataD49C00/g' 06_utilities.c
sed -i 's/DAT_180d49c08/ThreadManagerConfigDataD49C08/g' 06_utilities.c
sed -i 's/DAT_180c91038/WorkerThreadConfigDataC91038/g' 06_utilities.c

# 系统数据缓冲区
sed -i 's/DAT_180d49d0c/SystemDataBufferD49D0C/g' 06_utilities.c
sed -i 's/DAT_180d49d10/SystemDataBufferD49D10/g' 06_utilities.c
sed -i 's/DAT_180d49d18/SystemDataBufferD49D18/g' 06_utilities.c
sed -i 's/DAT_180d49d20/SystemDataBufferD49D20/g' 06_utilities.c
sed -i 's/DAT_180d49d28/SystemDataBufferD49D28/g' 06_utilities.c
sed -i 's/DAT_180d49d30/SystemDataBufferD49D30/g' 06_utilities.c
sed -i 's/DAT_180d49d38/SystemDataBufferD49D38/g' 06_utilities.c
sed -i 's/DAT_180d49d40/SystemDataBufferD49D40/g' 06_utilities.c
sed -i 's/DAT_180d49d48/SystemDataBufferD49D48/g' 06_utilities.c

echo "DAT_变量重命名完成"