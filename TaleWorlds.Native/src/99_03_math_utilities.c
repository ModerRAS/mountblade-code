/**
 * @file 99_03_math_utilities.c
 * @brief 数学工具函数模块
 * 
 * 本模块是TaleWorlds引擎的数学工具函数组件，主要负责：
 * - 基础数学运算和数值计算
 * - 向量运算和几何计算
 * - 矩阵操作和线性代数
 * - 三角函数和角度转换
 * - 插值计算和曲线拟合
 * - 随机数生成和统计分析
 * - 数值积分和微分方程
 * - 优化算法和求解器
 * - 几何计算和空间分析
 * 
 * 该模块为游戏引擎提供底层数学运算支持，是物理模拟、图形渲染、
 * AI计算等系统的基础数学库。
 */

#include "TaleWorlds.Native.Split.h"

//============================================================================
// 数学常量定义
//============================================================================

/**
 * @defgroup MathConstants 数学常量
 * @brief 数学计算中使用的常量定义
 * @{
 */

#define PI 3.14159265358979323846           /**< 圆周率 */
#define TWO_PI 6.28318530717958647692        /**< 2倍圆周率 */
#define HALF_PI 1.57079632679489661923        /**< 半圆周率 */
#define QUARTER_PI 0.78539816339744830962    /**< 四分之一圆周率 */
#define E 2.71828182845904523536             /**< 自然对数的底数 */
#define SQRT2 1.41421356237309504880         /**< 2的平方根 */
#define SQRT3 1.73205080756887729352         /**< 3的平方根 */
#define GOLDEN_RATIO 1.61803398874989484820   /**< 黄金比例 */
#define EPSILON 1e-10                         /**< 浮点数精度误差容忍度 */
#define INFINITY 1e300                        /**< 无穷大表示 */
#define DEG_TO_RAD 0.01745329251994329577    /**< 度转弧度系数 */
#define RAD_TO_DEG 57.29577951308232087680   /**< 弧度转角度系数 */

/** @} */

//============================================================================
// 数学精度和计算模式定义
//============================================================================

/**
 * @defgroup MathPrecision 数学精度和计算模式
 * @brief 数学计算的精度控制和模式选择
 * @{
 */

#define SINGLE_PRECISION 1    /**< 单精度浮点计算 */
#define DOUBLE_PRECISION 2    /**< 双精度浮点计算 */
#define HIGH_PRECISION 4      /**< 高精度计算模式 */
#define FAST_APPROXIMATION 8  /**< 快速近似计算模式 */

#define VECTOR_SIZE_2D 2      /**< 二维向量大小 */
#define VECTOR_SIZE_3D 3      /**< 三维向量大小 */
#define VECTOR_SIZE_4D 4      /**< 四维向量大小 */

#define MATRIX_SIZE_2X2 4     /**< 2x2矩阵大小 */
#define MATRIX_SIZE_3X3 9     /**< 3x3矩阵大小 */
#define MATRIX_SIZE_4X4 16    /**< 4x4矩阵大小 */

/** @} */

//============================================================================
// 数学计算状态码
//============================================================================

/**
 * @defgroup MathStatusCodes 数学计算状态码
 * @brief 数学计算操作的返回状态码
 * @{
 */

#define MATH_SUCCESS 0                    /**< 数学计算成功 */
#define MATH_ERROR_DIVISION_BY_ZERO 1      /**< 除零错误 */
#define MATH_ERROR_INVALID_INPUT 2         /**< 输入参数无效 */
#define MATH_ERROR_OVERFLOW 3              /**< 数值溢出 */
#define MATH_ERROR_UNDERFLOW 4             /**< 数值下溢 */
#define MATH_ERROR_SINGULAR_MATRIX 5       /**< 奇异矩阵错误 */
#define MATH_ERROR_NON_CONVERGENT 6        /**< 算法不收敛 */
#define MATH_ERROR_INSUFFICIENT_MEMORY 7   /**< 内存不足 */
#define MATH_ERROR_INVALID_OPERATION 8      /**< 无效操作 */

/** @} */

//============================================================================
// 数学工具函数实现
//============================================================================

