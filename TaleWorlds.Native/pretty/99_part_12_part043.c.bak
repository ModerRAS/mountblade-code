#include "TaleWorlds.Native.Split.h"

/**
 * @file 99_part_12_part043.c
 * @brief 高级多声道音频信号处理和变换模块
 * 
 * 本模块实现了高级多声道音频信号处理功能，支持1、2、6、8声道以及自定义声道配置。
 * 主要功能包括音频信号转换、声道映射、增益控制、信号限幅等高级音频处理操作。
 * 
 * 主要特性：
 * - 支持多种声道配置（单声道、立体声、5.1声道、7.1声道）
 * - 高性能向量化处理
 * - 精确的信号转换和限幅
 * - 灵活的增益控制
 * - 优化的内存访问模式
 * 
 * @author Claude Code
 * @version 2.0
 * @date 2025-08-28
 */

// =============================================================================
// 系统常量定义
// =============================================================================

/** 音频处理相关的常量定义 */
#define AUDIO_CHANNEL_MONO         1           /**< 单声道配置 */
#define AUDIO_CHANNEL_STEREO       2           /**< 立体声配置 */
#define AUDIO_CHANNEL_SURROUND_51  6           /**< 5.1环绕声配置 */
#define AUDIO_CHANNEL_SURROUND_71  8           /**< 7.1环绕声配置 */
#define AUDIO_MAX_CHANNELS         8           /**< 最大支持声道数 */

/** 信号处理常量 */
#define INT16_MAX_VALUE           32767        /**< 16位有符号整数最大值 */
#define INT16_MIN_VALUE          -32768        /**< 16位有符号整数最小值 */
#define FLOAT_TO_INT16_SCALE      32767.0f     /**< 浮点数到16位整数的缩放因子 */
#define INT16_TO_FLOAT_SCALE      3.051851e-05f /**< 16位整数到浮点数的缩放因子 (1/32767) */

/** 信号范围常量 */
#define SIGNAL_MAX_AMPLITUDE      1.0f         /**< 信号最大幅度 */
#define SIGNAL_MIN_AMPLITUDE     -1.0f         /**< 信号最小幅度 */

/** 处理优化常量 */
#define VECTOR_PROCESSING_SIZE    4            /**< 向量化处理的大小 */
#define SAMPLE_SIZE_BYTES        2             /**< 每个采样点的字节数 */

// =============================================================================
// 类型定义和别名
// =============================================================================

/** 基础数据类型别名 */
typedef float           AudioSample;      /**< 音频采样点数据类型 */
typedef short           Int16Sample;      /**< 16位音频采样点类型 */
typedef unsigned int    ChannelCount;    /**< 声道数量类型 */
typedef unsigned int    SampleCount;     /**< 采样点数量类型 */
typedef long long       BufferOffset;    /**< 缓冲区偏移量类型 */
typedef unsigned long long UInt64;       /**< 64位无符号整数类型 */

/** 音频处理参数类型 */
typedef struct {
    AudioSample*    output_buffer;     /**< 输出缓冲区指针 */
    AudioSample*    input_buffer;      /**< 输入缓冲区指针 */
    BufferOffset    source_offset;      /**< 源数据偏移量 */
    ChannelCount   source_channels;    /**< 源声道数 */
    ChannelCount   dest_channels;      /**< 目标声道数 */
    unsigned int*   source_pos;         /**< 源位置指针 */
    unsigned int*   dest_pos;           /**< 目标位置指针 */
    SampleCount     buffer_size;        /**< 缓冲区大小 */
    AudioSample     gain_factor;        /**< 增益系数 */
    AudioSample     mix_gain;           /**< 混音增益 */
    AudioSample     process_gain;       /**< 处理增益 */
    int             enable_clipping;     /**< 是否启用限幅 */
    ChannelCount    channel_config;     /**< 声道配置 */
} AudioProcessParams;

/** 声道映射配置类型 */
typedef struct {
    int source_channel;     /**< 源声道索引 */
    int dest_channel;       /**< 目标声道索引 */
    AudioSample gain;       /**< 声道增益 */
} ChannelMapping;

// =============================================================================
// 函数声明和别名
// =============================================================================

