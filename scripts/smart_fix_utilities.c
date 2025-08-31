#!/bin/bash

# 智能修复06_utilities.c文件中的语法错误
# 修复缺失的函数体和语法问题

INPUT_FILE="/dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c"
TEMP_FILE="/tmp/utilities_smart_fixed.c"

# 使用sed进行智能修复
sed -i '
# 修复缺失的函数体
/^uint64 utility_validate_resource_access(longlong UTILITY_RESOURCE_PRIMARY_HANDLE)$/{
  N
  s/\n/\
{\
  return UTILITY_ZERO;\
}\
/
}

# 修复缺失的函数体
/^uint32 utility_get_system_info(void)$/{
  N
  s/\n/\
{\
  return UTILITY_ZERO;\
}\
/
}

# 修复缺失的函数开始注释
/^\* @brief /{
  s/^\* @brief \([^*]*\)$/\/**\n * @brief \1/
}

# 修复缺失的函数结束注释
/^[^*]*\*$/{
  N
  s/^\([^*]*\*\)\n\([^*]*\)$/\1\n *\2/
}
' "$INPUT_FILE"

echo "智能修复完成"