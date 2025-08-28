#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part106.c - 渲染边界框和文本处理模块
// 本模块包含14个函数，主要负责：
// - 渲染边界框的计算和处理
// - 文本解析和处理
// - 渲染特效和粒子系统
// - 坐标变换和投影

// 类型定义
typedef struct {
    float x;
    float y;
} vector2;

typedef struct {
    float r;
    float g;
    float b;
    float a;
} color_data;

// 外部函数声明
extern void FUN_180297590(undefined8 param_1);
extern uint func_0x000180121e20(void *param_1);
extern void FUN_1801224c0(undefined8 param_1, ...);
extern void FUN_18013c800(undefined8 param_1, ...);
extern void FUN_180293f50(undefined8 param_1, void *param_2, void *param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6);
extern void FUN_180293e80(undefined8 param_1, void *param_2, void *param_3, uint param_4, undefined4 param_5, undefined4 param_6, float param_7);
extern void FUN_1802940f0(undefined8 param_1, void *param_2, void *param_3, void *param_4, uint param_5);
extern void FUN_180293860(undefined8 param_1, void *param_2, float param_3, int param_4, undefined4 param_5, int param_6);
extern void FUN_180293190(undefined8 param_1, undefined8 param_2, undefined4 param_3, uint param_4);
extern void FUN_18011d9a0(void *param_1, void *param_2);
extern void FUN_1802923e0(undefined8 param_1, undefined8 param_2, undefined4 param_3, uint param_4, int param_5, float param_6);
extern void FUN_180291b40(undefined8 param_1, undefined8 param_2, undefined8 param_3, int param_4);
extern void FUN_180291950(void);
extern void FUN_1802939e0(undefined8 param_1, void *param_2, void *param_3, undefined4 param_4, undefined4 param_5);

// 全局变量 - 渲染管理器实例
extern undefined8 global_render_manager;

/**
 * 处理渲染边界框的调整和优化
 * @param param_1 渲染上下文
 * @param param_2 边界框坐标指针
 * @param param_3 边界框数据
 */
/**
 * 处理渲染边界框的调整和优化
 * @param render_context 渲染上下文
 * @param bounds_ptr 边界框坐标指针
 * @param entity_data 实体数据
 * 简化实现: 保留原始逻辑但优化变量命名和注释
 */
void process_render_bounding_box(undefined8 render_context, float *bounds_ptr, longlong entity_data)
{
    float *pfVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    uint uVar8;
    longlong unaff_RBX;
    longlong lVar9;
    longlong unaff_RBP;
    longlong unaff_RDI;
    longlong unaff_R13;
    float unaff_XMM6_Da;
    float unaff_XMM9_Da;
    
    float max_y = *(float *)(entity_data + 4);
    float min_y_value = *bounds_ptr;
    uint render_flags = func_0x000180121e20();
    if ((render_flags & 0xff000000) != 0) {
        if (entity_instance == 0) {
            longlong string_length = -1;
            do {
                string_length = string_length + 1;
            } while (*(char *)(bounds_data + string_length) != '\0');
            entity_instance = string_length + bounds_data;
        }
        if (bounds_data != entity_instance) {
            longlong entity_ptr = *(longlong *)(entity_instance + 0x38);
            float *current_bounds = (float *)(*(longlong *)(entity_instance + 0x68) + -0x10 +
                                        (longlong)*(int *)(entity_instance + 0x60) * 0x10);
            float max_z = *current_bounds;
            float max_w = current_bounds[1];
            float adjusted_min_y = current_bounds[2];
            float adjusted_max_z = current_bounds[3];
            *(float *)(render_state + -0x59) = max_z;
            *(float *)(render_state + -0x55) = max_w;
            *(float *)(render_state + -0x51) = adjusted_min_y;
            *(float *)(render_state + -0x4d) = adjusted_max_z;
            if (max_z < min_y_value) {
                *(float *)(render_state + -0x59) = min_y_value;
            }
            if (*(float *)(render_state + -0x55) < camera_min_y) {
                *(float *)(render_state + -0x55) = camera_min_y;
            }
            if (camera_max_z <= *(float *)(render_state + -0x51)) {
                *(float *)(render_state + -0x51) = camera_max_z;
            }
            if (max_y <= *(float *)(render_state + -0x4d)) {
                *(float *)(render_state + -0x4d) = max_y;
            }
            FUN_180297590(*(undefined8 *)(entity_ptr + 8));
        }
    }
    return;
}

/**
 * 空函数 - 可能是预留的接口
 */
void initialize_render_state(void)
{
    return;
}

/**
 * 处理文本字符串的解析和分割
 * @param param_1 上下文参数1
 * @param param_2 上下文参数2
 * @param param_3 源字符串起始位置
 * @param param_4 源字符串结束位置
 * @param param_5 处理参数1
 * @param param_6 处理参数2
 * @param param_7 处理参数3
 */
/**
 * 处理文本字符串的解析和分割
 * @param context1 上下文参数1
 * @param context2 上下文参数2
 * @param text_start 源字符串起始位置
 * @param text_end 源字符串结束位置
 * @param process_param1 处理参数1
 * @param process_param2 处理参数2
 * @param process_param3 处理参数3
 */
