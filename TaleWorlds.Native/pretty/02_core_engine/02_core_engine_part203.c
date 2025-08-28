#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part203.c - 高亮和截图功能模块 (11个函数)

// 函数: 处理高亮组的异步回调
// 原始实现: void FUN_180184da0(undefined8 param_1,int param_2,longlong *param_3,longlong *param_4)
void process_highlight_group_callback(undefined8 context_handle, int status_code, longlong *result_data, longlong *callback_data)

{
  longlong *highlight_manager;
  code *error_handler;
  uint *highlight_item;
  ulonglong item_index;
  uint *temp_item;
  longlong string_length;
  ulonglong total_items;
  uint *item_start;
  longlong *data_pointer;
  uint *next_item;
  uint *current_item;
  uint *item_end;
  uint **item_collection;
  undefined8 field_1;
  uint item_flags;
  uint item_type;
  uint item_subtype;
  uint item_id;
  undefined8 field_2;
  undefined8 field_3;
  undefined1 item_property;
  ulonglong stack_cookie;
  
  field_1 = 0xfffffffffffffffe;
  stack_cookie = _DAT_180bf00a8 ^ (ulonglong)&field_1;
  highlight_manager = (longlong *)callback_data[7];
  item_index = 0;
  data_pointer = callback_data;
  if (highlight_manager != (longlong *)0x0) {
    item_collection[0] = status_code;
    if (status_code < 0) {
      item_collection = (uint **)callback_data[8];
      item_start = (uint *)0x0;
      if (highlight_manager == (longlong *)0x0) {
        __Xbad_function_call_std__YAXXZ();
        error_handler = (code *)swi(3);
        (*error_handler)();
        return;
      }
      (**(code **)(*highlight_manager + 0x10))(highlight_manager, item_collection, &item_start, &item_collection);
    }
    else {
      next_item = (uint *)0x0;
      current_item = (uint *)0x0;
      item_end = (uint *)0x0;
      total_items = item_index;
      if (result_data[1] != 0) {
        do {
          field_2 = 0;
          field_3 = 0xf;
          item_flags = item_flags & 0xffffff00;
          string_length = -1;
          do {
            string_length = string_length + 1;
          } while (*(char *)(*(longlong *)(item_index + *result_data) + string_length) != '\0');
          process_string_data(&item_flags);
          item_property = *(undefined1 *)(*result_data + 8 + item_index);
          if (item_end == current_item) {
            expand_item_collection(&next_item, current_item, &item_flags);
          }
          else {
            item_start = current_item;
            current_item[4] = 0;
            current_item[5] = 0;
            current_item[6] = 0;
            current_item[7] = 0;
            *current_item = item_flags;
            current_item[1] = item_type;
            current_item[2] = item_subtype;
            current_item[3] = item_id;
            *(undefined8 *)(current_item + 4) = field_2;
            *(undefined8 *)(current_item + 6) = field_3;
            field_2 = 0;
            field_3 = 0xf;
            item_flags = item_flags & 0xffffff00;
            *(undefined1 *)(current_item + 8) = item_property;
            current_item = current_item + 10;
          }
          cleanup_string_data(&item_flags);
          total_items = total_items + 1;
          item_index = item_index + 0x10;
        } while (total_items < (ulonglong)result_data[1]);
      }
      item_start = (uint *)callback_data[8];
      item_collection = &next_item;
      highlight_manager = (longlong *)callback_data[7];
      if (highlight_manager == (longlong *)0x0) {
        __Xbad_function_call_std__YAXXZ();
        error_handler = (code *)swi(3);
        (*error_handler)();
        return;
      }
      (**(code **)(*highlight_manager + 0x10))(highlight_manager, item_collection, &item_collection, &item_start);
      temp_item = current_item;
      next_item = next_item;
      if (next_item != (uint *)0x0) {
        for (; item_start = next_item, next_item != temp_item; next_item = next_item + 10) {
          cleanup_string_data(next_item);
        }
        item_index = (((longlong)item_end - (longlong)next_item) / 0x28) * 0x28;
        temp_item = next_item;
        if (0xfff < item_index) {
          item_index = item_index + 0x27;
          temp_item = *(uint **)(next_item + -2);
          if (0x1f < (ulonglong)((longlong)next_item + (-8 - (longlong)temp_item))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        free(temp_item, item_index);
        next_item = (uint *)0x0;
        current_item = (uint *)0x0;
        item_end = (uint *)0x0;
      }
    }
  }
  highlight_manager = (longlong *)callback_data[7];
  data_pointer = callback_data;
  if (highlight_manager != (longlong *)0x0) {
    (**(code **)(*highlight_manager + 0x20))(highlight_manager, highlight_manager != callback_data);
    callback_data[7] = 0;
  }
  free(callback_data, 0x48);
                    // WARNING: Subroutine does not return
  cleanup_stack_protection(stack_cookie ^ (ulonglong)&field_1);
}





// 函数: 释放高亮项资源
// 原始实现: void FUN_180185040(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void free_highlight_items(longlong *item_array, undefined8 param_2, undefined8 param_3, undefined8 param_4)

{
  ulonglong total_size;
  longlong current_item;
  longlong end_item;
  undefined8 unused_param;
  
  unused_param = 0xfffffffffffffffe;
  current_item = *item_array;
  if (current_item != 0) {
    end_item = item_array[1];
    if (current_item != end_item) {
      do {
        cleanup_string_data(current_item);
        current_item = current_item + 0x28;
      } while (current_item != end_item);
      current_item = *item_array;
    }
    total_size = ((item_array[2] - current_item) / 0x28) * 0x28;
    end_item = current_item;
    if (0xfff < total_size) {
      end_item = *(longlong *)(current_item + -8);
      if (0x1f < (current_item - end_item) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(item_array[2] - current_item, total_size + 0x27, param_3, param_4, unused_param);
      }
    }
    free(end_item);
    *item_array = 0;
    item_array[1] = 0;
    item_array[2] = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180185120(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)
void FUN_180185120(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_128 [32];
  undefined4 uStack_108;
  longlong lStack_100;
  undefined4 *puStack_f8;
  undefined4 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  longlong *plStack_b8;
  longlong lStack_b0;
  longlong alStack_a8 [7];
  longlong *plStack_70;
  undefined8 uStack_68;
  ulonglong uStack_58;
  
  uStack_c0 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_128;
  puVar9 = (undefined4 *)0x0;
  uStack_108 = 0;
  lStack_100 = 0;
  puStack_f8 = (undefined4 *)0x0;
  puStack_f0 = (undefined4 *)0x0;
  plVar8 = *(longlong **)param_2[4];
  plStack_b8 = param_3;
  if (plVar8 != (longlong *)param_2[4]) {
    do {
      uStack_e8 = plVar8 + 4;
      if (0xf < (ulonglong)plVar8[7]) {
        uStack_e8 = (longlong *)*uStack_e8;
      }
      plVar5 = plVar8 + 8;
      if (0xf < (ulonglong)plVar8[0xb]) {
        plVar5 = (longlong *)*plVar5;
      }
      uStack_e0 = (longlong)plVar5;
      if (puVar9 == puStack_f8) {
        FUN_1801887a0(&lStack_100,puStack_f8,&uStack_e8);
        puVar9 = puStack_f0;
      }
      else {
        uStack_e8._4_4_ = (undefined4)((ulonglong)uStack_e8 >> 0x20);
        uStack_e0._0_4_ = SUB84(plVar5,0);
        uStack_e0._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
        *puStack_f8 = (undefined4)uStack_e8;
        puStack_f8[1] = uStack_e8._4_4_;
        puStack_f8[2] = (undefined4)uStack_e0;
        puStack_f8[3] = uStack_e0._4_4_;
        puStack_f8 = puStack_f8 + 4;
      }
      plVar5 = (longlong *)plVar8[2];
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x19);
        plVar8 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x19);
          plVar8 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar8[1] + 0x19);
        plVar4 = (longlong *)plVar8[1];
        plVar5 = plVar8;
        while ((plVar8 = plVar4, cVar1 == '\0' && (plVar5 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar4 = (longlong *)plVar8[1];
          plVar5 = plVar8;
        }
      }
    } while (plVar8 != (longlong *)param_2[4]);
  }
  lVar3 = lStack_100;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  lStack_d0 = lStack_100;
  lStack_c8 = (longlong)puStack_f8 - lStack_100 >> 4;
  puStack_d8 = param_2;
  lVar6 = FUN_1808fc418(0x48);
  plStack_70 = (longlong *)0x0;
  puVar2 = (undefined8 *)param_3[7];
  lStack_b0 = lVar6;
  if (puVar2 != (undefined8 *)0x0) {
    plStack_70 = (longlong *)(**(code **)*puVar2)(puVar2,alStack_a8);
  }
  uStack_108 = 3;
  *(undefined8 *)(lVar6 + 0x38) = 0;
  uStack_e8 = (longlong *)lVar6;
  uStack_68 = param_4;
  if (plStack_70 != (longlong *)0x0) {
    if (plStack_70 == alStack_a8) {
      uVar7 = (**(code **)(*plStack_70 + 8))(plStack_70,lVar6);
      *(undefined8 *)(lVar6 + 0x38) = uVar7;
      if (plStack_70 == (longlong *)0x0) goto LAB_1801852f0;
      (**(code **)(*plStack_70 + 0x20))
                (plStack_70,CONCAT71((int7)((ulonglong)alStack_a8 >> 8),plStack_70 != alStack_a8));
    }
    else {
      *(longlong **)(lVar6 + 0x38) = plStack_70;
    }
    plStack_70 = (longlong *)0x0;
  }
LAB_1801852f0:
  *(undefined8 *)(lVar6 + 0x40) = uStack_68;
  NVGSDK_Highlights_OpenGroupAsync(*(undefined8 *)(param_1 + 8),&puStack_d8,FUN_1801842a0,lVar6);
  uStack_108 = 1;
  uStack_e8 = alStack_a8;
  if (plStack_70 != (longlong *)0x0) {
    (**(code **)(*plStack_70 + 0x20))
              (plStack_70,CONCAT71((int7)((ulonglong)alStack_a8 >> 8),plStack_70 != alStack_a8));
    plStack_70 = (longlong *)0x0;
  }
  if (lVar3 != 0) {
    uVar10 = (longlong)puVar9 - lVar3 & 0xfffffffffffffff0;
    lVar6 = lVar3;
    if (0xfff < uVar10) {
      uVar10 = uVar10 + 0x27;
      lVar6 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar6) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar6,uVar10);
    lStack_100 = 0;
    puStack_f8 = (undefined4 *)0x0;
    puStack_f0 = (undefined4 *)0x0;
  }
  plVar8 = (longlong *)param_3[7];
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8,plVar8 != param_3);
    param_3[7] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_128);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801853d0(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)
