#include "TaleWorlds.Native.Split.h"

// 03_rendering_part605.c - 4 个函数

// 函数: void FUN_18059ad70(longlong param_1,float param_2,undefined8 param_3,undefined8 param_4)
void FUN_18059ad70(longlong param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte bVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 uStack_64;
  
  if ((_DAT_180c92514 == 1) || (_DAT_180c92514 == 4)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  lVar16 = *(longlong *)(param_1 + 0x108);
  uVar15 = 0;
  iVar17 = 0;
  uVar1 = *(uint *)(lVar16 + 0x56c);
  if ((!bVar3) && ((uVar1 >> 0xe & 1) != 0)) {
    if (*(int *)(lVar16 + 0x5f8) == 0) {
      lVar12 = *(longlong *)(lVar16 + 0x590);
      uVar11 = uVar15;
      if (*(longlong *)(lVar12 + 0x24a8) != 0) {
        uVar11 = *(ulonglong *)(*(longlong *)(lVar12 + 0x24a8) + 0x1d0);
      }
      uVar19 = uVar15;
      if (*(longlong *)(lVar12 + 0x2460) != 0) {
        uVar19 = *(ulonglong *)(*(longlong *)(lVar12 + 0x2460) + 0x1d0);
      }
      uVar18 = uVar19 & 0xffffffffffffff00;
      if ((char)*(ulonglong *)(lVar12 + 0x2470) == '\0') {
        uVar18 = uVar19;
      }
      if ((((uVar18 | *(ulonglong *)(lVar12 + 0x2470) | *(ulonglong *)(lVar12 + 0x24b8) | uVar11) >>
            0x18 & 1) == 0) && (iVar9 = func_0x000180534f70(lVar12,0), iVar9 < 2)) {
        if (*(int *)(param_1 + 0x1d4) == 0) {
          lVar12 = *(longlong *)(lVar16 + 0x20);
          fVar21 = 1.0;
          fVar22 = *(float *)(lVar12 + 0x84) * *(float *)(lVar12 + 0x7c);
          fVar23 = fVar22 * 0.25;
          fVar22 = fVar22 - SQRT(*(float *)(lVar12 + 0x24) * *(float *)(lVar12 + 0x24) +
                                 *(float *)(lVar12 + 0x28) * *(float *)(lVar12 + 0x28) +
                                 *(float *)(lVar12 + 0x2c) * *(float *)(lVar12 + 0x2c));
          if ((fVar22 < fVar23) &&
             (fVar21 = ((fVar23 - fVar22) * 4.0) / fVar23 + 1.0, 3.0 <= fVar21)) {
            fVar21 = 3.0;
          }
          fVar21 = fVar21 * param_2 + *(float *)(param_1 + 0x278);
          *(float *)(param_1 + 0x278) = fVar21;
          if (0.0 < fVar21) {
            lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x8f8) + 0x9e8);
            iVar9 = iVar17;
            if (lVar16 != 0) {
              iVar9 = *(int *)((longlong)*(int *)(lVar16 + 0xf0) * 0xa0 + 100 +
                              *(longlong *)(lVar16 + 0xd0));
            }
            FUN_1805a79c0(param_1,(longlong)iVar9 * 0x170 + _DAT_180c95ff0);
          }
        }
        else {
          *(uint *)(param_1 + 0x278) = _DAT_180c96484 ^ 0x80000000;
        }
        goto LAB_18059af84;
      }
    }
    *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
  }
