#include "TaleWorlds.Native.Split.h"

// 03_rendering_part652.c - 14 个函数

// 函数: void FUN_180639bc0(longlong *param_1)
void FUN_180639bc0(longlong *param_1)

{
  if (((char)param_1[3] == '\0') && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180639bf0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint64_t uVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    lVar5 = FUN_18062b420(_DAT_180c8ed18,param_2,*(int8_t *)((longlong)param_1 + 0x1a));
    *param_1 = lVar5;
    param_1[1] = lVar5;
  }
  else {
    uVar6 = param_1[2];
    if (*(char *)((longlong)param_1 + 0x19) != '\0') {
      uVar2 = uVar6;
      if (0x6400000 < uVar6) {
        uVar2 = 0x6400000;
      }
      if (param_2 < uVar2 + uVar6) {
        param_2 = uVar2 + uVar6;
      }
    }
    if (uVar6 <= param_2) {
      lVar1 = param_1[1];
      if (uVar6 < param_2) {
        uVar6 = param_2;
      }
      fVar7 = (float)(longlong)uVar6;
      if ((longlong)uVar6 < 0) {
        fVar7 = fVar7 + 1.8446744e+19;
      }
      fVar7 = fVar7 * 1.2;
      lVar3 = 0;
      if ((9.223372e+18 <= fVar7) && (fVar7 = fVar7 - 9.223372e+18, fVar7 < 9.223372e+18)) {
        lVar3 = -0x8000000000000000;
      }
      uVar4 = FUN_18062b420(_DAT_180c8ed18,(longlong)fVar7 + lVar3,
                            *(int8_t *)((longlong)param_1 + 0x1a));
                    // WARNING: Subroutine does not return
      memcpy(uVar4,*param_1,lVar1 - lVar5);
    }
  }
  if ((lVar5 == 0) || (param_1[1] == 0)) {
    FUN_180626ee0(&unknown_var_6984_ptr,param_2);
    lVar5 = *param_1;
  }
  param_1[2] = param_2;
  return lVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180639c3d(ulonglong param_1)
void FUN_180639c3d(ulonglong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  uint64_t *unaff_RBX;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  float fVar4;
  
  lVar1 = unaff_RBX[1];
  if (param_1 < unaff_RDI) {
    param_1 = unaff_RDI;
  }
  fVar4 = (float)(longlong)param_1;
  if ((longlong)param_1 < 0) {
    fVar4 = fVar4 + 1.8446744e+19;
  }
  fVar4 = fVar4 * 1.2;
  lVar2 = 0;
  if ((9.223372e+18 <= fVar4) && (fVar4 = fVar4 - 9.223372e+18, fVar4 < 9.223372e+18)) {
    lVar2 = -0x8000000000000000;
  }
  uVar3 = FUN_18062b420(_DAT_180c8ed18,(longlong)fVar4 + lVar2,
                        *(int8_t *)((longlong)unaff_RBX + 0x1a));
                    // WARNING: Subroutine does not return
  memcpy(uVar3,*unaff_RBX,lVar1 - unaff_RSI);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180639cda(longlong param_1,uint64_t param_2)

{
  longlong lVar1;
  longlong *unaff_RBX;
  longlong unaff_RDI;
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,param_2,*(int8_t *)(param_1 + 0x1a));
  *unaff_RBX = lVar1;
  unaff_RBX[1] = lVar1;
  if ((lVar1 == 0) || (unaff_RBX[1] == 0)) {
    FUN_180626ee0(&unknown_var_6984_ptr);
    lVar1 = *unaff_RBX;
  }
  unaff_RBX[2] = unaff_RDI;
  return lVar1;
}





// 函数: void FUN_180639d30(longlong *param_1)
void FUN_180639d30(longlong *param_1)

{
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_180639d80(longlong *param_1,ulonglong param_2)
void FUN_180639d80(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if ((ulonglong)((param_1[2] - lVar1) + *param_1) <= param_2) {
    FUN_180639bf0(param_1,param_2 + (lVar1 - *param_1));
    param_1[1] = param_1[1] + param_2;
    return;
  }
  param_1[1] = lVar1 + param_2;
  return;
}





// 函数: void FUN_180639de0(longlong *param_1,longlong param_2)
void FUN_180639de0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int32_t *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (*(char *)(uVar4 + param_2) != '\0');
  puVar2 = (int32_t *)param_1[1];
  uVar3 = uVar4 & 0xffffffff;
  if ((ulonglong)((param_1[2] - (longlong)puVar2) + *param_1) <= uVar3 + 4) {
    FUN_180639bf0(param_1,(longlong)puVar2 + ((uVar3 + 4) - *param_1));
    puVar2 = (int32_t *)param_1[1];
  }
  *puVar2 = (int)uVar4;
  param_1[1] = param_1[1] + 4;
  lVar1 = param_1[1];
  uVar4 = (param_1[2] - lVar1) + *param_1;
  if (uVar3 != 0) {
    if (lVar1 != 0) {
      if ((param_2 != 0) && (uVar3 <= uVar4)) {
                    // WARNING: Subroutine does not return
        memcpy(lVar1,param_2,uVar3);
      }
                    // WARNING: Subroutine does not return
      memset(lVar1,0,uVar4);
    }
    puVar2 = (int32_t *)_errno();
    *puVar2 = 0x16;
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + uVar3;
  return;
}





// 函数: void FUN_180639ec0(longlong *param_1,longlong param_2)
void FUN_180639ec0(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  void *puVar5;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  puVar4 = (uint *)param_1[1];
  uVar1 = (ulonglong)uVar2 + 4;
  if ((ulonglong)((param_1[2] - (longlong)puVar4) + *param_1) <= uVar1) {
    FUN_180639bf0(param_1,(longlong)puVar4 + (uVar1 - *param_1));
    puVar4 = (uint *)param_1[1];
  }
  *puVar4 = uVar2;
  lVar3 = param_1[1];
  param_1[1] = lVar3 + 4;
  puVar5 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar5 = *(void **)(param_2 + 8);
  }
                    // WARNING: Subroutine does not return
  memcpy(lVar3 + 4,puVar5,(ulonglong)uVar2);
}





// 函数: void FUN_180639f50(longlong *param_1,int32_t *param_2)
void FUN_180639f50(longlong *param_1,int32_t *param_2)

{
  int32_t *puVar1;
  
  puVar1 = (int32_t *)param_1[1];
  if ((ulonglong)((param_1[2] - (longlong)puVar1) + *param_1) < 0x11) {
    FUN_180639bf0(param_1,(longlong)puVar1 + (0x10 - *param_1));
    puVar1 = (int32_t *)param_1[1];
  }
  *puVar1 = *param_2;
  param_1[1] = param_1[1] + 4;
  *(int32_t *)param_1[1] = param_2[1];
  param_1[1] = param_1[1] + 4;
  *(int32_t *)param_1[1] = param_2[2];
  param_1[1] = param_1[1] + 4;
  *(int32_t *)param_1[1] = 0x3f800000;
  param_1[1] = param_1[1] + 4;
  return;
}





// 函数: void FUN_180639fd0(longlong *param_1,int32_t *param_2)
void FUN_180639fd0(longlong *param_1,int32_t *param_2)

{
  int32_t *puVar1;
  
  puVar1 = (int32_t *)param_1[1];
  if ((ulonglong)((param_1[2] - (longlong)puVar1) + *param_1) < 0x11) {
    FUN_180639bf0(param_1,(longlong)puVar1 + (0x10 - *param_1));
    puVar1 = (int32_t *)param_1[1];
  }
  *puVar1 = *param_2;
  param_1[1] = param_1[1] + 4;
  *(int32_t *)param_1[1] = param_2[1];
  param_1[1] = param_1[1] + 4;
  *(int32_t *)param_1[1] = param_2[2];
  param_1[1] = param_1[1] + 4;
  *(int32_t *)param_1[1] = param_2[3];
  param_1[1] = param_1[1] + 4;
  return;
}





// 函数: void FUN_18063a050(longlong *param_1,int32_t *param_2)
void FUN_18063a050(longlong *param_1,int32_t *param_2)

{
  int32_t *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[2];
  puVar1 = (int32_t *)param_1[1];
  lVar2 = *param_1;
  if ((ulonglong)((lVar2 - (longlong)puVar1) + lVar3) < 0x21) {
    FUN_180639bf0(param_1,(longlong)puVar1 + (0x20 - lVar2));
    puVar1 = (int32_t *)param_1[1];
    lVar3 = param_1[2];
    lVar2 = *param_1;
  }
  if ((ulonglong)((lVar2 - (longlong)puVar1) + lVar3) < 0x11) {
    FUN_180639bf0(param_1,(longlong)puVar1 + (0x10 - lVar2));
    puVar1 = (int32_t *)param_1[1];
  }
  *puVar1 = *param_2;
  param_1[1] = param_1[1] + 4;
  *(int32_t *)param_1[1] = param_2[1];
  param_1[1] = param_1[1] + 4;
  *(int32_t *)param_1[1] = param_2[2];
  param_1[1] = param_1[1] + 4;
  *(int32_t *)param_1[1] = param_2[3];
  param_1[1] = param_1[1] + 4;
  puVar1 = (int32_t *)param_1[1];
  if ((ulonglong)((param_1[2] - (longlong)puVar1) + *param_1) < 0x11) {
    FUN_180639bf0(param_1,(longlong)puVar1 + (0x10 - *param_1));
    puVar1 = (int32_t *)param_1[1];
  }
  *puVar1 = param_2[4];
  param_1[1] = param_1[1] + 4;
  *(int32_t *)param_1[1] = param_2[5];
  param_1[1] = param_1[1] + 4;
  *(int32_t *)param_1[1] = param_2[6];
  param_1[1] = param_1[1] + 4;
  *(int32_t *)param_1[1] = 0x3f800000;
  param_1[1] = param_1[1] + 4;
  return;
}





// 函数: void FUN_18063a110(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_18063a110(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  uint64_t unaff_RDI;
  
  if ((ulonglong)((param_1[2] - param_1[1]) + *param_1) < 0x41) {
    FUN_180639bf0(param_1,(param_1[1] - *param_1) + 0x40);
  }
  FUN_180639fd0(param_1,param_2);
  FUN_180639fd0(param_1,param_2 + 0x10);
  FUN_180639fd0(param_1,param_2 + 0x20);
  puVar1 = (int32_t *)param_1[1];
  if ((ulonglong)((param_1[2] - (longlong)puVar1) + *param_1) < 0x11) {
    FUN_180639bf0(param_1,(longlong)puVar1 + (0x10 - *param_1),param_3,param_4,unaff_RDI);
    puVar1 = (int32_t *)param_1[1];
  }
  *puVar1 = *(int32_t *)(param_2 + 0x30);
  param_1[1] = param_1[1] + 4;
  *(int32_t *)param_1[1] = *(int32_t *)(param_2 + 0x34);
  param_1[1] = param_1[1] + 4;
  *(int32_t *)param_1[1] = *(int32_t *)(param_2 + 0x38);
  param_1[1] = param_1[1] + 4;
  *(int32_t *)param_1[1] = *(int32_t *)(param_2 + 0x3c);
  param_1[1] = param_1[1] + 4;
  return;
}