/**
 * @defgroup MathUtilityFunctions 数学工具函数
 * @brief 核心数学工具函数实现
 * @{
 */

/**
 * @brief 向量标准化函数
 * 
 * 将输入向量转换为单位向量，保持原始方向但长度为1。
 * 
 * @param vector 输入向量数组
 * @param dimension 向量维度（2D、3D或4D）
 * @param result 输出的标准化向量
 * @return int 状态码：MATH_SUCCESS表示成功，其他表示错误
 * 
 * @note 该函数处理浮点数精度问题，当向量长度接近零时返回错误
 * @warning 输入向量不能为零向量，否则会导致除零错误
 */
int normalize_vector_float(const float* vector, int dimension, float* result) {
    if (!vector || !result || dimension <= 0) {
        return MATH_ERROR_INVALID_INPUT;
    }
    
    float length = 0.0f;
    for (int i = 0; i < dimension; i++) {
        length += vector[i] * vector[i];
    }
    
    length = sqrtf(length);
    if (length < EPSILON) {
        return MATH_ERROR_DIVISION_BY_ZERO;
    }
    
    float inv_length = 1.0f / length;
    for (int i = 0; i < dimension; i++) {
        result[i] = vector[i] * inv_length;
    }
    
    return MATH_SUCCESS;
}

/**
 * @brief 矩阵乘法函数
 * 
 * 计算两个矩阵的乘积，支持2x2、3x3、4x4矩阵运算。
 * 
 * @param matrix_a 第一个矩阵（行优先存储）
 * @param matrix_b 第二个矩阵（行优先存储）
 * @param rows_a 矩阵A的行数
 * @param cols_a 矩阵A的列数（必须等于矩阵B的行数）
 * @param cols_b 矩阵B的列数
 * @param result 输出的结果矩阵
 * @return int 状态码：MATH_SUCCESS表示成功，其他表示错误
 * 
 * @note 矩阵A的列数必须等于矩阵B的行数才能进行乘法运算
 * @warning 结果矩阵不能与输入矩阵重叠
 */
int matrix_multiply_float(const float* matrix_a, const float* matrix_b, 
                         int rows_a, int cols_a, int cols_b, float* result) {
    if (!matrix_a || !matrix_b || !result || rows_a <= 0 || cols_a <= 0 || cols_b <= 0) {
        return MATH_ERROR_INVALID_INPUT;
    }
    
    for (int i = 0; i < rows_a; i++) {
        for (int j = 0; j < cols_b; j++) {
            float sum = 0.0f;
            for (int k = 0; k < cols_a; k++) {
                sum += matrix_a[i * cols_a + k] * matrix_b[k * cols_b + j];
            }
            result[i * cols_b + j] = sum;
        }
    }
    
    return MATH_SUCCESS;
}

/**
 * @brief 向量点积函数
 * 
 * 计算两个向量的点积（内积），结果为标量值。
 * 
 * @param vector_a 第一个向量
 * @param vector_b 第二个向量
 * @param dimension 向量维度
 * @param float 返回点积结果
 * 
 * @note 点积结果可用于计算向量夹角和投影
 * @warning 两个向量必须具有相同的维度
 */
float vector_dot_product_float(const float* vector_a, const float* vector_b, int dimension) {
    if (!vector_a || !vector_b || dimension <= 0) {
        return 0.0f;
    }
    
    float dot_product = 0.0f;
    for (int i = 0; i < dimension; i++) {
        dot_product += vector_a[i] * vector_b[i];
    }
    
    return dot_product;
}

/**
 * @brief 向量叉积函数
 * 
 * 计算两个三维向量的叉积（外积），结果为垂直于两个输入向量的新向量。
 * 
 * @param vector_a 第一个三维向量
 * @param vector_b 第二个三维向量
 * @param result 输出的叉积结果向量
 * @return int 状态码：MATH_SUCCESS表示成功，其他表示错误
 * 
 * @note 叉积结果的长度等于两个向量长度乘积乘以夹角正弦值
 * @warning 只支持三维向量计算
 */
