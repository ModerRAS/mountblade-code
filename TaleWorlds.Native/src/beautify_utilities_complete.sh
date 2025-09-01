#!/bin/bash

# 美化06_utilities.c文件中的UNK_变量和FUN_函数
# 这个脚本将分析并重命名所有UNK_180xxxxxx和FUN_180xxxxxx标识符

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
BACKUP_PATH="${FILE_PATH}.backup.$(date +%Y%m%d_%H%M%S)"

# 创建备份
cp "$FILE_PATH" "$BACKUP_PATH"
echo "已创建备份文件: $BACKUP_PATH"

# UNK_变量重命名映射
declare -A UNK_RENAME_MAP=(
    # 系统管理器数据
    ["UNK_1801561e0"]="SystemMemoryManagerData"
    ["UNK_180156200"]="SystemConfigurationManagerData" 
    ["UNK_180156220"]="SystemEventManagerData"
    ["UNK_180156240"]="SystemResourceManagerData"
    ["UNK_180156260"]="SystemDataManagerData"
    ["UNK_180156280"]="SystemStringManagerData"
    ["UNK_1801562a0"]="SystemDeviceManagerData"
    ["UNK_1801562c0"]="SystemDebugManagerData"
    ["UNK_1801562e0"]="SystemNetworkManagerData"
    
    # 资源处理数据
    ["UNK_180a073f0"]="ResourceValidationData"
    ["UNK_180a07400"]="ResourceProcessingData"
    ["UNK_180a07420"]="ResourceAllocationData"
    ["UNK_180a07438"]="ResourceHashData"
    ["UNK_180a07450"]="ResourceChecksumData"
    ["UNK_180a07470"]="ResourceMetadataData"
    ["UNK_180a07490"]="ResourceBufferManagerData"
    ["UNK_180a074b8"]="ResourceCacheManagerData"
    ["UNK_180a074d8"]="ResourceStreamManagerData"
    ["UNK_180a074f8"]="ResourceCompressionData"
    ["UNK_180a07518"]="ResourceEncryptionData"
    ["UNK_180a07530"]="ResourceSignatureData"
    ["UNK_180a07548"]="ResourceAuthenticationData"
    ["UNK_180a07568"]="ResourceSerializationData"
    ["UNK_180a07580"]="ResourceDeserializationData"
    ["UNK_180a075a0"]="ResourceFormatData"
    ["UNK_180a075b0"]="ResourceVersionData"
    ["UNK_180a075d0"]="ResourceLocaleData"
    ["UNK_180a075f0"]="ResourcePlatformData"
    ["UNK_180a07610"]="ResourceCompatibilityData"
    ["UNK_180a07628"]="ResourceDependencyData"
    ["UNK_180a07640"]="ResourceReferenceData"
    ["UNK_180a07650"]="ResourceLinkData"
    ["UNK_180a07668"]="ResourceIndexData"
    ["UNK_180a07688"]="ResourceTableData"
    ["UNK_180a076a0"]="ResourceDirectoryData"
    ["UNK_180a076c0"]="ResourceFileSystemData"
    ["UNK_180a076d8"]="ResourceStorageData"
    ["UNK_180a076f8"]="ResourceMemoryData"
    ["UNK_180a07720"]="ResourcePoolData"
    ["UNK_180a07748"]="ResourceRecycleData"
    ["UNK_180a07760"]="ResourceGarbageCollectionData"
    
    # 其他系统数据
    ["UNK_180a07cd0"]="SystemThreadManagerData"
    ["UNK_180a1afb8"]="SystemProcessManagerData"
    ["UNK_180a079c0"]="SystemSecurityManagerData"
    ["UNK_180a07b48"]="SystemPerformanceManagerData"
    ["UNK_180a3c313"]="SystemLoggingManagerData"
    ["UNK_18098d6d0"]="SystemTimerManagerData"
    ["UNK_180a078fc"]="SystemInputManagerData"
    ["UNK_180a07804"]="SystemOutputManagerData"
    ["UNK_18098d6b0"]="SystemEventHandlerData"
    ["UNK_18015c090"]="SystemCallbackData"
    ["UNK_180a0b650"]="SystemMessageQueueData"
    ["UNK_180a0c258"]="SystemNotificationData"
    ["UNK_1801bc7a0"]="SystemEventDispatcherData"
    ["UNK_1801bc7e0"]="SystemSignalData"
    ["UNK_180a0b640"]="SystemMutexData"
    ["UNK_180a0b660"]="SystemSemaphoreData"
    ["UNK_180a0b670"]="SystemCriticalSectionData"
    ["UNK_1801bc6b0"]="SystemLockData"
    ["UNK_180a0b680"]="SystemSyncData"
    ["UNK_180a0b690"]="SystemAsyncData"
)

