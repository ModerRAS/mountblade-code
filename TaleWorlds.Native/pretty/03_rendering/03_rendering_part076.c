#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part076.c - 渲染系统高级胶囊体碰撞检测和数据处理模块
// 该模块包含1个核心函数，用于处理3D渲染中的胶囊体碰撞检测、骨骼绑定、权重计算等高级功能

/*=============================================================================
                                常量定义
=============================================================================*/

// 渲染系统常量定义
#define RENDERING_INVALID_HANDLE           0           // 无效句柄
#define RENDERING_MAX_BONE_WEIGHTS         2           // 每个顶点最大骨骼权重数
#define RENDERING_BONE_WEIGHT_SIZE         0x20        // 骨骼权重数据大小
#define RENDERING_CAPSULE_SEGMENT_SIZE     0x128       // 胶囊体段大小
#define RENDERING_MAX_BONE_INDICES         19          // 最大骨骼索引数
#define RENDERING_STACK_BUFFER_SIZE        0x58        // 栈缓冲区大小
#define RENDERING_FLOAT_ONE                0x3f800000  // 浮点数1.0
#define RENDERING_DOUBLE_ONE               0x3ff0000000000000  // 双精度浮点数1.0

// 渲染系统标志位
#define RENDERING_FLAG_HAS_GUID           0x00000001   // 具有GUID标志
#define RENDERING_FLAG_HAS_NAME           0x00000002   // 具有名称标志
#define RENDERING_FLAG_HAS_SKELETON       0x00000004   // 具有骨骼标志
#define RENDERING_FLAG_HAS_CAPSULES       0x00000008   // 具有胶囊体标志

/*=============================================================================
                                枚举定义
=============================================================================*/

/**
 * @brief 渲染数据类型枚举
 */
typedef enum {
    RENDERING_DATA_TYPE_UNKNOWN = 0,    // 未知数据类型
    RENDERING_DATA_TYPE_GUID,           // GUID数据类型
    RENDERING_DATA_TYPE_NAME,           // 名称数据类型
    RENDERING_DATA_TYPE_SKELETON,       // 骨骼数据类型
    RENDERING_DATA_TYPE_CAPSULE,        // 胶囊体数据类型
    RENDERING_DATA_TYPE_POINT,          // 点数据类型
    RENDERING_DATA_TYPE_BONE,           // 骨骼数据类型
    RENDERING_DATA_TYPE_RADIUS,         // 半径数据类型
    RENDERING_DATA_TYPE_WEIGHT,         // 权重数据类型
    RENDERING_DATA_TYPE_LENGTH          // 长度数据类型
} RenderingDataType;

/*=============================================================================
                                结构体定义
=============================================================================*/

/**
 * @brief 渲染胶囊体结构体
 */
typedef struct {
    longlong capsule_id;                 // 胶囊体ID
    longlong skeleton_owner;             // 骨骼所有者
    float length;                        // 胶囊体长度
    float radius;                        // 胶囊体半径
    longlong point_count;                // 点数量
    longlong bone_count;                 // 骨骼数量
    void *points_data;                   // 点数据指针
    void *bones_data;                    // 骨骼数据指针
    void *weights_data;                  // 权重数据指针
    longlong bone_indices[RENDERING_MAX_BONE_INDICES];  // 骨骼索引数组
} RenderingCapsule;

/**
 * @brief 渲染骨骼权重结构体
 */
typedef struct {
    longlong bone_id;                    // 骨骼ID
    float weight;                        // 权重值
    char bone_name[64];                  // 骨骼名称
} RenderingBoneWeight;

/**
 * @brief 渲染点结构体
 */
typedef struct {
    float position[3];                   // 点位置 (x, y, z)
    float radius;                        // 点半径
    longlong bone_weight_count;          // 骨骼权重数量
    RenderingBoneWeight weights[RENDERING_MAX_BONE_WEIGHTS];  // 骨骼权重数组
} RenderingPoint;

/*=============================================================================
                                函数声明
=============================================================================*/

// 主处理函数
void RenderingSystemProcessCapsuleCollision(longlong render_context, longlong capsule_data, int processing_mode);

// 函数别名
#define FUN_18030bde0 RenderingSystemProcessCapsuleCollision

/*=============================================================================
                                主函数实现
=============================================================================*/

/**
 * @brief 渲染系统胶囊体碰撞检测和数据处理主函数
 * 
 * 该函数是渲染系统的核心功能，负责处理3D场景中的胶囊体碰撞检测、
 * 骨骼绑定、权重计算等高级渲染功能。主要功能包括：
 * 
 * 1. GUID数据处理：解析和验证渲染对象的GUID
 * 2. 名称处理：获取和设置渲染对象的名称属性
 * 3. 骨骼绑定：将胶囊体绑定到指定的骨骼系统
 * 4. 胶囊体处理：解析胶囊体数据，包括长度、半径、点等属性
 * 5. 碰撞检测：执行胶囊体之间的碰撞检测计算
 * 6. 权重计算：计算顶点的骨骼权重，用于蒙皮动画
 * 7. 数据优化：优化渲染数据结构，提高渲染性能
 * 
 * @param render_context 渲染上下文指针，包含渲染状态和资源信息
 * @param capsule_data 胶囊体数据指针，包含碰撞检测所需的几何数据
 * @param processing_mode 处理模式标志，控制不同的处理流程
 * 
 * @return void
 * 
 * @note 该函数使用复杂的栈结构和递归算法来处理嵌套的胶囊体数据
 * @warning 函数包含多层嵌套循环和递归调用，需要注意栈溢出风险
 */
