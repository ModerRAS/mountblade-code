#include "TaleWorlds.Native.Split.h"

// 03_rendering_part064.c - 渲染系统高级数据处理和渲染控制模块
// 包含12个核心函数，涵盖渲染参数设置、内存管理、数据复制、字符串处理、
// 缓冲区管理、矩阵运算、资源清理、字符处理、数组操作等高级渲染功能

// 函数别名定义
#define render_system_set_parameters FUN_180300970
#define render_system_initialize_buffer FUN_1803009f0
#define render_system_allocate_memory FUN_180300a13
#define render_system_empty_function_1 FUN_180300a4c
#define render_system_copy_data_blocks FUN_180300a60
#define render_system_calculate_matrix_transform FUN_180300b10
#define render_system_apply_matrix_operations FUN_180300bf0
#define render_system_cleanup_resources FUN_180300d00
#define render_system_remove_character_from_string FUN_180300e10
#define render_system_remove_character_from_buffer FUN_180300e4a
#define render_system_empty_function_2 FUN_180300e9c
#define render_system_add_character_to_string FUN_180300eb0
#define render_system_deallocate_object FUN_180300f20
#define render_system_initialize_string_object FUN_180300fc0
#define render_system_initialize_render_object FUN_180301040
#define render_system_deallocate_render_object FUN_1803014b0
#define render_system_update_render_parameters FUN_1803014f0
#define render_system_update_render_parameters_ex FUN_180301506
#define render_system_empty_function_3 FUN_18030181f
#define render_system_create_string_buffer FUN_180301830
#define render_system_process_render_data FUN_180301910

// 常量定义
#define RENDER_FLOAT_ONE 0x3f800000
#define RENDER_FLOAT_TWO 0x40000000
#define RENDER_FLOAT_FOUR 0x40800000
#define RENDER_FLOAT_SIXTEEN 0x41800000
#define RENDER_PAGE_SIZE_8K 0x2000
#define RENDER_BLOCK_SIZE_64 0x40
#define RENDER_BUFFER_SIZE_4K 0x1028
#define RENDER_MAX_ITERATIONS_64 0x40
#define RENDER_SHIFT_MASK_13 0xd
#define RENDER_STRING_BUFFER_SIZE 0x80
#define RENDER_RESOURCE_FLAG_DEALLOCATE 1
#define RENDER_MAX_COUNTER 100
#define RENDER_DEFAULT_ALPHA 0xff000000
#define RENDER_DEFAULT_COLOR 0xffffffff
#define RENDER_DEFAULT_SCALE 0x3f8000003f800000
#define RENDER_MAGIC_NUMBER_1 0x536c6772
#define RENDER_MAGIC_NUMBER_2 0x656e6563
#define RENDER_MAGIC_NUMBER_3 0x6569765f
#define RENDER_MAGIC_NUMBER_4 0x3a3a77
#define RENDER_MAGIC_NUMBER_5 0x3a3a7265646e65
#define RENDER_SPECIAL_FLOAT 0xab3abdf1
#define RENDER_MAX_UNSIGNED_FLOAT 0x7f7fffff

// 全局变量引用
#define global_render_context _DAT_180c8ed18
#define global_string_constants _DAT_180c86890
#define global_render_settings _DAT_180c86920
#define global_render_state _DAT_180c86950

/**
 * 设置渲染系统参数
 * @param context 渲染上下文指针
 * @param param2 参数2（未使用）
 * @param param3 参数3（未使用）
 * @param param4 参数4
 * @param param5 参数5
 * @param param6 参数6
 * @param param7 参数7（未使用）
 * @param param8 参数8
 */
