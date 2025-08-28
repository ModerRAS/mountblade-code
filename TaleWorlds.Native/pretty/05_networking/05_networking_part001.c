#include "TaleWorlds.Native.Split.h"

// 05_networking_part001.c - 网络系统基础功能模块
// 包含29个函数，主要处理网络连接、数据传输、错误处理等基础网络功能

#include "TaleWorlds.Native.Split.h"

// 网络系统全局变量和函数声明
// 网络连接管理器
undefined *network_connection_manager;
undefined *network_socket_pool;
undefined *network_protocol_handler;
undefined *network_data_buffer;
undefined *network_connection_status;
undefined *network_error_handler;
undefined *network_packet_queue;
undefined *network_session_manager;
undefined *network_security_context;
undefined *network_bandwidth_monitor;
undefined *network_latency_tracker;
undefined *network_compression_engine;
undefined *network_encryption_module;
undefined *network_authentication_handler;
undefined *network_discovery_service;
undefined *network_peer_manager;
undefined *network_message_dispatcher;
undefined *network_event_system;
undefined *network_statistics_collector;
undefined *network_config_loader;
undefined *network_debug_logger;
undefined *network_performance_monitor;
undefined *network_connection_validator;
undefined *network_data_serializer;
undefined *network_protocol_negotiator;
undefined *network_error_recovery_manager;
undefined *network_connection_pool;


// 网络连接初始化函数
undefined *initialize_network_connection;
undefined *network_connection_initializer;
undefined *network_protocol_initializer;
undefined *network_security_initializer;

// 网络数据传输函数
undefined *network_data_transmitter;
undefined *network_data_receiver;
undefined *network_packet_processor;
undefined *network_message_builder;
undefined *network_connection_handler;
undefined *network_session_creator;
undefined *network_error_processor;
undefined *network_bandwidth_manager;
undefined *network_latency_manager;
undefined *network_compression_manager;
undefined *network_encryption_manager;
undefined *network_authentication_manager;
undefined *network_discovery_manager;
undefined *network_peer_handler;
undefined *network_message_handler;
undefined *network_event_handler;
undefined *network_statistics_handler;
undefined *network_config_handler;
undefined *network_debug_handler;
undefined *network_performance_handler;
undefined *network_connection_validator;
undefined *network_data_serializer;
undefined *network_protocol_negotiator;
undefined *network_error_recovery_handler;
undefined *network_connection_pool_manager;


// 函数: undefined FUN_18088ea60;
undefined FUN_18088ea60;
undefined UNK_180986218;
undefined UNK_180986240;
undefined UNK_180986244;
undefined UNK_180986248;
undefined UNK_18098624c;
undefined UNK_180986250;
undefined UNK_180986268;
undefined DAT_180c4eaa0;
undefined DAT_180c4eaa4;
undefined UNK_1809862d0;
undefined UNK_180986298;
undefined UNK_180984010;
undefined UNK_180982240;
undefined UNK_180983588;
undefined UNK_1809841e0;
undefined UNK_180984358;
undefined UNK_1809843d0;
undefined UNK_180986350;
undefined UNK_180986370;
undefined UNK_1809868b0;
undefined UNK_1809863f8;
undefined UNK_180986470;
undefined UNK_180982588;
undefined UNK_180982608;
undefined UNK_1809830b8;
undefined UNK_180983238;
undefined UNK_1809839d8;
undefined UNK_1809850f8;
undefined UNK_180982f38;
undefined UNK_1809834f8;
undefined UNK_180986408;
undefined UNK_1809864dc;
undefined UNK_1809864e0;
undefined UNK_180986508;
undefined UNK_180986550;
undefined UNK_180986590;
undefined UNK_1809865f0;
undefined UNK_1809866c0;
undefined UNK_180986730;
undefined UNK_1809867b0;
undefined UNK_180986850;
undefined UNK_180982378;
undefined UNK_180986390;
undefined UNK_180986488;
undefined UNK_1809864b0;
undefined UNK_180986940;
undefined UNK_1809869a0;
undefined UNK_180986e70;
undefined UNK_180986d98;
undefined UNK_180986dc0;
undefined UNK_180986de8;
undefined UNK_180986e10;
undefined UNK_180986e38;
undefined UNK_180986ef0;
undefined UNK_180986af0;
undefined UNK_180986bb8;
undefined UNK_180986d78;
undefined UNK_180986a10;
undefined UNK_180986ce0;
undefined UNK_180986ab0;
undefined UNK_180986930;
undefined UNK_180986ca8;
undefined UNK_180986b00;
undefined UNK_180986d58;
undefined UNK_180986e60;
undefined UNK_180986bf0;
undefined UNK_180986d50;
undefined UNK_180986a60;
undefined UNK_180986c70;
undefined UNK_180986c30;
undefined UNK_180986d18;
undefined UNK_180986948;
undefined UNK_180986ab8;
undefined UNK_180986938;
undefined UNK_180986b40;
undefined UNK_180987010;
undefined UNK_1808b168c;
undefined UNK_1808b16c0;
undefined UNK_1808b16f4;
undefined UNK_180984c08;
undefined UNK_180987090;
undefined UNK_180987110;
undefined UNK_180987190;
undefined UNK_1809871b0;
undefined UNK_180987170;
undefined UNK_180987150;