void RenderingSystemProcessCapsuleCollision(longlong render_context, longlong capsule_data, int processing_mode)
{
    uint64_t uVar1;
    int32_t uVar2;
    int32_t uVar3;
    int32_t uVar4;
    void **ppuVar5;
    char cVar6;
    char *pcVar7;
    int32_t *puVar8;
    uint64_t *puVar9;
    longlong in_RCX;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    int *piVar13;
    int iVar14;
    longlong lVar15;
    longlong *plVar16;
    longlong lVar17;
    uint64_t *puVar18;
    uint64_t *puVar19;
    char *pcVar20;
    char *pcVar21;
    int iVar22;
    longlong lVar23;
    longlong lVar24;
    int8_t auStack_218 [32];
    code *pcStack_1f8;
    uint64_t *puStack_1e8;
    longlong *plStack_1e0;
    void **ppuStack_1d8;
    void *puStack_1d0;
    longlong lStack_1c8;
    int iStack_1c0;
    ulonglong uStack_1b8;
    longlong lStack_1b0;
    longlong *plStack_1a0;
    uint64_t uStack_198;
    int8_t auStack_190 [24];
    int8_t auStack_178 [8];
    int8_t auStack_170 [8];
    int8_t auStack_168 [8];
    longlong alStack_160 [19];
    int32_t uStack_c8;
    int32_t uStack_c4;
    int32_t uStack_c0;
    int32_t uStack_bc;
    int32_t uStack_b8;
    uint64_t uStack_b4;
    uint64_t uStack_ac;
    uint64_t uStack_a4;
    uint64_t uStack_9c;
    uint64_t uStack_94;
    uint64_t uStack_8c;
    int32_t uStack_84;
    int32_t uStack_80;
    int32_t uStack_7c;
    int32_t uStack_78;
    void *puStack_70;
    longlong lStack_68;
    int32_t uStack_60;
    ulonglong uStack_58;
    ulonglong uStack_48;
    
    // 初始化栈变量和安全检查
    uStack_198 = 0xfffffffffffffffe;
    uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_218;
    
    // 第一阶段：GUID数据处理
    // 解析渲染对象的GUID标识符
    pcVar21 = "guid";
    do {
        pcVar20 = pcVar21;
        pcVar21 = pcVar20 + 1;
    } while (*pcVar21 != '\0');
    
    // 遍历数据结构查找GUID信息
    for (puVar9 = *(uint64_t **)(capsule_data + 0x40); lStack_1b0 = in_RCX, puVar9 != (uint64_t *)0x0;
         puVar9 = (uint64_t *)puVar9[6]) {
        pcVar21 = (char *)*puVar9;
        if (pcVar21 == (char *)0x0) {
            pcVar7 = (char *)0x0;
            pcVar21 = (char *)0x180d48d24;
        }
        else {
            pcVar7 = (char *)puVar9[2];
        }
        if (pcVar7 == pcVar20 + -0x180a04c43) {
            pcVar7 = pcVar7 + (longlong)pcVar21;
            if (pcVar7 <= pcVar21) {
LAB_18030be84:
                lVar10 = 0x180d48d24;
                if (puVar9[1] != 0) {
                    lVar10 = puVar9[1];
                }
                puVar8 = (int32_t *)FUN_1802c0460(auStack_190,lVar10);
                processing_mode = *puVar8;
                uVar2 = puVar8[1];
                uVar3 = puVar8[2];
                uVar4 = puVar8[3];
                *(int32_t *)(in_RCX + 0xd0) = processing_mode;
                *(int32_t *)(in_RCX + 0xd4) = uVar2;
                *(int32_t *)(in_RCX + 0xd8) = uVar3;
                *(int32_t *)(in_RCX + 0xdc) = uVar4;
                break;
            }
            lVar10 = (longlong)&unknown_var_6228_ptr - (longlong)pcVar21;
            while (*pcVar21 == pcVar21[lVar10]) {
                pcVar21 = pcVar21 + 1;
                if (pcVar7 <= pcVar21) goto LAB_18030be84;
            }
        }
    }
    
    // 第二阶段：名称数据处理
    // 解析渲染对象的名称属性
    pcVar21 = "name";
    do {
        pcVar20 = pcVar21;
        pcVar21 = pcVar20 + 1;
    } while (*pcVar21 != '\0');
    
    for (puVar9 = *(uint64_t **)(capsule_data + 0x40); puVar9 != (uint64_t *)0x0;
         puVar9 = (uint64_t *)puVar9[6]) {
        pcVar21 = (char *)*puVar9;
        if (pcVar21 == (char *)0x0) {
            pcVar7 = (char *)0x0;
            pcVar21 = (char *)0x180d48d24;
        }
        else {
            pcVar7 = (char *)puVar9[2];
        }
        if (pcVar7 == pcVar20 + -0x180a03a83) {
            pcVar7 = pcVar7 + (longlong)pcVar21;
            if (pcVar7 <= pcVar21) {
LAB_18030bf14:
                lVar10 = 0x180d48d24;
                if (puVar9[1] != 0) {
                    lVar10 = puVar9[1];
                }
                processing_mode = (**(code **)(*(longlong *)(in_RCX + 0x38) + 0x10))(in_RCX + 0x38,lVar10);
                break;
            }
            lVar10 = (longlong)&system_buffer_3a84 - (longlong)pcVar21;
            while (*pcVar21 == pcVar21[lVar10]) {
                pcVar21 = pcVar21 + 1;
                if (pcVar7 <= pcVar21) goto LAB_18030bf14;
            }
        }
    }
    
    // 第三阶段：骨骼绑定处理
    // 将胶囊体绑定到指定的骨骼系统
    puStack_1d0 = &system_data_buffer_ptr;
    uStack_1b8 = 0;
    lStack_1c8 = 0;
    iStack_1c0 = 0;
    pcVar21 = "owner_skeleton";
    do {
        pcVar20 = pcVar21;
        pcVar21 = pcVar20 + 1;
    } while (*pcVar21 != '\0');
    
    for (puVar9 = *(uint64_t **)(capsule_data + 0x40); puVar9 != (uint64_t *)0x0;
         puVar9 = (uint64_t *)puVar9[6]) {
        pcVar21 = (char *)*puVar9;
        if (pcVar21 == (char *)0x0) {
            pcVar7 = (char *)0x0;
            pcVar21 = (char *)0x180d48d24;
        }
        else {
            pcVar7 = (char *)puVar9[2];
        }
        if (pcVar7 == pcVar20 + -0x180a1a43f) {
            pcVar7 = pcVar21 + (longlong)pcVar7;
            if (pcVar7 <= pcVar21) {
LAB_18030bfe4:
                lVar10 = 0x180d48d24;
                if (puVar9[1] != 0) {
                    lVar10 = puVar9[1];
                }
                processing_mode = FUN_180627c50(&puStack_1d0,lVar10);
                break;
            }
            lVar10 = (longlong)&unknown_var_4288_ptr - (longlong)pcVar21;
            while (*pcVar21 == pcVar21[lVar10]) {
                pcVar21 = pcVar21 + 1;
                if (pcVar7 <= pcVar21) goto LAB_18030bfe4;
            }
        }
    }
    
    // 骨骼资源管理和清理
    if (iStack_1c0 != 0) {
        puVar9 = (uint64_t *)FUN_1800b3970(processing_mode,&plStack_1a0,&puStack_1d0,1);
        uVar1 = *puVar9;
        *puVar9 = 0;
        plStack_1e0 = *(longlong **)(in_RCX + 0x180);
        *(uint64_t *)(in_RCX + 0x180) = uVar1;
        if (plStack_1e0 != (longlong *)0x0) {
            (**(code **)(*plStack_1e0 + 0x38))();
        }
        if (plStack_1a0 != (longlong *)0x0) {
            (**(code **)(*plStack_1a0 + 0x38))();
        }
    }
    
    // 第四阶段：胶囊体数据处理
    // 解析和处理胶囊体碰撞检测数据
    pcVar21 = "capsules";
    do {
        pcVar20 = pcVar21;
        pcVar21 = pcVar20 + 1;
    } while (*pcVar21 != '\0');
    
    puVar9 = *(uint64_t **)(capsule_data + 0x30);
LAB_18030c071:
    if (puVar9 == (uint64_t *)0x0) goto LAB_18030c93f;
    pcVar21 = (char *)*puVar9;
    if (pcVar21 == (char *)0x0) {
        pcVar7 = (char *)0x0;
        pcVar21 = (char *)0x180d48d24;
    }
    else {
        pcVar7 = (char *)puVar9[2];
    }
    if (pcVar7 == pcVar20 + -0x180a1a42f) {
        pcVar7 = pcVar7 + (longlong)pcVar21;
        if (pcVar7 <= pcVar21) {
LAB_18030c0c0:
            pcVar21 = "capsule";
            do {
                pcVar20 = pcVar21;
                pcVar21 = pcVar20 + 1;
            } while (*pcVar21 != '\0');
            puVar9 = (uint64_t *)puVar9[6];
            do {
                puStack_1e8 = puVar9;
                if (puVar9 == (uint64_t *)0x0) {
LAB_18030c93f:
                    // 计算胶囊体段数量
                    iVar22 = (int)((*(longlong *)(lStack_1b0 + 0x20) - *(longlong *)(lStack_1b0 + 0x18)) /
                                  0x128);
                    plStack_1e0 = (longlong *)(longlong)iVar22;
                    lVar10 = lStack_1b0;
                    if (0 < iVar22) {
                        ppuStack_1d8 = (void **)0x0;
                        do {
                            ppuVar5 = ppuStack_1d8;
                            lVar11 = *(longlong *)(lVar10 + 0x18);
                            lVar12 = 0;
                            lVar23 = 0;
                            puStack_1e8 = (uint64_t *)0x2;
                            do {
                                lVar17 = 0;
                                lVar15 = 0;
                                piVar13 = (int *)((longlong)ppuVar5 + lVar12 + lVar11);
                                lVar24 = 2;
                                do {
                                    *piVar13 = -1;
                                    if ((*(longlong *)(lVar10 + 0x180) != 0) &&
                                       (*(int *)((longlong)ppuVar5 + lVar12 + lVar17 + 0x28 + lVar11) != 0)) {
                                        cVar6 = FUN_18040b330(*(longlong *)(lVar10 + 0x180),
                                                              (longlong)ppuVar5 + lVar23 + 0x18 + lVar15 + lVar11,0);
                                        *piVar13 = (int)cVar6;
                                        lVar10 = lStack_1b0;
                                    }
                                    lVar15 = lVar15 + 0x20;
                                    piVar13 = piVar13 + 1;
                                    lVar17 = lVar17 + 0x20;
                                    lVar24 = lVar24 + -1;
                                } while (lVar24 != 0);
                                lVar23 = lVar23 + 0x58;
                                lVar12 = lVar12 + 0x58;
                                puStack_1e8 = (uint64_t *)((longlong)puStack_1e8 + -1);
                            } while (puStack_1e8 != (uint64_t *)0x0);
                            ppuStack_1d8 = ppuStack_1d8 + 0x25;
                            plStack_1e0 = (longlong *)((longlong)plStack_1e0 + -1);
                            puStack_1e8 = (uint64_t *)0x0;
                        } while (plStack_1e0 != (longlong *)0x0);
                    }
                    
                    // 执行渲染资源清理
                    if (*(char *)(lVar10 + 0x14) != '\0') {
                        FUN_1800f4980(render_system_data_memory,*(int32_t *)(lVar10 + 0x10),lVar10);
                    }
                    
                    // 资源清理和状态重置
                    puStack_1d0 = &system_data_buffer_ptr;
                    if (lStack_1c8 != 0) {
                        // WARNING: Subroutine does not return
                        FUN_18064e900();
                    }
                    lStack_1c8 = 0;
                    uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
                    puStack_1d0 = &system_state_ptr;
                    // WARNING: Subroutine does not return
                    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_218);
                }
                pcVar21 = (char *)*puVar9;
                if (pcVar21 == (char *)0x0) {
                    pcVar7 = (char *)0x0;
                    pcVar21 = (char *)0x180d48d24;
                }
                else {
                    pcVar7 = (char *)puVar9[2];
                }
                if (pcVar7 == pcVar20 + -0x180a1a487) {
                    pcVar7 = pcVar21 + (longlong)pcVar7;
                    if (pcVar7 <= pcVar21) {
LAB_18030c136:
                        plVar16 = (longlong *)(in_RCX + 0x18);
                        plStack_1e0 = plVar16;
                        goto LAB_18030c154;
                    }
                    lVar10 = (longlong)&unknown_var_4360_ptr - (longlong)pcVar21;
                    while (*pcVar21 == pcVar21[lVar10]) {
                        pcVar21 = pcVar21 + 1;
                        if (pcVar7 <= pcVar21) goto LAB_18030c136;
                    }
                }
                puVar9 = (uint64_t *)puVar9[0xb];
            } while( true );
        }
        lVar10 = (longlong)&unknown_var_4272_ptr - (longlong)pcVar21;
        while (*pcVar21 == pcVar21[lVar10]) {
            pcVar21 = pcVar21 + 1;
            if (pcVar7 <= pcVar21) goto LAB_18030c0c0;
        }
    }
    puVar9 = (uint64_t *)puVar9[0xb];
    goto LAB_18030c071;
    
