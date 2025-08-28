#include "TaleWorlds.Native.Split.h"

// 99_part_09_part064.c - 7 个函数

// 函数: void FUN_1805e24f4(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_1805e24f4(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  longlong unaff_R14;
  
  if ((*(uint *)(param_3 + 0x10) & 0x20) == 0) {
    *(uint64_t *)(param_3 + 0xa8) =
         *(uint64_t *)(*(longlong *)(**(longlong **)(param_3 + 8) + 0x8f8) + 0x9e8);
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x20;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(int32_t *)(*(longlong *)(unaff_R14 + 0x20) + 0x34));
}



uint64_t FUN_1805e25ee(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R15;
  float fVar1;
  float fVar2;
  float fVar3;
  int8_t auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_XMM7_Da;
  float fVar8;
  float unaff_XMM11_Da;
  uint unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float fStack00000000000000e4;
  
  if (-1 < *(int *)(unaff_RBX + 0x564)) {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(int32_t *)
                   (*(longlong *)
                     ((longlong)*(int *)(unaff_RBX + 0x564) * 0xa60 + 0x30c0 + unaff_R15) + 0x34));
  }
  fVar7 = *(float *)(*(longlong *)(unaff_RBX + 0x20) + 0xc) -
          *(float *)(*(longlong *)(unaff_RBP + 0x20) + 0xc);
  fVar6 = *(float *)(*(longlong *)(unaff_RBX + 0x20) + 0x10) -
          *(float *)(*(longlong *)(unaff_RBP + 0x20) + 0x10);
  fVar3 = fVar6 * fVar6 + fVar7 * fVar7;
  auVar4 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
  fVar8 = auVar4._0_4_;
  fVar3 = fVar8 * 0.5 * (3.0 - fVar3 * fVar8 * fVar8);
  fVar7 = fVar7 * fVar3;
  fVar6 = fVar6 * fVar3;
  fVar3 = (float)((uint)fVar7 ^ unaff_XMM12_Da) * unaff_XMM7_Da;
  fVar5 = unaff_XMM11_Da * (float)((uint)fVar6 ^ unaff_XMM12_Da);
  fVar8 = unaff_XMM11_Da * (float)((uint)fVar7 ^ unaff_XMM12_Da) + fVar6 * unaff_XMM7_Da;
  fStack00000000000000e4 =
       unaff_XMM11_Da * fVar7 + (float)((uint)fVar6 ^ unaff_XMM12_Da) * unaff_XMM7_Da;
  fVar1 = (float)atan2f(fVar7 * unaff_XMM7_Da - fVar5,fStack00000000000000e4);
  fVar2 = (float)atan2f(fVar3 - unaff_XMM11_Da * fVar6,fVar8);
  fVar3 = unaff_XMM11_Da * fVar6 - fVar3;
  if (ABS(fVar1) < ABS(fVar2)) {
    fVar3 = fVar5 - fVar7 * unaff_XMM7_Da;
    fVar8 = fStack00000000000000e4;
  }
  fVar3 = (float)atan2f((uint)fVar3 ^ unaff_XMM12_Da,fVar8);
  fVar3 = fVar3 * unaff_XMM13_Da;
  if (*(int *)(unaff_RDI + 0x11ac) == 1) {
    if (0.2 < fVar3) {
      return 1;
    }
    if (fVar3 < -0.2) {
      return 0xffffffff;
    }
  }
  else if (*(int *)(unaff_RDI + 0x11ac) == 0) {
    if (0.3 < fVar3) {
      return 1;
    }
    if (fVar3 < -0.3) {
      return 0xffffffff;
    }
  }
  return 0;
}



uint64_t FUN_1805e28ec(float param_1)

{
  if (0.2 < param_1) {
    return 1;
  }
  if (-0.2 <= param_1) {
    return 0;
  }
  return 0xffffffff;
}






