#include "TaleWorlds.Native.Split.h"

/**
 * 渲染系统矩阵变换和投影计算模块
 * 包含5个核心函数，涵盖矩阵乘法、内存管理、投影变换和相机参数设置等功能
 */

// ============================================================================
// 常量定义
// ============================================================================

/** 渲染系统浮点数最大值 */
#define RENDER_MAX_FLOAT 3.4028235e+38

/** 渲染系统默认角度值（弧度） */
#define RENDER_DEFAULT_ANGLE 1.5707964f

/** 渲染系统默认视野参数 */
#define RENDER_DEFAULT_FOV 0.09f

/** 渲染系统单位长度 */
#define RENDER_UNIT_LENGTH 1.0f

/** 渲染系统角度转换常量 */
#define RENDER_ANGLE_CONSTANT 0x3f490fdb

// ============================================================================
// 数据结构定义
// ============================================================================

/** 渲染矩阵4x4结构 */
typedef struct {
    float m[16];  // 4x4矩阵元素
} render_matrix_4x4;

/** 渲染投影参数结构 */
typedef struct {
    float near_plane;    // 近平面距离
    float far_plane;     // 远平面距离
    float left_plane;    // 左平面距离
    float right_plane;   // 右平面距离
    float top_plane;     // 上平面距离
    float bottom_plane;  // 下平面距离
    bool is_orthogonal;  // 是否为正交投影
} render_projection_params;

/** 渲染相机参数结构 */
typedef struct {
    float position[4];      // 相机位置
    float direction[4];     // 相机方向
    float up_vector[4];     // 上向量
    float fov;              // 视野角度
    float aspect_ratio;     // 宽高比
    float near_distance;    // 近裁剪面
    float far_distance;     // 远裁剪面
} render_camera_params;

/** 渲染内存块结构 */
typedef struct {
    void* data_ptr;         // 数据指针
    size_t size;           // 数据大小
    uint32_t flags;         // 标志位
    bool should_free;      // 是否需要释放
} render_memory_block;

// ============================================================================
// 全局变量声明
// ============================================================================

/** 渲染系统全局内存管理器指针 */
extern void* global_render_memory_manager;

/** 渲染系统全局配置表指针 */
extern void* global_render_config_table;

/** 渲染系统全局状态标志 */
extern int global_render_status_flags;

// ============================================================================
// 核心函数实现
// ============================================================================

/**
 * 渲染矩阵4x4乘法运算函数
 * 执行两个4x4矩阵的乘法运算，结果存储在目标矩阵中
 * 
 * @param result_matrix 结果矩阵指针 (4x4)
 * @param source_matrix1 源矩阵1指针 (4x4)
 * @param source_matrix2 源矩阵2指针 (4x4)
 */