LAB_18059af84:
  if (((uVar1 >> 0xb & 1) != 0) &&
     ((((lVar16 = *(longlong *)(param_1 + 0x108), -1 < *(int *)(lVar16 + 0x564) ||
        ((*(byte *)(*(longlong *)(lVar16 + 0x590) + 0x3424) & 0x10) != 0)) &&
       (lVar12 = *(longlong *)(lVar16 + 0x590), lVar12 != 0)) &&
      (((*(uint *)(lVar16 + 0x56c) & 0x800) != 0 && (*(char *)(lVar12 + 0x34bc) != '\0')))))) {
    *(undefined1 *)(lVar12 + 0x34bc) = 0;
  }
  iVar9 = *(int *)(*(longlong *)(param_1 + 0x108) + 0x570);
  uVar20 = uVar1 & 0x4000;
  if ((uVar20 != 0) && ((uVar6 = FUN_1805a35f0(param_1), !bVar3 || (iVar9 == 2)))) {
    FUN_18059aad0(param_1,uVar6);
  }
  lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x590);
  iVar10 = *(int *)(lVar16 + 0x2498);
  if (iVar10 == -1) {
    cVar8 = -1;
  }
  else {
    cVar8 = *(char *)((longlong)iVar10 * 0x68 + 0x60 + _DAT_180c96150);
  }
  lVar12 = *(longlong *)(lVar16 + 0x2460);
  iVar14 = iVar17;
  if (lVar12 != 0) {
    iVar14 = (int)*(undefined8 *)(lVar12 + 0x1d0);
  }
  bVar13 = (byte)*(ulonglong *)(lVar16 + 0x2470);
  bVar7 = (byte)iVar14;
  if (bVar13 != 0) {
    bVar7 = bVar13;
  }
  if (bVar7 < 0x21) {
LAB_18059b0ab:
    bVar4 = false;
  }
  else {
    uVar11 = uVar15;
    if (lVar12 != 0) {
      uVar11 = *(ulonglong *)(lVar12 + 0x1d0);
    }
    if (((uVar11 | *(ulonglong *)(lVar16 + 0x2470)) & 0x2000000000) == 0) goto LAB_18059b0ab;
    bVar4 = true;
  }
  lVar12 = *(longlong *)(lVar16 + 0x24a8);
  iVar14 = iVar17;
  if (lVar12 != 0) {
    iVar14 = *(int *)(lVar12 + 0x1d0);
  }
  bVar13 = (byte)*(undefined8 *)(lVar16 + 0x24b8);
  bVar7 = (byte)iVar14;
  if (bVar13 != 0) {
    bVar7 = bVar13;
  }
  if ((!bVar4) && (bVar7 < 0x40)) goto LAB_18059b24c;
  if (iVar10 != -1) {
    iVar10 = iVar17;
    if (lVar12 != 0) {
      iVar10 = (int)*(undefined8 *)(lVar12 + 0x1d0);
    }
    bVar7 = (byte)iVar10;
    if (bVar13 != 0) {
      bVar7 = bVar13;
    }
    if (bVar7 < 0x40) {
      if (cVar8 == '\0') {
        iVar10 = *(int *)(lVar16 + 0x2450);
        lVar12 = (longlong)iVar10;
        if ((iVar10 != -1) &&
           ((*(int *)(lVar12 * 0x68 + 0x58 + _DAT_180c96150) == 0x1c ||
            ((iVar10 != -1 &&
             ((*(int *)(lVar12 * 0x68 + 0x58 + _DAT_180c96150) == 0x1d ||
              ((iVar10 != -1 && (*(int *)(lVar12 * 0x68 + 0x58 + _DAT_180c96150) == 0x1e))))))))))
        goto LAB_18059b24c;
        iVar10 = iVar17;
        if (*(int *)(lVar16 + 0x2498) != -1) {
          iVar10 = *(int *)((longlong)*(int *)(lVar16 + 0x2498) * 0x68 + 0x58 + _DAT_180c96150);
        }
        if (iVar10 == 0x1f) goto LAB_18059b24c;
      }
      uStack_7c = 0x3f80000000000000;
      uStack_74 = 0xbe4ccccdbe4ccccd;
      uStack_80 = 0;
      uStack_6c = 0x3ecccccd;
      uStack_68 = 0x1000000;
      uStack_64 = 0;
      uStack_90 = 1;
      uStack_8c = 0xffffffff;
      uStack_88 = 0x40;
      FUN_18051ec50(*(longlong *)(param_1 + 0x108),&uStack_90);
    }
  }
  if (uVar20 != 0) {
    uVar15 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x8f8) + 0x9e8);
  }
  iVar10 = iVar17;
  if (uVar15 != 0) {
    iVar10 = *(int *)((longlong)*(int *)(uVar15 + 0xf0) * 0xa0 + 100 + *(longlong *)(uVar15 + 0xd0))
    ;
  }
  FUN_1805b1d30(param_1 + 0x110,(longlong)iVar10 * 0x170 + _DAT_180c95ff0);
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
LAB_18059b24c:
  lVar16 = _DAT_180c96150;
  if ((uVar1 & 0x80008) != 0) {
    lVar12 = *(longlong *)(param_1 + 0x108);
    bVar4 = false;
    bVar5 = false;
    if ((((*(uint *)(lVar12 + 0x4c4) & 0x8000) != 0) && (!bVar3)) &&
       (cVar8 = FUN_18059a920(param_1), cVar8 != '\0')) {
      FUN_1805a3c90(param_1,param_4);
      lVar12 = *(longlong *)(param_1 + 0x108);
      lVar16 = _DAT_180c96150;
    }
    if (uVar20 != 0) {
      lVar12 = *(longlong *)(param_1 + 0x108);
      lVar2 = *(longlong *)(*(longlong *)(lVar12 + 0x8f8) + 0x9e8);
      if ((lVar2 == 0) ||
         ((*(byte *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0)) &
          1) != 0)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((lVar2 == 0) ||
         ((*(byte *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0))
           >> 1 & 1) == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
    }
    lVar12 = *(longlong *)(lVar12 + 0x590);
    if (*(int *)(lVar12 + 0x2450) != -1) {
      iVar17 = *(int *)((longlong)*(int *)(lVar12 + 0x2450) * 0x68 + 0x58 + lVar16);
    }
    if ((((bVar4) || (*(int *)(param_1 + 0x28c) != 0)) || (iVar17 - 0x1cU < 2)) ||
       ((*(int *)(lVar12 + 0x2498) != -1 &&
        (*(int *)((longlong)*(int *)(lVar12 + 0x2498) * 0x68 + 0x58 + lVar16) == 0x1f)))) {
      if (bVar3) {
        if (iVar9 == 2) {
          FUN_18059c170(param_1);
        }
        FUN_1805a31d0(param_1);
      }
      else {
        FUN_18059c810(param_1,lVar12,param_3);
      }
    }
    else if (bVar5) {
      FUN_18059ea80(param_1,lVar12,param_4,param_3);
    }
  }
  if (((uVar1 & 0x10) != 0) && ((!bVar3 || (iVar9 == 2)))) {
    FUN_18059ba40(param_1);
  }
  return;
}


