#include "TaleWorlds.Native.Split.h"

// 99_part_08_part004.c - 18 个函数

// 函数: void FUN_1804de87e(void)
void FUN_1804de87e(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1804de880(uint64_t param_1,longlong param_2,uint param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_3 != 0xffffffff) {
    lVar4 = (longlong)(int)(*(uint *)(param_2 + 0x2b18) & param_3) * 0xd8;
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 11000) + (longlong)((int)param_3 >> 10) * 8);
    uVar1 = *(uint *)(lVar3 + 0x1c + lVar4);
    if (uVar1 != 0xffffffff) {
      uVar2 = *(uint *)(lVar3 + 0x18 + lVar4);
      lVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x698) + (longlong)((int)uVar1 >> 10) * 8) + 8
               + (longlong)(int)(*(uint *)(param_2 + 0x6b8) & uVar1) * 0x30);
      lVar4 = (longlong)(int)(*(uint *)(param_2 + 0x4a8) & uVar2) * 0x48 +
              *(longlong *)(*(longlong *)(param_2 + 0x488) + (longlong)((int)uVar2 >> 10) * 8) + 8;
      if ((*(byte *)(lVar3 + 0xa8) & 1) == 0) {
        if ((*(byte *)(lVar3 + 0xa8) >> 1 & 1) == 0) {
          fVar7 = *(float *)(param_2 + 0x58) - *(float *)(lVar4 + 0x30);
          fVar5 = *(float *)(param_2 + 0x60) - *(float *)(lVar4 + 0x38);
          fVar6 = *(float *)(param_2 + 0x5c) - *(float *)(lVar4 + 0x34);
          fVar5 = (fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) * 0.75 + 200.0;
          param_4 = (fVar5 / (fVar5 * 10.0 + 10000.0)) * param_4;
          if (*(float *)(lVar3 + 0x34) <= param_4 && param_4 != *(float *)(lVar3 + 0x34))
          goto LAB_1801bcd78;
        }
        else {
          param_4 = -1.0;
        }
        FUN_1802fac00(lVar3,lVar4,param_4);
      }
LAB_1801bcd78:
      if ((*(byte *)(lVar3 + 0xa8) >> 3 & 1) != 0) {
        (**(code **)(**(longlong **)(lVar3 + 0x210) + 0xd0))(*(longlong **)(lVar3 + 0x210),lVar3);
      }
      FUN_1802fb280(lVar3);
      if (*(longlong *)(lVar3 + 0x28) != 0) {
        FUN_1802fb280();
      }
      return *(int *)(lVar3 + 0x50) == *(int *)(_DAT_180c86870 + 0x224);
    }
  }
  return false;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1804de930(uint64_t param_1,longlong param_2,uint param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_3 != 0xffffffff) {
    lVar4 = (longlong)(int)(*(uint *)(param_2 + 0x2b18) & param_3) * 0xd8;
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 11000) + (longlong)((int)param_3 >> 10) * 8);
    uVar1 = *(uint *)(lVar3 + 0x1c + lVar4);
    if (uVar1 != 0xffffffff) {
      uVar2 = *(uint *)(lVar3 + 0x18 + lVar4);
      lVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x698) + (longlong)((int)uVar1 >> 10) * 8) + 8
               + (longlong)(int)(*(uint *)(param_2 + 0x6b8) & uVar1) * 0x30);
      lVar4 = (longlong)(int)(*(uint *)(param_2 + 0x4a8) & uVar2) * 0x48 +
              *(longlong *)(*(longlong *)(param_2 + 0x488) + (longlong)((int)uVar2 >> 10) * 8) + 8;
      if ((*(byte *)(lVar3 + 0xa8) & 1) == 0) {
        if ((*(byte *)(lVar3 + 0xa8) >> 1 & 1) == 0) {
          fVar7 = *(float *)(param_2 + 0x58) - *(float *)(lVar4 + 0x30);
          fVar5 = *(float *)(param_2 + 0x60) - *(float *)(lVar4 + 0x38);
          fVar6 = *(float *)(param_2 + 0x5c) - *(float *)(lVar4 + 0x34);
          fVar5 = (fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) * 0.32 + 79.36508;
          param_4 = (fVar5 / (fVar5 * 18.0 + 10000.0)) * param_4;
          if (*(float *)(lVar3 + 0x34) <= param_4 && param_4 != *(float *)(lVar3 + 0x34))
          goto LAB_1801bce68;
        }
        else {
          param_4 = -1.0;
        }
        FUN_1802fac00(lVar3,lVar4,param_4);
      }