// 函数: void FUN_1805e2950(longlong param_1)
void FUN_1805e2950(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  *(int32_t *)(param_1 + 0x18) = 0;
  plVar1 = *(longlong **)(param_1 + 0x20);
  lVar2 = *plVar1;
  lVar3 = *(longlong *)(lVar2 + 0x8d8);
  uVar7 = *(uint *)(lVar2 + 0x56c) & 8;
  if (((uVar7 == 0) && ((*(uint *)((longlong)plVar1 + 0x1484) >> 1 & 1) == 0)) &&
     ((*(uint *)(lVar2 + 0x56c) >> 0xc & 1) != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
    if (((uVar7 != 0) && ((*(uint *)((longlong)plVar1 + 0x1484) >> 1 & 1) == 0)) &&
       ((*(uint *)((longlong)plVar1 + 0x1484) & 1) != 0)) {
      return;
    }
  }
  if (bVar5) {
    return;
  }
  if ((*(byte *)(plVar1 + 0x413) & 0x10) == 0) {
    if (((int)plVar1[0x295] == 2) && (*(int *)((longlong)plVar1 + 0x178c) - 2U < 3)) {
      return;
    }
    if ((((-1 < *(int *)(lVar2 + 0x564)) || (*(int *)((longlong)plVar1 + 0x14e4) < 0)) ||
        (cVar6 = FUN_1805a3ab0(lVar2 + 0x28), cVar6 == '\0')) ||
       (lVar4 = *(longlong *)(lVar2 + 0x20),
       fVar9 = *(float *)(lVar4 + 0x10) - *(float *)(param_1 + 100),
       fVar8 = *(float *)(lVar4 + 0xc) - *(float *)(param_1 + 0x60),
       *(float *)(lVar4 + 0x84) * *(float *)(lVar4 + 0x84) * 100.0 <= fVar9 * fVar9 + fVar8 * fVar8)
       ) {
      if (((*(int *)(*(longlong *)(param_1 + 0x20) + 0x14a8) != 3) ||
          (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1420) != 1)) &&
         ((-1 < *(int *)(param_1 + 0x1164) &&
          (*(int *)(lVar3 + 0x3604 + (longlong)*(int *)(param_1 + 0x1164) * 0xa60) < 0)))) {
                    // WARNING: Subroutine does not return
        FUN_1808fd400(*(int32_t *)(*(longlong *)(lVar2 + 0x20) + 0x34));
      }
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
    }
    if ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x2098) & 8) == 0) {
      if (*(int *)(lVar2 + 0x564) < 0) {
        return;
      }
      if (*(char *)(param_1 + 0x1144) != '\0') {
        return;
      }
      cVar6 = FUN_1805a3ab0(lVar2 + 0x28);
      if (cVar6 == '\0') {
        if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x14a8) != 3) {
          return;
        }
        if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1420) != 0) {
          return;
        }
      }
    }
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
    return;
  }
  return;
}






// 函数: void FUN_1805e2a50(void)
void FUN_1805e2a50(void)

{
  char cVar1;
  longlong in_RAX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int unaff_R14D;
  longlong unaff_R15;
  
  if ((((*(int *)(in_RAX + 0x14a8) != 3) || (*(int *)(in_RAX + 0x1420) != 1)) &&
      (-1 < *(int *)(unaff_RDI + 0x1164))) &&
     (*(int *)(unaff_R15 + 0x3604 + (longlong)*(int *)(unaff_RDI + 0x1164) * 0xa60) < unaff_R14D)) {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(int32_t *)(*(longlong *)(unaff_RSI + 0x20) + 0x34));
  }
  *(uint *)(unaff_RDI + 0x18) = *(uint *)(unaff_RDI + 0x18) | 1;
  if ((*(byte *)(*(longlong *)(unaff_RDI + 0x20) + 0x2098) & 8) == 0) {
    if (*(int *)(unaff_RSI + 0x564) < 0) {
      return;
    }
    if (*(char *)(unaff_RDI + 0x1144) != '\0') {
      return;
    }
    cVar1 = FUN_1805a3ab0(unaff_RSI + 0x28);
    if (cVar1 == '\0') {
      if (*(int *)(*(longlong *)(unaff_RDI + 0x20) + 0x14a8) != 3) {
        return;
      }
      if (*(int *)(*(longlong *)(unaff_RDI + 0x20) + 0x1420) != 0) {
        return;
      }
    }
  }
  *(uint *)(unaff_RDI + 0x18) = *(uint *)(unaff_RDI + 0x18) | 2;
  return;
}






