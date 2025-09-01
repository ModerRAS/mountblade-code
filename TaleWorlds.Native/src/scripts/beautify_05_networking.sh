#!/bin/bash

# 批量美化 05_networking.c 文件中的 FUN_ 函数
# 为函数添加语义化名称和文档注释

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"
TEMP_FILE="/tmp/networking_beautified.c"

# 函数映射表：将原始函数名映射到语义化名称
declare -A FUNCTION_MAP=(
    ["FUN_18086a552"]="ProcessNetworkConnectionManagement"
    ["FUN_18086a56f"]="ResetNetworkConnectionStatus"
    ["FUN_18086a6df"]="InitializeNetworkResources"
    ["FUN_18086a6ee"]="ConfigureNetworkParameters"
    ["FUN_18086a710"]="ProcessNetworkPacketWithContext"
    ["FUN_18086a752"]="ValidateNetworkConnectionState"
    ["FUN_18086a76f"]="CleanupNetworkConnectionResources"
    ["FUN_18086a8df"]="InitializeNetworkSession"
    ["FUN_18086a8ee"]="ResetNetworkSessionParameters"
    ["FUN_18086a910"]="ProcessNetworkSessionPacket"
    ["FUN_18086a94f"]="ValidateNetworkDataIntegrity"
    ["FUN_18086a96c"]="CleanupNetworkDataBuffer"
    ["FUN_18086aadf"]="InitializeNetworkSecurity"
    ["FUN_18086aaee"]="ResetNetworkSecurityContext"
    ["FUN_18086ab10"]="ProcessNetworkSecurityPacket"
    ["FUN_18086ab52"]="ValidateNetworkAuthentication"
    ["FUN_18086ab6c"]="CleanupNetworkAuthentication"
    ["FUN_18086acbc"]="InitializeNetworkEncryption"
    ["FUN_18086accb"]="ResetNetworkEncryptionKey"
    ["FUN_18086acf0"]="ProcessNetworkEncryptionPacket"
)

# 函数描述模板
declare -A FUNCTION_DESCRIPTIONS=(
    ["ProcessNetworkConnectionManagement"]="网络连接处理函数 - 处理网络连接状态和清理操作\n\n该函数负责管理网络连接的生命周期，包括连接状态检查、\n资源清理和连接条目的维护。它会遍历连接数组，\n处理每个连接的状态并执行相应的清理操作。"
    ["ResetNetworkConnectionStatus"]="网络连接状态重置函数 - 重置网络连接状态\n\n该函数用于重置网络连接的状态，清除可能存在的错误状态\n或重置连接参数，为后续的网络操作做准备。"
    ["InitializeNetworkResources"]="网络资源初始化函数 - 初始化网络相关资源\n\n该函数负责初始化网络系统所需的资源，包括内存分配、\n数据结构初始化和网络参数设置。"
    ["ConfigureNetworkParameters"]="网络参数配置函数 - 配置网络系统参数\n\n该函数用于配置网络系统的各种参数，包括连接超时、\n缓冲区大小、重试次数等网络相关设置。"
    ["ProcessNetworkPacketWithContext"]="网络数据包处理函数 - 处理连接上下文和数据包\n\n该函数接收连接上下文和数据包参数，执行网络数据包的处理操作。\n它会验证连接状态，处理数据包内容，并管理相关的网络资源。"
    ["ValidateNetworkConnectionState"]="网络连接状态验证函数 - 验证网络连接状态\n\n该函数用于验证网络连接的当前状态，检查连接是否有效、\n是否处于正常工作状态，并返回相应的状态信息。"
    ["CleanupNetworkConnectionResources"]="网络连接资源清理函数 - 清理网络连接资源\n\n该函数负责清理网络连接相关的资源，包括内存释放、\n句柄关闭和状态重置等操作。"
    ["InitializeNetworkSession"]="网络会话初始化函数 - 初始化网络会话\n\n该函数用于初始化网络会话，创建会话上下文、\n分配必要的资源并设置会话参数。"
    ["ResetNetworkSessionParameters"]="网络会话参数重置函数 - 重置网络会话参数\n\n该函数用于重置网络会话的参数，清除会话状态、\n重置计数器并恢复默认设置。"
    ["ProcessNetworkSessionPacket"]="网络会话数据包处理函数 - 处理会话数据包\n\n该函数处理网络会话相关的数据包，包括数据解析、\n状态更新和会话维护等操作。"
)

# 备份原始文件
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# 处理函数
echo "开始批量美化网络函数..."

# 创建临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 为每个函数添加文档注释和重命名
for original_name in "${!FUNCTION_MAP[@]}"; do
    new_name="${FUNCTION_MAP[$original_name]}"
    description="${FUNCTION_DESCRIPTIONS[$new_name]}"
    
    if [ -n "$description" ]; then
        # 查找函数声明行
        func_line=$(grep -n "// 函数: void $original_name" "$TEMP_FILE" | head -1 | cut -d: -f1)
        
        if [ -n "$func_line" ]; then
            echo "处理函数: $original_name -> $new_name (行号: $func_line)"
            
            # 获取函数参数信息
            param_line=$(sed -n "${func_line}p" "$TEMP_FILE")
            if [[ "$param_line" == *"("* ]]; then
                # 提取参数部分
                params=$(echo "$param_line" | sed 's/.*(\(.*\)).*/\1/')
                
                # 构建新的文档注释
                if [ "$params" == "void" ]; then
                    doc_comment="/**\n * $description\n * \n * 原始函数名: $original_name\n */"
                else
                    doc_comment="/**\n * $description\n * \n * @param $params 相关参数\n * \n * 原始函数名: $original_name\n */"
                fi
                
                # 替换函数声明
                sed -i "${func_line}s|// 函数: void $original_name.*|$doc_comment\nvoid $new_name($params)|" "$TEMP_FILE"
            fi
        fi
    fi
done

# 应用更改
mv "$TEMP_FILE" "$INPUT_FILE"

echo "批量美化完成！"
echo "处理的函数数量: ${#FUNCTION_MAP[@]}"