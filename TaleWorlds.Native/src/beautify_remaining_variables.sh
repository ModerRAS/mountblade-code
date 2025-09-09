#!/bin/bash

# 美化03_rendering.c中剩余的Ghidra生成变量名
# 处理DAT_000000xx格式的变量名

echo "开始美化03_rendering.c中的剩余Ghidra变量名..."

# 创建备份
cp 03_rendering.c 03_rendering_backup_$(date +%Y%m%d_%H%M%S).c

# 美化DAT_00000008 - 这是一个常用的空指针/结束标记
sed -i 's/&DAT_00000008/&RenderTerminatorMarker/g' 03_rendering.c
sed -i 's/DAT_00000008/RenderTerminatorMarker/g' 03_rendering.c

# 美化DAT_00000010 - 材质属性基础偏移量
sed -i 's/&DAT_00000010/&MaterialPropertyBaseOffset/g' 03_rendering.c
sed -i 's/DAT_00000010/MaterialPropertyBaseOffset/g' 03_rendering.c

# 美化DAT_00000018 - 材质属性指针6
sed -i 's/&DAT_00000018/&MaterialPropertyPointer6/g' 03_rendering.c
sed -i 's/DAT_00000018/MaterialPropertyPointer6/g' 03_rendering.c

# 添加变量定义到文件头部
# 检查是否已经存在定义
if ! grep -q "RenderTerminatorMarker" 03_rendering.c; then
    # 在基础数据类型定义后添加
    sed -i '/^typedef double RenderDouble;$/a\\n// 特殊标记变量语义化定义\n#define RenderTerminatorMarker DAT_00000008\n#define MaterialPropertyBaseOffset DAT_00000010\n#define MaterialPropertyPointer6 DAT_00000018' 03_rendering.c
fi

echo "美化完成！"
echo "已处理的变量名："
echo "- DAT_00000008 -> RenderTerminatorMarker"
echo "- DAT_00000010 -> MaterialPropertyBaseOffset" 
echo "- DAT_00000018 -> MaterialPropertyPointer6"