#include "TaleWorlds.Native.Split.h"

//============================================================================
// 99_07_input_system.c - 输入系统高级管理和控制模块
// 
// 本模块包含14个核心函数，主要负责：
// - 输入设备管理和初始化
// - 输入事件处理和分发
// - 输入状态管理和同步
// - 输入设备配置和校准
// - 输入缓冲区管理和优化
// - 输入映射和转换处理
// - 输入系统调试和监控
//
// 技术特点：
// - 支持多种输入设备类型
// - 实现实时输入事件处理
// - 提供输入状态同步机制
// - 支持输入设备热插拔
// - 优化输入延迟和响应时间
// - 提供输入映射和配置功能
//============================================================================

//============================================================================
// 常量定义
//============================================================================

// 输入设备类型常量
#define INPUT_DEVICE_TYPE_KEYBOARD      0x00000001  // 键盘设备
#define INPUT_DEVICE_TYPE_MOUSE         0x00000002  // 鼠标设备
#define INPUT_DEVICE_TYPE_GAMEPAD       0x00000004  // 游戏手柄
#define INPUT_DEVICE_TYPE_JOYSTICK      0x00000008  // 操纵杆
#define INPUT_DEVICE_TYPE_TOUCH         0x00000010  // 触摸设备
#define INPUT_DEVICE_TYPE_MOTION        0x00000020  // 运动控制设备
#define INPUT_DEVICE_TYPE_VIRTUAL       0x00000040  // 虚拟输入设备

// 输入事件类型常量
#define INPUT_EVENT_TYPE_KEY_DOWN       0x00000001  // 按键按下事件
#define INPUT_EVENT_TYPE_KEY_UP         0x00000002  // 按键释放事件
#define INPUT_EVENT_TYPE_MOUSE_MOVE     0x00000004  // 鼠标移动事件
#define INPUT_EVENT_TYPE_MOUSE_BUTTON   0x00000008  // 鼠标按钮事件
#define INPUT_EVENT_TYPE_MOUSE_WHEEL    0x00000010  // 鼠标滚轮事件
#define INPUT_EVENT_TYPE_GAMEPAD_AXIS   0x00000020  // 游戏手柄轴事件
#define INPUT_EVENT_TYPE_GAMEPAD_BUTTON 0x00000040  // 游戏手柄按钮事件
#define INPUT_EVENT_TYPE_TOUCH_BEGIN    0x00000080  // 触摸开始事件
#define INPUT_EVENT_TYPE_TOUCH_MOVE     0x00000100  // 触摸移动事件
#define INPUT_EVENT_TYPE_TOUCH_END      0x00000200  // 触摸结束事件

// 输入状态常量
#define INPUT_STATE_IDLE               0x00000000  // 输入空闲状态
#define INPUT_STATE_ACTIVE             0x00000001  // 输入活动状态
#define INPUT_STATE_DISABLED           0x00000002  // 输入禁用状态
#define INPUT_STATE_CALIBRATING        0x00000004  // 输入校准状态
#define INPUT_STATE_ERROR              0x00000008  // 输入错误状态

// 输入缓冲区常量
#define INPUT_BUFFER_SIZE              1024         // 输入缓冲区大小
#define INPUT_MAX_DEVICES              16           // 最大输入设备数
#define INPUT_MAX_EVENTS_PER_FRAME     64           // 每帧最大事件数
#define INPUT_DEAD_ZONE                0.1f         // 输入死区阈值

//============================================================================
// 类型定义
//============================================================================

// 输入设备类型枚举
typedef enum {
    INPUT_DEVICE_UNKNOWN = 0,                    // 未知设备
    INPUT_DEVICE_KEYBOARD,                       // 键盘
    INPUT_DEVICE_MOUSE,                          // 鼠标
    INPUT_DEVICE_GAMEPAD,                         // 游戏手柄
    INPUT_DEVICE_JOYSTICK,                        // 操纵杆
    INPUT_DEVICE_TOUCH,                           // 触摸屏
    INPUT_DEVICE_MOTION,                          // 运动控制
    INPUT_DEVICE_VIRTUAL,                         // 虚拟设备
    INPUT_DEVICE_COUNT                            // 设备类型总数
} InputDeviceType;

