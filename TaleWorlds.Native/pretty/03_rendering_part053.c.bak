#include "TaleWorlds.Native.Split.h"

// 03_rendering_part053.c - 9 个函数

// 函数: void FUN_180297321(void)
void FUN_180297321(void)

{
  return;
}



uint64_t FUN_180297337(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  return param_3;
}



float * FUN_180297340(float *param_1,float *param_2,float param_3,float param_4,float param_5,
                     char *param_6,char *param_7,uint64_t *param_8)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  char *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pcVar9 = param_7;
  if (param_7 == (char *)0x0) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (param_6[lVar8] != '\0');
    pcVar9 = param_6 + lVar8;
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  fVar11 = 0.0;
  fVar10 = param_3 / *param_1;
  bVar2 = param_5 <= 0.0;
  pcVar4 = (char *)0x0;
  pcVar6 = param_6;
  pcVar5 = param_6;
  if (param_6 < pcVar9) {
    do {
      if (bVar2) {
LAB_180297469:
        param_5 = (float)(int)*pcVar5;
        if ((uint)param_5 < 0x80) {
          pcVar6 = pcVar5 + 1;
        }
        else {
          iVar3 = FUN_180121550(&param_5,pcVar5,pcVar9);
          pcVar6 = pcVar5 + iVar3;
          if (param_5 == 0.0) break;
        }
        pcVar7 = pcVar6;
        if ((uint)param_5 < 0x20) {
          if (param_5 == 1.4013e-44) {
            if (fVar11 <= *param_2) {
              fVar11 = *param_2;
            }
            *param_2 = fVar11;
            param_2[1] = param_3 + param_2[1];
            fVar12 = 0.0;
          }
          else {
            fVar12 = fVar11;
            if (param_5 != 1.82169e-44) goto LAB_1802974d0;
          }
        }
        else {
LAB_1802974d0:
          if ((int)param_5 < (int)param_1[8]) {
            fVar12 = *(float *)(*(longlong *)(param_1 + 10) + (ulonglong)(uint)param_5 * 4);
          }
          else {
            fVar12 = param_1[0x12];
          }
          fVar12 = fVar12 * fVar10 + fVar11;
          pcVar6 = pcVar5;
          if (param_4 <= fVar12) break;
        }
      }
      else {
        if ((pcVar4 == (char *)0x0) && (pcVar4 = (char *)FUN_1802971b0(param_1), pcVar4 == pcVar5))
        {
          pcVar4 = pcVar4 + 1;
        }
        if (pcVar5 < pcVar4) goto LAB_180297469;
        if (*param_2 <= fVar11 && fVar11 != *param_2) {
          *param_2 = fVar11;
        }
        fVar12 = 0.0;
        pcVar4 = (char *)0x0;
        param_2[1] = param_3 + param_2[1];
        while ((cVar1 = *pcVar5, cVar1 == ' ' || (cVar1 == '\t'))) {
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar5;
          fVar11 = fVar12;
          if (pcVar9 <= pcVar5) goto FUN_180297510;
        }
        pcVar7 = pcVar5 + 1;
        if (cVar1 != '\n') {
          pcVar7 = pcVar5;
        }
      }
      pcVar6 = pcVar7;
      pcVar5 = pcVar7;
      fVar11 = fVar12;
    } while (pcVar7 < pcVar9);
  }
FUN_180297510:
  if (*param_2 <= fVar11 && fVar11 != *param_2) {
    *param_2 = fVar11;
  }
  if ((0.0 < fVar11) || (param_2[1] == 0.0)) {
    param_2[1] = param_3 + param_2[1];
  }
  if (param_8 != (uint64_t *)0x0) {
    *param_8 = pcVar6;
  }
  return param_2;
}





