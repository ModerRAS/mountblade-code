#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part040.c - 2 个函数

// 函数: void FUN_1800c89a0(uint64_t param_1,int64_t param_2)
void FUN_1800c89a0(uint64_t param_1,int64_t param_2)

{
  uint *puVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  int8_t auStack_1e8 [32];
  uint uStack_1c8;
  int32_t uStack_1b8;
  int64_t *plStack_1b0;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
  uint64_t uStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  code *pcStack_d8;
  code *pcStack_d0;
  int64_t *plStack_c8;
  int64_t *plStack_c0;
  int64_t *plStack_b8;
  int64_t *plStack_b0;
  uint64_t uStack_a8;
  int64_t *plStack_a0;
  int64_t *plStack_98;
  int64_t *plStack_90;
  int64_t *plStack_88;
  uint64_t uStack_80;
  int64_t *plStack_78;
  int64_t *plStack_70;
  int64_t *plStack_68;
  void *puStack_60;
  int8_t *puStack_58;
  int32_t uStack_50;
  int8_t auStack_48 [32];
  uint64_t uStack_28;
  
  uStack_80 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1e8;
  uVar11 = 0;
  uStack_1b8 = 0;
  plVar2 = (int64_t *)FUN_1800c0230(param_1,&plStack_c8);
  lVar6 = *plVar2;
  if (plStack_c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_c8 + 0x38))();
  }
  if (*(int64_t *)(lVar6 + 0xb8) == 0) {
    lVar7 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar7 + 0x85d8) != 0) || (*(int *)(lVar7 + 0x8908) != -1)) ||
       (*(int *)(lVar7 + 0x8b08) != 1)) {
      uStack_a8 = 0;
      (**(code **)(**(int64_t **)(lVar7 + 0x8400) + 200))
                (*(int64_t **)(lVar7 + 0x8400),0x34,1,&uStack_a8);
      *(uint64_t *)(lVar7 + 0x85d8) = 0;
      *(int32_t *)(lVar7 + 0x8908) = 0xffffffff;
      *(int32_t *)(lVar7 + 0x8b08) = 1;
      *(int *)(lVar7 + 0x82b4) = *(int *)(lVar7 + 0x82b4) + 1;
    }
  }
  else {
    plVar2 = *(int64_t **)(param_2 + 0x12690);
    plStack_1b0 = plVar2;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plVar10 = plVar2;
    if (*(char *)(param_2 + 0x126a0) != '\0') {
      plVar10 = *(int64_t **)(param_2 + 0x12688);
      if (plVar10 != (int64_t *)0x0) {
        plStack_c0 = plVar10;
        (**(code **)(*plVar10 + 0x28))(plVar10);
      }
      plStack_1b0 = plVar10;
      plStack_c0 = plVar2;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
    }
    if (plVar10 == (int64_t *)0x0) {
      puStack_60 = &processed_var_672_ptr;
      puStack_58 = auStack_48;
      auStack_48[0] = 0;
      uStack_50 = 6;
      strcpy_s(auStack_48,0x20,&rendering_buffer_2156_ptr);
      puVar3 = (uint64_t *)FUN_1800b08e0(system_resource_state,&plStack_b0,&puStack_60,0);
      plVar2 = (int64_t *)*puVar3;
      if (plVar2 != (int64_t *)0x0) {
        plStack_b8 = plVar2;
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      plStack_b8 = (int64_t *)0x0;
      plStack_1b0 = plVar2;
      if (plStack_b0 != (int64_t *)0x0) {
        (**(code **)(*plStack_b0 + 0x38))();
      }
      puStack_60 = &system_state_ptr;
      plVar10 = plVar2;
      if (plVar2 != (int64_t *)0x0) goto LAB_1800c8b2a;
    }
    else {
LAB_1800c8b2a:
      plVar2 = plStack_1b0;
      uVar9 = *(uint64_t *)(system_message_buffer + 0x1cd8);
      plVar4 = plStack_1b0;
      if (*(char *)((int64_t)plVar10 + 900) == '\0') {
        plVar4 = (int64_t *)FUN_1800bd5c0();
      }
      uStack_1c8 = 0xffffffff;
      FUN_18029d150(uVar9,0x34,plVar4);
    }
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2);
    }
  }
  uVar9 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  if (*(char *)(*(int64_t *)(lVar6 + 200) + 900) == '\0') {
    uVar5 = FUN_1800bd5c0();
  }
  else {
    uVar5 = *(uint64_t *)(lVar6 + 200);
  }
  uStack_1c8 = 0xffffffff;
  FUN_18029d150(uVar9,0x35,uVar5);
  uVar9 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  if (*(char *)(*(int64_t *)(lVar6 + 0xd8) + 900) == '\0') {
    uVar5 = FUN_1800bd5c0();
  }
  else {
    uVar5 = *(uint64_t *)(lVar6 + 0xd8);
  }
  uStack_1c8 = 0xffffffff;
  FUN_18029d150(uVar9,0x36,uVar5);
  lVar6 = *(int64_t *)(param_2 + 0x9990);
  if (lVar6 == 0) {
    uVar9 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    lVar6 = FUN_1800bd5c0();
  }
  else {
    uVar9 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  }
  uStack_1c8 = 0xffffffff;
  FUN_18029d150(uVar9,0x17,lVar6);
  lVar6 = *(int64_t *)(param_2 + 0x12420);
  uVar9 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  if ((lVar6 == 0) || (*(char *)(lVar6 + 900) == '\0')) {
    lVar6 = FUN_1800bd5c0();
  }
  uStack_1c8 = 0xffffffff;
  FUN_18029d150(uVar9,0x3f,lVar6,0x10);
  lVar6 = *(int64_t *)(param_2 + 0x123f0);
  lVar7 = *(int64_t *)(param_2 + 0x12400);
  lVar8 = *(int64_t *)(param_2 + 0x123f8);
  uVar9 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  if (lVar6 == 0) {
    lVar6 = FUN_1800bdc80();
  }
  uStack_1c8 = 0xffffffff;
  FUN_18029d150(uVar9,0x11,lVar6,0x10);
  uVar9 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  if (lVar7 == 0) {
    lVar7 = FUN_1800bd410(system_system_data_memory);
  }
  uStack_1c8 = 0xffffffff;
  FUN_18029d150(uVar9,0x12,lVar7);
  uVar9 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  if (lVar8 == 0) {
    lVar8 = FUN_1800bdc80();
  }
  uStack_1c8 = 0xffffffff;
  FUN_18029d150(uVar9,0x13,lVar8);
  lVar6 = system_system_data_memory;
  if (*(int64_t *)(system_system_data_memory + 0x298) == 0) {
    puVar3 = (uint64_t *)FUN_180095000();
    uVar9 = *puVar3;
    *puVar3 = 0;
    plStack_a0 = *(int64_t **)(lVar6 + 0x298);
    *(uint64_t *)(lVar6 + 0x298) = uVar9;
    if (plStack_a0 != (int64_t *)0x0) {
      (**(code **)(*plStack_a0 + 0x38))();
    }
    if (plStack_98 != (int64_t *)0x0) {
      (**(code **)(*plStack_98 + 0x38))();
    }
    plVar2 = *(int64_t **)(lVar6 + 0x298);
    plStack_78 = plVar2;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    FUN_1800b4e00();
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2);
    }
    lVar7 = *(int64_t *)(*(int64_t *)(lVar6 + 0x298) + 0xb8);
    puVar1 = (uint *)(lVar7 + 0x328);
    *puVar1 = *puVar1 | 0x20000000;
    FUN_1800b4e00(lVar7,*(uint64_t *)(*(int64_t *)(lVar6 + 0x298) + 0xb8),
                  *(int32_t *)(lVar6 + 0x468));
  }
  plVar2 = *(int64_t **)(lVar6 + 0x298);
  plStack_70 = plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  uStack_1b8 = 0;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  uVar9 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  if (*(char *)(plVar2[0x17] + 900) == '\0') {
    lVar6 = FUN_1800bd5c0();
  }
  else {
    lVar6 = plVar2[0x17];
  }
  uStack_1c8 = 0xffffffff;
  FUN_18029d150(uVar9,0x26,lVar6);
  uStack_1c8 = 0xffffffff;
  FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),0x19,*(uint64_t *)(param_2 + 0x9980));
  if (*(int64_t *)(param_2 + 0x9970) == 0) {
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar6 + 0x8528) != 0) || (*(int *)(lVar6 + 0x88b0) != -1)) ||
       (*(int *)(lVar6 + 0x8ab0) != 0x30)) {
      uStack_168 = 0;
      (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x40))
                (*(int64_t **)(lVar6 + 0x8400),0x1e,1,&uStack_168);
      (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x218))
                (*(int64_t **)(lVar6 + 0x8400),0x1e,1,&uStack_168);
      *(uint64_t *)(lVar6 + 0x8528) = 0;
      *(int32_t *)(lVar6 + 0x88b0) = 0xffffffff;
      *(int32_t *)(lVar6 + 0x8ab0) = 0x30;
      *(int *)(lVar6 + 0x82b4) = *(int *)(lVar6 + 0x82b4) + 1;
    }
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar6 + 0x8530) == 0) && (*(int *)(lVar6 + 0x88b4) == -1)) &&
       (*(int *)(lVar6 + 0x8ab4) == 0x30)) goto LAB_1800c9185;
    uStack_160 = 0;
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x40))
              (*(int64_t **)(lVar6 + 0x8400),0x1f,1,&uStack_160);
    puVar3 = &uStack_160;
LAB_1800c914a:
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x218))
              (*(int64_t **)(lVar6 + 0x8400),0x1f,1,puVar3);
    *(uint64_t *)(lVar6 + 0x8530) = 0;
    *(int32_t *)(lVar6 + 0x8ab4) = 0x30;
    *(int32_t *)(lVar6 + 0x88b4) = 0xffffffff;
  }
  else {
    uStack_1c8 = 0xffffffff;
    if (*(ushort *)(*(int64_t *)(param_2 + 0x9970) + 0x332) < 6) {
      FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),0x1e);
      lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
      if (((*(int64_t *)(lVar6 + 0x8530) == 0) && (*(int *)(lVar6 + 0x88b4) == -1)) &&
         (*(int *)(lVar6 + 0x8ab4) == 0x30)) goto LAB_1800c9185;
      uStack_170 = 0;
      (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x40))
                (*(int64_t **)(lVar6 + 0x8400),0x1f,1,&uStack_170);
      puVar3 = &uStack_170;
      goto LAB_1800c914a;
    }
    FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),0x1f);
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar6 + 0x8528) == 0) && (*(int *)(lVar6 + 0x88b0) == -1)) &&
       (*(int *)(lVar6 + 0x8ab0) == 0x30)) goto LAB_1800c9185;
    uStack_178 = 0;
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x40))
              (*(int64_t **)(lVar6 + 0x8400),0x1e,1,&uStack_178);
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x218))
              (*(int64_t **)(lVar6 + 0x8400),0x1e,1,&uStack_178);
    *(uint64_t *)(lVar6 + 0x8528) = 0;
    *(int32_t *)(lVar6 + 0x88b0) = 0xffffffff;
    *(int32_t *)(lVar6 + 0x8ab0) = 0x30;
  }
  *(int *)(lVar6 + 0x82b4) = *(int *)(lVar6 + 0x82b4) + 1;
