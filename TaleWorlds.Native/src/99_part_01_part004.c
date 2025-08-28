#include "TaleWorlds.Native.Split.h"

/**
 * @file 99_part_01_part004.c
 * @brief 数据处理和流操作模块
 * 
 * 本模块包含22个核心函数，主要功能包括：
 * - 数据流处理和输出操作
 * - 内存管理和资源清理
 * - 文件操作和异常处理
 * - 字符串处理和格式化
 * - 系统调用和同步处理
 * 
 * @author 系统自动生成
 * @version 1.0
 * @date 2024
 */

// ===========================================
// 常量定义
// ===========================================

/** 流操作状态常量 */
#define STREAM_STATE_SUCCESS          0x00
#define STREAM_STATE_FAILURE          0x04
#define STREAM_STATE_ERROR           0x08

/** 流操作控制字符 */
#define STREAM_CHAR_TAB              0x09
#define STREAM_CHAR_SPACE            0x20
#define STREAM_CHAR_LESS_THAN        0x3c
#define STREAM_CHAR_GREATER_THAN     0x3e
#define STREAM_CHAR_QUESTION         0x3f
#define STREAM_CHAR_X                0x78
#define STREAM_CHAR_M                0x6d
#define STREAM_CHAR_L                0x6c
#define STREAM_CHAR_LINE_FEED        0x0a

/** 内存管理常量 */
#define MEMORY_ALIGNMENT_SIZE        0x18
#define MEMORY_FREE_FLAG            0x01
#define MEMORY_ALLOC_SUCCESS        0x00
#define MEMORY_ALLOC_FAILURE        0xfffffffffffffffe

/** 文件操作常量 */
#define FILE_HANDLE_INVALID         0x00
#define FILE_OPERATION_SUCCESS      0x00
#define FILE_OPERATION_FAILURE      -1

/** 系统调用常量 */
#define SYSTEM_CALL_SUCCESS         0x00
#define SYSTEM_CALL_FAILURE         -1
#define SYSTEM_BUFFER_SIZE          32

/** 异常处理常量 */
#define EXCEPTION_TYPE_INVALID      0x00
#define EXCEPTION_TYPE_MEMORY       0x01
#define EXCEPTION_TYPE_FILE         0x02
#define EXCEPTION_TYPE_STREAM       0x03

/** 全局数据地址 */
#define GLOBAL_DATA_ADDRESS_1       0x180d48d24
#define GLOBAL_DATA_ADDRESS_2       0x180d48d38
#define GLOBAL_EXCEPTION_VTABLE     0x18098b928

// ===========================================
// 函数别名宏定义
// ===========================================

/** 数据处理函数别名 */
#define DataStreamProcessor           FUN_1800a0c50
#define StreamOutputOperator          FUN_1800a0e50
#define StreamInitializer           FUN_1800a1010
#define StreamUnlocker              FUN_1800a10c0
#define StreamCleaner               FUN_1800a1120
#define StringStreamOutputter        FUN_1800a1160
#define DataDistributionProcessor    FUN_1800a1310
#define DataFormattingProcessor     FUN_1800a1326
#define SystemCallProcessor         FUN_1800a1340

/** 高级数据处理函数别名 */
#define AdvancedDataProcessor       FUN_1800a146a
#define DataConversionProcessor     FUN_1800a15ad
#define DataTransferProcessor       FUN_1800a1618
#define DataSyncProcessor           FUN_1800a162b

/** 编码处理函数别名 */
#define CharacterEncodingProcessor   FUN_1800a16b0
#define CharacterOutputProcessor    FUN_1800a1710

/** 系统清理函数别名 */
#define SystemCleaner               FUN_1800a1832
#define BufferCleaner               FUN_1800a1850
#define StreamInitializerConfig     FUN_1800a1920
#define FileCloseProcessor          FUN_1800a19c0

/** 异常处理函数别名 */
#define ExceptionObjectDestroyer     FUN_1800a1a40
#define ExceptionMemoryDeallocator  FUN_1800a1a70
#define ExceptionObjectCopier       FUN_1800a1ae0

// ===========================================
// 数据流处理函数
// ===========================================

/**
 * @brief 数据流处理器
 * 
 * 处理数据流的核心函数，负责数据的读取、处理和输出。
 * 支持多种数据格式和流操作模式。
 * 
 * @param param_1 流对象指针
 * @param param_2 数据缓冲区指针
 * @param param_3 输出目标指针
 * @param param_4 控制标志字节
 * @param param_5 数据长度
 * @return void 无返回值
 */
