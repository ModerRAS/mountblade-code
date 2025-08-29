#!/bin/bash

# 批量重命名更多的FUN_函数
cd /dev/shm/mountblade-code/TaleWorlds.Native

# 处理更多FUN_函数
sed -i 's/FUN_180941be0/load_audio_resource/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941c00/process_audio_data/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941c20/mix_audio_channels/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941c40/apply_audio_effects/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941c60/cleanup_audio_buffer/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941c80/update_audio_listener/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941ca0/set_audio_position/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941cc0/get_audio_duration/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941ce0/seek_audio_position/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941d40/stop_all_audio/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941d60/pause_all_audio/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941d80/resume_all_audio/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941da0/set_master_volume/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941dc0/get_master_volume/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941de0/create_audio_source/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941e00/destroy_audio_source/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941e20/update_audio_source/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941e40/set_audio_source_volume/g' TaleWorlds.Native.dll.c
sed -i 's/FUN_180941e60/get_audio_source_volume/g' TaleWorlds.Native.dll.c

echo "更多音频相关函数重命名完成"