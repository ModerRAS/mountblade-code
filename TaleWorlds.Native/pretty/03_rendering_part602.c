/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part602.c - 15 个函数

// 函数: void FUN_1805995f4(void)
void FUN_1805995f4(void)

{
  int iVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int iVar5;
  int64_t in_RAX;
  uint64_t *puVar6;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int *piVar7;
  int64_t in_R11;
  float fVar8;
  
  iVar5 = *(int *)(unaff_RSI + 0x70);
  puVar3 = *(uint64_t **)(in_RAX + 0xf0);
  piVar7 = (int *)*puVar3;
  puVar6 = puVar3;
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)puVar3[1];
    puVar4 = puVar3;
    while (puVar6 = puVar4 + 1, piVar7 == (int *)0x0) {
      piVar7 = (int *)puVar4[2];
      puVar4 = puVar6;
    }
  }
  do {
    if (piVar7 == (int *)puVar3[*(int64_t *)(in_RAX + 0xf8)]) {
      iVar5 = *(int *)(unaff_RBP + 0x18);
LAB_180599695:
      fVar8 = SQRT((float)*(int *)(unaff_RSI + 0x154) / *(float *)(unaff_RSI + 0x158)) *
              *(float *)(unaff_RSI + 0x15c) * *(float *)(unaff_RSI + 0x150);
      if (iVar5 == 2) {
        fVar8 = fVar8 * 0.8;
      }
      *(float *)(unaff_RDI + 0x118) = fVar8 + *(float *)(unaff_RDI + 0x118);
      *(int32_t *)(unaff_RDI + 0x154) = 0xbecccccd;
      *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x8000;
      if ((((*(byte *)(unaff_RSI + 0xc0) & 8) != 0) && ((*(uint *)(unaff_RDI + 8) >> 0xe & 1) == 0))
         && (*(char *)(unaff_RBP + 0x38) == '\0')) {
        *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x4000000;
      }
      return;
    }
    iVar1 = piVar7[1];
    if ((iVar5 == iVar1) ||
       (((((int64_t)iVar5 != -1 && (iVar1 != -1)) &&
         (iVar2 = *(int *)(*(int64_t *)(in_R11 + 0x78) + 4 + (int64_t)iVar5 * 8),
         iVar2 == *(int *)(*(int64_t *)(in_R11 + 0x78) + 4 + (int64_t)iVar1 * 8))) &&
        (iVar2 != -1)))) {
      iVar5 = (*piVar7 >> 1 & 7U) - 1;
      goto LAB_180599695;
    }
    piVar7 = *(int **)(piVar7 + 2);
    while (piVar7 == (int *)0x0) {
      puVar4 = puVar6 + 1;
      puVar6 = puVar6 + 1;
      piVar7 = (int *)*puVar4;
    }
  } while( true );
}





// 函数: void FUN_1805996cd(uint64_t param_1,float param_2)
void FUN_1805996cd(uint64_t param_1,float param_2)

{
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  *(float *)(unaff_RDI + 0x118) = param_2 * 0.8 + *(float *)(unaff_RDI + 0x118);
  *(int32_t *)(unaff_RDI + 0x154) = 0xbecccccd;
  *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x8000;
  if ((((*(byte *)(unaff_RSI + 0xc0) & 8) != 0) && ((*(uint *)(unaff_RDI + 8) >> 0xe & 1) == 0)) &&
     (*(char *)(unaff_RBP + 0x38) == '\0')) {
    *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x4000000;
  }
  return;
}





// 函数: void FUN_1805996f8(uint64_t param_1,uint64_t param_2,int *param_3)
void FUN_1805996f8(uint64_t param_1,uint64_t param_2,int *param_3)