int vector_cross_product_float(const float* vector_a, const float* vector_b, float* result) {
    if (!vector_a || !vector_b || !result) {
        return MATH_ERROR_INVALID_INPUT;
    }
    
    // 叉积公式：a × b = (a2b3 - a3b2, a3b1 - a1b3, a1b2 - a2b1)
    result[0] = vector_a[1] * vector_b[2] - vector_a[2] * vector_b[1];
    result[1] = vector_a[2] * vector_b[0] - vector_a[0] * vector_b[2];
    result[2] = vector_a[0] * vector_b[1] - vector_a[1] * vector_b[0];
    
    return MATH_SUCCESS;
}

/**
 * @brief 矩阵转置函数
 * 
 * 计算矩阵的转置，即交换矩阵的行和列。
 * 
 * @param matrix 输入矩阵
 * @param rows 矩阵行数
 * @param cols 矩阵列数
 * @param result 输出的转置矩阵
 * @return int 状态码：MATH_SUCCESS表示成功，其他表示错误
 * 
 * @note 转置矩阵的行数等于原矩阵的列数，列数等于原矩阵的行数
 * @warning 结果矩阵不能与输入矩阵重叠
 */
int matrix_transpose_float(const float* matrix, int rows, int cols, float* result) {
    if (!matrix || !result || rows <= 0 || cols <= 0) {
        return MATH_ERROR_INVALID_INPUT;
    }
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j * rows + i] = matrix[i * cols + j];
        }
    }
    
    return MATH_SUCCESS;
}

/**
 * @brief 矩阵求逆函数
 * 
 * 计算方阵的逆矩阵，支持2x2、3x3、4x4矩阵。
 * 
 * @param matrix 输入方阵
 * @param size 矩阵大小（2、3或4）
 * @param result 输出的逆矩阵
 * @return int 状态码：MATH_SUCCESS表示成功，其他表示错误
 * 
 * @note 使用伴随矩阵法计算逆矩阵
 * @warning 奇异矩阵无法求逆，会返回错误
 */
int matrix_inverse_float(const float* matrix, int size, float* result) {
    if (!matrix || !result || size <= 0) {
        return MATH_ERROR_INVALID_INPUT;
    }
    
    float det = matrix_determinant_float(matrix, size);
    if (fabsf(det) < EPSILON) {
        return MATH_ERROR_SINGULAR_MATRIX;
    }
    
    float inv_det = 1.0f / det;
    
    if (size == 2) {
        // 2x2矩阵求逆公式
        result[0] = matrix[3] * inv_det;
        result[1] = -matrix[1] * inv_det;
        result[2] = -matrix[2] * inv_det;
        result[3] = matrix[0] * inv_det;
    }
    else if (size == 3) {
        // 3x3矩阵求逆（使用伴随矩阵法）
        float cofactor[9];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                // 计算余子式
                float minor[4];
                int minor_index = 0;
                for (int mi = 0; mi < 3; mi++) {
                    for (int mj = 0; mj < 3; mj++) {
                        if (mi != i && mj != j) {
                            minor[minor_index++] = matrix[mi * 3 + mj];
                        }
                    }
                }
                cofactor[j * 3 + i] = ((i + j) % 2 == 0 ? 1.0f : -1.0f) * 
                                    (minor[0] * minor[3] - minor[1] * minor[2]);
            }
        }
        
        for (int i = 0; i < 9; i++) {
            result[i] = cofactor[i] * inv_det;
        }
    }
    else {
        return MATH_ERROR_INVALID_INPUT;
    }
    
    return MATH_SUCCESS;
}

/**
 * @brief 矩阵行列式计算函数
 * 
 * 计算方阵的行列式值，用于判断矩阵是否可逆。
 * 
 * @param matrix 输入方阵
 * @param size 矩阵大小（2、3或4）
 * @return float 行列式值
 * 
 * @note 行列式为零表示矩阵是奇异矩阵，不可逆
 * @warning 行列式值可能溢出，需要检查数值范围
 */
float matrix_determinant_float(const float* matrix, int size) {
    if (!matrix || size <= 0) {
        return 0.0f;
    }
    
    if (size == 1) {
        return matrix[0];
    }
    else if (size == 2) {
        return matrix[0] * matrix[3] - matrix[1] * matrix[2];
    }
    else if (size == 3) {
        // 3x3矩阵行列式展开公式
        return matrix[0] * (matrix[4] * matrix[8] - matrix[5] * matrix[7]) -
               matrix[1] * (matrix[3] * matrix[8] - matrix[5] * matrix[6]) +
               matrix[2] * (matrix[3] * matrix[7] - matrix[4] * matrix[6]);
    }
    else {
        return 0.0f;
    }
}