// 函数: void FUN_180297357(float *param_1,uint64_t *param_2,float param_3,float param_4)
void FUN_180297357(float *param_1,uint64_t *param_2,float param_3,float param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong in_RAX;
  char *pcVar4;
  char *unaff_RBX;
  char *pcVar5;
  char *pcVar6;
  uint64_t unaff_RBP;
  float *unaff_RSI;
  uint64_t unaff_RDI;
  longlong lVar7;
  char *pcVar8;
  uint64_t unaff_R12;
  uint64_t unaff_R15;
  float fVar9;
  int32_t unaff_XMM6_Da;
  float fVar10;
  float fVar11;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  float in_stack_000000c0;
  char *in_stack_000000d0;
  uint64_t *in_stack_000000d8;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RDI;
  *(uint64_t *)(in_RAX + 0x18) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R15;
  *(int32_t *)(in_RAX + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x1c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM10_Dd;
  pcVar8 = in_stack_000000d0;
  if (in_stack_000000d0 == (char *)0x0) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (unaff_RBX[lVar7] != '\0');
    pcVar8 = unaff_RBX + lVar7;
  }
  *param_2 = 0;
  fVar10 = 0.0;
  fVar9 = param_3 / *param_1;
  bVar2 = in_stack_000000c0 <= 0.0;
  pcVar4 = (char *)0x0;
  pcVar5 = unaff_RBX;
  if (unaff_RBX < pcVar8) {
    do {
      if (bVar2) {
LAB_180297469:
        in_stack_000000c0 = (float)(int)*unaff_RBX;
        if ((uint)in_stack_000000c0 < 0x80) {
          pcVar5 = unaff_RBX + 1;
        }
        else {
          iVar3 = FUN_180121550(&stack0x000000c0,unaff_RBX,pcVar8);
          pcVar5 = unaff_RBX + iVar3;
          if (in_stack_000000c0 == 0.0) break;
        }
        pcVar6 = pcVar5;
        if ((uint)in_stack_000000c0 < 0x20) {
          if (in_stack_000000c0 == 1.4013e-44) {
            if (fVar10 <= *unaff_RSI) {
              fVar10 = *unaff_RSI;
            }
            *unaff_RSI = fVar10;
            unaff_RSI[1] = param_3 + unaff_RSI[1];
            fVar11 = 0.0;
          }
          else {
            fVar11 = fVar10;
            if (in_stack_000000c0 != 1.82169e-44) goto LAB_1802974d0;
          }
        }
        else {
LAB_1802974d0:
          if ((int)in_stack_000000c0 < (int)param_1[8]) {
            fVar11 = *(float *)(*(longlong *)(param_1 + 10) + (ulonglong)(uint)in_stack_000000c0 * 4
                               );
          }
          else {
            fVar11 = param_1[0x12];
          }
          fVar11 = fVar11 * fVar9 + fVar10;
          pcVar5 = unaff_RBX;
          if (param_4 <= fVar11) break;
        }
      }
      else {
        if ((pcVar4 == (char *)0x0) &&
           (pcVar4 = (char *)FUN_1802971b0(param_1), pcVar4 == unaff_RBX)) {
          pcVar4 = pcVar4 + 1;
        }
        if (unaff_RBX < pcVar4) goto LAB_180297469;
        if (*unaff_RSI <= fVar10 && fVar10 != *unaff_RSI) {
          *unaff_RSI = fVar10;
        }
        fVar11 = 0.0;
        pcVar4 = (char *)0x0;
        unaff_RSI[1] = param_3 + unaff_RSI[1];
        while ((cVar1 = *unaff_RBX, cVar1 == ' ' || (cVar1 == '\t'))) {
          unaff_RBX = unaff_RBX + 1;
          pcVar5 = unaff_RBX;
          fVar10 = fVar11;
          if (pcVar8 <= unaff_RBX) goto FUN_180297510;
        }
        pcVar6 = unaff_RBX + 1;
        if (cVar1 != '\n') {
          pcVar6 = unaff_RBX;
        }
      }
      pcVar5 = pcVar6;
      unaff_RBX = pcVar6;
      fVar10 = fVar11;
    } while (pcVar6 < pcVar8);
  }
FUN_180297510:
  if (*unaff_RSI <= fVar10 && fVar10 != *unaff_RSI) {
    *unaff_RSI = fVar10;
  }
  if ((0.0 < fVar10) || (unaff_RSI[1] == 0.0)) {
    unaff_RSI[1] = param_3 + unaff_RSI[1];
  }
  if (in_stack_000000d8 != (uint64_t *)0x0) {
    *in_stack_000000d8 = pcVar5;
  }
  return;
}





// 函数: void FUN_1802973de(uint64_t param_1,float param_2)
void FUN_1802973de(uint64_t param_1,float param_2)

