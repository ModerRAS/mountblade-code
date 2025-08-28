#include "TaleWorlds.Native.Split.h"

// 03_rendering_part388.c - 6 个函数

// 函数: void FUN_18047f800(int64_t *param_1,int param_2,uint64_t param_3,uint64_t param_4)
void FUN_18047f800(int64_t *param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  
  lVar9 = param_1[1];
  if ((*(int *)(lVar9 + 8) == 6) && (*(int *)(lVar9 + 0x24) != 1)) {
    *(int *)(lVar9 + 0x24) = *(int *)(lVar9 + 0x24) + -1;
    FUN_18047df40(param_1,*(int8_t *)
                           (*(int64_t *)(lVar9 + 0x28) + (uint64_t)*(uint *)(lVar9 + 0x24)),
                  param_3,param_4,0xfffffffffffffffe);
    lVar9 = param_1[1];
  }
  if ((*(int *)(lVar9 + 8) == 9) || (*(int *)(lVar9 + 8) == 0xe)) {
    lVar9 = *(int64_t *)(lVar9 + 0x20);
  }
  if ((param_2 == 0) && ((int)param_3 == 1)) {
    puVar3 = (uint64_t *)FUN_1808fc418(0x20);
    *puVar3 = &processed_var_6184_ptr;
    puVar3[1] = 0x11;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = &processed_var_5768_ptr;
    puVar4 = (uint64_t *)FUN_1808fc418(0x30);
    *puVar4 = &processed_var_6184_ptr;
    puVar4[1] = 0x10;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &processed_var_5816_ptr;
    puVar4[4] = puVar3;
    puVar4[5] = 0;
    puVar5 = (uint64_t *)FUN_1808fc418(0x30);
    *puVar5 = &processed_var_6184_ptr;
    puVar5[1] = 0x10;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = &processed_var_5816_ptr;
    puVar5[4] = puVar3;
    puVar5[5] = 0;
    puVar6 = (uint64_t *)FUN_1808fc418(0x20);
    *puVar6 = &processed_var_6184_ptr;
    puVar6[1] = 8;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar7 = (uint64_t *)FUN_1808fc418(0x28);
    *puVar7 = &processed_var_6184_ptr;
    puVar7[1] = 9;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = &processed_var_6120_ptr;
    puVar7[4] = puVar6;
    puVar5[2] = puVar6;
    puVar6[3] = puVar5;
    puVar6[2] = puVar7;
    puVar7[3] = puVar6;
    puVar7[2] = puVar3;
    puVar4[5] = puVar5;
    puVar3[3] = param_1[1];
    lVar8 = param_1[1];
    if (*(int64_t *)(lVar8 + 0x10) != 0) {
      puVar3[2] = *(int64_t *)(lVar8 + 0x10);
      *(uint64_t **)(*(int64_t *)(param_1[1] + 0x10) + 0x18) = puVar3;
      lVar8 = param_1[1];
    }
    *(uint64_t **)(lVar8 + 0x10) = puVar3;
    param_1[1] = (int64_t)puVar3;
    *(uint64_t **)(*(int64_t *)(lVar9 + 0x18) + 0x10) = puVar4;
    puVar4[3] = *(uint64_t *)(lVar9 + 0x18);
    *(uint64_t **)(lVar9 + 0x18) = puVar4;
    puVar4[2] = lVar9;
    if ((byte)param_4 == 0) {
      lVar8 = puVar5[2];
      uVar2 = *(uint64_t *)(lVar9 + 0x18);
      *(uint64_t *)(lVar9 + 0x18) = *(uint64_t *)(lVar8 + 0x18);
      *(uint64_t *)(lVar8 + 0x18) = uVar2;
      uVar2 = puVar4[2];
      puVar4[2] = puVar5[2];
      puVar5[2] = uVar2;
    }
  }
  else {
    puVar3 = (uint64_t *)FUN_1808fc418(0x28);
    *puVar3 = &processed_var_6184_ptr;
    puVar3[1] = 0x13;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = &processed_var_6200_ptr;
    puVar3[4] = 0;
    puVar4 = (uint64_t *)FUN_1808fc418(0x38);
    iVar1 = *(int *)(*param_1 + 0x24);
    *(int *)(*param_1 + 0x24) = iVar1 + 1;
    *puVar4 = &processed_var_6184_ptr;
    *(int32_t *)(puVar4 + 1) = 0x12;
    *(uint *)((int64_t)puVar4 + 0xc) = (uint)(byte)param_4 * 2;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &processed_var_5304_ptr;
    *(int *)(puVar4 + 4) = param_2;
    *(int *)((int64_t)puVar4 + 0x24) = (int)param_3;
    puVar4[5] = puVar3;
    *(int *)(puVar4 + 6) = iVar1;
    *(int32_t *)((int64_t)puVar4 + 0x34) = 0xffffffff;
    puVar3[4] = puVar4;
    puVar3[3] = param_1[1];
    lVar8 = param_1[1];
    if (*(int64_t *)(lVar8 + 0x10) != 0) {
      puVar3[2] = *(int64_t *)(lVar8 + 0x10);
      *(uint64_t **)(*(int64_t *)(param_1[1] + 0x10) + 0x18) = puVar3;
      lVar8 = param_1[1];
    }
    *(uint64_t **)(lVar8 + 0x10) = puVar3;
    param_1[1] = (int64_t)puVar3;
    *(uint64_t **)(*(int64_t *)(lVar9 + 0x18) + 0x10) = puVar4;
    puVar4[3] = *(uint64_t *)(lVar9 + 0x18);
    *(uint64_t **)(lVar9 + 0x18) = puVar4;
    puVar4[2] = lVar9;
  }
  return;
}



