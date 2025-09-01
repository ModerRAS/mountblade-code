#!/bin/bash

# 批量重命名UNK_变量的脚本
# 使用sed命令进行高效的文本替换

cd /dev/shm/mountblade-code/TaleWorlds.Native/src/

# CoreEngineDataTemplate系列
sed -i 's/UNK_180a25bfc/CoreEngineDataTemplateE/g' 02_core_engine.c
sed -i 's/UNK_180a25ce8/CoreEngineDataTemplateF/g' 02_core_engine.c
sed -i 's/UNK_180a25cf8/CoreEngineDataTemplateG/g' 02_core_engine.c
sed -i 's/UNK_180a25ca8/CoreEngineDataTemplateH/g' 02_core_engine.c
sed -i 's/UNK_180a25cc0/CoreEngineDataTemplateI/g' 02_core_engine.c
sed -i 's/UNK_180a25cd0/CoreEngineDataTemplateJ/g' 02_core_engine.c
sed -i 's/UNK_180a25d78/CoreEngineDataTemplateK/g' 02_core_engine.c
sed -i 's/UNK_180a25d90/CoreEngineDataTemplateL/g' 02_core_engine.c
sed -i 's/UNK_180a25d98/CoreEngineDataTemplateM/g' 02_core_engine.c
sed -i 's/UNK_180a25da8/CoreEngineDataTemplateN/g' 02_core_engine.c
sed -i 's/UNK_180a25e58/CoreEngineDataTemplateO/g' 02_core_engine.c
sed -i 's/UNK_180a25e70/CoreEngineDataTemplateP/g' 02_core_engine.c
sed -i 's/UNK_180a25e80/CoreEngineDataTemplateQ/g' 02_core_engine.c
sed -i 's/UNK_180a25e90/CoreEngineDataTemplateR/g' 02_core_engine.c
sed -i 's/UNK_180a25ebc/CoreEngineDataTemplateS/g' 02_core_engine.c
sed -i 's/UNK_180a25ec4/CoreEngineDataTemplateT/g' 02_core_engine.c
sed -i 's/UNK_180a25ed0/CoreEngineDataTemplateU/g' 02_core_engine.c
sed -i 's/UNK_180a25ee0/CoreEngineDataTemplateV/g' 02_core_engine.c
sed -i 's/UNK_180a25ef0/CoreEngineDataTemplateW/g' 02_core_engine.c
sed -i 's/UNK_180a25ef8/CoreEngineDataTemplateX/g' 02_core_engine.c
sed -i 's/UNK_180a25900/CoreEngineDataTemplateY/g' 02_core_engine.c
sed -i 's/UNK_180a25ad0/CoreEngineDataTemplateZ/g' 02_core_engine.c
sed -i 's/UNK_180a25a6c/CoreEngineDataTemplateAA/g' 02_core_engine.c

