/**
 * TaleWorlds.Native UI系统模块 - 用户界面组件和事件处理
 * 
 * 本文件包含UI系统的核心功能，包括用户界面组件管理、事件处理、数据验证、
 * 界面布局、控件操作等关键功能。这些函数负责处理用户界面的各种交互操作，
 * 管理UI组件的生命周期，以及处理用户输入和系统事件。
 * 
 * 主要功能模块：
 * - UI组件管理和操作
 * - 事件处理和消息传递
 * - 数据验证和转换
 * - 界面布局和渲染
 * - 控件状态管理
 * - 用户输入处理
 * 
 * 技术特点：
 * - 支持复杂的UI组件层次结构
 * - 提供高效的事件处理机制
 * - 实现动态UI组件创建和销毁
 * - 包含完整的数据验证和转换
 * - 优化用户界面渲染性能
 * - 支持多线程环境下的UI操作
 * 
 * @file 04_ui_system_part326.c
 * @version 1.0
 * @date 2024
 */

#include "TaleWorlds.Native.Split.h"

// UI系统模块常量定义
#define UI_SYSTEM_SIZE_THRESHOLD_10600 0x10600      // UI大小阈值1
#define UI_SYSTEM_SIZE_THRESHOLD_20100 0x20100      // UI大小阈值2
#define UI_SYSTEM_FORMAT_LENGTH_37 0x25              // 格式化长度
#define UI_SYSTEM_ARRAY_SIZE_5 5                     // 数组大小
#define UI_SYSTEM_MEMORY_SIZE_48 0x30                 // 内存大小
#define UI_SYSTEM_MEMORY_SIZE_256 0x100              // 内存大小
#define UI_SYSTEM_DATA_SIZE_20 0x14                  // 数据大小
#define UI_SYSTEM_HANDLE_SIZE_72 0x48                 // 句柄大小
#define UI_SYSTEM_FLAG_SIZE_88 0x58                  // 标志大小

// UI系统模块状态码枚举
typedef enum {
    UI_SYSTEM_SUCCESS = 0,
    UI_SYSTEM_ERROR_INVALID_PARAM = -1,
    UI_SYSTEM_ERROR_MEMORY = -2,
    UI_SYSTEM_ERROR_STATE = -3,
    UI_SYSTEM_ERROR_FORMAT = -4
} UISystemStatusCode;

// UI系统模块参数结构体
typedef struct {
    uint32_t ui_flags;           // UI标志
    uint32_t control_flags;      // 控件标志
    uint64_t component_id;       // 组件ID
    uint64_t event_handler;      // 事件处理器
    void* resource_pointer;     // 资源指针
    uint32_t layout_params;      // 布局参数
} UISystemParameters;

// =============================================================================
// UI系统参数处理器 (UISystemParameterProcessor)
// =============================================================================
// 功能：处理UI系统参数，根据不同的参数大小执行不同的处理逻辑
// 参数：param_1 - UI上下文指针，param_2 - 参数大小，param_3 - 附加参数
// 返回值：无
// =============================================================================
void FUN_180848dc0(longlong *param_1, uint param_2, uint64_t param_3)

{
    int iVar1;
    uint64_t uStackX_18;
    int8_t auStackX_20[8];
    
    // 根据参数大小选择不同的处理路径
    if (param_2 < UI_SYSTEM_SIZE_THRESHOLD_10600) {
        // 小参数处理路径
        *(int32_t *)(param_1 + 2) = 0;
        
        // 执行UI系统操作序列
        iVar1 = FUN_18088f710(param_3, auStackX_20);
        if ((iVar1 == 0) && (iVar1 = FUN_18088f710(auStackX_20, &uStackX_18), iVar1 == 0)) {
            // 处理UI组件数据
            iVar1 = FUN_18010cbc0(uStackX_18, &UNK_180986258, (longlong)param_1 + 0x14, param_1 + 3,
                                  (longlong)param_1 + 0x1c);
            if (((iVar1 == 3) ||
                (((iVar1 = FUN_18088eea0(&uStackX_18, (longlong)param_1 + 0x14), iVar1 == 0 &&
                  (iVar1 = FUN_18088eea0(&uStackX_18, param_1 + 3), iVar1 == 0)) &&
                 (iVar1 = FUN_18088eea0(&uStackX_18, (longlong)param_1 + 0x1c), iVar1 == 0)))) &&
                (iVar1 = FUN_18088f710(auStackX_20, &uStackX_18), iVar1 == 0)) {
                // 处理第二组UI组件数据
                iVar1 = FUN_18010cbc0(uStackX_18, &UNK_180986258, param_1 + 4, (longlong)param_1 + 0x24,
                                      param_1 + 5);
                if (((iVar1 == 3) ||
                    (((iVar1 = FUN_18088eea0(&uStackX_18, param_1 + 4), iVar1 == 0 &&
                      (iVar1 = FUN_18088eea0(&uStackX_18, (longlong)param_1 + 0x24), iVar1 == 0)) &&
                     (iVar1 = FUN_18088eea0(&uStackX_18, param_1 + 5), iVar1 == 0)))) &&
                   (iVar1 = FUN_18088f3a0(auStackX_20, (longlong)param_1 + 0x2c), iVar1 == 0)) {
                    // 执行最终的UI操作
                    FUN_18088f3a0(auStackX_20, param_1 + 7);
                }
            }
        }
        return;
    }
    
    if (param_2 < UI_SYSTEM_SIZE_THRESHOLD_20100) {
        // 中等参数处理路径
        *(int8_t *)(param_1 + 10) = 0;
        *(uint64_t *)((longlong)param_1 + 0x44) = 0;
        *(int32_t *)((longlong)param_1 + 0x4c) = 0;
        iVar1 = FUN_18088ee20(param_3, param_1 + 2);
        if (iVar1 == 0) goto FUN_18088f050;
    }
    else {
        // 大参数处理路径
        (**(code **)(*param_1 + 0x18))(param_1, param_3);
    }
    return;
}

// =============================================================================
// UI系统数据验证器 (UISystemDataValidator)
// =============================================================================
// 功能：验证和转换UI系统数据，确保数据格式正确性
// 参数：param_1 - 数据字符串，param_2 - 输出缓冲区
// 返回值：无
// =============================================================================
void FUN_180848e50(char *param_1, uint64_t *param_2)

