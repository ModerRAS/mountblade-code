#!/bin/bash

# 美化02_core_engine.c中的栈变量
# 使用sed命令进行批量替换

FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 美化fStack_88变量
sed -i 's/fStack_88/MatrixTransformX/g' "$FILE"

# 美化fStack_84变量
sed -i 's/fStack_84/MatrixTransformY/g' "$FILE"

# 美化fStack_80变量
sed -i 's/fStack_80/MatrixTransformZ/g' "$FILE"

# 美化fStack_7c变量
sed -i 's/fStack_7c/MatrixTransformW/g' "$FILE"

# 美化fStack_78变量
sed -i 's/fStack_78/RenderScaleX/g' "$FILE"

# 美化fStack_74变量
sed -i 's/fStack_74/RenderScaleY/g' "$FILE"

# 美化fStack_70变量
sed -i 's/fStack_70/RenderScaleZ/g' "$FILE"

# 美化fStack_6c变量
sed -i 's/fStack_6c/RenderScaleW/g' "$FILE"

echo "栈变量美化完成"