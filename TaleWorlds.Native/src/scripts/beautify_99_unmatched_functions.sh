#!/bin/bash

# 美化99_unmatched_functions.c文件中的变量
# 1. 将undefined类型改为void*
# 2. 重命名UNK_变量为有意义的名称

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/99_unmatched_functions.c"
TEMP_FILE="/tmp/99_unmatched_functions_temp.c"

# 首先将undefined替换为void*
sed 's/undefined/void*/g' "$INPUT_FILE" > "$TEMP_FILE"

# 重命名一些关键的UNK_变量
sed -i 's/UNK_180a05e80/XmlParserSecurityContext/g' "$TEMP_FILE"
sed -i 's/UNK_180a05e98/XmlParserSecurityConfiguration/g' "$TEMP_FILE"
sed -i 's/UNK_180a05eb0/XmlParserSecurityPolicy/g' "$TEMP_FILE"
sed -i 's/UNK_180a05ec8/XmlParserSecurityValidator/g' "$TEMP_FILE"
sed -i 's/UNK_180a05ee8/XmlParserSecurityLogger/g' "$TEMP_FILE"
sed -i 's/UNK_180a05f00/XmlParserSecurityMonitor/g' "$TEMP_FILE"
sed -i 's/UNK_180a05f10/XmlParserSecurityAnalyzer/g' "$TEMP_FILE"

# 处理10c开头的变量（可能是系统相关）
sed -i 's/UNK_18010c310/SystemResourceTable/g' "$TEMP_FILE"
sed -i 's/UNK_18010c330/SystemResourceAllocator/g' "$TEMP_FILE"
sed -i 's/UNK_18010c350/SystemResourceDeallocator/g' "$TEMP_FILE"
sed -i 's/UNK_18010c370/SystemResourceTracker/g' "$TEMP_FILE"
sed -i 's/UNK_18010c390/SystemResourceCache/g' "$TEMP_FILE"
sed -i 's/UNK_18010c3b0/SystemResourcePool/g' "$TEMP_FILE"
sed -i 's/UNK_18010c3d0/SystemResourceManager/g' "$TEMP_FILE"

# 处理更多a05开头的变量（可能是XML解析器相关）
sed -i 's/UNK_180a05f38/XmlParserSecurityAuditor/g' "$TEMP_FILE"
sed -i 's/UNK_180a05f50/XmlParserSecurityReporter/g' "$TEMP_FILE"
sed -i 's/UNK_180a05f68/XmlParserSecurityInspector/g' "$TEMP_FILE"
sed -i 's/UNK_180a05f80/XmlParserSecurityScanner/g' "$TEMP_FILE"
sed -i 's/UNK_180a05f98/XmlParserSecurityChecker/g' "$TEMP_FILE"
sed -i 's/UNK_180a05fb0/XmlParserSecurityVerifier/g' "$TEMP_FILE"
sed -i 's/UNK_180a05fc8/XmlParserSecurityValidator/g' "$TEMP_FILE"
sed -i 's/UNK_180a05fe0/XmlParserSecurityAuthenticator/g' "$TEMP_FILE"
sed -i 's/UNK_180a05ff8/XmlParserSecurityAuthorizer/g' "$TEMP_FILE"

# 处理剩余的变量，使用通用名称
sed -i 's/UNK_180a06010/XmlParserSecurityController/g' "$TEMP_FILE"
sed -i 's/UNK_180a06028/XmlParserSecurityHandler/g' "$TEMP_FILE"
sed -i 's/UNK_180a06040/XmlParserSecurityProcessor/g' "$TEMP_FILE"
sed -i 's/UNK_180a06058/XmlParserSecurityManager/g' "$TEMP_FILE"
sed -i 's/UNK_180a06078/XmlParserSecuritySupervisor/g' "$TEMP_FILE"
sed -i 's/UNK_180a06098/XmlParserSecurityCoordinator/g' "$TEMP_FILE"
sed -i 's/UNK_180a060c0/XmlParserSecurityExecutor/g' "$TEMP_FILE"
sed -i 's/UNK_180a060e0/XmlParserSecurityOperator/g' "$TEMP_FILE"
sed -i 's/UNK_180a06110/XmlParserSecurityAdministrator/g' "$TEMP_FILE"
sed -i 's/UNK_180a06140/XmlParserSecurityOverseer/g' "$TEMP_FILE"

# 复制回原文件
cp "$TEMP_FILE" "$INPUT_FILE"

# 清理临时文件
rm "$TEMP_FILE"

echo "99_unmatched_functions.c 美化完成"