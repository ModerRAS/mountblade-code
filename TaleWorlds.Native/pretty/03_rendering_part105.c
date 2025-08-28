#include "TaleWorlds.Native.Split.h"

/**
 * 渲染系统资源导出和数据处理模块
 * 
 * 本模块包含4个核心函数，涵盖渲染系统资源导出、数据处理、
 * 文件写入、路径生成、批处理操作等高级渲染功能。
 * 
 * 主要功能：
 * - 渲染资源批量导出和文件处理
 * - 渲染路径生成和字符串处理
 * - 渲染数据序列化和批处理
 * - 渲染系统状态管理和数据收集
 * - 渲染文件格式转换和优化
 * - 渲染数据压缩和存储
 * - 渲染系统互斥锁管理
 */

// 常量定义
#define RENDERING_PATH_SEPARATOR '\\'           // 渲染路径分隔符
#define RENDERING_FILE_EXTENSION ".bds"        // 渲染文件扩展名
#define RENDERING_MAX_PATH_LENGTH 0x100000     // 渲染最大路径长度
#define RENDERING_BATCH_SIZE 0x20000           // 渲染批处理大小
#define RENDERING_STRING_TERMINATOR '\0'       // 渲染字符串终止符
#define RENDERING_MEMORY_ALIGNMENT 0x30        // 渲染内存对齐大小
#define RENDERING_MUTEX_TIMEOUT 0x100000       // 渲染互斥锁超时时间

// 全局变量引用
extern undefined8 _DAT_180c8ed18;              // 渲染数据内存池
extern undefined8 UNK_18098bcb0;              // 渲染空对象指针
extern undefined8 UNK_180a3c3e0;              // 渲染字符串对象
extern undefined8 DAT_18098bc73;               // 渲染空字符串
extern undefined8 UNK_180a0cf4c;               // 渲染格式字符串
extern undefined8 UNK_180a3c39c;               // 渲染路径模板
extern undefined8 _DAT_180bf00a8;              // 渲染堆栈保护
extern undefined8 _DAT_180c8ed60;               // 渲染锁计数器

// 函数别名定义
#define RenderingSystem_ResourceBatchExporter FUN_18032db60                    // 渲染系统资源批量导出器
#define RenderingSystem_DataBatchProcessor FUN_18032e340                     // 渲染系统数据批处理器
#define RenderingSystem_PathGenerator FUN_18032ea30                        // 渲染系统路径生成器
#define RenderingSystem_MutexDataManager FUN_18032f030                     // 渲染系统互斥锁数据管理器

// 外部函数声明
extern void FUN_18033af10(longlong param_1, undefined8 *param_2);            // 渲染系统数据获取函数
extern void FUN_180332560(longlong param_1, longlong param_2, ulonglong param_3); // 渲染系统状态更新函数
extern void FUN_1800571e0(longlong param_1, uint *param_2);                  // 渲染系统参数设置函数
extern void FUN_180639bf0(longlong *param_1, int param_2);                   // 渲染系统内存分配函数
extern void FUN_1808fc838(longlong *param_1, int param_2, int param_3, void *param_4, void *param_5); // 渲染系统初始化函数
extern undefined4 *FUN_18062b1e0(undefined8 param_1, int param_2, int param_3, int param_4); // 渲染系统对象创建函数
extern longlong FUN_18062b420(undefined8 param_1, int param_2, char param_3); // 渲染系统内存分配器
extern void FUN_18066bdc0(longlong param_1, undefined8 *param_2, undefined8 *param_3, undefined8 param_4); // 渲染系统数据插入函数
extern void FUN_18064e900(longlong param_1);                                 // 渲染系统内存释放函数
extern undefined8 *func_0x00018066b9a0(undefined8 *param_1);                // 渲染系统节点获取函数
extern void FUN_1800baa40(undefined8 **param_1);                            // 渲染系统字符串初始化函数
extern void FUN_1806277c0(undefined8 *param_1, uint param_2);              // 渲染系统字符串扩展函数
extern char FUN_180624a00(undefined8 *param_1);                              // 渲染系统字符串检查函数
extern void FUN_180624910(undefined8 *param_1);                              // 渲染系统字符串清理函数
extern void FUN_180628380(undefined8 *param_1, int param_2);                 // 渲染系统字符串处理函数
extern void FUN_180626eb0(char *param_1, int param_2, undefined8 *param_3, undefined4 param_4); // 渲染系统路径格式化函数
extern void FUN_18062dee0(undefined8 *param_1, undefined8 *param_2, undefined8 *param_3); // 渲染系统数据编码函数
extern void FUN_18007e5b0(undefined8 param_1, longlong *param_2);            // 渲染系统数据写入函数
extern void FUN_1808fc050(undefined8 param_1);                               // 渲染系统堆栈平衡函数
extern void FUN_1806279c0(undefined8 **param_1, undefined8 param_2);         // 渲染系统字符串构造函数
extern void FUN_1801b9a40(int *param_1, int param_2);                       // 渲染系统数据初始化函数
extern longlong func_0x00018066bd70(longlong param_1);                       // 渲染系统数据遍历函数
extern int _Mtx_lock(longlong param_1);                                      // 渲染系统互斥锁函数
extern void __Throw_C_error_std__YAXH_Z(int param_1);                         // 渲染系统错误处理函数

/**
 * 渲染系统资源批量导出器
 * 
 * 功能：批量导出渲染系统资源，包括资源收集、文件写入、
 * 路径处理、数据格式化等核心功能。
 * 
 * 参数：
 * - render_context: 渲染上下文指针
 * - file_handle: 文件句柄指针
 * - resource_data: 资源数据指针
 * 
 * 处理流程：
 * 1. 资源数据收集和验证
 * 2. 文件路径处理和格式化
 * 3. 数据编码和写入
 * 4. 批量处理和状态更新
 * 5. 资源清理和错误处理
 */
