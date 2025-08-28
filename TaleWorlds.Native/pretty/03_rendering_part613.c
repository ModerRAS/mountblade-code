#include "TaleWorlds.Native.Split.h"

// 03_rendering_part613.c - 4 个函数

// 函数: void FUN_180603f3b(undefined8 param_1,undefined8 param_2,undefined4 param_3)
void FUN_180603f3b(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *in_R8;
  undefined4 *unaff_R14;
  undefined4 unaff_XMM7_Da;
  
  *unaff_R14 = unaff_XMM7_Da;
  *in_R8 = param_3;
  return;
}



undefined8 FUN_1806043c0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(**(longlong **)(param_1 + 0x6e0) + 0x8f8) + 0x9e8);
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x30))) {
    uVar2 = *(ulonglong *)
             ((longlong)*(int *)(lVar1 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar1 + 0xd0));
    if ((((uVar2 >> 9 & 1) == 0) || (0 < *(short *)(lVar1 + 8))) && ((uVar2 >> 1 & 1) != 0)) {
      uVar3 = FUN_1805bd630(*(longlong **)(param_1 + 0x6e0),lVar1,(longlong)*(int *)(lVar1 + 0xf0),
                            lVar1,0,0);
      return uVar3;
    }
  }
  return 0;
}



undefined8
FUN_180604440(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,float *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  float *pfVar14;
  char cVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack_68;
  float fStack_64;
  
  pfVar14 = param_5;
  lVar9 = **(longlong **)(param_1 + 0x20);
  fVar16 = *param_5;
  lVar2 = *(longlong *)(lVar9 + 0x8d8);
  if ((fVar16 == 0.0) && (param_5[1] == 0.0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  lVar3 = *(longlong *)(lVar9 + 0x9d8);
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0x130) == param_2)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x1144) != '\0') {
    param_5 = (float *)0x0;
    if (*(int *)(param_1 + 0x14) == 1) {
      if (-1 < *(int *)(param_1 + 0x1164)) {
        param_5 = *(float **)((longlong)*(int *)(param_1 + 0x1164) * 0xa60 + 0x3a78 + lVar2);
      }
    }
    else {
      param_5 = (float *)FUN_180488690(param_1 + 0x48);
    }
    cVar15 = *(char *)(param_1 + 0x113c);
    lVar1 = param_1 + 0x118;
    if (cVar15 == '\0') {
      iVar10 = (int)(*(longlong *)(param_1 + 0x1120) - *(longlong *)(param_1 + 0x1118) >> 5);
    }
    else {
      iVar10 = *(int *)(param_1 + 0x1138);
    }
    lVar7 = (longlong)*(int *)(param_1 + 0x1140);
    if (*(int *)(param_1 + 0x1140) < iVar10) {
      lVar8 = lVar1;
      if (cVar15 == '\0') {
        lVar8 = *(longlong *)(param_1 + 0x1118);
      }
      pfVar12 = (float *)(*(longlong *)(lVar9 + 0x20) + 0xc);
      fStack_64 = *(float *)(lVar8 + (lVar7 * 8 + 1) * 4) -
                  *(float *)(*(longlong *)(lVar9 + 0x20) + 0x10);
      fStack_68 = *(float *)(lVar8 + lVar7 * 0x20) - *pfVar12;
      if ((!bVar5) || (0.0 < fStack_64 * pfVar14[1] + fStack_68 * *pfVar14)) {
        lVar9 = lVar1;
        if (cVar15 == '\0') {
          lVar9 = *(longlong *)(param_1 + 0x1118);
        }
        lVar8 = (longlong)param_5;
        if (*(longlong *)(lVar9 + (lVar7 * 8 + 4) * 4) != 0) {
          lVar9 = lVar1;
          if (cVar15 == '\0') {
            lVar9 = *(longlong *)(param_1 + 0x1118);
          }
          lVar8 = *(longlong *)(lVar9 + (lVar7 * 8 + 4) * 4);
        }
        if ((lVar3 != 0) && (lVar8 != 0)) {
          if (lVar3 == lVar8) {
            cVar15 = *(int *)(lVar3 + 0x130) == param_2;
          }
          else {
            fVar16 = fStack_68 * fStack_68 + fStack_64 * fStack_64;
            if (fVar16 < 1e-05) goto LAB_180604674;
            cVar15 = FUN_180605010(*(longlong *)(lVar2 + 0x18) + 0x2a68,lVar3,fVar16,pfVar12,
                                   &fStack_68,0,param_2);
          }
          if (cVar15 != '\0') {
            return 1;
          }
        }
      }
    }
LAB_180604674:
    iVar10 = *(int *)(param_1 + 0x1140);
    iVar4 = iVar10;
    do {
      iVar4 = iVar4 + 1;
      cVar15 = *(char *)(param_1 + 0x113c);
      if (cVar15 == '\0') {
        iVar6 = (int)(*(longlong *)(param_1 + 0x1120) - *(longlong *)(param_1 + 0x1118) >> 5);
      }
      else {
        iVar6 = *(int *)(param_1 + 0x1138);
      }
      if (iVar6 + -1 <= iVar10) {
        return 0;
      }
      lVar7 = (longlong)iVar4;
      lVar9 = lVar1;
      if (cVar15 == '\0') {
        lVar9 = *(longlong *)(param_1 + 0x1118);
      }
      if (*(longlong *)(lVar9 + (lVar7 * 8 + 4) * 4) == lVar3) {
        return 0;
      }
      lVar9 = lVar1;
      if (cVar15 == '\0') {
        lVar9 = *(longlong *)(param_1 + 0x1118);
      }
      lVar13 = (longlong)iVar10;
      lVar8 = lVar1;
      if (cVar15 == '\0') {
        lVar8 = *(longlong *)(param_1 + 0x1118);
      }
      fStack_64 = *(float *)(lVar9 + (lVar7 * 8 + 1) * 4) - *(float *)(lVar8 + (lVar13 * 8 + 1) * 4)
      ;
      fStack_68 = *(float *)(lVar9 + lVar7 * 0x20) - *(float *)(lVar8 + lVar13 * 0x20);
      if ((!bVar5) || (0.0 < fStack_64 * pfVar14[1] + fStack_68 * *pfVar14)) {
        lVar9 = lVar1;
        if (cVar15 == '\0') {
          lVar9 = *(longlong *)(param_1 + 0x1118);
        }
        lVar8 = lVar1;
        if (cVar15 == '\0') {
          lVar8 = *(longlong *)(param_1 + 0x1118);
        }
        lVar11 = (longlong)param_5;
        if (*(longlong *)(lVar8 + (lVar7 * 8 + 4) * 4) != 0) {
          lVar8 = lVar1;
          if (cVar15 == '\0') {
            lVar8 = *(longlong *)(param_1 + 0x1118);
          }
          lVar11 = *(longlong *)(lVar8 + (lVar7 * 8 + 4) * 4);
        }
        lVar7 = lVar1;
        if (cVar15 == '\0') {
          lVar7 = *(longlong *)(param_1 + 0x1118);
        }
        lVar7 = *(longlong *)(lVar7 + (lVar13 * 8 + 4) * 4);
        if ((lVar7 != 0) && (lVar11 != 0)) {
          if (lVar7 == lVar11) {
            cVar15 = *(int *)(lVar7 + 0x130) == param_2;
          }
          else {
            fVar16 = fStack_68 * fStack_68 + fStack_64 * fStack_64;
            if (fVar16 < 1e-05) goto LAB_1806047f8;
            cVar15 = FUN_180605010(*(longlong *)(lVar2 + 0x18) + 0x2a68,lVar7,fVar16,
                                   lVar9 + lVar13 * 0x20,&fStack_68,0,param_2);
          }
          if (cVar15 != '\0') {
            return 1;
          }
        }
      }
LAB_1806047f8:
      iVar10 = iVar10 + 1;
    } while( true );
  }
  if (*(int *)(param_1 + 0x14) == 1) {
    if (*(int *)(param_1 + 0x1164) < 0) {
      return 0;
    }
    pfVar14 = (float *)(*(longlong *)(lVar9 + 0x20) + 0xc);
    lVar7 = (longlong)*(int *)(param_1 + 0x1164) * 0xa60;
    lVar1 = *(longlong *)(lVar7 + 0x30c0 + lVar2);
    fVar18 = *(float *)(*(longlong *)(lVar9 + 0x20) + 0x10) - *(float *)(lVar1 + 0x10);
    fVar17 = *pfVar14 - *(float *)(lVar1 + 0xc);
    if ((bVar5) && (fVar18 * param_5[1] + fVar17 * fVar16 <= 0.0)) {
      return 0;
    }
    if (lVar3 == 0) {
      return 0;
    }
    lVar9 = *(longlong *)(lVar7 + 0x3a78 + lVar2);
    if (lVar9 == 0) {
      return 0;
    }
    if (lVar3 == lVar9) {
      cVar15 = *(int *)(lVar3 + 0x130) == param_2;
      goto LAB_1806049c7;
    }
    if (fVar17 * fVar17 + fVar18 * fVar18 < 1e-05) {
      return 0;
    }
    lVar2 = *(longlong *)(lVar2 + 0x18);
    param_5._0_4_ = fVar17;
    param_5._4_4_ = fVar18;
  }
  else {
    pfVar14 = (float *)(*(longlong *)(lVar9 + 0x20) + 0xc);
    fVar17 = *(float *)(param_1 + 100) - *(float *)(*(longlong *)(lVar9 + 0x20) + 0x10);
    fVar18 = *(float *)(param_1 + 0x60) - *pfVar14;
    if ((bVar5) && (fVar17 * param_5[1] + fVar18 * fVar16 <= 0.0)) {
      return 0;
    }
    lVar2 = *(longlong *)(lVar2 + 0x18);
    param_5._0_4_ = fVar18;
    param_5._4_4_ = fVar17;
    lVar9 = FUN_180488690(param_1 + 0x48);
    if (lVar3 == 0) {
      return 0;
    }
    if (lVar9 == 0) {
      return 0;
    }
    if (lVar3 == lVar9) {
      cVar15 = *(int *)(lVar3 + 0x130) == param_2;
      goto LAB_1806049c7;
    }
    if (param_5._4_4_ * param_5._4_4_ + param_5._0_4_ * param_5._0_4_ < 1e-05) {
      return 0;
    }
  }
  cVar15 = FUN_180605010(lVar2 + 0x2a68,lVar3,lVar9,pfVar14,&param_5,0,param_2);
