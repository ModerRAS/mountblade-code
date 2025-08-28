#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part015.c - 6 个函数

// 函数: void FUN_1802dddb4(void)
void FUN_1802dddb4(void)

{
  int32_t uVar1;
  uint64_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint uVar9;
  longlong lVar10;
  int32_t *puVar11;
  byte bVar12;
  uint uVar13;
  uint64_t unaff_RBX;
  ulonglong uVar14;
  longlong unaff_RBP;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  longlong in_R11;
  longlong *unaff_R12;
  uint64_t unaff_R13;
  longlong unaff_R14;
  uint64_t unaff_R15;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  lVar10 = FUN_1800bd5c0();
  uVar2 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
  if ((longlong *)*unaff_R12 == (longlong *)0x0) {
    *(int32_t *)(unaff_RBP + -0x69) = 0x7f0000;
    puVar11 = (int32_t *)(unaff_RBP + -0x79);
    *(uint64_t *)(unaff_RBP + -0x79) = 0xffffffffffffffff;
    *(uint64_t *)(unaff_RBP + -0x71) = 0xffffffffffffffff;
  }
  else {
    lVar17 = *(longlong *)*unaff_R12;
    puVar11 = (int32_t *)(unaff_RBP + -0x19);
    uVar7 = *(uint64_t *)(lVar17 + 0x30);
    uVar8 = *(uint64_t *)(lVar17 + 0x38);
    *(int32_t *)(unaff_RBP + -9) = *(int32_t *)(lVar17 + 0x40);
    *(uint64_t *)(unaff_RBP + -0x19) = uVar7;
    *(uint64_t *)(unaff_RBP + -0x11) = uVar8;
  }
  uVar3 = *puVar11;
  uVar4 = puVar11[1];
  uVar5 = puVar11[2];
  uVar6 = puVar11[3];
  uVar1 = puVar11[4];
  uVar14 = (ulonglong)(short)uVar1;
  *(int32_t *)(unaff_RBP + -0x51) = uVar1;
  *(int32_t *)(unaff_RBP + -0x61) = uVar3;
  *(int32_t *)(unaff_RBP + -0x5d) = uVar4;
  *(int32_t *)(unaff_RBP + -0x59) = uVar5;
  *(int32_t *)(unaff_RBP + -0x55) = uVar6;
  if ((short)uVar1 <= (short)((uint)uVar1 >> 0x10)) {
    plVar15 = (longlong *)(unaff_R14 + uVar14 * 8);
    bVar12 = (byte)uVar1 & 0x1f;
    uVar16 = 1 << bVar12 | 1U >> 0x20 - bVar12;
    do {
      uVar13 = (uint)uVar14;
      if (0xf < (int)uVar13) break;
      bVar12 = (byte)uVar14 & 7;
      uVar9 = uVar13;
      if ((int)uVar13 < 0) {
        uVar9 = uVar13 + 7;
        bVar12 = bVar12 - 8;
      }
      if (((byte)(1 << (bVar12 & 0x1f)) & *(byte *)(unaff_RBP + -0x61 + (longlong)((int)uVar9 >> 3))
          ) != 0) {
        if (uVar13 < 0x10) {
          if ((*(uint *)(unaff_R14 + 0x80) & uVar16) == 0) goto LAB_1802dde9e;
          lVar17 = *plVar15;
          if (*plVar15 == 0) goto LAB_1802dde95;
        }
        else {
LAB_1802dde95:
          if ((*(uint *)(unaff_R14 + 0x80) & uVar16) == 0) {
LAB_1802dde9e:
            lVar17 = *plVar15;
            if ((lVar17 != 0) && (*(int *)(lVar17 + 0x380) != 1)) goto LAB_1802ddeb5;
          }
          lVar17 = lVar10;
        }
LAB_1802ddeb5:
        FUN_18029d150(uVar2,uVar14 & 0xffffffff,lVar17,1,0xffffffff);
      }
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
      plVar15 = plVar15 + 1;
    } while ((int)(uVar13 + 1) <= (int)*(short *)(unaff_RBP + -0x4f));
  }
  if (*unaff_R12 == 0) {
    *(int32_t *)(unaff_RBP + -0x39) = 0x7f0000;
    puVar11 = (int32_t *)(unaff_RBP + -0x49);
    *(uint64_t *)(unaff_RBP + -0x49) = 0xffffffffffffffff;
    *(uint64_t *)(unaff_RBP + -0x41) = 0xffffffffffffffff;
  }
  else {
    lVar17 = *(longlong *)(*unaff_R12 + 8);
    uVar7 = *(uint64_t *)(lVar17 + 0x30);
    uVar8 = *(uint64_t *)(lVar17 + 0x38);
    *(int32_t *)(unaff_RBP + 0xf) = *(int32_t *)(lVar17 + 0x40);
    puVar11 = (int32_t *)(unaff_RBP + -1);
    *(uint64_t *)(unaff_RBP + -1) = uVar7;
    *(uint64_t *)(unaff_RBP + 7) = uVar8;
  }
  uVar3 = *puVar11;
  uVar4 = puVar11[1];
  uVar5 = puVar11[2];
  uVar6 = puVar11[3];
  uVar1 = puVar11[4];
  uVar14 = (ulonglong)(short)uVar1;
  *(int32_t *)(unaff_RBP + -0x21) = uVar1;
  *(int32_t *)(unaff_RBP + -0x31) = uVar3;
  *(int32_t *)(unaff_RBP + -0x2d) = uVar4;
  *(int32_t *)(unaff_RBP + -0x29) = uVar5;
  *(int32_t *)(unaff_RBP + -0x25) = uVar6;
  if ((short)uVar1 <= (short)((uint)uVar1 >> 0x10)) {
    plVar15 = (longlong *)(unaff_R14 + uVar14 * 8);
    bVar12 = (byte)uVar1 & 0x1f;
    uVar16 = 1 << bVar12 | 1U >> 0x20 - bVar12;
    do {
      uVar13 = (uint)uVar14;
      if (0xf < (int)uVar13) break;
      bVar12 = (byte)uVar14 & 7;
      uVar9 = uVar13;
      if ((int)uVar13 < 0) {
        uVar9 = uVar13 + 7;
        bVar12 = bVar12 - 8;
      }
      if (((byte)(1 << (bVar12 & 0x1f)) & *(byte *)(unaff_RBP + -0x31 + (longlong)((int)uVar9 >> 3))
          ) != 0) {
        if (uVar13 < 0x10) {
          if ((*(uint *)(unaff_R14 + 0x80) & uVar16) == 0) goto LAB_1802ddf95;
          lVar17 = *plVar15;
          if (*plVar15 == 0) goto LAB_1802ddf8c;
        }
        else {
LAB_1802ddf8c:
          if ((*(uint *)(unaff_R14 + 0x80) & uVar16) == 0) {
LAB_1802ddf95:
            lVar17 = *plVar15;
            if ((lVar17 != 0) && (*(int *)(lVar17 + 0x380) != 1)) goto LAB_1802ddfac;
          }
          lVar17 = lVar10;
        }
LAB_1802ddfac:
        FUN_18029d150(uVar2,uVar14 & 0xffffffff,lVar17,0x10,0xffffffff);
      }
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
      plVar15 = plVar15 + 1;
    } while ((int)(uVar13 + 1) <= (int)*(short *)(unaff_RBP + -0x1f));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x17) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1802de000(void)
void FUN_1802de000(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x17) ^ (ulonglong)&stack0x00000000);
}



