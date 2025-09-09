#!/bin/bash

# 美化03_rendering.c中的UNK_和DAT_变量名

echo "开始美化03_rendering.c中的变量名..."

# 创建备份
cp 03_rendering.c 03_rendering.c.backup

# 美化材质属性相关的变量名
sed -i 's/UNK_180a28ecc/RenderSystemMaterialPropertyECC/g' 03_rendering.c
sed -i 's/UNK_180a28fb0/RenderSystemMaterialPropertyFB0/g' 03_rendering.c
sed -i 's/UNK_180a28fb4/RenderSystemMaterialPropertyFB4/g' 03_rendering.c
sed -i 's/UNK_180a28fb8/RenderSystemMaterialPropertyFB8/g' 03_rendering.c
sed -i 's/UNK_180a28fbc/RenderSystemMaterialPropertyFBC/g' 03_rendering.c
sed -i 's/UNK_180a28fc0/RenderSystemMaterialPropertyFC0/g' 03_rendering.c
sed -i 's/UNK_180a28fc4/RenderSystemMaterialPropertyFC4/g' 03_rendering.c
sed -i 's/UNK_180a28fc8/RenderSystemMaterialPropertyFC8/g' 03_rendering.c
sed -i 's/UNK_180a28fcc/RenderSystemMaterialPropertyFCC/g' 03_rendering.c
sed -i 's/UNK_180a290b0/RenderSystemMaterialProperty0B0/g' 03_rendering.c
sed -i 's/UNK_180a29159/RenderSystemMaterialProperty159/g' 03_rendering.c
sed -i 's/UNK_180a29171/RenderSystemMaterialProperty171/g' 03_rendering.c
sed -i 's/UNK_180995ce0/RenderSystemMaterialProperty5CE0/g' 03_rendering.c
sed -i 's/UNK_180a29698/RenderSystemMaterialProperty698/g' 03_rendering.c

# 美化数据表相关的变量名
sed -i 's/DAT_180a29e24/RenderSystemMaterialPropertyE24/g' 03_rendering.c
sed -i 's/UNK_180a29e28/RenderSystemMaterialPropertyE28/g' 03_rendering.c
sed -i 's/UNK_180a29e38/RenderSystemMaterialPropertyE38/g' 03_rendering.c
sed -i 's/UNK_180a29e50/RenderSystemMaterialPropertyE50/g' 03_rendering.c
sed -i 's/UNK_180a29e68/RenderSystemMaterialPropertyE68/g' 03_rendering.c
sed -i 's/UNK_180a29e88/RenderSystemMaterialPropertyE88/g' 03_rendering.c
sed -i 's/UNK_180a29e90/RenderSystemMaterialPropertyE90/g' 03_rendering.c
sed -i 's/UNK_180a29e98/RenderSystemMaterialPropertyE98/g' 03_rendering.c
sed -i 's/UNK_180a29ea0/RenderSystemMaterialPropertyEA0/g' 03_rendering.c
sed -i 's/UNK_180a29eb0/RenderSystemMaterialPropertyEB0/g' 03_rendering.c
sed -i 's/UNK_180a29ec0/RenderSystemMaterialPropertyEC0/g' 03_rendering.c
sed -i 's/UNK_180a29ed8/RenderSystemMaterialPropertyED8/g' 03_rendering.c
sed -i 's/UNK_180a29ef0/RenderSystemMaterialPropertyEF0/g' 03_rendering.c
sed -i 's/UNK_180a29f08/RenderSystemMaterialPropertyF08/g' 03_rendering.c
sed -i 's/UNK_180a29f18/RenderSystemMaterialPropertyF18/g' 03_rendering.c
sed -i 's/UNK_180a29f28/RenderSystemMaterialPropertyF28/g' 03_rendering.c
sed -i 's/UNK_180a29f38/RenderSystemMaterialPropertyF38/g' 03_rendering.c
sed -i 's/UNK_180a29f4c/RenderSystemMaterialPropertyF4C/g' 03_rendering.c
sed -i 's/UNK_180a29f54/RenderSystemMaterialPropertyF54/g' 03_rendering.c
sed -i 's/UNK_180a29f5c/RenderSystemMaterialPropertyF5C/g' 03_rendering.c
sed -i 's/UNK_180a29f64/RenderSystemMaterialPropertyF64/g' 03_rendering.c
sed -i 's/UNK_180a29f70/RenderSystemMaterialPropertyF70/g' 03_rendering.c
sed -i 's/UNK_180a29f80/RenderSystemMaterialPropertyF80/g' 03_rendering.c
sed -i 's/UNK_180a29f98/RenderSystemMaterialPropertyF98/g' 03_rendering.c
sed -i 's/UNK_180a29fb0/RenderSystemMaterialPropertyFB0/g' 03_rendering.c
sed -i 's/UNK_180a29fc8/RenderSystemMaterialPropertyFC8/g' 03_rendering.c
sed -i 's/UNK_180a29fd8/RenderSystemMaterialPropertyFD8/g' 03_rendering.c
sed -i 's/UNK_180a29fe4/RenderSystemMaterialPropertyFE4/g' 03_rendering.c
sed -i 's/UNK_180a29ff0/RenderSystemMaterialPropertyFF0/g' 03_rendering.c
sed -i 's/UNK_180a2a000/RenderSystemMaterialProperty000/g' 03_rendering.c
sed -i 's/UNK_180a2a010/RenderSystemMaterialProperty010/g' 03_rendering.c
sed -i 's/UNK_180a2a028/RenderSystemMaterialProperty028/g' 03_rendering.c
sed -i 's/UNK_180a2a038/RenderSystemMaterialProperty038/g' 03_rendering.c
sed -i 's/UNK_180a2a048/RenderSystemMaterialProperty048/g' 03_rendering.c
sed -i 's/UNK_180a2a058/RenderSystemMaterialProperty058/g' 03_rendering.c
sed -i 's/UNK_180a2a070/RenderSystemMaterialProperty070/g' 03_rendering.c
sed -i 's/UNK_180a2a080/RenderSystemMaterialProperty080/g' 03_rendering.c
sed -i 's/UNK_180a2a088/RenderSystemMaterialProperty088/g' 03_rendering.c
sed -i 's/UNK_180a2a098/RenderSystemMaterialProperty098/g' 03_rendering.c
sed -i 's/UNK_180a2a0a8/RenderSystemMaterialProperty0A8/g' 03_rendering.c
sed -i 's/UNK_180a2a0b4/RenderSystemMaterialProperty0B4/g' 03_rendering.c
sed -i 's/UNK_180a2a0c0/RenderSystemMaterialProperty0C0/g' 03_rendering.c
sed -i 's/UNK_180a2a0d8/RenderSystemMaterialProperty0D8/g' 03_rendering.c

echo "变量名美化完成！"

# 统计替换次数
echo "统计替换次数..."
grep -o "RenderSystemMaterialProperty" 03_rendering.c | wc -l