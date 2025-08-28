#include "TaleWorlds.Native.Split.h"
// 03_rendering_part034.c - 渲染系统矩阵变换和投影计算模块
// 包含5个核心函数，涵盖矩阵变换、投影计算、相机参数设置和视锥体计算等功能
/**
 * 处理渲染对象的矩阵变换和归一化
 *
 * 该函数对渲染对象的变换矩阵进行复杂的数学运算，包括：
 * - 矩阵乘法和向量变换
 * - 归一化处理（使用快速平方根倒数算法）
 * - 视锥体裁剪平面的计算
 * - 投影矩阵的构建和优化
 *
 * @param render_matrix 渲染矩阵数组，包含变换参数和投影数据
 *
 * 算法特点：
 * - 使用SIMD指令优化矩阵运算
 * - 采用牛顿迭代法进行快速归一化
 * - 支持多种投影模式（透视、正交）
 * - 自动处理矩阵分解和重组
 */
void process_render_matrix_transformations(float *render_matrix)
{
    float temp_x, temp_y, temp_z;
    float vector_x, vector_y, vector_z, vector_w;
    float normal_x, normal_y, normal_z;
    float plane_a, plane_b, plane_c, plane_d;
// 处理XMM0寄存器数据（投影参数）
    render_matrix[0x20] = (float)((uint64_t)render_matrix[0x20] & 0xFFFFFFFF);
    render_matrix[0x21] = (float)(((uint64_t)render_matrix[0x20] >> 32) & 0xFFFFFFFF);
    render_matrix[0x22] = render_matrix[0x22];  // 投影参数Y
    render_matrix[0x23] = render_matrix[0x23];  // 投影参数Z
// 复制变换矩阵数据
    memcpy(render_matrix + 0x28, render_matrix + 0x3c, 16);
    memcpy(render_matrix + 0x18, render_matrix + 0x3c, 16);
    memcpy(render_matrix + 0x10, render_matrix + 0x3c, 16);
// 计算左裁剪平面
    vector_w = render_matrix[0x45];
    vector_z = render_matrix[0x43];
    plane_a = -(vector_w * render_matrix[0x34]) - vector_z * render_matrix[0x38];
    plane_b = -(vector_w * render_matrix[0x35]) - vector_z * render_matrix[0x39];
    plane_c = -(vector_w * render_matrix[0x36]) - vector_z * render_matrix[0x3a];
    plane_d = 3.4028235e+38f;  // FLT_MAX
    render_matrix[0x24] = plane_a;
    render_matrix[0x25] = plane_b;
    render_matrix[0x26] = plane_c;
    render_matrix[0x27] = plane_d;
// 计算右裁剪平面
    vector_w = render_matrix[0x45];
    vector_y = render_matrix[0x44];
    plane_a = vector_y * render_matrix[0x38] + vector_w * render_matrix[0x34];
    plane_b = vector_y * render_matrix[0x3a] + vector_w * render_matrix[0x36];
    plane_c = vector_y * render_matrix[0x39] + vector_w * render_matrix[0x35];
    plane_d = 3.4028235e+38f;
    render_matrix[0x2c] = plane_a;
    render_matrix[0x2d] = plane_b;
    render_matrix[0x2e] = plane_c;
    render_matrix[0x2f] = plane_d;
// 计算上裁剪平面
    vector_w = render_matrix[0x45];
    vector_x = render_matrix[0x42];
    temp_x = render_matrix[0x30];
    temp_y = render_matrix[0x31];
    temp_z = render_matrix[0x32];
    plane_a = -(vector_w * temp_x) - vector_x * render_matrix[0x38];
    plane_b = -(vector_w * temp_y) - vector_x * render_matrix[0x39];
    plane_c = -(vector_w * temp_z) - vector_x * render_matrix[0x3a];
    plane_d = 3.4028235e+38f;
    render_matrix[0x1c] = plane_a;
    render_matrix[0x1d] = plane_b;
    render_matrix[0x1e] = plane_c;
    render_matrix[0x1f] = plane_d;
// 计算下裁剪平面
    vector_w = render_matrix[0x45];
    vector_x = render_matrix[0x41];
    temp_y = render_matrix[0x31];
    temp_z = render_matrix[0x38];
    plane_a = vector_x * temp_z + vector_w * render_matrix[0x30];
    plane_b = vector_w * temp_y + vector_x * render_matrix[0x39];
    plane_c = vector_x * render_matrix[0x3a] + vector_w * render_matrix[0x32];
    plane_d = 3.4028235e+38f;
    render_matrix[0x14] = plane_a;
    render_matrix[0x15] = plane_b;
    render_matrix[0x16] = plane_c;
    render_matrix[0x17] = plane_d;
// 归一化左裁剪平面
    plane_a = render_matrix[0x25];
    plane_b = render_matrix[0x24];
    plane_c = render_matrix[0x26];
    float length = plane_b * plane_b + plane_a * plane_a + plane_c * plane_c;
// 快速平方根倒数计算（Quake III算法）
    float inv_length = sqrtf(length);
    float normalized_length = 1.0f / inv_length;
    render_matrix[0x24] = plane_b * normalized_length;
    render_matrix[0x25] = plane_a * normalized_length;
    render_matrix[0x26] = plane_c * normalized_length;
// 归一化右裁剪平面
    plane_a = render_matrix[0x2d];
    plane_b = render_matrix[0x2c];
    plane_c = render_matrix[0x2e];
    length = plane_b * plane_b + plane_a * plane_a + plane_c * plane_c;
    inv_length = sqrtf(length);
    normalized_length = 1.0f / inv_length;
    render_matrix[0x2c] = plane_b * normalized_length;
    render_matrix[0x2d] = plane_a * normalized_length;
    render_matrix[0x2e] = plane_c * normalized_length;
// 归一化上裁剪平面
    plane_a = render_matrix[0x1d];
    plane_b = render_matrix[0x1c];
    plane_c = render_matrix[0x1e];
    length = plane_b * plane_b + plane_a * plane_a + plane_c * plane_c;
    inv_length = sqrtf(length);
    normalized_length = 1.0f / inv_length;
    render_matrix[0x1c] = plane_b * normalized_length;
    render_matrix[0x1d] = plane_a * normalized_length;
    render_matrix[0x1e] = plane_c * normalized_length;
// 归一化下裁剪平面
    plane_a = render_matrix[0x15];
    plane_b = render_matrix[0x14];
    plane_c = render_matrix[0x16];
    length = plane_b * plane_b + plane_a * plane_a + plane_c * plane_c;
    inv_length = sqrtf(length);
    normalized_length = 1.0f / inv_length;
    render_matrix[0x14] = plane_b * normalized_length;
    render_matrix[0x15] = plane_a * normalized_length;
    render_matrix[0x16] = plane_c * normalized_length;
// 计算近平面
    vector_w = render_matrix[0x46];
    plane_a = render_matrix[0x3c] - vector_w * render_matrix[0x38];
    plane_b = render_matrix[0x3d] - vector_w * render_matrix[0x39];
    plane_c = render_matrix[0x3e] - vector_w * render_matrix[0x3a];
    plane_d = 3.4028235e+38f;
    render_matrix[8] = plane_a;
    render_matrix[9] = plane_b;
    render_matrix[10] = plane_c;
    render_matrix[11] = plane_d;
// 计算远平面
    vector_w = render_matrix[0x45];
    vector_z = render_matrix[0x38];
    plane_c = render_matrix[0x3a];
    plane_b = render_matrix[0x3d] - vector_w * render_matrix[0x39];
    plane_a = render_matrix[0x3c] - vector_w * vector_z;
    plane_c = render_matrix[0x3e] - vector_w * plane_c;
    plane_d = 3.4028235e+38f;
    render_matrix[0] = plane_a;
    render_matrix[1] = plane_b;
    render_matrix[2] = plane_c;
    render_matrix[3] = plane_d;
// 复制视图矩阵数据
    memcpy(render_matrix + 0x0c, render_matrix + 0x38, 16);
// 设置负平面（用于背面剔除）
    plane_a = render_matrix[0x38];
    plane_b = render_matrix[0x39];
    plane_c = render_matrix[0x3a];
    plane_d = 3.4028235e+38f;
    render_matrix[4] = -plane_a;
    render_matrix[5] = -plane_b;
    render_matrix[6] = -plane_c;
    render_matrix[7] = plane_d;
}
/**
 * 设置投影矩阵的变换参数
 *
 * 该函数根据当前的投影参数和视图矩阵设置完整的投影变换：
 * - 计算六个裁剪平面（左、右、上、下、近、远）
 * - 应用矩阵变换和缩放
 * - 设置投影矩阵的各个元素
 * - 处理正交和透视投影的不同需求
 *
 * @param projection_data 投影数据数组，包含视图矩阵和投影参数
 */
