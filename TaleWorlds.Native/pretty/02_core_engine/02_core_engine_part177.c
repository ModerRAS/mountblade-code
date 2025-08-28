#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part177.c - 15 个函数

// 函数: void validate_float_range_with_type_checking(float value, longlong config_ptr)
// 功能: 根据配置验证浮点数范围，支持多种类型检查
// 参数: value - 要验证的浮点数值, config_ptr - 配置数据指针
void validate_float_range_with_type_checking(float value, longlong config_ptr)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  char in_AL;
  ulonglong uVar4;
  longlong lVar5;
  longlong unaff_RBX;
  longlong in_R10;
  longlong in_R11;
  bool bVar6;
  
  do {
    uVar2 = *(uint *)(in_R11 + in_R10 * 4);
    uVar4 = (ulonglong)uVar2;
    lVar5 = 0;
    iVar3 = *(int *)(in_R11 + 0x18 + in_R10 * 4);
    do {
      if (uVar2 == *(uint *)(&unknown_var_7568_ptr + lVar5 * 4)) goto LAB_18016064a;
      lVar5 = lVar5 + 1;
    } while (lVar5 < 3);
    lVar5 = -1;
LAB_18016064a:
    if (iVar3 == 0) {
      if (lVar5 < 0) {
        if (in_AL != '\0') {
LAB_180160689:
          if ((*(char *)(param_2 + 0x18 + uVar4 * 0x18) == '\0') &&
             ((pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18),
              param_1 < *pfVar1 || param_1 == *pfVar1 ||
              ((*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 1) != 0)))) goto LAB_180160797;
        }
        goto LAB_1801606a6;
      }
      if (in_AL == '\0') goto LAB_1801606a6;
      if ((*(char *)(param_2 + 0x18 + uVar4 * 0x18) != '\0') ||
         ((pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18), *pfVar1 <= param_1 && param_1 != *pfVar1
          && ((*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 1) == 0)))) {
        uVar4 = (ulonglong)*(uint *)(&unknown_var_7584_ptr + lVar5 * 4);
        goto LAB_180160689;
      }
LAB_180160797:
      in_AL = '\x01';
    }
    else {
      if (iVar3 == 1) {
        if ((in_AL != '\0') && (*(char *)(param_2 + 0x18 + uVar4 * 0x18) == '\0')) {
          pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18);
          if ((param_1 < *pfVar1 || param_1 == *pfVar1) &&
             (pfVar1 = (float *)(param_2 + 0xc + uVar4 * 0x18),
             *pfVar1 <= param_1 && param_1 != *pfVar1)) goto LAB_180160797;
LAB_1801606f2:
          bVar6 = (*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 3) == 3;
LAB_180160791:
          if (bVar6) goto LAB_180160797;
        }
      }
      else if (iVar3 == 2) {
        if ((in_AL != '\0') && (*(char *)(param_2 + 0x18 + uVar4 * 0x18) == '\0')) {
          pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18);
          if (param_1 < *pfVar1 || param_1 == *pfVar1) goto LAB_1801606f2;
          pfVar1 = (float *)(param_2 + 0xc + uVar4 * 0x18);
          if (param_1 < *pfVar1 || param_1 == *pfVar1) goto LAB_180160797;
          bVar6 = (*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 3) == 3;
          goto LAB_180160791;
        }
      }
      else {
        if (iVar3 != 3) goto LAB_1801606a8;
        if ((in_AL != '\0') &&
           ((*(char *)(param_2 + 0x18 + uVar4 * 0x18) != '\0' ||
            ((pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18),
             *pfVar1 <= param_1 && param_1 != *pfVar1 &&
             ((*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 1) == 0)))))) {
          if ((lVar5 < 0) ||
             (uVar4 = (ulonglong)*(uint *)(&unknown_var_7584_ptr + lVar5 * 4),
             *(char *)(param_2 + 0x18 + uVar4 * 0x18) != '\0')) goto LAB_180160797;
          pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18);
          if (*pfVar1 <= param_1 && param_1 != *pfVar1) {
            bVar6 = (*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 1) == 0;
            goto LAB_180160791;
          }
        }
      }
LAB_1801606a6:
      in_AL = '\0';
    }
LAB_1801606a8:
    in_R10 = in_R10 + 1;
    if (unaff_RBX <= in_R10) {
      return;
    }
  } while( true );
}





// 函数: void empty_function_placeholder(void)
// 功能: 空函数占位符，可能用于调试或未来扩展
void empty_function_placeholder(void)

