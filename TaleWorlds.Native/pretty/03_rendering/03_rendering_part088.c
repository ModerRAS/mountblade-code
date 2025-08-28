#include "TaleWorlds.Native.Split.h"

/**
 * 03_rendering_part088.c - 渲染系统高级状态管理和渲染管线控制模块
 * 
 * 本文件包含6个核心函数，涵盖渲染系统高级状态管理、渲染管线控制、资源管理、
 * 参数处理、状态转换和对象销毁等高级渲染功能。主要功能包括：
 * 
 * 1. 渲染系统状态管理器 - 处理渲染状态转换和管线控制
 * 2. 渲染资源复制器 - 复制和管理渲染资源对象
 * 3. 渲染管线设置器 - 设置渲染管线参数和状态
 * 4. 渲染系统重置器 - 重置渲染系统状态
 * 5. 渲染参数设置器 - 设置渲染参数和变换数据
 * 6. 渲染对象销毁器 - 销毁渲染对象并释放资源
 * 
 * 作者: Claude Code
 * 完成时间: 2025-08-28
 */

// 常量定义
#define RENDER_STATE_MASK 0xFFFFFFFF
#define RENDER_STATE_INITIAL 0x18
#define RENDER_STATE_READY 0x0
#define RENDER_STATE_PROCESSING 0x1
#define RENDER_STATE_ACTIVE 0x3
#define RENDER_STATE_CONFIGURED 0x5
#define RENDER_STATE_INITIALIZED 0x6
#define RENDER_STATE_ENABLED 0x7
#define RENDER_STATE_RUNNING 0x9
#define RENDER_STATE_PAUSED 0xB
#define RENDER_STATE_CLOSING 0xC
#define RENDER_STATE_TERMINATING 0xD
#define RENDER_STATE_FINALIZING 0xF
#define RENDER_STATE_RESETTING 0x11
#define RENDER_STATE_FLUSHING 0x12
#define RENDER_STATE_CLEANUP 0x13
#define RENDER_STATE_DISPOSING 0x14
#define RENDER_STATE_DISPOSED 0x15
#define RENDER_STATE_COMPLETE 0x17

#define MAX_RENDER_OBJECTS 6
#define MAX_RENDER_BUFFERS 128
#define RENDER_BUFFER_SIZE 0x100
#define RENDER_QUEUE_SIZE 100

// 全局变量引用
extern int64_t *g_render_context_manager;
extern int64_t *g_render_resource_pool;
extern char g_render_debug_mode;
extern int64_t *g_render_state_table;
extern char *g_render_shader_library;
extern char *g_render_texture_library;
extern char *g_render_material_library;

// 函数别名定义
#define rendering_system_state_manager FUN_18031a6c0
#define rendering_system_resource_copier FUN_18031b630
#define rendering_system_pipeline_setter FUN_18031b790
#define rendering_system_state_resetter FUN_18031b8e0
#define rendering_system_parameter_setter FUN_18031b950
#define rendering_system_object_destroyer FUN_18031ba60
#define rendering_system_resource_destroyer FUN_18031bb70

// 内部函数声明
void rendering_system_initialize_render_context(void *context);
void rendering_system_process_render_pipeline(void *pipeline);
void rendering_system_cleanup_render_resources(void *resources);
void rendering_system_update_render_state(void *state);
void rendering_system_execute_render_command(void *command);

/**
 * 渲染系统状态管理器
 * 
 * 处理渲染系统的复杂状态转换逻辑，包括初始化、配置、运行、暂停、
 * 终止等各种状态之间的转换。该函数是渲染系统的核心状态控制器。
 * 
 * @param render_context 渲染上下文指针
 * @param render_data 渲染数据指针
 * @param force_reset 是否强制重置标志
 */