void multiply_render_matrix_4x4(float *result_matrix, float *source_matrix1, float *source_matrix2) {
    // 从源矩阵1提取元素
    float m1_00 = source_matrix1[0];
    float m1_01 = source_matrix1[1];
    float m1_02 = source_matrix1[2];
    float m1_03 = source_matrix1[3];
    float m1_10 = source_matrix1[4];
    float m1_11 = source_matrix1[5];
    float m1_12 = source_matrix1[6];
    float m1_13 = source_matrix1[7];
    float m1_20 = source_matrix1[8];
    float m1_21 = source_matrix1[9];
    float m1_22 = source_matrix1[10];
    float m1_23 = source_matrix1[11];
    float m1_30 = source_matrix1[12];
    float m1_31 = source_matrix1[13];
    float m1_32 = source_matrix1[14];
    float m1_33 = source_matrix1[15];
    
    // 从源矩阵2提取元素
    float m2_00 = source_matrix2[0];
    float m2_01 = source_matrix2[1];
    float m2_02 = source_matrix2[2];
    float m2_03 = source_matrix2[3];
    float m2_10 = source_matrix2[4];
    float m2_11 = source_matrix2[5];
    float m2_12 = source_matrix2[6];
    float m2_13 = source_matrix2[7];
    float m2_20 = source_matrix2[8];
    float m2_21 = source_matrix2[9];
    float m2_22 = source_matrix2[10];
    float m2_23 = source_matrix2[11];
    float m2_30 = source_matrix2[12];
    float m2_31 = source_matrix2[13];
    float m2_32 = source_matrix2[14];
    float m2_33 = source_matrix2[15];
    
    // 执行矩阵乘法运算
    result_matrix[0] = m2_01 * m1_10 + m2_02 * m1_20 + m2_00 * m1_00 + m2_03 * m1_30;
    result_matrix[1] = m2_01 * m1_11 + m2_02 * m1_21 + m2_00 * m1_01 + m2_03 * m1_31;
    result_matrix[2] = m2_01 * m1_12 + m2_02 * m1_22 + m2_00 * m1_02 + m2_03 * m1_32;
    result_matrix[3] = m2_01 * m1_13 + m2_02 * m1_23 + m2_00 * m1_03 + m2_03 * m1_33;
    
    result_matrix[4] = m2_11 * m1_10 + m2_12 * m1_20 + m2_10 * m1_00 + m2_13 * m1_30;
    result_matrix[5] = m2_11 * m1_11 + m2_12 * m1_21 + m2_10 * m1_01 + m2_13 * m1_31;
    result_matrix[6] = m2_11 * m1_12 + m2_12 * m1_22 + m2_10 * m1_02 + m2_13 * m1_32;
    result_matrix[7] = m2_11 * m1_13 + m2_12 * m1_23 + m2_10 * m1_03 + m2_13 * m1_33;
    
    result_matrix[8] = m2_21 * m1_10 + m2_22 * m1_20 + m2_20 * m1_00 + m2_23 * m1_30;
    result_matrix[9] = m2_21 * m1_11 + m2_22 * m1_21 + m2_20 * m1_01 + m2_23 * m1_31;
    result_matrix[10] = m2_21 * m1_12 + m2_22 * m1_22 + m2_20 * m1_02 + m2_23 * m1_32;
    result_matrix[11] = m2_21 * m1_13 + m2_22 * m1_23 + m2_20 * m1_03 + m2_23 * m1_33;
    
    result_matrix[12] = m2_31 * m1_10 + m2_32 * m1_20 + m2_30 * m1_00 + m2_33 * m1_30 + m1_30;
    result_matrix[13] = m2_31 * m1_11 + m2_32 * m1_21 + m2_30 * m1_01 + m2_33 * m1_31 + m1_31;
    result_matrix[14] = m2_31 * m1_12 + m2_32 * m1_22 + m2_30 * m1_02 + m2_33 * m1_32 + m1_32;
    result_matrix[15] = m2_31 * m1_13 + m2_32 * m1_23 + m2_30 * m1_03 + m2_33 * m1_33 + m1_33;
}

/**
 * 渲染内存块初始化和释放管理函数
 * 初始化内存块结构，根据标志位决定是否释放内存
 * 
 * @param memory_block 内存块指针
 * @param flags 操作标志位
 * @return 初始化后的内存块指针
 */
void* initialize_render_memory_block(void* memory_block, uint64_t flags) {
    // 设置内存块全局管理器指针
    *(void**)memory_block = global_render_memory_manager;
    
    // 根据标志位决定是否释放内存
    if ((flags & 1) != 0) {
        free(memory_block, 0x18);
    }
    
    return memory_block;
}

/**
 * 渲染数据结构初始化函数
 * 初始化渲染相关的数据结构，设置默认值和管理器指针
 * 
 * @param data_structure 数据结构指针
 * @return 初始化后的数据结构指针
 */
