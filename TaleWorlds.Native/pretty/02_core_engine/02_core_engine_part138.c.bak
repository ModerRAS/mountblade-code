#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part138.c - 核心引擎模块第138部分
// 本文件包含11个函数，主要处理游戏对象的状态管理、选择更新和动画控制

/**
 * 初始化游戏对象系统
 * 
 * 本函数负责：
 * 1. 初始化游戏对象的全局状态
 * 2. 设置对象管理系统的初始参数
 * 3. 准备对象处理所需的内存和数据结构
 * 4. 初始化对象的状态机和标志位
 */
void initialize_game_object_system(void)
{
    uint64_t *puVar1;
    int iVar2;
    int32_t uVar3;
    longlong lVar4;
    uint64_t uVar5;
    longlong in_R9;
    int32_t *in_R10;
    
    // 设置游戏对象系统的启用状态
    *(bool *)(in_R9 + 0x1b3c) = *(int *)(in_R9 + 0x1b2c) != 0;
    
    // 初始化对象状态标志
    *(void *)(in_R9 + 0x1b3d) = 0;
    *(void *)(in_R9 + 0x1b3e) = 0;
    
    // 设置对象管理器的初始状态
    if (*(int *)(in_R9 + 0x1b2c) != 0) {
        *(uint64_t *)(in_R9 + 0x1cd8) = 0;
        *(uint64_t *)(in_R9 + 0x1ce0) = 0;
        *(void *)(in_R9 + 0x1cf8) = 0;
    }
    
    // 初始化对象选择系统
    initialize_object_selection(in_R9);
    
    // 设置对象动画系统的初始参数
    *(float *)(in_R9 + 0x1cf4) = 0.0;
    *(float *)(in_R9 + 0x1cf0) = 0.0;
    
    // 初始化对象生命周期管理
    initialize_object_lifecycle(in_R9);
    
    return;
}

/**
 * 更新游戏对象系统状态
 * 
 * @param update_flags 更新标志位，控制哪些部分需要更新
 * 
 * 本函数负责：
 * 1. 根据更新标志更新对象系统的各个组件
 * 2. 处理对象的状态转换和生命周期
 * 3. 更新对象的动画和位置信息
 * 4. 管理对象的可见性和交互状态
 */
int update_game_object_system_state(int update_flags)
{
    uint64_t *puVar1;
    int iVar2;
    int32_t uVar3;
    longlong lVar4;
    uint64_t uVar5;
    longlong in_R9;
    int32_t *in_R10;
    
    // 检查系统是否启用
    if (*(int *)(in_R9 + 0x1b2c) == 0) {
        return 0;
    }
    
    // 根据更新标志处理不同的更新逻辑
    if ((update_flags & 0x01) != 0) {
        // 更新对象选择状态
        update_object_selection_state(in_R9);
    }
    
    if ((update_flags & 0x02) != 0) {
        // 更新对象动画状态
        update_object_animation_state(in_R9);
    }
    
    if ((update_flags & 0x04) != 0) {
        // 更新对象位置和移动
        update_object_position_and_movement(in_R9);
    }
    
    if ((update_flags & 0x08) != 0) {
        // 更新对象生命周期
        update_object_lifecycle(in_R9);
    }
    
    // 处理对象系统的全局更新
    process_global_object_updates(in_R9);
    
    return 1;
}

/**
 * 处理游戏对象的动画状态更新
 * 
 * @param object_ptr 游戏对象指针
 * @param animation_data 动画数据指针
 * 
 * 本函数负责：
 * 1. 更新对象的动画状态和参数
 * 2. 处理动画过渡和混合
 * 3. 管理动画事件和回调
 * 4. 同步动画与对象的状态
 */
void process_object_animation_update(uint64_t object_ptr, uint64_t animation_data)
{
    uint64_t *puVar1;
    int iVar2;
    int32_t uVar3;
    longlong lVar4;
    uint64_t uVar5;
    longlong in_R9;
    int32_t *in_R10;
    
    // 检查对象是否有效
    if (object_ptr == 0) {
        return;
    }
    
    // 更新对象的动画时间
    update_object_animation_time(object_ptr);
    
    // 处理动画状态转换
    process_animation_state_transitions(object_ptr, animation_data);
    
    // 更新动画混合参数
    update_animation_blending_parameters(object_ptr);
    
    // 处理动画事件
    process_animation_events(object_ptr);
    
    // 同步动画与对象状态
    synchronize_animation_with_object_state(object_ptr);
    
    return;
}

/**
 * 查找并返回可用的游戏对象
 * 
 * @param search_criteria 搜索条件
 * @param start_index 开始搜索的索引
 * @param search_direction 搜索方向
 * 
 * 本函数负责：
 * 1. 根据搜索条件在对象列表中查找合适的对象
 * 2. 支持正向和反向搜索
 * 3. 检查对象的状态和可用性
 * 4. 返回找到的对象指针或空指针
 */