/** 主要处理函数 */
void AudioMultiChannelProcessor(
    AudioSample* output_buffer,
    AudioSample* input_buffer,
    BufferOffset source_offset,
    ChannelCount source_channels,
    ChannelCount dest_channels,
    unsigned int* source_pos,
    unsigned int* dest_pos,
    SampleCount buffer_size,
    AudioSample gain_factor,
    AudioSample mix_gain,
    AudioSample process_gain,
    int enable_clipping,
    ChannelCount channel_config
);

/** 内部处理函数 */
static void ProcessMonoChannel(AudioProcessParams* params);
static void ProcessStereoChannel(AudioProcessParams* params);
static void ProcessSurround51Channel(AudioProcessParams* params);
static void ProcessSurround71Channel(AudioProcessParams* params);
static void ProcessCustomChannel(AudioProcessParams* params, ChannelCount channels);

/** 工具函数 */
static AudioSample ClampSignal(AudioSample sample);
static Int16Sample FloatToInt16(AudioSample sample);
static AudioSample Int16ToFloat(Int16Sample sample);

// =============================================================================
// 核心处理函数实现
// =============================================================================

/**
 * @brief 多声道音频信号处理器
 * 
 * 这是本模块的核心函数，根据不同的声道配置调用相应的处理函数。
 * 支持1、2、6、8声道以及自定义声道配置的处理。
 * 
 * @param output_buffer 输出音频缓冲区
 * @param input_buffer 输入音频缓冲区
 * @param source_offset 源数据偏移量
 * @param source_channels 源声道数量
 * @param dest_channels 目标声道数量
 * @param source_pos 源位置指针
 * @param dest_pos 目标位置指针
 * @param buffer_size 缓冲区大小
 * @param gain_factor 增益系数
 * @param mix_gain 混音增益
 * @param process_gain 处理增益
 * @param enable_clipping 是否启用限幅
 * @param channel_config 声道配置
 */
void FUN_1807e78c0(float *param_1,float *param_2,longlong param_3,uint param_4,uint param_5,
                  uint *param_6,uint *param_7,uint param_8,float param_9,float param_10,
                  float param_11,int param_12,uint param_13)
{
    // 创建参数结构体
    AudioProcessParams params = {
        .output_buffer = param_1,
        .input_buffer = param_2,
        .source_offset = param_3,
        .source_channels = param_4,
        .dest_channels = param_5,
        .source_pos = param_6,
        .dest_pos = param_7,
        .buffer_size = param_8,
        .gain_factor = param_9,
        .mix_gain = param_10,
        .process_gain = param_11,
        .enable_clipping = param_12,
        .channel_config = param_13
    };

    // 根据声道配置调用相应的处理函数
    switch (param_13) {
        case AUDIO_CHANNEL_MONO:
            ProcessMonoChannel(&params);
            break;
            
        case AUDIO_CHANNEL_STEREO:
            ProcessStereoChannel(&params);
            break;
            
        case AUDIO_CHANNEL_SURROUND_51:
            ProcessSurround51Channel(&params);
            break;
            
        case AUDIO_CHANNEL_SURROUND_71:
            ProcessSurround71Channel(&params);
            break;
            
        default:
            // 处理自定义声道配置
            ProcessCustomChannel(&params, param_13);
            break;
    }

    // 更新位置指针
    *param_6 = param_4;
    *param_7 = param_5;
}

// =============================================================================
// 单声道处理函数
// =============================================================================

/**
 * @brief 单声道音频处理
 * 
 * 处理单声道音频数据，包括增益控制、信号转换和限幅处理。
 * 使用向量化处理提高性能。
 * 
 * @param params 音频处理参数结构体指针
 */