void rendering_system_state_manager(void *render_context, int64_t render_data, char force_reset)
{
    int *state_counter;
    unsigned int render_flags;
    int64_t context_data;
    int64_t resource_manager;
    int64_t pipeline_state;
    int64_t *render_objects[MAX_RENDER_OBJECTS];
    void *render_buffers[MAX_RENDER_BUFFERS];
    char buffer_data[MAX_RENDER_BUFFERS];
    int current_state;
    int64_t temp_pointer;
    void **resource_pointers[6];
    int64_t *state_data[6];
    void *buffer_pointers[6];
    int buffer_sizes[6];
    char temp_buffer[MAX_RENDER_BUFFERS];
    unsigned long long security_cookie;
    
    // 初始化安全cookie
    security_cookie = 0xFFFFFFFFFFFFFFFEULL;
    security_cookie ^= *(unsigned long long *)buffer_data;
    
    // 检查渲染上下文有效性
    if (*((int64_t *)render_context + 8) != 0) {
        rendering_system_resource_copier((void *)(render_data + 0x180), (void *)render_context + 2);
        *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_INITIAL;
    }
    
    // 获取渲染上下文数据
    context_data = *((int64_t *)render_context + 0x1f);
    
    // 检查渲染状态标志
    if ((*(char *)(*((int64_t *)(context_data + 0x38)) + 0x331d) != '\0') &&
        (*((int *)((int64_t)render_context + 0x4c)) != RENDER_STATE_INITIAL)) {
        rendering_system_state_resetter((int64_t)render_context);
        context_data = *((int64_t *)render_context + 0x1f);
    }
    
    // 获取资源管理器
    resource_manager = g_render_context_manager;
    pipeline_state = *((int64_t *)(context_data + 0x38));
    
    // 检查管线状态
    if (*(char *)(pipeline_state + 0x2830) == '\0') {
        current_state = *((int *)((int64_t)render_context + 0x4c));
        
        if (current_state == RENDER_STATE_INITIAL) {
            // 处理初始状态
            if ((((render_context[8] == 0) && 
                  (*((int *)((void *)render_context + 0x26)) != *((int *)(pipeline_state + 0x3358)))) &&
                 (*(char *)(context_data + 0x50) != '\0')) && 
                (*(char *)(pipeline_state + 0x331d) == '\0')) {
                *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_READY;
            } else {
                context_data = *((int64_t *)render_context + 0x20);
                if (context_data != 0) {
                    if (*(char *)(pipeline_state + 0x331d) == '\0') {
                        if (*((int *)(context_data + 0x3a8)) != 
                            *((int *)(g_render_context_manager + 0x1500))) {
                            *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_READY;
                            *((unsigned int *)(context_data + 0x3a8)) = 
                                *((unsigned int *)(resource_manager + 0x1500));
                        }
                    } else {
                        *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_READY;
                        resource_pointers[0] = (void **)*((int64_t *)render_context + 0x20);
                        *((int64_t *)render_context + 0x20) = 0;
                        if (resource_pointers[0] != (void **)0x0) {
                            ((void (*)(void))(*resource_pointers[0])[7])();
                        }
                    }
                }
            }
        } else if (current_state == RENDER_STATE_READY) {
            // 初始化渲染对象数组
            render_objects[0] = 0;
            render_objects[1] = 0;
            render_objects[2] = 0;
            buffer_sizes[0] = 3;
            render_flags = 0;
            render_flags |= 0xFFFFFFFF;
            force_reset = 0;
            render_flags &= 0xFFFFFFFE;
            render_flags |= 1;
            render_objects[3] = 0;
            resource_pointers[0] = (void **)&render_objects[4];
            render_objects[4] = (int64_t *)0x0;
            render_objects[5] = 0;
            render_objects[6] = 0;
            buffer_sizes[1] = 3;
            render_objects[7] = 0;
            render_flags |= 0x100;
            render_objects[8] = render_objects;
            current_state = rendering_system_initialize_render_context((void *)pipeline_state, (void **)&render_objects[8]);
            
            if (current_state == 0) {
                *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_PROCESSING;
                *((unsigned int *)((int64_t)render_context + 0xf4)) = 0;
            } else {
                *((int *)((int64_t)render_context + 0x14c)) = 
                    *((int *)((int64_t)render_context + 0x14c)) + 1;
                if (*((int *)((int64_t)render_context + 0x14c)) == RENDER_QUEUE_SIZE) {
                    // 处理队列满的情况
                    render_objects[9] = 0;
                    buffer_sizes[2] = 0;
                    render_flags &= 0xFFFF0000;
                    render_flags |= 0xFFFF;
                    render_flags |= 0x10000;
                    render_flags &= 0xFFFEFFFF;
                    render_flags |= 0x1000000;
                    render_objects[10] = 0;
                    resource_pointers[0] = (void **)render_objects[9];
                    render_objects[9] = 0;
                    render_objects[10] = 0;
                    render_objects[11] = 0;
                    buffer_sizes[3] = 3;
                    render_objects[12] = 0;
                    render_flags |= 0x20000000;
                    rendering_system_initialize_render_context((void *)pipeline_state, (void *)&render_objects[9]);
                    *((unsigned int *)((int64_t)render_context + 0x14c)) = 0;
                    resource_pointers[0] = (void **)render_objects[9];
                    if (render_objects[9] != 0) {
                        // 警告：子函数不返回
                        rendering_system_cleanup_render_resources(0);
                    }
                }
            }
            resource_pointers[0] = (void **)&render_objects[4];
            if (render_objects[4] != (int64_t *)0x0) {
                // 警告：子函数不返回
                rendering_system_cleanup_render_resources(0);
            }
            if (render_objects[0] != 0) {
                // 警告：子函数不返回
                rendering_system_cleanup_render_resources(0);
            }
        } else if (current_state == RENDER_STATE_PROCESSING) {
            // 处理激活状态
            render_flags = *((unsigned int *)(render_data + 0x1bd4));
            current_state = 0;
            
            // 设置渲染参数
            buffer_pointers[0] = (void *)&g_render_texture_library;
            buffer_pointers[1] = temp_buffer;
            temp_buffer[0] = 0;
            buffer_sizes[0] = 0xc;
            strcpy_s(temp_buffer, 0x40, &g_render_material_library);
            security_cookie |= 0x100;
            buffer_sizes[1] = render_flags;
            rendering_system_process_render_pipeline(&buffer_pointers[0], (void *)render_context + 0x22);
            
            buffer_pointers[0] = (void *)&g_render_shader_library;
            render_flags = *((unsigned int *)(render_data + 0x1bd4));
            force_reset = (g_render_debug_mode == '\0');
            buffer_pointers[2] = (void *)&g_render_texture_library;
            buffer_pointers[3] = temp_buffer;
            temp_buffer[0] = 0;
            buffer_sizes[2] = 0xc;
            strcpy_s(temp_buffer, 0x40, &g_render_material_library);
            buffer_sizes[1] = render_flags;
            security_cookie = (security_cookie & 0xFFFFFFFFFFFFFFFEULL) | (unsigned long long)force_reset;
            rendering_system_process_render_pipeline(&buffer_pointers[2], (void *)render_context + 0x21);
            
            buffer_pointers[2] = (void *)&g_render_shader_library;
            render_flags = *((unsigned int *)(render_data + 0x1bd4));
            buffer_pointers[4] = (void *)&g_render_texture_library;
            buffer_pointers[5] = temp_buffer;
            temp_buffer[0] = 0;
            buffer_sizes[3] = 0x17;
            strcpy_s(temp_buffer, 0x40, &g_render_material_library);
            security_cookie |= 0x200;
            buffer_sizes[1] = render_flags;
            rendering_system_process_render_pipeline(&buffer_pointers[4], (void *)render_context + 0x24);
            buffer_pointers[4] = (void *)&g_render_shader_library;
            
            // 更新渲染状态
            temp_pointer = rendering_system_get_current_context();
            *((unsigned int *)(temp_pointer + 4)) |= 0x8000000;
            if (*((void **)(temp_pointer + 0x9620)) != (void *)0x0) {
                ((void (*)(void *, int, int))(*((void **)(temp_pointer + 0x9620))))(
                    (void *)(temp_pointer + 0x9610), 0, 0);
            }
            *((void **)(temp_pointer + 0x9620)) = &rendering_system_execute_render_command;
            *((void **)(temp_pointer + 0x9628)) = &rendering_system_update_render_state;
            *((void **)(temp_pointer + 0x9610)) = &rendering_system_process_render_pipeline;
            *((void ***)(temp_pointer + 0x9650)) = (void **)render_context;
            rendering_system_initialize_render_context(temp_pointer, &g_render_state_table);
            rendering_system_copy_render_data((void *)(temp_pointer + 0x3580), (void *)(render_data + 0x3580));
            
            // 处理渲染对象
            do {
                security_cookie = render_context[0x24];
                buffer_sizes[1] = current_state;
                rendering_system_process_render_objects(
                    render_context[0x1f], temp_pointer, (int64_t)render_context + 0x94);
                current_state++;
            } while (current_state < MAX_RENDER_OBJECTS);
            
            // 更新渲染队列
            LOCK();
            state_counter = (int *)(render_data + 0x11a48);
            current_state = *state_counter;
            *state_counter = *state_counter + 1;
            UNLOCK();
            *((int64_t *)(render_data + 0x9a48 + (int64_t)current_state * 8)) = temp_pointer;
            
            // 复制渲染参数
            render_flags = *((unsigned int *)(render_data + 0x9a38));
            unsigned int temp_flags = *((unsigned int *)(render_data + 0x9a3c));
            unsigned int render_mode = *((unsigned int *)(render_data + 0x9a40));
            *((unsigned int *)(temp_pointer + 0x9a34)) = *((unsigned int *)(render_data + 0x9a34));
            *((unsigned int *)(temp_pointer + 0x9a38)) = render_flags;
            *((unsigned int *)(temp_pointer + 0x9a3c)) = temp_flags;
            *((unsigned int *)(temp_pointer + 0x9a40)) = render_mode;
            *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_ACTIVE;
        } else if (current_state != RENDER_STATE_ACTIVE) {
            // 处理其他状态转换
            if (current_state == RENDER_STATE_CONFIGURED) {
                *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_PROCESSING;
            } else if (current_state == RENDER_STATE_INITIALIZED) {
                *((unsigned int *)((int64_t)render_context + 0x5c)) = 0;
                *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_CONFIGURED;
                resource_pointers[0] = (void **)&render_objects[0];
                render_objects[0] = (int64_t *)&g_render_material_library;
                buffer_pointers[0] = temp_buffer;
                buffer_sizes[4] = 0;
                temp_buffer[0] = 0;
                buffer_sizes[3] = 0x18;
                render_objects[1] = render_context[0x24];
                temp_pointer = rendering_system_create_render_buffer(
                    g_render_resource_pool, RENDER_BUFFER_SIZE, 8, 3);
                state_data[0] = (int64_t *)rendering_system_allocate_render_resource(
                    temp_pointer, &resource_pointers[0]);
                resource_pointers[1] = (void **)state_data[0];
                if (state_data[0] != (int64_t *)0x0) {
                    ((void (*)(void *))(*state_data[0] + 0x28))(state_data[0]);
                }
                temp_pointer = g_render_state_table;
                resource_pointers[0] = (void **)&render_objects[2];
                render_objects[2] = state_data[0];
                if (state_data[0] != (int64_t *)0x0) {
                    ((void (*)(void *))(*state_data[0] + 0x28))(state_data[0]);
                }
                rendering_system_release_render_resource(temp_pointer, &render_objects[2]);
                if (state_data[0] != (int64_t *)0x0) {
                    ((void (*)(void *))(*state_data[0] + 0x38))(state_data[0]);
                }
                resource_pointers[1] = (void **)&render_objects[0];
                render_objects[0] = (int64_t *)&g_render_shader_library;
            } else if (current_state == RENDER_STATE_CONFIGURED) {
                *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_ENABLED;
            } else if (current_state == RENDER_STATE_ENABLED) {
                *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_TERMINATING;
                resource_pointers[1] = (void **)&render_objects[3];
                render_objects[3] = (int64_t *)&g_render_material_library;
                buffer_pointers[1] = temp_buffer;
                buffer_sizes[5] = 0;
                temp_buffer[0] = 0;
                buffer_sizes[4] = 0x21;
                buffer_sizes[3] = *((unsigned int *)(render_data + 0x1bd4));
                buffer_pointers[0] = render_context;
                if (*((void **)render_context) == &rendering_system_object_destroyer) {
                    LOCK();
                    *((int *)(render_context + 1)) = *((int *)(render_context + 1)) + 1;
                    UNLOCK();
                } else {
                    ((void (*)(void *))(*((void **)render_context) + 0x28))(render_context);
                }
                temp_pointer = rendering_system_create_render_buffer(
                    g_render_resource_pool, RENDER_BUFFER_SIZE, 8, 3);
                state_data[0] = (int64_t *)rendering_system_allocate_render_resource(
                    temp_pointer, &resource_pointers[1]);
                resource_pointers[2] = (void **)state_data[0];
                if (state_data[0] != (int64_t *)0x0) {
                    ((void (*)(void *))(*state_data[0] + 0x28))(state_data[0]);
                }
                temp_pointer = g_render_state_table;
                resource_pointers[1] = (void **)&render_objects[4];
                render_objects[4] = state_data[0];
                if (state_data[0] != (int64_t *)0x0) {
                    ((void (*)(void *))(*state_data[0] + 0x28))(state_data[0]);
                }
                rendering_system_release_render_resource(temp_pointer, &render_objects[4]);
                if (state_data[0] != (int64_t *)0x0) {
                    ((void (*)(void *))(*state_data[0] + 0x38))(state_data[0]);
                }
                resource_pointers[2] = (void **)&render_objects[3];
                render_objects[3] = (int64_t *)&g_render_shader_library;
            } else if (current_state != RENDER_STATE_TERMINATING) {
                if (current_state == RENDER_STATE_RUNNING) {
                    temp_pointer = rendering_system_get_current_context();
                    *((unsigned int *)(temp_pointer + 4)) |= 0x8000000;
                    if (*((void **)(temp_pointer + 0x9620)) != (void *)0x0) {
                        ((void (*)(void *, int, int))(*((void **)(temp_pointer + 0x9620))))(
                            (void *)(temp_pointer + 0x9610), 0, 0);
                    }
                    *((void **)(temp_pointer + 0x9620)) = &rendering_system_execute_render_command;
                    *((void **)(temp_pointer + 0x9628)) = &rendering_system_update_render_state;
                    *((void **)(temp_pointer + 0x9610)) = &rendering_system_process_render_pipeline;
                    *((void ***)(temp_pointer + 0x9650)) = (void **)render_context;
                    rendering_system_initialize_render_context(temp_pointer, &g_render_material_library);
                    rendering_system_copy_render_data((void *)(temp_pointer + 0x3580), (void *)(render_data + 0x3580));
                    current_state = 0;
                    do {
                        security_cookie = render_context[0x22];
                        buffer_pointers[0] = render_context;
                        buffer_sizes[1] = current_state;
                        rendering_system_process_render_objects_advanced(
                            render_context[0x1f], temp_pointer, (int64_t)render_context + 0x94, render_context[0x25]);
                        current_state++;
                    } while (current_state < MAX_RENDER_OBJECTS);
                    LOCK();
                    state_counter = (int *)(render_data + 0x11a48);
                    current_state = *state_counter;
                    *state_counter = *state_counter + 1;
                    UNLOCK();
                    *((int64_t *)(render_data + 0x9a48 + (int64_t)current_state * 8)) = temp_pointer;
                    render_flags = *((unsigned int *)(render_data + 0x9a38));
                    temp_flags = *((unsigned int *)(render_data + 0x9a3c));
                    render_mode = *((unsigned int *)(render_data + 0x9a40));
                    *((unsigned int *)(temp_pointer + 0x9a34)) = *((unsigned int *)(render_data + 0x9a34));
                    *((unsigned int *)(temp_pointer + 0x9a38)) = render_flags;
                    *((unsigned int *)(temp_pointer + 0x9a3c)) = temp_flags;
                    *((unsigned int *)(temp_pointer + 0x9a40)) = render_mode;
                    *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_RUNNING;
                } else if (current_state != RENDER_STATE_RUNNING) {
                    if (current_state == RENDER_STATE_PAUSED) {
                        *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_ENABLED;
                    } else if (current_state == RENDER_STATE_CLOSING) {
                        *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_FLUSHING;
                        resource_pointers[2] = (void **)&render_objects[5];
                        render_objects[5] = (int64_t *)&g_render_material_library;
                        buffer_pointers[2] = temp_buffer;
                        buffer_sizes[4] = 0;
                        temp_buffer[0] = 0;
                        buffer_sizes[3] = 0x18;
                        render_objects[6] = render_context[0x22];
                        temp_pointer = rendering_system_create_render_buffer(
                            g_render_resource_pool, RENDER_BUFFER_SIZE, 8, 3);
                        state_data[0] = (int64_t *)rendering_system_allocate_render_resource(
                            temp_pointer, &resource_pointers[2]);
                        resource_pointers[3] = (void **)state_data[0];
                        if (state_data[0] != (int64_t *)0x0) {
                            ((void (*)(void *))(*state_data[0] + 0x28))(state_data[0]);
                        }
                        temp_pointer = g_render_state_table;
                        resource_pointers[2] = (void **)&render_objects[7];
                        render_objects[7] = state_data[0];
                        if (state_data[0] != (int64_t *)0x0) {
                            ((void (*)(void *))(*state_data[0] + 0x28))(state_data[0]);
                        }
                        rendering_system_release_render_resource(temp_pointer, &render_objects[7]);
                        if (state_data[0] != (int64_t *)0x0) {
                            ((void (*)(void *))(*state_data[0] + 0x38))(state_data[0]);
                        }
                        resource_pointers[3] = (void **)&render_objects[5];
                        render_objects[5] = (int64_t *)&g_render_shader_library;
                    } else if (current_state == RENDER_STATE_FLUSHING) {
                        *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_CLEANUP;
                    } else if (current_state == RENDER_STATE_CLEANUP) {
                        *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_TERMINATING;
                        resource_pointers[3] = (void **)&render_objects[8];
                        render_objects[8] = (int64_t *)&g_render_material_library;
                        buffer_pointers[3] = temp_buffer;
                        buffer_sizes[5] = 0;
                        temp_buffer[0] = 0;
                        buffer_sizes[4] = 0x20;
                        buffer_sizes[3] = *((unsigned int *)(render_data + 0x1bd4));
                        buffer_pointers[0] = render_context;
                        if (*((void **)render_context) == &rendering_system_object_destroyer) {
                            LOCK();
                            *((int *)(render_context + 1)) = *((int *)(render_context + 1)) + 1;
                            UNLOCK();
                        } else {
                            ((void (*)(void *))(*((void **)render_context) + 0x28))(render_context);
                        }
                        temp_pointer = rendering_system_create_render_buffer(
                            g_render_resource_pool, RENDER_BUFFER_SIZE, 8, 3);
                        state_data[0] = (int64_t *)rendering_system_allocate_render_resource(
                            temp_pointer, &resource_pointers[3]);
                        resource_pointers[4] = (void **)state_data[0];
                        if (state_data[0] != (int64_t *)0x0) {
                            ((void (*)(void *))(*state_data[0] + 0x28))(state_data[0]);
                        }
                        temp_pointer = g_render_state_table;
                        resource_pointers[3] = (void **)&render_objects[9];
                        render_objects[9] = state_data[0];
                        if (state_data[0] != (int64_t *)0x0) {
                            ((void (*)(void *))(*state_data[0] + 0x28))(state_data[0]);
                        }
                        rendering_system_release_render_resource(temp_pointer, &render_objects[9]);
                        if (state_data[0] != (int64_t *)0x0) {
                            ((void (*)(void *))(*state_data[0] + 0x38))(state_data[0]);
                        }
                        resource_pointers[4] = (void **)&render_objects[8];
                        render_objects[8] = (int64_t *)&g_render_shader_library;
                    } else if (current_state == RENDER_STATE_FINALIZING) {
                        temp_pointer = rendering_system_get_current_context();
                        *((unsigned int *)(temp_pointer + 4)) |= 0x8000000;
                        void (*cleanup_func)(void *, int, int) = 
                            *((void (**)(void *, int, int))(temp_pointer + 0x9620));
                        if (g_render_debug_mode == '\0') {
                            if (cleanup_func != (void (*)(void *, int, int))0x0) {
                                cleanup_func((void *)(temp_pointer + 0x9610), 0, 0);
                            }
                            *((void **)(temp_pointer + 0x9620)) = &rendering_system_execute_render_command;
                            *((void **)(temp_pointer + 0x9628)) = &rendering_system_update_render_state;
                            cleanup_func = (void (*)(void *, int, int))&rendering_system_process_render_pipeline;
                        } else {
                            if (cleanup_func != (void (*)(void *, int, int))0x0) {
                                cleanup_func((void *)(temp_pointer + 0x9610), 0, 0);
                            }
                            *((void **)(temp_pointer + 0x9620)) = &rendering_system_execute_render_command;
                            *((void **)(temp_pointer + 0x9628)) = &rendering_system_update_render_state;
                            cleanup_func = rendering_system_process_render_objects_advanced;
                        }
                        *((void (**)(void *, int, int))(temp_pointer + 0x9610)) = cleanup_func;
                        *((void ***)(temp_pointer + 0x9650)) = (void **)render_context;
                        rendering_system_initialize_render_context(temp_pointer, &g_render_material_library);
                        rendering_system_copy_render_data((void *)(temp_pointer + 0x3580), (void *)(render_data + 0x3580));
                        current_state = 0;
                        do {
                            security_cookie = render_context[0x21];
                            buffer_pointers[0] = render_context;
                            buffer_sizes[1] = current_state;
                            rendering_system_process_render_objects_advanced(
                                render_context[0x1f], temp_pointer, (int64_t)render_context + 0x94, render_context[0x23]);
                            current_state++;
                        } while (current_state < MAX_RENDER_OBJECTS);
                        LOCK();
                        state_counter = (int *)(render_data + 0x11a48);
                        current_state = *state_counter;
                        *state_counter = *state_counter + 1;
                        UNLOCK();
                        *((int64_t *)(render_data + 0x9a48 + (int64_t)current_state * 8)) = temp_pointer;
                        render_flags = *((unsigned int *)(render_data + 0x9a38));
                        temp_flags = *((unsigned int *)(render_data + 0x9a3c));
                        render_mode = *((unsigned int *)(render_data + 0x9a40));
                        *((unsigned int *)(temp_pointer + 0x9a34)) = *((unsigned int *)(render_data + 0x9a34));
                        *((unsigned int *)(temp_pointer + 0x9a38)) = render_flags;
                        *((unsigned int *)(temp_pointer + 0x9a3c)) = temp_flags;
                        *((unsigned int *)(temp_pointer + 0x9a40)) = render_mode;
                        *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_FINALIZING;
                    } else if (current_state != RENDER_STATE_FINALIZING) {
                        if (current_state == RENDER_STATE_RESETTING) {
                            *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_CLOSING;
                        } else if (current_state == RENDER_STATE_DISPOSING) {
                            *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_FLUSHING;
                            resource_pointers[4] = (void **)&render_objects[10];
                            render_objects[10] = (int64_t *)&g_render_material_library;
                            buffer_pointers[4] = temp_buffer;
                            buffer_sizes[4] = 0;
                            temp_buffer[0] = 0;
                            buffer_sizes[3] = 0x18;
                            render_objects[11] = render_context[0x21];
                            temp_pointer = rendering_system_create_render_buffer(
                                g_render_resource_pool, RENDER_BUFFER_SIZE, 8, 3);
                            state_data[0] = (int64_t *)rendering_system_allocate_render_resource(
                                temp_pointer, &resource_pointers[4]);
                            resource_pointers[5] = (void **)state_data[0];
                            if (state_data[0] != (int64_t *)0x0) {
                                ((void (*)(void *))(*state_data[0] + 0x28))(state_data[0]);
                            }
                            temp_pointer = g_render_state_table;
                            resource_pointers[4] = (void **)&render_objects[12];
                            render_objects[12] = state_data[0];
                            if (state_data[0] != (int64_t *)0x0) {
                                ((void (*)(void *))(*state_data[0] + 0x28))(state_data[0]);
                            }
                            rendering_system_release_render_resource(temp_pointer, &render_objects[12]);
                            if (state_data[0] != (int64_t *)0x0) {
                                ((void (*)(void *))(*state_data[0] + 0x38))(state_data[0]);
                            }
                            resource_pointers[5] = (void **)&render_objects[10];
                            render_objects[10] = (int64_t *)&g_render_shader_library;
                        } else if (current_state == RENDER_STATE_FLUSHING) {
                            *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_CLEANUP;
                        } else if (current_state == RENDER_STATE_CLEANUP) {
                            *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_TERMINATING;
                            resource_pointers[4] = (void **)&render_objects[13];
                            render_objects[13] = (int64_t *)&g_render_material_library;
                            buffer_pointers[4] = temp_buffer;
                            buffer_sizes[5] = 0;
                            temp_buffer[0] = 0;
                            buffer_sizes[4] = 0x1f;
                            buffer_sizes[3] = *((unsigned int *)(render_data + 0x1bd4));
                            buffer_pointers[0] = render_context;
                            if (*((void **)render_context) == &rendering_system_object_destroyer) {
                                LOCK();
                                *((int *)(render_context + 1)) = *((int *)(render_context + 1)) + 1;
                                UNLOCK();
                            } else {
                                ((void (*)(void *))(*((void **)render_context) + 0x28))(render_context);
                            }
                            temp_pointer = rendering_system_create_render_buffer(
                                g_render_resource_pool, RENDER_BUFFER_SIZE, 8, 3);
                            state_data[0] = (int64_t *)rendering_system_allocate_render_resource(
                                temp_pointer, &resource_pointers[4]);
                            resource_pointers[5] = (void **)state_data[0];
                            if (state_data[0] != (int64_t *)0x0) {
                                ((void (*)(void *))(*state_data[0] + 0x28))(state_data[0]);
                            }
                            temp_pointer = g_render_state_table;
                            resource_pointers[4] = (void **)&render_objects[14];
                            render_objects[14] = state_data[0];
                            if (state_data[0] != (int64_t *)0x0) {
                                ((void (*)(void *))(*state_data[0] + 0x28))(state_data[0]);
                            }
                            rendering_system_release_render_resource(temp_pointer, &render_objects[14]);
                            if (state_data[0] != (int64_t *)0x0) {
                                ((void (*)(void *))(*state_data[0] + 0x38))(state_data[0]);
                            }
                            resource_pointers[5] = (void **)&render_objects[13];
                            render_objects[13] = (int64_t *)&g_render_shader_library;
                        } else if (current_state == RENDER_STATE_DISPOSED) {
                            rendering_system_state_resetter((int64_t)render_context);
                            if ((force_reset != '\0') &&
                                (*((int64_t *)(*((int64_t *)(render_context[0x1f] + 0x38)) + 800)) != 0)) {
                                *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_DISPOSED;
                                rendering_system_process_render_resources(
                                    *((unsigned long long *)(*((int64_t *)(render_context[0x1f] + 0x38)) + 800)));
                            }
                        } else if (current_state == RENDER_STATE_COMPLETE) {
                            *((unsigned int *)((int64_t)render_context + 0x4c)) = RENDER_STATE_INITIAL;
                            *((unsigned int *)((int64_t)render_context + 0x5c)) = RENDER_STATE_MASK;
                        }
                    }
                }
            }
        }
    } else {
        *(char *)(pipeline_state + 0x2830) = 0;
    }
    
    // 清理并返回
    rendering_system_cleanup_render_resources(security_cookie ^ (unsigned long long)buffer_data);
}