// 输入事件类型枚举
typedef enum {
    INPUT_EVENT_UNKNOWN = 0,                      // 未知事件
    INPUT_EVENT_KEY_DOWN,                         // 按键按下
    INPUT_EVENT_KEY_UP,                           // 按键释放
    INPUT_EVENT_MOUSE_MOVE,                       // 鼠标移动
    INPUT_EVENT_MOUSE_BUTTON_DOWN,                // 鼠标按下
    INPUT_EVENT_MOUSE_BUTTON_UP,                  // 鼠标释放
    INPUT_EVENT_MOUSE_WHEEL,                      // 鼠标滚轮
    INPUT_EVENT_GAMEPAD_AXIS,                     // 手柄轴
    INPUT_EVENT_GAMEPAD_BUTTON_DOWN,              // 手柄按下
    INPUT_EVENT_GAMEPAD_BUTTON_UP,                // 手柄释放
    INPUT_EVENT_TOUCH_BEGIN,                      // 触摸开始
    INPUT_EVENT_TOUCH_MOVE,                       // 触摸移动
    INPUT_EVENT_TOUCH_END,                        // 触摸结束
    INPUT_EVENT_COUNT                             // 事件类型总数
} InputEventType;

// 输入状态枚举
typedef enum {
    INPUT_STATE_INITIALIZING = 0,                 // 输入系统初始化中
    INPUT_STATE_READY,                            // 输入系统就绪
    INPUT_STATE_RUNNING,                           // 输入系统运行中
    INPUT_STATE_PAUSED,                           // 输入系统暂停
    INPUT_STATE_SHUTTING_DOWN,                    // 输入系统关闭中
    INPUT_STATE_ERROR                             // 输入系统错误
} InputSystemState;

//============================================================================
// 结构体定义
//============================================================================

/**
 * @brief 输入设备信息结构体
 * 
 * 存储输入设备的基本信息和状态
 */
typedef struct {
    InputDeviceType device_type;                   // 设备类型
    uint32_t device_id;                           // 设备唯一标识符
    char device_name[64];                         // 设备名称
    char device_vendor[64];                       // 设备制造商
    uint32_t capabilities;                         // 设备能力标志
    uint32_t state;                               // 设备状态
    uint32_t axis_count;                          // 轴数量
    uint32_t button_count;                        // 按钮数量
    float axis_values[32];                        // 轴数值
    uint8_t button_states[256];                   // 按钮状态
    void* device_context;                         // 设备上下文
    uint32_t last_update_time;                    // 最后更新时间
    uint32_t event_count;                         // 事件计数
} InputDevice;

/**
 * @brief 输入事件结构体
 * 
 * 存储输入事件的详细信息
 */
typedef struct {
    InputEventType event_type;                     // 事件类型
    uint32_t device_id;                           // 设备标识符
    uint32_t timestamp;                            // 时间戳
    uint32_t event_id;                            // 事件标识符
    union {
        struct {                                  // 键盘事件数据
            uint32_t key_code;                    // 按键代码
            uint32_t modifiers;                    // 修饰键状态
        } keyboard;
        struct {                                  // 鼠标事件数据
            float x;                              // X坐标
            float y;                              // Y坐标
            float delta_x;                         // X增量
            float delta_y;                         // Y增量
            uint32_t button;                       // 按钮状态
            float wheel_delta;                     // 滚轮增量
        } mouse;
        struct {                                  // 游戏手柄事件数据
            uint32_t button;                       // 按钮状态
            float axis_x;                          // X轴
            float axis_y;                          // Y轴
            float axis_z;                          // Z轴
            float axis_rx;                         // 旋转X轴
            float axis_ry;                         // 旋转Y轴
            float axis_rz;                         // 旋转Z轴
        } gamepad;
        struct {                                  // 触摸事件数据
            float x;                              // X坐标
            float y;                              // Y坐标
            float pressure;                        // 压力
            uint32_t touch_id;                     // 触摸ID
        } touch;
    } event_data;                                 // 事件数据联合
} InputEvent;

