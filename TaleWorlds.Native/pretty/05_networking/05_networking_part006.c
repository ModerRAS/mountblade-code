#include "TaleWorlds.Native.Split.h"

// 05_networking_part006.c - 31 个函数

// 函数别名定义
#define network_get_connection_info FUN_180847110
#define network_log_connection_event FUN_180847230
#define network_log_connection_event_simple FUN_180847274
#define network_cleanup_connection_event FUN_1808472ec
#define network_log_server_event FUN_180847310
#define network_log_server_event_simple FUN_180847354
#define network_cleanup_server_event FUN_1808473cc
#define network_get_peer_address_info FUN_1808473f0
#define network_extract_peer_data FUN_180847550
#define network_log_multi_param_event FUN_180847690
#define network_log_multi_param_event_simple FUN_180847710
#define network_cleanup_multi_param_event FUN_1808477f4
#define network_get_thread_local_buffer FUN_180847820
#define network_get_connection_status FUN_180847890
#define network_check_connection_readiness FUN_1808479d0
#define network_check_connection_stability FUN_180847c60
#define network_get_connection_stability_status FUN_180847df0
#define network_is_valid_connection_id FUN_180847f30
#define network_send_connection_notification FUN_180847f60
#define network_send_data_packet FUN_180848090
#define network_send_simple_notification FUN_1808482f0
#define network_handle_connection_setup FUN_180848440
#define network_handle_connection_teardown FUN_180848480
#define network_handle_connection_state_change FUN_1808484d0
#define network_get_connection_state FUN_180848530
#define network_handle_data_transfer FUN_180848590
#define network_handle_error_recovery FUN_1808485d0
#define network_handle_protocol_handshake FUN_180848610
#define network_handle_keepalive FUN_180848650
#define network_handle_authentication FUN_180848690
#define network_handle_encryption_setup FUN_1808486e0
#define network_handle_compression_setup FUN_180848720
#define network_handle_bandwidth_management FUN_180848780
#define network_handle_qos_management FUN_1808487e0

// 函数: void network_get_connection_info(ulonglong param_1,undefined8 *param_2)
// 功能: 获取网络连接信息，包括连接状态、地址和配置参数
// 参数: 
//   param_1 - 连接ID
//   param_2 - 输出参数，存储连接信息
// 返回: 无
void network_get_connection_info(ulonglong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  longlong lStack_130;
  undefined1 auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  if (param_2 == (undefined8 *)0x0) {
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_178);
    }
    func_0x00018074bda0(auStack_128,0x100,0);
    puStack_158 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xd,param_1,&UNK_1809849d0);
  }
  *param_2 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  lStack_138 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_140);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_148,uStack_140), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_130), iVar1 == 0)) {
    lStack_138 = 0;
    if (lStack_130 != 0) {
      lStack_138 = lStack_130 + -8;
    }
  }
  else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_148);
  }
  *param_2 = *(undefined8 *)(lStack_138 + 0x30);
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_148);
}

// 函数: void network_log_connection_event(undefined8 param_1,undefined8 param_2,undefined8 param_3)
// 功能: 记录网络连接事件日志
// 参数:
//   param_1 - 事件类型
//   param_2 - 连接信息
//   param_3 - 附加参数
// 返回: 无
void network_log_connection_event(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_168 [32];
  undefined1 *puStack_148;
  undefined1 auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  iVar1 = FUN_180840790();
  if ((iVar1 != 0) && ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
    iVar2 = FUN_18074b880(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_148 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,0xc,param_1,&UNK_180984768);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_168);
}

// 函数: void network_log_connection_event_simple(void)
// 功能: 记录简化的网络连接事件日志
// 参数: 无
// 返回: 无
void network_log_connection_event_simple(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  
  iVar1 = FUN_18074b880(&stack0x00000030,0x100);
  iVar2 = FUN_18074b880(&stack0x00000030 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074bda0(&stack0x00000030 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,0xc);
}

// 函数: void network_cleanup_connection_event(void)
// 功能: 清理网络连接事件相关资源
// 参数: 无
// 返回: 无
void network_cleanup_connection_event(void)

{
  ulonglong in_stack_00000130;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000130 ^ (ulonglong)&stack0x00000000);
}