char FUN_18047fb20(int64_t *param_1,int64_t param_2,char param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int iVar6;
  bool bVar7;
  char cStackX_8;
  int64_t lStack_c8;
  int64_t alStack_c0 [3];
  int64_t lStack_a8;
  int64_t alStack_a0 [3];
  int64_t lStack_88;
  int64_t lStack_80;
  uint64_t uStack_78;
  int64_t lStack_68;
  int64_t lStack_60;
  uint64_t uStack_58;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  iVar6 = 0;
  lStack_88 = *param_1;
  plVar4 = param_1 + 1;
  FUN_18047db80(&lStack_80,plVar4);
  lStack_68 = param_1[4];
  plVar1 = param_1 + 5;
  FUN_18047ea50(&lStack_60,plVar1);
  if (0 < *(int *)(param_2 + 0x20)) {
    lVar5 = *param_1;
    do {
      cVar3 = FUN_18047cea0(param_1,*(uint64_t *)(param_2 + 0x10));
      if (cVar3 == '\0') {
        *param_1 = lStack_88;
        if (plVar4 != &lStack_80) {
          FUN_18047ff70(plVar4,lStack_80,uStack_78);
          param_1[4] = lStack_68;
        }
        if (plVar1 != &lStack_60) {
          FUN_18047fdf0(plVar1,lStack_60,uStack_58);
        }
        cStackX_8 = '\0';
        goto LAB_18047fdb4;
      }
      if (lVar5 == *param_1) {
        iVar6 = *(int *)(param_2 + 0x20) + -1;
      }
      iVar6 = iVar6 + 1;
      lVar5 = *param_1;
    } while (iVar6 < *(int *)(param_2 + 0x20));
  }
  lStack_c8 = *param_1;
  FUN_18047db80(alStack_c0,plVar4);
  lStack_a8 = param_1[4];
  FUN_18047ea50(alStack_a0,plVar1);
  cStackX_8 = '\0';
  lVar5 = *param_1;
  cVar3 = FUN_18047cea0(param_1,*(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x10));
  if (cVar3 != '\0') {
    if (param_3 == '\0') {
LAB_18047fd79:
      cStackX_8 = '\x01';
      goto LAB_18047fd98;
    }
    lStack_c8 = *param_1;
    if (alStack_c0 != plVar4) {
      FUN_18047ff70(alStack_c0,*plVar4,param_1[2]);
      lStack_a8 = param_1[4];
    }
    if (alStack_a0 != plVar1) {
      FUN_18047fdf0(alStack_a0,*plVar1,param_1[6]);
    }
    cStackX_8 = '\x01';
  }
  do {
    if ((*(int *)(param_2 + 0x24) != -1) &&
       (bVar7 = *(int *)(param_2 + 0x24) <= iVar6, iVar6 = iVar6 + 1, bVar7)) break;
    *param_1 = lVar5;
    if (plVar4 != &lStack_80) {
      FUN_18047ff70(plVar4,lStack_80,uStack_78);
      param_1[4] = lStack_68;
    }
    cVar3 = FUN_18047cea0(param_1,*(uint64_t *)(param_2 + 0x10));
    if (cVar3 == '\0') break;
    lVar2 = *param_1;
    cVar3 = FUN_18047cea0(param_1,*(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x10));
    if (cVar3 != '\0') {
      if (param_3 == '\0') goto LAB_18047fd79;
      lStack_c8 = *param_1;
      if (alStack_c0 != plVar4) {
        FUN_18047ff70(alStack_c0,*plVar4,param_1[2]);
        lStack_a8 = param_1[4];
      }
      if (alStack_a0 != plVar1) {
        FUN_18047fdf0(alStack_a0,*plVar1,param_1[6]);
      }
      cStackX_8 = '\x01';
    }
    bVar7 = lVar5 != lVar2;
    lVar5 = lVar2;
  } while (bVar7);
  plVar4 = &lStack_c8;
  if (cStackX_8 == '\0') {
    plVar4 = &lStack_88;
  }
  FUN_18047db00(param_1,plVar4);
LAB_18047fd98:
  FUN_18047b1c0(alStack_a0);
  FUN_180257d60(alStack_c0);
LAB_18047fdb4:
  FUN_18047b1c0(&lStack_60);
  FUN_180257d60(&lStack_80);
  return cStackX_8;
}





