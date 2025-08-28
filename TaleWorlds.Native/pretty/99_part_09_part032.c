#include "TaleWorlds.Native.Split.h"

// 99_part_09_part032.c - 1 个函数

// 函数: void FUN_1805cccfd(void)
void FUN_1805cccfd(void)

{
  longlong unaff_R14;
  longlong unaff_R15;
  float unaff_XMM9_Da;
  
  if ((((float)(*(longlong *)(unaff_R15 + (longlong)*(int *)(unaff_R14 + 6000) * 8) -
               *(longlong *)(unaff_R14 + 0x1768)) * unaff_XMM9_Da < -100.0) ||
      (9 < *(uint *)(unaff_R14 + 0x178c))) ||
     ((0x241U >> (*(uint *)(unaff_R14 + 0x178c) & 0x1f) & 1) == 0)) {
    FUN_1805caef0();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001805cb527)

ulonglong FUN_1805ccd60(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  ulonglong uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStackX_8;
  float fStackX_c;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  
  lVar5 = *param_1;
  if (*(int *)(lVar5 + 0x564) != -1) {
    if ((char)param_1[0x438] == '\0') {
      iVar4 = *(int *)((longlong)param_1 + 0x14b4);
    }
    else {
      iVar4 = *(int *)((longlong)param_1 + 0x21c4);
    }
    if (-1 < iVar4) {
      lVar1 = *(longlong *)((longlong)iVar4 * 0xa60 + 0x3778 + param_1[0x291]);
      if (((lVar1 != 0) && (*(char *)(lVar1 + 0x8be) != '\0')) &&
         (*(float *)(*(longlong *)
                      ((longlong)*(int *)(lVar5 + 0x564) * 0xa60 + 0x30c0 +
                      *(longlong *)(lVar5 + 0x8d8)) + 0x20) <= 0.5)) {
        if ((char)param_1[0x438] == '\0') {
          iVar4 = *(int *)((longlong)param_1 + 0x14b4);
        }
        else {
          iVar4 = *(int *)((longlong)param_1 + 0x21c4);
        }
        lVar1 = *(longlong *)((longlong)iVar4 * 0xa60 + 0x30c0 + param_1[0x291]);
        fVar14 = *(float *)(lVar1 + 0xc) - *(float *)(*(longlong *)(lVar5 + 0x20) + 0xc);
        fVar15 = *(float *)(lVar1 + 0x10) - *(float *)(*(longlong *)(lVar5 + 0x20) + 0x10);
        fVar11 = fVar15 * fVar15 + fVar14 * fVar14;
        uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar5 + 0x6d8) + 0x8a8) + 0x40);
        fVar11 = (float)(fVar11 <= 1.1754944e-38) * 1.1754944e-38 + fVar11;
        auVar12 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
        fVar9 = auVar12._0_4_;
        fStackX_8 = (float)uVar2;
        fStackX_c = (float)((ulonglong)uVar2 >> 0x20);
        fVar11 = fVar9 * 0.5 * (3.0 - fVar11 * fVar9 * fVar9);
        fVar14 = fVar14 * fVar11;
        fVar15 = fVar15 * fVar11;
        if (fVar14 * fStackX_8 + fVar15 * fStackX_c <= 0.0) {
          *(uint *)((longlong)param_1 + 0x158c) = *(uint *)((longlong)param_1 + 0x158c) | 0x20;
        }
        else {
          *(uint *)((longlong)param_1 + 0x158c) = *(uint *)((longlong)param_1 + 0x158c) | 0x10;
        }
        if (0.3 < fStackX_8 * fVar15 - fStackX_c * fVar14) {
          *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
        }
        if ((*(uint *)(param_1 + 2) & 0x4000) == 0) {
          FUN_1805d53a0(param_1 + 1);
        }
        if (((*(char *)((longlong)param_1 + 0xc3) != '\0') &&
            ((*(byte *)(param_1 + 0x269) & 2) != 0)) &&
           (cVar3 = func_0x0001805b7d30(param_1), cVar3 == '\0')) {
          func_0x0001805d89b0(param_1,0x4000);
        }
        goto LAB_1805ccf62;
      }
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
LAB_1805ccf62:
  uVar7 = func_0x0001805b7d30(param_1);
  if ((char)uVar7 != '\0') {
    return uVar7;
  }
  lVar5 = func_0x0001805b7270(param_1 + 1);
  if (lVar5 == 0) {
    param_1[0x42f] = 0x7fc000007fc00000;
    param_1[0x430] = 0x7fc000007fc00000;
    return 0;
  }
  pfVar6 = (float *)func_0x0001805b7cd0(param_1);
  fVar11 = *(float *)(*(longlong *)(*param_1 + 0x20) + 0x1d0);
  uVar8 = 0;
  lVar5 = param_1[0x291];
  param_1[0x42f] = 0;
  param_1[0x430] = 0;
  iVar4 = *(int *)(lVar5 + 0x87b318);
  if (0 < iVar4) {
    do {
      pfVar6 = *(float **)(*(longlong *)(lVar5 + 0x87b340) + (ulonglong)(uVar8 >> 4) * 8);
      if (pfVar6[(ulonglong)(uVar8 & 0xf) * 0x2f8 + 2] != 0.0) break;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar4);
  }
  if ((int)uVar8 < iVar4) {
    do {
      pfVar6 = *(float **)(lVar5 + 0x87b340);
      lVar5 = (ulonglong)(uVar8 & 0xf) * 0xbe0 + *(longlong *)(pfVar6 + (ulonglong)(uVar8 >> 4) * 2)
      ;
      if (*(char *)(lVar5 + 0x3d1) == '\0') {
        if (*(char *)(lVar5 + 0x3d2) == '\0') {
          fStack_f8 = *(float *)(lVar5 + 0x8c);
          fStack_f4 = *(float *)(lVar5 + 0x90);
          fStack_f0 = *(float *)(lVar5 + 0x94);
          uStack_ec = *(undefined4 *)(lVar5 + 0x98);
        }
        else {
          (**(code **)(**(longlong **)(lVar5 + 0xe8) + 0xa0))
                    (*(longlong **)(lVar5 + 0xe8),&fStack_f8);
        }
        fVar9 = fStack_f8 * fStack_f8 + fStack_f4 * fStack_f4 + fStack_f0 * fStack_f0;
        auVar12 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar14 = auVar12._0_4_;
        fVar13 = fVar14 * 0.5 * (3.0 - fVar9 * fVar14 * fVar14);
        fVar9 = fStack_f4 * fVar13;
        fVar13 = fStack_f8 * fVar13;
        lVar1 = *(longlong *)(*param_1 + 0x20);
        pfVar6 = (float *)(lVar1 + 0xc);
        fVar16 = *(float *)(lVar5 + 0x58) - *pfVar6;
        fVar17 = *(float *)(lVar5 + 0x5c) - *(float *)(lVar1 + 0x10);
        fVar14 = fVar9 * fVar9 + fVar13 * fVar13;
        auVar12 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
        fVar15 = auVar12._0_4_;
        fVar14 = fVar14 * fVar15 * fVar15;
        fVar10 = fVar17 * fVar17 + fVar16 * fVar16;
        fVar15 = fVar15 * 0.5 * (3.0 - fVar14);
        fVar9 = fVar9 * fVar15 * fVar17 + fVar13 * fVar15 * fVar16;
        fVar9 = fVar9 * fVar9;
        if (fVar10 - fVar9 < fVar11 * fVar11 * 36.0) {
                    // WARNING: Subroutine does not return
          FUN_1808fd400(*(undefined4 *)(*param_1 + 0x4ac),fVar9,fVar10,fVar14,fVar13,fStack_f0);
        }
      }
      lVar5 = param_1[0x291];
      uVar8 = uVar8 + 1;
      iVar4 = *(int *)(lVar5 + 0x87b318);
      if (iVar4 <= (int)uVar8) break;
      do {
        pfVar6 = *(float **)(*(longlong *)(lVar5 + 0x87b340) + (ulonglong)(uVar8 >> 4) * 8);
        if (pfVar6[(ulonglong)(uVar8 & 0xf) * 0x2f8 + 2] != 0.0) break;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar4);
    } while ((int)uVar8 < iVar4);
  }
  param_1[0x42f] = 0x7fc000007fc00000;
  param_1[0x430] = 0x7fc000007fc00000;
  return (ulonglong)pfVar6 & 0xffffffffffffff00;
}