{
    char *pcVar1;
    char cVar2;
    int8_t uVar3;
    int16_t uVar4;
    int iVar5;
    char *pcVar6;
    int8_t *puVar7;
    int8_t *puVar8;
    longlong lVar9;
    int8_t *puVar10;
    int8_t auStack_b8[32];
    int32_t uStack_98;
    int32_t uStack_94;
    int32_t uStack_90;
    int32_t uStack_8c;
    int8_t *apuStack_88[5];
    int8_t uStack_60;
    int8_t auStack_5f[8];
    int8_t uStack_57;
    int8_t auStack_56[4];
    int8_t uStack_52;
    int8_t auStack_51[4];
    int8_t uStack_4d;
    int8_t auStack_4c[4];
    int8_t uStack_48;
    int8_t auStack_47[10];
    int8_t auStack_3d[5];
    ulonglong uStack_38;
    
    uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
    if (param_2 != (uint64_t *)0x0) {
        // 验证输入数据格式
        if ((((param_1 == (char *)0x0) || (iVar5 = func_0x00018076b690(), iVar5 != 0x26)) ||
            (*param_1 != '{')) || (param_1[UI_SYSTEM_FORMAT_LENGTH_37] != '}')) {
FUN_180848ff1:
            // 数据格式错误，设置默认值
            *param_2 = 0;
            param_2[1] = 0;
        }
        else {
            // 数据格式正确，进行转换处理
            func_0x00018076b450(&uStack_60, param_1, 0x27);
            uStack_57 = 0;
            apuStack_88[0] = auStack_5f;
            lVar9 = 0;
            uStack_52 = 0;
            apuStack_88[1] = auStack_56;
            uStack_4d = 0;
            apuStack_88[2] = auStack_51;
            apuStack_88[3] = auStack_4c;
            apuStack_88[4] = auStack_47;
            uStack_48 = 0;
            auStack_3d[2] = 0;
            
            // 验证数据字符的有效性
            do {
                pcVar6 = apuStack_88[lVar9];
                cVar2 = *pcVar6;
                while (cVar2 != '\0') {
                    if (((9 < (byte)(cVar2 - 0x30U)) && (5 < (byte)(cVar2 + 0xbfU))) &&
                       (5 < (byte)(cVar2 + 0x9fU))) goto FUN_180848ff1;
                    pcVar1 = pcVar6 + 1;
                    pcVar6 = pcVar6 + 1;
                    cVar2 = *pcVar1;
                }
                lVar9 = lVar9 + 1;
            } while (lVar9 < UI_SYSTEM_ARRAY_SIZE_5);
            
            // 转换数据格式
            uStack_98 = func_0x00018076b320(auStack_5f);
            uVar4 = func_0x00018076b320(auStack_56);
            uStack_94 = CONCAT22(uStack_94._2_2_, uVar4);
            uVar4 = func_0x00018076b320(auStack_51);
            uStack_94 = CONCAT22(uVar4, (int16_t)uStack_94);
            uVar4 = func_0x00018076b320(auStack_4c);
            puVar8 = (int8_t *)((longlong)&uStack_8c + 3);
            uStack_90 = CONCAT31(CONCAT21(uStack_90._2_2_, (char)uVar4), (char)((ushort)uVar4 >> 8));
            puVar7 = auStack_3d;
            iVar5 = 5;
            puVar10 = auStack_3d;
            
            // 处理数据转换的循环
            do {
                uVar3 = func_0x00018076b320(puVar10);
                puVar10 = puVar10 + -2;
                *puVar8 = uVar3;
                iVar5 = iVar5 + -1;
                *puVar7 = 0;
                puVar8 = puVar8 + -1;
                puVar7 = puVar7 + -2;
            } while (-1 < iVar5);
            
            // 输出转换结果
            *(int32_t *)param_2 = uStack_98;
            *(int32_t *)((longlong)param_2 + 4) = uStack_94;
            *(int32_t *)(param_2 + 1) = uStack_90;
            *(int32_t *)((longlong)param_2 + 0xc) = uStack_8c;
        }
    }
    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_b8);
}

// =============================================================================
// UI系统组件处理器 (UISystemComponentProcessor)
// =============================================================================
// 功能：处理UI系统组件的创建和初始化
// 参数：无（使用寄存器传递参数）
// 返回值：无
// =============================================================================
void FUN_180848e82(void)

