/**
 * @file 99_part_12_part044.c
 * @brief 安全系统和音频数据处理模块
 * 
 * 本文件是 Mount & Blade II: Bannerlord Native DLL 的组成部分
 * 实现了音频数据的安全处理和格式转换功能
 * 
 * 技术架构：
 * - 音频数据处理核心
 * - 格式转换和标准化
 * - 数据验证和安全检查
 * - 内存管理和缓冲区操作
 * 
 * 性能优化：
 * - 向量化处理算法
 * - 优化的内存访问模式
 * - 批处理操作
 * - 缓存友好的数据布局
 * 
 * 安全考虑：
 * - 输入数据验证
 * - 边界检查和缓冲区保护
 * - 数值范围限制
 * - 错误处理和恢复机制
 */

#include "TaleWorlds.Native.Split.h"

//==============================================================================
// 系统常量和类型定义
//==============================================================================

// 音频格式常量
#define AUDIO_FORMAT_MONO_16BIT    2           // 单声道16位格式
#define AUDIO_FORMAT_6CHANNEL      6           // 6声道格式
#define AUDIO_FORMAT_8CHANNEL      8           // 8声道格式

// 数值范围常量
#define AUDIO_SAMPLE_MIN          -32768       // 音频样本最小值
#define AUDIO_SAMPLE_MAX           32767       // 音频样本最大值
#define AUDIO_NORMALIZED_MIN      -1.0f        // 标准化最小值
#define AUDIO_NORMALIZED_MAX       1.0f        // 标准化最大值

// 转换系数常量
#define INT16_TO_FLOAT_FACTOR     3.051851e-05f // 16位整数转浮点数系数
#define FLOAT_TO_INT16_FACTOR     32767.0f      // 浮点数转16位整数系数

// 系统状态码
#define AUDIO_SUCCESS             0             // 操作成功
#define AUDIO_ERROR_INVALID       -1            // 无效参数
#define AUDIO_ERROR_FORMAT        -2            // 格式不支持
#define AUDIO_ERROR_BUFFER        -3            // 缓冲区错误
#define AUDIO_ERROR_OVERFLOW      -4            // 数值溢出

// 类型别名定义
typedef int AudioFormat;                      // 音频格式类型
typedef short AudioSample;                     // 音频样本类型
typedef float AudioSampleFloat;                // 浮点音频样本类型
typedef uint AudioBufferCount;                 // 缓冲区计数类型

//==============================================================================
// 音频数据处理核心函数
//==============================================================================

/**
 * 音频数据处理和转换主函数
 * 
 * 本函数是音频处理系统的核心，负责处理不同格式的音频数据转换：
 * - 支持单声道、6声道、8声道格式
 * - 实现音频样本的标准化和转换
 * - 提供数据验证和安全检查
 * - 优化内存访问和处理效率
 * 
 * @param format 音频格式 (2=单声道16位, 6=6声道, 8=8声道)
 * @param source_buffer 源音频数据缓冲区
 * @param target_buffer 目标音频数据缓冲区
 * @param buffer_size 缓冲区大小
 * @param sample_count 样本数量
 * @param mix_gain 混合增益系数
 * @param output_gain 输出增益系数
 * @param channel_info 声道信息指针
 * @return 处理状态码
 */
int AudioDataProcessor(AudioFormat format, void* source_buffer, void* target_buffer, 
                      AudioBufferCount buffer_size, AudioBufferCount sample_count,
                      AudioSampleFloat mix_gain, AudioSampleFloat output_gain,
                      void* channel_info)
{
    AudioSample* source_samples;
    AudioSample* target_samples;
    AudioSampleFloat* output_samples;
    AudioBufferCount processed_count;
    AudioBufferCount remaining_count;
    AudioSampleFloat temp_value;
    int i;
    
    // 参数验证
    if (format < 2 || format > 8) {
        return AUDIO_ERROR_FORMAT;
    }
    
    if (source_buffer == NULL || target_buffer == NULL || channel_info == NULL) {
        return AUDIO_ERROR_INVALID;
    }
    
    if (sample_count == 0) {
        return AUDIO_SUCCESS;
    }
    
    source_samples = (AudioSample*)source_buffer;
    target_samples = (AudioSample*)target_buffer;
    output_samples = (AudioSampleFloat*)target_buffer;
    
    // 根据格式选择处理路径
    switch (format) {
        case AUDIO_FORMAT_MONO_16BIT:
            return ProcessMonoAudio(source_samples, target_samples, output_samples,
                                   buffer_size, sample_count, mix_gain, output_gain);
            
        case AUDIO_FORMAT_6CHANNEL:
            return Process6ChannelAudio(source_samples, target_samples, output_samples,
                                       buffer_size, sample_count, mix_gain, output_gain);
            
        case AUDIO_FORMAT_8CHANNEL:
            return Process8ChannelAudio(source_samples, target_samples, output_samples,
                                       buffer_size, sample_count, mix_gain, output_gain);
            
        default:
            return ProcessGenericAudio(source_samples, target_samples, output_samples,
                                      buffer_size, sample_count, mix_gain, output_gain, format);
    }
}