/*
Unable to decompile 'FUN_18059ad86'
Cause: 
Low-level Error: Cannot properly adjust input varnodes
*/

/*
Unable to decompile 'FUN_18059ad99'
Cause: 
Low-level Error: Cannot properly adjust input varnodes
*/

/*
Unable to decompile 'FUN_18059af94'
Cause: 
Low-level Error: Cannot properly adjust input varnodes
*/




// 函数: void FUN_18059b3e8(void)
void FUN_18059b3e8(void)

{
  int unaff_EDI;
  char unaff_R13B;
  
  if ((unaff_R13B == '\0') || (unaff_EDI == 2)) {
    FUN_18059ba40();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18059b410(longlong param_1)
void FUN_18059b410(longlong param_1)

{
  longlong *plVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint *puVar16;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  undefined8 uStack_60;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  lVar12 = *(longlong *)(param_1 + 0x108);
  lVar5 = *(longlong *)(lVar12 + 0x590);
  lVar6 = *(longlong *)(*(longlong *)(lVar12 + 0x8f8) + 0x9e8);
  uVar11 = *(ulonglong *)(lVar5 + 0x2460);
  lVar7 = *(longlong *)(*(longlong *)(lVar12 + 0x8f8) + 0x9f0);
  if (uVar11 != 0) {
    uVar11 = *(ulonglong *)(uVar11 + 0x1d0);
  }
  uVar11 = *(ulonglong *)(lVar5 + 0x2470) | uVar11;
  if (*(longlong *)(lVar5 + 0x24a8) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(ulonglong *)(*(longlong *)(lVar5 + 0x24a8) + 0x1d0);
  }
  if (((uVar11 & 0x2000000000) == 0) && (*(int *)(lVar5 + 0x2498) != -1)) {
    uVar11 = *(ulonglong *)(lVar5 + 0x24b8) | uVar14;
  }
  plVar1 = (longlong *)(lVar12 + 0x728);
  if ((((uVar11 >> 0x1a & 1) == 0) &&
      (lVar15 = *plVar1,
      0.0 <= (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar15 + 0x570) * 8) -
                    *(longlong *)(lVar15 + 0x568)) * 1e-05)) ||
     (lVar15 = *plVar1, ((*(ushort *)(lVar15 + 0x5ac) | *(ushort *)(lVar15 + 0x5aa)) & 0x7fc) != 0))
  {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if ((lVar7 == 0) ||
     ((*(uint *)((longlong)*(int *)(lVar7 + 0xf0) * 0xa0 + 0x58 + *(longlong *)(lVar7 + 0xd0)) &
      0x100000) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((((*(int *)(lVar12 + 0x564) < 0) || (*(float *)(lVar5 + 0x2434) != 0.0)) ||
      ((iVar4 = *(int *)(lVar5 + 0x2450), iVar4 != -1 &&
       ((*(int *)((longlong)iVar4 * 0x68 + 0x58 + _DAT_180c96150) == 0x24 ||
        (*(int *)((longlong)iVar4 * 0x68 + 0x58 + _DAT_180c96150) == 0x25)))))) ||
     ((lVar6 != 0 &&
      ((*(uint *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar6 + 0xd0)) >>
        0x15 & 1) != 0)))) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (((bVar8) || (bVar9)) || (bVar10)) {
    lVar12 = *plVar1;
    if (((*(ushort *)(lVar12 + 0x5ac) | *(ushort *)(lVar12 + 0x5aa)) & 0x3003) == 0) {
      *(undefined8 *)(lVar12 + 0x504) = 0;
      *(undefined8 *)(lVar12 + 0x50c) = 0;
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x728);
      *(undefined8 *)(lVar12 + 0x514) = 0;
      *(undefined8 *)(lVar12 + 0x51c) = 0;
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x728);
      *(undefined8 *)(lVar12 + 0x544) = 0;
      *(undefined8 *)(lVar12 + 0x54c) = 0;
      puVar16 = (uint *)((longlong)
                         *(char *)(*(longlong *)
                                    (*(longlong *)
                                      (*(longlong *)
                                        (*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x6d8) +
                                        0x8a8) + 0x260) + 0x210) + 0xe3) * 0x100 +
                        *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x658) + 0x18))
      ;
      do {
        LOCK();
        uVar3 = *puVar16;
        *puVar16 = *puVar16 | 1;
        UNLOCK();
      } while ((uVar3 & 1) != 0);
      uStack_68 = *(undefined8 *)(puVar16 + 1);
      uStack_60 = *(undefined8 *)(puVar16 + 3);
      uStack_58 = puVar16[5];
      uStack_54 = puVar16[6];
      uStack_50 = puVar16[7];
      uStack_4c = puVar16[8];
      *puVar16 = 0;
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x728);
      *(uint *)(lVar12 + 0x4f4) = uStack_58;
      *(uint *)(lVar12 + 0x4f8) = uStack_54;
      *(uint *)(lVar12 + 0x4fc) = uStack_50;
      *(uint *)(lVar12 + 0x500) = uStack_4c;
      *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x728) + 0x564) =
           (float)_DAT_180c8ed38 * 1e-05;
    }
    lVar12 = *(longlong *)(param_1 + 0x108);
    if (bVar9) {
      uVar13 = *(ushort *)(*(longlong *)(lVar12 + 0x728) + 0x5aa) & 0x2000;
      if (uVar13 != 0) {
        puVar2 = (ushort *)(*(longlong *)(lVar12 + 0x728) + 0x5ac);
        *puVar2 = *puVar2 | uVar13;
        puVar2 = (ushort *)(*(longlong *)(lVar12 + 0x728) + 0x5aa);
        *puVar2 = *puVar2 & ~uVar13;
        lVar12 = *(longlong *)(param_1 + 0x108);
      }
      lVar5 = *(longlong *)(lVar12 + 0x728);
      if (((*(ushort *)(lVar5 + 0x5ac) | *(ushort *)(lVar5 + 0x5aa)) & 0x1000) == 0) {
        *(undefined4 *)(lVar5 + 0x80) = 0;
        *(undefined4 *)(lVar5 + 0x84) = 0;
        *(undefined4 *)(lVar5 + 0x88) = 0;
        *(undefined4 *)(lVar5 + 0x8c) = 0;
        lVar12 = *(longlong *)(param_1 + 0x108);
      }
      FUN_180516bd0(lVar12,0x1000,0x382a);
    }
    else {
      lVar5 = *(longlong *)(lVar12 + 0x728);
      if (bVar10) {
        uVar13 = *(ushort *)(lVar5 + 0x5aa) & 0x1000;
        if (uVar13 != 0) {
          *(ushort *)(lVar5 + 0x5ac) = *(ushort *)(lVar5 + 0x5ac) | uVar13;
          puVar2 = (ushort *)(*(longlong *)(lVar12 + 0x728) + 0x5aa);
          *puVar2 = *puVar2 & ~uVar13;
          lVar12 = *(longlong *)(param_1 + 0x108);
        }
        FUN_180516bd0(lVar12,0x2000,0x382a);
      }
      else {
        uVar13 = *(ushort *)(lVar5 + 0x5aa) & 0x3000;
        if (uVar13 != 0) {
          *(ushort *)(lVar5 + 0x5ac) = *(ushort *)(lVar5 + 0x5ac) | uVar13;
          puVar2 = (ushort *)(*(longlong *)(lVar12 + 0x728) + 0x5aa);
          *puVar2 = *puVar2 & ~uVar13;
        }
      }
    }
    lVar12 = *(longlong *)(param_1 + 0x108);
    lVar5 = *(longlong *)(lVar12 + 0x728);
    if (!bVar8) {
      uVar13 = *(ushort *)(lVar5 + 0x5aa) & 1;
      if (uVar13 != 0) {
        *(ushort *)(lVar5 + 0x5ac) = *(ushort *)(lVar5 + 0x5ac) | uVar13;
        puVar2 = (ushort *)(*(longlong *)(lVar12 + 0x728) + 0x5aa);
        *puVar2 = *puVar2 & ~uVar13;
        lVar12 = *(longlong *)(param_1 + 0x108);
      }
LAB_18059b902:
      uVar13 = *(ushort *)(*(longlong *)(lVar12 + 0x728) + 0x5aa) & 2;
      if (uVar13 != 0) {
        puVar2 = (ushort *)(*(longlong *)(lVar12 + 0x728) + 0x5ac);
        *puVar2 = *puVar2 | uVar13;
        lVar12 = *(longlong *)(lVar12 + 0x728);
        goto LAB_18059b924;
      }
      goto LAB_18059b92e;
    }
    if ((*(byte *)(lVar5 + 0x5aa) & 1) == 0) {
      FUN_180516bd0(lVar12,1,0xc7d5);
      lVar12 = *(longlong *)(param_1 + 0x108);
    }
    if ((bVar9) ||
       ((*(longlong *)(*(longlong *)(lVar12 + 0x8f8) + 0x9f0) == 0 &&
        ((lVar5 = *(longlong *)(*(longlong *)(lVar12 + 0x8f8) + 0x9e8), lVar5 == 0 ||
         (*(char *)(*(longlong *)(lVar5 + 0xf8) + 0x88) !=
          *(char *)(*(longlong *)(lVar12 + 0x590) + 0x25fc))))))) goto LAB_18059b902;
    uVar13 = *(ushort *)(*(longlong *)(lVar12 + 0x728) + 0x5aa);
    if ((uVar13 & 2) != 0) goto LAB_18059b92e;
    if (((uVar13 & 0x800) == 0) || ((uVar11 & 0x800000000000) == 0)) {
      FUN_180516bd0(lVar12,2,0xc7d5);
      goto LAB_18059b92e;
    }
