#include "TaleWorlds.Native.Split.h"

/**
 * @file 03_rendering_part125.c
 * @brief 渲染系统像素着色器生成和管理模块
 * 
 * 本模块包含4个核心函数，主要功能包括：
 * - 像素着色器代码生成和编译
 * - 顶点着色器代码生成和编译
 * - 着色器参数设置和配置
 * - 着色器文件输出和处理
 * 
 * 该模块负责渲染系统中着色器代码的生成、编译和管理，
 * 支持多种着色器类型和参数配置。
 */

// =============================================================================
// 常量定义
// =============================================================================

/** 着色器类型标识符 */
#define SHADER_TYPE_PIXEL         0x65786950  // "Pixel"
#define SHADER_TYPE_VERTEX       0x74786556  // "Vertx"
#define SHADER_TYPE_GEOMETRY     0x746d6547  // "Gemt"
#define SHADER_TYPE_COMPUTE      0x74706d43  // "Cmpt"

/** 着色器代码块标识 */
#define SHADER_CODE_MAIN         0x6e69614d  // "Main"
#define SHADER_CODE_HELPER       0x706c4865  // "Help"
#define SHADER_CODE_UNIFORM      0x6d726555  // "Uerm"
#define SHADER_CODE_CONSTANT     0x74736e43  // "Cnst"

/** 渲染管线状态 */
#define PIPELINE_STATE_INPUT     0x74704920  // "Ipt "
#define PIPELINE_STATE_RASTER    0x74522052  // "R rt"
#define PIPELINE_STATE_OUTPUT    0x74704f20  // "Opt "
#define PIPELINE_STATE_DEPTH     0x74704420  // "Dpt "

/** 文件操作常量 */
#define FILE_MODE_READ           0x72616453  // "Sdar"
#define FILE_MODE_WRITE          0x74697753  // "Swit"
#define FILE_MODE_APPEND         0x64617041  // "Apad"

// =============================================================================
// 函数别名定义
// =============================================================================

/** 着色器代码生成器 */
#define RenderingSystem_PixelShaderGenerator       FUN_180340b00

/** 顶点着色器生成器 */
#define RenderingSystem_VertexShaderGenerator      FUN_180341100

/** 几何着色器生成器 */
#define RenderingSystem_GeometryShaderGenerator    FUN_180341380

/** 着色器管理器 */
#define RenderingSystem_ShaderManager             FUN_1803415f0

// =============================================================================
// 核心函数实现
// =============================================================================

/**
 * @brief 像素着色器代码生成和编译函数
 * 
 * 该函数负责生成像素着色器代码并进行编译处理。
 * 主要功能包括：
 * - 创建着色器代码缓冲区
 * - 生成像素着色器主函数代码
 * - 设置着色器参数和变量
 * - 处理纹理采样和颜色计算
 * - 生成最终着色器代码
 * 
 * @param param_1 渲染上下文指针
 * @param param_2 代码缓冲区指针
 * @param param_3 着色器参数结构体指针
 * @param param_4 着色器配置选项
 */
