#include "TaleWorlds.Native.Split.h"

// 03_rendering_part451.c - 2 个函数

// 函数: void FUN_180511e70(longlong param_1,int param_2)
void FUN_180511e70(longlong param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int aiStackX_10 [2];
  undefined *puStack_d8;
  undefined4 *puStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [80];
  
  uStack_80 = 0xfffffffffffffffe;
  uVar14 = 0;
  uStack_88 = 0;
  plVar21 = *(longlong **)(param_1 + 0x6e0);
  aiStackX_10[0] = param_2;
  if (*(char *)((longlong)plVar21 + 0x21b4) != '\0') {
    FUN_180528c80();
    *(undefined1 *)(*(longlong *)(param_1 + 0x6e0) + 0x21b4) = 0;
    plVar21 = *(longlong **)(param_1 + 0x6e0);
  }
  bVar4 = false;
  if ((*(uint *)(*plVar21 + 0x56c) & 0x4000) == 0) {
LAB_180511f54:
    uVar24 = *(undefined1 *)((longlong)plVar21 + 0x2024);
  }
  else {
    cVar2 = *(char *)((longlong)plVar21 + 0x2024);
    lVar19 = *(longlong *)(*(longlong *)(*plVar21 + 0x8f8) + 0x9e8);
    if ((lVar19 == 0) ||
       ((*(byte *)((longlong)*(int *)(lVar19 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar19 + 0xd0))
         >> 1 & 1) == 0)) {
      cVar13 = '\0';
    }
    else {
      cVar13 = '\x01';
    }
    *(char *)((longlong)plVar21 + 0x2024) = cVar13;
    bVar23 = cVar2 == cVar13;
    bVar4 = !bVar23;
    plVar21 = *(longlong **)(param_1 + 0x6e0);
    if (bVar23) goto LAB_180511f54;
    uVar24 = *(char *)((longlong)plVar21 + 0x2024) == '\0';
  }
  if ((char)plVar21[0x43d] == '\0') {
    if ((bVar4) || ((char)plVar21[0x438] != '\0')) {
      FUN_18050c030(param_1,(int)plVar21[0x295],uVar24);
    }
  }
  else {
    FUN_18050c030(param_1,*(undefined4 *)((longlong)plVar21 + 0x21ec),uVar24);
    *(undefined1 *)(*(longlong *)(param_1 + 0x6e0) + 0x21e8) = 0;
  }
  lVar19 = *(longlong *)(param_1 + 0x6e0);
  if (*(char *)(lVar19 + 0x21c0) != '\0') {
    *(undefined8 *)(lVar19 + 0x14b4) = *(undefined8 *)(lVar19 + 0x21c4);
    *(undefined4 *)(lVar19 + 0x1728) = 0xffffffff;
    *(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x21d0) =
         *(undefined8 *)
          (&DAT_180c8ed30 + (longlong)*(int *)(*(longlong *)(param_1 + 0x6e0) + 0x21d8) * 8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x6e0) + 0x21c0) = 0;
    lVar19 = *(longlong *)(param_1 + 0x6e0);
  }
  if (*(char *)(lVar19 + 0x21f0) != '\0') {
    *(undefined8 *)(lVar19 + 0x12e8) = *(undefined8 *)(lVar19 + 0x21f4);
    if (-1 < *(int *)(param_1 + 0x564)) {
      *(undefined8 *)
       (*(longlong *)
         ((longlong)*(int *)(param_1 + 0x564) * 0xa60 + 0x3780 + *(longlong *)(param_1 + 0x8d8)) +
       0x12e8) = *(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x21f4);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x6e0) + 0x21f0) = 0;
    lVar19 = *(longlong *)(param_1 + 0x6e0);
  }
  if (*(char *)(lVar19 + 0x21fc) != '\0') {
    if (*(char *)(lVar19 + 0x21c0) == '\0') {
      iVar17 = *(int *)(lVar19 + 0x14b4);
    }
    else {
      iVar17 = *(int *)(lVar19 + 0x21c4);
    }
    if (iVar17 < 0) {
LAB_18051210c:
      *(undefined4 *)(lVar19 + 0x1728) = 0xffffffff;
    }
    else {
      lVar22 = *(longlong *)(lVar19 + 0x1488);
      lVar20 = *(longlong *)((longlong)iVar17 * 0xa60 + 0x3778 + lVar22);
      if ((lVar20 == 0) || (*(char *)(lVar20 + 0x8be) == '\0')) goto LAB_18051210c;
      if (*(char *)(lVar19 + 0x21c0) == '\0') {
        iVar17 = *(int *)(lVar19 + 0x14b4);
      }
      else {
        iVar17 = *(int *)(lVar19 + 0x21c4);
      }
      FUN_1805d1e30(lVar19,*(longlong *)((longlong)iVar17 * 0xa60 + 0x30c0 + lVar22) + 0xc,
                    lVar22 + 0x3720 + (longlong)iVar17 * 0xa60,lVar19 + 0x1728);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x6e0) + 0x21fc) = 0;
    lVar19 = *(longlong *)(param_1 + 0x6e0);
  }
  if (*(char *)(lVar19 + 0x21fd) != '\0') {
    lVar20 = (longlong)*(int *)(lVar19 + 0x2130) * 0xa60;
    lVar22 = *(longlong *)(param_1 + 0x8d8);
    if (*(int *)(lVar20 + 0x3608 + lVar22) == 1) {
      FUN_1805d1e30(lVar19,*(longlong *)(lVar20 + 0x30c0 + lVar22) + 0xc,lVar22 + 0x3724 + lVar20,
                    lVar19 + 0x2134);
    }
    else {
      *(uint *)(lVar19 + 0x1484) = *(uint *)(lVar19 + 0x1484) & 0xffffffbf;
      *(undefined8 *)(lVar19 + 0x2130) = 0xffffffffffffffff;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x6e0) + 0x21fd) = 0;
    lVar19 = *(longlong *)(param_1 + 0x6e0);
  }
  lVar22 = _DAT_180c8ece0;
  if (*(char *)(lVar19 + 0x21fe) != '\0') {
    iVar17 = *(int *)(param_1 + 0x18);
    aiStackX_10[0] = iVar17;
    if ((iVar17 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x30))(iVar17);
    }
    uStack_88 = 1;
    puVar15 = (undefined8 *)
              (**(code **)(lVar22 + 0x1f0))
                        (auStack_78,*(undefined4 *)(*(longlong *)(param_1 + 0x8d8) + 0x98d928),
                         iVar17);
    uVar1 = puVar15[1];
    uVar5 = puVar15[2];
    uStack_c8 = (undefined4)uVar5;
    uStack_c4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_c0 = (undefined4)puVar15[3];
    uStack_bc = (undefined4)((ulonglong)puVar15[3] >> 0x20);
    uVar10 = puVar15[5];
    uStack_b8 = (undefined4)puVar15[4];
    uStack_b4 = (undefined4)((ulonglong)puVar15[4] >> 0x20);
    uVar6 = puVar15[6];
    uStack_a0 = puVar15[7];
    uStack_98 = puVar15[8];
    *(undefined8 *)(param_1 + 0x928) = *puVar15;
    *(undefined4 *)(param_1 + 0x940) = uStack_c0;
    *(undefined4 *)(param_1 + 0x944) = uStack_bc;
    *(undefined4 *)(param_1 + 0x948) = uStack_b8;
    *(undefined4 *)(param_1 + 0x94c) = uStack_b4;
    uStack_b0._0_4_ = (undefined4)uVar10;
    uStack_b0._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
    uStack_a8._0_4_ = (undefined4)uVar6;
    uStack_a8._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
    *(undefined4 *)(param_1 + 0x950) = (undefined4)uStack_b0;
    *(undefined4 *)(param_1 + 0x954) = uStack_b0._4_4_;
    *(undefined4 *)(param_1 + 0x958) = (undefined4)uStack_a8;
    *(undefined4 *)(param_1 + 0x95c) = uStack_a8._4_4_;
    *(undefined8 *)(param_1 + 0x930) = uVar1;
    *(undefined8 *)(param_1 + 0x938) = uVar5;
    *(undefined8 *)(param_1 + 0x960) = uStack_a0;
    *(undefined4 *)(param_1 + 0x968) = (undefined4)uStack_98;
    uStack_88 = 0;
    uStack_b0 = uVar10;
    uStack_a8 = uVar6;
    if ((iVar17 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x18))(iVar17);
    }
    *(undefined8 *)(param_1 + 0x970) =
         *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x978) * 8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x6e0) + 0x21fe) = 0;
    lVar19 = *(longlong *)(param_1 + 0x6e0);
  }
  if (*(char *)(lVar19 + 0x2200) != '\0') {
    *(undefined4 *)(*(longlong *)(param_1 + 0x738) + 0xa4) = *(undefined4 *)(lVar19 + 0x14a8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x6e0) + 0x2200) = 0;
    lVar19 = *(longlong *)(param_1 + 0x6e0);
  }
  if (*(char *)(lVar19 + 0x2201) != '\0') {
    *(byte *)(*(longlong *)(param_1 + 0x738) + 0x180) = (byte)(*(uint *)(lVar19 + 0x1484) >> 1) & 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x6e0) + 0x2201) = 0;
    lVar19 = *(longlong *)(param_1 + 0x6e0);
  }
  if (*(char *)(lVar19 + 0x21ff) != '\0') {
    lVar22 = *(longlong *)(param_1 + 0x738);
    uVar24 = *(undefined1 *)(param_1 + 0x5fd);
    if (((*(char *)(lVar19 + 0x14d8) == '\0') && ((*(uint *)(lVar19 + 0x1484) >> 7 & 1) == 0)) ||
       (*(int *)(lVar19 + 0x14a8) == 0)) {
      uVar25 = *(undefined4 *)(param_1 + 0x600);
    }
    else {
      uVar25 = 0xbf800000;
    }
    *(undefined4 *)(lVar22 + 0xe8) = uVar25;
    *(undefined1 *)(lVar22 + 0xec) = uVar24;
    *(undefined1 *)(*(longlong *)(param_1 + 0x6e0) + 0x21ff) = 0;
  }
  if (((*(int *)(param_1 + 0x560) == -1) && (*(int *)(param_1 + 0x570) == 1)) &&
     (*(char *)(*(longlong *)(param_1 + 0x8d8) + 0x98d9d0) == '\0')) {
    lVar19 = *(longlong *)(param_1 + 0x6e0);
    uVar7 = *(undefined4 *)(lVar19 + 0x1564);
    uVar8 = *(undefined4 *)(lVar19 + 0x1568);
    uVar9 = *(undefined4 *)(lVar19 + 0x156c);
    uVar5 = *(undefined8 *)(lVar19 + 0x1570);
    uVar6 = *(undefined8 *)(lVar19 + 0x1578);
    uVar10 = *(undefined8 *)(lVar19 + 0x1580);
    uVar11 = *(undefined8 *)(lVar19 + 0x1588);
    uVar1 = *(undefined8 *)(lVar19 + 0x1590);
    uVar25 = *(undefined4 *)(lVar19 + 0x1598);
    *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(lVar19 + 0x1560);
    *(undefined4 *)(param_1 + 0x4a0) = uVar7;
    *(undefined4 *)(param_1 + 0x4a4) = uVar8;
    *(undefined4 *)(param_1 + 0x4a8) = uVar9;
    *(undefined8 *)(param_1 + 0x4ac) = uVar5;
    *(undefined8 *)(param_1 + 0x4b4) = uVar6;
    *(undefined8 *)(param_1 + 0x4bc) = uVar10;
    *(undefined8 *)(param_1 + 0x4c4) = uVar11;
    *(undefined8 *)(param_1 + 0x4cc) = uVar1;
    *(undefined4 *)(param_1 + 0x4d4) = uVar25;
    iVar17 = *(int *)(lVar19 + 0x21ac);
    if ((iVar17 != -2) && (iVar17 != *(int *)(*(longlong *)(param_1 + 0x8f8) + 0x9e4))) {
      if (iVar17 == -1) {
        uVar18 = 0x200;
      }
      else if (iVar17 == 0) {
        uVar18 = 0x10;
      }
      else if (iVar17 == 1) {
        uVar18 = 0x20;
      }
      else if (iVar17 == 2) {
        uVar18 = 0x40;
      }
      else {
        uVar18 = 0x80;
        if (iVar17 != 3) {
          uVar18 = uVar14;
        }
      }
      *(uint *)(param_1 + 0x4c4) = *(uint *)(param_1 + 0x4c4) | uVar18;
      lVar19 = *(longlong *)(param_1 + 0x6e0);
    }
    iVar17 = *(int *)(lVar19 + 0x21b0);
    if (-1 < iVar17) {
      iVar3 = *(int *)(lVar19 + 0x21a8);
      if ((iVar3 < 0) ||
         (lVar19 = *(longlong *)(param_1 + 0x8f8), iVar3 == *(int *)(lVar19 + 0x9e0))) {
        lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9e8);
        if (((lVar19 == 0) || (*(int *)(lVar19 + 0xf0) != iVar17)) &&
           (*(int *)(*(longlong *)(param_1 + 0x8f8) + 0xa10) == -1)) {
          *(int *)(param_1 + 0x2c0) = iVar17;
        }
      }
      else {
        lVar22 = (longlong)iVar3 * 0x1f8;
        if ((0 < *(int *)(lVar22 + 0x38 + lVar19)) &&
           (((*(ulonglong *)
               ((longlong)*(int *)(lVar22 + 0xf8 + lVar19) * 0xa0 + 0x50 +
               *(longlong *)(lVar22 + 0xd8 + lVar19)) & 0x200) == 0 ||
            (0 < *(short *)(lVar22 + 0x10 + lVar19))))) {
          FUN_180537bd0(lVar19,(longlong)iVar3,iVar17,aiStackX_10);
        }
      }
    }
    if ((((*(uint *)(*(longlong *)(param_1 + 0x6e0) + 0x1484) >> 4 & 1) == 0) &&
        (iVar17 = *(int *)(*(longlong *)(param_1 + 0x6e0) + 0x21a8), iVar17 != -2)) &&
       (iVar17 != *(int *)(*(longlong *)(param_1 + 0x8f8) + 0x9e0))) {
      if (iVar17 == -1) {
        uVar18 = 0x100;
      }
      else if (iVar17 == 0) {
        uVar18 = 0x10;
      }
      else if (iVar17 == 1) {
        uVar18 = 0x20;
      }
      else if (iVar17 == 2) {
        uVar18 = 0x40;
      }
      else {
        uVar18 = 0x80;
        if (iVar17 != 3) {
          uVar18 = uVar14;
        }
      }
      *(uint *)(param_1 + 0x4c4) = *(uint *)(param_1 + 0x4c4) | uVar18;
    }
  }
  lVar19 = *(longlong *)(param_1 + 0x20);
  lVar22 = *(longlong *)(param_1 + 0x6e0);
  if ((((*(int *)(lVar22 + 0x14a8) - 1U & 0xfffffffd) != 0) || (*(int *)(param_1 + 0x1fc) - 1U < 2))
     || ((*(int *)(lVar22 + 0x14b4) < 0 ||
         ((*(float *)(lVar19 + 0x234) <= *(float *)(lVar19 + 0x50) * 0.7 ||
          ((*(uint *)(param_1 + 0x56c) & 0x800) == 0)))))) {
    if (*(longlong *)(param_1 + 0x728) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x728) + 0x600) = 0;
    }
  }
  else {
    lVar22 = *(longlong *)
              ((longlong)*(int *)(lVar22 + 0x14b4) * 0xa60 + 0x30c0 + *(longlong *)(lVar22 + 0x1488)
              );
    fVar27 = *(float *)(lVar22 + 0x10) - *(float *)(lVar19 + 0x10);
    fVar28 = *(float *)(lVar22 + 0xc) - *(float *)(lVar19 + 0xc);
    fVar26 = *(float *)(lVar22 + 0x14) - *(float *)(lVar19 + 0x14);
    fVar26 = SQRT(fVar28 * fVar28 + fVar27 * fVar27 + fVar26 * fVar26) / *(float *)(lVar19 + 0x234);
    if (fVar26 <= 6.0) {
      if ((fVar26 < 3.0) && (*(char *)(*(longlong *)(param_1 + 0x728) + 0x600) != '\0')) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x728) + 0x600) = 0;
        uVar18 = *(uint *)(param_1 + 0x748) << 0xd ^ *(uint *)(param_1 + 0x748);
        uVar18 = uVar18 ^ uVar18 >> 0x11;
        uVar18 = uVar18 ^ uVar18 << 5;
        *(uint *)(param_1 + 0x748) = uVar18;
        if ((float)(uVar18 - 1) * 2.3283064e-10 < 0.3) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0x48)
               < _DAT_180d49ec0) && (FUN_1808fcb90(&DAT_180d49ec0), _DAT_180d49ec0 == -1)) {
            puStack_d8 = &UNK_180a3c3e0;
            uStack_c0 = 0;
            uStack_bc = 0;
            puStack_d0 = (undefined4 *)0x0;
            uStack_c8 = 0;
            puVar16 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
            *(undefined1 *)puVar16 = 0;
            puStack_d0 = puVar16;
            uStack_c0 = FUN_18064e990(puVar16);
            *puVar16 = 0x6c6c6559;
            *(undefined1 *)(puVar16 + 1) = 0;
            uStack_c8 = 4;
            _DAT_180d49ec4 = FUN_180571e20(&DAT_180c960c0,&puStack_d8);
            puStack_d8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar16);
          }
          func_0x0001805084b0(param_1,_DAT_180d49ec4);
        }
      }
    }
    else {
      *(undefined1 *)(*(longlong *)(param_1 + 0x728) + 0x600) = 1;
    }
  }
  lVar22 = *(longlong *)(param_1 + 0x728);
  if ((lVar22 == 0) || (*(char *)(lVar22 + 0x601) != '\0')) goto LAB_1805129c0;
  if (((*(int *)(*(longlong *)(param_1 + 0x6e0) + 0x14e4) < 0) ||
      ((*(uint *)(param_1 + 0x1fc) & 0xfffffffb) != 0)) ||
     ((iVar17 = *(int *)(*(longlong *)(param_1 + 0x6e0) + 0x14a8), iVar17 != 0 && (iVar17 != 7)))) {
    *(undefined1 *)(lVar22 + 0x601) = 1;
    iVar17 = *(int *)(*(longlong *)(param_1 + 0x590) + 0x2450);
    if (iVar17 == -1) goto LAB_1805129c0;
    iVar17 = *(int *)((longlong)iVar17 * 0x68 + 0x58 + _DAT_180c96150);
joined_r0x000180512974:
    if (iVar17 != 0x22) goto LAB_1805129c0;
    puStack_d0 = (undefined4 *)0x1;
    uVar12 = 0xffffffff;
  }
  else {
    if (-1 < *(int *)(param_1 + 0x564)) goto LAB_1805129c0;
    lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9e8);
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9f0);
    if (lVar22 != 0) {
      uVar14 = *(uint *)((longlong)*(int *)(lVar22 + 0xf0) * 0xa0 + 100 +
                        *(longlong *)(lVar22 + 0xd0));
    }
    lVar22 = *(longlong *)(param_1 + 0x590);
    if (lVar20 == 0) {
      uVar25 = 0xffffffff;
    }
    else {
      uVar25 = *(undefined4 *)
                ((longlong)*(int *)(lVar20 + 0xf0) * 0xa0 + 100 + *(longlong *)(lVar20 + 0xd0));
    }
    uVar14 = FUN_18054f000((longlong)(int)uVar14 * 0x170 + _DAT_180c95ff0,uVar25,
                           *(undefined1 *)(lVar22 + 0x34bc));
    if ((((uVar14 == 0xffffffff) || (*(int *)(param_1 + 0x4c8) != 0)) ||
        (*(float *)(param_1 + 0x4d0) != 0.0)) || (*(float *)(param_1 + 0x4cc) != 0.0)) {
      _DAT_180bf65b8 = _DAT_180bf65b8 << 0xd ^ _DAT_180bf65b8;
      _DAT_180bf65b8 = _DAT_180bf65b8 >> 0x11 ^ _DAT_180bf65b8;
      _DAT_180bf65b8 = _DAT_180bf65b8 << 5 ^ _DAT_180bf65b8;
      *(longlong *)(param_1 + 0x5d8) =
           *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x5e0) * 8) -
           (longlong)(-200000.0 - (float)(_DAT_180bf65b8 - 1) * 6.984919e-05);
      iVar17 = *(int *)(*(longlong *)(param_1 + 0x590) + 0x2450);
      if (iVar17 == -1) goto LAB_1805129c0;
      iVar17 = *(int *)((longlong)iVar17 * 0x68 + 0x58 + _DAT_180c96150);
      goto joined_r0x000180512974;
    }
    if ((float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x5e0) * 8) -
               *(longlong *)(param_1 + 0x5d8)) * 1e-05 <= 0.0) goto LAB_1805129c0;
    uVar18 = *(uint *)(lVar22 + 0x2450);
    if ((uVar14 == uVar18) ||
       (((uVar18 != 0xffffffff &&
         (lVar22 = *(longlong *)((longlong)*(int *)(lVar22 + 0xac) * 0xe0 + 0x78 + _DAT_180c95fb0),
         iVar17 = *(int *)(lVar22 + 4 + (longlong)(int)uVar14 * 8),
         iVar17 == *(int *)(lVar22 + 4 + (longlong)(int)uVar18 * 8))) && (iVar17 != -1))))
    goto LAB_1805129c0;
    puStack_d0 = (undefined4 *)0x0;
    uVar12 = (ulonglong)uVar14;
  }
  uStack_b8 = 0xbe4ccccd;
  uStack_bc = 0xbe4ccccd;
  uStack_c0 = 0x3f800000;
  uStack_c4 = 0;
  uStack_c8 = 0;
  uStack_b4 = 0x3ecccccd;
  uStack_b0 = CONCAT35(uStack_b0._5_3_,0x1000000);
  puStack_d8 = (undefined *)(uVar12 << 0x20);
  FUN_18051ec50(param_1,&puStack_d8);
