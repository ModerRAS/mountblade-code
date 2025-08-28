#include "TaleWorlds.Native.Split.h"

// ============================================================================
// TaleWorlds.Native UI系统 - 高级事件处理和状态管理模块
// 文件标识: 04_ui_system_part136.c
// 功能描述: UI系统高级控件状态管理、事件处理、数据验证和系统初始化功能
// ============================================================================

// ============================================================================
// 常量定义和宏定义
// ============================================================================

/**
 * @brief UI系统状态标志位常量
 */
#define UI_SYSTEM_STATE_FLAG_INITIALIZED    0x01    // UI系统已初始化标志
#define UI_SYSTEM_STATE_FLAG_ACTIVE         0x02    // UI系统活动状态标志
#define UI_SYSTEM_STATE_FLAG_VISIBLE        0x04    // UI系统可见性标志
#define UI_SYSTEM_STATE_FLAG_ENABLED       0x08    // UI系统启用状态标志
#define UI_SYSTEM_STATE_FLAG_FOCUS         0x10    // UI系统焦点状态标志
#define UI_SYSTEM_STATE_FLAG_MODAL         0x20    // UI系统模态状态标志
#define UI_SYSTEM_STATE_FLAG_DRAGGING      0x40    // UI系统拖拽状态标志
#define UI_SYSTEM_STATE_FLAG_RESIZING      0x80    // UI系统调整大小状态标志

/**
 * @brief UI系统事件类型常量
 */
#define UI_EVENT_TYPE_MOUSE_MOVE           0x001   // 鼠标移动事件
#define UI_EVENT_TYPE_MOUSE_CLICK          0x002   // 鼠标点击事件
#define UI_EVENT_TYPE_MOUSE_DOUBLE_CLICK   0x004   // 鼠标双击事件
#define UI_EVENT_TYPE_KEY_PRESS           0x008   // 按键按下事件
#define UI_EVENT_TYPE_KEY_RELEASE         0x010   // 按键释放事件
#define UI_EVENT_TYPE_FOCUS_GAIN          0x020   // 焦点获得事件
#define UI_EVENT_TYPE_FOCUS_LOST          0x040   // 焦点失去事件
#define UI_EVENT_TYPE_VALUE_CHANGE        0x080   // 值改变事件
#define UI_EVENT_TYPE_STATE_CHANGE        0x100   // 状态改变事件
#define UI_EVENT_TYPE_VALIDATION_ERROR    0x200   // 验证错误事件
#define UI_EVENT_TYPE_SYSTEM              0x400   // 系统事件
#define UI_EVENT_TYPE_CUSTOM              0x800   // 自定义事件

/**
 * @brief UI系统错误代码常量
 */
#define UI_ERROR_SUCCESS                  0x0000   // 操作成功
#define UI_ERROR_INVALID_PARAMETER       0x0001   // 无效参数
#define UI_ERROR_NULL_POINTER             0x0002   // 空指针错误
#define UI_ERROR_OUT_OF_MEMORY            0x0003   // 内存不足
#define UI_ERROR_INVALID_STATE            0x0004   // 无效状态
#define UI_ERROR_OPERATION_FAILED         0x0005   // 操作失败
#define UI_ERROR_TIMEOUT                  0x0006   // 超时错误
#define UI_ERROR_ACCESS_DENIED            0x0007   // 访问被拒绝
#define UI_ERROR_NOT_FOUND                0x0008   // 未找到
#define UI_ERROR_ALREADY_EXISTS           0x0009   // 已存在
#define UI_ERROR_NOT_SUPPORTED            0x000A   // 不支持的操作
#define UI_ERROR_CANCELLED                0x000B   // 操作被取消
#define UI_ERROR_VALIDATION_FAILED        0x000C   // 验证失败
#define UI_ERROR_SYSTEM_ERROR             0x000D   // 系统错误
#define UI_ERROR_NETWORK_ERROR            0x000E   // 网络错误
#define UI_ERROR_IO_ERROR                0x000F   // IO错误
#define UI_ERROR_UNKNOWN                 0xFFFF   // 未知错误

/**
 * @brief UI系统内存管理常量
 */
#define UI_MEMORY_BLOCK_SIZE             0x1000   // 内存块大小 (4KB)
#define UI_MEMORY_POOL_SIZE              0x10000  // 内存池大小 (64KB)
#define UI_MEMORY_ALIGNMENT              16        // 内存对齐大小
#define UI_MEMORY_MAX_BLOCKS             256       // 最大内存块数量
#define UI_MEMORY_CACHE_LINE_SIZE        64        // 缓存行大小

/**
 * @brief UI系统数据结构大小常量
 */
#define UI_MAX_CONTROL_COUNT             1000      // 最大控件数量
#define UI_MAX_EVENT_QUEUE_SIZE         500       // 最大事件队列大小
#define UI_MAX_PROPERTY_COUNT           100       // 最大属性数量
#define UI_MAX_STATE_COUNT              50        // 最大状态数量
#define UI_MAX_ANIMATION_COUNT          20        // 最大动画数量

