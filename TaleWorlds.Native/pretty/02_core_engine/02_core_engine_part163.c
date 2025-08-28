#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part163.c - 核心引擎数据处理模块
// 本模块包含数据处理、内存管理和缓冲区操作相关函数

// 函数: 处理三维网格数据
// 参数: data_context - 数据结构指针, process_flag - 处理标志
void process_mesh_data(int64_t data_context, uint64_t process_flag)
{
    int32_t temp_var1;
    int32_t temp_var2;
    int32_t temp_var3;
    int16_t temp_var4;
    int16_t *ptr_var5;
    int32_t *ptr_var6;
    int32_t *ptr_var7;
    int32_t *ptr_var8;
    int32_t *ptr_var9;
    int32_t *ptr_var10;
    int32_t *ptr_var11;
    int16_t *ptr_var12;
    int64_t temp_var13;
    int64_t temp_var14;
    int32_t *ptr_var15;
    int64_t stack_offset_18;
    int stack_offset_20;
    int32_t *stack_ptr_1a0;
    int32_t *stack_ptr_198;
    int32_t *stack_ptr_190;
    int32_t stack_value_188;
    int32_t *stack_ptr_180;
    int32_t *stack_ptr_178;
    int32_t *stack_ptr_170;
    int32_t stack_value_168;
    int16_t *stack_ptr_160;
    int16_t *stack_ptr_158;
    int16_t *stack_ptr_150;
    int32_t stack_value_148;
    int64_t stack_value_140;
    int32_t *stack_ptr_138;
    int32_t *stack_ptr_130;
    int32_t *stack_ptr_128;
    int64_t stack_value_120;
    int64_t stack_value_118;
    int32_t stack_value_108;
    int32_t stack_value_104;
    int32_t *stack_ptr_100;
    int32_t stack_value_f8;
    int32_t stack_value_f4;
    int32_t stack_value_f0;
    int32_t stack_value_ec;
    int32_t *stack_ptr_e8;
    int32_t stack_value_e0;
    int32_t stack_value_dc;
    int16_t stack_value_d8;
    int32_t stack_value_d0;
    int16_t *stack_ptr_c8;
    int32_t stack_value_b8;
    int32_t stack_value_b4;
    uint64_t stack_value_b0;
    int32_t stack_value_a8;
    int32_t stack_value_a4;
    int32_t stack_value_a0;
    int32_t stack_value_9c;
    uint64_t stack_value_98;
    int32_t stack_value_90;
    int32_t stack_value_8c;
    uint64_t stack_value_80;
    
    // 初始化栈变量
    stack_value_80 = 0xfffffffffffffffe;
    stack_ptr_1a0 = (int32_t *)0x0;
    stack_ptr_198 = (int32_t *)0x0;
    stack_ptr_190 = (int32_t *)0x0;
    stack_value_188 = 3;
    stack_ptr_180 = (int32_t *)0x0;
    stack_ptr_178 = (int32_t *)0x0;
    stack_ptr_170 = (int32_t *)0x0;
    stack_value_168 = 3;
    stack_ptr_160 = (int16_t *)0x0;
    stack_ptr_158 = (int16_t *)0x0;
    stack_ptr_150 = (int16_t *)0x0;
    stack_value_148 = 3;
    
    // 分配缓冲区空间
    allocate_buffer_space(&stack_ptr_1a0,
                         ((*(int64_t *)(data_context + 0x70) - *(int64_t *)(data_context + 0x68)) / 0x18) * 3);
    allocate_buffer_space(&stack_ptr_180,
                         ((*(int64_t *)(data_context + 0x70) - *(int64_t *)(data_context + 0x68)) / 0x18) * 3);
    
    temp_var13 = *(int64_t *)(data_context + 0x70);
    temp_var14 = (temp_var13 - *(int64_t *)(data_context + 0x68)) / 0x18;
    
    // 如果有数据需要处理
    if (temp_var14 != 0) {
        stack_ptr_160 = (int16_t *)
                      allocate_memory(_memory_pool_180c8ed18, temp_var14 * 2, 
                                   CONCAT71((int7)((uint64_t)temp_var13 >> 8), 3));
        stack_ptr_150 = stack_ptr_160 + temp_var14;
        temp_var13 = *(int64_t *)(data_context + 0x70);
        stack_ptr_158 = stack_ptr_160;
    }
    
    stack_offset_20 = 0;
    stack_value_120 = *(int64_t *)(data_context + 0x68);
    temp_var14 = temp_var13 - stack_value_120 >> 0x3f;
    ptr_var9 = stack_ptr_180;
    ptr_var15 = stack_ptr_178;
    ptr_var10 = stack_ptr_1a0;
    ptr_var11 = stack_ptr_198;
    
    // 处理数据块
    if ((temp_var13 - stack_value_120) / 0x18 + temp_var14 != temp_var14) {
        stack_value_140 = 0;
        do {
            ptr_var5 = stack_ptr_158;
            ptr_var7 = (int32_t *)0x0;
            temp_var13 = *(int64_t *)(data_context + 0x28);
            stack_ptr_138 = (int32_t *)
                          ((int64_t)*(int *)(stack_value_120 + 4 + stack_value_140 * 0x18) * 0x10 + temp_var13);
            stack_ptr_130 = (int32_t *)
                          ((int64_t)*(int *)(stack_value_120 + 8 + stack_value_140 * 0x18) * 0x10 + temp_var13);
            stack_ptr_128 = (int32_t *)
                          ((int64_t)*(int *)(stack_value_120 + 0xc + stack_value_140 * 0x18) * 0x10 + temp_var13);
            
            // 计算中间值
            temp_var13 = ((int64_t)ptr_var11 - (int64_t)ptr_var10) / 6 +
                         ((int64_t)ptr_var11 - (int64_t)ptr_var10 >> 0x3f);
            temp_var13 = (temp_var13 >> 1) - (temp_var13 >> 0x3f);
            
            if (ptr_var15 < stack_ptr_170) {
                *ptr_var15 = (int)temp_var13;
                ptr_var7 = ptr_var9;
            }
            else {
                // 重新分配内存
                stack_value_118 = (int64_t)ptr_var15 - (int64_t)ptr_var9;
                if (stack_value_118 >> 2 == 0) {
                    stack_offset_18 = 1;
LAB_REALLOC_1:
                    ptr_var7 = (int32_t *)allocate_memory(_memory_pool_180c8ed18, 
                                                            stack_offset_18 * 4, (int8_t)stack_value_168);
                }
                else {
                    stack_offset_18 = (stack_value_118 >> 2) * 2;
                    if (stack_offset_18 != 0) goto LAB_REALLOC_1;
                }
                
                if (ptr_var9 != ptr_var15) {
                    memmove(ptr_var7, ptr_var9, stack_value_118);
                }
                *ptr_var7 = (int)temp_var13;
                
                if (ptr_var9 != (int32_t *)0x0) {
                    release_memory(ptr_var9);
                }
                stack_ptr_170 = ptr_var7 + stack_offset_18;
                stack_ptr_180 = ptr_var7;
                ptr_var15 = ptr_var7;
            }
            
            // 处理顶点数据
            ptr_var8 = ptr_var15 + 1;
            ptr_var9 = (int32_t *)0x0;
            temp_var1 = stack_ptr_138[2];
            temp_var2 = stack_ptr_138[1];
            temp_var3 = *stack_ptr_138;
            stack_ptr_178 = ptr_var8;
            
            if (ptr_var11 < stack_ptr_190) {
                *ptr_var11 = temp_var3;
                ptr_var11[1] = temp_var2;
                ptr_var11[2] = temp_var1;
                ptr_var9 = ptr_var10;
                ptr_var6 = ptr_var11;
            }
            else {
                // 扩展顶点缓冲区
                if (temp_var13 == 0) {
                    temp_var13 = 1;
LAB_REALLOC_2:
                    ptr_var9 = (int32_t *)allocate_memory(_memory_pool_180c8ed18, 
                                                            temp_var13 * 0xc, (int8_t)stack_value_188);
                }
                else {
                    temp_var13 = temp_var13 * 2;
                    if (temp_var13 != 0) goto LAB_REALLOC_2;
                }
                
                ptr_var6 = ptr_var9;
                if (ptr_var10 != ptr_var11) {
                    temp_var14 = (int64_t)ptr_var10 - (int64_t)ptr_var9;
                    do {
                        *ptr_var6 = *(int32_t *)(temp_var14 + (int64_t)ptr_var6);
                        ptr_var6[1] = *(int32_t *)((int64_t)ptr_var6 + temp_var14 + 4);
                        ptr_var6[2] = *(int32_t *)((int64_t)ptr_var6 + temp_var14 + 8);
                        ptr_var6 = ptr_var6 + 3;
                    } while ((int32_t *)(temp_var14 + (int64_t)ptr_var6) != ptr_var11);
                }
                
                *ptr_var6 = temp_var3;
                ptr_var6[1] = temp_var2;
                ptr_var6[2] = temp_var1;
                
                if (ptr_var10 != (int32_t *)0x0) {
                    release_memory(ptr_var10);
                }
                stack_ptr_190 = ptr_var9 + temp_var13 * 3;
                stack_ptr_1a0 = ptr_var9;
            }
            
            ptr_var11 = ptr_var6 + 3;
            temp_var13 = ((int64_t)ptr_var11 - (int64_t)ptr_var9) / 6 +
                         ((int64_t)ptr_var11 - (int64_t)ptr_var9 >> 0x3f);
            temp_var13 = (temp_var13 >> 1) - (temp_var13 >> 0x3f);
            stack_ptr_198 = ptr_var11;
            
            if (ptr_var8 < stack_ptr_170) {
                ptr_var15 = ptr_var15 + 2;
                *ptr_var8 = (int)temp_var13;
                ptr_var10 = ptr_var7;
            }
            else {
                // 处理索引数据
                stack_ptr_138 = (int32_t *)((int64_t)ptr_var8 - (int64_t)ptr_var7);
                if ((int64_t)stack_ptr_138 >> 2 == 0) {
                    stack_offset_18 = 1;
LAB_REALLOC_3:
                    ptr_var10 = (int32_t *)
                              allocate_memory(_memory_pool_180c8ed18, stack_offset_18 * 4, 
                                            (int8_t)stack_value_168);
                }
                else {
                    stack_offset_18 = ((int64_t)stack_ptr_138 >> 2) * 2;
                    if (stack_offset_18 != 0) goto LAB_REALLOC_3;
                    ptr_var10 = (int32_t *)0x0;
                }
                
                if (ptr_var7 != ptr_var8) {
                    memmove(ptr_var10, ptr_var7, stack_ptr_138);
                }
                *ptr_var10 = (int)temp_var13;
                ptr_var15 = ptr_var10 + 1;
                
                if (ptr_var7 != (int32_t *)0x0) {
                    release_memory(ptr_var7);
                }
                stack_ptr_170 = ptr_var10 + stack_offset_18;
                stack_ptr_180 = ptr_var10;
            }
            
            // 继续处理其他数据...
            temp_var1 = stack_ptr_130[2];
            temp_var2 = stack_ptr_130[1];
            temp_var3 = *stack_ptr_130;
            stack_ptr_178 = ptr_var15;
            
            if (ptr_var11 < stack_ptr_190) {
                ptr_var8 = ptr_var6 + 6;
                *ptr_var11 = temp_var3;
                ptr_var6[4] = temp_var2;
                ptr_var6[5] = temp_var1;
                ptr_var7 = ptr_var9;
            }
            else {
                // 处理法线数据
                if (temp_var13 == 0) {
                    temp_var13 = 1;
LAB_REALLOC_4:
                    ptr_var7 = (int32_t *)allocate_memory(_memory_pool_180c8ed18, 
                                                            temp_var13 * 0xc, (int8_t)stack_value_188);
                }
                else {
                    temp_var13 = temp_var13 * 2;
                    if (temp_var13 != 0) goto LAB_REALLOC_4;
                    ptr_var7 = (int32_t *)0x0;
                }
                
                ptr_var8 = ptr_var7;
                if (ptr_var9 != ptr_var11) {
                    temp_var14 = (int64_t)ptr_var9 - (int64_t)ptr_var7;
                    do {
                        *ptr_var8 = *(int32_t *)(temp_var14 + (int64_t)ptr_var8);
                        ptr_var8[1] = *(int32_t *)(temp_var14 + 4 + (int64_t)ptr_var8);
                        ptr_var8[2] = *(int32_t *)(temp_var14 + 8 + (int64_t)ptr_var8);
                        ptr_var8 = ptr_var8 + 3;
                    } while ((int32_t *)(temp_var14 + (int64_t)ptr_var8) != ptr_var11);
                }
                
                *ptr_var8 = temp_var3;
                ptr_var8[1] = temp_var2;
                ptr_var8[2] = temp_var1;
                ptr_var8 = ptr_var8 + 3;
                
                if (ptr_var9 != (int32_t *)0x0) {
                    release_memory(ptr_var9);
                }
                stack_ptr_190 = ptr_var7 + temp_var13 * 3;
                stack_ptr_1a0 = ptr_var7;
            }
            
            // 处理纹理坐标数据...
            temp_var13 = ((int64_t)ptr_var8 - (int64_t)ptr_var7) / 6 +
                         ((int64_t)ptr_var8 - (int64_t)ptr_var7 >> 0x3f);
            temp_var13 = (temp_var13 >> 1) - (temp_var13 >> 0x3f);
            stack_ptr_198 = ptr_var8;
            
            if (ptr_var15 < stack_ptr_170) {
                *ptr_var15 = (int)temp_var13;
                ptr_var9 = ptr_var10;
            }
            else {
                stack_ptr_130 = (int32_t *)((int64_t)ptr_var15 - (int64_t)ptr_var10);
                if ((int64_t)stack_ptr_130 >> 2 == 0) {
                    stack_offset_18 = 1;
LAB_REALLOC_5:
                    ptr_var9 = (int32_t *)allocate_memory(_memory_pool_180c8ed18, 
                                                            stack_offset_18 * 4, (int8_t)stack_value_168);
                }
                else {
                    stack_offset_18 = ((int64_t)stack_ptr_130 >> 2) * 2;
                    if (stack_offset_18 != 0) goto LAB_REALLOC_5;
                    ptr_var9 = (int32_t *)0x0;
                }
                
                if (ptr_var10 != ptr_var15) {
                    memmove(ptr_var9, ptr_var10, stack_ptr_130);
                }
                *ptr_var9 = (int)temp_var13;
                
                if (ptr_var10 != (int32_t *)0x0) {
                    release_memory(ptr_var10);
                }
                stack_ptr_170 = ptr_var9 + stack_offset_18;
                stack_ptr_180 = ptr_var9;
                ptr_var15 = ptr_var9;
            }
            
            ptr_var15 = ptr_var15 + 1;
            temp_var1 = stack_ptr_128[2];
            temp_var2 = stack_ptr_128[1];
            temp_var3 = *stack_ptr_128;
            stack_ptr_178 = ptr_var15;
            
            if (ptr_var8 < stack_ptr_190) {
                *ptr_var8 = temp_var3;
                ptr_var8[1] = temp_var2;
                ptr_var8[2] = temp_var1;
                ptr_var10 = ptr_var7;
                ptr_var11 = ptr_var8;
            }
            else {
                // 处理颜色数据
                if (temp_var13 == 0) {
                    temp_var13 = 1;
LAB_REALLOC_6:
                    ptr_var10 = (int32_t *)allocate_memory(_memory_pool_180c8ed18, 
                                                            temp_var13 * 0xc, (int8_t)stack_value_188);
                }
                else {
                    temp_var13 = temp_var13 * 2;
                    if (temp_var13 != 0) goto LAB_REALLOC_6;
                    ptr_var10 = (int32_t *)0x0;
                }
                
                ptr_var11 = ptr_var10;
                if (ptr_var7 != ptr_var8) {
                    temp_var14 = (int64_t)ptr_var7 - (int64_t)ptr_var10;
                    do {
                        *ptr_var11 = *(int32_t *)(temp_var14 + (int64_t)ptr_var11);
                        ptr_var11[1] = *(int32_t *)(temp_var14 + 4 + (int64_t)ptr_var11);
                        ptr_var11[2] = *(int32_t *)(temp_var14 + 8 + (int64_t)ptr_var11);
                        ptr_var11 = ptr_var11 + 3;
                    } while ((int32_t *)(temp_var14 + (int64_t)ptr_var11) != ptr_var8);
                }
                
                *ptr_var11 = temp_var3;
                ptr_var11[1] = temp_var2;
                ptr_var11[2] = temp_var1;
                
                if (ptr_var7 != (int32_t *)0x0) {
                    release_memory(ptr_var7);
                }
                stack_ptr_190 = ptr_var10 + temp_var13 * 3;
                stack_ptr_1a0 = ptr_var10;
            }
            
            ptr_var11 = ptr_var11 + 3;
            temp_var4 = *(int16_t *)(stack_value_120 + 0x14 + stack_value_140 * 0x18);
            stack_ptr_198 = ptr_var11;
            
            if (ptr_var5 < stack_ptr_150) {
                *ptr_var5 = temp_var4;
                ptr_var12 = ptr_var5;
            }
            else {
                // 处理材质索引
                stack_ptr_128 = (int32_t *)((int64_t)ptr_var5 - (int64_t)stack_ptr_160);
                if ((int64_t)stack_ptr_128 >> 1 == 0) {
                    temp_var13 = 1;
LAB_REALLOC_7:
                    ptr_var12 = (int16_t *)allocate_memory(_memory_pool_180c8ed18, 
                                                            temp_var13 * 2, 3);
                }
                else {
                    temp_var13 = ((int64_t)stack_ptr_128 >> 1) * 2;
                    if (temp_var13 != 0) goto LAB_REALLOC_7;
                    ptr_var12 = (int16_t *)0x0;
                }
                
                if (stack_ptr_160 != ptr_var5) {
                    memmove(ptr_var12, stack_ptr_160, stack_ptr_128);
                }
                *ptr_var12 = temp_var4;
                
                if (stack_ptr_160 != (int16_t *)0x0) {
                    release_memory(stack_ptr_160);
                }
                stack_ptr_150 = ptr_var12 + temp_var13;
                stack_ptr_160 = ptr_var12;
            }
            
            stack_ptr_158 = ptr_var12 + 1;
            stack_offset_20 = stack_offset_20 + 1;
            stack_value_140 = stack_value_140 + 1;
            stack_value_120 = *(int64_t *)(data_context + 0x68);
        } while ((uint64_t)(int64_t)stack_offset_20 <
                 (uint64_t)((*(int64_t *)(data_context + 0x70) - stack_value_120) / 0x18));
    }
    
    // 清理和最终处理
    ptr_var5 = stack_ptr_160;
    stack_value_b8 = 0;
    stack_value_b0 = 0;
    stack_value_a8 = 0;
    stack_value_a0 = 0;
    stack_value_98 = 0;
    stack_value_90 = 0;
    stack_value_ec = stack_value_9c;
    
    // 准备渲染数据
    _stack_value_f8 = CONCAT44(stack_value_a4, (int)(((int64_t)ptr_var11 - (int64_t)ptr_var10) / 0xc));
    _stack_value_108 = CONCAT44(stack_value_b4, 0xc);
    _stack_value_e0 = CONCAT44(stack_value_8c, (int)((uint64_t)((int64_t)ptr_var15 - (int64_t)ptr_var9 >> 2) / 3));
    
    stack_value_f0 = 0xc;
    stack_value_d0 = 2;
    stack_value_d8 = 0;
    stack_ptr_100 = ptr_var10;
    stack_ptr_e8 = ptr_var9;
    stack_ptr_c8 = stack_ptr_160;
    
    // 调用渲染函数
    (**(code **)(**(int64_t **)(_global_table_180c8a990 + 0x28) + 0x20))
              (*(int64_t **)(_global_table_180c8a990 + 0x28), &stack_value_108, process_flag, 0);
    
    // 释放内存
    if (ptr_var5 != (int16_t *)0x0) {
        release_memory(ptr_var5);
    }
    if (ptr_var9 == (int32_t *)0x0) {
        if (ptr_var10 == (int32_t *)0x0) {
            return;
        }
        release_memory(ptr_var10);
    }
    release_memory(ptr_var9);
}