// 函数: void FUN_1805e2a98(void)
void FUN_1805e2a98(void)

{
  longlong unaff_RSI;
  uint64_t uStack0000000000000090;
  
  uStack0000000000000090 = *(uint64_t *)(*(longlong *)(unaff_RSI + 0x20) + 0x1c);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(int32_t *)(*(longlong *)(unaff_RSI + 0x20) + 0x34));
}






// 函数: void FUN_1805e2c8f(uint64_t param_1,float param_2)
void FUN_1805e2c8f(uint64_t param_1,float param_2)

{
  char cVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  float unaff_XMM10_Da;
  
  if ((0.7 <= unaff_XMM10_Da) ||
     (((unaff_XMM10_Da <= 0.0 || (10.0 <= param_2)) && (4.0 <= param_2)))) {
    *(uint *)(unaff_RDI + 0x18) = *(uint *)(unaff_RDI + 0x18) | 1;
  }
  if ((*(byte *)(*(longlong *)(unaff_RDI + 0x20) + 0x2098) & 8) == 0) {
    if (*(int *)(unaff_RSI + 0x564) < 0) {
      return;
    }
    if (*(char *)(unaff_RDI + 0x1144) != '\0') {
      return;
    }
    cVar1 = FUN_1805a3ab0(unaff_RSI + 0x28);
    if (cVar1 == '\0') {
      if (*(int *)(*(longlong *)(unaff_RDI + 0x20) + 0x14a8) != 3) {
        return;
      }
      if (*(int *)(*(longlong *)(unaff_RDI + 0x20) + 0x1420) != 0) {
        return;
      }
    }
  }
  *(uint *)(unaff_RDI + 0x18) = *(uint *)(unaff_RDI + 0x18) | 2;
  return;
}






// 函数: void FUN_1805e2cc6(void)
void FUN_1805e2cc6(void)

{
  char cVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if ((*(byte *)(*(longlong *)(unaff_RDI + 0x20) + 0x2098) & 8) == 0) {
    if (*(int *)(unaff_RSI + 0x564) < 0) {
      return;
    }
    if (*(char *)(unaff_RDI + 0x1144) != '\0') {
      return;
    }
    cVar1 = FUN_1805a3ab0(unaff_RSI + 0x28);
    if (cVar1 == '\0') {
      if (*(int *)(*(longlong *)(unaff_RDI + 0x20) + 0x14a8) != 3) {
        return;
      }
      if (*(int *)(*(longlong *)(unaff_RDI + 0x20) + 0x1420) != 0) {
        return;
      }
    }
  }
  *(uint *)(unaff_RDI + 0x18) = *(uint *)(unaff_RDI + 0x18) | 2;
  return;
}






// 函数: void FUN_1805e2d20(longlong param_1,int8_t *param_2,char *param_3,byte *param_4,
void FUN_1805e2d20(longlong param_1,int8_t *param_2,char *param_3,byte *param_4,
                  int8_t *param_5)

