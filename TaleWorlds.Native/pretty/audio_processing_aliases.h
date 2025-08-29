/**
 * @file audio_processing_aliases.h
 * @brief 音频处理模块函数别名定义
 * 
 * 本文件为音频处理模块提供语义化函数别名，将原始的FUN_函数名
 * 转换为具有明确语义的函数名，提高代码可读性和维护性。
 * 
 * @author Claude Code
 * @date 2025-08-28
 * @version 1.0
 */

#ifndef AUDIO_PROCESSING_ALIASES_H
#define AUDIO_PROCESSING_ALIASES_H

/*==========================================
函数别名定义 - 音频处理模块
==========================================*/

/**
 * @defgroup AudioStreamFunctions 音频流处理函数
 * @brief 音频流的创建、播放、控制和销毁函数
 * @{
 */

/** 音频流处理器 - 主要负责音频流的创建和管理 */
#define AudioStreamProcessor              FUN_1805d1000

/** 音频流创建器 - 负责创建新的音频流实例 */
#define AudioStreamCreator                FUN_1805d1001

/** 音频流播放器 - 负责音频流的播放控制 */
#define AudioStreamPlayer                 FUN_1805d1002

/** 音频流暂停器 - 负责音频流的暂停控制 */
#define AudioStreamPauser                 FUN_1805d1003

/** 音频流停止器 - 负责音频流的停止控制 */
#define AudioStreamStopper                FUN_1805d1004

/** 音频流音量控制器 - 负责音频流音量的调整 */
#define AudioStreamVolumeController       FUN_1805d1005

/** 音频流声像控制器 - 负责音频流声像的调整 */
#define AudioStreamPanController          FUN_1805d1006

/** 音频流循环控制器 - 负责音频流循环播放的控制 */
#define AudioStreamLoopController         FUN_1805d1007

/** 音频流位置控制器 - 负责音频流播放位置的调整 */
#define AudioStreamPositionController     FUN_1805d1008

/** 音频流状态检查器 - 负责音频流状态的检查 */
#define AudioStreamStatusChecker          FUN_1805d1009

/** @} */

/**
 * @defgroup SoundSynthesisFunctions 声音合成函数
 * @brief 声音合成和音频生成函数
 * @{
 */

/** 声音合成器 - 主要负责声音的合成和生成 */
#define SoundSynthesizer                  FUN_1805d1333

/** 音调生成器 - 负责生成特定频率的音调 */
#define ToneGenerator                     FUN_1805d1334

/** 噪声生成器 - 负责生成各种类型的噪声 */
#define NoiseGenerator                    FUN_1805d1335

/** 包络生成器 - 负责生成ADSR包络 */
#define EnvelopeGenerator                 FUN_1805d1336

/** 波形生成器 - 负责生成各种波形 */
#define WaveformGenerator                 FUN_1805d1337

/** 采样器 - 负责音频采样处理 */
#define Sampler                           FUN_1805d1338

/** 合成器初始化器 - 负责合成器的初始化 */
#define SynthesizerInitializer            FUN_1805d1339

/** 合成器配置器 - 负责合成器的配置 */
#define SynthesizerConfigurator           FUN_1805d133a

/** 合成器清理器 - 负责合成器的清理 */
#define SynthesizerCleaner                FUN_1805d133b

/** @} */

/**
 * @defgroup AudioEffectFunctions 音频效果处理函数
 * @brief 音频效果处理和音频增强函数
 * @{
 */

/** 音频效果处理器 - 主要负责音频效果的处理 */
#define AudioEffectProcessor              FUN_1805d1666

/** 混响效果处理器 - 负责混响效果的处理 */
#define ReverbEffectProcessor             FUN_1805d1667

/** 回声效果处理器 - 负责回声效果的处理 */
#define EchoEffectProcessor               FUN_1805d1668

/** 合唱效果处理器 - 负责合唱效果的处理 */
#define ChorusEffectProcessor             FUN_1805d1669

/** 镶边效果处理器 - 负责镶边效果的处理 */
#define FlangerEffectProcessor            FUN_1805d166a

/** 失真效果处理器 - 负责失真效果的处理 */
#define DistortionEffectProcessor         FUN_1805d166b

/** 均衡器 - 负责音频频率均衡 */
#define Equalizer                         FUN_1805d166c

/** 压缩器 - 负责音频动态压缩 */
#define Compressor                        FUN_1805d166d

/** 限幅器 - 负责音频峰值限制 */
#define Limiter                           FUN_1805d166e

/** 噪声门 - 负责噪声门控制 */
#define NoiseGate                         FUN_1805d166f

/** @} */

/**
 * @defgroup SpatialAudioFunctions 3D空间音频函数
 * @brief 3D空间音频处理和定位函数
 * @{
 */

/** 空间音频管理器 - 主要负责3D空间音频的管理 */
#define SpatialAudioManager               FUN_1805d1999

/** 3D音源创建器 - 负责创建3D音源 */
#define Source3DCreator                   FUN_1805d199a

/** 3D音源定位器 - 负责3D音源的位置设置 */
#define Source3DPositioner                FUN_1805d199b

/** 3D音源速度控制器 - 负责3D音源的速度设置 */
#define Source3DVelocityController       FUN_1805d199c

/** 3D音源方向控制器 - 负责3D音源的方向设置 */
#define Source3DDirectionController       FUN_1805d199d

