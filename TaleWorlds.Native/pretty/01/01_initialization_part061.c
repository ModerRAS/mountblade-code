#include "TaleWorlds.Native.Split.h"

// 01_initialization_part061.c - 11 个函数

/**
 * 初始化数据转换函数 - 将源数据转换为浮点数和整数混合格式
 * 功能：将整数数组转换为浮点数和整数混合的格式，用于初始化数据结构
 */
void InitializeDataConversion(void)

{
  int *source_ptr;
  longlong data_count;
  longlong source_base;
  longlong context_ptr;
  int *current_ptr;
  longlong loop_counter;
  longlong data_size;
  longlong offset;
  
  offset = -8 - source_base;
  loop_counter = (data_size - 4U >> 2) + 1;
  data_count = loop_counter * 4;
  current_ptr = (int *)(source_base + 8);
  do {
    source_ptr = current_ptr + 8;
    *(float *)((longlong)current_ptr + **(longlong **)(context_ptr + 0x2d0) + offset) = (float)current_ptr[-2];
    *(int *)((longlong)current_ptr + **(longlong **)(context_ptr + 0x2d0) + 4 + offset) = current_ptr[-1];
    *(float *)((longlong)current_ptr + **(longlong **)(context_ptr + 0x2d0) + 8 + offset) = (float)*current_ptr;
    *(int *)((longlong)current_ptr + **(longlong **)(context_ptr + 0x2d0) + 0xc + offset) = current_ptr[1];
    *(float *)((**(longlong **)(context_ptr + 0x2d0) - source_base) + -0x18 + (longlong)source_ptr) =
         (float)current_ptr[2];
    *(int *)((longlong)current_ptr + **(longlong **)(context_ptr + 0x2d0) + 0x14 + offset) = current_ptr[3];
    *(float *)((**(longlong **)(context_ptr + 0x2d0) - source_base) + -0x10 + (longlong)source_ptr) =
         (float)current_ptr[4];
    *(int *)((longlong)current_ptr + **(longlong **)(context_ptr + 0x2d0) + 0x1c + offset) = current_ptr[5];
    loop_counter = loop_counter + -1;
    current_ptr = source_ptr;
  } while (loop_counter != 0);
  for (; data_count < data_size; data_count = data_count + 1) {
    *(float *)(**(longlong **)(context_ptr + 0x2d0) + data_count * 8) =
         (float)*(int *)(source_base + data_count * 8);
    *(undefined4 *)(**(longlong **)(context_ptr + 0x2d0) + 4 + data_count * 8) =
         *(undefined4 *)(source_base + 4 + data_count * 8);
  }
  *(int *)(*(longlong *)(context_ptr + 0x2d0) + 8) = (int)data_size;
  return;
}





/**
 * 数据块转换函数 - 将源数据块转换为浮点数和整数混合格式
 * 功能：遍历数据块，将整数转换为浮点数和整数的混合格式
 */
void ConvertDataBlock(void)

{
  longlong start_index;
  longlong source_base;
  longlong context_ptr;
  longlong end_index;
  
  if (start_index < end_index) {
    do {
      *(float *)(**(longlong **)(context_ptr + 0x2d0) + start_index * 8) =
           (float)*(int *)(source_base + start_index * 8);
      *(undefined4 *)(**(longlong **)(context_ptr + 0x2d0) + 4 + start_index * 8) =
           *(undefined4 *)(source_base + 4 + start_index * 8);
      start_index = start_index + 1;
    } while (start_index < end_index);
  }
  *(int *)(*(longlong *)(context_ptr + 0x2d0) + 8) = (int)end_index;
  return;
}





/**
 * 设置数据大小函数 - 设置数据结构的大小
 * 功能：将数据大小信息写入到指定的数据结构中
 */
void SetDataSize(void)

{
  longlong context_ptr;
  undefined4 data_size;
  
  *(undefined4 *)(*(longlong *)(context_ptr + 0x2d0) + 8) = data_size;
  return;
}



