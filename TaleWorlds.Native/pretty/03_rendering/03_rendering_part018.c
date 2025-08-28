#include "TaleWorlds.Native.Split.h"

// 03_rendering_part018.c - 渲染系统高级标志位和材质处理模块
// 包含3个核心函数：
// 1. process_rendering_flags - 处理渲染标志位和状态更新
// 2. initialize_material_parameters - 初始化材质参数
// 3. parse_material_data - 解析材质数据

// 函数: 处理渲染标志位和状态更新
// 原函数名: FUN_180278270
void process_rendering_flags(longlong render_context)
{
    ulonglong current_flag;
    ulonglong end_flag;
    int flag_index;
    uint flag_mask;
    int item_count;
    int flag_count;
    
    flag_index = 1;
    flag_count = *(int *)(render_context + 0x58); // 获取标志位数量
    
    if (flag_count > 1) {
        do {
            current_flag = *(ulonglong *)(render_context + 0x38); // 获取当前标志位起始地址
            end_flag = *(ulonglong *)(render_context + 0x40); // 获取结束地址
            flag_mask = 1 << ((byte)flag_index & 0x1f); // 创建标志位掩码
            item_count = 0;
            
            // 第一遍：统计符合条件的项
            if (current_flag < end_flag) {
                do {
                    if ((*(uint *)(current_flag + 8) & flag_mask) != 0) {
                        item_count++;
                    }
                    current_flag = current_flag + 0x10; // 移动到下一项
                } while (current_flag < end_flag);
                
                // 如果没有找到符合条件的项，跳转到清理部分
                if (item_count == 0) goto cleanup_flags;
            }
            else {
            cleanup_flags:
                // 清理标志位
                if (current_flag < end_flag) {
                    do {
                        if ((1 << ((byte)flag_index - 1 & 0x1f) & *(uint *)(current_flag + 8)) != 0) {
                            *(uint *)(current_flag + 8) = *(uint *)(current_flag + 8) | flag_mask;
                        }
                        current_flag = current_flag + 0x10;
                    } while (current_flag < *(ulonglong *)(render_context + 0x40));
                }
            }
            flag_index++;
        } while (flag_index < flag_count);
    }
    
    // 更新渲染状态计数器
    update_render_counters(render_context);
    return;
}