// WARNING: Removing unreachable block (ram,0x0001805cb527)

ulonglong FUN_1805ccdf5(undefined8 param_1,undefined8 param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong *unaff_RBX;
  uint uVar8;
  longlong in_R10;
  undefined4 extraout_XMM0_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  
  if (param_4 == '\0') {
    iVar4 = *(int *)((longlong)unaff_RBX + 0x14b4);
  }
  else {
    iVar4 = *(int *)((longlong)unaff_RBX + 0x21c4);
  }
  lVar5 = *(longlong *)((longlong)iVar4 * 0xa60 + 0x30c0 + in_R10);
  fVar14 = *(float *)(lVar5 + 0xc) - *(float *)(*(longlong *)(param_3 + 0x20) + 0xc);
  fVar15 = *(float *)(lVar5 + 0x10) - *(float *)(*(longlong *)(param_3 + 0x20) + 0x10);
  fVar11 = fVar15 * fVar15 + fVar14 * fVar14;
  uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_3 + 0x6d8) + 0x8a8) + 0x40);
  fVar11 = (float)(fVar11 <= 1.1754944e-38) * 1.1754944e-38 + fVar11;
  auVar12 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
  fVar9 = auVar12._0_4_;
  fStack0000000000000040 = (float)uVar2;
  fStack0000000000000044 = (float)((ulonglong)uVar2 >> 0x20);
  fVar11 = fVar9 * 0.5 * (3.0 - fVar11 * fVar9 * fVar9);
  fVar14 = fVar14 * fVar11;
  fVar15 = fVar15 * fVar11;
  if (fVar14 * fStack0000000000000040 + fVar15 * fStack0000000000000044 <= 0.0) {
    *(uint *)((longlong)unaff_RBX + 0x158c) = *(uint *)((longlong)unaff_RBX + 0x158c) | 0x20;
  }
  else {
    *(uint *)((longlong)unaff_RBX + 0x158c) = *(uint *)((longlong)unaff_RBX + 0x158c) | 0x10;
  }
  if (0.3 < fStack0000000000000040 * fVar15 - fStack0000000000000044 * fVar14) {
    *(undefined4 *)((longlong)unaff_RBX + 0x178c) = 0;
  }
  _fStack0000000000000040 = uVar2;
  if ((*(uint *)(unaff_RBX + 2) & 0x4000) == 0) {
    FUN_1805d53a0(unaff_RBX + 1);
  }
  if (((*(char *)((longlong)unaff_RBX + 0xc3) != '\0') && ((*(byte *)(unaff_RBX + 0x269) & 2) != 0))
     && (cVar3 = func_0x0001805b7d30(), cVar3 == '\0')) {
    func_0x0001805d89b0(extraout_XMM0_Da,0x4000);
  }
  uVar7 = func_0x0001805b7d30();
  if ((char)uVar7 != '\0') {
    return uVar7;
  }
  lVar5 = func_0x0001805b7270(unaff_RBX + 1);
  if (lVar5 == 0) {
    unaff_RBX[0x42f] = 0x7fc000007fc00000;
    unaff_RBX[0x430] = 0x7fc000007fc00000;
    return 0;
  }
  pfVar6 = (float *)func_0x0001805b7cd0();
  _fStack0000000000000040 = CONCAT71(stack0x00000041,(char)pfVar6);
  fVar11 = *(float *)(*(longlong *)(*unaff_RBX + 0x20) + 0x1d0);
  uVar8 = 0;
  lVar5 = unaff_RBX[0x291];
  unaff_RBX[0x42f] = 0;
  unaff_RBX[0x430] = 0;
  iVar4 = *(int *)(lVar5 + 0x87b318);
  if (0 < iVar4) {
    do {
      pfVar6 = *(float **)(*(longlong *)(lVar5 + 0x87b340) + (ulonglong)(uVar8 >> 4) * 8);
      if (pfVar6[(ulonglong)(uVar8 & 0xf) * 0x2f8 + 2] != 0.0) break;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar4);
  }
  if ((int)uVar8 < iVar4) {
    do {
      pfVar6 = *(float **)(lVar5 + 0x87b340);
      lVar5 = (ulonglong)(uVar8 & 0xf) * 0xbe0 + *(longlong *)(pfVar6 + (ulonglong)(uVar8 >> 4) * 2)
      ;
      if (*(char *)(lVar5 + 0x3d1) == '\0') {
        if (*(char *)(lVar5 + 0x3d2) == '\0') {
          fStack_c0 = *(float *)(lVar5 + 0x8c);
          fStack_bc = *(float *)(lVar5 + 0x90);
          fStack_b8 = *(float *)(lVar5 + 0x94);
          uStack_b4 = *(undefined4 *)(lVar5 + 0x98);
        }
        else {
          (**(code **)(**(longlong **)(lVar5 + 0xe8) + 0xa0))
                    (*(longlong **)(lVar5 + 0xe8),&fStack_c0);
        }
        fVar9 = fStack_c0 * fStack_c0 + fStack_bc * fStack_bc + fStack_b8 * fStack_b8;
        auVar12 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar14 = auVar12._0_4_;
        fVar13 = fVar14 * 0.5 * (3.0 - fVar9 * fVar14 * fVar14);
        fVar9 = fStack_bc * fVar13;
        fVar13 = fStack_c0 * fVar13;
        lVar1 = *(longlong *)(*unaff_RBX + 0x20);
        pfVar6 = (float *)(lVar1 + 0xc);
        fVar16 = *(float *)(lVar5 + 0x58) - *pfVar6;
        fVar17 = *(float *)(lVar5 + 0x5c) - *(float *)(lVar1 + 0x10);
        fVar14 = fVar9 * fVar9 + fVar13 * fVar13;
        auVar12 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
        fVar15 = auVar12._0_4_;
        fVar14 = fVar14 * fVar15 * fVar15;
        fVar10 = fVar17 * fVar17 + fVar16 * fVar16;
        fVar15 = fVar15 * 0.5 * (3.0 - fVar14);
        fVar9 = fVar9 * fVar15 * fVar17 + fVar13 * fVar15 * fVar16;
        fVar9 = fVar9 * fVar9;
        if (fVar10 - fVar9 < fVar11 * fVar11 * 36.0) {
                    // WARNING: Subroutine does not return
          FUN_1808fd400(*(undefined4 *)(*unaff_RBX + 0x4ac),fVar9,fVar10,fVar14,fVar13,fStack_b8);
        }
      }
      lVar5 = unaff_RBX[0x291];
      uVar8 = uVar8 + 1;
      iVar4 = *(int *)(lVar5 + 0x87b318);
      if (iVar4 <= (int)uVar8) break;
      do {
        pfVar6 = *(float **)(*(longlong *)(lVar5 + 0x87b340) + (ulonglong)(uVar8 >> 4) * 8);
        if (pfVar6[(ulonglong)(uVar8 & 0xf) * 0x2f8 + 2] != 0.0) break;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar4);
    } while ((int)uVar8 < iVar4);
  }
  unaff_RBX[0x42f] = 0x7fc000007fc00000;
  unaff_RBX[0x430] = 0x7fc000007fc00000;
  return (ulonglong)pfVar6 & 0xffffffffffffff00;
}