// 函数: void network_log_server_event(undefined8 param_1,undefined8 param_2,undefined8 param_3)
// 功能: 记录服务器事件日志
// 参数:
//   param_1 - 事件类型
//   param_2 - 服务器信息
//   param_3 - 附加参数
// 返回: 无
void network_log_server_event(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_168 [32];
  undefined1 *puStack_148;
  undefined1 auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  iVar1 = FUN_18083ff70();
  if ((iVar1 != 0) && ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
    iVar2 = FUN_18074b880(auStack_138,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_138 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_148 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,0xb,param_1,&UNK_180982038);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_168);
}

// 函数: void network_log_server_event_simple(void)
// 功能: 记录简化的服务器事件日志
// 参数: 无
// 返回: 无
void network_log_server_event_simple(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  
  iVar1 = FUN_18074b880(&stack0x00000030,0x100);
  iVar2 = FUN_18074b880(&stack0x00000030 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074bda0(&stack0x00000030 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,0xb);
}

// 函数: void network_cleanup_server_event(void)
// 功能: 清理服务器事件相关资源
// 参数: 无
// 返回: 无
void network_cleanup_server_event(void)

{
  ulonglong in_stack_00000130;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000130 ^ (ulonglong)&stack0x00000000);
}

// 函数: void network_get_peer_address_info(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)
// 功能: 获取对等方地址信息
// 参数:
//   param_1 - 对等方ID
//   param_2 - 输出参数，存储IP地址
//   param_3 - 输出参数，存储端口号
// 返回: 无
void network_get_peer_address_info(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_188 [48];
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong alStack_140 [33];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  lStack_148 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_150);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_158,uStack_150), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1,alStack_140), iVar1 == 0)) {
    lStack_148 = 0;
    if (alStack_140[0] != 0) {
      lStack_148 = alStack_140[0] + -8;
    }
  }
  else if (iVar1 != 0) goto LAB_18084749d;
  FUN_1808682e0(lStack_148,param_2,param_3);
LAB_18084749d:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_158);
}

// 函数: void network_extract_peer_data(longlong param_1,undefined8 *param_2,undefined1 param_3)
// 功能: 提取对等方数据信息
// 参数:
//   param_1 - 对等方数据结构指针
//   param_2 - 输出参数，存储提取的数据
//   param_3 - 标志位参数
// 返回: 无
void network_extract_peer_data(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  undefined *puVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_58 [32];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x58) < 1) {
    puVar6 = &DAT_18098bc73;
  }
  else {
    puVar6 = *(undefined **)(param_1 + 0x50);
  }
  *param_2 = puVar6;
  uStack_38 = *(undefined4 *)(param_1 + 0x10);
  uStack_34 = *(undefined4 *)(param_1 + 0x14);
  uStack_30 = *(undefined4 *)(param_1 + 0x18);
  uStack_2c = *(undefined4 *)(param_1 + 0x1c);
  uVar7 = FUN_18084dc20(&uStack_38);
  param_2[1] = uVar7;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 5) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar2;
  *(undefined4 *)(param_2 + 6) = uVar3;
  cVar4 = func_0x000180894c50(param_1,param_3);
  uVar8 = ((uint)(cVar4 != '\0') | *(uint *)(param_2 + 4)) & ~(uint)(cVar4 == '\0');
  *(uint *)(param_2 + 4) = uVar8;
  uVar9 = 2;
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar9 = 0;
  }
  uVar9 = (-(uint)(*(int *)(param_1 + 0x30) != 0) & 2 | uVar8) & ~uVar9;
  *(uint *)(param_2 + 4) = uVar9;
  bVar5 = *(byte *)(param_1 + 0x34) & 1;
  uVar9 = ~((bVar5 ^ 1) << 2) & ((uint)bVar5 << 2 | uVar9);
  *(uint *)(param_2 + 4) = uVar9;
  bVar5 = (byte)(*(uint *)(param_1 + 0x34) >> 3) & 1;
  uVar9 = ~((bVar5 ^ 1) << 3) & ((uint)bVar5 << 3 | uVar9);
  *(uint *)(param_2 + 4) = uVar9;
  bVar5 = (byte)(*(uint *)(param_1 + 0x34) >> 5) & 1;
  *(uint *)(param_2 + 4) = ~((bVar5 ^ 1) << 4) & ((uint)bVar5 << 4 | uVar9);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_58);
}

