#!/bin/bash

# 美化04_ui_system.c文件中的DAT_变量名

# 创建映射文件
cat > /tmp/dat_mapping.txt << 'EOF'
_DAT_180d4a6f0=UISystemEnvironmentFunctionPointer
_DAT_180d4a6d8=UISystemDebugFunctionPointer
_DAT_180d4a6b0=UISystemArchiveFunctionPointer
_DAT_180d4a870=UISystemValidatorFunctionPointer
_DAT_180d4a830=UISystemResourceAllocationFunction
_DAT_180d4a7e8=UISystemResourceAccessValidationFunction
_DAT_180d4a7c0=UISystemMemoryOperationFunction
_DAT_180d4a788=UISystemDataValidationFunction
_DAT_180d4a740=UISystemSecurityCheckFunction
_DAT_180d4a700=UISystemResourceAllocationManager
_DAT_180d4a6e0=UISystemMemoryAllocationFunction
_DAT_180d4a6b8=UISystemBufferManagementFunction
_DAT_180d4a968=UISystemEventHandlingFunction
_DAT_180d4a948=UISystemInputProcessingFunction
_DAT_180d4a920=UISystemStateUpdateFunction
_DAT_180d4a8f0=UISystemDataBindingFunction
EOF

# 应用替换
while IFS='=' read -r old new; do
    sed -i "s/$old/$new/g" TaleWorlds.Native/src/04_ui_system.c
done < /tmp/dat_mapping.txt

# 清理临时文件
rm -f /tmp/dat_mapping.txt

echo "DAT_变量美化完成"