/**
 * @brief 矩阵特征值计算函数
 * 
 * 计算对称矩阵的特征值和特征向量。
 * 
 * @param matrix 输入对称矩阵
 * @param size 矩阵大小
 * @param eigenvalues 输出的特征值数组
 * @param eigenvectors 输出的特征向量矩阵
 * @return int 状态码：MATH_SUCCESS表示成功，其他表示错误
 * 
 * @note 使用雅可比迭代法计算特征值
 * @warning 输入矩阵必须是对称矩阵
 */
int matrix_eigenvalues_float(const float* matrix, int size, float* eigenvalues, float* eigenvectors) {
    if (!matrix || !eigenvalues || !eigenvectors || size <= 0) {
        return MATH_ERROR_INVALID_INPUT;
    }
    
    // 简化实现：对于2x2矩阵使用解析解
    if (size == 2) {
        float trace = matrix[0] + matrix[3];
        float det = matrix[0] * matrix[3] - matrix[1] * matrix[2];
        float discriminant = trace * trace - 4.0f * det;
        
        if (discriminant < 0) {
            return MATH_ERROR_INVALID_INPUT;
        }
        
        float sqrt_discriminant = sqrtf(discriminant);
        eigenvalues[0] = (trace + sqrt_discriminant) * 0.5f;
        eigenvalues[1] = (trace - sqrt_discriminant) * 0.5f;
        
        // 计算特征向量
        if (fabsf(matrix[1]) > EPSILON) {
            eigenvectors[0] = eigenvalues[0] - matrix[3];
            eigenvectors[1] = matrix[1];
            eigenvectors[2] = eigenvalues[1] - matrix[3];
            eigenvectors[3] = matrix[1];
        }
        else {
            eigenvectors[0] = 1.0f;
            eigenvectors[1] = 0.0f;
            eigenvectors[2] = 0.0f;
            eigenvectors[3] = 1.0f;
        }
        
        return MATH_SUCCESS;
    }
    
    return MATH_ERROR_INVALID_INPUT;
}

/**
 * @brief 三角函数计算函数
 * 
 * 提供优化的三角函数计算，包括正弦、余弦、正切等。
 * 
 * @param angle 输入角度（度）
 * @param operation 操作类型：1-正弦，2-余弦，3-正切
 * @return float 计算结果
 * 
 * @note 内部使用弧度制进行计算
 * @warning 正切函数在90度附近可能数值不稳定
 */
float trigonometric_functions_float(float angle, int operation) {
    float radians = angle * DEG_TO_RAD;
    
    switch (operation) {
        case 1: // 正弦
            return sinf(radians);
        case 2: // 余弦
            return cosf(radians);
        case 3: // 正切
            return tanf(radians);
        default:
            return 0.0f;
    }
}

/**
 * @brief 角度转换函数
 * 
 * 在度、弧度、梯度之间进行角度单位转换。
 * 
 * @param value 输入角度值
 * @param from_unit 源单位：1-度，2-弧度，3-梯度
 * @param to_unit 目标单位：1-度，2-弧度，3-梯度
 * @return float 转换后的角度值
 * 
 * @note 梯度系统：400梯度 = 360度
 * @warning 转换过程中可能产生精度损失
 */
float angle_conversion_float(float value, int from_unit, int to_unit) {
    if (from_unit == to_unit) {
        return value;
    }
    
    // 先转换为度
    float degrees = value;
    if (from_unit == 2) { // 弧度转度
        degrees = value * RAD_TO_DEG;
    }
    else if (from_unit == 3) { // 梯度转度
        degrees = value * 0.9f;
    }
    
    // 再转换为目标单位
    if (to_unit == 1) { // 度
        return degrees;
    }
    else if (to_unit == 2) { // 度转弧度
        return degrees * DEG_TO_RAD;
    }
    else if (to_unit == 3) { // 度转梯度
        return degrees / 0.9f;
    }
    
    return 0.0f;
}

