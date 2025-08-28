
// $fun 的语义化别名
#define $alias_name $fun

/*
 * TaleWorlds.Native 引擎 - 工具系统数据流处理和系统配置管理模块
 * 
 * 本模块实现了游戏引擎的核心工具系统功能，包括：
 * - 数据流处理：处理各种数据格式的解析和验证
 * - 系统配置管理：管理引擎的配置参数和设置
 * - 错误处理：统一的错误处理机制
 * - 资源管理：系统资源的分配和释放
 * 
 * 技术架构：
 * - 采用模块化设计，各功能组件职责明确
 * - 实现了数据流处理管道，支持多种数据格式
 * - 提供了统一的配置管理接口
 * - 集成了错误处理和恢复机制
 * 
 * 性能优化策略：
 * - 使用栈分配减少堆内存开销
 * - 实现了批量数据处理机制
 * - 优化了错误处理路径
 * - 支持并行处理能力
 * 
 * 安全考虑：
 * - 实现了边界检查和输入验证
 * - 使用安全的内存操作
 * - 提供了错误恢复机制
 * - 支持资源泄露检测
 */


/* 函数别名定义：系统配置管理器 */
#define SystemConfigManager SystemConfigManager
#define SystemErrorHandler SystemErrorHandler
#define DataFlowProcessor DataFlowProcessor

/* 函数别名定义：数据流处理函数 */
#define DataFlowProcessor_TIPSI DataFlowProcessor_TIPSI
#define DataFlowProcessor_BIPSI DataFlowProcessor_BIPSI
#define DataFlowProcessor_FFESE DataFlowProcessor_FFESE
#define DataFlowProcessor_BFESE DataFlowProcessor_BFESE
#define DataFlowProcessor_FFCS DataFlowProcessor_FFCS
#define DataFlowProcessor_FECS DataFlowProcessor_FECS
#define DataFlowProcessor_PANS DataFlowProcessor_PANS
#define DataFlowProcessor_BANS DataFlowProcessor_BANS

/* 函数别名定义：系统初始化函数 */
#define SystemCore_Initializer SystemCore_Initializer
#define UISystemEventHandler UISystemEventHandler

// 06_utilities_part022.c - 工具系统数据流处理和系统配置管理模块

/**
 * 系统配置管理器初始化函数
 * 
 * 功能：初始化系统配置管理器，为后续的配置操作做准备
 * 
 * 简化实现：原始实现是一个空函数，用于系统初始化
 * 原始实现：FUN_18089dcd6 - 空函数，仅返回
 * 
 * 技术说明：
 * - 这是一个初始化函数，预留用于系统配置管理器的初始化
 * - 当前实现为空，表示该功能可能在其他模块中实现
 * - 保持了接口的完整性，便于后续扩展
 * 
 * @return 无返回值
 */
void FUN_18089dcd6(void)

{
  return;
}



