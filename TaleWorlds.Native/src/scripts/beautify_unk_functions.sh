#!/bin/bash

# 美化99_unmatched_functions.c文件中的UNK_函数
# 这个脚本将批量重命名UNK_函数为更有意义的名称

# 创建临时脚本文件
cat > /tmp/beautify_unk_functions.sh << 'EOF'
#!/bin/bash

# 进入源代码目录
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原文件
cp 99_unmatched_functions.c 99_unmatched_functions.c.backup

# 系统相关函数重命名
sed -i 's/undefined UNK_1809fd150;/void* SystemMemoryAllocator;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd160;/void* SystemMemoryDeallocator;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd170;/void* SystemMemoryManager;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd180;/void* SystemMemoryPool;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd190;/void* SystemMemoryHeap;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd1a0;/void* SystemMemoryStack;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd1b0;/void* SystemMemoryCache;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd1c0;/void* SystemMemoryBuffer;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd1d8;/void* SystemMemoryPage;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd1f0;/void* SystemMemoryBlock;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd208;/void* SystemMemorySegment;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd220;/void* SystemMemoryRegion;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd238;/void* SystemMemoryArea;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd250;/void* SystemMemoryZone;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd260;/void* SystemMemoryPartition;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd270;/void* SystemMemoryDivision;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd288;/void* SystemMemoryUnit;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd298;/void* SystemMemoryCell;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd2a8;/void* SystemMemorySlot;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd2c0;/void* SystemMemoryEntry;/g' 99_unmatched_functions.c

# 系统表相关函数重命名
sed -i 's/undefined UNK_1809fd318;/void* SystemTableManager;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd328;/void* SystemTableIndex;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd340;/void* SystemTableEntry;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd350;/void* SystemTableRecord;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd368;/void* SystemTableRow;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd380;/void* SystemTableColumn;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd398;/void* SystemTableField;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd3c8;/void* SystemTableHeader;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd3f0;/void* SystemTableFooter;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd4b8;/void* SystemTableBody;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_1809fd4d8;/void* SystemTableContent;/g' 99_unmatched_functions.c

# 配置相关函数重命名
sed -i 's/undefined UNK_1809fe220;/void* SystemConfigurationManager;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_180a00340;/void* SystemConfigurationLoader;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_180a00350;/void* SystemConfigurationSaver;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_180a00368;/void* SystemConfigurationValidator;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_180a00420;/void* SystemConfigurationUpdater;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_180a00450;/void* SystemConfigurationResetter;/g' 99_unmatched_functions.c

echo "函数重命名完成"
EOF

# 使脚本可执行
chmod +x /tmp/beautify_unk_functions.sh

# 执行脚本
/tmp/beautify_unk_functions.sh

# 清理临时文件
rm -f /tmp/beautify_unk_functions.sh

echo "99_unmatched_functions.c 文件美化完成"