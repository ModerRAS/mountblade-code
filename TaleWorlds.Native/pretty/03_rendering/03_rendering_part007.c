#include "TaleWorlds.Native.Split.h"

// 03_rendering_part007.c - 渲染数据序列化扩展函数
// 本文件包含渲染数据的高级序列化和反序列化功能

/* ================================================
   渲染数据序列化扩展函数
   ================================================ */

/**
 * 序列化渲染数据扩展部分
 * @param render_data 渲染数据指针
 * @param serialization_context 序列化上下文
 * 
 * 该函数负责序列化渲染数据的扩展部分，包括资源列表、
 * 元数据块和各种配置信息的序列化
 */
void serialize_render_data_extended(uint32_t* render_data, longlong* serialization_context)
{
    uint8_t data_byte;
    uint32_t data_word;
    uint8_t* byte_ptr;
    uint32_t* word_ptr;
    int* int_ptr;
    longlong block_size;
    int element_count;
    longlong element_offset;
    longlong processed_count;
    int current_index;
    longlong remaining_count;
    longlong chunk_count;
    
    // 写入序列化开始标记
    word_ptr = (uint32_t*)serialization_context[1];
    if ((ulonglong)((*serialization_context - (longlong)word_ptr) + serialization_context[2]) < 5) {
        expand_serialization_buffer(serialization_context, (longlong)word_ptr + (4 - *serialization_context));
        word_ptr = (uint32_t*)serialization_context[1];
    }
    *word_ptr = 1;
    serialization_context[1] = serialization_context[1] + 4;
    
    // 初始化序列化过程
    initialize_render_data_serialization(&get_render_data_serialization_header(), *render_data);
    
    // 执行预序列化清理
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    
    // 计算资源列表大小
    block_size = (*(longlong*)(render_data + 0x4c) - *(longlong*)(render_data + 0x4a)) / 6 +
                (*(longlong*)(render_data + 0x4c) - *(longlong*)(render_data + 0x4a) >> 0x3f);
    
    int_ptr = (int*)serialization_context[1];
    element_count = (int)(block_size >> 4) - (int)(block_size >> 0x3f);
    
    if ((ulonglong)((*serialization_context - (longlong)int_ptr) + serialization_context[2]) < 5) {
        expand_serialization_buffer(serialization_context, (longlong)int_ptr + (4 - *serialization_context));
        int_ptr = (int*)serialization_context[1];
    }
    
    *int_ptr = element_count;
    current_index = 0;
    serialization_context[1] = serialization_context[1] + 4;
    block_size = (longlong)element_count;
    
    // 序列化资源列表
    if (0 < element_count) {
        element_offset = 0;
        do {
            perform_serialization_cleanup();
            word_ptr = (uint32_t*)serialization_context[1];
            data_word = *(uint32_t*)(element_offset + 0x58 + *(longlong*)(render_data + 0x4a));
            
            if ((ulonglong)((*serialization_context - (longlong)word_ptr) + serialization_context[2]) < 5) {
                expand_serialization_buffer(serialization_context, (longlong)word_ptr + (4 - *serialization_context));
                word_ptr = (uint32_t*)serialization_context[1];
            }
            
            *word_ptr = data_word;
            serialization_context[1] = serialization_context[1] + 4;
            word_ptr = (uint32_t*)serialization_context[1];
            data_word = *(uint32_t*)(element_offset + 0x5c + *(longlong*)(render_data + 0x4a));
            
            if ((ulonglong)((*serialization_context - (longlong)word_ptr) + serialization_context[2]) < 5) {
                expand_serialization_buffer(serialization_context, (longlong)word_ptr + (4 - *serialization_context));
                word_ptr = (uint32_t*)serialization_context[1];
            }
            
            *word_ptr = data_word;
            current_index = current_index + 1;
            serialization_context[1] = serialization_context[1] + 4;
            element_offset = element_offset + 0x60;
            block_size = block_size + -1;
        } while (block_size != 0);
    }
    
    // 执行中间序列化步骤
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    
    // 序列化元数据块
    chunk_count = 0x10;
    do {
        perform_serialization_cleanup();
        chunk_count = chunk_count + -1;
    } while (chunk_count != 0);
    
    // 序列化最终元数据
    serialize_final_metadata_extended(&get_final_metadata_extended_header(), render_data[0x1f2]);
    
    // 序列化扩展数据标记
    byte_ptr = (uint8_t*)serialization_context[1];
    data_byte = *(uint8_t*)(render_data + 499);
    
    if ((ulonglong)((*serialization_context - (longlong)byte_ptr) + serialization_context[2]) < 2) {
        expand_serialization_buffer(serialization_context, byte_ptr + (1 - *serialization_context));
        byte_ptr = (uint8_t*)serialization_context[1];
    }
    
    *byte_ptr = data_byte;
    serialization_context[1] = serialization_context[1] + 1;
    
    if (*(char*)(render_data + 499) == '\0') {
        return;
    }
    
    // 序列化扩展数据块
    serialize_extended_data_blocks(render_data, serialization_context);
}