void DataStreamProcessor(longlong *param_1,longlong *param_2,undefined8 *param_3,byte param_4,uint param_5)

  undefined1 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  
  // 检查控制标志，决定是否进行数据预处理
  if ((param_4 & 1) == 0) {
    lVar9 = *param_2;
    lVar2 = param_2[1];
    if (0 < (int)param_5) {
      uVar7 = (ulonglong)param_5;
      do {
        // 输出制表符
        StreamOutputOperator(lVar2,STREAM_CHAR_TAB);
        if (lVar9 != 0) {
          StringStreamOutputter(lVar2,lVar9);
        }
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    *param_2 = lVar9;
    param_2[1] = lVar2;
  }
  
  // 输出开始标记
  lVar9 = param_2[1];
  StreamOutputOperator(lVar9,STREAM_CHAR_LESS_THAN);
  lVar2 = *param_2;
  if (lVar2 != 0) {
    StringStreamOutputter(lVar9,lVar2);
  }
  
  // 输出结束标记
  StreamOutputOperator(lVar9,STREAM_CHAR_QUESTION);
  if (lVar2 != 0) {
    StringStreamOutputter(lVar9,lVar2);
  }
  
  // 处理主数据块
  puVar3 = (undefined1 *)*param_3;
  lVar2 = *param_2;
  lVar4 = param_2[1];
  lVar9 = 0;
  if (puVar3 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)GLOBAL_DATA_ADDRESS_1;
    lVar6 = lVar9;
  }
  else {
    puVar5 = puVar3;
    lVar6 = param_3[2];
  }
  puVar8 = (undefined1 *)GLOBAL_DATA_ADDRESS_1;
  if (puVar3 != (undefined1 *)0x0) {
    puVar8 = puVar3;
  }
  while (puVar8 != puVar5 + lVar6) {
    uVar1 = *puVar8;
    puVar8 = puVar8 + 1;
    StreamOutputOperator(lVar4,uVar1);
    if (lVar2 != 0) {
      StringStreamOutputter(lVar4,lVar2);
    }
  }
  *param_2 = lVar2;
  param_2[1] = lVar4;
  
  // 输出空格分隔符
  lVar6 = param_2[1];
  StreamOutputOperator(lVar6,STREAM_CHAR_SPACE);
  if (*param_2 != 0) {
    StringStreamOutputter(lVar6);
  }
  
  // 处理属性数据
  puVar3 = (undefined1 *)param_3[1];
  if (puVar3 == (undefined1 *)0x0) {
    puVar5 = (undefined1 *)GLOBAL_DATA_ADDRESS_1;
  }
  else {
    lVar9 = param_3[3];
    puVar5 = puVar3;
  }
  puVar8 = (undefined1 *)GLOBAL_DATA_ADDRESS_1;
  if (puVar3 != (undefined1 *)0x0) {
    puVar8 = puVar3;
  }
  while (puVar8 != puVar5 + lVar9) {
    uVar1 = *puVar8;
    puVar8 = puVar8 + 1;
    StreamOutputOperator(lVar4,uVar1);
    if (lVar2 != 0) {
      StringStreamOutputter(lVar4,lVar2);
    }
  }
  *param_2 = lVar2;
  param_2[1] = lVar4;
  
  // 输出结束标记
  lVar9 = param_2[1];
  StreamOutputOperator(lVar9,STREAM_CHAR_QUESTION);
  lVar6 = *param_2;
  if (lVar6 != 0) {
    StringStreamOutputter(lVar9,lVar6);
  }
  
  // 输出结束符号
  StreamOutputOperator(lVar9,STREAM_CHAR_GREATER_THAN);
  if (lVar6 != 0) {
    StringStreamOutputter(lVar9,lVar6);
  }
  
  // 更新流对象状态
  *param_1 = lVar2;
  param_1[1] = lVar4;
  return;



/**
 * @brief 流输出操作器
 * 
 * 处理流输出的核心函数，支持多种输出模式和字符编码。
 * 实现缓冲区管理和错误处理机制。
 * 
 * @param param_1 流对象指针
 * @param param_2 输出字符
 * @param param_3 附加参数
 * @param param_4 附加参数
 * @return longlong* 流对象指针
 */
longlong * StreamOutputOperator(longlong *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plStack_30;
  char cStack_28;
  
  iVar5 = 0;
  iVar7 = 0;
  StreamInitializer(&plStack_30,param_1,param_3,param_4,0);
  if (cStack_28 != '\0') {
    lVar4 = *(longlong *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1);
    if (lVar4 < 2) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar4 + -1;
    }
    lVar3 = *param_1;
    iVar6 = STREAM_STATE_FAILURE;
    if ((*(uint *)((longlong)*(int *)(lVar3 + 4) + 0x18 + (longlong)param_1) & 0x1c0) == 0x40) {
LAB_1800a0f0c:
      iVar7 = _sputc___basic_streambuf_DU__char_traits_D_std___std__QEAAHD_Z
                        (*(undefined8 *)((longlong)*(int *)(lVar3 + 4) + 0x48 + (longlong)param_1),
                         param_2);
      if (iVar7 == FILE_OPERATION_FAILURE) {
        iVar5 = iVar6;
      }
      for (; (iVar7 = iVar5, iVar5 == 0 && (0 < lVar4)); lVar4 = lVar4 + -1) {
        iVar7 = _sputc___basic_streambuf_DU__char_traits_D_std___std__QEAAHD_Z
                          (*(undefined8 *)
                            ((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1),
                           *(undefined1 *)
                            ((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1));
        if (iVar7 == FILE_OPERATION_FAILURE) {
          iVar5 = iVar6;
        }
      }
    }
    else {
      while (iVar5 == 0) {
        if (lVar4 < 1) {
          lVar3 = *param_1;
          goto LAB_1800a0f0c;
        }
        iVar7 = _sputc___basic_streambuf_DU__char_traits_D_std___std__QEAAHD_Z
                          (*(undefined8 *)
                            ((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1),
                           *(undefined1 *)
                            ((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1));
        if (iVar7 == FILE_OPERATION_FAILURE) {
          iVar5 = iVar6;
        }
        lVar4 = lVar4 + -1;
        iVar7 = iVar5;
      }
    }
  }
  *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
  _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
            ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,iVar5,0,param_4,iVar7);
  cVar2 = _uncaught_exception_std__YA_NXZ();
  if (cVar2 == '\0') {
    __Osfx___basic_ostream_DU__char_traits_D_std___std__QEAAXXZ(plStack_30);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*plStack_30 + 4) + 0x48 + (longlong)plStack_30);
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 0x10) == (code *)&UNK_18009ee10) {
      if (plVar1[0x10] != 0) {
        _unlock_file();
      }
    }
    else {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return param_1;
}



/**
 * @brief 流初始化器
 * 
 * 初始化流对象，设置流的状态和缓冲区。
 * 处理文件锁定和缓冲区刷新操作。
 * 
 * @param param_1 初始化目标指针
 * @param param_2 流对象指针
 * @return undefined8* 初始化完成的对象指针
 */
undefined8 * StreamInitializer(undefined8 *param_1,longlong *param_2)

  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = param_2;
  plVar1 = *(longlong **)((longlong)*(int *)(*param_2 + 4) + 0x48 + (longlong)param_2);
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == (code *)&UNK_18009edf0) {
      if (plVar1[0x10] != 0) {
        _lock_file();
      }
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  lVar2 = *param_2;
  if (((*(int *)((longlong)*(int *)(lVar2 + 4) + 0x10 + (longlong)param_2) == 0) &&
      (plVar1 = *(longlong **)((longlong)*(int *)(lVar2 + 4) + 0x50 + (longlong)param_2),
      plVar1 != (longlong *)0x0)) && (plVar1 != param_2)) {
    _flush___basic_ostream_DU__char_traits_D_std___std__QEAAAEAV12_XZ();
    lVar2 = *param_2;
  }
  *(bool *)(param_1 + 1) = *(int *)((longlong)*(int *)(lVar2 + 4) + 0x10 + (longlong)param_2) == 0;
  return param_1;
}