LAB_18059b933:
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x728);
    if (((*(ushort *)(lVar12 + 0x5aa) & 0x342a) == 0) &&
       ((*(ushort *)(lVar12 + 0x5ac) & 0x342a) == 0)) {
      FUN_180516bd0(*(longlong *)(param_1 + 0x108),0x800,0x382a);
      goto LAB_18059b99c;
    }
  }
  else {
    uVar13 = *(ushort *)(lVar15 + 0x5aa) & 0x3003;
    if (uVar13 == 0) goto LAB_18059b92e;
    *(ushort *)(lVar15 + 0x5ac) = *(ushort *)(lVar15 + 0x5ac) | uVar13;
    lVar12 = *(longlong *)(lVar12 + 0x728);
LAB_18059b924:
    *(ushort *)(lVar12 + 0x5aa) = *(ushort *)(lVar12 + 0x5aa) & ~uVar13;
LAB_18059b92e:
    if ((uVar11 & 0x800000000000) != 0) goto LAB_18059b933;
  }
  lVar12 = *(longlong *)(param_1 + 0x108);
  lVar5 = *(longlong *)(lVar12 + 0x728);
  uVar13 = *(ushort *)(lVar5 + 0x5aa) & 0x800;
  if (uVar13 != 0) {
    puVar2 = (ushort *)(lVar5 + 0x5ac);
    *puVar2 = *puVar2 | uVar13;
    puVar2 = (ushort *)(*(longlong *)(lVar12 + 0x728) + 0x5aa);
    *puVar2 = *puVar2 & ~uVar13;
  }