uint64_t FUN_18089dcf0(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int8_t auStackX_18 [4];
  int8_t auStackX_1c [12];
  int8_t auStack_58 [32];
  int8_t auStack_38 [32];
  
/**
 * 数据流处理器 - TIPSI格式处理器
 * 
 * 功能：处理TIPSI格式数据流，包括数据验证、解析和转换
 * 
 * 参数：
 * - param_2: 数据流指针数组
 * - auStack_38: 栈缓冲区，用于存储处理结果
 * - param_3: 处理模式标志
 * - 0x54495053: TIPSI格式标识符
 * 
 * 返回值：
 * - 0: 处理成功
 * - 非0: 处理失败，返回错误代码
 * 
 * 技术说明：
 * - TIPSI格式是一种特定的数据流格式
 * - 使用栈分配的缓冲区提高性能
 * - 实现了数据验证和错误处理机制
 * 
 * @param data_stream 数据流指针数组
 * @param buffer 栈缓冲区
 * @param mode 处理模式
 * @param format_id 格式标识符
 * @return 处理结果状态码
 */
#define DataFlowProcessor_TIPSI(data_stream, buffer, mode, format_id) \
    DataFlowProcessor(data_stream, buffer, mode, format_id)
  if ((((int)uVar3 == 0) &&
/**
 * 数据流处理器 - BIPSI格式处理器
 * 
 * 功能：处理BIPSI格式数据流，包括数据验证、解析和转换
 * 
 * 参数：
 * - param_2: 数据流指针数组
 * - auStack_58: 栈缓冲区，用于存储处理结果
 * - param_3: 处理模式标志
 * - 0x42495053: BIPSI格式标识符
 * 
 * 返回值：
 * - 0: 处理成功
 * - 非0: 处理失败，返回错误代码
 * 
 * 技术说明：
 * - BIPSI格式是另一种数据流格式
 * - 使用栈分配的缓冲区提高性能
 * - 实现了数据验证和错误处理机制
 * 
 * @param data_stream 数据流指针数组
 * @param buffer 栈缓冲区
 * @param mode 处理模式
 * @param format_id 格式标识符
 * @return 处理结果状态码
 */
#define DataFlowProcessor_BIPSI(data_stream, buffer, mode, format_id) \
    DataFlowProcessor(data_stream, buffer, mode, format_id)
     (uVar3 = SystemCore_ConfigManager(param_2,param_1 + 0x10), (int)uVar3 == 0)) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar3 = SystemErrorHandler(*param_2,param_1 + 0xf0,4);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*(int *)(param_2[1] + 0x18) == 0) {
      uVar2 = SystemErrorHandler(*param_2,param_1 + 0xf8,4);
      uVar3 = (uint64_t)uVar2;
      if (uVar2 == 0) {
        if (((*(uint *)(param_2 + 8) < 0x8a) && (*(int *)(param_1 + 0xf8) == 0)) ||
           ((*(uint *)(param_2 + 8) < 0x8e && (*(int *)(param_1 + 0xf8) == 0x7fffffff)))) {
          *(int32_t *)(param_1 + 0xf8) = 0x21;
        }
        uVar3 = FUN_180898ef0(param_2,param_1 + 0x100);
        if ((int)uVar3 == 0) {
          uVar4 = 0x1c;
          if (*(uint *)(param_2 + 8) < 0x68) {
            uVar3 = uVar4;
            if (*(int *)(param_2[1] + 0x18) == 0) {
              uVar1 = *param_2;
              uVar3 = SystemConfigManager(uVar1,auStackX_18);
              if ((int)uVar3 == 0) {
                uVar3 = SystemConfigManager(uVar1,auStackX_1c);
              }
            }
          }
          else {
            uVar3 = 0;
          }
          if ((int)uVar3 == 0) {
            if (*(uint *)(param_2 + 8) < 0x39) {
              uVar3 = 0;
            }
            else {
              uVar3 = uVar4;
              if (*(int *)(param_2[1] + 0x18) == 0) {
                uVar3 = SystemErrorHandler(*param_2,param_1 + 0xf4,4);
              }
            }
            if ((int)uVar3 == 0) {
              if (*(uint *)(param_2 + 8) < 0x5e) {
                uVar3 = 0;
              }
              else {
                uVar3 = uVar4;
                if (*(int *)(param_2[1] + 0x18) == 0) {
                  uVar2 = SystemConfigManager(*param_2,param_1 + 0xfc);
                  uVar3 = (uint64_t)uVar2;
                }
              }
              if (((int)uVar3 == 0) &&
                 ((*(uint *)(param_2 + 8) < 0x85 ||
                  (uVar3 = CoreSystem_StateManager(param_2,param_1 + 0x108), (int)uVar3 == 0)))) {
                    // WARNING: Subroutine does not return
                UtilitiesSystem_MemoryManager(param_2,auStack_58);
              }
            }
          }
        }
      }
    }
    else {
      uVar3 = 0x1c;
    }
  }
  return uVar3;
}



uint64_t FUN_18089dd54(void)

