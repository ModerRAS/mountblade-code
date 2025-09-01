#!/bin/bash

# 批量重命名unwind函数的脚本
# 为06_utilities.c文件中的Unwind_函数提供语义化名称

# 定义函数映射
declare -A function_mappings=(
    # 资源验证和清理相关
    ["Unwind_1809034b0"]="ValidateResourceCleanup"
    ["Unwind_1809034c0"]="ValidateResourceCleanupSecondary"
    ["Unwind_1809034d0"]="ValidateResourceCleanupTertiary"
    ["Unwind_1809034e0"]="ValidateResourceCleanupQuaternary"
    ["Unwind_1809034f0"]="ValidateResourceCleanupQuinary"
    
    # 资源索引管理
    ["Unwind_180903500"]="ValidateResourceIndex"
    ["Unwind_180903510"]="ValidateResourceIndexSecondary"
    ["Unwind_180903520"]="ValidateResourceIndexTertiary"
    ["Unwind_180903540"]="ValidateResourceIndexQuaternary"
    ["Unwind_180903560"]="ValidateResourceIndexQuinary"
    ["Unwind_180903580"]="ValidateResourceIndexSenary"
    
    # 系统清理处理
    ["Unwind_180903590"]="ExecuteSystemCleanup"
    ["Unwind_1809035b0"]="ExecuteSystemCleanupSecondary"
    ["Unwind_1809035d0"]="ExecuteSystemCleanupTertiary"
    ["Unwind_1809035e0"]="ExecuteSystemCleanupQuaternary"
    ["Unwind_1809035f0"]="ExecuteSystemCleanupQuinary"
    ["Unwind_180903600"]="ExecuteSystemCleanupSenary"
    
    # 资源事务处理
    ["Unwind_180903610"]="ProcessResourceTransaction"
    ["Unwind_180903620"]="ProcessResourceTransactionSecondary"
    ["Unwind_180903640"]="ProcessResourceTransactionTertiary"
    ["Unwind_180903660"]="ProcessResourceTransactionQuaternary"
    ["Unwind_180903680"]="ProcessResourceTransactionQuinary"
    ["Unwind_1809036a0"]="ProcessResourceTransactionSenary"
    ["Unwind_1809036c0"]="ProcessResourceTransactionSeptenary"
    ["Unwind_1809036e0"]="ProcessResourceTransactionOctonary"
    ["Unwind_180903700"]="ProcessResourceTransactionNonary"
    ["Unwind_180903720"]="ProcessResourceTransactionDenary"
    
    # 内存验证
    ["Unwind_180903740"]="ValidateMemoryAccess"
    ["Unwind_180903760"]="ValidateMemoryAccessSecondary"
    ["Unwind_180903770"]="ValidateMemoryAccessTertiary"
    ["Unwind_180903790"]="ValidateMemoryAccessQuaternary"
    ["Unwind_1809037b0"]="ValidateMemoryAccessQuinary"
    ["Unwind_1809037d0"]="ValidateMemoryAccessSenary"
    ["Unwind_1809037f0"]="ValidateMemoryAccessSeptenary"
    ["Unwind_180903810"]="ValidateMemoryAccessOctonary"
    ["Unwind_180903830"]="ValidateMemoryAccessNonary"
    ["Unwind_180903850"]="ValidateMemoryAccessDenary"
    ["Unwind_180903870"]="ValidateMemoryAccessUndenary"
    ["Unwind_180903890"]="ValidateMemoryAccessDuodenary"
    
    # 上下文验证
    ["Unwind_1809038b0"]="ValidateContext"
    ["Unwind_1809038c0"]="ValidateContextSecondary"
    ["Unwind_1809038d0"]="ValidateContextTertiary"
    ["Unwind_1809038e0"]="ValidateContextQuaternary"
    
    # 异常处理
    ["Unwind_180903930"]="HandleExceptionCleanup"
    ["Unwind_180903950"]="HandleExceptionCleanupSecondary"
    ["Unwind_180903970"]="HandleExceptionCleanupTertiary"
    ["Unwind_180903990"]="HandleExceptionCleanupQuaternary"
    ["Unwind_1809039b0"]="HandleExceptionCleanupQuinary"
    ["Unwind_1809039d0"]="HandleExceptionCleanupSenary"
    ["Unwind_1809039f0"]="HandleExceptionCleanupSeptenary"
    ["Unwind_180903a10"]="HandleExceptionCleanupOctonary"
    ["Unwind_180903a30"]="HandleExceptionCleanupNonary"
    ["Unwind_180903a50"]="HandleExceptionCleanupDenary"
    ["Unwind_180903a70"]="HandleExceptionCleanupUndenary"
    ["Unwind_180903a90"]="HandleExceptionCleanupDuodenary"
    ["Unwind_180903ab0"]="HandleExceptionCleanupTredecenary"
    
    # 线程清理
    ["Unwind_180903ac0"]="CleanupThreadResources"
    ["Unwind_180903ad0"]="CleanupThreadResourcesSecondary"
    ["Unwind_180903ae0"]="CleanupThreadResourcesTertiary"
    ["Unwind_180903af0"]="CleanupThreadResourcesQuaternary"
    ["Unwind_180903b00"]="CleanupThreadResourcesQuinary"
    ["Unwind_180903b20"]="CleanupThreadResourcesSenary"
    ["Unwind_180903b40"]="CleanupThreadResourcesSeptenary"
    ["Unwind_180903b60"]="CleanupThreadResourcesOctonary"
    ["Unwind_180903b80"]="CleanupThreadResourcesNonary"
    ["Unwind_180903ba0"]="CleanupThreadResourcesDenary"
    ["Unwind_180903bc0"]="CleanupThreadResourcesUndenary"
    ["Unwind_180903be0"]="CleanupThreadResourcesDuodenary"
    ["Unwind_180903c00"]="CleanupThreadResourcesTredecenary"
    ["Unwind_180903c20"]="CleanupThreadResourcesQuattuordecenary"
    ["Unwind_180903c40"]="CleanupThreadResourcesQuindecenary"
    ["Unwind_180903c60"]="CleanupThreadResourcesSexdecenary"
    ["Unwind_180903c80"]="CleanupThreadResourcesSeptendecenary"
    ["Unwind_180903ca0"]="CleanupThreadResourcesOctodecenary"
    
    # 句柄验证
    ["Unwind_180903cc0"]="ValidateHandle"
    ["Unwind_180903cd0"]="ValidateHandleSecondary"
    ["Unwind_180903ce0"]="ValidateHandleTertiary"
    ["Unwind_180903cf0"]="ValidateHandleQuaternary"
    
    # 缓冲区清理
    ["Unwind_180903d10"]="CleanupBuffer"
    ["Unwind_180903d30"]="CleanupBufferSecondary"
    ["Unwind_180903d50"]="CleanupBufferTertiary"
    ["Unwind_180903d70"]="CleanupBufferQuaternary"
    ["Unwind_180903d90"]="CleanupBufferQuinary"
    ["Unwind_180903db0"]="CleanupBufferSenary"
    ["Unwind_180903dd0"]="CleanupBufferSeptenary"
    ["Unwind_180903df0"]="CleanupBufferOctonary"
    ["Unwind_180903e10"]="CleanupBufferNonary"
    ["Unwind_180903e30"]="CleanupBufferDenary"
    ["Unwind_180903e50"]="CleanupBufferUndenary"
    ["Unwind_180903e70"]="CleanupBufferDuodenary"
    ["Unwind_180903e90"]="CleanupBufferTredecenary"
    ["Unwind_180903eb0"]="CleanupBufferQuattuordecenary"
    ["Unwind_180903ed0"]="CleanupBufferQuindecenary"
    ["Unwind_180903ef0"]="CleanupBufferSexdecenary"
    
    # 数据验证
    ["Unwind_180903f10"]="ValidateData"
    ["Unwind_180903f30"]="ValidateDataSecondary"
    ["Unwind_180903f50"]="ValidateDataTertiary"
    ["Unwind_180903f70"]="ValidateDataQuaternary"
    ["Unwind_180903f90"]="ValidateDataQuinary"
    ["Unwind_180903fb0"]="ValidateDataSenary"
    ["Unwind_180903fd0"]="ValidateDataSeptenary"
    ["Unwind_180903ff0"]="ValidateDataOctonary"
    ["Unwind_180904010"]="ValidateDataNonary"
    ["Unwind_180904030"]="ValidateDataDenary"
    ["Unwind_180904050"]="ValidateDataUndenary"
    ["Unwind_180904070"]="ValidateDataDuodenary"
    ["Unwind_180904090"]="ValidateDataTredecenary"
    ["Unwind_1809040b0"]="ValidateDataQuattuordecenary"
    ["Unwind_1809040d0"]="ValidateDataQuindecenary"
    ["Unwind_1809040f0"]="ValidateDataSexdecenary"
    
    # 指针验证
    ["Unwind_180904100"]="ValidatePointer"
    ["Unwind_180904110"]="ValidatePointerSecondary"
    ["Unwind_180904120"]="ValidatePointerTertiary"
    ["Unwind_180904130"]="ValidatePointerQuaternary"
    ["Unwind_180904140"]="ValidatePointerQuinary"
    ["Unwind_180904150"]="ValidatePointerSenary"
    ["Unwind_180904160"]="ValidatePointerSeptenary"
    ["Unwind_180904180"]="ValidatePointerOctonary"
    ["Unwind_1809041a0"]="ValidatePointerNonary"
    ["Unwind_1809041b0"]="ValidatePointerDenary"
    ["Unwind_1809041d0"]="ValidatePointerUndenary"
    
    # 栈清理
    ["Unwind_1809041f0"]="CleanupStack"
    ["Unwind_180904210"]="CleanupStackSecondary"
    ["Unwind_180904230"]="CleanupStackTertiary"
    ["Unwind_180904250"]="CleanupStackQuaternary"
    ["Unwind_180904270"]="CleanupStackQuinary"
    ["Unwind_180904290"]="CleanupStackSenary"
    ["Unwind_1809042b0"]="CleanupStackSeptenary"
    ["Unwind_1809042d0"]="CleanupStackOctonary"
    ["Unwind_1809042f0"]="CleanupStackNonary"
    ["Unwind_180904310"]="CleanupStackDenary"
    ["Unwind_180904330"]="CleanupStackUndenary"
    ["Unwind_180904350"]="CleanupStackDuodenary"
    ["Unwind_180904370"]="CleanupStackTredecenary"
    ["Unwind_180904390"]="CleanupStackQuattuordecenary"
    ["Unwind_1809043b0"]="CleanupStackQuindecenary"
    ["Unwind_1809043d0"]="CleanupStackSexdecenary"
    ["Unwind_1809043f0"]="CleanupStackSeptendecenary"
    ["Unwind_180904410"]="CleanupStackOctodecenary"
    ["Unwind_180904430"]="CleanupStackNovemdecenary"
    ["Unwind_180904450"]="CleanupStackVigesimal"
    ["Unwind_180904470"]="CleanupStackUnvigesimal"
    ["Unwind_180904490"]="CleanupStackDuovigesimal"
    ["Unwind_1809044b0"]="CleanupStackTrevigesimal"
    ["Unwind_1809044d0"]="CleanupStackQuattuorvigesimal"
    ["Unwind_1809044f0"]="CleanupStackQuinvigesimal"
    ["Unwind_180904510"]="CleanupStackSexvigesimal"
    ["Unwind_180904530"]="CleanupStackSeptenvigesimal"
    ["Unwind_180904550"]="CleanupStackOctovigesimal"
    ["Unwind_180904570"]="CleanupStackNovemvigesimal"
    ["Unwind_180904590"]="CleanupStackTrigesimal"
    
    # 事务处理
    ["Unwind_1809046c0"]="ProcessTransaction"
    ["Unwind_1809046d0"]="ProcessTransactionSecondary"
    ["Unwind_1809046e0"]="ProcessTransactionTertiary"
    ["Unwind_180904700"]="ProcessTransactionQuaternary"
    ["Unwind_180904710"]="ProcessTransactionQuinary"
)

# 执行替换
for old_name in "${!function_mappings[@]}"; do
    new_name="${function_mappings[$old_name]}"
    echo "替换: $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
done

echo "Unwind函数重命名完成"