{
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  float fVar1;
  
  fVar1 = SQRT((float)*(int *)(unaff_RSI + 0x154) / *(float *)(unaff_RSI + 0x158)) *
          *(float *)(unaff_RSI + 0x15c) * *(float *)(unaff_RSI + 0x150);
  if ((*param_3 >> 1 & 7U) == 3) {
    fVar1 = fVar1 * 0.8;
  }
  *(float *)(unaff_RDI + 0x118) = fVar1 + *(float *)(unaff_RDI + 0x118);
  *(int32_t *)(unaff_RDI + 0x154) = 0xbecccccd;
  *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x8000;
  if ((((*(byte *)(unaff_RSI + 0xc0) & 8) != 0) && ((*(uint *)(unaff_RDI + 8) >> 0xe & 1) == 0)) &&
     (*(char *)(unaff_RBP + 0x38) == '\0')) {
    *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x4000000;
  }
  return;
}





// 函数: void FUN_180599704(void)
void FUN_180599704(void)

{
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  *(int32_t *)(unaff_RDI + 0x148) = 0xccbebc20;
  if ((((*(byte *)(unaff_RSI + 0xc0) & 8) != 0) && ((*(uint *)(unaff_RDI + 8) >> 0xe & 1) == 0)) &&
     (*(char *)(unaff_RBP + 0x38) == '\0')) {
    *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x4000000;
  }
  return;
}





// 函数: void FUN_180599721(void)
void FUN_180599721(void)