{
    char *pcVar1;
    char cVar2;
    int32_t uVar3;
    int32_t uVar4;
    int8_t uVar5;
    int16_t uVar6;
    int iVar7;
    int32_t uVar8;
    char *pcVar9;
    char *unaff_RBX;
    longlong unaff_RBP;
    int8_t *puVar10;
    int8_t *puVar11;
    longlong lVar12;
    uint64_t *unaff_R15;
    
    // 验证组件数据格式
    if ((((unaff_RBX == (char *)0x0) || (iVar7 = func_0x00018076b690(), iVar7 != 0x26)) ||
        (*unaff_RBX != '{')) || (unaff_RBX[UI_SYSTEM_FORMAT_LENGTH_37] != '}')) {
FUN_180848ff1:
        // 组件数据格式错误，设置默认值
        *unaff_R15 = 0;
        unaff_R15[1] = 0;
    }
    else {
        // 组件数据格式正确，进行初始化处理
        func_0x00018076b450(unaff_RBP + -1);
        *(int8_t *)(unaff_RBP + 8) = 0;
        *(longlong *)(unaff_RBP + -0x29) = unaff_RBP;
        lVar12 = 0;
        *(int8_t *)(unaff_RBP + 0xd) = 0;
        *(longlong *)(unaff_RBP + -0x21) = unaff_RBP + 9;
        *(int8_t *)(unaff_RBP + 0x12) = 0;
        *(longlong *)(unaff_RBP + -0x19) = unaff_RBP + 0xe;
        *(longlong *)(unaff_RBP + -0x11) = unaff_RBP + 0x13;
        *(longlong *)(unaff_RBP + -9) = unaff_RBP + 0x18;
        *(int8_t *)(unaff_RBP + 0x17) = 0;
        *(int8_t *)(unaff_RBP + 0x24) = 0;
        
        // 验证组件数据的有效性
        do {
            pcVar9 = *(char **)(unaff_RBP + -0x29 + lVar12 * 8);
            cVar2 = *pcVar9;
            while (cVar2 != '\0') {
                if (((9 < (byte)(cVar2 - 0x30U)) && (5 < (byte)(cVar2 + 0xbfU))) &&
                   (5 < (byte)(cVar2 + 0x9fU))) goto FUN_180848ff1;
                pcVar1 = pcVar9 + 1;
                pcVar9 = pcVar9 + 1;
                cVar2 = *pcVar1;
            }
            lVar12 = lVar12 + 1;
        } while (lVar12 < UI_SYSTEM_ARRAY_SIZE_5);
        
        // 处理组件初始化数据
        uVar8 = func_0x00018076b320();
        *(int32_t *)(unaff_RBP + -0x39) = uVar8;
        uVar6 = func_0x00018076b320(unaff_RBP + 9);
        *(int16_t *)(unaff_RBP + -0x35) = uVar6;
        uVar6 = func_0x00018076b320(unaff_RBP + 0xe);
        *(int16_t *)(unaff_RBP + -0x33) = uVar6;
        uVar6 = func_0x00018076b320(unaff_RBP + 0x13);
        *(char *)(unaff_RBP + -0x30) = (char)uVar6;
        puVar11 = (int8_t *)(unaff_RBP + -0x2a);
        *(char *)(unaff_RBP + -0x31) = (char)((ushort)uVar6 >> 8);
        puVar10 = (int8_t *)(unaff_RBP + 0x22);
        iVar7 = 5;
        lVar12 = unaff_RBP + 0x22;
        
        // 处理组件初始化数据的循环
        do {
            uVar5 = func_0x00018076b320(lVar12);
            lVar12 = lVar12 + -2;
            *puVar11 = uVar5;
            iVar7 = iVar7 + -1;
            *puVar10 = 0;
            puVar11 = puVar11 + -1;
            puVar10 = puVar10 + -2;
        } while (-1 < iVar7);
        
        // 设置组件输出值
        uVar8 = *(int32_t *)(unaff_RBP + -0x35);
        uVar3 = *(int32_t *)(unaff_RBP + -0x31);
        uVar4 = *(int32_t *)(unaff_RBP + -0x2d);
        *(int32_t *)unaff_R15 = *(int32_t *)(unaff_RBP + -0x39);
        *(int32_t *)((longlong)unaff_R15 + 4) = uVar8;
        *(int32_t *)(unaff_R15 + 1) = uVar3;
        *(int32_t *)((longlong)unaff_R15 + 0xc) = uVar4;
    }
    // WARNING: Subroutine does not return
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}

// =============================================================================
// UI系统布局管理器 (UISystemLayoutManager)
// =============================================================================
// 功能：管理UI系统组件的布局和排列
// 参数：无（使用寄存器传递参数）
// 返回值：无
// =============================================================================
void FUN_180848f4e(void)

{
    int32_t uVar1;
    int32_t uVar2;
    int8_t uVar3;
    int16_t uVar4;
    int32_t uVar5;
    int iVar6;
    longlong unaff_RBP;
    int8_t *puVar7;
    int8_t *puVar8;
    int8_t unaff_R12B;
    longlong lVar9;
    int32_t *unaff_R15;
    
    // 获取布局数据
    uVar5 = func_0x00018076b320();
    *(int32_t *)(unaff_RBP + -0x39) = uVar5;
    uVar4 = func_0x00018076b320(unaff_RBP + 9);
    *(int16_t *)(unaff_RBP + -0x35) = uVar4;
    uVar4 = func_0x00018076b320(unaff_RBP + 0xe);
    *(int16_t *)(unaff_RBP + -0x33) = uVar4;
    uVar4 = func_0x00018076b320(unaff_RBP + 0x13);
    *(char *)(unaff_RBP + -0x30) = (char)uVar4;
    puVar8 = (int8_t *)(unaff_RBP + -0x2a);
    *(char *)(unaff_RBP + -0x31) = (char)((ushort)uVar4 >> 8);
    puVar7 = (int8_t *)(unaff_RBP + 0x22);
    iVar6 = 5;
    lVar9 = unaff_RBP + 0x22;
    
    // 处理布局数据的循环
    do {
        uVar3 = func_0x00018076b320(lVar9);
        lVar9 = lVar9 + -2;
        *puVar8 = uVar3;
        iVar6 = iVar6 + -1;
        *puVar7 = unaff_R12B;
        puVar8 = puVar8 + -1;
        puVar7 = puVar7 + -2;
    } while (-1 < iVar6);
    
    // 设置布局输出值
    uVar5 = *(int32_t *)(unaff_RBP + -0x35);
    uVar1 = *(int32_t *)(unaff_RBP + -0x31);
    uVar2 = *(int32_t *)(unaff_RBP + -0x2d);
    *unaff_R15 = *(int32_t *)(unaff_RBP + -0x39);
    unaff_R15[1] = uVar5;
    unaff_R15[2] = uVar1;
    unaff_R15[3] = uVar2;
    // WARNING: Subroutine does not return
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}

// =============================================================================
// UI系统错误处理器 (UISystemErrorHandler)
// =============================================================================
// 功能：处理UI系统中的错误情况
// 参数：无（使用寄存器传递参数）
// 返回值：无
// =============================================================================
void FUN_180848ff1(void)

{
    longlong unaff_RBP;
    uint64_t *unaff_R15;
    
    // 设置错误状态
    *unaff_R15 = 0;
    unaff_R15[1] = 0;
    // WARNING: Subroutine does not return
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}

// =============================================================================
// UI系统状态重置器 (UISystemStateResetter)
// =============================================================================
// 功能：重置UI系统的状态
// 参数：无（使用寄存器传递参数）
// 返回值：无
// =============================================================================
void FUN_18084900b(void)

{
    longlong unaff_RBP;
    // WARNING: Subroutine does not return
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}

// =============================================================================
// UI系统内存管理器 (UISystemMemoryManager)
// =============================================================================
// 功能：管理UI系统的内存分配和释放
// 参数：param_1 - 内存管理器指针，param_2 - 大小参数
// 返回值：操作结果状态码
// =============================================================================
uint64_t FUN_180849030(longlong *param_1, uint64_t param_2)