// 函数: 处理顶点缓冲区数据
// 参数: data_context - 数据上下文, process_flag - 处理标志, param_3/param_4 - 附加参数
int8_t process_vertex_buffer(int64_t data_context, uint64_t process_flag, 
                                uint64_t param_3, uint64_t param_4)
{
    int32_t temp_var1;
    int32_t temp_var2;
    int32_t temp_var3;
    int32_t *ptr_var4;
    int8_t result;
    int32_t *ptr_var6;
    int32_t *ptr_var7;
    int64_t temp_var8;
    int32_t *ptr_var9;
    int64_t temp_var10;
    int32_t *ptr_var11;
    uint temp_var12;
    uint64_t loop_counter;
    uint64_t temp_var14;
    int temp_array[2];
    uint64_t saved_param_2;
    int32_t *stack_ptr_e0;
    int32_t *stack_ptr_d8;
    int32_t *stack_ptr_d0;
    int32_t stack_value_c8;
    int32_t temp_array_b8[2];
    int32_t *stack_ptr_b0;
    int32_t stack_value_a8;
    int32_t stack_value_a0;
    uint64_t stack_value_98;
    int32_t stack_value_90;
    int32_t stack_value_88;
    uint64_t stack_value_80;
    int32_t stack_value_78;
    ushort stack_value_70;
    int32_t stack_value_6e;
    uint64_t temp_var13;
    
    // 初始化栈变量
    stack_ptr_e0 = (int32_t *)0x0;
    stack_ptr_d8 = (int32_t *)0x0;
    temp_var13 = 0;
    stack_ptr_d0 = (int32_t *)0x0;
    stack_value_c8 = 3;
    saved_param_2 = process_flag;
    
    // 分配顶点缓冲区空间
    allocate_buffer_space(&stack_ptr_e0, 
                         *(int64_t *)(data_context + 0x30) - *(int64_t *)(data_context + 0x28) >> 4,
                         param_3, param_4, 0xfffffffffffffffe);
    
    temp_var8 = *(int64_t *)(data_context + 0x28);
    ptr_var9 = stack_ptr_e0;
    ptr_var6 = stack_ptr_e0;
    ptr_var11 = stack_ptr_d0;
    temp_var14 = temp_var13;
    
    // 处理顶点数据
    if (*(int64_t *)(data_context + 0x30) - temp_var8 >> 4 != 0) {
        do {
            ptr_var4 = stack_ptr_d8;
            ptr_var6 = (int32_t *)0x0;
            temp_var1 = *(int32_t *)(temp_var8 + 8 + temp_var14);
            temp_var2 = *(int32_t *)(temp_var8 + 4 + temp_var14);
            temp_var3 = *(int32_t *)(temp_var8 + temp_var14);
            
            if (stack_ptr_d8 < ptr_var11) {
                *stack_ptr_d8 = temp_var3;
                stack_ptr_d8[1] = temp_var2;
                stack_ptr_d8[2] = temp_var1;
                ptr_var6 = ptr_var9;
                ptr_var7 = stack_ptr_d8;
            }
            else {
                // 重新分配顶点缓冲区
                temp_var8 = ((int64_t)stack_ptr_d8 - (int64_t)ptr_var9) / 0xc;
                if (temp_var8 == 0) {
                    temp_var8 = 1;
LAB_REALLOC_VERTEX:
                    ptr_var6 = (int32_t *)allocate_memory(_memory_pool_180c8ed18, 
                                                            temp_var8 * 0xc, (int8_t)stack_value_c8);
                }
                else {
                    temp_var8 = temp_var8 * 2;
                    if (temp_var8 != 0) goto LAB_REALLOC_VERTEX;
                }
                
                ptr_var7 = ptr_var6;
                if (ptr_var9 != ptr_var4) {
                    temp_var10 = (int64_t)ptr_var9 - (int64_t)ptr_var6;
                    do {
                        *ptr_var7 = *(int32_t *)(temp_var10 + (int64_t)ptr_var7);
                        ptr_var7[1] = *(int32_t *)((int64_t)ptr_var7 + temp_var10 + 4);
                        ptr_var7[2] = *(int32_t *)((int64_t)ptr_var7 + temp_var10 + 8);
                        ptr_var7 = ptr_var7 + 3;
                    } while ((int32_t *)(temp_var10 + (int64_t)ptr_var7) != ptr_var4);
                }
                
                *ptr_var7 = temp_var3;
                ptr_var7[1] = temp_var2;
                ptr_var7[2] = temp_var1;
                
                if (ptr_var9 != (int32_t *)0x0) {
                    release_memory(ptr_var9);
                }
                ptr_var11 = ptr_var6 + temp_var8 * 3;
                stack_ptr_e0 = ptr_var6;
                stack_ptr_d0 = ptr_var11;
            }
            
            stack_ptr_d8 = ptr_var7 + 3;
            temp_var12 = (int)temp_var13 + 1;
            temp_var13 = (uint64_t)temp_var12;
            temp_var8 = *(int64_t *)(data_context + 0x28);
            process_flag = saved_param_2;
            ptr_var9 = ptr_var6;
            temp_var14 = temp_var14 + 0x10;
        } while ((uint64_t)(int64_t)(int)temp_var12 <
                 (uint64_t)(*(int64_t *)(data_context + 0x30) - temp_var8 >> 4));
    }
    
    // 准备渲染参数
    stack_value_a0 = 0;
    stack_value_98 = 0;
    stack_value_90 = 0;
    stack_value_88 = 0;
    stack_value_80 = 0;
    stack_value_78 = 0;
    stack_value_6e = 0xff00ff;
    stack_value_a8 = (int32_t)(((int64_t)stack_ptr_d8 - (int64_t)ptr_var6) / 0xc);
    temp_array_b8[0] = 0xc;
    stack_value_70 = 6;
    stack_ptr_b0 = ptr_var6;
    
    // 调用顶点处理函数
    result = (**(code **)(**(int64_t **)(_global_table_180c8a990 + 0x28) + 0x38))
                    (*(int64_t **)(_global_table_180c8a990 + 0x28), temp_array_b8, process_flag, temp_array);
    
    if (temp_array[0] == 1) {
        stack_value_70 = 2;
        result = (**(code **)(**(int64_t **)(_global_table_180c8a990 + 0x28) + 0x38))
                          (*(int64_t **)(_global_table_180c8a990 + 0x28), temp_array_b8, process_flag, temp_array);
    }
    
    if (temp_array[0] == 2) {
        stack_value_70 = stack_value_70 | 8;
        result = (**(code **)(**(int64_t **)(_global_table_180c8a990 + 0x28) + 0x38))
                          (*(int64_t **)(_global_table_180c8a990 + 0x28), temp_array_b8, process_flag, temp_array);
    }
    
    // 清理内存
    if (ptr_var6 == (int32_t *)0x0) {
        return result;
    }
    release_memory(ptr_var6);
}


