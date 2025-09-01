# 美化 06_utilities.c 文件的脚本
# 此脚本用于批量替换 FUN_ 函数和 DAT_ 变量名

echo "开始美化 06_utilities.c 文件..."

# 函数重映射表
declare -A function_map=(
    ["FUN_1808993e0"]="CalculateResourceHash"
    ["FUN_1808a6150"]="ValidateResourceHash"
    ["FUN_1808a5630"]="InitializeResourceData"
    ["FUN_180748010"]="CheckResourceAvailability"
    ["FUN_1808a84c0"]="ProcessResourceValidation"
    ["FUN_1808ad600"]="ValidateResourceIntegrity"
    ["FUN_180882f00"]="CheckResourceStatus"
    ["FUN_1808a54c0"]="ProcessResourceAllocation"
    ["FUN_180883750"]="AllocateResourceMemory"
    ["FUN_1808aec50"]="InitializeResourceBuffer"
    ["FUN_1808af8b0"]="ProcessResourceCompression"
    ["FUN_1808af280"]="ValidateResourceFormat"
    ["FUN_1808acb90"]="ProcessResourceConversion"
    ["FUN_1808a5150"]="ValidateResourceChecksum"
    ["FUN_18089ce30"]="GetResourceMetadata"
    ["FUN_18089b7d0"]="ProcessResourceMetadata"
    ["FUN_1808de650"]="ValidateResourceData"
    ["FUN_1808b0490"]="ProcessResourceData"
    ["FUN_180898ef0"]="FindResourceEntry"
    ["FUN_1808a8120"]="ProcessResourceBatch"
    ["FUN_1808a5a90"]="ValidateResourceFile"
    ["FUN_18084c150"]="CleanupResourceConnection"
    ["FUN_1808a71c0"]="InitializeResourceCache"
    ["FUN_1808ad9d0"]="ProcessResourceIndex"
    ["FUN_1808a62d0"]="ValidateResourceIndex"
    ["FUN_1808ad130"]="ProcessResourceTable"
    ["FUN_1808a2d50"]="ValidateResourceStructure"
    ["FUN_180898eb0"]="GetResourceReference"
    ["FUN_1808a7c40"]="InitializeResourceBlock"
    ["FUN_1808ddd30"]="CalculateDataChecksum"
    ["FUN_1808afd90"]="ValidateDataFormat"
    ["FUN_1808a7c90"]="ProcessDataBlock"
    ["FUN_1808de000"]="CleanupDataBuffer"
    ["FUN_1808a87d0"]="GetDataBlockSize"
    ["FUN_1808acf30"]="ValidateDataIntegrity"
    ["FUN_1808a1090"]="ProcessDataValidation"
    ["FUN_1808a1870"]="ValidateDataAccess"
    ["FUN_180898e70"]="FindDataEntry"
    ["FUN_1808a7b00"]="InitializeDataResource"
    ["FUN_1808a4fb0"]="ValidateDataResource"
    ["FUN_1808a6e50"]="ProcessDataStream"
    ["FUN_1808a3d50"]="GetStreamResource"
    ["FUN_1808a1610"]="ProcessStreamData"
    ["FUN_18064d630"]="CleanupSystemMemory"
    ["FUN_180627b90"]="ReleaseSystemResource"
    ["FUN_18064e900"]="TerminateOnError"
    ["FUN_18005a050"]="PerformSystemCleanup"
    ["FUN_180059ee0"]="CleanupSystemMemory"
)

# 变量重映射表
declare -A variable_map=(
    ["DAT_180c91d50"]="SystemCleanupFlag"
    ["_DAT_180c91d30"]="SystemCleanupCounter"
    ["_DAT_180c91d28"]="SystemCleanupData"
    ["_DAT_180c91d18"]="SystemCleanupCallback"
    ["_DAT_180c91cf0"]="SystemCleanupStatus"
    ["DAT_180bfaef0"]="SystemMemoryConfigDataTemplateA"
    ["DAT_180bfaef8"]="SystemMemoryConfigDataTemplateB"
    ["DAT_180bfaf00"]="SystemMemoryConfigDataTemplateC"
    ["DAT_180bfaf08"]="SystemMemoryConfigDataTemplateD"
    ["DAT_180bfb310"]="SystemMemoryConfigDataTemplateE"
    ["DAT_180bfb318"]="SystemMemoryConfigDataTemplateF"
    ["DAT_180bfb320"]="SystemMemoryConfigDataTemplateG"
    ["DAT_180bfb328"]="SystemMemoryConfigDataTemplateH"
    ["DAT_180bfb730"]="SystemMemoryConfigDataTemplateI"
    ["DAT_180bfb738"]="SystemMemoryConfigDataTemplateJ"
    ["DAT_180bfb740"]="SystemMemoryConfigDataTemplateK"
    ["DAT_180bfb748"]="SystemMemoryConfigDataTemplateL"
    ["DAT_180c9246c"]="SystemMemoryConfigDataTemplateM"
    ["DAT_180c92490"]="SystemConfigurationDataA"
    ["DAT_180c92480"]="SystemEnvironmentDataA"
    ["DAT_180c924ac"]="SystemMemoryConfigDataTemplateN"
    ["DAT_180c924b0"]="SystemMemoryConfigDataTemplateO"
    ["DAT_180c924b4"]="SystemMemoryConfigDataTemplateP"
    ["DAT_180c924b8"]="SystemMemoryConfigDataTemplateQ"
)

echo "函数和变量映射表已创建"
echo "请手动执行以下替换命令："

# 输出替换命令
for old_name in "${!function_map[@]}"; do
    new_name="${function_map[$old_name]}"
    echo "sed -i 's/$old_name/$new_name/g' TaleWorlds.Native/src/06_utilities.c"
done

for old_name in "${!variable_map[@]}"; do
    new_name="${variable_map[$old_name]}"
    echo "sed -i 's/$old_name/$new_name/g' TaleWorlds.Native/src/06_utilities.c"
done

echo ""
echo "然后手动为函数定义添加文档注释"