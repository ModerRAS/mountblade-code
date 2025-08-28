#include "TaleWorlds.Native.Split.h"

// 99_part_07_part014.c - 11 个函数

// 函数: void FUN_1804a7c00(longlong param_1)
void FUN_1804a7c00(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_1804a7ac0();
  if (*(longlong *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar2 = *(uint64_t **)(param_1 + 0x10);
  if (puVar2 != (uint64_t *)0x0) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



longlong FUN_1804a7c60(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return param_1;
}






// 函数: void FUN_1804a7cb0(uint64_t *param_1)
void FUN_1804a7cb0(uint64_t *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  uVar4 = 0;
  if (0 < *(int *)((longlong)param_1 + 4)) {
    uVar5 = uVar3;
    if (*(int *)((longlong)param_1 + 4) < 1) goto LAB_1804a7d37;
    do {
      uVar4 = (uint)uVar5;
      lVar2 = *(longlong *)(param_1[6] + (longlong)((int)uVar4 >> 10) * 8);
      lVar1 = (longlong)(int)(*(uint *)(param_1 + 10) & uVar4) * 0x68;
      if ((*(int *)(lVar2 + lVar1) != -1) && (lVar2 = lVar1 + 8 + lVar2, lVar2 != 0)) {
        if (*(longlong *)(lVar2 + 0x40) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        if (*(longlong *)(lVar2 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
LAB_1804a7d37:
      uVar5 = (ulonglong)(uVar4 + 1);
    } while ((int)(uVar4 + 1) < *(int *)((longlong)param_1 + 4));
  }
  lVar2 = param_1[6];
  uVar5 = uVar3;
  if (param_1[7] - lVar2 >> 3 != 0) {
    do {
      if (*(longlong *)(uVar3 + lVar2) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(uVar3 + lVar2) = 0;
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 8;
      lVar2 = param_1[6];
      uVar5 = (ulonglong)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(param_1[7] - lVar2 >> 3));
  }
  param_1[7] = lVar2;
  param_1[3] = param_1[2];
  *param_1 = 0;
  return;
}






// 函数: void FUN_1804a7db0(longlong param_1)
void FUN_1804a7db0(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_1804a7cb0();
  if (*(longlong *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar2 = *(uint64_t **)(param_1 + 0x10);
  if (puVar2 != (uint64_t *)0x0) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a7e10(uint64_t *param_1)
void FUN_1804a7e10(uint64_t *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  lVar1 = param_1[6];
  uVar2 = 0;
  uVar4 = uVar2;
  if (param_1[7] - lVar1 >> 3 != 0) {
    do {
      if (*(longlong *)(uVar4 + lVar1) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(uVar4 + lVar1) = 0;
      uVar3 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar3;
      lVar1 = param_1[6];
      uVar4 = uVar4 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(param_1[7] - lVar1 >> 3));
  }
  param_1[7] = lVar1;
  param_1[3] = param_1[2];
  *param_1 = 0;
  return;
}






// 函数: void FUN_1804a7e3a(void)
void FUN_1804a7e3a(void)

{
  ulonglong in_RAX;
  ulonglong *unaff_RBX;
  ulonglong unaff_RBP;
  int unaff_ESI;
  ulonglong uVar1;
  
  uVar1 = unaff_RBP & 0xffffffff;
  do {
    if (*(longlong *)(uVar1 + in_RAX) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(ulonglong *)(uVar1 + in_RAX) = unaff_RBP;
    unaff_ESI = unaff_ESI + 1;
    in_RAX = unaff_RBX[6];
    uVar1 = uVar1 + 8;
  } while ((ulonglong)(longlong)unaff_ESI < (ulonglong)((longlong)(unaff_RBX[7] - in_RAX) >> 3));
  unaff_RBX[7] = in_RAX;
  unaff_RBX[3] = unaff_RBX[2];
  *unaff_RBX = unaff_RBP;
  return;
}






// 函数: void FUN_1804a7e79(void)
void FUN_1804a7e79(void)

{
  uint64_t in_RAX;
  uint64_t *unaff_RBX;
  uint64_t unaff_RBP;
  
  unaff_RBX[7] = in_RAX;
  unaff_RBX[3] = unaff_RBX[2];
  *unaff_RBX = unaff_RBP;
  return;
}






// 函数: void FUN_1804a7ea0(longlong param_1)
void FUN_1804a7ea0(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_1804a7e10();
  if (*(longlong *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar2 = *(uint64_t **)(param_1 + 0x10);
  if (puVar2 != (uint64_t *)0x0) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a7f00(uint64_t *param_1)
void FUN_1804a7f00(uint64_t *param_1)

{
  *param_1 = &unknown_var_1952_ptr;
  FUN_1804a7e10(param_1 + 0x598);
  if (param_1[0x59e] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x59a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180368c20();
  FUN_1804a7cb0(param_1 + 0x587);
  if (param_1[0x58d] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x589] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _Mtx_destroy_in_situ();
  FUN_18017b400(param_1 + 0x577,param_1[0x579]);
  FUN_18004b730();
  FUN_18004b730();
  FUN_18015b4f0();
  FUN_1804a7ac0(param_1 + 0x559);
  if (param_1[0x55f] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x55b] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_1801b99e0(param_1 + 0xd8);
  FUN_1804a7730(param_1 + 0xcd);
  FUN_1804a7e10(param_1 + 0xc2);
  if (param_1[200] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0xc4] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_1804a7910(param_1 + 0xb7);
  FUN_1804a77f0(param_1 + 0xac);
  FUN_1804a77f0(param_1 + 0xa1);
  FUN_1804a7730(param_1 + 0x96);
  FUN_1804a7730(param_1 + 0x8b);
  if ((longlong *)param_1[0x89] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x89] + 0x38))();
  }
  if ((longlong *)param_1[0x88] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x88] + 0x38))();
  }
  if (param_1[0x84] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_1804a7730(param_1 + 0x79);
  FUN_1804a7730(param_1 + 0x6e);
  FUN_1808fc8a8(param_1 + 0x16,0x58,8,FUN_1804a7600);
  if (param_1[0xd] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &unknown_var_3952_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



uint64_t * FUN_1804a8200(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_4296_ptr;
  param_1[0x1e] = &unknown_var_3456_ptr;
  if (param_1[0x1f] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x1f] = 0;
  *(int32_t *)(param_1 + 0x21) = 0;
  param_1[0x1e] = &unknown_var_720_ptr;
  param_1[0x1a] = &unknown_var_3456_ptr;
  if (param_1[0x1b] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x1b] = 0;
  *(int32_t *)(param_1 + 0x1d) = 0;
  param_1[0x1a] = &unknown_var_720_ptr;
  param_1[0x16] = &unknown_var_3456_ptr;
  if (param_1[0x17] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x17] = 0;
  *(int32_t *)(param_1 + 0x19) = 0;
  param_1[0x16] = &unknown_var_720_ptr;
  param_1[0x12] = &unknown_var_3456_ptr;
  if (param_1[0x13] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x15) = 0;
  param_1[0x12] = &unknown_var_720_ptr;
  param_1[0xe] = &unknown_var_3456_ptr;
  if (param_1[0xf] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  param_1[0xe] = &unknown_var_720_ptr;
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x118);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a8340(uint64_t *param_1)
void FUN_1804a8340(uint64_t *param_1)

{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *puStack_a0;
  uint64_t *puStack_98;
  int32_t uStack_90;
  uint64_t uStack_88;
  
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  FUN_1803456e0();
  *puVar3 = &unknown_var_4296_ptr;
  puVar3[0xe] = &unknown_var_720_ptr;
  puVar3[0xf] = 0;
  *(int32_t *)(puVar3 + 0x10) = 0;
  puVar3[0xe] = &unknown_var_3456_ptr;
  puVar3[0x11] = 0;
  puVar3[0xf] = 0;
  *(int32_t *)(puVar3 + 0x10) = 0;
  param_1[0x12] = &unknown_var_720_ptr;
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x14) = 0;
  param_1[0x12] = &unknown_var_3456_ptr;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x14) = 0;
  puVar3 = param_1 + 0x16;
  *puVar3 = &unknown_var_720_ptr;
  param_1[0x17] = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *puVar3 = &unknown_var_3456_ptr;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  param_1[0x1a] = &unknown_var_720_ptr;
  param_1[0x1b] = 0;
  *(int32_t *)(param_1 + 0x1c) = 0;
  param_1[0x1a] = &unknown_var_3456_ptr;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  *(int32_t *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = &unknown_var_720_ptr;
  param_1[0x1f] = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  param_1[0x1e] = &unknown_var_3456_ptr;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  puStack_a0 = &unknown_var_3456_ptr;
  uStack_88 = 0;
  puStack_98 = (uint64_t *)0x0;
  uStack_90 = 0;
  puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_98 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_88 = CONCAT44(uStack_88._4_4_,uVar1);
  *puVar2 = 0x656d614e6873654d;
  *(int8_t *)(puVar2 + 1) = 0;
  uStack_90 = 8;
  FUN_1803460a0(param_1,&puStack_a0,puVar3,0,uVar4);
  puStack_a0 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a8630(ulonglong param_1)
void FUN_1804a8630(ulonglong param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  uint64_t uVar5;
  longlong ****pppplVar6;
  longlong ****pppplVar7;
  longlong ***ppplVar8;
  int iVar9;
  byte *pbVar10;
  longlong *****ppppplVar11;
  longlong lVar12;
  uint64_t *puVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  void *puVar18;
  int32_t uVar19;
  int8_t auStack_178 [32];
  int32_t uStack_158;
  int32_t uStack_150;
  int32_t uStack_148;
  int32_t uStack_140;
  int32_t uStack_138;
  int8_t uStack_130;
  int8_t uStack_128;
  int8_t uStack_120;
  int8_t uStack_118;
  longlong ****pppplStack_108;
  longlong ****pppplStack_100;
  longlong ****pppplStack_f8;
  longlong ****apppplStack_f0 [2];
  uint64_t uStack_e0;
  void *puStack_d8;
  int8_t *puStack_d0;
  int iStack_c8;
  int8_t auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_e0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  lVar12 = 0;
  lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x260);
  uVar14 = param_1;
  if (lVar17 == 0) {
LAB_1804a86c5:
    if (*(int *)(param_1 + 0x80) != 0) {
      FUN_1800b3970(uVar14,&pppplStack_100,param_1 + 0x70,0);
      if ((longlong *****)pppplStack_100 != (longlong *****)0x0) {
        ppppplVar11 = (longlong *****)FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
        *ppppplVar11 = (longlong ****)&unknown_var_1864_ptr;
        *ppppplVar11 = (longlong ****)&unknown_var_1608_ptr;
        ppppplVar11[9] = (longlong ****)0x0;
        ppppplVar11[10] = (longlong ****)0x0;
        *ppppplVar11 = (longlong ****)&unknown_var_1912_ptr;
        ppppplVar11[0xc] = (longlong ****)0x0;
        ppppplVar11[0xd] = (longlong ****)0x0;
        ppppplVar11[0xb] = (longlong ****)0x0;
        pppplStack_f8 = (longlong ****)ppppplVar11;
        FUN_1802f8a10(ppppplVar11,pppplStack_100);
        FUN_1802ec3d0(*(uint64_t *)(param_1 + 0x18),pppplStack_100,ppppplVar11);
      }
      if ((longlong *****)pppplStack_100 != (longlong *****)0x0) {
        (*(code *)(*pppplStack_100)[7])();
      }
    }
  }
  else {
    lVar17 = *(longlong *)(lVar17 + 0x208);
    uVar3 = *(uint *)(lVar17 + 0x20);
    uVar15 = *(uint *)(param_1 + 0x80);
    uVar14 = (ulonglong)uVar15;
    if (uVar3 == uVar15) {
      if (uVar3 != 0) {
        pbVar10 = *(byte **)(lVar17 + 0x18);
        lVar17 = *(longlong *)(param_1 + 0x78) - (longlong)pbVar10;
        do {
          bVar2 = pbVar10[lVar17];
          uVar14 = (ulonglong)bVar2;
          uVar15 = (uint)*pbVar10 - (uint)bVar2;
          if (uVar15 != 0) break;
          pbVar10 = pbVar10 + 1;
        } while (bVar2 != 0);
      }
    }
    else if (uVar3 != 0) goto LAB_1804a86c5;
    if (uVar15 != 0) goto LAB_1804a86c5;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x260) == 0) goto LAB_1804a8e62;
  iVar9 = *(int *)(param_1 + 0xe0);
  iVar16 = *(int *)(param_1 + 0xa0);
  if (iVar9 == iVar16) {
    if (iVar9 != 0) {
      pbVar10 = *(byte **)(param_1 + 0xd8);
      lVar17 = *(longlong *)(param_1 + 0x98) - (longlong)pbVar10;
      do {
        pbVar1 = pbVar10 + lVar17;
        iVar16 = (uint)*pbVar10 - (uint)*pbVar1;
        if (iVar16 != 0) break;
        pbVar10 = pbVar10 + 1;
      } while (*pbVar1 != 0);
    }
LAB_1804a87cd:
    if (iVar16 != 0) goto LAB_1804a87d3;
  }
  else {
    if (iVar9 == 0) goto LAB_1804a87cd;
LAB_1804a87d3:
    puStack_d8 = &unknown_var_3480_ptr;
    puStack_d0 = auStack_c0;
    auStack_c0[0] = 0;
    iStack_c8 = *(int *)(param_1 + 0xa0);
    puVar18 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x98) != (void *)0x0) {
      puVar18 = *(void **)(param_1 + 0x98);
    }
    strcpy_s(auStack_c0,0x40,puVar18);
    if (((0 < iStack_c8) && (iVar9 = FUN_18053a2e0(&system_data_5f30,&puStack_d8), iVar9 != -1)) &&
       (iVar9 = *(int *)(_DAT_180c95f68 + (longlong)iVar9 * 4), iVar9 != -1)) {
      lVar12 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar9 * 8);
    }
    puStack_d8 = &unknown_var_720_ptr;
    if (lVar12 != 0) {
      FUN_180627be0(param_1 + 0xd0,param_1 + 0x90);
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x260);
      plVar4 = *(longlong **)(lVar17 + 0x210);
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_128 = 1;
      uStack_130 = 0;
      uStack_138 = 0x3f800000;
      uStack_140 = 0;
      uStack_148 = 0x4004;
      uStack_150 = 0;
      uStack_158 = 0x3f800000;
      (**(code **)(*plVar4 + 0x70))(plVar4,0,lVar12,*(uint64_t *)(lVar17 + 0x208));
    }
  }
  iVar9 = *(int *)(param_1 + 0x100);
  iVar16 = *(int *)(param_1 + 0xc0);
  if (iVar9 == iVar16) {
    if (iVar9 != 0) {
      pbVar10 = *(byte **)(param_1 + 0xf8);
      lVar17 = *(longlong *)(param_1 + 0xb8) - (longlong)pbVar10;
      do {
        pbVar1 = pbVar10 + lVar17;
        iVar16 = (uint)*pbVar10 - (uint)*pbVar1;
        if (iVar16 != 0) break;
        pbVar10 = pbVar10 + 1;
      } while (*pbVar1 != 0);
    }
LAB_1804a892d:
    if (iVar16 == 0) goto LAB_1804a8e62;
  }
  else if (iVar9 == 0) goto LAB_1804a892d;
  FUN_180627be0(param_1 + 0xf0,param_1 + 0xb0);
  uVar19 = FUN_1802fc320(*(uint64_t *)(*(longlong *)(param_1 + 0x18) + 0x260));
  puStack_d8 = &unknown_var_3432_ptr;
  puStack_d0 = auStack_c0;
  iStack_c8 = 0;
  auStack_c0[0] = 0;
  lVar17 = -1;
  if (*(longlong *)(&unknown_var_6160_ptr + (longlong)(*(int *)(param_1 + 0x110) % 10) * 8) != 0) {
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(*(longlong *)
                        (&unknown_var_6160_ptr + (longlong)(*(int *)(param_1 + 0x110) % 10) * 8) + lVar12)
             != '\0');
    iStack_c8 = (int)lVar12;
    uVar19 = strcpy_s(auStack_c0,0x80);
  }
  FUN_1800c48e0(uVar19,&pppplStack_100,&puStack_d8,1);
  puStack_d8 = &unknown_var_720_ptr;
  uVar5 = *(uint64_t *)(*(longlong *)(param_1 + 0x18) + 0x260);
  pppplStack_f8 = (longlong ****)&pppplStack_108;
  pppplStack_108 = pppplStack_100;
  if ((longlong *****)pppplStack_100 != (longlong *****)0x0) {
    (*(code *)(*pppplStack_100)[5])();
  }
  apppplStack_f0[0] = (longlong ****)&pppplStack_108;
  uVar19 = FUN_1802fc0f0(uVar5,pppplStack_108);
  if ((longlong *****)pppplStack_108 != (longlong *****)0x0) {
    uVar19 = (*(code *)(*pppplStack_108)[7])();
  }
  puStack_d8 = &unknown_var_3432_ptr;
  puStack_d0 = auStack_c0;
  iStack_c8 = 0;
  auStack_c0[0] = 0;
  if (*(longlong *)(&unknown_var_6080_ptr + (longlong)(*(int *)(param_1 + 0x110) % 10) * 8) != 0) {
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(*(longlong *)
                        (&unknown_var_6080_ptr + (longlong)(*(int *)(param_1 + 0x110) % 10) * 8) + lVar12)
             != '\0');
    iStack_c8 = (int)lVar12;
    uVar19 = strcpy_s(auStack_c0,0x80);
  }
  puVar13 = (uint64_t *)FUN_1800c48e0(uVar19,&pppplStack_f8,&puStack_d8,1);
  pppplVar6 = (longlong ****)*puVar13;
  *puVar13 = 0;
  apppplStack_f0[0] = pppplStack_100;
  if ((longlong *****)pppplStack_100 != (longlong *****)0x0) {
    pppplVar7 = (longlong ****)*pppplStack_100;
    pppplStack_100 = pppplVar6;
    (*(code *)pppplVar7[7])();
    pppplVar6 = pppplStack_100;
  }
  pppplStack_100 = pppplVar6;
  if ((longlong *****)pppplStack_f8 != (longlong *****)0x0) {
    (*(code *)(*pppplStack_f8)[7])();
  }
  puStack_d8 = &unknown_var_720_ptr;
  uVar5 = *(uint64_t *)(*(longlong *)(param_1 + 0x18) + 0x260);
  pppplStack_f8 = (longlong ****)&pppplStack_108;
  pppplStack_108 = pppplStack_100;
  if (pppplStack_100 != (longlong ****)0x0) {
    (*(code *)(*pppplStack_100)[5])();
  }
  apppplStack_f0[0] = (longlong ****)&pppplStack_108;
  uVar19 = FUN_1802fc0f0(uVar5,pppplStack_108);
  if (pppplStack_108 != (longlong ****)0x0) {
    uVar19 = (*(code *)(*pppplStack_108)[7])();
  }
  puStack_d8 = &unknown_var_3432_ptr;
  puStack_d0 = auStack_c0;
  iStack_c8 = 0;
  auStack_c0[0] = 0;
  if (*(longlong *)(&unknown_var_6320_ptr + (longlong)(*(int *)(param_1 + 0x110) % 10) * 8) != 0) {
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(*(longlong *)
                        (&unknown_var_6320_ptr + (longlong)(*(int *)(param_1 + 0x110) % 10) * 8) + lVar12)
             != '\0');
    iStack_c8 = (int)lVar12;
    uVar19 = strcpy_s(auStack_c0,0x80);
  }
  puVar13 = (uint64_t *)FUN_1800c48e0(uVar19,apppplStack_f0,&puStack_d8,1);
  pppplVar6 = (longlong ****)*puVar13;
  *puVar13 = 0;
  pppplStack_f8 = pppplStack_100;
  if (pppplStack_100 != (longlong ****)0x0) {
    ppplVar8 = *pppplStack_100;
    pppplStack_100 = pppplVar6;
    (*(code *)ppplVar8[7])();
    pppplVar6 = pppplStack_100;
  }
  pppplStack_100 = pppplVar6;
  if ((longlong *****)apppplStack_f0[0] != (longlong *****)0x0) {
    (*(code *)(*apppplStack_f0[0])[7])();
  }
  puStack_d8 = &unknown_var_720_ptr;
  uVar5 = *(uint64_t *)(*(longlong *)(param_1 + 0x18) + 0x260);
  pppplStack_f8 = (longlong ****)&pppplStack_108;
  pppplStack_108 = pppplStack_100;
  if (pppplStack_100 != (longlong ****)0x0) {
    (*(code *)(*pppplStack_100)[5])();
  }
  apppplStack_f0[0] = (longlong ****)&pppplStack_108;
  uVar19 = FUN_1802fc0f0(uVar5,pppplStack_108);
  if (pppplStack_108 != (longlong ****)0x0) {
    uVar19 = (*(code *)(*pppplStack_108)[7])();
  }
  puStack_d8 = &unknown_var_3432_ptr;
  puStack_d0 = auStack_c0;
  iStack_c8 = 0;
  auStack_c0[0] = 0;
  if (*(longlong *)(&unknown_var_6400_ptr + (longlong)(*(int *)(param_1 + 0x110) % 10) * 8) != 0) {
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(*(longlong *)
                        (&unknown_var_6400_ptr + (longlong)(*(int *)(param_1 + 0x110) % 10) * 8) + lVar12)
             != '\0');
    iStack_c8 = (int)lVar12;
    uVar19 = strcpy_s(auStack_c0,0x80);
  }
  puVar13 = (uint64_t *)FUN_1800c48e0(uVar19,apppplStack_f0,&puStack_d8,1);
  ppppplVar11 = (longlong *****)*puVar13;
  *puVar13 = 0;
  pppplStack_f8 = pppplStack_100;
  if (pppplStack_100 != (longlong ****)0x0) {
    ppplVar8 = *pppplStack_100;
    pppplStack_100 = (longlong ****)ppppplVar11;
    (*(code *)ppplVar8[7])();
    ppppplVar11 = (longlong *****)pppplStack_100;
  }
  pppplStack_100 = (longlong ****)ppppplVar11;
  if ((longlong *****)apppplStack_f0[0] != (longlong *****)0x0) {
    (*(code *)(*apppplStack_f0[0])[7])();
  }
  puStack_d8 = &unknown_var_720_ptr;
  uVar5 = *(uint64_t *)(*(longlong *)(param_1 + 0x18) + 0x260);
  pppplStack_f8 = (longlong ****)&pppplStack_108;
  pppplStack_108 = pppplStack_100;
  if ((longlong *****)pppplStack_100 != (longlong *****)0x0) {
    (*(code *)(*pppplStack_100)[5])();
  }
  apppplStack_f0[0] = (longlong ****)&pppplStack_108;
  uVar19 = FUN_1802fc0f0(uVar5,pppplStack_108);
  if ((longlong *****)pppplStack_108 != (longlong *****)0x0) {
    uVar19 = (*(code *)(*pppplStack_108)[7])();
  }
  puStack_d8 = &unknown_var_3432_ptr;
  puStack_d0 = auStack_c0;
  iStack_c8 = 0;
  auStack_c0[0] = 0;
  if (*(longlong *)(&unknown_var_6240_ptr + (longlong)(*(int *)(param_1 + 0x110) % 10) * 8) != 0) {
    do {
      lVar17 = lVar17 + 1;
    } while (*(char *)(*(longlong *)
                        (&unknown_var_6240_ptr + (longlong)(*(int *)(param_1 + 0x110) % 10) * 8) + lVar17)
             != '\0');
    iStack_c8 = (int)lVar17;
    uVar19 = strcpy_s(auStack_c0,0x80);
  }
  puVar13 = (uint64_t *)FUN_1800c48e0(uVar19,apppplStack_f0,&puStack_d8,0);
  ppppplVar11 = (longlong *****)*puVar13;
  *puVar13 = 0;
  pppplStack_f8 = pppplStack_100;
  if ((longlong *****)pppplStack_100 != (longlong *****)0x0) {
    pppplVar6 = (longlong ****)*pppplStack_100;
    pppplStack_100 = (longlong ****)ppppplVar11;
    (*(code *)pppplVar6[7])();
    ppppplVar11 = (longlong *****)pppplStack_100;
  }
  pppplStack_100 = (longlong ****)ppppplVar11;
  if ((longlong *****)apppplStack_f0[0] != (longlong *****)0x0) {
    (*(code *)(*apppplStack_f0[0])[7])();
  }
  puStack_d8 = &unknown_var_720_ptr;
  if ((longlong *****)pppplStack_100 != (longlong *****)0x0) {
    uVar5 = *(uint64_t *)(*(longlong *)(param_1 + 0x18) + 0x260);
    pppplStack_f8 = (longlong ****)&pppplStack_108;
    pppplStack_108 = pppplStack_100;
    (*(code *)(*pppplStack_100)[5])();
    FUN_1802fc2e0(uVar5,&pppplStack_108);
  }
  if ((longlong *****)pppplStack_100 != (longlong *****)0x0) {
    (*(code *)(*pppplStack_100)[7])();
  }
LAB_1804a8e62:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a8e90(uint64_t param_1)
void FUN_1804a8e90(uint64_t param_1)

{
  int8_t auStack_1e8 [32];
  int32_t uStack_1c8;
  void **appuStack_1c0 [2];
  uint64_t uStack_1b0;
  void *apuStack_1a8 [11];
  int32_t uStack_150;
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_1b0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_1e8;
  uStack_1c8 = 0;
  puStack_148 = &unknown_var_3480_ptr;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 8;
  strcpy_s(auStack_130,0x40,&system_data_dca0);
  FUN_1800b8300(apuStack_1a8,&puStack_148);
  uStack_150 = 0;
  uStack_1c8 = 1;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &unknown_var_720_ptr;
  puStack_148 = &unknown_var_720_ptr;
  puStack_e8 = &unknown_var_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0xc;
  strcpy_s(auStack_d0,0x40,&system_data_dc90);
  FUN_1800b8300(apuStack_1a8,&puStack_e8);
  uStack_150 = 0;
  uStack_1c8 = 2;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &unknown_var_720_ptr;
  puStack_e8 = &unknown_var_720_ptr;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0xd;
  strcpy_s(auStack_70,0x40,&system_data_dcb0);
  FUN_1800b8300(apuStack_1a8,&puStack_88);
  uStack_150 = 0;
  uStack_1c8 = 4;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &unknown_var_720_ptr;
  puStack_88 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_1e8);
}



uint64_t *
FUN_1804a90a0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_4704_ptr;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x78,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




