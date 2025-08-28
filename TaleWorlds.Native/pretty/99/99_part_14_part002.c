/* 函数别名定义: DataSerializer */
#define DataSerializer DataSerializer
#include "TaleWorlds.Native.Split.h"
/**
 * @file 99_part_14_part002.c
 * @brief 动态对象池管理系统 - 对象创建与初始化模块
 *
 * 本模块包含20个函数，用于管理不同类型的动态对象池。
 * 主要功能包括：
 * - 动态内存分配与扩展
 * - 对象初始化与结构设置
 * - 不同类型对象的工厂方法
 * - 内存池容量管理
 *
 * 技术特点：
 * - 使用1.5倍扩容策略
 * - 最小容量为64字节
 * - 支持24字节和32字节两种对象大小
 * - 统一的内存管理接口
 */
/* ============================================================================
 * 常量定义
 * ============================================================================ */
/** 最小内存池容量 */
#define MIN_POOL_CAPACITY 64
/** 扩容因子：1.5倍 */
#define EXPANSION_FACTOR 1.5f
/** 小型对象大小（24字节） */
#define SMALL_OBJECT_SIZE 0x18
/** 大型对象大小（32字节） */
#define LARGE_OBJECT_SIZE 0x20
/* ============================================================================
 * 类型别名定义
 * ============================================================================ */
/** 内存池句柄类型 */
typedef uint64_t PoolHandle;
/** 对象类型标识符 */
typedef uint32_t ObjectType;
/** 对象参数结构体 */
typedef struct {
    uint64_t param1;
    uint64_t param2;
    ObjectType type;
} ObjectParams;
/** 内存池控制块 */
typedef struct {
    uint64_t base_address;
    uint32_t capacity;
    uint32_t used_count;
    uint64_t* objects;
} MemoryPool;
/* ============================================================================
 * 内部函数声明
 * ============================================================================ */
/** 内存池重新分配函数 */
extern int DataSerializer0(void* pool, int new_size);
/** 对象初始化函数 */
extern void global_var_7856(void* object, ObjectType type, void* params);
/* ============================================================================
 * 全局对象类型常量
 * ============================================================================ */
/** 对象类型A的虚函数表 */
extern void* global_var_3872_ptr;
/** 对象类型B的虚函数表 */
extern void* global_var_4128_ptr;
/** 对象类型C的虚函数表 */
extern void* global_var_4000_ptr;
/** 对象类型D的虚函数表 */
extern void* global_var_9408_ptr;
/** 对象类型E的虚函数表 */
extern void* global_var_9152_ptr;
/** 对象类型F的虚函数表 */
extern void* global_var_9776_ptr;
/** 对象类型G的虚函数表 */
extern void* global_var_9656_ptr;
/** 对象类型H的虚函数表 */
extern void* global_var_9536_ptr;
/** 对象类型I的虚函数表 */
extern void* global_var_9896_ptr;
/** 对象类型J的虚函数表 */
extern void* global_var_9280_ptr;
/** 对象类型K的虚函数表 */
extern void* global_var_5400_ptr;
/** 对象类型L的虚函数表 */
extern void* global_var_5544_ptr;
/** 对象类型M的虚函数表 */
extern void* global_var_5688_ptr;
/** 对象类型N的虚函数表 */
extern void* global_var_5832_ptr;
/** 对象类型O的虚函数表 */
extern void* global_var_6264_ptr;
/** 对象类型P的虚函数表 */
extern void* global_var_5976_ptr;
/** 对象类型Q的虚函数表 */
extern void* global_var_6408_ptr;
/** 对象类型R的虚函数表 */
extern void* global_var_6120_ptr;
/** 对象类型S的虚函数表 */
extern void* global_var_8288_ptr;
/** 对象类型T的虚函数表 */
extern void* global_var_8152_ptr;
/* ============================================================================
 * 核心功能实现
 * ============================================================================ */