void* initialize_render_data_structure(void* data_structure) {
    // 初始化第一个数据块
    *(void**)(data_structure + 6) = global_render_config_table;
    *(uint64_t*)(data_structure + 8) = 0;
    *(uint32_t*)(data_structure + 10) = 0;
    *(void**)(data_structure + 6) = global_render_memory_manager;
    *(uint32_t**)(data_structure + 8) = (uint32_t*)(data_structure + 0xc);
    *(uint32_t*)(data_structure + 10) = 0;
    *(uint8_t*)(data_structure + 0xc) = 0;
    
    // 初始化第二个数据块
    *(void**)(data_structure + 0x2c) = global_render_config_table;
    *(uint64_t*)(data_structure + 0x2e) = 0;
    *(uint32_t*)(data_structure + 0x30) = 0;
    *(void**)(data_structure + 0x2c) = global_render_memory_manager;
    *(uint32_t**)(data_structure + 0x2e) = (uint32_t*)(data_structure + 0x32);
    *(uint32_t*)(data_structure + 0x30) = 0;
    *(uint8_t*)(data_structure + 0x32) = 0;
    
    // 初始化第三个数据块
    *(void**)(data_structure + 0x52) = global_render_config_table;
    *(uint64_t*)(data_structure + 0x54) = 0;
    *(uint32_t*)(data_structure + 0x56) = 0;
    *(void**)(data_structure + 0x52) = global_render_memory_manager;
    *(uint64_t*)(data_structure + 0x58) = 0;
    *(uint64_t*)(data_structure + 0x54) = 0;
    *(uint32_t*)(data_structure + 0x56) = 0;
    
    // 初始化第四个数据块
    *(void**)(data_structure + 0x5a) = global_render_config_table;
    *(uint64_t*)(data_structure + 0x5c) = 0;
    *(uint32_t*)(data_structure + 0x5e) = 0;
    *(void**)(data_structure + 0x5a) = global_render_memory_manager;
    *(uint64_t*)(data_structure + 0x60) = 0;
    *(uint64_t*)(data_structure + 0x5c) = 0;
    *(uint32_t*)(data_structure + 0x5e) = 0;
    
    // 设置默认值
    *(float*)data_structure = RENDER_MAX_FLOAT;
    *(uint64_t*)(data_structure + 1) = 0;
    *(uint64_t*)(data_structure + 3) = 0;
    *(uint32_t*)(data_structure + 5) = 0;
    
    return data_structure;
}

/**
 * 渲染投影矩阵计算函数
 * 根据投影参数计算投影矩阵，支持透视投影和正交投影
 * 
 * @param render_context 渲染上下文指针
 * @param projection_matrix 投影矩阵指针
 * @param projection_type 投影类型标志
 * @return 计算后的投影矩阵指针
 */
void* calculate_render_projection_matrix(void* render_context, void* projection_matrix, char projection_type) {
    // 从渲染上下文中提取参数
    double near_plane = (double)*(float*)(render_context + 0x108);
    double far_plane = (double)*(float*)(render_context + 0x104);
    double right_plane = (double)*(float*)(render_context + 0x118);
    double left_plane = (double)*(float*)(render_context + 0x114);
    double top_plane = (double)*(float*)(render_context + 0x10c);
    double bottom_plane = (double)*(float*)(render_context + 0x110);
    
    double scale_x, scale_y, scale_z;
    double offset_x, offset_y, offset_z;
    
    // 检查是否为透视投影
    if (*(char*)(render_context + 0x100) == '\0') {
        // 透视投影计算
        scale_x = 1.0 / (right_plane - left_plane);
        scale_y = 1.0 / (top_plane - bottom_plane);
        scale_z = 1.0 / (far_plane - near_plane);
        
        offset_x = (right_plane + left_plane) / (right_plane - left_plane);
        offset_y = (top_plane + bottom_plane) / (top_plane - bottom_plane);
        offset_z = (far_plane + near_plane) / (far_plane - near_plane);
    } else {
        // 正交投影计算
        scale_x = 2.0 / (right_plane - left_plane);
        offset_x = (right_plane + left_plane) / (right_plane - left_plane);
        
        scale_y = 2.0 / (top_plane - bottom_plane);
        offset_y = (top_plane + bottom_plane) / (top_plane - bottom_plane);
        
        scale_z = 2.0 / (far_plane - near_plane);
        offset_z = (far_plane + near_plane) / (far_plane - near_plane);
        
        // 处理特殊投影类型
        if ((projection_type != '\0') && (*(int*)(global_render_status_flags + 0xa10) != 0)) {
            // 调整投影参数以适应特殊需求
            offset_y = -1.0 - offset_y;
            offset_z = -1.0;
        }
    }
    
    // 调用渲染系统函数处理投影矩阵
    func_0x000180645570(projection_matrix, scale_x, scale_y, scale_z, offset_x, offset_y, offset_z);
    
    return projection_matrix;
}

/**
 * 渲染视锥体和相机参数设置函数
 * 根据投影类型和参数设置渲染视锥体和相机参数
 * 
 * @param render_params 渲染参数结构指针
 * @param projection_type 投影类型 (0-5)
 * @param camera_position 相机位置指针
 * @param render_flags 渲染标志位
 * @param fov_parameter 视野参数
 * @param coordinate_system 坐标系类型标志
 */
