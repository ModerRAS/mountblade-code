#include "TaleWorlds.Native.Split.h"

// 99_part_13_part053.c - 8 个函数

// 函数: void FUN_1808cb0eb(void)
void FUN_1808cb0eb(void)

{
  return;
}



uint64_t FUN_1808cb100(longlong *param_1,int *param_2,uint64_t param_3)

{
  int iVar1;
  uint64_t uVar2;
  longlong lVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x160))();
  *param_2 = iVar1;
  if (iVar1 == 0) {
    if ((*(char *)((longlong)param_1 + 0x1dd) == '\0') || ((int)param_1[0x3a] == 2)) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_1[0x37];
    }
    uVar2 = FUN_1808ca8a0(param_1,lVar3,param_3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



longlong FUN_1808cb1c0(longlong param_1,int32_t *param_2,longlong *param_3)

{
  int iVar1;
  int32_t uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int32_t auStackX_8 [2];
  uint uStackX_20;
  int32_t uStackX_24;
  
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    *param_2 = 2;
    return 0;
  }
  if (*(int *)(param_1 + 0x130) == -1) {
    lVar3 = FUN_18073c730(*(longlong *)(param_1 + 0xf8),0,&uStackX_20,0);
    iVar1 = (int)lVar3;
    if ((iVar1 != 0x1e) && (iVar1 != 3)) {
      if (iVar1 != 0) {
        return lVar3;
      }
      uVar2 = (int32_t)
              CONCAT71((int7)((ulonglong)lVar3 >> 8),CONCAT44(uStackX_24,uStackX_20) == lVar3);
      goto LAB_1808cb21e;
    }
  }
  uVar2 = 0;
LAB_1808cb21e:
  *param_2 = uVar2;
  auStackX_8[0] = 0;
  lVar3 = FUN_18073f990(*(uint64_t *)(param_1 + 0xf8),auStackX_8);
  if (((uint)lVar3 < 0x1f) && ((0x40000009U >> ((uint)lVar3 & 0x1f) & 1) != 0)) {
    uStackX_20 = 0;
    lVar3 = FUN_1808cb8f0(param_1,*(int32_t *)(param_1 + 0x13c),auStackX_8[0],&uStackX_20);
    if ((int)lVar3 == 0) {
      uVar4 = *(ulonglong *)(param_1 + 0x30);
      if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x38)) {
        uVar4 = *(ulonglong *)(param_1 + 0x38);
      }
      *param_3 = uVar4 + uStackX_20;
      return 0;
    }
  }
  return lVar3;
}



