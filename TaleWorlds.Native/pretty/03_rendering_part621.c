#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part621.c - 18 个函数

// 函数: void FUN_180610ac0(longlong param_1)
void FUN_180610ac0(longlong param_1)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  ulonglong uVar5;
  short *psVar6;
  ulonglong uVar7;
  
  FUN_1804f0d70();
  FUN_1804f0ad0(param_1,1);
  uVar2 = *(uint *)(param_1 + 0x52ed94);
  uVar5 = 0;
  if (0 < (int)uVar2) {
    piVar3 = (int *)(param_1 + 0x30b0);
    uVar7 = uVar5;
    do {
      if (-1 < *piVar3) goto LAB_180610b0b;
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar5 = uVar5 + 1;
      piVar3 = piVar3 + 0x298;
    } while ((longlong)uVar5 < (longlong)(int)uVar2);
  }
  uVar7 = (ulonglong)uVar2;
LAB_180610b0b:
  if ((int)uVar7 < *(int *)(param_1 + 0x52ed94)) {
    do {
      FUN_1804f4250(param_1,uVar7,1);
      lVar4 = (longlong)(int)uVar7;
      sVar1 = *(short *)(param_1 + 0x52dda0 + lVar4 * 2);
      psVar6 = (short *)(param_1 + 0x52dda0 + lVar4 * 2);
      if (sVar1 == -1) {
        for (; (lVar4 < *(int *)(param_1 + 0x52ed94) && (*psVar6 == -1)); psVar6 = psVar6 + 1) {
          uVar7 = (ulonglong)((int)uVar7 + 1);
          lVar4 = lVar4 + 1;
        }
      }
      else {
        uVar7 = (ulonglong)(uint)(int)sVar1;
      }
    } while ((int)uVar7 < *(int *)(param_1 + 0x52ed94));
  }
  *(int32_t *)(param_1 + 0x98d930) = 0xffffffff;
  if ((_DAT_180c92514 != 0) && (_DAT_180c92514 != 5)) {
    *(longlong *)(param_1 + 0x87b798) =
         *(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x87b7a0) * 8) + 300000;
  }
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x260) != 0)) {
    FUN_1802d2f50();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180610bd0(longlong param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180610bd0(longlong param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  float fVar1;
  longlong lVar2;
  uint64_t uVar3;
  int32_t uVar4;
  float fVar5;
  float afStackX_8 [2];
  float afStackX_10 [2];
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t *apuStack_88 [2];
  code *pcStack_78;
  code *pcStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int32_t uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int32_t uStack_2c;
  uint64_t uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x5ba4);
  fVar5 = 0.05;
  if ((0.05 <= fVar1) && (fVar5 = fVar1, 1.0 <= fVar1)) {
    fVar5 = 1.0;
  }
  *(float *)(*(longlong *)(param_1 + 0x18) + 0x5ba4) = fVar5;
  uVar3 = param_2[1];
  *(uint64_t *)(param_1 + 0x98d94c) = *param_2;
  *(uint64_t *)(param_1 + 0x98d954) = uVar3;
  uVar3 = param_2[3];
  *(uint64_t *)(param_1 + 0x98d95c) = param_2[2];
  *(uint64_t *)(param_1 + 0x98d964) = uVar3;
  uVar3 = param_2[5];
  *(uint64_t *)(param_1 + 0x98d96c) = param_2[4];
  *(uint64_t *)(param_1 + 0x98d974) = uVar3;
  uVar3 = param_2[7];
  *(uint64_t *)(param_1 + 0x98d97c) = param_2[6];
  *(uint64_t *)(param_1 + 0x98d984) = uVar3;
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(uint64_t *)(lVar2 + 0x3c8) = *(uint64_t *)(lVar2 + 0x408);
  *(uint64_t *)(lVar2 + 0x3d0) = *(uint64_t *)(lVar2 + 0x410);
  *(uint64_t *)(lVar2 + 0x3d8) = *(uint64_t *)(lVar2 + 0x418);
  *(uint64_t *)(lVar2 + 0x3e0) = *(uint64_t *)(lVar2 + 0x420);
  *(uint64_t *)(lVar2 + 1000) = *(uint64_t *)(lVar2 + 0x428);
  *(uint64_t *)(lVar2 + 0x3f0) = *(uint64_t *)(lVar2 + 0x430);
  *(uint64_t *)(lVar2 + 0x3f8) = *(uint64_t *)(lVar2 + 0x438);
  *(uint64_t *)(lVar2 + 0x400) = *(uint64_t *)(lVar2 + 0x440);
  uVar3 = param_2[1];
  *(uint64_t *)(lVar2 + 0x408) = *param_2;
  *(uint64_t *)(lVar2 + 0x410) = uVar3;
  uVar3 = param_2[3];
  *(uint64_t *)(lVar2 + 0x418) = param_2[2];
  *(uint64_t *)(lVar2 + 0x420) = uVar3;
  uVar3 = param_2[5];
  *(uint64_t *)(lVar2 + 0x428) = param_2[4];
  *(uint64_t *)(lVar2 + 0x430) = uVar3;
  uVar3 = param_2[7];
  *(uint64_t *)(lVar2 + 0x438) = param_2[6];
  *(uint64_t *)(lVar2 + 0x440) = uVar3;
  *(int8_t *)(lVar2 + 0x562) = 1;
  if ((*(longlong *)(_DAT_180c86870 + 0x3d8) == 0) ||
     (*(int *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0x110) != 1)) {
    afStackX_10[0] = *(float *)(_DAT_180c86870 + 300);
    afStackX_8[0] = afStackX_10[0] * 5.0;
    afStackX_10[0] = afStackX_10[0] + afStackX_10[0];
    if (*(char *)(param_1 + 0x87296c) == '\0') {
      uVar4 = (int32_t)
              (*(longlong *)(param_1 + 0x872950) - *(longlong *)(param_1 + 0x872948) >> 3);
    }
    else {
      uVar4 = *(int32_t *)(param_1 + 0x872968);
    }
    pcStack_78 = FUN_180502740;
    pcStack_70 = FUN_180502660;
    apuStack_88[0] = (int32_t *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,system_allocation_flags);
    uStack_a8 = (int32_t)param_1;
    uStack_a4 = (int32_t)((ulonglong)param_1 >> 0x20);
    *apuStack_88[0] = uStack_a8;
    apuStack_88[0][1] = uStack_a4;
    *(float **)(apuStack_88[0] + 2) = afStackX_8;
    uStack_90 = SUB84(param_2,0);
    uStack_8c = (int32_t)((ulonglong)param_2 >> 0x20);
    *(float **)(apuStack_88[0] + 4) = afStackX_10;
    apuStack_88[0][6] = uStack_90;
    apuStack_88[0][7] = uStack_8c;
    FUN_18015b810(uStack_a8,0,uVar4,0x10,0xffffffffffffffff,apuStack_88);
  }
  uStack_68 = *param_2;
  uStack_60 = param_2[1];
  uStack_58 = param_2[2];
  uStack_50 = param_2[3];
  fStack_48 = *(float *)(param_2 + 4);
  fStack_44 = *(float *)((longlong)param_2 + 0x24);
  fStack_40 = *(float *)(param_2 + 5);
  uStack_3c = *(int32_t *)((longlong)param_2 + 0x2c);
  uStack_2c = *(int32_t *)((longlong)param_2 + 0x3c);
  fStack_38 = *(float *)(param_2 + 6) + fStack_48 * -0.4;
  fStack_34 = *(float *)((longlong)param_2 + 0x34) + fStack_44 * -0.4;
  fStack_30 = *(float *)(param_2 + 7) + fStack_40 * -0.4;
  (**(code **)(*_DAT_180c86878 + 0x48))(_DAT_180c86878,&uStack_68,param_4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180610e80(void)
void FUN_180610e80(void)

{
  char *pcVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  pcVar1 = _DAT_180c96138;
  if (*_DAT_180c96138 != '\0') {
    lVar4 = 8;
    *_DAT_180c96138 = '\0';
    plVar5 = (longlong *)(pcVar1 + 0x368);
    do {
      lVar6 = 0x18;
      plVar3 = plVar5;
      do {
        if (((longlong *)*plVar3 != (longlong *)0x0) &&
           (cVar2 = (**(code **)(*(longlong *)*plVar3 + 0xd8))(), cVar2 != '\0')) {
          (**(code **)(*(longlong *)*plVar3 + 0x68))();
        }
        plVar3 = plVar3 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      plVar5 = plVar5 + 0x199;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}





// 函数: void FUN_180610e92(void)
void FUN_180610e92(void)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int8_t *unaff_RSI;
  longlong *plVar4;
  longlong lVar5;
  
  lVar3 = 8;
  *unaff_RSI = 0;
  plVar4 = (longlong *)(unaff_RSI + 0x368);
  do {
    lVar5 = 0x18;
    plVar2 = plVar4;
    do {
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        cVar1 = (**(code **)(*(longlong *)*plVar2 + 0xd8))();
        if (cVar1 != '\0') {
          (**(code **)(*(longlong *)*plVar2 + 0x68))();
        }
      }
      plVar2 = plVar2 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    plVar4 = plVar4 + 0x199;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}





// 函数: void FUN_180610efc(void)
void FUN_180610efc(void)

{
  return;
}



int * FUN_180610f30(int *param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
                   int8_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                   uint64_t param_9)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_1804f10e0(param_2,param_3,param_5,param_6,param_7,param_8,param_9);
  *param_1 = iVar1;
  lVar2 = param_2 + 0x30a0 + (longlong)iVar1 * 0xa60;
  *(longlong *)(param_1 + 2) = lVar2;
  *(longlong *)(param_1 + 4) = *(longlong *)(lVar2 + 0x20) + 0xc;
  *(longlong *)(param_1 + 6) = lVar2 + 0x10;
  *(longlong *)(param_1 + 8) = lVar2 + 0x56c;
  *(longlong *)(param_1 + 10) = lVar2 + 0x568;
  return param_1;
}



uint64_t * FUN_180611010(uint64_t *param_1,longlong param_2,uint param_3)

{
  uint64_t uVar1;
  longlong lVar2;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  lVar2 = (ulonglong)(param_3 & 0xf) * 0xbe0 +
          *(longlong *)(*(longlong *)(param_2 + 0x87b340) + (ulonglong)(param_3 >> 4) * 8);
  if (*(char *)(lVar2 + 0x3d2) != '\0') {
    (**(code **)(**(longlong **)(lVar2 + 0xe8) + 0xa0))(*(longlong **)(lVar2 + 0xe8),&uStack_18);
    *param_1 = uStack_18;
    param_1[1] = uStack_10;
    return param_1;
  }
  uVar1 = *(uint64_t *)(lVar2 + 0x94);
  *param_1 = *(uint64_t *)(lVar2 + 0x8c);
  param_1[1] = uVar1;
  return param_1;
}



longlong FUN_1806110c0(longlong param_1,uint64_t *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x98d8f8);
  if (lVar6 != *(longlong *)(param_1 + 0x98d900)) {
    iVar2 = *(int *)(param_2 + 2);
    do {
      iVar3 = *(int *)(lVar6 + 0x58);
      iVar5 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar4 = *(byte **)(lVar6 + 0x50);
          lVar7 = param_2[1] - (longlong)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar7;
            iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar5 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18061112e:
        if (iVar5 == 0) {
          *param_2 = &unknown_var_3456_ptr;
          if (param_2[1] == 0) {
            param_2[1] = 0;
            *(int32_t *)(param_2 + 3) = 0;
            *param_2 = &unknown_var_720_ptr;
            return lVar6;
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      else if (iVar3 == 0) goto LAB_18061112e;
      lVar6 = lVar6 + 0x70;
    } while (lVar6 != *(longlong *)(param_1 + 0x98d900));
  }
  *param_2 = &unknown_var_3456_ptr;
  if (param_2[1] == 0) {
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
    *param_2 = &unknown_var_720_ptr;
    return 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_1806111b0(void)
void FUN_1806111b0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180611440(longlong param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4)
void FUN_180611440(longlong param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4)

{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  FUN_180395630(*(longlong *)(param_1 + 0x18) + 0x2a68,param_2,&uStack_18,param_4,
                *(longlong *)(param_1 + 0x18) + 0x28c8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180611480(longlong param_1,longlong param_2,longlong *param_3,int param_4,
void FUN_180611480(longlong param_1,longlong param_2,longlong *param_3,int param_4,
                  int8_t param_5)

{
  void **ppuVar1;
  uint64_t uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int8_t auStack_338 [32];
  void **ppuStack_318;
  void **ppuStack_310;
  void *puStack_308;
  longlong lStack_300;
  int32_t uStack_2f0;
  longlong lStack_2e8;
  longlong lStack_2e0;
  uint64_t uStack_2d8;
  int32_t uStack_2d0;
  uint64_t uStack_2c8;
  void *puStack_2b8;
  longlong lStack_2b0;
  uint64_t uStack_2a8;
  int32_t uStack_2a0;
  uint64_t uStack_288;
  uint64_t uStack_280;
  uint64_t uStack_278;
  void *puStack_270;
  longlong lStack_268;
  int iStack_260;
  ulonglong uStack_258;
  int8_t uStack_250;
  int8_t auStack_248 [512];
  ulonglong uStack_48;
  
  uStack_2c8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_338;
  lVar5 = (longlong)param_4;
  if (((param_2 == 0) || (param_3 == (longlong *)0x0)) || (param_4 < 3)) {
    FUN_180626eb0(auStack_248,0x200,&unknown_var_1952_ptr,&unknown_var_8584_ptr);
    FUN_18061c7a0(auStack_248);
  }
  else {
    ppuStack_310 = &puStack_308;
    uVar2 = FUN_180627910(&puStack_308);
    lVar3 = FUN_1806110c0(param_1,uVar2);
    if (lVar3 == 0) {
      ppuStack_310 = &puStack_2b8;
      puStack_2b8 = (void *)0x0;
      lStack_2b0 = 0;
      uStack_2a8 = 0;
      uStack_2a0 = 3;
      uStack_288 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      ppuStack_318 = &puStack_270;
      puStack_270 = &unknown_var_3456_ptr;
      uStack_258 = 0;
      lStack_268 = 0;
      iStack_260 = 0;
      lVar3 = FUN_180627910(&puStack_308,param_2);
      if (lStack_268 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      iStack_260 = *(int *)(lVar3 + 0x10);
      lStack_268 = *(longlong *)(lVar3 + 8);
      uStack_258 = *(ulonglong *)(lVar3 + 0x18);
      *(int32_t *)(lVar3 + 0x10) = 0;
      *(uint64_t *)(lVar3 + 8) = 0;
      *(uint64_t *)(lVar3 + 0x18) = 0;
      puStack_308 = &unknown_var_3456_ptr;
      if (lStack_300 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_300 = 0;
      uStack_2f0 = 0;
      puStack_308 = &unknown_var_720_ptr;
      uStack_250 = param_5;
      lStack_2e8 = 0;
      lStack_2e0 = 0;
      uStack_2d8 = 0;
      uStack_2d0 = 3;
      FUN_18033a920(&lStack_2e8,lVar5);
      lVar3 = lStack_2e8;
      if (0 < lVar5) {
        lVar4 = lStack_2e8 - (longlong)param_3;
        do {
          ppuStack_310 = (void **)*param_3;
          *(void ***)(lVar4 + (longlong)param_3) = ppuStack_310;
          param_3 = param_3 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      lVar5 = lStack_2e0 - lStack_2e8;
      FUN_180640330(lStack_2e8);
      FUN_18063efb0(&puStack_2b8,&lStack_2e8,lVar5 >> 3 & 0xffffffff,0);
      if (((ulonglong)(lStack_2b0 - (longlong)puStack_2b8 >> 3) < 3) || (iStack_260 == 0)) {
        FUN_180626f80(&unknown_var_8720_ptr,param_2);
      }
      else {
        ppuVar1 = *(void ***)(param_1 + 0x98d900);
        if (ppuVar1 < *(void ***)(param_1 + 0x98d908)) {
          *(void ***)(param_1 + 0x98d900) = ppuVar1 + 0xe;
          ppuStack_318 = ppuVar1;
          FUN_18063e690(ppuVar1);
          FUN_180627ae0(ppuVar1 + 9,&puStack_270);
          *(int8_t *)(ppuVar1 + 0xd) = uStack_250;
        }
        else {
          FUN_180614b20(param_1 + 0x98d8f8,&puStack_2b8);
        }
      }
      if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar3);
      }
      ppuStack_318 = &puStack_270;
      puStack_270 = &unknown_var_3456_ptr;
      if (lStack_268 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_268 = 0;
      uStack_258 = uStack_258 & 0xffffffff00000000;
      puStack_270 = &unknown_var_720_ptr;
      ppuStack_318 = &puStack_2b8;
      if (puStack_2b8 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    else {
      FUN_180626eb0(auStack_248,0x200,&unknown_var_1952_ptr,&unknown_var_8512_ptr);
      FUN_18061c7a0(auStack_248);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_338);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806117e0(longlong param_1,longlong param_2)
void FUN_1806117e0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  uint64_t uVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  ulonglong uVar7;
  int8_t *puVar8;
  ulonglong uVar9;
  int8_t auStack_268 [32];
  uint64_t uStack_248;
  int8_t *puStack_240;
  int8_t auStack_238 [32];
  int8_t auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_248 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_268;
  puStack_240 = auStack_238;
  uVar3 = FUN_180627910(auStack_238);
  lVar4 = FUN_1806110c0(param_1,uVar3);
  if (lVar4 == 0) {
    FUN_180626eb0(auStack_218,0x200,&unknown_var_1952_ptr,&unknown_var_8640_ptr);
    FUN_18061c7a0(auStack_218);
  }
  else {
    uVar9 = *(ulonglong *)(param_1 + 0x98d900);
    for (uVar7 = *(ulonglong *)(param_1 + 0x98d8f8); uVar7 != uVar9; uVar7 = uVar7 + 0x70) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(param_2 + lVar4) != '\0');
      iVar2 = *(int *)(uVar7 + 0x58);
      iVar6 = (int)lVar4;
      if (iVar2 == iVar6) {
        if (iVar2 != 0) {
          pbVar5 = *(byte **)(uVar7 + 0x50);
          lVar4 = param_2 - (longlong)pbVar5;
          do {
            pbVar1 = pbVar5 + lVar4;
            iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1806118cd:
        if (iVar6 == 0) {
          if ((uVar7 + 0x70 < uVar9) &&
             (lVar4 = (longlong)(uVar9 - (uVar7 + 0x70)) / 0x70, 0 < lVar4)) {
            puVar8 = (int8_t *)(uVar7 + 0xd8);
            do {
              FUN_18035b1b0(puVar8 + -0xd8,puVar8 + -0x68);
              FUN_18005d190(puVar8 + -0x90,puVar8 + -0x20);
              puVar8[-0x70] = *puVar8;
              lVar4 = lVar4 + -1;
              puVar8 = puVar8 + 0x70;
            } while (0 < lVar4);
            uVar9 = *(ulonglong *)(param_1 + 0x98d900);
          }
          *(ulonglong *)(param_1 + 0x98d900) = uVar9 - 0x70;
          FUN_180502300();
          break;
        }
      }
      else if (iVar2 == 0) goto LAB_1806118cd;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_268);
}





// 函数: void FUN_1806119a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,longlong param_4,
void FUN_1806119a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,longlong param_4,
                  int param_5,int *param_6)

{
  int32_t uVar1;
  uint64_t uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  int8_t auStack_30 [40];
  
  lVar7 = (longlong)(int)param_3;
  iVar8 = 0;
  *param_6 = 0;
  uVar2 = FUN_180627910(auStack_30,param_2,param_3,param_4,0xfffffffffffffffe);
  plVar3 = (longlong *)FUN_1806110c0(param_1,uVar2);
  if (plVar3 != (longlong *)0x0) {
    uVar6 = (plVar3[1] - *plVar3 >> 3) - lVar7;
    iVar5 = (int)uVar6;
    if ((ulonglong)(longlong)param_5 <= uVar6) {
      iVar5 = param_5;
    }
    *param_6 = iVar5;
    if (0 < iVar5) {
      lVar4 = lVar7 * 8;
      param_4 = param_4 + lVar7 * -8;
      do {
        uVar1 = *(int32_t *)(lVar4 + 4 + *plVar3);
        *(int32_t *)(param_4 + lVar4) = *(int32_t *)(lVar4 + *plVar3);
        *(int32_t *)(param_4 + 4 + lVar4) = uVar1;
        iVar8 = iVar8 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar8 < *param_6);
    }
  }
  return;
}



float FUN_180611aa0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  int8_t auStack_30 [40];
  
  uVar1 = FUN_180627910(auStack_30,param_2,param_3,param_4,0xfffffffffffffffe);
  lVar2 = FUN_1806110c0(param_1,uVar1);
  if (lVar2 != 0) {
    fVar4 = *(float *)(lVar2 + 0x38) - *(float *)(lVar2 + 0x30);
    fVar3 = *(float *)(lVar2 + 0x3c) - *(float *)(lVar2 + 0x34);
    return SQRT(fVar3 * fVar3 + fVar4 * fVar4);
  }
  return -1.0;
}



uint64_t FUN_180611b40(uint64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  int8_t auStackX_8 [32];
  uint64_t auStack_18 [3];
  
  auStack_18[0] = param_2;
  puVar1 = (uint64_t *)FUN_1804f6240(param_1,auStackX_8,auStack_18);
  return *puVar1;
}





// 函数: void FUN_180611b60(uint64_t param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4,
void FUN_180611b60(uint64_t param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4,
                  int8_t param_5,int32_t param_6,int32_t param_7)

{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  FUN_1804f83f0(uStack_18,0,&uStack_18,param_4,param_5,param_6,param_7,0,0,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180611bc0(uint64_t param_1,int32_t param_2,int32_t *param_3,int8_t param_4,
void FUN_180611bc0(uint64_t param_1,int32_t param_2,int32_t *param_3,int8_t param_4,
                  int8_t param_5,int32_t param_6,int32_t param_7,uint64_t param_8)

{
  int8_t auStack_178 [32];
  code *pcStack_158;
  int32_t uStack_150;
  int32_t uStack_148;
  int8_t *puStack_140;
  uint64_t uStack_138;
  int32_t uStack_130;
  uint64_t uStack_128;
  int32_t uStack_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  int8_t auStack_108 [192];
  int32_t uStack_48;
  ulonglong uStack_38;
  
  uStack_128 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  pcStack_158 = FUN_18004a130;
  FUN_1808fc838(auStack_108,0x30,4,FUN_1801c2890);
  uStack_48 = 0;
  FUN_1801594d0(auStack_108,param_8);
  uStack_120 = *param_3;
  uStack_11c = param_3[1];
  uStack_118 = param_3[2];
  uStack_114 = param_3[3];
  uStack_130 = 0;
  uStack_138 = 0;
  puStack_140 = auStack_108;
  uStack_148 = param_7;
  uStack_150 = param_6;
  pcStack_158 = (code *)CONCAT71(pcStack_158._1_7_,param_5);
  FUN_1804f83f0(param_1,param_2,&uStack_120,param_4);
  FUN_1808fc8a8(auStack_108,0x30,4,FUN_18004a130);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}





// 函数: void FUN_180611ce0(longlong param_1,int param_2,int32_t *param_3,int param_4)
void FUN_180611ce0(longlong param_1,int param_2,int32_t *param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  uint64_t uVar5;
  uint uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  uint64_t uStack_40;
  uint64_t uStack_38;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  longlong lStack_10;
  
  cVar2 = FUN_18061c990(param_1,param_4,&unknown_var_8288_ptr);
  if (cVar2 != '\0') {
    uStack_50 = *param_3;
    uStack_4c = param_3[1];
    uStack_48 = param_3[2];
    uStack_38 = *(uint64_t *)(param_3 + 1);
    uStack_44 = param_3[3];
    iVar3 = *(int *)(param_1 + 0x98d930);
    if ((param_4 == iVar3) ||
       ((-1 < iVar3 && (param_4 == *(int *)((longlong)iVar3 * 0xa60 + 0x3604 + param_1))))) {
      uStack_40 = CONCAT44(uStack_50,param_2);
      uStack_2c = 0x1000001;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0x3f800000;
      lStack_10 = (ulonglong)uStack_54 << 0x20;
      if (-1 < param_2) {
        uStack_30 = uStack_44;
        FUN_180545140(&system_data_6110,&uStack_40,0,0);
      }
    }
    else {
      plVar4 = *(longlong **)((longlong)param_4 * 0xa60 + 0x3988 + param_1);
      if (((plVar4 != (longlong *)0x0) ||
          ((iVar3 = *(int *)((longlong)param_4 * 0xa60 + 0x3600 + param_1), -1 < iVar3 &&
           (plVar4 = *(longlong **)((longlong)iVar3 * 0xa60 + 0x3988 + param_1),
           plVar4 != (longlong *)0x0)))) && (lVar1 = *plVar4, lVar1 != 0)) {
        uVar5 = FUN_1805b5ad0(lVar1);
        FUN_1805ae910(uVar5,param_2,&uStack_50,1,0);
        if (*(char *)(lVar1 + 0x31) == '\0') {
          FUN_1805faa20(lVar1 + 0x50);
          iVar3 = _Mtx_unlock(lVar1 + 0x5990);
          if (iVar3 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar3);
          }
        }
      }
    }
  }
  return;
}





// 函数: void FUN_180611e90(longlong param_1,ulonglong param_2,int32_t *param_3,int32_t param_4)
void FUN_180611e90(longlong param_1,ulonglong param_2,int32_t *param_3,int32_t param_4)

{
  char cVar1;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  
  if ((*(byte *)(param_1 + 0x87b714) & 1) != 0) {
    cVar1 = FUN_18061c990(param_1,param_2,&unknown_var_8232_ptr);
    if (cVar1 != '\0') {
      uStack_28 = *param_3;
      uStack_24 = param_3[1];
      uStack_20 = param_3[2];
      uStack_1c = param_3[3];
      FUN_1804f5d10(param_1,param_2 & 0xffffffff,&uStack_28,param_4);
    }
  }
  return;
}





// 函数: void FUN_180611f50(longlong param_1)
void FUN_180611f50(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x52ed94);
  iVar3 = 0;
  iVar2 = iVar1;
  if (0 < iVar1) {
    lVar5 = 0;
    piVar4 = (int *)(param_1 + 0x30b0);
    do {
      iVar2 = iVar3;
      if (-1 < *piVar4) break;
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 1;
      piVar4 = piVar4 + 0x298;
      iVar2 = iVar1;
    } while (lVar5 < iVar1);
  }
  for (; iVar2 < iVar1; iVar2 = (int)*(short *)(param_1 + 0x52dda0 + (longlong)iVar2 * 2)) {
    lVar5 = (longlong)iVar2 * 0xa60;
    *(int32_t *)(lVar5 + 0x3568 + param_1) = 0;
    *(uint64_t *)(lVar5 + 0x356c + param_1) = 0;
    *(int32_t *)(lVar5 + 0x3564 + param_1) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180611ff0(uint64_t param_1,float param_2)
void FUN_180611ff0(uint64_t param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  char cVar7;
  uint auStackX_18 [4];
  
  lVar2 = _DAT_180c92580;
  lVar3 = *(longlong *)(_DAT_180c92580 + 0x668);
  if (lVar3 != _DAT_180c92580) {
    uVar6 = (uint)(ushort)auStackX_18[0];
    cVar7 = (char)auStackX_18[0];
    do {
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((double)param_2 < *(double *)(lVar3 + 0x5a8) ||
          (double)param_2 == *(double *)(lVar3 + 0x5a8)) {
        return;
      }
      auStackX_18[0] = 0;
      *(int32_t *)(lVar3 + 0x5c4) = 0;
      FUN_18055f260(lVar3,auStackX_18,&unknown_var_8192_ptr);
      FUN_180569670(lVar3);
      if (0 < (int)auStackX_18[0]) {
        uVar5 = (ulonglong)auStackX_18[0];
        do {
          auStackX_18[0] = (uint)(cVar7 != '\0');
          FUN_18055f260(lVar3,auStackX_18,&unknown_var_8176_ptr);
          cVar7 = auStackX_18[0] != 0;
          if (auStackX_18[0] == 0) {
            auStackX_18[0] = uVar6;
            FUN_18055f260(lVar3,auStackX_18,&unknown_var_3472_ptr);
            uVar6 = auStackX_18[0] & 0xffff;
            uVar4 = (ulonglong)uVar6;
            lVar1 = *(longlong *)(uVar4 * 0x10 + 0x180c95bf8);
            if ((lVar1 != 0) || (*(longlong *)(uVar4 * 0x10 + 0x180c95c00) != 0)) {
              (**(code **)(uVar4 * 0x10 + 0x180c95c00))(lVar1,_DAT_180c92590,lVar3);
            }
          }
          else {
            _DAT_180c95dc8 = lVar3;
            (**(code **)(_DAT_180c8ece0 + 0x138))();
            _DAT_180c95dc8 = 0;
          }
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (*(int *)(lVar3 + 0x5c4) < *(int *)(lVar3 + 0x5c8)) {
        FUN_1805fdc90(lVar3,lVar2 + 0x648);
      }
      lVar3 = **(longlong **)(lVar2 + 0x668);
      *(longlong *)(lVar2 + 0x668) = lVar3;
    } while (lVar3 != lVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180612015(void)
void FUN_180612015(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_RAX;
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  uint uVar5;
  char cVar6;
  float unaff_XMM6_Da;
  char cStack0000000000000070;
  
  uVar5 = (uint)_cStack0000000000000070;
  cVar6 = cStack0000000000000070;
  do {
    lVar1 = *(longlong *)(in_RAX + 0x10);
    if ((double)unaff_XMM6_Da < *(double *)(lVar1 + 0x5a8) ||
        (double)unaff_XMM6_Da == *(double *)(lVar1 + 0x5a8)) {
      return;
    }
    _cStack0000000000000070 = 0;
    *(int32_t *)(lVar1 + 0x5c4) = 0;
    FUN_18055f260(lVar1,&stack0x00000070,&unknown_var_8192_ptr);
    FUN_180569670(lVar1);
    if (0 < (int)_cStack0000000000000070) {
      uVar4 = (ulonglong)_cStack0000000000000070;
      do {
        _cStack0000000000000070 = (uint)(cVar6 != '\0');
        FUN_18055f260(lVar1,&stack0x00000070,&unknown_var_8176_ptr);
        cVar6 = _cStack0000000000000070 != 0;
        if (_cStack0000000000000070 == 0) {
          _cStack0000000000000070 = uVar5;
          FUN_18055f260(lVar1,&stack0x00000070,&unknown_var_3472_ptr);
          uVar5 = _cStack0000000000000070 & 0xffff;
          uVar3 = (ulonglong)uVar5;
          lVar2 = *(longlong *)(uVar3 * 0x10 + 0x180c95bf8);
          if ((lVar2 != 0) || (*(longlong *)(uVar3 * 0x10 + 0x180c95c00) != 0)) {
            (**(code **)(uVar3 * 0x10 + 0x180c95c00))(lVar2,_DAT_180c92590,lVar1);
          }
        }
        else {
          _DAT_180c95dc8 = lVar1;
          (**(code **)(_DAT_180c8ece0 + 0x138))();
          _DAT_180c95dc8 = 0;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (*(int *)(lVar1 + 0x5c4) < *(int *)(lVar1 + 0x5c8)) {
      FUN_1805fdc90(lVar1,unaff_RBP + 0x648);
    }
    in_RAX = **(longlong **)(unaff_RBP + 0x668);
    *(longlong *)(unaff_RBP + 0x668) = in_RAX;
  } while (in_RAX != unaff_RBP);
  return;
}





// 函数: void FUN_18061219c(void)
void FUN_18061219c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