// WARNING: Removing unreachable block (ram,0x0001805cb527)

ulonglong FUN_1805ccdfa(undefined8 param_1,undefined8 param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong *unaff_RBX;
  uint uVar8;
  longlong in_R10;
  undefined4 extraout_XMM0_Da;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  
  if (param_4 == '\0') {
    iVar4 = *(int *)((longlong)unaff_RBX + 0x14b4);
  }
  else {
    iVar4 = *(int *)((longlong)unaff_RBX + 0x21c4);
  }
  lVar5 = *(longlong *)((longlong)iVar4 * 0xa60 + 0x30c0 + in_R10);
  fVar13 = *(float *)(lVar5 + 0xc) - *(float *)(*(longlong *)(param_3 + 0x20) + 0xc);
  fVar14 = *(float *)(lVar5 + 0x10) - *(float *)(*(longlong *)(param_3 + 0x20) + 0x10);
  fVar10 = fVar14 * fVar14 + fVar13 * fVar13;
  uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_3 + 0x6d8) + 0x8a8) + 0x40);
  fVar10 = (float)(fVar10 <= 1.1754944e-38) * 1.1754944e-38 + fVar10;
  auVar11 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
  fVar9 = auVar11._0_4_;
  fStack0000000000000040 = (float)uVar2;
  fStack0000000000000044 = (float)((ulonglong)uVar2 >> 0x20);
  fVar10 = fVar9 * 0.5 * (3.0 - fVar10 * fVar9 * fVar9);
  fVar13 = fVar13 * fVar10;
  fVar14 = fVar14 * fVar10;
  if (fVar13 * fStack0000000000000040 + fVar14 * fStack0000000000000044 <= 0.0) {
    *(uint *)((longlong)unaff_RBX + 0x158c) = *(uint *)((longlong)unaff_RBX + 0x158c) | 0x20;
  }
  else {
    *(uint *)((longlong)unaff_RBX + 0x158c) = *(uint *)((longlong)unaff_RBX + 0x158c) | 0x10;
  }
  if (0.3 < fStack0000000000000040 * fVar14 - fStack0000000000000044 * fVar13) {
    *(undefined4 *)((longlong)unaff_RBX + 0x178c) = 0;
  }
  _fStack0000000000000040 = uVar2;
  if ((*(uint *)(unaff_RBX + 2) & 0x4000) == 0) {
    FUN_1805d53a0(unaff_RBX + 1);
  }
  if (((*(char *)((longlong)unaff_RBX + 0xc3) != '\0') && ((*(byte *)(unaff_RBX + 0x269) & 2) != 0))
     && (cVar3 = func_0x0001805b7d30(), cVar3 == '\0')) {
    func_0x0001805d89b0(extraout_XMM0_Da,0x4000);
  }
  uVar7 = func_0x0001805b7d30();
  if ((char)uVar7 != '\0') {
    return uVar7;
  }
  lVar5 = func_0x0001805b7270(unaff_RBX + 1);
  if (lVar5 == 0) {
    unaff_RBX[0x42f] = 0x7fc000007fc00000;
    unaff_RBX[0x430] = 0x7fc000007fc00000;
    return 0;
  }
  pfVar6 = (float *)func_0x0001805b7cd0();
  _fStack0000000000000040 = CONCAT71(stack0x00000041,(char)pfVar6);
  fVar10 = *(float *)(*(longlong *)(*unaff_RBX + 0x20) + 0x1d0);
  uVar8 = 0;
  lVar5 = unaff_RBX[0x291];
  unaff_RBX[0x42f] = 0;
  unaff_RBX[0x430] = 0;
  iVar4 = *(int *)(lVar5 + 0x87b318);
  if (0 < iVar4) {
    do {
      pfVar6 = *(float **)(*(longlong *)(lVar5 + 0x87b340) + (ulonglong)(uVar8 >> 4) * 8);
      if (pfVar6[(ulonglong)(uVar8 & 0xf) * 0x2f8 + 2] != 0.0) break;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar4);
  }
  if ((int)uVar8 < iVar4) {
    do {
      pfVar6 = *(float **)(lVar5 + 0x87b340);
      lVar5 = (ulonglong)(uVar8 & 0xf) * 0xbe0 + *(longlong *)(pfVar6 + (ulonglong)(uVar8 >> 4) * 2)
      ;
      if (*(char *)(lVar5 + 0x3d1) == '\0') {
        if (*(char *)(lVar5 + 0x3d2) == '\0') {
          fStack_c0 = *(float *)(lVar5 + 0x8c);
          fStack_bc = *(float *)(lVar5 + 0x90);
          fStack_b8 = *(float *)(lVar5 + 0x94);
          uStack_b4 = *(undefined4 *)(lVar5 + 0x98);
        }
        else {
          (**(code **)(**(longlong **)(lVar5 + 0xe8) + 0xa0))
                    (*(longlong **)(lVar5 + 0xe8),&fStack_c0);
        }
        fVar9 = fStack_c0 * fStack_c0 + fStack_bc * fStack_bc + fStack_b8 * fStack_b8;
        auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar13 = auVar11._0_4_;
        fVar12 = fVar13 * 0.5 * (3.0 - fVar9 * fVar13 * fVar13);
        fVar9 = fStack_bc * fVar12;
        fVar12 = fStack_c0 * fVar12;
        lVar1 = *(longlong *)(*unaff_RBX + 0x20);
        pfVar6 = (float *)(lVar1 + 0xc);
        fVar15 = *(float *)(lVar5 + 0x58) - *pfVar6;
        fVar16 = *(float *)(lVar5 + 0x5c) - *(float *)(lVar1 + 0x10);
        fVar13 = fVar9 * fVar9 + fVar12 * fVar12;
        auVar11 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
        fVar14 = auVar11._0_4_;
        fVar13 = fVar14 * 0.5 * (3.0 - fVar13 * fVar14 * fVar14);
        fVar9 = fVar9 * fVar13 * fVar16 + fVar12 * fVar13 * fVar15;
        if ((fVar16 * fVar16 + fVar15 * fVar15) - fVar9 * fVar9 < fVar10 * fVar10 * 36.0) {
                    // WARNING: Subroutine does not return
          FUN_1808fd400(*(undefined4 *)(*unaff_RBX + 0x4ac));
        }
      }
      lVar5 = unaff_RBX[0x291];
      uVar8 = uVar8 + 1;
      iVar4 = *(int *)(lVar5 + 0x87b318);
      if (iVar4 <= (int)uVar8) break;
      do {
        pfVar6 = *(float **)(*(longlong *)(lVar5 + 0x87b340) + (ulonglong)(uVar8 >> 4) * 8);
        if (pfVar6[(ulonglong)(uVar8 & 0xf) * 0x2f8 + 2] != 0.0) break;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar4);
    } while ((int)uVar8 < iVar4);
  }
  unaff_RBX[0x42f] = 0x7fc000007fc00000;
  unaff_RBX[0x430] = 0x7fc000007fc00000;
  return (ulonglong)pfVar6 & 0xffffffffffffff00;
}



