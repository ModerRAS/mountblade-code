#include "TaleWorlds.Native.Split.h"

/**
 * 04_ui_system_part390.c - UI系统高级事件处理和回调管理模块
 * 
 * 本模块包含51个核心函数，主要功能：
 * - UI系统事件处理器和回调管理
 * - 条件检查和状态验证
 * - 内存管理和资源清理
 * - 哈希表查找和数据处理
 * - 线程安全和同步控制
 * 
 * 主要函数分类：
 * 1. 事件处理函数 (FUN_180879cb0 ~ FUN_180879fe0)
 * 2. 条件检查函数 (FUN_18087a150 ~ FUN_18087a9d0)
 * 3. 哈希查找函数 (FUN_18087a070, FUN_18087aa90, FUN_18087aba0, FUN_18087acb0)
 * 4. 资源管理函数 (FUN_18087a790, FUN_18087ab50, FUN_18087ac69)
 * 5. 状态查询函数 (FUN_18087ab6b, FUN_18087ac7f)
 */

// ============================================================================
// 常量定义
// ============================================================================

/** UI系统事件处理器偏移量常量 */
#define UI_EVENT_HANDLER_OFFSET_1    0x1c0   /** 事件处理器偏移量1 */
#define UI_EVENT_HANDLER_OFFSET_2    0x178   /** 事件处理器偏移量2 */
#define UI_EVENT_HANDLER_OFFSET_3    0x240   /** 事件处理器偏移量3 */
#define UI_EVENT_HANDLER_OFFSET_4    0x170   /** 事件处理器偏移量4 */
#define UI_EVENT_HANDLER_OFFSET_5    0x1f8   /** 事件处理器偏移量5 */
#define UI_EVENT_HANDLER_OFFSET_6    0x230   /** 事件处理器偏移量6 */
#define UI_EVENT_HANDLER_OFFSET_7    400     /** 事件处理器偏移量7 */
#define UI_EVENT_HANDLER_OFFSET_8    0x188   /** 事件处理器偏移量8 */
#define UI_EVENT_HANDLER_OFFSET_9    0x220   /** 事件处理器偏移量9 */
#define UI_EVENT_HANDLER_OFFSET_10   0x200   /** 事件处理器偏移量10 */
#define UI_EVENT_HANDLER_OFFSET_11   0x238   /** 事件处理器偏移量11 */
#define UI_EVENT_HANDLER_OFFSET_12   0x168   /** 事件处理器偏移量12 */
#define UI_EVENT_HANDLER_OFFSET_13   0x1f0   /** 事件处理器偏移量13 */
#define UI_EVENT_HANDLER_OFFSET_14   0x218   /** 事件处理器偏移量14 */
#define UI_EVENT_HANDLER_OFFSET_15   0x210   /** 事件处理器偏移量15 */
#define UI_EVENT_HANDLER_OFFSET_16   0x1d0   /** 事件处理器偏移量16 */
#define UI_EVENT_HANDLER_OFFSET_17   0x1a0   /** 事件处理器偏移量17 */
#define UI_EVENT_HANDLER_OFFSET_18   0x198   /** 事件处理器偏移量18 */
#define UI_EVENT_HANDLER_OFFSET_19   0x208   /** 事件处理器偏移量19 */
#define UI_EVENT_HANDLER_OFFSET_20   0x1c8   /** 事件处理器偏移量20 */

/** UI系统条件检查偏移量常量 */
#define UI_CONDITION_CHECK_OFFSET_1    0x80    /** 条件检查偏移量1 */
#define UI_CONDITION_CHECK_OFFSET_2    0x110   /** 条件检查偏移量2 */
#define UI_CONDITION_CHECK_OFFSET_3    0x180   /** 条件检查偏移量3 */
#define UI_CONDITION_CHECK_OFFSET_4    0x1d0   /** 条件检查偏移量4 */
#define UI_CONDITION_CHECK_OFFSET_5    0x100   /** 条件检查偏移量5 */
#define UI_CONDITION_CHECK_OFFSET_6    0xe0    /** 条件检查偏移量6 */
#define UI_CONDITION_CHECK_OFFSET_7    0x1a0   /** 条件检查偏移量7 */
#define UI_CONDITION_CHECK_OFFSET_8    0x40    /** 条件检查偏移量8 */
#define UI_CONDITION_CHECK_OFFSET_9    0x30    /** 条件检查偏移量9 */
#define UI_CONDITION_CHECK_OFFSET_10   0x130   /** 条件检查偏移量10 */
#define UI_CONDITION_CHECK_OFFSET_11   0x1e0   /** 条件检查偏移量11 */
#define UI_CONDITION_CHECK_OFFSET_12   0x60    /** 条件检查偏移量12 */
#define UI_CONDITION_CHECK_OFFSET_13   400     /** 条件检查偏移量13 */
#define UI_CONDITION_CHECK_OFFSET_14   0x150   /** 条件检查偏移量14 */
#define UI_CONDITION_CHECK_OFFSET_15   0x70    /** 条件检查偏移量15 */
#define UI_CONDITION_CHECK_OFFSET_16   0x1c0   /** 条件检查偏移量16 */
#define UI_CONDITION_CHECK_OFFSET_17   0x1b0   /** 条件检查偏移量17 */
#define UI_CONDITION_CHECK_OFFSET_18   0x90    /** 条件检查偏移量18 */
#define UI_CONDITION_CHECK_OFFSET_19   0x170   /** 条件检查偏移量19 */
#define UI_CONDITION_CHECK_OFFSET_20   0x50    /** 条件检查偏移量20 */
#define UI_CONDITION_CHECK_OFFSET_21   0x160   /** 条件检查偏移量21 */
#define UI_CONDITION_CHECK_OFFSET_22   0xa0    /** 条件检查偏移量22 */
#define UI_CONDITION_CHECK_OFFSET_23   0xb0    /** 条件检查偏移量23 */
#define UI_CONDITION_CHECK_OFFSET_24   0x120   /** 条件检查偏移量24 */
#define UI_CONDITION_CHECK_OFFSET_25   0x1f0   /** 条件检查偏移量25 */
#define UI_CONDITION_CHECK_OFFSET_26   0xd0    /** 条件检查偏移量26 */
#define UI_CONDITION_CHECK_OFFSET_27   0xc0    /** 条件检查偏移量27 */
#define UI_CONDITION_CHECK_OFFSET_28   0xf0    /** 条件检查偏移量28 */