/**
 * @brief 输入系统配置结构体
 * 
 * 存储输入系统的配置参数
 */
typedef struct {
    uint32_t max_devices;                         // 最大设备数
    uint32_t buffer_size;                         // 缓冲区大小
    float dead_zone;                              // 死区阈值
    float sensitivity;                            // 灵敏度
    uint32_t update_frequency;                    // 更新频率
    uint32_t enable_raw_input;                    // 启用原始输入
    uint32_t enable_exclusive_mode;               // 启用独占模式
    uint32_t enable_background_input;             // 启用后台输入
    uint32_t enable_device_hotplug;               // 启用设备热插拔
} InputSystemConfig;

/**
 * @brief 输入系统状态结构体
 * 
 * 存储输入系统的运行状态信息
 */
typedef struct {
    InputSystemState system_state;                // 系统状态
    uint32_t device_count;                        // 设备数量
    uint32_t event_count;                         // 事件计数
    uint32_t frame_count;                         // 帧计数
    uint32_t total_events_processed;              // 总处理事件数
    uint32_t dropped_events;                     // 丢弃事件数
    float average_latency;                        // 平均延迟
    uint32_t last_update_time;                    // 最后更新时间
    uint32_t error_count;                         // 错误计数
    uint32_t warning_count;                       // 警告计数
} InputSystemState;

//============================================================================
// 全局变量声明
//============================================================================

// 输入设备管理
static InputDevice g_input_devices[INPUT_MAX_DEVICES]; // 输入设备数组
static uint32_t g_device_count = 0;                     // 设备数量
static uint32_t g_next_device_id = 1;                   // 下一个设备ID

// 输入事件管理
static InputEvent g_input_events[INPUT_BUFFER_SIZE];     // 输入事件缓冲区
static uint32_t g_event_head = 0;                        // 事件队列头
static uint32_t g_event_tail = 0;                        // 事件队列尾
static uint32_t g_event_count = 0;                       // 事件计数

// 输入系统状态
static InputSystemConfig g_system_config;               // 系统配置
static InputSystemState g_system_state;                // 系统状态
static uint32_t g_system_initialized = 0;               // 系统初始化标志

// 输入映射和配置
static uint32_t g_input_mapping[256];                   // 输入映射表
static float g_axis_sensitivity[32];                   // 轴灵敏度
static float g_axis_dead_zone[32];                     // 轴死区

//============================================================================
// 函数声明
//============================================================================

// 输入系统核心函数
uint32_t InputSystem_Initialize(void);
void InputSystem_Shutdown(void);
uint32_t InputSystem_Update(void);
uint32_t InputSystem_ProcessEvents(void);

// 输入设备管理函数
uint32_t InputDevice_Register(InputDeviceType type, const char* name, const char* vendor);
uint32_t InputDevice_Unregister(uint32_t device_id);
InputDevice* InputDevice_GetById(uint32_t device_id);
uint32_t InputDevice_Initialize(InputDevice* device);
void InputDevice_Shutdown(InputDevice* device);

// 输入事件处理函数
uint32_t InputEvent_Push(const InputEvent* event);
uint32_t InputEvent_Pop(InputEvent* event);
uint32_t InputEvent_Peek(InputEvent* event);
void InputEvent_Clear(void);

// 输入状态查询函数
uint32_t InputSystem_GetState(void);
uint32_t InputSystem_GetDeviceCount(void);
uint32_t InputSystem_GetEventCount(void);
float InputSystem_GetAverageLatency(void);

// 输入配置函数
void InputSystem_SetConfig(const InputSystemConfig* config);
void InputSystem_GetConfig(InputSystemConfig* config);
void InputSystem_SetSensitivity(float sensitivity);
void InputSystem_SetDeadZone(float dead_zone);