// 函数: 更新渲染计数器
// 原函数名: 更新渲染计数器的内联函数
void update_render_counters(longlong render_context)
{
    longlong counter_ptr;
    
    counter_ptr = *(longlong *)(render_context + 0x28);
    if (counter_ptr != 0) {
        *(short *)(counter_ptr + 0x2b0) = *(short *)(counter_ptr + 0x2b0) + 1;
        counter_ptr = *(longlong *)(counter_ptr + 0x168);
        if (counter_ptr != 0) {
            *(short *)(counter_ptr + 0x2b0) = *(short *)(counter_ptr + 0x2b0) + 1;
            // 递归更新所有关联的计数器
            for (counter_ptr = *(longlong *)(counter_ptr + 0x168); counter_ptr != 0; 
                 counter_ptr = *(longlong *)(counter_ptr + 0x168)) {
                *(short *)(counter_ptr + 0x2b0) = *(short *)(counter_ptr + 0x2b0) + 1;
            }
            return;
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 初始化材质参数和资源管理
// 原函数名: FUN_1802786d0
void initialize_material_parameters(longlong material_context, undefined8 resource_manager, undefined8 texture_data, undefined1 flags)
{
    longlong *previous_resource;
    longlong *new_resource;
    
    // 初始化材质上下文的基本参数
    *(byte *)(material_context + 0x60) = 0;       // 材质状态标志
    *(undefined8 *)(material_context + 0x58) = 0; // 清空材质指针
    *(undefined8 *)(material_context + 0x30) = 0; // 清空纹理数组
    
    // 初始化浮点参数数组 - 设置默认值
    *(undefined8 *)(material_context + 0x330) = 0x3f800000;    // float[0] = 1.0f
    *(undefined8 *)(material_context + 0x338) = 0;               // float[1] = 0.0f
    *(undefined8 *)(material_context + 0x340) = 0x3f80000000000000; // float[2] = 1.0
    *(undefined8 *)(material_context + 0x348) = 0;               // float[3] = 0.0
    *(undefined8 *)(material_context + 0x350) = 0;               // float[4] = 0.0
    *(undefined8 *)(material_context + 0x358) = 0x3f800000;    // float[5] = 1.0f
    *(undefined8 *)(material_context + 0x360) = 0;               // float[6] = 0.0f
    *(undefined8 *)(material_context + 0x368) = 0x3f80000000000000; // float[7] = 1.0
    *(undefined8 *)(material_context + 0x370) = 0x3f800000;    // float[8] = 1.0f
    *(undefined8 *)(material_context + 0x378) = 0;               // float[9] = 0.0f
    *(undefined8 *)(material_context + 0x380) = 0x3f80000000000000; // float[10] = 1.0
    *(undefined8 *)(material_context + 0x388) = 0;               // float[11] = 0.0f
    
    // 初始化整数参数数组
    *(undefined4 *)(material_context + 0x390) = 0;   // int[0] = 0
    *(undefined4 *)(material_context + 0x394) = 0;   // int[1] = 0
    *(undefined4 *)(material_context + 0x398) = 0x3f800000; // int[2] = 1.0f (float)
    *(undefined4 *)(material_context + 0x39c) = 0;   // int[3] = 0
    *(undefined4 *)(material_context + 0x3a0) = 0;   // int[4] = 0
    *(undefined4 *)(material_context + 0x3a4) = 0;   // int[5] = 0
    *(undefined4 *)(material_context + 0x3a8) = 0;   // int[6] = 0
    *(undefined4 *)(material_context + 0x3ac) = 0x3f800000; // int[7] = 1.0f (float)
    
    // 设置材质属性标志
    *(byte *)(material_context + 0x3b0) = 0xff;   // 材质类型标志
    *(byte *)(material_context + 800) = 1;         // 激活标志
    
    // 初始化渲染状态
    *(undefined4 *)(material_context + 0x210) = 0x21; // 渲染模式
    *(byte *)(material_context + 0x3c0) = 0;      // 额外状态标志
    
    // 设置材质参数限制
    *(undefined4 *)(material_context + 0x328) = 0xffffffff; // 最大值限制
    *(undefined4 *)(material_context + 0x3c4) = 0;         // 最小值限制
    
    // 清空辅助参数
    *(undefined4 *)(material_context + 0x324) = 0;   // 辅助参数1
    *(byte *)(material_context + 0x32c) = 0;       // 辅助参数2
    
    // 设置材质精度参数
    *(undefined4 *)(material_context + 0x68) = 0x7f7fffff; // 最大浮点值
    *(undefined4 *)(material_context + 0x7c) = 0;         // 最小浮点值
    
    // 释放旧的资源管理器
    previous_resource = *(longlong **)(material_context + 0x3b8);
    *(undefined8 *)(material_context + 0x3b8) = 0; // 清空资源管理器指针
    if (previous_resource != (longlong *)0x0) {
        // 调用资源管理器的释放方法
        (**(code **)(*previous_resource + 0x38))(previous_resource, 0, texture_data, flags, 0xfffffffffffffffe);
    }
    
    // 初始化材质数据缓冲区
    *(undefined4 *)(material_context + 0x248) = 0xffffffff; // 设置缓冲区大小
    
    // 创建新的资源管理器
    new_resource = (longlong *)create_resource_manager(_DAT_180c8ed18, 0x30, 8, 0x1e);
    *new_resource = (longlong)&UNK_180a21690; // 设置资源类型
    *new_resource = (longlong)&UNK_180a21720; // 设置资源路径
    *(undefined4 *)(new_resource + 1) = 0;    // 清空资源标志
    *new_resource = (longlong)&UNK_180a16940; // 设置资源数据
    new_resource[3] = 0;                      // 清空资源计数
    new_resource[4] = 0;                      // 清空资源索引
    *(undefined4 *)(new_resource + 2) = 0;    // 清空资源状态
    *(undefined4 *)(new_resource + 5) = 0;    // 清空资源标志
    
    // 初始化新的资源管理器
    (**(code **)(*new_resource + 0x28))(new_resource);
    
    // 替换资源管理器指针
    previous_resource = *(longlong **)(material_context + 0x3c8);
    *(longlong **)(material_context + 0x3c8) = new_resource;
    if (previous_resource != (longlong *)0x0) {
        // 释放旧的资源管理器
        (**(code **)(*previous_resource + 0x38))();
    }
    
    // 完成材质初始化
    *(byte *)(material_context + 0x322) = 0;  // 设置初始化完成标志
    *(undefined4 *)(material_context + 0x3b4) = 0; // 清空错误标志
    
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180278870(longlong param_1,longlong param_2,longlong param_3)
void FUN_180278870(longlong param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  char *pcVar13;
  char *pcVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_358 [32];
  undefined4 uStack_338;
  undefined4 uStack_334;
  longlong lStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  undefined4 uStack_2fc;
  longlong lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  longlong *aplStack_2b0 [2];
  longlong *plStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined *puStack_228;
  undefined1 *puStack_220;
  undefined4 uStack_218;
  undefined1 auStack_210 [136];
  undefined *puStack_188;
  undefined *puStack_180;
  undefined4 uStack_178;
  undefined auStack_170 [136];
  ulonglong uStack_e8;
  
  uStack_248 = 0xfffffffffffffffe;
  uStack_e8 = _DAT_180bf00a8 ^ (ulonglong)auStack_358;
  plVar11 = (longlong *)0x0;
  puStack_228 = &UNK_1809fcc28;
  puStack_220 = auStack_210;
  uStack_218 = 0;
  auStack_210[0] = 0;
  pcVar14 = "material";
  do {
    pcVar13 = pcVar14;
    pcVar14 = pcVar13 + 1;
  } while (*pcVar14 != '\0');
  puVar5 = *(undefined8 **)(param_3 + 0x40);
  do {
    lStack_330 = param_3;
    uStack_2e8 = param_2;
    if (puVar5 == (undefined8 *)0x0) {
LAB_180278a68:
      puVar5 = *(undefined8 **)(lStack_330 + 0x30);
      if (puVar5 == (undefined8 *)0x0) {
LAB_18027916b:
        lVar8 = lStack_330;
        uStack_334 = 0;
        lVar7 = FUN_1800a02a0(lStack_330,&UNK_180a16828);
        if (lVar7 != 0) {
          pcVar14 = (char *)0x180d48d24;
          if (*(char **)(lVar7 + 8) != (char *)0x0) {
            pcVar14 = *(char **)(lVar7 + 8);
          }
          uVar9 = 0xffffffffffffffff;
          do {
            uVar9 = uVar9 + 1;
          } while (pcVar14[uVar9] != '\0');
          if (((uVar9 < 3) || (*pcVar14 != '0')) ||
             (puVar10 = &UNK_180a3cb84, (pcVar14[1] + 0xa8U & 0xdf) != 0)) {
            puVar10 = &UNK_180a063a0;
          }
          FUN_18010cbc0(pcVar14,puVar10,&uStack_334);
          puVar4 = (undefined4 *)FUN_18039ffc0(param_1);
          *puVar4 = 0;
          puVar4[2] = uStack_334;
          plVar2 = *(longlong **)(param_2 + 0x18);
          LOCK();
          plVar6 = plVar2 + 1;
          lVar7 = *plVar6;
          *plVar6 = *plVar6 + 0x28;
          UNLOCK();
          uVar9 = lVar7 + 0xfU & 0xfffffffffffffff0;
          plVar6 = plVar11;
          if (uVar9 + 0x18 < 0x2000000) {
            plVar6 = (longlong *)(uVar9 + *plVar2);
          }
          plVar6[2] = (longlong)puVar4;
          *plVar6 = param_2 + 8;
          plVar6[1] = *(longlong *)(param_2 + 0x10);
          **(undefined8 **)(param_2 + 0x10) = plVar6;
          *(longlong **)(param_2 + 0x10) = plVar6;
          *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 1;
        }
        lVar7 = FUN_1800a02a0(lVar8,&UNK_180a16840);
        if (lVar7 != 0) {
          lVar8 = 0x180d48d24;
          if (*(longlong *)(lVar7 + 8) != 0) {
            lVar8 = *(longlong *)(lVar7 + 8);
          }
          (**(code **)(puStack_228 + 0x10))(&puStack_228,lVar8);
          puVar4 = (undefined4 *)FUN_18039ffc0(param_1);
          *puVar4 = 2;
          puVar5 = (undefined8 *)FUN_1800b30d0(_DAT_180c86930,&plStack_2a0,&puStack_228,1);
          *(undefined8 *)(puVar4 + 2) = *puVar5;
          if (plStack_2a0 != (longlong *)0x0) {
            (**(code **)(*plStack_2a0 + 0x38))();
          }
          plVar2 = *(longlong **)(param_2 + 0x18);
          LOCK();
          plVar6 = plVar2 + 1;
          lVar8 = *plVar6;
          *plVar6 = *plVar6 + 0x28;
          UNLOCK();
          uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
          plVar6 = plVar11;
          if (uVar9 + 0x18 < 0x2000000) {
            plVar6 = (longlong *)(uVar9 + *plVar2);
          }
          plVar6[2] = (longlong)puVar4;
          *plVar6 = param_2 + 8;
          plVar6[1] = *(longlong *)(param_2 + 0x10);
          **(undefined8 **)(param_2 + 0x10) = plVar6;
          *(longlong **)(param_2 + 0x10) = plVar6;
          *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 1;
          lVar8 = lStack_330;
        }
        uStack_328 = 0x3f800000;
        uStack_320 = 0;
        uStack_318 = 0x3f80000000000000;
        uStack_310 = 0;
        fStack_308 = 0.0;
        fStack_304 = 0.0;
        fStack_300 = 1.0;
        uStack_2fc = 0;
        lStack_2f8 = 0;
        uStack_2f0 = 0x3f80000000000000;
        uStack_288 = 0;
        uStack_284 = 0;
        uStack_280 = 0;
        uStack_27c = 0x3f800000;
        FUN_1801c1720(&uStack_328,&uStack_2d8);
        FUN_180085020(&uStack_328,&fStack_2c8);
        lVar7 = FUN_180631960(lVar8,&UNK_180a16808,&uStack_288);
        if (((lVar7 != 0) || (lVar7 = FUN_180631960(lVar8,&UNK_180a16818,&uStack_2d8), lVar7 != 0))
           || (lVar7 = FUN_180631960(lVar8,&UNK_180a0f108,&fStack_2c8), lVar7 != 0)) {
          lStack_2f8 = CONCAT44(uStack_284,uStack_288);
          uStack_2f0 = CONCAT44(uStack_27c,uStack_280);
          uStack_278 = 0x3f800000;
          uStack_270 = 0;
          uStack_268 = 0x3f80000000000000;
          uStack_260 = 0;
          fStack_258 = 0.0;
          fStack_254 = 0.0;
          fStack_250 = 1.0;
          uStack_24c = 0;
          uStack_2e8 = lStack_2f8;
          uStack_2e0 = uStack_2f0;
          FUN_180085c10(&uStack_278,uStack_2d0);
          FUN_180085970(&uStack_278,uStack_2d8);
          FUN_180085ac0(&uStack_278,uStack_2d4);
          uVar3 = uStack_270._4_4_;
          uStack_318 = uStack_268;
          uStack_310._0_4_ = (float)uStack_260;
          uStack_310._4_4_ = uStack_260._4_4_;
          fStack_308 = fStack_258;
          fStack_304 = fStack_254;
          fStack_300 = fStack_250;
          uStack_2fc = uStack_24c;
          fVar18 = (float)uStack_278 * fStack_2c8;
          fVar21 = uStack_278._4_4_ * fStack_2c8;
          fVar19 = (float)uStack_270 * fStack_2c8;
          fVar15 = (float)uStack_268 * fStack_2c4;
          fVar17 = uStack_268._4_4_ * fStack_2c4;
          fVar20 = (float)uStack_310 * fStack_2c4;
          fVar16 = fStack_258 * fStack_2c0;
          fVar22 = fStack_254 * fStack_2c0;
          fVar23 = fStack_250 * fStack_2c0;
          puVar4 = (undefined4 *)FUN_18039ffc0(param_1);
          *puVar4 = 3;
          uStack_328 = CONCAT44(fVar21,fVar18);
          uStack_320 = CONCAT44(uVar3,fVar19);
          puVar4[2] = fVar18;
          puVar4[3] = fVar21;
          puVar4[4] = fVar19;
          puVar4[5] = uVar3;
          uStack_318 = CONCAT44(fVar17,fVar15);
          uStack_310 = CONCAT44(uStack_310._4_4_,fVar20);
          puVar4[6] = fVar15;
          puVar4[7] = fVar17;
          puVar4[8] = fVar20;
          puVar4[9] = uStack_310._4_4_;
          puVar4[10] = fVar16;
          puVar4[0xb] = fVar22;
          puVar4[0xc] = fVar23;
          puVar4[0xd] = uStack_2fc;
          puVar4[0xe] = (undefined4)uStack_2e8;
          puVar4[0xf] = uStack_2e8._4_4_;
          puVar4[0x10] = (undefined4)uStack_2e0;
          puVar4[0x11] = uStack_2e0._4_4_;
          plVar2 = *(longlong **)(param_2 + 0x18);
          LOCK();
          plVar6 = plVar2 + 1;
          lVar7 = *plVar6;
          *plVar6 = *plVar6 + 0x28;
          UNLOCK();
          uVar9 = lVar7 + 0xfU & 0xfffffffffffffff0;
          plVar6 = plVar11;
          if (uVar9 + 0x18 < 0x2000000) {
            plVar6 = (longlong *)(uVar9 + *plVar2);
          }
          plVar6[2] = (longlong)puVar4;
          *plVar6 = param_2 + 8;
          plVar6[1] = *(longlong *)(param_2 + 0x10);
          **(undefined8 **)(param_2 + 0x10) = plVar6;
          *(longlong **)(param_2 + 0x10) = plVar6;
          *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 1;
          fStack_308 = fVar16;
          fStack_304 = fVar22;
          fStack_300 = fVar23;
        }
        lVar8 = FUN_180631b90(lVar8,&UNK_180a167f0,&uStack_240);
        if (lVar8 != 0) {
          puVar4 = (undefined4 *)FUN_18039ffc0(param_1);
          *puVar4 = 4;
          puVar4[0x42] = uStack_240;
          puVar4[0x43] = uStack_23c;
          puVar4[0x44] = uStack_238;
          puVar4[0x45] = uStack_234;
          plVar2 = *(longlong **)(param_2 + 0x18);
          LOCK();
          plVar6 = plVar2 + 1;
          lVar8 = *plVar6;
          *plVar6 = *plVar6 + 0x28;
          UNLOCK();
          uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
          if (uVar9 + 0x18 < 0x2000000) {
            plVar11 = (longlong *)(*plVar2 + uVar9);
          }
          plVar11[2] = (longlong)puVar4;
          *plVar11 = param_2 + 8;
          plVar11[1] = *(longlong *)(param_2 + 0x10);
          **(undefined8 **)(param_2 + 0x10) = plVar11;
          *(longlong **)(param_2 + 0x10) = plVar11;
          *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 1;
        }
        puStack_228 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
        FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_358);
      }
      puStack_188 = &UNK_1809fcc28;
      puStack_180 = auStack_170;
      uStack_178 = 0;
      auStack_170[0] = 0;
LAB_180278aab:
      do {
        pcVar14 = "name";
        do {
          pcVar13 = pcVar14;
          pcVar14 = pcVar13 + 1;
        } while (*pcVar14 != '\0');
        for (puVar12 = (undefined8 *)puVar5[8]; puVar12 != (undefined8 *)0x0;
            puVar12 = (undefined8 *)puVar12[6]) {
          pcVar14 = (char *)*puVar12;
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)0x180d48d24;
            plVar6 = plVar11;
          }
          else {
            plVar6 = (longlong *)puVar12[2];
          }
          if (plVar6 == (longlong *)(pcVar13 + -0x180a03a83)) {
            pcVar1 = (char *)((longlong)plVar6 + (longlong)pcVar14);
            if (pcVar1 <= pcVar14) {
LAB_180278b10:
              lVar8 = 0x180d48d24;
              if (puVar12[1] != 0) {
                lVar8 = puVar12[1];
              }
              (**(code **)(puStack_188 + 0x10))(&puStack_188,lVar8);
              break;
            }
            lVar8 = (longlong)&DAT_180a03a84 - (longlong)pcVar14;
            while (*pcVar14 == pcVar14[lVar8]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar1 <= pcVar14) goto LAB_180278b10;
            }
          }
        }
        uStack_338 = 0;
        pcVar14 = "material";
        do {
          pcVar13 = pcVar14;
          pcVar14 = pcVar13 + 1;
        } while (*pcVar14 != '\0');
        for (puVar12 = (undefined8 *)puVar5[8]; puVar12 != (undefined8 *)0x0;
            puVar12 = (undefined8 *)puVar12[6]) {
          pcVar14 = (char *)*puVar12;
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)0x180d48d24;
            plVar6 = plVar11;
          }
          else {
            plVar6 = (longlong *)puVar12[2];
          }
          if (plVar6 == (longlong *)(pcVar13 + -0x180a04ebf)) {
            pcVar1 = (char *)((longlong)plVar6 + (longlong)pcVar14);
            if (pcVar1 <= pcVar14) {
LAB_180278ba0:
              lVar8 = 0x180d48d24;
              if (puVar12[1] != 0) {
                lVar8 = puVar12[1];
              }
              (**(code **)(puStack_228 + 0x10))(&puStack_228,lVar8);
              plVar2 = *(longlong **)(param_1 + 0x50);
              LOCK();
              plVar6 = plVar2 + 1;
              lVar8 = *plVar6;
              *plVar6 = *plVar6 + 0x128;
              UNLOCK();
              uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
              if (uVar9 + 0x118 < 0x2000000) {
                plVar11 = (longlong *)(*plVar2 + uVar9);
              }
                    // WARNING: Subroutine does not return
              memset((undefined *)((longlong)plVar11 + 4),0,0x114);
            }
            lVar8 = (longlong)&UNK_180a04ec0 - (longlong)pcVar14;
            while (*pcVar14 == pcVar14[lVar8]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar1 <= pcVar14) goto LAB_180278ba0;
            }
          }
        }
        pcVar14 = "factor";
        do {
          pcVar13 = pcVar14;
          pcVar14 = pcVar13 + 1;
        } while (*pcVar14 != '\0');
        for (puVar12 = (undefined8 *)puVar5[8]; puVar12 != (undefined8 *)0x0;
            puVar12 = (undefined8 *)puVar12[6]) {
          pcVar14 = (char *)*puVar12;
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)0x180d48d24;
            plVar6 = plVar11;
          }
          else {
            plVar6 = (longlong *)puVar12[2];
          }
          if (plVar6 == (longlong *)(pcVar13 + -0x180a1674b)) {
            pcVar1 = (char *)((longlong)plVar6 + (longlong)pcVar14);
            if (pcVar1 <= pcVar14) {
LAB_180278d28:
              lVar8 = 0x180d48d24;
              if (puVar12[1] != 0) {
                lVar8 = puVar12[1];
              }
              FUN_18010cbc0(lVar8,&UNK_180a063a0,&uStack_338);
              plVar2 = *(longlong **)(param_1 + 0x50);
              LOCK();
              plVar6 = plVar2 + 1;
              lVar8 = *plVar6;
              *plVar6 = *plVar6 + 0x128;
              UNLOCK();
              uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
              if (uVar9 + 0x118 < 0x2000000) {
                plVar11 = (longlong *)(*plVar2 + uVar9);
              }
                    // WARNING: Subroutine does not return
              memset((undefined *)((longlong)plVar11 + 4),0,0x114);
            }
            lVar8 = (longlong)&UNK_180a1674c - (longlong)pcVar14;
            while (*pcVar14 == pcVar14[lVar8]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar1 <= pcVar14) goto LAB_180278d28;
            }
          }
        }
        pcVar14 = "factor2";
        do {
          pcVar13 = pcVar14;
          pcVar14 = pcVar13 + 1;
        } while (*pcVar14 != '\0');
        for (puVar12 = (undefined8 *)puVar5[8]; puVar12 != (undefined8 *)0x0;
            puVar12 = (undefined8 *)puVar12[6]) {
          pcVar14 = (char *)*puVar12;
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)0x180d48d24;
            plVar6 = plVar11;
          }
          else {
            plVar6 = (longlong *)puVar12[2];
          }
          if (plVar6 == (longlong *)(pcVar13 + -0x180a167ff)) {
            pcVar1 = (char *)((longlong)plVar6 + (longlong)pcVar14);
            if (pcVar1 <= pcVar14) {
LAB_180278e70:
              lVar8 = 0x180d48d24;
              if (puVar12[1] != 0) {
                lVar8 = puVar12[1];
              }
              FUN_18010cbc0(lVar8,&UNK_180a063a0,&uStack_338);
              plVar2 = *(longlong **)(param_1 + 0x50);
              LOCK();
              plVar6 = plVar2 + 1;
              lVar8 = *plVar6;
              *plVar6 = *plVar6 + 0x128;
              UNLOCK();
              uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
              if (uVar9 + 0x118 < 0x2000000) {
                plVar11 = (longlong *)(*plVar2 + uVar9);
              }
                    // WARNING: Subroutine does not return
              memset((undefined *)((longlong)plVar11 + 4),0,0x114);
            }
            lVar8 = (longlong)&UNK_180a16800 - (longlong)pcVar14;
            while (*pcVar14 == pcVar14[lVar8]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar1 <= pcVar14) goto LAB_180278e70;
            }
          }
        }
        lVar8 = FUN_180631b90(puVar5,&UNK_180a167e0,&uStack_298);
        if (lVar8 != 0) {
          plVar2 = *(longlong **)(param_1 + 0x50);
          LOCK();
          plVar6 = plVar2 + 1;
          lVar8 = *plVar6;
          *plVar6 = *plVar6 + 0x128;
          UNLOCK();
          uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
          if (uVar9 + 0x118 < 0x2000000) {
            plVar11 = (longlong *)(*plVar2 + uVar9);
          }
                    // WARNING: Subroutine does not return
          memset((undefined *)((longlong)plVar11 + 4),0,0x114);
        }
        lVar8 = FUN_180631b90(puVar5,&UNK_180a167f0,&uStack_298);
        if (lVar8 != 0) {
          puVar4 = (undefined4 *)FUN_18039ffc0(param_1);
          *puVar4 = 9;
          puVar4[0x42] = uStack_298;
          puVar4[0x43] = uStack_294;
          puVar4[0x44] = uStack_290;
          puVar4[0x45] = uStack_28c;
          puVar10 = &DAT_18098bc73;
          if (puStack_180 != (undefined *)0x0) {
            puVar10 = puStack_180;
          }
          strcpy_s(puVar4 + 2,0x80,puVar10);
          plVar2 = *(longlong **)(param_2 + 0x18);
          LOCK();
          plVar6 = plVar2 + 1;
          lVar8 = *plVar6;
          *plVar6 = *plVar6 + 0x28;
          UNLOCK();
          uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
          plVar6 = plVar11;
          if (uVar9 + 0x18 < 0x2000000) {
            plVar6 = (longlong *)(uVar9 + *plVar2);
          }
          plVar6[2] = (longlong)puVar4;
          *plVar6 = param_2 + 8;
          plVar6[1] = *(longlong *)(param_2 + 0x10);
          **(undefined8 **)(param_2 + 0x10) = plVar6;
          *(longlong **)(param_2 + 0x10) = plVar6;
          *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 1;
        }
        pcVar14 = "mesh";
        do {
          pcVar13 = pcVar14;
          pcVar14 = pcVar13 + 1;
        } while (*pcVar14 != '\0');
        while( true ) {
          do {
            puVar5 = (undefined8 *)puVar5[0xb];
            if (puVar5 == (undefined8 *)0x0) {
              puStack_188 = &UNK_18098bcb0;
              goto LAB_18027916b;
            }
            pcVar14 = (char *)*puVar5;
            if (pcVar14 == (char *)0x0) {
              pcVar14 = (char *)0x180d48d24;
              plVar6 = plVar11;
            }
            else {
              plVar6 = (longlong *)puVar5[2];
            }
          } while (plVar6 != (longlong *)(pcVar13 + -0x180a0f3e7));
          pcVar1 = (char *)((longlong)plVar6 + (longlong)pcVar14);
          if (pcVar1 <= pcVar14) break;
          lVar8 = (longlong)&UNK_180a0f3e8 - (longlong)pcVar14;
          while (*pcVar14 == pcVar14[lVar8]) {
            pcVar14 = pcVar14 + 1;
            if (pcVar1 <= pcVar14) goto LAB_180278aab;
          }
        }
      } while( true );
    }
    pcVar14 = (char *)*puVar5;
    if (pcVar14 == (char *)0x0) {
      pcVar14 = (char *)0x180d48d24;
      plVar6 = plVar11;
    }
    else {
      plVar6 = (longlong *)puVar5[2];
    }
    if (plVar6 == (longlong *)(pcVar13 + -0x180a04ebf)) {
      pcVar1 = (char *)((longlong)plVar6 + (longlong)pcVar14);
      if (pcVar1 <= pcVar14) {
LAB_1802789a4:
        lVar8 = 0x180d48d24;
        if (puVar5[1] != 0) {
          lVar8 = puVar5[1];
        }
        FUN_18004a180(&puStack_228,lVar8);
        puVar4 = (undefined4 *)FUN_18039ffc0(param_1);
        *puVar4 = 1;
        puVar5 = (undefined8 *)FUN_1800b30d0(_DAT_180c86930,aplStack_2b0,&puStack_228,1);
        *(undefined8 *)(puVar4 + 2) = *puVar5;
        if (aplStack_2b0[0] != (longlong *)0x0) {
          (**(code **)(*aplStack_2b0[0] + 0x38))();
        }
        plVar2 = *(longlong **)(param_2 + 0x18);
        LOCK();
        plVar6 = plVar2 + 1;
        lVar8 = *plVar6;
        *plVar6 = *plVar6 + 0x28;
        UNLOCK();
        uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
        plVar6 = plVar11;
        if (uVar9 + 0x18 < 0x2000000) {
          plVar6 = (longlong *)(uVar9 + *plVar2);
        }
        plVar6[2] = (longlong)puVar4;
        *plVar6 = param_2 + 8;
        plVar6[1] = *(longlong *)(param_2 + 0x10);
        **(undefined8 **)(param_2 + 0x10) = plVar6;
        *(longlong **)(param_2 + 0x10) = plVar6;
        *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 1;
        goto LAB_180278a68;
      }
      lVar8 = (longlong)&UNK_180a04ec0 - (longlong)pcVar14;
      while (*pcVar14 == pcVar14[lVar8]) {
        pcVar14 = pcVar14 + 1;
        if (pcVar1 <= pcVar14) goto LAB_1802789a4;
      }
    }
    puVar5 = (undefined8 *)puVar5[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



