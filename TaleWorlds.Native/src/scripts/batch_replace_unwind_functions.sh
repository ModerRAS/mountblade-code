#!/bin/bash

# 批量替换Unwind函数名的脚本
# 基于已分析的函数功能模式进行重命名

echo "开始批量替换Unwind函数名..."

# 创建备份
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup_batch

# 使用sed进行批量替换
# 互斥量销毁类函数
sed -i 's/void Unwind_18090a330(void)/void Unwind_DestroyMutex1(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a350(void)/void Unwind_DestroyMutex2(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a370(void)/void Unwind_DestroyMutex3(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a390(void)/void Unwind_DestroyMutex4(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a3b0(void)/void Unwind_DestroyMutex5(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a3d0(void)/void Unwind_DestroyMutex6(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a3f0(void)/void Unwind_DestroyMutex7(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a410(void)/void Unwind_DestroyMutex8(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a470(void)/void Unwind_DestroyMutex9(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a5e0(void)/void Unwind_DestroyMutex10(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 资源处理类函数
sed -i 's/void Unwind_180909fe0(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_RegisterResourceHandlerC08(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a000(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_ProcessResourceContextC58(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 系统数据管理类函数
sed -i 's/void Unwind_18090a6d0(void)/void Unwind_InitializeSystemDataPointer(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "批量替换完成！"
echo "备份文件保存在: /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup_batch"