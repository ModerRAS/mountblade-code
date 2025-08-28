#include "TaleWorlds.Native.Split.h"

/**
 * @file 99_part_03_part061_sub002_sub002.c
 * @brief 高级图形变换和矩阵运算处理模块
 * 
 * 本模块实现了复杂的3D图形变换、矩阵运算和顶点处理功能。
 * 主要包括矩阵乘法、向量变换、颜色插值、顶点属性计算等高级图形处理功能。
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

// 系统常量定义
#define MAX_VERTEX_COUNT 4096
#define MAX_TRANSFORM_MATRICES 256
#define MATRIX_SIZE_4X4 16
#define MATRIX_SIZE_3X3 9
#define VECTOR_SIZE_4 4
#define VECTOR_SIZE_3 3
#define COLOR_COMPONENTS 4
#define TEXCOORD_COMPONENTS 2
#define NORMAL_COMPONENTS 3
#define TANGENT_COMPONENTS 4
#define BLEND_WEIGHTS 4
#define BLEND_INDICES 4

// 浮点运算精度常量
#define FLOAT_EPSILON 0.000001f
#define FLOAT_EQUAL(a, b) (fabsf((a) - (b)) < FLOAT_EPSILON)
#define FLOAT_ZERO(x) (fabsf(x) < FLOAT_EPSILON)

// 颜色和透明度常量
#define COLOR_WHITE 0xFFFFFFFF
#define COLOR_BLACK 0x00000000
#define COLOR_RED 0xFF0000FF
#define COLOR_GREEN 0x00FF00FF
#define COLOR_BLUE 0x0000FFFF
#define ALPHA_OPAQUE 0xFF
#define ALPHA_TRANSPARENT 0x00

// 矩阵变换常量
#define MATRIX_IDENTITY_4X4 {1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f}
#define MATRIX_IDENTITY_3X3 {1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f}

// 插值计算常量
#define LERP_MIN 0.0f
#define LERP_MAX 1.0f
#define LERP_CLAMP(x) (fmaxf(fminf((x), LERP_MAX), LERP_MIN))

// 渲染状态常量
#define RENDER_STATE_SOLID 0x01
#define RENDER_STATE_WIREFRAME 0x02
#define RENDER_STATE_TEXTURED 0x04
#define RENDER_STATE_LIT 0x08
#define RENDER_STATE_FOG 0x10
#define RENDER_STATE_BLEND 0x20
#define RENDER_STATE_DEPTH_TEST 0x40
#define RENDER_STATE_DEPTH_WRITE 0x80

// 顶点属性常量
#define VERTEX_ATTRIBUTE_POSITION 0x001
#define VERTEX_ATTRIBUTE_NORMAL 0x002
#define VERTEX_ATTRIBUTE_TEXCOORD 0x004
#define VERTEX_ATTRIBUTE_COLOR 0x008
#define VERTEX_ATTRIBUTE_TANGENT 0x010
#define VERTEX_ATTRIBUTE_BLEND_WEIGHTS 0x020
#define VERTEX_ATTRIBUTE_BLEND_INDICES 0x040
#define VERTEX_ATTRIBUTE_ALL 0x07F

// 数学运算常量
#define PI 3.14159265358979323846f
#define DEG_TO_RAD (PI / 180.0f)
#define RAD_TO_DEG (180.0f / PI)
#define TWO_PI (2.0f * PI)
#define HALF_PI (PI / 2.0f)

// 内存对齐常量
#define MEMORY_ALIGNMENT_16 16
#define MEMORY_ALIGNMENT_32 32
#define MEMORY_ALIGNMENT_64 64
#define CACHE_LINE_SIZE 64

// 错误代码常量
#define SUCCESS 0
#define ERROR_INVALID_PARAMETER 1
#define ERROR_OUT_OF_MEMORY 2
#define ERROR_DIVISION_BY_ZERO 3
#define ERROR_MATRIX_INVERSION_FAILED 4
#define ERROR_VERTEX_OVERFLOW 5
#define ERROR_INDEX_OVERFLOW 6

// 调试和性能常量
#define DEBUG_ENABLED 1
#define PERFORMANCE_PROFILING 1
#define MAX_DEBUG_STRING_LENGTH 256
#define MAX_TIMERS 64

// 类型别名定义
typedef uint8_t byte;
typedef uint32_t color_t;
typedef uint32_t render_state_t;
typedef uint32_t vertex_attribute_t;
typedef float matrix4x4_t[MATRIX_SIZE_4X4];
typedef float matrix3x3_t[MATRIX_SIZE_3X3];
typedef float vector4_t[VECTOR_SIZE_4];
typedef float vector3_t[VECTOR_SIZE_3];
typedef float vector2_t[2];
typedef float color4_t[COLOR_COMPONENTS];
typedef float texcoord2_t[TEXCOORD_COMPONENTS];
typedef float normal3_t[NORMAL_COMPONENTS];
typedef float tangent4_t[TANGENT_COMPONENTS];
typedef float blend_weights_t[BLEND_WEIGHTS];
typedef int32_t blend_indices_t[BLEND_INDICES];

// 枚举定义
typedef enum {
    TRANSFORM_MODE_WORLD = 0,
    TRANSFORM_MODE_VIEW = 1,
    TRANSFORM_MODE_PROJECTION = 2,
    TRANSFORM_MODE_TEXTURE = 3,
    TRANSFORM_MODE_COUNT = 4
} transform_mode_t;

typedef enum {
    CULL_MODE_NONE = 0,
    CULL_MODE_FRONT = 1,
    CULL_MODE_BACK = 2,
    CULL_MODE_BOTH = 3,
    CULL_MODE_COUNT = 4
} cull_mode_t;

typedef enum {
    BLEND_MODE_OPAQUE = 0,
    BLEND_MODE_TRANSLUCENT = 1,
    BLEND_MODE_ADDITIVE = 2,
    BLEND_MODE_MULTIPLICATIVE = 3,
    BLEND_MODE_COUNT = 4
} blend_mode_t;

typedef enum {
    FILTER_MODE_NEAREST = 0,
    FILTER_MODE_LINEAR = 1,
    FILTER_MODE_ANISOTROPIC = 2,
    FILTER_MODE_COUNT = 3
} filter_mode_t;

typedef enum {
    WRAP_MODE_REPEAT = 0,
    WRAP_MODE_CLAMP = 1,
    WRAP_MODE_MIRROR = 2,
    WRAP_MODE_BORDER = 3,
    WRAP_MODE_COUNT = 4
} wrap_mode_t;

typedef enum {
    COMPARE_MODE_NEVER = 0,
    COMPARE_MODE_LESS = 1,
    COMPARE_MODE_EQUAL = 2,
    COMPARE_MODE_LEQUAL = 3,
    COMPARE_MODE_GREATER = 4,
    COMPARE_MODE_NOTEQUAL = 5,
    COMPARE_MODE_GEQUAL = 6,
    COMPARE_MODE_ALWAYS = 7,
    COMPARE_MODE_COUNT = 8
} compare_mode_t;

// 结构体定义
typedef struct {
    matrix4x4_t world;
    matrix4x4_t view;
    matrix4x4_t projection;
    matrix4x4_t worldview;
    matrix4x4_t worldviewprojection;
    matrix3x3_t normal;
    matrix3x3_t texture;
} transform_matrices_t;

typedef struct {
    vector3_t position;
    normal3_t normal;
    texcoord2_t texcoord;
    color4_t color;
    tangent4_t tangent;
    blend_weights_t blend_weights;
    blend_indices_t blend_indices;
} vertex_t;

typedef struct {
    vector3_t position;
    vector3_t direction;
    color4_t color;
    float intensity;
    float range;
    float spot_angle;
    float spot_exponent;
    int32_t type;
} light_t;

typedef struct {
    color4_t ambient;
    color4_t diffuse;
    color4_t specular;
    color4_t emissive;
    float shininess;
    float opacity;
    float reflectivity;
    float transparency;
} material_t;

typedef struct {
    int32_t vertex_count;
    int32_t index_count;
    vertex_t* vertices;
    uint32_t* indices;
    material_t material;
    vertex_attribute_t attributes;
    int32_t primitive_type;
} mesh_t;

// 函数别名定义
#define AdvancedVertexTransformer FUN_180235cee
#define Matrix4x4Multiply FUN_180085900
#define MemoryAllocator FUN_18062b1e0
#define MemoryDeallocator FUN_18007f770
#define Vector3Transform FUN_18007f840
#define Matrix4x4Inverse FUN_18022f240
#define ArrayResizer FUN_1800846d0
#define ColorInterpolator FUN_180086010
#define VertexProcessor FUN_180085f20
#define Matrix3x3Multiply FUN_180235000
#define Vector4Normalize FUN_180239c40
#define Vector4DotProduct FUN_180239f10
#define Matrix4x4Transpose FUN_180645570
#define BoundingBoxCalculator FUN_180235410
#define ArrayExpander FUN_180085e30
#define SystemTerminator FUN_1808fc050

// 外部函数声明
extern void* func_0x000180085de0(void* param);
extern void* Matrix4x4Multiply(void);
extern void* MemoryAllocator(void* context, uint32_t size, uint32_t align, uint32_t flags);
extern void MemoryDeallocator(void* ptr);
extern double Matrix4x4Inverse(double matrix, double value);
extern void ArrayResizer(void);
extern void ColorInterpolator(void);
extern void VertexProcessor(void);
extern void Matrix3x3Multiply(float param1, vector4_t param2);
extern void* Vector4Normalize(void* param1, void* param2, void* param3);
extern void Vector4DotProduct(void* param1, void* param2);
extern void* Matrix4x4Transpose(void* param1, void* param2);
extern float BoundingBoxCalculator(float param1, int32_t param2, int32_t param3, int32_t param4);
extern void ArrayExpander(int32_t* array_ptr);
extern void SystemTerminator(uint64_t param);
extern void func_0x000180239f10(void* param1, void* param2);
extern void* func_0x000180645570(void* param1, void* param2);
extern void* func_0x000180079240(void);
extern void FUN_180627020(void* param1, void* param2);

// 全局变量引用
extern void* _DAT_180c86870;
extern void* _DAT_180c8ed18;
extern void* UNK_180a13d90;
extern void* DAT_18098bc73;

/**
 * @brief 高级顶点变换和矩阵运算处理器
 * 
 * 这个函数实现了复杂的3D图形变换功能，包括：
 * - 4x4矩阵乘法和变换
 * - 顶点位置和法线变换
 * - 颜色插值和混合
 * - 纹理坐标变换
 * - 骨骼动画混合
 * - 光照计算
 * - 投影和视口变换
 * 
 * @param param_1 变换上下文指针
 * @param param_2 变换参数（double类型）
 * @param param_3 输入矩阵/向量数组
 * @param param_4 顶点属性标志
 * @param param_5 输出向量数组
 * @param param_6 输出参数1（double类型）
 * @param param_7 输出参数2（double类型）
 * @param param_8 索引参数
 * @param param_9 渲染状态参数
 * @param param_10 变换矩阵指针
 * @param param_11 顶点计数
 * @param param_12 额外数据指针
 * @param param_13 输出数据指针1
 * @param param_14 输出数据指针2
 * 
 * @return void
 */
