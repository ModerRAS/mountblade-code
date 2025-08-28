#include "TaleWorlds.Native.Split.h"

/**
 * 03_rendering_part122.c - 渲染系统字符串处理和输出格式化模块
 * 
 * 本模块包含1个核心函数，主要功能：
 * - 渲染系统字符串处理和格式化输出
 * - 渲染系统状态信息生成和输出
 * - 渲染系统属性和配置信息处理
 * - 渲染系统调试信息输出控制
 * 
 * 主要函数：
 * - rendering_system_string_processor_and_formatter: 渲染系统字符串处理器和格式化器
 */

// 全局常量定义
#define RENDERING_SYSTEM_STRING_BUFFER_SIZE 0x18
#define RENDERING_SYSTEM_HEADER_MAGIC 0x65786950
#define RENDERING_SYSTEM_OUTPUT_TERMINATOR 0xa3b
#define RENDERING_SYSTEM_FORMAT_SPECIFIER 0x20666923

/**
 * 渲染系统字符串处理器和格式化器
 * 
 * 该函数负责处理渲染系统中的字符串操作，包括：
 * - 字符串缓冲区初始化和管理
 * - 渲染状态信息的格式化输出
 * - 系统属性和配置信息的处理
 * - 调试信息的生成和控制
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 输出缓冲区指针
 * @param param_3 渲染系统状态数据指针
 * @return void 无返回值
 */