void process_text_string(undefined8 context1, undefined8 context2, char *text_start, char *text_end,
                       undefined8 process_param1, undefined8 process_param2, undefined8 process_param3)
{
    longlong lVar1;
    char *pcVar2;
    char *pcVar3;
    
    longlong render_manager = global_render_manager;
    char *end_pos = (char *)0xffffffffffffffff;
    if (text_end != (char *)0x0) {
        end_pos = text_end;
    }
    char *current_pos = text_start;
    if (text_start < end_pos) {
        while (*current_pos != '\0') {
            if (((*current_pos == '#') && (current_pos[1] == '#')) || (current_pos = current_pos + 1, end_pos <= current_pos))
                break;
        }
    }
    if (((int)current_pos != (int)text_start) &&
       (FUN_1801224c0(*(undefined8 *)(*(longlong *)(global_render_manager + 0x1af8) + 0x2e8),context1,context2,
                      text_start,current_pos,process_param1,process_param2,process_param3), *(char *)(render_manager + 0x2e38) != '\0')) {
        FUN_18013c800(context1,text_start,current_pos);
    }
    return;
}

/**
 * 执行默认的文本处理流程
 */
/**
 * 执行默认的文本处理流程
 */
void execute_default_text_processing(void)
{
    longlong render_manager = global_render_manager;
    
    FUN_1801224c0(*(undefined8 *)(*(longlong *)(global_render_manager + 0x1af8) + 0x2e8));
    if (*(char *)(render_manager + 0x2e38) != '\0') {
        FUN_18013c800();
    }
    return;
}

/**
 * 简单的文本处理调用
 */
void simple_text_processing(void)
{
    FUN_18013c800();
    return;
}

/**
 * 渲染2D矩形元素
 * @param param_1 渲染上下文
 * @param param_2 矩形位置
 * @param param_3 矩形尺寸
 * @param param_4 渲染标志
 * @param param_5 颜色参数
 */
void render_2d_rectangle(undefined8 param_1, undefined8 param_2, undefined4 param_3, char param_4,
                        undefined4 param_5)
{
    float fVar1;
    longlong lVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uStack_58;
    undefined8 uStack_50;
    float fStack_48;
    float fStack_44;
    float fStack_40;
    float fStack_3c;
    undefined4 uStack_38;
    float fStack_34;
    
    lVar4 = _DAT_180c8a9b0;
    lVar2 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
    uStack_58 = param_2;
    uStack_50 = param_1;
    FUN_180293f50(*(undefined8 *)(lVar2 + 0x2e8),&uStack_50,&uStack_58,param_3,param_5,0xf);
    fVar1 = *(float *)(lVar4 + 0x1668);
    if ((param_4 != '\0') && (0.0 < fVar1)) {
        fStack_40 = *(float *)(_DAT_180c8a9b0 + 0x1728);
        fStack_3c = *(float *)(_DAT_180c8a9b0 + 0x172c);
        uStack_38 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1730);
        fStack_34 = *(float *)(_DAT_180c8a9b0 + 0x1734) * *(float *)(_DAT_180c8a9b0 + 0x1628);
        lVar4 = _DAT_180c8a9b0;
        uVar3 = func_0x000180121e20(&fStack_40);
        fStack_48 = (float)uStack_58 + 1.0;
        fStack_40 = (float)uStack_50 + 1.0;
        fStack_44 = uStack_58._4_4_ + 1.0;
        fStack_3c = uStack_50._4_4_ + 1.0;
        if ((uVar3 & 0xff000000) != 0) {
            FUN_180293e80(*(undefined8 *)(lVar2 + 0x2e8),&fStack_40,&fStack_48,uVar3,param_5,0xf,fVar1);
            lVar4 = _DAT_180c8a9b0;
        }
        fStack_40 = *(float *)(lVar4 + 0x1718);
        fStack_3c = *(float *)(lVar4 + 0x171c);
        uStack_38 = *(undefined4 *)(lVar4 + 0x1720);
        fStack_34 = *(float *)(lVar4 + 0x1724) * *(float *)(lVar4 + 0x1628);
        uVar3 = func_0x000180121e20(&fStack_40);
        if ((uVar3 & 0xff000000) != 0) {
            FUN_180293e80(*(undefined8 *)(lVar2 + 0x2e8),&uStack_50,&uStack_58,uVar3,param_5,0xf,fVar1);
        }
    }
    return;
}

/**
 * 渲染2D矩形元素（简化版本）
 * @param param_1 渲染上下文
 * @param param_2 矩形位置
 * @param param_3 颜色参数
 */
