#!/bin/bash

# 分析03_rendering.c文件并生成美化建议
echo "=== TaleWorlds.Native/src/03_rendering.c 美化分析报告 ==="
echo

# 统计当前已定义的宏数量
echo "📊 当前已定义的宏数量："
echo "FUN_ 函数宏: $(grep -c "#define.*FUN_180" TaleWorlds.Native/src/03_rendering.c)"
echo "UNK_ 变量宏: $(grep -c "#define.*UNK_180" TaleWorlds.Native/src/03_rendering.c)"
echo "DAT_ 变量宏: $(grep -c "#define.*DAT_180" TaleWorlds.Native/src/03_rendering.c)"
echo

# 查找高频使用但尚未定义宏的变量
echo "🔍 高频使用但尚未定义宏的变量："
echo

# 查找高频的_DAT_变量
echo "=== _DAT_ 变量使用频率 ==="
grep -o "_DAT_180[0-9a-f]\{4,5\}" TaleWorlds.Native/src/03_rendering.c | sort | uniq -c | sort -nr | head -15

echo
echo "=== DAT_ 变量使用频率 ==="
grep -o "DAT_180[0-9a-f]\{4,5\}" TaleWorlds.Native/src/03_rendering.c | grep -v "#define" | sort | uniq -c | sort -nr | head -15

echo
echo "=== UNK_ 变量使用频率 ==="
grep -o "UNK_180[0-9a-f]\{4,5\}" TaleWorlds.Native/src/03_rendering.c | grep -v "#define" | sort | uniq -c | sort -nr | head -15

echo
echo "=== 建议添加的宏定义 ==="
echo

# 生成建议的宏定义
echo "// 渲染系统时间戳变量"
grep -o "_DAT_180c8ed30" TaleWorlds.Native/src/03_rendering.c | sort | uniq | head -1 | while read var; do
    count=$(grep -c "$var" TaleWorlds.Native/src/03_rendering.c)
    echo "#define RenderSystemTimestamp $var  // 使用次数: $count"
done

echo
echo "// 渲染材质管理器变量"
grep -o "_DAT_180c86890" TaleWorlds.Native/src/03_rendering.c | sort | uniq | head -1 | while read var; do
    count=$(grep -c "$var" TaleWorlds.Native/src/03_rendering.c)
    echo "#define RenderMaterialManager $var  // 使用次数: $count"
done

echo
echo "// 渲染属性管理器变量"
grep -o "_DAT_180c86920" TaleWorlds.Native/src/03_rendering.c | sort | uniq | head -1 | while read var; do
    count=$(grep -c "$var" TaleWorlds.Native/src/03_rendering.c)
    echo "#define RenderPropertyManager $var  // 使用次数: $count"
done

echo
echo "// 渲染材质数据管理器变量"
grep -o "_DAT_180c8a980" TaleWorlds.Native/src/03_rendering.c | sort | uniq | head -1 | while read var; do
    count=$(grep -c "$var" TaleWorlds.Native/src/03_rendering.c)
    echo "#define RenderMaterialDataManager $var  // 使用次数: $count"
done

echo
echo "// 渲染变换管理器变量"
grep -o "_DAT_180c86878" TaleWorlds.Native/src/03_rendering.c | sort | uniq | head -1 | while read var; do
    count=$(grep -c "$var" TaleWorlds.Native/src/03_rendering.c)
    echo "#define RenderTransformManager $var  // 使用次数: $count"
done

echo
echo "=== 美化建议总结 ==="
echo "1. 已有大量FUN_函数宏定义，覆盖了大部分常用函数"
echo "2. 需要添加高频使用的_DAT_变量宏定义"
echo "3. 建议为系统管理器变量添加语义化名称"
echo "4. 主要目标是提高代码可读性和维护性"
echo "5. 保持代码逻辑不变，只修改变量名表示方式"