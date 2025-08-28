#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part203.c - 高亮和截图功能模块 (11个函数)

// 函数: 处理高亮组的异步回调
// 原始实现: void FUN_180184da0(uint64_t param_1,int param_2,int64_t *param_3,int64_t *param_4)
void process_highlight_group_callback(uint64_t context_handle, int status_code, int64_t *result_data, int64_t *callback_data)

{
  int64_t *highlight_manager;
  code *error_handler;
  uint *highlight_item;
  uint64_t item_index;
  uint *temp_item;
  int64_t string_length;
  uint64_t total_items;
  uint *item_start;
  int64_t *data_pointer;
  uint *next_item;
  uint *current_item;
  uint *item_end;
  uint **item_collection;
  uint64_t field_1;
  uint item_flags;
  uint item_type;
  uint item_subtype;
  uint item_id;
  uint64_t field_2;
  uint64_t field_3;
  int8_t item_property;
  uint64_t stack_cookie;
  
  field_1 = 0xfffffffffffffffe;
  stack_cookie = GET_SECURITY_COOKIE() ^ (uint64_t)&field_1;
  highlight_manager = (int64_t *)callback_data[7];
  item_index = 0;
  data_pointer = callback_data;
  if (highlight_manager != (int64_t *)0x0) {
    item_collection[0] = status_code;
    if (status_code < 0) {
      item_collection = (uint **)callback_data[8];
      item_start = (uint *)0x0;
      if (highlight_manager == (int64_t *)0x0) {
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
          } while (*(char *)(*(int64_t *)(item_index + *result_data) + string_length) != '\0');
          process_string_data(&item_flags);
          item_property = *(int8_t *)(*result_data + 8 + item_index);
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
            *(uint64_t *)(current_item + 4) = field_2;
            *(uint64_t *)(current_item + 6) = field_3;
            field_2 = 0;
            field_3 = 0xf;
            item_flags = item_flags & 0xffffff00;
            *(int8_t *)(current_item + 8) = item_property;
            current_item = current_item + 10;
          }
          cleanup_string_data(&item_flags);
          total_items = total_items + 1;
          item_index = item_index + 0x10;
        } while (total_items < (uint64_t)result_data[1]);
      }
      item_start = (uint *)callback_data[8];
      item_collection = &next_item;
      highlight_manager = (int64_t *)callback_data[7];
      if (highlight_manager == (int64_t *)0x0) {
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
        item_index = (((int64_t)item_end - (int64_t)next_item) / 0x28) * 0x28;
        temp_item = next_item;
        if (0xfff < item_index) {
          item_index = item_index + 0x27;
          temp_item = *(uint **)(next_item + -2);
          if (0x1f < (uint64_t)((int64_t)next_item + (-8 - (int64_t)temp_item))) {
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
  highlight_manager = (int64_t *)callback_data[7];
  data_pointer = callback_data;
  if (highlight_manager != (int64_t *)0x0) {
    (**(code **)(*highlight_manager + 0x20))(highlight_manager, highlight_manager != callback_data);
    callback_data[7] = 0;
  }
  free(callback_data, 0x48);
                    // WARNING: Subroutine does not return
  cleanup_stack_protection(stack_cookie ^ (uint64_t)&field_1);
}





// 函数: 释放高亮项资源
// 原始实现: void FUN_180185040(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void free_highlight_items(int64_t *item_array, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  uint64_t total_size;
  int64_t current_item;
  int64_t end_item;
  uint64_t unused_param;
  
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
      end_item = *(int64_t *)(current_item + -8);
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



// 函数: void FUN_180185120(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
void FUN_180185120(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)

{
  char cVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int32_t *puVar9;
  uint64_t uVar10;
  int8_t auStack_128 [32];
  int32_t uStack_108;
  int64_t lStack_100;
  int32_t *puStack_f8;
  int32_t *puStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t *puStack_d8;
  int64_t lStack_d0;
  int64_t lStack_c8;
  uint64_t uStack_c0;
  int64_t *plStack_b8;
  int64_t lStack_b0;
  int64_t alStack_a8 [7];
  int64_t *plStack_70;
  uint64_t uStack_68;
  uint64_t uStack_58;
  
  uStack_c0 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_128;
  puVar9 = (int32_t *)0x0;
  uStack_108 = 0;
  lStack_100 = 0;
  puStack_f8 = (int32_t *)0x0;
  puStack_f0 = (int32_t *)0x0;
  plVar8 = *(int64_t **)param_2[4];
  plStack_b8 = param_3;
  if (plVar8 != (int64_t *)param_2[4]) {
    do {
      uStack_e8 = plVar8 + 4;
      if (0xf < (uint64_t)plVar8[7]) {
        uStack_e8 = (int64_t *)*uStack_e8;
      }
      plVar5 = plVar8 + 8;
      if (0xf < (uint64_t)plVar8[0xb]) {
        plVar5 = (int64_t *)*plVar5;
      }
      uStack_e0 = (int64_t)plVar5;
      if (puVar9 == puStack_f8) {
        FUN_1801887a0(&lStack_100,puStack_f8,&uStack_e8);
        puVar9 = puStack_f0;
      }
      else {
        uStack_e8._4_4_ = (int32_t)((uint64_t)uStack_e8 >> 0x20);
        uStack_e0._0_4_ = SUB84(plVar5,0);
        uStack_e0._4_4_ = (int32_t)((uint64_t)plVar5 >> 0x20);
        *puStack_f8 = (int32_t)uStack_e8;
        puStack_f8[1] = uStack_e8._4_4_;
        puStack_f8[2] = (int32_t)uStack_e0;
        puStack_f8[3] = uStack_e0._4_4_;
        puStack_f8 = puStack_f8 + 4;
      }
      plVar5 = (int64_t *)plVar8[2];
      if (*(char *)((int64_t)plVar5 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x19);
        plVar8 = plVar5;
        plVar5 = (int64_t *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x19);
          plVar8 = plVar5;
          plVar5 = (int64_t *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar8[1] + 0x19);
        plVar4 = (int64_t *)plVar8[1];
        plVar5 = plVar8;
        while ((plVar8 = plVar4, cVar1 == '\0' && (plVar5 == (int64_t *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar4 = (int64_t *)plVar8[1];
          plVar5 = plVar8;
        }
      }
    } while (plVar8 != (int64_t *)param_2[4]);
  }
  lVar3 = lStack_100;
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  lStack_d0 = lStack_100;
  lStack_c8 = (int64_t)puStack_f8 - lStack_100 >> 4;
  puStack_d8 = param_2;
  lVar6 = FUN_1808fc418(0x48);
  plStack_70 = (int64_t *)0x0;
  puVar2 = (uint64_t *)param_3[7];
  lStack_b0 = lVar6;
  if (puVar2 != (uint64_t *)0x0) {
    plStack_70 = (int64_t *)(**(code **)*puVar2)(puVar2,alStack_a8);
  }
  uStack_108 = 3;
  *(uint64_t *)(lVar6 + 0x38) = 0;
  uStack_e8 = (int64_t *)lVar6;
  uStack_68 = param_4;
  if (plStack_70 != (int64_t *)0x0) {
    if (plStack_70 == alStack_a8) {
      uVar7 = (**(code **)(*plStack_70 + 8))(plStack_70,lVar6);
      *(uint64_t *)(lVar6 + 0x38) = uVar7;
      if (plStack_70 == (int64_t *)0x0) goto LAB_1801852f0;
      (**(code **)(*plStack_70 + 0x20))
                (plStack_70,CONCAT71((int7)((uint64_t)alStack_a8 >> 8),plStack_70 != alStack_a8));
    }
    else {
      *(int64_t **)(lVar6 + 0x38) = plStack_70;
    }
    plStack_70 = (int64_t *)0x0;
  }
LAB_1801852f0:
  *(uint64_t *)(lVar6 + 0x40) = uStack_68;
  NVGSDK_Highlights_OpenGroupAsync(*(uint64_t *)(param_1 + 8),&puStack_d8,FUN_1801842a0,lVar6);
  uStack_108 = 1;
  uStack_e8 = alStack_a8;
  if (plStack_70 != (int64_t *)0x0) {
    (**(code **)(*plStack_70 + 0x20))
              (plStack_70,CONCAT71((int7)((uint64_t)alStack_a8 >> 8),plStack_70 != alStack_a8));
    plStack_70 = (int64_t *)0x0;
  }
  if (lVar3 != 0) {
    uVar10 = (int64_t)puVar9 - lVar3 & 0xfffffffffffffff0;
    lVar6 = lVar3;
    if (0xfff < uVar10) {
      uVar10 = uVar10 + 0x27;
      lVar6 = *(int64_t *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar6) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar6,uVar10);
    lStack_100 = 0;
    puStack_f8 = (int32_t *)0x0;
    puStack_f0 = (int32_t *)0x0;
  }
  plVar8 = (int64_t *)param_3[7];
  if (plVar8 != (int64_t *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8,plVar8 != param_3);
    param_3[7] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (uint64_t)auStack_128);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801853d0(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
void FUN_1801853d0(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t auStack_f8 [32];
  int32_t uStack_d8;
  int64_t *plStack_d0;
  uint64_t *puStack_c8;
  int8_t uStack_c0;
  uint64_t uStack_b8;
  int64_t *plStack_b0;
  int64_t lStack_a8;
  int64_t alStack_98 [7];
  int64_t *plStack_60;
  uint64_t uStack_58;
  uint64_t uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  uStack_d8 = 0;
  puStack_c8 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    puStack_c8 = (uint64_t *)*param_2;
  }
  uStack_c0 = *(int8_t *)(param_2 + 4);
  plStack_b0 = param_3;
  lVar3 = FUN_1808fc418(0x48);
  plStack_60 = (int64_t *)0x0;
  puVar1 = (uint64_t *)param_3[7];
  lStack_a8 = lVar3;
  if (puVar1 != (uint64_t *)0x0) {
    plStack_60 = (int64_t *)(**(code **)*puVar1)(puVar1,alStack_98);
  }
  uStack_d8 = 3;
  *(uint64_t *)(lVar3 + 0x38) = 0;
  plStack_d0 = (int64_t *)lVar3;
  uStack_58 = param_4;
  if (plStack_60 != (int64_t *)0x0) {
    if (plStack_60 == alStack_98) {
      uVar4 = (**(code **)(*plStack_60 + 8))(plStack_60,lVar3);
      *(uint64_t *)(lVar3 + 0x38) = uVar4;
      if (plStack_60 == (int64_t *)0x0) goto LAB_1801854b6;
      (**(code **)(*plStack_60 + 0x20))
                (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    }
    else {
      *(int64_t **)(lVar3 + 0x38) = plStack_60;
    }
    plStack_60 = (int64_t *)0x0;
  }
LAB_1801854b6:
  *(uint64_t *)(lVar3 + 0x40) = uStack_58;
  NVGSDK_Highlights_CloseGroupAsync(*(uint64_t *)(param_1 + 8),&puStack_c8,FUN_1801842a0,lVar3);
  uStack_d8 = 1;
  plStack_d0 = alStack_98;
  if (plStack_60 != (int64_t *)0x0) {
    (**(code **)(*plStack_60 + 0x20))
              (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    plStack_60 = (int64_t *)0x0;
  }
  plVar2 = (int64_t *)param_3[7];
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180185540(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
void FUN_180185540(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t auStack_f8 [32];
  int32_t uStack_d8;
  int64_t *plStack_d0;
  uint64_t *puStack_c8;
  int64_t lStack_c0;
  uint64_t uStack_b8;
  int64_t *plStack_b0;
  int64_t lStack_a8;
  int64_t alStack_98 [7];
  int64_t *plStack_60;
  uint64_t uStack_58;
  uint64_t uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  uStack_d8 = 0;
  puStack_c8 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    puStack_c8 = (uint64_t *)*param_2;
  }
  lStack_c0 = (int64_t)(param_2 + 4);
  if (0xf < (uint64_t)param_2[7]) {
    lStack_c0 = *(int64_t *)lStack_c0;
  }
  plStack_b0 = param_3;
  lVar3 = FUN_1808fc418(0x48);
  plStack_60 = (int64_t *)0x0;
  puVar1 = (uint64_t *)param_3[7];
  lStack_a8 = lVar3;
  if (puVar1 != (uint64_t *)0x0) {
    plStack_60 = (int64_t *)(**(code **)*puVar1)(puVar1,alStack_98);
  }
  uStack_d8 = 3;
  *(uint64_t *)(lVar3 + 0x38) = 0;
  plStack_d0 = (int64_t *)lVar3;
  uStack_58 = param_4;
  if (plStack_60 != (int64_t *)0x0) {
    if (plStack_60 == alStack_98) {
      uVar4 = (**(code **)(*plStack_60 + 8))(plStack_60,lVar3);
      *(uint64_t *)(lVar3 + 0x38) = uVar4;
      if (plStack_60 == (int64_t *)0x0) goto LAB_180185631;
      (**(code **)(*plStack_60 + 0x20))
                (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    }
    else {
      *(int64_t **)(lVar3 + 0x38) = plStack_60;
    }
    plStack_60 = (int64_t *)0x0;
  }
LAB_180185631:
  *(uint64_t *)(lVar3 + 0x40) = uStack_58;
  NVGSDK_Highlights_SetScreenshotHighlightAsync
            (*(uint64_t *)(param_1 + 8),&puStack_c8,FUN_1801842a0,lVar3);
  uStack_d8 = 1;
  plStack_d0 = alStack_98;
  if (plStack_60 != (int64_t *)0x0) {
    (**(code **)(*plStack_60 + 0x20))
              (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    plStack_60 = (int64_t *)0x0;
  }
  plVar2 = (int64_t *)param_3[7];
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801856c0(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
void FUN_1801856c0(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t auStack_f8 [32];
  int32_t uStack_d8;
  int64_t *plStack_d0;
  uint64_t *puStack_c8;
  int64_t lStack_c0;
  int32_t uStack_b8;
  int32_t uStack_b4;
  uint64_t uStack_b0;
  int64_t *plStack_a8;
  int64_t lStack_a0;
  int64_t alStack_98 [7];
  int64_t *plStack_60;
  uint64_t uStack_58;
  uint64_t uStack_48;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  uStack_d8 = 0;
  puStack_c8 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    puStack_c8 = (uint64_t *)*param_2;
  }
  lStack_c0 = (int64_t)(param_2 + 4);
  if (0xf < (uint64_t)param_2[7]) {
    lStack_c0 = *(int64_t *)lStack_c0;
  }
  uStack_b8 = *(int32_t *)(param_2 + 8);
  uStack_b4 = *(int32_t *)((int64_t)param_2 + 0x44);
  plStack_a8 = param_3;
  lVar3 = FUN_1808fc418(0x48);
  plStack_60 = (int64_t *)0x0;
  puVar1 = (uint64_t *)param_3[7];
  lStack_a0 = lVar3;
  if (puVar1 != (uint64_t *)0x0) {
    plStack_60 = (int64_t *)(**(code **)*puVar1)(puVar1,alStack_98);
  }
  uStack_d8 = 3;
  *(uint64_t *)(lVar3 + 0x38) = 0;
  plStack_d0 = (int64_t *)lVar3;
  uStack_58 = param_4;
  if (plStack_60 != (int64_t *)0x0) {
    if (plStack_60 == alStack_98) {
      uVar4 = (**(code **)(*plStack_60 + 8))(plStack_60,lVar3);
      *(uint64_t *)(lVar3 + 0x38) = uVar4;
      if (plStack_60 == (int64_t *)0x0) goto LAB_1801857bd;
      (**(code **)(*plStack_60 + 0x20))
                (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    }
    else {
      *(int64_t **)(lVar3 + 0x38) = plStack_60;
    }
    plStack_60 = (int64_t *)0x0;
  }
LAB_1801857bd:
  *(uint64_t *)(lVar3 + 0x40) = uStack_58;
  NVGSDK_Highlights_SetVideoHighlightAsync
            (*(uint64_t *)(param_1 + 8),&puStack_c8,FUN_1801842a0,lVar3);
  uStack_d8 = 1;
  plStack_d0 = alStack_98;
  if (plStack_60 != (int64_t *)0x0) {
    (**(code **)(*plStack_60 + 0x20))
              (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    plStack_60 = (int64_t *)0x0;
  }
  plVar2 = (int64_t *)param_3[7];
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180185840(int64_t param_1,int64_t *param_2,int64_t *param_3,uint64_t param_4)
void FUN_180185840(int64_t param_1,int64_t *param_2,int64_t *param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int32_t *puVar7;
  uint64_t uVar8;
  int8_t auStack_118 [32];
  int32_t uStack_f8;
  int64_t lStack_f0;
  int32_t *puStack_e8;
  int32_t *puStack_e0;
  uint64_t uStack_d8;
  int32_t uStack_d0;
  int32_t uStack_cc;
  int64_t lStack_c8;
  int64_t lStack_c0;
  uint64_t uStack_b8;
  int64_t *plStack_b0;
  int64_t lStack_a8;
  int64_t alStack_98 [7];
  int64_t *plStack_60;
  uint64_t uStack_58;
  uint64_t uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  puVar7 = (int32_t *)0x0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  puStack_e8 = (int32_t *)0x0;
  puStack_e0 = (int32_t *)0x0;
  puVar6 = (uint64_t *)*param_2;
  plStack_b0 = param_3;
  if (puVar6 != (uint64_t *)param_2[1]) {
    do {
      puVar3 = puVar6;
      if (0xf < (uint64_t)puVar6[3]) {
        puVar3 = (uint64_t *)*puVar6;
      }
      uStack_d0 = *(int32_t *)(puVar6 + 4);
      uStack_cc = *(int32_t *)((int64_t)puVar6 + 0x24);
      uStack_d8 = puVar3;
      if (puVar7 == puStack_e8) {
        FUN_1801887a0(&lStack_f0,puStack_e8,&uStack_d8);
        puVar7 = puStack_e0;
      }
      else {
        uStack_d8._0_4_ = SUB84(puVar3,0);
        uStack_d8._4_4_ = (int32_t)((uint64_t)puVar3 >> 0x20);
        *puStack_e8 = (int32_t)uStack_d8;
        puStack_e8[1] = uStack_d8._4_4_;
        puStack_e8[2] = uStack_d0;
        puStack_e8[3] = uStack_cc;
        puStack_e8 = puStack_e8 + 4;
      }
      puVar6 = puVar6 + 5;
    } while (puVar6 != (uint64_t *)param_2[1]);
  }
  lVar2 = lStack_f0;
  lStack_c8 = lStack_f0;
  lStack_c0 = (int64_t)puStack_e8 - lStack_f0 >> 4;
  lVar4 = FUN_1808fc418(0x48);
  plStack_60 = (int64_t *)0x0;
  puVar6 = (uint64_t *)param_3[7];
  lStack_a8 = lVar4;
  if (puVar6 != (uint64_t *)0x0) {
    plStack_60 = (int64_t *)(**(code **)*puVar6)(puVar6,alStack_98);
  }
  uStack_f8 = 3;
  *(uint64_t *)(lVar4 + 0x38) = 0;
  uStack_d8 = (int64_t *)lVar4;
  uStack_58 = param_4;
  if (plStack_60 != (int64_t *)0x0) {
    if (plStack_60 == alStack_98) {
      uVar5 = (**(code **)(*plStack_60 + 8))(plStack_60,lVar4);
      *(uint64_t *)(lVar4 + 0x38) = uVar5;
      if (plStack_60 == (int64_t *)0x0) goto LAB_1801859b0;
      (**(code **)(*plStack_60 + 0x20))
                (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    }
    else {
      *(int64_t **)(lVar4 + 0x38) = plStack_60;
    }
    plStack_60 = (int64_t *)0x0;
  }
LAB_1801859b0:
  *(uint64_t *)(lVar4 + 0x40) = uStack_58;
  NVGSDK_Highlights_OpenSummaryAsync(*(uint64_t *)(param_1 + 8),&lStack_c8,FUN_1801842a0,lVar4);
  uStack_f8 = 1;
  uStack_d8 = alStack_98;
  if (plStack_60 != (int64_t *)0x0) {
    (**(code **)(*plStack_60 + 0x20))
              (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    plStack_60 = (int64_t *)0x0;
  }
  if (lVar2 != 0) {
    uVar8 = (int64_t)puVar7 - lVar2 & 0xfffffffffffffff0;
    lVar4 = lVar2;
    if (0xfff < uVar8) {
      uVar8 = uVar8 + 0x27;
      lVar4 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar4) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar4,uVar8);
    lStack_f0 = 0;
    puStack_e8 = (int32_t *)0x0;
    puStack_e0 = (int32_t *)0x0;
  }
  plVar1 = (int64_t *)param_3[7];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_3);
    param_3[7] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180185a90(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
void FUN_180185a90(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t auStack_f8 [32];
  int32_t uStack_d8;
  int64_t *plStack_d0;
  uint64_t *puStack_c8;
  int32_t uStack_c0;
  int32_t uStack_bc;
  uint64_t uStack_b8;
  int64_t *plStack_b0;
  int64_t lStack_a8;
  int64_t alStack_98 [7];
  int64_t *plStack_60;
  uint64_t uStack_58;
  uint64_t uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  uStack_d8 = 0;
  puStack_c8 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    puStack_c8 = (uint64_t *)*param_2;
  }
  uStack_c0 = *(int32_t *)(param_2 + 4);
  uStack_bc = *(int32_t *)((int64_t)param_2 + 0x24);
  plStack_b0 = param_3;
  lVar3 = FUN_1808fc418(0x48);
  plStack_60 = (int64_t *)0x0;
  puVar1 = (uint64_t *)param_3[7];
  lStack_a8 = lVar3;
  if (puVar1 != (uint64_t *)0x0) {
    plStack_60 = (int64_t *)(**(code **)*puVar1)(puVar1,alStack_98);
  }
  uStack_d8 = 3;
  *(uint64_t *)(lVar3 + 0x38) = 0;
  plStack_d0 = (int64_t *)lVar3;
  uStack_58 = param_4;
  if (plStack_60 != (int64_t *)0x0) {
    if (plStack_60 == alStack_98) {
      uVar4 = (**(code **)(*plStack_60 + 8))(plStack_60,lVar3);
      *(uint64_t *)(lVar3 + 0x38) = uVar4;
      if (plStack_60 == (int64_t *)0x0) goto LAB_180185b78;
      (**(code **)(*plStack_60 + 0x20))
                (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    }
    else {
      *(int64_t **)(lVar3 + 0x38) = plStack_60;
    }
    plStack_60 = (int64_t *)0x0;
  }
LAB_180185b78:
  *(uint64_t *)(lVar3 + 0x40) = uStack_58;
  NVGSDK_Highlights_GetNumberOfHighlightsAsync
            (*(uint64_t *)(param_1 + 8),&puStack_c8,FUN_180185c00,lVar3);
  uStack_d8 = 1;
  plStack_d0 = alStack_98;
  if (plStack_60 != (int64_t *)0x0) {
    (**(code **)(*plStack_60 + 0x20))
              (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    plStack_60 = (int64_t *)0x0;
  }
  plVar2 = (int64_t *)param_3[7];
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_f8);
}





// 函数: void FUN_180185c00(int param_1,int16_t *param_2,int64_t *param_3)
void FUN_180185c00(int param_1,int16_t *param_2,int64_t *param_3)

{
  code *pcVar1;
  int64_t *plVar2;
  int16_t auStackX_18 [4];
  int64_t *plStackX_20;
  int16_t *puStack_28;
  int64_t alStack_20 [2];
  int64_t *plStack_10;
  
  alStack_20[1] = 0xfffffffffffffffe;
  plVar2 = (int64_t *)param_3[7];
  plStack_10 = param_3;
  if (plVar2 == (int64_t *)0x0) {
    plVar2 = (int64_t *)param_3[7];
  }
  else {
    plStackX_20 = (int64_t *)CONCAT44(plStackX_20._4_4_,param_1);
    if (param_1 < 0) {
      puStack_28 = (int16_t *)param_3[8];
      alStack_20[0] = 0;
      (**(code **)(*plVar2 + 0x10))(plVar2,&plStackX_20,alStack_20,&puStack_28);
    }
    else {
      auStackX_18[0] = *param_2;
      alStack_20[0] = param_3[8];
      puStack_28 = auStackX_18;
      plVar2 = (int64_t *)param_3[7];
      if (plVar2 == (int64_t *)0x0) {
        __Xbad_function_call_std__YAXXZ();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2,&plStackX_20,&puStack_28,alStack_20);
    }
    plVar2 = (int64_t *)param_3[7];
  }
  plStackX_20 = param_3;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
  free(param_3,0x48);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180185cf0(uint64_t param_1,int64_t param_2)
void FUN_180185cf0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  void *puVar3;
  void *puVar4;
  int8_t auStack_278 [96];
  uint64_t uStack_218;
  int aiStack_1d0 [2];
  int8_t uStack_1c8;
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
  uint64_t *puStack_198;
  int32_t uStack_190;
  int8_t auStack_18c [4];
  uint64_t uStack_188;
  int8_t auStack_178 [16];
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  int8_t uStack_140;
  uint64_t auStack_138 [7];
  uint64_t uStack_100;
  uint64_t uStack_f8;
  int32_t uStack_f0;
  int8_t uStack_e8;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  void *puStack_c8;
  void *puStack_c0;
  int32_t uStack_b8;
  uint8_t auStack_b0 [136];
  uint64_t uStack_28;
  
  uVar1 = core_system_data_memory;
  uStack_218 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_278;
  lVar2 = (int64_t)*(int *)(system_message_buffer + 0x1d40) * 0xd0 +
          *(int64_t *)(system_message_buffer + 0x1d20);
  puStack_c8 = &unknown_var_3432_ptr;
  puStack_c0 = auStack_b0;
  auStack_b0[0] = 0;
  uStack_b8 = *(int32_t *)(lVar2 + 0x20);
  puVar3 = *(void **)(lVar2 + 0x18);
  puVar4 = &system_buffer_ptr;
  if (puVar3 != (void *)0x0) {
    puVar4 = puVar3;
  }
  strcpy_s(auStack_b0,0x80,puVar4);
  puVar3 = &system_buffer_ptr;
  if (puStack_c0 != (void *)0x0) {
    puVar3 = puStack_c0;
  }
  lVar2 = strstr(puVar3,&unknown_var_9640_ptr);
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
    puStack_198 = (uint64_t *)0x100000000;
    uStack_190 = 2;
    FUN_180189600(&uStack_158,&puStack_198,auStack_18c);
    puStack_198 = (uint64_t *)&unknown_var_9744_ptr;
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
      FUN_180062300(system_message_context,&unknown_var_9712_ptr,uVar1);
    }
    uVar1 = func_0x0001801836e0();
                    // WARNING: Subroutine does not return
    FUN_180062300(system_message_context,&unknown_var_9856_ptr,uVar1);
  }
  puStack_c8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_278);
}





// 函数: void FUN_180186360(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180186360(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  FUN_180067070(param_1 + 0x90);
  plVar2 = *(int64_t **)(param_1 + 0x78);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != (int64_t *)(param_1 + 0x40));
    *(uint64_t *)(param_1 + 0x78) = 0;
  }
  lVar3 = *(int64_t *)(param_1 + 0x20);
  if (lVar3 != 0) {
    uVar1 = (*(int64_t *)(param_1 + 0x30) - lVar3 >> 2) * 4;
    lVar4 = lVar3;
    if (0xfff < uVar1) {
      lVar4 = *(int64_t *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar4) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar3 - lVar4,uVar1 + 0x27,lVar4,param_4,uVar5);
      }
    }
    free(lVar4);
    *(uint64_t *)(param_1 + 0x20) = 0;
    *(uint64_t *)(param_1 + 0x28) = 0;
    *(uint64_t *)(param_1 + 0x30) = 0;
  }
  FUN_180067070(param_1);
  return;
}