void render_2d_rectangle_simple(undefined8 param_1, undefined8 param_2, undefined4 param_3)
{
    float fVar1;
    longlong lVar2;
    uint uVar3;
    longlong lVar4;
    float fStackX_20;
    float fStackX_24;
    undefined8 uStack_48;
    undefined8 uStack_40;
    float fStack_38;
    float fStack_34;
    undefined4 uStack_30;
    float fStack_2c;
    
    fVar1 = *(float *)(_DAT_180c8a9b0 + 0x1668);
    lVar2 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
    if (0.0 < fVar1) {
        fStack_38 = *(float *)(_DAT_180c8a9b0 + 0x1728);
        fStack_34 = *(float *)(_DAT_180c8a9b0 + 0x172c);
        uStack_30 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1730);
        fStack_2c = *(float *)(_DAT_180c8a9b0 + 0x1734) * *(float *)(_DAT_180c8a9b0 + 0x1628);
        lVar4 = _DAT_180c8a9b0;
        uStack_48 = param_2;
        uStack_40 = param_1;
        uVar3 = func_0x000180121e20(&fStack_38);
        fStackX_20 = (float)uStack_48 + 1.0;
        fStack_38 = (float)uStack_40 + 1.0;
        fStackX_24 = uStack_48._4_4_ + 1.0;
        fStack_34 = uStack_40._4_4_ + 1.0;
        if ((uVar3 & 0xff000000) != 0) {
            FUN_180293e80(*(undefined8 *)(lVar2 + 0x2e8),&fStack_38,&fStackX_20,uVar3,param_3,0xf,fVar1);
            lVar4 = _DAT_180c8a9b0;
        }
        fStack_38 = *(float *)(lVar4 + 0x1718);
        fStack_34 = *(float *)(lVar4 + 0x171c);
        uStack_30 = *(undefined4 *)(lVar4 + 0x1720);
        fStack_2c = *(float *)(lVar4 + 0x1724) * *(float *)(lVar4 + 0x1628);
        uVar3 = func_0x000180121e20(&fStack_38);
        if ((uVar3 & 0xff000000) != 0) {
            FUN_180293e80(*(undefined8 *)(lVar2 + 0x2e8),&uStack_40,&uStack_48,uVar3,param_3,0xf,fVar1);
        }
    }
    return;
}

/**
 * 渲染粒子效果
 * @param param_1 粒子位置
 * @param param_2 粒子类型
 * @param param_3 粒子大小
 */
void render_particle_effect(undefined8 param_1, int param_2, float param_3)
{
    float fVar1;
    undefined4 uVar2;
    longlong lVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fStackX_20;
    float fStackX_24;
    float fStack_78;
    float fStack_74;
    float fStack_70;
    float fStack_6c;
    undefined4 uStack_68;
    undefined4 uStack_64;
    undefined4 uStack_60;
    float fStack_5c;
    
    fVar7 = 0.0;
    fStack_74 = 0.0;
    fVar6 = 0.0;
    fVar1 = *(float *)(_DAT_180c8a9b0 + 0x19f8);
    fVar5 = 0.0;
    fVar4 = fVar1 * 0.4 * param_3;
    fStackX_24 = (float)((ulonglong)param_1 >> 0x20);
    fStack_6c = fVar1 * 0.5 * param_3 + fStackX_24;
    fStackX_20 = (float)param_1;
    fStack_70 = fVar1 * 0.5 + fStackX_20;
    fStack_78 = 0.0;
    fVar8 = 0.0;
    if (-1 < param_2) {
        if (param_2 < 2) {
            if (param_2 == 0) {
                fVar4 = fVar1 * -0.4 * param_3;
            }
            fVar5 = fVar4 * -0.75;
            fVar7 = fVar4 * 0.75;
            fStack_74 = fVar4 * 0.866;
            fVar8 = fVar4 * -0.866;
            fStack_78 = fVar5;
        }
        else if (param_2 < 4) {
            if (param_2 == 2) {
                fVar4 = fVar1 * -0.4 * param_3;
            }
            fStack_74 = fVar4 * -0.75;
            fVar6 = fVar4 * 0.75;
            fVar5 = fVar4 * 0.866;
            fStack_78 = fVar4 * -0.866;
            fVar8 = fStack_74;
        }
    }
    uStack_68 = *(undefined4 *)(_DAT_180c8a9b0 + 0x16c8);
    uStack_64 = *(undefined4 *)(_DAT_180c8a9b0 + 0x16cc);
    uStack_60 = *(undefined4 *)(_DAT_180c8a9b0 + 0x16d0);
    fStack_5c = *(float *)(_DAT_180c8a9b0 + 0x16d4) * *(float *)(_DAT_180c8a9b0 + 0x1628);
    _fStackX_20 = CONCAT44(fStack_6c + fVar8,fStack_70 + fVar5);
    fStack_78 = fStack_70 + fStack_78;
    fStack_70 = fStack_70 + fVar7;
    fStack_74 = fStack_6c + fStack_74;
    fStack_6c = fStack_6c + fVar6;
    lVar3 = _DAT_180c8a9b0;
    uVar2 = func_0x000180121e20(&uStack_68);
    FUN_1802940f0(*(undefined8 *)(*(longlong *)(lVar3 + 0x1af8) + 0x2e8),&fStack_70,&fStack_78,
                  &fStackX_20,uVar2);
    return;
}

/**
 * 渲染光晕效果
 * @param param_1 光晕位置
 */