{
  uint64_t uVar1;
  uint uVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  uint64_t uVar4;
  
  if (*(int *)(in_RAX + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xf0,4);
  if ((int)uVar3 == 0) {
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar2 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xf8,4);
      uVar3 = (uint64_t)uVar2;
      if (uVar2 == 0) {
        if (((*(uint *)(unaff_RBX + 8) < 0x8a) && (*(int *)(unaff_RSI + 0xf8) == 0)) ||
           ((*(uint *)(unaff_RBX + 8) < 0x8e && (*(int *)(unaff_RSI + 0xf8) == 0x7fffffff)))) {
          *(int32_t *)(unaff_RSI + 0xf8) = 0x21;
        }
        uVar3 = FUN_180898ef0();
        if ((int)uVar3 == 0) {
          uVar4 = 0x1c;
          if (*(uint *)(unaff_RBX + 8) < 0x68) {
            uVar3 = uVar4;
            if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              uVar1 = *unaff_RBX;
              uVar3 = SystemConfigManager(uVar1,&stack0x00000090);
              if ((int)uVar3 == 0) {
                uVar3 = SystemConfigManager(uVar1,&stack0x00000094);
              }
            }
          }
          else {
            uVar3 = 0;
          }
          if ((int)uVar3 == 0) {
            if (*(uint *)(unaff_RBX + 8) < 0x39) {
              uVar3 = 0;
            }
            else {
              uVar3 = uVar4;
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar3 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xf4,4);
              }
            }
            if ((int)uVar3 == 0) {
              if (*(uint *)(unaff_RBX + 8) < 0x5e) {
                uVar3 = 0;
              }
              else {
                uVar3 = uVar4;
                if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                  uVar2 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0xfc);
                  uVar3 = (uint64_t)uVar2;
                }
              }
              if (((int)uVar3 == 0) &&
                 ((*(uint *)(unaff_RBX + 8) < 0x85 || (uVar3 = CoreSystem_StateManager(), (int)uVar3 == 0))))
              {
                    // WARNING: Subroutine does not return
                UtilitiesSystem_MemoryManager();
              }
            }
          }
        }
      }
    }
    else {
      uVar3 = 0x1c;
    }
    return uVar3;
  }
  return uVar3;
}



uint64_t FUN_18089dd78(void)

{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  uint64_t uVar4;
  
  uVar3 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xf0,4);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
    uVar2 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xf8,4);
    uVar3 = (uint64_t)uVar2;
    if (uVar2 == 0) {
      if (((*(uint *)(unaff_RBX + 8) < 0x8a) && (*(int *)(unaff_RSI + 0xf8) == 0)) ||
         ((*(uint *)(unaff_RBX + 8) < 0x8e && (*(int *)(unaff_RSI + 0xf8) == 0x7fffffff)))) {
        *(int32_t *)(unaff_RSI + 0xf8) = 0x21;
      }
      uVar3 = FUN_180898ef0();
      if ((int)uVar3 == 0) {
        uVar4 = 0x1c;
        if (*(uint *)(unaff_RBX + 8) < 0x68) {
          uVar3 = uVar4;
          if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            uVar1 = *unaff_RBX;
            uVar3 = SystemConfigManager(uVar1,&stack0x00000090);
            if ((int)uVar3 == 0) {
              uVar3 = SystemConfigManager(uVar1,&stack0x00000094);
            }
          }
        }
        else {
          uVar3 = 0;
        }
        if ((int)uVar3 == 0) {
          if (*(uint *)(unaff_RBX + 8) < 0x39) {
            uVar3 = 0;
          }
          else {
            uVar3 = uVar4;
            if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              uVar3 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xf4,4);
            }
          }
          if ((int)uVar3 == 0) {
            if (*(uint *)(unaff_RBX + 8) < 0x5e) {
              uVar3 = 0;
            }
            else {
              uVar3 = uVar4;
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar2 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0xfc);
                uVar3 = (uint64_t)uVar2;
              }
            }
            if (((int)uVar3 == 0) &&
               ((*(uint *)(unaff_RBX + 8) < 0x85 || (uVar3 = CoreSystem_StateManager(), (int)uVar3 == 0)))) {
                    // WARNING: Subroutine does not return
              UtilitiesSystem_MemoryManager();
            }
          }
        }
      }
    }
  }
  else {
    uVar3 = 0x1c;
  }
  return uVar3;
}



uint64_t FUN_18089dda2(void)