/**
 * 渲染系统资源复制器
 * 
 * 复制渲染资源对象，包括材质、纹理、着色器等资源的深度复制。
 * 该函数确保资源引用的正确转移和旧资源的正确释放。
 * 
 * @param dest_resource 目标资源指针
 * @param src_resource 源资源指针
 * @return 目标资源指针
 */
unsigned int *rendering_system_resource_copier(unsigned int *dest_resource, unsigned int *src_resource)
{
    int64_t *src_obj_ptr;
    int64_t *dest_obj_ptr;
    
    // 复制基本资源数据
    *dest_resource = *src_resource;
    
    // 复制并转移材质资源
    src_obj_ptr = *((int64_t **)(src_resource + 2));
    if (src_obj_ptr != (int64_t *)0x0) {
        ((void (*)(void *))(*src_obj_ptr + 0x28))(src_obj_ptr);
    }
    dest_obj_ptr = *((int64_t **)(dest_resource + 2));
    *((int64_t **)(dest_resource + 2)) = src_obj_ptr;
    if (dest_obj_ptr != (int64_t *)0x0) {
        ((void (*)(void))(*dest_obj_ptr + 0x38))();
    }
    
    // 复制并转移纹理资源
    src_obj_ptr = *((int64_t **)(src_resource + 4));
    if (src_obj_ptr != (int64_t *)0x0) {
        ((void (*)(void *))(*src_obj_ptr + 0x28))(src_obj_ptr);
    }
    dest_obj_ptr = *((int64_t **)(dest_resource + 4));
    *((int64_t **)(dest_resource + 4)) = src_obj_ptr;
    if (dest_obj_ptr != (int64_t *)0x0) {
        ((void (*)(void))(*dest_obj_ptr + 0x38))();
    }
    
    // 复制并转移着色器资源
    src_obj_ptr = *((int64_t **)(src_resource + 6));
    if (src_obj_ptr != (int64_t *)0x0) {
        ((void (*)(void *))(*src_obj_ptr + 0x28))(src_obj_ptr);
    }
    dest_obj_ptr = *((int64_t **)(dest_resource + 6));
    *((int64_t **)(dest_resource + 6)) = src_obj_ptr;
    if (dest_obj_ptr != (int64_t *)0x0) {
        ((void (*)(void))(*dest_obj_ptr + 0x38))();
    }
    
    // 复制并转移渲染缓冲区资源
    src_obj_ptr = *((int64_t **)(src_resource + 8));
    if (src_obj_ptr != (int64_t *)0x0) {
        ((void (*)(void *))(*src_obj_ptr + 0x28))(src_obj_ptr);
    }
    dest_obj_ptr = *((int64_t **)(dest_resource + 8));
    *((int64_t **)(dest_resource + 8)) = src_obj_ptr;
    if (dest_obj_ptr != (int64_t *)0x0) {
        ((void (*)(void))(*dest_obj_ptr + 0x38))();
    }
    
    // 复制并转移渲染管线资源
    src_obj_ptr = *((int64_t **)(src_resource + 10));
    if (src_obj_ptr != (int64_t *)0x0) {
        ((void (*)(void *))(*src_obj_ptr + 0x28))(src_obj_ptr);
    }
    dest_obj_ptr = *((int64_t **)(dest_resource + 10));
    *((int64_t **)(dest_resource + 10)) = src_obj_ptr;
    if (dest_obj_ptr != (int64_t *)0x0) {
        ((void (*)(void))(*dest_obj_ptr + 0x38))();
    }
    
    // 复制并转移渲染状态资源
    src_obj_ptr = *((int64_t **)(src_resource + 0xc));
    if (src_obj_ptr != (int64_t *)0x0) {
        ((void (*)(void *))(*src_obj_ptr + 0x28))(src_obj_ptr);
    }
    dest_obj_ptr = *((int64_t **)(dest_resource + 0xc));
    *((int64_t **)(dest_resource + 0xc)) = src_obj_ptr;
    if (dest_obj_ptr != (int64_t *)0x0) {
        ((void (*)(void))(*dest_obj_ptr + 0x38))();
    }
    
    return dest_resource;
}

