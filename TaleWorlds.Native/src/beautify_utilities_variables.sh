#!/bin/bash

# 06_utilities.c 变量名美化脚本
# 美化剩余的未语义化变量名

# 定义美化规则
# 1. 美化数字后缀的变量名
sed -i 's/inputParameter0/validationParameter0/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/inputParameter1/validationParameter1/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/inputParameter2/validationParameter2/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/inputParameter4/validationParameter4/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/inputParameter6/validationParameter6/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/inputParameter9/validationParameter9/g' TaleWorlds.Native/src/06_utilities.c

# 2. 美化异常处理相关变量
sed -i 's/exceptionDataBuffer/exceptionBuffer/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/exceptionDataBuffer3/exceptionBuffer3/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/exceptionDataBuffer6/exceptionBuffer6/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/exceptionHandlerContext7/exceptionContext7/g' TaleWorlds.Native/src/06_utilities.c
sed -i 's/exceptionHandlerContext8/exceptionContext8/g' TaleWorlds.Native/src/06_utilities.c

# 3. 美化系统数据缓冲区变量
sed -i 's/systemDataBuffer5/systemBuffer5/g' TaleWorlds.Native/src/06_utilities.c

# 4. 美化寄存器相关变量
sed -i 's/inputRegisterR10/inputRegisterR10/g' TaleWorlds.Native/src/06_utilities.c

# 5. 美化记录数据类型变量
sed -i 's/recordDataType/recordDataType/g' TaleWorlds.Native/src/06_utilities.c

# 6. 美化字符标志变量
sed -i 's/characterFlag/characterFlag/g' TaleWorlds.Native/src/06_utilities.c

echo "06_utilities.c 变量名美化完成"