// 函数: void network_log_multi_param_event(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
// 功能: 记录多参数事件日志
// 参数:
//   param_1 - 事件类型
//   param_2 - 参数1
//   param_3 - 参数2
//   param_4 - 参数3
//   param_5 - 附加数据
// 返回: 无
void network_log_multi_param_event(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_188 [32];
  undefined1 *puStack_168;
  undefined8 auStack_158 [2];
  undefined1 auStack_148 [256];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  iVar1 = func_0x00018088c590(param_1,auStack_158);
  if (iVar1 == 0) {
    puStack_168 = (undefined1 *)param_5;
    iVar1 = FUN_18087cbd0(auStack_158[0],param_2,param_3,param_4);
    if (iVar1 == 0) goto LAB_1808477fa;
  }
  if ((iVar1 != 0) && ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
    iVar2 = func_0x00018074b7d0(auStack_148,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&DAT_180a06434);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b800(auStack_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&DAT_180a06434);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b800(auStack_148 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_148 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074bda0(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_5);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,0xb,param_1,&UNK_180984630);
  }
LAB_1808477fa:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_188);
}

// 函数: void network_log_multi_param_event_simple(void)
// 功能: 记录简化的多参数事件日志
// 参数: 无
// 返回: 无
void network_log_multi_param_event_simple(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_R14D;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b800(&stack0x00000040 + iVar1,0x100 - iVar1,unaff_EBP);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b800(&stack0x00000040 + iVar1,0x100 - iVar1,unaff_R14D);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b880(&stack0x00000040 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074bda0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,0xb);
}

// 函数: void network_cleanup_multi_param_event(void)
// 功能: 清理多参数事件相关资源
// 参数: 无
// 返回: 无
void network_cleanup_multi_param_event(void)

{
  ulonglong in_stack_00000140;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}

// 函数: undefined * network_get_thread_local_buffer(void)
// 功能: 获取线程本地存储缓冲区
// 参数: 无
// 返回: 线程本地缓冲区指针
undefined * network_get_thread_local_buffer(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x48) < _DAT_180c4ea90) {
    FUN_1808fcb90(&DAT_180c4ea90);
    if (_DAT_180c4ea90 == -1) {
      _DAT_180c4ea80 = 0;
      uRam0000000180c4ea84 = 0;
      uRam0000000180c4ea88 = 0;
      uRam0000000180c4ea8c = 0;
      FUN_1808fcb30(&DAT_180c4ea90);
    }
  }
  return &DAT_180c4ea80;
}

// 函数: void network_get_connection_status(ulonglong param_1,undefined1 *param_2)
// 功能: 获取网络连接状态
// 参数:
//   param_1 - 连接ID
//   param_2 - 输出参数，存储连接状态
// 返回: 无
void network_get_connection_status(ulonglong param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 auStack_168 [32];
  undefined1 *puStack_148;
  undefined8 uStack_138;
  longlong lStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  if (param_2 == (undefined1 *)0x0) {
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_168);
    }
    FUN_18074be30(auStack_118,0x100,0);
    puStack_148 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xc,param_1,&UNK_1809847f8);
  }
  *param_2 = 0;
  uStack_128 = 0;
  uStack_138 = 0;
  lStack_130 = 0;
  iVar1 = func_0x00018088c590(0,&lStack_130);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_138,lStack_130), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_120), iVar1 == 0)) {
    uStack_128 = *(undefined8 *)(lStack_120 + 8);
  }
  else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_138);
  }
  FUN_1808479d0(uStack_128,*(undefined8 *)(lStack_130 + 800),param_2);
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_138);
}

