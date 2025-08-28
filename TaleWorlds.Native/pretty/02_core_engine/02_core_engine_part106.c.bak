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
extern void FUN_180297590(uint64_t param_1);
extern uint func_0x000180121e20(void *param_1);
extern void FUN_1801224c0(uint64_t param_1, ...);
extern void FUN_18013c800(uint64_t param_1, ...);
extern void FUN_180293f50(uint64_t param_1, void *param_2, void *param_3, int32_t param_4, int32_t param_5, int32_t param_6);
extern void FUN_180293e80(uint64_t param_1, void *param_2, void *param_3, uint param_4, int32_t param_5, int32_t param_6, float param_7);
extern void FUN_1802940f0(uint64_t param_1, void *param_2, void *param_3, void *param_4, uint param_5);
extern void FUN_180293860(uint64_t param_1, void *param_2, float param_3, int param_4, int32_t param_5, int param_6);
extern void FUN_180293190(uint64_t param_1, uint64_t param_2, int32_t param_3, uint param_4);
extern void FUN_18011d9a0(void *param_1, void *param_2);
extern void FUN_1802923e0(uint64_t param_1, uint64_t param_2, int32_t param_3, uint param_4, int param_5, float param_6);
extern void FUN_180291b40(uint64_t param_1, uint64_t param_2, uint64_t param_3, int param_4);
extern void FUN_180291950(void);
extern void FUN_1802939e0(uint64_t param_1, void *param_2, void *param_3, int32_t param_4, int32_t param_5);

// 全局变量 - 渲染管理器实例
extern uint64_t global_render_manager;

/**
 * 处理渲染边界框的调整和优化
 * @param render_context 渲染上下文
 * @param bounds_ptr 边界框坐标指针
 * @param entity_data 实体数据
 * 简化实现: 保留原始逻辑但优化变量命名和注释
 */
void process_render_bounding_box(uint64_t render_context, float *bounds_ptr, longlong entity_data)
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
        if (render_context == 0) {
            longlong string_length = -1;
            do {
                string_length = string_length + 1;
            } while (*(char *)(bounds_ptr + string_length) != '\0');
            render_context = string_length + bounds_ptr;
        }
        if (bounds_ptr != render_context) {
            longlong entity_ptr = *(longlong *)(render_context + 0x38);
            float *current_bounds = (float *)(*(longlong *)(render_context + 0x68) + -0x10 +
                                        (longlong)*(int *)(render_context + 0x60) * 0x10);
            float max_z = *current_bounds;
            float max_w = current_bounds[1];
            float adjusted_min_y = current_bounds[2];
            float adjusted_max_z = current_bounds[3];
            *(float *)(entity_data + -0x59) = max_z;
            *(float *)(entity_data + -0x55) = max_w;
            *(float *)(entity_data + -0x51) = adjusted_min_y;
            *(float *)(entity_data + -0x4d) = adjusted_max_z;
            if (max_z < min_y_value) {
                *(float *)(entity_data + -0x59) = min_y_value;
            }
            if (*(float *)(entity_data + -0x55) < *(float *)(entity_data + 0x18)) {
                *(float *)(entity_data + -0x55) = *(float *)(entity_data + 0x18);
            }
            if (*(float *)(entity_data + 0x1c) <= *(float *)(entity_data + -0x51)) {
                *(float *)(entity_data + -0x51) = *(float *)(entity_data + 0x1c);
            }
            if (max_y <= *(float *)(entity_data + -0x4d)) {
                *(float *)(entity_data + -0x4d) = max_y;
            }
            FUN_180297590(*(uint64_t *)(entity_ptr + 8));
        }
    }
    return;
}

/**
 * 初始化渲染状态
 * 空函数 - 可能是预留的接口
 */
void initialize_render_state(void)
{
    return;
}

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
void process_text_string(uint64_t context1, uint64_t context2, char *text_start, char *text_end,
                       uint64_t process_param1, uint64_t process_param2, uint64_t process_param3)
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
       (FUN_1801224c0(*(uint64_t *)(*(longlong *)(global_render_manager + 0x1af8) + 0x2e8),context1,context2,
                      text_start,current_pos,process_param1,process_param2,process_param3), *(char *)(render_manager + 0x2e38) != '\0')) {
        FUN_18013c800(context1,text_start,current_pos);
    }
    return;
}