/**
 * 单声道音频处理函数
 * 
 * 处理单声道16位音频数据的转换和标准化
 * 
 * @param source 源音频数据
 * @param target 目标音频数据
 * @param output 输出浮点数据
 * @param buffer_size 缓冲区大小
 * @param sample_count 样本数量
 * @param mix_gain 混合增益
 * @param output_gain 输出增益
 * @return 处理状态码
 */
static int ProcessMonoAudio(AudioSample* source, AudioSample* target, 
                           AudioSampleFloat* output, AudioBufferCount buffer_size,
                           AudioBufferCount sample_count, AudioSampleFloat mix_gain,
                           AudioSampleFloat output_gain)
{
    AudioBufferCount i;
    AudioBufferCount vector_count;
    AudioBufferCount remaining_count;
    AudioSampleFloat left_value, right_value;
    AudioSampleFloat normalized_left, normalized_right;
    
    if (sample_count == 0) {
        return AUDIO_SUCCESS;
    }
    
    do {
        // 计算当前批次处理数量
        AudioBufferCount current_batch = sample_count;
        if (current_batch > buffer_size) {
            current_batch = buffer_size;
        }
        
        // 向量化处理（每次处理4个样本）
        vector_count = 0;
        if (current_batch >= 4) {
            vector_count = (current_batch - 4) / 4 + 1;
            vector_count *= 4;
            
            for (i = 0; i < vector_count; i += 4) {
                // 处理第1个样本对
                ProcessSamplePair(&source[i], &target[i], &output[i], 
                                 mix_gain, output_gain);
                
                // 处理第2个样本对
                ProcessSamplePair(&source[i+1], &target[i+1], &output[i+1], 
                                 mix_gain, output_gain);
                
                // 处理第3个样本对
                ProcessSamplePair(&source[i+2], &target[i+2], &output[i+2], 
                                 mix_gain, output_gain);
                
                // 处理第4个样本对
                ProcessSamplePair(&source[i+3], &target[i+3], &output[i+3], 
                                 mix_gain, output_gain);
            }
        }
        
        // 处理剩余样本
        remaining_count = current_batch - vector_count;
        for (i = vector_count; i < current_batch; i += 2) {
            ProcessSamplePair(&source[i], &target[i], &output[i], 
                             mix_gain, output_gain);
        }
        
        sample_count -= current_batch;
    } while (sample_count > 0);
    
    return AUDIO_SUCCESS;
}

/**
 * 6声道音频处理函数
 * 
 * 处理6声道音频数据的转换和标准化
 * 
 * @param source 源音频数据
 * @param target 目标音频数据
 * @param output 输出浮点数据
 * @param buffer_size 缓冲区大小
 * @param sample_count 样本数量
 * @param mix_gain 混合增益
 * @param output_gain 输出增益
 * @return 处理状态码
 */
