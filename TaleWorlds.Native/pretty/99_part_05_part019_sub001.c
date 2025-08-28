#include "TaleWorlds.Native.Split.h"

// 99_part_05_part019_sub001.c - 8 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_05_part019.c - 8 个函数


// 函数: void FUN_1802e3970(longlong *param_1)
void FUN_1802e3970(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  int **ppiVar10;
  longlong lVar11;
  uint uVar12;
  int *piVar14;
  int *piVar15;
  int *piStackX_18;
  int iStackX_20;
  int32_t uStackX_24;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  longlong *plStack_a8;
  longlong lStack_a0;
  uint64_t uStack_98;
  int32_t uStack_90;
  char acStack_88 [4];
  uint uStack_84;
  int *piStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int *piStack_70;
  void *puStack_68;
  uint64_t uStack_58;
  ulonglong uVar13;
  
  uStack_58 = 0xfffffffffffffffe;
  uVar13 = 0;
  lStack_a0 = 0;
  lStack_a0 = FUN_18062b420(_DAT_180c8ed18,0x100000,0x24);
  LOCK();
  uStack_98 = 0;
  UNLOCK();
  uStack_90 = 0;
  uStack_b8 = 0x3f800000;
  uStack_b4 = 0x40000000;
  plStack_a8 = &lStack_a0;
  iVar4 = 0;
  uStack_b0 = 0;
  uVar8 = uVar13;
  if (0 < (int)param_1[2]) {
    do {
      piVar15 = (int *)0x0;
      lVar1 = param_1[1];
      lVar11 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      if (*(char *)(uVar8 + 0xc + lVar1) == '\0') {
        piVar14 = (int *)0xffffffffffffffff;
      }
      else {
        plVar2 = *(longlong **)(lVar11 + 0x8400);
        iVar5 = (**(code **)(*plVar2 + 0xe8))
                          (plVar2,*(uint64_t *)(uVar8 + lVar1),&piStackX_18,8,0);
        piVar14 = piStackX_18;
        while (piStackX_18 = piVar14, iVar5 != 0) {
          Sleep(1);
          plVar2 = *(longlong **)(lVar11 + 0x8400);
          iVar5 = (**(code **)(*plVar2 + 0xe8))
                            (plVar2,*(uint64_t *)(uVar8 + lVar1),&piStackX_18,8,0);
          piVar14 = piStackX_18;
        }
      }
      iVar5 = *(int *)(uVar8 + 8 + lVar1);
      for (piVar3 = _DAT_180be0000;
          (piVar9 = piRam0000000180be0008, piVar3 != (int *)0x0 &&
          (piVar9 = piVar3, iVar5 != *piVar3)); piVar3 = *(int **)(piVar3 + 2)) {
      }
      piStack_80 = piVar14;
      if ((piVar9 == piRam0000000180be0008) && (piVar14 == (int *)0x0)) {
        uStackX_24 = CONCAT31(uStackX_24._1_3_,1);
        for (piVar3 = _DAT_180be0000; iStackX_20 = iVar5, piVar3 != (int *)0x0;
            piVar3 = *(int **)(piVar3 + 2)) {
          if (iVar5 == *piVar3) goto LAB_1802e3c87;
        }
        LOCK();
        plVar2 = plStack_a8 + 1;
        lVar11 = *plVar2;
        *plVar2 = *plVar2 + 0x20;
        UNLOCK();
        uVar7 = lVar11 + 0xfU & 0xfffffffffffffff0;
        if (uVar7 + 0x10 < 0x100000) {
          piVar15 = (int *)(*plStack_a8 + uVar7);
        }
        *(ulonglong *)piVar15 = CONCAT44(uStackX_24,iVar5);
        piVar15[2] = 0;
        piVar15[3] = 0;
        FUN_18066c220(&uStack_b8,acStack_88,1,iVar4,1);
        if (acStack_88[0] != '\0') {
          lVar1 = (ulonglong)uStack_84 * 8;
          LOCK();
          plVar2 = plStack_a8 + 1;
          lVar11 = *plVar2;
          *plVar2 = *plVar2 + lVar1 + 0x10;
          UNLOCK();
          uVar8 = lVar11 + 7U & 0xfffffffffffffff8;
          if (lVar1 + 8 + uVar8 < 0x100000) {
            lVar11 = *plStack_a8 + uVar8;
          }
          else {
            lVar11 = 0;
          }
                    // WARNING: Subroutine does not return
          memset(lVar11,0,lVar1);
        }
        *(int **)(piVar15 + 2) = _DAT_180be0000;
        iVar4 = iVar4 + 1;
        piVar14 = piStack_80;
        piVar3 = piVar15;
        _DAT_180be0000 = piVar15;
LAB_1802e3c87:
        piStack_70 = piVar3;
        puStack_68 = &DAT_180be0000;
        piStack_80 = piStack_70;
        uStack_78 = 0x80be0000;
        uStack_74 = 1;
        piVar9 = piStack_70;
      }
      if ((piVar9 != piRam0000000180be0008) && (piVar14 != (int *)0x0)) {
        *(int8_t *)(piVar9 + 1) = 0;
      }
      if (*(longlong **)(uVar8 + lVar1) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(uVar8 + lVar1) + 0x10))();
        *(uint64_t *)(uVar8 + lVar1) = 0;
      }
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      uVar8 = uVar8 + 0x10;
    } while ((int)uVar12 < (int)param_1[2]);
  }
  ppiVar10 = (int **)&DAT_180be0000;
  piVar15 = _DAT_180be0000;
  if (_DAT_180be0000 == (int *)0x0) {
    ppiVar10 = &piRam0000000180be0008;
    piVar15 = piRam0000000180be0008;
    while (piVar15 == (int *)0x0) {
      ppiVar10 = ppiVar10 + 1;
      piVar15 = *ppiVar10;
    }
    piVar15 = *ppiVar10;
  }
  if (piVar15 != piRam0000000180be0008) {
    do {
      if ((char)piVar15[1] != '\0') {
        pbVar6 = (byte *)((longlong)*piVar15 + *(longlong *)(*param_1 + 0xd8));
        *pbVar6 = *pbVar6 | 0x20;
      }
      piVar15 = *(int **)(piVar15 + 2);
      while (piVar15 == (int *)0x0) {
        ppiVar10 = ppiVar10 + 1;
        piVar15 = *ppiVar10;
      }
    } while (piVar15 != piRam0000000180be0008);
  }
  if (param_1[1] == 0) {
    param_1[1] = 0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_1);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1802e3db0(longlong param_1)
