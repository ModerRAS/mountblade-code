#!/bin/bash

# 美化03_rendering.c文件中的寄存器变量名和标签名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/03_rendering.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 复制原文件到临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 美化寄存器变量名
sed -i 's/unaff_BPL/render_register_bpl/g' "$TEMP_FILE"
sed -i 's/unaff_RSI/render_register_rsi/g' "$TEMP_FILE"
sed -i 's/unaff_EDI/render_register_edi/g' "$TEMP_FILE"
sed -i 's/unaff_ESI/render_register_esi/g' "$TEMP_FILE"
sed -i 's/unaff_EBP/render_register_ebp/g' "$TEMP_FILE"
sed -i 's/unaff_EBX/render_register_ebx/g' "$TEMP_FILE"
sed -i 's/unaff_EDX/render_register_edx/g' "$TEMP_FILE"
sed -i 's/unaff_ECX/render_register_ecx/g' "$TEMP_FILE"
sed -i 's/unaff_EAX/render_register_eax/g' "$TEMP_FILE"
sed -i 's/unaff_RAX/render_register_rax/g' "$TEMP_FILE"
sed -i 's/unaff_RCX/render_register_rcx/g' "$TEMP_FILE"
sed -i 's/unaff_RDX/render_register_rdx/g' "$TEMP_FILE"
sed -i 's/unaff_RBX/render_register_rbx/g' "$TEMP_FILE"
sed -i 's/unaff_RSP/render_register_rsp/g' "$TEMP_FILE"
sed -i 's/unaff_RBP/render_register_rbp/g' "$TEMP_FILE"
sed -i 's/unaff_RSI/render_register_rsi/g' "$TEMP_FILE"
sed -i 's/unaff_RDI/render_register_rdi/g' "$TEMP_FILE"
sed -i 's/unaff_R8/render_register_r8/g' "$TEMP_FILE"
sed -i 's/unaff_R9/render_register_r9/g' "$TEMP_FILE"
sed -i 's/unaff_R10/render_register_r10/g' "$TEMP_FILE"
sed -i 's/unaff_R11/render_register_r11/g' "$TEMP_FILE"
sed -i 's/unaff_R12/render_register_r12/g' "$TEMP_FILE"
sed -i 's/unaff_R13/render_register_r13/g' "$TEMP_FILE"
sed -i 's/unaff_R14/render_register_r14/g' "$TEMP_FILE"
sed -i 's/unaff_R15/render_register_r15/g' "$TEMP_FILE"

# 美化XMM寄存器变量名
sed -i 's/unaff_XMM0/render_xmm_register_0/g' "$TEMP_FILE"
sed -i 's/unaff_XMM1/render_xmm_register_1/g' "$TEMP_FILE"
sed -i 's/unaff_XMM2/render_xmm_register_2/g' "$TEMP_FILE"
sed -i 's/unaff_XMM3/render_xmm_register_3/g' "$TEMP_FILE"
sed -i 's/unaff_XMM4/render_xmm_register_4/g' "$TEMP_FILE"
sed -i 's/unaff_XMM5/render_xmm_register_5/g' "$TEMP_FILE"
sed -i 's/unaff_XMM6/render_xmm_register_6/g' "$TEMP_FILE"
sed -i 's/unaff_XMM7/render_xmm_register_7/g' "$TEMP_FILE"

# 美化标签名 - 替换十六进制标签为语义化标签
sed -i 's/LAB_180[0-9a-fA-F]\+/render_label_jump/g' "$TEMP_FILE"

# 将临时文件复制回原文件
cp "$TEMP_FILE" "$INPUT_FILE"

# 删除临时文件
rm "$TEMP_FILE"

echo "03_rendering.c文件美化完成"