int32_t FUN_1808cb2c0(longlong *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  float *pfVar10;
  float *pfVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  float fVar21;
  ulonglong uVar15;
  
  if (param_2 == (uint64_t *)0x0) {
    return 0x1c;
  }
  puVar9 = (int32_t *)FUN_180847820();
  uVar5 = puVar9[1];
  uVar6 = puVar9[2];
  uVar7 = puVar9[3];
  *(int32_t *)param_2 = *puVar9;
  *(int32_t *)((longlong)param_2 + 4) = uVar5;
  *(int32_t *)(param_2 + 1) = uVar6;
  *(int32_t *)((longlong)param_2 + 0xc) = uVar7;
  lVar4 = *param_1;
  puVar18 = (ulonglong *)(lVar4 + 0xd8);
  iVar16 = *(int *)(lVar4 + 0xe0);
  if (iVar16 == 0) {
    return 0x4a;
  }
  iVar2 = *(int *)(lVar4 + 0xec);
  if (iVar2 == 2) {
    return 0x1c;
  }
  iVar3 = *(int *)(lVar4 + 0xe8);
  if (iVar3 == 4) {
    return 0x1c;
  }
  if ((iVar2 != 1) && ((iVar2 != 0 || (*(int *)((longlong)param_1 + 0x1c) != -1)))) {
    puVar1 = (uint64_t *)(*puVar18 + (longlong)*(int *)((longlong)param_1 + 0x1c) * 0x14);
    uVar8 = puVar1[1];
    *param_2 = *puVar1;
    param_2[1] = uVar8;
    return 0;
  }
  uVar13 = 0;
  if (iVar3 == 0) {
LAB_1808cb51b:
    uVar17 = (longlong)(*(int *)((longlong)param_1 + 0x1c) + 1) % (longlong)iVar16 & 0xffffffff;
    goto LAB_1808cb526;
  }
  uVar17 = uVar13;
  if (iVar3 == 1) {
    uVar17 = 0;
    if (1 < iVar16) {
      fVar21 = 0.0;
      uVar12 = *puVar18;
      for (uVar17 = uVar12; (uVar12 <= uVar17 && (uVar17 < uVar12 + (longlong)iVar16 * 0x14));
          uVar17 = uVar17 + 0x14) {
        fVar21 = fVar21 + *(float *)(uVar17 + 0x10);
      }
      fVar21 = (float)func_0x0001808c1740(param_1[4],0,fVar21);
      uVar15 = *puVar18;
      uVar20 = uVar13;
      for (uVar12 = uVar15;
          (uVar17 = uVar13, uVar15 <= uVar12 &&
          (uVar12 < uVar15 + (longlong)*(int *)(lVar4 + 0xe0) * 0x14)); uVar12 = uVar12 + 0x14) {
        fVar21 = fVar21 - *(float *)(uVar12 + 0x10);
        uVar17 = uVar20;
        if (fVar21 <= 0.0) break;
        uVar20 = (ulonglong)((int)uVar20 + 1);
      }
      if (0.0 < fVar21) {
        return 0x1c;
      }
    }
    goto LAB_1808cb526;
  }
  if (iVar3 != 2) {
    if (iVar3 != 3) {
      return 0x1c;
    }
    goto LAB_1808cb51b;
  }
  uVar14 = *(uint *)(param_1 + 2);
  fVar21 = 0.0;
  if ((int)uVar14 < 1) {
LAB_1808cb3b1:
    if (0 < (int)uVar14) {
      lVar19 = param_1[1];
      uVar12 = uVar13;
      uVar15 = uVar13;
      uVar20 = uVar13;
      do {
        *(float *)(lVar19 + uVar12) =
             *(float *)(*puVar18 + 0x10 + uVar20) + *(float *)(lVar19 + uVar12);
        if (((int)uVar15 == *(int *)((longlong)param_1 + 0x1c)) && ((int)param_1[2] != 1)) {
          *(float *)(param_1[1] + uVar12) =
               *(float *)(param_1[1] + uVar12) - *(float *)(param_1 + 3);
        }
        lVar19 = param_1[1];
        if (0.0 < *(float *)(lVar19 + uVar12)) {
          fVar21 = fVar21 + *(float *)(lVar19 + uVar12);
        }
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
        uVar20 = uVar20 + 0x14;
        uVar12 = uVar12 + 4;
      } while ((int)uVar14 < (int)param_1[2]);
    }
  }
  else {
    pfVar10 = (float *)param_1[1];
    uVar12 = (ulonglong)uVar14;
    do {
      if (0.0 < *pfVar10) {
        fVar21 = fVar21 + *pfVar10;
      }
      pfVar10 = pfVar10 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (fVar21 == 0.0) goto LAB_1808cb3b1;
  }
  fVar21 = (float)func_0x0001808c1740(param_1[4],0,fVar21);
  if (0 < (int)param_1[2]) {
    pfVar10 = (float *)param_1[1];
    pfVar11 = pfVar10;
    do {
      iVar16 = (int)uVar13;
      if ((0.0 < *pfVar11) && (fVar21 = fVar21 - *pfVar11, fVar21 <= 0.0)) {
        pfVar10[iVar16] = pfVar10[iVar16] - *(float *)(param_1 + 3);
        uVar17 = uVar13;
        break;
      }
      uVar13 = (ulonglong)(iVar16 + 1U);
      pfVar11 = pfVar11 + 1;
    } while ((int)(iVar16 + 1U) < (int)param_1[2]);
  }
LAB_1808cb526:
  iVar16 = (int)uVar17;
  if (*(int *)(lVar4 + 0xe0) <= iVar16) {
    return 0x1c;
  }
  puVar1 = (uint64_t *)(*puVar18 + (longlong)iVar16 * 0x14);
  uVar8 = puVar1[1];
  *param_2 = *puVar1;
  param_2[1] = uVar8;
  *(int *)((longlong)param_1 + 0x1c) = iVar16;
  return 0;
}



uint64_t FUN_1808cb560(uint64_t *param_1,int32_t *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)*param_1)();
  *param_2 = *(int32_t *)(lVar1 + 0x38);
  return 0;
}



uint64_t FUN_1808cb5b0(longlong param_1,int32_t *param_2)