{
  char cVar1;
  int iVar2;
  char *unaff_RBX;
  char *pcVar3;
  char *pcVar4;
  char *unaff_RBP;
  float *unaff_RSI;
  char *unaff_RDI;
  char unaff_R12B;
  longlong unaff_R15;
  float fVar5;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM10_Da;
  uint in_stack_000000c0;
  uint64_t *in_stack_000000d8;
  
  do {
    fVar5 = unaff_XMM8_Da;
    if (unaff_R12B == '\0') {
LAB_180297469:
      in_stack_000000c0 = (uint)*unaff_RBX;
      if (in_stack_000000c0 < 0x80) {
        pcVar3 = unaff_RBX + 1;
      }
      else {
        iVar2 = FUN_180121550(&stack0x000000c0,unaff_RBX);
        pcVar3 = unaff_RBX + iVar2;
        if (in_stack_000000c0 == 0) break;
      }
      pcVar4 = pcVar3;
      if (in_stack_000000c0 < 0x20) {
        if (in_stack_000000c0 == 10) {
          if (unaff_XMM6_Da <= *unaff_RSI) {
            unaff_XMM6_Da = *unaff_RSI;
          }
          *unaff_RSI = unaff_XMM6_Da;
          unaff_RSI[1] = unaff_XMM7_Da + unaff_RSI[1];
        }
        else {
          fVar5 = unaff_XMM6_Da;
          if (in_stack_000000c0 != 0xd) goto LAB_1802974d0;
        }
      }
      else {
LAB_1802974d0:
        if ((int)in_stack_000000c0 < *(int *)(unaff_R15 + 0x20)) {
          fVar5 = *(float *)(*(longlong *)(unaff_R15 + 0x28) + (ulonglong)in_stack_000000c0 * 4);
        }
        else {
          fVar5 = *(float *)(unaff_R15 + 0x48);
        }
        fVar5 = fVar5 * param_2 + unaff_XMM6_Da;
        pcVar3 = unaff_RBX;
        if (unaff_XMM10_Da <= fVar5) break;
      }
    }
    else {
      if ((unaff_RBP == (char *)0x0) &&
         (unaff_RBP = (char *)FUN_1802971b0(), unaff_RBP == unaff_RBX)) {
        unaff_RBP = unaff_RBP + 1;
      }
      if (unaff_RBX < unaff_RBP) goto LAB_180297469;
      if (*unaff_RSI <= unaff_XMM6_Da && unaff_XMM6_Da != *unaff_RSI) {
        *unaff_RSI = unaff_XMM6_Da;
      }
      unaff_RBP = (char *)0x0;
      unaff_RSI[1] = unaff_XMM7_Da + unaff_RSI[1];
      while ((cVar1 = *unaff_RBX, cVar1 == ' ' || (cVar1 == '\t'))) {
        unaff_RBX = unaff_RBX + 1;
        pcVar3 = unaff_RBX;
        unaff_XMM6_Da = unaff_XMM8_Da;
        if (unaff_RDI <= unaff_RBX) goto LAB_180297508;
      }
      pcVar4 = unaff_RBX + 1;
      if (cVar1 != '\n') {
        pcVar4 = unaff_RBX;
      }
    }
    pcVar3 = pcVar4;
    unaff_RBX = pcVar4;
    unaff_XMM6_Da = fVar5;
  } while (pcVar4 < unaff_RDI);
LAB_180297508:
  if (*unaff_RSI <= unaff_XMM6_Da && unaff_XMM6_Da != *unaff_RSI) {
    *unaff_RSI = unaff_XMM6_Da;
  }
  if ((unaff_XMM8_Da < unaff_XMM6_Da) || (unaff_XMM8_Da == unaff_RSI[1])) {
    unaff_RSI[1] = unaff_XMM7_Da + unaff_RSI[1];
  }
  if (in_stack_000000d8 != (uint64_t *)0x0) {
    *in_stack_000000d8 = pcVar3;
  }
  return;
}





// 函数: void FUN_180297510(void)
void FUN_180297510(void)

{
  uint64_t unaff_RBX;
  float *unaff_RSI;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  uint64_t *in_stack_000000d8;
  
  if (*unaff_RSI <= unaff_XMM6_Da && unaff_XMM6_Da != *unaff_RSI) {
    *unaff_RSI = unaff_XMM6_Da;
  }
  if ((unaff_XMM8_Da < unaff_XMM6_Da) || (unaff_XMM8_Da == unaff_RSI[1])) {
    unaff_RSI[1] = unaff_XMM7_Da + unaff_RSI[1];
  }
  if (in_stack_000000d8 != (uint64_t *)0x0) {
    *in_stack_000000d8 = unaff_RBX;
  }
  return;
}





// 函数: void FUN_180297541(void)
void FUN_180297541(void)

{
  uint64_t unaff_RBX;
  float *unaff_RSI;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  uint64_t *in_stack_000000d8;
  
  *unaff_RSI = unaff_XMM6_Da;
  if ((unaff_XMM8_Da < unaff_XMM6_Da) || (unaff_XMM8_Da == unaff_RSI[1])) {
    unaff_RSI[1] = unaff_XMM7_Da + unaff_RSI[1];
  }
  if (in_stack_000000d8 != (uint64_t *)0x0) {
    *in_stack_000000d8 = unaff_RBX;
  }
  return;
}





