/**
 * TaleWorlds.Native - 系统常量和类型定义
 * 
 * 文件说明：
 * 这是 Mount & Blade II: Bannerlord Native DLL 的系统常量和类型定义
 * 包含基础类型别名、系统常量、结构体定义等
 * 
 * 创建时间：2025-08-28
 * 版本：1.0
 */

#ifndef TALEWORLDS_NATIVE_TYPES_H
#define TALEWORLDS_NATIVE_TYPES_H

#include <stdint.h>
#include <stddef.h>

/*=============================================================================
 * 基础类型别名
 *=============================================================================*/

/* 标准整数类型 */
typedef uint8_t undefined1;      /* 8位无符号整数 */
typedef uint16_t undefined2;     /* 16位无符号整数 */
typedef uint32_t undefined4;     /* 32位无符号整数 */
typedef uint64_t undefined8;     /* 64位无符号整数 */

/* 指针和大小类型 */
typedef uintptr_t undefined8;    /* 指针大小整数 */
typedef size_t undefined8;       /* 大小类型 */

/* 浮点类型 */
typedef float float32_t;         /* 32位浮点数 */
typedef double float64_t;        /* 64位浮点数 */

/*=============================================================================
 * 系统常量定义
 *=============================================================================*/

/* 系统限制 */
#define MAX_ENTITIES             0x1000      /* 最大实体数量 (4096) */
#define MAX_TEXTURES            0x800       /* 最大纹理数量 (2048) */
#define MAX_MESHES              0x400       /* 最大网格数量 (1024) */
#define MAX_SHADERS             0x200       /* 最大着色器数量 (512) */
#define MAX_PARTICLES           0x1000      /* 最大粒子数量 (4096) */
#define MAX_LIGHTS              0x100       /* 最大光源数量 (256) */
#define MAX_CAMERAS             0x10        /* 最大相机数量 (16) */
#define MAX_MATERIALS           0x800       /* 最大材质数量 (2048) */
#define MAX_ANIMATIONS          0x1000      /* 最大动画数量 (4096) */

/* 内存管理常量 */
#define MEMORY_ALIGNMENT        16          /* 内存对齐大小 (16字节) */
#define CACHE_LINE_SIZE         64          /* CPU缓存行大小 */
#define PAGE_SIZE               4096        /* 内存页大小 */
#define HEAP_INITIAL_SIZE       0x1000000   /* 堆初始大小 (16MB) */
#define HEAP_MAX_SIZE           0x10000000  /* 堆最大大小 (256MB) */

/* 渲染系统常量 */
#define RENDER_TARGET_WIDTH     1920        /* 渲染目标宽度 */
#define RENDER_TARGET_HEIGHT    1080        /* 渲染目标高度 */
#define RENDER_TARGET_FORMAT    0x22        /* 渲染目标格式 (DXGI_FORMAT_R8G8B8A8_UNORM) */
#define DEPTH_BUFFER_FORMAT     0x2a        /* 深度缓冲区格式 (DXGI_FORMAT_D32_FLOAT) */
#define MAX_RENDER_TARGETS      8           /* 最大渲染目标数量 */
#define MAX_VIEWPORTS           4           /* 最大视口数量 */

/* 物理系统常量 */
#define GRAVITY                 9.81f       /* 重力加速度 (m/s²) */
#define MAX_PHYSICS_ITERATIONS  10          /* 物理迭代次数 */
#define COLLISION_TOLERANCE     0.01f       /* 碰撞容差 */
#define MAX_PHYSICS_OBJECTS     0x2000      /* 最大物理对象数量 */
#define PHYSICS_TIME_STEP       0.016f      /* 物理时间步长 (60Hz) */

/* 网络系统常量 */
#define MAX_PLAYERS             200         /* 最大玩家数量 */
#define MAX_CONNECTIONS         1000        /* 最大连接数 */
#define NETWORK_TIMEOUT         30000       /* 网络超时时间 (毫秒) */
#define PACKET_SIZE             1400        /* 网络包大小 */
#define MAX_NETWORK_OBJECTS     0x4000      /* 最大网络对象数量 */

