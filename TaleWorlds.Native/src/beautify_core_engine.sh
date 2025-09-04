#!/bin/bash

# 美化02_core_engine.c文件中的变量名和函数名
# 这个脚本将批量替换文件中的变量名和函数名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原始文件
cp 02_core_engine.c 02_core_engine.c.backup

# 替换UNK_变量名为有意义的名称
sed -i 's/UNK_180a06058/SystemContextPrimary/g' 02_core_engine.c
sed -i 's/UNK_180a060c0/SystemContextSecondary/g' 02_core_engine.c
sed -i 's/UNK_180a06098/SystemContextTertiary/g' 02_core_engine.c
sed -i 's/UNK_180a06110/SystemContextQuaternary/g' 02_core_engine.c
sed -i 's/UNK_180a06140/SystemContextQuinary/g' 02_core_engine.c
sed -i 's/UNK_180a06158/SystemContextSenary/g' 02_core_engine.c
sed -i 's/UNK_180a06180/SystemContextSeptenary/g' 02_core_engine.c
sed -i 's/UNK_180a06198/SystemContextOctonary/g' 02_core_engine.c
sed -i 's/UNK_180a061b8/SystemContextNonary/g' 02_core_engine.c
sed -i 's/UNK_180a061d0/SystemContextDenary/g' 02_core_engine.c
sed -i 's/UNK_180a061e8/SystemContextUndenary/g' 02_core_engine.c
sed -i 's/UNK_180a06208/SystemContextDuodenary/g' 02_core_engine.c
sed -i 's/UNK_180a06220/SystemContextTredecenary/g' 02_core_engine.c
sed -i 's/UNK_180a06230/SystemContextQuattuordecenary/g' 02_core_engine.c
sed -i 's/UNK_180a06248/SystemContextQuindecenary/g' 02_core_engine.c
sed -i 's/UNK_180a06260/SystemContextSexdecenary/g' 02_core_engine.c
sed -i 's/UNK_180a06270/SystemContextSeptendecenary/g' 02_core_engine.c
sed -i 's/UNK_180a06280/SystemContextOctodecenary/g' 02_core_engine.c
sed -i 's/UNK_180a06290/SystemContextNovemdecenary/g' 02_core_engine.c
sed -i 's/UNK_180a06298/SystemContextVigesimal/g' 02_core_engine.c
sed -i 's/UNK_180a062b0/SystemContextUnvigesimal/g' 02_core_engine.c
sed -i 's/UNK_180a062c0/SystemContextDuovigesimal/g' 02_core_engine.c
sed -i 's/UNK_180a062d4/SystemContextTrevigesimal/g' 02_core_engine.c

# 替换其他UNK_变量
sed -i 's/UNK_180a06248/SystemStatusPrimary/g' 02_core_engine.c
sed -i 's/UNK_180a062b0/SystemStatusSecondary/g' 02_core_engine.c
sed -i 's/UNK_180a06298/SystemStatusTertiary/g' 02_core_engine.c
sed -i 's/UNK_180a062d4/SystemStatusQuaternary/g' 02_core_engine.c
sed -i 's/UNK_180a062c0/SystemStatusQuinary/g' 02_core_engine.c

# 替换栈相关变量
sed -i 's/UNK_18010c6e0/SystemStackBufferPrimary/g' 02_core_engine.c
sed -i 's/UNK_18010c6d0/SystemStackBufferSecondary/g' 02_core_engine.c
sed -i 's/UNK_18010c6b0/SystemStackBufferTertiary/g' 02_core_engine.c
sed -i 's/UNK_18010c690/SystemStackBufferQuaternary/g' 02_core_engine.c
sed -i 's/UNK_18010c630/SystemStackBufferQuinary/g' 02_core_engine.c