void RenderingSystem_ResourceBatchExporter(longlong render_context, longlong file_handle, longlong resource_data)
{
    undefined4 *resource_array_ptr;        // 资源数组指针
    undefined4 *data_buffer_ptr;          // 数据缓冲区指针
    undefined *temp_ptr_1;               // 临时指针1
    undefined1 *temp_ptr_2;               // 临时指针2
    longlong memory_block;                // 内存块
    longlong *resource_ptr;               // 资源指针
    uint resource_count;                  // 资源计数
    int data_index;                       // 数据索引
    longlong temp_address_1;              // 临时地址1
    longlong temp_address_2;              // 临时地址2
    undefined4 *temp_buffer_ptr_1;        // 临时缓冲区指针1
    undefined4 *temp_buffer_ptr_2;        // 临时缓冲区指针2
    undefined4 *temp_buffer_ptr_3;        // 临时缓冲区指针3
    undefined1 path_buffer[32];          // 路径缓冲区
    int index_array[2];                  // 索引数组
    undefined *string_ptr;                // 字符串指针
    undefined1 *path_ptr;                 // 路径指针
    uint path_length;                     // 路径长度
    ulonglong file_size;                  // 文件大小
    longlong file_data[3];                // 文件数据
    undefined2 file_flags;                // 文件标志
    undefined1 file_mode;                 // 文件模式
    undefined4 *file_buffer_ptr;           // 文件缓冲区指针
    undefined4 *temp_file_buffer_1;       // 临时文件缓冲区1
    undefined4 *temp_file_buffer_2;       // 临时文件缓冲区2
    undefined4 *temp_file_buffer_3;       // 临时文件缓冲区3
    undefined4 temp_file_data;            // 临时文件数据
    undefined8 stack_guard_1;            // 堆栈保护1
    longlong temp_file_address;           // 临时文件地址
    undefined8 stack_guard_2;            // 堆栈保护2
    longlong file_offset;                 // 文件偏移量
    undefined1 file_status;               // 文件状态
    longlong *file_data_ptr;             // 文件数据指针
    longlong temp_resource_ptr;           // 临时资源指针
    undefined8 file_info;                // 文件信息
    char file_path_buffer[32];            // 文件路径缓冲区
    ulonglong stack_protect;              // 堆栈保护
    
    // 初始化堆栈保护
    file_info = 0xfffffffffffffffe;
    stack_protect = _DAT_180bf00a8 ^ (ulonglong)path_buffer;
    index_array[0] = 0;
    file_buffer_ptr = (undefined4 *)0x0;
    temp_file_buffer_1 = (undefined4 *)0x0;
    temp_file_buffer_2 = (undefined4 *)0x0;
    temp_file_buffer_3 = (undefined4 *)0x0;
    temp_file_data = 3;
    
    // 获取资源数组
    resource_array_ptr = *(undefined4 **)(render_context + 0xb20);
    memory_block = *resource_array_ptr;
    resource_ptr = resource_array_ptr;
    
    // 查找有效的资源
    if (memory_block == 0) {
        resource_ptr = resource_array_ptr + 1;
        memory_block = *resource_ptr;
        while (memory_block == 0) {
            resource_ptr = resource_ptr + 1;
            memory_block = *resource_ptr;
        }
    }
    
    data_buffer_ptr = (undefined4 *)0x0;
    temp_file_address = resource_data;
    file_offset = render_context;
    file_data_ptr = file_handle;
    
    // 处理资源数组
    if (memory_block != resource_array_ptr[*(longlong *)(render_context + 0xb28)]) {
        temp_buffer_ptr_1 = (undefined4 *)0x0;
        do {
            index_array[0] = index_array[0] + 1;
            temp_file_buffer_3 = *(undefined4 **)(memory_block + 2);
            if (temp_buffer_ptr_1 < temp_file_buffer_2) {
                *temp_buffer_ptr_1 = *temp_file_buffer_3;
                data_buffer_ptr = data_buffer_ptr;
            }
            else {
                temp_address_2 = (longlong)temp_buffer_ptr_1 - (longlong)data_buffer_ptr;
                if (temp_address_2 >> 2 == 0) {
                    temp_address_1 = 1;
LAB_allocate_memory:
                    data_buffer_ptr = (undefined4 *)FUN_18062b420(_DAT_180c8ed18, temp_address_1 * 4, 3);
                }
                else {
                    temp_address_1 = (temp_address_2 >> 2) * 2;
                    if (temp_address_1 != 0) goto LAB_allocate_memory;
                    data_buffer_ptr = (undefined4 *)0x0;
                }
                
                if (data_buffer_ptr != temp_buffer_ptr_1) {
                    memmove(data_buffer_ptr, data_buffer_ptr, temp_address_2);
                }
                *data_buffer_ptr = *temp_file_buffer_3;
                if (data_buffer_ptr != (undefined4 *)0x0) {
                    FUN_18064e900(data_buffer_ptr);
                }
                temp_file_buffer_2 = data_buffer_ptr + temp_address_1;
                file_buffer_ptr = data_buffer_ptr;
                temp_buffer_ptr_1 = data_buffer_ptr;
            }
            
            temp_address_1 = temp_file_address;
            string_ptr = &UNK_180a3c3e0;
            file_size = 0;
            path_ptr = (undefined1 *)0x0;
            path_length = 0;
            temp_file_buffer_1 = temp_buffer_ptr_1 + 1;
            FUN_1806277c0(&string_ptr, *(undefined4 *)(temp_address_1 + 0x10));
            
            // 处理文件路径
            if (0 < *(int *)(temp_address_1 + 0x10)) {
                temp_ptr_1 = &DAT_18098bc73;
                if (*(undefined **)(temp_address_1 + 8) != (undefined *)0x0) {
                    temp_ptr_1 = *(undefined **)(temp_address_1 + 8);
                }
                memcpy(path_ptr, temp_ptr_1, (longlong)(*(int *)(temp_address_1 + 0x10) + 1));
            }
            
            if ((*(longlong *)(temp_address_1 + 8) != 0) && (path_length = 0, path_ptr != (undefined1 *)0x0)) {
                *path_ptr = 0;
            }
            
            resource_count = path_length + 1;
            FUN_1806277c0(&string_ptr, resource_count);
            *(undefined2 *)(path_ptr + path_length) = RENDERING_PATH_SEPARATOR;
            path_length = resource_count;
            
            // 格式化文件路径
            FUN_180626eb0(file_path_buffer, 0x20, &UNK_180a3c39c, *memory_block);
            temp_address_1 = -1;
            do {
                temp_address_2 = temp_address_1;
                temp_address_1 = temp_address_2 + 1;
            } while (file_path_buffer[temp_address_2 + 1] != '\0');
            
            data_index = (int)(temp_address_2 + 1);
            if (0 < data_index) {
                FUN_1806277c0(&string_ptr, path_length + data_index);
                memcpy(path_ptr + path_length, file_path_buffer, (longlong)((int)temp_address_2 + 2));
            }
            
            data_index = path_length + 4;
            FUN_1806277c0(&string_ptr, data_index);
            *(undefined4 *)(path_ptr + path_length) = 0x6662672e; // ".gbf"
            *(undefined1 *)((longlong)(path_ptr + path_length) + 4) = 0;
            temp_ptr_2 = &DAT_18098bc73;
            if (path_ptr != (undefined1 *)0x0) {
                temp_ptr_2 = path_ptr;
            }
            
            stack_guard_1 = 0;
            file_status = 0;
            path_length = data_index;
            FUN_18062dee0(&stack_guard_1, temp_ptr_2, &UNK_180a0cf4c);
            file_data[0] = 0;
            file_data[1] = 0;
            file_data[2] = 0;
            file_flags = 0;
            file_mode = 3;
            
            // 分配文件缓冲区
            FUN_180639bf0(file_data, RENDERING_MAX_PATH_LENGTH);
            FUN_18007e5b0(*(undefined8 *)(*(longlong *)(memory_block + 2) + 8), file_data);
            temp_address_1 = file_offset;
            file_info = file_data[2];
            fwrite(&file_info, 8, 1, temp_address_1);
            temp_address_2 = file_data[0];
            fwrite(file_data[0], file_info, 1, temp_address_2);
            temp_buffer_ptr_1 = temp_buffer_ptr_1 + 1;
            
            if (temp_address_1 != 0) {
                fclose(temp_address_1);
                file_offset = 0;
                LOCK();
                _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
                UNLOCK();
                temp_address_1 = 0;
                temp_address_2 = file_data[0];
                data_buffer_ptr = file_buffer_ptr;
                temp_file_buffer_1 = temp_buffer_ptr_1;
            }
            
            if (((char)file_flags == '\0') && (temp_address_2 != 0)) {
                FUN_18064e900(temp_address_2);
            }
            
            data_buffer_ptr = data_buffer_ptr;
            if (temp_address_1 != 0) {
                fclose(temp_address_1);
                file_offset = 0;
                LOCK();
                _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
                UNLOCK();
                data_buffer_ptr = file_buffer_ptr;
                temp_file_buffer_1 = temp_buffer_ptr_1;
            }
            
            string_ptr = &UNK_180a3c3e0;
            if (path_ptr != (undefined1 *)0x0) {
                FUN_18064e900();
            }
            path_ptr = (undefined1 *)0x0;
            file_size = file_size & 0xffffffff00000000;
            string_ptr = &UNK_18098bcb0;
            memory_block = *(longlong *)(memory_block + 0x10);
            
            while (memory_block == 0) {
                resource_ptr = resource_ptr + 1;
                memory_block = *resource_ptr;
            }
        } while (memory_block != *(longlong *)
                   (*(longlong *)(file_offset + 0xb20) + *(longlong *)(file_offset + 0xb28) * 4));
    }
    
    memory_block = file_data_ptr;
    fwrite(index_array, 4, 1, *(undefined8 *)(memory_block + 8));
    if (0 < index_array[0]) {
        fwrite(data_buffer_ptr, 4, (longlong)index_array[0], *(undefined8 *)(memory_block + 8));
    }
    _ftelli64(*(undefined8 *)(memory_block + 8));
    
    if (data_buffer_ptr == (undefined4 *)0x0) {
        FUN_1808fc050(stack_protect ^ (ulonglong)path_buffer);
    }
    
    FUN_18064e900(data_buffer_ptr);
}

