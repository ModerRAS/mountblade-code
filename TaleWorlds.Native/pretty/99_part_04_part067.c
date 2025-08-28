#include "TaleWorlds.Native.Split.h"

// 99_part_04_part067.c - 6 个函数

// 函数: void FUN_1802c3ab0(void **param_1,longlong param_2)
void FUN_1802c3ab0(void **param_1,longlong param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  void *puVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  void **ppuVar9;
  uint uVar10;
  int8_t auStack_2e8 [32];
  void ***pppuStack_2c8;
  int8_t uStack_2c0;
  void **ppuStack_2b8;
  void **ppuStack_2b0;
  void **ppuStack_2a8;
  int8_t auStack_2a0 [8];
  uint64_t uStack_298;
  void *puStack_288;
  int8_t *puStack_280;
  int32_t uStack_278;
  int8_t auStack_270 [72];
  void *puStack_228;
  int8_t *puStack_220;
  int32_t uStack_218;
  int8_t auStack_210 [72];
  void *puStack_1c8;
  int8_t *puStack_1c0;
  int32_t uStack_1b8;
  int8_t auStack_1b0 [72];
  void *puStack_168;
  int8_t *puStack_160;
  int32_t uStack_158;
  int8_t auStack_150 [72];
  void *puStack_108;
  int8_t *puStack_100;
  int32_t uStack_f8;
  int8_t auStack_f0 [72];
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_298 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_2e8;
  if (*param_1 != (void *)0x0) {
    FUN_1802c22a0(auStack_2a0,&UNK_180a18b88);
    ppuStack_2b8 = &puStack_168;
    ppuVar9 = (void **)0x0;
    puStack_168 = &UNK_1809fcc58;
    puStack_160 = auStack_150;
    uStack_158 = 0;
    auStack_150[0] = 0;
    FUN_180049bf0(&puStack_168,&UNK_180a18b88);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_168);
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if (((*(longlong *)(lVar1 + 0x8438) != 0) || (*(int *)(lVar1 + 0x8838) != -1)) ||
       (*(int *)(lVar1 + 0x8a38) != 0x13)) {
      ppuStack_2a8 = (void **)0x0;
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 200))
                (*(longlong **)(lVar1 + 0x8400),0,1,&ppuStack_2a8);
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x1f8))
                (*(longlong **)(lVar1 + 0x8400),0,1,&ppuStack_2a8);
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),0,1,&ppuStack_2a8);
      *(uint64_t *)(lVar1 + 0x8438) = 0;
      *(int32_t *)(lVar1 + 0x8838) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a38) = 0x13;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if (((*(longlong *)(lVar1 + 0x8440) != 0) || (*(int *)(lVar1 + 0x883c) != -1)) ||
       (*(int *)(lVar1 + 0x8a3c) != 0x13)) {
      ppuStack_2b0 = (void **)0x0;
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 200))
                (*(longlong **)(lVar1 + 0x8400),1,1,&ppuStack_2b0);
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x1f8))
                (*(longlong **)(lVar1 + 0x8400),1,1,&ppuStack_2b0);
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),1,1,&ppuStack_2b0);
      *(uint64_t *)(lVar1 + 0x8440) = 0;
      *(int32_t *)(lVar1 + 0x883c) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a3c) = 0x13;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    uVar2 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
    puVar3 = param_1[5];
    FUN_18029fc10(uVar2,puVar3,param_2,0x20);
    FUN_18029dca0(uVar2,0xb,0x20,puVar3);
    if (0.5 < *(float *)(param_2 + 0xc)) {
      ppuStack_2b8 = &puStack_288;
      puStack_288 = &UNK_1809fcc58;
      puStack_280 = auStack_270;
      uStack_278 = 0;
      auStack_270[0] = 0;
      FUN_180049bf0(&puStack_288,&UNK_180a18b68);
      FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_288);
      lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      puVar3 = *param_1;
      ppuStack_2b0 = ppuVar9;
      if (puVar3 != (void *)0x0) {
        *(int32_t *)(puVar3 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
        ppuStack_2b0 = *(void ***)(puVar3 + 0x20);
      }
      plVar4 = *(longlong **)(lVar1 + 0x8400);
      pppuStack_2c8 = (void ***)0x0;
      (**(code **)(*plVar4 + 0x220))(plVar4,1,1,&ppuStack_2b0);
      lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      puVar3 = param_1[1];
      ppuStack_2b0 = ppuVar9;
      if (puVar3 != (void *)0x0) {
        *(int32_t *)(puVar3 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
        ppuStack_2b0 = *(void ***)(puVar3 + 0x20);
      }
      plVar4 = *(longlong **)(lVar1 + 0x8400);
      pppuStack_2c8 = (void ***)0x0;
      (**(code **)(*plVar4 + 0x220))(plVar4,2,1,&ppuStack_2b0);
      puVar3 = param_1[0xb];
      lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      if ((puVar3 != (void *)0x0) &&
         (*(longlong *)(lVar1 + 0x82a0) != (longlong)**(int **)(puVar3 + 0x10))) {
        (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x228))
                  (*(longlong **)(lVar1 + 0x8400),*(uint64_t *)(*(int **)(puVar3 + 0x10) + 6),0,0)
        ;
        *(longlong *)(lVar1 + 0x82a0) = (longlong)**(int **)(puVar3 + 0x10);
      }
      plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
      (**(code **)(*plVar4 + 0x148))(plVar4,0x10,0x10,1);
      uStack_2c0 = 1;
      pppuStack_2c8._0_4_ = 0xffffffff;
      FUN_18029d760(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),1,1);
      uStack_2c0 = 1;
      pppuStack_2c8 = (void ***)CONCAT44(pppuStack_2c8._4_4_,0xffffffff);
      FUN_18029d760(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),2,1);
      FUN_1802c2ac0(&puStack_288);
    }
    ppuStack_2b8 = &puStack_108;
    puStack_108 = &UNK_1809fcc58;
    puStack_100 = auStack_f0;
    uStack_f8 = 0;
    auStack_f0[0] = 0;
    FUN_180049bf0(&puStack_108,&UNK_180a18b6c);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_108);
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    puVar3 = param_1[2];
    ppuStack_2b0 = ppuVar9;
    if (puVar3 != (void *)0x0) {
      *(int32_t *)(puVar3 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
      ppuStack_2b0 = *(void ***)(puVar3 + 0x20);
    }
    plVar4 = *(longlong **)(lVar1 + 0x8400);
    pppuStack_2c8 = (void ***)0x0;
    (**(code **)(*plVar4 + 0x220))(plVar4,1,1,&ppuStack_2b0);
    lVar5 = _DAT_180c86870;
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    puVar3 = *param_1;
    ppuStack_2a8 = ppuVar9;
    if ((puVar3 != (void *)0x0) &&
       (*(int32_t *)(puVar3 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224),
       puVar3 != (void *)0xfffffffffffffff0)) {
      *(int32_t *)(puVar3 + 0x16c) = *(int32_t *)(lVar5 + 0x224);
      ppuStack_2a8 = *(void ***)(puVar3 + 0x18);
    }
    plVar4 = *(longlong **)(lVar1 + 0x8400);
    (**(code **)(*plVar4 + 0x218))(plVar4,0,1,&ppuStack_2a8);
    lVar5 = _DAT_180c86870;
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    puVar3 = param_1[1];
    ppuStack_2b8 = ppuVar9;
    if ((puVar3 != (void *)0x0) &&
       (*(int32_t *)(puVar3 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224),
       puVar3 != (void *)0xfffffffffffffff0)) {
      *(int32_t *)(puVar3 + 0x16c) = *(int32_t *)(lVar5 + 0x224);
      ppuStack_2b8 = *(void ***)(puVar3 + 0x18);
    }
    plVar4 = *(longlong **)(lVar1 + 0x8400);
    (**(code **)(*plVar4 + 0x218))(plVar4,1,1,&ppuStack_2b8);
    puVar3 = param_1[0xc];
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if ((puVar3 != (void *)0x0) &&
       (*(longlong *)(lVar1 + 0x82a0) != (longlong)**(int **)(puVar3 + 0x10))) {
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x228))
                (*(longlong **)(lVar1 + 0x8400),*(uint64_t *)(*(int **)(puVar3 + 0x10) + 6),0,0);
      *(longlong *)(lVar1 + 0x82a0) = (longlong)**(int **)(puVar3 + 0x10);
    }
    plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
    (**(code **)(*plVar4 + 0x148))(plVar4,0x10,0x10,1);
    ppuStack_2a8 = (void **)CONCAT44(ppuStack_2a8._4_4_,0xffffffff);
    ppuStack_2b8 = (void **)0x0;
    plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
    pppuStack_2c8 = &ppuStack_2a8;
    (**(code **)(*plVar4 + 0x220))(plVar4,1,1,&ppuStack_2b8);
    ppuStack_2b0 = (void **)0x0;
    plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
    (**(code **)(*plVar4 + 0x218))(plVar4,0,1,&ppuStack_2b0);
    ppuStack_2b8 = (void **)0x0;
    plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
    (**(code **)(*plVar4 + 0x218))(plVar4,1,1,&ppuStack_2b8);
    FUN_1802c2ac0(&puStack_108);
    ppuStack_2b8 = &puStack_288;
    puStack_288 = &UNK_1809fcc58;
    puStack_280 = auStack_270;
    uStack_278 = 0;
    auStack_270[0] = 0;
    ppuStack_2b0 = param_1;
    FUN_180049bf0(&puStack_288,&UNK_180a18bc4);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_288);
    ppuStack_2b8 = &puStack_a8;
    puStack_a8 = &UNK_1809fcc58;
    puStack_a0 = auStack_90;
    uStack_98 = 0;
    auStack_90[0] = 0;
    FUN_180049bf0(&puStack_a8,&UNK_180a18bc8);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_a8);
    FUN_1802c4970(&ppuStack_2b0,0);
    FUN_1802c2ac0(&puStack_a8);
    ppuStack_2b8 = &puStack_228;
    puStack_228 = &UNK_1809fcc58;
    puStack_220 = auStack_210;
    uStack_218 = 0;
    auStack_210[0] = 0;
    FUN_180049bf0(&puStack_228,&UNK_180a18ba0);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_228);
    FUN_1802c4970(&ppuStack_2b0,1);
    FUN_1802c2ac0(&puStack_228);
    FUN_1802c2ac0(&puStack_288);
    ppuStack_2b8 = &puStack_1c8;
    puStack_1c8 = &UNK_1809fcc58;
    puStack_1c0 = auStack_1b0;
    uStack_1b8 = 0;
    auStack_1b0[0] = 0;
    FUN_180049bf0(&puStack_1c8,&UNK_180a18bb0);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_1c8);
    lVar5 = _DAT_180c86870;
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    puVar3 = param_1[3];
    ppuStack_2b8 = ppuVar9;
    if ((puVar3 != (void *)0x0) &&
       (*(int32_t *)(puVar3 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224),
       puVar3 != (void *)0xfffffffffffffff0)) {
      *(int32_t *)(puVar3 + 0x16c) = *(int32_t *)(lVar5 + 0x224);
      ppuStack_2b8 = *(void ***)(puVar3 + 0x18);
    }
    plVar4 = *(longlong **)(lVar1 + 0x8400);
    (**(code **)(*plVar4 + 0x218))(plVar4,0,1,&ppuStack_2b8);
    uStack_2c0 = 1;
    pppuStack_2c8 = (void ***)CONCAT44(pppuStack_2c8._4_4_,0xffffffff);
    FUN_18029d760(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),1,1,param_1[7]);
    puVar3 = param_1[0xe];
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if ((puVar3 != (void *)0x0) &&
       (*(longlong *)(lVar1 + 0x82a0) != (longlong)**(int **)(puVar3 + 0x10))) {
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x228))
                (*(longlong **)(lVar1 + 0x8400),*(uint64_t *)(*(int **)(puVar3 + 0x10) + 6),0,0);
      *(longlong *)(lVar1 + 0x82a0) = (longlong)**(int **)(puVar3 + 0x10);
    }
    plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
    (**(code **)(*plVar4 + 0x148))(plVar4,0x10,0x10,1);
    ppuStack_2b8 = (void **)0x0;
    plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
    (**(code **)(*plVar4 + 0x218))(plVar4,0,1,&ppuStack_2b8);
    ppuStack_2a8 = (void **)CONCAT44(ppuStack_2a8._4_4_,0xffffffff);
    ppuStack_2b8 = (void **)0x0;
    plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
    pppuStack_2c8 = &ppuStack_2a8;
    (**(code **)(*plVar4 + 0x220))(plVar4,1,1,&ppuStack_2b8);
    FUN_1802c2ac0(&puStack_1c8);
    ppuStack_2b8 = &puStack_228;
    puStack_228 = &UNK_1809fcc58;
    puStack_220 = auStack_210;
    uStack_218 = 0;
    auStack_210[0] = 0;
    FUN_180049bf0(&puStack_228,&UNK_180a18c08);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_228);
    pppuStack_2c8._0_4_ = 0xffffffff;
    FUN_18029d150(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),0,param_1[7],0x20);
    uStack_2c0 = 1;
    pppuStack_2c8 = (void ***)CONCAT44(pppuStack_2c8._4_4_,0xffffffff);
    FUN_18029d760(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),1,1,param_1[8]);
    puVar3 = param_1[0xf];
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if ((puVar3 != (void *)0x0) &&
       (*(longlong *)(lVar1 + 0x82a0) != (longlong)**(int **)(puVar3 + 0x10))) {
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x228))
                (*(longlong **)(lVar1 + 0x8400),*(uint64_t *)(*(int **)(puVar3 + 0x10) + 6),0,0);
      *(longlong *)(lVar1 + 0x82a0) = (longlong)**(int **)(puVar3 + 0x10);
    }
    plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
    (**(code **)(*plVar4 + 0x148))(plVar4,0x10,0x10,1);
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if (((*(longlong *)(lVar1 + 0x8438) != 0) || (*(int *)(lVar1 + 0x8838) != -1)) ||
       (*(int *)(lVar1 + 0x8a38) != 0x20)) {
      ppuStack_2b8 = (void **)0x0;
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x218))
                (*(longlong **)(lVar1 + 0x8400),0,1,&ppuStack_2b8);
      *(uint64_t *)(lVar1 + 0x8438) = 0;
      *(int32_t *)(lVar1 + 0x8838) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a38) = 0x20;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    ppuStack_2a8 = (void **)CONCAT44(ppuStack_2a8._4_4_,0xffffffff);
    ppuStack_2b8 = (void **)0x0;
    plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
    pppuStack_2c8 = &ppuStack_2a8;
    (**(code **)(*plVar4 + 0x220))(plVar4,1,1,&ppuStack_2b8);
    FUN_1802c2ac0(&puStack_228);
    ppuStack_2b8 = &puStack_1c8;
    puStack_1c8 = &UNK_1809fcc58;
    puStack_1c0 = auStack_1b0;
    uStack_1b8 = 0;
    auStack_1b0[0] = 0;
    FUN_180049bf0(&puStack_1c8,&UNK_180a18c20);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_1c8);
    do {
      iVar8 = (int)ppuVar9;
      pppuStack_2c8._0_4_ = iVar8;
      FUN_18029d150(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),0,param_1[8],0x20);
      uVar10 = iVar8 + 1;
      uStack_2c0 = 1;
      pppuStack_2c8 = (void ***)CONCAT44(pppuStack_2c8._4_4_,uVar10);
      FUN_18029d760(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),1,1,param_1[8]);
      puVar3 = param_1[0x10];
      lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      if ((puVar3 != (void *)0x0) &&
         (*(longlong *)(lVar1 + 0x82a0) != (longlong)**(int **)(puVar3 + 0x10))) {
        (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x228))
                  (*(longlong **)(lVar1 + 0x8400),*(uint64_t *)(*(int **)(puVar3 + 0x10) + 6),0,0)
        ;
        *(longlong *)(lVar1 + 0x82a0) = (longlong)**(int **)(puVar3 + 0x10);
      }
      uVar6 = 0x80 >> ((byte)ppuVar9 & 0x1f);
      plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
      iVar7 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 3U)) >> 2;
      (**(code **)(*plVar4 + 0x148))(plVar4,iVar7,iVar7,1);
      lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      if (((*(longlong *)(lVar1 + 0x8438) != 0) || (*(int *)(lVar1 + 0x8838) != iVar8)) ||
         (*(int *)(lVar1 + 0x8a38) != 0x20)) {
        ppuStack_2b8 = (void **)0x0;
        (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x218))
                  (*(longlong **)(lVar1 + 0x8400),0,1,&ppuStack_2b8);
        *(uint64_t *)(lVar1 + 0x8438) = 0;
        *(int *)(lVar1 + 0x8838) = iVar8;
        *(int32_t *)(lVar1 + 0x8a38) = 0x20;
        *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
      }
      ppuStack_2a8 = (void **)CONCAT44(ppuStack_2a8._4_4_,0xffffffff);
      ppuStack_2b0 = (void **)0x0;
      plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
      pppuStack_2c8 = &ppuStack_2a8;
      (**(code **)(*plVar4 + 0x220))(plVar4,1,1,&ppuStack_2b0);
      ppuVar9 = (void **)(ulonglong)uVar10;
    } while ((int)uVar10 < 6);
    FUN_1802c2ac0(&puStack_1c8);
    FUN_1802c2ac0(&puStack_168);
    _DAT_180c8695c = _DAT_180c8695c + -1;
    (**(code **)(*_DAT_180c86968 + 0x20))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_2e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c4970(longlong *param_1,int param_2)
