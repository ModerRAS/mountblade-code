#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part389.c - 13 个函数

// 函数: void FUN_180480910(int64_t *param_1,int param_2)
void FUN_180480910(int64_t *param_1,int param_2)

{
  char *pcVar1;
  int64_t lVar2;
  code *pcVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  char *pcVar7;
  int32_t uVar8;
  int64_t lVar9;
  bool bVar10;
  
  lVar9 = 0;
  if (param_2 == 0x3a) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
    if ((param_2 != 0x3d) && (uVar8 = 0xe, param_2 == 0x2e)) {
      uVar8 = 0;
    }
  }
  lVar2 = *param_1;
  iVar6 = *(int *)((int64_t)param_1 + 0x7c);
  while ((((iVar6 != 0x3a && (iVar6 != 0x3d)) && (iVar6 != 0x2e)) && (iVar6 != -1))) {
    pcVar7 = (char *)*param_1;
    if (pcVar7 != (char *)param_1[2]) {
      if (((*pcVar7 == '\\') && (pcVar1 = pcVar7 + 1, pcVar1 != (char *)param_1[2])) &&
         ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
          (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
        pcVar7 = pcVar1;
      }
      *param_1 = (int64_t)(pcVar7 + 1);
    }
    FUN_18047b3a0(param_1);
    lVar9 = lVar9 + 1;
    iVar6 = *(int *)((int64_t)param_1 + 0x7c);
  }
  if (iVar6 != param_2) {
    FUN_18047b390(iVar6,uVar8);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_2 == 0x3a) {
    sVar5 = FUN_180480720(param_1[0xd],lVar2,*param_1,*(uint *)(param_1 + 0xe) >> 8 & 0xffffff01);
    if (sVar5 == 0) {
      FUN_18047b390();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_180480560(param_1 + 8,sVar5,0);
  }
  else if (param_2 == 0x3d) {
    if (lVar2 == *param_1) {
      FUN_18047b390(iVar6,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_180480ab0(param_1 + 8,lVar2);
  }
  else if (param_2 == 0x2e) {
    if (lVar2 == *param_1) {
      FUN_18047b390(iVar6,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_180480e00(iVar6,lVar2,*param_1,lVar9,param_1[9] + 0x20);
  }
  pcVar7 = (char *)*param_1;
  if (pcVar7 != (char *)param_1[2]) {
    if (((*pcVar7 == '\\') && (pcVar1 = pcVar7 + 1, pcVar1 != (char *)param_1[2])) &&
       ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((byte)(*pcVar1 - 0x28U) < 2)) ||
        (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*pcVar1 + 0x85U & 0xfd) == 0)))))) {
      pcVar7 = pcVar1;
    }
    *param_1 = (int64_t)(pcVar7 + 1);
  }
  if ((char *)*param_1 == (char *)param_1[2]) {
    *(int8_t *)(param_1 + 0xf) = 0xff;
    iVar6 = -1;
  }
  else {
    cVar4 = *(char *)*param_1;
    *(char *)(param_1 + 0xf) = cVar4;
    lVar9 = strchr(&unknown_var_5824_ptr,(int)cVar4);
    if (lVar9 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(char)param_1[0xf];
    }
  }
  *(int *)((int64_t)param_1 + 0x7c) = iVar6;
  switch((char)param_1[0xf]) {
  case '\n':
    if ((*(byte *)(param_1 + 0x10) & 4) == 0) {
      return;
    }
    if (*(int *)((int64_t)param_1 + 0x1c) != 0) {
      return;
    }
    *(int32_t *)((int64_t)param_1 + 0x7c) = 0x7c;
    return;
  default:
    goto LAB_18047b4f8;
  case '$':
    if ((*(uint *)(param_1 + 0x10) & 0x2000000) == 0) {
      return;
    }
    if ((char *)(*param_1 + 1) == (char *)param_1[2]) {
      return;
    }
    if (*(char *)(*param_1 + 1) == '\n') {
      return;
    }
    *(int32_t *)((int64_t)param_1 + 0x7c) = 0;
    return;
  case '(':
  case ')':
    bVar10 = (*(byte *)(param_1 + 0x10) & 8) == 0;
    break;
  case '*':
    if ((*(uint *)(param_1 + 0x10) & 0x4000000) == 0) {
      return;
    }
    cVar4 = func_0x00018047cdd0(param_1 + 8);
    if (cVar4 == '\0') {
      return;
    }
    *(int32_t *)((int64_t)param_1 + 0x7c) = 0;
    return;
  case '+':
  case '?':
    bVar10 = (*(byte *)(param_1 + 0x10) & 1) == 0;
    break;
  case '\\':
    cVar4 = func_0x00018047c940(param_1);
    if (cVar4 == '\0') {
      return;
    }
    cVar4 = *(char *)(*param_1 + 1);
    *(char *)(param_1 + 0xf) = cVar4;
    *(int *)((int64_t)param_1 + 0x7c) = (int)cVar4;
    return;
  case '^':
    if ((*(uint *)(param_1 + 0x10) & 0x2000000) == 0) {
      return;
    }
    cVar4 = func_0x00018047cdd0(param_1 + 8);
    bVar10 = cVar4 == '\0';
    break;
  case '{':
  case '}':
    bVar10 = (*(byte *)(param_1 + 0x10) & 0x10) == 0;
    break;
  case '|':
    bVar10 = (*(byte *)(param_1 + 0x10) & 2) == 0;
  }
  if (bVar10) {
    *(int32_t *)((int64_t)param_1 + 0x7c) = 0;
  }
