#include "TaleWorlds.Native.Split.h"

// 03_rendering_part047.c - 渲染系统高级数据结构和内存管理模块
// 本文件包含10个核心函数，涵盖渲染系统参数初始化、资源清理、内存管理、数据结构操作等功能

// 全局变量：渲染系统主数据结构指针
static longlong *rendering_main_data_structure = (longlong *)0x180c8a9b0;
static longlong *rendering_context_manager = (longlong *)0x180c8a9a8;

// 函数：初始化渲染系统参数和状态
// 参数：param_1 - 渲染对象指针，如果为NULL则使用默认渲染对象
// 功能：设置渲染系统的各种参数，包括纹理坐标、变换矩阵、混合模式等
void initialize_rendering_parameters(longlong render_object)
{
    // 检查并设置默认渲染对象
    if (render_object == 0) {
        render_object = rendering_main_data_structure[0] + 0x1628;
    }
    
    // 设置基础纹理坐标参数 (UV映射)
    *(double *)(render_object + 0xa0) = 1.0;  // U坐标缩放
    *(double *)(render_object + 0xa8) = 1.0;  // V坐标缩放
    *(double *)(render_object + 0xc0) = 0.06; // 纹理偏移X
    *(double *)(render_object + 200) = 0.93;  // 纹理偏移Y
    
    // 设置高级纹理参数
    *(double *)(render_object + 0xe0) = 0.08; // 纹理旋转角度
    *(double *)(render_object + 0xe8) = 0.93; // 纹理缩放因子
    *(double *)(render_object + 0xb0) = 0.5;  // 混合因子A
    *(double *)(render_object + 0xb8) = 1.0;  // 混合因子B
    
    // 清空临时缓冲区
    *(longlong *)(render_object + 0x100) = 0;
    *(longlong *)(render_object + 0x108) = 0;
    
    // 设置渲染状态参数
    *(double *)(render_object + 0x120) = 0.59; // 深度参数1
    *(double *)(render_object + 0x128) = 0.4;  // 深度参数2
    *(longlong *)(render_object + 0xd0) = 0;
    *(longlong *)(render_object + 0xd8) = 0;
    
    // 设置光照参数
    *(double *)(render_object + 0x140) = 0.04; // 环境光强度
    *(double *)(render_object + 0x148) = 1.0;  // 漫反射强度
    *(double *)(render_object + 0x110) = 0.29; // 镜面反射参数1
    *(double *)(render_object + 0x118) = 0.52; // 镜面反射参数2
    
    // 设置雾效参数
    *(longlong *)(render_object + 0x160) = 0;
    *(double *)(render_object + 0x168) = 0.52;  // 雾效密度
    *(double *)(render_object + 0x130) = 0.59; // 雾效起始距离
    *(double *)(render_object + 0x138) = 0.67; // 雾效结束距离
    
    // 设置阴影参数
    *(double *)(render_object + 0x180) = 0.02; // 阴影模糊度
    *(double *)(render_object + 0x188) = 0.52; // 阴影偏移
    *(double *)(render_object + 0x170) = 0.14; // 阴影强度
    *(double *)(render_object + 0x178) = 1.0;  // 阴影对比度
    
    // 设置后处理效果参数
    *(double *)(render_object + 0x1a0) = 0.41; // 亮度
    *(double *)(render_object + 0x1a8) = 1.0;  // 对比度
    *(double *)(render_object + 400) = 0.28;   // 饱和度
    *(double *)(render_object + 0x198) = 1.0;  // 色调
    
    // 设置多个渲染通道参数
    // 通道1
    *(double *)(render_object + 0x1c0) = 0.59; // 红色通道
    *(double *)(render_object + 0x1c8) = 1.0;  // 绿色通道
    // 通道2
    *(double *)(render_object + 0x1e0) = 0.59; // 蓝色通道
    *(double *)(render_object + 0x1e8) = 1.0;  // 透明度通道
    // 通道3
    *(double *)(render_object + 0x200) = 0.59; // 混合通道1
    *(double *)(render_object + 0x208) = 1.0;  // 混合通道2
    // 通道4
    *(double *)(render_object + 0x240) = 0.59; // 特效通道1
    *(double *)(render_object + 0x248) = 1.0;  // 特效通道2
    
    // 设置抗锯齿参数
    *(double *)(render_object + 0x1b0) = 0.52; // 抗锯齿强度
    *(double *)(render_object + 0x1b8) = 1.0;  // 抗锯齿样本数
    
    // 设置高级渲染参数
    *(double *)(render_object + 0x260) = 0.4;  // 法线贴图强度
    *(double *)(render_object + 0x268) = 0.78; // 高光贴图强度
    *(double *)(render_object + 0x1d0) = 0.52; // 环境光遮蔽
    *(double *)(render_object + 0x1d8) = 0.88; // 次表面散射
    
    // 设置粒子系统参数
    *(double *)(render_object + 0x280) = 0.59; // 粒子大小
    *(double *)(render_object + 0x288) = 0.25; // 粒子密度
    *(double *)(render_object + 0x1f0) = 0.59; // 粒子速度
    *(double *)(render_object + 0x1f8) = 0.4;  // 粒子生命周期
    
    // 设置反射参数
    *(double *)(render_object + 0xf0) = 0.43;  // 反射强度
    *(double *)(render_object + 0xf8) = 0.5;   // 反射模糊度
    *(double *)(render_object + 0x250) = 0.43;  // 折射强度
    *(double *)(render_object + 600) = 0.5;    // 折射率
    
    // 设置动态参数
    *(double *)(render_object + 0x2a0) = 0.59; // 动态光照强度
    *(double *)(render_object + 0x2a8) = 0.95; // 动态阴影强度
    *(double *)(render_object + 0x210) = 0.52; // 动态反射强度
    *(double *)(render_object + 0x218) = 1.0;  // 动态对比度
    
    // 设置景深参数
    *(double *)(render_object + 0x270) = 0.4;  // 景深范围
    *(double *)(render_object + 0x278) = 1.0;  // 景深强度
    *(double *)(render_object + 0x230) = 0.59; // 焦点距离
    *(double *)(render_object + 0x238) = 0.8;  // 光圈大小
    
    // 设置运动模糊参数
    *(double *)(render_object + 0x290) = 0.59; // 运动模糊强度
    *(double *)(render_object + 0x298) = 0.67; // 运动模糊角度
    
    // 设置高级纹理坐标
    *(float *)(render_object + 0x220) = 0.26;  // 纹理坐标U1
    *(float *)(render_object + 0x224) = 0.59;  // 纹理坐标V1
    *(float *)(render_object + 0x228) = 0.96;  // 纹理坐标U2
    *(float *)(render_object + 0x22c) = 0.28;  // 纹理坐标V2
    
    // 设置细节纹理参数
    *(float *)(render_object + 0x150) = 0.15;  // 细节纹理缩放X
    *(float *)(render_object + 0x154) = 0.29;  // 细节纹理缩放Y
    *(float *)(render_object + 0x158) = 0.87;  // 细节纹理偏移X
    *(float *)(render_object + 0x15c) = 1.0;   // 细节纹理偏移Y
    
    // 设置程序化纹理参数
    *(double *)(render_object + 0x2c0) = 0.59; // 程序化纹理强度
    *(double *)(render_object + 0x2c8) = 0.8;  // 程序化纹理频率
    *(float *)(render_object + 0x2b0) = 0.18; // 程序化纹理种子X
    *(float *)(render_object + 0x2b4) = 0.35; // 程序化纹理种子Y
    
    // 计算插值参数
    *(float *)(render_object + 0x2b8) =
         (*(float *)(render_object + 0x158) - *(float *)(render_object + 0x228)) * 0.8 +
         *(float *)(render_object + 0x228);
    *(float *)(render_object + 700) =
         (*(float *)(render_object + 0x15c) - *(float *)(render_object + 0x22c)) * 0.8 +
         *(float *)(render_object + 0x22c);
    
    // 计算高级插值参数
    *(float *)(render_object + 0x2d0) =
         (*(float *)(render_object + 0x150) - *(float *)(render_object + 0x240)) * 0.6 +
         *(float *)(render_object + 0x240);
    *(float *)(render_object + 0x2d4) =
         (*(float *)(render_object + 0x154) - *(float *)(render_object + 0x244)) * 0.6 +
         *(float *)(render_object + 0x244);
    *(float *)(render_object + 0x2d8) =
         (*(float *)(render_object + 0x158) - *(float *)(render_object + 0x248)) * 0.6 +
         *(float *)(render_object + 0x248);
    *(float *)(render_object + 0x2dc) =
         (*(float *)(render_object + 0x15c) - *(float *)(render_object + 0x24c)) * 0.6 +
         *(float *)(render_object + 0x24c);
    
    // 计算平滑过渡参数
    *(float *)(render_object + 0x2e0) =
         (*(float *)(render_object + 0x140) - *(float *)(render_object + 0x2b0)) * 0.8 +
         *(float *)(render_object + 0x2b0);
    *(float *)(render_object + 0x2e4) =
         (*(float *)(render_object + 0x144) - *(float *)(render_object + 0x2b4)) * 0.8 +
         *(float *)(render_object + 0x2b4);
    *(float *)(render_object + 0x2e8) =
         (*(float *)(render_object + 0x148) - *(float *)(render_object + 0x2b8)) * 0.8 +
         *(float *)(render_object + 0x2b8);
    *(float *)(render_object + 0x2ec) =
         (*(float *)(render_object + 0x14c) - *(float *)(render_object + 700)) * 0.8 + 
         *(float *)(render_object + 700);
    
    // 计算最终混合参数
    *(float *)(render_object + 0x2f0) =
         (*(float *)(render_object + 0x140) - *(float *)(render_object + 0x2d0)) * 0.4 +
         *(float *)(render_object + 0x2d0);
    *(float *)(render_object + 0x2f4) =
         (*(float *)(render_object + 0x144) - *(float *)(render_object + 0x2d4)) * 0.4 +
         *(float *)(render_object + 0x2d4);
    *(float *)(render_object + 0x2f8) =
         (*(float *)(render_object + 0x148) - *(float *)(render_object + 0x2d8)) * 0.4 +
         *(float *)(render_object + 0x2d8);
    *(float *)(render_object + 0x2fc) =
         (*(float *)(render_object + 0x14c) - *(float *)(render_object + 0x2dc)) * 0.4 +
         *(float *)(render_object + 0x2dc);
    
    // 设置最终渲染参数
    *(double *)(render_object + 0x310) = 0.2;  // 最终混合因子1
    *(double *)(render_object + 0x318) = 1.0;  // 最终混合因子2
    *(double *)(render_object + 800) = 0.61;   // 最终亮度
    *(double *)(render_object + 0x328) = 1.0;  // 最终对比度
    *(double *)(render_object + 0x330) = 0.43;  // 最终色调
    *(double *)(render_object + 0x338) = 1.0;   // 最终饱和度
    
    // 设置HDR参数
    *(double *)(render_object + 0x340) = 0.7;   // HDR曝光度
    *(double *)(render_object + 0x348) = 1.0;   // HDR对比度
    *(double *)(render_object + 0x350) = 0.1;   // HDR亮度
    *(double *)(render_object + 0x358) = 1.0;   // HDR饱和度
    
    // 设置色差参数
    *(double *)(render_object + 0x360) = 0.59;  // 色差强度
    *(double *)(render_object + 0x368) = 0.35;  // 色差偏移
    *(double *)(render_object + 0x370) = 1.0;   // 色差混合
    *(double *)(render_object + 0x378) = 0.9;   // 色差模糊
    
    // 设置噪声参数
    *(double *)(render_object + 0x380) = 0.59;  // 噪声强度
    *(double *)(render_object + 0x388) = 1.0;   // 噪声频率
    *(double *)(render_object + 0x390) = 1.0;   // 噪声种子
    *(double *)(render_object + 0x398) = 0.2;   // 噪声阈值
    
    // 设置最终输出参数
    *(double *)(render_object + 0x3a0) = 0.8;   // 输出增益
    *(double *)(render_object + 0x3a8) = 0.2;   // 输出偏移
    *(double *)(render_object + 0x3b0) = 0.8;   // 输出范围
    *(double *)(render_object + 0x3b8) = 0.35;  // 输出精度
    
    // 复制最终参数到输出缓冲区
    *(float *)(render_object + 0x300) = *(float *)(render_object + 0x240);
    *(float *)(render_object + 0x304) = *(float *)(render_object + 0x244);
    *(float *)(render_object + 0x308) = *(float *)(render_object + 0x248);
    *(float *)(render_object + 0x30c) = *(float *)(render_object + 0x24c) * 0.7;
    
    // 设置最终渲染状态
    *(double *)(render_object + 0x3b0) = 0.8;   // 最终渲染质量
    *(double *)(render_object + 0x3b8) = 0.35;  // 最终渲染性能
    
    return;
}

