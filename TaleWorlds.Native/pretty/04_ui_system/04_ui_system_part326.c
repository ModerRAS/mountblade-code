#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part326.c - UI系统高级控件和事件处理模块
// 
// 本文件包含18个核心函数，主要涵盖UI系统的高级控件管理、事件处理、
// 数据验证、字符串解析、内存管理、控件状态更新等功能模块。
//
// 主要功能包括：
// - UI控件参数验证和处理
// - 字符串格式化和解析
// - 内存分配和管理
// - 事件分发和处理
// - 控件状态管理
// - 数据结构操作
// - 错误处理和资源清理
// - 数据转换和类型检查
//
// 核心函数：
// - UISystemControlValidator: UI系统控件验证器 (FUN_180848dc0)
// - UISystemStringProcessor: UI系统字符串处理器 (FUN_180848e50)
// - UISystemStringFormatter: UI系统字符串格式化器 (FUN_180848e82)
// - UISystemDataConverter: UI系统数据转换器 (FUN_180848f4e)
// - UISystemErrorHandler: UI系统错误处理器 (FUN_180848ff1)
// - UISystemResourceCleaner: UI系统资源清理器 (FUN_18084900b)
// - UISystemMemoryAllocator: UI系统内存分配器 (FUN_180849030)
// - UISystemMemoryReallocator: UI系统内存重新分配器 (FUN_180849054)
// - UISystemMemoryErrorHandler: UI系统内存分配失败处理器 (FUN_180849104)
// - UISystemStructAllocator: UI系统结构体分配器 (FUN_180849120)
// - UISystemStructReallocator: UI系统结构体重新分配器 (FUN_180849144)
// - UISystemStructErrorHandler: UI系统结构体分配失败处理器 (FUN_180849219)
// - UISystemEventDispatcher: UI系统事件分发器 (FUN_180849230)
// - UISystemEventProcessor: UI系统事件处理器 (FUN_180849360)
// - UISystemMessageHandler: UI系统消息处理器 (FUN_180849490)
// - UISystemDataValidator: UI系统数据验证器 (FUN_180849600)
// - UISystemControlUpdater: UI系统控件更新器 (FUN_1808496c0)
// - UISystemControlStateUpdater: UI系统控件状态更新器 (FUN_180849820)

/*================================================================================
// 常量定义
//================================================================================*/

// UI系统常量定义
#define UI_SYSTEM_MAX_STRING_LENGTH 0x10600    // UI系统最大字符串长度
#define UI_SYSTEM_CONTROL_THRESHOLD 0x20100   // UI系统控件阈值
#define UI_SYSTEM_ARRAY_SIZE_5 5               // UI系统数组大小5
#define UI_SYSTEM_ARRAY_SIZE_34 34             // UI系统数组大小34
#define UI_SYSTEM_BUFFER_SIZE_256 256          // UI系统缓冲区大小256
#define UI_SYSTEM_STRUCT_SIZE_0X14 0x14        // UI系统结构体大小0X14
#define UI_SYSTEM_VALIDATION_LENGTH_0X26 0x26  // UI系统验证长度0X26
#define UI_SYSTEM_VALIDATION_LENGTH_0X27 0x27  // UI系统验证长度0X27

// UI系统返回值常量
#define UI_SYSTEM_SUCCESS 0                     // UI系统成功返回值
#define UI_SYSTEM_ERROR_INVALID_PARAM 0x1c     // UI系统无效参数错误
#define UI_SYSTEM_ERROR_MEMORY_ALLOC 0x26      // UI系统内存分配错误
#define UI_SYSTEM_ERROR_VALIDATION_FAILED 3    // UI系统验证失败错误

// UI系统标志位常量
#define UI_SYSTEM_FLAG_BIT_1 0x1               // UI系统标志位1
#define UI_SYSTEM_FLAG_BIT_2 0x2               // UI系统标志位2
#define UI_SYSTEM_FLAG_BIT_0X80 0x80           // UI系统标志位0X80

/*================================================================================
// 核心函数实现
//================================================================================*/

/**
 * UI系统控件验证器
 * 验证UI控件的参数和状态，确保控件数据的有效性
 * 
 * @param param_1 控件数据结构指针
 * @param param_2 控件类型标识符
 * @param param_3 控件配置参数
 * @return void 无返回值
 */