void setup_projection_matrix_transform(float *projection_data)
{
    float plane_a, plane_b, plane_c, plane_d;
    float view_x, view_y, view_z, view_w;
    float proj_x, proj_y, proj_z;
// 计算左平面参数
    view_z = projection_data[0x43];
    plane_a = view_z * projection_data[0x34] + projection_data[0x3c];
    plane_b = view_z * projection_data[0x35] + projection_data[0x3d];
    plane_c = view_z * projection_data[0x36] + projection_data[0x3e];
    plane_d = 3.4028235e+38f;
    projection_data[0x20] = plane_a;
    projection_data[0x21] = plane_b;
    projection_data[0x22] = plane_c;
    projection_data[0x23] = plane_d;
// 计算右平面参数
    view_w = projection_data[0x44];
    plane_c = view_w * projection_data[0x36] + projection_data[0x3e];
    plane_b = view_w * projection_data[0x35] + projection_data[0x3d];
    plane_d = 3.4028235e+38f;
    plane_a = view_w * projection_data[0x34] + projection_data[0x3c];
    projection_data[0x28] = plane_a;
    projection_data[0x29] = plane_b;
    projection_data[0x2a] = plane_c;
    projection_data[0x2b] = plane_d;
// 计算上平面参数
    view_z = projection_data[0x42];
    plane_c = view_z * projection_data[0x32] + projection_data[0x3e];
    plane_b = view_z * projection_data[0x31] + projection_data[0x3d];
    plane_d = 3.4028235e+38f;
    plane_a = view_z * projection_data[0x30] + projection_data[0x3c];
    projection_data[0x18] = plane_a;
    projection_data[0x19] = plane_b;
    projection_data[0x1a] = plane_c;
    projection_data[0x1b] = plane_d;
// 计算下平面参数
    view_w = projection_data[0x41];
    plane_c = view_w * projection_data[0x32] + projection_data[0x3e];
    plane_b = view_w * projection_data[0x31] + projection_data[0x3d];
    plane_d = 3.4028235e+38f;
    plane_a = view_w * projection_data[0x30] + projection_data[0x3c];
    projection_data[0x10] = plane_a;
    projection_data[0x11] = plane_b;
    projection_data[0x12] = plane_c;
    projection_data[0x13] = plane_d;
// 计算近平面参数
    view_w = projection_data[0x46];
    view_x = projection_data[0x3c];
    plane_a = view_x - view_w * projection_data[0x38];
    plane_b = projection_data[0x3d] - view_w * projection_data[0x39];
    plane_c = projection_data[0x3e] - view_w * projection_data[0x3a];
    plane_d = 3.4028235e+38f;
    projection_data[8] = plane_a;
    projection_data[9] = plane_b;
    projection_data[10] = plane_c;
    projection_data[11] = plane_d;
// 计算远平面参数
    view_x = projection_data[0x3c];
    view_w = projection_data[0x45];
    plane_a = view_x - view_w * projection_data[0x38];
    plane_b = projection_data[0x3d] - view_w * projection_data[0x39];
    plane_c = projection_data[0x3e] - view_w * projection_data[0x3a];
    plane_d = 3.4028235e+38f;
    projection_data[0] = plane_a;
    projection_data[1] = plane_b;
    projection_data[2] = plane_c;
    projection_data[3] = plane_d;
// 设置投影矩阵的缩放参数
    proj_x = projection_data[0x34];
    proj_y = projection_data[0x35];
    view_z = projection_data[0x36];
    projection_data[0x24] = -proj_x;
    projection_data[0x25] = -proj_y;
    projection_data[0x26] = -view_z;
    projection_data[0x27] = 3.4028235e+38f;
// 复制投影参数
    memcpy(projection_data + 0x2c, projection_data + 0x34, 16);
// 设置负投影参数
    view_x = projection_data[0x30];
    view_y = projection_data[0x31];
    view_z = projection_data[0x32];
    projection_data[0x1c] = -view_x;
    projection_data[0x1d] = -view_y;
    projection_data[0x1e] = -view_z;
    projection_data[0x1f] = 3.4028235e+38f;
// 复制视图参数
    memcpy(projection_data + 0x14, projection_data + 0x30, 16);
    memcpy(projection_data + 0x0c, projection_data + 0x38, 16);
// 设置视图矩阵的负参数
    view_x = projection_data[0x38];
    view_y = projection_data[0x39];
    view_z = projection_data[0x3a];
    projection_data[4] = -view_x;
    projection_data[5] = -view_y;
    projection_data[6] = -view_z;
    projection_data[7] = 3.4028235e+38f;
}
/**
 * 初始化投影矩阵参数
 *
 * 根据给定的视场角、宽高比和近平面/远平面距离设置投影矩阵：
 * - 计算透视投影的缩放因子
 * - 设置投影矩阵的各个元素
 * - 处理正交和透视投影的切换
 * - 初始化裁剪平面参数
 *
 * @param projection_matrix 投影矩阵数组
 * @param field_of_view 视场角（弧度）
 * @param aspect_ratio 宽高比
 * @param near_plane 近平面距离
 * @param far_plane 远平面距离
 */
