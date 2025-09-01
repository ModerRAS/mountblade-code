#!/bin/bash

# UI系统函数美化脚本
# 用于重命名04_ui_system.c中的FUN_函数为语义化名称

# 定义函数映射
declare -A function_mappings=(
    # 初始化和系统函数
    ["FUN_180651d46"]="InitializeUserInterfaceSystem"
    ["FUN_1806526f0"]="CreateUserInterfaceInstance"
    ["FUN_18065340f"]="SetupUserInterfaceContext"
    ["FUN_180655e60"]="ProcessUserInterfaceEvent"
    ["FUN_180656110"]="HandleUserInterfaceInput"
    ["FUN_180656160"]="DispatchUserInterfaceCommand"
    ["FUN_180657510"]="RenderUserInterfaceElement"
    ["FUN_180657dd0"]="UpdateUserInterfaceState"
    ["FUN_180657fa0"]="ValidateUserInterfaceData"
    ["FUN_1806587d0"]="ProcessUserInterfaceAnimation"
    
    # 渲染和图形函数
    ["FUN_1806596a0"]="ApplyUserInterfaceShader"
    ["FUN_18065a91c"]="RenderUserInterfaceTexture"
    ["FUN_18065bd4f"]="CalculateUserInterfaceMetrics"
    ["FUN_18065bf60"]="ProcessUserInterfaceTransform"
    ["FUN_18065c070"]="ApplyUserInterfaceEffect"
    ["FUN_18065c8f0"]="UpdateUserInterfaceCamera"
    ["FUN_18065cb98"]="RenderUserInterfaceBatch"
    ["FUN_18065cbfa"]="ProcessUserInterfaceVertex"
    ["FUN_18065cc10"]="UpdateUserInterfaceBuffer"
    
    # 窗口管理函数
    ["FUN_18065dec1"]="ManageUserInterfaceWindow"
    ["FUN_18065f057"]="CreateUserInterfaceWindow"
    ["FUN_18065f1c2"]="DestroyUserInterfaceWindow"
    ["FUN_18065f210"]="ResizeUserInterfaceWindow"
    ["FUN_18065fa20"]="UpdateUserInterfaceWindow"
    ["FUN_180660051"]="RefreshUserInterfaceWindow"
    ["FUN_1806603d0"]="RenderUserInterfaceWindow"
    
    # 控件和元素函数
    ["FUN_1806673f0"]="CreateUserInterfaceWidget"
    ["FUN_1806677e7"]="UpdateUserInterfaceWidget"
    ["FUN_1806687d4"]="DestroyUserInterfaceWidget"
    ["FUN_18066c4b8"]="ProcessUserInterfaceWidgetEvent"
    ["FUN_18066d3e9"]="InitializeUserInterfaceWidget"
    ["FUN_18066d3f4"]="ValidateUserInterfaceWidget"
    ["FUN_18066d763"]="RegisterUserInterfaceWidget"
    
    # 事件处理函数
    ["FUN_18066e90c"]="HandleUserInterfaceMouseEvent"
    ["FUN_18066ebc0"]="HandleUserInterfaceKeyboardEvent"
    ["FUN_1806704b6"]="ProcessUserInterfaceTouchEvent"
    ["FUN_1806704db"]="HandleUserInterfaceGestureEvent"
    ["FUN_1806707c6"]="DispatchUserInterfaceEvent"
    ["FUN_180670b1e"]="ValidateUserInterfaceEvent"
    ["FUN_180670bda"]="QueueUserInterfaceEvent"
    ["FUN_180670c31"]="ProcessUserInterfaceEventQueue"
    ["FUN_180670c62"]="RegisterUserInterfaceEventHandler"
    ["FUN_180670c6a"]="UnregisterUserInterfaceEventHandler"
    
    # 布局和样式函数
    ["FUN_1806712a0"]="InitializeUserInterfaceLayout"
    ["FUN_1806712b0"]="UpdateUserInterfaceLayout"
    ["FUN_1806721d0"]="CalculateUserInterfaceLayout"
    ["FUN_1806725c0"]="ApplyUserInterfaceStyle"
    ["FUN_180672a50"]="UpdateUserInterfaceTheme"
    ["FUN_180672da0"]="ValidateUserInterfaceStyle"
    
    # 动画和效果函数
    ["FUN_180673f50"]="CreateUserInterfaceAnimation"
    ["FUN_180674040"]="UpdateUserInterfaceAnimation"
    ["FUN_180674120"]="ProcessUserInterfaceAnimation"
    ["FUN_180674930"]="DestroyUserInterfaceAnimation"
    
    # 资源管理函数
    ["FUN_180675320"]="LoadUserInterfaceResource"
    ["FUN_180675430"]="UnloadUserInterfaceResource"
    ["FUN_180675570"]="CacheUserInterfaceResource"
    ["FUN_1806755af"]="ValidateUserInterfaceResource"
    ["FUN_1806757f1"]="ManageUserInterfaceResource"
    ["FUN_180675810"]="UpdateUserInterfaceResource"
    ["FUN_180675b40"]="ProcessUserInterfaceResource"
    ["FUN_180675b7b"]="CleanupUserInterfaceResource"
    
    # 渲染管线函数
    ["FUN_180675dd9"]="InitializeUserInterfaceRenderer"
    ["FUN_180675df0"]="SetupUserInterfaceRenderer"
    ["FUN_180675e28"]="UpdateUserInterfaceRenderer"
    ["FUN_180675f56"]="ValidateUserInterfaceRenderer"
    ["FUN_180675f70"]="ProcessUserInterfaceRenderer"
    ["FUN_180675fa7"]="DestroyUserInterfaceRenderer"
    
    # 内存管理函数
    ["FUN_1806760cf"]="AllocateUserInterfaceMemory"
    ["FUN_1806760f0"]="FreeUserInterfaceMemory"
    ["FUN_180676320"]="InitializeUserInterfaceMemory"
    ["FUN_180676490"]="ManageUserInterfaceMemory"
    ["FUN_180676700"]="ValidateUserInterfaceMemory"
    ["FUN_180676930"]="SetupUserInterfaceMemory"
    ["FUN_180676aa0"]="UpdateUserInterfaceMemory"
    ["FUN_180676d10"]="CleanupUserInterfaceMemory"
    ["FUN_180676df0"]="OptimizeUserInterfaceMemory"
    ["FUN_180676f40"]="CompactUserInterfaceMemory"
    
    # 数据处理函数
    ["FUN_180677100"]="InitializeUserInterfaceData"
    ["FUN_180677190"]="ProcessUserInterfaceData"
    ["FUN_180677300"]="UpdateUserInterfaceData"
    ["FUN_180677530"]="ValidateUserInterfaceData"
    ["FUN_1806777a0"]="TransformUserInterfaceData"
    ["FUN_180677ae0"]="SerializeUserInterfaceData"
    ["FUN_180677eb0"]="DeserializeUserInterfaceData"
    ["FUN_180677fc0"]="CompressUserInterfaceData"
    ["FUN_1806780c0"]="DecompressUserInterfaceData"
    ["FUN_1806782c0"]="EncryptUserInterfaceData"
    ["FUN_180678430"]="DecryptUserInterfaceData"
    ["FUN_180678540"]="HashUserInterfaceData"
    
    # 网络和通信函数
    ["FUN_180678810"]="SendUserInterfaceMessage"
    ["FUN_1806789c0"]="ReceiveUserInterfaceMessage"
    ["FUN_180678b10"]="ProcessUserInterfaceMessage"
    ["FUN_180678bc0"]="ValidateUserInterfaceMessage"
    ["FUN_180678e20"]="BroadcastUserInterfaceMessage"
    ["FUN_180678ef0"]="MulticastUserInterfaceMessage"
    ["FUN_180678fc0"]="QueueUserInterfaceMessage"
    ["FUN_1806790b0"]="ProcessUserInterfaceMessageQueue"
    ["FUN_180679210"]="FlushUserInterfaceMessageQueue"
    
    # 系统集成函数
    ["FUN_180679310"]="InitializeUserInterfaceSystem"
    ["FUN_180679480"]="UpdateUserInterfaceSystem"
    ["FUN_1806795f0"]="ShutdownUserInterfaceSystem"
    ["FUN_1806796f0"]="ResetUserInterfaceSystem"
    ["FUN_1806799b0"]="RestartUserInterfaceSystem"
    ["FUN_180679ca0"]="ValidateUserInterfaceSystem"
    ["FUN_180679d30"]="ConfigureUserInterfaceSystem"
)

# 遍历所有函数映射并执行替换
for old_name in "${!function_mappings[@]}"; do
    new_name="${function_mappings[$old_name]}"
    
    # 执行替换
    sed -i "s/\b$old_name\b/$new_name/g" /dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c
    
    echo "已替换: $old_name -> $new_name"
done

echo "UI系统函数美化完成"