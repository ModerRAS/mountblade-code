#!/bin/bash

# 批量重命名 02_core_engine.c 文件中的 UNK_ 变量为 SystemCleanupDataTemplate 系列
# 这是 SystemCleanupDataTemplateR 之后的延续变量

# 定义要替换的变量映射
declare -A replacements=(
    ["UNK_180a2e828"]="SystemCleanupDataTemplateS"
    ["UNK_180a2f608"]="SystemCleanupDataTemplateT"
    ["UNK_180a2e7c8"]="SystemCleanupDataTemplateU"
    ["UNK_180a2e7d8"]="SystemCleanupDataTemplateV"
    ["UNK_180a2e7f8"]="SystemCleanupDataTemplateW"
    ["UNK_180a2e7e8"]="SystemCleanupDataTemplateX"
    ["UNK_180a2e8d0"]="SystemCleanupDataTemplateY"
    ["UNK_180a2e830"]="SystemCleanupDataTemplateZ"
    ["UNK_180a2e850"]="SystemCleanupDataTemplateAA"
    ["UNK_180a2e870"]="SystemCleanupDataTemplateBB"
    ["UNK_180a2e890"]="SystemCleanupDataTemplateCC"
    ["UNK_180a2e8b0"]="SystemCleanupDataTemplateDD"
    ["UNK_180a2e8e0"]="SystemCleanupDataTemplateEE"
    ["UNK_180a2e900"]="SystemCleanupDataTemplateFF"
    ["UNK_180a2e990"]="SystemCleanupDataTemplateGG"
    ["UNK_180a2ea08"]="SystemCleanupDataTemplateHH"
    ["UNK_180a2e9e8"]="SystemCleanupDataTemplateII"
    ["UNK_180a2ea30"]="SystemCleanupDataTemplateJJ"
    ["UNK_180a2ea58"]="SystemCleanupDataTemplateKK"
    ["UNK_180a2eb28"]="SystemCleanupDataTemplateLL"
    ["UNK_180a2eb20"]="SystemCleanupDataTemplateMM"
    ["UNK_180a2eb70"]="SystemCleanupDataTemplateNN"
    ["UNK_180a2e958"]="SystemCleanupDataTemplateOO"
    ["UNK_180a2ea78"]="SystemCleanupDataTemplatePP"
    ["UNK_180a2ea98"]="SystemCleanupDataTemplateQQ"
    ["UNK_180a2eb60"]="SystemCleanupDataTemplateRR"
    ["UNK_180a2f500"]="SystemCleanupDataTemplateSS"
    ["UNK_180a2eae0"]="SystemCleanupDataTemplateTT"
    ["UNK_180a2eaf8"]="SystemCleanupDataTemplateUU"
    ["UNK_180a2eb10"]="SystemCleanupDataTemplateVV"
    ["UNK_180a2f300"]="SystemCleanupDataTemplateWW"
    ["UNK_180a4c0f30"]="SystemCleanupDataTemplateXX"
    ["UNK_180a4c0f40"]="SystemCleanupDataTemplateYY"
    ["UNK_180a2ebc8"]="SystemCleanupDataTemplateZZ"
    ["UNK_180a2eb80"]="SystemCleanupDataTemplateAAA"
    ["UNK_180a2ebd8"]="SystemCleanupDataTemplateBBB"
    ["UNK_180a2ebe8"]="SystemCleanupDataTemplateCCC"
    ["UNK_180a2f000"]="SystemCleanupDataTemplateDDD"
    ["UNK_180a2ebb8"]="SystemCleanupDataTemplateEEE"
    ["UNK_180a2ec00"]="SystemCleanupDataTemplateFFF"
    ["UNK_180a2f100"]="SystemCleanupDataTemplateGGG"
    ["UNK_180a2f400"]="SystemCleanupDataTemplateHHH"
    ["UNK_180a2ed00"]="SystemCleanupDataTemplateIII"
    ["UNK_180a2f200"]="SystemCleanupDataTemplateJJJ"
    ["UNK_180a2eb90"]="SystemCleanupDataTemplateKKK"
    ["UNK_180a2ee00"]="SystemCleanupDataTemplateLLL"
    ["UNK_180a2ef00"]="SystemCleanupDataTemplateMMM"
    ["UNK_180a2f6c8"]="SystemCleanupDataTemplateNNN"
    ["UNK_180a2f6d8"]="SystemCleanupDataTemplateOOO"
    ["UNK_180a2f720"]="SystemCleanupDataTemplatePPP"
    ["UNK_180a2f730"]="SystemCleanupDataTemplateQQQ"
    ["UNK_180a2f760"]="SystemCleanupDataTemplateRRR"
    ["UNK_180a2f630"]="SystemCleanupDataTemplateSSS"
    ["UNK_180a2f640"]="SystemCleanupDataTemplateTTT"
    ["UNK_180a2f658"]="SystemCleanupDataTemplateUUU"
    ["UNK_180a2f670"]="SystemCleanupDataTemplateVVV"
    ["UNK_180a2f680"]="SystemCleanupDataTemplateWWW"
    ["UNK_180a2f6a0"]="SystemCleanupDataTemplateXXX"
    ["UNK_180a2f6b0"]="SystemCleanupDataTemplateYYY"
    ["UNK_180a12ce8"]="SystemCleanupDataTemplateZZZ"
    ["UNK_180a2f750"]="SystemCleanupDataTemplateAAAA"
    ["UNK_180a2f6f0"]="SystemCleanupDataTemplateBBBB"
    ["UNK_180a2f788"]="SystemCleanupDataTemplateCCCC"
    ["UNK_180a06403"]="SystemCleanupDataTemplateDDDD"
    ["UNK_180a2f7a0"]="SystemCleanupDataTemplateEEEE"
    ["UNK_180a2f7a8"]="SystemCleanupDataTemplateFFFF"
    ["UNK_180a2f7d0"]="SystemCleanupDataTemplateGGGG"
    ["UNK_180a2f948"]="SystemCleanupDataTemplateHHHH"
    ["UNK_180a2f980"]="SystemCleanupDataTemplateIIII"
    ["UNK_180a2f990"]="SystemCleanupDataTemplateJJJJ"
    ["UNK_180a2f9b0"]="SystemCleanupDataTemplateKKKK"
    ["UNK_180a2f9e8"]="SystemCleanupDataTemplateLLLL"
    ["UNK_180a0d4c8"]="SystemCleanupDataTemplateMMMM"
    ["UNK_180a0d4d8"]="SystemCleanupDataTemplateNNNN"
    ["UNK_180a2f938"]="SystemCleanupDataTemplateOOOO"
    ["UNK_1800a0f67"]="SystemCleanupDataTemplatePPPP"
    ["UNK_1800a127e"]="SystemCleanupDataTemplateQQQQ"
)

# 备份原文件
cp "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c" "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.backup"

# 计数器
count=0

# 遍历所有替换项
for old_name in "${!replacements[@]}"; do
    new_name="${replacements[$old_name]}"
    
    # 执行替换
    if sed -i "s/undefined $old_name;/undefined $new_name;/g" "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c"; then
        ((count++))
        echo "已替换: $old_name -> $new_name"
    else
        echo "替换失败: $old_name"
    fi
done

echo "总共成功替换了 $count 个变量"

# 验证替换结果
echo "验证替换结果..."
remaining_unk=$(grep -c "undefined UNK_" "/dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c")
echo "剩余的 UNK_ 变量数量: $remaining_unk"

if [ $remaining_unk -eq 0 ]; then
    echo "✅ 所有 UNK_ 变量已成功重命名！"
else
    echo "⚠️ 仍有 $remaining_unk 个 UNK_ 变量未处理"
fi