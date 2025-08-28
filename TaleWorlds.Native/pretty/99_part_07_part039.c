#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part039.c - 22 个函数

// 函数: void FUN_1804bf3a0(longlong *param_1)
void FUN_1804bf3a0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  int32_t uVar13;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong lStackX_18;
  longlong lStackX_20;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_90;
  longlong lStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  uint64_t uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 3;
  plVar10 = (longlong *)0x0;
  lStackX_20 = *(longlong *)(*param_1 + 0xc0);
  plVar8 = (longlong *)0x0;
  plVar2 = (longlong *)0x0;
  plVar7 = plVar2;
  plStackX_8 = param_1;
  if (lStackX_20 != *param_1 + 0xb8) {
    do {
      lStackX_18 = *(longlong *)(lStackX_20 + 0x28);
      if (plVar8 < plVar10) {
        *plVar8 = *(longlong *)(lStackX_18 + 0x370);
        plVar2 = plVar7;
      }
      else {
        lVar6 = (longlong)plVar8 - (longlong)plVar7 >> 3;
        if (lVar6 == 0) {
          lVar6 = 1;
LAB_1804bf45e:
          plVar2 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar6 * 8,3);
        }
        else {
          lVar6 = lVar6 * 2;
          if (lVar6 != 0) goto LAB_1804bf45e;
          plVar2 = (longlong *)0x0;
        }
        if (plVar7 != plVar8) {
                    // WARNING: Subroutine does not return
          memmove(plVar2,plVar7,(longlong)plVar8 - (longlong)plVar7);
        }
        *plVar2 = *(longlong *)(lStackX_18 + 0x370);
        if (plVar7 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar7);
        }
        plVar10 = plVar2 + lVar6;
        plVar8 = plVar2;
      }
      plVar8 = plVar8 + 1;
      pplStackX_10 = (longlong **)((ulonglong)pplStackX_10 & 0xffffffff00000000);
      if (0 < *(int *)(lStackX_18 + 0x380)) {
        lVar6 = 0;
        do {
          plVar1 = (longlong *)(*(longlong *)(lStackX_18 + 0x378) + 0x40 + lVar6);
          lStack_c0 = 5;
          plVar7 = plVar2;
          do {
            lVar5 = *plVar1;
            if (plVar8 < plVar10) {
              *plVar8 = lVar5;
              plVar2 = plVar7;
            }
            else {
              lVar12 = (longlong)plVar8 - (longlong)plVar7 >> 3;
              if (lVar12 == 0) {
                lVar12 = 1;
LAB_1804bf555:
                plVar2 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar12 * 8,3);
              }
              else {
                lVar12 = lVar12 * 2;
                if (lVar12 != 0) goto LAB_1804bf555;
                plVar2 = (longlong *)0x0;
              }
              if (plVar7 != plVar8) {
                    // WARNING: Subroutine does not return
                memmove(plVar2,plVar7,(longlong)plVar8 - (longlong)plVar7);
              }
              *plVar2 = lVar5;
              if (plVar7 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(plVar7);
              }
              plVar10 = plVar2 + lVar12;
              plVar8 = plVar2;
            }
            plVar8 = plVar8 + 1;
            plVar1 = plVar1 + 1;
            lStack_c0 = lStack_c0 + -1;
            plVar7 = plVar2;
          } while (lStack_c0 != 0);
          iVar3 = (int)pplStackX_10 + 1;
          pplStackX_10 = (longlong **)CONCAT44(pplStackX_10._4_4_,iVar3);
          lVar6 = lVar6 + 400;
        } while (iVar3 < *(int *)(lStackX_18 + 0x380));
      }
      pplStackX_10 = (longlong **)((ulonglong)pplStackX_10 & 0xffffffff00000000);
      if (0 < *(int *)(lStackX_18 + 0x390)) {
        lVar6 = 0;
        do {
          plVar1 = (longlong *)(*(longlong *)(lStackX_18 + 0x388) + 0x40 + lVar6);
          lStack_c8 = 5;
          plVar7 = plVar2;
          do {
            lVar5 = *plVar1;
            if (plVar8 < plVar10) {
              *plVar8 = lVar5;
              plVar2 = plVar7;
            }
            else {
              lVar12 = (longlong)plVar8 - (longlong)plVar7 >> 3;
              if (lVar12 == 0) {
                lVar12 = 1;
LAB_1804bf675:
                plVar2 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar12 * 8,3);
              }
              else {
                lVar12 = lVar12 * 2;
                if (lVar12 != 0) goto LAB_1804bf675;
                plVar2 = (longlong *)0x0;
              }
              if (plVar7 != plVar8) {
                    // WARNING: Subroutine does not return
                memmove(plVar2,plVar7,(longlong)plVar8 - (longlong)plVar7);
              }
              *plVar2 = lVar5;
              if (plVar7 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(plVar7);
              }
              plVar10 = plVar2 + lVar12;
              plVar8 = plVar2;
            }
            plVar8 = plVar8 + 1;
            plVar1 = plVar1 + 1;
            lStack_c8 = lStack_c8 + -1;
            plVar7 = plVar2;
          } while (lStack_c8 != 0);
          iVar3 = (int)pplStackX_10 + 1;
          pplStackX_10 = (longlong **)CONCAT44(pplStackX_10._4_4_,iVar3);
          lVar6 = lVar6 + 400;
        } while (iVar3 < *(int *)(lStackX_18 + 0x390));
      }
      iVar3 = 0;
      pplStackX_10 = (longlong **)((ulonglong)pplStackX_10 & 0xffffffff00000000);
      if (0 < *(int *)(lStackX_18 + 0x3a0)) {
        lVar6 = 0;
        plVar7 = plVar2;
        do {
          lVar5 = *(longlong *)(lVar6 + 0x20 + *(longlong *)(lStackX_18 + 0x398));
          if (plVar8 < plVar10) {
            *plVar8 = lVar5;
            plVar2 = plVar7;
          }
          else {
            lVar12 = (longlong)plVar8 - (longlong)plVar7 >> 3;
            if (lVar12 == 0) {
              lVar12 = 1;
LAB_1804bf77e:
              plVar2 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar12 * 8,3);
            }
            else {
              lVar12 = lVar12 * 2;
              if (lVar12 != 0) goto LAB_1804bf77e;
              plVar2 = (longlong *)0x0;
            }
            if (plVar7 != plVar8) {
                    // WARNING: Subroutine does not return
              memmove(plVar2,plVar7,(longlong)plVar8 - (longlong)plVar7);
            }
            *plVar2 = lVar5;
            if (plVar7 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(plVar7);
            }
            plVar10 = plVar2 + lVar12;
            iVar3 = (int)pplStackX_10;
            plVar8 = plVar2;
          }
          plVar8 = plVar8 + 1;
          iVar3 = iVar3 + 1;
          pplStackX_10 = (longlong **)CONCAT44(pplStackX_10._4_4_,iVar3);
          lVar6 = lVar6 + 0x58;
          plVar7 = plVar2;
        } while (iVar3 < *(int *)(lStackX_18 + 0x3a0));
      }
      lStackX_20 = func_0x00018066bd70();
      plVar7 = plVar2;
    } while (lStackX_20 != *plStackX_8 + 0xb8);
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 3;
  uVar13 = FUN_1801cf2b0(0,&uStack_70,1,1,0);
  iVar3 = 0;
  uVar9 = (longlong)plVar8 - (longlong)plVar2 >> 3;
  plVar10 = plVar2;
  if (uVar9 != 0) {
    do {
      lVar6 = *plVar10;
      if (lVar6 != 0) {
        iVar11 = 0;
        lVar5 = *(longlong *)(lVar6 + 0x38);
        if (*(longlong *)(lVar6 + 0x40) - lVar5 >> 4 != 0) {
          lVar12 = 0;
          do {
            uVar4 = *(uint *)(*(longlong *)(lVar5 + lVar12) + 0x100) >> 0x16 & 0xffffff01;
            pplStackX_10 = &plStackX_8;
            plStackX_8 = (longlong *)0x0;
            uVar13 = FUN_1801cdb50(uVar4,*(uint64_t *)(*(longlong *)(lVar5 + lVar12) + 0x1b8),
                                   &uStack_70,0,0,0,(char)uVar4,&lStack_90,1,1,0,&plStackX_8);
            iVar11 = iVar11 + 1;
            lVar12 = lVar12 + 0x10;
            lVar5 = *(longlong *)(lVar6 + 0x38);
          } while ((ulonglong)(longlong)iVar11 <
                   (ulonglong)(*(longlong *)(lVar6 + 0x40) - lVar5 >> 4));
        }
      }
      pplStackX_10 = &plStackX_8;
      plStackX_8 = (longlong *)0x0;
      uVar13 = FUN_1801de280(uVar13,&lStack_90,&plStackX_8);
      lStack_88 = lStack_90;
      iVar3 = iVar3 + 1;
      plVar10 = plVar10 + 1;
    } while ((ulonglong)(longlong)iVar3 < uVar9);
  }
  uVar13 = FUN_1801da210(uVar13,&lStack_90,1);
  uVar13 = FUN_1801dbdc0(uVar13,&lStack_90);
  uVar13 = FUN_1801d2240(uVar13,&lStack_90);
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)0x0;
  FUN_1801de280(uVar13,&lStack_90,&plStackX_8);
  FUN_1801d7420();
  FUN_180080df0(&uStack_70);
  if (plVar2 == (longlong *)0x0) {
    if (lStack_90 == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar2);
}