{
  int iVar1;
  int32_t auStackX_8 [2];
  longlong alStackX_10 [3];
  
  *param_2 = *(int32_t *)(*(longlong *)(param_1 + 0xf0) + 0x38);
  if ((((*(longlong *)(param_1 + 0xf8) != 0) &&
       (iVar1 = FUN_18073f8b0(*(longlong *)(param_1 + 0xf8),alStackX_10), iVar1 == 0)) &&
      (alStackX_10[0] != 0)) && (iVar1 = FUN_18073df50(alStackX_10[0],0,0,auStackX_8,0), iVar1 == 0)
     ) {
    switch(auStackX_8[0]) {
    case 1:
      *param_2 = 2;
      return 0;
    case 2:
      *param_2 = 3;
      return 0;
    default:
      *param_2 = 1;
      break;
    case 4:
      *param_2 = 4;
      return 0;
    case 5:
      *param_2 = 5;
      return 0;
    case 6:
      *param_2 = 6;
      return 0;
    case 8:
      *param_2 = 7;
      return 0;
    case 0xc:
      *param_2 = 8;
      return 0;
    }
  }
  return 0;
}



uint64_t * FUN_1808cb710(longlong param_1,uint64_t *param_2)

{
  *param_2 = 0;
  func_0x0001808601b0(*(uint64_t *)(param_1 + 0xf8),0,param_2);
  return param_2;
}



uint64_t FUN_1808cb760(longlong *param_1,int32_t *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  int aiStackX_8 [2];
  
  *param_2 = 0;
  iVar1 = *(int *)((longlong)param_1 + 0x15c);
  if (iVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x25);
    uVar3 = (uint)*(float *)(param_1 + 0x2b);
    if (uVar3 != 48000) {
      uVar6 = (uint)(((ulonglong)uVar6 * (ulonglong)uVar3) / 48000);
    }
    iVar2 = (int)param_1[0x26];
    if (iVar2 == 0) {
      if (iVar1 - 1U <= uVar6) {
        uVar6 = iVar1 - 1U;
      }
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x2c);
      if (uVar3 < uVar6) {
        uVar7 = (*(int *)((longlong)param_1 + 0x164) - uVar3) + 1;
        if ((iVar2 == -1) || (uVar4 = (iVar2 + 1) * uVar7 + uVar3, uVar6 <= uVar4)) {
          uVar6 = uVar3 + (uVar6 - uVar3) % uVar7;
        }
        else {
          uVar6 = (*(int *)((longlong)param_1 + 0x164) - uVar4) + uVar6;
          if (iVar1 - 1U <= uVar6) {
            uVar6 = iVar1 - 1U;
          }
        }
      }
    }
  }
  if (0.0 < *(float *)(param_1 + 0x2b)) {
    aiStackX_8[0] = 0;
    uVar5 = FUN_18073a840(param_1[0x14],aiStackX_8,0,0);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    fVar8 = (float)(**(code **)(*param_1 + 0xc0))(param_1);
    if (fVar8 < 0.0) {
      return 0x1c;
    }
    if (fVar8 != 0.0) {
      if (param_3 == '\0') {
        uVar6 = *(uint *)(param_1 + 0x2c);
      }
      *param_2 = (int)(longlong)
                      ((float)((*(int *)((longlong)param_1 + 0x164) - uVar6) + 1) * (1.0 / fVar8) *
                      ((float)aiStackX_8[0] / *(float *)(param_1 + 0x2b)));
    }
  }
  return 0;
}



uint64_t FUN_1808cb8f0(longlong *param_1,int param_2,int param_3,int *param_4)

