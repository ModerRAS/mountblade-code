#!/bin/bash

# 美化01_initialization.c文件中的更多变量名
# 将system_temp_uint_value等变量替换为更具语义的名称

FILE_PATH="/dev/shm/mountblade-code/TaleWorlds.Native/src/01_initialization.c"

# 根据上下文替换system_temp_uint_value变量名
# 1. 在音频处理上下文中
sed -i 's/ulonglong system_temp_uint_value;/ulonglong system_audio_temp_counter;/g' "$FILE_PATH"
sed -i 's/system_temp_uint_value = system_audio_status;/system_audio_temp_counter = system_audio_status;/g' "$FILE_PATH"
sed -i 's/if (-1 < (longlong)system_temp_uint_value)/if (-1 < (longlong)system_audio_temp_counter)/g' "$FILE_PATH"
sed -i 's/if ((longlong)system_temp_uint_value < 3)/if ((longlong)system_audio_temp_counter < 3)/g' "$FILE_PATH"
sed -i 's/system_temp_uint_value = system_temp_uint_value + 1;/system_audio_temp_counter = system_audio_temp_counter + 1;/g' "$FILE_PATH"
sed -i 's/while ((longlong)system_temp_uint_value < (longlong)system_uint_buffer)/while ((longlong)system_audio_temp_counter < (longlong)system_uint_buffer)/g' "$FILE_PATH"

# 2. 在线程处理上下文中
sed -i 's/system_temp_uint_value = GetCurrentThread();/system_thread_temp_handle = GetCurrentThread();/g' "$FILE_PATH"
sed -i 's/system_create_memory_pool(system_temp_uint_value,/system_create_memory_pool(system_thread_temp_handle,/g' "$FILE_PATH"

# 3. 在资源处理上下文中  
sed -i 's/system_temp_uint_value = system_resource_memory_pool;/system_resource_temp_handle = system_resource_memory_pool;/g' "$FILE_PATH"
sed -i 's/system_process_resource_request(system_temp_uint_value,/system_process_resource_request(system_resource_temp_handle,/g' "$FILE_PATH"

echo "更多变量名替换完成"