/** UI系统虚拟函数表偏移量常量 */
#define UI_VTABLE_OFFSET_1     0x2a0   /** 虚函数表偏移量1 */
#define UI_VTABLE_OFFSET_2     0x318   /** 虚函数表偏移量2 */
#define UI_VTABLE_OFFSET_3     0x2d8   /** 虚函数表偏移量3 */
#define UI_VTABLE_OFFSET_4     0x298   /** 虚函数表偏移量4 */
#define UI_VTABLE_OFFSET_5     0x268   /** 虚函数表偏移量5 */
#define UI_VTABLE_OFFSET_6     0x2e0   /** 虚函数表偏移量6 */
#define UI_VTABLE_OFFSET_7     0x2e8   /** 虚函数表偏移量7 */
#define UI_VTABLE_OFFSET_8     0x288   /** 虚函数表偏移量8 */
#define UI_VTABLE_OFFSET_9     0x338   /** 虚函数表偏移量9 */
#define UI_VTABLE_OFFSET_10    0x340   /** 虚函数表偏移量10 */
#define UI_VTABLE_OFFSET_11    0x2a8   /** 虚函数表偏移量11 */
#define UI_VTABLE_OFFSET_12    0x260   /** 虚函数表偏移量12 */
#define UI_VTABLE_OFFSET_13    0x330   /** 虚函数表偏移量13 */
#define UI_VTABLE_OFFSET_14    0x290   /** 虚函数表偏移量14 */
#define UI_VTABLE_OFFSET_15    0x2c0   /** 虚函数表偏移量15 */
#define UI_VTABLE_OFFSET_16    800     /** 虚函数表偏移量16 */
#define UI_VTABLE_OFFSET_17    0x270   /** 虚函数表偏移量17 */
#define UI_VTABLE_OFFSET_18    0x278   /** 虚函数表偏移量18 */
#define UI_VTABLE_OFFSET_19    0x310   /** 虚函数表偏移量19 */
#define UI_VTABLE_OFFSET_20    0x2b0   /** 虚函数表偏移量20 */
#define UI_VTABLE_OFFSET_21    0x328   /** 虚函数表偏移量21 */
#define UI_VTABLE_OFFSET_22    600     /** 虚函数表偏移量22 */
#define UI_VTABLE_OFFSET_23    0x2b8   /** 虚函数表偏移量23 */
#define UI_VTABLE_OFFSET_24    0x308   /** 虚函数表偏移量24 */
#define UI_VTABLE_OFFSET_25    0x300   /** 虚函数表偏移量25 */
#define UI_VTABLE_OFFSET_26    0x2d0   /** 虚函数表偏移量26 */
#define UI_VTABLE_OFFSET_27    0x280   /** 虚函数表偏移量27 */
#define UI_VTABLE_OFFSET_28    0x2f0   /** 虚函数表偏移量28 */
#define UI_VTABLE_OFFSET_29    0x2f8   /** 虚函数表偏移量29 */
#define UI_VTABLE_OFFSET_30    0x2c8   /** 虚函数表偏移量30 */

/** UI系统哈希表相关常量 */
#define UI_HASH_TABLE_SIZE_1    0x148   /** 哈希表大小1 */
#define UI_HASH_TABLE_OFFSET_1  0x140   /** 哈希表偏移量1 */
#define UI_HASH_TABLE_SIZE_2    0x70c   /** 哈希表大小2 */
#define UI_HASH_TABLE_OFFSET_2  0x6e8   /** 哈希表偏移量2 */
#define UI_HASH_TABLE_SIZE_3    0x6f0   /** 哈希表大小3 */
#define UI_HASH_TABLE_OFFSET_3  0x6f8   /** 哈希表偏移量3 */
#define UI_HASH_TABLE_SIZE_4    0x43c   /** 哈希表大小4 */
#define UI_HASH_TABLE_OFFSET_4  0x418   /** 哈希表偏移量4 */
#define UI_HASH_TABLE_SIZE_5    0x420   /** 哈希表大小5 */
#define UI_HASH_TABLE_OFFSET_5  0x428   /** 哈希表偏移量5 */
#define UI_HASH_TABLE_SIZE_6    0x5bc   /** 哈希表大小6 */
#define UI_HASH_TABLE_OFFSET_6  0x598   /** 哈希表偏移量6 */
#define UI_HASH_TABLE_SIZE_7    0x5a0   /** 哈希表大小7 */
#define UI_HASH_TABLE_OFFSET_7  0x5a8   /** 哈希表偏移量7 */