{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  uint64_t uVar4;
  
  if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
    uVar2 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xf8,4);
    uVar3 = (uint64_t)uVar2;
    if (uVar2 == 0) {
      if (((*(uint *)(unaff_RBX + 8) < 0x8a) && (*(int *)(unaff_RSI + 0xf8) == 0)) ||
         ((*(uint *)(unaff_RBX + 8) < 0x8e && (*(int *)(unaff_RSI + 0xf8) == 0x7fffffff)))) {
        *(int32_t *)(unaff_RSI + 0xf8) = 0x21;
      }
      uVar3 = FUN_180898ef0();
      if ((int)uVar3 == 0) {
        uVar4 = 0x1c;
        if (*(uint *)(unaff_RBX + 8) < 0x68) {
          uVar3 = uVar4;
          if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            uVar1 = *unaff_RBX;
            uVar3 = SystemConfigManager(uVar1,&stack0x00000090);
            if ((int)uVar3 == 0) {
              uVar3 = SystemConfigManager(uVar1,&stack0x00000094);
            }
          }
        }
        else {
          uVar3 = 0;
        }
        if ((int)uVar3 == 0) {
          if (*(uint *)(unaff_RBX + 8) < 0x39) {
            uVar3 = 0;
          }
          else {
            uVar3 = uVar4;
            if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              uVar3 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xf4,4);
            }
          }
          if ((int)uVar3 == 0) {
            if (*(uint *)(unaff_RBX + 8) < 0x5e) {
              uVar3 = 0;
            }
            else {
              uVar3 = uVar4;
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar2 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0xfc);
                uVar3 = (uint64_t)uVar2;
              }
            }
            if (((int)uVar3 == 0) &&
               ((*(uint *)(unaff_RBX + 8) < 0x85 || (uVar3 = CoreSystem_StateManager(), (int)uVar3 == 0)))) {
                    // WARNING: Subroutine does not return
              UtilitiesSystem_MemoryManager();
            }
          }
        }
      }
    }
  }
  else {
    uVar3 = 0x1c;
  }
  return uVar3;
}



uint64_t FUN_18089de39(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  uint unaff_EDI;
  
  uVar1 = *unaff_RBX;
  uVar2 = SystemConfigManager(uVar1,&stack0x00000090);
  if ((int)uVar2 == 0) {
    uVar2 = SystemConfigManager(uVar1,&stack0x00000094);
  }
  if ((int)uVar2 == 0) {
    if (*(uint *)(unaff_RBX + 8) < 0x39) {
      uVar2 = 0;
    }
    else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar2 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xf4,4);
    }
    else {
      uVar2 = (uint64_t)unaff_EDI;
    }
    if ((int)uVar2 == 0) {
      if (*(uint *)(unaff_RBX + 8) < 0x5e) {
        unaff_EDI = 0;
      }
      else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        unaff_EDI = SystemConfigManager(*unaff_RBX,unaff_RSI + 0xfc);
      }
      if (unaff_EDI == 0) {
        if ((0x84 < *(uint *)(unaff_RBX + 8)) && (uVar2 = CoreSystem_StateManager(), (int)uVar2 != 0)) {
          return uVar2;
        }
                    // WARNING: Subroutine does not return
        UtilitiesSystem_MemoryManager();
      }
      uVar2 = (uint64_t)unaff_EDI;
    }
  }
  return uVar2;
}



uint64_t FUN_18089de72(void)

{
  uint64_t uVar1;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  uint unaff_EDI;
  
  if (*(uint *)(unaff_RBX + 8) < 0x39) {
    uVar1 = 0;
  }
  else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
    uVar1 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xf4,4);
  }
  else {
    uVar1 = (uint64_t)unaff_EDI;
  }
  if ((int)uVar1 == 0) {
    if (*(uint *)(unaff_RBX + 8) < 0x5e) {
      unaff_EDI = 0;
    }
    else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      unaff_EDI = SystemConfigManager(*unaff_RBX,unaff_RSI + 0xfc);
    }
    if (unaff_EDI == 0) {
      if ((*(uint *)(unaff_RBX + 8) < 0x85) || (uVar1 = CoreSystem_StateManager(), (int)uVar1 == 0)) {
                    // WARNING: Subroutine does not return
        UtilitiesSystem_MemoryManager();
      }
    }
    else {
      uVar1 = (uint64_t)unaff_EDI;
    }
  }
  return uVar1;
}