// 警告：以'_'开头的全局变量与同一地址的较小符号重叠

/**
 * 渲染系统管线设置器
 * 
 * 设置渲染管线的各种参数，包括着色器、纹理、混合模式等。
 * 该函数负责配置渲染管线的各个阶段和参数。
 * 
 * @param pipeline_context 管线上下文
 * @param vertex_shader 顶点着色器指针
 * @param fragment_shader 片段着色器指针
 * @param blend_mode 混合模式
 * @param render_flags 渲染标志
 */
void rendering_system_pipeline_setter(int64_t pipeline_context, int64_t *vertex_shader, 
                                     int64_t *fragment_shader, unsigned int blend_mode,
                                     unsigned int render_flags)
{
    char buffer_data[32];
    char force_init;
    unsigned int shader_flags;
    int64_t *shader_ptr;
    unsigned long long security_cookie;
    void *texture_pointers[2];
    char temp_buffer[72];
    unsigned long long cookie_value;
    
    // 初始化安全cookie
    security_cookie = 0xFFFFFFFFFFFFFFFEULL;
    cookie_value = *(unsigned long long *)buffer_data ^ security_cookie;
    
    // 处理顶点着色器
    if (vertex_shader != (int64_t *)0x0) {
        shader_ptr = vertex_shader;
        ((void (*)(void *))(*vertex_shader + 0x28))(vertex_shader);
    }
    
    // 设置顶点着色器
    shader_ptr = *((int64_t **)(pipeline_context + 0x30));
    *((int64_t **)(pipeline_context + 0x30)) = vertex_shader;
    if (shader_ptr != (int64_t *)0x0) {
        ((void (*)(void))(*shader_ptr + 0x38))();
    }
    
    // 处理片段着色器
    if (fragment_shader != (int64_t *)0x0) {
        shader_ptr = fragment_shader;
        ((void (*)(void *))(*fragment_shader + 0x28))(fragment_shader);
    }
    
    // 设置片段着色器
    shader_ptr = *((int64_t **)(pipeline_context + 0x38));
    *((int64_t **)(pipeline_context + 0x38)) = fragment_shader;
    if (shader_ptr != (int64_t *)0x0) {
        ((void (*)(void))(*shader_ptr + 0x38))();
    }
    
    // 设置混合模式
    *((unsigned int *)(pipeline_context + 0x10)) = blend_mode;
    
    // 初始化渲染纹理（如果需要）
    if (*((int64_t *)(pipeline_context + 0x40)) == 0) {
        texture_pointers[0] = &g_render_texture_library;
        texture_pointers[1] = temp_buffer;
        temp_buffer[0] = 0;
        shader_flags = 0x14;
        strcpy_s(temp_buffer, 0x40, &g_render_material_library);
        security_cookie = render_flags;
        force_init = 1;
        rendering_system_process_render_pipeline(&texture_pointers[0], (void *)pipeline_context + 0x40);
        texture_pointers[0] = &g_render_shader_library;
    }
    
    // 清理并返回
    rendering_system_cleanup_render_resources(cookie_value);
}