/**
 * 初始化数据结构函数 - 初始化数据结构指针和标志位
 * 功能：设置数据结构的指针指向全局常量，并初始化各个标志位
 */
undefined8 * InitializeDataStructure(undefined8 *data_structure)

{
  *data_structure = &GLOBAL_DATA_TABLE_180a21690;
  *data_structure = &GLOBAL_DATA_TABLE_180a21720;
  *(undefined4 *)(data_structure + 1) = 0;
  *data_structure = &GLOBAL_DATA_BASE_1809fffc8;
  data_structure[2] = 0;
  data_structure[3] = 0;
  *(undefined1 *)(data_structure + 6) = 3;
  data_structure[7] = 0;
  data_structure[8] = 0;
  *(undefined1 *)(data_structure + 0xb) = 3;
  data_structure[0xc] = 0;
  data_structure[0xd] = 0;
  *(undefined1 *)(data_structure + 0x10) = 3;
  data_structure[0x11] = 0;
  data_structure[0x12] = 0;
  *(undefined1 *)(data_structure + 0x15) = 3;
  *(undefined2 *)(data_structure + 0x18) = 0;
  data_structure[0x16] = 0;
  data_structure[0x17] = 0;
  data_structure[0x19] = 0;
  data_structure[0x1a] = 0;
  *(undefined1 *)(data_structure + 0x1d) = 3;
  *(undefined1 *)(data_structure + 6) = 0xf;
  *(undefined1 *)(data_structure + 0xb) = 0xf;
  *(undefined1 *)(data_structure + 0x10) = 0xf;
  *(undefined1 *)(data_structure + 0x15) = 0xf;
  *(undefined1 *)(data_structure + 0x1d) = 0xf;
  return data_structure;
}



/**
 * 清理数据结构函数 - 清理数据结构并释放资源
 * 功能：检查并清理数据结构的各个状态，根据标志位决定是否释放内存
 */
undefined8 * CleanupDataStructure(undefined8 *data_structure,ulonglong cleanup_flags)

