#!/bin/bash

# 添加缺失的函数定义到文件末尾
cat >> /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c << 'EOF'

// 补充缺失的渲染材质处理函数定义
#define FUN_1803179d0 InitializeRenderMaterialMemoryRegion             // 初始化渲染材质内存区域
#define FUN_18031b950 ProcessRenderMaterialElementAllocation           // 处理渲染材质元素分配
#define FUN_18031bc40 FinalizeRenderMaterialElementProcessing           // 完成渲染材质元素处理
EOF