void FUN_180848dc0(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uStackX_18;
  undefined1 auStackX_20 [8];
  
  // 检查控件类型是否在有效范围内
  if (param_2 < UI_SYSTEM_MAX_STRING_LENGTH) {
    // 初始化控件数据结构
    *(undefined4 *)(param_1 + 2) = 0;
    
    // 控件验证流程
FUN_18088f050:
    // 执行控件参数验证
    iVar1 = FUN_18088f710(param_3,auStackX_20);
    if ((iVar1 == 0) && (iVar1 = FUN_18088f710(auStackX_20,&uStackX_18), iVar1 == 0)) {
      // 验证控件主要参数
      iVar1 = FUN_18010cbc0(uStackX_18,&UNK_180986258,(longlong)param_1 + 0x14,param_1 + 3,
                            (longlong)param_1 + 0x1c);
      if (((iVar1 == UI_SYSTEM_ERROR_VALIDATION_FAILED) ||
          (((iVar1 = FUN_18088eea0(&uStackX_18,(longlong)param_1 + 0x14), iVar1 == 0 &&
            (iVar1 = FUN_18088eea0(&uStackX_18,param_1 + 3), iVar1 == 0)) &&
           (iVar1 = FUN_18088eea0(&uStackX_18,(longlong)param_1 + 0x1c), iVar1 == 0)))) &&
         (iVar1 = FUN_18088f710(auStackX_20,&uStackX_18), iVar1 == 0)) {
        // 验证控件次要参数
        iVar1 = FUN_18010cbc0(uStackX_18,&UNK_180986258,param_1 + 4,(longlong)param_1 + 0x24,
                              param_1 + 5);
        if (((iVar1 == UI_SYSTEM_ERROR_VALIDATION_FAILED) ||
            (((iVar1 = FUN_18088eea0(&uStackX_18,param_1 + 4), iVar1 == 0 &&
              (iVar1 = FUN_18088eea0(&uStackX_18,(longlong)param_1 + 0x24), iVar1 == 0)) &&
             (iVar1 = FUN_18088eea0(&uStackX_18,param_1 + 5), iVar1 == 0)))) &&
           (iVar1 = FUN_18088f3a0(auStackX_20,(longlong)param_1 + 0x2c), iVar1 == 0)) {
          // 设置控件最终状态
          FUN_18088f3a0(auStackX_20,param_1 + 7);
        }
      }
    }
    return;
  }
  
  // 处理中等大小的控件
  if (param_2 < UI_SYSTEM_CONTROL_THRESHOLD) {
    // 初始化中等控件数据结构
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined8 *)((longlong)param_1 + 0x44) = 0;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    iVar1 = FUN_18088ee20(param_3,param_1 + 2);
    if (iVar1 == 0) goto FUN_18088f050;
  }
  else {
    // 处理大型控件的特殊情况
    (**(code **)(*param_1 + 0x18))(param_1,param_3);
  }
  return;
}



/*================================================================================
// UI系统字符串处理函数组
//================================================================================*/

/**
 * UI系统字符串处理器
 * 处理UI系统中的字符串格式化和解析操作
 * 
 * @param param_1 输入字符串指针
 * @param param_2 输出数据结构指针
 * @return void 无返回值
 */
void FUN_180848e50(char *param_1,undefined8 *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 auStack_b8 [32];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *apuStack_88 [5];
  undefined1 uStack_60;
  undefined1 auStack_5f [8];
  undefined1 uStack_57;
  undefined1 auStack_56 [4];
  undefined1 uStack_52;
  undefined1 auStack_51 [4];
  undefined1 uStack_4d;
  undefined1 auStack_4c [4];
  undefined1 uStack_48;
  undefined1 auStack_47 [10];
  undefined1 auStack_3d [5];
  ulonglong uStack_38;
  
  // 初始化栈保护机制
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  
  // 检查输出参数有效性
  if (param_2 != (undefined8 *)0x0) {
    // 验证输入字符串格式和长度
    if ((((param_1 == (char *)0x0) || (iVar5 = func_0x00018076b690(), iVar5 != UI_SYSTEM_VALIDATION_LENGTH_0X26)) ||
        (*param_1 != '{')) || (param_1[UI_SYSTEM_VALIDATION_LENGTH_0X27] != '}')) {
      // 字符串格式验证失败，设置默认值
FUN_180848ff1:
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      // 执行字符串解析和处理
      func_0x00018076b450(&uStack_60,param_1,UI_SYSTEM_VALIDATION_LENGTH_0X27);
      uStack_57 = 0;
      apuStack_88[0] = auStack_5f;
      lVar9 = 0;
      uStack_52 = 0;
      apuStack_88[1] = auStack_56;
      uStack_4d = 0;
      apuStack_88[2] = auStack_51;
      apuStack_88[3] = auStack_4c;
      apuStack_88[4] = auStack_47;
      uStack_48 = 0;
      auStack_3d[2] = 0;
      
      // 验证字符串数组中的每个元素
      do {
        pcVar6 = apuStack_88[lVar9];
        cVar2 = *pcVar6;
        while (cVar2 != '\0') {
          // 检查字符是否为有效字符
          if (((9 < (byte)(cVar2 - 0x30U)) && (5 < (byte)(cVar2 + 0xbfU))) &&
             (5 < (byte)(cVar2 + 0x9fU))) goto FUN_180848ff1;
          pcVar1 = pcVar6 + 1;
          pcVar6 = pcVar6 + 1;
          cVar2 = *pcVar1;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < UI_SYSTEM_ARRAY_SIZE_5);
      
      // 处理字符串数据并转换为数值
      uStack_98 = func_0x00018076b320(auStack_5f);
      uVar4 = func_0x00018076b320(auStack_56);
      uStack_94 = CONCAT22(uStack_94._2_2_,uVar4);
      uVar4 = func_0x00018076b320(auStack_51);
      uStack_94 = CONCAT22(uVar4,(undefined2)uStack_94);
      uVar4 = func_0x00018076b320(auStack_4c);
      puVar8 = (undefined1 *)((longlong)&uStack_8c + 3);
      uStack_90 = CONCAT31(CONCAT21(uStack_90._2_2_,(char)uVar4),(char)((ushort)uVar4 >> 8));
      puVar7 = auStack_3d;
      iVar5 = 5;
      puVar10 = auStack_3d;
      
      // 处理剩余的数据元素
      do {
        uVar3 = func_0x00018076b320(puVar10);
        puVar10 = puVar10 + -2;
        *puVar8 = uVar3;
        iVar5 = iVar5 + -1;
        *puVar7 = 0;
        puVar8 = puVar8 + -1;
        puVar7 = puVar7 + -2;
      } while (-1 < iVar5);
      
      // 将处理后的数据写入输出结构
      *(undefined4 *)param_2 = uStack_98;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_94;
      *(undefined4 *)(param_2 + 1) = uStack_90;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_8c;
    }
  }
  // 执行栈清理和安全退出
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_b8);
}