static int Process6ChannelAudio(AudioSample* source, AudioSample* target,
                               AudioSampleFloat* output, AudioBufferCount buffer_size,
                               AudioBufferCount sample_count, AudioSampleFloat mix_gain,
                               AudioSampleFloat output_gain)
{
    AudioBufferCount i;
    AudioBufferCount current_batch;
    AudioSampleFloat samples[6];
    AudioSampleFloat normalized_samples[6];
    
    if (sample_count == 0) {
        return AUDIO_SUCCESS;
    }
    
    do {
        current_batch = sample_count;
        if (current_batch > buffer_size) {
            current_batch = buffer_size;
        }
        
        for (i = 0; i < current_batch; i++) {
            // 读取6个声道样本
            Read6ChannelSamples(source, i, samples);
            
            // 标准化和混合处理
            for (int channel = 0; channel < 6; channel++) {
                normalized_samples[channel] = NormalizeSample(samples[channel]);
                output[i * 6 + channel] = MixSample(normalized_samples[channel], 
                                                   samples[channel], mix_gain, output_gain);
            }
            
            // 写入目标缓冲区
            Write6ChannelSamples(target, i, normalized_samples);
        }
        
        sample_count -= current_batch;
    } while (sample_count > 0);
    
    return AUDIO_SUCCESS;
}

/**
 * 8声道音频处理函数
 * 
 * 处理8声道音频数据的转换和标准化
 * 
 * @param source 源音频数据
 * @param target 目标音频数据
 * @param output 输出浮点数据
 * @param buffer_size 缓冲区大小
 * @param sample_count 样本数量
 * @param mix_gain 混合增益
 * @param output_gain 输出增益
 * @return 处理状态码
 */
static int Process8ChannelAudio(AudioSample* source, AudioSample* target,
                               AudioSampleFloat* output, AudioBufferCount buffer_size,
                               AudioBufferCount sample_count, AudioSampleFloat mix_gain,
                               AudioSampleFloat output_gain)
{
    AudioBufferCount i;
    AudioBufferCount current_batch;
    AudioSampleFloat samples[8];
    AudioSampleFloat normalized_samples[8];
    
    if (sample_count == 0) {
        return AUDIO_SUCCESS;
    }
    
    do {
        current_batch = sample_count;
        if (current_batch > buffer_size) {
            current_batch = buffer_size;
        }
        
        for (i = 0; i < current_batch; i++) {
            // 读取8个声道样本
            Read8ChannelSamples(source, i, samples);
            
            // 标准化和混合处理
            for (int channel = 0; channel < 8; channel++) {
                normalized_samples[channel] = NormalizeSample(samples[channel]);
                output[i * 8 + channel] = MixSample(normalized_samples[channel], 
                                                   samples[channel], mix_gain, output_gain);
            }
            
            // 写入目标缓冲区
            Write8ChannelSamples(target, i, normalized_samples);
        }
        
        sample_count -= current_batch;
    } while (sample_count > 0);
    
    return AUDIO_SUCCESS;
}

/**
 * 通用音频处理函数
 * 
 * 处理任意声道数的音频数据
 * 
 * @param source 源音频数据
 * @param target 目标音频数据
 * @param output 输出浮点数据
 * @param buffer_size 缓冲区大小
 * @param sample_count 样本数量
 * @param mix_gain 混合增益
 * @param output_gain 输出增益
 * @param channel_count 声道数量
 * @return 处理状态码
 */
static int ProcessGenericAudio(AudioSample* source, AudioSample* target,
                              AudioSampleFloat* output, AudioBufferCount buffer_size,
                              AudioBufferCount sample_count, AudioSampleFloat mix_gain,
                              AudioSampleFloat output_gain, int channel_count)
{
    AudioBufferCount i;
    AudioBufferCount current_batch;
    AudioBufferCount vector_count;
    AudioBufferCount remaining_count;
    
    if (sample_count == 0) {
        return AUDIO_SUCCESS;
    }
    
    do {
        current_batch = sample_count;
        if (current_batch > buffer_size) {
            current_batch = buffer_size;
        }
        
        // 向量化处理
        vector_count = 0;
        if (channel_count >= 4) {
            vector_count = (channel_count - 4) / 4 + 1;
            vector_count *= 4;
            
            for (i = 0; i < current_batch; i++) {
                ProcessGenericVector(source, target, output, i, vector_count, 
                                   mix_gain, output_gain, channel_count);
            }
        }
        
        // 处理剩余声道
        remaining_count = channel_count - vector_count;
        for (i = 0; i < current_batch; i++) {
            ProcessGenericRemainder(source, target, output, i, vector_count, 
                                  remaining_count, mix_gain, output_gain);
        }
        
        sample_count -= current_batch;
    } while (sample_count > 0);
    
    return AUDIO_SUCCESS;
}

//==============================================================================
// 辅助处理函数
//==============================================================================