{
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  
  if (((*(uint *)(unaff_RDI + 8) >> 0xe & 1) == 0) && (*(char *)(unaff_RBP + 0x38) == '\0')) {
    *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x4000000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180599750(int64_t param_1,float *param_2)
void FUN_180599750(int64_t param_1,float *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint64_t uStackX_8;
  uint64_t uStackX_10;
  
  fVar5 = *(float *)(param_1 + 0x20);
  fVar4 = ABS(fVar5);
  *param_2 = 0.0;
  uVar1 = *(int32_t *)(param_1 + 0x54);
  uStackX_10 = ((uint64_t)(uint)fVar5 & 0x7fffffff) << 0x20;
  uStackX_8 = 0;
  uVar2 = func_0x000180598130(param_1,0,0x3f800000);
  fVar5 = -render_system_config;
  while( true ) {
    uStackX_8 = CONCAT44(uVar2,(int32_t)uStackX_8) ^ 0x8000000000000000;
    FUN_180598c50(&uStackX_8,0x3d088889,&uStackX_10,uVar1);
    fVar3 = uStackX_8._4_4_;
    if (uStackX_8._4_4_ <= fVar5) {
      fVar3 = fVar5;
    }
    fVar4 = fVar3 * 0.033333335 + fVar4;
    uStackX_10 = CONCAT44(fVar4,(int32_t)uStackX_10);
    if (fVar4 <= 0.0) break;
    *param_2 = fVar4 * 0.033333335 + *param_2;
  }
  return;
}





// 函数: void FUN_180599870(int64_t param_1)
void FUN_180599870(int64_t param_1)

{
                    // WARNING: Subroutine does not return
  AdvancedSystemController(*(float *)(param_1 + 0x120) + *(float *)(param_1 + 0x34));
}





// 函数: void FUN_1805999d0(int64_t param_1,float *param_2,float param_3,char param_4)
void FUN_1805999d0(int64_t param_1,float *param_2,float param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int8_t auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_4 != '\0') {
    fVar5 = *(float *)(param_1 + 0x168);
    if (fVar5 * *param_2 + *(float *)(param_1 + 0x16c) * param_2[1] +
        *(float *)(param_1 + 0x170) * param_2[2] < 0.0) {
      fVar3 = *param_2;
      fVar7 = param_2[1];
      fVar6 = param_2[2];
      fVar1 = fVar3 * fVar3 + fVar7 * fVar7 + fVar6 * fVar6;
      auVar4 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
      fVar2 = auVar4._0_4_;
      fVar1 = fVar2 * 0.5 * (3.0 - fVar1 * fVar2 * fVar2);
      fVar6 = fVar3 * fVar1 * fVar5 + fVar7 * fVar1 * *(float *)(param_1 + 0x16c) +
              fVar6 * fVar1 * *(float *)(param_1 + 0x170);
      fVar7 = fVar6 * fVar7 * fVar1;
      fVar6 = fVar6 * fVar3 * fVar1;
      if (0.0 < fVar6 * fVar5) {
        if (ABS(fVar6) <= ABS(fVar5)) {
          fVar5 = fVar5 - fVar6;
          *(float *)(param_1 + 0x168) = fVar5;
        }
        else {
          *(int32_t *)(param_1 + 0x168) = 0;
          fVar5 = 0.0;
        }
      }
      fVar3 = *(float *)(param_1 + 0x16c);
      if (0.0 < fVar3 * fVar7) {
        if (ABS(fVar7) <= ABS(fVar3)) {
          fVar3 = fVar3 - fVar7;
          *(float *)(param_1 + 0x16c) = fVar3;
        }
        else {
          *(int32_t *)(param_1 + 0x16c) = 0;
          fVar3 = 0.0;
        }
      }
      if (ABS(fVar5) < 0.001) {
        *(int32_t *)(param_1 + 0x168) = 0;
      }
      if (ABS(fVar3) < 0.001) {
        *(int32_t *)(param_1 + 0x16c) = 0;
      }
    }
    return;
  }
  *(float *)(param_1 + 0xe0) = *param_2 + *(float *)(param_1 + 0xe0);
  *(float *)(param_1 + 0xe4) = param_2[1] + *(float *)(param_1 + 0xe4);
  *(float *)(param_1 + 0xe8) = param_2[2] + *(float *)(param_1 + 0xe8);
  fVar5 = param_2[1];
  *(float *)(param_1 + 0xf0) = param_3 * *param_2 + *(float *)(param_1 + 0xf0);
  *(float *)(param_1 + 0xf4) = fVar5 * param_3 + *(float *)(param_1 + 0xf4);
  return;
}





// 函数: void FUN_1805999f7(float param_1,float *param_2)
void FUN_1805999f7(float param_1,float *param_2)

{
  int64_t in_RCX;
  float in_XMM1_Da;
  float fVar1;
  float fVar2;
  float fVar3;
  int8_t auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = *(float *)(in_RCX + 0x168);
  if (fVar5 * *param_2 + param_1 + in_XMM1_Da < 0.0) {
    fVar3 = *param_2;
    fVar7 = param_2[1];
    fVar6 = param_2[2];
    fVar1 = fVar3 * fVar3 + fVar7 * fVar7 + fVar6 * fVar6;
    auVar4 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
    fVar2 = auVar4._0_4_;
    fVar1 = fVar2 * 0.5 * (3.0 - fVar1 * fVar2 * fVar2);
    fVar6 = fVar3 * fVar1 * fVar5 + fVar7 * fVar1 * *(float *)(in_RCX + 0x16c) +
            fVar6 * fVar1 * *(float *)(in_RCX + 0x170);
    fVar7 = fVar6 * fVar7 * fVar1;
    fVar6 = fVar6 * fVar3 * fVar1;
    if (0.0 < fVar6 * fVar5) {
      if (ABS(fVar6) <= ABS(fVar5)) {
        fVar5 = fVar5 - fVar6;
        *(float *)(in_RCX + 0x168) = fVar5;
      }
      else {
        *(int32_t *)(in_RCX + 0x168) = 0;
        fVar5 = 0.0;
      }
    }
    fVar3 = *(float *)(in_RCX + 0x16c);
    if (0.0 < fVar3 * fVar7) {
      if (ABS(fVar7) <= ABS(fVar3)) {
        fVar3 = fVar3 - fVar7;
        *(float *)(in_RCX + 0x16c) = fVar3;
      }
      else {
        *(int32_t *)(in_RCX + 0x16c) = 0;
        fVar3 = 0.0;
      }
    }
    if (ABS(fVar5) < 0.001) {
      *(int32_t *)(in_RCX + 0x168) = 0;
    }
    if (ABS(fVar3) < 0.001) {
      *(int32_t *)(in_RCX + 0x16c) = 0;
    }
  }
  return;
}





// 函数: void FUN_180599a34(int64_t param_1,float *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180599a34(int64_t param_1,float *param_2,uint64_t param_3,uint64_t param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int8_t auVar4 [16];
  int8_t auVar5 [16];
  int32_t uVar6;
  int32_t in_XMM3_Dc;
  int32_t in_XMM3_Dd;
  float in_XMM4_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar7;
  float fVar8;
  
  uVar6 = (int32_t)((uint64_t)param_4 >> 0x20);
  fVar3 = *param_2;
  fVar8 = param_2[1];
  fVar7 = param_2[2];
  fVar1 = fVar3 * fVar3 + fVar8 * fVar8 + fVar7 * fVar7;
  auVar4._4_4_ = uVar6;
  auVar4._0_4_ = fVar1;
  auVar4._8_4_ = in_XMM3_Dc;
  auVar4._12_4_ = in_XMM3_Dd;
  auVar5._4_4_ = uVar6;
  auVar5._0_4_ = fVar1;
  auVar5._8_4_ = in_XMM3_Dc;
  auVar5._12_4_ = in_XMM3_Dd;
  auVar5 = rsqrtss(auVar4,auVar5);
  fVar2 = auVar5._0_4_;
  fVar1 = in_XMM4_Da * fVar2 * (3.0 - fVar1 * fVar2 * fVar2);
  fVar7 = fVar3 * fVar1 * unaff_XMM8_Da + fVar8 * fVar1 * *(float *)(param_1 + 0x16c) +
          fVar7 * fVar1 * *(float *)(param_1 + 0x170);
  fVar8 = fVar7 * fVar8 * fVar1;
  fVar7 = fVar7 * fVar3 * fVar1;
  if (unaff_XMM9_Da < fVar7 * unaff_XMM8_Da) {
    if (ABS(fVar7) <= ABS(unaff_XMM8_Da)) {
      unaff_XMM8_Da = unaff_XMM8_Da - fVar7;
      *(float *)(param_1 + 0x168) = unaff_XMM8_Da;
    }
    else {
      *(int32_t *)(param_1 + 0x168) = 0;
      unaff_XMM8_Da = 0.0;
    }
  }
  fVar3 = *(float *)(param_1 + 0x16c);
  if (unaff_XMM9_Da < fVar3 * fVar8) {
    if (ABS(fVar8) <= ABS(fVar3)) {
      fVar3 = fVar3 - fVar8;
      *(float *)(param_1 + 0x16c) = fVar3;
    }
    else {
      *(int32_t *)(param_1 + 0x16c) = 0;
      fVar3 = 0.0;
    }
  }
  if (ABS(unaff_XMM8_Da) < 0.001) {
    *(int32_t *)(param_1 + 0x168) = 0;
  }
  if (ABS(fVar3) < 0.001) {
    *(int32_t *)(param_1 + 0x16c) = 0;
  }
  return;
}





