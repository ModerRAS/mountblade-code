#include "TaleWorlds.Native.Split.h"

// 01_initialization_part046.c - 14 个函数

// 函数: void SerializeTransformData - 序列化变换数据
// 将变换数据序列化到缓冲区中，包括位置、旋转、缩放等信息
void SerializeTransformData(longlong source_buffer, longlong *target_buffer)

  undefined1 *byte_data_ptr;
  undefined4 *word_data_ptr;
  undefined4 temp_word1;
  undefined4 temp_word2;
  undefined4 temp_word3;
  undefined4 temp_word4;
  undefined4 *buffer_ptr;
  
  buffer_ptr = (undefined4 *)target_buffer[1];
  if ((ulonglong)((*target_buffer - (longlong)buffer_ptr) + target_buffer[2]) < 5) {
    FUN_180639bf0(target_buffer,(longlong)buffer_ptr + (4 - *target_buffer));
    buffer_ptr = (undefined4 *)target_buffer[1];
  }
  *buffer_ptr = 1;
  buffer_ptr = (undefined4 *)(target_buffer[1] + 4);
  target_buffer[1] = (longlong)buffer_ptr;
  if ((ulonglong)((*target_buffer - (longlong)buffer_ptr) + target_buffer[2]) < 0x11) {
    FUN_180639bf0(target_buffer,(longlong)buffer_ptr + (0x10 - *target_buffer));
    buffer_ptr = (undefined4 *)target_buffer[1];
  }
  temp_word1 = *(undefined4 *)(source_buffer + 0x1c);
  temp_word2 = *(undefined4 *)(source_buffer + 0x20);
  temp_word3 = *(undefined4 *)(source_buffer + 0x24);
  *buffer_ptr = *(undefined4 *)(source_buffer + 0x18);
  buffer_ptr[1] = temp_word1;
  buffer_ptr[2] = temp_word2;
  buffer_ptr[3] = temp_word3;
  byte_data_ptr = (undefined1 *)(target_buffer[1] + 0x10);
  target_buffer[1] = (longlong)byte_data_ptr;
  temp_word1 = *(undefined1 *)(source_buffer + 0x28);
  if ((ulonglong)((*target_buffer - (longlong)byte_data_ptr) + target_buffer[2]) < 2) {
    FUN_180639bf0(target_buffer,byte_data_ptr + (1 - *target_buffer));
    byte_data_ptr = (undefined1 *)target_buffer[1];
  }
  *byte_data_ptr = temp_word1;
  buffer_ptr = (undefined4 *)(target_buffer[1] + 1);
  target_buffer[1] = (longlong)buffer_ptr;
  if ((ulonglong)((*target_buffer - (longlong)buffer_ptr) + target_buffer[2]) < 0x11) {
    FUN_180639bf0(target_buffer,(longlong)buffer_ptr + (0x10 - *target_buffer));
    buffer_ptr = (undefined4 *)target_buffer[1];
  }
  temp_word1 = *(undefined4 *)(source_buffer + 0xc);
  temp_word2 = *(undefined4 *)(source_buffer + 0x10);
  temp_word3 = *(undefined4 *)(source_buffer + 0x14);
  *buffer_ptr = *(undefined4 *)(source_buffer + 8);
  buffer_ptr[1] = temp_word1;
  buffer_ptr[2] = temp_word2;
  buffer_ptr[3] = temp_word3;
  buffer_ptr = (undefined4 *)(target_buffer[1] + 0x10);
  target_buffer[1] = (longlong)buffer_ptr;
  temp_word1 = *(undefined4 *)(source_buffer + 0x2c);
  if ((ulonglong)((*target_buffer - (longlong)buffer_ptr) + target_buffer[2]) < 5) {
    FUN_180639bf0(target_buffer,(longlong)buffer_ptr + (4 - *target_buffer));
    buffer_ptr = (undefined4 *)target_buffer[1];
  }
  *buffer_ptr = temp_word1;
  buffer_ptr = (undefined4 *)(target_buffer[1] + 4);
  target_buffer[1] = (longlong)buffer_ptr;
  temp_word1 = *(undefined4 *)(source_buffer + 0x30);
  if ((ulonglong)((*target_buffer - (longlong)buffer_ptr) + target_buffer[2]) < 5) {
    FUN_180639bf0(target_buffer,(longlong)buffer_ptr + (4 - *target_buffer));
    buffer_ptr = (undefined4 *)target_buffer[1];
  }
  *buffer_ptr = temp_word1;
  buffer_ptr = (undefined4 *)(target_buffer[1] + 4);
  target_buffer[1] = (longlong)buffer_ptr;
  temp_word1 = *(undefined4 *)(source_buffer + 0x34);
  if ((ulonglong)((*target_buffer - (longlong)buffer_ptr) + target_buffer[2]) < 5) {
    FUN_180639bf0(target_buffer,(longlong)buffer_ptr + (4 - *target_buffer));
    *(undefined4 *)target_buffer[1] = temp_word1;
  }
  else {
    *buffer_ptr = temp_word1;
  }
  target_buffer[1] = target_buffer[1] + 4;
  return;
}





