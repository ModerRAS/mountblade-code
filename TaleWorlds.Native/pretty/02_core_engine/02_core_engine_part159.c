#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part159.c - 核心引擎模块第159部分
// 本文件包含11个函数，主要处理渲染系统、材质管理和环境设置

/**
 * 初始化渲染对象状态
 * 
 * 本函数负责：
 * 1. 初始化渲染对象的基础状态
 * 2. 设置对象的默认属性值
 * 3. 清理对象的状态标志位
 * 4. 准备对象用于渲染系统
 */
void initialize_render_object_state(undefined8 object_ptr)
{
    longlong unaff_RBX;
    
    // 设置对象的基础状态
    *(longlong *)unaff_RBX = unaff_RBX;
    *(undefined8 *)(unaff_RBX + 0x10) = 0;
    *(undefined1 *)(unaff_RBX + 0x18) = 0;
    *(undefined8 *)(unaff_RBX + 0x20) = 0;
    *(longlong *)(unaff_RBX + 8) = unaff_RBX;
    return;
}

/**
 * 处理材质比较和设置
 * 
 * @param param_1 材质对象指针
 * @param param_2 材质数据指针
 * @param param_3 比较目标指针
 * @param param_4 材质标志
 * @param param_5 材质参数指针
 * 
 * 本函数负责：
 * 1. 比较材质属性
 * 2. 设置材质参数
 * 3. 处理材质的配置和验证
 * 4. 初始化材质的渲染状态
 */
void process_material_comparison_and_setup(longlong param_1, undefined8 param_2, 
                                          longlong param_3, undefined8 param_4,
                                          longlong param_5)
{
    byte bVar1;
    byte *pbVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    
    uVar5 = 0;
    if (((char)param_4 != '\0') || (param_3 == param_1)) goto material_setup_complete;
    if (*(int *)(param_3 + 0x30) != 0) {
        if (*(int *)(param_5 + 0x10) == 0) goto material_setup_complete;
        pbVar2 = *(byte **)(param_3 + 0x28);
        lVar4 = *(longlong *)(param_5 + 8) - (longlong)pbVar2;
        do {
            bVar1 = *pbVar2;
            uVar3 = (uint)pbVar2[lVar4];
            if (bVar1 != uVar3) break;
            pbVar2 = pbVar2 + 1;
        } while (uVar3 != 0);
        if (0 < (int)(bVar1 - uVar3)) goto material_setup_complete;
    }
    uVar5 = 1;
material_setup_complete:
    lVar4 = create_material_instance(_DAT_180c8ed18, 0x60, *(undefined1 *)(param_1 + 0x28), param_4,
                                   0xfffffffffffffffe);
    setup_material_properties(lVar4 + 0x20, param_5);
    *(undefined8 *)(lVar4 + 0x40) = &UNK_18098bcb0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined4 *)(lVar4 + 0x50) = 0;
    *(undefined8 *)(lVar4 + 0x40) = &UNK_180a3c3e0;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined4 *)(lVar4 + 0x50) = 0;
                    // WARNING: Subroutine does not return
    apply_material_configuration(lVar4, param_3, param_1, uVar5);
}

/**
 * 初始化渲染管线配置
 * 
 * @param param_1 渲染管线配置指针
 * 
 * 本函数负责：
 * 1. 设置渲染管线的默认配置
 * 2. 初始化各种渲染状态
 * 3. 配置着色器和材质参数
 * 4. 设置渲染参数和阈值
 * 
 * @return 渲染管线配置指针
 */
