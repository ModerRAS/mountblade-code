#!/bin/bash

# 批量替换函数调用
sed -i 's/FUN_18086acf0()/ValidateEncryptionEx()/g' 05_networking.c
sed -i 's/FUN_18086ab10(/ProcessSecurityPacketEx(/g' 05_networking.c
sed -i 's/FUN_18086c290(/ProcessConnectionContextHandler(/g' 05_networking.c
sed -i 's/FUN_18086b2d0(/ProcessConnectionDataTransfer(/g' 05_networking.c
sed -i 's/FUN_18086b8b0(/ValidateConnectionIntegrity(/g' 05_networking.c
sed -i 's/FUN_180869d10(/ProcessConnectionDataValidation(/g' 05_networking.c
sed -i 's/FUN_18086be90(/ProcessConnectionDataTransfer(/g' 05_networking.c
sed -i 's/FUN_18086c670(/InitializeConnectionPool(/g' 05_networking.c
sed -i 's/FUN_18086c870(/ProcessPacketTransferEx(/g' 05_networking.c
sed -i 's/FUN_18086d070(/ProcessConnectionContextHandler(/g' 05_networking.c
sed -i 's/FUN_18086ce70(/InitializeConnectionStackBuffer(/g' 05_networking.c
sed -i 's/FUN_18086a710(/ConnectionValidate(/g' 05_networking.c
sed -i 's/FUN_18086d270(/ProcessConnectionPacketTransferSecondInstance(/g' 05_networking.c
sed -i 's/FUN_18086a510(/ProcessConnectionPacketValidation(/g' 05_networking.c
sed -i 's/FUN_180869f10(/ProcessConnectionPacketTransmission(/g' 05_networking.c
sed -i 's/FUN_18086ca70(/ProcessConnectionDataValidation(/g' 05_networking.c
sed -i 's/FUN_18086aed0(/OptimizeNetworkPerformance(/g' 05_networking.c
sed -i 's/FUN_180869b10(/ProcessConnectionPacketTransfer(/g' 05_networking.c
sed -i 's/FUN_18086b6b0(/ProcessConnectionContext(/g' 05_networking.c
sed -i 's/FUN_18086c470(/CleanupConnectionHandler(/g' 05_networking.c
sed -i 's/FUN_18086c090(/ProcessConnectionSecurityValidation(/g' 05_networking.c
sed -i 's/FUN_18086a110(/ProcessConnectionPacketValidation(/g' 05_networking.c
sed -i 's/FUN_18086b4b0(/ProcessPacketArray(/g' 05_networking.c
sed -i 's/FUN_18086a910(/MonitorConnectionStatus(/g' 05_networking.c
sed -i 's/FUN_18086bc90(/ProcessConnectionPacketValidation(/g' 05_networking.c
sed -i 's/FUN_18086ba90(/MonitorConnectionPerformance(/g' 05_networking.c
sed -i 's/FUN_18086a310(/ProcessConnectionDataTransferOperation(/g' 05_networking.c
sed -i 's/FUN_18086b0d0(/ProcessConnectionDataTransfer(/g' 05_networking.c
sed -i 's/FUN_18086cc70(/ValidateConnectionState(/g' 05_networking.c

echo "Function calls replaced successfully"