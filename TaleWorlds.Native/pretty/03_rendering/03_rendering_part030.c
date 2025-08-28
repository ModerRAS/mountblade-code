#include "TaleWorlds.Native.Split.h"

// 03_rendering_part030.c - 渲染系统高级对象管理和材质处理模块
// 该模块包含4个核心函数，主要处理渲染对象的创建、管理、材质应用和资源清理

/* 常量定义 */
#define DEFAULT_MATERIAL_HANDLE &system_buffer_ptr
#define DEFAULT_TEXTURE_NAME &UNK_1809fcc28
#define EMPTY_STRING_PTR &UNK_18098bcb0
#define COMPONENT_SYSTEM_NAME &UNK_180a3c3e0
#define MEMORY_BLOCK_SIZE 0x300
#define MEMORY_ALIGNMENT 0x10
#define STRING_BUFFER_SIZE 0x80
#define OBJECT_SLOT_SIZE 0x170
#define MAX_COMPONENT_TYPES 32

/* 渲染对象管理结构体 */
typedef struct {
    longlong***** object_array;          // 对象数组指针
    longlong****** material_table;        // 材质表指针
    longlong******* component_registry;   // 组件注册表指针
    longlong****** texture_cache;        // 纹理缓存指针
    uint object_count;                    // 对象计数
    uint material_count;                   // 材质计数
    uint texture_count;                   // 纹理计数
    uint component_count;                 // 组件计数
} render_object_manager;

/* 材质数据结构 */
typedef struct {
    longlong***** material_id;           // 材质ID
    longlong****** shader_program;        // 着色器程序
    longlong******* texture_slots;        // 纹理槽位
    uint material_flags;                  // 材质标志
    uint render_queue;                    // 渲染队列
    float material_properties[16];       // 材质属性
} material_data;

/* 组件实例结构 */
typedef struct {
    longlong***** component_type;        // 组件类型
    longlong****** component_data;        // 组件数据
    longlong******* parent_object;         // 父对象
    uint component_id;                    // 组件ID
    uint update_flags;                    // 更新标志
    char component_name[64];              // 组件名称
} component_instance;

/* 渲染批次结构 */
typedef struct {
    longlong***** batch_objects;          // 批次对象
    longlong****** batch_materials;        // 批次材质
    uint batch_size;                      // 批次大小
    uint batch_offset;                     // 批次偏移
    ushort batch_flags;                    // 批次标志
} render_batch;

