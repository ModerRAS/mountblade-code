#!/bin/bash

# 美化03_rendering.c文件中的FUN_函数
# 创建一个映射文件来存储函数名替换

echo "开始美化03_rendering.c文件中的FUN_函数..."

# 创建临时脚本文件
cat > /tmp/beautify_rendering_functions.py << 'EOF'
import re
import sys

# 读取文件内容
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'r', encoding='utf-8') as f:
    content = f.read()

# 函数映射表
function_mappings = {
    'FUN_18026ff90': 'ProcessRenderObject',
    'FUN_1802708b0': 'UpdateRenderObjectArray',
    'FUN_18064d630': 'ExecuteRenderCommand',
    'FUN_18064e900': 'FreeRenderMemory',
    'FUN_18010cbc0': 'CopyRenderData',
    'FUN_180631850': 'ProcessRenderQueue',
    'FUN_1800b5cc0': 'FinalizeRenderState',
    'FUN_1800b55b0': 'InitializeRenderContext',
    'FUN_18062b420': 'AllocateRenderMemory',
    'FUN_180274ab0': 'SetupRenderProperties',
    'FUN_18022ec40': 'CopyRenderBuffer',
    'FUN_180273600': 'CreateRenderObject'
}

# 替换函数调用
for old_name, new_name in function_mappings.items():
    # 替换函数定义
    content = re.sub(rf'undefined8 \* {old_name}\(', f'undefined8 * {new_name}(', content)
    content = re.sub(rf'{old_name}\(', f'{new_name}(', content)

# 添加函数注释
function_comments = {
    'ProcessRenderObject': '处理渲染对象，更新渲染状态和属性',
    'UpdateRenderObjectArray': '更新渲染对象数组，管理对象生命周期',
    'ExecuteRenderCommand': '执行渲染命令，处理绘制操作',
    'FreeRenderMemory': '释放渲染内存，清理资源',
    'CopyRenderData': '复制渲染数据，支持数据传输',
    'ProcessRenderQueue': '处理渲染队列，管理渲染任务',
    'FinalizeRenderState': '完成渲染状态，准备下一帧',
    'InitializeRenderContext': '初始化渲染上下文，设置渲染环境',
    'AllocateRenderMemory': '分配渲染内存，管理内存池',
    'SetupRenderProperties': '设置渲染属性，配置渲染参数',
    'CopyRenderBuffer': '复制渲染缓冲区，支持数据共享',
    'CreateRenderObject': '创建渲染对象，初始化对象属性'
}

# 为函数添加注释
for func_name, comment in function_comments.items():
    # 查找函数定义并添加注释
    pattern = rf'(undefined8 \* {func_name}\([^)]*\))'
    replacement = f'/**\n * @brief {comment}\n * \n * {comment}\n * \n * @return 操作结果\n */\n\\1'
    content = re.sub(pattern, replacement, content)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c', 'w', encoding='utf-8') as f:
    f.write(content)

print("函数美化完成")
EOF

# 执行Python脚本
python3 /tmp/beautify_rendering_functions.py

# 清理临时文件
rm -f /tmp/beautify_rendering_functions.py

echo "03_rendering.c文件美化完成"