// 函数: void FUN_180297550(void)
void FUN_180297550(void)

{
  uint64_t unaff_RBX;
  longlong unaff_RSI;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  uint64_t *in_stack_000000d8;
  
  if (unaff_XMM8_Da == *(float *)(unaff_RSI + 4)) {
    *(float *)(unaff_RSI + 4) = unaff_XMM7_Da + *(float *)(unaff_RSI + 4);
  }
  if (in_stack_000000d8 != (uint64_t *)0x0) {
    *in_stack_000000d8 = unaff_RBX;
  }
  return;
}





// 函数: void FUN_180297579(void)
void FUN_180297579(void)

{
  uint64_t *in_RAX;
  uint64_t unaff_RBX;
  
  *in_RAX = unaff_RBX;
  return;
}





// 函数: void FUN_180297590(float *param_1,int *param_2,float param_3,uint64_t param_4,float param_5,
void FUN_180297590(float *param_1,int *param_2,float param_3,uint64_t param_4,float param_5,
                  float *param_6,char *param_7,char *param_8,float param_9,char param_10)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  ulonglong uVar15;
  float *pfVar16;
  longlong lVar17;
  char *pcVar18;
  char *pcVar19;
  int iVar20;
  short sVar21;
  short *psVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fStackX_8;
  float fStackX_c;
  
  pfVar9 = param_6;
  pcVar18 = param_8;
  if (param_8 == (char *)0x0) {
    lVar17 = -1;
    do {
      lVar17 = lVar17 + 1;
    } while (param_7[lVar17] != '\0');
    pcVar18 = param_7 + lVar17;
  }
  fStackX_8 = (float)param_4;
  fVar2 = param_6[3];
  fStackX_c = (float)((ulonglong)param_4 >> 0x20);
  fVar31 = (float)(int)fStackX_8 + param_1[2];
  fVar23 = (float)(int)fStackX_c + param_1[3];
  if (fVar23 <= fVar2) {
    fVar29 = param_6[1];
    param_3 = param_3 / *param_1;
    fVar28 = *param_1 * param_3;
    param_8._0_1_ = 0.0 < param_9;
    pcVar13 = (char *)0x0;
    pcVar14 = param_7;
    if ((fVar23 + fVar28 < fVar29) && (!(bool)(char)param_8)) {
      do {
        if (pcVar18 <= pcVar14) break;
        lVar17 = memchr(pcVar14,10,(longlong)pcVar18 - (longlong)pcVar14);
        pcVar14 = pcVar18;
        if (lVar17 != 0) {
          pcVar14 = (char *)(lVar17 + 1);
        }
        fVar23 = fVar23 + fVar28;
      } while (fVar28 + fVar23 < fVar29);
    }
    pcVar19 = pcVar18;
    if ((10000 < (longlong)pcVar18 - (longlong)pcVar14) &&
       (pcVar12 = pcVar14, fVar29 = fVar23, (char)param_8 == '\0')) {
      while ((pcVar19 = pcVar12, fVar29 < fVar2 && (pcVar19 < pcVar18))) {
        lVar17 = memchr(pcVar19,10,(longlong)pcVar18 - (longlong)pcVar19);
        pcVar12 = pcVar18;
        if (lVar17 != 0) {
          pcVar12 = (char *)(lVar17 + 1);
        }
        fVar29 = fVar29 + fVar28;
      }
    }
    if (pcVar14 != pcVar19) {
      iVar7 = param_2[4];
      iVar20 = (int)pcVar19 - (int)pcVar14;
      iVar8 = iVar20 * 6;
      FUN_1802921e0(param_2,iVar8,iVar20 * 4);
      pfVar16 = *(float **)(param_2 + 0x14);
      psVar22 = *(short **)(param_2 + 0x16);
      iVar20 = param_2[0x12];
      fVar2 = fVar31;
joined_r0x0001802977b5:
      do {
        if (pcVar19 <= pcVar14) break;
        fVar29 = 0.0;
        if ((char)param_8 != '\0') {
          if ((pcVar13 == (char *)0x0) &&
             (pcVar13 = (char *)FUN_1802971b0(param_1), pcVar13 == pcVar14)) {
            pcVar13 = pcVar13 + 1;
          }
          if (pcVar13 <= pcVar14) {
            pcVar13 = (char *)0x0;
            fVar23 = fVar23 + fVar28;
            while( true ) {
              if (pcVar19 <= pcVar14) goto FUN_180297b6f;
              cVar5 = *pcVar14;
              if ((cVar5 != ' ') && (cVar5 != '\t')) break;
              pcVar14 = pcVar14 + 1;
            }
            fVar2 = fVar31;
            if (cVar5 == '\n') {
              pcVar14 = pcVar14 + 1;
            }
            goto joined_r0x0001802977b5;
          }
        }
        param_6._0_4_ = (uint)*pcVar14;
        if ((uint)param_6 < 0x80) {
          pcVar14 = pcVar14 + 1;
        }
        else {
          iVar10 = FUN_180121550(&param_6,pcVar14,pcVar19);
          pcVar14 = pcVar14 + iVar10;
          if ((uint)param_6 == 0) break;
        }
        if (0x1f < (uint)param_6) {
LAB_1802978c4:
          if ((int)((uint)param_6 & 0xffff) < (int)param_1[0xc]) {
            uVar6 = *(ushort *)
                     (*(longlong *)(param_1 + 0xe) + (ulonglong)((uint)param_6 & 0xffff) * 2);
            if (uVar6 == 0xffff) {
              lVar17 = *(longlong *)(param_1 + 0x10);
            }
            else {
              lVar17 = *(longlong *)(param_1 + 6) + (ulonglong)uVar6 * 0x28;
            }
          }
          else {
            lVar17 = *(longlong *)(param_1 + 0x10);
          }
          if (((lVar17 != 0) && (fVar29 = param_3 * *(float *)(lVar17 + 4), (uint)param_6 != 0x20))
             && ((uint)param_6 != 9)) {
            fVar3 = pfVar9[2];
            fVar27 = param_3 * *(float *)(lVar17 + 8) + fVar2;
            fVar24 = param_3 * *(float *)(lVar17 + 0x10) + fVar2;
            fVar26 = param_3 * *(float *)(lVar17 + 0xc) + fVar23;
            fVar25 = param_3 * *(float *)(lVar17 + 0x14) + fVar23;
            if ((fVar27 <= fVar3) && (fVar4 = *pfVar9, fVar4 <= fVar24)) {
              fVar33 = *(float *)(lVar17 + 0x18);
              fVar34 = *(float *)(lVar17 + 0x1c);
              fVar30 = *(float *)(lVar17 + 0x20);
              fVar32 = *(float *)(lVar17 + 0x24);
              if (param_10 != '\0') {
                if (fVar27 < fVar4) {
                  fVar33 = fVar33 + (1.0 - (fVar24 - fVar4) / (fVar24 - fVar27)) * (fVar30 - fVar33)
                  ;
                  fVar27 = fVar4;
                }
                fVar4 = pfVar9[1];
                if (fVar26 < fVar4) {
                  fVar34 = fVar34 + (1.0 - (fVar25 - fVar4) / (fVar25 - fVar26)) * (fVar32 - fVar34)
                  ;
                  fVar26 = fVar4;
                }
                if (fVar3 < fVar24) {
                  fVar30 = ((fVar3 - fVar27) / (fVar24 - fVar27)) * (fVar30 - fVar33) + fVar33;
                  fVar24 = fVar3;
                }
                fVar3 = pfVar9[3];
                if (fVar3 < fVar25) {
                  fVar32 = ((fVar3 - fVar26) / (fVar25 - fVar26)) * (fVar32 - fVar34) + fVar34;
                  fVar25 = fVar3;
                }
                if (fVar25 <= fVar26) goto LAB_180297b2c;
              }
              sVar21 = (short)iVar20;
              *psVar22 = sVar21;
              psVar22[1] = sVar21 + 1;
              psVar22[2] = sVar21 + 2;
              psVar22[4] = sVar21 + 2;
              psVar22[5] = sVar21 + 3;
              psVar22[3] = sVar21;
              iVar20 = iVar20 + 4;
              pfVar16[4] = param_5;
              pfVar16[9] = param_5;
              pfVar16[0xe] = param_5;
              pfVar16[0x13] = param_5;
              *pfVar16 = fVar27;
              pfVar16[1] = fVar26;
              pfVar16[2] = fVar33;
              pfVar16[3] = fVar34;
              pfVar16[5] = fVar24;
              pfVar16[6] = fVar26;
              pfVar16[7] = fVar30;
              pfVar16[8] = fVar34;
              pfVar16[10] = fVar24;
              pfVar16[0xb] = fVar25;
              pfVar16[0xc] = fVar30;
              pfVar16[0xd] = fVar32;
              pfVar16[0xf] = fVar27;
              pfVar16[0x10] = fVar25;
              pfVar16[0x11] = fVar33;
              pfVar16[0x12] = fVar32;
              pfVar16 = pfVar16 + 0x14;
              psVar22 = psVar22 + 6;
            }
          }
LAB_180297b2c:
          fVar2 = fVar2 + fVar29;
          goto joined_r0x0001802977b5;
        }
        if ((uint)param_6 != 10) {
          if ((uint)param_6 != 0xd) goto LAB_1802978c4;
          goto joined_r0x0001802977b5;
        }
        fVar23 = fVar23 + fVar28;
        fVar2 = fVar31;
      } while (fVar23 < pfVar9[3] || fVar23 == pfVar9[3]);
FUN_180297b6f:
      FUN_18013e800(param_2 + 8,((longlong)pfVar16 - *(longlong *)(param_2 + 10)) / 0x14);
      iVar20 = param_2[5];
      uVar15 = (longlong)psVar22 - *(longlong *)(param_2 + 6) >> 1;
      iVar10 = (int)uVar15;
      if (iVar20 < iVar10) {
        if (iVar20 == 0) {
          uVar11 = 8;
        }
        else {
          uVar11 = iVar20 / 2 + iVar20;
        }
        uVar15 = uVar15 & 0xffffffff;
        if (iVar10 < (int)uVar11) {
          uVar15 = (ulonglong)uVar11;
        }
        FUN_18011dd10(param_2 + 4,uVar15);
      }
      param_2[4] = iVar10;
      piVar1 = (int *)(*(longlong *)(param_2 + 2) + -0x30 + (longlong)*param_2 * 0x30);
      *piVar1 = *piVar1 + (iVar10 - (iVar7 + iVar8));
      *(float **)(param_2 + 0x14) = pfVar16;
      *(short **)(param_2 + 0x16) = psVar22;
      param_2[0x12] = param_2[8];
    }
  }
  return;
}





