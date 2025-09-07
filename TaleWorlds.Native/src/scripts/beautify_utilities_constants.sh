#!/bin/bash

# 06_utilities.c 文件变量美化脚本
# 用于美化十六进制常量和地址偏移量

# 定义美化规则
# 0x50 -> ResourceDataBufferOffset
# 0x58 -> ResourceCountOffset
# 0xd0 -> ResourceValidationOffset
# 0x1c -> ResourceDataOffset
# 0x18 -> ResourceContextOffset
# 0x98 -> SystemEventOffset
# 0x28 -> ResourceCounterOffset
# 0x20 -> MemoryOperationOffset
# 0x4a -> OperationSuccessCode
# 0x1e -> ResourceNotFoundCode

# 备份原始文件
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup

# 应用美化规则
sed -i 's/memoryResourcePointer + 0x50/memoryResourcePointer + ResourceDataBufferOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/exceptionHandlerContext + 0x50/exceptionHandlerContext + ResourceDataBufferOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/dataContext + 0x50/dataContext + ResourceDataBufferOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/memoryBlockOffset + 0x50/memoryBlockOffset + ResourceDataBufferOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

sed -i 's/+ 0x58/+ ResourceCountOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0xd0/+ ResourceValidationOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x1c/+ ResourceDataOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x18/+ ResourceContextOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x98/+ SystemEventOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x28/+ ResourceCounterOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/+ 0x20/+ MemoryOperationOffset/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 美化返回码
sed -i 's/return 0x4a;/return OperationSuccessCode;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/return 0x1e;/return ResourceNotFoundCode;/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 添加新的常量定义
sed -i '/#define ResourceDataOffset 4/a\
#define ResourceDataBufferOffset 0x50             // 资源数据缓冲区偏移量\
#define ResourceCountOffset 0x58                 // 资源计数偏移量\
#define ResourceValidationOffset 0xd0             // 资源验证偏移量\
#define SystemEventOffset 0x98                    // 系统事件偏移量\
#define ResourceCounterOffset 0x28                // 资源计数器偏移量\
#define MemoryOperationOffset 0x20                // 内存操作偏移量\
#define OperationSuccessCode 0x4a                 // 操作成功代码\
#define ResourceNotFoundCode 0x1e                  // 资源未找到代码' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "06_utilities.c 美化完成"