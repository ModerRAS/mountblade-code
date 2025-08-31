#!/bin/bash

# 06_utilities.c 文件美化脚本
# 用于批量替换非语义化的变量名和函数名

# 变量名替换
sed -i 's/utility_process_pointer_/utility_process_pointer_/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/utility_control_pointer_/utility_control_pointer_/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/utility_advanced_pointer_/utility_advanced_pointer_/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/utility_system_reserved_/utility_system_reserved_/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/utility_pointer_param/utility_parameter/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Semapointer_/Semaphore/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Mapointer_/Map/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Unmapointer_/Unmap/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/FileMapointer_/FileMap/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Opointer_/Open/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Compointer_/Com/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Pipointer_/Pipe/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/PostCompointer_/PostCom/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/GetCompointer_/GetCom/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/CloseCompointer_/CloseCom/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/NamedPipointer_/NamedPipe/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/ConnectNamedPipointer_/ConnectNamedPipe/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/DisconnectNamedPipointer_/DisconnectNamedPipe/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/CreateNamedPipointer_/CreateNamedPipe/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Sleepointer_/Sleep/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Expointer_/Exec/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Outpointer_/Output/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/GetExcepointer_/GetException/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/SetUnhandledExcepointer_/SetUnhandledException/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/InitializeVectorExcepointer_/InitializeVectorException/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/AddVectoredExcepointer_/AddVectoredException/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/RemoveVectoredExcepointer_/RemoveVectoredException/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/InitializeSecurityDescripointer_/InitializeSecurityDescriptor/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/InitializeEncrypointer_/InitializeEncryption/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/InitializeCrypointer_/InitializeCrypto/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/InitializeCipointer_/InitializeCipher/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Encrypointer_/Encrypt/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Decrypointer_/Decrypt/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/InitializeImpointer_/InitializeImpersonation/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Impointer_/Impersonate/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Suspointer_/Suspend/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Accepointer_/Accept/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/GetDiskFreeSpointer_/GetDiskFreeSpace/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/GetDriveTypointer_/GetDriveType/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/Decompointer_/Decompress/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 修复重复的变量声明
sed -i 's/void \*utility_global_main_pointer;/void \*utility_global_main_pointer_secondary;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void \*utility_process_pointer;/void \*utility_process_pointer_secondary;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "06_utilities.c 美化完成"