/**
 * @brief 流解锁器
 * 
 * 解锁流对象，释放文件锁定资源。
 * 确保流对象可以安全地被其他线程访问。
 * 
 * @param param_1 流对象指针
 * @return void 无返回值
 */
void StreamUnlocker(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 0x10) != (code *)&UNK_18009ee10) {
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
    if (plVar1[0x10] != 0) {
      _unlock_file();
      return;
    }
  }
  return;
}






/**
 * @brief 流清理器
 * 
 * 清理流对象，释放资源并处理异常情况。
 * 确保流对象被正确关闭和清理。
 * 
 * @param param_1 流对象指针
 * @return void 无返回值
 */
void StreamCleaner(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = _uncaught_exception_std__YA_NXZ();
  if (cVar2 == '\0') {
    __Osfx___basic_ostream_DU__char_traits_D_std___std__QEAAXXZ(*param_1);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 0x10) != (code *)&UNK_18009ee10) {
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
    if (plVar1[0x10] != 0) {
      _unlock_file();
      return;
    }
  }
  return;
}



/**
 * @brief 字符串流输出器
 * 
 * 将字符串输出到流中，支持缓冲区管理和错误处理。
 * 处理字符串长度计算和缓冲区溢出检查。
 * 
 * @param param_1 流对象指针
 * @param param_2 字符串指针
 * @param param_3 附加参数
 * @param param_4 附加参数
 * @return longlong* 流对象指针
 */
