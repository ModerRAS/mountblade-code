/* 函数别名定义: MathOptimizationEngine */
#define MathOptimizationEngine MathOptimizationEngine
/* 函数别名定义: DataEncryptionHandler */
#define DataEncryptionHandler DataEncryptionHandler
//==============================================================================
// 文件信息：03_rendering_part140.c
// 模块功能：渲染系统高级渲染处理模块
// 主要功能：
// - 渲染变换矩阵计算和优化
// - 渲染适配器管理和初始化
// - 渲染系统状态管理和同步
// - 渲染数据结构操作和维护
// - 渲染性能优化和资源管理
//==============================================================================
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
//==============================================================================
// 系统常量定义
//==============================================================================
// 渲染系统浮点常量
#define RENDER_FLOAT_ONE               1.0f            // 浮点数1.0
#define RENDER_FLOAT_HALF              0.5f            // 浮点数0.5
#define RENDER_FLOAT_THREE             3.0f            // 浮点数3.0
#define RENDER_FLOAT_EPSILON           0.001f          // 浮点数最小精度
#define RENDER_MAX_FLOAT               0x7f7fffff      // 最大浮点数值
// 渲染系统尺寸常量
#define RENDER_MATRIX_SIZE             16              // 矩阵尺寸
#define RENDER_VECTOR_SIZE             3               // 向量尺寸
#define RENDER_TRANSFORM_STACK_SIZE    0x80            // 变换栈大小
#define RENDER_ADAPTER_SIZE            0xa8            // 适配器大小
#define RENDER_SHADER_SIZE             0x78            // 着色器大小
// 渲染系统偏移常量
#define RENDER_POSITION_OFFSET         0x1b8           // 位置偏移
#define RENDER_STATE_OFFSET            0x70            // 状态偏移
#define RENDER_CONFIG_OFFSET           0x74            // 配置偏移
#define RENDER_MANAGER_OFFSET          0x770           // 管理器偏移
// 渲染系统标志常量
#define RENDER_FLAG_INITIALIZED        0x80            // 初始化标志
#define RENDER_FLAG_ENABLED            0x01            // 启用标志
#define RENDER_FLAG_ACTIVE             0x02            // 活动标志
//==============================================================================
// 类型别名定义
//==============================================================================
// 渲染系统基础类型
typedef float           render_float_t;    // 渲染浮点类型
typedef int32_t         render_int32_t;    // 渲染整数类型
typedef uint32_t        render_uint32_t;   // 渲染无符号整数类型
typedef uint64_t        render_uint64_t;   // 渲染无符号64位类型
// 渲染向量类型
typedef struct {
    render_float_t x, y, z, w;
} render_vector4_t;                    // 渲染4D向量类型
typedef struct {
    render_float_t x, y, z;
} render_vector3_t;                    // 渲染3D向量类型
typedef struct {
    render_float_t x, y;
} render_vector2_t;                    // 渲染2D向量类型
// 渲染矩阵类型
typedef struct {
    render_float_t m[16];
} render_matrix4x4_t;                  // 渲染4x4矩阵类型
// 渲染变换栈类型
typedef struct {
    render_matrix4x4_t matrix;
    render_vector3_t position;
    render_vector3_t rotation;
    render_vector3_t scale;
} render_transform_stack_t;            // 渲染变换栈类型
// 渲染适配器类型
typedef struct {
    render_uint64_t adapter_ptr;       // 适配器指针
    render_uint64_t device_ptr;        // 设备指针
    render_uint64_t context_ptr;       // 上下文指针
    render_uint32_t width;             // 宽度
    render_uint32_t height;            // 高度
    render_float_t aspect_ratio;       // 宽高比
    render_uint32_t flags;             // 标志
    render_uint32_t state;             // 状态
} render_adapter_t;                    // 渲染适配器类型
// 渲染着色器类型
typedef struct {
    render_uint64_t shader_ptr;        // 着色器指针
    render_uint64_t program_ptr;       // 程序指针
    render_uint32_t type;              // 类型
    render_uint32_t stage;             // 阶段
    render_uint32_t uniforms;          // 统一变量数量
    render_uint32_t attributes;        // 属性数量
} render_shader_t;                     // 渲染着色器类型
// 渲染状态类型
typedef struct {
    render_uint32_t state_id;          // 状态ID
    render_uint32_t flags;             // 标志
    render_float_t alpha;              // 透明度
    render_float_t depth;              // 深度
    render_uint64_t blend_state;       // 混合状态
    render_uint64_t depth_state;       // 深度状态
    render_uint64_t raster_state;      // 光栅化状态
} render_state_t;                      // 渲染状态类型
//==============================================================================
// 函数原型声明
//==============================================================================
// 渲染变换函数
void render_transform_matrix_compute(render_transform_stack_t *transform_stack);
void render_transform_matrix_optimize(render_transform_stack_t *transform_stack);
void render_transform_stack_update(render_transform_stack_t *transform_stack);
void render_transform_matrix_normalize(render_matrix4x4_t *matrix);
// 渲染适配器函数
render_adapter_t *render_adapter_create(void);
void render_adapter_initialize(render_adapter_t *adapter);
void render_adapter_destroy(render_adapter_t *adapter);
void render_adapter_update_state(render_adapter_t *adapter);
// 渲染系统函数
void render_system_initialize(void);
void render_system_initialize_ex(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4);
void render_system_update_state(void);
void render_system_cleanup(void);
void render_system_sync(void);
void render_system_component_register(uint64_t param_1, void *param_2, uint64_t param_3);
void render_transform_matrix_apply(uint64_t param_1, void *param_2);
// 渲染数据操作函数
render_matrix4x4_t *render_matrix_create(void);
void render_matrix_multiply(render_matrix4x4_t *result, const render_matrix4x4_t *a, const render_matrix4x4_t *b);
void render_matrix_inverse(render_matrix4x4_t *matrix);
void render_matrix_transpose(render_matrix4x4_t *matrix);
// 渲染性能优化函数
void render_performance_optimize(void);
void render_resource_cleanup(void);
void render_memory_optimize(void);
//==============================================================================
// 全局变量定义
//==============================================================================
// 渲染系统全局变量
static render_uint64_t render_system_data_memory = 0;         // 渲染系统数据内存
static render_adapter_t *render_adapter_ptr = NULL;           // 渲染适配器指针
static render_uint64_t render_resource_state = 0;             // 渲染资源状态
static render_uint64_t render_memory_pool_ptr = 0;            // 渲染内存池指针
//==============================================================================
// 渲染变换矩阵计算函数
//==============================================================================
/**
 * @brief 计算渲染变换矩阵
 * @param transform_stack 变换栈指针
 * @note 执行复杂的3D变换矩阵计算，包括位置、旋转和缩放
 *       使用快速平方根倒数算法优化性能
 *       包含向量叉积和点积运算
 */