LAB_18047b4f8:
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180480ab0(int64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_180480ab0(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  uint64_t *puVar6;
  uint *puVar7;
  int64_t lVar8;
  int8_t *puVar9;
  byte *pbVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint extraout_XMM0_Da;
  uint uVar16;
  uint extraout_XMM0_Da_00;
  int8_t auStack_108 [32];
  int8_t uStack_e8;
  int8_t auStack_e7 [3];
  int32_t uStack_e4;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  int64_t lStack_c8;
  int64_t lStack_c0;
  uint64_t uStack_b8;
  uint64_t *puStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int8_t uStack_88;
  uint8_t uStack_87;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int8_t uStack_68;
  uint8_t uStack_67;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_108;
  uVar12 = 0;
  uStack_e4 = 0;
  lStack_c8 = *(int64_t *)(param_1 + 8);
  lStack_c0 = param_1;
  FUN_180480ef0(*(uint64_t *)(param_1 + 0x18),&uStack_88,param_2,param_3);
  uVar11 = uVar12;
  do {
    uStack_e8 = (int8_t)uVar12;
    puVar6 = *(uint64_t **)(param_1 + 0x18);
    uVar15 = 0xf;
    uStack_90 = 0xf;
    uStack_a8 = uStack_a8 & 0xffffff00;
    uStack_e4 = 1;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = uVar11;
    uStack_98 = uVar11;
    FUN_180480870(&uStack_e0,&uStack_e8,auStack_e7);
    uVar14 = uStack_e0;
    _tolower___ctype_D_std__QEBAPEBDPEADPEBD_Z(puVar6[1],uStack_e0,uStack_d8);
    plVar1 = (int64_t *)*puVar6;
    puVar5 = (uint *)(**(code **)(*plVar1 + 0x20))(plVar1,&uStack_68,uVar14,uStack_d8);
    uStack_e4 = 3;
    uVar16 = extraout_XMM0_Da;
    if (&uStack_a8 != puVar5) {
      FUN_180067070(&uStack_a8);
      uVar16 = *puVar5;
      uStack_a4 = puVar5[1];
      uStack_a0 = puVar5[2];
      uStack_9c = puVar5[3];
      uVar11 = *(uint64_t *)(puVar5 + 4);
      uVar15 = *(uint64_t *)(puVar5 + 6);
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0xf;
      puVar5[7] = 0;
      *(int8_t *)puVar5 = 0;
      uStack_a8 = uVar16;
      uStack_98 = uVar11;
      uStack_90 = uVar15;
    }
    uStack_e4 = 1;
    if (0xf < uStack_50) {
      if (0xfff < uStack_50 + 1) {
        lVar8 = *(int64_t *)(CONCAT71(uStack_67,uStack_68) + -8);
        if (0x1f < (CONCAT71(uStack_67,uStack_68) - lVar8) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn(lVar8,uStack_50 + 0x28);
        }
      }
      uVar16 = free();
    }
    uStack_58 = 0;
    uStack_50 = 0xf;
    uStack_68 = 0;
    if (uVar14 != 0) {
      uVar13 = uVar14;
      if (0xfff < uStack_d0 - uVar14) {
        uVar13 = *(uint64_t *)(uVar14 - 8);
        if (0x1f < (uVar14 - uVar13) - 8) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn(uVar16,(uStack_d0 - uVar14) + 0x27);
        }
      }
      free(uVar13);
      uVar16 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uVar14 = 0;
      uStack_d0 = 0;
    }
    puVar9 = &uStack_88;
    if (0xf < uStack_70) {
      puVar9 = (int8_t *)CONCAT71(uStack_87,uStack_88);
    }
    puVar5 = (uint *)CONCAT44(uStack_a4,uStack_a8);
    puVar7 = &uStack_a8;
    if (0xf < uVar15) {
      puVar7 = puVar5;
    }
    if ((uVar11 == uStack_78) &&
       (iVar4 = memcmp(puVar7,puVar9,uVar11), uVar16 = extraout_XMM0_Da_00, iVar4 == 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    uStack_e4 = 0;
    if (0xf < uVar15) {
      puVar7 = puVar5;
      if (0xfff < uVar15 + 1) {
        puVar7 = *(uint **)(puVar5 + -2);
        if (0x1f < (uint64_t)((int64_t)puVar5 + (-8 - (int64_t)puVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn(uVar16,uVar15 + 0x28);
        }
      }
      free(puVar7);
    }
    lVar8 = lStack_c8;
    uStack_90 = 0xf;
    uStack_a8 = uStack_a8 & 0xffffff00;
    uStack_98 = uVar14;
    if (bVar3) {
      puVar6 = *(uint64_t **)(lStack_c8 + 0x28);
      if (puVar6 == (uint64_t *)0x0) {
        puVar6 = (uint64_t *)FUN_1808fc418();
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *(uint64_t **)(lVar8 + 0x28) = puVar6;
        puStack_b0 = puVar6;
      }
      pbVar10 = (byte *)((uVar12 >> 3) + (int64_t)puVar6);
      *pbVar10 = *pbVar10 | (byte)(1 << ((uint)uVar12 & 7));
    }
    uVar16 = (uint)uVar12 + 1;
    uVar12 = (uint64_t)uVar16;
    param_1 = lStack_c0;
    uVar11 = uVar14;
  } while (uVar16 < 0x100);
  if (0xf < uStack_70) {
    uVar11 = uStack_70 + 1;
    lVar2 = CONCAT71(uStack_87,uStack_88);
    lVar8 = lVar2;
    if (0xfff < uVar11) {
      uVar11 = uStack_70 + 0x28;
      lVar8 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar8) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar8,uVar11);
  }
  uStack_70 = 0xf;
  uStack_88 = 0;
  uStack_78 = uVar14;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_108);
}





// 函数: void FUN_180480e00(uint64_t param_1,int8_t *param_2,int8_t *param_3,uint param_4,
void FUN_180480e00(uint64_t param_1,int8_t *param_2,int8_t *param_3,uint param_4,
                  uint *param_5)

{
  int8_t uVar1;
  code *pcVar2;
  uint uVar3;
  uint *puVar4;
  int64_t lVar5;
  uint *puVar6;
  
  puVar6 = *(uint **)param_5;
  if (puVar6 != (uint *)0x0) {
    do {
      if (*puVar6 <= param_4) break;
      param_5 = puVar6 + 6;
      puVar6 = *(uint **)param_5;
    } while (puVar6 != (uint *)0x0);
    if ((puVar6 != (uint *)0x0) && (param_4 == *puVar6)) goto LAB_180480e87;
  }
  puVar4 = (uint *)FUN_1808fc418();
  *puVar4 = param_4;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(uint **)param_5 = puVar4;
  *(uint **)(puVar4 + 6) = puVar6;
  puVar6 = *(uint **)param_5;
LAB_180480e87:
  if (param_2 != param_3) {
    uVar3 = puVar6[3];
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      if (puVar6[2] <= uVar3) {
        lVar5 = realloc(*(uint64_t *)(puVar6 + 4),uVar3 + 0x10);
        if (lVar5 == 0) {
          __Xbad_alloc_std__YAXXZ();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(int64_t *)(puVar6 + 4) = lVar5;
        puVar6[2] = uVar3 + 0x10;
      }
      *(int8_t *)((uint64_t)puVar6[3] + *(int64_t *)(puVar6 + 4)) = uVar1;
      puVar6[3] = puVar6[3] + 1;
      uVar3 = puVar6[3];
    } while (param_2 != param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180480ef0(uint64_t *param_1,uint64_t *param_2,int64_t param_3,int64_t param_4)
void FUN_180480ef0(uint64_t *param_1,uint64_t *param_2,int64_t param_3,int64_t param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int8_t auStack_b8 [32];
  int32_t uStack_98;
  int64_t lStack_90;
  uint64_t uStack_88;
  int64_t lStack_80;
  uint64_t uStack_78;
  uint64_t *puStack_70;
  int8_t uStack_68;
  uint8_t uStack_67;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(int8_t *)param_2 = 0;
  uStack_98 = 1;
  puStack_70 = param_2;
  if (param_3 != param_4) {
    lStack_90 = 0;
    uStack_88 = 0;
    lStack_80 = 0;
    FUN_180480870(&lStack_90,param_3,param_4);
    lVar3 = lStack_90;
    _tolower___ctype_D_std__QEBAPEBDPEADPEBD_Z(param_1[1],lStack_90,uStack_88);
    puVar4 = (uint64_t *)
             (**(code **)(*(int64_t *)*param_1 + 0x20))
                       ((int64_t *)*param_1,&uStack_68,lVar3,uStack_88);
    uStack_98 = 3;
    if (param_2 != puVar4) {
      FUN_180067070(param_2);
      uVar1 = puVar4[1];
      *param_2 = *puVar4;
      param_2[1] = uVar1;
      uVar1 = puVar4[3];
      param_2[2] = puVar4[2];
      param_2[3] = uVar1;
      puVar4[2] = 0;
      puVar4[3] = 0xf;
      *(int8_t *)puVar4 = 0;
    }
    uStack_98 = 1;
    if (0xf < uStack_50) {
      uVar6 = uStack_50 + 1;
      lVar2 = CONCAT71(uStack_67,uStack_68);
      lVar5 = lVar2;
      if (0xfff < uVar6) {
        uVar6 = uStack_50 + 0x28;
        lVar5 = *(int64_t *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar5) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar5,uVar6);
    }
    uStack_58 = 0;
    uStack_50 = 0xf;
    uStack_68 = 0;
    if (lVar3 != 0) {
      uVar6 = lStack_80 - lVar3;
      lVar5 = lVar3;
      if (0xfff < uVar6) {
        uVar6 = uVar6 + 0x27;
        lVar5 = *(int64_t *)(lVar3 + -8);
        if (0x1f < (lVar3 - lVar5) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar5,uVar6);
      lStack_90 = 0;
      uStack_88 = 0;
      lStack_80 = 0;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804810a0(int8_t *param_1,int32_t param_2)
void FUN_1804810a0(int8_t *param_1,int32_t param_2)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int8_t auStack_108 [32];
  int32_t uStack_e8;
  int32_t auStack_e0 [2];
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int32_t *puStack_b8;
  int32_t *puStack_b0;
  uint64_t uStack_a8;
  int8_t *puStack_a0;
  int32_t *puStack_98;
  int32_t uStack_90;
  int32_t uStack_8c;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  
  uStack_a8 = 0xfffffffffffffffe;
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_108;
  uStack_e8 = 0;
  uVar9 = 0;
  uVar10 = 0xf;
  uStack_50 = 0;
  uStack_48 = 0xf;
  uStack_60 = uStack_60 & 0xffffff00;
  puStack_a0 = param_1;
  uStack_68 = param_2;
  puVar6 = (uint *)FUN_180496270(&uStack_90);
  if (&uStack_60 != puVar6) {
    FUN_180067070(&uStack_60);
    uStack_60 = *puVar6;
    uStack_5c = puVar6[1];
    uStack_58 = puVar6[2];
    uStack_54 = puVar6[3];
    uVar9 = *(uint64_t *)(puVar6 + 4);
    uVar10 = *(uint64_t *)(puVar6 + 6);
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0xf;
    puVar6[7] = 0;
    *(int8_t *)puVar6 = 0;
    param_2 = uStack_68;
    uStack_50 = uVar9;
    uStack_48 = uVar10;
  }
  uVar5 = uStack_54;
  uVar4 = uStack_58;
  uVar3 = uStack_5c;
  uVar2 = uStack_60;
  if (0xf < uStack_78) {
    uVar8 = uStack_78 + 1;
    lVar1 = CONCAT44(uStack_8c,uStack_90);
    lVar7 = lVar1;
    if (0xfff < uVar8) {
      uVar8 = uStack_78 + 0x28;
      lVar7 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar7) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar7,uVar8);
  }
  uStack_50 = 0;
  uStack_48 = 0xf;
  uStack_60 = uStack_60 & 0xffffff00;
  puStack_b8 = auStack_e0;
  uStack_88 = CONCAT44(uVar3,uVar2);
  uStack_80 = CONCAT44(uVar5,uVar4);
  uStack_c8 = 0;
  uStack_c0 = 0xf;
  uStack_d8 = uVar2 & 0xffffff00;
  puStack_b0 = &uStack_90;
  *param_1 = 1;
  puStack_98 = (int32_t *)(param_1 + 8);
  *puStack_98 = param_2;
  *(uint64_t *)(param_1 + 0x10) = uStack_88;
  *(uint64_t *)(param_1 + 0x18) = uStack_80;
  uStack_78._0_4_ = (int32_t)uVar9;
  uStack_78._4_4_ = (int32_t)((uint64_t)uVar9 >> 0x20);
  uStack_70._0_4_ = (int32_t)uVar10;
  uStack_70._4_4_ = (int32_t)((uint64_t)uVar10 >> 0x20);
  *(int32_t *)(param_1 + 0x20) = (int32_t)uStack_78;
  *(int32_t *)(param_1 + 0x24) = uStack_78._4_4_;
  *(int32_t *)(param_1 + 0x28) = (int32_t)uStack_70;
  *(int32_t *)(param_1 + 0x2c) = uStack_70._4_4_;
  uStack_78 = 0;
  uStack_70 = 0xf;
  uStack_88 = uStack_88 & 0xffffffffffffff00;
  auStack_e0[0] = param_2;
  uStack_d4 = uVar3;
  uStack_d0 = uVar4;
  uStack_cc = uVar5;
  uStack_90 = param_2;
  FUN_180067070(&uStack_88);
  uStack_e8 = 2;
  FUN_180067070(&uStack_d8);
  uStack_e8 = 1;
  FUN_180067070(&uStack_60);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (uint64_t)auStack_108);
}



uint64_t
FUN_180481290(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  uVar1 = GetLastError();
  FUN_1804810a0(param_1,uVar1,param_3,param_4,uVar2,uVar3);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804812e0(uint64_t *param_1,uint64_t *param_2)
void FUN_1804812e0(uint64_t *param_1,uint64_t *param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  code *pcVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  int8_t auStack_198 [32];
  int32_t uStack_178;
  uint64_t *puStack_170;
  uint64_t *puStack_168;
  uint64_t uStack_160;
  uint64_t *puStack_158;
  int8_t auStack_148 [256];
  uint64_t uStack_48;
  
  uStack_160 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_198;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int8_t *)param_1 = 0;
  uStack_178 = 1;
  puVar9 = (uint64_t *)*param_2;
  puVar3 = (uint64_t *)param_2[1];
  puStack_168 = puVar3;
  puStack_158 = param_1;
  while( true ) {
    puStack_170 = puVar9;
    if (puVar9 == puVar3) {
      if (param_1[2] != 0) {
        lVar1 = param_1[2] + -1;
        puVar9 = param_1;
        if (0xf < (uint64_t)param_1[3]) {
          puVar9 = (uint64_t *)*param_1;
        }
        param_1[2] = lVar1;
        *(int8_t *)((int64_t)puVar9 + lVar1) = 0;
      }
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_198);
    }
    if (puVar9[2] != 0) {
                    // WARNING: Subroutine does not return
      memset(auStack_148,0,0x100);
    }
    puVar7 = puVar9;
    if (0xf < (uint64_t)puVar9[3]) {
      puVar7 = (uint64_t *)*puVar9;
    }
    FUN_1803f5400(param_1,puVar7,0);
    uVar4 = param_1[2];
    uVar5 = param_1[3];
    if (uVar5 <= uVar4) break;
    param_1[2] = uVar4 + 1;
    puVar7 = param_1;
    if (0xf < uVar5) {
      puVar7 = (uint64_t *)*param_1;
    }
    *(int16_t *)((int64_t)puVar7 + uVar4) = 0x20;
    puVar9 = puVar9 + 4;
  }
  if (uVar4 == 0x7fffffffffffffff) {
    FUN_1800670f0();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar10 = uVar4 + 1 | 0xf;
  if (uVar10 < 0x8000000000000000) {
    if (0x7fffffffffffffff - (uVar5 >> 1) < uVar5) {
      uVar10 = 0x7fffffffffffffff;
    }
    else {
      uVar2 = uVar5 + (uVar5 >> 1);
      if (uVar10 < uVar2) {
        uVar10 = uVar2;
      }
    }
  }
  else {
    uVar10 = 0x7fffffffffffffff;
  }
  uVar8 = FUN_180067110(uVar10 + 1);
  param_1[2] = uVar4 + 1;
  param_1[3] = uVar10;
  if (0xf < uVar5) {
                    // WARNING: Subroutine does not return
    memcpy(uVar8,*param_1,uVar4);
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar8,param_1,uVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180481b70(uint64_t *param_1,uint64_t param_2)
void FUN_180481b70(uint64_t *param_1,uint64_t param_2)

{
  int8_t auStack_148 [80];
  int32_t uStack_f8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  int8_t auStack_b4 [108];
  int8_t auStack_48 [32];
  uint64_t uStack_28;
  
  uStack_d0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_148;
  uStack_f8 = 0;
  uStack_c8 = param_2;
  FUN_1804812e0(auStack_48,*param_1);
                    // WARNING: Subroutine does not return
  memset(auStack_b4,0,100);
}



int8_t *
FUN_180481dc0(int64_t *param_1,int8_t *param_2,int32_t *param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x38) == 0) {
    FUN_1804810a0(param_2,0x80,param_3,param_4,0,0xfffffffffffffffe);
    return param_2;
  }
  if (*(int *)(lVar2 + 0x38) == 1) {
    uVar3 = 0xffffffffffffffff;
    do {
      uVar4 = uVar3 & 0xffffffff;
      if (0xfffffffe < uVar3) {
        uVar4 = 0xfffffffe;
      }
      iVar1 = WaitForSingleObject(*(uint64_t *)(*param_1 + 0x40),uVar4);
      if (iVar1 == 0) goto LAB_180481e87;
      if (iVar1 == -1) goto LAB_180481e74;
      uVar3 = uVar3 - uVar4;
    } while (uVar3 != 0);
    if (iVar1 == 0x102) {
      FUN_1804810a0(param_2,0x102);
      return param_2;
    }
LAB_180481e87:
    iVar1 = GetExitCodeProcess(*(uint64_t *)(*param_1 + 0x40),*param_1 + 0x3c);
    if (iVar1 == 0) {
LAB_180481e74:
      FUN_180481290(param_2);
      return param_2;
    }
    *(int32_t *)(*param_1 + 0x38) = 2;
    lVar2 = *param_1;
  }
  *param_3 = *(int32_t *)(lVar2 + 0x3c);
  *param_2 = 0;
  return param_2;
}





// 函数: void FUN_180481f00(int64_t *param_1)
void FUN_180481f00(int64_t *param_1)

{
  if ((*param_1 != 0) && (*param_1 != -1)) {
    CloseHandle();
  }
  return;
}





// 函数: void FUN_180481f30(int64_t *param_1)
void FUN_180481f30(int64_t *param_1)

{
  int64_t lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((*(int64_t *)(lVar1 + 0x40) != 0) && (*(int64_t *)(lVar1 + 0x40) != -1)) {
      CloseHandle();
    }
    FUN_180067070(lVar1 + 0x18);
    FUN_1803f32c0(lVar1);
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
    free(lVar1,0x48);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180481f90(int8_t *param_1,uint param_2)
void FUN_180481f90(int8_t *param_1,uint param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  char *pcVar3;
  int8_t auStack_68 [32];
  int32_t uStack_48;
  uint64_t uStack_40;
  int8_t *puStack_38;
  char acStack_1d [5];
  uint64_t uStack_18;
  char *pcVar4;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_68;
  uStack_48 = 0;
  pcVar3 = acStack_1d + 2;
  uVar2 = (uint64_t)param_2;
  if ((int)param_2 < 0) {
    param_2 = -param_2;
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + -1;
      *pcVar3 = (char)param_2 + (char)((uint64_t)param_2 / 10) * -10 + '0';
      param_2 = (uint)((uint64_t)param_2 / 10);
    } while (param_2 != 0);
    pcVar3 = pcVar4 + -2;
    *pcVar3 = '-';
  }
  else {
    do {
      pcVar3 = pcVar3 + -1;
      uVar1 = uVar2 / 10;
      *pcVar3 = (char)uVar2 + (char)uVar1 * -10 + '0';
      uVar2 = uVar1;
    } while ((int)uVar1 != 0);
  }
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 0x18) = 0xf;
  *param_1 = 0;
  puStack_38 = param_1;
  if (pcVar3 != acStack_1d + 2) {
    FUN_1800671b0(param_1,pcVar3,acStack_1d + (2 - (int64_t)pcVar3));
  }
  uStack_48 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804820a0(int8_t *param_1,int32_t param_2)
void FUN_1804820a0(int8_t *param_1,int32_t param_2)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int8_t auStack_108 [32];
  int32_t uStack_e8;
  int32_t auStack_e0 [2];
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int32_t *puStack_b8;
  int32_t *puStack_b0;
  uint64_t uStack_a8;
  int8_t *puStack_a0;
  int32_t *puStack_98;
  int32_t uStack_90;
  int32_t uStack_8c;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  
  uStack_a8 = 0xfffffffffffffffe;
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_108;
  uStack_e8 = 0;
  uVar9 = 0;
  uVar10 = 0xf;
  uStack_50 = 0;
  uStack_48 = 0xf;
  uStack_60 = uStack_60 & 0xffffff00;
  puStack_a0 = param_1;
  uStack_68 = param_2;
  puVar6 = (uint *)FUN_180496270(&uStack_90);
  if (&uStack_60 != puVar6) {
    FUN_180067070(&uStack_60);
    uStack_60 = *puVar6;
    uStack_5c = puVar6[1];
    uStack_58 = puVar6[2];
    uStack_54 = puVar6[3];
    uVar9 = *(uint64_t *)(puVar6 + 4);
    uVar10 = *(uint64_t *)(puVar6 + 6);
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0xf;
    puVar6[7] = 0;
    *(int8_t *)puVar6 = 0;
    param_2 = uStack_68;
    uStack_50 = uVar9;
    uStack_48 = uVar10;
  }
  uVar5 = uStack_54;
  uVar4 = uStack_58;
  uVar3 = uStack_5c;
  uVar2 = uStack_60;
  if (0xf < uStack_78) {
    uVar8 = uStack_78 + 1;
    lVar1 = CONCAT44(uStack_8c,uStack_90);
    lVar7 = lVar1;
    if (0xfff < uVar8) {
      uVar8 = uStack_78 + 0x28;
      lVar7 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar7) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar7,uVar8);
  }
  uStack_50 = 0;
  uStack_48 = 0xf;
  uStack_60 = uStack_60 & 0xffffff00;
  puStack_b8 = auStack_e0;
  uStack_88 = CONCAT44(uVar3,uVar2);
  uStack_80 = CONCAT44(uVar5,uVar4);
  uStack_c8 = 0;
  uStack_c0 = 0xf;
  uStack_d8 = uVar2 & 0xffffff00;
  puStack_b0 = &uStack_90;
  *param_1 = 1;
  puStack_98 = (int32_t *)(param_1 + 8);
  *puStack_98 = param_2;
  *(uint64_t *)(param_1 + 0x10) = uStack_88;
  *(uint64_t *)(param_1 + 0x18) = uStack_80;
  uStack_78._0_4_ = (int32_t)uVar9;
  uStack_78._4_4_ = (int32_t)((uint64_t)uVar9 >> 0x20);
  uStack_70._0_4_ = (int32_t)uVar10;
  uStack_70._4_4_ = (int32_t)((uint64_t)uVar10 >> 0x20);
  *(int32_t *)(param_1 + 0x20) = (int32_t)uStack_78;
  *(int32_t *)(param_1 + 0x24) = uStack_78._4_4_;
  *(int32_t *)(param_1 + 0x28) = (int32_t)uStack_70;
  *(int32_t *)(param_1 + 0x2c) = uStack_70._4_4_;
  uStack_78 = 0;
  uStack_70 = 0xf;
  uStack_88 = uStack_88 & 0xffffffffffffff00;
  auStack_e0[0] = param_2;
  uStack_d4 = uVar3;
  uStack_d0 = uVar4;
  uStack_cc = uVar5;
  uStack_90 = param_2;
  FUN_180067070(&uStack_88);
  uStack_e8 = 2;
  FUN_180067070(&uStack_d8);
  uStack_e8 = 1;
  FUN_180067070(&uStack_60);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (uint64_t)auStack_108);
}



uint64_t
FUN_180482290(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  uVar1 = WSAGetLastError();
  FUN_1804820a0(param_1,uVar1,param_3,param_4,uVar2,uVar3);
  return param_1;
}





// 函数: void FUN_1804822e0(int64_t *param_1)
void FUN_1804822e0(int64_t *param_1)

{
  if (*param_1 != 0) {
    freeaddrinfo();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180482310(uint64_t param_1,uint64_t param_2,int16_t param_3)
void FUN_180482310(uint64_t param_1,uint64_t param_2,int16_t param_3)

{
  int64_t lVar1;
  int8_t auStack_268 [40];
  int8_t *puStack_240;
  uint64_t uStack_238;
  uint64_t uStack_230;
  int64_t lStack_228;
  uint64_t uStack_220;
  int8_t auStack_218 [80];
  int8_t auStack_1c8 [416];
  uint64_t uStack_28;
  
  uStack_238 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_268;
  uStack_230 = param_1;
  lVar1 = FUN_1808fc418(0x60);
  puStack_240 = auStack_218;
  lStack_228 = lVar1;
  uStack_220 = FUN_18018b350(auStack_218,param_2);
  FUN_18018b350(lVar1,uStack_220);
  *(int16_t *)(lVar1 + 0x20) = param_3;
  *(uint64_t *)(lVar1 + 0x28) = 0xffffffffffffffff;
  FUN_18047aa30();
                    // WARNING: Subroutine does not return
  memset(auStack_1c8,0,0x198);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