void setup_render_frustum_camera(void* render_params, uint32_t projection_type, 
                                 float* camera_position, uint64_t render_flags, 
                                 float fov_parameter, char coordinate_system) {
    // 从相机位置提取参数
    float cam_pos_x = camera_position[0];
    float cam_pos_y = camera_position[1];
    float cam_pos_z = camera_position[2];
    float cam_pos_w = camera_position[3];
    
    float frustum_params[8];
    float camera_params[8];
    
    // 根据投影类型设置视锥体参数
    if (projection_type < 6) {
        if (coordinate_system == '\0') {
            // 标准坐标系
            switch(projection_type) {
                case 0:  // 前视图
                    frustum_params[0] = 0.0f; frustum_params[1] = 1.0f; frustum_params[2] = 0.0f;
                    frustum_params[3] = RENDER_MAX_FLOAT;
                    camera_params[0] = -1.0f; camera_params[1] = 0.0f; camera_params[2] = 0.0f;
                    camera_params[3] = RENDER_MAX_FLOAT;
                    break;
                case 1:  // 后视图
                    frustum_params[0] = 0.0f; frustum_params[1] = 1.0f; frustum_params[2] = 0.0f;
                    frustum_params[3] = RENDER_MAX_FLOAT;
                    camera_params[0] = 1.0f; camera_params[1] = 0.0f; camera_params[2] = 0.0f;
                    camera_params[3] = RENDER_MAX_FLOAT;
                    break;
                case 2:  // 左视图
                    frustum_params[0] = 0.0f; frustum_params[1] = 0.0f; frustum_params[2] = -1.0f;
                    frustum_params[3] = RENDER_MAX_FLOAT;
                    camera_params[0] = 0.0f; camera_params[1] = -1.0f; camera_params[2] = 0.0f;
                    camera_params[3] = RENDER_MAX_FLOAT;
                    break;
                case 3:  // 右视图
                    frustum_params[0] = 0.0f; frustum_params[1] = 0.0f; frustum_params[2] = 1.0f;
                    frustum_params[3] = RENDER_MAX_FLOAT;
                    camera_params[0] = 0.0f; camera_params[1] = 1.0f; camera_params[2] = 0.0f;
                    camera_params[3] = RENDER_MAX_FLOAT;
                    break;
                case 4:  // 顶视图
                    frustum_params[0] = 0.0f; frustum_params[1] = 1.0f; frustum_params[2] = 0.0f;
                    frustum_params[3] = RENDER_MAX_FLOAT;
                    camera_params[0] = 0.0f; camera_params[1] = 0.0f; camera_params[2] = -1.0f;
                    camera_params[3] = RENDER_MAX_FLOAT;
                    break;
                case 5:  // 底视图
                    frustum_params[0] = 0.0f; frustum_params[1] = 1.0f; frustum_params[2] = 0.0f;
                    frustum_params[3] = RENDER_MAX_FLOAT;
                    camera_params[0] = 0.0f; camera_params[1] = 0.0f; camera_params[2] = 1.0f;
                    camera_params[3] = RENDER_MAX_FLOAT;
                    break;
            }
        } else {
            // 替代坐标系
            switch(projection_type) {
                case 0:  // 前视图（替代）
                    frustum_params[0] = 0.0f; frustum_params[1] = 0.0f; frustum_params[2] = 1.0f;
                    frustum_params[3] = RENDER_MAX_FLOAT;
                    camera_params[0] = -1.0f; camera_params[1] = 0.0f; camera_params[2] = 0.0f;
                    camera_params[3] = RENDER_MAX_FLOAT;
                    break;
                case 1:  // 后视图（替代）
                    frustum_params[0] = 0.0f; frustum_params[1] = 0.0f; frustum_params[2] = 1.0f;
                    frustum_params[3] = RENDER_MAX_FLOAT;
                    camera_params[0] = 1.0f; camera_params[1] = 0.0f; camera_params[2] = 0.0f;
                    camera_params[3] = RENDER_MAX_FLOAT;
                    break;
                case 2:  // 左视图（替代）
                    frustum_params[0] = 0.0f; frustum_params[1] = -1.0f; frustum_params[2] = 0.0f;
                    frustum_params[3] = RENDER_MAX_FLOAT;
                    camera_params[0] = 0.0f; camera_params[1] = 0.0f; camera_params[2] = -1.0f;
                    camera_params[3] = RENDER_MAX_FLOAT;
                    break;
                case 3:  // 右视图（替代）
                    frustum_params[0] = 0.0f; frustum_params[1] = 1.0f; frustum_params[2] = 0.0f;
                    frustum_params[3] = RENDER_MAX_FLOAT;
                    camera_params[0] = 0.0f; camera_params[1] = 0.0f; camera_params[2] = 1.0f;
                    camera_params[3] = RENDER_MAX_FLOAT;
                    break;
                case 4:  // 顶视图（替代）
                    frustum_params[0] = 0.0f; frustum_params[1] = 0.0f; frustum_params[2] = 1.0f;
                    frustum_params[3] = RENDER_MAX_FLOAT;
                    camera_params[0] = 0.0f; camera_params[1] = -1.0f; camera_params[2] = 0.0f;
                    camera_params[3] = RENDER_MAX_FLOAT;
                    break;
                case 5:  // 底视图（替代）
                    frustum_params[0] = 0.0f; frustum_params[1] = 0.0f; frustum_params[2] = 1.0f;
                    frustum_params[3] = RENDER_MAX_FLOAT;
                    camera_params[0] = 0.0f; camera_params[1] = 1.0f; camera_params[2] = 0.0f;
                    camera_params[3] = RENDER_MAX_FLOAT;
                    break;
            }
        }
    }
    
    // 将参数存储到渲染结构中
    *(uint64_t*)(render_params + 0x30) = *((uint64_t*)frustum_params);
    *(uint64_t*)(render_params + 0x32) = *((uint64_t*)(frustum_params + 4));
    *(float*)(render_params + 0x34) = frustum_params[0];
    *(float*)(render_params + 0x35) = frustum_params[1];
    *(float*)(render_params + 0x36) = frustum_params[2];
    *(float*)(render_params + 0x37) = frustum_params[3];
    *(float*)(render_params + 0x38) = camera_params[0];
    *(float*)(render_params + 0x39) = camera_params[1];
    *(float*)(render_params + 0x3a) = camera_params[2];
    *(float*)(render_params + 0x3b) = camera_params[3];
    *(float*)(render_params + 0x3c) = cam_pos_x;
    *(float*)(render_params + 0x3d) = cam_pos_y;
    *(float*)(render_params + 0x3e) = cam_pos_z;
    *(float*)(render_params + 0x3f) = cam_pos_w;
    
    // 调用渲染系统初始化函数
    FUN_1802864f0();
    
    // 设置默认渲染参数
    *(float*)(render_params + 0x47) = RENDER_DEFAULT_ANGLE;
    *(uint8_t*)(render_params + 0x40) = 1;
    *(float*)(render_params + 0x46) = fov_parameter;
    *(float*)(render_params + 0x45) = RENDER_DEFAULT_FOV;
    *(float*)(render_params + 0x48) = RENDER_UNIT_LENGTH;
    
    // 计算视野相关参数
    float tan_angle = (float)tanf(RENDER_ANGLE_CONSTANT);
    float fov_factor = tan_angle * RENDER_DEFAULT_FOV;
    *(float*)(render_params + 0x42) = fov_factor;
    *(float*)(render_params + 0x41) = -fov_factor;
    *(float*)(render_params + 0x43) = fov_factor / RENDER_UNIT_LENGTH;
    *(float*)(render_params + 0x44) = -(fov_factor / RENDER_UNIT_LENGTH);
    
    // 根据坐标系类型设置渲染矩阵
    if (*(char*)(render_params + 0x40) == '\0') {
        // 标准坐标系处理
        setup_render_matrices_standard(render_params);
    } else {
        // 替代坐标系处理
        setup_render_matrices_alternative(render_params);
    }
    
    // 设置负方向向量
    *(float*)(render_params + 4) = -camera_params[2];
    *(float*)(render_params + 5) = -camera_params[1];
    *(float*)(render_params + 6) = -camera_params[0];
    *(float*)(render_params + 7) = RENDER_MAX_FLOAT;
}