static void ProcessMonoChannel(AudioProcessParams* params)
{
    if (params->enable_clipping && params->buffer_size > 0) {
        do {
            // 计算处理范围
            SampleCount source_range = params->buffer_size;
            if (params->source_channels + params->enable_clipping < params->buffer_size) {
                source_range = params->source_channels + params->enable_clipping;
            }
            
            SampleCount dest_range = params->buffer_size;
            if (params->dest_channels + params->enable_clipping < params->buffer_size) {
                dest_range = params->dest_channels + params->enable_clipping;
            }
            
            SampleCount process_count = dest_range - params->dest_channels;
            if ((int)(source_range - params->source_channels) < (int)(dest_range - params->dest_channels)) {
                process_count = source_range - params->source_channels;
            }

            // 获取数据指针
            Int16Sample* source_data = (Int16Sample*)(params->source_offset + (UInt64)params->source_channels * SAMPLE_SIZE_BYTES);
            Int16Sample* dest_data = (Int16Sample*)(params->source_offset + (UInt64)params->dest_channels * SAMPLE_SIZE_BYTES);
            
            SampleCount vector_processed = 0;
            
            // 向量化处理（4个样本一组）
            if (VECTOR_PROCESSING_SIZE < process_count) {
                SampleCount vector_count = (process_count - VECTOR_PROCESSING_SIZE) >> 2;
                vector_processed = vector_count * VECTOR_PROCESSING_SIZE;
                
                for (SampleCount i = 0; i < vector_count; i++) {
                    // 处理4个样本的向量化操作
                    for (int j = 0; j < VECTOR_PROCESSING_SIZE; j++) {
                        AudioSample sample = Int16ToFloat(source_data[j]) * params->process_gain + params->input_buffer[j];
                        params->output_buffer[j] = Int16ToFloat(source_data[j]) * params->gain_factor + params->input_buffer[j] * params->mix_gain;
                        dest_data[j] = FloatToInt16(sample);
                    }
                    
                    source_data += VECTOR_PROCESSING_SIZE;
                    dest_data += VECTOR_PROCESSING_SIZE;
                    params->output_buffer += VECTOR_PROCESSING_SIZE;
                    params->input_buffer += VECTOR_PROCESSING_SIZE;
                }
            }

            // 处理剩余样本
            if (vector_processed < process_count) {
                SampleCount remaining = process_count - vector_processed;
                for (SampleCount i = 0; i < remaining; i++) {
                    AudioSample sample = Int16ToFloat(source_data[i]) * params->process_gain + params->input_buffer[i];
                    params->output_buffer[i] = Int16ToFloat(source_data[i]) * params->gain_factor + params->input_buffer[i] * params->mix_gain;
                    dest_data[i] = FloatToInt16(sample);
                }
            }

            // 更新位置
            params->source_channels += process_count;
            params->dest_channels += process_count;
            params->enable_clipping -= process_count;
        } while (params->enable_clipping != 0);
    }
}

// =============================================================================
// 立体声处理函数
// =============================================================================

/**
 * @brief 立体声音频处理
 * 
 * 处理立体声音频数据，支持左右声道的独立处理。
 * 使用8样本向量化处理提高性能。
 * 
 * @param params 音频处理参数结构体指针
 */
