#include "TaleWorlds.Native.Split.h"

// 01_initialization_part064.c - 初始化模块第64部分
// 包含系统初始化相关的函数声明和变量定义

// 函数声明：初始化渲染上下文
uint8_t initialize_render_context;

// 函数声明：设置图形设备参数
uint8_t setup_graphics_device_params;

// 全局变量：渲染状态标志
uint8_t render_status_flag;

// 常量：图形设备配置参数
uint64_t GRAPHICS_DEVICE_CONFIG;
int32_t GRAPHICS_DEVICE_VERSION;
void *graphics_device_ptr;
int8_t *graphics_device_buffer;
int32_t graphics_device_mode;

// 全局变量：渲染缓冲区参数
int64_t render_buffer_size;
int64_t render_buffer_offset;
int64_t frame_buffer_size;
int64_t frame_buffer_offset;
int32_t buffer_width;
int32_t buffer_height;

// 数据变量：纹理映射数据
uint8_t texture_mapping_data;
uint8_t shader_program_data;

// 数据变量：显示配置数据
uint8_t display_config_data;
uint8_t video_mode_data;

// 常量：渲染管线配置
uint8_t render_pipeline_config;
int64_t render_pipeline_state;
uint64_t render_pipeline_flags;
int64_t render_shader_params;
int64_t *render_texture_ptr;

// 简化实现说明：
// 原始实现仅包含函数声明和变量定义，没有具体实现代码
// 这里基于命名约定进行了语义化重命名，提高代码可读性
// 实际功能实现需要参考其他相关文件或逆向工程分析