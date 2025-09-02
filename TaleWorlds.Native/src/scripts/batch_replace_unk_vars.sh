#!/bin/bash

# 批量替换变量名的脚本
# 这个脚本用于美化 06_utilities.c 文件中的变量名

# 定义源文件
SOURCE_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"

# 备份原始文件
cp "$SOURCE_FILE" "$SOURCE_FILE.backup"

# 变量名替换映射表
# 格式: "旧变量名:新变量名"

# Resource相关变量
declare -a resource_vars=(
    "ResourceByte1:ResourceValidationByteFirst"
    "ResourceByte2:ResourceValidationByteSecond"
    "ResourceByte3:ResourceValidationByteThird"
    "ResourceByte4:ResourceSecurityByteHigh"
    "ResourceByte5:ResourceStatusByteLow"
    "ResourceByte6:ResourceStatusByteMid"
    "ResourceByte7:ResourceStatusByteHigh"
    "ResourceByte8:ResourceStatusByteHighest"
    "ResourceSecurityByte2:ResourceSecurityByteMid"
    "ResourceSecurityByte1:ResourceSecurityByteLow"
)

# 整数和指针相关变量
declare -a integer_vars=(
    "pintegerValue6:ResourceDataPointer"
    "longValue8:ResourceDataOffset"
    "StackParameterContextSecondary:ResourceContextSecondary"
    "callbackParameter:ResourceCallbackContext"
    "resourcePointer5:ResourceDataPointer"
    "HashValidationResultPointer:HashValidationDataPtr"
    "DataHandlerContextPointer:DataHandlerContext"
    "ResourceHandlerFlag1:ResourceHandlerPrimaryFlag"
    "ResourceHandlerFlag2:ResourceHandlerSecondaryFlag"
    "ResourceIndex6:ResourceProcessingIndex"
    "ResourceIndex4:ResourceValidationIndex"
    "ResourceIndex1:ResourceOperationIndex"
    "resourceHashPointer2:ResourceHashDataPointer"
    "resourceHash0:ResourcePrimaryHash"
    "resourceHash1:ResourceSecondaryHash"
    "ResourceHashValidationResult2:ResourceHashValidationData"
    "ResourceHashValidationResult3:ResourceHashValidationCounter"
    "ResourceHashValidationResult4:ResourceHashValidationResult"
    "ResourceHashValidationResult0:ResourceHashValidationBase"
    "ResourceHashValidationResultPointer2:ResourceHashValidationPtr"
    "resourceHashPointer6:ResourceHashProcessingPtr"
    "resourceHashPointer8:ResourceHashBufferPtr"
    "resourceHash7:ResourceGeneratedHash"
    "resourceHash6:ResourceCalculatedHash"
)

# 栈和缓冲区变量
declare -a stack_vars=(
    "StackPointer278:StackBufferPtr278"
    "BufferTemplate1:BufferTemplatePrimary"
    "BufferTemplate6:BufferTemplateSixth"
    "BufferTemplate7:BufferTemplateSeventh"
    "StackPointer190:StackBufferPtr190"
    "StackPointer178:StackBufferPtr178"
    "StackPointer158:StackBufferPtr158"
    "StackPointer1c0:StackBufferPtr1c0"
    "StackPointer190:StackBufferPtr190"
    "StackParameter58:ParameterBuffer58"
    "StackParameter70:ParameterBuffer70"
    "StackParameter78:ParameterBuffer78"
    "StackBuffer48:StackBufferSize48"
    "StackBuffer180:StackBufferSize180"
    "StackBuffer188:StackBufferSize188"
    "SecondaryBufferSize:SecondaryBufferLength"
    "StackVariablef0:StackVariableF0"
    "StackVariablee8:StackVariableE8"
    "StackFloatBuffer:StackFloatArray"
    "StackFloatPrimaryValue:StackFloatPrimary"
    "ObjectStackBufferPrimary:ObjectStackBufferMain"
    "ObjectStackBufferTertiary:ObjectStackBufferThird"
    "StackFloatParameter:StackFloatParam"
    "StackPointer48:StackPtr48"
)

