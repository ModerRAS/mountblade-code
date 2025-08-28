#include "TaleWorlds.Native.Split.h"

// 06_utilities_part012.c - 8 个函数

// 函数: void FUN_180897859(float param_1)
void FUN_180897859(float param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float *pfVar5;
  longlong unaff_RBP;
  float unaff_R13D;
  longlong unaff_R14;
  longlong unaff_R15;
  float extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t uVar6;
  int32_t uStackX_20;
  void *in_stack_00000028;
  float in_stack_00000030;
  int32_t in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000050;
  
  if (param_1 != 1.0) {
    in_stack_00000028 = &UNK_180983738;
    in_stack_00000038 = uStackX_20;
    in_stack_00000030 = unaff_R13D;
    fStack0000000000000040 = param_1;
    iVar2 = FUN_180897520(param_1,&stack0x00000028);
    param_1 = extraout_XMM0_Da;
    if (iVar2 != 0) goto LAB_180897af6;
  }
  iVar2 = FUN_180868270(param_1,&stack0x00000050,0);
  if (iVar2 == 0) {
    if (in_stack_00000050 != 1.0) {
      fStack0000000000000040 = in_stack_00000050;
      in_stack_00000028 = &UNK_1809837c0;
      in_stack_00000038 = uStackX_20;
      in_stack_00000030 = unaff_R13D;
      iVar2 = FUN_180897520(in_stack_00000050,&stack0x00000028);
      if (iVar2 != 0) goto LAB_180897af6;
    }
    pfVar5 = (float *)(unaff_R15 + 0x94);
    fVar4 = unaff_R13D;
    do {
      fVar1 = *pfVar5;
      if (fVar1 != 0.0) {
        in_stack_00000038 = uStackX_20;
        in_stack_00000028 = &UNK_1809839d8;
        in_stack_00000030 = unaff_R13D;
        fStack0000000000000040 = fVar4;
        fStack0000000000000044 = fVar1;
        iVar2 = FUN_180897520(fVar1,&stack0x00000028);
        if (iVar2 != 0) goto LAB_180897af6;
      }
      fVar4 = (float)((int)fVar4 + 1);
      pfVar5 = pfVar5 + 1;
    } while ((int)fVar4 < 4);
    pfVar5 = (float *)&UNK_1809850f8;
    fVar4 = unaff_R13D;
    do {
      fVar1 = *(float *)(unaff_R15 + -0x180985054 + (longlong)pfVar5);
      if (fVar1 != *pfVar5) {
        in_stack_00000038 = uStackX_20;
        in_stack_00000028 = &UNK_180983950;
        in_stack_00000030 = unaff_R13D;
        fStack0000000000000040 = fVar4;
        fStack0000000000000044 = fVar1;
        iVar2 = FUN_180897520(fVar1,&stack0x00000028);
        if (iVar2 != 0) goto LAB_180897af6;
      }
      fVar4 = (float)((int)fVar4 + 1);
      pfVar5 = pfVar5 + 1;
    } while ((int)fVar4 < 6);
    uVar3 = func_0x000180855b70(unaff_R14 + 200);
    uVar6 = extraout_XMM0_Da_00;
    if ((float)(uVar3 / 0x30) != 0.0) {
      in_stack_00000028 = &UNK_180983be8;
      in_stack_00000038 = uStackX_20;
      in_stack_00000030 = unaff_R13D;
      fStack0000000000000040 = (float)(uVar3 / 0x30);
      iVar2 = FUN_180897520(extraout_XMM0_Da_00,&stack0x00000028);
      uVar6 = extraout_XMM0_Da_01;
      if (iVar2 != 0) goto LAB_180897af6;
    }
    if ((*(uint *)(unaff_R14 + 0x2d8) >> 1 & 1) != 0) {
      in_stack_00000028 = &UNK_180983a60;
      in_stack_00000038 = uStackX_20;
      fStack0000000000000040 = (float)CONCAT31(fStack0000000000000040._1_3_,1);
      in_stack_00000030 = unaff_R13D;
      iVar2 = FUN_180897520(uVar6,&stack0x00000028);
      if (iVar2 != 0) goto LAB_180897af6;
    }
    iVar2 = FUN_1808605e0();
    if (iVar2 != 2) {
      in_stack_00000028 = &UNK_180983ae8;
      in_stack_00000038 = uStackX_20;
      in_stack_00000030 = unaff_R13D;
      iVar2 = FUN_180897520(extraout_XMM0_Da_02,&stack0x00000028);
      if (iVar2 != 0) goto LAB_180897af6;
    }
    iVar2 = FUN_1808605e0();
    uVar6 = extraout_XMM0_Da_03;
    if (iVar2 == 4) {
      in_stack_00000028 = &UNK_180983b68;
      in_stack_00000038 = uStackX_20;
      in_stack_00000030 = unaff_R13D;
      fStack0000000000000040 = unaff_R13D;
      iVar2 = FUN_180897520(extraout_XMM0_Da_03,&stack0x00000028);
      uVar6 = extraout_XMM0_Da_04;
      if (iVar2 != 0) goto LAB_180897af6;
    }
    if ((*(uint *)(unaff_R14 + 0x2d8) >> 3 & 1) != 0) {
      in_stack_00000028 = &UNK_180983cf8;
      in_stack_00000038 = uStackX_20;
      in_stack_00000030 = unaff_R13D;
      FUN_180897520(uVar6,&stack0x00000028);
    }
  }
LAB_180897af6:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x90) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180897afe(void)
void FUN_180897afe(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x90) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180897b0e(void)
void FUN_180897b0e(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x90) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180897b16(void)
void FUN_180897b16(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x90) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180897b40(longlong *param_1,longlong param_2,int32_t param_3)
void FUN_180897b40(longlong *param_1,longlong param_2,int32_t param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int8_t auStack_2a8 [32];
  int32_t auStack_288 [2];
  void *puStack_280;
  int32_t uStack_278;
  int32_t uStack_270;
  void *puStack_268;
  int32_t uStack_260;
  int32_t uStack_258;
  int iStack_250;
  int32_t uStack_24c;
  int32_t uStack_248;
  int32_t uStack_244;
  int32_t uStack_240;
  int32_t uStack_23c;
  uint64_t auStack_238 [64];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_2a8;
  iVar4 = 0;
  iVar7 = 0;
  do {
    if ((iVar7 < 0) || (*(int *)(param_2 + 0x1a8) <= iVar7)) goto LAB_180897ce8;
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x1a0) + (longlong)iVar7 * 8);
    if (**(int **)(lVar1 + 0xd0) != 0) {
      auStack_288[0] = 0;
      iVar3 = func_0x00018088c500(*(int **)(lVar1 + 0xd0),auStack_288);
      if (iVar3 != 0) {
LAB_180897ce8:
                    // WARNING: Subroutine does not return
        FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_2a8);
      }
      uStack_24c = *(int32_t *)(lVar1 + 0x10);
      uStack_248 = *(int32_t *)(lVar1 + 0x14);
      uStack_244 = *(int32_t *)(lVar1 + 0x18);
      uStack_240 = *(int32_t *)(lVar1 + 0x1c);
      uStack_260 = 0;
      iVar3 = iVar4 + 1;
      puStack_268 = &UNK_180982f38;
      uStack_23c = auStack_288[0];
      uStack_258 = param_3;
      iStack_250 = iVar4;
      iVar4 = FUN_180897520(param_1,&puStack_268);
      if (iVar4 != 0) goto LAB_180897ce8;
      iVar6 = 0;
      iVar5 = func_0x0001808c7ed0(*(uint64_t *)(lVar1 + 0xd0));
      iVar4 = iVar3;
      if (0 < iVar5) {
        do {
          uStack_278 = 0;
          lVar2 = param_1[4];
          puStack_280 = &UNK_1809834f8;
          uStack_270 = auStack_288[0];
          if (((char)lVar2 == '\0') && (iVar3 = FUN_1808987e0(param_1,1), iVar3 != 0))
          goto LAB_180897ce8;
          iVar3 = (**(code **)(puStack_280 + 0x10))(&puStack_280,auStack_238,0x200);
          func_0x00018074b7b0((longlong)auStack_238 + (longlong)iVar3,0x200 - iVar3,10);
          iVar3 = (**(code **)(*param_1 + 8))(param_1,auStack_238);
          if (iVar3 != 0) goto LAB_180897ce8;
          if ((char)lVar2 == '\0') {
            iVar3 = (**(code **)(*param_1 + 0x18))(param_1);
            if (iVar3 != 0) goto LAB_180897ce8;
            *(int8_t *)(param_1 + 4) = 0;
          }
          iVar6 = iVar6 + 1;
          iVar3 = func_0x0001808c7ed0(*(uint64_t *)(lVar1 + 0xd0));
        } while (iVar6 < iVar3);
      }
    }
    iVar7 = iVar7 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180897d20(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180897d20(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  int8_t auStack_438 [32];
  int8_t auStack_418 [1024];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_438;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  FUN_18076b930(auStack_418,0x400,param_2,&uStackX_18);
  (**(code **)(*param_1 + 8))(param_1,auStack_418);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_438);
}