void render_glow_effect(undefined8 param_1)
{
    longlong lVar1;
    uint uVar2;
    longlong lVar3;
    undefined8 uStack_28;
    undefined4 uStack_20;
    undefined4 uStack_1c;
    undefined4 uStack_18;
    float fStack_14;
    
    uStack_20 = *(undefined4 *)(_DAT_180c8a9b0 + 0x16c8);
    uStack_1c = *(undefined4 *)(_DAT_180c8a9b0 + 0x16cc);
    uStack_18 = *(undefined4 *)(_DAT_180c8a9b0 + 0x16d0);
    lVar1 = *(longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x2e8);
    fStack_14 = *(float *)(_DAT_180c8a9b0 + 0x16d4) * *(float *)(_DAT_180c8a9b0 + 0x1628);
    lVar3 = _DAT_180c8a9b0;
    uStack_28 = param_1;
    uVar2 = func_0x000180121e20(&uStack_20);
    if ((uVar2 & 0xff000000) != 0) {
        FUN_180293860(lVar1,&uStack_28,*(float *)(lVar3 + 0x19f8) * 0.2,0,0x40afede0,7);
        FUN_180293190(lVar1,*(undefined8 *)(lVar1 + 0x88),*(undefined4 *)(lVar1 + 0x80),uVar2);
        *(undefined4 *)(lVar1 + 0x80) = 0;
    }
    return;
}

/**
 * 渲染闪烁效果
 * @param param_1 闪烁位置
 * @param param_2 闪烁类型
 * @param param_3 闪烁强度
 */
void render_blink_effect(undefined8 param_1, undefined4 param_2, float param_3)
{
    longlong lVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fStackX_20;
    float fStackX_24;
    
    lVar1 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
    fVar5 = param_3 * 0.2;
    if (fVar5 <= 1.0) {
        fVar5 = 1.0;
    }
    param_3 = param_3 + fVar5 * -0.5;
    fStackX_24 = (float)((ulonglong)param_1 >> 0x20);
    fStackX_20 = (float)param_1;
    fVar3 = param_3 * 0.33333334;
    fVar2 = fVar5 * 0.25 + fStackX_20 + fVar3;
    fVar4 = (fVar5 * 0.25 + fStackX_24 + param_3) - fVar3 * 0.5;
    _fStackX_20 = CONCAT44(fVar4 - fVar3,fVar2 - fVar3);
    FUN_18011d9a0(*(longlong *)(lVar1 + 0x2e8) + 0x80,&fStackX_20);
    _fStackX_20 = CONCAT44(fVar4,fVar2);
    FUN_18011d9a0(*(longlong *)(lVar1 + 0x2e8) + 0x80,&fStackX_20);
    _fStackX_20 = CONCAT44(fVar4 - (fVar3 + fVar3),fVar3 + fVar3 + fVar2);
    FUN_18011d9a0(*(longlong *)(lVar1 + 0x2e8) + 0x80,&fStackX_20);
    lVar1 = *(longlong *)(lVar1 + 0x2e8);
    FUN_1802923e0(lVar1,*(undefined8 *)(lVar1 + 0x88),*(undefined4 *)(lVar1 + 0x80),param_2,0,fVar5);
    *(undefined4 *)(lVar1 + 0x80) = 0;
    return;
}

/**
 * 处理渲染边界框的显示和更新
 * @param param_1 边界框坐标
 * @param param_2 渲染标志
 * @param param_3 渲染上下文
 */