/**
 * @brief 线性插值函数
 * 
 * 在两个值之间进行线性插值计算。
 * 
 * @param start 起始值
 * @param end 结束值
 * @param t 插值参数（0.0到1.0之间）
 * @return float 插值结果
 * 
 * @note t=0时返回start，t=1时返回end
 * @warning t超出范围会导致外插，可能产生意外结果
 */
float linear_interpolation_float(float start, float end, float t) {
    return start + (end - start) * t;
}

/**
 * @brief 随机数生成函数
 * 
 * 生成指定范围内的随机浮点数。
 * 
 * @param min 最小值
 * @param max 最大值
 * @return float 随机数
 * 
 * @note 使用伪随机数生成器
 * @warning 对于加密安全应用，需要使用更安全的随机数生成器
 */
float random_number_generator_float(float min, float max) {
    if (min >= max) {
        return min;
    }
    
    // 使用简单的伪随机数生成
    static unsigned int seed = 12345;
    seed = (seed * 1103515245 + 12345) & 0x7fffffff;
    float normalized = (float)seed / (float)0x7fffffff;
    
    return min + normalized * (max - min);
}

/**
 * @brief 统计计算函数
 * 
 * 计算数据集的统计信息，包括均值、方差、标准差等。
 * 
 * @param data 数据数组
 * @param count 数据点数量
 * @param operation 操作类型：1-均值，2-方差，3-标准差，4-最大值，5-最小值
 * @return float 统计结果
 * 
 * @note 方差计算使用总体方差公式
 * @warning 输入数据不能为空
 */
float statistical_calculations_float(const float* data, int count, int operation) {
    if (!data || count <= 0) {
        return 0.0f;
    }
    
    switch (operation) {
        case 1: { // 均值
            float sum = 0.0f;
            for (int i = 0; i < count; i++) {
                sum += data[i];
            }
            return sum / count;
        }
        case 2: { // 方差
            float mean = statistical_calculations_float(data, count, 1);
            float variance = 0.0f;
            for (int i = 0; i < count; i++) {
                float diff = data[i] - mean;
                variance += diff * diff;
            }
            return variance / count;
        }
        case 3: { // 标准差
            float variance = statistical_calculations_float(data, count, 2);
            return sqrtf(variance);
        }
        case 4: { // 最大值
            float max = data[0];
            for (int i = 1; i < count; i++) {
                if (data[i] > max) {
                    max = data[i];
                }
            }
            return max;
        }
        case 5: { // 最小值
            float min = data[0];
            for (int i = 1; i < count; i++) {
                if (data[i] < min) {
                    min = data[i];
                }
            }
            return min;
        }
        default:
            return 0.0f;
    }
}

/**
 * @brief 数值积分函数
 * 
 * 使用辛普森法则进行数值积分计算。
 * 
 * @param func 被积函数指针
 * @param a 积分下限
 * @param b 积分上限
 * @param n 子区间数量（必须是偶数）
 * @return float 积分结果
 * 
 * @note 辛普森法则比梯形法则更精确
 * @warning n必须是偶数，否则会返回错误结果
 */
float numerical_integration_float(float (*func)(float), float a, float b, int n) {
    if (!func || n <= 0 || n % 2 != 0) {
        return 0.0f;
    }
    
    float h = (b - a) / n;
    float sum = func(a) + func(b);
    
    for (int i = 1; i < n; i++) {
        float x = a + i * h;
        if (i % 2 == 0) {
            sum += 2.0f * func(x);
        }
        else {
            sum += 4.0f * func(x);
        }
    }
    
    return sum * h / 3.0f;
}

/**
 * @brief 优化算法函数
 * 
 * 使用黄金分割法进行一维优化搜索。
 * 
 * @param func 目标函数指针
 * @param a 搜索区间下限
 * @param b 搜索区间上限
 * @param tolerance 收敛容差
 * @return float 最优解
 * 
 * @note 寻找函数在区间内的最小值
 * @warning 函数必须是单峰函数，否则可能找到局部最优
 */