// 函数: void ClearTransformArray - 清理变换数组
// 清理变换数组中的所有元素，重置指针和数据
void ClearTransformArray(longlong *array_container)

{
  longlong *current_element;
  longlong *array_end;
  
  current_element = (longlong *)array_container[1];
  array_end = (longlong *)*array_container;
  while( true ) {
    if (current_element == array_end) {
      if (*array_container != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    if (*(longlong *)((longlong)current_element + 0x12) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 *)((longlong)current_element + 0x12) = 0;
    if (*(longlong *)((longlong)current_element + 0x1a) != 0) break;
    *(undefined8 *)((longlong)current_element + 0x1a) = 0;
    if (*current_element != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *current_element = 0;
    if (current_element[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    current_element[1] = 0;
    current_element = (longlong *)((longlong)current_element + 0x24);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void ResizeTransformArray - 调整变换数组大小
// 调整变换数组的大小到指定的元素数量
void ResizeTransformArray(longlong *array_container, ulonglong new_size)

{
  longlong *current_end;
  ulonglong current_size;
  longlong *new_end;
  longlong array_start;
  longlong size_difference;
  
  current_end = (longlong *)array_container[1];
  array_start = *array_container;
  current_size = ((longlong)current_end - array_start) / 0x24;
  if (current_size < new_size) {
    size_difference = new_size - current_size;
    FUN_180074c20(array_container,size_difference,(longlong)current_end - array_start,size_difference,0xfffffffffffffffe);
  }
  else {
    new_end = (longlong *)(new_size * 0x24 + array_start);
    if (new_end != current_end) {
      do {
        if (*(longlong *)((longlong)new_end + 0x12) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 *)((longlong)new_end + 0x12) = 0;
        if (*(longlong *)((longlong)new_end + 0x1a) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 *)((longlong)new_end + 0x1a) = 0;
        if (*new_end != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *new_end = 0;
        if (new_end[1] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        new_end[1] = 0;
        new_end = (longlong *)((longlong)new_end + 0x24);
      } while (new_end != current_end);
      array_start = *array_container;
    }
    array_container[1] = new_size * 0x24 + array_start;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180074c20(undefined8 *param_1,ulonglong param_2)
void FUN_180074c20(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  puVar7 = (undefined8 *)param_1[1];
  if ((ulonglong)((param_1[2] - (longlong)puVar7) / 0x24) < param_2) {
    puVar3 = (undefined8 *)*param_1;
    lVar8 = ((longlong)puVar7 - (longlong)puVar3) / 0x24;
    uVar9 = lVar8 * 2;
    if (lVar8 == 0) {
      uVar9 = 1;
    }
    if (uVar9 < lVar8 + param_2) {
      uVar9 = lVar8 + param_2;
    }
    plVar1 = (longlong *)0x0;
    if (uVar9 != 0) {
      plVar1 = (longlong *)
               FUN_18062b420(_DAT_180c8ed18,uVar9 * 0x24,*(undefined1 *)(param_1 + 3),puVar7,
                             0xfffffffffffffffe);
      puVar7 = (undefined8 *)param_1[1];
      puVar3 = (undefined8 *)*param_1;
    }
    plVar2 = plVar1;
    if (puVar3 != puVar7) {
      lVar8 = (longlong)plVar1 - (longlong)puVar3;
      plVar4 = (longlong *)((longlong)puVar3 + 0x1a);
      do {
        *(undefined2 *)(lVar8 + -10 + (longlong)plVar4) = *(undefined2 *)((longlong)plVar4 + -10);
        if (*(longlong *)((longlong)plVar4 + -0x12) == 0) {
          *(undefined8 *)(lVar8 + -0x12 + (longlong)plVar4) = 0;
        }
        else {
          *(longlong *)(lVar8 + -0x12 + (longlong)plVar4) = *(longlong *)((longlong)plVar4 + -0x12);
          *(undefined8 *)((longlong)plVar4 + -0x12) = 0;
        }
        if (*(longlong *)((longlong)plVar4 + -0x1a) == 0) {
          *plVar2 = 0;
        }
        else {
          *plVar2 = *(longlong *)((longlong)plVar4 + -0x1a);
          *(undefined8 *)((longlong)plVar4 + -0x1a) = 0;
        }
        *(undefined2 *)((longlong)plVar4 + -10) = 0;
        *(short *)(lVar8 + 8 + (longlong)plVar4) = (short)plVar4[1];
        if (*plVar4 == 0) {
          *(undefined8 *)((longlong)plVar4 + lVar8) = 0;
        }
        else {
          *(longlong *)((longlong)plVar4 + lVar8) = *plVar4;
          *plVar4 = 0;
        }
        if (plVar4[-1] == 0) {
          *(undefined8 *)(lVar8 + -8 + (longlong)plVar4) = 0;
        }
        else {
          *(longlong *)(lVar8 + -8 + (longlong)plVar4) = plVar4[-1];
          plVar4[-1] = 0;
        }
        *(undefined2 *)(plVar4 + 1) = 0;
        plVar2 = (longlong *)((longlong)plVar2 + 0x24);
        puVar3 = (undefined8 *)((longlong)plVar4 + 10);
        plVar4 = (longlong *)((longlong)plVar4 + 0x24);
      } while (puVar3 != puVar7);
    }
    if (param_2 != 0) {
      puVar7 = (undefined8 *)((longlong)plVar2 + 0x1a);
      uVar6 = param_2;
      do {
        puVar7[-1] = 0;
        *puVar7 = 0;
        *(undefined2 *)(puVar7 + 1) = 0;
        *(undefined2 *)((longlong)puVar7 + -10) = 0;
        *(undefined8 *)((longlong)puVar7 + -0x1a) = 0;
        *(undefined8 *)((longlong)puVar7 + -0x12) = 0;
        *(undefined2 *)(puVar7 + 1) = 0;
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7 = (undefined8 *)((longlong)puVar7 + 0x24);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    plVar4 = (longlong *)param_1[1];
    plVar5 = (longlong *)*param_1;
    if (plVar5 != plVar4) {
      do {
        if (*(longlong *)((longlong)plVar5 + 0x12) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 *)((longlong)plVar5 + 0x12) = 0;
        if (*(longlong *)((longlong)plVar5 + 0x1a) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 *)((longlong)plVar5 + 0x1a) = 0;
        if (*plVar5 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *plVar5 = 0;
        if (plVar5[1] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar5[1] = 0;
        plVar5 = (longlong *)((longlong)plVar5 + 0x24);
      } while (plVar5 != plVar4);
      plVar5 = (longlong *)*param_1;
    }
    if (plVar5 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar5);
    }
    *param_1 = plVar1;
    param_1[1] = (longlong)plVar2 + param_2 * 0x24;
    param_1[2] = (longlong)plVar1 + uVar9 * 0x24;
  }
  else {
    if (param_2 != 0) {
      puVar3 = (undefined8 *)((longlong)puVar7 + 0x1a);
      uVar9 = param_2;
      do {
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        *(undefined4 *)(puVar7 + 4) = 0;
        *(undefined2 *)((longlong)puVar3 + -10) = 0;
        *puVar7 = 0;
        *(undefined8 *)((longlong)puVar3 + -0x12) = 0;
        *(undefined2 *)(puVar3 + 1) = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar7 = (undefined8 *)((longlong)puVar7 + 0x24);
        puVar3 = (undefined8 *)((longlong)puVar3 + 0x24);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      puVar7 = (undefined8 *)param_1[1];
    }
    param_1[1] = (longlong)puVar7 + param_2 * 0x24;
  }
  return;
}





// 函数: void FUN_180074ed0(longlong *param_1)
void FUN_180074ed0(longlong *param_1)

{
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = 0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  return;
}



undefined8 *
FUN_180074f20(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_1809ffa18;
  if ((param_2 & 1) != 0) {
    free(param_1,0x38,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



undefined8 * FUN_180074f70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_1809ffa18;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



undefined8 *
FUN_180074fb0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc28;
  param_2[1] = param_2 + 3;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 2) = 7;
  strcpy_s(param_2[1],0x80,&UNK_1809ffa30,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180075030(undefined8 *param_1,char param_2,char param_3)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *param_1 = &UNK_180a21690;
  *param_1 = &UNK_180a21720;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &UNK_180a02e68;
  param_1[2] = &UNK_18098bcb0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = &UNK_1809fcc28;
  param_1[3] = param_1 + 5;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb2) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x15] = 0;
  *param_1 = &UNK_180a00270;
  func_0x000180086550(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0x1d) = 0;
  UNLOCK();
  LOCK();
  *(undefined1 *)((longlong)param_1 + 0xec) = 0;
  UNLOCK();
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3e] = param_1;
  param_1[0x3d] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 3;
  param_1[0x4d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined2 *)(param_1 + 0x5d) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x5f) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0xfd) = *(byte *)((longlong)param_1 + 0xfd) & 0xfb;
  *(byte *)((longlong)param_1 + 0xfd) = *(byte *)((longlong)param_1 + 0xfd) | param_2 << 2;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(byte *)((longlong)param_1 + 0xfe) = *(byte *)((longlong)param_1 + 0xfe) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  plVar4 = (longlong *)param_1[0x36];
  param_1[0x36] = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  if (param_3 == '\0') {
    *(byte *)((longlong)param_1 + 0xfd) = *(byte *)((longlong)param_1 + 0xfd) & 0xdf;
  }
  else {
    *(byte *)((longlong)param_1 + 0xfd) = *(byte *)((longlong)param_1 + 0xfd) | 0x20;
  }
  *(byte *)((longlong)param_1 + 0xfd) = *(byte *)((longlong)param_1 + 0xfd) & 0xbf;
  *(undefined1 *)((longlong)param_1 + 0xff) = 1;
  plVar4 = (longlong *)param_1[0x37];
  param_1[0x37] = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  *(undefined1 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf7) = 0;
  *(byte *)((longlong)param_1 + 0xfd) = *(byte *)((longlong)param_1 + 0xfd) & 0x6d;
  plVar3 = (longlong *)param_1[0x38];
  param_1[0x38] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  bVar2 = *(byte *)((longlong)param_1 + 0xfd) & 0xf7;
  *(byte *)((longlong)param_1 + 0xfd) = bVar2;
  param_1[0x47] = 0x3f8000003f800000;
  param_1[0x48] = 0x3f8000003f800000;
  param_1[0x49] = 0x3f8000003f800000;
  param_1[0x4a] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0;
  param_1[0x26] = 0x3f80000000000000;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3f800000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x3f80000000000000;
  param_1[0x2c] = 0x3f800000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x3f80000000000000;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0x3f800000;
  param_1[0x32] = 0;
  param_1[0x33] = 0x3f80000000000000;
  *(byte *)((longlong)param_1 + 0xfd) = bVar2 | 1;
  *(byte *)((longlong)param_1 + 0xfe) = *(byte *)((longlong)param_1 + 0xfe) | 2;
  *(undefined4 *)(param_1 + 0x4e) = 0x21;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x80;
  *(undefined1 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined2 *)((longlong)param_1 + 0xfa) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0xbf800000;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  param_1[0x5a] = 0;
  if (param_2 == '\0') {
    plVar1 = (longlong *)param_1[0x42];
    param_1[0x42] = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1,0);
    }
  }
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x35) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x70,8,9,plVar4,plVar3);
  *plVar3 = (longlong)&UNK_180a21690;
  *plVar3 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (longlong)&UNK_180a00208;
  plVar3[4] = (longlong)&UNK_18098bcb0;
  plVar3[5] = 0;
  *(undefined4 *)(plVar3 + 6) = 0;
  plVar3[4] = (longlong)&UNK_180a3c3e0;
  plVar3[7] = 0;
  plVar3[5] = 0;
  *(undefined4 *)(plVar3 + 6) = 0;
  *(undefined4 *)(plVar3 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)plVar3 + 0x44) = 0x3f000000;
  *(undefined4 *)(plVar3 + 9) = 0x3f000000;
  *(undefined4 *)((longlong)plVar3 + 0x4c) = 0x3f4ccccd;
  *(undefined4 *)(plVar3 + 10) = 0x3f000000;
  *(undefined4 *)((longlong)plVar3 + 0x54) = 0x3e99999a;
  *(undefined4 *)(plVar3 + 0xb) = 0x411cf5c3;
  *(undefined4 *)((longlong)plVar3 + 0x5c) = 0x3f800000;
  *(undefined4 *)(plVar3 + 0xc) = 0xbf800000;
  *(undefined4 *)((longlong)plVar3 + 100) = 0x3f800000;
  *(undefined4 *)(plVar3 + 0xd) = 0x3f000000;
  *(undefined4 *)((longlong)plVar3 + 0x6c) = 0x3f800000;
  *(undefined4 *)(plVar3 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)plVar3 + 0x14) = 0x78;
  *(undefined2 *)(plVar3 + 3) = 0;
  *(undefined1 *)((longlong)plVar3 + 0x1a) = 0;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar4 = (longlong *)param_1[0x4d];
  param_1[0x4d] = plVar3;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  *(byte *)((longlong)param_1 + 0xfe) = *(byte *)((longlong)param_1 + 0xfe) & 0xf3;
  param_1[0x3b] = 0;
  LOCK();
  *(undefined1 *)((longlong)param_1 + 0xf9) = 0;
  UNLOCK();
  param_1[0x59] = 0;
  *(undefined1 *)((longlong)param_1 + 0xf5) = 0;
  param_1[0x4b] = 0;
  return param_1;
}



undefined8 FUN_180075580(undefined8 param_1,ulonglong param_2)

{
  FUN_1800756e0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x300);
  }
  return param_1;
}



undefined1 FUN_1800755c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puStack_30;
  longlong lStack_28;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_1806279c0(&puStack_30);
  uVar1 = FUN_180063510(param_1 + 0x218,&puStack_30,param_3,param_4,uVar2);
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x000180276fbd)



// 函数: void FUN_180075630(longlong param_1,undefined8 *param_2)
void FUN_180075630(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_e8 [184];
  undefined8 uStack_30;
  
  uVar11 = *(uint *)(param_1 + 0x100) & 0xfbffffff;
  *(uint *)(param_1 + 0x100) = uVar11;
  uStack_30 = 0x180075655;
  cVar8 = FUN_1800861a0(param_2);
  if (cVar8 == '\0') {
    *(uint *)(param_1 + 0x100) = uVar11 | 0x4000000;
  }
  uVar7 = param_2[1];
  plVar2 = *(longlong **)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x120) = *param_2;
  *(undefined8 *)(param_1 + 0x128) = uVar7;
  uVar7 = param_2[3];
  *(undefined8 *)(param_1 + 0x130) = param_2[2];
  *(undefined8 *)(param_1 + 0x138) = uVar7;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 5);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x144) = uVar4;
  *(undefined4 *)(param_1 + 0x148) = uVar5;
  *(undefined4 *)(param_1 + 0x14c) = uVar6;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 7);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 0x154) = uVar4;
  *(undefined4 *)(param_1 + 0x158) = uVar5;
  *(undefined4 *)(param_1 + 0x15c) = uVar6;
  if (plVar2 != (longlong *)0x0) {
    if (*(code **)(*plVar2 + 0x160) == (code *)&UNK_180277350) {
      puVar1 = (undefined8 *)((longlong)plVar2 + 0x214);
      *(undefined4 *)((longlong)plVar2 + 0x244) = 0;
      if (plVar2[8] - plVar2[7] >> 4 == 0) {
        *puVar1 = 0;
        *(undefined8 *)((longlong)plVar2 + 0x21c) = 0;
        *(undefined8 *)((longlong)plVar2 + 0x224) = 0;
        *(undefined8 *)((longlong)plVar2 + 0x22c) = 0;
        *(undefined8 *)((longlong)plVar2 + 0x234) = 0;
        *(undefined8 *)((longlong)plVar2 + 0x23c) = 0;
      }
      else {
        *puVar1 = 0x4cbebc204cbebc20;
        *(undefined8 *)((longlong)plVar2 + 0x21c) = 0x7f7fffff4cbebc20;
        *(undefined4 *)((longlong)plVar2 + 0x234) = 0;
        *(undefined4 *)(plVar2 + 0x47) = 0;
        *(undefined4 *)((longlong)plVar2 + 0x23c) = 0;
        *(undefined4 *)(plVar2 + 0x48) = 0x7f7fffff;
        *(undefined8 *)((longlong)plVar2 + 0x224) = 0xccbebc20ccbebc20;
        *(undefined8 *)((longlong)plVar2 + 0x22c) = 0x7f7fffffccbebc20;
        plVar10 = (longlong *)plVar2[7];
        if (plVar10 < (longlong *)plVar2[8]) {
          do {
            lVar3 = *plVar10;
            if (((*(byte *)(lVar3 + 0x100) & 0x20) == 0) || (plVar2[5] == 0)) {
              lVar9 = lVar3 + 0x120;
            }
            else {
              lVar9 = FUN_180194940(lVar3 + 0x120,auStack_e8,plVar2[5] + 0x70);
            }
            FUN_18063a240(puVar1,lVar3 + 0x274,lVar9);
            plVar10 = plVar10 + 2;
          } while (plVar10 < (longlong *)plVar2[8]);
        }
        if (((plVar2[8] - plVar2[7] & 0xfffffffffffffff0U) == 0x10) &&
           (lVar3 = *(longlong *)plVar2[7], (*(uint *)(lVar3 + 0x100) & 0x4000000) == 0)) {
          uVar7 = *(undefined8 *)(lVar3 + 0x29c);
          *(undefined8 *)((longlong)plVar2 + 0x234) = *(undefined8 *)(lVar3 + 0x294);
          *(undefined8 *)((longlong)plVar2 + 0x23c) = uVar7;
          *(undefined4 *)((longlong)plVar2 + 0x244) =
               *(undefined4 *)(*(longlong *)plVar2[7] + 0x2a4);
        }
        else {
          FUN_1800b9f60(puVar1);
          plVar10 = (longlong *)plVar2[7];
          fVar14 = 0.0;
          if (plVar10 < (longlong *)plVar2[8]) {
            do {
              lVar3 = *plVar10;
              if ((*(uint *)(lVar3 + 0x100) & 0x4000000) == 0) {
                fVar15 = *(float *)(lVar3 + 0x294);
                fVar16 = *(float *)(lVar3 + 0x298);
                fVar17 = *(float *)(lVar3 + 0x29c);
                fVar12 = *(float *)(lVar3 + 0x2a4);
              }
              else {
                fVar12 = *(float *)(lVar3 + 0x298);
                fVar17 = *(float *)(lVar3 + 0x294);
                fVar13 = *(float *)(lVar3 + 0x29c);
                fVar15 = *(float *)(lVar3 + 0x130) * fVar12 + *(float *)(lVar3 + 0x120) * fVar17 +
                         *(float *)(lVar3 + 0x140) * fVar13 + *(float *)(lVar3 + 0x150);
                fVar16 = *(float *)(lVar3 + 0x134) * fVar12 + *(float *)(lVar3 + 0x124) * fVar17 +
                         *(float *)(lVar3 + 0x144) * fVar13 + *(float *)(lVar3 + 0x154);
                fVar17 = *(float *)(lVar3 + 0x138) * fVar12 + *(float *)(lVar3 + 0x128) * fVar17 +
                         *(float *)(lVar3 + 0x148) * fVar13 + *(float *)(lVar3 + 0x158);
                fVar12 = *(float *)(lVar3 + 0x140) * *(float *)(lVar3 + 0x140) +
                         *(float *)(lVar3 + 0x144) * *(float *)(lVar3 + 0x144) +
                         *(float *)(lVar3 + 0x148) * *(float *)(lVar3 + 0x148);
                fVar13 = *(float *)(lVar3 + 0x130) * *(float *)(lVar3 + 0x130) +
                         *(float *)(lVar3 + 0x134) * *(float *)(lVar3 + 0x134) +
                         *(float *)(lVar3 + 0x138) * *(float *)(lVar3 + 0x138);
                fVar18 = *(float *)(lVar3 + 0x120) * *(float *)(lVar3 + 0x120) +
                         *(float *)(lVar3 + 0x124) * *(float *)(lVar3 + 0x124) +
                         *(float *)(lVar3 + 0x128) * *(float *)(lVar3 + 0x128);
                if (fVar18 <= fVar13) {
                  if (fVar12 <= fVar13) {
                    fVar12 = fVar13;
                  }
                }
                else if (fVar12 <= fVar18) {
                  fVar12 = fVar18;
                }
                if ((fVar12 - 1.0 <= -1e-06) || (1e-06 <= fVar12 - 1.0)) {
                  fVar12 = SQRT(fVar12) * *(float *)(lVar3 + 0x2a4);
                }
                else {
                  fVar12 = *(float *)(lVar3 + 0x2a4) * 1.0;
                }
              }
              fVar17 = *(float *)((longlong)plVar2 + 0x23c) - fVar17;
              fVar15 = *(float *)((longlong)plVar2 + 0x234) - fVar15;
              fVar16 = (*(float *)(plVar2 + 0x47) - fVar16) * (*(float *)(plVar2 + 0x47) - fVar16) +
                       fVar15 * fVar15 + fVar17 * fVar17;
              fVar15 = fVar14 - fVar12;
              if (fVar15 <= 0.0) {
                fVar15 = 0.0;
              }
              if (fVar15 * fVar15 < fVar16) {
                fVar14 = SQRT(fVar16) + fVar12;
              }
              plVar10 = plVar10 + 2;
            } while (plVar10 < (longlong *)plVar2[8]);
            if ((0.0 < fVar14) &&
               (fVar14 < *(float *)((longlong)plVar2 + 0x244) ||
                fVar14 == *(float *)((longlong)plVar2 + 0x244))) {
              *(float *)((longlong)plVar2 + 0x244) = fVar14;
            }
          }
        }
      }
      return;
    }
    uStack_30 = 0x1800756d4;
    (**(code **)(*plVar2 + 0x160))();
  }
  return;
}





