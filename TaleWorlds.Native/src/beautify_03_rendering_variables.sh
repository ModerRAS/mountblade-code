#!/bin/bash

# 03_rendering.c 变量美化脚本
# 美化栈变量和局部变量名

echo "开始美化 03_rendering.c 文件的变量名..."

# 备份原始文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c.backup

# 美化栈变量名
sed -i 's/auStack_[0-9a-f]*/ArrayStack/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/puStack_[0-9a-f]*/PointerStack/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/uStack_[0-9a-f]*/UnsignedStack/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/iStack_[0-9a-f]*/IntegerStack/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 美化指针变量名
sed -i 's/pcharValue[0-9]*/CharacterPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/pcVar[0-9]*/CharacterVariable/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/ppropertyLength[0-9]*/PropertyLengthPointer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 美化循环变量名
sed -i 's/iterationCount[0-9]/LoopIterationCount/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/loopCounter/LoopCounter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 美化属性变量名
sed -i 's/propertyLength[0-9]/PropertyLength/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/propertyData[0-9]/PropertyData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 美化内存偏移量变量名
sed -i 's/memoryOffset/MemoryOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

# 美化渲染相关变量名
sed -i 's/renderObjectState/RenderObjectState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/renderContext/RenderContext/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i 's/renderData/RenderData/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "变量美化完成！"
echo "请检查文件内容确保没有破坏代码逻辑。"