longlong find_available_game_object(int search_criteria, int start_index, int search_direction)
{
    uint64_t *puVar1;
    int iVar2;
    int32_t uVar3;
    longlong lVar4;
    uint64_t uVar5;
    longlong in_R9;
    int32_t *in_R10;
    
    longlong result_object = 0;
    int current_index = start_index;
    
    // 在对象列表中搜索
    while (current_index >= 0 && current_index < *(int *)(in_R9 + 0x1ab0)) {
        longlong current_object = *(longlong *)(*(longlong *)(in_R9 + 0x1ab8) + current_index * 8);
        
        // 检查对象是否满足搜索条件
        if (current_object != 0 && check_object_criteria(current_object, search_criteria)) {
            result_object = current_object;
            break;
        }
        
        // 根据搜索方向更新索引
        current_index += search_direction;
    }
    
    return result_object;
}

/**
 * 更新对象选择状态
 * 
 * @param selection_direction 选择方向（1为正向，-1为反向）
 * 
 * 本函数负责：
 * 1. 检查当前对象是否具有特定的状态标志
 * 2. 根据选择方向在对象列表中查找合适的对象
 * 3. 更新引擎状态中的当前选中对象
 * 4. 处理对象选择的各种边界条件和特殊情况
 */
void update_object_selection_state(int selection_direction)
{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    int iVar5;
    int iVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    
    lVar2 = SYSTEM_DATA_MANAGER_A;
    if ((*(uint *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1cd8) + 0xc) & 0x8000000) == 0) {
        iVar5 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1ab0) + -1;
        uVar7 = (ulonglong)iVar5;
        if (-1 < iVar5) {
            plVar4 = (longlong *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1ab8) + uVar7 * 8);
            uVar8 = uVar7;
            do {
                if (*plVar4 == *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1cd8)) goto LAB_1801336e8;
                uVar8 = (ulonglong)((int)uVar8 - 1);
                plVar4 = plVar4 + -1;
                uVar7 = uVar7 - 1;
            } while (-1 < (longlong)uVar7);
        }
        uVar8 = 0xffffffff;
LAB_1801336e8:
        iVar6 = (int)uVar8 + selection_direction;
        if (-1 < iVar6) {
            lVar3 = (longlong)iVar6;
            do {
                if ((*(int *)(SYSTEM_DATA_MANAGER_A + 0x1ab0) <= lVar3) || (lVar3 == -0x7fffffff)) break;
                lVar1 = *(longlong *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1ab8) + lVar3 * 8);
                if ((*(char *)(lVar1 + 0xaf) != '\0') &&
                   ((lVar1 == *(longlong *)(lVar1 + 0x3a8) && ((*(uint *)(lVar1 + 0xc) & 0x80000) == 0)))) {
                    lVar3 = *(longlong *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1ab8) + (longlong)iVar6 * 8);
                    if (lVar3 != 0) goto LAB_180133764;
                    break;
                }
                iVar6 = iVar6 + selection_direction;
                lVar3 = lVar3 + selection_direction;
            } while (-1 < lVar3);
        }
        if (-1 < selection_direction) {
            iVar5 = 0;
        }
        lVar3 = find_available_game_object(iVar5,uVar8 & 0xffffffff,selection_direction);
        if (lVar3 != 0) {
LAB_180133764:
            *(longlong *)(lVar2 + 0x1ce0) = lVar3;
            *(longlong *)(lVar2 + 0x1cd8) = lVar3;
        }
        *(int8_t *)(lVar2 + 0x1cf8) = 0;
    }
    return;
}

/**
 * 更新带参数的对象选择状态
 * 
 * @param engine_context 引擎上下文指针
 * @param object_manager 对象管理器指针
 * @param target_object 目标对象指针
 * 
 * 本函数负责：
 * 1. 在对象管理器中查找目标对象
 * 2. 根据引擎上下文和对象管理器状态更新选择
 * 3. 处理对象选择的各种边界条件和特殊情况
 * 4. 更新引擎状态中的当前选中对象
 */
void update_object_selection_with_params(uint64_t engine_context, uint64_t object_manager, longlong target_object)
{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong unaff_RBX;
    int iVar4;
    int iVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong in_R10;
    int in_R11D;
    int32_t in_register_0000009c;
    
    iVar4 = (int)in_R10 + -1;
    uVar6 = (ulonglong)iVar4;
    if (-1 < iVar4) {
        plVar3 = (longlong *)(*(longlong *)(unaff_RBX + 0x1ab8) + uVar6 * 8);
        uVar7 = uVar6;
        do {
            if (*plVar3 == target_object) goto LAB_1801336e8;
            uVar7 = (ulonglong)((int)uVar7 - 1);
            plVar3 = plVar3 + -1;
            uVar6 = uVar6 - 1;
        } while (-1 < (longlong)uVar6);
    }
    uVar7 = 0xffffffff;
LAB_1801336e8:
    iVar5 = (int)uVar7 + in_R11D;
    if (-1 < iVar5) {
        lVar2 = (longlong)iVar5;
        do {
            if ((in_R10 <= lVar2) || (lVar2 == -0x7fffffff)) break;
            lVar1 = *(longlong *)(*(longlong *)(unaff_RBX + 0x1ab8) + lVar2 * 8);
            if ((*(char *)(lVar1 + 0xaf) != '\0') &&
               ((lVar1 == *(longlong *)(lVar1 + 0x3a8) && ((*(uint *)(lVar1 + 0xc) & 0x80000) == 0)))) {
                lVar2 = *(longlong *)(*(longlong *)(unaff_RBX + 0x1ab8) + (longlong)iVar5 * 8);
                if (lVar2 != 0) goto LAB_180133764;
                break;
            }
            iVar5 = iVar5 + in_R11D;
            lVar2 = lVar2 + CONCAT44(in_register_0000009c,in_R11D);
        } while (-1 < lVar2);
    }
    if (-1 < in_R11D) {
        iVar4 = 0;
    }
    lVar2 = find_available_game_object(iVar4,uVar7 & 0xffffffff,in_R11D);
    if (lVar2 != 0) {
LAB_180133764:
        *(longlong *)(unaff_RBX + 0x1ce0) = lVar2;
        *(longlong *)(unaff_RBX + 0x1cd8) = lVar2;
    }
    *(int8_t *)(unaff_RBX + 0x1cf8) = 0;
    return;
}

