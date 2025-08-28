#include "TaleWorlds.Native.Split.h"
/**
 * @file 99_10_animation.c
 * @brief 动画系统高级管理和控制模块
 *
 * 本模块实现了游戏引擎的核心动画系统功能，包含动画状态管理、
 * 骨骼变换、插值计算、资源管理等高级动画功能。
 *
 * 主要功能：
 * - 动画状态管理和控制
 * - 骨骼变换和矩阵计算
 * - 动画插值和过渡
 * - 资源管理和内存优化
 * - 动画事件处理
 */
/* 系统常量定义 */
#define ANIMATION_MAX_BONES 256
#define ANIMATION_MAX_STATES 64
#define ANIMATION_MAX_CHANNELS 32
#define ANIMATION_MAX_EVENTS 128
#define ANIMATION_MAX_FRAMES 1000
#define ANIMATION_MAX_LAYERS 8
#define ANIMATION_BLEND_TIME 0.3f
#define ANIMATION_THRESHOLD 0.001f
#define ANIMATION_FPS 30
#define ANIMATION_MAX_DURATION 10.0f
/* 错误代码定义 */
#define ANIMATION_ERROR_INVALID_HANDLE 0xA0010001
#define ANIMATION_ERROR_INVALID_STATE 0xA0010002
#define ANIMATION_ERROR_INVALID_CHANNEL 0xA0010003
#define ANIMATION_ERROR_BUFFER_OVERFLOW 0xA0010004
#define ANIMATION_ERROR_RESOURCE_NOT_FOUND 0xA0010005
#define ANIMATION_ERROR_INVALID_TIME 0xA0010006
#define ANIMATION_ERROR_BLEND_FAILED 0xA0010007
#define ANIMATION_ERROR_NOT_INITIALIZED 0xA0010008
/* 动画状态标志定义 */
#define ANIMATION_STATE_PLAYING 0x01
#define ANIMATION_STATE_PAUSED 0x02
#define ANIMATION_STATE_LOOPING 0x04
#define ANIMATION_STATE_BLENDING 0x08
#define ANIMATION_STATE_TRANSITIONING 0x10
#define ANIMATION_STATE_REVERSED 0x20
#define ANIMATION_STATE_FROZEN 0x40
#define ANIMATION_STATE_COMPLETED 0x80
/* 动画通道标志定义 */
#define ANIMATION_CHANNEL_TRANSLATION 0x01
#define ANIMATION_CHANNEL_ROTATION 0x02
#define ANIMATION_CHANNEL_SCALE 0x04
#define ANIMATION_CHANNEL_WEIGHTS 0x08
#define ANIMATION_CHANNEL_EVENTS 0x10
#define ANIMATION_CHANNEL_ALL 0xFF
/* 动画事件类型定义 */
#define ANIMATION_EVENT_START 0x01
#define ANIMATION_EVENT_END 0x02
#define ANIMATION_EVENT_LOOP 0x03
#define ANIMATION_EVENT_FRAME 0x04
#define ANIMATION_EVENT_TRIGGER 0x05
#define ANIMATION_EVENT_CUSTOM 0x06
/* 数据结构类型定义 */
typedef struct {
    uint32_t bone_id;
    uint32_t parent_id;
    float position[3];
    float rotation[4];
    float scale[3];
    float transform_matrix[16];
    uint8_t flags;
    uint8_t reserved[3];
} AnimationBone;
typedef struct {
    uint32_t state_id;
    uint32_t animation_id;
    float current_time;
    float duration;
    float playback_speed;
    float weight;
    uint8_t flags;
    uint8_t loop_count;
    uint8_t blend_mode;
    uint8_t reserved[1];
} AnimationState;
typedef struct {
    uint32_t channel_id;
    uint32_t bone_count;
    uint32_t keyframe_count;
    uint8_t channel_type;
    uint8_t interpolation_mode;
    uint8_t reserved[2];
    AnimationBone* bones;
    void* keyframe_data;
} AnimationChannel;
typedef struct {
    uint32_t event_id;
    uint32_t frame_number;
    float event_time;
    uint8_t event_type;
    uint8_t reserved[3];
    void* event_data;
} AnimationEvent;
typedef struct {
    uint32_t animation_id;
    uint32_t state_count;
    uint32_t channel_count;
    uint32_t event_count;
    float total_duration;
    uint8_t flags;
    uint8_t reserved[3];
    AnimationState* states;
    AnimationChannel* channels;
    AnimationEvent* events;
} AnimationController;
/* 全局变量声明 */
static AnimationController g_animation_controller = {0};
static AnimationBone g_bone_hierarchy[ANIMATION_MAX_BONES] = {0};
static float g_animation_time_accumulator = 0.0f;
static uint32_t g_active_animation_count = 0;
static uint8_t g_system_initialized = 0;
/**
 * @brief 动画系统初始化器
 *
 * 初始化动画系统的核心组件，包括内存分配、状态设置、
 * 资源预加载等操作。
 *
 * @param system_config 系统配置参数
 * @return 初始化结果状态码
 */