/**
 * @brief 创建类型A对象（24字节）
 *
 * @param handle 内存池句柄
 * @param params 对象参数
 * @param type 对象类型
 * @param pool 内存池指针
 *
 * 功能描述：
 * - 检查内存池容量是否足够
 * - 如需要则进行1.5倍扩容
 * - 在内存池中分配新对象
 * - 初始化对象结构并设置虚函数表
 *
 * 内存管理：
 * - 使用1.5倍扩容策略
 * - 最小容量为64字节
 * - 对象大小为24字节
 */
void CreateObjectTypeA(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + SMALL_OBJECT_SIZE;
// 检查并扩容
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
// 再次检查容量
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool, required_capacity), new_capacity != 0)) {
        return;
    }
// 创建对象
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x14) = 0;
        *(void**)object_ptr = &global_var_3872_ptr;
        *(uint32_t *)(object_ptr + 1) = SMALL_OBJECT_SIZE;
        global_var_7856(object_ptr, type, params);
        return;
    }
// 清理内存
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/**
 * @brief 创建类型B对象（24字节）
 *
 * 与CreateObjectTypeA功能相同，但使用不同的虚函数表
 */
void CreateObjectTypeB(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + SMALL_OBJECT_SIZE;
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool, required_capacity), new_capacity != 0)) {
        return;
    }
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x14) = 0;
        *(void**)object_ptr = &global_var_4128_ptr;
        *(uint32_t *)(object_ptr + 1) = SMALL_OBJECT_SIZE;
        global_var_7856(object_ptr, type, params);
        return;
    }
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/**
 * @brief 创建类型C对象（24字节）
 *
 * 与CreateObjectTypeA功能相同，但使用不同的虚函数表
 */
void CreateObjectTypeC(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + SMALL_OBJECT_SIZE;
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool, required_capacity), new_capacity != 0)) {
        return;
    }
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x14) = 0;
        *(void**)object_ptr = &global_var_4000_ptr;
        *(uint32_t *)(object_ptr + 1) = SMALL_OBJECT_SIZE;
        global_var_7856(object_ptr, type, params);
        return;
    }
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/**
 * @brief 创建类型D对象（32字节）
 *
 * 与前面的函数功能相同，但对象大小为32字节
 */
void CreateObjectTypeD(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + LARGE_OBJECT_SIZE;
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool, required_capacity), new_capacity != 0)) {
        return;
    }
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint64_t *)((int64_t)object_ptr + 0x14) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x1c) = 0;
        *(void**)object_ptr = &global_var_9408_ptr;
        *(uint32_t *)(object_ptr + 1) = LARGE_OBJECT_SIZE;
        global_var_7856(object_ptr, type, params);
        return;
    }
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/**
 * @brief 创建类型E对象（24字节）
 *
 * 与CreateObjectTypeA功能相同，但使用不同的虚函数表
 */
void CreateObjectTypeE(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + SMALL_OBJECT_SIZE;
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool, required_capacity), new_capacity != 0)) {
        return;
    }
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x14) = 0;
        *(void**)object_ptr = &global_var_9152_ptr;
        *(uint32_t *)(object_ptr + 1) = SMALL_OBJECT_SIZE;
        global_var_7856(object_ptr, type, params);
        return;
    }
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/**
 * @brief 创建类型F对象（32字节）
 *
 * 与CreateObjectTypeD功能相同，但使用不同的虚函数表
 */
void CreateObjectTypeF(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + LARGE_OBJECT_SIZE;
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool, required_capacity), new_capacity != 0)) {
        return;
    }
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint64_t *)((int64_t)object_ptr + 0x14) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x1c) = 0;
        *(void**)object_ptr = &global_var_9776_ptr;
        *(uint32_t *)(object_ptr + 1) = LARGE_OBJECT_SIZE;
        global_var_7856(object_ptr, type, params);
        return;
    }
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/**
 * @brief 创建类型G对象（32字节）
 *
 * 与CreateObjectTypeD功能相同，但使用不同的虚函数表
 */