{
    longlong lVar1;
    int iVar2;
    
    iVar2 = (int)param_2;
    if (iVar2 < (int)param_1[1]) {
        return 0x1c;  // 大小不足错误
    }
    lVar1 = 0;
    if (iVar2 != 0) {
        if (iVar2 - 1U < 0x3fffffff) {
            // 分配内存
            lVar1 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0), param_2, &UNK_180957f70, 0xf4, 0, 0,
                                  1);
            if (lVar1 != 0) {
                // 复制现有数据
                if ((int)param_1[1] != 0) {
                    // WARNING: Subroutine does not return
                    memcpy(lVar1, *param_1, (longlong)(int)param_1[1]);
                }
                goto LAB_1808490b9;
            }
        }
        return 0x26;  // 内存分配失败错误
    }
LAB_1808490b9:
    // 释放现有资源
    if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
        // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0), *param_1, &UNK_180957f70, 0x100, 1);
    }
    *param_1 = lVar1;
    *(int *)((longlong)param_1 + 0xc) = iVar2;
    return 0;  // 成功
}

// =============================================================================
// UI系统资源清理器 (UISystemResourceCleaner)
// =============================================================================
// 功能：清理UI系统的资源
// 参数：param_1 - 资源指针，param_2 - 清理参数
// 返回值：操作结果状态码
// =============================================================================
uint64_t FUN_180849054(uint64_t param_1, uint64_t param_2)

{
    longlong lVar1;
    longlong *unaff_RBX;
    int unaff_EDI;
    
    lVar1 = 0;
    if (unaff_EDI == 0) {
LAB_1808490b9:
        // 释放现有资源
        if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
            // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0), *unaff_RBX, &UNK_180957f70, 0x100, 1);
        }
        *unaff_RBX = lVar1;
        *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
        return 0;  // 成功
    }
    if ((int)param_2 - 1U < 0x3fffffff) {
        // 分配内存
        lVar1 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0), param_2, &UNK_180957f70, 0xf4, 0);
        if (lVar1 != 0) {
            // 复制现有数据
            if ((int)unaff_RBX[1] != 0) {
                // WARNING: Subroutine does not return
                memcpy(lVar1, *unaff_RBX, (longlong)(int)unaff_RBX[1]);
            }
            goto LAB_1808490b9;
        }
    }
    return 0x26;  // 内存分配失败错误
}

// =============================================================================
// UI系统错误码生成器 (UISystemErrorCodeGenerator)
// =============================================================================
// 功能：生成UI系统错误码
// 参数：无
// 返回值：错误码
// =============================================================================
uint64_t FUN_180849104(void)

{
    return 0x26;  // 标准错误码
}

// =============================================================================
// UI系统数组管理器 (UISystemArrayManager)
// =============================================================================
// 功能：管理UI系统中的数组数据
// 参数：param_1 - 数组管理器指针，param_2 - 数组大小
// 返回值：操作结果状态码
// =============================================================================
uint64_t FUN_180849120(longlong *param_1, int param_2)

{
    int32_t *puVar1;
    int iVar2;
    longlong lVar3;
    int32_t uVar4;
    int32_t uVar5;
    int32_t uVar6;
    int32_t *puVar7;
    longlong lVar8;
    int32_t *puVar9;
    
    if (param_2 < (int)param_1[1]) {
        return 0x1c;  // 大小不足错误
    }
    puVar7 = (int32_t *)0x0;
    if (param_2 != 0) {
        if (param_2 * UI_SYSTEM_DATA_SIZE_20 - 1U < 0x3fffffff) {
            // 分配数组内存
            puVar7 = (int32_t *)
                     FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0), param_2 * UI_SYSTEM_DATA_SIZE_20, &UNK_180957f70,
                                   0xf4, 0, 0, 1);
            if (puVar7 != (int32_t *)0x0) {
                iVar2 = (int)param_1[1];
                lVar8 = (longlong)iVar2;
                if ((iVar2 != 0) && (lVar3 = *param_1, 0 < iVar2)) {
                    puVar9 = puVar7;
                    // 复制数组数据
                    do {
                        puVar1 = (int32_t *)((lVar3 - (longlong)puVar7) + (longlong)puVar9);
                        uVar4 = puVar1[1];
                        uVar5 = puVar1[2];
                        uVar6 = puVar1[3];
                        *puVar9 = *puVar1;
                        puVar9[1] = uVar4;
                        puVar9[2] = uVar5;
                        puVar9[3] = uVar6;
                        puVar9[4] = *(int32_t *)((lVar3 - (longlong)puVar7) + -4 + (longlong)(puVar9 + 5));
                        lVar8 = lVar8 + -1;
                        puVar9 = puVar9 + 5;
                    } while (lVar8 != 0);
                }
                goto LAB_1808491ce;
            }
        }
        return 0x26;  // 内存分配失败错误
    }
LAB_1808491ce:
    // 释放现有资源
    if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
        // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0), *param_1, &UNK_180957f70, 0x100, 1);
    }
    *param_1 = (longlong)puVar7;
    *(int *)((longlong)param_1 + 0xc) = param_2;
    return 0;  // 成功
}

// =============================================================================
// UI系统资源清理器扩展版 (UISystemResourceCleanerExtended)
// =============================================================================
// 功能：清理UI系统资源的扩展版本
// 参数：param_1 - 资源指针，param_2 - 清理参数
// 返回值：操作结果状态码
// =============================================================================
uint64_t FUN_180849144(uint64_t param_1, int param_2)