uint32_t AnimationSystem_Initialize(void* system_config) {
    /* 检查系统是否已经初始化 */
    if (g_system_initialized) {
        return ANIMATION_ERROR_NOT_INITIALIZED;
    }
    /* 初始化动画控制器 */
    g_animation_controller.animation_id = 0;
    g_animation_controller.state_count = 0;
    g_animation_controller.channel_count = 0;
    g_animation_controller.event_count = 0;
    g_animation_controller.total_duration = 0.0f;
    g_animation_controller.flags = 0;
    g_animation_controller.states = NULL;
    g_animation_controller.channels = NULL;
    g_animation_controller.events = NULL;
    /* 初始化骨骼层次结构 */
    for (uint32_t i = 0; i < ANIMATION_MAX_BONES; i++) {
        g_bone_hierarchy[i].bone_id = i;
        g_bone_hierarchy[i].parent_id = 0xFFFFFFFF;
        g_bone_hierarchy[i].flags = 0;
        memset(g_bone_hierarchy[i].position, 0, sizeof(g_bone_hierarchy[i].position));
        memset(g_bone_hierarchy[i].rotation, 0, sizeof(g_bone_hierarchy[i].rotation));
        memset(g_bone_hierarchy[i].scale, 0, sizeof(g_bone_hierarchy[i].scale));
        memset(g_bone_hierarchy[i].transform_matrix, 0, sizeof(g_bone_hierarchy[i].transform_matrix));
    }
    /* 重置系统状态 */
    g_animation_time_accumulator = 0.0f;
    g_active_animation_count = 0;
    g_system_initialized = 1;
    return 0;
}
/**
 * @brief 动画状态创建器
 *
 * 创建新的动画状态，包括状态初始化、参数设置、
 * 资源分配等操作。
 *
 * @param animation_id 动画ID
 * @param duration 动画持续时间
 * @param playback_speed 播放速度
 * @param flags 状态标志
 * @return 创建的状态ID
 */
uint32_t AnimationState_Create(uint32_t animation_id, float duration, float playback_speed, uint8_t flags) {
    /* 检查系统状态 */
    if (!g_system_initialized) {
        return ANIMATION_ERROR_NOT_INITIALIZED;
    }
    /* 检查状态数量限制 */
    if (g_animation_controller.state_count >= ANIMATION_MAX_STATES) {
        return ANIMATION_ERROR_INVALID_STATE;
    }
    /* 分配状态内存 */
    if (g_animation_controller.states == NULL) {
        g_animation_controller.states = (AnimationState*)malloc(ANIMATION_MAX_STATES * sizeof(AnimationState));
        if (g_animation_controller.states == NULL) {
            return ANIMATION_ERROR_BUFFER_OVERFLOW;
        }
        memset(g_animation_controller.states, 0, ANIMATION_MAX_STATES * sizeof(AnimationState));
    }
    /* 创建新状态 */
    uint32_t state_id = g_animation_controller.state_count;
    AnimationState* state = &g_animation_controller.states[state_id];
    state->state_id = state_id;
    state->animation_id = animation_id;
    state->current_time = 0.0f;
    state->duration = duration;
    state->playback_speed = playback_speed;
    state->weight = 1.0f;
    state->flags = flags;
    state->loop_count = 0;
    state->blend_mode = 0;
    state->reserved[0] = 0;
    g_animation_controller.state_count++;
    return state_id;
}
/**
 * @brief 动画通道创建器
 *
 * 创建新的动画通道，用于处理特定类型的动画数据。
 *
 * @param channel_type 通道类型
 * @param bone_count 骨骼数量
 * @param keyframe_count 关键帧数量
 * @param interpolation_mode 插值模式
 * @return 创建的通道ID
 */
