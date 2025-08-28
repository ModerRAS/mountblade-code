#include "TaleWorlds.Native.Split.h"

// 03_rendering_part112.c - 渲染系统高级数据序列化和反序列化模块
// 包含5个核心函数，涵盖渲染数据序列化、反序列化、内存管理、文件操作和系统清理等高级渲染功能

// 常量定义
#define RENDERING_SERIALIZATION_BUFFER_SIZE 0x1000
#define RENDERING_MAX_DATA_BLOCKS 0xFFFF
#define RENDERING_HASH_TABLE_SIZE 0x1000
#define RENDERING_MUTEX_TIMEOUT 0x1000
#define RENDERING_MEMORY_ALIGNMENT 8
#define RENDERING_MAX_STRING_LENGTH 0x1000

// 渲染数据序列化器
// 函数别名：RenderingSystem_SerializeData
void FUN_180335980(longlong render_context, longlong file_handle, longlong data_size, undefined8 data_flags)
{
    int data_block_id;
    undefined8 header_data;
    longlong current_node;
    longlong node_data_start;
    undefined *data_ptr;
    longlong next_node;
    undefined *default_data_ptr;
    longlong buffer_ptr;
    uint *write_ptr;
    uint data_block_count;
    longlong buffer_offset;
    longlong start_node_ptr;
    uint *temp_write_ptr;
    longlong total_size;
    undefined2 buffer_flags;
    undefined1 buffer_type;
    
    // 初始化缓冲区
    total_size = 0;
    write_ptr = (uint *)0x0;
    buffer_offset = 0;
    buffer_flags = 0;
    buffer_type = 3;
    
    // 获取头部数据
    header_data = *(undefined8 *)(render_context + 0x898);
    start_node_ptr = data_size;
    
    // 初始化序列化缓冲区
    FUN_180639bf0(&total_size, 8, data_size, data_flags, 0xfffffffffffffffe);
    
    // 写入头部数据
    *(undefined8 *)write_ptr = header_data;
    temp_write_ptr = (uint *)((longlong)write_ptr + 8);
    start_node_ptr = render_context + 0x878;
    
    // 获取链表起始位置
    current_node = *(longlong *)(render_context + 0x880);
    buffer_ptr = total_size;
    write_ptr = temp_write_ptr;
    
    // 遍历数据节点链表
    if (current_node != start_node_ptr) {
        do {
            // 获取节点信息
            data_block_id = *(int *)(current_node + 0x20);
            node_data_start = *(longlong *)(current_node + 0x30);
            node_data_start = *(longlong *)(current_node + 0x28);
            
            // 检查缓冲区空间
            if ((ulonglong)((buffer_ptr - (longlong)temp_write_ptr) + buffer_offset) < 9) {
                FUN_180639bf0(&total_size, (longlong)temp_write_ptr + (8 - buffer_ptr));
                buffer_ptr = total_size;
                temp_write_ptr = write_ptr;
            }
            
            // 写入数据块ID
            *(longlong *)temp_write_ptr = (longlong)data_block_id;
            write_ptr = temp_write_ptr + 2;
            
            // 检查缓冲区空间
            if ((ulonglong)((buffer_ptr - (longlong)write_ptr) + buffer_offset) < 5) {
                FUN_180639bf0(&total_size, (longlong)write_ptr + (4 - buffer_ptr));
                buffer_ptr = total_size;
            }
            
            // 计算数据块大小
            data_block_count = (uint)(node_data_start - node_data_start >> 3);
            *write_ptr = data_block_count;
            temp_write_ptr = write_ptr + 1;
            write_ptr = temp_write_ptr;
            
            // 处理数据块内容
            if (0 < (int)data_block_count) {
                current_node = **(longlong **)(current_node + 0x28);
                data_block_count = *(uint *)(current_node + 0x98);
                
                // 检查缓冲区空间
                if ((ulonglong)((buffer_ptr - (longlong)temp_write_ptr) + buffer_offset) <= (ulonglong)data_block_count + 4) {
                    FUN_180639bf0(&total_size, (((ulonglong)data_block_count + 4) - buffer_ptr) + (longlong)temp_write_ptr);
                }
                
                // 写入数据块大小
                *write_ptr = data_block_count;
                write_ptr = write_ptr + 1;
                
                // 获取数据指针
                data_ptr = *(undefined **)(current_node + 0x90);
                default_data_ptr = &DAT_18098bc73;
                if (data_ptr != (undefined *)0x0) {
                    default_data_ptr = data_ptr;
                }
                
                // 复制数据内容
                memcpy(write_ptr, default_data_ptr, data_block_count);
            }
            
            // 移动到下一个节点
            current_node = func_0x00018066bd70(current_node);
        } while (current_node != start_node_ptr);
    }
    
    // 写入文件
    start_node_ptr = buffer_offset;
    fwrite(&start_node_ptr, 8, 1, *(undefined8 *)(file_handle + 8));
    fwrite(buffer_ptr, start_node_ptr, 1, *(undefined8 *)(file_handle + 8));
    
    // 清理缓冲区
    if (((char)buffer_flags == '\0') && (buffer_ptr != 0)) {
        FUN_18064e900(buffer_ptr);
    }
    
    return;
}

