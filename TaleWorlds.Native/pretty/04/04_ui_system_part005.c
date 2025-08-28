#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part005.c - UI系统组件和事件处理功能
// 本文件包含UI组件初始化、事件处理、字符串操作和内存管理等功能

// 函数: void update_ui_component_offset(int64_t component_ptr, uint64_t param2, uint64_t param3, int64_t offset)
// 功能: 更新UI组件的偏移量，处理组件位置计算
// 参数: component_ptr - 组件指针, param2 - 保留参数, param3 - 保留参数, offset - 偏移量
void update_ui_component_offset(int64_t component_ptr, uint64_t param2, uint64_t param3, int64_t offset)

{
  int64_t unaff_RSI;
  int unaff_R12D;
  
  // 更新组件偏移量：将基础位置加上偏移量
  *(int64_t *)(unaff_RSI + 0x18) = component_ptr + offset;
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  // 复制组件数据到指定位置
  memcpy((int64_t)unaff_R12D + *(int64_t *)(unaff_RSI + 0x10));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void trigger_ui_callback(int *callback_flag)
// 功能: 触发UI回调函数，检查回调标志并执行相应操作
// 参数: callback_flag - 回调标志指针
void trigger_ui_callback(int *callback_flag)

{
  // 检查回调标志是否有效且全局回调函数指针不为空
  if ((*callback_flag != 0) && (global_ui_callback_ptr != 0)) {
    // 调用全局回调函数
    (**(code **)(global_ui_callback_ptr + 0x18))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_ui_event_handling(void)
// 功能: 处理UI事件，包括字符串处理、路径构建和事件分发
// 备注: 这是一个复杂的UI事件处理函数，涉及多个字符串操作和路径构建
void process_ui_event_handling(void)

{
  uint uVar1;
  int32_t uVar2;
  int iVar3;
  uint uVar4;
  int32_t *puVar5;
  int64_t lVar6;
  int8_t *puVar7;
  int16_t *puVar8;
  void *puVar9;
  uint uVar10;
  uint64_t uVar11;
  int8_t auStack_338 [32];
  int8_t uStack_318;
  void *puStack_2f8;
  int16_t *puStack_2f0;
  int32_t uStack_2e8;
  uint64_t uStack_2e0;
  void *puStack_2d8;
  int32_t *puStack_2d0;
  int32_t uStack_2c8;
  uint64_t uStack_2c0;
  void *puStack_2b8;
  int8_t *puStack_2b0;
  uint uStack_2a8;
  uint64_t uStack_2a0;
  int32_t uStack_298;
  void *puStack_270;
  int8_t *puStack_268;
  int32_t uStack_260;
  uint64_t uStack_258;
  int8_t auStack_210 [32];
  uint64_t uStack_1f0;
  int8_t auStack_1a8 [32];
  uint64_t uStack_188;
  void *puStack_180;
  int8_t *puStack_178;
  int32_t uStack_170;
  int8_t auStack_168 [16];
  int8_t auStack_158 [8];
  void *puStack_150;
  int iStack_148;
  uint64_t uStack_38;
  
  // 初始化栈变量和全局数据
  uStack_188 = 0xfffffffffffffffe;
  uStack_38 = global_ui_security_key ^ (uint64_t)auStack_338;
  puVar7 = (int8_t *)0x0;
  uVar10 = 0;
  uStack_298 = 0;
  uStack_1f0 = global_ui_string_table;
  puStack_180 = &UI_DEFAULT_STYLE;
  puStack_178 = auStack_168;
  auStack_168[0] = 0;
  uStack_170 = 6;
  // 复制默认UI样式字符串
  strcpy_s(auStack_168,0x10,&UI_STYLE_DEFAULT_STRING);
  uStack_298 = 1;
  // 处理UI样式初始化
  initialize_ui_style(auStack_1a8,&puStack_180);
  uStack_298 = 0;
  puStack_180 = &UI_COMPONENT_FACTORY;
  // 处理UI组件创建
  create_ui_component(auStack_158,auStack_1a8);
  puStack_270 = &UI_PATH_SEPARATOR;
  uStack_258 = 0;
  puStack_268 = (int8_t *)0x0;
  uStack_260 = 0;
  // 处理路径字符串
  process_ui_path(&puStack_270,iStack_148);
  if (0 < iStack_148) {
    puVar9 = &DEFAULT_UI_PATH;
    if (puStack_150 != (void *)0x0) {
      puVar9 = puStack_150;
    }
                    // WARNING: Subroutine does not return
    // 复制路径字符串
    memcpy(puStack_268,puVar9,(int64_t)(iStack_148 + 1));
  }
  if ((puStack_150 != (void *)0x0) && (uStack_260 = 0, puStack_268 != (int8_t *)0x0)) {
    *puStack_268 = 0; // 字符串终止符
  }
  puStack_2d8 = &UI_PATH_SEPARATOR;
  uStack_2c0 = 0;
  puStack_2d0 = (int32_t *)0x0;
  uStack_2c8 = 0;
  // 分配UI路径缓冲区
  puVar5 = (int32_t *)allocate_ui_buffer(global_ui_memory_pool,0x10,0x13);
  *(int8_t *)puVar5 = 0;
  puStack_2d0 = puVar5;
  uVar2 = get_ui_buffer_length(puVar5);
  uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar2);
  *puVar5 = 0x2f6e6962; // "/bin" 字符串
  *(int8_t *)(puVar5 + 1) = 0;
  uStack_2c8 = 4;
  // 构建完整UI路径
  lVar6 = construct_ui_path(&puStack_270,&puStack_180,&puStack_2d8);
  puStack_2b8 = &UI_PATH_SEPARATOR;
  uStack_2a0 = 0;
  puStack_2b0 = (int8_t *)0x0;
  uStack_2a8 = 0;
  uStack_298 = 2;
  uVar1 = *(uint *)(lVar6 + 0x10);
  uVar11 = (uint64_t)uVar1;
  uVar4 = 0;
  if (*(int64_t *)(lVar6 + 8) == 0) {
LAB_18065415f:
    uVar10 = uVar4;
    if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
      // 复制路径数据
      memcpy(puVar7,*(uint64_t *)(lVar6 + 8),uVar11);
    }
  }
  else if (uVar1 != 0) {
    iVar3 = uVar1 + 1;
    if (iVar3 < 0x10) {
      iVar3 = 0x10;
    }
    // 分配路径缓冲区
    puVar7 = (int8_t *)allocate_ui_buffer(global_ui_memory_pool,(int64_t)iVar3,0x13);
    *puVar7 = 0;
    puStack_2b0 = puVar7;
    uVar4 = get_ui_buffer_length(puVar7);
    uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar4);
    goto LAB_18065415f;
  }
  if (puVar7 != (int8_t *)0x0) {
    puVar7[uVar11] = 0; // 字符串终止符
  }
  uStack_2a0 = CONCAT44(*(int32_t *)(lVar6 + 0x1c),(int32_t)uStack_2a0);
  if (uVar1 + 0x15 != 0) {
    uVar4 = uVar1 + 0x16;
    uStack_2a8 = uVar1;
    if (puVar7 == (int8_t *)0x0) {
      if ((int)uVar4 < 0x10) {
        uVar4 = 0x10;
      }
      puVar7 = (int8_t *)allocate_ui_buffer(global_ui_memory_pool,(int64_t)(int)uVar4,0x13);
      *puVar7 = 0;
    }
    else {
      if (uVar4 <= uVar10) goto LAB_1806541f1;
      uStack_318 = 0x13;
      // 重新分配更大的缓冲区
      puVar7 = (int8_t *)reallocate_ui_buffer(global_ui_memory_pool,puVar7,uVar4,0x10);
    }
    puStack_2b0 = puVar7;
    uVar2 = get_ui_buffer_length(puVar7);
    uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar2);
  }