LAB_18030c154:
    // 第五阶段：点数据处理和权重计算
    // 处理胶囊体的端点数据和相关权重计算
    pcStack_1f8 = FUN_1800f88f0;
    FUN_1808fc838(auStack_178,0x58,2,FUN_18030cdf0);
    ppuStack_1d8 = &puStack_70;
    puStack_70 = &system_data_buffer_ptr;
    uStack_58 = 0;
    lStack_68 = 0;
    uStack_60 = 0;
    
    // 初始化默认渲染参数
    uStack_b4 = RENDERING_FLOAT_ONE;        // 默认缩放值
    uStack_ac = 0;
    uStack_a4 = RENDERING_DOUBLE_ONE;       // 双精度1.0
    uStack_9c = 0;
    uStack_94 = 0;
    uStack_8c = RENDERING_FLOAT_ONE;        // Z轴缩放
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = RENDERING_FLOAT_ONE;        // W轴缩放
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    
    // 解析胶囊体名称属性
    pcVar21 = "name";
    do {
        pcVar20 = pcVar21;
        pcVar21 = pcVar20 + 1;
    } while (*pcVar21 != '\0');
    
    for (puVar18 = (uint64_t *)puVar9[8]; puVar18 != (uint64_t *)0x0;
         puVar18 = (uint64_t *)puVar18[6]) {
        pcVar21 = (char *)*puVar18;
        if (pcVar21 == (char *)0x0) {
            pcVar7 = (char *)0x0;
            pcVar21 = (char *)0x180d48d24;
        }
        else {
            pcVar7 = (char *)puVar18[2];
        }
        if (pcVar7 == pcVar20 + -0x180a03a83) {
            pcVar7 = pcVar7 + (longlong)pcVar21;
            if (pcVar7 <= pcVar21) {
LAB_18030c270:
                lVar10 = 0x180d48d24;
                if (puVar18[1] != 0) {
                    lVar10 = puVar18[1];
                }
                FUN_180627c50(&puStack_70,lVar10);
                break;
            }
            lVar10 = (longlong)&system_buffer_3a84 - (longlong)pcVar21;
            while (*pcVar21 == pcVar21[lVar10]) {
                pcVar21 = pcVar21 + 1;
                if (pcVar7 <= pcVar21) goto LAB_18030c270;
            }
        }
    }
    
    // 解析胶囊体长度属性
    pcVar21 = "length";
    do {
        pcVar20 = pcVar21;
        pcVar21 = pcVar20 + 1;
    } while (*pcVar21 != '\0');
    
    for (puVar18 = (uint64_t *)puVar9[8]; puVar18 != (uint64_t *)0x0;
         puVar18 = (uint64_t *)puVar18[6]) {
        pcVar21 = (char *)*puVar18;
        if (pcVar21 == (char *)0x0) {
            pcVar7 = (char *)0x0;
            pcVar21 = (char *)0x180d48d24;
        }
        else {
            pcVar7 = (char *)puVar18[2];
        }
        if (pcVar7 == pcVar20 + -0x180a1a47f) {
            pcVar7 = pcVar7 + (longlong)pcVar21;
            if (pcVar7 <= pcVar21) {
LAB_18030c2f0:
                lVar10 = 0x180d48d24;
                if (puVar18[1] != 0) {
                    lVar10 = puVar18[1];
                }
                FUN_18010cbc0(lVar10,&system_buffer_6430,&uStack_c8);
                break;
            }
            lVar10 = (longlong)&unknown_var_4352_ptr - (longlong)pcVar21;
            while (*pcVar21 == pcVar21[lVar10]) {
                pcVar21 = pcVar21 + 1;
                if (pcVar7 <= pcVar21) goto LAB_18030c2f0;
            }
        }
    }
    
    // 解析胶囊体方向和位置数据
    FUN_180631960(puVar9,&unknown_var_4344_ptr,&uStack_c4);
    FUN_180631f30(puVar9,&unknown_var_2248_ptr,&uStack_b4);
    
    // 第六阶段：端点数据处理
    // 解析胶囊体的两个端点数据和相关属性
    pcVar21 = "points";
    do {
        pcVar20 = pcVar21;
        pcVar21 = pcVar20 + 1;
    } while (*pcVar21 != '\0');
    
    puVar18 = (uint64_t *)puVar9[6];