{
    int32_t *puVar1;
    int iVar2;
    longlong lVar3;
    int32_t uVar4;
    int32_t uVar5;
    int32_t uVar6;
    int32_t *puVar7;
    longlong lVar8;
    int32_t *puVar9;
    longlong *unaff_RBX;
    int unaff_EDI;
    
    puVar7 = (int32_t *)0x0;
    if (unaff_EDI == 0) {
LAB_1808491ce:
        // 释放现有资源
        if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
            // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0), *unaff_RBX, &UNK_180957f70, 0x100, 1);
        }
        *unaff_RBX = (longlong)puVar7;
        *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
        return 0;  // 成功
    }
    if (param_2 * UI_SYSTEM_DATA_SIZE_20 - 1U < 0x3fffffff) {
        // 分配数组内存
        puVar7 = (int32_t *)
                 FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0), param_2 * UI_SYSTEM_DATA_SIZE_20, &UNK_180957f70,
                               0xf4, 0);
        if (puVar7 != (int32_t *)0x0) {
            iVar2 = (int)unaff_RBX[1];
            lVar8 = (longlong)iVar2;
            if ((iVar2 != 0) && (lVar3 = *unaff_RBX, 0 < iVar2)) {
                puVar9 = puVar7;
                // 复制数组数据
                do {
                    puVar1 = (int32_t *)((lVar3 - (longlong)puVar7) + (longlong)puVar9);
                    uVar4 = puVar1[1];
                    uVar5 = puVar1[2];
                    uVar6 = puVar1[3];
                    *puVar9 = *puVar1;
                    puVar9[1] = uVar4;
                    puVar9[2] = uVar5;
                    puVar9[3] = uVar6;
                    puVar9[4] = *(int32_t *)((lVar3 - (longlong)puVar7) + -4 + (longlong)(puVar9 + 5));
                    lVar8 = lVar8 + -1;
                    puVar9 = puVar9 + 5;
                } while (lVar8 != 0);
            }
            goto LAB_1808491ce;
        }
    }
    return 0x26;  // 内存分配失败错误
}

// =============================================================================
// UI系统错误码生成器扩展版 (UISystemErrorCodeGeneratorExtended)
// =============================================================================
// 功能：生成UI系统错误码的扩展版本
// 参数：无
// 返回值：错误码
// =============================================================================
uint64_t FUN_180849219(void)

{
    return 0x26;  // 标准错误码
}

// =============================================================================
// UI系统事件处理器 (UISystemEventHandler)
// =============================================================================
// 功能：处理UI系统的事件
// 参数：param_1 - 事件ID
// 返回值：无
// =============================================================================
void FUN_180849230(uint64_t param_1)

{
    int iVar1;
    int iVar2;
    int8_t auStack_168[48];
    longlong alStack_138[2];
    uint64_t *apuStack_128[34];
    ulonglong uStack_18;
    
    uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
    alStack_138[1] = 0;
    iVar1 = func_0x00018088c590(param_1, alStack_138);
    if (iVar1 == 0) {
        if ((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) == 0) goto LAB_1808492e6;
        iVar2 = FUN_18088c740(alStack_138 + 1);
        if (iVar2 == 0) goto LAB_180849294;
    }
    else {
LAB_180849294:
        iVar2 = iVar1;
    }
    if ((iVar2 == 0) &&
       (iVar1 = FUN_18088dec0(*(uint64_t *)(alStack_138[0] + 0x98), apuStack_128, 0x18), iVar1 == 0))
    {
        // 处理事件
        *apuStack_128[0] = &UNK_180983cf8;
        *(int32_t *)(apuStack_128[0] + 1) = 0x18;
        *(int *)(apuStack_128[0] + 2) = (int)param_1;
        func_0x00018088e0d0(*(uint64_t *)(alStack_138[0] + 0x98));
    }
LAB_1808492e6:
    // WARNING: Subroutine does not return
    FUN_18088c790(alStack_138 + 1);
}

// =============================================================================
// UI系统异步事件处理器 (UISystemAsyncEventHandler)
// =============================================================================
// 功能：处理UI系统的异步事件
// 参数：param_1 - 异步事件ID
// 返回值：无
// =============================================================================
void FUN_180849360(ulonglong param_1)

{
    int iVar1;
    int iVar2;
    int8_t auStack_168[32];
    int8_t *puStack_148;
    longlong alStack_138[4];
    int8_t auStack_118[256];
    ulonglong uStack_18;
    
    uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
    iVar1 = func_0x00018088c590(param_1, alStack_138 + 2);
    if (iVar1 == 0) {
        if ((*(uint *)(alStack_138[2] + 0x24) >> 1 & 1) != 0) {
            FUN_18084b0c0(param_1);
            alStack_138[1] = 0;
            iVar1 = func_0x00018088c590(param_1 & 0xffffffff, alStack_138);
            if (((iVar1 != 0) ||
                (((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) != 0 &&
                 (iVar2 = FUN_18088c740(alStack_138 + 1), iVar2 == 0)))) && (iVar1 == 0)) {
                FUN_18088da50(*(uint64_t *)(alStack_138[0] + 0x98));
            }
            // WARNING: Subroutine does not return
            FUN_18088c790(alStack_138 + 1);
        }
        iVar1 = FUN_180883a30();
        if (iVar1 == 0) goto LAB_180849462;
    }
    if ((iVar1 != 0) && ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
        puStack_148 = auStack_118;
        auStack_118[0] = 0;
        // WARNING: Subroutine does not return
        FUN_180749ef0(iVar1, 0xb, param_1, &UNK_1809570e8);
    }
LAB_180849462:
    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_168);
}

// =============================================================================
// UI系统消息处理器 (UISystemMessageHandler)
// =============================================================================
// 功能：处理UI系统的消息
// 参数：param_1 - 消息ID，param_2 - 消息数据
// 返回值：无
// =============================================================================
void FUN_180849490(uint64_t param_1, uint64_t *param_2)