/**
 * 执行默认的文本处理流程
 */
void execute_default_text_processing(void)
{
    longlong render_manager = global_render_manager;
    
    FUN_1801224c0(*(uint64_t *)(*(longlong *)(global_render_manager + 0x1af8) + 0x2e8));
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
 * @param render_context 渲染上下文
 * @param position 矩形位置
 * @param size 矩形尺寸
 * @param enable_alpha 是否启用透明度
 * @param color 颜色参数
 */
void render_2d_rectangle(uint64_t render_context, uint64_t position, int32_t size, char enable_alpha,
                        int32_t color)
{
    float fVar1;
    longlong lVar2;
    uint uVar3;
    longlong lVar4;
    uint64_t uStack_58;
    uint64_t uStack_50;
    float fStack_48;
    float fStack_44;
    float fStack_40;
    float fStack_3c;
    int32_t uStack_38;
    float fStack_34;
    
    longlong manager_ptr = global_render_manager;
    longlong render_data = *(longlong *)(global_render_manager + 0x1af8);
    uint64_t stack_size = position;
    uint64_t stack_pos = render_context;
    FUN_180293f50(*(uint64_t *)(render_data + 0x2e8),&stack_pos,&stack_size,size,color,0xf);
    float alpha_value = *(float *)(manager_ptr + 0x1668);
    if ((enable_alpha != '\0') && (0.0 < alpha_value)) {
        color_data stack_color;
        stack_color.r = *(float *)(global_render_manager + 0x1728);
        stack_color.g = *(float *)(global_render_manager + 0x172c);
        stack_color.b = *(int32_t *)(global_render_manager + 0x1730);
        float alpha_multiplier = *(float *)(global_render_manager + 0x1734) * *(float *)(global_render_manager + 0x1628);
        manager_ptr = global_render_manager;
        uint render_flags = func_0x000180121e20(&stack_color);
        stack_size.y = (float)stack_size.x + 1.0;
        stack_color.r = (float)stack_pos.x + 1.0;
        stack_size.x = stack_size.x._4_4_ + 1.0;
        stack_color.g = stack_pos.x._4_4_ + 1.0;
        if ((render_flags & 0xff000000) != 0) {
            FUN_180293e80(*(uint64_t *)(render_data + 0x2e8),&stack_color,&stack_size,render_flags,color,0xf,alpha_value);
            manager_ptr = global_render_manager;
        }
        stack_color.r = *(float *)(manager_ptr + 0x1718);
        stack_color.g = *(float *)(manager_ptr + 0x171c);
        stack_color.b = *(int32_t *)(manager_ptr + 0x1720);
        alpha_multiplier = *(float *)(manager_ptr + 0x1724) * *(float *)(manager_ptr + 0x1628);
        render_flags = func_0x000180121e20(&stack_color);
        if ((render_flags & 0xff000000) != 0) {
            FUN_180293e80(*(uint64_t *)(render_data + 0x2e8),&stack_pos,&stack_size,render_flags,color,0xf,alpha_value);
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
/**
 * 渲染2D矩形元素（简化版本）
 * @param render_context 渲染上下文
 * @param position 矩形位置
 * @param color 颜色参数
 */
void render_2d_rectangle_simple(uint64_t render_context, uint64_t position, int32_t color)
{
    float fVar1;
    longlong lVar2;
    uint uVar3;
    longlong lVar4;
    float fStackX_20;
    float fStackX_24;
    uint64_t uStack_48;
    uint64_t uStack_40;
    float fStack_38;
    float fStack_34;
    int32_t uStack_30;
    float fStack_2c;
    
    fVar1 = *(float *)(global_render_manager + 0x1668);
    lVar2 = *(longlong *)(global_render_manager + 0x1af8);
    if (0.0 < fVar1) {
        fStack_38 = *(float *)(global_render_manager + 0x1728);
        fStack_34 = *(float *)(global_render_manager + 0x172c);
        uStack_30 = *(int32_t *)(global_render_manager + 0x1730);
        fStack_2c = *(float *)(global_render_manager + 0x1734) * *(float *)(global_render_manager + 0x1628);
        lVar4 = global_render_manager;
        uStack_48 = param_2;
        uStack_40 = param_1;
        uVar3 = func_0x000180121e20(&fStack_38);
        fStackX_20 = (float)uStack_48 + 1.0;
        fStack_38 = (float)uStack_40 + 1.0;
        fStackX_24 = uStack_48._4_4_ + 1.0;
        fStack_34 = uStack_40._4_4_ + 1.0;
        if ((uVar3 & 0xff000000) != 0) {
            FUN_180293e80(*(uint64_t *)(lVar2 + 0x2e8),&fStack_38,&fStackX_20,uVar3,param_3,0xf,fVar1);
            lVar4 = global_render_manager;
        }
        fStack_38 = *(float *)(lVar4 + 0x1718);
        fStack_34 = *(float *)(lVar4 + 0x171c);
        uStack_30 = *(int32_t *)(lVar4 + 0x1720);
        fStack_2c = *(float *)(lVar4 + 0x1724) * *(float *)(lVar4 + 0x1628);
        uVar3 = func_0x000180121e20(&fStack_38);
        if ((uVar3 & 0xff000000) != 0) {
            FUN_180293e80(*(uint64_t *)(lVar2 + 0x2e8),&uStack_40,&uStack_48,uVar3,param_3,0xf,fVar1);
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
/**
 * 渲染粒子效果
 * @param particle_position 粒子位置
 * @param particle_type 粒子类型 (0-3)
 * @param particle_size 粒子大小
 */
void render_particle_effect(uint64_t particle_position, int particle_type, float particle_size)
{
    float fVar1;
    int32_t uVar2;
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
    int32_t uStack_68;
    int32_t uStack_64;
    int32_t uStack_60;
    float fStack_5c;
    
    fVar7 = 0.0;
    fStack_74 = 0.0;
    fVar6 = 0.0;
    float base_size = *(float *)(global_render_manager + 0x19f8);
    float offset_y = 0.0;
    float size_factor = base_size * 0.4 * particle_size;
    float particle_z = (float)((ulonglong)particle_position >> 0x20);
    float transformed_z = base_size * 0.5 * particle_size + particle_z;
    float particle_x = (float)particle_position;
    float transformed_x = base_size * 0.5 + particle_x;
    float temp_offset = 0.0;
    float offset_w = 0.0;
    
    // 根据粒子类型设置不同的偏移量
    if (-1 < particle_type) {
        if (particle_type < 2) {
            // 类型0和1
            if (particle_type == 0) {
                size_factor = base_size * -0.4 * particle_size;
            }
            offset_y = size_factor * -0.75;
            float offset_x = size_factor * 0.75;
            float offset_y2 = size_factor * 0.866; // sin(60°)
            offset_w = size_factor * -0.866;      // -sin(60°)
            temp_offset = offset_y;
        }
        else if (particle_type < 4) {
            // 类型2和3
            if (particle_type == 2) {
                size_factor = base_size * -0.4 * particle_size;
            }
            float offset_y2 = size_factor * -0.75;
            float offset_x = size_factor * 0.75;
            offset_y = size_factor * 0.866;      // sin(60°)
            temp_offset = size_factor * -0.866; // -sin(60°)
            offset_w = offset_y2;
        }
    }
    // 设置粒子颜色和透明度
    color_data particle_color;
    particle_color.r = *(int32_t *)(global_render_manager + 0x16c8);
    particle_color.g = *(int32_t *)(global_render_manager + 0x16cc);
    particle_color.b = *(int32_t *)(global_render_manager + 0x16d0);
    float alpha = *(float *)(global_render_manager + 0x16d4) * *(float *)(global_render_manager + 0x1628);
    
    // 计算最终粒子位置
    uint64_t final_position = CONCAT44(transformed_z + offset_w, transformed_x + offset_y);
    float final_y = transformed_x + temp_offset;
    float final_x = transformed_x + offset_x;
    float final_y2 = transformed_z + offset_y2;
    float final_z = transformed_z + offset_x;
    
    longlong render_manager = global_render_manager;
    uint render_flags = func_0x000180121e20(&particle_color);
    FUN_1802940f0(*(uint64_t *)(*(longlong *)(render_manager + 0x1af8) + 0x2e8),&final_x,&final_y,
                  &final_position,render_flags);
    return;
}

/**
 * 渲染光晕效果
 * @param param_1 光晕位置
 */
/**
 * 渲染光晕效果
 * @param glow_position 光晕位置
 */
void render_glow_effect(uint64_t glow_position)
{
    longlong lVar1;
    uint uVar2;
    longlong lVar3;
    uint64_t uStack_28;
    int32_t uStack_20;
    int32_t uStack_1c;
    int32_t uStack_18;
    float fStack_14;
    
    // 设置光晕颜色
    color_data glow_color;
    glow_color.r = *(int32_t *)(global_render_manager + 0x16c8);
    glow_color.g = *(int32_t *)(global_render_manager + 0x16cc);
    glow_color.b = *(int32_t *)(global_render_manager + 0x16d0);
    
    longlong render_data = *(longlong *)(*(longlong *)(global_render_manager + 0x1af8) + 0x2e8);
    float alpha = *(float *)(global_render_manager + 0x16d4) * *(float *)(global_render_manager + 0x1628);
    longlong render_manager = global_render_manager;
    uint64_t position = glow_position;
    uint render_flags = func_0x000180121e20(&glow_color);
    
    if ((render_flags & 0xff000000) != 0) {
        // 渲染光晕效果，强度为基础大小的20%
        FUN_180293860(render_data,&position,*(float *)(render_manager + 0x19f8) * 0.2,0,0x40afede0,7);
        FUN_180293190(render_data,*(uint64_t *)(render_data + 0x88),*(int32_t *)(render_data + 0x80),render_flags);
        *(int32_t *)(render_data + 0x80) = 0;
    }
    return;
}

/**
 * 渲染闪烁效果
 * @param param_1 闪烁位置
 * @param param_2 闪烁类型
 * @param param_3 闪烁强度
 */
/**
 * 渲染闪烁效果
 * @param blink_position 闪烁位置
 * @param blink_type 闪烁类型
 * @param blink_intensity 闪烁强度
 */
void render_blink_effect(uint64_t blink_position, int32_t blink_type, float blink_intensity)
{
    longlong lVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fStackX_20;
    float fStackX_24;
    
    longlong render_manager = *(longlong *)(global_render_manager + 0x1af8);
    
    // 计算闪烁参数
    float glow_size = blink_intensity * 0.2;
    if (glow_size <= 1.0) {
        glow_size = 1.0;
    }
    
    float adjusted_intensity = blink_intensity + glow_size * -0.5;
    float position_z = (float)((ulonglong)blink_position >> 0x20);
    float position_x = (float)blink_position;
    float offset = adjusted_intensity * 0.33333334; // 1/3
    
    // 计算闪烁位置
    float final_x = glow_size * 0.25 + position_x + offset;
    float final_z = (glow_size * 0.25 + position_z + adjusted_intensity) - offset * 0.5;
    
    // 创建三重闪烁效果
    uint64_t blink_pos1 = CONCAT44(final_z - offset, final_x - offset);
    FUN_18011d9a0(*(longlong *)(render_manager + 0x2e8) + 0x80, &blink_pos1);
    
    uint64_t blink_pos2 = CONCAT44(final_z, final_x);
    FUN_18011d9a0(*(longlong *)(render_manager + 0x2e8) + 0x80, &blink_pos2);
    
    uint64_t blink_pos3 = CONCAT44(final_z - (offset + offset), offset + offset + final_x);
    FUN_18011d9a0(*(longlong *)(render_manager + 0x2e8) + 0x80, &blink_pos3);
    
    longlong render_data = *(longlong *)(render_manager + 0x2e8);
    FUN_1802923e0(render_data, *(uint64_t *)(render_data + 0x88), *(int32_t *)(render_data + 0x80), blink_type, 0, glow_size);
    *(int32_t *)(render_data + 0x80) = 0;
    return;
}

/**
 * 处理渲染边界框的显示和更新
 * @param param_1 边界框坐标
 * @param param_2 渲染标志
 * @param param_3 渲染上下文
 */
/**
 * 处理渲染边界框的显示和更新
 * @param bbox_coords 边界框坐标
 * @param render_flags 渲染标志
 * @param render_context 渲染上下文
 */
void process_bounding_box_display(float *bbox_coords, uint render_flags, longlong render_context)
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
    int32_t uVar15;
    float fStackX_18;
    float fStackX_1c;
    float fStackX_20;
    float fStackX_24;
    float fStack_b8;
    float fStack_b4;
    float fStack_b0;
    float fStack_ac;
    
    // 检查是否需要显示边界框
    if (((*(char *)(render_context + 0x1d06) == '\0') || ((render_flags & 4) != 0)) &&
       (longlong render_data = *(longlong *)(render_context + 0x1af8), *(char *)(render_data + 0x17c) == '\0')) {
        
        // 获取颜色参数
        int32_t color_param;
        if ((render_flags & 8) == 0) {
            color_param = *(int32_t *)(render_context + 0x1664);
        }
        else {
            color_param = 0;
        }
        
        // 获取边界框范围
        float min_x = *(float *)(render_data + 0x228);
        float min_y = *(float *)(render_data + 0x22c);
        float bbox_x = *bbox_coords;
        float bbox_y = bbox_coords[1];
        float bbox_z = bbox_coords[2];
        float bbox_w = bbox_coords[3];
        
        // 计算调整后的边界
        float adjusted_x = min_x;
        if (min_x <= bbox_x) {
            adjusted_x = bbox_x;
        }
        float adjusted_y = min_y;
        if (min_y <= bbox_y) {
            adjusted_y = bbox_y;
        }
        
        float max_z = *(float *)(render_data + 0x230);
        float adjusted_z = max_z;
        if (bbox_z <= max_z) {
            adjusted_z = bbox_z;
        }
        
        float max_w = *(float *)(render_data + 0x234);
        float adjusted_w = max_w;
        if (bbox_w <= max_w) {
            adjusted_w = bbox_w;
        }
        
        // 处理边界框扩展模式
        if ((render_flags & 1) != 0) {
            float expanded_x = adjusted_x - 4.0;
            float expanded_z = adjusted_z + 4.0;
            float expanded_w = adjusted_w + 4.0;
            float expanded_y = adjusted_y - 4.0;
            
            // 检查边界框是否有效
            bool is_valid = true;
            if (((expanded_x < min_x) || (expanded_y < min_y)) ||
                ((max_z < expanded_z ||
                 (*(float *)(render_data + 0x234) <= expanded_w && expanded_w != *(float *)(render_data + 0x234))))) {
                is_valid = false;
            }
            
            if (!is_valid) {
                FUN_180291b40(*(uint64_t *)(render_data + 0x2e8),CONCAT44(expanded_y,expanded_x),CONCAT44(expanded_w,expanded_z),0);
            }
            
            // 渲染边界框
            color_data bbox_color;
            bbox_color.r = *(float *)(global_render_manager + 0x19a8);
            bbox_color.g = *(float *)(global_render_manager + 0x19ac);
            bbox_color.b = *(float *)(global_render_manager + 0x19b0);
            bbox_color.a = *(float *)(global_render_manager + 0x19b4) * *(float *)(global_render_manager + 0x1628);
            
            uint flags = func_0x000180121e20(&bbox_color);
            float offset_z = adjusted_z + 3.0;
            float offset_w = adjusted_w + 3.0;
            float offset_y = adjusted_y - 3.0;
            float offset_x = adjusted_x + 1.0;
            
            if ((flags & 0xff000000) != 0) {
                FUN_180293e80(*(uint64_t *)(render_data + 0x2e8),&offset_x,&offset_z,flags,color_param,0xf,0x40000000);
            }
            
            if (!is_valid) {
                int *counter = (int *)(*(longlong *)(render_data + 0x2e8) + 0x60);
                *counter = *counter + -1;
                FUN_180291950();
            }
        }
        
        // 处理边界框高亮模式
        if ((render_flags & 2) != 0) {
            render_data = *(longlong *)(render_data + 0x2e8);
            
            color_data highlight_color;
            highlight_color.r = *(float *)(global_render_manager + 0x19a8);
            highlight_color.g = *(float *)(global_render_manager + 0x19ac);
            highlight_color.b = *(float *)(global_render_manager + 0x19b0);
            highlight_color.a = *(float *)(global_render_manager + 0x19b4) * *(float *)(global_render_manager + 0x1628);
            
            uint flags = func_0x000180121e20(&highlight_color);
            if ((flags & 0xff000000) != 0) {
                float highlight_z, highlight_w;
                if ((*(byte *)(render_data + 0x30) & 1) == 0) {
                    highlight_z = expanded_z - 0.49;
                    highlight_w = expanded_w - 0.49;
                }
                else {
                    highlight_z = expanded_z - 0.5;
                    highlight_w = expanded_w - 0.5;
                }
                
                float highlight_x = adjusted_x + 0.5;
                float highlight_y = adjusted_y + 0.5;
                
                FUN_1802939e0(render_data,&highlight_x,&highlight_z,color_param,0xffffffff);
                FUN_1802923e0(render_data,*(uint64_t *)(render_data + 0x88),*(int32_t *)(render_data + 0x80),flags,1,0x3f800000);
                *(int32_t *)(render_data + 0x80) = 0;
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
/**
 * 处理边界框的高级显示功能
 * @param bbox_coords 边界框坐标
 * @param display_params 显示参数
 * @param render_context 渲染上下文
 */
void process_advanced_bounding_box(float *bbox_coords, uint64_t display_params, longlong render_context)
{
    int *piVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    longlong lVar5;
    int32_t uVar6;
    int32_t uVar7;
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
    int32_t uVar18;
    
    lVar5 = *(longlong *)(param_3 + 0x1af8);
    if (*(char *)(lVar5 + 0x17c) == '\0') {
        if ((unaff_RDI & 8) == 0) {
            uVar18 = *(int32_t *)(param_3 + 0x1664);
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
                FUN_180291b40(*(uint64_t *)(lVar5 + 0x2e8),CONCAT44(fVar16,fVar17),CONCAT44(fVar12,fVar14)
                              ,0);
            }
            lVar9 = global_render_manager;
            uVar6 = *(int32_t *)(global_render_manager + 0x19ac);
            uVar7 = *(int32_t *)(global_render_manager + 0x19b0);
            fVar2 = *(float *)(global_render_manager + 0x19b4);
            *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(global_render_manager + 0x19a8);
            *(int32_t *)(unaff_RBP + -0x55) = uVar6;
            *(int32_t *)(unaff_RBP + -0x51) = uVar7;
            *(float *)(unaff_RBP + -0x4d) = fVar2;
            *(float *)(unaff_RBP + -0x4d) = fVar2 * *(float *)(lVar9 + 0x1628);
            uVar10 = func_0x000180121e20(unaff_RBP + -0x59);
            *(float *)(unaff_RBP + 0x77) = fVar13 + 3.0;
            *(float *)(unaff_RBP + 0x7b) = fVar11 + 3.0;
            *(float *)(unaff_RBP + 0x83) = fVar15 - 3.0;
            *(float *)(unaff_RBP + 0x7f) = fVar17 + 1.0;
            if ((uVar10 & 0xff000000) != 0) {
                FUN_180293e80(*(uint64_t *)(lVar5 + 0x2e8),unaff_RBP + 0x7f,unaff_RBP + 0x77,uVar10,
                             uVar18);
            }
            if (!bVar8) {
                piVar1 = (int *)(*(longlong *)(lVar5 + 0x2e8) + 0x60);
                *piVar1 = *piVar1 + -1;
                FUN_180291950();
            }
        }
        lVar9 = global_render_manager;
        if ((unaff_RDI & 2) != 0) {
            lVar5 = *(longlong *)(lVar5 + 0x2e8);
            uVar6 = *(int32_t *)(global_render_manager + 0x19ac);
            uVar7 = *(int32_t *)(global_render_manager + 0x19b0);
            fVar2 = *(float *)(global_render_manager + 0x19b4);
            *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(global_render_manager + 0x19a8);
            *(int32_t *)(unaff_RBP + -0x55) = uVar6;
            *(int32_t *)(unaff_RBP + -0x51) = uVar7;
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
                FUN_1802923e0(lVar5,*(uint64_t *)(lVar5 + 0x88),*(int32_t *)(lVar5 + 0x80),uVar10,1);
                *(int32_t *)(lVar5 + 0x80) = 0;
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
/**
 * 处理边界框的增强显示功能
 * @param bbox_coords 边界框坐标
 * @param display_params 显示参数
 * @param render_context 渲染上下文
 */
void process_enhanced_bounding_box(float *bbox_coords, uint64_t display_params, longlong render_context)
{
    int *piVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    longlong lVar5;
    int32_t uVar6;
    int32_t uVar7;
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
    int32_t uVar18;
    
    if ((unaff_RDI & 8) == 0) {
        uVar18 = *(int32_t *)(param_3 + 0x1664);
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
            FUN_180291b40(*(uint64_t *)(unaff_RBX + 0x2e8),CONCAT44(fVar16,fVar17),
                          CONCAT44(fVar12,fVar14),0);
        }
        lVar9 = global_render_manager;
        uVar6 = *(int32_t *)(global_render_manager + 0x19ac);
        uVar7 = *(int32_t *)(global_render_manager + 0x19b0);
        fVar2 = *(float *)(global_render_manager + 0x19b4);
        *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(global_render_manager + 0x19a8);
        *(int32_t *)(unaff_RBP + -0x55) = uVar6;
        *(int32_t *)(unaff_RBP + -0x51) = uVar7;
        *(float *)(unaff_RBP + -0x4d) = fVar2;
        *(float *)(unaff_RBP + -0x4d) = fVar2 * *(float *)(lVar9 + 0x1628);
        uVar10 = func_0x000180121e20(unaff_RBP + -0x59);
        *(float *)(unaff_RBP + 0x77) = fVar13 + 3.0;
        *(float *)(unaff_RBP + 0x7b) = fVar11 + 3.0;
        *(float *)(unaff_RBP + 0x83) = fVar15 - 3.0;
        *(float *)(unaff_RBP + 0x7f) = fVar17 + 1.0;
        if ((uVar10 & 0xff000000) != 0) {
            FUN_180293e80(*(uint64_t *)(unaff_RBX + 0x2e8),unaff_RBP + 0x7f,unaff_RBP + 0x77,uVar10,
                          uVar18);
        }
        if (!bVar8) {
            piVar1 = (int *)(*(longlong *)(unaff_RBX + 0x2e8) + 0x60);
            *piVar1 = *piVar1 + -1;
            FUN_180291950();
        }
    }
    lVar9 = global_render_manager;
    if ((unaff_RDI & 2) != 0) {
        lVar5 = *(longlong *)(unaff_RBX + 0x2e8);
        uVar6 = *(int32_t *)(global_render_manager + 0x19ac);
        uVar7 = *(int32_t *)(global_render_manager + 0x19b0);
        fVar2 = *(float *)(global_render_manager + 0x19b4);
        *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(global_render_manager + 0x19a8);
        *(int32_t *)(unaff_RBP + -0x55) = uVar6;
        *(int32_t *)(unaff_RBP + -0x51) = uVar7;
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
            FUN_1802923e0(lVar5,*(uint64_t *)(lVar5 + 0x88),*(int32_t *)(lVar5 + 0x80),uVar10,1);
            *(int32_t *)(lVar5 + 0x80) = 0;
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
/**
 * 处理浮点坐标的边界框显示
 * @param offset_x X坐标偏移
 * @param offset_y Y坐标偏移
 * @param offset_z Z坐标偏移
 * @param offset_w W坐标偏移
 */
void process_float_coordinate_bounding_box(float offset_x, float offset_y, float offset_z, float offset_w)
{
    int *piVar1;
    longlong lVar2;
    int32_t uVar3;
    int32_t uVar4;
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
    
    // 计算偏移后的坐标
    float result_x = *(float *)(unaff_RBX + 0x230) - offset_x;
    float result_z = *(float *)(unaff_RBX + 0x22c) + offset_x;
    float result_y = *(float *)(unaff_RBX + 0x234) + offset_x;
    float adjusted_x = *(float *)(unaff_RBX + 0x234) - offset_x;
    
    // 检查边界框是否有效
    bool is_valid = true;
    if ((((result_x < offset_w) || (adjusted_x < offset_z)) || (offset_y < result_z)) ||
        (*(float *)(unaff_RBX + 0x234) <= result_y && result_y != *(float *)(unaff_RBX + 0x234))) {
        is_valid = false;
    }
    
    if (!is_valid) {
        FUN_180291b40(*(uint64_t *)(unaff_RBX + 0x2e8),CONCAT44(adjusted_x,result_x),CONCAT44(result_y,result_z),0);
    }
    
    // 设置边界框颜色
    longlong render_manager = global_render_manager;
    int32_t color_g = *(int32_t *)(global_render_manager + 0x19ac);
    int32_t color_b = *(int32_t *)(global_render_manager + 0x19b0);
    float color_a = *(float *)(global_render_manager + 0x19b4);
    
    color_data bbox_color;
    bbox_color.r = *(int32_t *)(global_render_manager + 0x19a8);
    bbox_color.g = color_g;
    bbox_color.b = color_b;
    bbox_color.a = color_a;
    bbox_color.a = color_a * *(float *)(render_manager + 0x1628);
    
    uint render_flags = func_0x000180121e20(&bbox_color);
    
    // 计算渲染位置
    float render_z = *(float *)(unaff_RBX + 0x22c) + 3.0;
    float render_w = *(float *)(unaff_RBX + 0x230) + 3.0;
    float render_y = *(float *)(unaff_RBX + 0x234) - 3.0;
    float render_x = result_x + *(float *)(unaff_RBX + 0x228);
    
    if ((render_flags & 0xff000000) != 0) {
        FUN_180293e80(*(uint64_t *)(unaff_RBX + 0x2e8),&render_x,&render_z,render_flags);
    }
    
    if (!is_valid) {
        int *counter = (int *)(*(longlong *)(unaff_RBX + 0x2e8) + 0x60);
        *counter = *counter + -1;
        FUN_180291950();
    }
    
    // 处理高亮模式
    render_manager = global_render_manager;
    if ((unaff_RDI & 2) != 0) {
        longlong render_data = *(longlong *)(unaff_RBX + 0x2e8);
        
        color_g = *(int32_t *)(global_render_manager + 0x19ac);
        color_b = *(int32_t *)(global_render_manager + 0x19b0);
        color_a = *(float *)(global_render_manager + 0x19b4);
        
        bbox_color.r = *(int32_t *)(global_render_manager + 0x19a8);
        bbox_color.g = color_g;
        bbox_color.b = color_b;
        bbox_color.a = color_a;
        bbox_color.a = color_a * *(float *)(render_manager + 0x1628);
        
        render_flags = func_0x000180121e20(&bbox_color);
        if ((render_flags & 0xff000000) != 0) {
            if ((*(byte *)(render_data + 0x30) & 1) == 0) {
                result_z = result_z - 0.49;
                result_y = result_y - 0.49;
            }
            else {
                result_z = result_z - 0.5;
                result_y = result_y - 0.5;
            }
            
            *(float *)(unaff_RBP + 0x77) = result_z;
            *(float *)(unaff_RBP + 0x7b) = result_y;
            *(float *)(unaff_RBP + 0x7f) = result_x + 0.5;
            *(float *)(unaff_RBP + 0x83) = adjusted_x + 0.5;
            
            FUN_1802939e0(render_data,unaff_RBP + 0x7f,unaff_RBP + 0x77);
            FUN_1802923e0(render_data,*(uint64_t *)(render_data + 0x88),*(int32_t *)(render_data + 0x80),render_flags,1);
            *(int32_t *)(render_data + 0x80) = 0;
        }
    }
    return;
}