{
  uint64_t uVar1;
  int iVar2;
  float fVar3;
  int aiStackX_8 [2];
  
  iVar2 = 0;
  if (0.0 < *(float *)(param_1 + 0x2b)) {
    aiStackX_8[0] = 0;
    uVar1 = FUN_18073a840(param_1[0x14],aiStackX_8,0,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    fVar3 = (float)(**(code **)(*param_1 + 0xc0))(param_1);
    if (fVar3 < 0.0) {
      return 0x1c;
    }
    if (fVar3 != 0.0) {
      if (param_3 != -1) {
        iVar2 = param_3;
      }
      iVar2 = (int)(longlong)
                   (((float)(uint)((int)param_1[0x2c] + -1 +
                                  ((((iVar2 + 1) *
                                     ((*(int *)((longlong)param_1 + 0x164) - (int)param_1[0x2c]) + 1
                                     ) + *(int *)((longlong)param_1 + 0x15c)) -
                                   *(int *)((longlong)param_1 + 0x164)) - param_2)) / fVar3) *
                   ((float)aiStackX_8[0] / *(float *)(param_1 + 0x2b)));
    }
  }
  *param_4 = iVar2;
  return 0;
}



uint64_t FUN_1808cb9f0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_1 + 0xf8);
  if (lVar3 == 0) {
    return 0;
  }
  lVar3 = (**(code **)(*(longlong *)(lVar3 + 8) + 0x38))(lVar3 + 8);
  plVar5 = (longlong *)0x0;
  plVar4 = (longlong *)(*(longlong *)(lVar3 + 0x20) + -8);
  if (*(longlong *)(lVar3 + 0x20) == 0) {
    plVar4 = plVar5;
  }
  plVar1 = plVar5;
  if (plVar4 != (longlong *)0x0) {
    plVar1 = plVar4 + 1;
  }
  while( true ) {
    if (plVar1 == (longlong *)(lVar3 + 0x20)) {
      return 0;
    }
    plVar4 = plVar1 + -1;
    if (plVar1 == (longlong *)0x0) {
      plVar4 = plVar5;
    }
    cVar2 = (**(code **)(*plVar4 + 0x18))();
    if (cVar2 != '\0') break;
    if (plVar1 == (longlong *)(lVar3 + 0x20)) {
      return 0;
    }
    plVar4 = (longlong *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      plVar4 = plVar5;
    }
    plVar1 = plVar5;
    if (plVar4 != (longlong *)0x0) {
      plVar1 = plVar4 + 1;
    }
  }
  return 1;
}



ulonglong FUN_1808cba20(longlong param_1)