/* 音频系统常量 */
#define MAX_AUDIO_CHANNELS      128         /* 最大音频通道数 */
#define MAX_SOUND_SOURCES       64          /* 最大音源数量 */
#define AUDIO_SAMPLE_RATE       44100       /* 音频采样率 */
#define MAX_AUDIO_BUFFERS       16          /* 最大音频缓冲区数量 */

/* 输入系统常量 */
#define MAX_INPUT_DEVICES       32          /* 最大输入设备数量 */
#define MAX_BUTTONS             256         /* 最大按钮数量 */
#define MAX_AXES                16          /* 最大轴数量 */
#define INPUT_BUFFER_SIZE       1024        /* 输入缓冲区大小 */

/*=============================================================================
 * 系统状态标志位
 *=============================================================================*/

/* 系统状态标志 */
#define SYSTEM_INITIALIZED      0x01        /* 系统已初始化 */
#define SYSTEM_RUNNING          0x02        /* 系统正在运行 */
#define SYSTEM_PAUSED           0x04        /* 系统已暂停 */
#define SYSTEM_SHUTTING_DOWN    0x08        /* 系统正在关闭 */

/* 渲染系统状态 */
#define RENDER_INITIALIZED      0x01        /* 渲染系统已初始化 */
#define RENDER_DEVICE_READY     0x02        /* 渲染设备就绪 */
#define RENDER_VSYNC_ENABLED    0x04        /* 垂直同步已启用 */
#define RENDER_FULLSCREEN       0x08        /* 全屏模式 */

/* 物理系统状态 */
#define PHYSICS_INITIALIZED     0x01        /* 物理系统已初始化 */
#define PHYSICS_SIMULATING      0x02        /* 物理正在模拟 */
#define PHYSICS_PAUSED          0x04        /* 物理已暂停 */

/* 网络系统状态 */
#define NETWORK_INITIALIZED     0x01        /* 网络系统已初始化 */
#define NETWORK_CONNECTED       0x02        /* 网络已连接 */
#define NETWORK_HOSTING         0x04        /* 正在托管 */
#define NETWORK_CLIENT          0x08        /* 客户端模式 */

/*=============================================================================
 * 错误代码定义
 *=============================================================================*/

/* 通用错误代码 */
#define SUCCESS                 0x00000000  /* 操作成功 */
#define ERROR_INVALID_PARAMETER  0x80000001  /* 无效参数 */
#define ERROR_OUT_OF_MEMORY     0x80000002  /* 内存不足 */
#define ERROR_NOT_INITIALIZED   0x80000003  /* 未初始化 */
#define ERROR_ALREADY_EXISTS    0x80000004  /* 已存在 */
#define ERROR_NOT_FOUND         0x80000005  /* 未找到 */
#define ERROR_ACCESS_DENIED     0x80000006  /* 访问被拒绝 */
#define ERROR_TIMEOUT           0x80000007  /* 超时 */
#define ERROR_BUSY              0x80000008  /* 设备忙 */
#define ERROR_FAILED            0x80000009  /* 操作失败 */

/* 渲染系统错误 */
#define ERROR_RENDER_DEVICE     0x80010000  /* 渲染设备错误 */
#define ERROR_SHADER_COMPILE    0x80010001  /* 着色器编译错误 */
#define ERROR_TEXTURE_LOAD      0x80010002  /* 纹理加载错误 */
#define ERROR_MESH_CREATE       0x80010003  /* 网格创建错误 */

/* 物理系统错误 */
#define ERROR_PHYSICS_INIT      0x80020000  /* 物理初始化错误 */
#define ERROR_COLLISION         0x80020001  /* 碰撞检测错误 */
#define ERROR_CONSTRAINT        0x80020002  /* 约束错误 */

/* 网络系统错误 */
#define ERROR_NETWORK_INIT      0x80030000  /* 网络初始化错误 */
#define ERROR_CONNECTION        0x80030001  /* 连接错误 */
#define ERROR_PACKET            0x80030002  /* 数据包错误 */

/*=============================================================================
 * 结构体定义
 *=============================================================================*/