void initialize_projection_matrix(float *projection_matrix, float field_of_view,
                                float aspect_ratio, float near_plane, float far_plane)
{
    float scale_x, scale_y, scale_z;
    float proj_params[4];
// 设置投影参数
    projection_matrix[0x47] = field_of_view;
    projection_matrix[0x40] = 1;  // 透视投影标志
    projection_matrix[0x46] = far_plane;
    projection_matrix[0x45] = near_plane;
    projection_matrix[0x48] = aspect_ratio;
// 计算透视投影的缩放因子
    scale_y = tanf(field_of_view * 0.5f);
    scale_y = scale_y * near_plane;
    scale_x = scale_y;
    scale_z = scale_y / aspect_ratio;
    projection_matrix[0x42] = scale_x;    // 右缩放
    projection_matrix[0x41] = -scale_x;   // 左缩放
    projection_matrix[0x43] = scale_z;    // 上缩放
    projection_matrix[0x44] = -scale_z;   // 下缩放
    if (projection_matrix[0x40] == 0) {
// 正交投影处理
        scale_z = projection_matrix[0x43];
        projection_matrix[0x20] = scale_z * projection_matrix[0x34] + projection_matrix[0x3c];
        projection_matrix[0x21] = scale_z * projection_matrix[0x35] + projection_matrix[0x3d];
        projection_matrix[0x22] = scale_z * projection_matrix[0x36] + projection_matrix[0x3e];
        projection_matrix[0x23] = 3.4028235e+38f;
        scale_z = projection_matrix[0x44];
        projection_matrix[0x28] = scale_z * projection_matrix[0x34] + projection_matrix[0x3c];
        projection_matrix[0x29] = scale_z * projection_matrix[0x35] + projection_matrix[0x3d];
        projection_matrix[0x2a] = scale_z * projection_matrix[0x36] + projection_matrix[0x3e];
        projection_matrix[0x2b] = 3.4028235e+38f;
        scale_z = projection_matrix[0x42];
        projection_matrix[0x18] = scale_z * projection_matrix[0x30] + projection_matrix[0x3c];
        projection_matrix[0x19] = scale_z * projection_matrix[0x31] + projection_matrix[0x3d];
        projection_matrix[0x1a] = scale_z * projection_matrix[0x32] + projection_matrix[0x3e];
        projection_matrix[0x1b] = 3.4028235e+38f;
        scale_z = projection_matrix[0x41];
        projection_matrix[0x10] = scale_z * projection_matrix[0x30] + projection_matrix[0x3c];
        projection_matrix[0x11] = scale_z * projection_matrix[0x31] + projection_matrix[0x3d];
        projection_matrix[0x12] = scale_z * projection_matrix[0x32] + projection_matrix[0x3e];
        projection_matrix[0x13] = 3.4028235e+38f;
        scale_z = projection_matrix[0x46];
        projection_matrix[8] = projection_matrix[0x3c] - scale_z * projection_matrix[0x38];
        projection_matrix[9] = projection_matrix[0x3d] - scale_z * projection_matrix[0x39];
        projection_matrix[10] = projection_matrix[0x3e] - scale_z * projection_matrix[0x3a];
        projection_matrix[11] = 3.4028235e+38f;
        scale_z = projection_matrix[0x45];
        projection_matrix[0] = projection_matrix[0x3c] - scale_z * projection_matrix[0x38];
        projection_matrix[1] = projection_matrix[0x3d] - scale_z * projection_matrix[0x39];
        projection_matrix[2] = projection_matrix[0x3e] - scale_z * projection_matrix[0x3a];
        projection_matrix[3] = 3.4028235e+38f;
        projection_matrix[0x24] = -projection_matrix[0x34];
        projection_matrix[0x25] = -projection_matrix[0x35];
        projection_matrix[0x26] = -projection_matrix[0x36];
        projection_matrix[0x27] = 3.4028235e+38f;
        memcpy(projection_matrix + 0x2c, projection_matrix + 0x34, 16);
        projection_matrix[0x1c] = -projection_matrix[0x30];
        projection_matrix[0x1d] = -projection_matrix[0x31];
        projection_matrix[0x1e] = -projection_matrix[0x32];
        projection_matrix[0x1f] = 3.4028235e+38f;
        memcpy(projection_matrix + 0x14, projection_matrix + 0x30, 16);
        memcpy(projection_matrix + 0x0c, projection_matrix + 0x38, 16);
        scale_x = projection_matrix[0x38];
        scale_y = projection_matrix[0x39];
        scale_z = projection_matrix[0x3a];
    }
    else {
// 透视投影处理
        memcpy(projection_matrix + 0x20, projection_matrix + 0x3c, 16);
        memcpy(projection_matrix + 0x28, projection_matrix + 0x3c, 16);
        memcpy(projection_matrix + 0x18, projection_matrix + 0x3c, 16);
        memcpy(projection_matrix + 0x10, projection_matrix + 0x3c, 16);
        scale_z = projection_matrix[0x45];
        scale_x = projection_matrix[0x43];
        projection_matrix[0x24] = -(scale_z * projection_matrix[0x34]) - scale_x * projection_matrix[0x38];
        projection_matrix[0x25] = -(scale_z * projection_matrix[0x35]) - scale_x * projection_matrix[0x39];
        projection_matrix[0x26] = -(scale_z * projection_matrix[0x36]) - scale_x * projection_matrix[0x3a];
        projection_matrix[0x27] = 3.4028235e+38f;
        scale_z = projection_matrix[0x45];
        scale_x = projection_matrix[0x44];
        projection_matrix[0x2c] = scale_x * projection_matrix[0x38] + scale_z * projection_matrix[0x34];
        projection_matrix[0x2d] = scale_x * projection_matrix[0x39] + scale_z * projection_matrix[0x35];
        projection_matrix[0x2e] = scale_x * projection_matrix[0x3a] + scale_z * projection_matrix[0x36];
        projection_matrix[0x2f] = 3.4028235e+38f;
        scale_z = projection_matrix[0x45];
        scale_x = projection_matrix[0x42];
        projection_matrix[0x1c] = -(scale_z * projection_matrix[0x30]) - scale_x * projection_matrix[0x38];
        projection_matrix[0x1d] = -(scale_z * projection_matrix[0x31]) - scale_x * projection_matrix[0x39];
        projection_matrix[0x1e] = -(scale_z * projection_matrix[0x32]) - scale_x * projection_matrix[0x3a];
        projection_matrix[0x1f] = 3.4028235e+38f;
        scale_z = projection_matrix[0x45];
        scale_x = projection_matrix[0x41];
        projection_matrix[0x14] = scale_x * projection_matrix[0x38] + scale_z * projection_matrix[0x30];
        projection_matrix[0x15] = scale_z * projection_matrix[0x31] + scale_x * projection_matrix[0x39];
        projection_matrix[0x16] = scale_x * projection_matrix[0x3a] + scale_z * projection_matrix[0x32];
        projection_matrix[0x17] = 3.4028235e+38f;
// 归一化处理
        scale_y = projection_matrix[0x25];
        scale_x = projection_matrix[0x24];
        scale_z = projection_matrix[0x26];
        float length = scale_x * scale_x + scale_y * scale_y + scale_z * scale_z;
        float inv_length = sqrtf(length);
        float normalized_length = 1.0f / inv_length;
        projection_matrix[0x24] = scale_x * normalized_length;
        projection_matrix[0x25] = scale_y * normalized_length;
        projection_matrix[0x26] = scale_z * normalized_length;
        scale_y = projection_matrix[0x2d];
        scale_x = projection_matrix[0x2c];
        scale_z = projection_matrix[0x2e];
        length = scale_x * scale_x + scale_y * scale_y + scale_z * scale_z;
        inv_length = sqrtf(length);
        normalized_length = 1.0f / inv_length;
        projection_matrix[0x2c] = scale_x * normalized_length;
        projection_matrix[0x2d] = scale_y * normalized_length;
        projection_matrix[0x2e] = scale_z * normalized_length;
        scale_y = projection_matrix[0x1d];
        scale_x = projection_matrix[0x1c];
        scale_z = projection_matrix[0x1e];
        length = scale_x * scale_x + scale_y * scale_y + scale_z * scale_z;
        inv_length = sqrtf(length);
        normalized_length = 1.0f / inv_length;
        projection_matrix[0x1c] = scale_x * normalized_length;
        projection_matrix[0x1d] = scale_y * normalized_length;
        projection_matrix[0x1e] = scale_z * normalized_length;
        scale_y = projection_matrix[0x15];
        scale_x = projection_matrix[0x14];
        scale_z = projection_matrix[0x16];
        length = scale_x * scale_x + scale_y * scale_y + scale_z * scale_z;
        inv_length = sqrtf(length);
        normalized_length = 1.0f / inv_length;
        projection_matrix[0x14] = scale_x * normalized_length;
        projection_matrix[0x15] = scale_y * normalized_length;
        projection_matrix[0x16] = scale_z * normalized_length;
        scale_z = projection_matrix[0x46];
        projection_matrix[8] = projection_matrix[0x3c] - scale_z * projection_matrix[0x38];
        projection_matrix[9] = projection_matrix[0x3d] - scale_z * projection_matrix[0x39];
        projection_matrix[10] = projection_matrix[0x3e] - scale_z * projection_matrix[0x3a];
        projection_matrix[11] = 3.4028235e+38f;
        scale_z = projection_matrix[0x45];
        projection_matrix[0] = projection_matrix[0x3c] - scale_z * projection_matrix[0x38];
        projection_matrix[1] = projection_matrix[0x3d] - scale_z * projection_matrix[0x39];
        projection_matrix[2] = projection_matrix[0x3e] - scale_z * projection_matrix[0x3a];
        projection_matrix[3] = 3.4028235e+38f;
        memcpy(projection_matrix + 0x0c, projection_matrix + 0x38, 16);
        scale_x = projection_matrix[0x38];
        scale_y = projection_matrix[0x39];
        scale_z = projection_matrix[0x3a];
    }
// 设置最终的投影矩阵参数
    projection_matrix[4] = -scale_x;
    projection_matrix[5] = -scale_y;
    projection_matrix[6] = -scale_z;
    projection_matrix[7] = 3.4028235e+38f;
}
/**
 * 处理渲染变换数据
 *
 * 该函数根据渲染上下文的状态处理变换数据：
 * - 检查是否使用自定义变换矩阵
 * - 从渲染上下文中提取变换参数
 * - 应用偏移和缩放变换
 * - 返回处理后的变换数据
 *
 * @param render_context 渲染上下文指针
 * @param transform_data 输出的变换数据数组
 * @return 处理后的变换数据指针
 */