{
  *data_structure = &GLOBAL_DATA_BASE_1809fffc8;
  if (data_structure[0x1a] != 0) {
                    // WARNING: Subroutine does not return
    HandleErrorCondition();
  }
  CleanupResource(data_structure[0x16]);
  data_structure[0x16] = 0;
  if (data_structure[0x17] != 0) {
                    // WARNING: Subroutine does not return
    HandleErrorCondition();
  }
  data_structure[0x17] = 0;
  if (data_structure[0x12] != 0) {
                    // WARNING: Subroutine does not return
    HandleErrorCondition();
  }
  if (data_structure[0xd] != 0) {
                    // WARNING: Subroutine does not return
    HandleErrorCondition();
  }
  if (data_structure[8] != 0) {
                    // WARNING: Subroutine does not return
    HandleErrorCondition();
  }
  if (data_structure[3] != 0) {
                    // WARNING: Subroutine does not return
    HandleErrorCondition();
  }
  *data_structure = &GLOBAL_DATA_TABLE_180a21720;
  *data_structure = &GLOBAL_DATA_TABLE_180a21690;
  if ((cleanup_flags & 1) != 0) {
    free(data_structure,0xf0);
  }
  return data_structure;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 线程同步处理函数 - 处理线程同步和资源管理
 * 功能：处理线程同步，检查状态标志，管理资源生命周期
 */
void ThreadSyncHandler(undefined1 *sync_context,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong index;
  longlong *current_resource;
  longlong *previous_resource;
  char status_flag;
  int thread_id;
  undefined4 thread_id_copy;
  longlong context_base;
  undefined *message_ptr;
  bool wait_condition;
  undefined8 timeout_value;
  
  timeout_value = 0xfffffffffffffffe;
  wait_condition = false;
  if ((*(byte *)(*(longlong *)(sync_context + 8) + 0xfd) & 0x20) != 0) {
    ProcessAsyncOperations();
    context_base = 0;
    do {
      status_flag = *(char *)(*(longlong *)(*(longlong *)(sync_context + 8) + 0x1e0) + 0x15 + context_base * 0x18);
      if (status_flag == '\x01') {
        Sleep(0);
        wait_condition = true;
      }
      index = context_base + 1;
      context_base = 0;
      if (status_flag != '\x01') {
        context_base = index;
      }
    } while (context_base < 0x10);
    if ((wait_condition) &&
       ((context_base = *(longlong *)(sync_context + 8), *(char *)(context_base + 0xfa) == '\0' ||
        (*(char *)(context_base + 0xfb) == '\0')))) {
      message_ptr = &GLOBAL_ERROR_MESSAGE_18098bc73;
      if (*(undefined **)(context_base + 0x18) != (undefined *)0x0) {
        message_ptr = *(undefined **)(context_base + 0x18);
      }
                    // WARNING: Subroutine does not return
      SendMessageToHandler(GLOBAL_HANDLER_TABLE_180c86928,&GLOBAL_MESSAGE_QUEUE_1809ffc28,message_ptr,param_4,timeout_value);
    }
  }
  context_base = *(longlong *)(sync_context + 8);
  while( true ) {
    LOCK();
    status_flag = *(char *)(context_base + 0xec);
    wait_condition = status_flag == '\0';
    if (wait_condition) {
      *(char *)(context_base + 0xec) = '\x01';
      status_flag = '\0';
    }
    UNLOCK();
    if (wait_condition) break;
    thread_id = _Thrd_id();
    if (*(int *)(context_base + 0xf0) == thread_id) goto ACQUIRE_LOCK_SUCCESS;
    Sleep();
  }
  status_flag = '\0';
ACQUIRE_LOCK_SUCCESS:
  thread_id_copy = _Thrd_id();
  *(undefined4 *)(context_base + 0xf0) = thread_id_copy;
  if (status_flag == '\0') {
    *sync_context = 1;
  }
  while (*(int *)(context_base + 0xe8) != 0) {
    Sleep(0);
  }
  if ((*(uint *)(sync_context + 0x10) & 1) == 0) {
    ProcessResourceFlags(*(undefined8 *)(sync_context + 8),(byte)(*(uint *)(sync_context + 0x10) >> 2) & 1);
  }
  current_resource = *(longlong **)(*(longlong *)(sync_context + 8) + 0x210);
  if (current_resource != (longlong *)0x0) {
    (**(code **)(*current_resource + 0x28))(current_resource);
  }
  previous_resource = *(longlong **)(sync_context + 0x18);
  *(longlong **)(sync_context + 0x18) = current_resource;
  if (previous_resource != (longlong *)0x0) {
    (**(code **)(*previous_resource + 0x38))();
  }
  return;
}





// 函数: void FUN_18007f660(longlong param_1)
void FUN_18007f660(longlong param_1)

{
  FUN_18007f6a0();
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
  }
  return;
}





// 函数: void FUN_18007f6a0(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18007f6a0(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plVar3 = *(longlong **)(lVar1 + 0x210);
    *(longlong **)(lVar1 + 0x210) = plVar2;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
    lVar1 = *(longlong *)(param_1 + 8);
    if (*param_1 != '\0') {
      lVar4 = lVar1;
      if ((param_1[0x10] & 2U) == 0) {
        FUN_180079520(lVar1);
        FUN_180079520(*(undefined8 *)(param_1 + 8));
        lVar4 = *(longlong *)(param_1 + 8);
      }
      FUN_18007edd0(lVar4,1,param_3,param_4,uVar5);
      *(undefined4 *)(lVar1 + 0xf0) = 0;
      LOCK();
      *(undefined1 *)(lVar1 + 0xec) = 0;
      UNLOCK();
    }
  }
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  plVar2 = *(longlong **)(param_1 + 0x18);
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return;
}