// 函数: void FUN_18063a180(longlong *param_1,uint64_t param_2,ulonglong param_3)
void FUN_18063a180(longlong *param_1,uint64_t param_2,ulonglong param_3)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if ((ulonglong)((param_1[2] - lVar1) + *param_1) <= param_3) {
    FUN_180639bf0(param_1,param_3 + (lVar1 - *param_1));
    lVar1 = param_1[1];
  }
                    // WARNING: Subroutine does not return
  memcpy(lVar1,param_2,param_3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18063a240(float *param_1,float *param_2)
void FUN_18063a240(float *param_1,float *param_2)

{
  uint64_t uVar1;
  float *pfVar2;
  longlong lVar3;
  int8_t auStack_d8 [32];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int32_t uStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  int8_t auStack_98 [24];
  float afStack_80 [26];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  if (*param_2 <= param_2[4]) {
    FUN_18063a560(param_2,auStack_98);
    pfVar2 = afStack_80;
    lVar3 = 2;
    do {
      fStack_a8 = pfVar2[-6];
      fStack_b8 = fStack_a8;
      if (*param_1 < fStack_a8) {
        fStack_b8 = *param_1;
      }
      fStack_a4 = pfVar2[-5];
      fStack_b4 = fStack_a4;
      if (param_1[1] < fStack_a4) {
        fStack_b4 = param_1[1];
      }
      fStack_a0 = pfVar2[-4];
      fStack_b0 = fStack_a0;
      if (param_1[2] < fStack_a0) {
        fStack_b0 = param_1[2];
      }
      *(ulonglong *)param_1 = CONCAT44(fStack_b4,fStack_b8);
      *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_ac,fStack_b0);
      if (fStack_a8 < param_1[4]) {
        fStack_a8 = param_1[4];
      }
      if (fStack_a4 < param_1[5]) {
        fStack_a4 = param_1[5];
      }
      if (fStack_a0 < param_1[6]) {
        fStack_a0 = param_1[6];
      }
      uVar1 = CONCAT44(fStack_a4,fStack_a8);
      fStack_a8 = pfVar2[-2];
      *(uint64_t *)(param_1 + 4) = uVar1;
      *(ulonglong *)(param_1 + 6) = CONCAT44(fStack_9c,fStack_a0);
      fStack_b8 = fStack_a8;
      if (*param_1 < fStack_a8) {
        fStack_b8 = *param_1;
      }
      fStack_a4 = pfVar2[-1];
      fStack_b4 = fStack_a4;
      if (param_1[1] < fStack_a4) {
        fStack_b4 = param_1[1];
      }
      fStack_a0 = *pfVar2;
      fStack_b0 = fStack_a0;
      if (param_1[2] < fStack_a0) {
        fStack_b0 = param_1[2];
      }
      *(ulonglong *)param_1 = CONCAT44(fStack_b4,fStack_b8);
      *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_ac,fStack_b0);
      if (fStack_a8 < param_1[4]) {
        fStack_a8 = param_1[4];
      }
      if (fStack_a4 < param_1[5]) {
        fStack_a4 = param_1[5];
      }
      if (fStack_a0 < param_1[6]) {
        fStack_a0 = param_1[6];
      }
      uVar1 = CONCAT44(fStack_a4,fStack_a8);
      fStack_a8 = pfVar2[2];
      *(uint64_t *)(param_1 + 4) = uVar1;
      *(ulonglong *)(param_1 + 6) = CONCAT44(fStack_9c,fStack_a0);
      fStack_b8 = fStack_a8;
      if (*param_1 < fStack_a8) {
        fStack_b8 = *param_1;
      }
      fStack_a4 = pfVar2[3];
      fStack_b4 = fStack_a4;
      if (param_1[1] < fStack_a4) {
        fStack_b4 = param_1[1];
      }
      fStack_a0 = pfVar2[4];
      fStack_b0 = fStack_a0;
      if (param_1[2] < fStack_a0) {
        fStack_b0 = param_1[2];
      }
      *(ulonglong *)param_1 = CONCAT44(fStack_b4,fStack_b8);
      *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_ac,fStack_b0);
      if (fStack_a8 < param_1[4]) {
        fStack_a8 = param_1[4];
      }
      if (fStack_a4 < param_1[5]) {
        fStack_a4 = param_1[5];
      }
      if (fStack_a0 < param_1[6]) {
        fStack_a0 = param_1[6];
      }
      uVar1 = CONCAT44(fStack_a4,fStack_a8);
      fStack_a8 = pfVar2[6];
      *(uint64_t *)(param_1 + 4) = uVar1;
      *(ulonglong *)(param_1 + 6) = CONCAT44(fStack_9c,fStack_a0);
      fStack_b8 = fStack_a8;
      if (*param_1 < fStack_a8) {
        fStack_b8 = *param_1;
      }
      fStack_a4 = pfVar2[7];
      fStack_b4 = fStack_a4;
      if (param_1[1] < fStack_a4) {
        fStack_b4 = param_1[1];
      }
      fStack_a0 = pfVar2[8];
      fStack_b0 = fStack_a0;
      if (param_1[2] < fStack_a0) {
        fStack_b0 = param_1[2];
      }
      *(ulonglong *)param_1 = CONCAT44(fStack_b4,fStack_b8);
      *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_ac,fStack_b0);
      if (fStack_a8 < param_1[4]) {
        fStack_a8 = param_1[4];
      }
      if (fStack_a4 < param_1[5]) {
        fStack_a4 = param_1[5];
      }
      if (fStack_a0 < param_1[6]) {
        fStack_a0 = param_1[6];
      }
      pfVar2 = pfVar2 + 0x10;
      param_1[4] = fStack_a8;
      param_1[5] = fStack_a4;
      param_1[6] = fStack_a0;
      param_1[7] = fStack_9c;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_d8);
}