// 渲染数据反序列化器
// 函数别名：RenderingSystem_DeserializeData
void FUN_180335f10(longlong render_context, longlong file_handle, undefined8 deserialize_flags)
{
    undefined8 *render_node_ptr;
    longlong *render_data_ptr;
    ulonglong block_count;
    uint *block_size_ptr;
    undefined4 *material_data_ptr;
    undefined8 *texture_data_ptr;
    longlong data_size;
    undefined8 *render_object_ptr;
    undefined8 *render_resource_ptr;
    longlong current_size;
    undefined8 *render_buffer_ptr;
    int render_id;
    longlong stack_offset;
    undefined8 render_flags;
    ulonglong render_counter;
    undefined1 render_temp_data[8];
    longlong buffer_size;
    longlong *buffer_ptr;
    undefined8 buffer_data;
    undefined2 buffer_flags;
    undefined1 buffer_type;
    
    // 初始化缓冲区
    stack_offset = 0;
    render_flags = deserialize_flags;
    fread(&stack_offset, 8, 1, *(undefined8 *)(file_handle + 8));
    buffer_size = 0;
    buffer_ptr = (longlong *)0x0;
    buffer_data = 0;
    buffer_flags = 0;
    buffer_type = 3;
    
    // 分配缓冲区
    if (stack_offset != 0) {
        FUN_180639bf0(&buffer_size);
    }
    
    data_size = buffer_size;
    fread(buffer_size, stack_offset, 1, *(undefined8 *)(file_handle + 8));
    current_size = *buffer_ptr;
    buffer_ptr = buffer_ptr + 1;
    
    // 主处理循环
    do {
        if (current_size == 0) {
            // 清理缓冲区
            if (((char)buffer_flags == '\0') && (data_size != 0)) {
                FUN_18064e900(data_size);
            }
            return;
        }
        
        data_size = *buffer_ptr;
        block_size_ptr = (uint *)(buffer_ptr + 1);
        buffer_ptr = (longlong *)((longlong)buffer_ptr + 0xc);
        
        // 处理数据块
        if (0 < (int)*block_size_ptr) {
            render_node_ptr = (undefined8 *)(render_context + 0x878);
            render_id = (int)data_size;
            block_count = (ulonglong)render_flags >> 0x20;
            render_flags = CONCAT44((int)block_count, render_id);
            render_counter = (ulonglong)*block_size_ptr;
            
            do {
                // 创建渲染对象
                render_object_ptr = (undefined8 *)0x0;
                material_data_ptr = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18, 0xa8, 8, 3);
                render_data_ptr = (longlong *)(material_data_ptr + 0x22);
                
                // 设置渲染数据
                *render_data_ptr = (longlong)&UNK_18098bcb0;
                *(undefined8 *)(material_data_ptr + 0x24) = 0;
                material_data_ptr[0x26] = 0;
                
                *render_data_ptr = (longlong)&UNK_180a3c3e0;
                *(undefined8 *)(material_data_ptr + 0x28) = 0;
                *(undefined8 *)(material_data_ptr + 0x24) = 0;
                material_data_ptr[0x26] = 0;
                
                *material_data_ptr = 0xffffffff;
                (**(code **)(*render_data_ptr + 0x10))(render_data_ptr, &DAT_18098bc73);
                
                // 设置材质参数
                *(undefined8 *)(material_data_ptr + 1) = 0x3f800000;
                *(undefined8 *)(material_data_ptr + 3) = 0;
                *(undefined8 *)(material_data_ptr + 5) = 0x3f80000000000000;
                *(undefined8 *)(material_data_ptr + 7) = 0;
                *(undefined8 *)(material_data_ptr + 9) = 0;
                *(undefined8 *)(material_data_ptr + 0xb) = 0x3f800000;
                *(undefined8 *)(material_data_ptr + 0xd) = 0;
                *(undefined8 *)(material_data_ptr + 0xf) = 0x3f80000000000000;
                *(undefined8 *)(material_data_ptr + 0x11) = 0x3f800000;
                *(undefined8 *)(material_data_ptr + 0x13) = 0;
                *(undefined8 *)(material_data_ptr + 0x15) = 0x3f80000000000000;
                *(undefined8 *)(material_data_ptr + 0x17) = 0;
                material_data_ptr[0x19] = 0;
                material_data_ptr[0x1a] = 0;
                material_data_ptr[0x1b] = 0x3f800000;
                material_data_ptr[0x1c] = 0;
                material_data_ptr[0x1d] = 0;
                material_data_ptr[0x1e] = 0;
                material_data_ptr[0x1f] = 0;
                material_data_ptr[0x20] = 0x3f800000;
                
                // 应用材质
                FUN_18033a3f0(material_data_ptr, &buffer_size);
                
                // 插入渲染节点
                texture_data_ptr = render_node_ptr;
                render_resource_ptr = *(undefined8 **)(render_context + 0x888);
                while (render_resource_ptr != (undefined8 *)0x0) {
                    if (*(int *)(render_resource_ptr + 4) < render_id) {
                        render_resource_ptr = (undefined8 *)*render_resource_ptr;
                    }
                    else {
                        texture_data_ptr = render_resource_ptr;
                        render_resource_ptr = (undefined8 *)render_resource_ptr[1];
                    }
                }
                
                if ((texture_data_ptr == render_node_ptr) || (render_id < *(int *)(texture_data_ptr + 4))) {
                    texture_data_ptr = (undefined8 *)FUN_18020d730(render_node_ptr, render_temp_data);
                    texture_data_ptr = (undefined8 *)*texture_data_ptr;
                }
                
                render_buffer_ptr = (undefined8 *)texture_data_ptr[6];
                if (render_buffer_ptr < (undefined8 *)texture_data_ptr[7]) {
                    texture_data_ptr[6] = render_buffer_ptr + 1;
                    *render_buffer_ptr = material_data_ptr;
                }
                else {
                    // 重新分配缓冲区
                    render_object_ptr = (undefined8 *)texture_data_ptr[5];
                    data_size = (longlong)render_buffer_ptr - (longlong)render_object_ptr >> 3;
                    if (data_size == 0) {
                        data_size = 1;
                    render_buffer_realloc:
                        render_buffer_ptr = (undefined8 *)
                            FUN_18062b420(_DAT_180c8ed18, data_size * 8, *(undefined1 *)(texture_data_ptr + 8));
                        render_buffer_ptr = (undefined8 *)texture_data_ptr[6];
                        render_object_ptr = (undefined8 *)texture_data_ptr[5];
                    }
                    else {
                        data_size = data_size * 2;
                        if (data_size != 0) goto render_buffer_realloc;
                    }
                    
                    if (render_object_ptr != render_buffer_ptr) {
                        memmove(render_buffer_ptr, render_object_ptr, (longlong)render_buffer_ptr - (longlong)render_object_ptr);
                    }
                    
                    *render_buffer_ptr = material_data_ptr;
                    if (texture_data_ptr[5] != 0) {
                        FUN_18064e900();
                    }
                    
                    texture_data_ptr[5] = render_buffer_ptr;
                    texture_data_ptr[6] = render_buffer_ptr + 1;
                    texture_data_ptr[7] = render_buffer_ptr + data_size;
                }
                
                render_counter = render_counter - 1;
            } while (render_counter != 0);
            render_counter = 0;
        }
        
        current_size = current_size + -1;
        data_size = buffer_size;
    } while( true );
}