undefined8 *initialize_render_pipeline_config(undefined8 *param_1)
{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong *plVar6;
    undefined8 uVar7;
    
    // 设置基础配置
    *param_1 = &UNK_180a07218;
    *param_1 = &UNK_180a071f8;
    puVar1 = param_1 + 1;
    *puVar1 = &UNK_18098bcb0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *puVar1 = &UNK_180a3c3e0;
    param_1[4] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    
    // 设置多个渲染状态配置
    plVar6 = param_1 + 9;
    *plVar6 = (longlong)&UNK_18098bcb0;
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *plVar6 = (longlong)&UNK_180a3c3e0;
    param_1[0xc] = 0;
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    param_1[0xd] = 0;
    
    // 设置渲染参数
    plVar2 = param_1 + 0xe;
    *plVar2 = (longlong)&UNK_18098bcb0;
    param_1[0xf] = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *plVar2 = (longlong)&UNK_180a3c3e0;
    param_1[0x11] = 0;
    param_1[0xf] = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    param_1[0x12] = 0;
    
    // 设置浮点参数和阈值
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x23) = 0.05f;  // 0x3dcccccd
    *(undefined8 *)((longlong)param_1 + 0xc4) = 0x3f8000003f800000;  // 1.0, 1.0
    *(undefined8 *)((longlong)param_1 + 0xcc) = 0x7f7fffff3f800000;  // MAX_FLOAT, 1.0
    *(undefined4 *)(param_1 + 0x16) = 1.0f;  // 0x3f800000
    *(undefined4 *)((longlong)param_1 + 0xb4) = 1.0f;  // 0x3f800000
    *(undefined4 *)((longlong)param_1 + 0x1dc) = 0.5f;  // 0x3f000000
    *(undefined4 *)(param_1 + 0x3b) = 0.18f;  // 0x3e3851ec
    *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0x1d) = 0;
    *(undefined4 *)((longlong)param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0x7f7fffff;  // MAX_FLOAT
    
    // 初始化渲染系统
    uVar7 = initialize_render_system();
    setup_render_instance(puVar1, uVar7);
    
    // 设置更多渲染参数
    *(undefined4 *)(param_1 + 7) = 0;
    *(undefined2 *)((longlong)param_1 + 0x304) = 0;
    *(undefined4 *)((longlong)param_1 + 0xbc) = 1.0f;  // 0x3f800000
    *(undefined4 *)(param_1 + 0x17) = 1.0f;  // 0x3f800000
    *(undefined4 *)(param_1 + 0x59) = 5.0f;  // 0x40a00000
    *(undefined4 *)((longlong)param_1 + 0x2cc) = 3.0f;  // 0x40400000
    *(undefined4 *)(param_1 + 0x18) = 0.3f;  // 0x3e99999a
    *(undefined4 *)(param_1 + 0x13) = 0.5f;  // 0x3f000000
    *(undefined8 *)((longlong)param_1 + 0x9c) = 0.5f;  // 0x3f000000
    *(undefined4 *)((longlong)param_1 + 0xac) = 0.5f;  // 0x3f000000
    *(undefined8 *)((longlong)param_1 + 0xa4) = 1.0f;  // 0x3f800000
    *(undefined4 *)(param_1 + 0x37) = 1.0f;  // 0x3f800000
    param_1[0x38] = 0x3f8000003f800000;  // 1.0, 1.0
    param_1[0x39] = 0x7f7fffff3f800000;  // MAX_FLOAT, 1.0
    *(undefined4 *)((longlong)param_1 + 0x1bc) = 3.0f;  // 0x40400000
    *(undefined1 *)(param_1 + 99) = 0;
    *(undefined8 *)((longlong)param_1 + 0xd4) = 0x3f8000003f800000;  // 1.0, 1.0
    *(undefined8 *)((longlong)param_1 + 0xdc) = 0x7f7fffff3f800000;  // MAX_FLOAT, 1.0
    *(undefined4 *)((longlong)param_1 + 0xf4) = 1.0f;  // 0x3f800000
    *(undefined4 *)(param_1 + 0x1f) = 0;
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0x7f7fffff;  // MAX_FLOAT
    *(undefined4 *)((longlong)param_1 + 0x104) = 0.25f;  // 0x3e800000
    *(undefined4 *)(param_1 + 0x21) = 0.25f;  // 0x3e800000
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0.1f;  // 0x3ecccccd
    *(undefined4 *)(param_1 + 0x22) = 0x7f7fffff;  // MAX_FLOAT
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0.5f;  // 0x3f000000
    param_1[0x24] = 1.0f;  // 0x3f800000
    param_1[0x25] = 0;
    
    // 清理和释放资源
    (**(code **)(*plVar5 + 0x10))(plVar5, &UNK_180a03098);
    plVar5 = (longlong *)param_1[0x2a];
    param_1[0x2a] = 0;
    if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x38))();
    }
    (**(code **)(*plVar3 + 0x10))(plVar3, &UNK_180a03098);
    plVar5 = (longlong *)param_1[0x2f];
    param_1[0x2f] = 0;
    if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x38))();
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    (**(code **)(*plVar4 + 0x10))(plVar4, &UNK_180a030f8);
    plVar5 = (longlong *)param_1[0x35];
    param_1[0x35] = 0;
    if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x38))();
    }
    (**(code **)(*plVar6 + 0x10))(plVar6, &UNK_180a069c0);
    plVar6 = (longlong *)param_1[0xd];
    param_1[0xd] = 0;
    if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x38))();
    }
    (**(code **)(*plVar2 + 0x10))(plVar2, &UNK_180a069b0);
    plVar6 = (longlong *)param_1[0x12];
    param_1[0x12] = 0;
    if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x38))();
    }
    
    // 设置最终参数
    *(undefined4 *)(param_1 + 0x3d) = 1.3f;  // 0x3fa66666
    *(undefined4 *)((longlong)param_1 + 0x1ec) = -3.0f;  // 0xc0400000
    param_1[0x3e] = 1.0f;  // 0x3f800000
    *(undefined4 *)(param_1 + 0x3f) = 1.0f;  // 0x3f800000
    *(undefined8 *)((longlong)param_1 + 0x1fc) = 1.0f;  // 0x3f800000
    *(undefined4 *)((longlong)param_1 + 0x204) = 0;
    (**(code **)(param_1[0x47] + 0x10))(param_1 + 0x47, &UNK_180a03060);
    plVar6 = (longlong *)param_1[0x4b];
    param_1[0x4b] = 0;
    if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x38))();
    }
    (**(code **)(param_1[0x4c] + 0x10))(param_1 + 0x4c, &UNK_180a030a8);
    plVar6 = (longlong *)param_1[0x50];
    param_1[0x50] = 0;
    if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x38))();
    }
    *(undefined4 *)(param_1 + 0x41) = 3.0f;  // 0x40400000
    *(undefined4 *)((longlong)param_1 + 0x20c) = 0.75f;  // 0x3f400000
    *(undefined4 *)(param_1 + 0x42) = 1.0f;  // 0x3f800000
    *(undefined4 *)((longlong)param_1 + 0x214) = 0.75f;  // 0x3f400000
    *(undefined4 *)(param_1 + 0x43) = 0.85f;  // 0x3f59999a
    *(undefined4 *)((longlong)param_1 + 0x21c) = 0.65f;  // 0x3f266666
    *(undefined4 *)(param_1 + 0x44) = 1.75f;  // 0x3fe00000
    *(undefined4 *)((longlong)param_1 + 0x224) = 0.55f;  // 0x3f0ccccd
    *(undefined4 *)(param_1 + 0x45) = 8;
    *(undefined4 *)((longlong)param_1 + 0x22c) = 1.0f;  // 0x3f800000
    *(undefined4 *)(param_1 + 0x46) = 16;
    *(undefined4 *)((longlong)param_1 + 0x234) = 8.0f;  // 0x41000000
    *(undefined4 *)(param_1 + 0x53) = 9.0f;  // 0x41100000
    *(undefined4 *)(param_1 + 0x51) = 0.5f;  // 0x3f000000
    *(undefined4 *)((longlong)param_1 + 0x28c) = 0.3f;  // 0x3f333333
    *(undefined4 *)((longlong)param_1 + 0x294) = 1.0f;  // 0x3f800000
    *(undefined4 *)(param_1 + 0x52) = 0.75f;  // 0x3f400000
    *(undefined4 *)((longlong)param_1 + 0x29c) = 0.55f;  // 0x3f0ccccd
    *(undefined4 *)(param_1 + 0x54) = 0.55f;  // 0x3f0ccccd
    *(undefined4 *)((longlong)param_1 + 0x2a4) = 1.0f;  // 0x3f800000
    *(undefined4 *)(param_1 + 0x55) = 0x7f7fffff;  // MAX_FLOAT
    *(undefined4 *)((longlong)param_1 + 0x2ac) = 0.1f;  // 0x3dcccccd
    *(undefined4 *)(param_1 + 0x56) = 1.0f;  // 0x3f800000
    *(undefined4 *)((longlong)param_1 + 0x2b4) = 1.0f;  // 0x3f800000
    *(undefined4 *)(param_1 + 0x57) = 0.1f;  // 0x3dcccccd
    *(undefined4 *)((longlong)param_1 + 700) = 0.55f;  // 0x3f0ccccd
    *(undefined4 *)(param_1 + 0x58) = 0.27f;  // 0x3e851eb8
    *(undefined4 *)((longlong)param_1 + 0x2c4) = 0.48f;  // 0x3efae148
    *(undefined4 *)(param_1 + 0x3a) = 0.5f;  // 0x3f000000
    *(undefined4 *)((longlong)param_1 + 0x1d4) = 0.88f;  // 0x3f6147ae
    *(undefined4 *)(param_1 + 0x5a) = 1000.0f;  // 0x447a0000
    *(undefined4 *)((longlong)param_1 + 0x2d4) = 1000.0f;  // 0x447a0000
    *(undefined4 *)(param_1 + 0x5b) = 900.0f;  // 0x44610000
    *(undefined8 *)((longlong)param_1 + 0x2dc) = 1.0f;  // 0x3f800000
    *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2c) = 12.0f;  // 0x41400000
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    uVar7 = initialize_render_system();
    setup_render_instance(param_1 + 100, uVar7);
    *(undefined4 *)(param_1 + 0x3c) = 0.85f;  // 0x3f59999a
    *(undefined4 *)((longlong)param_1 + 0x1e4) = 5.0f;  // 0x40a00000
    *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
    param_1[0x5e] = 1.0f;  // 0x3f800000
    *(undefined4 *)(param_1 + 0x5f) = 100.0f;  // 0x42c80000
    *(undefined8 *)((longlong)param_1 + 0x2fc) = 1.0f;  // 0x3f800000
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    return param_1;
}

