#!/bin/bash

# 美化06_utilities.c中的Unwind_函数
# 这个脚本会将Unwind_函数重命名为语义化的名称

echo "开始美化06_utilities.c中的Unwind_函数..."

# 函数重命名映射
sed -i 's/void Unwind_180906960/void BeginResourceTransactionWithHandler58/g' 06_utilities.c
sed -i 's/void Unwind_180906970/void CommitResourceTransactionAtOffset28/g' 06_utilities.c
sed -i 's/void Unwind_180906980/void ExecuteResourceHandlerAtOffset58/g' 06_utilities.c
sed -i 's/void Unwind_180906990/void CommitResourceTransactionAtOffset40/g' 06_utilities.c
sed -i 's/void Unwind_1809069a0/void ExecuteResourceHandlerAtOffsetE0/g' 06_utilities.c
sed -i 's/void Unwind_1809069b0/void BeginResourceTransactionWithHandler48/g' 06_utilities.c
sed -i 's/void Unwind_1809069c0/void ExecuteResourceHandlerAtOffset178/g' 06_utilities.c
sed -i 's/void Unwind_180906a00/void ProcessResourceTransactionWithRollback/g' 06_utilities.c
sed -i 's/void Unwind_180906a50/void ExecuteResourceContextHandlerAtOffset180/g' 06_utilities.c
sed -i 's/void Unwind_180906a60/void ExecuteResourceHandlerAtOffsetA0/g' 06_utilities.c
sed -i 's/void Unwind_180906a70/void ExecuteResourceHandlerAtOffsetA8/g' 06_utilities.c
sed -i 's/void Unwind_180906a80/void BeginResourceTransactionWithHandler200/g' 06_utilities.c
sed -i 's/void Unwind_180906a90/void ProcessResourceOperationWithFlag/g' 06_utilities.c
sed -i 's/void Unwind_180906ac0/void ProcessResourceTransactionWithRollback2/g' 06_utilities.c
sed -i 's/void Unwind_180906ad0/void ExecuteResourceHandlerAtOffset30/g' 06_utilities.c

echo "Unwind_函数重命名完成！"

# 添加函数注释
echo "添加函数注释..."

# 为每个重命名的函数添加注释
sed -i '/void BeginResourceTransactionWithHandler58/i\
/**\
 * @brief 开始资源事务并执行处理器\
 * \
 * 功能：开始资源事务并在偏移量0x58处执行资源处理器\
 * \
 * @param ObjectContext 对象上下文标识符 (uint8_t)\
 * @param ValidationContext 验证上下文指针 (int64_t)\
 * \
 * 返回值：void\
 * \
 * 注意：此函数由逆向工程生成，用于资源事务管理\
 *       原始函数名：Unwind_180906960\
 */' 06_utilities.c

sed -i '/void CommitResourceTransactionAtOffset28/i\
/**\
 * @brief 在偏移量0x28处提交资源事务\
 * \
 * 功能：在验证上下文偏移量0x28处提交资源事务\
 * \
 * @param ObjectContext 对象上下文标识符 (uint8_t)\
 * @param ValidationContext 验证上下文指针 (int64_t)\
 * \
 * 返回值：void\
 * \
 * 注意：此函数由逆向工程生成，用于资源事务提交\
 *       原始函数名：Unwind_180906970\
 */' 06_utilities.c

echo "函数注释添加完成！"
echo "06_utilities.c文件美化完成！"