LAB_1801bce68:
      if ((*(byte *)(lVar3 + 0xa8) >> 3 & 1) != 0) {
        (**(code **)(**(longlong **)(lVar3 + 0x210) + 0xd0))(*(longlong **)(lVar3 + 0x210),lVar3);
      }
      FUN_1802fb280(lVar3);
      if (*(longlong *)(lVar3 + 0x28) != 0) {
        FUN_1802fb280();
      }
      return *(int *)(lVar3 + 0x50) == *(int *)(_DAT_180c86870 + 0x224);
    }
  }
  return false;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1804de9e0(uint64_t param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_3 != 0xffffffff) {
    lVar4 = (longlong)(int)(*(uint *)(param_2 + 0x2b18) & param_3) * 0xd8;
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 11000) + (longlong)((int)param_3 >> 10) * 8);
    uVar1 = *(uint *)(lVar3 + 0x1c + lVar4);
    if (uVar1 != 0xffffffff) {
      uVar2 = *(uint *)(lVar3 + 0x18 + lVar4);
      lVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x698) + (longlong)((int)uVar1 >> 10) * 8) + 8
               + (longlong)(int)(*(uint *)(param_2 + 0x6b8) & uVar1) * 0x30);
      if ((*(byte *)(lVar3 + 0xa8) & 1) == 0) {
        FUN_1802fac00(lVar3,(longlong)(int)(*(uint *)(param_2 + 0x4a8) & uVar2) * 0x48 +
                            *(longlong *)
                             (*(longlong *)(param_2 + 0x488) + (longlong)((int)uVar2 >> 10) * 8) + 8
                      ,0xbf800000);
      }
      if ((*(byte *)(lVar3 + 0xa8) >> 3 & 1) != 0) {
        (**(code **)(**(longlong **)(lVar3 + 0x210) + 0xd0))(*(longlong **)(lVar3 + 0x210),lVar3);
      }
      FUN_1802fb280(lVar3);
      if (*(longlong *)(lVar3 + 0x28) != 0) {
        FUN_1802fb280();
      }
      return *(int *)(lVar3 + 0x50) == *(int *)(_DAT_180c86870 + 0x224);
    }
  }
  return false;
}






// 函数: void FUN_1804dea90(longlong *param_1)
void FUN_1804dea90(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lStackX_8;
  int32_t *puStackX_10;
  uint64_t uVar4;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_30;
  int32_t uStack_2c;
  longlong *plStack_28;
  void *puStack_20;
  void *puStack_18;
  
  uVar4 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  pcVar2 = *(code **)(**(longlong **)(*(longlong *)param_1[1] + 0x3580) + 0xb8);
  if (pcVar2 == (code *)&UNK_1802426a0) {
    lVar3 = (*(longlong **)(*(longlong *)param_1[1] + 0x3580))[0xda];
  }
  else {
    lVar3 = (*pcVar2)();
  }
  lStackX_8 = *(longlong *)(lVar3 + 0x3a8);
  if (lStackX_8 != 0) {
    puStackX_10 = &uStack_30;
    plStack_28 = &lStackX_8;
    puStack_20 = &UNK_1804dedb0;
    puStack_18 = &UNK_1804deda0;
    uStack_40 = (int32_t)lVar1;
    uStack_3c = (int32_t)((ulonglong)lVar1 >> 0x20);
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    FUN_18015b810(uStack_40,0,*(int32_t *)(lVar1 + 0x2d18),0x10,0xffffffffffffffff,&uStack_30,
                  uVar4);
  }
  return;
}






// 函数: void FUN_1804deba0(longlong *param_1)
void FUN_1804deba0(longlong *param_1)