// 函数: void network_check_connection_readiness(longlong param_1,longlong *param_2,byte *param_3)
// 功能: 检查连接准备状态
// 参数:
//   param_1 - 连接对象指针
//   param_2 - 连接管理器指针
//   param_3 - 输出参数，存储准备状态
// 返回: 无
void network_check_connection_readiness(longlong param_1,longlong *param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  char cStack_60;
  undefined *puStack_58;
  char cStack_50;
  longlong *plStack_48;
  ulonglong uStack_30;
  
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  lVar4 = *(longlong *)(param_1 + 0xd0);
  if ((*(uint *)(lVar4 + 4) >> 3 & 1) == 0) {
    bVar6 = 0;
    lVar4 = (**(code **)(*param_2 + 0x330))(param_2,param_1 + 0x50,1);
    if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(param_1 + 0x50,&puStack_58);
    }
    cStack_60 = '\0';
    puStack_68 = &UNK_1809845a0;
    iVar3 = FUN_18084b5a0(&puStack_68,lVar4 + 0x80,param_2);
    if ((iVar3 != 0) || (iVar3 = FUN_18084b5a0(&puStack_68,lVar4 + 0x90,param_2), iVar3 != 0))
    goto LAB_180847c35;
    if (cStack_60 == '\0') {
      for (uVar5 = *(ulonglong *)(param_1 + 0x70);
          (*(ulonglong *)(param_1 + 0x70) <= uVar5 &&
          (uVar5 < (longlong)*(int *)(param_1 + 0x78) * 0x10 + *(ulonglong *)(param_1 + 0x70)));
          uVar5 = uVar5 + 0x10) {
        lVar4 = (**(code **)(*param_2 + 0x150))(param_2,uVar5,1);
        if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(uVar5,&puStack_58);
        }
        iVar3 = FUN_18084b5a0(&puStack_68,lVar4 + 0x80,param_2);
        if ((iVar3 != 0) || (iVar3 = FUN_18084b5a0(&puStack_68,lVar4 + 0x90,param_2), iVar3 != 0))
        goto LAB_180847c35;
        if (cStack_60 != '\0') goto LAB_180847bfb;
      }
      for (uVar5 = *(ulonglong *)(param_1 + 0x80);
          (*(ulonglong *)(param_1 + 0x80) <= uVar5 &&
          (uVar5 < (longlong)*(int *)(param_1 + 0x88) * 0x10 + *(ulonglong *)(param_1 + 0x80)));
          uVar5 = uVar5 + 0x10) {
        lVar4 = (**(code **)(*param_2 + 0x270))(param_2,uVar5,1);
        if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(uVar5,&puStack_58);
        }
        lVar4 = FUN_18083fb90(param_2,lVar4 + 0x38);
        if (lVar4 == 0) goto LAB_180847c35;
        cVar1 = func_0x00018084dda0(lVar4);
        if (cVar1 != '\0') goto LAB_180847bfb;
      }
      cStack_50 = '\0';
      puStack_58 = &UNK_1809845c0;
      plStack_48 = param_2;
      iVar3 = FUN_18084b990(&puStack_58,param_1,param_2);
      if ((iVar3 != 0) || (iVar3 = FUN_18084be00(&puStack_58,param_1,param_2), iVar3 != 0))
      goto LAB_180847c35;
      bVar2 = 1;
      if (cStack_50 != '\0') goto LAB_180847bfb;
    }
    else {
LAB_180847bfb:
      bVar2 = 0;
      bVar6 = 1;
    }
    *(uint *)(*(longlong *)(param_1 + 0xd0) + 4) =
         ((uint)bVar6 << 2 | *(uint *)(*(longlong *)(param_1 + 0xd0) + 4)) & ~((uint)bVar2 << 2) | 8
    ;
    lVar4 = *(longlong *)(param_1 + 0xd0);
  }
  *param_3 = (byte)(*(uint *)(lVar4 + 4) >> 2) & 1;