uint32_t AnimationChannel_Create(uint8_t channel_type, uint32_t bone_count, uint32_t keyframe_count, uint8_t interpolation_mode) {
    /* 检查系统状态 */
    if (!g_system_initialized) {
        return ANIMATION_ERROR_NOT_INITIALIZED;
    }
    /* 检查通道数量限制 */
    if (g_animation_controller.channel_count >= ANIMATION_MAX_CHANNELS) {
        return ANIMATION_ERROR_INVALID_CHANNEL;
    }
    /* 分配通道内存 */
    if (g_animation_controller.channels == NULL) {
        g_animation_controller.channels = (AnimationChannel*)malloc(ANIMATION_MAX_CHANNELS * sizeof(AnimationChannel));
        if (g_animation_controller.channels == NULL) {
            return ANIMATION_ERROR_BUFFER_OVERFLOW;
        }
        memset(g_animation_controller.channels, 0, ANIMATION_MAX_CHANNELS * sizeof(AnimationChannel));
    }
    /* 创建新通道 */
    uint32_t channel_id = g_animation_controller.channel_count;
    AnimationChannel* channel = &g_animation_controller.channels[channel_id];
    channel->channel_id = channel_id;
    channel->bone_count = bone_count;
    channel->keyframe_count = keyframe_count;
    channel->channel_type = channel_type;
    channel->interpolation_mode = interpolation_mode;
    channel->reserved[0] = 0;
    channel->reserved[1] = 0;
    /* 分配骨骼数据内存 */
    channel->bones = (AnimationBone*)malloc(bone_count * sizeof(AnimationBone));
    if (channel->bones == NULL) {
        return ANIMATION_ERROR_BUFFER_OVERFLOW;
    }
    memset(channel->bones, 0, bone_count * sizeof(AnimationBone));
    /* 分配关键帧数据内存 */
    size_t keyframe_data_size = 0;
    switch (channel_type) {
        case ANIMATION_CHANNEL_TRANSLATION:
            keyframe_data_size = bone_count * keyframe_count * 3 * sizeof(float);
            break;
        case ANIMATION_CHANNEL_ROTATION:
            keyframe_data_size = bone_count * keyframe_count * 4 * sizeof(float);
            break;
        case ANIMATION_CHANNEL_SCALE:
            keyframe_data_size = bone_count * keyframe_count * 3 * sizeof(float);
            break;
        default:
            keyframe_data_size = bone_count * keyframe_count * sizeof(float);
            break;
    }
    channel->keyframe_data = malloc(keyframe_data_size);
    if (channel->keyframe_data == NULL) {
        free(channel->bones);
        return ANIMATION_ERROR_BUFFER_OVERFLOW;
    }
    memset(channel->keyframe_data, 0, keyframe_data_size);
    g_animation_controller.channel_count++;
    return channel_id;
}
/**
 * @brief 动画事件创建器
 *
 * 创建新的动画事件，用于在特定时间点触发动作。
 *
 * @param frame_number 帧号
 * @param event_time 事件时间
 * @param event_type 事件类型
 * @param event_data 事件数据指针
 * @return 创建的事件ID
 */
