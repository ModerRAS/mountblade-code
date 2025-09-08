#!/bin/bash

# 批量美化Unwind_函数名的脚本
# 为06_utilities.c文件中的Unwind_函数提供语义化名称

# 创建临时美化脚本
cat > /tmp/beautify_unwind_functions.sh << 'EOF'
#!/bin/bash

# 美化Unwind_函数名 - 异常处理和资源清理函数系列

# 18090c150 - 清理异常处理资源C50
sed -i 's/void Unwind_18090c150(/void CleanupExceptionHandlingResourcesC50(/g' TaleWorlds.Native/src/06_utilities.c

# 18090c170 - 清理异常处理资源C70
sed -i 's/void Unwind_18090c170(/void CleanupExceptionHandlingResourcesC70(/g' TaleWorlds.Native/src/06_utilities.c

# 18090c220 - 清理异常处理资源C20
sed -i 's/void Unwind_18090c220(/void CleanupExceptionHandlingResourcesC20(/g' TaleWorlds.Native/src/06_utilities.c

# 18090c240 - 清理异常处理资源C40
sed -i 's/void Unwind_18090c240(/void CleanupExceptionHandlingResourcesC40(/g' TaleWorlds.Native/src/06_utilities.c

# 18090c260 - 清理异常处理资源C60
sed -i 's/void Unwind_18090c260(/void CleanupExceptionHandlingResourcesC60(/g' TaleWorlds.Native/src/06_utilities.c

# 18090c270 - 清理异常处理资源C70
sed -i 's/void Unwind_18090c270(/void CleanupExceptionHandlingResourcesC71(/g' TaleWorlds.Native/src/06_utilities.c

# 18090c280 - 清理异常处理资源C80
sed -i 's/void Unwind_18090c280(/void CleanupExceptionHandlingResourcesC80(/g' TaleWorlds.Native/src/06_utilities.c

# 18090c290 - 清理异常处理资源C90
sed -i 's/void Unwind_18090c290(/void CleanupExceptionHandlingResourcesC90(/g' TaleWorlds.Native/src/06_utilities.c

# 18090c2a0 - 清理异常处理资源CA0
sed -i 's/void Unwind_18090c2a0(/void CleanupExceptionHandlingResourcesCA0(/g' TaleWorlds.Native/src/06_utilities.c

# 18090c2b0 - 清理异常处理资源CB0
sed -i 's/void Unwind_18090c2b0(/void CleanupExceptionHandlingResourcesCB0(/g' TaleWorlds.Native/src/06_utilities.c

# 18090c2c0 - 清理异常处理资源CC0
sed -i 's/void Unwind_18090c2c0(/void CleanupExceptionHandlingResourcesCC0(/g' TaleWorlds.Native/src/06_utilities.c

# 18090c2d0 - 清理异常处理资源CD0
sed -i 's/void Unwind_18090c2d0(/void CleanupExceptionHandlingResourcesCD0(/g' TaleWorlds.Native/src/06_utilities.c

# 18090c2e0 - 清理异常处理资源CE0
sed -i 's/void Unwind_18090c2e0(/void CleanupExceptionHandlingResourcesCE0(/g' TaleWorlds.Native/src/06_utilities.c

# 18090c2f0 - 清理异常处理资源CF0
sed -i 's/void Unwind_18090c2f0(/void CleanupExceptionHandlingResourcesCF0(/g' TaleWorlds.Native/src/06_utilities.c

# 18090c300 - 清理异常处理资源D00
sed -i 's/void Unwind_18090c300(/void CleanupExceptionHandlingResourcesD00(/g' TaleWorlds.Native/src/06_utilities.c

# 18090c310 - 清理异常处理资源D10
sed -i 's/void Unwind_18090c310(/void CleanupExceptionHandlingResourcesD10(/g' TaleWorlds.Native/src/06_utilities.c

# 18090c320 - 清理异常处理资源D20
sed -i 's/void Unwind_18090c320(/void CleanupExceptionHandlingResourcesD20(/g' TaleWorlds.Native/src/06_utilities.c

# 18090c330 - 清理异常处理资源D30
sed -i 's/void Unwind_18090c330(/void CleanupExceptionHandlingResourcesD30(/g' TaleWorlds.Native/src/06_utilities.c

# 18090c360 - 清理异常处理资源D60
sed -i 's/void Unwind_18090c360(/void CleanupExceptionHandlingResourcesD60(/g' TaleWorlds.Native/src/06_utilities.c

# 18090c380 - 清理异常处理资源D80
sed -i 's/void Unwind_18090c380(/void CleanupExceptionHandlingResourcesD80(/g' TaleWorlds.Native/src/06_utilities.c

# 继续处理其他Unwind_函数...

# 18090e770 - 重置异常处理标志
sed -i 's/void Unwind_18090e770(/void ResetExceptionHandlingFlags(/g' TaleWorlds.Native/src/06_utilities.c

# 18090e7a0 - 清理异常处理状态
sed -i 's/void Unwind_18090e7a0(/void CleanupExceptionHandlingStatus(/g' TaleWorlds.Native/src/06_utilities.c

echo "Unwind_函数名美化完成"
EOF

# 执行美化脚本
chmod +x /tmp/beautify_unwind_functions.sh
/tmp/beautify_unwind_functions.sh

# 清理临时文件
rm -f /tmp/beautify_unwind_functions.sh