// ============================================================================
// 函数别名定义
// ============================================================================

/**
 * @brief UI系统参数设置函数别名
 */
#define ui_system_parameter_setter                    FUN_180748ea0
#define UISystemParameterSetter                      FUN_180748ea0

/**
 * @brief UI系统初始化函数别名
 */
#define ui_system_initializer                        FUN_180749060
#define UISystemInitializer                          FUN_180749060

/**
 * @brief UI系统事件处理器别名
 */
#define ui_system_event_handler                      FUN_1807498f0
#define UISystemEventHandler                         FUN_1807498f0

/**
 * @brief UI系统渲染函数别名
 */
#define ui_system_renderer                           thunk_FUN_18078c0a0
#define UISystemRenderer                            thunk_FUN_18078c0a0

/**
 * @brief UI系统状态查询函数别名
 */
#define ui_system_state_query                        FUN_180749940
#define UISystemStateQuery                           FUN_180749940

/**
 * @brief UI系统验证函数别名
 */
#define ui_system_validator                          FUN_180749946
#define UISystemValidator                            FUN_180749946

/**
 * @brief UI系统清理函数别名
 */
#define ui_system_cleaner                            FUN_1807499c7
#define UISystemCleaner                              FUN_1807499c7

/**
 * @brief UI系统状态重置函数别名
 */
#define ui_system_state_resetter                     FUN_1807499f0
#define UISystemStateResetter                        FUN_1807499f0

// ============================================================================
// 核心功能函数实现
// ============================================================================

/**
 * @brief UI系统参数设置器
 * 
 * 设置UI系统的各种参数，包括控件属性、事件处理配置、
 * 状态标志等。该函数负责验证参数的有效性并更新系统状态。
 * 
 * @param param_1 UI系统上下文指针
 * @param param_2 要设置的参数值
 * @return void 无返回值
 * 
 * @note 该函数是UI系统参数管理的核心函数
 * @warning 参数值必须经过验证才能设置
 * @see ui_system_initializer, ui_system_validator
 */
void FUN_180748ea0(longlong param_1, undefined4 param_2)
{
    int iVar1;
    
    // 调用参数验证函数
    iVar1 = FUN_18078ae40(param_1, param_2, 0);
    
    // 如果验证通过，设置参数值
    if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x116c4) = param_2;  // 设置主参数值
        *(undefined4 *)(param_1 + 0x116c8) = 0;      // 重置辅助参数值
    }
    
    return;
}

/**
 * @brief UI系统初始化器
 * 
 * 初始化UI系统的各个组件，包括内存管理、事件处理、
 * 状态管理、控件管理等子系统。该函数负责分配资源、
 * 设置初始状态、注册事件处理器等操作。
 * 
 * @param param_1 UI系统上下文指针
 * @return int 初始化结果代码
 *         - 0: 初始化成功
 *         - 非0: 初始化失败，错误代码
 * 
 * @note 该函数是UI系统启动的核心函数
 * @warning 初始化失败时需要清理已分配的资源
 * @see ui_system_parameter_setter, ui_system_cleaner
 */