/**
 * 渲染矩阵更新函数
 * 根据当前参数更新渲染矩阵，支持标准坐标系和替代坐标系
 * 
 * @param render_params 渲染参数结构指针
 */
void update_render_matrices(void* render_params) {
    // 根据坐标系类型更新矩阵
    if (*(char*)(render_params + 0x40) == '\0') {
        // 标准坐标系处理
        setup_render_matrices_standard(render_params);
    } else {
        // 替代坐标系处理
        setup_render_matrices_alternative(render_params);
    }
    
    // 获取相机参数
    float camera_z = *(float*)(render_params + 0x3a);
    float camera_y = *(float*)(render_params + 0x39);
    float camera_x = *(float*)(render_params + 0x38);
    
    // 设置负方向向量
    *(float*)(render_params + 4) = -camera_z;
    *(float*)(render_params + 5) = -camera_y;
    *(float*)(render_params + 6) = -camera_x;
    *(float*)(render_params + 7) = RENDER_MAX_FLOAT;
}

// ============================================================================
// 内部辅助函数
// ============================================================================

/**
 * 标准坐标系渲染矩阵设置函数
 * 在标准坐标系下设置渲染矩阵
 * 
 * @param render_params 渲染参数结构指针
 */
static void setup_render_matrices_standard(void* render_params) {
    float factor1 = *(float*)(render_params + 0x43);
    float factor2 = *(float*)(render_params + 0x44);
    float factor3 = *(float*)(render_params + 0x42);
    float factor4 = *(float*)(render_params + 0x41);
    float factor5 = *(float*)(render_params + 0x46);
    float factor6 = *(float*)(render_params + 0x45);
    
    float cam_x = *(float*)(render_params + 0x3c);
    float cam_y = *(float*)(render_params + 0x3d);
    float cam_z = *(float*)(render_params + 0x3e);
    
    // 设置各种变换矩阵
    *(float*)(render_params + 0x20) = factor1 * *(float*)(render_params + 0x34) + cam_x;
    *(float*)(render_params + 0x21) = factor1 * *(float*)(render_params + 0x35) + cam_y;
    *(float*)(render_params + 0x22) = factor1 * *(float*)(render_params + 0x36) + cam_z;
    *(float*)(render_params + 0x23) = RENDER_MAX_FLOAT;
    
    *(float*)(render_params + 0x28) = factor2 * *(float*)(render_params + 0x34) + cam_x;
    *(float*)(render_params + 0x29) = factor2 * *(float*)(render_params + 0x35) + cam_y;
    *(float*)(render_params + 0x2a) = factor2 * *(float*)(render_params + 0x36) + cam_z;
    *(float*)(render_params + 0x2b) = RENDER_MAX_FLOAT;
    
    // ... 更多矩阵设置操作
}