void process_bounding_box_display(float *param_1, uint param_2, longlong param_3)
{
    int *piVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    longlong lVar5;
    bool bVar6;
    uint uVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    undefined4 uVar15;
    float fStackX_18;
    float fStackX_1c;
    float fStackX_20;
    float fStackX_24;
    float fStack_b8;
    float fStack_b4;
    float fStack_b0;
    float fStack_ac;
    
    if (((*(char *)(param_3 + 0x1d06) == '\0') || ((param_2 & 4) != 0)) &&
       (lVar5 = *(longlong *)(param_3 + 0x1af8), *(char *)(lVar5 + 0x17c) == '\0')) {
        if ((param_2 & 8) == 0) {
            uVar15 = *(undefined4 *)(param_3 + 0x1664);
        }
        else {
            uVar15 = 0;
        }
        fVar2 = *(float *)(lVar5 + 0x228);
        fVar3 = *(float *)(lVar5 + 0x22c);
        fStack_b8 = *param_1;
        fStack_b4 = param_1[1];
        fStack_b0 = param_1[2];
        fStack_ac = param_1[3];
        fVar14 = fVar2;
        if (fVar2 <= fStack_b8) {
            fVar14 = fStack_b8;
        }
        fVar12 = fVar3;
        if (fVar3 <= fStack_b4) {
            fVar12 = fStack_b4;
        }
        fVar4 = *(float *)(lVar5 + 0x230);
        fVar10 = fVar4;
        if (fStack_b0 <= fVar4) {
            fVar10 = fStack_b0;
        }
        fVar8 = *(float *)(lVar5 + 0x234);
        if (fStack_ac <= *(float *)(lVar5 + 0x234)) {
            fVar8 = fStack_ac;
        }
        fVar9 = fVar8;
        fVar11 = fVar10;
        fVar13 = fVar12;
        if ((param_2 & 1) != 0) {
            fVar14 = fVar14 - 4.0;
            fVar11 = fVar10 + 4.0;
            fVar9 = fVar8 + 4.0;
            fVar13 = fVar12 - 4.0;
            if (((fVar14 < fVar2) || (fVar13 < fVar3)) ||
               ((fVar4 < fVar11 ||
                (*(float *)(lVar5 + 0x234) <= fVar9 && fVar9 != *(float *)(lVar5 + 0x234))))) {
                bVar6 = false;
            }
            else {
                bVar6 = true;
            }
            if (!bVar6) {
                FUN_180291b40(*(undefined8 *)(lVar5 + 0x2e8),CONCAT44(fVar13,fVar14),CONCAT44(fVar9,fVar11),
                              0);
            }
            fStack_b8 = *(float *)(_DAT_180c8a9b0 + 0x19a8);
            fStack_b4 = *(float *)(_DAT_180c8a9b0 + 0x19ac);
            fStack_b0 = *(float *)(_DAT_180c8a9b0 + 0x19b0);
            fStack_ac = *(float *)(_DAT_180c8a9b0 + 0x19b4) * *(float *)(_DAT_180c8a9b0 + 0x1628);
            uVar7 = func_0x000180121e20(&fStack_b8);
            fStackX_18 = fVar10 + 3.0;
            fStackX_1c = fVar8 + 3.0;
            fStackX_24 = fVar12 - 3.0;
            fStackX_20 = fVar14 + 1.0;
            if ((uVar7 & 0xff000000) != 0) {
                FUN_180293e80(*(undefined8 *)(lVar5 + 0x2e8),&fStackX_20,&fStackX_18,uVar7,uVar15,0xf,
                              0x40000000);
            }
            if (!bVar6) {
                piVar1 = (int *)(*(longlong *)(lVar5 + 0x2e8) + 0x60);
                *piVar1 = *piVar1 + -1;
                FUN_180291950();
            }
        }
        if ((param_2 & 2) != 0) {
            lVar5 = *(longlong *)(lVar5 + 0x2e8);
            fStack_b8 = *(float *)(_DAT_180c8a9b0 + 0x19a8);
            fStack_b4 = *(float *)(_DAT_180c8a9b0 + 0x19ac);
            fStack_b0 = *(float *)(_DAT_180c8a9b0 + 0x19b0);
            fStack_ac = *(float *)(_DAT_180c8a9b0 + 0x19b4) * *(float *)(_DAT_180c8a9b0 + 0x1628);
            uVar7 = func_0x000180121e20(&fStack_b8);
            if ((uVar7 & 0xff000000) != 0) {
                if ((*(byte *)(lVar5 + 0x30) & 1) == 0) {
                    fStackX_18 = fVar11 - 0.49;
                    fStackX_1c = fVar9 - 0.49;
                }
                else {
                    fStackX_18 = fVar11 - 0.5;
                    fStackX_1c = fVar9 - 0.5;
                }
                fStackX_20 = fVar14 + 0.5;
                fStackX_24 = fVar13 + 0.5;
                FUN_1802939e0(lVar5,&fStackX_20,&fStackX_18,uVar15,0xffffffff);
                FUN_1802923e0(lVar5,*(undefined8 *)(lVar5 + 0x88),*(undefined4 *)(lVar5 + 0x80),uVar7,1,
                              0x3f800000);
                *(undefined4 *)(lVar5 + 0x80) = 0;
            }
        }
    }
    return;
}

/**
 * 处理边界框的高级显示功能
 * @param param_1 边界框坐标
 * @param param_2 显示参数
 * @param param_3 渲染上下文
 */
