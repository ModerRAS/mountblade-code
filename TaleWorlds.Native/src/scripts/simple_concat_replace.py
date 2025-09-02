#!/usr/bin/env python3
import re

# 读取文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'r') as f:
    content = f.read()

# 替换CONCAT44为语义化名称
content = re.sub(r'CONCAT44\(ParameterRegister,ValidationRegister\)', 'CombineParameterAndValidationRegisters(ParameterRegister,ValidationRegister)', content)
content = re.sub(r'CONCAT44\(InputRegisterHigh,InputRegisterLow\)', 'CombineInputRegisters(InputRegisterHigh,InputRegisterLow)', content)
content = re.sub(r'CONCAT44\(SavedRegisterValue,ResourceIterationIndex\)', 'CombineSavedRegisterAndIndex(SavedRegisterValue,ResourceIterationIndex)', content)
content = re.sub(r'CONCAT44\(ResourceValidationFlag\.Field44,SystemCommandParameters\[0\]\)', 'CombineResourceValidationAndCommand(ResourceValidationFlag.Field44,SystemCommandParameters[0])', content)
content = re.sub(r'CONCAT44\(GraphicsPrimaryOperationFlag\.High28Bits,CleanupOption\)', 'CombineGraphicsOperationFlags(GraphicsPrimaryOperationFlag.High28Bits,CleanupOption)', content)
content = re.sub(r'CONCAT44\(GraphicsOperationFlagSecondary\.High28Bits,GraphicsTransformMatrix\[0\]\)', 'CombineGraphicsOperationFlags(GraphicsOperationFlagSecondary.High28Bits,GraphicsTransformMatrix[0])', content)
content = re.sub(r'CONCAT44\(GraphicsOperationFlagPrimary\.High28Bits,GraphicsDataFlag\)', 'CombineGraphicsOperationFlags(GraphicsOperationFlagPrimary.High28Bits,GraphicsDataFlag)', content)

# 写回文件
with open('/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c', 'w') as f:
    f.write(content)

print("CONCAT替换完成")