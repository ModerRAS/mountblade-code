#!/bin/bash

# 美化代码的全面脚本
# 将所有DAT_和UNK_变量名替换为更有意义的名称

# 进入正确的目录
cd /root/WorkSpace/CSharp/mountblade-code/TaleWorlds.Native

# 创建临时文件
temp_file=$(mktemp)

# 处理文件
sed -e 's/DAT_180bf5208/engineConfigData1/g' \
    -e 's/DAT_180bf5210/engineConfigData2/g' \
    -e 's/DAT_180bf5218/engineConfigData3/g' \
    -e 's/DAT_180bf5220/engineConfigData4/g' \
    -e 's/UNK_18098bc80/gameModuleHandle/g' \
    -e 's/DAT_180bf5bc0/engineConfigData5/g' \
    -e 's/DAT_180bf5bc8/engineConfigData6/g' \
    -e 's/DAT_180bf5bd0/engineConfigData7/g' \
    -e 's/DAT_180bf5bd8/engineConfigData8/g' \
    -e 's/UNK_1809fcc58/gameWorldHandle/g' \
    -e 's/DAT_180bf5c30/engineStateData1/g' \
    -e 's/DAT_180bf5c38/engineStateData2/g' \
    -e 's/DAT_180bf5c40/engineStateData3/g' \
    -e 's/DAT_180bf5c48/engineStateData4/g' \
    -e 's/DAT_180bf6080/engineRenderData1/g' \
    -e 's/DAT_180bf6088/engineRenderData2/g' \
    -e 's/DAT_180bf6090/engineRenderData3/g' \
    -e 's/DAT_180c910f8/audioSystemInitialized/g' \
    -e 's/DAT_180c91198/physicsSystemInitialized/g' \
    -e 's/DAT_1809fe0d0/gameWorldDataPtr/g' \
    -e 's/UNK_180941760/gameEventHandler/g' \
    -e 's/UNK_180941780/gameObjectManager/g' \
    -e 's/DAT_180c91900/gameCleanupFlag/g' \
    -e 's/UNK_1809fcc28/gameTimeManager/g' \
    -e 's/UNK_180a003b8/entitySpawnManager/g' \
    -e 's/DAT_180a00fd8/entityConfigData/g' \
    -e 's/UNK_1800868c0/entityDestroyHandler/g' \
    -e 's/UNK_180a003e8/entityTransformManager/g' \
    -e 's/DAT_180a00e28/entityPhysicsManager/g' \
    -e 's/UNK_180a00430/entityRenderManager/g' \
    -e 's/DAT_180a00d48/renderConfigManager/g' \
    -e 's/UNK_180a00460/physicsUpdateManager/g' \
    -e 's/DAT_180a00bb0/physicsConfigManager/g' \
    -e 's/UNK_180a004a8/collisionManager/g' \
    -e 's/DAT_180a00b88/collisionConfigManager/g' \
    -e 's/UNK_180a004c0/animationManager/g' \
    -e 's/UNK_180a004dc/objectUpdateManager/g' \
    -e 's/UNK_1809fdc18/objectRenderManager/g' \
    -e 's/UNK_180a004f8/objectPhysicsManager/g' \
    -e 's/UNK_180a00508/objectCollisionManager/g' \
    -e 's/UNK_180a00528/objectScriptManager/g' \
    -e 's/UNK_180a00538/objectInputManager/g' \
    -e 's/DAT_180bf64d0/objectConfigData1/g' \
    -e 's/DAT_180bf64d8/objectConfigData2/g' \
    -e 's/DAT_180bf64e0/objectConfigData3/g' \
    -e 's/DAT_180bf64e8/objectConfigData4/g' \
    -e 's/DAT_180bf6530/objectRenderData1/g' \
    -e 's/DAT_180bf6538/objectRenderData2/g' \
    -e 's/DAT_180bf6540/objectRenderData3/g' \
    -e 's/DAT_180bf6548/objectRenderData4/g' \
    -e 's/DAT_180bf6590/objectPhysicsData1/g' \
    -e 's/DAT_180bf6598/objectPhysicsData2/g' \
    -e 's/DAT_180bf65a0/objectPhysicsData3/g' \
    -e 's/DAT_180bf65a8/objectPhysicsData4/g' \
    -e 's/DAT_180bf65c0/objectCollisionData1/g' \
    -e 's/DAT_180bf65c8/objectCollisionData2/g' \
    -e 's/DAT_180bf65d0/objectCollisionData3/g' \
    -e 's/DAT_180bf65d8/objectCollisionData4/g' \
    -e 's/DAT_180bf65f0/objectScriptData1/g' \
    -e 's/DAT_180bf65f8/objectScriptData2/g' \
    -e 's/DAT_180bf6600/objectScriptData3/g' \
    -e 's/DAT_180bf6608/objectScriptData4/g' \
    -e 's/DAT_180bf6620/objectInputData1/g' \
    -e 's/DAT_180bf6628/objectInputData2/g' \
    -e 's/DAT_180bf6630/objectInputData3/g' \
    -e 's/DAT_180bf6638/objectInputData4/g' \
    -e 's/DAT_180bf6650/objectAnimationData1/g' \
    -e 's/DAT_180bf6658/objectAnimationData2/g' \
    -e 's/DAT_180bf6660/objectAnimationData3/g' \
    -e 's/DAT_180bf6668/objectAnimationData4/g' \
    -e 's/DAT_180bf66b0/memoryConfigData1/g' \
    -e 's/DAT_180bf66b8/memoryConfigData2/g' \
    -e 's/DAT_180bf66c0/memoryConfigData3/g' \
    -e 's/DAT_180bf66c8/memoryConfigData4/g' \
    -e 's/DAT_180bf52e8/moduleConfigData1/g' \
    -e 's/DAT_180bf52f0/moduleConfigData2/g' \
    -e 's/DAT_180bf52f8/moduleConfigData3/g' \
    -e 's/DAT_180bf5300/moduleConfigData4/g' \
    -e 's/DAT_180bf5738/moduleSpawnData1/g' \
    -e 's/DAT_180bf5740/moduleSpawnData2/g' \
    -e 's/DAT_180bf5748/moduleSpawnData3/g' \
    -e 's/DAT_180bf5750/moduleSpawnData4/g' \
    -e 's/UNK_180a01330/moduleManager/g' \
    TaleWorlds.Native.dll.c > "$temp_file"

# 移动临时文件到原文件
mv "$temp_file" TaleWorlds.Native.dll.c

echo "代码美化完成"