// 函数: void FUN_18007f770(longlong *param_1)
void FUN_18007f770(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  lVar1 = *param_1;
  iVar3 = _Thrd_id();
  while( true ) {
    LOCK();
    cVar2 = *(char *)(lVar1 + 0xec);
    bVar4 = cVar2 == '\0';
    if (bVar4) {
      *(char *)(lVar1 + 0xec) = '\x01';
      cVar2 = '\0';
    }
    UNLOCK();
    if (bVar4) break;
    if (*(int *)(lVar1 + 0xf0) == iVar3) goto LAB_18007f7cf;
    Sleep(0);
  }
  cVar2 = '\0';
LAB_18007f7cf:
  LOCK();
  *(int *)(lVar1 + 0xe8) = *(int *)(lVar1 + 0xe8) + 1;
  UNLOCK();
  if ((*(uint *)(param_1 + 1) & 1) == 0) {
    FUN_18007eb80(*param_1,(byte)(*(uint *)(param_1 + 1) >> 2) & 1);
  }
  if (cVar2 == '\0') {
    LOCK();
    *(undefined1 *)(lVar1 + 0xec) = 0;
    UNLOCK();
  }
  param_1[2] = *(longlong *)(*param_1 + 0x210);
  return;
}





// 函数: void FUN_18007f820(void)
void FUN_18007f820(void)

{
  FUN_18007f840();
  return;
}





// 函数: void FUN_18007f840(longlong *param_1)
void FUN_18007f840(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    while( true ) {
      LOCK();
      cVar3 = *(char *)(lVar2 + 0xec);
      bVar5 = cVar3 == '\0';
      if (bVar5) {
        *(char *)(lVar2 + 0xec) = '\x01';
        cVar3 = '\0';
      }
      UNLOCK();
      if (bVar5) break;
      iVar4 = _Thrd_id();
      if ((*(int *)(lVar2 + 0xf0) == iVar4) || (*(int *)(lVar2 + 0xf0) != 0)) goto LAB_18007f89f;
      Sleep();
    }
    cVar3 = '\0';
LAB_18007f89f:
    LOCK();
    piVar1 = (int *)(lVar2 + 0xe8);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (cVar3 == '\0') {
      if (iVar4 == 1) {
        FUN_18007edd0(*param_1,0);
      }
      LOCK();
      *(undefined1 *)(lVar2 + 0xec) = 0;
      UNLOCK();
    }
    *param_1 = 0;
  }
  return;
}



uint FUN_18007f859(void)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong unaff_RBX;
  undefined8 *unaff_RSI;
  bool bVar6;
  
  while( true ) {
    LOCK();
    cVar3 = *(char *)(unaff_RBX + 0xec);
    bVar6 = cVar3 == '\0';
    if (bVar6) {
      *(char *)(unaff_RBX + 0xec) = '\x01';
      cVar3 = '\0';
    }
    UNLOCK();
    if (bVar6) break;
    iVar4 = _Thrd_id();
    if ((*(int *)(unaff_RBX + 0xf0) == iVar4) || (*(int *)(unaff_RBX + 0xf0) != 0))
    goto LAB_18007f89f;
    Sleep();
  }
  cVar3 = '\0';
LAB_18007f89f:
  LOCK();
  puVar1 = (uint *)(unaff_RBX + 0xe8);
  uVar5 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if (cVar3 == '\0') {
    if (uVar5 == 1) {
      FUN_18007edd0(*unaff_RSI,0);
    }
    LOCK();
    bVar2 = *(byte *)(unaff_RBX + 0xec);
    *(byte *)(unaff_RBX + 0xec) = 0;
    uVar5 = (uint)bVar2;
    UNLOCK();
  }
  *unaff_RSI = 0;
  return uVar5;
}



undefined1 FUN_18007f8bb(void)

