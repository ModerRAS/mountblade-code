#include "TaleWorlds.Native.Split.h"

// 03_rendering_part496.c - 1 个函数

// 函数: void FUN_180531300(longlong param_1,int param_2,ulonglong param_3,uint64_t param_4,char param_5,
void FUN_180531300(longlong param_1,int param_2,ulonglong param_3,uint64_t param_4,char param_5,
                  int param_6,char param_7)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int32_t uVar7;
  longlong lVar8;
  char acStackX_10 [8];
  int32_t uVar9;
  uint32_t uVar10;
  
  if ((*(byte *)(param_1 + 0x56c) & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x560);
  }
  uVar7 = *(int32_t *)(param_1 + 0x56c);
  lVar8 = (longlong)param_2 * 0x1f8;
  lVar6 = (longlong)iVar2 * 0xa60 + *(longlong *)(param_1 + 0x8d8);
  lVar3 = *(longlong *)(lVar6 + 0x3998);
  iVar2 = *(int *)(lVar8 + 0xf8 + lVar3);
  uVar9 = uVar7;
  iVar5 = func_0x000180590580(lVar8 + 8 + lVar3,iVar2,param_3,param_4,uVar7);
  if (iVar5 != 0) {
    return;
  }
  uVar9 = CONCAT31((int3)((uint)uVar9 >> 8),(char)param_4);
  iVar5 = FUN_180590480(lVar8 + 8 + lVar3,0,uVar7,param_3 & 0xff,uVar9,0);
  if (iVar5 < 0) {
    if ((param_7 == '\0') && (param_6 == 1)) {
      uVar7 = *(int32_t *)(*(longlong *)(param_1 + 0x8f8) + 0x9e4);
      cVar4 = FUN_180531480(param_1,uVar7);
      if (cVar4 != '\0') {
        FUN_18050c740(param_1,uVar7,8,0);
        return;
      }
    }
    uVar10 = (uint32_t)((uint)uVar9 >> 8);
    uVar7 = 0xffffffff;
  }
  else {
    if (iVar5 == iVar2) {
      return;
    }
    FUN_180537bd0(lVar3,param_2,iVar5,acStackX_10);
    if (*(int *)(param_1 + 0x570) == 1) {
      puVar1 = (ushort *)(*(longlong *)(param_1 + 0x6e0) + 0x130);
      *puVar1 = *puVar1 | 0x20;
    }
    if (param_5 == '\0') {
      return;
    }
    if (acStackX_10[0] == '\0') {
      return;
    }
    uVar10 = (uint32_t)((uint)uVar9 >> 8);
    uVar7 = *(int32_t *)(*(longlong *)(param_1 + 0x8f8) + 0xa20);
    param_6 = 1;
  }
  FUN_18050bb10(lVar6 + 0x30a0,param_6,uVar7,1,CONCAT31(uVar10,param_7));
  return;
}



