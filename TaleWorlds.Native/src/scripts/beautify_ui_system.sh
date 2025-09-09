#!/bin/bash

# 美化04_ui_system.c文件中的变量名
# 处理iVar系列变量

echo "开始美化04_ui_system.c文件..."

# 确保在正确的目录中
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建临时脚本文件
cat > beautify_ui_system_variables.sh << 'EOF'
#!/bin/bash

# 美化iVar系列变量
sed -i 's/\biVar1\b/UILayoutX/g' 04_ui_system.c
sed -i 's/\biVar2\b/UILayoutY/g' 04_ui_system.c
sed -i 's/\biVar3\b/UIComponentWidth/g' 04_ui_system.c
sed -i 's/\biVar4\b/UIComponentHeight/g' 04_ui_system.c
sed -i 's/\biVar5\b/UIResourceHandle/g' 04_ui_system.c

# 美化uVar系列变量
sed -i 's/\buVar1\b/UIComponentIndex/g' 04_ui_system.c
sed -i 's/\buVar2\b/UIResourceCount/g' 04_ui_system.c
sed -i 's/\buVar3\b/UIEventCounter/g' 04_ui_system.c
sed -i 's/\buVar4\b/UIRenderFlags/g' 04_ui_system.c
sed -i 's/\buVar5\b/UIAnimationTimer/g' 04_ui_system.c

# 美化piVar系列变量
sed -i 's/\bpiVar1\b/UIPositionXPtr/g' 04_ui_system.c
sed -i 's/\bpiVar2\b/UIPositionYPtr/g' 04_ui_system.c
sed -i 's/\bpiVar3\b/UIDimensionPtr/g' 04_ui_system.c

# 美化puVar系列变量
sed -i 's/\bpuVar1\b/UIResourceIndexPtr/g' 04_ui_system.c
sed -i 's/\bpuVar2\b/UIElementCountPtr/g' 04_ui_system.c

# 美化param系列变量
sed -i 's/\bparam_6\b/UIOperationParam6/g' 04_ui_system.c
sed -i 's/\bparam_7\b/UIOperationParam7/g' 04_ui_system.c
sed -i 's/\bparam_8\b/UIOperationParam8/g' 04_ui_system.c

echo "变量名美化完成"
EOF

# 使脚本可执行
chmod +x beautify_ui_system_variables.sh

# 执行脚本
./beautify_ui_system_variables.sh

# 清理临时脚本
rm -f beautify_ui_system_variables.sh

echo "04_ui_system.c文件美化完成"