// 函数: void FUN_18047fdf0(int64_t *param_1,uint64_t *param_2,uint64_t *param_3,int8_t param_4)
void FUN_18047fdf0(int64_t *param_1,uint64_t *param_2,uint64_t *param_3,int8_t param_4)

{
  int64_t lVar1;
  code *pcVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int8_t auStackX_20 [8];
  
  lVar1 = *param_1;
  uVar8 = (int64_t)param_3 - (int64_t)param_2 >> 4;
  uVar6 = param_1[2] - lVar1 >> 4;
  uVar9 = param_1[1] - lVar1 >> 4;
  auStackX_20[0] = param_4;
  if (uVar8 <= uVar6) {
    if (uVar8 <= uVar9) {
      func_0x00018018a000(auStackX_20);
                    // WARNING: Subroutine does not return
      memmove(lVar1,param_2);
    }
    func_0x00018018a000(auStackX_20);
                    // WARNING: Subroutine does not return
    memmove(lVar1,param_2,uVar9 << 4);
  }
  if (0xfffffffffffffff < uVar8) {
    FUN_180189990();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar9 = uVar8;
  if ((uVar6 <= 0xfffffffffffffff - (uVar6 >> 1)) && (uVar9 = (uVar6 >> 1) + uVar6, uVar9 < uVar8))
  {
    uVar9 = uVar8;
  }
  if (lVar1 != 0) {
    lVar7 = lVar1;
    if (0xfff < uVar6 * 0x10) {
      lVar7 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar7) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar7,uVar6 * 0x10 + 0x27);
      }
    }
    free(lVar7);
  }
  FUN_18047eb30(param_1,uVar9);
  puVar5 = (uint64_t *)*param_1;
  if (param_2 != param_3) {
    do {
      uVar3 = *param_2;
      uVar4 = param_2[1];
      param_2 = param_2 + 2;
      *puVar5 = uVar3;
      puVar5[1] = uVar4;
      puVar5 = puVar5 + 2;
    } while (param_2 != param_3);
  }
  param_1[1] = (int64_t)puVar5;
  return;
}





// 函数: void FUN_18047ff70(int64_t *param_1,int64_t param_2,int64_t param_3,int8_t param_4)
void FUN_18047ff70(int64_t *param_1,int64_t param_2,int64_t param_3,int8_t param_4)