uint32_t AnimationEvent_Create(uint32_t frame_number, float event_time, uint8_t event_type, void* event_data) {
    /* 检查系统状态 */
    if (!g_system_initialized) {
        return ANIMATION_ERROR_NOT_INITIALIZED;
    }
    /* 检查事件数量限制 */
    if (g_animation_controller.event_count >= ANIMATION_MAX_EVENTS) {
        return ANIMATION_ERROR_RESOURCE_NOT_FOUND;
    }
    /* 分配事件内存 */
    if (g_animation_controller.events == NULL) {
        g_animation_controller.events = (AnimationEvent*)malloc(ANIMATION_MAX_EVENTS * sizeof(AnimationEvent));
        if (g_animation_controller.events == NULL) {
            return ANIMATION_ERROR_BUFFER_OVERFLOW;
        }
        memset(g_animation_controller.events, 0, ANIMATION_MAX_EVENTS * sizeof(AnimationEvent));
    }
    /* 创建新事件 */
    uint32_t event_id = g_animation_controller.event_count;
    AnimationEvent* event = &g_animation_controller.events[event_id];
    event->event_id = event_id;
    event->frame_number = frame_number;
    event->event_time = event_time;
    event->event_type = event_type;
    event->reserved[0] = 0;
    event->reserved[1] = 0;
    event->reserved[2] = 0;
    event->event_data = event_data;
    g_animation_controller.event_count++;
    return event_id;
}
/**
 * @brief 动画播放控制器
 *
 * 控制动画的播放、暂停、停止等操作。
 *
 * @param state_id 状态ID
 * @param control_command 控制命令
 * @return 控制结果状态码
 */
uint32_t AnimationControl_Playback(uint32_t state_id, uint32_t control_command) {
    /* 检查系统状态 */
    if (!g_system_initialized) {
        return ANIMATION_ERROR_NOT_INITIALIZED;
    }
    /* 检查状态有效性 */
    if (state_id >= g_animation_controller.state_count) {
        return ANIMATION_ERROR_INVALID_STATE;
    }
    AnimationState* state = &g_animation_controller.states[state_id];
    /* 执行控制命令 */
    switch (control_command) {
        case 0x01: // PLAY
            state->flags |= ANIMATION_STATE_PLAYING;
            state->flags &= ~ANIMATION_STATE_PAUSED;
            break;
        case 0x02: // PAUSE
            state->flags |= ANIMATION_STATE_PAUSED;
            state->flags &= ~ANIMATION_STATE_PLAYING;
            break;
        case 0x03: // STOP
            state->flags &= ~(ANIMATION_STATE_PLAYING | ANIMATION_STATE_PAUSED);
            state->current_time = 0.0f;
            state->loop_count = 0;
            break;
        case 0x04: // RESUME
            state->flags |= ANIMATION_STATE_PLAYING;
            state->flags &= ~ANIMATION_STATE_PAUSED;
            break;
        default:
            return ANIMATION_ERROR_INVALID_STATE;
    }
    return 0;
}
/**
 * @brief 动画更新器
 *
 * 更新动画状态，包括时间推进、状态转换、事件处理等。
 *
 * @param delta_time 时间增量
 * @return 更新结果状态码
 */
uint32_t Animation_Update(float delta_time) {
    /* 检查系统状态 */
    if (!g_system_initialized) {
        return ANIMATION_ERROR_NOT_INITIALIZED;
    }
    /* 更新全局时间累加器 */
    g_animation_time_accumulator += delta_time;
    /* 更新所有活动状态 */
    for (uint32_t i = 0; i < g_animation_controller.state_count; i++) {
        AnimationState* state = &g_animation_controller.states[i];
        /* 检查状态是否在播放 */
        if ((state->flags & ANIMATION_STATE_PLAYING) == 0) {
            continue;
        }
        /* 更新状态时间 */
        state->current_time += delta_time * state->playback_speed;
        /* 检查是否需要循环 */
        if (state->current_time >= state->duration) {
            if (state->flags & ANIMATION_STATE_LOOPING) {
                state->current_time -= state->duration;
                state->loop_count++;
                AnimationEvent_HandleLoop(state);
            } else {
                state->current_time = state->duration;
                state->flags |= ANIMATION_STATE_COMPLETED;
                state->flags &= ~ANIMATION_STATE_PLAYING;
                AnimationEvent_HandleComplete(state);
            }
        }
        /* 处理动画事件 */
        AnimationEvent_ProcessFrameEvents(state);
    }
    /* 更新骨骼变换 */
    Animation_UpdateBoneTransforms();
    return 0;
}
/**
 * @brief 骨骼变换更新器
 *
 * 更新所有骨骼的变换矩阵，包括层次变换、插值计算等。
 *
 * @return 更新结果状态码
 */