/** UI系统结构体偏移量常量 */
#define UI_CONTEXT_OFFSET        0x10    /** UI上下文偏移量 */
#define UI_MANAGER_OFFSET        8       /** UI管理器偏移量 */
#define UI_DATA_OFFSET_1         0x710   /** UI数据偏移量1 */
#define UI_DATA_OFFSET_2         0x440   /** UI数据偏移量2 */
#define UI_DATA_OFFSET_3         0x5c0   /** UI数据偏移量3 */

/** UI系统内存管理常量 */
#define UI_MUTEX_SIZE            0x20    /** 互斥量大小 */
#define UI_COMPARE_SIZE          0x10    /** 比较大小 */
#define UI_STACK_SIZE_1          32      /** 栈大小1 */
#define UI_STACK_SIZE_2          40      /** 栈大小2 */

// ============================================================================
// 函数别名定义
// ============================================================================

/** 事件处理函数别名 */
#define ui_system_event_handler_1           ui_system_event_handler_type1
#define ui_system_event_handler_2           ui_system_event_handler_type2
#define ui_system_event_handler_3           ui_system_event_handler_type3
#define ui_system_event_handler_4           ui_system_event_handler_type4
#define ui_system_event_handler_5           ui_system_event_handler_type5
#define ui_system_event_handler_6           ui_system_event_handler_type6
#define ui_system_event_handler_7           ui_system_event_handler_type7
#define ui_system_event_handler_8           ui_system_event_handler_type8
#define ui_system_event_handler_9           ui_system_event_handler_type9
#define ui_system_event_handler_10          ui_system_event_handler_type10
#define ui_system_event_handler_11          ui_system_event_handler_type11
#define ui_system_event_handler_12          ui_system_event_handler_type12
#define ui_system_event_handler_13          ui_system_event_handler_type13
#define ui_system_event_handler_14          ui_system_event_handler_type14
#define ui_system_event_handler_15          ui_system_event_handler_type15
#define ui_system_event_handler_16          ui_system_event_handler_type16
#define ui_system_event_handler_17          ui_system_event_handler_type17
#define ui_system_event_handler_18          ui_system_event_handler_type18
#define ui_system_event_handler_19          ui_system_event_handler_type19
#define ui_system_event_handler_20          ui_system_event_handler_type20

/** 条件检查函数别名 */
#define ui_system_condition_checker_1        ui_system_condition_checker_type1
#define ui_system_condition_checker_2        ui_system_condition_checker_type2
#define ui_system_condition_checker_3        ui_system_condition_checker_type3
#define ui_system_condition_checker_4        ui_system_condition_checker_type4
#define ui_system_condition_checker_5        ui_system_condition_checker_type5
#define ui_system_condition_checker_6        ui_system_condition_checker_type6
#define ui_system_condition_checker_7        ui_system_condition_checker_type7
#define ui_system_condition_checker_8        ui_system_condition_checker_type8
#define ui_system_condition_checker_9        ui_system_condition_checker_type9
#define ui_system_condition_checker_10       ui_system_condition_checker_type10
#define ui_system_condition_checker_11       ui_system_condition_checker_type11
#define ui_system_condition_checker_12       ui_system_condition_checker_type12
#define ui_system_condition_checker_13       ui_system_condition_checker_type13
#define ui_system_condition_checker_14       ui_system_condition_checker_type14
#define ui_system_condition_checker_15       ui_system_condition_checker_type15
#define ui_system_condition_checker_16       ui_system_condition_checker_type16
#define ui_system_condition_checker_17       ui_system_condition_checker_type17
#define ui_system_condition_checker_18       ui_system_condition_checker_type18
#define ui_system_condition_checker_19       ui_system_condition_checker_type19
#define ui_system_condition_checker_20       ui_system_condition_checker_type20
#define ui_system_condition_checker_21       ui_system_condition_checker_type21
#define ui_system_condition_checker_22       ui_system_condition_checker_type22
#define ui_system_condition_checker_23       ui_system_condition_checker_type23
#define ui_system_condition_checker_24       ui_system_condition_checker_type24
#define ui_system_condition_checker_25       ui_system_condition_checker_type25
#define ui_system_condition_checker_26       ui_system_condition_checker_type26
#define ui_system_condition_checker_27       ui_system_condition_checker_type27
#define ui_system_condition_checker_28       ui_system_condition_checker_type28

/** 哈希查找函数别名 */
#define ui_system_hash_finder_1             ui_system_hash_finder_type1
#define ui_system_hash_finder_2             ui_system_hash_finder_type2
#define ui_system_hash_finder_3             ui_system_hash_finder_type3
#define ui_system_hash_finder_4             ui_system_hash_finder_type4
#define ui_system_hash_finder_5             ui_system_hash_finder_type5
#define ui_system_hash_finder_6             ui_system_hash_finder_type6
#define ui_system_hash_finder_7             ui_system_hash_finder_type7