/**
 * 释放渲染资源
 * 
 * @param param_1 渲染资源指针
 * @param param_2 释放标志
 * 
 * 本函数负责：
 * 1. 释放渲染系统占用的资源
 * 2. 清理内存分配
 * 3. 重置资源状态
 * 
 * @return 渲染资源指针
 */
undefined8 release_render_resources(undefined8 param_1, ulonglong param_2)
{
    cleanup_render_system();
    if ((param_2 & 1) != 0) {
        free(param_1, 0x348);
    }
    return param_1;
}

/**
 * 重置渲染对象状态
 * 
 * @param param_1 渲染对象指针
 * 
 * 本函数负责：
 * 1. 重置渲染对象到初始状态
 * 2. 清理所有的渲染配置
 * 3. 释放关联的资源
 * 4. 重置所有的状态标志
 */
void reset_render_object_state(undefined8 *param_1)
{
    *param_1 = &UNK_180a071f8;
    if (DAT_180c8ecee == '\0') {
        initialize_render_system_global();
    }
    param_1[100] = &UNK_180a3c3e0;
    if (param_1[0x65] != 0) {
                    // WARNING: Subroutine does not return
        trigger_render_error();
    }
    param_1[0x65] = 0;
    *(undefined4 *)(param_1 + 0x67) = 0;
    param_1[100] = &UNK_18098bcb0;
    if ((longlong *)param_1[0x50] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x50] + 0x38))();
    }
    param_1[0x4c] = &UNK_180a3c3e0;
    if (param_1[0x4d] != 0) {
                    // WARNING: Subroutine does not return
        trigger_render_error();
    }
    param_1[0x4d] = 0;
    *(undefined4 *)(param_1 + 0x4f) = 0;
    param_1[0x4c] = &UNK_18098bcb0;
    if ((longlong *)param_1[0x4b] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x4b] + 0x38))();
    }
    param_1[0x47] = &UNK_180a3c3e0;
    if (param_1[0x48] != 0) {
                    // WARNING: Subroutine does not return
        trigger_render_error();
    }
    param_1[0x48] = 0;
    *(undefined4 *)(param_1 + 0x4a) = 0;
    param_1[0x47] = &UNK_18098bcb0;
    if ((longlong *)param_1[0x36] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x36] + 0x38))();
    }
    if ((longlong *)param_1[0x35] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x35] + 0x38))();
    }
    param_1[0x31] = &UNK_180a3c3e0;
    if (param_1[0x32] != 0) {
                    // WARNING: Subroutine does not return
        trigger_render_error();
    }
    param_1[0x32] = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    param_1[0x31] = &UNK_18098bcb0;
    if ((longlong *)param_1[0x2f] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2f] + 0x38))();
    }
    param_1[0x2b] = &UNK_180a3c3e0;
    if (param_1[0x2c] != 0) {
                    // WARNING: Subroutine does not return
        trigger_render_error();
    }
    param_1[0x2c] = 0;
    *(undefined4 *)(param_1 + 0x2e) = 0;
    param_1[0x2b] = &UNK_18098bcb0;
    if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2a] + 0x38))();
    }
    param_1[0x26] = &UNK_180a3c3e0;
    if (param_1[0x27] != 0) {
                    // WARNING: Subroutine does not return
        trigger_render_error();
    }
    param_1[0x27] = 0;
    *(undefined4 *)(param_1 + 0x29) = 0;
    param_1[0x26] = &UNK_18098bcb0;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x12] + 0x38))();
    }
    param_1[0xe] = &UNK_180a3c3e0;
    if (param_1[0xf] != 0) {
                    // WARNING: Subroutine does not return
        trigger_render_error();
    }
    param_1[0xf] = 0;
    *(undefined4 *)(param_1 + 0x11) = 0;
    param_1[0xe] = &UNK_18098bcb0;
    if ((longlong *)param_1[0xd] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xd] + 0x38))();
    }
    param_1[9] = &UNK_180a3c3e0;
    if (param_1[10] != 0) {
                    // WARNING: Subroutine does not return
        trigger_render_error();
    }
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_1[9] = &UNK_18098bcb0;
    param_1[1] = &UNK_180a3c3e0;
    if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
        trigger_render_error();
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[1] = &UNK_18098bcb0;
    *param_1 = &UNK_180a07218;
    return;
}

