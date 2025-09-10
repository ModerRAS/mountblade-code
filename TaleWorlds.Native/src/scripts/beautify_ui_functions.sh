#!/bin/bash

# UI系统函数美化脚本
# 用于替换04_ui_system.c文件中的FUN_函数名为语义化名称

# 简单的UI系统函数替换
sed -i 's/FUN_1807362fc/ResetUIComponentState/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180736a0e/InitializeUIRenderingBuffer/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# 为空函数添加注释
sed -i '/^void ResetUIComponentState(void)$/,/^}$/ {
    /^}$/ i\
  \/**\
   * @brief 重置UI组件状态\
   * \
   * 重置UI组件的状态到初始值，清除所有临时状态和数据\
   *\
   * @note 这是一个空函数实现，可能用于占位或未来扩展\
   */\
  
}' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

echo "UI系统函数美化完成"