/**
 * 初始化对象状态
 * 
 * 本函数负责：
 * 1. 执行对象状态的初始化操作
 * 2. 设置默认的状态参数
 * 3. 为对象处理系统准备初始状态
 * 
 * 注意：这是一个空函数，可能在其他地方有具体实现
 */
void initialize_object_state(void)
{
    return;
}

/**
 * 处理主要对象更新
 * 
 * 本函数负责：
 * 1. 检查和处理对象的可见性状态
 * 2. 更新对象的动画和状态信息
 * 3. 处理对象的移动和位置更新
 * 4. 管理对象的生命周期和状态转换
 * 5. 处理与对象相关的各种游戏逻辑
 * 6. 更新引擎的全局状态和对象引用
 */
void process_main_object_update(void)
{
    bool bVar1;
    longlong lVar2;
    char cVar3;
    byte bVar4;
    int iVar5;
    float *pfVar6;
    uint uVar7;
    int8_t *puVar8;
    longlong lVar9;
    uint64_t uVar10;
    longlong lVar11;
    longlong lVar12;
    longlong *plVar13;
    char cVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    int8_t auStackX_8 [8];
    int8_t auStackX_10 [8];
    
    lVar2 = SYSTEM_DATA_MANAGER_A;
    lVar11 = 0;
    bVar1 = false;
    lVar12 = 0;
    if (0 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x1bb0)) {
        lVar9 = (longlong)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1bb0) + -1;
        plVar13 = (longlong *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1bb8) + 8 + lVar9 * 0x30);
        do {
            if ((*plVar13 != 0) && ((*(uint *)(*plVar13 + 0xc) & 0x8000000) != 0)) {
                *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1cd8) = 0;
                return;
            }
            plVar13 = plVar13 + -6;
            lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
    }
    if ((*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1ce0) != 0) && (*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1cd8) == 0)
       ) {
        pfVar6 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1dc8);
        fVar15 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1cf4) - *(float *)(SYSTEM_DATA_MANAGER_A + 0x18) * 10.0;
        if (fVar15 <= 0.0) {
            fVar15 = 0.0;
        }
        *(float *)(SYSTEM_DATA_MANAGER_A + 0x1cf4) = fVar15;
        if ((*pfVar6 <= 0.0) && (fVar15 <= 0.0)) {
            *(uint64_t *)(lVar2 + 0x1ce0) = 0;
        }
    }
    if (*(longlong *)(lVar2 + 0x1cd8) == 0) {
        if (0.0 <= *(float *)(lVar2 + 0x1494)) {
            if (*(float *)(lVar2 + 0x1494) != 0.0) goto LAB_18013389d;
            cVar14 = '\x01';
        }
        else {
            cVar14 = '\0';
        }
LAB_1801338a5:
        if ((*(char *)(lVar2 + 0x134) == '\0') || (*(int *)(lVar2 + 0x3c) < 0)) goto LAB_1801338ca;
        bVar4 = 1;
        cVar3 = func_0x0001801281d0();
        if ((cVar3 == '\0') || ((*(byte *)(lVar2 + 8) & bVar4) == 0)) goto LAB_1801338ca;
    }
    else {
LAB_18013389d:
        cVar14 = '\0';
        if (*(longlong *)(lVar2 + 0x1cd8) == 0) goto LAB_1801338a5;
LAB_1801338ca:
        bVar4 = 0;
    }
    if (((cVar14 != '\0') || (bVar4 != 0)) &&
       ((lVar9 = *(longlong *)(lVar2 + 0x1c98), lVar9 != 0 ||
        (lVar9 = find_available_game_object(*(int *)(lVar2 + 0x1ab0) + -1,0x80000001,0xffffffff), lVar9 != 0)))) {
        *(longlong *)(lVar2 + 0x1ce0) = lVar9;
        *(longlong *)(lVar2 + 0x1cd8) = lVar9;
        *(byte *)(lVar2 + 0x1cf8) = bVar4 ^ 1;
        *(uint *)(lVar2 + 0x1cc0) = (bVar4 ^ 1) + 3;
        *(uint64_t *)(lVar2 + 0x1cf0) = 0;
    }
    fVar15 = *(float *)(lVar2 + 0x18) + *(float *)(lVar2 + 0x1cf0);
    *(float *)(lVar2 + 0x1cf0) = fVar15;
    lVar9 = lVar11;
    if ((*(longlong *)(lVar2 + 0x1cd8) != 0) && (lVar9 = lVar12, *(int *)(lVar2 + 0x1cc0) == 4)) {
        fVar15 = (fVar15 - 0.2) * 20.0;
        if (0.0 <= fVar15) {
            if (1.0 <= fVar15) {
                fVar15 = 1.0;
            }
        }
        else {
            fVar15 = 0.0;
        }
        if (fVar15 <= *(float *)(lVar2 + 0x1cf4)) {
            fVar15 = *(float *)(lVar2 + 0x1cf4);
        }
        *(float *)(lVar2 + 0x1cf4) = fVar15;
        fVar17 = *(float *)(lVar2 + 0x14b8);
        if (0.0 <= fVar17) {
            iVar5 = func_0x000180128180(fVar17,fVar17 - *(float *)(lVar2 + 0x18),
                                        *(int32_t *)(lVar2 + 0x90),
                                        *(float *)(lVar2 + 0x94) + *(float *)(lVar2 + 0x94));
            fVar17 = (float)iVar5;
        }
        else {
            fVar17 = 0.0;
        }
        fVar16 = *(float *)(lVar2 + 0x14bc);
        if (0.0 <= fVar16) {
            iVar5 = func_0x000180128180(fVar16,fVar16 - *(float *)(lVar2 + 0x18),
                                        *(int32_t *)(lVar2 + 0x90),
                                        *(float *)(lVar2 + 0x94) + *(float *)(lVar2 + 0x94));
            fVar16 = (float)iVar5;
        }
        else {
            fVar16 = 0.0;
        }
        if (0.0 < fVar17 != 0.0 < fVar16) {
            update_object_selection_state();
            *(int32_t *)(lVar2 + 0x1cf4) = 0x3f800000;
            fVar15 = 1.0;
        }
        if (*(float *)(lVar2 + 0x344) <= 0.0) {
            bVar4 = fVar15 < 1.0 & *(byte *)(lVar2 + 0x1cf8);
            *(byte *)(lVar2 + 0x1cf8) = bVar4;
            if ((bVar4 == 0) || (*(longlong *)(lVar2 + 0x1c98) == 0)) {
                if (bVar4 == 0) {
                    lVar12 = *(longlong *)(lVar2 + 0x1cd8);
                }
            }
            else {
                bVar1 = true;
                lVar12 = lVar11;
            }
            *(uint64_t *)(lVar2 + 0x1cd8) = 0;
            lVar9 = lVar12;
        }
    }
    lVar12 = *(longlong *)(lVar2 + 0x1cd8);
    if ((lVar12 != 0) && (*(int *)(lVar2 + 0x1cc0) == 3)) {
        fVar15 = (*(float *)(lVar2 + 0x1cf0) - 0.2) * 20.0;
        if (0.0 <= fVar15) {
            if (1.0 <= fVar15) {
                fVar15 = 1.0;
            }
        }
        else {
            fVar15 = 0.0;
        }
        if (fVar15 <= *(float *)(lVar2 + 0x1cf4)) {
            fVar15 = *(float *)(lVar2 + 0x1cf4);
        }
        *(float *)(lVar2 + 0x1cf4) = fVar15;
        if (*(int *)(lVar2 + 0x3c) < 0) {
            cVar14 = '\0';
        }
        else {
            cVar14 = func_0x0001801281d0(*(int *)(lVar2 + 0x3c),1);
        }
        if (cVar14 != '\0') {
            update_object_selection_state();
            lVar12 = *(longlong *)(lVar2 + 0x1cd8);
        }
        if (*(char *)(lVar2 + 0x134) == '\0') {
            lVar9 = lVar12;
        }
    }
    if ((0.0 <= *(float *)(lVar2 + 0x14c8)) && (*(float *)(lVar2 + 0x14c8) == 0.0)) {
        *(int8_t *)(lVar2 + 0x1cf8) = 1;
    }
    if ((((*(int *)(lVar2 + 0x1b2c) == 0) || (*(char *)(lVar2 + 0x1b3d) != '\0')) &&
        (*(char *)(lVar2 + 0x1cf8) != '\0')) &&
       ((*(float *)(lVar2 + 0x14c8) < 0.0 &&
        (0.0 < *(float *)(lVar2 + 0x151c) || *(float *)(lVar2 + 0x151c) == 0.0)))) {
        if ((*(float *)(lVar2 + 0x118) <= -256000.0 && *(float *)(lVar2 + 0x118) != -256000.0) ||
           (*(float *)(lVar2 + 0x11c) <= -256000.0 && *(float *)(lVar2 + 0x11c) != -256000.0)) {
            cVar14 = '\0';
        }
        else {
            cVar14 = '\x01';
        }
        pfVar6 = (float *)(lVar2 + 0x3b4);
        if (pfVar6 == (float *)0x0) {
            pfVar6 = (float *)(lVar2 + 0x118);
        }
        if ((*pfVar6 <= -256000.0 && *pfVar6 != -256000.0) ||
           (pfVar6[1] <= -256000.0 && pfVar6[1] != -256000.0)) {
            cVar3 = '\0';
        }
        else {
            cVar3 = '\x01';
        }
        if (cVar14 == cVar3) {
            bVar1 = true;
        }
    }
    if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0xc) & 4) == 0)) {
        if (*(int *)(lVar2 + 0x1cc0) == 3) {
            if (*(char *)(lVar2 + 0x135) == '\0') {
                uVar10 = 1;
                puVar8 = auStackX_8;
LAB_180133c1e:
                pfVar6 = (float *)FUN_180131aa0(puVar8,uVar10,0,0,0);
                fVar15 = pfVar6[1];
                if ((*pfVar6 != 0.0) || (fVar15 != 0.0)) {
                    fVar17 = *(float *)(lVar2 + 0xbc);
                    if (*(float *)(lVar2 + 0xb8) <= *(float *)(lVar2 + 0xbc)) {
                        fVar17 = *(float *)(lVar2 + 0xb8);
                    }
                    lVar12 = *(longlong *)(lVar12 + 0x3a0);
                    fVar17 = (float)(int)(fVar17 * *(float *)(lVar2 + 0x18) * 800.0);
                    *(float *)(lVar12 + 0x40) = *pfVar6 * fVar17 + *(float *)(lVar12 + 0x40);
                    *(float *)(lVar12 + 0x44) = fVar15 * fVar17 + *(float *)(lVar12 + 0x44);
                    *(int8_t *)(lVar2 + 0x1d07) = 1;
                    if (((*(uint *)(*(longlong *)(lVar2 + 0x1cd8) + 0xc) & 0x100) == 0) &&
                       (*(float *)(lVar2 + 0x2e04) <= 0.0)) {
                        *(int32_t *)(lVar2 + 0x2e04) = *(int32_t *)(lVar2 + 0x1c);
                    }
                }
            }
        }
        else if (*(int *)(lVar2 + 0x1cc0) == 4) {
            uVar10 = 4;
            puVar8 = auStackX_10;
            goto LAB_180133c1e;
        }
    }
    if (lVar9 == 0) goto LAB_180133d4a;
    lVar12 = *(longlong *)(lVar2 + 0x1c98);
    if (lVar12 == 0) {
LAB_180133ce2:
        *(int16_t *)(lVar2 + 0x1d06) = 0x100;
        if (*(longlong *)(lVar9 + 0x3c0) != 0) {
            lVar9 = *(longlong *)(lVar9 + 0x3c0);
        }
        FUN_18012ed10(lVar9);
        FUN_18012d2e0(lVar9);
        if (*(int *)(lVar9 + 0x3c8) == 0) {
            func_0x000180131810(lVar9,0);
        }
        if (*(int *)(lVar9 + 0x174) == 2) {
            *(int32_t *)(lVar2 + 0x1cfc) = 1;
        }
        if ((*(longlong *)(lVar9 + 0x28) != lVar11) && (*(code **)(lVar2 + 0x1578) != (code *)0x0)) {
            (**(code **)(lVar2 + 0x1578))();
        }
    }
    else if (lVar9 != *(longlong *)(lVar12 + 0x3a8)) {
        lVar11 = *(longlong *)(lVar12 + 0x28);
        goto LAB_180133ce2;
    }
    *(uint64_t *)(lVar2 + 0x1cd8) = 0;
