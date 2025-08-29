#!/bin/bash

# 创建脚本目录
mkdir -p scripts

# 替换变量名的脚本
cat > scripts/replace_vars.sh << 'EOF'
#!/bin/bash

# 使用sed进行批量替换
sed -i 's/char cVar1;/char initializationStatus;/g' TaleWorlds.Native.dll.c
sed -i 's/cVar1/initializationStatus/g' TaleWorlds.Native.dll.c
sed -i 's/undefined8 \*puVar2;/undefined8 *modulePtr;/g' TaleWorlds.Native.dll.c
sed -i 's/puVar2/modulePtr/g' TaleWorlds.Native.dll.c
sed -i 's/int iVar3;/int comparisonResult;/g' TaleWorlds.Native.dll.c
sed -i 's/iVar3/comparisonResult/g' TaleWorlds.Native.dll.c
sed -i 's/undefined8 uStackX_18;/undefined8 stackVariable;/g' TaleWorlds.Native.dll.c
sed -i 's/uStackX_18/stackVariable/g' TaleWorlds.Native.dll.c

echo "变量替换完成"
EOF

# 使脚本可执行
chmod +x scripts/replace_vars.sh

echo "脚本创建完成"