// 函数: void FUN_18063a560(int32_t *param_1,int32_t *param_2,float *param_3)
void FUN_18063a560(int32_t *param_1,int32_t *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  char cVar16;
  longlong lVar17;
  float *pfVar18;
  
  *param_2 = *param_1;
  pfVar18 = (float *)(param_2 + 6);
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[4] = param_1[4];
  param_2[5] = param_1[5];
  *pfVar18 = (float)param_1[6];
  param_2[8] = *param_1;
  param_2[9] = param_1[5];
  param_2[10] = param_1[2];
  param_2[0xc] = param_1[4];
  param_2[0xd] = param_1[5];
  param_2[0xe] = param_1[2];
  param_2[0x10] = *param_1;
  param_2[0x11] = param_1[1];
  param_2[0x12] = param_1[6];
  param_2[0x14] = param_1[4];
  param_2[0x15] = param_1[1];
  param_2[0x16] = param_1[6];
  param_2[0x18] = *param_1;
  param_2[0x19] = param_1[5];
  param_2[0x1a] = param_1[6];
  param_2[0x1c] = param_1[4];
  param_2[0x1d] = param_1[1];
  param_2[0x1e] = param_1[2];
  cVar16 = FUN_1800861a0(param_3);
  if (cVar16 != '\0') {
    param_2[3] = 0x3f800000;
    param_2[7] = 0x3f800000;
    param_2[0xb] = 0x3f800000;
    param_2[0xf] = 0x3f800000;
    param_2[0x13] = 0x3f800000;
    param_2[0x17] = 0x3f800000;
    param_2[0x1b] = 0x3f800000;
    param_2[0x1f] = 0x3f800000;
    return;
  }
  lVar17 = 2;
  do {
    fVar1 = pfVar18[-5];
    fVar4 = param_3[5];
    fVar5 = param_3[6];
    fVar6 = param_3[7];
    fVar7 = param_3[1];
    fVar8 = param_3[2];
    fVar9 = param_3[3];
    fVar2 = pfVar18[-6];
    fVar3 = pfVar18[-4];
    fVar10 = param_3[9];
    fVar11 = param_3[10];
    fVar12 = param_3[0xb];
    fVar13 = param_3[0xd];
    fVar14 = param_3[0xe];
    fVar15 = param_3[0xf];
    pfVar18[-6] = param_3[4] * fVar1 + *param_3 * fVar2 + param_3[8] * fVar3 + param_3[0xc];
    pfVar18[-5] = fVar4 * fVar1 + fVar7 * fVar2 + fVar10 * fVar3 + fVar13;
    pfVar18[-4] = fVar5 * fVar1 + fVar8 * fVar2 + fVar11 * fVar3 + fVar14;
    pfVar18[-3] = fVar6 * fVar1 + fVar9 * fVar2 + fVar12 * fVar3 + fVar15;
    pfVar18[-3] = 1.0;
    fVar1 = pfVar18[-1];
    fVar4 = param_3[5];
    fVar5 = param_3[6];
    fVar6 = param_3[7];
    fVar7 = param_3[1];
    fVar8 = param_3[2];
    fVar9 = param_3[3];
    fVar2 = pfVar18[-2];
    fVar3 = *pfVar18;
    fVar10 = param_3[9];
    fVar11 = param_3[10];
    fVar12 = param_3[0xb];
    fVar13 = param_3[0xd];
    fVar14 = param_3[0xe];
    fVar15 = param_3[0xf];
    pfVar18[-2] = param_3[4] * fVar1 + *param_3 * fVar2 + param_3[8] * fVar3 + param_3[0xc];
    pfVar18[-1] = fVar4 * fVar1 + fVar7 * fVar2 + fVar10 * fVar3 + fVar13;
    *pfVar18 = fVar5 * fVar1 + fVar8 * fVar2 + fVar11 * fVar3 + fVar14;
    pfVar18[1] = fVar6 * fVar1 + fVar9 * fVar2 + fVar12 * fVar3 + fVar15;
    pfVar18[1] = 1.0;
    fVar1 = pfVar18[3];
    fVar4 = param_3[5];
    fVar5 = param_3[6];
    fVar6 = param_3[7];
    fVar7 = param_3[1];
    fVar8 = param_3[2];
    fVar9 = param_3[3];
    fVar2 = pfVar18[2];
    fVar3 = pfVar18[4];
    fVar10 = param_3[9];
    fVar11 = param_3[10];
    fVar12 = param_3[0xb];
    fVar13 = param_3[0xd];
    fVar14 = param_3[0xe];
    fVar15 = param_3[0xf];
    pfVar18[2] = param_3[4] * fVar1 + *param_3 * fVar2 + param_3[8] * fVar3 + param_3[0xc];
    pfVar18[3] = fVar4 * fVar1 + fVar7 * fVar2 + fVar10 * fVar3 + fVar13;
    pfVar18[4] = fVar5 * fVar1 + fVar8 * fVar2 + fVar11 * fVar3 + fVar14;
    pfVar18[5] = fVar6 * fVar1 + fVar9 * fVar2 + fVar12 * fVar3 + fVar15;
    pfVar18[5] = 1.0;
    fVar1 = pfVar18[7];
    fVar4 = param_3[5];
    fVar5 = param_3[6];
    fVar6 = param_3[7];
    fVar7 = param_3[1];
    fVar8 = param_3[2];
    fVar9 = param_3[3];
    fVar2 = pfVar18[6];
    fVar3 = pfVar18[8];
    fVar10 = param_3[9];
    fVar11 = param_3[10];
    fVar12 = param_3[0xb];
    fVar13 = param_3[0xd];
    fVar14 = param_3[0xe];
    fVar15 = param_3[0xf];
    pfVar18[6] = param_3[4] * fVar1 + *param_3 * fVar2 + param_3[8] * fVar3 + param_3[0xc];
    pfVar18[7] = fVar4 * fVar1 + fVar7 * fVar2 + fVar10 * fVar3 + fVar13;
    pfVar18[8] = fVar5 * fVar1 + fVar8 * fVar2 + fVar11 * fVar3 + fVar14;
    pfVar18[9] = fVar6 * fVar1 + fVar9 * fVar2 + fVar12 * fVar3 + fVar15;
    pfVar18[9] = 1.0;
    pfVar18 = pfVar18 + 0x10;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18063a7b0(uint64_t param_1,uint64_t param_2,float *param_3,float *param_4)
void FUN_18063a7b0(uint64_t param_1,uint64_t param_2,float *param_3,float *param_4)

{
  uint64_t uVar1;
  float *pfVar2;
  longlong lVar3;
  int8_t auStack_e8 [32];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int32_t uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  int8_t auStack_a8 [24];
  float afStack_90 [26];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  FUN_18063a560(param_1,auStack_a8,param_2);
  pfVar2 = afStack_90;
  lVar3 = 2;
  param_3[0] = 1e+08;
  param_3[1] = 1e+08;
  param_3[2] = 1e+08;
  param_3[3] = 3.4028235e+38;
  param_4[0] = -1e+08;
  param_4[1] = -1e+08;
  param_4[2] = -1e+08;
  param_4[3] = 3.4028235e+38;
  do {
    fStack_b8 = pfVar2[-6];
    fStack_c8 = fStack_b8;
    if (*param_3 < fStack_b8) {
      fStack_c8 = *param_3;
    }
    fStack_b4 = pfVar2[-5];
    fStack_c4 = fStack_b4;
    if (param_3[1] < fStack_b4) {
      fStack_c4 = param_3[1];
    }
    fStack_b0 = pfVar2[-4];
    fStack_c0 = fStack_b0;
    if (param_3[2] < fStack_b0) {
      fStack_c0 = param_3[2];
    }
    *(ulonglong *)param_3 = CONCAT44(fStack_c4,fStack_c8);
    *(ulonglong *)(param_3 + 2) = CONCAT44(uStack_bc,fStack_c0);
    if (fStack_b8 < *param_4) {
      fStack_b8 = *param_4;
    }
    if (fStack_b4 < param_4[1]) {
      fStack_b4 = param_4[1];
    }
    if (fStack_b0 < param_4[2]) {
      fStack_b0 = param_4[2];
    }
    uVar1 = CONCAT44(fStack_b4,fStack_b8);
    fStack_b8 = pfVar2[-2];
    *(uint64_t *)param_4 = uVar1;
    *(ulonglong *)(param_4 + 2) = CONCAT44(fStack_ac,fStack_b0);
    fStack_c8 = fStack_b8;
    if (*param_3 < fStack_b8) {
      fStack_c8 = *param_3;
    }
    fStack_b4 = pfVar2[-1];
    fStack_c4 = fStack_b4;
    if (param_3[1] < fStack_b4) {
      fStack_c4 = param_3[1];
    }
    fStack_b0 = *pfVar2;
    fStack_c0 = fStack_b0;
    if (param_3[2] < fStack_b0) {
      fStack_c0 = param_3[2];
    }
    *(ulonglong *)param_3 = CONCAT44(fStack_c4,fStack_c8);
    *(ulonglong *)(param_3 + 2) = CONCAT44(uStack_bc,fStack_c0);
    if (fStack_b8 < *param_4) {
      fStack_b8 = *param_4;
    }
    if (fStack_b4 < param_4[1]) {
      fStack_b4 = param_4[1];
    }
    if (fStack_b0 < param_4[2]) {
      fStack_b0 = param_4[2];
    }
    uVar1 = CONCAT44(fStack_b4,fStack_b8);
    fStack_b8 = pfVar2[2];
    *(uint64_t *)param_4 = uVar1;
    *(ulonglong *)(param_4 + 2) = CONCAT44(fStack_ac,fStack_b0);
    fStack_c8 = fStack_b8;
    if (*param_3 < fStack_b8) {
      fStack_c8 = *param_3;
    }
    fStack_b4 = pfVar2[3];
    fStack_c4 = fStack_b4;
    if (param_3[1] < fStack_b4) {
      fStack_c4 = param_3[1];
    }
    fStack_b0 = pfVar2[4];
    fStack_c0 = fStack_b0;
    if (param_3[2] < fStack_b0) {
      fStack_c0 = param_3[2];
    }
    *(ulonglong *)param_3 = CONCAT44(fStack_c4,fStack_c8);
    *(ulonglong *)(param_3 + 2) = CONCAT44(uStack_bc,fStack_c0);
    if (fStack_b8 < *param_4) {
      fStack_b8 = *param_4;
    }
    if (fStack_b4 < param_4[1]) {
      fStack_b4 = param_4[1];
    }
    if (fStack_b0 < param_4[2]) {
      fStack_b0 = param_4[2];
    }
    uVar1 = CONCAT44(fStack_b4,fStack_b8);
    fStack_b8 = pfVar2[6];
    *(uint64_t *)param_4 = uVar1;
    *(ulonglong *)(param_4 + 2) = CONCAT44(fStack_ac,fStack_b0);
    fStack_c8 = fStack_b8;
    if (*param_3 < fStack_b8) {
      fStack_c8 = *param_3;
    }
    fStack_b4 = pfVar2[7];
    fStack_c4 = fStack_b4;
    if (param_3[1] < fStack_b4) {
      fStack_c4 = param_3[1];
    }
    fStack_b0 = pfVar2[8];
    fStack_c0 = fStack_b0;
    if (param_3[2] < fStack_b0) {
      fStack_c0 = param_3[2];
    }
    *(ulonglong *)param_3 = CONCAT44(fStack_c4,fStack_c8);
    *(ulonglong *)(param_3 + 2) = CONCAT44(uStack_bc,fStack_c0);
    if (fStack_b8 < *param_4) {
      fStack_b8 = *param_4;
    }
    if (fStack_b4 < param_4[1]) {
      fStack_b4 = param_4[1];
    }
    if (fStack_b0 < param_4[2]) {
      fStack_b0 = param_4[2];
    }
    pfVar2 = pfVar2 + 0x10;
    *param_4 = fStack_b8;
    param_4[1] = fStack_b4;
    param_4[2] = fStack_b0;
    param_4[3] = fStack_ac;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_e8);
}



float * FUN_18063aab0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = param_1[4];
  fVar5 = param_1[6];
  fVar1 = *param_1;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  param_2[10] = 0.0;
  param_2[0xb] = 0.0;
  param_2[0xc] = 0.0;
  fVar3 = (fVar4 + fVar1) * 0.5;
  fVar2 = (fVar5 + param_1[2]) * 0.5;
  fVar4 = fVar4 - fVar3;
  fVar5 = fVar5 - fVar2;
  fVar1 = (param_1[5] + param_1[1]) * 0.5;
  fVar8 = param_1[5] - fVar1;
  fVar6 = param_3[4] * fVar1 + *param_3 * fVar3 + param_3[8] * fVar2 + param_3[0xc];
  fVar7 = param_3[5] * fVar1 + param_3[1] * fVar3 + param_3[9] * fVar2 + param_3[0xd];
  fVar2 = param_3[6] * fVar1 + param_3[2] * fVar3 + param_3[10] * fVar2 + param_3[0xe];
  fVar1 = ABS(fVar8 * param_3[4]) + ABS(fVar4 * *param_3) + ABS(fVar5 * param_3[8]);
  fVar3 = ABS(fVar8 * param_3[6]) + ABS(fVar4 * param_3[2]) + ABS(fVar5 * param_3[10]);
  fVar4 = ABS(fVar8 * param_3[5]) + ABS(fVar4 * param_3[1]) + ABS(fVar5 * param_3[9]);
  *param_2 = fVar6 - fVar1;
  param_2[1] = fVar7 - fVar4;
  param_2[2] = fVar2 - fVar3;
  param_2[3] = 3.4028235e+38;
  param_2[4] = fVar6 + fVar1;
  param_2[5] = fVar7 + fVar4;
  param_2[6] = fVar2 + fVar3;
  param_2[7] = 3.4028235e+38;
  return param_2;
}