void FUN_1802e3db0(longlong param_1)

{
  uint64_t *puVar1;
  code *apcStack_30 [2];
  code *pcStack_20;
  void *puStack_18;
  
  puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3,0xfffffffffffffffe);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = *(uint64_t *)(param_1 + 0x9a20);
  puVar1[1] = *(uint64_t *)(param_1 + 0x99a8);
  *(int32_t *)(puVar1 + 2) = *(int32_t *)(param_1 + 0x99b0);
  pcStack_20 = (code *)&UNK_1802e4bc0;
  puStack_18 = &UNK_1800ee4c0;
  apcStack_30[0] = FUN_1802e3970;
  (*(code *)&UNK_1800ee4c0)(puVar1,apcStack_30);
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(apcStack_30,0,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1802e3e70(longlong param_1,longlong param_2)
void FUN_1802e3e70(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int32_t *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  void *puVar13;
  longlong lVar14;
  int8_t auStack_f8 [32];
  longlong *plStack_d8;
  longlong *plStack_d0;
  uint64_t uStack_c8;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int16_t uStack_b8;
  int8_t uStack_b6;
  int32_t uStack_b4;
  int8_t uStack_b0;
  uint64_t uStack_a8;
  longlong alStack_a0 [3];
  int32_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  void *puStack_70;
  void *puStack_68;
  int32_t uStack_60;
  undefined auStack_58 [32];
  ulonglong uStack_38;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  lVar14 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(lVar14 + 0x563) != '\0') {
    if ((0 < (int)((*(longlong *)(lVar14 + 0x5b0) - *(longlong *)(lVar14 + 0x5a8)) / 0xc)) &&
       (*(int *)(_DAT_180c8a9c8 + 0x620) == 0)) {
      puVar10 = (int32_t *)FUN_1800daa50();
      puStack_70 = &UNK_18098bc80;
      puStack_68 = auStack_58;
      auStack_58[0] = 0;
      uStack_60 = 0x13;
      strcpy_s(auStack_58,0x20,&UNK_180a193a8);
      puVar13 = &DAT_18098bc73;
      if (puStack_68 != (void *)0x0) {
        puVar13 = puStack_68;
      }
      (**(code **)(*(longlong *)(puVar10 + 0xd48) + 0x10))(puVar10 + 0xd48,puVar13);
      puStack_70 = &UNK_18098bcb0;
      *puVar10 = 0x10;
      *(uint64_t *)(puVar10 + 0x4706) = 0;
      puVar10[0x4708] = (float)*(ushort *)(*(longlong *)(param_1 + 0x10) + 0x32c);
      puVar10[0x4709] = (float)*(ushort *)(*(longlong *)(param_1 + 0x10) + 0x32e);
      puVar10[0x470a] = 0;
      puVar10[0x470b] = 0x3f800000;
      lVar14 = 2;
      puVar8 = (uint64_t *)(*(longlong *)(param_1 + 0x28) + 0x36d0);
      puVar9 = (uint64_t *)(puVar10 + 0xc);
      do {
        puVar12 = puVar9;
        puVar11 = puVar8;
        uVar7 = puVar11[1];
        *puVar12 = *puVar11;
        puVar12[1] = uVar7;
        uVar7 = puVar11[3];
        puVar12[2] = puVar11[2];
        puVar12[3] = uVar7;
        uVar7 = puVar11[5];
        puVar12[4] = puVar11[4];
        puVar12[5] = uVar7;
        uVar7 = puVar11[7];
        puVar12[6] = puVar11[6];
        puVar12[7] = uVar7;
        uVar7 = puVar11[9];
        puVar12[8] = puVar11[8];
        puVar12[9] = uVar7;
        uVar7 = puVar11[0xb];
        puVar12[10] = puVar11[10];
        puVar12[0xb] = uVar7;
        uVar7 = puVar11[0xd];
        puVar12[0xc] = puVar11[0xc];
        puVar12[0xd] = uVar7;
        uVar7 = puVar11[0xf];
        puVar12[0xe] = puVar11[0xe];
        puVar12[0xf] = uVar7;
        lVar14 = lVar14 + -1;
        puVar8 = puVar11 + 0x10;
        puVar9 = puVar12 + 0x10;
      } while (lVar14 != 0);
      uVar7 = puVar11[0x11];
      puVar12[0x10] = puVar11[0x10];
      puVar12[0x11] = uVar7;
      uVar7 = puVar11[0x13];
      puVar12[0x12] = puVar11[0x12];
      puVar12[0x13] = uVar7;
      uVar7 = puVar11[0x15];
      puVar12[0x14] = puVar11[0x14];
      puVar12[0x15] = uVar7;
      uVar4 = *(int32_t *)((longlong)puVar11 + 0xb4);
      uVar5 = *(int32_t *)(puVar11 + 0x17);
      uVar6 = *(int32_t *)((longlong)puVar11 + 0xbc);
      *(int32_t *)(puVar12 + 0x16) = *(int32_t *)(puVar11 + 0x16);
      *(int32_t *)((longlong)puVar12 + 0xb4) = uVar4;
      *(int32_t *)(puVar12 + 0x17) = uVar5;
      *(int32_t *)((longlong)puVar12 + 0xbc) = uVar6;
      FUN_18024b8d0(puVar10);
      *(int8_t *)(puVar10 + 9) = 1;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_bc = 0xffffffff;
      uStack_b8 = 1;
      uStack_b6 = 0;
      uStack_b4 = 0xffffffff;
      uStack_b0 = 1;
      uStack_a8 = 0;
      plStack_d8 = alStack_a0;
      alStack_a0[0] = 0;
      alStack_a0[1] = 0;
      alStack_a0[2] = 0;
      uStack_88 = 3;
      uStack_80 = 0;
      FUN_1801a3620(*(uint64_t *)(param_1 + 0x28),&uStack_c8);
      plStack_d0 = *(longlong **)(puVar10 + 0x25a4);
      *(uint64_t *)(puVar10 + 0x25a4) = 0;
      if (plStack_d0 != (longlong *)0x0) {
        (**(code **)(*plStack_d0 + 0x38))();
      }
      puVar10[0x268b] = 0xfffffff6;
      puVar10[1] = puVar10[1] | 0x1210004;
      FUN_1801be080(puVar10 + 2,_DAT_180c86890 + 0x13b0);
      *(int8_t *)(puVar10 + 0x25c4) = 2;
      plVar3 = *(longlong **)(param_1 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        plStack_d8 = plVar3;
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      plStack_d8 = *(longlong **)(puVar10 + 0x25aa);
      *(longlong **)(puVar10 + 0x25aa) = plVar3;
      if (plStack_d8 != (longlong *)0x0) {
        (**(code **)(*plStack_d8 + 0x38))();
      }
      puVar10[0x6e] = 0x40008182;
      puVar10[0x4938] = 3;
      if (*(code **)(puVar10 + 0x2588) != (code *)0x0) {
        (**(code **)(puVar10 + 0x2588))(puVar10 + 0x2584,0,0);
      }
      *(void **)(puVar10 + 0x2588) = &UNK_1800ee4d0;
      *(void **)(puVar10 + 0x258a) = &UNK_1800ee4c0;
      *(code **)(puVar10 + 0x2584) = FUN_1802e3db0;
      *(longlong *)(puVar10 + 0x2594) = *(longlong *)(param_1 + 0x28) + 0x570;
      FUN_180304010(*(uint64_t *)(param_2 + 0x3580),puVar10);
      LOCK();
      piVar1 = (int *)(param_2 + 0x11a48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      *(int32_t **)(param_2 + 0x9a48 + (longlong)iVar2 * 8) = puVar10;
      uVar7 = *(uint64_t *)(param_2 + 0x9a3c);
      *(uint64_t *)(puVar10 + 0x268d) = *(uint64_t *)(param_2 + 0x9a34);
      *(uint64_t *)(puVar10 + 0x268f) = uVar7;
      plStack_d8 = alStack_a0;
      if (alStack_a0[0] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_f8);
}







// 函数: void FUN_1802e4210(longlong param_1,float *param_2)
void FUN_1802e4210(longlong param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int32_t uStack_3c;
  
  fStack_48 = *param_2;
  if (*(float *)(param_1 + 0x30) < fStack_48) {
    fStack_48 = *(float *)(param_1 + 0x30);
  }
  fStack_44 = param_2[1];
  if (*(float *)(param_1 + 0x34) < fStack_44) {
    fStack_44 = *(float *)(param_1 + 0x34);
  }
  fStack_40 = param_2[2];
  if (*(float *)(param_1 + 0x38) < fStack_40) {
    fStack_40 = *(float *)(param_1 + 0x38);
  }
  *(ulonglong *)(param_1 + 0x30) = CONCAT44(fStack_44,fStack_48);
  *(ulonglong *)(param_1 + 0x38) = CONCAT44(uStack_3c,fStack_40);
  fStack_48 = *param_2;
  if (fStack_48 < *(float *)(param_1 + 0x40)) {
    fStack_48 = *(float *)(param_1 + 0x40);
  }
  fStack_44 = param_2[1];
  if (fStack_44 < *(float *)(param_1 + 0x44)) {
    fStack_44 = *(float *)(param_1 + 0x44);
  }
  fStack_40 = param_2[2];
  if (fStack_40 < *(float *)(param_1 + 0x48)) {
    fStack_40 = *(float *)(param_1 + 0x48);
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(ulonglong *)(param_1 + 0x40) = CONCAT44(fStack_44,fStack_48);
  *(ulonglong *)(param_1 + 0x48) = CONCAT44(uStack_3c,fStack_40);
  fVar2 = param_2[1] - *(float *)(lVar1 + 0x3864);
  fVar3 = *param_2 - *(float *)(lVar1 + 0x3860);
  fVar4 = param_2[2] - *(float *)(lVar1 + 0x3868);
  fVar5 = *(float *)(lVar1 + 0x3834) * fVar2 + *(float *)(lVar1 + 0x3830) * fVar3 +
          *(float *)(lVar1 + 0x3838) * fVar4;
  fVar6 = *(float *)(lVar1 + 0x3844) * fVar2 + *(float *)(lVar1 + 0x3840) * fVar3 +
          *(float *)(lVar1 + 0x3848) * fVar4;
  fVar2 = *(float *)(lVar1 + 0x3854) * fVar2 + *(float *)(lVar1 + 0x3850) * fVar3 +
          *(float *)(lVar1 + 0x3858) * fVar4;
  fStack_48 = fVar5;
  if (*(float *)(lVar1 + 0x3810) < fVar5) {
    fStack_48 = *(float *)(lVar1 + 0x3810);
  }
  fStack_44 = fVar6;
  if (*(float *)(lVar1 + 0x3814) < fVar6) {
    fStack_44 = *(float *)(lVar1 + 0x3814);
  }
  fStack_40 = fVar2;
  if (*(float *)(lVar1 + 0x3818) < fVar2) {
    fStack_40 = *(float *)(lVar1 + 0x3818);
  }
  *(ulonglong *)(lVar1 + 0x3810) = CONCAT44(fStack_44,fStack_48);
  *(ulonglong *)(lVar1 + 0x3818) = CONCAT44(uStack_3c,fStack_40);
  lVar1 = *(longlong *)(param_1 + 0x28);
  fStack_48 = fVar5;
  if (fVar5 < *(float *)(lVar1 + 0x3820)) {
    fStack_48 = *(float *)(lVar1 + 0x3820);
  }
  fStack_44 = fVar6;
  if (fVar6 < *(float *)(lVar1 + 0x3824)) {
    fStack_44 = *(float *)(lVar1 + 0x3824);
  }
  fStack_40 = fVar2;
  if (fVar2 < *(float *)(lVar1 + 0x3828)) {
    fStack_40 = *(float *)(lVar1 + 0x3828);
  }
  *(ulonglong *)(lVar1 + 0x3820) = CONCAT44(fStack_44,fStack_48);
  *(ulonglong *)(lVar1 + 0x3828) = CONCAT44(uStack_3c,fStack_40);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1802e4490(int *param_1)
void FUN_1802e4490(int *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = _DAT_180c86920;
  if (param_1[1] != *(int *)(_DAT_180c86920 + 0xcb0)) {
    FUN_180095420();
    lVar3 = _DAT_180c86920;
    iVar2 = *(int *)(_DAT_180c86920 + 0xcb0);
    iVar1 = 0;
    if ((-1 < iVar2) && (iVar1 = iVar2, 3 < iVar2)) {
      iVar1 = 3;
    }
    param_1[1] = iVar1;
    func_0x0001802e4430(param_1);
  }
  iVar2 = *(int *)(lVar3 + 0xd20);
  if (param_1[2] != iVar2) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (2 < iVar2) {
      iVar2 = 2;
    }
    param_1[2] = iVar2;
  }
  iVar2 = *(int *)(lVar3 + 0xc40);
  if (*param_1 != iVar2) {
    iVar1 = 0;
    if ((-1 < iVar2) && (iVar1 = iVar2, 2 < iVar2)) {
      iVar1 = 2;
    }
    *param_1 = iVar1;
  }
  return;
}



ulonglong FUN_1802e4530(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  longlong lVar8;
  uint uVar9;
  int *piVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar10;
  
  FUN_1802e4490();
  uVar10 = 0;
  *(uint64_t *)(param_2 + 0x9a10) = 0;
  *(uint64_t *)(param_2 + 0x9a18) = 0;
  lVar8 = 2;
  if (*(char *)(param_1 + 0xb0) != '\0') {
    if ((*(int *)(param_1 + 0x84) == -1) && (lVar5 = FUN_1802e18c0(param_1), uVar10 = 0, lVar5 != 0)
       ) {
      *(longlong *)(param_1 + 0x88) = lVar5;
      uVar10 = 1;
      *(int32_t *)(param_1 + 0x84) = 0;
    }
    *(int8_t *)(param_1 + 0x68) = 1;
    lVar5 = FUN_1802e1bb0(param_1,param_2,0);
    uVar13 = uVar10;
    if (lVar5 != 0) {
      uVar13 = (ulonglong)((int)uVar10 + 1);
      *(longlong *)(param_1 + 0x88 + uVar10 * 8) = lVar5;
      puVar3 = (uint64_t *)(*(longlong *)(param_1 + 0x28) + 0x38a0);
      puVar4 = (uint64_t *)(*(longlong *)(param_1 + 0x28) + 0x39e0);
      lVar5 = lVar8;
      do {
        puVar7 = puVar4;
        puVar6 = puVar3;
        uVar2 = puVar6[1];
        *puVar7 = *puVar6;
        puVar7[1] = uVar2;
        uVar2 = puVar6[3];
        puVar7[2] = puVar6[2];
        puVar7[3] = uVar2;
        uVar2 = puVar6[5];
        puVar7[4] = puVar6[4];
        puVar7[5] = uVar2;
        uVar2 = puVar6[7];
        puVar7[6] = puVar6[6];
        puVar7[7] = uVar2;
        uVar2 = puVar6[9];
        puVar7[8] = puVar6[8];
        puVar7[9] = uVar2;
        uVar2 = puVar6[0xb];
        puVar7[10] = puVar6[10];
        puVar7[0xb] = uVar2;
        uVar2 = puVar6[0xd];
        puVar7[0xc] = puVar6[0xc];
        puVar7[0xd] = uVar2;
        uVar2 = puVar6[0xf];
        puVar7[0xe] = puVar6[0xe];
        puVar7[0xf] = uVar2;
        lVar5 = lVar5 + -1;
        puVar3 = puVar6 + 0x10;
        puVar4 = puVar7 + 0x10;
      } while (lVar5 != 0);
      uVar2 = puVar6[0x11];
      puVar7[0x10] = puVar6[0x10];
      puVar7[0x11] = uVar2;
      uVar2 = puVar6[0x13];
      puVar7[0x12] = puVar6[0x12];
      puVar7[0x13] = uVar2;
      uVar2 = puVar6[0x15];
      puVar7[0x14] = puVar6[0x14];
      puVar7[0x15] = uVar2;
      uVar2 = puVar6[0x17];
      puVar7[0x16] = puVar6[0x16];
      puVar7[0x17] = uVar2;
      puVar3 = (uint64_t *)(*(longlong *)(param_1 + 0x28) + 0x39e0);
      puVar4 = (uint64_t *)(*(longlong *)(param_1 + 0x28) + 0x3b20);
      lVar5 = lVar8;
      do {
        puVar7 = puVar4;
        puVar6 = puVar3;
        uVar2 = puVar6[1];
        *puVar7 = *puVar6;
        puVar7[1] = uVar2;
        uVar2 = puVar6[3];
        puVar7[2] = puVar6[2];
        puVar7[3] = uVar2;
        uVar2 = puVar6[5];
        puVar7[4] = puVar6[4];
        puVar7[5] = uVar2;
        uVar2 = puVar6[7];
        puVar7[6] = puVar6[6];
        puVar7[7] = uVar2;
        uVar2 = puVar6[9];
        puVar7[8] = puVar6[8];
        puVar7[9] = uVar2;
        uVar2 = puVar6[0xb];
        puVar7[10] = puVar6[10];
        puVar7[0xb] = uVar2;
        uVar2 = puVar6[0xd];
        puVar7[0xc] = puVar6[0xc];
        puVar7[0xd] = uVar2;
        uVar2 = puVar6[0xf];
        puVar7[0xe] = puVar6[0xe];
        puVar7[0xf] = uVar2;
        lVar5 = lVar5 + -1;
        puVar3 = puVar6 + 0x10;
        puVar4 = puVar7 + 0x10;
      } while (lVar5 != 0);
      uVar2 = puVar6[0x11];
      puVar7[0x10] = puVar6[0x10];
      puVar7[0x11] = uVar2;
      uVar2 = puVar6[0x13];
      puVar7[0x12] = puVar6[0x12];
      puVar7[0x13] = uVar2;
      uVar2 = puVar6[0x15];
      puVar7[0x14] = puVar6[0x14];
      puVar7[0x15] = uVar2;
      uVar2 = puVar6[0x17];
      puVar7[0x16] = puVar6[0x16];
      puVar7[0x17] = uVar2;
      puVar3 = (uint64_t *)(*(longlong *)(param_1 + 0x28) + 0x3b20);
      puVar4 = (uint64_t *)(*(longlong *)(param_1 + 0x28) + 0x3c60);
      do {
        puVar7 = puVar4;
        puVar6 = puVar3;
        uVar2 = puVar6[1];
        *puVar7 = *puVar6;
        puVar7[1] = uVar2;
        uVar2 = puVar6[3];
        puVar7[2] = puVar6[2];
        puVar7[3] = uVar2;
        uVar2 = puVar6[5];
        puVar7[4] = puVar6[4];
        puVar7[5] = uVar2;
        uVar2 = puVar6[7];
        puVar7[6] = puVar6[6];
        puVar7[7] = uVar2;
        uVar2 = puVar6[9];
        puVar7[8] = puVar6[8];
        puVar7[9] = uVar2;
        uVar2 = puVar6[0xb];
        puVar7[10] = puVar6[10];
        puVar7[0xb] = uVar2;
        uVar2 = puVar6[0xd];
        puVar7[0xc] = puVar6[0xc];
        puVar7[0xd] = uVar2;
        uVar2 = puVar6[0xf];
        puVar7[0xe] = puVar6[0xe];
        puVar7[0xf] = uVar2;
        lVar8 = lVar8 + -1;
        puVar3 = puVar6 + 0x10;
        puVar4 = puVar7 + 0x10;
      } while (lVar8 != 0);
      uVar2 = puVar6[0x11];
      puVar7[0x10] = puVar6[0x10];
      puVar7[0x11] = uVar2;
      uVar2 = puVar6[0x13];
      puVar7[0x12] = puVar6[0x12];
      puVar7[0x13] = uVar2;
      uVar2 = puVar6[0x15];
      puVar7[0x14] = puVar6[0x14];
      puVar7[0x15] = uVar2;
      uVar2 = puVar6[0x17];
      puVar7[0x16] = puVar6[0x16];
      puVar7[0x17] = uVar2;
    }
    goto FUN_1802e480c;
  }
  if (*(char *)(param_1 + 0x68) == '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x28b8) == '\0') {
      if (*(longlong *)(param_1 + 0x10) == 0) goto LAB_1802e4798;
      FUN_1802e3e70(param_1,param_2);
    }
    *(int8_t *)(param_1 + 0x68) = 1;
  }
LAB_1802e4798:
  plVar12 = (longlong *)(param_1 + 0x88);
  piVar11 = (int *)(param_1 + 0x74);
  uVar13 = uVar10;
  do {
    if (((int)uVar10 == 4) && (*piVar11 == -1)) {
      lVar8 = FUN_1802e18c0(param_1);
      if (lVar8 != 0) {
        *plVar12 = lVar8;
        *piVar11 = 0;
LAB_1802e47eb:
        uVar13 = (ulonglong)((int)uVar13 + 1);
        plVar12 = plVar12 + 1;
      }
    }
    else {
      iVar1 = *piVar11;
      if ((0 < iVar1) &&
         (((iVar1 == 1 || (*(int *)(param_1 + 0x70) == iVar1)) &&
          (lVar8 = FUN_1802e1bb0(param_1,param_2,uVar10), lVar8 != 0)))) {
        *plVar12 = lVar8;
        goto LAB_1802e47eb;
      }
    }
    uVar9 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar9;
    piVar11 = piVar11 + 1;
  } while ((int)uVar9 < 5);
FUN_1802e480c:
  *param_3 = param_1 + 0x88;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  uVar9 = *(uint *)(param_1 + 0x70);
  if (3 < *(uint *)(param_1 + 0x70)) {
    uVar9 = 2;
  }
  *(uint *)(param_1 + 0x70) = uVar9;
  return uVar13;
}



int FUN_1802e4766(void)

{
  int iVar1;
  longlong lVar2;
  longlong unaff_RBX;
  uint uVar3;
  ulonglong uVar4;
  int *piVar5;
  longlong *plVar6;
  longlong *unaff_R12;
  ulonglong unaff_R13;
  int unaff_R14D;
  
  if (*(char *)(unaff_RBX + 0x68) == (char)unaff_R13) {
    if (*(char *)(*(longlong *)(unaff_RBX + 0x28) + 0x28b8) == (char)unaff_R13) {
      if (*(ulonglong *)(unaff_RBX + 0x10) == unaff_R13) goto LAB_1802e4798;
      FUN_1802e3e70();
    }
    *(int8_t *)(unaff_RBX + 0x68) = 1;
  }
LAB_1802e4798:
  uVar4 = unaff_R13 & 0xffffffff;
  plVar6 = (longlong *)(unaff_RBX + 0x88);
  piVar5 = (int *)(unaff_RBX + 0x74);
  do {
    if (((int)uVar4 == 4) && (*piVar5 == -1)) {
      lVar2 = FUN_1802e18c0();
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        *piVar5 = (int)unaff_R13;
LAB_1802e47eb:
        unaff_R14D = unaff_R14D + 1;
        plVar6 = plVar6 + 1;
      }
    }
    else {
      iVar1 = *piVar5;
      if ((0 < iVar1) && ((iVar1 == 1 || (*(int *)(unaff_RBX + 0x70) == iVar1)))) {
        lVar2 = FUN_1802e1bb0();
        if (lVar2 != 0) {
          *plVar6 = lVar2;
          goto LAB_1802e47eb;
        }
      }
    }
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    piVar5 = piVar5 + 1;
    if (4 < (int)uVar3) {
      *unaff_R12 = unaff_RBX + 0x88;
      *(int *)(unaff_RBX + 0x70) = *(int *)(unaff_RBX + 0x70) + 1;
      uVar3 = *(uint *)(unaff_RBX + 0x70);
      if (3 < uVar3) {
        uVar3 = 2;
      }
      *(uint *)(unaff_RBX + 0x70) = uVar3;
      return unaff_R14D;
    }
  } while( true );
}



int32_t FUN_1802e480c(void)

{
  uint uVar1;
  longlong unaff_RBX;
  uint unaff_EDI;
  longlong *unaff_R12;
  int32_t unaff_R14D;
  
  *unaff_R12 = unaff_RBX + 0x88;
  *(int *)(unaff_RBX + 0x70) = *(int *)(unaff_RBX + 0x70) + 1;
  uVar1 = *(uint *)(unaff_RBX + 0x70);
  if (3 < *(uint *)(unaff_RBX + 0x70)) {
    uVar1 = unaff_EDI;
  }
  *(uint *)(unaff_RBX + 0x70) = uVar1;
  return unaff_R14D;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1802e4840(longlong param_1)
void FUN_1802e4840(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int8_t auStack_208 [32];
  int8_t uStack_1e8;
  void *puStack_1d8;
  uint64_t *puStack_1d0;
  int32_t uStack_1c8;
  uint64_t uStack_1c0;
  int iStack_1b8;
  int iStack_1b4;
  int32_t uStack_1b0;
  int32_t uStack_1ac;
  int32_t uStack_1a8;
  int32_t uStack_1a4;
  int32_t uStack_1a0;
  longlong *plStack_198;
  longlong *plStack_190;
  longlong *plStack_188;
  uint64_t uStack_180;
  void *puStack_178;
  int8_t *puStack_170;
  int32_t uStack_168;
  int8_t auStack_160 [136];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_180 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_208;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uStack_1b0 = 1;
    uStack_1a4 = 0x18a;
    iStack_1b8 = *(int *)(param_1 + 0x20) << 2;
    uStack_1ac = 0x19;
    uStack_1a8 = 0x3f800000;
    uStack_1a0 = *(int32_t *)(*(longlong *)(param_1 + 0x28) + 0xa0);
    puStack_1d8 = &UNK_180a3c3e0;
    uStack_1c0 = 0;
    puStack_1d0 = (uint64_t *)0x0;
    uStack_1c8 = 0;
    iStack_1b4 = iStack_1b8;
    puVar4 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar4 = 0;
    puStack_1d0 = puVar4;
    uVar2 = FUN_18064e990(puVar4);
    *puVar4 = 0x645f636974617473;
    *(int16_t *)(puVar4 + 1) = 0x5f73;
    *(int8_t *)((longlong)puVar4 + 10) = 0;
    uStack_1c8 = 10;
    lVar1 = *(longlong *)(param_1 + 0x28);
    iVar3 = *(int *)(lVar1 + 0x4e8);
    uStack_1c0._0_4_ = uVar2;
    if (0 < iVar3) {
      if ((iVar3 != -10) && (uVar2 < iVar3 + 0xbU)) {
        uStack_1e8 = 0x13;
        puVar4 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar4,iVar3 + 0xbU,0x10);
        puStack_1d0 = puVar4;
        uStack_1c0._0_4_ = FUN_18064e990(puVar4);
        iVar3 = *(int *)(lVar1 + 0x4e8);
      }
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((longlong)puVar4 + 10),*(uint64_t *)(lVar1 + 0x4e0),
             (longlong)(iVar3 + 1));
    }
    puStack_178 = &UNK_1809fcc28;
    puStack_170 = auStack_160;
    auStack_160[0] = 0;
    uStack_168 = 10;
    puVar5 = (uint64_t *)&DAT_18098bc73;
    if (puVar4 != (uint64_t *)0x0) {
      puVar5 = puVar4;
    }
    uVar6 = strcpy_s(auStack_160,0x80,puVar5);
    puVar4 = (uint64_t *)FUN_1800b1d80(uVar6,&plStack_190,&puStack_178,&iStack_1b8);
    uVar6 = *puVar4;
    *puVar4 = 0;
    plStack_198 = *(longlong **)(param_1 + 0x10);
    *(uint64_t *)(param_1 + 0x10) = uVar6;
    if (plStack_198 != (longlong *)0x0) {
      (**(code **)(*plStack_198 + 0x38))();
    }
    if (plStack_190 != (longlong *)0x0) {
      (**(code **)(*plStack_190 + 0x38))();
    }
    puStack_178 = &UNK_18098bcb0;
    FUN_18005e630(_DAT_180c82868);
    puVar4 = puStack_1d0;
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x380) == 2) {
      puStack_1d8 = &UNK_180a3c3e0;
      if (puStack_1d0 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_1d0 = (uint64_t *)0x0;
      uStack_1c0 = (ulonglong)uStack_1c0._4_4_ << 0x20;
      puStack_1d8 = &UNK_18098bcb0;
    }
    else {
      if (0 < *(int *)(param_1 + 4)) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        func_0x0001802e4430(param_1);
        FUN_18004b1f0(0);
        iStack_1b8 = *(int *)(param_1 + 0x20) * 2;
        puStack_d8 = &UNK_1809fcc28;
        puStack_d0 = auStack_c0;
        auStack_c0[0] = 0;
        uStack_c8 = uStack_1c8;
        puVar5 = (uint64_t *)&DAT_18098bc73;
        if (puVar4 != (uint64_t *)0x0) {
          puVar5 = puVar4;
        }
        iStack_1b4 = iStack_1b8;
        uVar6 = strcpy_s(auStack_c0,0x80,puVar5);
        uVar6 = FUN_1800b1d80(uVar6,&plStack_188,&puStack_d8,&iStack_1b8);
        FUN_180060b80(param_1 + 0x10,uVar6);
        if (plStack_188 != (longlong *)0x0) {
          (**(code **)(*plStack_188 + 0x38))();
        }
        puStack_d8 = &UNK_18098bcb0;
        FUN_18005e630(_DAT_180c82868);
      }
      puStack_1d8 = &UNK_180a3c3e0;
      if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar4);
      }
      puStack_1d0 = (uint64_t *)0x0;
      uStack_1c0 = (ulonglong)uStack_1c0._4_4_ << 0x20;
      puStack_1d8 = &UNK_18098bcb0;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_208);
}







// 函数: void FUN_1802e4c00(longlong param_1,int param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802e4c00(longlong param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar1 = lVar2 + 0x58;
  iVar4 = _Mtx_lock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  if (param_2 < 0) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))();
    param_2 = param_2 + iVar4;
  }
  plVar3 = *(longlong **)(lVar2 + 0x148);
  (**(code **)(*plVar3 + 0x118))(plVar3,*(uint64_t *)(param_1 + 0x20),param_2,param_4,uVar5);
  iVar4 = _Mtx_unlock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return;
}