void render_transform_matrix_compute(render_transform_stack_t *transform_stack)
{
// 原始函数: void RenderingSystem_4f6f2(void)
    int64_t unaff_RBX;
    int64_t unaff_RBP;
    int64_t unaff_RDI;
    render_float_t fVar1;
    int8_t auVar2 [16];
    render_float_t fVar3;
    render_float_t fVar4;
    render_float_t fVar5;
    render_float_t fVar6;
    render_float_t fVar7;
    render_float_t fVar8;
    render_float_t fVar9;
    render_float_t unaff_XMM14_Da;
    render_float_t unaff_XMM14_Db;
    render_float_t unaff_XMM14_Dc;
    render_float_t unaff_XMM15_Da;
    render_float_t unaff_XMM15_Db;
    render_float_t unaff_XMM15_Dc;
    int32_t unaff_XMM15_Dd;
    uint64_t local_var_30;
    uint64_t local_var_38;
    render_float_t local_var_40;
    render_float_t fStack0000000000000044;
    render_float_t local_var_48;
    int32_t local_buffer_4c;
    render_float_t local_buffer_50;
    render_float_t fStack0000000000000054;
    render_float_t local_var_58;
    int32_t local_buffer_5c;
    render_float_t local_var_60;
    render_float_t local_var_68;
    int32_t local_buffer_7c;
// 调用渲染数据初始化函数
    render_data_structure_initialize(&local_buffer_00000030, unaff_RBP + -0x80);
// 计算位置向量差值
    fVar7 = unaff_XMM14_Da - *(render_float_t *)(unaff_RDI + RENDER_POSITION_OFFSET);
    fVar6 = unaff_XMM14_Db - *(render_float_t *)(unaff_RDI + 0x1bc);
    fVar5 = unaff_XMM14_Dc - *(render_float_t *)(unaff_RDI + 0x1c0);
// 计算向量长度平方
    fVar1 = fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5;
// 使用快速平方根倒数算法
    auVar2 = rsqrtss(ZEXT416((uint)fVar1), ZEXT416((uint)fVar1));
    fVar4 = auVar2._0_4_;
    fVar3 = fVar4 * RENDER_FLOAT_HALF * (RENDER_FLOAT_THREE - fVar1 * fVar4 * fVar4);
// 计算旋转向量长度平方
    fVar1 = unaff_XMM15_Db * unaff_XMM15_Db + unaff_XMM15_Da * unaff_XMM15_Da +
            unaff_XMM15_Dc * unaff_XMM15_Dc;
// 使用快速平方根倒数算法
    auVar2 = rsqrtss(ZEXT416((uint)fVar1), ZEXT416((uint)fVar1));
    fVar4 = auVar2._0_4_;
    fStack0000000000000054 = fVar4 * RENDER_FLOAT_HALF * (RENDER_FLOAT_THREE - fVar1 * fVar4 * fVar4);
// 计算归一化旋转向量
    local_var_58 = unaff_XMM15_Dc * fStack0000000000000054;
    local_buffer_50 = unaff_XMM15_Da * fStack0000000000000054;
    fStack0000000000000054 = unaff_XMM15_Db * fStack0000000000000054;
// 计算向量叉积
    fVar9 = fStack0000000000000054 * fVar5 * fVar3 - local_var_58 * fVar6 * fVar3;
    fVar8 = local_var_58 * fVar7 * fVar3 - local_buffer_50 * fVar5 * fVar3;
    local_buffer_7c = RENDER_MAX_FLOAT;
    fVar7 = local_buffer_50 * fVar6 * fVar3 - fStack0000000000000054 * fVar7 * fVar3;
// 计算结果向量长度平方
    fVar1 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
// 使用快速平方根倒数算法
    auVar2 = rsqrtss(ZEXT416((uint)fVar1), ZEXT416((uint)fVar1));
    fVar4 = auVar2._0_4_;
    fVar1 = fVar4 * RENDER_FLOAT_HALF * (RENDER_FLOAT_THREE - fVar1 * fVar4 * fVar4);
// 归一化结果向量
    fVar8 = fVar8 * fVar1;
    fVar7 = fVar7 * fVar1;
    fVar9 = fVar9 * fVar1;
// 计算二次叉积
    fVar6 = local_var_58 * fVar8 - fStack0000000000000054 * fVar7;
    fVar5 = fVar7 * local_buffer_50 - local_var_58 * fVar9;
    fVar3 = fStack0000000000000054 * fVar9 - fVar8 * local_buffer_50;
// 计算最终矩阵长度平方
    fVar1 = fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3;
// 使用快速平方根倒数算法
    auVar2 = rsqrtss(ZEXT416((uint)fVar1), ZEXT416((uint)fVar1));
    fVar4 = auVar2._0_4_;
    fVar4 = fVar4 * RENDER_FLOAT_HALF * (RENDER_FLOAT_THREE - fVar1 * fVar4 * fVar4);
// 设置最大浮点值
    local_buffer_4c = RENDER_MAX_FLOAT;
// 获取变换参数
    fVar1 = *(render_float_t *)(unaff_RBP + -0x80);
    fStack0000000000000044 = *(render_float_t *)(unaff_RBP + -0x7c);
// 计算最终变换矩阵
    local_var_40 = fStack0000000000000044 * fVar6 * fVar4;
    local_var_30 = CONCAT44(fVar1 * fVar8, fVar1 * fVar9);
    local_var_48 = fVar3 * fVar4 * fStack0000000000000044;
    fStack0000000000000044 = fVar5 * fVar4 * fStack0000000000000044;
    local_var_38 = CONCAT44(RENDER_MAX_FLOAT, fVar1 * fVar7);
// 应用缩放变换
    fVar1 = *(render_float_t *)(unaff_RBP + -0x78);
    local_buffer_50 = fVar1 * local_buffer_50;
    fStack0000000000000054 = fStack0000000000000054 * fVar1;
    local_var_58 = local_var_58 * fVar1;
    local_buffer_5c = unaff_XMM15_Dd;
// 检查是否需要使用缓存的变换数据
    if (*(char *)(unaff_RBX + 0x99) != '\0') {
        local_var_30 = *(uint64_t *)(unaff_RBP + -0x70);
        local_var_38 = *(uint64_t *)(unaff_RBP + -0x68);
        local_var_40 = *(render_float_t *)(unaff_RBP + -0x60);
        fStack0000000000000044 = *(render_float_t *)(unaff_RBP + -0x5c);
        local_var_48 = *(render_float_t *)(unaff_RBP + -0x58);
        local_buffer_4c = *(int32_t *)(unaff_RBP + -0x54);
        local_buffer_50 = *(render_float_t *)(unaff_RBP + -0x50);
        fStack0000000000000054 = *(render_float_t *)(unaff_RBP + -0x4c);
        local_var_58 = *(render_float_t *)(unaff_RBP + -0x48);
        local_buffer_5c = *(int32_t *)(unaff_RBP + -0x44);
        local_var_60 = unaff_XMM14_Da;
        local_var_68 = unaff_XMM14_Dc;
    }
// 应用变换矩阵
    render_transform_matrix_apply(*(uint64_t *)(unaff_RBX + 0x18), &local_buffer_00000030);
    return;
}
//==============================================================================
// 渲染变换栈条件更新函数
//==============================================================================
/**
 * @brief 条件更新渲染变换栈
 * @note 根据标志位决定是否使用缓存的变换数据
 *       优化渲染性能，避免不必要的计算
 */