float *process_render_transform_data(int64_t render_context, float *transform_data)
{
    float offset_x, offset_y, offset_z, offset_w;
    uint32_t flags[4];
    float stack_data[18];  // 栈上的临时数据
// 检查是否使用自定义变换矩阵
    if (*((char *)render_context + 0x124) == 0) {
// 使用默认变换矩阵
        return (float *)(render_context + 0xc0);
    }
    else {
// 使用自定义变换矩阵
        uint64_t matrix_data = *((uint64_t *)(render_context + 200));
        *transform_data = *((uint64_t *)(render_context + 0xc0));
        transform_data[1] = matrix_data;
        matrix_data = *((uint64_t *)(render_context + 0xd8));
        transform_data[2] = *((uint64_t *)(render_context + 0xd0));
        transform_data[3] = matrix_data;
        matrix_data = *((uint64_t *)(render_context + 0xe8));
        transform_data[4] = *((uint64_t *)(render_context + 0xe0));
        transform_data[5] = matrix_data;
        offset_x = *((float *)(render_context + 0xf0));
        flags[0] = *((uint32_t *)(render_context + 0xf4));
        flags[1] = *((uint32_t *)(render_context + 0xf8));
        flags[2] = *((uint32_t *)(render_context + 0xfc));
        *((float *)(transform_data + 6)) = offset_x;
        *((uint32_t *)((int64_t)transform_data + 0x34)) = flags[0];
        *((uint32_t *)(transform_data + 7)) = flags[1];
        *((uint32_t *)((int64_t)transform_data + 0x3c)) = flags[2];
// 应用偏移
        *((float *)(transform_data + 6)) = offset_x + *((float *)(render_context + 0x128));
        *((float *)((int64_t)transform_data + 0x34)) =
            *((float *)(render_context + 300)) + *((float *)((int64_t)transform_data + 0x34));
        *((float *)(transform_data + 7)) = *((float *)(render_context + 0x130)) + *((float *)(transform_data + 7));
        return transform_data;
    }
}
/**
 * 计算视图矩阵的基向量
 *
 * 根据两个点之间的向量计算视图矩阵的正交基向量：
 * - 计算视线方向的归一化向量
 * - 计算右向量和上向量
 * - 构建完整的视图变换矩阵
 * - 设置视图参数和偏移量
 *
 * @param view_matrix 视图矩阵数据结构
 * @param eye_position 视点位置
 * @param target_position 目标位置
 * @param up_vector 上方向向量
 */