void FUN_1801853d0(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [32];
  undefined4 uStack_d8;
  longlong *plStack_d0;
  undefined8 *puStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  longlong *plStack_b0;
  longlong lStack_a8;
  longlong alStack_98 [7];
  longlong *plStack_60;
  undefined8 uStack_58;
  ulonglong uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  uStack_d8 = 0;
  puStack_c8 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puStack_c8 = (undefined8 *)*param_2;
  }
  uStack_c0 = *(undefined1 *)(param_2 + 4);
  plStack_b0 = param_3;
  lVar3 = FUN_1808fc418(0x48);
  plStack_60 = (longlong *)0x0;
  puVar1 = (undefined8 *)param_3[7];
  lStack_a8 = lVar3;
  if (puVar1 != (undefined8 *)0x0) {
    plStack_60 = (longlong *)(**(code **)*puVar1)(puVar1,alStack_98);
  }
  uStack_d8 = 3;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  plStack_d0 = (longlong *)lVar3;
  uStack_58 = param_4;
  if (plStack_60 != (longlong *)0x0) {
    if (plStack_60 == alStack_98) {
      uVar4 = (**(code **)(*plStack_60 + 8))(plStack_60,lVar3);
      *(undefined8 *)(lVar3 + 0x38) = uVar4;
      if (plStack_60 == (longlong *)0x0) goto LAB_1801854b6;
      (**(code **)(*plStack_60 + 0x20))
                (plStack_60,CONCAT71((int7)((ulonglong)alStack_98 >> 8),plStack_60 != alStack_98));
    }
    else {
      *(longlong **)(lVar3 + 0x38) = plStack_60;
    }
    plStack_60 = (longlong *)0x0;
  }
