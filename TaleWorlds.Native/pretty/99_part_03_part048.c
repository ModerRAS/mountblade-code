#include "TaleWorlds.Native.Split.h"

// 99_part_03_part048.c - 6 个函数

// 函数: void FUN_1801fd6e0(longlong param_1,uint64_t *param_2,longlong param_3)
void FUN_1801fd6e0(longlong param_1,uint64_t *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uStackX_8;
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  lVar3 = FUN_1801fd650(param_1,2);
  *(uint *)(param_2 + 0x16) = (uint)(lVar3 != 0);
  lVar3 = FUN_1801fd650(param_1,3);
  *(uint *)((longlong)param_2 + 0xb4) = (uint)(lVar3 != 0);
  if ((*(char *)(param_1 + 0x290) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    uVar1 = func_0x0001801fc7a0();
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x288);
  }
  if ((uVar1 & 2) != 0) {
    lVar3 = FUN_1801fd650(param_1,6);
    uVar4 = 1;
    if (lVar3 != 0) goto LAB_1801fd775;
  }
  uVar4 = 0;
LAB_1801fd775:
  *(int32_t *)(param_2 + 0x17) = uVar4;
  if ((*(char *)(param_1 + 0x290) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    uVar1 = func_0x0001801fc7a0();
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x288);
  }
  *(uint *)((longlong)param_2 + 0xbc) = uVar1 & 4;
  lVar3 = FUN_1801fd650(param_1,1);
  if (lVar3 != 0) {
    *(int32_t *)(param_2 + 0x18) = 1;
    if ((*(char *)(param_1 + 0x248) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
      iVar2 = func_0x0001801fc730();
    }
    else {
      iVar2 = *(int *)(param_1 + 0x240);
    }
    *(uint *)((longlong)param_2 + 0xd4) = (uint)(iVar2 == 2);
    if ((*(char *)(param_1 + 0x284) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
      uVar4 = func_0x0001801fcb80();
    }
    else {
      uVar4 = *(int32_t *)(param_1 + 0x27c);
    }
    if ((*(char *)(param_1 + 0x278) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
      uVar5 = func_0x0001801fcb40();
    }
    else {
      uVar5 = *(int32_t *)(param_1 + 0x270);
    }
    if ((*(char *)(param_1 + 0x26c) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
      uStack_34 = func_0x0001801fcb00();
    }
    else {
      uStack_34 = *(int32_t *)(param_1 + 0x264);
    }
    if ((*(char *)(param_1 + 0x260) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
      uStack_38 = func_0x0001801fcac0();
    }
    else {
      uStack_38 = *(int32_t *)(param_1 + 600);
    }
    *(int32_t *)(param_2 + 0x1e) = uStack_38;
    *(int32_t *)((longlong)param_2 + 0xf4) = uStack_34;
    *(int32_t *)(param_2 + 0x1f) = uVar5;
    *(int32_t *)((longlong)param_2 + 0xfc) = uVar4;
    uStack_30 = uVar5;
    uStack_2c = uVar4;
    if ((*(char *)(param_1 + 0x254) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
      uVar4 = func_0x0001801fc760();
    }
    else {
      uVar4 = *(int32_t *)(param_1 + 0x24c);
    }
    *(int32_t *)(param_2 + 0x20) = uVar4;
  }
  if ((*(char *)(param_1 + 0x290) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    uVar1 = func_0x0001801fc7a0();
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x288);
  }
  *(uint *)((longlong)param_2 + 0xc4) = uVar1 & 0x40;
  if ((*(char *)(param_1 + 0x290) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    uVar1 = func_0x0001801fc7a0();
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x288);
  }
  *(uint *)(param_2 + 0x19) = uVar1 & 0x20;
  if ((*(char *)(param_1 + 0x290) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    uVar1 = func_0x0001801fc7a0();
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x288);
  }
  *(uint *)((longlong)param_2 + 0xcc) = uVar1 & 0x10;
  if ((*(char *)(param_1 + 0x290) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    uVar1 = func_0x0001801fc7a0();
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x288);
  }
  *(uint *)(param_2 + 0x1b) = uVar1 & 0x200;
  lVar3 = FUN_1801fd650(param_1,4);
  *(uint *)((longlong)param_2 + 0xdc) = (uint)(lVar3 != 0);
  if ((*(char *)(param_1 + 0x2fc) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    uVar4 = func_0x0001801fca90();
  }
  else {
    uVar4 = *(int32_t *)(param_1 + 0x2f4);
  }
  *(int32_t *)(param_2 + 0x1c) = uVar4;
  uVar4 = 1;
  if ((*(longlong *)(param_3 + 0x20) == 0) && (*(longlong *)(param_3 + 0x10) == 0)) {
    uVar4 = 0;
  }
  *(int32_t *)((longlong)param_2 + 0xe4) = uVar4;
  *param_2 = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0x3f80000000000000;
  param_2[3] = 0;
  *(int32_t *)(param_2 + 4) = 0;
  *(int32_t *)((longlong)param_2 + 0x24) = 0;
  *(int32_t *)(param_2 + 5) = 0x3f800000;
  *(int32_t *)((longlong)param_2 + 0x2c) = 0;
  *(int32_t *)(param_2 + 6) = 0;
  *(int32_t *)((longlong)param_2 + 0x34) = 0;
  *(int32_t *)(param_2 + 7) = 0;
  *(int32_t *)((longlong)param_2 + 0x3c) = 0x3f800000;
  if ((*(char *)(param_1 + 0x35c) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    FUN_1801fc9f0(*(longlong *)(param_1 + 0x3c8),&uStackX_8);
  }
  else {
    uStackX_8 = *(uint64_t *)(param_1 + 0x34c);
  }
  if ((*(char *)(param_1 + 0x348) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    FUN_1801fc9a0(*(longlong *)(param_1 + 0x3c8),&uStackX_10);
  }
  else {
    uStackX_10 = *(uint64_t *)(param_1 + 0x338);
  }
  if ((*(char *)(param_1 + 0x334) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    FUN_1801fc950(*(longlong *)(param_1 + 0x3c8),&uStackX_18);
  }
  else {
    uStackX_18 = *(uint64_t *)(param_1 + 0x324);
  }
  if ((*(char *)(param_1 + 800) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    FUN_1801fc900(*(longlong *)(param_1 + 0x3c8),&uStack_38);
  }
  else {
    uStack_38 = *(int32_t *)(param_1 + 0x300);
    uStack_34 = *(int32_t *)(param_1 + 0x304);
    uStack_30 = *(int32_t *)(param_1 + 0x308);
    uStack_2c = *(int32_t *)(param_1 + 0x30c);
  }
  FUN_180084c70(param_2,&uStack_38,&uStackX_18,&uStackX_10,&uStackX_8);
  param_2[8] = *param_2;
  param_2[9] = param_2[1];
  param_2[10] = param_2[2];
  param_2[0xb] = param_2[3];
  *(int32_t *)(param_2 + 0xc) = *(int32_t *)(param_2 + 4);
  *(int32_t *)((longlong)param_2 + 100) = *(int32_t *)((longlong)param_2 + 0x24);
  *(int32_t *)(param_2 + 0xd) = *(int32_t *)(param_2 + 5);
  *(int32_t *)((longlong)param_2 + 0x6c) = *(int32_t *)((longlong)param_2 + 0x2c);
  *(int32_t *)(param_2 + 0xe) = *(int32_t *)(param_2 + 6);
  *(int32_t *)((longlong)param_2 + 0x74) = *(int32_t *)((longlong)param_2 + 0x34);
  *(int32_t *)(param_2 + 0xf) = *(int32_t *)(param_2 + 7);
  *(int32_t *)((longlong)param_2 + 0x7c) = *(int32_t *)((longlong)param_2 + 0x3c);
  FUN_180084ae0();
  *(int32_t *)((longlong)param_2 + 0x4c) = 0;
  *(int32_t *)((longlong)param_2 + 0x5c) = 0;
  *(int32_t *)((longlong)param_2 + 0x6c) = 0;
  *(int32_t *)((longlong)param_2 + 0x7c) = 0x3f800000;
  if ((*(char *)(param_1 + 800) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    FUN_1801fc900(*(longlong *)(param_1 + 0x3c8),&uStack_38);
    uVar4 = uStack_38;
    uVar5 = uStack_34;
    uVar6 = uStack_30;
    uVar7 = uStack_2c;
  }
  else {
    uVar4 = *(int32_t *)(param_1 + 0x300);
    uVar5 = *(int32_t *)(param_1 + 0x304);
    uVar6 = *(int32_t *)(param_1 + 0x308);
    uVar7 = *(int32_t *)(param_1 + 0x30c);
  }
  *(int32_t *)(param_2 + 0x10) = uVar4;
  *(int32_t *)((longlong)param_2 + 0x84) = uVar5;
  *(int32_t *)(param_2 + 0x11) = uVar6;
  *(int32_t *)((longlong)param_2 + 0x8c) = uVar7;
  *(int32_t *)((longlong)param_2 + 0x8c) = 0;
  if ((*(char *)(param_1 + 0x334) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    FUN_1801fc950(*(longlong *)(param_1 + 0x3c8),&uStackX_8);
  }
  else {
    uStackX_8 = *(uint64_t *)(param_1 + 0x324);
  }
  *(int32_t *)(param_2 + 0x12) = (int32_t)uStackX_8;
  if ((*(char *)(param_1 + 0x334) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    FUN_1801fc950(*(longlong *)(param_1 + 0x3c8),&uStackX_8);
  }
  else {
    uStackX_8 = *(uint64_t *)(param_1 + 0x324);
  }
  *(int32_t *)((longlong)param_2 + 0x94) = uStackX_8._4_4_;
  if ((*(char *)(param_1 + 0x348) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    FUN_1801fc9a0(*(longlong *)(param_1 + 0x3c8),&uStackX_8);
  }
  else {
    uStackX_8 = *(uint64_t *)(param_1 + 0x338);
  }
  *(int32_t *)(param_2 + 0x13) = (int32_t)uStackX_8;
  if ((*(char *)(param_1 + 0x348) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    FUN_1801fc9a0(*(longlong *)(param_1 + 0x3c8),&uStackX_8);
  }
  else {
    uStackX_8 = *(uint64_t *)(param_1 + 0x338);
  }
  *(int32_t *)((longlong)param_2 + 0x9c) = uStackX_8._4_4_;
  if ((*(char *)(param_1 + 0x35c) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    FUN_1801fc9f0(*(longlong *)(param_1 + 0x3c8),&uStackX_8);
  }
  else {
    uStackX_8 = *(uint64_t *)(param_1 + 0x34c);
  }
  *(int32_t *)(param_2 + 0x14) = (int32_t)uStackX_8;
  if ((*(char *)(param_1 + 0x35c) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    FUN_1801fc9f0(*(longlong *)(param_1 + 0x3c8),&uStackX_8);
  }
  else {
    uStackX_8 = *(uint64_t *)(param_1 + 0x34c);
  }
  *(int32_t *)((longlong)param_2 + 0xa4) = uStackX_8._4_4_;
  param_2[0x15] = 0;
  if ((*(char *)(param_1 + 0x2c0) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    uVar4 = func_0x0001801fc880();
  }
  else {
    uVar4 = *(int32_t *)(param_1 + 0x2b8);
  }
  *(int32_t *)(param_2 + 0x21) = uVar4;
  if ((*(char *)(param_1 + 0x2b4) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    uVar4 = func_0x0001801fc840();
  }
  else {
    uVar4 = *(int32_t *)(param_1 + 0x2ac);
  }
  *(int32_t *)((longlong)param_2 + 0x10c) = uVar4;
  *(int32_t *)(param_2 + 0x22) = 0;
  if ((*(char *)(param_1 + 0x2a8) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    uVar4 = func_0x0001801fc800();
  }
  else {
    uVar4 = *(int32_t *)(param_1 + 0x2a0);
  }
  *(int32_t *)((longlong)param_2 + 0x114) = uVar4;
  if ((*(char *)(param_1 + 0x2cc) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    uVar4 = func_0x0001801fc8c0();
  }
  else {
    uVar4 = *(int32_t *)(param_1 + 0x2c4);
  }
  *(int32_t *)(param_2 + 0x23) = uVar4;
  if ((*(char *)(param_1 + 0x2f0) == '\0') && (*(longlong *)(param_1 + 0x3c8) != 0)) {
    FUN_1801fca40(*(longlong *)(param_1 + 0x3c8),&uStack_38);
  }
  else {
    uStack_38 = *(int32_t *)(param_1 + 0x2d0);
    uStack_34 = *(int32_t *)(param_1 + 0x2d4);
    uStack_30 = *(int32_t *)(param_1 + 0x2d8);
    uStack_2c = *(int32_t *)(param_1 + 0x2dc);
  }
  *(int32_t *)(param_2 + 0x32) = uStack_38;
  *(int32_t *)((longlong)param_2 + 0x194) = uStack_34;
  *(int32_t *)(param_2 + 0x33) = uStack_30;
  *(int32_t *)((longlong)param_2 + 0x19c) = uStack_2c;
  *(int32_t *)((longlong)param_2 + 0x19c) = 0;
  return;
}






// 函数: void FUN_1801fddb0(longlong param_1)
void FUN_1801fddb0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(param_1 + 8);
  lVar3 = 4;
  uVar2 = 0;
  while( true ) {
    lVar1 = *plVar4;
    if (lVar1 != 0) break;
    *plVar4 = 0;
    plVar4 = plVar4 + 1;
    lVar3 = lVar3 + -1;
    if (lVar3 == 0) {
      *(uint64_t *)(param_1 + 0x28) = &unknown_var_3456_ptr;
      if (*(longlong *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(param_1 + 0x30) = 0;
      *(int32_t *)(param_1 + 0x40) = 0;
      *(uint64_t *)(param_1 + 0x28) = &unknown_var_720_ptr;
      return;
    }
  }
  plVar4 = (longlong *)(lVar1 + 0x360);
  lVar3 = *plVar4;
  if (*(longlong *)(lVar1 + 0x368) - lVar3 >> 3 != 0) {
    do {
      if (*(longlong *)(lVar3 + uVar2 * 8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(*plVar4 + uVar2 * 8) = 0;
      uVar2 = uVar2 + 1;
      lVar3 = *plVar4;
    } while (uVar2 < (ulonglong)(*(longlong *)(lVar1 + 0x368) - lVar3 >> 3));
  }
  *(longlong *)(lVar1 + 0x368) = lVar3;
  *(uint64_t *)(lVar1 + 0x3a8) = &unknown_var_3456_ptr;
  if (*(longlong *)(lVar1 + 0x3b0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(lVar1 + 0x3b0) = 0;
  *(int32_t *)(lVar1 + 0x3c0) = 0;
  *(uint64_t *)(lVar1 + 0x3a8) = &unknown_var_720_ptr;
  *(uint64_t *)(lVar1 + 0x388) = &unknown_var_3456_ptr;
  if (*(longlong *)(lVar1 + 0x390) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(lVar1 + 0x390) = 0;
  *(int32_t *)(lVar1 + 0x3a0) = 0;
  *(uint64_t *)(lVar1 + 0x388) = &unknown_var_720_ptr;
  if (*plVar4 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_1800596a0(lVar1 + 0x1f8);
  FUN_1808fc8a8(lVar1,0x48,7,FUN_1800596a0);
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801fdf50(longlong param_1,uint64_t param_2,longlong param_3)
void FUN_1801fdf50(longlong param_1,uint64_t param_2,longlong param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int32_t uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  uint uVar9;
  uint64_t *puVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  uint64_t uVar16;
  void *puVar17;
  char *pcVar18;
  int32_t uVar19;
  uint64_t uVar20;
  int32_t uVar21;
  char *pcVar10;
  
  uVar16 = 0xfffffffffffffffe;
  pcVar13 = "name";
  do {
    pcVar10 = pcVar13;
    pcVar13 = pcVar10 + 1;
  } while (*pcVar13 != '\0');
  puVar11 = *(uint64_t **)(param_3 + 0x40);
  pcVar13 = (char *)0x0;
  do {
    if (puVar11 == (uint64_t *)0x0) {
LAB_1801fdfff:
      puVar11 = (uint64_t *)(param_1 + 8);
      pcVar10 = pcVar13;
      do {
        lVar8 = FUN_180149750(pcVar10);
        puVar17 = &unknown_var_3456_ptr;
        uVar20 = 0;
        pcVar18 = (char *)0x0;
        uVar19 = 0;
        pcVar6 = pcVar13;
        if (*(int *)(lVar8 + 0x10) != 0) {
          iVar3 = *(int *)(lVar8 + 0x10) + 1;
          if (iVar3 < 0x10) {
            iVar3 = 0x10;
          }
          pcVar6 = (char *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar3,0x13);
          uVar21 = (int32_t)((ulonglong)uVar20 >> 0x20);
          *pcVar6 = '\0';
          pcVar18 = pcVar6;
          uVar4 = FUN_18064e990(pcVar6);
          uVar20 = CONCAT44(uVar21,uVar4);
          if (0 < *(int *)(lVar8 + 0x10)) {
            puVar17 = &system_buffer_ptr;
            if (*(void **)(lVar8 + 8) != (void *)0x0) {
              puVar17 = *(void **)(lVar8 + 8);
            }
                    // WARNING: Subroutine does not return
            memcpy(pcVar6,puVar17,(longlong)(*(int *)(lVar8 + 0x10) + 1));
          }
        }
        if ((*(longlong *)(lVar8 + 8) != 0) && (uVar19 = 0, pcVar6 != (char *)0x0)) {
          *pcVar6 = '\0';
        }
        pcVar15 = "";
        if (pcVar6 != (char *)0x0) {
          pcVar15 = pcVar6;
        }
        cVar1 = *pcVar15;
        pcVar14 = pcVar15;
        while (cVar1 != '\0') {
          pcVar14 = pcVar14 + 1;
          cVar1 = *pcVar14;
        }
        for (pcVar2 = *(char **)(param_3 + 0x30); pcVar12 = pcVar13, pcVar2 != (char *)0x0;
            pcVar2 = *(char **)(pcVar2 + 0x58)) {
          pcVar5 = *(char **)pcVar2;
          if (pcVar5 == (char *)0x0) {
            pcVar5 = (char *)0x180d48d24;
            pcVar7 = pcVar13;
          }
          else {
            pcVar7 = *(char **)(pcVar2 + 0x10);
          }
          if (pcVar7 == pcVar14 + -(longlong)pcVar15) {
            pcVar7 = pcVar7 + (longlong)pcVar5;
            pcVar12 = pcVar2;
            if (pcVar7 <= pcVar5) break;
            lVar8 = (longlong)pcVar15 - (longlong)pcVar5;
            while (*pcVar5 == pcVar5[lVar8]) {
              pcVar5 = pcVar5 + 1;
              if (pcVar7 <= pcVar5) goto LAB_1801fe14e;
            }
          }
        }
LAB_1801fe14e:
        FUN_1801fa810(*puVar11,param_2,pcVar12,pcVar12,uVar16,puVar17,pcVar18,uVar19,uVar20);
        if (pcVar6 != (char *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(pcVar6);
        }
        uVar9 = (int)pcVar10 + 1;
        pcVar10 = (char *)(ulonglong)uVar9;
        puVar11 = puVar11 + 1;
        if (3 < (int)uVar9) {
          return;
        }
      } while( true );
    }
    pcVar6 = (char *)*puVar11;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = (char *)0x180d48d24;
      pcVar18 = pcVar13;
    }
    else {
      pcVar18 = (char *)puVar11[2];
    }
    if (pcVar18 == pcVar10 + -0x180a03a83) {
      pcVar18 = pcVar18 + (longlong)pcVar6;
      if (pcVar18 <= pcVar6) {
LAB_1801fdfe6:
        lVar8 = 0x180d48d24;
        if (puVar11[1] != 0) {
          lVar8 = puVar11[1];
        }
        (**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))
                  (param_1 + 0x28,lVar8,pcVar18,puVar11,0xfffffffffffffffe);
        goto LAB_1801fdfff;
      }
      lVar8 = (longlong)&system_data_3a84 - (longlong)pcVar6;
      while (*pcVar6 == pcVar6[lVar8]) {
        pcVar6 = pcVar6 + 1;
        if (pcVar18 <= pcVar6) goto LAB_1801fdfe6;
      }
    }
    puVar11 = (uint64_t *)puVar11[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801fe1c0(uint64_t *param_1)
void FUN_1801fe1c0(uint64_t *param_1)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  (**(code **)(param_1[5] + 0x10))(param_1 + 5,&unknown_var_9856_ptr);
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x3d8,8,3);
  lVar2 = FUN_1801fa330(uVar1);
  param_1[1] = lVar2;
  iVar4 = 1;
  *(int32_t *)(lVar2 + 0x3d0) = 0;
  *param_1 = param_1[1];
  plVar3 = param_1 + 2;
  do {
    uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x3d8,8,3);
    lVar2 = FUN_1801fa330(uVar1);
    *plVar3 = lVar2;
    *(uint64_t *)(lVar2 + 0x3c8) = *param_1;
    *(int *)(*plVar3 + 0x3d0) = iVar4;
    iVar4 = iVar4 + 1;
    plVar3 = plVar3 + 1;
  } while (iVar4 < 4);
  return;
}






// 函数: void FUN_1801fe290(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801fe290(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1801fef10(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1801fe2c0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801fe2c0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1801fef10(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