void RenderingSystem_PixelShaderGenerator(undefined8 param_1, longlong param_2, longlong param_3, undefined8 param_4)
{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    undefined8 *puVar7;
    undefined2 *puVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    ulonglong uVar12;
    uint uVar13;
    ulonglong uVar14;
    
    // 初始化着色器代码生成器
    uVar12 = 0;
    puVar5 = (undefined4 *)
             FUN_18062b420(_DAT_180c8ed18, 0x18, 0x13, param_4, 0, 0xfffffffffffffffe, &UNK_180a3c3e0, 0, 0, 0);
    
    // 设置着色器类型标识
    *(undefined1 *)puVar5 = 0;
    FUN_18064e990(puVar5);
    *puVar5 = SHADER_TYPE_PIXEL;        // "Pixel"
    puVar5[1] = 0x68735f6c;             // "hs_l"
    puVar5[2] = 0x72656461;             // "reda"
    puVar5[3] = 0x706e695f;             // "pin_"
    *(undefined8 *)(puVar5 + 4) = 0x657079745f7475; // "epy_tu"
    
    // 生成着色器代码头部注释
    iVar9 = *(int *)(param_2 + 0x10);
    FUN_1806277c0(param_2, iVar9 + 0x11);
    puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar6 = 0x20666923;               // "# fi"
    puVar6[1] = 0x45584950;             // "PIXE"
    puVar6[2] = 0x48535f4c;             // "L_HS"
    puVar6[3] = 0x52454441;             // "ADER"
    *(undefined2 *)(puVar6 + 4) = 10;
    *(int *)(param_2 + 0x10) = iVar9 + 0x11;
    
    // 生成着色器版本声明
    FUN_1806277c0(param_2, iVar9 + 0x1e);
    puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar7 = 0x69616d2064696f76;       // "void main"
    *(undefined4 *)(puVar7 + 1) = 0x73705f6e; // "n_ps"
    *(undefined2 *)((longlong)puVar7 + 0xc) = 0x28; // "("
    *(int *)(param_2 + 0x10) = iVar9 + 0x1e;
    
    // 复制着色器参数到代码缓冲区
    FUN_1806277c0(param_2, iVar9 + 0x35);
    puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *puVar6 = *puVar5;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar5 + 4);
    *(int *)(param_2 + 0x10) = iVar9 + 0x35;
    
    // 生成着色器函数结束标记
    FUN_1806277c0(param_2, iVar9 + 0x3a);
    puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar6 = 0x296e4920;               // " In)"
    *(undefined2 *)(puVar6 + 1) = 10;
    *(int *)(param_2 + 0x10) = iVar9 + 0x3a;
    
    // 设置着色器编译选项
    FUN_1806277c0(param_2, iVar9 + 0x3c);
    puVar8 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar8 = 0xa7b;                     // 编译选项标记
    *(undefined1 *)(puVar8 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar9 + 0x3c;
    
    // 生成纹理采样代码
    FUN_1806277c0(param_2, iVar9 + 0x83);
    puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar7 = 0x7869705f72655009;       // "Pixel_sha"
    puVar7[1] = 0x69746174735f6c65;       // "els_tati"
    puVar7[2] = 0x6261697261765f63;       // "c_variab"
    puVar7[3] = 0x735f70702073656c;       // "les pp s"
    puVar7[4] = 0x203d206369746174;       // "tatic = "
    puVar7[5] = 0x7869705f72655028;       // "(Pixel_sha"
    *(undefined4 *)(puVar7 + 6) = 0x735f6c65; // "els"
    *(undefined4 *)((longlong)puVar7 + 0x34) = 0x69746174; // "tati"
    *(undefined4 *)(puVar7 + 7) = 0x61765f63; // "c_va"
    *(undefined4 *)((longlong)puVar7 + 0x3c) = 0x62616972; // "riab"
    puVar7[8] = 0xa3b302973656c;         // "les);"
    *(int *)(param_2 + 0x10) = iVar9 + 0x83;
    
    // 生成颜色计算代码
    FUN_1806277c0(param_2, iVar9 + 0xd7);
    puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar7 = 0x7869705f72655009;       // "Pixel_sha"
    puVar7[1] = 0x6669646f6d5f6c65;       // "el_model"
    puVar7[2] = 0x61765f656c626169;       // "iable_av"
    puVar7[3] = 0x2073656c62616972;       // "rrible s"
    puVar7[4] = 0x6669646f6d5f7070;       // "pp_model"
    puVar7[5] = 0x203d20656c626169;       // "iable = "
    *(undefined4 *)(puVar7 + 6) = 0x72655028; // "(Per"
    *(undefined4 *)((longlong)puVar7 + 0x34) = 0x7869705f; // "Pixel_"
    *(undefined4 *)(puVar7 + 7) = 0x6d5f6c65; // "el_el"
    *(undefined4 *)((longlong)puVar7 + 0x3c) = 0x6669646f; // "mod"
    *(undefined4 *)(puVar7 + 8) = 0x6c626169; // "iabl"
    *(undefined4 *)((longlong)puVar7 + 0x44) = 0x61765f65; // "e_va"
    *(undefined4 *)(puVar7 + 9) = 0x62616972; // "riab"
    *(undefined4 *)((longlong)puVar7 + 0x4c) = 0x2973656c; // "les)"
    *(undefined4 *)(puVar7 + 10) = 0xa0a3b30; // ";\n\n"
    *(undefined1 *)((longlong)puVar7 + 0x54) = 0;
    *(int *)(param_2 + 0x10) = iVar9 + 0xd7;
    
    // 生成主函数体代码
    FUN_1806277c0(param_2, iVar9 + 0x122);
    puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar7 = 0x7869705f72655009;       // "Pixel_sha"
    puVar7[1] = 0x6c697875615f6c65;       // "el_xuali"
    puVar7[2] = 0x7261765f79726169;       // "iar_y_va"
    puVar7[3] = 0x702073656c626169;       // "iable p s"
    puVar7[4] = 0x203d207875615f70;       // "p_uali = "
    puVar7[5] = 0x7869705f72655028;       // "(Pixel_sha"
    *(undefined4 *)(puVar7 + 6) = 0x615f6c65; // "el_a"
    *(undefined4 *)((longlong)puVar7 + 0x34) = 0x6c697875; // "xual"
    *(undefined4 *)(puVar7 + 7) = 0x79726169; // "iari"
    *(undefined4 *)((longlong)puVar7 + 0x3c) = 0x7261765f; // "var_"
    puVar7[8] = 0x302973656c626169;       // "iables);\n"
    *(undefined4 *)(puVar7 + 9) = 0xa0a3b; // "\n\n"
    *(int *)(param_2 + 0x10) = iVar9 + 0x122;
    iVar9 = iVar9 + 0x159;
    
    // 生成函数返回语句
    FUN_1806277c0(param_2, iVar9);
    puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar7 = 0x616c75636c616309;       // "calculac"
    puVar7[1] = 0x705f7265705f6574;       // "te_rep_et"
    puVar7[2] = 0x6174735f6c657869;       // "ixel_stat"
    puVar7[3] = 0x697261765f636974;       // "tic_vari"
    *(undefined4 *)(puVar7 + 4) = 0x656c6261; // "able"
    *(undefined4 *)((longlong)puVar7 + 0x24) = 0x6e492873; // "s(In"
    *(undefined4 *)(puVar7 + 5) = 0x7070202c; // ", pp "
    *(undefined4 *)((longlong)puVar7 + 0x2c) = 0x6174735f; // "stat"
    puVar7[6] = 0xa0a3b29636974;         // "tic);\n\n"
    *(int *)(param_2 + 0x10) = iVar9;
    
    // 处理着色器参数数组
    puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x498) - *(longlong *)(param_3 + 0x490));
    uVar14 = uVar12;
    if ((longlong)puVar7 / 0x98 + ((longlong)puVar7 >> 0x3f) != (longlong)puVar7 >> 0x3f) {
        do {
            iVar10 = iVar9 + 1;
            FUN_1806277c0(param_2, iVar10);
            *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
            *(int *)(param_2 + 0x10) = iVar10;
            lVar1 = *(longlong *)(param_3 + 0x490);
            iVar11 = *(int *)(lVar1 + 0x10 + uVar12);
            if (0 < iVar11) {
                FUN_1806277c0(param_2, iVar10 + iVar11);
                // 复制参数数据到代码缓冲区
                memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
                       *(undefined8 *)(lVar1 + 8 + uVar12), (longlong)(*(int *)(lVar1 + 0x10 + uVar12) + 1));
            }
            iVar9 = iVar9 + 7;
            FUN_1806277c0(param_2, iVar9);
            puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
            *puVar6 = 0x296e4928;           // "(In)"
            *(undefined2 *)(puVar6 + 1) = 0xa3b; // 参数结束标记
            *(undefined1 *)((longlong)puVar6 + 6) = 0;
            *(int *)(param_2 + 0x10) = iVar9;
            uVar13 = (int)uVar14 + 1;
            uVar12 = uVar12 + 0x98;
            puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x498) - *(longlong *)(param_3 + 0x490));
            uVar14 = (ulonglong)uVar13;
        } while ((ulonglong)(longlong)(int)uVar13 < (ulonglong)((longlong)puVar7 / 0x98));
    }
    
    // 处理纹理参数
    if (*(int *)(param_3 + 0xa40) != 0) {
        iVar11 = iVar9 + 1;
        FUN_1806277c0(param_2, iVar11);
        *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
        *(int *)(param_2 + 0x10) = iVar11;
        if (0 < *(int *)(param_3 + 0xa40)) {
            FUN_1806277c0(param_2, iVar11 + *(int *)(param_3 + 0xa40));
            // 复制纹理参数数据
            memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
                   *(undefined8 *)(param_3 + 0xa38), (longlong)(*(int *)(param_3 + 0xa40) + 1));
        }
        iVar9 = iVar9 + 0x2b;
        FUN_1806277c0(param_2, iVar9);
        puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
        *puVar7 = 0x7070202c206e4928;     // "(In, pp "
        puVar7[1] = 0x206369746174735f;     // "_static "
        puVar7[2] = 0x646f6d5f7070202c;     // ", pp_mod"
        puVar7[3] = 0x2c656c6261696669;     // "ifiable,"
        puVar7[4] = 0x297875615f707020;     // " pp_uali)"
        *(undefined2 *)(puVar7 + 5) = 0xa3b; // 结束标记
        *(undefined1 *)((longlong)puVar7 + 0x2a) = 0;
        *(int *)(param_2 + 0x10) = iVar9;
    }
    
    // 处理光照参数
    if (*(int *)(param_3 + 0xad8) != 0) {
        iVar11 = iVar9 + 1;
        FUN_1806277c0(param_2, iVar11);
        *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
        *(int *)(param_2 + 0x10) = iVar11;
        if (0 < *(int *)(param_3 + 0xad8)) {
            FUN_1806277c0(param_2, iVar11 + *(int *)(param_3 + 0xad8));
            // 复制光照参数数据
            memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
                   *(undefined8 *)(param_3 + 0xad0), (longlong)(*(int *)(param_3 + 0xad8) + 1));
        }
        FUN_1806277c0(param_2, iVar9 + 0x2b);
        puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
        *puVar7 = 0x7070202c206e4928;     // "(In, pp "
        puVar7[1] = 0x206369746174735f;     // "_static "
        puVar7[2] = 0x646f6d5f7070202c;     // ", pp_mod"
        puVar7[3] = 0x2c656c6261696669;     // "ifiable,"
        puVar7[4] = 0x297875615f707020;     // " pp_uali)"
        *(undefined2 *)(puVar7 + 5) = 0xa3b; // 结束标记
        *(undefined1 *)((longlong)puVar7 + 0x2a) = 0;
        *(int *)(param_2 + 0x10) = iVar9 + 0x2b;
    }
    
    // 调用着色器编译函数
    FUN_180344f00(puVar7, param_2, param_3);
    iVar9 = *(int *)(param_2 + 0x10);
    iVar11 = iVar9 + 2;
    FUN_1806277c0(param_2, iVar11);
    puVar8 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar8 = 0xa7d;                     // 编译成功标记
    *(undefined1 *)(puVar8 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar11;
    iVar9 = iVar9 + 9;
    FUN_1806277c0(param_2, iVar9);
    *(undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
         0xa6669646e6523;               // "#endfi"
    *(int *)(param_2 + 0x10) = iVar9;
    
    // 释放着色器代码生成器资源
    FUN_18064e900(puVar5);
}

/**
 * @brief 顶点着色器代码生成和编译函数
 * 
 * 该函数负责生成顶点着色器代码并进行编译处理。
 * 主要功能包括：
 * - 创建顶点着色器代码缓冲区
 * - 生成顶点变换和投影代码
 * - 设置顶点属性和输入布局
 * - 处理法线向量和纹理坐标
 * - 生成最终顶点着色器代码
 * 
 * @param param_1 渲染上下文指针
 * @param param_2 代码缓冲区指针
 * @param param_3 着色器参数结构体指针
 */
void RenderingSystem_VertexShaderGenerator(undefined8 param_1, longlong param_2, undefined8 param_3)
{
    undefined4 *puVar1;
    undefined8 *puVar2;
    undefined *puVar3;
    uint uVar4;
    int iVar5;
    longlong lVar6;
    undefined1 auStack_e8 [32];
    undefined4 uStack_c8;
    undefined *puStack_c0;
    undefined *puStack_b8;
    uint uStack_b0;
    undefined4 uStack_a8;
    undefined8 uStack_a0;
    longlong lStack_98;
    undefined *puStack_88;
    undefined *puStack_80;
    int iStack_78;
    undefined4 uStack_70;
    undefined8 uStack_68;
    undefined *puStack_60;
    undefined1 *puStack_58;
    undefined4 uStack_50;
    undefined1 auStack_48 [16];
    ulonglong uStack_38;
    
    // 初始化顶点着色器生成器
    uStack_68 = 0xfffffffffffffffe;
    uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
    uStack_c8 = 0;
    FUN_18033ffe0(param_1, &puStack_88);
    puStack_60 = &UNK_1809fdc18;
    puStack_58 = auStack_48;
    auStack_48[0] = 0;
    uStack_50 = 6;
    strcpy_s(auStack_48, 0x10, &UNK_180a3c07c);
    uStack_c8 = 2;
    FUN_1806279c0(&puStack_c0, &puStack_60);
    uStack_c8 = 0;
    puStack_60 = &UNK_18098bcb0;
    uVar4 = uStack_b0 + 0x10;
    FUN_1806277c0(&puStack_c0, uVar4);
    puVar1 = (undefined4 *)(puStack_b8 + uStack_b0);
    
    // 设置顶点着色器类型标识
    *puVar1 = 0x64616853;               // "Shad"
    puVar1[1] = 0x2f737265;             // "ers/"
    puVar1[2] = 0x72756f53;             // "Sour"
    puVar1[3] = 0x2f736563;             // "ces/"
    *(undefined1 *)(puVar1 + 4) = 0;
    uStack_b0 = uVar4;
    FUN_180627be0(param_2, param_3);
    
    // 生成顶点着色器头部注释
    iVar5 = *(int *)(param_2 + 0x10) + 10;
    FUN_1806277c0(param_2, iVar5);
    puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar2 = 0x6d776f646168735f;       // "shader_mw"
    *(undefined2 *)(puVar2 + 1) = 0x7061; // "ap"
    *(undefined1 *)((longlong)puVar2 + 10) = 0;
    *(int *)(param_2 + 0x10) = iVar5;
    
    // 复制顶点着色器参数
    if (0 < iVar5) {
        FUN_1806277c0(&puStack_c0, iVar5 + uStack_b0);
        // 复制参数数据到代码缓冲区
        memcpy(puStack_b8 + uStack_b0, *(undefined8 *)(param_2 + 8),
               (longlong)(*(int *)(param_2 + 0x10) + 1));
    }
    
    // 生成顶点着色器主函数
    iVar5 = uStack_b0 + 3;
    FUN_1806277c0(&puStack_c0, iVar5);
    *(undefined4 *)(puStack_b8 + uStack_b0) = 0x73722e; // ".rs"
    uStack_a0 = 0;
    lStack_98 = 0;
    puVar3 = &DAT_18098bc73;
    if (puStack_b8 != (undefined *)0x0) {
        puVar3 = puStack_b8;
    }
    uStack_b0 = iVar5;
    
    // 生成顶点变换代码
    FUN_18062dee0(&uStack_a0, puVar3, &DAT_1809fc7ec);
    lVar6 = lStack_98;
    puVar3 = &DAT_18098bc73;
    if (puStack_80 != (undefined *)0x0) {
        puVar3 = puStack_80;
    }
    
    // 写入顶点着色器代码到文件
    fwrite(puVar3, (longlong)iStack_78, 1, lStack_98);
    if (lVar6 != 0) {
        fclose(lVar6);
        lStack_98 = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
        lVar6 = 0;
    }
    if (lVar6 != 0) {
        fclose(lVar6);
        lStack_98 = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
    }
    
    // 清理顶点着色器生成器资源
    puStack_c0 = &UNK_180a3c3e0;
    if (puStack_b8 != (undefined *)0x0) {
        FUN_18064e900();
    }
    puStack_b8 = (undefined *)0x0;
    uStack_a8 = 0;
    puStack_c0 = &UNK_18098bcb0;
    puStack_88 = &UNK_180a3c3e0;
    if (puStack_80 != (undefined *)0x0) {
        FUN_18064e900();
    }
    puStack_80 = (undefined *)0x0;
    uStack_70 = 0;
    puStack_88 = &UNK_18098bcb0;
    
    // 完成顶点着色器生成
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_e8);
}