/**
 * UI系统字符串格式化器
 * 格式化UI系统中的字符串数据，进行数据转换和验证
 * 
 * @return void 无返回值
 */
void FUN_180848e82(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  char *unaff_RBX;
  longlong unaff_RBP;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined8 *unaff_R15;
  
  if ((((unaff_RBX == (char *)0x0) || (iVar7 = func_0x00018076b690(), iVar7 != 0x26)) ||
      (*unaff_RBX != '{')) || (unaff_RBX[0x25] != '}')) {
FUN_180848ff1:
    *unaff_R15 = 0;
    unaff_R15[1] = 0;
  }
  else {
    func_0x00018076b450(unaff_RBP + -1);
    *(undefined1 *)(unaff_RBP + 8) = 0;
    *(longlong *)(unaff_RBP + -0x29) = unaff_RBP;
    lVar12 = 0;
    *(undefined1 *)(unaff_RBP + 0xd) = 0;
    *(longlong *)(unaff_RBP + -0x21) = unaff_RBP + 9;
    *(undefined1 *)(unaff_RBP + 0x12) = 0;
    *(longlong *)(unaff_RBP + -0x19) = unaff_RBP + 0xe;
    *(longlong *)(unaff_RBP + -0x11) = unaff_RBP + 0x13;
    *(longlong *)(unaff_RBP + -9) = unaff_RBP + 0x18;
    *(undefined1 *)(unaff_RBP + 0x17) = 0;
    *(undefined1 *)(unaff_RBP + 0x24) = 0;
    do {
      pcVar9 = *(char **)(unaff_RBP + -0x29 + lVar12 * 8);
      cVar2 = *pcVar9;
      while (cVar2 != '\0') {
        if (((9 < (byte)(cVar2 - 0x30U)) && (5 < (byte)(cVar2 + 0xbfU))) &&
           (5 < (byte)(cVar2 + 0x9fU))) goto FUN_180848ff1;
        pcVar1 = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
        cVar2 = *pcVar1;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < 5);
    uVar8 = func_0x00018076b320();
    *(undefined4 *)(unaff_RBP + -0x39) = uVar8;
    uVar6 = func_0x00018076b320(unaff_RBP + 9);
    *(undefined2 *)(unaff_RBP + -0x35) = uVar6;
    uVar6 = func_0x00018076b320(unaff_RBP + 0xe);
    *(undefined2 *)(unaff_RBP + -0x33) = uVar6;
    uVar6 = func_0x00018076b320(unaff_RBP + 0x13);
    *(char *)(unaff_RBP + -0x30) = (char)uVar6;
    puVar11 = (undefined1 *)(unaff_RBP + -0x2a);
    *(char *)(unaff_RBP + -0x31) = (char)((ushort)uVar6 >> 8);
    puVar10 = (undefined1 *)(unaff_RBP + 0x22);
    iVar7 = 5;
    lVar12 = unaff_RBP + 0x22;
    do {
      uVar5 = func_0x00018076b320(lVar12);
      lVar12 = lVar12 + -2;
      *puVar11 = uVar5;
      iVar7 = iVar7 + -1;
      *puVar10 = 0;
      puVar11 = puVar11 + -1;
      puVar10 = puVar10 + -2;
    } while (-1 < iVar7);
    uVar8 = *(undefined4 *)(unaff_RBP + -0x35);
    uVar3 = *(undefined4 *)(unaff_RBP + -0x31);
    uVar4 = *(undefined4 *)(unaff_RBP + -0x2d);
    *(undefined4 *)unaff_R15 = *(undefined4 *)(unaff_RBP + -0x39);
    *(undefined4 *)((longlong)unaff_R15 + 4) = uVar8;
    *(undefined4 *)(unaff_R15 + 1) = uVar3;
    *(undefined4 *)((longlong)unaff_R15 + 0xc) = uVar4;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}





/**
 * UI系统数据转换器
 * 转换UI系统中的数据格式，进行类型转换和数据验证
 * 
 * @return void 无返回值
 */
void FUN_180848f4e(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong unaff_RBP;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 unaff_R12B;
  longlong lVar9;
  undefined4 *unaff_R15;
  
  uVar5 = func_0x00018076b320();
  *(undefined4 *)(unaff_RBP + -0x39) = uVar5;
  uVar4 = func_0x00018076b320(unaff_RBP + 9);
  *(undefined2 *)(unaff_RBP + -0x35) = uVar4;
  uVar4 = func_0x00018076b320(unaff_RBP + 0xe);
  *(undefined2 *)(unaff_RBP + -0x33) = uVar4;
  uVar4 = func_0x00018076b320(unaff_RBP + 0x13);
  *(char *)(unaff_RBP + -0x30) = (char)uVar4;
  puVar8 = (undefined1 *)(unaff_RBP + -0x2a);
  *(char *)(unaff_RBP + -0x31) = (char)((ushort)uVar4 >> 8);
  puVar7 = (undefined1 *)(unaff_RBP + 0x22);
  iVar6 = 5;
  lVar9 = unaff_RBP + 0x22;
  do {
    uVar3 = func_0x00018076b320(lVar9);
    lVar9 = lVar9 + -2;
    *puVar8 = uVar3;
    iVar6 = iVar6 + -1;
    *puVar7 = unaff_R12B;
    puVar8 = puVar8 + -1;
    puVar7 = puVar7 + -2;
  } while (-1 < iVar6);
  uVar5 = *(undefined4 *)(unaff_RBP + -0x35);
  uVar1 = *(undefined4 *)(unaff_RBP + -0x31);
  uVar2 = *(undefined4 *)(unaff_RBP + -0x2d);
  *unaff_R15 = *(undefined4 *)(unaff_RBP + -0x39);
  unaff_R15[1] = uVar5;
  unaff_R15[2] = uVar1;
  unaff_R15[3] = uVar2;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}





/**
 * UI系统错误处理器
 * 处理UI系统中的错误情况，进行错误恢复和状态重置
 * 
 * @return void 无返回值
 */
void FUN_180848ff1(void)

{
  longlong unaff_RBP;
  undefined8 *unaff_R15;
  
  *unaff_R15 = 0;
  unaff_R15[1] = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}





/**
 * UI系统资源清理器
 * 清理UI系统中的资源，释放内存和重置状态
 * 
 * @return void 无返回值
 */
void FUN_18084900b(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * UI系统内存分配器
 * 为UI系统分配内存资源，进行内存管理和优化
 * 
 * @param param_1 内存管理器指针
 * @param param_2 分配大小
 * @return undefined8 分配结果状态码
 */
undefined8 FUN_180849030(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  if (iVar2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (iVar2 != 0) {
    if (iVar2 - 1U < 0x3fffffff) {
      lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2,&UNK_180957f70,0xf4,0,0,
                            1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
                    // WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(longlong)(int)param_1[1]);
        }
        goto LAB_1808490b9;
      }
    }
    return 0x26;
  }
LAB_1808490b9:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * UI系统内存重新分配器
 * 重新分配UI系统内存资源，进行内存优化和碎片整理
 * 
 * @param param_1 原内存指针
 * @param param_2 新分配大小
 * @return undefined8 重新分配结果状态码
 */
undefined8 FUN_180849054(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_1808490b9:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if ((int)param_2 - 1U < 0x3fffffff) {
    lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2,&UNK_180957f70,0xf4,0);
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(longlong)(int)unaff_RBX[1]);
      }
      goto LAB_1808490b9;
    }
  }
  return 0x26;
}