{
  longlong lVar1;
  uint64_t uStackX_8;
  int32_t *puStackX_10;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_30;
  int32_t uStack_2c;
  uint64_t *puStack_28;
  void *puStack_20;
  void *puStack_18;
  
  lVar1 = *param_1;
  uStackX_8 = *(uint64_t *)param_1[1];
  puStackX_10 = &uStack_30;
  puStack_28 = &uStackX_8;
  puStack_20 = &UNK_1804df780;
  puStack_18 = &UNK_1804df770;
  uStack_40 = (int32_t)lVar1;
  uStack_3c = (int32_t)((ulonglong)lVar1 >> 0x20);
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  FUN_18015b810(uStackX_8,0,*(int32_t *)(lVar1 + 0x564),0x40,0xffffffffffffffff,&uStack_30,
                0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1804dec60(longlong *param_1)
void FUN_1804dec60(longlong *param_1)

{
  longlong alStack_30 [2];
  void *puStack_20;
  void *puStack_18;
  
  alStack_30[0] = *param_1;
  puStack_20 = &UNK_1804dee00;
  puStack_18 = &UNK_1804dedf0;
  FUN_18015b810(&UNK_1804dedf0,0,*(int32_t *)(alStack_30[0] + 0x2d18),0x10,0xfffffffffffffffe,
                alStack_30,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1804ded00(longlong *param_1)
void FUN_1804ded00(longlong *param_1)

{
  longlong alStack_30 [2];
  void *puStack_20;
  void *puStack_18;
  
  alStack_30[0] = *param_1;
  puStack_20 = &UNK_1804dee50;
  puStack_18 = &UNK_1804dee40;
  FUN_18015b810(&UNK_1804dee40,0,*(int32_t *)(alStack_30[0] + 0x50c),0x10,0xffffffffffffffff,
                alStack_30,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1804dee90(int param_1,int param_2,longlong *param_3)
void FUN_1804dee90(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int32_t uVar9;
  ulonglong uVar10;
  
  uVar8 = (ulonglong)param_1;
  uVar10 = uVar8;
  if (param_1 < param_2) {
    do {
      lVar3 = *param_3;
      iVar7 = (int)uVar8;
      if (iVar7 < *(int *)(lVar3 + 0x2c3c)) {
        lVar1 = (longlong)(iVar7 >> 10) * 8;
        piVar5 = (int *)(((longlong)*(int *)(lVar3 + 0x2c88) & uVar10) * 0x68 +
                        *(longlong *)(*(longlong *)(lVar3 + 0x2c68) + lVar1));
        if ((*piVar5 != -1) && ((uint *)(piVar5 + 2) != (uint *)0x0)) {
          uVar8 = (longlong)*(int *)(lVar3 + 0x418) & uVar10;
          lVar4 = uVar8 * 3;
          if (*(char *)(*(longlong *)(*(longlong *)(lVar3 + 0x3f8) + lVar1) + 8 + uVar8 * 0xc) ==
              '\0') {
            uVar9 = 0;
          }
          else {
            uVar2 = piVar5[2];
            lVar4 = (longlong)(int)uVar2;
            uVar9 = *(int32_t *)
                     (*(longlong *)
                       (*(longlong *)(lVar3 + 0x2cf0) + (longlong)((int)uVar2 >> 10) * 8) + 8 +
                     (longlong)(int)(*(uint *)(lVar3 + 0x2d10) & uVar2) * 0xc);
          }
          FUN_1804d9810(lVar3,lVar4,piVar5[5],uVar9);
          iVar6 = 0;
          if (*(longlong *)(piVar5 + 10) - *(longlong *)(piVar5 + 8) >> 2 != 0) {
            do {
              FUN_1804d9810(*param_3);
              iVar6 = iVar6 + 1;
            } while ((ulonglong)(longlong)iVar6 <
                     (ulonglong)(*(longlong *)(piVar5 + 10) - *(longlong *)(piVar5 + 8) >> 2));
          }
        }
      }
      uVar8 = (ulonglong)(iVar7 + 1U);
      uVar10 = uVar10 + 1;
    } while ((int)(iVar7 + 1U) < param_2);
  }
  return;
}






// 函数: void FUN_1804deeab(void)
void FUN_1804deeab(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  ulonglong unaff_RDI;
  longlong *unaff_R12;
  int unaff_R13D;
  int32_t uVar9;
  ulonglong uVar10;
  
  uVar10 = unaff_RDI;
  do {
    lVar3 = *unaff_R12;
    iVar8 = (int)unaff_RDI;
    if (iVar8 < *(int *)(lVar3 + 0x2c3c)) {
      lVar1 = (longlong)(iVar8 >> 10) * 8;
      piVar6 = (int *)(((longlong)*(int *)(lVar3 + 0x2c88) & uVar10) * 0x68 +
                      *(longlong *)(*(longlong *)(lVar3 + 0x2c68) + lVar1));
      if ((*piVar6 != -1) && ((uint *)(piVar6 + 2) != (uint *)0x0)) {
        uVar4 = (longlong)*(int *)(lVar3 + 0x418) & uVar10;
        lVar5 = uVar4 * 3;
        if (*(char *)(*(longlong *)(*(longlong *)(lVar3 + 0x3f8) + lVar1) + 8 + uVar4 * 0xc) == '\0'
           ) {
          uVar9 = 0;
        }
        else {
          uVar2 = piVar6[2];
          lVar5 = (longlong)(int)uVar2;
          uVar9 = *(int32_t *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x2cf0) + (longlong)((int)uVar2 >> 10) * 8)
                    + 8 + (longlong)(int)(*(uint *)(lVar3 + 0x2d10) & uVar2) * 0xc);
        }
        FUN_1804d9810(lVar3,lVar5,piVar6[5],uVar9);
        iVar7 = 0;
        if (*(longlong *)(piVar6 + 10) - *(longlong *)(piVar6 + 8) >> 2 != 0) {
          do {
            FUN_1804d9810(*unaff_R12);
            iVar7 = iVar7 + 1;
          } while ((ulonglong)(longlong)iVar7 <
                   (ulonglong)(*(longlong *)(piVar6 + 10) - *(longlong *)(piVar6 + 8) >> 2));
        }
      }
    }
    unaff_RDI = (ulonglong)(iVar8 + 1U);
    uVar10 = uVar10 + 1;
  } while ((int)(iVar8 + 1U) < unaff_R13D);
  return;
}






// 函数: void FUN_1804defe5(void)
void FUN_1804defe5(void)

{
  return;
}






// 函数: void FUN_1804df080(int param_1,int param_2,longlong *param_3)
void FUN_1804df080(int param_1,int param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar6;
  
  uVar4 = (ulonglong)param_1;
  uVar5 = uVar4;
  if (param_1 < param_2) {
    do {
      lVar2 = *param_3;
      iVar3 = (int)uVar4;
      if ((((iVar3 < *(int *)(lVar2 + 0x2acc)) &&
           (piVar6 = (int *)(((longlong)*(int *)(lVar2 + 0x2b18) & uVar5) * 0xd8 +
                            *(longlong *)
                             (*(longlong *)(lVar2 + 11000) + (longlong)(iVar3 >> 10) * 8)),
           *piVar6 != -1)) && (piVar6 != (int *)0xfffffffffffffff8)) &&
         ((uVar1 = piVar6[7], uVar1 != 0xffffffff &&
          (*(char *)(*(longlong *)
                      (*(longlong *)
                        (*(longlong *)(lVar2 + 0x698) + (longlong)((int)uVar1 >> 10) * 8) + 8 +
                      (longlong)(int)(*(uint *)(lVar2 + 0x6b8) & uVar1) * 0x30) + 0xaa) == '\0'))))
      {
        FUN_1803005b0();
      }
      uVar4 = (ulonglong)(iVar3 + 1U);
      uVar5 = uVar5 + 1;
    } while ((int)(iVar3 + 1U) < param_2);
  }
  return;
}






// 函数: void FUN_1804df0a0(void)
void FUN_1804df0a0(void)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong unaff_RBX;
  int unaff_ESI;
  ulonglong uVar4;
  int *piVar5;
  longlong *unaff_R14;
  
  uVar4 = unaff_RBX;
  do {
    lVar2 = *unaff_R14;
    iVar3 = (int)unaff_RBX;
    if ((((iVar3 < *(int *)(lVar2 + 0x2acc)) &&
         (piVar5 = (int *)(((longlong)*(int *)(lVar2 + 0x2b18) & uVar4) * 0xd8 +
                          *(longlong *)(*(longlong *)(lVar2 + 11000) + (longlong)(iVar3 >> 10) * 8))
         , *piVar5 != -1)) && (piVar5 != (int *)0xfffffffffffffff8)) &&
       (uVar1 = piVar5[7], uVar1 != 0xffffffff)) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar2 + 0x698) + (longlong)((int)uVar1 >> 10) * 8)
                      + 8 + (longlong)(int)(*(uint *)(lVar2 + 0x6b8) & uVar1) * 0x30) + 0xaa) ==
          '\0') {
        FUN_1803005b0();
      }
    }
    unaff_RBX = (ulonglong)(iVar3 + 1U);
    uVar4 = uVar4 + 1;
  } while ((int)(iVar3 + 1U) < unaff_ESI);
  return;
}






