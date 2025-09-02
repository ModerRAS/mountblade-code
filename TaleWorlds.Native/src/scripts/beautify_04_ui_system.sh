#!/bin/bash

# 批量替换04_ui_system.c文件中的变量名
# 注意：这是一个简化实现，仅替换部分常见的变量名

sed -i 's/cVar11/IsTransformActive/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/bVar2/IsMatrixValid/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/cVar1/IsTransformEnabled/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/baseValueX2/RotationAngle/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/baseValueX3/ScaleX/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/baseValueX4/ScaleY/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/baseValueX5/TranslationX/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/baseValueX6/TranslationY/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/baseValueX7/MatrixValue/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/baseValueX8/ProjectionX/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/baseValueX9/ProjectionY/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/fVar25/TransformFactor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

echo "变量名替换完成"