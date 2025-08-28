#include "TaleWorlds.Native.Split.h"

// 01_initialization_part057.c - 7 个函数

// 函数: void FUN_18007b1a0(longlong *param_1)
void FUN_18007b1a0(longlong *param_1)

{
  longlong *plVar1;
  
  for (plVar1 = (longlong *)*param_1; plVar1 != (longlong *)param_1[1]; plVar1 = plVar1 + 4) {
    if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18007b1c0(longlong *param_1)
void FUN_18007b1c0(longlong *param_1)

{
  longlong *plVar1;
  
  for (plVar1 = (longlong *)*param_1; plVar1 != (longlong *)param_1[1]; plVar1 = plVar1 + 4) {
    if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



int8_t FUN_18007b1e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x1b8);
  cVar1 = *(char *)(lVar2 + 0x38c);
  if (cVar1 == '\t') {
    cVar1 = func_0x00018022d300();
    *(char *)(lVar2 + 0x38c) = cVar1;
  }
  cVar1 = FUN_18007b240(param_1,param_1 + 0x1e8,cVar1);
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 0xfe) = *(byte *)(param_1 + 0xfe) & 0xfb;
    return 0;
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00018007b857)
// WARNING: Removing unreachable block (ram,0x00018007b868)
// WARNING: Removing unreachable block (ram,0x00018007b879)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18007b240(longlong param_1,longlong *param_2,byte param_3,char param_4)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  uint64_t *puVar7;
  ulonglong uVar8;
  uint64_t uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int32_t uVar13;
  longlong *plVar14;
  bool bVar15;
  longlong *plStack_f0;
  longlong *plStack_e8;
  longlong *plStack_e0;
  longlong *plStack_d8;
  longlong *plStack_d0;
  longlong *plStack_c8;
  longlong *plStack_c0;
  longlong *plStack_b8;
  int8_t auStack_b0 [8];
  longlong lStack_a8;
  int32_t uStack_a0;
  longlong *plStack_98;
  longlong lStack_90;
  int32_t uStack_88;
  longlong *aplStack_78 [2];
  code *pcStack_68;
  void *puStack_60;
  uint64_t uStack_58;
  longlong *plStack_50;
  longlong *plStack_48;
  longlong *plStack_40;
  
  uStack_58 = 0xfffffffffffffffe;
  while ((lVar6 = param_1, (*(byte *)(param_1 + 0xfd) & 0x20) == 0 &&
         (lVar6 = func_0x000180085de0(*(uint64_t *)(param_1 + 0x1b0)), lVar6 != param_1))) {
    if ((param_4 != '\0') ||
       (pbVar1 = (byte *)(param_1 + 0x100), param_1 = lVar6, (*pbVar1 & 8) != 0)) {
      param_4 = '\x01';
      param_1 = lVar6;
    }
  }
  if ((*(byte *)(param_1 + 0x100) & 8) != 0) {
    param_4 = '\x01';
  }
  FUN_18007baa0(param_1);
  plVar14 = (longlong *)(*(longlong *)(lVar6 + 0x1e0) + (ulonglong)param_3 * 0x18);
  if ((longlong *)*param_2 != plVar14) {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      FUN_180080060();
    }
    *param_2 = (longlong)plVar14;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 2) = (int)plVar14[2] + 1;
      UNLOCK();
    }
    if (param_2[1] != 0) {
      pbVar1 = (byte *)(param_2[1] + 0xfe);
      *pbVar1 = *pbVar1 & 0xfb;
    }
  }
  LOCK();
  bVar15 = *(char *)((longlong)plVar14 + 0x15) == '\0';
  if (bVar15) {
    *(char *)((longlong)plVar14 + 0x15) = '\x01';
  }
  UNLOCK();
  if (!bVar15) goto LAB_18007b8fd;
  lVar6 = param_1;
  if ((*(byte *)(param_1 + 0xfd) & 0x20) == 0) {
    lVar6 = func_0x000180085de0(*(uint64_t *)(param_1 + 0x1b0));
  }
  if (*(int *)(lVar6 + 0x200) < 1) {
    LOCK();
    if (*(char *)((longlong)plVar14 + 0x15) == '\x01') {
      *(char *)((longlong)plVar14 + 0x15) = '\x03';
    }
    UNLOCK();
    goto LAB_18007b8fd;
  }
  if (*plVar14 == 0) {
    puVar7 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,0x20);
    *puVar7 = &UNK_180a21690;
    *puVar7 = &UNK_180a21720;
    *(int32_t *)(puVar7 + 1) = 0;
    *puVar7 = &UNK_180a00168;
    LOCK();
    *(int8_t *)(puVar7 + 2) = 0;
    UNLOCK();
    LOCK();
    *(int32_t *)((longlong)puVar7 + 0x14) = 0;
    UNLOCK();
    puVar7[3] = 0;
    puVar7[4] = param_1;
    FUN_180056f10(plVar14);
  }
  if (plVar14[1] == 0) {
    puVar7 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,0x20);
    *puVar7 = &UNK_180a21690;
    *puVar7 = &UNK_180a21720;
    *(int32_t *)(puVar7 + 1) = 0;
    *puVar7 = &UNK_180a00100;
    LOCK();
    *(int32_t *)(puVar7 + 2) = 0;
    UNLOCK();
    puVar7[3] = 0;
    FUN_180056f10(plVar14 + 1);
  }
  uStack_88 = 1;
  lStack_90 = param_1;
  FUN_18007f770(&lStack_90);
  lVar6 = *(longlong *)(param_1 + 0x210);
  if (lVar6 == 0) {
LAB_18007b44a:
    if (*(longlong *)(param_1 + 0xa8) == 0) {
LAB_18007b454:
      LOCK();
      *(int8_t *)((longlong)plVar14 + 0x15) = 4;
      UNLOCK();
      uVar8 = FUN_18007f840(&lStack_90);
      return uVar8 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)(lVar6 + 0x60) == 0) goto LAB_18007b454;
    if (lVar6 == 0) goto LAB_18007b44a;
  }
  uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0xa0,8,0x20);
  plVar10 = (longlong *)FUN_1800842a0(uVar9);
  plStack_50 = plVar10;
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10);
  }
  lVar6 = param_1;
  if ((*(byte *)(param_1 + 0xfd) & 0x20) == 0) {
    lVar6 = func_0x000180085de0(*(uint64_t *)(param_1 + 0x1b0));
  }
  *(int32_t *)(plVar10 + 2) = *(int32_t *)(lVar6 + 0x200);
  *(byte *)(plVar10 + 0x13) =
       *(byte *)(plVar10 + 0x13) ^ (*(byte *)(param_1 + 0xfe) >> 1 ^ *(byte *)(plVar10 + 0x13)) & 1;
  *(byte *)((longlong)plVar10 + 0x14) = param_3;
  cVar2 = *(char *)(param_1 + 0xfa);
  *(char *)((longlong)plVar10 + 0x15) = cVar2;
  if (cVar2 == '\x01') {
    param_4 = '\x01';
  }
  plVar11 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,0x20);
  *plVar11 = (longlong)&UNK_180a21690;
  *plVar11 = (longlong)&UNK_180a21720;
  *(int32_t *)(plVar11 + 1) = 0;
  *plVar11 = (longlong)&UNK_180a00030;
  plVar11[4] = 0;
  plVar11[2] = 0;
  *(byte *)(plVar11 + 5) = *(byte *)(plVar11 + 5) | 1;
  plStack_48 = plVar11;
  (**(code **)(*plVar11 + 0x28))(plVar11);
  bVar5 = *(byte *)(param_1 + 0xfd) & 0x20;
  lVar6 = param_1;
  if (bVar5 == 0) {
    lVar6 = func_0x000180085de0(*(uint64_t *)(param_1 + 0x1b0));
  }
  iVar3 = *(int *)(lVar6 + 0x200);
  lVar6 = param_1;
  if (bVar5 == 0) {
    lVar6 = func_0x000180085de0(*(uint64_t *)(param_1 + 0x1b0));
  }
  iVar4 = *(int *)(lVar6 + 0x1fc);
  uVar13 = 2;
  if (0xffff < iVar3) {
    uVar13 = 4;
  }
  *(byte *)(plVar11 + 5) =
       *(byte *)(plVar11 + 5) ^ (*(byte *)(param_1 + 0xfe) >> 1 ^ *(byte *)(plVar11 + 5)) & 1;
  *(int32_t *)((longlong)plVar11 + 0x14) = uVar13;
  *(int *)(plVar11 + 2) = iVar4 * 3;
  *(int8_t *)(plVar11 + 3) = *(int8_t *)(param_1 + 0xfa);
  if ((*(longlong *)(param_1 + 0xa8) == 0) || (*(longlong *)(param_1 + 0x210) != 0)) {
    if (param_4 == '\0') {
      uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
      (**(code **)(*plVar10 + 0x28))(plVar10);
      (**(code **)(*plVar11 + 0x28))(plVar11);
      pcStack_68 = FUN_180083390;
      puStack_60 = &UNK_180083380;
      plStack_b8 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,DAT_180bf65bc);
      *plStack_b8 = param_1;
      *(byte *)(plStack_b8 + 1) = param_3;
      plStack_b8[2] = (longlong)plVar10;
      plStack_b8[3] = (longlong)plVar11;
      aplStack_78[0] = plStack_b8;
      plVar12 = (longlong *)FUN_18006b640(uVar9,aplStack_78);
      plStack_c0 = plVar12;
      plStack_40 = plVar12;
      uVar9 = _DAT_180c82868;
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x28))(plVar12);
        uVar9 = _DAT_180c82868;
        (**(code **)(*plVar12 + 0x28))(plVar12);
      }
      FUN_18005e450(uVar9,&plStack_c0);
      if (plVar12 != (longlong *)0x0) {
        lVar6 = *plVar12;
LAB_18007b8dc:
        (**(code **)(lVar6 + 0x38))(plVar12);
      }
    }
    else {
      plStack_e0 = plVar11;
      (**(code **)(*plVar11 + 0x28))(plVar11);
      plStack_d8 = plVar10;
      (**(code **)(*plVar10 + 0x28))(plVar10);
      FUN_18007e080(param_1,param_3,&plStack_d8,&plStack_e0);
      plStack_d0 = plVar11;
      (**(code **)(*plVar11 + 0x28))(plVar11);
      plStack_c8 = plVar10;
      (**(code **)(*plVar10 + 0x28))(plVar10);
      FUN_18007c8e0(param_1,param_3,&plStack_c8,&plStack_d0);
      FUN_18007f840(&lStack_90);
      if (*(char *)(param_1 + 0xf4) == '\x01') {
        plStack_b8 = (longlong *)0x0;
        plStack_98 = (longlong *)0x0;
        auStack_b0[0] = 0;
        uStack_a0 = 3;
        lStack_a8 = param_1;
        FUN_18007f4c0(auStack_b0);
        plVar12 = plStack_98;
        plStack_98 = (longlong *)0x0;
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x38))();
        }
        FUN_18007f6a0(auStack_b0);
        if (plStack_98 != (longlong *)0x0) {
          lVar6 = *plStack_98;
          plVar12 = plStack_98;
          goto LAB_18007b8dc;
        }
      }
    }
  }
  else {
    plStack_f0 = plVar10;
    (**(code **)(*plVar10 + 0x28))(plVar10);
    plStack_e8 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
    FUN_18007c490(param_1,param_3,&plStack_e8,&plStack_f0,param_4);
  }
  (**(code **)(*plVar11 + 0x38))(plVar11);
  (**(code **)(*plVar10 + 0x38))(plVar10);
  FUN_18007f840(&lStack_90);