// 函数: void FUN_1804df140(void)
void FUN_1804df140(void)

{
  return;
}






// 函数: void FUN_1804df1a0(int param_1,int param_2,longlong *param_3)
void FUN_1804df1a0(int param_1,int param_2,longlong *param_3)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int *piVar7;
  float fVar8;
  
  uVar5 = (ulonglong)param_1;
  uVar6 = uVar5;
  if (param_1 < param_2) {
    do {
      lVar3 = *param_3;
      iVar4 = (int)uVar6;
      if ((((iVar4 < *(int *)(lVar3 + 0x2acc)) &&
           (piVar7 = (int *)(((longlong)*(int *)(lVar3 + 0x2b18) & uVar5) * 0xd8 +
                            *(longlong *)
                             (*(longlong *)(lVar3 + 11000) + (longlong)(iVar4 >> 10) * 8)),
           *piVar7 != -1)) && (piVar7 != (int *)0xfffffffffffffff8)) &&
         ((uVar2 = piVar7[7], uVar2 != 0xffffffff &&
          (lVar3 = *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar3 + 0x698) + (longlong)((int)uVar2 >> 10) * 8)
                     + 8 + (longlong)(int)(*(uint *)(lVar3 + 0x6b8) & uVar2) * 0x30),
          (*(byte *)(lVar3 + 0xa8) >> 3 & 1) == 0)))) {
        fVar1 = *(float *)param_3[1];
        fVar8 = fVar1 + *(float *)(lVar3 + 0x34);
        *(float *)(lVar3 + 0x30) = fVar1 + *(float *)(lVar3 + 0x30);
        *(float *)(lVar3 + 0x34) = fVar8;
        if (2 < (ushort)(*(short *)(lVar3 + 0x40) - 2U)) {
          (**(code **)**(uint64_t **)(lVar3 + 0x210))(*(uint64_t **)(lVar3 + 0x210),fVar1,lVar3)
          ;
          fVar8 = *(float *)(lVar3 + 0x34);
        }
        if (0.0 < fVar8) {
          *(ushort *)(lVar3 + 0xa8) = *(ushort *)(lVar3 + 0xa8) & 0xfffe;
        }
      }
      uVar5 = uVar5 + 1;
      uVar6 = (ulonglong)(iVar4 + 1U);
    } while ((int)(iVar4 + 1U) < param_2);
  }
  return;
}






