#!/bin/bash

# 美化01_initialization.c文件中的函数名
# 将FUN_函数名改为有意义的名称

echo "开始美化01_initialization.c文件中的函数名..."

# 定义函数映射表
declare -A function_map=(
    ["FUN_18004ca00"]="ExecuteSystemResourceCallback"
    ["FUN_18004caa0"]="SystemMemoryTemplateCleanup"
    ["FUN_18004d020"]="ProcessSystemResourceAllocation"
    ["FUN_18004e5f0"]="UpdateSystemRenderManager"
    ["FUN_18004e7a0"]="GetSystemResourceStatus"
    ["FUN_18004eb00"]="ProcessSystemResourceData"
    ["FUN_18004f8e0"]="InitializeSystemResourceContext"
    ["FUN_18004f900"]="ConfigureSystemResourceParameters"
    ["FUN_180050b00"]="SetupSystemGraphicsContext"
    ["FUN_180051d40"]="CreateSystemResourceReference"
    ["FUN_180051de4"]="ReleaseSystemResourceHandle"
    ["FUN_180051e74"]="UpdateSystemResourceState"
    ["FUN_180051eef"]="CleanupSystemResourceData"
    ["FUN_180051f00"]="ValidateSystemResource"
    ["FUN_180052020"]="ProcessSystemResourceCommand"
    ["FUN_180052070"]="ExecuteSystemResourceOperation"
    ["FUN_180052200"]="HandleSystemResourceRequest"
    ["FUN_1800524c0"]="GetSystemResourceInfo"
    ["FUN_180052940"]="ProcessSystemResourceParameter"
    ["FUN_180052ef0"]="UpdateSystemResourceConfiguration"
    ["FUN_180053200"]="InitializeSystemResourceBuffer"
    ["FUN_1800533d0"]="ConfigureSystemResourceMemory"
    ["FUN_180054120"]="ExecuteSystemResourceTask"
    ["FUN_180054360"]="ProcessSystemResourceDataTransfer"
    ["FUN_1800547b0"]="SystemResourceMaintenanceRoutine"
    ["FUN_180055050"]="InitializeSystemResourcePool"
    ["FUN_180055e10"]="SetupSystemResourceHandle"
    ["FUN_180055e30"]="ConfigureSystemResourceSettings"
    ["FUN_180055e60"]="ReleaseSystemResourceMemory"
    ["FUN_180055e80"]="GetSystemResourceMemorySize"
    ["FUN_180055ed0"]="CleanupSystemResourceAllocation"
    ["FUN_180055f20"]="InitializeSystemResourceContext"
    ["FUN_180055f50"]="UpdateSystemResourceConfiguration"
    ["FUN_180055f70"]="ConfigureSystemResourceParameters"
    ["FUN_180056150"]="ProcessSystemResourceUpdate"
    ["FUN_180056410"]="ExecuteSystemResourceCommand"
    ["FUN_1800565f0"]="FinalizeSystemResourceSetup"
)

# 遍历所有函数映射并执行替换
for old_name in "${!function_map[@]}"; do
    new_name="${function_map[$old_name]}"
    echo "替换函数: $old_name -> $new_name"
    
    # 替换函数定义
    sed -i "s/void $old_name(/void $new_name(/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
    
    # 替换函数调用
    sed -i "s/$old_name(/$new_name(/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
    
    # 替换注释中的函数名
    sed -i "s/函数:.*$old_name/函数: $new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c
done

echo "函数名替换完成"

# 清理重复的注释块
echo "清理重复的注释块..."

# 删除重复的注释块（保留最后一个）
awk '
/^\/\*\*$/ {
    if (in_comment) {
        # 删除之前的注释块
        while (getline > 0 && !/^\s*\*\//) {
            # 跳过注释内容
        }
        if ($0 ~ /^\s*\*\//) {
            # 跳过结束标记
            getline
        }
    }
    in_comment = 1
    comment_start = NR
    comment_lines = $0 "\n"
    next
}

in_comment && /^\s*\*\// {
    in_comment = 0
    comment_lines = comment_lines $0 "\n"
    print comment_lines
    next
}

in_comment {
    comment_lines = comment_lines $0 "\n"
    next
}

{ print }
' /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c > /tmp/temp_file.c

mv /tmp/temp_file.c /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c

echo "重复注释清理完成"

# 添加适当的函数注释
echo "添加函数注释..."

# 为一些关键函数添加注释
cat >> /dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c << 'EOF'

/**
 * @brief 执行系统资源回调函数
 * 
 * 该函数负责执行系统资源的回调函数，用于处理系统资源的异步操作。
 * 
 * @param SystemResourcePointer 系统资源指针
 */
void ExecuteSystemResourceCallback(long long *SystemResourcePointer);

/**
 * @brief 系统内存模板清理函数
 * 
 * 该函数负责清理系统内存模板，释放相关资源。
 * 
 * @param SystemResourcePointer 系统资源指针
 */
void SystemMemoryTemplateCleanup(void* *SystemResourcePointer);

/**
 * @brief 处理系统资源分配
 * 
 * 该函数负责处理系统资源的分配和管理操作。
 * 
 * @param SystemResourcePointer 系统资源指针
 * @param param_2 分配参数
 */
void ProcessSystemResourceAllocation(void* SystemResourcePointer, long long param_2);

/**
 * @brief 更新系统渲染管理器
 * 
 * 该函数负责更新系统渲染管理器的状态和参数。
 * 
 * @param SystemResourcePointer 系统资源指针
 */
void UpdateSystemRenderManager(long long SystemResourcePointer);

EOF

echo "函数注释添加完成"
echo "美化任务完成"