/** 资源管理函数别名 */
#define ui_system_resource_manager_1        ui_system_resource_manager_type1
#define ui_system_resource_manager_2        ui_system_resource_manager_type2
#define ui_system_resource_manager_3        ui_system_resource_manager_type3

/** 状态查询函数别名 */
#define ui_system_status_query_1            ui_system_status_query_type1
#define ui_system_status_query_2            ui_system_status_query_type2

// ============================================================================
// 事件处理函数实现
// ============================================================================

/**
 * UI系统事件处理器类型1
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type1(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x000180879ccf处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_1))(ui_context, event_data, 1);
    return;
}

/**
 * UI系统事件处理器类型2
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type2(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x000180879cff处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_2))(ui_context, event_data, 1);
    return;
}

/**
 * UI系统事件处理器类型3
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type3(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x000180879d2f处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_3))(ui_context, event_data, 1);
    return;
}

/**
 * UI系统事件处理器类型4
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type4(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x000180879d5f处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_4))(ui_context, event_data, 1);
    return;
}

/**
 * UI系统事件处理器类型5
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type5(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x000180879d8f处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_5))(ui_context, event_data, 1);
    return;
}

/**
 * UI系统事件处理器类型6
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type6(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x000180879dbf处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_6))(ui_context, event_data, 1);
    return;
}

/**
 * UI系统事件处理器类型7
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type7(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x000180879def处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_7))(ui_context, event_data, 1);
    return;
}

/**
 * UI系统事件处理器类型8
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type8(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x000180879e1f处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_8))(ui_context, event_data, 1);
    return;
}

/**
 * UI系统事件处理器类型9
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type9(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x000180879e4f处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_9))(ui_context, event_data, 1);
    return;
}

/**
 * UI系统事件处理器类型10
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type10(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x000180879e7f处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_10))(ui_context, event_data, 1);
    return;
}

/**
 * UI系统事件处理器类型11
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type11(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x000180879eaf处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_11))(ui_context, event_data, 1);
    return;
}

/**
 * UI系统事件处理器类型12
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type12(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x000180879edf处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_12))(ui_context, event_data, 1);
    return;
}

/**
 * UI系统事件处理器类型13
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type13(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x000180879f0f处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_13))(ui_context, event_data, 1);
    return;
}

/**
 * UI系统事件处理器类型14
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type14(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x000180879f3f处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_14))(ui_context, event_data, 1);
    return;
}

/**
 * UI系统事件处理器类型15
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type15(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x000180879f6f处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_15))(ui_context, event_data, 1);
    return;
}

/**
 * UI系统事件处理器类型16
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type16(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x000180879f9f处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_16))(ui_context, event_data, 1);
    return;
}

/**
 * UI系统事件处理器类型17
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type17(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x000180879fcf处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_17))(ui_context, event_data, 1);
    return;
}

/**
 * UI系统事件处理器类型18
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type18(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x000180879fff处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_18))(ui_context, event_data, 1);
    return;
}

/**
 * UI系统事件处理器类型19
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type19(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x00018087a02f处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_19))(ui_context, event_data, 1);
    return;
}

/**
 * UI系统事件处理器类型20
 * 处理UI系统中的事件分发和回调执行
 * 
 * @param ui_context UI系统上下文指针
 */
void ui_system_event_handler_type20(longlong *ui_context)
{
    uint64_t event_data;
    
    // 获取事件数据
    event_data = FUN_180847820();
    
    // 警告：无法恢复0x00018087a05f处的跳转表，分支过多
    // 警告：将间接跳转作为调用处理
    // 执行事件处理器回调
    (**(code **)(*ui_context + UI_EVENT_HANDLER_OFFSET_20))(ui_context, event_data, 1);
    return;
}

// ============================================================================
// 哈希查找函数实现
// ============================================================================

/**
 * UI系统哈希查找器类型1
 * 在UI系统的哈希表中查找指定键值的数据
 * 使用二分查找算法进行高效搜索
 * 
 * @param ui_manager UI管理器指针
 * @param search_key 搜索键值
 * @return 找到的数据指针，未找到返回0
 */
