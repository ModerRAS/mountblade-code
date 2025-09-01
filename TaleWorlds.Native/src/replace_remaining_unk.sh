#!/bin/bash

# 继续美化01_initialization.c文件中的剩余UNK_变量
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 系统对象相关
sed -i 's/&UNK_1809fe100/&SystemControllerObjectA/g' 01_initialization.c
sed -i 's/&UNK_180a21690/&SystemMemoryManagerA/g' 01_initialization.c
sed -i 's/&UNK_180a21720/&SystemMemoryManagerB/g' 01_initialization.c
sed -i 's/&UNK_18098bdc8/&SystemMemoryManagerC/g' 01_initialization.c
sed -i 's/&UNK_18098bd40/&SystemMemoryManagerD/g' 01_initialization.c

# 系统数据缓冲区
sed -i 's/&UNK_18098bab0/&SystemDataBufferA/g' 01_initialization.c
sed -i 's/&UNK_18098bc80/&SystemDataBufferB/g' 01_initialization.c
sed -i 's/&UNK_18098bac8/&SystemDataBufferC/g' 01_initialization.c

# 系统指针数组
sed -i 's/&UNK_18098bb60/&SystemPointerArrayA/g' 01_initialization.c
sed -i 's/&UNK_18098bb88/&SystemPointerArrayB/g' 01_initialization.c

# 系统内存区域
sed -i 's/&UNK_18098bc48/&SystemMemoryRegionC/g' 01_initialization.c
sed -i 's/&UNK_18098bb30/&SystemStackBufferA/g' 01_initialization.c

# 系统虚拟表和配置
sed -i 's/&UNK_18097e888/&SystemVirtualTableA/g' 01_initialization.c
sed -i 's/&UNK_1809fd0a0/&SystemConfigurationA/g' 01_initialization.c

# 系统管理器指针
sed -i 's/&UNK_1809ff2f8/&SystemManagerPointerA/g' 01_initialization.c
sed -i 's/&UNK_1809ff3f8/&SystemControllerPointerA/g' 01_initialization.c
sed -i 's/&UNK_1809fee70/&SystemSubManagerPointerA/g' 01_initialization.c

# 系统内存区域
sed -i 's/&UNK_180a3c110/&SystemMemoryRegionA/g' 01_initialization.c
sed -i 's/&UNK_180a3c138/&SystemMemoryRegionB/g' 01_initialization.c

# 系统库和函数名
sed -i 's/&UNK_180a3c428/&SystemLibraryNameA/g' 01_initialization.c
sed -i 's/&UNK_180a3c410/&SystemFunctionNameA/g' 01_initialization.c

# 系统信号量配置
sed -i 's/&UNK_180a3c090/&SystemSemaphoreConfigA/g' 01_initialization.c

echo "剩余UNK_变量替换完成"