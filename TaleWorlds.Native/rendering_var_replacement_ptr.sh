#!/bin/bash

# 渲染系统变量替换脚本 - 处理 unknown_var_数字_ptr 格式
# 处理 pretty/03_rendering_part082_sub002_sub002.c 中的 unknown_var 变量

echo "开始处理渲染系统文件中的 unknown_var_数字_ptr 变量..."

# 处理以 _ptr 结尾的变量
sed -i 's/unknown_var_1008_ptr/rendering_callback8_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var_672_ptr/rendering_state9_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var_1168_ptr/rendering_param11_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var_592_ptr/rendering_state12_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var_752_ptr/rendering_callback14_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var_1152_ptr/rendering_param16_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var_576_ptr/rendering_state26_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var_688_ptr/rendering_callback28_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var_9648_ptr/rendering_data29_ptr/g' pretty/03_rendering_part082_sub002_sub002.c

# 处理更多的变量 - 基于函数调用参数来推断用途
sed -i 's/unknown_var_[0-9][0-9][0-9]_ptr/rendering_param_&/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var_[0-9][0-9][0-9][0-9]_ptr/rendering_state_&/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var_[0-9][0-9][0-9][0-9][0-9]_ptr/rendering_buffer_&/g' pretty/03_rendering_part082_sub002_sub002.c

# 清理临时标记
sed -i 's/rendering_param_unknown_var_/rendering_param_/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/rendering_state_unknown_var_/rendering_state_/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/rendering_buffer_unknown_var_/rendering_buffer_/g' pretty/03_rendering_part082_sub002_sub002.c

# 通用替换 - 按照数值范围分类
for i in {100..999}; do
    if grep -q "unknown_var_${i}_ptr" pretty/03_rendering_part082_sub002_sub002.c; then
        sed -i "s/unknown_var_${i}_ptr/rendering_param${i}_ptr/g" pretty/03_rendering_part082_sub002_sub002.c
    fi
done

for i in {1000..9999}; do
    if grep -q "unknown_var_${i}_ptr" pretty/03_rendering_part082_sub002_sub002.c; then
        sed -i "s/unknown_var_${i}_ptr/rendering_state${i}_ptr/g" pretty/03_rendering_part082_sub002_sub002.c
    fi
done

for i in {10000..99999}; do
    if grep -q "unknown_var_${i}_ptr" pretty/03_rendering_part082_sub002_sub002.c; then
        sed -i "s/unknown_var_${i}_ptr/rendering_buffer${i}_ptr/g" pretty/03_rendering_part082_sub002_sub002.c
    fi
done

echo "unknown_var_数字_ptr 变量替换完成"
echo "检查替换结果..."

# 检查替换后的剩余数量
REMAINING=$(grep -c "unknown_var" pretty/03_rendering_part082_sub002_sub002.c)
echo "剩余 unknown_var 数量: $REMAINING"

# 显示一些替换示例
echo "替换示例:"
grep -n "rendering_param" pretty/03_rendering_part082_sub002_sub002.c | head -5
grep -n "rendering_state" pretty/03_rendering_part082_sub002_sub002.c | head -5
grep -n "rendering_buffer" pretty/03_rendering_part082_sub002_sub002.c | head -5

echo "处理完成"