{
  return;
}





// 函数: void validate_single_float_range(float value, longlong config_ptr, ulonglong index)
// 功能: 验证单个浮点数的范围，支持条件检查
// 参数: value - 要验证的浮点数值, config_ptr - 配置数据指针, index - 索引值
void validate_single_float_range(float value, longlong config_ptr, ulonglong index)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  char in_AL;
  ulonglong uVar4;
  longlong lVar5;
  longlong unaff_RBX;
  longlong unaff_RDI;
  longlong in_R10;
  longlong in_R11;
  bool bVar6;
  
code_r0x0001801606bb:
  if (in_AL == '\0') goto LAB_1801606a6;
LAB_180160689:
  if (*(char *)(param_2 + 0x18 + param_3 * 0x18) == '\0') {
    pfVar1 = (float *)(param_2 + 4 + param_3 * 0x18);
    if (param_1 < *pfVar1 || param_1 == *pfVar1) goto LAB_180160797;
    if ((*(byte *)(param_2 + 0x14 + param_3 * 0x18) & 1) != 0) goto LAB_180160797;
  }
LAB_1801606a6:
  in_AL = '\0';
LAB_1801606a8:
  in_R10 = in_R10 + 1;
  if (unaff_RBX <= in_R10) {
    return;
  }
  uVar2 = *(uint *)(in_R11 + in_R10 * 4);
  param_3 = (ulonglong)uVar2;
  lVar5 = 0;
  iVar3 = *(int *)(in_R11 + 0x18 + in_R10 * 4);
  do {
    if (uVar2 == *(uint *)(unaff_RDI + 0x98d770 + lVar5 * 4)) goto LAB_18016064a;
    lVar5 = lVar5 + 1;
  } while (lVar5 < 3);
  lVar5 = -1;
LAB_18016064a:
  if (iVar3 == 0) {
    if (lVar5 < 0) goto code_r0x0001801606bb;
    if (in_AL != '\0') {
      if ((*(char *)(param_2 + 0x18 + param_3 * 0x18) == '\0') &&
         ((pfVar1 = (float *)(param_2 + 4 + param_3 * 0x18), param_1 < *pfVar1 || param_1 == *pfVar1
          || ((*(byte *)(param_2 + 0x14 + param_3 * 0x18) & 1) != 0)))) goto LAB_180160797;
      param_3 = (ulonglong)*(uint *)(unaff_RDI + 0x98d780 + lVar5 * 4);
      goto LAB_180160689;
    }
  }
  else if (iVar3 == 1) {
    if ((in_AL != '\0') && (*(char *)(param_2 + 0x18 + param_3 * 0x18) == '\0')) {
      pfVar1 = (float *)(param_2 + 4 + param_3 * 0x18);
      if ((param_1 < *pfVar1 || param_1 == *pfVar1) &&
         (pfVar1 = (float *)(param_2 + 0xc + param_3 * 0x18),
         *pfVar1 <= param_1 && param_1 != *pfVar1)) goto LAB_180160797;
LAB_1801606f2:
      bVar6 = (*(byte *)(param_2 + 0x14 + param_3 * 0x18) & 3) == 3;
      goto LAB_180160791;
    }
  }
  else {
    if (iVar3 != 2) goto LAB_180160731;
    if ((in_AL != '\0') && (*(char *)(param_2 + 0x18 + param_3 * 0x18) == '\0')) {
      pfVar1 = (float *)(param_2 + 4 + param_3 * 0x18);
      if (param_1 < *pfVar1 || param_1 == *pfVar1) goto LAB_1801606f2;
      pfVar1 = (float *)(param_2 + 0xc + param_3 * 0x18);
      if (param_1 < *pfVar1 || param_1 == *pfVar1) goto LAB_180160797;
      bVar6 = (*(byte *)(param_2 + 0x14 + param_3 * 0x18) & 3) == 3;
      goto LAB_180160791;
    }
  }
  goto LAB_1801606a6;
LAB_180160731:
  if (iVar3 == 3) {
    if ((in_AL == '\0') ||
       ((*(char *)(param_2 + 0x18 + param_3 * 0x18) == '\0' &&
        ((pfVar1 = (float *)(param_2 + 4 + param_3 * 0x18), param_1 < *pfVar1 || param_1 == *pfVar1
         || ((*(byte *)(param_2 + 0x14 + param_3 * 0x18) & 1) != 0)))))) goto LAB_1801606a6;
    if ((-1 < lVar5) &&
       (uVar4 = (ulonglong)*(uint *)(unaff_RDI + 0x98d780 + lVar5 * 4),
       *(char *)(param_2 + 0x18 + uVar4 * 0x18) == '\0')) {
      pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18);
      if (param_1 < *pfVar1 || param_1 == *pfVar1) goto LAB_1801606a6;
      bVar6 = (*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 1) == 0;
LAB_180160791:
      if (!bVar6) goto LAB_1801606a6;
    }