// 函数: void FUN_180599afb(int64_t param_1,uint64_t param_2,float param_3,uint param_4)
void FUN_180599afb(int64_t param_1,uint64_t param_2,float param_3,uint param_4)

{
  int32_t in_EAX;
  float fVar1;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  
  if ((float)((uint)param_3 & param_4) <= (float)((uint)unaff_XMM8_Da & param_4)) {
    param_3 = unaff_XMM8_Da - param_3;
    *(float *)(param_1 + 0x168) = param_3;
  }
  else {
    *(int32_t *)(param_1 + 0x168) = in_EAX;
    param_3 = 0.0;
  }
  fVar1 = *(float *)(param_1 + 0x16c);
  if (unaff_XMM9_Da < fVar1 * unaff_XMM10_Da) {
    if ((float)((uint)unaff_XMM10_Da & param_4) <= (float)((uint)fVar1 & param_4)) {
      fVar1 = fVar1 - unaff_XMM10_Da;
      *(float *)(param_1 + 0x16c) = fVar1;
    }
    else {
      *(int32_t *)(param_1 + 0x16c) = in_EAX;
      fVar1 = 0.0;
    }
  }
  if ((float)((uint)param_3 & param_4) < 0.001) {
    *(int32_t *)(param_1 + 0x168) = in_EAX;
  }
  if ((float)((uint)fVar1 & param_4) < 0.001) {
    *(int32_t *)(param_1 + 0x16c) = in_EAX;
  }
  return;
}