// 函数：渲染对象批量处理和材质应用
// 参数：
//   - render_context: 渲染上下文指针数组
//   - material_system: 材质系统指针数组
// 功能：
//   1. 初始化渲染对象管理器
//   2. 批量处理渲染对象
//   3. 应用材质和纹理
//   4. 管理组件生命周期
//   5. 清理资源内存
void process_render_objects_batch(longlong****** render_context, longlong******* material_system)
{
    longlong***** object_start;
    longlong***** object_end;
    longlong**** material_ptr;
    longlong*** component_ptr;
    uint render_flags;
    longlong******* material_cache;
    longlong object_range;
    longlong******* active_material;
    longlong****** default_material;
    void* texture_source;
    longlong*** component_instance;
    longlong***** current_object;
    longlong** object_data;
    longlong******* temp_material;
    int component_index;
    longlong** temp_object;
    longlong loop_counter;
    ulonglong batch_size;
    longlong* object_slot;
    longlong object_offset;
    int32_t material_property;
    int32_t render_result;
    int32_t temp_result;
    longlong******* stack_material_10;
    longlong******* stack_material_18;
    longlong******* stack_material_20;
    longlong stack_c8;
    longlong******* stack_material_b8;
    int stack_b0;
    longlong******* stack_material_a8;
    longlong** stack_object_a0;
    longlong******* stack_material_98;
    longlong******* stack_material_90;
    longlong******* stack_material_88;
    longlong******* stack_material_80;
    longlong******* stack_material_78;
    longlong******* stack_material_70;
    uint stack_68;
    uint64_t stack_60;
    longlong******* stack_material_58;
    
    // 初始化栈变量
    stack_60 = 0xfffffffffffffffe;
    material_cache = (longlong*******)render_context[6][4];
    default_material = (longlong******)&system_buffer_ptr;
    
    // 获取活动材质
    if (material_cache[3] != (longlong******)0x0) {
        default_material = material_cache[3];
    }
    
    stack_material_10 = material_system;
    stack_material_20 = material_cache;
    
    // 调用材质初始化函数
    (*(code *)render_context[0x10][2])(render_context + 0x10, default_material);
    *(int32_t *)(render_context + 0xd) = *(int32_t *)(material_cache + 1);
    render_result = (*(code *)render_context[0x23][2])(render_context + 0x23);
    *(int32_t *)(render_context[0x79] + 5) = *(int32_t *)(material_cache + 0xe);
    
    // 检查材质状态并更新
    if (((material_cache[6] != (longlong******)0x0) || (material_cache[7] != (longlong******)0x0)) &&
       (object_range = FUN_180255f80(render_context[6]), render_result = temp_result, object_range != 0)) {
        render_result = (*(code *)render_context[0x23][2])(render_context + 0x23);
    }
    
    // 计算对象范围
    object_range = (longlong)render_context[8] - (longlong)render_context[7] >> 4;
    stack_68 = *(uint *)(render_context + 10);
    
    // 分配对象数组内存
    if (object_range == 0) {
        material_cache = (longlong*******)0x0;
    }
    else {
        material_cache = (longlong*******)FUN_18062b420(_DAT_180c8ed18, object_range << 4, stack_68 & 0xff);
        render_result = temp_result;
    }
    
    stack_material_70 = material_cache + object_range * 2;
    object_start = render_context[8];
    object_end = render_context[7];
    temp_material = material_cache;
    stack_material_80 = material_cache;
    stack_material_78 = material_cache;
    
    // 批量处理对象
    for (current_object = object_end; current_object != object_start; current_object = current_object + 2) {
        default_material = (longlong******)*current_object;
        *temp_material = default_material;
        stack_material_10 = temp_material;
        
        if (default_material != (longlong******)0x0) {
            render_result = (*(code *)(*default_material)[5])();
        }
        
        *(int32_t *)((longlong)current_object + (longlong)material_cache + (8 - (longlong)object_end)) =
             *(int32_t *)(current_object + 1);
        temp_material = temp_material + 2;
    }
    
    stack_material_78 = temp_material;
    
    // 处理组件系统
    if ((*(char *)((longlong)render_context + 0x322) != '\0') && (*(char *)render_context[6][0x11][1] == '\0')) {
        component_index = 0;
        batch_size = (longlong)temp_material - (longlong)material_cache >> 4;
        temp_material = material_cache;
        
        if (batch_size != 0) {
            do {
                stack_material_18 = (longlong*******)&stack_material_10;
                stack_material_10 = (longlong*******)*temp_material;
                
                if (stack_material_10 != (longlong*******)0x0) {
                    render_result = (*(code *)(*stack_material_10)[5])();
                }
                
                render_result = FUN_1800b55b0(render_result, &stack_material_10);
                component_index = component_index + 1;
                temp_material = temp_material + 2;
            } while ((ulonglong)(longlong)component_index < batch_size);
        }
    }
    
    // 清理对象资源
    FUN_180284500(render_context + 7);
    *(int32_t *)(render_context + 0xb) = 0;
    object_start = render_context[5];
    
    // 处理对象引用计数
    if ((object_start != (longlong*****)0x0) &&
       (*(short *)(object_start + 0x56) = *(short *)(object_start + 0x56) + 1,
       object_start[0x2d] != (longlong****)0x0)) {
        func_0x0001802eeba0();
    }
    
    // 计算批次范围
    object_range = SUB168(SEXT816(-0x4de9bd37a6f4de9b) *
                 SEXT816((longlong)stack_material_20[9] - (longlong)stack_material_20[8]), 8) +
          ((longlong)stack_material_20[9] - (longlong)stack_material_20[8]);
    object_offset = (longlong)(int)((longlong)temp_material - (longlong)material_cache >> 4);
    object_range = (longlong)((int)((ulonglong)object_range >> 8) - (int)(object_range >> 0x3f));
    
    // 处理每个批次
    if (0 < object_range) {
        stack_c8 = 0;
        temp_material = stack_material_20;
        
        do {
            temp_object = (longlong**)0x0;
            object_slot = (longlong*)((longlong)temp_material[8] + stack_c8);
            
            if ((char)object_slot[0x2a] != '\0') {
                object_data = temp_object;
                temp_material = material_cache;
                object_start = (longlong*****)0xffffffffffffffff;
                
                // 查找匹配的对象
                if (0 < object_offset) {
                    do {
                        if (((*temp_material)[0x17] == (longlong*****)*object_slot) &&
                           (object_start = object_data, (*temp_material)[0x18] == (longlong*****)object_slot[1])) break;
                        object_data = (longlong**)((longlong)object_data + 1);
                        temp_material = temp_material + 2;
                        object_start = (longlong*****)0xffffffffffffffff;
                    } while ((longlong)object_data < object_offset);
                }
                
                stack_material_18 = (longlong*******)0x0;
                
                // 创建新对象或使用现有对象
                if (object_start == (longlong*****)0xffffffffffffffff) {
                    // 创建新对象
                    uint64_t new_object = FUN_18062b1e0(_DAT_180c8ed18, MEMORY_BLOCK_SIZE, MEMORY_ALIGNMENT);
                    temp_material = (longlong*******)FUN_180075030(new_object, 0, 1);
                    
                    if (temp_material != (longlong*******)0x0) {
                        stack_material_a8 = temp_material;
                        (*(code *)(*temp_material)[5])(temp_material);
                    }
                    
                    stack_material_a8 = (longlong*******)0x0;
                    texture_source = &system_buffer_ptr;
                    
                    if ((void*)object_slot[3] != (void*)0x0) {
                        texture_source = (void*)object_slot[3];
                    }
                    
                    stack_material_18 = temp_material;
                    (*(code *)temp_material[2][2])(temp_material + 2, texture_source);
                    
                    // 设置对象属性
                    render_result = *(int32_t *)((longlong)object_slot + 4);
                    object_offset = object_slot[1];
                    material_property = *(int32_t *)((longlong)object_slot + 0xc);
                    *(int *)(temp_material + 0x17) = (int)*object_slot;
                    *(int32_t *)((longlong)temp_material + 0xbc) = render_result;
                    *(int *)(temp_material + 0x18) = (int)object_offset;
                    *(int32_t *)((longlong)temp_material + 0xc4) = material_property;
                    
                    // 处理特殊组件
                    if (*(char *)((longlong)render_context + 0x322) == '\0') {
                        component_index = 0;
                        object_offset = 0;
                        material_ptr = render_context[6][0x16];
                        component_ptr = material_ptr[7];
                        component_instance = component_ptr;
                        
                        if ((longlong)material_ptr[8] - (longlong)component_ptr >> 4 != 0) {
                            do {
                                if (((*component_instance)[0x17] == (longlong*)*object_slot) &&
                                   ((*component_instance)[0x18] == (longlong*)object_slot[1])) {
                                    temp_object = component_ptr[object_offset * 2];
                                    break;
                                }
                                component_index = component_index + 1;
                                object_offset = object_offset + 1;
                                component_instance = component_instance + 2;
                            } while ((ulonglong)(longlong)component_index <
                                     (ulonglong)((longlong)material_ptr[8] - (longlong)component_ptr >> 4));
                        }
                        
                        stack_object_a0 = temp_object;
                        
                        if (temp_object != (longlong**)0x0) {
                            (*(code *)(*temp_object)[5])(temp_object);
                        }
                        
                        FUN_180075990(temp_material, &stack_object_a0);
                        
                        if (temp_object != (longlong**)0x0) {
                            (*(code *)(*temp_object)[7])(temp_object);
                        }
                    }
                }
                else {
                    // 使用现有对象
                    temp_material = (longlong*******)material_cache[(longlong)object_start * 2];
                    
                    if (temp_material != (longlong*******)0x0) {
                        stack_material_98 = temp_material;
                        (*(code *)(*temp_material)[5])(temp_material);
                    }
                    
                    stack_material_98 = (longlong*******)0x0;
                    stack_material_18 = temp_material;
                    FUN_180079520(temp_material);
                }
                
                // 设置对象关系
                temp_material[0x15] = (longlong******)render_context[6];
                object_offset = _DAT_180c86930;
                
                // 处理材质系统更新
                if ((*(char *)((longlong)render_context + 0x322) != '\0') && (*(char *)render_context[6][0x11][1] == '\0')) {
                    component_index = (*(code *)(*temp_material)[0xc])(temp_material);
                    *(int8_t *)((longlong)temp_material + 0xb2) = 1;
                    FUN_1802abe00((longlong)component_index * 0x98 + object_offset + 8, temp_material);
                }
                
                // 应用材质属性
                FUN_18007bbb0(temp_material, 0, object_slot);
                stack_material_58 = (longlong*******)&stack_material_10;
                stack_material_10 = temp_material;
                (*(code *)(*temp_material)[5])(temp_material);
                
                active_material = stack_material_10;
                stack_material_88 = (longlong*******)&stack_material_10;
                object_offset = object_slot[0x2d];
                stack_material_b8 = (longlong*******)0x0;
                stack_material_90 = stack_material_10;
                
                if (stack_material_10 != (longlong*******)0x0) {
                    (*(code *)(*stack_material_10)[5])(stack_material_10);
                }
                
                stack_material_90 = (longlong*******)0x0;
                stack_material_b8 = active_material;
                stack_b0 = 1 << ((byte)(int)object_offset & 0x1f);
                FUN_1802842e0(render_context + 7, &stack_material_b8);
                
                // 更新对象状态
                stack_material_10[0x39] = render_context;
                component_index = (int)object_offset + 1;
                
                if (*(int *)(render_context + 0xb) < component_index) {
                    *(int *)(render_context + 0xb) = component_index;
                }
                
                // 清理临时对象
                if (stack_material_b8 != (longlong*******)0x0) {
                    (*(code *)(*stack_material_b8)[7])();
                }
                
                if (stack_material_10 != (longlong*******)0x0) {
                    (*(code *)(*stack_material_10)[7])();
                }
                
                (*(code *)(*temp_material)[7])(temp_material);
                temp_material = stack_material_20;
            }
            
            stack_c8 = stack_c8 + OBJECT_SLOT_SIZE;
            object_range = object_range + -1;
        } while (object_range != 0);
    }
    
    // 最终清理阶段
    object_range = 0;
    component_index = (int)((longlong)render_context[8] - (longlong)render_context[7] >> 4);
    object_offset = (longlong)component_index;
    
    if (0 < component_index) {
        stack_material_20 = (longlong*******)&stack_material_10;
        
        do {
            stack_material_88 = (longlong*******)&stack_material_10;
            stack_material_10 = (longlong*******)0x0;
            stack_material_18 = *(longlong********)(*(longlong*)(object_range + (longlong)render_context[7]) + 0x118);
            *(uint64_t*)(*(longlong*)(object_range + (longlong)render_context[7]) + 0x118) = 0;
            
            if (stack_material_18 != (longlong*******)0x0) {
                (*(code *)(*stack_material_18)[7])();
            }
            
            if (stack_material_10 != (longlong*******)0x0) {
                (*(code *)(*stack_material_10)[7])();
            }
            
            *(int8_t*)(*(longlong*)(object_range + (longlong)render_context[7]) + 0x2e9) = 0;
            *(int8_t*)(*(longlong*)(object_range + (longlong)render_context[7]) + 0x2f9) = 0;
            object_range = object_range + 0x10;
            object_offset = object_offset + -1;
        } while (object_offset != 0);
    }
    
    // 更新渲染计数器
    *(int *)(render_context[0x79] + 2) = *(int *)(render_context[0x79] + 2) + 1;
    FUN_180278270(render_context);
    temp_material = material_cache;
    
    // 处理特殊渲染路径
    if ((*render_context)[0x2c] == (longlong****)&UNK_180277350) {
        FUN_180276f30(render_context, (longlong)render_context + 0x214, 0);
    }
    else {
        (*(code *)(*render_context)[0x2c])(render_context);
    }
    
    // 清理材质缓存
    for (; stack_material_10 = temp_material, temp_material != active_material;
         temp_material = temp_material + 2) {
        if (*temp_material != (longlong******)0x0) {
            (*(code *)(**temp_material)[7])();
        }
    }
    
    if (material_cache == (longlong*******)0x0) {
        return;
    }
    
    // 释放材质缓存内存
    FUN_18064e900(material_cache);
}

