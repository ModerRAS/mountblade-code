#include "FUN_1808de000_definition.h"
/**
 * @file 04_ui_system_part428.c
 * @brief UI系统高级数据验证和处理模块
 * 
 * 本文件包含UI系统中的高级数据验证和处理功能，主要涉及：
 * - UI系统数据验证和检查
 * - UI系统状态管理和控制
 * - UI系统数据处理和转换
 * - UI系统资源管理和分配
 * - UI系统错误处理和异常管理
 * 
 * 主要功能：处理UI系统中的高级数据验证、状态管理、资源分配等，
 * 为UI系统提供高可靠性的数据处理支持。
 * 
 * @version 1.0
 * @date 2025-08-28
 * @author Claude Code
 */

#include "TaleWorlds.Native.Split.h"

/* ============================================================================
 * 常量定义 - UI系统数据验证和处理常量
 * ============================================================================ */

#define UI_VALIDATION_SUCCESS 0                    // 验证成功
#define UI_VALIDATION_ERROR 0x1c                   // 验证错误
#define UI_DATA_TYPE_SIL 0x5453494c                // SIL数据类型
#define UI_DATA_TYPE_BFEB 0x46464542               // BFEB数据类型
#define UI_DATA_TYPE_BFEB2 0x42464542              // BFEB2数据类型
#define UI_DATA_TYPE_IDMC 0x49444d43               // IDMC数据类型
#define UI_DATA_TYPE_BDMC 0x42444d43               // BDMC数据类型
#define UI_DATA_TYPE_LRTC 0x4c525443               // LRTC数据类型
#define UI_DATA_TYPE_TIFE 0x54494645               // TIFE数据类型
#define UI_DATA_TYPE_BIFE 0x42494645               // BIFE数据类型
#define UI_DATA_TYPE_TIVE 0x54495645               // TIVE数据类型
#define UI_DATA_TYPE_BIVE 0x42495645               // BIVE数据类型
#define UI_DATA_TYPE_TNVE 0x544e5645               // TNVE数据类型
#define UI_DATA_TYPE_BTVE 0x42545645               // BTVE数据类型
#define UI_DATA_TYPE_ORTC 0x4f525443               // ORTC数据类型
#define UI_DATA_TYPE_VRUC 0x56525543               // VRUC数据类型

#define UI_MAX_DATA_SIZE 0x5a                      // 最大数据大小
#define UI_EXTENDED_DATA_SIZE 0x6e                 // 扩展数据大小
#define UI_PROCESSING_SIZE_0x3b 0x3b                // 处理大小0x3b
#define UI_PROCESSING_SIZE_0x40 0x40                // 处理大小0x40
#define UI_PROCESSING_SIZE_0x53 0x53                // 处理大小0x53
#define UI_PROCESSING_SIZE_0x55 0x55                // 处理大小0x55
#define UI_PROCESSING_SIZE_0x31 0x31                // 处理大小0x31

#define UI_OFFSET_0x10 0x10                        // 偏移量0x10
#define UI_OFFSET_0x18 0x18                        // 偏移量0x18
#define UI_OFFSET_0x40 0x40                        // 偏移量0x40
#define UI_OFFSET_0x44 0x44                        // 偏移量0x44
#define UI_OFFSET_0x48 0x48                        // 偏移量0x48
#define UI_OFFSET_0x50 0x50                        // 偏移量0x50
#define UI_OFFSET_0x54 0x54                        // 偏移量0x54
#define UI_OFFSET_0x58 0x58                        // 偏移量0x58
#define UI_OFFSET_0x5c 0x5c                        // 偏移量0x5c
#define UI_OFFSET_0x60 0x60                        // 偏移量0x60
#define UI_OFFSET_0x68 0x68                        // 偏移量0x68
#define UI_OFFSET_0x6c 0x6c                        // 偏移量0x6c
#define UI_OFFSET_0x70 0x70                        // 偏移量0x70
#define UI_OFFSET_0x74 0x74                        // 偏移量0x74
#define UI_OFFSET_0x78 0x78                        // 偏移量0x78
#define UI_OFFSET_0x7c 0x7c                        // 偏移量0x7c
#define UI_OFFSET_0x7d 0x7d                        // 偏移量0x7d
#define UI_OFFSET_0x80 0x80                        // 偏移量0x80
#define UI_OFFSET_0xd8 0xd8                        // 偏移量0xd8
#define UI_OFFSET_0xdc 0xdc                        // 偏移量0xdc
#define UI_OFFSET_0xe0 0xe0                        // 偏移量0xe0
#define UI_OFFSET_0xe8 0xe8                        // 偏移量0xe8
#define UI_OFFSET_0xec 0xec                        // 偏移量0xec
#define UI_OFFSET_0xf8 0xf8                        // 偏移量0xf8

