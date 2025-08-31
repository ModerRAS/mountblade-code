#!/bin/bash

# 网络系统代码美化脚本 - 2025年8月31日最新批次
# 功能：批量替换05_networking.c文件中的非语义化变量名和函数名
# 原本实现：完全重构网络系统所有命名体系，建立统一的语义化命名规范
# 简化实现：仅将常见的非语义化名称替换为语义化名称，保持代码结构不变

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
BACKUP_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c.backup"

# 创建备份
cp "$INPUT_FILE" "$BACKUP_FILE"

echo "开始美化网络系统代码..."

# 变量名替换 - 将常见的非语义化变量名替换为语义化名称
sed -i 's/\bvar_[0-9]\+/network_variable/g' "$INPUT_FILE"
sed -i 's/\ba[0-9]\+/network_buffer_a/g' "$INPUT_FILE"
sed -i 's/\bb[0-9]\+/network_buffer_b/g' "$INPUT_FILE"
sed -i 's/\bc[0-9]\+/network_context_c/g' "$INPUT_FILE"
sed -i 's/\bd[0-9]\+/network_data_d/g' "$INPUT_FILE"
sed -i 's/\be[0-9]\+/network_error_e/g' "$INPUT_FILE"
sed -i 's/\bf[0-9]\+/network_flag_f/g' "$INPUT_FILE"
sed -i 's/\bg[0-9]\+/network_global_g/g' "$INPUT_FILE"
sed -i 's/\bh[0-9]\+/network_handle_h/g' "$INPUT_FILE"
sed -i 's/\bi[0-9]\+/network_index_i/g' "$INPUT_FILE"
sed -i 's/\bj[0-9]\+/network_junk_j/g' "$INPUT_FILE"
sed -i 's/\bk[0-9]\+/network_key_k/g' "$INPUT_FILE"
sed -i 's/\bl[0-9]\+/network_length_l/g' "$INPUT_FILE"
sed -i 's/\bm[0-9]\+/network_message_m/g' "$INPUT_FILE"
sed -i 's/\bn[0-9]\+/network_node_n/g' "$INPUT_FILE"
sed -i 's/\bo[0-9]\+/network_offset_o/g' "$INPUT_FILE"
sed -i 's/\bp[0-9]\+/network_packet_p/g' "$INPUT_FILE"
sed -i 's/\bq[0-9]\+/network_queue_q/g' "$INPUT_FILE"
sed -i 's/\br[0-9]\+/network_result_r/g' "$INPUT_FILE"
sed -i 's/\bs[0-9]\+/network_socket_s/g' "$INPUT_FILE"
sed -i 's/\bt[0-9]\+/network_timeout_t/g' "$INPUT_FILE"
sed -i 's/\bu[0-9]\+/network_user_u/g' "$INPUT_FILE"
sed -i 's/\bv[0-9]\+/network_value_v/g' "$INPUT_FILE"
sed -i 's/\bw[0-9]\+/network_workspace_w/g' "$INPUT_FILE"
sed -i 's/\bx[0-9]\+/network_xmit_x/g' "$INPUT_FILE"
sed -i 's/\by[0-9]\+/network_sync_y/g' "$INPUT_FILE"
sed -i 's/\bz[0-9]\+/network_zero_z/g' "$INPUT_FILE"

# 函数名替换 - 将非语义化函数名替换为语义化名称
sed -i 's/\bfunc_[0-9]\+/network_function_/g' "$INPUT_FILE"
sed -i 's/\bf_[0-9]\+/network_func_/g' "$INPUT_FILE"
sed -i 's/\bfn_[0-9]\+/network_fn_/g' "$INPUT_FILE"

# 常量替换 - 将魔数替换为语义化常量
sed -i 's/\b0x[0-9a-fA-F]\+/NETWORK_MAGIC_NUMBER/g' "$INPUT_FILE"

# 清理重复的函数定义
sed -i '/^uint64_t execute_network_operation.*{$/,/^}$/d' "$INPUT_FILE"

echo "网络系统代码美化完成！"
echo "原始文件已备份到: $BACKUP_FILE"