LAB_180847c35:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_88);
}

// 函数: void network_check_connection_stability(longlong param_1,longlong *param_2,byte *param_3)
// 功能: 检查连接稳定性
// 参数:
//   param_1 - 连接对象指针
//   param_2 - 连接管理器指针
//   param_3 - 输出参数，存储稳定性状态
// 返回: 无
void network_check_connection_stability(longlong param_1,longlong *param_2,byte *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 auStack_98 [32];
  undefined *puStack_78;
  undefined2 uStack_70;
  longlong *plStack_68;
  undefined1 auStack_60 [40];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_1 + 0xd0);
  if ((*(uint *)(lVar4 + 4) >> 7 & 1) == 0) {
    bVar7 = ~(byte)(*(uint *)(param_1 + 0xf8) >> 1) & 1;
    if (bVar7 != 0) {
      uStack_70 = 1;
      puStack_78 = &UNK_180984540;
      plStack_68 = param_2;
      iVar2 = FUN_18084b990(&puStack_78,param_1,param_2);
      if (iVar2 != 0) goto LAB_180847dc9;
      bVar7 = (byte)uStack_70;
      if ((byte)uStack_70 != 0) {
        lVar4 = (**(code **)(*param_2 + 0x2f0))(param_2,param_1 + 0x30);
        if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18084b240(param_1 + 0x30,auStack_60);
        }
        plVar5 = (longlong *)(lVar4 + 0x58);
        if (((longlong *)*plVar5 == plVar5) && (*(longlong **)(lVar4 + 0x60) == plVar5)) {
          for (puVar1 = *(undefined8 **)(lVar4 + 0x68); puVar1 != (undefined8 *)(lVar4 + 0x68);
              puVar1 = (undefined8 *)*puVar1) {
            if ((((*(int *)(puVar1 + 4) != 0) || (*(int *)((longlong)puVar1 + 0x24) != 0)) ||
                (*(int *)(puVar1 + 5) != 0)) || (*(int *)((longlong)puVar1 + 0x2c) != 0)) {
              lVar6 = func_0x00018084d0b0(lVar4);
              if (lVar6 == 0) goto LAB_180847dc9;
              if (*(uint *)(lVar6 + 0x20) < *(uint *)((longlong)puVar1 + 0x34)) goto LAB_180847d83;
            }
            if (puVar1 == (undefined8 *)(lVar4 + 0x68)) break;
          }
          bVar7 = 1;
        }
        else {
LAB_180847d83:
          bVar7 = 0;
        }
      }
    }
    uVar3 = 0x40;
    if (bVar7 != 0) {
      uVar3 = 0;
    }
    *(uint *)(*(longlong *)(param_1 + 0xd0) + 4) =
         (-(uint)(bVar7 != 0) & 0x40 | *(uint *)(*(longlong *)(param_1 + 0xd0) + 4)) & ~uVar3 | 0x80
    ;
    lVar4 = *(longlong *)(param_1 + 0xd0);
  }
  *param_3 = (byte)(*(uint *)(lVar4 + 4) >> 6) & 1;
LAB_180847dc9:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_98);
}