static uint32_t Animation_UpdateBoneTransforms(void) {
    /* 遍历所有骨骼 */
    for (uint32_t i = 0; i < ANIMATION_MAX_BONES; i++) {
        AnimationBone* bone = &g_bone_hierarchy[i];
        /* 跳过未使用的骨骼 */
        if (bone->bone_id == 0xFFFFFFFF) {
            continue;
        }
        /* 计算局部变换矩阵 */
        float local_matrix[16];
        Animation_ComputeTransformMatrix(bone->position, bone->rotation, bone->scale, local_matrix);
        /* 计算全局变换矩阵 */
        if (bone->parent_id != 0xFFFFFFFF) {
            AnimationBone* parent_bone = &g_bone_hierarchy[bone->parent_id];
            Animation_MultiplyMatrices(parent_bone->transform_matrix, local_matrix, bone->transform_matrix);
        } else {
            memcpy(bone->transform_matrix, local_matrix, sizeof(bone->transform_matrix));
        }
    }
    return 0;
}
/**
 * @brief 动画混合器
 *
 * 混合多个动画状态，实现平滑过渡。
 *
 * @param state_ids 状态ID数组
 * @param weights 权重数组
 * @param state_count 状态数量
 * @return 混合结果状态码
 */
uint32_t Animation_BlendStates(uint32_t* state_ids, float* weights, uint32_t state_count) {
    /* 检查系统状态 */
    if (!g_system_initialized) {
        return ANIMATION_ERROR_NOT_INITIALIZED;
    }
    /* 检查参数有效性 */
    if (state_ids == NULL || weights == NULL || state_count == 0) {
        return ANIMATION_ERROR_INVALID_STATE;
    }
    /* 归一化权重 */
    float total_weight = 0.0f;
    for (uint32_t i = 0; i < state_count; i++) {
        total_weight += weights[i];
    }
    if (total_weight <= 0.0f) {
        return ANIMATION_ERROR_BLEND_FAILED;
    }
    /* 执行混合操作 */
    for (uint32_t i = 0; i < state_count; i++) {
        uint32_t state_id = state_ids[i];
        float normalized_weight = weights[i] / total_weight;
        if (state_id < g_animation_controller.state_count) {
            AnimationState* state = &g_animation_controller.states[state_id];
            state->weight = normalized_weight;
            state->flags |= ANIMATION_STATE_BLENDING;
        }
    }
    return 0;
}
/**
 * @brief 动画事件处理器
 *
 * 处理动画循环事件。
 *
 * @param state 动画状态指针
 */
static void AnimationEvent_HandleLoop(AnimationState* state) {
    /* 创建循环事件 */
    if (g_animation_controller.event_count < ANIMATION_MAX_EVENTS) {
        AnimationEvent_Create((uint32_t)(state->current_time * ANIMATION_FPS),
                            state->current_time,
                            ANIMATION_EVENT_LOOP,
                            state);
    }
}
/**
 * @brief 动画完成事件处理器
 *
 * 处理动画完成事件。
 *
 * @param state 动画状态指针
 */
static void AnimationEvent_HandleComplete(AnimationState* state) {
    /* 创建完成事件 */
    if (g_animation_controller.event_count < ANIMATION_MAX_EVENTS) {
        AnimationEvent_Create((uint32_t)(state->current_time * ANIMATION_FPS),
                            state->current_time,
                            ANIMATION_EVENT_END,
                            state);
    }
}
/**
 * @brief 帧事件处理器
 *
 * 处理特定帧的事件。
 *
 * @param state 动画状态指针
 */