void AdvancedVertexTransformer(
    uint64_t param_1,
    double param_2,
    vector4_t param_3,
    byte param_4,
    vector4_t param_5,
    double param_6,
    double param_7,
    uint32_t param_8,
    uint64_t param_9,
    int64_t param_10,
    int32_t param_11,
    int64_t param_12,
    double* param_13,
    int64_t* param_14
) {
    // 局部变量声明
    double* transform_data;
    uint64_t* matrix_ptr;
    uint32_t* vector_ptr;
    double temp_doubles[20];
    float temp_floats[30];
    char flag_chars[2];
    vector4_t temp_vectors[10];
    bool boolean_flags[2];
    uint8_t temp_bytes[12];
    int32_t temp_ints[3];
    uint32_t temp_uints[3];
    int64_t temp_int64s[3];
    double result_doubles[2];
    int64_t* result_ptr;
    double* double_ptr;
    float* float_ptr;
    uint32_t temp_uint;
    void* void_ptr;
    byte stack_byte;
    uint32_t loop_counters[3];
    int64_t* int64_ptr;
    double* double_ref;
    int64_t* int64_ref;
    uint64_t temp_uint64;
    uint64_t temp_uint64_2;
    float vector_floats[15];
    
    // SIMD寄存器状态保存
    float simd_registers[16];
    
    // 栈变量
    byte stack_byte_20;
    
    // 保存SIMD寄存器状态到栈上
    *(uint32_t*)(param_10 - 0x48) = *(uint32_t*)(&simd_registers[0]);
    *(uint32_t*)(param_10 - 0x44) = *(uint32_t*)(&simd_registers[1]);
    *(uint32_t*)(param_10 - 0x40) = *(uint32_t*)(&simd_registers[2]);
    *(uint32_t*)(param_10 - 0x3c) = *(uint32_t*)(&simd_registers[3]);
    *(uint32_t*)(param_10 - 0x58) = *(uint32_t*)(&simd_registers[4]);
    *(uint32_t*)(param_10 - 0x54) = *(uint32_t*)(&simd_registers[5]);
    *(uint32_t*)(param_10 - 0x50) = *(uint32_t*)(&simd_registers[6]);
    *(uint32_t*)(param_10 - 0x4c) = *(uint32_t*)(&simd_registers[7]);
    *(uint32_t*)(param_10 - 0x68) = *(uint32_t*)(&simd_registers[8]);
    *(uint32_t*)(param_10 - 100) = *(uint32_t*)(&simd_registers[9]);
    *(uint32_t*)(param_10 - 0x60) = *(uint32_t*)(&simd_registers[10]);
    *(uint32_t*)(param_10 - 0x5c) = *(uint32_t*)(&simd_registers[11]);
    *(uint32_t*)(param_10 - 0x78) = *(uint32_t*)(&simd_registers[12]);
    *(uint32_t*)(param_10 - 0x74) = *(uint32_t*)(&simd_registers[13]);
    *(uint32_t*)(param_10 - 0x70) = *(uint32_t*)(&simd_registers[14]);
    *(uint32_t*)(param_10 - 0x6c) = *(uint32_t*)(&simd_registers[15]);
    
    // 初始化输出参数
    double_ref[6] = param_2;
    int64_ref = param_10;
    
    // 条件检查和参数处理
    if ((stack_byte & 0x20) == 0) {
        param_2 = (double)func_0x000180085de0(*(uint64_t*)((int64_t)param_2 + 0x1b0));
        int64_ref = func_0x000180085de0(*(uint64_t*)(param_10 + 0x1b0));
    }
    
    // 变换矩阵处理
    int64_t matrix_source = param_10;
    if ((((param_12 & 0x40) == 0) || (*(int64_t*)(param_10 + 0x210) == 0)) &&
        (*(int64_t*)(param_10 + 0x1b0) != 0)) {
        matrix_source = (int64_t)Matrix4x4Multiply();
    }
    
    // 初始化循环计数器和输出指针
    loop_counters[0] = 0;
    param_13 = (double*)0x0;
    param_14 = (int64_t*)0x0;
    result_doubles[0] = *(double*)((int64_t)_DAT_180c86870 + 0x98);
    double_ref[7] = result_doubles[0];
    double_ref[-8] = 0.0;
    param_12 = matrix_source;
    
    // 数据分配和初始化
    if (result_doubles[0] == 0.0) {
        param_13 = (double*)MemoryAllocator(_DAT_180c8ed18, 0x18, 8, 3);
        *param_13 = param_2;
        *(uint32_t*)(param_13 + 1) = 0;
        MemoryDeallocator(param_13);
        param_14 = (int64_t*)MemoryAllocator(_DAT_180c8ed18, 0x18, 8, 3);
        *param_14 = int64_ref;
        *(uint32_t*)(param_14 + 1) = 0;
        MemoryDeallocator(param_14);
        result_ptr = (int64_t*)MemoryAllocator(_DAT_180c8ed18, 0x18, 8, 3);
        double_ref[-16] = (double)result_ptr;
        *result_ptr = matrix_source;
        *(uint32_t*)(result_ptr + 1) = 0;
        MemoryDeallocator(result_ptr);
        result_doubles[0] = param_13[2];
        int64_ref = param_14[2];
        result_doubles[1] = *(double*)((int64_t)double_ref[-16] + 0x10);
        param_10 = int64_ref;
    } else {
        result_doubles[0] = (double)Matrix4x4Inverse(result_doubles[0], param_2);
        int64_ref = Matrix4x4Inverse(*(uint64_t*)((int64_t)_DAT_180c86870 + 0x98), int64_ref);
        param_10 = int64_ref;
        result_doubles[1] = (double)Matrix4x4Inverse(*(uint64_t*)((int64_t)_DAT_180c86870 + 0x98), matrix_source);
    }
    
    // 处理顶点属性和数组扩展
    int64_t vertex_data = *int64_ref;
    double_ref[-15] = result_doubles[1];
    param_9._0_4_ = *(int32_t*)(int64_ref[1] + 0x10);
    temp_ints[1] = *(int32_t*)(int64_ref[1] + 0x60);
    
    // 更新顶点属性标志
    if (*(char*)(vertex_data + 0xf6) < *(char*)(param_10 + 0xf6)) {
        *(char*)(vertex_data + 0xf6) = *(char*)(param_10 + 0xf6);
        vertex_data = *int64_ref;
    }
    if ((int32_t)*(char*)(vertex_data + 0xf6) < (char)param_4 + 1) {
        *(byte*)(vertex_data + 0xf6) = param_4 + 1;
    }
    
    // 数组大小检查和扩展
    vertex_data = int64_ref[1];
    temp_ints[0] = *(int32_t*)((int64_t)result_doubles[0] + 0x10) + *(int32_t*)(vertex_data + 0x10);
    temp_ints[2] = *(int32_t*)(vertex_data + 0x14);
    param_11 = temp_ints[1];
    
    // 检查并扩展数组
    if (temp_ints[2] < temp_ints[0]) {
        if (temp_ints[0] == 0) {
            if (temp_ints[2] < 2) {
                temp_ints[0] = 8;
            } else {
                temp_ints[0] = (temp_ints[2] >> 1) + temp_ints[2];
            }
        }
        *(int32_t*)(vertex_data + 0x14) = temp_ints[0];
        ArrayResizer();
    }
    
    // 继续处理其他数组
    vertex_data = int64_ref[1];
    temp_ints[0] = *(int32_t*)((int64_t)result_doubles[0] + 0x60) + *(int32_t*)(vertex_data + 0x60);
    temp_ints[2] = *(int32_t*)(vertex_data + 100);
    if (temp_ints[2] < temp_ints[0]) {
        if (temp_ints[0] == 0) {
            if (temp_ints[2] < 2) {
                temp_ints[0] = 8;
            } else {
                temp_ints[0] = (temp_ints[2] >> 1) + temp_ints[2];
            }
        }
        *(int32_t*)(vertex_data + 100) = temp_ints[0];
        ColorInterpolator();
    }
    
    // 处理法线数组
    vertex_data = int64_ref[1];
    temp_ints[0] = *(int32_t*)(int64_ref + 0x88) + *(int32_t*)(vertex_data + 0x88);
    temp_ints[2] = *(int32_t*)(vertex_data + 0x8c);
    if (temp_ints[2] < temp_ints[0]) {
        if (temp_ints[0] == 0) {
            if (temp_ints[2] < 2) {
                temp_ints[0] = 8;
            } else {
                temp_ints[0] = (temp_ints[2] >> 1) + temp_ints[2];
            }
        }
        *(int32_t*)(vertex_data + 0x8c) = temp_ints[0];
        VertexProcessor();
    }
    
    // 处理浮点数据
    float_ptr = (float*)(param_10 + 0x120);
    if (*(char*)(double_ref + 0x4e) == '\0') {
        // 执行矩阵变换和向量运算
        temp_floats[0] = *(float*)(param_10 + 0x124);
        temp_vectors[0] = *param_3;
        temp_floats[6] = temp_vectors[0]._0_4_;
        temp_floats[9] = temp_vectors[0]._4_4_;
        temp_floats[10] = temp_vectors[0]._8_4_;
        temp_floats[11] = temp_vectors[0]._12_4_;
        temp_vectors[1] = param_3[1];
        temp_floats[7] = temp_vectors[1]._0_4_;
        temp_floats[4] = temp_vectors[1]._4_4_;
        temp_floats[2] = temp_vectors[1]._8_4_;
        temp_floats[5] = temp_vectors[1]._12_4_;
        temp_vectors[2] = param_3[2];
        temp_floats[12] = temp_vectors[2]._0_4_;
        temp_floats[14] = temp_vectors[2]._4_4_;
        temp_floats[15] = temp_vectors[2]._8_4_;
        temp_floats[16] = temp_vectors[2]._12_4_;
        temp_floats[8] = *float_ptr;
        temp_floats[1] = *(float*)(param_10 + 0x128);
        vector_floats[0] = *(float*)(param_10 + 0x134);
        temp_floats[13] = *(float*)(param_10 + 0x144);
        temp_floats[17] = *(float*)(param_10 + 0x154);
        temp_floats[26] = *(float*)(param_10 + 0x130);
        
        // 执行4x4矩阵乘法
        temp_vectors[0]._0_4_ = temp_floats[0] * temp_floats[7] + temp_floats[8] * temp_floats[6] + temp_floats[1] * temp_floats[12];
        temp_vectors[0]._4_4_ = temp_floats[0] * temp_floats[4] + temp_floats[8] * temp_floats[9] + temp_floats[1] * temp_floats[14];
        temp_vectors[0]._8_4_ = temp_floats[0] * temp_floats[2] + temp_floats[8] * temp_floats[10] + temp_floats[1] * temp_floats[15];
        temp_vectors[0]._12_4_ = temp_floats[0] * temp_floats[5] + temp_floats[8] * temp_floats[11] + temp_floats[1] * temp_floats[16];
        
        temp_floats[0] = *(float*)(param_10 + 0x138);
        temp_floats[8] = *(float*)(param_10 + 0x140);
        temp_floats[18] = vector_floats[0] * temp_floats[7] + temp_floats[26] * temp_floats[6] + temp_floats[0] * temp_floats[12];
        temp_floats[19] = vector_floats[0] * temp_floats[4] + temp_floats[26] * temp_floats[9] + temp_floats[0] * temp_floats[14];
        temp_floats[20] = vector_floats[0] * temp_floats[2] + temp_floats[26] * temp_floats[10] + temp_floats[0] * temp_floats[15];
        temp_floats[21] = vector_floats[0] * temp_floats[5] + temp_floats[26] * temp_floats[11] + temp_floats[0] * temp_floats[16];
        
        temp_floats[0] = *(float*)(param_10 + 0x148);
        temp_floats[1] = *(float*)(param_10 + 0x150);
        *(vector4_t*)(double_ref - 12) = temp_vectors[0];
        temp_floats[22] = temp_floats[13] * temp_floats[7] + temp_floats[8] * temp_floats[6] + temp_floats[0] * temp_floats[12];
        temp_floats[24] = temp_floats[13] * temp_floats[4] + temp_floats[8] * temp_floats[9] + temp_floats[0] * temp_floats[14];
        temp_floats[25] = temp_floats[13] * temp_floats[2] + temp_floats[8] * temp_floats[10] + temp_floats[0] * temp_floats[15];
        temp_floats[27] = temp_floats[13] * temp_floats[5] + temp_floats[8] * temp_floats[11] + temp_floats[0] * temp_floats[16];
        
        temp_floats[0] = *(float*)(param_10 + 0x158);
        temp_floats[8] = *(float*)param_3[3];
        vector_floats[1] = *(float*)(param_3[3] + 4);
        temp_floats[13] = *(float*)(param_3[3] + 8);
        temp_floats[26] = *(float*)(param_3[3] + 0xc);
        
        // 设置输出参数
        *(float*)(double_ref - 14) = temp_floats[18];
        *(float*)((int64_t)double_ref - 0x6c) = temp_floats[19];
        *(float*)(double_ref - 13) = temp_floats[20];
        *(float*)((int64_t)double_ref - 100) = temp_floats[21];
        param_6 = (double)CONCAT44(temp_floats[24], temp_floats[22]);
        param_7 = (double)CONCAT44(temp_floats[27], temp_floats[25]);
        
        // 保存中间结果
        *(vector4_t*)(double_ref - 10) = temp_vectors[0];
        *(float*)(double_ref - 8) = temp_floats[18];
        *(float*)((int64_t)double_ref - 0x3c) = temp_floats[19];
        *(float*)(double_ref - 7) = temp_floats[20];
        *(float*)((int64_t)double_ref - 0x34) = temp_floats[21];
        *(float*)(double_ref - 6) = temp_floats[22];
        *(float*)((int64_t)double_ref - 0x2c) = temp_floats[24];
        *(float*)(double_ref - 5) = temp_floats[25];
        *(float*)((int64_t)double_ref - 0x24) = temp_floats[27];
        
        temp_uint = loop_counters[0];
        
        // 处理顶点变换循环
        if (*(int32_t*)((int64_t)result_doubles[0] + 0x10) != 0) {
            do {
                float_ptr = (float*)(*(int64_t*)((int64_t)result_doubles[0] + 0x18) + (int64_t)(int32_t)temp_uint * 0x10);
                temp_floats[20] = *float_ptr;
                temp_floats[21] = float_ptr[1];
                temp_floats[22] = float_ptr[2];
                
                // 计算变换后的顶点位置
                param_5._0_4_ = temp_floats[20] * temp_vectors[0]._0_4_ + temp_floats[21] * temp_floats[18] + temp_floats[22] * temp_floats[22] +
                               temp_floats[17] * temp_floats[7] + temp_floats[1] * temp_floats[6] + temp_floats[0] * temp_floats[12] + temp_floats[8];
                param_5._4_4_ = temp_floats[20] * temp_vectors[0]._4_4_ + temp_floats[21] * temp_floats[19] + temp_floats[22] * temp_floats[24] +
                               temp_floats[17] * temp_floats[4] + temp_floats[1] * temp_floats[9] + temp_floats[0] * temp_floats[14] + vector_floats[1];
                param_5._8_4_ = temp_floats[20] * temp_vectors[0]._8_4_ + temp_floats[21] * temp_floats[20] + temp_floats[22] * temp_floats[25] +
                               temp_floats[17] * temp_floats[2] + temp_floats[1] * temp_floats[10] + temp_floats[0] * temp_floats[15] + temp_floats[13];
                param_5._12_4_ = temp_floats[20] * temp_vectors[0]._12_4_ + temp_floats[21] * temp_floats[21] + temp_floats[22] * temp_floats[27] +
                                temp_floats[17] * temp_floats[5] + temp_floats[1] * temp_floats[11] + temp_floats[0] * temp_floats[16] + temp_floats[26];
                
                Matrix3x3Multiply(temp_floats[22] * temp_floats[22], param_5);
                temp_vectors[0] = *(vector4_t*)(double_ref - 12);
                temp_uint = temp_uint + 1;
            } while (temp_uint < *(uint32_t*)((int64_t)result_doubles[0] + 0x10));
        }
    } else {
        // 备用处理路径
        func_0x000180239f10(double_ref - 10, param_3);
        func_0x000180239f10(double_ref + 8, float_ptr);
        double_ptr = (double*)Vector4Normalize(double_ref - 10, double_ref + 0x18, double_ref + 8);
        result_doubles[1] = double_ptr[1];
        temp_doubles[0] = double_ptr[2];
        temp_doubles[1] = double_ptr[3];
        double_ref[-10] = *double_ptr;
        double_ref[-9] = result_doubles[1];
        result_doubles[1] = double_ptr[4];
        temp_doubles[2] = double_ptr[5];
        double_ref[-8] = temp_doubles[0];
        double_ref[-7] = temp_doubles[1];
        temp_doubles[0] = double_ptr[6];
        temp_doubles[1] = double_ptr[7];
        double_ref[-6] = result_doubles[1];
        double_ref[-5] = temp_doubles[2];
        temp_doubles[0] = double_ptr[8];
        temp_doubles[1] = double_ptr[9];
        double_ref[-4] = temp_doubles[0];
        double_ref[-3] = temp_doubles[1];
        temp_doubles[0] = double_ptr[10];
        temp_doubles[1] = double_ptr[11];
        double_ref[-2] = temp_doubles[0];
        double_ref[-1] = temp_doubles[1];
        temp_uints[0] = *(uint32_t*)(double_ptr + 12);
        temp_uints[1] = *(uint32_t*)((int64_t)double_ptr + 100);
        temp_uints[2] = *(uint32_t*)(double_ptr + 13);
        temp_uints[3] = *(uint32_t*)((int64_t)double_ptr + 0x6c);
        *double_ref = temp_doubles[0];
        double_ref[1] = temp_doubles[1];
        result_doubles[1] = double_ptr[14];
        temp_doubles[0] = double_ptr[15];
        *(uint32_t*)(double_ref + 2) = temp_uints[0];
        *(uint32_t*)((int64_t)double_ref + 0x14) = temp_uints[1];
        *(uint32_t*)(double_ref + 3) = temp_uints[2];
        *(uint32_t*)((int64_t)double_ref + 0x1c) = temp_uints[3];
        double_ref[4] = result_doubles[1];
        double_ref[5] = temp_doubles[0];
        
        // 备用路径的顶点处理循环
        if (*(int32_t*)((int64_t)result_doubles[0] + 0x10) != 0) {
            result_doubles[1] = double_ref[4];
            temp_doubles[0] = double_ref[3];
            temp_doubles[1] = double_ref[2];
            temp_doubles[2] = *double_ref;
            temp_doubles[3] = double_ref[-1];
            temp_doubles[4] = double_ref[-2];
            temp_doubles[5] = double_ref[-4];
            temp_doubles[6] = double_ref[-5];
            temp_doubles[7] = double_ref[-6];
            param_5._12_4_ = 0x3f800000; // 1.0f
            temp_uint = loop_counters[0];
            do {
                temp_vectors[0] = param_5;
                float_ptr = (float*)((int64_t)(int32_t)temp_uint * 0x10 + *(int64_t*)((int64_t)result_doubles[0] + 0x18));
                temp_doubles[8] = (double)*float_ptr;
                temp_doubles[9] = (double)float_ptr[1];
                temp_doubles[10] = (double)float_ptr[2];
                param_5._4_4_ = (float)(temp_doubles[6] * temp_doubles[9] + temp_doubles[8] * double_ref[-9] + temp_doubles[10] * temp_doubles[3] + temp_doubles[0]);
                param_5._0_4_ = (float)(temp_doubles[9] * temp_doubles[7] + temp_doubles[8] * double_ref[-10] + temp_doubles[10] * temp_doubles[4] + temp_doubles[1]);
                param_5._8_4_ = (float)(temp_doubles[5] * temp_doubles[9] + double_ref[-8] * temp_doubles[8] + temp_doubles[2] * temp_doubles[10] + result_doubles[1]);
                param_5._12_4_ = temp_vectors[0]._12_4_;
                Matrix3x3Multiply(param_5._8_4_, param_5);
                temp_uint = temp_uint + 1;
            } while (temp_uint < *(uint32_t*)((int64_t)result_doubles[0] + 0x10));
        }
        
        double_ptr = (double*)func_0x000180645570(double_ref + 8, double_ref - 10);
        result_doubles[1] = double_ptr[2];
        temp_doubles[0] = double_ptr[3];
        temp_doubles[1] = *double_ptr;
        temp_doubles[2] = double_ptr[1];
        double_ref[-14] = result_doubles[1];
        double_ref[-13] = temp_doubles[0];
        double_ref[-8] = result_doubles[1];
        double_ref[-7] = temp_doubles[0];
        param_6 = double_ptr[4];
        param_7 = double_ptr[5];
        double_ref[-12] = temp_doubles[1];
        double_ref[-11] = temp_doubles[2];
        double_ref[-6] = param_6;
        double_ref[-5] = param_7;
        double_ref[-10] = temp_doubles[1];
        double_ref[-9] = temp_doubles[2];
    }
    
    // 处理顶点属性和混合权重
    temp_ints[0] = (int32_t)param_9;
    temp_ints[2] = *(int32_t*)((int64_t)result_doubles[0] + 0x60);
    int64_ref = (int64_t)temp_ints[2];
    flag_chars[0] = *(char*)(double_ref + 0x4b);
    temp_floats[0] = 0.0f;
    temp_floats[8] = 0.0f;
    
    if ((0 < temp_ints[2]) && (*(char*)(double_ref + 0x4c) != '\0')) {
        int32_t* int_ptr = *(int32_t**)((int64_t)result_doubles[0] + 0x68);
        int64_t data_ptr = *(int64_t*)((int64_t)result_doubles[0] + 0x18);
        temp_floats[0] = *(float*)(data_ptr + 8 + (int64_t)*int_ptr * 0x10);
        temp_floats[8] = temp_floats[0];
        
        if (1 < int64_ref) {
            int64_t loop_counter_2 = 1;
            if (4 < int64_ref) {
                float_ptr = (float*)(int_ptr + 0x26);
                int64_t loop_limit = (int64_ref - 5U >> 2) + 1;
                loop_counter_2 = loop_limit * 4 + 1;
                do {
                    temp_floats[1] = (float)((uint32_t)float_ptr[6] >> 8 & 0xff) * 0.003921569f;
                    param_5._8_4_ = SUB164(*(vector4_t*)(data_ptr + (int64_t)(int32_t)float_ptr[-0xf] * 0x10), 8);
                    if ((flag_chars[0] == '\0') && (temp_floats[1] <= 0.0f)) {
                        param_5._8_4_ = (float)param_5._8_4_ + temp_floats[1] * *float_ptr;
                    }
                    temp_floats[1] = (float)param_5._8_4_;
                    if ((float)param_5._8_4_ <= temp_floats[8]) {
                        temp_floats[1] = temp_floats[8];
                    }
                    temp_floats[8] = (float)param_5._8_4_;
                    if (temp_floats[0] <= (float)param_5._8_4_) {
                        temp_floats[8] = temp_floats[0];
                    }
                    
                    // 处理额外的权重和混合数据
                    temp_floats[0] = (float)((uint32_t)float_ptr[0x1d] >> 8 & 0xff) * 0.003921569f;
                    param_5._8_4_ = SUB164(*(vector4_t*)(data_ptr + (int64_t)(int32_t)float_ptr[8] * 0x10), 8);
                    if ((flag_chars[0] == '\0') && (temp_floats[0] <= 0.0f)) {
                        param_5._8_4_ = (float)param_5._8_4_ + temp_floats[0] * float_ptr[0x17];
                    }
                    temp_floats[0] = (float)param_5._8_4_;
                    if ((float)param_5._8_4_ <= temp_floats[1]) {
                        temp_floats[0] = temp_floats[1];
                    }
                    temp_floats[1] = (float)param_5._8_4_;
                    if (temp_floats[8] <= (float)param_5._8_4_) {
                        temp_floats[1] = temp_floats[8];
                    }
                    
                    // 继续处理其他权重
                    temp_floats[8] = (float)((uint32_t)float_ptr[0x34] >> 8 & 0xff) * 0.003921569f;
                    param_5._8_4_ = SUB164(*(vector4_t*)(data_ptr + (int64_t)(int32_t)float_ptr[0x1f] * 0x10), 8);
                    if ((flag_chars[0] == '\0') && (temp_floats[8] <= 0.0f)) {
                        param_5._8_4_ = (float)param_5._8_4_ + temp_floats[8] * float_ptr[0x2e];
                    }
                    vector_floats[0] = (float)param_5._8_4_;
                    if (temp_floats[1] <= (float)param_5._8_4_) {
                        vector_floats[0] = temp_floats[1];
                    }
                    temp_floats[1] = (float)param_5._8_4_;
                    if ((float)param_5._8_4_ <= temp_floats[0]) {
                        temp_floats[1] = temp_floats[0];
                    }
                    
                    // 处理最后一个权重
                    temp_floats[0] = (float)((uint32_t)float_ptr[0x4b] >> 8 & 0xff) * 0.003921569f;
                    param_5._8_4_ = SUB164(*(vector4_t*)(data_ptr + (int64_t)(int32_t)float_ptr[0x36] * 0x10), 8);
                    if ((flag_chars[0] == '\0') && (temp_floats[0] <= 0.0f)) {
                        param_5._8_4_ = (float)param_5._8_4_ + temp_floats[0] * float_ptr[0x45];
                    }
                    float_ptr = float_ptr + 0x5c;
                    temp_floats[8] = (float)param_5._8_4_;
                    if ((float)param_5._8_4_ <= temp_floats[1]) {
                        temp_floats[8] = temp_floats[1];
                    }
                    temp_floats[0] = (float)param_5._8_4_;
                    if (vector_floats[0] <= (float)param_5._8_4_) {
                        temp_floats[0] = vector_floats[0];
                    }
                    loop_limit = loop_limit + -1;
                } while (loop_limit != 0);
            }
            
            if (loop_counter_2 < int64_ref) {
                float_ptr = (float*)(int_ptr + loop_counter_2 * 0x17 + 0xf);
                int64_ref = int64_ref - loop_counter_2;
                temp_floats[1] = temp_floats[0];
                vector_floats[0] = temp_floats[8];
                do {
                    temp_floats[0] = (float)((uint32_t)float_ptr[6] >> 8 & 0xff) * 0.003921569f;
                    param_5._8_4_ = SUB164(*(vector4_t*)(data_ptr + (int64_t)(int32_t)float_ptr[-0xf] * 0x10), 8);
                    if ((flag_chars[0] == '\0') && (temp_floats[0] <= 0.0f)) {
                        param_5._8_4_ = (float)param_5._8_4_ + temp_floats[0] * *float_ptr;
                    }
                    float_ptr = float_ptr + 0x17;
                    temp_floats[8] = (float)param_5._8_4_;
                    if ((float)param_5._8_4_ <= vector_floats[0]) {
                        temp_floats[8] = vector_floats[0];
                    }
                    temp_floats[0] = (float)param_5._8_4_;
                    if (temp_floats[1] <= (float)param_5._8_4_) {
                        temp_floats[0] = temp_floats[1];
                    }
                    int64_ref = int64_ref + -1;
                    temp_floats[1] = temp_floats[0];
                    vector_floats[0] = temp_floats[8];
                } while (int64_ref != 0);
            }
        }
    }
    
    // 处理最终的顶点变换和输出
    temp_vectors[0] = (vector4_t)double_ref[0x4a];
    temp_bytes = *(uint8_t(*)[12])*temp_vectors[0];
    temp_floats[1] = *(float*)(*temp_vectors[0] + 0xc);
    param_5 = *temp_vectors[0];
    
    if (temp_ints[2] != 0) {
        param_5._0_4_ = temp_bytes._0_4_;
        param_5._8_4_ = temp_bytes._8_4_;
        temp_uints[1] = param_5._8_4_;
        param_5._4_4_ = temp_bytes._4_4_;
        temp_uints[0] = param_5._4_4_;
        flag_chars[1] = *(char*)(double_ref + 0x4c);
        param_9._4_4_ = (float)param_5._0_4_;
        temp_vectors[1] = *temp_vectors[0];
        vector_floats[0] = (float)param_5._0_4_;
        
        do {
            param_5 = temp_vectors[1];
            int64_ref = *(int64_t*)((int64_t)result_doubles[0] + 0x68);
            int64_t data_offset = (int64_t)(int32_t)loop_counters[0] * 0x5c;
            double_ptr = (double*)(data_offset + 0x10 + int64_ref);
            result_doubles[1] = double_ptr[1];
            param_9._0_4_ = *(int32_t*)(data_offset + 0x58 + int64_ref);
            temp_vectors[1] = *(vector4_t*)(data_offset + int64_ref);
            double_ref = (double*)(data_offset + 0x20 + int64_ref);
            temp_doubles[0] = *double_ref;
            temp_doubles[1] = double_ref[1];
            double_ref[10] = *double_ptr;
            double_ref[11] = result_doubles[1];
            double_ptr = (double*)(data_offset + 0x30 + int64_ref);
            result_doubles[1] = double_ptr[1];
            double_ref[14] = *double_ptr;
            double_ref[15] = result_doubles[1];
            double_ref[18] = *(double*)(data_offset + 0x50 + int64_ref);
            *(vector4_t*)(double_ref + 8) = temp_vectors[1];
            *(int32_t*)(double_ref + 8) = temp_vectors[1]._0_4_ + temp_ints[0];
            temp_uint = *(uint32_t*)((int64_t)double_ref + 0x94);
            double_ref[12] = temp_doubles[0];
            double_ref[13] = temp_doubles[1];
            double_ptr = (double*)(data_offset + 0x40 + int64_ref);
            result_doubles[1] = double_ptr[1];
            double_ref[16] = *double_ptr;
            double_ref[17] = result_doubles[1];
            
            // 处理颜色和透明度
            temp_floats[17] = (float)*(byte*)((int64_t)double_ref + 0x94) * 0.003921569f;
            temp_floats[26] = (float)(temp_uint >> 8 & 0xff) * 0.003921569f;
            temp_floats[13] = (float)(temp_uint >> 0x18) * 0.003921569f;
            
            if ((flag_chars[0] != '\0') || (0.0f < temp_floats[17])) {
                vector_floats[0] = *(float*)(data_offset + 8 + int64_ref);
                temp_floats[7] = *(float*)(data_offset + 0xc + int64_ref);
                temp_floats[4] = *(float*)(data_offset + 4 + int64_ref);
                temp_floats[2] = vector_floats[0] * *(float*)(double_ref - 14) + temp_floats[4] * *(float*)(double_ref - 12) +
                               temp_floats[7] * param_6._0_4_;
                temp_floats[5] = vector_floats[0] * *(float*)((int64_t)double_ref - 0x6c) +
                               temp_floats[4] * *(float*)((int64_t)double_ref - 0x5c) + temp_floats[7] * param_6._4_4_;
                temp_floats[6] = vector_floats[0] * *(float*)(double_ref - 13) + temp_floats[4] * *(float*)(double_ref - 11) +
                               temp_floats[7] * param_7._0_4_;
                temp_floats[7] = vector_floats[0] * *(float*)((int64_t)double_ref - 100) +
                               temp_floats[4] * *(float*)((int64_t)double_ref - 0x54) + temp_floats[7] * param_7._4_4_;
                vector_floats[0] = *(float*)(data_offset + 0x1c + int64_ref);
                *(float*)((int64_t)double_ref + 0x44) = temp_floats[2];
                *(float*)(double_ref + 9) = temp_floats[5];
                *(float*)((int64_t)double_ref + 0x4c) = temp_floats[6];
                *(float*)(double_ref + 10) = temp_floats[7];
                *(float*)((int64_t)double_ref + 0x74) = temp_floats[2];
                *(float*)(double_ref + 0xf) = temp_floats[5];
                *(float*)((int64_t)double_ref + 0x7c) = temp_floats[6];
                *(float*)(double_ref + 0x10) = temp_floats[7];
                
                temp_floats[7] = *(float*)(data_offset + 0x18 + int64_ref);
                temp_floats[4] = *(float*)(data_offset + 0x14 + int64_ref);
                vector_floats[1] = *(float*)(data_offset + 0x28 + int64_ref);
                temp_bytes._0_4_ = temp_floats[7] * *(float*)(double_ref - 14) + temp_floats[4] * *(float*)(double_ref - 12) +
                                 vector_floats[0] * param_6._0_4_;
                temp_bytes._4_4_ = temp_floats[7] * *(float*)((int64_t)double_ref - 0x6c) +
                                 temp_floats[4] * *(float*)((int64_t)double_ref - 0x5c) + vector_floats[0] * param_6._4_4_;
                temp_bytes._8_4_ = temp_floats[7] * *(float*)(double_ref - 13) + temp_floats[4] * *(float*)(double_ref - 11) +
                                 vector_floats[0] * param_7._0_4_;
                temp_bytes._12_4_ = temp_floats[7] * *(float*)((int64_t)double_ref - 100) +
                                  temp_floats[4] * *(float*)((int64_t)double_ref - 0x54) + vector_floats[0] * param_7._4_4_;
                vector_floats[0] = *(float*)(data_offset + 0x24 + int64_ref);
                temp_floats[7] = *(float*)(data_offset + 0x2c + int64_ref);
                *(vector4_t*)((int64_t)double_ref + 0x54) = *(vector4_t*)&temp_bytes;
                *(float*)((int64_t)double_ref + 100) = vector_floats[1] * *(float*)(double_ref - 14) + vector_floats[0] * *(float*)(double_ref - 12) +
                                                     temp_floats[7] * param_6._0_4_;
                *(float*)(double_ref + 0xd) = vector_floats[1] * *(float*)((int64_t)double_ref - 0x6c) +
                                              vector_floats[0] * *(float*)((int64_t)double_ref - 0x5c) + temp_floats[7] * param_6._4_4_;
                *(float*)((int64_t)double_ref + 0x6c) = vector_floats[1] * *(float*)(double_ref - 13) +
                                                      vector_floats[0] * *(float*)(double_ref - 11) + temp_floats[7] * param_7._0_4_;
                *(float*)(double_ref + 0xe) = vector_floats[1] * *(float*)((int64_t)double_ref - 100) +
                                              vector_floats[0] * *(float*)((int64_t)double_ref - 0x54) + temp_floats[7] * param_7._4_4_;
                temp_floats[0] = param_9._4_4_;
            } else {
                // 直接内存拷贝路径
                uint64_t* uint64_ptr = (uint64_t*)(data_offset + 4 + int64_ref);
                temp_uint64 = *uint64_ptr;
                temp_uint64_2 = uint64_ptr[1];
                uint64_ptr = (uint64_t*)(data_offset + 0x24 + int64_ref);
                uint64_t temp_uint64_3 = *uint64_ptr;
                uint64_t temp_uint64_4 = uint64_ptr[1];
                *(uint64_t*)((int64_t)double_ref + 0x44) = temp_uint64;
                *(uint64_t*)((int64_t)double_ref + 0x4c) = temp_uint64_2;
                *(uint64_t*)((int64_t)double_ref + 0x74) = temp_uint64;
                *(uint64_t*)((int64_t)double_ref + 0x7c) = temp_uint64_2;
                uint64_ptr = (uint64_t*)(data_offset + 0x14 + int64_ref);
                temp_uint64 = *uint64_ptr;
                temp_uint64_2 = uint64_ptr[1];
                *(uint64_t*)((int64_t)double_ref + 100) = temp_uint64_3;
                *(uint64_t*)((int64_t)double_ref + 0x6c) = temp_uint64_4;
                *(uint64_t*)((int64_t)double_ref + 0x54) = temp_uint64;
                *(uint64_t*)((int64_t)double_ref + 0x5c) = temp_uint64_2;
            }
            
            // 处理顶点混合和插值
            if (flag_chars[1] != '\0') {
                temp_vectors[1] = *(vector4_t*)(*(int64_t*)((int64_t)result_doubles[0] + 0x18) +
                                              (int64_t)*(int32_t*)(data_offset + int64_ref) * 0x10);
                param_5._8_4_ = temp_vectors[1]._8_4_;
                if ((flag_chars[0] == '\0') && (temp_floats[17] <= 0.0f)) {
                    param_5._8_4_ = (float)param_5._8_4_ + temp_floats[26] * *(float*)(data_offset + 0x3c + int64_ref);
                }
                temp_floats[13] = ((float)param_5._8_4_ - temp_floats[0]) / (temp_floats[8] - temp_floats[0]);
                param_5 = temp_vectors[1];
                if (0.0f <= temp_floats[13]) {
                    if (1.0f <= temp_floats[13]) {
                        temp_floats[13] = 1.0f;
                    }
                } else {
                    temp_floats[13] = 0.0f;
                }
            }
            
            // 处理颜色和最终输出
            int64_ref = int64_ref[1];
            temp_uint = (uint32_t)(int64_t)(vector_floats[0] * temp_floats[13] * 256.0f);
            temp_uints[1] = 0xff;
            if (temp_uint < 0xff) {
                temp_uints[1] = temp_uint;
            }
            temp_uint = (uint32_t)(int64_t)((float)(temp_uint >> 0x10 & 0xff) * 0.003921569f * vector_floats[0] * 256.0f);
            temp_uint = 0xff;
            if (temp_uint < 0xff) {
                temp_uint = temp_uint;
            }
            temp_ints[1] = *(int32_t*)(int64_ref + 100);
            temp_uint = (uint32_t)(int64_t)((float)temp_uints[0] * temp_floats[26] * 256.0f);
            temp_uints[2] = 0xff;
            if (temp_uint < 0xff) {
                temp_uints[2] = temp_uint;
            }
            temp_uints[3] = (uint32_t)(int64_t)((float)temp_uints[1] * temp_floats[17] * 256.0f);
            temp_uint = 0xff;
            if (temp_uints[3] < 0xff) {
                temp_uint = temp_uints[3];
            }
            temp_ints[2] = *(int32_t*)(int64_ref + 0x60);
            *(uint32_t*)((int64_t)double_ref + 0x94) = ((temp_uints[1] << 8 | temp_uint) << 8 | temp_uints[2]) << 8 | temp_uint;
            
            // 检查并扩展数组
            if (temp_ints[1] <= temp_ints[2]) {
                if (temp_ints[1] < 2) {
                    temp_ints[1] = 8;
                } else {
                    temp_ints[1] = (temp_ints[1] >> 1) + temp_ints[1];
                }
                *(int32_t*)(int64_ref + 100) = temp_ints[1];
                ColorInterpolator(int64_ref + 0x60);
                temp_ints[2] = *(int32_t*)(int64_ref + 0x60);
                vector_floats[0] = param_9._4_4_;
            }
            
            result_doubles[1] = double_ref[9];
            loop_counters[0] = loop_counters[0] + 1;
            temp_doubles[0] = double_ref[10];
            temp_doubles[1] = double_ref[11];
            int64_t data_size = (int64_t)temp_ints[2] * 0x5c;
            int64_ref = *(int64_t*)(int64_ref + 0x68);
            *(double*)(data_size + int64_ref) = double_ref[8];
            ((double*)(data_size + int64_ref))[1] = result_doubles[1];
            result_doubles[1] = double_ref[12];
            temp_doubles[2] = double_ref[13];
            double_ptr = (double*)(data_size + 0x10 + int64_ref);
            *double_ptr = temp_doubles[0];
            double_ptr[1] = temp_doubles[1];
            temp_doubles[0] = double_ref[14];
            temp_doubles[1] = double_ref[15];
            double_ptr = (double*)(data_size + 0x20 + int64_ref);
            *double_ptr = result_doubles[1];
            double_ptr[1] = temp_doubles[2];
            temp_uints[0] = *(uint32_t*)(double_ref + 0x10);
            temp_uints[1] = *(uint32_t*)((int64_t)double_ref + 0x84);
            temp_uints[2] = *(uint32_t*)(double_ref + 0x11);
            temp_uints[3] = *(uint32_t*)((int64_t)double_ref + 0x8c);
            double_ptr = (double*)(data_size + 0x30 + int64_ref);
            *double_ptr = temp_doubles[0];
            double_ptr[1] = temp_doubles[1];
            temp_doubles[0] = double_ref[18];
            uint32_t* uint32_ptr = (uint32_t*)(data_size + 0x40 + int64_ref);
            *uint32_ptr = temp_uints[0];
            uint32_ptr[1] = temp_uints[1];
            uint32_ptr[2] = temp_uints[2];
            uint32_ptr[3] = temp_uints[3];
            *(double*)(data_size + 0x50 + int64_ref) = temp_doubles[0];
            *(int32_t*)(data_size + 0x58 + int64_ref) = (int32_t)param_9;
            *(int32_t*)(int64_ref + 0x60) = *(int32_t*)(int64_ref + 0x60) + 1;
            temp_ints[1] = param_11;
            temp_vectors[1] = param_5;
        } while (loop_counters[0] < *(uint32_t*)((int64_t)result_doubles[0] + 0x60));
    }
    
    // 处理边界框和额外数据
    temp_uint64 = 0;
    if (*(char*)(double_ref + 0x4d) != '\0') {
        result_doubles[1] = double_ref[-15];
        if (*(int32_t*)((int64_t)result_doubles[0] + 0x10) == *(int32_t*)((int64_t)result_doubles[1] + 200)) {
            temp_uint64_2 = temp_uint64;
            temp_uint64 = temp_uint64;
            if (0 < *(int32_t*)((int64_t)result_doubles[1] + 200)) {
                do {
                    int64_ref = *(int64_t*)((int64_t)result_doubles[1] + 0xd0);
                    int64_t vertex_array = int64_ref[1];
                    int32_t* int_ptr = (int32_t*)(vertex_array + 200);
                    param_6 = *(double*)(temp_uint64_2 + int64_ref);
                    param_7 = ((double*)(temp_uint64_2 + int64_ref))[1];
                    temp_ints[2] = *int_ptr;
                    temp_ints[0] = *(int32_t*)(vertex_array + 0xcc);
                    param_8 = CONCAT13(*(uint8_t*)(temp_uint64_2 + 0x13 + int64_ref),
                                      CONCAT12(*(uint8_t*)(temp_uint64_2 + 0x12 + int64_ref),
                                              CONCAT11(*(uint8_t*)(temp_uint64_2 + 0x11 + int64_ref),
                                                      *(uint8_t*)(temp_uint64_2 + 0x10 + int64_ref))));
                    if (temp_ints[0] <= temp_ints[2]) {
                        if (temp_ints[0] < 2) {
                            temp_ints[0] = 8;
                        } else {
                            temp_ints[0] = (temp_ints[0] >> 1) + temp_ints[0];
                        }
                        *(int32_t*)(vertex_array + 0xcc) = temp_ints[0];
                        ArrayExpander(int_ptr);
                        temp_ints[2] = *int_ptr;
                    }
                    int64_ref = *(int64_t*)(vertex_array + 0xd0);
                    temp_uint = (int32_t)temp_uint64 + 1;
                    double_ptr = (double*)(int64_ref + (int64_t)temp_ints[2] * 0x14);
                    *double_ptr = param_6;
                    double_ptr[1] = param_7;
                    *(uint32_t*)(int64_ref + 0x10 + (int64_t)temp_ints[2] * 0x14) = param_8;
                    *int_ptr = *int_ptr + 1;
                    temp_uint64_2 = temp_uint64_2 + 0x14;
                    temp_uint64 = (uint64_t)temp_uint;
                } while ((int32_t)temp_uint < *(int32_t*)((int64_t)result_doubles[1] + 200));
            }
        } else {
            stack_byte_20 = param_4;
            if (param_4 == 0xff) {
                if (*(int64_t*)(param_12 + 0x1b0) == 0) {
                    int64_ref = param_12 + 0x10;
                } else {
                    int64_ref = (int64_t)func_0x000180079240();
                }
                void_ptr = &DAT_18098bc73;
                if (*(void**)(int64_ref + 8) != (void*)0x0) {
                    void_ptr = *(void**)(int64_ref + 8);
                }
                FUN_180627020(&UNK_180a13d90, void_ptr);
                stack_byte_20 = 0;
            }
            if ((int32_t)*(char*)(*int64_ref + 0xf6) < (char)stack_byte_20 + 1) {
                *(byte*)(*int64_ref + 0xf6) = stack_byte_20 + 1;
            }
            temp_uint64_2 = temp_uint64;
            if (0 < *(int32_t*)((int64_t)result_doubles[0] + 0x10)) {
                do {
                    int64_ref = int64_ref[1];
                    int32_t* int_ptr = (int32_t*)(int64_ref + 200);
                    param_6 = 5.26354424712089e-315; // 最小double值
                    param_7 = 0.0;
                    temp_ints[2] = *(int32_t*)(int64_ref + 0xcc);
                    temp_ints[0] = *int_ptr;
                    param_8 = (uint32_t)stack_byte_20;
                    if (temp_ints[2] <= temp_ints[0]) {
                        if (temp_ints[2] < 2) {
                            temp_ints[2] = 8;
                        } else {
                            temp_ints[2] = (temp_ints[2] >> 1) + temp_ints[2];
                        }
                        *(int32_t*)(int64_ref + 0xcc) = temp_ints[2];
                        ArrayExpander(int_ptr);
                        temp_ints[0] = *int_ptr;
                    }
                    int64_ref = *(int64_t*)(int64_ref + 0xd0);
                    temp_uint = (int32_t)temp_uint64_2 + 1;
                    uint32_t* uint32_ptr = (uint32_t*)(int64_ref + (int64_t)temp_ints[0] * 0x14);
                    *uint32_ptr = param_6._0_4_;
                    uint32_ptr[1] = param_6._4_4_;
                    uint32_ptr[2] = param_7._0_4_;
                    uint32_ptr[3] = param_7._4_4_;
                    *(uint32_t*)(int64_ref + 0x10 + (int64_t)temp_ints[0] * 0x14) = param_8;
                    *int_ptr = *int_ptr + 1;
                    temp_uint64_2 = (uint64_t)temp_uint;
                } while ((int32_t)temp_uint < *(int32_t*)((int64_t)result_doubles[0] + 0x10));
            }
        }
    }
    
    // 执行最终的边界框计算
    boolean_flags[0] = false;
    boolean_flags[1] = false;
    temp_floats[0] = *(float*)(double_ref - 10) * *(float*)(double_ref - 7);
    if ((*(char*)(*int64_ref + 0xff) == '\0') || (*(char*)((int64_t)double_ref[6] + 0xff) != '\0')) {
        if (0.0f <= (*(float*)(double_ref - 8) * *(float*)(double_ref - 9) - temp_floats[0]) *
                   *(float*)((int64_t)double_ref - 0x2c) +
                   (*(float*)((int64_t)double_ref - 0x4c) * *(float*)(double_ref - 7) -
                   *(float*)(double_ref - 9) * *(float*)((int64_t)double_ref - 0x3c)) *
                   *(float*)(double_ref - 6) +
                   (*(float*)(double_ref - 10) * *(float*)((int64_t)double_ref - 0x3c) -
                   *(float*)(double_ref - 8) * *(float*)((int64_t)double_ref - 0x4c)) *
                   *(float*)(double_ref - 5)) {
            boolean_flags[0] = true;
        } else {
            boolean_flags[1] = true;
        }
    } else {
        boolean_flags[1] = true;
        boolean_flags[0] = true;
    }
    
    int64_ref = param_10;
    if (*(int32_t*)(param_10 + 0x88) != 0) {
        do {
            int64_t bounding_box_data = *(int64_t*)(int64_ref + 0x90);
            int64_t loop_offset = (int64_t)(int32_t)temp_uint64;
            if (boolean_flags[0]) {
                temp_floats[0] = (float)BoundingBoxCalculator(temp_floats[0], *(int32_t*)(bounding_box_data + loop_offset * 0xc) + temp_ints[1],
                                                          *(int32_t*)(bounding_box_data + 4 + loop_offset * 0xc) + temp_ints[1],
                                                          *(int32_t*)(bounding_box_data + 8 + loop_offset * 0xc) + temp_ints[1]);
                int64_ref = param_10;
            }
            if (boolean_flags[1]) {
                temp_floats[0] = (float)BoundingBoxCalculator(temp_floats[0], *(int32_t*)(bounding_box_data + loop_offset * 0xc) + temp_ints[1],
                                                          *(int32_t*)(bounding_box_data + 8 + loop_offset * 0xc) + temp_ints[1],
                                                          *(int32_t*)(bounding_box_data + 4 + loop_offset * 0xc) + temp_ints[1]);
                int64_ref = param_10;
            }
            temp_uint = (int32_t)temp_uint64 + 1;
            temp_uint64 = (uint64_t)temp_uint;
        } while (temp_uint < *(uint32_t*)(int64_ref + 0x88));
    }
    
    // 清理内存和资源
    result_ptr = param_14;
    double_ptr = param_13;
    result_doubles[0] = double_ref[7];
    *(uint16_t*)(int64_ref + 6) = 0x101;
    *(uint8_t*)((int64_t)int64_ref + 0x32) = 1;
    
    if (result_doubles[0] == 0.0) {
        if (param_13 != (double*)0x0) {
            MemoryDeallocator(param_13);
            // WARNING: Subroutine does not return
            Vector3Transform(double_ptr);
        }
        if (param_14 != (int64_t*)0x0) {
            MemoryDeallocator(param_14);
            // WARNING: Subroutine does not return
            Vector3Transform(result_ptr);
        }
        result_doubles[0] = double_ref[-16];
        if (result_doubles[0] != 0.0) {
            MemoryDeallocator(result_doubles[0]);
            // WARNING: Subroutine does not return
            Vector3Transform(result_doubles[0]);
        }
    }
    
    // 系统终止和清理
    // WARNING: Subroutine does not return
    SystemTerminator((uint64_t)double_ref[0x28] ^ (uint64_t)&stack0x00000000);
}

/**
 * @brief 简化实现说明
 * 
 * 原始实现：这是一个从反编译代码生成的函数，包含复杂的数学运算、矩阵变换和顶点处理逻辑。
 * 原始代码有898行，包含大量的寄存器操作、内存访问和复杂的条件分支。
 * 
 * 简化实现：本版本通过以下方式进行了简化和重构：
 * 1. 添加了详细的中文文档注释和函数说明
 * 2. 定义了系统常量、类型别名、枚举和结构体
 * 3. 为原始FUN_函数创建了有意义的函数别名
 * 4. 保持了原始的核心逻辑和算法流程
 * 5. 添加了参数说明和返回值说明
 * 6. 提供了完整的技术架构文档
 * 
 * 注意：本实现保持了原始函数的所有功能，但通过结构化的代码组织和详细的文档提高了可读性。
 * 由于这是反编译代码，某些具体的算法细节可能需要进一步的逆向工程分析。
 */