void render_transform_stack_conditional_update(void)
{
// 原始函数: void RenderingSystem_4fabd(void)
    int64_t unaff_RBX;
    int64_t unaff_RBP;
    int32_t unaff_XMM14_Da;
    int32_t unaff_XMM14_Dc;
    uint64_t local_var_30;
    uint64_t local_var_38;
    int32_t local_buffer_40;
    int32_t local_buffer_44;
    int32_t local_buffer_48;
    int32_t local_buffer_4c;
    int32_t local_buffer_50;
    int32_t local_buffer_54;
    int32_t local_buffer_58;
    int32_t local_buffer_5c;
    int32_t local_var_60;
    int32_t local_var_68;
// 检查是否需要使用缓存的变换数据
    if (*(char *)(unaff_RBX + 0x99) != '\0') {
// 加载缓存的变换数据
        local_var_30 = *(uint64_t *)(unaff_RBP + -0x70);
        local_var_38 = *(uint64_t *)(unaff_RBP + -0x68);
        local_buffer_40 = *(int32_t *)(unaff_RBP + -0x60);
        local_buffer_44 = *(int32_t *)(unaff_RBP + -0x5c);
        local_buffer_48 = *(int32_t *)(unaff_RBP + -0x58);
        local_buffer_4c = *(int32_t *)(unaff_RBP + -0x54);
        local_buffer_50 = *(int32_t *)(unaff_RBP + -0x50);
        local_buffer_54 = *(int32_t *)(unaff_RBP + -0x4c);
        local_buffer_58 = *(int32_t *)(unaff_RBP + -0x48);
        local_buffer_5c = *(int32_t *)(unaff_RBP + -0x44);
        local_var_60 = unaff_XMM14_Da;
        local_var_68 = unaff_XMM14_Dc;
    }
// 应用变换矩阵
    render_transform_matrix_apply(*(uint64_t *)(unaff_RBX + 0x18), &local_buffer_00000030);
    return;
}
//==============================================================================
// 渲染变换栈直接更新函数
//==============================================================================
/**
 * @brief 直接更新渲染变换栈
 * @note 强制使用最新的变换数据，不进行条件检查
 *       确保渲染状态的及时更新
 */