// 函数: void network_get_connection_stability_status(ulonglong param_1,undefined1 *param_2)
// 功能: 获取连接稳定性状态
// 参数:
//   param_1 - 连接ID
//   param_2 - 输出参数，存储稳定性状态
// 返回: 无
void network_get_connection_stability_status(ulonglong param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 auStack_168 [32];
  undefined1 *puStack_148;
  undefined8 uStack_138;
  longlong lStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  if (param_2 == (undefined1 *)0x0) {
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_168);
    }
    FUN_18074be30(auStack_118,0x100,0);
    puStack_148 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xc,param_1,&UNK_1809847d8);
  }
  *param_2 = 0;
  uStack_128 = 0;
  uStack_138 = 0;
  lStack_130 = 0;
  iVar1 = func_0x00018088c590(0,&lStack_130);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_138,lStack_130), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_120), iVar1 == 0)) {
    uStack_128 = *(undefined8 *)(lStack_120 + 8);
  }
  else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_138);
  }
  FUN_180847c60(uStack_128,*(undefined8 *)(lStack_130 + 800),param_2);
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_138);
}

// 函数: bool network_is_valid_connection_id(undefined8 param_1)
// 功能: 验证连接ID是否有效
// 参数:
//   param_1 - 连接ID
// 返回: true表示有效，false表示无效
bool network_is_valid_connection_id(undefined8 param_1)

{
  int iVar1;
  undefined1 auStackX_8 [32];
  
  iVar1 = func_0x00018088c530(param_1,auStackX_8);
  return iVar1 == 0;
}

// 函数: void network_send_connection_notification(undefined8 param_1)
// 功能: 发送连接通知
// 参数:
//   param_1 - 连接ID
// 返回: 无
void network_send_connection_notification(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_168 [48];
  longlong alStack_138 [2];
  undefined8 *apuStack_128 [34];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  alStack_138[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_138);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) == 0) goto LAB_180848016;
    iVar2 = FUN_18088c740(alStack_138 + 1);
    if (iVar2 == 0) goto LAB_180847fc4;
  }
  else {
LAB_180847fc4:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(undefined8 *)(alStack_138[0] + 0x98),apuStack_128,0x18), iVar1 == 0))
  {
    *apuStack_128[0] = &UNK_180983c78;
    *(undefined4 *)(apuStack_128[0] + 1) = 0x18;
    *(int *)(apuStack_128[0] + 2) = (int)param_1;
    func_0x00018088e0d0(*(undefined8 *)(alStack_138[0] + 0x98));
  }
LAB_180848016:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_138 + 1);
}

// 函数: void network_send_data_packet(ulonglong param_1,longlong param_2,undefined4 param_3,undefined8 *param_4)
// 功能: 发送数据包
// 参数:
//   param_1 - 目标连接ID
//   param_2 - 数据指针
//   param_3 - 数据长度
//   param_4 - 输出参数，存储发送结果
// 返回: 无
void network_send_data_packet(ulonglong param_1,longlong param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_1a8 [32];
  undefined1 *puStack_188;
  undefined4 uStack_178;
  undefined8 uStack_170;
  longlong lStack_168;
  undefined8 *puStack_160;
  undefined1 auStack_158 [256];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_1a8;
  uStack_178 = param_3;
  if (((param_4 == (undefined8 *)0x0) || (*param_4 = 0, param_2 == 0)) ||
     (iVar2 = func_0x00018076b690(param_2), 0x1ff < iVar2)) {
    uVar1 = uStack_178;
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_1a8);
    }
    iVar2 = FUN_18074b880(auStack_158,0x100,param_2);
    iVar3 = FUN_18074b880(auStack_158 + iVar2,0x100 - iVar2,&DAT_180a06434);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b800(auStack_158 + iVar2,0x100 - iVar2,uVar1);
    iVar2 = iVar2 + iVar3;
    iVar3 = FUN_18074b880(auStack_158 + iVar2,0x100 - iVar2,&DAT_180a06434);
    func_0x00018074bda0(auStack_158 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    puStack_188 = auStack_158;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xb,param_1,&UNK_180982570);
  }
  uStack_170 = 0;
  iVar3 = func_0x00018088c590(param_1 & 0xffffffff,&lStack_168);
  if (iVar3 == 0) {
    if ((*(uint *)(lStack_168 + 0x24) >> 1 & 1) == 0) goto LAB_180848132;
    iVar4 = FUN_18088c740(&uStack_170);
    if (iVar4 == 0) goto LAB_18084820e;
  }
  else {
LAB_18084820e:
    iVar4 = iVar3;
  }
  if ((iVar4 == 0) &&
     (iVar3 = FUN_18088dec0(*(undefined8 *)(lStack_168 + 0x98),&puStack_160,0x218), iVar3 == 0)) {
    *puStack_160 = &UNK_180982508;
    *(undefined4 *)(puStack_160 + 2) = 0;
    *(undefined4 *)(puStack_160 + 1) = 0x218;
    *(undefined4 *)((longlong)puStack_160 + 0x14) = uStack_178;
                    // WARNING: Subroutine does not return
    memcpy(puStack_160 + 3,param_2,(longlong)(iVar2 + 1));
  }