LAB_1800c9185:
  lVar6 = system_system_data_memory;
  if (*(int64_t *)(system_system_data_memory + 0xa0) == 0) {
    puVar3 = (uint64_t *)FUN_1800c1420();
    uVar9 = *puVar3;
    *puVar3 = 0;
    plStack_90 = *(int64_t **)(lVar6 + 0xa0);
    *(uint64_t *)(lVar6 + 0xa0) = uVar9;
    if (plStack_90 != (int64_t *)0x0) {
      (**(code **)(*plStack_90 + 0x38))();
    }
    if (plStack_88 != (int64_t *)0x0) {
      (**(code **)(*plStack_88 + 0x38))();
    }
    plVar2 = *(int64_t **)(lVar6 + 0xa0);
    plStack_68 = plVar2;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    FUN_1800b4e00();
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2);
    }
  }
  uStack_e8 = 0;
  uStack_e0 = 0;
  pcStack_d8 = (code *)0x0;
  pcStack_d0 = _guard_check_icall;
  FUN_18023c450(*(uint64_t *)(lVar6 + 0xa0),0,*(int32_t *)(lVar6 + 0x468),&uStack_e8);
  if (pcStack_d8 != (code *)0x0) {
    (*pcStack_d8)(&uStack_e8,0,0);
  }
  lVar6 = *(int64_t *)(lVar6 + 0xa0);
  uVar9 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  if (*(char *)(lVar6 + 900) == '\0') {
    lVar6 = FUN_1800bd5c0();
  }
  uStack_1c8 = 0xffffffff;
  FUN_18029d150(uVar9,0x22,lVar6,0x10);
  lVar6 = FUN_1800bd790(system_system_data_memory);
  uVar9 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  if (*(char *)(lVar6 + 900) == '\0') {
    lVar6 = FUN_1800bd5c0();
  }
  uStack_1c8 = 0xffffffff;
  FUN_18029d150(uVar9,0x40,lVar6);
  if (*(char *)(param_2 + 0x129c1) == '\0') {
    if ((*(int64_t *)(param_2 + 0x12408) == 0) ||
       (*(char *)(*(int64_t *)(param_2 + 0x12408) + 900) == '\0')) {
      uVar9 = FUN_1800bd5c0();
    }
    else {
      uVar9 = *(uint64_t *)(param_2 + 0x12408);
    }
  }
  else {
    uVar9 = *(uint64_t *)(param_2 + 0x12738);
  }
  uStack_1c8 = 0xffffffff;
  FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),0x28,uVar9);
  if ((*(int64_t *)(param_2 + 0x12410) == 0) ||
     (*(char *)(*(int64_t *)(param_2 + 0x12410) + 900) == '\0')) {
    uVar9 = FUN_1800be610();
  }
  else {
    uVar9 = *(uint64_t *)(param_2 + 0x12410);
  }
  uStack_1c8 = 0xffffffff;
  FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),0x29,uVar9);
  lVar6 = system_main_module_state;
  if ((*(int *)(param_2 + 0x124bc) == 0) || (*(char *)(param_2 + 0x12c08) == '\0')) {
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_148 = 0;
    plVar2 = *(int64_t **)(lVar6 + 0x8400);
    (**(code **)(*plVar2 + 0x40))(plVar2,0x50,1,&uStack_148);
    plVar2 = *(int64_t **)(lVar6 + 0x8400);
    (**(code **)(*plVar2 + 0x218))(plVar2,0x50,1,&uStack_148);
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_140 = 0;
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x40))
              (*(int64_t **)(lVar6 + 0x8400),0x51,1,&uStack_140);
    puVar3 = &uStack_140;
  }
  else {
    lVar7 = *(int64_t *)(param_2 + 0x9830);
    lVar8 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_158 = uVar11;
    if ((lVar7 != 0) &&
       (*(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar7 != -0x10)) {
      *(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
      uStack_158 = *(uint64_t *)(lVar7 + 0x18);
    }
    plVar2 = *(int64_t **)(lVar8 + 0x8400);
    (**(code **)(*plVar2 + 0x40))(plVar2,0x50,1,&uStack_158);
    plVar2 = *(int64_t **)(lVar8 + 0x8400);
    (**(code **)(*plVar2 + 0x218))(plVar2,0x50,1,&uStack_158);
    lVar8 = system_main_module_state;
    lVar7 = *(int64_t *)(param_2 + 0x9838);
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_150 = uVar11;
    if ((lVar7 != 0) &&
       (*(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar7 != -0x10)) {
      *(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(lVar8 + 0x224);
      uStack_150 = *(uint64_t *)(lVar7 + 0x18);
    }
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x40))
              (*(int64_t **)(lVar6 + 0x8400),0x51,1,&uStack_150);
    puVar3 = &uStack_150;
  }
  (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x218))
            (*(int64_t **)(lVar6 + 0x8400),0x51,1,puVar3);
  lVar7 = system_main_module_state;
  lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (*(int *)(param_2 + 0x124bc) == 0) {
    uStack_190 = 0;
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 200))
              (*(int64_t **)(lVar6 + 0x8400),0x53,1,&uStack_190);
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x40))
              (*(int64_t **)(lVar6 + 0x8400),0x53,1,&uStack_190);
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x218))
              (*(int64_t **)(lVar6 + 0x8400),0x53,1,&uStack_190);
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_188 = 0;
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 200))
              (*(int64_t **)(lVar6 + 0x8400),0x54,1,&uStack_188);
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x40))
              (*(int64_t **)(lVar6 + 0x8400),0x54,1,&uStack_188);
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x218))
              (*(int64_t **)(lVar6 + 0x8400),0x54,1,&uStack_188);
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_180 = 0;
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 200))
              (*(int64_t **)(lVar6 + 0x8400),0x52,1,&uStack_180);
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x40))
              (*(int64_t **)(lVar6 + 0x8400),0x52,1,&uStack_180);
    puVar3 = &uStack_180;
  }
  else {
    lVar8 = *(int64_t *)(param_2 + 0x9840);
    uStack_1a8 = uVar11;
    if ((lVar8 != 0) &&
       (*(int32_t *)(lVar8 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar8 != -0x10)) {
      *(int32_t *)(lVar8 + 0x16c) = *(int32_t *)(lVar7 + 0x224);
      uStack_1a8 = *(uint64_t *)(lVar8 + 0x18);
    }
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 200))
              (*(int64_t **)(lVar6 + 0x8400),0x53,1,&uStack_1a8);
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x40))
              (*(int64_t **)(lVar6 + 0x8400),0x53,1,&uStack_1a8);
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x218))
              (*(int64_t **)(lVar6 + 0x8400),0x53,1,&uStack_1a8);
    lVar8 = system_main_module_state;
    lVar6 = *(int64_t *)(param_2 + 0x9848);
    lVar7 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_1a0 = uVar11;
    if ((lVar6 != 0) &&
       (*(int32_t *)(lVar6 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar6 != -0x10)) {
      *(int32_t *)(lVar6 + 0x16c) = *(int32_t *)(lVar8 + 0x224);
      uStack_1a0 = *(uint64_t *)(lVar6 + 0x18);
    }
    (**(code **)(**(int64_t **)(lVar7 + 0x8400) + 200))
              (*(int64_t **)(lVar7 + 0x8400),0x54,1,&uStack_1a0);
    (**(code **)(**(int64_t **)(lVar7 + 0x8400) + 0x40))
              (*(int64_t **)(lVar7 + 0x8400),0x54,1,&uStack_1a0);
    (**(code **)(**(int64_t **)(lVar7 + 0x8400) + 0x218))
              (*(int64_t **)(lVar7 + 0x8400),0x54,1,&uStack_1a0);
    lVar8 = system_main_module_state;
    lVar7 = *(int64_t *)(param_2 + 0x9828);
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_198 = uVar11;
    if ((lVar7 != 0) &&
       (*(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar7 != -0x10)) {
      *(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(lVar8 + 0x224);
      uStack_198 = *(uint64_t *)(lVar7 + 0x18);
    }
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 200))
              (*(int64_t **)(lVar6 + 0x8400),0x52,1,&uStack_198);
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x40))
              (*(int64_t **)(lVar6 + 0x8400),0x52,1,&uStack_198);
    puVar3 = &uStack_198;
  }
  (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x218))
            (*(int64_t **)(lVar6 + 0x8400),0x52,1,puVar3);
  lVar6 = system_main_module_state;
  if ((*(int *)(param_2 + 0x124b8) == 0) || (*(char *)(param_2 + 0x12c08) == '\0')) {
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_120 = 0;
    plVar2 = *(int64_t **)(lVar6 + 0x8400);
    (**(code **)(*plVar2 + 0x40))(plVar2,0x5a,1,&uStack_120);
    plVar2 = *(int64_t **)(lVar6 + 0x8400);
    (**(code **)(*plVar2 + 0x218))(plVar2,0x5a,1,&uStack_120);
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_118 = 0;
    plVar2 = *(int64_t **)(lVar6 + 0x8400);
    (**(code **)(*plVar2 + 200))(plVar2,0x5b,1,&uStack_118);
    plVar2 = *(int64_t **)(lVar6 + 0x8400);
    (**(code **)(*plVar2 + 0x40))(plVar2,0x5b,1,&uStack_118);
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_110 = 0;
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 200))
              (*(int64_t **)(lVar6 + 0x8400),0x5c,1,&uStack_110);
    puVar3 = &uStack_110;
  }
  else {
    lVar7 = *(int64_t *)(param_2 + 0x9738);
    lVar8 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_138 = uVar11;
    if ((lVar7 != 0) &&
       (*(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar7 != -0x10)) {
      *(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
      uStack_138 = *(uint64_t *)(lVar7 + 0x18);
    }
    plVar2 = *(int64_t **)(lVar8 + 0x8400);
    (**(code **)(*plVar2 + 0x40))(plVar2,0x5a,1,&uStack_138);
    plVar2 = *(int64_t **)(lVar8 + 0x8400);
    (**(code **)(*plVar2 + 0x218))(plVar2,0x5a,1,&uStack_138);
    lVar8 = system_main_module_state;
    lVar6 = *(int64_t *)(param_2 + 0x9740);
    lVar7 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_130 = uVar11;
    if ((lVar6 != 0) &&
       (*(int32_t *)(lVar6 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar6 != -0x10)) {
      *(int32_t *)(lVar6 + 0x16c) = *(int32_t *)(lVar8 + 0x224);
      uStack_130 = *(uint64_t *)(lVar6 + 0x18);
    }
    plVar2 = *(int64_t **)(lVar7 + 0x8400);
    (**(code **)(*plVar2 + 200))(plVar2,0x5b,1,&uStack_130);
    plVar2 = *(int64_t **)(lVar7 + 0x8400);
    (**(code **)(*plVar2 + 0x40))(plVar2,0x5b,1,&uStack_130);
    lVar8 = system_main_module_state;
    lVar7 = *(int64_t *)(param_2 + 0x9748);
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_128 = uVar11;
    if ((lVar7 != 0) &&
       (*(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar7 != -0x10)) {
      *(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(lVar8 + 0x224);
      uStack_128 = *(uint64_t *)(lVar7 + 0x18);
    }
    (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 200))
              (*(int64_t **)(lVar6 + 0x8400),0x5c,1,&uStack_128);
    puVar3 = &uStack_128;
  }
  (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x40))
            (*(int64_t **)(lVar6 + 0x8400),0x5c,1,puVar3);
  lVar6 = system_main_module_state;
  if (((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0) && (*(int *)(param_2 + 0x9a34) != 0)) {
    lVar7 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar8 = *(int64_t *)(param_2 + 0x9730);
    uStack_108 = uVar11;
    if ((lVar8 != 0) &&
       (*(int32_t *)(lVar8 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar8 != -0x10)) {
      *(int32_t *)(lVar8 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
      uStack_108 = *(uint64_t *)(lVar8 + 0x18);
    }
    plVar2 = *(int64_t **)(lVar7 + 0x8400);
    (**(code **)(*plVar2 + 0x40))(plVar2,0x49,1,&uStack_108);
    plVar2 = *(int64_t **)(lVar7 + 0x8400);
    (**(code **)(*plVar2 + 0x218))(plVar2,0x49,1,&uStack_108);
    if (((*(int *)(param_2 + 0x124c0) == 0) || (*(char *)(param_2 + 0x12c08) == '\0')) ||
       (*(int64_t *)(param_2 + 0x9728) == 0)) {
      lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
      uStack_100 = 0;
      plVar2 = *(int64_t **)(lVar6 + 0x8400);
      (**(code **)(*plVar2 + 200))(plVar2,0x4c,1,&uStack_100);
      plVar2 = *(int64_t **)(lVar6 + 0x8400);
      (**(code **)(*plVar2 + 0x40))(plVar2,0x4c,1,&uStack_100);
    }
    else {
      uStack_1c8 = uStack_1c8 & 0xffffff00;
      func_0x00018029db20(*(uint64_t *)(system_message_buffer + 0x1cd8),0x4c,
                          *(int64_t *)(param_2 + 0x9728),0x30);
    }
  }
  lVar8 = system_main_module_state;
  lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
  lVar7 = *(int64_t *)(param_2 + 0x98c0);
  uStack_f8 = uVar11;
  if ((lVar7 != 0) &&
     (*(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar7 != -0x10)) {
    *(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(lVar8 + 0x224);
    uStack_f8 = *(uint64_t *)(lVar7 + 0x18);
  }
  plVar2 = *(int64_t **)(lVar6 + 0x8400);
  (**(code **)(*plVar2 + 200))(plVar2,0x56,1,&uStack_f8);
  plVar2 = *(int64_t **)(lVar6 + 0x8400);
  (**(code **)(*plVar2 + 0x40))(plVar2,0x56,1,&uStack_f8);
  uVar9 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  lVar6 = *(int64_t *)(param_2 + 0x12418);
  if (lVar6 == 0) {
    lVar6 = FUN_1800bdfe0(system_system_data_memory);
  }
  uStack_1c8 = 0xffffffff;
  FUN_18029d150(uVar9,0x23,lVar6);
  uStack_1c8 = 0xffffffff;
  FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),0x32,*(uint64_t *)(param_2 + 0x12430));
  uVar9 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  lVar6 = *(int64_t *)(param_2 + 0x12438);
  if (lVar6 == 0) {
    lVar6 = FUN_1800bd410(system_system_data_memory);
  }
  uStack_1c8 = 0xffffffff;
  FUN_18029d150(uVar9,0x30,lVar6);
  uVar9 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  lVar6 = *(int64_t *)(param_2 + 0x11ed0);
  if (lVar6 == 0) {
    lVar6 = FUN_1800be610();
  }
  uStack_1c8 = 0xffffffff;
  FUN_18029d150(uVar9,0x27,lVar6);
  uVar9 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  lVar6 = *(int64_t *)(param_2 + 0x12440);
  if (lVar6 == 0) {
    lVar6 = FUN_1800bd410(system_system_data_memory);
  }
  uStack_1c8 = 0xffffffff;
  FUN_18029d150(uVar9,0x31,lVar6);
  uVar9 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  lVar6 = *(int64_t *)(param_2 + 0x12448);
  if (lVar6 == 0) {
    lVar6 = FUN_1800bd410(system_system_data_memory);
  }
  uStack_1c8 = 0xffffffff;
  FUN_18029d150(uVar9,0x33,lVar6);
  lVar8 = system_main_module_state;
  lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
  lVar7 = *(int64_t *)(param_2 + 39000);
  if ((lVar7 != 0) &&
     (*(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar7 != -0x10)) {
    *(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(lVar8 + 0x224);
    uVar11 = *(uint64_t *)(lVar7 + 0x18);
  }
  plVar2 = *(int64_t **)(lVar6 + 0x8400);
  uStack_f0 = uVar11;
  (**(code **)(*plVar2 + 200))(plVar2,0x55,1,&uStack_f0);
  plVar2 = *(int64_t **)(lVar6 + 0x8400);
  (**(code **)(*plVar2 + 0x40))(plVar2,0x55,1,&uStack_f0);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_1e8);
}






// 函数: void FUN_1800c9eb0(uint64_t param_1,int64_t param_2)
void FUN_1800c9eb0(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint in_EAX;
  uint uVar2;
  int iVar3;
  uint64_t *puVar4;
  int iVar5;
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  int64_t *plStackX_10;
  uint64_t uVar8;
  void *puStack_60;
  int64_t lStack_58;
  uint uStack_50;
  int32_t uStack_48;
  
  uVar8 = 0xfffffffffffffffe;
  if (((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0) &&
     ((((*(int *)(param_2 + 0x9a34) != 0 || (*(int *)(param_2 + 0x124bc) != 0)) ||
       (*(int *)(param_2 + 0x124b8) != 0)) || (*(int *)(param_2 + 0x124c0) != 0)))) {
    auVar6._0_4_ = *(float *)(param_2 + 0x11c20) * 0.0625;
    iVar3 = (int)auVar6._0_4_;
    if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar6._0_4_)) {
      auVar6._4_4_ = auVar6._0_4_;
      auVar6._8_8_ = 0;
      uVar2 = movmskps(in_EAX,auVar6);
      in_EAX = uVar2 & 1 ^ 1;
      auVar6._0_4_ = (float)(int)(iVar3 + in_EAX);
    }
    auVar7._0_4_ = *(float *)(param_2 + 0x11c24) * 0.0625;
    iVar3 = (int)auVar7._0_4_;
    if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar7._0_4_)) {
      auVar7._4_4_ = auVar7._0_4_;
      auVar7._8_8_ = 0;
      uVar2 = movmskps(in_EAX,auVar7);
      auVar7._0_4_ = (float)(int)(iVar3 + (uVar2 & 1 ^ 1));
    }
    iVar3 = (int)(int64_t)auVar7._0_4_ * (int)(int64_t)auVar6._0_4_;
    SystemCore_EncryptionEngine0(&puStack_60,param_2 + 0x3520);
    uVar2 = uStack_50 + 0x18;
    CoreMemoryPoolProcessor(&puStack_60,uVar2);
    puVar4 = (uint64_t *)((uint64_t)uStack_50 + lStack_58);
    *puVar4 = 0x5f70616d766e655f;
    puVar4[1] = 0x69745f65626f7270;
    puVar4[2] = 0x65626f72705f656c;
    *(int8_t *)(puVar4 + 3) = 0;
    uStack_50 = uVar2;
    puVar4 = (uint64_t *)
             FUN_1800b0a10(puVar4,&plStackX_10,0xffffffff,&puStack_60,5,0,0x2b,1,iVar3 * 0x10,0,1,1,
                           uVar8);
    uVar8 = *puVar4;
    *puVar4 = 0;
    plVar1 = *(int64_t **)(param_2 + 0x9730);
    *(uint64_t *)(param_2 + 0x9730) = uVar8;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    if (plStackX_10 != (int64_t *)0x0) {
      (**(code **)(*plStackX_10 + 0x38))();
    }
    puStack_60 = &system_data_buffer_ptr;
    if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_58 = 0;
    uStack_48 = 0;
    puStack_60 = &system_state_ptr;
    SystemCore_EncryptionEngine0(&puStack_60,param_2 + 0x3520);
    uVar2 = uStack_50 + 0x1a;
    CoreMemoryPoolProcessor(&puStack_60,uVar2);
    puVar4 = (uint64_t *)((uint64_t)uStack_50 + lStack_58);
    *puVar4 = 0x69745f6c61636564;
    puVar4[1] = 0x6369646e695f656c;
    puVar4[2] = 0x65666675625f7365;
    *(int16_t *)(puVar4 + 3) = 0x5f72;
    *(int8_t *)((int64_t)puVar4 + 0x1a) = 0;
    iVar3 = iVar3 * 0x80;
    uStack_50 = uVar2;
    puVar4 = (uint64_t *)
             FUN_1800b0a10(puVar4,&plStackX_10,0xffffffff,&puStack_60,5,0,0x2c,2,iVar3,0,1,1);
    uVar8 = *puVar4;
    *puVar4 = 0;
    plVar1 = *(int64_t **)(param_2 + 0x9738);
    *(uint64_t *)(param_2 + 0x9738) = uVar8;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    if (plStackX_10 != (int64_t *)0x0) {
      (**(code **)(*plStackX_10 + 0x38))();
    }
    puStack_60 = &system_data_buffer_ptr;
    if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_58 = 0;
    uStack_48 = 0;
    puStack_60 = &system_state_ptr;
    SystemCore_EncryptionEngine0(&puStack_60,param_2 + 0x3520);
    uVar2 = uStack_50 + 0x11;
    CoreMemoryPoolProcessor(&puStack_60,uVar2);
    puVar4 = (uint64_t *)((uint64_t)uStack_50 + lStack_58);
    *puVar4 = 0x696c5f746e696f70;
    puVar4[1] = 0x656c69745f746867;
    *(int16_t *)(puVar4 + 2) = 0x73;
    uStack_50 = uVar2;
    puVar4 = (uint64_t *)
             FUN_1800b0a10(puVar4,&plStackX_10,0xffffffff,&puStack_60,5,0,0x2c,2,iVar3,0,1,1);
    uVar8 = *puVar4;
    *puVar4 = 0;
    plVar1 = *(int64_t **)(param_2 + 0x9830);
    *(uint64_t *)(param_2 + 0x9830) = uVar8;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    if (plStackX_10 != (int64_t *)0x0) {
      (**(code **)(*plStackX_10 + 0x38))();
    }
    puStack_60 = &system_data_buffer_ptr;
    if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_58 = 0;
    uStack_48 = 0;
    puStack_60 = &system_state_ptr;
    SystemCore_EncryptionEngine0(&puStack_60,param_2 + 0x3520);
    iVar5 = uStack_50 + 0x18;
    CoreMemoryPoolProcessor(&puStack_60,iVar5);
    puVar4 = (uint64_t *)((uint64_t)uStack_50 + lStack_58);
    *puVar4 = 0x696c5f746e696f70;
    puVar4[1] = 0x656c69745f746867;
    puVar4[2] = 0x6874706544775f73;
    *(int8_t *)(puVar4 + 3) = 0;
    uStack_50 = iVar5;
    puVar4 = (uint64_t *)
             FUN_1800b0a10(puVar4,&plStackX_10,0xffffffff,&puStack_60,5,0,0x2c,2,iVar3,0,1,1);
    uVar8 = *puVar4;
    *puVar4 = 0;
    plVar1 = *(int64_t **)(param_2 + 0x9838);
    *(uint64_t *)(param_2 + 0x9838) = uVar8;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    if (plStackX_10 != (int64_t *)0x0) {
      (**(code **)(*plStackX_10 + 0x38))();
    }
    puStack_60 = &system_data_buffer_ptr;
    if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




