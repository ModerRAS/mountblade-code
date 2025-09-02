#!/bin/bash

# 美化网络模块中的标签名称
# 将LAB_开头的标签替换为语义化的名称

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 定义标签替换映射
declare -A label_replacements

# 基于上下文分析，为标签分配语义化名称
label_replacements["LAB_18085ceec"]="LabelProcessConnectionDataTransfer"
label_replacements["LAB_18085d2fd"]="LabelHandleConnectionError"
label_replacements["LAB_18085d424"]="LabelContinueConnectionProcessing"
label_replacements["LAB_18085d4e7"]="LabelValidateConnectionContext"
label_replacements["LAB_18085d61f"]="LabelProcessNetworkIteration"
label_replacements["LAB_18085d78f"]="LabelHandleNetworkValidation"
label_replacements["LAB_18085e1d5"]="LabelProcessSecurityContext"
label_replacements["LAB_18085ea6d"]="LabelHandleConnectionTimeout"
label_replacements["LAB_18085ebc2"]="LabelProcessConnectionCleanup"
label_replacements["LAB_18085f8b2"]="LabelInitializeNetworkBuffer"
label_replacements["LAB_1808605ab"]="LabelHandleNetworkData"
label_replacements["LAB_1808605b0"]="LabelProcessNetworkStack"
label_replacements["LAB_1808607eb"]="LabelValidateNetworkData"
label_replacements["LAB_180860998"]="LabelHandleNetworkTransfer"
label_replacements["LAB_1808609c2"]="LabelProcessNetworkTransfer"
label_replacements["LAB_180860a65"]="LabelCompleteNetworkOperation"
label_replacements["LAB_180867ef8"]="LabelConnectionErrorHandler"
label_replacements["LAB_180867f55"]="LabelConnectionCleanupHandler"

# 执行标签替换
for old_label in "${!label_replacements[@]}"; do
    new_label="${label_replacements[$old_label]}"
    echo "替换标签: $old_label -> $new_label"
    
    # 替换标签定义
    sed -i "s/^$old_label:/$new_label:/g" 05_networking.c
    
    # 替换goto语句中的标签引用
    sed -i "s/goto $old_label/goto $new_label/g" 05_networking.c
done

echo "标签美化完成"