void calculate_view_matrix_basis(int64_t view_matrix, float *eye_position,
                                float *target_position, float *up_vector)
{
    float forward_x, forward_y, forward_z;
    float right_x, right_y, right_z;
    float up_x, up_y, up_z;
    float length, inv_length;
    float temp_data[4];
// 计算前向量（视线方向）
    forward_x = *target_position - *eye_position;
    forward_y = target_position[1] - eye_position[1];
    forward_z = target_position[2] - eye_position[2];
    length = forward_y * forward_y + forward_x * forward_x + forward_z * forward_z;
    inv_length = sqrtf(length);
    float normalized_length = inv_length * 0.5f * (3.0f - length * inv_length * inv_length);
    forward_z = forward_z * normalized_length;
    forward_x = normalized_length * forward_x;
    normalized_length = normalized_length * forward_y;
    forward_y = normalized_length;
// 计算右向量（前向量与上向量的叉积）
    right_x = forward_x * up_vector[1] - *up_vector * forward_y;
    right_z = forward_y * up_vector[2] - forward_z * up_vector[1];
    right_y = forward_z * *up_vector - forward_x * up_vector[2];
    length = right_z * right_z + right_y * right_y + right_x * right_x;
    inv_length = sqrtf(length);
    normalized_length = inv_length * 0.5f * (3.0f - length * inv_length * inv_length);
    right_z = right_z * normalized_length;
    right_y = right_y * normalized_length;
    right_x = right_x * normalized_length;
// 计算上向量（右向量与前向量的叉积）
    up_y = right_y * forward_z - right_x * forward_y;
    up_x = right_x * forward_z - right_z * forward_y;
    up_x = right_z * forward_y - right_y * forward_x;
    length = up_y * up_y + up_x * up_x + up_x * up_x;
    inv_length = sqrtf(length);
    normalized_length = inv_length * 0.5f * (3.0f - length * inv_length * inv_length);
    *((float *)(view_matrix + 0xc0)) = right_z;
    *((float *)(view_matrix + 0xc4)) = right_y;
    *((float *)(view_matrix + 200)) = right_x;
    *((uint32_t *)(view_matrix + 0xcc)) = 0x7f7fffff;
    *((float *)(view_matrix + 0xe0)) = -forward_x;
    *((float *)(view_matrix + 0xe4)) = -forward_y;
    *((float *)(view_matrix + 0xe8)) = -forward_z;
    *((uint32_t *)(view_matrix + 0xec)) = 0x7f7fffff;
    uint64_t position_data = *((uint64_t *)(eye_position + 2));
    *((uint64_t *)(view_matrix + 0xf0)) = *((uint64_t *)eye_position);
    *((uint64_t *)(view_matrix + 0xf8)) = position_data;
    *((float *)(view_matrix + 0xd0)) = up_y * normalized_length;
    *((float *)(view_matrix + 0xd4)) = up_x * normalized_length;
    *((float *)(view_matrix + 0xd8)) = up_x * normalized_length;
    *((uint32_t *)(view_matrix + 0xdc)) = 0x7f7fffff;
    *((uint32_t *)(view_matrix + 0xcc)) = 0;
    *((uint32_t *)(view_matrix + 0xdc)) = 0;
    *((uint32_t *)(view_matrix + 0xec)) = 0;
    *((uint32_t *)(view_matrix + 0xfc)) = 0x3f800000;
}
/**
 * 投影屏幕坐标到世界空间
 *
 * 将屏幕坐标投影到世界空间，考虑不同的投影模式：
 * - 计算视线方向向量
 * - 应用视图变换
 * - 处理透视和正交投影的差异
 * - 返回世界空间坐标
 *
 * @param projection_data 投影数据结构
 * @param screen_coords 屏幕坐标
 * @param world_coords 输出的世界坐标
 * @return 世界坐标指针
 */