// 函数：重置渲染对象状态
// 参数：param_1 - 渲染对象指针
// 功能：重置渲染对象的所有状态和资源，释放内存并重置参数
void reset_render_object_state(uint32_t *render_object)
{
    int resource_index;
    int buffer_size;
    int allocation_size;
    
    resource_index = 0;
    buffer_size = render_object[1];
    
    // 释放主缓冲区资源
    if (buffer_size < 0) {
        buffer_size = buffer_size / 2 + buffer_size;
        allocation_size = resource_index;
        if (0 < buffer_size) {
            allocation_size = buffer_size;
        }
        release_render_resource(render_object, allocation_size);
    }
    
    // 重置主缓冲区
    *render_object = 0;
    buffer_size = render_object[5];
    
    // 释放次缓冲区资源
    if (buffer_size < 0) {
        buffer_size = buffer_size / 2 + buffer_size;
        allocation_size = resource_index;
        if (0 < buffer_size) {
            allocation_size = buffer_size;
        }
        release_render_resource(render_object + 4, allocation_size);
    }
    
    // 重置次缓冲区
    render_object[4] = 0;
    
    // 清理渲染状态
    clear_render_state(render_object + 8, 0);
    render_object[0xc] = 3;  // 设置默认渲染状态
    render_object[0x12] = 0;  // 重置渲染计数器
    
    // 清理渲染数据结构
    *(uint64_t *)(render_object + 0x14) = 0;
    *(uint64_t *)(render_object + 0x16) = 0;
    
    // 释放纹理资源
    buffer_size = render_object[0x19];
    if (buffer_size < 0) {
        buffer_size = buffer_size / 2 + buffer_size;
        allocation_size = resource_index;
        if (0 < buffer_size) {
            allocation_size = buffer_size;
        }
        release_texture_resource(render_object + 0x18, allocation_size);
    }
    render_object[0x18] = 0;
    
    // 释放着色器资源
    buffer_size = render_object[0x1d];
    if (buffer_size < 0) {
        buffer_size = buffer_size / 2 + buffer_size;
        allocation_size = resource_index;
        if (0 < buffer_size) {
            allocation_size = buffer_size;
        }
        release_shader_resource(render_object + 0x1c, allocation_size);
    }
    render_object[0x1c] = 0;
    
    // 释放缓冲区资源
    buffer_size = render_object[0x21];
    if (buffer_size < 0) {
        buffer_size = buffer_size / 2 + buffer_size;
        if (0 < buffer_size) {
            resource_index = buffer_size;
        }
        release_shader_resource(render_object + 0x20, resource_index);
    }
    render_object[0x20] = 0;
    
    // 重置最终状态
    render_object[0x24] = 0;
    render_object[0x25] = 1;
    
    return;
}