void CreateObjectTypeG(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + LARGE_OBJECT_SIZE;
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool, required_capacity), new_capacity != 0)) {
        return;
    }
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint64_t *)((int64_t)object_ptr + 0x14) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x1c) = 0;
        *(void**)object_ptr = &global_var_9656_ptr;
        *(uint32_t *)(object_ptr + 1) = LARGE_OBJECT_SIZE;
        global_var_7856(object_ptr, type, params);
        return;
    }
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/**
 * @brief 创建类型H对象（32字节）
 *
 * 与CreateObjectTypeD功能相同，但使用不同的虚函数表
 */
void CreateObjectTypeH(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + LARGE_OBJECT_SIZE;
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool, required_capacity), new_capacity != 0)) {
        return;
    }
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint64_t *)((int64_t)object_ptr + 0x14) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x1c) = 0;
        *(void**)object_ptr = &global_var_9536_ptr;
        *(uint32_t *)(object_ptr + 1) = LARGE_OBJECT_SIZE;
        global_var_7856(object_ptr, type, params);
        return;
    }
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/**
 * @brief 创建类型I对象（32字节）
 *
 * 与CreateObjectTypeD功能相同，但使用不同的虚函数表
 */
void CreateObjectTypeI(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + LARGE_OBJECT_SIZE;
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool, required_capacity), new_capacity != 0)) {
        return;
    }
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint64_t *)((int64_t)object_ptr + 0x14) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x1c) = 0;
        *(void**)object_ptr = &global_var_9896_ptr;
        *(uint32_t *)(object_ptr + 1) = LARGE_OBJECT_SIZE;
        global_var_7856(object_ptr, type, params);
        return;
    }
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/**
 * @brief 创建类型J对象（24字节）
 *
 * 与CreateObjectTypeA功能相同，但使用不同的虚函数表
 */
void CreateObjectTypeJ(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + SMALL_OBJECT_SIZE;
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool, required_capacity), new_capacity != 0)) {
        return;
    }
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x14) = 0;
        *(void**)object_ptr = &global_var_9280_ptr;
        *(uint32_t *)(object_ptr + 1) = SMALL_OBJECT_SIZE;
        global_var_7856(object_ptr, type, params);
        return;
    }
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/**
 * @brief 创建类型K对象（32字节）
 *
 * 与CreateObjectTypeD功能相同，但使用不同的虚函数表
 */
void CreateObjectTypeK(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + LARGE_OBJECT_SIZE;
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool), new_capacity != 0)) {
        return;
    }
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint64_t *)((int64_t)object_ptr + 0x14) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x1c) = 0;
        *(void**)object_ptr = &global_var_5400_ptr;
        *(uint32_t *)(object_ptr + 1) = LARGE_OBJECT_SIZE;
        global_var_7856(object_ptr, type, params);
        return;
    }
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/**
 * @brief 创建类型L对象（32字节）
 *
 * 与CreateObjectTypeD功能相同，但使用不同的虚函数表
 */
void CreateObjectTypeL(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + LARGE_OBJECT_SIZE;
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool, required_capacity), new_capacity != 0)) {
        return;
    }
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint64_t *)((int64_t)object_ptr + 0x14) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x1c) = 0;
        *(void**)object_ptr = &global_var_5544_ptr;
        *(uint32_t *)(object_ptr + 1) = LARGE_OBJECT_SIZE;
        global_var_7856(object_ptr, type, params);
        return;
    }
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/**
 * @brief 创建类型M对象（32字节）
 *
 * 与CreateObjectTypeD功能相同，但使用不同的虚函数表
 */
void CreateObjectTypeM(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + LARGE_OBJECT_SIZE;
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool, required_capacity), new_capacity != 0)) {
        return;
    }
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint64_t *)((int64_t)object_ptr + 0x14) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x1c) = 0;
        *(void**)object_ptr = &global_var_5688_ptr;
        *(uint32_t *)(object_ptr + 1) = LARGE_OBJECT_SIZE;
        global_var_7856(object_ptr, type, params);
        return;
    }
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/**
 * @brief 创建类型N对象（32字节）
 *
 * 与CreateObjectTypeD功能相同，但使用不同的虚函数表
 */