{
  ulonglong in_RAX;
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (lVar1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar1 = (*(code *)**(uint64_t **)(lVar1 + 8))(lVar1 + 8);
  return (ulonglong)(*(uint *)(lVar1 + 0xf8) >> 4) & 0xffffffffffffff01;
}



uint64_t FUN_1808cba60(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint64_t uVar4;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  lVar3 = (**(code **)(*param_1 + 0x30))();
  if ((lVar3 == 0) ||
     (lVar3 = (**(code **)(*param_1 + 0x30))(param_1), *(longlong *)(lVar3 + 0x18) == 0)) {
    return 0x1c;
  }
  plVar1 = param_1 + 0x12;
  *(longlong *)param_1[0x13] = *plVar1;
  *(longlong *)(*plVar1 + 8) = param_1[0x13];
  param_1[0x13] = (longlong)plVar1;
  *plVar1 = (longlong)plVar1;
  lVar3 = (**(code **)(*param_1 + 0x30))(param_1);
  uVar4 = *(uint64_t *)(lVar3 + 0x18);
  lVar3 = (**(code **)*param_1)(param_1);
  uStack_18 = *(int32_t *)(lVar3 + 0x70);
  uStack_14 = *(int32_t *)(lVar3 + 0x74);
  uStack_10 = *(int32_t *)(lVar3 + 0x78);
  uStack_c = *(int32_t *)(lVar3 + 0x7c);
  lVar3 = FUN_18085fdf0(uVar4,&uStack_18);
  if (lVar3 == 0) {
    uVar4 = FUN_1808cd9e0(param_1);
    iVar2 = (int)uVar4;
  }
  else {
    uVar4 = func_0x0001808d5d40(lVar3,param_1 + 0x11);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar4 = (**(code **)param_1[0x11])
                      (param_1 + 0x11,lVar3,*(int32_t *)(lVar3 + 0x28),
                       *(int32_t *)(lVar3 + 0x28));
    iVar2 = (int)uVar4;
  }
  if (iVar2 != 0) {
    return uVar4;
  }
  return 0;
}



uint64_t FUN_1808cba93(uint64_t param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong *unaff_RDI;
  int32_t uVar4;
  int32_t uStack000000000000002c;
  
  *(longlong *)param_2[1] = *param_2;
  *(longlong *)(*param_2 + 8) = param_2[1];
  param_2[1] = (longlong)param_2;
  *param_2 = (longlong)param_2;
  lVar2 = (**(code **)(*unaff_RDI + 0x30))();
  uVar3 = *(uint64_t *)(lVar2 + 0x18);
  lVar2 = (**(code **)*unaff_RDI)();
  uVar4 = *(int32_t *)(lVar2 + 0x70);
  uStack000000000000002c = *(int32_t *)(lVar2 + 0x7c);
  lVar2 = FUN_18085fdf0(uVar3,&stack0x00000020);
  if (lVar2 == 0) {
    uVar3 = FUN_1808cd9e0();
    iVar1 = (int)uVar3;
  }
  else {
    uVar3 = func_0x0001808d5d40(lVar2,unaff_RDI + 0x11);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = (**(code **)unaff_RDI[0x11])
                      (unaff_RDI + 0x11,lVar2,*(int32_t *)(lVar2 + 0x28),
                       *(int32_t *)(lVar2 + 0x28),uVar4);
    iVar1 = (int)uVar3;
  }
  if (iVar1 != 0) {
    return uVar3;
  }
  return 0;
}



uint64_t FUN_1808cbb24(void)

{
  uint64_t uVar1;
  
  uVar1 = FUN_1808cd9e0();
  if ((int)uVar1 == 0) {
    return 0;
  }
  return uVar1;
}



uint64_t FUN_1808cbb3d(void)

{
  return 0x1c;
}



uint64_t FUN_1808cbb50(longlong param_1,uint64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = FUN_1808cbf60();
  if ((int)uVar1 == 0) {
    FUN_1808c8f30(param_2,param_1 + 0x88);
    FUN_1808b2f30(param_1,2);
    uVar1 = 0;
  }
  return uVar1;
}






// 函数: void FUN_1808cbba0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1808cbba0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t unaff_RDI;
  
  FUN_1808c8f30(param_2,param_1 + 0x11);
  iVar2 = FUN_1808b2950();
  if (iVar2 != 0) {
    return;
  }
  uVar3 = (**(code **)*param_1)(param_1);
  cVar1 = func_0x0001808c57f0(param_2,uVar3,param_3,param_4,unaff_RDI);
  if (cVar1 != '\0') {
    iVar2 = FUN_1808b2f30(param_1,0);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_1808b2f30(param_1,4);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_1808b2f30(param_1,1);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_1808b2f30(param_1,9);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_1808b2f30(param_1,0xb);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_1808b2f30(param_1,8);
    if (iVar2 != 0) {
      return;
    }
  }
  FUN_1808d3ee0(param_1 + 0xb,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808cbbe0(longlong param_1,uint64_t *param_2)
void FUN_1808cbbe0(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  uint64_t *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint64_t *puVar9;
  int8_t auStack_78 [32];
  int8_t auStack_58 [40];
  ulonglong uStack_30;
  
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if (lVar1 != 0) {
    lVar5 = (**(code **)(*(longlong *)*param_2 + 0x2e8))((longlong *)*param_2,lVar1 + 0x10,1);
    if (lVar5 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(lVar1 + 0x10,auStack_58);
    }
    *(longlong *)(param_1 + 0xe8) = lVar5;
  }
  iVar4 = FUN_1808cc510(param_1,param_2);
  if ((iVar4 == 0) && (lVar5 = *(longlong *)(param_1 + 0xe8), lVar5 != 0)) {
    plVar8 = param_2 + 0x56;
    if (param_2 == (uint64_t *)0xffffffffffffff08) {
      plVar8 = (longlong *)0x0;
    }
    if (plVar8 != (longlong *)0x0) {
      if (((*(int *)((longlong)plVar8 + 0x24) != 0) && ((int)plVar8[1] != 0)) &&
         (iVar4 = *(int *)(*plVar8 +
                          (longlong)
                          (int)((*(uint *)(lVar5 + 0x1c) ^ *(uint *)(lVar5 + 0x18) ^
                                 *(uint *)(lVar5 + 0x14) ^ *(uint *)(lVar5 + 0x10)) &
                               (int)plVar8[1] - 1U) * 4), iVar4 != -1)) {
        lVar7 = plVar8[2];
        do {
          lVar6 = (longlong)iVar4;
          if ((*(longlong *)(lVar7 + lVar6 * 0x18) == *(longlong *)(lVar5 + 0x10)) &&
             (*(longlong *)(lVar7 + 8 + lVar6 * 0x18) == *(longlong *)(lVar5 + 0x18)))
          goto LAB_1808cbcfb;
          iVar4 = *(int *)(lVar7 + 0x10 + lVar6 * 0x18);
        } while (iVar4 != -1);
      }
      iVar4 = -1;
LAB_1808cbcfb:
      if (iVar4 != -1) {
        if ((*(longlong *)(lVar1 + 0xd8) != *(longlong *)(lVar5 + 0xd8)) ||
           (*(longlong *)(lVar1 + 0xe0) != *(longlong *)(lVar5 + 0xe0))) {
          plVar8 = (longlong *)(param_1 + 0xf8);
          if (*plVar8 != 0) {
            *(uint64_t *)(*plVar8 + 0x350) = 0;
            iVar4 = FUN_180863820(*plVar8,2);
            if ((iVar4 != 0) || (iVar4 = FUN_18085fb30(*plVar8), iVar4 != 0)) goto FUN_1808cbf42;
          }
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x120) + 0x50);
          if (lVar5 == 0) {
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x78);
          }
          iVar4 = FUN_1808bdc00(*(uint64_t *)(param_1 + 0x108),
                                *(longlong *)(param_1 + 0xe8) + 0xd8,*(uint64_t *)(param_1 + 0xf0)
                                ,plVar8);
          if ((((iVar4 == 0) && (*plVar8 != 0)) &&
              (iVar4 = FUN_18073d8a0(*(uint64_t *)(*(longlong *)(*plVar8 + 0x2b0) + 0x78),1),
              iVar4 == 0)) &&
             (iVar4 = FUN_18073f130(lVar5,*(uint64_t *)(*(longlong *)(*plVar8 + 0x2b0) + 0x78),1,
                                    param_1 + 0x128), iVar4 == 0)) {
            FUN_18085ff30(*plVar8);
          }
        }
        iVar4 = FUN_1808b2f30(param_1,3);
        if (iVar4 == 0) {
          puVar9 = (uint64_t *)(*(longlong *)(param_1 + 0xe8) + 0xe8);
          for (puVar2 = (uint64_t *)*puVar9; puVar2 != puVar9; puVar2 = (uint64_t *)*puVar2) {
            cVar3 = func_0x0001808b0620(*(uint64_t *)(param_1 + 0xe8),
                                        *(int32_t *)((longlong)puVar2 + 0x24));
            lVar5 = func_0x00018085fd70(*(uint64_t *)(param_1 + 0xf8),puVar2 + 2);
            if ((lVar5 == 0) || ((*(longlong *)(lVar5 + 0x40) != 0) == (cVar3 == '\0'))) {
              iVar4 = FUN_1808b2f30(param_1,*(int32_t *)((longlong)puVar2 + 0x24));
LAB_1808cbeb9:
              if (iVar4 != 0) goto FUN_1808cbf42;
            }
            else {
              if (cVar3 != '\0') {
                iVar4 = FUN_1808d5e40(lVar5);
                if (iVar4 == 0) {
                  iVar4 = FUN_1808b21b0(param_1,*(int32_t *)((longlong)puVar2 + 0x24));
                  goto LAB_1808cbeb9;
                }
                goto FUN_1808cbf42;
              }
              lVar7 = func_0x00018085fd70(*(uint64_t *)(param_1 + 0xf0),puVar2 + 2);
              if (lVar7 != 0) {
                iVar4 = FUN_1808d71e0(lVar5,lVar7);
                goto LAB_1808cbeb9;
              }
            }
            if (puVar2 == puVar9) break;
          }
          if ((*(longlong *)(lVar1 + 0xd8) != *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0xd8))
             || (*(longlong *)(lVar1 + 0xe0) != *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0xe0))
             ) {
            FUN_1808c9e60(param_1);
            iVar4 = FUN_18073d8a0(*(uint64_t *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x2b0) + 0x78),0);
            if (iVar4 == 0) {
              FUN_180863420(*(uint64_t *)(param_1 + 0xf8));
            }
          }
        }
      }
    }
  }
