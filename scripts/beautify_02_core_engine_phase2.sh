#!/bin/bash

# 继续美化02_core_engine.c中的函数名
# 这是一个简化实现，仅处理部分常见的非语义化函数名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"

# 处理更多函数定义
sed -i 's/FUN_180030370/engine_system_init_phase_1/g' "$INPUT_FILE"
sed -i 's/FUN_180030470/engine_system_init_phase_2/g' "$INPUT_FILE"
sed -i 's/FUN_180030570/engine_system_init_phase_3/g' "$INPUT_FILE"
sed -i 's/FUN_180030670/engine_system_init_phase_4/g' "$INPUT_FILE"
sed -i 's/FUN_180030870/engine_system_init_phase_5/g' "$INPUT_FILE"
sed -i 's/FUN_180030900/engine_system_init_phase_6/g' "$INPUT_FILE"
sed -i 's/FUN_180031a10/engine_memory_setup_primary/g' "$INPUT_FILE"
sed -i 's/FUN_180031b10/engine_memory_setup_secondary/g' "$INPUT_FILE"
sed -i 's/FUN_180031c10/engine_memory_setup_tertiary/g' "$INPUT_FILE"
sed -i 's/FUN_180031d10/engine_memory_setup_quaternary/g' "$INPUT_FILE"
sed -i 's/FUN_180031e10/engine_thread_setup_primary/g' "$INPUT_FILE"
sed -i 's/FUN_180031f10/engine_thread_setup_secondary/g' "$INPUT_FILE"
sed -i 's/FUN_180032010/engine_thread_setup_tertiary/g' "$INPUT_FILE"
sed -i 's/FUN_180032110/engine_thread_setup_quaternary/g' "$INPUT_FILE"
sed -i 's/FUN_180032210/engine_resource_setup_primary/g' "$INPUT_FILE"
sed -i 's/FUN_180032310/engine_resource_setup_secondary/g' "$INPUT_FILE"
sed -i 's/FUN_180032410/engine_resource_setup_tertiary/g' "$INPUT_FILE"
sed -i 's/FUN_180032510/engine_resource_setup_quaternary/g' "$INPUT_FILE"
sed -i 's/FUN_1800325a0/engine_event_setup_primary/g' "$INPUT_FILE"
sed -i 's/FUN_1800326a0/engine_event_setup_secondary/g' "$INPUT_FILE"
sed -i 's/FUN_1800327a0/engine_event_setup_tertiary/g' "$INPUT_FILE"
sed -i 's/FUN_1800328a0/engine_event_setup_quaternary/g' "$INPUT_FILE"
sed -i 's/FUN_1800329a0/engine_service_setup_primary/g' "$INPUT_FILE"
sed -i 's/FUN_180032aa0/engine_service_setup_secondary/g' "$INPUT_FILE"
sed -i 's/FUN_180032ba0/engine_service_setup_tertiary/g' "$INPUT_FILE"
sed -i 's/FUN_180032ca0/engine_service_setup_quaternary/g' "$INPUT_FILE"
sed -i 's/FUN_180032d30/engine_service_setup_complete/g' "$INPUT_FILE"

echo "第二批函数美化完成"