{
  int64_t lVar1;
  code *pcVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int8_t auStackX_20 [8];
  
  lVar1 = *param_1;
  param_3 = param_3 - param_2;
  uVar5 = param_3 >> 2;
  uVar4 = param_1[2] - lVar1 >> 2;
  uVar3 = param_1[1] - lVar1 >> 2;
  auStackX_20[0] = param_4;
  if (uVar5 <= uVar4) {
    if (uVar5 <= uVar3) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,param_2,param_3);
    }
                    // WARNING: Subroutine does not return
    memmove(lVar1,param_2,uVar3 * 4);
  }
  if (0x3fffffffffffffff < uVar5) {
    FUN_180189990();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = uVar5;
  if ((uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) && (uVar3 = (uVar4 >> 1) + uVar4, uVar3 < uVar5))
  {
    uVar3 = uVar5;
  }
  if (lVar1 != 0) {
    lVar6 = lVar1;
    if (0xfff < uVar4 * 4) {
      lVar6 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar6) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar6,uVar4 * 4 + 0x27);
      }
    }
    free(lVar6);
  }
  FUN_18047b330(param_1,uVar3);
  lVar1 = *param_1;
  func_0x00018018a000(auStackX_20);
                    // WARNING: Subroutine does not return
  memmove(lVar1,param_2,param_3);
}



uint64_t *
FUN_1804800d0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  free(param_1[5]);
  *param_1 = &processed_var_6184_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,uVar1);
  }
  return param_1;
}



uint64_t FUN_180480130(int64_t param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  int32_t uVar5;
  uint64_t uVar6;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 != 0x5c) {
    if (iVar1 != 0x5b) {
      if ((iVar1 != 0x5d) && (iVar1 != -1)) {
        *(int *)(param_1 + 0x74) = (int)*(char *)(param_1 + 0x78);
        func_0x00018047c980();
        return 1;
      }
      return 0;
    }
    func_0x00018047c980();
    uVar2 = *(uint *)(param_1 + 0x7c);
    if ((uVar2 < 0x3e) && ((0x2400400000000000U >> ((int64_t)(int)uVar2 & 0x3fU) & 1) != 0)) {
      func_0x00018047c980(param_1);
      FUN_180480910(param_1,uVar2);
      return 2;
    }
    *(int32_t *)(param_1 + 0x74) = 0x5b;
    return 1;
  }
  func_0x00018047c980();
  uVar2 = *(uint *)(param_1 + 0x80);
  if ((uVar2 >> 0x15 & 1) != 0) {
    if (((uVar2 >> 0xe & 1) == 0) || (*(char *)(param_1 + 0x78) != '\\')) {
      if (((uVar2 >> 0x11 & 1) != 0) && (cVar4 = FUN_18047ec40(param_1,0), cVar4 != '\0')) {
        return 2;
      }
      cVar4 = FUN_18047eb90(param_1);
      if (cVar4 == '\0') {
        cVar4 = FUN_18047f140(param_1);
        return (uint64_t)(cVar4 != '\0');
      }
      if (*(int *)(param_1 + 0x74) != 0) {
        FUN_18047b390();
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
    }
    else {
      *(int32_t *)(param_1 + 0x74) = 0x5c;
      func_0x00018047c980(param_1);
    }
    return 1;
  }
  if (((uVar2 >> 0x10 & 1) == 0) ||
     (cVar4 = func_0x0001804802d0(param_1,*(int8_t *)(param_1 + 0x78)), cVar4 == '\0')) {
    if ((*(uint *)(param_1 + 0x80) & 0x8000) == 0) {
LAB_18048021e:
      *(int32_t *)(param_1 + 0x74) = 0x5c;
      return 1;
    }
    if (*(char *)(param_1 + 0x78) == 'a') {
      uVar5 = 7;
    }
    else {
      if (*(char *)(param_1 + 0x78) != 'b') goto LAB_18048021e;
      uVar5 = 8;
    }
    *(int32_t *)(param_1 + 0x74) = uVar5;
  }
  func_0x00018047c980(param_1);
  return 1;
}



uint64_t FUN_180480235(void)

{
  int64_t unaff_RBX;
  
  func_0x00018047c980();
  if ((*(uint *)(unaff_RBX + 0x7c) < 0x3e) &&
     ((0x2400400000000000U >> ((int64_t)(int)*(uint *)(unaff_RBX + 0x7c) & 0x3fU) & 1) != 0)) {
    func_0x00018047c980();
    FUN_180480910();
    return 2;
  }
  *(int32_t *)(unaff_RBX + 0x74) = 0x5b;
  return 1;
}



uint64_t FUN_18048027a(void)

{
  int64_t unaff_RBX;
  
  *(int32_t *)(unaff_RBX + 0x74) = 0x5b;
  return 1;
}



uint64_t FUN_180480291(int64_t param_1)