// WARNING: Removing unreachable block (ram,0x0001805cb527)

ulonglong FUN_1805ccf0a(void)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong *unaff_RBX;
  uint uVar8;
  undefined4 extraout_XMM0_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  
  *(undefined4 *)((longlong)unaff_RBX + 0x178c) = 0;
  if ((*(uint *)(unaff_RBX + 2) & 0x4000) == 0) {
    FUN_1805d53a0(unaff_RBX + 1);
  }
  if (((*(char *)((longlong)unaff_RBX + 0xc3) != '\0') && ((*(byte *)(unaff_RBX + 0x269) & 2) != 0))
     && (cVar4 = func_0x0001805b7d30(), cVar4 == '\0')) {
    func_0x0001805d89b0(extraout_XMM0_Da,0x4000);
  }
  uVar7 = func_0x0001805b7d30();
  if ((char)uVar7 != '\0') {
    return uVar7;
  }
  lVar5 = func_0x0001805b7270(unaff_RBX + 1);
  if (lVar5 == 0) {
    unaff_RBX[0x42f] = 0x7fc000007fc00000;
    unaff_RBX[0x430] = 0x7fc000007fc00000;
    return 0;
  }
  pfVar6 = (float *)func_0x0001805b7cd0();
  fVar1 = *(float *)(*(longlong *)(*unaff_RBX + 0x20) + 0x1d0);
  uVar8 = 0;
  lVar5 = unaff_RBX[0x291];
  unaff_RBX[0x42f] = 0;
  unaff_RBX[0x430] = 0;
  iVar2 = *(int *)(lVar5 + 0x87b318);
  if (0 < iVar2) {
    do {
      pfVar6 = *(float **)(*(longlong *)(lVar5 + 0x87b340) + (ulonglong)(uVar8 >> 4) * 8);
      if (pfVar6[(ulonglong)(uVar8 & 0xf) * 0x2f8 + 2] != 0.0) break;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar2);
  }
  if ((int)uVar8 < iVar2) {
    do {
      pfVar6 = *(float **)(lVar5 + 0x87b340);
      lVar5 = (ulonglong)(uVar8 & 0xf) * 0xbe0 + *(longlong *)(pfVar6 + (ulonglong)(uVar8 >> 4) * 2)
      ;
      if (*(char *)(lVar5 + 0x3d1) == '\0') {
        if (*(char *)(lVar5 + 0x3d2) == '\0') {
          fStack_c0 = *(float *)(lVar5 + 0x8c);
          fStack_bc = *(float *)(lVar5 + 0x90);
          fStack_b8 = *(float *)(lVar5 + 0x94);
          uStack_b4 = *(undefined4 *)(lVar5 + 0x98);
        }
        else {
          (**(code **)(**(longlong **)(lVar5 + 0xe8) + 0xa0))
                    (*(longlong **)(lVar5 + 0xe8),&fStack_c0);
        }
        fVar10 = fStack_c0 * fStack_c0 + fStack_bc * fStack_bc + fStack_b8 * fStack_b8;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar9 = auVar12._0_4_;
        fVar13 = fVar9 * 0.5 * (3.0 - fVar10 * fVar9 * fVar9);
        fVar10 = fStack_bc * fVar13;
        fVar13 = fStack_c0 * fVar13;
        lVar3 = *(longlong *)(*unaff_RBX + 0x20);
        pfVar6 = (float *)(lVar3 + 0xc);
        fVar15 = *(float *)(lVar5 + 0x58) - *pfVar6;
        fVar16 = *(float *)(lVar5 + 0x5c) - *(float *)(lVar3 + 0x10);
        fVar9 = fVar10 * fVar10 + fVar13 * fVar13;
        auVar12 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar14 = auVar12._0_4_;
        fVar9 = fVar9 * fVar14 * fVar14;
        fVar11 = fVar16 * fVar16 + fVar15 * fVar15;
        fVar14 = fVar14 * 0.5 * (3.0 - fVar9);
        fVar10 = fVar10 * fVar14 * fVar16 + fVar13 * fVar14 * fVar15;
        fVar10 = fVar10 * fVar10;
        if (fVar11 - fVar10 < fVar1 * fVar1 * 36.0) {
                    // WARNING: Subroutine does not return
          FUN_1808fd400(*(undefined4 *)(*unaff_RBX + 0x4ac),fVar10,fVar11,fVar9,fVar13,fStack_b8);
        }
      }
      lVar5 = unaff_RBX[0x291];
      uVar8 = uVar8 + 1;
      iVar2 = *(int *)(lVar5 + 0x87b318);
      if (iVar2 <= (int)uVar8) break;
      do {
        pfVar6 = *(float **)(*(longlong *)(lVar5 + 0x87b340) + (ulonglong)(uVar8 >> 4) * 8);
        if (pfVar6[(ulonglong)(uVar8 & 0xf) * 0x2f8 + 2] != 0.0) break;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar2);
    } while ((int)uVar8 < iVar2);
  }
  unaff_RBX[0x42f] = 0x7fc000007fc00000;
  unaff_RBX[0x430] = 0x7fc000007fc00000;
  return (ulonglong)pfVar6 & 0xffffffffffffff00;
}