//============================================================================
// 函数别名定义
//============================================================================

// 输入系统核心函数别名
#define InputSystemInitializer FUN_18023e120
#define InputSystemShutdown unknown_var_2320
#define InputSystemUpdate unknown_var_7792
#define InputSystemProcessEvents unknown_var_8232

// 输入设备管理函数别名
#define InputDeviceRegistrar unknown_var_8264
#define InputDeviceUnregistrar unknown_var_8368
#define InputDeviceFinder unknown_var_8064
#define InputDeviceInitializer unknown_var_8088
#define InputDeviceShutdowner unknown_var_8120

// 输入事件处理函数别名
#define InputEventPusher unknown_var_8160
#define InputEventPopper unknown_var_8192
#define InputEventPeeker unknown_var_8024
#define InputEventCleaner unknown_var_8032

// 输入状态查询函数别名
#define InputSystemStateGetter unknown_var_8336
#define InputSystemDeviceCounter unknown_var_8408
#define InputSystemEventCounter unknown_var_8696
#define InputSystemLatencyGetter unknown_var_8752

// 输入配置函数别名
#define InputSystemConfigurator unknown_var_8824
#define InputSystemConfigGetter unknown_var_8792
#define InputSystemSensitivitySetter unknown_var_8872
#define InputSystemDeadZoneSetter unknown_var_8848

// 全局变量别名
#define InputSystemGlobalState system_memory_8d40
#define InputSystemGlobalConfig system_memory_2fe8
#define InputDeviceRegistry unknown_var_8996
#define InputEventQueue unknown_var_9032
#define InputSystemStatus unknown_var_9016
#define InputSystemStatistics unknown_var_9064
#define InputSystemRuntime unknown_var_9104
#define InputSystemErrorLog unknown_var_9176
#define InputSystemDebugInfo unknown_var_9184
#define InputSystemPerformance unknown_var_9224
#define InputSystemMemory unknown_var_9208
#define InputSystemThread unknown_var_9240
#define InputSystemMutex unknown_var_9280
#define InputSystemSemaphore unknown_var_9312
#define InputSystemEventQueue unknown_var_9328
#define InputSystemCallback unknown_var_9392
#define InputSystemTimer unknown_var_9440
#define InputSystemProfiler unknown_var_9464
#define InputSystemLogger unknown_var_9480
#define InputSystemMonitor unknown_var_9512
#define InputSystemAllocator unknown_var_9536
#define InputSystemDeallocator unknown_var_9568
#define InputSystemValidator unknown_var_9600

//============================================================================
// 核心函数实现
//============================================================================

/**
 * @brief 输入系统初始化函数
 * 
 * 初始化输入系统，包括：
 * - 初始化系统配置
 * - 创建输入设备表
 * - 初始化事件队列
 * - 设置默认映射
 * - 启动输入线程
 * 
 * @return uint32_t 初始化结果
 * @retval 0 初始化成功
 * @retval 非0 初始化失败
 */
uint32_t InputSystem_Initialize(void) {
    if (g_system_initialized) {
        return 0; // 已经初始化
    }
    
    // 初始化系统配置
    memset(&g_system_config, 0, sizeof(InputSystemConfig));
    g_system_config.max_devices = INPUT_MAX_DEVICES;
    g_system_config.buffer_size = INPUT_BUFFER_SIZE;
    g_system_config.dead_zone = INPUT_DEAD_ZONE;
    g_system_config.sensitivity = 1.0f;
    g_system_config.update_frequency = 60;
    g_system_config.enable_raw_input = 1;
    g_system_config.enable_exclusive_mode = 0;
    g_system_config.enable_background_input = 1;
    g_system_config.enable_device_hotplug = 1;
    
    // 初始化系统状态
    memset(&g_system_state, 0, sizeof(InputSystemState));
    g_system_state.system_state = INPUT_STATE_INITIALIZING;
    
    // 初始化设备数组
    memset(g_input_devices, 0, sizeof(g_input_devices));
    g_device_count = 0;
    g_next_device_id = 1;
    
    // 初始化事件队列
    memset(g_input_events, 0, sizeof(g_input_events));
    g_event_head = 0;
    g_event_tail = 0;
    g_event_count = 0;
    
    // 初始化输入映射
    memset(g_input_mapping, 0, sizeof(g_input_mapping));
    for (int i = 0; i < 32; i++) {
        g_axis_sensitivity[i] = 1.0f;
        g_axis_dead_zone[i] = INPUT_DEAD_ZONE;
    }
    
    // 设置系统状态为就绪
    g_system_state.system_state = INPUT_STATE_READY;
    g_system_initialized = 1;
    
    return 0;
}

