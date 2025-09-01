#!/bin/bash

# 删除渲染系统文件中的大量注释
# 删除包含"简化实现"、"原本实现"、"2025年"等字样的注释
# 简化实现：仅删除特定类型的注释，保留必要的代码注释
# 原本实现：完全重构注释系统，建立统一的文档标准

echo "开始删除渲染系统文件中的大量注释..."

# 删除包含特定字样的注释行
sed -i '/\/\/.*简化实现/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i '/\/\/.*原本实现/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i '/\/\/.*2025年.*月.*日/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i '/\/\/.*最新批次/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i '/\/\/.*最终批次/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i '/\/\/.*美化工作/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i '/\/\/.*语义化常量定义/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i '/\/\/.*硬编码/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i '/\/\/.*新增/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
sed -i '/\/\/.*最新完成/d' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c

echo "渲染系统注释删除完成"
echo "简化实现：仅删除特定的注释行，保留必要的代码文档"
echo "原本实现：完全重构注释系统，建立统一的文档标准"