/* 基础向量结构 */
typedef struct {
    float32_t x;
    float32_t y;
    float32_t z;
} Vector3;

/* 四元数结构 */
typedef struct {
    float32_t x;
    float32_t y;
    float32_t z;
    float32_t w;
} Quaternion;

/* 矩阵结构 */
typedef struct {
    float32_t m[4][4];
} Matrix4x4;

/* 颜色结构 */
typedef struct {
    float32_t r;
    float32_t g;
    float32_t b;
    float32_t a;
} Color;

/* 变换结构 */
typedef struct {
    Vector3 position;
    Quaternion rotation;
    Vector3 scale;
} Transform;

/* 相机结构 */
typedef struct {
    Transform transform;
    float32_t fov;
    float32_t nearPlane;
    float32_t farPlane;
    float32_t aspectRatio;
} Camera;

/* 实体结构 */
typedef struct {
    uint32_t id;
    Transform transform;
    uint32_t components[16];
    uint32_t componentCount;
} Entity;

/* 材质结构 */
typedef struct {
    uint32_t id;
    Color diffuse;
    Color specular;
    float32_t shininess;
    uint32_t textureId;
} Material;

/* 光源结构 */
typedef struct {
    uint32_t id;
    Transform transform;
    Color color;
    float32_t intensity;
    float32_t range;
    uint32_t type;
} Light;

/*=============================================================================
 * 函数指针类型定义
 *=============================================================================*/

/* 系统回调函数类型 */
typedef void (*SystemCallback)(void);
typedef int (*UpdateCallback)(float deltaTime);
typedef void (*RenderCallback)(void);
typedef void (*EventCallback)(void* eventData);

/* 网络回调函数类型 */
typedef void (*NetworkConnectCallback)(uint32_t clientId);
typedef void (*NetworkDisconnectCallback)(uint32_t clientId);
typedef void (*NetworkReceiveCallback)(uint32_t clientId, void* data, uint32_t size);

/* 输入回调函数类型 */
typedef void (*InputButtonCallback)(uint32_t button, bool pressed);
typedef void (*InputAxisCallback)(uint32_t axis, float value);

/*=============================================================================
 * 宏定义
 *=============================================================================*/

/* 安全宏 */
#define SAFE_DELETE(ptr)        if ((ptr) != NULL) { delete (ptr); (ptr) = NULL; }
#define SAFE_FREE(ptr)          if ((ptr) != NULL) { free (ptr); (ptr) = NULL; }
#define SAFE_RELEASE(ptr)       if ((ptr) != NULL) { (ptr)->Release(); (ptr) = NULL; }

/* 数组大小宏 */
#define ARRAY_SIZE(arr)         (sizeof(arr) / sizeof((arr)[0]))

/* 偏移量宏 */
#define OFFSET_OF(type, member) ((size_t)&((type*)0)->member)

/* 最小/最大值宏 */
#define MIN(a, b)               ((a) < (b) ? (a) : (b))
#define MAX(a, b)               ((a) > (b) ? (a) : (b))
#define CLAMP(value, min, max)  (MIN(MAX(value, min), max))

/* 位操作宏 */
#define BIT(n)                  (1 << (n))
#define SET_BIT(flags, bit)     ((flags) |= (bit))
#define CLEAR_BIT(flags, bit)   ((flags) &= ~(bit))
#define IS_BIT_SET(flags, bit)  (((flags) & (bit)) != 0)

/*=============================================================================
 * 对齐和包装
 *=============================================================================*/

/* 内存对齐宏 */
#define ALIGN_TO(size, align)   (((size) + (align) - 1) & ~((align) - 1))
#define IS_ALIGNED(ptr, align)  (((uintptr_t)(ptr) & ((align) - 1)) == 0)

/* 包指令 */
#pragma pack(push, 1)  /* 1字节对齐 */

/* 紧凑数据结构 */
typedef struct {
    uint16_t x;
    uint16_t y;
    uint16_t z;
    uint16_t w;
} PackedVector4;

#pragma pack(pop)   /* 恢复默认对齐 */

#endif /* TALEWORLDS_NATIVE_TYPES_H */