/**
 * 替代坐标系渲染矩阵设置函数
 * 在替代坐标系下设置渲染矩阵
 * 
 * @param render_params 渲染参数结构指针
 */
static void setup_render_matrices_alternative(void* render_params) {
    float factor1 = *(float*)(render_params + 0x45);
    float factor2 = *(float*)(render_params + 0x43);
    float factor3 = *(float*)(render_params + 0x44);
    float factor4 = *(float*)(render_params + 0x42);
    float factor5 = *(float*)(render_params + 0x41);
    
    // 设置替代坐标系下的变换矩阵
    *(float*)(render_params + 0x24) = -(factor1 * *(float*)(render_params + 0x34)) - factor2 * *(float*)(render_params + 0x38);
    *(float*)(render_params + 0x25) = -(factor1 * *(float*)(render_params + 0x35)) - factor2 * *(float*)(render_params + 0x39);
    *(float*)(render_params + 0x26) = -(factor1 * *(float*)(render_params + 0x36)) - factor2 * *(float*)(render_params + 0x3a);
    *(float*)(render_params + 0x27) = RENDER_MAX_FLOAT;
    
    // ... 更多矩阵设置操作
}

// ============================================================================
// 函数别名定义（用于向后兼容）
// ============================================================================

void FUN_180285cf0(float *param_1, float *param_2, float *param_3)
    __attribute__((alias("multiply_render_matrix_4x4")));

void* FUN_180285df0(void* param_1, uint64_t param_2)
    __attribute__((alias("initialize_render_memory_block")));

void* FUN_180285e20(void* param_1)
    __attribute__((alias("initialize_render_data_structure")));

void* FUN_180286010(void* param_1, void* param_2, char param_3)
    __attribute__((alias("calculate_render_projection_matrix")));

void FUN_180286300(void* param_1, uint32_t param_2, float* param_3, uint64_t param_4, float param_5, char param_6)
    __attribute__((alias("setup_render_frustum_camera")));

void FUN_1802864f0(void* param_1)
    __attribute__((alias("update_render_matrices")));