/** 听者位置管理器 - 负责听者位置的管理 */
#define ListenerPositionManager           FUN_1805d199e

/** 距离衰减计算器 - 负责计算距离衰减 */
#define DistanceAttenuationCalculator     FUN_1805d199f

/** 多普勒效应处理器 - 负责多普勒效应的处理 */
#define DopplerEffectProcessor            FUN_1805d19a0

/** 空间化处理器 - 负责音频空间化处理 */
#define SpatializationProcessor           FUN_1805d19a1

/** 双耳渲染器 - 负责双耳音频渲染 */
#define BinauralRenderer                  FUN_1805d19a2

/** @} */

/**
 * @defgroup AudioDeviceFunctions 音频设备管理函数
 * @brief 音频设备管理和配置函数
 * @{
 */

/** 音频设备管理器 - 主要负责音频设备的管理 */
#define AudioDeviceManager                FUN_1805d1ccc

/** 音频设备初始化器 - 负责音频设备的初始化 */
#define AudioDeviceInitializer            FUN_1805d1ccd

/** 音频设备清理器 - 负责音频设备的清理 */
#define AudioDeviceCleaner                FUN_1805d1cce

/** 音频设备枚举器 - 负责枚举音频设备 */
#define AudioDeviceEnumerator             FUN_1805d1ccf

/** 音频设备配置器 - 负责音频设备的配置 */
#define AudioDeviceConfigurator           FUN_1805d1cd0

/** 音频设备状态检查器 - 负责检查音频设备状态 */
#define AudioDeviceStatusChecker          FUN_1805d1cd1

/** 音频设备错误处理器 - 负责处理音频设备错误 */
#define AudioDeviceErrorHandler           FUN_1805d1cd2

/** 音频设备格式控制器 - 负责音频设备格式的控制 */
#define AudioDeviceFormatController       FUN_1805d1cd3

/** 音频设备缓冲区管理器 - 负责音频设备缓冲区的管理 */
#define AudioDeviceBufferManager          FUN_1805d1cd4

/** 音频设备采样率转换器 - 负责音频设备采样率的转换 */
#define AudioDeviceSampleRateConverter    FUN_1805d1cd5

/** @} */

/**
 * @defgroup AudioProcessingFunctions 音频处理核心函数
 * @brief 音频处理的核心算法和数据转换函数
 * @{
 */

/** 音频处理器 - 主要负责音频的核心处理 */
#define AudioProcessor                    FUN_1805d1fff

/** 音频格式转换器 - 负责音频格式的转换 */
#define AudioFormatConverter              FUN_1805d2000

/** 音频采样率转换器 - 负责音频采样率的转换 */
#define AudioSampleRateConverter          FUN_1805d2001

/** 音频通道混合器 - 负责音频通道的混合 */
#define AudioChannelMixer                FUN_1805d2002

/** 音频数据压缩器 - 负责音频数据的压缩 */
#define AudioDataCompressor               FUN_1805d2003

/** 音频数据解压器 - 负责音频数据的解压 */
#define AudioDataDecompressor             FUN_1805d2004

/** 音频频谱分析器 - 负责音频频谱的分析 */
#define AudioSpectrumAnalyzer             FUN_1805d2005

/** 音频相位分析器 - 负责音频相位的分析 */
#define AudioPhaseAnalyzer                FUN_1805d2006

/** 音音频质量评估器 - 负责音频质量的评估 */
#define AudioQualityEvaluator             FUN_1805d2007

/** 音频错误检测器 - 负责音频错误的检测 */
#define AudioErrorDetector                FUN_1805d2008

/** @} */

/*==========================================
内联函数和辅助宏定义
==========================================*/

/**
 * @brief 将浮点数转换为16位整数
 * @param value 浮点数
 * @return 16位整数
 */
static inline int16_t audio_float_to_int16(float value) {
    value = fmaxf(-1.0f, fminf(1.0f, value));
    return (int16_t)(value * 32767.0f);
}

/**
 * @brief 将16位整数转换为浮点数
 * @param value 16位整数
 * @return 浮点数
 */
static inline float audio_int16_to_float(int16_t value) {
    return (float)value / 32767.0f;
}

/**
 * @brief 将分贝转换为线性增益
 * @param db 分贝值
 * @return 线性增益
 */
static inline float audio_db_to_linear(float db) {
    return powf(10.0f, db / 20.0f);
}

/**
 * @brief 将线性增益转换为分贝
 * @param linear 线性增益
 * @return 分贝值
 */
static inline float audio_linear_to_db(float linear) {
    return 20.0f * log10f(fmaxf(0.0001f, linear));
}

/**
 * @brief 计算两个浮点数的线性插值
 * @param a 第一个值
 * @param b 第二个值
 * @param t 插值因子 (0.0-1.0)
 * @return 插值结果
 */
static inline float audio_lerp(float a, float b, float t) {
    return a + (b - a) * t;
}

/**
 * @brief 安全的浮点数除法
 * @param numerator 分子
 * @param denominator 分母
 * @return 除法结果
 */
static inline float audio_safe_divide(float numerator, float denominator) {
    if (fabsf(denominator) < 1e-6f) {
        return 0.0f;
    }
    return numerator / denominator;
}

#endif /* AUDIO_PROCESSING_ALIASES_H */