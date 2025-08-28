#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part655.c - 4 个函数

// 函数: void FUN_18063e510(int64_t *param_1)
void FUN_18063e510(int64_t *param_1)

{
  bool bVar1;
  uint64_t uVar2;
  int64_t lVar3;
  float *pfVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  lVar7 = param_1[1];
  do {
    pfVar4 = (float *)*param_1;
    bVar1 = false;
    if (lVar7 - (int64_t)pfVar4 >> 3 != 1) {
      lVar6 = 0;
      iVar5 = 1;
      bVar1 = false;
      do {
        fVar9 = *(float *)(lVar6 + 8 + (int64_t)pfVar4) - *(float *)(lVar6 + (int64_t)pfVar4);
        fVar10 = *(float *)(lVar6 + 0xc + (int64_t)pfVar4) -
                 *(float *)(lVar6 + 4 + (int64_t)pfVar4);
        if (fVar9 * fVar9 + fVar10 * fVar10 < 1.0000001e-06) {
          if ((uint64_t)(int64_t)iVar5 < (lVar7 - (int64_t)pfVar4 >> 3) - 1U) {
            lVar3 = lVar6 + 8;
            iVar8 = iVar5;
            do {
              iVar8 = iVar8 + 1;
              *(uint64_t *)(lVar3 + *param_1) = *(uint64_t *)(lVar3 + 8 + *param_1);
              lVar7 = param_1[1];
              lVar3 = lVar3 + 8;
            } while ((uint64_t)(int64_t)iVar8 < (lVar7 - *param_1 >> 3) - 1U);
          }
          lVar7 = lVar7 + -8;
          bVar1 = true;
          param_1[1] = lVar7;
          pfVar4 = (float *)*param_1;
        }
        lVar6 = lVar6 + 8;
        uVar2 = (uint64_t)iVar5;
        iVar5 = iVar5 + 1;
      } while (uVar2 < (lVar7 - (int64_t)pfVar4 >> 3) - 1U);
    }
    lVar6 = lVar7 - (int64_t)pfVar4 >> 3;
    if ((pfVar4[lVar6 * 2 + -2] - *pfVar4) * (pfVar4[lVar6 * 2 + -2] - *pfVar4) +
        (pfVar4[lVar6 * 2 + -1] - pfVar4[1]) * (pfVar4[lVar6 * 2 + -1] - pfVar4[1]) < 1.0000001e-06)
    {
      lVar7 = lVar7 + -8;
      bVar1 = true;
      param_1[1] = lVar7;
    }
  } while (bVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_18063e690(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lStack_50;
  int64_t lStack_48;
  int64_t lStack_40;
  uint uStack_38;
  
  lVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar4 = param_2[1] - *param_2 >> 3;
  uVar1 = *(uint *)(param_2 + 3);
  uStack_38 = uVar1;
  if (lVar4 != 0) {
    lVar3 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 8,uVar1 & 0xff,param_4,0xfffffffffffffffe);
  }
  lVar4 = lVar3 + lVar4 * 8;
  lVar2 = *param_2;
  lStack_50 = lVar3;
  lStack_48 = lVar3;
  lStack_40 = lVar4;
  if (lVar2 != param_2[1]) {
                    // WARNING: Subroutine does not return
    memmove(lVar3,lVar2,param_2[1] - lVar2);
  }
  if (param_1 != &lStack_50) {
    FUN_180058160(param_1);
    lStack_50 = *param_1;
    *param_1 = lVar3;
    lStack_48 = param_1[1];
    param_1[1] = lVar3;
    lStack_40 = param_1[2];
    param_1[2] = lVar4;
    uStack_38 = *(uint *)(param_1 + 3);
    *(uint *)(param_1 + 3) = uVar1;
  }
  if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(lStack_50);
  }
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(int32_t *)((int64_t)param_1 + 0x24) = *(int32_t *)((int64_t)param_2 + 0x24);
  *(int *)(param_1 + 5) = (int)param_2[5];
  *(int32_t *)((int64_t)param_1 + 0x2c) = *(int32_t *)((int64_t)param_2 + 0x2c);
  return param_1;
}