ulonglong FUN_180531480(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint *in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  short *psVar7;
  
  lVar5 = 0;
  psVar7 = (short *)(*(longlong *)(param_1 + 0x8f8) + 0x10);
  do {
    if ((lVar5 != param_2) && (0 < *(int *)(psVar7 + 0x14))) {
      in_RAX = (uint *)(longlong)*(int *)(psVar7 + 0x74);
      lVar1 = *(longlong *)(psVar7 + 100);
      uVar4 = *(ulonglong *)((longlong)in_RAX * 0xa0 + 0x50 + lVar1);
      if ((((uVar4 >> 9 & 1) == 0) || (0 < *psVar7)) &&
         ((((in_RAX = (uint *)func_0x000180534fb0(psVar7 + -4), (char)in_RAX == '\0' ||
            (0 < *psVar7)) && ((uVar4 & 3) == 0)) && ((uVar4 >> 0x1c & 1) != 0)))) {
        iVar6 = 0;
        lVar2 = *(longlong *)(psVar7 + 0x68) - lVar1 >> 0x3f;
        lVar3 = (*(longlong *)(psVar7 + 0x68) - lVar1) / 0xa0 + lVar2;
        in_RAX = (uint *)-lVar2;
        uVar4 = lVar3 + (longlong)in_RAX;
        if (lVar3 != lVar2) {
          in_RAX = (uint *)(lVar1 + 0x50);
          do {
            if ((*in_RAX >> 9 & 1) != 0) {
              return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
            }
            iVar6 = iVar6 + 1;
            in_RAX = in_RAX + 0x28;
          } while ((ulonglong)(longlong)iVar6 < uVar4);
        }
      }
    }
    lVar5 = lVar5 + 1;
    psVar7 = psVar7 + 0xfc;
  } while (lVar5 < 4);
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



int8_t FUN_180531590(float *param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  float fVar3;
  int8_t uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  int iStackX_10;
  
  uVar4 = 1;
  fVar3 = param_1[5];
  fVar8 = (*param_3 - *param_1) * fVar3;
  if (fVar8 <= 0.0) {
    fVar8 = fVar8 - 0.9999999;
  }
  iStackX_10 = (int)fVar8;
  fVar8 = (param_3[1] - param_1[1]) * fVar3;
  if (fVar8 <= 0.0) {
    fVar8 = fVar8 - 0.9999999;
  }
  iVar5 = (int)fVar8;
  fVar8 = param_1[2];
  if (iStackX_10 < 0) {
    iStackX_10 = 0;
  }
  else if ((int)fVar8 + -1 < iStackX_10) {
    iStackX_10 = (int)fVar8 + -1;
  }
  iVar6 = 0;
  if ((-1 < iVar5) && (iVar6 = iVar5, (int)param_1[3] + -1 < iVar5)) {
    iVar6 = (int)param_1[3] + -1;
  }
  if ((*(int *)(param_2 + 0x10) != iStackX_10) || (*(int *)(param_2 + 0x14) != iVar6)) {
    plVar2 = (longlong *)
             (*(longlong *)(param_1 + 6) + (longlong)((int)fVar8 * iVar6 + iStackX_10) * 9);
    uVar4 = FUN_1804fc920(*(longlong *)(param_1 + 6) +
                          (longlong)
                          ((int)((ulonglong)*(uint64_t *)(param_2 + 0x10) >> 0x20) * (int)fVar8 +
                          (int)*(uint64_t *)(param_2 + 0x10)) * 9,param_2,0x3f7ffffe,fVar3,
                          0xfffffffffffffffe);
    plVar1 = plVar2 + 1;
    do {
      do {
      } while ((char)*plVar1 != '\0');
      LOCK();
      bVar7 = (char)*plVar1 == '\0';
      if (bVar7) {
        *(char *)plVar1 = '\x01';
      }
      UNLOCK();
    } while (!bVar7);
    *(longlong *)(param_2 + 0x18) = *plVar2;
    *plVar2 = param_2;
    *(char *)plVar1 = '\0';
  }
  *(uint64_t *)(param_2 + 8) = *(uint64_t *)param_3;
  *(ulonglong *)(param_2 + 0x10) = CONCAT44(iVar6,iStackX_10);
  return uVar4;
}



ulonglong FUN_180531700(uint64_t param_1,float *param_2,float *param_3,float *param_4,
                       float *param_5)

{
  float *pfVar1;
  char cVar2;
  float *pfVar3;
  longlong lVar4;
  float fVar5;
  int8_t auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint64_t uStackX_8;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  int32_t uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  int32_t uStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  int32_t uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  int32_t uStack_cc;
  int32_t uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  
  pfVar1 = param_2 + 4;
  pfVar3 = param_2 + 6;
  fVar5 = param_2[8];
  fVar9 = fVar5 + param_3[8];
  lVar4 = 2;
  do {
    fVar7 = *(float *)(((longlong)param_2 - (longlong)pfVar1) + (longlong)pfVar3);
    fVar10 = *pfVar3;
    fVar13 = *(float *)(((longlong)param_3 - (longlong)pfVar1) + (longlong)pfVar3);
    fVar14 = fVar7;
    if (fVar7 <= fVar10) {
      fVar14 = fVar10;
    }
    fVar8 = *(float *)(((longlong)param_3 - (longlong)pfVar1) + 0x10 + (longlong)pfVar3);
    fVar11 = fVar13;
    if (fVar8 <= fVar13) {
      fVar11 = fVar8;
    }
    if (fVar14 + fVar9 < fVar11) goto LAB_180531d7c;
    if (fVar10 <= fVar7) {
      fVar7 = fVar10;
    }
    if (fVar13 <= fVar8) {
      fVar13 = fVar8;
    }
    if (fVar13 < fVar7 - fVar9) goto LAB_180531d7c;
    pfVar3 = pfVar3 + -1;
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  uStackX_8 = param_1;
  pfVar3 = (float *)FUN_1806457f0(param_2,pfVar1,fVar7 - fVar9,param_3 + 4,&fStack_f8,&fStack_108);
  fVar7 = fStack_f8 - fStack_108;
  fVar10 = fStack_f4 - fStack_104;
  fVar14 = fStack_f0 - fStack_100;
  fVar13 = fVar10 * fVar10 + fVar7 * fVar7 + fVar14 * fVar14;
  if (fVar9 * fVar9 < fVar13) {
LAB_180531d7c:
    return (ulonglong)pfVar3 & 0xffffffffffffff00;
  }
  param_4[9] = fVar13;
  fVar9 = param_3[8] / fVar9;
  fStack_e8 = fVar7 * fVar9 + fStack_108;
  fStack_e4 = fVar10 * fVar9 + fStack_104;
  fStack_e0 = fVar14 * fVar9 + fStack_100;
  if (fVar13 <= 1e-06) {
    fVar10 = 1.0;
    fVar7 = 0.0;
    fVar9 = 0.0;
  }
  else {
    auVar6 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
    fVar9 = auVar6._0_4_;
    fVar9 = fVar9 * 0.5 * (3.0 - fVar13 * fVar9 * fVar9);
    fVar7 = fVar7 * fVar9;
    fVar10 = fVar10 * fVar9;
    fVar9 = fVar9 * fVar14;
  }
  fVar14 = -fVar5;
  fVar8 = fVar7 * fVar14 + fStack_f8;
  fVar11 = fVar10 * fVar14 + fStack_f4;
  fVar14 = fVar9 * fVar14 + fStack_f0;
  fVar9 = fStack_e8 - fVar8;
  fVar10 = fStack_e4 - fVar11;
  fVar7 = fStack_e0 - fVar14;
  if (9e-06 <= fVar10 * fVar10 + fVar9 * fVar9 + fVar7 * fVar7) {
    uStack_dc = uStack_fc;
    fStack_d8 = fStack_e8 - *param_3;
    fStack_d4 = fStack_e4 - param_3[1];
    uStack_ec = 0x7f7fffff;
    fStack_d0 = fStack_e0 - param_3[2];
    uStack_cc = 0x7f7fffff;
    uStack_c8 = 0x42c80000;
    func_0x00018023a1e0(&fStack_d8,fStack_d8);
    fStack_c0 = *param_2;
    fStack_bc = param_2[1];
    fStack_b8 = param_2[2];
    fStack_b4 = param_2[3];
    fStack_b0 = *pfVar1;
    fStack_ac = param_2[5];
    fStack_a8 = param_2[6];
    fStack_a4 = param_2[7];
    fStack_a0 = fVar5;
    cVar2 = FUN_18063e220(&fStack_e8,&fStack_c0,&fStack_108,&uStackX_8);
    if (cVar2 != '\0') {
      *param_4 = fStack_108 - fStack_d8 * (float)uStackX_8;
      param_4[1] = fStack_104 - fStack_d4 * (float)uStackX_8;
      param_4[2] = fStack_100 - fStack_d0 * (float)uStackX_8;
      param_4[3] = 3.4028235e+38;
      goto LAB_180531a98;
    }
  }
  *(ulonglong *)param_4 = CONCAT44(fVar11,fVar8);
  *(ulonglong *)(param_4 + 2) = CONCAT44(0x7f7fffff,fVar14);
LAB_180531a98:
  fVar5 = *param_2;
  fVar9 = param_2[1];
  fVar8 = *pfVar1 - fVar5;
  fVar7 = param_2[2];
  fVar11 = param_2[5] - fVar9;
  fVar12 = param_2[6] - fVar7;
  fVar14 = (-1.0 / (fVar11 * fVar11 + fVar8 * fVar8 + fVar12 * fVar12)) *
           ((fVar5 - *param_4) * fVar8 + (fVar9 - param_4[1]) * fVar11 +
           (fVar7 - param_4[2]) * fVar12);
  fVar10 = 0.0;
  if ((0.0 <= fVar14) && (fVar10 = fVar14, 1.0 <= fVar14)) {
    fVar10 = 1.0;
  }
  fVar14 = *param_4 - (fVar8 * fVar10 + fVar5);
  fVar5 = param_4[1] - (fVar11 * fVar10 + fVar9);
  fVar10 = (param_4[2] - (fVar12 * fVar10 + fVar7)) * param_5[10];
  fVar9 = fVar14 * param_5[1] + fVar5 * param_5[5];
  fVar14 = fVar14 * *param_5 + fVar5 * param_5[4];
  fVar5 = fVar9 * fVar9 + fVar14 * fVar14 + fVar10 * fVar10;
  auVar6 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
  fVar7 = auVar6._0_4_;
  fVar5 = fVar7 * 0.5 * (3.0 - fVar5 * fVar7 * fVar7);
  param_4[4] = fVar14 * fVar5;
  param_4[5] = fVar9 * fVar5;
  param_4[6] = fVar10 * fVar5;
  param_4[7] = 3.4028235e+38;
  fVar5 = *param_4;
  fVar9 = param_5[5];
  fVar7 = param_5[1];
  fVar10 = param_5[10];
  fVar14 = param_5[0xd];
  fVar8 = param_5[0xe];
  *param_4 = fVar5 * *param_5 + param_4[1] * param_5[4] + param_5[0xc];
  param_4[1] = fVar5 * fVar7 + param_4[1] * fVar9 + fVar14;
  param_4[2] = fVar10 * param_4[2] + fVar8;
  param_4[3] = 3.4028235e+38;
  *(int8_t *)(param_4 + 8) = *(int8_t *)(param_2 + 0xb);
  if (param_2[10] * param_2[10] * 0.64000005 < fVar13) {
    fVar5 = param_2[9];
    fVar10 = *param_4 - fVar5 * param_4[4];
    *param_4 = fVar10;
    fVar7 = param_4[1] - param_4[5] * fVar5;
    fVar9 = param_4[2] - param_4[6] * fVar5;
    param_4[1] = fVar7;
    param_4[2] = fVar9;
    fVar5 = param_2[10] * 0.8;
    param_4[1] = param_4[5] * fVar5 + fVar7;
    *param_4 = fVar5 * param_4[4] + fVar10;
    param_4[2] = param_4[6] * fVar5 + fVar9;
  }
  return 1;
}



uint64_t FUN_180531851(uint64_t param_1,uint64_t param_2,float *param_3,float param_4)

{
  float *pfVar1;
  char cVar2;
  float *unaff_RBX;
  longlong unaff_RBP;
  float *unaff_RSI;
  float *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  float fVar3;
  float fVar4;
  float in_XMM2_Da;
  int8_t auVar5 [16];
  int8_t auVar6 [16];
  float in_XMM4_Da;
  float fVar7;
  float in_XMM5_Da;
  float fVar8;
  float fVar9;
  float unaff_XMM6_Da;
  float fVar10;
  float unaff_XMM7_Da;
  float fVar11;
  float fVar12;
  float unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  int32_t uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  int32_t uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  int32_t uStack000000000000007c;
  
  unaff_RBX[9] = unaff_XMM8_Da;
  fVar3 = param_3[8] / unaff_XMM6_Da;
  fStack0000000000000060 = in_XMM5_Da * fVar3 + in_XMM2_Da;
  fStack0000000000000064 = unaff_XMM7_Da * fVar3 + param_4;
  fStack0000000000000068 = unaff_XMM12_Da * fVar3 + in_XMM4_Da;
  if (in_CF || in_ZF) {
    fVar11 = 1.0;
    fVar8 = 0.0;
    fVar3 = 0.0;
  }
  else {
    auVar5._4_4_ = unaff_XMM8_Db;
    auVar5._0_4_ = unaff_XMM8_Da;
    auVar5._8_4_ = unaff_XMM8_Dc;
    auVar5._12_4_ = unaff_XMM8_Dd;
    auVar6._4_4_ = unaff_XMM8_Db;
    auVar6._0_4_ = unaff_XMM8_Da;
    auVar6._8_4_ = unaff_XMM8_Dc;
    auVar6._12_4_ = unaff_XMM8_Dd;
    auVar6 = rsqrtss(auVar5,auVar6);
    fVar3 = auVar6._0_4_;
    fVar3 = fVar3 * 0.5 * (3.0 - unaff_XMM8_Da * fVar3 * fVar3);
    fVar8 = in_XMM5_Da * fVar3;
    fVar11 = unaff_XMM7_Da * fVar3;
    fVar3 = fVar3 * unaff_XMM12_Da;
  }
  uStack000000000000003c = 0x7f7fffff;
  fVar4 = -unaff_XMM13_Da;
  fStack0000000000000030 = fVar8 * fVar4 + fStack0000000000000050;
  fStack0000000000000034 = fVar11 * fVar4 + fStack0000000000000054;
  fStack0000000000000038 = fVar3 * fVar4 + in_stack_00000058;
  if (9e-06 <= (fStack0000000000000064 - fStack0000000000000034) *
               (fStack0000000000000064 - fStack0000000000000034) +
               (fStack0000000000000060 - fStack0000000000000030) *
               (fStack0000000000000060 - fStack0000000000000030) +
               (fStack0000000000000068 - fStack0000000000000038) *
               (fStack0000000000000068 - fStack0000000000000038)) {
    fStack0000000000000070 = fStack0000000000000060 - *param_3;
    fStack0000000000000074 = fStack0000000000000064 - param_3[1];
    uStack000000000000005c = 0x7f7fffff;
    fStack0000000000000078 = fStack0000000000000068 - param_3[2];
    uStack000000000000007c = 0x7f7fffff;
    *(int32_t *)(unaff_RBP + -0x80) = 0x42c80000;
    func_0x00018023a1e0(&stack0x00000070,fStack0000000000000070,param_3,fStack0000000000000074);
    fVar3 = *unaff_RDI;
    fVar8 = unaff_RDI[1];
    fVar11 = unaff_RDI[2];
    fVar4 = unaff_RDI[3];
    fVar7 = *unaff_RSI;
    fVar9 = unaff_RSI[1];
    fVar10 = unaff_RSI[2];
    fVar12 = unaff_RSI[3];
    *(float *)(unaff_RBP + -0x58) = unaff_XMM13_Da;
    *(float *)(unaff_RBP + -0x78) = fVar3;
    *(float *)(unaff_RBP + -0x74) = fVar8;
    *(float *)(unaff_RBP + -0x70) = fVar11;
    *(float *)(unaff_RBP + -0x6c) = fVar4;
    *(float *)(unaff_RBP + -0x68) = fVar7;
    *(float *)(unaff_RBP + -100) = fVar9;
    *(float *)(unaff_RBP + -0x60) = fVar10;
    *(float *)(unaff_RBP + -0x5c) = fVar12;
    cVar2 = FUN_18063e220(&stack0x00000060,unaff_RBP + -0x78,&stack0x00000040,unaff_RBP + 0x50);
    if (cVar2 != '\0') {
      fVar3 = *(float *)(unaff_RBP + 0x50);
      *unaff_RBX = fStack0000000000000040 - fStack0000000000000070 * fVar3;
      unaff_RBX[1] = fStack0000000000000044 - fStack0000000000000074 * fVar3;
      unaff_RBX[2] = in_stack_00000048 - fStack0000000000000078 * fVar3;
      unaff_RBX[3] = 3.4028235e+38;
      goto LAB_180531a98;
    }
  }
  *(ulonglong *)unaff_RBX = CONCAT44(fStack0000000000000034,fStack0000000000000030);
  *(ulonglong *)(unaff_RBX + 2) = CONCAT44(uStack000000000000003c,fStack0000000000000038);
LAB_180531a98:
  fVar3 = *unaff_RDI;
  fVar8 = unaff_RDI[1];
  fVar9 = *unaff_RSI - fVar3;
  fVar11 = unaff_RDI[2];
  fVar10 = unaff_RSI[1] - fVar8;
  fVar12 = unaff_RSI[2] - fVar11;
  fVar7 = (-1.0 / (fVar10 * fVar10 + fVar9 * fVar9 + fVar12 * fVar12)) *
          ((fVar3 - *unaff_RBX) * fVar9 + (fVar8 - unaff_RBX[1]) * fVar10 +
          (fVar11 - unaff_RBX[2]) * fVar12);
  fVar4 = 0.0;
  if ((0.0 <= fVar7) && (fVar4 = fVar7, 1.0 <= fVar7)) {
    fVar4 = 1.0;
  }
  pfVar1 = *(float **)(unaff_RBP + 0x70);
  fVar7 = *unaff_RBX - (fVar9 * fVar4 + fVar3);
  fVar3 = unaff_RBX[1] - (fVar10 * fVar4 + fVar8);
  fVar4 = (unaff_RBX[2] - (fVar12 * fVar4 + fVar11)) * pfVar1[10];
  fVar8 = fVar7 * pfVar1[1] + fVar3 * pfVar1[5];
  fVar7 = fVar7 * *pfVar1 + fVar3 * pfVar1[4];
  fVar3 = fVar8 * fVar8 + fVar7 * fVar7 + fVar4 * fVar4;
  auVar6 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
  fVar11 = auVar6._0_4_;
  fVar3 = fVar11 * 0.5 * (3.0 - fVar3 * fVar11 * fVar11);
  unaff_RBX[4] = fVar7 * fVar3;
  unaff_RBX[5] = fVar8 * fVar3;
  unaff_RBX[6] = fVar4 * fVar3;
  unaff_RBX[7] = 3.4028235e+38;
  fVar3 = *unaff_RBX;
  fVar8 = pfVar1[5];
  fVar11 = pfVar1[1];
  fVar4 = pfVar1[10];
  fVar7 = pfVar1[0xd];
  fVar9 = pfVar1[0xe];
  *unaff_RBX = fVar3 * *pfVar1 + unaff_RBX[1] * pfVar1[4] + pfVar1[0xc];
  unaff_RBX[1] = fVar3 * fVar11 + unaff_RBX[1] * fVar8 + fVar7;
  unaff_RBX[2] = fVar4 * unaff_RBX[2] + fVar9;
  unaff_RBX[3] = 3.4028235e+38;
  *(int8_t *)(unaff_RBX + 8) = *(int8_t *)(unaff_RDI + 0xb);
  if (unaff_RDI[10] * unaff_RDI[10] * 0.64000005 < unaff_XMM8_Da) {
    fVar3 = unaff_RDI[9];
    fVar4 = *unaff_RBX - fVar3 * unaff_RBX[4];
    *unaff_RBX = fVar4;
    fVar11 = unaff_RBX[1] - unaff_RBX[5] * fVar3;
    fVar8 = unaff_RBX[2] - unaff_RBX[6] * fVar3;
    unaff_RBX[1] = fVar11;
    unaff_RBX[2] = fVar8;
    fVar3 = unaff_RDI[10] * 0.8;
    unaff_RBX[1] = unaff_RBX[5] * fVar3 + fVar11;
    *unaff_RBX = fVar3 * unaff_RBX[4] + fVar4;
    unaff_RBX[2] = unaff_RBX[6] * fVar3 + fVar8;
  }
  return 1;
}



int8_t FUN_180531cf0(void)

{
  float *unaff_RBX;
  longlong unaff_RDI;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(unaff_RDI + 0x24);
  fVar4 = *unaff_RBX - fVar1 * unaff_RBX[4];
  *unaff_RBX = fVar4;
  fVar3 = unaff_RBX[1] - unaff_RBX[5] * fVar1;
  fVar2 = unaff_RBX[2] - unaff_RBX[6] * fVar1;
  unaff_RBX[1] = fVar3;
  unaff_RBX[2] = fVar2;
  fVar1 = *(float *)(unaff_RDI + 0x28) * 0.8;
  unaff_RBX[1] = unaff_RBX[5] * fVar1 + fVar3;
  *unaff_RBX = fVar1 * unaff_RBX[4] + fVar4;
  unaff_RBX[2] = unaff_RBX[6] * fVar1 + fVar2;
  return 1;
}



ulonglong FUN_180531dc0(uint64_t param_1,float *param_2,longlong param_3,float *param_4,
                       float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  longlong lVar4;
  float *pfVar5;
  int8_t auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  
  pfVar1 = param_2 + 4;
  fVar13 = param_2[8];
  pfVar2 = param_2 + 6;
  fVar9 = fVar13 + *(float *)(param_3 + 0x20);
  lVar4 = 2;
  do {
    fVar11 = *(float *)(((longlong)param_2 - (longlong)pfVar1) + (longlong)pfVar2);
    fVar10 = *pfVar2;
    fVar7 = *(float *)((param_3 - (longlong)pfVar1) + (longlong)pfVar2);
    fVar8 = fVar11;
    if (fVar11 <= fVar10) {
      fVar8 = fVar10;
    }
    fVar12 = *(float *)((param_3 - (longlong)pfVar1) + 0x10 + (longlong)pfVar2);
    fVar14 = fVar7;
    if (fVar12 <= fVar7) {
      fVar14 = fVar12;
    }
    if (fVar8 + fVar9 < fVar14) goto LAB_1805322cb;
    if (fVar10 <= fVar11) {
      fVar11 = fVar10;
    }
    if (fVar7 <= fVar12) {
      fVar7 = fVar12;
    }
    if (fVar7 < fVar11 - fVar9) goto LAB_1805322cb;
    pfVar2 = pfVar2 + -1;
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  pfVar5 = param_2;
  pfVar2 = (float *)FUN_1806457f0(param_2,pfVar1,fVar11 - fVar9,param_3 + 0x10,&fStack_c8,&fStack_b8
                                 );
  fStack_b0 = fStack_c0 - fStack_b0;
  fStack_b8 = fStack_c8 - fStack_b8;
  fStack_b4 = fStack_c4 - fStack_b4;
  fVar11 = fStack_b4 * fStack_b4 + fStack_b8 * fStack_b8 + fStack_b0 * fStack_b0;
  if (fVar9 * fVar9 < fVar11) {
LAB_1805322cb:
    uVar3 = (ulonglong)pfVar2 & 0xffffffffffffff00;
  }
  else {
    param_4[9] = fVar11;
    if (fVar11 <= 1e-06) {
      fStack_b8 = 0.0;
      fVar9 = 1.0;
      fStack_b0 = 0.0;
    }
    else {
      auVar6 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
      fVar9 = auVar6._0_4_;
      fVar9 = fVar9 * 0.5 * (3.0 - fVar11 * fVar9 * fVar9);
      fStack_b0 = fStack_b0 * fVar9;
      fStack_b8 = fVar9 * fStack_b8;
      fVar9 = fVar9 * fStack_b4;
    }
    fVar13 = -fVar13;
    fStack_c8 = fStack_b8 * fVar13 + fStack_c8;
    fStack_c4 = fVar9 * fVar13 + fStack_c4;
    fStack_c0 = fStack_b0 * fVar13 + fStack_c0;
    *param_4 = fStack_c8;
    param_4[1] = fStack_c4;
    param_4[2] = fStack_c0;
    param_4[3] = 3.4028235e+38;
    fVar13 = *pfVar5;
    fVar9 = pfVar5[1];
    fVar8 = *pfVar1 - fVar13;
    fVar12 = param_2[5] - fVar9;
    fVar14 = param_2[6] - pfVar5[2];
    fVar7 = (-1.0 / (fVar12 * fVar12 + fVar8 * fVar8 + fVar14 * fVar14)) *
            ((fVar9 - param_4[1]) * fVar12 + (fVar13 - *param_4) * fVar8 +
            (pfVar5[2] - param_4[2]) * fVar14);
    fVar10 = 0.0;
    if ((0.0 <= fVar7) && (fVar10 = fVar7, 1.0 <= fVar7)) {
      fVar10 = 1.0;
    }
    fStack_c8 = fStack_c8 - (fVar8 * fVar10 + fVar13);
    fStack_c4 = fStack_c4 - (fVar12 * fVar10 + fVar9);
    fVar7 = (fStack_c0 - (fVar14 * fVar10 + pfVar5[2])) * param_5[10];
    fVar10 = fStack_c8 * *param_5 + fStack_c4 * param_5[4];
    fVar8 = fStack_c8 * param_5[1] + fStack_c4 * param_5[5];
    fVar13 = fVar10 * fVar10 + fVar8 * fVar8 + fVar7 * fVar7;
    auVar6 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
    fVar9 = auVar6._0_4_;
    fVar13 = fVar9 * 0.5 * (3.0 - fVar13 * fVar9 * fVar9);
    param_4[4] = fVar13 * fVar10;
    param_4[5] = fVar8 * fVar13;
    param_4[6] = fVar7 * fVar13;
    param_4[7] = 3.4028235e+38;
    fVar13 = *param_4;
    fVar9 = param_5[1];
    fVar10 = param_5[5];
    fVar7 = param_5[10];
    fVar8 = param_5[0xd];
    fVar12 = param_5[0xe];
    *param_4 = param_4[1] * param_5[4] + fVar13 * *param_5 + param_5[0xc];
    param_4[1] = param_4[1] * fVar10 + fVar13 * fVar9 + fVar8;
    param_4[2] = fVar7 * param_4[2] + fVar12;
    param_4[3] = 3.4028235e+38;
    *(int8_t *)(param_4 + 8) = *(int8_t *)(pfVar5 + 0xb);
    if (pfVar5[10] * pfVar5[10] * 0.64000005 < fVar11) {
      fVar13 = pfVar5[9];
      fVar10 = *param_4 - fVar13 * param_4[4];
      *param_4 = fVar10;
      fVar11 = param_4[1] - param_4[5] * fVar13;
      fVar9 = param_4[2] - param_4[6] * fVar13;
      param_4[1] = fVar11;
      param_4[2] = fVar9;
      fVar13 = pfVar5[10] * 0.8;
      param_4[1] = param_4[5] * fVar13 + fVar11;
      *param_4 = fVar13 * param_4[4] + fVar10;
      param_4[2] = fVar13 * param_4[6] + fVar9;
    }
    uVar3 = 1;
  }
  return uVar3;
}



uint64_t FUN_180531f03(void)

{
  float *pfVar1;
  float *unaff_RBX;
  longlong unaff_RBP;
  float *in_R10;
  float *in_R11;
  bool in_CF;
  bool in_ZF;
  int8_t auVar2 [16];
  int8_t auVar3 [16];
  float fVar4;
  float in_XMM5_Da;
  float fVar5;
  float unaff_XMM7_Da;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_XMM11_Da;
  float fVar12;
  float unaff_XMM12_Da;
  float fVar13;
  float fVar14;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  
  in_R10[9] = unaff_XMM8_Da;
  if (in_CF || in_ZF) {
    fVar9 = 0.0;
    fVar4 = 1.0;
    fVar6 = 0.0;
  }
  else {
    auVar2._4_4_ = unaff_XMM8_Db;
    auVar2._0_4_ = unaff_XMM8_Da;
    auVar2._8_4_ = unaff_XMM8_Dc;
    auVar2._12_4_ = unaff_XMM8_Dd;
    auVar3._4_4_ = unaff_XMM8_Db;
    auVar3._0_4_ = unaff_XMM8_Da;
    auVar3._8_4_ = unaff_XMM8_Dc;
    auVar3._12_4_ = unaff_XMM8_Dd;
    auVar3 = rsqrtss(auVar2,auVar3);
    fVar4 = auVar3._0_4_;
    fVar4 = fVar4 * 0.5 * (3.0 - unaff_XMM8_Da * fVar4 * fVar4);
    fVar6 = unaff_XMM7_Da * fVar4;
    fVar9 = fVar4 * in_XMM5_Da;
    fVar4 = fVar4 * unaff_XMM11_Da;
  }
  fVar13 = -unaff_XMM12_Da;
  *(int32_t *)(unaff_RBP + -0x65) = 0x7f7fffff;
  fVar8 = *(float *)(unaff_RBP + -0x65);
  fVar10 = fVar9 * fVar13 + unaff_XMM14_Da;
  fVar11 = fVar4 * fVar13 + unaff_XMM15_Da;
  fVar7 = fVar6 * fVar13 + *(float *)(unaff_RBP + -0x69);
  *in_R10 = fVar10;
  in_R10[1] = fVar11;
  in_R10[2] = fVar7;
  in_R10[3] = fVar8;
  fVar4 = *in_R11;
  fVar6 = in_R11[1];
  fVar5 = *unaff_RBX - fVar4;
  fVar12 = unaff_RBX[1] - fVar6;
  fVar14 = unaff_RBX[2] - in_R11[2];
  fVar9 = in_R10[1];
  *(float *)(unaff_RBP + -0x71) = fVar10;
  *(float *)(unaff_RBP + -0x6d) = fVar11;
  *(float *)(unaff_RBP + -0x69) = fVar7;
  *(float *)(unaff_RBP + -0x65) = fVar8;
  fVar8 = in_R11[2];
  fVar13 = (-1.0 / (fVar12 * fVar12 + fVar5 * fVar5 + fVar14 * fVar14)) *
           ((fVar6 - fVar9) * fVar12 + (fVar4 - *in_R10) * fVar5 + (fVar8 - in_R10[2]) * fVar14);
  fVar9 = 0.0;
  if ((0.0 <= fVar13) && (fVar9 = fVar13, 1.0 <= fVar13)) {
    fVar9 = 1.0;
  }
  pfVar1 = *(float **)(unaff_RBP + 0x7f);
  *(int32_t *)(unaff_RBP + -0x65) = 0x7f7fffff;
  fVar13 = *(float *)(unaff_RBP + -0x65);
  fVar10 = fVar10 - (fVar5 * fVar9 + fVar4);
  fVar11 = fVar11 - (fVar12 * fVar9 + fVar6);
  fVar8 = (fVar7 - (fVar14 * fVar9 + fVar8)) * pfVar1[10];
  fVar9 = fVar10 * *pfVar1 + fVar11 * pfVar1[4];
  fVar5 = fVar10 * pfVar1[1] + fVar11 * pfVar1[5];
  *(float *)(unaff_RBP + -0x71) = fVar9;
  *(float *)(unaff_RBP + -0x6d) = fVar5;
  *(float *)(unaff_RBP + -0x69) = fVar8;
  *(float *)(unaff_RBP + -0x65) = fVar13;
  *(int32_t *)(unaff_RBP + -0x65) = 0x7f7fffff;
  fVar4 = fVar9 * fVar9 + fVar5 * fVar5 + fVar8 * fVar8;
  auVar3 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
  fVar6 = auVar3._0_4_;
  fVar4 = fVar6 * 0.5 * (3.0 - fVar4 * fVar6 * fVar6);
  in_R10[4] = fVar4 * fVar9;
  in_R10[5] = fVar5 * fVar4;
  in_R10[6] = fVar8 * fVar4;
  in_R10[7] = fVar13;
  fVar4 = *in_R10;
  fVar6 = pfVar1[1];
  fVar9 = pfVar1[5];
  fVar7 = *(float *)(unaff_RBP + -0x65);
  fVar8 = pfVar1[10];
  fVar13 = pfVar1[0xd];
  fVar5 = pfVar1[0xe];
  *in_R10 = in_R10[1] * pfVar1[4] + fVar4 * *pfVar1 + pfVar1[0xc];
  in_R10[1] = in_R10[1] * fVar9 + fVar4 * fVar6 + fVar13;
  in_R10[2] = fVar8 * in_R10[2] + fVar5;
  in_R10[3] = fVar7;
  *(int8_t *)(in_R10 + 8) = *(int8_t *)(in_R11 + 0xb);
  if (in_R11[10] * in_R11[10] * 0.64000005 < unaff_XMM8_Da) {
    fVar4 = in_R11[9];
    fVar8 = *in_R10 - fVar4 * in_R10[4];
    *in_R10 = fVar8;
    fVar9 = in_R10[1] - in_R10[5] * fVar4;
    fVar6 = in_R10[2] - in_R10[6] * fVar4;
    in_R10[1] = fVar9;
    in_R10[2] = fVar6;
    fVar4 = in_R11[10] * 0.8;
    in_R10[1] = in_R10[5] * fVar4 + fVar9;
    *in_R10 = fVar4 * in_R10[4] + fVar8;
    in_R10[2] = fVar4 * in_R10[6] + fVar6;
  }
  return 1;
}



int8_t FUN_180532232(void)

{
  float *in_R10;
  longlong in_R11;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(in_R11 + 0x24);
  fVar4 = *in_R10 - fVar1 * in_R10[4];
  *in_R10 = fVar4;
  fVar3 = in_R10[1] - in_R10[5] * fVar1;
  fVar2 = in_R10[2] - in_R10[6] * fVar1;
  in_R10[1] = fVar3;
  in_R10[2] = fVar2;
  fVar1 = *(float *)(in_R11 + 0x28) * 0.8;
  in_R10[1] = in_R10[5] * fVar1 + fVar3;
  *in_R10 = fVar1 * in_R10[4] + fVar4;
  in_R10[2] = fVar1 * in_R10[6] + fVar2;
  return 1;
}



uint64_t FUN_180532320(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)(param_1 + 0x198);
  iVar2 = 0;
  do {
    if ((longlong *)*plVar3 != (longlong *)0x0) {
      iVar1 = (**(code **)(*(longlong *)*plVar3 + 0x18))();
      if (iVar1 == 4) {
        return *(uint64_t *)(param_1 + 0x198 + (longlong)iVar2 * 8);
      }
    }
    iVar2 = iVar2 + 1;
    plVar3 = plVar3 + 1;
  } while (iVar2 < 2);
  return 0;
}