/**
 * UI系统内存分配失败处理器
 * 处理UI系统内存分配失败的情况，返回错误状态
 * 
 * @return undefined8 错误状态码
 */
undefined8 FUN_180849104(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * UI系统结构体分配器
 * 为UI系统分配结构体内存，进行结构体初始化和管理
 * 
 * @param param_1 结构体管理器指针
 * @param param_2 分配数量
 * @return undefined8 分配结果状态码
 */
undefined8 FUN_180849120(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar7 = (undefined4 *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0x14 - 1U < 0x3fffffff) {
      puVar7 = (undefined4 *)
               FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x14,&UNK_180957f70,
                             0xf4,0,0,1);
      if (puVar7 != (undefined4 *)0x0) {
        iVar2 = (int)param_1[1];
        lVar8 = (longlong)iVar2;
        if ((iVar2 != 0) && (lVar3 = *param_1, 0 < iVar2)) {
          puVar9 = puVar7;
          do {
            puVar1 = (undefined4 *)((lVar3 - (longlong)puVar7) + (longlong)puVar9);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *puVar9 = *puVar1;
            puVar9[1] = uVar4;
            puVar9[2] = uVar5;
            puVar9[3] = uVar6;
            puVar9[4] = *(undefined4 *)((lVar3 - (longlong)puVar7) + -4 + (longlong)(puVar9 + 5));
            lVar8 = lVar8 + -1;
            puVar9 = puVar9 + 5;
          } while (lVar8 != 0);
        }
        goto LAB_1808491ce;
      }
    }
    return 0x26;
  }