/* ============================================================================
 * 函数别名定义 - 用于代码可读性和维护性
 * ============================================================================ */

#define ui_system_empty_function_1 FUN_18089ef24
#define ui_system_data_validator_1 FUN_18089ef40
#define ui_system_data_validator_2 FUN_18089f0b0
#define ui_system_data_validator_3 FUN_18089f112
#define ui_system_data_processor_1 FUN_18089f31e
#define ui_system_empty_function_2 FUN_18089f474
#define ui_system_empty_function_3 FUN_18089f47c
#define ui_system_data_processor_2 FUN_18089f530
#define ui_system_data_processor_3 FUN_18089f571
#define ui_system_empty_function_4 FUN_18089f7fd
#define ui_system_data_processor_4 FUN_18089f830
#define ui_system_data_processor_5 FUN_18089f970
#define ui_system_data_processor_6 FUN_18089f9b3
#define ui_system_data_processor_7 FUN_18089f9f6
#define ui_system_data_processor_8 FUN_18089fa3c
#define ui_system_data_processor_9 FUN_18089fac2
#define ui_system_data_processor_10 FUN_18089fad8
#define ui_system_data_processor_11 FUN_18089fb06
#define ui_system_empty_function_5 FUN_18089fb2b
#define ui_system_data_processor_12 FUN_18089fb40
#define ui_system_data_processor_13 FUN_18089fba0
#define ui_system_data_processor_14 FUN_18089fc50
#define ui_system_data_processor_15 FUN_18089fd30
#define ui_system_data_processor_16 FUN_18089fed0
#define ui_system_data_processor_17 FUN_18089ffe0

// 函数: void FUN_18089ef24(void)
void FUN_18089ef24(void)

{
  return;
}



uint64_t FUN_18089ef40(int64_t param_1,int64_t *param_2)

{
  uint64_t uVar1;
  int32_t auStackX_10 [6];
  
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  auStackX_10[0] = *(int32_t *)(param_1 + 0x50);
  uVar1 = (**(code **)**(uint64_t **)(*param_2 + 8))(*(uint64_t **)(*param_2 + 8),auStackX_10,4)
  ;
  if ((int)uVar1 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    auStackX_10[0] = *(int32_t *)(param_1 + 0x54);
    uVar1 = (**(code **)**(uint64_t **)(*param_2 + 8))
                      (*(uint64_t **)(*param_2 + 8),auStackX_10,4);
    if ((int)uVar1 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      auStackX_10[0] = *(int32_t *)(param_1 + 0x58);
      uVar1 = (**(code **)**(uint64_t **)(*param_2 + 8))
                        (*(uint64_t **)(*param_2 + 8),auStackX_10,4);
      if ((int)uVar1 == 0) {
        if (*(int *)(param_2[1] + 0x18) != 0) {
          return 0x1c;
        }
        auStackX_10[0] = *(int32_t *)(param_1 + 0x60);
        uVar1 = (**(code **)**(uint64_t **)(*param_2 + 8))
                          (*(uint64_t **)(*param_2 + 8),auStackX_10,4);
        if (((((int)uVar1 == 0) && (uVar1 = FUN_180898eb0(param_2,param_1 + 100), (int)uVar1 == 0))
            && (uVar1 = FUN_180898eb0(param_2,param_1 + 0x68), (int)uVar1 == 0)) &&
           (((uVar1 = FUN_180898eb0(param_2,param_1 + 0x6c), (int)uVar1 == 0 &&
             (uVar1 = FUN_180898eb0(param_2,param_1 + 0x70), (int)uVar1 == 0)) &&
            ((uVar1 = FUN_180898eb0(param_2,param_1 + 0x74), (int)uVar1 == 0 &&
             (uVar1 = FUN_180898eb0(param_2,param_1 + 0x78), (int)uVar1 == 0)))))) {
          uVar1 = FUN_1808a7c40(param_2,param_1 + 0x5c,0x74);
        }
      }
    }
  }
  return uVar1;
}



uint64_t FUN_18089f0b0(int64_t param_1,int64_t *param_2)