LAB_18007b8fd:
  return (ulonglong)((byte)(*(char *)((longlong)plVar14 + 0x15) - 2U) < 2);
}





// 函数: void FUN_18007b930(longlong *param_1)
void FUN_18007b930(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  longlong **pplStackX_20;
  uint64_t uVar3;
  int8_t auStack_40 [8];
  longlong lStack_38;
  int32_t uStack_30;
  longlong *plStack_28;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  pplStackX_18 = &plStackX_8;
  plStackX_8 = (longlong *)param_1[3];
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_20 = &plStackX_10;
  plStackX_10 = (longlong *)param_1[2];
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x28))();
  }
  FUN_18007e080(lVar1,(char)param_1[1],&plStackX_10,&plStackX_8,uVar3);
  lVar1 = *param_1;
  pplStackX_18 = &plStackX_8;
  plStackX_8 = (longlong *)param_1[3];
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_20 = &plStackX_10;
  plStackX_10 = (longlong *)param_1[2];
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x28))();
  }
  FUN_18007c8e0(lVar1,(char)param_1[1],&plStackX_10,&plStackX_8);
  lStack_38 = *param_1;
  if (*(char *)(lStack_38 + 0xf4) == '\x01') {
    plStackX_8 = (longlong *)0x0;
    plStack_28 = (longlong *)0x0;
    auStack_40[0] = 0;
    uStack_30 = 3;
    FUN_18007f4c0(auStack_40);
    plVar2 = plStack_28;
    plStackX_10 = plStack_28;
    plStack_28 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    FUN_18007f6a0(auStack_40);
    if (plStack_28 != (longlong *)0x0) {
      (**(code **)(*plStack_28 + 0x38))();
    }
  }
  return;
}