LAB_1806541f1:
  // 构建UI资源路径
  puVar5 = (int32_t *)(puVar7 + uVar11);
  *puVar5 = 0x366e6957; // "Win6" 字符串
  puVar5[1] = 0x68535f34; // "4_Sh" 字符串
  puVar5[2] = 0x69707069; // "ippi" 字符串
  puVar5[3] = 0x435f676e; // "ng_C" 字符串
  *(int32_t *)(puVar7 + uVar11 + 0x10) = 0x6e65696c; // "lien" 字符串
  *(int16_t *)(puVar7 + uVar11 + 0x14) = 0x74; // "t" 字符串
  puStack_2f8 = &UI_PATH_SEPARATOR;
  uStack_2e0 = 0;
  puStack_2f0 = (int16_t *)0x0;
  uStack_2e8 = 0;
  uStack_2a8 = uVar1 + 0x15;
  // 分配路径分隔符缓冲区
  puVar8 = (int16_t *)allocate_ui_buffer(global_ui_memory_pool,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  puStack_2f0 = puVar8;
  uVar2 = get_ui_buffer_length(puVar8);
  uStack_2e0 = CONCAT44(uStack_2e0._4_4_,uVar2);
  *puVar8 = 0x2f; // "/" 字符
  uStack_2e8 = 1;
  // 处理完整路径构建
  construct_ui_path(&puStack_2b8,auStack_210,&puStack_2f8);
  puStack_2f8 = &UI_PATH_SEPARATOR;
                    // WARNING: Subroutine does not return
  // 释放UI缓冲区
  release_ui_buffer(puVar8);
}



uint64_t *
initialize_ui_component_manager(uint64_t *manager_ptr, uint64_t init_flags, uint64_t param3, uint64_t param4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *manager_ptr = &UI_COMPONENT_TABLE;
  initialize_ui_system();
  if ((init_flags & 1) != 0) {
    // 如果需要清理，释放管理器内存
    free(manager_ptr,400,param3,param4,uVar1);
  }
  return manager_ptr;
}



int32_t * reset_ui_component_state(uint64_t param1, int32_t *state_ptr)

{
  // 重置UI组件状态为初始值
  *state_ptr = 0;
  return state_ptr;
}