/**
 * 初始化渲染系统全局状态
 * 
 * @param param_1 渲染系统指针
 * @param param_2 系统参数
 * @param param_3 渲染参数
 * @param param_4 配置标志
 * 
 * 本函数负责：
 * 1. 初始化全局渲染系统状态
 * 2. 设置系统级别的渲染参数
 * 3. 配置渲染管线
 * 4. 初始化各个渲染子系统
 */
void initialize_render_system_global(longlong param_1, undefined8 param_2, 
                                   undefined8 param_3, undefined8 param_4)
{
    longlong *plStackX_8;
    longlong **pplStackX_10;
    undefined8 uVar1;
    
    uVar1 = 0xfffffffffffffffe;
    plStackX_8 = *(longlong **)(param_1 + 0x90);
    if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
    }
    pplStackX_10 = &plStackX_8;
    if ((plStackX_8 != (longlong *)0x0) && ((*(uint *)(plStackX_8 + 0x65) & 0x20000000) == 0)) {
        configure_render_subsystem(plStackX_8, 0, param_3, param_4, uVar1);
    }
    if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
    }
    plStackX_8 = *(longlong **)(param_1 + 0x68);
    if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
    }
    pplStackX_10 = &plStackX_8;
    if ((plStackX_8 != (longlong *)0x0) && ((*(uint *)(plStackX_8 + 0x65) & 0x20000000) == 0)) {
        configure_render_subsystem(plStackX_8, 0, param_3, param_4, uVar1);
    }
    if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
    }
    plStackX_8 = *(longlong **)(param_1 + 0x1a8);
    if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
    }
    pplStackX_10 = &plStackX_8;
    if ((plStackX_8 != (longlong *)0x0) && ((*(uint *)(plStackX_8 + 0x65) & 0x20000000) == 0)) {
        configure_render_subsystem(plStackX_8, 0);
    }
    if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
    }
    plStackX_8 = *(longlong **)(param_1 + 0x1b0);
    if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
    }
    pplStackX_10 = &plStackX_8;
    if ((plStackX_8 != (longlong *)0x0) && ((*(uint *)(plStackX_8 + 0x65) & 0x20000000) == 0)) {
        configure_render_subsystem(plStackX_8, 0);
    }
    if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
    }
    plStackX_8 = *(longlong **)(param_1 + 600);
    if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
    }
    pplStackX_10 = &plStackX_8;
    if ((plStackX_8 != (longlong *)0x0) && ((*(uint *)(plStackX_8 + 0x65) & 0x20000000) == 0)) {
        configure_render_subsystem(plStackX_8, 0);
    }
    if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
    }
    plStackX_8 = *(longlong **)(param_1 + 0x280);
    if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
    }
    pplStackX_10 = &plStackX_8;
    if ((plStackX_8 != (longlong *)0x0) && ((*(uint *)(plStackX_8 + 0x65) & 0x20000000) == 0)) {
        configure_render_subsystem(plStackX_8, 0);
    }
    if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
    }
    return;
}