// 函数: void FUN_1800756e0(undefined8 *param_1)
void FUN_1800756e0(undefined8 *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a00270;
  param_1[0x39] = 0;
  if (param_1[0x59] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x59] = 0;
  plVar2 = (longlong *)param_1[0x37];
  param_1[0x37] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar2 = (longlong *)param_1[0x38];
  param_1[0x38] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if (param_1[0x5a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x5a] = 0;
  plVar2 = (longlong *)param_1[0x4b];
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *plVar2 = 0;
    if (plVar2[2] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    plVar2[2] = 0;
    if (plVar2[7] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    plVar2[2] = 0;
    plVar2[7] = 0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar2);
  }
  param_1[0x4b] = 0;
  if (*(char *)((longlong)param_1 + 0xf9) != '\0') {
    if (param_1[0x3b] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_1[0x3b] = 0;
    LOCK();
    *(undefined1 *)((longlong)param_1 + 0xf9) = 0;
    UNLOCK();
  }
  if (param_1[0x3d] != 0) {
    FUN_180080060();
    param_1[0x3d] = 0;
    if (param_1[0x3e] != 0) {
      pbVar1 = (byte *)(param_1[0x3e] + 0xfe);
      *pbVar1 = *pbVar1 & 0xfb;
    }
  }
  plVar2 = (longlong *)param_1[0x42];
  param_1[0x42] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  lVar3 = param_1[0x3c];
  if (lVar3 != 0) {
    FUN_1808fc8a8(lVar3,0x18,0x10,FUN_18007bb70,uVar4,lVar3);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar3);
  }
  param_1[0x3c] = 0;
  FUN_180080870(param_1 + 0x5e);
  FUN_1800809a0(param_1 + 0x5c);
  if ((longlong *)param_1[0x4d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4d] + 0x38))();
  }
  FUN_18005d580();
  if ((longlong *)param_1[0x42] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x42] + 0x38))();
  }
  if (param_1[0x3d] != 0) {
    FUN_180080060();
  }
  if ((longlong *)param_1[0x38] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x38] + 0x38))();
  }
  if ((longlong *)param_1[0x37] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x37] + 0x38))();
  }
  if ((longlong *)param_1[0x36] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x36] + 0x38))();
  }
  if ((longlong *)param_1[0x23] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x23] + 0x38))();
  }
  *param_1 = &UNK_180a02e68;
  param_1[2] = &UNK_18098bcb0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}