void process_advanced_bounding_box(float *param_1, undefined8 param_2, longlong param_3)
{
    int *piVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    longlong lVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    bool bVar8;
    longlong lVar9;
    uint uVar10;
    longlong unaff_RBP;
    ulonglong unaff_RDI;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    undefined4 uVar18;
    
    lVar5 = *(longlong *)(param_3 + 0x1af8);
    if (*(char *)(lVar5 + 0x17c) == '\0') {
        if ((unaff_RDI & 8) == 0) {
            uVar18 = *(undefined4 *)(param_3 + 0x1664);
        }
        else {
            uVar18 = 0;
        }
        fVar2 = *(float *)(lVar5 + 0x228);
        fVar3 = *(float *)(lVar5 + 0x22c);
        fVar11 = *(float *)(lVar5 + 0x234);
        fVar4 = *param_1;
        fVar13 = param_1[1];
        fVar12 = param_1[2];
        fVar14 = param_1[3];
        fVar17 = fVar2;
        if (fVar2 <= fVar4) {
            fVar17 = fVar4;
        }
        fVar15 = fVar3;
        if (fVar3 <= fVar13) {
            fVar15 = fVar13;
        }
        *(float *)(unaff_RBP + -0x59) = fVar4;
        *(float *)(unaff_RBP + -0x55) = fVar13;
        *(float *)(unaff_RBP + -0x51) = fVar12;
        *(float *)(unaff_RBP + -0x4d) = fVar14;
        fVar4 = *(float *)(lVar5 + 0x230);
        fVar13 = fVar4;
        if (*(float *)(unaff_RBP + -0x51) <= fVar4) {
            fVar13 = *(float *)(unaff_RBP + -0x51);
        }
        if (*(float *)(unaff_RBP + -0x4d) <= fVar11) {
            fVar11 = *(float *)(unaff_RBP + -0x4d);
        }
        fVar12 = fVar11;
        fVar14 = fVar13;
        fVar16 = fVar15;
        if ((unaff_RDI & 1) != 0) {
            fVar17 = fVar17 - 4.0;
            fVar14 = fVar13 + 4.0;
            fVar12 = fVar11 + 4.0;
            fVar16 = fVar15 - 4.0;
            if ((((fVar17 < fVar2) || (fVar16 < fVar3)) || (fVar4 < fVar14)) ||
               (*(float *)(lVar5 + 0x234) <= fVar12 && fVar12 != *(float *)(lVar5 + 0x234))) {
                bVar8 = false;
            }
            else {
                bVar8 = true;
            }
            if (!bVar8) {
                FUN_180291b40(*(undefined8 *)(lVar5 + 0x2e8),CONCAT44(fVar16,fVar17),CONCAT44(fVar12,fVar14)
                              ,0);
            }
            lVar9 = _DAT_180c8a9b0;
            uVar6 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19ac);
            uVar7 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19b0);
            fVar2 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
            *(undefined4 *)(unaff_RBP + -0x59) = *(undefined4 *)(_DAT_180c8a9b0 + 0x19a8);
            *(undefined4 *)(unaff_RBP + -0x55) = uVar6;
            *(undefined4 *)(unaff_RBP + -0x51) = uVar7;
            *(float *)(unaff_RBP + -0x4d) = fVar2;
            *(float *)(unaff_RBP + -0x4d) = fVar2 * *(float *)(lVar9 + 0x1628);
            uVar10 = func_0x000180121e20(unaff_RBP + -0x59);
            *(float *)(unaff_RBP + 0x77) = fVar13 + 3.0;
            *(float *)(unaff_RBP + 0x7b) = fVar11 + 3.0;
            *(float *)(unaff_RBP + 0x83) = fVar15 - 3.0;
            *(float *)(unaff_RBP + 0x7f) = fVar17 + 1.0;
            if ((uVar10 & 0xff000000) != 0) {
                FUN_180293e80(*(undefined8 *)(lVar5 + 0x2e8),unaff_RBP + 0x7f,unaff_RBP + 0x77,uVar10,
                             uVar18);
            }
            if (!bVar8) {
                piVar1 = (int *)(*(longlong *)(lVar5 + 0x2e8) + 0x60);
                *piVar1 = *piVar1 + -1;
                FUN_180291950();
            }
        }
        lVar9 = _DAT_180c8a9b0;
        if ((unaff_RDI & 2) != 0) {
            lVar5 = *(longlong *)(lVar5 + 0x2e8);
            uVar6 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19ac);
            uVar7 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19b0);
            fVar2 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
            *(undefined4 *)(unaff_RBP + -0x59) = *(undefined4 *)(_DAT_180c8a9b0 + 0x19a8);
            *(undefined4 *)(unaff_RBP + -0x55) = uVar6;
            *(undefined4 *)(unaff_RBP + -0x51) = uVar7;
            *(float *)(unaff_RBP + -0x4d) = fVar2;
            *(float *)(unaff_RBP + -0x4d) = fVar2 * *(float *)(lVar9 + 0x1628);
            uVar10 = func_0x000180121e20(unaff_RBP + -0x59);
            if ((uVar10 & 0xff000000) != 0) {
                if ((*(byte *)(lVar5 + 0x30) & 1) == 0) {
                    fVar14 = fVar14 - 0.49;
                    fVar12 = fVar12 - 0.49;
                }
                else {
                    fVar14 = fVar14 - 0.5;
                    fVar12 = fVar12 - 0.5;
                }
                *(float *)(unaff_RBP + 0x77) = fVar14;
                *(float *)(unaff_RBP + 0x7b) = fVar12;
                *(float *)(unaff_RBP + 0x7f) = fVar17 + 0.5;
                *(float *)(unaff_RBP + 0x83) = fVar16 + 0.5;
                FUN_1802939e0(lVar5,unaff_RBP + 0x7f,unaff_RBP + 0x77,uVar18,0xffffffff);
                FUN_1802923e0(lVar5,*(undefined8 *)(lVar5 + 0x88),*(undefined4 *)(lVar5 + 0x80),uVar10,1);
                *(undefined4 *)(lVar5 + 0x80) = 0;
            }
        }
    }
    return;
}

/**
 * 处理边界框的增强显示功能
 * @param param_1 边界框坐标
 * @param param_2 显示参数
 * @param param_3 渲染上下文
 */