LAB_18059b99c:
  lVar12 = *(longlong *)(param_1 + 0x108);
  lVar5 = *(longlong *)(lVar12 + 0x728);
  uVar13 = *(ushort *)(lVar5 + 0x5aa) & 0x3c0;
  if ((uVar13 != 0) &&
     (0.0 <= (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar5 + 0x580) * 8) -
                    *(longlong *)(lVar5 + 0x578)) * 1e-05)) {
    *(ushort *)(lVar5 + 0x5ac) = *(ushort *)(lVar5 + 0x5ac) | uVar13;
    puVar2 = (ushort *)(*(longlong *)(lVar12 + 0x728) + 0x5aa);
    *puVar2 = *puVar2 & ~uVar13;
    *(undefined4 *)(*(longlong *)(lVar12 + 0x728) + 0x5a4) = 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18059ba40(longlong param_1)
void FUN_18059ba40(longlong param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined1 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  
  bVar6 = false;
  iVar13 = 0;
  uVar11 = 0;
  if ((float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x210) * 8) -
             *(longlong *)(param_1 + 0x208)) * 1e-05 < 0.0) goto LAB_18059bd8e;
  lVar10 = *(longlong *)(param_1 + 0x108);
  if (*(int *)(param_1 + 0x1d4) != 7) {
    iVar8 = *(int *)(*(longlong *)(lVar10 + 0x590) + 0x2498);
    if ((iVar8 == -1) || (*(char *)((longlong)iVar8 * 0x68 + 0x60 + _DAT_180c96150) != '\x05')) {
      if ((*(uint *)(lVar10 + 0x4c8) & 0x7c00) == 0) {
        return;
      }
      cVar7 = FUN_18059c100(param_1);
      if (cVar7 != '\0') {
        return;
      }
      uVar11 = *(uint *)(*(longlong *)(param_1 + 0x108) + 0x4c8);
      if ((((uVar11 >> 0xe & 1) == 0) || ((uVar11 & 0x3c00) == 0)) ||
         ((*(int *)(*(longlong *)(param_1 + 0x108) + 0x570) != 1 &&
          ((_DAT_180c92514 != 0 && (_DAT_180c92514 != 5)))))) {
        lVar10 = *(longlong *)(param_1 + 0x270);
      }
      else if ((uVar11 & 0x2000) == 0) {
        if ((uVar11 & 0x1000) == 0) {
          uVar12 = (uVar11 & 0x800 | 0x1400) >> 10;
          if ((uVar11 & 0x400) != 0) {
            uVar12 = 6;
          }
          lVar10 = FUN_1805a0900(param_1,uVar12);
        }
        else {
          lVar10 = FUN_1805a0900(param_1,4);
        }
      }
      else {
        lVar10 = FUN_1805a0900(param_1,5);
      }
      *(longlong *)(param_1 + 0x260) = lVar10;
      if (lVar10 == 0) {
        return;
      }
      if (*(int *)(lVar10 + 0xc) == -1) {
        return;
      }
      iVar8 = func_0x000180534f70(*(undefined8 *)(*(longlong *)(param_1 + 0x108) + 0x590),1);
      if (0xf < iVar8) {
        return;
      }
      if (*(int *)(param_1 + 0x1d4) == 5) {
        return;
      }
      if (*(int *)(param_1 + 0x1d4) == 2) {
        return;
      }
      *(undefined8 *)(param_1 + 0x228) =
           *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x230) * 8);
      iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x590) + 0x2498);
      if (iVar8 != -1) {
        iVar13 = *(int *)((longlong)iVar8 * 0x68 + 0x58 + _DAT_180c96150);
      }
      if (*(int *)((longlong)(int)(*(undefined4 **)(param_1 + 0x260))[3] * 0x68 + 0x58 +
                  _DAT_180c96150) == iVar13) {
        return;
      }
      uVar14 = **(undefined4 **)(param_1 + 0x260);
      cVar7 = func_0x00018059e9f0(param_1,uVar14);
      if (cVar7 == '\0') {
        return;
      }
      uStack_60 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_54 = 0;
      uStack_4c = 0;
      uStack_a8 = 0xffffffffffffffff;
      uStack_44 = 0;
      uStack_3c = 0;
      uStack_a0 = 0;
      uStack_1c = 0x3f800000;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_7c = 0x3f800000;
      uStack_78 = 0xbe4ccccd;
      uStack_74 = 0xbe4ccccd;
      uStack_70 = 0x3ecccccd;
      uStack_68 = 0x100;
      uStack_5c = 5;
      uStack_30 = 0xffffffffffffffff;
      uStack_28 = 0xff;
      uStack_24 = 0;
      uStack_34 = 0xffffffff;
      uStack_58 = uVar14;
      FUN_1805a4a20(param_1,1,&uStack_a8,1);
      *(undefined8 *)(param_1 + 0x218) =
           *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x220) * 8);
      return;
    }
    goto LAB_18059bd8e;
  }
  if ((*(uint *)(lVar10 + 0x4c8) & 0x7c00) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x260);
    if (lVar3 != 0) {
      plVar4 = *(longlong **)(lVar10 + 0x590);
      iVar13 = (int)plVar4[0x493];
      if ((iVar13 != -1) &&
         ((((iVar13 == *(int *)(lVar3 + 0xc) || (iVar13 == *(int *)(lVar3 + 0x10))) ||
           (iVar13 == *(int *)(lVar3 + 0x14))) || (iVar13 == *(int *)(lVar3 + 0x18))))) {
        if ((float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x230) * 8) -
                   *(longlong *)(param_1 + 0x228)) * 1e-05 <= _DAT_180c96434) {
          return;
        }
        fVar15 = (float)(**(code **)(*plVar4 + 0xa0))(plVar4,1);
        if (fVar15 <= 0.999) {
          return;
        }
      }
    }
    goto LAB_18059bd8e;
  }
  *(undefined8 *)(param_1 + 0x228) =
       *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x230) * 8);
  puVar9 = *(undefined4 **)(param_1 + 0x260);
  if (puVar9 == (undefined4 *)0x0) {
LAB_18059bb85:
    bVar5 = false;
LAB_18059bb87:
    uVar14 = *puVar9;
    if (bVar5) {
      puVar9 = (undefined4 *)FUN_1805a0900(param_1,uVar14);
      if (((puVar9 != (undefined4 *)0x0) &&
          (cVar7 = func_0x000180525320(lVar10), *(char *)((longlong)puVar9 + 5) == cVar7)) &&
         ((iVar13 = *(int *)(*(longlong *)(lVar10 + 0x590) + 0x2498), iVar13 != -1 &&
          (*(char *)((longlong)iVar13 * 0x68 + 0x60 + _DAT_180c96150) == '\x05')))) {
        uStack_58 = *puVar9;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_54 = 0;
        uStack_4c = 0;
        uStack_60 = 0;
        uStack_44 = 0;
        uStack_3c = 0;
        uStack_a8 = 0xffffffffffffffff;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_7c = 0x3f800000;
        uStack_78 = 0xbe4ccccd;
        uStack_74 = 0xbe4ccccd;
        uStack_70 = 0x3ecccccd;
        uStack_68 = 0x100;
        uStack_5c = 5;
        uStack_30 = 0xffffffffffffffff;
        uStack_28 = 0xff;
        uStack_24 = 0;
        uStack_34 = 0xffffffff;
        uStack_1c = 0x3f800000;
        cVar7 = FUN_1805a4a20(param_1,1,&uStack_a8,1);
        if (cVar7 != '\0') {
          *(undefined4 **)(param_1 + 0x270) = puVar9;
        }
      }
    }
    else {
      cVar7 = func_0x00018059e9f0();
      if (cVar7 != '\0') goto LAB_18059bba5;
    }
  }
  else {
    iVar13 = *(int *)(*(longlong *)(lVar10 + 0x590) + 0x2498);
    if ((iVar13 == -1) ||
       ((((iVar13 != puVar9[3] && (iVar13 != puVar9[4])) &&
         ((iVar13 != puVar9[5] && (iVar13 != puVar9[6])))) ||
        (cVar7 = func_0x000180525320(lVar10), *(char *)((longlong)puVar9 + 5) != cVar7)))) {
      if (((puVar9 == (undefined4 *)0x0) ||
          (iVar13 = *(int *)(*(longlong *)(lVar10 + 0x590) + 0x2498), iVar13 == -1)) ||
         ((iVar13 != puVar9[3] &&
          (((iVar13 != puVar9[4] && (iVar13 != puVar9[5])) && (iVar13 != puVar9[6]))))))
      goto LAB_18059bb85;
      bVar5 = true;
      goto LAB_18059bb87;
    }
    if (((*(uint *)(lVar10 + 0x4c8) & 0x4000) == 0) &&
       (puVar2 = *(undefined4 **)(param_1 + 0x270), puVar2 != puVar9)) {
      if (puVar2 == (undefined4 *)0x0) {
LAB_18059bb4e:
        bVar6 = true;
        goto FUN_18059bd17;
      }
      uVar14 = *puVar2;
      cVar7 = func_0x00018059e9f0(param_1,uVar14);
      if (cVar7 == '\0') goto LAB_18059bb4e;
LAB_18059bba5:
      uStack_60 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_54 = 0;
      uStack_4c = 0;
      uStack_a8 = 0xffffffffffffffff;
      uStack_44 = 0;
      uStack_3c = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_7c = 0x3f800000;
      uStack_78 = 0xbe4ccccd;
      uStack_74 = 0xbe4ccccd;
      uStack_70 = 0x3ecccccd;
      uStack_68 = 0x100;
      uStack_5c = 5;
      uStack_30 = 0xffffffffffffffff;
      uStack_28 = 0xff;
      uStack_24 = 0;
      uStack_34 = 0xffffffff;
      uStack_1c = 0x3f800000;
      uStack_58 = uVar14;
      FUN_1805a4a20(param_1,1,&uStack_a8,1);
    }
  }