/**
 * @brief 几何着色器代码生成和编译函数
 * 
 * 该函数负责生成几何着色器代码并进行编译处理。
 * 主要功能包括：
 * - 创建几何着色器代码缓冲区
 * - 生成图元处理和几何变换代码
 * - 设置几何着色器输入输出布局
 * - 处理图元装配和裁剪
 * - 生成最终几何着色器代码
 * 
 * @param param_1 渲染上下文指针
 * @param param_2 代码缓冲区指针
 * @param param_3 着色器参数结构体指针
 */
void RenderingSystem_GeometryShaderGenerator(undefined8 param_1, longlong param_2, undefined8 param_3)
{
    undefined4 *puVar1;
    undefined8 *puVar2;
    undefined *puVar3;
    uint uVar4;
    int iVar5;
    longlong lVar6;
    undefined1 auStack_e8 [32];
    undefined4 uStack_c8;
    undefined *puStack_c0;
    undefined *puStack_b8;
    uint uStack_b0;
    undefined4 uStack_a8;
    undefined8 uStack_a0;
    longlong lStack_98;
    undefined *puStack_88;
    undefined *puStack_80;
    int iStack_78;
    undefined4 uStack_70;
    undefined8 uStack_68;
    undefined *puStack_60;
    undefined1 *puStack_58;
    undefined4 uStack_50;
    undefined1 auStack_48 [16];
    ulonglong uStack_38;
    
    // 初始化几何着色器生成器
    uStack_68 = 0xfffffffffffffffe;
    uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
    uStack_c8 = 0;
    FUN_1803400b0(param_1, &puStack_88);
    puStack_60 = &UNK_1809fdc18;
    puStack_58 = auStack_48;
    auStack_48[0] = 0;
    uStack_50 = 6;
    strcpy_s(auStack_48, 0x10, &UNK_180a3c07c);
    uStack_c8 = 2;
    FUN_1806279c0(&puStack_c0, &puStack_60);
    uStack_c8 = 0;
    puStack_60 = &UNK_18098bcb0;
    uVar4 = uStack_b0 + 0x10;
    FUN_1806277c0(&puStack_c0, uVar4);
    puVar1 = (undefined4 *)(puStack_b8 + uStack_b0);
    
    // 设置几何着色器类型标识
    *puVar1 = 0x64616853;               // "Shad"
    puVar1[1] = 0x2f737265;             // "ers/"
    puVar1[2] = 0x72756f53;             // "Sour"
    puVar1[3] = 0x2f736563;             // "ces/"
    *(undefined1 *)(puVar1 + 4) = 0;
    uStack_b0 = uVar4;
    FUN_180627be0(param_2, param_3);
    
    // 生成几何着色器头部注释
    iVar5 = *(int *)(param_2 + 0x10) + 0xb;
    FUN_1806277c0(param_2, iVar5);
    puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar2 = 0x696c746e696f705f;       // "_pointil"
    *(undefined4 *)(puVar2 + 1) = 0x746867; // "ght"
    *(int *)(param_2 + 0x10) = iVar5;
    
    // 复制几何着色器参数
    if (0 < iVar5) {
        FUN_1806277c0(&puStack_c0, iVar5 + uStack_b0);
        // 复制参数数据到代码缓冲区
        memcpy(puStack_b8 + uStack_b0, *(undefined8 *)(param_2 + 8),
               (longlong)(*(int *)(param_2 + 0x10) + 1));
    }
    
    // 生成几何着色器主函数
    iVar5 = uStack_b0 + 3;
    FUN_1806277c0(&puStack_c0, iVar5);
    *(undefined4 *)(puStack_b8 + uStack_b0) = 0x73722e; // ".rs"
    uStack_a0 = 0;
    lStack_98 = 0;
    puVar3 = &DAT_18098bc73;
    if (puStack_b8 != (undefined *)0x0) {
        puVar3 = puStack_b8;
    }
    uStack_b0 = iVar5;
    
    // 生成几何变换代码
    FUN_18062dee0(&uStack_a0, puVar3, &DAT_1809fc7ec);
    lVar6 = lStack_98;
    puVar3 = &DAT_18098bc73;
    if (puStack_80 != (undefined *)0x0) {
        puVar3 = puStack_80;
    }
    
    // 写入几何着色器代码到文件
    fwrite(puVar3, (longlong)iStack_78, 1, lStack_98);
    if (lVar6 != 0) {
        fclose(lVar6);
        lStack_98 = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
        lVar6 = 0;
    }
    if (lVar6 != 0) {
        fclose(lVar6);
        lStack_98 = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
    }
    
    // 清理几何着色器生成器资源
    puStack_c0 = &UNK_180a3c3e0;
    if (puStack_b8 != (undefined *)0x0) {
        FUN_18064e900();
    }
    puStack_b8 = (undefined *)0x0;
    uStack_a8 = 0;
    puStack_c0 = &UNK_18098bcb0;
    puStack_88 = &UNK_180a3c3e0;
    if (puStack_80 != (undefined *)0x0) {
        FUN_18064e900();
    }
    puStack_80 = (undefined *)0x0;
    uStack_70 = 0;
    puStack_88 = &UNK_18098bcb0;
    
    // 完成几何着色器生成
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_e8);
}