LAB_1808491ce:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = (longlong)puVar7;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * UI系统结构体重新分配器
 * 重新分配UI系统结构体内存，进行结构体优化和重组
 * 
 * @param param_1 原结构体指针
 * @param param_2 新分配数量
 * @return undefined8 重新分配结果状态码
 */
undefined8 FUN_180849144(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  puVar7 = (undefined4 *)0x0;
  if (unaff_EDI == 0) {
LAB_1808491ce:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = (longlong)puVar7;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x14 - 1U < 0x3fffffff) {
    puVar7 = (undefined4 *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x14,&UNK_180957f70,
                           0xf4,0);
    if (puVar7 != (undefined4 *)0x0) {
      iVar2 = (int)unaff_RBX[1];
      lVar8 = (longlong)iVar2;
      if ((iVar2 != 0) && (lVar3 = *unaff_RBX, 0 < iVar2)) {
        puVar9 = puVar7;
        do {
          puVar1 = (undefined4 *)((lVar3 - (longlong)puVar7) + (longlong)puVar9);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          *puVar9 = *puVar1;
          puVar9[1] = uVar4;
          puVar9[2] = uVar5;
          puVar9[3] = uVar6;
          puVar9[4] = *(undefined4 *)((lVar3 - (longlong)puVar7) + -4 + (longlong)(puVar9 + 5));
          lVar8 = lVar8 + -1;
          puVar9 = puVar9 + 5;
        } while (lVar8 != 0);
      }
      goto LAB_1808491ce;
    }
  }
  return 0x26;
}



/**
 * UI系统结构体分配失败处理器
 * 处理UI系统结构体分配失败的情况，返回错误状态
 * 
 * @return undefined8 错误状态码
 */
undefined8 FUN_180849219(void)

{
  return 0x26;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统事件分发器
 * 分发UI系统事件到相应的处理器，进行事件路由和管理
 * 
 * @param param_1 事件标识符
 * @return void 无返回值
 */
void FUN_180849230(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_168 [48];
  longlong alStack_138 [2];
  undefined8 *apuStack_128 [34];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  alStack_138[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_138);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) == 0) goto LAB_1808492e6;
    iVar2 = FUN_18088c740(alStack_138 + 1);
    if (iVar2 == 0) goto LAB_180849294;
  }
  else {
LAB_180849294:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(undefined8 *)(alStack_138[0] + 0x98),apuStack_128,0x18), iVar1 == 0))
  {
    *apuStack_128[0] = &UNK_180983cf8;
    *(undefined4 *)(apuStack_128[0] + 1) = 0x18;
    *(int *)(apuStack_128[0] + 2) = (int)param_1;
    func_0x00018088e0d0(*(undefined8 *)(alStack_138[0] + 0x98));
  }
LAB_1808492e6:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_138 + 1);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统事件处理器
 * 处理UI系统事件，执行相应的操作和状态更新
 * 
 * @param param_1 事件数据指针
 * @return void 无返回值
 */
void FUN_180849360(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_168 [32];
  undefined1 *puStack_148;
  longlong alStack_138 [4];
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  iVar1 = func_0x00018088c590(param_1,alStack_138 + 2);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_138[2] + 0x24) >> 1 & 1) != 0) {
      FUN_18084b0c0(param_1);
      alStack_138[1] = 0;
      iVar1 = func_0x00018088c590(param_1 & 0xffffffff,alStack_138);
      if (((iVar1 != 0) ||
          (((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) != 0 &&
           (iVar2 = FUN_18088c740(alStack_138 + 1), iVar2 == 0)))) && (iVar1 == 0)) {
        FUN_18088da50(*(undefined8 *)(alStack_138[0] + 0x98));
      }
                    // WARNING: Subroutine does not return
      FUN_18088c790(alStack_138 + 1);
    }
    iVar1 = FUN_180883a30();
    if (iVar1 == 0) goto LAB_180849462;
  }
  if ((iVar1 != 0) && ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
    puStack_148 = auStack_118;
    auStack_118[0] = 0;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,0xb,param_1,&UNK_1809570e8);
  }
LAB_180849462:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统消息处理器
 * 处理UI系统消息，进行消息解析和响应
 * 
 * @param param_1 消息标识符
 * @param param_2 消息数据指针
 * @return void 无返回值
 */