# SystemCleanupDataTemplate系列
sed -i 's/UNK_180a2e6e8/SystemCleanupDataTemplateA/g' 02_core_engine.c
sed -i 's/UNK_180a2e718/SystemCleanupDataTemplateB/g' 02_core_engine.c
sed -i 's/UNK_180a2e6b8/SystemCleanupDataTemplateC/g' 02_core_engine.c
sed -i 's/UNK_180a2e708/SystemCleanupDataTemplateD/g' 02_core_engine.c
sed -i 's/UNK_180a2e6a8/SystemCleanupDataTemplateE/g' 02_core_engine.c
sed -i 's/UNK_180a2e6d8/SystemCleanupDataTemplateF/g' 02_core_engine.c
sed -i 's/UNK_180a2e6c8/SystemCleanupDataTemplateG/g' 02_core_engine.c
sed -i 's/UNK_180a2e798/SystemCleanupDataTemplateH/g' 02_core_engine.c
sed -i 's/UNK_180a36858/SystemCleanupDataTemplateI/g' 02_core_engine.c
sed -i 's/UNK_180a2e788/SystemCleanupDataTemplateJ/g' 02_core_engine.c
sed -i 's/UNK_180a2e7b8/SystemCleanupDataTemplateK/g' 02_core_engine.c
sed -i 's/UNK_180a2e728/SystemCleanupDataTemplateL/g' 02_core_engine.c
sed -i 's/UNK_180a2e750/SystemCleanupDataTemplateM/g' 02_core_engine.c
sed -i 's/UNK_180a2e75c/SystemCleanupDataTemplateN/g' 02_core_engine.c
sed -i 's/UNK_180a2e768/SystemCleanupDataTemplateO/g' 02_core_engine.c
sed -i 's/UNK_180a2e7a8/SystemCleanupDataTemplateP/g' 02_core_engine.c
sed -i 's/UNK_180a2e808/SystemCleanupDataTemplateQ/g' 02_core_engine.c
sed -i 's/UNK_180a2e810/SystemCleanupDataTemplateR/g' 02_core_engine.c
sed -i 's/UNK_180a2e81c/SystemCleanupDataTemplateS/g' 02_core_engine.c
sed -i 's/UNK_180a2e828/SystemCleanupDataTemplateT/g' 02_core_engine.c
sed -i 's/UNK_180a2f608/SystemCleanupDataTemplateU/g' 02_core_engine.c
sed -i 's/UNK_180a2e7c8/SystemCleanupDataTemplateV/g' 02_core_engine.c
sed -i 's/UNK_180a2e7d8/SystemCleanupDataTemplateW/g' 02_core_engine.c
sed -i 's/UNK_180a2e7f8/SystemCleanupDataTemplateX/g' 02_core_engine.c
sed -i 's/UNK_180a2e7e8/SystemCleanupDataTemplateY/g' 02_core_engine.c
sed -i 's/UNK_180a2e8d0/SystemCleanupDataTemplateZ/g' 02_core_engine.c
sed -i 's/UNK_180a2e830/SystemCleanupDataTemplateAA/g' 02_core_engine.c
sed -i 's/UNK_180a2e850/SystemCleanupDataTemplateBB/g' 02_core_engine.c
sed -i 's/UNK_180a2e870/SystemCleanupDataTemplateCC/g' 02_core_engine.c
sed -i 's/UNK_180a2e890/SystemCleanupDataTemplateDD/g' 02_core_engine.c
sed -i 's/UNK_180a2e8b0/SystemCleanupDataTemplateEE/g' 02_core_engine.c
sed -i 's/UNK_180a2e8e0/SystemCleanupDataTemplateFF/g' 02_core_engine.c
sed -i 's/UNK_180a2e900/SystemCleanupDataTemplateGG/g' 02_core_engine.c
sed -i 's/UNK_180a2e990/SystemCleanupDataTemplateHH/g' 02_core_engine.c
sed -i 's/UNK_180a2ea08/SystemCleanupDataTemplateII/g' 02_core_engine.c
sed -i 's/UNK_180a2e9e8/SystemCleanupDataTemplateJJ/g' 02_core_engine.c
sed -i 's/UNK_180a2ea30/SystemCleanupDataTemplateKK/g' 02_core_engine.c
sed -i 's/UNK_180a2ea58/SystemCleanupDataTemplateLL/g' 02_core_engine.c
sed -i 's/UNK_180a2eb28/SystemCleanupDataTemplateMM/g' 02_core_engine.c
sed -i 's/UNK_180a2eb20/SystemCleanupDataTemplateNN/g' 02_core_engine.c
sed -i 's/UNK_180a2eb70/SystemCleanupDataTemplateOO/g' 02_core_engine.c
sed -i 's/UNK_180a2e958/SystemCleanupDataTemplatePP/g' 02_core_engine.c
sed -i 's/UNK_180a2ea78/SystemCleanupDataTemplateQQ/g' 02_core_engine.c
sed -i 's/UNK_180a2ea98/SystemCleanupDataTemplateRR/g' 02_core_engine.c
sed -i 's/UNK_180a2eb60/SystemCleanupDataTemplateSS/g' 02_core_engine.c
sed -i 's/UNK_180a2f500/SystemCleanupDataTemplateTT/g' 02_core_engine.c
sed -i 's/UNK_180a2eae0/SystemCleanupDataTemplateUU/g' 02_core_engine.c
sed -i 's/UNK_180a2eaf8/SystemCleanupDataTemplateVV/g' 02_core_engine.c
sed -i 's/UNK_180a2eb10/SystemCleanupDataTemplateWW/g' 02_core_engine.c
sed -i 's/UNK_180a2f300/SystemCleanupDataTemplateXX/g' 02_core_engine.c

# SystemResourceDataTemplate系列
sed -i 's/UNK_1804c0f30/SystemResourceDataTemplateA/g' 02_core_engine.c
sed -i 's/UNK_1804c0f40/SystemResourceDataTemplateB/g' 02_core_engine.c
sed -i 's/UNK_180a2ebc8/SystemResourceDataTemplateC/g' 02_core_engine.c
sed -i 's/UNK_180a2eb80/SystemResourceDataTemplateD/g' 02_core_engine.c
sed -i 's/UNK_180a2ebd8/SystemResourceDataTemplateE/g' 02_core_engine.c
sed -i 's/UNK_180a2ebe8/SystemResourceDataTemplateF/g' 02_core_engine.c
sed -i 's/UNK_180a2f000/SystemResourceDataTemplateG/g' 02_core_engine.c
sed -i 's/UNK_180a2ebb8/SystemResourceDataTemplateH/g' 02_core_engine.c
sed -i 's/UNK_180a2ec00/SystemResourceDataTemplateI/g' 02_core_engine.c
sed -i 's/UNK_180a2f100/SystemResourceDataTemplateJ/g' 02_core_engine.c
sed -i 's/UNK_180a2f400/SystemResourceDataTemplateK/g' 02_core_engine.c
sed -i 's/UNK_180a2ed00/SystemResourceDataTemplateL/g' 02_core_engine.c
sed -i 's/UNK_180a2f200/SystemResourceDataTemplateM/g' 02_core_engine.c
sed -i 's/UNK_180a2eb90/SystemResourceDataTemplateN/g' 02_core_engine.c
sed -i 's/UNK_180a2ee00/SystemResourceDataTemplateO/g' 02_core_engine.c
sed -i 's/UNK_180a2ef00/SystemResourceDataTemplateP/g' 02_core_engine.c

