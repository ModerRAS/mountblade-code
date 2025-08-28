#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part411.c - 5 个函数

// 函数: void FUN_180493810(longlong *param_1)
void FUN_180493810(longlong *param_1)

{
  ulonglong unaff_RBP;
  longlong *unaff_RSI;
  longlong *plVar1;
  longlong unaff_RDI;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R14;
  bool bVar7;
  
  do {
    lVar3 = *unaff_RSI;
    if (*(uint *)(lVar3 + 0x6c) < *(uint *)(*param_1 + 0x6c)) {
      lVar5 = 2;
      *unaff_RSI = *param_1;
      bVar7 = unaff_RDI == 2;
      lVar4 = unaff_R12;
      lVar6 = unaff_R12;
      if (2 < unaff_RDI) {
        do {
          lVar6 = lVar5 + -1;
          if (*(uint *)(param_1[lVar5 + -1] + 0x6c) <= *(uint *)(param_1[lVar5] + 0x6c)) {
            lVar6 = lVar5;
          }
          lVar5 = lVar6 * 2 + 2;
          param_1[lVar4] = param_1[lVar6];
          bVar7 = lVar5 == unaff_RDI;
          lVar4 = lVar6;
        } while (lVar5 < unaff_RDI);
      }
      if (bVar7) {
        param_1[lVar6] = param_1[lVar5 + -1];
        lVar6 = lVar5 + -1;
      }
      while (0 < lVar6) {
        lVar5 = lVar6 + -1 >> 1;
        if (*(uint *)(lVar3 + 0x6c) <= *(uint *)(param_1[lVar5] + 0x6c)) break;
        param_1[lVar6] = param_1[lVar5];
        lVar6 = lVar5;
      }
      param_1[lVar6] = lVar3;
    }
    unaff_RSI = unaff_RSI + 1;
    unaff_RBP = unaff_RBP + 1;
  } while (unaff_RBP < unaff_R14);
  if (1 < unaff_RDI) {
    plVar1 = (longlong *)(unaff_R13 + -8);
    do {
      lVar2 = unaff_RDI + -1;
      lVar5 = *plVar1;
      lVar6 = 2;
      *plVar1 = *param_1;
      bVar7 = lVar2 == 2;
      lVar3 = unaff_R12;
      lVar4 = unaff_R12;
      if (2 < lVar2) {
        do {
          lVar3 = lVar6 + -1;
          if (*(uint *)(param_1[lVar6 + -1] + 0x6c) <= *(uint *)(param_1[lVar6] + 0x6c)) {
            lVar3 = lVar6;
          }
          lVar6 = lVar3 * 2 + 2;
          param_1[lVar4] = param_1[lVar3];
          bVar7 = lVar6 == lVar2;
          lVar4 = lVar3;
        } while (lVar6 < lVar2);
      }
      if (bVar7) {
        param_1[lVar3] = param_1[lVar6 + -1];
        lVar3 = lVar6 + -1;
      }
      while (0 < lVar3) {
        lVar6 = lVar3 + -1 >> 1;
        if (*(uint *)(lVar5 + 0x6c) <= *(uint *)(param_1[lVar6] + 0x6c)) break;
        param_1[lVar3] = param_1[lVar6];
        lVar3 = lVar6;
      }
      plVar1 = plVar1 + -1;
      param_1[lVar3] = lVar5;
      unaff_RDI = (8 - (longlong)param_1) + (longlong)plVar1 >> 3;
    } while (1 < unaff_RDI);
  }
  return;
}





// 函数: void FUN_1804938c2(longlong *param_1)
void FUN_1804938c2(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_R12;
  longlong unaff_R13;
  bool bVar7;
  
  plVar2 = (longlong *)(unaff_R13 + -8);
  do {
    lVar3 = unaff_RDI + -1;
    lVar1 = *plVar2;
    lVar6 = 2;
    *plVar2 = *param_1;
    bVar7 = lVar3 == 2;
    lVar4 = unaff_R12;
    lVar5 = unaff_R12;
    if (2 < lVar3) {
      do {
        lVar4 = lVar6 + -1;
        if (*(uint *)(param_1[lVar6 + -1] + 0x6c) <= *(uint *)(param_1[lVar6] + 0x6c)) {
          lVar4 = lVar6;
        }
        lVar6 = lVar4 * 2 + 2;
        param_1[lVar5] = param_1[lVar4];
        bVar7 = lVar6 == lVar3;
        lVar5 = lVar4;
      } while (lVar6 < lVar3);
    }
    if (bVar7) {
      param_1[lVar4] = param_1[lVar6 + -1];
      lVar4 = lVar6 + -1;
    }
    while (0 < lVar4) {
      lVar6 = lVar4 + -1 >> 1;
      if (*(uint *)(lVar1 + 0x6c) <= *(uint *)(param_1[lVar6] + 0x6c)) break;
      param_1[lVar4] = param_1[lVar6];
      lVar4 = lVar6;
    }
    plVar2 = plVar2 + -1;
    param_1[lVar4] = lVar1;
    unaff_RDI = (8 - (longlong)param_1) + (longlong)plVar2 >> 3;
    if (unaff_RDI < 2) {
      return;
    }
  } while( true );
}