LAB_180133d4a:
    if ((bVar1) && (lVar12 = *(longlong *)(lVar2 + 0x1c98), lVar12 != 0)) {
        plVar13 = (longlong *)(lVar12 + 0x398);
        lVar11 = *plVar13;
        lVar9 = lVar12;
        while (((lVar11 != 0 && ((*(byte *)(lVar9 + 0x174) & 2) == 0)) &&
               ((*(uint *)(lVar9 + 0xc) & 0x15000000) == 0x1000000))) {
            lVar9 = *plVar13;
            plVar13 = (longlong *)(lVar9 + 0x398);
            lVar11 = *plVar13;
        }
        if (lVar9 != lVar12) {
            FUN_18012d2e0(lVar9);
            *(longlong *)(lVar9 + 0x3c0) = lVar12;
            lVar12 = *(longlong *)(lVar2 + 0x1c98);
        }
        *(int16_t *)(lVar2 + 0x1d06) = 0x100;
        if ((*(byte *)(lVar12 + 0x174) & 2) == 0) {
            uVar7 = 0;
        }
        else {
            uVar7 = *(uint *)(lVar2 + 0x1cfc) ^ 1;
            if ((uVar7 == 1) && (*(longlong *)(lVar9 + 0x410) == 0)) {
                *(int32_t *)(lVar12 + 0x3cc) = 0;
            }
        }
        func_0x000180131750(uVar7);
    }
    return;
}