// 函数：释放渲染资源数组
// 参数：param_1 - 渲染资源数组指针
// 功能：释放渲染资源数组中的所有资源，包括纹理、着色器、缓冲区等
void release_render_resource_array(uint64_t *resource_array)
{
    int *resource_count_ptr;
    longlong resource_handle;
    uint64_t *resource_ptr;
    longlong resource_manager;
    uint resource_index;
    uint64_t resource_size;
    longlong sub_resource_handle;
    uint64_t loop_counter;
    
    resource_manager = rendering_main_data_structure[0];
    resource_handle = resource_array[1];
    
    // 释放主资源
    if (resource_handle != 0) {
        *resource_array = 0;
        if (resource_manager != 0) {
            *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) - 1;
        }
        // 释放资源内存
        free_render_resource(resource_handle, rendering_context_manager[0]);
    }
    
    // 释放次资源
    resource_handle = resource_array[3];
    if (resource_handle != 0) {
        resource_array[2] = 0;
        if (resource_manager != 0) {
            *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) - 1;
        }
        free_render_resource(resource_handle, rendering_context_manager[0]);
    }
    
    // 释放第三级资源
    resource_handle = resource_array[5];
    if (resource_handle != 0) {
        resource_array[4] = 0;
        if (resource_manager != 0) {
            *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) - 1;
        }
        free_render_resource(resource_handle, rendering_context_manager[0]);
    }
    
    // 重置资源标志
    *(uint32_t *)(resource_array + 9) = 0;
    resource_array[10] = 0;
    resource_array[0xb] = 0;
    
    resource_manager = rendering_main_data_structure[0];
    resource_handle = resource_array[0xd];
    
    // 检查并释放高级资源
    if (resource_handle == 0) {
        resource_handle = resource_array[0xf];
        if (resource_handle != 0) {
            resource_array[0xe] = 0;
            if (resource_manager != 0) {
                *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) - 1;
            }
            free_render_resource(resource_handle, rendering_context_manager[0]);
        }
        
        resource_handle = resource_array[0x11];
        if (resource_handle == 0) {
            // 重置高级资源标志
            *(uint32_t *)(resource_array + 0x12) = 0;
            *(uint32_t *)((longlong)resource_array + 0x94) = 1;
            resource_size = loop_counter = 0;
            
            // 遍历并释放子资源
            if (0 < *(int *)(resource_array + 0x13)) {
                do {
                    if (loop_counter == 0) {
                        resource_ptr = (uint64_t *)resource_array[0x14];
                        *resource_ptr = 0;
                        resource_ptr[1] = 0;
                        resource_ptr[2] = 0;
                        resource_ptr[3] = 0;
                    }
                    
                    resource_manager = rendering_main_data_structure[0];
                    sub_resource_handle = loop_counter * 0x20;
                    resource_handle = *(longlong *)(resource_array[0x14] + 8 + sub_resource_handle);
                    
                    // 释放子资源1
                    if (resource_handle != 0) {
                        *(uint64_t *)(resource_array[0x14] + sub_resource_handle) = 0;
                        if (resource_manager != 0) {
                            *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) - 1;
                        }
                        free_render_resource(resource_handle, rendering_context_manager[0]);
                    }
                    
                    // 释放子资源2
                    resource_handle = *(longlong *)(resource_array[0x14] + 0x18 + sub_resource_handle);
                    if (resource_handle != 0) {
                        *(uint64_t *)(resource_array[0x14] + 0x10 + sub_resource_handle) = 0;
                        if (resource_manager != 0) {
                            *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) - 1;
                        }
                        free_render_resource(resource_handle, rendering_context_manager[0]);
                    }
                    
                    resource_index = (int)loop_counter + 1;
                    loop_counter = (uint64_t)resource_index;
                    resource_size = resource_size + 1;
                } while ((int)resource_index < *(int *)(resource_array + 0x13));
            }
            
            // 释放资源数组
            resource_manager = rendering_main_data_structure[0];
            resource_handle = resource_array[0x14];
            if (resource_handle == 0) {
                return;
            }
            resource_array[0x13] = 0;
            if (resource_manager != 0) {
                resource_count_ptr = (int *)(resource_manager + 0x3a8);
                *resource_count_ptr = *resource_count_ptr - 1;
            }
            free_render_resource(resource_handle, rendering_context_manager[0]);
        }
        
        // 释放最终资源
        resource_array[0x10] = 0;
        if (resource_manager != 0) {
            *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) - 1;
        }
        free_render_resource(resource_handle, rendering_context_manager[0]);
    }
    
    // 释放核心资源
    resource_array[0xc] = 0;
    if (resource_manager != 0) {
        *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) - 1;
    }
    free_render_resource(resource_handle, rendering_context_manager[0]);
}

