#!/bin/bash

# 美化脚本：将硬编码的十六进制值替换为语义化常量
# 2025年8月30日最终批次

# 定义文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 创建备份
cp "$FILE_PATH" "${FILE_PATH}.backup"

# 添加新的语义化常量到文件末尾
cat >> "$FILE_PATH" << 'EOF'

// 系统初始化硬编码值语义化常量（2025年8月30日最终批次最新补充）
// 内存布局偏移量常量
#define SYSTEM_INIT_OFFSET_GLOBAL_7AB8        0x7ab8   // 全局偏移量7AB8
#define SYSTEM_INIT_OFFSET_GLOBAL_560         0x560    // 全局偏移量560
#define SYSTEM_INIT_OFFSET_GLOBAL_544         0x544    // 全局偏移量544
#define SYSTEM_INIT_OFFSET_GLOBAL_3F4         0x3f4    // 全局偏移量3F4
#define SYSTEM_INIT_OFFSET_GLOBAL_3F0         0x3f0    // 全局偏移量3F0
#define SYSTEM_INIT_OFFSET_GLOBAL_3A0         0x3a0    // 全局偏移量3A0
#define SYSTEM_INIT_OFFSET_STACK_3D0          0x3d0    // 栈偏移量3D0
#define SYSTEM_INIT_OFFSET_STACK_3D4          0x3d4    // 栈偏移量3D4
#define SYSTEM_INIT_OFFSET_STACK_3D5          0x3d5    // 栈偏移量3D5
#define SYSTEM_INIT_OFFSET_STACK_5B           0x5b     // 栈偏移量5B
#define SYSTEM_INIT_OFFSET_STACK_55           0x55     // 栈偏移量55
#define SYSTEM_INIT_OFFSET_STACK_54           0x54     // 栈偏移量54
#define SYSTEM_INIT_OFFSET_STACK_5C           0x5c     // 栈偏移量5C
#define SYSTEM_INIT_OFFSET_STACK_620          0x620    // 栈偏移量620
#define SYSTEM_INIT_OFFSET_STACK_628          0x628    // 栈偏移量628
#define SYSTEM_INIT_OFFSET_STACK_650          0x650    // 栈偏移量650
#define SYSTEM_INIT_OFFSET_STACK_658          0x658    // 栈偏移量658
#define SYSTEM_INIT_OFFSET_STACK_660          0x660    // 栈偏移量660
#define SYSTEM_INIT_OFFSET_STACK_768          0x768    // 栈偏移量768
#define SYSTEM_INIT_OFFSET_STACK_7A0          0x7a0    // 栈偏移量7A0
#define SYSTEM_INIT_OFFSET_STACK_7A8          0x7a8    // 栈偏移量7A8
#define SYSTEM_INIT_OFFSET_STACK_9F8          0x9f8    // 栈偏移量9F8
#define SYSTEM_INIT_OFFSET_STACK_A28          0xa28    // 栈偏移量A28
#define SYSTEM_INIT_OFFSET_STACK_A30          0xa30    // 栈偏移量A30
#define SYSTEM_INIT_OFFSET_STACK_A38          0xa38    // 栈偏移量A38
#define SYSTEM_INIT_OFFSET_STACK_A90          0xa90    // 栈偏移量A90
#define SYSTEM_INIT_OFFSET_STACK_56           0x56     // 栈偏移量56
#define SYSTEM_INIT_OFFSET_STACK_A4           0xa4     // 栈偏移量A4
#define SYSTEM_INIT_OFFSET_STACK_62           0x62     // 栈偏移量62
#define SYSTEM_INIT_OFFSET_STACK_9A           0x9a     // 栈偏移量9A
#define SYSTEM_INIT_OFFSET_STACK_7D           0x7d     // 栈偏移量7D

