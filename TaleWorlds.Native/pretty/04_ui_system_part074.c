#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part074.c - 10 个函数

// 函数: void FUN_18070ce70(int64_t *param_1,int64_t param_2,uint param_3,int64_t param_4,int param_5,
void FUN_18070ce70(int64_t *param_1,int64_t param_2,uint param_3,int64_t param_4,int param_5,
                  int8_t *param_6,int32_t param_7)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  float *pfVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  uint64_t in_stack_fffffffffffffdb8;
  int32_t uVar13;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int64_t lStack_188;
  int32_t uStack_180;
  uint uStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int32_t uStack_16c;
  int32_t uStack_168;
  int32_t uStack_164;
  int iStack_160;
  int iStack_15c;
  int64_t lStack_158;
  int64_t lStack_148;
  int32_t uStack_140;
  int64_t *plStack_138;
  int iStack_12c;
  int iStack_128;
  int64_t lStack_118;
  int64_t lStack_110;
  int64_t lStack_108;
  int64_t lStack_d8;
  int64_t lStack_d0;
  int64_t lStack_c8;
  int64_t lStack_c0;
  uint64_t uStack_b8;
  int64_t lStack_b0;
  int64_t alStack_a8 [4];
  int64_t alStack_88 [2];
  int8_t auStack_78 [56];
  uint64_t uStack_40;
  
  uVar13 = (int32_t)((uint64_t)in_stack_fffffffffffffdb8 >> 0x20);
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)&iStack_1b8;
  lVar8 = *param_1;
  iStack_190 = *(int *)((int64_t)param_1 + 0xc);
  iVar11 = 0;
  iStack_1b8 = (int)param_1[2];
  iStack_1a8 = *(int *)((int64_t)param_1 + 0x1c);
  uStack_168 = 0;
  uStack_164 = 0;
  iStack_174 = *(int *)(lVar8 + 4);
  alStack_a8[2] = *(uint64_t *)(lVar8 + 0x20);
  iStack_198 = *(int *)(lVar8 + 8);
  iStack_1b4 = (int)param_1[3];
  param_5 = param_5 * *(int *)((int64_t)param_1 + 0x14);
  uStack_140 = 0;
  iStack_19c = 0;
  iStack_15c = iStack_198 * 2;
  uVar5 = *(uint *)(lVar8 + 0x28);
  uVar6 = (uint64_t)uVar5;
  lStack_c0 = (int64_t)iStack_15c;
  lVar1 = (int64_t)param_1 +
          ((int64_t)((iStack_174 + 0x800) * iStack_190) + (int64_t)(iStack_190 * 0x18) + 0x18) * 4
  ;
  alStack_a8[3] = lStack_c0 * 4;
  lStack_158 = alStack_a8[3] + lVar1;
  lStack_108 = lStack_158 + alStack_a8[3];
  lStack_110 = alStack_a8[3] + lStack_108;
  if (-1 < (int)uVar5) {
    do {
      iStack_19c = iVar11;
      if (*(int *)(lVar8 + 0x30) << ((byte)iVar11 & 0x1f) == param_5) break;
      iVar11 = iVar11 + 1;
      iStack_19c = iVar11;
    } while (iVar11 <= (int)uVar5);
  }
  iVar11 = iStack_19c;
  lStack_188 = lVar8;
  uStack_17c = param_3;
  plStack_138 = param_1;
  lStack_118 = lVar1;
  lStack_b0 = param_4;
  if ((((int)uVar5 < iStack_19c) || (iStack_160 = 1 << ((byte)iStack_19c & 0x1f), 0x4fb < param_3))
     || (param_4 == 0)) {
LAB_18070e0f9:
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_40 ^ (uint64_t)&iStack_1b8,uVar6);
  }
  iStack_1a4 = *(int *)(lVar8 + 0x30) * iStack_160;
  lStack_d0 = (int64_t)iStack_190;
  iVar9 = 0;
  lVar7 = 0;
  lStack_d8 = (int64_t)iStack_1a4 * 4;
  do {
    lVar3 = (int64_t)iVar9;
    iVar9 = iVar9 + iStack_174 + 0x800;
    lVar3 = (int64_t)param_1 + (lVar3 + 0x18) * 4;
    alStack_88[lVar7] = lVar3;
    alStack_a8[lVar7] = lVar3 + (int64_t)iStack_1a4 * -4 + 0x2000;
    lVar7 = lVar7 + 1;
  } while (lVar7 < lStack_d0);
  iStack_128 = *(int *)(lVar8 + 0xc);
  if (iStack_1a8 <= *(int *)(lVar8 + 0xc)) {
    iStack_128 = iStack_1a8;
  }
  if ((param_2 == 0) || ((int)param_3 < 2)) {
    FUN_18070ba50(param_1,iStack_1a4,iStack_19c);
    FUN_18070e950(alStack_a8,lStack_b0,iStack_1a4,iStack_190,
                  *(int32_t *)((int64_t)param_1 + 0x14),lVar8 + 0x10,param_1 + 0xb,param_7);
    uVar6 = (int64_t)param_5 % (int64_t)*(int *)((int64_t)param_1 + 0x14) & 0xffffffff;
    goto LAB_18070e0f9;
  }
  *(uint *)((int64_t)param_1 + 0x3c) = (uint)((int)param_1[7] != 0);
  if (param_6 == (int8_t *)0x0) {
    func_0x00018070f440(auStack_78,param_2);
    param_6 = auStack_78;
  }
  lVar8 = 0;
  lVar7 = (int64_t)iStack_198;
  if (iStack_1b8 == 1) {
    if (3 < lVar7) {
      lVar3 = (lVar7 - 4U >> 2) + 1;
      lVar8 = lVar3 * 4;
      pfVar4 = (float *)(lVar1 + 4);
      do {
        fVar12 = pfVar4[lVar7 + -1];
        if (pfVar4[lVar7 + -1] <= pfVar4[-1]) {
          fVar12 = pfVar4[-1];
        }
        pfVar4[-1] = fVar12;
        fVar12 = pfVar4[lVar7];
        if (pfVar4[lVar7] <= *pfVar4) {
          fVar12 = *pfVar4;
        }
        *pfVar4 = fVar12;
        fVar12 = pfVar4[lVar7 + 1];
        if (pfVar4[lVar7 + 1] <= pfVar4[1]) {
          fVar12 = pfVar4[1];
        }
        pfVar4[1] = fVar12;
        fVar12 = pfVar4[lVar7 + 2];
        if (pfVar4[lVar7 + 2] <= pfVar4[2]) {
          fVar12 = pfVar4[2];
        }
        pfVar4[2] = fVar12;
        lVar3 = lVar3 + -1;
        pfVar4 = pfVar4 + 4;
      } while (lVar3 != 0);
    }
    if (lVar8 < lVar7) {
      lVar3 = lVar7 - lVar8;
      pfVar4 = (float *)(lVar1 + lVar8 * 4);
      do {
        fVar12 = pfVar4[lVar7];
        if (pfVar4[lVar7] <= *pfVar4) {
          fVar12 = *pfVar4;
        }
        *pfVar4 = fVar12;
        lVar3 = lVar3 + -1;
        pfVar4 = pfVar4 + 1;
      } while (lVar3 != 0);
    }
  }
  uVar5 = *(uint *)(param_6 + 0x20);
  iVar2 = param_3 * 8;
  iVar9 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  iVar10 = (*(int *)(param_6 + 0x18) - iVar9) + -1;
  iStack_194 = iVar2;
  lStack_c8 = lVar7;
  if (iVar10 < iVar2) {
    if (iVar10 != 1) {
      iStack_178 = 0;
      goto LAB_18070d1ad;
    }
    iStack_178 = FUN_18070f310(param_6,(*(int *)(param_6 + 0x18) - iVar9) + 0xd);
    uVar5 = *(uint *)(param_6 + 0x20);
    if (iStack_178 == 0) goto LAB_18070d1ad;
  }
  else {
    iStack_178 = 1;
  }
  iVar9 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  *(int *)(param_6 + 0x18) = iVar9 + 1 + iVar2;
  iVar10 = iVar2;