/**
 * 处理次要对象更新
 * 
 * 本函数负责：
 * 1. 处理次要对象的状态更新
 * 2. 管理次要对象的生命周期
 * 3. 处理次要对象的动画和位置更新
 * 4. 协调次要对象与主要对象的交互
 * 5. 更新引擎中与次要对象相关的状态
 */
void process_secondary_object_update(void)
{
    ulonglong *puVar1;
    ulonglong uVar2;
    uint8_t uVar3;
    char cVar4;
    byte bVar5;
    char cVar6;
    int iVar7;
    longlong lVar8;
    float *pfVar9;
    uint uVar10;
    int8_t *puVar11;
    uint64_t uVar13;
    longlong unaff_RBX;
    ulonglong uVar14;
    longlong unaff_RDI;
    char cVar15;
    char unaff_R14B;
    int iVar16;
    ulonglong unaff_R15;
    float fVar17;
    float fVar18;
    float fVar19;
    ulonglong uVar12;
    
    if ((*(longlong *)(unaff_RBX + 0x1ce0) != unaff_RDI) &&
       (*(longlong *)(unaff_RBX + 0x1cd8) == unaff_RDI)) {
        fVar17 = *(float *)(unaff_RBX + 0x1cf4) - *(float *)(unaff_RBX + 0x18) * 10.0;
        if (fVar17 <= 0.0) {
            fVar17 = 0.0;
        }
        *(float *)(unaff_RBX + 0x1cf4) = fVar17;
        if ((*(float *)(unaff_RBX + 0x1dc8) <= 0.0) && (fVar17 <= 0.0)) {
            *(ulonglong *)(unaff_RBX + 0x1ce0) = unaff_R15;
        }
    }
    if (*(longlong *)(unaff_RBX + 0x1cd8) == 0) {
        if (0.0 <= *(float *)(unaff_RBX + 0x1494)) {
            if (*(float *)(unaff_RBX + 0x1494) != 0.0) goto LAB_18013389d;
            cVar15 = '\x01';
        }
        else {
            cVar15 = '\0';
        }
LAB_1801338a5:
        if ((*(char *)(unaff_RBX + 0x134) == (char)unaff_RDI) || (*(int *)(unaff_RBX + 0x3c) < 0))
        goto LAB_1801338ca;
        bVar5 = 1;
        cVar4 = func_0x0001801281d0();
        if ((cVar4 == '\0') || ((*(byte *)(unaff_RBX + 8) & bVar5) == 0)) goto LAB_1801338ca;
    }
    else {
LAB_18013389d:
        cVar15 = '\0';
        if (*(longlong *)(unaff_RBX + 0x1cd8) == 0) goto LAB_1801338a5;
LAB_1801338ca:
        bVar5 = 0;
    }
    if (((cVar15 != '\0') || (bVar5 != 0)) &&
       ((lVar8 = *(longlong *)(unaff_RBX + 0x1c98), lVar8 != 0 ||
        (lVar8 = find_available_game_object(*(int *)(unaff_RBX + 0x1ab0) + -1,0x80000001,0xffffffff), lVar8 != 0)))
       ) {
        *(longlong *)(unaff_RBX + 0x1ce0) = lVar8;
        *(longlong *)(unaff_RBX + 0x1cd8) = lVar8;
        *(byte *)(unaff_RBX + 0x1cf8) = bVar5 ^ 1;
        *(uint *)(unaff_RBX + 0x1cc0) = (bVar5 ^ 1) + 3;
        *(ulonglong *)(unaff_RBX + 0x1cf0) = unaff_R15;
    }
    fVar17 = *(float *)(unaff_RBX + 0x18) + *(float *)(unaff_RBX + 0x1cf0);
    *(float *)(unaff_RBX + 0x1cf0) = fVar17;
    iVar16 = (int)unaff_R15;
    if ((*(longlong *)(unaff_RBX + 0x1cd8) != unaff_RDI) && (*(int *)(unaff_RBX + 0x1cc0) == 4)) {
        fVar17 = (fVar17 - 0.2) * 20.0;
        if (0.0 <= fVar17) {
            if (1.0 <= fVar17) {
                fVar17 = 1.0;
            }
        }
        else {
            fVar17 = 0.0;
        }
        if (fVar17 <= *(float *)(unaff_RBX + 0x1cf4)) {
            fVar17 = *(float *)(unaff_RBX + 0x1cf4);
        }
        *(float *)(unaff_RBX + 0x1cf4) = fVar17;
        fVar19 = *(float *)(unaff_RBX + 0x14b8);
        if (0.0 <= fVar19) {
            iVar7 = func_0x000180128180(fVar19,fVar19 - *(float *)(unaff_RBX + 0x18),
                                        *(int32_t *)(unaff_RBX + 0x90),
                                        *(float *)(unaff_RBX + 0x94) + *(float *)(unaff_RBX + 0x94));
            fVar19 = (float)iVar7;
        }
        else {
            fVar19 = 0.0;
        }
        fVar18 = *(float *)(unaff_RBX + 0x14bc);
        if (0.0 <= fVar18) {
            iVar7 = func_0x000180128180(fVar18,fVar18 - *(float *)(unaff_RBX + 0x18),
                                        *(int32_t *)(unaff_RBX + 0x90),
                                        *(float *)(unaff_RBX + 0x94) + *(float *)(unaff_RBX + 0x94));
            fVar18 = (float)iVar7;
        }
        else {
            fVar18 = 0.0;
        }
        uVar3 = (uint8_t)(unaff_R15 >> 8);
        if ((int)CONCAT71(uVar3,0.0 < fVar19) != (int)CONCAT71(uVar3,0.0 < fVar18)) {
            update_object_selection_state();
            *(int32_t *)(unaff_RBX + 0x1cf4) = 0x3f800000;
            fVar17 = 1.0;
        }
        if (*(float *)(unaff_RBX + 0x344) <= 0.0) {
            bVar5 = fVar17 < 1.0 & *(byte *)(unaff_RBX + 0x1cf8);
            *(byte *)(unaff_RBX + 0x1cf8) = bVar5;
            if ((bVar5 == 0) || (*(longlong *)(unaff_RBX + 0x1c98) == unaff_RDI)) {
                if (bVar5 == 0) {
                    unaff_RDI = *(longlong *)(unaff_RBX + 0x1cd8);
                }
            }
            else {
                unaff_R14B = '\x01';
            }
            *(ulonglong *)(unaff_RBX + 0x1cd8) = unaff_R15;
        }
    }
    lVar8 = *(longlong *)(unaff_RBX + 0x1cd8);
    cVar15 = (char)unaff_R15;
    if ((lVar8 != 0) && (*(int *)(unaff_RBX + 0x1cc0) == 3)) {
        fVar17 = (*(float *)(unaff_RBX + 0x1cf0) - 0.2) * 20.0;
        if (0.0 <= fVar17) {
            if (1.0 <= fVar17) {
                fVar17 = 1.0;
            }
        }
        else {
            fVar17 = 0.0;
        }
        if (fVar17 <= *(float *)(unaff_RBX + 0x1cf4)) {
            fVar17 = *(float *)(unaff_RBX + 0x1cf4);
        }
        *(float *)(unaff_RBX + 0x1cf4) = fVar17;
        if (*(int *)(unaff_RBX + 0x3c) < 0) {
            cVar4 = '\0';
        }
        else {
            cVar4 = func_0x0001801281d0(*(int *)(unaff_RBX + 0x3c),1);
        }
        if (cVar4 != '\0') {
            update_object_selection_state();
            lVar8 = *(longlong *)(unaff_RBX + 0x1cd8);
        }
        if (*(char *)(unaff_RBX + 0x134) == cVar15) {
            unaff_RDI = lVar8;
        }
    }
    if ((0.0 <= *(float *)(unaff_RBX + 0x14c8)) && (*(float *)(unaff_RBX + 0x14c8) == 0.0)) {
        *(int8_t *)(unaff_RBX + 0x1cf8) = 1;
    }
    if ((((*(int *)(unaff_RBX + 0x1b2c) == iVar16) || (*(char *)(unaff_RBX + 0x1b3d) != cVar15)) &&
        (*(char *)(unaff_RBX + 0x1cf8) != cVar15)) &&
       ((*(float *)(unaff_RBX + 0x14c8) < 0.0 &&
        (0.0 < *(float *)(unaff_RBX + 0x151c) || *(float *)(unaff_RBX + 0x151c) == 0.0)))) {
        if ((*(float *)(unaff_RBX + 0x118) <= -256000.0 && *(float *)(unaff_RBX + 0x118) != -256000.0)
           || (*(float *)(unaff_RBX + 0x11c) <= -256000.0 && *(float *)(unaff_RBX + 0x11c) != -256000.0)
           ) {
            cVar4 = '\0';
        }
        else {
            cVar4 = '\x01';
        }
        pfVar9 = (float *)(unaff_RBX + 0x3b4);
        if (pfVar9 == (float *)0x0) {
            pfVar9 = (float *)(unaff_RBX + 0x118);
        }
        if ((*pfVar9 <= -256000.0 && *pfVar9 != -256000.0) ||
           (pfVar9[1] <= -256000.0 && pfVar9[1] != -256000.0)) {
            cVar6 = '\0';
        }
        else {
            cVar6 = '\x01';
        }
        if (cVar4 == cVar6) {
            unaff_R14B = '\x01';
        }
    }
    if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0xc) & 4) == 0)) {
        if (*(int *)(unaff_RBX + 0x1cc0) == 3) {
            if (*(char *)(unaff_RBX + 0x135) == cVar15) {
                uVar13 = 1;
                puVar11 = &stack0x000000a0;
LAB_180133c1e:
                pfVar9 = (float *)FUN_180131aa0(puVar11,uVar13,0,0,0);
                fVar17 = pfVar9[1];
                if ((*pfVar9 != 0.0) || (fVar17 != 0.0)) {
                    fVar19 = *(float *)(unaff_RBX + 0xbc);
                    if (*(float *)(unaff_RBX + 0xb8) <= *(float *)(unaff_RBX + 0xbc)) {
                        fVar19 = *(float *)(unaff_RBX + 0xb8);
                    }
                    lVar8 = *(longlong *)(lVar8 + 0x3a0);
                    fVar19 = (float)(int)(fVar19 * *(float *)(unaff_RBX + 0x18) * 800.0);
                    *(float *)(lVar8 + 0x40) = *pfVar9 * fVar19 + *(float *)(lVar8 + 0x40);
                    *(float *)(lVar8 + 0x44) = fVar17 * fVar19 + *(float *)(lVar8 + 0x44);
                    *(int8_t *)(unaff_RBX + 0x1d07) = 1;
                    if (((*(uint *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0xc) & 0x100) == 0) &&
                       (*(float *)(unaff_RBX + 0x2e04) <= 0.0)) {
                        *(int32_t *)(unaff_RBX + 0x2e04) = *(int32_t *)(unaff_RBX + 0x1c);
                    }
                }
            }
        }
        else if (*(int *)(unaff_RBX + 0x1cc0) == 4) {
            uVar13 = 4;
            puVar11 = &stack0x000000a8;
            goto LAB_180133c1e;
        }
    }
    if (unaff_RDI == 0) goto LAB_180133d4a;
    lVar8 = *(longlong *)(unaff_RBX + 0x1c98);
    uVar14 = unaff_R15;
    if (lVar8 == 0) {
LAB_180133ce2:
        *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
        if (*(longlong *)(unaff_RDI + 0x3c0) != 0) {
            unaff_RDI = *(longlong *)(unaff_RDI + 0x3c0);
        }
        FUN_18012ed10(unaff_RDI);
        FUN_18012d2e0(unaff_RDI);
        if (*(int *)(unaff_RDI + 0x3c8) == iVar16) {
            func_0x000180131810(unaff_RDI,0);
        }
        if (*(int *)(unaff_RDI + 0x174) == 2) {
            *(int32_t *)(unaff_RBX + 0x1cfc) = 1;
        }
        if ((*(ulonglong *)(unaff_RDI + 0x28) != uVar14) &&
           (*(code **)(unaff_RBX + 0x1578) != (code *)0x0)) {
            (**(code **)(unaff_RBX + 0x1578))();
        }
    }
    else if (unaff_RDI != *(longlong *)(lVar8 + 0x3a8)) {
        uVar14 = *(ulonglong *)(lVar8 + 0x28);
        goto LAB_180133ce2;
    }
    *(ulonglong *)(unaff_RBX + 0x1cd8) = unaff_R15;