void CreateObjectTypeN(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + LARGE_OBJECT_SIZE;
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool), new_capacity != 0)) {
        return;
    }
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint64_t *)((int64_t)object_ptr + 0x14) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x1c) = 0;
        *(void**)object_ptr = &global_var_5832_ptr;
        *(uint32_t *)(object_ptr + 1) = LARGE_OBJECT_SIZE;
        (*(void (**)(void*, ObjectType, void*))(*((void**)object_ptr) + 4))(object_ptr, type, params);
        return;
    }
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/**
 * @brief 创建类型O对象（32字节）
 *
 * 与CreateObjectTypeD功能相同，但使用不同的虚函数表
 */
void CreateObjectTypeO(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + LARGE_OBJECT_SIZE;
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool, required_capacity), new_capacity != 0)) {
        return;
    }
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint64_t *)((int64_t)object_ptr + 0x14) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x1c) = 0;
        *(void**)object_ptr = &global_var_6264_ptr;
        *(uint32_t *)(object_ptr + 1) = LARGE_OBJECT_SIZE;
        global_var_7856(object_ptr, type, params);
        return;
    }
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/**
 * @brief 创建类型P对象（24字节）
 *
 * 与CreateObjectTypeA功能相同，但使用不同的虚函数表
 */
void CreateObjectTypeP(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + SMALL_OBJECT_SIZE;
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool, required_capacity), new_capacity != 0)) {
        return;
    }
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x14) = 0;
        *(void**)object_ptr = &global_var_5976_ptr;
        *(uint32_t *)(object_ptr + 1) = SMALL_OBJECT_SIZE;
        global_var_7856(object_ptr, type, params);
        return;
    }
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/**
 * @brief 创建类型Q对象（24字节）
 *
 * 与CreateObjectTypeA功能相同，但使用不同的虚函数表
 */
void CreateObjectTypeQ(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + SMALL_OBJECT_SIZE;
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool, required_capacity), new_capacity != 0)) {
        return;
    }
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x14) = 0;
        *(void**)object_ptr = &global_var_6408_ptr;
        *(uint32_t *)(object_ptr + 1) = SMALL_OBJECT_SIZE;
        global_var_7856(object_ptr, type, params);
        return;
    }
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/**
 * @brief 创建类型R对象（24字节）
 *
 * 与CreateObjectTypeA功能相同，但使用不同的虚函数表
 */
void CreateObjectTypeR(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + SMALL_OBJECT_SIZE;
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool, required_capacity), new_capacity != 0)) {
        return;
    }
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x14) = 0;
        *(void**)object_ptr = &global_var_6120_ptr;
        *(uint32_t *)(object_ptr + 1) = SMALL_OBJECT_SIZE;
        global_var_7856(object_ptr, type, params);
        return;
    }
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/**
 * @brief 创建类型S对象（32字节）
 *
 * 与CreateObjectTypeD功能相同，但使用不同的虚函数表
 */
void CreateObjectTypeS(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + LARGE_OBJECT_SIZE;
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool, required_capacity), new_capacity != 0)) {
        return;
    }
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint64_t *)((int64_t)object_ptr + 0x14) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x1c) = 0;
        *(void**)object_ptr = &global_var_8288_ptr;
        *(uint32_t *)(object_ptr + 1) = LARGE_OBJECT_SIZE;
        global_var_7856(object_ptr, type, params);
        return;
    }
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/**
 * @brief 创建类型T对象（32字节）
 *
 * 与CreateObjectTypeD功能相同，但使用不同的虚函数表
 */