// 函数: void FUN_1804df1b9(void)
void FUN_1804df1b9(void)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  int unaff_EBP;
  int iVar4;
  ulonglong unaff_RDI;
  ulonglong uVar5;
  int *piVar6;
  longlong *unaff_R14;
  float fVar7;
  
  uVar5 = unaff_RDI;
  do {
    lVar3 = *unaff_R14;
    iVar4 = (int)uVar5;
    if ((((iVar4 < *(int *)(lVar3 + 0x2acc)) &&
         (piVar6 = (int *)(((longlong)*(int *)(lVar3 + 0x2b18) & unaff_RDI) * 0xd8 +
                          *(longlong *)(*(longlong *)(lVar3 + 11000) + (longlong)(iVar4 >> 10) * 8))
         , *piVar6 != -1)) && (piVar6 != (int *)0xfffffffffffffff8)) &&
       (uVar2 = piVar6[7], uVar2 != 0xffffffff)) {
      lVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x698) + (longlong)((int)uVar2 >> 10) * 8) + 8 +
               (longlong)(int)(*(uint *)(lVar3 + 0x6b8) & uVar2) * 0x30);
      if ((*(byte *)(lVar3 + 0xa8) >> 3 & 1) == 0) {
        fVar1 = *(float *)unaff_R14[1];
        fVar7 = fVar1 + *(float *)(lVar3 + 0x34);
        *(float *)(lVar3 + 0x30) = fVar1 + *(float *)(lVar3 + 0x30);
        *(float *)(lVar3 + 0x34) = fVar7;
        if (2 < (ushort)(*(short *)(lVar3 + 0x40) - 2U)) {
          (**(code **)**(uint64_t **)(lVar3 + 0x210))(*(uint64_t **)(lVar3 + 0x210),fVar1,lVar3)
          ;
          fVar7 = *(float *)(lVar3 + 0x34);
        }
        if (0.0 < fVar7) {
          *(ushort *)(lVar3 + 0xa8) = *(ushort *)(lVar3 + 0xa8) & 0xfffe;
        }
      }
    }
    uVar5 = (ulonglong)(iVar4 + 1U);
    unaff_RDI = unaff_RDI + 1;
  } while ((int)(iVar4 + 1U) < unaff_EBP);
  return;
}






