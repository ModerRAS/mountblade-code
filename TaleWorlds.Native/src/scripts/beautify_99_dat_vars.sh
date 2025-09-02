#!/bin/bash

# 美化99_unmatched_functions.c文件中的DAT_变量名

# 音频系统相关的数据变量
sed -i 's/DAT_180a012f0/AudioSystemEffectControlData/g' 99_unmatched_functions.c
sed -i 's/DAT_180c8aa50/AudioSystemStreamProcessor/g' 99_unmatched_functions.c
sed -i 's/DAT_180a02638/AudioSystemChannelData1/g' 99_unmatched_functions.c
sed -i 's/DAT_180a0263c/AudioSystemChannelData2/g' 99_unmatched_functions.c
sed -i 's/DAT_180a02640/AudioSystemChannelData3/g' 99_unmatched_functions.c
sed -i 's/DAT_180a02644/AudioSystemChannelData4/g' 99_unmatched_functions.c
sed -i 's/DAT_180a02648/AudioSystemChannelData5/g' 99_unmatched_functions.c
sed -i 's/DAT_180a0264c/AudioSystemChannelData6/g' 99_unmatched_functions.c
sed -i 's/DAT_180a06430/AudioSystemMixerControlData/g' 99_unmatched_functions.c
sed -i 's/DAT_180c8a9b8/AudioSystemBufferControl/g' 99_unmatched_functions.c
sed -i 's/DAT_180a02fe8/AudioSystemEffectData/g' 99_unmatched_functions.c
sed -i 's/DAT_180a035c0/AudioSystemVolumeControlData/g' 99_unmatched_functions.c
sed -i 's/DAT_180a036e0/AudioSystemConfigurationData/g' 99_unmatched_functions.c
sed -i 's/DAT_180c86970/AudioSystemMemoryPoolData/g' 99_unmatched_functions.c
sed -i 's/DAT_180a03870/AudioSystemQueueData/g' 99_unmatched_functions.c
sed -i 's/DAT_180a038d8/AudioSystemStackData/g' 99_unmatched_functions.c
sed -i 's/DAT_180a035d0/AudioSystemHeapData/g' 99_unmatched_functions.c
sed -i 's/DAT_180c86978/AudioSystemEventQueueData/g' 99_unmatched_functions.c
sed -i 's/DAT_180c8695c/AudioSystemCommandQueueData/g' 99_unmatched_functions.c
sed -i 's/DAT_180c86968/AudioSystemMessageQueueData/g' 99_unmatched_functions.c
sed -i 's/DAT_180a03e88/AudioSystemDeviceData/g' 99_unmatched_functions.c
sed -i 's/DAT_180a03ec0/AudioSystemDriverData/g' 99_unmatched_functions.c
sed -i 's/DAT_180a03f00/AudioSystemHardwareData/g' 99_unmatched_functions.c
sed -i 's/DAT_180a03f58/AudioSystemSoftwareData/g' 99_unmatched_functions.c
sed -i 's/DAT_18098d7b0/AudioSystemInterfaceData/g' 99_unmatched_functions.c
sed -i 's/DAT_180a00320/AudioSystemCallbackData/g' 99_unmatched_functions.c
sed -i 's/DAT_180c8aa40/AudioSystemNotificationData/g' 99_unmatched_functions.c
sed -i 's/DAT_180a041f0/AudioSystemAlertData/g' 99_unmatched_functions.c
sed -i 's/DAT_180a04340/AudioSystemRequestData/g' 99_unmatched_functions.c
sed -i 's/DAT_180a043f8/AudioSystemResponseData/g' 99_unmatched_functions.c

echo "DAT_变量名美化完成"