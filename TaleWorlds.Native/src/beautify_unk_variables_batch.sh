#!/bin/bash

# 美化99_unmatched_functions.c中的UNK_变量
# 将UNK_180开头的变量替换为语义化名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
TEMP_FILE="/tmp/beautify_unk_variables.tmp"

# 创建UNK_变量美化的sed命令
cat > /tmp/sed_unk_commands.sed << 'EOF'
# 美化UNK_变量 - 系统配置和数据变量
s/undefined UNK_180a19478;/undefined SystemConfigurationData78;/g
s/undefined UNK_180993558;/undefined SystemResourceManagementData58;/g
s/undefined UNK_180991de8;/undefined SystemMemoryManagementDataE8;/g
s/undefined UNK_180a19468;/undefined SystemConfigurationData68;/g
s/undefined UNK_180a19490;/undefined SystemConfigurationData90;/g
s/undefined UNK_180a19528;/undefined SystemResourceData28;/g
s/undefined UNK_180a3c301;/undefined SystemStatusData301;/g
s/undefined UNK_18027b560;/undefined SystemMemoryData560;/g
s/undefined UNK_180a19500;/undefined SystemResourceData00;/g
s/undefined UNK_180a19510;/undefined SystemResourceData10;/g
s/undefined UNK_180a19770;/undefined SystemSystemData770;/g
s/undefined UNK_180a19598;/undefined SystemResourceData98;/g
s/undefined UNK_180a195a8;/undefined SystemResourceDataA8;/g
s/undefined UNK_180a195b8;/undefined SystemResourceDataB8;/g
s/undefined UNK_180a195d0;/undefined SystemResourceDataD0;/g
s/undefined UNK_180a195e0;/undefined SystemResourceDataE0;/g
s/undefined UNK_180a195f8;/undefined SystemResourceDataF8;/g
s/undefined UNK_180a19608;/undefined SystemResourceData108;/g
s/undefined UNK_180a19620;/undefined SystemResourceData120;/g
s/undefined UNK_180a19648;/undefined SystemResourceData148;/g
s/undefined UNK_180a19658;/undefined SystemResourceData158;/g
s/undefined UNK_180a19660;/undefined SystemResourceData160;/g
s/undefined UNK_180a19638;/undefined SystemResourceData138;/g
s/undefined UNK_180a19680;/undefined SystemResourceData180;/g
s/undefined UNK_180a19690;/undefined SystemResourceData190;/g
s/undefined UNK_180a196a0;/undefined SystemResourceData1A0;/g
s/undefined UNK_180a196b0;/undefined SystemResourceData1B0;/g
s/undefined UNK_180a196c0;/undefined SystemResourceData1C0;/g
s/undefined UNK_180a196e0;/undefined SystemResourceData1E0;/g
s/undefined UNK_180a196f8;/undefined SystemResourceData1F8;/g
s/undefined UNK_180a19708;/undefined SystemResourceData208;/g
s/undefined UNK_180a19720;/undefined SystemResourceData220;/g
s/undefined UNK_180a19740;/undefined SystemResourceData240;/g
s/undefined UNK_180a19750;/undefined SystemResourceData250;/g
s/undefined UNK_180a19760;/undefined SystemResourceData260;/g
s/undefined UNK_180a199c8;/undefined SystemResourceData9C8;/g
s/undefined UNK_180a19ac8;/undefined SystemResourceDataAC8;/g
s/undefined UNK_180a19af8;/undefined SystemResourceDataAF8;/g
s/undefined UNK_180a015a8;/undefined SystemResourceData5A8;/g
s/undefined UNK_180a19c84;/undefined SystemResourceDataC84;/g
s/undefined UNK_180a19c00;/undefined SystemResourceDataC00;/g
s/undefined UNK_180a19c78;/undefined SystemResourceDataC78;/g
s/undefined UNK_180a19d78;/undefined SystemResourceDataD78;/g
s/undefined UNK_180a19c8c;/undefined SystemResourceDataC8C;/g
s/undefined UNK_180a19c98;/undefined SystemResourceDataC98;/g
s/undefined UNK_180a19ca8;/undefined SystemResourceDataCA8;/g
s/undefined UNK_180a19cb8;/undefined SystemResourceDataCB8;/g
s/undefined UNK_180a19d30;/undefined SystemResourceDataD30;/g
s/undefined UNK_180a19cd0;/undefined SystemResourceDataCD0;/g

# 美化SystemPointer变量
s/SystemPointer UnknownDataPointer180a23138;/SystemPointer SystemDataPointer23138;/g
s/SystemPointer UnknownDataPointer1803aebf0;/SystemPointer SystemDataPointerAEBF0;/g
s/SystemPointer UnknownDataPointer180a037b0;/SystemPointer SystemDataPointer037B0;/g
s/SystemPointer UnknownDataPointer180a1ac50;/SystemPointer SystemDataPointer1AC50;/g
s/SystemPointer UnknownDataPointer180a230e0;/SystemPointer SystemDataPointer230E0;/g
s/SystemPointer UnknownDataPointer180a23378;/SystemPointer SystemDataPointer23378;/g
s/SystemPointer UnknownDataPointer1803ba1e0;/SystemPointer SystemDataPointerBA1E0;/g
s/SystemPointer UnknownDataPointer1803ba240;/SystemPointer SystemDataPointerBA240;/g

# 美化DAT_变量
s/undefined DAT_180a09e20;/undefined SystemDataTableE20;/g
s/undefined DAT_180d49678;/undefined SystemDataTable678;/g

# 美化FUN_函数声明
s/undefined FUN_1803aec00;/undefined InitializeSystemComponents;/g
EOF

# 应用sed命令
sed -f /tmp/sed_unk_commands.sed "$INPUT_FILE" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$INPUT_FILE"

# 清理临时文件
rm -f /tmp/sed_unk_commands.sed

echo "99_unmatched_functions.c中的UNK_变量美化完成"