LAB_180133d4a:
    if ((unaff_R14B != '\0') && (uVar14 = *(ulonglong *)(unaff_RBX + 0x1c98), uVar14 != 0)) {
        puVar1 = (ulonglong *)(uVar14 + 0x398);
        uVar12 = *puVar1;
        uVar2 = uVar14;
        while (((uVar12 != unaff_R15 && ((*(byte *)(uVar2 + 0x174) & 2) == 0)) &&
               ((*(uint *)(uVar2 + 0xc) & 0x15000000) == 0x1000000))) {
            uVar2 = *puVar1;
            puVar1 = (ulonglong *)(uVar2 + 0x398);
            uVar12 = *puVar1;
        }
        if (uVar2 != uVar14) {
            FUN_18012d2e0(uVar2);
            *(ulonglong *)(uVar2 + 0x3c0) = uVar14;
            uVar14 = *(ulonglong *)(unaff_RBX + 0x1c98);
        }
        *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
        if ((*(byte *)(uVar14 + 0x174) & 2) == 0) {
            uVar12 = unaff_R15 & 0xffffffff;
        }
        else {
            uVar10 = *(uint *)(unaff_RBX + 0x1cfc) ^ 1;
            uVar12 = (ulonglong)uVar10;
            if ((uVar10 == 1) && (*(ulonglong *)(uVar2 + 0x410) == unaff_R15)) {
                *(int *)(uVar14 + 0x3cc) = iVar16;
            }
        }
        func_0x000180131750(uVar12);
    }
    return;
}