void render_system_set_parameters(longlong context, undefined8 param2, undefined8 param3, undefined4 param4,
                                undefined4 param5, undefined4 param6, undefined8 param7, undefined4 param8)
{
    // 调用渲染上下文中的参数设置函数
    (**(code **)(**(longlong **)(context + 0x210) + 0x70))
            (*(longlong **)(context + 0x210), RENDER_FLOAT_ONE, param3, *(undefined8 *)(context + 0x208),
             RENDER_FLOAT_ONE, param8, param4, param5, param6, 0, 1, 0, 0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化渲染缓冲区
 * @param context 渲染上下文指针
 */
void render_system_initialize_buffer(longlong context)
{
    undefined8 buffer_ptr;
    
    // 检查缓冲区是否已经初始化
    if (*(longlong *)(context + 0xd0) == 0) {
        // 分配4KB缓冲区并清零
        buffer_ptr = FUN_18062b1e0(global_render_context, RENDER_BUFFER_SIZE_4K, 8, 3);
        memset(buffer_ptr, 0, RENDER_BUFFER_SIZE_4K);
    }
}





/**
 * 分配渲染内存
 * @param memory_ptr 内存指针
 */
void render_system_allocate_memory(undefined8 memory_ptr)
{
    undefined8 allocated_memory;
    
    // 分配4KB内存并清零
    allocated_memory = FUN_18062b1e0(memory_ptr, RENDER_BUFFER_SIZE_4K);
    memset(allocated_memory, 0, RENDER_BUFFER_SIZE_4K);
}





/**
 * 空函数（占位符）
 */
void render_system_empty_function_1(void)
{
    // 空函数，用于占位符
}





/**
 * 复制数据块到目标缓冲区
 * @param data_source 数据源指针
 * @param target_buffer 目标缓冲区指针
 * @param start_index 起始索引
 * @param block_count 块数量
 */
void render_system_copy_data_blocks(longlong data_source, undefined8 *target_buffer, uint start_index, uint block_count)
{
    undefined8 *source_ptr;
    longlong block_address;
    ulonglong page_index;
    undefined8 temp_data;
    longlong offset;
    uint current_index;
    ulonglong remaining_blocks;
    int current_item;
    ulonglong current_position;
    
    // 计算页索引
    page_index = start_index >> RENDER_SHIFT_MASK_13;
    current_position = (ulonglong)start_index;
    
    // 检查是否在同一页内
    if (page_index == start_index + block_count >> RENDER_SHIFT_MASK_13) {
        // 快速复制：直接内存复制
        memcpy(target_buffer, 
               *(longlong *)(data_source + 8 + page_index * 8) +
               (ulonglong)(start_index + page_index * -RENDER_PAGE_SIZE_8K) * RENDER_BLOCK_SIZE_64,
               (ulonglong)block_count << 6);
        return;
    }
    
    // 跨页复制：逐个块复制
    if (block_count != 0) {
        remaining_blocks = (ulonglong)block_count;
        do {
            current_item = (int)current_position;
            page_index = current_position >> RENDER_SHIFT_MASK_13;
            current_position = (ulonglong)(current_item + 1);
            block_address = *(longlong *)(data_source + 8 + page_index * 8);
            offset = (ulonglong)(uint)(current_item + (int)page_index * -RENDER_PAGE_SIZE_8K) * RENDER_BLOCK_SIZE_64;
            
            // 复制64字节数据块（8个8字节数据）
            temp_data = ((undefined8 *)(block_address + offset))[1];
            *target_buffer = *(undefined8 *)(block_address + offset);
            target_buffer[1] = temp_data;
            
            source_ptr = (undefined8 *)(block_address + 0x10 + offset);
            temp_data = source_ptr[1];
            target_buffer[2] = *source_ptr;
            target_buffer[3] = temp_data;
            
            source_ptr = (undefined8 *)(block_address + 0x20 + offset);
            temp_data = source_ptr[1];
            target_buffer[4] = *source_ptr;
            target_buffer[5] = temp_data;
            
            source_ptr = (undefined8 *)(block_address + 0x30 + offset);
            temp_data = source_ptr[1];
            target_buffer[6] = *source_ptr;
            target_buffer[7] = temp_data;
            
            remaining_blocks = remaining_blocks - 1;
            target_buffer = target_buffer + 8;
        } while (remaining_blocks != 0);
    }
}



/**
 * 计算矩阵变换
 * @param source_matrix 源矩阵指针
 * @param result_matrix 结果矩阵指针
 * @param transform_matrix 变换矩阵指针
 * @return 结果矩阵指针
 */
float *render_system_calculate_matrix_transform(float *source_matrix, float *result_matrix, float *transform_matrix)
{
    float src_w, src_x, src_y, src_z;
    float trans_w, trans_x, trans_y, trans_z;
    float dest_w, dest_x, dest_y, dest_z;
    float diff_w, diff_x, diff_y, diff_z;
    float max_float;
    undefined8 temp_result1;
    undefined8 temp_result2;
    
    // 计算位置差值
    diff_w = transform_matrix[4] - source_matrix[4];
    diff_x = transform_matrix[5] - source_matrix[5];
    diff_y = transform_matrix[6] - source_matrix[6];
    
    // 设置最大浮点数并计算差值
    max_float = RENDER_MAX_UNSIGNED_FLOAT;
    FUN_180285b40(RENDER_MAX_UNSIGNED_FLOAT, &temp_result1, &diff_w);
    
    // 提取矩阵数据
    dest_w = *transform_matrix;
    dest_x = transform_matrix[1];
    dest_y = transform_matrix[2];
    dest_z = transform_matrix[3];
    
    src_w = *source_matrix;
    src_x = source_matrix[1];
    src_y = source_matrix[2];
    src_z = source_matrix[3];
    
    // 存储临时结果
    *(undefined8 *)(result_matrix + 4) = temp_result1;
    *(undefined8 *)(result_matrix + 6) = temp_result2;
    
    // 计算矩阵变换结果
    *result_matrix = src_z * dest_z * 1.0 + dest_w * src_w * 1.0 + src_y * dest_y + src_x * dest_x;
    result_matrix[1] = src_y * dest_z * -1.0 + dest_w * src_x * -1.0 + src_w * dest_x + src_z * dest_y;
    result_matrix[2] = src_z * dest_x * -1.0 + dest_w * src_y * -1.0 + src_w * dest_y + src_x * dest_z;
    result_matrix[3] = src_x * dest_y * -1.0 + dest_w * src_z * -1.0 + src_w * dest_z + src_y * dest_x;
    
    return result_matrix;
}



/**
 * 应用矩阵运算
 * @param source_matrix 源矩阵指针
 * @param result_matrix 结果矩阵指针
 * @param transform_matrix 变换矩阵指针
 * @return 结果矩阵指针
 */
float *render_system_apply_matrix_operations(float *source_matrix, float *result_matrix, float *transform_matrix)
{
    float src_w, src_x, src_y, src_z;
    float trans_w, trans_x, trans_y, trans_z;
    float dest_w, dest_x, dest_y, dest_z;
    float temp_w, temp_x, temp_y, temp_z;
    float calc_w, calc_x, calc_y, calc_z;
    float *intermediate_result;
    undefined1 temp_buffer[88];
    
    // 计算中间结果
    intermediate_result = (float *)FUN_1801c0fb0(source_matrix, temp_buffer, transform_matrix + 4);
    
    // 提取源矩阵数据
    src_w = *source_matrix;
    src_x = source_matrix[1];
    src_y = source_matrix[2];
    src_z = source_matrix[3];
    
    // 提取变换矩阵数据
    trans_w = *transform_matrix;
    trans_x = transform_matrix[1];
    trans_y = transform_matrix[2];
    trans_z = transform_matrix[3];
    
    // 提取中间结果
    temp_w = source_matrix[5];
    temp_x = source_matrix[6];
    calc_y = intermediate_result[1];
    calc_z = intermediate_result[2];
    
    // 计算最终结果
    result_matrix[4] = *intermediate_result + source_matrix[4];
    result_matrix[5] = temp_w + calc_y;
    result_matrix[6] = temp_x + calc_z;
    result_matrix[7] = 3.4028235e+38; // 最大浮点数
    
    // 执行矩阵运算
    *result_matrix = src_z * trans_z * -1.0 + src_y * trans_y * -1.0 + (trans_w * src_w - src_x * trans_x);
    result_matrix[1] = src_y * trans_z * 1.0 + src_w * trans_x * 1.0 + (trans_w * src_x - src_z * trans_y);
    result_matrix[2] = src_z * trans_x * 1.0 + src_w * trans_y * 1.0 + (trans_w * src_y - src_x * trans_z);
    result_matrix[3] = src_x * trans_y * 1.0 + src_w * trans_z * 1.0 + (trans_w * src_z - src_y * trans_x);
    
    return result_matrix;
}



/**
 * 清理渲染资源
 * @param resource_ptr 资源指针
 * @return 资源指针
 */
longlong render_system_cleanup_resources(longlong resource_ptr)
{
    longlong current_ptr;
    longlong counter1;
    longlong counter2;
    
    // 清理第一块资源（64个16字节块）
    counter2 = RENDER_MAX_ITERATIONS_64;
    counter1 = RENDER_MAX_ITERATIONS_64;
    current_ptr = resource_ptr;
    
    do {
        func_0x000180074f10(current_ptr); // 清理函数
        current_ptr = current_ptr + 0x10;  // 移动到下一个块
        counter1 = counter1 - 1;
    } while (counter1 != 0);
    
    // 清理第二块资源（64个16字节块，从偏移0x820开始）
    current_ptr = resource_ptr + 0x820;
    do {
        func_0x000180074f10(current_ptr); // 清理函数
        current_ptr = current_ptr + 0x10;  // 移动到下一个块
        counter2 = counter2 - 1;
    } while (counter2 != 0);
    
    // 重置资源状态
    *(undefined1 *)(resource_ptr + 0x1040) = 0;
    *(undefined8 *)(resource_ptr + 0x810) = 0;
    
    return resource_ptr;
}





/**
 * 从字符串中移除指定字符
 * @param string_context 字符串上下文指针
 * @param target_char 要移除的字符
 */
void render_system_remove_character_from_string(longlong string_context, char target_char)
{
    char *string_start;
    ulonglong string_length;
    char *current_char;
    ulonglong char_position;
    ulonglong string_end;
    int char_index;
    
    // 获取字符串起始位置和长度
    string_start = *(char **)(string_context + 0xb0);
    char_index = 0;
    current_char = string_start;
    
    // 检查字符串是否为空
    if (*(char **)(string_context + 0xb8) != string_start) {
        // 查找目标字符
        while (*current_char != target_char) {
            char_index = char_index + 1;
            current_char = current_char + 1;
            
            // 检查是否超出字符串范围
            if ((ulonglong)((longlong)*(char **)(string_context + 0xb8) - (longlong)string_start) <=
                (ulonglong)(longlong)char_index) {
                return;
            }
        }
        
        // 获取字符串长度
        string_length = *(ulonglong *)(string_context + 0xb8);
        
        // 查找字符位置
        char_position = memchr(string_start, target_char, string_length - (longlong)string_start);
        string_end = string_length;
        
        if (char_position != 0) {
            string_end = char_position;
        }
        
        // 移动后续字符覆盖目标字符
        char_position = string_end + 1;
        if (char_position < string_length) {
            memmove(string_end, char_position, string_length - char_position);
        }
        
        // 更新字符串长度
        *(ulonglong *)(string_context + 0xb8) = string_length - 1;
    }
}





/**
 * 从缓冲区中移除字符
 * 注意：此函数有未定义的行为，memchr调用缺少参数
 */
void render_system_remove_character_from_buffer(void)
{
    ulonglong buffer_length;
    ulonglong char_position;
    ulonglong string_end;
    longlong buffer_context; // 未定义的寄存器变量
    
    // 获取缓冲区长度
    buffer_length = *(ulonglong *)(buffer_context + 0xb8);
    
    // 查找字符位置（有问题的调用）
    char_position = memchr(); // 缺少参数
    string_end = buffer_length;
    
    if (char_position != 0) {
        string_end = char_position;
    }
    
    // 移动后续字符
    char_position = string_end + 1;
    if (char_position < buffer_length) {
        memmove(string_end, char_position, buffer_length - char_position);
    }
    
    // 更新缓冲区长度
    *(ulonglong *)(buffer_context + 0xb8) = buffer_length - 1;
}





/**
 * 空函数（占位符）
 */
void render_system_empty_function_2(void)
{
    // 空函数，用于占位符
}





/**
 * 向字符串添加字符
 * @param string_context 字符串上下文指针
 * @param target_char 要添加的字符
 */
void render_system_add_character_to_string(longlong string_context, char target_char)
{
    char *string_start;
    int char_index;
    ulonglong string_length;
    char temp_buffer[24];
    
    char_index = 0;
    string_start = *(char **)(string_context + 0xb0);
    string_length = (longlong)*(char **)(string_context + 0xb8) - (longlong)string_start;
    
    // 检查字符串是否为空
    if (*(char **)(string_context + 0xb8) != string_start) {
        // 检查字符是否已存在
        do {
            if (*string_start == target_char) {
                return; // 字符已存在，直接返回
            }
            char_index = char_index + 1;
            string_start = string_start + 1;
        } while ((ulonglong)(longlong)char_index < string_length);
    }
    
    // 添加新字符
    temp_buffer[0] = target_char;
    FUN_180194a50((undefined8 *)(string_context + 0xb0), temp_buffer);
}



undefined8 *
FUN_180300f20(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a19fd8;
  plVar1 = (longlong *)param_1[0x19];
  param_1[0x19] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x38))();
  }
  FUN_180049470(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xd0,param_3,param_4,uVar2);
  }
  return param_1;
}



