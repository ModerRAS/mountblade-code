#!/bin/bash

# 渲染系统函数名美化脚本
# 将03_rendering.c文件中的十六进制函数名替换为语义化名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 替换十六进制函数名为语义化名称
sed -i 's/func_0x00018064e870/render_memory_security_check/g' "$INPUT_FILE"
sed -i 's/func_0x000180417730/render_validate_device_context/g' "$INPUT_FILE"
sed -i 's/func_0x00018008a5c0/render_compare_material_name/g' "$INPUT_FILE"
sed -i 's/func_0x0001802eeba0/render_flush_pipeline/g' "$INPUT_FILE"
sed -i 's/func_0x000180085de0/render_get_matrix_data/g' "$INPUT_FILE"
sed -i 's/func_0x00018022d300/render_get_byte_data/g' "$INPUT_FILE"
sed -i 's/func_0x000180079240/render_calculate_chunk_offset/g' "$INPUT_FILE"

echo "渲染系统函数名美化完成"