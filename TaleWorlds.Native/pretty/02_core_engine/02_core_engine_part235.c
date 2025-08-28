#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part235.c - 核心引擎排序和数据处理模块
// 本文件包含12个函数，主要用于数据排序、内存管理和资源处理

/**
 * 合并排序函数 - 对两个已排序的区间进行合并操作
 * @param param_1 上下文参数
 * @param param_2 输入参数
 * @param param_3 输出参数指针
 */
void merge_sorted_intervals(uint64_t param_1, uint64_t param_2, uint64_t *param_3)

{
  int compare_value1;
  int compare_value2;
  bool should_break;
  uint64_t temp_value1;
  uint64_t temp_value2;
  uint64_t temp_value3;
  uint64_t *ptr_current;
  uint64_t *ptr_end;
  uint64_t *ptr_start;
  uint64_t *ptr_output;
  uint64_t *ptr_left;
  uint64_t *ptr_right;
  uint64_t *ptr_temp;
  
  while( true ) {
    compare_value1 = *(int *)(in_R10 + -1);
    compare_value2 = *(int *)(in_R10 + 1);
    if (compare_value1 == compare_value2) {
      should_break = *(int *)((int64_t)in_R10 + -4) < *(int *)((int64_t)in_R10 + 0xc);
    }
    else {
      should_break = compare_value2 < compare_value1;
    }
    if (should_break) break;
    if (compare_value2 == compare_value1) {
      should_break = *(int *)((int64_t)in_R10 + 0xc) < *(int *)((int64_t)in_R10 + -4);
    }
    else {
      should_break = compare_value1 < compare_value2;
    }
    if ((should_break) || (in_R10 = in_R10 + -2, in_R10 <= unaff_RBP)) break;
  }
  ptr_output = param_3;
  ptr_right = in_R10;
  if (param_3 < unaff_RSI) {
    compare_value1 = *(int *)(in_R10 + 1);
    while( true ) {
      compare_value2 = *(int *)(param_3 + 1);
      if (compare_value2 == compare_value1) {
        should_break = *(int *)((int64_t)param_3 + 0xc) < *(int *)((int64_t)in_R10 + 0xc);
      }
      else {
        should_break = compare_value1 < compare_value2;
      }
      ptr_output = param_3;
      if (should_break) break;
      if (compare_value1 == compare_value2) {
        should_break = *(int *)((int64_t)in_R10 + 0xc) < *(int *)((int64_t)param_3 + 0xc);
      }
      else {
        should_break = compare_value2 < compare_value1;
      }
      if ((should_break) || (param_3 = param_3 + 2, ptr_output = param_3, unaff_RSI <= param_3)) break;
    }
  }
joined_r0x000180204576:
  do {
    puVar11 = in_R10;
    if (unaff_RSI <= param_3) {
joined_r0x0001802045de:
      for (; unaff_RBP < in_R10; in_R10 = in_R10 + -2) {
        puVar8 = puVar11 + -2;
        iVar1 = *(int *)(puVar11 + -1);
        iVar2 = *(int *)(puVar9 + 1);
        if (iVar1 == iVar2) {
          bVar3 = *(int *)((int64_t)puVar11 + -4) < *(int *)((int64_t)puVar9 + 0xc);
        }
        else {
          bVar3 = iVar2 < iVar1;
        }
        puVar10 = puVar9;
        if (!bVar3) {
          if (iVar2 == iVar1) {
            bVar3 = *(int *)((int64_t)puVar9 + 0xc) < *(int *)((int64_t)puVar11 + -4);
          }
          else {
            bVar3 = iVar1 < iVar2;
          }
          if (bVar3) break;
          puVar10 = puVar9 + -2;
          if (puVar10 != puVar8) {
            uVar4 = puVar11[-1];
            uVar5 = *puVar10;
            uVar6 = puVar9[-1];
            *puVar10 = *puVar8;
            puVar9[-1] = uVar4;
            *puVar8 = uVar5;
            puVar11[-1] = uVar6;
          }
        }
        puVar9 = puVar10;
        puVar11 = puVar8;
      }
      if (in_R10 == unaff_RBP) {
        if (param_3 == unaff_RSI) {
          *unaff_R15 = puVar9;
          unaff_R15[1] = puVar7;
          return;
        }
        if (puVar7 != param_3) {
          uVar4 = puVar7[1];
          uVar5 = *puVar9;
          uVar6 = puVar9[1];
          *puVar9 = *puVar7;
          puVar9[1] = uVar4;
          *puVar7 = uVar5;
          puVar7[1] = uVar6;
        }
        uVar4 = param_3[1];
        uVar5 = *puVar9;
        uVar6 = puVar9[1];
        *puVar9 = *param_3;
        puVar9[1] = uVar4;
        *param_3 = uVar5;
        param_3[1] = uVar6;
        param_3 = param_3 + 2;
        puVar7 = puVar7 + 2;
        puVar9 = puVar9 + 2;
      }
      else {
        puVar11 = in_R10 + -2;
        if (param_3 == unaff_RSI) {
          puVar8 = puVar9 + -2;
          if (puVar11 != puVar8) {
            uVar4 = puVar9[-1];
            uVar5 = *puVar11;
            uVar6 = in_R10[-1];
            *puVar11 = *puVar8;
            in_R10[-1] = uVar4;
            *puVar8 = uVar5;
            puVar9[-1] = uVar6;
          }
          uVar4 = puVar7[-1];
          uVar5 = *puVar8;
          uVar6 = puVar9[-1];
          *puVar8 = puVar7[-2];
          puVar9[-1] = uVar4;
          puVar7[-2] = uVar5;
          puVar7[-1] = uVar6;
          puVar7 = puVar7 + -2;
          in_R10 = puVar11;
          puVar9 = puVar8;
        }
        else {
          uVar4 = *param_3;
          uVar5 = param_3[1];
          uVar6 = in_R10[-1];
          *param_3 = *puVar11;
          param_3[1] = uVar6;
          param_3 = param_3 + 2;
          *puVar11 = uVar4;
          in_R10[-1] = uVar5;
          in_R10 = puVar11;
        }
      }
      goto joined_r0x000180204576;
    }
    iVar1 = *(int *)(puVar9 + 1);
    iVar2 = *(int *)(param_3 + 1);
    if (iVar1 == iVar2) {
      bVar3 = *(int *)((int64_t)puVar9 + 0xc) < *(int *)((int64_t)param_3 + 0xc);
    }
    else {
      bVar3 = iVar2 < iVar1;
    }
    puVar8 = puVar7;
    if (!bVar3) {
      if (iVar2 == iVar1) {
        bVar3 = *(int *)((int64_t)param_3 + 0xc) < *(int *)((int64_t)puVar9 + 0xc);
      }
      else {
        bVar3 = iVar1 < iVar2;
      }
      if (bVar3) goto joined_r0x0001802045de;
      puVar8 = puVar7 + 2;
      if (puVar7 != param_3) {
        uVar4 = param_3[1];
        uVar5 = *puVar7;
        uVar6 = puVar7[1];
        *puVar7 = *param_3;
        puVar7[1] = uVar4;
        *param_3 = uVar5;
        param_3[1] = uVar6;
      }
    }
    param_3 = param_3 + 2;
    puVar7 = puVar8;
  } while( true );
}