// 函数: void FUN_1804bf9e0(longlong param_1,longlong param_2)
void FUN_1804bf9e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *(int32_t *)(param_1 + 0x10) = 0;
    **(int8_t **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 0x90) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x0001804bfa19. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(param_1 + 8),0x90);
    return;
  }
  FUN_180626f80(&unknown_var_616_ptr,0x90,param_2);
  *(int32_t *)(param_1 + 0x10) = 0;
  **(int8_t **)(param_1 + 8) = 0;
  return;
}






// 函数: void FUN_1804bfa60(longlong param_1,uint64_t param_2,int param_3)
void FUN_1804bfa60(longlong param_1,uint64_t param_2,int param_3)

{
  if (param_3 + 1 < 0x90) {
                    // WARNING: Subroutine does not return
    memcpy(*(int8_t **)(param_1 + 8),param_2,(longlong)param_3);
  }
  **(int8_t **)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  return;
}






// 函数: void FUN_1804bfa81(void)
void FUN_1804bfa81(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}






// 函数: void FUN_1804bfaa6(int8_t *param_1)
void FUN_1804bfaa6(int8_t *param_1)

{
  longlong unaff_RDI;
  
  *param_1 = 0;
  *(int32_t *)(unaff_RDI + 0x10) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804bfac0(longlong param_1,longlong param_2,longlong param_3)
void FUN_1804bfac0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int8_t auStack_128 [32];
  uint64_t uStack_108;
  void *puStack_f8;
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int8_t auStack_e0 [152];
  ulonglong uStack_48;
  
  uStack_108 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_128;
  puStack_f8 = &unknown_var_760_ptr;
  puStack_f0 = auStack_e0;
  uStack_e8 = 0;
  auStack_e0[0] = 0;
  lVar1 = strstr(*(uint64_t *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(puStack_f0,*(longlong *)(param_1 + 8),lVar1 - *(longlong *)(param_1 + 8));
  }
  puStack_f8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_128);
}