// 函数: void FUN_180297648(float *param_1,float param_2)
void FUN_180297648(float *param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  char *unaff_RBX;
  ulonglong uVar10;
  float *pfVar11;
  char *unaff_RDI;
  char *pcVar12;
  int iVar13;
  float *unaff_R12;
  short sVar14;
  int iVar15;
  longlong unaff_R13;
  longlong unaff_R14;
  short *psVar16;
  float fVar17;
  float extraout_XMM0_Da;
  float fVar18;
  float fVar19;
  float unaff_XMM7_Da;
  float fVar20;
  float fVar21;
  float fVar22;
  float unaff_XMM9_Da;
  float fVar23;
  float fVar24;
  float unaff_XMM10_Da;
  float fVar25;
  float fVar26;
  float fVar27;
  float in_stack_00000030;
  int iStack0000000000000034;
  float fStack0000000000000130;
  int *in_stack_00000138;
  float fStack0000000000000140;
  float in_stack_00000150;
  uint in_stack_00000158;
  char cStack0000000000000168;
  float in_stack_00000170;
  char in_stack_00000178;
  
  fVar18 = in_stack_00000170;
  fVar2 = unaff_R12[1];
  fVar23 = unaff_XMM9_Da / *param_1;
  fVar21 = *param_1 * fVar23;
  cStack0000000000000168 = 0.0 < in_stack_00000170;
  fVar17 = param_2 + fVar21;
  pcVar9 = (char *)0x0;
  fStack0000000000000130 = fVar21;
  fStack0000000000000140 = fVar23;
  if ((fVar17 < fVar2) && (!(bool)cStack0000000000000168)) {
    do {
      if (unaff_RDI <= unaff_RBX) break;
      lVar7 = memchr(unaff_RBX,10,(longlong)unaff_RDI - (longlong)unaff_RBX);
      unaff_RBX = unaff_RDI;
      if (lVar7 != 0) {
        unaff_RBX = (char *)(lVar7 + 1);
      }
      param_2 = param_2 + fVar21;
      fVar17 = fVar21 + param_2;
    } while (fVar17 < fVar2);
  }
  pcVar12 = unaff_RDI;
  if ((10000 < (longlong)unaff_RDI - (longlong)unaff_RBX) &&
     (pcVar8 = unaff_RBX, fVar2 = param_2, cStack0000000000000168 == '\0')) {
    while ((pcVar12 = pcVar8, fVar2 < unaff_XMM7_Da && (pcVar12 < unaff_RDI))) {
      lVar7 = memchr(pcVar12,10,(longlong)unaff_RDI - (longlong)pcVar12);
      pcVar8 = unaff_RDI;
      if (lVar7 != 0) {
        pcVar8 = (char *)(lVar7 + 1);
      }
      fVar17 = extraout_XMM0_Da;
      fVar2 = fVar2 + fVar21;
    }
  }
  if (unaff_RBX != pcVar12) {
    iVar13 = (int)pcVar12 - (int)unaff_RBX;
    iVar15 = iVar13 * 6;
    iStack0000000000000034 = *(int *)(unaff_R13 + 0x10) + iVar15;
    FUN_1802921e0(fVar17,iVar15,iVar13 * 4);
    pfVar11 = *(float **)(unaff_R13 + 0x50);
    psVar16 = *(short **)(unaff_R13 + 0x58);
    iVar15 = *(int *)(unaff_R13 + 0x48);
    fVar2 = unaff_XMM10_Da;
joined_r0x0001802977b5:
    do {
      fVar19 = fVar2;
      fVar17 = fVar23;
      if (pcVar12 <= unaff_RBX) break;
      fVar22 = 0.0;
      if (cStack0000000000000168 != '\0') {
        if ((pcVar9 == (char *)0x0) &&
           (fVar18 = fVar18 - (unaff_XMM10_Da - fVar19),
           pcVar9 = (char *)FUN_1802971b0(fVar18,fVar17,unaff_RBX,pcVar12,fVar18),
           pcVar9 == unaff_RBX)) {
          pcVar9 = pcVar9 + 1;
        }
        if (pcVar9 <= unaff_RBX) {
          pcVar9 = (char *)0x0;
          param_2 = param_2 + fVar21;
          while( true ) {
            if (pcVar12 <= unaff_RBX) goto FUN_180297b6f;
            cVar4 = *unaff_RBX;
            if ((cVar4 != ' ') && (cVar4 != '\t')) break;
            unaff_RBX = unaff_RBX + 1;
          }
          fVar23 = fStack0000000000000140;
          unaff_XMM10_Da = fVar19;
          fVar2 = in_stack_00000030;
          fVar18 = in_stack_00000170;
          if (cVar4 == '\n') {
            unaff_RBX = unaff_RBX + 1;
            fVar2 = in_stack_00000030;
          }
          goto joined_r0x0001802977b5;
        }
      }
      in_stack_00000158 = (uint)*unaff_RBX;
      if (in_stack_00000158 < 0x80) {
        unaff_RBX = unaff_RBX + 1;
      }
      else {
        iVar13 = FUN_180121550(&stack0x00000158,unaff_RBX,pcVar12);
        unaff_RBX = unaff_RBX + iVar13;
        if (in_stack_00000158 == 0) break;
      }
      fVar18 = in_stack_00000170;
      fVar23 = fStack0000000000000140;
      if (0x1f < in_stack_00000158) {
LAB_1802978c4:
        if ((int)(in_stack_00000158 & 0xffff) < *(int *)(unaff_R14 + 0x30)) {
          uVar5 = *(ushort *)
                   (*(longlong *)(unaff_R14 + 0x38) + (ulonglong)(in_stack_00000158 & 0xffff) * 2);
          if (uVar5 == 0xffff) {
            lVar7 = *(longlong *)(unaff_R14 + 0x40);
          }
          else {
            lVar7 = *(longlong *)(unaff_R14 + 0x18) + (ulonglong)uVar5 * 0x28;
          }
        }
        else {
          lVar7 = *(longlong *)(unaff_R14 + 0x40);
        }
        if (((lVar7 != 0) && (fVar22 = fVar17 * *(float *)(lVar7 + 4), in_stack_00000158 != 0x20))
           && (in_stack_00000158 != 9)) {
          fVar2 = unaff_R12[2];
          fVar20 = fVar17 * *(float *)(lVar7 + 8) + unaff_XMM10_Da;
          fVar21 = fVar17 * *(float *)(lVar7 + 0x10) + unaff_XMM10_Da;
          fVar19 = fVar17 * *(float *)(lVar7 + 0xc) + param_2;
          fVar17 = fVar17 * *(float *)(lVar7 + 0x14) + param_2;
          if ((fVar20 <= fVar2) && (fVar3 = *unaff_R12, fVar3 <= fVar21)) {
            fVar26 = *(float *)(lVar7 + 0x18);
            fVar27 = *(float *)(lVar7 + 0x1c);
            fVar24 = *(float *)(lVar7 + 0x20);
            fVar25 = *(float *)(lVar7 + 0x24);
            if (in_stack_00000178 != '\0') {
              if (fVar20 < fVar3) {
                fVar26 = fVar26 + (1.0 - (fVar21 - fVar3) / (fVar21 - fVar20)) * (fVar24 - fVar26);
                fVar20 = fVar3;
              }
              fVar3 = unaff_R12[1];
              if (fVar19 < fVar3) {
                fVar27 = fVar27 + (1.0 - (fVar17 - fVar3) / (fVar17 - fVar19)) * (fVar25 - fVar27);
                fVar19 = fVar3;
              }
              if (fVar2 < fVar21) {
                fVar24 = ((fVar2 - fVar20) / (fVar21 - fVar20)) * (fVar24 - fVar26) + fVar26;
                fVar21 = fVar2;
              }
              fVar2 = unaff_R12[3];
              if (fVar2 < fVar17) {
                fVar25 = ((fVar2 - fVar19) / (fVar17 - fVar19)) * (fVar25 - fVar27) + fVar27;
                fVar17 = fVar2;
              }
              if (fVar17 <= fVar19) goto LAB_180297b2c;
            }
            sVar14 = (short)iVar15;
            *psVar16 = sVar14;
            psVar16[1] = sVar14 + 1;
            psVar16[2] = sVar14 + 2;
            psVar16[4] = sVar14 + 2;
            psVar16[5] = sVar14 + 3;
            psVar16[3] = sVar14;
            iVar15 = iVar15 + 4;
            pfVar11[4] = in_stack_00000150;
            pfVar11[9] = in_stack_00000150;
            pfVar11[0xe] = in_stack_00000150;
            pfVar11[0x13] = in_stack_00000150;
            *pfVar11 = fVar20;
            pfVar11[1] = fVar19;
            pfVar11[2] = fVar26;
            pfVar11[3] = fVar27;
            pfVar11[5] = fVar21;
            pfVar11[6] = fVar19;
            pfVar11[7] = fVar24;
            pfVar11[8] = fVar27;
            pfVar11[10] = fVar21;
            pfVar11[0xb] = fVar17;
            pfVar11[0xc] = fVar24;
            pfVar11[0xd] = fVar25;
            pfVar11[0xf] = fVar20;
            pfVar11[0x10] = fVar17;
            pfVar11[0x11] = fVar26;
            pfVar11[0x12] = fVar25;
            pfVar11 = pfVar11 + 0x14;
            psVar16 = psVar16 + 6;
          }
        }
LAB_180297b2c:
        fVar21 = fStack0000000000000130;
        unaff_XMM10_Da = unaff_XMM10_Da + fVar22;
        fVar2 = in_stack_00000030;
        goto joined_r0x0001802977b5;
      }
      if (in_stack_00000158 != 10) {
        fVar2 = in_stack_00000030;
        if (in_stack_00000158 != 0xd) goto LAB_1802978c4;
        goto joined_r0x0001802977b5;
      }
      param_2 = param_2 + fVar21;
      unaff_XMM10_Da = fVar19;
      fVar2 = in_stack_00000030;
    } while (param_2 < unaff_R12[3] || param_2 == unaff_R12[3]);
FUN_180297b6f:
    FUN_18013e800(in_stack_00000138 + 8,
                  ((longlong)pfVar11 - *(longlong *)(in_stack_00000138 + 10)) / 0x14);
    iVar15 = in_stack_00000138[5];
    uVar10 = (longlong)psVar16 - *(longlong *)(in_stack_00000138 + 6) >> 1;
    iVar13 = (int)uVar10;
    if (iVar15 < iVar13) {
      if (iVar15 == 0) {
        uVar6 = 8;
      }
      else {
        uVar6 = iVar15 / 2 + iVar15;
      }
      uVar10 = uVar10 & 0xffffffff;
      if (iVar13 < (int)uVar6) {
        uVar10 = (ulonglong)uVar6;
      }
      FUN_18011dd10(in_stack_00000138 + 4,uVar10);
    }
    in_stack_00000138[4] = iVar13;
    piVar1 = (int *)(*(longlong *)(in_stack_00000138 + 2) + -0x30 +
                    (longlong)*in_stack_00000138 * 0x30);
    *piVar1 = *piVar1 + (iVar13 - iStack0000000000000034);
    *(float **)(in_stack_00000138 + 0x14) = pfVar11;
    *(short **)(in_stack_00000138 + 0x16) = psVar16;
    in_stack_00000138[0x12] = in_stack_00000138[8];
  }
  return;
}