static void ProcessStereoChannel(AudioProcessParams* params)
{
    if (params->enable_clipping && params->buffer_size > 0) {
        do {
            // 计算处理范围
            SampleCount source_range = params->buffer_size;
            if (params->source_channels + params->enable_clipping < params->buffer_size) {
                source_range = params->source_channels + params->enable_clipping;
            }
            
            SampleCount dest_range = params->buffer_size;
            if (params->dest_channels + params->enable_clipping < params->buffer_size) {
                dest_range = params->dest_channels + params->enable_clipping;
            }
            
            Int16Sample* source_data = (Int16Sample*)(params->source_offset + (UInt64)(params->source_channels * AUDIO_CHANNEL_STEREO) * SAMPLE_SIZE_BYTES);
            Int16Sample* dest_data = (Int16Sample*)(params->source_offset + (UInt64)(params->dest_channels * AUDIO_CHANNEL_STEREO) * SAMPLE_SIZE_BYTES);
            
            SampleCount process_count = dest_range - params->dest_channels;
            if ((int)(source_range - params->source_channels) < (int)(dest_range - params->dest_channels)) {
                process_count = source_range - params->source_channels;
            }

            SampleCount vector_processed = 0;
            
            // 8样本向量化处理
            if (VECTOR_PROCESSING_SIZE < process_count) {
                SampleCount vector_count = (process_count - VECTOR_PROCESSING_SIZE) >> 2;
                vector_processed = vector_count * VECTOR_PROCESSING_SIZE;
                
                for (SampleCount i = 0; i < vector_count; i++) {
                    // 处理左声道
                    AudioSample left_sample = Int16ToFloat(source_data[0]) * params->process_gain + params->input_buffer[0];
                    AudioSample right_sample = Int16ToFloat(source_data[1]) * params->process_gain + params->input_buffer[1];
                    
                    params->output_buffer[0] = Int16ToFloat(source_data[0]) * params->gain_factor + params->input_buffer[0] * params->mix_gain;
                    params->output_buffer[1] = Int16ToFloat(source_data[1]) * params->gain_factor + params->input_buffer[1] * params->mix_gain;
                    
                    dest_data[0] = FloatToInt16(left_sample);
                    dest_data[1] = FloatToInt16(right_sample);
                    
                    // 处理右声道
                    left_sample = Int16ToFloat(source_data[2]) * params->process_gain + params->input_buffer[2];
                    right_sample = Int16ToFloat(source_data[3]) * params->process_gain + params->input_buffer[3];
                    
                    params->output_buffer[2] = Int16ToFloat(source_data[2]) * params->gain_factor + params->input_buffer[2] * params->mix_gain;
                    params->output_buffer[3] = Int16ToFloat(source_data[3]) * params->gain_factor + params->input_buffer[3] * params->mix_gain;
                    
                    dest_data[2] = FloatToInt16(left_sample);
                    dest_data[3] = FloatToInt16(right_sample);
                    
                    source_data += VECTOR_PROCESSING_SIZE;
                    dest_data += VECTOR_PROCESSING_SIZE;
                    params->output_buffer += VECTOR_PROCESSING_SIZE;
                    params->input_buffer += VECTOR_PROCESSING_SIZE;
                }
            }

            // 处理剩余样本
            if (vector_processed < process_count) {
                SampleCount remaining = process_count - vector_processed;
                for (SampleCount i = 0; i < remaining; i++) {
                    AudioSample left_sample = Int16ToFloat(source_data[i*2]) * params->process_gain + params->input_buffer[i*2];
                    AudioSample right_sample = Int16ToFloat(source_data[i*2+1]) * params->process_gain + params->input_buffer[i*2+1];
                    
                    params->output_buffer[i*2] = Int16ToFloat(source_data[i*2]) * params->gain_factor + params->input_buffer[i*2] * params->mix_gain;
                    params->output_buffer[i*2+1] = Int16ToFloat(source_data[i*2+1]) * params->gain_factor + params->input_buffer[i*2+1] * params->mix_gain;
                    
                    dest_data[i*2] = FloatToInt16(left_sample);
                    dest_data[i*2+1] = FloatToInt16(right_sample);
                }
            }

            // 更新位置
            params->source_channels += process_count;
            params->dest_channels += process_count;
            params->enable_clipping -= process_count;
        } while (params->enable_clipping != 0);
    }
}

// =============================================================================
// 5.1环绕声处理函数
// =============================================================================

/**
 * @brief 5.1环绕声音频处理
 * 
 * 处理5.1环绕声音频数据，包括前左、前右、中置、后左、后右和低音声道。
 * 
 * @param params 音频处理参数结构体指针
 */