{
  uint64_t uVar1;
  int32_t auStackX_18 [2];
  int8_t auStack_68 [64];
  int8_t auStack_28 [32];
  
  uVar1 = FUN_1808ddd30(param_2,auStack_28,1,0x5453494c,0x46464542);
  if (((int)uVar1 == 0) &&
     (uVar1 = FUN_1808ddd30(param_2,auStack_68,0,0x42464542,0), (int)uVar1 == 0)) {
    if (*(int *)(param_2[1] + 0x18) == 0) {
      uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
      if (((int)uVar1 == 0) &&
         ((0x5a < *(uint *)(param_2 + 8) ||
          (uVar1 = FUN_1808afd90(param_2,param_1 + 0x44), (int)uVar1 == 0)))) {
        if (*(int *)(param_2[1] + 0x18) == 0) {
          switch(*(int32_t *)(param_1 + 0x60)) {
          default:
            auStackX_18[0] = 0;
            break;
          case 1:
            auStackX_18[0] = 1;
            break;
          case 2:
            auStackX_18[0] = 2;
            break;
          case 3:
            auStackX_18[0] = 3;
            break;
          case 4:
            auStackX_18[0] = 4;
            break;
          case 5:
            auStackX_18[0] = 5;
            break;
          case 6:
            auStackX_18[0] = 6;
            break;
          case 7:
            auStackX_18[0] = 7;
            break;
          case 8:
            auStackX_18[0] = 8;
            break;
          case 9:
            auStackX_18[0] = 9;
            break;
          case 10:
            auStackX_18[0] = 10;
            break;
          case 0xb:
            auStackX_18[0] = 0xb;
            break;
          case 0xc:
            auStackX_18[0] = 0xc;
            break;
          case 0xd:
            auStackX_18[0] = 0xd;
            break;
          case 0xe:
            auStackX_18[0] = 0xe;
            break;
          case 0xf:
            auStackX_18[0] = 0xf;
            break;
          case 0x10:
            auStackX_18[0] = 0x10;
            break;
          case 0x11:
            auStackX_18[0] = 0x11;
            break;
          case 0x12:
            auStackX_18[0] = 0x12;
            break;
          case 0x13:
            auStackX_18[0] = 0x13;
            break;
          case 0x14:
            auStackX_18[0] = 0x14;
            break;
          case 0x15:
            auStackX_18[0] = 0x15;
            break;
          case 0x16:
            auStackX_18[0] = 0x16;
            break;
          case 0x17:
            auStackX_18[0] = 0x17;
            break;
          case 0x18:
            auStackX_18[0] = 0x18;
            break;
          case 0x19:
            auStackX_18[0] = 0x19;
            break;
          case 0x1a:
            auStackX_18[0] = 0x1a;
            break;
          case 0x1b:
            auStackX_18[0] = 0x1b;
            break;
          case 0x1c:
            auStackX_18[0] = 0x1c;
            break;
          case 0x1d:
            auStackX_18[0] = 0x1d;
            break;
          case 0x1e:
            auStackX_18[0] = 0x1e;
            break;
          case 0x1f:
            auStackX_18[0] = 0x1f;
            break;
          case 0x20:
            auStackX_18[0] = 0x20;
            break;
          case 0x21:
            auStackX_18[0] = 0x21;
            break;
          case 0x22:
            auStackX_18[0] = 0x22;
            break;
          case 0x23:
            auStackX_18[0] = 0x23;
            break;
          case 0x24:
            auStackX_18[0] = 0x24;
          }
          uVar1 = (**(code **)**(uint64_t **)(*param_2 + 8))
                            (*(uint64_t **)(*param_2 + 8),auStackX_18,4);
          if (((int)uVar1 == 0) &&
             (uVar1 = FUN_1808a7c90(param_2,param_1 + 0x40,0x3d), (int)uVar1 == 0)) {
                    // WARNING: Subroutine does not return
            SystemThreadManager(param_2,auStack_68);
          }
        }
        else {
          uVar1 = 0x1c;
        }
      }
    }
    else {
      uVar1 = 0x1c;
    }
  }
  return uVar1;
}



uint64_t FUN_18089f112(void)

