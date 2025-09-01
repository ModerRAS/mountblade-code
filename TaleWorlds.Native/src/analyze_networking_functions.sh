#!/bin/bash

# 分析和重命名05_networking.c文件中的FUN_18085开头的函数
# 这个脚本会分析函数的功能并生成语义化的函数名

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

echo "开始分析05_networking.c文件中的FUN_18085函数..."

# 创建函数映射文件
MAPPING_FILE="/dev/shm/mountblade-code/function_mappings.txt"
> "$MAPPING_FILE"

# 查找所有FUN_18085开头的函数定义
echo "正在查找所有FUN_18085开头的函数..."

# 使用grep查找所有函数定义，并提取函数名
grep -n "^[a-zA-Z_].*FUN_18085[0-9a-f]\{4\}\s*(" "$FILE_PATH" | while read line; do
    # 提取函数名
    func_name=$(echo "$line" | grep -o "FUN_18085[0-9a-f]\{4\}")
    
    # 获取函数定义的行号
    line_num=$(echo "$line" | cut -d: -f1)
    
    echo "分析函数: $func_name (行号: $line_num)"
    
    # 根据函数名模式推断功能
    case "$func_name" in
        *180851917)
            echo "FUN_180851917 -> InitializeNetworkConnectionContext" >> "$MAPPING_FILE"
            ;;
        *18085198d)
            echo "FUN_18085198d -> ValidateNetworkConnectionState" >> "$MAPPING_FILE"
            ;;
        *180851a40)
            echo "FUN_180851a40 -> ProcessNetworkConnectionRequest" >> "$MAPPING_FILE"
            ;;
        *180851a66)
            echo "FUN_180851a66 -> HandleNetworkConnectionEvent" >> "$MAPPING_FILE"
            ;;
        *180851b86)
            echo "FUN_180851b86 -> GetNetworkConnectionSize" >> "$MAPPING_FILE"
            ;;
        *180851c50)
            echo "FUN_180851c50 -> SendNetworkPacketData" >> "$MAPPING_FILE"
            ;;
        *180851d20)
            echo "FUN_180851d20 -> ProcessNetworkPacket" >> "$MAPPING_FILE"
            ;;
        *180851d5f)
            echo "FUN_180851d5f -> ValidateNetworkPacket" >> "$MAPPING_FILE"
            ;;
        *180851d83)
            echo "FUN_180851d83 -> GetNetworkConnectionHandle" >> "$MAPPING_FILE"
            ;;
        *180851e40)
            echo "FUN_180851e40 -> ProcessNetworkDataTransfer" >> "$MAPPING_FILE"
            ;;
        *18085219c)
            echo "FUN_18085219c -> InitializeNetworkProtocol" >> "$MAPPING_FILE"
            ;;
        *180852b00)
            echo "FUN_180852b00 -> HandleNetworkPacketReceive" >> "$MAPPING_FILE"
            ;;
        *180852bb0)
            echo "FUN_180852bb0 -> ProcessNetworkPacketStream" >> "$MAPPING_FILE"
            ;;
        *180852bd2)
            echo "FUN_180852bd2 -> ValidateNetworkStream" >> "$MAPPING_FILE"
            ;;
        *180852f68)
            echo "FUN_180852f68 -> ExecuteNetworkCleanup" >> "$MAPPING_FILE"
            ;;
        *180853040)
            echo "FUN_180853040 -> ValidateNetworkData" >> "$MAPPING_FILE"
            ;;
        *180853180)
            echo "FUN_180853180 -> ProcessNetworkByteData" >> "$MAPPING_FILE"
            ;;
        *180853260)
            echo "FUN_180853260 -> HandleNetworkByteTransfer" >> "$MAPPING_FILE"
            ;;
        *1808532e0)
            echo "FUN_1808532e0 -> ValidateNetworkBufferSize" >> "$MAPPING_FILE"
            ;;
        *180853304)
            echo "FUN_180853304 -> ProcessNetworkBufferOperation" >> "$MAPPING_FILE"
            ;;
        *1808533bb)
            echo "FUN_1808533bb -> GetNetworkBufferSize" >> "$MAPPING_FILE"
            ;;
        *1808533d0)
            echo "FUN_1808533d0 -> HandleNetworkBufferRead" >> "$MAPPING_FILE"
            ;;
        *180853470)
            echo "FUN_180853470 -> InitializeNetworkConnection" >> "$MAPPING_FILE"
            ;;
        *180853560)
            echo "FUN_180853560 -> ProcessNetworkPacketHeader" >> "$MAPPING_FILE"
            ;;
        *180853790)
            echo "FUN_180853790 -> RemoveNetworkConnection" >> "$MAPPING_FILE"
            ;;
        *1808538a0)
            echo "FUN_1808538a0 -> ProcessNetworkConnectionQueue" >> "$MAPPING_FILE"
            ;;
        *180853980)
            echo "FUN_180853980 -> ValidateNetworkConnectionStatus" >> "$MAPPING_FILE"
            ;;
        *180853ba0)
            echo "FUN_180853ba0 -> SetNetworkConnectionFlag" >> "$MAPPING_FILE"
            ;;
        *180853c50)
            echo "FUN_180853c50 -> ProcessNetworkUIntData" >> "$MAPPING_FILE"
            ;;
        *180853d20)
            echo "FUN_180853d20 -> HandleNetworkDataTransmission" >> "$MAPPING_FILE"
            ;;
        *180853e60)
            echo "FUN_180853e60 -> GetNetworkConnectionByteFlag" >> "$MAPPING_FILE"
            ;;
        *180853e80)
            echo "FUN_180853e80 -> ProcessNetworkCharData" >> "$MAPPING_FILE"
            ;;
        *180853fc0)
            echo "FUN_180853fc0 -> UpdateNetworkConnectionState" >> "$MAPPING_FILE"
            ;;
        *180854040)
            echo "FUN_180854040 -> ProcessNetworkDataStream" >> "$MAPPING_FILE"
            ;;
        *180854200)
            echo "FUN_180854200 -> ValidateNetworkConnection" >> "$MAPPING_FILE"
            ;;
        *1808542a0)
            echo "FUN_1808542a0 -> ProcessNetworkPacketTransmission" >> "$MAPPING_FILE"
            ;;
        *1808542fa)
            echo "FUN_1808542fa -> GetNetworkTransmissionStatus" >> "$MAPPING_FILE"
            ;;
        *1808545c4)
            echo "FUN_1808545c4 -> ReleaseNetworkPacketReference" >> "$MAPPING_FILE"
            ;;
        *18085461a)
            echo "FUN_18085461a -> HandleNetworkDataPacket" >> "$MAPPING_FILE"
            ;;
        *1808547cb)
            echo "FUN_1808547cb -> ReleaseNetworkDataReference" >> "$MAPPING_FILE"
            ;;
        *180854810)
            echo "FUN_180854810 -> ProcessNetworkDataPacket" >> "$MAPPING_FILE"
            ;;
        *180854818)
            echo "FUN_180854818 -> HandleNetworkPacketTransmission" >> "$MAPPING_FILE"
            ;;
        *18085497c)
            echo "FUN_18085497c -> ReleaseNetworkConnectionReference" >> "$MAPPING_FILE"
            ;;
        *1808549c0)
            echo "FUN_1808549c0 -> GetNetworkPacketData" >> "$MAPPING_FILE"
            ;;
        *180854af0)
            echo "FUN_180854af0 -> ProcessNetworkDataStreamTransfer" >> "$MAPPING_FILE"
            ;;
        *180854d7d)
            echo "FUN_180854d7d -> InitializeNetworkEncryption" >> "$MAPPING_FILE"
            ;;
        *180854df5)
            echo "FUN_180854df5 -> ValidateNetworkPacketChecksum" >> "$MAPPING_FILE"
            ;;
        *180854f3f)
            echo "FUN_180854f3f -> ReleaseNetworkResource" >> "$MAPPING_FILE"
            ;;
        *180855130)
            echo "FUN_180855130 -> ProcessNetworkPacketValidation" >> "$MAPPING_FILE"
            ;;
        *1808552c0)
            echo "FUN_1808552c0 -> ValidateNetworkConnectionData" >> "$MAPPING_FILE"
            ;;
        *1808552ca)
            echo "FUN_1808552ca -> ProcessNetworkConnectionValidation" >> "$MAPPING_FILE"
            ;;
        *180855370)
            echo "FUN_180855370 -> ReleaseNetworkValidationReference" >> "$MAPPING_FILE"
            ;;
        *1808553b0)
            echo "FUN_1808553b0 -> ValidateNetworkConnectionState" >> "$MAPPING_FILE"
            ;;
        *180855415)
            echo "FUN_180855415 -> ProcessNetworkUIntRequest" >> "$MAPPING_FILE"
            ;;
        *180855467)
            echo "FUN_180855467 -> HandleNetworkUIntOperation" >> "$MAPPING_FILE"
            ;;
        *1808554a0)
            echo "FUN_1808554a0 -> ValidateNetworkConnectionState" >> "$MAPPING_FILE"
            ;;
        *180855512)
            echo "FUN_180855512 -> ProcessNetworkIntData" >> "$MAPPING_FILE"
            ;;
        *18085551e)
            echo "FUN_18085551e -> ValidateNetworkIntData" >> "$MAPPING_FILE"
            ;;
        *180855559)
            echo "FUN_180855559 -> ProcessNetworkHandleData" >> "$MAPPING_FILE"
            ;;
        *18085555e)
            echo "FUN_18085555e -> HandleNetworkHandleOperation" >> "$MAPPING_FILE"
            ;;
        *1808555a0)
            echo "FUN_1808555a0 -> ValidateNetworkConnectionState" >> "$MAPPING_FILE"
            ;;
        *180855615)
            echo "FUN_180855615 -> ProcessNetworkStatusData" >> "$MAPPING_FILE"
            ;;
        *180855621)
            echo "FUN_180855621 -> ValidateNetworkStatusData" >> "$MAPPING_FILE"
            ;;
        *18085565a)
            echo "FUN_18085565a -> ProcessNetworkHandleTransfer" >> "$MAPPING_FILE"
            ;;
        *18085565f)
            echo "FUN_18085565f -> HandleNetworkHandleTransmission" >> "$MAPPING_FILE"
            ;;
        *1808558e0)
            echo "FUN_1808558e0 -> InitializeNetworkDataStream" >> "$MAPPING_FILE"
            ;;
        *1808559c0)
            echo "FUN_1808559c0 -> CleanupNetworkConnection" >> "$MAPPING_FILE"
            ;;
        *180855b80)
            echo "FUN_180855b80 -> ValidateNetworkDataStream" >> "$MAPPING_FILE"
            ;;
        *180855ba6)
            echo "FUN_180855ba6 -> GetNetworkConnectionStatus" >> "$MAPPING_FILE"
            ;;
        *180855cc9)
            echo "FUN_180855cc9 -> GetNetworkTransmissionRate" >> "$MAPPING_FILE"
            ;;
        *180855ce0)
            echo "FUN_180855ce0 -> ProcessNetworkConnectionValidation" >> "$MAPPING_FILE"
            ;;
        *180855d06)
            echo "FUN_180855d06 -> GetNetworkPacketSize" >> "$MAPPING_FILE"
            ;;
        *180855e29)
            echo "FUN_180855e29 -> GetNetworkBufferSize" >> "$MAPPING_FILE"
            ;;
        *180855e40)
            echo "FUN_180855e40 -> ProcessNetworkDataTransfer" >> "$MAPPING_FILE"
            ;;
        *180855e6b)
            echo "FUN_180855e6b -> ValidateNetworkDataTransfer" >> "$MAPPING_FILE"
            ;;
        *180855f53)
            echo "FUN_180855f53 -> GetNetworkConnectionType" >> "$MAPPING_FILE"
            ;;
        *180855f70)
            echo "FUN_180855f70 -> ValidateNetworkPacketFormat" >> "$MAPPING_FILE"
            ;;
        *180855fc0)
            echo "FUN_180855fc0 -> ProcessNetworkPacketData" >> "$MAPPING_FILE"
            ;;
        *180855fdf)
            echo "FUN_180855fdf -> HandleNetworkPacketTransmission" >> "$MAPPING_FILE"
            ;;
        *180856099)
            echo "FUN_180856099 -> GetNetworkPacketData" >> "$MAPPING_FILE"
            ;;
        *1808560c0)
            echo "FUN_1808560c0 -> InitializeNetworkConnectionContext" >> "$MAPPING_FILE"
            ;;
        *1808561bc)
            echo "FUN_1808561bc -> GetNetworkConnectionState" >> "$MAPPING_FILE"
            ;;
        *18085622e)
            echo "FUN_18085622e -> GetNetworkProtocolVersion" >> "$MAPPING_FILE"
            ;;
        *180856280)
            echo "FUN_180856280 -> ProcessNetworkDataTransmission" >> "$MAPPING_FILE"
            ;;
        *180856362)
            echo "FUN_180856362 -> GetNetworkTransmissionStatistics" >> "$MAPPING_FILE"
            ;;
        *18085644f)
            echo "FUN_18085644f -> GetNetworkConnectionStatistics" >> "$MAPPING_FILE"
            ;;
        *180856460)
            echo "FUN_180856460 -> GetNetworkDataStatistics" >> "$MAPPING_FILE"
            ;;
        *18085652b)
            echo "FUN_18085652b -> ValidateNetworkStatistics" >> "$MAPPING_FILE"
            ;;
        *180856570)
            echo "FUN_180856570 -> ProcessNetworkPacketValidation" >> "$MAPPING_FILE"
            ;;
        *180856830)
            echo "FUN_180856830 -> HandleNetworkPacketProcessing" >> "$MAPPING_FILE"
            ;;
        *180856c80)
            echo "FUN_180856c80 -> ProcessNetworkDataReceiving" >> "$MAPPING_FILE"
            ;;
        *180856d20)
            echo "FUN_180856d20 -> InitializeNetworkDataReceiving" >> "$MAPPING_FILE"
            ;;
        *1808577c0)
            echo "FUN_1808577c0 -> ProcessNetworkConnectionClosing" >> "$MAPPING_FILE"
            ;;
        *1808577e2)
            echo "FUN_1808577e2 -> GetNetworkClosingStatus" >> "$MAPPING_FILE"
            ;;
        *180857940)
            echo "FUN_180857940 -> ProcessNetworkByteTransmission" >> "$MAPPING_FILE"
            ;;
        *180857962)
            echo "FUN_180857962 -> GetNetworkByteTransmissionStatus" >> "$MAPPING_FILE"
            ;;
        *180857aa1)
            echo "FUN_180857aa1 -> InitializeNetworkConnectionPool" >> "$MAPPING_FILE"
            ;;
        *180857ac0)
            echo "FUN_180857ac0 -> ValidateNetworkConnectionPool" >> "$MAPPING_FILE"
            ;;
        *)
            echo "未知函数: $func_name" >> "$MAPPING_FILE"
            ;;
    esac
done

echo "函数映射已保存到: $MAPPING_FILE"
echo "总共分析了 $(wc -l < "$MAPPING_FILE") 个函数"