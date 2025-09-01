#!/bin/bash

# 美化01_initialization.c文件的脚本
# 用于批量替换非语义化的变量名

# 美化变量名：system_stack_function -> system_initialization_stack_function
sed -i 's/system_stack_function/system_initialization_stack_function/g' TaleWorlds.Native/src/01_initialization.c

# 美化变量名：system_stack_function_ptr -> system_initialization_stack_function_ptr
sed -i 's/system_stack_function_ptr/system_initialization_stack_function_ptr/g' TaleWorlds.Native/src/01_initialization.c

# 美化变量名：context_current_ptr -> system_context_current_pointer
sed -i 's/context_current_ptr/system_context_current_pointer/g' TaleWorlds.Native/src/01_initialization.c

# 美化变量名：system_initialize_core -> system_initialize_core_components
sed -i 's/system_initialize_core/system_initialize_core_components/g' TaleWorlds.Native/src/01_initialization.c

# 美化其他常见的非语义化变量名
sed -i 's/local_/system_local_/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/stack_/system_stack_/g' TaleWorlds.Native/src/01_initialization.c
sed -i 's/param_/system_param_/g' TaleWorlds.Native/src/01_initialization.c

echo "变量名美化完成"