void FUN_1802c4970(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t auStack_38 [2];
  uint64_t auStack_28 [2];
  
  lVar6 = _DAT_180c86870;
  uVar4 = 0;
  if (param_2 == 0) {
    lVar5 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    lVar1 = *(longlong *)(*param_1 + 0x10);
    auStack_38[0] = uVar4;
    if ((lVar1 != 0) &&
       (*(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224), lVar1 != -0x10)) {
      *(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
      auStack_38[0] = *(uint64_t *)(lVar1 + 0x18);
    }
    plVar2 = *(longlong **)(lVar5 + 0x8400);
    (**(code **)(*plVar2 + 0x218))(plVar2,0,1,auStack_38);
    lVar6 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    lVar5 = *(longlong *)(*param_1 + 0x20);
  }
  else {
    if (param_2 != 1) goto LAB_1802c4ae0;
    lVar5 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    lVar1 = *(longlong *)(*param_1 + 0x20);
    auStack_38[0] = uVar4;
    if ((lVar1 != 0) &&
       (*(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224), lVar1 != -0x10)) {
      *(int32_t *)(lVar1 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
      auStack_38[0] = *(uint64_t *)(lVar1 + 0x18);
    }
    plVar2 = *(longlong **)(lVar5 + 0x8400);
    (**(code **)(*plVar2 + 0x218))(plVar2,0,1,auStack_38);
    lVar6 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    lVar5 = *(longlong *)(*param_1 + 0x18);
  }
  if (lVar5 != 0) {
    *(int32_t *)(lVar5 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
    uVar4 = *(uint64_t *)(lVar5 + 0x20);
  }
  auStack_38[0] = uVar4;
  (**(code **)(**(longlong **)(lVar6 + 0x8400) + 0x220))
            (*(longlong **)(lVar6 + 0x8400),1,1,auStack_38,0);
LAB_1802c4ae0:
  auStack_28[0] = CONCAT44(auStack_28[0]._4_4_,param_2);
  uVar4 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
  uVar3 = *(uint64_t *)(*param_1 + 0x30);
  FUN_18029fc10(uVar4,uVar3,auStack_28,0x10);
  FUN_18029dca0(uVar4,0xc,0x20,uVar3);
  lVar6 = *(longlong *)(*param_1 + 0x68);
  lVar5 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  if ((lVar6 != 0) && (*(longlong *)(lVar5 + 0x82a0) != (longlong)**(int **)(lVar6 + 0x10))) {
    (**(code **)(**(longlong **)(lVar5 + 0x8400) + 0x228))
              (*(longlong **)(lVar5 + 0x8400),*(uint64_t *)(*(int **)(lVar6 + 0x10) + 6),0,0);
    *(longlong *)(lVar5 + 0x82a0) = (longlong)**(int **)(lVar6 + 0x10);
  }
  plVar2 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  (**(code **)(*plVar2 + 0x148))(plVar2,1,0x100,3);
  auStack_38[0] = 0;
  plVar2 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  (**(code **)(*plVar2 + 0x218))(plVar2,0,1,auStack_38);
  auStack_28[0] = 0;
  auStack_38[0] = CONCAT44(auStack_38[0]._4_4_,0xffffffff);
  plVar2 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  (**(code **)(*plVar2 + 0x220))(plVar2,1,1,auStack_28,auStack_38);
  return;
}






// 函数: void FUN_1802c4c30(void)
void FUN_1802c4c30(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






// 函数: void FUN_1802c5470(void)
void FUN_1802c5470(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



uint64_t *
FUN_1802c5aa0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plStack_70;
  longlong *plStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  longlong *plStack_50;
  uint64_t uStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uStack_48 = 0;
  plStack_70 = (longlong *)0x0;
  plStack_68 = (longlong *)0x0;
  plStack_60 = (longlong *)0x0;
  plStack_58 = (longlong *)0x0;
  plStack_50 = (longlong *)0x0;
  FUN_180247c00(param_1,&plStack_70,param_3,param_4,0xfffffffffffffffe);
  if (plStack_50 != (longlong *)0x0) {
    (**(code **)(*plStack_50 + 0x38))();
  }
  if (plStack_58 != (longlong *)0x0) {
    (**(code **)(*plStack_58 + 0x38))();
  }
  if (plStack_60 != (longlong *)0x0) {
    (**(code **)(*plStack_60 + 0x38))();
  }
  if (plStack_68 != (longlong *)0x0) {
    (**(code **)(*plStack_68 + 0x38))();
  }
  if (plStack_70 != (longlong *)0x0) {
    (**(code **)(*plStack_70 + 0x38))();
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(int32_t *)((longlong)param_1 + 0x1064) = 0xffffffff;
  LOCK();
  *(int32_t *)(param_1 + 0x20c) = 0;
  UNLOCK();
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c5bc0(longlong *param_1)
void FUN_1802c5bc0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  void *puVar3;
  int8_t auStack_2f8 [32];
  int32_t uStack_2d8;
  int32_t uStack_2d0;
  int32_t uStack_2c8;
  int32_t uStack_2c0;
  int32_t uStack_2b8;
  uint64_t uStack_2b0;
  int8_t uStack_2a8;
  int32_t uStack_2a0;
  longlong *plStack_298;
  longlong *plStack_290;
  longlong *plStack_288;
  uint64_t uStack_280;
  int32_t uStack_278;
  uint64_t uStack_274;
  uint64_t uStack_26c;
  int32_t uStack_264;
  int32_t uStack_260;
  longlong *plStack_258;
  int32_t uStack_250;
  int8_t uStack_24c;
  uint64_t uStack_240;
  void *puStack_238;
  int8_t *puStack_230;
  int32_t uStack_228;
  int8_t auStack_220 [72];
  void *puStack_1d8;
  int8_t *puStack_1d0;
  int32_t uStack_1c8;
  int8_t auStack_1c0 [136];
  void *puStack_138;
  int8_t *puStack_130;
  int32_t uStack_128;
  int8_t auStack_120 [136];
  void *puStack_98;
  void *puStack_90;
  int32_t uStack_88;
  uint8_t auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_240 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_2f8;
  puStack_238 = &UNK_1809fcc58;
  puStack_230 = auStack_220;
  auStack_220[0] = 0;
  uStack_228 = 0x24;
  strcpy_s(auStack_220,0x40,&UNK_180a18cd8);
  uStack_2a0 = 1;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_2b8 = 0x18;
  uStack_2c0 = 0x10;
  uStack_2c8 = 0;
  uStack_2d0 = 3;
  uStack_2d8 = 0x61;
  plVar2 = (longlong *)FUN_1800b0a10();
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_298 = (longlong *)*param_1;
  *param_1 = lVar1;
  if (plStack_298 != (longlong *)0x0) {
    (**(code **)(*plStack_298 + 0x38))();
  }
  if (plStack_290 != (longlong *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  puStack_238 = &UNK_18098bcb0;
  puStack_1d8 = &UNK_1809fcc58;
  puStack_1d0 = auStack_1c0;
  auStack_1c0[0] = 0;
  uStack_1c8 = 0x27;
  strcpy_s(auStack_1c0,0x40,&UNK_180a18c78);
  uStack_2a0 = 1;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_2b8 = 1;
  uStack_2c0 = 0x30;
  uStack_2c8 = 0;
  uStack_2d0 = 3;
  uStack_2d8 = 0x220;
  plVar2 = (longlong *)FUN_1800b0a10();
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_298 = (longlong *)param_1[1];
  param_1[1] = lVar1;
  if (plStack_298 != (longlong *)0x0) {
    (**(code **)(*plStack_298 + 0x38))();
  }
  if (plStack_288 != (longlong *)0x0) {
    (**(code **)(*plStack_288 + 0x38))();
  }
  puStack_1d8 = &UNK_18098bcb0;
  uStack_278 = 1;
  uStack_264 = 0;
  plStack_290 = (longlong *)0x0;
  plStack_258 = (longlong *)0x0;
  uStack_24c = 0;
  uStack_260 = 0x1000001;
  uStack_280 = 0x10000000100;
  uStack_274 = 0x3600000001;
  uStack_26c = 0x500000007;
  uStack_250 = *(int32_t *)((longlong)param_1 + 0x1064);
  puStack_98 = &UNK_1809fcc58;
  puStack_90 = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 0x20;
  strcpy_s(auStack_80,0x40,&UNK_180a18ca0);
  puStack_138 = &UNK_1809fcc28;
  puStack_130 = auStack_120;
  auStack_120[0] = 0;
  uStack_128 = uStack_88;
  puVar3 = &system_buffer_ptr;
  if (puStack_90 != (void *)0x0) {
    puVar3 = puStack_90;
  }
  strcpy_s(auStack_120,0x80,puVar3);
  plVar2 = (longlong *)FUN_1800b2450();
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_298 = (longlong *)param_1[2];
  param_1[2] = lVar1;
  if (plStack_298 != (longlong *)0x0) {
    (**(code **)(*plStack_298 + 0x38))();
  }
  if (plStack_290 != (longlong *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  puStack_138 = &UNK_18098bcb0;
  puStack_98 = &UNK_18098bcb0;
  puStack_238 = &UNK_1809fcc58;
  puStack_230 = auStack_220;
  auStack_220[0] = 0;
  uStack_228 = 0x25;
  strcpy_s(auStack_220,0x40,&UNK_180a18d20);
  puStack_1d8 = &UNK_1809fcc28;
  puStack_1d0 = auStack_1c0;
  auStack_1c0[0] = 0;
  uStack_1c8 = uStack_228;
  puVar3 = &system_buffer_ptr;
  if (puStack_230 != (void *)0x0) {
    puVar3 = puStack_230;
  }
  strcpy_s(auStack_1c0,0x80,puVar3);
  plVar2 = (longlong *)FUN_1800b2450();
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_288 = (longlong *)param_1[3];
  param_1[3] = lVar1;
  if (plStack_288 != (longlong *)0x0) {
    (**(code **)(*plStack_288 + 0x38))();
  }
  if (plStack_298 != (longlong *)0x0) {
    (**(code **)(*plStack_298 + 0x38))();
  }
  puStack_1d8 = &UNK_18098bcb0;
  puStack_238 = &UNK_18098bcb0;
  puStack_138 = &UNK_1809fcc28;
  puStack_130 = auStack_120;
  auStack_120[0] = 0;
  uStack_128 = 0x10;
  strcpy_s(auStack_120,0x80,&UNK_180a0dbf0);
  plVar2 = (longlong *)FUN_1800b31f0(_DAT_180c86930,&plStack_290,&puStack_138,1);
  plVar2 = (longlong *)*plVar2;
  if (plVar2 != (longlong *)0x0) {
    plStack_288 = plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plStack_288 = (longlong *)param_1[4];
  param_1[4] = (longlong)plVar2;
  if (plStack_288 != (longlong *)0x0) {
    (**(code **)(*plStack_288 + 0x38))();
  }
  if (plStack_290 != (longlong *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  puStack_138 = &UNK_18098bcb0;
  if (plStack_258 != (longlong *)0x0) {
    (**(code **)(*plStack_258 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_2f8);
}






// 函数: void FUN_1802c60f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802c60f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plStack_40;
  longlong *plStack_38;
  longlong *plStack_30;
  longlong *plStack_28;
  longlong *plStack_20;
  uint64_t uStack_18;
  
  uStack_18 = 0;
  plStack_40 = (longlong *)0x0;
  plStack_38 = (longlong *)0x0;
  plStack_30 = (longlong *)0x0;
  plStack_28 = (longlong *)0x0;
  plStack_20 = (longlong *)0x0;
  FUN_180247c00(param_1,&plStack_40,param_3,param_4,0xfffffffffffffffe);
  if (plStack_20 != (longlong *)0x0) {
    (**(code **)(*plStack_20 + 0x38))();
  }
  if (plStack_28 != (longlong *)0x0) {
    (**(code **)(*plStack_28 + 0x38))();
  }
  if (plStack_30 != (longlong *)0x0) {
    (**(code **)(*plStack_30 + 0x38))();
  }
  if (plStack_38 != (longlong *)0x0) {
    (**(code **)(*plStack_38 + 0x38))();
  }
  if (plStack_40 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001802c6178. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plStack_40 + 0x38))();
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001802c6312)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




