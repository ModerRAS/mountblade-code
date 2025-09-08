#!/bin/bash

# 批量修复02_core_engine.c中的函数定义签名和名称

echo "开始批量修复函数定义..."

# 创建临时文件来存储修复内容
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp

# 修复函数定义签名 - 移除破坏的前缀
sed -i 's/62600(voidvoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/659e0(voidvoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/66dd0(uint64_t CharacterCode,uint64_t \*CharacterCodeSize,uint64_t Utf8SourcePointer,long long \*Utf16EndPointervoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/676b0(uint64_t CharacterCode,uint64_t SystemBufferSize,long long \*Utf8SourcePointervoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/67a50(voidvoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/68ab0(uint64_t \*CharacterCodevoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/6a890(long long \*CharacterCodevoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/6c97a(long long CharacterCode,uint64_t \*CharacterCodeSize,uint64_t \*Utf8SourcePointer,uint64_t Utf16EndPointervoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/6cacd(voidvoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/6cc64(voidvoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/6cccb(long long CharacterCode,long long SystemBufferSizevoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/6cd1d(long long CharacterCode,long long SystemBufferSize,long long Utf8SourcePointer,long long Utf16EndPointervoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/6cd80(long long \*CharacterCodevoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/6ce50(long long \*CharacterCodevoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/6cef0(uint64_t \*CharacterCode,uint64_t SystemBufferSize,uint64_t Utf8SourcePointer,uint64_t Utf16EndPointervoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/6cff0(long long \*CharacterCode,uint32_t \*CharacterCodeSizevoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/6d200(long long CharacterCode,long long SystemBufferSize,uint8_t Utf8SourcePointervoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/6d400(long long \*CharacterCode,uint64_t \*CharacterCodeSize,long long Utf8SourcePointer,uint64_t Utf16EndPointervoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/6d690(long long CharacterCode,long long SystemBufferSizevoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/6da50(uint64_t \*CharacterCodevoid/void/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp

# 添加括号到函数定义末尾
sed -i 's/FUN_180162600(void)/ManageSystemResources(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/FUN_1801659e0(void)/ValidateSystemData(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/FUN_180166dd0(uint64_t CharacterCode,uint64_t \*CharacterCodeSize,uint64_t Utf8SourcePointer,long long \*Utf16EndPointer)/ProcessStringEncoding(uint64_t CharacterCode,uint64_t *CharacterCodeSize,uint64_t Utf8SourcePointer,long long *Utf16EndPointer)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/FUN_1801676b0(uint64_t CharacterCode,uint64_t SystemBufferSize,long long \*Utf8SourcePointer)/ProcessSystemContext(uint64_t CharacterCode,uint64_t SystemBufferSize,long long *Utf8SourcePointer)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp
sed -i 's/FUN_180167a50(void)/FinalizeSystemCleanup(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp

# 复制修复后的文件
mv /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c.temp /dev/shm/mountblade-code/TaleWorlds.Native/src/02_core_engine.c

echo "批量修复完成"