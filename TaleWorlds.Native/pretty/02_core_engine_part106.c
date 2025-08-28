#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part106.c - 14 个函数

// 函数: void FUN_1801226e9(uint64_t param_1,float *param_2,longlong param_3)
void FUN_1801226e9(uint64_t param_1,float *param_2,longlong param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  longlong unaff_RBX;
  longlong lVar9;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R13;
  float unaff_XMM6_Da;
  float unaff_XMM9_Da;
  
  fVar2 = *(float *)(param_3 + 4);
  fVar3 = *param_2;
  uVar8 = func_0x000180121e20();
  if ((uVar8 & 0xff000000) != 0) {
    if (unaff_RBX == 0) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (*(char *)(unaff_RDI + lVar9) != '\0');
      unaff_RBX = lVar9 + unaff_RDI;
    }
    if (unaff_RDI != unaff_RBX) {
      lVar9 = *(longlong *)(unaff_R13 + 0x38);
      pfVar1 = (float *)(*(longlong *)(unaff_R13 + 0x68) + -0x10 +
                        (longlong)*(int *)(unaff_R13 + 0x60) * 0x10);
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      *(float *)(unaff_RBP + -0x59) = fVar4;
      *(float *)(unaff_RBP + -0x55) = fVar5;
      *(float *)(unaff_RBP + -0x51) = fVar6;
      *(float *)(unaff_RBP + -0x4d) = fVar7;
      if (fVar4 < fVar3) {
        *(float *)(unaff_RBP + -0x59) = fVar3;
      }
      if (*(float *)(unaff_RBP + -0x55) < unaff_XMM6_Da) {
        *(float *)(unaff_RBP + -0x55) = unaff_XMM6_Da;
      }
      if (unaff_XMM9_Da <= *(float *)(unaff_RBP + -0x51)) {
        *(float *)(unaff_RBP + -0x51) = unaff_XMM9_Da;
      }
      if (fVar2 <= *(float *)(unaff_RBP + -0x4d)) {
        *(float *)(unaff_RBP + -0x4d) = fVar2;
      }
      FUN_180297590(*(uint64_t *)(lVar9 + 8));
    }
  }
  return;
}