uint64_t FUN_180493990(uint64_t param_1,ulonglong param_2)

{
  FUN_1804957d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x408);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1804939d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  
  plStackX_10 = param_2;
  puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x130,8,3,0xfffffffffffffffe);
  puVar5 = (uint64_t *)0x0;
  *puVar3 = 0;
  *(int32_t *)(puVar3 + 1) = 0;
  *(uint64_t *)((longlong)puVar3 + 0xcc) = 0;
  *(int32_t *)((longlong)puVar3 + 0xd4) = 0;
  puVar3[0x23] = 0;
  *(int32_t *)(puVar3 + 0x1f) = 0;
  puVar3[0x25] = 0;
  puVar3[0x24] = 0;
  *(int8_t *)((longlong)puVar3 + 0xfc) = 0;
  pplStackX_18 = &plStackX_8;
  plStackX_8 = (longlong *)*param_2;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  FUN_180495f60(puVar3,&plStackX_8);
  *(int8_t *)(param_1 + 0x80) = 1;
  lVar1 = param_1 + 8;
  pplStackX_18 = (longlong **)lVar1;
  iVar2 = _Mtx_lock(lVar1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  puVar7 = *(uint64_t **)(param_1 + 0x68);
  if (puVar7 < *(uint64_t **)(param_1 + 0x70)) {
    *(uint64_t **)(param_1 + 0x68) = puVar7 + 1;
    *puVar7 = puVar3;
    goto LAB_180493b4d;
  }
  puVar6 = *(uint64_t **)(param_1 + 0x60);
  lVar4 = (longlong)puVar7 - (longlong)puVar6 >> 3;
  if (lVar4 == 0) {
    lVar4 = 1;
LAB_180493ae4:
    puVar5 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,lVar4 * 8,*(int8_t *)(param_1 + 0x78));
    puVar7 = *(uint64_t **)(param_1 + 0x68);
    puVar6 = *(uint64_t **)(param_1 + 0x60);
  }
  else {
    lVar4 = lVar4 * 2;
    if (lVar4 != 0) goto LAB_180493ae4;
  }
  if (puVar6 != puVar7) {
                    // WARNING: Subroutine does not return
    memmove(puVar5,puVar6,(longlong)puVar7 - (longlong)puVar6);
  }
  *puVar5 = puVar3;
  if (*(longlong *)(param_1 + 0x60) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t **)(param_1 + 0x60) = puVar5;
  *(uint64_t **)(param_1 + 0x68) = puVar5 + 1;
  *(uint64_t **)(param_1 + 0x70) = puVar5 + lVar4;