# 图形相关变量
declare -a graphics_vars=(
    "GraphicsDataPointer2:GraphicsDataPtr"
    "GraphicsDataIndex2:GraphicsDataIdx"
    "GraphicsOperationFlag2:GraphicsOperationFlagSecondary"
    "GraphicsOperationFlag1:GraphicsOperationFlagPrimary"
    "GraphicsTransformMatrix:GraphicsTransformMat"
    "GraphicsDataFlag:GraphicsDataStatus"
)

# 验证和状态变量
declare -a validation_vars=(
    "validationStatus1:ValidationStatusFirst"
    "validationStatus2:ValidationStatusSecond"
    "resourceHashValue1:ResourceHashValueFirst"
    "resourceHashValue2:ResourceHashValueSecond"
    "systemRegister2:SystemRegisterCounter"
    "LocalContextData4:LocalContextVar4"
    "LocalContextData5:LocalContextVar5"
    "SecondaryOperationParameter0:SecondaryParam0"
    "SecondaryOperationParameter8:SecondaryParam8"
    "resourceFlags1:ResourceFlag1"
    "resourceFlags2:ResourceFlag2"
    "resourceFlags3:ResourceFlag3"
    "resourceFlags4:ResourceFlag4"
    "FloatHashValidationResult19c:FloatHashValidationResult"
    "inputFloatValue3:InputFloatValue3"
    "pinputFloatValue5:InputFloatPtr5"
    "FloatInputParameter1a4:FloatInputParam1a4"
    "SystemFloatTemplateActive:SystemFloatTemplate"
    "inputFloatValue:InputFloatVar"
    "FloatingPointCalculationResult_02:FloatingPointResult02"
    "FloatingPointCalculationResult_04:FloatingPointResult04"
    "FloatingPointCalculationResult_05:FloatingPointResult05"
    "FloatingPointCalculationResult_06:FloatingPointResult06"
    "FloatingPointCalculationResult_07:FloatingPointResult07"
    "FloatingPointCalculationResult_08:FloatingPointResult08"
    "ResourceIndex3:ResourceValidationIndex3"
    "FloatRegisterValue:FloatRegValue"
    "FloatRegisterValue1:FloatRegValue1"
    "FloatRegisterValue2:FloatRegValue2"
    "FloatRegisterValue3:FloatRegValue3"
    "ResourceHashValidationResultPointer:ResourceHashValidationPtr"
    "RegisterR15:RegisterR15Value"
    "ResourceRegisterPointer:ResourceRegisterPtr"
    "SystemRegisterContext:SystemRegisterCtx"
    "ResourceHashTemplate:ResourceHashTemplateData"
    "SystemResourceTemplateCache:SystemResourceTemplateCacheData"
    "SystemResourceTemplateDatabase:SystemResourceTemplateDatabaseData"
    "SystemResourceTemplateEvent:SystemResourceTemplateEventData"
    "SystemResourceTemplateFile:SystemResourceTemplateFileData"
    "SystemResourceTemplateGraphics:SystemResourceTemplateGraphicsData"
    "SystemResourceTemplateHardware:SystemResourceTemplateHardwareData"
    "SystemResourceTemplateInput:SystemResourceTemplateInputData"
    "SystemResourceTemplateJob:SystemResourceTemplateJobData"
    "SystemResourceTemplateKernel:SystemResourceTemplateKernelData"
    "SystemResourceTemplateLibrary:SystemResourceTemplateLibraryData"
    "SystemResourceTemplateMemory:SystemResourceTemplateMemoryData"
    "SystemResourceTemplateNetwork:SystemResourceTemplateNetworkData"
    "SystemResourceTemplate:SystemResourceTemplateData"
    "SystemCommandParams:SystemCommandParameters"
    "SystemCommandArray:SystemCommandDataArray"
    "SystemDataPointer:SystemDataPtr"
    "SystemResourceContext:SystemResourceCtx"
    "HashCalculationBuffer:HashCalculationBufferData"
    "SecondaryHashBuffer:SecondaryHashBufferData"
    "ExecutionContextPointer:ExecutionCtxPtr"
    "StringProcessingTemplate:StringProcessingTemplateData"
    "BufferContextSize:BufferContextLength"
    "IntegerValue6:IntegerValueSix"
    "OperationResult:OperationStatusCode"
    "ContextHashValidationResult:ContextHashValidationData"
    "LoopOffset:LoopIterationOffset"
    "resourceCounter:ResourceCountValue"
    "resourceTablePointer:ResourceTablePtr"
    "resourceContext:ResourceContextData"
    "resourceTable:ResourceTableData"
    "objectContext:ObjectContextData"
    "InputParameter:InputParamData"
    "SystemDataPointer:SystemDataPtr"
    "ResourceIndex:ResourceIdx"
    "ResourceSecurityFlag:ResourceSecurityStatus"
    "ResourceStatusFlag:ResourceStatusValue"
    "ResourceHash:ResourceHashValue"
    "ploopIncrement:LoopIncrementPtr"
    "IntegerValue6:IntegerValueSix"
    "stringProcessingResult1:StringProcessingResult1"
    "stringProcessingResult2:StringProcessingResult2"
    "dataParsingResult:DataParsingResult"
    "encryptionShiftValue7:EncryptionShiftValue7"
    "SystemResourceTemplate:SystemResourceTemplateData"
    "GenerateResourceHash:GenerateResourceHashFunc"
    "ProcessStringOperation:ProcessStringOperationFunc"
    "GetAndValidateResourceData:GetAndValidateResourceDataFunc"
    "ValidateBufferContext:ValidateBufferContextFunc"
    "CalculateDataHash:CalculateDataHashFunc"
    "ValidateResourceTable:ValidateResourceTableFunc"
    "CheckResourceIntegrity:CheckResourceIntegrityFunc"
    "GetResourceType:GetResourceTypeFunc"
    "CalculateSecurityHash:CalculateSecurityHashFunc"
    "CopySecurityData:CopySecurityDataFunc"
    "ResourceIndex:ResourceIdx"
    "resourceCount:ResourceCount"
    "CONCAT44:CONCAT44Func"
    "CONCAT71:CONCAT71Func"
)