LAB_1805129c0:
  lVar22 = *(longlong *)(param_1 + 0x6e0);
  if (((((byte)*(undefined4 *)(lVar22 + 0x209c) & 3) == 3) && (*(int *)(param_1 + 0x568) != 4)) &&
     (*(int *)(param_1 + 0x568) != 3)) {
    uVar25 = FUN_1804f8880(*(undefined8 *)(param_1 + 0x8d8),*(undefined8 *)(lVar22 + 0x20f0),
                           (float *)(lVar19 + 0xc),*(undefined4 *)(lVar22 + 0x2108));
    *(undefined4 *)(*(longlong *)(param_1 + 0x6e0) + 0x2108) = uVar25;
    lVar22 = *(longlong *)(param_1 + 0x6e0);
  }
  if (-2.0 < *(float *)(lVar22 + 0x2204)) {
    func_0x00018051f9d0(param_1,*(float *)(lVar22 + 0x2204),0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x6e0) + 0x2204) = 0xc0000000;
    lVar22 = *(longlong *)(param_1 + 0x6e0);
  }
  if (*(char *)(lVar22 + 0x2208) != '\0') {
    *(undefined1 *)(lVar22 + 0x2188) = *(undefined1 *)(lVar22 + 0x2209);
    *(undefined1 *)(*(longlong *)(param_1 + 0x6e0) + 0x2189) =
         *(undefined1 *)(*(longlong *)(param_1 + 0x6e0) + 0x220a);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180512b80(longlong param_1,float *param_2,float *param_3)
void FUN_180512b80(longlong param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  float extraout_XMM0_Da;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStackX_8;
  float fStackX_c;
  float fStackX_20;
  float fStackX_24;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9f0);
  if ((lVar2 != 0) &&
     ((*(uint *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0)) >>
       0x1c & 1) != 0)) {
    lVar8 = *(longlong *)(lVar2 + 0xf8);
    fVar18 = *param_2;
    fVar17 = param_2[1];
    fVar16 = param_2[2];
    fVar15 = param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2];
    auVar14 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
    fVar12 = auVar14._0_4_;
    fVar15 = fVar12 * 0.5 * (3.0 - fVar15 * fVar12 * fVar12) * fVar15;
    fVar12 = fVar17 * fVar17 + fVar18 * fVar18 + fVar16 * fVar16;
    auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar13 = auVar14._0_4_;
    fVar12 = fVar13 * 0.5 * (3.0 - fVar12 * fVar13 * fVar13);
    fVar17 = fVar17 * fVar12 - *(float *)(lVar8 + 0xd0);
    fVar18 = fVar18 * fVar12 - *(float *)(lVar8 + 0xcc);
    fVar12 = fVar16 * fVar12 - *(float *)(lVar8 + 0xd4);
    pfVar6 = *(float **)(*(longlong *)(lVar2 + 0x40) + 0x88);
    fVar16 = *(float *)(lVar8 + 0xa0) * fVar17 + *(float *)(lVar8 + 0x9c) * fVar18 +
             *(float *)(lVar8 + 0xa4) * fVar12;
    fVar12 = *(float *)(lVar8 + 0xb0) * fVar17 + *(float *)(lVar8 + 0xac) * fVar18 +
             *(float *)(lVar8 + 0xb4) * fVar12;
    fVar18 = fVar12 * fVar12 + fVar16 * fVar16;
    auVar14 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
    fVar17 = auVar14._0_4_;
    fVar18 = fVar17 * 0.5 * (3.0 - fVar18 * fVar17 * fVar17);
    fVar16 = fVar16 * fVar18;
    fVar12 = fVar12 * fVar18;
    _fStackX_8 = CONCAT44(fVar12,fVar16);
    iVar11 = (int)(*(longlong *)(*(longlong *)(lVar2 + 0x40) + 0x90) - (longlong)pfVar6 >> 3);
    if (0 < iVar11) {
      lVar8 = 0;
      iVar10 = 1;
      pfVar7 = pfVar6;
      do {
        pfVar1 = pfVar6 + (longlong)(iVar10 % iVar11) * 2;
        if ((0.0 <= fVar12 * *pfVar7 - fVar16 * pfVar7[1]) &&
           (fVar12 * *pfVar1 - fVar16 * pfVar1[1] <= 0.0)) {
          FUN_18038a230(&fStackX_20,pfVar7,pfVar1,&fStackX_8);
          fVar18 = SQRT(fStackX_20 * fStackX_20 + fStackX_24 * fStackX_24);
          goto LAB_180512e2b;
        }
        iVar10 = iVar10 + 1;
        lVar8 = lVar8 + 1;
        pfVar7 = pfVar7 + 2;
      } while (lVar8 < iVar11);
    }
    fVar18 = 1.0;