int get_ui_component_type(uint64_t param1, uint64_t param2, uint64_t param3, uint64_t param4)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *puVar4;
  void *puStack_30;
  int64_t lStack_28;
  int iStack_20;
  
  // 初始化UI参数查询
  initialize_ui_query(&puStack_30,param1,param3,param4,0xfffffffffffffffe);
  lVar3 = lStack_28;
  // 根据组件类型ID返回对应的类型值
  if (iStack_20 == 0x19) {
    iVar1 = strcmp(lStack_28,&UI_TYPE_WINDOW);
    if (iVar1 == 0) {
      iVar1 = 0x84; // 窗口类型
      goto LAB_1806555a8;
    }
  }
  else if (iStack_20 == 0x18) {
    iVar1 = strcmp(lStack_28,&UI_TYPE_BUTTON);
    if (iVar1 == 0) {
      iVar1 = 0x10; // 按钮类型
      goto LAB_1806555a8;
    }
LAB_1806553fb:
    puVar4 = &UI_TYPE_LABEL;
LAB_180655402:
    iVar1 = strcmp(lVar3,puVar4);
    if (iVar1 == 0) {
      iVar1 = 4; // 标签类型
      goto LAB_1806555a8;
    }
  }
  else if (iStack_20 == 0x12) {
    iVar1 = strcmp(lStack_28,&UI_TYPE_TEXTBOX);
    if (iVar1 == 0) {
      iVar1 = 0xa0; // 文本框类型
      goto LAB_1806555a8;
    }
LAB_18065555e:
    iVar1 = strcmp(lVar3,&UI_TYPE_SCROLLBAR);
    if (iVar1 == 0) {
      iVar1 = 8; // 滚动条类型
      goto LAB_1806555a8;
    }
    iVar1 = strcmp(lVar3,&UI_TYPE_CHECKBOX);
    if (iVar1 == 0) {
      iVar1 = 0x10; // 复选框类型
      goto LAB_1806555a8;
    }
    puVar4 = &UI_TYPE_RADIO;
LAB_180655598:
    iVar1 = strcmp(lVar3,puVar4);
    if (iVar1 == 0) {
      iVar1 = 0x10; // 单选按钮类型
      goto LAB_1806555a8;
    }
  }
  else if (iStack_20 == 0x1a) {
    iVar1 = strcmp(lStack_28,&UI_TYPE_PANEL);
    if (iVar1 == 0) {
      iVar1 = 0x204; // 面板类型
      goto LAB_1806555a8;
    }
  }
  else {
    if (iStack_20 == 0x15) {
      iVar1 = strcmp(lStack_28,&UI_TYPE_MENU);
      if (iVar1 == 0) {
        iVar1 = 0x404; // 菜单类型
        goto LAB_1806555a8;
      }
      puVar4 = &UI_TYPE_LISTBOX;
      goto LAB_180655402;
    }
    if (iStack_20 == 0x11) {
      iVar1 = strcmp(lStack_28,&UI_TYPE_COMBOBOX);
      if (iVar1 == 0) {
        iVar1 = 0x50; // 组合框类型
        goto LAB_1806555a8;
      }
    }
    else {
      if (iStack_20 == 0x18) goto LAB_1806553fb;
      if (iStack_20 == 0xb) {
        iVar1 = strcmp(lStack_28,&UI_TYPE_PROGRESSBAR);
        if (iVar1 == 0) {
          iVar1 = 8; // 进度条类型
          goto LAB_1806555a8;
        }
      }
      else if (iStack_20 == 0x16) {
        puVar4 = &UI_TYPE_SLIDER;
LAB_1806554f3:
        iVar1 = strcmp(lStack_28,puVar4);
        if (iVar1 == 0) {
          iVar1 = 0xc; // 滑块类型
          goto LAB_1806555a8;
        }
      }
      else {
        if (iStack_20 == 7) {
          lVar3 = 0;
          do {
            lVar2 = lVar3 + 1;
            if (*(char *)(lStack_28 + lVar3) != (&UI_TYPE_IMAGE)[lVar3]) {
              lVar3 = 0;
              goto LAB_1806554a0;
            }
            lVar3 = lVar2;
          } while (lVar2 != 8);
          iVar1 = 0x10; // 图像类型
          goto LAB_1806555a8;
        }
        if (iStack_20 == 0xf) {
          iVar1 = strcmp(lStack_28,&UI_TYPE_TABCONTROL);
          if (iVar1 == 0) {
            iVar1 = 0x40; // 选项卡控件类型
            goto LAB_1806555a8;
          }
        }
        else {
          if (iStack_20 == 0x13) {
            puVar4 = &UI_TYPE_TREEVIEW;
            goto LAB_1806554f3;
          }
          if (iStack_20 == 0xd) {
            puVar4 = &UI_TYPE_DATAGRID;
            goto LAB_180655598;
          }
          if (iStack_20 == 6) {
            lVar3 = 0;
            do {
              lVar2 = lVar3;
              if (*(char *)(lStack_28 + lVar2) != (&UI_TYPE_STATUSBAR)[lVar2]) goto LAB_1806555a6;
              lVar3 = lVar2 + 1;
            } while (lVar2 + 1 != 7);
            iVar1 = (int)lVar2 + 0x1e; // 状态栏类型
            goto LAB_1806555a8;
          }
          if (iStack_20 == 0x12) goto LAB_18065555e;
        }
      }
    }
  }
LAB_1806555a6:
  iVar1 = 0; // 未知类型
LAB_1806555a8:
  puStack_30 = &UI_PATH_SEPARATOR;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    // 释放查询内存
    release_ui_query_memory();
  }
  return iVar1;
  while (lVar3 = lVar2, lVar2 != 8) {
LAB_1806554a0:
    lVar2 = lVar3 + 1;
    if (*(char *)(lStack_28 + lVar3) != (&UI_TYPE_TOOLTIP)[lVar3]) goto LAB_1806555a6;
  }
  iVar1 = 0x30; // 工具提示类型
  goto LAB_1806555a8;
}



uint64_t get_ui_component_property(uint64_t param1, uint64_t param2, uint64_t param3, uint64_t param4)

