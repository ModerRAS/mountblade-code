#!/bin/bash

# 批量美化渲染系统中剩余的Ghidra变量名
# 这个脚本将处理03_rendering.c中的未美化变量名

# 进入源代码目录
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 03_rendering.c 03_rendering.c.backup

echo "开始批量美化渲染系统变量名..."

# 处理小数值的DAT_和UNK_变量
sed -i 's/DAT_00000008/RenderSystemNullPointer/g' 03_rendering.c
sed -i 's/DAT_00000010/RenderSystemBasePointer/g' 03_rendering.c  
sed -i 's/DAT_00000018/RenderSystemMaterialDataPointer/g' 03_rendering.c
sed -i 's/UNK_000002a8/RenderSystemConfigA8/g' 03_rendering.c
sed -i 's/UNK_000002ac/RenderSystemConfigAC/g' 03_rendering.c
sed -i 's/UNK_000002b0/RenderSystemConfigB0/g' 03_rendering.c
sed -i 's/UNK_000002b4/RenderSystemConfigB4/g' 03_rendering.c
sed -i 's/UNK_000000f0/RenderSystemStatusF0/g' 03_rendering.c
sed -i 's/UNK_000001d0/RenderSystemDataPointerD0/g' 03_rendering.c
sed -i 's/UNK_00000188/RenderSystemFlag188/g' 03_rendering.c
sed -i 's/UNK_000001d8/RenderSystemConfigD8/g' 03_rendering.c
sed -i 's/UNK_000001dc/RenderSystemConfigDC/g' 03_rendering.c
sed -i 's/UNK_000001e0/RenderSystemConfigE0/g' 03_rendering.c
sed -i 's/UNK_000001f0/RenderSystemConfigF0/g' 03_rendering.c
sed -i 's/UNK_000001e4/RenderSystemConfigE4/g' 03_rendering.c
sed -i 's/UNK_00004000/RenderSystemActiveStateFlag/g' 03_rendering.c
sed -i 's/UNK_00004006/RenderSystemOperationInProgressFlag/g' 03_rendering.c
sed -i 's/UNK_00004018/RenderSystemInitializationStatus/g' 03_rendering.c

# 添加宏定义到文件中
cat >> 03_rendering.c << 'EOF'

// 系统小数值变量语义化定义
#define RenderSystemNullPointer          DAT_00000008    // 渲染系统空指针
#define RenderSystemBasePointer          DAT_00000010    // 渲染系统基址指针  
#define RenderSystemMaterialDataPointer  DAT_00000018    // 渲染系统材质数据指针
#define RenderSystemConfigA8             UNK_000002a8    // 渲染系统配置变量A8
#define RenderSystemConfigAC             UNK_000002ac    // 渲染系统配置变量AC
#define RenderSystemConfigB0             UNK_000002b0    // 渲染系统配置变量B0
#define RenderSystemConfigB4             UNK_000002b4    // 渲染系统配置变量B4
#define RenderSystemStatusF0             UNK_000000f0    // 渲染系统状态变量F0
#define RenderSystemDataPointerD0        UNK_000001d0    // 渲染系统数据指针D0
#define RenderSystemFlag188              UNK_00000188    // 渲染系统标志188
#define RenderSystemConfigD8             UNK_000001d8    // 渲染系统配置变量D8
#define RenderSystemConfigDC             UNK_000001dc    // 渲染系统配置变量DC
#define RenderSystemConfigE0             UNK_000001e0    // 渲染系统配置变量E0
#define RenderSystemConfigF0             UNK_000001f0    // 渲染系统配置变量F0
#define RenderSystemConfigE4             UNK_000001e4    // 渲染系统配置变量E4
#define RenderSystemActiveStateFlag      UNK_00004000    // 渲染系统活跃状态标志
#define RenderSystemOperationInProgressFlag UNK_00004006 // 渲染系统操作进行中标志
#define RenderSystemInitializationStatus UNK_00004018   // 渲染系统初始化状态

EOF

echo "批量美化完成！"
echo "已处理以下变量："
echo "- RenderSystemNullPointer"
echo "- RenderSystemBasePointer" 
echo "- RenderSystemMaterialDataPointer"
echo "- RenderSystemConfig系列变量"
echo "- RenderSystemStatus相关变量"
echo "- RenderSystemFlag相关变量"