// 函数：释放渲染资源数组（简化版本）
// 参数：param_1 - 渲染资源指针
// 功能：简化版的资源释放函数，用于快速释放渲染资源
void release_render_resource_array_simplified(longlong resource_ptr)
{
    int *resource_count_ptr;
    longlong resource_handle;
    uint64_t *resource_array_ptr;
    longlong resource_manager;
    uint resource_index;
    uint64_t resource_size;
    longlong sub_resource_handle;
    uint64_t loop_counter;
    
    resource_manager = rendering_main_data_structure[0];
    resource_handle = *(longlong *)(resource_ptr + 8);
    loop_counter = 0;
    
    // 释放主资源
    if (resource_handle != 0) {
        *(uint64_t *)resource_ptr = 0;
        if (resource_manager != 0) {
            *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) - 1;
        }
        free_render_resource(resource_handle, rendering_context_manager[0]);
    }
    
    // 释放次资源
    resource_handle = *(uint64_t *)(resource_ptr + 24);
    if (resource_handle != 0) {
        *(uint64_t *)(resource_ptr + 16) = 0;
        if (resource_manager != 0) {
            *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) - 1;
        }
        free_render_resource(resource_handle, rendering_context_manager[0]);
    }
    
    // 释放第三级资源
    resource_handle = *(uint64_t *)(resource_ptr + 40);
    if (resource_handle != 0) {
        *(uint64_t *)(resource_ptr + 32) = 0;
        if (resource_manager != 0) {
            *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) - 1;
        }
        free_render_resource(resource_handle, rendering_context_manager[0]);
    }
    
    // 重置资源标志
    *(uint32_t *)(resource_ptr + 72) = 0;
    *(uint64_t *)(resource_ptr + 80) = 0;
    *(uint64_t *)(resource_ptr + 88) = 0;
    
    resource_manager = rendering_main_data_structure[0];
    resource_handle = *(uint64_t *)(resource_ptr + 104);
    
    // 检查并释放高级资源
    if (resource_handle == 0) {
        resource_handle = *(uint64_t *)(resource_ptr + 120);
        if (resource_handle != 0) {
            *(uint64_t *)(resource_ptr + 112) = 0;
            if (resource_manager != 0) {
                *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) - 1;
            }
            free_render_resource(resource_handle, rendering_context_manager[0]);
        }
        
        resource_handle = *(uint64_t *)(resource_ptr + 136);
        if (resource_handle == 0) {
            // 重置高级资源标志
            *(uint32_t *)(resource_ptr + 144) = 0;
            *(uint32_t *)((longlong)resource_ptr + 148) = 1;
            resource_size = loop_counter = 0;
            
            // 遍历并释放子资源
            if (0 < *(int *)(resource_ptr + 152)) {
                do {
                    if (loop_counter == 0) {
                        resource_array_ptr = (uint64_t *)*(uint64_t *)(resource_ptr + 160);
                        *resource_array_ptr = 0;
                        resource_array_ptr[1] = 0;
                        resource_array_ptr[2] = 0;
                        resource_array_ptr[3] = 0;
                    }
                    
                    resource_manager = rendering_main_data_structure[0];
                    sub_resource_handle = loop_counter * 0x20;
                    resource_handle = *(longlong *)(*(uint64_t *)(resource_ptr + 160) + 8 + sub_resource_handle);
                    
                    // 释放子资源1
                    if (resource_handle != 0) {
                        *(uint64_t *)(*(uint64_t *)(resource_ptr + 160) + sub_resource_handle) = 0;
                        if (resource_manager != 0) {
                            *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) - 1;
                        }
                        free_render_resource(resource_handle, rendering_context_manager[0]);
                    }
                    
                    // 释放子资源2
                    resource_handle = *(longlong *)(*(uint64_t *)(resource_ptr + 160) + 24 + sub_resource_handle);
                    if (resource_handle != 0) {
                        *(uint64_t *)(*(uint64_t *)(resource_ptr + 160) + 16 + sub_resource_handle) = 0;
                        if (resource_manager != 0) {
                            *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) - 1;
                        }
                        free_render_resource(resource_handle, rendering_context_manager[0]);
                    }
                    
                    resource_index = (int)loop_counter + 1;
                    loop_counter = (uint64_t)resource_index;
                    resource_size = resource_size + 1;
                } while ((int)resource_index < *(int *)(resource_ptr + 152));
            }
            
            // 释放资源数组
            resource_manager = rendering_main_data_structure[0];
            resource_handle = *(uint64_t *)(resource_ptr + 160);
            if (resource_handle == 0) {
                return;
            }
            *(int *)(resource_ptr + 152) = 0;
            if (resource_manager != 0) {
                resource_count_ptr = (int *)(resource_manager + 0x3a8);
                *resource_count_ptr = *resource_count_ptr - 1;
            }
            free_render_resource(resource_handle, rendering_context_manager[0]);
        }
        
        // 释放最终资源
        *(uint64_t *)(resource_ptr + 128) = 0;
        if (resource_manager != 0) {
            *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) - 1;
        }
        free_render_resource(resource_handle, rendering_context_manager[0]);
    }
    
    // 释放核心资源
    *(uint64_t *)(resource_ptr + 96) = 0;
    if (resource_manager != 0) {
        *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) - 1;
    }
    free_render_resource(resource_handle, rendering_context_manager[0]);
}

