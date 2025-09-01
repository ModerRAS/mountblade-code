#!/bin/bash

# 批量替换06_utilities.c中的DAT_变量名为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 06_utilities.c 06_utilities.c.backup

# 替换DAT_变量名为系统内存管理相关的语义化名称
sed -i 's/DAT_180bfaef0/SystemMemoryConfigDataTemplateM/g' 06_utilities.c
sed -i 's/DAT_180bfaef8/SystemMemoryConfigDataTemplateN/g' 06_utilities.c
sed -i 's/DAT_180bfaf00/SystemMemoryConfigDataTemplateO/g' 06_utilities.c
sed -i 's/DAT_180bfaf08/SystemMemoryConfigDataTemplateP/g' 06_utilities.c
sed -i 's/DAT_180bfb310/SystemMemoryConfigDataTemplateQ/g' 06_utilities.c
sed -i 's/DAT_180bfb318/SystemMemoryConfigDataTemplateR/g' 06_utilities.c
sed -i 's/DAT_180bfb320/SystemMemoryConfigDataTemplateS/g' 06_utilities.c
sed -i 's/DAT_180bfb328/SystemMemoryConfigDataTemplateT/g' 06_utilities.c
sed -i 's/DAT_180bfb730/SystemMemoryConfigDataTemplateU/g' 06_utilities.c
sed -i 's/DAT_180bfb738/SystemMemoryConfigDataTemplateV/g' 06_utilities.c
sed -i 's/DAT_180bfb740/SystemMemoryConfigDataTemplateW/g' 06_utilities.c
sed -i 's/DAT_180bfb748/SystemMemoryConfigDataTemplateX/g' 06_utilities.c
sed -i 's/DAT_180c9246c/SystemConfigurationDataTemplate/g' 06_utilities.c
sed -i 's/DAT_180c92490/SystemEnvironmentDataTemplate/g' 06_utilities.c
sed -i 's/DAT_180c92480/SystemParametersDataTemplate/g' 06_utilities.c
sed -i 's/DAT_180c924ac/SystemMemoryManagerDataTemplate/g' 06_utilities.c
sed -i 's/DAT_180c924b0/SystemResourcesDataTemplate/g' 06_utilities.c
sed -i 's/DAT_180a2c1d0/SystemAllocationDataTemplate/g' 06_utilities.c

echo "DAT_变量替换完成"