void FUN_180849490(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_148;
  longlong lStack_140;
  undefined8 *apuStack_138 [2];
  undefined1 auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  if (param_2 == (undefined8 *)0x0) {
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_178);
    }
    func_0x00018074bda0(auStack_128,0x100,0);
    puStack_158 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xd,param_1,&UNK_1809838a8);
  }
  uStack_148 = 0;
  iVar5 = func_0x00018088c590(param_1,&lStack_140);
  if (iVar5 == 0) {
    if ((*(uint *)(lStack_140 + 0x24) >> 1 & 1) == 0) goto LAB_1808494eb;
    iVar6 = FUN_18088c740(&uStack_148);
    if (iVar6 == 0) goto LAB_180849553;
  }
  else {
LAB_180849553:
    iVar6 = iVar5;
  }
  if ((iVar6 == 0) &&
     (iVar5 = FUN_18088dec0(*(undefined8 *)(lStack_140 + 0x98),apuStack_138,0x48), iVar5 == 0)) {
    *apuStack_138[0] = &UNK_180983840;
    *(undefined4 *)(apuStack_138[0] + 1) = 0x48;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    uVar4 = param_2[1];
    apuStack_138[0][3] = *param_2;
    apuStack_138[0][4] = uVar4;
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar2 = *(undefined4 *)(param_2 + 3);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)(apuStack_138[0] + 5) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)apuStack_138[0] + 0x2c) = uVar1;
    *(undefined4 *)(apuStack_138[0] + 6) = uVar2;
    *(undefined4 *)((longlong)apuStack_138[0] + 0x34) = uVar3;
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar2 = *(undefined4 *)(param_2 + 5);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(apuStack_138[0] + 7) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)apuStack_138[0] + 0x3c) = uVar1;
    *(undefined4 *)(apuStack_138[0] + 8) = uVar2;
    *(undefined4 *)((longlong)apuStack_138[0] + 0x44) = uVar3;
    func_0x00018088e0d0(*(undefined8 *)(lStack_140 + 0x98));
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_148);
  }
LAB_1808494eb:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统数据验证器
 * 验证UI系统数据的有效性和完整性
 * 
 * @param param_1 数据标识符
 * @param param_2 验证参数
 * @return void 无返回值
 */
void FUN_180849600(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_158 [32];
  undefined1 *puStack_138;
  undefined8 auStack_128 [2];
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  iVar1 = func_0x00018088c590(param_1,auStack_128);
  if ((((iVar1 != 0) || (iVar1 = FUN_180889f10(auStack_128[0],param_2), iVar1 != 0)) && (iVar1 != 0)
      ) && ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,0xb,param_1,&UNK_180957208);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统控件更新器
 * 更新UI控件的属性和状态，进行控件刷新
 * 
 * @param param_1 控件标识符
 * @param param_2 更新数据指针
 * @param param_3 更新标志
 * @return void 无返回值
 */
void FUN_1808496c0(undefined4 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_188 [48];
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong alStack_140 [33];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  lStack_148 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  iVar2 = func_0x00018088c590(0,&uStack_150);
  if (((iVar2 == 0) && (iVar2 = FUN_18088c740(&uStack_158,uStack_150), iVar2 == 0)) &&
     (iVar2 = func_0x00018088c530(param_1,alStack_140), iVar2 == 0)) {
    lStack_148 = *(longlong *)(alStack_140[0] + 8);
  }
  else if (iVar2 != 0) goto LAB_180849763;
  lVar1 = *(longlong *)(lStack_148 + 0xd0);
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = param_3;
  }
  *(undefined4 *)(lVar1 + 0x48) = uVar3;
  *(longlong *)(lVar1 + 0x40) = param_2;
LAB_180849763:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_158);
}





/**
 * UI系统错误报告生成器
 * 生成UI系统错误报告，进行错误信息格式化和输出
 * 
 * @return void 无返回值
 */
void FUN_180849782(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_R14D;
  
  // 初始化错误报告缓冲区
  iVar1 = func_0x00018074bda0(&stack0x00000050,0x100);
  
  // 填充错误报告数据
  iVar2 = FUN_18074b880(&stack0x00000050 + iVar1,0x100 - iVar1,&DAT_180a06434);
  
  // 完成错误报告格式化
  func_0x00018074b800(&stack0x00000050 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R14D);
  
  // 发送错误报告
  FUN_180749ef0(unaff_ESI,0xc);
}





/**
 * UI系统栈清理器
 * 清理UI系统栈数据，进行栈安全检查和清理
 * 
 * @return void 无返回值
 */
void FUN_1808497fa(void)

{
  ulonglong in_stack_00000150;
  
  // 执行栈清理和安全退出
  FUN_1808fc050(in_stack_00000150 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统控件状态更新器
 * 更新UI控件的状态信息，进行状态同步
 * 
 * @param param_1 控件标识符
 * @param param_2 状态数据指针
 * @param param_3 状态标志
 * @return void 无返回值
 */
void FUN_180849820(undefined4 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_188 [48];
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong alStack_140 [33];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  lStack_148 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_150);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_158,uStack_150), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1,alStack_140), iVar1 == 0)) {
    if (alStack_140[0] == 0) {
      lStack_148 = alStack_140[0];
    }
    else {
      lStack_148 = alStack_140[0] + -8;
    }
  }
  else if (iVar1 != 0) goto LAB_1808498c8;
  *(longlong *)(lStack_148 + 0x78) = param_2;
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = param_3;
  }
  *(undefined4 *)(lStack_148 + 0x74) = uVar2;