longlong ui_system_hash_finder_type1(longlong ui_manager, uint64_t search_key)
{
    longlong hash_table;
    int left_index;
    int right_index;
    longlong current_entry;
    uint hash_mask;
    int compare_result;
    int middle_index;
    
    // 获取哈希表指针
    hash_table = *(longlong *)(ui_manager + UI_CONTEXT_OFFSET);
    if (hash_table != 0) {
        left_index = 0;
        right_index = *(int *)(hash_table + UI_HASH_TABLE_SIZE_1) + -1;
        if (-1 < right_index) {
            hash_table = *(longlong *)(hash_table + UI_HASH_TABLE_OFFSET_1);
            do {
                // 计算中间索引
                middle_index = (right_index + left_index) / 2;
                current_entry = *(longlong *)(hash_table + (longlong)middle_index * 8);
                
                // 比较键值
                compare_result = memcmp(search_key, current_entry + 0x10, UI_COMPARE_SIZE);
                if (compare_result < 0) {
                    hash_mask = 0xffffffff;
                }
                else {
                    compare_result = memcmp(current_entry + 0x10, search_key, UI_COMPARE_SIZE);
                    hash_mask = (uint)(compare_result < 0);
                    if (hash_mask == 0) {
                        // 找到匹配项
                        if ((-1 < middle_index) && (current_entry != 0)) {
                            return current_entry;
                        }
                        break;
                    }
                }
                
                // 调整搜索范围
                compare_result = middle_index + -1;
                if (-1 < (int)hash_mask) {
                    compare_result = right_index;
                }
                right_index = compare_result;
                if (-1 < (int)hash_mask) {
                    left_index = middle_index + 1;
                }
            } while (left_index <= right_index);
        }
    }
    
    // 未找到，调用虚拟函数处理
    hash_table = (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_1))
                    (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), search_key, 1);
    return hash_table;
}

// ============================================================================
// 条件检查函数实现
// ============================================================================

/**
 * UI系统条件检查器类型1
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type1(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_1), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_2))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型2
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type2(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_2), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_3))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型3
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type3(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_3), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_4))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型4
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type4(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_4), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_5))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型5
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type5(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_5), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_6))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型6
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type6(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_6), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_7))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型7
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type7(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_7), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_8))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型8
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type8(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_8), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_9))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型9
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type9(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_9), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_10))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型10
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type10(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_10), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_11))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型11
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type11(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_11), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_12))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型12
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type12(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_12), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_13))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型13
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type13(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_13), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_14))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型14
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type14(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_14), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_15))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型15
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type15(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_15), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_16))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型16
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type16(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_16), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_17))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型17
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type17(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_17), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_18))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型18
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type18(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_18), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_19))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型19
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type19(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_19), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_20))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型20
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type20(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_20), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_21))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型21
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type21(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_21), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_23))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型22
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type22(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_22), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_24))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型23
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type23(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_23), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_25))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型24
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type24(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_24), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_26))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型25
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type25(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_25), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_27))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型26
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type26(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_26), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_28))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型27
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type27(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_27), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_29))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

/**
 * UI系统条件检查器类型28
 * 检查UI系统条件并执行相应操作
 * 
 * @param ui_manager UI管理器指针
 * @param condition_data 条件数据
 */
void ui_system_condition_checker_type28(longlong ui_manager, uint64_t condition_data)
{
    longlong check_result;
    
    // 检查条件是否满足
    if ((*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) != 0) &&
        (check_result = FUN_1808761f0(*(longlong *)(ui_manager + UI_CONTEXT_OFFSET) + UI_CONDITION_CHECK_OFFSET_28), 
         check_result != 0)) {
        return;
    }
    
    // 条件不满足，调用虚拟函数处理
    (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_30))
        (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), condition_data, 1);
    return;
}

// ============================================================================
// 资源管理函数实现
// ============================================================================

/**
 * UI系统资源管理器类型1
 * 管理UI系统资源的分配和释放
 * 包含栈保护和错误处理机制
 * 
 * @param ui_manager UI管理器指针
 * @param resource_data 资源数据
 */
void ui_system_resource_manager_type1(longlong ui_manager, uint64_t resource_data)
{
    longlong handle_result;
    int8_t stack_protector_1 [UI_STACK_SIZE_1];
    int8_t stack_protector_2 [UI_STACK_SIZE_2];
    ulonglong stack_guard;
    
    // 栈保护机制
    stack_guard = _DAT_180bf00a8 ^ (ulonglong)stack_protector_1;
    
    // 调用虚拟函数处理资源
    handle_result = (**(code **)(**(longlong **)(ui_manager + UI_MANAGER_OFFSET) + UI_VTABLE_OFFSET_22))
                      (*(longlong **)(ui_manager + UI_MANAGER_OFFSET), resource_data, 1);
    
    // 错误处理
    if (handle_result == 0) {
        // 警告：子函数不返回
        FUN_18084b240(resource_data, stack_protector_2);
    }
    
    // 警告：子函数不返回
    FUN_1808fc050(stack_guard ^ (ulonglong)stack_protector_1);
}

// ============================================================================
// 其他哈希查找函数实现
// ============================================================================

/**
 * UI系统哈希查找器类型2
 * 在UI系统的哈希表中查找指定键值的数据
 * 使用哈希算法进行快速查找
 * 
 * @param search_key 搜索键值
 * @param ui_context UI上下文指针
 * @param lock_flag 锁定标志
 * @return 找到的数据指针，未找到返回0
 */
