#!/bin/bash

# 美化06_utilities.c文件中的Unwind函数名
# 根据函数的实际功能来重命名Unwind函数

echo "开始美化Unwind函数名..."

# 创建备份
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup

# 资源处理类函数
sed -i 's/void Unwind_180909fe0(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_RegisterResourceHandlerC08(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a000(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_ProcessResourceContextC58(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a020(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_RegisterResourceHandlerC60(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 互斥量销毁类函数
sed -i 's/void Unwind_18090a330(void)/void Unwind_DestroyMutex1(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a350(void)/void Unwind_DestroyMutex2(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a370(void)/void Unwind_DestroyMutex3(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a390(void)/void Unwind_DestroyMutex4(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a3b0(void)/void Unwind_DestroyMutex5(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a3d0(void)/void Unwind_DestroyMutex6(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a3f0(void)/void Unwind_DestroyMutex7(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a410(void)/void Unwind_DestroyMutex8(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 资源表管理类函数
sed -i 's/void Unwind_18090a430(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/void Unwind_ManageResourceTableEntryB98(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a450(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_FinalizeResourceValidation(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a470(void)/void Unwind_DestroyMutex9(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "第一部分函数名替换完成！"
echo "备份文件保存在: /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup"