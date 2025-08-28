#include "TaleWorlds.Native.Split.h"
// 01_initialization_part005.c - 游戏系统注册模块 (26个函数)
// 函数: void register_audio_system(void)
// 功能: 注册音频系统到游戏引擎
// 参数: 无
// 返回: 无
void register_audio_system(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  uint64_t stack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  stack_special_x_18 = 0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&audio_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&audio_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4140994454d56503;
  puVar7[7] = 0x399eced9bb5517ad;
  puVar7[8] = &audio_vtable_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void register_physics_system(void)
// 功能: 注册物理系统到游戏引擎
// 参数: 无
// 返回: 无
void register_physics_system(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = function_25cc00;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&physics_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&physics_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x43330a43fcdb3653;
  puVar7[7] = 0xdcfdc333a769ec93;
  puVar7[8] = &physics_vtable_ptr;
  puVar7[9] = 1;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void register_input_system(void)
// 功能: 注册输入系统到游戏引擎
// 参数: 无
// 返回: 无
void register_input_system(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = function_25c000;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&input_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&input_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x431d7c8d7c475be2;
  puVar7[7] = 0xb97f048d2153e1b0;
  puVar7[8] = &input_vtable_ptr;
  puVar7[9] = 4;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void register_network_system(void)
// 功能: 注册网络系统到游戏引擎
// 参数: 无
// 返回: 无
void register_network_system(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  uint64_t stack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  stack_special_x_18 = 0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&network_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&network_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4b2d79e470ee4e2c;
  puVar7[7] = 0x9c552acd3ed5548d;
  puVar7[8] = &network_vtable_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void register_render_system(void)
// 功能: 注册渲染系统到游戏引擎
// 参数: 无
// 返回: 无
void register_render_system(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = function_25d270;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&render_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&render_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x49086ba08ab981a7;
  puVar7[7] = 0xa9191d34ad910696;
  puVar7[8] = &render_vtable_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void register_ui_system(void)
// 功能: 注册UI系统到游戏引擎
// 参数: 无
// 返回: 无
void register_ui_system(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  uint64_t stack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  stack_special_x_18 = 0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&ui_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&ui_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x402feffe4481676e;
  puVar7[7] = 0xd4c2151109de93a0;
  puVar7[8] = &ui_vtable_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void register_resource_manager(void)
// 功能: 注册资源管理器到游戏引擎
// 参数: 无
// 返回: 无
void register_resource_manager(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  void *pstack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pstack_special_x_18 = &rendering_buffer_2048_ptr;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&resource_manager_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&resource_manager_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4384dcc4b6d3f417;
  puVar7[7] = 0x92a15d52fe2679bd;
  puVar7[8] = &resource_vtable_ptr;
  puVar7[9] = 0;
  puVar7[10] = pstack_special_x_18;
  return;
}
// 函数: void register_scene_manager(void)
// 功能: 注册场景管理器到游戏引擎
// 参数: 无
// 返回: 无
void register_scene_manager(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  uint64_t stack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  stack_special_x_18 = 0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&audio_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&audio_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4140994454d56503;
  puVar7[7] = 0x399eced9bb5517ad;
  puVar7[8] = &audio_vtable_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void initialize_shader_table(void)
// 功能: 初始化着色器表，计算着色器相关参数
// 参数: 无
// 返回: 无
void initialize_shader_table(void)
{
  uint64_t uVar1;
  float *pfVar2;
  int iVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  int iVar7;
  float *pfVar8;
  float fVar9;
  pfVar8 = (float *)0x180c8aa70;
  uVar6 = 0;
  iVar7 = -3;
  uVar4 = uVar6;
  do {
    if (0 < (int64_t)uVar4) {
      iVar3 = -3;
      uVar1 = uVar6;
      pfVar2 = pfVar8;
      do {
        fVar9 = 0.0;
        if (-1 < (int64_t)uVar1) {
          if ((int64_t)uVar1 < 3) {
            fVar9 = 0.75;
          }
          else {
            fVar9 = 1.0 - (float)iVar3 / (float)iVar7;
            fVar9 = SQRT(fVar9) * fVar9;
          }
        }
        *pfVar2 = fVar9;
        iVar3 = iVar3 + 1;
        pfVar2 = pfVar2 + 1;
        uVar1 = uVar1 + 1;
      } while ((int64_t)uVar1 < (int64_t)uVar4);
    }
    iVar7 = iVar7 + 1;
    uVar4 = uVar4 + 1;
    pfVar8 = pfVar8 + 0x40;
  } while ((int64_t)pfVar8 < 0x180c8ea71);
  pfVar8 = (float *)0x180c8eb70;
  do {
    uVar5 = (int)uVar6 + 1;
    *pfVar8 = 1.0 / SQRT((float)uVar6) + 1.0 / SQRT((float)uVar6);
    pfVar8 = pfVar8 + 1;
    uVar6 = (uint64_t)uVar5;
  } while (uVar5 < 0x40);
  return;
}
// 函数: void register_animation_system(void)
// 功能: 注册动画系统到游戏引擎
// 参数: 无
// 返回: 无
void register_animation_system(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = function_25e330;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&animation_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&animation_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x45425dc186a5d575;
  puVar7[7] = 0xfab48faa65382fa5;
  puVar7[8] = &animation_vtable_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void register_particle_system(void)
// 功能: 注册粒子系统到游戏引擎
// 参数: 无
// 返回: 无
void register_particle_system(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = function_25d510;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&particle_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&particle_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x449bafe9b77ddd3c;
  puVar7[7] = 0xc160408bde99e59f;
  puVar7[8] = &particle_vtable_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void register_scripting_system(void)
// 功能: 注册脚本系统到游戏引擎
// 参数: 无
// 返回: 无
void register_scripting_system(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = function_2281a0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&scripting_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&scripting_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x406be72011d07d37;
  puVar7[7] = 0x71876af946c867ab;
  puVar7[8] = &scripting_vtable_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void register_save_system(void)
// 功能: 注册存档系统到游戏引擎
// 参数: 无
// 返回: 无
void register_save_system(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = function_2285e0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&save_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&save_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x40afa5469b6ac06d;
  puVar7[7] = 0x2f4bab01d34055a5;
  puVar7[8] = &save_vtable_ptr;
  puVar7[9] = 3;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void register_physics_system_2(void)
// 功能: 注册第二个物理系统实例到游戏引擎
// 参数: 无
// 返回: 无
void register_physics_system_2(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = function_25cc00;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&physics_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&physics_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x43330a43fcdb3653;
  puVar7[7] = 0xdcfdc333a769ec93;
  puVar7[8] = &physics_vtable_ptr;
  puVar7[9] = 1;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void register_input_system_2(void)
// 功能: 注册第二个输入系统实例到游戏引擎
// 参数: 无
// 返回: 无
void register_input_system_2(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = function_25c000;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&input_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&input_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x431d7c8d7c475be2;
  puVar7[7] = 0xb97f048d2153e1b0;
  puVar7[8] = &input_vtable_ptr;
  puVar7[9] = 4;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void register_network_system_2(void)
// 功能: 注册第二个网络系统实例到游戏引擎
// 参数: 无
// 返回: 无
void register_network_system_2(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  uint64_t stack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  stack_special_x_18 = 0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&network_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&network_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4b2d79e470ee4e2c;
  puVar7[7] = 0x9c552acd3ed5548d;
  puVar7[8] = &network_vtable_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void register_render_system_2(void)
// 功能: 注册第二个渲染系统实例到游戏引擎
// 参数: 无
// 返回: 无
void register_render_system_2(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = function_25d270;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&render_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&render_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x49086ba08ab981a7;
  puVar7[7] = 0xa9191d34ad910696;
  puVar7[8] = &render_vtable_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void register_ui_system_2(void)
// 功能: 注册第二个UI系统实例到游戏引擎
// 参数: 无
// 返回: 无
void register_ui_system_2(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  uint64_t stack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  stack_special_x_18 = 0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&ui_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&ui_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x402feffe4481676e;
  puVar7[7] = 0xd4c2151109de93a0;
  puVar7[8] = &ui_vtable_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void register_resource_manager_2(void)
// 功能: 注册第二个资源管理器实例到游戏引擎
// 参数: 无
// 返回: 无
void register_resource_manager_2(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  void *pstack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pstack_special_x_18 = &rendering_buffer_2048_ptr;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&resource_manager_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&resource_manager_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4384dcc4b6d3f417;
  puVar7[7] = 0x92a15d52fe2679bd;
  puVar7[8] = &resource_vtable_ptr;
  puVar7[9] = 0;
  puVar7[10] = pstack_special_x_18;
  return;
}
// 函数: void register_scene_manager_2(void)
// 功能: 注册第二个场景管理器实例到游戏引擎
// 参数: 无
// 返回: 无
void register_scene_manager_2(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  uint64_t stack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  stack_special_x_18 = 0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&audio_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&audio_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4140994454d56503;
  puVar7[7] = 0x399eced9bb5517ad;
  puVar7[8] = &audio_vtable_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void register_ai_system(void)
// 功能: 注册AI系统到游戏引擎
// 参数: 无
// 返回: 无
void register_ai_system(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = function_2633c0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&ai_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&ai_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x40db4257e97d3df8;
  puVar7[7] = 0x81d539e33614429f;
  puVar7[8] = &ai_vtable_ptr;
  puVar7[9] = 4;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void register_sound_system(void)
// 功能: 注册声音系统到游戏引擎
// 参数: 无
// 返回: 无
void register_sound_system(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = function_262b00;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&sound_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&sound_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4e33c4803e67a08f;
  puVar7[7] = 0x703a29a844ce399;
  puVar7[8] = &sound_vtable_ptr;
  puVar7[9] = 3;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void register_physics_system_3(void)
// 功能: 注册第三个物理系统实例到游戏引擎
// 参数: 无
// 返回: 无
void register_physics_system_3(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = function_25cc00;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&physics_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&physics_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x43330a43fcdb3653;
  puVar7[7] = 0xdcfdc333a769ec93;
  puVar7[8] = &physics_vtable_ptr;
  puVar7[9] = 1;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void register_input_system_3(void)
// 功能: 注册第三个输入系统实例到游戏引擎
// 参数: 无
// 返回: 无
void register_input_system_3(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = function_25c000;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&input_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&input_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x431d7c8d7c475be2;
  puVar7[7] = 0xb97f048d2153e1b0;
  puVar7[8] = &input_vtable_ptr;
  puVar7[9] = 4;
  puVar7[10] = pcStackX_18;
  return;
}
// 函数: void register_network_system_3(void)
// 功能: 注册第三个网络系统实例到游戏引擎
// 参数: 无
// 返回: 无
void register_network_system_3(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  uint64_t stack_special_x_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  stack_special_x_18 = 0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&network_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&network_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x4b2d79e470ee4e2c;
  puVar7[7] = 0x9c552acd3ed5548d;
  puVar7[8] = &network_vtable_ptr;
  puVar7[9] = 0;
  puVar7[10] = stack_special_x_18;
  return;
}
// 函数: void register_render_system_3(void)
// 功能: 注册第三个渲染系统实例到游戏引擎
// 参数: 无
// 返回: 无
void register_render_system_3(void)
{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *pstack_special_x_10;
  code *pcStackX_18;
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = function_25d270;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&render_system_guid,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&render_system_guid,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&pstack_special_x_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = pstack_special_x_10;
  }
  puVar7[6] = 0x49086ba08ab981a7;
  puVar7[7] = 0xa9191d34ad910696;
  puVar7[8] = &render_vtable_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}