// 函数：批量清理渲染资源
// 功能：遍历并清理渲染对象中的所有资源
void batch_cleanup_render_resources(void)
{
    uint64_t *resource_array;
    longlong resource_handle;
    longlong resource_manager;
    longlong render_object;
    int resource_count;
    longlong resource_offset;
    longlong sub_resource_handle;
    uint64_t loop_counter;
    
    resource_manager = rendering_main_data_structure[0];
    render_object = resource_handle;
    
    do {
        if (render_object == 0) {
            resource_array = *(uint64_t **)(resource_manager + 0xa0);
            *resource_array = 0;
            resource_array[1] = 0;
            resource_array[2] = 0;
            resource_array[3] = 0;
        }
        
        resource_manager = rendering_main_data_structure[0];
        resource_offset = render_object * 0x20;
        resource_handle = *(longlong *)(*(longlong *)(resource_manager + 0xa0) + 8 + resource_offset);
        
        // 释放主资源
        if (resource_handle != 0) {
            *(longlong *)(*(longlong *)(resource_manager + 0xa0) + resource_offset) = render_object;
            if (resource_manager != 0) {
                *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) - 1;
            }
            free_render_resource(resource_handle, rendering_context_manager[0]);
        }
        
        // 释放次资源
        resource_handle = *(longlong *)(*(longlong *)(resource_manager + 0xa0) + 24 + resource_offset);
        if (resource_handle != 0) {
            *(longlong *)(*(longlong *)(resource_manager + 0xa0) + 16 + resource_offset) = render_object;
            if (resource_manager != 0) {
                *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) - 1;
            }
            free_render_resource(resource_handle, rendering_context_manager[0]);
        }
        
        resource_count = resource_count + 1;
        render_object = render_object + 1;
    } while (resource_count < *(int *)(resource_manager + 0x98));
    
    // 释放最终资源数组
    resource_handle = *(longlong *)(resource_manager + 0xa0);
    if (resource_handle != 0) {
        *(longlong *)(resource_manager + 0x98) = render_object;
        if (resource_manager != 0) {
            *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) - 1;
        }
        free_render_resource(resource_handle, rendering_context_manager[0]);
    }
    
    return;
}

