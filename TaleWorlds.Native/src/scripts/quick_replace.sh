#!/bin/bash

# 使用 sed 命令直接替换变量名
sed -i 's/localContextPointer/LocalContext/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/bytePointer5/BytePtr5/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/resourcePointer5/ResourcePtr5/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/unsignedResult4/UnsignedResult4/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/unsignedResult3/UnsignedResult3/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/objectContextParam/ObjectContextParam/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/byteValue4/ByteValue4/g' TaleWorlds.Native/src/06_utilities.c

echo "替换完成"