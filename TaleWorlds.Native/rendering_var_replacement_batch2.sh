#!/bin/bash

# 渲染系统变量替换脚本 - 第二批处理
# 处理 pretty/03_rendering_part082_sub002_sub002.c 中剩余的 unknown_var 变量

echo "开始处理渲染系统文件中的第二批 unknown_var 变量..."

# 第二批：处理更复杂的渲染参数和状态变量
sed -i 's/unknown_var\[0x10\]/rendering_param16_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x11\]/rendering_param17_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x12\]/rendering_param18_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x13\]/rendering_param19_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x14\]/rendering_param20_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x15\]/rendering_param21_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x16\]/rendering_param22_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x17\]/rendering_param23_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x18\]/rendering_param24_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x19\]/rendering_param25_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x1a\]/rendering_param26_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x1b\]/rendering_param27_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x1c\]/rendering_param28_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x1d\]/rendering_param29_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x1e\]/rendering_param30_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x1f\]/rendering_param31_ptr/g' pretty/03_rendering_part082_sub002_sub002.c

# 处理高索引的渲染状态变量
sed -i 's/unknown_var\[0x20\]/rendering_state32_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x21\]/rendering_state33_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x22\]/rendering_state34_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x23\]/rendering_state35_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x24\]/rendering_state36_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x25\]/rendering_state37_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x26\]/rendering_state38_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x27\]/rendering_state39_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x28\]/rendering_state40_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x29\]/rendering_state41_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x2a\]/rendering_state42_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x2b\]/rendering_state43_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x2c\]/rendering_state44_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x2d\]/rendering_state45_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x2e\]/rendering_state46_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x2f\]/rendering_state47_ptr/g' pretty/03_rendering_part082_sub002_sub002.c

# 处理渲染缓冲区变量
sed -i 's/unknown_var\[0x30\]/rendering_buffer48_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x31\]/rendering_buffer49_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x32\]/rendering_buffer50_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x33\]/rendering_buffer51_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x34\]/rendering_buffer52_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x35\]/rendering_buffer53_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x36\]/rendering_buffer54_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x37\]/rendering_buffer55_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x38\]/rendering_buffer56_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x39\]/rendering_buffer57_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x3a\]/rendering_buffer58_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x3b\]/rendering_buffer59_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x3c\]/rendering_buffer60_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x3d\]/rendering_buffer61_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x3e\]/rendering_buffer62_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x3f\]/rendering_buffer63_ptr/g' pretty/03_rendering_part082_sub002_sub002.c

# 处理渲染配置变量
sed -i 's/unknown_var\[0x40\]/rendering_config64_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x41\]/rendering_config65_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x42\]/rendering_config66_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x43\]/rendering_config67_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x44\]/rendering_config68_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x45\]/rendering_config69_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x46\]/rendering_config70_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x47\]/rendering_config71_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x48\]/rendering_config72_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x49\]/rendering_config73_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x4a\]/rendering_config74_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x4b\]/rendering_config75_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x4c\]/rendering_config76_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x4d\]/rendering_config77_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x4e\]/rendering_config78_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x4f\]/rendering_config79_ptr/g' pretty/03_rendering_part082_sub002_sub002.c

# 处理渲染回调变量
sed -i 's/unknown_var\[0x50\]/rendering_callback80_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x51\]/rendering_callback81_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x52\]/rendering_callback82_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x53\]/rendering_callback83_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x54\]/rendering_callback84_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x55\]/rendering_callback85_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x56\]/rendering_callback86_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x57\]/rendering_callback87_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x58\]/rendering_callback88_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x59\]/rendering_callback89_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x5a\]/rendering_callback90_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x5b\]/rendering_callback91_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x5c\]/rendering_callback92_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x5d\]/rendering_callback93_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x5e\]/rendering_callback94_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x5f\]/rendering_callback95_ptr/g' pretty/03_rendering_part082_sub002_sub002.c

# 处理渲染数据变量
sed -i 's/unknown_var\[0x60\]/rendering_data96_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x61\]/rendering_data97_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x62\]/rendering_data98_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x63\]/rendering_data99_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x64\]/rendering_data100_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x65\]/rendering_data101_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x66\]/rendering_data102_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x67\]/rendering_data103_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x68\]/rendering_data104_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x69\]/rendering_data105_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x6a\]/rendering_data106_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x6b\]/rendering_data107_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x6c\]/rendering_data108_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x6d\]/rendering_data109_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x6e\]/rendering_data110_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x6f\]/rendering_data111_ptr/g' pretty/03_rendering_part082_sub002_sub002.c

# 处理渲染对象变量
sed -i 's/unknown_var\[0x70\]/rendering_object112_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x71\]/rendering_object113_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x72\]/rendering_object114_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x73\]/rendering_object115_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x74\]/rendering_object116_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x75\]/rendering_object117_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x76\]/rendering_object118_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x77\]/rendering_object119_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x78\]/rendering_object120_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x79\]/rendering_object121_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x7a\]/rendering_object122_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x7b\]/rendering_object123_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x7c\]/rendering_object124_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x7d\]/rendering_object125_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x7e\]/rendering_object126_ptr/g' pretty/03_rendering_part082_sub002_sub002.c
sed -i 's/unknown_var\[0x7f\]/rendering_object127_ptr/g' pretty/03_rendering_part082_sub002_sub002.c

echo "第二批 unknown_var 变量替换完成"
echo "检查替换结果..."

# 检查替换后的剩余数量
REMAINING=$(grep -c "unknown_var" pretty/03_rendering_part082_sub002_sub002.c)
echo "剩余 unknown_var 数量: $REMAINING"

# 显示一些替换示例
echo "替换示例:"
grep -n "rendering_param" pretty/03_rendering_part082_sub002_sub002.c | head -5
grep -n "rendering_state" pretty/03_rendering_part082_sub002_sub002.c | head -5
grep -n "rendering_buffer" pretty/03_rendering_part082_sub002_sub002.c | head -5

echo "第二批处理完成"