#include "TaleWorlds.Native.Split.h"

// 99_part_08_part007.c - 13 个函数

// 函数: void FUN_1804e0ad0(int param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
void FUN_1804e0ad0(int param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)

{
  longlong **pplVar1;
  uint64_t uVar2;
  longlong ***ppplVar3;
  longlong ***ppplStackX_10;
  longlong ***ppplStackX_18;
  longlong ****pppplStackX_20;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  void *puStack_48;
  void *puStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uVar2 = _DAT_180c82868;
  if (param_1 == 0) {
    FUN_180544f90(&system_data_6110,param_2,param_3,param_4,0xfffffffffffffffe);
    func_0x000180539530();
    FUN_180538220();
    _DAT_180c91044 = sinf(_DAT_180c96380 * 0.017453292);
    _DAT_180c91040 = _DAT_180c96384;
    uStack_38 = 0x3f800000;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_24 = 0x3f800000;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0x3f800000;
    uStack_c = 0;
    _DAT_180c96380 = (float)_DAT_180c91044;
    FUN_180085c10(&uStack_38,_DAT_180c964c0);
    FUN_180085970(&uStack_38,_DAT_180c964b8);
    FUN_180085ac0(&uStack_38,_DAT_180c964bc);
    FUN_18063b470(&uStack_58,&uStack_38);
    _DAT_180c96370 = uStack_58;
    uRam0000000180c96374 = uStack_54;
    uRam0000000180c96378 = uStack_50;
    uRam0000000180c9637c = uStack_4c;
    FUN_180570940(&system_data_60c0);
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
    ppplStackX_18 = (longlong ***)&uStack_58;
    puStack_48 = &UNK_1804e3040;
    puStack_40 = &UNK_1804e3030;
    ppplVar3 = (longlong ***)FUN_18006b640(uVar2,&uStack_58);
    if (ppplVar3 != (longlong ***)0x0) {
      ppplStackX_10 = ppplVar3;
      (*(code *)(*ppplVar3)[5])(ppplVar3);
    }
    ppplStackX_10 = _DAT_180c96108;
    if (_DAT_180c96108 != (longlong ***)0x0) {
      pplVar1 = *_DAT_180c96108;
      _DAT_180c96108 = ppplVar3;
      (*(code *)pplVar1[7])();
      ppplVar3 = _DAT_180c96108;
    }
    _DAT_180c96108 = ppplVar3;
    _DAT_180c96108[3] = (longlong **)0xfffffffffffffffd;
    uVar2 = _DAT_180c82868;
    ppplStackX_18 = (longlong ***)&ppplStackX_10;
    ppplStackX_10 = _DAT_180c96108;
    if (_DAT_180c96108 != (longlong ***)0x0) {
      (*(code *)(*_DAT_180c96108)[5])();
    }
    FUN_18005e110(uVar2,&ppplStackX_10);
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
    ppplStackX_10 = (longlong ***)&uStack_58;
    puStack_48 = &UNK_1804e3010;
    puStack_40 = &UNK_1804e3000;
    ppplVar3 = (longlong ***)FUN_18006b640(uVar2,&uStack_58);
    if (ppplVar3 != (longlong ***)0x0) {
      ppplStackX_18 = ppplVar3;
      (*(code *)(*ppplVar3)[5])(ppplVar3);
    }
    ppplStackX_18 = _DAT_180c96148;
    if (_DAT_180c96148 != (longlong ***)0x0) {
      pplVar1 = *_DAT_180c96148;
      _DAT_180c96148 = ppplVar3;
      (*(code *)pplVar1[7])();
      ppplVar3 = _DAT_180c96148;
    }
    _DAT_180c96148 = ppplVar3;
    _DAT_180c96148[3] = (longlong **)0xfffffffffffffffd;
    uVar2 = _DAT_180c82868;
    ppplStackX_18 = (longlong ***)&ppplStackX_10;
    ppplStackX_10 = _DAT_180c96148;
    if (_DAT_180c96148 != (longlong ***)0x0) {
      (*(code *)(*_DAT_180c96148)[5])();
    }
    FUN_18005e110(uVar2,&ppplStackX_10);
    return;
  }
  if (param_1 == 1) {
    ppplStackX_18 = (longlong ***)&ppplStackX_10;
    ppplStackX_10 = _DAT_180c96108;
    if (_DAT_180c96108 != (longlong ***)0x0) {
      (*(code *)(*_DAT_180c96108)[5])();
    }
    FUN_18005e6a0(uVar2,&ppplStackX_10,0);
    uVar2 = _DAT_180c82868;
    pppplStackX_20 = &ppplStackX_18;
    ppplStackX_18 = _DAT_180c96148;
    if (_DAT_180c96148 != (longlong ***)0x0) {
      (*(code *)(*_DAT_180c96148)[5])();
    }
    FUN_18005e6a0(uVar2,&ppplStackX_18,0);
    FUN_18054c430();
    (**(code **)(_DAT_180c8ece0 + 0x118))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804e0dd0(void)
void FUN_1804e0dd0(void)

{
  longlong ******pppppplVar1;
  longlong ****pppplVar2;
  longlong ***ppplVar3;
  longlong *******ppppppplVar4;
  int8_t *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *******ppppppplVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong ******pppppplStack_c8;
  longlong ******pppppplStack_c0;
  longlong ******pppppplStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  int32_t uStack_a0;
  int8_t auStack_98 [8];
  void *puStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  longlong lStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_78 = 0x3f800000;
  uStack_74 = 0x40000000;
  uStack_6c = 3;
  uStack_88 = 1;
  puStack_90 = &system_data_0000;
  uStack_80 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 3;
  _DAT_180c95f30 = auStack_98;
  FUN_18055a540(&system_data_6150);
  FUN_18055b600(&system_data_6150);
  FUN_1804e4a10(&system_data_5ed0);
  FUN_1805397f0();
  lVar6 = _DAT_180c868a8;
  uStack_a0 = *(int32_t *)(_DAT_180c868a8 + 0xd8);
  pppppplStack_c8 = (longlong ******)&pppppplStack_c8;
  pppppplStack_c0 = (longlong ******)&pppppplStack_c8;
  pppppplStack_b8 = (longlong ******)0x0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  if (*(longlong *)(_DAT_180c868a8 + 0xc0) != 0) {
    pppppplStack_b8 =
         (longlong ******)
         FUN_1804e2f00(&pppppplStack_c8,*(longlong *)(_DAT_180c868a8 + 0xc0),&pppppplStack_c8);
    ppppppplVar10 = (longlong *******)*pppppplStack_b8;
    pppppplStack_c8 = (longlong ******)(longlong *******)pppppplStack_b8;
    while (ppppppplVar4 = ppppppplVar10, ppppppplVar4 != (longlong *******)0x0) {
      pppppplStack_c8 = (longlong ******)ppppppplVar4;
      ppppppplVar10 = (longlong *******)*ppppppplVar4;
    }
    ppppppplVar10 = (longlong *******)((longlong *******)pppppplStack_b8)[1];
    pppppplStack_c0 = (longlong ******)(longlong *******)pppppplStack_b8;
    while (ppppppplVar4 = ppppppplVar10, ppppppplVar4 != (longlong *******)0x0) {
      pppppplStack_c0 = (longlong ******)ppppppplVar4;
      ppppppplVar10 = (longlong *******)ppppppplVar4[1];
    }
    uStack_a8 = *(uint64_t *)(lVar6 + 0xd0);
  }
  ppppppplVar10 = (longlong *******)pppppplStack_c0;
  if ((longlong *******)pppppplStack_c0 != &pppppplStack_c8) {
    do {
      pppppplVar1 = ppppppplVar10[4];
      lVar12 = 0;
      lVar6 = (longlong)(int)((longlong)pppppplVar1[0x31] - (longlong)pppppplVar1[0x30] >> 3);
      if (0 < lVar6) {
        do {
          pppplVar2 = pppppplVar1[0x30][lVar12];
          plVar7 = (longlong *)(*(code *)(*pppplVar2)[1])(pppplVar2);
          puVar5 = _DAT_180c95f30;
          if (((*plVar7 == 0x4ca4e563506509c8) && (plVar7[1] == -0x58ec166dc45a994f)) &&
             (ppplVar3 = pppplVar2[0x16], ppplVar3 != (longlong ***)0x0)) {
            plVar7 = *(longlong **)(_DAT_180c95f30 + 0x38);
            if (plVar7 < *(longlong **)(_DAT_180c95f30 + 0x40)) {
              *(longlong **)(_DAT_180c95f30 + 0x38) = plVar7 + 1;
              *plVar7 = (longlong)ppplVar3;
            }
            else {
              plVar11 = *(longlong **)(_DAT_180c95f30 + 0x30);
              lVar8 = (longlong)plVar7 - (longlong)plVar11 >> 3;
              if (lVar8 == 0) {
                lVar8 = 1;
LAB_1804e103d:
                plVar9 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 8,_DAT_180c95f30[0x48]);
                plVar7 = *(longlong **)(puVar5 + 0x38);
                plVar11 = *(longlong **)(puVar5 + 0x30);
              }
              else {
                lVar8 = lVar8 * 2;
                if (lVar8 != 0) goto LAB_1804e103d;
                plVar9 = (longlong *)0x0;
              }
              if (plVar11 != plVar7) {
                    // WARNING: Subroutine does not return
                memmove(plVar9,plVar11,(longlong)plVar7 - (longlong)plVar11);
              }
              *plVar9 = (longlong)ppplVar3;
              if (*(longlong *)(puVar5 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              *(longlong **)(puVar5 + 0x30) = plVar9;
              *(longlong **)(puVar5 + 0x38) = plVar9 + 1;
              *(longlong **)(puVar5 + 0x40) = plVar9 + lVar8;
            }
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < lVar6);
      }
      ppppppplVar10 = (longlong *******)func_0x00018066bd70(ppppppplVar10);
    } while (ppppppplVar10 != &pppppplStack_c8);
  }
  FUN_18053be00();
  pppppplVar1 = pppppplStack_b8;
  _DAT_180c95f30 = (int8_t *)0x0;
  if ((longlong *******)pppppplStack_b8 != (longlong *******)0x0) {
    FUN_18004b790(&pppppplStack_c8,*pppppplStack_b8);
                    // WARNING: Subroutine does not return
    FUN_18064e900(pppppplVar1);
  }
  if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_1804e18c0(auStack_98);
  return;
}






// 函数: void FUN_1804e1160(longlong param_1)
void FUN_1804e1160(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      lVar2 = *(longlong *)(lVar1 + uVar3 * 8);
      if (lVar2 != 0) {
        if ((*(char *)(lVar2 + 0x20) == '\0') && (*(longlong *)(lVar2 + 8) != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar1 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
    uVar4 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar4) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_1804e11a0(longlong param_1)
void FUN_1804e11a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      lVar2 = *(longlong *)(lVar1 + uVar3 * 8);
      if (lVar2 != 0) {
        if ((*(char *)(lVar2 + 0x20) == '\0') && (*(longlong *)(lVar2 + 8) != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar1 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
    uVar4 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar4) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_1804e11c0(longlong param_1)
void FUN_1804e11c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      lVar2 = *(longlong *)(lVar1 + uVar3 * 8);
      if (lVar2 != 0) {
        if ((*(char *)(lVar2 + 0x20) == '\0') && (*(longlong *)(lVar2 + 8) != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar1 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
    uVar4 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar4) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804e11e0(void)
void FUN_1804e11e0(void)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  int *piVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint64_t uVar13;
  
  if (_DAT_180c96070 != 0) {
    uVar7 = 0;
    uVar6 = uVar7;
    uVar3 = uVar7;
    uVar13 = _DAT_180c95fb8;
    if (0 < (int)_DAT_180c95fb8) {
      do {
        for (lVar2 = *(longlong *)(uVar3 + 0xd8 + _DAT_180c95fb0); lVar2 != 0;
            lVar2 = *(longlong *)(lVar2 + 0x10)) {
          *(uint64_t *)(lVar2 + 8) = 0;
          uVar13 = _DAT_180c95fb8;
        }
        uVar9 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar9;
        uVar3 = uVar3 + 0xe0;
      } while ((int)uVar9 < (int)uVar13);
    }
    lVar2 = _DAT_180c96070;
    uVar9 = *(uint *)(_DAT_180c96070 + 0x52ed94);
    uVar6 = (ulonglong)(int)uVar9;
    lVar11 = _DAT_180c96070 + 0x30a0;
    if (0 < (int)uVar9) {
      piVar4 = (int *)(_DAT_180c96070 + 0x30b0);
      uVar3 = uVar7;
      uVar12 = uVar7;
      do {
        if (-1 < *piVar4) goto LAB_1804e128b;
        uVar3 = (ulonglong)((int)uVar3 + 1);
        uVar12 = uVar12 + 1;
        piVar4 = piVar4 + 0x298;
      } while ((longlong)uVar12 < (longlong)uVar6);
    }
    uVar3 = (ulonglong)uVar9;
LAB_1804e128b:
    if ((int)uVar3 < (int)uVar9) {
      do {
        lVar10 = (longlong)(int)uVar3 * 0xa60;
        lVar8 = *(longlong *)(lVar10 + 0x590 + lVar11);
        if ((*(uint *)(lVar10 + 0x56c + lVar11) & 0x800) == 0) {
          FUN_18057d050(lVar8);
        }
        else {
          bVar1 = *(byte *)(lVar8 + 0x3424);
          uVar9 = (bVar1 & 0x10 | 8) >> 3;
          if ((bVar1 & 0x28) == 0) {
            uVar9 = bVar1 >> 3 & 2;
          }
          lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x8f8 + lVar11) + 0x9f0);
          FUN_18065bd60(lVar8 + 0x3460);
          if (lVar10 == 0) {
            FUN_18057a3c0(lVar8,uVar9);
          }
          else {
            FUN_18057a3c0(lVar8,uVar9);
          }
        }
        uVar9 = (uint)*(short *)(lVar2 + 0x52dda0 + (longlong)(int)uVar3 * 2);
        uVar3 = (ulonglong)uVar9;
        uVar6 = (ulonglong)*(uint *)(lVar2 + 0x52ed94);
      } while ((int)uVar9 < (int)*(uint *)(lVar2 + 0x52ed94));
    }
    if (0 < (int)uVar6) {
      piVar4 = (int *)(lVar2 + 0x30b0);
      uVar3 = uVar7;
      do {
        if (-1 < *piVar4) {
          iVar5 = *(int *)(lVar2 + 0x52ed94);
          goto LAB_1804e13ad;
        }
        uVar3 = (ulonglong)((int)uVar3 + 1);
        uVar7 = uVar7 + 1;
        piVar4 = piVar4 + 0x298;
      } while ((longlong)uVar7 < (longlong)(int)uVar6);
      uVar6 = (ulonglong)*(uint *)(lVar2 + 0x52ed94);
    }
    iVar5 = (int)uVar6;
    uVar3 = uVar6 & 0xffffffff;
LAB_1804e13ad:
    if ((int)uVar3 < iVar5) {
      do {
        lVar8 = (longlong)(int)uVar3 * 0xa60 + lVar11;
        if ((*(uint *)(lVar8 + 0x56c) & 0x800) != 0) {
          FUN_180530ca0(lVar8,0);
        }
        uVar9 = (uint)*(short *)(lVar2 + 0x52dda0 + (longlong)(int)uVar3 * 2);
        uVar3 = (ulonglong)uVar9;
      } while ((int)uVar9 < *(int *)(lVar2 + 0x52ed94));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804e11fd(void)
void FUN_1804e11fd(void)

{
  byte bVar1;
  ulonglong uVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong unaff_RDI;
  longlong lVar10;
  ulonglong uVar11;
  uint64_t in_R9;
  
  uVar6 = 0;
  uVar5 = uVar6;
  uVar2 = uVar6;
  if (0 < (int)in_R9) {
    do {
      unaff_RDI = _DAT_180c96070;
      for (lVar10 = *(longlong *)(uVar2 + 0xd8 + _DAT_180c95fb0); _DAT_180c96070 = unaff_RDI,
          lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x10)) {
        *(uint64_t *)(lVar10 + 8) = 0;
        in_R9 = _DAT_180c95fb8;
        unaff_RDI = _DAT_180c96070;
      }
      uVar8 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar8;
      uVar2 = uVar2 + 0xe0;
    } while ((int)uVar8 < (int)in_R9);
  }
  uVar8 = *(uint *)(unaff_RDI + 0x52ed94);
  uVar5 = (ulonglong)(int)uVar8;
  lVar10 = unaff_RDI + 0x30a0;
  if (0 < (int)uVar8) {
    piVar3 = (int *)(unaff_RDI + 0x30b0);
    uVar2 = uVar6;
    uVar11 = uVar6;
    do {
      if (-1 < *piVar3) goto LAB_1804e128b;
      uVar2 = (ulonglong)((int)uVar2 + 1);
      uVar11 = uVar11 + 1;
      piVar3 = piVar3 + 0x298;
    } while ((longlong)uVar11 < (longlong)uVar5);
  }
  uVar2 = (ulonglong)uVar8;
LAB_1804e128b:
  if ((int)uVar2 < (int)uVar8) {
    do {
      lVar9 = (longlong)(int)uVar2 * 0xa60;
      lVar7 = *(longlong *)(lVar9 + 0x590 + lVar10);
      if ((*(uint *)(lVar9 + 0x56c + lVar10) & 0x800) == 0) {
        FUN_18057d050(lVar7);
      }
      else {
        bVar1 = *(byte *)(lVar7 + 0x3424);
        uVar8 = (bVar1 & 0x10 | 8) >> 3;
        if ((bVar1 & 0x28) == 0) {
          uVar8 = bVar1 >> 3 & 2;
        }
        lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x8f8 + lVar10) + 0x9f0);
        FUN_18065bd60(lVar7 + 0x3460);
        if (lVar9 == 0) {
          FUN_18057a3c0(lVar7,uVar8);
        }
        else {
          FUN_18057a3c0(lVar7,uVar8);
        }
      }
      uVar8 = (uint)*(short *)(unaff_RDI + 0x52dda0 + (longlong)(int)uVar2 * 2);
      uVar2 = (ulonglong)uVar8;
      uVar5 = (ulonglong)*(uint *)(unaff_RDI + 0x52ed94);
    } while ((int)uVar8 < (int)*(uint *)(unaff_RDI + 0x52ed94));
  }
  if (0 < (int)uVar5) {
    piVar3 = (int *)(unaff_RDI + 0x30b0);
    uVar2 = uVar6;
    do {
      if (-1 < *piVar3) {
        iVar4 = *(int *)(unaff_RDI + 0x52ed94);
        goto LAB_1804e13ad;
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
      uVar6 = uVar6 + 1;
      piVar3 = piVar3 + 0x298;
    } while ((longlong)uVar6 < (longlong)(int)uVar5);
    uVar5 = (ulonglong)*(uint *)(unaff_RDI + 0x52ed94);
  }
  iVar4 = (int)uVar5;
  uVar2 = uVar5 & 0xffffffff;
LAB_1804e13ad:
  if ((int)uVar2 < iVar4) {
    do {
      lVar7 = (longlong)(int)uVar2 * 0xa60 + lVar10;
      if ((*(uint *)(lVar7 + 0x56c) & 0x800) != 0) {
        FUN_180530ca0(lVar7,0);
      }
      uVar8 = (uint)*(short *)(unaff_RDI + 0x52dda0 + (longlong)(int)uVar2 * 2);
      uVar2 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(unaff_RDI + 0x52ed94));
  }
  return;
}






// 函数: void FUN_1804e1293(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1804e1293(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  byte bVar1;
  int in_EAX;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong unaff_RBX;
  ulonglong uVar6;
  longlong unaff_RDI;
  
  do {
    lVar4 = (longlong)in_EAX * 0xa60;
    lVar3 = *(longlong *)(lVar4 + 0x590 + unaff_RDI);
    if ((*(uint *)(lVar4 + 0x56c + unaff_RDI) & 0x800) == 0) {
      FUN_18057d050(lVar3);
    }
    else {
      bVar1 = *(byte *)(lVar3 + 0x3424);
      uVar5 = (bVar1 & 0x10 | 8) >> 3;
      if ((bVar1 & 0x28) == 0) {
        uVar5 = bVar1 >> 3 & 2;
      }
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x8f8 + unaff_RDI) + 0x9f0);
      FUN_18065bd60(lVar3 + 0x3460);
      if (lVar4 == 0) {
        FUN_18057a3c0(lVar3,uVar5,param_3,0xffffffff);
      }
      else {
        FUN_18057a3c0(lVar3,uVar5,param_3,
                      *(int32_t *)
                       ((longlong)*(int *)(lVar4 + 0xf0) * 0xa0 + 100 + *(longlong *)(lVar4 + 0xd0))
                     );
      }
    }
    in_EAX = (int)*(short *)(unaff_RDI + 0x52ad00 + (longlong)in_EAX * 2);
    uVar5 = *(uint *)(unaff_RDI + 0x52bcf4);
  } while (in_EAX < (int)uVar5);
  if (0 < (int)uVar5) {
    piVar2 = (int *)(unaff_RDI + 0x10);
    uVar6 = unaff_RBX;
    do {
      if (-1 < *piVar2) {
        uVar5 = *(uint *)(unaff_RDI + 0x52bcf4);
        goto LAB_1804e13ad;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
      unaff_RBX = unaff_RBX + 1;
      piVar2 = piVar2 + 0x298;
    } while ((longlong)unaff_RBX < (longlong)(int)uVar5);
    uVar5 = *(uint *)(unaff_RDI + 0x52bcf4);
  }
  uVar6 = (ulonglong)uVar5;
LAB_1804e13ad:
  if ((int)uVar6 < (int)uVar5) {
    do {
      lVar3 = (longlong)(int)uVar6 * 0xa60 + unaff_RDI;
      if ((*(uint *)(lVar3 + 0x56c) & 0x800) != 0) {
        FUN_180530ca0(lVar3,0);
      }
      uVar5 = (uint)*(short *)(unaff_RDI + 0x52ad00 + (longlong)(int)uVar6 * 2);
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < *(int *)(unaff_RDI + 0x52bcf4));
  }
  return;
}






// 函数: void FUN_1804e137b(uint param_1)
void FUN_1804e137b(uint param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong unaff_RBX;
  ulonglong uVar4;
  longlong unaff_RDI;
  
  if (0 < (int)param_1) {
    piVar1 = (int *)(unaff_RDI + 0x10);
    uVar4 = unaff_RBX;
    do {
      if (-1 < *piVar1) {
        param_1 = *(uint *)(unaff_RDI + 0x52bcf4);
        goto LAB_1804e13ad;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      unaff_RBX = unaff_RBX + 1;
      piVar1 = piVar1 + 0x298;
    } while ((longlong)unaff_RBX < (longlong)(int)param_1);
    param_1 = *(uint *)(unaff_RDI + 0x52bcf4);
  }
  uVar4 = (ulonglong)param_1;
LAB_1804e13ad:
  if ((int)uVar4 < (int)param_1) {
    do {
      lVar2 = (longlong)(int)uVar4 * 0xa60 + unaff_RDI;
      if ((*(uint *)(lVar2 + 0x56c) & 0x800) != 0) {
        FUN_180530ca0(lVar2,0);
      }
      uVar3 = (uint)*(short *)(unaff_RDI + 0x52ad00 + (longlong)(int)uVar4 * 2);
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)(unaff_RDI + 0x52bcf4));
  }
  return;
}






// 函数: void FUN_1804e13e7(void)
void FUN_1804e13e7(void)

{
  return;
}






// 函数: void FUN_1804e13ed(void)
void FUN_1804e13ed(void)

{
  longlong lVar1;
  int unaff_EBX;
  longlong unaff_RDI;
  
  if (unaff_EBX < *(int *)(unaff_RDI + 0x52bcf4)) {
    do {
      lVar1 = (longlong)unaff_EBX * 0xa60 + unaff_RDI;
      if ((*(uint *)(lVar1 + 0x56c) & 0x800) != 0) {
        FUN_180530ca0(lVar1,0);
      }
      unaff_EBX = (int)*(short *)(unaff_RDI + 0x52ad00 + (longlong)unaff_EBX * 2);
    } while (unaff_EBX < *(int *)(unaff_RDI + 0x52bcf4));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804e1400(void)
void FUN_1804e1400(void)

{
  uint uVar1;
  int32_t uVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int32_t *puVar7;
  int8_t *puVar8;
  ulonglong uVar9;
  uint uVar10;
  void *puStack_90;
  uint64_t *puStack_88;
  uint uStack_80;
  uint64_t uStack_78;
  void *puStack_70;
  int32_t *puStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  void *puStack_50;
  int32_t *puStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  uVar5 = FUN_18015b2b0(0x10);
  puVar8 = (int8_t *)0x0;
  uVar10 = 0;
  puStack_90 = &UNK_180a3c3e0;
  uStack_78 = 0;
  puStack_88 = (uint64_t *)0x0;
  uStack_80 = 0;
  puVar6 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar6 = 0;
  puStack_88 = puVar6;
  uVar2 = FUN_18064e990(puVar6);
  *puVar6 = 0x746e656d65766f6d;
  *(int32_t *)(puVar6 + 1) = 0x7465735f;
  *(int16_t *)((longlong)puVar6 + 0xc) = 0x73;
  uStack_80 = 0xd;
  uStack_78._0_4_ = uVar2;
  FUN_1804e1e20(0x73,&puStack_90);
  puStack_90 = &UNK_180a3c3e0;
  if (puStack_88 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_88 = (uint64_t *)0x0;
  uStack_78 = (ulonglong)uStack_78._4_4_ << 0x20;
  puStack_90 = &UNK_18098bcb0;
  puStack_70 = &UNK_180a3c3e0;
  uStack_58 = 0;
  puStack_68 = (int32_t *)0x0;
  uStack_60 = 0;
  puVar7 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x13,0x13);
  *(int8_t *)puVar7 = 0;
  puStack_68 = puVar7;
  uVar2 = FUN_18064e990(puVar7);
  *puVar7 = 0x6c6c7566;
  puVar7[1] = 0x766f6d5f;
  puVar7[2] = 0x6e656d65;
  puVar7[3] = 0x65735f74;
  *(int16_t *)(puVar7 + 4) = 0x7374;
  *(int8_t *)((longlong)puVar7 + 0x12) = 0;
  uStack_60 = 0x12;
  uStack_58._0_4_ = uVar2;
  FUN_1804e2190(0,&puStack_70);
  puStack_70 = &UNK_180a3c3e0;
  if (puStack_68 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_68 = (int32_t *)0x0;
  uStack_58 = (ulonglong)uStack_58._4_4_ << 0x20;
  puStack_70 = &UNK_18098bcb0;
  puStack_90 = &UNK_180a3c3e0;
  uStack_78 = 0;
  puStack_88 = (uint64_t *)0x0;
  uStack_80 = 0;
  puVar7 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar7 = 0;
  puStack_88 = (uint64_t *)puVar7;
  uVar2 = FUN_18064e990(puVar7);
  *puVar7 = 0x656e6f62;
  puVar7[1] = 0x646f625f;
  puVar7[2] = 0x79745f79;
  puVar7[3] = 0x736570;
  uStack_80 = 0xf;
  uStack_78._0_4_ = uVar2;
  FUN_1804e2550(0x656e6f62,&puStack_90);
  puStack_90 = &UNK_180a3c3e0;
  if (puStack_88 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_88 = (uint64_t *)0x0;
  uStack_78 = (ulonglong)uStack_78._4_4_ << 0x20;
  puStack_90 = &UNK_18098bcb0;
  puStack_70 = &UNK_180a3c3e0;
  uStack_58 = 0;
  puStack_68 = (int32_t *)0x0;
  uStack_60 = 0;
  puVar7 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x13,0x13);
  *(int8_t *)puVar7 = 0;
  puStack_68 = puVar7;
  uVar2 = FUN_18064e990(puVar7);
  *puVar7 = 0x736e6f6d;
  puVar7[1] = 0x5f726574;
  puVar7[2] = 0x67617375;
  puVar7[3] = 0x65735f65;
  *(int16_t *)(puVar7 + 4) = 0x7374;
  *(int8_t *)((longlong)puVar7 + 0x12) = 0;
  uStack_60 = 0x12;
  uStack_58._0_4_ = uVar2;
  FUN_1804e2890(0,&puStack_70);
  puStack_70 = &UNK_180a3c3e0;
  if (puStack_68 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_68 = (int32_t *)0x0;
  uStack_58 = (ulonglong)uStack_58._4_4_ << 0x20;
  puStack_70 = &UNK_18098bcb0;
  puStack_50 = &UNK_180a3c3e0;
  uStack_38 = 0;
  puStack_48 = (int32_t *)0x0;
  uStack_40 = 0;
  puVar7 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar7 = 0;
  puStack_48 = puVar7;
  uVar2 = FUN_18064e990(puVar7);
  *puVar7 = 0x6d657469;
  puVar7[1] = 0x6173755f;
  puVar7[2] = 0x735f6567;
  puVar7[3] = 0x737465;
  uStack_40 = 0xf;
  uStack_38._0_4_ = uVar2;
  FUN_1804e2be0(0x6d657469,&puStack_50);
  puStack_50 = &UNK_180a3c3e0;
  if (puStack_48 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_48 = (int32_t *)0x0;
  uStack_38 = (ulonglong)uStack_38._4_4_ << 0x20;
  puStack_50 = &UNK_18098bcb0;
  FUN_18015b3a0(uVar5);
  uVar1 = _DAT_180c92500;
  puStack_90 = &UNK_180a3c3e0;
  uStack_78 = 0;
  puStack_88 = (uint64_t *)0x0;
  uStack_80 = 0;
  uVar9 = (ulonglong)_DAT_180c92500;
  uVar4 = 0;
  if (_DAT_180c924f8 == 0) {
LAB_1804e1774:
    uVar10 = uVar4;
    if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar8,_DAT_180c924f8,uVar9);
    }
  }
  else if (_DAT_180c92500 != 0) {
    iVar3 = _DAT_180c92500 + 1;
    if (iVar3 < 0x10) {
      iVar3 = 0x10;
    }
    puVar8 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar3,0x13);
    *puVar8 = 0;
    puStack_88 = (uint64_t *)puVar8;
    uVar4 = FUN_18064e990(puVar8);
    uStack_78 = CONCAT44(uStack_78._4_4_,uVar4);
    goto LAB_1804e1774;
  }
  uStack_80 = uVar1;
  if (puVar8 != (int8_t *)0x0) {
    puVar8[uVar9] = 0;
  }
  uStack_78 = CONCAT44(_DAT_180c9250c,(int32_t)uStack_78);
  if (uVar1 + 0x1c != 0) {
    uVar4 = uVar1 + 0x1d;
    if (puVar8 == (int8_t *)0x0) {
      if ((int)uVar4 < 0x10) {
        uVar4 = 0x10;
      }
      puVar8 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar4,0x13);
      *puVar8 = 0;
    }
    else {
      if (uVar4 <= uVar10) goto LAB_1804e1801;
      puVar8 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar8,uVar4,0x10,0x13);
    }
    puStack_88 = (uint64_t *)puVar8;
    uVar2 = FUN_18064e990(puVar8);
    uStack_78 = CONCAT44(uStack_78._4_4_,uVar2);
  }
LAB_1804e1801:
  puVar7 = (int32_t *)(puVar8 + uVar9);
  *puVar7 = 0x75646f4d;
  puVar7[1] = 0x6144656c;
  puVar7[2] = 0x692f6174;
  puVar7[3] = 0x5f6d6574;
  *(uint64_t *)(puVar7 + 4) = 0x73726574736c6f68;
  puVar7[6] = 0x6c6d782e;
  *(int8_t *)(puVar7 + 7) = 0;
  uStack_80 = uVar1 + 0x1c;
  FUN_1804c37a0(&system_data_61b0);
  puStack_90 = &UNK_180a3c3e0;
  if (puVar8 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar8);
  }
  return;
}






// 函数: void FUN_1804e18c0(longlong param_1)
void FUN_1804e18c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      lVar2 = *(longlong *)(lVar1 + uVar3 * 8);
      if (lVar2 != 0) {
        if ((*(char *)(lVar2 + 0x20) == '\0') && (*(longlong *)(lVar2 + 8) != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar1 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
    uVar4 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar4) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






