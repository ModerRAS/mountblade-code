#!/bin/bash

# 美化系统函数名的脚本
# 用于替换 00_data_definitions.h 中的系统函数名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建备份
cp 00_data_definitions.h 00_data_definitions.h.backup3

# 定义系统函数映射
declare -A function_mapping=(
    # 系统函数 - 044xxx 系列
    ["FUN_180044dc0"]="system_initialize_001"
    ["FUN_180045380"]="system_initialize_002"
    ["FUN_180045580"]="system_initialize_003"
    ["FUN_180046190"]="system_cleanup_001"
    ["FUN_1800462c0"]="system_cleanup_002"
    ["FUN_1800466d0"]="system_cleanup_003"
    ["FUN_180049470"]="system_cleanup_004"
    ["FUN_1800496b0"]="system_cleanup_005"
    ["FUN_180049830"]="system_cleanup_006"
    ["FUN_18004b100"]="system_cleanup_007"
    ["FUN_18004b1f0"]="system_cleanup_008"
    ["FUN_18004afa0"]="system_cleanup_009"
    ["FUN_18004c0d0"]="system_cleanup_010"
    ["FUN_18004cc20"]="system_cleanup_011"
    
    # 系统函数 - 051xxx 系列
    ["FUN_180051cc0"]="system_handle_manager_001"
    ["FUN_180051d40"]="system_handle_manager_002"
    ["FUN_180051f00"]="system_handle_manager_003"
    ["FUN_180051150"]="system_handle_manager_004"
    ["FUN_180052940"]="system_handle_manager_005"
    ["FUN_180056b30"]="system_event_handler_001"
    ["FUN_180056f70"]="system_event_handler_002"
    ["FUN_180057980"]="system_event_handler_003"
    ["FUN_1800588c0"]="system_event_handler_004"
    ["FUN_1800590b0"]="system_event_handler_005"
    ["FUN_180059820"]="system_event_handler_006"
    ["FUN_18005cc00"]="system_event_handler_007"
    ["FUN_18005ce30"]="system_event_handler_008"
    ["FUN_18005d1f0"]="system_event_handler_009"
    ["FUN_18005d580"]="system_event_handler_010"
    ["FUN_18005d660"]="system_event_handler_011"
    ["FUN_18005dbb0"]="system_event_handler_012"
    ["FUN_18005e110"]="system_event_handler_013"
    ["FUN_18005e300"]="system_event_handler_014"
    ["FUN_18005e630"]="system_event_handler_015"
    ["FUN_18005e6a0"]="system_event_handler_016"
    ["FUN_18005e890"]="system_event_handler_017"
    
    # 系统函数 - 062xxx 系列
    ["FUN_1800622d0"]="system_data_manager_001"
    ["FUN_180062300"]="system_data_manager_002"
    ["FUN_180062b1e0"]="system_data_manager_003"
    ["FUN_180062b420"]="system_data_manager_004"
    ["FUN_180062b8b0"]="system_data_manager_005"
    ["FUN_180062c100"]="system_data_manager_006"
    ["FUN_180062c1e0"]="system_data_manager_007"
    ["FUN_180062c5f0"]="system_data_manager_008"
    
    # 系统函数 - 068xxx 系列
    ["FUN_180068a90"]="system_validator_001"
    
    # 系统函数 - 072xxx 系列
    ["FUN_180072e10"]="system_checker_001"
    
    # 系统函数 - 075xxx 系列
    ["FUN_180075ff0"]="system_resource_001"
    ["FUN_1800763c0"]="system_resource_002"
    ["FUN_180076910"]="system_resource_003"
    
    # 系统函数 - 091xxx 系列
    ["FUN_180091430"]="system_graphics_001"
    ["FUN_180091970"]="system_graphics_002"
    
    # 系统函数 - 096xxx 系列
    ["FUN_180096b60"]="system_ui_001"
    
    # 系统函数 - 0afxxx 系列
    ["FUN_1800af2c0"]="system_ui_002"
    ["FUN_1800b4a00"]="system_ui_003"
    ["FUN_1800b4ec0"]="system_ui_004"
    ["FUN_1800ba4b0"]="system_ui_005"
    ["FUN_1800bf6c0"]="system_ui_006"
    ["FUN_1800c4960"]="system_ui_007"
    ["FUN_1800c4da0"]="system_ui_008"
    ["FUN_1800c5020"]="system_ui_009"
    
    # 系统函数 - 0f2xxx 系列
    ["FUN_1800f2fd0"]="system_processor_001"
    
    # 系统函数 - 10fxxx 系列
    ["FUN_18010f010"]="system_config_001"
    
    # 系统函数 - 114xxx 系列
    ["FUN_180114450"]="system_config_002"
    
    # 系统函数 - 125xxx 系列
    ["FUN_180125780"]="system_initializer_001"
    ["FUN_180127860"]="system_initializer_002"
    ["FUN_1801299b0"]="system_initializer_003"
    
    # 系统函数 - 12cxxx 系列
    ["FUN_18012cfe0"]="system_initializer_004"
    
    # 系统函数 - 16bxxx 系列
    ["FUN_18016bdb0"]="system_processor_002"
    ["FUN_18016c970"]="system_processor_003"
    ["FUN_18016fec0"]="system_processor_004"
    ["FUN_18016fee0"]="system_processor_005"
    
    # 系统函数 - 19exxx 系列
    ["FUN_18019e140"]="system_processor_006"
    
    # 系统函数 - 1abxxx 系列
    ["FUN_1801ab660"]="system_processor_007"
    ["FUN_1801b9a40"]="system_processor_008"
    
    # 系统函数 - 1ebxxx 系列
    ["FUN_1801ebff0"]="system_processor_009"
    ["FUN_1801ec160"]="system_processor_010"
    ["FUN_1801ec300"]="system_processor_011"
    ["FUN_1801ec3f0"]="system_processor_012"
    
    # 系统函数 - 1efxxx 系列
    ["FUN_1801efe50"]="system_finalizer_001"
    ["FUN_1801f01c0"]="system_finalizer_002"
    ["FUN_1801ff450"]="system_finalizer_003"
    ["FUN_1801fffd0"]="system_finalizer_004"
    
    # 系统函数 - 23axxx 系列
    ["FUN_18023a940"]="system_network_001"
    ["FUN_180225ee0"]="system_network_002"
    
    # 系统函数 - 291xxx 系列
    ["FUN_180291500"]="system_network_003"
    
    # 系统函数 - 2a1xxx 系列
    ["FUN_1802a1af3"]="system_handler_001"
    ["FUN_1802a1fb0"]="system_handler_002"
    ["FUN_1802a21d0"]="system_handler_003"
    ["FUN_1802a2420"]="system_handler_004"
    ["FUN_1802a2ab0"]="system_handler_005"
    ["FUN_1802a2d10"]="system_handler_006"
    ["FUN_1802a41e0"]="system_handler_007"
    ["FUN_1802a4590"]="system_handler_008"
    ["FUN_1802a4e60"]="system_handler_009"
    ["FUN_1802a9200"]="system_handler_010"
    ["FUN_1802a9450"]="system_handler_011"
    ["FUN_1802a9bc0"]="system_handler_012"
    
    # 系统函数 - 2f5xxx 系列
    ["FUN_1802f5f70"]="system_memory_001"
    
    # 系统函数 - 327xxx 系列
    ["FUN_180327540"]="system_memory_002"
    ["FUN_180320470"]="system_memory_003"
    ["FUN_180320c80"]="system_memory_004"
    ["FUN_180320e20"]="system_memory_005"
    
    # 系统函数 - 328xxx 系列
    ["FUN_180328540"]="system_allocator_001"
    
    # 系统函数 - 329xxx 系列
    ["FUN_1803296c0"]="system_allocator_002"
    ["FUN_180329910"]="system_allocator_003"
    ["FUN_180329fa0"]="system_allocator_004"
    
    # 系统函数 - 32bxxx 系列
    ["FUN_18032ba60"]="system_allocator_005"
    ["FUN_18032b880"]="system_allocator_006"
    ["FUN_18032bba0"]="system_allocator_007"
    ["FUN_18032bd90"]="system_allocator_008"
    ["FUN_18032bdbf"]="system_allocator_009"
    ["FUN_18032be83"]="system_allocator_010"
    ["FUN_18032bea0"]="system_allocator_011"
    ["FUN_18032beda"]="system_allocator_012"
    ["FUN_18032bfae"]="system_allocator_013"
    ["FUN_18032bfc0"]="system_allocator_014"
    ["FUN_18032bff0"]="system_allocator_015"
    ["FUN_18032c097"]="system_allocator_016"
    
    # 系统函数 - 339xxx 系列
    ["FUN_180339110"]="system_memory_manager_001"
    ["FUN_180339920"]="system_memory_manager_002"
    ["FUN_180339a90"]="system_memory_manager_003"
    ["FUN_180339cf0"]="system_memory_manager_004"
    ["FUN_180339db0"]="system_memory_manager_005"
    ["FUN_18033b220"]="system_memory_manager_006"
    ["FUN_18033b3a0"]="system_memory_manager_007"
    ["FUN_18033bc80"]="system_memory_manager_008"
    
    # 系统函数 - 34dxxx 系列
    ["FUN_18034dd30"]="system_hardware_001"
    
    # 系统函数 - 405xxx 系列
    ["FUN_1804055e0"]="system_hardware_002"
    
    # 系统函数 - 430xxx 系列
    ["FUN_1804300b0"]="system_hardware_003"
    
    # 系统函数 - 45dxxx 系列
    ["FUN_18045d840"]="system_finalizer_005"
    ["FUN_18045d8e0"]="system_finalizer_006"
    ["FUN_18045d980"]="system_finalizer_007"
    
    # 系统函数 - 4aaxxx 系列
    ["FUN_1804aa090"]="system_finalizer_008"
    
    # 系统函数 - 55exxx 系列
    ["FUN_18055e020"]="system_finalizer_009"
    
    # 系统函数 - 624xxx 系列
    ["FUN_180624a00"]="system_thread_001"
    ["FUN_180624af0"]="system_thread_002"
    
    # 系统函数 - 626xxx 系列
    ["FUN_180626f80"]="system_thread_003"
    
    # 系统函数 - 627xxx 系列
    ["FUN_1806277c0"]="system_thread_manager_001"
    ["FUN_180627910"]="system_thread_manager_002"
    ["FUN_1806279c0"]="system_thread_manager_003"
    ["FUN_180627ae0"]="system_thread_manager_004"
    
    # 系统函数 - 628xxx 系列
    ["FUN_1806289a0"]="system_thread_manager_005"
    ["FUN_180628a40"]="system_thread_manager_006"
    ["FUN_180628ca0"]="system_thread_manager_007"
    
    # 系统函数 - 629xxx 系列
    ["FUN_180629020"]="system_thread_manager_008"
    ["FUN_1806298d0"]="system_thread_manager_009"
    ["FUN_180629a40"]="system_thread_manager_010"
    ["FUN_180629c00"]="system_thread_manager_011"
    
    # 系统函数 - 62cxxx 系列
    ["FUN_18062c1e0"]="system_thread_manager_012"
    
    # 系统函数 - 64exxx 系列
    ["FUN_18064e900"]="system_helper_001"
    ["FUN_18064e990"]="system_helper_002"
    
    # 系统函数 - 66bxxx 系列
    ["FUN_18066bdc0"]="system_helper_003"
    
    # 系统函数 - 8fcxxx 系列
    ["FUN_1808fc050"]="system_crypto_001"
    ["FUN_1808fc820"]="system_crypto_002"
    ["FUN_1808fcb30"]="system_crypto_003"
    ["FUN_1808fcb90"]="system_crypto_004"
    
    # 系统函数 - 93xxx 系列
    ["FUN_180093710"]="system_validator_002"
)

# 执行替换
for old_name in "${!function_mapping[@]}"; do
    new_name="${function_mapping[$old_name]}"
    echo "替换 $old_name -> $new_name"
    sed -i "s/$old_name/$new_name/g" 00_data_definitions.h
done

echo "系统函数名替换完成"