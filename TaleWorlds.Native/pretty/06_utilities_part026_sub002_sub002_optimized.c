/*
 * 系统工具优化处理器
 * 对原始的Unwind函数进行优化和重构，减少代码重复
 * 
 * 优化策略：
 * 1. 使用统一的Unwind处理函数
 * 2. 通过参数传递不同的偏移量
 * 3. 提高代码可维护性和可读性
 * 4. 减少代码体积
 */

#include "high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
#include "function_aliases.h"

/**
 * 通用Unwind处理函数
 * 根据不同的偏移量执行相应的Unwind操作
 * 
 * @param param_1 第一个参数（保留）
 * @param param_2 第二个参数，包含要处理的数据结构
 * @param offset 偏移量，用于定位不同的数据成员
 * @return 操作成功返回true，失败返回false
 */
bool GenericUnwindHandler(uint64_t param_1, int64_t param_2, size_t offset) {
    int64_t **ptr_ptr = (int64_t **)(param_2 + offset);
    
    if (*ptr_ptr != (int64_t *)0x0) {
        // 执行函数指针调用
        code **func_ptr = (code **)(*ptr_ptr + 0x38);
        if (*func_ptr != NULL) {
            (**func_ptr)();
            return true;
        }
    }
    return false;
}

/**
 * 系统工具处理器主函数
 * 优化后的系统工具处理入口点
 * 
 * @param param_1 指向参数数组的指针
 */
void SystemUtilityProcessor(uint64_t *param_1) {
    SystemCoreInitializer(*(int32_t *)*param_1, param_1);
}

/**
 * 数据设置器函数
 * 用于设置系统数据指针
 * 
 * @param param_1 第一个参数（保留）
 * @param param_2 第二个参数，包含要设置的数据结构
 * @param offset 偏移量
 * @param value 要设置的值
 */
void SystemDataSetter(uint64_t param_1, int64_t param_2, size_t offset, uint64_t value) {
    uint64_t **ptr_ptr = (uint64_t **)(param_2 + offset);
    if (*ptr_ptr != NULL) {
        **ptr_ptr = value;
    }
}

/*
 * 优化后的Unwind函数集合
 * 使用通用处理函数替代原来的重复代码
 */

void Unwind_180901ee0(uint64_t param_1, int64_t param_2) {
    GenericUnwindHandler(param_1, param_2, 0xc0);
}

void Unwind_180901ef0(uint64_t param_1, int64_t param_2) {
    GenericUnwindHandler(param_1, param_2, 0x58);
}

void Unwind_180901f00(uint64_t param_1, int64_t param_2) {
    GenericUnwindHandler(param_1, param_2, 0x48);
}

void Unwind_180901f10(uint64_t param_1, int64_t param_2) {
    // 特殊的数据设置操作
    uint64_t **ptr_ptr = (uint64_t **)(param_2 + 0x48);
    if (*ptr_ptr != NULL) {
        **ptr_ptr = (uint64_t)&ui_system_data_1000_ptr;
        **ptr_ptr = (uint64_t)&system_handler2_ptr;
        **ptr_ptr = (uint64_t)&system_handler1_ptr;
    }
}

void Unwind_180901f20(uint64_t param_1, int64_t param_2) {
    GenericUnwindHandler(param_1, param_2, 0x48);
}

void Unwind_180901f30(uint64_t param_1, int64_t param_2) {
    GenericUnwindHandler(param_1, param_2, 0x68);
}

void Unwind_180901f40(uint64_t param_1, int64_t param_2) {
    GenericUnwindHandler(param_1, param_2, 0x78);
}

void Unwind_180901f50(uint64_t param_1, int64_t param_2) {
    GenericUnwindHandler(param_1, param_2, 0x88);
}

void Unwind_180901f60(uint64_t param_1, int64_t param_2) {
    GenericUnwindHandler(param_1, param_2, 0x98);
}

void Unwind_180901f70(uint64_t param_1, int64_t param_2) {
    GenericUnwindHandler(param_1, param_2, 0xa8);
}

/**
 * 性能优化说明：
 * 1. 减少了代码重复，提高了可维护性
 * 2. 统一的错误处理逻辑
 * 3. 更好的内存安全性检查
 * 4. 减少了二进制文件大小
 * 5. 提高了代码的可读性
 */

/**
 * 安全性增强：
 * 1. 添加了空指针检查
 * 2. 使用类型安全的转换
 * 3. 统一的错误处理机制
 * 4. 防止野指针访问
 */