undefined8 *
FUN_180300fc0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc28;
  param_2[1] = param_2 + 3;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 2) = 0xd;
  strcpy_s(param_2[1],0x80,&UNK_180a19df0,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180301040(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_180244190();
  *param_1 = (longlong)&UNK_180a19eb0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb7) = 0x44000000;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0x44400000;
  *(undefined4 *)(param_1 + 0xb8) = 0x44800000;
  *(undefined4 *)((longlong)param_1 + 0x5c4) = 0x44c00000;
  *(undefined4 *)((longlong)param_1 + 0x5cc) = 0xab3abdf1;
  *(undefined4 *)((longlong)param_1 + 0x5d4) = 1;
  *(undefined4 *)(param_1 + 0xbb) = 1;
  *(undefined4 *)((longlong)param_1 + 0x5dc) = 1;
  param_1[0xbc] = 1;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  plVar2 = (longlong *)param_1[0xae];
  param_1[0xae] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar2 = (longlong *)param_1[0xaf];
  param_1[0xaf] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xba) = 2;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5b4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb0) = 0x400;
  iVar6 = 0;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 0;
  lVar7 = _DAT_180c86920;
  iVar1 = *(int *)(_DAT_180c86920 + 0xc40);
  iVar5 = iVar6;
  if ((-1 < iVar1) && (iVar5 = iVar1, 2 < iVar1)) {
    iVar5 = 2;
  }
  *(int *)(param_1 + 0xac) = iVar5;
  iVar1 = *(int *)(lVar7 + 0xcb0);
  iVar5 = iVar6;
  if ((-1 < iVar1) && (iVar5 = iVar1, 3 < iVar1)) {
    iVar5 = 3;
  }
  *(int *)((longlong)param_1 + 0x564) = iVar5;
  iVar1 = *(int *)(lVar7 + 0xd20);
  if ((-1 < iVar1) && (iVar6 = iVar1, 2 < iVar1)) {
    iVar6 = 2;
  }
  *(int *)(param_1 + 0xad) = iVar6;
  *(undefined2 *)(param_1 + 0xc2) = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  FUN_1808fc838(param_1 + 0xce,8,2,&SUB_18005d5f0,FUN_180045af0);
  param_1[0xda] = 0;
  FUN_180094c20(param_1 + 0xdc);
  param_1[0x106] = (longlong)&UNK_18098bcb0;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  param_1[0x106] = (longlong)&UNK_180a3c3e0;
  param_1[0x109] = 0;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  plVar2 = param_1 + 0x10b;
  *plVar2 = (longlong)&UNK_18098bcb0;
  param_1[0x10c] = 0;
  *(undefined4 *)(param_1 + 0x10d) = 0;
  *plVar2 = (longlong)&UNK_180a3c3e0;
  param_1[0x10e] = 0;
  param_1[0x10c] = 0;
  *(undefined4 *)(param_1 + 0x10d) = 0;
  puVar3 = *(undefined1 **)(_DAT_180c86890 + 0x7ab8);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 1;
  }
  lVar7 = 0x3ff0000000000000;
  lVar8 = 0x3ff0000000000000;
  if ((puVar3[0xd9] != '\0') && (iVar1 = *(int *)(_DAT_180c86920 + 0x540), iVar1 - 1U < 4)) {
    lVar7 = *(longlong *)(puVar3 + (longlong)iVar1 * 0x10 + -8);
    lVar8 = *(longlong *)(puVar3 + (longlong)iVar1 * 0x10);
  }
  param_1[0xa4] = lVar7;
  param_1[0xa5] = lVar8;
  plVar4 = (longlong *)param_1[0xda];
  param_1[0xda] = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x105) = 1;
  plVar4 = (longlong *)param_1[0xcb];
  param_1[0xcb] = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = (longlong *)param_1[0xca];
  param_1[0xca] = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined1 *)((longlong)param_1 + 0xdc) = 1;
  *(undefined4 *)((longlong)param_1 + 0x829) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 5;
  *(undefined4 *)(param_1 + 0x1f) = 5;
  *(undefined4 *)((longlong)param_1 + 0x824) = 0x1000101;
  *(undefined4 *)(param_1 + 0x1a) = 0xff000000;
  *(undefined4 *)(param_1 + 0xc5) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xd8) = 0x100;
  *(undefined4 *)(param_1 + 0x10a) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 1;
  plVar4 = (longlong *)param_1[0xcc];
  param_1[0xcc] = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,&DAT_180a0b1c0);
  *(undefined1 *)(param_1 + 0x10f) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3f800000;
  param_1[0xd9] = 0;
  *(undefined1 *)((longlong)param_1 + 0x81) = 0;
  param_1[0xc] = param_1[0xb];
  if ((*(float *)(param_1 + 0xb) != 1.0) || (*(float *)((longlong)param_1 + 0x5c) != 1.0)) {
    param_1[0xb] = 0x3f8000003f800000;
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  *(undefined4 *)((longlong)param_1 + 0x87c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10d) = 0;
  return param_1;
}