longlong ui_system_hash_finder_type2(longlong ui_manager, uint *search_key, char lock_flag)
{
    longlong hash_table;
    bool need_unlock;
    longlong *current_entry;
    int entry_index;
    uint *key_ptr;
    longlong result;
    longlong context_ptr;
    
    // 获取UI上下文
    context_ptr = *(longlong *)(ui_manager + UI_MANAGER_OFFSET);
    if (context_ptr == 0) {
        return 0;
    }
    
    // 获取哈希表
    hash_table = *(longlong *)(context_ptr + UI_DATA_OFFSET_1);
    if ((hash_table == 0) || (lock_flag == '\0')) {
        need_unlock = false;
    }
    else {
        need_unlock = true;
        FUN_180768360(hash_table);
    }
    
    // 哈希查找
    if (((*(int *)(context_ptr + UI_HASH_TABLE_SIZE_2) != 0) && 
         (*(int *)(context_ptr + UI_HASH_TABLE_SIZE_3) != 0)) &&
        (entry_index = *(int *)(*(longlong *)(context_ptr + UI_HASH_TABLE_OFFSET_2) +
                               (longlong)(int)((search_key[3] ^ search_key[2] ^ search_key[1] ^ *search_key) &
                                            *(int *)(context_ptr + UI_HASH_TABLE_SIZE_3) - 1U) * 4), 
         entry_index != -1)) {
        do {
            current_entry = (longlong *)((longlong)entry_index * UI_MUTEX_SIZE + *(longlong *)(context_ptr + UI_HASH_TABLE_OFFSET_3));
            if ((*current_entry == *(longlong *)search_key) && (current_entry[1] == *(longlong *)(search_key + 2))) {
                result = current_entry[3];
                goto cleanup_and_return;
            }
            entry_index = (int)current_entry[2];
        } while (entry_index != -1);
    }
    
    result = 0;
    
cleanup_and_return:
    if (need_unlock) {
        // 警告：子函数不返回
        FUN_180768400(hash_table);
    }
    return result;
}

/**
 * UI系统哈希查找器类型3
 * 在UI系统的哈希表中查找指定键值的数据
 * 使用哈希算法进行快速查找
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @param param_3 参数3
 * @return 找到的数据指针，未找到返回0
 */
longlong ui_system_hash_finder_type3(uint64_t param_1, uint64_t param_2, char param_3)
{
    longlong hash_table;
    bool need_unlock;
    longlong *current_entry;
    int entry_index;
    uint *key_ptr;
    longlong result;
    longlong context_ptr;
    
    // 获取哈希表
    hash_table = *(longlong *)(context_ptr + UI_DATA_OFFSET_1);
    if ((hash_table == 0) || (param_3 == '\0')) {
        need_unlock = false;
    }
    else {
        need_unlock = true;
        FUN_180768360(hash_table);
    }
    
    // 哈希查找
    if (((*(int *)(context_ptr + UI_HASH_TABLE_SIZE_2) != 0) && 
         (*(int *)(context_ptr + UI_HASH_TABLE_SIZE_3) != 0)) &&
        (entry_index = *(int *)(*(longlong *)(context_ptr + UI_HASH_TABLE_OFFSET_2) +
                               (longlong)(int)((key_ptr[3] ^ key_ptr[2] ^ key_ptr[1] ^ *key_ptr) &
                                            *(int)(context_ptr + UI_HASH_TABLE_SIZE_3) - 1U) * 4), 
         entry_index != -1)) {
        do {
            current_entry = (longlong *)((longlong)entry_index * UI_MUTEX_SIZE + *(longlong *)(context_ptr + UI_HASH_TABLE_OFFSET_3));
            if ((*current_entry == *(longlong *)key_ptr) && (current_entry[1] == *(longlong *)(key_ptr + 2))) {
                result = current_entry[3];
                goto cleanup_and_return;
            }
            entry_index = (int)current_entry[2];
        } while (entry_index != -1);
    }
    
    result = 0;
    
cleanup_and_return:
    if (need_unlock) {
        // 警告：子函数不返回
        FUN_180768400(hash_table);
    }
    return result;
}

/**
 * UI系统哈希查找器类型4
 * 在UI系统的哈希表中查找指定键值的数据
 * 使用哈希算法进行快速查找
 * 
 * @param ui_manager UI管理器指针
 * @param search_key 搜索键值
 * @param lock_flag 锁定标志
 * @return 找到的数据指针，未找到返回0
 */
longlong ui_system_hash_finder_type4(longlong ui_manager, uint *search_key, char lock_flag)
{
    longlong hash_table;
    uint key_part_1;
    uint key_part_2;
    uint key_part_3;
    uint key_part_4;
    bool need_unlock;
    longlong context_ptr;
    longlong data_ptr;
    longlong *current_entry;
    int entry_index;
    longlong result;
    
    // 获取UI上下文
    context_ptr = *(longlong *)(ui_manager + UI_MANAGER_OFFSET);
    if (context_ptr == 0) {
        return 0;
    }
    
    // 分解键值
    key_part_1 = *search_key;
    key_part_2 = search_key[1];
    data_ptr = *(longlong *)search_key;
    key_part_3 = search_key[2];
    key_part_4 = search_key[3];
    
    // 获取哈希表
    hash_table = *(longlong *)(context_ptr + UI_DATA_OFFSET_2);
    if ((hash_table == 0) || (lock_flag == '\0')) {
        need_unlock = false;
    }
    else {
        need_unlock = true;
        FUN_180768360(hash_table);
    }
    
    // 哈希查找
    if ((*(int *)(context_ptr + UI_HASH_TABLE_SIZE_4) != 0) && (*(int *)(context_ptr + UI_HASH_TABLE_SIZE_5) != 0)) {
        entry_index = *(int *)(*(longlong *)(context_ptr + UI_HASH_TABLE_OFFSET_4) +
                               (longlong)(int)((key_part_2 ^ key_part_1 ^ key_part_3 ^ key_part_4) & 
                                            *(int)(context_ptr + UI_HASH_TABLE_SIZE_5) - 1U) * 4);
        if (entry_index != -1) {
            do {
                current_entry = (longlong *)((longlong)entry_index * UI_MUTEX_SIZE + *(longlong *)(context_ptr + UI_HASH_TABLE_OFFSET_5));
                if ((*current_entry == data_ptr) && (current_entry[1] == *(longlong *)(search_key + 2))) {
                    result = current_entry[3];
                    goto cleanup_and_return;
                }
                entry_index = (int)current_entry[2];
            } while (entry_index != -1);
        }
    }
    
    result = 0;
    
cleanup_and_return:
    if (need_unlock) {
        // 警告：子函数不返回
        FUN_180768400(hash_table);
    }
    return result;
}