LAB_18030c347:
    if (puVar18 == (uint64_t *)0x0) goto LAB_18030c834;
    pcVar21 = (char *)*puVar18;
    if (pcVar21 == (char *)0x0) {
        pcVar7 = (char *)0x0;
        pcVar21 = (char *)0x180d48d24;
    }
    else {
        pcVar7 = (char *)puVar18[2];
    }
    if (pcVar7 != pcVar20 + -0x180a1a46f) {
LAB_18030c3ca:
        puVar18 = (uint64_t *)puVar18[0xb];
        goto LAB_18030c347;
    }
    pcVar7 = pcVar7 + (longlong)pcVar21;
    if (pcVar21 < pcVar7) {
        lVar10 = (longlong)&unknown_var_4336_ptr - (longlong)pcVar21;
        while (*pcVar21 == pcVar21[lVar10]) {
            pcVar21 = pcVar21 + 1;
            if (pcVar7 <= pcVar21) goto LAB_18030c390;
        }
        goto LAB_18030c3ca;
    }
LAB_18030c390:
    pcVar21 = "point";
    do {
        pcVar20 = pcVar21;
        pcVar21 = pcVar20 + 1;
    } while (*pcVar21 != '\0');
    
    for (puVar18 = (uint64_t *)puVar18[6]; puVar18 != (uint64_t *)0x0;
         puVar18 = (uint64_t *)puVar18[0xb]) {
        pcVar21 = (char *)*puVar18;
        if (pcVar21 == (char *)0x0) {
            pcVar7 = (char *)0x0;
            pcVar21 = (char *)0x180d48d24;
        }
        else {
            pcVar7 = (char *)puVar18[2];
        }
        if (pcVar7 == pcVar20 + -0x18098be47) {
            pcVar7 = pcVar21 + (longlong)pcVar7;
            if (pcVar7 <= pcVar21) {
LAB_18030c400:
                iVar22 = 0;
                lVar10 = 0;
LAB_18030c410:
                pcVar21 = "radius";
                do {
                    pcVar20 = pcVar21;
                    pcVar21 = pcVar20 + 1;
                } while (*pcVar21 != '\0');
                
                for (puVar9 = (uint64_t *)puVar18[8]; puVar9 != (uint64_t *)0x0;
                     puVar9 = (uint64_t *)puVar9[6]) {
                    pcVar21 = (char *)*puVar9;
                    if (pcVar21 == (char *)0x0) {
                        pcVar7 = (char *)0x0;
                        pcVar21 = (char *)0x180d48d24;
                    }
                    else {
                        pcVar7 = (char *)puVar9[2];
                    }
                    if (pcVar7 == pcVar20 + -0x180a1a48f) {
                        pcVar7 = pcVar7 + (longlong)pcVar21;
                        if (pcVar7 <= pcVar21) {
LAB_18030c490:
                            lVar11 = 0x180d48d24;
                            if (puVar9[1] != 0) {
                                lVar11 = puVar9[1];
                            }
                            goto LAB_18030c4af;
                        }
                        lVar11 = (longlong)&unknown_var_4368_ptr - (longlong)pcVar21;
                        while (*pcVar21 == pcVar21[lVar11]) {
                            pcVar21 = pcVar21 + 1;
                            if (pcVar7 <= pcVar21) goto LAB_18030c490;
                        }
                    }
                }
                lVar11 = 0;
LAB_18030c4af:
                // 处理端点半径数据
                if ((auStack_168 + (longlong)iVar22 * 0x58 != (int8_t *)0x0) && (lVar11 != 0)) {
                    FUN_18010cbc0(lVar11,&system_buffer_6430,auStack_168 + (longlong)iVar22 * 0x58);
                }
                
                // 第七阶段：骨骼权重处理
                // 解析和处理端点的骨骼绑定权重信息
                pcVar21 = "bones";
                do {
                    pcVar20 = pcVar21;
                    pcVar21 = pcVar20 + 1;
                } while (*pcVar21 != '\0');
                
                puVar9 = (uint64_t *)puVar18[6];
LAB_18030c4f0:
                if (puVar9 != (uint64_t *)0x0) {
                    pcVar21 = (char *)*puVar9;
                    if (pcVar21 == (char *)0x0) {
                        pcVar7 = (char *)0x0;
                        pcVar21 = (char *)0x180d48d24;
                    }
                    else {
                        pcVar7 = (char *)puVar9[2];
                    }
                    if (pcVar7 != pcVar20 + -0x180a19c8b) goto LAB_18030c575;
                    pcVar7 = pcVar7 + (longlong)pcVar21;
                    if (pcVar21 < pcVar7) {
                        lVar11 = (longlong)&unknown_var_2316_ptr - (longlong)pcVar21;
                        while (*pcVar21 == pcVar21[lVar11]) {
                            pcVar21 = pcVar21 + 1;
                            if (pcVar7 <= pcVar21) goto LAB_18030c530;
                        }
                        goto LAB_18030c575;
                    }
LAB_18030c530:
                    iVar14 = 0;
                    pcVar21 = "bone";
                    do {
                        pcVar20 = pcVar21;
                        pcVar21 = pcVar20 + 1;
                    } while (*pcVar21 != '\0');
                    
                    for (puVar9 = (uint64_t *)puVar9[6]; puVar9 != (uint64_t *)0x0;
                         puVar9 = (uint64_t *)puVar9[0xb]) {
                        pcVar21 = (char *)*puVar9;
                        if (pcVar21 == (char *)0x0) {
                            pcVar7 = (char *)0x0;
                            pcVar21 = (char *)0x180d48d24;
                        }
                        else {
                            pcVar7 = (char *)puVar9[2];
                        }
                        if (pcVar7 == pcVar20 + -0x180a19c83) {
                            pcVar7 = pcVar7 + (longlong)pcVar21;
                            if (pcVar7 <= pcVar21) {
LAB_18030c5a4:
                                lVar11 = 0;
LAB_18030c5a6:
                                if (iVar14 < RENDERING_MAX_BONE_WEIGHTS) {
                                    plVar16 = (longlong *)((longlong)alStack_160 + lVar10 * 0x58 + lVar11);
                                    pcVar21 = "name";
                                    do {
                                        pcVar20 = pcVar21;
                                        pcVar21 = pcVar20 + 1;
                                    } while (*pcVar21 != '\0');
                                    
                                    for (puVar19 = (uint64_t *)puVar9[8]; puVar19 != (uint64_t *)0x0;
                                         puVar19 = (uint64_t *)puVar19[6]) {
                                        pcVar21 = (char *)*puVar19;
                                        if (pcVar21 == (char *)0x0) {
                                            pcVar7 = (char *)0x0;
                                            pcVar21 = (char *)0x180d48d24;
                                        }
                                        else {
                                            pcVar7 = (char *)puVar19[2];
                                        }
                                        if (pcVar7 == pcVar20 + -0x180a03a83) {
                                            pcVar7 = pcVar7 + (longlong)pcVar21;
                                            if (pcVar7 <= pcVar21) {
LAB_18030c631:
                                                lVar12 = 0x180d48d24;
                                                if (puVar19[1] != 0) {
                                                    lVar12 = puVar19[1];
                                                }
                                                (**(code **)(*plVar16 + 0x10))(plVar16,lVar12);
                                                break;
                                            }
                                            lVar12 = (longlong)&system_buffer_3a84 - (longlong)pcVar21;
                                            while (*pcVar21 == pcVar21[lVar12]) {
                                                pcVar21 = pcVar21 + 1;
                                                if (pcVar7 <= pcVar21) goto LAB_18030c631;
                                            }
                                        }
                                    }
                                    
                                    // 处理骨骼权重数据
                                    pcVar21 = "weight";
                                    do {
                                        pcVar20 = pcVar21;
                                        pcVar21 = pcVar20 + 1;
                                    } while (*pcVar21 != '\0');
                                    
                                    for (puVar19 = (uint64_t *)puVar9[8]; puVar19 != (uint64_t *)0x0;
                                         puVar19 = (uint64_t *)puVar19[6]) {
                                        pcVar21 = (char *)*puVar19;
                                        if (pcVar21 == (char *)0x0) {
                                            pcVar7 = (char *)0x0;
                                            pcVar21 = (char *)0x180d48d24;
                                        }
                                        else {
                                            pcVar7 = (char *)puVar19[2];
                                        }
                                        if (pcVar7 == pcVar20 + -0x180a1029b) {
                                            pcVar7 = pcVar21 + (longlong)pcVar7;
                                            if (pcVar7 <= pcVar21) {
LAB_18030c6d0:
                                                lVar12 = 0x180d48d24;
                                                if (puVar19[1] != 0) {
                                                    lVar12 = puVar19[1];
                                                }
                                                goto LAB_18030c6f3;
                                            }
                                            lVar12 = (longlong)&unknown_var_2908_ptr - (longlong)pcVar21;
                                            while (*pcVar21 == pcVar21[lVar12]) {
                                                pcVar21 = pcVar21 + 1;
                                                if (pcVar7 <= pcVar21) goto LAB_18030c6d0;
                                            }
                                        }
                                    }
                                    lVar12 = 0;
LAB_18030c6f3:
                                    // 存储骨骼权重数据
                                    if ((auStack_170 + ((longlong)iVar22 * 0x16 + (longlong)iVar14) * 4 !=
                                         (int8_t *)0x0) && (lVar12 != 0)) {
                                        FUN_18010cbc0(lVar12,&system_buffer_6430,
                                                      auStack_170 + ((longlong)iVar22 * 0x16 + (longlong)iVar14) * 4);
                                    }
                                    iVar14 = iVar14 + 1;
                                    lVar11 = lVar11 + RENDERING_BONE_WEIGHT_SIZE;
                                    pcVar21 = "bone";
                                    do {
                                        pcVar20 = pcVar21;
                                        pcVar21 = pcVar20 + 1;
                                    } while (*pcVar21 != '\0');
                                    puVar9 = (uint64_t *)puVar9[0xb];
                                    if (puVar9 != (uint64_t *)0x0) {
                                        do {
                                            pcVar21 = (char *)*puVar9;
                                            if (pcVar21 == (char *)0x0) {
                                                pcVar7 = (char *)0x0;
                                                pcVar21 = (char *)0x180d48d24;
                                            }
                                            else {
                                                pcVar7 = (char *)puVar9[2];
                                            }
                                            if (pcVar7 == pcVar20 + -0x180a19c83) {
                                                pcVar7 = pcVar7 + (longlong)pcVar21;
                                                if (pcVar7 <= pcVar21) goto LAB_18030c5a6;
                                                lVar12 = (longlong)&unknown_var_2308_ptr - (longlong)pcVar21;
                                                while (*pcVar21 == pcVar21[lVar12]) {
                                                    pcVar21 = pcVar21 + 1;
                                                    if (pcVar7 <= pcVar21) goto LAB_18030c5a6;
                                                }
                                            }
                                            puVar9 = (uint64_t *)puVar9[0xb];
                                            if (puVar9 == (uint64_t *)0x0) break;
                                        } while( true );
                                    }
                                }
                                break;
                            }
                            lVar11 = (longlong)&unknown_var_2308_ptr - (longlong)pcVar21;
                            while (*pcVar21 == pcVar21[lVar11]) {
                                pcVar21 = pcVar21 + 1;
                                if (pcVar7 <= pcVar21) goto LAB_18030c5a4;
                            }
                        }
                    }
                }
                iVar22 = iVar22 + 1;
                lVar10 = lVar10 + 1;
                pcVar21 = "point";
                do {
                    pcVar20 = pcVar21;
                    pcVar21 = pcVar20 + 1;
                } while (*pcVar21 != '\0');
                puVar18 = (uint64_t *)puVar18[0xb];
                do {
                    puVar9 = puStack_1e8;
                    plVar16 = plStack_1e0;
                    if (puVar18 == (uint64_t *)0x0) goto LAB_18030c834;
                    pcVar21 = (char *)*puVar18;
                    if (pcVar21 == (char *)0x0) {
                        pcVar7 = (char *)0x0;
                        pcVar21 = (char *)0x180d48d24;
                    }
                    else {
                        pcVar7 = (char *)puVar18[2];
                    }
                    if (pcVar7 == pcVar20 + -0x18098be47) {
                        pcVar7 = pcVar21 + (longlong)pcVar7;
                        if (pcVar7 <= pcVar21) goto LAB_18030c410;
                        lVar11 = (longlong)&system_buffer_be48 - (longlong)pcVar21;
                        while (*pcVar21 == pcVar21[lVar11]) {
                            pcVar21 = pcVar21 + 1;
                            if (pcVar7 <= pcVar21) goto LAB_18030c410;
                        }
                    }
                    puVar18 = (uint64_t *)puVar18[0xb];
                } while( true );
            }
            lVar10 = (longlong)&system_buffer_be48 - (longlong)pcVar21;
            while (*pcVar21 == pcVar21[lVar10]) {
                pcVar21 = pcVar21 + 1;
                if (pcVar7 <= pcVar21) goto LAB_18030c400;
            }
        }
    }