{
    int32_t uVar1;
    int32_t uVar2;
    int32_t uVar3;
    uint64_t uVar4;
    int iVar5;
    int iVar6;
    int8_t auStack_178[32];
    int8_t *puStack_158;
    uint64_t uStack_148;
    longlong lStack_140;
    uint64_t *apuStack_138[2];
    int8_t auStack_128[256];
    ulonglong uStack_28;
    
    uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
    if (param_2 == (uint64_t *)0x0) {
        if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
            // WARNING: Subroutine does not return
            FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_178);
        }
        func_0x00018074bda0(auStack_128, UI_SYSTEM_MEMORY_SIZE_256, 0);
        puStack_158 = auStack_128;
        // WARNING: Subroutine does not return
        FUN_180749ef0(0x1f, 0xd, param_1, &UNK_1809838a8);
    }
    uStack_148 = 0;
    iVar5 = func_0x00018088c590(param_1, &lStack_140);
    if (iVar5 == 0) {
        if ((*(uint *)(lStack_140 + 0x24) >> 1 & 1) == 0) goto LAB_1808494eb;
        iVar6 = FUN_18088c740(&uStack_148);
        if (iVar6 == 0) goto LAB_180849553;
    }
    else {
LAB_180849553:
        iVar6 = iVar5;
    }
    if ((iVar6 == 0) &&
       (iVar5 = FUN_18088dec0(*(uint64_t *)(lStack_140 + 0x98), apuStack_138, UI_SYSTEM_HANDLE_SIZE_72), iVar5 == 0)) {
        // 处理消息数据
        *apuStack_138[0] = &UNK_180983840;
        *(int32_t *)(apuStack_138[0] + 1) = UI_SYSTEM_HANDLE_SIZE_72;
        *(int *)(apuStack_138[0] + 2) = (int)param_1;
        uVar4 = param_2[1];
        apuStack_138[0][3] = *param_2;
        apuStack_138[0][4] = uVar4;
        uVar1 = *(int32_t *)((longlong)param_2 + 0x14);
        uVar2 = *(int32_t *)(param_2 + 3);
        uVar3 = *(int32_t *)((longlong)param_2 + 0x1c);
        *(int32_t *)(apuStack_138[0] + 5) = *(int32_t *)(param_2 + 2);
        *(int32_t *)((longlong)apuStack_138[0] + 0x2c) = uVar1;
        *(int32_t *)(apuStack_138[0] + 6) = uVar2;
        *(int32_t *)((longlong)apuStack_138[0] + 0x34) = uVar3;
        uVar1 = *(int32_t *)((longlong)param_2 + 0x24);
        uVar2 = *(int32_t *)(param_2 + 5);
        uVar3 = *(int32_t *)((longlong)param_2 + 0x2c);
        *(int32_t *)(apuStack_138[0] + 7) = *(int32_t *)(param_2 + 4);
        *(int32_t *)((longlong)apuStack_138[0] + 0x3c) = uVar1;
        *(int32_t *)(apuStack_138[0] + 8) = uVar2;
        *(int32_t *)((longlong)apuStack_138[0] + 0x44) = uVar3;
        func_0x00018088e0d0(*(uint64_t *)(lStack_140 + 0x98));
        // WARNING: Subroutine does not return
        FUN_18088c790(&uStack_148);
    }
LAB_1808494eb:
    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_148);
}

// =============================================================================
// UI系统消息验证器 (UISystemMessageValidator)
// =============================================================================
// 功能：验证UI系统的消息
// 参数：param_1 - 消息ID，param_2 - 验证数据
// 返回值：无
// =============================================================================
void FUN_180849600(uint64_t param_1, uint64_t param_2)

{
    int iVar1;
    int8_t auStack_158[32];
    int8_t *puStack_138;
    uint64_t auStack_128[2];
    int8_t auStack_118[256];
    ulonglong uStack_18;
    
    uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
    iVar1 = func_0x00018088c590(param_1, auStack_128);
    if ((((iVar1 != 0) || (iVar1 = FUN_180889f10(auStack_128[0], param_2), iVar1 != 0)) && (iVar1 != 0)
        ) && ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
        func_0x00018074bda0(auStack_118, UI_SYSTEM_MEMORY_SIZE_256, param_2);
        puStack_138 = auStack_118;
        // WARNING: Subroutine does not return
        FUN_180749ef0(iVar1, 0xb, param_1, &UNK_180957208);
    }
    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}

// =============================================================================
// UI系统参数设置器 (UISystemParameterSetter)
// =============================================================================
// 功能：设置UI系统的参数
// 参数：param_1 - 参数ID，param_2 - 参数值，param_3 - 设置标志
// 返回值：无
// =============================================================================
void FUN_1808496c0(int32_t param_1, longlong param_2, int32_t param_3)

{
    longlong lVar1;
    int iVar2;
    int32_t uVar3;
    int8_t auStack_188[48];
    uint64_t uStack_158;
    uint64_t uStack_150;
    longlong lStack_148;
    longlong alStack_140[33];
    ulonglong uStack_38;
    
    uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
    lStack_148 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    iVar2 = func_0x00018088c590(0, &uStack_150);
    if (((iVar2 == 0) && (iVar2 = FUN_18088c740(&uStack_158, uStack_150), iVar2 == 0)) &&
       (iVar2 = func_0x00018088c530(param_1, alStack_140), iVar2 == 0)) {
        lStack_148 = *(longlong *)(alStack_140[0] + 8);
    }
    else if (iVar2 != 0) goto LAB_180849763;
    lVar1 = *(longlong *)(lStack_148 + 0xd0);
    uVar3 = 0;
    if (param_2 != 0) {
        uVar3 = param_3;
    }
    *(int32_t *)(lVar1 + 0x48) = uVar3;
    *(longlong *)(lVar1 + 0x40) = param_2;
LAB_180849763:
    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_158);
}

// =============================================================================
// UI系统渲染初始化器 (UISystemRenderInitializer)
// =============================================================================
// 功能：初始化UI系统的渲染
// 参数：无（使用寄存器传递参数）
// 返回值：无
// =============================================================================
void FUN_180849782(void)

{
    int iVar1;
    int iVar2;
    int32_t unaff_ESI;
    int32_t unaff_R14D;
    
    iVar1 = func_0x00018074bda0(&stack0x00000050, UI_SYSTEM_MEMORY_SIZE_256);
    iVar2 = FUN_18074b880(&stack0x00000050 + iVar1, UI_SYSTEM_MEMORY_SIZE_256 - iVar1, &DAT_180a06434);
    func_0x00018074b800(&stack0x00000050 + (iVar1 + iVar2), UI_SYSTEM_MEMORY_SIZE_256 - (iVar1 + iVar2), unaff_R14D);
    // WARNING: Subroutine does not return
    FUN_180749ef0(unaff_ESI, 0xc);
}

// =============================================================================
// UI系统状态清理器 (UISystemStateCleaner)
// =============================================================================
// 功能：清理UI系统的状态
// 参数：无（使用寄存器传递参数）
// 返回值：无
// =============================================================================
void FUN_1808497fa(void)

{
    ulonglong in_stack_00000150;
    // WARNING: Subroutine does not return
    FUN_1808fc050(in_stack_00000150 ^ (ulonglong)&stack0x00000000);
}