FUN_1808cbf42:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_78);
}






// 函数: void FUN_1808cbc56(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_1808cbc56(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  uint64_t *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RBX;
  longlong unaff_RDI;
  longlong *plVar6;
  longlong unaff_R13;
  uint64_t *puVar7;
  ulonglong in_stack_00000048;
  
  if (param_3 != 0) {
    plVar6 = (longlong *)(unaff_RBX + 0x2b0);
    if (unaff_RBX == -0xf8) {
      plVar6 = (longlong *)0x0;
    }
    if (plVar6 != (longlong *)0x0) {
      if (((*(int *)((longlong)plVar6 + 0x24) != 0) && ((int)plVar6[1] != 0)) &&
         (iVar3 = *(int *)(*plVar6 +
                          (longlong)
                          (int)((*(uint *)(param_3 + 0x1c) ^ *(uint *)(param_3 + 0x18) ^
                                 *(uint *)(param_3 + 0x14) ^ *(uint *)(param_3 + 0x10)) &
                               (int)plVar6[1] - 1U) * 4), iVar3 != -1)) {
        lVar5 = plVar6[2];
        do {
          lVar4 = (longlong)iVar3;
          if ((*(longlong *)(lVar5 + lVar4 * 0x18) == *(longlong *)(param_3 + 0x10)) &&
             (*(longlong *)(lVar5 + 8 + lVar4 * 0x18) == *(longlong *)(param_3 + 0x18)))
          goto LAB_1808cbcfb;
          iVar3 = *(int *)(lVar5 + 0x10 + lVar4 * 0x18);
        } while (iVar3 != -1);
      }
      iVar3 = -1;
LAB_1808cbcfb:
      if (iVar3 != -1) {
        if ((*(longlong *)(unaff_R13 + 0xd8) != *(longlong *)(param_3 + 0xd8)) ||
           (*(longlong *)(unaff_R13 + 0xe0) != *(longlong *)(param_3 + 0xe0))) {
          plVar6 = (longlong *)(unaff_RDI + 0xf8);
          if (*plVar6 != 0) {
            *(uint64_t *)(*plVar6 + 0x350) = 0;
            iVar3 = FUN_180863820(*plVar6,2);
            if ((iVar3 != 0) || (iVar3 = FUN_18085fb30(*plVar6), iVar3 != 0)) goto LAB_1808cbf32;
          }
          lVar5 = *(longlong *)(*(longlong *)(unaff_RDI + 0x120) + 0x50);
          if (lVar5 == 0) {
            lVar5 = *(longlong *)(*(longlong *)(unaff_RDI + 0x100) + 0x78);
          }
          iVar3 = FUN_1808bdc00(*(uint64_t *)(unaff_RDI + 0x108),
                                *(longlong *)(unaff_RDI + 0xe8) + 0xd8,
                                *(uint64_t *)(unaff_RDI + 0xf0),plVar6);
          if ((((iVar3 == 0) && (*plVar6 != 0)) &&
              (iVar3 = FUN_18073d8a0(*(uint64_t *)(*(longlong *)(*plVar6 + 0x2b0) + 0x78),1),
              iVar3 == 0)) &&
             (iVar3 = FUN_18073f130(lVar5,*(uint64_t *)(*(longlong *)(*plVar6 + 0x2b0) + 0x78),1,
                                    unaff_RDI + 0x128), iVar3 == 0)) {
            FUN_18085ff30(*plVar6);
          }
        }
        iVar3 = FUN_1808b2f30();
        if (iVar3 == 0) {
          puVar7 = (uint64_t *)(*(longlong *)(unaff_RDI + 0xe8) + 0xe8);
          for (puVar1 = (uint64_t *)*puVar7; puVar1 != puVar7; puVar1 = (uint64_t *)*puVar1) {
            cVar2 = func_0x0001808b0620(*(uint64_t *)(unaff_RDI + 0xe8),
                                        *(int32_t *)((longlong)puVar1 + 0x24));
            lVar5 = func_0x00018085fd70(*(uint64_t *)(unaff_RDI + 0xf8),puVar1 + 2);
            if ((lVar5 == 0) || ((*(longlong *)(lVar5 + 0x40) != 0) == (cVar2 == '\0'))) {
              iVar3 = FUN_1808b2f30();
LAB_1808cbeb9:
              if (iVar3 != 0) goto LAB_1808cbf32;
            }
            else {
              if (cVar2 != '\0') {
                iVar3 = FUN_1808d5e40(lVar5);
                if (iVar3 == 0) {
                  iVar3 = FUN_1808b21b0();
                  goto LAB_1808cbeb9;
                }
                goto LAB_1808cbf32;
              }
              lVar4 = func_0x00018085fd70(*(uint64_t *)(unaff_RDI + 0xf0),puVar1 + 2);
              if (lVar4 != 0) {
                iVar3 = FUN_1808d71e0(lVar5,lVar4);
                goto LAB_1808cbeb9;
              }
            }
            if (puVar1 == puVar7) break;
          }
          if ((*(longlong *)(unaff_R13 + 0xd8) !=
               *(longlong *)(*(longlong *)(unaff_RDI + 0xe8) + 0xd8)) ||
             (*(longlong *)(unaff_R13 + 0xe0) !=
              *(longlong *)(*(longlong *)(unaff_RDI + 0xe8) + 0xe0))) {
            FUN_1808c9e60();
            iVar3 = FUN_18073d8a0(*(uint64_t *)
                                   (*(longlong *)(*(longlong *)(unaff_RDI + 0xf8) + 0x2b0) + 0x78),0
                                 );
            if (iVar3 == 0) {
              FUN_180863420(*(uint64_t *)(unaff_RDI + 0xf8));
            }
          }
        }
      }
    }
  }