// 网络连接管理函数
void network_connection_cleanup(void)
{
  undefined1 *connection_ptr;
  int status_check;
  longlong connection_context;
  int connection_flags;
  int session_id;
  ulonglong *connection_data;
  longlong network_context;
  
  connection_ptr = (undefined1 *)(CONCAT44(connection_flags,session_id) + 0x28);
  if (*(int *)(*(longlong *)(connection_context + 0x98) + 0x200) == session_id) {
    *connection_ptr = 0;
    *(uint *)(CONCAT44(connection_flags,session_id) + 8) = ((int)connection_ptr - session_id) + 4U & 0xfffffffc;
    status_check = validate_network_connection(*(undefined8 *)(network_context + 0x98));
    if (status_check == 0) {
      *connection_data = (ulonglong)*(uint *)(CONCAT44(connection_flags,session_id) + 0x20);
    }
    // 清理网络连接资源
    cleanup_network_resources(&network_context);
  }
  // 复制连接数据
  memcpy(connection_ptr);
}





// 网络连接断开函数
void network_connection_disconnect(void)
{
  longlong connection_handle;
  ulonglong *connection_data;
  
  *connection_data = (ulonglong)*(uint *)(connection_handle + 0x20);
  // 断开网络连接
  disconnect_network_connection(&connection_handle);
}



// WARNING: Removing unreachable block (ram,0x00018084914f)
// WARNING: Removing unreachable block (ram,0x000180849163)
// WARNING: Removing unreachable block (ram,0x00018084919d)
// WARNING: Removing unreachable block (ram,0x0001808491a5)
// WARNING: Removing unreachable block (ram,0x0001808491ad)
// WARNING: Removing unreachable block (ram,0x0001808491b3)
// WARNING: Removing unreachable block (ram,0x000180849219)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 网络缓冲区清理函数
uint cleanup_network_buffer(longlong *buffer_handle)
{
  int buffer_status;
  uint buffer_size;
  uint processed_size;
  
  buffer_size = *(uint *)((longlong)buffer_handle + 0xc);
  processed_size = buffer_size ^ (int)buffer_size >> 0x1f;
  if ((int)(processed_size - ((int)buffer_size >> 0x1f)) < 0) {
    if (0 < (int)buffer_handle[1]) {
      return processed_size;
    }
    if ((0 < (int)buffer_size) && (*buffer_handle != 0)) {
      // 释放网络缓冲区内存
      free_network_buffer(*(undefined8 *)(network_memory_pool + 0x1a0),*buffer_handle,network_free_list,0x100,1);
    }
    *buffer_handle = 0;
    buffer_size = 0;
    *(undefined4 *)((longlong)buffer_handle + 0xc) = 0;
  }
  buffer_status = (int)buffer_handle[1];
  if (buffer_status < 0) {
    if (buffer_status < 0) {
      // 清理缓冲区数据
      memset(*buffer_handle + (longlong)buffer_status * 0x14,0,(ulonglong)(uint)-buffer_status * 0x14);
    }
  }
  *(undefined4 *)(buffer_handle + 1) = 0;
  buffer_size = (buffer_size ^ (int)buffer_size >> 0x1f) - ((int)buffer_size >> 0x1f);
  if ((int)buffer_size < 1) {
    return buffer_size;
  }
  if (0 < (int)buffer_handle[1]) {
    return 0x1c;
  }
  if ((0 < *(int *)((longlong)buffer_handle + 0xc)) && (*buffer_handle != 0)) {
    // 释放网络缓冲区内存
    free_network_buffer(*(undefined8 *)(network_memory_pool + 0x1a0),*buffer_handle,network_free_list,0x100,1);
  }
  *buffer_handle = 0;
  *(undefined4 *)((longlong)buffer_handle + 0xc) = 0;
  return 0;
}