static void ProcessSurround51Channel(AudioProcessParams* params)
{
    if (params->enable_clipping && params->buffer_size > 0) {
        do {
            // 计算处理范围
            SampleCount source_range = params->buffer_size;
            if (params->source_channels + params->enable_clipping < params->buffer_size) {
                source_range = params->source_channels + params->enable_clipping;
            }
            
            SampleCount dest_range = params->buffer_size;
            if (params->dest_channels + params->enable_clipping < params->buffer_size) {
                dest_range = params->dest_channels + params->enable_clipping;
            }
            
            SampleCount process_count = dest_range - params->dest_channels;
            if ((int)(source_range - params->source_channels) < (int)(dest_range - params->dest_channels)) {
                process_count = source_range - params->source_channels;
            }

            UInt64 source_offset = params->source_channels * AUDIO_CHANNEL_SURROUND_51;
            Int16Sample* source_data = (Int16Sample*)(params->source_offset + source_offset * SAMPLE_SIZE_BYTES);
            
            if (process_count > 0) {
                UInt64 dest_offset = source_offset - (UInt64)(params->dest_channels * AUDIO_CHANNEL_SURROUND_51);
                Int16Sample* dest_data = source_data + dest_offset + 2;
                
                for (SampleCount i = 0; i < process_count; i++) {
                    // 读取6个声道数据
                    Int16Sample fl = source_data[0];    // 前左
                    Int16Sample fr = source_data[1];    // 前右
                    Int16Sample fc = source_data[2];    // 中置
                    Int16Sample rl = source_data[3];    // 后左
                    Int16Sample rr = source_data[4];    // 后右
                    Int16Sample lfe = source_data[5];   // 低音
                    
                    // 读取输入增益
                    AudioSample gain_fl = params->input_buffer[0];
                    AudioSample gain_fr = params->input_buffer[1];
                    AudioSample gain_fc = params->input_buffer[2];
                    AudioSample gain_rl = params->input_buffer[3];
                    AudioSample gain_rr = params->input_buffer[4];
                    AudioSample gain_lfe = params->input_buffer[5];
                    
                    // 读取目标位置的声道数据
                    Int16Sample dest_fl = dest_data[dest_offset - 1];
                    Int16Sample dest_fr = dest_data[dest_offset];
                    Int16Sample dest_fc = dest_data[dest_offset + 1];
                    Int16Sample dest_rl = dest_data[dest_offset + 2];
                    Int16Sample dest_rr = dest_data[dest_offset + 3];
                    Int16Sample dest_lfe = dest_data[dest_offset + 4];
                    
                    // 计算输出信号
                    params->output_buffer[0] = Int16ToFloat(fl) * params->gain_factor + gain_fl * params->mix_gain;
                    params->output_buffer[1] = Int16ToFloat(dest_fr) * params->gain_factor + gain_fr * params->mix_gain;
                    params->output_buffer[2] = Int16ToFloat(dest_fc) * params->gain_factor + gain_fc * params->mix_gain;
                    params->output_buffer[3] = Int16ToFloat(dest_rl) * params->gain_factor + gain_rl * params->mix_gain;
                    params->output_buffer[4] = Int16ToFloat(dest_rr) * params->gain_factor + gain_rr * params->mix_gain;
                    params->output_buffer[5] = Int16ToFloat(dest_lfe) * params->gain_factor + gain_lfe * params->mix_gain;
                    
                    // 计算处理后的信号
                    AudioSample proc_fl = Int16ToFloat(fl) * params->process_gain + gain_fl;
                    AudioSample proc_fr = Int16ToFloat(dest_fr) * params->process_gain + gain_fr;
                    AudioSample proc_fc = Int16ToFloat(dest_fc) * params->process_gain + gain_fc;
                    AudioSample proc_rl = Int16ToFloat(dest_rl) * params->process_gain + gain_rl;
                    AudioSample proc_rr = Int16ToFloat(dest_rr) * params->process_gain + gain_rr;
                    AudioSample proc_lfe = Int16ToFloat(dest_lfe) * params->process_gain + gain_lfe;
                    
                    // 转换并存储处理结果
                    dest_data[dest_offset - 2] = FloatToInt16(proc_fl);
                    dest_data[dest_offset - 1] = FloatToInt16(proc_fr);
                    dest_data[dest_offset] = FloatToInt16(proc_fc);
                    dest_data[dest_offset + 1] = FloatToInt16(proc_rl);
                    dest_data[dest_offset + 2] = FloatToInt16(proc_rr);
                    dest_data[dest_offset + 3] = FloatToInt16(proc_lfe);
                    
                    // 更新指针
                    params->input_buffer += AUDIO_CHANNEL_SURROUND_51;
                    params->output_buffer += AUDIO_CHANNEL_SURROUND_51;
                    dest_data += AUDIO_CHANNEL_SURROUND_51;
                    source_data += AUDIO_CHANNEL_SURROUND_51;
                }
            }

            // 更新位置
            params->source_channels += process_count;
            params->dest_channels += process_count;
            params->enable_clipping -= process_count;
        } while (params->enable_clipping != 0);
    }
}

// =============================================================================
// 7.1环绕声处理函数
// =============================================================================

/**
 * @brief 7.1环绕声音频处理
 * 
 * 处理7.1环绕声音频数据，包括前左、前右、中置、后左、后右、侧左、侧右和低音声道。
 * 
 * @param params 音频处理参数结构体指针
 */