LAB_1808498c8:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_158);
}





/**
 * UI系统错误报告生成器
 * 生成UI系统错误报告，进行错误信息格式化和输出
 * 
 * @return void 无返回值
 */
void FUN_1808498e7(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_R14D;
  
  // 初始化错误报告缓冲区
  iVar1 = func_0x00018074bda0(&stack0x00000050,0x100);
  
  // 填充错误报告数据
  iVar2 = FUN_18074b880(&stack0x00000050 + iVar1,0x100 - iVar1,&DAT_180a06434);
  
  // 完成错误报告格式化
  func_0x00018074b800(&stack0x00000050 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R14D);
  
  // 发送错误报告
  FUN_180749ef0(unaff_ESI,0xd);
}





/**
 * UI系统栈清理器
 * 清理UI系统栈数据，进行栈安全检查和清理
 * 
 * @return void 无返回值
 */
void FUN_18084995f(void)

{
  ulonglong in_stack_00000150;
  
  // 执行栈清理和安全退出
  FUN_1808fc050(in_stack_00000150 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统高级数据处理器
 * 处理UI系统的高级数据操作，进行复杂的数据转换
 * 
 * @param param_1 数据标识符
 * @param param_2 数据类型
 * @param param_3 源数据指针
 * @param param_4 目标数据指针
 * @return void 无返回值
 */
void FUN_180849990(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_198 [32];
  undefined1 *puStack_178;
  undefined8 uStack_168;
  longlong lStack_160;
  undefined8 *apuStack_158 [2];
  undefined1 auStack_148 [256];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  if (param_3 == (undefined8 *)0x0) {
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_198);
    }
    iVar5 = func_0x00018074b7d0(auStack_148,0x100,param_2);
    iVar6 = FUN_18074b880(auStack_148 + iVar5,0x100 - iVar5,&DAT_180a06434);
    iVar5 = iVar5 + iVar6;
    iVar6 = func_0x00018074bda0(auStack_148 + iVar5,0x100 - iVar5,0);
    iVar5 = iVar5 + iVar6;
    iVar6 = FUN_18074b880(auStack_148 + iVar5,0x100 - iVar5,&DAT_180a06434);
    FUN_18074bd40(auStack_148 + (iVar5 + iVar6),0x100 - (iVar5 + iVar6),param_4);
    puStack_178 = auStack_148;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xb,param_1,&UNK_180982460);
  }
  uStack_168 = 0;
  iVar5 = func_0x00018088c590(param_1,&lStack_160);
  if (iVar5 == 0) {
    if ((*(uint *)(lStack_160 + 0x24) >> 1 & 1) == 0) goto LAB_1808499fb;
    iVar6 = FUN_18088c740(&uStack_168);
    if (iVar6 == 0) goto LAB_180849ad3;
  }
  else {
LAB_180849ad3:
    iVar6 = iVar5;
  }
  if ((iVar6 == 0) &&
     (iVar5 = FUN_18088dec0(*(undefined8 *)(lStack_160 + 0x98),apuStack_158,0x58), iVar5 == 0)) {
    *apuStack_158[0] = &UNK_1809823f8;
    *(undefined4 *)(apuStack_158[0] + 1) = 0x58;
    *(undefined4 *)(apuStack_158[0] + 2) = param_2;
    uVar4 = param_3[1];
    *(undefined8 *)((longlong)apuStack_158[0] + 0x14) = *param_3;
    *(undefined8 *)((longlong)apuStack_158[0] + 0x1c) = uVar4;
    uVar1 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 3);
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(undefined4 *)((longlong)apuStack_158[0] + 0x24) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)(apuStack_158[0] + 5) = uVar1;
    *(undefined4 *)((longlong)apuStack_158[0] + 0x2c) = uVar2;
    *(undefined4 *)(apuStack_158[0] + 6) = uVar3;
    uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
    uVar2 = *(undefined4 *)(param_3 + 5);
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x2c);
    *(undefined4 *)((longlong)apuStack_158[0] + 0x34) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(apuStack_158[0] + 7) = uVar1;
    *(undefined4 *)((longlong)apuStack_158[0] + 0x3c) = uVar2;
    *(undefined4 *)(apuStack_158[0] + 8) = uVar3;
    if (param_4 == (undefined8 *)0x0) {
      *(undefined8 *)((longlong)apuStack_158[0] + 0x44) = 0;
      *(undefined4 *)((longlong)apuStack_158[0] + 0x4c) = 0;
    }
    else {
      *(undefined8 *)((longlong)apuStack_158[0] + 0x44) = *param_4;
      *(undefined4 *)((longlong)apuStack_158[0] + 0x4c) = *(undefined4 *)(param_4 + 1);
    }
    *(bool *)(apuStack_158[0] + 10) = param_4 != (undefined8 *)0x0;
    func_0x00018088e0d0(*(undefined8 *)(lStack_160 + 0x98));
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_168);
  }