// 渲染系统高级序列化器
// 函数别名：RenderingSystem_AdvancedSerializer
void FUN_180336240(longlong render_context, longlong file_handle, longlong data_size, undefined8 serialization_flags)
{
    int block_id;
    undefined8 context_data;
    longlong node_start;
    longlong node_end;
    undefined *data_pointer;
    longlong next_node;
    undefined *default_pointer;
    uint *write_pointer;
    longlong buffer_position;
    uint block_count;
    longlong list_start;
    longlong buffer_size;
    uint *temp_pointer;
    longlong total_written;
    undefined2 buffer_flags;
    undefined1 buffer_type;
    
    // 初始化序列化缓冲区
    buffer_size = 0;
    temp_pointer = (uint *)0x0;
    total_written = 0;
    buffer_flags = 0;
    buffer_type = 3;
    
    // 获取上下文数据
    context_data = *(undefined8 *)(render_context + 0x8c8);
    list_start = data_size;
    
    // 初始化序列化过程
    FUN_180639bf0(&buffer_size, 8, data_size, serialization_flags, 0xfffffffffffffffe);
    
    // 写入上下文数据
    *(undefined8 *)temp_pointer = context_data;
    write_pointer = (uint *)((longlong)temp_pointer + 8);
    list_start = render_context + 0x8a8;
    
    // 获取数据链表
    next_node = *(longlong *)(render_context + 0x8b0);
    buffer_position = buffer_size;
    temp_pointer = write_pointer;
    
    // 遍历数据链表
    if (next_node != list_start) {
        do {
            // 获取节点信息
            block_id = *(int *)(next_node + 0x20);
            node_start = *(longlong *)(next_node + 0x30);
            node_end = *(longlong *)(next_node + 0x28);
            
            // 检查缓冲区空间
            if ((ulonglong)((total_written - (longlong)write_pointer) + buffer_position) < 9) {
                FUN_180639bf0(&buffer_size, (longlong)write_pointer + (8 - buffer_position));
                write_pointer = temp_pointer;
                buffer_position = buffer_size;
            }
            
            // 写入块ID
            *(longlong *)write_pointer = (longlong)block_id;
            temp_pointer = write_pointer + 2;
            
            // 检查缓冲区空间
            if ((ulonglong)((total_written - (longlong)temp_pointer) + buffer_position) < 5) {
                FUN_180639bf0(&buffer_size, (longlong)temp_pointer + (4 - buffer_position));
                buffer_position = buffer_size;
            }
            
            // 计算块大小
            block_count = (uint)(node_start - node_end >> 3);
            *temp_pointer = block_count;
            write_pointer = temp_pointer + 1;
            temp_pointer = write_pointer;
            
            // 处理数据块
            if (0 < (int)block_count) {
                next_node = **(longlong **)(next_node + 0x28);
                block_count = *(uint *)(next_node + 0x38);
                
                // 检查缓冲区空间
                if ((ulonglong)((total_written - (longlong)write_pointer) + buffer_position) <= (ulonglong)block_count + 4) {
                    FUN_180639bf0(&buffer_size, (((ulonglong)block_count + 4) - buffer_position) + (longlong)write_pointer);
                }
                
                // 写入块大小
                *temp_pointer = block_count;
                temp_pointer = temp_pointer + 1;
                
                // 获取数据指针
                data_pointer = *(undefined **)(next_node + 0x30);
                default_pointer = &DAT_18098bc73;
                if (data_pointer != (undefined *)0x0) {
                    default_pointer = data_pointer;
                }
                
                // 复制数据
                memcpy(temp_pointer, default_pointer, block_count);
            }
            
            // 移动到下一个节点
            next_node = func_0x00018066bd70(next_node);
        } while (next_node != list_start);
    }
    
    // 写入文件
    list_start = total_written;
    fwrite(&list_start, 8, 1, *(undefined8 *)(file_handle + 8));
    fwrite(buffer_position, list_start, 1, *(undefined8 *)(file_handle + 8));
    
    // 清理缓冲区
    if (((char)buffer_flags == '\0') && (buffer_position != 0)) {
        FUN_18064e900(buffer_position);
    }
    
    return;
}