// 函数: 统计顶点使用频率
// 参数: vertex_array - 顶点数据数组, process_flag - 处理标志, param_3/param_4 - 附加参数
void count_vertex_usage(int64_t *vertex_array, uint64_t process_flag, 
                       uint64_t param_3, uint64_t param_4)
{
    int temp_var1;
    int64_t temp_var2;
    int temp_var3;
    int temp_var4;
    uint64_t loop_counter1;
    uint64_t loop_counter2;
    uint temp_var7;
    int temp_var8;
    uint64_t loop_counter3;
    int *ptr_var10;
    int32_t temp_array[2];
    int *stack_ptr_30;
    int64_t stack_value_28;
    uint64_t stack_value_20;
    int32_t stack_value_18;
    
    // 初始化统计数组
    stack_ptr_30 = (int *)0x0;
    stack_value_28 = 0;
    loop_counter1 = 0;
    stack_value_20 = 0;
    stack_value_18 = 3;
    temp_array[0] = 0;
    
    // 分配统计内存
    allocate_statistics_buffer(&stack_ptr_30, 
                             (int64_t)(int)(vertex_array[1] - *vertex_array >> 3), 
                             temp_array, param_4, 0xfffffffffffffffe);
    
    temp_var2 = vertex_array[0xe] - vertex_array[0xd] >> 0x3f;
    loop_counter2 = loop_counter1;
    loop_counter3 = loop_counter1;
    
    // 统计顶点使用次数
    if ((vertex_array[0xe] - vertex_array[0xd]) / 0x18 + temp_var2 != temp_var2) {
        do {
            stack_ptr_30[*(int *)(loop_counter2 + 0x14 + vertex_array[0xd])] =
                 stack_ptr_30[*(int *)(loop_counter2 + 0x14 + vertex_array[0xd])] + 1;
            temp_var7 = (int)loop_counter3 + 1;
            loop_counter2 = loop_counter2 + 0x18;
            loop_counter3 = (uint64_t)temp_var7;
        } while ((uint64_t)(int64_t)(int)temp_var7 < (uint64_t)((vertex_array[0xe] - vertex_array[0xd]) / 0x18));
    }
    
    // 查找最常使用的顶点
    temp_var4 = -0x80000000;
    temp_var8 = -1;
    loop_counter2 = stack_value_28 - (int64_t)stack_ptr_30 >> 2;
    ptr_var10 = stack_ptr_30;
    
    if (loop_counter2 != 0) {
        do {
            temp_var1 = *ptr_var10;
            temp_var3 = (int)loop_counter1;
            if (temp_var1 <= temp_var4) {
                temp_var3 = temp_var8;
            }
            temp_var7 = (int)loop_counter1 + 1;
            loop_counter1 = (uint64_t)temp_var7;
            if (temp_var1 <= temp_var4) {
                temp_var1 = temp_var4;
            }
            temp_var4 = temp_var1;
            ptr_var10 = ptr_var10 + 1;
            temp_var8 = temp_var3;
        } while ((uint64_t)(int64_t)(int)temp_var7 < loop_counter2);
        
        if (loop_counter2 != 0) {
            vertex_array[4] = *(int64_t *)(*vertex_array + (int64_t)temp_var3 * 8);
        }
    }
    
    // 清理统计内存
    if (stack_ptr_30 == (int *)0x0) {
        return;
    }
    release_memory(stack_ptr_30);
}