undefined8 FUN_1803014b0(undefined8 param_1,ulonglong param_2)

{
  FUN_180303590();
  if ((param_2 & 1) != 0) {
    free(param_1,0x880);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803014f0(longlong param_1)
void FUN_1803014f0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  byte bVar7;
  bool bVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  double dVar9;
  double dVar10;
  
  if (*(char *)(param_1 + 0x10b) != '\0') {
    plVar1 = (longlong *)(param_1 + 0x530);
    if ((*plVar1 != 0) && (cVar5 = FUN_1802c8c60(), cVar5 != '\0')) {
      lVar6 = FUN_1801f20c0(extraout_XMM0_Qa,*plVar1 + 0x18,*(undefined4 *)(*plVar1 + 0x94));
      *(undefined4 *)(lVar6 + 0x90) = 0x3c888889;
      *(undefined4 *)(lVar6 + 0x40) = 0x40000000;
      FUN_180056f10(plVar1,lVar6);
    }
    if ((*(longlong *)(param_1 + 0x538) != 0) && (cVar5 = FUN_1802c8c60(), cVar5 != '\0')) {
      lVar6 = FUN_1801f20c0(extraout_XMM0_Qa_00,*(longlong *)(param_1 + 0x538) + 0x18,
                            *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x94));
      *(undefined4 *)(lVar6 + 0x90) = 0x3c888889;
      *(undefined4 *)(lVar6 + 0x40) = 0x40000000;
      FUN_180056f10(param_1 + 0x538,lVar6);
    }
    if ((*(longlong *)(param_1 + 0x540) != 0) && (cVar5 = FUN_1802c8c60(), cVar5 != '\0')) {
      lVar6 = FUN_1801f20c0(extraout_XMM0_Qa_01,*(longlong *)(param_1 + 0x540) + 0x18,
                            *(undefined4 *)(*(longlong *)(param_1 + 0x540) + 0x94));
      *(undefined4 *)(lVar6 + 0x90) = 0x3c888889;
      *(undefined4 *)(lVar6 + 0x40) = 0x40000000;
      FUN_180056f10(param_1 + 0x540,lVar6);
    }
    if ((*(longlong *)(param_1 + 0x550) != 0) && (cVar5 = FUN_1802c8c60(), cVar5 != '\0')) {
      lVar6 = FUN_1801f20c0(extraout_XMM0_Qa_02,*(longlong *)(param_1 + 0x550) + 0x18,
                            *(undefined4 *)(*(longlong *)(param_1 + 0x550) + 0x94));
      *(undefined4 *)(lVar6 + 0x90) = 0x3c888889;
      *(undefined4 *)(lVar6 + 0x40) = 0x40000000;
      FUN_180056f10(param_1 + 0x550,lVar6);
    }
    if ((*(longlong *)(param_1 + 0x558) != 0) && (cVar5 = FUN_1802c8c60(), cVar5 != '\0')) {
      lVar6 = FUN_1801f20c0(extraout_XMM0_Qa_03,*(longlong *)(param_1 + 0x558) + 0x18,
                            *(undefined4 *)(*(longlong *)(param_1 + 0x558) + 0x94));
      *(undefined4 *)(lVar6 + 0x90) = 0x3c888889;
      *(undefined4 *)(lVar6 + 0x40) = 0x40000000;
      FUN_180056f10(param_1 + 0x558,lVar6);
    }
    if ((*(longlong *)(param_1 + 0x548) != 0) && (cVar5 = FUN_1802c8c60(), cVar5 != '\0')) {
      lVar6 = FUN_1801f20c0(extraout_XMM0_Qa_04,*(longlong *)(param_1 + 0x548) + 0x18,
                            *(undefined4 *)(*(longlong *)(param_1 + 0x548) + 0x94));
      *(undefined4 *)(lVar6 + 0x90) = 0x3c888889;
      *(undefined4 *)(lVar6 + 0x40) = 0x40000000;
      FUN_180056f10(param_1 + 0x548,lVar6);
    }
    lVar6 = *plVar1;
    if ((lVar6 != 0) && (lVar3 = *(longlong *)(lVar6 + 0x48), lVar3 != 0)) {
      lVar4 = *(longlong *)(param_1 + 0x6d0);
      if ((lVar4 == 0) ||
         (((*(float *)(lVar4 + 0x3f58) == 0.0 && (*(float *)(lVar4 + 0x3f5c) == 0.0)) ||
          (*(char *)(_DAT_180c86890 + 0x1504) != '\0')))) {
        bVar7 = 0;
      }
      else {
        bVar7 = 1;
      }
      bVar8 = false;
      if (((byte)(*(uint *)(lVar6 + 0x10) >> 3) & 1) != bVar7) {
        cVar5 = FUN_1802c98d0(lVar3,lVar6,8,bVar7,0);
        bVar8 = cVar5 != '\0';
      }
      if (((byte)(*(uint *)(*plVar1 + 0x10) >> 0xb) & 1) != *(byte *)(param_1 + 0x10a)) {
        if ((bVar8) ||
           (cVar5 = FUN_1802c98d0(lVar3,*plVar1,0x800,*(byte *)(param_1 + 0x10a),0), cVar5 != '\0'))
        {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
      }
      dVar9 = 1.0;
      dVar10 = 1.0;
      lVar6 = *(longlong *)(_DAT_180c86890 + 0x7ab8);
      if ((*(char *)(lVar6 + 0xd9) != '\0') &&
         (iVar2 = *(int *)(_DAT_180c86920 + 0x540), iVar2 - 1U < 4)) {
        dVar9 = *(double *)(lVar6 + -8 + (longlong)iVar2 * 0x10);
        dVar10 = *(double *)(lVar6 + (longlong)iVar2 * 0x10);
      }
      if ((dVar9 != *(double *)(param_1 + 0x520)) || (dVar10 != *(double *)(param_1 + 0x528))) {
        *(double *)(param_1 + 0x520) = dVar9;
        *(double *)(param_1 + 0x528) = dVar10;
        if (!bVar8) {
          FUN_1802c98d0(lVar3,*plVar1,0x80000000,0,1);
        }
      }
      *(undefined1 *)(param_1 + 0x10a) = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180301506(longlong param_1)
void FUN_180301506(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong unaff_RBX;
  byte bVar7;
  bool bVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  double dVar9;
  double dVar10;
  
  plVar1 = (longlong *)(param_1 + 0x530);
  if ((*plVar1 != 0) && (cVar5 = FUN_1802c8c60(), cVar5 != '\0')) {
    lVar6 = FUN_1801f20c0(extraout_XMM0_Qa,*plVar1 + 0x18,*(undefined4 *)(*plVar1 + 0x94));
    *(undefined4 *)(lVar6 + 0x90) = 0x3c888889;
    *(undefined4 *)(lVar6 + 0x40) = 0x40000000;
    FUN_180056f10(plVar1,lVar6);
  }
  if ((*(longlong *)(unaff_RBX + 0x538) != 0) && (cVar5 = FUN_1802c8c60(), cVar5 != '\0')) {
    lVar6 = FUN_1801f20c0(extraout_XMM0_Qa_00,*(longlong *)(unaff_RBX + 0x538) + 0x18,
                          *(undefined4 *)(*(longlong *)(unaff_RBX + 0x538) + 0x94));
    *(undefined4 *)(lVar6 + 0x90) = 0x3c888889;
    *(undefined4 *)(lVar6 + 0x40) = 0x40000000;
    FUN_180056f10(unaff_RBX + 0x538,lVar6);
  }
  if ((*(longlong *)(unaff_RBX + 0x540) != 0) && (cVar5 = FUN_1802c8c60(), cVar5 != '\0')) {
    lVar6 = FUN_1801f20c0(extraout_XMM0_Qa_01,*(longlong *)(unaff_RBX + 0x540) + 0x18,
                          *(undefined4 *)(*(longlong *)(unaff_RBX + 0x540) + 0x94));
    *(undefined4 *)(lVar6 + 0x90) = 0x3c888889;
    *(undefined4 *)(lVar6 + 0x40) = 0x40000000;
    FUN_180056f10(unaff_RBX + 0x540,lVar6);
  }
  if ((*(longlong *)(unaff_RBX + 0x550) != 0) && (cVar5 = FUN_1802c8c60(), cVar5 != '\0')) {
    lVar6 = FUN_1801f20c0(extraout_XMM0_Qa_02,*(longlong *)(unaff_RBX + 0x550) + 0x18,
                          *(undefined4 *)(*(longlong *)(unaff_RBX + 0x550) + 0x94));
    *(undefined4 *)(lVar6 + 0x90) = 0x3c888889;
    *(undefined4 *)(lVar6 + 0x40) = 0x40000000;
    FUN_180056f10(unaff_RBX + 0x550,lVar6);
  }
  if ((*(longlong *)(unaff_RBX + 0x558) != 0) && (cVar5 = FUN_1802c8c60(), cVar5 != '\0')) {
    lVar6 = FUN_1801f20c0(extraout_XMM0_Qa_03,*(longlong *)(unaff_RBX + 0x558) + 0x18,
                          *(undefined4 *)(*(longlong *)(unaff_RBX + 0x558) + 0x94));
    *(undefined4 *)(lVar6 + 0x90) = 0x3c888889;
    *(undefined4 *)(lVar6 + 0x40) = 0x40000000;
    FUN_180056f10(unaff_RBX + 0x558,lVar6);
  }
  if ((*(longlong *)(unaff_RBX + 0x548) != 0) && (cVar5 = FUN_1802c8c60(), cVar5 != '\0')) {
    lVar6 = FUN_1801f20c0(extraout_XMM0_Qa_04,*(longlong *)(unaff_RBX + 0x548) + 0x18,
                          *(undefined4 *)(*(longlong *)(unaff_RBX + 0x548) + 0x94));
    *(undefined4 *)(lVar6 + 0x90) = 0x3c888889;
    *(undefined4 *)(lVar6 + 0x40) = 0x40000000;
    FUN_180056f10(unaff_RBX + 0x548,lVar6);
  }
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    lVar3 = *(longlong *)(lVar6 + 0x48);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(unaff_RBX + 0x6d0);
      if ((lVar4 == 0) ||
         (((*(float *)(lVar4 + 0x3f58) == 0.0 && (*(float *)(lVar4 + 0x3f5c) == 0.0)) ||
          (*(char *)(_DAT_180c86890 + 0x1504) != '\0')))) {
        bVar7 = 0;
      }
      else {
        bVar7 = 1;
      }
      bVar8 = false;
      if (((byte)(*(uint *)(lVar6 + 0x10) >> 3) & 1) != bVar7) {
        cVar5 = FUN_1802c98d0(lVar3,lVar6,8,bVar7,0);
        bVar8 = cVar5 != '\0';
      }
      if (((byte)(*(uint *)(*plVar1 + 0x10) >> 0xb) & 1) != *(byte *)(unaff_RBX + 0x10a)) {
        if ((bVar8) ||
           (cVar5 = FUN_1802c98d0(lVar3,*plVar1,0x800,*(byte *)(unaff_RBX + 0x10a),0), cVar5 != '\0'
           )) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
      }
      dVar9 = 1.0;
      dVar10 = 1.0;
      lVar6 = *(longlong *)(_DAT_180c86890 + 0x7ab8);
      if ((*(char *)(lVar6 + 0xd9) != '\0') &&
         (iVar2 = *(int *)(_DAT_180c86920 + 0x540), iVar2 - 1U < 4)) {
        dVar9 = *(double *)(lVar6 + -8 + (longlong)iVar2 * 0x10);
        dVar10 = *(double *)(lVar6 + (longlong)iVar2 * 0x10);
      }
      if ((dVar9 != *(double *)(unaff_RBX + 0x520)) || (dVar10 != *(double *)(unaff_RBX + 0x528))) {
        *(double *)(unaff_RBX + 0x520) = dVar9;
        *(double *)(unaff_RBX + 0x528) = dVar10;
        if (!bVar8) {
          FUN_1802c98d0(lVar3,*plVar1,0x80000000,0,1);
        }
      }
      *(undefined1 *)(unaff_RBX + 0x10a) = 0;
      return;
    }
    return;
  }
  return;
}





// 函数: void FUN_18030181f(void)
void FUN_18030181f(void)

{
  return;
}



undefined8 *
FUN_180301830(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0xf,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (undefined4 *)param_2[1];
  *puVar1 = 0x536c6772;
  puVar1[1] = 0x656e6563;
  puVar1[2] = 0x6569765f;
  puVar1[3] = 0x3a3a77;
  *(undefined4 *)(param_2 + 2) = 0xf;
  uVar3 = 1;
  lVar2 = *(longlong *)(param_1 + 0x6d0);
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x4e8))) {
    FUN_1806277c0(param_2,*(int *)(param_2 + 2) + *(int *)(lVar2 + 0x4e8));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_2 + 2) + param_2[1],*(undefined8 *)(lVar2 + 0x4e0),
           (longlong)(*(int *)(lVar2 + 0x4e8) + 1),param_4,uVar3);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180301910(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined2 uStack_c8;
  undefined1 uStack_c6;
  undefined4 uStack_c4;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined1 uStack_76;
  undefined4 uStack_74;
  undefined1 uStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if ((char)param_1[0x10f] == '\0') {
    lVar4 = FUN_180302c30();
    param_1[0xa3] = lVar4;
  }
  *(undefined1 *)(param_1 + 0x10f) = 0;
  lVar4 = param_1[0xa3];
  lVar6 = 0;
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x99b8) != 0)) {
    plVar1 = *(longlong **)(lVar4 + 0x96a0);
    *(undefined8 *)(lVar4 + 0x96a0) = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  if (param_1[0xda] == 0) goto LAB_180301ce4;
  puVar5 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x18,0x13);
  *(undefined1 *)puVar5 = 0;
  uVar2 = FUN_18064e990(puVar5);
  *puVar5 = 0x536c6772;
  puVar5[1] = 0x656e6563;
  puVar5[2] = 0x6569765f;
  puVar5[3] = 0x723a3a77;
  *(undefined8 *)(puVar5 + 4) = 0x3a3a7265646e65;
  lVar4 = param_1[0xda];
  iVar3 = *(int *)(lVar4 + 0x4e8);
  if (0 < iVar3) {
    if ((iVar3 != -0x17) && (uVar2 < iVar3 + 0x18U)) {
      puVar5 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar5,iVar3 + 0x18U,0x10,0x13);
      FUN_18064e990(puVar5);
      iVar3 = *(int *)(lVar4 + 0x4e8);
    }
                    // WARNING: Subroutine does not return
    memcpy((undefined1 *)((longlong)puVar5 + 0x17),*(undefined8 *)(lVar4 + 0x4e0),
           (longlong)(iVar3 + 1));
  }
  lVar6 = FUN_180302370(param_1,param_2);
  if ((*(char *)((longlong)param_1 + 0x827) == '\0') ||
     (((char)param_1[0x104] != '\0' && ((int)param_1[0x1f] < 0)))) {
    if (*(char *)((longlong)param_1 + 0x829) == '\0') {
      *(undefined2 *)(param_1 + 0x104) = 0x101;
      *(undefined1 *)(param_1[0xda] + 0x60b90) = 1;
      *(undefined1 *)(param_1[0xda] + 0x60b91) = 1;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0xdd) = 0;
      (**(code **)(*param_1 + 0xc0))(param_1);
      FUN_180304100(param_1,1,1);
    }
  }
  else {
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_cc = 0xffffffff;
    uStack_c6 = 0;
    uStack_c4 = 0xffffffff;
    uStack_c0 = 1;
    uStack_b8 = 0;
    lStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 3;
    uStack_90 = 0;
    uStack_c8 = 0;
    if ((*(int *)(param_1[0xda] + 0x27c0) == 1) &&
       (iVar3 = FUN_1801a3620(param_1[0xda],&uStack_d8), iVar3 != 0)) {
      *(int *)(param_1 + 0x10a) = (int)param_1[0x10a] + 1;
      if (100 < (int)param_1[0x10a]) {
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_7c = 0xffffffff;
        uStack_78 = 1;
        uStack_76 = 0;
        uStack_74 = 0xffffffff;
        uStack_70 = 1;
        uStack_68 = 0;
        lStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 3;
        uStack_40 = 0;
        FUN_1801a3620(param_1[0xda],&uStack_88);
        *(undefined4 *)(param_1 + 0x10a) = 0;
        if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
LAB_180301bf4:
      if (*(int *)((longlong)param_1 + 0xfc) != (int)param_1[0x1f]) goto LAB_180301c02;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x821) = 1;
      *(undefined1 *)(param_1[0xda] + 0x60b91) = 1;
      if ((*(int *)(param_1[0xda] + 0x27c0) < 7) ||
         ((*(int *)(lVar6 + 0x124e8) != 0 || (*(int *)(lVar6 + 0x124ec) != 0)))) goto LAB_180301bf4;
LAB_180301c02:
      if ((int)param_1[0x1f] == 0) {
        *(undefined1 *)(_DAT_180c86950 + 0x15f8) = 0;
      }
      else {
        *(undefined2 *)(param_1 + 0x104) = 0x101;
        *(undefined1 *)(param_1[0xda] + 0x60b90) = 1;
        *(undefined1 *)(param_1[0xda] + 0x60b91) = 1;
      }
      *(int *)(param_1 + 0x1f) = (int)param_1[0x1f] + -1;
    }
    if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if (puVar5 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar5);
  }
LAB_180301ce4:
  param_1[0xa3] = 0;
  return lVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



