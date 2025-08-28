#include "TaleWorlds.Native.Split.h"

// 03_rendering_part347.c - 11 个函数

// 函数: void FUN_180453de0(longlong param_1)
void FUN_180453de0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  uint64_t uVar1;
  
  if (param_1 != 0) {
                    // WARNING: Could not recover jumptable at 0x000180453e01. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*_DAT_180c8f008 + 0x70))(_DAT_180c8f008,param_1 + 0x4d8);
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*_DAT_180c8f008 + 0x70);
  uVar1 = FUN_180628ca0();
                    // WARNING: Could not recover jumptable at 0x000180453e33. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(_DAT_180c8f008,uVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180453e40(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  uint64_t uVar2;
  ulonglong uVar3;
  void *puStack_28;
  longlong lStack_20;
  
  if (param_1 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*_DAT_180c8f008 + 0x70);
    uVar2 = FUN_180628ca0();
                    // WARNING: Could not recover jumptable at 0x000180453f06. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar3 = (*UNRECOVERED_JUMPTABLE)(_DAT_180c8f008,uVar2);
    return uVar3;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*_DAT_180c8f008 + 0x70);
  uVar2 = FUN_180627ae0(&puStack_28,param_1 + 0x27c8,param_3,param_4,0,0xfffffffffffffffe);
  uVar1 = (*UNRECOVERED_JUMPTABLE)(_DAT_180c8f008,uVar2,param_3,param_4,1);
  puStack_28 = &UNK_180a3c3e0;
  if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return (ulonglong)uVar1;
}





// 函数: void FUN_180453f70(longlong param_1)
void FUN_180453f70(longlong param_1)

{
  int32_t uVar1;
  
  if (param_1 != 0) {
    uVar1 = _Thrd_id();
    *(int32_t *)(param_1 + 0x4d0) = uVar1;
  }
  return;
}



ulonglong FUN_180453f90(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  longlong lStack_50;
  longlong lStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  int8_t auStack_30 [40];
  
  uVar2 = 0xfffffffffffffffe;
  if (param_1 == 0) {
    return 0;
  }
  puVar1 = (uint64_t *)FUN_180627910(auStack_30);
  lStack_50 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 3;
  FUN_180389520(param_1 + 0x2970,&lStack_50,puVar1,param_4,uVar2);
  if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *puVar1 = &UNK_180a3c3e0;
  if (puVar1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar1[1] = 0;
  *(int32_t *)(puVar1 + 3) = 0;
  *puVar1 = &UNK_18098bcb0;
  return lStack_48 - lStack_50 >> 3 & 0xffffffff;
}





// 函数: void FUN_180454070(longlong param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180454070(longlong param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  void *puStack_50;
  longlong lStack_48;
  int32_t uStack_38;
  longlong lStack_30;
  longlong lStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  
  if (param_1 != 0) {
    lStack_30 = 0;
    lStack_28 = 0;
    iVar3 = 0;
    uStack_20 = 0;
    uStack_18 = 3;
    uVar1 = FUN_180627910(&puStack_50,param_3,param_3,param_4,0xfffffffffffffffe);
    FUN_180389520(param_1 + 0x2970,&lStack_30,uVar1);
    puStack_50 = &UNK_180a3c3e0;
    if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_48 = 0;
    uStack_38 = 0;
    puStack_50 = &UNK_18098bcb0;
    uVar2 = lStack_28 - lStack_30 >> 3;
    if (uVar2 != 0) {
      lVar4 = lStack_30 - (longlong)param_2;
      do {
        *param_2 = *(uint64_t *)(lVar4 + (longlong)param_2);
        iVar3 = iVar3 + 1;
        param_2 = param_2 + 1;
      } while ((ulonglong)(longlong)iVar3 < uVar2);
    }
    if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



uint64_t * FUN_1804541a0(uint64_t *param_1,longlong param_2)

{
  uint64_t *puVar1;
  int32_t uVar2;
  longlong *plVar3;
  int32_t uStack_c;
  
  puVar1 = *(uint64_t **)(*(longlong *)(param_2 + 0x81f8) + 0xf0);
  if (*(longlong *)(*(longlong *)(param_2 + 0x81f8) + 0xf8) - (longlong)puVar1 >> 3 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*(longlong *)*puVar1 + 0x178))();
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
      goto LAB_1804541f4;
    }
  }
  uVar2 = 0xffffffff;
