#!/bin/bash

# 05_networking.c 文件最终美化脚本
# 用于处理剩余的 FUN_ 函数、LAB_ 标签和变量重命名

# 设置文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 备份原始文件
cp "$FILE_PATH" "$FILE_PATH.backup_$(date +%Y%m%d_%H%M%S)"

echo "开始最终美化 05_networking.c 文件..."

# 第一阶段：重命名剩余的 FUN_ 函数
echo "第一阶段：重命名剩余的 FUN_ 函数..."

# 处理网络连接验证函数
sed -i 's/FUN_180899180/ValidateNetworkConnectionPacket/g' "$FILE_PATH"
sed -i 's/FUN_1808992f0/ProcessNetworkConnectionContextData/g' "$FILE_PATH"
sed -i 's/FUN_180899360/ProcessNetworkConnectionPacketValidation/g' "$FILE_PATH"
sed -i 's/FUN_1808993e0/ProcessNetworkConnectionPacketBuffer/g' "$FILE_PATH"
sed -i 's/FUN_180899650/HandleNetworkConnectionDataStream/g' "$FILE_PATH"
sed -i 's/FUN_180899740/ProcessNetworkConnectionStatus/g' "$FILE_PATH"
sed -i 's/FUN_180899763/ValidateNetworkConnectionHandle/g' "$FILE_PATH"
sed -i 's/FUN_1808997f0/ProcessNetworkConnectionBuffer/g' "$FILE_PATH"
sed -i 's/FUN_180899816/InitializeNetworkConnectionContext/g' "$FILE_PATH"
sed -i 's/FUN_1808998a0/HandleNetworkDataStream/g' "$FILE_PATH"
sed -i 's/FUN_180899950/ProcessNetworkConnectionState/g' "$FILE_PATH"
sed -i 's/FUN_1808999c1/HandleNetworkConnectionPacket/g' "$FILE_PATH"
sed -i 's/FUN_180899ae6/ValidateNetworkConnectionSecurity/g' "$FILE_PATH"
sed -i 's/FUN_180899f80/ProcessNetworkConnectionTimeout/g' "$FILE_PATH"
sed -i 's/FUN_180899fe0/HandleNetworkConnectionError/g' "$FILE_PATH"
sed -i 's/FUN_18089a059/ProcessNetworkConnectionValidation/g' "$FILE_PATH"
sed -i 's/FUN_18089a365/InitializeNetworkConnectionSystem/g' "$FILE_PATH"
sed -i 's/FUN_18089a370/ProcessNetworkConnectionTransfer/g' "$FILE_PATH"
sed -i 's/FUN_18089a51d/ValidateNetworkConnectionIntegrity/g' "$FILE_PATH"
sed -i 's/FUN_18089a685/CleanupNetworkConnectionResources/g' "$FILE_PATH"
sed -i 's/FUN_18089a690/HandleNetworkConnectionDataStream/g' "$FILE_PATH"
sed -i 's/FUN_18089a6e8/ProcessNetworkConnectionSecurity/g' "$FILE_PATH"
sed -i 's/FUN_18089a73c/FinalizeNetworkConnectionProcessing/g' "$FILE_PATH"

# 第二阶段：美化变量名
echo "第二阶段：美化变量名..."

# 处理 Data2 类型
sed -i 's/(Data2)/(NetworkData16)/g' "$FILE_PATH"
sed -i 's/\* (Data2 \*/\* (NetworkData16 \*/g' "$FILE_PATH"

# 处理 Data3 类型
sed -i 's/Data3 /NetworkData24 /g' "$FILE_PATH"

# 处理 NetworkContextData 变量
sed -i 's/NetworkContextData78/NetworkContextValidationOffset/g' "$FILE_PATH"
sed -i 's/NetworkContextData2B8/NetworkContextExtendedBuffer/g' "$FILE_PATH"
sed -i 's/NetworkContextData2A0/NetworkContextPrimaryBuffer/g' "$FILE_PATH"
sed -i 's/networkSecurityContextData8/networkSecurityContextBuffer/g' "$FILE_PATH"
sed -i 's/NetworkStatusData27C/NetworkStatusValidationBuffer/g' "$FILE_PATH"

# 处理 NetworkConnectionData 变量
sed -i 's/NetworkConnectionData2D0/NetworkConnectionLowByte/g' "$FILE_PATH"
sed -i 's/NetworkConnectionData2D8/NetworkConnectionMidByte/g' "$FILE_PATH"
sed -i 's/NetworkConnectionData2E8/NetworkConnectionHighByte/g' "$FILE_PATH"

# 第三阶段：美化标签名
echo "第三阶段：美化标签名..."

# 处理主要的 LAB_ 标签
sed -i 's/LAB_180872f61:/LAB_ProcessPacketTransfer:/g' "$FILE_PATH"
sed -i 's/LAB_180872ff9:/LAB_HandleTimeoutStatus:/g' "$FILE_PATH"
sed -i 's/LAB_1808730e3:/LAB_ProcessConnectionBuffer:/g' "$FILE_PATH"
sed -i 's/LAB_18087317c:/LAB_ProcessConnectionStatus:/g' "$FILE_PATH"
sed -i 's/LAB_18087320a:/LAB_ProcessConnectionFlags:/g' "$FILE_PATH"
sed -i 's/LAB_1808732e4:/LAB_FinalizeConnectionProcessing:/g' "$FILE_PATH"
sed -i 's/LAB_18089e70b:/LAB_ValidateConnectionSecurity:/g' "$FILE_PATH"
sed -i 's/LAB_180899456:/LAB_ValidateNetworkOperation:/g' "$FILE_PATH"

# 第四阶段：清理旧的注释
echo "第四阶段：清理旧的注释..."

# 清理原始函数名注释
sed -i '/^\/\/ 函数:.*FUN_1808[0-9a-f]\+/d' "$FILE_PATH"
sed -i '/^\* 原始函数名为FUN_1808[0-9a-f]\+/d' "$FILE_PATH"
sed -i '/^\* 原始函数名: FUN_1808[0-9a-f]\+/d' "$FILE_PATH"

echo "美化完成！"
echo "原始文件已备份为: $FILE_PATH.backup_$(date +%Y%m%d_%H%M%S)"
echo "美化后的文件: $FILE_PATH"

# 验证修改
echo "验证修改..."
if [ -f "$FILE_PATH" ]; then
    echo "文件存在，修改成功"
    
    # 显示修改统计
    echo "修改统计："
    echo "剩余 FUN_ 函数数量："
    grep -c "FUN_1808" "$FILE_PATH" || echo "0"
    echo "剩余 LAB_ 标签数量："
    grep -c "LAB_1808" "$FILE_PATH" || echo "0"
    echo "剩余 Data2/Data3 类型数量："
    grep -c "Data[23]" "$FILE_PATH" || echo "0"
    
else
    echo "文件不存在，修改失败"
    exit 1
fi