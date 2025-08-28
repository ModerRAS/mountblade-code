#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_11_part030.c - 11 个函数

// 函数: void FUN_1806fbffb(void)
void FUN_1806fbffb(void)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  int64_t lVar4;
  float *pfVar5;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int unaff_EDI;
  uint64_t uVar6;
  float *pfVar7;
  float *pfVar8;
  int in_R11D;
  int unaff_R14D;
  int unaff_R15D;
  float fVar9;
  float in_XMM3_Da;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  int in_stack_000000c8;
  int64_t in_stack_000000d8;
  
  if (in_R11D < unaff_EDI) {
    uVar6 = (uint64_t)(uint)(unaff_EDI - in_R11D);
    pfVar5 = (float *)(in_stack_000000d8 + (int64_t)(in_R11D * unaff_R15D) * 4);
    pfVar3 = (float *)(unaff_RSI + ((int64_t)(in_R11D * unaff_R14D) + 1) * 4);
    in_R11D = in_R11D + (unaff_EDI - in_R11D);
    do {
      fVar9 = *pfVar5;
      pfVar5 = pfVar5 + unaff_R15D;
      fVar9 = fVar9 * fVar9;
      fVar9 = (*(float *)((unaff_RBX - unaff_RSI) + -4 + (int64_t)pfVar3) -
              *(float *)((unaff_RBX - unaff_RSI) + (int64_t)pfVar3)) * in_XMM3_Da *
              ((in_XMM5_Da - fVar9) * unaff_XMM6_Da + fVar9 * in_XMM4_Da);
      pfVar3[-1] = pfVar3[-1] - fVar9;
      *pfVar3 = fVar9 + *pfVar3;
      pfVar3 = pfVar3 + unaff_R14D;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (in_R11D < in_stack_000000c8) {
    if (3 < in_stack_000000c8 - in_R11D) {
      iVar1 = unaff_R14D * 4;
      lVar4 = unaff_RBX - unaff_RSI;
      pfVar5 = (float *)(unaff_RSI + ((int64_t)(in_R11D * unaff_R14D) + 1) * 4);
      pfVar3 = (float *)(unaff_RSI + ((int64_t)((in_R11D + 3) * unaff_R14D) + 1) * 4);
      pfVar7 = (float *)(unaff_RSI + ((int64_t)((in_R11D + 2) * unaff_R14D) + 1) * 4);
      uVar2 = ((in_stack_000000c8 - in_R11D) - 4U >> 2) + 1;
      uVar6 = (uint64_t)uVar2;
      pfVar8 = (float *)(unaff_RSI + ((int64_t)((in_R11D + 1) * unaff_R14D) + 1) * 4);
      in_R11D = in_R11D + uVar2 * 4;
      do {
        fVar9 = (*(float *)(lVar4 + -4 + (int64_t)pfVar5) - *(float *)(lVar4 + (int64_t)pfVar5)) *
                in_XMM3_Da * in_XMM4_Da;
        pfVar5[-1] = pfVar5[-1] - fVar9;
        *pfVar5 = fVar9 + *pfVar5;
        pfVar5 = pfVar5 + iVar1;
        fVar9 = (*(float *)(lVar4 + -4 + (int64_t)pfVar8) - *(float *)((int64_t)pfVar8 + lVar4)) *
                in_XMM3_Da * in_XMM4_Da;
        pfVar8[-1] = pfVar8[-1] - fVar9;
        *pfVar8 = fVar9 + *pfVar8;
        pfVar8 = pfVar8 + iVar1;
        fVar9 = (*(float *)(lVar4 + -4 + (int64_t)pfVar7) - *(float *)((int64_t)pfVar7 + lVar4)) *
                in_XMM3_Da * in_XMM4_Da;
        pfVar7[-1] = pfVar7[-1] - fVar9;
        *pfVar7 = fVar9 + *pfVar7;
        pfVar7 = pfVar7 + iVar1;
        fVar9 = (*(float *)(lVar4 + -4 + (int64_t)pfVar3) - *(float *)((int64_t)pfVar3 + lVar4)) *
                in_XMM3_Da * in_XMM4_Da;
        pfVar3[-1] = pfVar3[-1] - fVar9;
        *pfVar3 = fVar9 + *pfVar3;
        pfVar3 = pfVar3 + iVar1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (in_R11D < in_stack_000000c8) {
      pfVar5 = (float *)(unaff_RSI + ((int64_t)(in_R11D * unaff_R14D) + 1) * 4);
      lVar4 = (int64_t)(in_stack_000000c8 - in_R11D);
      do {
        fVar9 = (*(float *)((unaff_RBX - unaff_RSI) + -4 + (int64_t)pfVar5) -
                *(float *)((unaff_RBX - unaff_RSI) + (int64_t)pfVar5)) * in_XMM3_Da * in_XMM4_Da;
        pfVar5[-1] = pfVar5[-1] - fVar9;
        *pfVar5 = fVar9 + *pfVar5;
        pfVar5 = pfVar5 + unaff_R14D;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return;
}






// 函数: void FUN_1806fc0b0(void)
void FUN_1806fc0b0(void)

{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  float *pfVar5;
  int64_t unaff_RBX;
  int unaff_EBP;
  int64_t unaff_RSI;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int in_R11D;
  int unaff_R14D;
  float fVar9;
  float in_XMM3_Da;
  float in_XMM4_Da;
  
  if (3 < unaff_EBP - in_R11D) {
    iVar1 = unaff_R14D * 4;
    lVar4 = unaff_RBX - unaff_RSI;
    pfVar5 = (float *)(unaff_RSI + ((int64_t)(in_R11D * unaff_R14D) + 1) * 4);
    pfVar6 = (float *)(unaff_RSI + ((int64_t)((in_R11D + 3) * unaff_R14D) + 1) * 4);
    pfVar7 = (float *)(unaff_RSI + ((int64_t)((in_R11D + 2) * unaff_R14D) + 1) * 4);
    uVar2 = ((unaff_EBP - in_R11D) - 4U >> 2) + 1;
    uVar3 = (uint64_t)uVar2;
    pfVar8 = (float *)(unaff_RSI + ((int64_t)((in_R11D + 1) * unaff_R14D) + 1) * 4);
    in_R11D = in_R11D + uVar2 * 4;
    do {
      fVar9 = (*(float *)(lVar4 + -4 + (int64_t)pfVar5) - *(float *)(lVar4 + (int64_t)pfVar5)) *
              in_XMM3_Da * in_XMM4_Da;
      pfVar5[-1] = pfVar5[-1] - fVar9;
      *pfVar5 = fVar9 + *pfVar5;
      pfVar5 = pfVar5 + iVar1;
      fVar9 = (*(float *)(lVar4 + -4 + (int64_t)pfVar8) - *(float *)((int64_t)pfVar8 + lVar4)) *
              in_XMM3_Da * in_XMM4_Da;
      pfVar8[-1] = pfVar8[-1] - fVar9;
      *pfVar8 = fVar9 + *pfVar8;
      pfVar8 = pfVar8 + iVar1;
      fVar9 = (*(float *)(lVar4 + -4 + (int64_t)pfVar7) - *(float *)((int64_t)pfVar7 + lVar4)) *
              in_XMM3_Da * in_XMM4_Da;
      pfVar7[-1] = pfVar7[-1] - fVar9;
      *pfVar7 = fVar9 + *pfVar7;
      pfVar7 = pfVar7 + iVar1;
      fVar9 = (*(float *)(lVar4 + -4 + (int64_t)pfVar6) - *(float *)((int64_t)pfVar6 + lVar4)) *
              in_XMM3_Da * in_XMM4_Da;
      pfVar6[-1] = pfVar6[-1] - fVar9;
      *pfVar6 = fVar9 + *pfVar6;
      pfVar6 = pfVar6 + iVar1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (in_R11D < unaff_EBP) {
    pfVar5 = (float *)(unaff_RSI + ((int64_t)(in_R11D * unaff_R14D) + 1) * 4);
    lVar4 = (int64_t)(unaff_EBP - in_R11D);
    do {
      fVar9 = (*(float *)((unaff_RBX - unaff_RSI) + -4 + (int64_t)pfVar5) -
              *(float *)((unaff_RBX - unaff_RSI) + (int64_t)pfVar5)) * in_XMM3_Da * in_XMM4_Da;
      pfVar5[-1] = pfVar5[-1] - fVar9;
      *pfVar5 = fVar9 + *pfVar5;
      pfVar5 = pfVar5 + unaff_R14D;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806fc2d0(int64_t param_1,byte *param_2,int param_3,uint64_t param_4,int param_5,
void FUN_1806fc2d0(int64_t param_1,byte *param_2,int param_3,uint64_t param_4,int param_5,
                  int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int8_t auStack_38 [8];
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_38;
  if (param_5 < 1) goto LAB_1806fc453;
  iVar2 = param_5;
  if (((param_2 == (byte *)0x0) || (param_3 < 1)) || (param_6 != 0)) goto LAB_1806fc38c;
  iVar1 = *(int *)(param_1 + 0xc);
  if ((*param_2 & 3) == 0) {
    uVar3 = 1;
LAB_1806fc35d:
    iVar2 = func_0x00018070f7d0(param_2,iVar1);
    iVar2 = iVar2 * uVar3;
    if (iVar1 * 3 < iVar2 * 0x19) goto LAB_1806fc453;
  }
  else {
    if ((*param_2 & 3) != 3) {
      uVar3 = 2;
      goto LAB_1806fc35d;
    }
    if (1 < param_3) {
      uVar3 = param_2[1] & 0x3f;
      goto LAB_1806fc35d;
    }
    iVar2 = -4;
  }
  if (0 < iVar2) {
    if (param_5 < iVar2) {
      iVar2 = param_5;
    }
LAB_1806fc38c:
                    // WARNING: Subroutine does not return
    SystemCore_MemoryManager0((int64_t)(iVar2 * *(int *)(param_1 + 8)) * 4,param_6);
  }
LAB_1806fc453:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_38);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806fc480(int *param_1,uint64_t param_2,int param_3,int32_t *param_4,int param_5)
void FUN_1806fc480(int *param_1,uint64_t param_2,int param_3,int32_t *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int32_t uStack_bc;
  int64_t lStack_b0;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_9c;
  int32_t uStack_98;
  uint64_t uStack_90;
  int iStack_88;
  int32_t uStack_84;
  uint64_t uStack_80;
  int64_t lStack_70;
  int8_t auStack_68 [56];
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)&iStack_c8;
  uStack_84 = 0;
  uStack_80 = 0;
  lStack_70 = (int64_t)param_1[1] + (int64_t)param_1;
  uStack_a4 = 0;
  lStack_b0 = (int64_t)*param_1 + (int64_t)param_1;
  uStack_bc = 0;
  uStack_9c = 0;
  uStack_a8 = 0;
  uStack_98 = 0;
  iVar3 = param_1[3] / 0x32;
  iStack_c8 = iVar3 >> 2;
  iStack_c4 = param_3;
  uStack_90 = param_2;
  if (param_5 < iVar3 >> 3) goto LAB_1806fcfba;
  iVar2 = (param_1[3] / 0x19) * 3;
  if (iVar2 <= param_5) {
    param_5 = iVar2;
  }
  if (param_3 < 2) {
    uStack_90 = 0;
    if (param_1[0x10] <= param_5) {
      param_5 = param_1[0x10];
    }
LAB_1806fc5a8:
    iStack_c0 = param_1[0xf];
    if (iStack_c0 == 0) {
      uVar5 = uStack_90 & 0xffffffff;
      if (0 < param_1[2] * param_5) {
        do {
          *param_4 = (int)uStack_90;
          param_4 = param_4 + 1;
          uVar4 = (int)uVar5 + 1;
          uVar5 = (uint64_t)uVar4;
        } while ((int)uVar4 < param_1[2] * param_5);
      }
LAB_1806fcfba:
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_30 ^ (uint64_t)&iStack_c8);
    }
    uVar5 = uStack_90;
    if (iVar3 < param_5) {
      do {
        iVar2 = iVar3;
        if (param_5 < iVar3) {
          iVar2 = param_5;
        }
        iVar2 = FUN_1806fc480(param_1,0,0,param_4,iVar2,(int)uVar5);
        if (iVar2 < 0) break;
        param_5 = param_5 - iVar2;
        uVar5 = 0;
        param_4 = param_4 + param_1[2] * iVar2;
      } while (0 < param_5);
      goto LAB_1806fcfba;
    }
  }
  else {
    if (param_2 == 0) goto LAB_1806fc5a8;
    iStack_c0 = param_1[0xe];
    func_0x00018070f440(auStack_68,param_2,param_3);
  }
  iVar3 = 0;
  iStack_88 = 0;
  iVar2 = iStack_88;
  if ((uStack_90 != 0) && (iVar1 = param_1[0xf], 0 < iVar1)) {
    if (iStack_c0 == 0x3ea) {
      if ((iVar1 == 0x3ea) || (param_1[0x11] != 0)) goto LAB_1806fc6ab;
    }
    else if (iVar1 != 0x3ea) goto LAB_1806fc6ab;
    uStack_a4 = 1;
    iVar2 = param_1[2] * iStack_c8;
    if (iStack_c0 == 0x3ea) {
      iVar3 = param_1[2] * iStack_c8;
      iVar2 = iStack_88;
    }
  }
LAB_1806fc6ab:
  iStack_88 = iVar2;
  uVar5 = (int64_t)iVar3 * 4 + 0xf;
  if (uVar5 <= (uint64_t)((int64_t)iVar3 * 4)) {
    uVar5 = 0xffffffffffffff0;
  }
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0(uVar5 & 0xfffffffffffffff0,iStack_c0,uStack_a4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806fcff0(int64_t param_1,byte *param_2,int param_3,int64_t param_4,int param_5,
void FUN_1806fcff0(int64_t param_1,byte *param_2,int param_3,int64_t param_4,int param_5,
                  uint param_6,int32_t param_7,uint64_t param_8,int param_9)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  int8_t auStack_128 [32];
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  int iStack_e8;
  int8_t auStack_d8 [4];
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  uint64_t uStack_c8;
  short asStack_b8 [48];
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_128;
  uStack_c8 = param_8;
  iStack_d4 = param_3;
  if ((1 < param_6) ||
     ((((param_6 != 0 || (param_3 == 0)) || (param_2 == (byte *)0x0)) &&
      (param_5 % (*(int *)(param_1 + 0xc) / 400) != 0)))) goto FUN_1806fd163;
  if ((param_3 == 0) || (param_2 == (byte *)0x0)) {
    iVar4 = 0;
    do {
      uStack_100 = (short *)((uint64_t)uStack_100 & 0xffffffff00000000);
      uStack_108 = CONCAT44(uStack_108._4_4_,param_5 - iVar4);
      iVar2 = FUN_1806fc480(param_1,0,0,param_4 + (int64_t)(*(int *)(param_1 + 8) * iVar4) * 4);
      if (iVar2 < 0) goto FUN_1806fd163;
      iVar4 = iVar4 + iVar2;
    } while (iVar4 < param_5);
    *(int *)(param_1 + 0x48) = iVar4;
    goto FUN_1806fd163;
  }
  if (param_3 < 0) goto FUN_1806fd163;
  bVar1 = *param_2;
  if ((char)bVar1 < '\0') {
    iVar4 = 0x3ea;
LAB_1806fd18a:
    if (-1 < (char)bVar1) goto LAB_1806fd0c7;
    uVar5 = (bVar1 >> 5 & 3) + 0x44e;
    if (uVar5 == 0x44e) {
      uVar5 = 0x44d;
    }
  }
  else {
    if ((bVar1 & 0x60) != 0x60) {
      iVar4 = 1000;
      goto LAB_1806fd18a;
    }
    iVar4 = 0x3e9;
LAB_1806fd0c7:
    uVar5 = (bVar1 >> 5 & 3) + 0x44d;
    if ((bVar1 & 0x60) == 0x60) {
      uVar5 = (bVar1 & 0x10 | 0x4500) >> 4;
    }
  }
  iVar2 = func_0x00018070f7d0(param_2,*(int32_t *)(param_1 + 0xc));
  iStack_d0 = ((*param_2 & 4) != 0) + 1;
  uStack_f0 = uStack_c8;
  uStack_f8 = &iStack_cc;
  uStack_100 = asStack_b8;
  uStack_108 = 0;
  iVar3 = FUN_18070f860(param_2,iStack_d4,param_7,auStack_d8);
  if (-1 < iVar3) {
    param_2 = param_2 + iStack_cc;
    if (param_6 == 0) {
      if (iVar3 * iVar2 <= param_5) {
        *(int *)(param_1 + 0x38) = iVar4;
        *(uint *)(param_1 + 0x34) = uVar5;
        iVar4 = 0;
        *(int *)(param_1 + 0x30) = iStack_d0;
        *(int *)(param_1 + 0x40) = iVar2;
        if (0 < iVar3) {
          lVar6 = 0;
          do {
            uStack_100 = (short *)((uint64_t)uStack_100 & 0xffffffff00000000);
            uStack_108 = CONCAT44(uStack_108._4_4_,param_5 - iVar4);
            iVar2 = FUN_1806fc480(param_1,param_2,(int)asStack_b8[lVar6],
                                  param_4 + (int64_t)(*(int *)(param_1 + 8) * iVar4) * 4);
            if (iVar2 < 0) goto FUN_1806fd163;
            iVar4 = iVar4 + iVar2;
            param_2 = param_2 + asStack_b8[lVar6];
            lVar6 = lVar6 + 1;
          } while (lVar6 < iVar3);
        }
        *(int *)(param_1 + 0x48) = iVar4;
        if (param_9 == 0) {
          *(uint64_t *)(param_1 + 0x4c) = 0;
        }
        else {
          FUN_18070fc20(param_4,iVar4,*(int32_t *)(param_1 + 8),param_1 + 0x4c);
        }
      }
    }
    else if (((param_5 < iVar2) || (iVar4 == 0x3ea)) || (*(int *)(param_1 + 0x38) == 0x3ea)) {
      iStack_e8 = param_9;
      uStack_f0 = 0;
      uStack_f8 = (int *)((uint64_t)uStack_f8._4_4_ << 0x20);
      uStack_100 = (short *)((uint64_t)uStack_100._4_4_ << 0x20);
      uStack_108 = CONCAT44(uStack_108._4_4_,param_5);
      FUN_1806fcff0(param_1,0,0,param_4);
    }
    else {
      iStack_d4 = *(int *)(param_1 + 0x48);
      iVar3 = param_5 - iVar2;
      uStack_c8 = CONCAT44(uStack_c8._4_4_,iVar3);
      if (iVar3 != 0) {
        iStack_e8 = param_9;
        uStack_f0 = 0;
        uStack_f8 = (int *)((uint64_t)uStack_f8._4_4_ << 0x20);
        uStack_100 = (short *)((uint64_t)uStack_100._4_4_ << 0x20);
        uStack_108 = CONCAT44(uStack_108._4_4_,iVar3);
        iVar3 = FUN_1806fcff0(param_1,0,0,param_4);
        if (iVar3 < 0) {
          *(int *)(param_1 + 0x48) = iStack_d4;
          goto FUN_1806fd163;
        }
        iVar3 = (int)uStack_c8;
      }
      *(int *)(param_1 + 0x30) = iStack_d0;
      uStack_100 = (short *)CONCAT44(uStack_100._4_4_,1);
      *(int *)(param_1 + 0x38) = iVar4;
      *(uint *)(param_1 + 0x34) = uVar5;
      *(int *)(param_1 + 0x40) = iVar2;
      uStack_108 = CONCAT44(uStack_108._4_4_,iVar2);
      iVar4 = FUN_1806fc480(param_1,param_2,(int)asStack_b8[0],
                            param_4 + (int64_t)(*(int *)(param_1 + 8) * iVar3) * 4);
      if (-1 < iVar4) {
        *(int *)(param_1 + 0x48) = param_5;
      }
    }
  }
FUN_1806fd163:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_128);
}






// 函数: void FUN_1806fd095(uint64_t param_1,byte param_2)
void FUN_1806fd095(uint64_t param_1,byte param_2)

{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int64_t unaff_RBX;
  uint uVar6;
  int64_t lVar7;
  int unaff_R14D;
  byte *unaff_R15;
  uint64_t in_stack_000000d0;
  int in_stack_00000158;
  int in_stack_00000170;
  
  if ((char)param_2 < '\0') {
    iVar5 = 0x3ea;
LAB_1806fd18a:
    if ((char)param_2 < '\0') {
      uVar6 = (param_2 >> 5 & 3) + 0x44e;
      if (uVar6 == 0x44e) {
        uVar6 = 0x44d;
      }
      goto LAB_1806fd0ed;
    }
  }
  else {
    if ((param_2 & 0x60) != 0x60) {
      iVar5 = 1000;
      goto LAB_1806fd18a;
    }
    iVar5 = 0x3e9;
  }
  uVar6 = (param_2 >> 5 & 3) + 0x44d;
  if ((param_2 & 0x60) == 0x60) {
    uVar6 = (param_2 & 0x10 | 0x4500) >> 4;
  }
LAB_1806fd0ed:
  iVar2 = func_0x00018070f7d0();
  iVar3 = ((*unaff_R15 & 4) != 0) + 1;
  iVar4 = FUN_18070f860();
  if (-1 < iVar4) {
    if (in_stack_00000158 == 0) {
      if (iVar4 * iVar2 <= unaff_R14D) {
        *(int *)(unaff_RBX + 0x38) = iVar5;
        *(uint *)(unaff_RBX + 0x34) = uVar6;
        iVar5 = 0;
        *(int *)(unaff_RBX + 0x30) = iVar3;
        *(int *)(unaff_RBX + 0x40) = iVar2;
        if (0 < iVar4) {
          lVar7 = 0;
          do {
            iVar2 = FUN_1806fc480();
            if (iVar2 < 0) goto LAB_1806fd153;
            iVar5 = iVar5 + iVar2;
            lVar7 = lVar7 + 1;
          } while (lVar7 < iVar4);
        }
        *(int *)(unaff_RBX + 0x48) = iVar5;
        if (in_stack_00000170 == 0) {
          *(uint64_t *)(unaff_RBX + 0x4c) = 0;
        }
        else {
          FUN_18070fc20();
        }
      }
    }
    else if (((unaff_R14D < iVar2) || (iVar5 == 0x3ea)) || (*(int *)(unaff_RBX + 0x38) == 0x3ea)) {
      FUN_1806fcff0();
    }
    else {
      uVar1 = *(int32_t *)(unaff_RBX + 0x48);
      if ((unaff_R14D == iVar2) || (iVar4 = FUN_1806fcff0(), -1 < iVar4)) {
        *(int *)(unaff_RBX + 0x30) = iVar3;
        *(int *)(unaff_RBX + 0x38) = iVar5;
        *(uint *)(unaff_RBX + 0x34) = uVar6;
        *(int *)(unaff_RBX + 0x40) = iVar2;
        iVar5 = FUN_1806fc480();
        if (-1 < iVar5) {
          *(int *)(unaff_RBX + 0x48) = unaff_R14D;
        }
      }
      else {
        *(int32_t *)(unaff_RBX + 0x48) = uVar1;
      }
    }
  }
LAB_1806fd153:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000d0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1806fd163(void)
void FUN_1806fd163(void)

{
  uint64_t in_stack_000000d0;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000d0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1806fd184(uint64_t param_1,byte param_2)
void FUN_1806fd184(uint64_t param_1,byte param_2)

{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t unaff_RBX;
  uint uVar5;
  int iVar6;
  int64_t lVar7;
  int unaff_R14D;
  byte *unaff_R15;
  uint64_t in_stack_000000d0;
  int in_stack_00000158;
  int in_stack_00000170;
  
  if ((char)param_2 < '\0') {
    uVar5 = (param_2 >> 5 & 3) + 0x44e;
    if (uVar5 == 0x44e) {
      uVar5 = 0x44d;
    }
  }
  else {
    uVar5 = (param_2 >> 5 & 3) + 0x44d;
    if ((param_2 & 0x60) == 0x60) {
      uVar5 = (param_2 & 0x10 | 0x4500) >> 4;
    }
  }
  iVar2 = func_0x00018070f7d0();
  iVar3 = ((*unaff_R15 & 4) != 0) + 1;
  iVar4 = FUN_18070f860();
  if (-1 < iVar4) {
    if (in_stack_00000158 == 0) {
      if (iVar4 * iVar2 <= unaff_R14D) {
        *(int32_t *)(unaff_RBX + 0x38) = 1000;
        *(uint *)(unaff_RBX + 0x34) = uVar5;
        iVar6 = 0;
        *(int *)(unaff_RBX + 0x30) = iVar3;
        *(int *)(unaff_RBX + 0x40) = iVar2;
        if (0 < iVar4) {
          lVar7 = 0;
          do {
            iVar2 = FUN_1806fc480();
            if (iVar2 < 0) goto LAB_1806fd153;
            iVar6 = iVar6 + iVar2;
            lVar7 = lVar7 + 1;
          } while (lVar7 < iVar4);
        }
        *(int *)(unaff_RBX + 0x48) = iVar6;
        if (in_stack_00000170 == 0) {
          *(uint64_t *)(unaff_RBX + 0x4c) = 0;
        }
        else {
          FUN_18070fc20();
        }
      }
    }
    else if ((unaff_R14D < iVar2) || (*(int *)(unaff_RBX + 0x38) == 0x3ea)) {
      FUN_1806fcff0();
    }
    else {
      uVar1 = *(int32_t *)(unaff_RBX + 0x48);
      if ((unaff_R14D == iVar2) || (iVar4 = FUN_1806fcff0(), -1 < iVar4)) {
        *(int *)(unaff_RBX + 0x30) = iVar3;
        *(int32_t *)(unaff_RBX + 0x38) = 1000;
        *(uint *)(unaff_RBX + 0x34) = uVar5;
        *(int *)(unaff_RBX + 0x40) = iVar2;
        iVar2 = FUN_1806fc480();
        if (-1 < iVar2) {
          *(int *)(unaff_RBX + 0x48) = unaff_R14D;
        }
      }
      else {
        *(int32_t *)(unaff_RBX + 0x48) = uVar1;
      }
    }
  }
LAB_1806fd153:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000d0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1806fd367(void)
void FUN_1806fd367(void)

{
  int iVar1;
  int64_t unaff_RBX;
  int iVar2;
  int unaff_R14D;
  int32_t uStack0000000000000028;
  uint64_t in_stack_000000d0;
  
  iVar2 = 0;
  do {
    uStack0000000000000028 = 0;
    iVar1 = FUN_1806fc480();
    if (iVar1 < 0) goto FUN_1806fd163;
    iVar2 = iVar2 + iVar1;
  } while (iVar2 < unaff_R14D);
  *(int *)(unaff_RBX + 0x48) = iVar2;
FUN_1806fd163:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000d0 ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_1806fd3c0(int param_1,int param_2,int32_t *param_3)

{
  int iVar1;
  int64_t lVar2;
  uint auStackX_8 [2];
  uint auStackX_20 [2];
  
  if (((((param_1 == 48000) || (param_1 == 24000)) || (param_1 == 16000)) ||
      ((param_1 == 12000 || (param_1 == 8000)))) && (param_2 - 1U < 2)) {
    if ((param_2 - 1U < 2) && (iVar1 = func_0x000180710fb0(auStackX_8), iVar1 == 0)) {
      auStackX_8[0] = auStackX_8[0] + 7 & 0xfffffff8;
      iVar1 = FUN_18070e140(param_2);
      iVar1 = iVar1 + auStackX_8[0] + 0x58;
    }
    else {
      iVar1 = 0;
    }
    lVar2 = malloc((int64_t)iVar1);
    if (lVar2 == 0) {
      if (param_3 != (int32_t *)0x0) {
        *param_3 = 0xfffffff9;
      }
    }
    else {
      if (((((param_1 == 48000) || (param_1 == 24000)) || (param_1 == 16000)) ||
          ((param_1 == 12000 || (param_1 == 8000)))) && (param_2 - 1U < 2)) {
        if ((param_2 - 1U < 2) && (iVar1 = func_0x000180710fb0(auStackX_20), iVar1 == 0)) {
          auStackX_20[0] = auStackX_20[0] + 7 & 0xfffffff8;
          iVar1 = FUN_18070e140(param_2);
          iVar1 = iVar1 + auStackX_20[0] + 0x58;
        }
        else {
          iVar1 = 0;
        }
                    // WARNING: Subroutine does not return
        memset(lVar2,0,(int64_t)iVar1);
      }
      if (param_3 != (int32_t *)0x0) {
        *param_3 = 0xffffffff;
      }
      free(lVar2);
    }
  }
  else if (param_3 != (int32_t *)0x0) {
    *param_3 = 0xffffffff;
  }
  return 0;
}






// 函数: void FUN_1806fd620(int64_t param_1,int64_t param_2,int64_t param_3,int param_4,uint param_5,
void FUN_1806fd620(int64_t param_1,int64_t param_2,int64_t param_3,int param_4,uint param_5,
                  int64_t param_6,int param_7)

{
  float *pfVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  float *pfVar12;
  float *pfVar13;
  uint64_t uVar14;
  int iVar15;
  uint64_t uVar16;
  int64_t lVar17;
  float *pfVar18;
  uint64_t uVar19;
  float fVar20;
  
  uVar14 = (uint64_t)(int)param_5;
  lVar2 = (int64_t)param_7;
  param_7 = 0;
  if (0 < (int)param_5) {
    pfVar18 = (float *)(uVar14 * 4 + param_2);
    uVar11 = uVar14;
    uVar19 = uVar14;
    do {
      iVar4 = (int)(48000 / lVar2);
      iVar15 = 0;
      if (3 < param_4) {
        iVar3 = (int)uVar11;
        lVar17 = (int64_t)(iVar4 * 2);
        pfVar13 = (float *)(param_6 + lVar17 * 4);
        lVar10 = (int64_t)(param_7 + iVar3 * 2) - uVar19;
        lVar6 = lVar10 * 4 - param_2;
        lVar7 = (int64_t)(param_7 + iVar3 * 3) - uVar19;
        lVar8 = lVar7 * 4 - param_2;
        lVar9 = uVar14 * -4 - param_2;
        uVar5 = (param_4 - 4U >> 2) + 1;
        uVar11 = (uint64_t)uVar5;
        iVar15 = uVar5 * 4;
        pfVar12 = pfVar18;
        do {
          fVar20 = pfVar13[-lVar17] * pfVar13[-lVar17];
          *(float *)((int64_t)pfVar12 + lVar9 + param_3) =
               (1.0 - fVar20) * *(float *)((int64_t)pfVar12 + lVar9 + param_1) +
               fVar20 * pfVar12[-uVar14];
          fVar20 = pfVar13[iVar4 - lVar17] * pfVar13[iVar4 - lVar17];
          *(float *)((param_3 - param_2) + (int64_t)pfVar12) =
               (1.0 - fVar20) * *(float *)((int64_t)pfVar12 + (param_1 - param_2)) +
               fVar20 * *pfVar12;
          fVar20 = *pfVar13 * *pfVar13;
          *(float *)((int64_t)pfVar12 + lVar6 + param_3) =
               (1.0 - fVar20) * *(float *)((int64_t)pfVar12 + lVar6 + param_1) +
               fVar20 * pfVar12[lVar10];
          pfVar1 = pfVar13 + (iVar4 * 3 - lVar17);
          pfVar13 = pfVar13 + iVar4 * 4;
          fVar20 = *pfVar1 * *pfVar1;
          *(float *)((int64_t)pfVar12 + lVar8 + param_3) =
               (1.0 - fVar20) * *(float *)((int64_t)pfVar12 + lVar8 + param_1) +
               fVar20 * pfVar12[lVar7];
          pfVar12 = pfVar12 + iVar3 * 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        uVar11 = (uint64_t)param_5;
      }
      if (iVar15 < param_4) {
        pfVar13 = (float *)(param_6 + (int64_t)(iVar15 * iVar4) * 4);
        pfVar12 = (float *)(param_2 + (int64_t)(iVar15 * (int)uVar11 + param_7) * 4);
        uVar16 = (uint64_t)(uint)(param_4 - iVar15);
        do {
          fVar20 = *pfVar13 * *pfVar13;
          pfVar13 = pfVar13 + iVar4;
          *(float *)((param_3 - param_2) + (int64_t)pfVar12) =
               (1.0 - fVar20) * *(float *)((param_1 - param_2) + (int64_t)pfVar12) +
               fVar20 * *pfVar12;
          pfVar12 = pfVar12 + uVar14;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      param_7 = param_7 + 1;
      uVar19 = uVar19 + 1;
      pfVar18 = pfVar18 + 1;
    } while (param_7 < (int)uVar11);
  }
  return;
}






// 函数: void FUN_1806fd686(void)
void FUN_1806fd686(void)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  uint64_t in_RAX;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  float *pfVar10;
  float *pfVar11;
  int unaff_EBX;
  uint64_t unaff_RBP;
  int unaff_ESI;
  int iVar12;
  uint64_t uVar13;
  int64_t in_R10;
  int64_t lVar14;
  int64_t in_R11;
  float *pfVar15;
  int unaff_R13D;
  int64_t unaff_R14;
  uint64_t uVar16;
  float fVar17;
  float in_XMM3_Da;
  int unaff_retaddr;
  uint64_t uStackX_8;
  int64_t in_stack_000000f0;
  int64_t in_stack_000000f8;
  int64_t in_stack_00000100;
  int in_stack_00000108;
  uint in_stack_00000110;
  int64_t in_stack_00000118;
  int in_stack_00000120;
  
  pfVar15 = (float *)(unaff_RBP * 4 + unaff_R14);
  uVar9 = unaff_RBP;
  uVar16 = unaff_RBP;
  uStackX_8 = in_RAX;
  do {
    iVar12 = 0;
    if (3 < unaff_ESI) {
      iVar2 = (int)uVar9;
      lVar14 = (int64_t)(unaff_R13D * 2);
      pfVar11 = (float *)(in_stack_00000118 + lVar14 * 4);
      lVar8 = (int64_t)(unaff_EBX + iVar2 * 2) - uVar16;
      lVar4 = lVar8 * 4 - unaff_R14;
      lVar5 = (int64_t)(unaff_EBX + iVar2 * 3) - uVar16;
      lVar6 = lVar5 * 4 - unaff_R14;
      lVar7 = in_RAX * -4 - unaff_R14;
      uVar3 = (unaff_ESI - 4U >> 2) + 1;
      uVar9 = (uint64_t)uVar3;
      iVar12 = uVar3 * 4;
      pfVar10 = pfVar15;
      do {
        fVar17 = pfVar11[-lVar14] * pfVar11[-lVar14];
        *(float *)((int64_t)pfVar10 + lVar7 + in_stack_00000100) =
             (in_XMM3_Da - fVar17) * *(float *)((int64_t)pfVar10 + lVar7 + in_stack_000000f0) +
             fVar17 * pfVar10[-in_RAX];
        fVar17 = pfVar11[unaff_R13D - lVar14] * pfVar11[unaff_R13D - lVar14];
        *(float *)((in_stack_00000100 - unaff_R14) + (int64_t)pfVar10) =
             (in_XMM3_Da - fVar17) * *(float *)((int64_t)pfVar10 + (in_stack_000000f0 - unaff_R14))
             + fVar17 * *pfVar10;
        fVar17 = *pfVar11 * *pfVar11;
        *(float *)((int64_t)pfVar10 + lVar4 + in_stack_00000100) =
             (in_XMM3_Da - fVar17) * *(float *)((int64_t)pfVar10 + lVar4 + in_stack_000000f0) +
             fVar17 * pfVar10[lVar8];
        pfVar1 = pfVar11 + (unaff_R13D * 3 - lVar14);
        pfVar11 = pfVar11 + unaff_R13D * 4;
        fVar17 = *pfVar1 * *pfVar1;
        *(float *)((int64_t)pfVar10 + lVar6 + in_stack_00000100) =
             (in_XMM3_Da - fVar17) * *(float *)((int64_t)pfVar10 + lVar6 + in_stack_000000f0) +
             fVar17 * pfVar10[lVar5];
        pfVar10 = pfVar10 + iVar2 * 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      uVar9 = (uint64_t)in_stack_00000110;
      in_R10 = in_stack_000000f0;
      in_R11 = in_stack_00000100;
      unaff_R14 = in_stack_000000f8;
      uVar16 = uStackX_8;
      unaff_ESI = in_stack_00000108;
      unaff_R13D = unaff_retaddr;
      unaff_EBX = in_stack_00000120;
    }
    if (iVar12 < unaff_ESI) {
      pfVar11 = (float *)(in_stack_00000118 + (int64_t)(iVar12 * unaff_R13D) * 4);
      pfVar10 = (float *)(unaff_R14 + (int64_t)(iVar12 * (int)uVar9 + unaff_EBX) * 4);
      uVar13 = (uint64_t)(uint)(unaff_ESI - iVar12);
      do {
        fVar17 = *pfVar11 * *pfVar11;
        pfVar11 = pfVar11 + unaff_R13D;
        *(float *)((in_R11 - unaff_R14) + (int64_t)pfVar10) =
             (in_XMM3_Da - fVar17) * *(float *)((in_R10 - unaff_R14) + (int64_t)pfVar10) +
             fVar17 * *pfVar10;
        pfVar10 = pfVar10 + unaff_RBP;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    unaff_EBX = unaff_EBX + 1;
    uVar16 = uVar16 + 1;
    pfVar15 = pfVar15 + 1;
    in_R10 = in_stack_000000f0;
    in_R11 = in_stack_00000100;
    uStackX_8 = uVar16;
    in_stack_00000120 = unaff_EBX;
  } while (unaff_EBX < (int)uVar9);
  return;
}