LAB_180848132:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_170);
}

// 函数: void network_send_simple_notification(undefined8 param_1)
// 功能: 发送简单通知
// 参数:
//   param_1 - 连接ID
// 返回: 无
void network_send_simple_notification(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_168 [48];
  longlong alStack_138 [2];
  undefined8 *apuStack_128 [34];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  alStack_138[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_138);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) == 0) goto LAB_1808483a6;
    iVar2 = FUN_18088c740(alStack_138 + 1);
    if (iVar2 == 0) goto LAB_180848354;
  }
  else {
LAB_180848354:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(undefined8 *)(alStack_138[0] + 0x98),apuStack_128,0x18), iVar1 == 0))
  {
    *apuStack_128[0] = &UNK_180982cc0;
    *(undefined4 *)(apuStack_128[0] + 1) = 0x18;
    *(int *)(apuStack_128[0] + 2) = (int)param_1;
    func_0x00018088e0d0(*(undefined8 *)(alStack_138[0] + 0x98));
  }
LAB_1808483a6:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_138 + 1);
}

// 函数: void network_handle_connection_setup(longlong param_1,undefined8 param_2)
// 功能: 处理连接建立
// 参数:
//   param_1 - 连接对象指针
//   param_2 - 连接配置
// 返回: 无
void network_handle_connection_setup(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    FUN_18088ee20(param_2,param_1 + 0x18);
  }
  return;
}

// 函数: void network_handle_connection_teardown(longlong param_1,undefined8 param_2)
// 功能: 处理连接断开
// 参数:
//   param_1 - 连接对象指针
//   param_2 - 断开原因
// 返回: 无
void network_handle_connection_teardown(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088ee20(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      FUN_18088ee20(param_2,param_1 + 0x1c);
    }
  }
  return;
}

// 函数: void network_handle_connection_state_change(longlong param_1,undefined8 param_2)
// 功能: 处理连接状态变化
// 参数:
//   param_1 - 连接对象指针
//   param_2 - 状态变化信息
// 返回: 无
void network_handle_connection_state_change(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088ee20(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      iVar1 = FUN_18088f1a0(param_2,param_1 + 0x1c);
      if (iVar1 == 0) {
        FUN_18088ee60(param_2,param_1 + 0x2c);
      }
    }
  }
  return;
}

// 函数: undefined8 network_get_connection_state(longlong param_1,undefined8 param_2)
// 功能: 获取连接状态
// 参数:
//   param_1 - 连接对象指针
//   param_2 - 状态查询参数
// 返回: 连接状态信息
undefined8 network_get_connection_state(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 auStackX_8 [2];
  
  uVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_18088ee20(param_2,auStackX_8);
    if ((int)uVar1 == 0) {
      *(undefined4 *)(param_1 + 0x18) = auStackX_8[0];
      uVar1 = 0;
    }
  }
  return uVar1;
}