void rendering_system_string_processor_and_formatter(void* param_1, longlong param_2, longlong param_3)
{
    // 局部变量声明
    uint32_t temp_var1;
    uint32_t temp_var2;
    uint32_t* buffer_ptr;
    uint8_t* data_ptr;
    uint32_t* output_ptr;
    uint64_t* long_ptr;
    uint16_t* short_ptr;
    longlong temp_long;
    uint32_t temp_uint;
    uint64_t temp_ulong1;
    uint64_t temp_ulong2;
    int temp_int1;
    int temp_int2;
    longlong temp_long2;
    uint* uint_ptr;
    uint64_t temp_ulong3;
    uint64_t temp_ulong4;
    int temp_int3;
    uint32_t temp_var3;
    
    // 初始化变量
    temp_ulong1 = 0;
    
    // 分配并初始化字符串缓冲区
    buffer_ptr = (uint32_t*)rendering_system_memory_allocator(_DAT_180c8ed18, 
                                                           RENDERING_SYSTEM_STRING_BUFFER_SIZE, 
                                                           0x13);
    *(uint8_t*)buffer_ptr = 0;
    rendering_system_buffer_initializer(buffer_ptr);
    
    // 设置缓冲区头部标识
    *buffer_ptr = RENDERING_SYSTEM_HEADER_MAGIC;  // "Pixe"
    buffer_ptr[1] = 0x68735f6c;  // "hs_l"
    buffer_ptr[2] = 0x72656461;  // "reda"
    buffer_ptr[3] = 0x706e695f;  // "pni_"
    *(uint64_t*)(buffer_ptr + 4) = 0x657079745f7475;  // "eputy_tu"
    
    // 处理输出缓冲区
    temp_int3 = *(int*)(param_2 + 0x10);
    temp_int1 = temp_int3 + 0x11;
    rendering_system_buffer_expander(param_2, temp_int1);
    
    // 写入格式化头部信息
    output_ptr = (uint32_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
    *output_ptr = RENDERING_SYSTEM_FORMAT_SPECIFIER;  // " #fi"
    output_ptr[1] = 0x45584950;  // "EXIP"
    output_ptr[2] = 0x48535f4c;  // "HS_L"
    output_ptr[3] = 0x52454441;  // "REDA"
    *(uint16_t*)(output_ptr + 4) = 10;  // 换行符
    *(int*)(param_2 + 0x10) = temp_int1;
    
    // 条件处理：检查渲染状态标志
    if (*(char*)(param_3 + 0x10f8) == '\0') {
        // 扩展输出缓冲区并写入状态信息
        rendering_system_buffer_expander(param_2, temp_int3 + 0x39);
        long_ptr = (uint64_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
        *long_ptr = 0x504c412120666923;  // "#fi PLA "
        long_ptr[1] = 0x20545345545f4148;  // "HAT_TEST "
        *(uint32_t*)(long_ptr + 2) = 0x21202626;  // "&& !"
        *(uint32_t*)((longlong)long_ptr + 0x14) = 0x5f455355;  // "USE_"
        *(uint32_t*)(long_ptr + 3) = 0x4f4f4d53;  // "SMOO"
        *(uint32_t*)((longlong)long_ptr + 0x1c) = 0x465f4854;  // "TH_F"
        long_ptr[4] = 0xa54554f5f454441;  // "ADE_TTUT"
        *(uint8_t*)(long_ptr + 5) = 0;
        *(int*)(param_2 + 0x10) = temp_int3 + 0x39;
        
        // 写入渲染系统属性信息
        rendering_system_buffer_expander(param_2, temp_int3 + 0x4d);
        output_ptr = (uint32_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
        *output_ptr = 0x7261655b;  // "[ear"
        output_ptr[1] = 0x6564796c;  // "lyde"
        output_ptr[2] = 0x73687470;  // "pths"
        output_ptr[3] = 0x636e6574;  // "tenc"
        output_ptr[4] = 0xa5d6c69;  // "il]"
        *(uint8_t*)(output_ptr + 5) = 0;
        *(int*)(param_2 + 0x10) = temp_int3 + 0x4d;
        
        temp_int1 = temp_int3 + 0x54;
        rendering_system_buffer_expander(param_2, temp_int1);
        *(uint64_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8)) = 0xa6669646e6523;  // "#endif"
        *(int*)(param_2 + 0x10) = temp_int1;
    }
    
    // 写入输出系统信息
    rendering_system_buffer_expander(param_2, temp_int1 + 0x19);
    output_ptr = (uint32_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
    *output_ptr = 0x4f5f5350;  // "PS_O"
    output_ptr[1] = 0x55505455;  // "UTPU"
    output_ptr[2] = 0x4f545f54;  // "T_TO"
    output_ptr[3] = 0x4553555f;  // "_USE"
    *(uint64_t*)(output_ptr + 4) = 0x73705f6e69616d20;  // " main_ps"
    *(uint16_t*)(output_ptr + 6) = 0x28;  // "("
    *(int*)(param_2 + 0x10) = temp_int1 + 0x19;
    
    // 复制缓冲区头部信息到输出
    rendering_system_buffer_expander(param_2, temp_int1 + 0x30);
    output_ptr = (uint32_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
    temp_var3 = buffer_ptr[1];
    temp_var1 = buffer_ptr[2];
    temp_var2 = buffer_ptr[3];
    *output_ptr = *buffer_ptr;
    output_ptr[1] = temp_var3;
    output_ptr[2] = temp_var1;
    output_ptr[3] = temp_var2;
    *(uint64_t*)(output_ptr + 4) = *(uint64_t*)(buffer_ptr + 4);
    *(int*)(param_2 + 0x10) = temp_int1 + 0x30;
    
    // 写入格式化字符串结束标记
    rendering_system_buffer_expander(param_2, temp_int1 + 0x35);
    output_ptr = (uint32_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
    *output_ptr = 0x296e4920;  // " In)"
    *(uint16_t*)(output_ptr + 1) = RENDERING_SYSTEM_OUTPUT_TERMINATOR;  // 终止符
    *(int*)(param_2 + 0x10) = temp_int1 + 0x35;
    
    // 写入额外的格式化信息
    rendering_system_buffer_expander(param_2, temp_int1 + 0x37);
    short_ptr = (uint16_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
    *short_ptr = 0xa7b;  // 特殊标记
    *(uint8_t*)(short_ptr + 1) = 0;
    *(int*)(param_2 + 0x10) = temp_int1 + 0x37;
    
    // 处理渲染系统状态输出
    rendering_system_buffer_expander(param_2, temp_int1 + 0x67);
    long_ptr = (uint64_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
    *long_ptr = 0x5054554f5f535009;  // ".PS_OUTPU"
    long_ptr[1] = 0x53555f4f545f5455;  // "UT_TOUT_S"
    *(uint32_t*)(long_ptr + 2) = 0x754f2045;  // "E Ou"
    *(uint32_t*)((longlong)long_ptr + 0x14) = 0x74757074;  // "tput"
    *(uint32_t*)(long_ptr + 3) = 0x28203d20;  // " = ("
    *(uint32_t*)((longlong)long_ptr + 0x1c) = 0x4f5f5350;  // "PS_O"
    *(uint32_t*)(long_ptr + 4) = 0x55505455;  // "UTPU"
    *(uint32_t*)((longlong)long_ptr + 0x24) = 0x4f545f54;  // "T_TO"
    *(uint32_t*)(long_ptr + 5) = 0x4553555f;  // "_USE"
    *(uint32_t*)((longlong)long_ptr + 0x2c) = 0xa3b3029;  // ")..."
    *(uint8_t*)(long_ptr + 6) = 0;
    *(int*)(param_2 + 0x10) = temp_int1 + 0x67;
    
    // 处理像素状态信息
    rendering_system_buffer_expander(param_2, temp_int1 + 0xae);
    long_ptr = (uint64_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
    *long_ptr = 0x7869705f72655009;  // ".per_pix"
    long_ptr[1] = 0x69746174735f6c65;  // "el_stats"
    long_ptr[2] = 0x6261697261765f63;  // "c_variab"
    long_ptr[3] = 0x735f70702073656c;  // "les pp "
    long_ptr[4] = 0x203d206369746174;  // "tatic ="
    long_ptr[5] = 0x7869705f72655028;  // "(per_pix"
    *(uint32_t*)(long_ptr + 6) = 0x735f6c65;  // "el_s"
    *(uint32_t*)((longlong)long_ptr + 0x34) = 0x69746174;  // "tati"
    *(uint32_t*)(long_ptr + 7) = 0x61765f63;  // "c_va"
    *(uint32_t*)((longlong)long_ptr + 0x3c) = 0x62616972;  // "riab"
    long_ptr[8] = 0xa3b302973656c;  // "les)..."
    *(int*)(param_2 + 0x10) = temp_int1 + 0xae;
    
    // 处理模态变量信息
    rendering_system_buffer_expander(param_2, temp_int1 + 0x102);
    long_ptr = (uint64_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
    *long_ptr = 0x7869705f72655009;  // ".per_pix"
    long_ptr[1] = 0x6669646f6d5f6c65;  // "el_modif"
    long_ptr[2] = 0x61765f656c626169;  // "iable_var"
    long_ptr[3] = 0x2073656c62616972;  // "riable "
    long_ptr[4] = 0x6669646f6d5f7070;  // "pp_modif"
    long_ptr[5] = 0x203d20656c626169;  // "iable ="
    *(uint32_t*)(long_ptr + 6) = 0x72655028;  // "(per"
    *(uint32_t*)((longlong)long_ptr + 0x34) = 0x7869705f;  // "_pix"
    *(uint32_t*)(long_ptr + 7) = 0x6d5f6c65;  // "el_m"
    *(uint32_t*)((longlong)long_ptr + 0x3c) = 0x6669646f;  // "odif"
    *(uint32_t*)(long_ptr + 8) = 0x6c626169;  // "iabl"
    *(uint32_t*)((longlong)long_ptr + 0x44) = 0x61765f65;  // "e_va"
    *(uint32_t*)(long_ptr + 9) = 0x62616972;  // "riab"
    *(uint32_t*)((longlong)long_ptr + 0x4c) = 0x2973656c;  // "les)"
    *(uint32_t*)(long_ptr + 10) = 0xa0a3b30;  // "..."
    *(uint8_t*)((longlong)long_ptr + 0x54) = 0;
    *(int*)(param_2 + 0x10) = temp_int1 + 0x102;
    
    // 处理用户属性信息
    rendering_system_buffer_expander(param_2, temp_int1 + 0x14d);
    long_ptr = (uint64_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
    *long_ptr = 0x7869705f72655009;  // ".per_pix"
    long_ptr[1] = 0x6c697875615f6c65;  // "el_auxil"
    long_ptr[2] = 0x7261765f79726169;  // "iary_var"
    long_ptr[3] = 0x702073656c626169;  // "riable p"
    long_ptr[4] = 0x203d207875615f70;  // "p_auxil"
    long_ptr[5] = 0x7869705f72655028;  // "(per_pix"
    *(uint32_t*)(long_ptr + 6) = 0x615f6c65;  // "el_a"
    *(uint32_t*)((longlong)long_ptr + 0x34) = 0x6c697875;  // "uxil"
    *(uint32_t*)(long_ptr + 7) = 0x79726169;  // "iary"
    *(uint32_t*)((longlong)long_ptr + 0x3c) = 0x7261765f;  // "_var"
    long_ptr[8] = 0x302973656c626169;  // "iable)0"
    *(uint32_t*)(long_ptr + 9) = 0xa0a3b;  // ".."
    *(int*)(param_2 + 0x10) = temp_int1 + 0x14d;
    
    temp_int1 = temp_int1 + 0x184;
    rendering_system_buffer_expander(param_2, temp_int1);
    long_ptr = (uint64_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
    *long_ptr = 0x616c75636c616309;  // ".calcula"
    long_ptr[1] = 0x705f7265705f6574;  // "te_per_s"
    long_ptr[2] = 0x6174735f6c657869;  // "ixel_sta"
    long_ptr[3] = 0x697261765f636974;  // "tic_vari"
    temp_var3 = 0x656c6261;  // "able"
    *(uint32_t*)(long_ptr + 4) = 0x656c6261;  // "able"
    *(uint32_t*)((longlong)long_ptr + 0x24) = 0x6e492873;  // "s(In"
    *(uint32_t*)(long_ptr + 5) = 0x7070202c;  // ", pp"
    *(uint32_t*)((longlong)long_ptr + 0x2c) = 0x6174735f;  // "_sta"
    long_ptr[6] = 0xa0a3b29636974;  // "tic)..."
    *(int*)(param_2 + 0x10) = temp_int1;
    
    // 处理渲染系统状态数据
    temp_long = *(longlong*)(param_3 + 0x498) - *(longlong*)(param_3 + 0x490);
    temp_long2 = temp_long >> 0x3f;
    temp_ulong2 = temp_ulong1;
    temp_ulong4 = temp_ulong1;
    
    // 遍历处理状态数据块
    if (temp_long / 0x98 + temp_long2 != temp_long2) {
        do {
            temp_int2 = temp_int1 + 1;
            rendering_system_buffer_expander(param_2, temp_int2);
            *(uint16_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8)) = 9;
            *(int*)(param_2 + 0x10) = temp_int2;
            
            temp_long2 = *(longlong*)(param_3 + 0x490);
            temp_int3 = *(int*)(temp_long2 + 0x10 + temp_ulong4);
            if (0 < temp_int3) {
                rendering_system_buffer_expander(param_2, temp_int2 + temp_int3);
                // 复制状态数据到输出缓冲区
                memcpy((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8),
                       *(uint64_t*)(temp_long2 + 8 + temp_ulong4),
                       (longlong)(*(int*)(temp_long2 + 0x10 + temp_ulong4) + 1));
            }
            
            temp_int1 = temp_int1 + 7;
            temp_var3 = rendering_system_buffer_expander(param_2, temp_int1);
            output_ptr = (uint32_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
            *output_ptr = 0x296e4928;  // "(In)"
            *(uint16_t*)(output_ptr + 1) = 0xa3b;  // 终止符
            *(uint8_t*)((longlong)output_ptr + 6) = 0;
            *(int*)(param_2 + 0x10) = temp_int1;
            
            temp_uint = (int)temp_ulong2 + 1;
            temp_ulong2 = (uint64_t)temp_uint;
            temp_ulong4 = temp_ulong4 + 0x98;
        } while ((uint64_t)(longlong)(int)temp_uint <
                 (uint64_t)((*(longlong*)(param_3 + 0x498) - *(longlong*)(param_3 + 0x490)) / 0x98));
    }
    
    // 处理渲染系统属性数据
    do {
        if (temp_ulong1 != 5) {
            if (*(int*)(param_3 + (temp_ulong1 * 0x26 + 0x290) * 4) != 0) {
                temp_int3 = *(int*)(param_2 + 0x10);
                temp_int2 = temp_int3 + 1;
                rendering_system_buffer_expander(param_2, temp_int2);
                *(uint16_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8)) = 9;
                *(int*)(param_2 + 0x10) = temp_int2;
                
                temp_int1 = *(int*)(param_3 + (temp_ulong1 * 0x26 + 0x290) * 4);
                if (0 < temp_int1) {
                    rendering_system_buffer_expander(param_2, temp_int2 + temp_int1);
                    // 复制属性数据到输出缓冲区
                    memcpy((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8),
                           *(uint64_t*)(param_3 + (temp_ulong1 * 0x26 + 0x28e) * 4),
                           (longlong)(*(int*)(param_3 + (temp_ulong1 * 0x26 + 0x290) * 4) + 1));
                }
                
                rendering_system_buffer_expander(param_2, temp_int3 + 0x20);
                output_ptr = (uint32_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
                *output_ptr = 0x206e4928;  // "(In "
                output_ptr[1] = 0x7070202c;  // ", pp"
                output_ptr[2] = 0x6174735f;  // "_sta"
                output_ptr[3] = 0x20636974;  // "tic "
                output_ptr[4] = 0x7070202c;  // ", pp"
                output_ptr[5] = 0x646f6d5f;  // "_mod"
                output_ptr[6] = 0x61696669;  // "ifia"
                output_ptr[7] = 0x656c62;  // "ble"
                *(int*)(param_2 + 0x10) = temp_int3 + 0x20;
                
                temp_int1 = temp_int3 + 0x28;
                if (temp_ulong1 - 7 < 2) {
                    rendering_system_buffer_expander(param_2, temp_int1);
                    long_ptr = (uint64_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
                    *long_ptr = 0x74757074754f202c;  // ", OUTPUT"
                } else {
                    rendering_system_buffer_expander(param_2, temp_int1);
                    long_ptr = (uint64_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
                    *long_ptr = 0x7875615f7070202c;  // ", pp_aux"
                }
                *(uint8_t*)(long_ptr + 1) = 0;
                *(int*)(param_2 + 0x10) = temp_int1;
                
                temp_var3 = rendering_system_buffer_expander(param_2, temp_int3 + 0x2b);
                *(uint32_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8)) = 0xa3b29;  // ")..."
                *(int*)(param_2 + 0x10) = temp_int3 + 0x2b;
            }
            
            if (temp_ulong1 == 1) {
                temp_var3 = rendering_system_attribute_processor(temp_var3, param_2, param_3);
            }
        }
        temp_ulong1 = temp_ulong1 + 1;
    } while ((longlong)temp_ulong1 < 9);
    
    // 处理渲染系统配置数据
    temp_int3 = 0;
    temp_long = *(longlong*)(param_3 + 0x10c0) - *(longlong*)(param_3 + 0x10b8);
    temp_long2 = temp_long >> 0x3f;
    
    if (temp_long / 0x98 + temp_long2 != temp_long2) {
        temp_long2 = 0;
        temp_int1 = *(int*)(param_2 + 0x10);
        
        do {
            temp_int2 = temp_int1 + 1;
            if (temp_int2 != 0) {
                temp_uint = temp_int1 + 2;
                if (*(longlong*)(param_2 + 8) == 0) {
                    if ((int)temp_uint < 0x10) {
                        temp_uint = 0x10;
                    }
                    data_ptr = (uint8_t*)rendering_system_memory_allocator(_DAT_180c8ed18, (longlong)(int)temp_uint, 0x13);
                    *(uint8_t**)(param_2 + 8) = data_ptr;
                    *data_ptr = 0;
                    temp_ulong1 = *(uint64_t*)(param_2 + 8);
                    temp_ulong2 = temp_ulong1 & 0xffffffffffc00000;
                    if (temp_ulong2 == 0) {
                        temp_uint = 0;
                    } else {
                        temp_long = temp_ulong2 + 0x80 + (temp_ulong1 - temp_ulong2 >> 0x10) * 0x50;
                        uint_ptr = (uint*)(temp_long - (uint64_t)*(uint*)(temp_long + 4));
                        if ((*(byte*)((longlong)uint_ptr + 0xe) & 2) == 0) {
                            temp_uint = uint_ptr[7];
                            if (0x3ffffff < temp_uint) {
                                temp_uint = *uint_ptr << 0x10;
                            }
                        } else {
                            temp_uint = uint_ptr[7];
                            if (temp_uint < 0x4000000) {
                                temp_ulong4 = (uint64_t)temp_uint;
                            } else {
                                temp_ulong4 = (uint64_t)*uint_ptr << 0x10;
                            }
                            if (0x3ffffff < temp_uint) {
                                temp_uint = *uint_ptr << 0x10;
                            }
                            temp_uint = temp_uint - (int)((temp_ulong1 - (((longlong)((longlong)uint_ptr + (-0x80 - temp_ulong2)) / 0x50) * 0x10000 + temp_ulong2)) % temp_ulong4);
                        }
                    }
                } else {
                    if (temp_uint <= *(uint*)(param_2 + 0x18)) {
                        // 跳转到标签处理
                    } else {
                        temp_ulong1 = rendering_system_memory_reallocator(_DAT_180c8ed18, *(longlong*)(param_2 + 8), temp_uint, 0x10, 0x13);
                        *(uint64_t*)(param_2 + 8) = temp_ulong1;
                        temp_ulong2 = temp_ulong1 & 0xffffffffffc00000;
                        if (temp_ulong2 != 0) {
                            temp_long = (temp_ulong1 - temp_ulong2 >> 0x10) * 0x50 + 0x80 + temp_ulong2;
                            uint_ptr = (uint*)(temp_long - (uint64_t)*(uint*)(temp_long + 4));
                            if ((*(byte*)((longlong)uint_ptr + 0xe) & 2) == 0) {
                                temp_uint = uint_ptr[7];
                                if (0x3ffffff < temp_uint) {
                                    temp_uint = *uint_ptr << 0x10;
                                }
                            } else {
                                temp_uint = uint_ptr[7];
                                if (temp_uint < 0x4000000) {
                                    temp_ulong4 = (uint64_t)temp_uint;
                                } else {
                                    temp_ulong4 = (uint64_t)*uint_ptr << 0x10;
                                }
                                if (0x3ffffff < temp_uint) {
                                    temp_uint = *uint_ptr << 0x10;
                                }
                                temp_uint = temp_uint - (int)((temp_ulong1 - (((longlong)((longlong)uint_ptr + (-0x80 - temp_ulong2)) / 0x50) * 0x10000 + temp_ulong2)) % temp_ulong4);
                            }
                        } else {
                            temp_uint = 0;
                        }
                    }
                }
                *(uint*)(param_2 + 0x18) = temp_uint;
            }
            
            *(uint16_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8)) = 9;
            *(int*)(param_2 + 0x10) = temp_int2;
            
            temp_long = temp_long2 * 0x98 + *(longlong*)(param_3 + 0x10b8);
            if (0 < *(int*)(temp_long + 0x10)) {
                temp_int2 = *(int*)(temp_long + 0x10) + temp_int2;
                if (temp_int2 == 0) {
                    // 跳转到标签处理
                } else {
                    temp_uint = temp_int2 + 1;
                    if (*(longlong*)(param_2 + 8) == 0) {
                        if ((int)temp_uint < 0x10) {
                            temp_uint = 0x10;
                        }
                        data_ptr = (uint8_t*)rendering_system_memory_allocator(_DAT_180c8ed18, (longlong)(int)temp_uint, 0x13);
                        *(uint8_t**)(param_2 + 8) = data_ptr;
                        *data_ptr = 0;
                        temp_ulong1 = *(uint64_t*)(param_2 + 8);
                        temp_ulong2 = temp_ulong1 & 0xffffffffffc00000;
                        if (temp_ulong2 == 0) {
                            temp_uint = 0;
                        } else {
                            temp_long2 = temp_ulong2 + 0x80 + (temp_ulong1 - temp_ulong2 >> 0x10) * 0x50;
                            uint_ptr = (uint*)(temp_long2 - (uint64_t)*(uint*)(temp_long2 + 4));
                            if ((*(byte*)((longlong)uint_ptr + 0xe) & 2) == 0) {
                                temp_uint = uint_ptr[7];
                                if (0x3ffffff < temp_uint) {
                                    temp_uint = *uint_ptr << 0x10;
                                }
                            } else {
                                temp_uint = uint_ptr[7];
                                if (temp_uint < 0x4000000) {
                                    temp_ulong4 = (uint64_t)temp_uint;
                                } else {
                                    temp_ulong4 = (uint64_t)*uint_ptr << 0x10;
                                }
                                if (0x3ffffff < temp_uint) {
                                    temp_uint = *uint_ptr << 0x10;
                                }
                                temp_uint = temp_uint - (int)((temp_ulong1 - (((longlong)((longlong)uint_ptr + (-0x80 - temp_ulong2)) / 0x50) * 0x10000 + temp_ulong2)) % temp_ulong4);
                            }
                        }
                    } else {
                        if (temp_uint <= *(uint*)(param_2 + 0x18)) {
                            // 跳转到标签处理
                        } else {
                            temp_ulong1 = rendering_system_memory_reallocator(_DAT_180c8ed18, *(longlong*)(param_2 + 8), temp_uint, 0x10, 0x13);
                            *(uint64_t*)(param_2 + 8) = temp_ulong1;
                            temp_ulong2 = temp_ulong1 & 0xffffffffffc00000;
                            if (temp_ulong2 != 0) {
                                temp_long2 = (temp_ulong1 - temp_ulong2 >> 0x10) * 0x50 + 0x80 + temp_ulong2;
                                uint_ptr = (uint*)(temp_long2 - (uint64_t)*(uint*)(temp_long2 + 4));
                                if ((*(byte*)((longlong)uint_ptr + 0xe) & 2) == 0) {
                                    temp_uint = uint_ptr[7];
                                    if (0x3ffffff < temp_uint) {
                                        temp_uint = *uint_ptr << 0x10;
                                    }
                                } else {
                                    temp_uint = uint_ptr[7];
                                    if (temp_uint < 0x4000000) {
                                        temp_ulong4 = (uint64_t)temp_uint;
                                    } else {
                                        temp_ulong4 = (uint64_t)*uint_ptr << 0x10;
                                    }
                                    if (0x3ffffff < temp_uint) {
                                        temp_uint = *uint_ptr << 0x10;
                                    }
                                    temp_uint = temp_uint - (int)((temp_ulong1 - (((longlong)((longlong)uint_ptr + (-0x80 - temp_ulong2)) / 0x50) * 0x10000 + temp_ulong2)) % temp_ulong4);
                                }
                            } else {
                                temp_uint = 0;
                            }
                        }
                    }
                    *(uint*)(param_2 + 0x18) = temp_uint;
                    
                    // 复制配置数据到输出缓冲区
                    memcpy((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8),
                           *(uint64_t*)(temp_long + 8),
                           (longlong)(*(int*)(temp_long + 0x10) + 1));
                }
            }
            
            temp_int2 = temp_int1 + 0x33;
            if (temp_int2 != 0) {
                temp_uint = temp_int1 + 0x34;
                if (*(longlong*)(param_2 + 8) == 0) {
                    if ((int)temp_uint < 0x10) {
                        temp_uint = 0x10;
                    }
                    data_ptr = (uint8_t*)rendering_system_memory_allocator(_DAT_180c8ed18, (longlong)(int)temp_uint, 0x13);
                    *(uint8_t**)(param_2 + 8) = data_ptr;
                    *data_ptr = 0;
                    temp_ulong1 = *(uint64_t*)(param_2 + 8);
                    temp_ulong2 = temp_ulong1 & 0xffffffffffc00000;
                    if (temp_ulong2 == 0) {
                        temp_uint = 0;
                    } else {
                        temp_long = temp_ulong2 + 0x80 + (temp_ulong1 - temp_ulong2 >> 0x10) * 0x50;
                        uint_ptr = (uint*)(temp_long - (uint64_t)*(uint*)(temp_long + 4));
                        if ((*(byte*)((longlong)uint_ptr + 0xe) & 2) == 0) {
                            temp_uint = uint_ptr[7];
                            if (0x3ffffff < temp_uint) {
                                temp_uint = *uint_ptr << 0x10;
                            }
                        } else {
                            temp_uint = uint_ptr[7];
                            if (temp_uint < 0x4000000) {
                                temp_ulong4 = (uint64_t)temp_uint;
                            } else {
                                temp_ulong4 = (uint64_t)*uint_ptr << 0x10;
                            }
                            if (0x3ffffff < temp_uint) {
                                temp_uint = *uint_ptr << 0x10;
                            }
                            temp_uint = temp_uint - (int)((temp_ulong1 - (((longlong)((longlong)uint_ptr + (-0x80 - temp_ulong2)) / 0x50) * 0x10000 + temp_ulong2)) % temp_ulong4);
                        }
                    }
                } else {
                    if (temp_uint <= *(uint*)(param_2 + 0x18)) {
                        // 跳转到标签处理
                    } else {
                        temp_ulong1 = rendering_system_memory_reallocator(_DAT_180c8ed18, *(longlong*)(param_2 + 8), temp_uint, 0x10, 0x13);
                        *(uint64_t*)(param_2 + 8) = temp_ulong1;
                        temp_ulong2 = temp_ulong1 & 0xffffffffffc00000;
                        if (temp_ulong2 != 0) {
                            temp_long = (temp_ulong1 - temp_ulong2 >> 0x10) * 0x50 + 0x80 + temp_ulong2;
                            uint_ptr = (uint*)(temp_long - (uint64_t)*(uint*)(temp_long + 4));
                            if ((*(byte*)((longlong)uint_ptr + 0xe) & 2) == 0) {
                                temp_uint = uint_ptr[7];
                                if (0x3ffffff < temp_uint) {
                                    temp_uint = *uint_ptr << 0x10;
                                }
                            } else {
                                temp_uint = uint_ptr[7];
                                if (temp_uint < 0x4000000) {
                                    temp_ulong4 = (uint64_t)temp_uint;
                                } else {
                                    temp_ulong4 = (uint64_t)*uint_ptr << 0x10;
                                }
                                if (0x3ffffff < temp_uint) {
                                    temp_uint = *uint_ptr << 0x10;
                                }
                                temp_uint = temp_uint - (int)((temp_ulong1 - (((longlong)((longlong)uint_ptr + (-0x80 - temp_ulong2)) / 0x50) * 0x10000 + temp_ulong2)) % temp_ulong4);
                            }
                        } else {
                            temp_uint = 0;
                        }
                    }
                }
                *(uint*)(param_2 + 0x18) = temp_uint;
            }
            
            long_ptr = (uint64_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
            *long_ptr = 0x7070202c206e4928;  // "(In , pp"
            long_ptr[1] = 0x206369746174735f;  // "_stats "
            long_ptr[2] = 0x646f6d5f7070202c;  // ", pp_mod"
            long_ptr[3] = 0x2c656c6261696669;  // "ifia, ble"
            *(uint32_t*)(long_ptr + 4) = 0x5f707020;  // " pp_"
            *(uint32_t*)((longlong)long_ptr + 0x24) = 0x2c787561;  // "aux,"
            *(uint32_t*)(long_ptr + 5) = 0x74754f20;  // " OUT"
            *(uint32_t*)((longlong)long_ptr + 0x2c) = 0x29747570;  // "put)"
            *(uint16_t*)(long_ptr + 6) = 0xa3b;  // 终止符
            *(uint8_t*)((longlong)long_ptr + 0x32) = 0;
            *(int*)(param_2 + 0x10) = temp_int2;
            
            temp_int3 = temp_int3 + 1;
            temp_long2 = temp_long2 + 1;
            temp_int1 = temp_int2;
        } while ((uint64_t)(longlong)temp_int3 <
                 (uint64_t)((*(longlong*)(param_3 + 0x10c0) - *(longlong*)(param_3 + 0x10b8)) / 0x98));
    }
    
    // 生成最终输出信息
    temp_int3 = *(int*)(param_2 + 0x10);
    rendering_system_buffer_expander(param_2, temp_int3 + 0x21);
    output_ptr = (uint32_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
    *output_ptr = 0x64666923;  // "#fid"
    output_ptr[1] = 0x53206665;  // "ef S"
    output_ptr[2] = 0x45545359;  // "YST E"
    output_ptr[3] = 0x48535f4d;  // "M_SH"
    output_ptr[4] = 0x565f574f;  // "OW_V"
    output_ptr[5] = 0x45545245;  // "ERTE"
    output_ptr[6] = 0x4f435f58;  // "X_CO"
    output_ptr[7] = 0x53524f4c;  // "ROLS"
    *(uint16_t*)(output_ptr + 8) = 10;  // 换行符
    *(int*)(param_2 + 0x10) = temp_int3 + 0x21;
    
    // 写入系统配置信息
    rendering_system_buffer_expander(param_2, temp_int3 + 0xa3);
    long_ptr = (uint64_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
    *long_ptr = 0x414d282066692309;  // ".#fi (MA"
    long_ptr[1] = 0x495f4c4149524554;  // "TERIAL_I"
    long_ptr[2] = 0x4941525245545f44;  // "D_TERRAI"
    long_ptr[3] = 0x5f796d203d21204e;  // "N _my =!"
    long_ptr[4] = 0x6c6169726574616d;  // "material"
    long_ptr[5] = 0x202626202964695f;  // "_id &&"
    long_ptr[6] = 0x4149524554414d28;  // "(MATERIA"
    long_ptr[7] = 0x4645445f44495f4c;  // "L_ID_DE"
    long_ptr[8] = 0x3d21204445525245;  // "ERRED =!"
    long_ptr[9] = 0x6574616d5f796d20;  // " my_mate"
    long_ptr[10] = 0x2964695f6c616972;  // "rial_id)"
    long_ptr[0xb] = 0x54414d2820262620;  // " && MAT"
    *(uint32_t*)(long_ptr + 0xc) = 0x41495245;  // "ERIA"
    *(uint32_t*)((longlong)long_ptr + 100) = 0x44495f4c;  // "L_ID"
    *(uint32_t*)(long_ptr + 0xd) = 0x4152475f;  // "_GRA"
    *(uint32_t*)((longlong)long_ptr + 0x6c) = 0x21205353;  // "SS !"
    *(uint32_t*)(long_ptr + 0xe) = 0x796d203d;  // "= my"
    *(uint32_t*)((longlong)long_ptr + 0x74) = 0x74616d5f;  // "_mat"
    *(uint32_t*)(long_ptr + 0xf) = 0x61697265;  // "erial"
    *(uint32_t*)((longlong)long_ptr + 0x7c) = 0x64695f6c;  // "l_id"
    *(uint16_t*)(long_ptr + 0x10) = 0xa29;  // 终止符
    *(uint8_t*)((longlong)long_ptr + 0x82) = 0;
    *(int*)(param_2 + 0x10) = temp_int3 + 0xa3;
    
    // 写入图形输出信息
    rendering_system_buffer_expander(param_2, temp_int3 + 0xeb);
    long_ptr = (uint64_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
    *long_ptr = 0x74757074754f0909;  // "..OUTPUT"
    long_ptr[1] = 0x6f6c6f434247522e;  // ".RGB_col"
    long_ptr[2] = 0x3d20616267722e72;  // "r.agba ="
    long_ptr[3] = 0x73616d5f74656720;  // " get_mas"
    long_ptr[4] = 0x747265765f64656b;  // "key_reve"
    long_ptr[5] = 0x726f6c6f635f7865;  // "exec_col"
    *(uint32_t*)(long_ptr + 6) = 0x2e6e4928;  // "(In."
    *(uint32_t*)((longlong)long_ptr + 0x34) = 0x74726576;  // "reve"
    *(uint32_t*)(long_ptr + 7) = 0x635f7865;  // "xec_c"
    *(uint32_t*)((longlong)long_ptr + 0x3c) = 0x726f6c6f;  // "olor"
    long_ptr[8] = 0xa3b29616267722e;  // ".rgba)..."
    *(uint8_t*)(long_ptr + 9) = 0;
    *(int*)(param_2 + 0x10) = temp_int3 + 0xeb;
    
    // 写入结束标记
    rendering_system_buffer_expander(param_2, temp_int3 + 0xf3);
    long_ptr = (uint64_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
    *long_ptr = 0xa6669646e652309;  // ".#endif"
    *(uint8_t*)(long_ptr + 1) = 0;
    *(int*)(param_2 + 0x10) = temp_int3 + 0xf3;
    
    rendering_system_buffer_expander(param_2, temp_int3 + 0xfa);
    *(uint64_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8)) = 0xa6669646e6523;  // "#endif"
    *(int*)(param_2 + 0x10) = temp_int3 + 0xfa;
    
    // 写入最终结束信息
    rendering_system_buffer_expander(param_2, temp_int3 + 0x10a);
    output_ptr = (uint32_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
    *output_ptr = 0x74657209;  // ".ret"
    output_ptr[1] = 0x206e7275;  // "urn "
    output_ptr[2] = 0x7074754f;  // "OUTp"
    output_ptr[3] = 0xa3b7475;  // "utT.."
    *(uint8_t*)(output_ptr + 4) = 0;
    *(int*)(param_2 + 0x10) = temp_int3 + 0x10a;
    
    rendering_system_buffer_expander(param_2, temp_int3 + 0x10c);
    short_ptr = (uint16_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8));
    *short_ptr = 0xa7d;  // 最终标记
    *(uint8_t*)(short_ptr + 1) = 0;
    *(int*)(param_2 + 0x10) = temp_int3 + 0x10c;
    
    rendering_system_buffer_expander(param_2, temp_int3 + 0x113);
    *(uint64_t*)((uint64_t)*(uint*)(param_2 + 0x10) + *(longlong*)(param_2 + 8)) = 0xa6669646e6523;  // "#endif"
    *(int*)(param_2 + 0x10) = temp_int3 + 0x113;
    
    // 清理缓冲区
    rendering_system_buffer_cleaner(buffer_ptr);
}

// 函数别名定义
#define rendering_system_string_formatter rendering_system_string_processor_and_formatter
#define rendering_system_output_generator rendering_system_string_processor_and_formatter
#define rendering_system_status_processor rendering_system_string_processor_and_formatter

// 技术说明：
// 1. 本函数是渲染系统中的字符串处理和格式化输出核心模块
// 2. 负责生成和格式化渲染系统的状态信息、配置信息和调试信息
// 3. 使用动态内存分配来管理字符串缓冲区
// 4. 支持多种渲染系统属性的输出和格式化
// 5. 包含完整的错误处理和内存管理机制
// 6. 生成的内容包括渲染状态、材质信息、图形输出配置等
// 7. 使用特定的格式化标记和终止符来确保输出的完整性

// 注意事项：
// - 函数假设输入参数都是有效的指针
// - 需要确保内存分配器函数正确实现
// - 输出缓冲区需要有足够的空间来容纳生成的字符串
// - 在多线程环境中使用时需要适当的同步机制