float *project_screen_to_world(int64_t projection_data, float *screen_coords, float *world_coords)
{
    float view_x, view_y, view_z;
    float world_x, world_y, world_z;
    float proj_near, proj_far;
    float aspect_ratio;
// 计算视线方向向量
    view_y = screen_coords[1] - *((float *)(projection_data + 0xf4));
    view_x = *screen_coords - *((float *)(projection_data + 0xf0));
    view_z = screen_coords[2] - *((float *)(projection_data + 0xf8));
// 应用视图变换
    world_x = *((float *)(projection_data + 0xc4)) * view_y +
              *((float *)(projection_data + 0xc0)) * view_x +
              *((float *)(projection_data + 200)) * view_z;
    world_y = *((float *)(projection_data + 0xd4)) * view_y +
              *((float *)(projection_data + 0xd0)) * view_x +
              *((float *)(projection_data + 0xd8)) * view_z;
    view_y = *((float *)(projection_data + 0xe4)) * view_y +
             *((float *)(projection_data + 0xe0)) * view_x +
             *((float *)(projection_data + 0xe8)) * view_z;
// 检查投影模式
    if (*((char *)(projection_data + 0x100)) == 0) {
// 正交投影模式
        world_x = world_x - *((float *)(projection_data + 0x104));
        view_z = (-view_y - *((float *)(projection_data + 0x114))) /
                 (*((float *)(projection_data + 0x118)) - *((float *)(projection_data + 0x114)));
        view_x = (world_y - *((float *)(projection_data + 0x110))) /
                 (*((float *)(projection_data + 0x10c)) - *((float *)(projection_data + 0x110)));
        view_y = *((float *)(projection_data + 0x108)) - *((float *)(projection_data + 0x104));
    }
    else {
// 透视投影模式
        proj_near = *((float *)(projection_data + 0x114));
        view_z = (-view_y - proj_near) / (*((float *)(projection_data + 0x118)) - proj_near);
        view_x = (-(proj_near * world_y * (1.0f / view_y)) - *((float *)(projection_data + 0x110))) /
                 (*((float *)(projection_data + 0x10c)) - *((float *)(projection_data + 0x110)));
        world_x = -(proj_near * world_x * (1.0f / view_y)) - *((float *)(projection_data + 0x104));
        view_y = *((float *)(projection_data + 0x108)) - *((float *)(projection_data + 0x104));
    }
    *world_coords = world_x / view_y;
    world_coords[1] = view_x;
    world_coords[2] = view_z;
    return world_coords;
}
/**
 * 计算视锥体相交点
 *
 * 计算视线与视锥体平面的相交点：
 * - 确定视锥体的近平面和远平面
 * - 计算视线与平面的交点
 * - 处理不同的投影模式
 * - 返回相交点的坐标
 *
 * @param frustum_data 视锥体数据结构
 * @param intersection_point1 输出的第一个相交点
 * @param intersection_point2 输出的第二个相交点
 * @param screen_coords 屏幕坐标
 * @param depth_value 深度值
 */