// 函数: void FUN_180599b7e(float param_1,uint64_t param_2,uint param_3,uint param_4)
void FUN_180599b7e(float param_1,uint64_t param_2,uint param_3,uint param_4)

{
  int32_t in_EAX;
  int64_t in_RCX;
  
  *(int32_t *)(in_RCX + 0x168) = in_EAX;
  if ((float)(param_3 & param_4) < param_1) {
    *(int32_t *)(in_RCX + 0x16c) = in_EAX;
  }
  return;
}





// 函数: void FUN_180599ba3(int64_t param_1,float *param_2,float param_3)
void FUN_180599ba3(int64_t param_1,float *param_2,float param_3)

{
  float fVar1;
  
  *(float *)(param_1 + 0xe0) = *param_2 + *(float *)(param_1 + 0xe0);
  *(float *)(param_1 + 0xe4) = param_2[1] + *(float *)(param_1 + 0xe4);
  *(float *)(param_1 + 0xe8) = param_2[2] + *(float *)(param_1 + 0xe8);
  fVar1 = param_2[1];
  *(float *)(param_1 + 0xf0) = param_3 * *param_2 + *(float *)(param_1 + 0xf0);
  *(float *)(param_1 + 0xf4) = fVar1 * param_3 + *(float *)(param_1 + 0xf4);
  return;
}