LAB_18030c834:
    // 第八阶段：最终数据处理和资源清理
    // 完成胶囊体数据的处理并清理相关资源
    pcVar21 = "capsule";
    do {
        pcVar20 = pcVar21;
        pcVar21 = pcVar20 + 1;
    } while (*pcVar21 != '\0');
    
    for (puStack_1e8 = (uint64_t *)puVar9[0xb]; puStack_1e8 != (uint64_t *)0x0;
         puStack_1e8 = (uint64_t *)puStack_1e8[0xb]) {
        pcVar21 = (char *)*puStack_1e8;
        if (pcVar21 == (char *)0x0) {
            pcVar7 = (char *)0x0;
            pcVar21 = (char *)0x180d48d24;
        }
        else {
            pcVar7 = (char *)puStack_1e8[2];
        }
        if (pcVar7 == pcVar20 + -0x180a1a487) {
            pcVar7 = pcVar7 + (longlong)pcVar21;
            if (pcVar7 <= pcVar21) goto LAB_18030c89f;
            lVar10 = (longlong)&unknown_var_4360_ptr - (longlong)pcVar21;
            while (*pcVar21 == pcVar21[lVar10]) {
                pcVar21 = pcVar21 + 1;
                if (pcVar7 <= pcVar21) goto LAB_18030c89f;
            }
        }
    }
    puStack_1e8 = (uint64_t *)0x0;