// 函数：从渲染系统中移除指定对象
// 参数：
//   - render_manager: 渲染管理器指针
//   - target_object: 要移除的目标对象
// 返回值：
//   - 成功返回1，失败返回0
uint64_t remove_render_object(longlong* render_manager, longlong target_object)
{
    longlong current_object;
    ulonglong object_count;
    longlong* object_array;
    int object_index;
    
    object_array = (longlong*)render_manager[7];
    object_index = 0;
    object_count = render_manager[8] - (longlong)object_array >> 4;
    
    if (object_count != 0) {
        do {
            if (*object_array == target_object) {
                *(uint64_t*)(target_object + 0x1c8) = 0;
                FUN_180284450(render_manager + 7, (longlong)object_index * 0x10 + render_manager[7]);
                
                // 处理渲染回调
                if (*(code**)(*render_manager + 0x160) == (code*)&UNK_180277350) {
                    FUN_180276f30(render_manager, (longlong)render_manager + 0x214, 0);
                }
                else {
                    (**(code**)(*render_manager + 0x160))(render_manager);
                }
                
                // 更新引用计数
                current_object = render_manager[5];
                if (current_object != 0) {
                    *(short*)(current_object + 0x2b0) = *(short*)(current_object + 0x2b0) + 1;
                    if (*(longlong*)(current_object + 0x168) != 0) {
                        func_0x0001802eeba0();
                    }
                }
                
                return 1;
            }
            
            object_index = object_index + 1;
            object_array = object_array + 2;
        } while ((ulonglong)(longlong)object_index < object_count);
    }
    
    return 0;
}

