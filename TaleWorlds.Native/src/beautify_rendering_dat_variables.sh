#!/bin/bash

# 美化03_rendering.c文件中的DAT_变量名
# 这个脚本将把DAT_变量替换为语义化的名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 创建备份
cp "$FILE_PATH" "$FILE_PATH.backup"

# 渲染系统核心数据指针
sed -i 's/DAT_180d48ee8/RenderSystemCoreDataPointer/g' "$FILE_PATH"
sed -i 's/DAT_180d48ee0/RenderSystemStatusPointer/g' "$FILE_PATH"
sed -i 's/DAT_180d48ee4/RenderSystemContextPointer/g' "$FILE_PATH"

# 渲染系统数据计数器和互斥锁
sed -i 's/DAT_180d49678/RenderSystemDataPropertyCounter/g' "$FILE_PATH"
sed -i 's/DAT_180d49680/RenderSystemMutex/g' "$FILE_PATH"

# 渲染材质相关变量
sed -i 's/DAT_180bfaee8/RenderMaterialActiveFlag/g' "$FILE_PATH"
sed -i 's/DAT_180bfaeb0/RenderMaterialStateFlag/g' "$FILE_PATH"
sed -i 's/DAT_180bfaeb8/RenderMaterialReadyFlag/g' "$FILE_PATH"
sed -i 's/DAT_1809939c8/RenderMaterialErrorCode/g' "$FILE_PATH"

# 渲染材质字符串和属性
sed -i 's/DAT_18098bc73/RenderMaterialDefaultMaterialPropertyName/g' "$FILE_PATH"
sed -i 's/DAT_180a0b1c0/RenderMaterialPropertyExtensionBaseAddress/g' "$FILE_PATH"
sed -i 's/DAT_180a04ee4/RenderMaterialMaterialPropertyNameBaseAddress/g' "$FILE_PATH"
sed -i 's/DAT_180a03a84/RenderMaterialMaterialPropertyNameComparisonTable/g' "$FILE_PATH"
sed -i 's/DAT_180a0d580/RenderMaterialMaterialPropertyName/g' "$FILE_PATH"
sed -i 's/DAT_180a09d80/RenderMaterialDefaultValuePointer/g' "$FILE_PATH"
sed -i 's/DAT_180a16c50/RenderMaterialComparisonData/g' "$FILE_PATH"

echo "DAT_变量名美化完成"