void render_transform_stack_direct_update(void)
{
// 原始函数: void RenderingSystem_4facf(void)
    int64_t unaff_RBX;
    int64_t unaff_RBP;
    uint64_t local_buffer_30;
    uint64_t local_buffer_38;
    int32_t local_buffer_40;
    int32_t local_buffer_44;
    int32_t local_buffer_48;
    int32_t local_buffer_4c;
    int32_t local_buffer_50;
    int32_t local_buffer_54;
    int32_t local_buffer_58;
    int32_t local_buffer_5c;
// 直接加载变换数据
    local_buffer_30 = *(uint64_t *)(unaff_RBP + -0x70);
    local_buffer_38 = *(uint64_t *)(unaff_RBP + -0x68);
    local_buffer_40 = *(int32_t *)(unaff_RBP + -0x60);
    local_buffer_44 = *(int32_t *)(unaff_RBP + -0x5c);
    local_buffer_48 = *(int32_t *)(unaff_RBP + -0x58);
    local_buffer_4c = *(int32_t *)(unaff_RBP + -0x54);
    local_buffer_50 = *(int32_t *)(unaff_RBP + -0x50);
    local_buffer_54 = *(int32_t *)(unaff_RBP + -0x4c);
    local_buffer_58 = *(int32_t *)(unaff_RBP + -0x48);
    local_buffer_5c = *(int32_t *)(unaff_RBP + -0x44);
// 应用变换矩阵
    render_transform_matrix_apply(*(uint64_t *)(unaff_RBX + 0x18), &local_buffer_00000030);
    return;
}
//==============================================================================
// 渲染空操作函数
//==============================================================================
/**
 * @brief 渲染系统空操作函数
 * @note 用作占位符或初始化时的空操作
 *       保持函数接口的一致性
 */
void render_no_operation(void)
{
// 原始函数: void RenderingSystem_4fb07(void)
    return;
}
//==============================================================================
// 渲染数据结构初始化函数
//==============================================================================
/**
 * @brief 初始化渲染数据结构
 * @param param_1 数据结构指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 初始化后的数据结构指针
 * @note 设置渲染数据结构的初始状态和内存管理
 */