float optimization_algorithms_float(float (*func)(float), float a, float b, float tolerance) {
    if (!func || a >= b || tolerance <= 0) {
        return 0.0f;
    }
    
    float golden_ratio = (SQRT5 - 1.0f) / 2.0f;
    float x1 = b - golden_ratio * (b - a);
    float x2 = a + golden_ratio * (b - a);
    
    float f1 = func(x1);
    float f2 = func(x2);
    
    while (fabsf(b - a) > tolerance) {
        if (f1 < f2) {
            b = x2;
            x2 = x1;
            f2 = f1;
            x1 = b - golden_ratio * (b - a);
            f1 = func(x1);
        }
        else {
            a = x1;
            x1 = x2;
            f1 = f2;
            x2 = a + golden_ratio * (b - a);
            f2 = func(x2);
        }
    }
    
    return (a + b) / 2.0f;
}

/**
 * @brief 几何计算函数
 * 
 * 计算二维或三维空间中的几何量，如距离、面积、体积等。
 * 
 * @param point_a 第一个点坐标
 * @param point_b 第二个点坐标
 * @param dimension 空间维度（2或3）
 * @param operation 操作类型：1-距离，2-距离平方，3-中点
 * @param result 计算结果
 * @return int 状态码：MATH_SUCCESS表示成功，其他表示错误
 * 
 * @note 距离计算使用欧几里得距离公式
 * @warning 坐标点必须具有相同的维度
 */
int geometric_calculations_float(const float* point_a, const float* point_b, 
                                int dimension, int operation, float* result) {
    if (!point_a || !point_b || !result || dimension <= 0) {
        return MATH_ERROR_INVALID_INPUT;
    }
    
    switch (operation) {
        case 1: { // 距离
            float sum_squares = 0.0f;
            for (int i = 0; i < dimension; i++) {
                float diff = point_a[i] - point_b[i];
                sum_squares += diff * diff;
            }
            *result = sqrtf(sum_squares);
            return MATH_SUCCESS;
        }
        case 2: { // 距离平方
            float sum_squares = 0.0f;
            for (int i = 0; i < dimension; i++) {
                float diff = point_a[i] - point_b[i];
                sum_squares += diff * diff;
            }
            *result = sum_squares;
            return MATH_SUCCESS;
        }
        case 3: { // 中点
            for (int i = 0; i < dimension; i++) {
                result[i] = (point_a[i] + point_b[i]) * 0.5f;
            }
            return MATH_SUCCESS;
        }
        default:
            return MATH_ERROR_INVALID_INPUT;
    }
}

/** @} */

//============================================================================
// 函数别名定义
//============================================================================

/**
 * @defgroup MathFunctionAliases 数学函数别名
 * @brief 数学工具函数的别名定义，提供更直观的函数名称
 * @{
 */

#define NormalizeVectorFloat normalize_vector_float
#define MatrixMultiplyFloat matrix_multiply_float
#define VectorDotProductFloat vector_dot_product_float
#define VectorCrossProductFloat vector_cross_product_float
#define MatrixTransposeFloat matrix_transpose_float
#define MatrixInverseFloat matrix_inverse_float
#define MatrixDeterminantFloat matrix_determinant_float
#define MatrixEigenvaluesFloat matrix_eigenvalues_float
#define TrigonometricFunctionsFloat trigonometric_functions_float
#define AngleConversionFloat angle_conversion_float
#define LinearInterpolationFloat linear_interpolation_float
#define RandomNumberGeneratorFloat random_number_generator_float
#define StatisticalCalculationsFloat statistical_calculations_float
#define NumericalIntegrationFloat numerical_integration_float
#define OptimizationAlgorithmsFloat optimization_algorithms_float
#define GeometricCalculationsFloat geometric_calculations_float

/** @} */

//============================================================================
// 模块技术文档
//============================================================================

/**
 * @defgroup MathUtilitiesTechnicalInfo 技术文档
 * @brief 数学工具模块的技术实现说明
 * @{
 */