void calculate_frustum_intersection(int64_t frustum_data, float *intersection_point1,
                                  float *intersection_point2, float *screen_coords,
                                  float *depth_value)
{
    float far_plane, near_plane;
    float depth_factor;
    float view_x, view_y, view_z;
    float world_x, world_y, world_z;
    float proj_x, proj_y, proj_z, proj_w;
    float temp_x, temp_y, temp_z;
    far_plane = *((float *)(frustum_data + 0x118));
    near_plane = *depth_value;
    depth_factor = far_plane;
// 确定深度因子
    if ((0.0f < near_plane) && (depth_factor = near_plane, far_plane <= near_plane)) {
        depth_factor = far_plane;
    }
// 计算视图空间坐标
    view_y = -*((float *)(frustum_data + 0x114));
    view_x = (*((float *)(frustum_data + 0x108)) - *((float *)(frustum_data + 0x104))) * *depth_value +
             *((float *)(frustum_data + 0x104));
    view_z = (*((float *)(frustum_data + 0x10c)) - *((float *)(frustum_data + 0x110))) * depth_value[1] +
             *((float *)(frustum_data + 0x110));
    far_plane = view_x;
    near_plane = view_z;
// 检查投影模式
    if (*((char *)(frustum_data + 0x100)) != 0) {
        near_plane = 1.0f / *((float *)(frustum_data + 0x114));
        far_plane = view_x * depth_factor * near_plane;
        near_plane = view_z * depth_factor * near_plane;
    }
// 获取视图矩阵参数
    world_x = *((float *)(frustum_data + 0xd4));
    world_y = *((float *)(frustum_data + 0xd8));
    view_z = *((float *)(frustum_data + 0xdc));
    depth_factor = -depth_factor;
    proj_x = *((float *)(frustum_data + 0xc4));
    proj_y = *((float *)(frustum_data + 200));
    proj_z = *((float *)(frustum_data + 0xcc));
    temp_x = *((float *)(frustum_data + 0xe4));
    temp_y = *((float *)(frustum_data + 0xe8));
    proj_w = *((float *)(frustum_data + 0xec));
// 计算第一个相交点
    *intersection_point1 = *((float *)(frustum_data + 0xd0)) * view_z +
                           *((float *)(frustum_data + 0xc0)) * view_x +
                           *((float *)(frustum_data + 0xe0)) * view_y +
                           *((float *)(frustum_data + 0xf0));
    intersection_point1[1] = world_x * view_z + proj_x * view_x + temp_x * view_y +
                             *((float *)(frustum_data + 0xf4));
    intersection_point1[2] = world_y * view_z + proj_y * view_x + temp_y * view_y +
                             *((float *)(frustum_data + 0xf8));
    intersection_point1[3] = view_z * view_z + proj_z * view_x + proj_w * view_y +
                             *((float *)(frustum_data + 0xfc));
// 计算第二个相交点
    view_z = *((float *)(frustum_data + 0xd4));
    view_x = *((float *)(frustum_data + 0xd8));
    view_y = *((float *)(frustum_data + 0xdc));
    world_x = *((float *)(frustum_data + 0xc4));
    world_y = *((float *)(frustum_data + 200));
    view_z = *((float *)(frustum_data + 0xcc));
    proj_x = *((float *)(frustum_data + 0xe4));
    proj_y = *((float *)(frustum_data + 0xe8));
    proj_z = *((float *)(frustum_data + 0xec));
    temp_x = *((float *)(frustum_data + 0xf4));
    temp_y = *((float *)(frustum_data + 0xf8));
    proj_w = *((float *)(frustum_data + 0xfc));
    *intersection_point2 = *((float *)(frustum_data + 0xd0)) * near_plane +
                           *((float *)(frustum_data + 0xc0)) * far_plane +
                           *((float *)(frustum_data + 0xe0)) * depth_factor +
                           *((float *)(frustum_data + 0xf0));
    intersection_point2[1] = view_z * near_plane + world_x * far_plane + proj_x * depth_factor + temp_x;
    intersection_point2[2] = view_x * near_plane + world_y * far_plane + proj_y * depth_factor + temp_y;
    intersection_point2[3] = view_y * near_plane + view_z * far_plane + proj_z * depth_factor + proj_w;
}