{
  int64_t in_RAX;
  uint64_t uVar1;
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  int32_t in_stack_000000b0;
  
  if (*(int *)(in_RAX + 0x18) == 0) {
    uVar1 = SystemCleanupProcessor(*unaff_RBX,unaff_RSI + 0x10);
    if (((int)uVar1 == 0) &&
       ((0x5a < *(uint *)(unaff_RBX + 8) || (uVar1 = FUN_1808afd90(), (int)uVar1 == 0)))) {
      if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        switch(*(int32_t *)(unaff_RSI + 0x60)) {
        default:
          in_stack_000000b0 = 0;
          break;
        case 1:
          in_stack_000000b0 = 1;
          break;
        case 2:
          in_stack_000000b0 = 2;
          break;
        case 3:
          in_stack_000000b0 = 3;
          break;
        case 4:
          in_stack_000000b0 = 4;
          break;
        case 5:
          in_stack_000000b0 = 5;
          break;
        case 6:
          in_stack_000000b0 = 6;
          break;
        case 7:
          in_stack_000000b0 = 7;
          break;
        case 8:
          in_stack_000000b0 = 8;
          break;
        case 9:
          in_stack_000000b0 = 9;
          break;
        case 10:
          in_stack_000000b0 = 10;
          break;
        case 0xb:
          in_stack_000000b0 = 0xb;
          break;
        case 0xc:
          in_stack_000000b0 = 0xc;
          break;
        case 0xd:
          in_stack_000000b0 = 0xd;
          break;
        case 0xe:
          in_stack_000000b0 = 0xe;
          break;
        case 0xf:
          in_stack_000000b0 = 0xf;
          break;
        case 0x10:
          in_stack_000000b0 = 0x10;
          break;
        case 0x11:
          in_stack_000000b0 = 0x11;
          break;
        case 0x12:
          in_stack_000000b0 = 0x12;
          break;
        case 0x13:
          in_stack_000000b0 = 0x13;
          break;
        case 0x14:
          in_stack_000000b0 = 0x14;
          break;
        case 0x15:
          in_stack_000000b0 = 0x15;
          break;
        case 0x16:
          in_stack_000000b0 = 0x16;
          break;
        case 0x17:
          in_stack_000000b0 = 0x17;
          break;
        case 0x18:
          in_stack_000000b0 = 0x18;
          break;
        case 0x19:
          in_stack_000000b0 = 0x19;
          break;
        case 0x1a:
          in_stack_000000b0 = 0x1a;
          break;
        case 0x1b:
          in_stack_000000b0 = 0x1b;
          break;
        case 0x1c:
          in_stack_000000b0 = 0x1c;
          break;
        case 0x1d:
          in_stack_000000b0 = 0x1d;
          break;
        case 0x1e:
          in_stack_000000b0 = 0x1e;
          break;
        case 0x1f:
          in_stack_000000b0 = 0x1f;
          break;
        case 0x20:
          in_stack_000000b0 = 0x20;
          break;
        case 0x21:
          in_stack_000000b0 = 0x21;
          break;
        case 0x22:
          in_stack_000000b0 = 0x22;
          break;
        case 0x23:
          in_stack_000000b0 = 0x23;
          break;
        case 0x24:
          in_stack_000000b0 = 0x24;
        }
        uVar1 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                          (*(uint64_t **)(*unaff_RBX + 8),&stack0x000000b0,4);
        if (((int)uVar1 == 0) && (uVar1 = FUN_1808a7c90(), (int)uVar1 == 0)) {
                    // WARNING: Subroutine does not return
          SystemThreadManager();
        }
      }
      else {
        uVar1 = 0x1c;
      }
    }
  }
  else {
    uVar1 = 0x1c;
  }
  return uVar1;
}





// 函数: void FUN_18089f31e(void)
void FUN_18089f31e(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int64_t *unaff_RBX;
  int unaff_EBP;
  int64_t unaff_RSI;
  int32_t in_stack_000000b0;
  
  if (in_EAX == 0x1b) {
    if (*(uint *)(unaff_RBX + 8) < 0x3b) {
      iVar1 = FUN_1808a87d0();
      if (iVar1 != 0) {
        return;
      }
      goto LAB_18089f45f;
    }
  }
  else if ((in_EAX == 0x12) && (*(uint *)(unaff_RBX + 8) < 0x40)) {
    iVar1 = FUN_1808ddd30();
    if (iVar1 != 0) {
      return;
    }
    iVar1 = unaff_EBP;
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      in_stack_000000b0 = 6;
      iVar1 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                        (*(uint64_t **)(*unaff_RBX + 8),&stack0x000000b0,4);
    }
    if (iVar1 != 0) {
      return;
    }
    iVar1 = 0;
    do {
      iVar2 = FUN_1808acf30();
      if (iVar2 != 0) {
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
    if (*(uint *)(unaff_RBX + 8) < 0x6e) {
      unaff_EBP = 0;
    }
    else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      in_stack_000000b0 = CONCAT31(in_stack_000000b0._1_3_,*(int8_t *)(unaff_RSI + 0x5c));
      unaff_EBP = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                            (*(uint64_t **)(*unaff_RBX + 8),&stack0x000000b0,1);
    }
    if (unaff_EBP != 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    SystemThreadManager();
  }
  iVar1 = FUN_1808a1090();
  if (iVar1 != 0) {
    return;
  }
LAB_18089f45f:
                    // WARNING: Subroutine does not return
  SystemThreadManager();
}





// 函数: void FUN_18089f474(void)
void FUN_18089f474(void)

{
  return;
}





// 函数: void FUN_18089f47c(void)
void FUN_18089f47c(void)

{
  return;
}



uint64_t FUN_18089f530(int64_t param_1,uint64_t *param_2,int32_t param_3,int32_t param_4,
                       char param_5)

{
  uint uVar1;
  uint64_t uVar2;
  int8_t auStack_70 [64];
  int8_t auStack_30 [40];
  
  uVar2 = FUN_1808ddd30(param_2,auStack_30,1,0x5453494c,param_3);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1808ddd30(param_2,auStack_70,0,param_4,0), (int)uVar2 == 0))
  {
    if (*(int *)(param_2[1] + 0x18) == 0) {
      uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
      uVar2 = (uint64_t)uVar1;
      if ((uVar1 == 0) &&
         ((param_5 == '\0' || (uVar2 = FUN_1808a1870(param_1 + 0x48,param_2), (int)uVar2 == 0)))) {
                    // WARNING: Subroutine does not return
        SystemThreadManager(param_2,auStack_70);
      }
    }
    else {
      uVar2 = 0x1c;
    }
  }
  return uVar2;
}