// 函数：清理渲染资源数组
// 功能：快速清理渲染资源数组
void cleanup_render_resource_array(void)
{
    int *resource_count_ptr;
    longlong resource_handle;
    longlong resource_manager;
    longlong render_object;
    uint64_t resource_value;
    
    resource_manager = rendering_main_data_structure[0];
    resource_handle = *(longlong *)(render_object + 0xa0);
    
    if (resource_handle != 0) {
        *(uint64_t *)(render_object + 0x98) = resource_value;
        if (resource_manager != 0) {
            resource_count_ptr = (int *)(resource_manager + 0x3a8);
            *resource_count_ptr = *resource_count_ptr - 1;
        }
        free_render_resource(resource_handle, rendering_context_manager[0]);
    }
    
    return;
}

// 函数：释放渲染资源句柄
// 参数：param_1 - 渲染资源句柄
// 功能：释放指定的渲染资源句柄
void release_render_resource_handle(uint64_t resource_handle)
{
    int *resource_count_ptr;
    longlong resource_manager;
    longlong render_object;
    uint64_t resource_value;
    
    resource_manager = rendering_main_data_structure[0];
    *(uint64_t *)(render_object + 0x98) = resource_value;
    
    if (resource_manager != 0) {
        resource_count_ptr = (int *)(resource_manager + 0x3a8);
        *resource_count_ptr = *resource_count_ptr - 1;
    }
    free_render_resource(resource_handle, rendering_context_manager[0]);
}

// 函数：添加渲染数据到缓冲区
// 参数：param_1 - 渲染数据缓冲区指针
// 功能：将渲染数据添加到缓冲区中，处理缓冲区扩展和数据插入
void add_render_data_to_buffer(int *render_buffer)
{
    longlong *data_ptr;
    uint64_t *resource_ptr;
    longlong buffer_offset;
    int current_count;
    int max_count;
    uint texture_id;
    uint shader_id;
    longlong data_offset;
    int new_count;
    int expanded_count;
    longlong new_offset;
    uint *texture_data;
    longlong *buffer_data;
    int buffer_capacity;
    int buffer_size;
    longlong buffer_base;
    uint *sub_texture_data;
    
    // 获取纹理数据
    if (render_buffer[0x18] == 0) {
        texture_data = (uint *)(*(longlong *)(render_buffer + 0xe) + 0x18);
    } else {
        texture_data = (uint *)((longlong)(render_buffer[0x18] + -1) * 0x10 + *(longlong *)(render_buffer + 0x1a));
    }
    
    texture_id = *texture_data;
    data_offset = *(longlong *)(texture_data + 1);
    shader_id = texture_data[3];
    
    // 获取资源数据
    if (render_buffer[0x1c] == 0) {
        buffer_offset = 0;
    } else {
        buffer_offset = *(uint64_t *)(*(longlong *)(render_buffer + 0x1e) + -8 + (longlong)render_buffer[0x1c] * 8);
    }
    
    buffer_size = *render_buffer;
    buffer_capacity = render_buffer[1];
    
    // 检查并扩展缓冲区
    if (buffer_size == buffer_capacity) {
        if (buffer_capacity == 0) {
            buffer_capacity = 8;
        } else {
            buffer_capacity = buffer_capacity / 2 + buffer_capacity;
        }
        new_count = buffer_size + 1;
        if (buffer_size + 1 < buffer_capacity) {
            new_count = buffer_capacity;
        }
        expand_render_buffer(render_buffer, new_count);
        buffer_size = *render_buffer;
    }
    
    new_offset = (longlong)buffer_size;
    buffer_base = *(longlong *)(render_buffer + 2);
    data_ptr = (longlong *)(buffer_base + new_offset * 0x30);
    
    // 存储纹理数据
    *data_ptr = (uint64_t)texture_id << 0x20;
    data_ptr[1] = data_offset;
    
    // 存储着色器数据
    resource_ptr = (uint64_t *)(buffer_base + 0x10 + new_offset * 0x30);
    *resource_ptr = shader_id;
    resource_ptr[1] = buffer_offset;
    
    // 清空扩展数据区域
    resource_ptr = (uint64_t *)(buffer_base + 0x20 + new_offset * 0x30);
    *resource_ptr = 0;
    resource_ptr[1] = 0;
    
    // 更新缓冲区计数
    *render_buffer = *render_buffer + 1;
    
    return;
}