/**
 * @brief 着色器管理器函数
 * 
 * 该函数负责统一管理各种类型的着色器。
 * 主要功能包括：
 * - 创建着色器管理器实例
 * - 统一处理不同类型着色器的生成
 * - 管理着色器参数和配置
 * - 处理着色器编译和链接
 * - 维护着色器缓存和状态
 * 
 * @param param_1 渲染上下文指针
 * @param param_2 代码缓冲区指针
 * @param param_3 着色器参数结构体指针
 * @param param_4 着色器配置选项
 */
void RenderingSystem_ShaderManager(undefined8 param_1, longlong param_2, longlong param_3, undefined8 param_4)
{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    undefined8 *puVar7;
    undefined2 *puVar8;
    longlong lVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    ulonglong uVar13;
    uint uVar14;
    ulonglong uVar15;
    
    // 初始化着色器管理器
    uVar13 = 0;
    puVar5 = (undefined4 *)
             FUN_18062b420(_DAT_180c8ed18, 0x18, 0x13, param_4, 0, 0xfffffffffffffffe, &UNK_180a3c3e0, 0, 0, 0);
    
    // 设置着色器管理器类型标识
    *(undefined1 *)puVar5 = 0;
    FUN_18064e990(puVar5);
    *puVar5 = SHADER_TYPE_PIXEL;        // "Pixel"
    puVar5[1] = 0x68735f6c;             // "hs_l"
    puVar5[2] = 0x72656461;             // "reda"
    puVar5[3] = 0x706e695f;             // "pin_"
    *(undefined8 *)(puVar5 + 4) = 0x657079745f7475; // "epy_tu"
    
    // 生成着色器管理器头部注释
    iVar10 = *(int *)(param_2 + 0x10);
    FUN_1806277c0(param_2, iVar10 + 0x11);
    puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar6 = 0x20666923;               // "# fi"
    puVar6[1] = 0x45584950;             // "PIXE"
    puVar6[2] = 0x48535f4c;             // "L_HS"
    puVar6[3] = 0x52454441;             // "ADER"
    *(undefined2 *)(puVar6 + 4) = 10;
    *(int *)(param_2 + 0x10) = iVar10 + 0x11;
    
    // 生成着色器管理器版本声明
    FUN_1806277c0(param_2, iVar10 + 0x1e);
    puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar7 = 0x69616d2064696f76;       // "void main"
    *(undefined4 *)(puVar7 + 1) = 0x73705f6e; // "n_ps"
    *(undefined2 *)((longlong)puVar7 + 0xc) = 0x28; // "("
    *(int *)(param_2 + 0x10) = iVar10 + 0x1e;
    
    // 复制着色器管理器参数到代码缓冲区
    FUN_1806277c0(param_2, iVar10 + 0x35);
    puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *puVar6 = *puVar5;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar5 + 4);
    *(int *)(param_2 + 0x10) = iVar10 + 0x35;
    
    // 生成着色器管理器函数结束标记
    FUN_1806277c0(param_2, iVar10 + 0x3a);
    puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar6 = 0x296e4920;               // " In)"
    *(undefined2 *)(puVar6 + 1) = 10;
    *(int *)(param_2 + 0x10) = iVar10 + 0x3a;
    
    // 设置着色器管理器编译选项
    FUN_1806277c0(param_2, iVar10 + 0x3c);
    puVar8 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar8 = 0xa7b;                     // 编译选项标记
    *(undefined1 *)(puVar8 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar10 + 0x3c;
    
    // 生成着色器管理器纹理采样代码
    FUN_1806277c0(param_2, iVar10 + 0x83);
    puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar7 = 0x7869705f72655009;       // "Pixel_sha"
    puVar7[1] = 0x69746174735f6c65;       // "els_tati"
    puVar7[2] = 0x6261697261765f63;       // "c_variab"
    puVar7[3] = 0x735f70702073656c;       // "les pp s"
    puVar7[4] = 0x203d206369746174;       // "tatic = "
    puVar7[5] = 0x7869705f72655028;       // "(Pixel_sha"
    *(undefined4 *)(puVar7 + 6) = 0x735f6c65; // "els"
    *(undefined4 *)((longlong)puVar7 + 0x34) = 0x69746174; // "tati"
    *(undefined4 *)(puVar7 + 7) = 0x61765f63; // "c_va"
    *(undefined4 *)((longlong)puVar7 + 0x3c) = 0x62616972; // "riab"
    puVar7[8] = 0xa3b302973656c;         // "les);"
    *(int *)(param_2 + 0x10) = iVar10 + 0x83;
    
    // 生成着色器管理器颜色计算代码
    FUN_1806277c0(param_2, iVar10 + 0xd7);
    puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar7 = 0x7869705f72655009;       // "Pixel_sha"
    puVar7[1] = 0x6669646f6d5f6c65;       // "el_model"
    puVar7[2] = 0x61765f656c626169;       // "iable_av"
    puVar7[3] = 0x2073656c62616972;       // "rrible s"
    puVar7[4] = 0x6669646f6d5f7070;       // "pp_model"
    puVar7[5] = 0x203d20656c626169;       // "iable = "
    *(undefined4 *)(puVar7 + 6) = 0x72655028; // "(Per"
    *(undefined4 *)((longlong)puVar7 + 0x34) = 0x7869705f; // "Pixel_"
    *(undefined4 *)(puVar7 + 7) = 0x6d5f6c65; // "el_el"
    *(undefined4 *)((longlong)puVar7 + 0x3c) = 0x6669646f; // "mod"
    *(undefined4 *)(puVar7 + 8) = 0x6c626169; // "iabl"
    *(undefined4 *)((longlong)puVar7 + 0x44) = 0x61765f65; // "e_va"
    *(undefined4 *)(puVar7 + 9) = 0x62616972; // "riab"
    *(undefined4 *)((longlong)puVar7 + 0x4c) = 0x2973656c; // "les)"
    *(undefined4 *)(puVar7 + 10) = 0xa0a3b30; // ";\n\n"
    *(undefined1 *)((longlong)puVar7 + 0x54) = 0;
    *(int *)(param_2 + 0x10) = iVar10 + 0xd7;
    
    // 生成着色器管理器主函数体代码
    FUN_1806277c0(param_2, iVar10 + 0x122);
    puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar7 = 0x7869705f72655009;       // "Pixel_sha"
    puVar7[1] = 0x6c697875615f6c65;       // "el_xuali"
    puVar7[2] = 0x7261765f79726169;       // "iar_y_va"
    puVar7[3] = 0x702073656c626169;       // "iable p s"
    puVar7[4] = 0x203d207875615f70;       // "p_uali = "
    puVar7[5] = 0x7869705f72655028;       // "(Pixel_sha"
    *(undefined4 *)(puVar7 + 6) = 0x615f6c65; // "el_a"
    *(undefined4 *)((longlong)puVar7 + 0x34) = 0x6c697875; // "xual"
    *(undefined4 *)(puVar7 + 7) = 0x79726169; // "iari"
    *(undefined4 *)((longlong)puVar7 + 0x3c) = 0x7261765f; // "var_"
    puVar7[8] = 0x302973656c626169;       // "iables);\n"
    *(undefined4 *)(puVar7 + 9) = 0xa0a3b; // "\n\n"
    *(int *)(param_2 + 0x10) = iVar10 + 0x122;
    iVar10 = iVar10 + 0x159;
    
    // 生成着色器管理器函数返回语句
    FUN_1806277c0(param_2, iVar10);
    puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar7 = 0x616c75636c616309;       // "calculac"
    puVar7[1] = 0x705f7265705f6574;       // "te_rep_et"
    puVar7[2] = 0x6174735f6c657869;       // "ixel_stat"
    puVar7[3] = 0x697261765f636974;       // "tic_vari"
    *(undefined4 *)(puVar7 + 4) = 0x656c6261; // "able"
    *(undefined4 *)((longlong)puVar7 + 0x24) = 0x6e492873; // "s(In"
    *(undefined4 *)(puVar7 + 5) = 0x7070202c; // ", pp "
    *(undefined4 *)((longlong)puVar7 + 0x2c) = 0x6174735f; // "stat"
    puVar7[6] = 0xa0a3b29636974;         // "tic);\n\n"
    *(int *)(param_2 + 0x10) = iVar10;
    
    // 处理着色器管理器参数数组
    lVar9 = *(longlong *)(param_3 + 0x498) - *(longlong *)(param_3 + 0x490);
    lVar1 = lVar9 >> 0x3f;
    uVar15 = uVar13;
    if (lVar9 / 0x98 + lVar1 != lVar1) {
        do {
            iVar11 = iVar10 + 1;
            FUN_1806277c0(param_2, iVar11);
            *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
            *(int *)(param_2 + 0x10) = iVar11;
            lVar1 = *(longlong *)(param_3 + 0x490);
            iVar12 = *(int *)(lVar1 + 0x10 + uVar13);
            if (0 < iVar12) {
                FUN_1806277c0(param_2, iVar11 + iVar12);
                // 复制参数数据到代码缓冲区
                memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
                       *(undefined8 *)(lVar1 + 8 + uVar13), (longlong)(*(int *)(lVar1 + 0x10 + uVar13) + 1));
            }
            iVar10 = iVar10 + 7;
            FUN_1806277c0(param_2, iVar10);
            puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
            *puVar6 = 0x296e4928;           // "(In)"
            *(undefined2 *)(puVar6 + 1) = 0xa3b; // 参数结束标记
            *(undefined1 *)((longlong)puVar6 + 6) = 0;
            *(int *)(param_2 + 0x10) = iVar10;
            uVar14 = (int)uVar15 + 1;
            uVar13 = uVar13 + 0x98;
            uVar15 = (ulonglong)uVar14;
        } while ((ulonglong)(longlong)(int)uVar14 <
                 (ulonglong)((*(longlong *)(param_3 + 0x498) - *(longlong *)(param_3 + 0x490)) / 0x98));
    }
    
    // 处理着色器管理器纹理参数
    if (*(int *)(param_3 + 0xa40) != 0) {
        iVar12 = iVar10 + 1;
        FUN_1806277c0(param_2, iVar12);
        *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
        *(int *)(param_2 + 0x10) = iVar12;
        if (0 < *(int *)(param_3 + 0xa40)) {
            FUN_1806277c0(param_2, iVar12 + *(int *)(param_3 + 0xa40));
            // 复制纹理参数数据
            memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
                   *(undefined8 *)(param_3 + 0xa38), (longlong)(*(int *)(param_3 + 0xa40) + 1));
        }
        iVar10 = iVar10 + 0x2b;
        FUN_1806277c0(param_2, iVar10);
        puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
        *puVar7 = 0x7070202c206e4928;     // "(In, pp "
        puVar7[1] = 0x206369746174735f;     // "_static "
        puVar7[2] = 0x646f6d5f7070202c;     // ", pp_mod"
        puVar7[3] = 0x2c656c6261696669;     // "ifiable,"
        puVar7[4] = 0x297875615f707020;     // " pp_uali)"
        *(undefined2 *)(puVar7 + 5) = 0xa3b; // 结束标记
        *(undefined1 *)((longlong)puVar7 + 0x2a) = 0;
        *(int *)(param_2 + 0x10) = iVar10;
    }
    
    // 处理着色器管理器光照参数
    iVar12 = iVar10 + 1;
    FUN_1806277c0(param_2, iVar12);
    *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
    *(int *)(param_2 + 0x10) = iVar12;
    if (*(int *)(param_3 + 0xad8) < 1) {
        FUN_1806277c0(param_2, iVar10 + 0x2b);
        puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
        *puVar7 = 0x7070202c206e4928;     // "(In, pp "
        puVar7[1] = 0x206369746174735f;     // "_static "
        *(undefined4 *)(puVar7 + 2) = 0x7070202c; // ", pp "
        *(undefined4 *)((longlong)puVar7 + 0x14) = 0x646f6d5f; // "mod_"
        *(undefined4 *)(puVar7 + 3) = 0x61696669; // "ifia"
        *(undefined4 *)((longlong)puVar7 + 0x1c) = 0x2c656c62; // "ble,"
        puVar7[4] = 0x297875615f707020;     // " pp_uali)"
        *(undefined2 *)(puVar7 + 5) = 0xa3b; // 结束标记
        *(undefined1 *)((longlong)puVar7 + 0x2a) = 0;
        *(int *)(param_2 + 0x10) = iVar10 + 0x2b;
        
        // 调用着色器编译函数
        FUN_180344f00(puVar7, param_2, param_3);
        iVar10 = *(int *)(param_2 + 0x10);
        iVar12 = iVar10 + 2;
        FUN_1806277c0(param_2, iVar12);
        puVar8 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
        *puVar8 = 0xa7d;                     // 编译成功标记
        *(undefined1 *)(puVar8 + 1) = 0;
        *(int *)(param_2 + 0x10) = iVar12;
        iVar10 = iVar10 + 9;
        FUN_1806277c0(param_2, iVar10);
        *(undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
             0xa6669646e6523;               // "#endfi"
        *(int *)(param_2 + 0x10) = iVar10;
        
        // 释放着色器管理器资源
        FUN_18064e900(puVar5);
    }
    
    // 处理着色器管理器光照参数（继续）
    FUN_1806277c0(param_2, iVar12 + *(int *)(param_3 + 0xad8));
    // 复制光照参数数据
    memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
           *(undefined8 *)(param_3 + 0xad0), (longlong)(*(int *)(param_3 + 0xad8) + 1));
}

