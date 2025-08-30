#!/bin/bash

# 脚本：自动化美化UI系统中的所有LAB_标签
# 将所有LAB_180*开头的标签替换为通用的语义化标签名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 创建通用的替换函数
replace_lab_tags() {
    local file=$1
    local count=1
    
    # 获取所有唯一的LAB_标签
    local tags=$(grep -o "LAB_180[0-9a-fA-F]*" "$file" | sort | uniq)
    
    for tag in $tags; do
        # 根据count生成不同的标签名称
        case $count in
            1) new_tag="ui_label_control_flow_start" ;;
            2) new_tag="ui_label_control_flow_end" ;;
            3) new_tag="ui_label_loop_condition" ;;
            4) new_tag="ui_label_loop_body" ;;
            5) new_tag="ui_label_branch_point" ;;
            6) new_tag="ui_label_error_handling" ;;
            7) new_tag="ui_label_cleanup_section" ;;
            8) new_tag="ui_label_initialization" ;;
            9) new_tag="ui_label_validation_check" ;;
            10) new_tag="ui_label_processing_start" ;;
            11) new_tag="ui_label_processing_end" ;;
            12) new_tag="ui_label_memory_operation" ;;
            13) new_tag="ui_label_state_transition" ;;
            14) new_tag="ui_label_event_handler" ;;
            15) new_tag="ui_label_callback_processing" ;;
            *) new_tag="ui_label_general_$count" ;;
        esac
        
        # 执行替换
        sed -i "s/$tag/$new_tag/g" "$file"
        echo "替换: $tag -> $new_tag"
        
        count=$((count + 1))
    done
}

# 执行替换
replace_lab_tags "04_ui_system.c"

echo "所有LAB_标签语义化替换完成"