{
  float *pfVar1;
  byte bVar2;
  ulonglong uVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  byte bVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint64_t uStackX_8;
  int8_t *puStackX_10;
  char *pcStackX_18;
  byte *pbStackX_20;
  ulonglong uStack_c0;
  longlong *plStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  longlong *plStack_a0;
  uint64_t uStack_98;
  
  uStack_98 = 0xfffffffffffffffe;
  uVar13 = 0;
  plVar8 = (longlong *)**(longlong **)(param_1 + 0x20);
  lVar14 = plVar8[0x11b];
  iVar16 = (int)(*(longlong **)(param_1 + 0x20))[0x269];
  if (iVar16 != 0x20) {
    if (iVar16 != 0x10) {
      return;
    }
    if (*(char *)(param_1 + 0x1144) != '\0') {
      cVar5 = *(char *)(param_1 + 0x113c);
      iVar16 = *(int *)(param_1 + 0x1140);
      iVar17 = -1;
LAB_1805e3580:
      while( true ) {
        iVar15 = iVar16;
        if (cVar5 == '\0') {
          iVar16 = (int)(*(longlong *)(param_1 + 0x1120) - *(longlong *)(param_1 + 0x1118) >> 5);
        }
        else {
          iVar16 = *(int *)(param_1 + 0x1138);
        }
        if (iVar16 <= iVar15) goto LAB_1805e36d9;
        lVar12 = (longlong)iVar15;
        lVar14 = param_1 + 0x118;
        if (iVar17 != -1) break;
        lVar12 = lVar12 * 0x20;
        if (cVar5 == '\0') {
          lVar14 = *(longlong *)(param_1 + 0x1118);
        }
        if (*(longlong *)(lVar14 + lVar12 + 0x10) == 0) goto LAB_1805e3697;
        if (cVar5 == '\0') {
          lVar11 = *(longlong *)(param_1 + 0x1118) + lVar12;
          lVar14 = param_1 + 0x118 + lVar12;
        }
        else {
          lVar11 = param_1 + 0x118 + lVar12;
          lVar14 = lVar11;
        }
        if ((*(byte *)(*(longlong *)(lVar11 + 0x10) + 0x139) & 8) == 0) goto LAB_1805e3697;
        if (cVar5 == '\0') {
          lVar14 = *(longlong *)(param_1 + 0x1118) + lVar12;
        }
        *param_4 = 0.495 < *(float *)(*(longlong *)(lVar14 + 0x10) + 0xf0) -
                           *(float *)(plVar8[4] + 0x14);
        iVar16 = iVar15 + 1;
        iVar17 = iVar15;
      }
      lVar11 = lVar12 * 0x20;
      if (cVar5 == '\0') {
        lVar14 = *(longlong *)(param_1 + 0x1118);
      }
      if (*(longlong *)(lVar14 + lVar11 + 0x10) != 0) {
        if (cVar5 == '\0') {
          lVar14 = *(longlong *)(param_1 + 0x1118) + lVar12 * 0x20;
        }
        else {
          lVar14 = param_1 + 0x118 + lVar11;
        }
        if ((*(byte *)(*(longlong *)(lVar14 + 0x10) + 0x139) & 8) == 0) goto LAB_1805e369f;
      }
LAB_1805e3697:
      iVar16 = iVar15 + 1;
      goto LAB_1805e3580;
    }
    goto LAB_1805e36d9;
  }
  plVar9 = (longlong *)plVar8[0xbe];
  uStackX_8 = plVar9;
  puStackX_10 = param_2;
  pcStackX_18 = param_3;
  pbStackX_20 = param_4;
  plStack_b8 = plVar8;
  plStack_a0 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,param_4,0);
    (**(code **)(*plVar9 + 0x38))(plVar9);
  }
  fVar23 = *(float *)(param_1 + 0x34);
  bVar19 = *param_4;
  if ((*(char *)(param_1 + 0x1144) != '\0') &&
     (fVar21 = (float)FUN_1805d8ed0(param_1), 1.2 < fVar21)) {
    FUN_180507e30(param_1,&uStackX_8);
    bVar19 = 0.0 < uStackX_8._4_4_ * *(float *)((longlong)plVar9 + 0x94) +
                   (float)uStackX_8 * *(float *)(plVar9 + 0x12);
  }
  cVar5 = FUN_1805dbe60(param_1);
  if (*pcStackX_18 != '\0') {
    if (bVar19 == *pbStackX_20) {
      if (cVar5 == '\0') {
        return;
      }
    }
    else if (cVar5 == '\0') {
      FUN_180487c70(param_1 + 0x48,2);
      if (*(int *)(param_1 + 0x88) < 2) {
        fVar21 = -NAN;
      }
      else {
        fVar21 = *(float *)(param_1 + 0x68);
      }
      if (((*(char *)(param_1 + 0x1144) != '\0') && ((fVar21 - fVar23 <= 0.0 || (bVar19 == 0)))) &&
         ((0.0 <= fVar21 - fVar23 || (bVar19 != 0)))) {
LAB_1805e309e:
        *param_5 = 0;
        return;
      }
    }
    if (*(char *)(lVar14 + 0x87a93c) == '\0') {
      iVar16 = (int)(*(longlong *)(lVar14 + 0x87a920) - *(longlong *)(lVar14 + 0x87a918) >> 3);
    }
    else {
      iVar16 = *(int *)(lVar14 + 0x87a938);
    }
    if (0 < iVar16) {
      do {
        iVar17 = (int)uVar13;
        if (*(char *)(lVar14 + 0x87a93c) == '\0') {
          plVar8 = (longlong *)(*(longlong *)(lVar14 + 0x87a918) + (longlong)iVar17 * 8);
        }
        else {
          plVar8 = (longlong *)(lVar14 + ((longlong)iVar17 + 0x10ed2b) * 8);
        }
        lVar12 = *plVar8;
        if (*(int *)(lVar12 + 0x568) == 1) {
          plVar8 = (longlong *)FUN_18058d890(plStack_b8,&plStack_b0);
          plVar9 = (longlong *)FUN_18058d890(lVar12,&uStackX_8);
          if ((*plVar9 == *plVar8) && ((int)plStack_b8[2] != *(int *)(lVar12 + 0x10))) {
            bVar2 = *(byte *)(lVar12 + 0x51c);
            if ((bVar2 & 1) != 0) {
              if (((cVar5 != '\0') || (((bVar2 & 2) != 0 && (bVar19 == 0)))) ||
                 (((bVar2 & 2) == 0 && (bVar19 != 0)))) {
                fVar21 = *(float *)(*(longlong *)(lVar12 + 0x20) + 0x14);
                if (fVar23 <= fVar21) {
                  if ((bVar19 != 0) || ((cVar5 != '\0' && ((bVar2 & 2) == 0)))) goto LAB_1805e3074;
                  if (fVar23 < fVar21) goto LAB_1805e2fdd;
                }
                if ((bVar19 == 0) || ((cVar5 != '\0' && ((bVar2 & 2) != 0)))) goto LAB_1805e3074;
              }
              goto LAB_1805e2fdd;
            }
            if (cVar5 == '\0') {
              if (bVar19 == 0) {
                if (*(float *)(*(longlong *)(lVar12 + 0x20) + 0x14) <= fVar23) goto LAB_1805e3074;
              }
              else {
                pfVar1 = (float *)(*(longlong *)(lVar12 + 0x20) + 0x14);
                if (fVar23 < *pfVar1 || fVar23 == *pfVar1) goto LAB_1805e3074;
              }
              goto LAB_1805e2fdd;
            }
LAB_1805e3074:
            plVar8 = plStack_b8;
            cVar6 = func_0x000180522f60(lVar12);
            if ((cVar6 == '\0') || (cVar6 = func_0x000180508390(plVar8,lVar12), cVar6 == '\0'))
            goto LAB_1805e2fdd;
            bVar4 = true;
          }
          else {
LAB_1805e2fdd:
            bVar4 = false;
          }
          if (uStackX_8 != (longlong *)0x0) {
            (**(code **)(*uStackX_8 + 0x38))();
          }
          if (plStack_b0 != (longlong *)0x0) {
            (**(code **)(*plStack_b0 + 0x38))();
          }
          if (bVar4) goto LAB_1805e309e;
        }
        uVar13 = (ulonglong)(iVar17 + 1U);
      } while ((int)(iVar17 + 1U) < iVar16);
    }
    if (cVar5 != '\0') {
      return;
    }
    *puStackX_10 = 1;
    *pbStackX_20 = bVar19;
    return;
  }
  if (fVar23 - *(float *)(plVar9 + 0x15) <= 2.0 != (bool)bVar19) {
    if (*(char *)(param_1 + 0x1144) == '\0') {
LAB_1805e3236:
      FUN_180487c70(param_1 + 0x48,2);
      if (*(int *)(param_1 + 0x88) < 2) {
        fVar21 = -NAN;
      }
      else {
        fVar21 = *(float *)(param_1 + 0x68);
      }
    }
    else {
      cVar5 = *(char *)(param_1 + 0x113c);
      if (cVar5 == '\0') {
        iVar16 = (int)(*(longlong *)(param_1 + 0x1120) - *(longlong *)(param_1 + 0x1118) >> 5);
      }
      else {
        iVar16 = *(int *)(param_1 + 0x1138);
      }
      if (cVar5 == '\0') {
        lVar12 = (longlong)(iVar16 + -1) * 0x20 + *(longlong *)(param_1 + 0x1118);
      }
      else {
        lVar12 = param_1 + 0x118 + (longlong)(iVar16 + -1) * 0x20;
      }
      if (*(longlong *)(lVar12 + 8) == 0) {
        if (cVar5 == '\0') {
          iVar16 = (int)(*(longlong *)(param_1 + 0x1120) - *(longlong *)(param_1 + 0x1118) >> 5);
        }
        else {
          iVar16 = *(int *)(param_1 + 0x1138);
        }
        if (cVar5 == '\0') {
          lVar12 = (longlong)(iVar16 + -1) * 0x20 + *(longlong *)(param_1 + 0x1118);
        }
        else {
          lVar12 = param_1 + 0x118 + (longlong)(iVar16 + -1) * 0x20;
        }
        if (*(longlong *)(lVar12 + 0x10) == 0) goto LAB_1805e3236;
        if (cVar5 == '\0') {
          iVar16 = (int)(*(longlong *)(param_1 + 0x1120) - *(longlong *)(param_1 + 0x1118) >> 5);
        }
        else {
          iVar16 = *(int *)(param_1 + 0x1138);
        }
        lVar12 = (longlong)(iVar16 + -1) * 0x20;
        if (cVar5 == '\0') {
          fVar21 = *(float *)(*(longlong *)(lVar12 + *(longlong *)(param_1 + 0x1118) + 0x10) + 0xf0)
          ;
        }
        else {
          fVar21 = *(float *)(*(longlong *)(lVar12 + param_1 + 0x128) + 0xf0);
        }
      }
      else {
        if (cVar5 == '\0') {
          iVar16 = (int)(*(longlong *)(param_1 + 0x1120) - *(longlong *)(param_1 + 0x1118) >> 5);
        }
        else {
          iVar16 = *(int *)(param_1 + 0x1138);
        }
        lVar12 = (longlong)(iVar16 + -1) * 0x20;
        if (cVar5 == '\0') {
          param_1 = lVar12 + *(longlong *)(param_1 + 0x1118);
        }
        else {
          param_1 = lVar12 + 0x118 + param_1;
        }
        fVar21 = (*(float *)(**(longlong **)(param_1 + 8) + 8) +
                 *(float *)((*(longlong **)(param_1 + 8))[1] + 8)) * 0.5;
      }
    }
    if (bVar19 == 0) {
      if (2.0 < fVar21 - fVar23) {
        bVar19 = 1;
      }
    }
    else if (fVar21 - fVar23 < 2.0) {
      bVar19 = 0;
    }
  }
  plVar9 = plStack_b8;
  fVar21 = 3.4028235e+38;
  uStackX_8 = (longlong *)CONCAT44(uStackX_8._4_4_,(int)plVar8[2]);
  uStack_c0 = 0;
  if (*(char *)(lVar14 + 0x87a93c) == '\0') {
    uVar7 = (uint)(*(longlong *)(lVar14 + 0x87a920) - *(longlong *)(lVar14 + 0x87a918) >> 3);
  }
  else {
    uVar7 = *(uint *)(lVar14 + 0x87a938);
  }
  if (0 < (int)uVar7) {
    plStack_b0 = (longlong *)(ulonglong)uVar7;
    uVar18 = uVar13;
    uVar20 = uVar13;
    do {
      lVar12 = lVar14 + 0x876958;
      if (*(char *)(lVar14 + 0x87a93c) == '\0') {
        lVar12 = *(longlong *)(lVar14 + 0x87a918);
      }
      uVar3 = *(ulonglong *)(uVar20 + lVar12);
      if (*(int *)(uVar3 + 0x568) == 1) {
        plVar8 = (longlong *)FUN_18058d890(plVar9,&plStack_a8);
        plVar10 = (longlong *)FUN_18058d890(uVar3,&plStack_b8);
        if ((((*plVar10 == *plVar8) && ((int)plVar9[2] != *(int *)(uVar3 + 0x10))) &&
            (cVar5 = func_0x000180522f60(uVar3), cVar5 != '\0')) &&
           (cVar5 = func_0x000180508390(plVar9,uVar3), cVar5 != '\0')) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (plStack_b8 != (longlong *)0x0) {
          (**(code **)(*plStack_b8 + 0x38))();
        }
        if (plStack_a8 != (longlong *)0x0) {
          (**(code **)(*plStack_a8 + 0x38))();
        }
        uVar13 = uStack_c0;
        if (bVar4) {
          if ((*(byte *)(uVar3 + 0x51c) & 1) == 0) {
LAB_1805e3461:
            if (*(int *)(uVar3 + 0x10) < (int)(float)uStackX_8) {
              if (bVar19 == 0) {
                pfVar1 = (float *)(*(longlong *)(uVar3 + 0x20) + 0x14);
                if (*pfVar1 <= fVar23 && fVar23 != *pfVar1) goto LAB_1805e348f;
              }
              else if (fVar23 < *(float *)(*(longlong *)(uVar3 + 0x20) + 0x14)) {
LAB_1805e348f:
                uStackX_8 = (longlong *)CONCAT44(uStackX_8._4_4_,*(int *)(uVar3 + 0x10));
                uVar13 = uVar3;
                uStack_c0 = uVar3;
              }
            }
          }
          else {
            fVar22 = *(float *)(*(longlong *)(uVar3 + 0x20) + 0x14) - fVar23;
            if (bVar19 == 0) {
              if (fVar22 <= 0.0) goto LAB_1805e3452;
            }
            else if (0.0 <= fVar22) {
LAB_1805e3452:
              if (ABS(fVar22) < fVar21) {
                uVar18 = uVar3;
                fVar21 = ABS(fVar22);
              }
              goto LAB_1805e3461;
            }
          }
        }
      }
      uVar20 = uVar20 + 8;
      plStack_b0 = (longlong *)((longlong)plStack_b0 - 1);
    } while (plStack_b0 != (longlong *)0x0);
    if (uVar18 == 0) {
      if (uVar13 != 0) {
        lVar14 = *(longlong *)(uVar13 + 0x20);
        fVar21 = *(float *)((longlong)plStack_a0 + 0xa4) - *(float *)(lVar14 + 0x10);
        fVar22 = *(float *)(plStack_a0 + 0x14) - *(float *)(lVar14 + 0xc);
        fVar23 = *(float *)(plStack_a0 + 0x15) - *(float *)(lVar14 + 0x14);
        *pbStackX_20 = fVar22 * fVar22 + fVar21 * fVar21 + fVar23 * fVar23 < 4.0;
        *pcStackX_18 = '\x01';
        *puStackX_10 = 1;
        return;
      }
    }
    else if (bVar19 != (*(byte *)(uVar18 + 0x51c) >> 1 & 1)) {
      if (bVar19 == 0) {
        if (*(float *)(*(longlong *)(uVar18 + 0x20) + 0x14) <= fVar23) goto LAB_1805e34ad;
      }
      else {
        pfVar1 = (float *)(*(longlong *)(uVar18 + 0x20) + 0x14);
        if (fVar23 < *pfVar1 || fVar23 == *pfVar1) {
LAB_1805e34ad:
          *pbStackX_20 = bVar19 == 0;
          *pcStackX_18 = '\x01';
          *puStackX_10 = 1;
          return;
        }
      }
    }
  }
  *pbStackX_20 = bVar19;
  *pcStackX_18 = '\x01';
  *puStackX_10 = 1;
  return;
LAB_1805e369f:
  if (cVar5 == '\0') {
    lVar11 = *(longlong *)(param_1 + 0x1118) + lVar12 * 0x20;
  }
  else {
    lVar11 = param_1 + 0x118 + lVar11;
  }
  *param_4 = 0.495 < *(float *)(*(longlong *)(lVar11 + 0x10) + 0xf0) - *(float *)(plVar8[4] + 0x14);
LAB_1805e36d9:
  *param_2 = 1;
  *param_3 = '\0';
  return;
}






