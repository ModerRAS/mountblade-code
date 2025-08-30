#!/bin/bash

# 脚本：处理剩余的LAB_标签
cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 获取剩余的LAB_标签
grep -o "LAB_180[0-9a-fA-F]*" 04_ui_system.c | sort | uniq > /tmp/remaining_lab_tags.txt

# 处理剩余的标签
count=711
while read tag; do
    if [ ! -z "$tag" ]; then
        new_tag="ui_label_general_$count"
        sed -i "s/$tag/$new_tag/g" 04_ui_system.c
        echo "替换: $tag -> $new_tag"
        count=$((count + 1))
    fi
done < /tmp/remaining_lab_tags.txt

echo "剩余LAB_标签语义化替换完成"