// 函数：更新渲染数据缓冲区
// 参数：param_1 - 渲染数据缓冲区指针
// 功能：更新渲染数据缓冲区中的现有数据，处理重复数据优化
void update_render_data_buffer(int *render_buffer)
{
    uint64_t *resource_ptr;
    longlong resource_handle;
    int current_count;
    uint texture_id;
    uint shader_id;
    longlong data_offset;
    int buffer_size;
    int buffer_capacity;
    longlong new_offset;
    uint *texture_data;
    longlong *buffer_data;
    int *previous_data;
    int *current_data;
    int *previous_ptr;
    uint stack_value;
    uint64_t stack_offset;
    
    // 获取缓冲区数据
    if (render_buffer[0x18] == 0) {
        buffer_data = (longlong *)(*(longlong *)(render_buffer + 0xe) + 0x18);
    } else {
        buffer_data = (longlong *)((longlong)(render_buffer[0x18] + -1) * 0x10 + *(longlong *)(render_buffer + 0x1a));
    }
    
    data_offset = *buffer_data;
    resource_handle = buffer_data[1];
    buffer_size = *render_buffer;
    current_data = (int *)0x0;
    previous_data = current_data;
    
    if (0 < buffer_size) {
        previous_data = (int *)((longlong)(buffer_size + -1) * 0x30 + *(longlong *)(render_buffer + 2));
    }
    
    // 检查是否需要更新现有数据
    if (((previous_data == (int *)0x0) ||
        ((*previous_data != 0 &&
         ((*(longlong *)(previous_data + 1) != data_offset || (*(longlong *)(previous_data + 3) != resource_handle)))))) ||
       (*(longlong *)(previous_data + 8) != 0)) {
        
        // 获取纹理数据
        if (render_buffer[0x18] == 0) {
            texture_data = (uint *)(*(longlong *)(render_buffer + 0xe) + 0x18);
        } else {
            texture_data = (uint *)((longlong)(render_buffer[0x18] + -1) * 0x10 + *(longlong *)(render_buffer + 0x1a));
        }
        
        texture_id = *texture_data;
        data_offset = *(longlong *)(texture_data + 1);
        shader_id = texture_data[3];
        
        // 获取资源数据
        if (render_buffer[0x1c] == 0) {
            stack_offset = 0;
        } else {
            stack_offset = *(uint64_t *)(*(longlong *)(render_buffer + 0x1e) + -8 + (longlong)render_buffer[0x1c] * 8);
        }
        
        buffer_size = *render_buffer;
        buffer_capacity = render_buffer[1];
        
        // 检查并扩展缓冲区
        if (buffer_size == buffer_capacity) {
            if (buffer_capacity == 0) {
                buffer_capacity = 8;
            } else {
                buffer_capacity = buffer_capacity / 2 + buffer_capacity;
            }
            current_count = buffer_size + 1;
            if (buffer_size + 1 < buffer_capacity) {
                current_count = buffer_capacity;
            }
            expand_render_buffer(render_buffer, current_count);
            buffer_size = *render_buffer;
        }
        
        new_offset = (longlong)buffer_size;
        resource_handle = *(longlong *)(render_buffer + 2);
        buffer_data = (longlong *)(resource_handle + new_offset * 0x30);
        
        // 存储纹理数据
        *buffer_data = (uint64_t)texture_id << 0x20;
        buffer_data[1] = data_offset;
        
        // 存储着色器数据
        resource_ptr = (uint64_t *)(resource_handle + 0x10 + new_offset * 0x30);
        *resource_ptr = shader_id;
        resource_ptr[1] = stack_offset;
        
        // 清空扩展数据区域
        resource_ptr = (uint64_t *)(resource_handle + 0x20 + new_offset * 0x30);
        *resource_ptr = 0;
        resource_ptr[1] = 0;
        
        // 更新缓冲区计数
        *render_buffer = *render_buffer + 1;
        return;
    }
    
    // 优化重复数据
    previous_ptr = previous_data + -0xc;
    if (buffer_size < 2) {
        previous_ptr = (int *)0x0;
    }
    
    if ((((*previous_data == 0) && (previous_ptr != (int *)0x0)) && (*(longlong *)(previous_ptr + 1) == data_offset)) &&
       (*(longlong *)(previous_ptr + 3) == resource_handle)) {
        
        if (render_buffer[0x1c] != 0) {
            current_data = *(int **)(*(longlong *)(render_buffer + 0x1e) + -8 + (longlong)render_buffer[0x1c] * 8);
        }
        
        if ((*(int **)(previous_ptr + 6) == current_data) && (*(longlong *)(previous_ptr + 8) == 0)) {
            *render_buffer = buffer_size + -1;
            return;
        }
    }
    
    // 更新数据
    *(longlong *)(previous_data + 1) = data_offset;
    *(longlong *)(previous_data + 3) = resource_handle;
    
    return;
}

