#!/bin/bash

# 查找DAT_变量并创建美化脚本
echo "正在查找DAT_变量..."

# 查找前20个DAT_变量
grep -n "DAT_180" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c | head -20 > /tmp/dat_variables.txt

if [ -s /tmp/dat_variables.txt ]; then
    echo "找到DAT_变量，开始创建美化脚本..."
    
    # 创建美化脚本
    cat > /tmp/beautify_dat_variables.sh << 'EOF'
#!/bin/bash

# DAT_变量美化脚本
# 美化06_utilities.c中的DAT_变量

echo "开始美化DAT_变量..."

# 美化常见的DAT_变量为语义化名称
sed -i 's/DAT_18008fbc0/SystemInitializationFunctionAddress/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_18008fa70/SystemConfigurationDataAddress/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180090000/SystemMemoryBaseAddress/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180090008/SystemMemorySizeAddress/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180090010/SystemExceptionTableAddress/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180090018/SystemResourceTableAddress/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180090020/SystemContextDataTableAddress/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180090028/SystemFunctionTableAddress/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180090030/SystemCallbackTableAddress/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DAT_180090038/SystemHandlerTableAddress/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "DAT_变量美化完成"
EOF

    chmod +x /tmp/beautify_dat_variables.sh
    /tmp/beautify_dat_variables.sh
    
    # 清理临时文件
    rm -f /tmp/dat_variables.txt /tmp/beautify_dat_variables.sh
    
    echo "DAT_变量美化完成"
else
    echo "未找到DAT_变量"
fi