LAB_180160797:
    in_AL = '\x01';
  }
  goto LAB_1801606a8;
}



// 函数: longlong initialize_data_structure_type_a(longlong struct_ptr, int32_t *param_2)
// 功能: 初始化类型A的数据结构，设置默认值和指针
// 参数: struct_ptr - 结构体指针, param_2 - 初始化参数
// 返回: 初始化后的结构体指针
longlong initialize_data_structure_type_a(longlong struct_ptr, int32_t *param_2)

{
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x20) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x24) = 0x40000000;
  *(int32_t *)(param_1 + 0x2c) = *param_2;
  *(uint64_t *)(param_1 + 0x10) = 1;
  *(void **)(param_1 + 8) = &system_memory_0000;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x28) = 0;
  return param_1;
}



// 函数: longlong initialize_data_structure_type_b(longlong struct_ptr, int32_t *param_2)
// 功能: 初始化类型B的数据结构，设置默认值和指针
// 参数: struct_ptr - 结构体指针, param_2 - 初始化参数
// 返回: 初始化后的结构体指针
longlong initialize_data_structure_type_b(longlong struct_ptr, int32_t *param_2)

{
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x20) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x24) = 0x40000000;
  *(int32_t *)(param_1 + 0x2c) = *param_2;
  *(uint64_t *)(param_1 + 0x10) = 1;
  *(void **)(param_1 + 8) = &system_memory_0000;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x28) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t *hash_table_insert_or_find(longlong table_ptr, uint64_t *result_ptr, uint64_t param_3, int *key_ptr, ulonglong hash_value)
// 功能: 在哈希表中插入或查找键值对，处理冲突
// 参数: table_ptr - 哈希表指针, result_ptr - 结果存储指针, key_ptr - 键指针, hash_value - 哈希值
// 返回: 结果指针
uint64_t *hash_table_insert_or_find(longlong table_ptr, uint64_t *result_ptr, uint64_t param_3, int *key_ptr, ulonglong hash_value)

