#!/bin/bash

# 生成Unwind函数美化替换命令
# 这个脚本会生成所有的sed命令来批量替换Unwind函数

echo "#!/bin/bash"
echo "# 批量美化Unwind函数的sed命令"
echo ""

# 获取所有Unwind函数
grep -n "^void Unwind_" /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c | while read line; do
    line_num=$(echo $line | cut -d: -f1)
    func_def=$(echo $line | cut -d: -f2-)
    
    # 提取函数名
    func_name=$(echo $func_def | sed 's/^void \([^(]*\).*/\1/')
    
    # 提取参数
    params=$(echo $func_def | sed 's/void [^(]*(\([^)]*\)).*/\1/')
    
    # 跳过已经处理过的函数
    if echo $func_name | grep -q "Unwind_.*Cleanup\|Unwind_.*System"; then
        continue
    fi
    
    echo "# 处理函数: $func_name"
    echo "sed -i '${line_num}s/.*/${func_name}已经被处理，请手动替换/' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
    echo ""
done