// 魔法数字常量
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_RARO      0x7261726f  // 字符串"raro"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SERE      0x73655279  // 字符串"seRe"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_CRUO      0x6372756f  // 字符串"cruo"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SELDOM_   0x53454c55444f4d5f  // 字符串"SELDOM_"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_DEVICE_1  0x6a624f656e656353  // 设备字符串1的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_DEVICE_2  0x6e656373  // 设备字符串2的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_DEVICE_3  0x65  // 设备字符串3的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_POOL_1    0x6563732f  // 池字符串1的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_POOL_2    0x65637378  // 池字符串2的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_POOL_3    0x656e  // 池字符串3的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SOME_1   0x73736f50  // 字符串"PosP"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SOME_2   0x656c6269  // 字符串"ible"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SOME_3   0x61656420  // 字符串"dea "的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SOME_4   0x636f6c64  // 字符串"cold"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SOME_5   0x6420656e  // 字符串"d en"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SOME_6   0x6e206469  // 字符串"n di"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SOME_7   0x7220746f  // 字符串"r to"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SOME_8   0x65646e65  // 字符串"edne"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SOME_9   0x6d617266  // 字符串"fram"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SOME_10  0x6f662065  // 字符串"of e"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SOME_11  0x73646e6f63657320  // 字符串"sdnoces "的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SOME_12  0x65766544  // 字符串"Deve"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SOME_13  0x65706f6c  // 字符串"epol"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SOME_14  0x6e692072  // 字符串"ni r"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SOME_15  0x76726574  // 字符串"vert"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SOME_16  0x69746e65  // 字符串"itne"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SOME_17  0x73206e6f  // 字符串"s no"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SOME_18  0x65676775  // 字符串"eggu"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_SOME_19  0x64657473  // 字符串"dets"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_DEVICE_4  0x3a757067  // 设备字符串4的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_DEVICE_5  0x3a757063  // 设备字符串5的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_EDIT_1    0x6320726f74696445  // 字符串"Edit roc"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_EDIT_2    0x67  // 字符串"g"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_DEV_1     0x65766544  // 字符串"Deve"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_DEV_2     0x6d706f6c  // 字符串"mpol"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_DEV_3     0x666e6f63  // 字符串"fnoc"的十六进制表示
#define SYSTEM_INIT_MAGIC_COOKIE_STRING_DEV_4     0x6e  // 字符串"n"的十六进制表示

// 特殊值常量
#define SYSTEM_INIT_SPECIAL_VALUE_3FFFFFF         0x3ffffff  // 特殊值3FFFFFF
#define SYSTEM_INIT_SPECIAL_VALUE_548             0x548      // 特殊值548
#define SYSTEM_INIT_SPECIAL_VALUE_3D072B02        0x3d072b02 // 特殊值3D072B02
#define SYSTEM_INIT_SPECIAL_VALUE_SIZE_COMPARE0   0x10       // 大小比较值0

// 浮点数常量
#define SYSTEM_INIT_FLOAT_VALUE_0_5_HEX          0x3f000000  // 浮点数0.5的十六进制表示
#define SYSTEM_INIT_FLOAT_VALUE_MAX_FLOAT         0x7f7fffff  // 最大浮点数的十六进制表示

// 上下文索引常量
#define SYSTEM_INIT_CONTEXT_INDEX_RESOURCE_BASE8   0x3a       // 资源基础索引8
EOF