{
  char cVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  void *puVar6;
  uint64_t uVar7;
  bool bVar8;
  void *puStack_50;
  char *pcStack_48;
  int iStack_40;
  int32_t uStack_38;
  void *puStack_30;
  int64_t lStack_28;
  int iStack_20;
  
  // 初始化属性查询
  initialize_ui_query(&puStack_30,param1,param3,param4,0xfffffffffffffffe);
  initialize_ui_query(&puStack_50,param2);
  lVar5 = lStack_28;
  // 根据组件类型和属性名称返回属性值
  if (iStack_20 == 0x19) {
    iVar3 = strcmp(lStack_28,&UI_TYPE_WINDOW);
    if (iVar3 == 0) {
      if (iStack_40 == 7) {
        lVar5 = 0;
        do {
          lVar4 = lVar5 + 1;
          if (pcStack_48[lVar5] != (&UI_PROPERTY_VISIBLE)[lVar5]) break;
          lVar5 = lVar4;
        } while (lVar4 != 8);
      }
      else if (iStack_40 == 9) {
        puVar6 = &UI_PROPERTY_ENABLED;
LAB_180655bdf:
        iVar3 = strcmp(pcStack_48,puVar6);
        bVar8 = iVar3 == 0;
LAB_180655bea:
        if (bVar8) {
          uVar7 = 4; // 布尔属性值
          goto LAB_180655685;
        }
      }
    }
  }
  else if (iStack_20 == 0x18) {
    iVar3 = strcmp(lStack_28,&UI_TYPE_BUTTON);
    if ((iVar3 == 0) && (iStack_40 == 7)) {
      uVar7 = 8; // 按钮文本属性
      lVar5 = 0;
      do {
        lVar4 = lVar5 + 1;
        if (pcStack_48[lVar5] != (&UI_PROPERTY_TEXT)[lVar5]) {
          lVar5 = 0;
          goto LAB_180655761;
        }
        lVar5 = lVar4;
      } while (lVar4 != 8);
    }
  }
  else if (iStack_20 == 0x1a) {
    iVar3 = strcmp(lStack_28,&UI_TYPE_PANEL);
    if ((iVar3 == 0) && (iStack_40 == 4)) {
      lVar5 = 0;
      do {
        lVar4 = lVar5 + 1;
        if (pcStack_48[lVar5] != (&UI_PROPERTY_COLOR)[lVar5]) {
          uVar2 = 0;
          goto LAB_1806557d3;
        }
        lVar5 = lVar4;
      } while (lVar4 != 5);
    }
  }
  else if (iStack_20 == 0x15) {
    iVar3 = strcmp(lStack_28,&UI_TYPE_MENU);
    if (iVar3 == 0) {
      if (iStack_40 == 0xb) {
        strcmp(pcStack_48,&UI_PROPERTY_MENUITEMS);
      }
      else if ((iStack_40 == 9) && (iVar3 = strcmp(pcStack_48,&UI_PROPERTY_SELECTED), iVar3 == 0)) {
        uVar7 = 0x204; // 菜单选中项属性
        goto LAB_180655685;
      }
    }
  }
  else if (iStack_20 == 0x11) {
    iVar3 = strcmp(lStack_28,&UI_TYPE_COMBOBOX);
    if (iVar3 == 0) {
      if (iStack_40 == 6) {
        lVar5 = 0;
        do {
          lVar4 = lVar5 + 1;
          if (pcStack_48[lVar5] != (&UI_PROPERTY_ITEMS)[lVar5]) break;
          lVar5 = lVar4;
        } while (lVar4 != 7);
      }
      else if (iStack_40 == 8) {
        puVar6 = &UI_PROPERTY_DROPDOWN;
LAB_180655d38:
        iVar3 = strcmp(pcStack_48,puVar6);
        if (iVar3 == 0) {
          uVar7 = 0x10; // 下拉属性
          goto LAB_180655685;
        }
      }
      else if (iStack_40 == 5) {
        lVar5 = 0;
        do {
          lVar4 = lVar5;
          if (pcStack_48[lVar4] != (&UI_PROPERTY_INDEX)[lVar4]) goto LAB_180655683;
          lVar5 = lVar4 + 1;
        } while (lVar4 + 1 != 6);
        uVar7 = (uint64_t)((int)lVar4 + 0x3b); // 索引属性
        goto LAB_180655685;
      }
    }
  }
  else if (iStack_20 == 0xb) {
    iVar3 = strcmp(lStack_28,&UI_TYPE_PROGRESSBAR);
    if (iVar3 == 0) {
LAB_180655911:
      if ((iStack_40 == 1) &&
         (((*pcStack_48 != 'x' || (pcStack_48[1] != '\0')) && (*pcStack_48 == 'y')))) {
        bVar8 = pcStack_48[1] == '\0';
        goto LAB_180655bea;
      }
    }
  }
  else if (iStack_20 == 0x16) {
    iVar3 = strcmp(lStack_28,&UI_TYPE_SLIDER);
    if (((iVar3 == 0) && (iStack_40 == 1)) && ((*pcStack_48 != 'x' || (pcStack_48[1] != '\0')))) {
      if ((*pcStack_48 == 'y') && (pcStack_48[1] == '\0')) {
        uVar7 = 4; // Y轴位置属性
        goto LAB_180655685;
      }
      if (*pcStack_48 == 'z') {
        bVar8 = pcStack_48[1] == '\0';
LAB_1806559dc:
        if (bVar8) {
          uVar7 = 8; // Z轴位置属性
          goto LAB_180655685;
        }
      }
    }
  }
  else if (iStack_20 == 7) {
    uVar7 = 8;
    lVar5 = 0;
    do {
      lVar4 = lVar5 + 1;
      if (*(char *)(lStack_28 + lVar5) != (&UI_TYPE_IMAGE)[lVar5]) {
        lVar5 = 0;
        goto LAB_180655a80;
      }
      lVar5 = lVar4;
    } while (lVar4 != 8);
    if ((((iStack_40 == 1) && ((*pcStack_48 != 's' || (pcStack_48[1] != '\0')))) &&
        (*pcStack_48 == 'f')) && (pcStack_48[1] == '\0')) goto LAB_180655685;
  }
  else if (iStack_20 == 0xf) {
    iVar3 = strcmp(lStack_28,&UI_TYPE_TABCONTROL);
    if (iVar3 == 0) {
      if (iStack_40 == 3) {
        lVar5 = 0;
        do {
          lVar4 = lVar5 + 1;
          if (pcStack_48[lVar5] != (&UI_PROPERTY_TABS)[lVar5]) break;
          lVar5 = lVar4;
        } while (lVar4 != 4);
      }
      else if (((iStack_40 == 1) && (*pcStack_48 == 'o')) && (pcStack_48[1] == '\0')) {
        uVar7 = 0x30; // 选项属性
        goto LAB_180655685;
      }
    }
  }
  else if (iStack_20 == 0x13) {
    iVar3 = strcmp(lStack_28,&UI_TYPE_TREEVIEW);
    if (iVar3 == 0) {
      if (iStack_40 == 10) {
        strcmp(pcStack_48,&UI_PROPERTY_NODES);
      }
      else {
        if (iStack_40 == 0x10) {
          puVar6 = &UI_PROPERTY_EXPANDED;
          goto LAB_180655bdf;
        }
        if (iStack_40 == 0x11) {
          iVar3 = strcmp(pcStack_48,&UI_PROPERTY_SELECTED);
          bVar8 = iVar3 == 0;
          goto LAB_1806559dc;
        }
      }
    }
  }
  else if (iStack_20 == 0xd) {
    iVar3 = strcmp(lStack_28,&UI_TYPE_DATAGRID);
    if (((iVar3 == 0) && (iStack_40 == 1)) && ((*pcStack_48 != 'w' || (pcStack_48[1] != '\0')))) {
      if ((*pcStack_48 == 'x') && (pcStack_48[1] == '\0')) {
        uVar7 = 4; // X轴位置属性
        goto LAB_180655685;
      }
      if ((*pcStack_48 == 'y') && (pcStack_48[1] == '\0')) {
        uVar7 = 8; // Y轴位置属性
        goto LAB_180655685;
      }
      if (*pcStack_48 == 'z') {
        cVar1 = pcStack_48[1];
LAB_180655e30:
        if (cVar1 == '\0') {
          uVar7 = 0xc; // Z轴位置属性
          goto LAB_180655685;
        }
      }
    }
  }
  else if (iStack_20 == 6) {
    lVar5 = 0;
    do {
      lVar4 = lVar5 + 1;
      if (*(char *)(lStack_28 + lVar5) != (&UI_TYPE_STATUSBAR)[lVar5]) goto LAB_180655683;
      lVar5 = lVar4;
    } while (lVar4 != 7);
    if (iStack_40 == 7) {
      lVar5 = 0;
      do {
        lVar4 = lVar5 + 1;
        if (pcStack_48[lVar5] != (&UI_PROPERTY_PANELS)[lVar5]) break;
        lVar5 = lVar4;
      } while (lVar4 != 8);
    }
    else {
      if (iStack_40 == 10) {
        puVar6 = &UI_PROPERTY_BORDER;
        goto LAB_180655d38;
      }
      if (iStack_40 == 0xd) {
        iVar3 = strcmp(pcStack_48,&UI_PROPERTY_MARGIN);
        bVar8 = iVar3 == 0;
        goto LAB_180655afa;
      }
    }
  }
  else if (iStack_20 == 0x12) {
    iVar3 = strcmp(lStack_28,&UI_TYPE_SCROLLBAR);
    if (iVar3 == 0) goto LAB_180655911;
    iVar3 = strcmp(lVar5,&UI_TYPE_CHECKBOX);
    if (((iVar3 == 0) && (iStack_40 == 1)) && ((*pcStack_48 != 'x' || (pcStack_48[1] != '\0')))) {
      if ((*pcStack_48 == 'y') && (pcStack_48[1] == '\0')) {
        uVar7 = 4; // Y轴位置属性
        goto LAB_180655685;
      }
      if ((*pcStack_48 == 'z') && (pcStack_48[1] == '\0')) {
        uVar7 = 8; // Z轴位置属性
        goto LAB_180655685;
      }
      if (*pcStack_48 == 'w') {
        cVar1 = pcStack_48[1];
        goto LAB_180655e30;
      }
    }
  }
  goto LAB_180655683;
  while (uVar2 = uVar7 + 1, uVar7 + 1 != 5) {
LAB_1806557d3:
    uVar7 = uVar2;
    if (pcStack_48[uVar7] != (&UI_PROPERTY_WIDTH)[uVar7]) goto LAB_180655683;
  }
  uVar7 = uVar7 & 0xffffffff;
  goto LAB_180655685;
  while (lVar5 = lVar4, lVar4 != 8) {
LAB_180655761:
    lVar4 = lVar5 + 1;
    if (pcStack_48[lVar5] != (&UI_PROPERTY_VISIBLE)[lVar5]) goto LAB_180655683;
  }
  goto LAB_180655685;
  while (lVar5 = lVar4, lVar4 != 8) {
LAB_180655a80:
    lVar4 = lVar5 + 1;
    if (*(char *)(lStack_28 + lVar5) != (&UI_TYPE_TOOLTIP)[lVar5]) goto LAB_180655683;
  }
  if ((iStack_40 == 1) && ((*pcStack_48 != 's' || (pcStack_48[1] != '\0')))) {
    if ((*pcStack_48 == 'f') && (pcStack_48[1] == '\0')) {
      uVar7 = 0x10; // 前景属性
      goto LAB_180655685;
    }
    if (*pcStack_48 == 'u') {
      bVar8 = pcStack_48[1] == '\0';
LAB_180655afa:
      if (bVar8) {
        uVar7 = 0x20; // 下划线属性
        goto LAB_180655685;
      }
    }
  }
LAB_180655683:
  uVar7 = 0; // 默认属性值
LAB_180655685:
  puStack_50 = &UI_PATH_SEPARATOR;
  if (pcStack_48 != (char *)0x0) {
                    // WARNING: Subroutine does not return
    // 释放查询内存
    release_ui_query_memory();
  }
  pcStack_48 = (char *)0x0;
  uStack_38 = 0;
  puStack_50 = &UI_COMPONENT_FACTORY;
  puStack_30 = &UI_PATH_SEPARATOR;
  if (lStack_28 == 0) {
    return uVar7;
  }
                    // WARNING: Subroutine does not return
  // 释放查询内存
  release_ui_query_memory();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void get_ui_component_data(int component_index, uint64_t *data_buffer)
// 功能: 获取指定索引的UI组件数据
// 参数: component_index - 组件索引, data_buffer - 数据缓冲区
void get_ui_component_data(int component_index, uint64_t *data_buffer)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int64_t lVar3;
  code *pcVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int64_t lVar20;
  
  lVar3 = *global_ui_component_table;
  if ((uint64_t)(int64_t)component_index < (uint64_t)((global_ui_component_table[1] - lVar3) / 0x84)) {
    lVar20 = (int64_t)component_index * 0x84;
    puVar1 = (uint64_t *)(lVar20 + 0x60 + lVar3);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar2 = *(int32_t *)(lVar20 + 0x80 + lVar3);
    puVar1 = (uint64_t *)(lVar20 + 0x70 + lVar3);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar9 = ((uint64_t *)(lVar20 + lVar3))[1];
    puVar1 = (uint64_t *)(lVar20 + 0x10 + lVar3);
    uVar10 = *puVar1;
    uVar11 = puVar1[1];
    puVar1 = (uint64_t *)(lVar20 + 0x20 + lVar3);
    uVar12 = *puVar1;
    uVar13 = puVar1[1];
    puVar1 = (uint64_t *)(lVar20 + 0x30 + lVar3);
    uVar14 = *puVar1;
    uVar15 = puVar1[1];
    puVar1 = (uint64_t *)(lVar20 + 0x40 + lVar3);
    uVar16 = *puVar1;
    uVar17 = puVar1[1];
    puVar1 = (uint64_t *)(lVar20 + 0x50 + lVar3);
    uVar18 = *puVar1;
    uVar19 = puVar1[1];
    *data_buffer = *(uint64_t *)(lVar20 + lVar3);
    data_buffer[1] = uVar9;
    data_buffer[2] = uVar10;
    data_buffer[3] = uVar11;
    data_buffer[4] = uVar12;
    data_buffer[5] = uVar13;
    data_buffer[6] = uVar14;
    data_buffer[7] = uVar15;
    data_buffer[8] = uVar16;
    data_buffer[9] = uVar17;
    data_buffer[10] = uVar18;
    data_buffer[0xb] = uVar19;
    data_buffer[0xc] = uVar5;
    data_buffer[0xd] = uVar6;
    data_buffer[0xe] = uVar7;
    data_buffer[0xf] = uVar8;
    *(int32_t *)(data_buffer + 0x10) = uVar2;
    return;
  }
  // 索引越界，触发错误处理
  handle_ui_index_error();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



// 函数: void set_ui_component_data(uint64_t param1, uint64_t param2, uint64_t *data_buffer)
// 功能: 设置UI组件数据
// 参数: param1 - 组件标识, param2 - 数据类型, data_buffer - 数据缓冲区
void set_ui_component_data(uint64_t param1, uint64_t param2, uint64_t *data_buffer)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  int64_t in_RAX;
  int64_t in_R10;
  
  // 从组件数据结构中提取各字段
  puVar1 = (uint64_t *)(in_RAX + 0x60 + in_R10);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar2 = *(int32_t *)(in_RAX + 0x80 + in_R10);
  puVar1 = (uint64_t *)(in_RAX + 0x70 + in_R10);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = ((uint64_t *)(in_RAX + in_R10))[1];
  puVar1 = (uint64_t *)(in_RAX + 0x10 + in_R10);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  puVar1 = (uint64_t *)(in_RAX + 0x20 + in_R10);
  uVar10 = *puVar1;
  uVar11 = puVar1[1];
  puVar1 = (uint64_t *)(in_RAX + 0x30 + in_R10);
  uVar12 = *puVar1;
  uVar13 = puVar1[1];
  puVar1 = (uint64_t *)(in_RAX + 0x40 + in_R10);
  uVar14 = *puVar1;
  uVar15 = puVar1[1];
  puVar1 = (uint64_t *)(in_RAX + 0x50 + in_R10);
  uVar16 = *puVar1;
  uVar17 = puVar1[1];
  *data_buffer = *(uint64_t *)(in_RAX + in_R10);
  data_buffer[1] = uVar7;
  data_buffer[2] = uVar8;
  data_buffer[3] = uVar9;
  data_buffer[4] = uVar10;
  data_buffer[5] = uVar11;
  data_buffer[6] = uVar12;
  data_buffer[7] = uVar13;
  data_buffer[8] = uVar14;
  data_buffer[9] = uVar15;
  data_buffer[10] = uVar16;
  data_buffer[0xb] = uVar17;
  data_buffer[0xc] = uVar3;
  data_buffer[0xd] = uVar4;
  data_buffer[0xe] = uVar5;
  data_buffer[0xf] = uVar6;
  *(int32_t *)(data_buffer + 0x10) = uVar2;
  return;
}