{
  int in_EAX;
  
  if ((in_EAX != 0x5d) && (in_EAX != -1)) {
    *(int *)(param_1 + 0x74) = (int)*(char *)(param_1 + 0x78);
    func_0x00018047c980();
    return 1;
  }
  return 0;
}





// 函数: void FUN_180480320(int64_t param_1,byte param_2,byte param_3)
void FUN_180480320(int64_t param_1,byte param_2,byte param_3)

{
  code *pcVar1;
  char cVar2;
  int8_t uVar3;
  uint uVar4;
  uint64_t *puVar5;
  uint *puVar6;
  int64_t lVar7;
  int64_t lVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  
  if ((*(uint *)(param_1 + 0x10) & 0x100) == 0) {
    uVar11 = (uint)param_2;
    uVar10 = (uint)param_3;
  }
  else {
    cVar2 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 8));
    uVar11 = (uint)cVar2;
    cVar2 = _tolower___ctype_D_std__QEBADD_Z
                      (*(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 8),param_3);
    uVar10 = (uint)cVar2;
  }
  lVar7 = *(int64_t *)(param_1 + 8);
  while( true ) {
    if (uVar10 < uVar11) {
      return;
    }
    if (*(uint *)(param_1 + 0x20) <= uVar10) break;
    puVar5 = *(uint64_t **)(lVar7 + 0x28);
    if (puVar5 == (uint64_t *)0x0) {
      puVar5 = (uint64_t *)FUN_1808fc418();
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(uint64_t **)(lVar7 + 0x28) = puVar5;
    }
    pbVar9 = (byte *)((uint64_t)(uVar11 >> 3) + (int64_t)puVar5);
    *pbVar9 = *pbVar9 | (byte)(1 << (uVar11 & 7));
    uVar11 = uVar11 + 1;
  }
  if (uVar10 < uVar11) {
    return;
  }
  if (*(uint *)(param_1 + 0x24) <= uVar10 - uVar11) {
    puVar6 = *(uint **)(lVar7 + 0x38);
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)FUN_1808fc418(0x10);
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(uint **)(lVar7 + 0x38) = puVar6;
    }
    uVar4 = puVar6[1];
    if (*puVar6 <= uVar4) {
      lVar8 = realloc(*(uint64_t *)(puVar6 + 2),uVar4 + 0x10);
      if (lVar8 == 0) {
        __Xbad_alloc_std__YAXXZ();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(int64_t *)(puVar6 + 2) = lVar8;
      *puVar6 = uVar4 + 0x10;
      uVar4 = puVar6[1];
    }
    *(char *)((uint64_t)uVar4 + *(int64_t *)(puVar6 + 2)) = (char)uVar11;
    puVar6[1] = puVar6[1] + 1;
    puVar6 = *(uint **)(lVar7 + 0x38);
    uVar11 = puVar6[1];
    if (*puVar6 <= uVar11) {
      lVar7 = realloc(*(uint64_t *)(puVar6 + 2),uVar11 + 0x10);
      if (lVar7 == 0) {
        __Xbad_alloc_std__YAXXZ();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(int64_t *)(puVar6 + 2) = lVar7;
      *puVar6 = uVar11 + 0x10;
      uVar11 = puVar6[1];
    }
    *(char *)((uint64_t)uVar11 + *(int64_t *)(puVar6 + 2)) = (char)uVar10;
    puVar6[1] = puVar6[1] + 1;
    return;
  }
  do {
    if (uVar10 < uVar11) {
      return;
    }
    uVar3 = (int8_t)uVar11;
    if ((*(uint *)(param_1 + 0x10) & 0x100) != 0) {
      uVar3 = _tolower___ctype_D_std__QEBADD_Z
                        (*(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 8),uVar11 & 0xff);
    }
    lVar7 = *(int64_t *)(param_1 + 8);
    puVar6 = *(uint **)(lVar7 + 0x30);
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)FUN_1808fc418(0x10);
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(uint **)(lVar7 + 0x30) = puVar6;
    }
    if (*puVar6 <= puVar6[1]) {
      uVar4 = puVar6[1] + 0x10;
      lVar7 = realloc(*(uint64_t *)(puVar6 + 2),uVar4);
      if (lVar7 == 0) {
        __Xbad_alloc_std__YAXXZ();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(int64_t *)(puVar6 + 2) = lVar7;
      *puVar6 = uVar4;
    }
    *(int8_t *)((uint64_t)puVar6[1] + *(int64_t *)(puVar6 + 2)) = uVar3;
    puVar6[1] = puVar6[1] + 1;
    uVar11 = uVar11 + 1;
  } while( true );
}





