#!/bin/bash

# 进入源文件目录
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 批量替换DAT_变量
sed -i 's/DAT_180c91d14/SystemFileHandler/g' 99_unmatched_functions.c
sed -i 's/DAT_180c91d08/SystemResourceManager/g' 99_unmatched_functions.c
sed -i 's/DAT_180a401f0/SystemDatabaseConnection/g' 99_unmatched_functions.c
sed -i 's/DAT_180d48da4/SystemEventQueue/g' 99_unmatched_functions.c
sed -i 's/DAT_180d48da0/SystemMessageQueue/g' 99_unmatched_functions.c
sed -i 's/DAT_180d48d70/SystemTaskQueue/g' 99_unmatched_functions.c
sed -i 's/DAT_180d48d80/SystemTimerQueue/g' 99_unmatched_functions.c
sed -i 's/DAT_180d48d90/SystemIoQueue/g' 99_unmatched_functions.c
sed -i 's/DAT_18098d7d0/SystemGraphicsContext/g' 99_unmatched_functions.c
sed -i 's/DAT_180a0b1c0/SystemAudioContext/g' 99_unmatched_functions.c
sed -i 's/DAT_180a09d80/SystemInputManager/g' 99_unmatched_functions.c
sed -i 's/DAT_180bf00b0/SystemWindowHandle/g' 99_unmatched_functions.c
sed -i 's/DAT_180a3f750/SystemDeviceContext/g' 99_unmatched_functions.c
sed -i 's/DAT_180c96850/SystemRenderState/g' 99_unmatched_functions.c
sed -i 's/DAT_180c96838/SystemShaderState/g' 99_unmatched_functions.c
sed -i 's/DAT_180c96848/SystemTextureState/g' 99_unmatched_functions.c
sed -i 's/DAT_180c96840/SystemBufferState/g' 99_unmatched_functions.c
sed -i 's/DAT_180a09e20/SystemCameraState/g' 99_unmatched_functions.c
sed -i 's/DAT_180d49678/SystemLightingState/g' 99_unmatched_functions.c
sed -i 's/DAT_180bfa2f0/SystemMaterialState/g' 99_unmatched_functions.c
sed -i 's/DAT_180bfa2e8/SystemGeometryState/g' 99_unmatched_functions.c
sed -i 's/DAT_180bfa2f8/SystemAnimationState/g' 99_unmatched_functions.c
sed -i 's/DAT_180bfa310/SystemPhysicsState/g' 99_unmatched_functions.c
sed -i 's/DAT_180bfa308/SystemCollisionState/g' 99_unmatched_functions.c
sed -i 's/DAT_180bfa318/SystemNavigationState/g' 99_unmatched_functions.c
sed -i 's/DAT_180bfa330/SystemParticleState/g' 99_unmatched_functions.c
sed -i 's/DAT_180bfa328/SystemPostProcessState/g' 99_unmatched_functions.c
sed -i 's/DAT_180bfa338/SystemShadowState/g' 99_unmatched_functions.c
sed -i 's/DAT_180bfa340/SystemOcclusionState/g' 99_unmatched_functions.c
sed -i 's/DAT_180bfa320/SystemLodState/g' 99_unmatched_functions.c
sed -i 's/DAT_180bfa300/SystemCullingState/g' 99_unmatched_functions.c
sed -i 's/DAT_1809fd8ac/SystemNetworkState/g' 99_unmatched_functions.c
sed -i 's/DAT_180a0be28/SystemAudioState/g' 99_unmatched_functions.c
sed -i 's/DAT_180c8ec7a/SystemConfigurationFlag/g' 99_unmatched_functions.c
sed -i 's/DAT_180a01400/SystemMemoryFlag/g' 99_unmatched_functions.c
sed -i 's/DAT_180a09db0/SystemThreadFlag/g' 99_unmatched_functions.c
sed -i 's/DAT_180a13168/SystemProcessFlag/g' 99_unmatched_functions.c
sed -i 's/DAT_180a24f58/SystemIoFlag/g' 99_unmatched_functions.c
sed -i 's/DAT_180a25028/SystemTimerFlag/g' 99_unmatched_functions.c

echo "DAT_变量替换完成"