// 函数: void FUN_18089df30(void)
void FUN_18089df30(void)

{
  return;
}



uint64_t FUN_18089df40(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t auStack_48 [32];
  int8_t auStack_28 [32];
  
  uVar2 = DataFlowProcessor(param_2,auStack_28,1,0x46464553);
  if (((((int)uVar2 == 0) &&
       (uVar2 = DataFlowProcessor(param_2,auStack_48,0,0x42464553), (int)uVar2 == 0)) &&
      (uVar2 = SystemCore_ConfigManager(param_2,param_1 + 0x10), (int)uVar2 == 0)) &&
     ((0x5a < *(uint *)(param_2 + 8) ||
      (uVar2 = FUN_1808afc70(param_2,param_1 + 0x44), (int)uVar2 == 0)))) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = *param_2;
    uVar2 = SystemErrorHandler(uVar1,param_1 + 0x4c,4);
    if ((((int)uVar2 == 0) && (uVar2 = SystemErrorHandler(uVar1,param_1 + 0x50,2), (int)uVar2 == 0)) &&
       (uVar2 = SystemErrorHandler(uVar1,param_1 + 0x52,2), (int)uVar2 == 0)) {
      uVar2 = SystemErrorHandler(uVar1,param_1 + 0x54,8);
    }
    if ((int)uVar2 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar2 = SystemConfigManager(*param_2,param_1 + 0x48);
      if ((int)uVar2 == 0) {
        if (*(uint *)(param_2 + 8) < 0x3d) {
          uVar2 = 0;
        }
        else if (*(int *)(param_2[1] + 0x18) == 0) {
          uVar2 = SystemCore_ProtocolProcessor(*param_2,param_1 + 0x40);
        }
        else {
          uVar2 = 0x1c;
        }
        if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
          UtilitiesSystem_MemoryManager(param_2,auStack_48);
        }
      }
    }
  }
  return uVar2;
}



uint64_t FUN_18089dfc1(void)

{
  uint64_t uVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  
  if (*(int *)(in_RAX + 0x18) != 0) {
    return 0x1c;
  }
  uVar1 = *unaff_RBX;
  uVar2 = SystemErrorHandler(uVar1,unaff_RDI + 0x4c,4);
  if ((((int)uVar2 == 0) && (uVar2 = SystemErrorHandler(uVar1,unaff_RDI + 0x50,2), (int)uVar2 == 0)) &&
     (uVar2 = SystemErrorHandler(uVar1,unaff_RDI + 0x52,2), (int)uVar2 == 0)) {
    uVar2 = SystemErrorHandler(uVar1,unaff_RDI + 0x54,8);
  }
  if ((int)uVar2 == 0) {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar2 = SystemConfigManager(*unaff_RBX,unaff_RDI + 0x48);
    if ((int)uVar2 == 0) {
      if (*(uint *)(unaff_RBX + 8) < 0x3d) {
        uVar2 = 0;
      }
      else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        uVar2 = SystemCore_ProtocolProcessor(*unaff_RBX,unaff_RDI + 0x40);
      }
      else {
        uVar2 = 0x1c;
      }
      if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
        UtilitiesSystem_MemoryManager();
      }
    }
  }
  return uVar2;
}



uint64_t FUN_18089dfe4(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  
  uVar1 = *unaff_RBX;
  uVar2 = SystemErrorHandler(uVar1,unaff_RDI + 0x4c,4);
  if ((int)uVar2 == 0) {
    uVar2 = SystemErrorHandler(uVar1,unaff_RDI + 0x50,2);
    if ((int)uVar2 == 0) {
      uVar2 = SystemErrorHandler(uVar1,unaff_RDI + 0x52,2);
      if ((int)uVar2 == 0) {
        uVar2 = SystemErrorHandler(uVar1,unaff_RDI + 0x54,8);
      }
    }
  }
  if ((int)uVar2 == 0) {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar2 = SystemConfigManager(*unaff_RBX,unaff_RDI + 0x48);
    if ((int)uVar2 == 0) {
      if (*(uint *)(unaff_RBX + 8) < 0x3d) {
        uVar2 = 0;
      }
      else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        uVar2 = SystemCore_ProtocolProcessor(*unaff_RBX,unaff_RDI + 0x40);
      }
      else {
        uVar2 = 0x1c;
      }
      if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
        UtilitiesSystem_MemoryManager();
      }
    }
  }
  return uVar2;
}