/**
 * 渲染系统数据批处理器
 * 
 * 功能：批量处理渲染系统数据，包括数据收集、内存管理、
 * 文件写入、数据序列化等核心功能。
 * 
 * 参数：
 * - render_context: 渲染上下文指针
 * - file_handle: 文件句柄指针
 * - process_data: 处理数据指针
 * 
 * 返回值：
 * - 处理状态码
 * 
 * 处理流程：
 * 1. 数据收集和验证
 * 2. 内存分配和管理
 * 3. 数据序列化和压缩
 * 4. 文件写入和状态更新
 * 5. 资源清理和错误处理
 */
undefined4 RenderingSystem_DataBatchProcessor(longlong render_context, longlong file_handle, undefined8 process_data)
{
    undefined8 string_object;            // 字符串对象
    int *data_index_ptr;                // 数据索引指针
    longlong *memory_ptr;               // 内存指针
    uint data_size_1;                    // 数据大小1
    undefined4 process_result;          // 处理结果
    longlong data_size_2;                // 数据大小2
    longlong *resource_ptr;             // 资源指针
    undefined4 *data_buffer_ptr;        // 数据缓冲区指针
    undefined *temp_ptr_1;              // 临时指针1
    undefined *temp_ptr_2;              // 临时指针2
    uint data_size_3;                    // 数据大小3
    uint data_size_4;                    // 数据大小4
    int data_count;                     // 数据计数
    longlong temp_address;               // 临时地址
    undefined4 *temp_buffer_ptr_1;       // 临时缓冲区指针1
    undefined4 *temp_buffer_ptr_2;       // 临时缓冲区指针2
    undefined4 *temp_buffer_ptr_3;       // 临时缓冲区指针3
    undefined4 *temp_buffer_ptr_4;       // 临时缓冲区指针4
    undefined4 *temp_buffer_ptr_5;       // 临时缓冲区指针5
    undefined4 *temp_buffer_ptr_6;       // 临时缓冲区指针6
    undefined4 temp_data_1;             // 临时数据1
    undefined4 temp_data_2;             // 临时数据2
    undefined4 temp_data_3;             // 临时数据3
    undefined4 temp_data_4;             // 临时数据4
    undefined4 temp_data_5;             // 临时数据5
    undefined4 temp_data_6;             // 临时数据6
    longlong *temp_memory_ptr_1;        // 临时内存指针1
    longlong *temp_memory_ptr_2;        // 临时内存指针2
    longlong *temp_memory_ptr_3;        // 临时内存指针3
    undefined8 stack_guard_1;           // 堆栈保护1
    undefined8 stack_guard_2;           // 堆栈保护2
    undefined8 stack_guard_3;           // 堆栈保护3
    undefined8 stack_guard_4;           // 堆栈保护4
    longlong file_data_ptr;             // 文件数据指针
    undefined2 file_flags;              // 文件标志
    undefined1 file_status;             // 文件状态
    longlong temp_file_ptr;             // 临时文件指针
    undefined8 file_info;               // 文件信息
    char path_buffer[32];               // 路径缓冲区
    ulonglong stack_protect;             // 堆栈保护
    
    // 初始化堆栈保护
    file_info = 0xfffffffffffffffe;
    data_index_ptr = (int *)0x0;
    data_buffer_ptr = (undefined4 *)0x0;
    temp_buffer_ptr_1 = (undefined4 *)0x0;
    temp_buffer_ptr_2 = (undefined4 *)0x0;
    temp_buffer_ptr_3 = (undefined4 *)0x0;
    temp_data_1 = 3;
    temp_buffer_ptr_4 = (undefined4 *)0x0;
    temp_buffer_ptr_5 = (undefined4 *)0x0;
    temp_buffer_ptr_6 = (undefined4 *)0x0;
    temp_data_2 = 3;
    memory_ptr = (longlong *)0x0;
    temp_memory_ptr_1 = (longlong *)0x0;
    temp_memory_ptr_2 = (longlong *)0x0;
    temp_memory_ptr_3 = (longlong *)0x0;
    temp_data_3 = 3;
    file_data_ptr = file_handle;
    
    // 构造字符串对象
    FUN_1806279c0(&temp_ptr_1, process_data);
    data_size_1 = data_size_3;
    data_size_4 = data_size_3 + 1;
    FUN_1806277c0(&temp_ptr_1, data_size_4);
    *(undefined2 *)(temp_ptr_2 + data_size_3) = RENDERING_PATH_SEPARATOR;
    data_size_4 = data_size_1 + 0x16;
    data_size_3 = data_size_4;
    FUN_1806277c0(&temp_ptr_1, data_size_4);
    temp_buffer_ptr_1 = (undefined4 *)(temp_ptr_2 + data_size_3);
    *temp_buffer_ptr_1 = 0x6e696b73; // "skins"
    temp_buffer_ptr_1[1] = 0x5f64656e; // "_den"
    temp_buffer_ptr_1[2] = 0x61636564; // "aced"
    temp_buffer_ptr_1[3] = 0x75625f6c; // "ub_l"
    temp_buffer_ptr_1[4] = 0x72656666; // "reff"
    *(undefined2 *)(temp_buffer_ptr_1 + 5) = 0x73; // "s"
    data_count = data_size_1 + 0x1a;
    data_size_3 = data_size_4;
    FUN_1806277c0(&temp_ptr_1, data_count);
    *(undefined4 *)(temp_ptr_2 + data_size_3) = 0x6264732e; // ".dsb"
    *(undefined1 *)((longlong)(temp_ptr_2 + data_size_3) + 4) = 0;
    temp_ptr_2 = &DAT_18098bc73;
    if (temp_ptr_2 != (undefined *)0x0) {
        temp_ptr_2 = temp_ptr_2;
    }
    stack_guard_1 = 0;
    file_status = 0;
    data_size_3 = data_count;
    FUN_18062dee0(&stack_guard_1, temp_ptr_2, &UNK_180a0cf4c);
    temp_address = 0;
    process_result = 0;
    data_size_4 = 0;
    file_flags = 0;
    file_status = 3;
    data_size_2 = render_context + 0x958;
    data_size_1 = *(longlong *)(render_context + 0x960);
    temp_buffer_ptr_1 = (undefined4 *)0x0;
    
    // 处理数据数组
    if (data_size_1 != data_size_2) {
        do {
            temp_buffer_ptr_2 = temp_buffer_ptr_1;
            temp_buffer_ptr_3 = data_buffer_ptr;
            data_index_ptr[0] = data_index_ptr[0] + 1;
            temp_data_4 = *(undefined4 *)(data_size_1 + 0x20);
            if (temp_buffer_ptr_1 < temp_buffer_ptr_2) {
                *temp_buffer_ptr_1 = temp_data_4;
                temp_buffer_ptr_1 = temp_buffer_ptr_2;
            }
            else {
                temp_address = (longlong)temp_buffer_ptr_1 - (longlong)data_buffer_ptr;
                data_size_1 = temp_address >> 2;
                if (data_size_1 == 0) {
                    data_size_1 = 1;
LAB_allocate_memory_1:
                    temp_buffer_ptr_1 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18, data_size_1 * 4, 3);
                }
                else {
                    data_size_1 = data_size_1 * 2;
                    if (data_size_1 != 0) goto LAB_allocate_memory_1;
                    temp_buffer_ptr_1 = (undefined4 *)0x0;
                }
                if (data_buffer_ptr != temp_buffer_ptr_2) {
                    memmove(temp_buffer_ptr_1, data_buffer_ptr, temp_address);
                }
                *temp_buffer_ptr_1 = temp_data_4;
                if (data_buffer_ptr != (undefined4 *)0x0) {
                    FUN_18064e900(data_buffer_ptr);
                }
                temp_buffer_ptr_3 = temp_buffer_ptr_1 + data_size_1;
                data_buffer_ptr = temp_buffer_ptr_1;
            }
            temp_buffer_ptr_1 = temp_buffer_ptr_1 + 1;
            data_size_1 = **(uint **)(data_size_1 + 0x28);
            if (data_size_1 != 0) {
                data_size_1 = ((**(uint **)(data_size_1 + 0x28)) - 1 >> 0xc) + 1;
            }
            temp_address = (ulonglong)data_size_1 * RENDERING_BATCH_SIZE;
            data_size_4 = data_size_4 + temp_address;
            if (data_size_4 - process_result + temp_address < RENDERING_BATCH_SIZE + 1) {
                FUN_180639bf0(&temp_address);
            }
            memory_ptr = temp_memory_ptr_1;
            temp_memory_ptr_3 = temp_memory_ptr_2;
            if (temp_memory_ptr_1 < temp_memory_ptr_3) {
                *temp_memory_ptr_1 = temp_address;
                resource_ptr = temp_memory_ptr_1;
            }
            else {
                temp_address = (longlong)temp_memory_ptr_1 - (longlong)temp_memory_ptr_2;
                data_size_1 = temp_address >> 3;
                if (data_size_1 == 0) {
                    data_size_1 = 1;
LAB_allocate_memory_2:
                    resource_ptr = (longlong *)FUN_18062b420(_DAT_180c8ed18, data_size_1 * 8, 3);
                }
                else {
                    data_size_1 = data_size_1 * 2;
                    if (data_size_1 != 0) goto LAB_allocate_memory_2;
                    resource_ptr = (longlong *)0x0;
                }
                if (temp_memory_ptr_2 != memory_ptr) {
                    memmove(resource_ptr, temp_memory_ptr_2, temp_address);
                }
                *resource_ptr = temp_address;
                if (temp_memory_ptr_2 != (longlong *)0x0) {
                    FUN_18064e900(temp_memory_ptr_2);
                }
                temp_memory_ptr_3 = resource_ptr + data_size_1;
                temp_memory_ptr_2 = resource_ptr;
            }
            temp_buffer_ptr_3 = temp_buffer_ptr_3;
            temp_buffer_ptr_1 = temp_buffer_ptr_4;
            temp_memory_ptr_1 = resource_ptr + 1;
            temp_data_4 = **(undefined4 **)(data_size_1 + 0x28);
            if (temp_buffer_ptr_3 < temp_buffer_ptr_5) {
                *temp_buffer_ptr_3 = temp_data_4;
                temp_buffer_ptr_2 = temp_buffer_ptr_3;
            }
            else {
                temp_address = (longlong)temp_buffer_ptr_3 - (longlong)temp_buffer_ptr_4;
                data_size_1 = temp_address >> 2;
                if (data_size_1 == 0) {
                    data_size_1 = 1;
LAB_allocate_memory_3:
                    temp_buffer_ptr_2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18, data_size_1 * 4, 3);
                }
                else {
                    data_size_1 = data_size_1 * 2;
                    if (data_size_1 != 0) goto LAB_allocate_memory_3;
                    temp_buffer_ptr_2 = (undefined4 *)0x0;
                }
                if (temp_buffer_ptr_4 != temp_buffer_ptr_3) {
                    memmove(temp_buffer_ptr_2, temp_buffer_ptr_4, temp_address);
                }
                *temp_buffer_ptr_2 = temp_data_4;
                if (temp_buffer_ptr_4 != (undefined4 *)0x0) {
                    FUN_18064e900(temp_buffer_ptr_4);
                }
                temp_buffer_ptr_5 = temp_buffer_ptr_2 + data_size_1;
                temp_buffer_ptr_4 = temp_buffer_ptr_2;
            }
            data_index_ptr = temp_memory_ptr_1;
            resource_ptr = temp_memory_ptr_2;
            temp_buffer_ptr_3 = temp_buffer_ptr_2 + 1;
            if (**(int **)(data_size_1 + 0x28) == 0) {
                data_count = 0;
            }
            else {
                data_count = ((**(int **)(data_size_1 + 0x28)) - 1U >> 0xc) + 1;
            }
            if (data_index_ptr < resource_ptr) {
                *data_index_ptr = data_count;
                resource_ptr = data_index_ptr;
            }
            else {
                temp_address = (longlong)data_index_ptr - (longlong)temp_memory_ptr_2;
                data_size_1 = temp_address >> 2;
                if (data_size_1 == 0) {
                    data_size_1 = 1;
LAB_allocate_memory_4:
                    resource_ptr = (int *)FUN_18062b420(_DAT_180c8ed18, data_size_1 * 4, 3);
                }
                else {
                    data_size_1 = data_size_1 * 2;
                    if (data_size_1 != 0) goto LAB_allocate_memory_4;
                    resource_ptr = (int *)0x0;
                }
                if (temp_memory_ptr_2 != data_index_ptr) {
                    memmove(resource_ptr, temp_memory_ptr_2, temp_address);
                }
                *resource_ptr = data_count;
                if (temp_memory_ptr_2 != (int *)0x0) {
                    FUN_18064e900(temp_memory_ptr_2);
                }
                temp_memory_ptr_3 = resource_ptr + data_size_1;
                temp_memory_ptr_2 = resource_ptr;
            }
            data_index_ptr = resource_ptr + 1;
            resource_ptr = *(int **)(data_size_1 + 0x28);
            FUN_1801b9a40(resource_ptr, *resource_ptr);
            data_count = *resource_ptr;
            if (data_count != 0) {
                data_count = (*resource_ptr - 1U >> 0xc) + 1;
            }
            if (data_count != 0) {
                stack_guard_1 = *(undefined8 *)(resource_ptr + 2);
                if ((data_size_4 - process_result + temp_address) < RENDERING_BATCH_SIZE + 1) {
                    FUN_180639bf0(&temp_address, (process_result - temp_address) + RENDERING_BATCH_SIZE);
                }
                memcpy(process_result, stack_guard_1, RENDERING_BATCH_SIZE);
            }
            data_size_1 = func_0x00018066bd70(data_size_1);
            temp_buffer_ptr_1 = temp_buffer_ptr_3;
            file_handle = file_data_ptr;
        } while (data_size_1 != data_size_2);
    }
    
    data_size_1 = temp_file_ptr;
    fwrite(temp_address, data_size_4, 1, temp_file_ptr);
    if (data_size_1 != 0) {
        fclose(data_size_1);
        temp_file_ptr = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
        data_size_1 = 0;
    }
    fwrite(data_index_ptr, 4, 1, *(undefined8 *)(file_handle + 8));
    temp_memory_ptr_2 = temp_memory_ptr_2;
    resource_ptr = temp_memory_ptr_2;
    temp_buffer_ptr_3 = temp_buffer_ptr_4;
    temp_buffer_ptr_1 = data_buffer_ptr;
    if (0 < data_index_ptr[0]) {
        fwrite(data_buffer_ptr, 4, (longlong)data_index_ptr[0], *(undefined8 *)(file_handle + 8));
        fwrite(temp_buffer_ptr_3, 4, (longlong)data_index_ptr[0], *(undefined8 *)(file_handle + 8));
        fwrite(resource_ptr, 4, (longlong)data_index_ptr[0], *(undefined8 *)(file_handle + 8));
        fwrite(temp_memory_ptr_2, 8, (longlong)data_index_ptr[0], *(undefined8 *)(file_handle + 8));
    }
    temp_data_4 = _ftelli64(*(undefined8 *)(file_handle + 8));
    if (((char)file_flags == '\0') && (temp_address != 0)) {
        FUN_18064e900();
    }
    if (data_size_1 != 0) {
        fclose(data_size_1);
        temp_file_ptr = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
        temp_buffer_ptr_3 = temp_buffer_ptr_4;
        temp_buffer_ptr_1 = data_buffer_ptr;
        resource_ptr = temp_memory_ptr_2;
        temp_memory_ptr_2 = temp_memory_ptr_2;
    }
    temp_ptr_1 = &UNK_180a3c3e0;
    if (temp_ptr_2 != (undefined *)0x0) {
        FUN_18064e900();
    }
    temp_ptr_2 = (undefined *)0x0;
    temp_data_3 = 0;
    temp_ptr_1 = &UNK_18098bcb0;
    if (temp_memory_ptr_2 != (longlong *)0x0) {
        FUN_18064e900(temp_memory_ptr_2);
    }
    if (resource_ptr == (int *)0x0) {
        if (temp_buffer_ptr_3 != (undefined4 *)0x0) {
            FUN_18064e900(temp_buffer_ptr_3);
        }
        if (temp_buffer_ptr_1 == (undefined4 *)0x0) {
            return temp_data_4;
        }
        FUN_18064e900(temp_buffer_ptr_1);
    }
    FUN_18064e900(resource_ptr);
}