/**
 * 堆排序函数 - 对指定区间进行堆排序操作
 * @param param_1 数据起始地址
 * @param param_2 数据结束地址
 */
void heap_sort_range(int64_t param_1, int64_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  bool bVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int iStack_10;
  int iStack_c;
  
  uVar11 = param_2 - param_1 >> 4;
  lVar14 = param_2 - param_1 >> 5;
  if (0 < lVar14) {
    lVar13 = (int64_t)(uVar11 - 1) >> 1;
    lVar12 = lVar14 * 0x10 + param_1;
    do {
      uVar5 = *(uint64_t *)(lVar12 + -0x10);
      uVar6 = *(uint64_t *)(lVar12 + -8);
      lVar14 = lVar14 + -1;
      lVar12 = lVar12 + -0x10;
      lVar10 = lVar14;
      while (lVar10 < lVar13) {
        iVar4 = *(int *)(param_1 + 0x28 + lVar10 * 0x20);
        iVar3 = *(int *)(param_1 + 0x18 + lVar10 * 0x20);
        if (iVar4 == iVar3) {
          bVar8 = *(int *)(param_1 + 0x2c + lVar10 * 0x20) <
                  *(int *)(param_1 + 0x1c + lVar10 * 0x20);
        }
        else {
          bVar8 = iVar3 < iVar4;
        }
        lVar9 = ((uint64_t)bVar8 ^ 1) + 1 + lVar10 * 2;
        puVar1 = (uint64_t *)(param_1 + lVar9 * 0x10);
        uVar7 = puVar1[1];
        puVar2 = (uint64_t *)(param_1 + lVar10 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        lVar10 = lVar9;
      }
      if ((lVar10 == lVar13) && ((uVar11 & 1) == 0)) {
        puVar2 = (uint64_t *)(param_1 + -0x10 + uVar11 * 0x10);
        uVar7 = puVar2[1];
        puVar1 = (uint64_t *)(param_1 + lVar10 * 0x10);
        *puVar1 = *puVar2;
        puVar1[1] = uVar7;
        lVar10 = uVar11 - 1;
      }
      if (lVar14 < lVar10) {
        iStack_c = (int)((uint64_t)uVar6 >> 0x20);
        iStack_10 = (int)uVar6;
        do {
          lVar9 = lVar10 + -1 >> 1;
          iVar3 = *(int *)(param_1 + 8 + lVar9 * 0x10);
          if (iVar3 == iStack_10) {
            bVar8 = *(int *)(param_1 + 0xc + lVar9 * 0x10) < iStack_c;
          }
          else {
            bVar8 = iStack_10 < iVar3;
          }
          if (!bVar8) break;
          puVar1 = (uint64_t *)(param_1 + lVar9 * 0x10);
          uVar7 = puVar1[1];
          puVar2 = (uint64_t *)(param_1 + lVar10 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          lVar10 = lVar9;
        } while (lVar14 < lVar9);
      }
      puVar1 = (uint64_t *)(param_1 + lVar10 * 0x10);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
    } while (0 < lVar14);
  }
  return;
}





// 函数: void FUN_180204722(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
/**
 * 优化的堆排序函数 - 带有额外参数的堆排序实现
 * @param param_1 数据起始地址
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 数据结束地址
 */
void optimized_heap_sort(int64_t param_1, uint64_t param_2, uint64_t param_3, int64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  bool bVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t unaff_RBP;
  int64_t lVar11;
  int64_t in_R11;
  int iStackX_8;
  int iStackX_c;
  
  lVar11 = (int64_t)(unaff_RBP - 1) >> 1;
  param_1 = in_R11 * 0x10 + param_1;
  do {
    uVar5 = *(uint64_t *)(param_1 + -0x10);
    uVar6 = *(uint64_t *)(param_1 + -8);
    in_R11 = in_R11 + -1;
    param_1 = param_1 + -0x10;
    lVar10 = in_R11;
    while (lVar10 < lVar11) {
      iVar4 = *(int *)(param_4 + 0x28 + lVar10 * 0x20);
      iVar3 = *(int *)(param_4 + 0x18 + lVar10 * 0x20);
      if (iVar4 == iVar3) {
        bVar8 = *(int *)(param_4 + 0x2c + lVar10 * 0x20) < *(int *)(param_4 + 0x1c + lVar10 * 0x20);
      }
      else {
        bVar8 = iVar3 < iVar4;
      }
      lVar9 = ((uint64_t)bVar8 ^ 1) + 1 + lVar10 * 2;
      puVar1 = (uint64_t *)(param_4 + lVar9 * 0x10);
      uVar7 = puVar1[1];
      puVar2 = (uint64_t *)(param_4 + lVar10 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      lVar10 = lVar9;
    }
    if ((lVar10 == lVar11) && ((unaff_RBP & 1) == 0)) {
      puVar2 = (uint64_t *)(param_4 + -0x10 + unaff_RBP * 0x10);
      uVar7 = puVar2[1];
      puVar1 = (uint64_t *)(param_4 + lVar10 * 0x10);
      *puVar1 = *puVar2;
      puVar1[1] = uVar7;
      lVar10 = unaff_RBP - 1;
    }
    if (in_R11 < lVar10) {
      iStackX_c = (int)((uint64_t)uVar6 >> 0x20);
      iStackX_8 = (int)uVar6;
      do {
        lVar9 = lVar10 + -1 >> 1;
        iVar3 = *(int *)(param_4 + 8 + lVar9 * 0x10);
        if (iVar3 == iStackX_8) {
          bVar8 = *(int *)(param_4 + 0xc + lVar9 * 0x10) < iStackX_c;
        }
        else {
          bVar8 = iStackX_8 < iVar3;
        }
        if (!bVar8) break;
        puVar1 = (uint64_t *)(param_4 + lVar9 * 0x10);
        uVar7 = puVar1[1];
        puVar2 = (uint64_t *)(param_4 + lVar10 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        lVar10 = lVar9;
      } while (in_R11 < lVar9);
    }
    puVar1 = (uint64_t *)(param_4 + lVar10 * 0x10);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    if (in_R11 < 1) {
      return;
    }
  } while( true );
}





// 函数: void FUN_180204861(void)
/**
 * 空函数 - 可能用于调试或占位
 */
void empty_function(void)

{
  return;
}





// 函数: void FUN_180204870(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t *param_4)
/**
 * 插入排序函数 - 对指定区间进行插入排序
 * @param param_1 数据起始地址
 * @param param_2 排序起始位置
 * @param param_3 数据大小
 * @param param_4 插入元素指针
 */
void insertion_sort_range(int64_t param_1, int64_t param_2, uint64_t param_3, uint64_t *param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  uint64_t uVar4;
  bool bVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  
  lVar8 = (int64_t)(param_3 - 1) >> 1;
  lVar7 = param_2;
  lVar6 = param_2;
  if (param_2 < lVar8) {
    do {
      lVar6 = lVar7 * 0x20 + param_1;
      if (*(int *)(lVar6 + 0x28) == *(int *)(lVar6 + 0x18)) {
        bVar5 = *(int *)(lVar6 + 0x2c) < *(int *)(lVar6 + 0x1c);
      }
      else {
        bVar5 = *(int *)(lVar6 + 0x18) < *(int *)(lVar6 + 0x28);
      }
      lVar6 = ((uint64_t)bVar5 ^ 1) + 1 + lVar7 * 2;
      puVar1 = (uint64_t *)(param_1 + lVar6 * 0x10);
      uVar4 = puVar1[1];
      puVar2 = (uint64_t *)(param_1 + lVar7 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      lVar7 = lVar6;
    } while (lVar6 < lVar8);
  }
  if ((lVar6 == lVar8) && ((param_3 & 1) == 0)) {
    puVar2 = (uint64_t *)(param_1 + -0x10 + param_3 * 0x10);
    uVar4 = puVar2[1];
    puVar1 = (uint64_t *)(param_1 + lVar6 * 0x10);
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    lVar6 = param_3 - 1;
  }
  while (param_2 < lVar6) {
    lVar7 = lVar6 + -1 >> 1;
    iVar3 = *(int *)(param_1 + 8 + lVar7 * 0x10);
    if (iVar3 == *(int *)(param_4 + 1)) {
      bVar5 = *(int *)(param_1 + 0xc + lVar7 * 0x10) < *(int *)((int64_t)param_4 + 0xc);
    }
    else {
      bVar5 = *(int *)(param_4 + 1) < iVar3;
    }
    if (!bVar5) break;
    puVar1 = (uint64_t *)(param_1 + lVar7 * 0x10);
    uVar4 = puVar1[1];
    puVar2 = (uint64_t *)(param_1 + lVar6 * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    lVar6 = lVar7;
  }
  uVar4 = param_4[1];
  puVar1 = (uint64_t *)(param_1 + lVar6 * 0x10);
  *puVar1 = *param_4;
  puVar1[1] = uVar4;
  return;
}



/**
 * 资源转移函数 - 将资源从一个结构体转移到另一个结构体
 * @param param_1 目标结构体指针
 * @param param_2 源结构体指针
 * @return 返回目标结构体指针
 */
uint64_t * transfer_resources(uint64_t *param_1, uint64_t *param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  plVar1 = (int64_t *)param_2[1];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[1];
  param_1[1] = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (int64_t *)param_2[2];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[2];
  param_1[2] = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *param_2 = 0;
  plVar1 = (int64_t *)param_2[1];
  param_2[1] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (int64_t *)param_2[2];
  param_2[2] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return param_1;
}



/**
 * 复杂资源处理函数 - 处理带有多个参数的资源操作
 * @param param_1 基础地址
 * @param param_2 输出参数
 * @param param_3 大小参数
 * @param param_4 标志参数
 * @param param_5 附加参数
 * @param param_6 模式参数
 * @return 返回输出参数指针
 */
uint64_t * complex_resource_handler(int64_t param_1, uint64_t *param_2, int param_3, char param_4, int32_t param_5, char param_6)

{
  uint64_t uVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int iVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  uint64_t uStack_80;
  int64_t *plStack_78;
  uint64_t uStack_70;
  uint64_t *puStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  int64_t *plStack_50;
  
  uStack_60 = 0xfffffffffffffffe;
  plVar7 = (int64_t *)0x0;
  if (param_4 == '\x01') {
    func_0x0001802063e0(param_3);
    if (1 < param_3 - 0xeU) {
      uVar2 = func_0x000180206330(param_3);
      func_0x000180225e50(uVar2);
    }
    FUN_1800b0a10();
    *param_2 = 0;
    *(int32_t *)(param_2 + 1) = 0xffffffff;
    *(int *)((int64_t)param_2 + 0xc) = param_3;
    param_2[2] = plStack_78;
    if (plStack_78 != (int64_t *)0x0) {
      (**(code **)(*plStack_78 + 0x28))();
      (**(code **)(*plStack_78 + 0x38))();
    }
  }
  else {
    plVar10 = (int64_t *)(((int64_t)param_3 + 0x25) * 0x20 + param_1);
    lVar4 = (plVar10[1] - *plVar10) / 6 + (plVar10[1] - *plVar10 >> 0x3f);
    iVar9 = (int)(lVar4 >> 2) - (int)(lVar4 >> 0x3f);
    uStack_80 = 0xffffffffffffffff;
    plVar6 = plVar7;
    plVar8 = plVar7;
    plVar11 = plVar7;
    if (0 < iVar9) {
      do {
        puStack_68 = (uint64_t *)(*plVar10 + (int64_t)plVar11);
        FUN_18030a2a0(*puStack_68,&uStack_70,param_5);
        iVar5 = (int)plVar6;
        if ((int)uStack_70 != -1) {
          plVar7 = (int64_t *)puStack_68[1];
          uStack_80 = uStack_70;
          if (iVar5 != -1) goto LAB_180204df9;
          goto LAB_180204d39;
        }
        plVar8 = (int64_t *)((int64_t)plVar8 + 1);
        plVar6 = (int64_t *)(uint64_t)(iVar5 + 1);
        plVar11 = plVar11 + 3;
      } while ((int64_t)plVar8 < (int64_t)iVar9);
    }
    iVar5 = -1;
LAB_180204d39:
    uStack_70 = uStack_80;
    if (param_6 != '\0') {
      iVar5 = iVar9;
      uVar2 = func_0x000180206690(param_5,param_5,param_3);
      FUN_1802064e0(param_1,&uStack_58,uVar2,param_3);
      puVar3 = (uint64_t *)FUN_18030a2a0(uStack_58,&puStack_68,param_5);
      uVar1 = *puVar3;
      if ((uint64_t)plVar10[1] < (uint64_t)plVar10[2]) {
        plVar10[1] = plVar10[1] + 0x18;
        FUN_180204a00();
      }
      else {
        FUN_180207840(plVar10,&uStack_58);
      }
      FUN_18004bf50(&uStack_58);
      uStack_70 = uVar1;
      plVar7 = plStack_50;
    }
LAB_180204df9:
    *param_2 = uStack_70;
    *(int *)(param_2 + 1) = iVar5;
    *(int *)((int64_t)param_2 + 0xc) = param_3;
    param_2[2] = plVar7;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7);
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180204e40(int64_t param_1,int *param_2)
/**
 * 数据插入函数 - 将数据插入到指定位置
 * @param param_1 上下文参数
 * @param param_2 数据指针
 */
void insert_data(int64_t param_1, int *param_2)

{
  int iVar1;
  int iVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  
  if (*param_2 == -1) {
    return;
  }
  iVar1 = param_2[2];
  if (iVar1 == -1) goto FUN_180204f57;
  puVar6 = (uint64_t *)(param_1 + 0x98 + (uint64_t)*(uint *)(param_1 + 0x90) * 0x20);
  puVar8 = (uint64_t *)puVar6[1];
  if (puVar8 < (uint64_t *)puVar6[2]) {
    iVar2 = param_2[3];
    *puVar8 = *(uint64_t *)param_2;
    *(int *)(puVar8 + 1) = iVar1;
    *(int *)((int64_t)puVar8 + 0xc) = iVar2;
    puVar6[1] = puVar6[1] + 0x10;
    goto FUN_180204f57;
  }
  puVar5 = (uint64_t *)*puVar6;
  lVar7 = (int64_t)puVar8 - (int64_t)puVar5 >> 4;
  if (lVar7 == 0) {
    lVar7 = 1;
LAB_180204eca:
    puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 << 4,(char)puVar6[3]);
    puVar5 = (uint64_t *)*puVar6;
    puVar8 = (uint64_t *)puVar6[1];
  }
  else {
    lVar7 = lVar7 * 2;
    if (lVar7 != 0) goto LAB_180204eca;
    puVar4 = (uint64_t *)0x0;
  }
  if (puVar5 != puVar8) {
                    // WARNING: Subroutine does not return
    memmove(puVar4,puVar5,(int64_t)puVar8 - (int64_t)puVar5);
  }
  iVar1 = param_2[2];
  iVar2 = param_2[3];
  *puVar4 = *(uint64_t *)param_2;
  *(int *)(puVar4 + 1) = iVar1;
  *(int *)((int64_t)puVar4 + 0xc) = iVar2;
  if (*puVar6 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *puVar6 = (uint64_t)puVar4;
  puVar6[2] = (uint64_t)(puVar4 + lVar7 * 2);
  puVar6[1] = (uint64_t)(puVar4 + 2);
FUN_180204f57:
  param_2[0] = -1;
  param_2[1] = -1;
  plVar3 = *(int64_t **)(param_2 + 4);
  param_2[4] = 0;
  param_2[5] = 0;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  param_2[3] = 0x10;
  param_2[2] = -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180204e64(int64_t param_1,int32_t param_2)
/**
 * 数据插入函数变体1 - 处理不同类型的数据插入
 * @param param_1 上下文参数
 * @param param_2 数据值
 */
void insert_data_variant1(int64_t param_1, int32_t param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int64_t *plVar3;
  int64_t in_RAX;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t *unaff_RSI;
  uint64_t *puVar8;
  
  puVar6 = (uint64_t *)(param_1 + 0x98 + in_RAX * 0x20);
  puVar8 = (uint64_t *)puVar6[1];
  if (puVar8 < (uint64_t *)puVar6[2]) {
    uVar1 = *(int32_t *)((int64_t)unaff_RSI + 0xc);
    *puVar8 = *unaff_RSI;
    *(int32_t *)(puVar8 + 1) = param_2;
    *(int32_t *)((int64_t)puVar8 + 0xc) = uVar1;
    puVar6[1] = puVar6[1] + 0x10;
    goto FUN_180204f4d;
  }
  puVar5 = (uint64_t *)*puVar6;
  lVar7 = (int64_t)puVar8 - (int64_t)puVar5 >> 4;
  if (lVar7 == 0) {
    lVar7 = 1;
LAB_180204eca:
    puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 << 4,(char)puVar6[3]);
    puVar5 = (uint64_t *)*puVar6;
    puVar8 = (uint64_t *)puVar6[1];
  }
  else {
    lVar7 = lVar7 * 2;
    if (lVar7 != 0) goto LAB_180204eca;
    puVar4 = (uint64_t *)0x0;
  }
  if (puVar5 != puVar8) {
                    // WARNING: Subroutine does not return
    memmove(puVar4,puVar5,(int64_t)puVar8 - (int64_t)puVar5);
  }
  uVar1 = *(int32_t *)(unaff_RSI + 1);
  uVar2 = *(int32_t *)((int64_t)unaff_RSI + 0xc);
  *puVar4 = *unaff_RSI;
  *(int32_t *)(puVar4 + 1) = uVar1;
  *(int32_t *)((int64_t)puVar4 + 0xc) = uVar2;
  if (*puVar6 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *puVar6 = (uint64_t)puVar4;
  puVar6[2] = (uint64_t)(puVar4 + lVar7 * 2);
  puVar6[1] = (uint64_t)(puVar4 + 2);
FUN_180204f4d:
  *unaff_RSI = 0xffffffffffffffff;
  plVar3 = (int64_t *)unaff_RSI[2];
  unaff_RSI[2] = 0;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(int32_t *)((int64_t)unaff_RSI + 0xc) = 0x10;
  *(int32_t *)(unaff_RSI + 1) = 0xffffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180204ea2(uint64_t param_1,int64_t param_2)
/**
 * 数据插入函数变体2 - 处理带有偏移量的数据插入
 * @param param_1 上下文参数
 * @param param_2 偏移量参数
 */
void insert_data_variant2(uint64_t param_1, int64_t param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  int64_t *unaff_RBX;
  int64_t lVar5;
  uint64_t *unaff_RSI;
  int64_t unaff_RDI;
  
  lVar5 = unaff_RDI - param_2 >> 4;
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = lVar5 * 2;
    if (lVar5 == 0) {
      puVar4 = (uint64_t *)0x0;
      goto LAB_180204eec;
    }
  }
  puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar5 << 4,(char)unaff_RBX[3]);
  param_2 = *unaff_RBX;
  unaff_RDI = unaff_RBX[1];
LAB_180204eec:
  if (param_2 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(puVar4,param_2,unaff_RDI - param_2);
  }
  uVar1 = *(int32_t *)(unaff_RSI + 1);
  uVar2 = *(int32_t *)((int64_t)unaff_RSI + 0xc);
  *puVar4 = *unaff_RSI;
  *(int32_t *)(puVar4 + 1) = uVar1;
  *(int32_t *)((int64_t)puVar4 + 0xc) = uVar2;
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *unaff_RBX = (int64_t)puVar4;
  unaff_RBX[2] = (int64_t)(puVar4 + lVar5 * 2);
  unaff_RBX[1] = (int64_t)(puVar4 + 2);
  *unaff_RSI = 0xffffffffffffffff;
  plVar3 = (int64_t *)unaff_RSI[2];
  unaff_RSI[2] = 0;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(int32_t *)((int64_t)unaff_RSI + 0xc) = 0x10;
  *(int32_t *)(unaff_RSI + 1) = 0xffffffff;
  return;
}





// 函数: void FUN_180204f4d(void)
/**
 * 资源清理函数1 - 清理指定资源
 */
void cleanup_resource1(void)

{
  uint64_t *unaff_RSI;
  int64_t *plStack0000000000000038;
  
  *unaff_RSI = 0xffffffffffffffff;
  plStack0000000000000038 = (int64_t *)unaff_RSI[2];
  unaff_RSI[2] = 0;
  if (plStack0000000000000038 != (int64_t *)0x0) {
    (**(code **)(*plStack0000000000000038 + 0x38))();
  }
  *(int32_t *)((int64_t)unaff_RSI + 0xc) = 0x10;
  *(int32_t *)(unaff_RSI + 1) = 0xffffffff;
  return;
}





// 函数: void FUN_180204f57(void)
/**
 * 资源清理函数2 - 清理指定资源（带栈参数）
 */
void cleanup_resource2(void)

{
  uint64_t *unaff_RSI;
  uint64_t uStack0000000000000030;
  int64_t *plStack0000000000000038;
  
  uStack0000000000000030 = 0xffffffffffffffff;
  *unaff_RSI = 0xffffffffffffffff;
  plStack0000000000000038 = (int64_t *)unaff_RSI[2];
  unaff_RSI[2] = 0;
  if (plStack0000000000000038 != (int64_t *)0x0) {
    (**(code **)(*plStack0000000000000038 + 0x38))();
  }
  *(int32_t *)((int64_t)unaff_RSI + 0xc) = 0x10;
  *(int32_t *)(unaff_RSI + 1) = 0xffffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180204f70(uint64_t param_1,int64_t *param_2,uint64_t param_3)
/**
 * 复杂初始化函数 - 初始化复杂的资源结构
 * @param param_1 初始化参数
 * @param param_2 资源指针
 * @param param_3 附加参数
 */
void complex_initialization(uint64_t param_1, int64_t *param_2, uint64_t param_3)

{
  int64_t lVar1;
  int8_t auStack_218 [32];
  code *pcStack_1f8;
  int8_t uStack_1d8;
  int32_t uStack_1d4;
  int64_t lStack_1d0;
  int64_t *plStack_1c0;
  uint64_t uStack_1b8;
  uint64_t uStack_198;
  int64_t *plStack_190;
  uint64_t uStack_48;
  
  uStack_198 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_218;
  uStack_1d8 = *(int8_t *)(*param_2 + 0x15);
  uStack_1d4 = *(int32_t *)(*param_2 + 0x10);
  plStack_1c0 = param_2;
  uStack_1b8 = param_3;
  plStack_190 = param_2;
  lVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x2c0,8,0x20);
  pcStack_1f8 = FUN_1800586e0;
  lStack_1d0 = lVar1;
  FUN_1808fc838(lVar1,0x18,0x10,FUN_180207e00);
  *(uint64_t *)(lVar1 + 0x184) = 0xffffffffffffffff;
  *(uint64_t *)(lVar1 + 0x18c) = 0xffffffffffffffff;
  *(int16_t *)(lVar1 + 0x180) = 0x902;
  *(uint64_t *)(lVar1 + 0x198) = 0;
  *(int16_t *)(lVar1 + 0x194) = 0xffff;
                    // WARNING: Subroutine does not return
  memset(lVar1 + 0x1a0,0,0x120);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180205470(uint64_t param_1,uint64_t param_2)
/**
 * 资源释放函数 - 释放指定资源
 * @param param_1 释放参数
 * @param param_2 资源标识
 */
void release_resource(uint64_t param_1, uint64_t param_2)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint uVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  uint64_t uVar9;
  
  lVar8 = core_system_data_config;
  uVar9 = 0xfffffffffffffffe;
  puVar6 = (uint64_t *)0x0;
  if ((param_2 != 0) && (*(char *)(param_2 + 0x180) == '\0')) {
    puVar2 = (uint64_t *)
             (*(int64_t *)(core_system_data_config + 8) +
             (param_2 % (uint64_t)*(uint *)(core_system_data_config + 0x10)) * 8);
    puVar3 = (uint64_t *)*puVar2;
    while ((puVar3 != (uint64_t *)0x0 && (param_2 != *puVar3))) {
      puVar2 = puVar3 + 1;
      puVar3 = (uint64_t *)*puVar2;
    }
    puVar7 = puVar6;
    if (puVar3 != (uint64_t *)0x0) {
      do {
        puVar4 = puVar3;
        if (param_2 != *puVar4) break;
        *puVar2 = puVar4[1];
        puVar4[1] = (uint64_t)puVar7;
        plVar1 = (int64_t *)(lVar8 + 0x18);
        *plVar1 = *plVar1 + -1;
        puVar3 = (uint64_t *)*puVar2;
        puVar7 = puVar4;
      } while ((uint64_t *)*puVar2 != (uint64_t *)0x0);
      if (puVar7 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar7);
      }
    }
  }
  if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x188)) {
      do {
        FUN_180204e40(lVar8,param_2 + (int64_t)(int)puVar6 * 0x18);
        uVar5 = (int)puVar6 + 1;
        puVar6 = (uint64_t *)(uint64_t)uVar5;
        lVar8 = core_system_data_config;
      } while ((int)uVar5 < *(int *)(param_2 + 0x188));
    }
    FUN_1808fc8a8(param_2,0x18,0x10,FUN_1800586e0,uVar9);
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



