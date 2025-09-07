#!/bin/bash

# 美化Unwind_1809095c0 - 设置默认异常处理器（偏移量0x4b0）
sed -i 's/void Unwind_1809095c0(DataBuffer operationBase,int64_t dataBuffer)/void SetDefaultExceptionHandlerBOffset4B0(DataBuffer operationBase,int64_t dataBuffer)/g' TaleWorlds.Native/src/06_utilities.c

# 美化Unwind_180909600 - 设置默认异常处理器（偏移量0x5d0）
sed -i 's/void Unwind_180909600(DataBuffer operationBase,int64_t dataBuffer)/void SetDefaultExceptionHandlerBOffset5D0(DataBuffer operationBase,int64_t dataBuffer)/g' TaleWorlds.Native/src/06_utilities.c

# 美化Unwind_180909610 - 设置默认异常处理器（偏移量0x5e8）
sed -i 's/void Unwind_180909610(DataBuffer operationBase,int64_t dataBuffer)/void SetDefaultExceptionHandlerBOffset5E8(DataBuffer operationBase,int64_t dataBuffer)/g' TaleWorlds.Native/src/06_utilities.c

# 美化Unwind_180909620 - 设置默认异常处理器（偏移量0x600）
sed -i 's/void Unwind_180909620(DataBuffer operationBase,int64_t dataBuffer)/void SetDefaultExceptionHandlerBOffset600(DataBuffer operationBase,int64_t dataBuffer)/g' TaleWorlds.Native/src/06_utilities.c

# 美化Unwind_180909630 - 设置默认异常处理器（偏移量0x618）
sed -i 's/void Unwind_180909630(DataBuffer operationBase,int64_t dataBuffer)/void SetDefaultExceptionHandlerBOffset618(DataBuffer operationBase,int64_t dataBuffer)/g' TaleWorlds.Native/src/06_utilities.c

# 美化Unwind_180909640 - 设置默认异常处理器（偏移量0x630）
sed -i 's/void Unwind_180909640(DataBuffer operationBase,int64_t dataBuffer)/void SetDefaultExceptionHandlerBOffset630(DataBuffer operationBase,int64_t dataBuffer)/g' TaleWorlds.Native/src/06_utilities.c

echo "Unwind_1809095x0系列函数美化完成"