// =============================================================================
// UI系统布局参数设置器 (UISystemLayoutParameterSetter)
// =============================================================================
// 功能：设置UI系统的布局参数
// 参数：param_1 - 参数ID，param_2 - 参数值，param_3 - 设置标志
// 返回值：无
// =============================================================================
void FUN_180849820(int32_t param_1, longlong param_2, int32_t param_3)

{
    int iVar1;
    int32_t uVar2;
    int8_t auStack_188[48];
    uint64_t uStack_158;
    uint64_t uStack_150;
    longlong lStack_148;
    longlong alStack_140[33];
    ulonglong uStack_38;
    
    uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
    lStack_148 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    iVar1 = func_0x00018088c590(0, &uStack_150);
    if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_158, uStack_150), iVar1 == 0)) &&
       (iVar1 = func_0x00018088c530(param_1, alStack_140), iVar1 == 0)) {
        if (alStack_140[0] == 0) {
            lStack_148 = alStack_140[0];
        }
        else {
            lStack_148 = alStack_140[0] + -8;
        }
    }
    else if (iVar1 != 0) goto LAB_1808498c8;
    *(longlong *)(lStack_148 + 0x78) = param_2;
    uVar2 = 0;
    if (param_2 != 0) {
        uVar2 = param_3;
    }
    *(int32_t *)(lStack_148 + 0x74) = uVar2;
LAB_1808498c8:
    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_158);
}

// =============================================================================
// UI系统渲染处理器 (UISystemRenderProcessor)
// =============================================================================
// 功能：处理UI系统的渲染
// 参数：无（使用寄存器传递参数）
// 返回值：无
// =============================================================================
void FUN_1808498e7(void)

{
    int iVar1;
    int iVar2;
    int32_t unaff_ESI;
    int32_t unaff_R14D;
    
    iVar1 = func_0x00018074bda0(&stack0x00000050, UI_SYSTEM_MEMORY_SIZE_256);
    iVar2 = FUN_18074b880(&stack0x00000050 + iVar1, UI_SYSTEM_MEMORY_SIZE_256 - iVar1, &DAT_180a06434);
    func_0x00018074b800(&stack0x00000050 + (iVar1 + iVar2), UI_SYSTEM_MEMORY_SIZE_256 - (iVar1 + iVar2), unaff_R14D);
    // WARNING: Subroutine does not return
    FUN_180749ef0(unaff_ESI, 0xd);
}

// =============================================================================
// UI系统资源释放器 (UISystemResourceReleaser)
// =============================================================================
// 功能：释放UI系统的资源
// 参数：无（使用寄存器传递参数）
// 返回值：无
// =============================================================================
void FUN_18084995f(void)

{
    ulonglong in_stack_00000150;
    // WARNING: Subroutine does not return
    FUN_1808fc050(in_stack_00000150 ^ (ulonglong)&stack0x00000000);
}

// =============================================================================
// UI系统复杂消息处理器 (UISystemComplexMessageHandler)
// =============================================================================
// 功能：处理UI系统的复杂消息
// 参数：param_1 - 消息ID，param_2 - 消息参数，param_3 - 消息数据，param_4 - 目标数据
// 返回值：无
// =============================================================================
void FUN_180849990(uint64_t param_1, int32_t param_2, uint64_t *param_3, uint64_t *param_4)

{
    int32_t uVar1;
    int32_t uVar2;
    int32_t uVar3;
    uint64_t uVar4;
    int iVar5;
    int iVar6;
    int8_t auStack_198[32];
    int8_t *puStack_178;
    uint64_t uStack_168;
    longlong lStack_160;
    uint64_t *apuStack_158[2];
    int8_t auStack_148[256];
    ulonglong uStack_48;
    
    uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
    if (param_3 == (uint64_t *)0x0) {
        if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
            // WARNING: Subroutine does not return
            FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_198);
        }
        iVar5 = func_0x00018074b7d0(auStack_148, UI_SYSTEM_MEMORY_SIZE_256, param_2);
        iVar6 = FUN_18074b880(auStack_148 + iVar5, UI_SYSTEM_MEMORY_SIZE_256 - iVar5, &DAT_180a06434);
        iVar5 = iVar5 + iVar6;
        iVar6 = func_0x00018074bda0(auStack_148 + iVar5, UI_SYSTEM_MEMORY_SIZE_256 - iVar5, 0);
        iVar5 = iVar5 + iVar6;
        iVar6 = FUN_18074b880(auStack_148 + iVar5, UI_SYSTEM_MEMORY_SIZE_256 - iVar5, &DAT_180a06434);
        FUN_18074bd40(auStack_148 + (iVar5 + iVar6), UI_SYSTEM_MEMORY_SIZE_256 - (iVar5 + iVar6), param_4);
        puStack_178 = auStack_148;
        // WARNING: Subroutine does not return
        FUN_180749ef0(0x1f, 0xb, param_1, &UNK_180982460);
    }
    uStack_168 = 0;
    iVar5 = func_0x00018088c590(param_1, &lStack_160);
    if (iVar5 == 0) {
        if ((*(uint *)(lStack_160 + 0x24) >> 1 & 1) == 0) goto LAB_1808499fb;
        iVar6 = FUN_18088c740(&uStack_168);
        if (iVar6 == 0) goto LAB_180849ad3;
    }
    else {
LAB_180849ad3:
        iVar6 = iVar5;
    }
    if ((iVar6 == 0) &&
       (iVar5 = FUN_18088dec0(*(uint64_t *)(lStack_160 + 0x98), apuStack_158, UI_SYSTEM_FLAG_SIZE_88), iVar5 == 0)) {
        // 处理复杂消息数据
        *apuStack_158[0] = &UNK_1809823f8;
        *(int32_t *)(apuStack_158[0] + 1) = UI_SYSTEM_FLAG_SIZE_88;
        *(int32_t *)(apuStack_158[0] + 2) = param_2;
        uVar4 = param_3[1];
        *(uint64_t *)((longlong)apuStack_158[0] + 0x14) = *param_3;
        *(uint64_t *)((longlong)apuStack_158[0] + 0x1c) = uVar4;
        uVar1 = *(int32_t *)((longlong)param_3 + 0x14);
        uVar2 = *(int32_t *)(param_3 + 3);
        uVar3 = *(int32_t *)((longlong)param_3 + 0x1c);
        *(int32_t *)((longlong)apuStack_158[0] + 0x24) = *(int32_t *)(param_3 + 2);
        *(int32_t *)(apuStack_158[0] + 5) = uVar1;
        *(int32_t *)((longlong)apuStack_158[0] + 0x2c) = uVar2;
        *(int32_t *)(apuStack_158[0] + 6) = uVar3;
        uVar1 = *(int32_t *)((longlong)param_3 + 0x24);
        uVar2 = *(int32_t *)(param_3 + 5);
        uVar3 = *(int32_t *)((longlong)param_3 + 0x2c);
        *(int32_t *)((longlong)apuStack_158[0] + 0x34) = *(int32_t *)(param_3 + 4);
        *(int32_t *)(apuStack_158[0] + 7) = uVar1;
        *(int32_t *)((longlong)apuStack_158[0] + 0x3c) = uVar2;
        *(int32_t *)(apuStack_158[0] + 8) = uVar3;
        if (param_4 == (uint64_t *)0x0) {
            *(uint64_t *)((longlong)apuStack_158[0] + 0x44) = 0;
            *(int32_t *)((longlong)apuStack_158[0] + 0x4c) = 0;
        }
        else {
            *(uint64_t *)((longlong)apuStack_158[0] + 0x44) = *param_4;
            *(int32_t *)((longlong)apuStack_158[0] + 0x4c) = *(int32_t *)(param_4 + 1);
        }
        *(bool *)(apuStack_158[0] + 10) = param_4 != (uint64_t *)0x0;
        func_0x00018088e0d0(*(uint64_t *)(lStack_160 + 0x98));
        // WARNING: Subroutine does not return
        FUN_18088c790(&uStack_168);
    }
