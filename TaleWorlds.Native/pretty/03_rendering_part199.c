#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part199.c - 7 个函数

// 函数: void FUN_180383870(int64_t param_1,int64_t param_2)
void FUN_180383870(int64_t param_1,int64_t param_2)

{
  uint *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  int64_t *plVar5;
  void *puVar6;
  int8_t auStack_118 [32];
  int64_t *plStack_f8;
  uint64_t uStack_f0;
  void *puStack_e8;
  void *puStack_e0;
  uint uStack_d8;
  uint8_t auStack_d0 [136];
  uint64_t uStack_48;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  if (*(char *)(param_1 + 0x50) != '\0') {
    uVar3 = FUN_1803d06e0(*(uint64_t *)(param_1 + 0x58));
    *(uint64_t *)(param_1 + 0x88) = uVar3;
    puStack_e8 = &unknown_var_3432_ptr;
    puStack_e0 = auStack_d0;
    auStack_d0[0] = 0;
    uStack_d8 = *(uint *)(param_2 + 0x3530);
    puVar6 = &system_buffer_ptr;
    if (*(void **)(param_2 + 0x3528) != (void *)0x0) {
      puVar6 = *(void **)(param_2 + 0x3528);
    }
    strcpy_s(auStack_d0,0x80,puVar6);
    if (uStack_d8 + 6 < 0x7f) {
      puVar4 = (int32_t *)(puStack_e0 + uStack_d8);
      *puVar4 = 0x635f7364;
      *(int16_t *)(puVar4 + 1) = 0x6372;
      *(int8_t *)((int64_t)puVar4 + 6) = 0;
      uStack_d8 = uStack_d8 + 6;
    }
    plVar5 = (int64_t *)(*(int64_t *)(param_1 + 0x88) + 0x3520);
    puVar6 = &system_buffer_ptr;
    if (puStack_e0 != (void *)0x0) {
      puVar6 = puStack_e0;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,puVar6);
    lVar2 = *(int64_t *)(param_1 + 0x88);
    plVar5 = *(int64_t **)(*(int64_t *)(param_1 + 0x58) + 0x38);
    if (plVar5 != (int64_t *)0x0) {
      plStack_f8 = plVar5;
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    plStack_f8 = *(int64_t **)(lVar2 + 0x96a8);
    *(int64_t **)(lVar2 + 0x96a8) = plVar5;
    if (plStack_f8 != (int64_t *)0x0) {
      (**(code **)(*plStack_f8 + 0x38))();
    }
    *(int8_t *)(*(int64_t *)(param_1 + 0x88) + 0x9a0d) = 1;
    *(int8_t *)(*(int64_t *)(param_1 + 0x88) + 0x21) = 1;
    lVar2 = *(int64_t *)(param_1 + 0x88);
    *(uint64_t *)(lVar2 + 0x12a00) = 0x3f800000;
    *(uint64_t *)(lVar2 + 0x12a08) = 0;
    *(uint64_t *)(lVar2 + 0x12a10) = 0x3f80000000000000;
    *(uint64_t *)(lVar2 + 0x12a18) = 0;
    *(uint64_t *)(lVar2 + 0x12a20) = 0;
    *(uint64_t *)(lVar2 + 0x12a28) = 0x3f800000;
    *(uint64_t *)(lVar2 + 0x12a30) = 0;
    *(uint64_t *)(lVar2 + 0x12a38) = 0x3f80000000000000;
    lVar2 = *(int64_t *)(param_1 + 0x88);
    *(uint64_t *)(lVar2 + 0x12a40) = 0x3f800000;
    *(uint64_t *)(lVar2 + 0x12a48) = 0;
    *(uint64_t *)(lVar2 + 0x12a50) = 0x3f80000000000000;
    *(uint64_t *)(lVar2 + 0x12a58) = 0;
    *(uint64_t *)(lVar2 + 0x12a60) = 0;
    *(uint64_t *)(lVar2 + 0x12a68) = 0x3f800000;
    *(uint64_t *)(lVar2 + 0x12a70) = 0;
    *(uint64_t *)(lVar2 + 0x12a78) = 0x3f80000000000000;
    lVar2 = *(int64_t *)(param_1 + 0x88);
    *(int32_t *)(lVar2 + 0x12a80) = 0x3f800000;
    *(int32_t *)(lVar2 + 0x12a84) = 0;
    *(int32_t *)(lVar2 + 0x12a88) = 0;
    *(int32_t *)(lVar2 + 0x12a8c) = 0;
    *(int32_t *)(lVar2 + 0x12a90) = 0;
    *(int32_t *)(lVar2 + 0x12a94) = 0x3f800000;
    *(int32_t *)(lVar2 + 0x12a98) = 0;
    *(int32_t *)(lVar2 + 0x12a9c) = 0;
    *(int32_t *)(lVar2 + 0x12aa0) = 0;
    *(int32_t *)(lVar2 + 0x12aa4) = 0;
    *(int32_t *)(lVar2 + 0x12aa8) = 0x3f800000;
    *(int32_t *)(lVar2 + 0x12aac) = 0;
    *(int32_t *)(lVar2 + 0x12ab0) = 0;
    *(int32_t *)(lVar2 + 0x12ab4) = 0;
    *(int32_t *)(lVar2 + 0x12ab8) = 0;
    *(int32_t *)(lVar2 + 0x12abc) = 0x3f800000;
    FUN_1803873f0(*(int64_t *)(param_1 + 0x88) + 0x98f8,
                  *(uint64_t *)(*(int64_t *)(param_1 + 0x98) + 8));
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x88) + 0x98f8);
                    // WARNING: Subroutine does not return
    memset(lVar2,0,*(int64_t *)(*(int64_t *)(param_1 + 0x88) + 0x9900) - lVar2 &
                   0xfffffffffffffffc);
  }
  if (*(char *)(param_1 + 0xb9) == '\0') {
    uVar3 = FUN_1803d06e0(*(uint64_t *)(param_1 + 0x58));
    *(uint64_t *)(param_1 + 0x80) = uVar3;
    puStack_e8 = &unknown_var_3432_ptr;
    puStack_e0 = auStack_d0;
    auStack_d0[0] = 0;
    uStack_d8 = *(uint *)(param_2 + 0x3530);
    puVar6 = &system_buffer_ptr;
    if (*(void **)(param_2 + 0x3528) != (void *)0x0) {
      puVar6 = *(void **)(param_2 + 0x3528);
    }
    strcpy_s(auStack_d0,0x80,puVar6);
    if (uStack_d8 + 6 < 0x7f) {
      puVar4 = (int32_t *)(puStack_e0 + uStack_d8);
      *puVar4 = 0x635f7373;
      *(int16_t *)(puVar4 + 1) = 0x6372;
      *(int8_t *)((int64_t)puVar4 + 6) = 0;
      uStack_d8 = uStack_d8 + 6;
    }
    plVar5 = (int64_t *)(*(int64_t *)(param_1 + 0x80) + 0x3520);
    puVar6 = &system_buffer_ptr;
    if (puStack_e0 != (void *)0x0) {
      puVar6 = puStack_e0;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,puVar6);
    lVar2 = *(int64_t *)(param_1 + 0x80);
    plVar5 = *(int64_t **)(*(int64_t *)(param_1 + 0x58) + 0x40);
    if (plVar5 != (int64_t *)0x0) {
      plStack_f8 = plVar5;
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    plStack_f8 = *(int64_t **)(lVar2 + 0x96a8);
    *(int64_t **)(lVar2 + 0x96a8) = plVar5;
    if (plStack_f8 != (int64_t *)0x0) {
      (**(code **)(*plStack_f8 + 0x38))();
    }
    *(int8_t *)(*(int64_t *)(param_1 + 0x80) + 0x9a0d) = 1;
    *(int8_t *)(*(int64_t *)(param_1 + 0x80) + 0x20) = 1;
    puVar1 = (uint *)(*(int64_t *)(param_1 + 0x80) + 4);
    *puVar1 = *puVar1 | 0x10000;
    lVar2 = *(int64_t *)(param_1 + 0x80);
    *(uint64_t *)(lVar2 + 0x12a00) = 0x3f800000;
    *(uint64_t *)(lVar2 + 0x12a08) = 0;
    *(uint64_t *)(lVar2 + 0x12a10) = 0x3f80000000000000;
    *(uint64_t *)(lVar2 + 0x12a18) = 0;
    *(uint64_t *)(lVar2 + 0x12a20) = 0;
    *(uint64_t *)(lVar2 + 0x12a28) = 0x3f800000;
    *(uint64_t *)(lVar2 + 0x12a30) = 0;
    *(uint64_t *)(lVar2 + 0x12a38) = 0x3f80000000000000;
    lVar2 = *(int64_t *)(param_1 + 0x80);
    *(uint64_t *)(lVar2 + 0x12a40) = 0x3f800000;
    *(uint64_t *)(lVar2 + 0x12a48) = 0;
    *(uint64_t *)(lVar2 + 0x12a50) = 0x3f80000000000000;
    *(uint64_t *)(lVar2 + 0x12a58) = 0;
    *(uint64_t *)(lVar2 + 0x12a60) = 0;
    *(uint64_t *)(lVar2 + 0x12a68) = 0x3f800000;
    *(uint64_t *)(lVar2 + 0x12a70) = 0;
    *(uint64_t *)(lVar2 + 0x12a78) = 0x3f80000000000000;
    lVar2 = *(int64_t *)(param_1 + 0x80);
    *(int32_t *)(lVar2 + 0x12a80) = 0x3f800000;
    *(int32_t *)(lVar2 + 0x12a84) = 0;
    *(int32_t *)(lVar2 + 0x12a88) = 0;
    *(int32_t *)(lVar2 + 0x12a8c) = 0;
    *(int32_t *)(lVar2 + 0x12a90) = 0;
    *(int32_t *)(lVar2 + 0x12a94) = 0x3f800000;
    *(int32_t *)(lVar2 + 0x12a98) = 0;
    *(int32_t *)(lVar2 + 0x12a9c) = 0;
    *(int32_t *)(lVar2 + 0x12aa0) = 0;
    *(int32_t *)(lVar2 + 0x12aa4) = 0;
    *(int32_t *)(lVar2 + 0x12aa8) = 0x3f800000;
    *(int32_t *)(lVar2 + 0x12aac) = 0;
    *(int32_t *)(lVar2 + 0x12ab0) = 0;
    *(int32_t *)(lVar2 + 0x12ab4) = 0;
    *(int32_t *)(lVar2 + 0x12ab8) = 0;
    *(int32_t *)(lVar2 + 0x12abc) = 0x3f800000;
    FUN_1803873f0(*(int64_t *)(param_1 + 0x80) + 0x98f8,
                  *(uint64_t *)(*(int64_t *)(param_1 + 0x98) + 8));
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x80) + 0x98f8);
                    // WARNING: Subroutine does not return
    memset(lVar2,0,*(int64_t *)(*(int64_t *)(param_1 + 0x80) + 0x9900) - lVar2 &
                   0xfffffffffffffffc);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180383ef0(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_180383ef0(int64_t param_1,int64_t param_2,int64_t param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int iVar6;
  uint64_t uVar7;
  uint uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t *plVar12;
  
  lVar11 = *(int64_t *)(param_1 + 0x90);
  if ((*(char *)(lVar11 + 0x563) != '\0') &&
     (lVar9 = *(int64_t *)(lVar11 + 0x5b0) - *(int64_t *)(lVar11 + 0x5a8),
     iVar2 = (int)(lVar9 >> 0x3f), iVar6 = (int)(lVar9 / 0xc) + iVar2,
     iVar6 != iVar2 && -1 < iVar6 - iVar2)) {
    iVar6 = *(int *)(lVar11 + 0x2668);
    *(int *)(lVar11 + 0x2668) = iVar6 + 1;
    *(int *)(param_3 + 0x9a28) = iVar6;
    *(int64_t *)(param_3 + 0x9a20) = lVar11 + 0x570;
    FUN_18024edc0(*(uint64_t *)(param_1 + 0xa0),*(uint64_t *)(param_2 + 0x3580));
    lVar4 = render_system_data_config;
    uVar7 = 0;
    *(int8_t *)
     ((int64_t)*(int *)(param_3 + 0x9a28) +
     ((int64_t)*(int *)(*(int64_t *)(param_2 + 0x3580) + 0x628) + 0x200) * 0x80 + render_system_data_config)
         = 1;
    lVar9 = *(int64_t *)(param_2 + 0x3580);
    iVar6 = *(int *)(param_3 + 0x9a28);
    plVar12 = (int64_t *)
              (((int64_t)*(int *)(lVar9 + 0x628) * 0x80 + (int64_t)iVar6) * 0x20 + lVar4);
    lVar11 = *plVar12;
    uVar5 = uVar7;
    uVar10 = uVar7;
    if (plVar12[1] != lVar11) {
      do {
        *(byte *)(lVar11 + uVar5) = *(byte *)(lVar11 + uVar5) | 0x10;
        lVar11 = *plVar12;
        uVar8 = (int)uVar10 + 1;
        uVar5 = uVar5 + 1;
        uVar10 = (uint64_t)uVar8;
      } while ((uint64_t)(int64_t)(int)uVar8 < (uint64_t)(plVar12[1] - lVar11));
      lVar9 = *(int64_t *)(param_2 + 0x3580);
      iVar6 = *(int *)(param_3 + 0x9a28);
    }
    plVar12 = (int64_t *)
              ((((int64_t)*(int *)(lVar9 + 0x628) + 8) * 0x80 + (int64_t)iVar6) * 0x20 + lVar4);
    lVar11 = *plVar12;
    uVar5 = uVar7;
    uVar10 = uVar7;
    if (plVar12[1] != lVar11) {
      do {
        *(byte *)(lVar11 + uVar5) = *(byte *)(lVar11 + uVar5) & 0xef;
        lVar11 = *plVar12;
        uVar8 = (int)uVar10 + 1;
        uVar5 = uVar5 + 1;
        uVar10 = (uint64_t)uVar8;
      } while ((uint64_t)(int64_t)(int)uVar8 < (uint64_t)(plVar12[1] - lVar11));
      lVar9 = *(int64_t *)(param_2 + 0x3580);
    }
    if (*(char *)(param_3 + 0x20) == '\0') {
      FUN_18024ef20(*(uint64_t *)(param_1 + 0xa0),lVar9,param_3,lVar11,param_2 + 0x120);
    }
    else {
      iVar6 = *(int *)(lVar9 + 0x628);
      iVar2 = *(int *)(param_3 + 0x9a28);
      iVar3 = (int)((*(int64_t *)(*(int64_t *)(param_1 + 0xa0) + 0xa0) -
                    *(int64_t *)(*(int64_t *)(param_1 + 0xa0) + 0x98)) / 0xbc);
      if (0 < iVar3) {
        do {
          lVar11 = *(int64_t *)(((int64_t)iVar6 * 0x80 + (int64_t)iVar2) * 0x20 + lVar4);
          bVar1 = *(byte *)(lVar11 + uVar7);
          if (((uint)(int)(char)bVar1 >> 4 & 1) != 0) {
            *(byte *)(lVar11 + uVar7) = bVar1 & 0xf0;
          }
          uVar7 = uVar7 + 1;
        } while ((int64_t)uVar7 < (int64_t)iVar3);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180383f5b(int param_1,int64_t param_2)
void FUN_180383f5b(int param_1,int64_t param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t unaff_RBX;
  int iVar7;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t uVar8;
  uint uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t *plVar12;
  
  *(int *)(param_2 + 0x20f8) = param_1 + 1;
  *(int *)(unaff_RBX + 0x9a28) = param_1;
  *(int64_t *)(unaff_RBX + 0x9a20) = param_2;
  FUN_18024edc0(*(uint64_t *)(unaff_RSI + 0xa0),*(uint64_t *)(unaff_RDI + 0x3580));
  lVar4 = render_system_data_config;
  uVar8 = 0;
  *(int8_t *)
   ((int64_t)*(int *)(unaff_RBX + 0x9a28) +
   ((int64_t)*(int *)(*(int64_t *)(unaff_RDI + 0x3580) + 0x628) + 0x200) * 0x80 + render_system_data_config)
       = 1;
  lVar5 = *(int64_t *)(unaff_RDI + 0x3580);
  iVar7 = *(int *)(unaff_RBX + 0x9a28);
  plVar12 = (int64_t *)
            (((int64_t)*(int *)(lVar5 + 0x628) * 0x80 + (int64_t)iVar7) * 0x20 + lVar4);
  lVar11 = *plVar12;
  uVar6 = uVar8;
  uVar10 = uVar8;
  if (plVar12[1] != lVar11) {
    do {
      *(byte *)(lVar11 + uVar6) = *(byte *)(lVar11 + uVar6) | 0x10;
      lVar11 = *plVar12;
      uVar9 = (int)uVar10 + 1;
      uVar6 = uVar6 + 1;
      uVar10 = (uint64_t)uVar9;
    } while ((uint64_t)(int64_t)(int)uVar9 < (uint64_t)(plVar12[1] - lVar11));
    lVar5 = *(int64_t *)(unaff_RDI + 0x3580);
    iVar7 = *(int *)(unaff_RBX + 0x9a28);
  }
  plVar12 = (int64_t *)
            ((((int64_t)*(int *)(lVar5 + 0x628) + 8) * 0x80 + (int64_t)iVar7) * 0x20 + lVar4);
  lVar11 = *plVar12;
  uVar6 = uVar8;
  uVar10 = uVar8;
  if (plVar12[1] != lVar11) {
    do {
      *(byte *)(lVar11 + uVar6) = *(byte *)(lVar11 + uVar6) & 0xef;
      lVar11 = *plVar12;
      uVar9 = (int)uVar10 + 1;
      uVar6 = uVar6 + 1;
      uVar10 = (uint64_t)uVar9;
    } while ((uint64_t)(int64_t)(int)uVar9 < (uint64_t)(plVar12[1] - lVar11));
    lVar5 = *(int64_t *)(unaff_RDI + 0x3580);
  }
  if (*(char *)(unaff_RBX + 0x20) == '\0') {
    FUN_18024ef20(*(uint64_t *)(unaff_RSI + 0xa0),lVar5);
  }
  else {
    iVar7 = *(int *)(lVar5 + 0x628);
    iVar2 = *(int *)(unaff_RBX + 0x9a28);
    iVar3 = (int)((*(int64_t *)(*(int64_t *)(unaff_RSI + 0xa0) + 0xa0) -
                  *(int64_t *)(*(int64_t *)(unaff_RSI + 0xa0) + 0x98)) / 0xbc);
    if (0 < iVar3) {
      do {
        lVar11 = *(int64_t *)(((int64_t)iVar7 * 0x80 + (int64_t)iVar2) * 0x20 + lVar4);
        bVar1 = *(byte *)(lVar11 + uVar8);
        if (((uint)(int)(char)bVar1 >> 4 & 1) != 0) {
          *(byte *)(lVar11 + uVar8) = bVar1 & 0xf0;
        }
        uVar8 = uVar8 + 1;
      } while ((int64_t)uVar8 < (int64_t)iVar3);
    }
  }
  return;
}





// 函数: void FUN_18038405b(uint64_t param_1,int64_t *param_2,int64_t param_3,int64_t param_4)
void FUN_18038405b(uint64_t param_1,int64_t *param_2,int64_t param_3,int64_t param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar5;
  int in_R11D;
  int64_t unaff_R14;
  
  lVar5 = param_3;
  do {
    *(byte *)(param_4 + lVar5) = *(byte *)(param_4 + lVar5) & 0xef;
    lVar5 = lVar5 + 1;
    param_4 = *param_2;
    in_R11D = in_R11D + 1;
  } while ((uint64_t)(int64_t)in_R11D < (uint64_t)(param_2[1] - param_4));
  if (*(char *)(unaff_RBX + 0x20) == (char)param_3) {
    FUN_18024ef20(*(uint64_t *)(unaff_RSI + 0xa0),*(int64_t *)(unaff_RDI + 0x3580));
  }
  else {
    iVar2 = *(int *)(*(int64_t *)(unaff_RDI + 0x3580) + 0x628);
    iVar3 = *(int *)(unaff_RBX + 0x9a28);
    iVar4 = (int)((*(int64_t *)(*(int64_t *)(unaff_RSI + 0xa0) + 0xa0) -
                  *(int64_t *)(*(int64_t *)(unaff_RSI + 0xa0) + 0x98)) / 0xbc);
    if (0 < iVar4) {
      do {
        lVar5 = *(int64_t *)(((int64_t)iVar2 * 0x80 + (int64_t)iVar3) * 0x20 + unaff_R14);
        bVar1 = *(byte *)(lVar5 + param_3);
        if (((uint)(int)(char)bVar1 >> 4 & 1) != 0) {
          *(byte *)(lVar5 + param_3) = bVar1 & 0xf0;
        }
        param_3 = param_3 + 1;
      } while (param_3 < iVar4);
    }
  }
  return;
}





// 函数: void FUN_180384128(void)
void FUN_180384128(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180384140(int64_t param_1,int64_t param_2,int64_t param_3,int param_4)
void FUN_180384140(int64_t param_1,int64_t param_2,int64_t param_3,int param_4)

{
  int *piVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  
  lVar9 = (int64_t)param_4;
  if ((*(char *)(system_main_module_state + 0xfb) != '\0') && (0 < param_4)) {
    lVar8 = 0;
    do {
      lVar7 = *(int64_t *)(param_3 + lVar8 * 8);
      iVar6 = (int)(*(int64_t *)(param_1 + 0xd0) - *(int64_t *)(param_1 + 200) >> 3);
      *(int *)(lVar7 + 0x3510) = iVar6;
      if (*(char *)(lVar7 + 0x11c37) != '\0') {
        FUN_180386eb0(param_1);
        iVar6 = *(int *)(lVar7 + 0x3510);
      }
      *(int *)(lVar7 + 0x124bc) =
           (int)(*(int64_t *)(param_1 + 0xd0) - *(int64_t *)(param_1 + 200) >> 3) - iVar6;
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar9);
  }
  if ((*(char *)(param_1 + 0x51) != '\0') && (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(char *)(param_1 + 0xb9) == '\0') {
      FUN_180384ed0(param_1,param_2,*(uint64_t *)(param_1 + 0x80));
    }
    FUN_180384ed0(param_1);
  }
  lVar8 = *(int64_t *)(param_1 + 0x90);
  iVar6 = 0;
  if (*(int64_t *)(lVar8 + 0xe8) - *(int64_t *)(lVar8 + 0xe0) >> 3 != 0) {
    lVar7 = 0;
    do {
      (**(code **)(**(int64_t **)(lVar7 + *(int64_t *)(lVar8 + 0xe0)) + 0x30))();
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((uint64_t)(int64_t)iVar6 <
             (uint64_t)(*(int64_t *)(lVar8 + 0xe8) - *(int64_t *)(lVar8 + 0xe0) >> 3));
  }
  if ((*(char *)(param_1 + 0xb9) == '\0') &&
     (((lVar8 = *(int64_t *)(param_1 + 0x80), 0 < *(int *)(lVar8 + 0x124e8) ||
       ((0 < *(int *)(lVar8 + 0x124ec) && ((*(uint *)(lVar8 + 4) & 0x10000) == 0)))) &&
      (iVar6 = 0, *(int64_t *)(param_1 + 0x68) - *(int64_t *)(param_1 + 0x60) >> 4 != 0)))) {
    lVar8 = 0;
    do {
      *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x60) + 8 + lVar8) + 0x3e4) = 0xbf800000
      ;
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((uint64_t)(int64_t)iVar6 <
             (uint64_t)(*(int64_t *)(param_1 + 0x68) - *(int64_t *)(param_1 + 0x60) >> 4));
  }
  FUN_180385230(param_1);
  lVar8 = 0;
  if (*(char *)(param_1 + 0x50) != '\0') {
    lVar8 = FUN_1800daa50();
    FUN_180094b30(lVar8,&unknown_var_4992_ptr);
    *(int8_t *)(lVar8 + 0x22) = 1;
    *(int32_t *)(*(int64_t *)(param_1 + 0x88) + 0x9a2c) = 0xfffffffe;
    *(int32_t *)(lVar8 + 0x9a2c) = 0xffffffff;
    plVar5 = *(int64_t **)(param_1 + 0x58);
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    plVar2 = *(int64_t **)(lVar8 + 0x9718);
    *(int64_t **)(lVar8 + 0x9718) = plVar5;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (*(char *)(param_1 + 0xb9) == '\0') {
      *(int32_t *)(*(int64_t *)(param_1 + 0x80) + 0x9a2c) = 0xfffffffd;
      lVar7 = *(int64_t *)(param_1 + 0x80);
      plVar5 = *(int64_t **)(param_1 + 0xe8);
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5);
      }
      plVar2 = *(int64_t **)(lVar7 + 0x9840);
      *(int64_t **)(lVar7 + 0x9840) = plVar5;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      lVar7 = *(int64_t *)(param_1 + 0x80);
      plVar5 = *(int64_t **)(param_1 + 0xf0);
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5);
      }
      plVar2 = *(int64_t **)(lVar7 + 0x9848);
      *(int64_t **)(lVar7 + 0x9848) = plVar5;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      lVar7 = *(int64_t *)(param_1 + 0x80);
      plVar5 = *(int64_t **)(param_1 + 0xf8);
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5);
      }
      plVar2 = *(int64_t **)(lVar7 + 0x9828);
      *(int64_t **)(lVar7 + 0x9828) = plVar5;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      *(int32_t *)(*(int64_t *)(param_1 + 0x80) + 0x124bc) = *(int32_t *)(param_2 + 0x124bc);
    }
    lVar7 = *(int64_t *)(param_1 + 0x88);
    plVar5 = *(int64_t **)(param_1 + 0xe8);
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    plVar2 = *(int64_t **)(lVar7 + 0x9840);
    *(int64_t **)(lVar7 + 0x9840) = plVar5;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    lVar7 = *(int64_t *)(param_1 + 0x88);
    plVar5 = *(int64_t **)(param_1 + 0xf0);
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    plVar2 = *(int64_t **)(lVar7 + 0x9848);
    *(int64_t **)(lVar7 + 0x9848) = plVar5;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    lVar7 = *(int64_t *)(param_1 + 0x88);
    plVar5 = *(int64_t **)(param_1 + 0xf8);
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    plVar2 = *(int64_t **)(lVar7 + 0x9828);
    *(int64_t **)(lVar7 + 0x9828) = plVar5;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    *(int32_t *)(*(int64_t *)(param_1 + 0x88) + 0x124bc) = *(int32_t *)(param_2 + 0x124bc);
  }
  if (0 < lVar9) {
    lVar7 = 0;
    do {
      lVar3 = *(int64_t *)(param_3 + lVar7 * 8);
      if (*(char *)(lVar3 + 0x11c37) != '\0') {
        plVar5 = *(int64_t **)(param_1 + 0xe8);
        if (plVar5 != (int64_t *)0x0) {
          (**(code **)(*plVar5 + 0x28))(plVar5);
        }
        plVar2 = *(int64_t **)(lVar3 + 0x9840);
        *(int64_t **)(lVar3 + 0x9840) = plVar5;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x38))();
        }
        plVar5 = *(int64_t **)(param_1 + 0xf0);
        if (plVar5 != (int64_t *)0x0) {
          (**(code **)(*plVar5 + 0x28))(plVar5);
        }
        plVar2 = *(int64_t **)(lVar3 + 0x9848);
        *(int64_t **)(lVar3 + 0x9848) = plVar5;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x38))();
        }
        plVar5 = *(int64_t **)(param_1 + 0xf8);
        if (plVar5 != (int64_t *)0x0) {
          (**(code **)(*plVar5 + 0x28))(plVar5);
        }
        plVar2 = *(int64_t **)(lVar3 + 0x9828);
        *(int64_t **)(lVar3 + 0x9828) = plVar5;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x38))();
        }
        if (*(char *)(param_1 + 0x50) == '\0') {
          plVar5 = (int64_t *)0x0;
        }
        else {
          plVar5 = *(int64_t **)(*(int64_t *)(param_1 + 0x58) + 0x48);
        }
        if (plVar5 != (int64_t *)0x0) {
          (**(code **)(*plVar5 + 0x28))(plVar5);
        }
        plVar2 = *(int64_t **)(lVar3 + 0x12418);
        *(int64_t **)(lVar3 + 0x12418) = plVar5;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x38))();
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    if (*(char *)(param_1 + 0xb9) == '\0') {
      lVar9 = *(int64_t *)(param_1 + 0x80);
      LOCK();
      piVar1 = (int *)(param_2 + 0x11a48);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      *(int64_t *)(param_2 + 0x9a48 + (int64_t)iVar6 * 8) = lVar9;
      uVar4 = *(uint64_t *)(param_2 + 0x9a3c);
      *(uint64_t *)(lVar9 + 0x9a34) = *(uint64_t *)(param_2 + 0x9a34);
      *(uint64_t *)(lVar9 + 0x9a3c) = uVar4;
    }
    lVar9 = *(int64_t *)(param_1 + 0x88);
    LOCK();
    piVar1 = (int *)(param_2 + 0x11a48);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(int64_t *)(param_2 + 0x9a48 + (int64_t)iVar6 * 8) = lVar9;
    uVar4 = *(uint64_t *)(param_2 + 0x9a3c);
    *(uint64_t *)(lVar9 + 0x9a34) = *(uint64_t *)(param_2 + 0x9a34);
    *(uint64_t *)(lVar9 + 0x9a3c) = uVar4;
    LOCK();
    piVar1 = (int *)(param_2 + 0x11a48);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(int64_t *)(param_2 + 0x9a48 + (int64_t)iVar6 * 8) = lVar8;
    uVar4 = *(uint64_t *)(param_2 + 0x9a3c);
    *(uint64_t *)(lVar8 + 0x9a34) = *(uint64_t *)(param_2 + 0x9a34);
    *(uint64_t *)(lVar8 + 0x9a3c) = uVar4;
  }
  return;
}





// 函数: void FUN_180384720(int64_t param_1,int64_t param_2)
void FUN_180384720(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  for (lVar3 = *(int64_t *)(param_2 + 0x178); lVar3 != param_2 + 0x170;
      lVar3 = func_0x00018066bd70(lVar3)) {
    FUN_180386260(param_1,*(uint64_t *)(lVar3 + 0x20),param_2,1);
  }
  uVar2 = *(uint64_t *)(param_1 + 0x68);
  uVar4 = *(uint64_t *)(param_1 + 0x60);
  if (uVar4 != uVar2) {
    do {
      if (*(int64_t *)(uVar4 + 8) == param_2) break;
      uVar4 = uVar4 + 0x10;
    } while (uVar4 != uVar2);
    if (uVar4 != uVar2) {
      uVar1 = uVar4 + 0x10;
      if (uVar1 < uVar2) {
                    // WARNING: Subroutine does not return
        memmove(uVar4,uVar1,uVar2 - uVar1);
      }
      *(uint64_t *)(param_1 + 0x68) = uVar2 - 0x10;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



