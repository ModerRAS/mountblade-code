#!/bin/bash

# 美化99_unmatched_functions.c中的undefined指针变量
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 替换指针变量为SystemPointer类型
sed -i 's/undefined EventExecutionPointer;/SystemPointer EventExecutionPointer;/g' 99_unmatched_functions.c
sed -i 's/undefined EventPriorityPointer;/SystemPointer EventPriorityPointer;/g' 99_unmatched_functions.c
sed -i 's/undefined EventOrderPointer;/SystemPointer EventOrderPointer;/g' 99_unmatched_functions.c
sed -i 's/undefined EventFilterPointer;/SystemPointer EventFilterPointer;/g' 99_unmatched_functions.c
sed -i 's/undefined SystemMessagePointer;/SystemPointer SystemMessagePointer;/g' 99_unmatched_functions.c
sed -i 's/undefined SystemInitializationPointer;/SystemPointer SystemInitializationPointer;/g' 99_unmatched_functions.c
sed -i 's/undefined SystemConfigurationPointer;/SystemPointer SystemConfigurationPointer;/g' 99_unmatched_functions.c
sed -i 's/undefined SystemControlPointer;/SystemPointer SystemControlPointer;/g' 99_unmatched_functions.c
sed -i 's/undefined SystemDataPointer;/SystemPointer SystemDataPointer;/g' 99_unmatched_functions.c
sed -i 's/undefined SystemMemoryPointer;/SystemPointer SystemMemoryPointer;/g' 99_unmatched_functions.c
sed -i 's/undefined SystemThreadPointer;/SystemPointer SystemThreadPointer;/g' 99_unmatched_functions.c
sed -i 's/undefined SystemSynchronizationPointer3;/SystemPointer SystemSynchronizationPointer3;/g' 99_unmatched_functions.c
sed -i 's/undefined SystemLockPointer;/SystemPointer SystemLockPointer;/g' 99_unmatched_functions.c
sed -i 's/undefined SystemQueuePointer;/SystemPointer SystemQueuePointer;/g' 99_unmatched_functions.c
sed -i 's/undefined SystemStackPointer;/SystemPointer SystemStackPointer;/g' 99_unmatched_functions.c

# 替换指针数组变量
sed -i 's/undefined\* SystemRuntimeDataPointer1;/SystemPointer SystemRuntimeDataPointer1;/g' 99_unmatched_functions.c
sed -i 's/undefined\* SystemRuntimeDataPointer2;/SystemPointer SystemRuntimeDataPointer2;/g' 99_unmatched_functions.c
sed -i 's/undefined\* SystemRuntimeDataPointer3;/SystemPointer SystemRuntimeDataPointer3;/g' 99_unmatched_functions.c
sed -i 's/undefined\* SystemRuntimeDataPointer4;/SystemPointer SystemRuntimeDataPointer4;/g' 99_unmatched_functions.c
sed -i 's/undefined\* SystemRuntimeDataPointer5;/SystemPointer SystemRuntimeDataPointer5;/g' 99_unmatched_functions.c

echo "指针变量美化完成"