/**
 * 渲染系统状态重置器
 * 
 * 重置渲染系统的状态，清理所有活跃的渲染对象和资源。
 * 该函数用于在渲染会话结束时进行完整的清理工作。
 * 
 * @param render_context 渲染上下文指针
 */
void rendering_system_state_resetter(int64_t render_context)
{
    // 清理渲染对象1
    if (*((int64_t *)(render_context + 0x110)) != 0) {
        rendering_system_cleanup_render_object(*((int64_t *)(render_context + 0x110)), 0);
    }
    
    // 清理渲染对象2
    if (*((int64_t *)(render_context + 0x108)) != 0) {
        rendering_system_cleanup_render_object(*((int64_t *)(render_context + 0x108)), 0);
    }
    
    // 清理渲染对象3
    if (*((int64_t *)(render_context + 0x118)) != 0) {
        rendering_system_cleanup_render_object(*((int64_t *)(render_context + 0x118)), 0);
    }
    
    // 重置渲染状态
    *((unsigned int *)(render_context + 0x4c)) = RENDER_STATE_INITIAL;
    *((unsigned int *)(render_context + 0x5c)) = RENDER_STATE_MASK;
    
    // 重置渲染参数
    *((unsigned int *)(render_context + 0x130)) = 
        *((unsigned int *)(*((int64_t *)(*((int64_t *)(render_context + 0xf8) + 0x38)) + 0x3358)));
}