// 渲染系统高级反序列化器
// 函数别名：RenderingSystem_AdvancedDeserializer
void FUN_180336540(longlong render_context, longlong file_handle, undefined8 deserialization_flags)
{
    longlong *render_manager_ptr;
    undefined8 *render_node_ptr;
    uint render_data_size;
    undefined8 render_header;
    ulonglong block_counter;
    undefined4 *render_material_ptr;
    undefined8 *render_texture_ptr;
    longlong buffer_size;
    undefined8 *render_object_ptr;
    longlong current_size;
    undefined8 *render_buffer_ptr;
    uint *block_size_ptr;
    undefined8 *render_resource_ptr;
    int render_id;
    uint *data_pointer;
    undefined8 *render_allocator_ptr;
    undefined4 render_value;
    longlong stack_offset;
    undefined8 render_flags;
    ulonglong render_count;
    undefined1 render_temp[8];
    longlong buffer_capacity;
    uint *buffer_data_ptr;
    undefined8 buffer_content;
    undefined2 buffer_flags;
    undefined1 buffer_type;
    
    // 初始化缓冲区
    stack_offset = 0;
    render_flags = deserialization_flags;
    fread(&stack_offset, 8, 1, *(undefined8 *)(file_handle + 8));
    buffer_capacity = 0;
    buffer_data_ptr = (uint *)0x0;
    buffer_content = 0;
    buffer_flags = 0;
    buffer_type = 3;
    
    // 分配缓冲区
    if (stack_offset != 0) {
        FUN_180639bf0(&buffer_capacity);
    }
    
    buffer_size = buffer_capacity;
    fread(buffer_capacity, stack_offset, 1, *(undefined8 *)(file_handle + 8));
    current_size = *(longlong *)buffer_data_ptr;
    data_pointer = (uint *)((longlong)buffer_data_ptr + 8);
    buffer_data_ptr = data_pointer;
    
    // 主处理循环
    do {
        if (current_size == 0) {
            // 清理缓冲区
            if (((char)buffer_flags == '\0') && (buffer_size != 0)) {
                FUN_18064e900(buffer_size);
            }
            return;
        }
        
        render_header = *(undefined8 *)data_pointer;
        block_size_ptr = data_pointer + 2;
        data_pointer = data_pointer + 3;
        buffer_data_ptr = data_pointer;
        
        // 处理数据块
        if (0 < (int)*block_size_ptr) {
            render_node_ptr = (undefined8 *)(render_context + 0x8a8);
            render_id = (int)render_header;
            block_counter = (ulonglong)render_flags >> 0x20;
            render_flags = CONCAT44((int)block_counter, render_id);
            render_count = (ulonglong)*block_size_ptr;
            
            do {
                // 创建渲染对象
                render_material_ptr = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18, 0x48, 8, 3);
                render_manager_ptr = (longlong *)(render_material_ptr + 10);
                
                // 设置渲染管理器
                *render_manager_ptr = (longlong)&UNK_18098bcb0;
                *(undefined8 *)(render_material_ptr + 0xc) = 0;
                render_material_ptr[0xe] = 0;
                
                *render_manager_ptr = (longlong)&UNK_180a3c3e0;
                *(undefined8 *)(render_material_ptr + 0x10) = 0;
                *(undefined8 *)(render_material_ptr + 0xc) = 0;
                render_material_ptr[0xe] = 0;
                
                *render_material_ptr = 0xffffffff;
                (**(code **)(*render_manager_ptr + 0x10))(render_manager_ptr, &DAT_18098bc73);
                
                // 初始化渲染参数
                *(undefined8 *)(render_material_ptr + 1) = 0;
                *(undefined8 *)(render_material_ptr + 3) = 0;
                render_value = 0;
                render_material_ptr[5] = 0;
                render_material_ptr[6] = 0;
                render_material_ptr[7] = 0;
                render_material_ptr[8] = 0;
                
                // 处理渲染数据
                render_data_size = *data_pointer;
                data_pointer = data_pointer + 1;
                if (render_data_size != 0) {
                    buffer_data_ptr = data_pointer;
                    render_value = (**(code **)(*render_manager_ptr + 0x18))(render_manager_ptr, data_pointer, render_data_size);
                    data_pointer = (uint *)((longlong)data_pointer + (ulonglong)render_data_size);
                }
                
                // 复制渲染数据
                render_material_ptr[1] = *data_pointer;
                render_material_ptr[2] = data_pointer[1];
                render_material_ptr[3] = data_pointer[2];
                render_material_ptr[4] = data_pointer[3];
                render_material_ptr[5] = data_pointer[4];
                render_material_ptr[6] = data_pointer[5];
                render_material_ptr[7] = data_pointer[6];
                render_material_ptr[8] = data_pointer[7];
                data_pointer = data_pointer + 8;
                buffer_data_ptr = data_pointer;
                
                // 应用渲染值
                render_value = FUN_1800c17c0(render_value, render_manager_ptr);
                *render_material_ptr = render_value;
                
                // 插入渲染节点
                render_texture_ptr = render_node_ptr;
                render_resource_ptr = *(undefined8 **)(render_context + 0x8b8);
                while (render_resource_ptr != (undefined8 *)0x0) {
                    if (*(int *)(render_resource_ptr + 4) < render_id) {
                        render_resource_ptr = (undefined8 *)*render_resource_ptr;
                    }
                    else {
                        render_texture_ptr = render_resource_ptr;
                        render_resource_ptr = (undefined8 *)render_resource_ptr[1];
                    }
                }
                
                if ((render_texture_ptr == render_node_ptr) || (render_id < *(int *)(render_texture_ptr + 4))) {
                    render_texture_ptr = (undefined8 *)FUN_18020d730(render_node_ptr, render_temp);
                    render_texture_ptr = (undefined8 *)*render_texture_ptr;
                }
                
                render_buffer_ptr = (undefined8 *)render_texture_ptr[6];
                if (render_buffer_ptr < (undefined8 *)render_texture_ptr[7]) {
                    render_texture_ptr[6] = render_buffer_ptr + 1;
                    *render_buffer_ptr = render_material_ptr;
                }
                else {
                    // 重新分配缓冲区
                    render_object_ptr = (undefined8 *)render_texture_ptr[5];
                    buffer_size = (longlong)render_buffer_ptr - (longlong)render_object_ptr >> 3;
                    if (buffer_size == 0) {
                        buffer_size = 1;
                    render_buffer_resize:
                        render_allocator_ptr = (undefined8 *)
                            FUN_18062b420(_DAT_180c8ed18, buffer_size * 8, *(undefined1 *)(render_texture_ptr + 8));
                        render_buffer_ptr = (undefined8 *)render_texture_ptr[6];
                        render_object_ptr = (undefined8 *)render_texture_ptr[5];
                    }
                    else {
                        buffer_size = buffer_size * 2;
                        if (buffer_size != 0) goto render_buffer_resize;
                        render_allocator_ptr = (undefined8 *)0x0;
                    }
                    
                    if (render_object_ptr != render_buffer_ptr) {
                        memmove(render_allocator_ptr, render_object_ptr, (longlong)render_buffer_ptr - (longlong)render_object_ptr);
                    }
                    
                    *render_allocator_ptr = render_material_ptr;
                    if (render_texture_ptr[5] != 0) {
                        FUN_18064e900();
                    }
                    
                    render_texture_ptr[5] = render_allocator_ptr;
                    render_texture_ptr[6] = render_allocator_ptr + 1;
                    render_texture_ptr[7] = render_allocator_ptr + buffer_size;
                }
                
                render_count = render_count - 1;
            } while (render_count != 0);
            render_count = 0;
        }
        
        current_size = current_size + -1;
        buffer_size = buffer_capacity;
    } while( true );
}