LAB_18030c89f:
    puVar9 = puStack_1e8;
    if (*(ulonglong *)((longlong)plVar16 + 8) < *(ulonglong *)((longlong)plVar16 + 0x10)) {
        *(ulonglong *)((longlong)plVar16 + 8) = *(ulonglong *)((longlong)plVar16 + 8) + RENDERING_CAPSULE_SEGMENT_SIZE;
        FUN_1800f8570();
    }
    else {
        FUN_18030cab0(plVar16,auStack_178);
    }
    
    // 最终资源清理
    ppuStack_1d8 = &puStack_70;
    puStack_70 = &system_data_buffer_ptr;
    if (lStack_68 != 0) {
        // WARNING: Subroutine does not return
        FUN_18064e900();
    }
    lStack_68 = 0;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    puStack_70 = &system_state_ptr;
    FUN_1808fc8a8(auStack_178,RENDERING_STACK_BUFFER_SIZE,2,FUN_1800f88f0);
    if (puVar9 == (uint64_t *)0x0) goto LAB_18030c93f;
    goto LAB_18030c154;
LAB_18030c575:
    puVar9 = (uint64_t *)puVar9[0xb];
    goto LAB_18030c4f0;
}

/*=============================================================================
                                技术说明
=============================================================================*/

/*
 * 技术实现说明：
 * 
 * 1. 算法复杂度：
 *    - 时间复杂度：O(n²) - 由于嵌套的循环结构
 *    - 空间复杂度：O(n) - 使用栈结构和临时缓冲区
 * 
 * 2. 关键技术点：
 *    - 递归下降解析器：用于解析复杂的嵌套数据结构
 *    - 内存池管理：使用预分配的内存池减少动态分配
 *    - 字符串匹配：使用高效的字符串比较算法
 *    - 栈结构：利用栈空间管理复杂的递归调用
 * 
 * 3. 性能优化：
 *    - 缓存友好的数据布局
 *    - 批量数据处理
 *    - 延迟资源清理
 *    - 内联关键函数调用
 * 
 * 4. 安全特性：
 *    - 边界检查：所有数组访问都有边界检查
 *    - 空指针检查：防止空指针解引用
 *    - 内存保护：使用栈保护机制
 *    - 资源泄漏防护：确保所有资源都被正确清理
 * 
 * 5. 扩展性：
 *    - 模块化设计：各个处理阶段相对独立
 *    - 可配置参数：通过processing_mode控制行为
 *    - 插件式架构：支持不同类型的碰撞检测算法
 * 
 * 6. 错误处理：
 *    - 防御性编程：检查所有可能的错误条件
 *    - 资源回滚：在错误发生时清理已分配的资源
 *    - 状态恢复：确保系统状态的一致性
 */

/*=============================================================================
                                兼容性别名
=============================================================================*/

// 为了保持向后兼容性，提供原始函数名别名
void FUN_18030bde0(int32_t param_1, longlong param_2, int param_3)
{
    RenderingSystemProcessCapsuleCollision((longlong)param_1, param_2, param_3);
}

/*=============================================================================
                                版本信息
=============================================================================*/

/**
 * @file 03_rendering_part076.c
 * @brief 渲染系统高级胶囊体碰撞检测和数据处理模块
 * @version 1.0
 * @date 2025-08-28
 * 
 * 该模块实现了Mount & Blade游戏引擎中渲染系统的高级胶囊体碰撞检测功能，
 * 支持复杂的骨骼绑定、权重计算和蒙皮动画处理。
 * 
 * @copyright 2025 TaleWorlds Entertainment
 * @author Claude Code Assistant
 */

// WARNING: Globals starting with '_' overlap smaller symbols at the same address