uint64_t FUN_18089f571(void)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  char in_stack_000000d0;
  
  uVar2 = FUN_1808ddd30();
  if ((int)uVar2 == 0) {
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar1 = SystemCleanupProcessor(*unaff_RBX,unaff_RBP + 0x10);
      uVar2 = (uint64_t)uVar1;
      if ((uVar1 == 0) &&
         ((in_stack_000000d0 == '\0' || (uVar2 = FUN_1808a1870(unaff_RBP + 0x48), (int)uVar2 == 0)))
         ) {
                    // WARNING: Subroutine does not return
        SystemThreadManager();
      }
    }
    else {
      uVar2 = 0x1c;
    }
  }
  return uVar2;
}





// 函数: void FUN_18089f7fd(void)
void FUN_18089f7fd(void)

{
  return;
}



uint64_t FUN_18089f830(int64_t param_1,int64_t *param_2)

{
  uint64_t uVar1;
  int32_t auStackX_18 [4];
  int8_t auStack_48 [32];
  int8_t auStack_28 [32];
  
  uVar1 = FUN_1808ddd30(param_2,auStack_28,1,0x5453494c,0x49444d43);
  if (((int)uVar1 == 0) &&
     (uVar1 = FUN_1808ddd30(param_2,auStack_48,0,0x42444d43,0), (int)uVar1 == 0)) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
    if ((int)uVar1 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      auStackX_18[0] = *(int32_t *)(param_1 + 0xd8);
      uVar1 = (**(code **)**(uint64_t **)(*param_2 + 8))
                        (*(uint64_t **)(*param_2 + 8),auStackX_18,4);
      if ((int)uVar1 == 0) {
        if (*(int *)(param_2[1] + 0x18) != 0) {
          return 0x1c;
        }
        uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0xdc);
        if (((int)uVar1 == 0) &&
           (uVar1 = FUN_1808a7c40(param_2,param_1 + 0xec,0x80), (int)uVar1 == 0)) {
                    // WARNING: Subroutine does not return
          SystemThreadManager(param_2,auStack_48);
        }
      }
    }
  }
  return uVar1;
}



