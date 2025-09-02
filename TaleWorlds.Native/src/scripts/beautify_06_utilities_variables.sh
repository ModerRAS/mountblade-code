#!/bin/bash

# 美化 06_utilities.c 文件中的变量名
# 将逆向工程中常见的变量名替换为更有意义的名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
BACKUP_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup"

# 创建备份
cp "$INPUT_FILE" "$BACKUP_FILE"
echo "已创建备份文件: $BACKUP_FILE"

# 执行变量名替换
echo "开始执行变量名替换..."

# 替换堆栈相关变量
sed -i 's/\bpuStack_\b/StackPointer_/g' "$INPUT_FILE"
sed -i 's/\buStack_\b/StackValue_/g' "$INPUT_FILE"
sed -i 's/\biStack_\b/StackIndex_/g' "$INPUT_FILE"
sed -i 's/\bfStack_\b/StackFloat_/g' "$INPUT_FILE"
sed -i 's/\bauStack_\b/StackArray_/g' "$INPUT_FILE"
sed -i 's/\bacStack_\b/StackCharArray_/g' "$INPUT_FILE"

# 替换未知变量
sed -i 's/\bunk_\b/Unknown_/g' "$INPUT_FILE"

# 替换函数相关变量
sed -i 's/\bsub_\b/Subroutine_/g' "$INPUT_FILE"
sed -i 's/\bfun_\b/Function_/g' "$INPUT_FILE"

# 替换局部变量
sed -i 's/\bloc_\b/Local_/g' "$INPUT_FILE"

# 替换参数变量
sed -i 's/\barg_\b/Argument_/g' "$INPUT_FILE"
sed -i 's/\bparam_\b/Parameter_/g' "$INPUT_FILE"

# 替换通用变量
sed -i 's/\bvar_\b/Variable_/g' "$INPUT_FILE"
sed -i 's/\btmp_\b/Temporary_/g' "$INPUT_FILE"

# 替换数据相关变量
sed -i 's/\bdat_\b/Data_/g' "$INPUT_FILE"

# 替换指针相关变量
sed -i 's/\bptr_\b/Pointer_/g' "$INPUT_FILE"

# 替换数组相关变量
sed -i 's/\barr_\b/Array_/g' "$INPUT_FILE"

# 替换字符串相关变量
sed -i 's/\bstr_\b/String_/g' "$INPUT_FILE"

# 替换计数相关变量
sed -i 's/\bcnt_\b/Count_/g' "$INPUT_FILE"
sed -i 's/\blen_\b/Length_/g' "$INPUT_FILE"

# 替换大小相关变量
sed -i 's/\bsz_\b/Size_/g' "$INPUT_FILE"

# 替换索引相关变量
sed -i 's/\bidx_\b/Index_/g' "$INPUT_FILE"

# 替换位置相关变量
sed -i 's/\bpos_\b/Position_/g' "$INPUT_FILE"

# 替换值相关变量
sed -i 's/\bval_\b/Value_/g' "$INPUT_FILE"

# 替换标志相关变量
sed -i 's/\bflag_\b/Flag_/g' "$INPUT_FILE"

# 替换状态相关变量
sed -i 's/\bstat_\b/Status_/g' "$INPUT_FILE"

# 替换结果相关变量
sed -i 's/\bres_\b/Result_/g' "$INPUT_FILE"
sed -i 's/\bret_\b/Return_/g' "$INPUT_FILE"

# 替换错误相关变量
sed -i 's/\berr_\b/Error_/g' "$INPUT_FILE"

# 替换上下文相关变量
sed -i 's/\bctx_\b/Context_/g' "$INPUT_FILE"

# 替换句柄相关变量
sed -i 's/\bhdl_\b/Handle_/g' "$INPUT_FILE"

# 替换对象相关变量
sed -i 's/\bobj_\b/Object_/g' "$INPUT_FILE"

# 替换缓冲区相关变量
sed -i 's/\bbuf_\b/Buffer_/g' "$INPUT_FILE"

# 替换内存相关变量
sed -i 's/\bmem_\b/Memory_/g' "$INPUT_FILE"

# 替换寄存器相关变量
sed -i 's/\breg_\b/Register_/g' "$INPUT_FILE"

# 替换配置相关变量
sed -i 's/\bcfg_\b/Config_/g' "$INPUT_FILE"

# 替换选项相关变量
sed -i 's/\bopt_\b/Option_/g' "$INPUT_FILE"

echo "变量名替换完成！"

# 验证替换结果
echo "验证替换结果..."
grep -n "puStack_\|uStack_\|iStack_\|fStack_\|auStack_\|acStack_\|unk_\|sub_\|fun_\|loc_\|arg_\|var_\|tmp_\|dat_\|ptr_\|arr_\|str_\|cnt_\|len_\|sz_\|idx_\|pos_\|val_\|flag_\|stat_\|res_\|ret_\|err_\|ctx_\|hdl_\|obj_\|buf_\|mem_\|reg_\|cfg_\|opt_\|param_" "$INPUT_FILE" | head -20 || echo "未找到需要替换的变量名"

echo "处理完成！"