/**
 * 渲染系统参数设置器
 * 
 * 设置渲染系统的各种参数，包括变换矩阵、材质属性、纹理坐标等。
 * 该函数负责将浮点参数数据转换为渲染系统可用的格式。
 * 
 * @param render_object 渲染对象指针
 * @param param_data 参数数据数组
 * @param apply_changes 是否应用更改标志
 */
void rendering_system_parameter_setter(int64_t render_object, float *param_data, char apply_changes)
{
    unsigned long long temp_data;
    unsigned int temp_flags;
    
    // 复制变换矩阵数据
    temp_data = *((unsigned long long *)(param_data + 2));
    *((unsigned long long *)(render_object + 100)) = *((unsigned long long *)param_data);
    *((unsigned long long *)(render_object + 0x6c)) = temp_data;
    
    temp_data = *((unsigned long long *)(param_data + 6));
    *((unsigned long long *)(render_object + 0x74)) = *((unsigned long long *)(param_data + 4));
    *((unsigned long long *)(render_object + 0x7c)) = temp_data;
    
    temp_data = *((unsigned long long *)(param_data + 10));
    *((unsigned long long *)(render_object + 0x84)) = *((unsigned long long *)(param_data + 8));
    *((unsigned long long *)(render_object + 0x8c)) = temp_data;
    
    temp_data = *((unsigned long long *)(param_data + 0xe));
    *((unsigned long long *)(render_object + 0x94)) = *((unsigned long long *)(param_data + 0xc));
    *((unsigned long long *)(render_object + 0x9c)) = temp_data;
    
    // 清零标志位
    temp_flags = 0;
    *((unsigned int *)(render_object + 0x70)) = 0;
    *((unsigned int *)(render_object + 0x80)) = 0;
    *((unsigned int *)(render_object + 0x90)) = 0;
    *((unsigned int *)(render_object + 0xa0)) = 0x3f800000; // 1.0f
    
    // 计算向量长度并存储
    *((float *)(render_object + 0x48)) = 
        sqrt(param_data[4] * param_data[4] + param_data[5] * param_data[5] + param_data[6] * param_data[6] +
             param_data[0] * param_data[0] + param_data[1] * param_data[1] + param_data[2] * param_data[2] +
             param_data[8] * param_data[8] + param_data[9] * param_data[9] + param_data[10] * param_data[10]);
    
    // 初始化渲染缓冲区
    rendering_system_initialize_render_buffers();
    
    // 应用更改（如果需要）
    if (apply_changes != '\0') {
        *((unsigned int *)(render_object + 0x4c)) = temp_flags;
    }
}