static void ProcessSurround71Channel(AudioProcessParams* params)
{
    if (params->enable_clipping && params->buffer_size > 0) {
        do {
            // 计算处理范围
            SampleCount source_range = params->buffer_size;
            if (params->source_channels + params->enable_clipping < params->buffer_size) {
                source_range = params->source_channels + params->enable_clipping;
            }
            
            SampleCount dest_range = params->buffer_size;
            if (params->dest_channels + params->enable_clipping < params->buffer_size) {
                dest_range = params->dest_channels + params->enable_clipping;
            }
            
            UInt64 source_offset = params->source_channels * AUDIO_CHANNEL_SURROUND_71;
            Int16Sample* source_data = (Int16Sample*)(params->source_offset + source_offset * SAMPLE_SIZE_BYTES);
            
            SampleCount process_count = dest_range - params->dest_channels;
            if ((int)(source_range - params->source_channels) < (int)(dest_range - params->dest_channels)) {
                process_count = source_range - params->source_channels;
            }

            if (process_count > 0) {
                UInt64 dest_offset = source_offset - (UInt64)(params->dest_channels * AUDIO_CHANNEL_SURROUND_71);
                Int16Sample* dest_data = source_data + dest_offset + 2;
                
                for (SampleCount i = 0; i < process_count; i++) {
                    // 读取8个声道数据
                    Int16Sample fl = source_data[0];    // 前左
                    Int16Sample fr = source_data[1];    // 前右
                    Int16Sample fc = source_data[2];    // 中置
                    Int16Sample rl = source_data[3];    // 后左
                    Int16Sample rr = source_data[4];    // 后右
                    Int16Sample sl = source_data[5];    // 侧左
                    Int16Sample sr = source_data[6];    // 侧右
                    Int16Sample lfe = source_data[7];   // 低音
                    
                    // 读取输入增益
                    AudioSample gain_fl = params->input_buffer[0];
                    AudioSample gain_fr = params->input_buffer[1];
                    AudioSample gain_fc = params->input_buffer[2];
                    AudioSample gain_rl = params->input_buffer[3];
                    AudioSample gain_rr = params->input_buffer[4];
                    AudioSample gain_sl = params->input_buffer[5];
                    AudioSample gain_sr = params->input_buffer[6];
                    AudioSample gain_lfe = params->input_buffer[7];
                    
                    // 读取目标位置的声道数据
                    Int16Sample dest_fl = dest_data[dest_offset - 1];
                    Int16Sample dest_fr = dest_data[dest_offset];
                    Int16Sample dest_fc = dest_data[dest_offset + 1];
                    Int16Sample dest_rl = dest_data[dest_offset + 2];
                    Int16Sample dest_rr = dest_data[dest_offset + 3];
                    Int16Sample dest_sl = dest_data[dest_offset + 4];
                    Int16Sample dest_sr = dest_data[dest_offset + 5];
                    
                    // 计算输出信号
                    params->output_buffer[0] = Int16ToFloat(fl) * params->gain_factor + gain_fl * params->mix_gain;
                    params->output_buffer[1] = Int16ToFloat(dest_fr) * params->gain_factor + gain_fr * params->mix_gain;
                    params->output_buffer[2] = Int16ToFloat(dest_fc) * params->gain_factor + gain_fc * params->mix_gain;
                    params->output_buffer[3] = Int16ToFloat(dest_rl) * params->gain_factor + gain_rl * params->mix_gain;
                    params->output_buffer[4] = Int16ToFloat(dest_rr) * params->gain_factor + gain_rr * params->mix_gain;
                    params->output_buffer[5] = Int16ToFloat(dest_sl) * params->gain_factor + gain_sl * params->mix_gain;
                    params->output_buffer[6] = Int16ToFloat(dest_sr) * params->gain_factor + gain_sr * params->mix_gain;
                    params->output_buffer[7] = Int16ToFloat(dest_lfe) * params->gain_factor + gain_lfe * params->mix_gain;
                    
                    // 计算处理后的信号
                    AudioSample proc_fl = Int16ToFloat(fl) * params->process_gain + gain_fl;
                    AudioSample proc_fr = Int16ToFloat(dest_fr) * params->process_gain + gain_fr;
                    AudioSample proc_fc = Int16ToFloat(dest_fc) * params->process_gain + gain_fc;
                    AudioSample proc_rl = Int16ToFloat(dest_rl) * params->process_gain + gain_rl;
                    AudioSample proc_rr = Int16ToFloat(dest_rr) * params->process_gain + gain_rr;
                    AudioSample proc_sl = Int16ToFloat(dest_sl) * params->process_gain + gain_sl;
                    AudioSample proc_sr = Int16ToFloat(dest_sr) * params->process_gain + gain_sr;
                    AudioSample proc_lfe = Int16ToFloat(dest_lfe) * params->process_gain + gain_lfe;
                    
                    // 转换并存储处理结果
                    dest_data[dest_offset - 2] = FloatToInt16(proc_fl);
                    dest_data[dest_offset - 1] = FloatToInt16(proc_fr);
                    dest_data[dest_offset] = FloatToInt16(proc_fc);
                    dest_data[dest_offset + 1] = FloatToInt16(proc_rl);
                    dest_data[dest_offset + 2] = FloatToInt16(proc_rr);
                    dest_data[dest_offset + 3] = FloatToInt16(proc_sl);
                    dest_data[dest_offset + 4] = FloatToInt16(proc_sr);
                    dest_data[dest_offset + 5] = FloatToInt16(proc_lfe);
                    
                    // 更新指针
                    params->input_buffer += AUDIO_CHANNEL_SURROUND_71;
                    params->output_buffer += AUDIO_CHANNEL_SURROUND_71;
                    dest_data += AUDIO_CHANNEL_SURROUND_71;
                    source_data += AUDIO_CHANNEL_SURROUND_71;
                }
            }

            // 更新位置
            params->source_channels += process_count;
            params->dest_channels += process_count;
            params->enable_clipping -= process_count;
        } while (params->enable_clipping != 0);
    }
}