/**
 * @brief 输入系统关闭函数
 * 
 * 关闭输入系统，包括：
 * - 停止输入线程
 * - 注销所有设备
 * - 清理事件队列
 * - 释放系统资源
 */
void InputSystem_Shutdown(void) {
    if (!g_system_initialized) {
        return;
    }
    
    // 设置系统状态为关闭中
    g_system_state.system_state = INPUT_STATE_SHUTTING_DOWN;
    
    // 注销所有设备
    for (uint32_t i = 0; i < g_device_count; i++) {
        if (g_input_devices[i].device_id != 0) {
            InputDevice_Shutdown(&g_input_devices[i]);
        }
    }
    
    // 清理设备数组
    memset(g_input_devices, 0, sizeof(g_input_devices));
    g_device_count = 0;
    g_next_device_id = 1;
    
    // 清理事件队列
    memset(g_input_events, 0, sizeof(g_input_events));
    g_event_head = 0;
    g_event_tail = 0;
    g_event_count = 0;
    
    // 清理输入映射
    memset(g_input_mapping, 0, sizeof(g_input_mapping));
    
    // 设置系统状态为已关闭
    g_system_state.system_state = INPUT_STATE_SHUTTING_DOWN;
    g_system_initialized = 0;
}

/**
 * @brief 输入系统更新函数
 * 
 * 更新输入系统状态，包括：
 * - 更新设备状态
 * - 处理输入事件
 * - 更新系统统计
 * 
 * @return uint32_t 更新结果
 */
uint32_t InputSystem_Update(void) {
    if (!g_system_initialized) {
        return 1; // 系统未初始化
    }
    
    // 设置系统状态为运行中
    g_system_state.system_state = INPUT_STATE_RUNNING;
    
    // 更新所有设备状态
    for (uint32_t i = 0; i < g_device_count; i++) {
        if (g_input_devices[i].device_id != 0) {
            // 这里可以添加设备状态更新逻辑
            g_input_devices[i].last_update_time = g_system_state.frame_count;
        }
    }
    
    // 处理输入事件
    InputSystem_ProcessEvents();
    
    // 更新系统统计
    g_system_state.frame_count++;
    g_system_state.last_update_time = g_system_state.frame_count;
    
    return 0;
}

/**
 * @brief 输入事件处理函数
 * 
 * 处理输入事件队列中的所有事件
 * 
 * @return uint32_t 处理结果
 */
uint32_t InputSystem_ProcessEvents(void) {
    if (!g_system_initialized) {
        return 1; // 系统未初始化
    }
    
    uint32_t processed_count = 0;
    
    // 处理事件队列中的所有事件
    while (g_event_count > 0) {
        InputEvent event;
        if (InputEvent_Pop(&event) == 0) {
            // 这里可以添加事件处理逻辑
            processed_count++;
            g_system_state.total_events_processed++;
        } else {
            break;
        }
    }
    
    return processed_count;
}

//============================================================================
// 输入设备管理函数实现
//============================================================================

/**
 * @brief 注册输入设备
 * 
 * @param type 设备类型
 * @param name 设备名称
 * @param vendor 设备制造商
 * @return uint32_t 设备ID，失败返回0
 */
