#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part613.c - 4 个函数

// 函数: void FUN_180603f3b(uint64_t param_1,uint64_t param_2,int32_t param_3)
void FUN_180603f3b(uint64_t param_1,uint64_t param_2,int32_t param_3)

{
  int32_t *in_R8;
  int32_t *unaff_R14;
  int32_t unaff_XMM7_Da;
  
  *unaff_R14 = unaff_XMM7_Da;
  *in_R8 = param_3;
  return;
}



uint64_t FUN_1806043c0(int64_t param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  lVar1 = *(int64_t *)(*(int64_t *)(**(int64_t **)(param_1 + 0x6e0) + 0x8f8) + 0x9e8);
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x30))) {
    uVar2 = *(uint64_t *)
             ((int64_t)*(int *)(lVar1 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar1 + 0xd0));
    if ((((uVar2 >> 9 & 1) == 0) || (0 < *(short *)(lVar1 + 8))) && ((uVar2 >> 1 & 1) != 0)) {
      uVar3 = FUN_1805bd630(*(int64_t **)(param_1 + 0x6e0),lVar1,(int64_t)*(int *)(lVar1 + 0xf0),
                            lVar1,0,0);
      return uVar3;
    }
  }
  return 0;
}



uint64_t
FUN_180604440(int64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,float *param_5)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int64_t lVar11;
  float *pfVar12;
  int64_t lVar13;
  float *pfVar14;
  char cVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack_68;
  float fStack_64;
  
  pfVar14 = param_5;
  lVar9 = **(int64_t **)(param_1 + 0x20);
  fVar16 = *param_5;
  lVar2 = *(int64_t *)(lVar9 + 0x8d8);
  if ((fVar16 == 0.0) && (param_5[1] == 0.0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  lVar3 = *(int64_t *)(lVar9 + 0x9d8);
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0x130) == param_2)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x1144) != '\0') {
    param_5 = (float *)0x0;
    if (*(int *)(param_1 + 0x14) == 1) {
      if (-1 < *(int *)(param_1 + 0x1164)) {
        param_5 = *(float **)((int64_t)*(int *)(param_1 + 0x1164) * 0xa60 + 0x3a78 + lVar2);
      }
    }
    else {
      param_5 = (float *)FUN_180488690(param_1 + 0x48);
    }
    cVar15 = *(char *)(param_1 + 0x113c);
    lVar1 = param_1 + 0x118;
    if (cVar15 == '\0') {
      iVar10 = (int)(*(int64_t *)(param_1 + 0x1120) - *(int64_t *)(param_1 + 0x1118) >> 5);
    }
    else {
      iVar10 = *(int *)(param_1 + 0x1138);
    }
    lVar7 = (int64_t)*(int *)(param_1 + 0x1140);
    if (*(int *)(param_1 + 0x1140) < iVar10) {
      lVar8 = lVar1;
      if (cVar15 == '\0') {
        lVar8 = *(int64_t *)(param_1 + 0x1118);
      }
      pfVar12 = (float *)(*(int64_t *)(lVar9 + 0x20) + 0xc);
      fStack_64 = *(float *)(lVar8 + (lVar7 * 8 + 1) * 4) -
                  *(float *)(*(int64_t *)(lVar9 + 0x20) + 0x10);
      fStack_68 = *(float *)(lVar8 + lVar7 * 0x20) - *pfVar12;
      if ((!bVar5) || (0.0 < fStack_64 * pfVar14[1] + fStack_68 * *pfVar14)) {
        lVar9 = lVar1;
        if (cVar15 == '\0') {
          lVar9 = *(int64_t *)(param_1 + 0x1118);
        }
        lVar8 = (int64_t)param_5;
        if (*(int64_t *)(lVar9 + (lVar7 * 8 + 4) * 4) != 0) {
          lVar9 = lVar1;
          if (cVar15 == '\0') {
            lVar9 = *(int64_t *)(param_1 + 0x1118);
          }
          lVar8 = *(int64_t *)(lVar9 + (lVar7 * 8 + 4) * 4);
        }
        if ((lVar3 != 0) && (lVar8 != 0)) {
          if (lVar3 == lVar8) {
            cVar15 = *(int *)(lVar3 + 0x130) == param_2;
          }
          else {
            fVar16 = fStack_68 * fStack_68 + fStack_64 * fStack_64;
            if (fVar16 < 1e-05) goto LAB_180604674;
            cVar15 = FUN_180605010(*(int64_t *)(lVar2 + 0x18) + 0x2a68,lVar3,fVar16,pfVar12,
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
        iVar6 = (int)(*(int64_t *)(param_1 + 0x1120) - *(int64_t *)(param_1 + 0x1118) >> 5);
      }
      else {
        iVar6 = *(int *)(param_1 + 0x1138);
      }
      if (iVar6 + -1 <= iVar10) {
        return 0;
      }
      lVar7 = (int64_t)iVar4;
      lVar9 = lVar1;
      if (cVar15 == '\0') {
        lVar9 = *(int64_t *)(param_1 + 0x1118);
      }
      if (*(int64_t *)(lVar9 + (lVar7 * 8 + 4) * 4) == lVar3) {
        return 0;
      }
      lVar9 = lVar1;
      if (cVar15 == '\0') {
        lVar9 = *(int64_t *)(param_1 + 0x1118);
      }
      lVar13 = (int64_t)iVar10;
      lVar8 = lVar1;
      if (cVar15 == '\0') {
        lVar8 = *(int64_t *)(param_1 + 0x1118);
      }
      fStack_64 = *(float *)(lVar9 + (lVar7 * 8 + 1) * 4) - *(float *)(lVar8 + (lVar13 * 8 + 1) * 4)
      ;
      fStack_68 = *(float *)(lVar9 + lVar7 * 0x20) - *(float *)(lVar8 + lVar13 * 0x20);
      if ((!bVar5) || (0.0 < fStack_64 * pfVar14[1] + fStack_68 * *pfVar14)) {
        lVar9 = lVar1;
        if (cVar15 == '\0') {
          lVar9 = *(int64_t *)(param_1 + 0x1118);
        }
        lVar8 = lVar1;
        if (cVar15 == '\0') {
          lVar8 = *(int64_t *)(param_1 + 0x1118);
        }
        lVar11 = (int64_t)param_5;
        if (*(int64_t *)(lVar8 + (lVar7 * 8 + 4) * 4) != 0) {
          lVar8 = lVar1;
          if (cVar15 == '\0') {
            lVar8 = *(int64_t *)(param_1 + 0x1118);
          }
          lVar11 = *(int64_t *)(lVar8 + (lVar7 * 8 + 4) * 4);
        }
        lVar7 = lVar1;
        if (cVar15 == '\0') {
          lVar7 = *(int64_t *)(param_1 + 0x1118);
        }
        lVar7 = *(int64_t *)(lVar7 + (lVar13 * 8 + 4) * 4);
        if ((lVar7 != 0) && (lVar11 != 0)) {
          if (lVar7 == lVar11) {
            cVar15 = *(int *)(lVar7 + 0x130) == param_2;
          }
          else {
            fVar16 = fStack_68 * fStack_68 + fStack_64 * fStack_64;
            if (fVar16 < 1e-05) goto LAB_1806047f8;
            cVar15 = FUN_180605010(*(int64_t *)(lVar2 + 0x18) + 0x2a68,lVar7,fVar16,
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
    pfVar14 = (float *)(*(int64_t *)(lVar9 + 0x20) + 0xc);
    lVar7 = (int64_t)*(int *)(param_1 + 0x1164) * 0xa60;
    lVar1 = *(int64_t *)(lVar7 + 0x30c0 + lVar2);
    fVar18 = *(float *)(*(int64_t *)(lVar9 + 0x20) + 0x10) - *(float *)(lVar1 + 0x10);
    fVar17 = *pfVar14 - *(float *)(lVar1 + 0xc);
    if ((bVar5) && (fVar18 * param_5[1] + fVar17 * fVar16 <= 0.0)) {
      return 0;
    }
    if (lVar3 == 0) {
      return 0;
    }
    lVar9 = *(int64_t *)(lVar7 + 0x3a78 + lVar2);
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
    lVar2 = *(int64_t *)(lVar2 + 0x18);
    param_5._0_4_ = fVar17;
    param_5._4_4_ = fVar18;
  }
  else {
    pfVar14 = (float *)(*(int64_t *)(lVar9 + 0x20) + 0xc);
    fVar17 = *(float *)(param_1 + 100) - *(float *)(*(int64_t *)(lVar9 + 0x20) + 0x10);
    fVar18 = *(float *)(param_1 + 0x60) - *pfVar14;
    if ((bVar5) && (fVar17 * param_5[1] + fVar18 * fVar16 <= 0.0)) {
      return 0;
    }
    lVar2 = *(int64_t *)(lVar2 + 0x18);
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



uint64_t FUN_180604a00(int64_t param_1,int param_2,int param_3,int param_4,float *param_5)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int iVar10;
  int iVar11;
  int64_t lVar12;
  float *pfVar13;
  int64_t lVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint64_t in_stack_ffffffffffffff50;
  int32_t uVar19;
  int64_t lStack_78;
  float fStack_70;
  float fStack_6c;
  int64_t lStack_68;
  
  uVar19 = (int32_t)((uint64_t)in_stack_ffffffffffffff50 >> 0x20);
  lVar7 = **(int64_t **)(param_1 + 0x20);
  fVar18 = *param_5;
  lStack_68 = *(int64_t *)(lVar7 + 0x8d8);
  if ((fVar18 == 0.0) && (param_5[1] == 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  lVar2 = *(int64_t *)(lVar7 + 0x9d8);
  if ((lVar2 == 0) ||
     (((iVar10 = *(int *)(lVar2 + 0x130), iVar10 != param_2 && (iVar10 != param_3)) &&
      (iVar10 != param_4)))) {
    if (*(char *)(param_1 + 0x1144) != '\0') {
      lStack_78 = 0;
      if (*(int *)(param_1 + 0x14) == 1) {
        pfVar15 = param_5;
        if (-1 < *(int *)(param_1 + 0x1164)) {
          lStack_78 = *(int64_t *)
                       ((int64_t)*(int *)(param_1 + 0x1164) * 0xa60 + 0x3a78 + lStack_68);
        }
      }
      else {
        lStack_78 = FUN_180488690(param_1 + 0x48);
        pfVar15 = (float *)CONCAT44(param_5._4_4_,param_5._0_4_);
      }
      cVar4 = *(char *)(param_1 + 0x113c);
      lVar1 = param_1 + 0x118;
      if (cVar4 == '\0') {
        iVar10 = (int)(*(int64_t *)(param_1 + 0x1120) - *(int64_t *)(param_1 + 0x1118) >> 5);
      }
      else {
        iVar10 = *(int *)(param_1 + 0x1138);
      }
      lVar6 = (int64_t)*(int *)(param_1 + 0x1140);
      if (*(int *)(param_1 + 0x1140) < iVar10) {
        lVar8 = lVar1;
        if (cVar4 == '\0') {
          lVar8 = *(int64_t *)(param_1 + 0x1118);
        }
        pfVar13 = (float *)(*(int64_t *)(lVar7 + 0x20) + 0xc);
        fStack_6c = *(float *)(lVar8 + (lVar6 * 8 + 1) * 4) -
                    *(float *)(*(int64_t *)(lVar7 + 0x20) + 0x10);
        fStack_70 = *(float *)(lVar8 + lVar6 * 0x20) - *pfVar13;
        if ((!bVar3) || (0.0 < fStack_6c * pfVar15[1] + fStack_70 * *pfVar15)) {
          lVar7 = lVar1;
          if (cVar4 == '\0') {
            lVar7 = *(int64_t *)(param_1 + 0x1118);
          }
          lVar8 = lStack_78;
          if (*(int64_t *)(lVar7 + (lVar6 * 8 + 4) * 4) != 0) {
            lVar7 = lVar1;
            if (cVar4 == '\0') {
              lVar7 = *(int64_t *)(param_1 + 0x1118);
            }
            lVar8 = *(int64_t *)(lVar7 + (lVar6 * 8 + 4) * 4);
          }
          if ((lVar2 != 0) &&
             (cVar4 = FUN_180604f60(*(int64_t *)(lStack_68 + 0x18) + 0x2a68,lVar2,lVar8,pfVar13,
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
            iVar5 = (int)(*(int64_t *)(param_1 + 0x1120) - *(int64_t *)(param_1 + 0x1118) >> 5);
          }
          else {
            iVar5 = *(int *)(param_1 + 0x1138);
          }
          if (iVar5 + -1 <= iVar11) {
            return 0;
          }
          lVar6 = (int64_t)iVar10;
          lVar7 = lVar1;
          if (cVar4 == '\0') {
            lVar7 = *(int64_t *)(param_1 + 0x1118);
          }
          if (*(int64_t *)(lVar7 + (lVar6 * 8 + 4) * 4) == lVar2) {
            return 0;
          }
          lVar7 = lVar1;
          if (cVar4 == '\0') {
            lVar7 = *(int64_t *)(param_1 + 0x1118);
          }
          lVar14 = (int64_t)iVar11;
          lVar8 = lVar1;
          if (cVar4 == '\0') {
            lVar8 = *(int64_t *)(param_1 + 0x1118);
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
          lVar7 = *(int64_t *)(param_1 + 0x1118);
        }
        lVar8 = lVar1;
        if (cVar4 == '\0') {
          lVar8 = *(int64_t *)(param_1 + 0x1118);
        }
        lVar12 = lStack_78;
        if (*(int64_t *)(lVar8 + (lVar6 * 8 + 4) * 4) != 0) {
          lVar8 = lVar1;
          if (cVar4 == '\0') {
            lVar8 = *(int64_t *)(param_1 + 0x1118);
          }
          lVar12 = *(int64_t *)(lVar8 + (lVar6 * 8 + 4) * 4);
        }
        lVar6 = lVar1;
        if (cVar4 == '\0') {
          lVar6 = *(int64_t *)(param_1 + 0x1118);
        }
        lVar6 = *(int64_t *)(lVar6 + (lVar14 * 8 + 4) * 4);
        if ((lVar6 == 0) || (lVar12 == 0)) goto LAB_180604dcc;
        if (lVar6 != lVar12) {
          fVar18 = fStack_6c * fStack_6c + fStack_70 * fStack_70;
          if ((1e-05 <= fVar18) &&
             (cVar4 = FUN_1806052a0(*(int64_t *)(lStack_68 + 0x18) + 0x2a68,lVar6,fVar18,
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
      pfVar15 = (float *)(*(int64_t *)(lVar7 + 0x20) + 0xc);
      lVar6 = (int64_t)*(int *)(param_1 + 0x1164) * 0xa60;
      lVar1 = *(int64_t *)(lVar6 + 0x30c0 + lStack_68);
      fVar16 = *(float *)(*(int64_t *)(lVar7 + 0x20) + 0x10) - *(float *)(lVar1 + 0x10);
      fVar17 = *pfVar15 - *(float *)(lVar1 + 0xc);
      if ((bVar3) && (fVar16 * param_5[1] + fVar17 * fVar18 <= 0.0)) {
        return 0;
      }
      lVar7 = *(int64_t *)(lStack_68 + 0x18);
      if (lVar2 == 0) {
        return 0;
      }
      uVar9 = *(uint64_t *)(lVar6 + 0x3a78 + lStack_68);
      param_5._0_4_ = fVar17;
      param_5._4_4_ = fVar16;
    }
    else {
      pfVar15 = (float *)(*(int64_t *)(lVar7 + 0x20) + 0xc);
      fVar16 = *(float *)(param_1 + 100) - *(float *)(*(int64_t *)(lVar7 + 0x20) + 0x10);
      fVar17 = *(float *)(param_1 + 0x60) - *pfVar15;
      if ((bVar3) && (fVar16 * param_5[1] + fVar17 * fVar18 <= 0.0)) {
        return 0;
      }
      lVar7 = *(int64_t *)(lStack_68 + 0x18);
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



uint64_t FUN_180604f60(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
                       float *param_5,uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  uint64_t in_RAX;
  uint64_t uVar2;
  float fVar3;
  
  if (param_3 != 0) {
    if (param_2 == param_3) {
      uVar1 = *(uint *)(param_2 + 0x130);
      in_RAX = (uint64_t)uVar1;
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



bool FUN_180605010(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
                  float *param_5,uint64_t *param_6,int param_7,uint64_t param_8,
                  uint64_t param_9,int param_10,uint64_t param_11)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint64_t *puVar4;
  int iVar5;
  byte bVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  float *pfVar10;
  float *pfVar11;
  uint64_t *puVar12;
  float *pfVar13;
  
  if (*(int *)(param_2 + 0x130) == param_7) {
LAB_18060526e:
    bVar2 = true;
  }
  else {
    if (param_2 != param_3) {
      iVar5 = 0;
      bVar6 = *(byte *)(param_2 + 0xa8);
      param_8._0_4_ = *(int32_t *)(*(int64_t *)(param_1 + 0x528) + 0x60300);
      if (bVar6 != 0) {
        iVar3 = func_0x00018038b420(param_2);
        puVar12 = (uint64_t *)(param_2 + 0x60);
        lVar9 = 0;
        do {
          lVar7 = 0;
          puVar4 = (uint64_t *)0x0;
          pfVar13 = (float *)0x0;
          pfVar11 = (float *)0x0;
          if (lVar9 != iVar3) {
            lVar7 = puVar12[10];
            if (lVar7 != 0) {
              puVar4 = (uint64_t *)*puVar12;
            }
            pfVar13 = (float *)puVar12[4];
            pfVar11 = *(float **)(param_2 + 0x80 + (int64_t)((iVar5 + 1) % (int)(uint)bVar6) * 8);
          }
          lVar9 = lVar9 + 1;
          iVar5 = iVar5 + 1;
          puVar12 = puVar12 + 1;
          if (((lVar7 != 0) && (param_6 != puVar4)) && (1 < *(byte *)(puVar4 + 4))) {
            lVar7 = puVar4[2];
            if (lVar7 == param_2) {
              lVar7 = puVar4[3];
            }
            param_11 = *(uint64_t *)*puVar4;
            if (((lVar7 != param_2) &&
                (cVar1 = FUN_18038acd0(lVar7,0,puVar4,(int32_t)param_8), cVar1 != '\0')) &&
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



uint64_t
FUN_1806052a0(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4,float *param_5,
             uint64_t *param_6,int param_7,int param_8,int param_9,int param_10)

{
  int32_t uVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  float *pfVar6;
  byte bVar7;
  int64_t lVar8;
  int64_t lVar9;
  float *pfVar10;
  int iVar11;
  uint64_t *puVar12;
  float *pfVar13;
  uint64_t uStack_68;
  uint64_t uStack_60;
  float fStack_58;
  float fStack_54;
  int64_t lStack_50;
  
  iVar11 = *(int *)(param_2 + 0x130);
  if (((iVar11 == param_7) || (iVar11 == param_8)) || (iVar11 == param_9)) {
LAB_18060552f:
    uVar4 = 1;
  }
  else {
    if (param_2 != param_3) {
      iVar11 = 0;
      bVar7 = *(byte *)(param_2 + 0xa8);
      uVar1 = *(int32_t *)(*(int64_t *)(param_1 + 0x528) + 0x60300);
      if (bVar7 != 0) {
        iVar3 = func_0x00018038b420(param_2);
        puVar12 = (uint64_t *)(param_2 + 0x60);
        lStack_50 = (int64_t)iVar3;
        lVar9 = 0;
        do {
          lVar8 = 0;
          puVar5 = (uint64_t *)0x0;
          pfVar6 = (float *)0x0;
          pfVar13 = (float *)0x0;
          if (lVar9 != lStack_50) {
            lVar8 = puVar12[10];
            if (lVar8 != 0) {
              puVar5 = (uint64_t *)*puVar12;
            }
            pfVar6 = (float *)puVar12[4];
            pfVar13 = *(float **)(param_2 + 0x80 + (int64_t)((iVar11 + 1) % (int)(uint)bVar7) * 8);
          }
          lVar9 = lVar9 + 1;
          iVar11 = iVar11 + 1;
          puVar12 = puVar12 + 1;
          if (((lVar8 != 0) && (param_6 != puVar5)) && (1 < *(byte *)(puVar5 + 4))) {
            lVar8 = puVar5[2];
            if (lVar8 == param_2) {
              lVar8 = puVar5[3];
            }
            uStack_68 = *(uint64_t *)*puVar5;
            uStack_60 = *(uint64_t *)puVar5[1];
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

int64_t * FUN_180605570(int64_t param_1,int32_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  plVar2 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x3090,8,3,0xfffffffffffffffe);
  *plVar2 = (int64_t)&ui_system_data_1920_ptr;
  plVar2[1] = 0;
  FUN_1804d9b70(plVar2 + 2);
  FUN_1804ca350(plVar2 + 0x5a6,param_2);
  plVar1 = *(int64_t **)(param_1 + 0x3c0);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,0);
  }
  *(int64_t **)(param_1 + 0x3c0) = plVar2;
  (**(code **)(*plVar2 + 8))(plVar2,param_1);
  FUN_1801be530(plVar2[1] + 0xe0,plVar2 + 2);
  FUN_1801be530(plVar2[1] + 0xe0,plVar2 + 0x5a6);
  *(int8_t *)(plVar2[1] + 0x60d08) = 1;
  return plVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180605670(int64_t *param_1,uint64_t param_2,char param_3)
void FUN_180605670(int64_t *param_1,uint64_t param_2,char param_3)

{
  int *piVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t **pplVar4;
  uint64_t *puVar5;
  int64_t **pplVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t **pplStackX_8;
  uint64_t uVar9;
  int64_t *aplStack_28 [2];
  void *puStack_18;
  code *pcStack_10;
  
  uVar9 = 0xfffffffffffffffe;
  if (param_3 == '\0') {
    if ((void *)*param_1 == &processed_var_7040_ptr) {
      LOCK();
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)((void *)*param_1 + 0x28))(param_1);
    }
    uVar9 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3,uVar9);
    pplStackX_8 = aplStack_28;
    puStack_18 = &processed_var_4208_ptr;
    pcStack_10 = FUN_180607bb0;
    aplStack_28[0] = param_1;
    pplVar6 = (int64_t **)FUN_18006b640(uVar9,aplStack_28);
    pplVar4 = pplVar6;
    uVar9 = system_context_ptr;
    if (pplVar6 != (int64_t **)0x0) {
      (*(code *)(*pplVar6)[5])(pplVar6);
      uVar9 = system_context_ptr;
      pplStackX_8 = pplVar6;
      (*(code *)(*pplVar6)[5])(pplVar6);
      pplVar4 = pplStackX_8;
    }
    pplStackX_8 = pplVar4;
    FUN_18005e300(uVar9,&pplStackX_8);
    if (pplVar6 != (int64_t **)0x0) {
      (*(code *)(*pplVar6)[7])(pplVar6);
    }
  }
  else {
    plVar2 = (int64_t *)param_1[0x78];
    FUN_1804e0970(plVar2);
    plVar3 = (int64_t *)param_1[0x78];
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3,0);
    }
    param_1[0x78] = 0;
    if (plVar2 != (int64_t *)0x0) {
      puVar5 = (uint64_t *)__RTCastToVoid(plVar2);
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
      if (puVar5 != (uint64_t *)0x0) {
        puStack_18 = (void *)0xfffffffffffffffe;
        uVar8 = (uint64_t)puVar5 & 0xffffffffffc00000;
        if (uVar8 != 0) {
          lVar7 = uVar8 + 0x80 + ((int64_t)puVar5 - uVar8 >> 0x10) * 0x50;
          lVar7 = lVar7 - (uint64_t)*(uint *)(lVar7 + 4);
          if ((*(void ***)(uVar8 + 0x70) == &ExceptionList) && (*(char *)(lVar7 + 0xe) == '\0')) {
            *puVar5 = *(uint64_t *)(lVar7 + 0x20);
            *(uint64_t **)(lVar7 + 0x20) = puVar5;
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

int32_t *
FUN_1806057e0(int32_t *param_1,int64_t param_2,uint64_t param_3,int32_t *param_4)

{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t *plVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int8_t auStackX_8 [8];
  int64_t *aplStackX_10 [2];
  int64_t *plStackX_20;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_2c;
  
  uVar6 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x9b0,0x10,3);
  plVar7 = (int64_t *)FUN_18053f6c0(uVar6,*(int64_t *)(param_2 + 0x3c0) + 0x10);
  plStackX_20 = plVar7;
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  auStackX_8[0] = 4;
  FUN_1801af320(param_2,aplStackX_10,auStackX_8,0,&system_data_0300,1);
  plVar4 = aplStackX_10[0];
  *(byte *)((int64_t)aplStackX_10[0] + 0x2e9) = *(byte *)((int64_t)aplStackX_10[0] + 0x2e9) | 1;
  uVar1 = *(uint *)((int64_t)aplStackX_10[0] + 0x2ac);
  *(uint *)((int64_t)aplStackX_10[0] + 0x2ac) = uVar1 | 0x2020000;
  FUN_1802ee810(aplStackX_10[0],uVar1);
  FUN_1802ee990(plVar4,uVar1);
  FUN_180544930(plVar7,aplStackX_10[0]);
  uVar5 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(int32_t *)(plVar7 + 0x124) = *param_4;
  *(int32_t *)((int64_t)plVar7 + 0x924) = uVar5;
  *(int32_t *)(plVar7 + 0x125) = uVar2;
  *(int32_t *)((int64_t)plVar7 + 0x92c) = uVar3;
  uVar5 = (**(code **)(*plVar7 + 8))(plVar7);
  (**(code **)(*plVar7 + 0x28))(plVar7);
  uStack_38 = SUB84(plVar7,0);
  uStack_34 = (int32_t)((uint64_t)plVar7 >> 0x20);
  *param_1 = uStack_38;
  param_1[1] = uStack_34;
  param_1[2] = uVar5;
  param_1[3] = uStack_2c;
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  (**(code **)(*plVar7 + 0x38))(plVar7);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180605930(int64_t param_1,int64_t param_2,uint64_t param_3,char param_4,float param_5)
void FUN_180605930(int64_t param_1,int64_t param_2,uint64_t param_3,char param_4,float param_5)

{
  float fVar1;
  int iVar2;
  int64_t *plVar3;
  char cVar4;
  int8_t uVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lStackX_8;
  int32_t uStackX_10;
  float fStackX_14;
  int8_t auStack_68 [16];
  int32_t uStack_58;
  int iStack_54;
  int64_t lStack_50;
  int32_t uStack_48;
  uint64_t uStack_44;
  uint64_t uStack_3c;
  int32_t uStack_34;
  int32_t uStack_30;
  int8_t uStack_2c;
  
  lVar9 = *(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260);
  if (((lVar9 != 0) && (*(int64_t **)(lVar9 + 0x210) != (int64_t *)0x0)) &&
     (cVar4 = (**(code **)(**(int64_t **)(lVar9 + 0x210) + 0x30))(), cVar4 != '\0')) {
    plVar3 = *(int64_t **)(lVar9 + 0x210);
    iVar2 = *(int *)((int64_t)*(int *)((int64_t)plVar3 + 0xac) * 0xe0 + 0x60 + render_system_config);
    if (param_4 == '\0') {
      lStackX_8 = 0;
    }
    else {
      fStackX_14 = param_5;
      uStackX_10 = 0;
    }
    plVar6 = &lStackX_8;
    if (param_4 != '\0') {
      plVar6 = (int64_t *)&uStackX_10;
    }
    lVar7 = *plVar6;
    fVar1 = *(float *)((int64_t)plVar6 + 4);
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
    *(int8_t *)(plVar3 + 0x17) = uVar5;
    *(int8_t *)((int64_t)plVar3 + 0xb9) = 0;
    if (iVar2 == 0) {
      uVar10 = *(uint64_t *)(lVar9 + 0x208);
      plVar3[0x4a3] = render_system_config;
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
        lVar7 = *(int64_t *)(param_2 + 0x8a8);
        if (lVar7 != 0) {
          lVar9 = *(int64_t *)(lVar7 + 0x260);
        }
        FUN_180085020(lVar7 + 0x70,auStack_68);
        uVar8 = *(uint64_t *)(lVar9 + 0x210);
      }
      FUN_180577110(plVar3,uVar8,uVar10);
    }
    FUN_18058ada0(plVar3,0,*(uint64_t *)
                            (*(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260) + 0x208),0);
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