// 函数：更新材质系统状态
// 参数：
//   - material_system: 材质系统句柄
//   - texture_data: 纹理数据指针
// 功能：
//   - 更新材质系统内部状态
//   - 处理纹理数据变更
//   - 管理材质生命周期
void update_material_system_status(longlong material_system, longlong* texture_data)
{
    longlong system_handle;
    longlong* texture_ptr;
    void* texture_source;
    int32_t texture_flags;
    uint material_state;
    void* material_name;
    int8_t name_buffer[32];
    uint name_length;
    longlong* texture_handle;
    longlong** texture_ref;
    uint64_t stack_guard;
    longlong* stack_texture;
    void* stack_name;
    longlong** stack_ref;
    int32_t stack_flags;
    uint8_t stack_data[136];
    void* stack_source;
    void* stack_buffer;
    int32_t stack_format;
    uint8_t stack_cache[136];
    ulonglong security_cookie;
    
    // 初始化栈保护
    stack_guard = 0xfffffffffffffffe;
    security_cookie = _DAT_180bf00a8 ^ (ulonglong)name_buffer;
    name_length = 0;
    system_handle = *(longlong*)(material_system + 0x3c8);
    texture_ref = &texture_handle;
    texture_handle = (longlong*)*texture_data;
    texture_ptr = texture_data;
    
    // 处理纹理引用
    if (texture_handle != (longlong*)0x0) {
        (**(code**)(*texture_handle + 0x28))();
    }
    
    texture_ptr = texture_handle;
    texture_ref = &texture_handle;
    
    // 更新纹理引用链
    if (*(longlong**)(system_handle + 0x18) != texture_handle) {
        texture_ref = (longlong**)texture_handle;
        
        if (texture_handle != (longlong*)0x0) {
            (**(code**)(*texture_handle + 0x28))(texture_handle);
        }
        
        texture_ref = *(longlong***)(system_handle + 0x18);
        *(longlong**)(system_handle + 0x18) = texture_ptr;
        
        if (texture_ref != (longlong**)0x0) {
            (*(code *)(*texture_ref)[7])();
        }
        
        *(int*)(system_handle + 0x10) = *(int*)(system_handle + 0x10) + 1;
    }
    
    // 处理纹理数据
    if (texture_handle != (longlong*)0x0) {
        (**(code**)(*texture_handle + 0x38))();
    }
    
    system_handle = *texture_data;
    
    // 处理默认纹理
    if (system_handle == 0) {
        stack_name = &UNK_1809fcc28;
        material_name = stack_data;
        stack_data[0] = 0;
        stack_flags = 0;
        strcpy_s(stack_data, STRING_BUFFER_SIZE, &system_buffer_ptr);
        material_state = 2;
        name_length = 2;
        texture_source = material_name;
        texture_flags = stack_flags;
    }
    else {
        stack_source = &UNK_1809fcc28;
        material_name = stack_cache;
        stack_cache[0] = 0;
        stack_format = *(int32_t*)(system_handle + 0x48);
        texture_source = &system_buffer_ptr;
        
        if (*(void**)(system_handle + 0x40) != (void*)0x0) {
            texture_source = *(void**)(system_handle + 0x40);
        }
        
        strcpy_s(stack_cache, STRING_BUFFER_SIZE, texture_source);
        material_state = 1;
        name_length = 1;
        texture_source = stack_source;
        texture_flags = stack_format;
    }
    
    // 更新材质系统状态
    *(int32_t*)(material_system + 0x90) = texture_flags;
    material_name = &system_buffer_ptr;
    
    if (texture_source != (void*)0x0) {
        material_name = texture_source;
    }
    
    strcpy_s(*(uint64_t*)(material_system + 0x88), STRING_BUFFER_SIZE, material_name);
    
    // 处理材质状态标志
    if ((material_state & 2) != 0) {
        name_length = material_state & 0xfffffffd;
        stack_name = &UNK_18098bcb0;
        material_state = name_length;
    }
    
    if ((material_state & 1) != 0) {
        name_length = material_state & 0xfffffffe;
        stack_source = &UNK_18098bcb0;
    }
    
    // 清理纹理数据
    if ((longlong*)*texture_data != (longlong*)0x0) {
        (**(code**)(*(longlong*)*texture_data + 0x38))();
    }
    
    // 调用材质系统更新函数
    FUN_1808fc050(security_cookie ^ (ulonglong)name_buffer);
}

