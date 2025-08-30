#!/bin/bash

# 美化脚本：将硬编码值替换为语义化常量名称
# 用于00_data_definitions.h文件的语义化美化工作

# 备份原始文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h.backup

# 替换位掩码常量名称
sed -i 's/SYSTEM_BIT_MASK_0x01/SYSTEM_BIT_MASK_BIT_0/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x02/SYSTEM_BIT_MASK_BIT_1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x04/SYSTEM_BIT_MASK_BIT_2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x08/SYSTEM_BIT_MASK_BIT_3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x10/SYSTEM_BIT_MASK_BIT_4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x20/SYSTEM_BIT_MASK_BIT_5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x40/SYSTEM_BIT_MASK_BIT_6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x80/SYSTEM_BIT_MASK_BIT_7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h

# 替换字节级位掩码常量名称
sed -i 's/SYSTEM_BIT_MASK_0x100/SYSTEM_BIT_MASK_BYTE_0/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x200/SYSTEM_BIT_MASK_BYTE_1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x400/SYSTEM_BIT_MASK_BYTE_2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x800/SYSTEM_BIT_MASK_BYTE_3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h

# 替换页级位掩码常量名称
sed -i 's/SYSTEM_BIT_MASK_0x1000/SYSTEM_BIT_MASK_PAGE_0/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x2000/SYSTEM_BIT_MASK_PAGE_1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x4000/SYSTEM_BIT_MASK_PAGE_2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x8000/SYSTEM_BIT_MASK_PAGE_3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h

# 替换段级位掩码常量名称
sed -i 's/SYSTEM_BIT_MASK_0x10000/SYSTEM_BIT_MASK_SEGMENT_0/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x20000/SYSTEM_BIT_MASK_SEGMENT_1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x40000/SYSTEM_BIT_MASK_SEGMENT_2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x80000/SYSTEM_BIT_MASK_SEGMENT_3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h

# 替换兆级位掩码常量名称
sed -i 's/SYSTEM_BIT_MASK_0x100000/SYSTEM_BIT_MASK_MEGA_0/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x200000/SYSTEM_BIT_MASK_MEGA_1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x400000/SYSTEM_BIT_MASK_MEGA_2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x800000/SYSTEM_BIT_MASK_MEGA_3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h

# 替换超级位掩码常量名称
sed -i 's/SYSTEM_BIT_MASK_0x1000000/SYSTEM_BIT_MASK_SUPER_0/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x2000000/SYSTEM_BIT_MASK_SUPER_1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x4000000/SYSTEM_BIT_MASK_SUPER_2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h
sed -i 's/SYSTEM_BIT_MASK_0x8000000/SYSTEM_BIT_MASK_SUPER_3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/00_data_definitions.h

echo "位掩码常量语义化美化完成"