uint64_t FUN_18063e7e0(int64_t *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  int64_t lVar8;
  float fVar9;
  
  lVar8 = *param_1;
  fVar9 = 0.0;
  iVar7 = (int)(param_1[1] - lVar8 >> 3);
  if ((7 < iVar7) &&
     (fVar2 = *(float *)(lVar8 + 4 + (int64_t)(int)param_1[4] * 8),
     pfVar1 = (float *)(lVar8 + (int64_t)(int)param_1[4] * 8), fVar3 = *pfVar1,
     0.0 < (fVar2 - *(float *)(lVar8 + 4 + (int64_t)*(int *)((int64_t)param_1 + 0x24) * 8)) *
           (*param_2 - fVar3) -
           (param_2[1] - fVar2) *
           (fVar3 - *(float *)(lVar8 + (int64_t)*(int *)((int64_t)param_1 + 0x24) * 8)))) {
    lVar6 = lVar8 + (int64_t)(int)param_1[5] * 8;
    iVar4 = func_0x000180360380();
    if (iVar4 == 2) {
      lVar5 = lVar8 + (int64_t)*(int *)((int64_t)param_1 + 0x2c) * 8;
      iVar4 = func_0x000180360380(lVar5,lVar6);
      if ((iVar4 == 2) && (iVar4 = func_0x000180360380(pfVar1,lVar5), iVar4 == 2)) {
        return 1;
      }
    }
  }
  if (0 < iVar7) {
    lVar6 = 0;
    iVar4 = 1;
    do {
      fVar2 = *(float *)(lVar8 + 4 + lVar6 * 8);
      fVar3 = *(float *)(lVar8 + lVar6 * 8);
      if ((fVar2 - *(float *)(lVar8 + 4 + (int64_t)(iVar4 % iVar7) * 8)) * (*param_2 - fVar3) -
          (fVar3 - *(float *)(lVar8 + (int64_t)(iVar4 % iVar7) * 8)) * (param_2[1] - fVar2) <=
          fVar9) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar7);
  }
  return 1;
}



uint64_t FUN_18063e970(uint64_t param_1,float *param_2,uint64_t *param_3,uint64_t *param_4)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pfVar2 = (float *)*param_3;
  fVar6 = 3.4028235e+38;
  fVar8 = -3.4028235e+38;
  iVar3 = 0;
  iVar4 = 0;
  uVar5 = param_3[1] - (int64_t)pfVar2 >> 3;
  fVar10 = -3.4028235e+38;
  fVar11 = 3.4028235e+38;
  if (uVar5 != 0) {
    fVar7 = fVar10;
    fVar9 = fVar11;
    do {
      pfVar1 = pfVar2 + 1;
      iVar4 = iVar4 + 1;
      fVar10 = *pfVar2;
      pfVar2 = pfVar2 + 2;
      fVar10 = param_2[1] * *pfVar1 + *param_2 * fVar10;
      fVar11 = fVar10;
      if (fVar9 <= fVar10) {
        fVar11 = fVar9;
      }
      if (fVar10 <= fVar7) {
        fVar10 = fVar7;
      }
      fVar7 = fVar10;
      fVar9 = fVar11;
    } while ((uint64_t)(int64_t)iVar4 < uVar5);
  }
  pfVar2 = (float *)*param_4;
  uVar5 = param_4[1] - (int64_t)pfVar2 >> 3;
  if (uVar5 != 0) {
    fVar7 = fVar6;
    fVar9 = fVar8;
    do {
      pfVar1 = pfVar2 + 1;
      iVar3 = iVar3 + 1;
      fVar8 = *pfVar2;
      pfVar2 = pfVar2 + 2;
      fVar8 = param_2[1] * *pfVar1 + *param_2 * fVar8;
      fVar6 = fVar8;
      if (fVar7 <= fVar8) {
        fVar6 = fVar7;
      }
      if (fVar8 <= fVar9) {
        fVar8 = fVar9;
      }
      fVar7 = fVar6;
      fVar9 = fVar8;
    } while ((uint64_t)(int64_t)iVar3 < uVar5);
  }
  if ((fVar11 <= fVar8) && (fVar6 <= fVar10)) {
    return 0;
  }
  return 1;
}