// WARNING: Removing unreachable block (ram,0x0001805cb527)

ulonglong FUN_1805ccf34(void)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong *unaff_RBX;
  uint uVar8;
  undefined4 extraout_XMM0_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  
  if (((*(byte *)(unaff_RBX + 0x269) & 2) != 0) && (cVar4 = func_0x0001805b7d30(), cVar4 == '\0')) {
    func_0x0001805d89b0(extraout_XMM0_Da,0x4000);
  }
  uVar7 = func_0x0001805b7d30();
  if ((char)uVar7 != '\0') {
    return uVar7;
  }
  lVar5 = func_0x0001805b7270(unaff_RBX + 1);
  if (lVar5 == 0) {
    unaff_RBX[0x42f] = 0x7fc000007fc00000;
    unaff_RBX[0x430] = 0x7fc000007fc00000;
    return 0;
  }
  pfVar6 = (float *)func_0x0001805b7cd0();
  fVar1 = *(float *)(*(longlong *)(*unaff_RBX + 0x20) + 0x1d0);
  uVar8 = 0;
  lVar5 = unaff_RBX[0x291];
  unaff_RBX[0x42f] = 0;
  unaff_RBX[0x430] = 0;
  iVar2 = *(int *)(lVar5 + 0x87b318);
  if (0 < iVar2) {
    do {
      pfVar6 = *(float **)(*(longlong *)(lVar5 + 0x87b340) + (ulonglong)(uVar8 >> 4) * 8);
      if (pfVar6[(ulonglong)(uVar8 & 0xf) * 0x2f8 + 2] != 0.0) break;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar2);
  }
  if ((int)uVar8 < iVar2) {
    do {
      pfVar6 = *(float **)(lVar5 + 0x87b340);
      lVar5 = (ulonglong)(uVar8 & 0xf) * 0xbe0 + *(longlong *)(pfVar6 + (ulonglong)(uVar8 >> 4) * 2)
      ;
      if (*(char *)(lVar5 + 0x3d1) == '\0') {
        if (*(char *)(lVar5 + 0x3d2) == '\0') {
          fStack_c0 = *(float *)(lVar5 + 0x8c);
          fStack_bc = *(float *)(lVar5 + 0x90);
          fStack_b8 = *(float *)(lVar5 + 0x94);
          uStack_b4 = *(undefined4 *)(lVar5 + 0x98);
        }
        else {
          (**(code **)(**(longlong **)(lVar5 + 0xe8) + 0xa0))
                    (*(longlong **)(lVar5 + 0xe8),&fStack_c0);
        }
        fVar10 = fStack_c0 * fStack_c0 + fStack_bc * fStack_bc + fStack_b8 * fStack_b8;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar9 = auVar12._0_4_;
        fVar13 = fVar9 * 0.5 * (3.0 - fVar10 * fVar9 * fVar9);
        fVar10 = fStack_bc * fVar13;
        fVar13 = fStack_c0 * fVar13;
        lVar3 = *(longlong *)(*unaff_RBX + 0x20);
        pfVar6 = (float *)(lVar3 + 0xc);
        fVar14 = *(float *)(lVar5 + 0x58) - *pfVar6;
        fVar15 = *(float *)(lVar5 + 0x5c) - *(float *)(lVar3 + 0x10);
        fVar9 = fVar10 * fVar10 + fVar13 * fVar13;
        auVar12 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar11 = auVar12._0_4_;
        fVar9 = fVar11 * 0.5 * (3.0 - fVar9 * fVar11 * fVar11);
        fVar10 = fVar10 * fVar9 * fVar15 + fVar13 * fVar9 * fVar14;
        if ((fVar15 * fVar15 + fVar14 * fVar14) - fVar10 * fVar10 < fVar1 * fVar1 * 36.0) {
                    // WARNING: Subroutine does not return
          FUN_1808fd400(*(undefined4 *)(*unaff_RBX + 0x4ac));
        }
      }
      lVar5 = unaff_RBX[0x291];
      uVar8 = uVar8 + 1;
      iVar2 = *(int *)(lVar5 + 0x87b318);
      if (iVar2 <= (int)uVar8) break;
      do {
        pfVar6 = *(float **)(*(longlong *)(lVar5 + 0x87b340) + (ulonglong)(uVar8 >> 4) * 8);
        if (pfVar6[(ulonglong)(uVar8 & 0xf) * 0x2f8 + 2] != 0.0) break;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar2);
    } while ((int)uVar8 < iVar2);
  }
  unaff_RBX[0x42f] = 0x7fc000007fc00000;
  unaff_RBX[0x430] = 0x7fc000007fc00000;
  return (ulonglong)pfVar6 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