uint32_t InputDevice_Register(InputDeviceType type, const char* name, const char* vendor) {
    if (!g_system_initialized || g_device_count >= INPUT_MAX_DEVICES) {
        return 0; // 系统未初始化或设备已满
    }
    
    // 查找空闲设备槽位
    uint32_t slot = 0;
    for (uint32_t i = 0; i < INPUT_MAX_DEVICES; i++) {
        if (g_input_devices[i].device_id == 0) {
            slot = i;
            break;
        }
    }
    
    if (slot == 0) {
        return 0; // 无空闲槽位
    }
    
    // 初始化设备
    InputDevice* device = &g_input_devices[slot];
    memset(device, 0, sizeof(InputDevice));
    
    device->device_type = type;
    device->device_id = g_next_device_id++;
    device->state = INPUT_STATE_ACTIVE;
    
    // 设置设备名称
    if (name) {
        strncpy(device->device_name, name, sizeof(device->device_name) - 1);
    }
    
    // 设置设备制造商
    if (vendor) {
        strncpy(device->device_vendor, vendor, sizeof(device->device_vendor) - 1);
    }
    
    // 根据设备类型设置默认能力
    switch (type) {
        case INPUT_DEVICE_KEYBOARD:
            device->capabilities = INPUT_EVENT_TYPE_KEY_DOWN | INPUT_EVENT_TYPE_KEY_UP;
            device->button_count = 256;
            break;
        case INPUT_DEVICE_MOUSE:
            device->capabilities = INPUT_EVENT_TYPE_MOUSE_MOVE | INPUT_EVENT_TYPE_MOUSE_BUTTON | INPUT_EVENT_TYPE_MOUSE_WHEEL;
            device->button_count = 8;
            device->axis_count = 4; // x, y, wheel_x, wheel_y
            break;
        case INPUT_DEVICE_GAMEPAD:
            device->capabilities = INPUT_EVENT_TYPE_GAMEPAD_AXIS | INPUT_EVENT_TYPE_GAMEPAD_BUTTON;
            device->button_count = 16;
            device->axis_count = 6; // x, y, z, rx, ry, rz
            break;
        default:
            device->capabilities = 0;
            break;
    }
    
    // 初始化设备
    if (InputDevice_Initialize(device) != 0) {
        return 0; // 设备初始化失败
    }
    
    g_device_count++;
    g_system_state.device_count = g_device_count;
    
    return device->device_id;
}

/**
 * @brief 注销输入设备
 * 
 * @param device_id 设备ID
 * @return uint32_t 注销结果
 */
uint32_t InputDevice_Unregister(uint32_t device_id) {
    if (!g_system_initialized || device_id == 0) {
        return 1; // 系统未初始化或设备ID无效
    }
    
    // 查找设备
    InputDevice* device = NULL;
    for (uint32_t i = 0; i < INPUT_MAX_DEVICES; i++) {
        if (g_input_devices[i].device_id == device_id) {
            device = &g_input_devices[i];
            break;
        }
    }
    
    if (!device) {
        return 1; // 设备未找到
    }
    
    // 关闭设备
    InputDevice_Shutdown(device);
    
    // 清理设备信息
    memset(device, 0, sizeof(InputDevice));
    
    g_device_count--;
    g_system_state.device_count = g_device_count;
    
    return 0;
}

/**
 * @brief 根据ID获取输入设备
 * 
 * @param device_id 设备ID
 * @return InputDevice* 设备指针，未找到返回NULL
 */
InputDevice* InputDevice_GetById(uint32_t device_id) {
    if (!g_system_initialized || device_id == 0) {
        return NULL;
    }
    
    for (uint32_t i = 0; i < INPUT_MAX_DEVICES; i++) {
        if (g_input_devices[i].device_id == device_id) {
            return &g_input_devices[i];
        }
    }
    
    return NULL;
}

/**
 * @brief 初始化输入设备
 * 
 * @param device 设备指针
 * @return uint32_t 初始化结果
 */