LAB_1804541f4:
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  *param_1 = plVar3;
  param_1[1] = CONCAT44(uStack_c,uVar2);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180454230(longlong param_1,longlong param_2)
void FUN_180454230(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  int8_t auStack_a8 [32];
  uint64_t uStack_88;
  void *puStack_78;
  int8_t *puStack_70;
  int32_t uStack_68;
  int8_t auStack_60 [72];
  ulonglong uStack_18;
  
  if (param_1 != 0) {
    uStack_88 = 0xfffffffffffffffe;
    uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
    puStack_78 = &UNK_1809fcc58;
    puStack_70 = auStack_60;
    uStack_68 = 0;
    auStack_60[0] = 0;
    if (param_2 != 0) {
      lVar1 = -1;
      do {
        lVar1 = lVar1 + 1;
      } while (*(char *)(param_2 + lVar1) != '\0');
      uStack_68 = (int32_t)lVar1;
      strcpy_s(auStack_60,0x40,param_2);
    }
    uVar2 = FUN_18018dff0();
    FUN_180198750(param_1,uVar2);
    puStack_78 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_a8);
  }
  return;
}



uint64_t * FUN_180454300(uint64_t *param_1,longlong param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t auStack_18 [16];
  
  if (param_2 != 0) {
    puVar2 = (uint64_t *)
             FUN_180145140(param_2 + 0x3018,auStack_18,*(int32_t *)(param_2 + 0x3f50));
    uVar1 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar1;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804543f0(longlong param_1,uint64_t param_2)
void FUN_1804543f0(longlong param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t *puVar6;
  longlong lVar7;
  uint64_t *puVar8;
  longlong lVar9;
  int8_t auStack_278 [48];
  int iStack_248;
  longlong lStack_240;
  longlong *plStack_238;
  uint64_t *puStack_220;
  uint64_t *puStack_218;
  uint64_t *puStack_210;
  int32_t uStack_208;
  uint64_t uStack_1f8;
  uint64_t uStack_1f0;
  longlong lStack_1e8;
  longlong *plStack_1e0;
  uint64_t uStack_1d8;
  longlong lStack_190;
  uint64_t uStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  uint64_t uStack_b8;
  int32_t uStack_b0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  ulonglong uStack_78;
  
  uStack_d0 = 0xfffffffffffffffe;
  uStack_78 = _DAT_180bf00a8 ^ (ulonglong)auStack_278;
  uStack_1d8 = param_2;
  lStack_190 = param_1;
  if (*(char *)(param_1 + 0x5c42) != '\0') {
    FUN_1800b8500(param_1 + 0x8158);
    FUN_1801ae4a0(param_1,&UNK_180a0c480,param_1 + 0x8158);
    *(int8_t *)(param_1 + 0x5c42) = 0;
  }
  if ((ulonglong)(*(longlong *)(param_1 + 0x8160) - *(longlong *)(param_1 + 0x8158) >> 3) < 3) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_278);
  }
  puStack_220 = (uint64_t *)0x0;
  puStack_218 = (uint64_t *)0x0;
  puVar6 = (uint64_t *)0x0;
  uStack_1f0 = 0;
  puStack_210 = (uint64_t *)0x0;
  uStack_208 = 3;
  iStack_248 = 0;
  lVar7 = *(longlong *)(param_1 + 0x8158);
  uStack_1f8 = 1;
  puVar2 = (uint64_t *)0x0;
  if (*(longlong *)(param_1 + 0x8160) - lVar7 >> 3 != 0) {
    lStack_240 = 0;
    puVar8 = puVar2;
    do {
      puVar1 = puStack_218;
      puVar2 = (uint64_t *)0x0;
      lVar7 = *(longlong *)(lStack_240 + lVar7);
      if (puStack_218 < puVar6) {
        *puStack_218 = *(uint64_t *)(lVar7 + 0xa0);
        puVar2 = puVar8;
      }
      else {
        lVar5 = (longlong)puStack_218 - (longlong)puVar8 >> 3;
        lVar9 = lVar5 * 2;
        if (lVar5 == 0) {
          lVar9 = 1;
        }
        if (lVar9 != 0) {
          puVar2 = (uint64_t *)
                   FUN_18062b420(_DAT_180c8ed18,lVar9 * 8,
                                 CONCAT71((int7)((ulonglong)puStack_218 >> 8),3));
        }
        if (puVar8 != puVar1) {
                    // WARNING: Subroutine does not return
          memmove(puVar2,puVar8,(longlong)puVar1 - (longlong)puVar8);
        }
        *puVar2 = *(uint64_t *)(lVar7 + 0xa0);
        if (puVar8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar8);
        }
        puVar6 = puVar2 + lVar9;
        puStack_220 = puVar2;
        puStack_210 = puVar6;
        puStack_218 = puVar2;
      }
      puStack_218 = puStack_218 + 1;
      iStack_248 = iStack_248 + 1;
      lStack_240 = lStack_240 + 8;
      lVar7 = *(longlong *)(param_1 + 0x8158);
      puVar8 = puVar2;
    } while ((ulonglong)(longlong)iStack_248 <
             (ulonglong)(*(longlong *)(param_1 + 0x8160) - lVar7 >> 3));
  }
  plStack_238 = &lStack_c8;
  lStack_c8 = 0;
  lStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 3;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  lVar7 = (longlong)puStack_218 - (longlong)puVar2;
  FUN_180640330(puVar2,puStack_218);
  FUN_18063efb0(&lStack_c8,&puStack_220,lVar7 >> 3 & 0xffffffff,0);
  lStack_1e8 = lStack_c0 - lStack_c8 >> 3;
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x140,0x10,3);
  plVar4 = (longlong *)FUN_18014a1b0(uVar3);
  plStack_1e0 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  (**(code **)(plVar4[2] + 0x10))(plVar4 + 2,&UNK_180a2a670);
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x130,8,6);
                    // WARNING: Subroutine does not return
  memset(uVar3,0,0x130);
}



