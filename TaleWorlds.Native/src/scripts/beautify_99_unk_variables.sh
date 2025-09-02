#!/bin/bash

# 批量美化99_unmatched_functions.c文件中的UNK_变量名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建临时脚本文件
cat > rename_unk_variables.sh << 'EOF'
#!/bin/bash

# 系统配置相关指针
sed -i 's/undefined UNK_180a00490;/undefined* SystemContextDataPointer490;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_180a00a00;/undefined* SystemGlobalStatePointerA00;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_180a00ab8;/undefined* SystemSecurityContextPointerAB8;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_180a00ac8;/undefined* SystemValidationDataPointerAC8;/g' 99_unmatched_functions.c

# 系统管理相关指针
sed -i 's/undefined UNK_180a00e18;/undefined* SystemEventHandlerPointerE18;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_180a01170;/undefined* SystemTaskSchedulerPointer1170;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_180a04130;/undefined* SystemPerformanceMonitorPointer4130;/g' 99_unmatched_functions.c

# 数据流处理相关指针
sed -i 's/undefined UNK_1800adcc0;/undefined* SystemDataFlowProcessorDCC0;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_180a01928;/undefined* SystemMemoryManager1928;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_180a025d0;/undefined* SystemThreadManager25D0;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_180a026c0;/undefined* SystemProcessManager26C0;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_180a026d0;/undefined* SystemServiceManager26D0;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_180a026e0;/undefined* SystemComponentManager26E0;/g' 99_unmatched_functions.c

# 系统运行时相关指针
sed -i 's/undefined UNK_180a018e0;/undefined* SystemRuntimeContext18E0;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_180a01940;/undefined* SystemExecutionEnvironment1940;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_180a019a0;/undefined* SystemOperationContext19A0;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_180a01a28;/undefined* SystemResourceManager1A28;/g' 99_unmatched_functions.c
sed -i 's/undefined UNK_180a019f8;/undefined* SystemMemoryPool19F8;/g' 99_unmatched_functions.c

echo "UNK_变量名美化完成"
EOF

# 给脚本执行权限
chmod +x rename_unk_variables.sh

# 执行脚本
./rename_unk_variables.sh

# 删除临时脚本
rm rename_unk_variables.sh

echo "批量替换完成"