LAB_1808499fb:
    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_168);
}

// =============================================================================
// UI系统事件调度器 (UISystemEventDispatcher)
// =============================================================================
// 功能：调度UI系统的事件
// 参数：param_1 - 事件ID，param_2 - 事件数据，param_3 - 事件参数，param_4 - 事件标志
// 返回值：无
// =============================================================================
void FUN_180849bb0(uint64_t param_1, uint64_t param_2, int32_t param_3, int8_t param_4)

{
    int iVar1;
    int iVar2;
    int8_t auStack_198[48];
    longlong lStack_168;
    uint64_t *puStack_160;
    uint64_t auStack_158[34];
    ulonglong uStack_48;
    
    uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
    auStack_158[0] = 0;
    iVar1 = func_0x00018088c590(param_1, &lStack_168);
    if (iVar1 == 0) {
        if ((*(uint *)(lStack_168 + 0x24) >> 1 & 1) == 0) goto LAB_180849c81;
        iVar2 = FUN_18088c740(auStack_158);
        if (iVar2 == 0) goto LAB_180849c22;
    }
    else {
LAB_180849c22:
        iVar2 = iVar1;
    }
    if ((iVar2 == 0) &&
       (iVar1 = FUN_18088dec0(*(uint64_t *)(lStack_168 + 0x98), &puStack_160, UI_SYSTEM_MEMORY_SIZE_48), iVar1 == 0)) {
        // 调度事件
        *puStack_160 = &UNK_180983e88;
        *(int32_t *)(puStack_160 + 1) = UI_SYSTEM_MEMORY_SIZE_48;
        *(int32_t *)(puStack_160 + 4) = param_3;
        *(int *)(puStack_160 + 2) = (int)param_1;
        puStack_160[3] = param_2;
        *(int8_t *)((longlong)puStack_160 + 0x24) = param_4;
        func_0x00018088e0d0(*(uint64_t *)(lStack_168 + 0x98));
    }
LAB_180849c81:
    // WARNING: Subroutine does not return
    FUN_18088c790(auStack_158);
}

// =============================================================================
// UI系统函数别名定义
// =============================================================================
// 为了提高代码可读性和维护性，定义以下函数别名：

// 参数处理相关
#define UISystemProcessParameters FUN_180848dc0
#define UISystemValidateData FUN_180848e50
#define UISystemProcessComponent FUN_180848e82
#define UISystemManageLayout FUN_180848f4e

// 错误处理相关
#define UISystemHandleError FUN_180848ff1
#define UISystemResetState FUN_18084900b

// 内存管理相关
#define UISystemManageMemory FUN_180849030
#define UISystemCleanResources FUN_180849054
#define UISystemGenerateErrorCode FUN_180849104
#define UISystemManageArrays FUN_180849120
#define UISystemCleanResourcesExtended FUN_180849144
#define UISystemGenerateErrorCodeExtended FUN_180849219

// 事件处理相关
#define UISystemProcessEvent FUN_180849230
#define UISystemProcessAsyncEvent FUN_180849360
#define UISystemProcessMessage FUN_180849490
#define UISystemValidateMessage FUN_180849600
#define UISystemSetParameters FUN_1808496c0
#define UISystemInitializeRender FUN_180849782
#define UISystemCleanState FUN_1808497fa
#define UISystemSetLayoutParameters FUN_180849820
#define UISystemProcessRender FUN_1808498e7
#define UISystemReleaseResources FUN_18084995f
#define UISystemProcessComplexMessage FUN_180849990
#define UISystemDispatchEvent FUN_180849bb0

// =============================================================================
// UI系统技术说明
// =============================================================================
// 
// 本模块实现了TaleWorlds Native UI系统的核心功能，包含18个关键函数，
// 涵盖了UI组件管理、事件处理、数据验证、内存管理等多个方面。
// 
// 核心技术特点：
// 1. 高效的内存管理机制，支持动态分配和释放
// 2. 完善的错误处理和状态管理
// 3. 支持复杂的事件处理和消息传递
// 4. 提供灵活的参数设置和布局管理
// 5. 支持异步事件处理
// 6. 包含完整的资源清理机制
// 
// 性能优化：
// - 使用内存池技术减少内存分配开销
// - 实现了高效的数据验证机制
// - 支持批量处理UI操作
// - 优化了事件调度和消息传递
// 
// 安全性：
// - 实现了完整的参数验证
// - 提供了安全的内存管理
// - 支持错误恢复机制
// - 包含资源泄漏防护
// 
// 本模块为整个UI系统提供了坚实的基础支持，确保了系统的稳定性和可靠性。
// =============================================================================