uint64_t FUN_180897d90(longlong *param_1)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  void *puStack_28;
  int32_t uStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  
  uStack_20 = 0;
  puStack_28 = &UNK_180986408;
  uStack_18 = 2;
  uStack_14 = 0x20214;
  uVar2 = FUN_180897520(param_1,&puStack_28);
  if ((int)uVar2 == 0) {
    lVar1 = *(longlong *)(param_1[1] + 0x78);
    lVar3 = func_0x000180879a40();
    if (lVar3 == 0) {
      uVar2 = 0x1c;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 8))(param_1,&UNK_1809864dc);
      if ((int)uVar2 == 0) {
        uVar4 = 0x14;
        uVar2 = FUN_180897d20(param_1,&UNK_1809864e0,2,2,0x14);
        if (((((int)uVar2 == 0) &&
             (uVar2 = FUN_180897d20(param_1,&UNK_180986508,*(int32_t *)(lVar1 + 0x116bc)),
             (int)uVar2 == 0)) &&
            (uVar2 = FUN_180897d20(param_1,&UNK_180986550,(ulonglong)*(uint *)(lVar1 + 0x6d8),
                                   (ulonglong)*(uint *)(lVar1 + 0x6dc) /
                                   (ulonglong)*(uint *)(lVar1 + 0x6d8),uVar4), (int)uVar2 == 0)) &&
           (uVar2 = FUN_180897d20(param_1,&UNK_180986590,*(int32_t *)(lVar1 + 0x6d0),
                                  *(int32_t *)(lVar1 + 0x1193c),*(int32_t *)(lVar1 + 0x6d4)),
           (int)uVar2 == 0)) {
          uVar4 = *(int32_t *)(lVar1 + 0x11668);
          uVar8 = *(int32_t *)(lVar1 + 0x11624);
          uVar7 = *(int32_t *)(lVar1 + 0x11620);
          uVar6 = *(int32_t *)(lVar1 + 0x1161c);
          uVar2 = FUN_180897d20(param_1,&UNK_1809865f0,*(int32_t *)(lVar1 + 0x1160c),
                                *(int32_t *)(lVar1 + 0x11610),*(int32_t *)(lVar1 + 0x11614),
                                *(int32_t *)(lVar1 + 0x11618),uVar6,uVar7,uVar8,uVar4);
          if (((int)uVar2 == 0) &&
             (uVar2 = FUN_180897d20(param_1,&UNK_1809866c0,*(int32_t *)(lVar1 + 0x11628),
                                    (double)*(float *)(lVar1 + 0x11640),
                                    *(int32_t *)(lVar1 + 0x11644),
                                    *(int32_t *)(lVar1 + 0x1164c),uVar6,uVar7,uVar8,uVar4),
             (int)uVar2 == 0)) {
            uVar6 = *(int32_t *)(lVar1 + 0x11660);
            uVar2 = FUN_180897d20(param_1,&UNK_180986730,(double)*(float *)(lVar1 + 0x11650),
                                  *(int32_t *)(lVar1 + 0x11654),*(int32_t *)(lVar1 + 0x11658),
                                  *(int32_t *)(lVar1 + 0x1165c),uVar6,uVar7,uVar8,uVar4);
            if ((int)uVar2 == 0) {
              uVar5 = *(int32_t *)(lVar3 + 0x10);
              uVar2 = FUN_180897d20(param_1,&UNK_1809867b0,*(int32_t *)(lVar3 + 4),
                                    *(int32_t *)(lVar3 + 8),*(int32_t *)(lVar3 + 0xc),uVar5,
                                    uVar6,uVar7,uVar8,uVar4);
              if ((((int)uVar2 == 0) &&
                  (uVar2 = FUN_180897d20(param_1,&UNK_180986850,*(int32_t *)(lVar1 + 0x1e0),
                                         *(int32_t *)(param_1[1] + 0x20),
                                         *(int32_t *)(lVar1 + 0x78),uVar5,uVar6,uVar7,uVar8,uVar4
                                        ), (int)uVar2 == 0)) &&
                 ((uVar2 = (**(code **)(*param_1 + 8))(param_1,&UNK_1809864dc), (int)uVar2 == 0 &&
                  (((*(uint *)(param_1 + 3) & 2) != 0 ||
                   (uVar2 = FUN_180898040(param_1), (int)uVar2 == 0)))))) {
                uVar2 = 0;
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}



uint64_t FUN_180897dd3(void)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong *unaff_RBX;
  
  lVar1 = func_0x000180879a40();
  if (lVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    uVar2 = (**(code **)(*unaff_RBX + 8))();
    if ((((((((int)uVar2 == 0) && (uVar2 = FUN_180897d20(), (int)uVar2 == 0)) &&
           (uVar2 = FUN_180897d20(), (int)uVar2 == 0)) &&
          ((uVar2 = FUN_180897d20(), (int)uVar2 == 0 && (uVar2 = FUN_180897d20(), (int)uVar2 == 0)))
          ) && ((uVar2 = FUN_180897d20(), (int)uVar2 == 0 &&
                ((uVar2 = FUN_180897d20(), (int)uVar2 == 0 &&
                 (uVar2 = FUN_180897d20(), (int)uVar2 == 0)))))) &&
        (uVar2 = FUN_180897d20(), (int)uVar2 == 0)) &&
       ((uVar2 = FUN_180897d20(), (int)uVar2 == 0 &&
        (uVar2 = (**(code **)(*unaff_RBX + 8))(), (int)uVar2 == 0)))) {
      if (((*(uint *)(unaff_RBX + 3) & 2) == 0) && (uVar2 = FUN_180898040(), (int)uVar2 != 0)) {
        return uVar2;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}





// 函数: void FUN_18089802e(void)
void FUN_18089802e(void)

{
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180898040(longlong *param_1)
void FUN_180898040(longlong *param_1)

{
  float fVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  void *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  float fVar18;
  longlong *plVar19;
  bool bVar20;
  int8_t auStack_368 [32];
  float afStack_348 [2];
  longlong *plStack_340;
  ulonglong uStack_338;
  longlong *aplStack_330 [2];
  longlong lStack_320;
  longlong *plStack_318;
  uint64_t uStack_310;
  float afStack_308 [2];
  longlong alStack_300 [2];
  int8_t auStack_2f0 [8];
  uint64_t auStack_2e8 [2];
  void *puStack_2d8;
  int32_t uStack_2d0;
  float fStack_2c8;
  uint uStack_2c4;
  int32_t uStack_2c0;
  int32_t uStack_2bc;
  int32_t uStack_2b8;
  uint64_t uStack_2b4;
  uint64_t uStack_2ac;
  int32_t uStack_2a4;
  int32_t uStack_2a0;
  int32_t uStack_29c;
  int32_t uStack_298;
  longlong lStack_294;
  uint uStack_28c;
  int8_t uStack_288;
  int8_t auStack_238 [512];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_368;
  plVar16 = (longlong *)0x0;
  alStack_300[1] = 0;
  iVar6 = FUN_18088c740(alStack_300 + 1,param_1[1]);
  if ((iVar6 == 0) && (iVar6 = FUN_1808987e0(param_1,1), iVar6 == 0)) {
    (**(code **)(*param_1 + 8))(param_1,&UNK_180986488);
    if (((*(uint *)(param_1 + 3) & 0x1000000) == 0) ||
       (iVar6 = FUN_180896c60(param_1,*(uint64_t *)(param_1[1] + 0xc0),0,1), iVar6 == 0)) {
      lVar15 = param_1[1];
      plVar14 = (longlong *)(lVar15 + 0x50);
      plVar10 = (longlong *)(*(longlong *)(lVar15 + 0x50) + -8);
      if (*(longlong *)(lVar15 + 0x50) == 0) {
        plVar10 = plVar16;
      }
      plVar13 = plVar16;
      if (plVar10 != (longlong *)0x0) {
        plVar13 = plVar10 + 1;
      }
      if (plVar13 != plVar14) {
        do {
          plVar10 = plVar13 + -1;
          if (plVar13 == (longlong *)0x0) {
            plVar10 = plVar16;
          }
          lVar15 = plVar10[3];
          if (lVar15 != 0) {
            afStack_348[0] = 0.0;
            iVar6 = func_0x00018088c500(plVar10,afStack_348);
            if ((iVar6 != 0) || (iVar6 = FUN_180896c60(param_1,lVar15,afStack_348[0],0), iVar6 != 0)
               ) goto LAB_18089866f;
          }
          if (plVar13 == plVar14) break;
          plVar10 = (longlong *)(*plVar13 + -8);
          if (*plVar13 == 0) {
            plVar10 = plVar16;
          }
          plVar13 = plVar16;
          if (plVar10 != (longlong *)0x0) {
            plVar13 = plVar10 + 1;
          }
        } while (plVar13 != plVar14);
        lVar15 = param_1[1];
      }
      iVar6 = *(int *)(lVar15 + 0x28);
      if (iVar6 != 1) {
        uStack_338 = uStack_338 & 0xffffffff00000000;
        plStack_340 = (longlong *)&UNK_180982378;
        aplStack_330[0] = (longlong *)CONCAT44(aplStack_330[0]._4_4_,iVar6);
        iVar7 = FUN_180897520(param_1,&plStack_340);
        if (iVar7 != 0) goto LAB_18089866f;
      }
      plVar14 = plVar16;
      plVar10 = plVar16;
      plVar13 = plVar16;
      plVar19 = plVar16;
      alStack_300[0] = (longlong)iVar6;
      if (0 < iVar6) {
        do {
          lVar15 = param_1[1];
          uStack_2d0 = 0;
          puStack_2d8 = &UNK_1809823f8;
          fVar18 = SUB84(plVar13,0);
          plVar13 = (longlong *)(lVar15 + 0xe0 + (longlong)plVar10);
          lVar11 = *plVar13;
          uVar9 = plVar13[1];
          uStack_2c4 = (uint)lVar11;
          uStack_2c0 = (int32_t)((ulonglong)lVar11 >> 0x20);
          uStack_2bc = (int32_t)uVar9;
          uStack_2b8 = (int32_t)(uVar9 >> 0x20);
          puVar2 = (uint64_t *)(lVar15 + 0xf0 + (longlong)plVar10);
          uStack_2b4 = *puVar2;
          uStack_2ac = puVar2[1];
          puVar3 = (int32_t *)(lVar15 + 0x100 + (longlong)plVar10);
          uStack_2a4 = *puVar3;
          uStack_2a0 = puVar3[1];
          uStack_29c = puVar3[2];
          uStack_298 = puVar3[3];
          lStack_294 = *(longlong *)(lVar15 + 0x260 + (longlong)plVar19);
          uStack_28c = *(uint *)(lVar15 + 0x268 + (longlong)plVar19);
          lVar11 = lVar11 - lStack_294;
          if (lVar11 == 0) {
            lVar11 = (uVar9 & 0xffffffff) - (ulonglong)uStack_28c;
          }
          lVar15 = param_1[4];
          uStack_288 = lVar11 == 0;
          fStack_2c8 = fVar18;
          if (((char)lVar15 == '\0') &&
             (iVar6 = FUN_1808987e0(param_1,CONCAT71((uint7)(uint3)(uStack_28c >> 8),1)), iVar6 != 0
             )) goto LAB_18089866f;
          iVar6 = (**(code **)(puStack_2d8 + 0x10))(&puStack_2d8,auStack_238,0x200);
          func_0x00018074b7b0(auStack_238 + iVar6,0x200 - iVar6,10);
          iVar6 = (**(code **)(*param_1 + 8))(param_1,auStack_238);
          if (iVar6 != 0) goto LAB_18089866f;
          if ((char)lVar15 == '\0') {
            iVar6 = (**(code **)(*param_1 + 0x18))(param_1);
            if (iVar6 != 0) goto LAB_18089866f;
            *(int8_t *)(param_1 + 4) = 0;
          }
          plVar14 = (longlong *)((longlong)plVar14 + 1);
          plVar10 = plVar10 + 6;
          plVar13 = (longlong *)(ulonglong)((int)fVar18 + 1);
          plVar19 = (longlong *)((longlong)plVar19 + 0xc);
        } while ((longlong)plVar14 < alStack_300[0]);
      }
      lVar15 = param_1[1] + 0x60;
      iVar6 = func_0x0001808675f0(lVar15);
      plVar14 = plVar16;
      if (0 < iVar6) {
        do {
          func_0x000180867660(lVar15,auStack_2f0,plVar14);
          func_0x0001808676a0(lVar15,plVar14,afStack_348,alStack_300);
          lVar11 = func_0x000180867680(lVar15,plVar14);
          cVar5 = func_0x000180894c50(lVar11,0);
          if ((cVar5 == '\0') && (afStack_348[0] != *(float *)(lVar11 + 0x4c))) {
            uStack_2c0 = auStack_2f0._0_4_;
            uStack_2bc = auStack_2f0._4_4_;
            fStack_2c8 = afStack_348[0];
            uStack_2d0 = 0;
            puStack_2d8 = &UNK_180982260;
            uStack_2c4 = uStack_2c4 & 0xffffff00;
            if (*(int *)(lVar11 + 0x58) < 1) {
              puVar12 = &system_buffer_ptr;
            }
            else {
              puVar12 = *(void **)(lVar11 + 0x50);
            }
            func_0x00018076b450(&uStack_2b8,puVar12,0x80);
            lVar11 = param_1[4];
            if ((char)lVar11 == '\0') {
              *(int8_t *)(param_1 + 4) = 1;
              iVar7 = FUN_18073a200(*(uint64_t *)(param_1[1] + 0x78),auStack_2e8);
              if (((iVar7 != 0) || (iVar7 = FUN_18073c4c0(auStack_2e8[0],&lStack_320,0), iVar7 != 0)
                  ) || (iVar7 = (**(code **)(*param_1 + 0x10))(param_1), iVar7 != 0))
              goto LAB_18089866f;
              uVar9 = (ulonglong)(lStack_320 * 48000) /
                      (ulonglong)*(uint *)((longlong)param_1 + 0x1c);
              lVar4 = param_1[2];
              plStack_340 = (longlong *)&UNK_180986390;
              uStack_338 = uStack_338 & 0xffffffff00000000;
              param_1[2] = uVar9;
              aplStack_330[0] = plVar16;
              if (lVar4 != 0) {
                aplStack_330[0] = (longlong *)(uVar9 - lVar4);
              }
              iVar7 = FUN_180897520(param_1,&plStack_340);
              if (iVar7 != 0) goto LAB_18089866f;
            }
            iVar7 = (**(code **)(puStack_2d8 + 0x10))(&puStack_2d8,auStack_238,0x200);
            func_0x00018074b7b0(auStack_238 + iVar7,0x200 - iVar7,10);
            iVar7 = (**(code **)(*param_1 + 8))(param_1,auStack_238);
            if (iVar7 != 0) goto LAB_18089866f;
            if ((char)lVar11 == '\0') {
              iVar7 = (**(code **)(*param_1 + 0x18))(param_1);
              if (iVar7 != 0) goto LAB_18089866f;
              *(int8_t *)(param_1 + 4) = 0;
            }
          }
          uVar17 = (int)plVar14 + 1;
          plVar14 = (longlong *)(ulonglong)uVar17;
        } while ((int)uVar17 < iVar6);
      }
      uStack_310 = 0xffffffffffffffff;
      afStack_308[0] = -NAN;
      plStack_318 = (longlong *)(*(longlong *)(param_1[1] + 0x90) + 0x38);
      FUN_1808741f0(plStack_318,&uStack_310,afStack_308);
      afStack_348[0] = afStack_308[0];
      if (afStack_308[0] != -NAN) {
        plVar16 = plStack_318;
        fVar18 = (float)uStack_310;
        do {
          do {
            lVar15 = (longlong)(int)afStack_348[0] * 0x20;
            uStack_338 = 0xffffffffffffffff;
            aplStack_330[0] = (longlong *)CONCAT44(aplStack_330[0]._4_4_,0xffffffff);
            plStack_340 = *(longlong **)(plVar16[2] + 0x18 + lVar15);
            lStack_320 = lVar15;
            FUN_1807d1650(plStack_340,&uStack_338,aplStack_330);
            plVar14 = plStack_340;
            if ((int)aplStack_330[0] != -1) {
              iVar6 = (int)aplStack_330[0];
              iVar7 = (int)uStack_338;
              do {
                do {
                  lVar15 = *(longlong *)(plVar14[2] + 8 + (longlong)iVar6 * 0x10);
                  if (((*(longlong *)(lVar15 + 0x80) != 0) && (*(longlong *)(lVar15 + 0x350) == 0))
                     && (iVar8 = FUN_1808975e0(param_1), iVar8 != 0)) goto LAB_18089866f;
                } while ((iVar6 != -1) &&
                        (iVar6 = *(int *)(plVar14[2] + 4 + (longlong)iVar6 * 0x10), iVar6 != -1));
                iVar6 = iVar7 + 1;
                bVar20 = iVar7 != -1;
                iVar7 = 0;
                if (bVar20) {
                  iVar7 = iVar6;
                }
                if (iVar7 != (int)plVar14[1]) {
                  lVar15 = (longlong)iVar7;
                  do {
                    if (*(int *)(*plVar14 + lVar15 * 4) != -1) {
                      iVar6 = *(int *)(*plVar14 + (longlong)iVar7 * 4);
                      goto LAB_1808985be;
                    }
                    iVar7 = iVar7 + 1;
                    lVar15 = lVar15 + 1;
                  } while (lVar15 != (int)plVar14[1]);
                }
                iVar6 = -1;
                iVar7 = iVar6;
LAB_1808985be:
                lVar15 = lStack_320;
                plVar16 = plStack_318;
              } while (iVar6 != -1);
            }
          } while ((afStack_348[0] != -NAN) &&
                  (afStack_348[0] = *(float *)(plVar16[2] + 0x10 + lVar15), afStack_348[0] != -NAN))
          ;
          fVar1 = (float)((int)fVar18 + 1);
          bVar20 = fVar18 != -NAN;
          fVar18 = 0.0;
          if (bVar20) {
            fVar18 = fVar1;
          }
          if (fVar18 != *(float *)(plVar16 + 1)) {
            lVar15 = (longlong)(int)fVar18;
            do {
              if (*(int *)(*plVar16 + lVar15 * 4) != -1) {
                afStack_348[0] = *(float *)(*plVar16 + (longlong)(int)fVar18 * 4);
                goto LAB_180898629;
              }
              fVar18 = (float)((int)fVar18 + 1);
              lVar15 = lVar15 + 1;
            } while (lVar15 != (int)*(float *)(plVar16 + 1));
          }
          afStack_348[0] = -NAN;
          fVar18 = afStack_348[0];
LAB_180898629:
        } while (afStack_348[0] != -NAN);
      }
      (**(code **)(*param_1 + 8))(param_1,&UNK_1809864b0);
      iVar6 = (**(code **)(*param_1 + 0x18))(param_1);
      if (iVar6 == 0) {
        *(int8_t *)(param_1 + 4) = 0;
      }
    }
  }
LAB_18089866f:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_300 + 1);
}