LAB_180493b4d:
  iVar2 = _Mtx_unlock(lVar1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return puVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180493b90(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_180493b90(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint64_t uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  iVar2 = _Mtx_lock(param_1 + 8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar5 = *(longlong *)(param_1 + 0x60);
  uVar4 = 0;
  iVar2 = (int)(*(longlong *)(param_1 + 0x68) - lVar5 >> 3);
  uVar3 = uVar4;
  uVar7 = uVar4;
  if (0 < iVar2) {
    do {
      if (param_2 == *(longlong *)(lVar5 + uVar3 * 8)) {
        lVar6 = (longlong)(int)uVar7 * 8;
        plVar1 = *(longlong **)(lVar6 + lVar5);
        if (plVar1 != (longlong *)0x0) {
          FUN_180490c90(plVar1[0x23]);
          plVar1[0x23] = 0;
          if ((longlong *)*plVar1 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar1 + 0x38))();
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar1);
        }
        *(uint64_t *)(lVar6 + *(longlong *)(param_1 + 0x60)) = 0;
        uVar7 = (ulonglong)(iVar2 + -1);
        *(uint64_t *)(*(longlong *)(param_1 + 0x60) + lVar6) =
             *(uint64_t *)(uVar7 * 8 + *(longlong *)(param_1 + 0x60));
        lVar5 = *(longlong *)(param_1 + 0x68);
        lVar6 = *(longlong *)(param_1 + 0x60);
        uVar3 = lVar5 - lVar6 >> 3;
        if (uVar3 < uVar7) {
          uVar8 = uVar7 - uVar3;
          if (uVar8 <= (ulonglong)(*(longlong *)(param_1 + 0x70) - lVar5 >> 3)) {
            if (uVar8 != 0) {
                    // WARNING: Subroutine does not return
              memset(lVar5,0,uVar8 * 8,param_4,uVar9);
            }
            goto LAB_180493d71;
          }
          if (uVar3 == 0) {
            uVar3 = 1;
          }
          else {
            uVar3 = uVar3 * 2;
          }
          if (uVar3 < uVar7) {
            uVar3 = uVar7;
          }
          if (uVar3 != 0) {
            uVar4 = FUN_18062b420(system_memory_pool_ptr,uVar3 * 8,*(int8_t *)(param_1 + 0x78));
            lVar5 = *(longlong *)(param_1 + 0x68);
            lVar6 = *(longlong *)(param_1 + 0x60);
          }
          if (lVar6 != lVar5) {
                    // WARNING: Subroutine does not return
            memmove(uVar4,lVar6,lVar5 - lVar6);
          }
          if (uVar8 != 0) {
                    // WARNING: Subroutine does not return
            memset(uVar4,0,uVar8 * 8,param_4,uVar9);
          }
          if (*(longlong *)(param_1 + 0x60) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(ulonglong *)(param_1 + 0x60) = uVar4;
          *(ulonglong *)(param_1 + 0x68) = uVar4;
          *(ulonglong *)(param_1 + 0x70) = uVar4 + uVar3 * 8;
        }
        else {
          lVar5 = lVar6 + uVar7 * 8;
LAB_180493d71:
          *(longlong *)(param_1 + 0x68) = lVar5;
        }
        *(int8_t *)(param_1 + 0x80) = 1;
        break;
      }
      uVar3 = uVar3 + 1;
      uVar7 = (ulonglong)((int)uVar7 + 1);
    } while ((longlong)uVar3 < (longlong)iVar2);
  }
  iVar2 = _Mtx_unlock(param_1 + 8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}





// 函数: void FUN_180493db0(uint64_t param_1,longlong *param_2,float *param_3)
void FUN_180493db0(uint64_t param_1,longlong *param_2,float *param_3)

{
  uint64_t uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  
  uVar1 = *(uint64_t *)(param_3 + 2);
  *(uint64_t *)((longlong)param_2 + 0xc) = *(uint64_t *)param_3;
  *(uint64_t *)((longlong)param_2 + 0x14) = uVar1;
  uVar1 = *(uint64_t *)(param_3 + 6);
  *(uint64_t *)((longlong)param_2 + 0x1c) = *(uint64_t *)(param_3 + 4);
  *(uint64_t *)((longlong)param_2 + 0x24) = uVar1;
  fVar2 = param_3[9];
  fVar3 = param_3[10];
  fVar4 = param_3[0xb];
  *(float *)((longlong)param_2 + 0x2c) = param_3[8];
  *(float *)(param_2 + 6) = fVar2;
  *(float *)((longlong)param_2 + 0x34) = fVar3;
  *(float *)(param_2 + 7) = fVar4;
  fVar2 = param_3[0xd];
  fVar3 = param_3[0xe];
  fVar4 = param_3[0xf];
  *(float *)((longlong)param_2 + 0x3c) = param_3[0xc];
  *(float *)(param_2 + 8) = fVar2;
  *(float *)((longlong)param_2 + 0x44) = fVar3;
  *(float *)(param_2 + 9) = fVar4;
  *(int32_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 5) = 0;
  *(int32_t *)(param_2 + 7) = 0;
  *(int32_t *)(param_2 + 9) = 0x3f800000;
  FUN_18063a7b0(*(longlong *)(*param_2 + 0xb8) + 0xf8,(uint64_t *)((longlong)param_2 + 0xc),
                &fStack_88,&fStack_78);
  fVar4 = (fStack_78 - fStack_88) * 0.5;
  fVar3 = (fStack_74 - fStack_84) * 0.5;
  fVar2 = (fStack_70 - fStack_80) * 0.5;
  *(float *)(param_2 + 0x1b) = (fStack_78 + fStack_88) * 0.5;
  *(float *)((longlong)param_2 + 0xdc) = (fStack_84 + fStack_74) * 0.5;
  *(float *)(param_2 + 0x1c) = (fStack_80 + fStack_70) * 0.5;
  *(int32_t *)((longlong)param_2 + 0xe4) = 0x7f7fffff;
  *(float *)(param_2 + 0x1d) = fVar4;
  *(float *)((longlong)param_2 + 0xec) = fVar3;
  *(float *)(param_2 + 0x1e) = fVar2;
  *(int32_t *)((longlong)param_2 + 0xf4) = 0x7f7fffff;
  *(float *)(param_2 + 0x22) = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  *(bool *)((longlong)param_2 + 0xfc) =
       0.0 <= (param_3[2] * param_3[4] - *param_3 * param_3[6]) * param_3[9] +
              (param_3[1] * param_3[6] - param_3[2] * param_3[5]) * param_3[8] +
              (*param_3 * param_3[5] - param_3[1] * param_3[4]) * param_3[10];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180494010(longlong param_1,float *param_2,uint64_t *param_3,int param_4)
void FUN_180494010(longlong param_1,float *param_2,uint64_t *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  bool bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  float *pfVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int8_t auStack_218 [32];
  uint uStack_1f8;
  char cStack_1f4;
  uint uStack_1f0;
  uint64_t uStack_1e8;
  float fStack_1e0;
  float fStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  float afStack_1b8 [4];
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float afStack_198 [4];
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  ulonglong uStack_110;
  uint64_t uStack_108;
  int32_t uStack_100;
  int32_t uStack_fc;
  ulonglong auStack_f8 [2];
  float afStack_e4 [27];
  ulonglong uStack_78;
  
  uStack_78 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_218;
  uVar4 = *param_3;
  lVar27 = (longlong)param_4;
  uVar5 = param_3[2];
  uVar12 = param_3[4];
  uStack_130 = param_3[1] & 0xffffffff;
  uVar29 = uStack_130;
  uStack_138._0_4_ = (float)uVar4;
  uStack_108 = param_3[6];
  uStack_120 = param_3[3] & 0xffffffff;
  uVar14 = uStack_120;
  uStack_128._0_4_ = (float)uVar5;
  uStack_120._0_4_ = (float)param_3[3];
  uStack_130._0_4_ = (float)param_3[1];
  uStack_110 = param_3[5] & 0xffffffff;
  uVar6 = uStack_110;
  uStack_138._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
  uStack_128._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
  _uStack_100 = CONCAT44(0x3f800000,(int)param_3[7]);
  uStack_118._4_4_ = (float)(uVar12 >> 0x20);
  uStack_110._0_4_ = (float)param_3[5];
  uStack_118._0_4_ = (float)uVar12;
  cVar15 = 0.0 <= ((float)uStack_128 * (float)uStack_130 - (float)uStack_138 * (float)uStack_120) *
                  uStack_118._4_4_ +
                  ((float)uStack_120 * uStack_138._4_4_ - uStack_128._4_4_ * (float)uStack_130) *
                  (float)uStack_118 +
                  ((float)uStack_138 * uStack_128._4_4_ - (float)uStack_128 * uStack_138._4_4_) *
                  (float)uStack_110;
  cStack_1f4 = cVar15;
  uStack_138 = uVar4;
  uStack_130 = uVar29;
  uStack_128 = uVar5;
  uStack_120 = uVar14;
  uStack_118 = uVar12;
  uStack_110 = uVar6;
  FUN_1800946d0(&uStack_138,&fStack_178,param_1 + 0x2c8 + lVar27 * 0x40);
  fVar32 = *param_2;
  fVar35 = param_2[4];
  afStack_1b8[0] = fVar32 * fStack_178;
  afStack_1b8[1] = fVar32 * fStack_174;
  afStack_1b8[2] = fVar32 * fStack_170;
  afStack_1b8[3] = fVar32 * fStack_16c;
  pfVar19 = afStack_e4;
  fVar32 = param_2[1];
  lVar21 = 0;
  fStack_1a8 = fVar35 * fStack_178;
  fStack_1a4 = fVar35 * fStack_174;
  fStack_1a0 = fVar35 * fStack_170;
  fStack_19c = fVar35 * fStack_16c;
  lVar24 = 2;
  fVar35 = param_2[5];
  afStack_198[0] = fVar32 * fStack_168;
  afStack_198[1] = fVar32 * fStack_164;
  afStack_198[2] = fVar32 * fStack_160;
  afStack_198[3] = fVar32 * fStack_15c;
  fVar32 = param_2[2];
  fStack_188 = fVar35 * fStack_168;
  fStack_184 = fVar35 * fStack_164;
  fStack_180 = fVar35 * fStack_160;
  fStack_17c = fVar35 * fStack_15c;
  fVar35 = param_2[6];
  bVar7 = true;
  fStack_1e0 = fVar35 * fStack_150;
  uStack_138 = CONCAT44(fVar32 * fStack_154,fVar32 * fStack_158);
  uStack_130 = CONCAT44(fVar32 * fStack_14c,fVar32 * fStack_150);
  fStack_1dc = fVar35 * fStack_14c;
  uStack_1e8 = CONCAT44(fVar35 * fStack_154,fVar35 * fStack_158);
  uStack_128 = CONCAT44(fVar35 * fStack_154,fVar35 * fStack_158);
  uStack_120 = CONCAT44(fStack_1dc,fStack_1e0);
  do {
    uVar14 = (ulonglong)*(uint *)(&unknown_var_4400_ptr + lVar21);
    uVar29 = (ulonglong)*(uint *)(&unknown_var_4336_ptr + lVar21);
    uVar12 = (ulonglong)*(uint *)(&unknown_var_4368_ptr + lVar21);
    fVar32 = afStack_1b8[uVar14 * 4];
    fVar35 = afStack_1b8[uVar14 * 4 + 1];
    fVar34 = afStack_198[uVar29 * 4];
    fVar33 = afStack_198[uVar29 * 4 + 1];
    fVar1 = *(float *)(&uStack_138 + uVar12 * 2);
    fVar2 = *(float *)((longlong)&uStack_138 + uVar12 * 0x10 + 4);
    fVar31 = fStack_140 + afStack_1b8[uVar14 * 4 + 2] + afStack_198[uVar29 * 4 + 2] +
             *(float *)(&uStack_130 + uVar12 * 2);
    fVar30 = fStack_13c + afStack_1b8[uVar14 * 4 + 3] + afStack_198[uVar29 * 4 + 3] +
             *(float *)((longlong)&uStack_130 + uVar12 * 0x10 + 4);
    if ((!bVar7) || (fVar30 < fVar31)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    uVar14 = (ulonglong)*(uint *)(&unknown_var_4404_ptr + lVar21);
    uVar29 = (ulonglong)*(uint *)(&unknown_var_4340_ptr + lVar21);
    uVar12 = (ulonglong)*(uint *)(&unknown_var_4372_ptr + lVar21);
    pfVar19[-2] = 1.0;
    pfVar19[-5] = (fStack_148 + fVar32 + fVar34 + fVar1) / fVar30;
    pfVar19[-4] = (fStack_144 + fVar35 + fVar33 + fVar2) / fVar30;
    fVar32 = afStack_1b8[uVar14 * 4];
    fVar35 = afStack_1b8[uVar14 * 4 + 1];
    pfVar19[-3] = fVar31 / fVar30;
    fVar34 = afStack_198[uVar29 * 4];
    fVar33 = afStack_198[uVar29 * 4 + 1];
    fVar1 = *(float *)(&uStack_138 + uVar12 * 2);
    fVar2 = *(float *)((longlong)&uStack_138 + uVar12 * 0x10 + 4);
    fVar31 = fStack_140 + afStack_1b8[uVar14 * 4 + 2] + afStack_198[uVar29 * 4 + 2] +
             *(float *)(&uStack_130 + uVar12 * 2);
    fVar30 = fStack_13c + afStack_1b8[uVar14 * 4 + 3] + afStack_198[uVar29 * 4 + 3] +
             *(float *)((longlong)&uStack_130 + uVar12 * 0x10 + 4);
    if ((!bVar7) || (fVar30 < fVar31)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    uVar14 = (ulonglong)*(uint *)(&unknown_var_4408_ptr + lVar21);
    uVar29 = (ulonglong)*(uint *)(&unknown_var_4344_ptr + lVar21);
    uVar12 = (ulonglong)*(uint *)(&unknown_var_4376_ptr + lVar21);
    pfVar19[2] = 1.0;
    pfVar19[-1] = (fStack_148 + fVar32 + fVar34 + fVar1) / fVar30;
    *pfVar19 = (fStack_144 + fVar35 + fVar33 + fVar2) / fVar30;
    fVar32 = afStack_1b8[uVar14 * 4];
    fVar35 = afStack_1b8[uVar14 * 4 + 1];
    pfVar19[1] = fVar31 / fVar30;
    fVar34 = afStack_198[uVar29 * 4];
    fVar33 = afStack_198[uVar29 * 4 + 1];
    fVar1 = *(float *)(&uStack_138 + uVar12 * 2);
    fVar2 = *(float *)((longlong)&uStack_138 + uVar12 * 0x10 + 4);
    fVar31 = fStack_140 + afStack_1b8[uVar14 * 4 + 2] + afStack_198[uVar29 * 4 + 2] +
             *(float *)(&uStack_130 + uVar12 * 2);
    fVar30 = fStack_13c + afStack_1b8[uVar14 * 4 + 3] + afStack_198[uVar29 * 4 + 3] +
             *(float *)((longlong)&uStack_130 + uVar12 * 0x10 + 4);
    if ((!bVar7) || (fVar30 < fVar31)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    uVar14 = (ulonglong)*(uint *)(&unknown_var_4412_ptr + lVar21);
    uVar29 = (ulonglong)*(uint *)(&unknown_var_4348_ptr + lVar21);
    uVar12 = (ulonglong)*(uint *)(&unknown_var_4380_ptr + lVar21);
    pfVar19[6] = 1.0;
    pfVar19[3] = (fStack_148 + fVar32 + fVar34 + fVar1) / fVar30;
    pfVar19[4] = (fStack_144 + fVar35 + fVar33 + fVar2) / fVar30;
    fVar32 = afStack_1b8[uVar14 * 4];
    fVar35 = afStack_1b8[uVar14 * 4 + 1];
    pfVar19[5] = fVar31 / fVar30;
    fVar34 = afStack_198[uVar29 * 4];
    fVar33 = afStack_198[uVar29 * 4 + 1];
    fVar1 = *(float *)(&uStack_138 + uVar12 * 2);
    fVar2 = *(float *)((longlong)&uStack_138 + uVar12 * 0x10 + 4);
    fVar31 = fStack_140 + afStack_1b8[uVar14 * 4 + 2] + afStack_198[uVar29 * 4 + 2] +
             *(float *)(&uStack_130 + uVar12 * 2);
    fVar30 = fStack_13c + afStack_1b8[uVar14 * 4 + 3] + afStack_198[uVar29 * 4 + 3] +
             *(float *)((longlong)&uStack_130 + uVar12 * 0x10 + 4);
    if ((!bVar7) || (fVar30 < fVar31)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    pfVar19[10] = 1.0;
    lVar21 = lVar21 + 0x10;
    pfVar19[7] = (fStack_148 + fVar32 + fVar34 + fVar1) / fVar30;
    pfVar19[8] = (fStack_144 + fVar35 + fVar33 + fVar2) / fVar30;
    pfVar19[9] = fVar31 / fVar30;
    pfVar19 = pfVar19 + 0x10;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  uVar12 = uStack_130;
  if (bVar7) {
    uStack_1bc = 0;
    do {
      uVar10 = uStack_1bc * 3;
      uVar29 = auStack_f8[(ulonglong)*(uint *)(&system_handler3_ptr + (ulonglong)uVar10 * 4) * 2];
      uStack_138 = uVar29;
      uVar29 = uStack_138;
      uStack_130 = auStack_f8[(ulonglong)*(uint *)(&system_handler3_ptr + (ulonglong)uVar10 * 4) * 2 + 1];
      uVar12 = uStack_130;
      if (cVar15 == '\0') {
        uVar14 = auStack_f8[(ulonglong)*(uint *)(&system_handler3_ptr + (ulonglong)(uVar10 + 1) * 4) * 2];
        uStack_120 = auStack_f8
                     [(ulonglong)*(uint *)(&system_handler3_ptr + (ulonglong)(uVar10 + 1) * 4) * 2 + 1];
        uVar18 = *(uint *)(&system_handler3_ptr + (ulonglong)(uVar10 + 2) * 4);
      }
      else {
        uVar14 = auStack_f8[(ulonglong)*(uint *)(&system_handler3_ptr + (ulonglong)(uVar10 + 2) * 4) * 2];
        uStack_120 = auStack_f8
                     [(ulonglong)*(uint *)(&system_handler3_ptr + (ulonglong)(uVar10 + 2) * 4) * 2 + 1];
        uVar18 = *(uint *)(&system_handler3_ptr + (ulonglong)(uVar10 + 1) * 4);
      }
      uStack_138._4_4_ = (float)(uVar29 >> 0x20);
      uStack_130._0_4_ =
           (float)auStack_f8[(ulonglong)*(uint *)(&system_handler3_ptr + (ulonglong)uVar10 * 4) * 2 + 1];
      uStack_128 = uVar14;
      uVar14 = uStack_128;
      uVar8 = uStack_120;
      uVar6 = auStack_f8[(ulonglong)uVar18 * 2];
      uStack_118 = uVar6;
      uVar6 = uStack_118;
      uStack_110 = auStack_f8[(ulonglong)uVar18 * 2 + 1];
      uVar9 = uStack_110;
      uStack_138._0_4_ = (float)uVar29;
      uStack_110._0_4_ = (float)auStack_f8[(ulonglong)uVar18 * 2 + 1];
      uVar18 = (uint)(uStack_138._4_4_ + 0.5);
      uStack_128._4_4_ = (float)(uVar14 >> 0x20);
      uVar20 = (uint)((float)uStack_138 + 0.5);
      uStack_128._0_4_ = (float)uVar14;
      uVar28 = (uint)(uStack_128._4_4_ + 0.5);
      uStack_118._4_4_ = (float)(uVar6 >> 0x20);
      uVar22 = (uint)((float)uStack_128 + 0.5);
      iVar16 = uVar18 - uVar28;
      uStack_118._0_4_ = (float)uVar6;
      iStack_1c4 = uVar22 - uVar20;
      uVar26 = (uint)(uStack_118._4_4_ + 0.5);
      uVar25 = (uint)((float)uStack_118 + 0.5);
      iVar17 = uVar28 - uVar26;
      iVar23 = uVar26 - uVar18;
      iStack_1cc = uVar25 - uVar22;
      iStack_1c8 = uVar20 - uVar25;
      iVar13 = iVar23 * iStack_1c4 - iStack_1c8 * iVar16;
      uVar10 = uVar22;
      if ((int)uVar20 < (int)uVar22) {
        uVar10 = uVar20;
      }
      uVar11 = uVar25;
      if ((int)uVar10 < (int)uVar25) {
        uVar11 = uVar10;
      }
      uVar10 = 0;
      if (0 < (int)uVar11) {
        uVar10 = uVar11;
      }
      uVar10 = uVar10 & 0xfffffffe;
      fVar32 = 1.0 / (float)iVar13;
      uVar11 = uVar22;
      if ((int)uVar22 < (int)uVar20) {
        uVar11 = uVar20;
      }
      uVar3 = uVar25;
      if ((int)uVar25 < (int)uVar11) {
        uVar3 = uVar11;
      }
      uStack_1d4 = 0x27f;
      if ((int)uVar3 < 0x27f) {
        uStack_1d4 = uVar3;
      }
      uVar11 = uVar28;
      if ((int)uVar18 < (int)uVar28) {
        uVar11 = uVar18;
      }
      uVar3 = uVar26;
      if ((int)uVar11 < (int)uVar26) {
        uVar3 = uVar11;
      }
      fVar35 = ((float)uStack_120 - (float)uStack_130) * fVar32;
      fVar32 = ((float)uStack_110 - (float)uStack_130) * fVar32;
      uStack_1d8 = 0;
      if (0 < (int)uVar3) {
        uStack_1d8 = uVar3;
      }
      uStack_1d8 = uStack_1d8 & 0xfffffffe;
      uVar11 = uVar28;
      if ((int)uVar28 < (int)uVar18) {
        uVar11 = uVar18;
      }
      uVar3 = uVar26;
      if ((int)uVar26 < (int)uVar11) {
        uVar3 = uVar11;
      }
      uStack_1c0 = 0x167;
      if ((int)uVar3 < 0x167) {
        uStack_1c0 = uVar3;
      }
      uStack_1f0 = uVar10;
      uStack_138 = uVar29;
      uStack_128 = uVar14;
      uStack_120 = uVar8;
      uStack_118 = uVar6;
      uStack_110 = uVar9;
      if (0 < iVar13) {
        fVar34 = (float)iVar16 * fVar32 + (float)iVar23 * fVar35;
        uStack_1f8 = (uVar22 * uVar26 - uVar25 * uVar28) + uStack_1d8 * iStack_1cc + uVar10 * iVar17
        ;
        uStack_1d0 = uStack_1d8 * iStack_1c8;
        uVar25 = (uStack_1d0 - uVar20 * uVar26) + uVar18 * uVar25 + uVar10 * iVar23;
        uStack_1f0 = uVar20 * uVar28 + (uStack_1d8 * iStack_1c4 - uVar18 * uVar22) + uVar10 * iVar16
        ;
        if ((int)uStack_1d8 < (int)uStack_1c0) {
          uStack_1e8 = (longlong)(int)(uStack_1d8 * 0x280 + uVar10);
          do {
            bVar7 = false;
            fVar33 = (float)(int)uVar25 * fVar35 + (float)uStack_130 +
                     (float)(int)uStack_1f0 * fVar32;
            uStack_1d0 = uVar10;
            if ((int)uVar10 < (int)uStack_1d4) {
              lVar21 = uStack_1e8;
              uVar22 = uStack_1f8;
              uVar18 = uVar25;
              uVar20 = uStack_1f0;
              if (3 < (int)(uStack_1d4 - uVar10)) {
                uVar26 = ((uStack_1d4 - uVar10) - 4 >> 2) + 1;
                uVar29 = (ulonglong)uVar26;
                uStack_1d0 = uVar10 + uVar26 * 4;
                do {
                  if ((bVar7) ||
                     ((0 < (int)(uVar20 | uVar18 | uVar22) &&
                      (*(float *)(*(longlong *)(param_1 + 0x348 + lVar27 * 8) + lVar21 * 4) <=
                       fVar33)))) {
                    bVar7 = true;
                  }
                  else {
                    bVar7 = false;
                  }
                  if ((bVar7) ||
                     ((0 < (int)(uVar20 + iVar16 | uVar18 + iVar23 | uVar22 + iVar17) &&
                      (*(float *)(*(longlong *)(param_1 + 0x348 + lVar27 * 8) + 4 + lVar21 * 4) <=
                       fVar33 + fVar34)))) {
                    bVar7 = true;
                  }
                  else {
                    bVar7 = false;
                  }
                  uVar22 = uVar22 + iVar17 + iVar17;
                  fVar33 = fVar33 + fVar34 + fVar34;
                  uVar18 = uVar18 + iVar23 + iVar23;
                  uVar20 = uVar20 + iVar16 + iVar16;
                  if ((bVar7) ||
                     ((0 < (int)(uVar20 | uVar18 | uVar22) &&
                      (*(float *)(*(longlong *)(param_1 + 0x348 + lVar27 * 8) + 8 + lVar21 * 4) <=
                       fVar33)))) {
                    bVar7 = true;
                  }
                  else {
                    bVar7 = false;
                  }
                  uVar22 = uVar22 + iVar17;
                  fVar33 = fVar33 + fVar34;
                  uVar18 = uVar18 + iVar23;
                  uVar20 = uVar20 + iVar16;
                  if ((bVar7) ||
                     ((0 < (int)(uVar20 | uVar18 | uVar22) &&
                      (*(float *)(*(longlong *)(param_1 + 0x348 + lVar27 * 8) + 0xc + lVar21 * 4) <=
                       fVar33)))) {
                    bVar7 = true;
                  }
                  else {
                    bVar7 = false;
                  }
                  uVar22 = uVar22 + iVar17;
                  fVar33 = fVar33 + fVar34;
                  uVar18 = uVar18 + iVar23;
                  uVar20 = uVar20 + iVar16;
                  lVar21 = lVar21 + 4;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
              if ((int)uStack_1d0 < (int)uStack_1d4) {
                lVar21 = lVar21 * 4;
                lVar24 = (longlong)(int)(uStack_1d4 - uStack_1d0);
                do {
                  if ((bVar7) ||
                     ((0 < (int)(uVar20 | uVar18 | uVar22) &&
                      (*(float *)(lVar21 + *(longlong *)(param_1 + 0x348 + lVar27 * 8)) <= fVar33)))
                     ) {
                    bVar7 = true;
                  }
                  else {
                    bVar7 = false;
                  }
                  uVar22 = uVar22 + iVar17;
                  fVar33 = fVar33 + fVar34;
                  uVar18 = uVar18 + iVar23;
                  uVar20 = uVar20 + iVar16;
                  lVar21 = lVar21 + 4;
                  lVar24 = lVar24 + -1;
                } while (lVar24 != 0);
              }
              if (bVar7) goto LAB_180494a88;
            }
            uStack_1d8 = uStack_1d8 + 1;
            uStack_1e8 = uStack_1e8 + 0x280;
            uStack_1f8 = uStack_1f8 + iStack_1cc;
            uStack_1f0 = uStack_1f0 + iStack_1c4;
            uVar25 = uVar25 + iStack_1c8;
          } while ((int)uStack_1d8 < (int)uStack_1c0);
        }
      }
      uStack_1bc = uStack_1bc + 1;
      cVar15 = cStack_1f4;
    } while (uStack_1bc < 0xc);
  }
LAB_180494a88:
  uStack_130 = uVar12;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_218);
}