// 函数: void network_handle_data_transfer(longlong param_1,undefined8 param_2)
// 功能: 处理数据传输
// 参数:
//   param_1 - 连接对象指针
//   param_2 - 传输数据
// 返回: 无
void network_handle_data_transfer(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    FUN_18088f010(param_2,param_1 + 0x18);
  }
  return;
}

// 函数: void network_handle_error_recovery(longlong param_1,undefined8 param_2)
// 功能: 处理错误恢复
// 参数:
//   param_1 - 连接对象指针
//   param_2 - 错误信息
// 返回: 无
void network_handle_error_recovery(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    FUN_18088f470(param_2,param_1 + 0x18);
  }
  return;
}

// 函数: void network_handle_protocol_handshake(longlong param_1,undefined8 param_2)
// 功能: 处理协议握手
// 参数:
//   param_1 - 连接对象指针
//   param_2 - 握手数据
// 返回: 无
void network_handle_protocol_handshake(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    FUN_18088eea0(param_2,param_1 + 0x18);
  }
  return;
}

// 函数: void network_handle_keepalive(longlong param_1,undefined8 param_2)
// 功能: 处理保活机制
// 参数:
//   param_1 - 连接对象指针
//   param_2 - 保活数据
// 返回: 无
void network_handle_keepalive(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    FUN_18088ee60(param_2,param_1 + 0x18);
  }
  return;
}

// 函数: void network_handle_authentication(longlong param_1,undefined8 param_2)
// 功能: 处理身份验证
// 参数:
//   param_1 - 连接对象指针
//   param_2 - 验证数据
// 返回: 无
void network_handle_authentication(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088ee20(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      FUN_18088ee60(param_2,param_1 + 0x1c);
    }
  }
  return;
}

// 函数: void network_handle_encryption_setup(longlong param_1,undefined8 param_2)
// 功能: 处理加密设置
// 参数:
//   param_1 - 连接对象指针
//   param_2 - 加密配置
// 返回: 无
void network_handle_encryption_setup(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    FUN_18088f050(param_2,param_1 + 0x18);
  }
  return;
}

// 函数: void network_handle_compression_setup(longlong param_1,undefined8 param_2)
// 功能: 处理压缩设置
// 参数:
//   param_1 - 连接对象指针
//   param_2 - 压缩配置
// 返回: 无
void network_handle_compression_setup(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088f310(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      iVar1 = FUN_18088eea0(param_2,param_1 + 0x20);
      if (iVar1 == 0) {
        FUN_18088f470(param_2,param_1 + 0x24);
      }
    }
  }
  return;
}

// 函数: void network_handle_bandwidth_management(longlong param_1,undefined8 param_2)
// 功能: 处理带宽管理
// 参数:
//   param_1 - 连接对象指针
//   param_2 - 带宽配置
// 返回: 无
void network_handle_bandwidth_management(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088f310(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      iVar1 = FUN_18088f4d0(param_2,param_1 + 0x25,0x80);
      if (iVar1 == 0) {
        FUN_18088f470(param_2,param_1 + 0x24);
      }
    }
  }
  return;
}

// 函数: void network_handle_qos_management(longlong param_1,undefined8 param_2)
// 功能: 处理服务质量(QoS)管理
// 参数:
//   param_1 - 连接对象指针
//   param_2 - QoS配置
// 返回: 无
void network_handle_qos_management(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088f4d0(param_2,param_1 + 0x28,0x80);
    if (iVar1 == 0) {
      iVar1 = FUN_18088eea0(param_2,param_1 + 0x18);
      if (iVar1 == 0) {
        FUN_18088f470(param_2,param_1 + 0x1c);
      }
    }
  }
  return;
}

// =============================================================================
// 模块信息
// =============================================================================
// 模块：网络系统 - 数据包处理和连接管理
// 功能：网络连接管理、数据包处理、状态检查、参数设置
// 函数总数：31个
// 创建时间：2025-08-28
// 负责人：Claude Code
// =============================================================================