LAB_1801854b6:
  *(undefined8 *)(lVar3 + 0x40) = uStack_58;
  NVGSDK_Highlights_CloseGroupAsync(*(undefined8 *)(param_1 + 8),&puStack_c8,FUN_1801842a0,lVar3);
  uStack_d8 = 1;
  plStack_d0 = alStack_98;
  if (plStack_60 != (longlong *)0x0) {
    (**(code **)(*plStack_60 + 0x20))
              (plStack_60,CONCAT71((int7)((ulonglong)alStack_98 >> 8),plStack_60 != alStack_98));
    plStack_60 = (longlong *)0x0;
  }
  plVar2 = (longlong *)param_3[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180185540(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)
void FUN_180185540(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [32];
  undefined4 uStack_d8;
  longlong *plStack_d0;
  undefined8 *puStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  longlong *plStack_b0;
  longlong lStack_a8;
  longlong alStack_98 [7];
  longlong *plStack_60;
  undefined8 uStack_58;
  ulonglong uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  uStack_d8 = 0;
  puStack_c8 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puStack_c8 = (undefined8 *)*param_2;
  }
  lStack_c0 = (longlong)(param_2 + 4);
  if (0xf < (ulonglong)param_2[7]) {
    lStack_c0 = *(longlong *)lStack_c0;
  }
  plStack_b0 = param_3;
  lVar3 = FUN_1808fc418(0x48);
  plStack_60 = (longlong *)0x0;
  puVar1 = (undefined8 *)param_3[7];
  lStack_a8 = lVar3;
  if (puVar1 != (undefined8 *)0x0) {
    plStack_60 = (longlong *)(**(code **)*puVar1)(puVar1,alStack_98);
  }
  uStack_d8 = 3;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  plStack_d0 = (longlong *)lVar3;
  uStack_58 = param_4;
  if (plStack_60 != (longlong *)0x0) {
    if (plStack_60 == alStack_98) {
      uVar4 = (**(code **)(*plStack_60 + 8))(plStack_60,lVar3);
      *(undefined8 *)(lVar3 + 0x38) = uVar4;
      if (plStack_60 == (longlong *)0x0) goto LAB_180185631;
      (**(code **)(*plStack_60 + 0x20))
                (plStack_60,CONCAT71((int7)((ulonglong)alStack_98 >> 8),plStack_60 != alStack_98));
    }
    else {
      *(longlong **)(lVar3 + 0x38) = plStack_60;
    }
    plStack_60 = (longlong *)0x0;
  }
LAB_180185631:
  *(undefined8 *)(lVar3 + 0x40) = uStack_58;
  NVGSDK_Highlights_SetScreenshotHighlightAsync
            (*(undefined8 *)(param_1 + 8),&puStack_c8,FUN_1801842a0,lVar3);
  uStack_d8 = 1;
  plStack_d0 = alStack_98;
  if (plStack_60 != (longlong *)0x0) {
    (**(code **)(*plStack_60 + 0x20))
              (plStack_60,CONCAT71((int7)((ulonglong)alStack_98 >> 8),plStack_60 != alStack_98));
    plStack_60 = (longlong *)0x0;
  }
  plVar2 = (longlong *)param_3[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801856c0(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)
void FUN_1801856c0(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [32];
  undefined4 uStack_d8;
  longlong *plStack_d0;
  undefined8 *puStack_c8;
  longlong lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  longlong *plStack_a8;
  longlong lStack_a0;
  longlong alStack_98 [7];
  longlong *plStack_60;
  undefined8 uStack_58;
  ulonglong uStack_48;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  uStack_d8 = 0;
  puStack_c8 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puStack_c8 = (undefined8 *)*param_2;
  }
  lStack_c0 = (longlong)(param_2 + 4);
  if (0xf < (ulonglong)param_2[7]) {
    lStack_c0 = *(longlong *)lStack_c0;
  }
  uStack_b8 = *(undefined4 *)(param_2 + 8);
  uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x44);
  plStack_a8 = param_3;
  lVar3 = FUN_1808fc418(0x48);
  plStack_60 = (longlong *)0x0;
  puVar1 = (undefined8 *)param_3[7];
  lStack_a0 = lVar3;
  if (puVar1 != (undefined8 *)0x0) {
    plStack_60 = (longlong *)(**(code **)*puVar1)(puVar1,alStack_98);
  }
  uStack_d8 = 3;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  plStack_d0 = (longlong *)lVar3;
  uStack_58 = param_4;
  if (plStack_60 != (longlong *)0x0) {
    if (plStack_60 == alStack_98) {
      uVar4 = (**(code **)(*plStack_60 + 8))(plStack_60,lVar3);
      *(undefined8 *)(lVar3 + 0x38) = uVar4;
      if (plStack_60 == (longlong *)0x0) goto LAB_1801857bd;
      (**(code **)(*plStack_60 + 0x20))
                (plStack_60,CONCAT71((int7)((ulonglong)alStack_98 >> 8),plStack_60 != alStack_98));
    }
    else {
      *(longlong **)(lVar3 + 0x38) = plStack_60;
    }
    plStack_60 = (longlong *)0x0;
  }
LAB_1801857bd:
  *(undefined8 *)(lVar3 + 0x40) = uStack_58;
  NVGSDK_Highlights_SetVideoHighlightAsync
            (*(undefined8 *)(param_1 + 8),&puStack_c8,FUN_1801842a0,lVar3);
  uStack_d8 = 1;
  plStack_d0 = alStack_98;
  if (plStack_60 != (longlong *)0x0) {
    (**(code **)(*plStack_60 + 0x20))
              (plStack_60,CONCAT71((int7)((ulonglong)alStack_98 >> 8),plStack_60 != alStack_98));
    plStack_60 = (longlong *)0x0;
  }
  plVar2 = (longlong *)param_3[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180185840(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)
void FUN_180185840(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_118 [32];
  undefined4 uStack_f8;
  longlong lStack_f0;
  undefined4 *puStack_e8;
  undefined4 *puStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong lStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  longlong *plStack_b0;
  longlong lStack_a8;
  longlong alStack_98 [7];
  longlong *plStack_60;
  undefined8 uStack_58;
  ulonglong uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  puVar7 = (undefined4 *)0x0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  puStack_e8 = (undefined4 *)0x0;
  puStack_e0 = (undefined4 *)0x0;
  puVar6 = (undefined8 *)*param_2;
  plStack_b0 = param_3;
  if (puVar6 != (undefined8 *)param_2[1]) {
    do {
      puVar3 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar3 = (undefined8 *)*puVar6;
      }
      uStack_d0 = *(undefined4 *)(puVar6 + 4);
      uStack_cc = *(undefined4 *)((longlong)puVar6 + 0x24);
      uStack_d8 = puVar3;
      if (puVar7 == puStack_e8) {
        FUN_1801887a0(&lStack_f0,puStack_e8,&uStack_d8);
        puVar7 = puStack_e0;
      }
      else {
        uStack_d8._0_4_ = SUB84(puVar3,0);
        uStack_d8._4_4_ = (undefined4)((ulonglong)puVar3 >> 0x20);
        *puStack_e8 = (undefined4)uStack_d8;
        puStack_e8[1] = uStack_d8._4_4_;
        puStack_e8[2] = uStack_d0;
        puStack_e8[3] = uStack_cc;
        puStack_e8 = puStack_e8 + 4;
      }
      puVar6 = puVar6 + 5;
    } while (puVar6 != (undefined8 *)param_2[1]);
  }
  lVar2 = lStack_f0;
  lStack_c8 = lStack_f0;
  lStack_c0 = (longlong)puStack_e8 - lStack_f0 >> 4;
  lVar4 = FUN_1808fc418(0x48);
  plStack_60 = (longlong *)0x0;
  puVar6 = (undefined8 *)param_3[7];
  lStack_a8 = lVar4;
  if (puVar6 != (undefined8 *)0x0) {
    plStack_60 = (longlong *)(**(code **)*puVar6)(puVar6,alStack_98);
  }
  uStack_f8 = 3;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  uStack_d8 = (longlong *)lVar4;
  uStack_58 = param_4;
  if (plStack_60 != (longlong *)0x0) {
    if (plStack_60 == alStack_98) {
      uVar5 = (**(code **)(*plStack_60 + 8))(plStack_60,lVar4);
      *(undefined8 *)(lVar4 + 0x38) = uVar5;
      if (plStack_60 == (longlong *)0x0) goto LAB_1801859b0;
      (**(code **)(*plStack_60 + 0x20))
                (plStack_60,CONCAT71((int7)((ulonglong)alStack_98 >> 8),plStack_60 != alStack_98));
    }
    else {
      *(longlong **)(lVar4 + 0x38) = plStack_60;
    }
    plStack_60 = (longlong *)0x0;
  }
LAB_1801859b0:
  *(undefined8 *)(lVar4 + 0x40) = uStack_58;
  NVGSDK_Highlights_OpenSummaryAsync(*(undefined8 *)(param_1 + 8),&lStack_c8,FUN_1801842a0,lVar4);
  uStack_f8 = 1;
  uStack_d8 = alStack_98;
  if (plStack_60 != (longlong *)0x0) {
    (**(code **)(*plStack_60 + 0x20))
              (plStack_60,CONCAT71((int7)((ulonglong)alStack_98 >> 8),plStack_60 != alStack_98));
    plStack_60 = (longlong *)0x0;
  }
  if (lVar2 != 0) {
    uVar8 = (longlong)puVar7 - lVar2 & 0xfffffffffffffff0;
    lVar4 = lVar2;
    if (0xfff < uVar8) {
      uVar8 = uVar8 + 0x27;
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar4) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar4,uVar8);
    lStack_f0 = 0;
    puStack_e8 = (undefined4 *)0x0;
    puStack_e0 = (undefined4 *)0x0;
  }
  plVar1 = (longlong *)param_3[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_3);
    param_3[7] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180185a90(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)
void FUN_180185a90(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [32];
  undefined4 uStack_d8;
  longlong *plStack_d0;
  undefined8 *puStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  longlong *plStack_b0;
  longlong lStack_a8;
  longlong alStack_98 [7];
  longlong *plStack_60;
  undefined8 uStack_58;
  ulonglong uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  uStack_d8 = 0;
  puStack_c8 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puStack_c8 = (undefined8 *)*param_2;
  }
  uStack_c0 = *(undefined4 *)(param_2 + 4);
  uStack_bc = *(undefined4 *)((longlong)param_2 + 0x24);
  plStack_b0 = param_3;
  lVar3 = FUN_1808fc418(0x48);
  plStack_60 = (longlong *)0x0;
  puVar1 = (undefined8 *)param_3[7];
  lStack_a8 = lVar3;
  if (puVar1 != (undefined8 *)0x0) {
    plStack_60 = (longlong *)(**(code **)*puVar1)(puVar1,alStack_98);
  }
  uStack_d8 = 3;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  plStack_d0 = (longlong *)lVar3;
  uStack_58 = param_4;
  if (plStack_60 != (longlong *)0x0) {
    if (plStack_60 == alStack_98) {
      uVar4 = (**(code **)(*plStack_60 + 8))(plStack_60,lVar3);
      *(undefined8 *)(lVar3 + 0x38) = uVar4;
      if (plStack_60 == (longlong *)0x0) goto LAB_180185b78;
      (**(code **)(*plStack_60 + 0x20))
                (plStack_60,CONCAT71((int7)((ulonglong)alStack_98 >> 8),plStack_60 != alStack_98));
    }
    else {
      *(longlong **)(lVar3 + 0x38) = plStack_60;
    }
    plStack_60 = (longlong *)0x0;
  }
LAB_180185b78:
  *(undefined8 *)(lVar3 + 0x40) = uStack_58;
  NVGSDK_Highlights_GetNumberOfHighlightsAsync
            (*(undefined8 *)(param_1 + 8),&puStack_c8,FUN_180185c00,lVar3);
  uStack_d8 = 1;
  plStack_d0 = alStack_98;
  if (plStack_60 != (longlong *)0x0) {
    (**(code **)(*plStack_60 + 0x20))
              (plStack_60,CONCAT71((int7)((ulonglong)alStack_98 >> 8),plStack_60 != alStack_98));
    plStack_60 = (longlong *)0x0;
  }
  plVar2 = (longlong *)param_3[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_f8);
}





