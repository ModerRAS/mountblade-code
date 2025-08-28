#include "TaleWorlds.Native.Split.h"

// 99_part_09_part015.c - 15 个函数

// 函数: void FUN_1805c3976(int64_t param_1)
void FUN_1805c3976(int64_t param_1)

{
  float *pfVar1;
  int64_t lVar2;
  uint uVar3;
  int64_t *unaff_RBX;
  int64_t unaff_R14;
  float fVar4;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  
  fVar4 = (float)(*(int64_t *)(unaff_R14 + (int64_t)*(int *)(param_1 + 0x6c0) * 8) -
                 *(int64_t *)(param_1 + 0x6b8)) * 1e-05;
  if (*(float *)(unaff_RBX + 0x290) <= fVar4 && fVar4 != *(float *)(unaff_RBX + 0x290)) {
    lVar2 = FUN_18065cec0(*(int64_t *)
                           (*(int64_t *)(*(int64_t *)(param_1 + 0x590) + 0x2590) + 0xc78) + 0x60,0
                         );
    *(float *)((int64_t)unaff_RBX + 0x2204) = *(float *)(lVar2 + 0x10) * 0.9;
    uVar3 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar3 = uVar3 ^ uVar3 >> 0x11;
    uVar3 = uVar3 ^ uVar3 << 5;
    *(uint *)(unaff_RBX + 0x272) = uVar3;
    if (*(float *)(unaff_RBX + 0x296) <= (float)(uVar3 - 1) * 2.3283064e-10) {
      fVar4 = *(float *)(unaff_RBX + 0x296) + 0.003;
      if (0.05 <= fVar4) {
        fVar4 = 0.05;
      }
      *(float *)(unaff_RBX + 0x296) = fVar4;
    }
    else {
      pfVar1 = (float *)(*(int64_t *)(*unaff_RBX + 0x20) + 0x234);
      if ((*pfVar1 <= unaff_XMM6_Da * 0.1 && unaff_XMM6_Da * 0.1 != *pfVar1) ||
         (unaff_XMM7_Da < unaff_XMM6_Da * unaff_XMM6_Da * 0.25)) {
                    // WARNING: Subroutine does not return
        AdvancedSystemController(*(int32_t *)(*(int64_t *)(*unaff_RBX + 0x20) + 0x34));
      }
    }
  }
  return;
}






// 函数: void FUN_1805c3a66(void)
void FUN_1805c3a66(void)

{
                    // WARNING: Subroutine does not return
  AdvancedSystemController();
}






// 函数: void FUN_1805c3ca9(void)
void FUN_1805c3ca9(void)

{
  int64_t unaff_RBX;
  
  *(int32_t *)(unaff_RBX + 0x14b0) = 0x3c23d70a;
  return;
}






// 函数: void FUN_1805c3cbc(void)
void FUN_1805c3cbc(void)

{
  return;
}






// 函数: void FUN_1805c3ccc(void)
void FUN_1805c3ccc(void)

{
  return;
}






// 函数: void FUN_1805c3ce4(uint64_t param_1,float param_2)
void FUN_1805c3ce4(uint64_t param_1,float param_2)

{
  int64_t unaff_RBX;
  
  param_2 = param_2 + 0.003;
  if (0.05 <= param_2) {
    param_2 = 0.05;
  }
  *(float *)(unaff_RBX + 0x14b0) = param_2;
  return;
}






// 函数: void FUN_1805c3cfe(uint64_t param_1)
void FUN_1805c3cfe(uint64_t param_1)