longlong * StringStreamOutputter(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong *plStack_30;
  char cStack_28;
  
  uVar5 = STREAM_STATE_SUCCESS;
  uVar8 = STREAM_STATE_SUCCESS;
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (*(char *)(param_2 + lVar7) != '\0');
  lVar6 = *(longlong *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1);
  if ((lVar6 < 1) || (lVar6 <= lVar7)) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar6 - lVar7;
  }
  StreamInitializer(&plStack_30,param_1,param_3,param_4,0);
  if (cStack_28 == '\0') {
    uVar5 = STREAM_STATE_FAILURE;
  }
  else {
    lVar4 = *param_1;
    if ((*(uint *)((longlong)*(int *)(lVar4 + 4) + 0x18 + (longlong)param_1) & 0x1c0) != 0x40) {
      for (; 0 < lVar6; lVar6 = lVar6 + -1) {
        iVar3 = _sputc___basic_streambuf_DU__char_traits_D_std___std__QEAAHD_Z
                          (*(undefined8 *)
                            ((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1),
                           *(undefined1 *)
                            ((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1));
        if (iVar3 == FILE_OPERATION_FAILURE) goto LAB_1800a1263;
      }
      lVar4 = *param_1;
    }
    lVar4 = _sputn___basic_streambuf_DU__char_traits_D_std___std__QEAA_JPEBD_J_Z
                      (*(undefined8 *)((longlong)*(int *)(lVar4 + 4) + 0x48 + (longlong)param_1),
                       param_2,lVar7);
    if (lVar4 == lVar7) {
      for (; 0 < lVar6; lVar6 = lVar6 + -1) {
        iVar3 = _sputc___basic_streambuf_DU__char_traits_D_std___std__QEAAHD_Z
                          (*(undefined8 *)
                            ((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1),
                           *(undefined1 *)
                            ((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1));
        if (iVar3 == FILE_OPERATION_FAILURE) goto LAB_1800a1263;
      }
    }
    else {
LAB_1800a1263:
      uVar5 = STREAM_STATE_FAILURE;
      uVar8 = STREAM_STATE_FAILURE;
    }
    *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
  }
  _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
            ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,uVar5,0,param_4,uVar8);
  cVar2 = _uncaught_exception_std__YA_NXZ();
  if (cVar2 == '\0') {
    __Osfx___basic_ostream_DU__char_traits_D_std___std__QEAAXXZ(plStack_30);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*plStack_30 + 4) + 0x48 + (longlong)plStack_30);
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 0x10) == (code *)&UNK_18009ee10) {
      if (plVar1[0x10] != 0) {
        _unlock_file();
      }
    }
    else {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return param_1;
}



/**
 * @brief 数据分发处理器
 * 
 * 根据数据类型分发到不同的处理函数。
 * 支持多种数据格式和处理模式。
 * 
 * @param param_1 输出缓冲区指针
 * @param param_2 输入数据指针
 * @param param_3 数据类型标识
 * @param param_4 控制标志
 * @param param_5 数据长度
 * @return longlong* 处理结果指针
 */