longlong FUN_1802de020(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint64_t *puVar3;
  uint uVar4;
  uint64_t *puVar5;
  bool bVar6;
  longlong lVar7;
  uint64_t uVar8;
  int iVar9;
  int iVar10;
  int32_t uVar11;
  void *puVar12;
  int iVar13;
  int iVar14;
  void *puVar15;
  int32_t uStackX_18;
  void *puStack_88;
  void *puStack_80;
  int iStack_78;
  uint64_t uStack_70;
  void *puStack_68;
  longlong lStack_60;
  int32_t uStack_50;
  
  iVar10 = 0;
  *(uint64_t *)(param_2 + 8) = &unknown_var_720_ptr;
  *(uint64_t *)(param_2 + 0x10) = 0;
  *(int32_t *)(param_2 + 0x18) = 0;
  *(uint64_t *)(param_2 + 8) = &unknown_var_3456_ptr;
  *(uint64_t *)(param_2 + 0x20) = 0;
  *(uint64_t *)(param_2 + 0x10) = 0;
  *(int32_t *)(param_2 + 0x18) = 0;
  plVar1 = (longlong *)(param_2 + 0x28);
  *plVar1 = (longlong)&unknown_var_720_ptr;
  *(uint64_t *)(param_2 + 0x30) = 0;
  *(int32_t *)(param_2 + 0x38) = 0;
  *plVar1 = (longlong)&unknown_var_3456_ptr;
  *(uint64_t *)(param_2 + 0x40) = 0;
  *(uint64_t *)(param_2 + 0x30) = 0;
  *(int32_t *)(param_2 + 0x38) = 0;
  plVar2 = (longlong *)(param_2 + 0x48);
  *plVar2 = (longlong)&unknown_var_720_ptr;
  *(uint64_t *)(param_2 + 0x50) = 0;
  *(int32_t *)(param_2 + 0x58) = 0;
  *plVar2 = (longlong)&unknown_var_3456_ptr;
  *(uint64_t *)(param_2 + 0x60) = 0;
  *(uint64_t *)(param_2 + 0x50) = 0;
  *(int32_t *)(param_2 + 0x58) = 0;
  puVar3 = (uint64_t *)(param_2 + 0x68);
  *puVar3 = &unknown_var_720_ptr;
  *(uint64_t *)(param_2 + 0x70) = 0;
  *(int32_t *)(param_2 + 0x78) = 0;
  *puVar3 = &unknown_var_3456_ptr;
  *(uint64_t *)(param_2 + 0x80) = 0;
  *(uint64_t *)(param_2 + 0x70) = 0;
  *(int32_t *)(param_2 + 0x78) = 0;
  iVar9 = 1;
  if ((*(longlong *)(param_1 + 0x2b0) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x18) != 0)) {
    iVar10 = *(int *)(param_1 + 0x2e4);
  }
  iVar13 = 1;
  iVar14 = 1;
  uVar4 = *(uint *)(param_1 + 0x2e0);
  if ((char)uVar4 < '\0') {
    iVar14 = *(int *)(param_1 + 0x2d0);
  }
  else if ((uVar4 & 0x20440) != 0) {
    if ((uVar4 & 0x40) != 0) {
      iVar13 = (int)(*(longlong *)(param_1 + 0x1e0) - *(longlong *)(param_1 + 0x1d8) >> 2);
    }
    if ((uVar4 >> 10 & 1) == 0) {
      iVar14 = 1;
    }
    else {
      iVar14 = *(int *)(param_1 + 0x2d0);
    }
    if ((uVar4 >> 0x11 & 1) != 0) {
      iVar9 = *(int *)(param_1 + 0x2d0);
    }
    iVar14 = iVar13 * iVar14 * iVar9;
  }
  uVar11 = 0xffffffff;
  uStackX_18 = 0xffffffff;
  puVar5 = *(uint64_t **)(param_1 + 0x88);
  if (puVar5 != (uint64_t *)0x0) {
    uStackX_18 = *(int32_t *)*puVar5;
    uVar11 = *(int32_t *)puVar5[1];
  }
  if (*(char *)(param_1 + 0xc2) != '\0') {
    uVar11 = 0xffffffff;
  }
  puVar15 = *(void **)(*(longlong *)(param_1 + 0x280) + 0x18);
  puVar12 = &system_buffer_ptr;
  if (puVar15 != (void *)0x0) {
    puVar12 = puVar15;
  }
  (**(code **)(*plVar1 + 0x10))
            (plVar1,puVar12,puVar15,*(code **)(*plVar1 + 0x10),1,0xfffffffffffffffe);
  puVar15 = *(void **)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x1e0) + 0x18);
  puVar12 = &system_buffer_ptr;
  if (puVar15 != (void *)0x0) {
    puVar12 = puVar15;
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,puVar12);
  puStack_88 = &unknown_var_3456_ptr;
  uStack_70 = 0;
  puStack_80 = (void *)0x0;
  iStack_78 = 0;
  lVar7 = *(longlong *)(param_1 + 0x280);
  if ((*(uint *)(lVar7 + 0x388) >> 0x19 & 1) != 0) {
    FUN_180628040(&puStack_88,&unknown_var_9892_ptr);
    lVar7 = *(longlong *)(param_1 + 0x280);
  }
  bVar6 = false;
  if ((*(ulonglong *)(lVar7 + 0x140) & *(ulonglong *)(*(longlong *)(lVar7 + 0x1e0) + 0x1580)) != 0)
  {
    bVar6 = 0.0 < *(float *)(lVar7 + 600);
  }
  if (bVar6) {
    FUN_180628040(&puStack_88,&unknown_var_9932_ptr);
    lVar7 = *(longlong *)(param_1 + 0x280);
  }
  if ((*(char *)(lVar7 + 0x13c) != '\x06') && (*(char *)(lVar7 + 0x13c) != '\0')) {
    FUN_180628040(&puStack_88,&unknown_var_9928_ptr);
  }
  if (1 < iStack_78) {
    lVar7 = FUN_180629a40(&puStack_88,&puStack_68,0,iStack_78 + -1);
    if (puStack_80 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    iStack_78 = *(int *)(lVar7 + 0x10);
    puStack_80 = *(void **)(lVar7 + 8);
    uStack_70 = *(uint64_t *)(lVar7 + 0x18);
    *(int32_t *)(lVar7 + 0x10) = 0;
    *(uint64_t *)(lVar7 + 8) = 0;
    *(uint64_t *)(lVar7 + 0x18) = 0;
    puStack_68 = &unknown_var_3456_ptr;
    if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_60 = 0;
    uStack_50 = 0;
    puStack_68 = &unknown_var_720_ptr;
    puVar15 = &system_buffer_ptr;
    if (puStack_80 != (void *)0x0) {
      puVar15 = puStack_80;
    }
    FUN_180628040(plVar2,&unknown_var_9920_ptr,puVar15);
  }
  uVar8 = FUN_180628ca0();
  FUN_180627be0(puVar3,uVar8);
  FUN_180628040(puVar3,&unknown_var_9904_ptr,uStackX_18,uVar11);
  *(int *)(param_2 + 0x88) = iVar10;
  *(int *)(param_2 + 0x8c) = iVar14;
  *(int *)(param_2 + 0x90) = iVar14 * iVar10;
  puStack_88 = &unknown_var_3456_ptr;
  if (puStack_80 == (void *)0x0) {
    return param_2;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1802de3f0(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802de3f0(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  *(int8_t *)(param_1 + 0x322) = 0;
  *(uint *)(param_1 + 0x2e0) = *(uint *)(param_2 + 0x100) & 0x404;
  *(uint64_t *)(param_1 + 0x280) = *(uint64_t *)(param_2 + 0x1b8);
                    // WARNING: Subroutine does not return
  memset(param_1,0,0x80,param_4,0,0xfffffffffffffffe);
}






// 函数: void FUN_1802decc0(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_1802decc0(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  longlong param_5)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_3 + 0x100) & 0x404;
  *(uint *)(param_1 + 0x2e0) = uVar2;
  if (*(longlong *)(param_3 + 0x2c8) != 0) {
    *(uint *)(param_1 + 0x2e0) = uVar2 | 0x10000;
  }
  if ((*(longlong *)(param_5 + 0x48) == 0) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_5 + 0x48) + 0x18), lVar1 == 0)) {
    *(uint64_t *)(param_1 + 0x280) = *(uint64_t *)(param_3 + 0x1b8);
  }
  else {
    *(longlong *)(param_1 + 0x280) = lVar1;
  }
  *(byte *)(param_1 + 0x322) = *(byte *)(param_3 + 0xfd) & 1;
                    // WARNING: Subroutine does not return
  memset(param_1,0,0x80,param_4,0);
}






