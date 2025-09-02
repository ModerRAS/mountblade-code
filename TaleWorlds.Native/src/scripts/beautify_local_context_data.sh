#!/bin/bash

# 美化06_utilities.c文件中的LocalContextData变量名
# 将LocalContextData[0-9]替换为语义化名称

sed -i 's/LocalContextData1/ResourceContextData1/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/LocalContextData2/ResourceContextData2/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/LocalContextData3/ResourceContextData3/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/LocalContextData4/ResourceContextData4/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/LocalContextData5/ResourceContextData5/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/LocalContextData6/ResourceContextData6/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/LocalContextData7/ResourceContextData7/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/LocalContextData8/ResourceContextData8/g' TaleWorlds.Native/src/06_utilities.c

echo "LocalContextData变量名美化完成"