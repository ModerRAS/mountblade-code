#!/bin/bash

# 美化 06_utilities.c 文件中的变量名
# 将逆向工程中常见的变量名替换为更有意义的名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
BACKUP_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup"

echo "开始美化 06_utilities.c 文件中的变量名..."

# 创建备份
cp "$INPUT_FILE" "$BACKUP_FILE"
echo "已创建备份文件: $BACKUP_FILE"

# 执行变量名替换
echo "正在替换堆栈相关变量..."
sed -i 's/\bpuStack_\b/StackPointer_/g' "$INPUT_FILE"
sed -i 's/\buStack_\b/StackValue_/g' "$INPUT_FILE"
sed -i 's/\biStack_\b/StackIndex_/g' "$INPUT_FILE"
sed -i 's/\bfStack_\b/StackFloat_/g' "$INPUT_FILE"
sed -i 's/\bauStack_\b/StackArray_/g' "$INPUT_FILE"
sed -i 's/\bacStack_\b/StackCharArray_/g' "$INPUT_FILE"

echo "正在替换其他变量..."
sed -i 's/\bunk_\b/Unknown_/g' "$INPUT_FILE"
sed -i 's/\bsub_\b/Subroutine_/g' "$INPUT_FILE"
sed -i 's/\bfun_\b/Function_/g' "$INPUT_FILE"
sed -i 's/\bloc_\b/Local_/g' "$INPUT_FILE"
sed -i 's/\barg_\b/Argument_/g' "$INPUT_FILE"
sed -i 's/\bparam_\b/Parameter_/g' "$INPUT_FILE"
sed -i 's/\bvar_\b/Variable_/g' "$INPUT_FILE"
sed -i 's/\btmp_\b/Temporary_/g' "$INPUT_FILE"
sed -i 's/\bdat_\b/Data_/g' "$INPUT_FILE"
sed -i 's/\bptr_\b/Pointer_/g' "$INPUT_FILE"
sed -i 's/\barr_\b/Array_/g' "$INPUT_FILE"
sed -i 's/\bstr_\b/String_/g' "$INPUT_FILE"
sed -i 's/\bcnt_\b/Count_/g' "$INPUT_FILE"
sed -i 's/\blen_\b/Length_/g' "$INPUT_FILE"
sed -i 's/\bsz_\b/Size_/g' "$INPUT_FILE"
sed -i 's/\bidx_\b/Index_/g' "$INPUT_FILE"
sed -i 's/\bpos_\b/Position_/g' "$INPUT_FILE"
sed -i 's/\bval_\b/Value_/g' "$INPUT_FILE"
sed -i 's/\bflag_\b/Flag_/g' "$INPUT_FILE"
sed -i 's/\bstat_\b/Status_/g' "$INPUT_FILE"
sed -i 's/\bres_\b/Result_/g' "$INPUT_FILE"
sed -i 's/\bret_\b/Return_/g' "$INPUT_FILE"
sed -i 's/\berr_\b/Error_/g' "$INPUT_FILE"
sed -i 's/\bctx_\b/Context_/g' "$INPUT_FILE"
sed -i 's/\bhdl_\b/Handle_/g' "$INPUT_FILE"
sed -i 's/\bobj_\b/Object_/g' "$INPUT_FILE"
sed -i 's/\bbuffer_\b/Buffer_/g' "$INPUT_FILE"
sed -i 's/\bbuf_\b/Buffer_/g' "$INPUT_FILE"
sed -i 's/\bmem_\b/Memory_/g' "$INPUT_FILE"
sed -i 's/\breg_\b/Register_/g' "$INPUT_FILE"
sed -i 's/\bcfg_\b/Config_/g' "$INPUT_FILE"
sed -i 's/\bopt_\b/Option_/g' "$INPUT_FILE"

echo "变量名替换完成！"

# 验证替换结果
echo "验证替换结果..."
REMAINING_VARS=$(grep -n "puStack_\|uStack_\|iStack_\|fStack_\|auStack_\|acStack_\|unk_\|sub_\|fun_\|loc_\|arg_\|var_\|tmp_\|dat_\|ptr_\|arr_\|str_\|cnt_\|len_\|sz_\|idx_\|pos_\|val_\|flag_\|stat_\|res_\|ret_\|err_\|ctx_\|hdl_\|obj_\|buf_\|mem_\|reg_\|cfg_\|opt_\|param_" "$INPUT_FILE" | wc -l)

if [ "$REMAINING_VARS" -eq 0 ]; then
    echo "✅ 所有变量名已成功替换！"
else
    echo "⚠️ 仍有 $REMAINING_VARS 个变量名未替换"
    echo "未替换的变量名："
    grep -n "puStack_\|uStack_\|iStack_\|fStack_\|auStack_\|acStack_\|unk_\|sub_\|fun_\|loc_\|arg_\|var_\|tmp_\|dat_\|ptr_\|arr_\|str_\|cnt_\|len_\|sz_\|idx_\|pos_\|val_\|flag_\|stat_\|res_\|ret_\|err_\|ctx_\|hdl_\|obj_\|buf_\|mem_\|reg_\|cfg_\|opt_\|param_" "$INPUT_FILE" | head -10
fi

echo "处理完成！美化后的文件：$INPUT_FILE"
echo "原始备份文件：$BACKUP_FILE"