LAB_1806049c7:
  if (cVar15 != '\0') {
    return 1;
  }
  return 0;
}



undefined8 FUN_180604a00(longlong param_1,int param_2,int param_3,int param_4,float *param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  float *pfVar13;
  longlong lVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar19;
  longlong lStack_78;
  float fStack_70;
  float fStack_6c;
  longlong lStack_68;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  lVar7 = **(longlong **)(param_1 + 0x20);
  fVar18 = *param_5;
  lStack_68 = *(longlong *)(lVar7 + 0x8d8);
  if ((fVar18 == 0.0) && (param_5[1] == 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  lVar2 = *(longlong *)(lVar7 + 0x9d8);
  if ((lVar2 == 0) ||
     (((iVar10 = *(int *)(lVar2 + 0x130), iVar10 != param_2 && (iVar10 != param_3)) &&
      (iVar10 != param_4)))) {
    if (*(char *)(param_1 + 0x1144) != '\0') {
      lStack_78 = 0;
      if (*(int *)(param_1 + 0x14) == 1) {
        pfVar15 = param_5;
        if (-1 < *(int *)(param_1 + 0x1164)) {
          lStack_78 = *(longlong *)
                       ((longlong)*(int *)(param_1 + 0x1164) * 0xa60 + 0x3a78 + lStack_68);
        }
      }
      else {
        lStack_78 = FUN_180488690(param_1 + 0x48);
        pfVar15 = (float *)CONCAT44(param_5._4_4_,param_5._0_4_);
      }
      cVar4 = *(char *)(param_1 + 0x113c);
      lVar1 = param_1 + 0x118;
      if (cVar4 == '\0') {
        iVar10 = (int)(*(longlong *)(param_1 + 0x1120) - *(longlong *)(param_1 + 0x1118) >> 5);
      }
      else {
        iVar10 = *(int *)(param_1 + 0x1138);
      }
      lVar6 = (longlong)*(int *)(param_1 + 0x1140);
      if (*(int *)(param_1 + 0x1140) < iVar10) {
        lVar8 = lVar1;
        if (cVar4 == '\0') {
          lVar8 = *(longlong *)(param_1 + 0x1118);
        }
        pfVar13 = (float *)(*(longlong *)(lVar7 + 0x20) + 0xc);
        fStack_6c = *(float *)(lVar8 + (lVar6 * 8 + 1) * 4) -
                    *(float *)(*(longlong *)(lVar7 + 0x20) + 0x10);
        fStack_70 = *(float *)(lVar8 + lVar6 * 0x20) - *pfVar13;
        if ((!bVar3) || (0.0 < fStack_6c * pfVar15[1] + fStack_70 * *pfVar15)) {
          lVar7 = lVar1;
          if (cVar4 == '\0') {
            lVar7 = *(longlong *)(param_1 + 0x1118);
          }
          lVar8 = lStack_78;
          if (*(longlong *)(lVar7 + (lVar6 * 8 + 4) * 4) != 0) {
            lVar7 = lVar1;
            if (cVar4 == '\0') {
              lVar7 = *(longlong *)(param_1 + 0x1118);
            }
            lVar8 = *(longlong *)(lVar7 + (lVar6 * 8 + 4) * 4);
          }
          if ((lVar2 != 0) &&
             (cVar4 = FUN_180604f60(*(longlong *)(lStack_68 + 0x18) + 0x2a68,lVar2,lVar8,pfVar13,
                                    &fStack_70,CONCAT44(uVar19,param_2),param_3,param_4,0),
             cVar4 != '\0')) {
            return 1;
          }
        }
      }
      iVar11 = *(int *)(param_1 + 0x1140);
      iVar10 = iVar11 + 1;
      do {
        while( true ) {
          cVar4 = *(char *)(param_1 + 0x113c);
          if (cVar4 == '\0') {
            iVar5 = (int)(*(longlong *)(param_1 + 0x1120) - *(longlong *)(param_1 + 0x1118) >> 5);
          }
          else {
            iVar5 = *(int *)(param_1 + 0x1138);
          }
          if (iVar5 + -1 <= iVar11) {
            return 0;
          }
          lVar6 = (longlong)iVar10;
          lVar7 = lVar1;
          if (cVar4 == '\0') {
            lVar7 = *(longlong *)(param_1 + 0x1118);
          }
          if (*(longlong *)(lVar7 + (lVar6 * 8 + 4) * 4) == lVar2) {
            return 0;
          }
          lVar7 = lVar1;
          if (cVar4 == '\0') {
            lVar7 = *(longlong *)(param_1 + 0x1118);
          }
          lVar14 = (longlong)iVar11;
          lVar8 = lVar1;
          if (cVar4 == '\0') {
            lVar8 = *(longlong *)(param_1 + 0x1118);
          }
          fStack_6c = *(float *)(lVar7 + (lVar6 * 8 + 1) * 4) -
                      *(float *)(lVar8 + (lVar14 * 8 + 1) * 4);
          fStack_70 = *(float *)(lVar7 + lVar6 * 0x20) - *(float *)(lVar8 + lVar14 * 0x20);
          if ((!bVar3) ||
             (0.0 < fStack_6c * ((float *)CONCAT44(param_5._4_4_,param_5._0_4_))[1] +
                    fStack_70 * *(float *)CONCAT44(param_5._4_4_,param_5._0_4_))) break;
LAB_180604dcc:
          iVar11 = iVar11 + 1;
          iVar10 = iVar10 + 1;
        }
        lVar7 = lVar1;
        if (cVar4 == '\0') {
          lVar7 = *(longlong *)(param_1 + 0x1118);
        }
        lVar8 = lVar1;
        if (cVar4 == '\0') {
          lVar8 = *(longlong *)(param_1 + 0x1118);
        }
        lVar12 = lStack_78;
        if (*(longlong *)(lVar8 + (lVar6 * 8 + 4) * 4) != 0) {
          lVar8 = lVar1;
          if (cVar4 == '\0') {
            lVar8 = *(longlong *)(param_1 + 0x1118);
          }
          lVar12 = *(longlong *)(lVar8 + (lVar6 * 8 + 4) * 4);
        }
        lVar6 = lVar1;
        if (cVar4 == '\0') {
          lVar6 = *(longlong *)(param_1 + 0x1118);
        }
        lVar6 = *(longlong *)(lVar6 + (lVar14 * 8 + 4) * 4);
        if ((lVar6 == 0) || (lVar12 == 0)) goto LAB_180604dcc;
        if (lVar6 != lVar12) {
          fVar18 = fStack_6c * fStack_6c + fStack_70 * fStack_70;
          if ((1e-05 <= fVar18) &&
             (cVar4 = FUN_1806052a0(*(longlong *)(lStack_68 + 0x18) + 0x2a68,lVar6,fVar18,
                                    lVar7 + lVar14 * 0x20,&fStack_70,0,param_2,param_3,param_4,0),
             cVar4 != '\0')) {
            return 1;
          }
          goto LAB_180604dcc;
        }
        iVar5 = *(int *)(lVar6 + 0x130);
        if (iVar5 == param_2) {
          return 1;
        }
        if (iVar5 == param_3) {
          return 1;
        }
        if (iVar5 == param_4) {
          return 1;
        }
        iVar11 = iVar11 + 1;
        iVar10 = iVar10 + 1;
      } while( true );
    }
    if (*(int *)(param_1 + 0x14) == 1) {
      if (*(int *)(param_1 + 0x1164) < 0) {
        return 0;
      }
      pfVar15 = (float *)(*(longlong *)(lVar7 + 0x20) + 0xc);
      lVar6 = (longlong)*(int *)(param_1 + 0x1164) * 0xa60;
      lVar1 = *(longlong *)(lVar6 + 0x30c0 + lStack_68);
      fVar16 = *(float *)(*(longlong *)(lVar7 + 0x20) + 0x10) - *(float *)(lVar1 + 0x10);
      fVar17 = *pfVar15 - *(float *)(lVar1 + 0xc);
      if ((bVar3) && (fVar16 * param_5[1] + fVar17 * fVar18 <= 0.0)) {
        return 0;
      }
      lVar7 = *(longlong *)(lStack_68 + 0x18);
      if (lVar2 == 0) {
        return 0;
      }
      uVar9 = *(undefined8 *)(lVar6 + 0x3a78 + lStack_68);
      param_5._0_4_ = fVar17;
      param_5._4_4_ = fVar16;
    }
    else {
      pfVar15 = (float *)(*(longlong *)(lVar7 + 0x20) + 0xc);
      fVar16 = *(float *)(param_1 + 100) - *(float *)(*(longlong *)(lVar7 + 0x20) + 0x10);
      fVar17 = *(float *)(param_1 + 0x60) - *pfVar15;
      if ((bVar3) && (fVar16 * param_5[1] + fVar17 * fVar18 <= 0.0)) {
        return 0;
      }
      lVar7 = *(longlong *)(lStack_68 + 0x18);
      param_5._0_4_ = fVar17;
      param_5._4_4_ = fVar16;
      uVar9 = FUN_180488690(param_1 + 0x48);
      if (lVar2 == 0) {
        return 0;
      }
    }
    cVar4 = FUN_180604f60(lVar7 + 0x2a68,lVar2,uVar9,pfVar15,&param_5,param_2,param_3,param_4,0);
    if (cVar4 == '\0') {
      return 0;
    }
  }
  return 1;
}



ulonglong FUN_180604f60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       float *param_5,uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  float fVar3;
  
  if (param_3 != 0) {
    if (param_2 == param_3) {
      uVar1 = *(uint *)(param_2 + 0x130);
      in_RAX = (ulonglong)uVar1;
      if (((uVar1 == param_6) || (uVar1 == param_7)) || (uVar1 == param_8)) {
        return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
      }
    }
    else {
      fVar3 = *param_5 * *param_5 + param_5[1] * param_5[1];
      if (1e-05 <= fVar3) {
        uVar2 = FUN_1806052a0(param_1,fVar3,param_3,param_4,param_5,0,param_6,param_7,param_8,0);
        return uVar2;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



bool FUN_180605010(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  float *param_5,undefined8 *param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,int param_10,undefined8 param_11)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  undefined8 *puVar12;
  float *pfVar13;
  
  if (*(int *)(param_2 + 0x130) == param_7) {
LAB_18060526e:
    bVar2 = true;
  }
  else {
    if (param_2 != param_3) {
      iVar5 = 0;
      bVar6 = *(byte *)(param_2 + 0xa8);
      param_8._0_4_ = *(undefined4 *)(*(longlong *)(param_1 + 0x528) + 0x60300);
      if (bVar6 != 0) {
        iVar3 = func_0x00018038b420(param_2);
        puVar12 = (undefined8 *)(param_2 + 0x60);
        lVar9 = 0;
        do {
          lVar7 = 0;
          puVar4 = (undefined8 *)0x0;
          pfVar13 = (float *)0x0;
          pfVar11 = (float *)0x0;
          if (lVar9 != iVar3) {
            lVar7 = puVar12[10];
            if (lVar7 != 0) {
              puVar4 = (undefined8 *)*puVar12;
            }
            pfVar13 = (float *)puVar12[4];
            pfVar11 = *(float **)(param_2 + 0x80 + (longlong)((iVar5 + 1) % (int)(uint)bVar6) * 8);
          }
          lVar9 = lVar9 + 1;
          iVar5 = iVar5 + 1;
          puVar12 = puVar12 + 1;
          if (((lVar7 != 0) && (param_6 != puVar4)) && (1 < *(byte *)(puVar4 + 4))) {
            lVar7 = puVar4[2];
            if (lVar7 == param_2) {
              lVar7 = puVar4[3];
            }
            param_11 = *(undefined8 *)*puVar4;
            if (((lVar7 != param_2) &&
                (cVar1 = FUN_18038acd0(lVar7,0,puVar4,(undefined4)param_8), cVar1 != '\0')) &&
               ((uVar8 = param_4, pfVar10 = param_5, cVar1 = FUN_180397470(&param_11), cVar1 != '\0'
                && ((pfVar13[1] - pfVar11[1]) * *pfVar10 + (*pfVar11 - *pfVar13) * pfVar10[1] <=
                    0.0001)))) {
              if (lVar7 == param_3) {
                return *(int *)(param_3 + 0x130) == param_7;
              }
              cVar1 = FUN_180605010(param_1,lVar7,param_3,uVar8,pfVar10,puVar4,param_7,0xffffffff,
                                    0xffffffff,param_10 + 1,0);
              if (cVar1 != '\0') goto LAB_18060526e;
            }
          }
          bVar6 = *(byte *)(param_2 + 0xa8);
        } while (iVar5 < (int)(uint)bVar6);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}



undefined8
FUN_1806052a0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,float *param_5,
             undefined8 *param_6,int param_7,int param_8,int param_9,int param_10)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  int iVar11;
  undefined8 *puVar12;
  float *pfVar13;
  undefined8 uStack_68;
  undefined8 uStack_60;
  float fStack_58;
  float fStack_54;
  longlong lStack_50;
  
  iVar11 = *(int *)(param_2 + 0x130);
  if (((iVar11 == param_7) || (iVar11 == param_8)) || (iVar11 == param_9)) {
LAB_18060552f:
    uVar4 = 1;
  }
  else {
    if (param_2 != param_3) {
      iVar11 = 0;
      bVar7 = *(byte *)(param_2 + 0xa8);
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x528) + 0x60300);
      if (bVar7 != 0) {
        iVar3 = func_0x00018038b420(param_2);
        puVar12 = (undefined8 *)(param_2 + 0x60);
        lStack_50 = (longlong)iVar3;
        lVar9 = 0;
        do {
          lVar8 = 0;
          puVar5 = (undefined8 *)0x0;
          pfVar6 = (float *)0x0;
          pfVar13 = (float *)0x0;
          if (lVar9 != lStack_50) {
            lVar8 = puVar12[10];
            if (lVar8 != 0) {
              puVar5 = (undefined8 *)*puVar12;
            }
            pfVar6 = (float *)puVar12[4];
            pfVar13 = *(float **)(param_2 + 0x80 + (longlong)((iVar11 + 1) % (int)(uint)bVar7) * 8);
          }
          lVar9 = lVar9 + 1;
          iVar11 = iVar11 + 1;
          puVar12 = puVar12 + 1;
          if (((lVar8 != 0) && (param_6 != puVar5)) && (1 < *(byte *)(puVar5 + 4))) {
            lVar8 = puVar5[2];
            if (lVar8 == param_2) {
              lVar8 = puVar5[3];
            }
            uStack_68 = *(undefined8 *)*puVar5;
            uStack_60 = *(undefined8 *)puVar5[1];
            if ((lVar8 != param_2) && (cVar2 = FUN_18038acd0(lVar8,0,puVar5,uVar1), cVar2 != '\0'))
            {
              fStack_58 = (float)uStack_60 - (float)uStack_68;
              fStack_54 = uStack_60._4_4_ - uStack_68._4_4_;
              uVar4 = param_4;
              pfVar10 = param_5;
              cVar2 = FUN_180397470(&uStack_68);
              if ((cVar2 != '\0') &&
                 ((pfVar6[1] - pfVar13[1]) * *pfVar10 + (*pfVar13 - *pfVar6) * pfVar10[1] <= 0.0001)
                 ) {
                if (lVar8 == param_3) {
                  iVar11 = *(int *)(param_3 + 0x130);
                  if (((iVar11 == param_7) || (iVar11 == param_8)) || (iVar11 == param_9))
                  goto LAB_18060552f;
                  break;
                }
                cVar2 = FUN_1806052a0(param_1,lVar8,param_3,uVar4,pfVar10,puVar5,param_7,param_8,
                                      param_9,param_10 + 1,0);
                if (cVar2 != '\0') goto LAB_18060552f;
              }
            }
          }
          bVar7 = *(byte *)(param_2 + 0xa8);
        } while (iVar11 < (int)(uint)bVar7);
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180605570(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x3090,8,3,0xfffffffffffffffe);
  *plVar2 = (longlong)&UNK_180a2d380;
  plVar2[1] = 0;
  FUN_1804d9b70(plVar2 + 2);
  FUN_1804ca350(plVar2 + 0x5a6,param_2);
  plVar1 = *(longlong **)(param_1 + 0x3c0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,0);
  }
  *(longlong **)(param_1 + 0x3c0) = plVar2;
  (**(code **)(*plVar2 + 8))(plVar2,param_1);
  FUN_1801be530(plVar2[1] + 0xe0,plVar2 + 2);
  FUN_1801be530(plVar2[1] + 0xe0,plVar2 + 0x5a6);
  *(undefined1 *)(plVar2[1] + 0x60d08) = 1;
  return plVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180605670(longlong *param_1,undefined8 param_2,char param_3)
void FUN_180605670(longlong *param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong **pplVar4;
  undefined8 *puVar5;
  longlong **pplVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong **pplStackX_8;
  undefined8 uVar9;
  longlong *aplStack_28 [2];
  undefined *puStack_18;
  code *pcStack_10;
  
  uVar9 = 0xfffffffffffffffe;
  if (param_3 == '\0') {
    if ((undefined *)*param_1 == &UNK_180a0c4a0) {
      LOCK();
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)((undefined *)*param_1 + 0x28))(param_1);
    }
    uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3,uVar9);
    pplStackX_8 = aplStack_28;
    puStack_18 = &UNK_180607c40;
    pcStack_10 = FUN_180607bb0;
    aplStack_28[0] = param_1;
    pplVar6 = (longlong **)FUN_18006b640(uVar9,aplStack_28);
    pplVar4 = pplVar6;
    uVar9 = _DAT_180c82868;
    if (pplVar6 != (longlong **)0x0) {
      (*(code *)(*pplVar6)[5])(pplVar6);
      uVar9 = _DAT_180c82868;
      pplStackX_8 = pplVar6;
      (*(code *)(*pplVar6)[5])(pplVar6);
      pplVar4 = pplStackX_8;
    }
    pplStackX_8 = pplVar4;
    FUN_18005e300(uVar9,&pplStackX_8);
    if (pplVar6 != (longlong **)0x0) {
      (*(code *)(*pplVar6)[7])(pplVar6);
    }
  }
  else {
    plVar2 = (longlong *)param_1[0x78];
    FUN_1804e0970(plVar2);
    plVar3 = (longlong *)param_1[0x78];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3,0);
    }
    param_1[0x78] = 0;
    if (plVar2 != (longlong *)0x0) {
      puVar5 = (undefined8 *)__RTCastToVoid(plVar2);
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
      if (puVar5 != (undefined8 *)0x0) {
        puStack_18 = (undefined *)0xfffffffffffffffe;
        uVar8 = (ulonglong)puVar5 & 0xffffffffffc00000;
        if (uVar8 != 0) {
          lVar7 = uVar8 + 0x80 + ((longlong)puVar5 - uVar8 >> 0x10) * 0x50;
          lVar7 = lVar7 - (ulonglong)*(uint *)(lVar7 + 4);
          if ((*(void ***)(uVar8 + 0x70) == &ExceptionList) && (*(char *)(lVar7 + 0xe) == '\0')) {
            *puVar5 = *(undefined8 *)(lVar7 + 0x20);
            *(undefined8 **)(lVar7 + 0x20) = puVar5;
            piVar1 = (int *)(lVar7 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_18064d630();
              return;
            }
          }
          else {
            func_0x00018064e870(uVar8,CONCAT71(0xff000000,
                                               *(void ***)(uVar8 + 0x70) == &ExceptionList));
          }
        }
        return;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 *
FUN_1806057e0(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStackX_8 [8];
  longlong *aplStackX_10 [2];
  longlong *plStackX_20;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  
  uVar6 = FUN_18062b1e0(_DAT_180c8ed18,0x9b0,0x10,3);
  plVar7 = (longlong *)FUN_18053f6c0(uVar6,*(longlong *)(param_2 + 0x3c0) + 0x10);
  plStackX_20 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  auStackX_8[0] = 4;
  FUN_1801af320(param_2,aplStackX_10,auStackX_8,0,&DAT_180a00300,1);
  plVar4 = aplStackX_10[0];
  *(byte *)((longlong)aplStackX_10[0] + 0x2e9) = *(byte *)((longlong)aplStackX_10[0] + 0x2e9) | 1;
  uVar1 = *(uint *)((longlong)aplStackX_10[0] + 0x2ac);
  *(uint *)((longlong)aplStackX_10[0] + 0x2ac) = uVar1 | 0x2020000;
  FUN_1802ee810(aplStackX_10[0],uVar1);
  FUN_1802ee990(plVar4,uVar1);
  FUN_180544930(plVar7,aplStackX_10[0]);
  uVar5 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(plVar7 + 0x124) = *param_4;
  *(undefined4 *)((longlong)plVar7 + 0x924) = uVar5;
  *(undefined4 *)(plVar7 + 0x125) = uVar2;
  *(undefined4 *)((longlong)plVar7 + 0x92c) = uVar3;
  uVar5 = (**(code **)(*plVar7 + 8))(plVar7);
  (**(code **)(*plVar7 + 0x28))(plVar7);
  uStack_38 = SUB84(plVar7,0);
  uStack_34 = (undefined4)((ulonglong)plVar7 >> 0x20);
  *param_1 = uStack_38;
  param_1[1] = uStack_34;
  param_1[2] = uVar5;
  param_1[3] = uStack_2c;
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  (**(code **)(*plVar7 + 0x38))(plVar7);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180605930(longlong param_1,longlong param_2,undefined8 param_3,char param_4,float param_5)
void FUN_180605930(longlong param_1,longlong param_2,undefined8 param_3,char param_4,float param_5)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lStackX_8;
  undefined4 uStackX_10;
  float fStackX_14;
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  int iStack_54;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260);
  if (((lVar9 != 0) && (*(longlong **)(lVar9 + 0x210) != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(**(longlong **)(lVar9 + 0x210) + 0x30))(), cVar4 != '\0')) {
    plVar3 = *(longlong **)(lVar9 + 0x210);
    iVar2 = *(int *)((longlong)*(int *)((longlong)plVar3 + 0xac) * 0xe0 + 0x60 + _DAT_180c95fb0);
    if (param_4 == '\0') {
      lStackX_8 = 0;
    }
    else {
      fStackX_14 = param_5;
      uStackX_10 = 0;
    }
    plVar6 = &lStackX_8;
    if (param_4 != '\0') {
      plVar6 = (longlong *)&uStackX_10;
    }
    lVar7 = *plVar6;
    fVar1 = *(float *)((longlong)plVar6 + 4);
    plVar3[0x12] = lVar7;
    if (fVar1 * fVar1 + 0.0 < 0.010000001) {
      lVar7 = 0;
    }
    plVar3[0x12] = lVar7;
    if ((param_4 == '\0') || (param_5 == 0.0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(undefined1 *)(plVar3 + 0x17) = uVar5;
    *(undefined1 *)((longlong)plVar3 + 0xb9) = 0;
    if (iVar2 == 0) {
      uVar10 = *(undefined8 *)(lVar9 + 0x208);
      plVar3[0x4a3] = _DAT_180c95ff0;
      FUN_18057a3c0(plVar3,0,param_5,0xffffffff);
      iStack_54 = FUN_180577070(plVar3,0);
      lVar9 = 0;
      uStack_44 = 0x3f80000000000000;
      uStack_3c = 0xbe4ccccdbe4ccccd;
      lStack_50 = lVar9;
      if (iStack_54 == -1) {
        lStack_50 = 2;
      }
      uStack_34 = 0x3ecccccd;
      uStack_58 = 0;
      uStack_48 = 0;
      uStack_30 = 0x1000000;
      uStack_2c = 0;
      (**(code **)(*plVar3 + 0x160))(plVar3,&uStack_58,uVar10);
      if (param_2 == 0) {
        FUN_180544550(param_1,0);
        uVar10 = 0;
        uVar8 = 0;
      }
      else {
        FUN_180544550(param_1,param_2);
        lVar7 = *(longlong *)(param_2 + 0x8a8);
        if (lVar7 != 0) {
          lVar9 = *(longlong *)(lVar7 + 0x260);
        }
        FUN_180085020(lVar7 + 0x70,auStack_68);
        uVar8 = *(undefined8 *)(lVar9 + 0x210);
      }
      FUN_180577110(plVar3,uVar8,uVar10);
    }
    FUN_18058ada0(plVar3,0,*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260) + 0x208),0);
  }
  return;
}


/*
Unable to decompile 'FUN_180605988'
Cause: 
Low-level Error: Cannot properly adjust input varnodes
*/




// 函数: void FUN_180605b8a(void)
void FUN_180605b8a(void)

{
  return;
}





