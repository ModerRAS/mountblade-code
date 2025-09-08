#!/bin/bash

# 04_ui_system.c 文件函数名美化脚本
# 将高频出现的FUN_函数替换为语义化名称

# UI系统渲染函数
sed -i 's/FUN_180705870/ProcessUIRenderData/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807058d0/CleanupUIResources/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180705930/InitializeUIRenderer/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180705990/SetupUIRenderPipeline/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807059f0/ConfigureUIRenderSettings/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180705a50/ValidateUIRenderContext/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180705ab0/ProcessUIRenderBatch/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180705b10/SubmitUIRenderCommands/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180705b70/FlushUIRenderQueue/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180705bd0/ResetUIRenderState/g' TaleWorlds.Native/src/04_ui_system.c

# UI系统事件处理函数
sed -i 's/FUN_180705c30/ProcessUIEvent/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180705c90/DispatchUIEvent/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180705cf0/HandleUIEvent/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180705d50/ValidateUIEvent/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180705db0/QueueUIEvent/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180705e10/ProcessUIEventQueue/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180705e70/FlushUIEventQueue/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180705ed0/RegisterUIEventHandler/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180705f30/UnregisterUIEventHandler/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180705f90/FindUIEventHandler/g' TaleWorlds.Native/src/04_ui_system.c

# UI系统组件管理函数
sed -i 's/FUN_180705ff0/CreateUIComponent/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706050/DestroyUIComponent/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807060b0/InitializeUIComponent/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706110/UpdateUIComponent/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706170/RenderUIComponent/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807061d0/ValidateUIComponent/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706230/FindUIComponent/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706290/GetUIComponentData/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807062f0/SetUIComponentData/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706350/ProcessUIComponentEvent/g' TaleWorlds.Native/src/04_ui_system.c

# UI系统布局管理函数
sed -i 's/FUN_1807063b0/CalculateUILayout/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706410/UpdateUILayout/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706470/ValidateUILayout/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807064d0/MeasureUILayout/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706530/ArrangeUILayout/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706590/OptimizeUILayout/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807065f0/RefreshLayout/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706650/InvalidateLayout/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807066b0/GetLayoutBounds/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706710/SetLayoutBounds/g' TaleWorlds.Native/src/04_ui_system.c

# UI系统动画管理函数
sed -i 's/FUN_180706770/CreateUIAnimation/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807067d0/DestroyUIAnimation/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706830/UpdateUIAnimation/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706890/ProcessUIAnimation/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807068f0/ValidateUIAnimation/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706950/StartUIAnimation/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807069b0/StopUIAnimation/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706a10/PauseUIAnimation/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706a70/ResumeUIAnimation/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706ad0/GetUIAnimationState/g' TaleWorlds.Native/src/04_ui_system.c

# UI系统资源管理函数
sed -i 's/FUN_180706b30/AllocateUIResource/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706b90/FreeUIResource/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706bf0/LoadUIResource/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706c50/UnloadUIResource/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706cb0/FindUIResource/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706d10/ValidateUIResource/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706d70/CacheUIResource/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706dd0/FlushUIResourceCache/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706e300/GetUIResourceInfo/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706e90/SetUIResourceInfo/g' TaleWorlds.Native/src/04_ui_system.c

# UI系统数据管理函数
sed -i 's/FUN_180706ef0/ProcessUIData/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706f50/ValidateUIData/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180706fb0/UpdateUIData/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180707010/SyncUIData/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180707070/BackupUIData/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807070d0/RestoreUIData/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180707130/MigrateUIData/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180707190/ConvertUIData/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807071f0/NormalizeUIData/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180707250/OptimizeUIData/g' TaleWorlds.Native/src/04_ui_system.c

# UI系统状态管理函数
sed -i 's/FUN_1807072b0/GetUIState/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180707310/SetUIState/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180707370/UpdateUIState/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807073d0/ValidateUIState/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180707430/ResetUIState/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180707490/SaveUIState/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807074f0/LoadUIState/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180707550/BackupUIState/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_1807075b0/RestoreUIState/g' TaleWorlds.Native/src/04_ui_system.c
sed -i 's/FUN_180707610/SyncUIState/g' TaleWorlds.Native/src/04_ui_system.c

echo "04_ui_system.c文件函数名美化完成"