// 函数: void FUN_1804df2e3(void)
void FUN_1804df2e3(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1804df390(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c09a10;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}






// 函数: void FUN_1804df470(int param_1,int param_2,longlong *param_3)
void FUN_1804df470(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  for (lVar10 = (longlong)param_1; lVar10 < param_2; lVar10 = lVar10 + 1) {
    lVar5 = *param_3;
    iVar6 = 0;
    uVar2 = *(uint *)(*(longlong *)(lVar5 + 0x420) + lVar10 * 4);
    lVar1 = (longlong)((int)uVar2 >> 10) * 8;
    lVar7 = (longlong)(int)(*(uint *)(lVar5 + 0x2c88) & uVar2) * 0x68;
    lVar9 = *(longlong *)(*(longlong *)(lVar5 + 0x2c68) + lVar1);
    uVar3 = *(uint *)(lVar7 + 0x14 + lVar9);
    if (*(longlong *)(lVar7 + 0x28 + lVar9) - *(longlong *)(lVar7 + 0x20 + lVar9) >> 2 != 0) {
      lVar9 = 0;
      do {
        uVar4 = *(uint *)(lVar9 + *(longlong *)
                                   ((longlong)(int)(*(uint *)(lVar5 + 0x2c88) & uVar2) * 0x68 + 0x20
                                   + *(longlong *)(*(longlong *)(lVar5 + 0x2c68) + lVar1)));
        if (uVar4 != 0xffffffff) {
          *(int16_t *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x3a0) + (longlong)((int)uVar4 >> 10) * 8) + 8 +
           (longlong)(int)(uVar4 & *(uint *)(lVar5 + 0x3c0)) * 0xc) =
               *(int16_t *)
                (*(longlong *)(*(longlong *)(lVar5 + 0x3a0) + (longlong)((int)uVar3 >> 10) * 8) + 8
                + (longlong)(int)(uVar3 & *(uint *)(lVar5 + 0x3c0)) * 0xc);
          lVar5 = *param_3;
        }
        iVar6 = iVar6 + 1;
        lVar9 = lVar9 + 4;
        lVar8 = (longlong)(int)(*(uint *)(lVar5 + 0x2c88) & uVar2) * 0x68;
        lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x2c68) + lVar1);
      } while ((ulonglong)(longlong)iVar6 <
               (ulonglong)
               (*(longlong *)(lVar8 + 0x28 + lVar7) - *(longlong *)(lVar8 + 0x20 + lVar7) >> 2));
    }
  }
  return;
}