// WARNING: Type propagation algorithm not settling



// 函数: void FUN_1808401c0(undefined8 param_1)
void FUN_1808401c0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong alStackX_10 [2];
  undefined8 *puStackX_20;
  
  alStackX_10[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStackX_10);
  if ((((iVar1 != 0) ||
       (((*(uint *)(alStackX_10[0] + 0x24) >> 1 & 1) != 0 &&
        (iVar2 = FUN_18088c740(alStackX_10 + 1), iVar2 == 0)))) && (iVar1 == 0)) &&
     (iVar1 = FUN_18088dec0(*(undefined8 *)(alStackX_10[0] + 0x98),&puStackX_20,0x18), iVar1 == 0))
  {
    *puStackX_20 = &UNK_180982dc0;
    *(undefined4 *)(puStackX_20 + 1) = 0x18;
    *(int *)(puStackX_20 + 2) = (int)param_1;
    func_0x00018088e0d0(*(undefined8 *)(alStackX_10[0] + 0x98));
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStackX_10 + 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180840270(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
    memset((longlong)iVar1 + *param_1,0,(longlong)-iVar1);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) &&
     (uVar2 = FUN_180849030(param_1,0), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180840330(ulonglong *param_1,int param_2)
void FUN_180840330(ulonglong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  int aiStack_148 [2];
  longlong lStack_140;
  uint auStack_138 [4];
  undefined1 auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  func_0x000180741c10(&DAT_180be12f0);
  if (param_1 == (ulonglong *)0x0) {
    iVar3 = 0x1f;
  }
  else {
    *param_1 = 0;
    if (param_2 - 0x20200U < 0x100) {
      lStack_140 = 0;
      iVar3 = FUN_180875520(&lStack_140);
      if (iVar3 == 0) {
        aiStack_148[0] = 0;
        iVar3 = FUN_18073aab0(*(undefined8 *)(lStack_140 + 0x78),aiStack_148);
        if (iVar3 == 0) {
          if (aiStack_148[0] != 0x20214) {
            FUN_180883a30();
            goto LAB_1808403d0;
          }
          iVar3 = func_0x00018088c570(lStack_140,auStack_138);
          if (iVar3 == 0) {
            *param_1 = (ulonglong)auStack_138[0];
            goto LAB_180840449;
          }
        }
      }
      if (iVar3 == 0) goto LAB_180840449;
    }
    else {
LAB_1808403d0:
      iVar3 = 0x14;
    }
  }
  if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0) {
    iVar1 = func_0x00018074bda0(auStack_128,0x100,param_1);
    iVar2 = FUN_18074b880(auStack_128 + iVar1,0x100 - iVar1,&DAT_180a06434);
    func_0x00018074b800(auStack_128 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_2);
    puStack_158 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar3,0,0,&UNK_180984660);
  }
LAB_180840449:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_178);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180840490(undefined8 param_1,ulonglong *param_2)
void FUN_180840490(undefined8 param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  longlong alStack_148 [2];
  undefined8 *apuStack_138 [2];
  undefined1 auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  if (param_2 == (ulonglong *)0x0) {
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_178);
    }
    func_0x00018074bda0(auStack_128,0x100,0);
    puStack_158 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xc,param_1,&UNK_180983320);
  }
  *param_2 = 0;
  alStack_148[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_1808404f2;
    iVar2 = FUN_18088c740(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084055a;
  }
  else {
LAB_18084055a:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(undefined8 *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
  {
    *apuStack_138[0] = &UNK_1809832b8;
    *(undefined4 *)(apuStack_138[0] + 3) = 0;
    *(undefined4 *)(apuStack_138[0] + 1) = 0x20;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    iVar1 = func_0x00018088e0d0(*(undefined8 *)(alStack_148[0] + 0x98),apuStack_138[0]);
    if (iVar1 == 0) {
      *param_2 = (ulonglong)*(uint *)(apuStack_138[0] + 3);
                    // WARNING: Subroutine does not return
      FUN_18088c790(alStack_148 + 1);
    }
  }
LAB_1808404f2:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_148 + 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180840600(undefined4 param_1,int param_2,longlong param_3)
void FUN_180840600(undefined4 param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  undefined1 auStack_48 [40];
  ulonglong uStack_20;
  
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  if (param_3 == 0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_88);
  }
  lStack_58 = 0;
  uStack_68 = 0;
  lStack_60 = 0;
  iVar2 = func_0x00018088c590(0,&lStack_60);
  if ((((iVar2 == 0) && (iVar2 = FUN_18088c740(&uStack_68,lStack_60), iVar2 == 0)) &&
      (iVar2 = func_0x00018088c530(param_1,&lStack_50), iVar2 == 0)) &&
     ((lStack_58 = *(longlong *)(lStack_50 + 8), -1 < param_2 &&
      (param_2 < *(int *)(lStack_58 + 0x88))))) {
    lVar4 = (longlong)param_2 * 0x10 + *(longlong *)(lStack_58 + 0x80);
    plVar1 = *(longlong **)(lStack_60 + 800);
    lVar3 = (**(code **)(*plVar1 + 0x270))(plVar1,lVar4,1);
    if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(lVar4,auStack_48);
    }
    if ((((*(int *)(lVar3 + 0x38) != 0) || (*(int *)(lVar3 + 0x3c) != 0)) ||
        ((*(int *)(lVar3 + 0x40) != 0 || (*(int *)(lVar3 + 0x44) != 0)))) &&
       (lVar3 = FUN_18083fb90(plVar1), lVar3 != 0)) {
      FUN_180847550(lVar3,param_3,1);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_68);
}





// 函数: void FUN_18084062e(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
void FUN_18084062e(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 unaff_EBP;
  longlong unaff_RSI;
  longlong lVar4;
  
  param_6 = 0;
  param_5 = 0;
  iVar2 = func_0x00018088c590(0,&param_5,param_3,param_4,0);
  if (((iVar2 == 0) && (iVar2 = FUN_18088c740(&stack0x00000020,param_5), iVar2 == 0)) &&
     (iVar2 = func_0x00018088c530(unaff_EBP,&param_7), iVar2 == 0)) {
    param_6 = *(longlong *)(param_7 + 8);
    if ((-1 < (int)unaff_RSI) && ((int)unaff_RSI < *(int *)(param_6 + 0x88))) {
      lVar4 = unaff_RSI * 0x10 + *(longlong *)(param_6 + 0x80);
      plVar1 = *(longlong **)(param_5 + 800);
      lVar3 = (**(code **)(*plVar1 + 0x270))(plVar1,lVar4,1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18084b240(lVar4,&stack0x00000040);
      }
      if ((((*(int *)(lVar3 + 0x38) != 0) || (*(int *)(lVar3 + 0x3c) != 0)) ||
          ((*(int *)(lVar3 + 0x40) != 0 || (*(int *)(lVar3 + 0x44) != 0)))) &&
         (lVar3 = FUN_18083fb90(plVar1), lVar3 != 0)) {
        FUN_180847550(lVar3);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(&stack0x00000020);
}





// 函数: void FUN_18084063e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void FUN_18084063e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 unaff_EBP;
  longlong unaff_RSI;
  longlong lVar4;
  longlong in_XMM0_Qb;
  
  param_6 = 0;
  param_5 = in_XMM0_Qb;
  iVar2 = func_0x00018088c590();
  if (((iVar2 == 0) && (iVar2 = FUN_18088c740(&stack0x00000020,param_5), iVar2 == 0)) &&
     (iVar2 = func_0x00018088c530(unaff_EBP,&param_7), iVar2 == 0)) {
    param_6 = *(longlong *)(param_7 + 8);
    if ((-1 < (int)unaff_RSI) && ((int)unaff_RSI < *(int *)(param_6 + 0x88))) {
      lVar4 = unaff_RSI * 0x10 + *(longlong *)(param_6 + 0x80);
      plVar1 = *(longlong **)(param_5 + 800);
      lVar3 = (**(code **)(*plVar1 + 0x270))(plVar1,lVar4,1,param_4,param_1);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18084b240(lVar4,&stack0x00000040);
      }
      if ((((*(int *)(lVar3 + 0x38) != 0) || (*(int *)(lVar3 + 0x3c) != 0)) ||
          ((*(int *)(lVar3 + 0x40) != 0 || (*(int *)(lVar3 + 0x44) != 0)))) &&
         (lVar3 = FUN_18083fb90(plVar1), lVar3 != 0)) {
        FUN_180847550(lVar3);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(&stack0x00000020);
}





// 函数: void FUN_180840746(void)
void FUN_180840746(void)

{
  undefined8 *unaff_RBX;
  ulonglong in_stack_00000068;
  
  *unaff_RBX = 0;
  unaff_RBX[1] = 0;
  unaff_RBX[2] = 0;
  unaff_RBX[3] = 0;
  unaff_RBX[4] = 0;
  unaff_RBX[5] = 0;
  unaff_RBX[6] = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000068 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18084076d(void)
void FUN_18084076d(void)

{
  ulonglong in_stack_00000068;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000068 ^ (ulonglong)&stack0x00000000);
}



undefined4 FUN_180840790(undefined4 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  longlong alStackX_18 [2];
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong lStack_28;
  
  if (param_3 == (undefined8 *)0x0) {
    return 0x1f;
  }
  if (param_2 == 0) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
    }
    return 0x1f;
  }
  lStack_28 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  iVar3 = func_0x00018088c590(0,&uStack_30);
  if (((iVar3 == 0) && (iVar3 = FUN_18088c740(&uStack_38,uStack_30), iVar3 == 0)) &&
     (iVar3 = func_0x00018088c530(param_1,alStackX_18), iVar3 == 0)) {
    lStack_28 = *(longlong *)(alStackX_18[0] + 8);
  }
  else if (iVar3 != 0) goto LAB_1808408dd;
  puVar1 = (undefined8 *)(lStack_28 + 0xb0);
  puVar5 = &DAT_18098bc73;
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    if (*(int *)(puVar2 + 3) < 1) {
      puVar4 = &DAT_18098bc73;
    }
    else {
      puVar4 = (undefined *)puVar2[2];
    }
    iVar3 = func_0x00018076b420(puVar4,param_2);
    if (iVar3 == 0) {
      if (0 < *(int *)(puVar2 + 3)) {
        puVar5 = (undefined *)puVar2[2];
      }
      *param_3 = puVar5;
      *(undefined4 *)(param_3 + 1) = 2;
      *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar2 + 4);
      goto LAB_1808408dd;
    }
    if (puVar2 == puVar1) goto LAB_1808408dd;
  }
  puVar1 = (undefined8 *)(lStack_28 + 0xc0);
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    if (*(int *)(puVar2 + 3) < 1) {
      puVar4 = &DAT_18098bc73;
    }
    else {
      puVar4 = (undefined *)puVar2[2];
    }
    iVar3 = func_0x00018076b420(puVar4,param_2);
    if (iVar3 == 0) {
      if (*(int *)(puVar2 + 3) < 1) {
        puVar4 = &DAT_18098bc73;
      }
      else {
        puVar4 = (undefined *)puVar2[2];
      }
      *param_3 = puVar4;
      *(undefined4 *)(param_3 + 1) = 3;
      if (0 < *(int *)(puVar2 + 5)) {
        puVar5 = (undefined *)puVar2[4];
      }
      param_3[2] = puVar5;
      break;
    }
    if (puVar2 == puVar1) break;
  }
LAB_1808408dd:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_38);
}





