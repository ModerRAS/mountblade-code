#!/bin/bash

# 渲染系统代码美化脚本
# 用于批量替换03_rendering.c文件中的非语义化命名

echo "开始美化渲染系统代码..."

# 定义替换规则
# 1. 删除无用的function注释行
sed -i '/^\/\/ function:/d' TaleWorlds.Native/src/03_rendering.c

# 2. 删除注释行末尾的分号
sed -i 's/; $/ /' TaleWorlds.Native/src/03_rendering.c

# 3. 清理多余的空行
sed -i '/^$/N;/^\n$/d' TaleWorlds.Native/src/03_rendering.c

# 4. 统一变量命名风格
# 将render_object_*替换为render_*_object
sed -i 's/render_object_\([a-zA-Z_]*\)/render_\1_object/g' TaleWorlds.Native/src/03_rendering.c

# 5. 清理重复的注释
sed -i '/^\/\/ render shader$/d' TaleWorlds.Native/src/03_rendering.c

echo "渲染系统代码美化完成"