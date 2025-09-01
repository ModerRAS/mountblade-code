#!/bin/bash

# 批量重命名06_utilities.c文件中的param_变量
# 系统化地替换函数签名中的参数名

cd /dev/shm/mountblade-code/TaleWorlds.Native/src

# 1. 单参数函数 - param_1 -> objectContext
sed -i 's/undefined8 InitializeObjectHandleA(longlong param_1)/undefined8 InitializeObjectHandleA(longlong objectContext)/' 06_utilities.c
sed -i 's/undefined8 InitializeObjectHandleB(longlong param_1)/undefined8 InitializeObjectHandleB(longlong objectContext)/' 06_utilities.c
sed -i 's/undefined8 InitializeObjectHandleC(longlong param_1)/undefined8 InitializeObjectHandleC(longlong objectContext)/' 06_utilities.c
sed -i 's/undefined8 InitializeObjectHandleE(longlong param_1)/undefined8 InitializeObjectHandleE(longlong objectContext)/' 06_utilities.c

# 2. 四参数函数 - param_1 -> objectContext, param_2 -> systemContext, param_3 -> additionalParam1, param_4 -> additionalParam2
sed -i 's/ValidateAndProcessObjectContextWithParameters(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)/ValidateAndProcessObjectContextWithParameters(longlong objectContext,longlong systemContext,undefined8 additionalParam1,undefined8 additionalParam2)/' 06_utilities.c

# 3. 双参数函数 - param_1 -> objectContext, param_2 -> systemContext
sed -i 's/ValidateObjectContextAndProcessFloatRange(longlong param_1, longlong param_2)/ValidateObjectContextAndProcessFloatRange(longlong objectContext, longlong systemContext)/' 06_utilities.c
sed -i 's/ValidateObjectContextAndProcessFloatComparison(longlong param_1, longlong param_2)/ValidateObjectContextAndProcessFloatComparison(longlong objectContext, longlong systemContext)/' 06_utilities.c
sed -i 's/ValidateObjectContextAndProcessComplexFloatOperation(longlong param_1, longlong param_2)/ValidateObjectContextAndProcessComplexFloatOperation(longlong objectContext, longlong systemContext)/' 06_utilities.c
sed -i 's/ProcessObjectContextValidationAndIncrement(longlong param_1,longlong param_2)/ProcessObjectContextValidationAndIncrement(longlong objectContext,longlong systemContext)/' 06_utilities.c
sed -i 's/ProcessObjectContextValidationAndReset(longlong param_1,longlong param_2)/ProcessObjectContextValidationAndReset(longlong objectContext,longlong systemContext)/' 06_utilities.c
sed -i 's/ProcessParameterizedFloatComparison(longlong param_1, longlong param_2)/ProcessParameterizedFloatComparison(longlong objectContext, longlong systemContext)/' 06_utilities.c
sed -i 's/ProcessSimplifiedParameterizedFloatComparison(longlong param_1, longlong param_2)/ProcessSimplifiedParameterizedFloatComparison(longlong objectContext, longlong systemContext)/' 06_utilities.c
sed -i 's/ValidateAndProcessBufferContext(longlong param_1,longlong param_2)/ValidateAndProcessBufferContext(longlong objectContext,longlong systemContext)/' 06_utilities.c
sed -i 's/ProcessBufferContextValidationAndCleanup(longlong param_1,longlong param_2)/ProcessBufferContextValidationAndCleanup(longlong objectContext,longlong systemContext)/' 06_utilities.c
sed -i 's/ProcessBufferContextValidationAndSystemExit(longlong param_1,longlong param_2)/ProcessBufferContextValidationAndSystemExit(longlong objectContext,longlong systemContext)/' 06_utilities.c
sed -i 's/ProcessObjectContextValidationAndStatusUpdate(longlong param_1,longlong param_2)/ProcessObjectContextValidationAndStatusUpdate(longlong objectContext,longlong systemContext)/' 06_utilities.c
sed -i 's/ProcessFloatDataValidationAndConversion(longlong param_1, longlong param_2)/ProcessFloatDataValidationAndConversion(longlong objectContext, longlong systemContext)/' 06_utilities.c
sed -i 's/ProcessFloatDataValidationAndConversion(longlong param_1,longlong param_2)/ProcessFloatDataValidationAndConversion(longlong objectContext,longlong systemContext)/' 06_utilities.c
sed -i 's/ProcessDataValidationAndSystemOperation(longlong param_1,longlong param_2)/ProcessDataValidationAndSystemOperation(longlong objectContext,longlong systemContext)/' 06_utilities.c
sed -i 's/ProcessFloatRangeValidationAndDataHandling(longlong param_1,longlong param_2)/ProcessFloatRangeValidationAndDataHandling(longlong objectContext,longlong systemContext)/' 06_utilities.c
sed -i 's/ProcessSystemContextAndDataOperation(longlong param_1,longlong param_2)/ProcessSystemContextAndDataOperation(longlong objectContext,longlong systemContext)/' 06_utilities.c
sed -i 's/ValidateObjectContextAndProcessFloatValidation(longlong param_1,longlong param_2)/ValidateObjectContextAndProcessFloatValidation(longlong objectContext,longlong systemContext)/' 06_utilities.c

echo "批量重命名完成"