// 函数: void FUN_180480560(int64_t param_1,ushort param_2,char param_3)
void FUN_180480560(int64_t param_1,ushort param_2,char param_3)

{
  int64_t lVar1;
  uint64_t *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint64_t uVar5;
  bool bVar6;
  
  lVar1 = *(int64_t *)(param_1 + 8);
  uVar4 = 0;
  uVar5 = 0;
  do {
    if (param_2 == 0xffff) {
      if (((char)uVar4 == '_') ||
         ((*(ushort *)
            (*(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8) + 0x18) +
            (uint64_t)(uVar4 & 0xff) * 2) & 0x107) != 0)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
    }
    else {
      bVar6 = (*(ushort *)
                (*(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8) + 0x18) +
                (uint64_t)(uVar4 & 0xff) * 2) & param_2) != 0;
    }
    if (bVar6 != (bool)param_3) {
      puVar2 = *(uint64_t **)(lVar1 + 0x28);
      if (puVar2 == (uint64_t *)0x0) {
        puVar2 = (uint64_t *)FUN_1808fc418();
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *(uint64_t **)(lVar1 + 0x28) = puVar2;
      }
      pbVar3 = (byte *)((uVar5 >> 3) + (int64_t)puVar2);
      *pbVar3 = *pbVar3 | (byte)(1 << (uVar4 & 7));
    }
    uVar4 = uVar4 + 1;
    uVar5 = uVar5 + 1;
  } while (uVar4 < 0x100);
  return;
}



uint64_t * FUN_180480650(int64_t param_1,uint param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  
  puVar1 = (uint64_t *)FUN_1808fc418(0x28);
  *puVar1 = &processed_var_6184_ptr;
  *(uint *)(puVar1 + 1) = (param_2 & 0xff) + 10;
  *(int32_t *)((int64_t)puVar1 + 0xc) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &processed_var_5288_ptr;
  puVar1[4] = 0;
  puVar2 = (uint64_t *)FUN_1808fc418(0x20);
  *puVar2 = &processed_var_6184_ptr;
  *(int32_t *)(puVar2 + 1) = 1;
  *(int32_t *)((int64_t)puVar2 + 0xc) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar1[3] = *(uint64_t *)(param_1 + 8);
  lVar3 = *(int64_t *)(param_1 + 8);
  if (*(int64_t *)(lVar3 + 0x10) != 0) {
    puVar1[2] = *(int64_t *)(lVar3 + 0x10);
    *(uint64_t **)(*(int64_t *)(*(int64_t *)(param_1 + 8) + 0x10) + 0x18) = puVar1;
    lVar3 = *(int64_t *)(param_1 + 8);
  }
  *(uint64_t **)(lVar3 + 0x10) = puVar1;
  puVar1[4] = puVar2;
  puVar2[3] = puVar1;
  *(uint64_t **)(param_1 + 8) = puVar2;
  return puVar1;
}



uint64_t FUN_180480720(int64_t param_1,int8_t *param_2,int8_t *param_3,char param_4)

{
  int8_t uVar1;
  char cVar2;
  char cVar3;
  uint64_t uVar4;
  int8_t *puVar5;
  uint64_t uVar6;
  int8_t *puVar7;
  uint64_t uVar8;
  
  uVar8 = 0;
  uVar4 = uVar8;
  uVar6 = uVar8;
  do {
    if ((int64_t)param_3 - (int64_t)param_2 == (uint64_t)*(uint *)(&processed_var_5392_ptr + uVar4)) {
      puVar7 = *(int8_t **)(&system_data_b9f0 + uVar4);
      puVar5 = param_2;
      if (param_2 == param_3) break;
      while( true ) {
        uVar1 = *puVar5;
        cVar2 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(param_1 + 8),*puVar7);
        cVar3 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(param_1 + 8),uVar1);
        if (cVar3 != cVar2) break;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
        if (puVar5 == param_3) goto LAB_1804807d9;
      }
    }
    uVar6 = (uint64_t)((int)uVar6 + 1);
    uVar4 = uVar6 * 0x18;
  } while (*(int64_t *)(&system_data_b9f0 + uVar4) != 0);