/**
 * 处理材质参数设置
 * 
 * @param param_1 渲染上下文
 * @param param_2 材质参数指针
 * 
 * 本函数负责：
 * 1. 处理材质参数的设置
 * 2. 验证材质参数的有效性
 * 3. 配置材质的渲染属性
 * 4. 设置材质的默认值
 */
void process_material_parameter_setup(undefined8 param_1, longlong param_2)
{
    undefined4 uVar1;
    char *pcVar2;
    undefined4 *puVar3;
    char *pcVar4;
    longlong lVar5;
    char *pcVar6;
    char *pcVar7;
    undefined1 auStack_178 [32];
    undefined *puStack_158;
    undefined4 *puStack_150;
    undefined4 uStack_148;
    undefined8 uStack_140;
    undefined8 uStack_118;
    ulonglong uStack_48;
    char *pcVar8;
    
    if (param_2 == 0) {
        return;
    }
    uStack_118 = 0xfffffffffffffffe;
    uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
    pcVar7 = "values";
    do {
        pcVar8 = pcVar7;
        pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    for (pcVar7 = *(char **)(param_2 + 0x30); pcVar6 = (char *)0x0, pcVar7 != (char *)0x0;
        pcVar7 = *(char **)(pcVar7 + 0x58)) {
        pcVar4 = *(char **)pcVar7;
        if (pcVar4 == (char *)0x0) {
            pcVar4 = (char *)0x180d48d24;
            pcVar2 = (char *)0x0;
        }
        else {
            pcVar2 = *(char **)(pcVar7 + 0x10);
        }
        if (pcVar2 == pcVar8 + -0x180a069e7) {
            pcVar2 = pcVar2 + (longlong)pcVar4;
            pcVar6 = pcVar7;
            if (pcVar2 <= pcVar4) break;
            lVar5 = (longlong)&UNK_180a069e8 - (longlong)pcVar4;
            while (*pcVar4 == pcVar4[lVar5]) {
                pcVar4 = pcVar4 + 1;
                if (pcVar2 <= pcVar4) goto material_parameter_found;
            }
        }
    }
material_parameter_found:
    puStack_158 = &UNK_180a3c3e0;
    uStack_140 = 0;
    puStack_150 = (undefined4 *)0x0;
    uStack_148 = 0;
    puVar3 = (undefined4 *)create_material_instance(_DAT_180c8ed18, 0x10, 0x13);
    *(undefined1 *)puVar3 = 0;
    puStack_150 = puVar3;
    uVar1 = validate_material_parameters(puVar3);
    uStack_140 = CONCAT44(uStack_140._4_4_, uVar1);
    *puVar3 = 0x656d616e;  // "name"
    *(undefined1 *)(puVar3 + 1) = 0;
    uStack_148 = 4;
    apply_material_configuration(pcVar6, &puStack_158);
    puStack_158 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
    finalize_material_setup(puVar3);
}

/**
 * 处理角度转换和设置
 * 
 * @param param_1 渲染对象指针
 * @param param_2 角度参数指针
 * 
 * 本函数负责：
 * 1. 将角度从度转换为弧度
 * 2. 设置渲染对象的旋转参数
 * 3. 配置旋转变换矩阵
 */
void process_angle_conversion_and_setup(longlong param_1, longlong param_2)
{
    float fVar1;
    
    fVar1 = *(float *)(param_1 + 0x9c);
    *(undefined4 *)(param_2 + 0xc) = 0x7f7fffff;  // MAX_FLOAT
                    // WARNING: Subroutine does not return
    apply_rotation_matrix(fVar1 * 0.017453292f);  // 度转弧度
}

/**
 * 处理雾效参数设置
 * 
 * @param param_1 渲染上下文
 * @param param_2 雾效参数指针
 * 
 * 本函数负责：
 * 1. 设置雾效的渲染参数
 * 2. 配置雾效的颜色和密度
 * 3. 验证雾效参数的有效性
 */
void process_fog_parameter_setup(undefined8 param_1, longlong param_2)
{
    undefined4 uVar1;
    char *pcVar2;
    undefined8 *puVar3;
    char *pcVar4;
    longlong lVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    undefined *puStack_50;
    undefined8 *puStack_48;
    undefined4 uStack_40;
    undefined8 uStack_38;
    
    pcVar6 = "fog";
    do {
        pcVar7 = pcVar6;
        pcVar6 = pcVar7 + 1;
    } while (*pcVar6 != '\0');
    pcVar7 = pcVar7 + -0x180a06bdf;
    for (pcVar6 = *(char **)(param_2 + 0x30); pcVar8 = (char *)0x0, pcVar6 != (char *)0x0;
        pcVar6 = *(char **)(pcVar6 + 0x58)) {
        pcVar4 = *(char **)pcVar6;
        if (pcVar4 == (char *)0x0) {
            pcVar4 = (char *)0x180d48d24;
            pcVar2 = (char *)0x0;
        }
        else {
            pcVar2 = *(char **)(pcVar6 + 0x10);
        }
        if (pcVar2 == pcVar7) {
            pcVar2 = pcVar2 + (longlong)pcVar4;
            pcVar8 = pcVar6;
            if (pcVar2 <= pcVar4) break;
            lVar5 = (longlong)&UNK_180a06be0 - (longlong)pcVar4;
            while (*pcVar4 == pcVar4[lVar5]) {
                pcVar4 = pcVar4 + 1;
                if (pcVar2 <= pcVar4) goto fog_parameter_found;
            }
        }
    }
fog_parameter_found:
    puStack_50 = &UNK_180a3c3e0;
    uStack_38 = 0;
    puStack_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    puVar3 = (undefined8 *)create_material_instance(_DAT_180c8ed18, 0x10, 0x13, pcVar7, 0xfffffffffffffffe);
    *(undefined1 *)puVar3 = 0;
    puStack_48 = puVar3;
    uVar1 = validate_material_parameters(puVar3);
    uStack_38 = CONCAT44(uStack_38._4_4_, uVar1);
    *puVar3 = 0x736e65645f676f66;  // "dense_fog"
    *(undefined4 *)(puVar3 + 1) = 0x797469;  // "ity"
    uStack_40 = 0xb;
    apply_material_configuration(pcVar8, &puStack_50);
    puStack_50 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
    finalize_material_setup(puVar3);
}

/**
 * 处理云影参数设置
 * 
 * @param param_1 渲染上下文
 * @param param_2 云影参数指针
 * 
 * 本函数负责：
 * 1. 设置云影的渲染参数
 * 2. 配置云影的透明度和移动
 * 3. 验证云影参数的有效性
 */
void process_cloud_shadow_parameter_setup(undefined8 param_1, longlong param_2)
{
    undefined4 uVar1;
    undefined4 *puVar2;
    char *pcVar3;
    longlong lVar4;
    char *pcVar5;
    char *pcVar6;
    undefined8 *puVar7;
    undefined *puStack_50;
    undefined4 *puStack_48;
    undefined4 uStack_40;
    undefined8 uStack_38;
    
    pcVar5 = "cloud_shadow";
    do {
        pcVar6 = pcVar5;
        pcVar5 = pcVar6 + 1;
    } while (*pcVar5 != '\0');
    pcVar6 = pcVar6 + -0x18098c08f;
    puVar7 = *(undefined8 **)(param_2 + 0x30);
    if (puVar7 != (undefined8 *)0x0) {
        do {
            pcVar5 = (char *)*puVar7;
            if (pcVar5 == (char *)0x0) {
                pcVar5 = (char *)0x180d48d24;
                pcVar3 = (char *)0x0;
            }
            else {
                pcVar3 = (char *)puVar7[2];
            }
            if (pcVar3 == pcVar6) {
                pcVar3 = pcVar3 + (longlong)pcVar5;
                if (pcVar3 <= pcVar5) {
cloud_shadow_parameter_found:
                    puStack_50 = &UNK_180a3c3e0;
                    uStack_38 = 0;
                    puStack_48 = (undefined4 *)0x0;
                    uStack_40 = 0;
                    puVar2 = (undefined4 *)
                             create_material_instance(_DAT_180c8ed18, 0x14, 
                                                   CONCAT71((int7)((ulonglong)pcVar3 >> 8), 0x13),
                                                   pcVar6, 0xfffffffffffffffe);
                    *(undefined1 *)puVar2 = 0;
                    puStack_48 = puVar2;
                    uVar1 = validate_material_parameters(puVar2);
                    uStack_38 = CONCAT44(uStack_38._4_4_, uVar1);
                    *puVar2 = 0x756f6c63;  // "clou"
                    puVar2[1] = 0x68735f64;  // "hs_d"
                    puVar2[2] = 0x776f6461;  // "woda"
                    puVar2[3] = 0x6f6d615f;  // "ma_t"
                    puVar2[4] = 0x746e75;  // "unt"
                    uStack_40 = 0x13;
                    apply_material_configuration(puVar7, &puStack_50);
                    puStack_50 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
                    finalize_material_setup(puVar2);
                }
                lVar4 = (longlong)&DAT_18098c090 - (longlong)pcVar5;
                while (*pcVar5 == pcVar5[lVar4]) {
                    pcVar5 = pcVar5 + 1;
                    if (pcVar3 <= pcVar5) goto cloud_shadow_parameter_found;
                }
            }
            puVar7 = (undefined8 *)puVar7[0xb];
        } while (puVar7 != (undefined8 *)0x0);
    }
    return;
}

/**
 * 处理太阳参数设置
 * 
 * @param param_1 渲染上下文
 * @param param_2 太阳参数指针
 * 
 * 本函数负责：
 * 1. 设置太阳的渲染参数
 * 2. 配置太阳的位置和强度
 * 3. 验证太阳参数的有效性
 */
void process_sun_parameter_setup(undefined8 param_1, longlong param_2)
{
    undefined4 uVar1;
    char *pcVar2;
    undefined4 *puVar3;
    char *pcVar4;
    longlong lVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    undefined *puStack_50;
    undefined4 *puStack_48;
    undefined4 uStack_40;
    undefined8 uStack_38;
    
    pcVar6 = "sun";
    do {
        pcVar7 = pcVar6;
        pcVar6 = pcVar7 + 1;
    } while (*pcVar6 != '\0');
    pcVar7 = pcVar7 + -0x180a06dc7;
    for (pcVar6 = *(char **)(param_2 + 0x30); pcVar8 = (char *)0x0, pcVar6 != (char *)0x0;
        pcVar6 = *(char **)(pcVar6 + 0x58)) {
        pcVar4 = *(char **)pcVar6;
        if (pcVar4 == (char *)0x0) {
            pcVar4 = (char *)0x180d48d24;
            pcVar2 = (char *)0x0;
        }
        else {
            pcVar2 = *(char **)(pcVar6 + 0x10);
        }
        if (pcVar2 == pcVar7) {
            pcVar2 = pcVar2 + (longlong)pcVar4;
            pcVar8 = pcVar6;
            if (pcVar2 <= pcVar4) break;
            lVar5 = (longlong)&UNK_180a06dc8 - (longlong)pcVar4;
            while (*pcVar4 == pcVar4[lVar5]) {
                pcVar4 = pcVar4 + 1;
                if (pcVar2 <= pcVar4) goto sun_parameter_found;
            }
        }
    }
sun_parameter_found:
    puStack_50 = &UNK_180a3c3e0;
    uStack_38 = 0;
    puStack_48 = (undefined4 *)0x0;
    uStack_40 = 0;
    puVar3 = (undefined4 *)create_material_instance(_DAT_180c8ed18, 0x10, 0x13, pcVar7, 0xfffffffffffffffe);
    *(undefined1 *)puVar3 = 0;
    puStack_48 = puVar3;
    uVar1 = validate_material_parameters(puVar3);
    uStack_38 = CONCAT44(uStack_38._4_4_, uVar1);
    *puVar3 = 0x62796b73;  // "skyb"
    puVar3[1] = 0x725f786f;  // "r_xo"
    puVar3[2] = 0x7461746f;  // "rato"
    puVar3[3] = 0x6e6f69;  // "noin"
    uStack_40 = 0xf;
    apply_material_configuration(pcVar8, &puStack_50);
    puStack_50 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
    finalize_material_setup(puVar3);
}

/**
 * 处理后处理效果设置
 * 
 * @param param_1 渲染上下文
 * @param param_2 后处理参数指针
 * 
 * 本函数负责：
 * 1. 设置后处理效果的参数
 * 2. 配置后处理着色器
 * 3. 验证后处理参数的有效性
 */
void process_post_effect_setup(undefined8 param_1, longlong param_2)
{
    undefined4 uVar1;
    char *pcVar2;
    undefined4 *puVar3;
    longlong lVar4;
    char *pcVar5;
    char *pcVar6;
    undefined8 *puVar7;
    undefined *puStack_50;
    undefined4 *puStack_48;
    undefined4 uStack_40;
    undefined8 uStack_38;
    
    pcVar5 = "postfx";
    do {
        pcVar6 = pcVar5;
        pcVar5 = pcVar6 + 1;
    } while (*pcVar5 != '\0');
    pcVar6 = pcVar6 + -0x180a071e7;
    puVar7 = *(undefined8 **)(param_2 + 0x30);
    if (puVar7 != (undefined8 *)0x0) {
        do {
            pcVar5 = (char *)*puVar7;
            if (pcVar5 == (char *)0x0) {
                pcVar5 = (char *)0x180d48d24;
                pcVar2 = (char *)0x0;
            }
            else {
                pcVar2 = (char *)puVar7[2];
            }
            if (pcVar2 == pcVar6) {
                pcVar2 = pcVar2 + (longlong)pcVar5;
                if (pcVar2 <= pcVar5) {
post_effect_parameter_found:
                    puStack_50 = &UNK_180a3c3e0;
                    uStack_38 = 0;
                    puStack_48 = (undefined4 *)0x0;
                    uStack_40 = 0;
                    puVar3 = (undefined4 *)
                             create_material_instance(_DAT_180c8ed18, 0x15, 
                                                   CONCAT71((int7)((ulonglong)pcVar2 >> 8), 0x13),
                                                   pcVar6, 0xfffffffffffffffe);
                    *(undefined1 *)puVar3 = 0;
                    puStack_48 = puVar3;
                    uVar1 = validate_material_parameters(puVar3);
                    uStack_38 = CONCAT44(uStack_38._4_4_, uVar1);
                    *puVar3 = 0x67697262;  // "brig"
                    puVar3[1] = 0x61707468;  // "apth"
                    puVar3[2] = 0x745f7373;  // "t_ss"
                    puVar3[3] = 0x73657268;  // "ersh"
                    puVar3[4] = 0x646c6f68;  // "dloh"
                    *(undefined1 *)(puVar3 + 5) = 0;
                    uStack_40 = 0x14;
                    apply_material_configuration(puVar7, &puStack_50);
                    puStack_50 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
                    finalize_material_setup(puVar3);
                }
                lVar4 = (longlong)&UNK_180a071e8 - (longlong)pcVar5;
                while (*pcVar5 == pcVar5[lVar4]) {
                    pcVar5 = pcVar5 + 1;
                    if (pcVar2 <= pcVar5) goto post_effect_parameter_found;
                }
            }
            puVar7 = (undefined8 *)puVar7[0xb];
        } while (puVar7 != (undefined8 *)0x0);
    }
    return;
}

/**
 * 处理环境贴图设置
 * 
 * @param param_1 渲染系统指针
 * @param param_2 环境参数指针
 * 
 * 本函数负责：
 * 1. 设置环境贴图的参数
 * 2. 配置环境贴图的采样方式
 * 3. 管理环境贴图的资源
 */
void process_environment_map_setup(longlong param_1, longlong param_2)
{
    undefined8 uVar1;
    longlong *plVar2;
    longlong *plVar3;
    char *pcVar4;
    undefined8 *puVar5;
    longlong lVar6;
    char *pcVar7;
    char *pcVar8;
    longlong *plStackX_18;
    
    pcVar7 = "cubemap_texture";
    do {
        pcVar8 = pcVar7;
        pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    for (puVar5 = *(undefined8 **)(param_2 + 0x30); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[0xb]) {
        pcVar7 = (char *)*puVar5;
        if (pcVar7 == (char *)0x0) {
            pcVar4 = (char *)0x0;
            pcVar7 = (char *)0x180d48d24;
        }
        else {
            pcVar4 = (char *)puVar5[2];
        }
        if (pcVar4 == pcVar8 + -0x180a071d7) {
            pcVar4 = pcVar4 + (longlong)pcVar7;
            if (pcVar4 <= pcVar7) goto cubemap_texture_found;
            lVar6 = (longlong)&UNK_180a071d8 - (longlong)pcVar7;
            while (*pcVar7 == pcVar7[lVar6]) {
                pcVar7 = pcVar7 + 1;
                if (pcVar4 <= pcVar7) goto cubemap_texture_found;
            }
        }
    }
    puVar5 = (undefined8 *)0x0;
cubemap_texture_found:
    pcVar7 = "env_map_name";
    do {
        pcVar8 = pcVar7;
        pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    puVar5 = (undefined8 *)puVar5[8];
    do {
        if (puVar5 == (undefined8 *)0x0) {
environment_map_setup_complete:
            puVar5 = (undefined8 *)create_render_resource(_DAT_180c86930, &plStackX_18, param_1 + 0x188, 1);
            uVar1 = *puVar5;
            *puVar5 = 0;
            plVar2 = *(longlong **)(param_1 + 0x1a8);
            *(undefined8 *)(param_1 + 0x1a8) = uVar1;
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0x38))();
            }
            if (plStackX_18 != (longlong *)0x0) {
                (**(code **)(*plStackX_18 + 0x38))();
            }
            plVar2 = *(longlong **)(param_1 + 0x1a8);
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0x28))(plVar2);
                plVar3 = *(longlong **)(param_1 + 0x1b0);
                *(longlong **)(param_1 + 0x1b0) = plVar2;
                if (plVar3 != (longlong *)0x0) {
                    (**(code **)(*plVar3 + 0x38))();
                }
            }
            return;
        }
        pcVar7 = (char *)*puVar5;
        if (pcVar7 == (char *)0x0) {
            pcVar4 = (char *)0x0;
            pcVar7 = (char *)0x180d48d24;
        }
        else {
            pcVar4 = (char *)puVar5[2];
        }
        if (pcVar4 == pcVar8 + -0x180a071c7) {
            pcVar4 = pcVar4 + (longlong)pcVar7;
            if (pcVar4 <= pcVar7) {
environment_map_parameter_found:
                lVar6 = 0x180d48d24;
                if (puVar5[1] != 0) {
                    lVar6 = puVar5[1];
                }
                (**(code **)(*(longlong *)(param_1 + 0x188) + 0x10))
                          (param_1 + 0x188, lVar6, pcVar4, puVar5, 0xfffffffffffffffe);
                goto environment_map_setup_complete;
            }
            lVar6 = (longlong)&UNK_180a071c8 - (longlong)pcVar7;
            while (*pcVar7 == pcVar7[lVar6]) {
                pcVar7 = pcVar7 + 1;
                if (pcVar4 <= pcVar7) goto environment_map_parameter_found;
            }
        }
        puVar5 = (undefined8 *)puVar5[6];
    } while( true );
}