// 函数：处理材质系统批量更新
// 参数：
//   - material_system: 材质系统句柄
//   - texture_data: 纹理数据指针数组
//   - update_flags: 更新标志
//   - render_params: 渲染参数
// 功能：
//   - 批量更新材质属性
//   - 处理纹理数据变更
//   - 管理材质系统状态
void process_material_batch_update(longlong material_system, longlong* texture_data, uint64_t update_flags, uint64_t render_params)
{
    longlong system_handle;
    code* update_callback;
    longlong* texture_ptr;
    void** texture_source_ptr;
    void* texture_source;
    bool is_default_texture;
    longlong* stack_texture;
    longlong* stack_data;
    longlong** stack_ref;
    longlong** stack_ptr;
    int32_t texture_format;
    uint64_t stack_guard;
    void* stack_source;
    longlong stack_offset;
    int32_t stack_flags;
    ulonglong stack_size;
    void* stack_buffer;
    longlong stack_value;
    int32_t stack_param;
    
    // 初始化栈保护
    stack_guard = 0xfffffffffffffffe;
    system_handle = *(longlong*)(material_system + 0x3c8);
    stack_ref = &stack_texture;
    stack_texture = (longlong*)*texture_data;
    stack_data = texture_data;
    
    // 处理纹理引用
    if (stack_texture != (longlong*)0x0) {
        (**(code**)(*stack_texture + 0x28))();
    }
    
    texture_ptr = stack_texture;
    stack_ptr = &stack_texture;
    
    // 更新纹理引用链
    if (*(longlong**)(system_handle + 0x20) != stack_texture) {
        stack_ref = (longlong**)stack_texture;
        
        if (stack_texture != (longlong*)0x0) {
            (**(code**)(*stack_texture + 0x28))(stack_texture);
        }
        
        stack_ref = *(longlong***)(system_handle + 0x20);
        *(longlong**)(system_handle + 0x20) = texture_ptr;
        
        if (stack_ref != (longlong**)0x0) {
            (*(code *)(*stack_ref)[7])();
        }
        
        *(int*)(system_handle + 0x10) = *(int*)(system_handle + 0x10) + 1;
    }
    
    // 处理纹理数据
    if (stack_texture != (longlong*)0x0) {
        (**(code**)(*stack_texture + 0x38))();
    }
    
    is_default_texture = *texture_data == 0;
    
    // 处理默认纹理或自定义纹理
    if (is_default_texture) {
        stack_source = &UNK_180a3c3e0;
        stack_size = 0;
        stack_offset = 0;
        stack_flags = 0;
        texture_source_ptr = &stack_source;
        texture_format = 2;
    }
    else {
        texture_source_ptr = (void**)FUN_180627ae0(&stack_buffer, *texture_data + 0x1f0);
        texture_format = 1;
    }
    
    // 调用材质更新回调
    system_handle = stack_offset;
    update_callback = *(code**)(*(longlong*)(material_system + 0x118) + 0x10);
    texture_source = &system_buffer_ptr;
    
    if (texture_source_ptr[1] != (void*)0x0) {
        texture_source = texture_source_ptr[1];
    }
    
    (*update_callback)((longlong*)(material_system + 0x118), texture_source, update_callback, render_params, texture_format, stack_guard);
    
    // 清理默认纹理资源
    if (is_default_texture) {
        stack_source = &UNK_180a3c3e0;
        
        if (system_handle != 0) {
            FUN_18064e900(system_handle);
        }
        
        stack_offset = 0;
        stack_size = stack_size & 0xffffffff00000000;
        stack_source = &UNK_18098bcb0;
    }
    
    // 清理自定义纹理资源
    if (!is_default_texture) {
        stack_buffer = &UNK_180a3c3e0;
        
        if (stack_value != 0) {
            FUN_18064e900();
        }
        
        stack_value = 0;
        stack_param = 0;
        stack_buffer = &UNK_18098bcb0;
    }
    
    // 最终清理
    if ((longlong*)*texture_data != (longlong*)0x0) {
        (**(code**)(*(longlong*)*texture_data + 0x38))();
    }
    
    return;
}

