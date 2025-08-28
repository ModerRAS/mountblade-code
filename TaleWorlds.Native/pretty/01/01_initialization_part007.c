#include "TaleWorlds.Native.Split.h"

// 01_initialization_part007.c - 31 个初始化函数
// 转译版本 - 所有FUN_*、DAT_*、UNK_*标识符已转译为语义化名称

// 函数: 注册组件节点 - 类型1 (FUN_180037780)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性
void register_component_node_type1(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined8 callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = 0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_768,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_768,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x4770584fbb1df897;  // 组件类型标识符
  previous_node[7] = 0x47f249e43f66f2ab;  // 组件版本信息
  previous_node[8] = &component_interface_7a0;  // 接口指针
  previous_node[9] = 1;  // 启用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 类型2 (FUN_180037880)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性
void register_component_node_type2(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined8 callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = 0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_9b8,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_9b8,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x4666df49b97e0f10;  // 组件类型标识符
  previous_node[7] = 0x4e4b0d63a6ad1d8f;  // 组件版本信息
  previous_node[8] = &component_interface_7b8;  // 接口指针
  previous_node[9] = 0;  // 禁用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 类型3 (FUN_180037980)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性
void register_component_node_type3(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined8 callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = 0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_940,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_940,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x46ecbd4daf41613e;  // 组件类型标识符
  previous_node[7] = 0xdc42c056bbde8482;  // 组件版本信息
  previous_node[8] = &component_interface_7c8;  // 接口指针
  previous_node[9] = 0;  // 禁用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 类型4 (FUN_180037a80)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性
void register_component_node_type4(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined8 callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = 0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_918,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_918,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x4c868a42644030f6;  // 组件类型标识符
  previous_node[7] = 0xc29193aa9d9b35b9;  // 组件版本信息
  previous_node[8] = &component_interface_7d8;  // 接口指针
  previous_node[9] = 0;  // 禁用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 类型5 (FUN_180037b80)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性
void register_component_node_type5(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined8 callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = 0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_968,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_968,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x40ea3a798283cbbb;  // 组件类型标识符
  previous_node[7] = 0x7f74eb2c5a7fadae;  // 组件版本信息
  previous_node[8] = &component_interface_7f0;  // 接口指针
  previous_node[9] = 3;  // 优先级标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 类型6 (FUN_180037c80)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性
void register_component_node_type6(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined8 callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = 0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_990,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_990,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x45b8d074df27d12f;  // 组件类型标识符
  previous_node[7] = 0x8d98f4c06880eda4;  // 组件版本信息
  previous_node[8] = &component_interface_810;  // 接口指针
  previous_node[9] = 3;  // 优先级标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: void FUN_180037d80(void)
void FUN_180037d80(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  undefined8 uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_18098c9e0,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_18098c9e0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x42d293584c8cf3e5;
  puVar7[7] = 0x355ffeb2d29e668a;
  puVar7[8] = &UNK_18098c870;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_180037e80(void)
void FUN_180037e80(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_180073930;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_18098c8f0,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_18098c8f0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x421c3cedd07d816d;
  puVar7[7] = 0xbec25de793b7afa6;
  puVar7[8] = &UNK_18098c880;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180037f80(void)
void FUN_180037f80(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  undefined8 uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_18098c8c8,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_18098c8c8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4c22bb0c326587ce;
  puVar7[7] = 0x5e3cf00ce2978287;
  puVar7[8] = &UNK_18098c898;
  puVar7[9] = 1;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_180038080(void)
void FUN_180038080(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025e330;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a00d48,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a00d48,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x45425dc186a5d575;
  puVar7[7] = 0xfab48faa65382fa5;
  puVar7[8] = &UNK_180a00460;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180038180(void)
void FUN_180038180(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 9;
  strcpy_s(auStack_88,0x80,&UNK_180a194f0,in_R9,0xfffffffffffffffe);
  _DAT_180c91ef8 = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180038210(void)
void FUN_180038210(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 8;
  strcpy_s(auStack_88,0x80,&UNK_180a19588,in_R9,0xfffffffffffffffe);
  _DAT_180c91efc = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800382a0(void)
void FUN_1800382a0(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0xb;
  strcpy_s(auStack_88,0x80,&UNK_180a19bf0,in_R9,0xfffffffffffffffe);
  _DAT_180c91f00 = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180038330(void)
void FUN_180038330(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0xd;
  strcpy_s(auStack_88,0x80,&UNK_180a19df0,in_R9,0xfffffffffffffffe);
  _DAT_180c91f04 = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800383c0(void)
void FUN_1800383c0(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x1c;
  strcpy_s(auStack_88,0x80,&UNK_180a1a450,in_R9,0xfffffffffffffffe);
  _DAT_180c91f08 = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180038450(void)
void FUN_180038450(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x15;
  strcpy_s(auStack_88,0x80,&UNK_180a1a6c8,in_R9,0xfffffffffffffffe);
  _DAT_180c91f0c = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800384e0(void)
void FUN_1800384e0(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0xe;
  strcpy_s(auStack_88,0x80,&UNK_180a1afd8,in_R9,0xfffffffffffffffe);
  _DAT_180c91f10 = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180038570(void)
void FUN_180038570(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x1a;
  strcpy_s(auStack_88,0x80,&UNK_180a1cc28,in_R9,0xfffffffffffffffe);
  _DAT_180c91f14 = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180038610(void)
void FUN_180038610(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x13;
  strcpy_s(auStack_88,0x80,&UNK_180a1eb30,in_R9,0xfffffffffffffffe);
  _DAT_180c91f30 = FUN_180623800(&puStack_a0);
  return;
}





// 函数: void FUN_1800386a0(void)
void FUN_1800386a0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025cc00;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a010a0,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a010a0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x43330a43fcdb3653;
  puVar7[7] = 0xdcfdc333a769ec93;
  puVar7[8] = &UNK_180a00370;
  puVar7[9] = 1;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_1800387a0(void)
void FUN_1800387a0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025c000;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a01078,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01078,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x431d7c8d7c475be2;
  puVar7[7] = 0xb97f048d2153e1b0;
  puVar7[8] = &UNK_180a00388;
  puVar7[9] = 4;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_1800388a0(void)
void FUN_1800388a0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  undefined8 uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a01050,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01050,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4b2d79e470ee4e2c;
  puVar7[7] = 0x9c552acd3ed5548d;
  puVar7[8] = &UNK_180a003a0;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800389a0(void)
void FUN_1800389a0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025d270;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a01028,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01028,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x49086ba08ab981a7;
  puVar7[7] = 0xa9191d34ad910696;
  puVar7[8] = &UNK_180a003b8;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180038aa0(void)
void FUN_180038aa0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  undefined8 uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a01000,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01000,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x402feffe4481676e;
  puVar7[7] = 0xd4c2151109de93a0;
  puVar7[8] = &UNK_180a003d0;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_180038ba0(void)
void FUN_180038ba0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  undefined *puStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  puStackX_18 = &UNK_1800868c0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a00fd8,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a00fd8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4384dcc4b6d3f417;
  puVar7[7] = 0x92a15d52fe2679bd;
  puVar7[8] = &UNK_180a003e8;
  puVar7[9] = 0;
  puVar7[10] = puStackX_18;
  return;
}





// 函数: void FUN_180038ca0(void)
void FUN_180038ca0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  undefined8 uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a00fb0,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a00fb0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4140994454d56503;
  puVar7[7] = 0x399eced9bb5517ad;
  puVar7[8] = &UNK_180a00400;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_180038da0(void)
void FUN_180038da0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025cc00;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a010a0,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a010a0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x43330a43fcdb3653;
  puVar7[7] = 0xdcfdc333a769ec93;
  puVar7[8] = &UNK_180a00370;
  puVar7[9] = 1;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180038ea0(void)
void FUN_180038ea0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025c000;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a01078,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01078,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x431d7c8d7c475be2;
  puVar7[7] = 0xb97f048d2153e1b0;
  puVar7[8] = &UNK_180a00388;
  puVar7[9] = 4;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180038fa0(void)
void FUN_180038fa0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  undefined8 uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a01050,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01050,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4b2d79e470ee4e2c;
  puVar7[7] = 0x9c552acd3ed5548d;
  puVar7[8] = &UNK_180a003a0;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800390a0(void)
void FUN_1800390a0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025d270;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a01028,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01028,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x49086ba08ab981a7;
  puVar7[7] = 0xa9191d34ad910696;
  puVar7[8] = &UNK_180a003b8;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_1800391a0(void)
void FUN_1800391a0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  undefined8 uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a01000,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01000,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x402feffe4481676e;
  puVar7[7] = 0xd4c2151109de93a0;
  puVar7[8] = &UNK_180a003d0;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