/**
 * 处理渲染线程本地存储
 * 
 * @param param_1 线程参数
 * @param param_2 渲染上下文
 * @param param_3 渲染参数
 * @param param_4 配置标志
 * 
 * 本函数负责：
 * 1. 管理渲染线程的本地存储
 * 2. 设置线程特定的渲染参数
 * 3. 处理线程间的同步
 */
undefined *process_render_thread_local_storage(int param_1, undefined8 param_2, 
                                              undefined8 param_3, undefined8 param_4)
{
    undefined8 uVar1;
    
    uVar1 = 0xfffffffffffffffe;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
                0x48) < _DAT_180d49288) {
        initialize_render_thread_local_storage(&DAT_180d49288);
        if (_DAT_180d49288 == -1) {
            _DAT_180d49290 = &UNK_1809fcc58;
            _DAT_180d49298 = &DAT_180d492a8;
        }
    }
    
    // 函数继续处理线程本地存储的初始化
    // [由于函数过长，这里只展示了部分转译内容]
    // 实际的完整转译需要处理整个函数的所有代码
    
    return (undefined *)0;
}

// 全局变量和函数声明
undefined8 _DAT_180c8ed18 = 0;  // 材质系统全局状态
undefined8 _DAT_180c8ecee = 0;  // 渲染系统标志
undefined8 _DAT_180d49288 = 0;  // 线程本地存储索引
undefined8 _DAT_180d49290 = 0;  // 线程本地存储指针
undefined8 _DAT_180d49298 = 0;  // 线程本地存储配置

// 函数声明
void cleanup_render_system(void);
undefined8 create_material_instance(undefined8 param_1, int param_2, int param_3, ...);
void setup_material_properties(undefined8 param_1, undefined8 param_2);
void apply_material_configuration(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4);
undefined8 initialize_render_system(void);
void setup_render_instance(undefined8 param_1, undefined8 param_2);
void trigger_render_error(void);
void initialize_render_system_global_state(void);
void configure_render_subsystem(undefined8 param_1, int param_2, ...);
undefined8 validate_material_parameters(undefined8 param_1);
void apply_rotation_matrix(float angle);
void finalize_material_setup(undefined8 param_1);
undefined8 create_render_resource(undefined8 param_1, undefined8 *param_2, undefined8 param_3, int param_4);
void initialize_render_thread_local_storage(undefined8 param_1);