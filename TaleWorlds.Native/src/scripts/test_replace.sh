# 简化的变量替换命令 - 只处理前10个变量

# 替换前10个UNK_变量
echo "开始替换变量名..."

sed -i 's/UNK_1809fda58/SystemConfigDataFieldF/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
echo "已替换: UNK_1809fda58 -> SystemConfigDataFieldF"

sed -i 's/UNK_1809fda80/SystemConfigDataFieldG/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
echo "已替换: UNK_1809fda80 -> SystemConfigDataFieldG"

sed -i 's/UNK_1809fdaa8/SystemConfigDataFieldH/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
echo "已替换: UNK_1809fdaa8 -> SystemConfigDataFieldH"

sed -i 's/UNK_1809fdad0/SystemConfigDataFieldI/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
echo "已替换: UNK_1809fdad0 -> SystemConfigDataFieldI"

sed -i 's/UNK_1809fdaf8/SystemConfigDataFieldJ/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
echo "已替换: UNK_1809fdaf8 -> SystemConfigDataFieldJ"

sed -i 's/UNK_1809fdb20/SystemConfigDataFieldK/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
echo "已替换: UNK_1809fdb20 -> SystemConfigDataFieldK"

sed -i 's/UNK_1809fdcd8/SystemStringConstantA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
echo "已替换: UNK_1809fdcd8 -> SystemStringConstantA"

sed -i 's/UNK_1809fdb40/SystemStringConstantB/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
echo "已替换: UNK_1809fdb40 -> SystemStringConstantB"

sed -i 's/UNK_1809fdbd0/SystemMemoryConstantA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
echo "已替换: UNK_1809fdbd0 -> SystemMemoryConstantA"

sed -i 's/UNK_180058ee0/SystemFunctionPointerA/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
echo "已替换: UNK_180058ee0 -> SystemFunctionPointerA"

echo "前10个变量替换完成！"