LAB_1808cbf32:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808cbf42(void)
void FUN_1808cbf42(void)

{
  ulonglong in_stack_00000048;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808cbf60(uint64_t *param_1,uint64_t param_2)
void FUN_1808cbf60(uint64_t *param_1,uint64_t param_2)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  
  iVar2 = FUN_1808b2950();
  if (iVar2 != 0) {
    return;
  }
  uVar3 = (**(code **)*param_1)(param_1);
  cVar1 = func_0x0001808c57f0(param_2,uVar3);
  if (cVar1 != '\0') {
    iVar2 = FUN_1808b2f30(param_1,0);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_1808b2f30(param_1,4);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_1808b2f30(param_1,1);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_1808b2f30(param_1,9);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_1808b2f30(param_1,0xb);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_1808b2f30(param_1,8);
    if (iVar2 != 0) {
      return;
    }
  }
  FUN_1808d3ee0(param_1 + 0xb,param_2);
  return;
}



uint64_t FUN_1808cc000(longlong param_1,uint64_t param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint64_t uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)(param_1 + 8);
  FUN_1808c8f30(param_2,param_1 + 0x68);
  plVar5 = (longlong *)0x0;
  plVar4 = (longlong *)(*plVar1 + -0x20);
  if (*plVar1 == 0) {
    plVar4 = plVar5;
  }
  plVar2 = plVar5;
  if (plVar4 != (longlong *)0x0) {
    plVar2 = plVar4 + 4;
  }
  while( true ) {
    if (plVar2 == plVar1) {
      return 0;
    }
    plVar4 = plVar2 + -4;
    if (plVar2 == (longlong *)0x0) {
      plVar4 = plVar5;
    }
    uVar3 = (**(code **)(*plVar4 + 0xb0))(plVar4,param_2);
    if ((int)uVar3 != 0) break;
    if (plVar2 == plVar1) {
      return 0;
    }
    plVar4 = (longlong *)(*plVar2 + -0x20);
    if (*plVar2 == 0) {
      plVar4 = plVar5;
    }
    plVar2 = plVar5;
    if (plVar4 != (longlong *)0x0) {
      plVar2 = plVar4 + 4;
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808cc0b0(longlong param_1,uint64_t *param_2)
void FUN_1808cc0b0(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int8_t auStack_68 [32];
  int8_t auStack_48 [40];
  ulonglong uStack_20;
  
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x218);
  if (lVar1 != 0) {
    lVar3 = (**(code **)(*(longlong *)*param_2 + 0x2c0))((longlong *)*param_2,lVar1 + 0x10,1);
    if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(lVar1 + 0x10,auStack_48);
    }
    *(longlong *)(param_1 + 0x218) = lVar3;
  }
  iVar2 = FUN_1808ccd40(param_1,param_2,lVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_1808b2f30(param_1,5);
    if (iVar2 == 0) {
      iVar2 = FUN_1808b2f30(param_1,6);
      if (iVar2 == 0) {
        FUN_1808b2f30(param_1,7);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_68);
}






// 函数: void FUN_1808cc0c7(longlong param_1,uint64_t *param_2)
void FUN_1808cc0c7(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  longlong in_R11;
  uint64_t unaff_R14;
  int8_t auStackX_20 [8];
  ulonglong in_stack_00000048;
  
  *(uint64_t *)(in_R11 + -0x10) = unaff_RDI;
  lVar1 = *(longlong *)(param_1 + 0x218);
  *(uint64_t *)(in_R11 + -0x18) = unaff_R14;
  if (lVar1 != 0) {
    plVar2 = (longlong *)*param_2;
    *(uint64_t *)(in_R11 + 0x18) = unaff_RBP;
    *(uint64_t *)(in_R11 + 0x20) = unaff_RSI;
    lVar4 = (**(code **)(*plVar2 + 0x2c0))(plVar2,lVar1 + 0x10,1);
    if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(lVar1 + 0x10,auStackX_20);
    }
    *(longlong *)(param_1 + 0x218) = lVar4;
  }
  iVar3 = FUN_1808ccd40(param_1,param_2,lVar1);
  if (iVar3 == 0) {
    iVar3 = FUN_1808b2f30(param_1,5);
    if (iVar3 == 0) {
      iVar3 = FUN_1808b2f30(param_1,6);
      if (iVar3 == 0) {
        FUN_1808b2f30(param_1,7);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
}