LAB_18070d1ad:
  iStack_170 = 0;
  uStack_16c = 0;
  uStack_180 = 6;
  uStack_b8 = 2;
  if ((iStack_1b4 == 0) && (iVar10 + 0x10 <= iVar2)) {
    iVar9 = FUN_18070f310(param_6,1);
    if (iVar9 != 0) {
      iVar9 = FUN_18070f540(param_6,6);
      iVar10 = FUN_18070f360(param_6,iVar9 + 4);
      iStack_170 = (0x10 << ((byte)iVar9 & 0x1f)) + iVar10 + -1;
      FUN_18070f360(param_6,3);
      iVar9 = 0x1f;
      if (*(uint *)(param_6 + 0x20) != 0) {
        for (; *(uint *)(param_6 + 0x20) >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (*(int *)(param_6 + 0x18) - iVar9 < iVar2) {
        uStack_16c = FUN_18070f3e0(param_6,&unknown_var_3328_ptr);
      }
    }
    iVar9 = 0x1f;
    if (*(uint *)(param_6 + 0x20) != 0) {
      for (; *(uint *)(param_6 + 0x20) >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar10 = (*(int *)(param_6 + 0x18) - iVar9) + -1;
  }
  if ((iVar11 < 1) || (iVar2 < iVar10 + 3)) {
    iStack_1b0 = 0;
  }
  else {
    iStack_1b0 = FUN_18070f310(param_6,3);
    iVar9 = 0x1f;
    if (*(uint *)(param_6 + 0x20) != 0) {
      for (; *(uint *)(param_6 + 0x20) >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar10 = (*(int *)(param_6 + 0x18) - iVar9) + -1;
  }
  iVar9 = 0;
  iStack_12c = iStack_160;
  if (iStack_1b0 == 0) {
    iStack_12c = iVar9;
  }
  if (iVar10 + 3 <= iVar2) {
    iVar9 = FUN_18070f310(param_6,3);
  }
  FUN_18071ad00(lStack_188,iStack_1b4,iStack_1a8,lVar1,iVar9,param_6,CONCAT44(uVar13,iStack_1b8),
                iVar11);
  lStack_148 = lVar7 * 4;
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0(0xffffffffffffff0);
}



int FUN_18070e140(int param_1)

{
  int64_t lVar1;
  
  lVar1 = FUN_180712260(48000,0x3c0,0);
  return ((*(int *)(lVar1 + 4) + 0x818) * param_1 + *(int *)(lVar1 + 8) * 8) * 4 + 100;
}



int32_t FUN_18070e180(int64_t param_1,uint64_t param_2,uint param_3)

{
  int32_t uVar1;
  int64_t lVar2;
  
  lVar2 = FUN_180712260(48000,0x3c0,0);
  if (param_3 < 3) {
    if (param_1 != 0) {
                    // WARNING: Subroutine does not return
      memset(param_1,0,
             (int64_t)
             (int)(((*(int *)(lVar2 + 4) + 0x818) * param_3 + *(int *)(lVar2 + 8) * 8) * 4 + 100));
    }
    uVar1 = 0xfffffff9;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18070e250(void)
void FUN_18070e250(void)

{
  int8_t auStack_18 [8];
  uint64_t uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_18;
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18070e2f0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18070e2f0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  byte in_stack_00000050;
  int8_t auStack_88 [8];
  uint64_t uStack_80;
  int64_t lStack_78;
  int32_t uStack_68;
  int32_t uStack_60;
  int iStack_5c;
  int64_t lStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_88;
  uStack_60 = *(int32_t *)(param_1 + 8);
  uStack_68 = *(int32_t *)(param_1 + 4);
  iStack_5c = *(int *)(param_1 + 0x30) << (in_stack_00000050 & 0x1f);
  lStack_78 = (int64_t)iStack_5c;
  lStack_50 = lStack_78 * 4;
  uStack_80 = param_2;
  uStack_48 = param_4;
  uStack_40 = param_3;
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18070e950(uint64_t param_1,uint64_t param_2,int param_3,int param_4,int param_5,
void FUN_18070e950(uint64_t param_1,uint64_t param_2,int param_3,int param_4,int param_5,
                  int32_t *param_6,uint64_t param_7,int param_8)

{
  uint64_t uVar1;
  int32_t auStack_68 [2];
  int iStack_60;
  int iStack_5c;
  uint64_t uStack_48;
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_68;
  auStack_68[0] = 0;
  iStack_60 = param_4;
  iStack_5c = param_3;
  uStack_48 = param_1;
  if (((param_5 == 1) && (param_4 == 2)) && (param_8 == 0)) {
    FUN_18070ee30(param_1,param_2,param_3,*param_6,param_7);
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_68);
  }
  uVar1 = (int64_t)param_3 * 4 + 0xf;
  if (uVar1 <= (uint64_t)((int64_t)param_3 * 4)) {
    uVar1 = 0xffffffffffffff0;
  }
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0(uVar1 & 0xfffffffffffffff0,param_2,param_1);
}





// 函数: void FUN_18070ee30(int64_t *param_1,int64_t param_2,int param_3,float param_4,float *param_5)
void FUN_18070ee30(int64_t *param_1,int64_t param_2,int param_3,float param_4,float *param_5)

{
  float *pfVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  float *pfVar6;
  float *pfVar7;
  int64_t lVar8;
  int64_t lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar4 = 0;
  lVar2 = *param_1;
  lVar3 = param_1[1];
  fVar10 = *param_5;
  fVar13 = param_5[1];
  lVar9 = (int64_t)param_3;
  if (3 < lVar9) {
    pfVar6 = (float *)(param_2 + 8);
    lVar8 = lVar2 - lVar3;
    pfVar7 = (float *)(lVar3 + 4);
    lVar5 = (lVar9 - 4U >> 2) + 1;
    lVar4 = lVar5 * 4;
    do {
      fVar11 = *(float *)(lVar8 + (int64_t)pfVar7);
      fVar13 = pfVar7[-1] + 1e-30 + fVar13;
      fVar10 = *(float *)(lVar8 + -4 + (int64_t)pfVar7) + 1e-30 + fVar10;
      fVar12 = *(float *)(lVar8 + 4 + (int64_t)pfVar7);
      pfVar6[-2] = fVar10 * 3.0517578e-05;
      fVar14 = *pfVar7;
      pfVar6[-1] = fVar13 * 3.0517578e-05;
      fVar11 = fVar11 + 1e-30 + fVar10 * param_4;
      fVar10 = *(float *)(lVar8 + 8 + (int64_t)pfVar7);
      fVar14 = fVar13 * param_4 + fVar14 + 1e-30;
      fVar12 = fVar12 + 1e-30 + fVar11 * param_4;
      *pfVar6 = fVar11 * 3.0517578e-05;
      fVar13 = pfVar7[1];
      pfVar6[1] = fVar14 * 3.0517578e-05;
      fVar11 = fVar14 * param_4 + fVar13 + 1e-30;
      pfVar6[2] = fVar12 * 3.0517578e-05;
      pfVar1 = pfVar7 + 2;
      pfVar7 = pfVar7 + 4;
      fVar13 = fVar10 + 1e-30 + fVar12 * param_4;
      fVar12 = fVar11 * param_4 + *pfVar1 + 1e-30;
      pfVar6[3] = fVar11 * 3.0517578e-05;
      fVar10 = fVar13 * param_4;
      pfVar6[4] = fVar13 * 3.0517578e-05;
      fVar13 = fVar12 * param_4;
      pfVar6[5] = fVar12 * 3.0517578e-05;
      pfVar6 = pfVar6 + 8;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (lVar4 < lVar9) {
    pfVar6 = (float *)(lVar3 + lVar4 * 4);
    do {
      pfVar7 = (float *)((lVar2 - lVar3) + (int64_t)pfVar6);
      fVar11 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      fVar12 = *pfVar7 + 1e-30 + fVar10;
      fVar11 = fVar11 + 1e-30 + fVar13;
      fVar10 = fVar12 * param_4;
      *(float *)(param_2 + lVar4 * 8) = fVar12 * 3.0517578e-05;
      fVar13 = fVar11 * param_4;
      *(float *)(param_2 + 4 + lVar4 * 8) = fVar11 * 3.0517578e-05;
      lVar4 = lVar4 + 1;
    } while (lVar4 < lVar9);
  }
  param_5[1] = fVar13;
  *param_5 = fVar10;
  return;
}





// 函数: void FUN_18070ee86(uint64_t param_1,int64_t param_2,uint64_t param_3,float *param_4)
void FUN_18070ee86(uint64_t param_1,int64_t param_2,uint64_t param_3,float *param_4)

{
  float *pfVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  float *pfVar5;
  float *pfVar6;
  int64_t lVar7;
  int64_t unaff_RDI;
  int64_t in_R10;
  int64_t in_R11;
  float fVar8;
  float fVar9;
  float in_XMM4_Da;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  
  pfVar5 = (float *)(param_2 + 8);
  lVar7 = in_R10 - unaff_RDI;
  pfVar6 = (float *)(unaff_RDI + 4);
  lVar3 = (in_R11 - 4U >> 2) + 1;
  lVar2 = lVar3 * 4;
  lVar4 = lVar3;
  do {
    fVar9 = *(float *)(lVar7 + (int64_t)pfVar6);
    fVar11 = pfVar6[-1] + unaff_XMM8_Da + unaff_XMM6_Da;
    fVar8 = *(float *)(lVar7 + -4 + (int64_t)pfVar6) + unaff_XMM8_Da + in_XMM4_Da;
    fVar12 = *(float *)(lVar7 + 4 + (int64_t)pfVar6);
    pfVar5[-2] = fVar8 * unaff_XMM9_Da;
    fVar10 = *pfVar6;
    pfVar5[-1] = fVar11 * unaff_XMM9_Da;
    fVar8 = fVar9 + unaff_XMM8_Da + fVar8 * unaff_XMM7_Da;
    fVar9 = *(float *)(lVar7 + 8 + (int64_t)pfVar6);
    fVar11 = fVar11 * unaff_XMM7_Da + fVar10 + unaff_XMM8_Da;
    fVar10 = fVar12 + unaff_XMM8_Da + fVar8 * unaff_XMM7_Da;
    *pfVar5 = fVar8 * unaff_XMM9_Da;
    fVar12 = pfVar6[1];
    pfVar5[1] = fVar11 * unaff_XMM9_Da;
    fVar12 = fVar11 * unaff_XMM7_Da + fVar12 + unaff_XMM8_Da;
    pfVar5[2] = fVar10 * unaff_XMM9_Da;
    pfVar1 = pfVar6 + 2;
    pfVar6 = pfVar6 + 4;
    fVar9 = fVar9 + unaff_XMM8_Da + fVar10 * unaff_XMM7_Da;
    fVar10 = fVar12 * unaff_XMM7_Da + *pfVar1 + unaff_XMM8_Da;
    pfVar5[3] = fVar12 * unaff_XMM9_Da;
    in_XMM4_Da = fVar9 * unaff_XMM7_Da;
    pfVar5[4] = fVar9 * unaff_XMM9_Da;
    unaff_XMM6_Da = fVar10 * unaff_XMM7_Da;
    pfVar5[5] = fVar10 * unaff_XMM9_Da;
    pfVar5 = pfVar5 + 8;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if (lVar2 < in_R11) {
    pfVar5 = (float *)(unaff_RDI + lVar3 * 0x10);
    do {
      pfVar6 = (float *)((in_R10 - unaff_RDI) + (int64_t)pfVar5);
      fVar9 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      fVar12 = *pfVar6 + unaff_XMM8_Da + in_XMM4_Da;
      fVar9 = fVar9 + unaff_XMM8_Da + unaff_XMM6_Da;
      in_XMM4_Da = fVar12 * unaff_XMM7_Da;
      *(float *)(param_2 + lVar2 * 8) = fVar12 * unaff_XMM9_Da;
      unaff_XMM6_Da = fVar9 * unaff_XMM7_Da;
      *(float *)(param_2 + 4 + lVar2 * 8) = fVar9 * unaff_XMM9_Da;
      lVar2 = lVar2 + 1;
    } while (lVar2 < in_R11);
  }
  param_4[1] = unaff_XMM6_Da;
  *param_4 = in_XMM4_Da;
  return;
}





// 函数: void FUN_18070efdd(uint64_t param_1,int64_t param_2,uint64_t param_3,float *param_4)
void FUN_18070efdd(uint64_t param_1,int64_t param_2,uint64_t param_3,float *param_4)

{
  float *pfVar1;
  int64_t in_RAX;
  float *pfVar2;
  int64_t unaff_RDI;
  int64_t in_R10;
  int64_t in_R11;
  float fVar3;
  float fVar4;
  float in_XMM4_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  
  if (in_RAX < in_R11) {
    pfVar2 = (float *)(unaff_RDI + in_RAX * 4);
    do {
      pfVar1 = (float *)((in_R10 - unaff_RDI) + (int64_t)pfVar2);
      fVar3 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      fVar4 = *pfVar1 + unaff_XMM8_Da + in_XMM4_Da;
      fVar3 = fVar3 + unaff_XMM8_Da + unaff_XMM6_Da;
      in_XMM4_Da = fVar4 * unaff_XMM7_Da;
      *(float *)(param_2 + in_RAX * 8) = fVar4 * unaff_XMM9_Da;
      unaff_XMM6_Da = fVar3 * unaff_XMM7_Da;
      *(float *)(param_2 + 4 + in_RAX * 8) = fVar3 * unaff_XMM9_Da;
      in_RAX = in_RAX + 1;
    } while (in_RAX < in_R11);
  }
  param_4[1] = unaff_XMM6_Da;
  *param_4 = in_XMM4_Da;
  return;
}



uint64_t FUN_18070f060(int64_t *param_1,int param_2,int64_t *param_3)

{
  uint uStackX_18;
  
  uStackX_18 = (uint)param_3;
  if (param_2 < 0x2718) {
    if (param_2 == 0x2717) {
      if (param_3 != (int64_t *)0x0) {
        *(int *)param_3 = (int)param_1[6];
        *(int32_t *)(param_1 + 6) = 0;
        return 0;
      }
    }
    else {
      switch(param_2) {
      case 0xfbb:
        if (param_3 != (int64_t *)0x0) {
          *(int *)param_3 = (int)param_1[1] / *(int *)((int64_t)param_1 + 0x14);
          return 0;
        }
        break;
      case 0xfbc:
                    // WARNING: Subroutine does not return
        memset((int64_t)param_1 + 0x2c,0,
               (int64_t)
               (((*(int *)(*param_1 + 4) + 0x818) * *(int *)((int64_t)param_1 + 0xc) +
                *(int *)(*param_1 + 8) * 8) * 4 + 100) + -0x2c);
      default:
        return 0xfffffffb;
      case 0xfbf:
        if (param_3 != (int64_t *)0x0) {
          *(int32_t *)param_3 = *(int32_t *)((int64_t)param_1 + 0x2c);
          return 0;
        }
        break;
      case 0xfc1:
        if (param_3 != (int64_t *)0x0) {
          *(int *)param_3 = (int)param_1[8];
          return 0;
        }
        break;
      case 0xfce:
        if (uStackX_18 < 2) {
          *(uint *)((int64_t)param_1 + 0x24) = uStackX_18;
          return 0;
        }
        break;
      case 0xfcf:
        if (param_3 != (int64_t *)0x0) {
          *(int32_t *)param_3 = *(int32_t *)((int64_t)param_1 + 0x24);
          return 0;
        }
      }
    }
  }
  else if (param_2 == 0x2718) {
    if (uStackX_18 - 1 < 2) {
      *(uint *)(param_1 + 2) = uStackX_18;
      return 0;
    }
  }
  else if (param_2 == 0x271a) {
    if ((-1 < (int)uStackX_18) && ((int)uStackX_18 < *(int *)(*param_1 + 8))) {
      *(uint *)(param_1 + 3) = uStackX_18;
      return 0;
    }
  }
  else if (param_2 == 0x271c) {
    if ((0 < (int)uStackX_18) && ((int)uStackX_18 <= *(int *)(*param_1 + 8))) {
      *(uint *)((int64_t)param_1 + 0x1c) = uStackX_18;
      return 0;
    }
  }
  else {
    if (param_2 != 0x271f) {
      if (param_2 != 0x2720) {
        return 0xfffffffb;
      }
      *(uint *)(param_1 + 4) = uStackX_18;
      return 0;
    }
    if (param_3 != (int64_t *)0x0) {
      *param_3 = *param_1;
      return 0;
    }
  }
  return 0xffffffff;
}





// 函数: void FUN_18070f0d6(void)
void FUN_18070f0d6(void)

{
  int64_t unaff_RBX;
  int64_t in_R9;
  int in_R11D;
  
                    // WARNING: Subroutine does not return
  memset(unaff_RBX + 0x2c,0,
         (int64_t)(((*(int *)(in_R9 + 4) + 0x818) * in_R11D + *(int *)(in_R9 + 8) * 8) * 4 + 100) +
         -0x2c);
}



uint64_t FUN_18070f198(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  int64_t unaff_RBX;
  
  if ((int32_t *)*param_3 != (int32_t *)0x0) {
    *(int32_t *)*param_3 = *(int32_t *)(unaff_RBX + 0x40);
    return 0;
  }
  return 0xffffffff;
}



bool FUN_18070f310(int64_t param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar2 = *(uint *)(param_1 + 0x20) >> (param_2 & 0x1f);
  if (uVar1 >= uVar2) {
    *(uint *)(param_1 + 0x24) = uVar1 - uVar2;
  }
  uVar3 = uVar2;
  if (uVar2 <= uVar1) {
    uVar3 = *(uint *)(param_1 + 0x20) - uVar2;
  }
  *(uint *)(param_1 + 0x20) = uVar3;
  FUN_18070f490(param_1);
  return uVar1 < uVar2;
}



uint FUN_18070f360(int64_t *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *(uint *)((int64_t)param_1 + 0x14);
  uVar5 = *(uint *)(param_1 + 2);
  if (uVar3 < param_2) {
    uVar4 = *(uint *)((int64_t)param_1 + 0xc);
    uVar2 = uVar3;
    do {
      if (uVar4 < *(uint *)(param_1 + 1)) {
        uVar4 = uVar4 + 1;
        *(uint *)((int64_t)param_1 + 0xc) = uVar4;
        uVar1 = (uint)*(byte *)((uint64_t)(*(uint *)(param_1 + 1) - uVar4) + *param_1);
      }
      else {
        uVar1 = 0;
      }
      uVar3 = uVar2 + 8;
      uVar5 = uVar5 | uVar1 << ((byte)uVar2 & 0x1f);
      uVar2 = uVar3;
    } while ((int)uVar3 < 0x19);
  }
  *(uint *)(param_1 + 3) = (int)param_1[3] + param_2;
  *(uint *)(param_1 + 2) = uVar5 >> ((byte)param_2 & 0x1f);
  *(uint *)((int64_t)param_1 + 0x14) = uVar3 - param_2;
  return (1 << ((byte)param_2 & 0x1f)) - 1U & uVar5;
}



uint FUN_18070f378(int64_t param_1,uint64_t param_2,int param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_EDI;
  int64_t *in_R10;
  uint in_R11D;
  
  uVar1 = *(uint *)(param_1 + 8);
  do {
    if (param_4 < uVar1) {
      param_4 = param_4 + 1;
      *(uint *)((int64_t)in_R10 + 0xc) = param_4;
      uVar3 = (uint)*(byte *)((uint64_t)(uVar1 - param_4) + *in_R10);
    }
    else {
      uVar3 = 0;
    }
    bVar2 = (byte)param_3;
    param_3 = param_3 + 8;
    in_R11D = in_R11D | uVar3 << (bVar2 & 0x1f);
  } while (param_3 < 0x19);
  *(int *)(in_R10 + 3) = (int)in_R10[3] + unaff_EDI;
  *(uint *)(in_R10 + 2) = in_R11D >> ((byte)unaff_EDI & 0x1f);
  *(int *)((int64_t)in_R10 + 0x14) = param_3 - unaff_EDI;
  return (1 << ((byte)unaff_EDI & 0x1f)) - 1U & in_R11D;
}



uint FUN_18070f3b3(uint64_t param_1,uint64_t param_2,int param_3)

{
  int unaff_EDI;
  int64_t in_R10;
  uint in_R11D;
  
  *(int *)(in_R10 + 0x18) = *(int *)(in_R10 + 0x18) + unaff_EDI;
  *(uint *)(in_R10 + 0x10) = in_R11D >> ((byte)unaff_EDI & 0x1f);
  *(int *)(in_R10 + 0x14) = param_3 - unaff_EDI;
  return (1 << ((byte)unaff_EDI & 0x1f)) - 1U & in_R11D;
}



int FUN_18070f3e0(int64_t param_1,int64_t param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  
  iVar4 = -1;
  pbVar3 = (byte *)(param_2 + -1);
  uVar2 = *(uint *)(param_1 + 0x20);
  do {
    uVar1 = uVar2;
    pbVar3 = pbVar3 + 1;
    iVar4 = iVar4 + 1;
    uVar2 = (uint)*pbVar3 * (*(uint *)(param_1 + 0x20) >> (param_3 & 0x1f));
  } while (*(uint *)(param_1 + 0x24) < uVar2);
  *(uint *)(param_1 + 0x20) = uVar1 - uVar2;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) - uVar2;
  FUN_18070f490(param_1);
  return iVar4;
}





// 函数: void FUN_18070f490(int64_t *param_1)
void FUN_18070f490(int64_t *param_1)

{
  uint64_t uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = *(uint *)(param_1 + 4);
  if (uVar4 < 0x800001) {
    uVar5 = *(uint *)((int64_t)param_1 + 0x1c);
    iVar2 = (int)param_1[3];
    uVar3 = *(uint *)((int64_t)param_1 + 0x24);
    uVar7 = *(uint *)((int64_t)param_1 + 0x2c);
    do {
      iVar2 = iVar2 + 8;
      uVar4 = uVar4 << 8;
      *(int *)(param_1 + 3) = iVar2;
      *(uint *)(param_1 + 4) = uVar4;
      if (uVar5 < *(uint *)(param_1 + 1)) {
        uVar1 = (uint64_t)uVar5;
        uVar5 = uVar5 + 1;
        uVar6 = (uint)*(byte *)(uVar1 + *param_1);
        *(uint *)((int64_t)param_1 + 0x1c) = uVar5;
      }
      else {
        uVar6 = 0;
      }
      *(uint *)((int64_t)param_1 + 0x2c) = uVar6;
      uVar3 = uVar3 * 0x100 + (~((int)(uVar7 << 8 | uVar6) >> 1) & 0xffU) & 0x7fffffff;
      *(uint *)((int64_t)param_1 + 0x24) = uVar3;
      uVar7 = uVar6;
    } while (uVar4 < 0x800001);
  }
  return;
}





// 函数: void FUN_18070f4ad(int64_t *param_1,uint64_t param_2,uint param_3,uint param_4)
void FUN_18070f4ad(int64_t *param_1,uint64_t param_2,uint param_3,uint param_4)

{
  uint64_t uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint in_R11D;
  
  iVar2 = (int)param_1[3];
  uVar3 = *(uint *)((int64_t)param_1 + 0x24);
  do {
    iVar2 = iVar2 + 8;
    param_3 = param_3 << 8;
    *(int *)(param_1 + 3) = iVar2;
    *(uint *)(param_1 + 4) = param_3;
    if (param_4 < *(uint *)(param_1 + 1)) {
      uVar1 = (uint64_t)param_4;
      param_4 = param_4 + 1;
      uVar4 = (uint)*(byte *)(uVar1 + *param_1);
      *(uint *)((int64_t)param_1 + 0x1c) = param_4;
    }
    else {
      uVar4 = 0;
    }
    *(uint *)((int64_t)param_1 + 0x2c) = uVar4;
    uVar3 = uVar3 * 0x100 + (~((int)(in_R11D << 8 | uVar4) >> 1) & 0xffU) & 0x7fffffff;
    *(uint *)((int64_t)param_1 + 0x24) = uVar3;
    in_R11D = uVar4;
  } while (param_3 < 0x800001);
  return;
}





