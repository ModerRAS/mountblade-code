#!/bin/bash

# 为03_rendering.c添加更多的变量名语义化定义
# 该脚本用于为渲染系统中的变量添加语义化名称

# 创建临时脚本文件
cat << 'EOF' > /tmp/add_rendering_definitions.c

// 渲染系统双精度浮点变量语义化定义
#define dVar1 RenderCalculatedDoubleValue1
#define dVar2 RenderCalculatedDoubleValue2
#define dVar3 RenderCalculatedDoubleValue3
#define dVar4 RenderCalculatedDoubleValue4
#define dVar5 RenderCalculatedDoubleValue5
#define dVar6 RenderCalculatedDoubleValue6
#define dVar7 RenderCalculatedDoubleValue7
#define dVar8 RenderCalculatedDoubleValue8
#define dVar9 RenderCalculatedDoubleValue9
#define dVar10 RenderCalculatedDoubleValue10
#define dVar11 RenderCalculatedDoubleValue11
#define dVar12 RenderCalculatedDoubleValue12
#define dVar13 RenderCalculatedDoubleValue13
#define dVar14 RenderCalculatedDoubleValue14
#define dVar15 RenderCalculatedDoubleValue15
#define dVar16 RenderCalculatedDoubleValue16
#define dVar17 RenderCalculatedDoubleValue17
#define dVar18 RenderCalculatedDoubleValue18
#define dVar19 RenderCalculatedDoubleValue19
#define dVar20 RenderCalculatedDoubleValue20

// 渲染系统属性元素变量语义化定义
#define aPropertyElementCount RenderPropertyElementCount
#define aPropertyUnsignedValue RenderPropertyUnsignedValue
#define aPropertyValueByte RenderPropertyValueByte
#define aMaterialPropertyData RenderMaterialPropertyData

// 渲染系统堆栈变量语义化定义
#define uStack0000000000000058 RenderStackData58
#define uStack0000000000000060 RenderStackData60
#define uStack0000000000000068 RenderStackData68
#define uStack0000000000000070 RenderStackData70
#define fStack0000000000000040 RenderFloatStackValue40
#define fStack0000000000000044 RenderFloatStackValue44
#define fStack0000000000000048 RenderFloatStackValue48
#define fStack000000000000004c RenderFloatStackValue4c
#define in_stack_00000050 RenderInputStackValue50

// 渲染系统计算结果变量语义化定义
#define ParameterValue2 RenderCalculatedParameterValue2
#define stack0x00000058 RenderStackPointer58
#define stack0x00000030 RenderStackPointer30
#define stack0x00000040 RenderStackPointer40

// 渲染系统函数调用语义化定义（示例）
#define FUN_18049b8a0 GetRenderContextPropertyCount
#define FUN_18040f060 ProcessRenderContextTransform

EOF

# 将定义添加到文件的开头部分（在现有定义之后）
# 找到第一个合适的插入位置
INSERT_LINE=$(grep -n "#define fVar57 RenderCalculatedFloatValue57" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c | cut -d: -f1)

if [ -n "$INSERT_LINE" ]; then
    # 在指定行后插入新的定义
    sed -i "${INSERT_LINE}r /tmp/add_rendering_definitions.c" /dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c
    echo "变量定义已成功添加到文件中"
else
    echo "未找到合适的插入位置"
fi

# 清理临时文件
rm -f /tmp/add_rendering_definitions.c

echo "渲染系统变量名语义化定义添加完成"