// 函数: void FUN_1801227d7(void)
void FUN_1801227d7(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180122890(uint64_t param_1,uint64_t param_2,char *param_3,char *param_4,
void FUN_180122890(uint64_t param_1,uint64_t param_2,char *param_3,char *param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7)

{
  longlong lVar1;
  char *pcVar2;
  char *pcVar3;
  
  lVar1 = _DAT_180c8a9b0;
  pcVar3 = (char *)0xffffffffffffffff;
  if (param_4 != (char *)0x0) {
    pcVar3 = param_4;
  }
  pcVar2 = param_3;
  if (param_3 < pcVar3) {
    while (*pcVar2 != '\0') {
      if (((*pcVar2 == '#') && (pcVar2[1] == '#')) || (pcVar2 = pcVar2 + 1, pcVar3 <= pcVar2))
      break;
    }
  }
  if (((int)pcVar2 != (int)param_3) &&
     (FUN_1801224c0(*(uint64_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x2e8),param_1,param_2,
                    param_3,pcVar2,param_5,param_6,param_7), *(char *)(lVar1 + 0x2e38) != '\0')) {
    FUN_18013c800(param_1,param_3,pcVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180122906(void)
void FUN_180122906(void)

{
  longlong lVar1;
  
  lVar1 = _DAT_180c8a9b0;
  FUN_1801224c0(*(uint64_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x2e8));
  if (*(char *)(lVar1 + 0x2e38) != '\0') {
    FUN_18013c800();
  }
  return;
}





// 函数: void FUN_180122938(void)
void FUN_180122938(void)

{
  FUN_18013c800();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180122960(uint64_t param_1,uint64_t param_2,int32_t param_3,char param_4,
void FUN_180122960(uint64_t param_1,uint64_t param_2,int32_t param_3,char param_4,
                  int32_t param_5)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint64_t uStack_58;
  uint64_t uStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int32_t uStack_38;
  float fStack_34;
  
  lVar4 = _DAT_180c8a9b0;
  lVar2 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
  uStack_58 = param_2;
  uStack_50 = param_1;
  FUN_180293f50(*(uint64_t *)(lVar2 + 0x2e8),&uStack_50,&uStack_58,param_3,param_5,0xf);
  fVar1 = *(float *)(lVar4 + 0x1668);
  if ((param_4 != '\0') && (0.0 < fVar1)) {
    fStack_40 = *(float *)(_DAT_180c8a9b0 + 0x1728);
    fStack_3c = *(float *)(_DAT_180c8a9b0 + 0x172c);
    uStack_38 = *(int32_t *)(_DAT_180c8a9b0 + 0x1730);
    fStack_34 = *(float *)(_DAT_180c8a9b0 + 0x1734) * *(float *)(_DAT_180c8a9b0 + 0x1628);
    lVar4 = _DAT_180c8a9b0;
    uVar3 = func_0x000180121e20(&fStack_40);
    fStack_48 = (float)uStack_58 + 1.0;
    fStack_40 = (float)uStack_50 + 1.0;
    fStack_44 = uStack_58._4_4_ + 1.0;
    fStack_3c = uStack_50._4_4_ + 1.0;
    if ((uVar3 & 0xff000000) != 0) {
      FUN_180293e80(*(uint64_t *)(lVar2 + 0x2e8),&fStack_40,&fStack_48,uVar3,param_5,0xf,fVar1);
      lVar4 = _DAT_180c8a9b0;
    }
    fStack_40 = *(float *)(lVar4 + 0x1718);
    fStack_3c = *(float *)(lVar4 + 0x171c);
    uStack_38 = *(int32_t *)(lVar4 + 0x1720);
    fStack_34 = *(float *)(lVar4 + 0x1724) * *(float *)(lVar4 + 0x1628);
    uVar3 = func_0x000180121e20(&fStack_40);
    if ((uVar3 & 0xff000000) != 0) {
      FUN_180293e80(*(uint64_t *)(lVar2 + 0x2e8),&uStack_50,&uStack_58,uVar3,param_5,0xf,fVar1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180122b10(uint64_t param_1,uint64_t param_2,int32_t param_3)
void FUN_180122b10(uint64_t param_1,uint64_t param_2,int32_t param_3)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  float fStackX_20;
  float fStackX_24;
  uint64_t uStack_48;
  uint64_t uStack_40;
  float fStack_38;
  float fStack_34;
  int32_t uStack_30;
  float fStack_2c;
  
  fVar1 = *(float *)(_DAT_180c8a9b0 + 0x1668);
  lVar2 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
  if (0.0 < fVar1) {
    fStack_38 = *(float *)(_DAT_180c8a9b0 + 0x1728);
    fStack_34 = *(float *)(_DAT_180c8a9b0 + 0x172c);
    uStack_30 = *(int32_t *)(_DAT_180c8a9b0 + 0x1730);
    fStack_2c = *(float *)(_DAT_180c8a9b0 + 0x1734) * *(float *)(_DAT_180c8a9b0 + 0x1628);
    lVar4 = _DAT_180c8a9b0;
    uStack_48 = param_2;
    uStack_40 = param_1;
    uVar3 = func_0x000180121e20(&fStack_38);
    fStackX_20 = (float)uStack_48 + 1.0;
    fStack_38 = (float)uStack_40 + 1.0;
    fStackX_24 = uStack_48._4_4_ + 1.0;
    fStack_34 = uStack_40._4_4_ + 1.0;
    if ((uVar3 & 0xff000000) != 0) {
      FUN_180293e80(*(uint64_t *)(lVar2 + 0x2e8),&fStack_38,&fStackX_20,uVar3,param_3,0xf,fVar1);
      lVar4 = _DAT_180c8a9b0;
    }
    fStack_38 = *(float *)(lVar4 + 0x1718);
    fStack_34 = *(float *)(lVar4 + 0x171c);
    uStack_30 = *(int32_t *)(lVar4 + 0x1720);
    fStack_2c = *(float *)(lVar4 + 0x1724) * *(float *)(lVar4 + 0x1628);
    uVar3 = func_0x000180121e20(&fStack_38);
    if ((uVar3 & 0xff000000) != 0) {
      FUN_180293e80(*(uint64_t *)(lVar2 + 0x2e8),&uStack_40,&uStack_48,uVar3,param_3,0xf,fVar1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180122c80(uint64_t param_1,int param_2,float param_3)
void FUN_180122c80(uint64_t param_1,int param_2,float param_3)

{
  float fVar1;
  int32_t uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStackX_20;
  float fStackX_24;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  float fStack_5c;
  
  fVar7 = 0.0;
  fStack_74 = 0.0;
  fVar6 = 0.0;
  fVar1 = *(float *)(_DAT_180c8a9b0 + 0x19f8);
  fVar5 = 0.0;
  fVar4 = fVar1 * 0.4 * param_3;
  fStackX_24 = (float)((ulonglong)param_1 >> 0x20);
  fStack_6c = fVar1 * 0.5 * param_3 + fStackX_24;
  fStackX_20 = (float)param_1;
  fStack_70 = fVar1 * 0.5 + fStackX_20;
  fStack_78 = 0.0;
  fVar8 = 0.0;
  if (-1 < param_2) {
    if (param_2 < 2) {
      if (param_2 == 0) {
        fVar4 = fVar1 * -0.4 * param_3;
      }
      fVar5 = fVar4 * -0.75;
      fVar7 = fVar4 * 0.75;
      fStack_74 = fVar4 * 0.866;
      fVar8 = fVar4 * -0.866;
      fStack_78 = fVar5;
    }
    else if (param_2 < 4) {
      if (param_2 == 2) {
        fVar4 = fVar1 * -0.4 * param_3;
      }
      fStack_74 = fVar4 * -0.75;
      fVar6 = fVar4 * 0.75;
      fVar5 = fVar4 * 0.866;
      fStack_78 = fVar4 * -0.866;
      fVar8 = fStack_74;
    }
  }
  uStack_68 = *(int32_t *)(_DAT_180c8a9b0 + 0x16c8);
  uStack_64 = *(int32_t *)(_DAT_180c8a9b0 + 0x16cc);
  uStack_60 = *(int32_t *)(_DAT_180c8a9b0 + 0x16d0);
  fStack_5c = *(float *)(_DAT_180c8a9b0 + 0x16d4) * *(float *)(_DAT_180c8a9b0 + 0x1628);
  _fStackX_20 = CONCAT44(fStack_6c + fVar8,fStack_70 + fVar5);
  fStack_78 = fStack_70 + fStack_78;
  fStack_70 = fStack_70 + fVar7;
  fStack_74 = fStack_6c + fStack_74;
  fStack_6c = fStack_6c + fVar6;
  lVar3 = _DAT_180c8a9b0;
  uVar2 = func_0x000180121e20(&uStack_68);
  FUN_1802940f0(*(uint64_t *)(*(longlong *)(lVar3 + 0x1af8) + 0x2e8),&fStack_70,&fStack_78,
                &fStackX_20,uVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180122e80(uint64_t param_1)
void FUN_180122e80(uint64_t param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint64_t uStack_28;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  float fStack_14;
  
  uStack_20 = *(int32_t *)(_DAT_180c8a9b0 + 0x16c8);
  uStack_1c = *(int32_t *)(_DAT_180c8a9b0 + 0x16cc);
  uStack_18 = *(int32_t *)(_DAT_180c8a9b0 + 0x16d0);
  lVar1 = *(longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x2e8);
  fStack_14 = *(float *)(_DAT_180c8a9b0 + 0x16d4) * *(float *)(_DAT_180c8a9b0 + 0x1628);
  lVar3 = _DAT_180c8a9b0;
  uStack_28 = param_1;
  uVar2 = func_0x000180121e20(&uStack_20);
  if ((uVar2 & 0xff000000) != 0) {
    FUN_180293860(lVar1,&uStack_28,*(float *)(lVar3 + 0x19f8) * 0.2,0,0x40afede0,7);
    FUN_180293190(lVar1,*(uint64_t *)(lVar1 + 0x88),*(int32_t *)(lVar1 + 0x80),uVar2);
    *(int32_t *)(lVar1 + 0x80) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180122f40(uint64_t param_1,int32_t param_2,float param_3)
void FUN_180122f40(uint64_t param_1,int32_t param_2,float param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStackX_20;
  float fStackX_24;
  
  lVar1 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
  fVar5 = param_3 * 0.2;
  if (fVar5 <= 1.0) {
    fVar5 = 1.0;
  }
  param_3 = param_3 + fVar5 * -0.5;
  fStackX_24 = (float)((ulonglong)param_1 >> 0x20);
  fStackX_20 = (float)param_1;
  fVar3 = param_3 * 0.33333334;
  fVar2 = fVar5 * 0.25 + fStackX_20 + fVar3;
  fVar4 = (fVar5 * 0.25 + fStackX_24 + param_3) - fVar3 * 0.5;
  _fStackX_20 = CONCAT44(fVar4 - fVar3,fVar2 - fVar3);
  FUN_18011d9a0(*(longlong *)(lVar1 + 0x2e8) + 0x80,&fStackX_20);
  _fStackX_20 = CONCAT44(fVar4,fVar2);
  FUN_18011d9a0(*(longlong *)(lVar1 + 0x2e8) + 0x80,&fStackX_20);
  _fStackX_20 = CONCAT44(fVar4 - (fVar3 + fVar3),fVar3 + fVar3 + fVar2);
  FUN_18011d9a0(*(longlong *)(lVar1 + 0x2e8) + 0x80,&fStackX_20);
  lVar1 = *(longlong *)(lVar1 + 0x2e8);
  FUN_1802923e0(lVar1,*(uint64_t *)(lVar1 + 0x88),*(int32_t *)(lVar1 + 0x80),param_2,0,fVar5);
  *(int32_t *)(lVar1 + 0x80) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801230e0(float *param_1,uint param_2,longlong param_3)
void FUN_1801230e0(float *param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int32_t uVar15;
  float fStackX_18;
  float fStackX_1c;
  float fStackX_20;
  float fStackX_24;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  if (((*(char *)(param_3 + 0x1d06) == '\0') || ((param_2 & 4) != 0)) &&
     (lVar5 = *(longlong *)(param_3 + 0x1af8), *(char *)(lVar5 + 0x17c) == '\0')) {
    if ((param_2 & 8) == 0) {
      uVar15 = *(int32_t *)(param_3 + 0x1664);
    }
    else {
      uVar15 = 0;
    }
    fVar2 = *(float *)(lVar5 + 0x228);
    fVar3 = *(float *)(lVar5 + 0x22c);
    fStack_b8 = *param_1;
    fStack_b4 = param_1[1];
    fStack_b0 = param_1[2];
    fStack_ac = param_1[3];
    fVar14 = fVar2;
    if (fVar2 <= fStack_b8) {
      fVar14 = fStack_b8;
    }
    fVar12 = fVar3;
    if (fVar3 <= fStack_b4) {
      fVar12 = fStack_b4;
    }
    fVar4 = *(float *)(lVar5 + 0x230);
    fVar10 = fVar4;
    if (fStack_b0 <= fVar4) {
      fVar10 = fStack_b0;
    }
    fVar8 = *(float *)(lVar5 + 0x234);
    if (fStack_ac <= *(float *)(lVar5 + 0x234)) {
      fVar8 = fStack_ac;
    }
    fVar9 = fVar8;
    fVar11 = fVar10;
    fVar13 = fVar12;
    if ((param_2 & 1) != 0) {
      fVar14 = fVar14 - 4.0;
      fVar11 = fVar10 + 4.0;
      fVar9 = fVar8 + 4.0;
      fVar13 = fVar12 - 4.0;
      if (((fVar14 < fVar2) || (fVar13 < fVar3)) ||
         ((fVar4 < fVar11 ||
          (*(float *)(lVar5 + 0x234) <= fVar9 && fVar9 != *(float *)(lVar5 + 0x234))))) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) {
        FUN_180291b40(*(uint64_t *)(lVar5 + 0x2e8),CONCAT44(fVar13,fVar14),CONCAT44(fVar9,fVar11),
                      0);
      }
      fStack_b8 = *(float *)(_DAT_180c8a9b0 + 0x19a8);
      fStack_b4 = *(float *)(_DAT_180c8a9b0 + 0x19ac);
      fStack_b0 = *(float *)(_DAT_180c8a9b0 + 0x19b0);
      fStack_ac = *(float *)(_DAT_180c8a9b0 + 0x19b4) * *(float *)(_DAT_180c8a9b0 + 0x1628);
      uVar7 = func_0x000180121e20(&fStack_b8);
      fStackX_18 = fVar10 + 3.0;
      fStackX_1c = fVar8 + 3.0;
      fStackX_24 = fVar12 - 3.0;
      fStackX_20 = fVar14 + 1.0;
      if ((uVar7 & 0xff000000) != 0) {
        FUN_180293e80(*(uint64_t *)(lVar5 + 0x2e8),&fStackX_20,&fStackX_18,uVar7,uVar15,0xf,
                      0x40000000);
      }
      if (!bVar6) {
        piVar1 = (int *)(*(longlong *)(lVar5 + 0x2e8) + 0x60);
        *piVar1 = *piVar1 + -1;
        FUN_180291950();
      }
    }
    if ((param_2 & 2) != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x2e8);
      fStack_b8 = *(float *)(_DAT_180c8a9b0 + 0x19a8);
      fStack_b4 = *(float *)(_DAT_180c8a9b0 + 0x19ac);
      fStack_b0 = *(float *)(_DAT_180c8a9b0 + 0x19b0);
      fStack_ac = *(float *)(_DAT_180c8a9b0 + 0x19b4) * *(float *)(_DAT_180c8a9b0 + 0x1628);
      uVar7 = func_0x000180121e20(&fStack_b8);
      if ((uVar7 & 0xff000000) != 0) {
        if ((*(byte *)(lVar5 + 0x30) & 1) == 0) {
          fStackX_18 = fVar11 - 0.49;
          fStackX_1c = fVar9 - 0.49;
        }
        else {
          fStackX_18 = fVar11 - 0.5;
          fStackX_1c = fVar9 - 0.5;
        }
        fStackX_20 = fVar14 + 0.5;
        fStackX_24 = fVar13 + 0.5;
        FUN_1802939e0(lVar5,&fStackX_20,&fStackX_18,uVar15,0xffffffff);
        FUN_1802923e0(lVar5,*(uint64_t *)(lVar5 + 0x88),*(int32_t *)(lVar5 + 0x80),uVar7,1,
                      0x3f800000);
        *(int32_t *)(lVar5 + 0x80) = 0;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180123105(float *param_1,uint64_t param_2,longlong param_3)
void FUN_180123105(float *param_1,uint64_t param_2,longlong param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  int32_t uVar6;
  int32_t uVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int32_t uVar18;
  
  lVar5 = *(longlong *)(param_3 + 0x1af8);
  if (*(char *)(lVar5 + 0x17c) == '\0') {
    if ((unaff_RDI & 8) == 0) {
      uVar18 = *(int32_t *)(param_3 + 0x1664);
    }
    else {
      uVar18 = 0;
    }
    fVar2 = *(float *)(lVar5 + 0x228);
    fVar3 = *(float *)(lVar5 + 0x22c);
    fVar11 = *(float *)(lVar5 + 0x234);
    fVar4 = *param_1;
    fVar13 = param_1[1];
    fVar12 = param_1[2];
    fVar14 = param_1[3];
    fVar17 = fVar2;
    if (fVar2 <= fVar4) {
      fVar17 = fVar4;
    }
    fVar15 = fVar3;
    if (fVar3 <= fVar13) {
      fVar15 = fVar13;
    }
    *(float *)(unaff_RBP + -0x59) = fVar4;
    *(float *)(unaff_RBP + -0x55) = fVar13;
    *(float *)(unaff_RBP + -0x51) = fVar12;
    *(float *)(unaff_RBP + -0x4d) = fVar14;
    fVar4 = *(float *)(lVar5 + 0x230);
    fVar13 = fVar4;
    if (*(float *)(unaff_RBP + -0x51) <= fVar4) {
      fVar13 = *(float *)(unaff_RBP + -0x51);
    }
    if (*(float *)(unaff_RBP + -0x4d) <= fVar11) {
      fVar11 = *(float *)(unaff_RBP + -0x4d);
    }
    fVar12 = fVar11;
    fVar14 = fVar13;
    fVar16 = fVar15;
    if ((unaff_RDI & 1) != 0) {
      fVar17 = fVar17 - 4.0;
      fVar14 = fVar13 + 4.0;
      fVar12 = fVar11 + 4.0;
      fVar16 = fVar15 - 4.0;
      if ((((fVar17 < fVar2) || (fVar16 < fVar3)) || (fVar4 < fVar14)) ||
         (*(float *)(lVar5 + 0x234) <= fVar12 && fVar12 != *(float *)(lVar5 + 0x234))) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (!bVar8) {
        FUN_180291b40(*(uint64_t *)(lVar5 + 0x2e8),CONCAT44(fVar16,fVar17),CONCAT44(fVar12,fVar14)
                      ,0);
      }
      lVar9 = _DAT_180c8a9b0;
      uVar6 = *(int32_t *)(_DAT_180c8a9b0 + 0x19ac);
      uVar7 = *(int32_t *)(_DAT_180c8a9b0 + 0x19b0);
      fVar2 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
      *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(_DAT_180c8a9b0 + 0x19a8);
      *(int32_t *)(unaff_RBP + -0x55) = uVar6;
      *(int32_t *)(unaff_RBP + -0x51) = uVar7;
      *(float *)(unaff_RBP + -0x4d) = fVar2;
      *(float *)(unaff_RBP + -0x4d) = fVar2 * *(float *)(lVar9 + 0x1628);
      uVar10 = func_0x000180121e20(unaff_RBP + -0x59);
      *(float *)(unaff_RBP + 0x77) = fVar13 + 3.0;
      *(float *)(unaff_RBP + 0x7b) = fVar11 + 3.0;
      *(float *)(unaff_RBP + 0x83) = fVar15 - 3.0;
      *(float *)(unaff_RBP + 0x7f) = fVar17 + 1.0;
      if ((uVar10 & 0xff000000) != 0) {
        FUN_180293e80(*(uint64_t *)(lVar5 + 0x2e8),unaff_RBP + 0x7f,unaff_RBP + 0x77,uVar10,uVar18
                     );
      }
      if (!bVar8) {
        piVar1 = (int *)(*(longlong *)(lVar5 + 0x2e8) + 0x60);
        *piVar1 = *piVar1 + -1;
        FUN_180291950();
      }
    }
    lVar9 = _DAT_180c8a9b0;
    if ((unaff_RDI & 2) != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x2e8);
      uVar6 = *(int32_t *)(_DAT_180c8a9b0 + 0x19ac);
      uVar7 = *(int32_t *)(_DAT_180c8a9b0 + 0x19b0);
      fVar2 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
      *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(_DAT_180c8a9b0 + 0x19a8);
      *(int32_t *)(unaff_RBP + -0x55) = uVar6;
      *(int32_t *)(unaff_RBP + -0x51) = uVar7;
      *(float *)(unaff_RBP + -0x4d) = fVar2;
      *(float *)(unaff_RBP + -0x4d) = fVar2 * *(float *)(lVar9 + 0x1628);
      uVar10 = func_0x000180121e20(unaff_RBP + -0x59);
      if ((uVar10 & 0xff000000) != 0) {
        if ((*(byte *)(lVar5 + 0x30) & 1) == 0) {
          fVar14 = fVar14 - 0.49;
          fVar12 = fVar12 - 0.49;
        }
        else {
          fVar14 = fVar14 - 0.5;
          fVar12 = fVar12 - 0.5;
        }
        *(float *)(unaff_RBP + 0x77) = fVar14;
        *(float *)(unaff_RBP + 0x7b) = fVar12;
        *(float *)(unaff_RBP + 0x7f) = fVar17 + 0.5;
        *(float *)(unaff_RBP + 0x83) = fVar16 + 0.5;
        FUN_1802939e0(lVar5,unaff_RBP + 0x7f,unaff_RBP + 0x77,uVar18,0xffffffff);
        FUN_1802923e0(lVar5,*(uint64_t *)(lVar5 + 0x88),*(int32_t *)(lVar5 + 0x80),uVar10,1);
        *(int32_t *)(lVar5 + 0x80) = 0;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180123121(float *param_1,uint64_t param_2,longlong param_3)
void FUN_180123121(float *param_1,uint64_t param_2,longlong param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  int32_t uVar6;
  int32_t uVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int32_t uVar18;
  
  if ((unaff_RDI & 8) == 0) {
    uVar18 = *(int32_t *)(param_3 + 0x1664);
  }
  else {
    uVar18 = 0;
  }
  fVar2 = *(float *)(unaff_RBX + 0x228);
  fVar3 = *(float *)(unaff_RBX + 0x22c);
  fVar11 = *(float *)(unaff_RBX + 0x234);
  fVar4 = *param_1;
  fVar13 = param_1[1];
  fVar12 = param_1[2];
  fVar14 = param_1[3];
  fVar17 = fVar2;
  if (fVar2 <= fVar4) {
    fVar17 = fVar4;
  }
  fVar15 = fVar3;
  if (fVar3 <= fVar13) {
    fVar15 = fVar13;
  }
  *(float *)(unaff_RBP + -0x59) = fVar4;
  *(float *)(unaff_RBP + -0x55) = fVar13;
  *(float *)(unaff_RBP + -0x51) = fVar12;
  *(float *)(unaff_RBP + -0x4d) = fVar14;
  fVar4 = *(float *)(unaff_RBX + 0x230);
  fVar13 = fVar4;
  if (*(float *)(unaff_RBP + -0x51) <= fVar4) {
    fVar13 = *(float *)(unaff_RBP + -0x51);
  }
  if (*(float *)(unaff_RBP + -0x4d) <= fVar11) {
    fVar11 = *(float *)(unaff_RBP + -0x4d);
  }
  fVar12 = fVar11;
  fVar14 = fVar13;
  fVar16 = fVar15;
  if ((unaff_RDI & 1) != 0) {
    fVar17 = fVar17 - 4.0;
    fVar14 = fVar13 + 4.0;
    fVar12 = fVar11 + 4.0;
    fVar16 = fVar15 - 4.0;
    if ((((fVar17 < fVar2) || (fVar16 < fVar3)) || (fVar4 < fVar14)) ||
       (*(float *)(unaff_RBX + 0x234) <= fVar12 && fVar12 != *(float *)(unaff_RBX + 0x234))) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) {
      FUN_180291b40(*(uint64_t *)(unaff_RBX + 0x2e8),CONCAT44(fVar16,fVar17),
                    CONCAT44(fVar12,fVar14),0);
    }
    lVar9 = _DAT_180c8a9b0;
    uVar6 = *(int32_t *)(_DAT_180c8a9b0 + 0x19ac);
    uVar7 = *(int32_t *)(_DAT_180c8a9b0 + 0x19b0);
    fVar2 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
    *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(_DAT_180c8a9b0 + 0x19a8);
    *(int32_t *)(unaff_RBP + -0x55) = uVar6;
    *(int32_t *)(unaff_RBP + -0x51) = uVar7;
    *(float *)(unaff_RBP + -0x4d) = fVar2;
    *(float *)(unaff_RBP + -0x4d) = fVar2 * *(float *)(lVar9 + 0x1628);
    uVar10 = func_0x000180121e20(unaff_RBP + -0x59);
    *(float *)(unaff_RBP + 0x77) = fVar13 + 3.0;
    *(float *)(unaff_RBP + 0x7b) = fVar11 + 3.0;
    *(float *)(unaff_RBP + 0x83) = fVar15 - 3.0;
    *(float *)(unaff_RBP + 0x7f) = fVar17 + 1.0;
    if ((uVar10 & 0xff000000) != 0) {
      FUN_180293e80(*(uint64_t *)(unaff_RBX + 0x2e8),unaff_RBP + 0x7f,unaff_RBP + 0x77,uVar10,
                    uVar18);
    }
    if (!bVar8) {
      piVar1 = (int *)(*(longlong *)(unaff_RBX + 0x2e8) + 0x60);
      *piVar1 = *piVar1 + -1;
      FUN_180291950();
    }
  }
  lVar9 = _DAT_180c8a9b0;
  if ((unaff_RDI & 2) != 0) {
    lVar5 = *(longlong *)(unaff_RBX + 0x2e8);
    uVar6 = *(int32_t *)(_DAT_180c8a9b0 + 0x19ac);
    uVar7 = *(int32_t *)(_DAT_180c8a9b0 + 0x19b0);
    fVar2 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
    *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(_DAT_180c8a9b0 + 0x19a8);
    *(int32_t *)(unaff_RBP + -0x55) = uVar6;
    *(int32_t *)(unaff_RBP + -0x51) = uVar7;
    *(float *)(unaff_RBP + -0x4d) = fVar2;
    *(float *)(unaff_RBP + -0x4d) = fVar2 * *(float *)(lVar9 + 0x1628);
    uVar10 = func_0x000180121e20(unaff_RBP + -0x59);
    if ((uVar10 & 0xff000000) != 0) {
      if ((*(byte *)(lVar5 + 0x30) & 1) == 0) {
        fVar14 = fVar14 - 0.49;
        fVar12 = fVar12 - 0.49;
      }
      else {
        fVar14 = fVar14 - 0.5;
        fVar12 = fVar12 - 0.5;
      }
      *(float *)(unaff_RBP + 0x77) = fVar14;
      *(float *)(unaff_RBP + 0x7b) = fVar12;
      *(float *)(unaff_RBP + 0x7f) = fVar17 + 0.5;
      *(float *)(unaff_RBP + 0x83) = fVar16 + 0.5;
      FUN_1802939e0(lVar5,unaff_RBP + 0x7f,unaff_RBP + 0x77,uVar18,0xffffffff);
      FUN_1802923e0(lVar5,*(uint64_t *)(lVar5 + 0x88),*(int32_t *)(lVar5 + 0x80),uVar10,1);
      *(int32_t *)(lVar5 + 0x80) = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801231cf(float param_1,float param_2,float param_3,float param_4)
void FUN_1801231cf(float param_1,float param_2,float param_3,float param_4)

{
  int *piVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  float fVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  float unaff_XMM6_Da;
  float fVar9;
  float unaff_XMM7_Da;
  float fVar10;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar11;
  float unaff_XMM14_Da;
  
  fVar11 = unaff_XMM9_Da - param_1;
  fVar10 = unaff_XMM7_Da + param_1;
  fVar9 = unaff_XMM6_Da + param_1;
  param_1 = unaff_XMM8_Da - param_1;
  if ((((fVar11 < param_4) || (param_1 < param_3)) || (param_2 < fVar10)) ||
     (*(float *)(unaff_RBX + 0x234) <= fVar9 && fVar9 != *(float *)(unaff_RBX + 0x234))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    FUN_180291b40(*(uint64_t *)(unaff_RBX + 0x2e8),CONCAT44(param_1,fVar11),CONCAT44(fVar9,fVar10)
                  ,0);
  }
  lVar7 = _DAT_180c8a9b0;
  uVar3 = *(int32_t *)(_DAT_180c8a9b0 + 0x19ac);
  uVar4 = *(int32_t *)(_DAT_180c8a9b0 + 0x19b0);
  fVar5 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
  *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(_DAT_180c8a9b0 + 0x19a8);
  *(int32_t *)(unaff_RBP + -0x55) = uVar3;
  *(int32_t *)(unaff_RBP + -0x51) = uVar4;
  *(float *)(unaff_RBP + -0x4d) = fVar5;
  *(float *)(unaff_RBP + -0x4d) = fVar5 * *(float *)(lVar7 + 0x1628);
  uVar8 = func_0x000180121e20(unaff_RBP + -0x59);
  *(float *)(unaff_RBP + 0x77) = unaff_XMM7_Da + 3.0;
  *(float *)(unaff_RBP + 0x7b) = unaff_XMM6_Da + 3.0;
  *(float *)(unaff_RBP + 0x83) = unaff_XMM8_Da - 3.0;
  *(float *)(unaff_RBP + 0x7f) = fVar11 + unaff_XMM14_Da;
  if ((uVar8 & 0xff000000) != 0) {
    FUN_180293e80(*(uint64_t *)(unaff_RBX + 0x2e8),unaff_RBP + 0x7f,unaff_RBP + 0x77,uVar8);
  }
  if (!bVar6) {
    piVar1 = (int *)(*(longlong *)(unaff_RBX + 0x2e8) + 0x60);
    *piVar1 = *piVar1 + -1;
    FUN_180291950();
  }
  lVar7 = _DAT_180c8a9b0;
  if ((unaff_RDI & 2) != 0) {
    lVar2 = *(longlong *)(unaff_RBX + 0x2e8);
    uVar3 = *(int32_t *)(_DAT_180c8a9b0 + 0x19ac);
    uVar4 = *(int32_t *)(_DAT_180c8a9b0 + 0x19b0);
    fVar5 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
    *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(_DAT_180c8a9b0 + 0x19a8);
    *(int32_t *)(unaff_RBP + -0x55) = uVar3;
    *(int32_t *)(unaff_RBP + -0x51) = uVar4;
    *(float *)(unaff_RBP + -0x4d) = fVar5;
    *(float *)(unaff_RBP + -0x4d) = fVar5 * *(float *)(lVar7 + 0x1628);
    uVar8 = func_0x000180121e20(unaff_RBP + -0x59);
    if ((uVar8 & 0xff000000) != 0) {
      if ((*(byte *)(lVar2 + 0x30) & 1) == 0) {
        fVar10 = fVar10 - 0.49;
        fVar9 = fVar9 - 0.49;
      }
      else {
        fVar10 = fVar10 - 0.5;
        fVar9 = fVar9 - 0.5;
      }
      *(float *)(unaff_RBP + 0x77) = fVar10;
      *(float *)(unaff_RBP + 0x7b) = fVar9;
      *(float *)(unaff_RBP + 0x7f) = fVar11 + 0.5;
      *(float *)(unaff_RBP + 0x83) = param_1 + 0.5;
      FUN_1802939e0(lVar2,unaff_RBP + 0x7f,unaff_RBP + 0x77);
      FUN_1802923e0(lVar2,*(uint64_t *)(lVar2 + 0x88),*(int32_t *)(lVar2 + 0x80),uVar8,1);
      *(int32_t *)(lVar2 + 0x80) = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