/**
 * 渲染系统对象创建器
 * 
 * 创建新的渲染系统对象，包括初始化所有必要的参数和状态。
 * 该函数负责分配内存并设置对象的初始状态。
 * 
 * @param render_object 渲染对象指针
 * @param context_data 上下文数据
 * @param pipeline_data 管线数据
 * @param resource_data 资源数据
 * @param init_flag 初始化标志
 * @return 渲染对象指针
 */
unsigned long long *rendering_system_object_creator(unsigned long long *render_object, 
                                                    unsigned long long context_data,
                                                    unsigned long long pipeline_data, 
                                                    unsigned long long resource_data)
{
    char init_flag;
    unsigned long long temp_data;
    
    temp_data = 0xFFFFFFFFFFFFFFFEULL;
    
    // 设置虚函数表指针
    *render_object = &g_render_state_table;
    *render_object = &g_render_context_manager;
    *((unsigned int *)(render_object + 1)) = 0;
    *render_object = &rendering_system_object_destroyer;
    render_object[3] = 0;
    render_object[4] = 0;
    render_object[5] = 0;
    render_object[6] = 0;
    render_object[7] = 0;
    render_object[8] = 0;
    
    // 初始化渲染系统
    rendering_system_initialize_render_system();
    
    // 清零渲染对象数组
    render_object[0x20] = 0;
    render_object[0x21] = 0;
    render_object[0x22] = 0;
    render_object[0x23] = 0;
    render_object[0x24] = 0;
    render_object[0x25] = 0;
    
    // 设置上下文数据
    render_object[0x1f] = context_data;
    *((unsigned int *)((int64_t)render_object + 0x4c)) = RENDER_STATE_READY;
    *((unsigned int *)((int64_t)render_object + 0xf4)) = RENDER_STATE_MASK;
    *((unsigned long long *)((int64_t)render_object + 0xe4)) = 0;
    *((unsigned long long *)((int64_t)render_object + 0xec)) = 0;
    *((unsigned int *)(render_object + 0x26)) = 0;
    *((unsigned long long *)((int64_t)render_object + 0x134)) = 0;
    *((unsigned long long *)((int64_t)render_object + 0x13c)) = 0;
    *((unsigned int *)((int64_t)render_object + 0x144)) = 0x3f800000; // 1.0f
    *((char *)(render_object + 10)) = 0;
    *((unsigned int *)((int64_t)render_object + 0x14c)) = 0;
    *((unsigned int *)((int64_t)render_object + 0x5c)) = RENDER_STATE_MASK;
    
    // 初始化渲染参数
    init_flag = 1;
    rendering_system_parameter_setter((int64_t)render_object, (float *)&g_render_material_library, 1, temp_data);
    
    // 设置对象属性
    *((unsigned int *)((int64_t)render_object + 0x54)) = 0;
    *((char *)(render_object + 10)) = init_flag;
    
    return render_object;
}

/**
 * 渲染系统资源销毁器
 * 
 * 销毁渲染系统对象并释放所有相关资源。
 * 该函数负责清理所有分配的内存和资源。
 * 
 * @param render_object 渲染对象指针
 * @param free_memory 是否释放内存标志
 * @return 渲染对象指针
 */
unsigned long long *rendering_system_resource_destroyer(unsigned long long *render_object, unsigned long long free_memory)
{
    int i;
    
    // 销毁渲染对象数组
    for (i = 0; i < 6; i++) {
        if ((int64_t *)render_object[0x20 + i] != (int64_t *)0x0) {
            ((void (*)(void))(*((int64_t *)render_object[0x20 + i]) + 0x38))();
        }
    }
    
    // 清理渲染缓冲区
    rendering_system_cleanup_render_buffers(render_object + 2);
    
    // 重置虚函数表指针
    *render_object = &g_render_context_manager;
    *render_object = &g_render_state_table;
    
    // 释放内存（如果需要）
    if ((free_memory & 1) != 0) {
        free(render_object, 0x150);
    }
    
    return render_object;
}