#!/bin/bash

# 栈变量语义化替换脚本
# 将 in_stack_ 和 uStack 标记替换为有意义的变量名

echo "开始栈变量语义化替换..."

# 处理 in_stack_ 变量
echo "处理 in_stack_ 变量..."
find . -name "*.c" -type f -exec sed -i 's/in_stack_00000010/local_var_10/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_00000018/local_var_18/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_00000020/local_var_20/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_00000028/local_var_28/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_00000030/local_var_30/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_00000038/local_var_38/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_00000040/local_var_40/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_00000048/local_var_48/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_00000050/local_var_50/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_00000058/local_var_58/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_00000060/local_var_60/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_00000068/local_var_68/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_00000070/local_var_70/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_00000078/local_var_78/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_00000080/local_var_80/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_00000088/local_var_88/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_00000090/local_var_90/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_00000098/local_var_98/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_000000a0/local_var_a0/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_000000a8/local_var_a8/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_000000b0/local_var_b0/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_000000b8/local_var_b8/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_000000c0/local_var_c0/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_000000c8/local_var_c8/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_000000d0/local_var_d0/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_000000d8/local_var_d8/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_000000e0/local_var_e0/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_000000e8/local_var_e8/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_000000f0/local_var_f0/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/in_stack_000000f8/local_var_f8/g' {} \;

# 处理 uStack 变量
echo "处理 uStack 变量..."
find . -name "*.c" -type f -exec sed -i 's/uStack0000000000000010/local_var_10/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack0000000000000018/local_var_18/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack0000000000000020/local_var_20/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack0000000000000028/local_var_28/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack0000000000000030/local_var_30/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack0000000000000038/local_var_38/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack0000000000000040/local_var_40/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack0000000000000048/local_var_48/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack0000000000000050/local_var_50/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack0000000000000058/local_var_58/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack0000000000000060/local_var_60/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack0000000000000068/local_var_68/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack0000000000000070/local_var_70/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack0000000000000078/local_var_78/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack0000000000000080/local_var_80/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack0000000000000088/local_var_88/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack0000000000000090/local_var_90/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack0000000000000098/local_var_98/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack00000000000000a0/local_var_a0/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack00000000000000a8/local_var_a8/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack00000000000000b0/local_var_b0/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack00000000000000b8/local_var_b8/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack00000000000000c0/local_var_c0/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack00000000000000c8/local_var_c8/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack00000000000000d0/local_var_d0/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack00000000000000d8/local_var_d8/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack00000000000000e0/local_var_e0/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack00000000000000e8/local_var_e8/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack00000000000000f0/local_var_f0/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/uStack00000000000000f8/local_var_f8/g' {} \;

# 处理一些特殊的栈变量，根据上下文赋予更具体的名称
echo "处理特殊栈变量..."
# 缓冲区相关
find . -name "*.c" -type f -exec sed -i 's/local_var_10/param_buffer_10/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_18/param_buffer_18/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_20/param_buffer_20/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_28/param_buffer_28/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_30/param_buffer_30/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_38/param_buffer_38/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_40/param_buffer_40/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_48/param_buffer_48/g' {} \;

# 结构体指针
find . -name "*.c" -type f -exec sed -i 's/local_var_50/struct_ptr_50/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_58/struct_ptr_58/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_60/struct_ptr_60/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_68/struct_ptr_68/g' {} \;

# 数组和集合
find . -name "*.c" -type f -exec sed -i 's/local_var_70/array_data_70/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_78/array_data_78/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_80/array_data_80/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_88/array_data_88/g' {} \;

# 上下文和状态
find . -name "*.c" -type f -exec sed -i 's/local_var_90/context_data_90/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_98/context_data_98/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_a0/context_data_a0/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_a8/context_data_a8/g' {} \;

# 返回值和结果
find . -name "*.c" -type f -exec sed -i 's/local_var_b0/result_buffer_b0/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_b8/result_buffer_b8/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_c0/result_buffer_c0/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_c8/result_buffer_c8/g' {} \;

# 临时变量
find . -name "*.c" -type f -exec sed -i 's/local_var_d0/temp_var_d0/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_d8/temp_var_d8/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_e0/temp_var_e0/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_e8/temp_var_e8/g' {} \;

# 计数器和索引
find . -name "*.c" -type f -exec sed -i 's/local_var_f0/counter_f0/g' {} \;
find . -name "*.c" -type f -exec sed -i 's/local_var_f8/counter_f8/g' {} \;

echo "栈变量语义化替换完成"

# 验证替换结果
echo "验证替换结果..."
remaining_in_stack=$(find . -name "*.c" -exec grep -l "in_stack_" {} \; | wc -l)
remaining_uStack=$(find . -name "*.c" -exec grep -l "uStack" {} \; | wc -l)

echo "剩余 in_stack_ 文件数: $remaining_in_stack"
echo "剩余 uStack 文件数: $remaining_uStack"

if [ $remaining_in_stack -eq 0 ] && [ $remaining_uStack -eq 0 ]; then
    echo "所有栈变量已成功替换为语义化名称"
else
    echo "仍有部分栈变量需要手动处理"
fi