void process_enhanced_bounding_box(float *param_1, undefined8 param_2, longlong param_3)
{
    int *piVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    longlong lVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    bool bVar8;
    longlong lVar9;
    uint uVar10;
    longlong unaff_RBX;
    longlong unaff_RBP;
    ulonglong unaff_RDI;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    undefined4 uVar18;
    
    if ((unaff_RDI & 8) == 0) {
        uVar18 = *(undefined4 *)(param_3 + 0x1664);
    }
    else {
        uVar18 = 0;
    }
    fVar2 = *(float *)(unaff_RBX + 0x228);
    fVar3 = *(float *)(unaff_RBX + 0x22c);
    fVar11 = *(float *)(unaff_RBX + 0x234);
    fVar4 = *param_1;
    fVar13 = param_1[1];
    fVar12 = param_1[2];
    fVar14 = param_1[3];
    fVar17 = fVar2;
    if (fVar2 <= fVar4) {
        fVar17 = fVar4;
    }
    fVar15 = fVar3;
    if (fVar3 <= fVar13) {
        fVar15 = fVar13;
    }
    *(float *)(unaff_RBP + -0x59) = fVar4;
    *(float *)(unaff_RBP + -0x55) = fVar13;
    *(float *)(unaff_RBP + -0x51) = fVar12;
    *(float *)(unaff_RBP + -0x4d) = fVar14;
    fVar4 = *(float *)(unaff_RBX + 0x230);
    fVar13 = fVar4;
    if (*(float *)(unaff_RBP + -0x51) <= fVar4) {
        fVar13 = *(float *)(unaff_RBP + -0x51);
    }
    if (*(float *)(unaff_RBP + -0x4d) <= fVar11) {
        fVar11 = *(float *)(unaff_RBP + -0x4d);
    }
    fVar12 = fVar11;
    fVar14 = fVar13;
    fVar16 = fVar15;
    if ((unaff_RDI & 1) != 0) {
        fVar17 = fVar17 - 4.0;
        fVar14 = fVar13 + 4.0;
        fVar12 = fVar11 + 4.0;
        fVar16 = fVar15 - 4.0;
        if ((((fVar17 < fVar2) || (fVar16 < fVar3)) || (fVar4 < fVar14)) ||
           (*(float *)(unaff_RBX + 0x234) <= fVar12 && fVar12 != *(float *)(unaff_RBX + 0x234))) {
            bVar8 = false;
        }
        else {
            bVar8 = true;
        }
        if (!bVar8) {
            FUN_180291b40(*(undefined8 *)(unaff_RBX + 0x2e8),CONCAT44(fVar16,fVar17),
                          CONCAT44(fVar12,fVar14),0);
        }
        lVar9 = _DAT_180c8a9b0;
        uVar6 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19ac);
        uVar7 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19b0);
        fVar2 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
        *(undefined4 *)(unaff_RBP + -0x59) = *(undefined4 *)(_DAT_180c8a9b0 + 0x19a8);
        *(undefined4 *)(unaff_RBP + -0x55) = uVar6;
        *(undefined4 *)(unaff_RBP + -0x51) = uVar7;
        *(float *)(unaff_RBP + -0x4d) = fVar2;
        *(float *)(unaff_RBP + -0x4d) = fVar2 * *(float *)(lVar9 + 0x1628);
        uVar10 = func_0x000180121e20(unaff_RBP + -0x59);
        *(float *)(unaff_RBP + 0x77) = fVar13 + 3.0;
        *(float *)(unaff_RBP + 0x7b) = fVar11 + 3.0;
        *(float *)(unaff_RBP + 0x83) = fVar15 - 3.0;
        *(float *)(unaff_RBP + 0x7f) = fVar17 + 1.0;
        if ((uVar10 & 0xff000000) != 0) {
            FUN_180293e80(*(undefined8 *)(unaff_RBX + 0x2e8),unaff_RBP + 0x7f,unaff_RBP + 0x77,uVar10,
                          uVar18);
        }
        if (!bVar8) {
            piVar1 = (int *)(*(longlong *)(unaff_RBX + 0x2e8) + 0x60);
            *piVar1 = *piVar1 + -1;
            FUN_180291950();
        }
    }
    lVar9 = _DAT_180c8a9b0;
    if ((unaff_RDI & 2) != 0) {
        lVar5 = *(longlong *)(unaff_RBX + 0x2e8);
        uVar6 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19ac);
        uVar7 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19b0);
        fVar2 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
        *(undefined4 *)(unaff_RBP + -0x59) = *(undefined4 *)(_DAT_180c8a9b0 + 0x19a8);
        *(undefined4 *)(unaff_RBP + -0x55) = uVar6;
        *(undefined4 *)(unaff_RBP + -0x51) = uVar7;
        *(float *)(unaff_RBP + -0x4d) = fVar2;
        *(float *)(unaff_RBP + -0x4d) = fVar2 * *(float *)(lVar9 + 0x1628);
        uVar10 = func_0x000180121e20(unaff_RBP + -0x59);
        if ((uVar10 & 0xff000000) != 0) {
            if ((*(byte *)(lVar5 + 0x30) & 1) == 0) {
                fVar14 = fVar14 - 0.49;
                fVar12 = fVar12 - 0.49;
            }
            else {
                fVar14 = fVar14 - 0.5;
                fVar12 = fVar12 - 0.5;
            }
            *(float *)(unaff_RBP + 0x77) = fVar14;
            *(float *)(unaff_RBP + 0x7b) = fVar12;
            *(float *)(unaff_RBP + 0x7f) = fVar17 + 0.5;
            *(float *)(unaff_RBP + 0x83) = fVar16 + 0.5;
            FUN_1802939e0(lVar5,unaff_RBP + 0x7f,unaff_RBP + 0x77,uVar18,0xffffffff);
            FUN_1802923e0(lVar5,*(undefined8 *)(lVar5 + 0x88),*(undefined4 *)(lVar5 + 0x80),uVar10,1);
            *(undefined4 *)(lVar5 + 0x80) = 0;
        }
    }
    return;
}