// 函数: void handle_ui_index_error(void)
// 功能: 处理UI索引错误
void handle_ui_index_error(void)

{
  code *pcVar1;
  
  // 调用错误处理函数
  handle_system_error();
  pcVar1 = (code *)swi(3);
  (*pcVar4)();
  return;
}



uint64_t
register_ui_event_handler(uint64_t param1, uint64_t param2, uint64_t param3, uint64_t param4)

{
  uint64_t uStackX_8;
  int64_t alStack_30 [3];
  int32_t uStack_18;
  
  // 初始化事件处理器数据
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  alStack_30[2] = 0;
  uStack_18 = 3;
  uStackX_8 = (int64_t *)((uint64_t)alStack_30 & 0xffffffff00000000);
  // 注册事件处理器
  register_event_handler(alStack_30,&uStackX_8,param_3,param_4,0xfffffffffffffffe,&UI_EVENT_TABLE,0);
  register_event_handler(alStack_30,(int64_t)&uStackX_8 + 1);
  register_event_handler(alStack_30,(int64_t)&uStackX_8 + 2);
  register_event_handler(alStack_30,(int64_t)&uStackX_8 + 3);
  uStackX_8 = alStack_30;
  if (alStack_30[0] != 0) {
                    // WARNING: Subroutine does not return
    // 释放事件处理器内存
    release_event_handler_memory();
  }
  return 0x10; // 返回事件处理器大小
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * create_ui_component_instance(int32_t *instance_ptr)

{
  int32_t uVar1;
  int64_t *plVar2;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  // 创建UI组件实例
  plVar2 = (int64_t *)allocate_ui_memory(global_ui_memory_pool,0x30,8,3,0xfffffffffffffffe);
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  *plVar2 = (int64_t)&UI_COMPONENT_VTABLE;
  *plVar2 = (int64_t)&UI_COMPONENT_METHODS;
  *(int32_t *)(plVar2 + 1) = 0;
  *plVar2 = (int64_t)&UI_EVENT_TABLE;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  *(int32_t *)(plVar2 + 5) = 3;
  // 调用组件初始化方法
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uStack_20 = extract_ui_component_handle(plVar2,0);
  uStack_1c = (int32_t)((uint64_t)plVar2 >> 0x20);
  *instance_ptr = uStack_20;
  instance_ptr[1] = uStack_1c;
  instance_ptr[2] = uVar1;
  instance_ptr[3] = uStack_14;
  // 调用组件清理方法
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return instance_ptr;
}



// 函数: void set_ui_component_property(int64_t component_ptr, int32_t property_value)
// 功能: 设置UI组件属性值
// 参数: component_ptr - 组件指针, property_value - 属性值
void set_ui_component_property(int64_t component_ptr, int32_t property_value)

{
  int32_t uStackX_10;
  
  component_ptr = component_ptr + 0x10;
  uStackX_10 = property_value;
  // 设置组件属性
  set_component_property(component_ptr,&uStackX_10);
  set_component_property(component_ptr,(int64_t)&uStackX_10 + 1);
  set_component_property(component_ptr,(int64_t)&uStackX_10 + 2);
  set_component_property(component_ptr,(int64_t)&uStackX_10 + 3);
  return;
}



// 函数: void update_ui_component_property(int64_t component_ptr, int32_t property_value)
// 功能: 更新UI组件属性值
// 参数: component_ptr - 组件指针, property_value - 属性值
void update_ui_component_property(int64_t component_ptr, int32_t property_value)

{
  int32_t uStackX_10;
  
  component_ptr = component_ptr + 0x10;
  uStackX_10 = property_value;
  // 更新组件属性
  update_component_property(component_ptr,&uStackX_10);
  update_component_property(component_ptr,(int64_t)&uStackX_10 + 1);
  update_component_property(component_ptr,(int64_t)&uStackX_10 + 2);
  update_component_property(component_ptr,(int64_t)&uStackX_10 + 3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * create_ui_control_instance(int32_t *instance_ptr)

{
  int32_t uVar1;
  int64_t *plVar2;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  // 创建UI控件实例
  plVar2 = (int64_t *)allocate_ui_memory(global_ui_memory_pool,0x30,8,3,0xfffffffffffffffe);
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  *plVar2 = (int64_t)&UI_COMPONENT_VTABLE;
  *plVar2 = (int64_t)&UI_COMPONENT_METHODS;
  *(int32_t *)(plVar2 + 1) = 0;
  *plVar2 = (int64_t)&UI_CONTROL_FACTORY;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  *(int32_t *)(plVar2 + 5) = 3;
  // 调用控件初始化方法
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uStack_20 = extract_ui_component_handle(plVar2,0);
  uStack_1c = (int32_t)((uint64_t)plVar2 >> 0x20);
  *instance_ptr = uStack_20;
  instance_ptr[1] = uStack_1c;
  instance_ptr[2] = uVar1;
  instance_ptr[3] = uStack_14;
  // 调用控件清理方法
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return instance_ptr;
}



uint64_t *
initialize_ui_control_manager(uint64_t *manager_ptr, uint64_t init_flags, uint64_t param3, uint64_t param4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  // 初始化UI控件系统
  initialize_ui_controls();
  *manager_ptr = &UI_CONTROL_FACTORY;
  *manager_ptr = &UI_COMPONENT_VTABLE;
  if ((init_flags & 1) != 0) {
    // 如果需要清理，释放管理器内存
    free(manager_ptr,0x30,param3,param4,uVar1);
  }
  return manager_ptr;
}



int64_t * get_ui_control_data(int64_t *data_ptr, int64_t control_table, int control_index)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uStack_c;
  
  // 从控件表中获取指定索引的控件数据
  plVar1 = *(int64_t **)(*(int64_t *)(control_table + 0x10) + (int64_t)control_index * 8);
  if (plVar1 == (int64_t *)0x0) {
    uVar2 = 0xffffffff; // 无效控件
  }
  else {
    // 获取控件引用计数
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    // 释放控件引用
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *data_ptr = (int64_t)plVar1;
  data_ptr[1] = CONCAT44(uStack_c,uVar2);
  return data_ptr;
}



// 函数: void cleanup_ui_control_list(int64_t control_list_ptr)
// 功能: 清理UI控件列表，释放所有控件资源
// 参数: control_list_ptr - 控件列表指针
void cleanup_ui_control_list(int64_t control_list_ptr)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  plVar1 = *(int64_t **)(control_list_ptr + 0x18);
  plVar2 = *(int64_t **)(control_list_ptr + 0x10);
  if (plVar2 != plVar1) {
    do {
      // 遍历控件列表，释放每个控件
      if ((int64_t *)*plVar2 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar2 + 0x38))();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    *(uint64_t *)(control_list_ptr + 0x18) = *(uint64_t *)(control_list_ptr + 0x10);
    return;
  }
  *(int64_t **)(control_list_ptr + 0x18) = plVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * create_ui_renderer_instance(int32_t *instance_ptr)

{
  int32_t uVar1;
  int64_t *plVar2;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  // 创建UI渲染器实例
  plVar2 = (int64_t *)allocate_ui_memory(global_ui_memory_pool,0x30,8,3,0xfffffffffffffffe);
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  *plVar2 = (int64_t)&UI_COMPONENT_VTABLE;
  *plVar2 = (int64_t)&UI_COMPONENT_METHODS;
  *(int32_t *)(plVar2 + 1) = 0;
  *plVar2 = (int64_t)&UI_RENDERER_FACTORY;
  plVar2[2] = (int64_t)&UI_COMPONENT_FACTORY;
  plVar2[3] = 0;
  *(int32_t *)(plVar2 + 4) = 0;
  plVar2[2] = (int64_t)&UI_PATH_SEPARATOR;
  plVar2[5] = 0;
  plVar2[3] = 0;
  *(int32_t *)(plVar2 + 4) = 0;
  // 调用渲染器初始化方法
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uStack_20 = extract_ui_component_handle(plVar2,0);
  uStack_1c = (int32_t)((uint64_t)plVar2 >> 0x20);
  *instance_ptr = uStack_20;
  instance_ptr[1] = uStack_1c;
  instance_ptr[2] = uVar1;
  instance_ptr[3] = uStack_14;
  // 调用渲染器清理方法
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return instance_ptr;
}



uint64_t *
initialize_ui_renderer(uint64_t *renderer_ptr, uint64_t init_flags, uint64_t param3, uint64_t param4)

{
  renderer_ptr[2] = &UI_PATH_SEPARATOR;
  if (renderer_ptr[3] != 0) {
                    // WARNING: Subroutine does not return
    // 释放渲染器内存
    release_ui_renderer_memory();
  }
  renderer_ptr[3] = 0;
  *(int32_t *)(renderer_ptr + 5) = 0;
  renderer_ptr[2] = &UI_COMPONENT_FACTORY;
  *renderer_ptr = &UI_CONTROL_FACTORY;
  *renderer_ptr = &UI_COMPONENT_VTABLE;
  if ((init_flags & 1) != 0) {
    // 如果需要清理，释放渲染器内存
    free(renderer_ptr,0x30,param3,param4,0xfffffffffffffffe);
  }
  return renderer_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t get_ui_system_state(int64_t system_handle, uint64_t param2, uint64_t param3, uint64_t param4)

{
  int32_t uVar1;
  void *puStack_30;
  int64_t lStack_28;
  
  // 初始化系统状态查询
  initialize_system_query(&puStack_30,system_handle + 0x10,param3,param4,0xfffffffffffffffe);
  // 获取UI系统状态
  uVar1 = (**(code **)(*global_ui_system_ptr + 0x70))(global_ui_system_ptr,&puStack_30);
  puStack_30 = &UI_PATH_SEPARATOR;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    // 释放查询内存
    release_system_query_memory();
  }
  return uVar1;
}