{
  longlong lVar1;
  ulonglong uVar2;
  int *piVar3;
  uint64_t uVar4;
  
  uVar2 = param_5 % (ulonglong)*(uint *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  piVar3 = *(int **)(lVar1 + uVar2 * 8);
  if (piVar3 != (int *)0x0) {
    do {
      if (*param_4 == *piVar3) {
        *param_2 = piVar3;
        param_2[1] = lVar1 + uVar2 * 8;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      piVar3 = *(int **)(piVar3 + 2);
    } while (piVar3 != (int *)0x0);
  }
  FUN_18066c220(param_1 + 0x20,&param_5,(ulonglong)*(uint *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  piVar3 = (int *)FUN_18062b420(_DAT_180c8ed18,0x10,*(int8_t *)(param_1 + 0x2c));
  *piVar3 = *param_4;
  piVar3[1] = 0;
  piVar3[2] = 0;
  piVar3[3] = 0;
  if ((char)param_5 != '\0') {
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)param_5._4_4_ * 8 + 8,8,
                          *(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar4,0,(ulonglong)param_5._4_4_ * 8);
  }
  *(uint64_t *)(piVar3 + 2) = *(uint64_t *)(*(longlong *)(param_1 + 8) + uVar2 * 8);
  *(int **)(*(longlong *)(param_1 + 8) + uVar2 * 8) = piVar3;
  lVar1 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
  *param_2 = piVar3;
  param_2[1] = lVar1 + uVar2 * 8;
  *(int8_t *)(param_2 + 2) = 1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void hash_table_insert_with_data(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 功能: 向哈希表插入数据，支持动态内存分配
// 参数: param_1 - 哈希表参数, param_2 - 数据参数, param_3 - 哈希参数, param_4 - 配置参数
void hash_table_insert_with_data(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  longlong lVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  int32_t *unaff_RBX;
  longlong unaff_RDI;
  longlong unaff_R13;
  uint64_t *unaff_R15;
  char cStack0000000000000080;
  uint uStack0000000000000084;
  
  FUN_18066c220(param_1,&stack0x00000080,param_3,param_4,1);
  puVar2 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,*(int8_t *)(unaff_RDI + 0x2c));
  *puVar2 = *unaff_RBX;
  puVar2[1] = 0;
  *(uint64_t *)(puVar2 + 2) = 0;
  if (cStack0000000000000080 != '\0') {
    uVar3 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)uStack0000000000000084 * 8 + 8,8,
                          *(int8_t *)(unaff_RDI + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar3,0,(ulonglong)uStack0000000000000084 * 8);
  }
  *(uint64_t *)(puVar2 + 2) = *(uint64_t *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(int32_t **)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = puVar2;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = puVar2;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void set_hash_table_result(uint64_t result_value, uint64_t param_2)
// 功能: 设置哈希表查询结果，标记为已存在
// 参数: result_value - 结果值, param_2 - 目标位置
void set_hash_table_result(uint64_t result_value, uint64_t param_2)

{
  uint64_t in_RAX;
  uint64_t *unaff_R15;
  
  *unaff_R15 = in_RAX;
  unaff_R15[1] = param_2;
  *(int8_t *)(unaff_R15 + 2) = 0;
  return;
}





// 函数: void hash_table_rehash_and_insert(ulonglong param_1)
// 功能: 哈希表重新哈希并插入新元素
// 参数: param_1 - 重新哈希参数
void hash_table_rehash_and_insert(ulonglong param_1)

{
  longlong lVar1;
  uint64_t unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong *unaff_R15;
  
  if ((1 < param_1) && (*(longlong *)(unaff_RDI + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(*(longlong *)(unaff_RDI + 8));
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(longlong *)(unaff_RDI + 8) = unaff_R14;
  *(uint64_t *)(unaff_R12 + 8) = *(uint64_t *)(unaff_R14 + unaff_R13 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void hash_table_direct_insert(void)
// 功能: 直接向哈希表插入元素，不进行重新哈希
void hash_table_direct_insert(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong *unaff_R15;
  
  *(uint64_t *)(unaff_R12 + 8) = *(uint64_t *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void hash_table_cleanup_and_free(longlong table_ptr)
// 功能: 清理哈希表并释放内存资源
// 参数: table_ptr - 哈希表指针
void hash_table_cleanup_and_free(longlong table_ptr)

{
  int *piVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void hash_table_release_memory(longlong table_ptr)
// 功能: 释放哈希表内存，处理引用计数
// 参数: table_ptr - 哈希表指针
void hash_table_release_memory(longlong table_ptr)

{
  int *piVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void hash_table_clear_all_entries(void)
// 功能: 清除哈希表所有条目，释放关联内存
void hash_table_clear_all_entries(void)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  longlong unaff_R14;
  uint64_t unaff_R15;
  
  do {
    lVar3 = *(longlong *)(unaff_R14 + unaff_RDI * 8);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    *(uint64_t *)(unaff_R14 + unaff_RDI * 8) = unaff_R15;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RSI);
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < *(ulonglong *)(unaff_RBP + 0x10)) &&
     (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void hash_table_free_resources(void)
// 功能: 释放哈希表资源，处理内存池管理
void hash_table_free_resources(void)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar4;
  uint64_t unaff_R15;
  
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < unaff_RSI) && (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void hash_table_deallocate(void)
// 功能: 释放哈希表分配的内存，处理异常情况
void hash_table_deallocate(void)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  
  puVar2 = *(uint64_t **)(unaff_RBP + 8);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t *extended_hash_table_insert(longlong table_ptr, uint64_t *result_ptr, uint64_t param_3, int *key_ptr, ulonglong hash_value)
// 功能: 扩展哈希表插入操作，支持更大的数据结构
// 参数: table_ptr - 哈希表指针, result_ptr - 结果存储指针, key_ptr - 键指针, hash_value - 哈希值
// 返回: 结果指针
uint64_t *extended_hash_table_insert(longlong table_ptr, uint64_t *result_ptr, uint64_t param_3, int *key_ptr, ulonglong hash_value)

{
  longlong lVar1;
  ulonglong uVar2;
  int *piVar3;
  uint64_t uVar4;
  
  uVar2 = param_5 % (ulonglong)*(uint *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  piVar3 = *(int **)(lVar1 + uVar2 * 8);
  if (piVar3 != (int *)0x0) {
    do {
      if (*param_4 == *piVar3) {
        *param_2 = piVar3;
        param_2[1] = lVar1 + uVar2 * 8;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      piVar3 = *(int **)(piVar3 + 0x10);
    } while (piVar3 != (int *)0x0);
  }
  FUN_18066c220(param_1 + 0x20,&param_5,(ulonglong)*(uint *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  piVar3 = (int *)FUN_18062b420(_DAT_180c8ed18,0x48,*(int8_t *)(param_1 + 0x2c));
  *piVar3 = *param_4;
  piVar3[1] = 0;
  piVar3[2] = 0;
  piVar3[3] = 0;
  piVar3[4] = 0;
  piVar3[5] = 0;
  piVar3[6] = 0;
  piVar3[7] = 0;
  piVar3[8] = 0;
  piVar3[9] = 0;
  piVar3[10] = 0;
  piVar3[0xb] = 0;
  piVar3[0xc] = 0;
  piVar3[0xd] = 0;
  *(int8_t *)(piVar3 + 0xe) = 0;
  piVar3[0x10] = 0;
  piVar3[0x11] = 0;
  if ((char)param_5 != '\0') {
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)param_5._4_4_ * 8 + 8,8,
                          *(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar4,0,(ulonglong)param_5._4_4_ * 8);
  }
  *(uint64_t *)(piVar3 + 0x10) = *(uint64_t *)(*(longlong *)(param_1 + 8) + uVar2 * 8);
  *(int **)(*(longlong *)(param_1 + 8) + uVar2 * 8) = piVar3;
  lVar1 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
  *param_2 = piVar3;
  param_2[1] = lVar1 + uVar2 * 8;
  *(int8_t *)(param_2 + 2) = 1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void extended_hash_table_insert_data(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 功能: 向扩展哈希表插入数据，支持复杂数据结构
// 参数: param_1 - 哈希表参数, param_2 - 数据参数, param_3 - 哈希参数, param_4 - 配置参数
void extended_hash_table_insert_data(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  longlong lVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  int32_t *unaff_RBX;
  longlong unaff_RDI;
  longlong unaff_R13;
  uint64_t *unaff_R15;
  char cStack0000000000000080;
  uint uStack0000000000000084;
  
  FUN_18066c220(param_1,&stack0x00000080,param_3,param_4,1);
  puVar2 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x48,*(int8_t *)(unaff_RDI + 0x2c));
  *puVar2 = *unaff_RBX;
  *(uint64_t *)(puVar2 + 1) = 0;
  *(uint64_t *)(puVar2 + 3) = 0;
  *(uint64_t *)(puVar2 + 5) = 0;
  *(uint64_t *)(puVar2 + 7) = 0;
  *(uint64_t *)(puVar2 + 9) = 0;
  *(uint64_t *)(puVar2 + 0xb) = 0;
  puVar2[0xd] = 0;
  *(int8_t *)(puVar2 + 0xe) = 0;
  *(uint64_t *)(puVar2 + 0x10) = 0;
  if (cStack0000000000000080 != '\0') {
    uVar3 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)uStack0000000000000084 * 8 + 8,8,
                          *(int8_t *)(unaff_RDI + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar3,0,(ulonglong)uStack0000000000000084 * 8);
  }
  *(uint64_t *)(puVar2 + 0x10) = *(uint64_t *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(int32_t **)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = puVar2;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = puVar2;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void extended_hash_table_set_result(uint64_t result_value, uint64_t param_2)
// 功能: 设置扩展哈希表查询结果
// 参数: result_value - 结果值, param_2 - 目标位置
void extended_hash_table_set_result(uint64_t result_value, uint64_t param_2)

{
  uint64_t in_RAX;
  uint64_t *unaff_R15;
  
  *unaff_R15 = in_RAX;
  unaff_R15[1] = param_2;
  *(int8_t *)(unaff_R15 + 2) = 0;
  return;
}





// 函数: void extended_hash_table_rehash(ulonglong param_1)
// 功能: 扩展哈希表重新哈希操作
// 参数: param_1 - 重新哈希参数
void extended_hash_table_rehash(ulonglong param_1)

{
  longlong lVar1;
  uint64_t unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong *unaff_R15;
  
  if ((1 < param_1) && (*(longlong *)(unaff_RDI + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(*(longlong *)(unaff_RDI + 8));
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(longlong *)(unaff_RDI + 8) = unaff_R14;
  *(uint64_t *)(unaff_R12 + 0x40) = *(uint64_t *)(unaff_R14 + unaff_R13 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}