// 函数: 复制数据结构
// 参数: dest_structure - 目标数据结构, src_structure - 源数据结构, param_3/param_4 - 附加参数
int64_t * copy_data_structure(int64_t *dest_structure, int64_t *src_structure, 
                              uint64_t param_3, uint64_t param_4)
{
    uint temp_var1;
    int64_t temp_var2;
    int64_t temp_var3;
    int64_t data_size;
    uint64_t memory_flags;
    
    memory_flags = 0xfffffffffffffffe;
    data_size = src_structure[1] - *src_structure >> 3;
    temp_var1 = *(uint *)(src_structure + 3);
    *(uint *)(dest_structure + 3) = temp_var1;
    temp_var3 = 0;
    temp_var2 = temp_var3;
    
    // 分配主数据缓冲区
    if (data_size != 0) {
        temp_var2 = allocate_memory(_memory_pool_180c8ed18, data_size * 8, 
                                   temp_var1 & 0xff, param_4, 0xfffffffffffffffe);
    }
    
    *dest_structure = temp_var2;
    dest_structure[1] = temp_var2;
    dest_structure[2] = temp_var2 + data_size * 8;
    temp_var2 = *src_structure;
    
    // 复制主数据
    if (temp_var2 != src_structure[1]) {
        memmove(*dest_structure, temp_var2, src_structure[1] - temp_var2);
    }
    dest_structure[1] = *dest_structure;
    dest_structure[4] = src_structure[4];
    
    // 复制顶点数据
    data_size = src_structure[6] - src_structure[5] >> 4;
    temp_var1 = *(uint *)(src_structure + 8);
    *(uint *)(dest_structure + 8) = temp_var1;
    temp_var2 = temp_var3;
    
    if (data_size != 0) {
        temp_var2 = allocate_memory(_memory_pool_180c8ed18, data_size << 4, 
                                   temp_var1 & 0xff, param_4, memory_flags);
    }
    
    dest_structure[5] = temp_var2;
    dest_structure[6] = temp_var2;
    dest_structure[7] = data_size * 0x10 + temp_var2;
    temp_var2 = dest_structure[5];
    data_size = src_structure[5];
    
    if (data_size == src_structure[6]) {
        dest_structure[6] = temp_var2;
        
        // 复制索引数据
        data_size = src_structure[10] - src_structure[9] >> 2;
        temp_var1 = *(uint *)(src_structure + 0xc);
        *(uint *)(dest_structure + 0xc) = temp_var1;
        temp_var2 = temp_var3;
        
        if (data_size != 0) {
            temp_var2 = allocate_memory(_memory_pool_180c8ed18, data_size * 4, 
                                       temp_var1 & 0xff, param_4, memory_flags);
        }
        
        dest_structure[9] = temp_var2;
        dest_structure[10] = temp_var2;
        dest_structure[0xb] = temp_var2 + data_size * 4;
        temp_var2 = dest_structure[9];
        data_size = src_structure[9];
        
        if (data_size == src_structure[10]) {
            dest_structure[10] = temp_var2;
            
            // 复制面数据
            temp_var2 = (src_structure[0xe] - src_structure[0xd]) / 6 + (src_structure[0xe] - src_structure[0xd] >> 0x3f);
            temp_var2 = (temp_var2 >> 2) - (temp_var2 >> 0x3f);
            temp_var1 = *(uint *)(src_structure + 0x10);
            *(uint *)(dest_structure + 0x10) = temp_var1;
            
            if (temp_var2 != 0) {
                temp_var3 = allocate_memory(_memory_pool_180c8ed18, temp_var2 * 0x18, 
                                           temp_var1 & 0xff, param_4, memory_flags);
            }
            
            dest_structure[0xd] = temp_var3;
            dest_structure[0xe] = temp_var3;
            dest_structure[0xf] = temp_var3 + temp_var2 * 0x18;
            temp_var2 = dest_structure[0xd];
            temp_var3 = src_structure[0xd];
            
            if (temp_var3 == src_structure[0xe]) {
                dest_structure[0xe] = temp_var2;
                return dest_structure;
            }
            memmove(temp_var2, temp_var3, src_structure[0xe] - temp_var3);
        }
        memmove(temp_var2, data_size, src_structure[10] - data_size);
    }
    memmove(temp_var2, data_size, src_structure[6] - data_size);
}