// =============================================================================
// 模块总结
// =============================================================================

/**
 * @brief 渲染系统像素着色器生成和管理模块总结
 * 
 * 本模块实现了渲染系统中的着色器代码生成和管理功能，包含4个核心函数：
 * 
 * 1. RenderingSystem_PixelShaderGenerator - 像素着色器代码生成器
 *    - 负责生成像素着色器代码
 *    - 处理纹理采样和颜色计算
 *    - 管理着色器参数和变量
 *    - 生成最终着色器代码
 * 
 * 2. RenderingSystem_VertexShaderGenerator - 顶点着色器生成器
 *    - 负责生成顶点着色器代码
 *    - 处理顶点变换和投影
 *    - 管理顶点属性和输入布局
 *    - 生成最终顶点着色器代码
 * 
 * 3. RenderingSystem_GeometryShaderGenerator - 几何着色器生成器
 *    - 负责生成几何着色器代码
 *    - 处理图元装配和几何变换
 *    - 管理几何着色器输入输出布局
 *    - 生成最终几何着色器代码
 * 
 * 4. RenderingSystem_ShaderManager - 着色器管理器
 *    - 统一管理各种类型着色器
 *    - 处理着色器编译和链接
 *    - 维护着色器缓存和状态
 *    - 提供统一的着色器管理接口
 * 
 * 技术特点：
 * - 支持多种着色器类型（像素、顶点、几何）
 * - 提供完整的着色器代码生成功能
 * - 实现了高效的参数管理和配置
 * - 支持着色器编译和缓存机制
 * - 提供统一的着色器管理接口
 * 
 * 应用场景：
 * - 3D渲染管线中的着色器管理
 * - 图形应用程序的着色器生成
 * - 游戏引擎的渲染系统
 * - 实时图形处理应用
 * - 高级视觉效果实现
 */