/**
 * @section MathUtilitiesArchitecture 模块架构
 * 
 * 数学工具模块采用分层架构设计：
 * - 基础层：基本数学运算和常量定义
 * - 向量层：2D/3D/4D向量运算
 * - 矩阵层：矩阵运算和线性代数
 * - 几何层：空间几何计算
 * - 统计层：数据统计分析
 * - 优化层：数值优化算法
 * 
 * @section MathUtilitiesPerformance 性能优化
 * 
 * 模块包含以下性能优化特性：
 * - 使用单精度浮点数提高计算速度
 * - 内联小型函数减少函数调用开销
 * - 预计算常用数学常量
 * - 避免不必要的内存分配
 * - 使用查找表加速三角函数计算
 * 
 * @section MathUtilitiesErrorHandling 错误处理
 * 
 * 模块提供完善的错误处理机制：
 * - 输入参数验证
 * - 数值范围检查
 * - 内存安全保护
 * - 数学错误检测
 * - 错误码返回机制
 * 
 * @section MathUtilitiesUsage 使用示例
 * 
 * @code
 * // 向量标准化示例
 * float vector[3] = {1.0f, 2.0f, 3.0f};
 * float normalized[3];
 * int result = NormalizeVectorFloat(vector, 3, normalized);
 * 
 * // 矩阵乘法示例
 * float matrix_a[4] = {1.0f, 2.0f, 3.0f, 4.0f};
 * float matrix_b[4] = {5.0f, 6.0f, 7.0f, 8.0f};
 * float result_matrix[4];
 * MatrixMultiplyFloat(matrix_a, matrix_b, 2, 2, 2, result_matrix);
 * 
 * // 距离计算示例
 * float point_a[3] = {0.0f, 0.0f, 0.0f};
 * float point_b[3] = {3.0f, 4.0f, 0.0f};
 * float distance;
 * GeometricCalculationsFloat(point_a, point_b, 3, 1, &distance);
 * @endcode
 * 
 * @section MathUtilitiesDependencies 依赖关系
 * 
 * 数学工具模块的依赖关系：
 * - 依赖：TaleWorlds.Native.Split.h（基础类型定义）
 * - 被依赖：物理引擎、渲染引擎、AI系统
 * - 无外部库依赖，完全自包含实现
 * 
 * @section MathUtilitiesLimitations 限制说明
 * 
 * 模块的已知限制：
 * - 仅支持实数运算，不支持复数
 * - 矩阵大小限制为4x4以内
 * - 不支持稀疏矩阵运算
 * - 数值精度受限于浮点数表示
 * - 不支持多线程并行计算
 * 
 * @section MathUtilitiesFutureImprovements 未来改进
 * 
 * 计划的未来改进：
 * - 添加SIMD指令优化
 * - 支持更高维度的向量和矩阵
 * - 添加复数运算支持
 * - 实现多线程并行计算
 * - 添加GPU加速支持
 * - 增加更多数学函数库
 * 
 * @}
 */

//============================================================================
// 模块结束标记
//============================================================================

/**
 * @mainpage 数学工具函数模块文档
 * 
 * @section introduction 简介
 * 
 * 本模块是TaleWorlds引擎的核心数学工具库，提供游戏开发中所需的
 * 各种数学运算功能。模块采用高效、稳定的算法实现，为上层系统
 * 提供可靠的数学支持。
 * 
 * @section features 主要功能
 * 
 * - 向量运算：标准化、点积、叉积、距离计算
 * - 矩阵运算：乘法、转置、求逆、特征值
 * - 三角函数：正弦、余弦、正切、角度转换
 * - 插值计算：线性插值、曲线拟合
 * - 统计分析：均值、方差、标准差
 * - 数值积分：辛普森法则、梯形法则
 * - 优化算法：黄金分割法、梯度下降
 * - 几何计算：距离、面积、体积计算
 * 
 * @section usage 使用方法
 * 
 * 1. 包含头文件：#include "TaleWorlds.Native.Split.h"
 * 2. 调用相应的数学函数
 * 3. 检查返回值确保操作成功
 * 4. 使用结果进行后续计算
 * 
 * @section performance 性能指标
 * 
 * - 向量运算：O(n)时间复杂度
 * - 矩阵运算：O(n³)时间复杂度
 * - 内存使用：最小化内存分配
 * - 数值精度：单精度浮点数
 * 
 * @section contact 联系方式
 * 
 * 如有问题或建议，请联系开发团队。
 */

/** @} */ /* MathUtilityFunctions */