longlong * FUN_180454d00(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int32_t uVar2;
  int32_t uStack_c;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x5c98) + (longlong)param_3 * 8);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *param_1 = (longlong)plVar1;
  param_1[1] = CONCAT44(uStack_c,uVar2);
  return param_1;
}





// 函数: void FUN_180454d80(longlong param_1,uint64_t param_2,float *param_3,uint64_t *param_4)
void FUN_180454d80(longlong param_1,uint64_t param_2,float *param_3,uint64_t *param_4)

{
  longlong lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  longlong lVar4;
  uint64_t *puVar5;
  float fVar6;
  float fVar7;
  uint64_t uStackX_8;
  uint64_t uStackX_18;
  int iStackX_20;
  int iStackX_24;
  int8_t auStack_38 [32];
  
  lVar1 = *(longlong *)(param_1 + 0x2908);
  uStackX_18 = param_2;
  if (*(char *)(lVar1 + 0x68) == '\0') {
    uStackX_8 = 0;
    lVar4 = FUN_1803a5130(lVar1,&uStackX_18,&iStackX_20,&uStackX_8);
    fVar6 = (float)(**(code **)(**(longlong **)(lVar4 + 0x60) + 8))
                             (*(longlong **)(lVar4 + 0x60),(float)iStackX_24 + uStackX_8._4_4_,
                              (float)iStackX_20 + (float)uStackX_8);
  }
  else {
    fVar6 = 1.0 / *(float *)(lVar1 + 0x58);
    uStackX_8._4_4_ = (float)((ulonglong)param_2 >> 0x20);
    fVar7 = fVar6 * uStackX_8._4_4_;
    uStackX_8._0_4_ = (float)param_2;
    fVar6 = fVar6 * (float)uStackX_8;
    uStackX_8 = param_2;
    fVar6 = (float)(**(code **)(**(longlong **)(lVar1 + 0x50) + 8))
                             (*(longlong **)(lVar1 + 0x50),fVar7 * (float)*(int *)(lVar1 + 0x60),
                              fVar6 * (float)*(int *)(lVar1 + 0x60));
    fVar6 = fVar6 + *(float *)(lVar1 + 0x5c);
  }
  *param_3 = fVar6;
  puVar5 = (uint64_t *)FUN_1803a5440(lVar1,auStack_38,&uStackX_18,0);
  uVar2 = *puVar5;
  uVar3 = puVar5[1];
  if (*(char *)(lVar1 + 0x68) == '\0') {
    FUN_1803a5130(lVar1,&uStackX_18,&iStackX_20,&uStackX_8);
  }
  *param_4 = uVar2;
  param_4[1] = uVar3;
  return;
}