// 函数: void FUN_1804df48c(void)
void FUN_1804df48c(void)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  
  do {
    lVar5 = *unaff_R12;
    iVar6 = 0;
    uVar2 = *(uint *)(*(longlong *)(lVar5 + 0x420) + unaff_R14 * 4);
    lVar1 = (longlong)((int)uVar2 >> 10) * 8;
    lVar7 = (longlong)(int)(*(uint *)(lVar5 + 0x2c88) & uVar2) * 0x68;
    lVar9 = *(longlong *)(*(longlong *)(lVar5 + 0x2c68) + lVar1);
    uVar3 = *(uint *)(lVar7 + 0x14 + lVar9);
    if (*(longlong *)(lVar7 + 0x28 + lVar9) - *(longlong *)(lVar7 + 0x20 + lVar9) >> 2 != 0) {
      lVar9 = 0;
      do {
        uVar4 = *(uint *)(lVar9 + *(longlong *)
                                   ((longlong)(int)(*(uint *)(lVar5 + 0x2c88) & uVar2) * 0x68 + 0x20
                                   + *(longlong *)(*(longlong *)(lVar5 + 0x2c68) + lVar1)));
        if (uVar4 != 0xffffffff) {
          *(int16_t *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x3a0) + (longlong)((int)uVar4 >> 10) * 8) + 8 +
           (longlong)(int)(uVar4 & *(uint *)(lVar5 + 0x3c0)) * 0xc) =
               *(int16_t *)
                (*(longlong *)(*(longlong *)(lVar5 + 0x3a0) + (longlong)((int)uVar3 >> 10) * 8) + 8
                + (longlong)(int)(uVar3 & *(uint *)(lVar5 + 0x3c0)) * 0xc);
          lVar5 = *unaff_R12;
        }
        iVar6 = iVar6 + 1;
        lVar9 = lVar9 + 4;
        lVar8 = (longlong)(int)(*(uint *)(lVar5 + 0x2c88) & uVar2) * 0x68;
        lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x2c68) + lVar1);
      } while ((ulonglong)(longlong)iVar6 <
               (ulonglong)
               (*(longlong *)(lVar8 + 0x28 + lVar7) - *(longlong *)(lVar8 + 0x20 + lVar7) >> 2));
    }
    unaff_R14 = unaff_R14 + 1;
  } while (unaff_R14 < unaff_R13);
  return;
}






