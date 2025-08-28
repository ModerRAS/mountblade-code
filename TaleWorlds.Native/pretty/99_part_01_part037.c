#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part037.c - 2 个函数

// 函数: void FUN_1800c5600(longlong param_1)
void FUN_1800c5600(longlong param_1)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint64_t *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint64_t uVar12;
  longlong lVar13;
  int8_t auStack_2b8 [32];
  int32_t uStack_298;
  uint64_t *puStack_290;
  ulonglong uStack_288;
  int32_t uStack_280;
  uint64_t uStack_278;
  uint64_t uStack_270;
  int8_t uStack_268;
  int32_t uStack_260;
  uint64_t uStack_258;
  uint64_t uStack_250;
  uint64_t uStack_248;
  longlong *plStack_240;
  longlong lStack_238;
  longlong *plStack_230;
  longlong *plStack_228;
  longlong *plStack_220;
  longlong *plStack_218;
  longlong *plStack_210;
  longlong *plStack_208;
  longlong *plStack_200;
  longlong *plStack_1f8;
  longlong *plStack_1f0;
  longlong *plStack_1e8;
  longlong *plStack_1e0;
  longlong lStack_1d8;
  uint64_t uStack_1d0;
  uint64_t auStack_1c8 [2];
  int8_t auStack_1b8 [8];
  uint64_t uStack_1b0;
  int8_t auStack_1a0 [8];
  uint64_t uStack_198;
  void *puStack_188;
  int8_t *puStack_180;
  int32_t uStack_178;
  int8_t auStack_170 [32];
  void *puStack_150;
  int8_t *puStack_148;
  int32_t uStack_140;
  int8_t auStack_138 [32];
  void *puStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  int8_t auStack_100 [32];
  void *puStack_e0;
  int8_t *puStack_d8;
  int32_t uStack_d0;
  int8_t auStack_c8 [32];
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [32];
  void *puStack_70;
  int8_t *puStack_68;
  int32_t uStack_60;
  int8_t auStack_58 [32];
  ulonglong uStack_38;
  
  uStack_1d0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_2b8;
  lVar13 = (longlong)*(int *)(param_1 + 0x1538) * 0x248;
  uVar12 = 0;
  iVar11 = 0;
  lStack_238 = lVar13;
  lStack_1d8 = param_1;
  if (0 < *(int *)(lVar13 + 0x2378 + system_parameter_buffer)) {
    if (*(int *)(lVar13 + 0x2378 + param_1) != 0) {
      iVar11 = (*(int *)(lVar13 + 0x2378 + param_1) - 1U >> 0xc) + 1;
    }
    iVar10 = *(int *)(lVar13 + 0x2378 + param_1);
    uVar9 = iVar11 << 0xc;
    if ((*(longlong *)(param_1 + 0x1540) == 0) ||
       (*(uint *)(*(longlong *)(param_1 + 0x1540) + 0x3c) < uVar9)) {
      puStack_188 = &unknown_var_672_ptr;
      puStack_180 = auStack_170;
      auStack_170[0] = 0;
      uStack_178 = 0x11;
      strcpy_s(auStack_170,0x20,&unknown_var_1776_ptr);
      uStack_260 = 1;
      uStack_268 = 1;
      uStack_270 = 0;
      uStack_278 = CONCAT44(uStack_278._4_4_,uVar9);
      uStack_280 = 0xa0;
      uStack_288 = uStack_288 & 0xffffffff00000000;
      puStack_290 = (uint64_t *)((ulonglong)puStack_290 & 0xffffffff00000000);
      uStack_298 = 0x41;
      puVar8 = (uint64_t *)FUN_1800b0a10();
      uVar1 = *puVar8;
      *puVar8 = 0;
      plStack_230 = *(longlong **)(param_1 + 0x1540);
      *(uint64_t *)(param_1 + 0x1540) = uVar1;
      if (plStack_230 != (longlong *)0x0) {
        (**(code **)(*plStack_230 + 0x38))();
      }
      if (plStack_228 != (longlong *)0x0) {
        (**(code **)(*plStack_228 + 0x38))();
      }
      puStack_188 = &unknown_var_720_ptr;
      puStack_150 = &unknown_var_672_ptr;
      puStack_148 = auStack_138;
      auStack_138[0] = 0;
      uStack_140 = 0x1b;
      strcpy_s(auStack_138,0x20,&unknown_var_1824_ptr);
      uStack_260 = 1;
      uStack_268 = 1;
      uStack_270 = 0;
      uStack_278 = CONCAT44(uStack_278._4_4_,uVar9);
      uStack_280 = 0xa0;
      uStack_288 = uStack_288 & 0xffffffff00000000;
      puStack_290 = (uint64_t *)CONCAT44(puStack_290._4_4_,3);
      uStack_298 = 0x1061;
      puVar8 = (uint64_t *)FUN_1800b0a10();
      uVar1 = *puVar8;
      *puVar8 = 0;
      plStack_220 = *(longlong **)(param_1 + 0x1558);
      *(uint64_t *)(param_1 + 0x1558) = uVar1;
      if (plStack_220 != (longlong *)0x0) {
        (**(code **)(*plStack_220 + 0x38))();
      }
      if (plStack_218 != (longlong *)0x0) {
        (**(code **)(*plStack_218 + 0x38))();
      }
      puStack_150 = &unknown_var_720_ptr;
    }
    FUN_18029e2f0(*(uint64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(param_1 + 0x1558),2,
                  auStack_1b8);
    iVar10 = iVar10 * 0xa0;
    if (iVar11 != 0) {
      iVar11 = 0xa0000;
      if (iVar10 < 0xa0000) {
        iVar11 = iVar10;
      }
                    // WARNING: Subroutine does not return
      memcpy(uStack_1b0,*(uint64_t *)(lVar13 + 0x2380 + param_1),(longlong)iVar11);
    }
    lVar2 = *(longlong *)(param_1 + 0x1558);
    plVar3 = *(longlong **)(*(longlong *)(system_message_buffer + 0x1cd8) + 0x8400);
    pcVar4 = *(code **)(*plVar3 + 0x78);
    *(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*pcVar4)(plVar3,*(uint64_t *)(lVar2 + 0x10),0);
    lVar6 = system_main_module_state;
    lVar2 = *(longlong *)(param_1 + 0x1558);
    lVar5 = *(longlong *)(param_1 + 0x1540);
    plVar3 = *(longlong **)(*(longlong *)(system_message_buffer + 0x1cd8) + 0x8400);
    pcVar4 = *(code **)(*plVar3 + 0x170);
    *(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    uStack_288 = *(ulonglong *)(lVar2 + 0x10);
    *(int32_t *)(lVar5 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
    uStack_278 = 0;
    uStack_280 = 0;
    puStack_290 = (uint64_t *)((ulonglong)puStack_290 & 0xffffffff00000000);
    uStack_298 = 0;
    (*pcVar4)(plVar3,*(uint64_t *)(lVar5 + 0x10),0,0);
    lVar6 = system_main_module_state;
    lVar2 = *(longlong *)(system_message_buffer + 0x1cd8);
    lVar5 = *(longlong *)(param_1 + 0x1540);
    uStack_258 = uVar12;
    if ((lVar5 != 0) &&
       (*(int32_t *)(lVar5 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar5 != -0x10)) {
      *(int32_t *)(lVar5 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
      uStack_258 = *(uint64_t *)(lVar5 + 0x18);
    }
    (**(code **)(**(longlong **)(lVar2 + 0x8400) + 200))
              (*(longlong **)(lVar2 + 0x8400),0x4d,1,&uStack_258);
    (**(code **)(**(longlong **)(lVar2 + 0x8400) + 0x1f8))
              (*(longlong **)(lVar2 + 0x8400),0x4d,1,&uStack_258);
    (**(code **)(**(longlong **)(lVar2 + 0x8400) + 0x1d8))
              (*(longlong **)(lVar2 + 0x8400),0x4d,1,&uStack_258);
    (**(code **)(**(longlong **)(lVar2 + 0x8400) + 0x40))
              (*(longlong **)(lVar2 + 0x8400),0x4d,1,&uStack_258);
  }
  iVar11 = 0;
  iVar10 = 0;
  if (0 < *(int *)(lVar13 + 0x2810 + system_parameter_buffer)) {
    if (*(int *)(lVar13 + 0x2810 + param_1) != 0) {
      iVar11 = (*(int *)(lVar13 + 0x2810 + param_1) - 1U >> 0xc) + 1;
    }
    iVar7 = *(int *)(lVar13 + 0x2810 + param_1);
    uVar9 = iVar11 << 0xc;
    if ((*(longlong *)(param_1 + 0x1548) == 0) ||
       (*(uint *)(*(longlong *)(param_1 + 0x1548) + 0x3c) < uVar9)) {
      puStack_118 = &unknown_var_672_ptr;
      puStack_110 = auStack_100;
      auStack_100[0] = 0;
      uStack_108 = 0x11;
      strcpy_s(auStack_100,0x20,&unknown_var_1800_ptr);
      uStack_260 = 1;
      uStack_268 = 1;
      uStack_270 = 0;
      uStack_278 = CONCAT44(uStack_278._4_4_,uVar9);
      uStack_280 = 0x130;
      uStack_288 = uStack_288 & 0xffffffff00000000;
      puStack_290 = (uint64_t *)((ulonglong)puStack_290 & 0xffffffff00000000);
      uStack_298 = 0x41;
      puVar8 = (uint64_t *)FUN_1800b0a10();
      uVar1 = *puVar8;
      *puVar8 = 0;
      plStack_210 = *(longlong **)(param_1 + 0x1548);
      *(uint64_t *)(param_1 + 0x1548) = uVar1;
      if (plStack_210 != (longlong *)0x0) {
        (**(code **)(*plStack_210 + 0x38))();
      }
      if (plStack_208 != (longlong *)0x0) {
        (**(code **)(*plStack_208 + 0x38))();
      }
      puStack_118 = &unknown_var_720_ptr;
      puStack_e0 = &unknown_var_672_ptr;
      puStack_d8 = auStack_c8;
      auStack_c8[0] = 0;
      uStack_d0 = 0x1b;
      strcpy_s(auStack_c8,0x20,&unknown_var_1872_ptr);
      uStack_260 = 1;
      uStack_268 = 1;
      uStack_270 = 0;
      uStack_278 = CONCAT44(uStack_278._4_4_,uVar9);
      uStack_280 = 0x130;
      uStack_288 = uStack_288 & 0xffffffff00000000;
      puStack_290 = (uint64_t *)CONCAT44(puStack_290._4_4_,3);
      uStack_298 = 0x1061;
      puVar8 = (uint64_t *)FUN_1800b0a10();
      uVar1 = *puVar8;
      *puVar8 = 0;
      plStack_200 = *(longlong **)(param_1 + 0x1568);
      *(uint64_t *)(param_1 + 0x1568) = uVar1;
      if (plStack_200 != (longlong *)0x0) {
        (**(code **)(*plStack_200 + 0x38))();
      }
      if (plStack_1f8 != (longlong *)0x0) {
        (**(code **)(*plStack_1f8 + 0x38))();
      }
      puStack_e0 = &unknown_var_720_ptr;
    }
    FUN_18029e2f0(*(uint64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(param_1 + 0x1568),2,
                  auStack_1a0);
    iVar7 = iVar7 * 0x130;
    if (iVar11 != 0) {
      iVar11 = 0x130000;
      if (iVar7 < 0x130000) {
        iVar11 = iVar7;
      }
                    // WARNING: Subroutine does not return
      memcpy(uStack_198,*(uint64_t *)(lVar13 + 0x2818 + param_1),(longlong)iVar11);
    }
    lVar2 = *(longlong *)(param_1 + 0x1568);
    plVar3 = *(longlong **)(*(longlong *)(system_message_buffer + 0x1cd8) + 0x8400);
    pcVar4 = *(code **)(*plVar3 + 0x78);
    *(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*pcVar4)(plVar3,*(uint64_t *)(lVar2 + 0x10),0);
    lVar6 = system_main_module_state;
    lVar2 = *(longlong *)(param_1 + 0x1568);
    lVar5 = *(longlong *)(param_1 + 0x1548);
    plVar3 = *(longlong **)(*(longlong *)(system_message_buffer + 0x1cd8) + 0x8400);
    pcVar4 = *(code **)(*plVar3 + 0x170);
    *(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    uStack_288 = *(ulonglong *)(lVar2 + 0x10);
    *(int32_t *)(lVar5 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
    uStack_278 = 0;
    uStack_280 = 0;
    puStack_290 = (uint64_t *)((ulonglong)puStack_290 & 0xffffffff00000000);
    uStack_298 = 0;
    (*pcVar4)(plVar3,*(uint64_t *)(lVar5 + 0x10),0,0);
    lVar6 = system_main_module_state;
    lVar2 = *(longlong *)(system_message_buffer + 0x1cd8);
    lVar5 = *(longlong *)(param_1 + 0x1548);
    uStack_250 = uVar12;
    if ((lVar5 != 0) &&
       (*(int32_t *)(lVar5 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar5 != -0x10)) {
      *(int32_t *)(lVar5 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
      uStack_250 = *(uint64_t *)(lVar5 + 0x18);
    }
    (**(code **)(**(longlong **)(lVar2 + 0x8400) + 200))
              (*(longlong **)(lVar2 + 0x8400),0x4e,1,&uStack_250);
    (**(code **)(**(longlong **)(lVar2 + 0x8400) + 0x1f8))
              (*(longlong **)(lVar2 + 0x8400),0x4e,1,&uStack_250);
    (**(code **)(**(longlong **)(lVar2 + 0x8400) + 0x1d8))
              (*(longlong **)(lVar2 + 0x8400),0x4e,1,&uStack_250);
    (**(code **)(**(longlong **)(lVar2 + 0x8400) + 0x40))
              (*(longlong **)(lVar2 + 0x8400),0x4e,1,&uStack_250);
  }
  if (0 < *(int *)(system_parameter_buffer + 0x7620 + lVar13)) {
    lVar13 = lVar13 + param_1;
    if (*(int *)(lVar13 + 0x7620) != 0) {
      iVar10 = (*(int *)(lVar13 + 0x7620) - 1U >> 0xc) + 1;
    }
    iVar11 = *(int *)(lVar13 + 0x7620);
    uVar9 = iVar10 << 0xc;
    if ((*(longlong *)(param_1 + 0x1550) == 0) ||
       (*(uint *)(*(longlong *)(param_1 + 0x1550) + 0x3c) < uVar9)) {
      puStack_a8 = &unknown_var_672_ptr;
      puStack_a0 = auStack_90;
      auStack_90[0] = 0;
      uStack_98 = 0xd;
      strcpy_s(auStack_90,0x20,&unknown_var_1856_ptr);
      uStack_260 = 1;
      uStack_268 = 1;
      uStack_270 = 0;
      uStack_278 = CONCAT44(uStack_278._4_4_,uVar9);
      uStack_280 = 0x120;
      uStack_288 = uStack_288 & 0xffffffff00000000;
      puStack_290 = (uint64_t *)((ulonglong)puStack_290 & 0xffffffff00000000);
      uStack_298 = 0x41;
      puVar8 = (uint64_t *)FUN_1800b0a10();
      uVar1 = *puVar8;
      *puVar8 = 0;
      plStack_1f0 = *(longlong **)(param_1 + 0x1550);
      *(uint64_t *)(param_1 + 0x1550) = uVar1;
      if (plStack_1f0 != (longlong *)0x0) {
        (**(code **)(*plStack_1f0 + 0x38))();
      }
      if (plStack_1e8 != (longlong *)0x0) {
        (**(code **)(*plStack_1e8 + 0x38))();
      }
      puStack_a8 = &unknown_var_720_ptr;
      puStack_70 = &unknown_var_672_ptr;
      puStack_68 = auStack_58;
      auStack_58[0] = 0;
      uStack_60 = 0x17;
      strcpy_s(auStack_58,0x20,&unknown_var_1936_ptr);
      uStack_260 = 1;
      uStack_268 = 1;
      uStack_270 = 0;
      uStack_278 = CONCAT44(uStack_278._4_4_,uVar9);
      uStack_280 = 0x120;
      uStack_288 = uStack_288 & 0xffffffff00000000;
      puStack_290 = (uint64_t *)CONCAT44(puStack_290._4_4_,3);
      uStack_298 = 0x1061;
      puVar8 = (uint64_t *)FUN_1800b0a10();
      uVar1 = *puVar8;
      *puVar8 = 0;
      plStack_1e0 = *(longlong **)(param_1 + 0x1578);
      *(uint64_t *)(param_1 + 0x1578) = uVar1;
      if (plStack_1e0 != (longlong *)0x0) {
        (**(code **)(*plStack_1e0 + 0x38))();
      }
      if (plStack_240 != (longlong *)0x0) {
        (**(code **)(*plStack_240 + 0x38))();
      }
      puStack_70 = &unknown_var_720_ptr;
    }
    lVar2 = *(longlong *)(system_message_buffer + 0x1cd8);
    lVar5 = *(longlong *)(param_1 + 0x1578);
    *(int32_t *)(lVar5 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    plVar3 = *(longlong **)(lVar2 + 0x8400);
    puStack_290 = auStack_1c8;
    uStack_298 = 0;
    iVar7 = (**(code **)(*plVar3 + 0x70))(plVar3,*(uint64_t *)(lVar5 + 0x10),0,4);
    if (iVar7 < 0) {
      FUN_180220810(iVar7,&unknown_var_1768_ptr);
    }
    iVar11 = iVar11 * 0x120;
    if (iVar10 != 0) {
      iVar10 = 0x120000;
      if (iVar11 < 0x120000) {
        iVar10 = iVar11;
      }
                    // WARNING: Subroutine does not return
      memcpy(auStack_1c8[0],*(uint64_t *)(lVar13 + 0x7628),(longlong)iVar10);
    }
    lVar13 = *(longlong *)(param_1 + 0x1578);
    plVar3 = *(longlong **)(*(longlong *)(system_message_buffer + 0x1cd8) + 0x8400);
    pcVar4 = *(code **)(*plVar3 + 0x78);
    *(int32_t *)(lVar13 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*pcVar4)(plVar3,*(uint64_t *)(lVar13 + 0x10),0);
    lVar5 = system_main_module_state;
    lVar13 = *(longlong *)(param_1 + 0x1578);
    lVar2 = *(longlong *)(param_1 + 0x1550);
    plVar3 = *(longlong **)(*(longlong *)(system_message_buffer + 0x1cd8) + 0x8400);
    pcVar4 = *(code **)(*plVar3 + 0x170);
    *(int32_t *)(lVar13 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    uStack_288 = *(ulonglong *)(lVar13 + 0x10);
    *(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(lVar5 + 0x224);
    uStack_278 = 0;
    uStack_280 = 0;
    puStack_290 = (uint64_t *)((ulonglong)puStack_290 & 0xffffffff00000000);
    uStack_298 = 0;
    (*pcVar4)(plVar3,*(uint64_t *)(lVar2 + 0x10),0,0);
    lVar5 = system_main_module_state;
    lVar13 = *(longlong *)(system_message_buffer + 0x1cd8);
    lVar2 = *(longlong *)(param_1 + 0x1550);
    if ((lVar2 != 0) &&
       (*(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar2 != -0x10)) {
      *(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(lVar5 + 0x224);
      uVar12 = *(uint64_t *)(lVar2 + 0x18);
    }
    uStack_248 = uVar12;
    (**(code **)(**(longlong **)(lVar13 + 0x8400) + 200))
              (*(longlong **)(lVar13 + 0x8400),0x4f,1,&uStack_248);
    (**(code **)(**(longlong **)(lVar13 + 0x8400) + 0x1f8))
              (*(longlong **)(lVar13 + 0x8400),0x4f,1,&uStack_248);
    (**(code **)(**(longlong **)(lVar13 + 0x8400) + 0x1d8))
              (*(longlong **)(lVar13 + 0x8400),0x4f,1,&uStack_248);
    (**(code **)(**(longlong **)(lVar13 + 0x8400) + 0x40))
              (*(longlong **)(lVar13 + 0x8400),0x4f,1,&uStack_248);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_2b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800c6320(uint64_t param_1,longlong param_2)
void FUN_1800c6320(uint64_t param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint64_t *puVar4;
  void *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint64_t uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint64_t uVar11;
  int8_t auStack_1d8 [32];
  int32_t uStack_1b8;
  char acStack_1a8 [16];
  void *puStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  int32_t uStack_180;
  int32_t uStack_17c;
  int32_t uStack_178;
  int32_t uStack_174;
  int32_t uStack_170;
  uint64_t uStack_16c;
  int32_t uStack_164;
  int32_t uStack_160;
  int32_t uStack_15c;
  uint64_t uStack_150;
  uint64_t uStack_148;
  longlong *plStack_140;
  void **ppuStack_138;
  void *puStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  int32_t uStack_110;
  longlong *plStack_108;
  void *puStack_100;
  longlong lStack_f8;
  int32_t uStack_f0;
  ulonglong uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  longlong *plStack_d0;
  uint64_t uStack_c8;
  void **ppuStack_c0;
  int iStack_b8;
  int iStack_b4;
  uint64_t uStack_b0;
  float fStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1d8;
  FUN_1802c22a0(acStack_1a8,&unknown_var_1904_ptr);
  ppuStack_c0 = &puStack_98;
  plVar9 = (longlong *)0x0;
  puStack_98 = &unknown_var_3480_ptr;
  puStack_90 = auStack_80;
  uStack_88 = 0;
  auStack_80[0] = 0;
  FUN_180049bf0(&puStack_98,&unknown_var_1992_ptr);
  uVar11 = FUN_1802c2560(*(longlong *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_98);
  lVar7 = system_system_data_memory;
  uStack_b0 = 0;
  fStack_a8 = 0.0;
  uStack_a4._0_2_ = 4;
  if (*(longlong *)(system_system_data_memory + 0x400) == 0) {
    puVar4 = (uint64_t *)FUN_18009e9e0(uVar11,&ppuStack_c0,&unknown_var_496_ptr);
    uVar11 = *puVar4;
    *puVar4 = 0;
    ppuStack_138 = *(void ***)(lVar7 + 0x400);
    *(uint64_t *)(lVar7 + 0x400) = uVar11;
    if (ppuStack_138 != (void **)0x0) {
      (**(code **)((longlong)*ppuStack_138 + 0x38))();
    }
    if (ppuStack_c0 != (void **)0x0) {
      (**(code **)(*ppuStack_c0 + 0x38))();
    }
  }
  puStack_198 = *(void **)(lVar7 + 0x400);
  plStack_108 = (longlong *)0x0;
  ppuStack_138 = &puStack_100;
  puStack_100 = &unknown_var_3456_ptr;
  uStack_e8 = 0;
  lStack_f8 = 0;
  uStack_f0 = 0;
  plStack_d0 = (longlong *)0x0;
  uStack_188 = CONCAT26(uStack_a4._2_2_,CONCAT24((int16_t)uStack_a4,fStack_a8));
  uStack_120 = uStack_b0;
  uStack_110 = 2;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uVar11 = *(uint64_t *)(puStack_198 + 0x15b8);
  ppuStack_c0 = &puStack_198;
  uStack_190 = uStack_b0;
  uStack_180 = 2;
  uStack_178 = 0;
  uStack_174 = 0;
  puStack_128 = puStack_198;
  uStack_118 = uStack_188;
  FUN_180627ae0(&uStack_170,&puStack_100);
  uStack_150 = uStack_e0;
  uStack_148 = uStack_d8;
  plStack_140 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    (**(code **)(*plStack_d0 + 0x28))();
  }
  puVar5 = (void *)FUN_180299eb0(uVar11,param_2,&puStack_198,acStack_1a8);
  if (acStack_1a8[0] == '\0') {
    lVar7 = *(longlong *)(param_2 + 0x96d0);
    fVar1 = *(float *)(param_2 + 0x11c20);
    fStack_a8 = (float)(int)fVar1;
    fVar2 = *(float *)(param_2 + 0x11c24);
    uStack_a4 = (float)(int)fVar2;
    lVar6 = *(longlong *)(system_message_buffer + 0x1cd8);
    uStack_b0 = CONCAT44((float)(int)*(float *)(param_2 + 0x11c1c),
                         (float)(int)*(float *)(param_2 + 0x11c18));
    uStack_a0 = 0;
    uStack_9c = 0x3f800000;
    plVar10 = *(longlong **)(lVar6 + 0x8400);
    (**(code **)(*plVar10 + 0x160))(plVar10,1,&uStack_b0);
    ppuStack_c0 = (void **)0x0;
    plVar10 = *(longlong **)(lVar6 + 0x8400);
    iStack_b8 = (int)fVar1;
    iStack_b4 = (int)fVar2;
    (**(code **)(*plVar10 + 0x168))(plVar10,1,&ppuStack_c0);
    uStack_178 = 0;
    uStack_174 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_164 = 0;
    uStack_160 = 0x400;
    uStack_188 = 0x4000300010000ff;
    uStack_190 = 0x8001000200060101;
    uStack_15c = 1;
    uStack_17c = *(int32_t *)(lVar7 + 0x324);
    puStack_198 = puVar5;
    lVar6 = FUN_180245280(param_2);
    uStack_180 = *(int32_t *)(lVar6 + 0x324);
    uVar11 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    iVar3 = *(int *)(param_2 + 0x3578);
    plVar10 = plVar9;
    if (*(longlong *)(lVar7 + 0x1d8) != 0) {
      if (system_main_module_state != 0) {
        *(longlong *)(lVar7 + 0x340) = (longlong)*(int *)(system_main_module_state + 0x224);
      }
      plVar10 = (longlong *)
                ((longlong)(int)((uint)*(byte *)(lVar7 + 0x335) * iVar3) * 0x10 +
                *(longlong *)(lVar7 + 0x1d8));
    }
    FUN_18029ad30(uVar11,0,plVar10);
    plVar10 = *(longlong **)(system_message_buffer + 0x1cd8);
    lVar7 = FUN_180245280(param_2);
    iVar3 = *(int *)(param_2 + 0x357c);
    if (*(longlong *)(lVar7 + 0x1e0) != 0) {
      if (system_main_module_state != 0) {
        *(longlong *)(lVar7 + 0x340) = (longlong)*(int *)(system_main_module_state + 0x224);
      }
      plVar9 = (longlong *)((longlong)(iVar3 * 2) * 0x10 + *(longlong *)(lVar7 + 0x1e0));
      if ((plVar9 != (longlong *)0x0) && (*plVar9 != 0)) {
        (**(code **)(*plVar10 + 0x70))(plVar10,*plVar9,2);
      }
    }
    plVar10[0x107e] = (longlong)plVar9;
    FUN_18029de40(*(uint64_t *)(system_message_buffer + 0x1cd8),1);
    uVar11 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    uVar8 = FUN_180245280(param_2);
    uStack_1b8 = 0xffffffff;
    FUN_18029d150(uVar11,0x10,uVar8);
    FUN_18029d000(*(uint64_t *)(system_message_buffer + 0x1cd8),4);
    FUN_18029cdd0(*(uint64_t *)(system_message_buffer + 0x1cd8),&puStack_198);
    lVar7 = system_message_buffer;
    lVar6 = strnlen(&unknown_var_1904_ptr,0x3f);
    strncpy(lVar7 + 0x1ce0,&unknown_var_1904_ptr,lVar6);
    *(int8_t *)(lVar6 + 0x1ce0 + lVar7) = 0;
    FUN_18029e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
    lVar7 = *(longlong *)(system_message_buffer + 0x1cd8);
    if (((*(longlong *)(lVar7 + 0x84b8) != 0) || (*(int *)(lVar7 + 0x8878) != -1)) ||
       (*(int *)(lVar7 + 0x8a78) != 0x10)) {
      ppuStack_c0 = (void **)0x0;
      (**(code **)(**(longlong **)(lVar7 + 0x8400) + 0x40))
                (*(longlong **)(lVar7 + 0x8400),0x10,1,&ppuStack_c0);
      *(uint64_t *)(lVar7 + 0x84b8) = 0;
      *(int32_t *)(lVar7 + 0x8878) = 0xffffffff;
      *(int32_t *)(lVar7 + 0x8a78) = 0x10;
      *(int *)(lVar7 + 0x82b4) = *(int *)(lVar7 + 0x82b4) + 1;
    }
  }
  if (plStack_d0 != (longlong *)0x0) {
    (**(code **)(*plStack_d0 + 0x38))();
  }
  ppuStack_c0 = &puStack_100;
  puStack_100 = &unknown_var_3456_ptr;
  if (lStack_f8 == 0) {
    lStack_f8 = 0;
    uStack_e8 = uStack_e8 & 0xffffffff00000000;
    puStack_100 = &unknown_var_720_ptr;
    if (plStack_108 != (longlong *)0x0) {
      (**(code **)(*plStack_108 + 0x38))();
    }
    FUN_1802c2ac0(&puStack_98);
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1d8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