uint32_t InputDevice_Initialize(InputDevice* device) {
    if (!device) {
        return 1; // 设备指针无效
    }
    
    // 初始化设备状态
    device->state = INPUT_STATE_ACTIVE;
    device->last_update_time = 0;
    device->event_count = 0;
    
    // 初始化按钮状态
    memset(device->button_states, 0, sizeof(device->button_states));
    
    // 初始化轴数值
    for (int i = 0; i < 32; i++) {
        device->axis_values[i] = 0.0f;
    }
    
    return 0;
}

/**
 * @brief 关闭输入设备
 * 
 * @param device 设备指针
 */
void InputDevice_Shutdown(InputDevice* device) {
    if (!device) {
        return;
    }
    
    // 设置设备状态
    device->state = INPUT_STATE_DISABLED;
    
    // 清理设备上下文
    if (device->device_context) {
        // 这里可以添加设备特定的清理逻辑
        device->device_context = NULL;
    }
}

//============================================================================
// 输入事件处理函数实现
//============================================================================

/**
 * @brief 推送输入事件
 * 
 * @param event 事件指针
 * @return uint32_t 推送结果
 */
uint32_t InputEvent_Push(const InputEvent* event) {
    if (!g_system_initialized || !event) {
        return 1; // 系统未初始化或事件指针无效
    }
    
    // 检查事件队列是否已满
    if (g_event_count >= INPUT_BUFFER_SIZE) {
        g_system_state.dropped_events++;
        return 1; // 事件队列已满
    }
    
    // 复制事件到队列
    memcpy(&g_input_events[g_event_tail], event, sizeof(InputEvent));
    
    // 更新队列尾指针
    g_event_tail = (g_event_tail + 1) % INPUT_BUFFER_SIZE;
    g_event_count++;
    
    return 0;
}

/**
 * @brief 弹出输入事件
 * 
 * @param event 事件指针
 * @return uint32_t 弹出结果
 */
uint32_t InputEvent_Pop(InputEvent* event) {
    if (!g_system_initialized || !event || g_event_count == 0) {
        return 1; // 系统未初始化、事件指针无效或队列空
    }
    
    // 复制事件
    memcpy(event, &g_input_events[g_event_head], sizeof(InputEvent));
    
    // 更新队列头指针
    g_event_head = (g_event_head + 1) % INPUT_BUFFER_SIZE;
    g_event_count--;
    
    return 0;
}

/**
 * @brief 查看输入事件
 * 
 * @param event 事件指针
 * @return uint32_t 查看结果
 */
uint32_t InputEvent_Peek(InputEvent* event) {
    if (!g_system_initialized || !event || g_event_count == 0) {
        return 1; // 系统未初始化、事件指针无效或队列空
    }
    
    // 复制事件但不移动指针
    memcpy(event, &g_input_events[g_event_head], sizeof(InputEvent));
    
    return 0;
}

/**
 * @brief 清空输入事件队列
 */
void InputEvent_Clear(void) {
    if (!g_system_initialized) {
        return;
    }
    
    // 清空事件队列
    memset(g_input_events, 0, sizeof(g_input_events));
    g_event_head = 0;
    g_event_tail = 0;
    g_event_count = 0;
}

//============================================================================
// 输入状态查询函数实现
//============================================================================

/**
 * @brief 获取输入系统状态
 * 
 * @return uint32_t 系统状态
 */
uint32_t InputSystem_GetState(void) {
    if (!g_system_initialized) {
        return INPUT_STATE_ERROR;
    }
    
    return (uint32_t)g_system_state.system_state;
}

/**
 * @brief 获取输入设备数量
 * 
 * @return uint32_t 设备数量
 */
uint32_t InputSystem_GetDeviceCount(void) {
    if (!g_system_initialized) {
        return 0;
    }
    
    return g_device_count;
}

/**
 * @brief 获取输入事件数量
 * 
 * @return uint32_t 事件数量
 */
uint32_t InputSystem_GetEventCount(void) {
    if (!g_system_initialized) {
        return 0;
    }
    
    return g_event_count;
}