/**
 * 序列化渲染数据块
 * @param render_data 渲染数据指针
 * 
 * 该函数负责序列化渲染数据的主要数据块
 */
void serialize_render_data_blocks(uint32_t* render_data)
{
    uint8_t data_byte;
    uint32_t data_word;
    longlong in_RAX;
    uint8_t* byte_ptr;
    uint32_t* word_ptr;
    int* int_ptr;
    longlong block_size;
    int element_count;
    longlong element_offset;
    longlong processed_count;
    int current_index;
    longlong remaining_count;
    longlong chunk_count;
    uint32_t* render_data_ptr;
    
    // 检查序列化缓冲区空间
    if ((ulonglong)((in_RAX - (longlong)render_data) + get_serialization_context()[2]) < 5) {
        expand_serialization_buffer(get_serialization_context(), (longlong)render_data + (4 - *get_serialization_context()));
        render_data = (uint32_t*)get_serialization_context()[1];
    }
    
    *render_data = 1;
    get_serialization_context()[1] = get_serialization_context()[1] + 4;
    
    // 初始化渲染数据序列化
    initialize_render_data_serialization(&get_render_data_serialization_header(), *render_data_ptr);
    
    // 执行预序列化清理
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    
    // 计算资源列表大小
    block_size = (*(longlong*)(render_data_ptr + 0x4c) - *(longlong*)(render_data_ptr + 0x4a)) / 6 +
                (*(longlong*)(render_data_ptr + 0x4c) - *(longlong*)(render_data_ptr + 0x4a) >> 0x3f);
    
    int_ptr = (int*)get_serialization_context()[1];
    element_count = (int)(block_size >> 4) - (int)(block_size >> 0x3f);
    
    if ((ulonglong)((*get_serialization_context() - (longlong)int_ptr) + get_serialization_context()[2]) < 5) {
        expand_serialization_buffer(get_serialization_context(), (longlong)int_ptr + (4 - *get_serialization_context()));
        int_ptr = (int*)get_serialization_context()[1];
    }
    
    *int_ptr = element_count;
    get_serialization_context()[1] = get_serialization_context()[1] + 4;
    block_size = (longlong)element_count;
    
    // 序列化资源列表
    if (0 < element_count) {
        element_offset = 0;
        do {
            perform_serialization_cleanup();
            word_ptr = (uint32_t*)get_serialization_context()[1];
            data_word = *(uint32_t*)(element_offset + 0x58 + *(longlong*)(render_data_ptr + 0x4a));
            
            if ((ulonglong)((*get_serialization_context() - (longlong)word_ptr) + get_serialization_context()[2]) < 5) {
                expand_serialization_buffer(get_serialization_context(), (longlong)word_ptr + (4 - *get_serialization_context()));
                word_ptr = (uint32_t*)get_serialization_context()[1];
            }
            
            *word_ptr = data_word;
            get_serialization_context()[1] = get_serialization_context()[1] + 4;
            word_ptr = (uint32_t*)get_serialization_context()[1];
            data_word = *(uint32_t*)(element_offset + 0x5c + *(longlong*)(render_data_ptr + 0x4a));
            
            if ((ulonglong)((*get_serialization_context() - (longlong)word_ptr) + get_serialization_context()[2]) < 5) {
                expand_serialization_buffer(get_serialization_context(), (longlong)word_ptr + (4 - *get_serialization_context()));
                word_ptr = (uint32_t*)get_serialization_context()[1];
            }
            
            *word_ptr = data_word;
            get_serialization_context()[1] = get_serialization_context()[1] + 4;
            element_offset = element_offset + 0x60;
            block_size = block_size + -1;
        } while (block_size != 0);
    }
    
    // 执行中间序列化步骤
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    
    // 序列化元数据块
    chunk_count = 0x10;
    do {
        perform_serialization_cleanup();
        chunk_count = chunk_count + -1;
    } while (chunk_count != 0);
    
    // 序列化最终元数据
    serialize_final_metadata_extended(&get_final_metadata_extended_header(), render_data_ptr[0x1f2]);
    
    // 序列化扩展数据标记
    byte_ptr = (uint8_t*)get_serialization_context()[1];
    data_byte = *(uint8_t*)(render_data_ptr + 499);
    
    if ((ulonglong)((*get_serialization_context() - (longlong)byte_ptr) + get_serialization_context()[2]) < 2) {
        expand_serialization_buffer(get_serialization_context(), byte_ptr + (1 - *get_serialization_context()));
        byte_ptr = (uint8_t*)get_serialization_context()[1];
    }
    
    *byte_ptr = data_byte;
    get_serialization_context()[1] = get_serialization_context()[1] + 1;
    
    if (*(char*)(render_data_ptr + 499) == '\0') {
        return;
    }
    
    // 序列化扩展数据块
    serialize_extended_data_blocks(render_data_ptr, get_serialization_context());
}

/**
 * 序列化渲染资源列表
 * @param resource_index 资源索引
 * 
 * 该函数负责序列化指定索引的渲染资源列表
 */