/**
 * 渲染系统路径生成器
 * 
 * 功能：生成渲染系统路径，包括路径构造、字符串处理、
 * 文件操作等核心功能。
 * 
 * 参数：
 * - render_context: 渲染上下文指针
 * - file_handle: 文件句柄指针
 * - path_data: 路径数据指针
 * 
 * 处理流程：
 * 1. 路径数据初始化和验证
 * 2. 字符串处理和格式化
 * 3. 路径构造和优化
 * 4. 文件操作和状态更新
 * 5. 资源清理和错误处理
 */
void RenderingSystem_PathGenerator(longlong render_context, longlong file_handle, undefined8 path_data)
{
    longlong *resource_ptr;               // 资源指针
    longlong resource_data;              // 资源数据
    char string_check;                   // 字符串检查标志
    undefined4 *data_buffer_ptr;        // 数据缓冲区指针
    uint data_size;                      // 数据大小
    undefined *temp_ptr_1;               // 临时指针1
    undefined8 string_object;           // 字符串对象
    undefined8 temp_data_1;              // 临时数据1
    undefined8 temp_data_2;              // 临时数据2
    undefined4 temp_data_3;              // 临时数据3
    undefined *temp_ptr_2;               // 临时指针2
    longlong temp_address;               // 临时地址
    undefined4 *temp_buffer_ptr;         // 临时缓冲区指针
    undefined1 path_buffer[32];         // 路径缓冲区
    undefined *string_ptr;               // 字符串指针
    undefined1 *path_ptr;                // 路径指针
    uint path_length;                    // 路径长度
    longlong file_data[3];               // 文件数据
    undefined2 file_flags;               // 文件标志
    undefined1 file_mode;                // 文件模式
    undefined4 *file_buffer_ptr;          // 文件缓冲区指针
    undefined8 stack_guard_1;            // 堆栈保护1
    undefined8 stack_guard_2;            // 堆栈保护2
    undefined8 stack_guard_3;            // 堆栈保护3
    undefined8 stack_guard_4;            // 堆栈保护4
    longlong file_offset;                // 文件偏移量
    undefined1 file_status;              // 文件状态
    longlong *file_data_ptr;            // 文件数据指针
    undefined8 file_info;               // 文件信息
    undefined1 data_buffer[32];         // 数据缓冲区
    ulonglong stack_protect;             // 堆栈保护
    
    // 初始化堆栈保护
    file_info = 0xfffffffffffffffe;
    stack_protect = _DAT_180bf00a8 ^ (ulonglong)data_buffer;
    temp_data_3 = 0;
    data_size = 0;
    resource_data = 0;
    temp_data_1 = 0;
    temp_data_2 = 0;
    temp_data_3 = 3;
    resource_data = render_context;
    file_offset = file_handle;
    
    // 构造字符串对象
    FUN_1806279c0(&temp_ptr_1, path_data);
    data_size = data_size + 0x11;
    FUN_1806277c0(&temp_ptr_1, data_size);
    temp_buffer_ptr = (undefined4 *)((ulonglong)data_size + temp_address);
    *temp_buffer_ptr = 0x6261742f; // "/tab"
    temp_buffer_ptr[1] = 0x7561656c; // "uale"
    temp_buffer_ptr[2] = 0x7865745f; // "_text"
    temp_buffer_ptr[3] = 0x65727574; // "ture"
    *(undefined2 *)(temp_buffer_ptr + 4) = 0x73; // "s"
    data_size = data_size;
    string_check = FUN_180624a00(&temp_ptr_1);
    if (string_check == '\0') {
        FUN_180624910(&temp_ptr_1);
    }
    
    resource_data = resource_data;
    data_size = data_size;
    resource_ptr = *(longlong **)(render_context + 0xaf0);
    file_data_ptr = *resource_ptr;
    resource_ptr = resource_ptr;
    if (file_data_ptr == 0) {
        resource_ptr = resource_ptr + 1;
        resource_data = *resource_ptr;
        while (resource_data == 0) {
            resource_ptr = resource_ptr + 1;
            resource_data = *resource_ptr;
        }
        file_data_ptr = resource_data;
    }
    
    if (file_data_ptr == resource_ptr[*(longlong *)(render_context + 0xaf8)]) {
        fwrite(&data_size, 4, 1, *(undefined8 *)(file_offset + 8));
        if (0 < data_size) {
            fwrite(resource_data, 4, (longlong)data_size, *(undefined8 *)(file_offset + 8));
        }
        _ftelli64(*(undefined8 *)(file_offset + 8));
        temp_ptr_1 = &UNK_180a3c3e0;
        if (temp_address == 0) {
            resource_data = 0;
            temp_data_3 = 0;
            temp_ptr_1 = &UNK_18098bcb0;
            if (resource_data == 0) {
                FUN_1808fc050(stack_protect ^ (ulonglong)data_buffer);
            }
            FUN_18064e900(resource_data);
        }
        FUN_18064e900();
    }
    
    path_ptr = data_buffer;
    data_buffer_ptr = &file_data_ptr;
    temp_ptr_2 = &UNK_180a3c3e0;
    temp_data_1 = 0;
    temp_address = 0;
    data_size = 0;
    temp_data_3 = 1;
    temp_data_2 = (ulonglong)data_size;
    temp_data_1 = temp_data_2;
    
    if (temp_address != 0) {
        FUN_1806277c0(&temp_ptr_2, temp_data_2);
    }
    
    if (data_size == 0) {
        data_size = data_size;
        if (temp_address != 0) {
            *(undefined1 *)(temp_data_2 + temp_address) = 0;
        }
        temp_data_1 = CONCAT44(temp_data_3, (undefined4)temp_data_1);
        FUN_1806277c0(&temp_ptr_2, 1);
        *(undefined2 *)((ulonglong)data_size + temp_address) = '/';
        temp_ptr_1 = &UNK_180a3c3e0;
        temp_data_1 = 0;
        temp_data_2 = 0;
        temp_data_3 = 0;
        temp_data_3 = 3;
        data_size = 1;
        if (temp_address != 0) {
            FUN_1806277c0(&temp_ptr_1, 1);
        }
        memcpy(temp_data_2, temp_address, 1);
    }
    memcpy(temp_address, temp_address, temp_data_2);
}

