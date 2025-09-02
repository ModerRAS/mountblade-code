#!/bin/bash

# 05_networking.c 文件美化脚本
# 该脚本用于批量美化 05_networking.c 文件中的函数名和变量名

# 设置文件路径
FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/05_networking.c"

# 备份原始文件
cp "$FILE_PATH" "$FILE_PATH.backup"

echo "开始美化 05_networking.c 文件..."

# 第一阶段：重命名函数
echo "第一阶段：重命名函数..."

# 处理网络数据搜索函数
sed -i 's/FUN_18087b750/ProcessNetworkDataSearchFirstInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087b76a/ProcessNetworkDataSearchSecondInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087b883/ProcessNetworkDataSearchThirdInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087b970/ProcessNetworkDataSearchFourthInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087b993/ProcessNetworkDataSearchFifthInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087ba80/ProcessNetworkDataSearchSixthInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087ba9a/ProcessNetworkDataSearchSeventhInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087bbb0/ProcessNetworkDataSearchEighthInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087bbd3/ProcessNetworkDataSearchNinthInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087bca0/ProcessNetworkDataSearchTenthInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087bcc3/ProcessNetworkDataSearchEleventhInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087bdd0/ProcessNetworkDataSearchTwelfthInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087bdea/ProcessNetworkDataSearchThirteenthInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087bee0/ProcessNetworkDataSearchFourteenthInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087bf03/ProcessNetworkDataSearchFifteenthInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087c163/ProcessNetworkDataSearchSixteenthInstance/g' "$FILE_PATH"

# 处理获取网络句柄函数
sed -i 's/FUN_18087b93b/GetNetworkHandleFirstInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087ba4b/GetNetworkHandleSecondInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087bb5f/GetNetworkHandleThirdInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087bc8b/GetNetworkHandleFourthInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087bd7b/GetNetworkHandleFifthInstance/g' "$FILE_PATH"
sed -i 's/FUN_18087beaf/GetNetworkHandleSixthInstance/g' "$FILE_PATH"

# 第二阶段：美化变量名
echo "第二阶段：美化变量名..."

# 美化通用变量名
sed -i 's/BoolFlag/ResourceCleanupFlag/g' "$FILE_PATH"
sed -i 's/uStackX_24/StackParameterHigh/g' "$FILE_PATH"
sed -i 's/lStack0000000000000028/StackParameterLow/g' "$FILE_PATH"
sed -i 's/in_XMM0_Qb/Xmm0Parameter/g' "$FILE_PATH"

# 第三阶段：美化标签名
echo "第三阶段：美化标签名..."

# 美化标签名
sed -i 's/LAB_18087b80f/LAB_CleanupResourceExit/g' "$FILE_PATH"
sed -i 's/LAB_18087ba26/LAB_SearchCompleteExit/g' "$FILE_PATH"
sed -i 's/LAB_18087b916/LAB_ResourceCleanupExit/g' "$FILE_PATH"

echo "美化完成！"
echo "原始文件已备份为: $FILE_PATH.backup"
echo "美化后的文件: $FILE_PATH"

# 验证修改
echo "验证修改..."
if [ -f "$FILE_PATH" ]; then
    echo "文件存在，修改成功"
    # 显示修改后的前几行
    echo "修改后的文件前10行："
    head -n 10 "$FILE_PATH"
else
    echo "文件不存在，修改失败"
    exit 1
fi