// 函数: 释放数据结构内存
// 参数: data_structure - 要释放的数据结构
void release_data_structure(uint64_t *data_structure)
{
    int *ptr_var1;
    uint64_t *ptr_var2;
    int64_t temp_var3;
    uint64_t memory_flag;
    
    // 释放面数据
    if (data_structure[0xd] != 0) {
        release_memory(data_structure[0xd]);
    }
    
    // 释放索引数据
    if (data_structure[9] != 0) {
        release_memory(data_structure[9]);
    }
    
    // 释放顶点数据
    if (data_structure[5] != 0) {
        release_memory(data_structure[5]);
    }
    
    // 释放主数据
    ptr_var2 = (uint64_t *)*data_structure;
    if (ptr_var2 != (uint64_t *)0x0) {
        memory_flag = (uint64_t)ptr_var2 & 0xffffffffffc00000;
        if (memory_flag != 0) {
            temp_var3 = memory_flag + 0x80 + ((int64_t)ptr_var2 - memory_flag >> 0x10) * 0x50;
            temp_var3 = temp_var3 - (uint64_t)*(uint *)(temp_var3 + 4);
            
            if ((*(void ***)(memory_flag + 0x70) == &ExceptionList) && 
                (*(char *)(temp_var3 + 0xe) == '\0')) {
                *ptr_var2 = *(uint64_t *)(temp_var3 + 0x20);
                *(uint64_t **)(temp_var3 + 0x20) = ptr_var2;
                ptr_var1 = (int *)(temp_var3 + 0x18);
                *ptr_var1 = *ptr_var1 + -1;
                
                if (*ptr_var1 == 0) {
                    cleanup_memory_pool();
                    return;
                }
            }
            else {
                release_managed_memory(memory_flag, 
                                     CONCAT71(0xff000000, 
                                             *(void ***)(memory_flag + 0x70) == &ExceptionList),
                                     ptr_var2, memory_flag, 0xfffffffffffffffe);
            }
        }
        return;
    }
    return;
}