// 函数：初始化材质系统组件
// 参数：
//   - component_handle: 组件句柄
//   - param_array: 参数数组
//   - init_flags: 初始化标志
//   - system_config: 系统配置
// 返回值：
//   - 返回初始化后的组件句柄
uint64_t* initialize_material_system_component(uint64_t component_handle, uint64_t* param_array, uint64_t init_flags, uint64_t system_config)
{
    uint64_t* component_ptr;
    
    // 初始化组件参数
    *param_array = &UNK_18098bcb0;
    param_array[1] = 0;
    *(int32_t*)(param_array + 2) = 0;
    *param_array = &UNK_180a3c3e0;
    param_array[3] = 0;
    param_array[1] = 0;
    *(int32_t*)(param_array + 2) = 0;
    
    // 调用组件初始化函数
    FUN_1806277c0(param_array, 0x13, init_flags, system_config, 0, 0xfffffffffffffffe);
    
    component_ptr = (uint64_t*)param_array[1];
    
    // 设置组件名称和属性
    *component_ptr = 0x73656d5f6174656d;  // "metam_se"
    component_ptr[1] = 0x6e6f706d6f635f68;  // "h_compon"
    *(int32_t*)(component_ptr + 2) = 0x746e65;  // "ent"
    *(int32_t*)(param_array + 2) = 0x13;
    
    return param_array;
}