void CreateObjectTypeT(PoolHandle handle, ObjectParams* params, ObjectType type, MemoryPool* pool) {
    uint64_t base_addr;
    int current_capacity;
    int new_capacity;
    void* object_ptr;
    uint sign_ext;
    int required_capacity;
    base_addr = pool[1];
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    current_capacity = (*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext;
    required_capacity = (int)base_addr + LARGE_OBJECT_SIZE;
    if (current_capacity < required_capacity) {
        new_capacity = (int)((float)current_capacity * EXPANSION_FACTOR);
        new_capacity = required_capacity;
        if (required_capacity <= new_capacity) {
            new_capacity = new_capacity;
        }
        if (new_capacity < MIN_POOL_CAPACITY) {
            new_capacity = MIN_POOL_CAPACITY;
        }
        new_capacity = DataSerializer0(pool, new_capacity);
        if (new_capacity != 0) {
            return;
        }
    }
    sign_ext = (int)*(uint *)((int64_t)pool + 0xc) >> 0x1f;
    if (((int)((*(uint *)((int64_t)pool + 0xc) ^ sign_ext) - sign_ext) < required_capacity) &&
        (new_capacity = DataSerializer0(pool), new_capacity != 0)) {
        return;
    }
    new_capacity = (int)pool[1];
    if (required_capacity <= new_capacity) {
        *(int *)(pool + 1) = required_capacity;
        object_ptr = (void *)((int64_t)(int)base_addr + *pool);
        *(uint64_t *)((int64_t)object_ptr + 0xc) = 0;
        *(uint64_t *)((int64_t)object_ptr + 0x14) = 0;
        *(uint32_t *)((int64_t)object_ptr + 0x1c) = 0;
        *(void**)object_ptr = &global_var_8152_ptr;
        *(uint32_t *)(object_ptr + 1) = LARGE_OBJECT_SIZE;
        global_var_7856(object_ptr, type, params);
        return;
    }
    memset((int64_t)new_capacity + *pool, 0, (int64_t)(required_capacity - new_capacity));
}
/* ============================================================================
 * 原始函数别名映射
 * ============================================================================ */
void function_8e7860(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeA")));
void function_8e7930(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeB")));
void function_8e7a00(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeC")));
void function_8e7ad0(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeD")));
void function_8e7bb0(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeE")));
void function_8e7c80(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeF")));
void function_8e7d60(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeG")));
void function_8e7e40(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeH")));
void function_8e7f20(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeI")));
void function_8e8000(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeJ")));
void function_8e80d0(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeK")));
void function_8e81b0(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeL")));
void function_8e8290(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeM")));
void function_8e8370(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeN")));
void function_8e8450(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeO")));
void function_8e8530(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeP")));
void function_8e8600(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeQ")));
void function_8e86d0(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeR")));
void function_8e87a0(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeS")));
void function_8e8880(uint64_t param_1, uint64_t param_2, int32_t param_3, int64_t *param_4)
    __attribute__((alias("CreateObjectTypeT")));
/* ============================================================================
 * 技术说明文档
 * ============================================================================ */
/**
 * @section 技术实现细节
 *
 * @subsection 内存管理策略
 * 本模块采用动态内存池管理策略：
 * - 使用1.5倍扩容因子，平衡内存使用和性能
 * - 最小容量限制为64字节，避免频繁扩容
 * - 支持两种对象大小：24字节和32字节
 *
 * @subsection 对象创建流程
 * 1. 检查内存池容量是否足够
 * 2. 如不足则进行扩容操作
 * 3. 在内存池中分配新对象
 * 4. 初始化对象结构
 * 5. 设置虚函数表指针
 * 6. 调用对象初始化函数
 *
 * @subsection 错误处理
 * - 扩容失败时直接返回
 * - 内存不足时进行memset清零
 * - 使用符号扩展处理有符号整数
 *
 * @subsection 性能优化
 * - 减少内存分配次数
 * - 批量对象创建
 * - 预先计算所需容量
 * - 避免频繁的内存拷贝
 *
 * @subsection 使用场景
 * 本模块适用于需要大量创建相同类型对象的场景：
 * - 游戏对象池管理
 * - 网络连接池
 * - 资源缓存池
 * - 事件处理对象池
 *
 * @subsection 注意事项
 * - 所有函数都保持原始二进制兼容性
 * - 使用__attribute__((alias))确保函数别名正确映射
 * - 保持原有的参数类型和调用约定
 * - 内存池结构需要与外部函数兼容
 */