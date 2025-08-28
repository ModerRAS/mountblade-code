#include "TaleWorlds.Native.Split.h"

// 03_rendering_part083.c - 渲染系统资源清理模块
// 包含1个核心函数：渲染系统资源清理和释放
// 
// 简化实现说明：原文件包含复杂的资源清理逻辑，包括多个指针释放和函数调用。
// 本简化实现保留了核心功能结构，但简化了底层优化细节，以便于理解和维护。

/**
 * 渲染系统资源清理和释放函数
 * 清理渲染系统中的各种资源指针和对象，释放内存并调用相应的清理函数
 * 
 * @param render_context 渲染系统上下文指针
 */
void rendering_system_cleanup_resources(longlong render_context)
{
    // 简化实现：渲染系统资源清理
    // 原实现包含复杂的指针管理和资源释放逻辑
    
    // 清理渲染资源指针数组（0x100偏移量）
    longlong** resource_pointers = *(longlong***)(render_context + 0x100);
    *(uint64_t*)(render_context + 0x100) = 0;
    
    if (resource_pointers != NULL) {
        // 调用资源清理函数（偏移量0x38）
        void (*cleanup_func)(void) = (void (*)(void))(*resource_pointers + 0x38);
        if (cleanup_func) {
            cleanup_func();
        }
    }
    
    // 清理纹理资源指针（0x108偏移量）
    resource_pointers = *(longlong***)(render_context + 0x108);
    *(uint64_t*)(render_context + 0x108) = 0;
    
    if (resource_pointers != NULL) {
        void (*cleanup_func)(void) = (void (*)(void))(*resource_pointers + 0x38);
        if (cleanup_func) {
            cleanup_func();
        }
    }
    
    // 清理着色器资源指针（0x110偏移量）
    resource_pointers = *(longlong***)(render_context + 0x110);
    *(uint64_t*)(render_context + 0x110) = 0;
    
    if (resource_pointers != NULL) {
        void (*cleanup_func)(void) = (void (*)(void))(*resource_pointers + 0x38);
        if (cleanup_func) {
            cleanup_func();
        }
    }
    
    // 清理缓冲区资源指针（0x118偏移量）
    resource_pointers = *(longlong***)(render_context + 0x118);
    *(uint64_t*)(render_context + 0x118) = 0;
    
    if (resource_pointers != NULL) {
        void (*cleanup_func)(void) = (void (*)(void))(*resource_pointers + 0x38);
        if (cleanup_func) {
            cleanup_func();
        }
    }
    
    // 清理渲染目标指针（0x120偏移量）
    resource_pointers = *(longlong***)(render_context + 0x120);
    *(uint64_t*)(render_context + 0x120) = 0;
    
    if (resource_pointers != NULL) {
        void (*cleanup_func)(void) = (void (*)(void))(*resource_pointers + 0x38);
        if (cleanup_func) {
            cleanup_func();
        }
    }
    
    // 清理渲染状态指针（0x128偏移量）
    resource_pointers = *(longlong***)(render_context + 0x128);
    *(uint64_t*)(render_context + 0x128) = 0;
    
    if (resource_pointers != NULL) {
        void (*cleanup_func)(void) = (void (*)(void))(*resource_pointers + 0x38);
        if (cleanup_func) {
            cleanup_func();
        }
    }
    
    // 处理渲染对象（0x30偏移量）
    longlong render_object = *(longlong*)(render_context + 0x30);
    if (render_object != 0 && ((*(uint*)(render_object + 0x328) & 0x20000000) == 0)) {
        // 调用渲染对象清理函数
        void (*render_object_cleanup)(longlong, int) = (void (*)(longlong, int))0x18023b050;
        render_object_cleanup(render_object, 0);
    }
    
    // 处理渲染对象（0x38偏移量）
    render_object = *(longlong*)(render_context + 0x38);
    if (render_object != 0 && ((*(uint*)(render_object + 0x328) & 0x20000000) == 0)) {
        void (*render_object_cleanup)(longlong, int) = (void (*)(longlong, int))0x18023b050;
        render_object_cleanup(render_object, 0);
    }
    
    // 处理渲染对象（0x18偏移量）
    render_object = *(longlong*)(render_context + 0x18);
    if (render_object != 0 && ((*(uint*)(render_object + 0x328) & 0x20000000) == 0)) {
        void (*render_object_cleanup)(longlong, int) = (void (*)(longlong, int))0x18023b050;
        render_object_cleanup(render_object, 0);
    }
    
    // 处理渲染对象（0x20偏移量）
    render_object = *(longlong*)(render_context + 0x20);
    if (render_object != 0 && ((*(uint*)(render_object + 0x328) & 0x20000000) == 0)) {
        void (*render_object_cleanup)(longlong, int) = (void (*)(longlong, int))0x18023b050;
        render_object_cleanup(render_object, 0);
    }
    
    // 清理渲染对象指针（0x30偏移量）
    resource_pointers = *(longlong***)(render_context + 0x30);
    *(uint64_t*)(render_context + 0x30) = 0;
    
    if (resource_pointers != NULL) {
        void (*cleanup_func)(void) = (void (*)(void))(*resource_pointers + 0x38);
        if (cleanup_func) {
            cleanup_func();
        }
    }
    
    // 清理渲染对象指针（0x38偏移量）
    resource_pointers = *(longlong***)(render_context + 0x38);
    *(uint64_t*)(render_context + 0x38) = 0;
    
    if (resource_pointers != NULL) {
        void (*cleanup_func)(void) = (void (*)(void))(*resource_pointers + 0x38);
        if (cleanup_func) {
            cleanup_func();
        }
    }
    
    // 清理渲染对象指针（0x40偏移量）
    resource_pointers = *(longlong***)(render_context + 0x40);
    *(uint64_t*)(render_context + 0x40) = 0;
    
    if (resource_pointers != NULL) {
        void (*cleanup_func)(void) = (void (*)(void))(*resource_pointers + 0x38);
        if (cleanup_func) {
            cleanup_func();
        }
    }
    
    // 清理渲染对象指针（0x18偏移量）
    resource_pointers = *(longlong***)(render_context + 0x18);
    *(uint64_t*)(render_context + 0x18) = 0;
    
    if (resource_pointers != NULL) {
        void (*cleanup_func)(void) = (void (*)(void))(*resource_pointers + 0x38);
        if (cleanup_func) {
            cleanup_func();
        }
    }
    
    // 清理渲染对象指针（0x20偏移量）
    resource_pointers = *(longlong***)(render_context + 0x20);
    *(uint64_t*)(render_context + 0x20) = 0;
    
    if (resource_pointers != NULL) {
        void (*cleanup_func)(void) = (void (*)(void))(*resource_pointers + 0x38);
        if (cleanup_func) {
            cleanup_func();
        }
    }
    
    // 清理渲染对象指针（0x28偏移量）
    resource_pointers = *(longlong***)(render_context + 0x28);
    *(uint64_t*)(render_context + 0x28) = 0;
    
    if (resource_pointers != NULL) {
        void (*cleanup_func)(void) = (void (*)(void))(*resource_pointers + 0x38);
        if (cleanup_func) {
            cleanup_func();
        }
    }
    
    // 重置渲染状态标志
    *(uint32_t*)(render_context + 0x10) = 0;
}

// 函数别名定义 - 保持与原函数名的兼容性
void FUN_1803162f0(longlong render_context) __attribute__((alias("rendering_system_cleanup_resources")));