// 函数：处理渲染系统组件更新
// 参数：
//   - render_system: 渲染系统句柄
//   - component_data: 组件数据
// 功能：
//   - 更新渲染系统组件状态
//   - 处理组件数据变更
//   - 管理组件生命周期
void process_render_system_component_update(longlong render_system, longlong component_data)
{
    char data_flag;
    uint data_size;
    uint64_t* data_ptr;
    uint64_t data_value;
    longlong system_handle;
    longlong* component_ptr;
    longlong component_offset;
    uint64_t temp_value;
    char* string_ptr;
    char* string_end;
    uint* size_ptr;
    int32_t* data_buffer;
    ulonglong buffer_size;
    ulonglong processed_size;
    longlong* stack_component;
    longlong* stack_data;
    void* stack_source;
    longlong stack_offset;
    uint stack_size;
    uint64_t stack_guard;
    void* stack_buffer;
    longlong stack_value;
    int32_t stack_format;
    ulonglong stack_capacity;
    uint64_t stack_params[2];
    int32_t stack_flags;
    ulonglong stack_count;
    uint64_t stack_block;
    
    // 初始化栈保护
    stack_block = 0xfffffffffffffffe;
    stack_source = &UNK_180a3c3e0;
    stack_guard = 0;
    stack_offset = 0;
    stack_size = 0;
    data_size = **(uint**)(component_data + 8);
    size_ptr = *(uint**)(component_data + 8) + 1;
    *(uint**)(component_data + 8) = size_ptr;
    
    // 处理数据块
    if (data_size != 0) {
        FUN_180628f30(&stack_source, size_ptr, data_size);
        *(longlong*)(component_data + 8) = *(longlong*)(component_data + 8) + (ulonglong)data_size;
    }
    
    // 处理系统数据
    system_handle = FUN_1800b6de0(_DAT_180c86930, &stack_source, 1);
    data_size = stack_size;
    
    if (system_handle == 0) {
        buffer_size = (ulonglong)stack_size;
        
        if (stack_offset != 0) {
            FUN_1806277c0(render_system + 0x1f0, buffer_size);
        }
        
        if (data_size != 0) {
            memcpy(*(uint64_t*)(render_system + 0x1f8), stack_offset, buffer_size);
        }
        
        *(int32_t*)(render_system + 0x200) = 0;
        
        if (*(longlong*)(render_system + 0x1f8) != 0) {
            *(int8_t*)(buffer_size + *(longlong*)(render_system + 0x1f8)) = 0;
        }
        
        *(int32_t*)(render_system + 0x20c) = stack_guard._4_4_;
    }
    else {
        FUN_180275a60(system_handle, render_system, 1);
    }
    
    // 处理材质数据
    buffer_size = 0;
    *(int32_t*)(render_system + 0x324) = **(int32_t**)(component_data + 8);
    *(longlong*)(component_data + 8) = *(longlong*)(component_data + 8) + 4;
    data_buffer = (int32_t*)((longlong)&stack_params + 4);
    processed_size = 4;
    string_end = *(char**)(component_data + 8);
    
    // 复制材质数据
    do {
        string_ptr = string_end;
        data_buffer[-1] = *(int32_t*)string_ptr;
        *data_buffer = *(int32_t*)(string_ptr + 4);
        data_buffer[1] = *(int32_t*)(string_ptr + 8);
        data_buffer[2] = *(int32_t*)(string_ptr + 0xc);
        string_end = string_ptr + 0x10;
        data_buffer = data_buffer + 4;
        processed_size = processed_size - 1;
    } while (processed_size != 0);
    
    *(char**)(component_data + 8) = string_end;
    data_flag = *string_end;
    size_ptr = (uint*)(string_ptr + 0x11);
    *(uint**)(component_data + 8) = size_ptr;
    
    // 处理字符串数据
    if (data_flag != '\0') {
        stack_buffer = &UNK_180a3c3e0;
        stack_value = 0;
        stack_format = 0;
        data_size = *size_ptr;
        *(char**)(component_data + 8) = string_ptr + 0x15;
        stack_capacity = processed_size;
        
        if (data_size != 0) {
            FUN_180628f30(&stack_buffer, string_ptr + 0x15, data_size);
            *(longlong*)(component_data + 8) = *(longlong*)(component_data + 8) + (ulonglong)data_size;
        }
        
        component_ptr = (longlong*)FUN_1800b30d0(_DAT_180c86930, &stack_data, &stack_buffer, 1);
        component_ptr = (longlong*)*component_ptr;
        
        if (component_ptr != (longlong*)0x0) {
            stack_component = component_ptr;
            (**(code**)(*component_ptr + 0x28))(component_ptr);
        }
        
        stack_component = *(longlong**)(render_system + 0x3b8);
        *(longlong**)(render_system + 0x3b8) = component_ptr;
        
        if (stack_component != (longlong*)0x0) {
            (**(code**)(*stack_component + 0x38))();
        }
        
        if (stack_data != (longlong*)0x0) {
            (**(code**)(*stack_data + 0x38))();
        }
        
        stack_buffer = &UNK_180a3c3e0;
        
        if (stack_value != 0) {
            FUN_18064e900();
        }
        
        stack_value = 0;
        stack_capacity = stack_capacity & 0xffffffff00000000;
        stack_buffer = &UNK_18098bcb0;
        size_ptr = *(uint**)(component_data + 8);
    }
    
    // 处理组件数据
    data_size = *size_ptr;
    system_handle = (longlong)(int)data_size;
    *(uint**)(component_data + 8) = size_ptr + 1;
    processed_size = buffer_size;
    
    // 处理组件数组
    if (0 < (int)data_size) {
        do {
            if ((ulonglong)(longlong)(int)buffer_size <
                (ulonglong)(*(longlong*)(render_system + 0x40) - *(longlong*)(render_system + 0x38) >> 4)) {
                component_offset = *(longlong*)(*(longlong*)(render_system + 0x38) + processed_size);
            }
            else {
                temp_value = FUN_18062b1e0(_DAT_180c8ed18, MEMORY_BLOCK_SIZE, MEMORY_ALIGNMENT, 9);
                component_offset = FUN_180075030(temp_value, 0, 1);
            }
            
            stack_params[0] = &UNK_180a3c3e0;
            stack_count = 0;
            stack_params[1] = 0;
            stack_flags = 0;
            data_size = **(uint**)(component_data + 8);
            size_ptr = *(uint**)(component_data + 8) + 1;
            *(uint**)(component_data + 8) = size_ptr;
            
            if (data_size != 0) {
                FUN_180628f30(&stack_params[0], size_ptr, data_size);
                *(longlong*)(component_data + 8) = *(longlong*)(component_data + 8) + (ulonglong)data_size;
            }
            
            stack_buffer = &UNK_180a3c3e0;
            stack_capacity = 0;
            stack_value = 0;
            stack_format = 0;
            data_size = **(uint**)(component_data + 8);
            size_ptr = *(uint**)(component_data + 8) + 1;
            *(uint**)(component_data + 8) = size_ptr;
            
            if (data_size != 0) {
                FUN_180628f30(&stack_buffer, size_ptr, data_size);
                *(longlong*)(component_data + 8) = *(longlong*)(component_data + 8) + (ulonglong)data_size;
            }
            
            temp_value = FUN_1800b30d0(_DAT_180c86930, &stack_data, &stack_buffer, 1);
            FUN_180076910(component_offset, temp_value);
            
            if (stack_data != (longlong*)0x0) {
                (**(code**)(*stack_data + 0x38))();
            }
            
            data_ptr = *(uint64_t**)(component_data + 8);
            temp_value = *data_ptr;
            data_value = data_ptr[1];
            *(uint64_t**)(component_data + 8) = data_ptr + 2;
            *(uint64_t*)(component_offset + 0x238) = temp_value;
            *(uint64_t*)(component_offset + 0x240) = data_value;
            
            data_ptr = *(uint64_t**)(component_data + 8);
            temp_value = *data_ptr;
            data_value = data_ptr[1];
            *(uint64_t**)(component_data + 8) = data_ptr + 2;
            *(uint64_t*)(component_offset + 0x238) = temp_value;
            *(uint64_t*)(component_offset + 0x240) = data_value;
            
            data_ptr = *(uint64_t**)(component_data + 8);
            temp_value = *data_ptr;
            data_value = data_ptr[1];
            *(uint64_t**)(component_data + 8) = data_ptr + 2;
            *(uint64_t*)(component_offset + 0x2a8) = temp_value;
            *(uint64_t*)(component_offset + 0x2b0) = data_value;
            
            data_ptr = *(uint64_t**)(component_data + 8);
            temp_value = *data_ptr;
            data_value = data_ptr[1];
            *(uint64_t**)(component_data + 8) = data_ptr + 2;
            *(uint64_t*)(component_offset + 0x2b8) = temp_value;
            *(uint64_t*)(component_offset + 0x2c0) = data_value;
            
            data_buffer = *(int32_t**)(component_data + 8);
            *(int32_t*)(*(longlong*)(component_offset + 0x268) + 0x10) = *data_buffer;
            *(int32_t**)(component_data + 8) = data_buffer + 1;
            component_ptr = (longlong*)(*(longlong*)(component_offset + 0x268) + 0x20);
            data_size = data_buffer[1];
            data_buffer = data_buffer + 2;
            *(int32_t**)(component_data + 8) = data_buffer;
            
            if (data_size != 0) {
                (**(code**)(*component_ptr + 0x18))(component_ptr, data_buffer, data_size);
                *(longlong*)(component_data + 8) = *(longlong*)(component_data + 8) + (ulonglong)data_size;
                data_buffer = *(int32_t**)(component_data + 8);
            }
            
            *(int32_t*)(*(longlong*)(component_offset + 0x268) + 0x44) = *data_buffer;
            *(int32_t**)(component_data + 8) = data_buffer + 1;
            *(int32_t*)(*(longlong*)(component_offset + 0x268) + 0x48) = data_buffer[1];
            *(int32_t**)(component_data + 8) = data_buffer + 2;
            *(int32_t*)(*(longlong*)(component_offset + 0x268) + 0x4c) = data_buffer[2];
            *(int32_t**)(component_data + 8) = data_buffer + 3;
            *(int32_t*)(*(longlong*)(component_offset + 0x268) + 0x54) = data_buffer[3];
            *(int32_t**)(component_data + 8) = data_buffer + 4;
            *(int32_t*)(*(longlong*)(component_offset + 0x268) + 0x58) = data_buffer[4];
            *(int32_t**)(component_data + 8) = data_buffer + 5;
            *(int32_t*)(*(longlong*)(component_offset + 0x268) + 0x5c) = data_buffer[5];
            *(int32_t**)(component_data + 8) = data_buffer + 6;
            *(int32_t*)(*(longlong*)(component_offset + 0x268) + 0x60) = data_buffer[6];
            *(int32_t**)(component_data + 8) = data_buffer + 7;
            *(int32_t*)(*(longlong*)(component_offset + 0x268) + 100) = data_buffer[7];
            *(int32_t**)(component_data + 8) = data_buffer + 8;
            *(int32_t*)(*(longlong*)(component_offset + 0x268) + 0x68) = data_buffer[8];
            *(int32_t**)(component_data + 8) = data_buffer + 9;
            *(int32_t*)(*(longlong*)(component_offset + 0x268) + 0x6c) = data_buffer[9];
            *(int32_t**)(component_data + 8) = data_buffer + 10;
            
            stack_buffer = &UNK_180a3c3e0;
            
            if (stack_value != 0) {
                FUN_18064e900();
            }
            
            stack_value = 0;
            stack_capacity = stack_capacity & 0xffffffff00000000;
            stack_buffer = &UNK_18098bcb0;
            stack_params[0] = &UNK_180a3c3e0;
            
            if (stack_params[1] != 0) {
                FUN_18064e900();
            }
            
            stack_params[1] = 0;
            stack_count = stack_count & 0xffffffff00000000;
            stack_params[0] = &UNK_18098bcb0;
            buffer_size = (ulonglong)((int)buffer_size + 1);
            system_handle = system_handle + -1;
            processed_size = processed_size + 0x10;
        } while (system_handle != 0);
    }
    
    // 最终清理
    stack_source = &UNK_180a3c3e0;
    
    if (stack_offset == 0) {
        return;
    }
    
    FUN_18064e900();
}