// 函数: void FUN_1802dfe00(longlong param_1,longlong param_2)
void FUN_1802dfe00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plStackX_8;
  
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(uint64_t *)(param_1 + 0x90) = 0xff00000001060101;
  *(uint64_t *)(param_1 + 0x98) = 0x30503040300ff;
  *(uint64_t *)(param_1 + 0xa0) = 0;
  *(int32_t *)(param_1 + 0xa8) = 0;
  *(int32_t *)(param_1 + 0xac) = 0;
  *(int32_t *)(param_1 + 0xb0) = 0;
  *(int32_t *)(param_1 + 0xb4) = 0;
  *(int32_t *)(param_1 + 0xb8) = 0;
  *(int32_t *)(param_1 + 0xbc) = 0;
  *(int32_t *)(param_1 + 0xc0) = 0x900;
  *(int32_t *)(param_1 + 0xc4) = 0;
  lVar2 = *(longlong *)(param_2 + 0x48);
  *(int8_t *)(param_1 + 0x322) = 0;
  *(int32_t *)(param_1 + 0x2e0) = 0x2000;
  lVar2 = *(longlong *)(lVar2 + 0x10);
  if (lVar2 == 0) {
    plVar1 = (longlong *)FUN_1800bdaf0(0,&plStackX_8);
    lVar2 = *plVar1;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  *(longlong *)(param_1 + 0x280) = lVar2;
                    // WARNING: Subroutine does not return
  memset(param_1,0,0x80);
}