{
  undefined1 uVar1;
  int in_EAX;
  longlong unaff_RBX;
  undefined8 *unaff_RSI;
  
  if (in_EAX == 1) {
    FUN_18007edd0(*unaff_RSI,0);
  }
  LOCK();
  uVar1 = *(undefined1 *)(unaff_RBX + 0xec);
  *(undefined1 *)(unaff_RBX + 0xec) = 0;
  UNLOCK();
  *unaff_RSI = 0;
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007f8f0(longlong param_1)
void FUN_18007f8f0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  char *pcVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  uint *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  bool bVar23;
  
  if (*(int *)(param_1 + 0x28) != *(int *)(_DAT_180c86870 + 0x224)) {
    iVar15 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x28) = *(int *)(_DAT_180c86870 + 0x224);
    if (0 < iVar15) {
      lVar11 = (longlong)*(int *)(_DAT_180c86890 + 0xe78) * 0x128 + _DAT_180c86890 + 0xc28;
      uVar5 = FUN_180080380(lVar11,iVar15);
      *(undefined4 *)(param_1 + 0x30) = uVar5;
      FUN_1800802e0(lVar11,uVar5);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        if (*(int *)(param_1 + 0x18) != 0) {
          *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x30);
          return;
        }
      }
      else {
        cVar4 = *(char *)(param_1 + 0x44);
        uVar12 = (ulonglong)cVar4;
        plVar1 = (longlong *)(param_1 + 0x38);
        iVar15 = (int)cVar4;
        if (*(int *)(param_1 + 0x40) == (int)cVar4) {
          plVar7 = (longlong *)*plVar1;
        }
        else {
          *(int *)(param_1 + 0x40) = iVar15;
          if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *plVar1 = 0;
          if (cVar4 == '\0') {
            plVar7 = (longlong *)0x0;
            *plVar1 = 0;
          }
          else {
            plVar7 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,(longlong)cVar4 * 4);
            *plVar1 = (longlong)plVar7;
          }
        }
        if (plVar7 != (longlong *)0x0) {
          iVar17 = 0;
          uVar16 = (uint)cVar4;
          iVar18 = iVar17;
          if ((0 < iVar15) && (0xf < uVar16)) {
            iVar10 = *(int *)(param_1 + 0x2c);
            plVar2 = (longlong *)((longlong)plVar7 + (longlong)(cVar4 + -1) * 4);
            if ((((longlong *)(param_1 + 0x2c) < plVar7) || (plVar2 < (longlong *)(param_1 + 0x2c)))
               && ((plVar1 < plVar7 || (iVar18 = 0, plVar2 < plVar1)))) {
              uVar6 = uVar16 & 0x8000000f;
              if ((int)uVar6 < 0) {
                uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
              }
              plVar7 = plVar7 + 4;
              iVar9 = 8;
              do {
                *(int *)(plVar7 + -4) = iVar17 + iVar10;
                *(int *)((longlong)plVar7 + -0x1c) = iVar17 + 1 + iVar10;
                *(int *)(plVar7 + -3) = iVar17 + 2 + iVar10;
                *(int *)((longlong)plVar7 + -0x14) = iVar17 + 3 + iVar10;
                iVar17 = iVar17 + 0x10;
                *(int *)(plVar7 + -2) = iVar9 + -4 + iVar10;
                *(int *)((longlong)plVar7 + -0xc) = iVar9 + -3 + iVar10;
                *(int *)(plVar7 + -1) = iVar9 + -2 + iVar10;
                *(int *)((longlong)plVar7 + -4) = iVar9 + -1 + iVar10;
                *(int *)plVar7 = iVar9 + iVar10;
                *(int *)((longlong)plVar7 + 4) = iVar9 + 1 + iVar10;
                *(int *)(plVar7 + 1) = iVar9 + 2 + iVar10;
                *(int *)((longlong)plVar7 + 0xc) = iVar9 + 3 + iVar10;
                *(int *)(plVar7 + 2) = iVar9 + 4 + iVar10;
                *(int *)((longlong)plVar7 + 0x14) = iVar9 + 5 + iVar10;
                *(int *)(plVar7 + 3) = iVar9 + 6 + iVar10;
                *(int *)((longlong)plVar7 + 0x1c) = iVar9 + 7 + iVar10;
                plVar7 = plVar7 + 8;
                iVar9 = iVar9 + 0x10;
                iVar18 = iVar17;
              } while (iVar17 < (int)(uVar16 - uVar6));
            }
          }
          for (lVar11 = (longlong)iVar18; lVar11 < (longlong)uVar12; lVar11 = lVar11 + 1) {
            iVar17 = *(int *)(param_1 + 0x2c) + iVar18;
            iVar18 = iVar18 + 1;
            *(int *)(*plVar1 + lVar11 * 4) = iVar17;
          }
          iVar18 = *(int *)(param_1 + 0x18);
          iVar17 = 0;
          if (0 < (longlong)iVar18) {
            lVar11 = 0;
            do {
              iVar10 = *(int *)(param_1 + 0x30) + iVar17;
              iVar17 = iVar17 + 1;
              pbVar3 = (byte *)(*(longlong *)(param_1 + 0x10) + lVar11);
              lVar11 = lVar11 + 1;
              *(int *)(*plVar1 + (ulonglong)*pbVar3 * 4) = iVar10;
            } while (lVar11 < iVar18);
          }
        }
        puVar14 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0xc20) * 0x128 +
                          _DAT_180c86890 + 0x9d0);
        if (iVar15 == 0) {
          uVar16 = (int)cVar4 - 1;
        }
        else {
          LOCK();
          uVar16 = *puVar14;
          *puVar14 = *puVar14 + (int)cVar4;
          UNLOCK();
          uVar21 = (ulonglong)(uVar16 >> 0xb);
          uVar22 = (ulonglong)(cVar4 + -1 + uVar16 >> 0xb);
          if (uVar21 <= uVar22) {
            pcVar13 = (char *)((longlong)puVar14 + uVar21 + 0x108);
            lVar11 = (uVar22 - uVar21) + 1;
            puVar20 = puVar14 + uVar21 * 2 + 2;
            do {
              iVar18 = (int)uVar21;
              if (*(longlong *)puVar20 == 0) {
                lVar8 = FUN_18062b420(_DAT_180c8ed18,0x2000,0x25);
                LOCK();
                bVar23 = *(longlong *)(puVar14 + (longlong)iVar18 * 2 + 2) == 0;
                if (bVar23) {
                  *(longlong *)(puVar14 + (longlong)iVar18 * 2 + 2) = lVar8;
                }
                UNLOCK();
                if (bVar23) {
                  LOCK();
                  *(undefined1 *)((longlong)iVar18 + 0x108 + (longlong)puVar14) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  do {
                  } while (*pcVar13 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar13 != '\0');
              }
              uVar21 = (ulonglong)(iVar18 + 1);
              puVar20 = puVar20 + 2;
              pcVar13 = pcVar13 + 1;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
        }
        puVar19 = *(undefined4 **)(param_1 + 0x38);
        uVar6 = uVar16 >> 0xb;
        *(uint *)(param_1 + 0x2c) = uVar16;
        if (uVar6 == (int)cVar4 + uVar16 >> 0xb) {
                    // WARNING: Subroutine does not return
          memcpy(*(longlong *)(puVar14 + (ulonglong)uVar6 * 2 + 2) +
                 (ulonglong)(uVar16 + uVar6 * -0x800) * 4,puVar19,(uVar12 & 0xffffffff) << 2);
        }
        if (iVar15 != 0) {
          uVar12 = uVar12 & 0xffffffff;
          do {
            uVar5 = *puVar19;
            puVar19 = puVar19 + 1;
            *(undefined4 *)
             (*(longlong *)(puVar14 + (ulonglong)(uVar16 >> 0xb) * 2 + 2) +
             (ulonglong)(uVar16 + (uVar16 >> 0xb) * -0x800) * 4) = uVar5;
            uVar12 = uVar12 - 1;
            uVar16 = uVar16 + 1;
          } while (uVar12 != 0);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007f90f(undefined4 param_1)
void FUN_18007f90f(undefined4 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  char *pcVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  longlong unaff_RDI;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  uint *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  bool bVar23;
  
  iVar15 = *(int *)(unaff_RDI + 0x1c) + *(int *)(unaff_RDI + 0x18);
  *(undefined4 *)(unaff_RDI + 0x28) = param_1;
  if (0 < iVar15) {
    lVar11 = (longlong)*(int *)(_DAT_180c86890 + 0xe78) * 0x128 + _DAT_180c86890 + 0xc28;
    uVar5 = FUN_180080380(lVar11,iVar15);
    *(undefined4 *)(unaff_RDI + 0x30) = uVar5;
    FUN_1800802e0(lVar11,uVar5);
    if (*(longlong *)(unaff_RDI + 0x10) == 0) {
      if (*(int *)(unaff_RDI + 0x18) != 0) {
        *(undefined4 *)(unaff_RDI + 0x2c) = *(undefined4 *)(unaff_RDI + 0x30);
        return;
      }
    }
    else {
      cVar4 = *(char *)(unaff_RDI + 0x44);
      uVar12 = (ulonglong)cVar4;
      plVar1 = (longlong *)(unaff_RDI + 0x38);
      iVar15 = (int)cVar4;
      if (*(int *)(unaff_RDI + 0x40) == (int)cVar4) {
        plVar7 = (longlong *)*plVar1;
      }
      else {
        *(int *)(unaff_RDI + 0x40) = iVar15;
        if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *plVar1 = 0;
        if (cVar4 == '\0') {
          plVar7 = (longlong *)0x0;
          *plVar1 = 0;
        }
        else {
          plVar7 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,(longlong)cVar4 * 4);
          *plVar1 = (longlong)plVar7;
        }
      }
      if (plVar7 != (longlong *)0x0) {
        iVar17 = 0;
        uVar16 = (uint)cVar4;
        iVar18 = iVar17;
        if ((0 < iVar15) && (0xf < uVar16)) {
          iVar10 = *(int *)(unaff_RDI + 0x2c);
          plVar2 = (longlong *)((longlong)plVar7 + (longlong)(cVar4 + -1) * 4);
          if ((((longlong *)(unaff_RDI + 0x2c) < plVar7) ||
              (plVar2 < (longlong *)(unaff_RDI + 0x2c))) &&
             ((plVar1 < plVar7 || (iVar18 = 0, plVar2 < plVar1)))) {
            uVar6 = uVar16 & 0x8000000f;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
            }
            plVar7 = plVar7 + 4;
            iVar9 = 8;
            do {
              *(int *)(plVar7 + -4) = iVar17 + iVar10;
              *(int *)((longlong)plVar7 + -0x1c) = iVar17 + 1 + iVar10;
              *(int *)(plVar7 + -3) = iVar17 + 2 + iVar10;
              *(int *)((longlong)plVar7 + -0x14) = iVar17 + 3 + iVar10;
              iVar17 = iVar17 + 0x10;
              *(int *)(plVar7 + -2) = iVar9 + -4 + iVar10;
              *(int *)((longlong)plVar7 + -0xc) = iVar9 + -3 + iVar10;
              *(int *)(plVar7 + -1) = iVar9 + -2 + iVar10;
              *(int *)((longlong)plVar7 + -4) = iVar9 + -1 + iVar10;
              *(int *)plVar7 = iVar9 + iVar10;
              *(int *)((longlong)plVar7 + 4) = iVar9 + 1 + iVar10;
              *(int *)(plVar7 + 1) = iVar9 + 2 + iVar10;
              *(int *)((longlong)plVar7 + 0xc) = iVar9 + 3 + iVar10;
              *(int *)(plVar7 + 2) = iVar9 + 4 + iVar10;
              *(int *)((longlong)plVar7 + 0x14) = iVar9 + 5 + iVar10;
              *(int *)(plVar7 + 3) = iVar9 + 6 + iVar10;
              *(int *)((longlong)plVar7 + 0x1c) = iVar9 + 7 + iVar10;
              plVar7 = plVar7 + 8;
              iVar9 = iVar9 + 0x10;
              iVar18 = iVar17;
            } while (iVar17 < (int)(uVar16 - uVar6));
          }
        }
        for (lVar11 = (longlong)iVar18; lVar11 < (longlong)uVar12; lVar11 = lVar11 + 1) {
          iVar17 = *(int *)(unaff_RDI + 0x2c) + iVar18;
          iVar18 = iVar18 + 1;
          *(int *)(*plVar1 + lVar11 * 4) = iVar17;
        }
        iVar18 = *(int *)(unaff_RDI + 0x18);
        iVar17 = 0;
        if (0 < (longlong)iVar18) {
          lVar11 = 0;
          do {
            iVar10 = *(int *)(unaff_RDI + 0x30) + iVar17;
            iVar17 = iVar17 + 1;
            pbVar3 = (byte *)(*(longlong *)(unaff_RDI + 0x10) + lVar11);
            lVar11 = lVar11 + 1;
            *(int *)(*plVar1 + (ulonglong)*pbVar3 * 4) = iVar10;
          } while (lVar11 < iVar18);
        }
      }
      puVar14 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0xc20) * 0x128 + _DAT_180c86890 + 0x9d0
                        );
      if (iVar15 == 0) {
        uVar16 = (int)cVar4 - 1;
      }
      else {
        LOCK();
        uVar16 = *puVar14;
        *puVar14 = *puVar14 + (int)cVar4;
        UNLOCK();
        uVar21 = (ulonglong)(uVar16 >> 0xb);
        uVar22 = (ulonglong)(cVar4 + -1 + uVar16 >> 0xb);
        if (uVar21 <= uVar22) {
          pcVar13 = (char *)((longlong)puVar14 + uVar21 + 0x108);
          lVar11 = (uVar22 - uVar21) + 1;
          puVar20 = puVar14 + uVar21 * 2 + 2;
          do {
            iVar18 = (int)uVar21;
            if (*(longlong *)puVar20 == 0) {
              lVar8 = FUN_18062b420(_DAT_180c8ed18,0x2000,0x25);
              LOCK();
              bVar23 = *(longlong *)(puVar14 + (longlong)iVar18 * 2 + 2) == 0;
              if (bVar23) {
                *(longlong *)(puVar14 + (longlong)iVar18 * 2 + 2) = lVar8;
              }
              UNLOCK();
              if (bVar23) {
                LOCK();
                *(undefined1 *)((longlong)iVar18 + 0x108 + (longlong)puVar14) = 0;
                UNLOCK();
              }
              else {
                if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                do {
                } while (*pcVar13 != '\0');
              }
            }
            else {
              do {
              } while (*pcVar13 != '\0');
            }
            uVar21 = (ulonglong)(iVar18 + 1);
            puVar20 = puVar20 + 2;
            pcVar13 = pcVar13 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
      }
      puVar19 = *(undefined4 **)(unaff_RDI + 0x38);
      uVar6 = uVar16 >> 0xb;
      *(uint *)(unaff_RDI + 0x2c) = uVar16;
      if (uVar6 == (int)cVar4 + uVar16 >> 0xb) {
                    // WARNING: Subroutine does not return
        memcpy(*(longlong *)(puVar14 + (ulonglong)uVar6 * 2 + 2) +
               (ulonglong)(uVar16 + uVar6 * -0x800) * 4,puVar19,(uVar12 & 0xffffffff) << 2);
      }
      if (iVar15 != 0) {
        uVar12 = uVar12 & 0xffffffff;
        do {
          uVar5 = *puVar19;
          puVar19 = puVar19 + 1;
          *(undefined4 *)
           (*(longlong *)(puVar14 + (ulonglong)(uVar16 >> 0xb) * 2 + 2) +
           (ulonglong)(uVar16 + (uVar16 >> 0xb) * -0x800) * 4) = uVar5;
          uVar12 = uVar12 - 1;
          uVar16 = uVar16 + 1;
        } while (uVar12 != 0);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