// 函数: void FUN_180185c00(int param_1,undefined2 *param_2,longlong *param_3)
void FUN_180185c00(int param_1,undefined2 *param_2,longlong *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined2 auStackX_18 [4];
  longlong *plStackX_20;
  undefined2 *puStack_28;
  longlong alStack_20 [2];
  longlong *plStack_10;
  
  alStack_20[1] = 0xfffffffffffffffe;
  plVar2 = (longlong *)param_3[7];
  plStack_10 = param_3;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)param_3[7];
  }
  else {
    plStackX_20 = (longlong *)CONCAT44(plStackX_20._4_4_,param_1);
    if (param_1 < 0) {
      puStack_28 = (undefined2 *)param_3[8];
      alStack_20[0] = 0;
      (**(code **)(*plVar2 + 0x10))(plVar2,&plStackX_20,alStack_20,&puStack_28);
    }
    else {
      auStackX_18[0] = *param_2;
      alStack_20[0] = param_3[8];
      puStack_28 = auStackX_18;
      plVar2 = (longlong *)param_3[7];
      if (plVar2 == (longlong *)0x0) {
        __Xbad_function_call_std__YAXXZ();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2,&plStackX_20,&puStack_28,alStack_20);
    }
    plVar2 = (longlong *)param_3[7];
  }
  plStackX_20 = param_3;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
  free(param_3,0x48);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180185cf0(undefined8 param_1,longlong param_2)