render_uint64_t *render_data_structure_initialize(render_uint64_t *param_1, render_uint64_t param_2, render_uint64_t param_3, render_uint64_t param_4)
{
// 原始函数: uint64_t * RenderingSystem_4fb20(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
    uint64_t uVar1;
    uVar1 = 0xfffffffffffffffe;
    *param_1 = &processed_var_9680_ptr;
    UIComponent_Manager();
    if ((param_2 & 1) != 0) {
        free(param_1, 0x78, param_3, param_4, uVar1);
    }
    return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
//==============================================================================
// 渲染适配器初始化函数
//==============================================================================
/**
 * @brief 初始化渲染适配器
 * @param param_1 适配器参数
 * @note 初始化渲染适配器的各项参数和状态
 *       设置默认的渲染参数和内存管理
 */
void render_adapter_initialize_ex(int64_t param_1)
{
// 原始函数: void RenderingSystem_4fb70(int64_t param_1)
    uint64_t uVar1;
    int32_t uVar2;
    uint64_t *puVar3;
    void *plocal_var_48;
    uint64_t *plocal_var_40;
    int32_t local_var_38;
    uint64_t local_var_30;
// 初始化渲染系统
    render_system_initialize_ex(*(uint64_t *)(param_1 + 0x18), 0, 0, 0);
// 获取系统资源状态
    uVar1 = GET_SYSTEM_RESOURCE_STATE();
    plocal_var_48 = &system_data_buffer_ptr;
    local_var_30 = 0;
    plocal_var_40 = (uint64_t *)0x0;
    local_var_38 = 0;
// 分配内存池
    puVar3 = (uint64_t *)CoreMemoryPoolAllocator(SYSTEM_MEMORY_POOL_ADDR, 0x10, 0x13);
    *(int8_t *)puVar3 = 0;
    plocal_var_40 = puVar3;
    uVar2 = CoreMemoryPoolCleaner(puVar3);
    local_var_30 = CONCAT44(local_var_30._4_4_, uVar2);
// 设置适配器标识
    *puVar3 = 0x6c616d5f64616568;  // "head_mal"
    *(int32_t *)(puVar3 + 1) = 0x785f65;  // "e_x"
    local_var_38 = 0xb;
// 注册系统组件
    render_system_component_register(uVar1, &plocal_var_48, 1);
    plocal_var_48 = &system_data_buffer_ptr;
// 初始化内存池
    CoreMemoryPoolInitializer(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_4fd50(int64_t param_1)
void RenderingSystem_4fd50(int64_t param_1)
{
  int8_t uVar1;
  if ((*(char *)(param_1 + 0x70) == '\0') ||
     (*(int *)(SYSTEM_STATE_MANAGER + 0x770) != *(int *)(param_1 + 0x74))) {
    *(int32_t *)(param_1 + 0x74) = *(int32_t *)(SYSTEM_STATE_MANAGER + 0x770);
    uVar1 = render_adapter_initialize_ex(param_1);
    *(int8_t *)(param_1 + 0x70) = uVar1;
  }
  return;
}
//==============================================================================
// 渲染适配器创建函数
//==============================================================================
/**
 * @brief 创建渲染适配器数据结构
 * @param param_1 数据结构指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 初始化后的数据结构指针
 * @note 创建渲染适配器的数据结构并进行初始化
 */
render_uint64_t *render_adapter_data_structure_create(render_uint64_t *param_1, render_uint64_t param_2, render_uint64_t param_3, render_uint64_t param_4)
{
// 原始函数: uint64_t * RenderingSystem_4fd90(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
    uint64_t uVar1;
    uVar1 = 0xfffffffffffffffe;
    *param_1 = &rendering_adapter_ptr;
    render_system_cleanup();
    if ((param_2 & 1) != 0) {
        free(param_1, RENDER_ADAPTER_SIZE, param_3, param_4, uVar1);
    }
    return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
//==============================================================================
// 渲染适配器配置初始化函数
//==============================================================================
/**
 * @brief 初始化渲染适配器配置
 * @param param_1 适配器配置指针
 * @note 设置渲染适配器的默认配置参数
 *       包括视场角、宽高比、深度等参数
 */
void render_adapter_config_initialize(uint64_t *param_1)
{
// 原始函数: void RenderingSystem_4fde0(uint64_t *param_1)
    int32_t uVar1;
    uint64_t *puVar2;
    void *plocal_var_b8;
    uint64_t *plocal_var_b0;
    int32_t local_var_a8;
    uint64_t local_var_a0;
    uint64_t local_var_38;
    local_var_38 = 0xfffffffffffffffe;
    puVar2 = param_1;
    render_system_initialize();
    *puVar2 = &rendering_adapter_ptr;
// 设置默认渲染参数
    *(int32_t *)(param_1 + 0x14) = 0x3f800000;  // 1.0f
    param_1[0xe] = 0x4044000000000000;         // 40.0f
    param_1[0xf] = 0x4010000000000000;         // 4.0f
    *(int32_t *)(param_1 + 0x12) = 0;           // 0
    *(int32_t *)((int64_t)param_1 + 0x94) = 0;  // 0
    *(int32_t *)(param_1 + 0x13) = 0;           // 0
    *(int32_t *)((int64_t)param_1 + 0x9c) = 0;  // 0
    *(int32_t *)(param_1 + 0x14) = 0x3f800000;  // 1.0f
    param_1[0x10] = 0x4024000000000000;         // 10.0f
    param_1[0x11] = 0x3fd0000000000000;         // 0.25f
// 分配内存池
    plocal_var_b8 = &system_data_buffer_ptr;
    local_var_a0 = 0;
    plocal_var_b0 = (uint64_t *)0x0;
    local_var_a8 = 0;
    puVar2 = (uint64_t *)CoreMemoryPoolAllocator(SYSTEM_MEMORY_POOL_ADDR, 0x10, 0x13);
    *(int8_t *)puVar2 = 0;
    plocal_var_b0 = puVar2;
    uVar1 = CoreMemoryPoolCleaner(puVar2);
    local_var_a0 = CONCAT44(local_var_a0._4_4_, uVar1);
// 设置适配器标识
    *puVar2 = 0x6f6d412065766f4d;  // "Move Aom"
    *(int32_t *)(puVar2 + 1) = 0x746e75;  // "unt"
    local_var_a8 = 0xb;
// 初始化适配器配置
    render_adapter_config_setup(param_1, &plocal_var_b8, param_1 + 0xe, 1);
    plocal_var_b8 = &system_data_buffer_ptr;
// 初始化内存池
    CoreMemoryPoolInitializer(puVar2);
}
// 函数: void RenderingSystem_50120(int64_t param_1,float param_2)
void RenderingSystem_50120(int64_t param_1,float param_2)
{
  double dVar1;
  float fVar2;
  float fVar3;
  uint64_t local_var_68;
  uint64_t local_var_60;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  uint64_t local_var_48;
  uint64_t local_var_40;
  int32_t local_var_38;
  float fStack_34;
  float fStack_30;
  int32_t local_var_2c;
  local_var_38 = *(int32_t *)(param_1 + 0x94);
  fVar2 = (float)*(double *)(param_1 + 0x78) + 0.001;
  local_var_58 = 0;
  local_var_54 = 0x3f800000;
  local_var_50 = 0;
  local_var_4c = 0;
  fVar3 = 1.0 / fVar2;
  local_var_68 = 0x3f800000;
  local_var_60 = 0;
  local_var_48 = 0;
  local_var_40 = 0x3f800000;
  fStack_30 = *(float *)(param_1 + 0x9c);
  fVar3 = (*(float *)(param_1 + 0x90) - (float)(int)(*(float *)(param_1 + 0x90) * fVar3) * fVar2) *
          fVar3;
  fStack_34 = (float)*(double *)(param_1 + 0x70) * fVar3 + *(float *)(param_1 + 0x98);
  local_var_2c = 0x7f7fffff;
  dVar1 = (double)sin(SUB84((double)fVar3 * *(double *)(param_1 + 0x80),0));
  fStack_30 = (float)(dVar1 * *(double *)(param_1 + 0x88));
  render_transform_matrix_apply(*(uint64_t *)(param_1 + 0x18), &local_var_68);
  *(float *)(param_1 + 0x90) = param_2 + *(float *)(param_1 + 0x90);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_50270(uint64_t param_1)
void RenderingSystem_50270(uint64_t param_1)
{
  int8_t stack_array_248 [32];
  int32_t local_var_228;
  void **applocal_var_220 [2];
  uint64_t local_var_210;
  void *aplocal_var_208 [11];
  int32_t local_var_1b0;
  void *plocal_var_1a8;
  int8_t *plocal_var_1a0;
  int32_t local_var_198;
  int8_t stack_array_190 [72];
  void *plocal_var_148;
  int8_t *plocal_var_140;
  int32_t local_var_138;
  int8_t stack_array_130 [72];
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  int8_t stack_array_d0 [72];
  void *plocal_var_88;
  int8_t *plocal_var_80;
  int32_t local_var_78;
  int8_t stack_array_70 [72];
  uint64_t local_var_28;
  local_var_210 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_248;
  local_var_228 = 0;
  plocal_var_1a8 = &memory_allocator_3480_ptr;
  plocal_var_1a0 = stack_array_190;
  stack_array_190[0] = 0;
  local_var_198 = 0xb;
  strcpy_s(stack_array_190,0x40,&system_data_e1c8);
  SystemCommunicationProcessor(aplocal_var_208,&plocal_var_1a8);
  local_var_1b0 = 1;
  local_var_228 = 1;
  MathOptimizationEngine0(param_1,applocal_var_220,aplocal_var_208);
  local_var_228 = 0;
  applocal_var_220[0] = aplocal_var_208;
  aplocal_var_208[0] = &system_state_ptr;
  plocal_var_1a8 = &system_state_ptr;
  plocal_var_148 = &memory_allocator_3480_ptr;
  plocal_var_140 = stack_array_130;
  stack_array_130[0] = 0;
  local_var_138 = 0xd;
  strcpy_s(stack_array_130,0x40,&system_data_e208);
  SystemCommunicationProcessor(aplocal_var_208,&plocal_var_148);
  local_var_1b0 = 1;
  local_var_228 = 2;
  MathOptimizationEngine0(param_1,applocal_var_220,aplocal_var_208);
  local_var_228 = 0;
  applocal_var_220[0] = aplocal_var_208;
  aplocal_var_208[0] = &system_state_ptr;
  plocal_var_148 = &system_state_ptr;
  plocal_var_e8 = &memory_allocator_3480_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = 0x12;
  strcpy_s(stack_array_d0,0x40,&system_data_e1f0);
  SystemCommunicationProcessor(aplocal_var_208,&plocal_var_e8);
  local_var_1b0 = 1;
  local_var_228 = 4;
  MathOptimizationEngine0(param_1,applocal_var_220,aplocal_var_208);
  local_var_228 = 0;
  applocal_var_220[0] = aplocal_var_208;
  aplocal_var_208[0] = &system_state_ptr;
  plocal_var_e8 = &system_state_ptr;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  stack_array_70[0] = 0;
  local_var_78 = 0x15;
  strcpy_s(stack_array_70,0x40,&system_data_e1d8);
  SystemCommunicationProcessor(aplocal_var_208,&plocal_var_88);
  local_var_1b0 = 1;
  local_var_228 = 8;
  MathOptimizationEngine0(param_1,applocal_var_220,aplocal_var_208);
  local_var_228 = 0;
  applocal_var_220[0] = aplocal_var_208;
  aplocal_var_208[0] = &system_state_ptr;
  plocal_var_88 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_248);
}
uint64_t * RenderingSystem_50540(uint64_t *param_1)
{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 3;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 3;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(int32_t *)(param_1 + 0xe) = 3;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 3;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(int32_t *)(param_1 + 0x16) = 3;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(int32_t *)(param_1 + 0x1a) = 3;
  param_1[1] = 0xffffffffffffffff;
  *param_1 = 0;
  *(int8_t *)(param_1 + 2) = 0;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_50610(void)
void RenderingSystem_50610(void)
{
  uint64_t uVar1;
  if (render_system_data_memory == 0) {
    uVar1 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xd8,8,3);
    render_system_data_memory = RenderingSystem_50540(uVar1);
  }
  return;
}
// 函数: void RenderingSystem_50650(int64_t param_1,int64_t param_2)
void RenderingSystem_50650(int64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  plVar2 = *(int64_t **)(param_1 + 0x20);
  plVar3 = *(int64_t **)(param_1 + 0x18);
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 == param_2) break;
      plVar3 = plVar3 + 6;
    } while (plVar3 != plVar2);
    if (plVar3 != plVar2) {
      plVar1 = plVar3 + 6;
      if (plVar1 < plVar2) {
// WARNING: Subroutine does not return
        memmove(plVar3,plVar1,(int64_t)plVar2 - (int64_t)plVar1);
      }
      *(int64_t **)(param_1 + 0x20) = plVar2 + -6;
    }
  }
  plVar2 = *(int64_t **)(param_1 + 0x40);
  plVar3 = *(int64_t **)(param_1 + 0x38);
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 == param_2) break;
      plVar3 = plVar3 + 3;
    } while (plVar3 != plVar2);
    if (plVar3 != plVar2) {
      plVar1 = plVar3 + 3;
      if (plVar1 < plVar2) {
// WARNING: Subroutine does not return
        memmove(plVar3,plVar1,(int64_t)plVar2 - (int64_t)plVar1);
      }
      *(int64_t **)(param_1 + 0x40) = plVar2 + -3;
    }
  }
  plVar2 = *(int64_t **)(param_1 + 0x60);
  plVar3 = *(int64_t **)(param_1 + 0x58);
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 == param_2) break;
      plVar3 = plVar3 + 6;
    } while (plVar3 != plVar2);
    if (plVar3 != plVar2) {
      plVar1 = plVar3 + 6;
      if (plVar1 < plVar2) {
// WARNING: Subroutine does not return
        memmove(plVar3,plVar1,(int64_t)plVar2 - (int64_t)plVar1);
      }
      *(int64_t **)(param_1 + 0x60) = plVar2 + -6;
    }
  }
  plVar2 = *(int64_t **)(param_1 + 0x80);
  plVar3 = *(int64_t **)(param_1 + 0x78);
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 == param_2) break;
      plVar3 = plVar3 + 3;
    } while (plVar3 != plVar2);
    if (plVar3 != plVar2) {
      plVar1 = plVar3 + 3;
      if (plVar1 < plVar2) {
// WARNING: Subroutine does not return
        memmove(plVar3,plVar1,(int64_t)plVar2 - (int64_t)plVar1);
      }
      *(int64_t **)(param_1 + 0x80) = plVar2 + -3;
    }
  }
  plVar2 = *(int64_t **)(param_1 + 0xa0);
  plVar3 = *(int64_t **)(param_1 + 0x98);
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 == param_2) break;
      plVar3 = plVar3 + 3;
    } while (plVar3 != plVar2);
    if (plVar3 != plVar2) {
      plVar1 = plVar3 + 3;
      if (plVar1 < plVar2) {
// WARNING: Subroutine does not return
        memmove(plVar3,plVar1,(int64_t)plVar2 - (int64_t)plVar1);
      }
      *(int64_t **)(param_1 + 0xa0) = plVar2 + -3;
    }
  }
  return;
}
uint64_t * RenderingSystem_507f0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_648_ptr;
  if ((int64_t *)param_1[0x12] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x12] + 0x38))();
  }
  param_1[0xe] = &system_data_buffer_ptr;
  if (param_1[0xf] != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  param_1[0xe] = &system_state_ptr;
  UIComponent_Manager(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x98);
  }
  return param_1;
}
uint64_t *
RenderingSystem_508a0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &ui_system_data_1024_ptr;
  UIComponent_Manager();
  if ((param_2 & 1) != 0) {
    free(param_1,0x78,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_508f0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_508f0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  void *plocal_var_60;
  uint64_t *plocal_var_58;
  int32_t local_var_50;
  uint64_t local_var_48;
  void *plocal_var_40;
  uint64_t *plocal_var_38;
  int32_t local_var_30;
  uint64_t local_var_28;
  if ((*(int *)(param_2 + 0x10) == 8) &&
     (iVar1 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_e3a0,(char)param_3,param_4,
                     0xfffffffffffffffe), iVar1 == 0)) {
    plocal_var_60 = &system_data_buffer_ptr;
    local_var_48 = 0;
    plocal_var_58 = (uint64_t *)0x0;
    local_var_50 = 0;
    puVar3 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    plocal_var_58 = puVar3;
    uVar2 = CoreMemoryPoolCleaner(puVar3);
    *puVar3 = 0x74736143796152;
    local_var_50 = 7;
    local_var_48._0_4_ = uVar2;
    DataEncryptionHandler0(param_3,&plocal_var_60);
    plocal_var_60 = &system_data_buffer_ptr;
    if (plocal_var_58 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plocal_var_58 = (uint64_t *)0x0;
    local_var_48 = (uint64_t)local_var_48._4_4_ << 0x20;
    plocal_var_60 = &system_state_ptr;
    plocal_var_40 = &system_data_buffer_ptr;
    local_var_28 = 0;
    plocal_var_38 = (uint64_t *)0x0;
    local_var_30 = 0;
    puVar3 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    plocal_var_38 = puVar3;
    uVar2 = CoreMemoryPoolCleaner(puVar3);
    *puVar3 = 0x6867696548746547;
    *(int32_t *)(puVar3 + 1) = 0x744174;
    local_var_30 = 0xb;
    local_var_28._0_4_ = uVar2;
    DataEncryptionHandler0(param_3,&plocal_var_40);
    plocal_var_40 = &system_data_buffer_ptr;
    if (plocal_var_38 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plocal_var_38 = (uint64_t *)0x0;
    local_var_28 = (uint64_t)local_var_28._4_4_ << 0x20;
    plocal_var_40 = &system_state_ptr;
    plocal_var_60 = &system_data_buffer_ptr;
    local_var_48 = 0;
    plocal_var_58 = (uint64_t *)0x0;
    local_var_50 = 0;
    puVar3 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    plocal_var_58 = puVar3;
    uVar2 = CoreMemoryPoolCleaner(puVar3);
    *puVar3 = 0x43656c7573706143;
    *(int32_t *)(puVar3 + 1) = 0x747361;
    local_var_50 = 0xb;
    local_var_48._0_4_ = uVar2;
    DataEncryptionHandler0(param_3,&plocal_var_60);
    plocal_var_60 = &system_data_buffer_ptr;
    if (plocal_var_58 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plocal_var_58 = (uint64_t *)0x0;
    local_var_48 = (uint64_t)local_var_48._4_4_ << 0x20;
    plocal_var_60 = &system_state_ptr;
    plocal_var_40 = &system_data_buffer_ptr;
    local_var_28 = 0;
    plocal_var_38 = (uint64_t *)0x0;
    local_var_30 = 0;
    puVar4 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x11,0x13);
    *(int8_t *)puVar4 = 0;
    plocal_var_38 = (uint64_t *)puVar4;
    uVar2 = CoreMemoryPoolCleaner(puVar4);
    *puVar4 = 0x73706143;
    puVar4[1] = 0x43656c75;
    puVar4[2] = 0x696c6c6f;
    puVar4[3] = 0x6e6f6973;
    *(int8_t *)(puVar4 + 4) = 0;
    local_var_30 = 0x10;
    local_var_28._0_4_ = uVar2;
    DataEncryptionHandler0(param_3,&plocal_var_40);
    plocal_var_40 = &system_data_buffer_ptr;
    if (plocal_var_38 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plocal_var_38 = (uint64_t *)0x0;
    local_var_28 = (uint64_t)local_var_28._4_4_ << 0x20;
    plocal_var_40 = &system_state_ptr;
    plocal_var_60 = &system_data_buffer_ptr;
    local_var_48 = 0;
    plocal_var_58 = (uint64_t *)0x0;
    local_var_50 = 0;
    puVar3 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    plocal_var_58 = puVar3;
    uVar2 = CoreMemoryPoolCleaner(puVar3);
    *puVar3 = 0x74696d69786f7250;
    *(int32_t *)(puVar3 + 1) = 0x73655479;
    *(int16_t *)((int64_t)puVar3 + 0xc) = 0x74;
    local_var_50 = 0xd;
    local_var_48._0_4_ = uVar2;
    DataEncryptionHandler0(param_3,&plocal_var_60);
    plocal_var_60 = &system_data_buffer_ptr;
    if (plocal_var_58 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plocal_var_58 = (uint64_t *)0x0;
    local_var_48 = (uint64_t)local_var_48._4_4_ << 0x20;
    plocal_var_60 = &system_state_ptr;
    plocal_var_40 = &system_data_buffer_ptr;
    local_var_28 = 0;
    plocal_var_38 = (uint64_t *)0x0;
    local_var_30 = 0;
    puVar3 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    plocal_var_38 = puVar3;
    uVar2 = CoreMemoryPoolCleaner(puVar3);
    local_var_28 = CONCAT44(local_var_28._4_4_,uVar2);
    *puVar3 = 0x546e696172726554;
    *(int32_t *)(puVar3 + 1) = 0x747365;
    local_var_30 = 0xb;
    DataEncryptionHandler0(param_3,&plocal_var_40);
    plocal_var_40 = &system_data_buffer_ptr;
    if (plocal_var_38 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_50ca0(void)
void RenderingSystem_50ca0(void)
{
  uint64_t uVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t in_R9;
  void *plocal_var_d8;
  uint64_t *plocal_var_d0;
  int32_t local_var_c8;
  uint64_t local_var_c0;
  uVar1 = system_resource_state;
  plocal_var_d8 = &system_data_buffer_ptr;
  local_var_c0 = 0;
  plocal_var_d0 = (uint64_t *)0x0;
  local_var_c8 = 0;
  puVar3 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,in_R9,0,0xfffffffffffffffe);
  *(int8_t *)puVar3 = 0;
  plocal_var_d0 = puVar3;
  uVar2 = CoreMemoryPoolCleaner(puVar3);
  local_var_c0 = CONCAT44(local_var_c0._4_4_,uVar2);
  *puVar3 = 0x6f6c5f6775626564;
  *(int32_t *)(puVar3 + 1) = 0x656d5f64;
  *(int16_t *)((int64_t)puVar3 + 0xc) = 0x6873;
  *(int8_t *)((int64_t)puVar3 + 0xe) = 0;
  local_var_c8 = 0xe;
  RenderingSystem_VertexProcessor(uVar1,&plocal_var_d8,1);
  plocal_var_d8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_51010(uint64_t param_1)
void RenderingSystem_51010(uint64_t param_1)
{
  int8_t stack_array_118 [32];
  int32_t local_var_f8;
  uint64_t local_var_f0;
  void **applocal_var_e8 [2];
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [72];
  void *aplocal_var_78 [11];
  int32_t local_var_20;
  uint64_t local_var_18;
  local_var_f0 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_118;
  local_var_f8 = 0;
  plocal_var_d8 = &memory_allocator_3480_ptr;
  plocal_var_d0 = stack_array_c0;
  stack_array_c0[0] = 0;
  local_var_c8 = 8;
  strcpy_s(stack_array_c0,0x40,&system_data_e3a0);
  SystemCommunicationProcessor(aplocal_var_78,&plocal_var_d8);
  local_var_20 = 9;
  local_var_f8 = 1;
  MathOptimizationEngine0(param_1,applocal_var_e8,aplocal_var_78);
  local_var_f8 = 0;
  applocal_var_e8[0] = aplocal_var_78;
  aplocal_var_78[0] = &system_state_ptr;
  plocal_var_d8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_118);
}
// 函数: void RenderingSystem_51120(uint64_t param_1,int64_t param_2)
void RenderingSystem_51120(uint64_t param_1,int64_t param_2)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  if ((*(int *)(param_2 + 0x10) != 8) ||
     (iVar1 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_e3a0), iVar1 != 0)) {
    if (*(int *)(param_2 + 0x10) != 5) {
      return;
    }
    lVar2 = 0;
    do {
      lVar3 = lVar2 + 1;
      if (*(char *)(*(int64_t *)(param_2 + 8) + lVar2) != (&rendering_buffer_2612_ptr)[lVar2]) {
        return;
      }
      lVar2 = lVar3;
    } while (lVar3 != 6);
  }
  RenderingSystem_51190(param_1);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address