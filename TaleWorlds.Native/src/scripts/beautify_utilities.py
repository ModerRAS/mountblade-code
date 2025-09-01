#!/bin/bash

# 美化06_utilities.c文件中的变量名
# 这个脚本将改进一些简单的变量名，使它们更具描述性

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 备份原文件
cp "$INPUT_FILE" "$INPUT_FILE.backup"

# 使用sed进行变量名替换
# 音频系统变量
sed -i 's/\bAudioEffectProcessorTable\b/AudioEffectProcessorDataTable/g' "$INPUT_FILE"
sed -i 's/\bAudioMixerSettingsTable\b/AudioMixerConfigurationTable/g' "$INPUT_FILE"

# 输入系统变量
sed -i 's/\bInputDeviceStateTable\b/InputDeviceStateDataTable/g' "$INPUT_FILE"
sed -i 's/\bInputEventQueueTable\b/InputEventQueueDataTable/g' "$INPUT_FILE"
sed -i 's/\bInputMappingTable\b/InputMappingDataTable/g' "$INPUT_FILE"
sed -i 's/\bInputControllerTable\b/InputControllerDataTable/g' "$INPUT_FILE"

# 物理系统变量
sed -i 's/\bPhysicsWorldTable\b/PhysicsWorldDataTable/g' "$INPUT_FILE"
sed -i 's/\bCollisionShapeTable\b/CollisionShapeDataTable/g' "$INPUT_FILE"
sed -i 's/\bRigidbodyTable\b/RigidBodyDataTable/g' "$INPUT_FILE"
sed -i 's/\bPhysicsMaterialTable\b/PhysicsMaterialDataTable/g' "$INPUT_FILE"
sed -i 's/\bPhysicsConstraintTable\b/PhysicsConstraintDataTable/g' "$INPUT_FILE"

# 动画系统变量
sed -i 's/\bAnimationClipTable\b/AnimationClipDataTable/g' "$INPUT_FILE"
sed -i 's/\bSkeletonTable\b/SkeletonDataTable/g' "$INPUT_FILE"
sed -i 's/\bAnimationStateTable\b/AnimationStateDataTable/g' "$INPUT_FILE"
sed -i 's/\bAnimationBlendTreeTable\b/AnimationBlendTreeDataTable/g' "$INPUT_FILE"
sed -i 's/\bAnimationControllerTable\b/AnimationControllerDataTable/g' "$INPUT_FILE"
sed -i 's/\bAnimationParameterTable\b/AnimationParameterDataTable/g' "$INPUT_FILE"
sed -i 's/\bAnimationEventTable\b/AnimationEventDataTable/g' "$INPUT_FILE"
sed -i 's/\bAnimationLayerTable\b/AnimationLayerDataTable/g' "$INPUT_FILE"
sed -i 's/\bAnimationMixerTable\b/AnimationMixerDataTable/g' "$INPUT_FILE"

# 脚本系统变量
sed -i 's/\bScriptFunctionTable\b/ScriptFunctionDataTable/g' "$INPUT_FILE"
sed -i 's/\bScriptVariableTable\b/ScriptVariableDataTable/g' "$INPUT_FILE"
sed -i 's/\bScriptClassTable\b/ScriptClassDataTable/g' "$INPUT_FILE"
sed -i 's/\bScriptMethodTable\b/ScriptMethodDataTable/g' "$INPUT_FILE"
sed -i 's/\bScriptObjectTable\b/ScriptObjectDataTable/g' "$INPUT_FILE"

# 线程系统变量
sed -i 's/\bThreadConfigTable\b/ThreadConfigurationTable/g' "$INPUT_FILE"
sed -i 's/\bThreadPriorityTable\b/ThreadPriorityDataTable/g' "$INPUT_FILE"
sed -i 's/\bThreadAffinityTable\b/ThreadAffinityDataTable/g' "$INPUT_FILE"
sed -i 's/\bThreadLocalStorageTable\b/ThreadLocalStorageDataTable/g' "$INPUT_FILE"
sed -i 's/\bThreadSynchronizationTable\b/ThreadSynchronizationDataTable/g' "$INPUT_FILE"
sed -i 's/\bThreadMonitorTable\b/ThreadMonitoringDataTable/g' "$INPUT_FILE"

echo "变量名美化完成"