// 函数: void FUN_1804bfc50(int *param_1)
void FUN_1804bfc50(int *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *param_1) {
    lVar1 = 0;
    do {
      (*(code *)**(uint64_t **)(lVar1 + *(longlong *)(param_1 + 2)))
                ((longlong)iVar2 * 0xa8 + *(longlong *)(param_1 + 2),0);
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 0xa8;
    } while (iVar2 < *param_1);
  }
  if (*(longlong *)(param_1 + 2) == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804bfc56(int *param_1)
void FUN_1804bfc56(int *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *param_1) {
    lVar1 = 0;
    do {
      (*(code *)**(uint64_t **)(lVar1 + *(longlong *)(param_1 + 2)))
                ((longlong)iVar2 * 0xa8 + *(longlong *)(param_1 + 2),0);
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 0xa8;
    } while (iVar2 < *param_1);
  }
  if (*(longlong *)(param_1 + 2) == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804bfc64(void)
void FUN_1804bfc64(void)

{
  int *unaff_RBX;
  longlong lVar1;
  int unaff_EDI;
  
  lVar1 = 0;
  do {
    (*(code *)**(uint64_t **)(lVar1 + *(longlong *)(unaff_RBX + 2)))
              ((longlong)unaff_EDI * 0xa8 + *(longlong *)(unaff_RBX + 2),0);
    unaff_EDI = unaff_EDI + 1;
    lVar1 = lVar1 + 0xa8;
  } while (unaff_EDI < *unaff_RBX);
  if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_1804bfc9c(void)
void FUN_1804bfc9c(void)

{
  longlong unaff_RBX;
  
  if (*(longlong *)(unaff_RBX + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



void thunk_FUN_18064e900(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804bfcc0(longlong *param_1)
void FUN_1804bfcc0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    FUN_18004b730(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804bfd30(longlong *param_1)
void FUN_1804bfd30(longlong *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar1 = (uint64_t *)param_1[1];
  puVar2 = (uint64_t *)*param_1;
  while( true ) {
    if (puVar2 == puVar1) {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    puVar2[6] = &unknown_var_3456_ptr;
    if (puVar2[7] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar2[7] = 0;
    *(int32_t *)(puVar2 + 9) = 0;
    puVar2[6] = &unknown_var_720_ptr;
    if ((longlong *)puVar2[5] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar2[5] + 0x38))();
    }
    if ((longlong *)puVar2[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar2[4] + 0x38))();
    }
    *puVar2 = &unknown_var_3456_ptr;
    if (puVar2[1] != 0) break;
    puVar2[1] = 0;
    *(int32_t *)(puVar2 + 3) = 0;
    *puVar2 = &unknown_var_720_ptr;
    puVar2 = puVar2 + 10;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804bfe20(longlong param_1)
void FUN_1804bfe20(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_18033b1a0();
  if ((1 < *(ulonglong *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804bfe50(longlong param_1)
void FUN_1804bfe50(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  
  puVar6 = *(uint64_t **)(param_1 + 8);
  uVar7 = *(ulonglong *)(param_1 + 0x10);
  uVar5 = 0;
  if (uVar7 != 0) {
    do {
      puVar2 = (uint64_t *)puVar6[uVar5];
      while (puVar3 = puVar2, puVar3 != (uint64_t *)0x0) {
        puVar2 = (uint64_t *)puVar3[1];
        if (puVar3 != *(uint64_t **)(param_1 + 0x60)) {
          if ((puVar3 < *(uint64_t **)(param_1 + 0x58)) ||
             (*(uint64_t **)(param_1 + 0x40) <= puVar3)) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *puVar3 = *(uint64_t *)(param_1 + 0x30);
          *(uint64_t **)(param_1 + 0x30) = puVar3;
        }
      }
      puVar6[uVar5] = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
    puVar6 = *(uint64_t **)(param_1 + 8);
    uVar7 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar7) && (puVar6 != *(uint64_t **)(param_1 + 0x60))) {
    if ((*(uint64_t **)(param_1 + 0x58) <= puVar6) && (puVar6 < *(uint64_t **)(param_1 + 0x40)))
    {
      *puVar6 = *(uint64_t *)(param_1 + 0x30);
      *(uint64_t **)(param_1 + 0x30) = puVar6;
      return;
    }
    if (puVar6 != (uint64_t *)0x0) {
      uVar7 = (ulonglong)puVar6 & 0xffffffffffc00000;
      if (uVar7 != 0) {
        lVar4 = uVar7 + 0x80 + ((longlong)puVar6 - uVar7 >> 0x10) * 0x50;
        lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
        if ((*(void ***)(uVar7 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
          *puVar6 = *(uint64_t *)(lVar4 + 0x20);
          *(uint64_t **)(lVar4 + 0x20) = puVar6;
          piVar1 = (int *)(lVar4 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_18064d630();
            return;
          }
        }
        else {
          func_0x00018064e870(uVar7,CONCAT71(0xff000000,*(void ***)(uVar7 + 0x70) == &ExceptionList)
                              ,puVar6,uVar7,0xfffffffffffffffe);
        }
      }
      return;
    }
  }
  return;
}






// 函数: void FUN_1804bfe5e(longlong param_1)
void FUN_1804bfe5e(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  longlong lVar4;
  longlong unaff_RBX;
  ulonglong uVar5;
  uint64_t *unaff_RSI;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      puVar2 = (uint64_t *)unaff_RSI[uVar5];
      while (puVar3 = puVar2, puVar3 != (uint64_t *)0x0) {
        puVar2 = (uint64_t *)puVar3[1];
        if (puVar3 != *(uint64_t **)(unaff_RBX + 0x60)) {
          if ((puVar3 < *(uint64_t **)(unaff_RBX + 0x58)) ||
             (*(uint64_t **)(unaff_RBX + 0x40) <= puVar3)) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *puVar3 = *(uint64_t *)(unaff_RBX + 0x30);
          *(uint64_t **)(unaff_RBX + 0x30) = puVar3;
        }
      }
      unaff_RSI[uVar5] = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    unaff_RSI = *(uint64_t **)(unaff_RBX + 8);
    uVar6 = *(ulonglong *)(unaff_RBX + 0x10);
  }
  *(uint64_t *)(unaff_RBX + 0x18) = 0;
  if ((1 < uVar6) && (unaff_RSI != *(uint64_t **)(unaff_RBX + 0x60))) {
    if ((*(uint64_t **)(unaff_RBX + 0x58) <= unaff_RSI) &&
       (unaff_RSI < *(uint64_t **)(unaff_RBX + 0x40))) {
      *unaff_RSI = *(uint64_t *)(unaff_RBX + 0x30);
      *(uint64_t **)(unaff_RBX + 0x30) = unaff_RSI;
      return;
    }
    if (unaff_RSI != (uint64_t *)0x0) {
      uVar6 = (ulonglong)unaff_RSI & 0xffffffffffc00000;
      if (uVar6 != 0) {
        lVar4 = uVar6 + 0x80 + ((longlong)unaff_RSI - uVar6 >> 0x10) * 0x50;
        lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
        if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
          *unaff_RSI = *(uint64_t *)(lVar4 + 0x20);
          *(uint64_t **)(lVar4 + 0x20) = unaff_RSI;
          piVar1 = (int *)(lVar4 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_18064d630();
            return;
          }
        }
        else {
          func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList)
                              ,unaff_RSI,uVar6,0xfffffffffffffffe);
        }
      }
      return;
    }
  }
  return;
}






// 函数: void FUN_1804bfe7c(void)
void FUN_1804bfe7c(void)

{
  int *piVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  longlong lVar4;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar5;
  ulonglong unaff_R14;
  uint64_t unaff_R15;
  
  do {
    puVar2 = *(uint64_t **)(unaff_RSI + unaff_RBP * 8);
    while (puVar3 = puVar2, puVar3 != (uint64_t *)0x0) {
      puVar2 = (uint64_t *)puVar3[1];
      if (puVar3 != *(uint64_t **)(unaff_RBX + 0x60)) {
        if ((puVar3 < *(uint64_t **)(unaff_RBX + 0x58)) ||
           (*(uint64_t **)(unaff_RBX + 0x40) <= puVar3)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *puVar3 = *(uint64_t *)(unaff_RBX + 0x30);
        *(uint64_t **)(unaff_RBX + 0x30) = puVar3;
      }
    }
    *(uint64_t *)(unaff_RSI + unaff_RBP * 8) = unaff_R15;
    unaff_RBP = unaff_RBP + 1;
  } while (unaff_RBP < unaff_R14);
  puVar2 = *(uint64_t **)(unaff_RBX + 8);
  *(uint64_t *)(unaff_RBX + 0x18) = unaff_R15;
  if ((1 < *(ulonglong *)(unaff_RBX + 0x10)) && (puVar2 != *(uint64_t **)(unaff_RBX + 0x60))) {
    if ((*(uint64_t **)(unaff_RBX + 0x58) <= puVar2) &&
       (puVar2 < *(uint64_t **)(unaff_RBX + 0x40))) {
      *puVar2 = *(uint64_t *)(unaff_RBX + 0x30);
      *(uint64_t **)(unaff_RBX + 0x30) = puVar2;
      return;
    }
    if (puVar2 != (uint64_t *)0x0) {
      uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
      if (uVar5 != 0) {
        lVar4 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
        lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
        if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
          *puVar2 = *(uint64_t *)(lVar4 + 0x20);
          *(uint64_t **)(lVar4 + 0x20) = puVar2;
          piVar1 = (int *)(lVar4 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_18064d630();
            return;
          }
        }
        else {
          func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList)
                              ,puVar2,uVar5,0xfffffffffffffffe);
        }
      }
      return;
    }
  }
  return;
}






// 函数: void FUN_1804bfed9(void)
void FUN_1804bfed9(void)

{
  int *piVar1;
  longlong lVar2;
  longlong unaff_RBX;
  uint64_t *unaff_RSI;
  ulonglong uVar3;
  ulonglong unaff_R14;
  uint64_t unaff_R15;
  
  *(uint64_t *)(unaff_RBX + 0x18) = unaff_R15;
  if ((1 < unaff_R14) && (unaff_RSI != *(uint64_t **)(unaff_RBX + 0x60))) {
    if ((*(uint64_t **)(unaff_RBX + 0x58) <= unaff_RSI) &&
       (unaff_RSI < *(uint64_t **)(unaff_RBX + 0x40))) {
      *unaff_RSI = *(uint64_t *)(unaff_RBX + 0x30);
      *(uint64_t **)(unaff_RBX + 0x30) = unaff_RSI;
      return;
    }
    if (unaff_RSI != (uint64_t *)0x0) {
      uVar3 = (ulonglong)unaff_RSI & 0xffffffffffc00000;
      if (uVar3 != 0) {
        lVar2 = uVar3 + 0x80 + ((longlong)unaff_RSI - uVar3 >> 0x10) * 0x50;
        lVar2 = lVar2 - (ulonglong)*(uint *)(lVar2 + 4);
        if ((*(void ***)(uVar3 + 0x70) == &ExceptionList) && (*(char *)(lVar2 + 0xe) == '\0')) {
          *unaff_RSI = *(uint64_t *)(lVar2 + 0x20);
          *(uint64_t **)(lVar2 + 0x20) = unaff_RSI;
          piVar1 = (int *)(lVar2 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_18064d630();
            return;
          }
        }
        else {
          func_0x00018064e870(uVar3,CONCAT71(0xff000000,*(void ***)(uVar3 + 0x70) == &ExceptionList)
                             );
        }
      }
      return;
    }
  }
  return;
}






// 函数: void FUN_1804bfef2(void)
void FUN_1804bfef2(void)

{
  int *piVar1;
  longlong lVar2;
  longlong unaff_RBX;
  uint64_t *unaff_RSI;
  ulonglong uVar3;
  
  if (unaff_RSI != *(uint64_t **)(unaff_RBX + 0x60)) {
    if ((*(uint64_t **)(unaff_RBX + 0x58) <= unaff_RSI) &&
       (unaff_RSI < *(uint64_t **)(unaff_RBX + 0x40))) {
      *unaff_RSI = *(uint64_t *)(unaff_RBX + 0x30);
      *(uint64_t **)(unaff_RBX + 0x30) = unaff_RSI;
      return;
    }
    if (unaff_RSI != (uint64_t *)0x0) {
      uVar3 = (ulonglong)unaff_RSI & 0xffffffffffc00000;
      if (uVar3 != 0) {
        lVar2 = uVar3 + 0x80 + ((longlong)unaff_RSI - uVar3 >> 0x10) * 0x50;
        lVar2 = lVar2 - (ulonglong)*(uint *)(lVar2 + 4);
        if ((*(void ***)(uVar3 + 0x70) == &ExceptionList) && (*(char *)(lVar2 + 0xe) == '\0')) {
          *unaff_RSI = *(uint64_t *)(lVar2 + 0x20);
          *(uint64_t **)(lVar2 + 0x20) = unaff_RSI;
          piVar1 = (int *)(lVar2 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_18064d630();
            return;
          }
        }
        else {
          func_0x00018064e870(uVar3,CONCAT71(0xff000000,*(void ***)(uVar3 + 0x70) == &ExceptionList)
                             );
        }
      }
      return;
    }
  }
  return;
}






// 函数: void FUN_1804bff30(longlong param_1,byte *param_2)
void FUN_1804bff30(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  byte *pbStackX_10;
  byte *pbStack_18;
  byte *pbStack_10;
  
  for (lVar3 = *(longlong *)(param_1 + 0x30); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x58)) {
    *(uint64_t *)(lVar3 + 0x20) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  *(uint64_t *)(param_1 + 0x30) = 0;
  for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
    *(uint64_t *)(lVar3 + 0x20) = 0;
  }
  *(uint64_t *)(param_1 + 0x40) = 0;
  pbStackX_10 = param_2;
  if (((*param_2 == 0xef) && (param_2[1] == 0xbb)) && (param_2[2] == 0xbf)) {
    pbStackX_10 = param_2 + 3;
  }
  while( true ) {
    cVar2 = (&unknown_var_496_ptr)[*pbStackX_10];
    while (cVar2 != '\0') {
      pbVar1 = pbStackX_10 + 1;
      pbStackX_10 = pbStackX_10 + 1;
      cVar2 = (&unknown_var_496_ptr)[*pbVar1];
    }
    if (*pbStackX_10 == 0) break;
    if (*pbStackX_10 != 0x3c) {
      pbStack_18 = pbStackX_10;
      pbStack_10 = param_2;
      FUN_18062e140(&unknown_var_8032_ptr,&pbStack_18);
      return;
    }
    pbStackX_10 = pbStackX_10 + 1;
    lVar3 = FUN_1804c0770(param_1,param_2,&pbStackX_10);
    if (lVar3 != 0) {
      if (*(longlong *)(param_1 + 0x30) == 0) {
        *(uint64_t *)(lVar3 + 0x50) = 0;
        *(longlong *)(param_1 + 0x30) = lVar3;
      }
      else {
        *(uint64_t *)(lVar3 + 0x50) = *(uint64_t *)(param_1 + 0x38);
        *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x58) = lVar3;
      }
      *(longlong *)(param_1 + 0x38) = lVar3;
      *(longlong *)(lVar3 + 0x20) = param_1;
      *(uint64_t *)(lVar3 + 0x58) = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804c0070(longlong *param_1,ulonglong param_2)
void FUN_1804c0070(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if (param_2 <= (ulonglong)((param_1[2] - lVar3) / 0xa0c)) {
    if (param_2 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar3,0,param_2 * 0xa0c);
    }
    param_1[1] = lVar3;
    return;
  }
  lVar4 = *param_1;
  lVar1 = (lVar3 - lVar4) / 0xa0c;
  uVar2 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 < lVar1 + param_2) {
    uVar2 = lVar1 + param_2;
  }
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar2 * 0xa0c,(char)param_1[3]);
    lVar4 = *param_1;
    lVar3 = param_1[1];
  }
  if (lVar4 != lVar3) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,lVar4,lVar3 - lVar4);
  }
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,param_2 * 0xa0c);
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = lVar1;
  param_1[2] = uVar2 * 0xa0c + lVar1;
  param_1[1] = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804c00bb(void)
void FUN_1804c00bb(void)

{
  longlong in_RAX;
  longlong lVar1;
  longlong *unaff_RBX;
  ulonglong uVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_R9;
  
  lVar1 = SUB168(SEXT816(in_RAX) * SEXT816(unaff_RSI - in_R9),8);
  lVar1 = (lVar1 >> 6) - (lVar1 >> 0x3f);
  uVar2 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 < (ulonglong)(lVar1 + unaff_RDI)) {
    uVar2 = lVar1 + unaff_RDI;
  }
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar2 * 0xa0c,(char)unaff_RBX[3]);
    in_R9 = *unaff_RBX;
    unaff_RSI = unaff_RBX[1];
  }
  if (in_R9 != unaff_RSI) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,in_R9,unaff_RSI - in_R9);
  }
  if (unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,unaff_RDI * 0xa0c);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RBX = lVar1;
  unaff_RBX[2] = uVar2 * 0xa0c + lVar1;
  unaff_RBX[1] = lVar1;
  return;
}






// 函数: void FUN_1804c01b4(void)
void FUN_1804c01b4(void)

{
  longlong unaff_RBX;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *(uint64_t *)(unaff_RBX + 8) = unaff_RSI;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




