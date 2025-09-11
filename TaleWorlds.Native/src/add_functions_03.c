#!/bin/bash

# 在03_rendering.c文件中添加函数定义
# 在第462行后插入新的函数定义

sed -i '462a\\n// 渲染系统数据处理函数定义\n#define FUN_1802a11e0 ProcessRenderMaterialArrayAllocation         // 处理渲染材质数组分配\n#define FUN_1801584c0 ProcessRenderMaterialPropertyApplication     // 处理渲染材质属性应用\n#define FUN_180157390 ProcessRenderMaterialDataProcessing          // 处理渲染材质数据处理\n#define FUN_1803456e0 ProcessRenderMaterialPropertyBinding         // 处理渲染材质属性绑定\n#define FUN_1803a5130 ProcessRenderMaterialNodeAllocation         // 处理渲染材质节点分配\n#define FUN_180235000 CalculateRenderMaterialPropertySize          // 计算渲染材质属性大小\n#define FUN_18040fa30 ProcessRenderMaterialStateValidation        // 处理渲染材质状态验证\n#define FUN_1800623b0 ProcessRenderMaterialConflictResolution    // 处理渲染材质冲突解决' /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c