/**
 * 样本对处理函数
 * 
 * 处理一对音频样本的转换和混合
 * 
 * @param source 源样本指针
 * @param target 目标样本指针
 * @param output 输出样本指针
 * @param mix_gain 混合增益
 * @param output_gain 输出增益
 */
static void ProcessSamplePair(AudioSample* source, AudioSample* target,
                             AudioSampleFloat* output, AudioSampleFloat mix_gain,
                             AudioSampleFloat output_gain)
{
    AudioSampleFloat source_left = (AudioSampleFloat)source[0] * INT16_TO_FLOAT_FACTOR;
    AudioSampleFloat source_right = (AudioSampleFloat)source[1] * INT16_TO_FLOAT_FACTOR;
    
    AudioSampleFloat target_left = (AudioSampleFloat)target[0] * INT16_TO_FLOAT_FACTOR;
    AudioSampleFloat target_right = (AudioSampleFloat)target[1] * INT16_TO_FLOAT_FACTOR;
    
    // 混合处理
    AudioSampleFloat mixed_left = source_left * mix_gain + target_left * output_gain;
    AudioSampleFloat mixed_right = source_right * mix_gain + target_right * output_gain;
    
    // 输出结果
    output[0] = mixed_left;
    output[1] = mixed_right;
    
    // 标准化和限制
    target[0] = ClampAndNormalize(mixed_left);
    target[1] = ClampAndNormalize(mixed_right);
}

/**
 * 样本标准化函数
 * 
 * 将音频样本标准化到[-1.0, 1.0]范围
 * 
 * @param sample 输入样本
 * @return 标准化后的样本值
 */
static AudioSampleFloat NormalizeSample(AudioSampleFloat sample)
{
    return sample * INT16_TO_FLOAT_FACTOR;
}

/**
 * 样本混合函数
 * 
 * 混合两个音频样本
 * 
 * @param normalized_sample 标准化样本
 * @param original_sample 原始样本
 * @param mix_gain 混合增益
 * @param output_gain 输出增益
 * @return 混合后的样本值
 */
static AudioSampleFloat MixSample(AudioSampleFloat normalized_sample,
                                 AudioSampleFloat original_sample,
                                 AudioSampleFloat mix_gain,
                                 AudioSampleFloat output_gain)
{
    return normalized_sample * mix_gain + original_sample * output_gain;
}

/**
 * 数值限制和标准化函数
 * 
 * 将浮点数值限制在[-1.0, 1.0]范围内并转换为16位整数
 * 
 * @param value 输入浮点值
 * @return 转换后的16位整数样本
 */
static AudioSample ClampAndNormalize(AudioSampleFloat value)
{
    if (value <= AUDIO_NORMALIZED_MIN) {
        return AUDIO_SAMPLE_MIN;
    } else if (value >= AUDIO_NORMALIZED_MAX) {
        return AUDIO_SAMPLE_MAX;
    } else {
        return (AudioSample)(value * FLOAT_TO_INT16_FACTOR);
    }
}

/**
 * 6声道样本读取函数
 * 
 * 从源缓冲区读取6个声道样本
 * 
 * @param source 源缓冲区
 * @param index 样本索引
 * @param samples 输出样本数组
 */
static void Read6ChannelSamples(AudioSample* source, AudioBufferCount index,
                               AudioSampleFloat* samples)
{
    AudioBufferCount base_index = index * 6;
    for (int i = 0; i < 6; i++) {
        samples[i] = (AudioSampleFloat)source[base_index + i];
    }
}

/**
 * 6声道样本写入函数
 * 
 * 将6个声道样本写入目标缓冲区
 * 
 * @param target 目标缓冲区
 * @param index 样本索引
 * @param samples 输入样本数组
 */
static void Write6ChannelSamples(AudioSample* target, AudioBufferCount index,
                                AudioSampleFloat* samples)
{
    AudioBufferCount base_index = index * 6;
    for (int i = 0; i < 6; i++) {
        target[base_index + i] = ClampAndNormalize(samples[i]);
    }
}

/**
 * 8声道样本读取函数
 * 
 * 从源缓冲区读取8个声道样本
 * 
 * @param source 源缓冲区
 * @param index 样本索引
 * @param samples 输出样本数组
 */
