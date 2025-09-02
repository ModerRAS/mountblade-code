#!/bin/bash

# 美化网络文件中的变量名
# 将栈变量名改为语义化名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件
cp 05_networking.c 05_networking.c.backup

# 基本栈变量替换
sed -i 's/lStack_\([0-9a-fA-F]\+\)/LocalStackVariable\1/g' 05_networking.c
sed -i 's/uStack_\([0-9a-fA-F]\+\)/UnsignedStackVariable\1/g' 05_networking.c
sed -i 's/pStack_\([0-9a-fA-F]\+\)/PointerStackVariable\1/g' 05_networking.c
sed -i 's/plStack_\([0-9a-fA-F]\+\)/PointerLongStackVariable\1/g' 05_networking.c
sed -i 's/puStack_\([0-9a-fA-F]\+\)/PointerUnsignedStackVariable\1/g' 05_networking.c
sed -i 's/iStack_\([0-9a-fA-F]\+\)/IntegerStackVariable\1/g' 05_networking.c
sed -i 's/pbStack_\([0-9a-fA-F]\+\)/PointerByteStackVariable\1/g' 05_networking.c
sed -i 's/ppStack_\([0-9a-fA-F]\+\)/PointerPointerStackVariable\1/g' 05_networking.c
sed -i 's/auStack_\([0-9a-fA-F]\+\)/ArrayUnsignedStackVariable\1/g' 05_networking.c
sed -i 's/alStack_\([0-9a-fA-F]\+\)/ArrayLongStackVariable\1/g' 05_networking.c

# 特定变量替换
sed -i 's/dVar\([0-9]\+\)/DoubleVariable\1/g' 05_networking.c
sed -i 's/iVar\([0-9]\+\)/IntegerVariable\1/g' 05_networking.c
sed -i 's/uVar\([0-9]\+\)/UnsignedVariable\1/g' 05_networking.c
sed -i 's/bVar\([0-9]\+\)/BooleanVariable\1/g' 05_networking.c
sed -i 's/sVar\([0-9]\+\)/ShortVariable\1/g' 05_networking.c
sed -i 's/pbVar\([0-9]\+\)/PointerByteVariable\1/g' 05_networking.c
sed -i 's/piVar\([0-9]\+\)/PointerIntegerVariable\1/g' 05_networking.c
sed -i 's/plVar\([0-9]\+\)/PointerLongVariable\1/g' 05_networking.c
sed -i 's/ppVar\([0-9]\+\)/PointerPointerVariable\1/g' 05_networking.c
sed -i 's/puVar\([0-9]\+\)/PointerUnsignedVariable\1/g' 05_networking.c

# 特殊变量替换
sed -i 's/localStackVariable/NetworkStackContext/g' 05_networking.c
sed -i 's/stackVariable/NetworkContextData/g' 05_networking.c
sed -i 's/stackVariable110/NetworkValidationData/g' 05_networking.c
sed -i 's/stackVariableF8/NetworkSecurityBuffer/g' 05_networking.c
sed -i 's/stackVariableF0/NetworkEncryptionBuffer/g' 05_networking.c
sed -i 's/stackVariable90/NetworkConnectionInfo/g' 05_networking.c

# 位字段变量替换
sed -i 's/\._2_2_\(\|[^a-zA-Z]\)/._low16Bits_\1/g' 05_networking.c
sed -i 's/\._4_1_\(\|[^a-zA-Z]\)/._byte4_\1/g' 05_networking.c
sed -i 's/\._6_2_\(\|[^a-zA-Z]\)/._middle16Bits_\1/g' 05_networking.c
sed -i 's/\._7_1_\(\|[^a-zA-Z]\)/._byte7_\1/g' 05_networking.c
sed -i 's/\._1_1_\(\|[^a-zA-Z]\)/._byte1_\1/g' 05_networking.c
sed -i 's/\._1_7_\(\|[^a-zA-Z]\)/._high64Bits_\1/g' 05_networking.c
sed -i 's/\._12_4_\(\|[^a-zA-Z]\)/._high32Bits_\1/g' 05_networking.c
sed -i 's/\._14_2_\(\|[^a-zA-Z]\)/._top16Bits_\1/g' 05_networking.c
sed -i 's/\._11_4_\(\|[^a-zA-Z]\)/._validationBits_\1/g' 05_networking.c
sed -i 's/\._8_4_\(\|[^a-zA-Z]\)/._low32Bits_\1/g' 05_networking.c
sed -i 's/\._4_2_\(\|[^a-zA-Z]\)/._middleLow16Bits_\1/g' 05_networking.c
sed -i 's/\._6_1_\(\|[^a-zA-Z]\)/._byte6_\1/g' 05_networking.c
sed -i 's/\._5_1_\(\|[^a-zA-Z]\)/._byte5_\1/g' 05_networking.c
sed -i 's/\._3_1_\(\|[^a-zA-Z]\)/._byte3_\1/g' 05_networking.c
sed -i 's/\._2_1_\(\|[^a-zA-Z]\)/._byte2_\1/g' 05_networking.c

# undefined类型替换
sed -i 's/undefined\([0-9]*\)\(\|[^a-zA-Z]\)/VoidPointer\1\2/g' 05_networking.c

echo "变量名美化完成"