LAB_1804807d9:
  if (*(int64_t *)(&system_data_b9f0 + uVar6 * 0x18) != 0) {
    uVar8 = (uint64_t)*(ushort *)(&processed_var_5396_ptr + uVar6 * 0x18);
  }
  if ((param_4 != '\0') && ((uVar8 & 3) != 0)) {
    uVar8 = (uint64_t)(ushort)((ushort)uVar8 | 3);
  }
  return uVar8;
}



uint64_t FUN_180480731(int64_t param_1,int8_t *param_2,int8_t *param_3)

{
  int8_t uVar1;
  char cVar2;
  char cVar3;
  int64_t in_RAX;
  uint64_t uVar4;
  uint64_t unaff_RBX;
  int8_t *puVar5;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar6;
  uint64_t unaff_R12;
  uint64_t uVar7;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  int8_t *puVar8;
  uint64_t uVar9;
  int8_t *in_stack_00000078;
  char in_stack_00000088;
  
  *(uint64_t *)(in_RAX + -0x10) = unaff_RBP;
  uVar9 = 0;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  uVar6 = (int64_t)param_3 - (int64_t)param_2;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R14;
  uVar4 = uVar9;
  uVar7 = uVar9;
  do {
    if (uVar6 == *(uint *)(&processed_var_5392_ptr + uVar4)) {
      puVar8 = *(int8_t **)(&system_data_b9f0 + uVar4);
      puVar5 = param_2;
      while( true ) {
        if (puVar5 == param_3) goto LAB_1804807d9;
        uVar1 = *puVar5;
        cVar2 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(param_1 + 8),*puVar8);
        cVar3 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(param_1 + 8),uVar1);
        param_2 = in_stack_00000078;
        if (cVar3 != cVar2) break;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    uVar7 = (uint64_t)((int)uVar7 + 1);
    uVar4 = uVar7 * 0x18;
  } while (*(int64_t *)(&system_data_b9f0 + uVar4) != 0);
LAB_1804807d9:
  if (*(int64_t *)(&system_data_b9f0 + uVar7 * 0x18) != 0) {
    uVar9 = (uint64_t)*(ushort *)(&processed_var_5396_ptr + uVar7 * 0x18);
  }
  if ((in_stack_00000088 != '\0') && ((uVar9 & 3) != 0)) {
    uVar9 = (uint64_t)(ushort)((ushort)uVar9 | 3);
  }
  return uVar9;
}



uint64_t FUN_18048075d(uint64_t param_1,int8_t *param_2,int64_t param_3)

{
  int8_t uVar1;
  char cVar2;
  char cVar3;
  int64_t in_RAX;
  uint64_t uVar4;
  uint64_t unaff_RBX;
  int8_t *unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar5;
  void *in_R10;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  uint64_t unaff_R14;
  int8_t *puVar6;
  uint64_t unaff_R15;
  int8_t *in_stack_00000078;
  char in_stack_00000088;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  uVar5 = param_3 - (int64_t)param_2;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RSI;
  uVar4 = unaff_R15 & 0xffffffff;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R14;
  do {
    if (uVar5 == *(uint *)(in_R10 + uVar4 + 0x10)) {
      puVar6 = *(int8_t **)(in_R10 + uVar4);
      if (param_2 == unaff_RBP) break;
      while( true ) {
        uVar1 = *param_2;
        cVar2 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(unaff_R13 + 8),*puVar6);
        cVar3 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(unaff_R13 + 8),uVar1);
        if (cVar3 != cVar2) break;
        param_2 = param_2 + 1;
        puVar6 = puVar6 + 1;
        if (param_2 == unaff_RBP) {
          in_R10 = &system_data_b9f0;
          goto LAB_1804807d9;
        }
      }
      in_R10 = &system_data_b9f0;
      param_2 = in_stack_00000078;
    }
    unaff_R12 = (uint64_t)((int)unaff_R12 + 1);
    uVar4 = unaff_R12 * 0x18;
  } while (*(uint64_t *)(in_R10 + uVar4) != unaff_R15);