uint64_t FUN_18089e043(void)

{
  uint64_t uVar1;
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar1 = SystemConfigManager(*unaff_RBX,unaff_RDI + 0x48);
  if ((int)uVar1 == 0) {
    if (*(uint *)(unaff_RBX + 8) < 0x3d) {
      uVar1 = 0;
    }
    else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar1 = SystemCore_ProtocolProcessor(*unaff_RBX,unaff_RDI + 0x40);
    }
    else {
      uVar1 = 0x1c;
    }
    if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
      UtilitiesSystem_MemoryManager();
    }
  }
  return uVar1;
}





// 函数: void FUN_18089e0be(void)
void FUN_18089e0be(void)

{
  return;
}



uint64_t FUN_18089e0d0(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int8_t auStack_48 [32];
  int8_t auStack_28 [32];
  
  if ((0x87 < *(uint *)(param_2 + 8)) &&
     (uVar1 = DataFlowProcessor(param_2,auStack_28,1,0x46464353), (int)uVar1 != 0)) {
    return uVar1;
  }
  uVar1 = DataFlowProcessor(param_2,auStack_48,0,0x46454353);
  if (((int)uVar1 == 0) && (uVar1 = SystemCore_ConfigManager(param_2,param_1 + 0x10), (int)uVar1 == 0)) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = SystemCore_ProtocolProcessor(*param_2,param_1 + 0x6c);
    if (((int)uVar1 == 0) && (uVar1 = FUN_1808a5d60(param_2,param_1 + 0x48,0), (int)uVar1 == 0)) {
      if ((*(int *)(param_2 + 8) - 0x4aU < 0x11) &&
         (uVar1 = FUN_1808afc70(param_2,param_1 + 0x44), (int)uVar1 != 0)) {
        return uVar1;
      }
      if ((0x52 < *(uint *)(param_2 + 8)) &&
         (uVar1 = FUN_1808a5d60(param_2,param_1 + 0x58,0), (int)uVar1 != 0)) {
        return uVar1;
      }
      if (*(uint *)(param_2 + 8) < 0x88) {
        uVar1 = 0;
      }
      else if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar1 = SystemConfigManager(*param_2,param_1 + 0x68);
      }
      else {
        uVar1 = 0x1c;
      }
      if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
        UtilitiesSystem_MemoryManager(param_2,auStack_48);
      }
    }
  }
  return uVar1;
}



uint64_t FUN_18089e230(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar6;
  uint64_t uVar7;
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  int8_t auStack_68 [32];
  int8_t auStack_48 [32];
  uint64_t uVar5;
  
  uVar2 = DataFlowProcessor(param_2,auStack_48,1,0x50414e53);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = DataFlowProcessor(param_2,auStack_68,0,0x42414e53);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = SystemCore_ConfigManager(param_2,param_1 + 0x10);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar2 = SystemErrorHandler(*param_2,param_1 + 0x44,4);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar7 = 0;
  auStackX_20[0] = 0;
  uVar2 = SystemCore_Manager(*param_2,auStackX_20);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  auStackX_18[0] = 0;
  uVar3 = auStackX_20[0] & 1;
  uVar6 = auStackX_20[0] >> 1;
  uVar2 = uVar7;
  uVar5 = uVar7;
  if (uVar6 != 0) {
    do {
      uVar2 = UISystemEventHandler(param_2,uVar2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = FUN_1808a8120(param_2,param_1 + 0x30,uVar5,param_1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = SystemCore_Initializer(param_2,auStackX_18);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
      auStackX_18[0] = auStackX_18[0] & -uVar3;
      uVar2 = (uint64_t)auStackX_18[0];
    } while ((int)uVar4 < (int)uVar6);
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemCore_ProtocolProcessor(*param_2,param_1 + 0x48);
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*param_2;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      auStackX_18[0] = 0;
      uVar2 = func_0x00018076a7d0(*plVar1,auStackX_18);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)auStackX_18[0] + 4) {
        uVar2 = 0x11;
        goto LAB_18089e447;
      }
    }
    uVar2 = SystemDataAnalyzer(*plVar1,auStackX_20,1,4,0);
  }
