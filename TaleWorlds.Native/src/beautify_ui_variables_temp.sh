#!/bin/bash

# 美化UI系统变量名的脚本
# 专门处理04_ui_system.c文件中的变量名

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/04_ui_system.c"
TEMP_FILE="/tmp/ui_system_beautified.c"

# 创建临时文件
cp "$INPUT_FILE" "$TEMP_FILE"

# 美化变量名 - 使用更精确的替换
# 首先处理函数参数和局部变量

# 在InitializeUILayoutSystem函数中替换变量名
sed -i '/void InitializeUILayoutSystem(void)/,/^}/ {
  s/\<result0\>/processedElementCount/g
  s/\<contextData\>/elementOffset/g
  s/\<psemaphoreHandle\>/puiElementHandle/g
  s/\<uVar3\>/elementData/g
  s/\<stackParam000000d8\>/stackLayoutData/g
  s/\<localFloat20\>/accumulatedValue/g
  s/\<result4\>/totalElements/g
  s/\<result6\>/elementCounter/g
  s/\<floatResult8\>/minValue/g
  s/\<floatResult9\>/maxValue/g
  s/\<isCharacterMatch7\>/isElementValid/g
  s/\<result\>/layoutElementCount/g
  s/\<result5\>/elementIndex/g
  s/\<unmodifiedRBP\>/layoutContext/g
  s/\<unmodifiedESI\>/layoutHeight/g
  s/\<unmodifiedR12D\>/layoutXPosition/g
  s/\<localInt9\>/layoutDimension/g
  s/\<localInt5\>/elementEndIndex/g
  s/\<localInt4\>/elementStartIndex/g
  s/\<plocalFloat8\>/playoutFloatArray/g
  s/\<localLong7\>/loopCounter/g
}' "$TEMP_FILE"

# 处理其他函数中的变量名
sed -i 's/\<uVar[0-9]\+\>/uiVar/g; s/\<iVar[0-9]\+\>/indexVar/g; s/\<sVar[0-9]\+\>/staticVar/g' "$TEMP_FILE"

# 处理通用的局部变量
sed -i 's/\<local_[0-9]\+\>/localVar/g' "$TEMP_FILE"

# 替换回原文件
mv "$TEMP_FILE" "$INPUT_FILE"

echo "UI系统变量名美化完成"