/**
 * 重置当前对象选择
 * 
 * 本函数负责：
 * 1. 清除当前选中的对象引用
 * 2. 重置对象选择相关的状态标志
 * 3. 为下一次对象选择做准备
 * 4. 更新引擎的全局选择状态
 */
void reset_current_object_selection(void)
{
    longlong unaff_RBX;
    uint64_t unaff_R15;
    
    *(uint64_t *)(unaff_RBX + 0x1cd8) = unaff_R15;
    return;
}

// 全局变量定义
uint64_t SYSTEM_DATA_MANAGER_A = 0;  // 全局引擎状态指针

// 函数声明
void initialize_object_selection(longlong engine_context);
void update_object_animation_state(longlong engine_context);
void update_object_position_and_movement(longlong engine_context);
void update_object_lifecycle(longlong engine_context);
void process_global_object_updates(longlong engine_context);
void update_object_animation_time(uint64_t object_ptr);
void process_animation_state_transitions(uint64_t object_ptr, uint64_t animation_data);
void update_animation_blending_parameters(uint64_t object_ptr);
void process_animation_events(uint64_t object_ptr);
void synchronize_animation_with_object_state(uint64_t object_ptr);
bool check_object_criteria(longlong object_ptr, int criteria);
void initialize_object_lifecycle(longlong engine_context);
longlong find_available_game_object(int search_criteria, int start_index, int search_direction);
void update_object_selection_state(void);
void FUN_18012ed10(longlong param1);
void FUN_18012d2e0(longlong param1);
void func_0x000180131810(longlong param1, int param2);
void func_0x000180131750(ulonglong param1);
uint64_t FUN_180131aa0(uint64_t param1, uint64_t param2, int param3, int param4, int param5);
char func_0x0001801281d0(int param1, int param2);
int func_0x000180128180(float param1, float param2, int32_t param3, float param4);