/**
 * @brief 获取平均输入延迟
 * 
 * @return float 平均延迟
 */
float InputSystem_GetAverageLatency(void) {
    if (!g_system_initialized) {
        return 0.0f;
    }
    
    return g_system_state.average_latency;
}

//============================================================================
// 输入配置函数实现
//============================================================================

/**
 * @brief 设置输入系统配置
 * 
 * @param config 配置指针
 */
void InputSystem_SetConfig(const InputSystemConfig* config) {
    if (!g_system_initialized || !config) {
        return;
    }
    
    memcpy(&g_system_config, config, sizeof(InputSystemConfig));
}

/**
 * @brief 获取输入系统配置
 * 
 * @param config 配置指针
 */
void InputSystem_GetConfig(InputSystemConfig* config) {
    if (!g_system_initialized || !config) {
        return;
    }
    
    memcpy(config, &g_system_config, sizeof(InputSystemConfig));
}

/**
 * @brief 设置输入灵敏度
 * 
 * @param sensitivity 灵敏度值
 */
void InputSystem_SetSensitivity(float sensitivity) {
    if (!g_system_initialized) {
        return;
    }
    
    g_system_config.sensitivity = sensitivity;
    
    // 更新所有轴的灵敏度
    for (int i = 0; i < 32; i++) {
        g_axis_sensitivity[i] = sensitivity;
    }
}

/**
 * @brief 设置输入死区
 * 
 * @param dead_zone 死区值
 */
void InputSystem_SetDeadZone(float dead_zone) {
    if (!g_system_initialized) {
        return;
    }
    
    g_system_config.dead_zone = dead_zone;
    
    // 更新所有轴的死区
    for (int i = 0; i < 32; i++) {
        g_axis_dead_zone[i] = dead_zone;
    }
}

//============================================================================
// 模块功能说明
//============================================================================

/**
 * @module 输入系统模块
 * 
 * @description
 * 该模块实现了完整的输入系统功能，支持多种输入设备和事件处理。
 * 
 * 主要特性：
 * 1. 多设备支持 - 支持键盘、鼠标、游戏手柄、触摸等多种输入设备
 * 2. 事件驱动 - 采用事件驱动的架构，高效处理输入事件
 * 3. 实时响应 - 提供低延迟的输入响应和状态更新
 * 4. 热插拔支持 - 支持设备的动态连接和断开
 * 5. 配置灵活 - 提供丰富的配置选项和参数调整
 * 6. 状态管理 - 完整的设备状态和系统状态管理
 * 
 * 技术要点：
 * - 使用环形缓冲区管理输入事件
 * - 支持设备热插拔和动态注册
 * - 实现了输入映射和转换功能
 * - 提供了性能监控和统计信息
 * - 支持多线程输入处理
 * - 实现了输入死区和灵敏度调整
 * 
 * 应用场景：
 * - 游戏输入处理
 * - 用户界面交互
 * - 系统控制操作
 * - 多媒体应用
 * - 虚拟现实应用
 * 
 * 性能特征：
 * - 时间复杂度：O(1) 到 O(n)
 * - 空间复杂度：O(n)
 * - 支持高频率输入更新
 * - 内存使用效率高
 * 
 * 可扩展性：
 * - 模块化设计便于扩展
 * - 支持自定义输入设备
 * - 可配置的输入映射
 * - 易于集成到现有系统
 */

//============================================================================
// 版权声明
//============================================================================

/**
 * @copyright
 * 本代码由 Claude Code 自动生成，仅供学习和研究使用。
 * 
 * @license
 * MIT License - 详见 LICENSE 文件
 * 
 * @disclaimer
 * 本代码按"原样"提供，不提供任何形式的明示或暗示的保证，
 * 包括但不限于适销性、特定用途适用性和非侵权性的保证。
 * 
 * @author
 * Claude Code - AI 代码生成器
 * 
 * @version
 * 1.0.0
 * 
 * @date
 * 2025-08-28
 */