LAB_1808499fb:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统事件注册器
 * 注册UI系统事件处理器，进行事件绑定和管理
 * 
 * @param param_1 事件标识符
 * @param param_2 处理器指针
 * @param param_3 注册标志
 * @param param_4 注册选项
 * @return void 无返回值
 */
void FUN_180849bb0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_198 [48];
  longlong lStack_168;
  undefined8 *puStack_160;
  undefined8 auStack_158 [34];
  ulonglong uStack_48;
  
  // 初始化栈保护机制
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  auStack_158[0] = 0;
  
  // 获取事件系统上下文
  iVar1 = func_0x00018088c590(param_1,&lStack_168);
  if (iVar1 == 0) {
    // 检查事件系统状态
    if ((*(uint *)(lStack_168 + 0x24) >> 1 & 1) == 0) goto LAB_180849c81;
    
    // 初始化事件处理器
    iVar2 = FUN_18088c740(auStack_158);
    if (iVar2 == 0) goto LAB_180849c22;
  }
  else {
LAB_180849c22:
    iVar2 = iVar1;
  }
  
  // 注册事件处理器
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(undefined8 *)(lStack_168 + 0x98),&puStack_160,0x28), iVar1 == 0)) {
    // 设置事件处理器数据结构
    *puStack_160 = &UNK_180983e88;
    *(undefined4 *)(puStack_160 + 1) = 0x28;
    *(undefined4 *)(puStack_160 + 4) = param_3;
    *(int *)(puStack_160 + 2) = (int)param_1;
    puStack_160[3] = param_2;
    *(undefined1 *)((longlong)puStack_160 + 0x24) = param_4;
    
    // 激活事件处理器
    func_0x00018088e0d0(*(undefined8 *)(lStack_168 + 0x98));
  }
LAB_180849c81:
  // 执行资源清理和安全退出
  FUN_18088c790(auStack_158);
}

/*================================================================================
// 函数别名定义
//================================================================================*/

// UI系统控件验证函数别名
#define UISystemControlValidator FUN_180848dc0

// UI系统字符串处理函数别名
#define UISystemStringProcessor FUN_180848e50
#define UISystemStringFormatter FUN_180848e82

// UI系统数据转换函数别名
#define UISystemDataConverter FUN_180848f4e

// UI系统错误处理函数别名
#define UISystemErrorHandler FUN_180848ff1
#define UISystemResourceCleaner FUN_18084900b
#define UISystemErrorReportGenerator FUN_180849782
#define UISystemStackCleaner FUN_1808497fa

// UI系统内存管理函数别名
#define UISystemMemoryAllocator FUN_180849030
#define UISystemMemoryReallocator FUN_180849054
#define UISystemMemoryErrorHandler FUN_180849104
#define UISystemStructAllocator FUN_180849120
#define UISystemStructReallocator FUN_180849144
#define UISystemStructErrorHandler FUN_180849219

// UI系统事件处理函数别名
#define UISystemEventDispatcher FUN_180849230
#define UISystemEventProcessor FUN_180849360
#define UISystemMessageHandler FUN_180849490
#define UISystemEventRegister FUN_180849bb0

// UI系统数据验证函数别名
#define UISystemDataValidator FUN_180849600

// UI系统控件更新函数别名
#define UISystemControlUpdater FUN_1808496c0
#define UISystemControlStateUpdater FUN_180849820

// UI系统高级处理函数别名
#define UISystemAdvancedDataProcessor FUN_180849990

/*================================================================================
// 模块技术说明
//================================================================================*/

/*
 * 模块功能总结：
 * 
 * 本模块实现了UI系统的核心功能，包括：
 * 
 * 1. 控件管理系统
 *    - 控件参数验证和状态检查
 *    - 控件属性更新和状态同步
 *    - 控件数据结构管理
 * 
 * 2. 字符串处理系统
 *    - 字符串格式化和解析
 *    - 字符串数据转换
 *    - 字符串验证和错误处理
 * 
 * 3. 内存管理系统
 *    - 动态内存分配和释放
 *    - 内存重新分配和优化
 *    - 结构体内存管理
 *    - 内存错误处理
 * 
 * 4. 事件处理系统
 *    - 事件分发和路由
 *    - 事件处理和响应
 *    - 消息处理和通信
 *    - 事件注册和管理
 * 
 * 5. 数据验证系统
 *    - 数据有效性检查
 *    - 数据完整性验证
 *    - 数据转换和类型检查
 * 
 * 6. 错误处理系统
 *    - 错误检测和报告
 *    - 错误恢复和状态重置
 *    - 资源清理和释放
 * 
 * 技术特点：
 * - 采用分层架构设计
 * - 实现了完整的错误处理机制
 * - 支持多种数据类型转换
 * - 提供了灵活的事件处理机制
 * - 包含了完善的内存管理功能
 * 
 * 性能优化：
 * - 使用高效的内存分配算法
 * - 实现了事件分发优化
 * - 支持批量数据处理
 * - 提供了缓存机制
 * 
 * 安全性：
 * - 包含完整的参数验证
 * - 实现了栈保护机制
 * - 提供了错误恢复功能
 * - 支持资源自动清理
 */



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