uint64_t FUN_18063ea70(int64_t *param_1,int64_t *param_2)

{
  char cVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int8_t auVar12 [16];
  float fStackX_8;
  float fStackX_c;
  
  lVar2 = *param_1;
  lVar3 = 0;
  iVar5 = 1;
  iVar6 = (int)(param_1[1] - lVar2 >> 3);
  if (0 < iVar6) {
    lVar7 = lVar3;
    iVar4 = iVar5;
    do {
      fVar8 = *(float *)(lVar2 + 4 + lVar7 * 8) -
              *(float *)(lVar2 + 4 + (int64_t)(iVar4 % iVar6) * 8);
      fVar9 = *(float *)(lVar2 + (int64_t)(iVar4 % iVar6) * 8) - *(float *)(lVar2 + lVar7 * 8);
      fVar10 = fVar9 * fVar9 + fVar8 * fVar8;
      auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar11 = auVar12._0_4_;
      fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
      _fStackX_8 = CONCAT44(fVar9 * fVar10,fVar8 * fVar10);
      cVar1 = FUN_18063e970(fVar10,&fStackX_8,param_1,param_2);
      if (cVar1 != '\0') {
        return 0;
      }
      lVar2 = *param_1;
      iVar4 = iVar4 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar6);
  }
  lVar2 = *param_2;
  iVar6 = (int)(param_2[1] - lVar2 >> 3);
  if (0 < iVar6) {
    do {
      fVar8 = *(float *)(lVar2 + 4 + lVar3 * 8) -
              *(float *)(lVar2 + 4 + (int64_t)(iVar5 % iVar6) * 8);
      fVar9 = *(float *)(lVar2 + (int64_t)(iVar5 % iVar6) * 8) - *(float *)(lVar2 + lVar3 * 8);
      fVar10 = fVar9 * fVar9 + fVar8 * fVar8;
      auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar11 = auVar12._0_4_;
      fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
      _fStackX_8 = CONCAT44(fVar9 * fVar10,fVar8 * fVar10);
      cVar1 = FUN_18063e970(fVar10,&fStackX_8,param_2,param_1);
      if (cVar1 != '\0') {
        return 0;
      }
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar6);
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18063ecd0(uint64_t param_1,int64_t param_2,uint64_t param_3)
void FUN_18063ecd0(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  int8_t auStack_168 [32];
  int64_t *plStack_148;
  uint64_t uStack_140;
  int64_t alStack_138 [3];
  int32_t uStack_120;
  uint64_t uStack_108;
  uint64_t uStack_100;
  int64_t lStack_f8;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t auStack_a8 [2];
  uint64_t uStack_98;
  uint64_t uStack_88;
  uint64_t uStack_78;
  uint64_t uStack_68;
  uint64_t uStack_58;
  uint64_t uStack_48;
  uint64_t uStack_38;
  uint64_t uStack_28;
  
  uStack_140 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  func_0x000180632b30(auStack_a8,param_2,param_2 + 0x10,param_3);
  puVar1 = &uStack_e8;
  alStack_138[2] = 8;
  do {
    func_0x00018005d390(puVar1);
    puVar1 = puVar1 + 1;
    alStack_138[2] = alStack_138[2] + -1;
  } while (alStack_138[2] != 0);
  uStack_e8 = auStack_a8[0];
  uStack_e0 = uStack_98;
  uStack_d8 = uStack_88;
  uStack_d0 = uStack_78;
  uStack_c8 = uStack_68;
  uStack_c0 = uStack_58;
  uStack_b8 = uStack_48;
  uStack_b0 = uStack_38;
  alStack_138[0] = 0;
  alStack_138[1] = 0;
  uStack_120 = 3;
  uStack_108 = 0;
  uStack_100 = 0;
  plStack_148 = &uStack_e8;
  lStack_f8 = alStack_138[2];
  FUN_180640330(&uStack_e8,auStack_a8);
  FUN_18063f960(alStack_138,&plStack_148,8);
  FUN_18063ea70(param_1,alStack_138);
  plStack_148 = alStack_138;
  if (alStack_138[0] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_168);
}



float FUN_18063ee10(int64_t *param_1,float *param_2,uint64_t *param_3)

{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStackX_8;
  float fStackX_c;
  
  fVar11 = 3.4028235e+38;
  iVar7 = (int)(param_1[1] - *param_1 >> 3);
  if (0 < iVar7) {
    lVar5 = 0;
    iVar6 = 1;
    do {
      lVar2 = *param_1;
      fVar8 = *(float *)(lVar2 + 4 + lVar5 * 8);
      fVar1 = *(float *)(lVar2 + lVar5 * 8);
      lVar3 = (int64_t)(iVar6 % iVar7);
      fVar10 = *(float *)(lVar2 + 4 + lVar3 * 8) - fVar8;
      fVar9 = *(float *)(lVar2 + lVar3 * 8) - fVar1;
      fVar12 = fVar9 * fVar9 + fVar10 * fVar10;
      if (fVar12 == 0.0) {
        uVar4 = *(uint64_t *)(lVar2 + lVar5 * 8);
      }
      else {
        fVar12 = ((param_2[1] - fVar8) * fVar10 + (*param_2 - fVar1) * fVar9) / fVar12;
        if (0.0 <= fVar12) {
          if (fVar12 <= 1.0) {
            uVar4 = CONCAT44(fVar10 * fVar12 + fVar8,fVar9 * fVar12 + fVar1);
          }
          else {
            uVar4 = *(uint64_t *)(lVar2 + lVar3 * 8);
          }
        }
        else {
          uVar4 = *(uint64_t *)(lVar2 + lVar5 * 8);
        }
      }
      fStackX_c = (float)((uint64_t)uVar4 >> 0x20);
      fStackX_8 = (float)uVar4;
      fStackX_c = fStackX_c - param_2[1];
      fVar8 = SQRT((fStackX_8 - *param_2) * (fStackX_8 - *param_2) + fStackX_c * fStackX_c);
      if (fVar8 < fVar11) {
        *param_3 = uVar4;
        fVar11 = fVar8;
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar7);
  }
  return fVar11;
}



uint64_t FUN_18063ee47(void)

{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t unaff_RBX;
  int64_t *unaff_RSI;
  uint64_t *unaff_RDI;
  int64_t lVar5;
  float *in_R9;
  int iVar6;
  int in_R11D;
  float fVar7;
  float fVar8;
  float fVar9;
  float in_XMM5_Da;
  int32_t in_XMM5_Db;
  float fVar10;
  float fStack0000000000000060;
  float fStack0000000000000064;
  
  lVar5 = 0;
  iVar6 = 1;
  do {
    lVar2 = *unaff_RSI;
    fVar7 = *(float *)(lVar2 + 4 + lVar5 * 8);
    fVar1 = *(float *)(lVar2 + lVar5 * 8);
    lVar3 = (int64_t)(iVar6 % in_R11D);
    fVar9 = *(float *)(lVar2 + 4 + lVar3 * 8) - fVar7;
    fVar8 = *(float *)(lVar2 + lVar3 * 8) - fVar1;
    fVar10 = fVar8 * fVar8 + fVar9 * fVar9;
    if (fVar10 == 0.0) {
      uVar4 = *(uint64_t *)(lVar2 + lVar5 * 8);
    }
    else {
      fVar10 = ((in_R9[1] - fVar7) * fVar9 + (*in_R9 - fVar1) * fVar8) / fVar10;
      if (0.0 <= fVar10) {
        if (fVar10 <= 1.0) {
          uVar4 = CONCAT44(fVar9 * fVar10 + fVar7,fVar8 * fVar10 + fVar1);
        }
        else {
          uVar4 = *(uint64_t *)(lVar2 + lVar3 * 8);
        }
      }
      else {
        uVar4 = *(uint64_t *)(lVar2 + lVar5 * 8);
      }
    }
    fStack0000000000000064 = (float)((uint64_t)uVar4 >> 0x20);
    fStack0000000000000060 = (float)uVar4;
    fStack0000000000000064 = fStack0000000000000064 - in_R9[1];
    fVar7 = SQRT((fStack0000000000000060 - *in_R9) * (fStack0000000000000060 - *in_R9) +
                 fStack0000000000000064 * fStack0000000000000064);
    if (fVar7 < in_XMM5_Da) {
      in_XMM5_Db = 0;
      *unaff_RDI = uVar4;
      in_XMM5_Da = fVar7;
    }
    iVar6 = iVar6 + 1;
    lVar5 = lVar5 + 1;
  } while (lVar5 < unaff_RBX);
  return CONCAT44(in_XMM5_Db,in_XMM5_Da);
}





// 函数: void FUN_18063ef8f(void)
void FUN_18063ef8f(void)

{
  return;
}





// 函数: void FUN_18063efb0(int64_t *param_1,int64_t *param_2,int param_3,char param_4)
void FUN_18063efb0(int64_t *param_1,int64_t *param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int iVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int64_t lStack_128;
  int64_t lStack_f8;
  
  param_1[1] = *param_1;
  FUN_18033a920(param_1,(int64_t)(param_3 * 2));
  uVar15 = 0;
  fVar30 = 0.0;
  uVar8 = uVar15;
  uVar13 = uVar15;
  uVar17 = uVar15;
  if (0 < param_3) {
    do {
      uVar18 = (uint)uVar17;
      if (1 < (int64_t)uVar8) {
        lVar3 = *param_1 + -4 + uVar8 * 8;
        fVar31 = *(float *)(*param_1 + -4 + uVar8 * 8);
        do {
          uVar18 = (uint)uVar17;
          fVar27 = *(float *)(lVar3 + -8);
          if (0.0 < (*(float *)(lVar3 + -4) - *(float *)(lVar3 + -0xc)) *
                    (*(float *)(*param_2 + 4 + uVar13 * 8) - fVar27) -
                    (fVar31 - fVar27) *
                    (*(float *)(*param_2 + uVar13 * 8) - *(float *)(lVar3 + -0xc))) break;
          uVar18 = uVar18 - 1;
          uVar17 = (uint64_t)uVar18;
          uVar8 = uVar8 - 1;
          lVar3 = lVar3 + -8;
          fVar31 = fVar27;
        } while (1 < (int64_t)uVar8);
      }
      uVar17 = (uint64_t)(uVar18 + 1);
      uVar14 = uVar13 + 1;
      *(uint64_t *)(*param_1 + uVar8 * 8) = *(uint64_t *)(*param_2 + uVar13 * 8);
      uVar8 = uVar8 + 1;
      uVar13 = uVar14;
    } while ((int64_t)uVar14 < (int64_t)param_3);
  }
  uVar18 = (uint)uVar17;
  iVar2 = uVar18 + 1;
  lVar3 = (int64_t)(param_3 + -2);
  if (-1 < param_3 + -2) {
    lVar9 = (int64_t)(int)uVar18;
    do {
      uVar18 = (uint)uVar17;
      if (iVar2 <= lVar9) {
        lVar4 = *param_1 + -4 + lVar9 * 8;
        fVar31 = *(float *)(*param_1 + -4 + lVar9 * 8);
        do {
          uVar18 = (uint)uVar17;
          fVar27 = *(float *)(lVar4 + -8);
          if (0.0 < (*(float *)(lVar4 + -4) - *(float *)(lVar4 + -0xc)) *
                    (*(float *)(*param_2 + 4 + lVar3 * 8) - fVar27) -
                    (*(float *)(*param_2 + lVar3 * 8) - *(float *)(lVar4 + -0xc)) *
                    (fVar31 - fVar27)) break;
          uVar18 = uVar18 - 1;
          uVar17 = (uint64_t)uVar18;
          lVar9 = lVar9 + -1;
          lVar4 = lVar4 + -8;
          fVar31 = fVar27;
        } while (iVar2 <= lVar9);
      }
      uVar18 = uVar18 + 1;
      uVar17 = (uint64_t)uVar18;
      *(uint64_t *)(*param_1 + lVar9 * 8) = *(uint64_t *)(*param_2 + lVar3 * 8);
      lVar9 = lVar9 + 1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  FUN_18033a920(param_1,(int64_t)(int)(uVar18 - 1));
  if (param_4 != '\0') {
    FUN_18063e510(param_1);
  }
  FUN_180398ab0(param_1);
  param_1[6] = 0x7f7fffff7f7fffff;
  param_1[7] = -0x80000000800001;
  lVar3 = param_1[1];
  lVar9 = *param_1;
  if (lVar3 - lVar9 >> 3 != 0) {
    uVar8 = uVar15;
    fVar31 = *(float *)(param_1 + 6);
    fVar27 = *(float *)((int64_t)param_1 + 0x34);
    fVar28 = *(float *)(param_1 + 7);
    fVar29 = *(float *)((int64_t)param_1 + 0x3c);
    do {
      uVar18 = (int)uVar15 + 1;
      uVar15 = (uint64_t)uVar18;
      fVar23 = *(float *)(uVar8 + *param_1);
      if (fVar31 <= *(float *)(uVar8 + *param_1)) {
        fVar23 = fVar31;
      }
      *(float *)(param_1 + 6) = fVar23;
      fVar24 = *(float *)(uVar8 + 4 + *param_1);
      if (fVar27 <= fVar24) {
        fVar24 = fVar27;
      }
      *(float *)((int64_t)param_1 + 0x34) = fVar24;
      fVar25 = *(float *)(uVar8 + *param_1);
      if (*(float *)(uVar8 + *param_1) <= fVar28) {
        fVar25 = fVar28;
      }
      *(float *)(param_1 + 7) = fVar25;
      fVar26 = *(float *)(uVar8 + 4 + *param_1);
      if (fVar26 <= fVar29) {
        fVar26 = fVar29;
      }
      *(float *)((int64_t)param_1 + 0x3c) = fVar26;
      lVar3 = param_1[1];
      lVar9 = *param_1;
      uVar8 = uVar8 + 8;
      fVar31 = fVar23;
      fVar27 = fVar24;
      fVar28 = fVar25;
      fVar29 = fVar26;
    } while ((uint64_t)(int64_t)(int)uVar18 < (uint64_t)(lVar3 - lVar9 >> 3));
  }
  uVar8 = 0;
  iVar2 = (int)(lVar3 - lVar9 >> 3);
  if (iVar2 < 7) {
    param_1[4] = -1;
    param_1[5] = -1;
  }
  else if (0 < iVar2 + -3) {
    lVar9 = (int64_t)iVar2;
    lStack_f8 = 3;
    lVar3 = lVar9 + -3;
    uVar13 = uVar8;
    do {
      lVar4 = *param_1;
      iVar1 = (int)uVar13;
      uVar18 = iVar1 + 1;
      if ((int)uVar18 < iVar2 + -2) {
        iVar6 = iVar1 + 2;
        lVar11 = lStack_f8;
        lVar16 = lVar3;
        uVar22 = uVar18;
        uVar13 = uVar8;
        do {
          uVar17 = uVar13 + 8;
          if (iVar6 < iVar2 + -1) {
            lVar10 = uVar13 + 0x10;
            lVar5 = lVar11;
            iVar12 = iVar6;
            lStack_128 = lVar16;
            iVar21 = iVar6;
            do {
              iVar20 = iVar21 + 1;
              if (lVar5 < lVar9) {
                lVar7 = lVar5;
                iVar19 = iVar20;
                if (3 < lStack_128) {
                  iVar21 = iVar21 + 3;
                  do {
                    fVar29 = *(float *)(lVar10 + 4 + lVar4);
                    fVar23 = *(float *)(uVar8 + lVar4);
                    fVar28 = *(float *)(lVar10 + lVar4);
                    fVar27 = *(float *)(uVar8 + 4 + lVar4);
                    fVar24 = *(float *)(uVar17 + lVar4);
                    fVar25 = *(float *)(uVar13 + 0xc + lVar4);
                    fVar31 = *(float *)(lVar4 + lVar7 * 8);
                    fVar31 = ABS((((fVar25 * fVar23 + fVar24 * fVar29 + fVar28 * fVar27) -
                                  fVar24 * fVar27) - fVar25 * fVar28) - fVar23 * fVar29) +
                             ABS((((fVar28 * *(float *)(lVar4 + 4 + lVar7 * 8) + fVar31 * fVar27 +
                                   fVar23 * fVar29) - fVar29 * fVar31) -
                                 fVar23 * *(float *)(lVar4 + 4 + lVar7 * 8)) - fVar28 * fVar27);
                    if (fVar30 < fVar31) {
                      *(int *)(param_1 + 4) = iVar1;
                      *(uint *)((int64_t)param_1 + 0x24) = uVar22;
                      *(int *)(param_1 + 5) = iVar12;
                      *(int *)((int64_t)param_1 + 0x2c) = iVar19;
                      fVar27 = *(float *)(uVar8 + 4 + lVar4);
                      fVar28 = *(float *)(lVar10 + lVar4);
                      fVar29 = *(float *)(lVar10 + 4 + lVar4);
                      fVar23 = *(float *)(uVar8 + lVar4);
                      fVar24 = *(float *)(uVar17 + lVar4);
                      fVar25 = *(float *)(uVar13 + 0xc + lVar4);
                      fVar30 = fVar31;
                    }
                    fVar31 = ABS((((fVar28 * *(float *)(lVar4 + 0xc + lVar7 * 8) +
                                    fVar27 * *(float *)(lVar4 + 8 + lVar7 * 8) + fVar23 * fVar29) -
                                  fVar29 * *(float *)(lVar4 + 8 + lVar7 * 8)) -
                                 fVar23 * *(float *)(lVar4 + 0xc + lVar7 * 8)) - fVar28 * fVar27) +
                             ABS((((fVar25 * fVar23 + fVar24 * fVar29 + fVar28 * fVar27) -
                                  fVar24 * fVar27) - fVar25 * fVar28) - fVar23 * fVar29);
                    if (fVar30 < fVar31) {
                      *(int *)(param_1 + 4) = iVar1;
                      *(int *)((int64_t)param_1 + 0x2c) = iVar21 + -1;
                      *(uint *)((int64_t)param_1 + 0x24) = uVar22;
                      *(int *)(param_1 + 5) = iVar12;
                      fVar27 = *(float *)(uVar8 + 4 + lVar4);
                      fVar28 = *(float *)(lVar10 + lVar4);
                      fVar29 = *(float *)(lVar10 + 4 + lVar4);
                      fVar23 = *(float *)(uVar8 + lVar4);
                      fVar24 = *(float *)(uVar17 + lVar4);
                      fVar25 = *(float *)(uVar13 + 0xc + lVar4);
                      fVar30 = fVar31;
                    }
                    fVar31 = ABS((((fVar28 * *(float *)(lVar4 + 0x14 + lVar7 * 8) +
                                    fVar27 * *(float *)(lVar4 + 0x10 + lVar7 * 8) + fVar23 * fVar29)
                                  - fVar29 * *(float *)(lVar4 + 0x10 + lVar7 * 8)) -
                                 fVar23 * *(float *)(lVar4 + 0x14 + lVar7 * 8)) - fVar28 * fVar27) +
                             ABS((((fVar25 * fVar23 + fVar24 * fVar29 + fVar28 * fVar27) -
                                  fVar24 * fVar27) - fVar25 * fVar28) - fVar23 * fVar29);
                    if (fVar30 < fVar31) {
                      *(int *)(param_1 + 4) = iVar1;
                      *(uint *)((int64_t)param_1 + 0x24) = uVar22;
                      *(int *)(param_1 + 5) = iVar12;
                      *(int *)((int64_t)param_1 + 0x2c) = iVar21;
                      fVar27 = *(float *)(uVar8 + 4 + lVar4);
                      fVar28 = *(float *)(lVar10 + lVar4);
                      fVar29 = *(float *)(lVar10 + 4 + lVar4);
                      fVar23 = *(float *)(uVar8 + lVar4);
                      fVar24 = *(float *)(uVar17 + lVar4);
                      fVar25 = *(float *)(uVar13 + 0xc + lVar4);
                      fVar30 = fVar31;
                    }
                    fVar31 = ABS((((fVar27 * *(float *)(lVar4 + 0x18 + lVar7 * 8) +
                                    fVar28 * *(float *)(lVar4 + 0x1c + lVar7 * 8) + fVar23 * fVar29)
                                  - fVar29 * *(float *)(lVar4 + 0x18 + lVar7 * 8)) -
                                 fVar23 * *(float *)(lVar4 + 0x1c + lVar7 * 8)) - fVar28 * fVar27) +
                             ABS((((fVar25 * fVar23 + fVar24 * fVar29 + fVar28 * fVar27) -
                                  fVar24 * fVar27) - fVar25 * fVar28) - fVar23 * fVar29);
                    if (fVar30 < fVar31) {
                      *(int *)(param_1 + 4) = iVar1;
                      *(int *)((int64_t)param_1 + 0x2c) = iVar21 + 1;
                      *(uint *)((int64_t)param_1 + 0x24) = uVar22;
                      *(int *)(param_1 + 5) = iVar12;
                      fVar30 = fVar31;
                    }
                    iVar19 = iVar19 + 4;
                    iVar21 = iVar21 + 4;
                    lVar7 = lVar7 + 4;
                  } while (lVar7 < lVar9 + -3);
                }
                for (; lVar7 < lVar9; lVar7 = lVar7 + 1) {
                  fVar31 = *(float *)(lVar10 + 4 + lVar4);
                  fVar27 = *(float *)(uVar8 + lVar4);
                  fVar28 = *(float *)(lVar10 + lVar4);
                  fVar29 = *(float *)(uVar8 + 4 + lVar4);
                  fVar23 = *(float *)(uVar13 + 0xc + lVar4);
                  fVar24 = *(float *)(lVar4 + lVar7 * 8);
                  fVar31 = ABS((((fVar23 * fVar27 + *(float *)(uVar17 + lVar4) * fVar31 +
                                 fVar28 * fVar29) - *(float *)(uVar17 + lVar4) * fVar29) -
                               fVar23 * fVar28) - fVar27 * fVar31) +
                           ABS((((fVar28 * *(float *)(lVar4 + 4 + lVar7 * 8) + fVar24 * fVar29 +
                                 fVar27 * fVar31) - fVar31 * fVar24) -
                               fVar27 * *(float *)(lVar4 + 4 + lVar7 * 8)) - fVar28 * fVar29);
                  if (fVar30 < fVar31) {
                    *(int *)(param_1 + 4) = iVar1;
                    *(uint *)((int64_t)param_1 + 0x24) = uVar22;
                    *(int *)(param_1 + 5) = iVar12;
                    *(int *)((int64_t)param_1 + 0x2c) = iVar19;
                    fVar30 = fVar31;
                  }
                  iVar19 = iVar19 + 1;
                }
              }
              lStack_128 = lStack_128 + -1;
              lVar5 = lVar5 + 1;
              iVar12 = iVar12 + 1;
              lVar10 = lVar10 + 8;
              iVar21 = iVar20;
            } while (iVar12 < iVar2 + -1);
          }
          iVar6 = iVar6 + 1;
          lVar16 = lVar16 + -1;
          lVar11 = lVar11 + 1;
          uVar22 = uVar22 + 1;
          uVar13 = uVar17;
        } while ((int)uVar22 < iVar2 + -2);
      }
      lVar3 = lVar3 + -1;
      lStack_f8 = lStack_f8 + 1;
      uVar8 = uVar8 + 8;
      uVar13 = (uint64_t)uVar18;
    } while ((int)uVar18 < iVar2 + -3);
  }
  return;
}