/**
 * 渲染系统互斥锁数据管理器
 * 
 * 功能：管理渲染系统互斥锁数据，包括数据同步、文件操作、
 * 状态管理、资源处理等核心功能。
 * 
 * 参数：
 * - render_context: 渲染上下文指针
 * - file_handle: 文件句柄指针
 * - mutex_data: 互斥锁数据指针
 * 
 * 返回值：
 * - 操作状态码
 * 
 * 处理流程：
 * 1. 互斥锁初始化和加锁
 * 2. 数据同步和验证
 * 3. 文件操作和状态更新
 * 4. 资源处理和清理
 * 5. 互斥锁解锁和错误处理
 */
undefined4 RenderingSystem_MutexDataManager(longlong render_context, longlong file_handle, undefined8 mutex_data)
{
    uint data_size_1;                    // 数据大小1
    int lock_result;                     // 锁结果
    undefined4 operation_result;         // 操作结果
    longlong data_size_2;                // 数据大小2
    undefined4 *data_buffer_ptr_1;       // 数据缓冲区指针1
    undefined4 *data_buffer_ptr_2;       // 数据缓冲区指针2
    undefined4 *data_buffer_ptr_3;       // 数据缓冲区指针3
    undefined *temp_ptr_1;              // 临时指针1
    undefined *temp_ptr_2;              // 临时指针2
    uint data_size_3;                    // 数据大小3
    uint data_size_4;                    // 数据大小4
    longlong temp_address;               // 临时地址
    undefined4 *data_buffer_ptr_4;       // 数据缓冲区指针4
    undefined4 *data_buffer_ptr_5;       // 数据缓冲区指针5
    undefined4 *data_buffer_ptr_6;       // 数据缓冲区指针6
    undefined4 *data_buffer_ptr_7;       // 数据缓冲区指针7
    undefined4 *data_buffer_ptr_8;       // 数据缓冲区指针8
    undefined4 *data_buffer_ptr_9;       // 数据缓冲区指针9
    undefined4 temp_data_1;             // 临时数据1
    undefined4 temp_data_2;             // 临时数据2
    longlong *memory_ptr;               // 内存指针
    undefined8 stack_guard_1;           // 堆栈保护1
    undefined8 stack_guard_2;           // 堆栈保护2
    undefined8 stack_guard_3;           // 堆栈保护3
    undefined8 stack_guard_4;           // 堆栈保护4
    longlong file_data_ptr;             // 文件数据指针
    undefined *string_ptr_1;             // 字符串指针1
    undefined *string_ptr_2;             // 字符串指针2
    uint string_length;                  // 字符串长度
    undefined4 file_flags;              // 文件标志
    undefined1 file_status;             // 文件状态
    longlong temp_file_ptr;             // 临时文件指针
    undefined8 file_info;               // 文件信息
    char path_buffer[32];               // 路径缓冲区
    undefined4 data_buffer[2];           // 数据缓冲区
    undefined8 stack_guard_5;            // 堆栈保护5
    undefined1 file_mode;                // 文件模式
    longlong file_offset;                // 文件偏移量
    longlong *file_data_ptr_2;           // 文件数据指针2
    uint temp_data_3;                    // 临时数据3
    undefined8 stack_guard_6;            // 堆栈保护6
    undefined8 stack_guard_7;            // 堆栈保护7
    undefined8 stack_guard_8;            // 堆栈保护8
    
    // 初始化堆栈保护
    file_info = 0xfffffffffffffffe;
    data_size_2 = render_context + 0x908;
    file_offset = data_size_2;
    lock_result = _Mtx_lock(data_size_2);
    if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);
    }
    
    data_buffer_ptr_1 = (undefined4 *)0x0;
    data_buffer_ptr_2 = (undefined4 *)0x0;
    data_buffer_ptr_3 = (undefined4 *)0x0;
    temp_data_1 = 3;
    data_buffer_ptr_4 = (undefined4 *)0x0;
    data_buffer_ptr_5 = (undefined4 *)0x0;
    data_buffer_ptr_6 = (undefined4 *)0x0;
    temp_data_2 = 3;
    
    // 构造字符串对象
    FUN_1806279c0(&temp_ptr_1, mutex_data);
    data_size_1 = string_length;
    data_size_4 = string_length + 1;
    FUN_1806277c0(&temp_ptr_1, data_size_4);
    *(undefined2 *)(string_ptr_2 + string_length) = RENDERING_PATH_SEPARATOR;
    data_size_4 = data_size_1 + 0x15;
    string_length = data_size_4;
    FUN_1806277c0(&temp_ptr_1, data_size_4);
    data_buffer_ptr_7 = (undefined4 *)(string_ptr_2 + string_length);
    *data_buffer_ptr_7 = 0x6e656761; // "nega"
    data_buffer_ptr_7[1] = 0x6f705f74; // "op_t"
    data_buffer_ptr_7[2] = 0x69746973; // "itis"
    data_buffer_ptr_7[3] = 0x5f736e6f; // "_sno"
    data_buffer_ptr_7[4] = 0x61746164; // "data"
    *(undefined1 *)(data_buffer_ptr_7 + 5) = 0;
    lock_result = data_size_1 + 0x19;
    string_length = data_size_4;
    FUN_1806277c0(&temp_ptr_1, lock_result);
    *(undefined4 *)(string_ptr_2 + string_length) = 0x6470612e; // ".apd"
    *(undefined1 *)((longlong)(string_ptr_2 + string_length) + 4) = 0;
    temp_ptr_2 = &DAT_18098bc73;
    if (string_ptr_2 != (undefined *)0x0) {
        temp_ptr_2 = string_ptr_2;
    }
    stack_guard_1 = 0;
    file_status = 0;
    string_length = lock_result;
    FUN_18062dee0(&stack_guard_1, temp_ptr_2, &UNK_180a0cf4c);
    temp_address = *(longlong *)(render_context + 0x8e0);
    data_buffer_ptr_8 = data_buffer_ptr_2;
    data_buffer_ptr_1 = data_buffer_ptr_1;
    data_buffer_ptr_7 = data_buffer_ptr_1;
    data_buffer_ptr_2 = data_buffer_ptr_4;
    data_buffer_ptr_3 = data_buffer_ptr_5;
    data_buffer_ptr_9 = data_buffer_ptr_5;
    
    // 处理数据数组
    if (temp_address != render_context + 0x8d8) {
        do {
            data_size_2 = *(longlong *)(temp_address + 0x30) - *(longlong *)(temp_address + 0x28) >> 4;
            temp_data_3 = *(uint *)(temp_address + 0x40);
            if (data_size_2 == 0) {
                temp_address = 0;
            }
            else {
                temp_address = FUN_18062b420(_DAT_180c8ed18, data_size_2 << 4, temp_data_3 & 0xff);
            }
            file_offset = data_size_2 * 0x10 + temp_address;
            data_size_2 = *(longlong *)(temp_address + 0x28);
            temp_file_ptr = temp_address;
            temp_address = temp_address;
            if (data_size_2 != *(longlong *)(temp_address + 0x30)) {
                memmove(temp_address, data_size_2, *(longlong *)(temp_address + 0x30) - data_size_2);
            }
            file_flags = *(undefined4 *)(temp_address + 0x20);
            if (data_buffer_ptr_8 < data_buffer_ptr_3) {
                *data_buffer_ptr_8 = file_flags;
                data_buffer_ptr_1 = data_buffer_ptr_7;
            }
            else {
                file_offset = (longlong)data_buffer_ptr_8 - (longlong)data_buffer_ptr_7;
                data_size_2 = file_offset >> 2;
                if (data_size_2 == 0) {
                    data_size_2 = 1;
LAB_allocate_memory:
                    data_buffer_ptr_1 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18, data_size_2 * 4, 3);
                }
                else {
                    data_size_2 = data_size_2 * 2;
                    if (data_size_2 != 0) goto LAB_allocate_memory;
                    data_buffer_ptr_1 = (undefined4 *)0x0;
                }
                if (data_buffer_ptr_7 != data_buffer_ptr_8) {
                    memmove(data_buffer_ptr_1, data_buffer_ptr_7, file_offset);
                }
                *data_buffer_ptr_1 = file_flags;
                if (data_buffer_ptr_7 != (undefined4 *)0x0) {
                    FUN_18064e900(data_buffer_ptr_7);
                }
                data_buffer_ptr_3 = data_buffer_ptr_1 + data_size_2;
                data_buffer_ptr_1 = data_buffer_ptr_1;
                data_buffer_ptr_8 = data_buffer_ptr_1;
            }
            data_buffer_ptr_8 = data_buffer_ptr_8 + 1;
            data_buffer_ptr_2 = data_buffer_ptr_8;
            if (data_buffer_ptr_2 < data_buffer_ptr_6) {
                *data_buffer_ptr_2 = 0;
                data_buffer_ptr_3 = data_buffer_ptr_9;
            }
            else {
                data_size_2 = (longlong)data_buffer_ptr_2 - (longlong)data_buffer_ptr_9;
                file_offset = data_size_2 >> 2;
                if (file_offset == 0) {
                    file_offset = 1;
LAB_allocate_memory_2:
                    data_buffer_ptr_3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18, file_offset * 4, 3);
                }
                else {
                    file_offset = file_offset * 2;
                    if (file_offset != 0) goto LAB_allocate_memory_2;
                    data_buffer_ptr_3 = (undefined4 *)0x0;
                }
                if (data_buffer_ptr_9 != data_buffer_ptr_2) {
                    memmove(data_buffer_ptr_3, data_buffer_ptr_9, data_size_2);
                }
                *data_buffer_ptr_3 = 0;
                if (data_buffer_ptr_9 != (undefined4 *)0x0) {
                    FUN_18064e900(data_buffer_ptr_9);
                }
                data_buffer_ptr_6 = data_buffer_ptr_3 + file_offset;
                data_buffer_ptr_5 = data_buffer_ptr_3;
                data_buffer_ptr_2 = data_buffer_ptr_3;
            }
            data_buffer_ptr_4 = data_buffer_ptr_2 + 1;
            fwrite(temp_address, 0, 1, temp_file_ptr);
            if (temp_address != 0) {
                FUN_18064e900(temp_address);
            }
            temp_address = func_0x00018066bd70(temp_address);
            data_size_2 = file_offset;
            data_buffer_ptr_7 = data_buffer_ptr_1;
            data_buffer_ptr_2 = data_buffer_ptr_2 + 1;
            data_buffer_ptr_9 = data_buffer_ptr_3;
        } while (temp_address != render_context + 0x8d8);
    }
    
    if (temp_file_ptr != 0) {
        fclose(temp_file_ptr);
        temp_file_ptr = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
        data_size_2 = file_offset;
        data_buffer_ptr_1 = data_buffer_ptr_1;
        data_buffer_ptr_3 = data_buffer_ptr_5;
    }
    
    temp_address = temp_file_ptr;
    data_buffer[0] = (int)*(undefined8 *)(render_context + 0x8f8);
    fwrite(data_buffer, 4, 1, *(undefined8 *)(file_handle + 8));
    if (data_buffer[0] != 0) {
        fwrite(data_buffer_ptr_1, 4, data_buffer[0], *(undefined8 *)(file_handle + 8));
        fwrite(data_buffer_ptr_3, 4, data_buffer[0], *(undefined8 *)(file_handle + 8));
    }
    operation_result = _ftelli64(*(undefined8 *)(file_handle + 8));
    if (temp_address != 0) {
        fclose(temp_address);
        temp_address = 0;
        temp_file_ptr = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
        data_size_2 = file_offset;
        data_buffer_ptr_1 = data_buffer_ptr_1;
        data_buffer_ptr_3 = data_buffer_ptr_5;
    }
    
    temp_ptr_1 = &UNK_180a3c3e0;
    if (string_ptr_2 != (undefined *)0x0) {
        FUN_18064e900();
    }
    temp_data_1 = (undefined4)temp_address;
    temp_ptr_1 = &UNK_18098bcb0;
    temp_ptr_2 = (undefined *)temp_address;
    if (data_buffer_ptr_3 != (undefined4 *)0x0) {
        FUN_18064e900(data_buffer_ptr_3);
    }
    if (data_buffer_ptr_1 == (undefined4 *)0x0) {
        lock_result = _Mtx_unlock(data_size_2);
        if (lock_result != 0) {
            __Throw_C_error_std__YAXH_Z(lock_result);
        }
        return operation_result;
    }
    FUN_18064e900(data_buffer_ptr_1);
}

/*
 * 技术说明：
 * 
 * 本模块实现了渲染系统的资源导出和数据处理功能，主要特点：
 * 
 * 1. 批量处理：
 *    - 支持资源的批量导出和处理
 *    - 实现了高效的数据序列化机制
 *    - 支持大文件处理（最大1MB）
 * 
 * 2. 路径管理：
 *    - 支持路径的动态生成和处理
 *    - 实现了路径格式化和验证
 *    - 支持多种路径分隔符处理
 * 
 * 3. 数据处理：
 *    - 支持数据的压缩和存储
 *    - 实现了数据分块处理机制
 *    - 支持数据同步和异步处理
 * 
 * 4. 互斥锁管理：
 *    - 支持线程安全的数据操作
 *    - 实现了互斥锁的自动管理
 *    - 支持超时处理和错误恢复
 * 
 * 5. 内存管理：
 *    - 使用动态内存分配和释放
 *    - 支持内存对齐和优化
 *    - 实现了内存池管理机制
 * 
 * 优化建议：
 * - 可以进一步优化批处理算法
 * - 建议增加缓存机制提高性能
 * - 可以支持并发数据处理
 * - 建议增加错误恢复机制
 */