LAB_180512e2b:
    if (fVar18 <= fVar15) {
      fVar18 = fVar15;
    }
    fVar17 = 0.0;
    uStack_ac = 0x7f7fffff;
    fVar18 = 1.0 / fVar18;
    fStack_b8 = param_3[2] * fVar18 * param_2[1] - param_3[1] * fVar18 * param_2[2];
    fStack_b0 = param_3[1] * fVar18 * *param_2 - *param_3 * fVar18 * param_2[1];
    fStack_b4 = *param_3 * fVar18 * param_2[2] - param_3[2] * fVar18 * *param_2;
    if (((fStack_b8 != 0.0) || (fStack_b4 != 0.0)) || (fStack_b0 != 0.0)) {
      fVar16 = fStack_b4 * fStack_b4 + fStack_b8 * fStack_b8 + fStack_b0 * fStack_b0;
      auVar14 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
      fVar18 = auVar14._0_4_;
      fVar17 = fVar18 * 0.5 * (3.0 - fVar16 * fVar18 * fVar18);
      fStack_b8 = fStack_b8 * fVar17;
      fStack_b4 = fStack_b4 * fVar17;
      fStack_b0 = fStack_b0 * fVar17;
      fVar17 = fVar17 * fVar16;
      if (0.0 <= fVar17) {
        if (1.0 <= fVar17) {
          fVar17 = 1.0;
        }
      }
      else {
        fVar17 = 0.0;
      }
      uStack_98 = 0x3f800000;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_70 = 0x3f800000;
      uStack_88 = 0;
      uStack_84 = 0x3f800000;
      uStack_80 = 0;
      uStack_7c = 0;
      fVar18 = (float)asinf(fVar17);
      fVar18 = SQRT(fVar18);
      puVar3 = (undefined8 *)FUN_180534b00(&uStack_98,auStack_a8,&fStack_b8,fVar18);
      uStack_98 = *puVar3;
      uStack_90 = puVar3[1];
      puVar4 = (undefined4 *)FUN_180534b00(&uStack_88,auStack_a8,&fStack_b8,fVar18);
      uStack_88 = *puVar4;
      uStack_84 = puVar4[1];
      uStack_80 = puVar4[2];
      uStack_7c = puVar4[3];
      puVar3 = (undefined8 *)FUN_180534b00(&uStack_78,auStack_a8,&fStack_b8,fVar18);
      uStack_78 = *puVar3;
      uStack_70 = puVar3[1];
      FUN_1801c1720(&uStack_98,&fStack_b8);
      lVar8 = *(longlong *)(param_1 + 0x728);
      fVar16 = fStack_b0 * _DAT_180c9642c;
      fVar18 = fStack_b8 * _DAT_180c9642c;
      *(float *)(lVar8 + 0x558) = fStack_b4 * _DAT_180c9642c + *(float *)(lVar8 + 0x558);
      *(float *)(lVar8 + 0x55c) = fVar16 + *(float *)(lVar8 + 0x55c);
      *(float *)(lVar8 + 0x554) = fVar18 + *(float *)(lVar8 + 0x554);
    }
    lVar8 = *(longlong *)(param_1 + 0x658);
    lVar9 = (longlong)*(char *)(*(longlong *)(lVar2 + 0xf8) + 0x88);
    lVar2 = *(longlong *)(*(longlong *)(lVar8 + 0x208) + 0x140);
    iVar11 = *(int *)(lVar9 * 0x1b0 + 0x110 + lVar2);
    while ((iVar11 == -1 && ((char)lVar9 != -1))) {
      lVar9 = (longlong)*(char *)(lVar9 * 0x100 + 0xa0 + *(longlong *)(lVar8 + 0x18));
      iVar11 = *(int *)(lVar9 * 0x1b0 + 0x110 + lVar2);
    }
    FUN_180534d00(lVar8,&uStack_98);
    uVar5 = FUN_1801c24a0(param_3);
    uStack_ac = 0x7f7fffff;
    fVar17 = extraout_XMM0_Da - fVar17;
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    fVar17 = SQRT(fVar17);
    fStack_b8 = fVar17 * *param_3;
    fStack_b4 = fVar17 * param_3[1];
    fStack_b0 = fVar17 * param_3[2];
    pfVar6 = (float *)FUN_1801c0fb0(uVar5,auStack_a8,&fStack_b8);
    lVar2 = *(longlong *)(param_1 + 0x728);
    fVar17 = pfVar6[1] * _DAT_180c96430;
    fVar18 = pfVar6[2] * _DAT_180c96430;
    *(float *)(lVar2 + 0x534) = _DAT_180c96430 * *pfVar6 + *(float *)(lVar2 + 0x534);
    *(float *)(lVar2 + 0x538) = fVar17 + *(float *)(lVar2 + 0x538);
    *(float *)(lVar2 + 0x53c) = fVar18 + *(float *)(lVar2 + 0x53c);
    *(longlong *)(*(longlong *)(param_1 + 0x728) + 0x568) =
         *(longlong *)
          (&DAT_180c8ed30 + (longlong)*(int *)(*(longlong *)(param_1 + 0x728) + 0x570) * 8) + 40000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



