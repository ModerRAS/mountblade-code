#include "TaleWorlds.Native.Split.h"

// 99_part_07_part010.c - 1 个函数

// 函数: void FUN_1804a3460(void)
void FUN_1804a3460(void)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong *plVar3;
  int8_t auStack_c8 [32];
  int32_t uStack_a8;
  longlong *plStack_a0;
  longlong *plStack_98;
  longlong **pplStack_90;
  uint64_t uStack_88;
  longlong **pplStack_80;
  void *puStack_78;
  int8_t *puStack_70;
  int32_t uStack_68;
  int8_t auStack_60 [72];
  ulonglong uStack_18;
  
  uVar2 = _DAT_180c86930;
  uStack_88 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  uStack_a8 = 0;
  puStack_78 = &unknown_var_3480_ptr;
  puStack_70 = auStack_60;
  auStack_60[0] = 0;
  uStack_68 = 0x12;
  strcpy_s(auStack_60,0x40,&unknown_var_1880_ptr);
  FUN_1800b08e0(uVar2,&plStack_98,&puStack_78,1);
  uStack_a8 = 1;
  puStack_78 = &unknown_var_720_ptr;
  pplStack_90 = &plStack_a0;
  plStack_a0 = plStack_98;
  if (plStack_98 != (longlong *)0x0) {
    (**(code **)(*plStack_98 + 0x28))();
  }
  plVar3 = plStack_a0;
  lVar1 = _DAT_180c86898;
  pplStack_80 = &plStack_a0;
  pplStack_90 = (longlong **)plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    (**(code **)(*plStack_a0 + 0x28))(plStack_a0);
  }
  pplStack_90 = *(longlong ***)(lVar1 + 200);
  *(longlong **)(lVar1 + 200) = plVar3;
  if (pplStack_90 != (longlong **)0x0) {
    (**(code **)((longlong)*pplStack_90 + 0x38))();
  }
  if (plStack_a0 != (longlong *)0x0) {
    (**(code **)(*plStack_a0 + 0x38))();
  }
  uStack_a8 = 0;
  if (plStack_98 != (longlong *)0x0) {
    (**(code **)(*plStack_98 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_c8);
}



// WARNING: Removing unreachable block (ram,0x0001804a391a)
// WARNING: Removing unreachable block (ram,0x0001804a3b60)
// WARNING: Removing unreachable block (ram,0x0001804a3943)
// WARNING: Removing unreachable block (ram,0x0001804a3951)
// WARNING: Removing unreachable block (ram,0x0001804a395c)
// WARNING: Removing unreachable block (ram,0x0001804a39a0)
// WARNING: Removing unreachable block (ram,0x0001804a3a4f)
// WARNING: Removing unreachable block (ram,0x0001804a3a7a)
// WARNING: Removing unreachable block (ram,0x0001804a3a55)
// WARNING: Removing unreachable block (ram,0x0001804a3a60)
// WARNING: Removing unreachable block (ram,0x0001804a3a6c)
// WARNING: Removing unreachable block (ram,0x0001804a3a73)
// WARNING: Removing unreachable block (ram,0x0001804a3a7c)
// WARNING: Removing unreachable block (ram,0x0001804a3a84)
// WARNING: Removing unreachable block (ram,0x0001804a39ae)
// WARNING: Removing unreachable block (ram,0x0001804a39b0)
// WARNING: Removing unreachable block (ram,0x0001804a39b3)
// WARNING: Removing unreachable block (ram,0x0001804a39b8)
// WARNING: Removing unreachable block (ram,0x0001804a39bf)
// WARNING: Removing unreachable block (ram,0x0001804a39c6)
// WARNING: Removing unreachable block (ram,0x0001804a39d1)
// WARNING: Removing unreachable block (ram,0x0001804a39db)
// WARNING: Removing unreachable block (ram,0x0001804a39e2)
// WARNING: Removing unreachable block (ram,0x0001804a39f0)
// WARNING: Removing unreachable block (ram,0x0001804a39fc)
// WARNING: Removing unreachable block (ram,0x0001804a3a03)
// WARNING: Removing unreachable block (ram,0x0001804a3aa7)
// WARNING: Removing unreachable block (ram,0x0001804a3abf)
// WARNING: Removing unreachable block (ram,0x0001804a3aba)
// WARNING: Removing unreachable block (ram,0x0001804a3a0b)
// WARNING: Removing unreachable block (ram,0x0001804a3a15)
// WARNING: Removing unreachable block (ram,0x0001804a3a1b)
// WARNING: Removing unreachable block (ram,0x0001804a3a21)
// WARNING: Removing unreachable block (ram,0x0001804a3a30)
// WARNING: Removing unreachable block (ram,0x0001804a3a3c)
// WARNING: Removing unreachable block (ram,0x0001804a3a43)
// WARNING: Removing unreachable block (ram,0x0001804a3a47)
// WARNING: Removing unreachable block (ram,0x0001804a3a8d)
// WARNING: Removing unreachable block (ram,0x0001804a3a90)
// WARNING: Removing unreachable block (ram,0x0001804a3ad3)
// WARNING: Removing unreachable block (ram,0x0001804a3ae0)
// WARNING: Removing unreachable block (ram,0x0001804a3b78)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1804a35c0(uint64_t param_1,longlong param_2)

{
  uint64_t uVar1;
  int iVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  longlong lVar5;
  int8_t *puVar6;
  uint64_t ****ppppuVar7;
  uint64_t *puVar8;
  uint64_t ***pppuVar9;
  int iVar10;
  longlong lVar11;
  void *puVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  void *puStack_158;
  int8_t *puStack_150;
  int32_t uStack_148;
  ulonglong uStack_140;
  uint64_t ***pppuStack_138;
  uint64_t ***pppuStack_130;
  uint64_t *puStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  int32_t uStack_110;
  int32_t uStack_108;
  uint64_t uStack_100;
  int32_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  int32_t uStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  uint64_t uStack_c0;
  int32_t uStack_b8;
  uint64_t uStack_b0;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  int32_t uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  uint64_t uStack_80;
  int8_t auStack_78 [16];
  int8_t auStack_68 [16];
  int8_t auStack_58 [16];
  int8_t auStack_48 [16];
  
  uStack_80 = 0xfffffffffffffffe;
  *(uint64_t *)(param_2 + 0x18) = 0;
  *(int32_t *)(param_2 + 0x28) = 3;
  *(longlong *)param_2 = param_2;
  *(longlong *)(param_2 + 8) = param_2;
  *(uint64_t *)(param_2 + 0x10) = 0;
  *(int8_t *)(param_2 + 0x18) = 0;
  *(uint64_t *)(param_2 + 0x20) = 0;
  iVar2 = _DAT_180c95eb8;
  uStack_108 = 1;
  uVar15 = 0;
  if (0 < _DAT_180c95eb8) {
    do {
      puVar4 = (uint64_t *)0x180c95e98;
      puVar8 = _DAT_180c95ea8;
      if (_DAT_180c95ea8 == (uint64_t *)0x0) {
LAB_1804a3679:
        puVar4 = (uint64_t *)0x180c95e98;
      }
      else {
        do {
          if (*(uint *)(puVar8 + 4) < uVar15) {
            puVar8 = (uint64_t *)*puVar8;
          }
          else {
            puVar4 = puVar8;
            puVar8 = (uint64_t *)puVar8[1];
          }
        } while (puVar8 != (uint64_t *)0x0);
        if ((puVar4 == (uint64_t *)0x180c95e98) || (uVar15 < *(uint *)(puVar4 + 4)))
        goto LAB_1804a3679;
      }
      lVar5 = puVar4[5];
      uVar1 = *(uint64_t *)(lVar5 + 0xa78);
      iVar14 = 0;
      iVar10 = *(int *)(lVar5 + 0x3b0);
      if (0 < iVar10) {
        do {
          lVar13 = (longlong)iVar10;
          if (0 < iVar10) {
            lVar11 = 0;
            do {
              uStack_d0 = *(uint64_t *)(*(longlong *)(lVar5 + 0x3a8) + 0x40 + lVar11);
              uStack_c8 = 3;
              FUN_1804a5c60(param_2,auStack_68,&uStack_d0);
              lVar11 = lVar11 + 0x48;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            iVar10 = *(int *)(lVar5 + 0x3b0);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar10);
      }
      lVar13 = *(longlong *)(lVar5 + 0xa20);
      if (lVar13 != *(longlong *)(lVar5 + 0xa28)) {
        do {
          uStack_c0 = *(uint64_t *)(lVar13 + 0x28);
          uStack_b8 = 3;
          FUN_1804a5c60(param_2,auStack_58,&uStack_c0);
          uStack_b0 = *(uint64_t *)(lVar13 + 0x20);
          uStack_a8 = 3;
          FUN_1804a5c60(param_2,auStack_48,&uStack_b0);
          lVar13 = lVar13 + 0x50;
        } while (lVar13 != *(longlong *)(lVar5 + 0xa28));
      }
      lVar13 = *(longlong *)(lVar5 + 0xa40);
      if (lVar13 != *(longlong *)(lVar5 + 0xa48)) {
        do {
          uStack_a0 = *(uint64_t *)(lVar13 + 0x28);
          uStack_98 = 3;
          FUN_1804a5c60(param_2,&uStack_f0,&uStack_a0);
          uStack_90 = *(uint64_t *)(lVar13 + 0x20);
          uStack_88 = 3;
          FUN_1804a5c60(param_2,&puStack_158,&uStack_90);
          lVar13 = lVar13 + 0x50;
        } while (lVar13 != *(longlong *)(lVar5 + 0xa48));
      }
      uStack_f8 = 5;
      uStack_100 = uVar1;
      FUN_1804a5c60(param_2,auStack_78,&uStack_100);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < iVar2);
  }
  uStack_110 = 3;
  pppuStack_138 = &pppuStack_138;
  pppuStack_130 = &pppuStack_138;
  puStack_128 = (uint64_t *)0x0;
  uStack_120 = 0;
  uStack_118 = 0;
  lVar5 = (**(code **)(_DAT_180c8ece0 + 0x2c0))(*(int32_t *)(_DAT_180c8ece0 + 0x10));
  puVar12 = &system_buffer_ptr;
  if (*(void **)(lVar5 + 8) != (void *)0x0) {
    puVar12 = *(void **)(lVar5 + 8);
  }
  puStack_158 = &unknown_var_3456_ptr;
  uStack_140 = 0;
  puStack_150 = (int8_t *)0x0;
  uStack_148 = 0;
  if (puVar12 != (void *)0x0) {
    lVar5 = -1;
    do {
      lVar13 = lVar5;
      lVar5 = lVar13 + 1;
    } while (puVar12[lVar5] != '\0');
    if ((int)lVar5 != 0) {
      iVar10 = (int)lVar13 + 2;
      iVar2 = iVar10;
      if (iVar10 < 0x10) {
        iVar2 = 0x10;
      }
      puVar6 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar2,0x13);
      *puVar6 = 0;
      puStack_150 = puVar6;
      uVar3 = FUN_18064e990(puVar6);
      uStack_140 = CONCAT44(uStack_140._4_4_,uVar3);
                    // WARNING: Subroutine does not return
      memcpy(puVar6,puVar12,iVar10);
    }
  }
  uStack_148 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 3;
  ppppuVar7 = (uint64_t ****)pppuStack_130;
  if ((uint64_t ****)pppuStack_130 != &pppuStack_138) {
    do {
      pppuVar9 = (uint64_t ***)&system_buffer_ptr;
      if (ppppuVar7[5] != (uint64_t ***)0x0) {
        pppuVar9 = ppppuVar7[5];
      }
      uStack_100 = FUN_1802abc50(_DAT_180c86930 + 0x1d0,pppuVar9);
      uStack_f8 = 3;
      FUN_1804a5c60(param_2,auStack_78,&uStack_100);
      ppppuVar7 = (uint64_t ****)func_0x00018066bd70(ppppuVar7);
    } while (ppppuVar7 != &pppuStack_138);
  }
  puVar8 = puStack_128;
  puStack_158 = &unknown_var_3456_ptr;
  if (puStack_150 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_150 = (int8_t *)0x0;
  uStack_140 = uStack_140 & 0xffffffff00000000;
  puStack_158 = &unknown_var_720_ptr;
  if (puStack_128 == (uint64_t *)0x0) {
    return param_2;
  }
  FUN_18005d260(&pppuStack_138,*puStack_128);
  puVar8[4] = &unknown_var_3456_ptr;
  if (puVar8[5] == 0) {
    puVar8[5] = 0;
    *(int32_t *)(puVar8 + 7) = 0;
    puVar8[4] = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1804a3c40(uint64_t param_1,longlong param_2)

{
  byte bVar1;
  uint64_t *puVar2;
  uint uVar3;
  longlong lVar4;
  uint64_t *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint64_t *puVar8;
  byte *pbVar9;
  void *puVar10;
  uint64_t *puVar11;
  uint64_t uVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint64_t *puVar15;
  int iVar16;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  char acStackX_18 [8];
  char acStackX_20 [8];
  char cStack_b8;
  char cStack_b7;
  char cStack_b6;
  char cStack_b5;
  char cStack_b4;
  char cStack_b3;
  char acStack_b2 [2];
  int iStack_b0;
  uint uStack_ac;
  int32_t uStack_a8;
  int iStack_a4;
  longlong lStack_a0;
  longlong lStack_98;
  uint64_t *puStack_90;
  uint64_t *puStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  void *puStack_70;
  longlong lStack_68;
  longlong alStack_50 [2];
  uint64_t uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_a8 = 0;
  lVar4 = (**(code **)(_DAT_180c8ece0 + 0x2d0))(*(int32_t *)(_DAT_180c8ece0 + 0x10));
  puVar10 = &system_buffer_ptr;
  if (*(void **)(lVar4 + 8) != (void *)0x0) {
    puVar10 = *(void **)(lVar4 + 8);
  }
  FUN_180627910(&puStack_70,puVar10);
  puStack_90 = (uint64_t *)0x0;
  puStack_88 = (uint64_t *)0x0;
  uStack_80 = 0;
  uStack_78 = 3;
  *(uint64_t *)(param_2 + 0x18) = 0;
  *(int32_t *)(param_2 + 0x28) = 3;
  *(longlong *)param_2 = param_2;
  *(longlong *)(param_2 + 8) = param_2;
  *(uint64_t *)(param_2 + 0x10) = 0;
  *(int8_t *)(param_2 + 0x18) = 0;
  *(uint64_t *)(param_2 + 0x20) = 0;
  uStack_a8 = 1;
  puVar8 = puStack_90;
  puVar5 = puStack_90;
  puVar2 = puStack_88;
  if (lStack_68 != 0) {
    FUN_180057980(&puStack_70,&puStack_90,&system_data_d36c);
    puVar8 = puStack_90;
    puVar5 = puStack_90;
    puVar2 = puStack_88;
  }
  for (; puVar11 = puStack_88, puVar15 = puStack_90, puVar8 != puStack_88; puVar8 = puVar8 + 4) {
    puStack_90 = puVar5;
    puStack_88 = puVar2;
    if (*(int *)(puVar8 + 2) != 0) {
      FUN_180057b00(param_2,alStack_50,puVar8);
    }
    puVar5 = puStack_90;
    puVar2 = puStack_88;
    puStack_88 = puVar11;
    puStack_90 = puVar15;
  }
  uStack_ac = 0;
  iStack_a4 = _DAT_180c95eb8;
  puVar8 = puStack_90;
  if (0 < _DAT_180c95eb8) {
    do {
      puStack_88 = puVar2;
      puStack_90 = puVar5;
      puVar5 = (uint64_t *)0x180c95e98;
      puVar8 = _DAT_180c95ea8;
      if (_DAT_180c95ea8 == (uint64_t *)0x0) {
LAB_1804a3d89:
        puVar5 = (uint64_t *)0x180c95e98;
      }
      else {
        do {
          if (*(uint *)(puVar8 + 4) < uStack_ac) {
            puVar8 = (uint64_t *)*puVar8;
          }
          else {
            puVar5 = puVar8;
            puVar8 = (uint64_t *)puVar8[1];
          }
        } while (puVar8 != (uint64_t *)0x0);
        if ((puVar5 == (uint64_t *)0x180c95e98) || (uStack_ac < *(uint *)(puVar5 + 4)))
        goto LAB_1804a3d89;
      }
      lStack_a0 = puVar5[5];
      lStack_98 = *(longlong *)(lStack_a0 + 0x388);
      alStack_50[0] = *(longlong *)(lStack_a0 + 0x398);
      iStack_b0 = 0;
      if (0 < *(int *)(lStack_a0 + 0x380)) {
        plVar14 = (longlong *)(*(longlong *)(lStack_a0 + 0x378) + 0x40);
        do {
          lVar4 = 6;
          plVar13 = plVar14;
          do {
            lVar7 = *plVar13;
            if (lVar7 != 0) {
              lVar6 = FUN_18062b420(_DAT_180c8ed18,0x40,*(int8_t *)(param_2 + 0x28));
              FUN_180627ae0(lVar6 + 0x20,lVar7 + 0x1f0);
              lVar7 = FUN_1800590b0(param_2,acStackX_18,lVar6 + 0x20);
              if (acStackX_18[0] != '\0') {
                if (lVar7 == param_2) goto LAB_1804a3e6f;
                if (*(int *)(lVar7 + 0x30) == 0) goto LAB_1804a3e67;
                if (*(int *)(lVar6 + 0x30) == 0) goto LAB_1804a3e6f;
                pbVar9 = *(byte **)(lVar7 + 0x28);
                lVar4 = *(longlong *)(lVar6 + 0x28) - (longlong)pbVar9;
                goto LAB_1804a3e50;
              }
              FUN_18005d1f0(extraout_XMM0_Da,lVar6);
            }
            plVar13 = plVar13 + 1;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
          iStack_b0 = iStack_b0 + 1;
          plVar14 = plVar14 + 0x32;
        } while (iStack_b0 < *(int *)(lStack_a0 + 0x380));
      }
      iStack_b0 = 0;
      if (0 < *(int *)(lStack_a0 + 0x390)) {
        plVar14 = (longlong *)(lStack_98 + 0x40);
        do {
          lVar4 = 6;
          plVar13 = plVar14;
          do {
            lVar7 = *plVar13;
            if (lVar7 != 0) {
              lVar6 = FUN_18062b420(_DAT_180c8ed18,0x40,*(int8_t *)(param_2 + 0x28));
              FUN_180627ae0(lVar6 + 0x20,lVar7 + 0x1f0);
              lVar7 = FUN_1800590b0(param_2,acStackX_20,lVar6 + 0x20);
              if (acStackX_20[0] != '\0') {
                if (lVar7 == param_2) goto LAB_1804a3f7f;
                if (*(int *)(lVar7 + 0x30) == 0) goto LAB_1804a3f77;
                if (*(int *)(lVar6 + 0x30) == 0) goto LAB_1804a3f7f;
                pbVar9 = *(byte **)(lVar7 + 0x28);
                lVar4 = *(longlong *)(lVar6 + 0x28) - (longlong)pbVar9;
                goto LAB_1804a3f60;
              }
              FUN_18005d1f0(extraout_XMM0_Da_00,lVar6);
            }
            plVar13 = plVar13 + 1;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
          iStack_b0 = iStack_b0 + 1;
          plVar14 = plVar14 + 0x32;
        } while (iStack_b0 < *(int *)(lStack_a0 + 0x390));
      }
      lVar4 = lStack_a0;
      iVar16 = 0;
      if (0 < *(int *)(lStack_a0 + 0x3a0)) {
        plVar14 = (longlong *)(alStack_50[0] + 0x20);
        do {
          lVar7 = *plVar14;
          if (lVar7 != 0) {
            lVar6 = FUN_18062b420(_DAT_180c8ed18,0x40,*(int8_t *)(param_2 + 0x28));
            FUN_180627ae0(lVar6 + 0x20,lVar7 + 0x1f0);
            lVar7 = FUN_1800590b0(param_2,&cStack_b8,lVar6 + 0x20);
            if (cStack_b8 != '\0') {
              if (lVar7 == param_2) goto LAB_1804a407f;
              if (*(int *)(lVar7 + 0x30) == 0) goto LAB_1804a4077;
              if (*(int *)(lVar6 + 0x30) == 0) goto LAB_1804a407f;
              pbVar9 = *(byte **)(lVar7 + 0x28);
              lVar4 = *(longlong *)(lVar6 + 0x28) - (longlong)pbVar9;
              goto LAB_1804a4060;
            }
            FUN_18005d1f0(extraout_XMM0_Da_01,lVar6);
          }
          iVar16 = iVar16 + 1;
          plVar14 = plVar14 + 0xb;
        } while (iVar16 < *(int *)(lVar4 + 0x3a0));
      }
      plVar14 = (longlong *)(lVar4 + 0x2a0);
      lVar4 = 3;
      do {
        lVar7 = *plVar14;
        if ((lVar7 != 0) && (*(int *)(lVar7 + 0x200) != 0)) {
          lVar6 = FUN_18062b420(_DAT_180c8ed18,0x40,*(int8_t *)(param_2 + 0x28));
          FUN_180627ae0(lVar6 + 0x20,lVar7 + 0x1f0);
          lVar7 = FUN_1800590b0(param_2,&cStack_b7,lVar6 + 0x20);
          if (cStack_b7 != '\0') {
            if (lVar7 == param_2) goto LAB_1804a415f;
            if (*(int *)(lVar7 + 0x30) == 0) goto LAB_1804a4157;
            if (*(int *)(lVar6 + 0x30) == 0) goto LAB_1804a415f;
            pbVar9 = *(byte **)(lVar7 + 0x28);
            lVar4 = *(longlong *)(lVar6 + 0x28) - (longlong)pbVar9;
            goto LAB_1804a4140;
          }
          FUN_18005d1f0(extraout_XMM0_Da_02,lVar6);
        }
        lVar7 = lStack_a0;
        plVar14 = plVar14 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      lVar4 = *(longlong *)(lStack_a0 + 0x2b8);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x200) != 0)) {
        lVar6 = FUN_18062b420(_DAT_180c8ed18,0x40,*(int8_t *)(param_2 + 0x28));
        FUN_180627ae0(lVar6 + 0x20,lVar4 + 0x1f0);
        lVar4 = FUN_1800590b0(param_2,&cStack_b6,lVar6 + 0x20);
        if (cStack_b6 != '\0') {
          if (lVar4 == param_2) goto LAB_1804a422f;
          if (*(int *)(lVar4 + 0x30) == 0) goto LAB_1804a4227;
          if (*(int *)(lVar6 + 0x30) == 0) goto LAB_1804a422f;
          pbVar9 = *(byte **)(lVar4 + 0x28);
          lVar7 = *(longlong *)(lVar6 + 0x28) - (longlong)pbVar9;
          goto LAB_1804a4210;
        }
        FUN_18005d1f0(extraout_XMM0_Da_03,lVar6);
      }
      lVar4 = *(longlong *)(lVar7 + 0x2c0);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x200) != 0)) {
        lVar6 = FUN_18062b420(_DAT_180c8ed18,0x40,*(int8_t *)(param_2 + 0x28));
        FUN_180627ae0(lVar6 + 0x20,lVar4 + 0x1f0);
        lVar4 = FUN_1800590b0(param_2,&cStack_b5,lVar6 + 0x20);
        if (cStack_b5 != '\0') {
          if (lVar4 == param_2) goto LAB_1804a42ef;
          if (*(int *)(lVar4 + 0x30) == 0) goto LAB_1804a42e7;
          if (*(int *)(lVar6 + 0x30) == 0) goto LAB_1804a42ef;
          pbVar9 = *(byte **)(lVar4 + 0x28);
          lVar7 = *(longlong *)(lVar6 + 0x28) - (longlong)pbVar9;
          goto LAB_1804a42d0;
        }
        FUN_18005d1f0(extraout_XMM0_Da_04,lVar6);
      }
      lVar4 = *(longlong *)(lVar7 + 0x2c8);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x200) != 0)) {
        lVar6 = FUN_18062b420(_DAT_180c8ed18,0x40,*(int8_t *)(param_2 + 0x28));
        FUN_180627ae0(lVar6 + 0x20,lVar4 + 0x1f0);
        lVar4 = FUN_1800590b0(param_2,&cStack_b4,lVar6 + 0x20);
        if (cStack_b4 != '\0') {
          if (lVar4 == param_2) goto LAB_1804a43af;
          if (*(int *)(lVar4 + 0x30) == 0) goto LAB_1804a43a7;
          if (*(int *)(lVar6 + 0x30) == 0) goto LAB_1804a43af;
          pbVar9 = *(byte **)(lVar4 + 0x28);
          lVar7 = *(longlong *)(lVar6 + 0x28) - (longlong)pbVar9;
          goto LAB_1804a4390;
        }
        FUN_18005d1f0(extraout_XMM0_Da_05,lVar6);
      }
      lVar4 = *(longlong *)(lVar7 + 0x2d0);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x200) != 0)) {
        lVar6 = FUN_18062b420(_DAT_180c8ed18,0x40,*(int8_t *)(param_2 + 0x28));
        FUN_180627ae0(lVar6 + 0x20,lVar4 + 0x1f0);
        lVar4 = FUN_1800590b0(param_2,&cStack_b3,lVar6 + 0x20);
        if (cStack_b3 != '\0') {
          if (lVar4 == param_2) goto LAB_1804a446f;
          if (*(int *)(lVar4 + 0x30) == 0) goto LAB_1804a4467;
          if (*(int *)(lVar6 + 0x30) == 0) goto LAB_1804a446f;
          pbVar9 = *(byte **)(lVar4 + 0x28);
          lVar7 = *(longlong *)(lVar6 + 0x28) - (longlong)pbVar9;
          goto LAB_1804a4450;
        }
        FUN_18005d1f0(extraout_XMM0_Da_06,lVar6);
      }
      lVar4 = *(longlong *)(lVar7 + 0x370);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x200) != 0)) {
        lVar7 = FUN_18062b420(_DAT_180c8ed18,0x40,*(int8_t *)(param_2 + 0x28));
        FUN_180627ae0(lVar7 + 0x20,lVar4 + 0x1f0);
        lVar4 = FUN_1800590b0(param_2,acStack_b2,lVar7 + 0x20);
        if (acStack_b2[0] != '\0') {
          if (lVar4 == param_2) goto LAB_1804a452f;
          if (*(int *)(lVar4 + 0x30) == 0) goto LAB_1804a4527;
          if (*(int *)(lVar7 + 0x30) == 0) goto LAB_1804a452f;
          pbVar9 = *(byte **)(lVar4 + 0x28);
          lVar6 = *(longlong *)(lVar7 + 0x28) - (longlong)pbVar9;
          goto LAB_1804a4510;
        }
        FUN_18005d1f0(extraout_XMM0_Da_07,lVar7);
      }
      uStack_ac = uStack_ac + 1;
      puVar5 = puStack_90;
      puVar2 = puStack_88;
      puVar8 = puStack_90;
      puVar15 = puStack_90;
      puVar11 = puStack_88;
    } while ((int)uStack_ac < iStack_a4);
  }
  for (; puStack_88 = puVar2, puStack_90 = puVar5, puVar8 != puVar11; puVar8 = puVar8 + 4) {
    (**(code **)*puVar8)(puVar8,0);
    puVar5 = puStack_90;
    puVar2 = puStack_88;
  }
  if (puVar15 == (uint64_t *)0x0) {
    puStack_70 = &unknown_var_3456_ptr;
    if (lStack_68 == 0) {
      return param_2;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar15);
  while (pbVar9 = pbVar9 + 1, uVar3 != 0) {
LAB_1804a3e50:
    bVar1 = *pbVar9;
    uVar3 = (uint)pbVar9[lVar4];
    if (bVar1 != uVar3) break;
  }
  if ((int)(bVar1 - uVar3) < 1) {
LAB_1804a3e67:
    uVar12 = 1;
  }
  else {
LAB_1804a3e6f:
    uVar12 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar6,lVar7,param_2,uVar12);
  while (pbVar9 = pbVar9 + 1, uVar3 != 0) {
LAB_1804a3f60:
    bVar1 = *pbVar9;
    uVar3 = (uint)pbVar9[lVar4];
    if (bVar1 != uVar3) break;
  }
  if ((int)(bVar1 - uVar3) < 1) {
LAB_1804a3f77:
    uVar12 = 1;
  }
  else {
LAB_1804a3f7f:
    uVar12 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar6,lVar7,param_2,uVar12);
  while (pbVar9 = pbVar9 + 1, uVar3 != 0) {
LAB_1804a4060:
    bVar1 = *pbVar9;
    uVar3 = (uint)pbVar9[lVar4];
    if (bVar1 != uVar3) break;
  }
  if ((int)(bVar1 - uVar3) < 1) {
LAB_1804a4077:
    uVar12 = 1;
  }
  else {
LAB_1804a407f:
    uVar12 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar6,lVar7,param_2,uVar12);
  while (pbVar9 = pbVar9 + 1, uVar3 != 0) {
LAB_1804a4140:
    bVar1 = *pbVar9;
    uVar3 = (uint)pbVar9[lVar4];
    if (bVar1 != uVar3) break;
  }
  if ((int)(bVar1 - uVar3) < 1) {
LAB_1804a4157:
    uVar12 = 1;
  }
  else {
LAB_1804a415f:
    uVar12 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar6,lVar7,param_2,uVar12);
  while (pbVar9 = pbVar9 + 1, uVar3 != 0) {
LAB_1804a4210:
    bVar1 = *pbVar9;
    uVar3 = (uint)pbVar9[lVar7];
    if (bVar1 != uVar3) break;
  }
  if ((int)(bVar1 - uVar3) < 1) {
LAB_1804a4227:
    uVar12 = 1;
  }
  else {
LAB_1804a422f:
    uVar12 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar6,lVar4,param_2,uVar12);
  while (pbVar9 = pbVar9 + 1, uVar3 != 0) {
LAB_1804a42d0:
    bVar1 = *pbVar9;
    uVar3 = (uint)pbVar9[lVar7];
    if (bVar1 != uVar3) break;
  }
  if ((int)(bVar1 - uVar3) < 1) {
LAB_1804a42e7:
    uVar12 = 1;
  }
  else {
LAB_1804a42ef:
    uVar12 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar6,lVar4,param_2,uVar12);
  while (pbVar9 = pbVar9 + 1, uVar3 != 0) {
LAB_1804a4390:
    bVar1 = *pbVar9;
    uVar3 = (uint)pbVar9[lVar7];
    if (bVar1 != uVar3) break;
  }
  if ((int)(bVar1 - uVar3) < 1) {
LAB_1804a43a7:
    uVar12 = 1;
  }
  else {
LAB_1804a43af:
    uVar12 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar6,lVar4,param_2,uVar12);
  while (pbVar9 = pbVar9 + 1, uVar3 != 0) {
LAB_1804a4450:
    bVar1 = *pbVar9;
    uVar3 = (uint)pbVar9[lVar7];
    if (bVar1 != uVar3) break;
  }
  if ((int)(bVar1 - uVar3) < 1) {
LAB_1804a4467:
    uVar12 = 1;
  }
  else {
LAB_1804a446f:
    uVar12 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar6,lVar4,param_2,uVar12);
  while (pbVar9 = pbVar9 + 1, uVar3 != 0) {
LAB_1804a4510:
    bVar1 = *pbVar9;
    uVar3 = (uint)pbVar9[lVar6];
    if (bVar1 != uVar3) break;
  }
  if ((int)(bVar1 - uVar3) < 1) {
LAB_1804a4527:
    uVar12 = 1;
  }
  else {
LAB_1804a452f:
    uVar12 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,lVar4,param_2,uVar12);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