// 函数: void FUN_18007ba60(longlong param_1)
void FUN_18007ba60(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007baa0(longlong param_1)
void FUN_18007baa0(longlong param_1)

{
  uint64_t uVar1;
  
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x180,8,0x1c);
                    // WARNING: Subroutine does not return
    memset(uVar1,0,0x180);
  }
  return;
}





// 函数: void FUN_18007bb70(longlong *param_1)
void FUN_18007bb70(longlong *param_1)

{
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x38))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018007c17d)
// WARNING: Removing unreachable block (ram,0x00018007c188)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007bbb0(longlong param_1,longlong param_2,longlong param_3)
void FUN_18007bbb0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  uint64_t *puVar9;
  uint *puVar10;
  uint uVar11;
  void *puVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int8_t auStack_68 [32];
  uint64_t uStack_48;
  longlong *plStack_40;
  uint64_t uStack_38;
  longlong *plStack_30;
  longlong lStack_28;
  ulonglong uStack_20;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  if ((param_2 == 0) ||
     (((*(float *)(param_1 + 0x238) == *(float *)(param_2 + 0x44) &&
       (*(float *)(param_1 + 0x23c) == *(float *)(param_2 + 0x48))) &&
      (*(float *)(param_1 + 0x240) == *(float *)(param_2 + 0x4c))))) {
    uVar5 = *(uint64_t *)(param_3 + 0x4c);
    *(uint64_t *)(param_1 + 0x238) = *(uint64_t *)(param_3 + 0x44);
    *(uint64_t *)(param_1 + 0x240) = uVar5;
  }
  if ((param_2 == 0) ||
     (((*(float *)(param_1 + 0x248) == *(float *)(param_2 + 0x54) &&
       (*(float *)(param_1 + 0x24c) == *(float *)(param_2 + 0x58))) &&
      (*(float *)(param_1 + 0x250) == *(float *)(param_2 + 0x5c))))) {
    uVar5 = *(uint64_t *)(param_3 + 0x5c);
    *(uint64_t *)(param_1 + 0x248) = *(uint64_t *)(param_3 + 0x54);
    *(uint64_t *)(param_1 + 0x250) = uVar5;
  }
  if ((param_2 == 0) ||
     (((*(float *)(param_1 + 0x2a8) == *(float *)(param_2 + 100) &&
       (*(float *)(param_1 + 0x2ac) == *(float *)(param_2 + 0x68))) &&
      (*(float *)(param_1 + 0x2b0) == *(float *)(param_2 + 0x6c))))) {
    uVar5 = *(uint64_t *)(param_3 + 0x6c);
    *(uint64_t *)(param_1 + 0x2a8) = *(uint64_t *)(param_3 + 100);
    *(uint64_t *)(param_1 + 0x2b0) = uVar5;
  }
  if ((param_2 == 0) ||
     (((*(float *)(param_1 + 0x2b8) == *(float *)(param_2 + 0x74) &&
       (*(float *)(param_1 + 700) == *(float *)(param_2 + 0x78))) &&
      (*(float *)(param_1 + 0x2c0) == *(float *)(param_2 + 0x7c))))) {
    uVar5 = *(uint64_t *)(param_3 + 0x7c);
    *(uint64_t *)(param_1 + 0x2b8) = *(uint64_t *)(param_3 + 0x74);
    *(uint64_t *)(param_1 + 0x2c0) = uVar5;
  }
  if (param_2 == 0) {
    *(int32_t *)(param_1 + 0x100) = *(int32_t *)(param_3 + 0x30);
  }
  else {
    uVar17 = 1;
    uVar11 = 2;
    do {
      puVar10 = (uint *)(param_1 + 0x100);
      uVar16 = *(uint *)(param_2 + 0x30);
      uVar14 = *(uint *)(param_3 + 0x30);
      if ((uVar17 & uVar16) != (uVar17 & uVar14)) {
        if ((uVar17 & uVar14) == 0) {
          uVar16 = *(uint *)(param_1 + 0x100) & ~(1 << (uVar11 - 2 & 0x1f));
        }
        else {
          uVar16 = *puVar10 | 1 << (uVar11 - 2 & 0x1f);
        }
        *puVar10 = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar13 = uVar17 << 1 & uVar14;
      if ((uVar17 << 1 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 - 1 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 - 1 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar13 = uVar17 << 2 & uVar14;
      if ((uVar17 << 2 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar13 = uVar17 << 3 & uVar14;
      if ((uVar17 << 3 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 + 1 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 1 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar13 = uVar17 << 4 & uVar14;
      if ((uVar17 << 4 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 + 2 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 2 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar13 = uVar17 << 5 & uVar14;
      if ((uVar17 << 5 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          *puVar10 = *puVar10 & ~(1 << (uVar11 + 3 & 0x1f));
          uVar16 = *(uint *)(param_2 + 0x30);
          uVar14 = *(uint *)(param_3 + 0x30);
        }
        else {
          *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 3 & 0x1f);
          uVar16 = *(uint *)(param_2 + 0x30);
          uVar14 = *(uint *)(param_3 + 0x30);
        }
      }
      puVar10 = (uint *)(param_1 + 0x100);
      uVar13 = uVar17 << 6 & uVar14;
      if ((uVar17 << 6 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 + 4 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 4 & 0x1f);
        }
        *puVar10 = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar13 = uVar17 << 7 & uVar14;
      if ((uVar17 << 7 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 + 5 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 5 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar13 = uVar17 << 8 & uVar14;
      if ((uVar17 << 8 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 + 6 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 6 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar13 = uVar17 << 9 & uVar14;
      if ((uVar17 << 9 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 + 7 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 7 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar13 = uVar17 << 10 & uVar14;
      if ((uVar17 << 10 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 + 8 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 8 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar14 = uVar17 << 0xb & uVar14;
      if ((uVar17 << 0xb & uVar16) != uVar14) {
        if (uVar14 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 + 9 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 9 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
      }
      uVar16 = uVar17 << 0xc & *(uint *)(param_3 + 0x30);
      if ((uVar17 << 0xc & *(uint *)(param_2 + 0x30)) != uVar16) {
        if (uVar16 == 0) {
          uVar16 = *(uint *)(param_1 + 0x100) & ~(1 << (uVar11 + 10 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 10 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
      }
      uVar16 = uVar17 << 0xd & *(uint *)(param_3 + 0x30);
      if ((uVar17 << 0xd & *(uint *)(param_2 + 0x30)) != uVar16) {
        if (uVar16 == 0) {
          uVar16 = *(uint *)(param_1 + 0x100) & ~(1 << (uVar11 + 0xb & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 0xb & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
      }
      uVar16 = uVar17 << 0xe & *(uint *)(param_3 + 0x30);
      if ((uVar17 << 0xe & *(uint *)(param_2 + 0x30)) != uVar16) {
        puVar10 = (uint *)(param_1 + 0x100);
        if (uVar16 == 0) {
          *puVar10 = *puVar10 & ~(1 << (uVar11 + 0xc & 0x1f));
        }
        else {
          *puVar10 = *puVar10 | 1 << (uVar11 + 0xc & 0x1f);
        }
      }
      uVar16 = uVar17 << 0xf & *(uint *)(param_3 + 0x30);
      if ((uVar17 << 0xf & *(uint *)(param_2 + 0x30)) != uVar16) {
        if (uVar16 == 0) {
          uVar16 = *(uint *)(param_1 + 0x100) & ~(1 << (uVar11 + 0xd & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 0xd & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
      }
      uVar17 = uVar17 << 0x10 | uVar17 >> 0x10;
      iVar1 = uVar11 + 0xe;
      uVar11 = uVar11 + 0x10;
    } while (iVar1 < 0x20);
  }
  *(int32_t *)(param_1 + 0x208) = *(int32_t *)(param_3 + 0x84);
  *(int32_t *)(param_1 + 0x1f8) = *(int32_t *)(param_3 + 0x88);
  *(int32_t *)(param_1 + 0x1fc) = *(int32_t *)(param_3 + 0x8c);
  *(int32_t *)(param_1 + 0x200) = *(int32_t *)(param_3 + 0x90);
  *(int32_t *)(param_1 + 0x204) = *(int32_t *)(param_3 + 0x94);
  uVar5 = *(uint64_t *)(param_3 + 0xa0);
  *(uint64_t *)(param_1 + 0x274) = *(uint64_t *)(param_3 + 0x98);
  *(uint64_t *)(param_1 + 0x27c) = uVar5;
  uVar5 = *(uint64_t *)(param_3 + 0xb0);
  *(uint64_t *)(param_1 + 0x284) = *(uint64_t *)(param_3 + 0xa8);
  *(uint64_t *)(param_1 + 0x28c) = uVar5;
  uVar2 = *(int32_t *)(param_3 + 0xbc);
  uVar3 = *(int32_t *)(param_3 + 0xc0);
  uVar4 = *(int32_t *)(param_3 + 0xc4);
  *(int32_t *)(param_1 + 0x294) = *(int32_t *)(param_3 + 0xb8);
  *(int32_t *)(param_1 + 0x298) = uVar2;
  *(int32_t *)(param_1 + 0x29c) = uVar3;
  *(int32_t *)(param_1 + 0x2a0) = uVar4;
  *(int32_t *)(param_1 + 0x2a4) = *(int32_t *)(param_3 + 200);
  plStack_30 = (longlong *)0x0;
  lStack_28 = 0;
  if (param_2 != 0) {
    plVar6 = (longlong *)(param_2 + 0x158);
    if ((*plVar6 == 0) && (*(longlong *)(param_2 + 0x160) == 0)) {
      plVar6 = (longlong *)(param_2 + 0x34);
    }
    plStack_30 = (longlong *)*plVar6;
    lStack_28 = plVar6[1];
  }
  uStack_38 = 0;
  plVar6 = (longlong *)(param_1 + 0x1b8);
  plStack_40 = (longlong *)*plVar6;
  *plVar6 = 0;
  if (plStack_40 != (longlong *)0x0) {
    (**(code **)(*plStack_40 + 0x38))();
  }
  plVar8 = (longlong *)(param_3 + 0x158);
  if ((*plVar8 == 0) && (*(longlong *)(param_3 + 0x160) == 0)) {
    plVar8 = (longlong *)(param_3 + 0x34);
  }
  lVar7 = FUN_180255f80(*(uint64_t *)(param_1 + 0xa8),&DAT_180a002e0,plVar8);
  if (lVar7 != 0) {
    FUN_180080810(plVar6,lVar7 + 0xb0);
  }
  if (*plVar6 == 0) {
    puVar12 = &DAT_18098bc73;
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      puVar12 = *(void **)(param_1 + 0x18);
    }
    FUN_180627020(&UNK_1809ffb88,puVar12);
    plVar8 = (longlong *)FUN_1800be9a0(_DAT_180c86898,&plStack_30,0);
    lVar7 = *plVar8;
    *plVar8 = 0;
    plStack_40 = (longlong *)*plVar6;
    *plVar6 = lVar7;
    if (plStack_40 != (longlong *)0x0) {
      (**(code **)(*plStack_40 + 0x38))();
    }
    if (plStack_30 != (longlong *)0x0) {
      (**(code **)(*plStack_30 + 0x38))();
    }
  }
  FUN_1800781e0(param_1);
  if ((*(longlong *)(param_1 + 600) == 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x1b8) + 0x388) >> 0x19 & 1) != 0)) {
    puVar9 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x58,8,0x1c);
    *(uint64_t *)((longlong)puVar9 + 0x2c) = 0xffffffffffffffff;
    *(int32_t *)(puVar9 + 9) = 0xffffffff;
    *puVar9 = 0;
    puVar9[2] = 0;
    puVar9[7] = 0;
    *(int32_t *)(puVar9 + 5) = 0xffffffff;
    *(int32_t *)(puVar9 + 4) = 0xffffffff;
    puVar9[3] = 0;
    *(int32_t *)(puVar9 + 8) = 0;
    *(int32_t *)(puVar9 + 1) = 0;
    *(int8_t *)((longlong)puVar9 + 0x44) = 0;
    *(int8_t *)((longlong)puVar9 + 0x24) = 0;
    *(uint64_t **)(param_1 + 600) = puVar9;
  }
  *(int8_t *)(param_1 + 0xf6) = *(int8_t *)(param_3 + 0xcc);
  if ((uint64_t *)(param_1 + 0x218) != (uint64_t *)(param_3 + 0xd0)) {
    FUN_1800588c0((uint64_t *)(param_1 + 0x218),*(uint64_t *)(param_3 + 0xd0),
                  *(uint64_t *)(param_3 + 0xd8));
  }
  *(int32_t *)(*(longlong *)(param_1 + 0x268) + 0x10) = *(int32_t *)(param_3 + 0xf0);
  *(int32_t *)(*(longlong *)(param_1 + 0x268) + 0x14) = *(int32_t *)(param_3 + 0x144);
  *(int8_t *)(*(longlong *)(param_1 + 0x268) + 0x18) = *(int8_t *)(param_3 + 0x148);
  *(int8_t *)(*(longlong *)(param_1 + 0x268) + 0x19) = *(int8_t *)(param_3 + 0x149);
  *(int8_t *)(*(longlong *)(param_1 + 0x268) + 0x1a) = *(int8_t *)(param_3 + 0x14a);
  *(int32_t *)(*(longlong *)(param_1 + 0x268) + 0x44) = *(int32_t *)(param_3 + 0x118);
  *(int32_t *)(*(longlong *)(param_1 + 0x268) + 0x48) = *(int32_t *)(param_3 + 0x11c);
  *(int32_t *)(*(longlong *)(param_1 + 0x268) + 0x4c) = *(int32_t *)(param_3 + 0x120);
  *(int32_t *)(*(longlong *)(param_1 + 0x268) + 0x50) = *(int32_t *)(param_3 + 0x124);
  *(int32_t *)(*(longlong *)(param_1 + 0x268) + 0x54) = *(int32_t *)(param_3 + 0x128);
  *(int32_t *)(*(longlong *)(param_1 + 0x268) + 0x58) = *(int32_t *)(param_3 + 300);
  *(int32_t *)(*(longlong *)(param_1 + 0x268) + 0x5c) = *(int32_t *)(param_3 + 0x130);
  *(int32_t *)(*(longlong *)(param_1 + 0x268) + 0x60) = *(int32_t *)(param_3 + 0x134);
  *(int32_t *)(*(longlong *)(param_1 + 0x268) + 100) = *(int32_t *)(param_3 + 0x138);
  *(int32_t *)(*(longlong *)(param_1 + 0x268) + 0x68) = *(int32_t *)(param_3 + 0x13c);
  *(int32_t *)(*(longlong *)(param_1 + 0x268) + 0x6c) = *(int32_t *)(param_3 + 0x140);
  lVar7 = *(longlong *)(param_1 + 0x268);
  uVar11 = *(uint *)(param_3 + 0x108);
  uVar15 = (ulonglong)uVar11;
  if (*(longlong *)(param_3 + 0x100) != 0) {
    FUN_1806277c0(lVar7 + 0x20,uVar15);
  }
  if (uVar11 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(lVar7 + 0x28),*(uint64_t *)(param_3 + 0x100),uVar15);
  }
  *(int32_t *)(lVar7 + 0x30) = 0;
  if (*(longlong *)(lVar7 + 0x28) != 0) {
    *(int8_t *)(uVar15 + *(longlong *)(lVar7 + 0x28)) = 0;
  }
  *(int32_t *)(lVar7 + 0x3c) = *(int32_t *)(param_3 + 0x114);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_68);
}





