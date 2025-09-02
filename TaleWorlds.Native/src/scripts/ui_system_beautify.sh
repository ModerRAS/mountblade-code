#!/bin/bash

# UI系统变量美化脚本
# 用于替换04_ui_system.c中的UNK_变量为语义化名称

# 创建临时脚本文件
cat > temp_ui_beautify.sh << 'EOF'
#!/bin/bash

# 美化UNK_变量为语义化名称
sed -i 's/UNK_180003e90/UIMemoryManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180003fa0/UIThreadManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180003d80/UISynchronizationMechanismAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180003de0/UITaskSchedulerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180003050/FontManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180003110/UITextureManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180002f70/UIShaderManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180002fd0/UIRenderingPipelineAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_1800033b0/UILayoutEngineAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180003430/UIAnimationSystemAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_1800032a0/UIEventSystemAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180003300/UIInputSystemAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180004300/UIResourceAllocatorAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180002ee0/UIRenderingDataAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180002f20/UIRenderingStateAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180002e60/UIAnimationConstantsAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180002ea0/UITransformConstantsAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180005080/UIPermissionManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_1800049d0/UIPolicyManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180005440/UIIndexManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180005bc0/UIRuleManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_1800057b0/UICacheManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180006190/UICacheManagerAdvancedAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_1800065d0/UIStorageManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180006ff0/UIStorageManagerAdvancedAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_18000d630/UIBackupManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180006945/UIRestoreManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_18000b3dd/UIRestoreManagerAdvancedAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_18000dbc6/UIMigrationManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_18000e750/UIMigrationManagerAdvancedAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_18000e8e0/UIErrorManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_18000e6e0/UILogManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_18000e850/UIWarningManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_18000e670/UIExceptionManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180017300/UIArchiveManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_18000e7c0/UIStateManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_18000e7e0/UIInfoManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180006f34/UISyncManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_18000e39c/UIVersionManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_18000e4e0/UIDiagnosticManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_18000e5e0/UIHealthCheckManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_18000e470/UIRepairManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_18000e550/UIRepairManagerAdvancedAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_18000f120/UIRestoreManagerAdvancedAVXHandler2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180006b22/UIConfigManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_18000e06e/UISettingsManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180006dcf/UIEnvironmentManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_18000deb4/UIDebugManagerAVXHandler/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# 美化数据变量
sed -i 's/UNK_180946b50/UIAnimationSizeTable/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180946b70/UIEventParameterTable1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180946ba0/UIEventParameterTable2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180946bd8/UIEventParameterTable3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180946c30/UIEventParameterTable4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180946c60/UIEventParameterTable5/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180946c88/UIEventParameterTable6/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180946cb8/UIEventParameterTable7/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180946ce0/UIEventParameterTable8/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180946d10/UIEventParameterTable9/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180946d38/UIEventParameterTable10/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180946d68/UIEventParameterTable11/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180946d90/UIEventParameterTable12/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180946db8/UIEventParameterTable13/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180946de0/UIEventParameterTable14/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180946e08/UIEventParameterTable15/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/UNK_180946e30/UIEventParameterTable16/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

# 美化动画相关变量
sed -i 's/_DAT_180946f30/UIAnimationMultiplyConstant/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180946f40/UIAnimationShuffleMask1/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180946f70/UIAnimationShuffleMask2/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180946f90/UIAnimationShuffleMask3/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
sed -i 's/_DAT_180946fa0/UIAnimationShuffleMask4/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c

echo "UI系统变量美化完成"
EOF

# 使脚本可执行
chmod +x temp_ui_beautify.sh

# 执行脚本
./temp_ui_beautify.sh

# 删除临时脚本
rm temp_ui_beautify.sh

echo "UI系统变量美化任务完成"