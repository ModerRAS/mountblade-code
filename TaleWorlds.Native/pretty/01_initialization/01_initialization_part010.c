#include "TaleWorlds.Native.Split.h"

// 01_initialization_part010.c - 系统组件注册和初始化函数
// 本文件包含28个函数，主要用于注册和初始化各种系统组件

/**
 * 注册基础系统组件
 * 在系统注册表中注册一个基础系统组件，包含特定的标识符和参数
 */
void register_base_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t null_parameter;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    null_parameter = 0;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &base_system_identifier_00fb0, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&base_system_identifier_00fb0, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置系统组件参数
    previous_node[6] = 0x4140994454d56503;  // 组件标识符
    previous_node[7] = 0x399eced9bb5517ad;  // 校验值
    previous_node[8] = &system_constant_00400;  // 系统常量指针
    previous_node[9] = 0;                    // 优先级
    previous_node[10] = null_parameter;     // 额外参数
    return;
}





/**
 * 注册输入处理系统组件
 * 在系统注册表中注册输入处理系统组件，包含特定的处理函数和参数
 */
void register_input_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void *input_handler;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    input_handler = input_handler_25cc00;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &input_system_identifier_010a0, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&input_system_identifier_010a0, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置输入系统组件参数
    previous_node[6] = 0x43330a43fcdb3653;  // 输入系统标识符
    previous_node[7] = 0xdcfdc333a769ec93;  // 校验值
    previous_node[8] = &input_constant_00370;  // 输入常量指针
    previous_node[9] = 1;                    // 系统类型标识
    previous_node[10] = input_handler;      // 输入处理函数指针
    return;
}





/**
 * 注册渲染系统组件
 * 在系统注册表中注册渲染系统组件，包含特定的渲染处理函数和参数
 */
void register_render_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void *render_handler;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    render_handler = render_handler_25c000;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &render_system_identifier_01078, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&render_system_identifier_01078, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置渲染系统组件参数
    previous_node[6] = 0x431d7c8d7c475be2;  // 渲染系统标识符
    previous_node[7] = 0xb97f048d2153e1b0;  // 校验值
    previous_node[8] = &render_constant_00388;  // 渲染常量指针
    previous_node[9] = 4;                    // 渲染类型标识
    previous_node[10] = render_handler;      // 渲染处理函数指针
    return;
}





/**
 * 注册音频系统组件
 * 在系统注册表中注册音频系统组件，包含特定的音频处理参数
 */
void register_audio_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t null_parameter;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    null_parameter = 0;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &audio_system_identifier_01050, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&audio_system_identifier_01050, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置音频系统组件参数
    previous_node[6] = 0x4b2d79e470ee4e2c;  // 音频系统标识符
    previous_node[7] = 0x9c552acd3ed5548d;  // 校验值
    previous_node[8] = &audio_constant_003a0;  // 音频常量指针
    previous_node[9] = 0;                    // 优先级
    previous_node[10] = null_parameter;     // 额外参数
    return;
}





/**
 * 注册网络系统组件
 * 在系统注册表中注册网络系统组件，包含特定的网络处理函数和参数
 */
void register_network_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void *network_handler;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    network_handler = network_handler_25d270;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &network_system_identifier_01028, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&network_system_identifier_01028, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置网络系统组件参数
    previous_node[6] = 0x49086ba08ab981a7;  // 网络系统标识符
    previous_node[7] = 0xa9191d34ad910696;  // 校验值
    previous_node[8] = &network_constant_003b8;  // 网络常量指针
    previous_node[9] = 0;                    // 优先级
    previous_node[10] = network_handler;    // 网络处理函数指针
    return;
}





/**
 * 注册物理系统组件
 * 在系统注册表中注册物理系统组件，包含特定的物理处理参数
 */
void register_physics_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t null_parameter;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    null_parameter = 0;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &physics_system_identifier_01000, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&physics_system_identifier_01000, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置物理系统组件参数
    previous_node[6] = 0x402feffe4481676e;  // 物理系统标识符
    previous_node[7] = 0xd4c2151109de93a0;  // 校验值
    previous_node[8] = &physics_constant_003d0;  // 物理常量指针
    previous_node[9] = 0;                    // 优先级
    previous_node[10] = null_parameter;     // 额外参数
    return;
}





/**
 * 注册内存管理系统组件
 * 在系统注册表中注册内存管理系统组件，包含特定的内存处理函数和参数
 */