uint64_t FUN_18089f970(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint uVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  int16_t auStackX_18 [4];
  int16_t auStackX_20 [4];
  int32_t auStack_58 [2];
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int8_t auStack_40 [40];
  
  puVar3 = (int32_t *)SystemDataFlowProcessor();
  uStack_50 = *puVar3;
  uStack_4c = puVar3[1];
  uStack_48 = puVar3[2];
  uStack_44 = puVar3[3];
  uVar4 = FUN_1808ddd30(param_2,auStack_40,0,0x4c525443,0);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (*(int *)(param_2[1] + 0x18) == 0) {
    uVar2 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
    uVar4 = (uint64_t)uVar2;
    if (uVar2 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar2 = SystemCleanupProcessor(*param_2,param_1 + 0x20);
      uVar4 = (uint64_t)uVar2;
      if (uVar2 == 0) {
        uVar4 = 0x1c;
        uVar2 = 0;
        if ((*(uint *)(param_2 + 8) < 0x5a) && (uVar2 = 0x1c, *(int *)(param_2[1] + 0x18) == 0)) {
          auStack_58[0] = uStack_50;
          lVar1 = *param_2;
          uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                            (*(uint64_t **)(lVar1 + 8),auStack_58,4);
          if (uVar2 == 0) {
            auStackX_18[0] = (int16_t)uStack_4c;
            uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                              (*(uint64_t **)(lVar1 + 8),auStackX_18,2);
            if (uVar2 == 0) {
              auStackX_20[0] = uStack_4c._2_2_;
              uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                                (*(uint64_t **)(lVar1 + 8),auStackX_20,2);
              if (uVar2 == 0) {
                uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                                  (*(uint64_t **)(lVar1 + 8),&uStack_48,8);
              }
            }
          }
        }
        if (uVar2 != 0) {
          return (uint64_t)uVar2;
        }
        if (*(int *)(param_2[1] + 0x18) == 0) {
          uVar2 = SystemCleanupProcessor(*param_2,param_1 + 0x30);
          uVar4 = (uint64_t)uVar2;
          if (uVar2 == 0) {
            uVar4 = FUN_180898e70(param_2,param_1 + 0x40);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
                    // WARNING: Subroutine does not return
            SystemThreadManager(param_2,auStack_40);
          }
        }
      }
    }
    return uVar4;
  }
  return 0x1c;
}



uint64_t FUN_18089f9b3(void)

{
  int64_t lVar1;
  uint uVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  int64_t unaff_RBP;
  uint unaff_ESI;
  int64_t *unaff_RDI;
  int32_t in_stack_00000030;
  int32_t uStack0000000000000038;
  int16_t uStack000000000000003c;
  int16_t uStack000000000000003e;
  int16_t in_stack_000000a0;
  int16_t in_stack_000000a8;
  
  if (*(uint *)(in_RAX + 0x18) != unaff_ESI) {
    return 0x1c;
  }
  uVar2 = SystemCleanupProcessor(*unaff_RDI,unaff_RBP + 0x10);
  uVar3 = (uint64_t)uVar2;
  if (uVar2 == 0) {
    if (*(uint *)(unaff_RDI[1] + 0x18) != unaff_ESI) {
      return 0x1c;
    }
    uVar2 = SystemCleanupProcessor(*unaff_RDI,unaff_RBP + 0x20);
    uVar3 = (uint64_t)uVar2;
    if (uVar2 == 0) {
      uVar3 = 0x1c;
      uVar2 = unaff_ESI;
      if ((*(uint *)(unaff_RDI + 8) < 0x5a) &&
         (uVar2 = 0x1c, *(uint *)(unaff_RDI[1] + 0x18) == unaff_ESI)) {
        in_stack_00000030 = uStack0000000000000038;
        lVar1 = *unaff_RDI;
        uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                          (*(uint64_t **)(lVar1 + 8),&stack0x00000030,4);
        if (uVar2 == 0) {
          in_stack_000000a0 = uStack000000000000003c;
          uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                            (*(uint64_t **)(lVar1 + 8),&stack0x000000a0,2);
          if (uVar2 == 0) {
            in_stack_000000a8 = uStack000000000000003e;
            uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                              (*(uint64_t **)(lVar1 + 8),&stack0x000000a8,2);
            if (uVar2 == 0) {
              uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                                (*(uint64_t **)(lVar1 + 8),&stack0x00000040,8);
            }
          }
        }
      }
      if (uVar2 != 0) {
        return (uint64_t)uVar2;
      }
      if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
        uVar2 = SystemCleanupProcessor(*unaff_RDI,unaff_RBP + 0x30);
        uVar3 = (uint64_t)uVar2;
        if (uVar2 == 0) {
          uVar3 = FUN_180898e70();
          if ((int)uVar3 == 0) {
                    // WARNING: Subroutine does not return
            SystemThreadManager();
          }
          return uVar3;
        }
      }
    }
  }
  return uVar3;
}



uint64_t FUN_18089f9f6(void)