/**
 * UI系统哈希查找器类型5
 * 在UI系统的哈希表中查找指定键值的数据
 * 使用哈希算法进行快速查找
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @param param_3 参数3
 * @return 找到的数据指针，未找到返回0
 */
longlong ui_system_hash_finder_type5(longlong param_1, uint64_t param_2, char param_3)
{
    longlong hash_table;
    bool need_unlock;
    longlong *current_entry;
    int entry_index;
    longlong key_data;
    longlong result;
    longlong context_ptr;
    longlong xmm_data;
    uint key_high;
    longlong stack_data;
    
    // 获取哈希表
    hash_table = *(longlong *)(context_ptr + UI_DATA_OFFSET_2);
    stack_data = xmm_data;
    if ((hash_table == 0) || (param_3 == '\0')) {
        need_unlock = false;
    }
    else {
        need_unlock = true;
        FUN_180768360(hash_table);
    }
    
    // 哈希查找
    if ((*(int *)(context_ptr + UI_HASH_TABLE_SIZE_4) != 0) && (*(int *)(context_ptr + UI_HASH_TABLE_SIZE_5) != 0)) {
        key_high = (uint)((ulonglong)param_1 >> 0x20);
        entry_index = *(int *)(*(longlong *)(context_ptr + UI_HASH_TABLE_OFFSET_4) +
                               (longlong)(int)((key_high ^ (uint)param_1 ^ (uint)stack_data ^
                                            stack_data._4_4_) & *(int)(context_ptr + UI_HASH_TABLE_SIZE_5) - 1U) * 4);
        if (entry_index != -1) {
            do {
                current_entry = (longlong *)((longlong)entry_index * UI_MUTEX_SIZE + *(longlong *)(context_ptr + UI_HASH_TABLE_OFFSET_5));
                if ((*current_entry == param_1) && (current_entry[1] == stack_data)) {
                    result = current_entry[3];
                    goto cleanup_and_return;
                }
                entry_index = (int)current_entry[2];
            } while (entry_index != -1);
        }
    }
    
    result = 0;
    
cleanup_and_return:
    if (need_unlock) {
        // 警告：子函数不返回
        FUN_180768400(hash_table);
    }
    return result;
}

/**
 * UI系统哈希查找器类型6
 * 在UI系统的哈希表中查找指定键值的数据
 * 使用哈希算法进行快速查找
 * 
 * @param ui_manager UI管理器指针
 * @param search_key 搜索键值
 * @param lock_flag 锁定标志
 * @return 找到的数据指针，未找到返回0
 */
longlong ui_system_hash_finder_type6(longlong ui_manager, uint *search_key, char lock_flag)
{
    longlong hash_table;
    bool need_unlock;
    longlong *current_entry;
    int entry_index;
    longlong result;
    longlong context_ptr;
    
    // 获取UI上下文
    context_ptr = *(longlong *)(ui_manager + UI_MANAGER_OFFSET);
    if (context_ptr == 0) {
        return 0;
    }
    
    // 获取哈希表
    hash_table = *(longlong *)(context_ptr + UI_DATA_OFFSET_3);
    if ((hash_table == 0) || (lock_flag == '\0')) {
        need_unlock = false;
    }
    else {
        need_unlock = true;
        FUN_180768360(hash_table);
    }
    
    // 哈希查找
    if (((*(int *)(context_ptr + UI_HASH_TABLE_SIZE_6) != 0) && 
         (*(int *)(context_ptr + UI_HASH_TABLE_SIZE_7) != 0)) &&
        (entry_index = *(int *)(*(longlong *)(context_ptr + UI_HASH_TABLE_OFFSET_6) +
                               (longlong)(int)((search_key[3] ^ search_key[2] ^ search_key[1] ^ *search_key) &
                                            *(int)(context_ptr + UI_HASH_TABLE_SIZE_7) - 1U) * 4), 
         entry_index != -1)) {
        do {
            current_entry = (longlong *)((longlong)entry_index * UI_MUTEX_SIZE + *(longlong *)(context_ptr + UI_HASH_TABLE_OFFSET_7));
            if ((*current_entry == *(longlong *)search_key) && (current_entry[1] == *(longlong *)(search_key + 2))) {
                result = current_entry[3];
                goto cleanup_and_return;
            }
            entry_index = (int)current_entry[2];
        } while (entry_index != -1);
    }
    
    result = 0;
    
cleanup_and_return:
    if (need_unlock) {
        // 警告：子函数不返回
        FUN_180768400(hash_table);
    }
    return result;
}