// 函数: void FUN_1804df5de(void)
void FUN_1804df5de(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1804df640(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c09990;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}






// 函数: void FUN_1804df7c0(char *param_1,char *param_2,longlong param_3)
void FUN_1804df7c0(char *param_1,char *param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int16_t uVar5;
  int16_t uVar6;
  char cVar7;
  longlong lVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int16_t uStackX_8;
  char cStackX_a;
  
  lVar8 = (longlong)param_2 - (longlong)param_1;
  do {
    if ((lVar8 < 0x57) || (param_3 < 1)) {
      if (param_3 == 0) {
        FUN_1804dfad0(param_1,param_2);
        pcVar10 = param_2 + -(longlong)param_1;
        if (5 < (longlong)pcVar10) {
          param_2 = param_2 + -3;
          do {
            uStackX_8 = *(int16_t *)param_2;
            cStackX_a = param_2[2];
            *(int16_t *)param_2 = *(int16_t *)param_1;
            param_2[2] = param_1[2];
            FUN_1804dfc80(param_1,0,(longlong)pcVar10 / 3 + -1,0,&uStackX_8);
            param_2 = param_2 + -3;
            pcVar10 = param_2 + (3 - (longlong)param_1);
          } while (5 < (longlong)pcVar10);
        }
      }
      return;
    }
    cVar1 = *param_1;
    lVar8 = ((longlong)param_2 - (longlong)param_1) / 6;
    cVar2 = param_1[lVar8 * 3];
    pcVar10 = param_1 + lVar8 * 3;
    bVar13 = SBORROW1(cVar1,cVar2);
    cVar7 = cVar1 - cVar2;
    bVar12 = cVar1 == cVar2;
    if (bVar12) {
      cVar3 = pcVar10[1];
      cVar4 = param_1[1];
      bVar13 = SBORROW1(cVar4,cVar3);
      cVar7 = cVar4 - cVar3;
      bVar12 = cVar4 == cVar3;
    }
    cVar3 = param_2[-3];
    if (bVar12 || bVar13 != cVar7 < '\0') {
      bVar13 = SBORROW1(cVar1,cVar3);
      cVar7 = cVar1 - cVar3;
      bVar12 = cVar1 == cVar3;
      if (bVar12) {
        cVar1 = param_2[-2];
        cVar4 = param_1[1];
        bVar13 = SBORROW1(cVar4,cVar1);
        cVar7 = cVar4 - cVar1;
        bVar12 = cVar4 == cVar1;
      }
      pcVar11 = param_1;
      if (bVar12 || bVar13 != cVar7 < '\0') {
        bVar14 = SBORROW1(cVar2,cVar3);
        bVar13 = (char)(cVar2 - cVar3) < '\0';
        bVar12 = cVar2 == cVar3;
        if (bVar12) {
          cVar1 = param_2[-2];
          cVar2 = pcVar10[1];
          bVar14 = SBORROW1(cVar2,cVar1);
          bVar13 = (char)(cVar2 - cVar1) < '\0';
          bVar12 = cVar2 == cVar1;
        }
        goto LAB_1804df88c;
      }
    }
    else {
      bVar13 = SBORROW1(cVar2,cVar3);
      cVar7 = cVar2 - cVar3;
      bVar12 = cVar2 == cVar3;
      if (bVar12) {
        cVar2 = param_2[-2];
        cVar4 = pcVar10[1];
        bVar13 = SBORROW1(cVar4,cVar2);
        cVar7 = cVar4 - cVar2;
        bVar12 = cVar4 == cVar2;
      }
      pcVar11 = pcVar10;
      if (bVar12 || bVar13 != cVar7 < '\0') {
        bVar14 = SBORROW1(cVar1,cVar3);
        cVar2 = cVar1 - cVar3;
        bVar12 = cVar1 == cVar3;
        if (bVar12) {
          cVar1 = param_2[-2];
          cVar7 = param_1[1];
          bVar14 = SBORROW1(cVar7,cVar1);
          cVar2 = cVar7 - cVar1;
          bVar12 = cVar7 == cVar1;
        }
        bVar13 = cVar2 < '\0';
        pcVar10 = param_1;
LAB_1804df88c:
        pcVar11 = pcVar10;
        if (!bVar12 && bVar14 == bVar13) {
          pcVar11 = param_2 + -3;
        }
      }
    }
    uVar5 = *(int16_t *)pcVar11;
    cStackX_a = pcVar11[2];
    uStackX_8._1_1_ = (char)((ushort)uVar5 >> 8);
    uStackX_8._0_1_ = (char)uVar5;
    pcVar10 = param_2;
    pcVar11 = param_1;
    while( true ) {
      while( true ) {
        cVar1 = *pcVar11;
        bVar13 = SBORROW1(cVar1,(char)uStackX_8);
        cVar2 = cVar1 - (char)uStackX_8;
        bVar12 = cVar1 == (char)uStackX_8;
        if (bVar12) {
          cVar1 = pcVar11[1];
          bVar13 = SBORROW1(cVar1,uStackX_8._1_1_);
          cVar2 = cVar1 - uStackX_8._1_1_;
          bVar12 = cVar1 == uStackX_8._1_1_;
        }
        if (bVar12 || bVar13 != cVar2 < '\0') break;
        pcVar11 = pcVar11 + 3;
      }
      do {
        pcVar9 = pcVar10;
        cVar1 = pcVar9[-3];
        pcVar10 = pcVar9 + -3;
        bVar13 = SBORROW1((char)uStackX_8,cVar1);
        cVar2 = (char)uStackX_8 - cVar1;
        bVar12 = (char)uStackX_8 == cVar1;
        if (bVar12) {
          cVar1 = pcVar9[-2];
          bVar13 = SBORROW1(uStackX_8._1_1_,cVar1);
          cVar2 = uStackX_8._1_1_ - cVar1;
          bVar12 = uStackX_8._1_1_ == cVar1;
        }
      } while (!bVar12 && bVar13 == cVar2 < '\0');
      if (pcVar10 <= pcVar11) break;
      uVar6 = *(int16_t *)pcVar11;
      cVar1 = pcVar11[2];
      *(int16_t *)pcVar11 = *(int16_t *)pcVar10;
      pcVar11[2] = pcVar9[-1];
      pcVar11 = pcVar11 + 3;
      *(int16_t *)pcVar10 = uVar6;
      pcVar9[-1] = cVar1;
    }
    param_3 = param_3 + -1;
    uStackX_8 = uVar5;
    FUN_1804df7c0(pcVar11,param_2,param_3);
    lVar8 = (longlong)pcVar11 - (longlong)param_1;
    param_2 = pcVar11;
  } while( true );
}