{
  uint64_t uVar1;
  char cVar2;
  uint in_EAX;
  uint64_t *puVar3;
  int64_t unaff_RBX;
  uint64_t *unaff_RDI;
  uint64_t in_R11;
  
  if ((*(uint *)(unaff_RBX + 0x1484) & 2) == 0) {
    if ((*(uint *)(unaff_RBX + 0x1484) & 1) != 0) {
      *unaff_RDI = *(uint64_t *)(unaff_RBX + 0x13d8);
      uVar1 = *(uint64_t *)(unaff_RBX + 0x13f8);
      unaff_RDI[3] = *(uint64_t *)(unaff_RBX + 0x13f0);
      unaff_RDI[4] = uVar1;
      uVar1 = *(uint64_t *)(unaff_RBX + 0x1408);
      unaff_RDI[5] = *(uint64_t *)(unaff_RBX + 0x1400);
      unaff_RDI[6] = uVar1;
      unaff_RDI[1] = *(uint64_t *)(unaff_RBX + 0x13e0);
      unaff_RDI[2] = *(uint64_t *)(unaff_RBX + 0x13e8);
      unaff_RDI[7] = *(uint64_t *)(unaff_RBX + 0x1410);
      *(int32_t *)(unaff_RDI + 8) = *(int32_t *)(unaff_RBX + 0x1418);
      return;
    }
    if (((in_EAX >> 9 & 1) != 0) && (*(char *)(unaff_RBX + 0x14d8) != '\0')) {
      *unaff_RDI = *(uint64_t *)(unaff_RBX + 0x14f0);
      uVar1 = *(uint64_t *)(unaff_RBX + 0x1510);
      unaff_RDI[3] = *(uint64_t *)(unaff_RBX + 0x1508);
      unaff_RDI[4] = uVar1;
      uVar1 = *(uint64_t *)(unaff_RBX + 0x1520);
      unaff_RDI[5] = *(uint64_t *)(unaff_RBX + 0x1518);
      unaff_RDI[6] = uVar1;
      unaff_RDI[1] = *(uint64_t *)(unaff_RBX + 0x14f8);
      unaff_RDI[2] = *(uint64_t *)(unaff_RBX + 0x1500);
      unaff_RDI[7] = *(uint64_t *)(unaff_RBX + 0x1528);
      *(int32_t *)(unaff_RDI + 8) = *(int32_t *)(unaff_RBX + 0x1530);
      return;
    }
  }
  else {
    if (((((in_EAX >> 9 & 1) != 0) && (*(char *)(unaff_RBX + 0x14d8) != '\0')) &&
        ((param_1 & 3) == 0)) && ((*(byte *)(unaff_RBX + 0x209c) & 1) == 0)) {
      *unaff_RDI = *(uint64_t *)(unaff_RBX + 0x14f0);
      uVar1 = *(uint64_t *)(unaff_RBX + 0x1510);
      unaff_RDI[3] = *(uint64_t *)(unaff_RBX + 0x1508);
      unaff_RDI[4] = uVar1;
      uVar1 = *(uint64_t *)(unaff_RBX + 0x1520);
      unaff_RDI[5] = *(uint64_t *)(unaff_RBX + 0x1518);
      unaff_RDI[6] = uVar1;
      unaff_RDI[1] = *(uint64_t *)(unaff_RBX + 0x14f8);
      unaff_RDI[2] = *(uint64_t *)(unaff_RBX + 0x1500);
      unaff_RDI[7] = *(uint64_t *)(unaff_RBX + 0x1528);
      *(int32_t *)(unaff_RDI + 8) = *(int32_t *)(unaff_RBX + 0x1530);
      return;
    }
    cVar2 = func_0x000180522f60();
    if (cVar2 != '\0') {
      *unaff_RDI = *(uint64_t *)(unaff_RBX + 0x1c0);
      uVar1 = *(uint64_t *)(unaff_RBX + 0x1e0);
      unaff_RDI[3] = *(uint64_t *)(unaff_RBX + 0x1d8);
      unaff_RDI[4] = uVar1;
      uVar1 = *(uint64_t *)(unaff_RBX + 0x1f0);
      unaff_RDI[5] = *(uint64_t *)(unaff_RBX + 0x1e8);
      unaff_RDI[6] = uVar1;
      unaff_RDI[1] = *(uint64_t *)(unaff_RBX + 0x1c8);
      unaff_RDI[2] = *(uint64_t *)(unaff_RBX + 0x1d0);
      unaff_RDI[7] = *(uint64_t *)(unaff_RBX + 0x1f8);
      *(int32_t *)(unaff_RDI + 8) = *(int32_t *)(unaff_RBX + 0x200);
      return;
    }
  }
  puVar3 = (uint64_t *)FUN_180516f50(in_R11,&stack0x00000040);
  *unaff_RDI = *puVar3;
  uVar1 = puVar3[4];
  unaff_RDI[3] = puVar3[3];
  unaff_RDI[4] = uVar1;
  uVar1 = puVar3[6];
  unaff_RDI[5] = puVar3[5];
  unaff_RDI[6] = uVar1;
  unaff_RDI[1] = puVar3[1];
  unaff_RDI[2] = puVar3[2];
  unaff_RDI[7] = puVar3[7];
  *(int32_t *)(unaff_RDI + 8) = *(int32_t *)(puVar3 + 8);
  return;
}