// 函数: 交换数据结构内容
// 参数: structure1 - 第一个数据结构, structure2 - 第二个数据结构
uint64_t * swap_data_structures(uint64_t *structure1, uint64_t *structure2)
{
    uint64_t *result_ptr;
    int32_t temp_var2;
    uint64_t temp_var3;
    
    // 交换主数据指针
    *structure1 = 0;
    structure1[1] = 0;
    structure1[2] = 0;
    *(int32_t *)(structure1 + 3) = *(int32_t *)(structure2 + 3);
    temp_var3 = *structure1;
    *structure1 = *structure2;
    *structure2 = temp_var3;
    
    temp_var3 = structure1[1];
    structure1[1] = structure2[1];
    structure2[1] = temp_var3;
    temp_var3 = structure1[2];
    structure1[2] = structure2[2];
    structure2[2] = temp_var3;
    temp_var2 = *(int32_t *)(structure1 + 3);
    *(int32_t *)(structure1 + 3) = *(int32_t *)(structure2 + 3);
    *(int32_t *)(structure2 + 3) = temp_var2;
    
    // 交换其他字段
    structure1[4] = structure2[4];
    result_ptr = structure1 + 5;
    *result_ptr = 0;
    structure1[6] = 0;
    structure1[7] = 0;
    *(int32_t *)(structure1 + 8) = *(int32_t *)(structure2 + 8);
    temp_var3 = *result_ptr;
    *result_ptr = structure2[5];
    structure2[5] = temp_var3;
    
    temp_var3 = structure1[6];
    structure1[6] = structure2[6];
    structure2[6] = temp_var3;
    temp_var3 = structure1[7];
    structure1[7] = structure2[7];
    structure2[7] = temp_var3;
    temp_var2 = *(int32_t *)(structure1 + 8);
    *(int32_t *)(structure1 + 8) = *(int32_t *)(structure2 + 8);
    *(int32_t *)(structure2 + 8) = temp_var2;
    
    // 交换索引数据
    result_ptr = structure1 + 9;
    *result_ptr = 0;
    structure1[10] = 0;
    structure1[0xb] = 0;
    *(int32_t *)(structure1 + 0xc) = *(int32_t *)(structure2 + 0xc);
    temp_var3 = *result_ptr;
    *result_ptr = structure2[9];
    structure2[9] = temp_var3;
    
    temp_var3 = structure1[10];
    structure1[10] = structure2[10];
    structure2[10] = temp_var3;
    temp_var3 = structure1[0xb];
    structure1[0xb] = structure2[0xb];
    structure2[0xb] = temp_var3;
    temp_var2 = *(int32_t *)(structure1 + 0xc);
    *(int32_t *)(structure1 + 0xc) = *(int32_t *)(structure2 + 0xc);
    *(int32_t *)(structure2 + 0xc) = temp_var2;
    
    // 交换面数据
    result_ptr = structure1 + 0xd;
    *result_ptr = 0;
    structure1[0xe] = 0;
    structure1[0xf] = 0;
    *(int32_t *)(structure1 + 0x10) = *(int32_t *)(structure2 + 0x10);
    temp_var3 = *result_ptr;
    *result_ptr = structure2[0xd];
    structure2[0xd] = temp_var3;
    
    temp_var3 = structure1[0xe];
    structure1[0xe] = structure2[0xe];
    structure2[0xe] = temp_var3;
    temp_var3 = structure1[0xf];
    structure1[0xf] = structure2[0xf];
    structure2[0xf] = temp_var3;
    temp_var2 = *(int32_t *)(structure1 + 0x10);
    *(int32_t *)(structure1 + 0x10) = *(int32_t *)(structure2 + 0x10);
    *(int32_t *)(structure2 + 0x10) = temp_var2;
    
    return structure1;
}


