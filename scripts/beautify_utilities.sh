#!/bin/bash

# 美化06_utilities.c文件的脚本
# 主要处理重复的变量名和函数参数

# 处理重复的utility_resource_data变量名
# 根据上下文将其替换为更具体的名称

sed -i 's/utility_resource_data = \*(uint64_t \*)(utility_buffer_pointer + utility_iteration_index);/utility_current_resource_data = *(uint64_t *)(utility_buffer_pointer + utility_iteration_index);/g' TaleWorlds.Native/src/06_utilities.c

sed -i 's/utility_resource_data = utility_context_manager_initialize(utility_resource_data);/utility_initialized_resource = utility_context_manager_initialize(utility_current_resource_data);/g' TaleWorlds.Native/src/06_utilities.c

sed -i 's/utility_resource_data = utility_resource_manager_create(/utility_created_resource_handle = utility_resource_manager_create(/g' TaleWorlds.Native/src/06_utilities.c

sed -i 's/if ((int)utility_resource_data == 0) {/if ((int)utility_created_resource_handle == 0) {/g' TaleWorlds.Native/src/06_utilities.c

sed -i 's/utility_resource_data = 0;/utility_operation_result = 0;/g' TaleWorlds.Native/src/06_utilities.c

echo "变量名美化完成"