// 函数: void FUN_1805c3ee0(int64_t *param_1,int64_t *param_2,uint64_t param_3)
void FUN_1805c3ee0(int64_t *param_1,int64_t *param_2,uint64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  char cVar5;
  int32_t uVar6;
  int64_t *plVar7;
  uint uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  float fVar13;
  uint64_t auStackX_18 [2];
  int8_t auStack_98 [128];
  
  lVar10 = *param_1;
  auStackX_18[0] = param_3;
  if ((*(uint *)(lVar10 + 0x56c) & 0x20000) == 0) {
    if (*(int *)(lVar10 + 0x920) == 1) {
      *param_2 = *(int64_t *)(lVar10 + 0x928);
      lVar9 = *(int64_t *)(lVar10 + 0x948);
      param_2[3] = *(int64_t *)(lVar10 + 0x940);
      param_2[4] = lVar9;
      lVar9 = *(int64_t *)(lVar10 + 0x958);
      param_2[5] = *(int64_t *)(lVar10 + 0x950);
      param_2[6] = lVar9;
      param_2[1] = *(int64_t *)(lVar10 + 0x930);
      param_2[2] = *(int64_t *)(lVar10 + 0x938);
      param_2[7] = *(int64_t *)(lVar10 + 0x960);
      *(int32_t *)(param_2 + 8) = *(int32_t *)(lVar10 + 0x968);
    }
    else {
      lVar9 = *(int64_t *)(lVar10 + 0x9d8);
      lVar11 = *(int64_t *)(lVar10 + 0x20);
      if ((lVar9 == 0) || (cVar5 = FUN_18038d0a0(lVar9,lVar11 + 0xc), lVar12 = lVar9, cVar5 == '\0')
         ) {
        lVar12 = 0;
      }
      lVar1 = *(int64_t *)(lVar11 + 0xc);
      lVar2 = *(int64_t *)(lVar11 + 0x14);
      lVar3 = *(int64_t *)(lVar11 + 0xb0);
      lVar11 = *(int64_t *)(lVar11 + 0xb8);
      *param_2 = *(int64_t *)(*(int64_t *)(lVar10 + 0x8d8) + 0x18);
      param_2[3] = lVar1;
      param_2[4] = lVar2;
      param_2[1] = lVar12;
      param_2[5] = lVar3;
      param_2[6] = lVar11;
      param_2[2] = lVar9;
      param_2[7] = lVar1;
      *(int32_t *)(param_2 + 8) = 3;
    }
  }
  else {
    if (((*(int64_t *)(lVar10 + 0x928) == 0) ||
        (cVar5 = FUN_180488880(lVar10 + 0x940), cVar5 == '\0')) ||
       (120.0 <= (float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(*param_1 + 0x978) * 8) -
                        *(int64_t *)(*param_1 + 0x970)) * 1e-05)) {
      *(int8_t *)((int64_t)param_1 + 0x21fe) = 1;
    }
    if ((*(byte *)((int64_t)param_1 + 0x1484) & 2) == 0) {
      uVar8 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
      uVar8 = uVar8 ^ uVar8 >> 0x11;
      uVar8 = uVar8 ^ uVar8 << 5;
      *(uint *)(param_1 + 0x272) = uVar8;
      if (0.1 <= (float)(uVar8 - 1) * 2.3283064e-10) {
        uVar8 = uVar8 << 0xd ^ uVar8;
        uVar8 = uVar8 ^ uVar8 >> 0x11;
        uVar8 = uVar8 ^ uVar8 << 5;
        *(uint *)(param_1 + 0x272) = uVar8;
        lVar10 = *param_1;
        if ((float)(uVar8 - 1) * 2.3283064e-10 < 0.05) {
                    // WARNING: Subroutine does not return
          AdvancedSystemController(*(int32_t *)(*(int64_t *)(lVar10 + 0x20) + 0x34));
        }
        if (*(int *)(lVar10 + 0x920) == 1) {
          *param_2 = *(int64_t *)(lVar10 + 0x928);
          lVar9 = *(int64_t *)(lVar10 + 0x948);
          param_2[3] = *(int64_t *)(lVar10 + 0x940);
          param_2[4] = lVar9;
          lVar9 = *(int64_t *)(lVar10 + 0x958);
          param_2[5] = *(int64_t *)(lVar10 + 0x950);
          param_2[6] = lVar9;
          param_2[1] = *(int64_t *)(lVar10 + 0x930);
          param_2[2] = *(int64_t *)(lVar10 + 0x938);
          param_2[7] = *(int64_t *)(lVar10 + 0x960);
          uVar6 = *(int32_t *)(lVar10 + 0x968);
        }
        else {
          *param_2 = param_1[0x38];
          lVar10 = param_1[0x3c];
          param_2[3] = param_1[0x3b];
          param_2[4] = lVar10;
          lVar10 = param_1[0x3e];
          param_2[5] = param_1[0x3d];
          param_2[6] = lVar10;
          param_2[1] = param_1[0x39];
          param_2[2] = param_1[0x3a];
          param_2[7] = param_1[0x3f];
          uVar6 = (int32_t)param_1[0x40];
        }
        *(int32_t *)(param_2 + 8) = uVar6;
      }
      else {
        lVar10 = *param_1;
        lVar9 = *(int64_t *)(lVar10 + 0x20);
        fVar13 = *(float *)(lVar9 + 0x84) * 0.2;
        if (fVar13 < *(float *)(lVar9 + 0x238) || fVar13 == *(float *)(lVar9 + 0x238)) {
          if ((*(uint *)(lVar10 + 0x56c) & 0x800) == 0) {
            FUN_180599750(lVar9,auStackX_18);
          }
                    // WARNING: Subroutine does not return
          AdvancedSystemController(*(int32_t *)(lVar9 + 0x34));
        }
        plVar7 = (int64_t *)FUN_180516f50(lVar10,auStack_98);
        *param_2 = *plVar7;
        lVar10 = plVar7[4];
        param_2[3] = plVar7[3];
        param_2[4] = lVar10;
        lVar10 = plVar7[6];
        param_2[5] = plVar7[5];
        param_2[6] = lVar10;
        param_2[1] = plVar7[1];
        param_2[2] = plVar7[2];
        param_2[7] = plVar7[7];
        *(int *)(param_2 + 8) = (int)plVar7[8];
      }
    }
    else {
      if ((*(int64_t *)(*param_1 + 0x928) == 0) ||
         (cVar5 = FUN_180488880(*param_1 + 0x940), cVar5 == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      lVar10 = *param_1;
      if (!bVar4) {
                    // WARNING: Subroutine does not return
        AdvancedSystemController(*(int32_t *)(*(int64_t *)(lVar10 + 0x20) + 0x34));
      }
      *param_2 = *(int64_t *)(lVar10 + 0x928);
      lVar9 = *(int64_t *)(lVar10 + 0x948);
      param_2[3] = *(int64_t *)(lVar10 + 0x940);
      param_2[4] = lVar9;
      lVar9 = *(int64_t *)(lVar10 + 0x958);
      param_2[5] = *(int64_t *)(lVar10 + 0x950);
      param_2[6] = lVar9;
      param_2[1] = *(int64_t *)(lVar10 + 0x930);
      param_2[2] = *(int64_t *)(lVar10 + 0x938);
      param_2[7] = *(int64_t *)(lVar10 + 0x960);
      *(int32_t *)(param_2 + 8) = *(int32_t *)(lVar10 + 0x968);
      *(uint *)((int64_t)param_1 + 0x1484) = *(uint *)((int64_t)param_1 + 0x1484) & 0xfffffffd;
      *(int8_t *)((int64_t)param_1 + 0x2201) = 1;
      if ((*(uint *)(*param_1 + 0x56c) & 0x800) == 0) {
        *(uint *)(param_1 + 0x27a) = *(uint *)(param_1 + 0x27a) | 0x10000;
      }
    }
    *(int32_t *)(param_1 + 0x290) = 0;
    *(int32_t *)((int64_t)param_1 + 0x2204) = 0xbf800000;
  }
  return;
}






// 函数: void FUN_1805c40dc(uint64_t param_1,uint param_2)
void FUN_1805c40dc(uint64_t param_1,uint param_2)

{
  int64_t lVar1;
  int32_t uVar2;
  int64_t *plVar3;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_RDI;
  int64_t lVar4;
  int32_t unaff_R14D;
  float fVar5;
  float in_XMM1_Da;
  
  param_2 = param_2 ^ param_2 >> 0x11;
  param_2 = param_2 ^ param_2 << 5;
  *(uint *)(unaff_RDI + 0x272) = param_2;
  if (0.1 <= (float)(param_2 - 1) * in_XMM1_Da) {
    param_2 = param_2 << 0xd ^ param_2;
    param_2 = param_2 ^ param_2 >> 0x11;
    param_2 = param_2 ^ param_2 << 5;
    *(uint *)(unaff_RDI + 0x272) = param_2;
    lVar1 = *unaff_RDI;
    if ((float)(param_2 - 1) * in_XMM1_Da < 0.05) {
                    // WARNING: Subroutine does not return
      AdvancedSystemController(*(int32_t *)(*(int64_t *)(lVar1 + 0x20) + 0x34));
    }
    if (*(int *)(lVar1 + 0x920) == 1) {
      *unaff_RBX = *(int64_t *)(lVar1 + 0x928);
      lVar4 = *(int64_t *)(lVar1 + 0x948);
      unaff_RBX[3] = *(int64_t *)(lVar1 + 0x940);
      unaff_RBX[4] = lVar4;
      lVar4 = *(int64_t *)(lVar1 + 0x958);
      unaff_RBX[5] = *(int64_t *)(lVar1 + 0x950);
      unaff_RBX[6] = lVar4;
      unaff_RBX[1] = *(int64_t *)(lVar1 + 0x930);
      unaff_RBX[2] = *(int64_t *)(lVar1 + 0x938);
      unaff_RBX[7] = *(int64_t *)(lVar1 + 0x960);
      uVar2 = *(int32_t *)(lVar1 + 0x968);
    }
    else {
      *unaff_RBX = unaff_RDI[0x38];
      lVar1 = unaff_RDI[0x3c];
      unaff_RBX[3] = unaff_RDI[0x3b];
      unaff_RBX[4] = lVar1;
      lVar1 = unaff_RDI[0x3e];
      unaff_RBX[5] = unaff_RDI[0x3d];
      unaff_RBX[6] = lVar1;
      unaff_RBX[1] = unaff_RDI[0x39];
      unaff_RBX[2] = unaff_RDI[0x3a];
      unaff_RBX[7] = unaff_RDI[0x3f];
      uVar2 = (int32_t)unaff_RDI[0x40];
    }
    *(int32_t *)(unaff_RBX + 8) = uVar2;
  }
  else {
    lVar1 = *unaff_RDI;
    lVar4 = *(int64_t *)(lVar1 + 0x20);
    fVar5 = *(float *)(lVar4 + 0x84) * 0.2;
    if (fVar5 < *(float *)(lVar4 + 0x238) || fVar5 == *(float *)(lVar4 + 0x238)) {
      if ((*(uint *)(lVar1 + 0x56c) & 0x800) == 0) {
        FUN_180599750(lVar4,unaff_RBP + 0x77);
      }
                    // WARNING: Subroutine does not return
      AdvancedSystemController(*(int32_t *)(lVar4 + 0x34));
    }
    plVar3 = (int64_t *)FUN_180516f50(lVar1,unaff_RBP + -0x39);
    *unaff_RBX = *plVar3;
    lVar1 = plVar3[4];
    unaff_RBX[3] = plVar3[3];
    unaff_RBX[4] = lVar1;
    lVar1 = plVar3[6];
    unaff_RBX[5] = plVar3[5];
    unaff_RBX[6] = lVar1;
    unaff_RBX[1] = plVar3[1];
    unaff_RBX[2] = plVar3[2];
    unaff_RBX[7] = plVar3[7];
    *(int *)(unaff_RBX + 8) = (int)plVar3[8];
  }
  *(int32_t *)(unaff_RDI + 0x290) = unaff_R14D;
  *(int32_t *)((int64_t)unaff_RDI + 0x2204) = 0xbf800000;
  return;
}






// 函数: void FUN_1805c426a(int param_1,uint param_2)
void FUN_1805c426a(int param_1,uint param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int32_t uVar3;
  int64_t *unaff_RBX;
  int64_t *unaff_RDI;
  int32_t unaff_R14D;
  float in_XMM1_Da;
  
  param_2 = param_1 << 0xd ^ param_2;
  param_2 = param_2 ^ param_2 >> 0x11;
  param_2 = param_2 ^ param_2 << 5;
  *(uint *)(unaff_RDI + 0x272) = param_2;
  lVar1 = *unaff_RDI;
  if ((float)(param_2 - 1) * in_XMM1_Da < 0.05) {
                    // WARNING: Subroutine does not return
    AdvancedSystemController(*(int32_t *)(*(int64_t *)(lVar1 + 0x20) + 0x34));
  }
  if (*(int *)(lVar1 + 0x920) == 1) {
    *unaff_RBX = *(int64_t *)(lVar1 + 0x928);
    lVar2 = *(int64_t *)(lVar1 + 0x948);
    unaff_RBX[3] = *(int64_t *)(lVar1 + 0x940);
    unaff_RBX[4] = lVar2;
    lVar2 = *(int64_t *)(lVar1 + 0x958);
    unaff_RBX[5] = *(int64_t *)(lVar1 + 0x950);
    unaff_RBX[6] = lVar2;
    unaff_RBX[1] = *(int64_t *)(lVar1 + 0x930);
    unaff_RBX[2] = *(int64_t *)(lVar1 + 0x938);
    unaff_RBX[7] = *(int64_t *)(lVar1 + 0x960);
    uVar3 = *(int32_t *)(lVar1 + 0x968);
  }
  else {
    *unaff_RBX = unaff_RDI[0x38];
    lVar1 = unaff_RDI[0x3c];
    unaff_RBX[3] = unaff_RDI[0x3b];
    unaff_RBX[4] = lVar1;
    lVar1 = unaff_RDI[0x3e];
    unaff_RBX[5] = unaff_RDI[0x3d];
    unaff_RBX[6] = lVar1;
    unaff_RBX[1] = unaff_RDI[0x39];
    unaff_RBX[2] = unaff_RDI[0x3a];
    unaff_RBX[7] = unaff_RDI[0x3f];
    uVar3 = (int32_t)unaff_RDI[0x40];
  }
  *(int32_t *)(unaff_RBX + 8) = uVar3;
  *(int32_t *)(unaff_RDI + 0x290) = unaff_R14D;
  *(int32_t *)((int64_t)unaff_RDI + 0x2204) = 0xbf800000;
  return;
}






// 函数: void FUN_1805c42f3(int64_t param_1)
void FUN_1805c42f3(int64_t param_1)

{
  uint64_t uVar1;
  char cVar2;
  uint64_t *puVar3;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t *unaff_RDI;
  uint64_t unaff_R14;
  float fVar4;
  float fVar5;
  int8_t auVar6 [16];
  float in_XMM4_Da;
  float fVar7;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fVar8;
  
  fVar7 = *(float *)(param_1 + 0x940);
  fVar8 = *(float *)(*(int64_t *)(param_1 + 0x20) + 0xc);
  *(float *)(unaff_RBP + 0x7b) =
       *(float *)(param_1 + 0x944) - *(float *)(*(int64_t *)(param_1 + 0x20) + 0x10);
  *(float *)(unaff_RBP + 0x77) = fVar7 - fVar8;
  *(uint64_t *)(unaff_RBP + 0x77) = *(uint64_t *)(unaff_RBP + 0x77);
  fVar7 = *(float *)(unaff_RBP + 0x7b);
  fVar8 = *(float *)(unaff_RBP + 0x77);
  fVar4 = fVar7 * fVar7 + fVar8 * fVar8;
  fVar4 = (float)(int)CONCAT71((int7)((uint64_t)unaff_R14 >> 8),fVar4 <= 1.1754944e-38) *
          1.1754944e-38 + fVar4;
  auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
  fVar5 = auVar6._0_4_;
  fVar4 = in_XMM4_Da * fVar5 * (3.0 - fVar4 * fVar5 * fVar5);
  fVar8 = fVar8 * fVar4 + unaff_XMM6_Da;
  fVar7 = fVar7 * fVar4 + unaff_XMM7_Da;
  fVar4 = (fVar8 * fVar8 + fVar7 * fVar7) * 0.25;
  if (fVar4 <= 1e-07) {
    fVar4 = 1.0;
    fVar8 = 0.0;
  }
  else {
    fVar4 = 1.0 / SQRT(fVar4);
    fVar8 = fVar8 * 0.5 * fVar4;
    fVar4 = fVar7 * 0.5 * fVar4;
  }
  *(float *)(unaff_RBP + 0x77) = fVar8 * 20.0;
  *(float *)(unaff_RBP + 0x7b) = fVar4 * 20.0;
  cVar2 = FUN_1805d94e0(unaff_RDI + 0x2f,unaff_RBP + 0x77);
  if (cVar2 == '\0') {
    puVar3 = (uint64_t *)FUN_180516f50(*unaff_RDI,unaff_RBP + -0x39);
    *unaff_RBX = *puVar3;
    uVar1 = puVar3[4];
    unaff_RBX[3] = puVar3[3];
    unaff_RBX[4] = uVar1;
    uVar1 = puVar3[6];
    unaff_RBX[5] = puVar3[5];
    unaff_RBX[6] = uVar1;
    unaff_RBX[1] = puVar3[1];
    unaff_RBX[2] = puVar3[2];
    unaff_RBX[7] = puVar3[7];
    *(int32_t *)(unaff_RBX + 8) = *(int32_t *)(puVar3 + 8);
  }
  *(int *)(unaff_RDI + 0x290) = (int)unaff_R14;
  *(int32_t *)((int64_t)unaff_RDI + 0x2204) = 0xbf800000;
  return;
}






// 函数: void FUN_1805c4415(void)
void FUN_1805c4415(void)

{
  uint64_t uVar1;
  char cVar2;
  uint64_t *puVar3;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t *unaff_RDI;
  int32_t unaff_R14D;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  
  *(float *)(unaff_RBP + 0x77) = unaff_XMM6_Da * 20.0;
  *(float *)(unaff_RBP + 0x7b) = unaff_XMM7_Da * 20.0;
  cVar2 = FUN_1805d94e0(unaff_RDI + 0x2f,unaff_RBP + 0x77,0x3e4ccccd,0x3e4ccccd);
  if (cVar2 == '\0') {
    puVar3 = (uint64_t *)FUN_180516f50(*unaff_RDI,unaff_RBP + -0x39);
    *unaff_RBX = *puVar3;
    uVar1 = puVar3[4];
    unaff_RBX[3] = puVar3[3];
    unaff_RBX[4] = uVar1;
    uVar1 = puVar3[6];
    unaff_RBX[5] = puVar3[5];
    unaff_RBX[6] = uVar1;
    unaff_RBX[1] = puVar3[1];
    unaff_RBX[2] = puVar3[2];
    unaff_RBX[7] = puVar3[7];
    *(int32_t *)(unaff_RBX + 8) = *(int32_t *)(puVar3 + 8);
  }
  *(int32_t *)(unaff_RDI + 0x290) = unaff_R14D;
  *(int32_t *)((int64_t)unaff_RDI + 0x2204) = 0xbf800000;
  return;
}






// 函数: void FUN_1805c4545(void)
void FUN_1805c4545(void)

{
  int64_t unaff_RDI;
  int32_t unaff_R14D;
  
  *(int32_t *)(unaff_RDI + 0x1480) = unaff_R14D;
  *(int32_t *)(unaff_RDI + 0x2204) = 0xbf800000;
  return;
}






// 函数: void FUN_1805c4555(void)
void FUN_1805c4555(void)

{
  int64_t unaff_RDI;
  int32_t unaff_R14D;
  
  *(int32_t *)(unaff_RDI + 0x1480) = unaff_R14D;
  *(int32_t *)(unaff_RDI + 0x2204) = 0xbf800000;
  return;
}






// 函数: void FUN_1805c4650(int64_t *param_1,uint64_t *param_2,int8_t *param_3,char param_4)
void FUN_1805c4650(int64_t *param_1,uint64_t *param_2,int8_t *param_3,char param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  int64_t lVar10;
  float *pfVar11;
  uint uVar12;
  int64_t lVar13;
  int64_t lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar12 = *(uint *)((int64_t)param_1 + 0x209c);
  *param_3 = 1;
  if (((uVar12 >> 2 & 1) != 0) && (param_4 != '\0')) {
    lVar10 = func_0x0001805b7270(param_1 + 1);
    if (lVar10 != 0) {
      if ((int)param_1[0x2f1] == 0) {
        *(int32_t *)(param_1 + 0x2f1) = 0;
        param_1[0x2ed] =
             *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ee] * 8) + -0x8000000000000000
        ;
      }
      else {
        func_0x0001805d88c0(param_1);
      }
    }
  }
  if ((char)param_1[0x438] == '\0') {
    iVar9 = *(int *)((int64_t)param_1 + 0x14b4);
  }
  else {
    iVar9 = *(int *)((int64_t)param_1 + 0x21c4);
  }
  if (((iVar9 < 0) ||
      (lVar10 = *(int64_t *)((int64_t)iVar9 * 0xa60 + 0x3778 + param_1[0x291]), lVar10 == 0)) ||
     (*(char *)(lVar10 + 0x8be) == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  lVar10 = *param_1;
  if (bVar6) {
    iVar9 = *(int *)(lVar10 + 0x678);
    if (iVar9 < 1) {
      iVar9 = 1;
    }
    else if (6 < iVar9) {
      iVar9 = 6;
    }
    if ((int)param_1[0x284] == 0) {
      if (*(int *)(lVar10 + 0x564) == -1) {
        fVar16 = 2.3283065e-11;
        uVar12 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
        uVar12 = uVar12 ^ uVar12 >> 0x11;
        uVar12 = uVar12 ^ uVar12 << 5;
        *(uint *)(param_1 + 0x272) = uVar12;
        fVar15 = (float)(uVar12 - 1) * 2.3283065e-11 * (float)iVar9 +
                 *(float *)((int64_t)param_1 + 0x14ac);
        *(float *)((int64_t)param_1 + 0x14ac) = fVar15;
        if ((char)param_1[0x438] == '\0') {
          iVar9 = *(int *)((int64_t)param_1 + 0x14b4);
        }
        else {
          iVar9 = *(int *)((int64_t)param_1 + 0x21c4);
        }
        if (1 < *(int *)((int64_t)iVar9 * 0xa60 + 0x3718 + param_1[0x291])) {
          uVar12 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
          uVar12 = uVar12 ^ uVar12 >> 0x11;
          uVar12 = uVar12 ^ uVar12 << 5;
          *(uint *)(param_1 + 0x272) = uVar12;
          lVar10 = func_0x0001805d1df0(param_1);
          fVar15 = (float)*(int *)(lVar10 + 0x678) * (float)(uVar12 - 1) * fVar16 +
                   *(float *)((int64_t)param_1 + 0x14ac);
          *(float *)((int64_t)param_1 + 0x14ac) = fVar15;
        }
        if (10.0 < fVar15) {
          *(int32_t *)(param_1 + 0x284) = 1;
        }
      }
    }
    else if ((int)param_1[0x284] == 1) {
      uVar12 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
      uVar12 = uVar12 ^ uVar12 >> 0x11;
      uVar12 = uVar12 ^ uVar12 << 5;
      *(uint *)(param_1 + 0x272) = uVar12;
      fVar15 = (float)(uVar12 - 1) * (5.820766e-11 / (float)iVar9);
      if ((*(uint *)(param_1 + 2) >> 0x1b & 1) == 0) {
        bVar7 = (byte)((uint)*(int32_t *)(*(int64_t *)param_1[1] + 0x564) >> 0x1f) ^ 1;
        *(byte *)((int64_t)param_1 + 0x11c) = bVar7;
      }
      else {
        bVar7 = *(byte *)((int64_t)param_1 + 0x11c);
      }
      if (bVar7 == 0) {
        if ((*(uint *)(param_1 + 2) & 1) == 0) {
          FUN_1805d3210(param_1 + 1);
        }
        fVar17 = *(float *)(*(int64_t *)(*param_1 + 0x20) + 0x10) -
                 *(float *)((int64_t)param_1 + 0x54);
        fVar16 = *(float *)(*(int64_t *)(*param_1 + 0x20) + 0xc) - *(float *)(param_1 + 10);
        pfVar11 = (float *)func_0x0001805b7300(param_1 + 1);
        fVar16 = SQRT(fVar16 * fVar16 + fVar17 * fVar17) - *pfVar11;
        if (fVar16 <= 0.0) {
          fVar15 = fVar15 * 10.0;
        }
        else {
          fVar16 = fVar16 / *(float *)(*(int64_t *)(*param_1 + 0x20) + 0x1d0);
          fVar16 = 6.5 - fVar16 * 0.22 * fVar16;
          if (fVar16 <= 1.0) {
            fVar16 = 1.0;
          }
          fVar15 = fVar15 * fVar16;
        }
      }
      fVar15 = *(float *)((int64_t)param_1 + 0x14ac) - fVar15;
      *(float *)((int64_t)param_1 + 0x14ac) = fVar15;
      if (fVar15 < 0.0) {
        *(int32_t *)(param_1 + 0x284) = 0;
      }
    }
  }
  else {
    lVar14 = *(int64_t *)(lVar10 + 0x9d8);
    lVar1 = *(int64_t *)(lVar10 + 0x20);
    lVar13 = 0;
    if (lVar14 != 0) {
      cVar8 = FUN_18038d0a0(lVar14,lVar1 + 0xc);
      if (cVar8 != '\0') {
        lVar13 = lVar14;
      }
    }
    uVar2 = *(uint64_t *)(lVar1 + 0xc);
    uVar3 = *(uint64_t *)(lVar1 + 0x14);
    uVar4 = *(uint64_t *)(lVar1 + 0xb0);
    uVar5 = *(uint64_t *)(lVar1 + 0xb8);
    *param_2 = *(uint64_t *)(*(int64_t *)(lVar10 + 0x8d8) + 0x18);
    param_2[5] = uVar4;
    param_2[6] = uVar5;
    param_2[1] = lVar13;
    param_2[3] = uVar2;
    param_2[4] = uVar3;
    param_2[2] = lVar14;
    param_2[7] = uVar2;
    *(int32_t *)(param_2 + 8) = 3;
  }
  if ((*(byte *)((int64_t)param_1 + 0x1484) & 0x40) != 0) {
    iVar9 = (int)param_1[0x426];
    if (((-1 < iVar9) && (iVar9 < *(int *)(param_1[0x291] + 0x52ed94))) &&
       (-1 < *(short *)(param_1[0x291] + 0x52dda0 + (int64_t)iVar9 * 2))) {
      *(int8_t *)((int64_t)param_1 + 0x21fd) = 1;
    }
  }
  return;
}