FUN_18059bd17:
  if ((*(int *)(*(longlong *)(param_1 + 0x108) + 0x570) == 2) && (**(int **)(param_1 + 0x260) != 8))
  {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x108) + 0x4c8);
    *puVar1 = *puVar1 & 0xffff83ff;
    iVar13 = **(int **)(param_1 + 0x260);
    if (iVar13 == 4) {
      uVar11 = 0x1000;
    }
    else if (iVar13 == 5) {
      uVar11 = 0x2000;
    }
    else if (iVar13 == 6) {
      uVar11 = 0x400;
    }
    else if (iVar13 == 7) {
      uVar11 = 0x800;
    }
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x108) + 0x4c8);
    *puVar1 = *puVar1 | uVar11;
  }
  if (!bVar6) {
    return;
  }
LAB_18059bd8e:
  uStack_60 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  uStack_a8 = 0xffffffffffffffff;
  uStack_44 = 0;
  uStack_3c = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3f800000;
  uStack_78 = 0xbe4ccccd;
  uStack_74 = 0xbe4ccccd;
  uStack_70 = 0x3ecccccd;
  uStack_68 = 0x100;
  uStack_5c = 7;
  uStack_58 = 0xffffffff;
  uStack_30 = 0xffffffffffffffff;
  uStack_28 = 0xff;
  uStack_24 = 0;
  uStack_34 = 0xffffffff;
  uStack_1c = 0x3f800000;
  FUN_1805a4a20(param_1,1,&uStack_a8,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



