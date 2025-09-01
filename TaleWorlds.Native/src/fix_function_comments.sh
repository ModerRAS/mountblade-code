#!/bin/bash

# 脚本：修复函数注释不匹配问题
# 这个脚本会查找所有注释和函数名不匹配的地方，并进行修复

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"
TEMP_FILE="/tmp/initialization_fixed.c"

# 创建临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 查找并修复注释不匹配的函数
# 1. 初始化系统进程管理器函数
sed -i '/^\/\/ 函数: void InitializeSystemProcessManager(void)$/,/^void InitializeSystemProcessManager(void)$ {
    s/@brief 初始化系统内存节点管理器/@brief 初始化系统进程管理器/
    s/@brief 初始化系统事件数据节点管理器/@brief 初始化系统进程管理器/
    s/内存节点管理组件/进程管理组件/
    s/内存节点操作/进程管理操作/
    s/内存节点树/进程节点树/
    s/内存节点属性/进程管理节点属性/
    s/事件数据节点管理组件/进程管理组件/
    s/事件数据节点操作/进程管理操作/
    s/事件数据节点树/进程节点树/
    s/事件数据节点属性/进程管理节点属性/
}' "$TEMP_FILE"

# 2. 初始化系统存储管理器函数
sed -i '/^\/\/ 函数: void InitializeSystemStorageManager(void)$/,/^void InitializeSystemStringConfigurationManager(void)$ {
    s/@brief 初始化系统字符串配置管理器/@brief 初始化系统存储管理器/
    s/字符串配置管理组件/存储管理组件/
    s/字符串配置操作/存储管理操作/
    s/字符串配置标识符/存储管理标识符/
}' "$TEMP_FILE"

# 3. 初始化系统内存管理器函数
sed -i '/^\/\/ 函数: void InitializeSystemMemoryManager(void)$/,/^void InitializeSystemMemoryManager(void)$ {
    s/@brief 初始化系统字符串处理器/@brief 初始化系统内存管理器/
    s/字符串处理组件/内存管理组件/
    s/字符串处理操作/内存管理操作/
    s/字符串处理标识符/内存管理标识符/
}' "$TEMP_FILE"

# 4. 初始化系统线程管理器函数
sed -i '/^\/\/ 函数: void InitializeSystemThreadManager(void)$/,/^void InitializeSystemThreadManager(void)$ {
    s/@brief 初始化系统数据节点管理器/@brief 初始化系统线程管理器/
    s/数据节点管理组件/线程管理组件/
    s/数据节点操作/线程管理操作/
    s/数据节点标识符/线程管理标识符/
}' "$TEMP_FILE"

# 5. 初始化系统资源管理器函数
sed -i '/^\/\/ 函数: void InitializeSystemResourceManager(void)$/,/^void InitializeSystemResourceManager(void)$ {
    s/@brief 初始化系统节点管理器/@brief 初始化系统资源管理器/
    s/节点管理组件/资源管理组件/
    s/节点操作/资源管理操作/
    s/节点标识符/资源管理标识符/
}' "$TEMP_FILE"

# 应用修复
mv "$TEMP_FILE" "$INPUT_FILE"

echo "函数注释修复完成"