// 函数: void FUN_1808407ce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1808407ce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 in_RCX;
  undefined8 *unaff_RBX;
  undefined *puVar5;
  undefined4 unaff_ESI;
  undefined8 in_XMM0_Qb;
  undefined8 uStack0000000000000028;
  longlong lStack0000000000000030;
  longlong in_stack_00000070;
  
  lStack0000000000000030 = 0;
  uStack0000000000000028 = in_XMM0_Qb;
  iVar3 = func_0x00018088c590(in_RCX,&stack0x00000028,param_3,param_4,param_1);
  if (((iVar3 == 0) && (iVar3 = FUN_18088c740(&stack0x00000020,uStack0000000000000028), iVar3 == 0))
     && (iVar3 = func_0x00018088c530(unaff_ESI,&stack0x00000070), iVar3 == 0)) {
    lStack0000000000000030 = *(longlong *)(in_stack_00000070 + 8);
  }
  else if (iVar3 != 0) goto LAB_1808408dd;
  puVar1 = (undefined8 *)(lStack0000000000000030 + 0xb0);
  puVar5 = &DAT_18098bc73;
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    if (*(int *)(puVar2 + 3) < 1) {
      puVar4 = &DAT_18098bc73;
    }
    else {
      puVar4 = (undefined *)puVar2[2];
    }
    iVar3 = func_0x00018076b420(puVar4);
    if (iVar3 == 0) {
      if (0 < *(int *)(puVar2 + 3)) {
        puVar5 = (undefined *)puVar2[2];
      }
      *unaff_RBX = puVar5;
      *(undefined4 *)(unaff_RBX + 1) = 2;
      *(undefined4 *)(unaff_RBX + 2) = *(undefined4 *)(puVar2 + 4);
      goto LAB_1808408dd;
    }
    if (puVar2 == puVar1) goto LAB_1808408dd;
  }
  puVar1 = (undefined8 *)(lStack0000000000000030 + 0xc0);
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    if (*(int *)(puVar2 + 3) < 1) {
      puVar4 = &DAT_18098bc73;
    }
    else {
      puVar4 = (undefined *)puVar2[2];
    }
    iVar3 = func_0x00018076b420(puVar4);
    if (iVar3 == 0) {
      if (*(int *)(puVar2 + 3) < 1) {
        puVar4 = &DAT_18098bc73;
      }
      else {
        puVar4 = (undefined *)puVar2[2];
      }
      *unaff_RBX = puVar4;
      *(undefined4 *)(unaff_RBX + 1) = 3;
      if (0 < *(int *)(puVar2 + 5)) {
        puVar5 = (undefined *)puVar2[4];
      }
      unaff_RBX[2] = puVar5;
      break;
    }
    if (puVar2 == puVar1) break;
  }