{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t unaff_RBP;
  uint unaff_ESI;
  int64_t *unaff_RDI;
  int32_t in_stack_00000030;
  int32_t uStack0000000000000038;
  int16_t uStack000000000000003c;
  int16_t uStack000000000000003e;
  int16_t in_stack_000000a0;
  int16_t in_stack_000000a8;
  
  uVar2 = SystemCleanupProcessor(*unaff_RDI,unaff_RBP + 0x20);
  uVar3 = (uint64_t)uVar2;
  if (uVar2 == 0) {
    uVar3 = 0x1c;
    uVar2 = unaff_ESI;
    if ((*(uint *)(unaff_RDI + 8) < 0x5a) &&
       (uVar2 = 0x1c, *(uint *)(unaff_RDI[1] + 0x18) == unaff_ESI)) {
      in_stack_00000030 = uStack0000000000000038;
      lVar1 = *unaff_RDI;
      uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                        (*(uint64_t **)(lVar1 + 8),&stack0x00000030,4);
      if (uVar2 == 0) {
        in_stack_000000a0 = uStack000000000000003c;
        uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                          (*(uint64_t **)(lVar1 + 8),&stack0x000000a0,2);
        if (uVar2 == 0) {
          in_stack_000000a8 = uStack000000000000003e;
          uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                            (*(uint64_t **)(lVar1 + 8),&stack0x000000a8,2);
          if (uVar2 == 0) {
            uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                              (*(uint64_t **)(lVar1 + 8),&stack0x00000040,8);
          }
        }
      }
    }
    if (uVar2 != 0) {
      return (uint64_t)uVar2;
    }
    if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
      uVar2 = SystemCleanupProcessor(*unaff_RDI,unaff_RBP + 0x30);
      uVar3 = (uint64_t)uVar2;
      if (uVar2 == 0) {
        uVar3 = FUN_180898e70();
        if ((int)uVar3 != 0) {
          return uVar3;
        }
                    // WARNING: Subroutine does not return
        SystemThreadManager();
      }
    }
  }
  return uVar3;
}



uint64_t FUN_18089fa3c(void)

{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_RDI;
  uint64_t in_stack_00000038;
  int16_t in_stack_000000a0;
  int16_t in_stack_000000a8;
  
  lVar1 = *unaff_RDI;
  uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))();
  if (uVar2 == 0) {
    in_stack_000000a0 = in_stack_00000038._4_2_;
    uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                      (*(uint64_t **)(lVar1 + 8),&stack0x000000a0,2);
    if (uVar2 == 0) {
      in_stack_000000a8 = in_stack_00000038._6_2_;
      uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                        (*(uint64_t **)(lVar1 + 8),&stack0x000000a8,2);
      if (uVar2 == 0) {
        uVar2 = (**(code **)**(uint64_t **)(lVar1 + 8))
                          (*(uint64_t **)(lVar1 + 8),&stack0x00000040,8);
      }
    }
  }
  if (uVar2 != 0) {
    return (uint64_t)uVar2;
  }
  if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
    uVar2 = SystemCleanupProcessor(*unaff_RDI,unaff_RBP + 0x30);
    unaff_RBX = (uint64_t)uVar2;
    if (uVar2 == 0) {
      uVar3 = FUN_180898e70();
      if ((int)uVar3 == 0) {
                    // WARNING: Subroutine does not return
        SystemThreadManager();
      }
      return uVar3;
    }
  }
  return unaff_RBX & 0xffffffff;
}



uint64_t FUN_18089fac2(void)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  uint unaff_ESI;
  uint64_t *unaff_RDI;
  
  if (unaff_ESI != 0) {
    return (uint64_t)unaff_ESI;
  }
  if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
    uVar1 = SystemCleanupProcessor(*unaff_RDI,unaff_RBP + 0x30);
    unaff_RBX = (uint64_t)uVar1;
    if (uVar1 == 0) {
      uVar2 = FUN_180898e70();
      if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
        SystemThreadManager();
      }
      return uVar2;
    }
  }
  return unaff_RBX & 0xffffffff;
}



uint64_t FUN_18089fad8(void)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t *unaff_RDI;
  
  if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
    uVar1 = SystemCleanupProcessor(*unaff_RDI,unaff_RBP + 0x30);
    unaff_RBX = (uint64_t)uVar1;
    if (uVar1 == 0) {
      uVar2 = FUN_180898e70();
      if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
        SystemThreadManager();
      }
      return uVar2;
    }
  }
  return unaff_RBX & 0xffffffff;
}





// 函数: void FUN_18089fb06(void)
void FUN_18089fb06(void)

{
  int iVar1;
  
  iVar1 = FUN_180898e70();
  if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
    SystemThreadManager();
  }
  return;
}





// 函数: void FUN_18089fb2b(void)
void FUN_18089fb2b(void)

{
  return;
}





// 函数: void FUN_18089fb40(int64_t param_1,uint64_t param_2)
void FUN_18089fb40(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  int8_t auStack_28 [32];
  
  iVar1 = FUN_1808ddd30(param_2,auStack_28,0,0x4f525443,0);
  if (iVar1 == 0) {
    iVar1 = FUN_1808a7b00(param_2,param_1 + 8);
    if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
      SystemThreadManager(param_2,auStack_28);
    }
  }
  return;
}