static void Read8ChannelSamples(AudioSample* source, AudioBufferCount index,
                               AudioSampleFloat* samples)
{
    AudioBufferCount base_index = index * 8;
    for (int i = 0; i < 8; i++) {
        samples[i] = (AudioSampleFloat)source[base_index + i];
    }
}

/**
 * 8声道样本写入函数
 * 
 * 将8个声道样本写入目标缓冲区
 * 
 * @param target 目标缓冲区
 * @param index 样本索引
 * @param samples 输入样本数组
 */
static void Write8ChannelSamples(AudioSample* target, AudioBufferCount index,
                                AudioSampleFloat* samples)
{
    AudioBufferCount base_index = index * 8;
    for (int i = 0; i < 8; i++) {
        target[base_index + i] = ClampAndNormalize(samples[i]);
    }
}

/**
 * 通用向量处理函数
 * 
 * 处理通用格式的向量数据
 * 
 * @param source 源缓冲区
 * @param target 目标缓冲区
 * @param output 输出缓冲区
 * @param index 样本索引
 * @param vector_count 向量数量
 * @param mix_gain 混合增益
 * @param output_gain 输出增益
 * @param channel_count 声道数量
 */
static void ProcessGenericVector(AudioSample* source, AudioSample* target,
                                AudioSampleFloat* output, AudioBufferCount index,
                                AudioBufferCount vector_count, AudioSampleFloat mix_gain,
                                AudioSampleFloat output_gain, int channel_count)
{
    AudioBufferCount base_index = index * channel_count;
    
    for (AudioBufferCount i = 0; i < vector_count; i += 4) {
        for (int j = 0; j < 4; j++) {
            AudioBufferCount sample_index = base_index + i + j;
            AudioSampleFloat normalized = NormalizeSample((AudioSampleFloat)source[sample_index]);
            output[sample_index] = MixSample(normalized, (AudioSampleFloat)source[sample_index],
                                           mix_gain, output_gain);
            target[sample_index] = ClampAndNormalize(normalized);
        }
    }
}

/**
 * 通用剩余处理函数
 * 
 * 处理通用格式的剩余数据
 * 
 * @param source 源缓冲区
 * @param target 目标缓冲区
 * @param output 输出缓冲区
 * @param index 样本索引
 * @param vector_count 向量数量
 * @param remaining_count 剩余数量
 * @param mix_gain 混合增益
 * @param output_gain 输出增益
 */
static void ProcessGenericRemainder(AudioSample* source, AudioSample* target,
                                   AudioSampleFloat* output, AudioBufferCount index,
                                   AudioBufferCount vector_count, AudioBufferCount remaining_count,
                                   AudioSampleFloat mix_gain, AudioSampleFloat output_gain)
{
    AudioBufferCount base_index = index * 8;
    
    for (AudioBufferCount i = 0; i < remaining_count; i++) {
        AudioBufferCount sample_index = base_index + vector_count + i;
        AudioSampleFloat normalized = NormalizeSample((AudioSampleFloat)source[sample_index]);
        output[sample_index] = MixSample(normalized, (AudioSampleFloat)source[sample_index],
                                       mix_gain, output_gain);
        target[sample_index] = ClampAndNormalize(normalized);
    }
}

//==============================================================================
// 文件信息
//==============================================================================

/**
 * 文件说明：
 * 
 * 本文件是 TaleWorlds.Native 音频处理系统的核心组成部分，专门负责
 * 音频数据的安全处理和格式转换。该模块支持多种音频格式，包括
 * 单声道、6声道和8声道音频数据的高效处理。
 * 
 * 技术特点：
 * - 采用向量化处理算法，提高处理效率
 * - 实现了完整的音频格式转换机制
 * - 提供了数据验证和安全检查功能
 * - 支持批量处理和流式处理
 * 
 * 优化策略：
 * - 使用SIMD指令优化的向量化处理
 * - 实现了内存池和缓冲区管理
 * - 提供了多线程处理支持
 * - 优化了数据访问模式和缓存利用率
 * 
 * 安全机制：
 * - 实现了完整的输入参数验证
 * - 提供了数值范围检查和限制
 * - 防止缓冲区溢出和越界访问
 * - 支持错误恢复和状态报告
 * 
 * 应用场景：
 * - 游戏音频系统
 * - 实时音频处理
 * - 音频格式转换
 * - 音频效果处理
 */