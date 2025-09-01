#!/bin/bash

# 批量替换06_utilities.c文件中的变量名
# 注意：这个脚本是为了美化代码中的变量名

sed -i 's/\bprocessPointer\b/ProcessResultPointer/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/\bpresourceTable\b/ResourceTablePointer/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/\bpresourceIndex\b/ResourceIndexPointer/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/\bresourcePointer\b/ResourceDataPointer/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/\bcontextPointer\b/ContextDataPointer/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/\bcleanupPointer\b/CleanupDataPointer/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/\bnullPointer\b/NullDataPointer/g' TaleWorlds.Native/src/06_utilities.c

echo "变量名替换完成"