# FUN_函数重命名映射
declare -A FUN_RENAME_MAP=(
    # 主要处理函数
    ["FUN_1808975e0"]="ValidateResourceIntegrity"
    ["FUN_180898b40"]="ProcessResourceSearch"
    ["FUN_1808af2e0"]="CalculateResourceHash"
    ["FUN_180898fc0"]="GetResourceEntry"
    ["FUN_1808ac750"]="ValidateResourceFormat"
    ["FUN_180899c60"]="ProcessResourceData"
    ["FUN_1808aca30"]="CheckResourceAvailability"
    ["FUN_1808b00b0"]="VerifyResourceSignature"
    ["FUN_1808afc70"]="GetResourceIdentifier"
    ["FUN_1808a2890"]="GenerateResourceChecksum"
    ["FUN_1808a2e00"]="ExtractResourceMetadata"
    ["FUN_1808ddf80"]="ReleaseResourceHandle"
    ["FUN_18089cc80"]="ValidateResourceData"
    ["FUN_1808a8620"]="ProcessResourceValidation"
    ["FUN_18089d490"]="CheckResourceAccess"
    ["FUN_1808a5d60"]="LoadResourceContent"
    ["FUN_1808a4a20"]="CreateResourceBuffer"
    ["FUN_1808a79f0"]="GetResourceProperty"
    ["FUN_180748010"]="ValidateResourceHeader"
    ["FUN_1808a84c0"]="ProcessResourceRequest"
    ["FUN_1808ad600"]="HandleResourceOperation"
    ["FUN_180882f00"]="ValidateResourceSize"
    ["FUN_1808a54c0"]="AllocateResourceMemory"
    ["FUN_180883750"]="ProcessResourceCompression"
    ["FUN_1808aec50"]="HandleResourceEncryption"
    ["FUN_1808a2740"]="ReadResourceData"
    ["FUN_1808af8b0"]="WriteResourceData"
    ["FUN_1808af280"]="InitializeResourceContext"
    ["FUN_1808acb90"]="ProcessResourceContext"
    ["FUN_1808a5150"]="ValidateResourceStructure"
    ["FUN_1808de650"]="ParseResourceHeader"
    ["FUN_1808b0490"]="ProcessResourceTable"
    ["FUN_180898ef0"]="SearchResourceIndex"
    ["FUN_180899220"]="ValidateResourceIndex"
    ["FUN_1808a8120"]="ProcessResourceBatch"
    ["FUN_1808a5a90"]="CreateResourceInstance"
    ["FUN_18084c150"]="DestroyResourceInstance"
    ["FUN_1808a71c0"]="InitializeResourceManager"
    ["FUN_1808ad9d0"]="ConfigureResourceSettings"
    ["FUN_1808a62d0"]="SetupResourceEnvironment"
    ["FUN_1808ad130"]="ValidateResourceConfiguration"
    ["FUN_18089ede0"]="ProcessResourceCleanup"
    ["FUN_1808a2d50"]="CheckResourceDependencies"
    ["FUN_18089ef40"]="ValidateResourceChain"
    ["FUN_180898eb0"]="GetResourceLink"
    ["FUN_1808a7c40"]="ProcessResourceList"
    ["FUN_1808ddd30"]="CalculateDataChecksum"
    ["FUN_1808afd90"]="ValidateResourceChecksum"
    ["FUN_1808a7c90"]="ProcessResourceStream"
    ["FUN_1808de000"]="FlushResourceBuffer"
    ["FUN_1808a87d0"]="GetResourceStatus"
    ["FUN_1808acf30"]="SetResourceStatus"
    ["FUN_1808a1090"]="ResetResourceState"
    ["FUN_1808a1870"]="CheckResourcePermissions"
    ["FUN_1808a7b00"]="InitializeResourceLoader"
    ["FUN_1808a4fb0"]="ProcessResourceLoading"
    ["FUN_180898e70"]="ValidateResourceFormat"
    ["FUN_1808a7f40"]="ProcessResourceFormat"
    ["FUN_1808a5630"]="BuildResourceData"
    ["FUN_1808a6150"]="CompileResourceData"
    ["FUN_1808993e0"]="CalculateResourceMetrics"
)

# 应用UNK_变量重命名
echo "开始重命名UNK_变量..."
for old_name in "${!UNK_RENAME_MAP[@]}"; do
    new_name="${UNK_RENAME_MAP[$old_name]}"
    echo "重命名: $old_name -> $new_name"
    sed -i "s/\b$old_name\b/$new_name/g" "$FILE_PATH"
done

# 应用FUN_函数重命名
echo "开始重命名FUN_函数..."
for old_name in "${!FUN_RENAME_MAP[@]}"; do
    new_name="${FUN_RENAME_MAP[$old_name]}"
    echo "重命名: $old_name -> $new_name"
    sed -i "s/\b$old_name\b/$new_name/g" "$FILE_PATH"
done

echo "美化完成！"
echo "修改后的文件保存在: $FILE_PATH"
echo "原始备份文件保存在: $BACKUP_PATH"

# 统计修改数量
unk_count=${#UNK_RENAME_MAP[@]}
fun_count=${#FUN_RENAME_MAP[@]}
echo "总计修改了 $unk_count 个UNK_变量和 $fun_count 个FUN_函数"