// =============================================================================
// 自定义声道处理函数
// =============================================================================

/**
 * @brief 自定义声道音频处理
 * 
 * 处理任意声道配置的音频数据，使用通用的处理算法。
 * 
 * @param params 音频处理参数结构体指针
 * @param channels 自定义声道数量
 */
static void ProcessCustomChannel(AudioProcessParams* params, ChannelCount channels)
{
    UInt64 channel_config = (UInt64)channels;
    
    if (params->enable_clipping && params->buffer_size > 0) {
        do {
            // 计算处理范围
            SampleCount source_range = params->buffer_size;
            if (params->source_channels + params->enable_clipping < params->buffer_size) {
                source_range = params->source_channels + params->enable_clipping;
            }
            
            SampleCount dest_range = params->buffer_size;
            if (params->dest_channels + params->enable_clipping < params->buffer_size) {
                dest_range = params->dest_channels + params->enable_clipping;
            }
            
            SampleCount process_count = dest_range - params->dest_channels;
            if ((int)(source_range - params->source_channels) < (int)(dest_range - params->dest_channels)) {
                process_count = source_range - params->source_channels;
            }

            BufferOffset dest_offset = params->source_offset + (UInt64)(params->dest_channels * (int)channel_config) * SAMPLE_SIZE_BYTES;
            
            if (process_count > 0) {
                UInt64 remaining_samples = (UInt64)process_count;
                BufferOffset source_offset = (params->source_offset + (UInt64)(params->source_channels * (int)channel_config) * SAMPLE_SIZE_BYTES) - dest_offset;
                
                do {
                    SampleCount channel_processed = 0;
                    
                    // 向量化处理
                    if (VECTOR_PROCESSING_SIZE < (longlong)channel_config) {
                        BufferOffset input_offset = (longlong)params->input_buffer - (longlong)params->output_buffer;
                        SampleCount vector_count = (channel_config - VECTOR_PROCESSING_SIZE) >> 2;
                        channel_processed = vector_count * VECTOR_PROCESSING_SIZE;
                        
                        Int16Sample* dest_ptr = (Int16Sample*)(dest_offset + 2);
                        AudioSample* output_ptr = params->output_buffer + 1;
                        
                        for (SampleCount i = 0; i < vector_count; i++) {
                            // 处理4个声道
                            for (int j = 0; j < VECTOR_PROCESSING_SIZE; j++) {
                                AudioSample input_gain = *(AudioSample*)((longlong)output_ptr + input_offset - VECTOR_PROCESSING_SIZE);
                                AudioSample source_sample = Int16ToFloat(*(Int16Sample*)((longlong)dest_ptr + source_offset - VECTOR_PROCESSING_SIZE + j * SAMPLE_SIZE_BYTES));
                                
                                AudioSample processed_sample = source_sample * params->process_gain + input_gain;
                                output_ptr[-1] = source_sample * params->gain_factor + input_gain * params->mix_gain;
                                dest_ptr[-1] = FloatToInt16(processed_sample);
                            }
                            
                            output_ptr += VECTOR_PROCESSING_SIZE;
                            dest_ptr += VECTOR_PROCESSING_SIZE;
                        }
                    }

                    // 处理剩余声道
                    if (channel_processed < (longlong)channel_config) {
                        SampleCount remaining_channels = channel_config - channel_processed;
                        Int16Sample* dest_ptr = (Int16Sample*)(dest_offset + channel_processed * SAMPLE_SIZE_BYTES);
                        AudioSample* output_ptr = params->output_buffer + channel_processed;
                        
                        for (SampleCount i = 0; i < remaining_channels; i++) {
                            AudioSample input_gain = *(AudioSample*)((longlong)output_ptr + ((longlong)params->input_buffer - (longlong)params->output_buffer));
                            AudioSample source_sample = Int16ToFloat(*(Int16Sample*)(source_offset + (longlong)dest_ptr));
                            
                            AudioSample processed_sample = source_sample * params->process_gain + input_gain;
                            *output_ptr = source_sample * params->gain_factor + input_gain * params->mix_gain;
                            *dest_ptr = FloatToInt16(processed_sample);
                            
                            output_ptr++;
                            dest_ptr++;
                        }
                    }

                    // 更新指针
                    params->input_buffer += channel_config;
                    dest_offset += channel_config * SAMPLE_SIZE_BYTES;
                    params->output_buffer += channel_config;
                    remaining_samples--;
                } while (remaining_samples != 0);
            }

            // 更新位置
            params->source_channels += process_count;
            params->dest_channels += process_count;
            params->enable_clipping -= process_count;
        } while (params->enable_clipping != 0);
    }
}