// ============================================================================
// 资源清理函数实现
// ============================================================================

/**
 * UI系统资源管理器类型2
 * 清理UI系统资源
 * 
 * 警告：此函数不返回
 */
void ui_system_resource_manager_type2(void)
{
    // 警告：子函数不返回
    FUN_180768400();
}

/**
 * UI系统状态查询器类型1
 * 查询UI系统状态
 * 
 * @param context 上下文指针
 * @return 状态数据
 */
uint64_t ui_system_status_query_type1(void)
{
    longlong context_ptr;
    char status_flag;
    
    if (status_flag != '\0') {
        // 警告：子函数不返回
        FUN_180768400();
    }
    return *(uint64_t *)(context_ptr + 0x18);
}

/**
 * UI系统哈希查找器类型7
 * 在UI系统的哈希表中查找指定键值的数据
 * 使用哈希算法进行快速查找
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @param param_3 参数3
 * @return 找到的数据指针，未找到返回0
 */
longlong ui_system_hash_finder_type7(uint64_t param_1, uint64_t param_2, char param_3)
{
    longlong hash_table;
    bool need_unlock;
    longlong *current_entry;
    int entry_index;
    uint *key_ptr;
    longlong result;
    longlong context_ptr;
    
    // 获取哈希表
    hash_table = *(longlong *)(context_ptr + UI_DATA_OFFSET_3);
    if ((hash_table == 0) || (param_3 == '\0')) {
        need_unlock = false;
    }
    else {
        need_unlock = true;
        FUN_180768360(hash_table);
    }
    
    // 哈希查找
    if (((*(int *)(context_ptr + UI_HASH_TABLE_SIZE_6) != 0) && 
         (*(int *)(context_ptr + UI_HASH_TABLE_SIZE_7) != 0)) &&
        (entry_index = *(int *)(*(longlong *)(context_ptr + UI_HASH_TABLE_OFFSET_6) +
                               (longlong)(int)((key_ptr[3] ^ key_ptr[2] ^ key_ptr[1] ^ *key_ptr) &
                                            *(int *)(context_ptr + UI_HASH_TABLE_SIZE_7) - 1U) * 4), 
         entry_index != -1)) {
        do {
            current_entry = (longlong *)((longlong)entry_index * UI_MUTEX_SIZE + *(longlong *)(context_ptr + UI_HASH_TABLE_OFFSET_7));
            if ((*current_entry == *(longlong *)key_ptr) && (current_entry[1] == *(longlong *)(key_ptr + 2))) {
                result = current_entry[3];
                goto cleanup_and_return;
            }
            entry_index = (int)current_entry[2];
        } while (entry_index != -1);
    }
    
    result = 0;
    
cleanup_and_return:
    if (need_unlock) {
        // 警告：子函数不返回
        FUN_180768400(hash_table);
    }
    return result;
}

/**
 * UI系统资源管理器类型3
 * 清理UI系统资源
 * 
 * 警告：此函数不返回
 */
void ui_system_resource_manager_type3(void)
{
    // 警告：子函数不返回
    FUN_180768400();
}

/**
 * UI系统状态查询器类型2
 * 查询UI系统状态
 * 
 * @param context 上下文指针
 * @return 状态数据
 */
uint64_t ui_system_status_query_type2(void)
{
    longlong context_ptr;
    char status_flag;
    
    if (status_flag != '\0') {
        // 警告：子函数不返回
        FUN_180768400();
    }
    return *(uint64_t *)(context_ptr + 0x18);
}

// ============================================================================
// 模块信息
// ============================================================================

/**
 * 模块功能说明：
 * 
 * 本模块实现了UI系统的核心功能，包括：
 * 
 * 1. 事件处理系统：
 *    - 20个不同类型的事件处理器
 *    - 支持多种事件类型和回调机制
 *    - 异步事件处理和分发
 * 
 * 2. 条件检查系统：
 *    - 28个条件检查器
 *    - 支持复杂的条件逻辑判断
 *    - 条件满足时的优化处理
 * 
 * 3. 哈希查找系统：
 *    - 7个高效的哈希查找器
 *    - 支持二分查找和哈希查找
 *    - 线程安全的数据访问
 * 
 * 4. 资源管理系统：
 *    - 3个资源管理器
 *    - 栈保护和错误处理
 *    - 自动资源清理
 * 
 * 5. 状态查询系统：
 *    - 2个状态查询器
 *    - 实时状态监控
 *    - 条件状态检查
 * 
 * 技术特点：
 * - 使用虚拟函数表实现多态
 * - 采用哈希表优化查找性能
 * - 实现线程安全机制
 * - 支持栈保护和错误处理
 * 
 * 性能优化：
 * - 使用哈希算法减少查找时间
 * - 实现二分查找提高搜索效率
 * - 采用条件检查避免不必要的处理
 * - 使用栈保护防止内存破坏
 */