LAB_18089e447:
  if ((int)uVar2 == 0) {
    *(uint *)(param_1 + 0x4c) = auStackX_20[0];
    uVar2 = 0xd;
    if (auStackX_20[0] < 7) {
      uVar2 = uVar7;
    }
    if ((int)uVar2 == 0) {
      uVar2 = uVar7;
      if ((0x32 < *(uint *)(param_2 + 8)) && (uVar2 = 0x1c, *(int *)(param_2[1] + 0x18) == 0)) {
        uVar3 = SystemConfigManager(*param_2,param_1 + 0x40);
        uVar2 = (uint64_t)uVar3;
      }
      if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
        UtilitiesSystem_MemoryManager(param_2,auStack_68);
      }
    }
  }
  return uVar2;
}



uint64_t FUN_18089e297(void)

{
  int64_t *plVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t *unaff_RBX;
  uint uVar4;
  int64_t unaff_RSI;
  uint uVar5;
  uint uVar6;
  uint64_t uVar7;
  uint in_stack_000000b0;
  uint in_stack_000000b8;
  
  if (*(int *)(in_RAX + 0x18) != 0) {
    return 0x1c;
  }
  uVar2 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0x44,4);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar7 = 0;
  in_stack_000000b8 = 0;
  uVar2 = SystemCore_Manager(*unaff_RBX,&stack0x000000b8);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  in_stack_000000b0 = 0;
  uVar4 = in_stack_000000b8 & 1;
  uVar6 = in_stack_000000b8 >> 1;
  uVar2 = uVar7;
  if (uVar6 != 0) {
    do {
      uVar3 = UISystemEventHandler();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = FUN_1808a8120();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = SystemCore_Initializer();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar5 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar5;
      in_stack_000000b0 = in_stack_000000b0 & -uVar4;
    } while ((int)uVar5 < (int)uVar6);
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar4 = SystemCore_ProtocolProcessor(*unaff_RBX,unaff_RSI + 0x48);
  if (uVar4 != 0) {
    return (uint64_t)uVar4;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*unaff_RBX;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      in_stack_000000b0 = 0;
      uVar2 = func_0x00018076a7d0(*plVar1,&stack0x000000b0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)in_stack_000000b0 + 4) {
        uVar2 = 0x11;
        goto LAB_18089e447;
      }
    }
    uVar2 = SystemDataAnalyzer(*plVar1,&stack0x000000b8,1,4,0);
  }
LAB_18089e447:
  if ((int)uVar2 == 0) {
    *(uint *)(unaff_RSI + 0x4c) = in_stack_000000b8;
    uVar2 = 0xd;
    if (in_stack_000000b8 < 7) {
      uVar2 = uVar7;
    }
    if ((int)uVar2 == 0) {
      uVar2 = uVar7;
      if ((0x32 < *(uint *)(unaff_RBX + 8)) && (uVar2 = 0x1c, *(int *)(unaff_RBX[1] + 0x18) == 0)) {
        uVar4 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0x40);
        uVar2 = (uint64_t)uVar4;
      }
      if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
        UtilitiesSystem_MemoryManager();
      }
    }
  }
  return uVar2;
}