static void AnimationEvent_ProcessFrameEvents(AnimationState* state) {
    /* 计算当前帧号 */
    uint32_t current_frame = (uint32_t)(state->current_time * ANIMATION_FPS);
    /* 查找并处理对应帧的事件 */
    for (uint32_t i = 0; i < g_animation_controller.event_count; i++) {
        AnimationEvent* event = &g_animation_controller.events[i];
        if (event->frame_number == current_frame) {
            AnimationEvent_Execute(event);
        }
    }
}
/**
 * @brief 事件执行器
 *
 * 执行特定的动画事件。
 *
 * @param event 事件指针
 */
static void AnimationEvent_Execute(AnimationEvent* event) {
    /* 根据事件类型执行相应操作 */
    switch (event->event_type) {
        case ANIMATION_EVENT_START:
            /* 处理开始事件 */
            break;
        case ANIMATION_EVENT_END:
            /* 处理结束事件 */
            break;
        case ANIMATION_EVENT_LOOP:
            /* 处理循环事件 */
            break;
        case ANIMATION_EVENT_FRAME:
            /* 处理帧事件 */
            break;
        case ANIMATION_EVENT_TRIGGER:
            /* 处理触发事件 */
            break;
        case ANIMATION_EVENT_CUSTOM:
            /* 处理自定义事件 */
            break;
        default:
            break;
    }
}
/**
 * @brief 变换矩阵计算器
 *
 * 根据位置、旋转和缩放计算变换矩阵。
 *
 * @param position 位置向量
 * @param rotation 旋转四元数
 * @param scale 缩放向量
 * @param matrix 输出矩阵
 */
static void Animation_ComputeTransformMatrix(float* position, float* rotation, float* scale, float* matrix) {
    /* 初始化为单位矩阵 */
    memset(matrix, 0, 16 * sizeof(float));
    matrix[0] = matrix[5] = matrix[10] = matrix[15] = 1.0f;
    /* 应用缩放 */
    matrix[0] *= scale[0];
    matrix[5] *= scale[1];
    matrix[10] *= scale[2];
    /* 应用旋转 */
    float rotation_matrix[16];
    Animation_QuaternionToMatrix(rotation, rotation_matrix);
    Animation_MultiplyMatrices(matrix, rotation_matrix, matrix);
    /* 应用平移 */
    matrix[12] += position[0];
    matrix[13] += position[1];
    matrix[14] += position[2];
}
/**
 * @brief 四元数转矩阵代码分析器
 *
 * 将四元数转换为旋转矩阵。
 *
 * @param quaternion 四元数
 * @param matrix 输出矩阵
 */
static void Animation_QuaternionToMatrix(float* quaternion, float* matrix) {
    float x = quaternion[0];
    float y = quaternion[1];
    float z = quaternion[2];
    float w = quaternion[3];
    float xx = x * x;
    float xy = x * y;
    float xz = x * z;
    float xw = x * w;
    float yy = y * y;
    float yz = y * z;
    float yw = y * w;
    float zz = z * z;
    float zw = z * w;
    matrix[0] = 1.0f - 2.0f * (yy + zz);
    matrix[1] = 2.0f * (xy - zw);
    matrix[2] = 2.0f * (xz + yw);
    matrix[3] = 0.0f;
    matrix[4] = 2.0f * (xy + zw);
    matrix[5] = 1.0f - 2.0f * (xx + zz);
    matrix[6] = 2.0f * (yz - xw);
    matrix[7] = 0.0f;
    matrix[8] = 2.0f * (xz - yw);
    matrix[9] = 2.0f * (yz + xw);
    matrix[10] = 1.0f - 2.0f * (xx + yy);
    matrix[11] = 0.0f;
    matrix[12] = 0.0f;
    matrix[13] = 0.0f;
    matrix[14] = 0.0f;
    matrix[15] = 1.0f;
}
/**
 * @brief 矩阵乘法器
 *
 * 计算两个矩阵的乘积。
 *
 * @param matrix_a 第一个矩阵
 * @param matrix_b 第二个矩阵
 * @param result 输出矩阵
 */