void serialize_render_resource_list(uint resource_index)
{
    uint8_t data_byte;
    uint32_t data_word;
    longlong lVar3;
    uint8_t* byte_ptr;
    uint32_t* word_ptr;
    int* int_ptr;
    longlong* serialization_context;
    uint element_count;
    longlong block_size;
    int current_index;
    longlong processed_count;
    longlong chunk_count;
    ulonglong resource_offset;
    longlong unaff_RDI;
    longlong unaff_R14;
    
    resource_offset = (ulonglong)resource_index;
    
    // 序列化资源条目
    do {
        perform_serialization_cleanup();
        word_ptr = (uint32_t*)serialization_context[1];
        data_word = *(uint32_t*)(resource_offset + 0x58 + *(longlong*)(unaff_RDI + 0x128));
        
        if ((ulonglong)((*serialization_context - (longlong)word_ptr) + serialization_context[2]) < 5) {
            expand_serialization_buffer(serialization_context, (longlong)word_ptr + (4 - *serialization_context));
            word_ptr = (uint32_t*)serialization_context[1];
        }
        
        *word_ptr = data_word;
        serialization_context[1] = serialization_context[1] + 4;
        word_ptr = (uint32_t*)serialization_context[1];
        data_word = *(uint32_t*)(resource_offset + 0x5c + *(longlong*)(unaff_RDI + 0x128));
        
        if ((ulonglong)((*serialization_context - (longlong)word_ptr) + serialization_context[2]) < 5) {
            expand_serialization_buffer(serialization_context, (longlong)word_ptr + (4 - *serialization_context));
            word_ptr = (uint32_t*)serialization_context[1];
        }
        
        *word_ptr = data_word;
        serialization_context[1] = serialization_context[1] + 4;
        resource_offset = resource_offset + 0x60;
        unaff_R14 = unaff_R14 + -1;
    } while (unaff_R14 != 0);
    
    // 执行中间序列化步骤
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    
    // 序列化元数据块
    chunk_count = 0x10;
    do {
        perform_serialization_cleanup();
        chunk_count = chunk_count + -1;
    } while (chunk_count != 0);
    
    // 序列化最终元数据
    serialize_final_metadata_extended(&get_final_metadata_extended_header(), *(uint32_t*)(unaff_RDI + 0x7c8));
    
    // 序列化扩展数据标记
    byte_ptr = (uint8_t*)serialization_context[1];
    data_byte = *(uint8_t*)(unaff_RDI + 0x7cc);
    
    if ((ulonglong)((*serialization_context - (longlong)byte_ptr) + serialization_context[2]) < 2) {
        expand_serialization_buffer(serialization_context, byte_ptr + (1 - *serialization_context));
        byte_ptr = (uint8_t*)serialization_context[1];
    }
    
    *byte_ptr = data_byte;
    serialization_context[1] = serialization_context[1] + 1;
    
    if (*(char*)(unaff_RDI + 0x7cc) == '\0') {
        return;
    }
    
    // 序列化扩展数据块
    serialize_extended_data_blocks(unaff_RDI, serialization_context);
}

/**
 * 序列化渲染资源数据
 * 
 * 该函数负责序列化渲染资源数据
 */
void serialize_render_resource_data(void)
{
    uint8_t data_byte;
    uint32_t data_word;
    longlong lVar3;
    uint8_t* byte_ptr;
    uint32_t* word_ptr;
    int* int_ptr;
    longlong* serialization_context;
    int current_index;
    longlong block_size;
    longlong processed_count;
    longlong chunk_count;
    longlong unaff_RDI;
    
    // 执行预序列化清理
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    perform_serialization_cleanup();
    
    // 序列化元数据块
    chunk_count = 0x10;
    do {
        perform_serialization_cleanup();
        chunk_count = chunk_count + -1;
    } while (chunk_count != 0);
    
    // 序列化最终元数据
    serialize_final_metadata_extended(&get_final_metadata_extended_header(), *(uint32_t*)(unaff_RDI + 0x7c8));
    
    // 序列化扩展数据标记
    byte_ptr = (uint8_t*)serialization_context[1];
    data_byte = *(uint8_t*)(unaff_RDI + 0x7cc);
    
    if ((ulonglong)((*serialization_context - (longlong)byte_ptr) + serialization_context[2]) < 2) {
        expand_serialization_buffer(serialization_context, byte_ptr + (1 - *serialization_context));
        byte_ptr = (uint8_t*)serialization_context[1];
    }
    
    *byte_ptr = data_byte;
    serialization_context[1] = serialization_context[1] + 1;
    
    if (*(char*)(unaff_RDI + 0x7cc) == '\0') {
        return;
    }
    
    // 序列化扩展数据块
    serialize_extended_data_blocks(unaff_RDI, serialization_context);
}

// 内部辅助函数声明
static void initialize_render_data_serialization(void* header, uint32_t data);
static void perform_serialization_cleanup(void);
static void expand_serialization_buffer(void* context, longlong size);
static void serialize_resource_entry_extended(void* context, longlong offset);
static void serialize_final_metadata_extended(void* header, uint32_t data);
static void serialize_extended_data_blocks(uint32_t* data, void* context);
static void* get_render_data_serialization_header(void);
static void* get_final_metadata_extended_header(void);
static longlong* get_serialization_context(void);