// 函数: void FUN_180454ea0(longlong param_1,int param_2,float *param_3)
void FUN_180454ea0(longlong param_1,int param_2,float *param_3)

{
  byte bVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint64_t *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar10 = 0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 12000) + (longlong)param_2 * 8);
  bVar1 = *(byte *)(lVar2 + 0xa8);
  uVar8 = (uint)bVar1;
  if (3 < (ulonglong)bVar1) {
    puVar7 = (uint64_t *)(lVar2 + 0x88);
    lVar9 = ((ulonglong)bVar1 - 4 >> 2) + 1;
    lVar10 = lVar9 * 4;
    do {
      pfVar3 = (float *)puVar7[-1];
      pfVar4 = (float *)*puVar7;
      pfVar5 = (float *)puVar7[1];
      pfVar6 = (float *)puVar7[2];
      puVar7 = puVar7 + 4;
      fVar12 = *pfVar3 + fVar12 + *pfVar4 + *pfVar5 + *pfVar6;
      fVar13 = fVar13 + pfVar3[1] + pfVar4[1] + pfVar5[1] + pfVar6[1];
      fVar14 = fVar14 + pfVar3[2] + pfVar4[2] + pfVar5[2] + pfVar6[2];
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (lVar10 < (longlong)(ulonglong)uVar8) {
    lVar9 = (ulonglong)uVar8 - lVar10;
    puVar7 = (uint64_t *)(lVar2 + 0x80 + lVar10 * 8);
    do {
      pfVar3 = (float *)*puVar7;
      puVar7 = puVar7 + 1;
      fVar12 = fVar12 + *pfVar3;
      fVar13 = fVar13 + pfVar3[1];
      fVar14 = fVar14 + pfVar3[2];
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  fVar11 = 1.0 / (float)uVar8;
  *param_3 = fVar12 * fVar11;
  param_3[1] = fVar13 * fVar11;
  param_3[2] = fVar14 * fVar11;
  param_3[3] = 3.4028235e+38;
  return;
}





// 函数: void FUN_180454ee4(uint64_t param_1,uint64_t param_2,float param_3,longlong param_4)
void FUN_180454ee4(uint64_t param_1,uint64_t param_2,float param_3,longlong param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint64_t *puVar5;
  float *unaff_RBP;
  int unaff_ESI;
  longlong unaff_RDI;
  ulonglong in_R10;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float in_XMM3_Da;
  float in_XMM4_Da;
  
  puVar5 = (uint64_t *)(unaff_RDI + 0x88);
  lVar6 = (in_R10 >> 2) + 1;
  lVar7 = lVar6;
  do {
    pfVar1 = (float *)puVar5[-1];
    pfVar2 = (float *)*puVar5;
    pfVar3 = (float *)puVar5[1];
    pfVar4 = (float *)puVar5[2];
    puVar5 = puVar5 + 4;
    param_3 = *pfVar1 + param_3 + *pfVar2 + *pfVar3 + *pfVar4;
    in_XMM3_Da = in_XMM3_Da + pfVar1[1] + pfVar2[1] + pfVar3[1] + pfVar4[1];
    in_XMM4_Da = in_XMM4_Da + pfVar1[2] + pfVar2[2] + pfVar3[2] + pfVar4[2];
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  if (lVar6 * 4 < param_4) {
    param_4 = param_4 + lVar6 * -4;
    puVar5 = (uint64_t *)(unaff_RDI + 0x80 + lVar6 * 0x20);
    do {
      pfVar1 = (float *)*puVar5;
      puVar5 = puVar5 + 1;
      param_3 = param_3 + *pfVar1;
      in_XMM3_Da = in_XMM3_Da + pfVar1[1];
      in_XMM4_Da = in_XMM4_Da + pfVar1[2];
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  fVar8 = 1.0 / (float)unaff_ESI;
  *unaff_RBP = param_3 * fVar8;
  unaff_RBP[1] = in_XMM3_Da * fVar8;
  unaff_RBP[2] = in_XMM4_Da * fVar8;
  unaff_RBP[3] = 3.4028235e+38;
  return;
}





// 函数: void FUN_180454f60(uint64_t param_1,uint64_t param_2,float param_3,float param_4)
void FUN_180454f60(uint64_t param_1,uint64_t param_2,float param_3,float param_4)

{
  float *pfVar1;
  uint64_t *puVar2;
  float *unaff_RBP;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong in_R9;
  longlong in_R11;
  float fVar3;
  float in_XMM4_Da;
  
  if (in_R11 < in_R9) {
    in_R9 = in_R9 - in_R11;
    puVar2 = (uint64_t *)(unaff_RDI + 0x80 + in_R11 * 8);
    do {
      pfVar1 = (float *)*puVar2;
      puVar2 = puVar2 + 1;
      param_3 = param_3 + *pfVar1;
      param_4 = param_4 + pfVar1[1];
      in_XMM4_Da = in_XMM4_Da + pfVar1[2];
      in_R9 = in_R9 + -1;
    } while (in_R9 != 0);
  }
  fVar3 = 1.0 / (float)unaff_ESI;
  *unaff_RBP = param_3 * fVar3;
  unaff_RBP[1] = param_4 * fVar3;
  unaff_RBP[2] = in_XMM4_Da * fVar3;
  unaff_RBP[3] = 3.4028235e+38;
  return;
}



int32_t FUN_180454ff0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  void *puStack_30;
  longlong lStack_28;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = FUN_180627910(&puStack_30);
  uVar1 = FUN_1801b83d0(param_1 + 0x60300,uVar2,param_3,param_4,uVar3);
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180455090(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint uVar8;
  longlong lVar9;
  int32_t uVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  int32_t uVar15;
  
  uVar11 = 0xfffffffffffffffe;
  puVar12 = (uint64_t *)0x0;
  puVar13 = (uint64_t *)0x0;
  puVar4 = (uint64_t *)0x0;
  puVar14 = (uint64_t *)0x0;
  uVar15 = 3;
  uVar10 = 1;
  uVar8 = 0;
  lVar9 = param_1 + 0x60308;
  param_1 = param_1 - lVar9;
  puVar3 = (uint64_t *)0x0;
  puVar6 = (uint64_t *)0x0;
  do {
    puVar1 = puVar3;
    puVar7 = puVar6;
    if (*(int *)(param_1 + 0x60318 + lVar9) != 0) {
      if (puVar6 < puVar4) {
        puVar7 = puVar6 + 4;
        puVar13 = puVar7;
        FUN_180627ae0(puVar6,lVar9);
      }
      else {
        lVar5 = (longlong)puVar6 - (longlong)puVar3 >> 5;
        if (lVar5 == 0) {
          lVar5 = 1;
LAB_180455145:
          puVar1 = (uint64_t *)
                   FUN_18062b420(_DAT_180c8ed18,lVar5 << 5,3,param_4,uVar10,uVar11,puVar12,puVar13,
                                 puVar14,uVar15);
        }
        else {
          lVar5 = lVar5 * 2;
          if (lVar5 != 0) goto LAB_180455145;
          puVar1 = (uint64_t *)0x0;
        }
        lVar2 = FUN_180059780(puVar3,puVar6,puVar1);
        FUN_180627ae0(lVar2,lVar9);
        puVar7 = (uint64_t *)(lVar2 + 0x20);
        for (puVar12 = puVar3; puVar12 != puVar6; puVar12 = puVar12 + 4) {
          (**(code **)*puVar12)(puVar12,0);
        }
        if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar3);
        }
        puVar4 = puVar1 + lVar5 * 4;
        puVar12 = puVar1;
        puVar13 = puVar7;
        puVar14 = puVar4;
      }
    }
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + 0x20;
    puVar3 = puVar1;
    puVar6 = puVar7;
    if (0x1f < uVar8) {
      for (; puVar3 != puVar7; puVar3 = puVar3 + 4) {
        (**(code **)*puVar3)(puVar3,0);
      }
      if (puVar1 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar1);
      }
      return (longlong)puVar7 - (longlong)puVar1 >> 5 & 0xffffffff;
    }
  } while( true );
}



int32_t *
FUN_180455250(int32_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  uint64_t uVar2;
  longlong *plVar3;
  uint64_t uStack_30;
  uint64_t uStack_28;
  int32_t uStack_18;
  
  uVar2 = FUN_180627910(&uStack_30,param_3,param_3,param_4,0xfffffffffffffffe);
  plVar3 = (longlong *)FUN_1801b3ad0(param_2,uVar2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  uStack_30 = (longlong *)&UNK_180a3c3e0;
  if (uStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_28 = 0;
  uStack_18 = 0;
  uStack_30 = (longlong *)&UNK_18098bcb0;
  if (plVar3 == (longlong *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
  }
  uStack_30 = plVar3;
  uStack_28._0_4_ = uVar1;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  *param_1 = (int32_t)uStack_30;
  param_1[1] = uStack_30._4_4_;
  param_1[2] = (int32_t)uStack_28;
  param_1[3] = uStack_28._4_4_;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  return param_1;
}



int32_t *
FUN_180455340(int32_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  uint64_t uVar2;
  longlong *plVar3;
  uint64_t uStack_30;
  uint64_t uStack_28;
  int32_t uStack_18;
  
  uVar2 = FUN_180627910(&uStack_30,param_3,param_3,param_4,0xfffffffffffffffe);
  plVar3 = (longlong *)FUN_1801b3ba0(param_2,uVar2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  uStack_30 = (longlong *)&UNK_180a3c3e0;
  if (uStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_28 = 0;
  uStack_18 = 0;
  uStack_30 = (longlong *)&UNK_18098bcb0;
  if (plVar3 == (longlong *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
  }
  uStack_30 = plVar3;
  uStack_28._0_4_ = uVar1;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  *param_1 = (int32_t)uStack_30;
  param_1[1] = uStack_30._4_4_;
  param_1[2] = (int32_t)uStack_28;
  param_1[3] = uStack_28._4_4_;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180455430(longlong param_1,uint64_t param_2,uint64_t param_3)
void FUN_180455430(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  int8_t auStack_d8 [32];
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  void *puStack_a8;
  longlong lStack_a0;
  int32_t uStack_90;
  void **ppuStack_88;
  uint64_t *puStack_80;
  void **ppuStack_78;
  uint64_t uStack_70;
  void *puStack_68;
  void **ppuStack_60;
  uint64_t *puStack_58;
  void **ppuStack_50;
  void **ppuStack_30;
  ulonglong uStack_28;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  FUN_180627910(&puStack_a8);
  ppuStack_88 = &puStack_a8;
  puStack_80 = &uStack_b8;
  ppuStack_78 = &puStack_68;
  uVar3 = 0;
  puStack_68 = &UNK_180a2a6e8;
  ppuStack_30 = &puStack_68;
  lVar2 = *(longlong *)(param_1 + 0x60858);
  uVar5 = uVar3;
  uStack_b8 = param_3;
  ppuStack_50 = ppuStack_78;
  ppuStack_60 = ppuStack_88;
  puStack_58 = puStack_80;
  if (*(longlong *)(param_1 + 0x60860) - lVar2 >> 3 != 0) {
    do {
      uStack_b0 = *(uint64_t *)(uVar3 + lVar2);
      if (ppuStack_30 == (void **)0x0) {
        __Xbad_function_call_std__YAXXZ();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(*ppuStack_30 + 0x10))(ppuStack_30,&uStack_b0);
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 8;
      lVar2 = *(longlong *)(param_1 + 0x60858);
      uVar5 = (ulonglong)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 <
             (ulonglong)(*(longlong *)(param_1 + 0x60860) - lVar2 >> 3));
  }
  if (ppuStack_30 != (void **)0x0) {
    (**(code **)(*ppuStack_30 + 0x20))
              (ppuStack_30,CONCAT71((int7)((ulonglong)&puStack_68 >> 8),ppuStack_30 != &puStack_68))
    ;
    ppuStack_30 = (void **)0x0;
  }
  puStack_a8 = &UNK_180a3c3e0;
  if (lStack_a0 == 0) {
    lStack_a0 = 0;
    uStack_90 = 0;
    puStack_a8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_d8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804555a0(int32_t *param_1,longlong param_2,uint64_t param_3)
void FUN_1804555a0(int32_t *param_1,longlong param_2,uint64_t param_3)

{
  int32_t uVar1;
  uint64_t uVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  int8_t auStack_f8 [32];
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  void **ppuStack_c8;
  longlong *plStack_c0;
  uint64_t uStack_b8;
  longlong *plStack_b0;
  void *puStack_a8;
  longlong lStack_a0;
  int32_t uStack_90;
  uint64_t uStack_88;
  void *puStack_78;
  int32_t uStack_70;
  int32_t uStack_6c;
  longlong **pplStack_68;
  void **ppuStack_60;
  void **ppuStack_40;
  ulonglong uStack_38;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  plVar4 = (longlong *)0x0;
  plStack_b0 = (longlong *)0x0;
  uVar2 = FUN_180627910(&puStack_a8,param_3);
  FUN_1803986d0(param_2 + 0x607e0);
  plStack_c0 = (longlong *)0x0;
  uStack_d0 = &plStack_c0;
  ppuStack_c8 = &puStack_78;
  puStack_78 = &UNK_180a0c0e0;
  uStack_d8._0_4_ = (int32_t)uVar2;
  uStack_d8._4_4_ = (int32_t)((ulonglong)uVar2 >> 0x20);
  uStack_70 = (int32_t)uStack_d8;
  uStack_6c = uStack_d8._4_4_;
  ppuStack_40 = &puStack_78;
  lVar3 = *(longlong *)(param_2 + 0x60858);
  plVar6 = plVar4;
  uStack_d8 = (longlong *)uVar2;
  ppuStack_60 = ppuStack_c8;
  pplStack_68 = uStack_d0;
  if (*(longlong *)(param_2 + 0x60860) - lVar3 >> 3 != 0) {
    do {
      uStack_b8 = *(uint64_t *)((longlong)plVar4 + lVar3);
      if (ppuStack_40 == (void **)0x0) {
        __Xbad_function_call_std__YAXXZ();
        goto LAB_180455721;
      }
      (**(code **)(*ppuStack_40 + 0x10))(ppuStack_40,&uStack_b8);
      uVar5 = (int)plVar6 + 1;
      plVar4 = plVar4 + 1;
      lVar3 = *(longlong *)(param_2 + 0x60858);
      plVar6 = (longlong *)(ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(*(longlong *)(param_2 + 0x60860) - lVar3 >> 3));
  }
  plVar4 = plStack_c0;
  if (ppuStack_40 != (void **)0x0) {
    (**(code **)(*ppuStack_40 + 0x20))
              (ppuStack_40,CONCAT71((int7)((ulonglong)&puStack_78 >> 8),ppuStack_40 != &puStack_78))
    ;
    ppuStack_40 = (void **)0x0;
  }
  uStack_d8 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  uStack_d8 = (longlong *)0x0;
  plStack_b0 = plVar4;
  puStack_a8 = &UNK_180a3c3e0;
  if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_a0 = 0;
  uStack_90 = 0;
  puStack_a8 = &UNK_18098bcb0;
  if (plVar4 == (longlong *)0x0) {
LAB_180455721:
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*plVar4 + 8))(plVar4);
  }
  uStack_d8 = plVar4;
  uStack_d0._0_4_ = uVar1;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  *param_1 = (int32_t)uStack_d8;
  param_1[1] = uStack_d8._4_4_;
  param_1[2] = (int32_t)uStack_d0;
  param_1[3] = uStack_d0._4_4_;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))(plVar4);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_f8);
}