# 替换字符串相关变量
sed -i 's/UNK_180a06400/SystemStringTemplate/g' 02_core_engine.c
sed -i 's/UNK_180a06310/SystemStringBufferPrimary/g' 02_core_engine.c
sed -i 's/UNK_180a06320/SystemStringBufferSecondary/g' 02_core_engine.c
sed -i 's/UNK_180a06330/SystemStringBufferTertiary/g' 02_core_engine.c
sed -i 's/UNK_180a0633c/SystemStringBufferQuaternary/g' 02_core_engine.c
sed -i 's/UNK_180a0632c/SystemStringBufferQuinary/g' 02_core_engine.c

# 替换内存相关变量
sed -i 's/UNK_180a06340/SystemMemoryTemplate/g' 02_core_engine.c
sed -i 's/UNK_180a0634c/SystemMemoryMaskPrimary/g' 02_core_engine.c
sed -i 's/UNK_180a06350/SystemMemoryMaskSecondary/g' 02_core_engine.c
sed -i 's/UNK_180a06378/SystemMemoryAddressMask/g' 02_core_engine.c

# 替换数据相关变量
sed -i 's/UNK_180a06388/SystemDataTemplate/g' 02_core_engine.c
sed -i 's/UNK_180a06770/SystemDataBufferPrimary/g' 02_core_engine.c
sed -i 's/UNK_180a06768/SystemDataBufferSecondary/g' 02_core_engine.c
sed -i 's/UNK_180a0677c/SystemDataBufferTertiary/g' 02_core_engine.c

# 替换系统相关变量
sed -i 's/UNK_180a063c0/SystemConfigurationTemplate/g' 02_core_engine.c
sed -i 's/UNK_180a063b0/SystemEventTemplate/g' 02_core_engine.c
sed -i 's/UNK_180a063cc/SystemEventBuffer/g' 02_core_engine.c
sed -i 's/UNK_180a063d0/SystemEventQueue/g' 02_core_engine.c
sed -i 's/UNK_180a063f8/SystemValidationTemplate/g' 02_core_engine.c
sed -i 's/UNK_180a0640c/SystemValidationBuffer/g' 02_core_engine.c
sed -i 's/UNK_180a0644c/SystemCheckTemplate/g' 02_core_engine.c
sed -i 's/UNK_180a06468/SystemCheckBuffer/g' 02_core_engine.c
sed -i 's/UNK_180a06480/SystemCheckStatus/g' 02_core_engine.c
sed -i 's/UNK_180a06474/SystemCheckResult/g' 02_core_engine.c
sed -i 's/UNK_180a06475/SystemCheckFlag/g' 02_core_engine.c
sed -i 's/UNK_180a06598/SystemCheckResultSecondary/g' 02_core_engine.c
sed -i 's/UNK_180a06599/SystemCheckFlagSecondary/g' 02_core_engine.c

# 替换渲染相关变量
sed -i 's/UNK_180a064a8/SystemRenderTemplate/g' 02_core_engine.c
sed -i 's/UNK_180a06490/SystemRenderBuffer/g' 02_core_engine.c
sed -i 's/UNK_180a064a0/SystemRenderQueue/g' 02_core_engine.c

# 替换其他变量
sed -i 's/UNK_180a064c0/SystemFunctionTemplatePrimary/g' 02_core_engine.c
sed -i 's/UNK_180a064b0/SystemFunctionTemplateSecondary/g' 02_core_engine.c
sed -i 's/UNK_180a064d0/SystemFunctionTemplateTertiary/g' 02_core_engine.c
sed -i 's/UNK_180a064e0/SystemParameterTemplate/g' 02_core_engine.c
sed -i 's/UNK_180a064f0/SystemParameterBuffer/g' 02_core_engine.c
sed -i 's/UNK_180a06500/SystemParameterQueue/g' 02_core_engine.c
sed -i 's/UNK_180a06560/SystemPriorityTemplate/g' 02_core_engine.c
sed -i 's/UNK_180a06588/SystemPriorityBuffer/g' 02_core_engine.c

echo "变量名美化完成"