/**
 * 处理浮点坐标的边界框显示
 * @param param_1 X坐标偏移
 * @param param_2 Y坐标偏移
 * @param param_3 Z坐标偏移
 * @param param_4 W坐标偏移
 */
void process_float_coordinate_bounding_box(float param_1, float param_2, float param_3, float param_4)
{
    int *piVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    float fVar5;
    bool bVar6;
    longlong lVar7;
    uint uVar8;
    longlong unaff_RBX;
    longlong unaff_RBP;
    ulonglong unaff_RDI;
    float unaff_XMM6_Da;
    float fVar9;
    float unaff_XMM7_Da;
    float fVar10;
    float unaff_XMM8_Da;
    float unaff_XMM9_Da;
    float fVar11;
    float unaff_XMM14_Da;
    
    fVar11 = unaff_XMM9_Da - param_1;
    fVar10 = unaff_XMM7_Da + param_1;
    fVar9 = unaff_XMM6_Da + param_1;
    param_1 = unaff_XMM8_Da - param_1;
    if ((((fVar11 < param_4) || (param_1 < param_3)) || (param_2 < fVar10)) ||
       (*(float *)(unaff_RBX + 0x234) <= fVar9 && fVar9 != *(float *)(unaff_RBX + 0x234))) {
        bVar6 = false;
    }
    else {
        bVar6 = true;
    }
    if (!bVar6) {
        FUN_180291b40(*(undefined8 *)(unaff_RBX + 0x2e8),CONCAT44(param_1,fVar11),CONCAT44(fVar9,fVar10)
                      ,0);
    }
    lVar7 = _DAT_180c8a9b0;
    uVar3 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19ac);
    uVar4 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19b0);
    fVar5 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
    *(undefined4 *)(unaff_RBP + -0x59) = *(undefined4 *)(_DAT_180c8a9b0 + 0x19a8);
    *(undefined4 *)(unaff_RBP + -0x55) = uVar3;
    *(undefined4 *)(unaff_RBP + -0x51) = uVar4;
    *(float *)(unaff_RBP + -0x4d) = fVar5;
    *(float *)(unaff_RBP + -0x4d) = fVar5 * *(float *)(lVar7 + 0x1628);
    uVar8 = func_0x000180121e20(unaff_RBP + -0x59);
    *(float *)(unaff_RBP + 0x77) = unaff_XMM7_Da + 3.0;
    *(float *)(unaff_RBP + 0x7b) = unaff_XMM6_Da + 3.0;
    *(float *)(unaff_RBP + 0x83) = unaff_XMM8_Da - 3.0;
    *(float *)(unaff_RBP + 0x7f) = fVar11 + unaff_XMM14_Da;
    if ((uVar8 & 0xff000000) != 0) {
        FUN_180293e80(*(undefined8 *)(unaff_RBX + 0x2e8),unaff_RBP + 0x7f,unaff_RBP + 0x77,uVar8);
    }
    if (!bVar6) {
        piVar1 = (int *)(*(longlong *)(unaff_RBX + 0x2e8) + 0x60);
        *piVar1 = *piVar1 + -1;
        FUN_180291950();
    }
    lVar7 = _DAT_180c8a9b0;
    if ((unaff_RDI & 2) != 0) {
        lVar2 = *(longlong *)(unaff_RBX + 0x2e8);
        uVar3 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19ac);
        uVar4 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19b0);
        fVar5 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
        *(undefined4 *)(unaff_RBP + -0x59) = *(undefined4 *)(_DAT_180c8a9b0 + 0x19a8);
        *(undefined4 *)(unaff_RBP + -0x55) = uVar3;
        *(undefined4 *)(unaff_RBP + -0x51) = uVar4;
        *(float *)(unaff_RBP + -0x4d) = fVar5;
        *(float *)(unaff_RBP + -0x4d) = fVar5 * *(float *)(lVar7 + 0x1628);
        uVar8 = func_0x000180121e20(unaff_RBP + -0x59);
        if ((uVar8 & 0xff000000) != 0) {
            if ((*(byte *)(lVar2 + 0x30) & 1) == 0) {
                fVar10 = fVar10 - 0.49;
                fVar9 = fVar9 - 0.49;
            }
            else {
                fVar10 = fVar10 - 0.5;
                fVar9 = fVar9 - 0.5;
            }
            *(float *)(unaff_RBP + 0x77) = fVar10;
            *(float *)(unaff_RBP + 0x7b) = fVar9;
            *(float *)(unaff_RBP + 0x7f) = fVar11 + 0.5;
            *(float *)(unaff_RBP + 0x83) = param_1 + 0.5;
            FUN_1802939e0(lVar2,unaff_RBP + 0x7f,unaff_RBP + 0x77);
            FUN_1802923e0(lVar2,*(undefined8 *)(lVar2 + 0x88),*(undefined4 *)(lVar2 + 0x80),uVar8,1);
            *(undefined4 *)(lVar2 + 0x80) = 0;
        }
    }
    return;
}