// 函数: void FUN_180599c20(float *param_1)
void FUN_180599c20(float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  int32_t uStack_8c;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  float fStack_58;
  int8_t uStack_54;
  
  fVar1 = param_1[0xb];
  iVar3 = 0;
  *(int8_t *)(param_1 + 0xc) = 0;
  fVar2 = param_1[2];
  do {
    uStack_8c = 0x7f7fffff;
    uStack_54 = 0;
    fStack_58 = 0.0;
    uStack_78 = 0;
    uStack_70 = 0x7f7fffff3f800000;
    fVar4 = (float)iVar3 * 0.05;
    fStack_98 = fVar4 * param_1[4] + *param_1;
    fStack_90 = fVar4 * param_1[6] + param_1[2];
    fStack_94 = fVar4 * param_1[5] + param_1[1];
    uStack_68 = 0;
    uStack_60 = 0;
    FUN_1801aa0f0(*(uint64_t *)(param_1 + 8),&fStack_98);
    if (fStack_58 < (fVar2 - fVar1 * 0.5) - 3.0) {
      *(int16_t *)(param_1 + 0xc) = 0x101;
      return;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10);
  *(int8_t *)((int64_t)param_1 + 0x31) = 1;
  return;
}





// 函数: void FUN_180599d60(float *param_1,float *param_2,int64_t param_3)
void FUN_180599d60(float *param_1,float *param_2,int64_t param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  float fVar6;
  bool bVar7;
  float *pfVar8;
  int64_t lVar9;
  float *pfVar10;
  int iVar11;
  char cVar12;
  uint64_t uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int8_t auVar21 [16];
  float fVar22;
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
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  int32_t uStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_fc;
  int32_t uStack_f8;
  int32_t uStack_f4;
  int32_t uStack_f0;
  int32_t uStack_dc;
  
  pfVar3 = param_1 + 8;
  fVar27 = param_1[9];
  pfVar1 = param_2 + 4;
  fVar17 = param_1[1] - param_1[5];
  fVar25 = *param_2;
  fVar22 = param_1[5] - fVar27;
  fVar16 = param_2[2];
  fVar28 = *pfVar3;
  fVar29 = param_1[10];
  fVar14 = param_1[2] - param_1[6];
  fVar30 = param_1[6] - fVar29;
  fVar6 = param_2[1];
  fVar24 = *param_1 - param_1[4];
  fVar31 = param_1[4] - fVar28;
  fVar33 = fVar22 * fVar14 - fVar30 * fVar17;
  fVar32 = fVar31 * fVar17 - fVar22 * fVar24;
  fVar24 = fVar30 * fVar24 - fVar31 * fVar14;
  fVar14 = fVar24 * fVar24 + fVar33 * fVar33 + fVar32 * fVar32;
  auVar21 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
  fVar22 = auVar21._0_4_;
  fVar17 = *param_2;
  fVar14 = fVar22 * 0.5 * (3.0 - fVar14 * fVar22 * fVar22);
  fVar33 = fVar33 * fVar14;
  fVar24 = fVar24 * fVar14;
  fVar32 = fVar32 * fVar14;
  fVar22 = param_2[2];
  fVar14 = param_2[5];
  fStack_174 = (fVar6 - fVar27) * fVar24 + (fVar17 - fVar28) * fVar33 + (fVar22 - fVar29) * fVar32;
  fVar27 = (fVar14 - fVar27) * fVar24 + (*pfVar1 - fVar28) * fVar33 + (param_2[6] - fVar29) * fVar32
  ;
  fStack_19c = param_2[8];
  fStack_178 = -fStack_19c;
  if ((fStack_174 < fStack_178) && (fVar27 < fStack_178)) {
    return;
  }
  if ((fStack_19c < fStack_174) && (fStack_19c < fVar27)) {
    return;
  }
  fVar28 = fVar27;
  if (fStack_174 <= fVar27) {
    fVar28 = fStack_174;
  }
  cVar12 = '\0';
  uVar13 = 1;
  bVar7 = false;
  fStack_19c = fStack_19c - fVar28;
  lVar9 = 0;
  fVar28 = -fVar33;
  fVar29 = -fVar24;
  iVar11 = 0;
  fVar30 = -fVar32;
  pfVar10 = pfVar3;
  pfVar8 = param_2;
  do {
    iVar11 = iVar11 + 1;
    fStack_128 = *pfVar10;
    fStack_124 = pfVar10[1];
    fStack_120 = pfVar10[2];
    fStack_11c = pfVar10[3];
    pfVar2 = param_1 + (int64_t)
                       (2 - (iVar11 + (iVar11 / 3 + (iVar11 >> 0x1f) +
                                      (int)(((int64_t)iVar11 / 3 + ((int64_t)iVar11 >> 0x3f) &
                                            0xffffffffU) >> 0x1f)) * -3)) * 4;
    fStack_138 = *pfVar2;
    fStack_164 = pfVar2[1];
    fStack_144 = pfVar2[2];
    fStack_12c = pfVar2[3];
    fVar31 = fStack_138 - fStack_128;
    fStack_168 = fStack_164 - fStack_124;
    fStack_148 = fStack_144 - fStack_120;
    fStack_188 = fVar17 - fStack_128;
    fStack_184 = fVar22 - fStack_120;
    fStack_17c = *pfVar1 - fStack_128;
    fStack_180 = fVar14 - fStack_124;
    fVar26 = fVar24 * fStack_148 - fVar32 * fStack_168;
    fVar15 = fVar32 * fVar31 - fVar33 * fStack_148;
    fVar18 = fVar33 * fStack_168 - fVar24 * fVar31;
    fVar19 = fVar15 * fVar15 + fVar26 * fVar26 + fVar18 * fVar18;
    if (fVar19 <= 0.0) {
      uVar13 = 0;
      cVar12 = '\x01';
    }
    else {
      fVar17 = 1.0 / SQRT(fVar19);
      fVar19 = fVar17 * fVar15 * (fVar6 - fStack_124) + fVar17 * fVar26 * fStack_188 +
               fVar17 * fVar18 * fStack_184;
      fVar15 = fVar17 * fVar15 * fStack_180 + fVar17 * fVar26 * fStack_17c +
               fVar17 * fVar18 * (param_2[6] - fStack_120);
      fVar17 = fVar25;
      fVar22 = fVar16;
      if ((fVar19 <= 0.0) || (fVar15 <= 0.0)) {
        if ((fStack_178 <= fVar19) || (fStack_178 <= fVar15)) {
          pfVar8 = param_2;
          fStack_160 = fStack_164;
          fStack_15c = fStack_164;
          fStack_140 = fStack_144;
          fStack_13c = fStack_144;
          fStack_134 = fStack_164;
          fStack_130 = fStack_144;
          FUN_1806457f0(param_2,pfVar1,&fStack_128,&fStack_138,&fStack_158,&fStack_198);
          fVar15 = fStack_154 - fStack_194;
          fVar18 = fStack_158 - fStack_198;
          fVar23 = fStack_150 - fStack_190;
          fVar19 = fVar15 * fVar15 + fVar18 * fVar18 + fVar23 * fVar23;
          fVar26 = fStack_168 * fStack_168 + fVar31 * fVar31 + fStack_148 * fStack_148;
          auVar21 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
          fVar20 = auVar21._0_4_;
          fVar26 = fVar20 * 0.5 * (3.0 - fVar26 * fVar20 * fVar20);
          if ((fStack_168 * fVar26 * fVar23 - fVar15 * fVar26 * fStack_148) * fVar33 +
              (fVar26 * fStack_148 * fVar18 - fVar26 * fVar31 * fVar23) * fVar24 +
              (fVar26 * fVar31 * fVar15 - fStack_168 * fVar26 * fVar18) * fVar32 < 0.0) {
            cVar12 = '\x01';
            fVar31 = pfVar8[8] - SQRT(fVar19);
            if (0.0 <= fVar31) {
              uStack_1c8 = CONCAT44(fStack_194,fStack_198);
              uStack_1c0 = CONCAT44(uStack_18c,fStack_190);
              if (0.01 < SQRT(fVar19)) {
                auVar21 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
                fVar28 = auVar21._0_4_;
                fVar30 = fVar28 * 0.5 * (3.0 - fVar19 * fVar28 * fVar28);
                fVar29 = -(fVar15 * fVar30);
                fVar28 = -(fVar30 * fVar18);
                fVar30 = -(fVar23 * fVar30);
              }
              bVar7 = true;
              fStack_19c = fVar31;
            }
            else {
              uVar13 = 0;
            }
          }
        }
        else {
          uVar13 = 0;
          cVar12 = '\x01';
        }
      }
    }
    lVar9 = lVar9 + 1;
    pfVar10 = pfVar10 + -4;
  } while ((cVar12 == '\0') && (lVar9 < 3));
  if ((char)uVar13 == '\0') {
    return;
  }
  iVar11 = *(int *)(param_3 + 0x40);
  if (1 < iVar11) {
    return;
  }
  if (bVar7) {
    fVar16 = uStack_1c8._4_4_;
    fVar17 = (float)uStack_1c8;
    fVar22 = (float)uStack_1c0;
    goto LAB_18059a67b;
  }
  fVar16 = fVar6;
  if (0.0 <= fStack_174) {
    if (0.0 < fVar27) {
      if (fVar27 <= fStack_174) goto FUN_18059a4b2;
      goto LAB_18059a3ee;
    }
    if (fStack_174 < 0.0) goto LAB_18059a4dd;
  }
  else {
LAB_18059a4dd:
    if (fVar27 < 0.0) {
      if (fStack_174 <= fVar27) {
FUN_18059a4b2:
        fVar17 = *pfVar1;
        fVar22 = param_2[6];
        fVar16 = param_2[5];
        fStack_174 = fVar27;
      }
LAB_18059a3ee:
      fVar16 = fVar16 - fVar24 * fStack_174;
      fVar17 = fVar17 - fVar33 * fStack_174;
      fVar22 = fVar22 - fVar32 * fStack_174;
      uStack_1c8 = CONCAT44(fVar16,fVar17);
      uStack_1c0 = CONCAT44(0x7f7fffff,fVar22);
      goto LAB_18059a67b;
    }
  }
  fVar22 = param_2[5] - fVar6;
  fVar31 = param_2[6] - pfVar8[2];
  fVar17 = *pfVar1 - fVar17;
  fVar27 = fVar22 * fVar22 + fVar17 * fVar17 + fVar31 * fVar31;
  auVar21 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
  fVar16 = auVar21._0_4_;
  fVar14 = fVar16 * 0.5 * (3.0 - fVar27 * fVar16 * fVar16);
  fVar25 = *pfVar8;
  fVar27 = fVar14 * fVar22 * fVar24 + fVar14 * fVar17 * fVar33 + fVar14 * fVar31 * fVar32;
  if (fVar27 == 0.0) {
    fVar17 = (*pfVar1 + fVar25) * 0.5;
    fVar16 = (fVar6 + param_2[5]) * 0.5;
    fVar22 = (pfVar8[2] + param_2[6]) * 0.5;
  }
  else {
    fVar27 = ((param_1[9] - fVar6) * fVar24 + (*pfVar3 - fVar25) * fVar33 +
             (param_1[10] - pfVar8[2]) * fVar32) / fVar27;
    fVar17 = fVar27 * fVar14 * fVar17 + fVar25;
    fVar16 = fVar27 * fVar14 * fVar22 + fVar6;
    fVar22 = fVar27 * fVar14 * fVar31 + pfVar8[2];
  }
  uStack_1c8 = CONCAT44(fVar16,fVar17);
  uStack_1c0 = CONCAT44(0x7f7fffff,fVar22);
LAB_18059a67b:
  if ((((fVar6 - fVar16) * fVar29 + (fVar25 - fVar17) * fVar28 + (pfVar8[2] - fVar22) * fVar30 < 0.0
       ) || ((param_2[5] - fVar16) * fVar29 + (*pfVar1 - fVar17) * fVar28 +
             (param_2[6] - fVar22) * fVar30 < 0.0)) && (iVar11 < 1)) {
    lVar9 = (int64_t)iVar11 * 0x40;
    *(uint64_t *)(lVar9 + param_3) = 0;
    ((uint64_t *)(lVar9 + param_3))[1] = 0;
    fStack_fc = (float)uStack_1c8;
    uStack_f8 = (int32_t)((uint64_t)uStack_1c8 >> 0x20);
    uStack_f4 = (int32_t)uStack_1c0;
    uStack_f0 = (int32_t)((uint64_t)uStack_1c0 >> 0x20);
    pfVar3 = (float *)(lVar9 + 0x10 + param_3);
    *pfVar3 = fStack_19c;
    pfVar3[1] = 0.0;
    pfVar3[2] = 0.0;
    pfVar3[3] = fStack_fc;
    puVar4 = (uint64_t *)(lVar9 + 0x20 + param_3);
    *puVar4 = CONCAT44(uStack_f4,uStack_f8);
    puVar4[1] = CONCAT44(fVar28,uStack_f0) ^ 0x8000000000000000;
    puVar5 = (uint64_t *)(lVar9 + 0x30 + param_3);
    *puVar5 = CONCAT44(fVar30,fVar29) ^ 0x8000000080000000;
    puVar5[1] = CONCAT44(uStack_dc,0x7f7fffff);
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 1;
  }
  return;
}