LAB_1804807d9:
  if (*(uint64_t *)(in_R10 + (unaff_R12 & 0xffffffff) * 0x18) != unaff_R15) {
    unaff_R15 = (uint64_t)*(ushort *)(in_R10 + (unaff_R12 & 0xffffffff) * 0x18 + 0x14);
  }
  if ((in_stack_00000088 != '\0') && ((unaff_R15 & 3) != 0)) {
    unaff_R15 = (uint64_t)(ushort)((ushort)unaff_R15 | 3);
  }
  return unaff_R15 & 0xffff;
}



uint64_t FUN_1804807f6(void)

{
  char in_R9B;
  int64_t in_R10;
  uint64_t unaff_R12;
  uint64_t unaff_R15;
  
  if (*(uint64_t *)(in_R10 + (unaff_R12 & 0xffffffff) * 0x18) != unaff_R15) {
    unaff_R15 = (uint64_t)*(ushort *)(in_R10 + 0x14 + (unaff_R12 & 0xffffffff) * 0x18);
  }
  if ((in_R9B != '\0') && ((unaff_R15 & 3) != 0)) {
    unaff_R15 = (uint64_t)(ushort)((ushort)unaff_R15 | 3);
  }
  return unaff_R15 & 0xffff;
}



ushort FUN_180480812(int64_t param_1,uint64_t param_2,uint64_t param_3,char param_4)

{
  int64_t in_R10;
  ushort uVar1;
  
  uVar1 = *(ushort *)(in_R10 + 0x14 + param_1 * 8);
  if ((param_4 != '\0') && ((uVar1 & 3) != 0)) {
    uVar1 = uVar1 | 3;
  }
  return uVar1;
}



uint64_t FUN_180480833(void)

{
  int64_t lVar1;
  int8_t uVar2;
  char cVar3;
  char cVar4;
  int8_t *puVar5;
  int8_t *unaff_RBP;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  int8_t *puVar6;
  uint64_t unaff_R15;
  uint64_t uStackX_20;
  int8_t *in_stack_00000078;
  char in_stack_00000088;
  
  while( true ) {
    unaff_R12 = (uint64_t)((int)unaff_R12 + 1);
    lVar1 = unaff_R12 * 0x18;
    if (*(uint64_t *)(&system_data_b9f0 + lVar1) == unaff_R15) break;
    if (uStackX_20 == *(uint *)(&processed_var_5392_ptr + lVar1)) {
      puVar6 = *(int8_t **)(&system_data_b9f0 + lVar1);
      puVar5 = in_stack_00000078;
      if (in_stack_00000078 == unaff_RBP) break;
      while( true ) {
        uVar2 = *puVar5;
        cVar3 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(unaff_R13 + 8),*puVar6);
        cVar4 = _tolower___ctype_D_std__QEBADD_Z(*(uint64_t *)(unaff_R13 + 8),uVar2);
        if (cVar4 != cVar3) break;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
        if (puVar5 == unaff_RBP) goto LAB_1804807d9;
      }
    }
  }
LAB_1804807d9:
  if (*(uint64_t *)(&system_data_b9f0 + unaff_R12 * 0x18) != unaff_R15) {
    unaff_R15 = (uint64_t)*(ushort *)(&processed_var_5396_ptr + unaff_R12 * 0x18);
  }
  if ((in_stack_00000088 != '\0') && ((unaff_R15 & 3) != 0)) {
    unaff_R15 = (uint64_t)(ushort)((ushort)unaff_R15 | 3);
  }
  return unaff_R15 & 0xffff;
}





// 函数: void FUN_180480870(int64_t *param_1,int64_t param_2,int64_t param_3,int8_t param_4)
void FUN_180480870(int64_t *param_1,int64_t param_2,int64_t param_3,int8_t param_4)

{
  code *pcVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int8_t auStackX_20 [8];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar3 = param_3 - param_2;
  if (uVar3 == 0) {
    return;
  }
  auStackX_20[0] = param_4;
  if (uVar3 < 0x8000000000000000) {
    lVar2 = FUN_180067110(uVar3);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2 + uVar3;
    lVar2 = *param_1;
    func_0x00018018a000(auStackX_20);
                    // WARNING: Subroutine does not return
    memmove(lVar2,param_2,uVar3);
  }
  FUN_180189990();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Possible PIC construction at 0x000180480a54: Changing call to branch
// WARNING: Removing unreachable block (ram,0x000180480a59)
// WARNING: Removing unreachable block (ram,0x000180480aa4)
// WARNING: Removing unreachable block (ram,0x000180480a5f)