# 函数名替换映射表
declare -a function_vars=(
    "GenerateResourceHash:GenerateResourceHashFunction"
    "ProcessStringOperation:ProcessStringOperationFunction"
    "GetAndValidateResourceData:GetAndValidateResourceDataFunction"
    "ValidateBufferContext:ValidateBufferContextFunction"
    "CalculateDataHash:CalculateDataHashFunction"
    "ValidateResourceTable:ValidateResourceTableFunction"
    "CheckResourceIntegrity:CheckResourceIntegrityFunction"
    "GetResourceType:GetResourceTypeFunction"
    "CalculateSecurityHash:CalculateSecurityHashFunction"
    "CopySecurityData:CopySecurityDataFunction"
    "CONCAT44:CONCAT44Function"
    "CONCAT71:CONCAT71Function"
)

# 执行替换函数
replace_variables() {
    local array=("$@")
    
    for pair in "${array[@]}"; do
        old_name=$(echo "$pair" | cut -d: -f1)
        new_name=$(echo "$pair" | cut -d: -f2)
        
        echo "替换: $old_name -> $new_name"
        
        # 使用sed进行替换，只替换完整的单词
        sed -i "s/\b$old_name\b/$new_name/g" "$SOURCE_FILE"
    done
}

# 执行所有替换
echo "开始替换Resource相关变量..."
replace_variables "${resource_vars[@]}"

echo "开始替换整数和指针相关变量..."
replace_variables "${integer_vars[@]}"

echo "开始替换栈和缓冲区变量..."
replace_variables "${stack_vars[@]}"

echo "开始替换图形相关变量..."
replace_variables "${graphics_vars[@]}"

echo "开始替换验证和状态变量..."
replace_variables "${validation_vars[@]}"

echo "开始替换函数名..."
replace_variables "${function_vars[@]}"

echo "变量名替换完成！"
echo "请检查 $SOURCE_FILE 文件确认替换结果。"