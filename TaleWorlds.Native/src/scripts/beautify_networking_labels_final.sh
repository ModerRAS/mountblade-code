#!/bin/bash

# 美化网络代码中的LAB_标签
# 将LAB_地址标签替换为语义化的名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 创建临时文件
TEMP_FILE=$(mktemp)

# 处理常见的LAB_标签，将它们替换为语义化的名称
sed -e 's/LAB_18084af68:/NetworkConnectionStatusCheck:/g' \
    -e 's/LAB_18084af88:/NetworkTimeoutCheck:/g' \
    -e 's/LAB_18084b131:/NetworkSecondaryStatusCheck:/g' \
    -e 's/LAB_18084b46d:/NetworkOperationLoop:/g' \
    -e 's/LAB_18084b4a9:/NetworkOperationComplete:/g' \
    -e 's/LAB_18084bb6f:/NetworkPacketProcessing:/g' \
    -e 's/LAB_18084bb9a:/NetworkPacketProcessed:/g' \
    -e 's/LAB_18084bff4:/NetworkDataTransfer:/g' \
    -e 's/LAB_18084c510:/NetworkConnectionLoop:/g' \
    -e 's/LAB_18084c923:/NetworkValidationStart:/g' \
    -e 's/LAB_18084ca76:/NetworkConnectionCheck:/g' \
    -e 's/LAB_18084cfd9:/NetworkDataProcessing:/g' \
    -e 's/LAB_18084d224:/NetworkContextCheck:/g' \
    -e 's/LAB_18084d22e:/NetworkContextValid:/g' \
    -e 's/LAB_18084d4b4:/NetworkOperationSuccess:/g' \
    -e 's/LAB_18084d5b4:/NetworkDataSent:/g' \
    -e 's/LAB_18084d7db:/NetworkReceiveLoop:/g' \
    -e 's/LAB_18084e5ba:/NetworkConnectionActive:/g' \
    -e 's/LAB_18084e841:/NetworkOperationFailed:/g' \
    -e 's/LAB_18084e8ab:/NetworkOperationComplete:/g' \
    -e 's/LAB_180853ee2:/NetworkTransferComplete:/g' \
    -e 's/LAB_18084efc3:/NetworkTertiaryStatusCheck:/g' \
    -e 's/LAB_18084f0bc:/NetworkConnectionLoop:/g' \
    -e 's/LAB_18084f283:/NetworkConnectionValid:/g' \
    -e 's/LAB_18084f34c:/NetworkDataProcessed:/g' \
    -e 's/LAB_18084f513:/NetworkOperationContinue:/g' \
    -e 's/LAB_18084f5dc:/NetworkPacketReceived:/g' \
    -e 's/LAB_18084f7a3:/NetworkDataHandled:/g' \
    -e 's/LAB_18084f88c:/NetworkStatusCheck:/g' \
    -e 's/LAB_18084f933:/NetworkPriorityCheck:/g' \
    -e 's/LAB_18084f970:/NetworkConnectionActive:/g' \
    -e 's/LAB_18084f987:/NetworkConnectionClosed:/g' \
    -e 's/LAB_18084faac:/NetworkErrorHandling:/g' \
    -e 's/LAB_18084fb35:/NetworkRetryOperation:/g' \
    -e 's/LAB_18084fc27:/NetworkOperationTimeout:/g' \
    -e 's/LAB_18084fc83:/NetworkFinalStatus:/g' \
    -e 's/LAB_18084fd6c:/NetworkNextOperation:/g' \
    -e 's/LAB_18084fe13:/NetworkDataFlow:/g' \
    -e 's/LAB_18084fe50:/NetworkConnectionOpen:/g' \
    -e 's/LAB_18084fe67:/NetworkDataTransfer:/g' \
    -e 's/LAB_18084ff8c:/NetworkAlternativePath:/g' \
    -e 's/LAB_180850015:/NetworkBackupRoute:/g' \
    -e 's/LAB_180850107:/NetworkSecondaryPath:/g' \
    -e 's/LAB_180850163:/NetworkTertiaryPath:/g' \
    -e 's/LAB_18085024c:/NetworkQuaternaryPath:/g' \
    -e 's/LAB_1808502f3:/NetworkQuinaryPath:/g' \
    -e 's/LAB_180850330:/NetworkSenaryPath:/g' \
    -e 's/LAB_180850347:/NetworkSeptenaryPath:/g' \
    -e 's/LAB_18085046c:/NetworkOctonaryPath:/g' \
    -e 's/LAB_1808504f5:/NetworkNonaryPath:/g' \
    -e 's/LAB_1808505e7:/NetworkDenaryPath:/g' \
    -e 's/LAB_180850643:/NetworkFinalPath:/g' \
    -e 's/LAB_18085072c:/NetworkAlternativeRoute:/g' \
    -e 's/LAB_1808507d3:/NetworkSecondaryRoute:/g' \
    -e 's/LAB_180850810:/NetworkTertiaryRoute:/g' \
    -e 's/LAB_180850827:/NetworkQuaternaryRoute:/g' \
    -e 's/LAB_18085094c:/NetworkQuinaryRoute:/g' \
    -e 's/LAB_1808509d5:/NetworkSenaryRoute:/g' \
    -e 's/LAB_180850ac7:/NetworkSeptenaryRoute:/g' \
    -e 's/LAB_180850b23:/NetworkOctonaryRoute:/g' \
    -e 's/LAB_1808513ac:/NetworkValidationFailed:/g' \
    -e 's/LAB_180850d88:/NetworkSecurityCheck:/g' \
    -e 's/LAB_180850d95:/NetworkCertificateValid:/g' \
    -e 's/LAB_180850d9b:/NetworkCertificateInvalid:/g' \
    -e 's/LAB_180850eb0:/NetworkSessionInit:/g' \
    -e 's/LAB_1808511a4:/NetworkSessionActive:/g' \
    -e 's/LAB_1808513a8:/NetworkSessionTimeout:/g' \
    -e 's/LAB_1808513bf:/NetworkSessionComplete:/g' \
    -e 's/LAB_180851437:/NetworkSessionError:/g' \
    -e 's/LAB_180851223:/NetworkAuthenticationFailed:/g' \
    -e 's/LAB_180851913:/NetworkContextLoop:/g' \
    -e 's/LAB_180851ce6:/NetworkDataSync:/g' \
    -e 's/LAB_180851f6d:/NetworkTransferLoop:/g' \
    -e 's/LAB_1808522f9:/NetworkOperationPending:/g' \
    -e 's/LAB_180852282:/NetworkDataPending:/g' \
    -e 's/LAB_180852302:/NetworkOperationComplete:/g' \
    -e 's/LAB_18085243e:/NetworkDataFlow:/g' \
    -e 's/LAB_180852518:/NetworkTransferActive:/g' \
    -e 's/LAB_1808524b7:/NetworkTransferPaused:/g' \
    -e 's/LAB_1808526bf:/NetworkBufferProcessed:/g' \
    -e 's/LAB_180852943:/NetworkTransferError:/g' \
    -e 's/LAB_180852954:/NetworkTransferRetry:/g' \
    -e 's/LAB_180852980:/NetworkTransferResume:/g' \
    -e 's/LAB_180852a22:/NetworkFinalStatus:/g' \
    -e 's/LAB_180852a9a:/NetworkOperationFailed:/g' \
    -e 's/LAB_180852f2d:/NetworkStatusCheck:/g' \
    -e 's/LAB_180852f31:/NetworkStatusValid:/g' \
    -e 's/LAB_180852f9c:/NetworkFinalCheck:/g' \
    -e 's/LAB_1808530ba:/NetworkContextMismatch:/g' \
    -e 's/LAB_18073d93d:/NetworkSecondaryComplete:/g' \
    -e 's/LAB_180853370:/NetworkTertiaryActive:/g' \
    -e 's/LAB_180853663:/NetworkQuaternaryActive:/g' \
    -e 's/LAB_180853766:/NetworkQuinaryActive:/g' \
    -e 's/LAB_180853768:/NetworkFinalActive:/g' \
    -e 's/LAB_180854383:/NetworkConnectionStart:/g' \
    -e 's/LAB_18085439a:/NetworkConnectionEnd:/g' \
    -e 's/LAB_1808545a3:/NetworkConnectionError:/g' \
    -e 's/LAB_1808547b7:/NetworkDataInvalid:/g' \
    -e 's/LAB_1808547bc:/NetworkDataValid:/g' \
    -e 's/LAB_180854920:/NetworkStatusActive:/g' \
    -e 's/LAB_180854958:/NetworkStatusInactive:/g' \
    -e 's/LAB_180854bfc:/NetworkFlagProcessed:/g' \
    -e 's/LAB_180854bea:/NetworkFlagSet:/g' \
    -e 's/LAB_180854bed:/NetworkFlagCleared:/g' \
    -e 's/LAB_180854c5f:/NetworkFlagCheck:/g' \
    -e 's/LAB_180854d65:/NetworkPriorityLoop:/g' \
    -e 's/LAB_18085604d:/NetworkDataTransferLoop:/g' \
    -e 's/LAB_180856179:/NetworkQuaternaryCheck:/g' \
    -e 's/LAB_180856347:/NetworkDataPointerValid:/g' \
    -e 's/LAB_180856636:/NetworkTransferComplete:/g' \
    -e 's/LAB_18085691e:/NetworkSecondaryComplete:/g' \
    -e 's/LAB_180856a99:/NetworkTertiaryComplete:/g' \
    -e 's/LAB_180856b7a:/NetworkQuaternaryComplete:/g' \
    -e 's/LAB_180856bdf:/NetworkFinalComplete:/g' \
    -e 's/LAB_180856a59:/NetworkAlternativeComplete:/g' \
    "$FILE_PATH" > "$TEMP_FILE"

# 替换原文件
mv "$TEMP_FILE" "$FILE_PATH"

echo "LAB_标签美化完成"