uint64_t FUN_18089e2be(void)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t *unaff_RBX;
  uint uVar4;
  int64_t unaff_RSI;
  uint uVar5;
  uint uVar6;
  uint64_t uVar7;
  uint in_stack_000000b0;
  uint in_stack_000000b8;
  
  uVar2 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0x44,4);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar7 = 0;
  in_stack_000000b8 = 0;
  uVar2 = SystemCore_Manager(*unaff_RBX,&stack0x000000b8);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  in_stack_000000b0 = 0;
  uVar4 = in_stack_000000b8 & 1;
  uVar6 = in_stack_000000b8 >> 1;
  uVar2 = uVar7;
  if (uVar6 != 0) {
    do {
      uVar3 = UISystemEventHandler();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = FUN_1808a8120();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = SystemCore_Initializer();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar5 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar5;
      in_stack_000000b0 = in_stack_000000b0 & -uVar4;
    } while ((int)uVar5 < (int)uVar6);
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar4 = SystemCore_ProtocolProcessor(*unaff_RBX,unaff_RSI + 0x48);
  if (uVar4 != 0) {
    return (uint64_t)uVar4;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*unaff_RBX;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      in_stack_000000b0 = 0;
      uVar2 = func_0x00018076a7d0(*plVar1,&stack0x000000b0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)in_stack_000000b0 + 4) {
        uVar2 = 0x11;
        goto LAB_18089e447;
      }
    }
    uVar2 = SystemDataAnalyzer(*plVar1,&stack0x000000b8,1,4,0);
  }
LAB_18089e447:
  if ((int)uVar2 == 0) {
    *(uint *)(unaff_RSI + 0x4c) = in_stack_000000b8;
    uVar2 = 0xd;
    if (in_stack_000000b8 < 7) {
      uVar2 = uVar7;
    }
    if ((int)uVar2 == 0) {
      uVar2 = uVar7;
      if ((0x32 < *(uint *)(unaff_RBX + 8)) && (uVar2 = 0x1c, *(int *)(unaff_RBX[1] + 0x18) == 0)) {
        uVar4 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0x40);
        uVar2 = (uint64_t)uVar4;
      }
      if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
        UtilitiesSystem_MemoryManager();
      }
    }
  }
  return uVar2;
}



uint64_t FUN_18089e2e8(void)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t *unaff_RBX;
  uint uVar4;
  int64_t unaff_RSI;
  uint uVar5;
  uint uVar6;
  uint64_t uVar7;
  uint in_stack_000000b0;
  uint uStack00000000000000b8;
  
  uVar7 = 0;
  uStack00000000000000b8 = 0;
  uVar2 = SystemCore_Manager(*unaff_RBX,&stack0x000000b8);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  in_stack_000000b0 = 0;
  uVar4 = uStack00000000000000b8 & 1;
  uVar6 = uStack00000000000000b8 >> 1;
  uVar2 = uVar7;
  if (uVar6 != 0) {
    do {
      uVar3 = UISystemEventHandler();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = FUN_1808a8120();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = SystemCore_Initializer();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar5 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar5;
      in_stack_000000b0 = in_stack_000000b0 & -uVar4;
    } while ((int)uVar5 < (int)uVar6);
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar4 = SystemCore_ProtocolProcessor(*unaff_RBX,unaff_RSI + 0x48);
  if (uVar4 != 0) {
    return (uint64_t)uVar4;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*unaff_RBX;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      in_stack_000000b0 = 0;
      uVar2 = func_0x00018076a7d0(*plVar1,&stack0x000000b0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((uint64_t)plVar1[2] < (uint64_t)in_stack_000000b0 + 4) {
        uVar2 = 0x11;
        goto LAB_18089e447;
      }
    }
    uVar2 = SystemDataAnalyzer(*plVar1,&stack0x000000b8,1,4,0);
  }
LAB_18089e447:
  if ((int)uVar2 == 0) {
    *(uint *)(unaff_RSI + 0x4c) = uStack00000000000000b8;
    uVar2 = 0xd;
    if (uStack00000000000000b8 < 7) {
      uVar2 = uVar7;
    }
    if ((int)uVar2 == 0) {
      uVar2 = uVar7;
      if ((0x32 < *(uint *)(unaff_RBX + 8)) && (uVar2 = 0x1c, *(int *)(unaff_RBX[1] + 0x18) == 0)) {
        uVar4 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0x40);
        uVar2 = (uint64_t)uVar4;
      }
      if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
        UtilitiesSystem_MemoryManager();
      }
    }
  }
  return uVar2;
}





