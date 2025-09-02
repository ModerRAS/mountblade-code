#!/bin/bash

# 美化06_utilities.c文件中的Unwind函数名 - 完整版本
# 根据函数的实际功能来重命名Unwind函数

echo "开始完整美化Unwind函数名..."

# 创建备份
cp /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup

# ==================== 第一部分：资源处理类函数 ====================

# RegisterResourceHandler 类函数
sed -i 's/void Unwind_180909fe0(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_RegisterResourceHandlerC08(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a020(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_RegisterResourceHandlerC60(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a080(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_RegisterResourceHandler48(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a4d0(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_RegisterResourceHandlerC08v2(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a510(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_RegisterResourceHandlerC60v2(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a610(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_RegisterResourceHandler68(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# ProcessResourceContext 类函数
sed -i 's/void Unwind_18090a000(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_ProcessResourceContextC58(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a4f0(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_ProcessResourceContextC58v2(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# ==================== 第二部分：互斥量销毁类函数 ====================

# MutexDestroyInPlace 类函数
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
sed -i 's/void Unwind_18090b490(void)/void Unwind_DestroyMutex11(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090b4d0(void)/void Unwind_DestroyMutex12(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090bcf0(void)/void Unwind_DestroyMutex13(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# ==================== 第三部分：资源表管理类函数 ====================

# ManageResourceTableEntry 类函数
sed -i 's/void Unwind_18090a430(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/void Unwind_ManageResourceTableEntryAA0(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a490(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/void Unwind_ManageResourceTableEntryBA8(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a5f0(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/void Unwind_ManageResourceTableEntry68(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a600(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/void Unwind_ManageResourceTableEntry68v2(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# ProcessResourceValidation 类函数
sed -i 's/void Unwind_18090a0b0(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/void Unwind_ProcessResourceValidation48(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a0c0(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/void Unwind_ProcessResourceValidation48v2(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# HandleResourceTableAccess 类函数
sed -i 's/void Unwind_18090a2d0(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/void Unwind_HandleResourceTableAccess740(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a580(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/void Unwind_HandleResourceTableAccess68(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a590(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/void Unwind_HandleResourceTableAccess68v2(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# ==================== 第四部分：系统数据管理类函数 ====================

# 系统数据初始化
sed -i 's/void Unwind_18090a6d0(void)/void Unwind_InitializeSystemDataPointer(void)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090aa10(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_SetSystemDataPointerE0(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# 系统资源管理
sed -i 's/void Unwind_18090aae0(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_InitializeSystemResourceHandler(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# ==================== 第五部分：资源验证和清理类函数 ====================

# FinalizeResourceValidation 类函数
sed -i 's/void Unwind_18090a450(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_FinalizeResourceValidation(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a5c0(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_FinalizeResourceValidation68(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a5d0(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_FinalizeResourceValidation68v2(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# ProcessResourceOperation 类函数
sed -i 's/void Unwind_18090a4b0(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/void Unwind_ProcessResourceOperationBD8(uint8_t ObjectContext,int64_t ValidationContext,uint8_t CleanupOption,uint8_t CleanupFlag)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

# ==================== 第六部分：资源表处理类函数 ====================

# ProcessResourceTable 类函数
sed -i 's/void Unwind_18090a060(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_ProcessResourceTableD00(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a270(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_ProcessResourceTable740(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a290(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_ProcessResourceTable748(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a2b0(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_ProcessResourceTable750(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a550(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_ProcessResourceTable68v1(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c
sed -i 's/void Unwind_18090a570(uint8_t ObjectContext,int64_t ValidationContext)/void Unwind_ProcessResourceTable68v2(uint8_t ObjectContext,int64_t ValidationContext)/g' /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c

echo "Unwind函数名美化完成！"
echo "备份文件保存在: /dev/shm/mountblade-code/TaleWorlds.Native/src/06_utilities.c.backup"
echo ""
echo "美化摘要："
echo "- 资源处理类函数：RegisterResourceHandler系列"
echo "- 互斥量销毁类函数：DestroyMutex系列"
echo "- 资源表管理类函数：ManageResourceTableEntry系列"
echo "- 系统数据管理类函数：InitializeSystemDataPointer等"
echo "- 资源验证和清理类函数：FinalizeResourceValidation系列"
echo "- 资源表处理类函数：ProcessResourceTable系列"