void FUN_180185cf0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_278 [96];
  undefined8 uStack_218;
  int aiStack_1d0 [2];
  undefined1 uStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined4 uStack_190;
  undefined1 auStack_18c [4];
  undefined8 uStack_188;
  undefined1 auStack_178 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined8 auStack_138 [7];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined4 uStack_b8;
  undefined auStack_b0 [136];
  ulonglong uStack_28;
  
  uVar1 = _DAT_180c8a9e0;
  uStack_218 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_278;
  lVar2 = (longlong)*(int *)(_DAT_180c86938 + 0x1d40) * 0xd0 +
          *(longlong *)(_DAT_180c86938 + 0x1d20);
  puStack_c8 = &UNK_1809fcc28;
  puStack_c0 = auStack_b0;
  auStack_b0[0] = 0;
  uStack_b8 = *(undefined4 *)(lVar2 + 0x20);
  puVar3 = *(undefined **)(lVar2 + 0x18);
  puVar4 = &DAT_18098bc73;
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar3;
  }
  strcpy_s(auStack_b0,0x80,puVar4);
  puVar3 = &DAT_18098bc73;
  if (puStack_c0 != (undefined *)0x0) {
    puVar3 = puStack_c0;
  }
  lVar2 = strstr(puVar3,&UNK_180a0a7b8);
  if (lVar2 != 0) {
    uStack_168 = 0;
    uStack_160 = 0xf;
    auStack_178[0] = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    puStack_198 = auStack_138;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0xf;
    uStack_e8 = 0;
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_2 + lVar2) != '\0');
    FUN_1800671b0(auStack_178,param_2);
    uStack_140 = 1;
    puStack_198 = (undefined8 *)0x100000000;
    uStack_190 = 2;
    FUN_180189600(&uStack_158,&puStack_198,auStack_18c);
    puStack_198 = (undefined8 *)&UNK_180186550;
    uStack_188 = uVar1;
    FUN_180188620(auStack_138,&puStack_198);
    uStack_1b8 = 0;
    uStack_1b0 = 0xf;
    uStack_1c8 = 0;
    puStack_198 = &uStack_1a8;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = FUN_180188560();
    FUN_180183a20(auStack_178,aiStack_1d0);
    if (-1 < aiStack_1d0[0]) {
      uVar1 = func_0x0001801836e0();
                    // WARNING: Subroutine does not return
      FUN_180062300(_DAT_180c86928,&UNK_180a0a800,uVar1);
    }
    uVar1 = func_0x0001801836e0();
                    // WARNING: Subroutine does not return
    FUN_180062300(_DAT_180c86928,&UNK_180a0a890,uVar1);
  }
  puStack_c8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_278);
}





// 函数: void FUN_180186360(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180186360(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  FUN_180067070(param_1 + 0x90);
  plVar2 = *(longlong **)(param_1 + 0x78);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != (longlong *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    uVar1 = (*(longlong *)(param_1 + 0x30) - lVar3 >> 2) * 4;
    lVar4 = lVar3;
    if (0xfff < uVar1) {
      lVar4 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar4) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar3 - lVar4,uVar1 + 0x27,lVar4,param_4,uVar5);
      }
    }
    free(lVar4);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  FUN_180067070(param_1);
  return;
}