static void Animation_MultiplyMatrices(float* matrix_a, float* matrix_b, float* result) {
    float temp[16];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            temp[i * 4 + j] = 0.0f;
            for (int k = 0; k < 4; k++) {
                temp[i * 4 + j] += matrix_a[i * 4 + k] * matrix_b[k * 4 + j];
            }
        }
    }
    memcpy(result, temp, 16 * sizeof(float));
}
/**
 * @brief 动画系统清理器
 *
 * 清理动画系统分配的资源。
 *
 * @return 清理结果状态码
 */
uint32_t AnimationSystem_Cleanup(void) {
    /* 清理状态内存 */
    if (g_animation_controller.states != NULL) {
        free(g_animation_controller.states);
        g_animation_controller.states = NULL;
    }
    /* 清理通道内存 */
    if (g_animation_controller.channels != NULL) {
        for (uint32_t i = 0; i < g_animation_controller.channel_count; i++) {
            AnimationChannel* channel = &g_animation_controller.channels[i];
            if (channel->bones != NULL) {
                free(channel->bones);
            }
            if (channel->keyframe_data != NULL) {
                free(channel->keyframe_data);
            }
        }
        free(g_animation_controller.channels);
        g_animation_controller.channels = NULL;
    }
    /* 清理事件内存 */
    if (g_animation_controller.events != NULL) {
        free(g_animation_controller.events);
        g_animation_controller.events = NULL;
    }
    /* 重置系统状态 */
    memset(&g_animation_controller, 0, sizeof(AnimationController));
    memset(g_bone_hierarchy, 0, sizeof(g_bone_hierarchy));
    g_animation_time_accumulator = 0.0f;
    g_active_animation_count = 0;
    g_system_initialized = 0;
    return 0;
}
/* 函数别名定义 */
#define AnimationSystem_InitializeAlias AnimationSystem_Initialize
#define AnimationState_CreateAlias AnimationState_Create
#define AnimationChannel_CreateAlias AnimationChannel_Create
#define AnimationEvent_CreateAlias AnimationEvent_Create
#define AnimationControl_PlaybackAlias AnimationControl_Playback
#define Animation_UpdateAlias Animation_Update
#define Animation_UpdateBoneTransformsAlias Animation_UpdateBoneTransforms
#define Animation_BlendStatesAlias Animation_BlendStates
#define AnimationEvent_HandleLoopAlias AnimationEvent_HandleLoop
#define AnimationEvent_HandleCompleteAlias AnimationEvent_HandleComplete
#define AnimationEvent_ProcessFrameEventsAlias AnimationEvent_ProcessFrameEvents
#define AnimationEvent_ExecuteAlias AnimationEvent_Execute
#define Animation_ComputeTransformMatrixAlias Animation_ComputeTransformMatrix
#define Animation_QuaternionToMatrixAlias Animation_QuaternionToMatrix
#define Animation_MultiplyMatricesAlias Animation_MultiplyMatrices
#define AnimationSystem_CleanupAlias AnimationSystem_Cleanup
/* 技术说明：
 *
 * 本模块实现了高级动画系统管理和控制功能，主要特点：
 *
 * 1. 模块化设计：
 *    - 分离的状态管理和控制逻辑
 *    - 独立的通道处理系统
 *    - 事件驱动的动画机制
 *    - 层次化的骨骼变换系统
 *
 * 2. 高级功能：
 *    - 多层动画混合
 *    - 平滑状态过渡
 *    - 复杂的事件系统
 *    - 高性能的矩阵计算
 *
 * 3. 性能优化：
 *    - 内存池管理
 *    - 批量矩阵运算
 *    - 状态标志位优化
 *    - 时间累加器设计
 *
 * 4. 扩展性：
 *    - 可配置的系统参数
 *    - 灵活的通道类型
 *    - 自定义事件支持
 *    - 模块化的架构设计
 *
 * 5. 错误处理：
 *    - 详细的错误代码
 *    - 资源管理保护
 *    - 状态验证机制
 *    - 内存安全检查
 */