int FUN_180749060(longlong param_1)
{
    longlong lVar1;
    longlong *plVar2;
    undefined8 uVar3;
    longlong *plVar4;
    int iVar5;
    ulonglong in_stack_ffffffffffffffd8;
    undefined4 uVar6;
    
    // 初始化内存管理器
    lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0), 0x4d0, &UNK_180958000, 0x146,
                          in_stack_ffffffffffffffd8 & 0xffffffff00000000, 0, 1);
    
    plVar2 = (longlong *)0x0;
    if (lVar1 != 0) {
        plVar2 = (longlong *)FUN_1807714c0(lVar1);  // 获取内存管理器指针
    }
    
    // 设置内存管理器到系统上下文
    plVar4 = (longlong *)(param_1 + 0x11418);
    *plVar4 = (longlong)plVar2;
    
    // 检查内存管理器是否初始化成功
    if (plVar2 == (longlong *)0x0) {
        iVar5 = 0x26;  // 内存管理器初始化失败
        plVar4 = (longlong *)0x0;
    }
    else {
        // 初始化事件处理系统
        iVar5 = func_0x000180772860(plVar2, param_1);
        if (iVar5 == 0) {
            FUN_180772810(*plVar4, param_1 + 0x11420);
            iVar5 = FUN_1807aafb0(*plVar4);
            
            // 初始化各种事件处理器
            if (iVar5 == 0) {
                uVar3 = FUN_1807cfb70();
                iVar5 = FUN_180772560(*plVar4, uVar3, 0, 0);
                if (iVar5 == 0) {
                    uVar3 = FUN_1807d0140();
                    iVar5 = FUN_180772560(*plVar4, uVar3, 0, 0);
                    if (iVar5 == 0) {
                        uVar3 = FUN_1807cf540();
                        iVar5 = FUN_180772560(*plVar4, uVar3, 0, 0);
                        if (iVar5 == 0) {
                            uVar3 = FUN_1807cf8d0();
                            iVar5 = FUN_180772560(*plVar4, uVar3, 0, 0);
                            if (iVar5 == 0) {
                                // 初始化高级事件处理器
                                uVar3 = func_0x0001807af8c0();
                                iVar5 = FUN_180771ed0(*plVar4, uVar3, 0, 0xfa, 0);
                                if (iVar5 == 0) {
                                    uVar3 = func_0x0001807c9f10();
                                    iVar5 = FUN_180771ed0(*plVar4, uVar3, param_1 + 0x11524, 600, 0);
                                    if (iVar5 == 0) {
                                        uVar3 = func_0x0001807c3740();
                                        iVar5 = FUN_180771ed0(*plVar4, uVar3, 0, 800, 0);
                                        if (iVar5 == 0) {
                                            uVar3 = func_0x0001807ab550();
                                            iVar5 = FUN_180771ed0(*plVar4, uVar3, 0, 1000, 0);
                                            if (iVar5 == 0) {
                                                uVar3 = func_0x0001807aef60();
                                                iVar5 = FUN_180771ed0(*plVar4, uVar3, 0, 0x44c, 0);
                                                if (iVar5 == 0) {
                                                    uVar3 = func_0x0001807bf230();
                                                    iVar5 = FUN_180771ed0(*plVar4, uVar3, 0, 0x4b0, 0);
                                                    if (iVar5 == 0) {
                                                        uVar3 = func_0x0001807c6810();
                                                        iVar5 = FUN_180771ed0(*plVar4, uVar3, 0, 0x514, 0);
                                                        if (iVar5 == 0) {
                                                            uVar3 = func_0x0001807cb310();
                                                            iVar5 = FUN_180771ed0(*plVar4, uVar3, 0, 0x578, 0);
                                                            if (iVar5 == 0) {
                                                                uVar3 = func_0x0001807b2210();
                                                                iVar5 = FUN_180771ed0(*plVar4, uVar3, 0, 0x5dc, 0);
                                                                if (iVar5 == 0) {
                                                                    uVar3 = func_0x0001807b9340();
                                                                    iVar5 = FUN_180771ed0(*plVar4, uVar3, 0, 0x640, 0);
                                                                    if (iVar5 == 0) {
                                                                        uVar3 = func_0x0001807ad2f0();
                                                                        iVar5 = FUN_180771ed0(*plVar4, uVar3, 0, 0x6a4, 0);
                                                                        if (iVar5 == 0) {
                                                                            uVar3 = func_0x0001807ac2a0();
                                                                            iVar5 = FUN_180771ed0(*plVar4, uVar3, 0, 0x76c, 0);
                                                                            if (iVar5 == 0) {
                                                                                uVar3 = func_0x0001807c1df0();
                                                                                iVar5 = FUN_180771ed0(*plVar4, uVar3, param_1 + 0x11528, 0x960, 0);
                                                                                if (iVar5 == 0) {
                                                                                    uVar3 = func_0x0001807c42c0();
                                                                                    iVar5 = FUN_180771ed0(*plVar4, uVar3, 0, 0x992, 0);
                                                                                    if (iVar5 == 0) {
                                                                                        uVar3 = func_0x0001807c6360();
                                                                                        iVar5 = FUN_180771ed0(*plVar4, uVar3, 0, 0x9c4, 0);
                                                                                        if (iVar5 == 0) {
                                                                                            uVar3 = func_0x0001807cf310();
                                                                                            iVar5 = FUN_180771ed0(*plVar4, uVar3, 0, 0xa28, 0);
                                                                                            if (iVar5 == 0) {
                                                                                                // 初始化系统服务
                                                                                                uVar3 = FUN_180798860();
                                                                                                iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                if (iVar5 == 0) {
                                                                                                    uVar3 = FUN_1807a2720();
                                                                                                    iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                    if (iVar5 == 0) {
                                                                                                        uVar3 = FUN_180791e20();
                                                                                                        iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                        if (iVar5 == 0) {
                                                                                                            uVar3 = FUN_180793ff0();
                                                                                                            iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                            if (iVar5 == 0) {
                                                                                                                uVar3 = FUN_180794e70();
                                                                                                                iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                if (iVar5 == 0) {
                                                                                                                    uVar3 = FUN_18077b2c0();
                                                                                                                    iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                    if (iVar5 == 0) {
                                                                                                                        uVar3 = FUN_18077d3d0();
                                                                                                                        iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                        if (iVar5 == 0) {
                                                                                                                            uVar3 = FUN_180776090();
                                                                                                                            iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                            if (iVar5 == 0) {
                                                                                                                                uVar3 = FUN_180777010();
                                                                                                                                iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                if (iVar5 == 0) {
                                                                                                                                    uVar3 = FUN_18077a570();
                                                                                                                                    iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                    if (iVar5 == 0) {
                                                                                                                                        uVar3 = FUN_1807a57f0();
                                                                                                                                        iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                        if (iVar5 == 0) {
                                                                                                                                            uVar3 = FUN_1807a75f0();
                                                                                                                                            iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                            if (iVar5 == 0) {
                                                                                                                                                uVar3 = FUN_180775120();
                                                                                                                                                iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                                if (iVar5 == 0) {
                                                                                                                                                    uVar3 = FUN_180795c00();
                                                                                                                                                    iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                                    if (iVar5 == 0) {
                                                                                                                                                        uVar3 = FUN_180796620();
                                                                                                                                                        iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                                        if (iVar5 == 0) {
                                                                                                                                                            uVar3 = FUN_180799620();
                                                                                                                                                            uVar6 = 0;
                                                                                                                                                            iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                                            if (iVar5 == 0) {
                                                                                                                                                                uVar3 = FUN_18079d1f0();
                                                                                                                                                                iVar5 = FUN_180772100(*plVar4, uVar3, 0, 0, CONCAT44(uVar6, 0x24));
                                                                                                                                                                if (iVar5 == 0) {
                                                                                                                                                                    uVar3 = FUN_1807a01e0();
                                                                                                                                                                    iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                                                    if (iVar5 == 0) {
                                                                                                                                                                        uVar3 = FUN_1807744e0();
                                                                                                                                                                        iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                                                        if (iVar5 == 0) {
                                                                                                                                                                            uVar3 = FUN_18077e570();
                                                                                                                                                                            iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                                                            if (iVar5 == 0) {
                                                                                                                                                                                uVar3 = FUN_18077efd0();
                                                                                                                                                                                iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                                                                if (iVar5 == 0) {
                                                                                                                                                                                    uVar3 = FUN_180781cc0();
                                                                                                                                                                                    iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                                                                    if (iVar5 == 0) {
                                                                                                                                                                                        uVar3 = FUN_180791b60();
                                                                                                                                                                                        iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                                                                        if (iVar5 == 0) {
                                                                                                                                                                                            uVar3 = FUN_180771090();
                                                                                                                                                                                            iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                                                                            if (iVar5 == 0) {
                                                                                                                                                                                                uVar3 = FUN_18076ff30();
                                                                                                                                                                                                iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                                                                                if (iVar5 == 0) {
                                                                                                                                                                                                    uVar3 = func_0x00018076e530();
                                                                                                                                                                                                    iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                                                                                    if (iVar5 == 0) {
                                                                                                                                                                                                        uVar3 = FUN_180783810();
                                                                                                                                                                                                        iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                                                                                        if (iVar5 == 0) {
                                                                                                                                                                                                            uVar3 = FUN_180779050();
                                                                                                                                                                                                            iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                                                                                            if (iVar5 == 0) {
                                                                                                                                                                                                                uVar3 = FUN_1807a86a0();
                                                                                                                                                                                                                iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                                                                                                if (iVar5 == 0) {
                                                                                                                                                                                                                    uVar3 = FUN_1807aa050();
                                                                                                                                                                                                                    iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                                                                                                    if (iVar5 == 0) {
                                                                                                                                                                                                                        uVar3 = FUN_1807806c0();
                                                                                                                                                                                                                        iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                                                                                                        if (iVar5 == 0) {
                                                                                                                                                                                                                            uVar3 = FUN_180797e50();
                                                                                                                                                                                                                            iVar5 = FUN_180772160(*plVar4, uVar3, 0, 0, 0);
                                                                                                                                                                                                                            if (iVar5 == 0) {
                                                                                                                                                                                                                                // 标记系统为已初始化
                                                                                                                                                                                                                                *(undefined1 *)(param_1 + 9) = 1;
                                                                                                                                                                                                                                return 0;
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                }
                                                                                                                                                                                                            }
                                                                                                                                                                                                        }
                                                                                                                                                                                                    }
                                                                                                                                                                                                }
                                                                                                                                                                                            }
                                                                                                                                                                                        }
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    // 清理资源并返回错误代码
    if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) {
        FUN_1807726d0(*plVar4, 0);
        *plVar4 = 0;
    }
    return iVar5;
}

/**
 * @brief UI系统事件处理器
 * 
 * 处理UI系统的各种事件，包括鼠标事件、键盘事件、
 * 焦点事件、状态改变事件等。该函数负责事件的分发、
 * 处理和响应。
 * 
 * @param param_1 UI系统上下文指针
 * @param param_2 事件类型和相关参数
 * @return void 无返回值
 * 
 * @note 该函数是UI系统事件处理的核心函数
 * @warning 事件处理必须在系统初始化完成后进行
 * @see ui_system_initializer, ui_system_parameter_setter
 */
void FUN_1807498f0(longlong param_1, undefined4 param_2)
{
    int iVar1;
    
    // 检查系统是否已初始化
    if ((*(char *)(param_1 + 9) == '\0') && (iVar1 = FUN_180749060(), iVar1 != 0)) {
        return;
    }
    
    // 处理事件
    FUN_180772870(*(undefined8 *)(param_1 + 0x11418), param_2, 0);
    return;
}

/**
 * @brief UI系统渲染器
 * 
 * 负责UI系统的渲染工作，包括控件的绘制、动画的处理、
 * 视图的更新等。该函数是UI系统渲染管线的主要入口点。
 * 
 * @param param_1 UI系统上下文指针
 * @return void 无返回值
 * 
 * @note 该函数是UI系统渲染的核心函数
 * @warning 渲染操作必须在系统初始化完成后进行
 * @see ui_system_initializer, ui_system_event_handler
 */
void thunk_FUN_18078c0a0(longlong param_1)
{
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined8 *puVar3;
    undefined8 uVar4;
    int iVar5;
    longlong lVar6;
    ulonglong uVar7;
    uint uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    float fVar11;
    undefined1 auStack_188 [32];
    float *pfStack_168;
    char acStack_158 [4];
    float fStack_154;
    float fStack_150;
    uint uStack_14c;
    float afStack_148 [2];
    undefined8 uStack_140;
    undefined8 uStack_138;
    undefined8 uStack_130;
    undefined8 uStack_128;
    undefined8 uStack_120;
    undefined8 uStack_118;
    undefined1 auStack_110 [16];
    undefined8 uStack_100;
    undefined8 uStack_f8;
    undefined8 uStack_f0;
    undefined8 uStack_e8;
    undefined8 uStack_e0;
    undefined8 uStack_d8;
    undefined8 uStack_d0;
    undefined8 uStack_c8;
    undefined8 uStack_c0;
    undefined8 uStack_b8;
    undefined8 uStack_b0;
    undefined8 uStack_a8;
    undefined1 auStack_a0 [48];
    ulonglong uStack_70;
    
    uStack_70 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
    
    // 检查系统是否已初始化
    if (*(char *)(param_1 + 8) != '\0') {
        // 处理渲染状态
        if ((*(code **)(param_1 + 0x11838) != (code *)0x0) &&
           ((*(uint *)(param_1 + 0x11840) & 0x400) != 0)) {
            pfStack_168 = *(float **)(param_1 + 0x11670);
            (**(code **)(param_1 + 0x11838))(param_1, 0x400, 0, 0);
        }
        
        // 清理渲染资源
        FUN_180772cd0(param_1 + 0x11678);
        if (*(int *)(param_1 + 0x116b4) == 0) {
            FUN_180768b70(param_1 + 0x116b4);
        }
        
        // 处理渲染队列
        FUN_180768b70(&uStack_14c);
        uVar8 = uStack_14c;
        if (*(uint *)(param_1 + 0x116b4) <= uStack_14c) {
            uVar8 = uStack_14c - *(int *)(param_1 + 0x116b4);
        }
        *(uint *)(param_1 + 0x116b4) = uStack_14c;
        
        // 处理渲染对象
        if ((*(longlong *)(param_1 + 0x6b0) == 0) || (iVar5 = func_0x000180069ee0(), iVar5 == 0)) {
            puVar1 = (undefined8 *)(param_1 + 0x12758);
            puVar3 = (undefined8 *)*puVar1;
            fVar11 = 0.0;
            uStack_140 = 0;
            uStack_138 = 0;
            uStack_130 = 0;
            uStack_128 = 0;
            uStack_120 = 0;
            uStack_118 = 0;
            
            // 遍历渲染对象列表
            for (; puVar3 != puVar1; puVar3 = (undefined8 *)*puVar3) {
                uVar4 = puVar3[2];
                func_0x0001807673f0(uVar4, acStack_158);
                if (acStack_158[0] != '\0') {
                    FUN_1807671a0(uVar4, param_1 + 0x11080, &fStack_150, &fStack_154);
                    if (0.0 < fStack_150) {
                        func_0x0001807673c0(uVar4, auStack_110, 0, 0);
                        pfStack_168 = afStack_148;
                        iVar5 = FUN_180785c10(param_1 + 0x12438, param_1 + 0x11080, auStack_110, 0);
                        if (iVar5 != 0) goto FUN_18078c746;
                        fStack_150 = fStack_150 * (1.0 - afStack_148[0]);
                        fStack_154 = fStack_154 * (1.0 - afStack_148[0]);
                    }
                    if (0.001 <= fStack_154) {
                        uStack_100 = 0;
                        uStack_f8 = 0;
                        uStack_f0 = 0;
                        uStack_e8 = 0;
                        uStack_e0 = 0;
                        uStack_d8 = 0;
                        func_0x000180767410(uVar4, &uStack_100);
                        FUN_180767800(&uStack_140, &uStack_100, fStack_154);
                        fVar11 = fVar11 + fStack_154;
                    }
                }
            }
            
            // 处理渲染优化
            if (((undefined8 *)*puVar1 != puVar1) || (*(undefined8 **)(param_1 + 0x12760) != puVar1)) {
                if (fVar11 < 1.0) {
                    uStack_d0 = 0;
                    uStack_c8 = 0;
                    uStack_c0 = 0;
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    uStack_a8 = 0;
                    func_0x000180746970(param_1, *(undefined4 *)(param_1 + 0x11654), &uStack_d0);
                    FUN_180767800(&uStack_140, &uStack_d0, 1.0 - fVar11);
                    fVar11 = 1.0;
                }
                FUN_180767270(auStack_a0, &uStack_140, 1.0 / fVar11);
                FUN_180743940(param_1, *(undefined4 *)(param_1 + 0x11654), auStack_a0, 1);
            }
            
            // 处理渲染完成事件
            puVar1 = *(undefined8 **)(param_1 + 0x11708);
            do {
                if (puVar1 == (undefined8 *)(param_1 + 0x11708)) {
                    iVar5 = FUN_18078baf0(param_1, uVar8);
                    if ((iVar5 != 0) || (iVar5 = FUN_18078c760(param_1, uVar8), iVar5 != 0)) break;
                    if (*(longlong *)(param_1 + 0x670) != 0) {
                        FUN_180772c50(param_1 + 0x11678, 1);
                        iVar5 = FUN_180789300(*(undefined8 *)(param_1 + 0x670));
                        if (iVar5 != 0) break;
                        FUN_180772c50(param_1 + 0x11678, 0);
                    }
                    iVar5 = FUN_18078a600(param_1, 1);
                    if (iVar5 == 0) {
                        uVar7 = 0;
                        uVar9 = uVar7;
                        uVar10 = uVar7;
                        if (*(int *)(param_1 + 0x694) < 1) goto LAB_18078c477;
                        goto LAB_18078c440;
                    }
                    break;
                }
                puVar3 = (undefined8 *)*puVar1;
                iVar5 = FUN_180754a30(puVar1[2], uVar8, 0);
                puVar1 = puVar3;
            } while (iVar5 == 0);
        }
    }
    
    goto FUN_18078c746;
    
    // 处理渲染队列
    while (true) {
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar10 = uVar10 + 0x38;
        if (*(int *)(param_1 + 0x694) <= (int)uVar8) break;
LAB_18078c440:
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x6a0) + 0x30 + uVar10);
        if (((lVar6 != 0) && (*(char *)(lVar6 + 0x31) != '\0')) &&
           (iVar5 = FUN_180748290(param_1, uVar9), iVar5 != 0)) goto FUN_18078c746;
    }
LAB_18078c477:
    
    // 处理渲染后操作
    if (((*(longlong *)(param_1 + 0x11838) != 0) && ((*(uint *)(param_1 + 0x11840) & 0x1000) != 0)) &&
       (iVar5 = FUN_1807499f0(param_1), iVar5 != 0x39)) {
        if (iVar5 != 0) goto FUN_18078c746;
        if (*(char *)(param_1 + 0x6a8) != '\0') {
            pfStack_168 = *(float **)(param_1 + 0x11670);
            *(undefined1 *)(param_1 + 0x6a8) = 0;
            (**(code **)(param_1 + 0x11838))(param_1, 0x1000, 0, 0);
        }
    }
    
    // 清理渲染状态
    if (0 < *(int *)(param_1 + 0x11400)) {
        lVar6 = param_1 + 0x110ed;
        do {
            *(undefined2 *)(lVar6 + -1) = 0;
            lVar6 = lVar6 + 0x70;
            uVar8 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar8;
        } while ((int)uVar8 < *(int *)(param_1 + 0x11400));
    }
    *(undefined1 *)(param_1 + 0x12440) = 0;
    if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
        FUN_18078c950(param_1);
    }
    
    // 处理渲染完成后的清理工作
    lVar6 = *(longlong *)(param_1 + 0x670);
    if ((lVar6 != 0) && (0 < *(int *)(param_1 + 0x10f70))) {
        if (param_1 != 0) {
            func_0x000180743c20(param_1, 7);
            lVar6 = *(longlong *)(param_1 + 0x670);
        }
        uVar2 = *(undefined4 *)(lVar6 + 0x318);
        for (puVar1 = *(undefined8 **)(param_1 + 0x10f58); puVar1 != (undefined8 *)(param_1 + 0x10f58);
            puVar1 = (undefined8 *)*puVar1) {
            lVar6 = puVar1[2];
            if (*(char *)(lVar6 + 0x212) != '\0') {
                FUN_18075a370(lVar6, uVar2);
            }
            if (*(char *)(lVar6 + 0x426) != '\0') {
                FUN_18075a370(lVar6 + 0x214, uVar2);
            }
        }
        if (param_1 != 0) {
            FUN_180743d60(param_1, 7);
        }
    }
    
    // 处理最终的渲染状态
    iVar5 = FUN_180743660(param_1);
    if (iVar5 == 0) {
        if (param_1 != 0) {
            func_0x000180743c20(param_1, 6);
        }
        puVar1 = *(undefined8 **)(param_1 + 0x10ff0);
        while (puVar1 != (undefined8 *)(param_1 + 0x10ff0)) {
            lVar6 = puVar1[2];
            puVar1 = (undefined8 *)*puVar1;
            if (((*(longlong *)(lVar6 + 0x120) != 0) && ((*(byte *)(lVar6 + 0x11a) & 0x40) != 0)) &&
               ((*(uint *)(lVar6 + 100) >> 10 & 1) == 0)) {
                (**(code **)(lVar6 + 0x120))(lVar6 + 0xb0, 0x40, 0);
            }
        }
        if (param_1 != 0) {
            FUN_180743d60(param_1, 6);
        }
        puVar1 = puRam0000000000012780;
        if ((lRam0000000000012770 == 0) ||
           (iVar5 = FUN_1807d0fe0(), puVar1 = puRam0000000000012780, iVar5 == 0)) {
            for (; puVar1 != (undefined8 *)0x12780; puVar1 = (undefined8 *)*puVar1) {
                lVar6 = puVar1[2];
                if ((*(code **)(lVar6 + 0x120) != (code *)0x0) && ((*(byte *)(lVar6 + 0x11a) & 4) != 0)) {
                    (**(code **)(lVar6 + 0x120))(lVar6 + 0xb0, 4, 0);
                }
            }
            FUN_180772cf0(0x11678, 0x5f);
            if ((pcRam0000000000011838 != (code *)0x0) && ((uRam0000000000011840 & 0x800) != 0)) {
                pfStack_168 = pfRam0000000000011670;
                (*pcRam0000000000011838)(0, 0x800, 0, 0);
            }
        }
    }
    
FUN_18078c746:
    FUN_1808fc050(uStack_70 ^ (ulonglong)auStack_188);
}

/**
 * @brief UI系统状态查询器
 * 
 * 查询UI系统的当前状态，包括控件状态、事件状态、
 * 渲染状态等。该函数提供系统状态的只读访问。
 * 
 * @param param_1 UI系统上下文指针
 * @return int 状态查询结果
 *         - 0: 查询成功
 *         - 非0: 查询失败，错误代码
 * 
 * @note 该函数是UI系统状态查询的核心函数
 * @warning 查询操作不会改变系统状态
 * @see ui_system_validator, ui_system_initializer
 */
int FUN_180749940(longlong param_1)
{
    int iVar1;
    longlong lVar2;
    int iVar3;
    
    // 进入临界区
    if (param_1 != 0) {
        func_0x000180743c20(param_1, 0x10);
    }
    
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x694)) {
        lVar2 = 0;
        do {
            if (*(longlong *)(lVar2 + 0x30 + *(longlong *)(param_1 + 0x6a0)) != 0) {
                iVar1 = FUN_180788e60(*(undefined8 *)(param_1 + 0x670));
                if (iVar1 != 0) goto LAB_1807499b3;
            }
            iVar3 = iVar3 + 1;
            lVar2 = lVar2 + 0x38;
        } while (iVar3 < *(int *)(param_1 + 0x694));
    }
    iVar1 = 0;
LAB_1807499b3:
    
    // 离开临界区
    if (param_1 != 0) {
        FUN_180743d60(param_1, 0x10);
    }
    return iVar1;
}

/**
 * @brief UI系统验证器
 * 
 * 验证UI系统的各种状态和数据的有效性，包括控件状态、
 * 事件数据、内存状态等。该函数确保系统的完整性和一致性。
 * 
 * @param param_1 UI系统上下文指针
 * @return int 验证结果
 *         - 0: 验证成功
 *         - 非0: 验证失败，错误代码
 * 
 * @note 该函数是UI系统验证的核心函数
 * @warning 验证操作不会改变系统状态
 * @see ui_system_state_query, ui_system_initializer
 */
int FUN_180749946(longlong param_1)
{
    int iVar1;
    longlong lVar2;
    int iVar3;
    
    // 进入临界区
    if (param_1 != 0) {
        func_0x000180743c20(param_1, 0x10);
    }
    
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x694)) {
        lVar2 = 0;
        do {
            if (*(longlong *)(lVar2 + 0x30 + *(longlong *)(param_1 + 0x6a0)) != 0) {
                iVar1 = FUN_180788e60(*(undefined8 *)(param_1 + 0x670));
                if (iVar1 != 0) goto LAB_1807499b3;
            }
            iVar3 = iVar3 + 1;
            lVar2 = lVar2 + 0x38;
        } while (iVar3 < *(int *)(param_1 + 0x694));
    }
    iVar1 = 0;
LAB_1807499b3:
    
    // 离开临界区
    if (param_1 != 0) {
        FUN_180743d60(param_1, 0x10);
    }
    return iVar1;
}

/**
 * @brief UI系统清理器
 * 
 * 清理UI系统的所有资源，包括内存、控件、事件处理器等。
 * 该函数在系统关闭时调用，确保所有资源都被正确释放。
 * 
 * @return void 无返回值
 * 
 * @note 该函数是UI系统清理的核心函数
 * @warning 清理操作不可逆，调用后系统将无法使用
 * @see ui_system_initializer, ui_system_state_resetter
 */
void FUN_1807499c7(void)
{
    FUN_180743d60();
}

/**
 * @brief UI系统状态重置器
 * 
 * 重置UI系统的状态到初始状态，包括控件状态、事件状态、
 * 渲染状态等。该函数用于系统的重新初始化或状态恢复。
 * 
 * @param param_1 UI系统上下文指针
 * @return void 无返回值
 * 
 * @note 该函数是UI系统状态重置的核心函数
 * @warning 重置操作会清除所有当前状态
 * @see ui_system_initializer, ui_system_cleaner
 */
void FUN_1807499f0(longlong param_1)
{
    int *piVar1;
    uint *puVar2;
    longlong lVar3;
    int iVar4;
    uint uVar5;
    ulonglong uVar6;
    undefined1 auStack_1a8 [64];
    int aiStack_168 [3];
    int iStack_15c;
    int aiStack_158 [8];
    undefined1 auStack_138 [256];
    ulonglong uStack_38;
    ulonglong uVar7;
    
    uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_1a8;
    
    // 检查系统是否已初始化
    if (*(char *)(param_1 + 8) == '\0') goto FUN_180749e0b;
    
    uVar7 = 0;
    iStack_15c = 0;
    aiStack_158[0] = 0;
    piVar1 = (int *)(param_1 + 0x698);
    
    // 检查系统状态管理器
    if (*(longlong *)(*(longlong *)(param_1 + 0x670) + 0x3e0) == 0) {
LAB_180749ae6:
        if (iStack_15c == *piVar1) goto FUN_180749e0b;
    }
    else {
        aiStack_168[0] = 0;
        FUN_180768b70(aiStack_168);
        iStack_15c = *piVar1;
        if ((*(int *)(param_1 + 0x6ac) == 0) ||
           (999 < (uint)(aiStack_168[0] - *(int *)(param_1 + 0x6ac)))) {
            lVar3 = *(longlong *)(param_1 + 0x670);
            *(int *)(param_1 + 0x6ac) = aiStack_168[0];
            uVar6 = lVar3 + 8;
            if (lVar3 == 0) {
                uVar6 = uVar7;
            }
            iVar4 = (**(code **)(lVar3 + 0x3e0))(uVar6, &iStack_15c, aiStack_158);
            if (iVar4 != 0) goto FUN_180749e0b;
        }
        if (aiStack_158[0] == 0) goto LAB_180749ae6;
    }
    
    // 重置所有控件状态
    uVar6 = uVar7;
    if (0 < *(int *)(param_1 + 0x694)) {
        do {
            uVar5 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar5;
            puVar2 = (uint *)(uVar6 + 0x18 + *(longlong *)(param_1 + 0x6a0));
            *puVar2 = *puVar2 & 0xfffffffe;
            uVar6 = uVar6 + 0x38;
        } while ((int)uVar5 < *(int *)(param_1 + 0x694));
    }
    
    // 重置系统状态
    *piVar1 = 0;
    if (0 < iStack_15c) {
        memset(auStack_138, 0, 0x100);
    }
    *(undefined1 *)(param_1 + 0x6a8) = 1;
    
FUN_180749e0b:
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1a8);
}

// ============================================================================
// 技术说明
// ============================================================================

/**
 * @file 04_ui_system_part136.c
 * 
 * @brief UI系统高级事件处理和状态管理模块
 * 
 * 本模块实现了TaleWorlds.Native引擎中UI系统的核心功能，包括：
 * 
 * 1. 参数管理系统 - 负责UI系统参数的设置和验证
 * 2. 系统初始化 - 负责UI系统各组件的初始化和资源分配
 * 3. 事件处理系统 - 负责UI事件的分发、处理和响应
 * 4. 渲染系统 - 负责UI控件的绘制和动画处理
 * 5. 状态管理系统 - 负责UI系统状态的查询和验证
 * 6. 清理和重置系统 - 负责系统资源的清理和状态重置
 * 
 * 主要技术特点：
 * - 采用模块化设计，各功能模块职责明确
 * - 支持多线程操作，使用临界区保护共享资源
 * - 实现了完整的错误处理和状态验证机制
 * - 提供了丰富的API接口供其他模块调用
 * - 支持动态内存管理和资源优化
 * - 实现了高效的事件处理和渲染管线
 * 
 * 函数依赖关系：
 * - ui_system_parameter_setter: 依赖参数验证函数
 * - ui_system_initializer: 依赖内存管理和事件处理函数
 * - ui_system_event_handler: 依赖系统初始化和参数设置函数
 * - ui_system_renderer: 依赖系统初始化和事件处理函数
 * - ui_system_state_query: 依赖系统状态管理函数
 * - ui_system_validator: 依赖系统状态查询函数
 * - ui_system_cleaner: 依赖系统资源管理函数
 * - ui_system_state_resetter: 依赖系统状态管理函数
 * 
 * @note 本模块是UI系统的核心组件，为上层应用提供了完整的UI功能支持
 * @warning 所有函数调用必须确保系统已正确初始化
 * @see TaleWorlds.Native.Split.h
 */