longlong *
DataDistributionProcessor(longlong *param_1,longlong *param_2,longlong param_3,ulonglong param_4,uint param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plStack_58;
  longlong lStack_50;
  undefined1 auStack_48 [32];
  
  // 根据数据类型分发处理
  switch(*(undefined4 *)(param_3 + 0x28)) {
  case 0: // 递归处理数据类型
    plVar6 = (longlong *)*param_2;
    lVar7 = param_2[1];
    for (lVar5 = *(longlong *)(param_3 + 0x30); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x58)) {
      plStack_58 = plVar6;
      lStack_50 = lVar7;
      plVar1 = (longlong *)DataDistributionProcessor(auStack_48,&plStack_58,lVar5,param_4 & 0xffffffff,param_5);
      plVar6 = (longlong *)*plVar1;
      lVar7 = plVar1[1];
    }
    goto code_r0x0001800a1605;
    
  case 1: // 类型1处理
    plStack_58 = (longlong *)*param_2;
    lStack_50 = param_2[1];
    plVar1 = (longlong *)FUN_18009fc60(auStack_48,&plStack_58,param_3,param_4,param_5);
    break;
    
  case 2: // 类型2处理
    if ((param_4 & 1) == 0) {
      plVar1 = (longlong *)*param_2;
      lVar7 = param_2[1];
      if (0 < (int)param_5) {
        uVar4 = (ulonglong)param_5;
        plStack_58 = plVar1;
        lStack_50 = lVar7;
        do {
          StreamOutputOperator(lVar7,STREAM_CHAR_TAB);
          if (plVar1 != (longlong *)0x0) {
            StringStreamOutputter(lVar7,plVar1);
          }
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    plStack_58 = (longlong *)*param_2;
    lStack_50 = param_2[1];
    lVar7 = *(longlong *)(param_3 + 8);
    if (lVar7 == 0) {
      lVar2 = GLOBAL_DATA_ADDRESS_1;
      lVar5 = 0;
    }
    else {
      lVar5 = *(longlong *)(param_3 + 0x18);
      lVar2 = lVar7;
    }
    lVar3 = GLOBAL_DATA_ADDRESS_1;
    if (lVar7 != 0) {
      lVar3 = lVar7;
    }
    plVar1 = (longlong *)FUN_1800a0350(auStack_48,lVar3,lVar5 + lVar2,0,&plStack_58);
    break;
    
  case 3: // 类型3处理
    plStack_58 = (longlong *)*param_2;
    lStack_50 = param_2[1];
    plVar1 = (longlong *)FUN_1800a0040(auStack_48,&plStack_58,param_3,param_4,param_5);
    break;
    
  case 4: // 类型4处理
    plStack_58 = (longlong *)*param_2;
    lStack_50 = param_2[1];
    plVar1 = (longlong *)FUN_1800a0820(auStack_48,&plStack_58,param_3,param_4,param_5);
    break;
    
  case 5: // 类型5处理 - XML格式
    plVar1 = (longlong *)*param_2;
    lVar7 = param_2[1];
    plStack_58 = plVar1;
    lStack_50 = lVar7;
    if ((param_4 & 1) == 0) {
      if (0 < (int)param_5) {
        uVar4 = (ulonglong)param_5;
        do {
          StreamOutputOperator(lVar7,STREAM_CHAR_TAB);
          if (plVar1 != (longlong *)0x0) {
            StringStreamOutputter(lVar7,plVar1);
          }
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      plStack_58 = (longlong *)*param_2;
      lStack_50 = param_2[1];
    }
    lVar7 = lStack_50;
    StreamOutputOperator(lStack_50,STREAM_CHAR_LESS_THAN);
    plVar1 = plStack_58;
    if (plStack_58 != (longlong *)0x0) {
      StringStreamOutputter(lVar7,plStack_58);
    }
    StreamOutputOperator(lVar7,STREAM_CHAR_QUESTION);
    if (plVar1 != (longlong *)0x0) {
      StringStreamOutputter(lVar7,plVar1);
    }
    StreamOutputOperator(lVar7,STREAM_CHAR_X);
    if (plVar1 != (longlong *)0x0) {
      StringStreamOutputter(lVar7,plVar1);
    }
    StreamOutputOperator(lVar7,STREAM_CHAR_M);
    if (plVar1 != (longlong *)0x0) {
      StringStreamOutputter(lVar7,plVar1);
    }
    StreamOutputOperator(lVar7,STREAM_CHAR_L);
    if (plVar1 != (longlong *)0x0) {
      StringStreamOutputter(lVar7,plVar1);
    }
    plStack_58 = (longlong *)*param_2;
    lStack_50 = param_2[1];
    plVar1 = (longlong *)FUN_1800a05a0(auStack_48,&plStack_58,param_3);
    lVar7 = *plVar1;
    lVar5 = plVar1[1];
    StreamOutputOperator(lVar5,STREAM_CHAR_QUESTION);
    if (lVar7 != 0) {
      StringStreamOutputter(lVar5,lVar7);
    }
    StreamOutputOperator(lVar5,STREAM_CHAR_GREATER_THAN);
    if (lVar7 != 0) {
      StringStreamOutputter(lVar5,lVar7);
    }
    *param_2 = lVar7;
    param_2[1] = lVar5;
    goto DataTransferProcessor;
    
  case 6: // 类型6处理
    plStack_58 = (longlong *)*param_2;
    lStack_50 = param_2[1];
    plVar1 = (longlong *)FUN_1800a0a00(auStack_48,&plStack_58,param_3,param_4,param_5);
    break;
    
  case 7: // 类型7处理 - 数据流处理
    plStack_58 = (longlong *)*param_2;
    lStack_50 = param_2[1];
    plVar1 = (longlong *)DataStreamProcessor(auStack_48,&plStack_58,param_3,param_4,param_5);
    break;
    
  default:
    goto DataTransferProcessor;
  }
  
  // 处理结果
  plVar6 = (longlong *)*plVar1;
  lVar7 = plVar1[1];
code_r0x0001800a1605:
  *param_2 = (longlong)plVar6;
  param_2[1] = lVar7;
DataTransferProcessor:
  if ((param_4 & 1) == 0) {
    lVar7 = param_2[1];
    StreamOutputOperator(lVar7,STREAM_CHAR_LINE_FEED);
    if (*param_2 != 0) {
      StringStreamOutputter(lVar7);
    }
  }
  lVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar7;
  return param_1;
}



/**
 * @brief 数据格式化处理器
 * 
 * 处理数据格式化操作，支持多种格式转换。
 * 包含跳转表处理和格式化输出。
 * 
 * @param param_1 输出缓冲区指针
 * @param param_2 格式化参数
 * @param param_3 附加参数
 * @param param_4 控制标志
 * @return longlong* 格式化结果指针
 */
longlong * DataFormattingProcessor(longlong *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  longlong in_RAX;
  longlong *plVar2;
  longlong *unaff_RBX;
  undefined8 unaff_RSI;
  longlong in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_R13;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R15;
  if ((uint)in_RAX < 8) {
    *(undefined8 *)(in_R11 + 8) = unaff_RSI;
    *(undefined8 *)(in_R11 + 0x18) = unaff_R14;
                    // WARNING: Could not recover jumptable at 0x0001800a135a. Too many branches
                    // WARNING: Treating indirect jump as call
    plVar2 = (longlong *)
             (*(code *)((ulonglong)*(uint *)(&UNK_1800a1660 + in_RAX * 4) + 0x180000000))();
    return plVar2;
  }
  if ((param_4 & 1) == 0) {
    lVar1 = unaff_RBX[1];
    FUN_1800a0e50(lVar1,10);
    if (*unaff_RBX != 0) {
      FUN_1800a1160(lVar1);
    }
  }
  lVar1 = unaff_RBX[1];
  *param_1 = *unaff_RBX;
  param_1[1] = lVar1;
  return param_1;
}






// 函数: void FUN_1800a1340(void)
void FUN_1800a1340(void)

{
  longlong in_RAX;
  undefined8 unaff_RSI;
  longlong in_R11;
  undefined8 unaff_R14;
  
  *(undefined8 *)(in_R11 + 8) = unaff_RSI;
  *(undefined8 *)(in_R11 + 0x18) = unaff_R14;
                    // WARNING: Could not recover jumptable at 0x0001800a135a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)((ulonglong)*(uint *)(&UNK_1800a1660 + in_RAX * 4) + 0x180000000))();
  return;
}






// 函数: void FUN_1800a146a(undefined8 param_1,undefined8 *param_2)
void FUN_1800a146a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar6;
  longlong *unaff_R12;
  ulonglong unaff_R15;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  *(undefined8 *)(unaff_RBP + -0x38) = uVar1;
  *(undefined8 *)(unaff_RBP + -0x30) = uVar4;
  if ((unaff_R15 & 1) == 0) {
    *(undefined8 *)(unaff_RBP + -0x38) = uVar1;
    *(undefined8 *)(unaff_RBP + -0x30) = uVar4;
    if (0 < (int)*(uint *)(unaff_RBP + 0x48)) {
      uVar1 = *(undefined8 *)(unaff_RBP + -0x30);
      uVar6 = (ulonglong)*(uint *)(unaff_RBP + 0x48);
      lVar2 = *(longlong *)(unaff_RBP + -0x38);
      do {
        FUN_1800a0e50(uVar1,9);
        if (lVar2 != 0) {
          FUN_1800a1160(uVar1,lVar2);
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    lVar2 = unaff_RBX[1];
    *(longlong *)(unaff_RBP + -0x38) = *unaff_RBX;
    *(longlong *)(unaff_RBP + -0x30) = lVar2;
  }
  uVar1 = *(undefined8 *)(unaff_RBP + -0x30);
  FUN_1800a0e50(uVar1,0x3c);
  lVar2 = *(longlong *)(unaff_RBP + -0x38);
  if (lVar2 != 0) {
    FUN_1800a1160(uVar1,lVar2);
  }
  FUN_1800a0e50(uVar1,0x3f);
  if (lVar2 != 0) {
    FUN_1800a1160(uVar1,lVar2);
  }
  FUN_1800a0e50(uVar1,0x78);
  if (lVar2 != 0) {
    FUN_1800a1160(uVar1,lVar2);
  }
  FUN_1800a0e50(uVar1,0x6d);
  if (lVar2 != 0) {
    FUN_1800a1160(uVar1,lVar2);
  }
  FUN_1800a0e50(uVar1,0x6c);
  if (lVar2 != 0) {
    FUN_1800a1160(uVar1,lVar2);
  }
  lVar2 = unaff_RBX[1];
  *(longlong *)(unaff_RBP + -0x38) = *unaff_RBX;
  *(longlong *)(unaff_RBP + -0x30) = lVar2;
  plVar5 = (longlong *)FUN_1800a05a0(unaff_RBP + -0x28,unaff_RBP + -0x38);
  lVar2 = *plVar5;
  lVar3 = plVar5[1];
  FUN_1800a0e50(lVar3,0x3f);
  if (lVar2 != 0) {
    FUN_1800a1160(lVar3,lVar2);
  }
  FUN_1800a0e50(lVar3,0x3e);
  if (lVar2 != 0) {
    FUN_1800a1160(lVar3,lVar2);
  }
  *unaff_RBX = lVar2;
  unaff_RBX[1] = lVar3;
  if ((unaff_R15 & 1) == 0) {
    lVar2 = unaff_RBX[1];
    FUN_1800a0e50(lVar2,10);
    if (*unaff_RBX != 0) {
      FUN_1800a1160(lVar2);
    }
  }
  lVar2 = unaff_RBX[1];
  *unaff_R12 = *unaff_RBX;
  unaff_R12[1] = lVar2;
  return;
}






// 函数: void FUN_1800a15ad(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800a15ad(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_R12;
  ulonglong unaff_R15;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(unaff_RBP + -0x38) = *param_2;
  *(undefined4 *)(unaff_RBP + -0x34) = uVar2;
  *(undefined4 *)(unaff_RBP + -0x30) = uVar3;
  *(undefined4 *)(unaff_RBP + -0x2c) = uVar4;
  puVar5 = (undefined4 *)
           FUN_1800a0820(unaff_RBP + -0x28,unaff_RBP + -0x38,param_3,param_4,
                         *(undefined4 *)(unaff_RBP + 0x48));
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *(undefined4 *)unaff_RBX = *puVar5;
  *(undefined4 *)((longlong)unaff_RBX + 4) = uVar2;
  *(undefined4 *)(unaff_RBX + 1) = uVar3;
  *(undefined4 *)((longlong)unaff_RBX + 0xc) = uVar4;
  if ((unaff_R15 & 1) == 0) {
    lVar1 = unaff_RBX[1];
    FUN_1800a0e50(lVar1,10);
    if (*unaff_RBX != 0) {
      FUN_1800a1160(lVar1);
    }
  }
  lVar1 = unaff_RBX[1];
  *unaff_R12 = *unaff_RBX;
  unaff_R12[1] = lVar1;
  return;
}






// 函数: void FUN_1800a1618(void)
void FUN_1800a1618(void)

{
  longlong lVar1;
  longlong *unaff_RBX;
  longlong *unaff_R12;
  ulonglong unaff_R15;
  
  if ((unaff_R15 & 1) == 0) {
    lVar1 = unaff_RBX[1];
    FUN_1800a0e50(lVar1,10);
    if (*unaff_RBX != 0) {
      FUN_1800a1160(lVar1);
    }
  }
  lVar1 = unaff_RBX[1];
  *unaff_R12 = *unaff_RBX;
  unaff_R12[1] = lVar1;
  return;
}






// 函数: void FUN_1800a162b(void)
void FUN_1800a162b(void)

{
  longlong lVar1;
  longlong *unaff_RBX;
  longlong *unaff_R12;
  
  lVar1 = unaff_RBX[1];
  FUN_1800a0e50(lVar1,10);
  if (*unaff_RBX != 0) {
    FUN_1800a1160(lVar1);
  }
  lVar1 = unaff_RBX[1];
  *unaff_R12 = *unaff_RBX;
  unaff_R12[1] = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800a16b0(longlong param_1,int param_2)
void FUN_1800a16b0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined1 auStack_88 [32];
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  ulonglong *puStack_58;
  longlong *plStack_50;
  char cStack_48;
  undefined1 auStack_47 [7];
  longlong lStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [32];
  ulonglong uStack_10;
  
  uStack_10 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  if (param_2 != -1) {
    uVar1 = **(ulonglong **)(param_1 + 0x40);
    cVar7 = (char)param_2;
    if ((uVar1 == 0) || ((longlong)**(int **)(param_1 + 0x58) + uVar1 <= uVar1)) {
      if (*(longlong *)(param_1 + 0x80) != 0) {
        if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
          uVar2 = *(undefined8 *)(param_1 + 0x90);
          lVar6 = *(longlong *)(param_1 + 0x88);
          **(longlong **)(param_1 + 0x18) = lVar6;
          **(longlong **)(param_1 + 0x38) = lVar6;
          **(int **)(param_1 + 0x50) = (int)uVar2 - (int)lVar6;
        }
        if (*(longlong *)(param_1 + 0x68) == 0) {
          fputc((int)cVar7,*(undefined8 *)(param_1 + 0x80));
        }
        else {
          plStack_50 = &lStack_40;
          puStack_58 = &uStack_10;
          puStack_60 = auStack_30;
          puStack_68 = &uStack_38;
          cStack_48 = cVar7;
          iVar3 = _out___codecvt_DDU_Mbstatet___std__QEBAHAEAU_Mbstatet__PEBD1AEAPEBDPEAD3AEAPEAD_Z
                            (*(longlong *)(param_1 + 0x68),param_1 + 0x74,&cStack_48,auStack_47);
          if (-1 < iVar3) {
            if (iVar3 < 2) {
              lVar6 = lStack_40 - (longlong)auStack_30;
              if ((lVar6 == 0) ||
                 (lVar5 = fwrite(auStack_30,1,lVar6,*(undefined8 *)(param_1 + 0x80)), lVar6 == lVar5
                 )) {
                *(undefined1 *)(param_1 + 0x71) = 1;
              }
            }
            else if (iVar3 == 3) {
              fputc((int)cStack_48,*(undefined8 *)(param_1 + 0x80));
            }
          }
        }
      }
    }
    else {
      pcVar4 = (char *)__Pninc___basic_streambuf_DU__char_traits_D_std___std__IEAAPEADXZ();
      *pcVar4 = cVar7;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_88);
}






// 函数: void FUN_1800a1710(longlong param_1)
void FUN_1800a1710(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBX;
  longlong lVar4;
  char unaff_DIL;
  bool in_ZF;
  char in_stack_00000040;
  longlong in_stack_00000048;
  undefined8 in_stack_00000050;
  ulonglong in_stack_00000078;
  
  if (!in_ZF) {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      uVar1 = *(undefined8 *)(param_1 + 0x90);
      lVar4 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar4;
      **(longlong **)(unaff_RBX + 0x38) = lVar4;
      **(int **)(unaff_RBX + 0x50) = (int)uVar1 - (int)lVar4;
    }
    if (*(longlong *)(unaff_RBX + 0x68) == 0) {
      fputc((int)unaff_DIL,*(undefined8 *)(unaff_RBX + 0x80));
    }
    else {
      in_stack_00000040 = unaff_DIL;
      iVar2 = _out___codecvt_DDU_Mbstatet___std__QEBAHAEAU_Mbstatet__PEBD1AEAPEBDPEAD3AEAPEAD_Z
                        (*(longlong *)(unaff_RBX + 0x68),unaff_RBX + 0x74,&stack0x00000040,
                         &stack0x00000041,&stack0x00000050);
      if (-1 < iVar2) {
        if (iVar2 < 2) {
          lVar4 = in_stack_00000048 - (longlong)&stack0x00000058;
          if ((lVar4 == 0) ||
             (lVar3 = fwrite(&stack0x00000058,1,lVar4,*(undefined8 *)(unaff_RBX + 0x80)),
             lVar4 == lVar3)) {
            *(undefined1 *)(unaff_RBX + 0x71) = 1;
          }
        }
        else if (iVar2 == 3) {
          fputc((int)in_stack_00000040,*(undefined8 *)(unaff_RBX + 0x80));
        }
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000078 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1800a1832(void)
void FUN_1800a1832(void)

{
  ulonglong in_stack_00000078;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000078 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800a1850(longlong param_1)
void FUN_1800a1850(longlong param_1)

{
  int iVar1;
  undefined1 auStack_68 [32];
  longlong *plStack_48;
  longlong lStack_38;
  undefined1 auStack_30 [32];
  ulonglong uStack_10;
  
  uStack_10 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x68) != 0) && (*(char *)(param_1 + 0x71) != '\0')) &&
     (iVar1 = FUN_1800a16b0(param_1,0xffffffff), iVar1 != -1)) {
    plStack_48 = &lStack_38;
    iVar1 = _unshift___codecvt_DDU_Mbstatet___std__QEBAHAEAU_Mbstatet__PEAD1AEAPEAD_Z
                      (*(undefined8 *)(param_1 + 0x68),param_1 + 0x74,auStack_30,&uStack_10);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x71) = 0;
    }
    else if (iVar1 != 1) goto LAB_1800a18fd;
    if (lStack_38 - (longlong)auStack_30 != 0) {
      fwrite(auStack_30,1,lStack_38 - (longlong)auStack_30,*(undefined8 *)(param_1 + 0x80));
    }
  }
LAB_1800a18fd:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800a1920(longlong param_1,longlong param_2,int param_3)
void FUN_1800a1920(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uStackX_8;
  undefined8 auStackX_10 [2];
  undefined8 uStackX_20;
  
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(bool *)(param_1 + 0x7c) = param_3 == 1;
  __Init___basic_streambuf_DU__char_traits_D_std___std__IEAAXXZ();
  if (param_2 != 0) {
    uStackX_8 = 0;
    auStackX_10[0] = 0;
    uStackX_20 = 0;
    _get_stream_buffer_pointers(param_2,&uStackX_8,auStackX_10,&uStackX_20);
    *(undefined8 *)(param_1 + 0x18) = uStackX_8;
    *(undefined8 *)(param_1 + 0x20) = uStackX_8;
    *(undefined8 *)(param_1 + 0x38) = auStackX_10[0];
    *(undefined8 *)(param_1 + 0x40) = auStackX_10[0];
    *(undefined8 *)(param_1 + 0x50) = uStackX_20;
    *(undefined8 *)(param_1 + 0x58) = uStackX_20;
  }
  *(undefined8 *)(param_1 + 0x74) = _DAT_180d48d38;
  *(longlong *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1800a19c0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar3 = 0;
  }
  else {
    cVar1 = FUN_1800a1850();
    lVar3 = param_1;
    if (cVar1 == '\0') {
      lVar3 = 0;
    }
    iVar2 = fclose(*(undefined8 *)(param_1 + 0x80));
    if (iVar2 != 0) {
      lVar3 = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  __Init___basic_streambuf_DU__char_traits_D_std___std__IEAAXXZ(param_1);
  *(undefined8 *)(param_1 + 0x74) = _DAT_180d48d38;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return lVar3;
}






// 函数: void FUN_1800a1a40(undefined8 *param_1)
void FUN_1800a1a40(undefined8 *param_1)

{
  *param_1 = &UNK_18098b928;
  __std_exception_destroy(param_1 + 1);
  return;
}



undefined8 *
FUN_1800a1a70(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_18098b928;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x18,param_3,param_4,uVar1);
  }
  return param_1;
}



undefined8 * FUN_1800a1ae0(undefined8 *param_1,longlong param_2)

{
  *param_1 = &UNK_18098b928;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