// 函数: 更新资源使用统计
// 参数: resource_manager - 资源管理器, resource_data - 资源数据
void update_resource_statistics(uint64_t resource_manager, int64_t resource_data)
{
    int64_t mutex_handle;
    int64_t temp_var1;
    int64_t temp_var2;
    int lock_result;
    int64_t temp_var4;
    int64_t *resource_ptr;
    int64_t total_size;
    uint64_t stack_value_30;
    uint64_t stack_value_28;
    code *callback_func;
    code *guard_func;
    
    // 获取互斥锁
    mutex_handle = _global_mutex_180c8a9b8;
    temp_var1 = _global_mutex_180c8a9b8 + 0x38;
    lock_result = _Mtx_lock(temp_var1);
    
    if (lock_result != 0) {
        throw_c_error(lock_result);
    }
    
    // 检查资源状态
    if ((*(int64_t *)(resource_data + 0xa8) != 0) && (*(int64_t *)(resource_data + 0xb8) == 0)) {
        stack_value_30 = 0;
        stack_value_28 = 0;
        lock_result = 0;
        callback_func = (code *)0x0;
        guard_func = _guard_check_icall;
        
        // 调用资源回调函数
        call_resource_callback(resource_data, 1, &stack_value_30);
        
        if (callback_func != (code *)0x0) {
            (*callback_func)(&stack_value_30, 0, 0);
        }
        
        // 计算资源大小
        resource_ptr = *(int64_t **)(resource_data + 0xb8);
        total_size = ((resource_ptr[1] - *resource_ptr) / 0x30) * 0x30 + 
                    (resource_ptr[5] - resource_ptr[4] & 0xffffffffffffffe0U);
        temp_var4 = resource_ptr[9] - resource_ptr[8];
        temp_var2 = temp_var4 >> 0x3f;
        temp_var4 = temp_var4 / 0x88 + temp_var2;
        
        if (temp_var4 != temp_var2) {
            resource_ptr = (int64_t *)(resource_ptr[8] + 0x30);
            do {
                total_size = total_size + (*resource_ptr - resource_ptr[-1] >> 4) * 0x14 + 
                             ((resource_ptr[8] - resource_ptr[7]) / 0x18) * 0x18;
                lock_result = lock_result + 1;
                resource_ptr = resource_ptr + 0x11;
            } while ((uint64_t)(int64_t)lock_result < (uint64_t)(temp_var4 - temp_var2));
        }
        
        // 更新统计信息
        *(int64_t *)(mutex_handle + 0x30) = *(int64_t *)(mutex_handle + 0x30) + total_size;
    }
    
    // 释放互斥锁
    lock_result = _Mtx_unlock(temp_var1);
    if (lock_result != 0) {
        throw_c_error(lock_result);
    }
}