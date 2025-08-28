#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part176.c - 核心引擎第176部分代码美化
// 
// 本文件包含9个函数，主要功能：
// 1. 容器结构清理和销毁
// 2. 碰撞检测和匹配
// 3. 游戏对象属性处理
// 4. 内存管理相关操作

/**
 * @brief 清理容器结构中的元素
 * 
 * @param 容器指针 指向要清理的容器结构
 * 
 * 该函数遍历容器中的所有元素，调用销毁函数清理资源，
 * 并重置容器状态。用于释放容器占用的内存和资源。
 */
void 清理容器元素(longlong 容器指针)
{
  int *引用计数指针;
  longlong 元素指针;
  uint64_t *数组指针;
  longlong 偏移量;
  ulonglong 元素数量;
  ulonglong 索引;
  
  元素数量 = *(ulonglong *)(容器指针 + 0x10);
  元素指针 = *(longlong *)(容器指针 + 8);
  索引 = 0;
  if (元素数量 != 0) {
    do {
      元素指针 = *(longlong *)(元素指针 + 索引 * 8);
      if (元素指针 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(元素指针);
      }
      *(uint64_t *)(元素指针 + 索引 * 8) = 0;
      索引 = 索引 + 1;
    } while (索引 < 元素数量);
    元素数量 = *(ulonglong *)(容器指针 + 0x10);
  }
  *(uint64_t *)(容器指针 + 0x18) = 0;
  if ((1 < 元素数量) && (数组指针 = *(uint64_t **)(容器指针 + 8), 数组指针 != (uint64_t *)0x0)) {
    元素数量 = (ulonglong)数组指针 & 0xffffffffffc00000;
    if (元素数量 != 0) {
      偏移量 = 元素数量 + 0x80 + ((longlong)数组指针 - 元素数量 >> 0x10) * 0x50;
      偏移量 = 偏移量 - (ulonglong)*(uint *)(偏移量 + 4);
      if ((*(void ***)(元素数量 + 0x70) == &ExceptionList) && (*(char *)(偏移量 + 0xe) == '\0')) {
        *数组指针 = *(uint64_t *)(偏移量 + 0x20);
        *(uint64_t **)(偏移量 + 0x20) = 数组指针;
        引用计数指针 = (int *)(偏移量 + 0x18);
        *引用计数指针 = *引用计数指针 + -1;
        if (*引用计数指针 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(元素数量,CONCAT71(0xff000000,*(void ***)(元素数量 + 0x70) == &ExceptionList),
                            数组指针,元素数量,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}

/**
 * @brief 销毁容器结构
 * 
 * @param 容器指针 指向要销毁的容器结构
 * 
 * 该函数功能与清理容器元素函数相同，用于销毁容器结构
 * 并释放相关资源。两个函数实现完全一致。
 */
void 销毁容器结构(longlong 容器指针)
{
  int *引用计数指针;
  longlong 元素指针;
  uint64_t *数组指针;
  longlong 偏移量;
  ulonglong 元素数量;
  ulonglong 索引;
  
  元素数量 = *(ulonglong *)(容器指针 + 0x10);
  元素指针 = *(longlong *)(容器指针 + 8);
  索引 = 0;
  if (元素数量 != 0) {
    do {
      元素指针 = *(longlong *)(元素指针 + 索引 * 8);
      if (元素指针 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(元素指针);
      }
      *(uint64_t *)(元素指针 + 索引 * 8) = 0;
      索引 = 索引 + 1;
    } while (索引 < 元素数量);
    元素数量 = *(ulonglong *)(容器指针 + 0x10);
  }
  *(uint64_t *)(容器指针 + 0x18) = 0;
  if ((1 < 元素数量) && (数组指针 = *(uint64_t **)(容器指针 + 8), 数组指针 != (uint64_t *)0x0)) {
    元素数量 = (ulonglong)数组指针 & 0xffffffffffc00000;
    if (元素数量 != 0) {
      偏移量 = 元素数量 + 0x80 + ((longlong)数组指针 - 元素数量 >> 0x10) * 0x50;
      偏移量 = 偏移量 - (ulonglong)*(uint *)(偏移量 + 4);
      if ((*(void ***)(元素数量 + 0x70) == &ExceptionList) && (*(char *)(偏移量 + 0xe) == '\0')) {
        *数组指针 = *(uint64_t *)(偏移量 + 0x20);
        *(uint64_t **)(偏移量 + 0x20) = 数组指针;
        引用计数指针 = (int *)(偏移量 + 0x18);
        *引用计数指针 = *引用计数指针 + -1;
        if (*引用计数指针 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(元素数量,CONCAT71(0xff000000,*(void ***)(元素数量 + 0x70) == &ExceptionList),
                            数组指针,元素数量,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}

/**
 * @brief 处理游戏对象属性和参数
 * 
 * @param 对象指针 指向游戏对象
 * @param 参数类型 参数类型标识
 * @param 参数数组 参数数组指针
 * 
 * 该函数处理游戏对象的属性设置和参数匹配，包括：
 * 1. 过滤和验证参数
 * 2. 添加必需的参数类型
 * 3. 在对象表中查找匹配项
 * 4. 设置对象属性
 */
void 处理游戏对象属性(longlong 对象指针,int 参数类型,int *参数数组)
{
  uint64_t 临时数据1;
  longlong *对象表指针;
  uint64_t 临时数据2;
  uint64_t 临时数据3;
  uint64_t 临时数据4;
  uint64_t 临时数据5;
  uint64_t 临时数据6;
  uint64_t 临时数据7;
  uint64_t 临时数据8;
  bool 是否找到;
  int 临时索引;
  uint 过滤后数量;
  int *当前参数;
  int *比较参数;
  int 循环索引;
  int 匹配索引;
  longlong 当前对象;
  uint 参数ID;
  longlong *对象迭代器;
  longlong 目标对象;
  int 对象参数数量;
  longlong 参数偏移;
  uint 当前参数ID;
  int *参数指针;
  ulonglong 剩余数量;
  int 栈变量18;
  int32_t 栈变量1c;
  longlong 栈变量20;
  longlong 栈数组60 [4];
  
  过滤后数量 = 参数数组[0xc];
  参数指针 = (int *)(longlong)(int)过滤后数量;
  参数ID = 过滤后数量;
  if (1 < (int)过滤后数量) {
    匹配索引 = 0;
    对象参数数量 = 0;
    比较参数 = 参数数组;
    if (0 < (int)过滤后数量) {
      do {
        当前参数 = (int *)&unknown_var_7568_ptr;
        循环索引 = 0;
        do {
          if (*比较参数 == *当前参数) goto LAB_180160234;
          循环索引 = 循环索引 + 1;
          当前参数 = 当前参数 + 1;
        } while ((longlong)当前参数 < 0x18098d77c);
        循环索引 = -1;
LAB_180160234:
        临时索引 = 匹配索引 + 1;
        if (循环索引 < 0) {
          临时索引 = 匹配索引;
        }
        匹配索引 = 临时索引;
        对象参数数量 = 对象参数数量 + 1;
        比较参数 = 比较参数 + 1;
      } while (对象参数数量 < (int)过滤后数量);
    }
    参数ID = 过滤后数量 - 匹配索引;
  }
  匹配索引 = 0;
  比较参数 = 参数数组;
  if (0 < (int)过滤后数量) {
    do {
      if (*比较参数 == 0x38) goto LAB_18016028e;
      匹配索引 = 匹配索引 + 1;
      比较参数 = 比较参数 + 1;
    } while (匹配索引 < (int)过滤后数量);
  }
  参数数组[(longlong)参数指针] = 0x38;
  参数数组[(longlong)参数指针 + 6] = 3;
  过滤后数量 = 过滤后数量 + 1;
  参数指针 = (int *)((longlong)参数指针 + 1);
LAB_18016028e:
  匹配索引 = 参数数组[0xc];
  是否找到 = false;
  对象参数数量 = 0;
  比较参数 = 参数数组;
  if (0 < 匹配索引) {
    do {
      if (*比较参数 == 0x1d) {
        是否找到 = true;
        break;
      }
      对象参数数量 = 对象参数数量 + 1;
      比较参数 = 比较参数 + 1;
    } while (对象参数数量 < 匹配索引);
  }
  if (!是否找到) {
    参数数组[(longlong)参数指针] = 0x1d;
    过滤后数量 = 过滤后数量 + 1;
    参数数组[(longlong)参数指针 + 6] = 3;
    参数指针 = (int *)((longlong)参数指针 + 1);
    匹配索引 = 参数数组[0xc];
  }
  对象参数数量 = 0;
  比较参数 = 参数数组;
  if (0 < 匹配索引) {
    do {
      if (*比较参数 == 0x2a) goto LAB_180160304;
      对象参数数量 = 对象参数数量 + 1;
      比较参数 = 比较参数 + 1;
    } while (对象参数数量 < 匹配索引);
  }
  参数数组[(longlong)参数指针] = 0x2a;
  过滤后数量 = 过滤后数量 + 1;
  参数数组[(longlong)参数指针 + 6] = 3;
LAB_180160304:
  参数数组[0xc] = 过滤后数量;
  对象表指针 = *(longlong **)(对象指针 + 0x58);
  当前对象 = *对象表指针;
  对象迭代器 = 对象表指针;
  if (当前对象 == 0) {
    当前对象 = 对象表指针[1];
    while (对象迭代器 = 对象迭代器 + 1, 当前对象 == 0) {
      当前对象 = 对象迭代器[1];
    }
  }
  栈变量20 = 对象表指针[*(longlong *)(对象指针 + 0x60)];
  do {
    if (当前对象 == 栈变量20) {
      临时数据1 = *(uint64_t *)参数数组;
      临时数据2 = *(uint64_t *)(参数数组 + 2);
      栈变量18 = CONCAT44((int)((ulonglong)参数数组 >> 0x20),参数类型);
      临时数据3 = *(uint64_t *)(参数数组 + 4);
      临时数据4 = *(uint64_t *)(参数数组 + 6);
      临时数据5 = *(uint64_t *)(参数数组 + 8);
      临时数据6 = *(uint64_t *)(参数数组 + 10);
      临时数据7 = *(uint64_t *)(参数数组 + 0xc);
      FUN_180160af0(对象指针 + 0x50,栈数组60,参数指针,&栈变量18,(longlong)参数类型);
      *(uint64_t *)(栈数组60[0] + 4) = 临时数据1;
      *(uint64_t *)(栈数组60[0] + 0xc) = 临时数据2;
      *(uint64_t *)(栈数组60[0] + 0x14) = 临时数据3;
      *(uint64_t *)(栈数组60[0] + 0x1c) = 临时数据4;
      *(uint64_t *)(栈数组60[0] + 0x24) = 临时数据5;
      *(uint64_t *)(栈数组60[0] + 0x2c) = 临时数据6;
      *(uint64_t *)(栈数组60[0] + 0x34) = 临时数据7;
      return;
    }
    比较参数 = 参数数组 + 6;
    参数ID = 0;
    if (0 < (int)过滤后数量) {
      参数偏移 = (longlong)参数数组 - (longlong)比较参数;
      剩余数量 = (ulonglong)过滤后数量;
      do {
        目标对象 = 0;
        if (0 < *(int *)(当前对象 + 0x34)) {
          匹配索引 = *(int *)(参数偏移 + (longlong)比较参数);
          参数指针 = (int *)(当前对象 + 0x1c);
          do {
            if (匹配索引 == 参数指针[-6]) {
              if (参数ID == 1) {
LAB_1801604d9:
                if (*比较参数 != *参数指针) goto LAB_1801604e5;
              }
              else {
                对象参数数量 = 0;
                当前参数 = (int *)&unknown_var_7568_ptr;
                while (匹配索引 != *当前参数) {
                  对象参数数量 = 对象参数数量 + 1;
                  当前参数 = 当前参数 + 1;
                  if (0x18098d77b < (longlong)当前参数) goto LAB_1801603d8;
                }
                if (-1 < 对象参数数量) goto LAB_1801604d9;
              }
LAB_1801603d8:
              参数ID = 参数ID + 1;
              break;
            }
LAB_1801604e5:
            目标对象 = 目标对象 + 1;
            参数指针 = 参数指针 + 1;
          } while (目标对象 < *(int *)(当前对象 + 0x34));
        }
        比较参数 = 比较参数 + 1;
        剩余数量 = 剩余数量 - 1;
      } while (剩余数量 != 0);
    }
    if ((*(uint *)(当前对象 + 0x34) == 过滤后数量) && (参数ID == *(uint *)(当前对象 + 0x34))) {
      return;
    }
    当前对象 = *(longlong *)(当前对象 + 0x40);
    while (当前对象 == 0) {
      对象表指针 = 对象迭代器 + 1;
      对象迭代器 = 对象迭代器 + 1;
      当前对象 = *对象表指针;
    }
  } while( true );
}

/**
 * @brief 处理对象参数匹配和属性设置
 * 
 * @param 对象指针 指向游戏对象
 * @param 未知参数1 未知参数
 * @param 参数数组 参数数组指针
 * 
 * 该函数处理对象参数匹配，在对象链表中查找匹配项并设置属性。
 * 这是一个简化实现，原始实现包含大量寄存器变量和复杂逻辑。
 */
void 处理对象参数匹配(longlong 对象指针,uint64_t 未知参数1,int *参数数组)
{
  longlong *对象表指针;
  uint64_t 临时数据1;
  int 临时索引;
  uint64_t 寄存器RAX;
  int *当前参数;
  int *比较参数;
  int 循环索引;
  longlong 寄存器RBX;
  char 寄存器BPL;
  int 寄存器ESI;
  uint 匹配计数;
  longlong 寄存器RDI;
  longlong 当前对象;
  longlong 寄存器R11;
  longlong 目标对象;
  uint 寄存器R13D;
  uint64_t *寄存器R14;
  ulonglong 剩余数量;
  uint64_t 栈变量38;
  uint64_t 栈变量40;
  uint64_t 栈变量48;
  uint64_t 栈变量50;
  uint64_t 栈变量58;
  uint64_t 栈变量60;
  longlong 栈变量68;
  longlong 栈变量d0;
  int 栈变量d8;
  int 栈变量e0;
  longlong 栈变量e8;
  
  栈变量e8 = *(longlong *)(对象指针 + *(longlong *)(寄存器R11 + 0x60) * 8);
  if (寄存器RBX != 栈变量e8) {
    当前参数 = (int *)(寄存器R14 + 3);
    do {
      匹配计数 = 0;
      if (0 < (int)寄存器R13D) {
        目标对象 = (longlong)寄存器R14 - (longlong)当前参数;
        剩余数量 = (ulonglong)寄存器R13D;
        do {
          当前对象 = 0;
          if (0 < *(int *)(寄存器RBX + 0x34)) {
            临时索引 = *(int *)(目标对象 + (longlong)当前参数);
            参数数组 = (int *)(寄存器RBX + 0x1c);
            do {
              if (临时索引 == 参数数组[-6]) {
                if (寄存器BPL == '\0') {
                  循环索引 = 0;
                  比较参数 = (int *)&unknown_var_7568_ptr;
                  while (临时索引 != *比较参数) {
                    循环索引 = 循环索引 + 1;
                    比较参数 = 比较参数 + 1;
                    if (栈变量d0 <= (longlong)比较参数) goto LAB_1801603d8;
                  }
                  if (-1 < 循环索引) goto LAB_1801604d9;
                }
                else {
LAB_1801604d9:
                  if (*当前参数 != *参数数组) goto LAB_1801604e5;
                }
LAB_1801603d8:
                匹配计数 = 匹配计数 + 1;
                break;
              }
LAB_1801604e5:
              当前对象 = 当前对象 + 1;
              参数数组 = 参数数组 + 1;
            } while (当前对象 < *(int *)(寄存器RBX + 0x34));
          }
          当前参数 = 当前参数 + 1;
          剩余数量 = 剩余数量 - 1;
          寄存器R14 = 栈变量e0;
        } while (剩余数量 != 0);
      }
      if ((*(uint *)(寄存器RBX + 0x34) == 寄存器R13D) && (匹配计数 == *(uint *)(寄存器RBX + 0x34))) {
        return;
      }
      寄存器RBX = *(longlong *)(寄存器RBX + 0x40);
      while (寄存器RBX == 0) {
        对象表指针 = (longlong *)(寄存器RDI + 8);
        寄存器RDI = 寄存器RDI + 8;
        寄存器RBX = *对象表指针;
      }
      当前参数 = (int *)(寄存器R14 + 3);
      寄存器ESI = 栈变量d8;
    } while (寄存器RBX != 栈变量e8);
  }
  栈变量38 = *寄存器R14;
  栈变量40 = 寄存器R14[1];
  栈变量48 = 寄存器R14[2];
  栈变量50 = 寄存器R14[3];
  栈变量58 = 寄存器R14[4];
  栈变量60 = 寄存器R14[5];
  临时数据1 = 寄存器R14[6];
  栈变量e0 = 寄存器ESI;
  FUN_180160af0(寄存器RAX,&栈变量68,参数数组,&栈变量e0,(longlong)寄存器ESI);
  *(uint64_t *)(栈变量68 + 4) = 栈变量38;
  *(uint64_t *)(栈变量68 + 0xc) = 栈变量40;
  *(uint64_t *)(栈变量68 + 0x14) = 栈变量48;
  *(uint64_t *)(栈变量68 + 0x1c) = 栈变量50;
  *(uint64_t *)(栈变量68 + 0x24) = 栈变量58;
  *(uint64_t *)(栈变量68 + 0x2c) = 栈变量60;
  *(uint64_t *)(栈变量68 + 0x34) = 临时数据1;
  return;
}

/**
 * @brief 检查碰撞属性匹配
 * 
 * @param 属性ID 属性标识符
 * @param 对象ID 对象标识符
 * @return char 匹配结果，0x01表示匹配，0x00表示不匹配
 * 
 * 该函数检查指定对象的碰撞属性是否匹配给定的属性ID。
 * 包含复杂的碰撞检测逻辑和属性验证。
 */
char 检查碰撞属性匹配(int32_t 属性ID,int 对象ID)
{
  float *浮点指针;
  uint 属性索引;
  char 匹配结果;
  int *对象指针;
  longlong 哈希表指针;
  uint64_t *数组指针;
  ulonglong 数组大小;
  int 循环索引;
  longlong 当前对象;
  bool 条件标志;
  int32_t 额外输出;
  
  哈希表指针 = core_system_data_ui[0xb];
  for (对象指针 = *(int **)(哈希表指针 + ((ulonglong)(longlong)对象ID %
                                  (ulonglong)*(uint *)(core_system_data_ui + 0xc)) * 8);
      对象指针 != (int *)0x0; 对象指针 = *(int **)(对象指针 + 0x10)) {
    if (对象ID == *对象指针) {
      哈希表指针 = core_system_data_ui[0xc];
      goto LAB_180160546;
    }
  }
  哈希表指针 = core_system_data_ui[0xc];
  对象指针 = *(int **)(哈希表指针 + 哈希表指针 * 8);
LAB_180160546:
  if (对象指针 == *(int **)(哈希表指针 + 哈希表指针 * 8)) {
    return '\0';
  }
  if ((char)对象指针[0xe] != '\0') {
    数组指针 = (uint64_t *)*core_system_data_ui;
    数组大小 = core_system_data_ui[1] - (longlong)数组指针 >> 3;
    循环索引 = 0;
    if (数组大小 != 0) {
      do {
        匹配结果 = FUN_1801605f0(属性ID,*数组指针,对象指针 + 1);
        if (匹配结果 != '\0') {
          return '\x01';
        }
        循环索引 = 循环索引 + 1;
        数组指针 = 数组指针 + 1;
        属性ID = 额外输出;
      } while ((ulonglong)(longlong)循环索引 < 数组大小);
    }
    return '\0';
  }
  匹配结果 = '\x01';
  if (0 < (longlong)对象指针[0xd]) {
    哈希表指针 = 0;
    do {
      属性索引 = (对象指针 + 1)[哈希表指针];
      数组大小 = (ulonglong)属性索引;
      当前对象 = 0;
      循环索引 = 对象指针[哈希表指针 + 7];
      do {
        if (属性索引 == *(uint *)(&unknown_var_7568_ptr + 当前对象 * 4)) goto LAB_18016064a;
        当前对象 = 当前对象 + 1;
      } while (当前对象 < 3);
      当前对象 = -1;
LAB_18016064a:
      if (循环索引 == 0) {
        if (当前对象 < 0) {
          if (匹配结果 != '\0') {
LAB_180160689:
            if ((*(char *)(core_system_data_ui + 0x18 + 数组大小 * 0x18) == '\0') &&
               ((浮点指针 = (float *)(core_system_data_ui + 4 + 数组大小 * 0x18),
                0.7 < *浮点指针 || *浮点指针 == 0.7 ||
                ((*(byte *)(core_system_data_ui + 0x14 + 数组大小 * 0x18) & 1) != 0)))) goto LAB_180160797;
          }
          goto LAB_1801606a6;
        }
        if (匹配结果 == '\0') goto LAB_1801606a6;
        if ((*(char *)(core_system_data_ui + 0x18 + 数组大小 * 0x18) != '\0') ||
           ((浮点指针 = (float *)(core_system_data_ui + 4 + 数组大小 * 0x18), *浮点指针 <= 0.7 && *浮点指针 != 0.7
            && ((*(byte *)(core_system_data_ui + 0x14 + 数组大小 * 0x18) & 1) == 0)))) {
          数组大小 = (ulonglong)*(uint *)(&unknown_var_7584_ptr + 当前对象 * 4);
          goto LAB_180160689;
        }
LAB_180160797:
        匹配结果 = '\x01';
      }
      else {
        if (循环索引 == 1) {
          if ((匹配结果 != '\0') && (*(char *)(core_system_data_ui + 0x18 + 数组大小 * 0x18) == '\0')) {
            浮点指针 = (float *)(core_system_data_ui + 4 + 数组大小 * 0x18);
            if ((0.7 < *浮点指针 || *浮点指针 == 0.7) &&
               (浮点指针 = (float *)(core_system_data_ui + 0xc + 数组大小 * 0x18),
               *浮点指针 <= 0.7 && *浮点指针 != 0.7)) goto LAB_180160797;
LAB_1801606f2:
            条件标志 = (*(byte *)(core_system_data_ui + 0x14 + 数组大小 * 0x18) & 3) == 3;
LAB_180160791:
            if (条件标志) goto LAB_180160797;
          }
        }
        else if (循环索引 == 2) {
          if ((匹配结果 != '\0') && (*(char *)(core_system_data_ui + 0x18 + 数组大小 * 0x18) == '\0')) {
            浮点指针 = (float *)(core_system_data_ui + 4 + 数组大小 * 0x18);
            if (0.7 < *浮点指针 || *浮点指针 == 0.7) goto LAB_1801606f2;
            浮点指针 = (float *)(core_system_data_ui + 0xc + 数组大小 * 0x18);
            if (0.7 < *浮点指针 || *浮点指针 == 0.7) goto LAB_180160797;
            条件标志 = (*(byte *)(core_system_data_ui + 0x14 + 数组大小 * 0x18) & 3) == 3;
            goto LAB_180160791;
          }
        }
        else {
          if (循环索引 != 3) goto LAB_1801606a8;
          if ((匹配结果 != '\0') &&
             ((*(char *)(core_system_data_ui + 0x18 + 数组大小 * 0x18) != '\0' ||
              ((浮点指针 = (float *)(core_system_data_ui + 4 + 数组大小 * 0x18),
               *浮点指针 <= 0.7 && *浮点指针 != 0.7 &&
               ((*(byte *)(core_system_data_ui + 0x14 + 数组大小 * 0x18) & 1) == 0)))))) {
            if ((当前对象 < 0) ||
               (数组大小 = (ulonglong)*(uint *)(&unknown_var_7584_ptr + 当前对象 * 4),
               *(char *)(core_system_data_ui + 0x18 + 数组大小 * 0x18) != '\0')) goto LAB_180160797;
            浮点指针 = (float *)(core_system_data_ui + 4 + 数组大小 * 0x18);
            if (*浮点指针 <= 0.7 && *浮点指针 != 0.7) {
              条件标志 = (*(byte *)(core_system_data_ui + 0x14 + 数组大小 * 0x18) & 1) == 0;
              goto LAB_180160791;
            }
          }
        }
LAB_1801606a6:
        匹配结果 = '\0';
      }
LAB_1801606a8:
      哈希表指针 = 哈希表指针 + 1;
    } while (哈希表指针 < 对象指针[0xd]);
  }
  return 匹配结果;
}

/**
 * @brief 验证对象碰撞属性
 * 
 * @param 属性ID 属性标识符
 * @return char 验证结果，0x01表示验证通过，0x00表示验证失败
 * 
 * 该函数验证对象的碰撞属性是否符合要求。
 * 这是一个简化实现，原始实现包含复杂的寄存器变量和条件判断。
 */
char 验证对象碰撞属性(int32_t 属性ID)
{
  float *浮点指针;
  uint 属性索引;
  char 验证结果;
  longlong 寄存器RAX;
  longlong 当前对象;
  uint64_t *数组指针;
  longlong *寄存器RSI;
  ulonglong 数组大小;
  int 循环索引;
  longlong 哈希表指针;
  bool 寄存器ZF;
  bool 条件标志;
  int32_t 额外输出;
  
  if (!寄存器ZF) {
    数组指针 = (uint64_t *)*寄存器RSI;
    数组大小 = 寄存器RSI[1] - (longlong)数组指针 >> 3;
    循环索引 = 0;
    if (数组大小 != 0) {
      do {
        验证结果 = FUN_1801605f0(属性ID,*数组指针,寄存器RAX + 4);
        if (验证结果 != '\0') {
          return '\x01';
        }
        循环索引 = 循环索引 + 1;
        数组指针 = 数组指针 + 1;
        属性ID = 额外输出;
      } while ((ulonglong)(longlong)循环索引 < 数组大小);
    }
    return '\0';
  }
  验证结果 = '\x01';
  if (0 < (longlong)*(int *)(寄存器RAX + 0x34)) {
    哈希表指针 = 0;
    do {
      属性索引 = *(uint *)(寄存器RAX + 4 + 哈希表指针 * 4);
      数组大小 = (ulonglong)属性索引;
      当前对象 = 0;
      循环索引 = *(int *)(寄存器RAX + 0x1c + 哈希表指针 * 4);
      do {
        if (属性索引 == *(uint *)(&unknown_var_7568_ptr + 当前对象 * 4)) goto LAB_18016064a;
        当前对象 = 当前对象 + 1;
      } while (当前对象 < 3);
      当前对象 = -1;
LAB_18016064a:
      if (循环索引 == 0) {
        if (当前对象 < 0) {
          if (验证结果 != '\0') {
LAB_180160689:
            if ((*(char *)(core_system_data_ui + 0x18 + 数组大小 * 0x18) == '\0') &&
               ((浮点指针 = (float *)(core_system_data_ui + 4 + 数组大小 * 0x18),
                0.7 < *浮点指针 || *浮点指针 == 0.7 ||
                ((*(byte *)(core_system_data_ui + 0x14 + 数组大小 * 0x18) & 1) != 0)))) goto LAB_180160797;
          }
          goto LAB_1801606a6;
        }
        if (验证结果 == '\0') goto LAB_1801606a6;
        if ((*(char *)(core_system_data_ui + 0x18 + 数组大小 * 0x18) != '\0') ||
           ((浮点指针 = (float *)(core_system_data_ui + 4 + 数组大小 * 0x18), *浮点指针 <= 0.7 && *浮点指针 != 0.7
            && ((*(byte *)(core_system_data_ui + 0x14 + 数组大小 * 0x18) & 1) == 0)))) {
          数组大小 = (ulonglong)*(uint *)(&unknown_var_7584_ptr + 当前对象 * 4);
          goto LAB_180160689;
        }
LAB_180160797:
        验证结果 = '\x01';
      }
      else {
        if (循环索引 == 1) {
          if ((验证结果 != '\0') && (*(char *)(core_system_data_ui + 0x18 + 数组大小 * 0x18) == '\0')) {
            浮点指针 = (float *)(core_system_data_ui + 4 + 数组大小 * 0x18);
            if ((0.7 < *浮点指针 || *浮点指针 == 0.7) &&
               (浮点指针 = (float *)(core_system_data_ui + 0xc + 数组大小 * 0x18),
               *浮点指针 <= 0.7 && *浮点指针 != 0.7)) goto LAB_180160797;
LAB_1801606f2:
            条件标志 = (*(byte *)(core_system_data_ui + 0x14 + 数组大小 * 0x18) & 3) == 3;
LAB_180160791:
            if (条件标志) goto LAB_180160797;
          }
        }
        else if (循环索引 == 2) {
          if ((验证结果 != '\0') && (*(char *)(core_system_data_ui + 0x18 + 数组大小 * 0x18) == '\0')) {
            浮点指针 = (float *)(core_system_data_ui + 4 + 数组大小 * 0x18);
            if (0.7 < *浮点指针 || *浮点指针 == 0.7) goto LAB_1801606f2;
            浮点指针 = (float *)(core_system_data_ui + 0xc + 数组大小 * 0x18);
            if (0.7 < *浮点指针 || *浮点指针 == 0.7) goto LAB_180160797;
            条件标志 = (*(byte *)(core_system_data_ui + 0x14 + 数组大小 * 0x18) & 3) == 3;
            goto LAB_180160791;
          }
        }
        else {
          if (循环索引 != 3) goto LAB_1801606a8;
          if ((验证结果 != '\0') &&
             ((*(char *)(core_system_data_ui + 0x18 + 数组大小 * 0x18) != '\0' ||
              ((浮点指针 = (float *)(core_system_data_ui + 4 + 数组大小 * 0x18),
               *浮点指针 <= 0.7 && *浮点指针 != 0.7 &&
               ((*(byte *)(core_system_data_ui + 0x14 + 数组大小 * 0x18) & 1) == 0)))))) {
            if ((当前对象 < 0) ||
               (数组大小 = (ulonglong)*(uint *)(&unknown_var_7584_ptr + 当前对象 * 4),
               *(char *)(core_system_data_ui + 0x18 + 数组大小 * 0x18) != '\0')) goto LAB_180160797;
            浮点指针 = (float *)(core_system_data_ui + 4 + 数组大小 * 0x18);
            if (*浮点指针 <= 0.7 && *浮点指针 != 0.7) {
              条件标志 = (*(byte *)(core_system_data_ui + 0x14 + 数组大小 * 0x18) & 1) == 0;
              goto LAB_180160791;
            }
          }
        }
LAB_1801606a6:
        验证结果 = '\0';
      }
LAB_1801606a8:
      哈希表指针 = 哈希表指针 + 1;
    } while (哈希表指针 < *(int *)(寄存器RAX + 0x34));
  }
  return 验证结果;
}

/**
 * @brief 获取常量值
 * 
 * @return int8_t 返回常量值1
 * 
 * 这是一个简单的常量返回函数，始终返回1。
 */
int8_t 获取常量值(void)
{
  return 1;
}

/**
 * @brief 处理对象属性验证
 * 
 * 该函数处理对象属性的验证逻辑，包括碰撞检测和属性匹配。
 * 这是一个简化实现，原始实现包含大量寄存器变量和复杂逻辑。
 */
void 处理对象属性验证(void)
{
  float *浮点指针;
  uint 属性索引;
  int 循环索引;
  ulonglong 数组大小;
  longlong 当前对象;
  longlong 寄存器RBP;
  longlong 哈希表指针;
  bool 验证结果;
  
  验证结果 = true;
  if (0 < (longlong)*(int *)(寄存器RBP + 0x30)) {
    哈希表指针 = 0;
    do {
      属性索引 = *(uint *)(寄存器RBP + 哈希表指针 * 4);
      数组大小 = (ulonglong)属性索引;
      当前对象 = 0;
      循环索引 = *(int *)(寄存器RBP + 0x18 + 哈希表指针 * 4);
      do {
        if (属性索引 == *(uint *)(&unknown_var_7568_ptr + 当前对象 * 4)) goto LAB_18016064a;
        当前对象 = 当前对象 + 1;
      } while (当前对象 < 3);
      当前对象 = -1;
LAB_18016064a:
      if (循环索引 == 0) {
        if (当前对象 < 0) {
          if (验证结果) {
LAB_180160689:
            if ((*(char *)(core_system_data_ui + 0x18 + 数组大小 * 0x18) == '\0') &&
               ((浮点指针 = (float *)(core_system_data_ui + 4 + 数组大小 * 0x18),
                0.7 < *浮点指针 || *浮点指针 == 0.7 ||
                ((*(byte *)(core_system_data_ui + 0x14 + 数组大小 * 0x18) & 1) != 0)))) goto LAB_180160797;
          }
          goto LAB_1801606a6;
        }
        if (!验证结果) goto LAB_1801606a6;
        if ((*(char *)(core_system_data_ui + 0x18 + 数组大小 * 0x18) != '\0') ||
           ((浮点指针 = (float *)(core_system_data_ui + 4 + 数组大小 * 0x18), *浮点指针 <= 0.7 && *浮点指针 != 0.7
            && ((*(byte *)(core_system_data_ui + 0x14 + 数组大小 * 0x18) & 1) == 0)))) {
          数组大小 = (ulonglong)*(uint *)(&unknown_var_7584_ptr + 当前对象 * 4);
          goto LAB_180160689;
        }
LAB_180160797:
        验证结果 = true;
      }
      else {
        if (循环索引 == 1) {
          if ((验证结果) && (*(char *)(core_system_data_ui + 0x18 + 数组大小 * 0x18) == '\0')) {
            浮点指针 = (float *)(core_system_data_ui + 4 + 数组大小 * 0x18);
            if ((0.7 < *浮点指针 || *浮点指针 == 0.7) &&
               (浮点指针 = (float *)(core_system_data_ui + 0xc + 数组大小 * 0x18),
               *浮点指针 <= 0.7 && *浮点指针 != 0.7)) goto LAB_180160797;
LAB_1801606f2:
            验证结果 = (*(byte *)(core_system_data_ui + 0x14 + 数组大小 * 0x18) & 3) == 3;
LAB_180160791:
            if (验证结果) goto LAB_180160797;
          }
        }
        else if (循环索引 == 2) {
          if ((验证结果) && (*(char *)(core_system_data_ui + 0x18 + 数组大小 * 0x18) == '\0')) {
            浮点指针 = (float *)(core_system_data_ui + 4 + 数组大小 * 0x18);
            if (0.7 < *浮点指针 || *浮点指针 == 0.7) goto LAB_1801606f2;
            浮点指针 = (float *)(core_system_data_ui + 0xc + 数组大小 * 0x18);
            if (0.7 < *浮点指针 || *浮点指针 == 0.7) goto LAB_180160797;
            验证结果 = (*(byte *)(core_system_data_ui + 0x14 + 数组大小 * 0x18) & 3) == 3;
            goto LAB_180160791;
          }
        }
        else {
          if (循环索引 != 3) goto LAB_1801606a8;
          if ((验证结果) &&
             ((*(char *)(core_system_data_ui + 0x18 + 数组大小 * 0x18) != '\0' ||
              ((浮点指针 = (float *)(core_system_data_ui + 4 + 数组大小 * 0x18),
               *浮点指针 <= 0.7 && *浮点指针 != 0.7 &&
               ((*(byte *)(core_system_data_ui + 0x14 + 数组大小 * 0x18) & 1) == 0)))))) {
            if ((当前对象 < 0) ||
               (数组大小 = (ulonglong)*(uint *)(&unknown_var_7584_ptr + 当前对象 * 4),
               *(char *)(core_system_data_ui + 0x18 + 数组大小 * 0x18) != '\0')) goto LAB_180160797;
            浮点指针 = (float *)(core_system_data_ui + 4 + 数组大小 * 0x18);
            if (*浮点指针 <= 0.7 && *浮点指针 != 0.7) {
              验证结果 = (*(byte *)(core_system_data_ui + 0x14 + 数组大小 * 0x18) & 1) == 0;
              goto LAB_180160791;
            }
          }
        }
LAB_1801606a6:
        验证结果 = false;
      }
LAB_1801606a8:
      哈希表指针 = 哈希表指针 + 1;
    } while (哈希表指针 < *(int *)(寄存器RBP + 0x30));
  }
  return;
}

/**
 * @brief 验证属性匹配条件
 * 
 * @param 未知参数1 未知参数
 * @param 属性表指针 属性表指针
 * @param 对象指针 对象指针
 * 
 * 该函数验证属性匹配条件，用于碰撞检测和属性验证。
 * 这是一个简化实现，原始实现包含复杂的逻辑判断。
 */
void 验证属性匹配条件(uint64_t 未知参数1,longlong 属性表指针,longlong 对象指针)
{
  float *浮点指针;
  uint 属性索引;
  int 循环索引;
  ulonglong 数组大小;
  longlong 当前对象;
  longlong 哈希表指针;
  bool 验证结果;
  
  验证结果 = true;
  if (0 < (longlong)*(int *)(对象指针 + 0x30)) {
    哈希表指针 = 0;
    do {
      属性索引 = *(uint *)(对象指针 + 哈希表指针 * 4);
      数组大小 = (ulonglong)属性索引;
      当前对象 = 0;
      循环索引 = *(int *)(对象指针 + 0x18 + 哈希表指针 * 4);
      do {
        if (属性索引 == *(uint *)(&unknown_var_7568_ptr + 当前对象 * 4)) goto LAB_18016064a;
        当前对象 = 当前对象 + 1;
      } while (当前对象 < 3);
      当前对象 = -1;
LAB_18016064a:
      if (循环索引 == 0) {
        if (当前对象 < 0) {
          if (验证结果) {
LAB_180160689:
            if ((*(char *)(属性表指针 + 0x18 + 数组大小 * 0x18) == '\0') &&
               ((浮点指针 = (float *)(属性表指针 + 4 + 数组大小 * 0x18), 0.7 < *浮点指针 || *浮点指针 == 0.7 ||
                ((*(byte *)(属性表指针 + 0x14 + 数组大小 * 0x18) & 1) != 0)))) goto LAB_180160797;
          }
          goto LAB_1801606a6;
        }
        if (!验证结果) goto LAB_1801606a6;
        if ((*(char *)(属性表指针 + 0x18 + 数组大小 * 0x18) != '\0') ||
           ((浮点指针 = (float *)(属性表指针 + 4 + 数组大小 * 0x18), *浮点指针 <= 0.7 && *浮点指针 != 0.7 &&
            ((*(byte *)(属性表指针 + 0x14 + 数组大小 * 0x18) & 1) == 0)))) {
          数组大小 = (ulonglong)*(uint *)(&unknown_var_7584_ptr + 当前对象 * 4);
          goto LAB_180160689;
        }
LAB_180160797:
        验证结果 = true;
      }
      else {
        if (循环索引 == 1) {
          if ((验证结果) && (*(char *)(属性表指针 + 0x18 + 数组大小 * 0x18) == '\0')) {
            浮点指针 = (float *)(属性表指针 + 4 + 数组大小 * 0x18);
            if ((0.7 < *浮点指针 || *浮点指针 == 0.7) &&
               (浮点指针 = (float *)(属性表指针 + 0xc + 数组大小 * 0x18), *浮点指针 <= 0.7 && *浮点指针 != 0.7))
            goto LAB_180160797;
LAB_1801606f2:
            验证结果 = (*(byte *)(属性表指针 + 0x14 + 数组大小 * 0x18) & 3) == 3;
LAB_180160791:
            if (验证结果) goto LAB_180160797;
          }
        }
        else if (循环索引 == 2) {
          if ((验证结果) && (*(char *)(属性表指针 + 0x18 + 数组大小 * 0x18) == '\0')) {
            浮点指针 = (float *)(属性表指针 + 4 + 数组大小 * 0x18);
            if (0.7 < *浮点指针 || *浮点指针 == 0.7) goto LAB_1801606f2;
            浮点指针 = (float *)(属性表指针 + 0xc + 数组大小 * 0x18);
            if (0.7 < *浮点指针 || *浮点指针 == 0.7) goto LAB_180160797;
            验证结果 = (*(byte *)(属性表指针 + 0x14 + 数组大小 * 0x18) & 3) == 3;
            goto LAB_180160791;
          }
        }
        else {
          if (循环索引 != 3) goto LAB_1801606a8;
          if ((验证结果) &&
             ((*(char *)(属性表指针 + 0x18 + 数组大小 * 0x18) != '\0' ||
              ((浮点指针 = (float *)(属性表指针 + 4 + 数组大小 * 0x18), *浮点指针 <= 0.7 && *浮点指针 != 0.7 &&
               ((*(byte *)(属性表指针 + 0x14 + 数组大小 * 0x18) & 1) == 0)))))) {
            if ((当前对象 < 0) ||
               (数组大小 = (ulonglong)*(uint *)(&unknown_var_7584_ptr + 当前对象 * 4),
               *(char *)(属性表指针 + 0x18 + 数组大小 * 0x18) != '\0')) goto LAB_180160797;
            浮点指针 = (float *)(属性表指针 + 4 + 数组大小 * 0x18);
            if (*浮点指针 <= 0.7 && *浮点指针 != 0.7) {
              验证结果 = (*(byte *)(属性表指针 + 0x14 + 数组大小 * 0x18) & 1) == 0;
              goto LAB_180160791;
            }
          }
        }
LAB_1801606a6:
        验证结果 = false;
      }
LAB_1801606a8:
      哈希表指针 = 哈希表指针 + 1;
    } while (哈希表指针 < *(int *)(对象指针 + 0x30));
  }
  return;
}