uint64_t FUN_18089fba0(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int8_t auStack_28 [32];
  
  uVar1 = FUN_1808ddd30(param_2,auStack_28,0,0x56525543,0);
  if ((int)uVar1 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
    if ((int)uVar1 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0x20);
      if (((int)uVar1 == 0) && (uVar1 = FUN_1808a4fb0(param_2,param_1 + 0x30,1,0), (int)uVar1 == 0))
      {
                    // WARNING: Subroutine does not return
        SystemThreadManager(param_2,auStack_28);
      }
    }
  }
  return uVar1;
}



uint64_t FUN_18089fc50(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int8_t auStack_48 [32];
  int8_t auStack_28 [32];
  
  uVar1 = FUN_1808ddd30(param_2,auStack_28,1,0x5453494c,0x54494645);
  if (((int)uVar1 == 0) &&
     (uVar1 = FUN_1808ddd30(param_2,auStack_48,0,0x42494645,0), (int)uVar1 == 0)) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
    if ((int)uVar1 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0xd8);
      if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
        SystemThreadManager(param_2,auStack_48);
      }
    }
  }
  return uVar1;
}



uint64_t FUN_18089fd30(int64_t param_1,int64_t *param_2)

{
  uint64_t uVar1;
  int32_t auStackX_10 [6];
  
  if (*(uint *)(param_2 + 8) < 0x55) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    auStackX_10[0] = *(int32_t *)(param_1 + 0x50);
    uVar1 = (**(code **)**(uint64_t **)(*param_2 + 8))
                      (*(uint64_t **)(*param_2 + 8),auStackX_10,4);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    auStackX_10[0] = *(int32_t *)(param_1 + 0x54);
    uVar1 = (**(code **)**(uint64_t **)(*param_2 + 8))
                      (*(uint64_t **)(*param_2 + 8),auStackX_10,4);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  else {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    auStackX_10[0] = *(int32_t *)(param_1 + 0x78);
    uVar1 = (**(code **)**(uint64_t **)(*param_2 + 8))
                      (*(uint64_t **)(*param_2 + 8),auStackX_10,4);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  auStackX_10[0] = *(int32_t *)(param_1 + 0x58);
  uVar1 = (**(code **)**(uint64_t **)(*param_2 + 8))(*(uint64_t **)(*param_2 + 8),auStackX_10,4)
  ;
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  auStackX_10[0] = *(int32_t *)(param_1 + 0x5c);
  uVar1 = (**(code **)**(uint64_t **)(*param_2 + 8))(*(uint64_t **)(*param_2 + 8),auStackX_10,4)
  ;
  if ((int)uVar1 == 0) {
    if (*(uint *)(param_2 + 8) < 0x53) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0x60);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    else {
      uVar1 = FUN_180898eb0(param_2,param_1 + 0x70);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_180898eb0(param_2,param_1 + 0x74);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    uVar1 = FUN_1808a7c90(param_2,param_1 + 0x7c,0x7d);
    return uVar1;
  }
  return uVar1;
}



uint64_t FUN_18089fed0(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int8_t auStack_48 [32];
  int8_t auStack_28 [32];
  
  uVar1 = FUN_1808ddd30(param_2,auStack_28,1,0x5453494c,0x54495645);
  if (((int)uVar1 == 0) &&
     (uVar1 = FUN_1808ddd30(param_2,auStack_48,0,0x42495645,0), (int)uVar1 == 0)) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
    if ((int)uVar1 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0xd8);
      if ((((int)uVar1 == 0) && (uVar1 = FUN_180898eb0(param_2,param_1 + 0xf8), (int)uVar1 == 0)) &&
         (uVar1 = FUN_1808a6e50(param_2,param_1 + 0xe8,1,param_1), (int)uVar1 == 0)) {
                    // WARNING: Subroutine does not return
        SystemThreadManager(param_2,auStack_48);
      }
    }
  }
  return uVar1;
}



uint64_t FUN_18089ffe0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int8_t auStack_28 [32];
  
  if (*(uint *)(param_2 + 0x40) < 0x31) {
    uVar1 = FUN_1808a3d50(param_1,param_2,0x544e5645);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = FUN_1808ddd30(param_2,auStack_28,1,0x5453494c,0x544e5645);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_1808a3d50(param_1,param_2,0x42545645);
      if ((int)uVar1 == 0) {
        uVar1 = FUN_1808a1610(param_1,param_2);
        if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
          SystemThreadManager(param_2,auStack_28);
        }
      }
    }
  }
  return uVar1;
}