# 使用sed进行替换
sed -i "s/0x7261726f/SYSTEM_INIT_MAGIC_COOKIE_STRING_RARO/g" "$FILE_PATH"
sed -i "s/0x73655279/SYSTEM_INIT_MAGIC_COOKIE_STRING_SERE/g" "$FILE_PATH"
sed -i "s/0x6372756f/SYSTEM_INIT_MAGIC_COOKIE_STRING_CRUO/g" "$FILE_PATH"
sed -i "s/0x53454c55444f4d5f/SYSTEM_INIT_MAGIC_COOKIE_STRING_SELDOM_/g" "$FILE_PATH"
sed -i "s/0x7ab8/SYSTEM_INIT_OFFSET_GLOBAL_7AB8/g" "$FILE_PATH"
sed -i "s/0x560/SYSTEM_INIT_OFFSET_GLOBAL_560/g" "$FILE_PATH"
sed -i "s/0x544/SYSTEM_INIT_OFFSET_GLOBAL_544/g" "$FILE_PATH"
sed -i "s/0x3f4/SYSTEM_INIT_OFFSET_GLOBAL_3F4/g" "$FILE_PATH"
sed -i "s/0x3f0/SYSTEM_INIT_OFFSET_GLOBAL_3F0/g" "$FILE_PATH"
sed -i "s/0x3a0/SYSTEM_INIT_OFFSET_GLOBAL_3A0/g" "$FILE_PATH"
sed -i "s/0x3d0/SYSTEM_INIT_OFFSET_STACK_3D0/g" "$FILE_PATH"
sed -i "s/0x3d4/SYSTEM_INIT_OFFSET_STACK_3D4/g" "$FILE_PATH"
sed -i "s/0x3d5/SYSTEM_INIT_OFFSET_STACK_3D5/g" "$FILE_PATH"
sed -i "s/0x5b/SYSTEM_INIT_OFFSET_STACK_5B/g" "$FILE_PATH"
sed -i "s/0x55/SYSTEM_INIT_OFFSET_STACK_55/g" "$FILE_PATH"
sed -i "s/0x54/SYSTEM_INIT_OFFSET_STACK_54/g" "$FILE_PATH"
sed -i "s/0x5c/SYSTEM_INIT_OFFSET_STACK_5C/g" "$FILE_PATH"
sed -i "s/0x620/SYSTEM_INIT_OFFSET_STACK_620/g" "$FILE_PATH"
sed -i "s/0x628/SYSTEM_INIT_OFFSET_STACK_628/g" "$FILE_PATH"
sed -i "s/0x650/SYSTEM_INIT_OFFSET_STACK_650/g" "$FILE_PATH"
sed -i "s/0x658/SYSTEM_INIT_OFFSET_STACK_658/g" "$FILE_PATH"
sed -i "s/0x660/SYSTEM_INIT_OFFSET_STACK_660/g" "$FILE_PATH"
sed -i "s/0x768/SYSTEM_INIT_OFFSET_STACK_768/g" "$FILE_PATH"
sed -i "s/0x7a0/SYSTEM_INIT_OFFSET_STACK_7A0/g" "$FILE_PATH"
sed -i "s/0x7a8/SYSTEM_INIT_OFFSET_STACK_7A8/g" "$FILE_PATH"
sed -i "s/0x9f8/SYSTEM_INIT_OFFSET_STACK_9F8/g" "$FILE_PATH"
sed -i "s/0xa28/SYSTEM_INIT_OFFSET_STACK_A28/g" "$FILE_PATH"
sed -i "s/0xa30/SYSTEM_INIT_OFFSET_STACK_A30/g" "$FILE_PATH"
sed -i "s/0xa38/SYSTEM_INIT_OFFSET_STACK_A38/g" "$FILE_PATH"
sed -i "s/0xa90/SYSTEM_INIT_OFFSET_STACK_A90/g" "$FILE_PATH"
sed -i "s/0x56/SYSTEM_INIT_OFFSET_STACK_56/g" "$FILE_PATH"
sed -i "s/0xa4/SYSTEM_INIT_OFFSET_STACK_A4/g" "$FILE_PATH"
sed -i "s/0x62/SYSTEM_INIT_OFFSET_STACK_62/g" "$FILE_PATH"
sed -i "s/0x9a/SYSTEM_INIT_OFFSET_STACK_9A/g" "$FILE_PATH"
sed -i "s/0x7d/SYSTEM_INIT_OFFSET_STACK_7D/g" "$FILE_PATH"

echo "美化完成！"