// 函数: void FUN_1802e0390(longlong param_1)
void FUN_1802e0390(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  *(int32_t *)(param_1 + 0x224) = 0;
  lVar4 = *(longlong *)(param_1 + 0x280);
  lVar1 = *(longlong *)(lVar4 + 0x1e0);
  uVar2 = *(ulonglong *)(lVar4 + 0x140);
  uVar3 = *(ulonglong *)(lVar1 + 0x15d0);
  if (uVar3 == 0xffffffffffffffff) {
    FUN_180240b30(lVar1);
    lVar4 = *(longlong *)(param_1 + 0x280);
    uVar3 = *(ulonglong *)(lVar1 + 0x15d0);
  }
  if (((uVar2 & uVar3) != 0) ||
     ((*(longlong *)(lVar4 + 0xb8) != 0 &&
      ((*(uint *)(*(longlong *)(lVar4 + 0xb8) + 0x328) >> 0xf & 1) == 0)))) {
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 1;
  }
  lVar1 = *(longlong *)(lVar4 + 0x1e0);
  uVar3 = *(ulonglong *)(lVar1 + 0x15c8);
  if (uVar3 == 0xffffffffffffffff) {
    FUN_180240b30(lVar1);
    uVar3 = *(ulonglong *)(lVar1 + 0x15c8);
    lVar4 = *(longlong *)(param_1 + 0x280);
  }
  if ((uVar2 & uVar3) != 0) {
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 2;
  }
  lVar1 = *(longlong *)(lVar4 + 0x1e0);
  uVar3 = *(ulonglong *)(lVar1 + 0x15d8);
  if (uVar3 == 0xffffffffffffffff) {
    FUN_180240b30(lVar1);
    uVar3 = *(ulonglong *)(lVar1 + 0x15d8);
    lVar4 = *(longlong *)(param_1 + 0x280);
  }
  if ((uVar2 & uVar3) != 0) {
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 4;
  }
  lVar1 = *(longlong *)(lVar4 + 0x1e0);
  uVar3 = *(ulonglong *)(lVar1 + 0x15e0);
  if (uVar3 == 0xffffffffffffffff) {
    FUN_180240b30(lVar1);
    uVar3 = *(ulonglong *)(lVar1 + 0x15e0);
    lVar4 = *(longlong *)(param_1 + 0x280);
  }
  if ((uVar2 & uVar3) != 0) {
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 8;
  }
  lVar1 = *(longlong *)(lVar4 + 0x1e0);
  uVar3 = *(ulonglong *)(lVar1 + 0x15e8);
  if (uVar3 == 0xffffffffffffffff) {
    FUN_180240b30(lVar1);
    uVar3 = *(ulonglong *)(lVar1 + 0x15e8);
    lVar4 = *(longlong *)(param_1 + 0x280);
  }
  if ((uVar2 & uVar3) != 0) {
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 0x10;
  }
  lVar1 = *(longlong *)(lVar4 + 0x1e0);
  uVar3 = *(ulonglong *)(lVar1 + 0x15f0);
  if (uVar3 == 0xffffffffffffffff) {
    FUN_180240b30(lVar1);
    uVar3 = *(ulonglong *)(lVar1 + 0x15f0);
    lVar4 = *(longlong *)(param_1 + 0x280);
  }
  if ((uVar2 & uVar3) != 0) {
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 0x20;
  }
  lVar1 = *(longlong *)(lVar4 + 0x1e0);
  uVar3 = *(ulonglong *)(lVar1 + 0x15f8);
  if (uVar3 == 0xffffffffffffffff) {
    FUN_180240b30(lVar1);
    uVar3 = *(ulonglong *)(lVar1 + 0x15f8);
    lVar4 = *(longlong *)(param_1 + 0x280);
  }
  if ((uVar2 & uVar3) != 0) {
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 0x40;
  }
  lVar1 = *(longlong *)(lVar4 + 0x1e0);
  uVar3 = *(ulonglong *)(lVar1 + 0x1600);
  if (uVar3 == 0xffffffffffffffff) {
    FUN_180240b30(lVar1);
    uVar3 = *(ulonglong *)(lVar1 + 0x1600);
  }
  if ((uVar2 & uVar3) != 0) {
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 0x80;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




