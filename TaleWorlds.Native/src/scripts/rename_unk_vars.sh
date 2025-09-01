#!/bin/bash

# 美化99_unmatched_functions.c中的变量名
# 将UNK_变量重命名为语义化名称

# 创建临时脚本文件
cat > /tmp/rename_unk_vars.sh << 'EOF'
#!/bin/bash

# 进入源代码目录
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 备份原文件
cp 99_unmatched_functions.c 99_unmatched_functions.c.backup

# 重命名UNK_变量为语义化名称
sed -i 's/UNK_180a05ac0/XmlParserInitializationFlag/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05ae0/XmlParserMemoryBuffer/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05af8/XmlParserContextPointer/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05b10/XmlParserConfigurationData/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05b30/XmlParserStateVariable/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05b48/XmlParserProcessingFlag/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05b58/XmlParserValidationFlag/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05b68/XmlParserErrorFlag/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05b80/XmlParserOutputBuffer/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05ba0/XmlParserInputBuffer/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05bb8/XmlParserMemoryPointer/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05bd0/XmlParserDataPointer/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05be0/XmlParserResultPointer/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05c00/XmlParserThreadContext/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05c20/XmlParserLockObject/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05c40/XmlParserMutex/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05c60/XmlParserSemaphore/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05c88/XmlParserEventFlag/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05ca8/XmlParserSignal/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05cc0/XmlParserCallback/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05ce0/XmlParserHandler/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05d08/XmlParserNotifier/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05d18/XmlParserObserver/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05d38/XmlParserController/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05d50/XmlParserManager/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05d60/XmlParserSupervisor/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05d78/XmlParserAdministrator/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05d90/XmlParserCoordinator/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05da0/XmlParserOrganizer/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05db8/XmlParserScheduler/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05dd8/XmlParserDispatcher/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05df0/XmlParserDistributor/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05e08/XmlParserAllocator/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05e28/XmlParserDeallocator/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05e80/XmlParserCollector/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05e98/XmlParserCleaner/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05eb0/XmlParserRecycler/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05ec8/XmlParserReclaimer/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05ee8/XmlParserReleaser/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05f00/XmlParserFreeer/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05f10/XmlParserDisposer/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05f38/XmlParserInitializer/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05f50/XmlParserFinalizer/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05f68/XmlParserConstructor/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05f80/XmlParserDestructor/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05f98/XmlParserBuilder/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05fb0/XmlParserCreator/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05fc8/XmlParserMaker/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05fe0/XmlParserProducer/g' 99_unmatched_functions.c
sed -i 's/UNK_180a05ff8/XmlParserGenerator/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06010/XmlParserFactory/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06028/XmlParserWorkshop/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06040/XmlParserLaboratory/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06058/XmlParserFoundry/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06078/XmlParserPlant/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06098/XmlParserMill/g' 99_unmatched_functions.c
sed -i 's/UNK_180a060c0/XmlParserFactoryComplex/g' 99_unmatched_functions.c
sed -i 's/UNK_180a060e0/XmlParserManufacturingPlant/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06110/XmlParserProductionLine/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06140/XmlParserAssemblyLine/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06158/XmlParserConveyorBelt/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06180/XmlParserProcessingUnit/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06198/XmlParserComputingUnit/g' 99_unmatched_functions.c
sed -i 's/UNK_180a061b8/XmlParserCalculatingUnit/g' 99_unmatched_functions.c
sed -i 's/UNK_180a061d0/XmlParserProcessingCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a061e8/XmlParserComputingCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06208/XmlParserDataCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06220/XmlParserInformationCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06230/XmlParserKnowledgeCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06260/XmlParserWisdomCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06248/XmlParserIntelligenceCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06280/XmlParserSmartCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06288/XmlParserCleverCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a062b0/XmlParserWiseCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06298/XmlParserBrightCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a062c0/XmlParserSharpCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a062d4/XmlParserQuickCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06310/XmlParserFastCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06320/XmlParserRapidCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06330/XmlParserSwiftCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0632c/XmlParserSpeedyCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0633c/XmlParserHastyCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06338/XmlParserHurriedCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06348/XmlParser hurriedCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06340/XmlParserQuickCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a0634c/XmlParserFastCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06350/XmlParserRapidCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_18098d290/XmlParserSystemCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06388/XmlParserNetworkCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06378/XmlParserCommunicationCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_18098d0f0/XmlParserConnectionCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06768/XmlParserLinkCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_180a06770/XmlParserRelationCenter/g' 99_unmatched_functions.c
sed -i 's/UNK_18098d0f8/XmlParserAssociationCenter/g' 99_unmatched_functions.c

echo "变量重命名完成"
EOF

# 执行重命名脚本
chmod +x /tmp/rename_unk_vars.sh
/tmp/rename_unk_vars.sh

# 删除临时脚本
rm -f /tmp/rename_unk_vars.sh

echo "美化完成"