LAB_1808408dd:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&stack0x00000020);
}



undefined4 FUN_1808408ec(void)

{
  undefined8 *unaff_RBX;
  undefined4 unaff_EDI;
  
  if (unaff_RBX != (undefined8 *)0x0) {
    *unaff_RBX = 0;
    unaff_RBX[1] = 0;
    unaff_RBX[2] = 0;
  }
  return unaff_EDI;
}





// 函数: void FUN_18084090e(void)
void FUN_18084090e(void)

{
  undefined1 auStackX_20 [8];
  
                    // WARNING: Subroutine does not return
  FUN_18088c790(auStackX_20);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180840950(undefined8 param_1,longlong param_2,longlong param_3,int *param_4)
void FUN_180840950(undefined8 param_1,longlong param_2,longlong param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  ulonglong uStack_30;
  
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    iVar2 = FUN_18076b6f0(param_3,&UNK_180984620,10);
    if (iVar2 == 0) {
      iVar2 = FUN_180881fa0(param_1,param_3,auStack_40);
      if (iVar2 == 0) {
        lVar9 = *(longlong *)(param_2 + 0x18);
        uVar4 = FUN_18084dc20(auStack_40);
        iVar2 = *(int *)(lVar9 + 0x98);
        uVar7 = 0;
        if (0 < iVar2) {
          uStack_48._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
          piVar5 = *(int **)(lVar9 + 0x90);
          uVar8 = uVar7;
          do {
            iVar3 = (int)uVar8;
            if ((*piVar5 == (int)uVar4) && (piVar5[1] == uStack_48._4_4_)) goto LAB_180840a03;
            uVar8 = (ulonglong)(iVar3 + 1);
            uVar7 = uVar7 + 1;
            piVar5 = piVar5 + 2;
          } while ((longlong)uVar7 < (longlong)iVar2);
        }
        iVar3 = -1;
LAB_180840a03:
        *param_4 = iVar3;
        uStack_48 = uVar4;
      }
    }
    else {
      iVar2 = 0;
      if (0 < *(int *)(param_2 + 0x28)) {
        lVar9 = 0;
        do {
          lVar1 = *(longlong *)(lVar9 + 0x10 + *(longlong *)(param_2 + 0x20));
          if (lVar1 == 0) break;
          if (*(int *)(lVar1 + 0x58) < 1) {
            puVar6 = &DAT_18098bc73;
          }
          else {
            puVar6 = *(undefined **)(lVar1 + 0x50);
          }
          iVar3 = func_0x00018076b630(puVar6,param_3);
          if (iVar3 == 0) {
            *param_4 = iVar2;
            break;
          }
          iVar2 = iVar2 + 1;
          lVar9 = lVar9 + 0x18;
        } while (iVar2 < *(int *)(param_2 + 0x28));
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_68);
}



undefined8 FUN_180840a90(undefined8 *param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 1)) {
    piVar2 = (int *)*param_1;
    lVar4 = 0;
    do {
      if ((*piVar2 == *param_2) && (piVar2[1] == param_2[1])) goto LAB_180840ad5;
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 1;
      piVar2 = piVar2 + 2;
    } while (lVar4 < *(int *)(param_1 + 1));
  }
  iVar3 = -1;
LAB_180840ad5:
  *param_3 = iVar3;
  uVar1 = 0x4a;
  if (-1 < iVar3) {
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180840af0(longlong param_1,longlong param_2,int *param_3)
void FUN_180840af0(longlong param_1,longlong param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  longlong lStack_38;
  longlong lStack_30;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    bVar1 = false;
    iVar2 = FUN_18076b6f0(param_2,&UNK_180984620,10);
    if (iVar2 == 0) {
      iVar2 = FUN_180881fa0(param_1,param_2,&lStack_38);
      if (iVar2 != 0) goto LAB_180840b99;
      bVar1 = true;
    }
    param_1 = param_1 + 0x60;
    if (bVar1) {
      iVar5 = 0;
      iVar2 = func_0x0001808675f0(param_1);
      if (0 < iVar2) {
        do {
          lVar3 = func_0x000180867680(param_1,iVar5);
          if ((*(longlong *)(lVar3 + 0x10) == lStack_38) &&
             (*(longlong *)(lVar3 + 0x18) == lStack_30)) goto LAB_180840bf9;
          iVar5 = iVar5 + 1;
          iVar2 = func_0x0001808675f0(param_1);
        } while (iVar5 < iVar2);
      }
    }
    else {
      iVar5 = 0;
      iVar2 = func_0x0001808675f0(param_1);
      if (0 < iVar2) {
        do {
          lVar3 = func_0x000180867680(param_1,iVar5);
          if (*(int *)(lVar3 + 0x58) < 1) {
            puVar4 = &DAT_18098bc73;
          }
          else {
            puVar4 = *(undefined **)(lVar3 + 0x50);
          }
          iVar2 = func_0x00018076b630(puVar4,param_2);
          if (iVar2 == 0) goto LAB_180840bf9;
          iVar5 = iVar5 + 1;
          iVar2 = func_0x0001808675f0(param_1);
        } while (iVar5 < iVar2);
      }
    }
  }
  goto LAB_180840b99;
LAB_180840bf9:
  *param_3 = iVar5;
LAB_180840b99:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_58);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