// 函数：优化渲染数据缓冲区
// 参数：param_1 - 渲染数据缓冲区指针
// 功能：优化渲染数据缓冲区，移除重复数据并合并相似数据
void optimize_render_data_buffer(int *render_buffer)
{
    uint64_t *resource_ptr;
    longlong resource_handle;
    int current_count;
    uint texture_id;
    uint shader_id;
    longlong data_offset;
    int buffer_size;
    int buffer_capacity;
    longlong new_offset;
    uint *texture_data;
    longlong *buffer_data;
    int *previous_data;
    int *current_data;
    int *previous_ptr;
    uint stack_value;
    uint64_t stack_offset;
    
    current_data = (int *)0x0;
    if (render_buffer[0x1c] != 0) {
        current_data = *(int **)(*(longlong *)(render_buffer + 0x1e) + -8 + (longlong)render_buffer[0x1c] * 8);
    }
    
    buffer_size = *render_buffer;
    if (buffer_size != 0) {
        previous_data = (int *)(*(longlong *)(render_buffer + 2) + -0x30 + (longlong)buffer_size * 0x30);
        if ((previous_data != (int *)0x0) &&
           (((*previous_data == 0 || (*(int **)(previous_data + 6) == current_data)) && (*(longlong *)(previous_data + 8) == 0)
            ))) {
            
            previous_ptr = previous_data + -0xc;
            if (buffer_size < 2) {
                previous_ptr = (int *)0x0;
            }
            
            if (((*previous_data == 0) && (previous_ptr != (int *)0x0)) && (*(int **)(previous_ptr + 6) == current_data)) {
                if (render_buffer[0x18] == 0) {
                    buffer_data = (longlong *)(*(longlong *)(render_buffer + 0xe) + 0x18);
                } else {
                    buffer_data = (longlong *)
                              ((longlong)(render_buffer[0x18] + -1) * 0x10 + *(longlong *)(render_buffer + 0x1a));
                }
                
                if (((*(longlong *)(previous_ptr + 1) == *buffer_data) && (*(longlong *)(previous_ptr + 3) == buffer_data[1]))
                   && (*(longlong *)(previous_ptr + 8) == 0)) {
                    *render_buffer = buffer_size + -1;
                    return;
                }
            }
            
            *(int **)(previous_data + 6) = current_data;
            return;
        }
    }
    
    // 获取纹理数据
    if (render_buffer[0x18] == 0) {
        texture_data = (uint *)(*(longlong *)(render_buffer + 0xe) + 0x18);
    } else {
        texture_data = (uint *)((longlong)(render_buffer[0x18] + -1) * 0x10 + *(longlong *)(render_buffer + 0x1a));
    }
    
    texture_id = *texture_data;
    data_offset = *(longlong *)(texture_data + 1);
    shader_id = texture_data[3];
    
    // 获取资源数据
    if (render_buffer[0x1c] == 0) {
        stack_offset = 0;
    } else {
        stack_offset = *(uint64_t *)(*(longlong *)(render_buffer + 0x1e) + -8 + (longlong)render_buffer[0x1c] * 8);
    }
    
    buffer_size = *render_buffer;
    buffer_capacity = render_buffer[1];
    
    // 检查并扩展缓冲区
    if (buffer_size == buffer_capacity) {
        if (buffer_capacity == 0) {
            buffer_capacity = 8;
        } else {
            buffer_capacity = buffer_capacity / 2 + buffer_capacity;
        }
        current_count = buffer_size + 1;
        if (buffer_size + 1 < buffer_capacity) {
            current_count = buffer_capacity;
        }
        expand_render_buffer(render_buffer, current_count);
        buffer_size = *render_buffer;
    }
    
    new_offset = (longlong)buffer_size;
    resource_handle = *(longlong *)(render_buffer + 2);
    buffer_data = (longlong *)(resource_handle + new_offset * 0x30);
    
    // 存储纹理数据
    *buffer_data = (uint64_t)texture_id << 0x20;
    buffer_data[1] = data_offset;
    
    // 存储着色器数据
    resource_ptr = (uint64_t *)(resource_handle + 0x10 + new_offset * 0x30);
    *resource_ptr = shader_id;
    resource_ptr[1] = stack_offset;
    
    // 清空扩展数据区域
    resource_ptr = (uint64_t *)(resource_handle + 0x20 + new_offset * 0x30);
    *resource_ptr = 0;
    resource_ptr[1] = 0;
    
    // 更新缓冲区计数
    *render_buffer = *render_buffer + 1;
    
    return;
}

// 函数别名 - 保持与原始函数名的兼容性
void FUN_180290fd0(longlong param_1) __attribute__((alias("initialize_rendering_parameters")));
void FUN_180291500(uint32_t *param_1) __attribute__((alias("reset_render_object_state")));
void FUN_180291610(uint64_t *param_1) __attribute__((alias("release_render_resource_array")));
void FUN_18029161b(longlong param_1) __attribute__((alias("release_render_resource_array_simplified")));
void FUN_180291772(void) __attribute__((alias("batch_cleanup_render_resources")));
void FUN_180291839(void) __attribute__((alias("cleanup_render_resource_array")));
void FUN_18029184a(uint64_t param_1) __attribute__((alias("release_render_resource_handle")));
void FUN_180291880(int *param_1) __attribute__((alias("add_render_data_to_buffer")));
void FUN_180291950(int *param_1) __attribute__((alias("update_render_data_buffer")));
void FUN_180291a50(int *param_1) __attribute__((alias("optimize_render_data_buffer")));