void register_memory_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    void *memory_handler;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    memory_handler = memory_handler_0868c0;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &memory_system_identifier_00fd8, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&memory_system_identifier_00fd8, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置内存管理系统组件参数
    previous_node[6] = 0x4384dcc4b6d3f417;  // 内存系统标识符
    previous_node[7] = 0x92a15d52fe2679bd;  // 校验值
    previous_node[8] = &memory_constant_003e8;  // 内存常量指针
    previous_node[9] = 0;                    // 优先级
    previous_node[10] = memory_handler;      // 内存处理函数指针
    return;
}





/**
 * 注册文件系统组件
 * 在系统注册表中注册文件系统组件，包含特定的文件处理参数
 */
void register_file_system_component(void)
{
    char component_flag;
    uint64_t *registry_root;
    int compare_result;
    int64_t *system_manager;
    int64_t allocation_size;
    uint64_t *current_node;
    uint64_t *previous_node;
    uint64_t *next_node;
    uint64_t *new_node;
    uint64_t null_parameter;
    
    system_manager = (int64_t *)get_system_manager();
    registry_root = (uint64_t *)*system_manager;
    component_flag = *(char *)((int64_t)registry_root[1] + 0x19);
    null_parameter = 0;
    previous_node = registry_root;
    current_node = (uint64_t *)registry_root[1];
    
    // 在注册表中查找合适的位置
    while (component_flag == '\0') {
        compare_result = memcmp(current_node + 4, &file_system_identifier_00fb0, 0x10);
        if (compare_result < 0) {
            next_node = (uint64_t *)current_node[2];
            current_node = previous_node;
        } else {
            next_node = (uint64_t *)*current_node;
        }
        previous_node = current_node;
        current_node = next_node;
        component_flag = *(char *)((int64_t)next_node + 0x19);
    }
    
    // 如果需要创建新节点
    if ((previous_node == registry_root) || (compare_result = memcmp(&file_system_identifier_00fb0, previous_node + 4, 0x10), compare_result < 0)) {
        allocation_size = allocate_registry_node(system_manager);
        insert_registry_node(system_manager, &new_node, previous_node, allocation_size + 0x20, allocation_size);
        previous_node = new_node;
    }
    
    // 设置文件系统组件参数
    previous_node[6] = 0x4140994454d56503;  // 文件系统标识符
    previous_node[7] = 0x399eced9bb5517ad;  // 校验值
    previous_node[8] = &file_constant_00400;  // 文件常量指针
    previous_node[9] = 0;                    // 优先级
    previous_node[10] = null_parameter;     // 额外参数
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18003ed10(void)
void FUN_18003ed10(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x1b;
  strcpy_s(auStack_88,0x80,&UNK_180a2ac10,in_R9,0xfffffffffffffffe);
  _DAT_180c9246c = FUN_180623800(&puStack_a0);
  return;
}



int FUN_18003eda0(void)

{
  longlong lVar1;
  
  FUN_1804777d0();
  lVar1 = FUN_1808fc7d0(FUN_180942890);
  return (lVar1 != 0) - 1;
}



int FUN_18003edc0(void)

{
  longlong lVar1;
  undefined1 auStackX_8 [32];
  
  auStackX_8[0] = 1;
  FUN_180477890(&DAT_180c92490,auStackX_8);
  lVar1 = FUN_1808fc7d0(FUN_1809428e0);
  return (lVar1 != 0) - 1;
}



int FUN_18003edf0(void)

{
  longlong lVar1;
  undefined1 auStackX_8 [32];
  
  auStackX_8[0] = 0;
  FUN_180477890(&DAT_180c92480,auStackX_8);
  lVar1 = FUN_1808fc7d0(FUN_180942930);
  return (lVar1 != 0) - 1;
}



int FUN_18003ee20(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1808fc7d0(FUN_180942a20);
  return (lVar1 != 0) - 1;
}



int FUN_18003ee40(void)

{
  longlong lVar1;
  
  FUN_1803f2eb0(0x180d49d50);
  lVar1 = FUN_1808fc7d0(FUN_1809429f0);
  return (lVar1 != 0) - 1;
}





// 函数: void FUN_18003ee90(void)
void FUN_18003ee90(void)

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
  pcStackX_18 = FUN_18007fcd0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_1809fc740,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_1809fc740,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4fc124d23d41985f;
  puVar7[7] = 0xe2f4a30d6e6ae482;
  puVar7[8] = &UNK_18098c790;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_18003ef90(void)
void FUN_18003ef90(void)

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
    iVar3 = memcmp(puVar6 + 4,&DAT_1809fc768,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_1809fc768,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4770584fbb1df897;
  puVar7[7] = 0x47f249e43f66f2ab;
  puVar7[8] = &UNK_18098c7a0;
  puVar7[9] = 1;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_18003f090(void)
void FUN_18003f090(void)

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
    iVar3 = memcmp(puVar6 + 4,&DAT_18098c9b8,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_18098c9b8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4666df49b97e0f10;
  puVar7[7] = 0x4e4b0d63a6ad1d8f;
  puVar7[8] = &UNK_18098c7b8;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_18003f190(void)
void FUN_18003f190(void)

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
    iVar3 = memcmp(puVar6 + 4,&DAT_18098c940,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_18098c940,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x46ecbd4daf41613e;
  puVar7[7] = 0xdc42c056bbde8482;
  puVar7[8] = &UNK_18098c7c8;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_18003f290(void)
void FUN_18003f290(void)

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
    iVar3 = memcmp(puVar6 + 4,&DAT_18098c918,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_18098c918,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4c868a42644030f6;
  puVar7[7] = 0xc29193aa9d9b35b9;
  puVar7[8] = &UNK_18098c7d8;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_18003f390(void)
void FUN_18003f390(void)

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
    iVar3 = memcmp(puVar6 + 4,&DAT_18098c968,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_18098c968,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x40ea3a798283cbbb;
  puVar7[7] = 0x7f74eb2c5a7fadae;
  puVar7[8] = &UNK_18098c7f0;
  puVar7[9] = 3;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_18003f490(void)
void FUN_18003f490(void)

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
    iVar3 = memcmp(puVar6 + 4,&DAT_18098c990,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_18098c990,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x45b8d074df27d12f;
  puVar7[7] = 0x8d98f4c06880eda4;
  puVar7[8] = &UNK_18098c810;
  puVar7[9] = 3;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_18003f590(void)
void FUN_18003f590(void)

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





// 函数: void FUN_18003f690(void)
void FUN_18003f690(void)

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





// 函数: void FUN_18003f790(void)
void FUN_18003f790(void)

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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18003f890(void)
void FUN_18003f890(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x10;
  strcpy_s(auStack_88,0x80,&UNK_180a2bf10,in_R9,0xfffffffffffffffe);
  _DAT_180c924ac = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18003f920(void)
void FUN_18003f920(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0xf;
  strcpy_s(auStack_88,0x80,&DAT_180a2c1d0,in_R9,0xfffffffffffffffe);
  _DAT_180c924b0 = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18003f9b0(void)
void FUN_18003f9b0(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x19;
  strcpy_s(auStack_88,0x80,&DAT_180a2c338,in_R9,0xfffffffffffffffe);
  _DAT_180c924b4 = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18003fa40(void)
void FUN_18003fa40(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x14;
  strcpy_s(auStack_88,0x80,&DAT_180a2c510,in_R9,0xfffffffffffffffe);
  _DAT_180c924b8 = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18003fad0(void)

{
  longlong lVar1;
  undefined8 in_R9;
  
  _DAT_180bf6048 = &UNK_18098bc80;
  _DAT_180bf6050 = &DAT_180bf6060;


// 函数: void FUN_18003fbb0(void)
void FUN_18003fbb0(void)

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
    iVar3 = memcmp(puVar6 + 4,&DAT_180a2d660,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a2d660,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x46c54bc98fc3fc2a;
  puVar7[7] = 0x727b256e3af32585;
  puVar7[8] = &UNK_180a2ca90;
  puVar7[9] = 2;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_18003fcb0(void)
void FUN_18003fcb0(void)

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
    iVar3 = memcmp(puVar6 + 4,&DAT_180a2d590,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a2d590,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x41ffd0b76c1e136f;
  puVar7[7] = 0x25db30365f277abb;
  puVar7[8] = &UNK_180a2cab0;
  puVar7[9] = 2;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_18003fdb0(void)
void FUN_18003fdb0(void)

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
  pcStackX_18 = FUN_18007fcd0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_1809fc740,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_1809fc740,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4fc124d23d41985f;
  puVar7[7] = 0xe2f4a30d6e6ae482;
  puVar7[8] = &UNK_18098c790;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_18003feb0(void)
void FUN_18003feb0(void)

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
    iVar3 = memcmp(puVar6 + 4,&DAT_1809fc768,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_1809fc768,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4770584fbb1df897;
  puVar7[7] = 0x47f249e43f66f2ab;
  puVar7[8] = &UNK_18098c7a0;
  puVar7[9] = 1;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_18003ffb0(void)
void FUN_18003ffb0(void)

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
    iVar3 = memcmp(puVar6 + 4,&DAT_18098c9b8,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_18098c9b8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4666df49b97e0f10;
  puVar7[7] = 0x4e4b0d63a6ad1d8f;
  puVar7[8] = &UNK_18098c7b8;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