// 渲染系统资源清理器
// 函数别名：RenderingSystem_ResourceCleaner
void FUN_1803368b0(longlong render_context, uint resource_id)
{
    ulonglong *hash_table_ptr;
    uint resource_key;
    longlong *resource_data_ptr;
    undefined8 *resource_node_ptr;
    int mutex_result;
    longlong *cleanup_manager_ptr;
    uint *hash_entry_ptr;
    uint *hash_collision_ptr;
    ulonglong hash_value;
    longlong resource_size;
    undefined8 *resource_buffer_ptr;
    longlong cleanup_offset;
    uint *current_hash_ptr;
    longlong hash_table_size;
    undefined8 *resource_allocator_ptr;
    undefined8 *resource_manager_ptr;
    undefined8 resource_header;
    ulonglong cleanup_counter;
    uint *temp_hash_ptr;
    uint *cleanup_hash_ptr;
    undefined8 *cleanup_allocator_ptr;
    uint *stack_hash_ptr_a8;
    uint *stack_hash_ptr_a0;
    undefined8 stack_data_98;
    undefined4 stack_data_90;
    uint *stack_hash_ptr_88;
    uint *stack_hash_ptr_80;
    undefined8 stack_data_78;
    undefined4 stack_data_70;
    undefined8 stack_data_68;
    longlong *stack_manager_ptr;
    undefined8 *stack_buffer_ptr;
    undefined8 stack_data_50;
    
    // 初始化清理过程
    stack_data_50 = 0x1803368e3;
    resource_header = _ftelli64(*(undefined8 *)(*(longlong *)(render_context + 0x200) + 8));
    stack_data_50 = 0x1803368f8;
    resource_header = FUN_18032c9f0(render_context, *(undefined8 *)(render_context + 0x200), resource_header, resource_id);
    stack_data_50 = 0x180336910;
    
    // 锁定互斥量
    mutex_result = _Mtx_lock(render_context + 0x280);
    if (mutex_result != 0) {
        stack_data_50 = 0x18033691c;
        __Throw_C_error_std__YAXH_Z(mutex_result);
    }
    
    // 更新资源状态
    stack_data_50 = 0x18033692f;
    FUN_180057340(render_context + 0x260, (longlong)(int)(resource_id + 1));
    *(undefined8 *)(*(longlong *)(render_context + 0x260) + (longlong)(int)resource_id * 8) = resource_header;
    *(int *)(render_context + 0x228) = *(int *)(render_context + 0x228) + 1;
    
    // 解锁互斥量
    stack_data_50 = 0x180336949;
    mutex_result = _Mtx_unlock(render_context + 0x280);
    if (mutex_result != 0) {
        stack_data_50 = 0x180336955;
        __Throw_C_error_std__YAXH_Z(mutex_result);
    }
    
    // 初始化哈希表
    cleanup_counter = (ulonglong)resource_id;
    stack_data_68 = 0xfffffffffffffffe;
    cleanup_manager_ptr = (longlong *)FUN_18062b1e0(_DAT_180c8ed18, 0xe0, 8, 3);
    FUN_180049830(cleanup_manager_ptr);
    
    *cleanup_manager_ptr = (longlong)&UNK_180a1b248;
    hash_table_ptr = (ulonglong *)(cleanup_manager_ptr + 0x18);
    *hash_table_ptr = 0;
    cleanup_manager_ptr[0x19] = 0;
    cleanup_manager_ptr[0x1a] = 0;
    *(undefined4 *)(cleanup_manager_ptr + 0x1b) = 3;
    
    stack_manager_ptr = cleanup_manager_ptr;
    (**(code **)(*cleanup_manager_ptr + 0x28))(cleanup_manager_ptr);
    
    // 锁定资源互斥量
    mutex_result = _Mtx_lock(render_context + 0xa20);
    if (mutex_result != 0) {
        __Throw_C_error_std__YAXH_Z(mutex_result);
    }
    
    // 初始化哈希表指针
    stack_hash_ptr_88 = (uint *)0x0;
    stack_hash_ptr_80 = (uint *)0x0;
    stack_data_78 = 0;
    stack_data_70 = 3;
    
    // 构建资源哈希表
    FUN_18032b1c0(render_context, &stack_hash_ptr_88, cleanup_counter, 1);
    if (stack_hash_ptr_88 != stack_hash_ptr_80) {
        hash_entry_ptr = stack_hash_ptr_88;
        do {
            resource_key = *hash_entry_ptr;
            hash_value = (ulonglong)resource_key % (ulonglong)*(uint *)(render_context + 0xa00);
            
            // 查找哈希冲突
            for (hash_collision_ptr = *(uint **)(*(longlong *)(render_context + 0x9f8) + hash_value * 8); 
                 hash_collision_ptr != (uint *)0x0;
                 hash_collision_ptr = *(uint **)(hash_collision_ptr + 4)) {
                if (resource_key == *hash_collision_ptr) {
                    if (hash_collision_ptr != (uint *)0x0) goto hash_found;
                    break;
                }
            }
            
            // 创建新的哈希条目
            FUN_18066c220(render_context + 0xa10, &stack0x00000018, (ulonglong)*(uint *)(render_context + 0xa00),
                          *(undefined4 *)(render_context + 0xa08), 1);
            hash_collision_ptr = (uint *)FUN_18062b420(_DAT_180c8ed18, 0x18, *(undefined1 *)(render_context + 0xa1c));
            
            *hash_collision_ptr = resource_key;
            hash_collision_ptr[2] = 0;
            hash_collision_ptr[3] = 0;
            hash_collision_ptr[4] = 0;
            hash_collision_ptr[5] = 0;
            
            if ((char)hash_table_ptr != '\0') {
                hash_value = (ulonglong)resource_key % ((ulonglong)hash_table_ptr >> 0x20);
                FUN_18033bf30(render_context + 0x9f0);
            }
            
            *(undefined8 *)(hash_collision_ptr + 4) = *(undefined8 *)(*(longlong *)(render_context + 0x9f8) + hash_value * 8);
            *(uint **)(*(longlong *)(render_context + 0x9f8) + hash_value * 8) = hash_collision_ptr;
            *(longlong *)(render_context + 0xa08) = *(longlong)(render_context + 0xa08) + 1;
            
        hash_found:
            resource_size = *(longlong *)(hash_collision_ptr + 2);
            resource_header = 0;
            hash_table_size = *(longlong *)(resource_size + 8);
            
            // 查找资源ID
            for (hash_collision_ptr = *(uint **)(hash_table_size + (cleanup_counter % (ulonglong)*(uint *)(resource_size + 0x10)) * 8);
                 hash_collision_ptr != (uint *)0x0; 
                 hash_collision_ptr = *(uint **)(hash_collision_ptr + 4)) {
                if (resource_id == *hash_collision_ptr) {
                    hash_value = *(ulonglong *)(resource_size + 0x10);
                    goto resource_found;
                }
            }
            
            hash_value = *(ulonglong *)(resource_size + 0x10);
            hash_collision_ptr = *(uint **)(hash_table_size + hash_value * 8);
            
        resource_found:
            if (hash_collision_ptr != *(uint **)(hash_table_size + hash_value * 8)) {
                resource_header = *(undefined8 *)(hash_collision_ptr + 2);
                hash_collision_ptr = (uint *)(hash_table_size + (cleanup_counter % (hash_value & 0xffffffff)) * 8);
                temp_hash_ptr = *(uint **)hash_collision_ptr;
                
                // 查找并移除资源
                while ((temp_hash_ptr != (uint *)0x0 && (resource_id != *temp_hash_ptr))) {
                    hash_collision_ptr = temp_hash_ptr + 4;
                    temp_hash_ptr = *(uint **)hash_collision_ptr;
                }
                
                cleanup_hash_ptr = (uint *)0x0;
                if (temp_hash_ptr != (uint *)0x0) {
                    do {
                        current_hash_ptr = temp_hash_ptr;
                        if (resource_id != *current_hash_ptr) break;
                        
                        *(undefined8 *)hash_collision_ptr = *(undefined8 *)(current_hash_ptr + 4);
                        *(uint **)(current_hash_ptr + 4) = cleanup_hash_ptr;
                        *(longlong *)(resource_size + 0x18) = *(longlong)(resource_size + 0x18) + -1;
                        temp_hash_ptr = *(uint **)hash_collision_ptr;
                        cleanup_hash_ptr = current_hash_ptr;
                    } while (*(uint **)hash_collision_ptr != (uint *)0x0);
                    
                    if (cleanup_hash_ptr != (uint *)0x0) {
                        FUN_18064e900(cleanup_hash_ptr);
                    }
                }
            }
            
            // 添加到清理列表
            resource_allocator_ptr = (undefined8 *)cleanup_manager_ptr[0x19];
            if (resource_allocator_ptr < (undefined8 *)cleanup_manager_ptr[0x1a]) {
                cleanup_manager_ptr[0x19] = (longlong)(resource_allocator_ptr + 1);
                *resource_allocator_ptr = resource_header;
            }
            else {
                // 重新分配清理缓冲区
                resource_manager_ptr = (undefined8 *)*hash_table_ptr;
                resource_size = (longlong)resource_allocator_ptr - (longlong)resource_manager_ptr >> 3;
                if (resource_size == 0) {
                    resource_size = 1;
                cleanup_buffer_resize:
                    resource_buffer_ptr = (undefined8 *)FUN_18062b420(_DAT_180c8ed18, resource_size * 8, (char)cleanup_manager_ptr[0x1b]);
                    resource_allocator_ptr = (undefined8 *)cleanup_manager_ptr[0x19];
                    resource_manager_ptr = (undefined8 *)*hash_table_ptr;
                }
                else {
                    resource_size = resource_size * 2;
                    if (resource_size != 0) goto cleanup_buffer_resize;
                    resource_buffer_ptr = (undefined8 *)0x0;
                }
                
                if (resource_manager_ptr != resource_allocator_ptr) {
                    memmove(resource_buffer_ptr, resource_manager_ptr, (longlong)resource_allocator_ptr - (longlong)resource_manager_ptr);
                }
                
                *resource_buffer_ptr = resource_header;
                if (*hash_table_ptr != 0) {
                    FUN_18064e900();
                }
                
                *hash_table_ptr = (ulonglong)resource_buffer_ptr;
                cleanup_manager_ptr[0x19] = (longlong)(resource_buffer_ptr + 1);
                cleanup_manager_ptr[0x1a] = (longlong)(resource_buffer_ptr + resource_size);
            }
            
            hash_entry_ptr = hash_entry_ptr + 1;
        } while (hash_entry_ptr != stack_hash_ptr_80);
    }
    
    // 清理哈希表
    if (stack_hash_ptr_88 != (uint *)0x0) {
        FUN_18064e900();
    }
    
    // 解锁互斥量
    mutex_result = _Mtx_unlock(render_context + 0xa20);
    if (mutex_result != 0) {
        __Throw_C_error_std__YAXH_Z(mutex_result);
    }
    
    // 清理资源管理器
    resource_header = _DAT_180c82868;
    (**(code **)(*cleanup_manager_ptr + 0x28))(cleanup_manager_ptr);
    FUN_18005e110(resource_header, &stack0x00000018);
    
    // 第二阶段清理
    stack_hash_ptr_a8 = (uint *)0x0;
    stack_hash_ptr_a0 = (uint *)0x0;
    stack_data_98 = 0;
    stack_data_90 = 3;
    
    FUN_18032afa0(render_context, &stack_hash_ptr_a8, cleanup_counter);
    if (stack_hash_ptr_a8 != stack_hash_ptr_a0) {
        hash_entry_ptr = stack_hash_ptr_a8;
        do {
            resource_key = *hash_entry_ptr;
            hash_value = (ulonglong)resource_key % (ulonglong)*(uint *)(render_context + 0x6c8);
            
            // 查找哈希冲突
            for (hash_collision_ptr = *(uint **)(*(longlong *)(render_context + 0x6c0) + hash_value * 8); 
                 hash_collision_ptr != (uint *)0x0;
                 hash_collision_ptr = *(uint **)(hash_collision_ptr + 4)) {
                if (resource_key == *hash_collision_ptr) {
                    if (hash_collision_ptr != (uint *)0x0) goto second_hash_found;
                    break;
                }
            }
            
            // 创建新的哈希条目
            FUN_18066c220(render_context + 0x6d8, &stack0x00000018, (ulonglong)*(uint *)(render_context + 0x6c8),
                          *(undefined4 *)(render_context + 0x6d0), 1);
            hash_collision_ptr = (uint *)FUN_18062b420(_DAT_180c8ed18, 0x18, *(undefined1 *)(render_context + 0x6e4));
            
            *hash_collision_ptr = resource_key;
            hash_collision_ptr[2] = 0;
            hash_collision_ptr[3] = 0;
            hash_collision_ptr[4] = 0;
            hash_collision_ptr[5] = 0;
            
            if ((char)cleanup_manager_ptr != '\0') {
                hash_value = (ulonglong)resource_key % ((ulonglong)cleanup_manager_ptr >> 0x20);
                FUN_18033bf30(render_context + 0x6b8);
            }
            
            *(undefined8 *)(hash_collision_ptr + 4) = *(undefined8 *)(*(longlong *)(render_context + 0x6c0) + hash_value * 8);
            *(uint **)(*(longlong *)(render_context + 0x6c0) + hash_value * 8) = hash_collision_ptr;
            *(longlong *)(render_context + 0x6d0) = *(longlong)(render_context + 0x6d0) + 1;
            
        second_hash_found:
            resource_size = *(longlong *)(hash_collision_ptr + 2);
            hash_table_size = *(longlong *)(resource_size + 8);
            
            // 查找资源ID
            for (hash_collision_ptr = *(uint **)(hash_table_size + (cleanup_counter % (ulonglong)*(uint *)(resource_size + 0x10)) * 8);
                 hash_collision_ptr != (uint *)0x0; 
                 hash_collision_ptr = *(uint **)(hash_collision_ptr + 4)) {
                if (resource_id == *hash_collision_ptr) {
                    cleanup_offset = *(longlong *)(resource_size + 0x10);
                    goto second_resource_found;
                }
            }
            
            cleanup_offset = *(longlong *)(resource_size + 0x10);
            hash_collision_ptr = *(uint **)(hash_table_size + cleanup_offset * 8);
            
        second_resource_found:
            if (hash_collision_ptr != *(uint **)(hash_table_size + cleanup_offset * 8)) {
                if (*(longlong *)(hash_collision_ptr + 2) != 0) {
                    *(undefined **)(*(longlong *)(hash_collision_ptr + 2) + 0x50) = &UNK_18098bcb0;
                    FUN_18064e900();
                }
                
                hash_collision_ptr[2] = 0;
                hash_collision_ptr[3] = 0;
                hash_collision_ptr = (uint *)(*(longlong *)(resource_size + 8) +
                                         (cleanup_counter % (ulonglong)*(uint *)(resource_size + 0x10)) * 8);
                temp_hash_ptr = *(uint **)hash_collision_ptr;
                
                // 查找并移除资源
                while ((temp_hash_ptr != (uint *)0x0 && (resource_id != *temp_hash_ptr))) {
                    hash_collision_ptr = temp_hash_ptr + 4;
                    temp_hash_ptr = *(uint **)hash_collision_ptr;
                }
                
                cleanup_hash_ptr = (uint *)0x0;
                if (temp_hash_ptr != (uint *)0x0) {
                    do {
                        current_hash_ptr = temp_hash_ptr;
                        if (resource_id != *current_hash_ptr) break;
                        
                        *(undefined8 *)hash_collision_ptr = *(undefined8 *)(current_hash_ptr + 4);
                        *(uint **)(current_hash_ptr + 4) = cleanup_hash_ptr;
                        *(longlong *)(resource_size + 0x18) = *(longlong)(resource_size + 0x18) + -1;
                        temp_hash_ptr = *(uint **)hash_collision_ptr;
                        cleanup_hash_ptr = current_hash_ptr;
                    } while (*(uint **)hash_collision_ptr != (uint *)0x0);
                    
                    if (cleanup_hash_ptr != (uint *)0x0) {
                        FUN_18064e900(cleanup_hash_ptr);
                    }
                }
            }
            
            hash_entry_ptr = hash_entry_ptr + 1;
        } while (hash_entry_ptr != stack_hash_ptr_a0);
    }
    
    // 最终清理阶段
    resource_size = *(longlong *)(render_context + 0x570);
    for (hash_entry_ptr = *(uint **)(resource_size + (cleanup_counter % (ulonglong)*(uint *)(render_context + 0x578)) * 8);
         hash_entry_ptr != (uint *)0x0; 
         hash_entry_ptr = *(uint **)(hash_entry_ptr + 4)) {
        if (resource_id == *hash_entry_ptr) {
            hash_table_size = *(longlong)(render_context + 0x578);
            goto final_cleanup;
        }
    }
    
    hash_table_size = *(longlong)(render_context + 0x578);
    hash_entry_ptr = *(uint **)(resource_size + hash_table_size * 8);
    
final_cleanup:
    if (hash_entry_ptr != *(uint **)(resource_size + hash_table_size * 8)) {
        resource_data_ptr = *(longlong **)(hash_entry_ptr + 2);
        if (resource_data_ptr != (longlong *)0x0) {
            if (*resource_data_ptr == 0) {
                FUN_18064e900(resource_data_ptr);
            }
            FUN_18064e900();
        }
        
        hash_entry_ptr[2] = 0;
        hash_entry_ptr[3] = 0;
        hash_entry_ptr = (uint *)(*(longlong)(render_context + 0x570) +
                         (cleanup_counter % (ulonglong)*(uint *)(render_context + 0x578)) * 8);
        hash_collision_ptr = *(uint **)hash_entry_ptr;
        
        // 查找并移除资源
        while ((hash_collision_ptr != (uint *)0x0 && (resource_id != *hash_collision_ptr))) {
            hash_entry_ptr = hash_collision_ptr + 4;
            hash_collision_ptr = *(uint **)hash_entry_ptr;
        }
        
        temp_hash_ptr = (uint *)0x0;
        if (hash_collision_ptr != (uint *)0x0) {
            do {
                cleanup_hash_ptr = hash_collision_ptr;
                if (resource_id != *cleanup_hash_ptr) break;
                
                *(undefined8 *)hash_entry_ptr = *(undefined8 *)(cleanup_hash_ptr + 4);
                *(uint **)(cleanup_hash_ptr + 4) = temp_hash_ptr;
                *(longlong)(render_context + 0x580) = *(longlong)(render_context + 0x580) + -1;
                hash_collision_ptr = *(uint **)hash_entry_ptr;
                temp_hash_ptr = cleanup_hash_ptr;
            } while (*(uint **)hash_entry_ptr != (uint *)0x0);
            
            if (temp_hash_ptr != (uint *)0x0) {
                FUN_18064e900(temp_hash_ptr);
            }
        }
    }
    
    // 清理渲染节点
    resource_allocator_ptr = (undefined8 *)(render_context + 0x818);
    resource_buffer_ptr = resource_allocator_ptr;
    resource_manager_ptr = *(undefined8 **)(render_context + 0x828);
    
    // 查找渲染节点
    while (render_node_ptr = resource_allocator_ptr, resource_node_ptr = *(undefined8 **)(render_context + 0x828), 
           resource_manager_ptr != (undefined8 *)0x0) {
        if (resource_id < *(uint *)(resource_manager_ptr + 4)) {
            resource_buffer_ptr = resource_manager_ptr;
            resource_manager_ptr = (undefined8 *)resource_manager_ptr[1];
        }
        else {
            resource_manager_ptr = (undefined8 *)*resource_manager_ptr;
        }
    }
    
    while (hash_entry_ptr = stack_hash_ptr_a8, resource_node_ptr != (undefined8 *)0x0) {
        if (*(uint *)(resource_node_ptr + 4) < resource_id) {
            resource_node_ptr = (undefined8 *)*resource_node_ptr;
        }
        else {
            render_node_ptr = resource_node_ptr;
            resource_node_ptr = (undefined8 *)resource_node_ptr[1];
        }
    }
    
    // 清理渲染对象
    while (stack_hash_ptr_a8 = hash_entry_ptr, render_node_ptr != resource_buffer_ptr) {
        resource_size = render_node_ptr[5];
        if (resource_size != 0) {
            FUN_1808fc8a8(resource_size + 0x38, 0x30, 4, FUN_18004a130);
            stack_buffer_ptr = (undefined8 *)(resource_size + 0x18);
            *stack_buffer_ptr = &UNK_180a3c3e0;
            
            if (*(longlong *)(resource_size + 0x20) == 0) {
                *(undefined8 *)(resource_size + 0x20) = 0;
                *(undefined4 *)(resource_size + 0x30) = 0;
                *stack_buffer_ptr = &UNK_18098bcb0;
                FUN_18064e900(resource_size);
            }
            FUN_18064e900();
        }
        
        render_node_ptr = (undefined8 *)func_0x00018066bd70(render_node_ptr);
        hash_entry_ptr = stack_hash_ptr_a8;
    }
    
    // 清理系统资源
    FUN_18033ad80(render_context + 0x4a8, &stack0x00000010);
    FUN_18033ad80(render_context + 0x638, &stack0x00000010);
    
    // 最终节点清理
    resource_buffer_ptr = resource_allocator_ptr;
    resource_manager_ptr = *(undefined8 **)(render_context + 0x828);
    
    while (render_node_ptr = resource_allocator_ptr, resource_node_ptr = *(undefined8 **)(render_context + 0x828), 
           resource_manager_ptr != (undefined8 *)0x0) {
        if (resource_id < *(uint *)(resource_manager_ptr + 4)) {
            resource_buffer_ptr = resource_manager_ptr;
            resource_manager_ptr = (undefined8 *)resource_manager_ptr[1];
        }
        else {
            resource_manager_ptr = (undefined8 *)*resource_manager_ptr;
        }
    }
    
    while (resource_manager_ptr = render_node_ptr, resource_node_ptr != (undefined8 *)0x0) {
        if (*(uint *)(resource_node_ptr + 4) < resource_id) {
            resource_node_ptr = (undefined8 *)*resource_node_ptr;
        }
        else {
            render_node_ptr = resource_node_ptr;
            resource_node_ptr = (undefined8 *)resource_node_ptr[1];
        }
    }
    
    // 清理剩余节点
    for (; resource_manager_ptr != resource_buffer_ptr; 
         resource_manager_ptr = (undefined8 *)func_0x00018066bd70(resource_manager_ptr)) {
    }
    
    // 处理特殊情况
    if ((render_node_ptr == *(undefined8 **)(render_context + 0x820)) && (resource_buffer_ptr == resource_allocator_ptr)) {
        resource_manager_ptr = *(undefined8 **)(render_context + 0x828);
        if (resource_manager_ptr != (undefined8 *)0x0) {
            FUN_18004b790(resource_allocator_ptr, *resource_manager_ptr);
            FUN_18064e900(resource_manager_ptr);
        }
        
        *resource_allocator_ptr = resource_allocator_ptr;
        *(undefined8 **)(render_context + 0x820) = resource_allocator_ptr;
        *(undefined8 *)(render_context + 0x828) = 0;
        *(undefined1 *)(render_context + 0x830) = 0;
        *(undefined8 *)(render_context + 0x838) = 0;
    }
    else {
        // 清理链表节点
        while (resource_manager_ptr = render_node_ptr, resource_manager_ptr != resource_buffer_ptr) {
            *(longlong *)(render_context + 0x838) = *(longlong)(render_context + 0x838) + -1;
            render_node_ptr = (undefined8 *)func_0x00018066bd70(resource_manager_ptr);
            FUN_18066ba00(resource_manager_ptr, resource_allocator_ptr);
            
            if (resource_manager_ptr != (undefined8 *)0x0) {
                FUN_18064e900(resource_manager_ptr);
            }
        }
    }
    
    // 最终清理
    if (hash_entry_ptr == (uint *)0x0) {
        (**(code **)(*cleanup_manager_ptr + 0x38))();
        return;
    }
    
    FUN_18064e900(hash_entry_ptr);
}

// 技术说明：
// 本模块实现了渲染系统的高级数据序列化和反序列化功能，包含以下核心技术：
// 1. 渲染数据序列化：将渲染数据结构转换为可存储或传输的格式
// 2. 渲染数据反序列化：从存储或网络数据中重建渲染数据结构
// 3. 内存管理：高效的内存分配和释放机制
// 4. 文件操作：数据的读写操作
// 5. 资源清理：安全的资源释放和内存清理
// 6. 哈希表管理：快速的资源查找和管理
// 7. 互斥量同步：线程安全的资源访问
// 8. 链表操作：高效的数据结构管理
// 9. 缓冲区管理：动态的内存缓冲区调整
// 10. 错误处理：完善的错误检测和处理机制

// 函数别名定义：
#define RenderingSystem_SerializeData FUN_180335980
#define RenderingSystem_DeserializeData FUN_180335f10
#define RenderingSystem_AdvancedSerializer FUN_180336240
#define RenderingSystem_AdvancedDeserializer FUN_180336540
#define RenderingSystem_ResourceCleaner FUN_1803368b0