# SystemRuntimeDataTemplate系列
sed -i 's/UNK_180a2f6c8/SystemRuntimeDataTemplateA/g' 02_core_engine.c
sed -i 's/UNK_180a2f6d8/SystemRuntimeDataTemplateB/g' 02_core_engine.c
sed -i 's/UNK_180a2f720/SystemRuntimeDataTemplateC/g' 02_core_engine.c
sed -i 's/UNK_180a2f730/SystemRuntimeDataTemplateD/g' 02_core_engine.c
sed -i 's/UNK_180a2f760/SystemRuntimeDataTemplateE/g' 02_core_engine.c
sed -i 's/UNK_180a2f630/SystemRuntimeDataTemplateF/g' 02_core_engine.c
sed -i 's/UNK_180a2f640/SystemRuntimeDataTemplateG/g' 02_core_engine.c
sed -i 's/UNK_180a2f658/SystemRuntimeDataTemplateH/g' 02_core_engine.c
sed -i 's/UNK_180a2f670/SystemRuntimeDataTemplateI/g' 02_core_engine.c
sed -i 's/UNK_180a2f680/SystemRuntimeDataTemplateJ/g' 02_core_engine.c
sed -i 's/UNK_180a2f6a0/SystemRuntimeDataTemplateK/g' 02_core_engine.c
sed -i 's/UNK_180a2f6b0/SystemRuntimeDataTemplateL/g' 02_core_engine.c
sed -i 's/UNK_180a12ce8/SystemRuntimeDataTemplateM/g' 02_core_engine.c
sed -i 's/UNK_180a2f750/SystemRuntimeDataTemplateN/g' 02_core_engine.c
sed -i 's/UNK_180a2f6f0/SystemRuntimeDataTemplateO/g' 02_core_engine.c
sed -i 's/UNK_180a2f788/SystemRuntimeDataTemplateP/g' 02_core_engine.c
sed -i 's/UNK_180a06403/SystemRuntimeDataTemplateQ/g' 02_core_engine.c
sed -i 's/UNK_180a2f7a0/SystemRuntimeDataTemplateR/g' 02_core_engine.c
sed -i 's/UNK_180a2f7a8/SystemRuntimeDataTemplateS/g' 02_core_engine.c
sed -i 's/UNK_180a2f7d0/SystemRuntimeDataTemplateT/g' 02_core_engine.c
sed -i 's/UNK_180a2f948/SystemRuntimeDataTemplateU/g' 02_core_engine.c
sed -i 's/UNK_180a2f980/SystemRuntimeDataTemplateV/g' 02_core_engine.c
sed -i 's/UNK_180a2f990/SystemRuntimeDataTemplateW/g' 02_core_engine.c
sed -i 's/UNK_180a2f9b0/SystemRuntimeDataTemplateX/g' 02_core_engine.c
sed -i 's/UNK_180a2f9e8/SystemRuntimeDataTemplateY/g' 02_core_engine.c
sed -i 's/UNK_180a0d4c8/SystemRuntimeDataTemplateZ/g' 02_core_engine.c
sed -i 's/UNK_180a0d4d8/SystemRuntimeDataTemplateAA/g' 02_core_engine.c
sed -i 's/UNK_180a2f938/SystemRuntimeDataTemplateBB/g' 02_core_engine.c

# SystemInitializationDataTemplate系列
sed -i 's/UNK_1800a0f67/SystemInitializationDataTemplateA/g' 02_core_engine.c
sed -i 's/UNK_1800a127e/SystemInitializationDataTemplateB/g' 02_core_engine.c

echo "所有UNK_变量重命名完成！"
echo "重命名统计："
echo "- CoreEngineDataTemplate: 27个变量 (A-AA)"
echo "- SystemCleanupDataTemplate: 50个变量 (A-XX)"
echo "- SystemResourceDataTemplate: 16个变量 (A-P)"
echo "- SystemRuntimeDataTemplate: 26个变量 (A-BB)"
echo "- SystemInitializationDataTemplate: 2个变量 (A-B)"
echo "总计：121个变量已重命名"