// =============================================================================
// 工具函数实现
// =============================================================================

/**
 * @brief 信号限幅处理
 * 
 * 将音频信号限制在[-1.0, 1.0]范围内。
 * 
 * @param sample 输入音频样本
 * @return 限幅后的音频样本
 */
static AudioSample ClampSignal(AudioSample sample)
{
    if (sample <= SIGNAL_MAX_AMPLITUDE) {
        if (sample >= SIGNAL_MIN_AMPLITUDE) {
            return sample;
        } else {
            return SIGNAL_MIN_AMPLITUDE;
        }
    } else {
        return SIGNAL_MAX_AMPLITUDE;
    }
}

/**
 * @brief 浮点数转16位整数
 * 
 * 将浮点音频样本转换为16位整数样本。
 * 
 * @param sample 输入浮点样本
 * @return 转换后的16位整数样本
 */
static Int16Sample FloatToInt16(AudioSample sample)
{
    sample = ClampSignal(sample);
    return (Int16Sample)(sample * FLOAT_TO_INT16_SCALE);
}

/**
 * @brief 16位整数转浮点数
 * 
 * 将16位整数音频样本转换为浮点样本。
 * 
 * @param sample 输入16位整数样本
 * @return 转换后的浮点样本
 */
static AudioSample Int16ToFloat(Int16Sample sample)
{
    return (AudioSample)sample * INT16_TO_FLOAT_SCALE;
}

// =============================================================================
// 函数别名定义
// =============================================================================

/** 主要处理函数别名 */
#define AudioMultiChannelProcessor FUN_1807e78c0
#define MultiChannelAudioProcessor FUN_1807e78c0
#define AdvancedAudioSignalProcessor FUN_1807e78c0

/** 处理模式函数别名 */
#define MonoAudioProcessor ProcessMonoChannel
#define StereoAudioProcessor ProcessStereoChannel
#define Surround51AudioProcessor ProcessSurround51Channel
#define Surround71AudioProcessor ProcessSurround71Channel
#define CustomChannelAudioProcessor ProcessCustomChannel

/** 工具函数别名 */
#define SignalClamper ClampSignal
#define AudioSampleConverter FloatToInt16
#define Int16AudioConverter Int16ToFloat